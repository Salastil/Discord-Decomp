// ===== 004ffc7c  rive_hb_buffer_get_empty =====

undefined * rive_hb_buffer_get_empty(void)

{
  return &DAT_00686190;
}


// ===== 004ffc88  rive_hb_buffer_create_similar =====

long rive_hb_buffer_create_similar(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  
  lVar1 = rive_hb_buffer_create();
  rive_hb_unicode_funcs_destroy(*(undefined8 *)(lVar1 + 0x10));
  piVar2 = *(int **)(param_1 + 0x10);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    FUN_00340fe0(1,piVar2);
  }
  *(int **)(lVar1 + 0x10) = piVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return lVar1;
}


// ===== 004ffcf4  rive_hb_buffer_reset =====

void rive_hb_buffer_reset(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    FUN_004fee98();
    return;
  }
  return;
}


// ===== 004ffd04  rive_hb_buffer_reference =====

int * rive_hb_buffer_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_00340fe0(1,param_1);
  }
  return param_1;
}


// ===== 004ffd40  rive_hb_buffer_destroy =====

void rive_hb_buffer_destroy(int *param_1)

{
  int iVar1;
  mutex *this;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = FUN_00340fe0(0xffffffff,param_1), iVar1 == 1)) {
    *param_1 = -0xdead;
    this = *(mutex **)(param_1 + 2);
    if (this != (mutex *)0x0) {
      FUN_004fe408(this + 0x28,this);
      std::__ndk1::mutex::~mutex(this);
      free(this);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    rive_hb_unicode_funcs_destroy(*(undefined8 *)(param_1 + 4));
    free(*(void **)(param_1 + 0x1c));
    free(*(void **)(param_1 + 0x20));
    free(param_1);
    return;
  }
  return;
}


// ===== 004ffddc  rive_hb_buffer_set_user_data =====

int * rive_hb_buffer_set_user_data
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  mutex *this;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      this = *(mutex **)(param_1 + 2);
      while (this == (mutex *)0x0) {
        this = (mutex *)calloc(1,0x38);
        if (this == (mutex *)0x0) {
          return (int *)0x0;
        }
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)this = 0;
        lVar2 = FUN_003410d0(0,this,param_1 + 2);
        if (lVar2 == 0) break;
        FUN_004fe408(this + 0x28,this);
        std::__ndk1::mutex::~mutex(this);
        free(this);
        this = *(mutex **)(param_1 + 2);
      }
      uVar1 = FUN_004fe740(this,param_2,param_3,param_4,param_5);
      param_1 = (int *)(ulong)(uVar1 & 1);
    }
  }
  return param_1;
}


// ===== 004ffec4  rive_hb_buffer_get_user_data =====

void rive_hb_buffer_get_user_data(int *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  int *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) || (*(long *)(param_1 + 2) == 0)) {
      param_1 = (int *)0x0;
    }
    else {
      local_40 = 0;
      local_38 = (int *)0x0;
      local_30 = 0;
      uVar2 = FUN_004feac8(*(long *)(param_1 + 2) + 0x28,param_2,&local_40);
      param_1 = local_38;
      if ((uVar2 & 1) == 0) {
        param_1 = (int *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


// ===== 004fff44  rive_hb_buffer_set_content_type =====

void rive_hb_buffer_set_content_type(long param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x30) = param_2;
  }
  return;
}


// ===== 004fff54  rive_hb_buffer_get_content_type =====

undefined4 rive_hb_buffer_get_content_type(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


// ===== 004fff5c  rive_hb_buffer_set_unicode_funcs =====

void rive_hb_buffer_set_unicode_funcs(long param_1,int *param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    if (param_2 == (int *)0x0) {
      param_2 = (int *)rive_hb_unicode_funcs_get_default();
    }
    if (*param_2 != 0) {
      FUN_00340fe0(1,param_2);
    }
    rive_hb_unicode_funcs_destroy(*(undefined8 *)(param_1 + 0x10));
    *(int **)(param_1 + 0x10) = param_2;
  }
  return;
}


// ===== 004fffb4  rive_hb_buffer_get_unicode_funcs =====

undefined8 rive_hb_buffer_get_unicode_funcs(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 004fffbc  rive_hb_buffer_set_direction =====

void rive_hb_buffer_set_direction(long param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x38) = param_2;
  }
  return;
}


// ===== 004fffcc  rive_hb_buffer_get_direction =====

undefined4 rive_hb_buffer_get_direction(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}


// ===== 004fffd4  rive_hb_buffer_set_script =====

void rive_hb_buffer_set_script(long param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
  }
  return;
}


// ===== 004fffe4  rive_hb_buffer_get_script =====

undefined4 rive_hb_buffer_get_script(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}


// ===== 004fffec  rive_hb_buffer_set_language =====

void rive_hb_buffer_set_language(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x40) = param_2;
  }
  return;
}


// ===== 004ffffc  rive_hb_buffer_get_language =====

undefined8 rive_hb_buffer_get_language(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 00500004  rive_hb_buffer_set_segment_properties =====

void rive_hb_buffer_set_segment_properties(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar1 = param_2[2];
    *(undefined8 *)(param_1 + 0x50) = param_2[3];
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
  }
  return;
}


// ===== 0050001c  rive_hb_buffer_get_segment_properties =====

void rive_hb_buffer_get_segment_properties(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  param_2[1] = *(undefined8 *)(param_1 + 0x40);
  *param_2 = uVar3;
  param_2[3] = uVar2;
  param_2[2] = uVar1;
  return;
}


// ===== 0050002c  rive_hb_buffer_set_flags =====

void rive_hb_buffer_set_flags(long param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x18) = param_2;
  }
  return;
}


// ===== 0050003c  rive_hb_buffer_get_flags =====

undefined4 rive_hb_buffer_get_flags(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


// ===== 00500044  rive_hb_buffer_set_cluster_level =====

void rive_hb_buffer_set_cluster_level(long param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = param_2;
  }
  return;
}


// ===== 00500054  rive_hb_buffer_get_cluster_level =====

undefined4 rive_hb_buffer_get_cluster_level(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}


// ===== 0050005c  rive_hb_buffer_set_replacement_codepoint =====

void rive_hb_buffer_set_replacement_codepoint(long param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x20) = param_2;
  }
  return;
}


// ===== 0050006c  rive_hb_buffer_get_replacement_codepoint =====

undefined4 rive_hb_buffer_get_replacement_codepoint(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// ===== 00500074  rive_hb_buffer_set_invisible_glyph =====

void rive_hb_buffer_set_invisible_glyph(long param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x24) = param_2;
  }
  return;
}


// ===== 00500084  rive_hb_buffer_get_invisible_glyph =====

undefined4 rive_hb_buffer_get_invisible_glyph(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


// ===== 0050008c  rive_hb_buffer_set_not_found_glyph =====

void rive_hb_buffer_set_not_found_glyph(long param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
  }
  return;
}


// ===== 0050009c  rive_hb_buffer_get_not_found_glyph =====

undefined4 rive_hb_buffer_get_not_found_glyph(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


// ===== 005000a4  rive_hb_buffer_set_not_found_variation_selector_glyph =====

void rive_hb_buffer_set_not_found_variation_selector_glyph(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


// ===== 005000ac  rive_hb_buffer_get_not_found_variation_selector_glyph =====

undefined4 rive_hb_buffer_get_not_found_variation_selector_glyph(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


// ===== 005000b4  rive_hb_buffer_set_random_state =====

void rive_hb_buffer_set_random_state(long param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0xd4) = param_2;
  }
  return;
}


// ===== 005000c4  rive_hb_buffer_get_random_state =====

undefined4 rive_hb_buffer_get_random_state(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd4);
}


// ===== 005000cc  rive_hb_buffer_clear_contents =====

void rive_hb_buffer_clear_contents(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined2 *)(param_1 + 0x58) = 1;
    *(undefined1 *)(param_1 + 0x5a) = 0;
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    uVar1 = DAT_0024e700;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined2 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd4) = uVar1;
  }
  return;
}


// ===== 00500120  rive_hb_buffer_pre_allocate =====

uint rive_hb_buffer_pre_allocate(long param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 != 0) && (*(uint *)(param_1 + 0x68) <= param_2)) {
    uVar1 = FUN_004fecc0(param_1);
    return uVar1 & 1;
  }
  return 1;
}


// ===== 00500158  rive_hb_buffer_allocation_successful =====

undefined1 rive_hb_buffer_allocation_successful(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}


// ===== 00500160  rive_hb_buffer_add =====

void rive_hb_buffer_add(long param_1)

{
  FUN_004fef3c();
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return;
}


// ===== 00500184  rive_hb_buffer_set_length =====

bool rive_hb_buffer_set_length(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    bVar3 = param_2 == 0;
  }
  else if (((param_2 == 0) || (param_2 < *(uint *)(param_1 + 0x68))) ||
          (uVar4 = FUN_004fecc0(param_1,param_2), (uVar4 & 1) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x60);
    if (uVar1 < param_2) {
      uVar2 = (param_2 - uVar1) * 0x14;
      if (uVar2 != 0) {
        memset((void *)(*(long *)(param_1 + 0x70) + (ulong)uVar1 * 0x14),0,(ulong)uVar2);
      }
      if (*(char *)(param_1 + 0x5a) != '\0') {
        uVar1 = (param_2 - *(uint *)(param_1 + 0x60)) * 0x14;
        if (uVar1 != 0) {
          memset((void *)(*(long *)(param_1 + 0x80) + (ulong)*(uint *)(param_1 + 0x60) * 0x14),0,
                 (ulong)uVar1);
        }
      }
      *(uint *)(param_1 + 0x60) = param_2;
    }
    else {
      *(uint *)(param_1 + 0x60) = param_2;
      if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0xb0) = 0;
      }
    }
    bVar3 = true;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// ===== 00500260  rive_hb_buffer_get_length =====

undefined4 rive_hb_buffer_get_length(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}


// ===== 00500268  rive_hb_buffer_get_glyph_infos =====

undefined8 rive_hb_buffer_get_glyph_infos(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x60);
  }
  return *(undefined8 *)(param_1 + 0x70);
}


// ===== 0050027c  rive_hb_buffer_get_glyph_positions =====

undefined8 rive_hb_buffer_get_glyph_positions(long param_1,undefined4 *param_2)

{
  uint uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x60);
  }
  if (*(char *)(param_1 + 0x5a) == '\0') {
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined2 *)(param_1 + 0x59) = 0x100;
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    uVar1 = *(int *)(param_1 + 0x60) * 0x14;
    if (uVar1 != 0) {
      memset(*(void **)(param_1 + 0x80),0,(ulong)uVar1);
    }
  }
  return *(undefined8 *)(param_1 + 0x80);
}


// ===== 005002e0  rive_hb_buffer_has_positions =====

undefined1 rive_hb_buffer_has_positions(long param_1)

{
  return *(undefined1 *)(param_1 + 0x5a);
}


// ===== 005002e8  rive_hb_buffer_reverse =====

void rive_hb_buffer_reverse(long param_1)

{
  FUN_005002f4(param_1,0,*(undefined4 *)(param_1 + 0x60));
  return;
}


// ===== 005002f4  FUN_005002f4 =====

void FUN_005002f4(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar4 = tpidr_el0;
  lVar5 = *(long *)(lVar4 + 0x28);
  uVar9 = *(uint *)(param_1 + 0x60);
  uVar1 = uVar9;
  if (param_2 <= uVar9) {
    uVar1 = param_2;
  }
  if (param_3 <= uVar9) {
    uVar9 = param_3;
  }
  if ((uVar1 + 2 <= uVar9) && (uVar1 < uVar1 + (uVar9 - uVar1 >> 1))) {
    lVar6 = *(long *)(param_1 + 0x70);
    uVar8 = uVar9 - uVar1 >> 1;
    puVar7 = (undefined8 *)(lVar6 + (ulong)uVar1 * 0x14);
    do {
      uVar9 = uVar9 - 1;
      puVar10 = (undefined8 *)(lVar6 + (ulong)uVar9 * 0x14);
      uVar11 = *puVar7;
      uVar2 = *(undefined4 *)(puVar7 + 2);
      uVar8 = uVar8 - 1;
      uVar13 = puVar10[1];
      uVar12 = *puVar10;
      uVar3 = *(undefined4 *)(puVar10 + 2);
      puVar10[1] = puVar7[1];
      *puVar10 = uVar11;
      *(undefined4 *)(puVar10 + 2) = uVar2;
      puVar7[1] = uVar13;
      *puVar7 = uVar12;
      *(undefined4 *)(puVar7 + 2) = uVar3;
      puVar7 = (undefined8 *)((long)puVar7 + 0x14);
    } while (uVar8 != 0);
  }
  if (*(char *)(param_1 + 0x5a) != '\0') {
    uVar9 = *(uint *)(param_1 + 0x60);
    uVar1 = uVar9;
    if (param_2 <= uVar9) {
      uVar1 = param_2;
    }
    if (param_3 <= uVar9) {
      uVar9 = param_3;
    }
    if ((uVar1 + 2 <= uVar9) && (uVar1 < uVar1 + (uVar9 - uVar1 >> 1))) {
      lVar6 = *(long *)(param_1 + 0x80);
      uVar8 = uVar9 - uVar1 >> 1;
      puVar7 = (undefined8 *)(lVar6 + (ulong)uVar1 * 0x14);
      do {
        uVar9 = uVar9 - 1;
        puVar10 = (undefined8 *)(lVar6 + (ulong)uVar9 * 0x14);
        uVar11 = *puVar7;
        uVar2 = *(undefined4 *)(puVar7 + 2);
        uVar8 = uVar8 - 1;
        uVar13 = puVar10[1];
        uVar12 = *puVar10;
        uVar3 = *(undefined4 *)(puVar10 + 2);
        puVar10[1] = puVar7[1];
        *puVar10 = uVar11;
        *(undefined4 *)(puVar10 + 2) = uVar2;
        puVar7[1] = uVar13;
        *puVar7 = uVar12;
        *(undefined4 *)(puVar7 + 2) = uVar3;
        puVar7 = (undefined8 *)((long)puVar7 + 0x14);
      } while (uVar8 != 0);
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00500424  rive_hb_buffer_reverse_range =====

void rive_hb_buffer_reverse_range(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar4 = tpidr_el0;
  lVar5 = *(long *)(lVar4 + 0x28);
  uVar9 = *(uint *)(param_1 + 0x60);
  uVar1 = uVar9;
  if (param_2 <= uVar9) {
    uVar1 = param_2;
  }
  if (param_3 <= uVar9) {
    uVar9 = param_3;
  }
  if ((uVar1 + 2 <= uVar9) && (uVar1 < uVar1 + (uVar9 - uVar1 >> 1))) {
    lVar6 = *(long *)(param_1 + 0x70);
    uVar8 = uVar9 - uVar1 >> 1;
    puVar7 = (undefined8 *)(lVar6 + (ulong)uVar1 * 0x14);
    do {
      uVar9 = uVar9 - 1;
      puVar10 = (undefined8 *)(lVar6 + (ulong)uVar9 * 0x14);
      uVar11 = *puVar7;
      uVar2 = *(undefined4 *)(puVar7 + 2);
      uVar8 = uVar8 - 1;
      uVar13 = puVar10[1];
      uVar12 = *puVar10;
      uVar3 = *(undefined4 *)(puVar10 + 2);
      puVar10[1] = puVar7[1];
      *puVar10 = uVar11;
      *(undefined4 *)(puVar10 + 2) = uVar2;
      puVar7[1] = uVar13;
      *puVar7 = uVar12;
      *(undefined4 *)(puVar7 + 2) = uVar3;
      puVar7 = (undefined8 *)((long)puVar7 + 0x14);
    } while (uVar8 != 0);
  }
  if (*(char *)(param_1 + 0x5a) != '\0') {
    uVar9 = *(uint *)(param_1 + 0x60);
    uVar1 = uVar9;
    if (param_2 <= uVar9) {
      uVar1 = param_2;
    }
    if (param_3 <= uVar9) {
      uVar9 = param_3;
    }
    if ((uVar1 + 2 <= uVar9) && (uVar1 < uVar1 + (uVar9 - uVar1 >> 1))) {
      lVar6 = *(long *)(param_1 + 0x80);
      uVar8 = uVar9 - uVar1 >> 1;
      puVar7 = (undefined8 *)(lVar6 + (ulong)uVar1 * 0x14);
      do {
        uVar9 = uVar9 - 1;
        puVar10 = (undefined8 *)(lVar6 + (ulong)uVar9 * 0x14);
        uVar11 = *puVar7;
        uVar2 = *(undefined4 *)(puVar7 + 2);
        uVar8 = uVar8 - 1;
        uVar13 = puVar10[1];
        uVar12 = *puVar10;
        uVar3 = *(undefined4 *)(puVar10 + 2);
        puVar10[1] = puVar7[1];
        *puVar10 = uVar11;
        *(undefined4 *)(puVar10 + 2) = uVar2;
        puVar7[1] = uVar13;
        *puVar7 = uVar12;
        *(undefined4 *)(puVar7 + 2) = uVar3;
        puVar7 = (undefined8 *)((long)puVar7 + 0x14);
      } while (uVar8 != 0);
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00500428  rive_hb_buffer_reverse_clusters =====

void rive_hb_buffer_reverse_clusters(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  uVar4 = (ulong)uVar2;
  if (uVar2 == 1) {
    uVar3 = 0;
  }
  else {
    if (uVar2 == 0) {
      return;
    }
    lVar6 = 0;
    uVar3 = 0;
    uVar5 = 1;
    do {
      lVar1 = *(long *)(param_1 + 0x70) + lVar6;
      if (*(int *)(lVar1 + 8) != *(int *)(lVar1 + 0x1c)) {
        FUN_005002f4(param_1,uVar3,uVar5 & 0xffffffff);
        uVar4 = (ulong)*(uint *)(param_1 + 0x60);
        uVar3 = uVar5 & 0xffffffff;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x14;
    } while (uVar5 < uVar4);
    uVar4 = uVar5 & 0xffffffff;
  }
  FUN_005002f4(param_1,uVar3,uVar4);
  FUN_005002f4(param_1,0,*(undefined4 *)(param_1 + 0x60));
  return;
}


// ===== 005004d4  rive_hb_buffer_t::_cluster_group_func =====

/* rive_hb_buffer_t::_cluster_group_func(rive_hb_glyph_info_t const&, rive_hb_glyph_info_t const&)
    */

bool rive_hb_buffer_t::_cluster_group_func
               (rive_hb_glyph_info_t *param_1,rive_hb_glyph_info_t *param_2)

{
  return *(int *)(param_1 + 8) == *(int *)(param_2 + 8);
}


// ===== 005004e8  rive_hb_buffer_guess_segment_properties =====

void rive_hb_buffer_guess_segment_properties(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((*(int *)(param_1 + 0x3c) == 0) && (*(int *)(param_1 + 0x60) != 0)) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x10);
      iVar1 = (**(code **)(lVar3 + 0x30))
                        (lVar3,*(undefined4 *)(*(long *)(param_1 + 0x70) + lVar4),
                         *(undefined8 *)(lVar3 + 0x60));
      if ((iVar1 != 0x5a696e68 && iVar1 != 0x5a797979) && iVar1 != 0x5a7a7a7a) {
        *(int *)(param_1 + 0x3c) = iVar1;
        break;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x14;
    } while (uVar5 < *(uint *)(param_1 + 0x60));
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar2 = rive_hb_script_get_horizontal_direction(*(undefined4 *)(param_1 + 0x3c));
    iVar1 = 4;
    if (iVar2 != 0) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + 0x38) = iVar1;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar4 = DAT_00687048;
    if (DAT_00687048 == 0) {
      lVar4 = FUN_00501dec(&DAT_00249bdf);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(lVar4 + 8);
      }
      FUN_003410d0(0,lVar4,&DAT_00687048);
    }
    *(long *)(param_1 + 0x40) = lVar4;
  }
  return;
}


// ===== 005005f8  rive_hb_buffer_add_utf8 =====

void rive_hb_buffer_add_utf8(long param_1,byte *param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  size_t sVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    if (param_3 == -1) {
      sVar6 = strlen((char *)param_2);
      param_3 = (int)sVar6;
    }
    uVar1 = param_3 - param_4;
    if (param_5 != 0xffffffff) {
      uVar1 = param_5;
    }
    if (uVar1 >> 0x1c == 0) {
      iVar3 = *(int *)(param_1 + 0x60);
      uVar8 = iVar3 + (uVar1 >> 2);
      if ((uVar8 != 0) && (*(uint *)(param_1 + 0x68) <= uVar8)) {
        uVar7 = FUN_004fecc0(param_1);
        if ((uVar7 & 1) == 0) {
          return;
        }
        iVar3 = *(int *)(param_1 + 0x60);
      }
      if ((param_4 != 0) && (iVar3 == 0)) {
        pbVar14 = param_2 + param_4;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        uVar7 = 0;
        do {
          pbVar11 = pbVar14 + -1;
          pbVar9 = pbVar11;
          if (param_2 < pbVar11) {
            lVar13 = 1;
            pbVar10 = pbVar11;
            do {
              pbVar9 = pbVar10;
              if ((3 < lVar13) || ((*pbVar10 & 0xc0) != 0x80)) break;
              pbVar10 = pbVar10 + -1;
              lVar13 = lVar13 + 1;
              pbVar9 = param_2;
            } while (param_2 < pbVar10);
          }
          pbVar10 = pbVar9 + 1;
          uVar8 = (uint)*pbVar9;
          uVar12 = uVar8;
          if ((char)*pbVar9 < '\0') {
            if (uVar8 - 0xc2 < 0x1e) {
              uVar12 = uVar2;
              if ((pbVar10 < pbVar14) && (pbVar9[1] - 0x80 < 0x40)) {
                pbVar10 = pbVar9 + 2;
                uVar12 = pbVar9[1] - 0x80 | (uVar8 & 0x1f) << 6;
              }
            }
            else if ((uVar8 & 0xf0) == 0xe0) {
              uVar12 = uVar2;
              if (((1 < (long)pbVar14 - (long)pbVar10) && (*pbVar10 - 0x80 < 0x40)) &&
                 ((pbVar9[2] - 0x80 < 0x40 &&
                  ((uVar4 = (uVar8 & 0xf) << 0xc, uVar8 = (*pbVar10 - 0x80) * 0x40,
                   (uVar4 | uVar8 & 0xf800) != 0xd800 &&
                   (uVar8 = pbVar9[2] - 0x80 | uVar4 | uVar8, 0x7ff < uVar8)))))) {
                pbVar10 = pbVar9 + 3;
                uVar12 = uVar8;
              }
            }
            else {
              uVar12 = uVar2;
              if (((((uVar8 - 0xf0 < 5) && (2 < (long)pbVar14 - (long)pbVar10)) &&
                   (*pbVar10 - 0x80 < 0x40)) &&
                  ((pbVar9[2] - 0x80 < 0x40 && (pbVar9[3] - 0x80 < 0x40)))) &&
                 (uVar8 = pbVar9[3] - 0x80 |
                          (uVar8 & 7) << 0x12 | (*pbVar10 - 0x80) * 0x1000 |
                          (pbVar9[2] - 0x80) * 0x40, uVar8 - 0x10000 < 0x100000)) {
                pbVar10 = pbVar9 + 4;
                uVar12 = uVar8;
              }
            }
          }
          bVar5 = pbVar10 != pbVar14;
          pbVar14 = pbVar9;
          if (bVar5) {
            pbVar14 = pbVar11;
            uVar12 = uVar2;
          }
          *(int *)(param_1 + 0xb0) = (int)(uVar7 + 1);
          *(uint *)(param_1 + 0x88 + uVar7 * 4) = uVar12;
        } while ((param_2 < pbVar14) && (bVar5 = uVar7 < 4, uVar7 = uVar7 + 1, bVar5));
      }
      pbVar14 = param_2 + param_4;
      if (uVar1 != 0) {
        pbVar9 = pbVar14 + uVar1;
        pbVar11 = pbVar14;
        do {
          pbVar14 = pbVar11 + 1;
          uVar1 = (uint)*pbVar11;
          uVar8 = uVar1;
          if ((char)*pbVar11 < '\0') {
            uVar8 = uVar2;
            if (uVar1 - 0xc2 < 0x1e) {
              if ((pbVar14 < pbVar9) && (pbVar11[1] - 0x80 < 0x40)) {
                pbVar14 = pbVar11 + 2;
                uVar8 = pbVar11[1] - 0x80 | (uVar1 & 0x1f) << 6;
              }
            }
            else if ((uVar1 & 0xf0) == 0xe0) {
              if (((1 < (long)pbVar9 - (long)pbVar14) && (*pbVar14 - 0x80 < 0x40)) &&
                 ((pbVar11[2] - 0x80 < 0x40 &&
                  ((uVar12 = (uVar1 & 0xf) << 0xc, uVar1 = (*pbVar14 - 0x80) * 0x40,
                   (uVar12 | uVar1 & 0xf800) != 0xd800 &&
                   (uVar1 = pbVar11[2] - 0x80 | uVar12 | uVar1, 0x7ff < uVar1)))))) {
                pbVar14 = pbVar11 + 3;
                uVar8 = uVar1;
              }
            }
            else if ((((uVar1 - 0xf0 < 5) && (2 < (long)pbVar9 - (long)pbVar14)) &&
                     (*pbVar14 - 0x80 < 0x40)) &&
                    (((pbVar11[2] - 0x80 < 0x40 && (pbVar11[3] - 0x80 < 0x40)) &&
                     (uVar1 = pbVar11[3] - 0x80 |
                              (uVar1 & 7) << 0x12 | (*pbVar14 - 0x80) * 0x1000 |
                              (pbVar11[2] - 0x80) * 0x40, uVar1 - 0x10000 < 0x100000)))) {
              pbVar14 = pbVar11 + 4;
              uVar8 = uVar1;
            }
          }
          FUN_004fef3c(param_1,uVar8,(int)pbVar11 - (int)param_2);
          pbVar11 = pbVar14;
        } while (pbVar14 < pbVar9);
      }
      param_2 = param_2 + param_3;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      while (pbVar14 < param_2) {
        uVar1 = *(uint *)(param_1 + 0xb4);
        if (4 < uVar1) break;
        pbVar9 = pbVar14 + 1;
        uVar8 = (uint)*pbVar14;
        uVar12 = uVar8;
        if ((char)*pbVar14 < '\0') {
          uVar12 = uVar2;
          if (uVar8 - 0xc2 < 0x1e) {
            if ((pbVar9 < param_2) && (pbVar14[1] - 0x80 < 0x40)) {
              pbVar9 = pbVar14 + 2;
              uVar12 = pbVar14[1] - 0x80 | (uVar8 & 0x1f) << 6;
            }
          }
          else if ((uVar8 & 0xf0) == 0xe0) {
            if (((1 < (long)param_2 - (long)pbVar9) && (*pbVar9 - 0x80 < 0x40)) &&
               ((pbVar14[2] - 0x80 < 0x40 &&
                ((uVar4 = (uVar8 & 0xf) << 0xc, uVar8 = (*pbVar9 - 0x80) * 0x40,
                 (uVar4 | uVar8 & 0xf800) != 0xd800 &&
                 (uVar8 = pbVar14[2] - 0x80 | uVar4 | uVar8, 0x7ff < uVar8)))))) {
              pbVar9 = pbVar14 + 3;
              uVar12 = uVar8;
            }
          }
          else if ((((uVar8 - 0xf0 < 5) && (2 < (long)param_2 - (long)pbVar9)) &&
                   (*pbVar9 - 0x80 < 0x40)) &&
                  (((pbVar14[2] - 0x80 < 0x40 && (pbVar14[3] - 0x80 < 0x40)) &&
                   (uVar8 = pbVar14[3] - 0x80 |
                            (uVar8 & 7) << 0x12 | (*pbVar9 - 0x80) * 0x1000 |
                            (pbVar14[2] - 0x80) * 0x40, uVar8 - 0x10000 < 0x100000)))) {
            pbVar9 = pbVar14 + 4;
            uVar12 = uVar8;
          }
        }
        *(uint *)(param_1 + 0xb4) = uVar1 + 1;
        *(uint *)(param_1 + (ulong)uVar1 * 4 + 0x9c) = uVar12;
        pbVar14 = pbVar9;
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  return;
}


// ===== 00500af0  rive_hb_buffer_add_utf16 =====

void rive_hb_buffer_add_utf16(long param_1,ushort *param_2,ulong param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ushort *puVar15;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    uVar14 = param_3 & 0xffffffff;
    if ((int)param_3 == -1) {
      if (*param_2 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          lVar5 = uVar14 + 1;
          uVar14 = uVar14 + 1;
        } while (param_2[lVar5] != 0);
      }
    }
    uVar11 = (int)uVar14 - param_4;
    if (param_5 != 0xffffffff) {
      uVar11 = param_5;
    }
    if (uVar11 >> 0x1c == 0) {
      iVar8 = *(int *)(param_1 + 0x60);
      uVar12 = iVar8 + (uVar11 >> 1);
      if ((uVar12 != 0) && (*(uint *)(param_1 + 0x68) <= uVar12)) {
        uVar7 = FUN_004fecc0(param_1);
        if ((uVar7 & 1) == 0) {
          return;
        }
        iVar8 = *(int *)(param_1 + 0x60);
      }
      puVar15 = param_2 + param_4;
      if ((param_4 != 0) && (iVar8 == 0)) {
        uVar7 = 0;
        puVar10 = puVar15;
        do {
          puVar9 = puVar10 + -1;
          uVar4 = *puVar9;
          uVar12 = (uint)uVar4;
          if ((((uVar4 & 0xf800) == 0xd800) && (uVar12 = uVar2, param_2 < puVar9)) &&
             (0x36 < uVar4 >> 10)) {
            uVar13 = (uint)puVar10[-2];
            if ((uVar13 & 0xfc00) == 0xd800) {
              puVar9 = puVar10 + -2;
              uVar12 = (uint)uVar4 + uVar13 * 0x400 + 0xfca02400;
            }
          }
          uVar1 = uVar7 + 1;
          *(uint *)(param_1 + 0x88 + uVar7 * 4) = uVar12;
        } while ((param_2 < puVar9) && (bVar6 = uVar7 < 4, uVar7 = uVar1, puVar10 = puVar9, bVar6));
        *(int *)(param_1 + 0xb0) = (int)uVar1;
      }
      if (uVar11 != 0) {
        puVar10 = puVar15 + uVar11;
        puVar9 = puVar15;
        do {
          puVar15 = puVar9 + 1;
          uVar4 = *puVar9;
          uVar11 = (uint)uVar4;
          if ((((uVar4 & 0xf800) == 0xd800) && (uVar11 = uVar2, uVar4 >> 10 < 0x37)) &&
             ((puVar15 < puVar10 && (uVar3 = *puVar15, (uVar3 & 0xfc00) == 0xdc00)))) {
            puVar15 = puVar9 + 2;
            uVar11 = (uint)uVar3 + (uint)uVar4 * 0x400 + 0xfca02400;
          }
          FUN_004fef3c(param_1,uVar11,(ulong)((long)puVar9 - (long)param_2) >> 1);
          puVar9 = puVar15;
        } while (puVar15 < puVar10);
      }
      param_2 = param_2 + (int)uVar14;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      if (puVar15 < param_2) {
        uVar14 = 0;
        do {
          puVar10 = puVar15 + 1;
          uVar4 = *puVar15;
          uVar11 = (uint)uVar4;
          if (((((uVar4 & 0xf800) == 0xd800) && (uVar11 = uVar2, uVar4 >> 10 < 0x37)) &&
              (puVar10 < param_2)) && (uVar3 = *puVar10, (uVar3 & 0xfc00) == 0xdc00)) {
            puVar10 = puVar15 + 2;
            uVar11 = (uint)uVar3 + (uint)uVar4 * 0x400 + 0xfca02400;
          }
          *(int *)(param_1 + 0xb4) = (int)uVar14 + 1;
          *(uint *)(param_1 + uVar14 * 4 + 0x9c) = uVar11;
        } while ((puVar10 < param_2) &&
                (uVar14 = (ulong)*(uint *)(param_1 + 0xb4), puVar15 = puVar10,
                *(uint *)(param_1 + 0xb4) < 5));
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  return;
}


// ===== 00500d9c  rive_hb_buffer_add_utf32 =====

void rive_hb_buffer_add_utf32(long param_1,uint *param_2,ulong param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    uVar9 = param_3 & 0xffffffff;
    if ((int)param_3 == -1) {
      if (*param_2 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          lVar3 = uVar9 + 1;
          uVar9 = uVar9 + 1;
        } while (param_2[lVar3] != 0);
      }
    }
    uVar7 = (int)uVar9 - param_4;
    if (param_5 != 0xffffffff) {
      uVar7 = param_5;
    }
    if (uVar7 >> 0x1c == 0) {
      iVar5 = *(int *)(param_1 + 0x60);
      if ((iVar5 + uVar7 != 0) && (*(uint *)(param_1 + 0x68) <= iVar5 + uVar7)) {
        uVar10 = FUN_004fecc0(param_1);
        if ((uVar10 & 1) == 0) {
          return;
        }
        iVar5 = *(int *)(param_1 + 0x60);
      }
      if ((param_4 != 0) && (iVar5 == 0)) {
        puVar6 = param_2 + param_4;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        uVar10 = 0;
        do {
          puVar6 = puVar6 + -1;
          uVar8 = *puVar6;
          if (0x1a < uVar8 >> 0xb && uVar8 - 0x110000 < 0xffefe000) {
            uVar8 = uVar2;
          }
          *(int *)(param_1 + 0xb0) = (int)(uVar10 + 1);
          *(uint *)(param_1 + 0x88 + uVar10 * 4) = uVar8;
        } while ((param_2 < puVar6) && (bVar4 = uVar10 < 4, uVar10 = uVar10 + 1, bVar4));
      }
      puVar6 = param_2 + param_4;
      if (uVar7 != 0) {
        puVar1 = puVar6 + uVar7;
        uVar10 = (ulong)param_4 << 2;
        do {
          uVar7 = *(uint *)((long)param_2 + uVar10);
          if (0x1a < uVar7 >> 0xb && uVar7 - 0x110000 < 0xffefe000) {
            uVar7 = uVar2;
          }
          FUN_004fef3c(param_1,uVar7,uVar10 >> 2);
          uVar10 = uVar10 + 4;
          puVar6 = (uint *)((long)param_2 + uVar10);
        } while (puVar6 < puVar1);
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      if (puVar6 < param_2 + (int)uVar9) {
        uVar10 = 0;
        do {
          uVar7 = *puVar6;
          if (0x1a < uVar7 >> 0xb && uVar7 - 0x110000 < 0xffefe000) {
            uVar7 = uVar2;
          }
          puVar6 = puVar6 + 1;
          *(int *)(param_1 + 0xb4) = (int)uVar10 + 1;
          *(uint *)(param_1 + uVar10 * 4 + 0x9c) = uVar7;
        } while ((puVar6 < param_2 + (int)uVar9) &&
                (uVar10 = (ulong)*(uint *)(param_1 + 0xb4), *(uint *)(param_1 + 0xb4) < 5));
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  return;
}


// ===== 00500f7c  rive_hb_buffer_add_latin1 =====

void rive_hb_buffer_add_latin1(long param_1,byte *param_2,ulong param_3,uint param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  byte *pbVar8;
  int iVar9;
  ulong uVar10;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    uVar10 = param_3 & 0xffffffff;
    if ((int)param_3 == -1) {
      if (*param_2 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          lVar6 = uVar10 + 1;
          uVar10 = uVar10 + 1;
        } while (param_2[lVar6] != 0);
      }
    }
    iVar9 = (int)uVar10;
    uVar4 = iVar9 - param_4;
    if (param_5 != 0xffffffff) {
      uVar4 = param_5;
    }
    if (uVar4 >> 0x1c == 0) {
      iVar3 = *(int *)(param_1 + 0x60);
      uVar2 = iVar3 + (uVar4 >> 2);
      if ((uVar2 != 0) && (*(uint *)(param_1 + 0x68) <= uVar2)) {
        uVar10 = FUN_004fecc0(param_1);
        if ((uVar10 & 1) == 0) {
          return;
        }
        iVar3 = *(int *)(param_1 + 0x60);
      }
      if ((param_4 != 0) && (iVar3 == 0)) {
        pbVar8 = param_2 + param_4;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        uVar10 = 0;
        do {
          pbVar8 = pbVar8 + -1;
          bVar5 = *pbVar8;
          *(int *)(param_1 + 0xb0) = (int)(uVar10 + 1);
          *(uint *)(param_1 + 0x88 + uVar10 * 4) = (uint)bVar5;
          if (pbVar8 <= param_2) break;
          bVar7 = uVar10 < 4;
          uVar10 = uVar10 + 1;
        } while (bVar7);
      }
      uVar10 = (ulong)param_4;
      pbVar8 = param_2 + uVar10;
      if (uVar4 != 0) {
        pbVar1 = pbVar8 + uVar4;
        do {
          FUN_004fef3c(param_1,param_2[uVar10],uVar10 & 0xffffffff);
          uVar10 = uVar10 + 1;
          pbVar8 = param_2 + uVar10;
        } while (pbVar8 < pbVar1);
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      if (pbVar8 < param_2 + iVar9) {
        param_2 = param_2 + ((long)iVar9 - (long)pbVar8);
        do {
          uVar4 = *(uint *)(param_1 + 0xb4);
          if (4 < uVar4) break;
          bVar5 = *pbVar8;
          param_2 = param_2 + -1;
          *(uint *)(param_1 + 0xb4) = uVar4 + 1;
          *(uint *)(param_1 + (ulong)uVar4 * 4 + 0x9c) = (uint)bVar5;
          pbVar8 = pbVar8 + 1;
        } while (param_2 != (byte *)0x0);
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  return;
}


// ===== 005010ec  rive_hb_buffer_add_codepoints =====

void rive_hb_buffer_add_codepoints
               (long param_1,int *param_2,ulong param_3,uint param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    uVar7 = param_3 & 0xffffffff;
    if ((int)param_3 == -1) {
      if (*param_2 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          lVar4 = uVar7 + 1;
          uVar7 = uVar7 + 1;
        } while (param_2[lVar4] != 0);
      }
    }
    uVar2 = (int)uVar7 - param_4;
    if (param_5 != 0xffffffff) {
      uVar2 = param_5;
    }
    if (uVar2 >> 0x1c == 0) {
      iVar3 = *(int *)(param_1 + 0x60);
      if ((iVar3 + uVar2 != 0) && (*(uint *)(param_1 + 0x68) <= iVar3 + uVar2)) {
        uVar8 = FUN_004fecc0(param_1);
        if ((uVar8 & 1) == 0) {
          return;
        }
        iVar3 = *(int *)(param_1 + 0x60);
      }
      if ((param_4 != 0) && (iVar3 == 0)) {
        piVar6 = param_2 + param_4;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        uVar8 = 0;
        do {
          piVar6 = piVar6 + -1;
          iVar3 = *piVar6;
          *(int *)(param_1 + 0xb0) = (int)(uVar8 + 1);
          *(int *)(param_1 + 0x88 + uVar8 * 4) = iVar3;
          if (piVar6 <= param_2) break;
          bVar5 = uVar8 < 4;
          uVar8 = uVar8 + 1;
        } while (bVar5);
      }
      piVar6 = param_2 + param_4;
      if (uVar2 != 0) {
        piVar1 = piVar6 + uVar2;
        uVar8 = (ulong)param_4 << 2;
        do {
          FUN_004fef3c(param_1,*(undefined4 *)((long)param_2 + uVar8),uVar8 >> 2);
          uVar8 = uVar8 + 4;
          piVar6 = (int *)((long)param_2 + uVar8);
        } while (piVar6 < piVar1);
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      if (piVar6 < param_2 + (int)uVar7) {
        uVar8 = 0;
        do {
          iVar3 = *piVar6;
          *(int *)(param_1 + 0xb4) = (int)uVar8 + 1;
          *(int *)(param_1 + uVar8 * 4 + 0x9c) = iVar3;
          if (param_2 + (int)uVar7 <= piVar6 + 1) break;
          uVar8 = (ulong)*(uint *)(param_1 + 0xb4);
          piVar6 = piVar6 + 1;
        } while (*(uint *)(param_1 + 0xb4) < 5);
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  return;
}


// ===== 00501260  rive_hb_buffer_append =====

void rive_hb_buffer_append(long param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar3 = *(uint *)(param_2 + 0x60);
  if (param_4 <= *(uint *)(param_2 + 0x60)) {
    uVar3 = param_4;
  }
  uVar11 = (ulong)uVar3;
  uVar9 = uVar3;
  if (param_3 <= uVar3) {
    uVar9 = param_3;
  }
  if (param_3 < uVar3) {
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar6 = uVar3 - uVar9;
    if (CARRY4(uVar2,uVar6)) {
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
    else {
      rive_hb_buffer_set_length(param_1,uVar2 + uVar6);
      if (*(char *)(param_1 + 0x58) != '\0') {
        if (uVar2 == 0) {
          *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
        }
        if ((*(char *)(param_1 + 0x5a) == '\0') && (*(char *)(param_2 + 0x5a) != '\0')) {
          *(undefined4 *)(param_1 + 100) = 0;
          *(undefined2 *)(param_1 + 0x59) = 0x100;
          *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
          uVar5 = *(int *)(param_1 + 0x60) * 0x14;
          if (uVar5 != 0) {
            memset(*(void **)(param_1 + 0x80),0,(ulong)uVar5);
          }
        }
        rive_hb_segment_properties_overlay(param_1 + 0x38,param_2 + 0x38);
        memcpy((void *)(*(long *)(param_1 + 0x70) + (ulong)uVar2 * 0x14),
               (void *)(*(long *)(param_2 + 0x70) + (ulong)uVar9 * 0x14),(ulong)uVar6 * 0x14);
        if (*(char *)(param_1 + 0x5a) != '\0') {
          memcpy((void *)(*(long *)(param_1 + 0x80) + (ulong)uVar2 * 0x14),
                 (void *)(*(long *)(param_2 + 0x80) + (ulong)uVar9 * 0x14),(ulong)uVar6 * 0x14);
        }
        if (*(int *)(param_2 + 0x30) == 1) {
          if ((uVar2 == 0) && (uVar9 + *(int *)(param_2 + 0xb0) != 0)) {
            *(undefined4 *)(param_1 + 0xb0) = 0;
            if (param_3 != 0) {
              uVar9 = uVar9 - 1;
              lVar10 = *(long *)(param_2 + 0x70);
              uVar2 = uVar9;
              if (3 < uVar9) {
                uVar2 = 4;
              }
              uVar8 = 0;
              do {
                uVar7 = (ulong)uVar9;
                uVar1 = uVar8 + 1;
                uVar9 = uVar9 - 1;
                uVar4 = *(undefined4 *)(lVar10 + uVar7 * 0x14);
                *(int *)(param_1 + 0xb0) = (int)uVar1;
                *(undefined4 *)(param_1 + 0x88 + uVar8 * 4) = uVar4;
                uVar8 = uVar1;
              } while (uVar2 + 1 != uVar1);
            }
            if (*(int *)(param_2 + 0xb0) != 0) {
              uVar8 = 0;
              do {
                uVar9 = *(uint *)(param_1 + 0xb0);
                if (4 < uVar9) break;
                uVar4 = *(undefined4 *)(param_2 + 0x88 + uVar8 * 4);
                uVar8 = uVar8 + 1;
                *(uint *)(param_1 + 0xb0) = uVar9 + 1;
                *(undefined4 *)(param_1 + 0x88 + (ulong)uVar9 * 4) = uVar4;
              } while (uVar8 < *(uint *)(param_2 + 0xb0));
            }
          }
          *(undefined4 *)(param_1 + 0xb4) = 0;
          if (uVar3 < *(uint *)(param_2 + 0x60)) {
            lVar10 = (uVar11 * 4 + (ulong)uVar3) * 4;
            uVar8 = 0;
            while (uVar11 = uVar11 + 1, uVar8 < 5) {
              uVar4 = *(undefined4 *)(*(long *)(param_2 + 0x70) + lVar10);
              *(int *)(param_1 + 0xb4) = (int)uVar8 + 1;
              *(undefined4 *)(param_1 + uVar8 * 4 + 0x9c) = uVar4;
              if (*(uint *)(param_2 + 0x60) <= uVar11) break;
              lVar10 = lVar10 + 0x14;
              uVar8 = (ulong)*(uint *)(param_1 + 0xb4);
            }
          }
          if (*(int *)(param_2 + 0xb4) != 0) {
            uVar11 = 0;
            do {
              uVar3 = *(uint *)(param_1 + 0xb4);
              if (4 < uVar3) {
                return;
              }
              uVar4 = *(undefined4 *)(param_2 + 0x9c + uVar11 * 4);
              *(uint *)(param_1 + 0xb4) = uVar3 + 1;
              uVar11 = uVar11 + 1;
              *(undefined4 *)(param_1 + (ulong)uVar3 * 4 + 0x9c) = uVar4;
            } while (uVar11 < *(uint *)(param_2 + 0xb4));
          }
        }
      }
    }
  }
  return;
}


// ===== 005014cc  rive_hb_buffer_normalize_glyphs =====

void rive_hb_buffer_normalize_glyphs(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int *piVar17;
  long lVar18;
  size_t sVar19;
  int *piVar20;
  ulong uVar21;
  int *piVar22;
  ulong uVar23;
  undefined8 uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined8 uVar29;
  
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x38);
    uVar12 = 0;
    lVar13 = 0x1c;
    do {
      if (uVar2 - 1 == uVar12) {
        uVar12 = (ulong)uVar2;
        break;
      }
      uVar12 = uVar12 + 1;
      piVar20 = (int *)(*(long *)(param_1 + 0x70) + lVar13);
      lVar13 = lVar13 + 0x14;
    } while (piVar20[-5] == *piVar20);
    uVar9 = 0;
    do {
      uVar6 = (uint)uVar12;
      lVar13 = *(long *)(param_1 + 0x80);
      uVar7 = (uint)uVar9;
      if (uVar7 < uVar6) {
        uVar24 = 0;
        lVar14 = (uVar12 & 0xffffffff) - uVar9;
        puVar16 = (undefined8 *)(lVar13 + uVar9 * 0x14);
        lVar18 = lVar14;
        do {
          lVar18 = lVar18 + -1;
          uVar24 = CONCAT44((int)((ulong)*puVar16 >> 0x20) + (int)((ulong)uVar24 >> 0x20),
                            (int)*puVar16 + (int)uVar24);
          puVar16 = (undefined8 *)((long)puVar16 + 0x14);
        } while (lVar18 != 0);
        iVar25 = 0;
        iVar26 = 0;
        puVar16 = (undefined8 *)(lVar13 + uVar9 * 0x14 + 8);
        do {
          uVar29 = puVar16[-1];
          lVar14 = lVar14 + -1;
          puVar16[-1] = 0;
          iVar27 = (int)*puVar16 + iVar25;
          iVar28 = (int)((ulong)*puVar16 >> 0x20) + iVar26;
          iVar25 = (int)uVar29 + iVar25;
          iVar26 = (int)((ulong)uVar29 >> 0x20) + iVar26;
          *puVar16 = CONCAT44(iVar28,iVar27);
          puVar16 = (undefined8 *)((long)puVar16 + 0x14);
        } while (lVar14 != 0);
      }
      else {
        uVar24 = 0;
      }
      puVar16 = (undefined8 *)(lVar13 + uVar9 * 0x14);
      if ((uVar3 & 0xfffffffd) == 5) {
        *(undefined8 *)(lVar13 + (ulong)(uVar6 - 1) * 0x14) = uVar24;
        if (1 < uVar6 + ~uVar7) {
          uVar21 = 2;
          uVar23 = 1;
          piVar22 = (int *)(*(long *)(param_1 + 0x70) + uVar9 * 0x14);
          piVar20 = piVar22;
          do {
            piVar10 = piVar22 + uVar23 * 5;
            uVar9 = uVar21;
            piVar17 = piVar20;
            do {
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) break;
              iVar25 = *piVar17;
              piVar17 = piVar17 + -5;
            } while (iVar25 < *piVar10);
            if (uVar23 != (uVar9 & 0xffffffff)) {
              uVar29 = *(undefined8 *)(piVar10 + 2);
              uVar24 = *(undefined8 *)piVar10;
              iVar25 = piVar10[4];
              uVar1 = (int)uVar9 + 1;
              sVar19 = (ulong)(uint)((int)uVar23 - (int)uVar9) * 0x14;
              piVar17 = piVar22 + (uVar9 & 0xffffffff) * 5;
              memmove(piVar22 + (ulong)uVar1 * 5,piVar17,sVar19);
              puVar11 = (undefined8 *)((long)puVar16 + uVar23 * 0x14);
              *(undefined8 *)(piVar17 + 2) = uVar29;
              *(undefined8 *)piVar17 = uVar24;
              piVar17[4] = iVar25;
              puVar15 = (undefined8 *)((long)puVar16 + (uVar9 & 0xffffffff) * 0x14);
              uVar29 = puVar11[1];
              uVar24 = *puVar11;
              uVar4 = *(undefined4 *)(puVar11 + 2);
              memmove((void *)((long)puVar16 + (ulong)uVar1 * 0x14),puVar15,sVar19);
              puVar15[1] = uVar29;
              *puVar15 = uVar24;
              *(undefined4 *)(puVar15 + 2) = uVar4;
            }
            uVar23 = uVar23 + 1;
            uVar21 = uVar21 + 1;
            piVar20 = piVar20 + 5;
          } while (uVar23 != uVar6 + ~uVar7);
        }
      }
      else {
        iVar25 = (int)((ulong)uVar24 >> 0x20);
        *puVar16 = CONCAT44((int)((ulong)*puVar16 >> 0x20) + iVar25,(int)*puVar16 + (int)uVar24);
        if (uVar7 + 1 < uVar6) {
          iVar26 = ~uVar7 + uVar6;
          puVar15 = (undefined8 *)(lVar13 + (ulong)(uVar7 + 1) * 0x14 + 8);
          do {
            iVar26 = iVar26 + -1;
            *puVar15 = CONCAT44((int)((ulong)*puVar15 >> 0x20) - iVar25,(int)*puVar15 - (int)uVar24)
            ;
            puVar15 = (undefined8 *)((long)puVar15 + 0x14);
          } while (iVar26 != 0);
        }
        if (1 < uVar6 + ~uVar7) {
          uVar21 = 2;
          uVar23 = 1;
          piVar20 = (int *)(*(long *)(param_1 + 0x70) + uVar9 * 0x14 + 0x14);
          piVar22 = piVar20;
          do {
            piVar10 = piVar20 + uVar23 * 5;
            uVar9 = uVar21;
            piVar17 = piVar22;
            do {
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) break;
              iVar25 = *piVar17;
              piVar17 = piVar17 + -5;
            } while (iVar25 < *piVar10);
            if (uVar23 != (uVar9 & 0xffffffff)) {
              uVar29 = *(undefined8 *)(piVar10 + 2);
              uVar24 = *(undefined8 *)piVar10;
              iVar25 = piVar10[4];
              uVar1 = (int)uVar9 + 1;
              sVar19 = (ulong)(uint)((int)uVar23 - (int)uVar9) * 0x14;
              piVar17 = piVar20 + (uVar9 & 0xffffffff) * 5;
              memmove(piVar20 + (ulong)uVar1 * 5,piVar17,sVar19);
              puVar11 = (undefined8 *)((long)puVar16 + uVar23 * 0x14 + 0x14);
              *(undefined8 *)(piVar17 + 2) = uVar29;
              *(undefined8 *)piVar17 = uVar24;
              piVar17[4] = iVar25;
              puVar15 = (undefined8 *)((long)puVar16 + (uVar9 & 0xffffffff) * 0x14 + 0x14);
              uVar29 = puVar11[1];
              uVar24 = *puVar11;
              uVar4 = *(undefined4 *)(puVar11 + 2);
              memmove((void *)((long)puVar16 + (ulong)uVar1 * 0x14 + 0x14),puVar15,sVar19);
              puVar15[1] = uVar29;
              *puVar15 = uVar24;
              *(undefined4 *)(puVar15 + 2) = uVar4;
            }
            uVar23 = uVar23 + 1;
            uVar21 = uVar21 + 1;
            piVar22 = piVar22 + 5;
          } while (uVar23 != uVar6 + ~uVar7);
        }
      }
      uVar7 = *(uint *)(param_1 + 0x60);
      if (uVar7 <= uVar6 + 1) {
        uVar7 = uVar6 + 1;
      }
      uVar1 = uVar6;
      do {
        uVar9 = (ulong)uVar1;
        if (uVar7 - 1 == uVar1) {
          uVar23 = (ulong)uVar7;
          break;
        }
        uVar1 = uVar1 + 1;
        uVar23 = (ulong)uVar1;
      } while (*(int *)(*(long *)(param_1 + 0x70) + uVar9 * 0x14 + 8) ==
               *(int *)(*(long *)(param_1 + 0x70) + uVar23 * 0x14 + 8));
      uVar9 = uVar12 & 0xffffffff;
      uVar12 = uVar23;
    } while (uVar6 < uVar2);
  }
  if (*(long *)(lVar5 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005018e8  FUN_005018e8 =====

void FUN_005018e8(long param_1,uint param_2,uint param_3,code *param_4)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar2 = tpidr_el0;
  uVar12 = param_2 + 1;
  uVar9 = (ulong)uVar12;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (uVar12 < param_3) {
    lVar11 = (ulong)uVar12 * 0x14 + -0x14;
    uVar12 = param_2;
    do {
      uVar8 = (uint)uVar9;
      uVar10 = uVar9;
      lVar5 = lVar11;
      uVar7 = param_2;
      if (uVar8 <= param_2) {
        uVar7 = uVar8;
      }
      do {
        uVar13 = uVar10;
        if (uVar13 <= param_2) goto LAB_00501998;
        iVar3 = (*param_4)(*(long *)(param_1 + 0x70) + lVar5,
                           *(long *)(param_1 + 0x70) + uVar9 * 0x14);
        uVar10 = uVar13 - 1;
        lVar5 = lVar5 + -0x14;
      } while (0 < iVar3);
      uVar7 = (uint)uVar13;
LAB_00501998:
      if (uVar9 != uVar7) {
        uVar10 = (ulong)uVar7;
        FUN_004ff68c(param_1,uVar10,uVar12 + 2);
        lVar5 = *(long *)(param_1 + 0x70);
        puVar6 = (undefined8 *)(lVar5 + uVar9 * 0x14);
        uVar15 = puVar6[1];
        uVar14 = *puVar6;
        uVar1 = *(undefined4 *)(puVar6 + 2);
        memmove((void *)(lVar5 + (ulong)(uVar7 + 1) * 0x14),(void *)(lVar5 + uVar10 * 0x14),
                (ulong)(uVar8 - uVar7) * 0x14);
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x70) + uVar10 * 0x14);
        *(undefined4 *)(puVar6 + 2) = uVar1;
        puVar6[1] = uVar15;
        *puVar6 = uVar14;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x14;
      uVar12 = uVar8;
    } while ((uint)uVar9 != param_3);
  }
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00501a58  rive_hb_buffer_diff =====

uint rive_hb_buffer_diff(long param_1,long param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  
  uVar10 = *(uint *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30)) {
    uVar13 = *(uint *)(param_2 + 0x60);
    if (uVar10 != uVar13) {
      if (uVar13 == 0) {
        return 2;
      }
LAB_00501bb4:
      piVar14 = *(int **)(param_2 + 0x70);
      uVar10 = 0;
      uVar11 = (ulong)uVar13;
      do {
        if (param_3 != -1) {
          uVar13 = uVar10 | 8;
          if (*piVar14 != param_3) {
            uVar13 = uVar10;
          }
          uVar10 = uVar13 | 4;
          if (*piVar14 != 0) {
            uVar10 = uVar13;
          }
        }
        uVar11 = uVar11 - 1;
        piVar14 = piVar14 + 5;
      } while (uVar11 != 0);
      return uVar10 | 2;
    }
    if (uVar10 != 0) {
      piVar14 = *(int **)(param_2 + 0x70);
      uVar13 = 0;
      piVar12 = *(int **)(param_1 + 0x70);
      uVar8 = uVar10;
      do {
        iVar4 = *piVar14;
        puVar6 = (uint *)(piVar14 + 1);
        iVar5 = *piVar12;
        puVar7 = (uint *)(piVar12 + 1);
        piVar1 = piVar14 + 2;
        piVar14 = piVar14 + 5;
        piVar2 = piVar12 + 2;
        piVar12 = piVar12 + 5;
        if (iVar5 != iVar4) {
          uVar13 = uVar13 | 0x10;
        }
        if (*piVar2 != *piVar1) {
          uVar13 = uVar13 | 0x20;
        }
        if (((*puVar6 ^ *puVar7) & 7) != 0) {
          uVar13 = uVar13 | 0x40;
        }
        uVar9 = uVar13 | 8;
        if (iVar4 != param_3) {
          uVar9 = uVar13;
        }
        uVar3 = uVar9 | 4;
        if (iVar4 != 0) {
          uVar3 = uVar9;
        }
        if (param_3 != -1) {
          uVar13 = uVar3;
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      if (*(int *)(param_1 + 0x30) == 2) {
        piVar14 = *(int **)(param_1 + 0x80);
        piVar12 = *(int **)(param_2 + 0x80);
        do {
          uVar9 = *piVar14 - *piVar12;
          uVar8 = -uVar9;
          if (-1 < (int)uVar9) {
            uVar8 = uVar9;
          }
          if (param_4 < uVar8) {
LAB_00501bfc:
            return uVar13 | 0x80;
          }
          uVar9 = piVar14[1] - piVar12[1];
          uVar8 = -uVar9;
          if (-1 < (int)uVar9) {
            uVar8 = uVar9;
          }
          if (param_4 < uVar8) goto LAB_00501bfc;
          uVar9 = piVar14[2] - piVar12[2];
          uVar8 = -uVar9;
          if (-1 < (int)uVar9) {
            uVar8 = uVar9;
          }
          if (param_4 < uVar8) goto LAB_00501bfc;
          uVar9 = piVar14[3] - piVar12[3];
          uVar8 = -uVar9;
          if (-1 < (int)uVar9) {
            uVar8 = uVar9;
          }
          if (param_4 < uVar8) goto LAB_00501bfc;
          uVar10 = uVar10 - 1;
          piVar14 = piVar14 + 5;
          piVar12 = piVar12 + 5;
        } while (uVar10 != 0);
      }
      return uVar13;
    }
  }
  else {
    uVar13 = *(uint *)(param_2 + 0x60);
    if (uVar10 != 0) {
      uVar10 = 1;
      if (uVar13 == 0) {
        uVar10 = 2;
      }
      return uVar10;
    }
    if (uVar13 != 0) goto LAB_00501bb4;
  }
  return 0;
}


// ===== 00501c04  rive_hb_tag_from_string =====

uint rive_hb_tag_from_string(byte *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  uVar2 = 0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((param_1 != (byte *)0x0) && (param_2 != 0)) && (uVar2 = (uint)*param_1, *param_1 != 0)) {
    uVar3 = 0;
    if (3 < param_2) {
      param_2 = 4;
    }
    do {
      if (param_1[uVar3] == 0) {
        param_2 = (uint)uVar3;
        break;
      }
      *(byte *)((long)&local_2c + uVar3) = param_1[uVar3];
      uVar3 = uVar3 + 1;
    } while (param_2 != uVar3);
    if (param_2 < 4) {
      memset((void *)((long)&local_2c + (ulong)param_2),0x20,(ulong)(4 - param_2));
    }
    uVar2 = (local_2c & 0xff00ff00) >> 8 | (local_2c & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


// ===== 00501cb8  rive_hb_tag_to_string =====

void rive_hb_tag_to_string(uint param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  *param_2 = uVar1 >> 0x10 | uVar1 << 0x10;
  return;
}


// ===== 00501cc4  rive_hb_direction_from_string =====

uint rive_hb_direction_from_string(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    bVar2 = *param_1;
    if (bVar2 != 0) {
      lVar3 = 0;
      pbVar4 = &DAT_002536c8;
      bVar1 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        bVar1 = bVar2;
      }
      do {
        if (*pbVar4 == bVar1) {
          return (uint)lVar3 | 4;
        }
        lVar3 = lVar3 + 1;
        pbVar4 = pbVar4 + 4;
      } while (lVar3 != 4);
    }
  }
  return 0;
}


// ===== 00501d20  rive_hb_direction_to_string =====

char * rive_hb_direction_to_string(int param_1)

{
  char *pcVar1;
  
  pcVar1 = &DAT_002536c8 + (ulong)(param_1 - 4U) * 4;
  if (3 < param_1 - 4U) {
    pcVar1 = "invalid";
  }
  return pcVar1;
}


// ===== 00501d44  rive_hb_language_from_string =====

void rive_hb_language_from_string(char *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  char acStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  lVar2 = 0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (*param_1 == '\0') {
      lVar2 = 0;
    }
    else {
      if (-1 < (int)param_2) {
        if (0x3e < param_2) {
          param_2 = 0x3f;
        }
        memcpy(acStack_78,param_1,(ulong)param_2);
        acStack_78[param_2] = '\0';
        param_1 = acStack_78;
      }
      lVar2 = FUN_00501dec(param_1);
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 8);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar2);
  }
  return;
}


// ===== 00501dec  FUN_00501dec =====

undefined8 * FUN_00501dec(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 *__ptr;
  size_t sVar6;
  byte *pbVar7;
  long *plVar8;
  char cVar9;
  ulong uVar10;
  char *pcVar11;
  
  plVar8 = DAT_00687050;
  do {
    for (; plVar5 = DAT_00687050, plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      pcVar11 = (char *)plVar8[1];
      cVar9 = *pcVar11;
      pbVar7 = param_1;
      if (cVar9 == '\0') {
        if ((&DAT_002536d8)[*param_1] == '\0') {
          return plVar8;
        }
      }
      else {
        do {
          pcVar11 = pcVar11 + 1;
          cVar3 = (&DAT_002536d8)[*pbVar7];
          if (cVar9 != cVar3) goto LAB_00501e60;
          cVar9 = *pcVar11;
          pbVar7 = pbVar7 + 1;
        } while (cVar9 != '\0');
        cVar3 = (&DAT_002536d8)[*pbVar7];
        cVar9 = '\0';
LAB_00501e60:
        if (cVar9 == cVar3) {
          return plVar8;
        }
      }
    }
    __ptr = (undefined8 *)calloc(1,0x10);
    if (__ptr == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *__ptr = plVar5;
    sVar6 = strlen((char *)param_1);
    sVar6 = sVar6 + 1;
    pbVar7 = (byte *)malloc(sVar6);
    __ptr[1] = pbVar7;
    if (pbVar7 == (byte *)0x0) goto LAB_00501f24;
    pbVar4 = pbVar7;
    if (sVar6 == 0) {
      uVar10 = 0;
LAB_00501ed8:
      do {
        pbVar1 = &DAT_002536d8 + uVar10;
        bVar2 = pbVar4[1];
        uVar10 = (ulong)bVar2;
        *pbVar4 = *pbVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar2 != 0);
      if (pbVar7 == (byte *)0x0) {
LAB_00501f24:
        free(__ptr);
        return (undefined8 *)0x0;
      }
    }
    else {
      memcpy(pbVar7,param_1,sVar6);
      uVar10 = (ulong)*pbVar7;
      if (*pbVar7 != 0) goto LAB_00501ed8;
    }
    plVar8 = (long *)FUN_003410d0(plVar5,__ptr,&DAT_00687050);
    if (plVar8 == plVar5) {
      return __ptr;
    }
    free((void *)__ptr[1]);
    free(__ptr);
    plVar8 = DAT_00687050;
  } while( true );
}


// ===== 00501f4c  rive_hb_language_to_string =====

void rive_hb_language_to_string(void)

{
  return;
}


// ===== 00501f50  rive_hb_language_get_default =====

long rive_hb_language_get_default(void)

{
  long lVar1;
  
  lVar1 = DAT_00687048;
  if (DAT_00687048 == 0) {
    lVar1 = FUN_00501dec(&DAT_00249bdf);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(long *)(lVar1 + 8);
    }
    FUN_003410d0(0,lVar1,&DAT_00687048);
  }
  return lVar1;
}


// ===== 00501fb0  rive_hb_language_matches =====

bool rive_hb_language_matches(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  
  if (param_1 == param_2) {
    return true;
  }
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    sVar2 = strlen(param_1);
    sVar3 = strlen(param_2);
    if ((uint)sVar2 <= (uint)sVar3) {
      iVar1 = strncmp(param_1,param_2,sVar2 & 0xffffffff);
      if (iVar1 == 0) {
        if (param_2[sVar2 & 0xffffffff] == '\0') {
          return true;
        }
        return param_2[sVar2 & 0xffffffff] == '-';
      }
    }
  }
  return false;
}


// ===== 00502048  rive_hb_script_from_iso15924_tag =====

ulong rive_hb_script_from_iso15924_tag(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)param_1;
  if (uVar2 != 0) {
    uVar1 = uVar2 & 0xdfdfdfdf | 0x202020;
    if ((int)uVar1 < 0x4c617466) {
      if ((int)uVar1 < 0x48616e73) {
        if (uVar1 == 0x4172616e) {
          return 0x41726162;
        }
        if (uVar1 == 0x43797273) {
          return 0x4379726c;
        }
        if (uVar1 == 0x47656f6b) {
          return 0x47656f72;
        }
      }
      else {
        if ((uVar1 == 0x48616e73) || (uVar1 == 0x48616e74)) {
          return 0x48616e69;
        }
        if (uVar1 == 0x4a616d6f) {
          return 0x48616e67;
        }
      }
    }
    else if ((int)uVar1 < 0x51616169) {
      if ((uVar1 == 0x4c617466) || (uVar1 == 0x4c617467)) {
        return 0x4c61746e;
      }
      if (uVar1 == 0x51616163) {
        return 0x436f7074;
      }
    }
    else {
      if ((int)uVar1 < 0x5379726a) {
        if (uVar1 == 0x51616169) {
          return 0x5a696e68;
        }
        uVar3 = 0x7265;
      }
      else {
        if (uVar1 == 0x5379726a) {
          return 0x53797263;
        }
        uVar3 = 0x726e;
      }
      if (uVar1 == (uVar3 | 0x53790000)) {
        return 0x53797263;
      }
    }
    if ((uVar2 & 0xc0c0c0c0 | 0x202020) != 0x40606060) {
      uVar1 = 0x5a7a7a7a;
    }
    param_1 = (ulong)uVar1;
  }
  return param_1;
}


// ===== 005021fc  rive_hb_script_from_string =====

void rive_hb_script_from_string(void)

{
  rive_hb_tag_from_string();
  rive_hb_script_from_iso15924_tag();
  return;
}


// ===== 00502210  rive_hb_script_to_iso15924_tag =====

void rive_hb_script_to_iso15924_tag(void)

{
  return;
}


// ===== 00502214  rive_hb_script_get_horizontal_direction =====

undefined8 rive_hb_script_get_horizontal_direction(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = 5;
  if (param_1 < 0x4e626174) {
    if (param_1 < 0x48756e67) {
      if (param_1 < 0x43707274) {
        if (param_1 < 0x41726d69) {
          if (param_1 == 0x41646c6d) {
            return uVar1;
          }
          iVar2 = 0x41726162;
        }
        else {
          if (param_1 == 0x41726d69) {
            return uVar1;
          }
          if (param_1 == 0x41767374) {
            return uVar1;
          }
          iVar2 = 0x43687273;
        }
      }
      else if (param_1 < 0x47617261) {
        if (param_1 == 0x43707274) {
          return uVar1;
        }
        iVar2 = 0x456c796d;
      }
      else {
        if (param_1 == 0x47617261) {
          return uVar1;
        }
        if (param_1 == 0x48617472) {
          return uVar1;
        }
        iVar2 = 0x48656272;
      }
    }
    else if (param_1 < 0x4d616e69) {
      if (param_1 < 0x4b686172) {
        if (param_1 == 0x48756e67) {
          return 0;
        }
        iVar2 = 0x4974616c;
LAB_005024bc:
        if (param_1 != iVar2) {
          return 4;
        }
        return 0;
      }
      if (param_1 == 0x4b686172) {
        return uVar1;
      }
      if (param_1 == 0x4c796469) {
        return uVar1;
      }
      iVar2 = 0x4d616e64;
    }
    else if (param_1 < 0x4d657263) {
      if (param_1 == 0x4d616e69) {
        return uVar1;
      }
      iVar2 = 0x4d656e64;
    }
    else {
      if (param_1 == 0x4d657263) {
        return uVar1;
      }
      if (param_1 == 0x4d65726f) {
        return uVar1;
      }
      iVar2 = 0x4e617262;
    }
  }
  else if (param_1 < 0x52756e72) {
    if (param_1 < 0x50686c69) {
      if (param_1 < 0x4f726b68) {
        if (param_1 == 0x4e626174) {
          return uVar1;
        }
        iVar2 = 0x4e6b6f6f;
      }
      else {
        if (param_1 == 0x4f726b68) {
          return uVar1;
        }
        if (param_1 == 0x4f756772) {
          return uVar1;
        }
        iVar2 = 0x50616c6d;
      }
    }
    else if (param_1 < 0x50686e78) {
      if (param_1 == 0x50686c69) {
        return uVar1;
      }
      iVar2 = 0x50686c70;
    }
    else {
      if (param_1 == 0x50686e78) {
        return uVar1;
      }
      if (param_1 == 0x50727469) {
        return uVar1;
      }
      iVar2 = 0x526f6867;
    }
  }
  else if (param_1 < 0x536f676f) {
    if (param_1 < 0x53617262) {
      if (param_1 == 0x52756e72) {
        return 0;
      }
      iVar2 = 0x53616d72;
    }
    else {
      if (param_1 == 0x53617262) {
        return uVar1;
      }
      if (param_1 == 0x53696474) {
        return uVar1;
      }
      iVar2 = 0x536f6764;
    }
  }
  else {
    if (0x54666e66 < param_1) {
      if (param_1 == 0x59657a69) {
        return uVar1;
      }
      if (param_1 == 0x54686161) {
        return uVar1;
      }
      iVar2 = 0x54666e67;
      goto LAB_005024bc;
    }
    if (param_1 == 0x536f676f) {
      return uVar1;
    }
    iVar2 = 0x53797263;
  }
  if (param_1 != iVar2) {
    return 4;
  }
  return uVar1;
}


// ===== 0050256c  rive_hb_version =====

void rive_hb_version(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = 0xd;
  *param_2 = 1;
  *param_3 = 1;
  return;
}


// ===== 00502584  rive_hb_version_string =====

char * rive_hb_version_string(void)

{
  return "13.1.1";
}


// ===== 00502590  rive_hb_version_atleast =====

bool rive_hb_version_atleast(int param_1,int param_2,int param_3)

{
  return (uint)(param_1 * 10000 + param_2 * 100 + param_3) < 0x1fc36;
}


// ===== 005025b8  rive_hb_feature_from_string =====

void rive_hb_feature_from_string(byte *param_1,int param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  size_t sVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  undefined4 local_58;
  int iStack_54;
  undefined8 uStack_50;
  byte *local_48;
  int local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_48 = param_1;
  if (param_2 < 0) {
    sVar5 = strlen((char *)param_1);
    param_2 = (int)sVar5;
  }
  pbVar1 = param_1 + param_2;
  if (param_2 < 1) {
LAB_00502630:
    pbVar10 = param_1;
    if ((param_1 == pbVar1) || (*param_1 != 0x2d)) {
      if (param_1 < pbVar1) {
        lVar8 = (long)pbVar1 - (long)param_1;
        do {
          if ((4 < *param_1 - 9) && (pbVar10 = param_1, *param_1 != 0x20)) break;
          param_1 = param_1 + 1;
          lVar8 = lVar8 + -1;
          pbVar10 = pbVar1;
          local_48 = param_1;
        } while (lVar8 != 0);
      }
      if (pbVar10 == pbVar1) goto LAB_00502650;
      iStack_54 = 1;
      iVar11 = 1;
      if (*pbVar10 == 0x2b) goto LAB_005026b0;
    }
    else {
      iVar11 = 0;
LAB_005026b0:
      iStack_54 = iVar11;
      local_48 = pbVar10 + 1;
    }
  }
  else {
    lVar8 = (long)param_2;
    do {
      if ((4 < *param_1 - 9) && (local_48 = param_1, *param_1 != 0x20)) goto LAB_00502630;
      lVar8 = lVar8 + -1;
      param_1 = param_1 + 1;
      local_48 = pbVar1;
    } while (lVar8 != 0);
LAB_00502650:
    iStack_54 = 1;
  }
  uVar6 = FUN_00502b3c(&local_48,pbVar1,&local_58);
  if ((uVar6 & 1) != 0) {
    pbVar10 = local_48;
    if (local_48 < pbVar1) {
      lVar8 = (long)pbVar1 - (long)local_48;
      do {
        if ((4 < *local_48 - 9) && (pbVar10 = local_48, *local_48 != 0x20)) break;
        lVar8 = lVar8 + -1;
        local_48 = local_48 + 1;
        pbVar10 = pbVar1;
      } while (lVar8 != 0);
    }
    local_48 = pbVar10;
    uStack_50 = 0xffffffff00000000;
    pbVar10 = local_48;
    if (local_48 < pbVar1) {
      lVar8 = (long)pbVar1 - (long)local_48;
      do {
        if ((4 < *local_48 - 9) && (pbVar10 = local_48, *local_48 != 0x20)) break;
        local_48 = local_48 + 1;
        lVar8 = lVar8 + -1;
        pbVar10 = pbVar1;
      } while (lVar8 != 0);
    }
    if (pbVar10 == pbVar1) {
LAB_00502938:
      bVar4 = true;
    }
    else {
      if (*pbVar10 == 0x5b) {
        local_48 = pbVar10 + 1;
        uVar6 = FUN_0050dbc4(&local_48,pbVar1,&local_3c);
        if ((uVar6 & 1) == 0) {
          iVar11 = 0;
        }
        else {
          uStack_50 = CONCAT44(uStack_50._4_4_,local_3c);
          iVar11 = local_3c;
        }
        pbVar10 = local_48;
        if (local_48 < pbVar1) {
          lVar8 = (long)pbVar1 - (long)local_48;
          do {
            if ((4 < *local_48 - 9) && (pbVar10 = local_48, *local_48 != 0x20)) break;
            lVar8 = lVar8 + -1;
            local_48 = local_48 + 1;
            pbVar10 = pbVar1;
          } while (lVar8 != 0);
        }
        local_48 = pbVar10;
        if ((local_48 == pbVar1) || (pbVar9 = local_48, *local_48 != 0x3a)) {
          pbVar9 = local_48;
          if (local_48 < pbVar1) {
            lVar8 = (long)pbVar1 - (long)local_48;
            do {
              if ((4 < *local_48 - 9) && (pbVar9 = local_48, *local_48 != 0x20)) break;
              local_48 = local_48 + 1;
              lVar8 = lVar8 + -1;
              pbVar9 = pbVar1;
            } while (lVar8 != 0);
          }
          if ((pbVar9 != pbVar1) && (*pbVar9 == 0x3b)) goto LAB_00502840;
          if ((uVar6 & 1) != 0) {
            uStack_50 = CONCAT44(iVar11 + 1,(undefined4)uStack_50);
          }
        }
        else {
LAB_00502840:
          local_48 = pbVar9 + 1;
          uVar6 = FUN_0050dbc4(&local_48,pbVar1,&local_3c);
          pbVar9 = local_48;
          if ((uVar6 & 1) != 0) {
            uStack_50 = CONCAT44(local_3c,(undefined4)uStack_50);
          }
        }
        pbVar10 = pbVar9;
        if (pbVar9 < pbVar1) {
          lVar8 = (long)pbVar1 - (long)pbVar9;
          do {
            if ((4 < *pbVar9 - 9) && (pbVar10 = pbVar9, *pbVar9 != 0x20)) break;
            pbVar9 = pbVar9 + 1;
            lVar8 = lVar8 + -1;
            pbVar10 = pbVar1;
            local_48 = pbVar9;
          } while (lVar8 != 0);
        }
        if ((pbVar10 == pbVar1) || (*pbVar10 != 0x5d)) goto LAB_00502b20;
        pbVar10 = pbVar10 + 1;
        local_48 = pbVar10;
      }
      pbVar9 = pbVar10;
      if (pbVar10 < pbVar1) {
        lVar8 = (long)pbVar1 - (long)pbVar10;
        do {
          if ((4 < *pbVar10 - 9) && (pbVar9 = pbVar10, *pbVar10 != 0x20)) break;
          pbVar10 = pbVar10 + 1;
          lVar8 = lVar8 + -1;
          pbVar9 = pbVar1;
          local_48 = pbVar10;
        } while (lVar8 != 0);
      }
      if ((pbVar9 == pbVar1) || (*pbVar9 != 0x3d)) goto LAB_00502938;
      bVar4 = false;
      local_48 = pbVar9 + 1;
    }
    uVar6 = FUN_0050dbc4(&local_48,pbVar1,&local_3c);
    pbVar10 = local_48;
    iVar11 = local_3c;
    if ((uVar6 & 1) == 0) {
      if (local_48 < pbVar1) {
        lVar8 = (long)pbVar1 - (long)local_48;
        do {
          if ((4 < *local_48 - 9) && (pbVar10 = local_48, *local_48 != 0x20)) break;
          lVar8 = lVar8 + -1;
          local_48 = local_48 + 1;
          pbVar10 = pbVar1;
        } while (lVar8 != 0);
      }
      local_48 = pbVar10;
      pbVar9 = local_48;
      pbVar10 = local_48;
      if (local_48 < pbVar1) {
        lVar8 = (long)pbVar1 - (long)local_48;
        do {
          pbVar10 = local_48;
          if (0x19 < (*local_48 & 0xffffffdf) - 0x41) break;
          local_48 = local_48 + 1;
          lVar8 = lVar8 + -1;
          pbVar10 = pbVar1;
        } while (lVar8 != 0);
      }
      if ((long)pbVar10 - (long)pbVar9 == 3) {
        bVar2 = *pbVar9;
        uVar12 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar12 = (uint)bVar2;
        }
        if ((uVar12 & 0xff) == 0x6f) {
          bVar2 = pbVar9[1];
          uVar12 = bVar2 + 0x20;
          if (0x19 < bVar2 - 0x41) {
            uVar12 = (uint)bVar2;
          }
          if ((uVar12 & 0xff) == 0x66) {
            bVar2 = pbVar9[2];
            uVar12 = bVar2 + 0x20;
            if (0x19 < bVar2 - 0x41) {
              uVar12 = (uint)bVar2;
            }
            if ((uVar12 & 0xff) == 0x66) {
              iVar11 = 0;
              goto LAB_0050295c;
            }
          }
        }
      }
      else if ((long)pbVar10 - (long)pbVar9 == 2) {
        bVar2 = *pbVar9;
        uVar12 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar12 = (uint)bVar2;
        }
        if ((uVar12 & 0xff) == 0x6f) {
          bVar2 = pbVar9[1];
          uVar12 = bVar2 + 0x20;
          if (0x19 < bVar2 - 0x41) {
            uVar12 = (uint)bVar2;
          }
          if ((uVar12 & 0xff) == 0x6e) {
            iVar11 = 1;
            goto LAB_0050295c;
          }
        }
      }
      iVar11 = iStack_54;
      if (!bVar4) goto LAB_00502b20;
    }
LAB_0050295c:
    iStack_54 = iVar11;
    pbVar9 = pbVar10;
    if (pbVar10 < pbVar1) {
      lVar8 = (long)pbVar1 - (long)pbVar10;
      do {
        if ((4 < *pbVar10 - 9) && (pbVar9 = pbVar10, *pbVar10 != 0x20)) break;
        pbVar10 = pbVar10 + 1;
        lVar8 = lVar8 + -1;
        pbVar9 = pbVar1;
        local_48 = pbVar10;
      } while (lVar8 != 0);
    }
    if (pbVar9 == pbVar1) {
      if (param_3 != (undefined8 *)0x0) {
        param_3[1] = uStack_50;
        *param_3 = CONCAT44(iStack_54,local_58);
      }
      uVar7 = 1;
      goto LAB_005029b4;
    }
  }
LAB_00502b20:
  uVar7 = 0;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
    param_3[1] = 0;
  }
LAB_005029b4:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


// ===== 00502b3c  FUN_00502b3c =====

undefined8 FUN_00502b3c(long *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  
  pbVar4 = (byte *)*param_1;
  pbVar5 = pbVar4;
  if (pbVar4 < param_2) {
    lVar7 = (long)param_2 - (long)pbVar4;
    do {
      if ((4 < *pbVar4 - 9) && (pbVar5 = pbVar4, *pbVar4 != 0x20)) break;
      pbVar4 = pbVar4 + 1;
      lVar7 = lVar7 + -1;
      *param_1 = (long)pbVar4;
      pbVar5 = param_2;
    } while (lVar7 != 0);
  }
  if (pbVar5 < param_2) {
    bVar1 = *pbVar5;
    uVar9 = (uint)bVar1;
    if ((bVar1 != 0x27) && (bVar1 != 0x22)) goto LAB_00502bc8;
    pbVar5 = pbVar5 + 1;
    *param_1 = (long)pbVar5;
  }
  else {
LAB_00502bc8:
    uVar9 = 0;
  }
  pbVar4 = pbVar5;
  if (pbVar5 < param_2) {
    lVar7 = (long)param_2 - (long)pbVar5;
    pbVar10 = pbVar5;
    do {
      uVar2 = *pbVar10 - 0x20;
      pbVar4 = pbVar10;
      if (uVar2 < 0x3c && (1L << ((ulong)uVar2 & 0x3f) & 0x800000020000001U) != 0 ||
          *pbVar10 == uVar9) break;
      pbVar10 = pbVar10 + 1;
      lVar7 = lVar7 + -1;
      *param_1 = (long)pbVar10;
      pbVar4 = param_2;
    } while (lVar7 != 0);
  }
  if ((pbVar5 == pbVar4) || (uVar8 = (long)pbVar4 - (long)pbVar5, 4 < (long)uVar8)) {
LAB_00502c38:
    uVar6 = 0;
  }
  else {
    uVar3 = rive_hb_tag_from_string(pbVar5,uVar8 & 0xffffffff);
    *param_3 = uVar3;
    if (uVar9 != 0) {
      if (pbVar4 == param_2) {
        return 0;
      }
      if (uVar8 != 4) {
        return 0;
      }
      if (*pbVar4 != uVar9) goto LAB_00502c38;
      *param_1 = (long)(pbVar4 + 1);
    }
    uVar6 = 1;
  }
  return uVar6;
}


// ===== 00502c90  rive_hb_feature_to_string =====

void rive_hb_feature_to_string(uint *param_1,void *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  char local_c8 [128];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 == 0) goto LAB_00502e44;
  uVar4 = param_1[1];
  if (uVar4 == 0) {
    local_c8[0] = '-';
  }
  uVar7 = (ulong)(uVar4 == 0);
  uVar6 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  *(uint *)((ulong)local_c8 | uVar7) = uVar6 >> 0x10 | uVar6 << 0x10;
  lVar3 = uVar7 + 3;
  do {
    lVar9 = lVar3;
    if (lVar9 == -1) {
      uVar7 = 0;
      goto LAB_00502d20;
    }
    lVar3 = lVar9 + -1;
  } while (local_c8[lVar9] == ' ');
  uVar7 = lVar9 + 1;
LAB_00502d20:
  uVar6 = param_1[2];
  iVar5 = (int)uVar7;
  if (uVar6 == 0) {
    uVar6 = param_1[3];
    if (uVar6 != 0xffffffff) {
      uVar1 = iVar5 + 1;
      local_c8[uVar7 & 0xffffffff] = '[';
      uVar4 = 1;
      goto LAB_00502d88;
    }
  }
  else {
    local_c8[uVar7 & 0xffffffff] = '[';
    uVar4 = snprintf(local_c8 + (iVar5 + 1U),(ulong)(0x7f - iVar5),"%u",(ulong)uVar6);
    uVar6 = param_1[3];
    uVar1 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) + iVar5 + 1U;
    uVar4 = param_1[2] + 1;
LAB_00502d88:
    uVar8 = uVar1;
    if (uVar6 != uVar4) {
      uVar8 = uVar1 + 1;
      local_c8[uVar1] = ':';
      if (uVar6 != 0xffffffff) {
        uVar4 = snprintf(local_c8 + uVar8,(ulong)(0x7f - uVar1),"%u",(ulong)uVar6);
        uVar8 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) + uVar8;
      }
    }
    uVar4 = param_1[1];
    uVar7 = (ulong)(uVar8 + 1);
    local_c8[uVar8] = ']';
  }
  uVar6 = (uint)uVar7;
  if (1 < uVar4) {
    local_c8[uVar7 & 0xffffffff] = '=';
    uVar4 = snprintf(local_c8 + (uVar6 + 1),(ulong)(0x7f - uVar6),"%u");
    uVar6 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) + uVar6 + 1;
  }
  if (param_3 - 1U <= uVar6) {
    uVar6 = param_3 - 1U;
  }
  if (uVar6 != 0) {
    memcpy(param_2,local_c8,(ulong)uVar6);
  }
  *(undefined1 *)((long)param_2 + (ulong)uVar6) = 0;
LAB_00502e44:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00502e70  rive_hb_variation_from_string =====

void rive_hb_variation_from_string(byte *param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  size_t sVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  undefined4 local_50;
  float fStack_4c;
  byte *local_48;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_1;
  if (param_2 < 0) {
    sVar2 = strlen((char *)param_1);
    param_2 = (int)sVar2;
  }
  param_1 = param_1 + param_2;
  uVar3 = FUN_00502b3c(&local_48,param_1,&local_50);
  if ((uVar3 & 1) != 0) {
    pbVar6 = local_48;
    if (local_48 < param_1) {
      lVar7 = (long)param_1 - (long)local_48;
      do {
        if ((4 < *local_48 - 9) && (pbVar6 = local_48, *local_48 != 0x20)) break;
        lVar7 = lVar7 + -1;
        local_48 = local_48 + 1;
        pbVar6 = param_1;
      } while (lVar7 != 0);
    }
    local_48 = pbVar6;
    if ((local_48 != param_1) && (*local_48 == 0x3d)) {
      local_48 = local_48 + 1;
    }
    uVar3 = FUN_0050dd94(&local_48,param_1,&local_40,0);
    if ((uVar3 & 1) != 0) {
      fStack_4c = (float)local_40;
      pbVar6 = local_48;
      if (local_48 < param_1) {
        lVar7 = (long)param_1 - (long)local_48;
        pbVar5 = local_48;
        do {
          if ((4 < *pbVar5 - 9) && (pbVar6 = pbVar5, *pbVar5 != 0x20)) break;
          lVar7 = lVar7 + -1;
          pbVar5 = pbVar5 + 1;
          pbVar6 = param_1;
        } while (lVar7 != 0);
      }
      if (pbVar6 == param_1) {
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = CONCAT44(fStack_4c,local_50);
        }
        uVar4 = 1;
        goto LAB_00502fa0;
      }
    }
  }
  uVar4 = 0;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
LAB_00502fa0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 00502fd8  rive_hb_variation_to_string =====

void rive_hb_variation_to_string(uint *param_1,void *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  uint local_b8 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_3 != 0) {
    uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    local_b8[0] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar6 = 5;
    do {
      uVar2 = uVar6 - 1;
      if (uVar2 == 0) break;
      iVar5 = (int)uVar6;
      uVar6 = uVar2;
    } while (*(char *)((long)local_b8 + (ulong)(iVar5 - 2)) == ' ');
    fVar7 = (float)param_1[1];
    uVar1 = (int)uVar2 + 1;
    *(undefined1 *)((long)local_b8 + (uVar2 & 0xffffffff)) = 0x3d;
    uVar4 = snprintf((char *)((long)local_b8 + (ulong)uVar1),(ulong)(0x7f - (int)uVar2),"%g",
                     (double)fVar7);
    uVar1 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) + uVar1;
    if (param_3 - 1U <= uVar1) {
      uVar1 = param_3 - 1U;
    }
    if (uVar1 != 0) {
      memcpy(param_2,local_b8,(ulong)uVar1);
    }
    *(undefined1 *)((long)param_2 + (ulong)uVar1) = 0;
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005030b8  rive_hb_malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * rive_hb_malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0067e3e0)();
  return pvVar1;
}


// ===== 005030bc  rive_hb_calloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * rive_hb_calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00680f00)();
  return pvVar1;
}


// ===== 005030c0  rive_hb_realloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * rive_hb_realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00680588)();
  return pvVar1;
}


// ===== 005030c4  rive_hb_free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rive_hb_free(void *__ptr)

{
  (*(code *)PTR_free_0067e3e8)();
  return;
}


// ===== 005030c8  rive_hb_draw_funcs_set_move_to_func =====

void rive_hb_draw_funcs_set_move_to_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005030f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) &&
       (pcVar3 = (code *)**(undefined8 **)(param_1 + 0x40), pcVar3 != (code *)0x0)) {
      if (*(undefined8 **)(param_1 + 0x38) == (undefined8 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = **(undefined8 **)(param_1 + 0x38);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_005031a8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00503238;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x10) = pcVar3;
      if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x38) = param_3;
      }
      if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x40) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 005031a8  FUN_005031a8 =====

undefined8 FUN_005031a8(long param_1,long param_2,code *param_3)

{
  void *pvVar1;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0x38) == 0)) {
    pvVar1 = calloc(1,0x28);
    *(void **)(param_1 + 0x38) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      if (param_3 == (code *)0x0) {
        return 0;
      }
      goto LAB_00503228;
    }
  }
  if ((param_3 == (code *)0x0) || (*(long *)(param_1 + 0x40) != 0)) {
    return 1;
  }
  pvVar1 = calloc(1,0x28);
  *(void **)(param_1 + 0x40) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return 1;
  }
LAB_00503228:
  (*param_3)(param_2);
  return 0;
}


// ===== 00503238  FUN_00503238 =====

void FUN_00503238(void)

{
  return;
}


// ===== 0050323c  rive_hb_draw_funcs_set_line_to_func =====

void rive_hb_draw_funcs_set_line_to_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050326c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x40) + 8), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_005031a8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_0050331c;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x18) = pcVar3;
      if (*(long *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x38) + 8) = param_3;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        *(code **)(*(long *)(param_1 + 0x40) + 8) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050331c  FUN_0050331c =====

void FUN_0050331c(void)

{
  return;
}


// ===== 00503320  rive_hb_draw_funcs_set_quadratic_to_func =====

void rive_hb_draw_funcs_set_quadratic_to_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00503350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x40) + 0x10), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_005031a8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00503400;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x20) = pcVar3;
      if (*(long *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10) = param_3;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        *(code **)(*(long *)(param_1 + 0x40) + 0x10) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 00503400  FUN_00503400 =====

void FUN_00503400(float param_1,float param_2,float param_3,float param_4,long param_5,
                 undefined8 param_6,long param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = NEON_fmadd(param_2 - param_4,DAT_00251de0,param_4);
  uVar1 = NEON_fmadd(param_1 - *(float *)(param_7 + 0xc),DAT_00251de0,*(float *)(param_7 + 0xc));
  uVar3 = NEON_fmadd(param_1 - param_3,DAT_00251de0,param_3);
  uVar2 = NEON_fmadd(param_2 - *(float *)(param_7 + 0x10),DAT_00251de0,*(float *)(param_7 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0050344c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x28))(uVar1,uVar2,uVar3,uVar4);
  return;
}


// ===== 00503450  rive_hb_draw_funcs_set_cubic_to_func =====

void rive_hb_draw_funcs_set_cubic_to_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00503480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x40) + 0x18), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_005031a8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00503530;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x28) = pcVar3;
      if (*(long *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18) = param_3;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        *(code **)(*(long *)(param_1 + 0x40) + 0x18) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 00503530  FUN_00503530 =====

void FUN_00503530(void)

{
  return;
}


// ===== 00503534  rive_hb_draw_funcs_set_close_path_func =====

void rive_hb_draw_funcs_set_close_path_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00503564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x40) + 0x20), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_005031a8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00503614;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x30) = pcVar3;
      if (*(long *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20) = param_3;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        *(code **)(*(long *)(param_1 + 0x40) + 0x20) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 00503614  FUN_00503614 =====

void FUN_00503614(void)

{
  return;
}


// ===== 00503618  rive_hb_draw_funcs_create =====

undefined4 * rive_hb_draw_funcs_create(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)calloc(1,0x48);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)&DAT_00686278;
  }
  else {
    *puVar5 = 1;
    *(undefined1 *)(puVar5 + 1) = 1;
    *(undefined8 *)(puVar5 + 2) = 0;
    puVar4 = PTR_FUN_006862a8;
    puVar3 = PTR_FUN_006862a0;
    puVar2 = PTR_FUN_00686298;
    puVar1 = PTR_FUN_00686288;
    *(undefined **)(puVar5 + 6) = PTR_FUN_00686290;
    *(undefined **)(puVar5 + 4) = puVar1;
    *(undefined **)(puVar5 + 10) = puVar3;
    *(undefined **)(puVar5 + 8) = puVar2;
    *(undefined **)(puVar5 + 0xc) = puVar4;
  }
  return puVar5;
}


// ===== 00503678  rive_hb_draw_funcs_get_empty =====

undefined * rive_hb_draw_funcs_get_empty(void)

{
  return &DAT_00686278;
}


// ===== 00503684  rive_hb_draw_funcs_reference =====

int * rive_hb_draw_funcs_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_00340fe0(1,param_1);
  }
  return param_1;
}


// ===== 005036c0  rive_hb_draw_funcs_destroy =====

void rive_hb_draw_funcs_destroy(int *param_1)

{
  int iVar1;
  undefined8 *__ptr;
  undefined8 uVar2;
  mutex *this;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = FUN_00340fe0(0xffffffff,param_1), iVar1 == 1)) {
    *param_1 = -0xdead;
    this = *(mutex **)(param_1 + 2);
    if (this != (mutex *)0x0) {
      FUN_004fe408(this + 0x28,this);
      std::__ndk1::mutex::~mutex(this);
      free(this);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    __ptr = *(undefined8 **)(param_1 + 0x10);
    if (__ptr != (undefined8 *)0x0) {
      if ((code *)*__ptr != (code *)0x0) {
        if (*(undefined8 **)(param_1 + 0xe) == (undefined8 *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = **(undefined8 **)(param_1 + 0xe);
        }
        (*(code *)*__ptr)(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x10);
      }
      if ((code *)__ptr[1] != (code *)0x0) {
        if (*(long *)(param_1 + 0xe) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 8);
        }
        (*(code *)__ptr[1])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x10);
      }
      if ((code *)__ptr[2] != (code *)0x0) {
        if (*(long *)(param_1 + 0xe) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x10);
        }
        (*(code *)__ptr[2])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x10);
      }
      if ((code *)__ptr[3] != (code *)0x0) {
        if (*(long *)(param_1 + 0xe) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x18);
        }
        (*(code *)__ptr[3])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x10);
      }
      if ((code *)__ptr[4] != (code *)0x0) {
        if (*(long *)(param_1 + 0xe) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x20);
        }
        (*(code *)__ptr[4])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 0x10);
      }
    }
    free(__ptr);
    free(*(void **)(param_1 + 0xe));
    free(param_1);
    return;
  }
  return;
}


// ===== 0050380c  rive_hb_draw_funcs_set_user_data =====

int * rive_hb_draw_funcs_set_user_data
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  mutex *this;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      this = *(mutex **)(param_1 + 2);
      while (this == (mutex *)0x0) {
        this = (mutex *)calloc(1,0x38);
        if (this == (mutex *)0x0) {
          return (int *)0x0;
        }
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)this = 0;
        lVar2 = FUN_003410d0(0,this,param_1 + 2);
        if (lVar2 == 0) break;
        FUN_004fe408(this + 0x28,this);
        std::__ndk1::mutex::~mutex(this);
        free(this);
        this = *(mutex **)(param_1 + 2);
      }
      uVar1 = FUN_004fe740(this,param_2,param_3,param_4,param_5);
      param_1 = (int *)(ulong)(uVar1 & 1);
    }
  }
  return param_1;
}


// ===== 005038f4  rive_hb_draw_funcs_get_user_data =====

void rive_hb_draw_funcs_get_user_data(int *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  int *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) || (*(long *)(param_1 + 2) == 0)) {
      param_1 = (int *)0x0;
    }
    else {
      local_40 = 0;
      local_38 = (int *)0x0;
      local_30 = 0;
      uVar2 = FUN_004feac8(*(long *)(param_1 + 2) + 0x28,param_2,&local_40);
      param_1 = local_38;
      if ((uVar2 & 1) == 0) {
        param_1 = (int *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


// ===== 00503974  rive_hb_draw_funcs_make_immutable =====

void rive_hb_draw_funcs_make_immutable(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


// ===== 00503984  rive_hb_draw_funcs_is_immutable =====

byte rive_hb_draw_funcs_is_immutable(long param_1)

{
  return (*(byte *)(param_1 + 4) ^ 0xff) & 1;
}


// ===== 00503994  rive_hb_draw_move_to =====

void rive_hb_draw_move_to(int param_1,int param_2,long param_3,undefined8 param_4,int *param_5)

{
  undefined8 uVar1;
  
  if (*param_5 != 0) {
    if (((float)param_5[1] != (float)param_5[3]) || ((float)param_5[2] != (float)param_5[4])) {
      if (*(long *)(param_3 + 0x38) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 8);
      }
      (**(code **)(param_3 + 0x18))(param_3,param_4,param_5,uVar1);
    }
    if (*(long *)(param_3 + 0x38) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20);
    }
    (**(code **)(param_3 + 0x30))(param_3,param_4,param_5,uVar1);
    param_5[2] = 0;
    param_5[0] = 0;
    param_5[1] = 0;
  }
  param_5[3] = param_1;
  param_5[4] = param_2;
  return;
}


// ===== 00503a50  rive_hb_draw_line_to =====

void rive_hb_draw_line_to(int param_1,int param_2,long param_3,undefined8 param_4,int *param_5)

{
  undefined8 uVar1;
  
  if (*param_5 == 0) {
    if (*(undefined8 **)(param_3 + 0x38) == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(undefined8 **)(param_3 + 0x38);
    }
    (**(code **)(param_3 + 0x10))(param_5[3],param_5[4],param_3,param_4,param_5,uVar1);
    *param_5 = 1;
    *(undefined8 *)(param_5 + 1) = *(undefined8 *)(param_5 + 3);
  }
  if (*(long *)(param_3 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 8);
  }
  (**(code **)(param_3 + 0x18))(param_1,param_2,param_3,param_4,param_5,uVar1);
  param_5[3] = param_1;
  param_5[4] = param_2;
  return;
}


// ===== 00503b08  rive_hb_draw_quadratic_to =====

void rive_hb_draw_quadratic_to
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4,long param_5,
               undefined8 param_6,int *param_7)

{
  undefined8 uVar1;
  
  if (*param_7 == 0) {
    if (*(undefined8 **)(param_5 + 0x38) == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(undefined8 **)(param_5 + 0x38);
    }
    (**(code **)(param_5 + 0x10))(param_7[3],param_7[4],param_5,param_6,param_7,uVar1);
    *param_7 = 1;
    *(undefined8 *)(param_7 + 1) = *(undefined8 *)(param_7 + 3);
  }
  if (*(long *)(param_5 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x10);
  }
  (**(code **)(param_5 + 0x20))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar1);
  param_7[3] = param_3;
  param_7[4] = param_4;
  return;
}


// ===== 00503bd8  rive_hb_draw_cubic_to =====

void rive_hb_draw_cubic_to
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5,int param_6,long param_7,undefined8 param_8,int *param_9)

{
  undefined8 uVar1;
  
  if (*param_9 == 0) {
    if (*(undefined8 **)(param_7 + 0x38) == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(undefined8 **)(param_7 + 0x38);
    }
    (**(code **)(param_7 + 0x10))(param_9[3],param_9[4],param_7,param_8,param_9,uVar1);
    *param_9 = 1;
    *(undefined8 *)(param_9 + 1) = *(undefined8 *)(param_9 + 3);
  }
  if (*(long *)(param_7 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_7 + 0x38) + 0x18);
  }
  (**(code **)(param_7 + 0x28))
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,uVar1);
  param_9[3] = param_5;
  param_9[4] = param_6;
  return;
}


// ===== 00503cc0  rive_hb_draw_close_path =====

void rive_hb_draw_close_path(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  
  if (*param_3 != 0) {
    if (((float)param_3[1] != (float)param_3[3]) || ((float)param_3[2] != (float)param_3[4])) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      }
      (**(code **)(param_1 + 0x18))(param_1,param_2,param_3,uVar1);
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
    }
    (**(code **)(param_1 + 0x30))(param_1,param_2,param_3,uVar1);
  }
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  return;
}


// ===== 00503d64  FUN_00503d64 =====

undefined * FUN_00503d64(void)

{
  undefined *puVar1;
  long lVar2;
  
  if (DAT_00687058 == (undefined *)0x0) {
    do {
      puVar1 = (undefined *)FUN_00503e04();
      if (puVar1 == (undefined *)0x0) {
        lVar2 = FUN_003410d0(0,&DAT_00686278,&DAT_00687058);
        if (lVar2 == 0) {
          return &DAT_00686278;
        }
      }
      else {
        lVar2 = FUN_003410d0(0,puVar1,&DAT_00687058);
        if (lVar2 == 0) {
          return puVar1;
        }
        if (puVar1 != &DAT_00686278) {
          rive_hb_draw_funcs_destroy(puVar1);
        }
      }
    } while (DAT_00687058 == (undefined *)0x0);
  }
  return DAT_00687058;
}


// ===== 00503e04  FUN_00503e04 =====

long FUN_00503e04(void)

{
  long lVar1;
  
  lVar1 = rive_hb_draw_funcs_create();
  rive_hb_draw_funcs_set_move_to_func(lVar1,FUN_00503e90,0,0);
  rive_hb_draw_funcs_set_line_to_func(lVar1,FUN_00503e98,0,0);
  rive_hb_draw_funcs_set_quadratic_to_func(lVar1,FUN_00503ea0,0,0);
  rive_hb_draw_funcs_set_cubic_to_func(lVar1,FUN_00503ee0,0,0);
  if ((*(byte *)(lVar1 + 4) & 1) != 0) {
    *(undefined1 *)(lVar1 + 4) = 0;
  }
  return lVar1;
}


// ===== 00503e90  FUN_00503e90 =====

void FUN_00503e90(undefined8 param_1,undefined8 param_2)

{
  FUN_00503f40(param_2);
  return;
}


// ===== 00503e98  FUN_00503e98 =====

void FUN_00503e98(undefined8 param_1,undefined8 param_2)

{
  FUN_00503f40(param_2);
  return;
}


// ===== 00503ea0  FUN_00503ea0 =====

void FUN_00503ea0(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
                 undefined4 param_4,undefined8 param_5,undefined8 param_6)

{
  FUN_00503f40(param_6);
  FUN_00503f40(param_3,param_4,param_6);
  return;
}


// ===== 00503ee0  FUN_00503ee0 =====

void FUN_00503ee0(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
                 undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined8 param_7,
                 undefined8 param_8)

{
  FUN_00503f40(param_8);
  FUN_00503f40(param_3,param_4,param_8);
  FUN_00503f40(param_5,param_6,param_8);
  return;
}


// ===== 00503f40  FUN_00503f40 =====

void FUN_00503f40(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *param_3;
  fVar1 = param_3[2];
  if (fVar2 == fVar1 || fVar2 < fVar1 != (NAN(fVar2) || NAN(fVar1))) {
    fVar4 = param_3[3];
    if (param_1 < fVar2) {
      fVar2 = param_1;
    }
    fVar3 = param_3[1];
    if (param_2 < param_3[1]) {
      fVar3 = param_2;
    }
    if (fVar1 < param_1 != (NAN(fVar1) || NAN(param_1))) {
      fVar1 = param_1;
    }
    *param_3 = fVar2;
    param_3[1] = fVar3;
    if (fVar4 < param_2 != (NAN(fVar4) || NAN(param_2))) {
      fVar4 = param_2;
    }
    param_3[2] = fVar1;
    param_3[3] = fVar4;
    return;
  }
  param_3[2] = param_1;
  param_3[3] = param_2;
  *param_3 = param_1;
  param_3[1] = param_2;
  return;
}


// ===== 00503f90  rive_hb_face_count =====

ulong rive_hb_face_count(ulong param_1)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_78 [48];
  long local_48;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  if (param_1 == 0) goto LAB_00504118;
  FUN_00504144(auStack_78,param_1);
  puVar1 = &DAT_0025d4b0;
  if (3 < *(uint *)(param_1 + 0x18)) {
    puVar1 = *(uint **)(param_1 + 0x10);
  }
  uVar7 = FUN_005041c0(puVar1,auStack_78);
  if ((uVar7 & 1) == 0) {
LAB_005040fc:
    param_1 = 0;
  }
  else {
    param_1 = 1;
    uVar4 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    if ((int)uVar4 < 0x74727565) {
      if (uVar4 == 0x100) {
        uVar7 = 0;
        uVar4 = (puVar1[1] & 0xff00ff00) >> 8 | (puVar1[1] & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        uVar2 = *(ushort *)((long)puVar1 + (ulong)uVar4 + 0x18);
        uVar2 = *(ushort *)
                 ((long)puVar1 +
                 (ulong)((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) + (ulong)uVar4);
        lVar9 = (long)puVar1 + (ulong)uVar4 + 2;
        do {
          uVar3 = *(ushort *)((long)puVar1 + (ulong)uVar4 + 0x18);
          uVar10 = (ulong)((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8);
          uVar3 = *(ushort *)((long)puVar1 + uVar10 + uVar4);
          puVar8 = &DAT_0025d4b0;
          if (uVar7 <= ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) {
            puVar8 = (uint *)(lVar9 + uVar10);
          }
          uVar5 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
          if ((uVar5 >> 0x10 | uVar5 << 0x10) == 0x73666e74) {
            param_1 = FUN_0050475c();
            param_1 = param_1 & 0xffffffff;
            goto LAB_0050410c;
          }
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 8;
        } while ((ulong)((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) + 1 != uVar7);
      }
      else if ((uVar4 == 0x10000) || (uVar4 == 0x4f54544f)) goto LAB_0050410c;
      goto LAB_005040fc;
    }
    if ((uVar4 != 0x74727565) && (uVar4 != 0x74797031)) {
      if ((uVar4 != 0x74746366) ||
         (1 < ((uint)(ushort)((ushort)puVar1[1] >> 8) | ((ushort)puVar1[1] & 0xff00ff) << 8) - 1))
      goto LAB_005040fc;
      uVar4 = (puVar1[2] & 0xff00ff00) >> 8 | (puVar1[2] & 0xff00ff) << 8;
      param_1 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
    }
  }
LAB_0050410c:
  if (local_48 != 0) {
    rive_hb_blob_destroy();
  }
LAB_00504118:
  if (*(long *)(lVar6 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1 & 0xffffffff;
}


// ===== 00504144  FUN_00504144 =====

void FUN_00504144(undefined4 *param_1,int *param_2)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[0xe] = 0x10000;
  *(undefined2 *)(param_1 + 0xf) = 0;
  if (param_2 != (int *)0x0) {
    if (*param_2 != 0) {
      FUN_00340fe0(1,param_2);
    }
    *(int **)(param_1 + 0xc) = param_2;
    *(undefined1 *)(param_1 + 10) = 0;
    FUN_005047f8(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


// ===== 005041c0  FUN_005041c0 =====

ulong FUN_005041c0(uint *param_1,long param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  uint *puVar24;
  long lVar25;
  
  puVar24 = param_1 + 1;
  if ((ulong)((long)puVar24 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
    uVar17 = 1;
    uVar12 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
    if ((int)uVar12 < 0x74727565) {
      if (uVar12 == 0x100) {
        if (((ulong)((long)param_1 + (0x10 - *(long *)(param_2 + 8))) <=
             (ulong)*(uint *)(param_2 + 0x18)) &&
           ((ulong)((long)puVar24 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
          uVar12 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
          lVar23 = (long)param_1 + (ulong)(uVar12 >> 0x10 | uVar12 << 0x10);
          if ((ulong)(lVar23 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
            uVar12 = param_1[2];
            uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
            uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
            if (((uVar12 <= (uint)(*(int *)(param_2 + 0x10) - (int)lVar23)) &&
                (iVar13 = *(int *)(param_2 + 0x1c) - uVar12, *(int *)(param_2 + 0x1c) = iVar13,
                0 < iVar13)) &&
               ((ulong)((long)(param_1 + 2) - *(long *)(param_2 + 8)) <=
                (ulong)*(uint *)(param_2 + 0x18))) {
              uVar12 = *param_1;
              bVar5 = *(byte *)((long)param_1 + 5);
              bVar6 = *(byte *)((long)param_1 + 6);
              uVar18 = (ulong)(byte)param_1[1] * 0x1000000;
              bVar7 = *(byte *)((long)param_1 + 7);
              uVar21 = uVar18 | (ulong)bVar5 << 0x10 | (ulong)bVar6 << 8 | (ulong)bVar7;
              if (((long)param_1 + (uVar21 - *(long *)(param_2 + 8)) + 0x1c <=
                   (ulong)*(uint *)(param_2 + 0x18)) &&
                 ((long)param_1 + (uVar21 - *(long *)(param_2 + 8)) + 0x1a <=
                  (ulong)*(uint *)(param_2 + 0x18))) {
                bVar8 = *(byte *)((long)param_1 + uVar21 + 0x18);
                bVar9 = *(byte *)((long)param_1 + uVar21 + 0x19);
                uVar10 = *(ushort *)((long)param_1 + uVar21 + 0x18);
                puVar2 = (ushort *)
                         ((long)param_1 + ((uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8) + uVar21)
                ;
                puVar1 = puVar2 + 1;
                if ((((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <=
                      (ulong)*(uint *)(param_2 + 0x18)) &&
                    (((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <=
                      (ulong)*(uint *)(param_2 + 0x18) &&
                     (uVar17 = ((uint)(byte)*puVar2 << 0xb | (uint)*(byte *)((long)puVar2 + 1) << 3)
                               + 8, uVar17 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar1))))) &&
                   (iVar13 = *(int *)(param_2 + 0x1c) - uVar17, *(int *)(param_2 + 0x1c) = iVar13,
                   0 < iVar13)) {
                  uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
                  uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
                  uVar22 = 0;
                  uVar10 = *puVar2;
                  do {
                    if ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                        (byte *)((long)puVar2 + (uVar22 * 8 - *(long *)(param_2 + 8)) + 10))
                    goto LAB_00504280;
                    uVar16 = FUN_0050475c();
                    if ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                        (byte *)((long)(puVar2 + uVar22 * 4 + 4) + (2 - *(long *)(param_2 + 8))))
                    goto LAB_00504280;
                    uVar11 = puVar2[uVar22 * 4 + 4];
                    uVar19 = (ulong)((uint)(uVar11 >> 8) | (uVar11 & 0xff00ff) << 8);
                    lVar23 = (long)param_1 + uVar19 + CONCAT11(bVar8,bVar9) + uVar21;
                    if ((((ulong)*(uint *)(param_2 + 0x18) <
                          (ulong)(lVar23 - *(long *)(param_2 + 8))) ||
                        ((uint)(*(int *)(param_2 + 0x10) - (int)lVar23) < uVar16 * 0xc)) ||
                       (iVar13 = *(int *)(param_2 + 0x1c) + uVar16 * -0xc,
                       *(int *)(param_2 + 0x1c) = iVar13, iVar13 < 1)) goto LAB_00504280;
                    if (uVar16 == 0) {
                      uVar17 = 1;
                    }
                    else {
                      lVar25 = 0;
                      lVar14 = uVar19 + uVar18 + (ulong)bVar5 * 0x10000 + (ulong)bVar6 * 0x100 +
                                        (ulong)bVar9 + (ulong)bVar7 + (ulong)bVar8 * 0x100 + 5;
                      do {
                        lVar20 = (lVar23 + lVar25) - *(long *)(param_2 + 8);
                        if (((ulong)*(uint *)(param_2 + 0x18) < lVar20 + 0xcU) ||
                           ((ulong)*(uint *)(param_2 + 0x18) < lVar20 + 8U)) goto LAB_00504280;
                        pbVar3 = (byte *)((long)param_1 + lVar25 + lVar14);
                        puVar4 = (uint *)((long)param_1 +
                                         ((ulong)*pbVar3 << 0x10 | (ulong)pbVar3[1] << 8 |
                                         (ulong)pbVar3[2]) + (ulong)uVar12);
                        puVar24 = puVar4 + 1;
                        if ((((ulong)*(uint *)(param_2 + 0x18) <
                              (ulong)((long)puVar24 - *(long *)(param_2 + 8))) ||
                            (((ulong)*(uint *)(param_2 + 0x18) <
                              (ulong)((long)puVar24 - *(long *)(param_2 + 8)) ||
                             (uVar17 = *puVar4,
                             uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8,
                             uVar17 = uVar17 >> 0x10 | uVar17 << 0x10,
                             (uint)(*(int *)(param_2 + 0x10) - (int)puVar24) < uVar17)))) ||
                           (iVar13 = *(int *)(param_2 + 0x1c) - uVar17,
                           *(int *)(param_2 + 0x1c) = iVar13, iVar13 < 1)) goto LAB_00504280;
                        pbVar3 = (byte *)((long)param_1 + lVar25 + lVar14);
                        lVar20 = ((ulong)*pbVar3 << 0x10 | (ulong)pbVar3[1] << 8 | (ulong)pbVar3[2])
                                 + (ulong)uVar12;
                        if ((ulong)*(uint *)(param_2 + 0x18) <
                            (ulong)((long)param_1 + (lVar20 - *(long *)(param_2 + 8)) + 0x10))
                        goto LAB_00504280;
                        uVar17 = FUN_0050478c((long)param_1 + lVar20 + 8,param_2);
                      } while (((uVar17 & 1) != 0) &&
                              (bVar15 = (ulong)uVar16 * 0xc + -0xc != lVar25, lVar25 = lVar25 + 0xc,
                              bVar15));
                    }
                  } while (((uVar17 & 1) != 0) &&
                          (bVar15 = uVar22 != ((uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8),
                          uVar22 = uVar22 + 1, bVar15));
                  goto LAB_00504284;
                }
              }
            }
          }
        }
      }
      else {
        if (uVar12 != 0x10000) {
          uVar16 = 0x4f54544f;
LAB_00504260:
          if (uVar12 != uVar16) goto LAB_00504284;
        }
LAB_00504268:
        if ((ulong)((long)param_1 + (0xc - *(long *)(param_2 + 8))) <=
            (ulong)*(uint *)(param_2 + 0x18)) {
          uVar18 = FUN_0050478c(puVar24,param_2);
          return uVar18;
        }
      }
    }
    else {
      if (uVar12 == 0x74797031) goto LAB_00504268;
      if (uVar12 != 0x74746366) {
        uVar16 = 0x74727565;
        goto LAB_00504260;
      }
      if ((ulong)((long)param_1 + (8 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18))
      {
        if (1 < ((uint)(ushort)((ushort)param_1[1] >> 8) | ((ushort)param_1[1] & 0xff00ff) << 8) - 1
           ) goto LAB_00504284;
        puVar24 = param_1 + 3;
        if (((((ulong)((long)puVar24 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))
             && ((byte)((byte)param_1[2] >> 6) == 0)) &&
            ((ulong)((long)puVar24 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)))
           && ((uVar12 = (uint)(byte)param_1[2] << 0x18 | (uint)*(byte *)((long)param_1 + 9) << 0x10
                         | (uint)*(byte *)((long)param_1 + 10) << 8 |
                         (uint)*(byte *)((long)param_1 + 0xb),
               uVar12 * 4 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar24) &&
               (iVar13 = *(int *)(param_2 + 0x1c) + uVar12 * -4, *(int *)(param_2 + 0x1c) = iVar13,
               0 < iVar13)))) {
          uVar12 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
          uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
          uVar18 = (ulong)uVar12;
          if (uVar12 != 0) {
            lVar23 = (long)param_1 + 0xf;
            puVar24 = param_1 + 4;
            do {
              uVar18 = uVar18 - 1;
              if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar24 - *(long *)(param_2 + 8))
                 ) goto LAB_00504280;
              uVar12 = (*(uint *)(lVar23 + -3) & 0xff00ff00) >> 8 |
                       (*(uint *)(lVar23 + -3) & 0xff00ff) << 8;
              uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
              if (uVar12 == 0) {
                uVar17 = 1;
              }
              else {
                if ((ulong)*(uint *)(param_2 + 0x18) <
                    (long)param_1 + ((ulong)uVar12 - *(long *)(param_2 + 8)) + 0xc)
                goto LAB_00504280;
                uVar17 = FUN_0050478c((long)param_1 + (ulong)uVar12 + 4,param_2);
              }
              if ((uVar17 & 1) == 0) break;
              lVar23 = lVar23 + 4;
              puVar24 = puVar24 + 1;
            } while (uVar18 != 0);
          }
          goto LAB_00504284;
        }
      }
    }
  }
LAB_00504280:
  uVar17 = 0;
LAB_00504284:
  return (ulong)(uVar17 & 1);
}


// ===== 0050475c  FUN_0050475c =====

int FUN_0050475c(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  if ((uVar1 >> 0x10 | uVar1 << 0x10) == 0x73666e74) {
    return ((uint)(ushort)((ushort)param_1[1] >> 8) | ((ushort)param_1[1] & 0xff00ff) << 8) + 1;
  }
  return 0;
}


// ===== 0050478c  FUN_0050478c =====

bool FUN_0050478c(byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  pbVar1 = param_1 + 8;
  if ((((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
      ((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
     (uVar2 = (uint)*param_1 << 0xc | (uint)param_1[1] << 4,
     uVar2 <= (uint)(*(int *)(param_2 + 0x10) - (int)pbVar1))) {
    iVar3 = *(int *)(param_2 + 0x1c) - uVar2;
    *(int *)(param_2 + 0x1c) = iVar3;
    return 0 < iVar3;
  }
  return false;
}


// ===== 005047f8  FUN_005047f8 =====

void FUN_005047f8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xc);
  if (lVar4 == 0) {
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = *(long *)(param_1 + 4);
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar3 + (ulong)*(uint *)(lVar4 + 0x18);
    *(long *)(param_1 + 2) = lVar3;
    *(long *)(param_1 + 4) = lVar4;
  }
  uVar1 = (int)lVar4 - (int)lVar3;
  uVar2 = 0x3fffffff;
  param_1[6] = uVar1;
  if (uVar1 >> 0x1a == 0) {
    uVar2 = uVar1 * 0x40;
    if (uVar2 < 0x4001) {
      uVar2 = 0x4000;
    }
    if (0x3ffffffe < uVar2) {
      uVar2 = 0x3fffffff;
    }
  }
  param_1[7] = uVar2;
  *param_1 = 0;
  param_1[9] = 0;
  return;
}


// ===== 00504854  rive_hb_face_create_for_tables =====

undefined4 * rive_hb_face_create_for_tables(long param_1,undefined8 param_2,code *param_3)

{
  undefined4 *puVar1;
  
  if ((param_1 == 0) || (puVar1 = (undefined4 *)calloc(1,0x168), puVar1 == (undefined4 *)0x0)) {
    if (param_3 != (code *)0x0) {
      (*param_3)(param_2);
    }
    puVar1 = (undefined4 *)&DAT_00686440;
  }
  else {
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(long *)(puVar1 + 8) = param_1;
    *(undefined8 *)(puVar1 + 10) = param_2;
    *(code **)(puVar1 + 0xc) = param_3;
    puVar1[6] = 0xffffffff;
    *(undefined4 **)(puVar1 + 0x14) = puVar1;
    *(undefined4 **)(puVar1 + 0x18) = puVar1;
  }
  return puVar1;
}


// ===== 005048d8  rive_hb_face_get_empty =====

undefined * rive_hb_face_get_empty(void)

{
  return &DAT_00686440;
}


// ===== 005048e4  rive_hb_face_create =====

undefined4 * rive_hb_face_create(int *param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *__ptr;
  undefined4 *puVar3;
  undefined4 local_88 [2];
  long local_80;
  long lStack_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined1 local_60;
  int *local_58;
  undefined4 local_50;
  undefined2 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == (int *)0x0) {
    param_1 = &DAT_0025d4b0;
  }
  local_88[0] = 0;
  local_58 = (int *)0x0;
  local_60 = 0;
  local_50 = 0x10000;
  lStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_4c = 0;
  if (*param_1 != 0) {
    FUN_00340fe0(1,param_1);
  }
  if (*param_1 != 0) {
    FUN_00340fe0(1,param_1);
  }
  local_80 = *(long *)(param_1 + 4);
  local_70._0_4_ = param_1[6];
  local_60 = 0;
  lStack_78 = local_80 + (ulong)(uint)local_70;
  local_70._4_4_ = 0x3fffffff;
  if ((uint)local_70 >> 0x1a == 0) {
    local_70._4_4_ = (uint)local_70 << 6;
    if (local_70._4_4_ < 0x4001) {
      local_70._4_4_ = 0x4000;
    }
    if (0x3ffffffe < local_70._4_4_) {
      local_70._4_4_ = 0x3fffffff;
    }
  }
  local_88[0] = 0;
  uStack_68 = uStack_68 & 0xffffffff;
  local_58 = param_1;
  if (local_80 == 0) {
    rive_hb_blob_destroy(param_1);
  }
  else {
    uVar2 = FUN_005041c0(local_80,local_88);
    rive_hb_blob_destroy(local_58);
    local_58 = (int *)0x0;
    local_80 = 0;
    lStack_78 = 0;
    local_70._0_4_ = 0;
    if ((uVar2 & 1) == 0) {
      rive_hb_blob_destroy(param_1);
      param_1 = &DAT_0025d4b0;
    }
    else if ((*(byte *)(param_1 + 1) & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  __ptr = (undefined8 *)calloc(1,0x10);
  if (__ptr == (undefined8 *)0x0) {
    rive_hb_blob_destroy(param_1);
    puVar3 = (undefined4 *)&DAT_00686440;
  }
  else {
    *__ptr = param_1;
    *(short *)(__ptr + 1) = (short)param_2;
    puVar3 = (undefined4 *)calloc(1,0x168);
    if (puVar3 == (undefined4 *)0x0) {
      rive_hb_blob_destroy(param_1);
      free(__ptr);
      puVar3 = (undefined4 *)&DAT_00686440;
    }
    else {
      *puVar3 = 1;
      *(undefined1 *)(puVar3 + 1) = 1;
      *(undefined8 *)(puVar3 + 2) = 0;
      *(code **)(puVar3 + 8) = FUN_00504b10;
      *(undefined8 **)(puVar3 + 10) = __ptr;
      *(code **)(puVar3 + 0xc) = FUN_00504ca8;
      puVar3[6] = 0xffffffff;
      *(undefined4 **)(puVar3 + 0x14) = puVar3;
      *(undefined4 **)(puVar3 + 0x18) = puVar3;
    }
    if ((*(byte *)(puVar3 + 1) & 1) != 0) {
      if (*(code **)(puVar3 + 0x12) != (code *)0x0) {
        (**(code **)(puVar3 + 0x12))(*(undefined8 *)(puVar3 + 0x10));
      }
      *(undefined8 *)(puVar3 + 0x12) = 0;
      *(code **)(puVar3 + 0xe) = FUN_00504cd0;
      *(undefined8 **)(puVar3 + 0x10) = __ptr;
    }
    puVar3[4] = param_2;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar3;
}


// ===== 00504b10  FUN_00504b10 =====

int * FUN_00504b10(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  piVar13 = (int *)*param_3;
  if (param_2 == 0) {
    if ((piVar13 != (int *)0x0) && (*piVar13 != 0)) {
      FUN_00340fe0(1,piVar13);
    }
    goto LAB_00504c7c;
  }
  puVar6 = &DAT_0025d4b0;
  if (3 < (uint)piVar13[6]) {
    puVar6 = *(undefined4 **)(piVar13 + 4);
  }
  lVar5 = FUN_00504d94(puVar6,*(undefined2 *)(param_3 + 1),&local_3c);
  uVar1 = *(undefined1 *)(lVar5 + 4);
  uVar4 = CONCAT11(uVar1,*(undefined1 *)(lVar5 + 5));
  if (uVar4 < 0x10) {
    if (uVar4 == 0) goto LAB_00504c54;
    uVar12 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
    uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
    if (*(uint *)(lVar5 + 0xc) != uVar12) {
      uVar7 = 0;
      puVar10 = (uint *)(lVar5 + 0x1c);
      do {
        if ((ulong)uVar4 - 1 == uVar7) goto LAB_00504c0c;
        uVar2 = *puVar10;
        uVar7 = uVar7 + 1;
        puVar10 = puVar10 + 4;
      } while (uVar2 != uVar12);
      goto LAB_00504c40;
    }
    uVar7 = 0;
LAB_00504c48:
    puVar6 = (undefined4 *)((undefined1 *)(lVar5 + 4) + (uVar7 & 0xffffffff) * 0x10 + 8);
  }
  else {
    uVar12 = (uint)CONCAT11(uVar1,*(undefined1 *)(lVar5 + 5));
    if (uVar12 != 0) {
      iVar9 = 0;
      iVar8 = uVar12 - 1;
      do {
        uVar2 = (uint)(iVar8 + iVar9) >> 1;
        uVar7 = (ulong)uVar2;
        uVar12 = ((uint *)(lVar5 + 0xc))[uVar7 * 4];
        uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
        uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
        uVar11 = (uint)(param_2 < uVar12);
        uVar12 = (uint)(uVar12 < param_2);
        if ((int)(uVar12 - uVar11) < 0) {
          iVar8 = uVar2 - 1;
        }
        else {
          if (uVar12 == uVar11) goto LAB_00504c40;
          iVar9 = uVar2 + 1;
        }
      } while (iVar9 <= iVar8);
LAB_00504c0c:
      uVar7 = 0xffff;
LAB_00504c40:
      if ((uint)uVar7 < (uint)uVar4) goto LAB_00504c48;
    }
LAB_00504c54:
    puVar6 = &DAT_0025d4b0;
  }
  uVar12 = (puVar6[2] & 0xff00ff00) >> 8 | (puVar6[2] & 0xff00ff) << 8;
  uVar2 = (puVar6[3] & 0xff00ff00) >> 8 | (puVar6[3] & 0xff00ff) << 8;
  piVar13 = (int *)rive_hb_blob_create_sub_blob
                             (*param_3,(uVar12 >> 0x10 | uVar12 << 0x10) + local_3c,
                              uVar2 >> 0x10 | uVar2 << 0x10);
LAB_00504c7c:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return piVar13;
}


// ===== 00504ca8  FUN_00504ca8 =====

void FUN_00504ca8(undefined8 *param_1)

{
  rive_hb_blob_destroy(*param_1);
  free(param_1);
  return;
}


// ===== 00504cd0  FUN_00504cd0 =====

uint FUN_00504cd0(undefined8 param_1,uint param_2,uint *param_3,uint *param_4,long *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  puVar1 = &DAT_0025d4b0;
  if (3 < *(uint *)(*param_5 + 0x18)) {
    puVar1 = *(undefined4 **)(*param_5 + 0x10);
  }
  lVar4 = FUN_00504d94(puVar1,(short)param_5[1],0);
  if (param_3 != (uint *)0x0) {
    uVar2 = (uint)(*(ushort *)(lVar4 + 4) >> 8) | (*(ushort *)(lVar4 + 4) & 0xff00ff) << 8;
    uVar5 = 0;
    if (param_2 <= uVar2) {
      uVar5 = uVar2 - param_2;
    }
    if (*param_3 <= uVar5) {
      uVar5 = *param_3;
    }
    *param_3 = uVar5;
    if (uVar5 != 0) {
      iVar7 = -uVar5;
      puVar6 = (uint *)(lVar4 + (ulong)param_2 * 0x10 + 0xc);
      do {
        uVar2 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
        uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
        if (uVar5 != 0) {
          uVar5 = uVar5 - 1;
          *param_4 = uVar2;
          param_4 = param_4 + 1;
          uVar2 = (uint)DAT_006870b0;
        }
        DAT_006870b0._0_4_ = uVar2;
        bVar3 = iVar7 != -1;
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 4;
      } while (bVar3);
    }
  }
  return (uint)(*(ushort *)(lVar4 + 4) >> 8) | (*(ushort *)(lVar4 + 4) & 0xff00ff) << 8;
}


// ===== 00504d94  FUN_00504d94 =====

uint * FUN_00504d94(uint *param_1,uint param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  byte *pbVar13;
  
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  uVar7 = *param_1;
  bVar1 = *(byte *)((long)param_1 + 1);
  bVar2 = *(byte *)((long)param_1 + 2);
  bVar3 = *(byte *)((long)param_1 + 3);
  uVar6 = (uint)(byte)uVar7 << 0x18 | (uint)bVar1 << 0x10 | (uint)bVar2 << 8 | (uint)bVar3;
  if ((int)uVar6 < 0x74727565) {
    if (uVar6 == 0x100) {
      uVar12 = 0;
      puVar10 = &DAT_0025d4b0;
      uVar6 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      uVar4 = *(ushort *)((long)param_1 + (ulong)uVar6 + 0x18);
      pbVar13 = (byte *)((long)param_1 + (ulong)uVar6 + 2);
      uVar4 = *(ushort *)
               ((long)param_1 + (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8) + (ulong)uVar6
               );
      while( true ) {
        uVar5 = *(ushort *)((long)param_1 + (ulong)uVar6 + 0x18);
        uVar9 = (ulong)((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8);
        uVar5 = *(ushort *)((long)param_1 + uVar9 + uVar6);
        puVar11 = puVar10;
        if (uVar12 <= ((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8)) {
          puVar11 = (uint *)(pbVar13 + uVar9);
        }
        uVar8 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
        if (((uVar8 >> 0x10 | uVar8 << 0x10) == 0x73666e74) &&
           (uVar8 = FUN_0050475c(puVar11), param_2 < uVar8)) break;
        uVar12 = uVar12 + 1;
        pbVar13 = pbVar13 + 8;
        if ((ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8) + 1 == uVar12) {
LAB_00504f9c:
          if (param_3 == (int *)0x0) {
            return puVar10;
          }
          *param_3 = (int)puVar10 - (int)param_1;
          return puVar10;
        }
      }
      uVar4 = *(ushort *)((long)param_1 + (ulong)uVar6 + 0x18);
      uVar5 = *(ushort *)((long)puVar11 + 6);
      uVar8 = FUN_0050475c(puVar11);
      puVar11 = (uint *)((long)param_1 +
                        (ulong)param_2 * 0xc +
                        (ulong)((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) +
                        (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8) + (ulong)uVar6);
      if (uVar8 <= param_2) {
        puVar11 = puVar10;
      }
      puVar10 = (uint *)((long)param_1 +
                        ((ulong)*(byte *)((long)puVar11 + 5) << 0x10 |
                         (ulong)*(byte *)((long)puVar11 + 6) << 8 |
                        (ulong)*(byte *)((long)puVar11 + 7)) +
                        ((ulong)(byte)uVar7 << 0x18 | (ulong)bVar1 << 0x10 | (ulong)bVar2 << 8 |
                        (ulong)bVar3) + 4);
      goto LAB_00504f9c;
    }
    if (uVar6 == 0x10000 || uVar6 == 0x4f54544f) {
      return param_1;
    }
  }
  else {
    if (uVar6 == 0x74727565 || uVar6 == 0x74797031) {
      return param_1;
    }
    if ((uVar6 == 0x74746366) &&
       (((uint)(ushort)((ushort)param_1[1] >> 8) | ((ushort)param_1[1] & 0xff00ff) << 8) - 1 < 2)) {
      uVar6 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
      puVar10 = &DAT_0025d4b0;
      if (param_2 < (uVar6 >> 0x10 | uVar6 << 0x10)) {
        puVar10 = param_1 + (ulong)param_2 + 3;
      }
      uVar6 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      if (uVar6 == 0) {
        return &DAT_0025d4b0;
      }
      return (uint *)((long)param_1 + (ulong)uVar6);
    }
  }
  return &DAT_0025d4b0;
}


// ===== 00504fe0  rive_hb_face_set_get_table_tags_func =====

void rive_hb_face_set_get_table_tags_func
               (long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00505010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x40));
    }
    *(undefined8 *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x40) = param_3;
    *(code **)(param_1 + 0x48) = UNRECOVERED_JUMPTABLE;
  }
  return;
}


// ===== 0050504c  rive_hb_face_create_or_fail =====

long rive_hb_face_create_or_fail(undefined8 param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = rive_hb_face_count();
  if (param_2 < uVar1) {
    lVar2 = rive_hb_face_create(param_1,param_2);
    lVar3 = 0;
    if ((*(byte *)(lVar2 + 4) & 1) != 0) {
      lVar3 = lVar2;
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}


// ===== 00505098  rive_hb_face_reference =====

int * rive_hb_face_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_00340fe0(1,param_1);
  }
  return param_1;
}


// ===== 005050d4  rive_hb_face_destroy =====

void rive_hb_face_destroy(int *param_1)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  int iVar2;
  mutex *this;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar2 = FUN_00340fe0(0xffffffff,param_1), iVar2 == 1)) {
    *param_1 = -0xdead;
    this = *(mutex **)(param_1 + 2);
    if (this != (mutex *)0x0) {
      FUN_004fe408(this + 0x28,this);
      std::__ndk1::mutex::~mutex(this);
      free(this);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    __ptr = *(undefined8 **)(param_1 + 0x58);
    while (__ptr != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)__ptr[1];
      rive_hb_shape_plan_destroy(*__ptr);
      free(__ptr);
      __ptr = puVar1;
    }
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if ((*(undefined4 **)(param_1 + 0x1a) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x1a) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    if ((*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x1c) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    if ((*(undefined4 **)(param_1 + 0x1e) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x1e) != &DAT_0025d4b0)) {
      FUN_00510fbc();
    }
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    if ((*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x20) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    if ((*(undefined4 **)(param_1 + 0x22) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x22) != &DAT_0025d4b0)) {
      FUN_00510fec();
    }
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    if ((*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x24) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    FUN_00511020(*(undefined8 *)(param_1 + 0x26));
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    if ((*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x28) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    if ((*(undefined4 **)(param_1 + 0x2a) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x2a) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    FUN_00511094(*(undefined8 *)(param_1 + 0x2c));
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    FUN_005110f4(*(undefined8 *)(param_1 + 0x2e));
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    FUN_005111a8(*(undefined8 *)(param_1 + 0x30));
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    if ((*(undefined4 **)(param_1 + 0x32) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x32) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    if ((*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x34) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    if ((*(undefined4 **)(param_1 + 0x36) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x36) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    FUN_00511230(*(undefined8 *)(param_1 + 0x38));
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    if ((*(undefined4 **)(param_1 + 0x3a) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x3a) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    FUN_00511278(*(undefined8 *)(param_1 + 0x3c));
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    FUN_005112e0(*(undefined8 *)(param_1 + 0x3e));
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    FUN_005113a0(*(undefined8 *)(param_1 + 0x40));
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    FUN_00511460(*(undefined8 *)(param_1 + 0x42));
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    FUN_00511548(*(undefined8 *)(param_1 + 0x44));
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    FUN_00511630(*(undefined8 *)(param_1 + 0x46));
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    if ((*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x48) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    if ((*(undefined4 **)(param_1 + 0x4a) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x4a) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    if ((*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x4c) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    if ((*(undefined4 **)(param_1 + 0x4e) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x4e) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    FUN_0050edcc(*(undefined8 *)(param_1 + 0x50));
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    if ((*(undefined4 **)(param_1 + 0x52) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x52) != &DAT_0025d4b0)) {
      rive_hb_blob_destroy();
    }
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    if ((*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x54) != &DAT_0025d4b0)) {
      FUN_005106fc();
    }
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    FUN_0051027c(*(undefined8 *)(param_1 + 0x56));
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    if (*(code **)(param_1 + 0x12) != (code *)0x0) {
      (**(code **)(param_1 + 0x12))(*(undefined8 *)(param_1 + 0x10));
    }
    if (*(code **)(param_1 + 0xc) != (code *)0x0) {
      (**(code **)(param_1 + 0xc))(*(undefined8 *)(param_1 + 10));
    }
    free(param_1);
    return;
  }
  return;
}


// ===== 00505484  rive_hb_face_set_user_data =====

int * rive_hb_face_set_user_data
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  mutex *this;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      this = *(mutex **)(param_1 + 2);
      while (this == (mutex *)0x0) {
        this = (mutex *)calloc(1,0x38);
        if (this == (mutex *)0x0) {
          return (int *)0x0;
        }
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)this = 0;
        lVar2 = FUN_003410d0(0,this,param_1 + 2);
        if (lVar2 == 0) break;
        FUN_004fe408(this + 0x28,this);
        std::__ndk1::mutex::~mutex(this);
        free(this);
        this = *(mutex **)(param_1 + 2);
      }
      uVar1 = FUN_004fe740(this,param_2,param_3,param_4,param_5);
      param_1 = (int *)(ulong)(uVar1 & 1);
    }
  }
  return param_1;
}


// ===== 0050556c  rive_hb_face_get_user_data =====

void rive_hb_face_get_user_data(int *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  int *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) || (*(long *)(param_1 + 2) == 0)) {
      param_1 = (int *)0x0;
    }
    else {
      local_40 = 0;
      local_38 = (int *)0x0;
      local_30 = 0;
      uVar2 = FUN_004feac8(*(long *)(param_1 + 2) + 0x28,param_2,&local_40);
      param_1 = local_38;
      if ((uVar2 & 1) == 0) {
        param_1 = (int *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


// ===== 005055ec  rive_hb_face_make_immutable =====

void rive_hb_face_make_immutable(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


// ===== 005055fc  rive_hb_face_is_immutable =====

byte rive_hb_face_is_immutable(long param_1)

{
  return (*(byte *)(param_1 + 4) ^ 0xff) & 1;
}


// ===== 0050560c  rive_hb_face_reference_table =====

undefined4 * rive_hb_face_reference_table(long param_1,int param_2)

{
  undefined4 *puVar1;
  
  if ((param_2 != 0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
    puVar1 = (undefined4 *)
             (**(code **)(param_1 + 0x20))(param_1,param_2,*(undefined8 *)(param_1 + 0x28));
    if (puVar1 != (undefined4 *)0x0) {
      return puVar1;
    }
  }
  return &DAT_0025d4b0;
}


// ===== 00505640  rive_hb_face_reference_blob =====

undefined4 * rive_hb_face_reference_blob(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint local_16c;
  int local_168 [64];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (((*(code **)(param_1 + 0x20) == (code *)0x0) ||
      (puVar3 = (undefined4 *)
                (**(code **)(param_1 + 0x20))(param_1,0,*(undefined8 *)(param_1 + 0x28)),
      puVar3 == (undefined4 *)0x0)) || (puVar3 == &DAT_0025d4b0)) {
    if ((*(code **)(param_1 + 0x38) == (code *)0x0) ||
       (uVar2 = (**(code **)(param_1 + 0x38))(param_1,0,0,0,*(undefined8 *)(param_1 + 0x40)),
       uVar2 == 0)) {
      puVar3 = &DAT_0025d4b0;
    }
    else {
      local_16c = 0x40;
      uVar4 = rive_hb_face_builder_create();
      uVar6 = 0;
      do {
        if (*(code **)(param_1 + 0x38) == (code *)0x0) {
          local_16c = 0;
          break;
        }
        (**(code **)(param_1 + 0x38))
                  (param_1,uVar6,&local_16c,local_168,*(undefined8 *)(param_1 + 0x40));
        uVar5 = (ulong)local_16c;
        if (local_16c == 0) break;
        uVar7 = 0;
        do {
          if (local_168[uVar7] != 0) {
            if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
               (puVar3 = (undefined4 *)
                         (**(code **)(param_1 + 0x20))
                                   (param_1,local_168[uVar7],*(undefined8 *)(param_1 + 0x28)),
               puVar3 == (undefined4 *)0x0)) {
              puVar3 = &DAT_0025d4b0;
            }
            rive_hb_face_builder_add_table(uVar4,local_168[uVar7],puVar3);
            rive_hb_blob_destroy(puVar3);
            uVar5 = (ulong)local_16c;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar5);
        uVar6 = (int)uVar5 + uVar6;
      } while (uVar6 < uVar2);
      puVar3 = (undefined4 *)rive_hb_face_reference_blob(uVar4);
      rive_hb_face_destroy(uVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar3;
}


// ===== 005057d8  rive_hb_face_get_table_tags =====

undefined8 rive_hb_face_get_table_tags(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005057e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x38))();
    return uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return 0;
}


// ===== 005057f8  rive_hb_face_set_index =====

void rive_hb_face_set_index(long param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
  }
  return;
}


// ===== 00505808  rive_hb_face_get_index =====

undefined4 rive_hb_face_get_index(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 00505810  rive_hb_face_set_upem =====

void rive_hb_face_set_upem(long param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
  }
  return;
}


// ===== 00505820  rive_hb_face_get_upem =====

ulong rive_hb_face_get_upem(long param_1)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0x14) != 0) {
    return (ulong)*(uint *)(param_1 + 0x14);
  }
  uVar1 = FUN_00564f7c();
  return uVar1;
}


// ===== 00505834  rive_hb_face_set_glyph_count =====

void rive_hb_face_set_glyph_count(long param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x18) = param_2;
  }
  return;
}


// ===== 00505844  rive_hb_face_get_glyph_count =====

ulong rive_hb_face_get_glyph_count(long param_1)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    return (ulong)*(uint *)(param_1 + 0x18);
  }
  uVar1 = FUN_00564f34();
  return uVar1;
}


// ===== 0050585c  rive_hb_face_builder_create =====

undefined * rive_hb_face_builder_create(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined4 *)calloc(1,0x30);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = &DAT_00686440;
  }
  else {
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined1 *)(puVar1 + 4) = 1;
    *(undefined8 *)(puVar1 + 10) = 0;
    puVar2 = (undefined *)rive_hb_face_create_for_tables(FUN_005058f4,puVar1,FUN_005063a0);
    if ((puVar2[4] & 1) != 0) {
      if (*(code **)(puVar2 + 0x48) != (code *)0x0) {
        (**(code **)(puVar2 + 0x48))(*(undefined8 *)(puVar2 + 0x40));
      }
      *(undefined8 *)(puVar2 + 0x48) = 0;
      *(code **)(puVar2 + 0x38) = FUN_00506554;
      *(undefined4 **)(puVar2 + 0x40) = puVar1;
    }
  }
  return puVar2;
}


// ===== 005058f4  FUN_005058f4 =====

int * FUN_005058f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  uint *__dest;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  int *piVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint *puVar21;
  int *piVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  int iVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  ulong local_160;
  uint *local_138;
  undefined8 local_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *local_118;
  undefined8 uStack_110;
  uint *local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  uint *puStack_f0;
  undefined8 local_e8;
  void *pvStack_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c6;
  undefined8 local_be;
  undefined2 local_b6;
  undefined8 local_b0;
  undefined8 local_a8;
  uint *local_a0;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  if ((int)param_2 != 0) {
    puVar20 = (undefined8 *)&DAT_0025d4b0;
    if (*(long *)(param_3 + 0x28) != 0) {
      lVar9 = FUN_0050691c(param_3,param_2,(int)param_2 * -0x61c8864f);
      if (lVar9 != 0) {
        puVar20 = (undefined8 *)(lVar9 + 8);
      }
    }
    piVar22 = (int *)*puVar20;
    if ((piVar22 != (int *)0x0) && (*piVar22 != 0)) {
      FUN_00340fe0(1,piVar22);
    }
    goto LAB_005062d4;
  }
  puVar23 = *(uint **)(param_3 + 0x28);
  uVar13 = *(uint *)(param_3 + 0x1c) + 1;
  uVar28 = *(int *)(param_3 + 0x14) << 4 | 0xc;
  if (uVar13 < 2) {
    uVar19 = 0;
    puVar24 = puVar23;
    uVar12 = 0;
  }
  else {
    uVar17 = 0;
    puVar25 = puVar23 + (ulong)*(uint *)(param_3 + 0x1c) * 6 + 6;
    uVar19 = uVar13;
    do {
      puVar24 = puVar23;
      uVar12 = uVar17;
      if ((puVar23[1] & 1) != 0) break;
      uVar19 = uVar19 - 1;
      uVar17 = uVar17 + 1;
      puVar23 = puVar23 + 6;
      puVar24 = puVar25;
      uVar12 = uVar13;
    } while (uVar19 != 0);
  }
  local_130 = (uint *)CONCAT44(uVar12,uVar19);
  puStack_128 = PTR_is_real_0067d808;
  puStack_120 = (undefined *)0x0;
  local_118 = &DAT_002537d9;
  uStack_110 = PTR_get_value_0067d810;
  local_108 = (uint *)0x0;
  uStack_100 = &DAT_002537d8;
  local_138 = puVar24;
  FUN_0050685c(&local_a8,&local_138);
LAB_00505a28:
  puVar23 = puVar24;
  if ((puVar23 != local_a8) || (uVar19 != (uint)local_a0)) {
    if (uVar19 == 0) {
      lVar9 = 0;
      DAT_006870b0 = 0;
      DAT_006870b8 = 0;
      DAT_006870c0 = 0;
    }
    else {
      lVar9 = *(long *)(puVar23 + 2);
    }
    puVar21 = puVar23 + (ulong)uVar19 * 6;
    uVar28 = uVar28 + (*(int *)(lVar9 + 0x18) - 1U | 3) + 1;
    puVar25 = puVar23 + (ulong)(uVar19 - 1) * 6 + 6;
    do {
      puVar24 = puVar21;
      if ((uVar19 == 0) || (uVar19 = uVar19 - 1, puVar24 = puVar25, uVar19 == 0)) break;
      puVar11 = puVar23 + 7;
      puVar23 = puVar23 + 6;
      puVar24 = puVar23;
    } while ((*puVar11 & 1) == 0);
    goto LAB_00505a28;
  }
  puVar23 = (uint *)malloc((ulong)uVar28);
  if (puVar23 == (uint *)0x0) {
    piVar22 = (int *)0x0;
    goto LAB_005062d4;
  }
  puStack_128 = (undefined *)((long)puVar23 + (ulong)uVar28);
  uStack_100 = (undefined *)0x0;
  local_108 = (uint *)0x0;
  puStack_f0 = (uint *)0x0;
  local_f8 = (undefined8 *)0x0;
  pvStack_e0 = (void *)0x0;
  local_e8 = 0;
  local_d8 = 1;
  local_d4 = 1;
  local_d0 = 0;
  local_c8 = 1;
  local_b0 = 0;
  local_be = 0;
  local_c6 = 0;
  local_b6 = 0;
  local_118 = (undefined *)0x0;
  uStack_110 = (undefined *)0x0;
  local_138 = puVar23;
  local_130 = puVar23;
  puStack_120 = puStack_128;
  FUN_00506d10(&local_138);
  uVar13 = local_e8._4_4_;
  if ((int)local_e8._4_4_ < (int)local_e8) {
LAB_00505b38:
    local_e8 = CONCAT44(uVar13 + 1,(int)local_e8);
    *(undefined8 *)((long)pvStack_e0 + (ulong)uVar13 * 8) = 0;
  }
  else {
    uVar10 = FUN_00506e7c(&local_e8,local_e8._4_4_ + 1);
    if ((uVar10 & 1) != 0) {
      uVar13 = local_e8._4_4_;
      goto LAB_00505b38;
    }
    DAT_006870b0 = 0;
  }
  local_d8 = 1;
  local_d4 = 1;
  local_d0 = 0;
  local_c8 = 1;
  local_b0 = 0;
  local_be = 0;
  local_c6 = 0;
  local_b6 = 0;
  if ((*(char *)(param_3 + 0x10) == '\0') && (uStack_110._4_4_ == 0)) {
LAB_00505b7c:
    uStack_110 = (undefined *)CONCAT44(1,(undefined4)uStack_110);
  }
  else if (uStack_110._4_4_ == 0) {
    puVar25 = local_108;
    if (local_108 == (uint *)0x0) {
      uVar10 = FUN_0050704c(&uStack_100,uStack_100._4_4_ + 1);
      if (((uVar10 & 1) == 0) ||
         (puVar25 = (uint *)malloc(0x700), local_a8 = puVar25, puVar25 == (uint *)0x0)) {
        if (uStack_110._4_4_ == 0) goto LAB_00505b7c;
        goto LAB_00505bc0;
      }
      FUN_005070e0(&uStack_100,&local_a8);
      lVar9 = 0;
      do {
        plVar1 = (long *)((long)puVar25 + lVar9);
        lVar9 = lVar9 + 0x38;
        *plVar1 = (long)(plVar1 + 7);
      } while (lVar9 != 0x6c8);
      puVar25[0x1b2] = 0;
      puVar25[0x1b3] = 0;
    }
    local_108 = *(uint **)puVar25;
    puVar25[0xc] = 0;
    puVar25[0xd] = 0;
    puVar25[6] = 0;
    puVar25[7] = 0;
    puVar25[4] = 0;
    puVar25[5] = 0;
    puVar25[10] = 0;
    puVar25[0xb] = 0;
    puVar25[8] = 0;
    puVar25[9] = 0;
    puVar25[2] = 0;
    puVar25[3] = 0;
    puVar25[0] = 0;
    puVar25[1] = 0;
    *(undefined **)(puVar25 + 2) = puStack_128;
    *(uint **)puVar25 = local_130;
    *(uint **)(puVar25 + 0xc) = puStack_f0;
    puStack_f0 = puVar25;
  }
LAB_00505bc0:
  puVar24 = local_130;
  puVar25 = *(uint **)(param_3 + 0x28);
  if (puVar25 == (uint *)0x0) {
    uVar13 = 0x10000;
  }
  else {
    lVar9 = FUN_0050691c(param_3,0x43464620,0x8b9b9c20);
    uVar13 = 0x4f54544f;
    if (lVar9 == 0) {
      lVar9 = FUN_0050691c(param_3,0x43464632,0xab822a92);
      uVar13 = 0x10000;
      if (lVar9 != 0) {
        uVar13 = 0x4f54544f;
      }
    }
  }
  local_a8 = (uint *)0x0;
  local_a0 = (uint *)0x0;
  uVar17 = *(int *)(param_3 + 0x1c) + 1;
  if (1 < uVar17) {
    do {
      if ((puVar25[1] & 1) != 0) {
        puVar21 = (uint *)0x0;
        uVar19 = 0;
        uVar12 = 0;
        goto LAB_00505c6c;
      }
      uVar17 = uVar17 - 1;
      puVar25 = puVar25 + 6;
    } while (uVar17 != 0);
  }
LAB_00505c54:
  local_160 = 0;
  puVar11 = local_a0;
LAB_00505d74:
  puVar8 = puStack_128;
  puVar25 = local_130;
  if (uStack_110._4_4_ == 0) {
    puVar21 = puVar24 + 1;
    uVar17 = 4;
    uVar10 = (long)puVar21 - (long)local_130;
    if ((uVar10 >> 0x1f != 0) || ((long)puStack_128 - (long)local_130 < (long)uVar10)) {
LAB_0050610c:
      uStack_110 = (undefined *)CONCAT44(uVar17,(undefined4)uStack_110);
      puVar25 = local_130;
      goto LAB_00506110;
    }
    puVar14 = puVar21;
    if (puVar21 != local_130) {
      memset(local_130,0,uVar10);
      puVar14 = puVar25;
    }
    puVar25 = (uint *)((long)puVar14 + uVar10);
    if (puVar14 == (uint *)0x0) goto LAB_00506110;
    puVar14 = puVar24 + 3;
    uVar10 = (long)puVar14 - (long)puVar25;
    uVar17 = 4;
    local_130 = puVar25;
    if ((uVar10 >> 0x1f != 0) || ((long)puVar8 - (long)puVar25 < (long)uVar10)) goto LAB_0050610c;
    if (puVar14 != puVar25) {
      memset(puVar25,0,uVar10);
    }
    puVar25 = (uint *)((long)puVar25 + uVar10);
    uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    *puVar24 = uVar13 >> 0x10 | uVar13 << 0x10;
    if (uStack_110._4_4_ != 0) goto LAB_00506110;
    uVar10 = (long)puVar14 - (long)puVar25;
    uVar17 = 4;
    local_130 = puVar25;
    if ((uVar10 >> 0x1f != 0) || ((long)puStack_128 - (long)puVar25 < (long)uVar10))
    goto LAB_0050610c;
    puVar15 = puVar14;
    if (puVar14 != puVar25) {
      memset(puVar25,0,uVar10);
      puVar15 = puVar25;
    }
    puVar25 = (uint *)((long)puVar15 + uVar10);
    if (puVar15 == (uint *)0x0) goto LAB_00506110;
    uVar19 = (uint)local_160;
    uVar13 = 0;
    if (uVar19 != 0) {
      uVar13 = (uint)LZCOUNT(uVar19) ^ 0x1f;
    }
    uVar17 = 0x10 << (ulong)(uVar13 & 0x1f);
    *(ushort *)(puVar24 + 1) = (ushort)(local_160 >> 8) & 0xff | (ushort)((uVar19 & 0xff00ff) << 8);
    *(short *)(puVar24 + 2) = (short)(uVar13 << 8);
    uVar13 = uVar19 * 0x10 - uVar17;
    if (uVar19 * 0x10 <= (uVar17 & 0xfff0)) {
      uVar13 = 0;
    }
    *(ushort *)((long)puVar24 + 6) =
         (ushort)(uVar17 >> 8) & 0xff | (ushort)((uVar17 & 0xff00ff) << 8);
    *(ushort *)((long)puVar24 + 10) =
         (ushort)(uVar13 >> 8) & 0xff | (ushort)((uVar13 & 0xff00ff) << 8);
    local_130 = puVar25;
    if (0xffff < uVar19) {
      uVar17 = uStack_110._4_4_ | 0x10;
      goto LAB_0050610c;
    }
    if (uStack_110._4_4_ != 0) goto LAB_00506110;
    puVar21 = (uint *)((long)puVar21 +
                      ((ulong)*(byte *)((long)puVar24 + 5) << 4 | (ulong)(byte)puVar24[1] << 0xc) +
                      8);
    uVar17 = 4;
    uVar10 = (long)puVar21 - (long)puVar25;
    if ((uVar10 >> 0x1f != 0) || ((long)puStack_128 - (long)puVar25 < (long)uVar10))
    goto LAB_0050610c;
    if (puVar21 != puVar25) {
      memset(puVar25,0,uVar10);
      puVar21 = puVar25;
    }
    puVar15 = (uint *)((long)puVar21 + uVar10);
    puVar25 = puVar15;
    if (puVar21 == (uint *)0x0) goto LAB_00506110;
    puVar21 = (uint *)0x0;
    local_130 = puVar15;
    if (uVar19 != 0) {
      uVar13 = 0;
      puVar18 = puVar11 + local_160 * 6;
      uVar10 = local_160;
      do {
        __dest = local_130;
        iVar26 = (int)uVar10;
        puVar27 = puVar11;
        if (iVar26 == 0) {
          puVar27 = &DAT_0025d4b0;
        }
        puVar25 = local_130;
        if (uStack_110._4_4_ != 0) goto LAB_00506110;
        lVar9 = *(long *)(puVar27 + 2);
        uVar17 = 4;
        uVar12 = *(uint *)(lVar9 + 0x18);
        uVar10 = (ulong)uVar12;
        if (((int)uVar12 < 0) || ((long)puStack_128 - (long)local_130 < (long)uVar10))
        goto LAB_0050610c;
        uVar17 = *puVar27;
        puVar25 = (uint *)((long)local_130 + uVar10);
        if (local_130 == (uint *)0x0) goto LAB_00506110;
        uVar6 = (int)local_130 - (int)puVar24;
        uVar2 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
        uVar29 = (uVar6 & 0xff00ff00) >> 8;
        uVar4 = (uVar6 & 0xff00ff) << 8;
        uVar3 = uVar29 | uVar4;
        uVar5 = uVar3 >> 0x10;
        uVar3 = uVar3 << 0x10;
        puVar24[(ulong)uVar13 * 4 + 3] = uVar2 >> 0x10 | uVar2 << 0x10;
        uVar2 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
        puVar24[(ulong)uVar13 * 4 + 5] = uVar5 | uVar3;
        puVar24[(ulong)uVar13 * 4 + 6] = uVar2 >> 0x10 | uVar2 << 0x10;
        local_130 = puVar25;
        if (((uVar4 >> 0x10) << 8 | uVar5 << 0x18 | (uVar29 << 0x10) >> 8 | uVar3 >> 0x18) != uVar6)
        {
          uVar17 = 2;
          goto LAB_0050610c;
        }
        if (uVar12 != 0) {
          memcpy(__dest,*(void **)(lVar9 + 0x10),uVar10);
        }
        puVar25 = local_130;
        if (((puStack_f0 != (uint *)0x0) && (uVar12 = (int)local_130 - *puStack_f0 & 3, uVar12 != 0)
            ) && (uStack_110._4_4_ == 0)) {
          uVar10 = (ulong)(4 - uVar12);
          if ((long)puStack_128 - (long)local_130 < (long)uVar10) {
            uStack_110 = (undefined *)CONCAT44(4,(undefined4)uStack_110);
          }
          else {
            memset(local_130,0,uVar10);
            local_130 = (uint *)((long)puVar25 + uVar10);
          }
        }
        uVar10 = (ulong)uVar13;
        uVar12 = (uint)((long)local_130 - (long)__dest);
        if ((uVar17 == 0x68656164) && (0x35 < uVar12)) {
          puVar21 = __dest + 2;
          *puVar21 = 0;
LAB_005060a0:
          uVar17 = 0;
          puVar25 = __dest;
          do {
            puVar27 = puVar25 + 1;
            uVar12 = (*puVar25 & 0xff00ff00) >> 8 | (*puVar25 & 0xff00ff) << 8;
            uVar17 = (uVar12 >> 0x10 | uVar12 << 0x10) + uVar17;
            puVar25 = puVar27;
          } while (puVar27 < (uint *)((long)__dest + ((long)local_130 - (long)__dest & 0xfffffffcU))
                  );
        }
        else {
          if (3 < uVar12) goto LAB_005060a0;
          uVar17 = 0;
        }
        uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
        uVar13 = uVar13 + 1;
        puVar24[uVar10 * 4 + 4] = uVar17 >> 0x10 | uVar17 << 0x10;
        puVar11 = puVar11 + (ulong)(iVar26 != 0) * 6;
        uVar17 = 0;
        if (iVar26 != 0) {
          uVar17 = iVar26 - 1U;
        }
        uVar10 = (ulong)uVar17;
      } while ((iVar26 != 0 && iVar26 - 1U != 0) || (puVar11 != puVar18));
    }
    uVar13 = (uint)(ushort)((ushort)puVar24[1] >> 8) | ((ushort)puVar24[1] & 0xff00ff) << 8;
    if (uVar13 != 0) {
      qsort(puVar14,(ulong)uVar13,0x10,FUN_005069ec);
    }
    if (puVar21 != (uint *)0x0) {
      uVar13 = (int)puVar15 - (int)puVar24;
      if ((uVar13 & 0xfffffffc) == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        puVar25 = puVar24;
        do {
          puVar11 = puVar25 + 1;
          uVar12 = (*puVar25 & 0xff00ff00) >> 8 | (*puVar25 & 0xff00ff) << 8;
          uVar17 = (uVar12 >> 0x10 | uVar12 << 0x10) + uVar17;
          puVar25 = puVar11;
        } while (puVar11 < (uint *)((long)puVar24 + ((ulong)uVar13 & 0xfffffffc)));
      }
      uVar13 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
      uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
      if (uVar19 != 0) {
        lVar9 = (long)puVar24 + 0x13;
        do {
          puVar25 = (uint *)(lVar9 + -3);
          uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
          local_160 = local_160 - 1;
          lVar9 = lVar9 + 0x10;
          uVar17 = (*puVar25 & 0xff00ff00) >> 8 | (*puVar25 & 0xff00ff) << 8;
          uVar13 = (uVar17 >> 0x10 | uVar17 << 0x10) + (uVar13 >> 0x10 | uVar13 << 0x10);
          uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
          uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
        } while (local_160 != 0);
      }
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      uVar13 = 0xb1b0afba - (uVar13 >> 0x10 | uVar13 << 0x10);
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      *puVar21 = uVar13 >> 0x10 | uVar13 << 0x10;
    }
    FUN_00506a10(&local_138);
    if (((uVar28 == 0) || ((int)uVar28 < 0)) ||
       (piVar22 = (int *)calloc(1,0x30), piVar22 == (int *)0x0)) {
      free(puVar23);
      piVar22 = &DAT_0025d4b0;
    }
    else {
      piVar22[10] = 0;
      piVar22[0xb] = 0;
      piVar22[8] = 0;
      piVar22[9] = 0;
      piVar22[7] = 0;
      piVar22[8] = 0;
      piVar22[5] = 0;
      piVar22[6] = 0;
      piVar16 = piVar22 + 1;
      piVar22[3] = 0;
      piVar22[4] = 0;
      piVar16[0] = 0;
      piVar16[1] = 0;
      *piVar22 = 1;
      *(undefined1 *)piVar16 = 1;
      piVar22[2] = 0;
      piVar22[3] = 0;
      piVar22[6] = uVar28;
      piVar22[7] = 2;
      *(uint **)(piVar22 + 4) = puVar23;
      puVar8 = PTR_rive_hb_free_0067d800;
      *(uint **)(piVar22 + 8) = puVar23;
      *(undefined **)(piVar22 + 10) = puVar8;
    }
  }
  else {
LAB_00506110:
    local_130 = puVar25;
    FUN_00506a10(&local_138);
LAB_00506118:
    free(puVar23);
    piVar22 = (int *)0x0;
  }
  if ((int)local_a8 - 1U < 0xfffffffe) {
    free(local_a0);
  }
  FUN_00506d10(&local_138);
  FUN_00506dac(&local_d8);
  if ((int)local_e8 - 1U < 0xfffffffe) {
    free(pvStack_e0);
  }
  local_e8 = 0;
  pvStack_e0 = (void *)0x0;
  local_108 = (uint *)0x0;
  puVar20 = local_f8;
  for (iVar26 = uStack_100._4_4_; iVar26 != 0; iVar26 = iVar26 + -1) {
    free((void *)*puVar20);
    puVar20 = puVar20 + 1;
  }
  if ((int)uStack_100 - 1U < 0xfffffffe) {
    free(local_f8);
  }
LAB_005062d4:
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return piVar22;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00505c6c:
  uVar3 = *puVar25;
  uVar31 = *(undefined8 *)(puVar25 + 4);
  uVar30 = *(undefined8 *)(puVar25 + 2);
  uVar2 = uVar12 + 1;
  if ((int)uVar12 < (int)uVar19) {
LAB_00505c90:
    puVar11 = puVar21 + (ulong)uVar12 * 6;
    local_a8 = (uint *)CONCAT44(uVar2,(int)local_a8);
    *puVar11 = uVar3;
    *(undefined8 *)(puVar11 + 4) = uVar31;
    *(undefined8 *)(puVar11 + 2) = uVar30;
    uVar12 = uVar2;
  }
  else {
    if (-1 < (int)uVar19) {
      uVar29 = uVar19;
      if (uVar19 < uVar2) {
        do {
          uVar29 = uVar29 + (uVar29 >> 1) + 8;
        } while (uVar29 < uVar2);
        if (0xaaaaaaa < uVar29) {
LAB_00505d28:
          uVar19 = ~uVar19;
          local_a8 = (uint *)CONCAT44(local_a8._4_4_,uVar19);
          goto LAB_00505d30;
        }
        puVar11 = (uint *)FUN_00506fa8(&local_a8,uVar29);
        if (puVar11 == (uint *)0x0) {
          if (uVar19 < uVar29) goto LAB_00505d28;
        }
        else {
          local_a8 = (uint *)(ulong)uVar29;
          puVar21 = puVar11;
          local_a0 = puVar11;
          uVar19 = uVar29;
        }
      }
      goto LAB_00505c90;
    }
LAB_00505d30:
    DAT_006870b0 = 0;
    DAT_006870b8 = 0;
    DAT_006870c0 = 0;
  }
  do {
    puVar11 = local_a0;
    uVar17 = uVar17 - 1;
    if (uVar17 == 0) {
      if ((int)local_a8 < 0) goto LAB_00506118;
      local_160 = (ulong)local_a8._4_4_;
      if (local_a8._4_4_ == 0) goto LAB_00505c54;
      qsort(local_a0,local_160,0x18,FUN_005069a0);
      goto LAB_00505d74;
    }
    puVar11 = puVar25 + 7;
    puVar25 = puVar25 + 6;
  } while ((*puVar11 & 1) == 0);
  goto LAB_00505c6c;
}


// ===== 005063a0  FUN_005063a0 =====

void FUN_005063a0(undefined4 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  mutex *this;
  long lVar9;
  long lVar10;
  long local_c0;
  uint local_b8;
  uint uStack_b4;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  long local_80;
  uint local_78;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar9 = *(long *)(param_1 + 10);
  uVar2 = param_1[7] + 1;
  if (uVar2 < 2) {
    uVar8 = 0;
    lVar10 = lVar9;
    uStack_b4 = 0;
  }
  else {
    uVar6 = 0;
    lVar5 = lVar9 + (ulong)(uint)param_1[7] * 0x18;
    uVar8 = uVar2;
    do {
      lVar10 = lVar9;
      uStack_b4 = uVar6;
      if ((*(byte *)(lVar9 + 4) & 1) != 0) break;
      uVar8 = uVar8 - 1;
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 0x18;
      lVar10 = lVar5 + 0x18;
      uStack_b4 = uVar2;
    } while (uVar8 != 0);
  }
  local_b0 = PTR_is_real_0067d808;
  uStack_a8 = 0;
  local_a0 = &DAT_002537d9;
  puStack_98 = PTR_get_value_0067d810;
  local_90 = 0;
  puStack_88 = &DAT_002537d8;
  local_c0 = lVar10;
  local_b8 = uVar8;
  FUN_0050685c(&local_80,&local_c0);
  do {
    lVar9 = lVar10;
    if ((lVar9 == local_80) && (uVar8 == local_78)) {
      *param_1 = 0xffff2153;
      this = *(mutex **)(param_1 + 2);
      if (this != (mutex *)0x0) {
        FUN_004fe408(this + 0x28,this);
        std::__ndk1::mutex::~mutex(this);
        free(this);
        *(undefined8 *)(param_1 + 2) = 0;
      }
      if (*(void **)(param_1 + 10) != (void *)0x0) {
        free(*(void **)(param_1 + 10));
      }
      if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      free(param_1);
      return;
    }
    if (uVar8 == 0) {
      uVar4 = 0;
      DAT_006870b0 = 0;
      DAT_006870b8 = 0;
      DAT_006870c0 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar9 + 8);
    }
    rive_hb_blob_destroy(uVar4);
    lVar7 = lVar9 + (ulong)(uVar8 - 1) * 0x18;
    lVar5 = lVar9 + (ulong)uVar8 * 0x18;
    do {
      lVar10 = lVar5;
      if ((uVar8 == 0) || (uVar8 = uVar8 - 1, lVar10 = lVar7 + 0x18, uVar8 == 0)) break;
      pbVar1 = (byte *)(lVar9 + 0x1c);
      lVar9 = lVar9 + 0x18;
      lVar10 = lVar9;
    } while ((*pbVar1 & 1) == 0);
  } while( true );
}


// ===== 00506554  FUN_00506554 =====

uint FUN_00506554(undefined8 param_1,uint param_2,uint *param_3,undefined4 *param_4,long param_5)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  void *__ptr;
  uint uVar7;
  undefined4 *puVar8;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(param_5 + 0x14);
  if (param_3 != (uint *)0x0) {
    if (param_2 < uVar2) {
      local_78 = 0;
      local_70 = (void *)0x0;
      uVar6 = *(int *)(param_5 + 0x1c) + 1;
      if (1 < uVar6) {
        puVar8 = *(undefined4 **)(param_5 + 0x28);
        do {
          if ((*(byte *)(puVar8 + 1) & 1) != 0) {
            local_78._0_4_ = 0;
            uVar5 = 0;
            goto LAB_005065e0;
          }
          uVar6 = uVar6 - 1;
          puVar8 = puVar8 + 6;
        } while (uVar6 != 0);
      }
      __ptr = (void *)0x0;
      uVar7 = 0;
LAB_00506664:
      uVar6 = 0;
      if (param_2 <= uVar7) {
        uVar6 = uVar7 - param_2;
      }
      if (*param_3 <= uVar6) {
        uVar6 = *param_3;
      }
      *param_3 = uVar6;
      if (uVar6 != 0) {
        puVar8 = (undefined4 *)((long)__ptr + (ulong)param_2 * 4);
        uVar7 = uVar6;
        do {
          uVar3 = *puVar8;
          if (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            *param_4 = *puVar8;
            param_4 = param_4 + 1;
            uVar3 = (undefined4)DAT_006870b0;
          }
          DAT_006870b0._0_4_ = uVar3;
          uVar7 = uVar7 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar7 != 0);
      }
      if ((int)local_78 - 1U < 0xfffffffe) {
        local_78 = local_78 & 0xffffffff;
        free(__ptr);
      }
    }
    else {
      *param_3 = 0;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
LAB_005065e0:
  uVar3 = *puVar8;
  if ((int)uVar5 < (int)local_78) {
LAB_00506604:
    local_78 = CONCAT44((int)uVar5 + 1,(int)local_78);
    *(undefined4 *)((long)local_70 + uVar5 * 4) = uVar3;
  }
  else {
    uVar5 = FUN_00506734(&local_78,(int)uVar5 + 1,0);
    if ((uVar5 & 1) != 0) {
      uVar5 = local_78 >> 0x20;
      goto LAB_00506604;
    }
    DAT_006870b0._0_4_ = 0;
  }
  do {
    __ptr = local_70;
    uVar6 = uVar6 - 1;
    uVar7 = local_78._4_4_;
    if (uVar6 == 0) {
      if (local_78._4_4_ != 0) {
        qsort(local_70,(ulong)local_78._4_4_,4,FUN_0050671c);
      }
      goto LAB_00506664;
    }
    pbVar1 = (byte *)(puVar8 + 7);
    puVar8 = puVar8 + 6;
  } while ((*pbVar1 & 1) == 0);
  uVar5 = (ulong)local_78._4_4_;
  goto LAB_005065e0;
}


// ===== 0050671c  FUN_0050671c =====

uint FUN_0050671c(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_1 != *param_2);
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 00506734  FUN_00506734 =====

undefined8 FUN_00506734(uint *param_1,uint param_2,ulong param_3)

{
  void *__dest;
  undefined8 uVar1;
  uint uVar2;
  void *__src;
  uint uVar3;
  
  uVar2 = *param_1;
  if ((int)uVar2 < 0) {
    return 0;
  }
  if ((param_3 & 1) == 0) {
    uVar3 = uVar2;
    if (param_2 <= uVar2) {
      return 1;
    }
    do {
      uVar3 = uVar3 + (uVar3 >> 1) + 8;
    } while (uVar3 < param_2);
  }
  else {
    uVar3 = param_1[1];
    if (param_1[1] <= param_2) {
      uVar3 = param_2;
    }
    if ((uVar3 <= uVar2) && (uVar2 >> 2 <= uVar3)) {
      return 1;
    }
  }
  if (uVar3 >> 0x1e == 0) {
    if (uVar3 == 0) {
      if (uVar2 - 1 < 0xfffffffe) {
        free(*(void **)(param_1 + 2));
      }
      __dest = (void *)0x0;
    }
    else {
      __src = *(void **)(param_1 + 2);
      if ((uVar2 == 0) && (__src != (void *)0x0)) {
        __dest = malloc((ulong)(uVar3 << 2));
        if (__dest == (void *)0x0) {
LAB_0050679c:
          uVar2 = *param_1;
          if (uVar3 <= uVar2) {
            return 1;
          }
          goto LAB_005067a8;
        }
        if (param_1[1] != 0) {
          memcpy(__dest,__src,(ulong)param_1[1] << 2);
        }
      }
      else {
        __dest = realloc(__src,(ulong)(uVar3 << 2));
        if (__dest == (void *)0x0) goto LAB_0050679c;
      }
    }
    uVar1 = 1;
    *(void **)(param_1 + 2) = __dest;
  }
  else {
LAB_005067a8:
    uVar1 = 0;
    uVar3 = ~uVar2;
  }
  *param_1 = uVar3;
  return uVar1;
}


// ===== 00506848  rive_hb_hashmap_t<unsigned_int,face_table_info_t,false>::item_t::is_real =====

/* rive_hb_hashmap_t<unsigned int, face_table_info_t, false>::item_t::is_real() const */

uint __thiscall
rive_hb_hashmap_t<unsigned_int,face_table_info_t,false>::item_t::is_real(item_t *this)

{
  return *(uint *)(this + 4) & 1;
}


// ===== 00506854  rive_hb_hashmap_t<unsigned_int,face_table_info_t,false>::item_t::get_value =====

/* rive_hb_hashmap_t<unsigned int, face_table_info_t, false>::item_t::get_value() */

item_t * __thiscall
rive_hb_hashmap_t<unsigned_int,face_table_info_t,false>::item_t::get_value(item_t *this)

{
  return this + 8;
}


// ===== 0050685c  FUN_0050685c =====

void FUN_0050685c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  
  pcVar3 = (code *)param_2[2];
  uVar2 = param_2[3];
  lVar4 = param_2[4];
  uVar6 = (uint)param_2[1];
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar6 < *(uint *)(param_2 + 1)) {
    uVar1 = uVar6;
  }
  lVar9 = *param_2 + (ulong)uVar1 * 0x18;
  iVar10 = uVar6 - uVar1;
  iVar8 = (int)((ulong)param_2[1] >> 0x20);
  iVar11 = uVar1 + iVar8;
  iVar12 = iVar11;
  if (iVar10 != 0) {
    do {
      pcVar7 = pcVar3;
      if ((uVar2 & 1) != 0) {
        pcVar7 = *(code **)(pcVar3 + *(long *)(lVar9 + ((long)uVar2 >> 1)));
      }
      uVar5 = (*pcVar7)(lVar9 + ((long)uVar2 >> 1));
      iVar12 = iVar11;
      if ((uVar5 & 1) != 0) break;
      iVar10 = iVar10 + -1;
      iVar11 = iVar11 + 1;
      lVar9 = lVar9 + 0x18;
      iVar12 = iVar8 + uVar6;
    } while (iVar10 != 0);
  }
  lVar14 = param_2[6];
  lVar13 = param_2[5];
  *param_1 = lVar9;
  *(int *)(param_1 + 1) = iVar10;
  *(int *)((long)param_1 + 0xc) = iVar12;
  param_1[2] = (long)pcVar3;
  param_1[3] = uVar2;
  param_1[4] = lVar4;
  param_1[6] = lVar14;
  param_1[5] = lVar13;
  return;
}


// ===== 0050691c  FUN_0050691c =====

int * FUN_0050691c(long param_1,int param_2,uint param_3)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar6 = 0;
  if (uVar3 != 0) {
    uVar6 = (param_3 & 0x3fffffff) / uVar3;
  }
  uVar6 = (param_3 & 0x3fffffff) - uVar6 * uVar3;
  lVar2 = *(long *)(param_1 + 0x28);
  uVar3 = *(uint *)(lVar2 + (ulong)uVar6 * 0x18 + 4);
  if ((uVar3 >> 1 & 1) != 0) {
    piVar5 = (int *)(lVar2 + (ulong)uVar6 * 0x18);
    if (*piVar5 != param_2) {
      iVar4 = 1;
      do {
        uVar6 = *(uint *)(param_1 + 0x1c) & uVar6 + iVar4;
        uVar3 = *(uint *)(lVar2 + (ulong)uVar6 * 0x18 + 4);
        if ((uVar3 >> 1 & 1) == 0) {
          return (int *)0x0;
        }
        piVar5 = (int *)(lVar2 + (ulong)uVar6 * 0x18);
        iVar4 = iVar4 + 1;
      } while (*piVar5 != param_2);
    }
    piVar1 = (int *)0x0;
    if ((uVar3 & 1) != 0) {
      piVar1 = piVar5;
    }
    return piVar1;
  }
  return (int *)0x0;
}


// ===== 005069a0  FUN_005069a0 =====

uint FUN_005069a0(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = param_2[4] <= param_1[4];
  if ((param_1[4] == param_2[4]) &&
     (bVar1 = *(uint *)(*(long *)(param_2 + 2) + 0x18) <= *(uint *)(*(long *)(param_1 + 2) + 0x18),
     *(uint *)(*(long *)(param_1 + 2) + 0x18) == *(uint *)(*(long *)(param_2 + 2) + 0x18))) {
    uVar2 = (uint)(*param_1 != *param_2);
    if (*param_1 < *param_2) {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  uVar2 = 1;
  if (!bVar1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 005069ec  FUN_005069ec =====

int FUN_005069ec(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  return (uint)(uVar2 < uVar1) - (uint)(uVar1 < uVar2);
}


// ===== 00506a10  FUN_00506a10 =====

void FUN_00506a10(int *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  void *__src;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint *puVar15;
  int *piVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong uVar19;
  
  iVar9 = param_1[0x14];
  uVar8 = param_1[0xb];
  if (((uVar8 != 0) || (-1 < iVar9)) && ((uVar8 != 0 || ((char)param_1[0x1c] != '\0')))) {
    puVar18 = *(undefined8 **)(param_1 + 0x12);
    if (puVar18 == (undefined8 *)0x0) {
      return;
    }
    if (uVar8 != 0) {
      if ((uVar8 >> 1 & 1) == 0) {
        return;
      }
LAB_00506cd8:
      uVar8 = uVar8 | 1;
      goto LAB_00506a48;
    }
    uVar8 = param_1[0x15];
    if (uVar8 < 2) {
      return;
    }
    pvVar10 = *(void **)(param_1 + 8);
    uVar12 = puVar18[6];
    uVar14 = *(undefined8 *)(param_1 + 2);
    __src = (void *)*puVar18;
    puVar18[6] = 0;
    *(undefined8 *)(param_1 + 0x12) = uVar12;
    pvVar7 = __src;
    if (pvVar10 != (void *)0x0) {
      pvVar7 = pvVar10;
    }
    uVar5 = (int)uVar14 - (int)__src;
    uVar19 = (ulong)uVar5;
    puVar18[1] = uVar14;
    *(void **)(param_1 + 2) = pvVar7;
    param_1[8] = 0;
    param_1[9] = 0;
    if (uVar5 == 0) goto LAB_00506b18;
    pvVar7 = (void *)(*(long *)(param_1 + 4) - uVar19);
    *(void **)(param_1 + 4) = pvVar7;
    if (pvVar10 == (void *)0x0) {
      memmove(pvVar7,__src,uVar19);
      iVar9 = param_1[0x14];
      uVar8 = param_1[0x15];
      pvVar7 = *(void **)(param_1 + 4);
    }
    *puVar18 = pvVar7;
    puVar18[1] = (long)pvVar7 + uVar19;
    if ((int)uVar8 < iVar9) {
LAB_00506aec:
      param_1[0x15] = uVar8 + 1;
      *(undefined8 **)(*(long *)(param_1 + 0x16) + (ulong)uVar8 * 8) = puVar18;
    }
    else {
      uVar19 = FUN_00506e7c(param_1 + 0x14,uVar8 + 1);
      if ((uVar19 & 1) != 0) {
        uVar8 = param_1[0x15];
        goto LAB_00506aec;
      }
      DAT_006870b0 = 0;
    }
    if ((param_1[0x14] < 0) && (param_1[0xb] == 0)) {
      param_1[0xb] = 1;
    }
    else if (param_1[0xb] == 0) {
      if ((char)param_1[0x1c] != '\0') goto LAB_00506b18;
      goto LAB_00506a44;
    }
    FUN_00506e10(puVar18);
    if (param_1[0xb] != 0) {
      return;
    }
LAB_00506b18:
    uVar5 = param_1[0x15];
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar5 - 1;
    }
    if (uVar5 < 2) {
      return;
    }
    puVar18 = (undefined8 *)(*(long *)(param_1 + 0x16) + (ulong)(uVar5 != 0) * 8);
    puVar1 = puVar18 + uVar8;
    do {
      plVar11 = (long *)*puVar18;
      if (*(uint *)((long)plVar11 + 0x14) != 0) {
        lVar13 = (ulong)*(uint *)((long)plVar11 + 0x14) * 0xc;
        puVar15 = (uint *)(plVar11[3] + 4);
        do {
          if ((uint)param_1[0x15] <= puVar15[1]) {
            DAT_006870b0 = 0;
LAB_00506cd4:
            uVar8 = param_1[0xb];
            goto LAB_00506cd8;
          }
          piVar16 = *(int **)(*(long *)(param_1 + 0x16) + (ulong)puVar15[1] * 8);
          if (piVar16 == (int *)0x0) goto LAB_00506cd4;
          uVar8 = puVar15[-1];
          uVar5 = uVar8 >> 4 & 3;
          if (uVar5 == 2) {
            iVar9 = param_1[2] + *piVar16;
            iVar17 = *param_1 + param_1[4];
LAB_00506bc4:
            iVar9 = iVar9 - iVar17;
          }
          else {
            if (uVar5 == 1) {
              iVar9 = *piVar16;
              iVar17 = (int)plVar11[1];
              goto LAB_00506bc4;
            }
            if (uVar5 == 0) {
              iVar9 = *piVar16;
              iVar17 = (int)*plVar11;
              goto LAB_00506bc4;
            }
            iVar9 = 0;
          }
          uVar6 = iVar9 - (uVar8 >> 6);
          uVar5 = uVar8 & 7;
          if ((uVar8 >> 3 & 1) == 0) {
            puVar2 = (uint *)(*plVar11 + (ulong)*puVar15);
            if (uVar5 == 3) {
              *(char *)((long)puVar2 + 2) = (char)uVar6;
              *(char *)puVar2 = (char)(uVar6 >> 0x10);
              *(char *)((long)puVar2 + 1) = (char)(uVar6 >> 8);
              if (uVar6 >> 0x18 != 0) goto LAB_00506c6c;
            }
            else {
              uVar3 = (uVar6 & 0xff00ff00) >> 8;
              uVar4 = (uVar6 & 0xff00ff) << 8;
              uVar8 = uVar3 | uVar4;
              if (uVar5 == 4) {
                *puVar2 = uVar8 >> 0x10 | uVar8 << 0x10;
                if (((uVar4 >> 0x10) << 8 | (uVar8 >> 0x10) << 0x18 | (uVar3 << 0x10) >> 8 |
                    (uVar8 << 0x10) >> 0x18) != uVar6) {
LAB_00506c6c:
                  param_1[0xb] = param_1[0xb] | 2;
                }
              }
              else {
                *(short *)puVar2 = (short)uVar8;
                if (0xffff < uVar6) goto LAB_00506c6c;
              }
            }
          }
          else {
            uVar3 = (uVar6 & 0xff00ff00) >> 8;
            uVar4 = (uVar6 & 0xff00ff) << 8;
            uVar8 = uVar3 | uVar4;
            if (uVar5 == 4) {
              *(uint *)(*plVar11 + (ulong)*puVar15) = uVar8 >> 0x10 | uVar8 << 0x10;
              uVar19 = (ulong)(int)((uVar4 >> 0x10) << 8 | (uVar8 >> 0x10) << 0x18 |
                                    (uVar3 << 0x10) >> 8 | (uVar8 << 0x10) >> 0x18);
            }
            else {
              uVar19 = (ulong)(short)uVar6;
              *(short *)(*plVar11 + (ulong)*puVar15) = (short)uVar8;
            }
            if (uVar6 != uVar19) goto LAB_00506c6c;
          }
          lVar13 = lVar13 + -0xc;
          puVar15 = puVar15 + 3;
        } while (lVar13 != 0);
      }
      puVar18 = puVar18 + 1;
      if (puVar18 == puVar1) {
        return;
      }
    } while( true );
  }
LAB_00506a44:
  uVar8 = 1;
LAB_00506a48:
  param_1[0xb] = uVar8;
  return;
}


// ===== 00506d10  FUN_00506d10 =====

void FUN_00506d10(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x54);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = uVar2 - 1;
  }
  if (1 < uVar2) {
    lVar4 = (ulong)uVar1 << 3;
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x58) + (ulong)(uVar2 != 0) * 8);
    do {
      FUN_00506e10(*puVar3);
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  if (*(int *)(param_1 + 0x50) - 1U < 0xfffffffe) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    free(*(void **)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_00506dac(param_1 + 0x60);
  while (*(long *)(param_1 + 0x48) != 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30);
    FUN_00506e10();
  }
  return;
}


// ===== 00506dac  FUN_00506dac =====

void FUN_00506dac(undefined4 *param_1)

{
  mutex *this;
  
  *param_1 = 0xffff2153;
  this = *(mutex **)(param_1 + 2);
  if (this != (mutex *)0x0) {
    FUN_004fe408(this + 0x28,this);
    std::__ndk1::mutex::~mutex(this);
    free(this);
    *(undefined8 *)(param_1 + 2) = 0;
  }
  if (*(void **)(param_1 + 10) != (void *)0x0) {
    free(*(void **)(param_1 + 10));
    *(undefined8 *)(param_1 + 10) = 0;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


// ===== 00506e10  FUN_00506e10 =====

void FUN_00506e10(long param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x10);
  if (*piVar1 - 1U < 0xfffffffe) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    free(*(void **)(param_1 + 0x18));
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  piVar1 = (int *)(param_1 + 0x20);
  if (*piVar1 - 1U < 0xfffffffe) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    free(*(void **)(param_1 + 0x28));
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


// ===== 00506e7c  FUN_00506e7c =====

undefined8 FUN_00506e7c(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  if ((int)uVar3 < 0) {
    return 0;
  }
  uVar4 = uVar3;
  if (param_2 <= uVar3) {
    return 1;
  }
  do {
    uVar4 = uVar4 + (uVar4 >> 1) + 8;
  } while (uVar4 < param_2);
  if (uVar4 >> 0x1d == 0) {
    lVar1 = FUN_00506f10(param_1,uVar4);
    if (lVar1 != 0) {
      *(long *)(param_1 + 2) = lVar1;
      uVar2 = 1;
      goto LAB_00506ee0;
    }
    uVar3 = *param_1;
    if (uVar4 <= uVar3) {
      return 1;
    }
  }
  uVar2 = 0;
  uVar4 = ~uVar3;
LAB_00506ee0:
  *param_1 = uVar4;
  return uVar2;
}


// ===== 00506f10  FUN_00506f10 =====

void * FUN_00506f10(int *param_1,uint param_2)

{
  void *pvVar1;
  void *__src;
  
  if (param_2 == 0) {
    if (*param_1 - 1U < 0xfffffffe) {
      free(*(void **)(param_1 + 2));
    }
    pvVar1 = (void *)0x0;
  }
  else {
    __src = *(void **)(param_1 + 2);
    if ((*param_1 != 0) || (__src == (void *)0x0)) {
      pvVar1 = realloc(__src,(ulong)param_2 << 3);
      return pvVar1;
    }
    pvVar1 = malloc((ulong)param_2 << 3);
    if ((pvVar1 != (void *)0x0) && (param_1[1] != 0)) {
      memcpy(pvVar1,__src,(ulong)(uint)param_1[1] << 3);
    }
  }
  return pvVar1;
}


// ===== 00506fa8  FUN_00506fa8 =====

void * FUN_00506fa8(int *param_1,uint param_2)

{
  void *pvVar1;
  void *__src;
  
  if (param_2 == 0) {
    if (*param_1 - 1U < 0xfffffffe) {
      free(*(void **)(param_1 + 2));
    }
    pvVar1 = (void *)0x0;
  }
  else {
    __src = *(void **)(param_1 + 2);
    if ((*param_1 != 0) || (__src == (void *)0x0)) {
      pvVar1 = realloc(__src,(ulong)param_2 * 0x18);
      return pvVar1;
    }
    pvVar1 = malloc((ulong)param_2 * 0x18);
    if ((pvVar1 != (void *)0x0) && (param_1[1] != 0)) {
      memcpy(pvVar1,__src,(ulong)(uint)param_1[1] * 0x18);
    }
  }
  return pvVar1;
}


// ===== 0050704c  FUN_0050704c =====

undefined8 FUN_0050704c(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  if ((int)uVar3 < 0) {
    return 0;
  }
  uVar4 = uVar3;
  if (param_2 <= uVar3) {
    return 1;
  }
  do {
    uVar4 = uVar4 + (uVar4 >> 1) + 8;
  } while (uVar4 < param_2);
  if (uVar4 >> 0x1d == 0) {
    lVar1 = FUN_00507140(param_1,uVar4);
    if (lVar1 != 0) {
      *(long *)(param_1 + 2) = lVar1;
      uVar2 = 1;
      goto LAB_005070b0;
    }
    uVar3 = *param_1;
    if (uVar4 <= uVar3) {
      return 1;
    }
  }
  uVar2 = 0;
  uVar4 = ~uVar3;
LAB_005070b0:
  *param_1 = uVar4;
  return uVar2;
}


// ===== 005070e0  FUN_005070e0 =====

void FUN_005070e0(int *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = param_1[1];
  if (*param_1 <= (int)uVar2) {
    uVar1 = FUN_0050704c(param_1,uVar2 + 1);
    if ((uVar1 & 1) == 0) {
      DAT_006870b0 = 0;
      return;
    }
    uVar2 = param_1[1];
  }
  param_1[1] = uVar2 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 8) = *param_2;
  return;
}


// ===== 00507140  FUN_00507140 =====

void * FUN_00507140(int *param_1,uint param_2)

{
  void *pvVar1;
  void *__src;
  
  if (param_2 == 0) {
    if (*param_1 - 1U < 0xfffffffe) {
      free(*(void **)(param_1 + 2));
    }
    pvVar1 = (void *)0x0;
  }
  else {
    __src = *(void **)(param_1 + 2);
    if ((*param_1 != 0) || (__src == (void *)0x0)) {
      pvVar1 = realloc(__src,(ulong)param_2 << 3);
      return pvVar1;
    }
    pvVar1 = malloc((ulong)param_2 << 3);
    if ((pvVar1 != (void *)0x0) && (param_1[1] != 0)) {
      memcpy(pvVar1,__src,(ulong)(uint)param_1[1] << 3);
    }
  }
  return pvVar1;
}


// ===== 005071d8  rive_hb_face_builder_add_table =====

undefined4 rive_hb_face_builder_add_table(long param_1,int param_2,int *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  int *piVar11;
  int iVar13;
  undefined8 *puVar12;
  
  uVar9 = 0;
  if ((param_2 != -1) && (*(code **)(param_1 + 0x30) == FUN_005063a0)) {
    lVar10 = *(long *)(param_1 + 0x28);
    puVar12 = (undefined8 *)&DAT_0025d4b0;
    if (*(long *)(lVar10 + 0x28) != 0) {
      lVar2 = FUN_0050691c(lVar10,param_2,param_2 * -0x61c8864f);
      if (lVar2 != 0) {
        puVar12 = (undefined8 *)(lVar2 + 8);
      }
    }
    piVar11 = (int *)*puVar12;
    if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
      FUN_00340fe0(1,param_3);
    }
    if ((*(char *)(lVar10 + 0x10) == '\0') ||
       ((*(uint *)(lVar10 + 0x1c) <= *(uint *)(lVar10 + 0x18) + (*(uint *)(lVar10 + 0x18) >> 1) &&
        (uVar3 = FUN_005073e4(lVar10,0), (uVar3 & 1) == 0)))) {
      uVar9 = 0;
    }
    else {
      uVar8 = *(uint *)(lVar10 + 0x20);
      lVar2 = *(long *)(lVar10 + 0x28);
      uVar1 = param_2 * 0x1e3779b1 & 0x3fffffff;
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar1 / uVar8;
      }
      uVar3 = (ulong)(uVar1 - uVar4 * uVar8);
      uVar8 = *(uint *)(lVar2 + uVar3 * 0x18 + 4);
      if ((uVar8 >> 1 & 1) == 0) {
        uVar4 = 0;
        piVar7 = (int *)(lVar2 + uVar3 * 0x18);
        puVar6 = (uint *)(piVar7 + 1);
      }
      else {
        uVar4 = 0;
        uVar5 = 0xffffffff;
        do {
          if (*(int *)(lVar2 + uVar3 * 0x18) == param_2) break;
          uVar4 = uVar4 + 1;
          if ((uVar8 & 1) == 0 && uVar5 == 0xffffffff) {
            uVar5 = (uint)uVar3;
          }
          uVar3 = (ulong)(*(uint *)(lVar10 + 0x1c) & uVar4 + (uint)uVar3);
          uVar8 = *(uint *)(lVar2 + uVar3 * 0x18 + 4);
        } while ((uVar8 >> 1 & 1) != 0);
        uVar8 = (uint)uVar3;
        if (uVar5 != 0xffffffff) {
          uVar8 = uVar5;
        }
        uVar3 = (ulong)uVar8;
        piVar7 = (int *)(lVar2 + uVar3 * 0x18);
        puVar6 = (uint *)(piVar7 + 1);
        if (((byte)*puVar6 >> 1 & 1) != 0) {
          *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + -1;
          *(uint *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) - (*puVar6 & 1);
        }
      }
      *piVar7 = param_2;
      lVar2 = lVar2 + uVar3 * 0x18;
      *(int **)(lVar2 + 8) = param_3;
      *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
      *puVar6 = uVar1 << 2 | 3;
      iVar13 = (int)((ulong)*(undefined8 *)(lVar10 + 0x14) >> 0x20) + 1;
      *(ulong *)(lVar10 + 0x14) = CONCAT44(iVar13,(int)*(undefined8 *)(lVar10 + 0x14) + 1);
      if ((*(ushort *)(lVar10 + 0x12) < uVar4) && (*(uint *)(lVar10 + 0x1c) < (uint)(iVar13 * 8))) {
        FUN_005073e4(lVar10,*(uint *)(lVar10 + 0x1c) - 8);
      }
      uVar9 = 1;
      param_3 = piVar11;
    }
    rive_hb_blob_destroy(param_3);
  }
  return uVar9;
}


// ===== 005073e4  FUN_005073e4 =====

undefined8 FUN_005073e4(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  void *__s;
  ulong uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  void *__ptr;
  undefined8 uVar13;
  int iVar14;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    return 0;
  }
  if ((param_2 == 0) || (*(uint *)(param_1 + 0x1c) <= param_2 + (param_2 >> 1))) {
    uVar2 = *(uint *)(param_1 + 0x14);
    if (*(uint *)(param_1 + 0x14) <= param_2) {
      uVar2 = param_2;
    }
    uVar2 = uVar2 << 1;
    if (uVar2 < 5) {
      uVar2 = 4;
    }
    uVar11 = 0x20 - (int)LZCOUNT(uVar2);
    uVar12 = 0x18L << ((ulong)uVar11 & 0x3f);
    __s = malloc(uVar12);
    if (__s == (void *)0x0) {
      *(undefined1 *)(param_1 + 0x10) = 0;
      return 0;
    }
    uVar12 = uVar12 & 0xfffffff0;
    if (uVar12 != 0) {
      memset(__s,0,uVar12);
    }
    __ptr = *(void **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar1 = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      uVar1 = *(int *)(param_1 + 0x1c) + 1;
    }
    *(int *)(param_1 + 0x1c) = ~(-1 << (ulong)(uVar11 & 0x1f));
    if ((int)LZCOUNT(uVar2) == 0) {
      uVar4 = 0x7fffffff;
    }
    else {
      uVar4 = *(undefined4 *)(&DAT_00253a38 + (ulong)uVar11 * 4);
    }
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    *(void **)(param_1 + 0x28) = __s;
    *(short *)(param_1 + 0x12) = (short)uVar11 * 2;
    if (uVar1 != 0) {
      uVar12 = 0;
      do {
        uVar2 = *(uint *)((long)__ptr + uVar12 * 0x18 + 4);
        if ((((uVar2 & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) &&
           ((*(uint *)(param_1 + 0x18) + (*(uint *)(param_1 + 0x18) >> 1) <
             *(uint *)(param_1 + 0x1c) || (uVar3 = FUN_005073e4(param_1,0), (uVar3 & 1) != 0)))) {
          uVar11 = *(uint *)(param_1 + 0x20);
          uVar5 = 0;
          if (uVar11 != 0) {
            uVar5 = (uVar2 >> 2) / uVar11;
          }
          uVar3 = (ulong)((uVar2 >> 2) - uVar5 * uVar11);
          lVar6 = *(long *)(param_1 + 0x28);
          piVar7 = (int *)((long)__ptr + uVar12 * 0x18);
          uVar11 = *(uint *)(lVar6 + uVar3 * 0x18 + 4);
          if ((uVar11 >> 1 & 1) == 0) {
            piVar10 = (int *)(lVar6 + uVar3 * 0x18);
            uVar5 = 0;
            puVar9 = (uint *)(piVar10 + 1);
          }
          else {
            uVar5 = 0;
            uVar8 = 0xffffffff;
            do {
              if (*(int *)(lVar6 + uVar3 * 0x18) == *piVar7) break;
              uVar5 = uVar5 + 1;
              if ((uVar11 & 1) == 0 && uVar8 == 0xffffffff) {
                uVar8 = (uint)uVar3;
              }
              uVar3 = (ulong)(*(uint *)(param_1 + 0x1c) & uVar5 + (uint)uVar3);
              uVar11 = *(uint *)(lVar6 + uVar3 * 0x18 + 4);
            } while ((uVar11 >> 1 & 1) != 0);
            uVar11 = (uint)uVar3;
            if (uVar8 != 0xffffffff) {
              uVar11 = uVar8;
            }
            uVar3 = (ulong)uVar11;
            piVar10 = (int *)(lVar6 + uVar3 * 0x18);
            puVar9 = (uint *)(piVar10 + 1);
            if (((byte)*puVar9 >> 1 & 1) != 0) {
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
              *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (*puVar9 & 1);
            }
          }
          lVar6 = lVar6 + uVar3 * 0x18;
          *piVar10 = *piVar7;
          uVar13 = *(undefined8 *)(piVar7 + 2);
          *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(piVar7 + 4);
          *(undefined8 *)(lVar6 + 8) = uVar13;
          *puVar9 = uVar2 | 3;
          iVar14 = (int)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) + 1;
          *(ulong *)(param_1 + 0x14) = CONCAT44(iVar14,(int)*(undefined8 *)(param_1 + 0x14) + 1);
          if ((*(ushort *)(param_1 + 0x12) < uVar5) &&
             (*(uint *)(param_1 + 0x1c) < (uint)(iVar14 * 8))) {
            FUN_005073e4(param_1,*(uint *)(param_1 + 0x1c) - 8);
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar1);
    }
    free(__ptr);
  }
  return 1;
}


// ===== 00507654  rive_hb_face_builder_sort_tables =====

void rive_hb_face_builder_sort_tables(long param_1,int *param_2)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  undefined8 *local_b8;
  uint local_b0;
  undefined8 *local_80;
  uint local_78;
  uint uStack_74;
  undefined *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(code **)(param_1 + 0x30) == FUN_005063a0) {
    lVar9 = *(long *)(param_1 + 0x28);
    puVar12 = *(undefined8 **)(lVar9 + 0x28);
    uVar2 = *(uint *)(lVar9 + 0x1c) + 1;
    if (uVar2 < 2) {
      uVar14 = 0;
      puVar13 = puVar12;
      uStack_74 = 0;
    }
    else {
      uVar6 = 0;
      puVar8 = puVar12 + (ulong)*(uint *)(lVar9 + 0x1c) * 3 + 3;
      uVar14 = uVar2;
      do {
        puVar13 = puVar12;
        uStack_74 = uVar6;
        if ((*(byte *)((long)puVar12 + 4) & 1) != 0) break;
        uVar14 = uVar14 - 1;
        uVar6 = uVar6 + 1;
        puVar12 = puVar12 + 3;
        puVar13 = puVar8;
        uStack_74 = uVar2;
      } while (uVar14 != 0);
    }
    local_70 = PTR_is_real_0067d808;
    uStack_68 = 0;
    local_50 = 0;
    local_60 = &DAT_002537d9;
    puStack_58 = PTR_get_value_0067d810;
    local_80 = puVar13;
    local_78 = uVar14;
    FUN_0050685c(&local_b8,&local_80);
LAB_0050772c:
    puVar12 = puVar13;
    if ((puVar12 != local_b8) || (uVar14 != local_b0)) {
      puVar8 = puVar12;
      if (uVar14 == 0) {
        puVar8 = &DAT_006870b0;
        DAT_006870b0 = 0;
        DAT_006870b8 = 0;
        DAT_006870c0 = 0;
      }
      *(undefined4 *)(puVar8 + 2) = 0xffffffff;
      puVar7 = puVar12 + (ulong)uVar14 * 3;
      puVar8 = puVar12 + (ulong)(uVar14 - 1) * 3 + 3;
      do {
        puVar13 = puVar7;
        if ((uVar14 == 0) || (uVar14 = uVar14 - 1, puVar13 = puVar8, uVar14 == 0)) break;
        pbVar1 = (byte *)((long)puVar12 + 0x1c);
        puVar12 = puVar12 + 3;
        puVar13 = puVar12;
      } while ((*pbVar1 & 1) == 0);
      goto LAB_0050772c;
    }
    iVar5 = *param_2;
    if (iVar5 != 0) {
      lVar15 = *(long *)(lVar9 + 0x28);
      iVar11 = 0;
      piVar10 = param_2 + 1;
      do {
        if ((lVar15 != 0) && (lVar4 = FUN_0050691c(lVar9,iVar5,iVar5 * -0x61c8864f), lVar4 != 0)) {
          *(int *)(lVar4 + 0x10) = iVar11;
          iVar11 = iVar11 + 1;
        }
        iVar5 = *piVar10;
        piVar10 = piVar10 + 1;
      } while (iVar5 != 0);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0050781c  rive_hb_font_funcs_create =====

undefined4 * rive_hb_font_funcs_create(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(1,0xc0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)&DAT_00686380;
  }
  else {
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    memcpy(puVar1 + 8,&PTR_FUN_006863a0,0xa0);
  }
  return puVar1;
}


// ===== 0050787c  FUN_0050787c =====

bool FUN_0050787c(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  
  lVar4 = *(long *)(param_1 + 0x18);
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0x90) + 0x10);
  if (puVar7 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar7;
  }
  iVar3 = (**(code **)(*(long *)(lVar4 + 0x90) + 0x20))
                    (lVar4,*(undefined8 *)(lVar4 + 0x98),param_3,uVar5);
  if (iVar3 == 0) goto LAB_005078e8;
  if (*(long *)(param_1 + 0x18) == 0) {
LAB_005078e0:
    iVar6 = param_3[2];
  }
  else {
    iVar6 = *(int *)(*(long *)(param_1 + 0x18) + 0x2c);
    lVar4 = (long)iVar6;
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar6 == iVar1) goto LAB_005078e0;
    iVar6 = 0;
    if (lVar4 != 0) {
      iVar6 = (int)(((long)iVar1 * (long)*param_3) / lVar4);
    }
    iVar2 = 0;
    if (lVar4 != 0) {
      iVar2 = (int)(((long)iVar1 * (long)param_3[2]) / lVar4);
    }
    *param_3 = iVar6;
    param_3[1] = iVar2;
    iVar6 = 0;
    if (lVar4 != 0) {
      iVar6 = (int)(((long)iVar1 * (long)param_3[2]) / lVar4);
    }
  }
  param_3[2] = iVar6;
LAB_005078e8:
  return iVar3 != 0;
}


// ===== 00507924  FUN_00507924 =====

bool FUN_00507924(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_1 + 0x18);
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  lVar7 = *(long *)(*(long *)(lVar4 + 0x90) + 0x10);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar7 + 8);
  }
  iVar3 = (**(code **)(*(long *)(lVar4 + 0x90) + 0x28))
                    (lVar4,*(undefined8 *)(lVar4 + 0x98),param_3,uVar5);
  if (iVar3 == 0) goto LAB_00507990;
  if (*(long *)(param_1 + 0x18) == 0) {
LAB_00507988:
    iVar6 = param_3[2];
  }
  else {
    iVar6 = *(int *)(*(long *)(param_1 + 0x18) + 0x28);
    lVar4 = (long)iVar6;
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar6 == iVar1) goto LAB_00507988;
    iVar6 = 0;
    if (lVar4 != 0) {
      iVar6 = (int)(((long)iVar1 * (long)*param_3) / lVar4);
    }
    iVar2 = 0;
    if (lVar4 != 0) {
      iVar2 = (int)(((long)iVar1 * (long)param_3[2]) / lVar4);
    }
    *param_3 = iVar6;
    param_3[1] = iVar2;
    iVar6 = 0;
    if (lVar4 != 0) {
      iVar6 = (int)(((long)iVar1 * (long)param_3[2]) / lVar4);
    }
  }
  param_3[2] = iVar6;
LAB_00507990:
  return iVar3 != 0;
}


// ===== 005079cc  FUN_005079cc =====

void FUN_005079cc(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = (undefined4)param_3;
  pcVar3 = *(code **)(*(long *)(param_1 + 0x90) + 0x38);
  if (pcVar3 == (code *)PTR_FUN_006863b8) {
    lVar4 = *(long *)(param_1 + 0x18);
    *param_4 = 0;
    lVar5 = *(long *)(*(long *)(lVar4 + 0x90) + 0x10);
    if (lVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar5 + 0x10);
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Could not recover jumptable at 0x00507a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar4 + 0x90) + 0x30))
                (lVar4,*(undefined8 *)(lVar4 + 0x98),param_3,param_4,uVar2);
      return;
    }
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar4 + 0x18);
    }
    (*pcVar3)(param_1,*(undefined8 *)(param_1 + 0x98),1,&local_2c,0,param_4,0,uVar2);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00507aa4  FUN_00507aa4 =====

ulong FUN_00507aa4(long param_1,undefined8 param_2,uint param_3,undefined4 *param_4,ulong param_5,
                  undefined4 *param_6,uint param_7)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  if (*(undefined **)(*(long *)(param_1 + 0x90) + 0x30) == PTR_FUN_006863b0) {
    lVar5 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(*(long *)(lVar5 + 0x90) + 0x10);
    if (lVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar6 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00507ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(long *)(lVar5 + 0x90) + 0x38))
                      (lVar5,*(undefined8 *)(lVar5 + 0x98),param_3,param_4,param_5,param_6,param_7,
                       uVar4);
    return uVar3;
  }
  uVar7 = 0;
  uVar8 = uVar7;
  if (param_3 != 0) {
    do {
      lVar5 = *(long *)(param_1 + 0x90);
      uVar1 = *param_4;
      *param_6 = 0;
      lVar6 = *(long *)(lVar5 + 0x10);
      if (lVar6 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar6 + 0x10);
      }
      iVar2 = (**(code **)(lVar5 + 0x30))
                        (param_1,*(undefined8 *)(param_1 + 0x98),uVar1,param_6,uVar4);
      uVar8 = uVar7;
      if (iVar2 == 0) break;
      uVar7 = uVar7 + 1;
      param_4 = (undefined4 *)((long)param_4 + (param_5 & 0xffffffff));
      param_6 = (undefined4 *)((long)param_6 + (ulong)param_7);
      uVar8 = param_3;
    } while (param_3 != uVar7);
  }
  if (param_3 <= uVar8) {
    uVar8 = param_3;
  }
  return (ulong)uVar8;
}


// ===== 00507ba8  FUN_00507ba8 =====

void FUN_00507ba8(long param_1)

{
  long lVar1;
  undefined4 *in_x4;
  code *UNRECOVERED_JUMPTABLE_00;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *in_x4 = 0;
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(lVar1 + 0x90) + 0x40);
  if (*(long *)(*(long *)(lVar1 + 0x90) + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00507bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00507bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(lVar1,*(undefined8 *)(lVar1 + 0x98));
  return;
}


// ===== 00507bd4  FUN_00507bd4 =====

void FUN_00507bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  uint local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_2c = (undefined4)param_3;
  pcVar6 = *(code **)(*(long *)(param_1 + 0x90) + 0x58);
  if (pcVar6 == (code *)PTR_FUN_006863d8) {
    lVar7 = *(long *)(param_1 + 0x18);
    lVar8 = *(long *)(*(long *)(lVar7 + 0x90) + 0x10);
    if (lVar8 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar8 + 0x28);
    }
    uVar4 = (**(code **)(*(long *)(lVar7 + 0x90) + 0x48))
                      (lVar7,*(undefined8 *)(lVar7 + 0x98),param_3,uVar5);
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x28);
      if (iVar1 != *(int *)(param_1 + 0x28)) {
        iVar3 = (int)uVar4;
        uVar4 = 0;
        if ((long)iVar1 != 0) {
          uVar4 = ((long)*(int *)(param_1 + 0x28) * (long)iVar3) / (long)iVar1;
        }
      }
    }
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar7 + 0x38);
    }
    (*pcVar6)(param_1,*(undefined8 *)(param_1 + 0x98),1,&local_2c,0,&local_30,0,uVar5);
    uVar4 = (ulong)local_30;
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 00507cb8  FUN_00507cb8 =====

void FUN_00507cb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  uint local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_2c = (undefined4)param_3;
  pcVar6 = *(code **)(*(long *)(param_1 + 0x90) + 0x60);
  if (pcVar6 == (code *)PTR_FUN_006863e0) {
    lVar7 = *(long *)(param_1 + 0x18);
    lVar8 = *(long *)(*(long *)(lVar7 + 0x90) + 0x10);
    if (lVar8 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar8 + 0x30);
    }
    uVar4 = (**(code **)(*(long *)(lVar7 + 0x90) + 0x50))
                      (lVar7,*(undefined8 *)(lVar7 + 0x98),param_3,uVar5);
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x2c);
      if (iVar1 != *(int *)(param_1 + 0x2c)) {
        iVar3 = (int)uVar4;
        uVar4 = 0;
        if ((long)iVar1 != 0) {
          uVar4 = ((long)*(int *)(param_1 + 0x2c) * (long)iVar3) / (long)iVar1;
        }
      }
    }
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar7 + 0x40);
    }
    (*pcVar6)(param_1,*(undefined8 *)(param_1 + 0x98),1,&local_2c,0,&local_30,0,uVar5);
    uVar4 = (ulong)local_30;
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 00507d9c  FUN_00507d9c =====

void FUN_00507d9c(long param_1,undefined8 param_2,int param_3,undefined4 *param_4,uint param_5,
                 int *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (*(undefined **)(*(long *)(param_1 + 0x90) + 0x48) == PTR_FUN_006863c8) {
    lVar4 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(*(long *)(lVar4 + 0x90) + 0x10);
    if (lVar5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar5 + 0x38);
    }
    (**(code **)(*(long *)(lVar4 + 0x90) + 0x58))
              (lVar4,*(undefined8 *)(lVar4 + 0x98),param_3,param_4,param_5,param_6,param_7,uVar3);
    if (param_3 != 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      do {
        iVar2 = *param_6;
        if (lVar4 != 0) {
          iVar1 = *(int *)(lVar4 + 0x28);
          if (iVar1 != *(int *)(param_1 + 0x28)) {
            lVar5 = (long)iVar2;
            iVar2 = 0;
            if ((long)iVar1 != 0) {
              iVar2 = (int)((*(int *)(param_1 + 0x28) * lVar5) / (long)iVar1);
            }
          }
        }
        param_3 = param_3 + -1;
        *param_6 = iVar2;
        param_6 = (int *)((long)param_6 + (ulong)param_7);
      } while (param_3 != 0);
    }
  }
  else if (param_3 != 0) {
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
      if (lVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(lVar4 + 0x28);
      }
      iVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 0x48))
                        (param_1,*(undefined8 *)(param_1 + 0x98),*param_4,uVar3);
      param_3 = param_3 + -1;
      *param_6 = iVar2;
      param_4 = (undefined4 *)((long)param_4 + (ulong)param_5);
      param_6 = (int *)((long)param_6 + (ulong)param_7);
    } while (param_3 != 0);
  }
  return;
}


// ===== 00507ebc  FUN_00507ebc =====

void FUN_00507ebc(long param_1,undefined8 param_2,int param_3,undefined4 *param_4,uint param_5,
                 int *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (*(undefined **)(*(long *)(param_1 + 0x90) + 0x50) == PTR_FUN_006863d0) {
    lVar4 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(*(long *)(lVar4 + 0x90) + 0x10);
    if (lVar5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar5 + 0x40);
    }
    (**(code **)(*(long *)(lVar4 + 0x90) + 0x60))
              (lVar4,*(undefined8 *)(lVar4 + 0x98),param_3,param_4,param_5,param_6,param_7,uVar3);
    if (param_3 != 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      do {
        iVar2 = *param_6;
        if (lVar4 != 0) {
          iVar1 = *(int *)(lVar4 + 0x2c);
          if (iVar1 != *(int *)(param_1 + 0x2c)) {
            lVar5 = (long)iVar2;
            iVar2 = 0;
            if ((long)iVar1 != 0) {
              iVar2 = (int)((*(int *)(param_1 + 0x2c) * lVar5) / (long)iVar1);
            }
          }
        }
        param_3 = param_3 + -1;
        *param_6 = iVar2;
        param_6 = (int *)((long)param_6 + (ulong)param_7);
      } while (param_3 != 0);
    }
  }
  else if (param_3 != 0) {
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
      if (lVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(lVar4 + 0x30);
      }
      iVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 0x50))
                        (param_1,*(undefined8 *)(param_1 + 0x98),*param_4,uVar3);
      param_3 = param_3 + -1;
      *param_6 = iVar2;
      param_4 = (undefined4 *)((long)param_4 + (ulong)param_5);
      param_6 = (int *)((long)param_6 + (ulong)param_7);
    } while (param_3 != 0);
  }
  return;
}


// ===== 00507fdc  FUN_00507fdc =====

void FUN_00507fdc(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar4 = *(code **)(*(long *)(param_1 + 0x90) + 0x78);
  local_3c = param_3;
  if (pcVar4 == (code *)PTR_FUN_006863f8) {
    uVar3 = FUN_00509728(*(undefined8 *)(param_1 + 0x18),param_3,param_4,param_5);
    if ((int)uVar3 != 0) {
      FUN_00509438(param_1,param_4,param_5);
      uVar3 = 1;
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x58);
    }
    iVar2 = (*pcVar4)(param_1,*(undefined8 *)(param_1 + 0x98),1,&local_3c,0,param_4,0,param_5,0,
                      lVar5);
    uVar3 = (ulong)(iVar2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 005080bc  FUN_005080bc =====

void FUN_005080bc(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar4 = *(code **)(*(long *)(param_1 + 0x90) + 0x80);
  local_3c = param_3;
  if (pcVar4 == (code *)PTR_FUN_00686400) {
    uVar3 = FUN_00509670(*(undefined8 *)(param_1 + 0x18),param_3,param_4,param_5);
    if ((int)uVar3 != 0) {
      FUN_00509438(param_1,param_4,param_5);
      uVar3 = 1;
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x60);
    }
    iVar2 = (*pcVar4)(param_1,*(undefined8 *)(param_1 + 0x98),1,&local_3c,0,param_4,0,param_5,0,
                      lVar5);
    uVar3 = (ulong)(iVar2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0050819c  FUN_0050819c =====

undefined8
FUN_0050819c(long param_1,undefined8 param_2,int param_3,undefined4 *param_4,uint param_5,
            undefined4 *param_6,uint param_7,undefined4 *param_8,uint param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_9;
  if (*(undefined **)(*(long *)(param_1 + 0x90) + 0x68) == PTR_FUN_006863e8) {
    uVar2 = FUN_00509588(*(undefined8 *)(param_1 + 0x18),param_3,param_4,param_5,param_6,param_7,
                         param_8,uVar5);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if (param_3 != 0) {
      do {
        FUN_00509438(param_1,param_6,param_8);
        param_3 = param_3 + -1;
        param_6 = (undefined4 *)((long)param_6 + (ulong)param_7);
        param_8 = (undefined4 *)((long)param_8 + uVar5);
      } while (param_3 != 0);
    }
  }
  else if (param_3 != 0) {
    do {
      lVar3 = *(long *)(param_1 + 0x90);
      uVar1 = *param_4;
      *param_8 = 0;
      *param_6 = 0;
      lVar4 = *(long *)(lVar3 + 0x10);
      if (lVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(lVar4 + 0x48);
      }
      (**(code **)(lVar3 + 0x68))
                (param_1,*(undefined8 *)(param_1 + 0x98),uVar1,param_6,param_8,uVar2);
      param_3 = param_3 + -1;
      param_4 = (undefined4 *)((long)param_4 + (ulong)param_5);
      param_6 = (undefined4 *)((long)param_6 + (ulong)param_7);
      param_8 = (undefined4 *)((long)param_8 + uVar5);
    } while (param_3 != 0);
  }
  return 1;
}


// ===== 005082b4  FUN_005082b4 =====

undefined8
FUN_005082b4(long param_1,undefined8 param_2,int param_3,undefined4 *param_4,uint param_5,
            undefined4 *param_6,uint param_7,undefined4 *param_8,uint param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_9;
  if (*(undefined **)(*(long *)(param_1 + 0x90) + 0x70) == PTR_FUN_006863f0) {
    uVar2 = FUN_00509498(*(undefined8 *)(param_1 + 0x18),param_3,param_4,param_5,param_6,param_7,
                         param_8,uVar5);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if (param_3 != 0) {
      do {
        FUN_00509438(param_1,param_6,param_8);
        param_3 = param_3 + -1;
        param_6 = (undefined4 *)((long)param_6 + (ulong)param_7);
        param_8 = (undefined4 *)((long)param_8 + uVar5);
      } while (param_3 != 0);
    }
  }
  else if (param_3 != 0) {
    do {
      lVar3 = *(long *)(param_1 + 0x90);
      uVar1 = *param_4;
      *param_8 = 0;
      *param_6 = 0;
      lVar4 = *(long *)(lVar3 + 0x10);
      if (lVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(lVar4 + 0x50);
      }
      (**(code **)(lVar3 + 0x70))
                (param_1,*(undefined8 *)(param_1 + 0x98),uVar1,param_6,param_8,uVar2);
      param_3 = param_3 + -1;
      param_4 = (undefined4 *)((long)param_4 + (ulong)param_5);
      param_6 = (undefined4 *)((long)param_6 + (ulong)param_7);
      param_8 = (undefined4 *)((long)param_8 + uVar5);
    } while (param_3 != 0);
  }
  return 1;
}


// ===== 005083cc  FUN_005083cc =====

undefined8 FUN_005083cc(void)

{
  return 0;
}


// ===== 005083d4  FUN_005083d4 =====

int FUN_005083d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  lVar3 = *(long *)(param_1 + 0x18);
  *param_4 = 0;
  param_4[1] = 0;
  lVar5 = *(long *)(*(long *)(lVar3 + 0x90) + 0x10);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0x70);
  }
  iVar2 = (**(code **)(*(long *)(lVar3 + 0x90) + 0x90))
                    (lVar3,*(undefined8 *)(lVar3 + 0x98),param_3,param_4,uVar4);
  if (iVar2 != 0) {
    FUN_00509438(param_1,param_4,(long)param_4 + 4);
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
      iVar6 = *(int *)((long)param_4 + 0xc);
    }
    else {
      iVar1 = *(int *)(lVar3 + 0x28);
      iVar6 = *(int *)(param_4 + 1);
      if (iVar1 != *(int *)(param_1 + 0x28)) {
        lVar5 = (long)iVar6;
        iVar6 = 0;
        if ((long)iVar1 != 0) {
          iVar6 = (int)((*(int *)(param_1 + 0x28) * lVar5) / (long)iVar1);
        }
      }
      *(int *)(param_4 + 1) = iVar6;
      iVar6 = *(int *)((long)param_4 + 0xc);
      iVar1 = *(int *)(lVar3 + 0x2c);
      if (iVar1 != *(int *)(param_1 + 0x2c)) {
        lVar3 = (long)iVar6;
        iVar6 = 0;
        if ((long)iVar1 != 0) {
          iVar6 = (int)((*(int *)(param_1 + 0x2c) * lVar3) / (long)iVar1);
        }
      }
    }
    *(int *)((long)param_4 + 0xc) = iVar6;
  }
  return iVar2;
}


// ===== 005084a0  FUN_005084a0 =====

bool FUN_005084a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x18);
  *param_6 = 0;
  *param_5 = 0;
  lVar4 = *(long *)(*(long *)(lVar2 + 0x90) + 0x10);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x78);
  }
  iVar1 = (**(code **)(*(long *)(lVar2 + 0x90) + 0x98))
                    (lVar2,*(undefined8 *)(lVar2 + 0x98),param_3,param_4,param_5,param_6,uVar3);
  if (iVar1 != 0) {
    FUN_00509438(param_1,param_5,param_6);
  }
  return iVar1 != 0;
}


// ===== 00508524  FUN_00508524 =====

void FUN_00508524(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,int param_5
                 )

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (param_5 != 0) {
    *param_4 = 0;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(lVar1 + 0x90) + 0xa0);
  if (*(long *)(*(long *)(lVar1 + 0x90) + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00508544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0050854c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(lVar1,*(undefined8 *)(lVar1 + 0x98));
  return;
}


// ===== 00508550  FUN_00508550 =====

void FUN_00508550(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  FUN_005093c8(*(undefined8 *)(param_1 + 0x18),param_3,param_4,param_5);
  return;
}


// ===== 00508564  FUN_00508564 =====

uint FUN_00508564(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  float local_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_2c = 0.0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0.0;
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar3 + 0x28) != 0) {
    local_30 = (float)*(int *)(param_1 + 0x28) / (float)*(int *)(lVar3 + 0x28);
  }
  if (*(int *)(lVar3 + 0x2c) != 0) {
    local_2c = (float)*(int *)(param_1 + 0x2c) / (float)*(int *)(lVar3 + 0x2c);
  }
  local_40 = param_4;
  uStack_38 = param_5;
  uVar2 = FUN_005087fc(lVar3,param_3,&DAT_00686660,&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050860c  FUN_0050860c =====

uint FUN_0050860c(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  fVar4 = 0.0;
  iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x28);
  if (iVar1 != 0) {
    fVar4 = (float)*(int *)(param_1 + 0x28) / (float)iVar1;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x2c);
  if (iVar1 != 0) {
    fVar5 = (float)*(int *)(param_1 + 0x2c) / (float)iVar1;
  }
  if (*(undefined8 **)(param_4 + 0x80) == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(undefined8 **)(param_4 + 0x80);
  }
  (**(code **)(param_4 + 0x10))(fVar4,0,0,fVar5,0,0,param_4,param_5,uVar3);
  uVar2 = FUN_00508704(*(undefined8 *)(param_1 + 0x18),param_3,param_4,param_5,param_6,param_7);
  if (*(long *)(param_4 + 0x80) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 8);
  }
  (**(code **)(param_4 + 0x18))(param_4,param_5,uVar3);
  return uVar2 & 1;
}


// ===== 00508704  FUN_00508704 =====

bool FUN_00508704(long param_1,undefined4 param_2,long param_3,undefined8 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(float *)(param_1 + 0x4c) != 0.0) {
    if (*(undefined8 **)(param_3 + 0x80) == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(undefined8 **)(param_3 + 0x80);
    }
    (**(code **)(param_3 + 0x10))
              (0x3f800000,0,*(float *)(param_1 + 0x4c),0x3f800000,0,0,param_3,param_4,uVar2);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x98);
  }
  iVar1 = (**(code **)(*(long *)(param_1 + 0x90) + 0xb8))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,param_5,param_6
                     ,uVar2);
  if (*(float *)(param_1 + 0x4c) != 0.0) {
    if (*(long *)(param_3 + 0x80) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x80) + 8);
    }
    (**(code **)(param_3 + 0x18))(param_3,param_4,uVar2);
  }
  return iVar1 != 0;
}


// ===== 005087fc  FUN_005087fc =====

bool FUN_005087fc(long param_1,undefined4 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  float *pfVar23;
  uint *puVar24;
  float *pfVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  code *pcVar31;
  ulong uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
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
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  int local_104;
  undefined8 local_100;
  undefined8 *puStack_f8;
  undefined8 local_f0;
  uint *local_e8;
  int local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  fVar45 = *(float *)(param_1 + 0x4c);
  bVar11 = *(int *)(param_1 + 0x40) == 0;
  bVar6 = *(int *)(param_1 + 0x44) == 0;
  if (((param_5 & 1) == 0) || (fVar45 == 0.0 && (bVar11 && bVar6))) {
    lVar17 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar17 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(lVar17 + 0x90);
    }
    iVar12 = (**(code **)(*(long *)(param_1 + 0x90) + 0xb0))
                       (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,uVar15);
    bVar10 = iVar12 != 0;
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + 0x98);
    pcVar31 = *(code **)(*(long *)(param_1 + 0x90) + 0xb0);
    puStack_f8 = (undefined8 *)0x0;
    local_100 = 0;
    local_e8 = (uint *)0x0;
    local_f0 = 0;
    puVar13 = DAT_00687088;
    if (DAT_00687088 == (undefined *)0x0) {
      do {
        puVar13 = (undefined *)FUN_0055ee78();
        if (puVar13 == (undefined *)0x0) {
          lVar17 = FUN_003410d0(0,&DAT_00686278,&DAT_00687088);
          puVar13 = &DAT_00686278;
          if (lVar17 == 0) break;
        }
        else {
          lVar17 = FUN_003410d0(0,puVar13,&DAT_00687088);
          if (lVar17 == 0) break;
          if (puVar13 != &DAT_00686278) {
            rive_hb_draw_funcs_destroy(&DAT_00686278,puVar13);
          }
        }
        puVar13 = DAT_00687088;
      } while (DAT_00687088 == (undefined *)0x0);
    }
    lVar17 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar17 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(lVar17 + 0x90);
    }
    iVar12 = (*pcVar31)(param_1,uVar15,param_2,puVar13,&local_100,uVar14);
    bVar10 = iVar12 != 0;
    if (iVar12 != 0) {
      if (fVar45 != 0.0) {
        local_104 = 0;
        local_e0 = 0;
        lVar17 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
        if (lVar17 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(lVar17 + 0x48);
        }
        (**(code **)(*(long *)(param_1 + 0x90) + 0x68))
                  (param_1,*(undefined8 *)(param_1 + 0x98),param_2,&local_e0,&local_104,uVar15);
        if (local_100._4_4_ != 0) {
          lVar19 = (ulong)local_100._4_4_ * 0xc;
          lVar17 = lVar19;
          puVar18 = puStack_f8;
          do {
            lVar17 = lVar17 + -0xc;
            *puVar18 = CONCAT44((float)((ulong)*puVar18 >> 0x20) + (float)-local_104,
                                (float)*puVar18 + (float)-local_e0);
            puVar18 = (undefined8 *)((long)puVar18 + 0xc);
          } while (lVar17 != 0);
          if (local_100._4_4_ != 0) {
            uVar33 = *(undefined4 *)(param_1 + 0x4c);
            lVar17 = lVar19;
            puVar18 = puStack_f8;
            do {
              lVar17 = lVar17 + -0xc;
              uVar38 = NEON_fmadd(uVar33,*(undefined4 *)((long)puVar18 + 4),*(undefined4 *)puVar18);
              *(undefined4 *)puVar18 = uVar38;
              puVar18 = (undefined8 *)((long)puVar18 + 0xc);
            } while (lVar17 != 0);
            if (local_100._4_4_ != 0) {
              puVar18 = puStack_f8;
              do {
                lVar19 = lVar19 + -0xc;
                *puVar18 = CONCAT44((float)((ulong)*puVar18 >> 0x20) + (float)local_104,
                                    (float)*puVar18 + (float)local_e0);
                puVar18 = (undefined8 *)((long)puVar18 + 0xc);
              } while (lVar19 != 0);
            }
          }
        }
      }
      puVar27 = local_e8;
      if (!bVar11 || !bVar6) {
        iVar12 = *(int *)(param_1 + 0x44);
        fVar39 = (float)*(int *)(param_1 + 0x40) / 2.0;
        fVar45 = fVar39;
        if (*(char *)(param_1 + 0x3c) != '\0') {
          fVar45 = 0.0;
        }
        fVar42 = (float)iVar12 / 2.0;
        fVar34 = -fVar45;
        if (-1 < *(int *)(param_1 + 0x28)) {
          fVar34 = fVar45;
        }
        fVar45 = -((float)iVar12 * 0.5);
        if (-1 < *(int *)(param_1 + 0x2c)) {
          fVar45 = fVar42;
        }
        if (*(int *)(param_1 + 0x40) != 0 || iVar12 != 0) {
          if (local_100._4_4_ != 0) {
            uVar20 = (ulong)local_f0._4_4_;
            if (local_f0._4_4_ != 0) {
              fVar35 = 0.0;
              puVar24 = local_e8;
              uVar22 = 0;
              do {
                uVar16 = *puVar24;
                if (uVar22 < uVar16) {
                  pfVar25 = (float *)((long)puStack_f8 + (ulong)uVar22 * 0xc);
                  uVar21 = (ulong)uVar22;
                  do {
                    uVar30 = uVar21 + 1;
                    uVar3 = (uint)uVar30;
                    if (uVar16 <= uVar30) {
                      uVar3 = uVar22;
                    }
                    pfVar23 = pfVar25;
                    if (local_100._4_4_ <= uVar21) {
                      pfVar23 = (float *)&DAT_0025d4b0;
                    }
                    pfVar25 = pfVar25 + 3;
                    pfVar1 = (float *)((long)puStack_f8 + (ulong)uVar3 * 0xc);
                    if (local_100._4_4_ <= uVar3) {
                      pfVar1 = (float *)&DAT_0025d4b0;
                    }
                    fVar40 = (float)NEON_fmadd(*pfVar23,pfVar1[1],-(pfVar23[1] * *pfVar1));
                    fVar35 = fVar35 + fVar40;
                    uVar21 = uVar30;
                  } while (uVar16 != uVar30);
                }
                puVar24 = puVar24 + 1;
                uVar22 = uVar16;
              } while (puVar24 != local_e8 + uVar20);
              if (local_f0._4_4_ != 0) {
                uVar21 = 0;
                uVar22 = 0;
                do {
                  puVar18 = puStack_f8;
                  uVar16 = puVar27[uVar21];
                  uVar3 = uVar16 - 1;
                  if (uVar22 != uVar3 && uVar16 != 0) {
                    fVar49 = 0.0;
                    fVar51 = 0.0;
                    uVar8 = local_100._4_4_;
                    fVar47 = 0.0;
                    fVar52 = 0.0;
                    fVar50 = 0.0;
                    fVar40 = 0.0;
                    uVar26 = 0xffffffff;
                    uVar30 = (ulong)uVar3;
                    uVar5 = uVar22;
                    do {
                      uVar32 = (ulong)uVar5;
                      uVar28 = (uint)uVar30;
                      fVar48 = fVar47;
                      fVar46 = fVar51;
                      fVar37 = fVar49;
                      if (uVar5 == uVar26) {
LAB_00508bfc:
                        uVar29 = uVar32;
                        fVar9 = fVar37;
                        if (fVar40 != 0.0) {
                          if ((uVar26 & 0x80000000) != 0) {
                            uVar26 = uVar28;
                            fVar51 = fVar52;
                            fVar47 = fVar50;
                            fVar49 = fVar40;
                          }
                          fVar41 = 0.0;
                          fVar43 = (float)NEON_fmadd(fVar52,fVar46,fVar50 * fVar48);
                          fVar36 = 0.0;
                          if (fVar43 != -0.9375 && fVar43 < -0.9375 == NAN(fVar43)) {
                            fVar36 = (float)NEON_fmadd(fVar46,fVar50,-(fVar48 * fVar52));
                            fVar41 = (float)NEON_fnmadd(fVar46,fVar50,--(fVar48 * fVar52));
                            fVar44 = fVar52 + fVar46;
                            fVar7 = -(fVar50 + fVar48);
                            if (0.0 <= fVar35 * 0.5) {
                              fVar41 = fVar36;
                              fVar44 = -(fVar52 + fVar46);
                              fVar7 = fVar50 + fVar48;
                            }
                            if (fVar37 < fVar40) {
                              fVar40 = fVar37;
                            }
                            fVar43 = fVar43 + 1.0;
                            fVar36 = (fVar7 * fVar40) / fVar41;
                            if (fVar39 * fVar41 <= fVar43 * fVar40) {
                              fVar36 = (fVar39 * fVar7) / fVar43;
                            }
                            if (fVar42 * fVar41 <= fVar43 * fVar40) {
                              fVar41 = (fVar42 * fVar44) / fVar43;
                            }
                            else {
                              fVar41 = (fVar44 * fVar40) / fVar41;
                            }
                          }
                          if (uVar28 != uVar5) {
                            do {
                              pfVar25 = (float *)((long)puStack_f8 + uVar30 * 0xc);
                              uVar28 = (uint)uVar30;
                              if (uVar28 < uVar8) {
                                fVar40 = *pfVar25;
                                pfVar23 = pfVar25;
                                uVar2 = uVar8;
                              }
                              else {
                                pfVar23 = (float *)&DAT_006870b0;
                                fVar40 = 0.0;
                                DAT_006870b8._0_4_ = 0;
                                DAT_006870b0 = 0;
                                uVar2 = local_100._4_4_;
                              }
                              *pfVar23 = fVar36 + fVar34 + fVar40;
                              if (uVar28 < uVar2) {
                                fVar40 = pfVar25[1];
                              }
                              else {
                                pfVar25 = (float *)&DAT_006870b0;
                                fVar40 = 0.0;
                                DAT_006870b8._0_4_ = 0;
                                DAT_006870b0 = 0;
                              }
                              uVar2 = uVar22;
                              if ((int)uVar28 < (int)uVar3) {
                                uVar2 = uVar28 + 1;
                              }
                              uVar30 = (ulong)uVar2;
                              pfVar25[1] = fVar41 + fVar45 + fVar40;
                            } while (uVar2 != uVar5);
                          }
                        }
                      }
                      else {
                        if (uVar5 < uVar8) {
                          fVar36 = *(float *)((long)puVar18 + uVar32 * 0xc);
                        }
                        else {
                          fVar36 = 0.0;
                          DAT_006870b8._0_4_ = 0;
                          DAT_006870b0 = 0;
                        }
                        if (uVar28 < uVar8) {
                          fVar41 = *(float *)((long)puVar18 + uVar30 * 0xc);
                        }
                        else {
                          fVar41 = 0.0;
                          DAT_006870b8._0_4_ = 0;
                          DAT_006870b0 = 0;
                        }
                        if (uVar5 < uVar8) {
                          fVar43 = *(float *)((long)puVar18 + uVar32 * 0xc + 4);
                        }
                        else {
                          fVar43 = 0.0;
                          DAT_006870b8._0_4_ = 0;
                          DAT_006870b0 = 0;
                        }
                        if (uVar28 < uVar8) {
                          fVar44 = *(float *)((long)puVar18 + uVar30 * 0xc + 4);
                        }
                        else {
                          fVar44 = 0.0;
                          DAT_006870b8._0_4_ = 0;
                          DAT_006870b0 = 0;
                        }
                        fVar37 = hypotf(fVar36 - fVar41,fVar43 - fVar44);
                        uVar29 = uVar30;
                        fVar9 = fVar40;
                        fVar48 = fVar50;
                        fVar46 = fVar52;
                        if (fVar37 != 0.0) {
                          fVar46 = (fVar36 - fVar41) / fVar37;
                          fVar48 = (fVar43 - fVar44) / fVar37;
                          goto LAB_00508bfc;
                        }
                      }
                      fVar52 = fVar46;
                      fVar50 = fVar48;
                      fVar40 = fVar9;
                      uVar28 = uVar22;
                      if ((int)uVar5 < (int)uVar3) {
                        uVar28 = uVar5 + 1;
                      }
                    } while ((uVar28 != (uint)uVar29) &&
                            (uVar30 = uVar29, uVar5 = uVar28, (uint)uVar29 != uVar26));
                  }
                  uVar21 = uVar21 + 1;
                  uVar22 = uVar16;
                } while (uVar21 != uVar20);
              }
            }
          }
        }
      }
      uStack_c8 = 0;
      uStack_cc = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      if (local_f0._4_4_ != 0) {
        puVar24 = local_e8 + local_f0._4_4_;
        puVar27 = local_e8;
        uVar22 = 0;
        do {
          fStack_d4 = 0.0;
          fStack_d8 = 0.0;
          fStack_dc = 0.0;
          local_e0 = 0;
          fStack_d0 = 0.0;
          uVar3 = *puVar27;
          uVar26 = uVar3 - uVar22;
          uVar16 = 0;
          if (uVar22 <= local_100._4_4_) {
            uVar16 = local_100._4_4_ - uVar22;
          }
          if (uVar26 <= uVar16) {
            uVar16 = uVar26;
          }
          if (uVar16 != 0) {
            fVar35 = 0.0;
            fVar45 = 0.0;
            fVar39 = 0.0;
            fVar34 = 0.0;
            pfVar25 = (float *)((long)puStack_f8 + (ulong)uVar22 * 0xc);
            fVar42 = 0.0;
            fVar40 = 0.0;
            do {
              fVar51 = pfVar25[2];
              fVar47 = *pfVar25;
              fVar49 = pfVar25[1];
              uVar22 = uVar16 - 1;
              pfVar23 = pfVar25 + 3;
              if ((int)fVar51 < 2) {
                fVar50 = fVar47;
                fVar52 = fVar49;
                fVar48 = fVar47;
                fVar46 = fVar49;
                if (fVar51 == 0.0) {
                  fVar45 = fVar47;
                  fVar39 = fVar47;
                  fVar34 = fVar47;
                  fVar42 = fVar47;
                  if (local_e0 != 0) {
                    if ((fStack_dc != fVar40) || (fStack_d8 != fVar35)) {
                      if (*(long *)(param_3 + 0x38) == 0) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 8);
                      }
                      (**(code **)(param_3 + 0x18))
                                (fStack_dc,fStack_d8,param_3,param_4,&local_e0,uVar15);
                    }
                    if (*(long *)(param_3 + 0x38) == 0) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20);
                    }
                    (**(code **)(param_3 + 0x30))(param_3,param_4,&local_e0,uVar15);
                    fStack_d8 = 0.0;
                    local_e0 = 0;
                    fStack_dc = 0.0;
                  }
                }
                else {
                  fVar50 = fStack_d4;
                  fVar52 = fStack_d0;
                  fVar48 = fVar40;
                  fVar46 = fVar35;
                  if (fVar51 == 1.4013e-45) {
                    if (local_e0 == 0) {
                      if (*(undefined8 **)(param_3 + 0x38) == (undefined8 *)0x0) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = **(undefined8 **)(param_3 + 0x38);
                      }
                      (**(code **)(param_3 + 0x10))(fVar45,param_3,param_4,&local_e0,uVar15);
                      local_e0 = 1;
                      fStack_dc = fStack_d4;
                      fStack_d8 = fStack_d0;
                    }
                    if (*(long *)(param_3 + 0x38) == 0) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 8);
                    }
                    (**(code **)(param_3 + 0x18))(fVar47,fVar49,param_3,param_4,&local_e0,uVar15);
                    fVar50 = fVar47;
                    fVar52 = fVar49;
                    fVar48 = fVar47;
                    fVar46 = fVar49;
                    fVar45 = fVar47;
                    fVar39 = fVar47;
                    fVar34 = fVar47;
                    fVar42 = fVar47;
                  }
                }
              }
              else if (fVar51 == 2.8026e-45) {
                bVar11 = uVar22 != 0;
                pfVar1 = (float *)&DAT_0025d4b0;
                if (bVar11) {
                  pfVar1 = pfVar23;
                }
                fVar45 = *pfVar1;
                fVar52 = pfVar1[1];
                if (bVar11) {
                  pfVar23 = pfVar25 + 6;
                }
                uVar22 = 0;
                if (bVar11) {
                  uVar22 = uVar16 - 2;
                }
                if (local_e0 == 0) {
                  if (*(undefined8 **)(param_3 + 0x38) == (undefined8 *)0x0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = **(undefined8 **)(param_3 + 0x38);
                  }
                  (**(code **)(param_3 + 0x10))(fVar39,param_3,param_4,&local_e0,uVar15);
                  local_e0 = 1;
                  fStack_dc = fStack_d4;
                  fStack_d8 = fStack_d0;
                }
                if (*(long *)(param_3 + 0x38) == 0) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10);
                }
                (**(code **)(param_3 + 0x20))
                          (fVar47,fVar49,fVar45,fVar52,param_3,param_4,&local_e0,uVar15);
                fVar50 = fVar45;
                fVar48 = fVar45;
                fVar46 = fVar52;
                fVar39 = fVar45;
                fVar34 = fVar45;
                fVar42 = fVar45;
              }
              else {
                fVar50 = fStack_d4;
                fVar52 = fStack_d0;
                fVar48 = fVar40;
                fVar46 = fVar35;
                if (fVar51 == 4.2039e-45) {
                  if (uVar22 == 0) {
                    fVar39 = 0.0;
                    fVar42 = 0.0;
LAB_0050902c:
                    uVar22 = 0;
                    pfVar25 = (float *)&DAT_0025d4b0;
                  }
                  else {
                    fVar42 = pfVar25[3];
                    fVar39 = pfVar25[4];
                    pfVar23 = pfVar25 + 6;
                    if (uVar16 == 2) goto LAB_0050902c;
                    uVar22 = uVar16 - 3;
                    pfVar23 = pfVar25 + 9;
                    pfVar25 = pfVar25 + 6;
                  }
                  fVar45 = *pfVar25;
                  fVar52 = pfVar25[1];
                  if (local_e0 == 0) {
                    if (*(undefined8 **)(param_3 + 0x38) == (undefined8 *)0x0) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = **(undefined8 **)(param_3 + 0x38);
                    }
                    (**(code **)(param_3 + 0x10))(fVar34,param_3,param_4,&local_e0,uVar15);
                    local_e0 = 1;
                    fStack_dc = fStack_d4;
                    fStack_d8 = fStack_d0;
                  }
                  if (*(long *)(param_3 + 0x38) == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18);
                  }
                  (**(code **)(param_3 + 0x28))
                            (fVar47,fVar49,fVar42,fVar39,fVar45,fVar52,param_3,param_4,&local_e0,
                             uVar15);
                  fVar50 = fVar45;
                  fVar48 = fVar45;
                  fVar46 = fVar52;
                  fVar39 = fVar45;
                  fVar34 = fVar45;
                  fVar42 = fVar45;
                }
              }
              fVar35 = fVar46;
              fVar40 = fVar48;
              uVar16 = uVar22;
              fStack_d0 = fVar52;
              fStack_d4 = fVar50;
              pfVar25 = pfVar23;
            } while (uVar16 != 0);
            if (local_e0 != 0) {
              if ((fStack_dc != fVar42) || (fStack_d8 != fVar35)) {
                if (*(long *)(param_3 + 0x38) == 0) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 8);
                }
                (**(code **)(param_3 + 0x18))(fStack_dc,fStack_d8,param_3,param_4,&local_e0,uVar15);
              }
              if (*(long *)(param_3 + 0x38) == 0) {
                uVar15 = 0;
              }
              else {
                uVar15 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20);
              }
              (**(code **)(param_3 + 0x30))(param_3,param_4,&local_e0,uVar15);
            }
          }
          puVar27 = puVar27 + 1;
          uVar22 = uVar3;
        } while (puVar27 != puVar24);
      }
      fStack_d0 = 0.0;
      fStack_d4 = 0.0;
      fStack_d8 = 0.0;
      fStack_dc = 0.0;
      local_e0 = 0;
    }
    if ((int)local_f0 - 1U < 0xfffffffe) {
      local_f0 = local_f0 & 0xffffffff;
      free(local_e8);
    }
    local_f0 = 0;
    local_e8 = (uint *)0x0;
    if ((int)local_100 - 1U < 0xfffffffe) {
      local_100 = local_100 & 0xffffffff;
      free(puStack_f8);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar10;
}


// ===== 005092bc  FUN_005092bc =====

void FUN_005092bc(float param_1,float param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_4;
  if (*(undefined8 **)(lVar1 + 0x38) == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(lVar1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x005092e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))
            (*(float *)(param_4 + 2) * param_1,*(float *)((long)param_4 + 0x14) * param_2,lVar1,
             param_4[1],param_5,uVar2);
  return;
}


// ===== 005092ec  FUN_005092ec =====

void FUN_005092ec(float param_1,float param_2,undefined8 param_3,long *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *param_4;
  lVar2 = param_4[1];
  fVar5 = (float)param_4[2];
  fVar6 = (float)((ulong)param_4[2] >> 0x20);
  lVar4 = *(long *)(lVar1 + 0x38);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x18);
  *(ulong *)(param_5 + 0xc) =
       CONCAT44(fVar6 * (float)((ulong)*(undefined8 *)(param_5 + 0xc) >> 0x20),
                fVar5 * (float)*(undefined8 *)(param_5 + 0xc));
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00509320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 * fVar5,param_2 * fVar6,lVar1,lVar2,param_5,uVar3);
  return;
}


// ===== 00509324  FUN_00509324 =====

void FUN_00509324(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 long *param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *param_6;
  lVar2 = param_6[1];
  fVar5 = (float)param_6[2];
  fVar6 = (float)((ulong)param_6[2] >> 0x20);
  lVar4 = *(long *)(lVar1 + 0x38);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x20);
  *(ulong *)(param_7 + 0xc) =
       CONCAT44(fVar6 * (float)((ulong)*(undefined8 *)(param_7 + 0xc) >> 0x20),
                fVar5 * (float)*(undefined8 *)(param_7 + 0xc));
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00509360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1 * fVar5,param_2 * fVar6,param_3 * fVar5,param_4 * fVar6,lVar1,lVar2,param_7,
             uVar3);
  return;
}


// ===== 00509364  FUN_00509364 =====

void FUN_00509364(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined8 param_7,long *param_8,long param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *param_8;
  lVar2 = param_8[1];
  fVar5 = (float)param_8[2];
  fVar6 = (float)((ulong)param_8[2] >> 0x20);
  lVar4 = *(long *)(lVar1 + 0x38);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x28);
  *(ulong *)(param_9 + 0xc) =
       CONCAT44(fVar6 * (float)((ulong)*(undefined8 *)(param_9 + 0xc) >> 0x20),
                fVar5 * (float)*(undefined8 *)(param_9 + 0xc));
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x005093a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1 * fVar5,param_2 * fVar6,param_3 * fVar5,param_4 * fVar6,param_5 * fVar5,
             param_6 * fVar6,lVar1,lVar2,param_9,uVar3);
  return;
}


// ===== 005093ac  FUN_005093ac =====

void FUN_005093ac(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(long *)(lVar1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005093bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x30))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005093c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x30))(lVar1,param_2[1],param_3,0);
  return;
}


// ===== 005093c8  FUN_005093c8 =====

void FUN_005093c8(long param_1,char *param_2,uint param_3,undefined4 *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  
  sVar1 = (size_t)param_3;
  *param_4 = 0;
  if (param_3 == 0xffffffff) {
    sVar1 = strlen(param_2);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x88);
  }
                    /* WARNING: Could not recover jumptable at 0x00509434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x90) + 0xa8))
            (param_1,*(undefined8 *)(param_1 + 0x98),param_2,sVar1,param_4,uVar2);
  return;
}


// ===== 00509438  FUN_00509438 =====

void FUN_00509438(long param_1,int *param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    iVar4 = *param_3;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x28);
    iVar4 = *param_2;
    if (iVar1 != *(int *)(param_1 + 0x28)) {
      lVar2 = (long)iVar4;
      iVar4 = 0;
      if ((long)iVar1 != 0) {
        iVar4 = (int)((*(int *)(param_1 + 0x28) * lVar2) / (long)iVar1);
      }
    }
    *param_2 = iVar4;
    iVar1 = *(int *)(lVar3 + 0x2c);
    iVar4 = *param_3;
    if (iVar1 != *(int *)(param_1 + 0x2c)) {
      lVar3 = (long)iVar4;
      iVar4 = 0;
      if ((long)iVar1 != 0) {
        iVar4 = (int)((*(int *)(param_1 + 0x2c) * lVar3) / (long)iVar1);
      }
    }
  }
  *param_3 = iVar4;
  return;
}


// ===== 00509498  FUN_00509498 =====

bool FUN_00509498(long param_1,int param_2,undefined8 param_3,undefined4 param_4,int *param_5,
                 uint param_6,int *param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
  }
  iVar4 = (**(code **)(*(long *)(param_1 + 0x90) + 0x80))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,param_5,param_6
                     ,param_7,param_8,lVar5);
  if ((*(char *)(param_1 + 0x30) != '\0') && (iVar4 != 0)) {
    iVar1 = -*(int *)(param_1 + 0x40);
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    iVar2 = -*(int *)(param_1 + 0x44);
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar2 = *(int *)(param_1 + 0x44);
    }
    if (param_2 != 0) {
      cVar3 = *(char *)(param_1 + 0x3c);
      do {
        if (cVar3 == '\0') {
          *param_5 = *param_5 + iVar1;
          *param_7 = *param_7 + iVar2;
        }
        param_2 = param_2 + -1;
        param_5 = (int *)((long)param_5 + (ulong)param_6);
        param_7 = (int *)((long)param_7 + (ulong)param_8);
      } while (param_2 != 0);
    }
  }
  return iVar4 != 0;
}


// ===== 00509588  FUN_00509588 =====

bool FUN_00509588(long param_1,int param_2,undefined8 param_3,undefined4 param_4,int *param_5,
                 uint param_6,int *param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x58);
  }
  iVar4 = (**(code **)(*(long *)(param_1 + 0x90) + 0x78))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,param_5,param_6
                     ,param_7,param_8,lVar5);
  if (iVar4 != 0) {
    iVar1 = -*(int *)(param_1 + 0x40);
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    iVar2 = -*(int *)(param_1 + 0x44);
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar2 = *(int *)(param_1 + 0x44);
    }
    if (param_2 != 0) {
      cVar3 = *(char *)(param_1 + 0x3c);
      do {
        if (cVar3 == '\0') {
          *param_5 = *param_5 + iVar1;
          *param_7 = *param_7 + iVar2;
        }
        param_2 = param_2 + -1;
        param_5 = (int *)((long)param_5 + (ulong)param_6);
        param_7 = (int *)((long)param_7 + (ulong)param_8);
      } while (param_2 != 0);
    }
  }
  return iVar4 != 0;
}


// ===== 00509670  FUN_00509670 =====

bool FUN_00509670(long param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x90);
  *param_4 = 0;
  *param_3 = 0;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar5 + 0x50);
  }
  iVar2 = (**(code **)(lVar4 + 0x70))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,uVar3);
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar1 = -*(int *)(param_1 + 0x40);
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    *param_3 = *param_3 + iVar1;
    iVar1 = -*(int *)(param_1 + 0x44);
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar1 = *(int *)(param_1 + 0x44);
    }
    *param_4 = *param_4 + iVar1;
  }
  return iVar2 != 0;
}


// ===== 00509728  FUN_00509728 =====

bool FUN_00509728(long param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x90);
  *param_4 = 0;
  *param_3 = 0;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar5 + 0x48);
  }
  iVar2 = (**(code **)(lVar4 + 0x68))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,uVar3);
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar1 = -*(int *)(param_1 + 0x40);
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    *param_3 = *param_3 + iVar1;
    iVar1 = -*(int *)(param_1 + 0x44);
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar1 = *(int *)(param_1 + 0x44);
    }
    *param_4 = *param_4 + iVar1;
  }
  return iVar2 != 0;
}


// ===== 005097e0  rive_hb_font_funcs_get_empty =====

undefined * rive_hb_font_funcs_get_empty(void)

{
  return &DAT_00686380;
}


// ===== 005097ec  rive_hb_font_funcs_reference =====

int * rive_hb_font_funcs_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_00340fe0(1,param_1);
  }
  return param_1;
}


// ===== 00509828  rive_hb_font_funcs_destroy =====

void rive_hb_font_funcs_destroy(int *param_1)

{
  int iVar1;
  undefined8 *__ptr;
  undefined8 uVar2;
  mutex *this;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = FUN_00340fe0(0xffffffff,param_1), iVar1 == 1)) {
    *param_1 = -0xdead;
    this = *(mutex **)(param_1 + 2);
    if (this != (mutex *)0x0) {
      FUN_004fe408(this + 0x28,this);
      std::__ndk1::mutex::~mutex(this);
      free(this);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    __ptr = *(undefined8 **)(param_1 + 6);
    if (__ptr != (undefined8 *)0x0) {
      if ((code *)*__ptr != (code *)0x0) {
        if (*(undefined8 **)(param_1 + 4) == (undefined8 *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = **(undefined8 **)(param_1 + 4);
        }
        (*(code *)*__ptr)(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[1] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 8);
        }
        (*(code *)__ptr[1])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[2] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x10);
        }
        (*(code *)__ptr[2])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[3] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x18);
        }
        (*(code *)__ptr[3])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[4] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x20);
        }
        (*(code *)__ptr[4])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[5] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x28);
        }
        (*(code *)__ptr[5])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[6] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x30);
        }
        (*(code *)__ptr[6])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[7] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x38);
        }
        (*(code *)__ptr[7])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[8] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x40);
        }
        (*(code *)__ptr[8])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[9] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x48);
        }
        (*(code *)__ptr[9])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[10] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x50);
        }
        (*(code *)__ptr[10])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[0xb] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x58);
        }
        (*(code *)__ptr[0xb])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[0xc] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x60);
        }
        (*(code *)__ptr[0xc])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[0xd] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x68);
        }
        (*(code *)__ptr[0xd])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[0xe] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x70);
        }
        (*(code *)__ptr[0xe])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[0xf] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x78);
        }
        (*(code *)__ptr[0xf])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[0x10] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x80);
        }
        (*(code *)__ptr[0x10])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[0x11] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x88);
        }
        (*(code *)__ptr[0x11])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[0x12] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x90);
        }
        (*(code *)__ptr[0x12])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
      if ((code *)__ptr[0x13] != (code *)0x0) {
        if (*(long *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x98);
        }
        (*(code *)__ptr[0x13])(uVar2);
        __ptr = *(undefined8 **)(param_1 + 6);
      }
    }
    free(__ptr);
    free(*(void **)(param_1 + 4));
    free(param_1);
    return;
  }
  return;
}


// ===== 00509b90  rive_hb_font_funcs_set_user_data =====

int * rive_hb_font_funcs_set_user_data
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  mutex *this;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      this = *(mutex **)(param_1 + 2);
      while (this == (mutex *)0x0) {
        this = (mutex *)calloc(1,0x38);
        if (this == (mutex *)0x0) {
          return (int *)0x0;
        }
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)this = 0;
        lVar2 = FUN_003410d0(0,this,param_1 + 2);
        if (lVar2 == 0) break;
        FUN_004fe408(this + 0x28,this);
        std::__ndk1::mutex::~mutex(this);
        free(this);
        this = *(mutex **)(param_1 + 2);
      }
      uVar1 = FUN_004fe740(this,param_2,param_3,param_4,param_5);
      param_1 = (int *)(ulong)(uVar1 & 1);
    }
  }
  return param_1;
}


// ===== 00509c78  rive_hb_font_funcs_get_user_data =====

void rive_hb_font_funcs_get_user_data(int *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  int *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) || (*(long *)(param_1 + 2) == 0)) {
      param_1 = (int *)0x0;
    }
    else {
      local_40 = 0;
      local_38 = (int *)0x0;
      local_30 = 0;
      uVar2 = FUN_004feac8(*(long *)(param_1 + 2) + 0x28,param_2,&local_40);
      param_1 = local_38;
      if ((uVar2 & 1) == 0) {
        param_1 = (int *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


// ===== 00509cf8  rive_hb_font_funcs_make_immutable =====

void rive_hb_font_funcs_make_immutable(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


// ===== 00509d08  rive_hb_font_funcs_is_immutable =====

byte rive_hb_font_funcs_is_immutable(long param_1)

{
  return (*(byte *)(param_1 + 4) ^ 0xff) & 1;
}


// ===== 00509d18  rive_hb_font_funcs_set_font_h_extents_func =====

void rive_hb_font_funcs_set_font_h_extents_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00509d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) &&
       (pcVar3 = (code *)**(undefined8 **)(param_1 + 0x18), pcVar3 != (code *)0x0)) {
      if (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = **(undefined8 **)(param_1 + 0x10);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_0050787c;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x20) = pcVar3;
      if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = param_3;
      }
      if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 00509df8  FUN_00509df8 =====

undefined8 FUN_00509df8(long param_1,long param_2,code *param_3)

{
  void *pvVar1;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0x10) == 0)) {
    pvVar1 = calloc(1,0xa0);
    *(void **)(param_1 + 0x10) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      if (param_3 == (code *)0x0) {
        return 0;
      }
      goto LAB_00509e78;
    }
  }
  if ((param_3 == (code *)0x0) || (*(long *)(param_1 + 0x18) != 0)) {
    return 1;
  }
  pvVar1 = calloc(1,0xa0);
  *(void **)(param_1 + 0x18) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return 1;
  }
LAB_00509e78:
  (*param_3)(param_2);
  return 0;
}


// ===== 00509e88  rive_hb_font_funcs_set_font_v_extents_func =====

void rive_hb_font_funcs_set_font_v_extents_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00509eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 8), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00507924;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x28) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 8) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 8) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 00509f68  rive_hb_font_funcs_set_nominal_glyph_func =====

void rive_hb_font_funcs_set_nominal_glyph_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00509f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x10), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_005079cc;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x30) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x10) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050a048  rive_hb_font_funcs_set_nominal_glyphs_func =====

void rive_hb_font_funcs_set_nominal_glyphs_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x18), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00507aa4;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x38) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x18) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050a128  rive_hb_font_funcs_set_variation_glyph_func =====

void rive_hb_font_funcs_set_variation_glyph_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050a158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x20), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00507ba8;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x40) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x20) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050a208  rive_hb_font_funcs_set_glyph_h_advance_func =====

void rive_hb_font_funcs_set_glyph_h_advance_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050a238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x28), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00507bd4;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x48) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x28) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050a2e8  rive_hb_font_funcs_set_glyph_v_advance_func =====

void rive_hb_font_funcs_set_glyph_v_advance_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050a318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x30), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00507cb8;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x50) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x30) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050a3c8  rive_hb_font_funcs_set_glyph_h_advances_func =====

void rive_hb_font_funcs_set_glyph_h_advances_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050a3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x38), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00507d9c;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x58) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x38) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050a4a8  rive_hb_font_funcs_set_glyph_v_advances_func =====

void rive_hb_font_funcs_set_glyph_v_advances_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050a4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x40), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00507ebc;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x60) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x40) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050a588  rive_hb_font_funcs_set_glyph_h_origin_func =====

void rive_hb_font_funcs_set_glyph_h_origin_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050a5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x48), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00507fdc;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x68) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x48) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050a668  rive_hb_font_funcs_set_glyph_v_origin_func =====

void rive_hb_font_funcs_set_glyph_v_origin_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050a698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x50), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_005080bc;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x70) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x50) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050a748  rive_hb_font_funcs_set_glyph_h_origins_func =====

void rive_hb_font_funcs_set_glyph_h_origins_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050a778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x58), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_0050819c;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x78) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x58) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050a828  rive_hb_font_funcs_set_glyph_v_origins_func =====

void rive_hb_font_funcs_set_glyph_v_origins_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x60), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_005082b4;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x80) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x60) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050a908  rive_hb_font_funcs_set_glyph_h_kerning_func =====

void rive_hb_font_funcs_set_glyph_h_kerning_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050a938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x68), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_005083cc;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x88) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x68) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050a9e8  rive_hb_font_funcs_set_glyph_extents_func =====

void rive_hb_font_funcs_set_glyph_extents_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050aa18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x70), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_005083d4;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x90) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x70) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050aac8  rive_hb_font_funcs_set_glyph_contour_point_func =====

void rive_hb_font_funcs_set_glyph_contour_point_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050aaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x78), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_005084a0;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x98) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x78) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050aba8  rive_hb_font_funcs_set_glyph_name_func =====

void rive_hb_font_funcs_set_glyph_name_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050abd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x80), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x80);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00508524;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0xa0) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x80) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x80) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050ac88  rive_hb_font_funcs_set_glyph_from_name_func =====

void rive_hb_font_funcs_set_glyph_from_name_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050acb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x88), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x88);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00508550;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0xa8) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x88) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x88) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050ad68  rive_hb_font_funcs_set_draw_glyph_or_fail_func =====

void rive_hb_font_funcs_set_draw_glyph_or_fail_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050ad98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x90), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_00508564;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0xb0) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x90) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050ae48  rive_hb_font_funcs_set_paint_glyph_or_fail_func =====

void rive_hb_font_funcs_set_paint_glyph_or_fail_func
               (long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050ae78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x18) + 0x98), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x98);
      }
      (*pcVar3)(uVar1);
    }
    uVar2 = FUN_00509df8(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((uVar2 & 1) != 0) {
      pcVar3 = FUN_0050860c;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0xb8) = pcVar3;
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x98) = param_3;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        *(code **)(*(long *)(param_1 + 0x18) + 0x98) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}


// ===== 0050af28  FUN_0050af28 =====

undefined8 FUN_0050af28(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  return 0;
}


// ===== 0050af3c  FUN_0050af3c =====

undefined8 FUN_0050af3c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  return 0;
}


// ===== 0050af50  FUN_0050af50 =====

undefined8 FUN_0050af50(void)

{
  undefined4 *in_x3;
  
  *in_x3 = 0;
  return 0;
}


// ===== 0050af5c  FUN_0050af5c =====

undefined8 FUN_0050af5c(void)

{
  undefined4 *in_x4;
  
  *in_x4 = 0;
  return 0;
}


// ===== 0050af68  FUN_0050af68 =====

undefined4 FUN_0050af68(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


// ===== 0050af70  FUN_0050af70 =====

int FUN_0050af70(long param_1)

{
  return -*(int *)(param_1 + 0x2c);
}


// ===== 0050af7c  FUN_0050af7c =====

undefined8 FUN_0050af7c(void)

{
  undefined4 *in_x3;
  undefined4 *in_x4;
  
  *in_x4 = 0;
  *in_x3 = 0;
  return 1;
}


// ===== 0050af8c  FUN_0050af8c =====

undefined8 FUN_0050af8c(void)

{
  return 0;
}


// ===== 0050af94  FUN_0050af94 =====

undefined8 FUN_0050af94(void)

{
  return 0;
}


// ===== 0050af9c  FUN_0050af9c =====

undefined8 FUN_0050af9c(void)

{
  undefined8 *in_x3;
  
  *in_x3 = 0;
  in_x3[1] = 0;
  return 0;
}


// ===== 0050afa8  FUN_0050afa8 =====

undefined8 FUN_0050afa8(void)

{
  undefined4 *in_x4;
  undefined4 *in_x5;
  
  *in_x5 = 0;
  *in_x4 = 0;
  return 0;
}


// ===== 0050afb8  FUN_0050afb8 =====

undefined8 FUN_0050afb8(void)

{
  undefined1 *in_x3;
  int in_w4;
  
  if (in_w4 != 0) {
    *in_x3 = 0;
  }
  return 0;
}


// ===== 0050afc8  FUN_0050afc8 =====

undefined8 FUN_0050afc8(void)

{
  undefined4 *in_x4;
  
  *in_x4 = 0;
  return 0;
}


// ===== 0050afd4  FUN_0050afd4 =====

undefined8 FUN_0050afd4(void)

{
  return 0;
}


// ===== 0050afdc  FUN_0050afdc =====

undefined8 FUN_0050afdc(void)

{
  return 0;
}


// ===== 0050afe4  rive_hb_font_get_h_extents =====

bool rive_hb_font_get_h_extents(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x90) + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar4;
  }
  iVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 0x20))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,uVar3);
  if (iVar2 != 0) {
    iVar1 = -*(int *)(param_1 + 0x44);
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar1 = *(int *)(param_1 + 0x44);
    }
    *param_2 = *param_2 + iVar1;
  }
  return iVar2 != 0;
}


// ===== 0050afe8  FUN_0050afe8 =====

bool FUN_0050afe8(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x90) + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar4;
  }
  iVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 0x20))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,uVar3);
  if (iVar2 != 0) {
    iVar1 = -*(int *)(param_1 + 0x44);
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar1 = *(int *)(param_1 + 0x44);
    }
    *param_2 = *param_2 + iVar1;
  }
  return iVar2 != 0;
}


// ===== 0050b064  rive_hb_font_get_v_extents =====

bool rive_hb_font_get_v_extents(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar5 + 8);
  }
  iVar1 = (**(code **)(*(long *)(param_1 + 0x90) + 0x28))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,uVar2);
  if (iVar1 != 0) {
    iVar3 = -*(int *)(param_1 + 0x40);
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar3 = *(int *)(param_1 + 0x40);
    }
    if (*(char *)(param_1 + 0x3c) == '\0') {
      iVar4 = *param_2;
    }
    else {
      iVar4 = iVar3;
      if (iVar3 < 0) {
        iVar4 = iVar3 + 1;
      }
      *param_2 = *param_2 + (iVar4 >> 1);
      iVar4 = (iVar4 >> 1) - iVar3;
      param_2 = param_2 + 1;
      iVar3 = *param_2;
    }
    *param_2 = iVar4 + iVar3;
  }
  return iVar1 != 0;
}


// ===== 0050b068  FUN_0050b068 =====

bool FUN_0050b068(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar5 + 8);
  }
  iVar1 = (**(code **)(*(long *)(param_1 + 0x90) + 0x28))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,uVar2);
  if (iVar1 != 0) {
    iVar3 = -*(int *)(param_1 + 0x40);
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar3 = *(int *)(param_1 + 0x40);
    }
    if (*(char *)(param_1 + 0x3c) == '\0') {
      iVar4 = *param_2;
    }
    else {
      iVar4 = iVar3;
      if (iVar3 < 0) {
        iVar4 = iVar3 + 1;
      }
      *param_2 = *param_2 + (iVar4 >> 1);
      iVar4 = (iVar4 >> 1) - iVar3;
      param_2 = param_2 + 1;
      iVar3 = *param_2;
    }
    *param_2 = iVar4 + iVar3;
  }
  return iVar1 != 0;
}


// ===== 0050b110  rive_hb_font_get_glyph =====

void rive_hb_font_get_glyph(long param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *param_4 = 0;
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0050b144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x30))();
    return;
  }
  if (*(long *)(lVar1 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0050b160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x40))(param_1,uVar2,param_2,param_3,param_4,uVar3);
  return;
}


// ===== 0050b164  rive_hb_font_get_nominal_glyph =====

void rive_hb_font_get_nominal_glyph(long param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x90);
  *param_3 = 0;
  lVar2 = *(long *)(lVar3 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x0050b194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x30))(param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,uVar1);
  return;
}


// ===== 0050b198  rive_hb_font_get_nominal_glyphs =====

void rive_hb_font_get_nominal_glyphs
               (long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x0050b1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x90) + 0x38))
            (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,param_5,param_6,uVar1);
  return;
}


// ===== 0050b1d0  rive_hb_font_get_variation_glyph =====

void rive_hb_font_get_variation_glyph
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *param_4 = 0;
  lVar3 = *(long *)(lVar4 + 0x10);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0050b204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x40))(param_1,uVar2,param_2,param_3,param_4,uVar1);
  return;
}


// ===== 0050b208  rive_hb_font_get_glyph_h_advance =====

ulong rive_hb_font_get_glyph_h_advance(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
  }
  uVar3 = (**(code **)(*(long *)(param_1 + 0x90) + 0x48))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,uVar4);
  iVar2 = *(int *)(param_1 + 0x40);
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar1 = -iVar2;
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar1 = iVar2;
    }
    iVar2 = 0;
    if ((int)uVar3 != 0) {
      iVar2 = iVar1;
    }
    uVar3 = (ulong)(uint)(iVar2 + (int)uVar3);
  }
  return uVar3;
}


// ===== 0050b20c  FUN_0050b20c =====

ulong FUN_0050b20c(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
  }
  uVar3 = (**(code **)(*(long *)(param_1 + 0x90) + 0x48))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,uVar4);
  iVar2 = *(int *)(param_1 + 0x40);
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar1 = -iVar2;
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar1 = iVar2;
    }
    iVar2 = 0;
    if ((int)uVar3 != 0) {
      iVar2 = iVar1;
    }
    uVar3 = (ulong)(uint)(iVar2 + (int)uVar3);
  }
  return uVar3;
}


// ===== 0050b27c  rive_hb_font_get_glyph_v_advance =====

ulong rive_hb_font_get_glyph_v_advance(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0x30);
  }
  uVar3 = (**(code **)(*(long *)(param_1 + 0x90) + 0x50))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,uVar4);
  iVar2 = *(int *)(param_1 + 0x44);
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar1 = -iVar2;
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar1 = iVar2;
    }
    iVar2 = 0;
    if ((int)uVar3 != 0) {
      iVar2 = iVar1;
    }
    uVar3 = (ulong)(uint)(iVar2 + (int)uVar3);
  }
  return uVar3;
}


// ===== 0050b280  FUN_0050b280 =====

ulong FUN_0050b280(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0x30);
  }
  uVar3 = (**(code **)(*(long *)(param_1 + 0x90) + 0x50))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,uVar4);
  iVar2 = *(int *)(param_1 + 0x44);
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar1 = -iVar2;
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar1 = iVar2;
    }
    iVar2 = 0;
    if ((int)uVar3 != 0) {
      iVar2 = iVar1;
    }
    uVar3 = (ulong)(uint)(iVar2 + (int)uVar3);
  }
  return uVar3;
}


// ===== 0050b2f0  rive_hb_font_get_glyph_h_advances =====

void rive_hb_font_get_glyph_h_advances
               (long param_1,int param_2,undefined8 param_3,undefined4 param_4,int *param_5,
               uint param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x38);
  }
  (**(code **)(*(long *)(param_1 + 0x90) + 0x58))
            (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,param_5,param_6,uVar3);
  iVar2 = *(int *)(param_1 + 0x40);
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar1 = -iVar2;
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar1 = iVar2;
    }
    if (param_2 != 0) {
      do {
        iVar2 = 0;
        if (*param_5 != 0) {
          iVar2 = iVar1;
        }
        param_2 = param_2 + -1;
        *param_5 = iVar2 + *param_5;
        param_5 = (int *)((long)param_5 + (ulong)param_6);
      } while (param_2 != 0);
    }
  }
  return;
}


// ===== 0050b2f4  FUN_0050b2f4 =====

void FUN_0050b2f4(long param_1,int param_2,undefined8 param_3,undefined4 param_4,int *param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x38);
  }
  (**(code **)(*(long *)(param_1 + 0x90) + 0x58))
            (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,param_5,param_6,uVar3);
  iVar2 = *(int *)(param_1 + 0x40);
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar1 = -iVar2;
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar1 = iVar2;
    }
    if (param_2 != 0) {
      do {
        iVar2 = 0;
        if (*param_5 != 0) {
          iVar2 = iVar1;
        }
        param_2 = param_2 + -1;
        *param_5 = iVar2 + *param_5;
        param_5 = (int *)((long)param_5 + (ulong)param_6);
      } while (param_2 != 0);
    }
  }
  return;
}


// ===== 0050b3a4  rive_hb_font_get_glyph_v_advances =====

void rive_hb_font_get_glyph_v_advances
               (long param_1,int param_2,undefined8 param_3,undefined4 param_4,int *param_5,
               uint param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
  }
  (**(code **)(*(long *)(param_1 + 0x90) + 0x60))
            (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,param_5,param_6,uVar3);
  iVar2 = *(int *)(param_1 + 0x44);
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar1 = -iVar2;
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar1 = iVar2;
    }
    if (param_2 != 0) {
      do {
        iVar2 = 0;
        if (*param_5 != 0) {
          iVar2 = iVar1;
        }
        param_2 = param_2 + -1;
        *param_5 = iVar2 + *param_5;
        param_5 = (int *)((long)param_5 + (ulong)param_6);
      } while (param_2 != 0);
    }
  }
  return;
}


// ===== 0050b3a8  FUN_0050b3a8 =====

void FUN_0050b3a8(long param_1,int param_2,undefined8 param_3,undefined4 param_4,int *param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
  }
  (**(code **)(*(long *)(param_1 + 0x90) + 0x60))
            (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,param_5,param_6,uVar3);
  iVar2 = *(int *)(param_1 + 0x44);
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar1 = -iVar2;
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar1 = iVar2;
    }
    if (param_2 != 0) {
      do {
        iVar2 = 0;
        if (*param_5 != 0) {
          iVar2 = iVar1;
        }
        param_2 = param_2 + -1;
        *param_5 = iVar2 + *param_5;
        param_5 = (int *)((long)param_5 + (ulong)param_6);
      } while (param_2 != 0);
    }
  }
  return;
}


// ===== 0050b458  rive_hb_font_get_glyph_h_origin =====

bool rive_hb_font_get_glyph_h_origin(long param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x90);
  *param_4 = 0;
  *param_3 = 0;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar5 + 0x48);
  }
  iVar2 = (**(code **)(lVar4 + 0x68))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,uVar3);
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar1 = -*(int *)(param_1 + 0x40);
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    *param_3 = *param_3 + iVar1;
    iVar1 = -*(int *)(param_1 + 0x44);
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar1 = *(int *)(param_1 + 0x44);
    }
    *param_4 = *param_4 + iVar1;
  }
  return iVar2 != 0;
}


// ===== 0050b45c  rive_hb_font_get_glyph_v_origin =====

bool rive_hb_font_get_glyph_v_origin(long param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x90);
  *param_4 = 0;
  *param_3 = 0;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar5 + 0x50);
  }
  iVar2 = (**(code **)(lVar4 + 0x70))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,uVar3);
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar1 = -*(int *)(param_1 + 0x40);
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    *param_3 = *param_3 + iVar1;
    iVar1 = -*(int *)(param_1 + 0x44);
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar1 = *(int *)(param_1 + 0x44);
    }
    *param_4 = *param_4 + iVar1;
  }
  return iVar2 != 0;
}


// ===== 0050b460  rive_hb_font_get_glyph_h_origins =====

bool rive_hb_font_get_glyph_h_origins
               (long param_1,int param_2,undefined8 param_3,undefined4 param_4,int *param_5,
               uint param_6,int *param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x58);
  }
  iVar4 = (**(code **)(*(long *)(param_1 + 0x90) + 0x78))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,param_5,param_6
                     ,param_7,param_8,lVar5);
  if (iVar4 != 0) {
    iVar1 = -*(int *)(param_1 + 0x40);
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    iVar2 = -*(int *)(param_1 + 0x44);
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar2 = *(int *)(param_1 + 0x44);
    }
    if (param_2 != 0) {
      cVar3 = *(char *)(param_1 + 0x3c);
      do {
        if (cVar3 == '\0') {
          *param_5 = *param_5 + iVar1;
          *param_7 = *param_7 + iVar2;
        }
        param_2 = param_2 + -1;
        param_5 = (int *)((long)param_5 + (ulong)param_6);
        param_7 = (int *)((long)param_7 + (ulong)param_8);
      } while (param_2 != 0);
    }
  }
  return iVar4 != 0;
}


// ===== 0050b464  rive_hb_font_get_glyph_v_origins =====

bool rive_hb_font_get_glyph_v_origins
               (long param_1,int param_2,undefined8 param_3,undefined4 param_4,int *param_5,
               uint param_6,int *param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
  }
  iVar4 = (**(code **)(*(long *)(param_1 + 0x90) + 0x80))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,param_5,param_6
                     ,param_7,param_8,lVar5);
  if ((*(char *)(param_1 + 0x30) != '\0') && (iVar4 != 0)) {
    iVar1 = -*(int *)(param_1 + 0x40);
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    iVar2 = -*(int *)(param_1 + 0x44);
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar2 = *(int *)(param_1 + 0x44);
    }
    if (param_2 != 0) {
      cVar3 = *(char *)(param_1 + 0x3c);
      do {
        if (cVar3 == '\0') {
          *param_5 = *param_5 + iVar1;
          *param_7 = *param_7 + iVar2;
        }
        param_2 = param_2 + -1;
        param_5 = (int *)((long)param_5 + (ulong)param_6);
        param_7 = (int *)((long)param_7 + (ulong)param_8);
      } while (param_2 != 0);
    }
  }
  return iVar4 != 0;
}


// ===== 0050b468  rive_hb_font_get_glyph_h_kerning =====

undefined8 rive_hb_font_get_glyph_h_kerning(void)

{
  return 0;
}


// ===== 0050b470  rive_hb_font_get_glyph_extents =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool rive_hb_font_get_glyph_extents(long param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  void *pvStack_68;
  ulong uStack_60;
  void *pvStack_58;
  undefined8 uStack_50;
  void *pvStack_48;
  long lStack_38;
  
  lVar4 = tpidr_el0;
  lStack_38 = *(long *)(lVar4 + 0x28);
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (*(char *)(param_1 + 0x30) == '\0') {
    lVar10 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar10 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar10 + 0x70);
    }
    iVar6 = (**(code **)(*(long *)(param_1 + 0x90) + 0x90))
                      (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,uVar7);
    if (iVar6 != 0) {
      bVar5 = true;
      goto LAB_0050b738;
    }
  }
  pvStack_58 = (void *)0x0;
  uStack_60 = 0;
  pvStack_48 = (void *)0x0;
  uStack_50 = 0;
  pvStack_68 = (void *)0x0;
  uStack_70 = 0;
  FUN_0050b77c(&uStack_70);
  uVar7 = FUN_0055f584();
  uVar8 = FUN_00508704(param_1,param_2,uVar7,&uStack_70,0,0);
  if ((uVar8 & 1) == 0) {
    uStack_78 = _UNK_0024e508;
    uStack_80 = _DAT_0024e500;
    uVar7 = FUN_00503d64();
    uVar8 = FUN_005087fc(param_1,param_2,uVar7,&uStack_80,1);
    if ((uVar8 & 1) != 0) {
      fVar11 = (float)uStack_80 + 0.5;
      fVar12 = uStack_80._4_4_ + 0.5;
      fVar13 = (float)uStack_78 + 0.5;
      fVar14 = uStack_78._4_4_ + 0.5;
      goto LAB_0050b584;
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar10 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar10 + 0x70);
    }
    iVar6 = (**(code **)(*(long *)(param_1 + 0x90) + 0x90))
                      (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,uVar7);
    if (iVar6 != 0) {
      fVar11 = *(float *)(param_1 + 0x4c);
      if (fVar11 != 0.0) {
        iVar2 = *param_3;
        fVar13 = fVar11 * (float)param_3[1];
        fVar11 = fVar11 * (float)(param_3[3] + param_3[1]);
        fVar12 = fVar13;
        if (fVar11 < fVar13) {
          fVar12 = fVar11;
        }
        if (fVar13 < fVar11 != (NAN(fVar13) || NAN(fVar11))) {
          fVar13 = fVar11;
        }
        iVar9 = (int)((float)(int)fVar12 + (float)iVar2);
        *param_3 = iVar9;
        param_3[2] = (int)((float)(int)fVar13 + (float)(param_3[2] + iVar2)) - iVar9;
      }
      iVar2 = *(int *)(param_1 + 0x40);
      iVar9 = *(int *)(param_1 + 0x44);
      if (iVar2 != 0 || iVar9 != 0) {
        cVar3 = *(char *)(param_1 + 0x3c);
        iVar1 = -iVar9;
        if (-1 < *(int *)(param_1 + 0x2c)) {
          iVar1 = iVar9;
        }
        iVar9 = -iVar2;
        if (-1 < *(int *)(param_1 + 0x28)) {
          iVar9 = iVar2;
        }
        param_3[1] = iVar1 + param_3[1];
        param_3[3] = param_3[3] - iVar1;
        if (cVar3 != '\0') {
          iVar2 = iVar9;
          if (iVar9 < 0) {
            iVar2 = iVar9 + 1;
          }
          *param_3 = *param_3 - (iVar2 >> 1);
        }
        param_3[2] = param_3[2] + iVar9;
      }
    }
    bVar5 = iVar6 != 0;
  }
  else {
    if (uStack_50._4_4_ == 0) {
      fVar11 = 0.5;
      fVar12 = 0.5;
      fVar13 = 0.5;
      fVar14 = 0.5;
      DAT_006870b0 = 0;
      DAT_006870b8 = 0;
      DAT_006870c0._0_4_ = 0;
    }
    else {
      uVar15 = *(undefined8 *)((long)pvStack_48 + (ulong)(uStack_50._4_4_ - 1U) * 0x14 + 0xc);
      uVar7 = *(undefined8 *)((long)pvStack_48 + (ulong)(uStack_50._4_4_ - 1U) * 0x14 + 4);
      fVar11 = (float)uVar7 + 0.5;
      fVar12 = (float)((ulong)uVar7 >> 0x20) + 0.5;
      fVar13 = (float)uVar15 + 0.5;
      fVar14 = (float)((ulong)uVar15 >> 0x20) + 0.5;
    }
LAB_0050b584:
    *(ulong *)param_3 = CONCAT44((int)fVar14,(int)fVar11);
    *(ulong *)(param_3 + 2) = CONCAT44((int)fVar12 - (int)fVar14,(int)fVar13 - (int)fVar11);
    bVar5 = true;
  }
  if ((int)uStack_50 - 1U < 0xfffffffe) {
    uStack_50 = uStack_50 & 0xffffffff;
    free(pvStack_48);
  }
  uStack_50 = 0;
  pvStack_48 = (void *)0x0;
  if ((int)uStack_60 - 1U < 0xfffffffe) {
    uStack_60 = uStack_60 & 0xffffffff;
    free(pvStack_58);
  }
  uStack_60 = 0;
  pvStack_58 = (void *)0x0;
  if ((int)uStack_70 - 1U < 0xfffffffe) {
    uStack_70 = uStack_70 & 0xffffffff;
    free(pvStack_68);
  }
LAB_0050b738:
  if (*(long *)(lVar4 + 0x28) == lStack_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050b474  FUN_0050b474 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0050b474(long param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  void *pvStack_68;
  ulong local_60;
  void *pvStack_58;
  undefined8 local_50;
  void *local_48;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (*(char *)(param_1 + 0x30) == '\0') {
    lVar10 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar10 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar10 + 0x70);
    }
    iVar6 = (**(code **)(*(long *)(param_1 + 0x90) + 0x90))
                      (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,uVar7);
    if (iVar6 != 0) {
      bVar5 = true;
      goto LAB_0050b738;
    }
  }
  pvStack_58 = (void *)0x0;
  local_60 = 0;
  local_48 = (void *)0x0;
  local_50 = 0;
  pvStack_68 = (void *)0x0;
  local_70 = 0;
  FUN_0050b77c(&local_70);
  uVar7 = FUN_0055f584();
  uVar8 = FUN_00508704(param_1,param_2,uVar7,&local_70,0,0);
  if ((uVar8 & 1) == 0) {
    uStack_78 = _UNK_0024e508;
    local_80 = _DAT_0024e500;
    uVar7 = FUN_00503d64();
    uVar8 = FUN_005087fc(param_1,param_2,uVar7,&local_80,1);
    if ((uVar8 & 1) != 0) {
      fVar11 = (float)local_80 + 0.5;
      fVar12 = local_80._4_4_ + 0.5;
      fVar13 = (float)uStack_78 + 0.5;
      fVar14 = uStack_78._4_4_ + 0.5;
      goto LAB_0050b584;
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar10 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar10 + 0x70);
    }
    iVar6 = (**(code **)(*(long *)(param_1 + 0x90) + 0x90))
                      (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,uVar7);
    if (iVar6 != 0) {
      fVar11 = *(float *)(param_1 + 0x4c);
      if (fVar11 != 0.0) {
        iVar2 = *param_3;
        fVar13 = fVar11 * (float)param_3[1];
        fVar11 = fVar11 * (float)(param_3[3] + param_3[1]);
        fVar12 = fVar13;
        if (fVar11 < fVar13) {
          fVar12 = fVar11;
        }
        if (fVar13 < fVar11 != (NAN(fVar13) || NAN(fVar11))) {
          fVar13 = fVar11;
        }
        iVar9 = (int)((float)(int)fVar12 + (float)iVar2);
        *param_3 = iVar9;
        param_3[2] = (int)((float)(int)fVar13 + (float)(param_3[2] + iVar2)) - iVar9;
      }
      iVar2 = *(int *)(param_1 + 0x40);
      iVar9 = *(int *)(param_1 + 0x44);
      if (iVar2 != 0 || iVar9 != 0) {
        cVar3 = *(char *)(param_1 + 0x3c);
        iVar1 = -iVar9;
        if (-1 < *(int *)(param_1 + 0x2c)) {
          iVar1 = iVar9;
        }
        iVar9 = -iVar2;
        if (-1 < *(int *)(param_1 + 0x28)) {
          iVar9 = iVar2;
        }
        param_3[1] = iVar1 + param_3[1];
        param_3[3] = param_3[3] - iVar1;
        if (cVar3 != '\0') {
          iVar2 = iVar9;
          if (iVar9 < 0) {
            iVar2 = iVar9 + 1;
          }
          *param_3 = *param_3 - (iVar2 >> 1);
        }
        param_3[2] = param_3[2] + iVar9;
      }
    }
    bVar5 = iVar6 != 0;
  }
  else {
    if (local_50._4_4_ == 0) {
      fVar11 = 0.5;
      fVar12 = 0.5;
      fVar13 = 0.5;
      fVar14 = 0.5;
      DAT_006870b0 = 0;
      DAT_006870b8 = 0;
      DAT_006870c0._0_4_ = 0;
    }
    else {
      uVar15 = *(undefined8 *)((long)local_48 + (ulong)(local_50._4_4_ - 1U) * 0x14 + 0xc);
      uVar7 = *(undefined8 *)((long)local_48 + (ulong)(local_50._4_4_ - 1U) * 0x14 + 4);
      fVar11 = (float)uVar7 + 0.5;
      fVar12 = (float)((ulong)uVar7 >> 0x20) + 0.5;
      fVar13 = (float)uVar15 + 0.5;
      fVar14 = (float)((ulong)uVar15 >> 0x20) + 0.5;
    }
LAB_0050b584:
    *(ulong *)param_3 = CONCAT44((int)fVar14,(int)fVar11);
    *(ulong *)(param_3 + 2) = CONCAT44((int)fVar12 - (int)fVar14,(int)fVar13 - (int)fVar11);
    bVar5 = true;
  }
  if ((int)local_50 - 1U < 0xfffffffe) {
    local_50 = local_50 & 0xffffffff;
    free(local_48);
  }
  local_50 = 0;
  local_48 = (void *)0x0;
  if ((int)local_60 - 1U < 0xfffffffe) {
    local_60 = local_60 & 0xffffffff;
    free(pvStack_58);
  }
  local_60 = 0;
  pvStack_58 = (void *)0x0;
  if ((int)local_70 - 1U < 0xfffffffe) {
    local_70 = local_70 & 0xffffffff;
    free(pvStack_68);
  }
LAB_0050b738:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050b77c  FUN_0050b77c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050b77c(int *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_0050ba48(param_1,0);
  if ((uVar5 & 1) != 0) {
    param_1[1] = 0;
  }
  uVar5 = FUN_0050b908(param_1 + 4,0);
  if ((uVar5 & 1) != 0) {
    param_1[5] = 0;
  }
  uVar5 = FUN_0050b908(param_1 + 8,0);
  if ((uVar5 & 1) != 0) {
    param_1[9] = 0;
  }
  uVar1 = param_1[1];
  if (*param_1 <= (int)uVar1) {
    uVar5 = FUN_0050ba48(param_1,uVar1 + 1);
    if ((uVar5 & 1) == 0) {
      DAT_006870b0 = 0;
      DAT_006870b8 = 0;
      DAT_006870c0 = 0;
      goto LAB_0050b818;
    }
    uVar1 = param_1[1];
  }
  uVar4 = _UNK_0024e5b8;
  uVar3 = _DAT_0024e5b0;
  puVar6 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x18);
  param_1[1] = uVar1 + 1;
  puVar6[1] = uVar4;
  *puVar6 = uVar3;
  puVar6[2] = 0;
LAB_0050b818:
  uVar4 = _UNK_0024e508;
  uVar3 = _DAT_0024e500;
  local_3c = 0;
  uStack_30 = _UNK_0024e508;
  local_38 = _DAT_0024e500;
  FUN_0050b88c(param_1 + 4,&local_3c);
  local_3c = 2;
  uStack_30 = uVar4;
  local_38 = uVar3;
  FUN_0050b88c(param_1 + 8,&local_3c);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050b88c  FUN_0050b88c =====

void FUN_0050b88c(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[1];
  if (*param_1 <= (int)uVar1) {
    uVar2 = FUN_0050b908(param_1,uVar1 + 1);
    if ((uVar2 & 1) == 0) {
      DAT_006870b0 = 0;
      DAT_006870b8 = 0;
      DAT_006870c0._0_4_ = 0;
      return;
    }
    uVar1 = param_1[1];
  }
  param_1[1] = uVar1 + 1;
  puVar3 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x14);
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 2);
  puVar3[1] = uVar5;
  *puVar3 = uVar4;
  return;
}


// ===== 0050b908  FUN_0050b908 =====

undefined8 FUN_0050b908(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  if ((int)uVar3 < 0) {
    return 0;
  }
  uVar4 = uVar3;
  if (param_2 <= uVar3) {
    return 1;
  }
  do {
    uVar4 = uVar4 + (uVar4 >> 1) + 8;
  } while (uVar4 < param_2);
  if (uVar4 < 0xccccccd) {
    lVar1 = FUN_0050b9a4(param_1,uVar4);
    if (lVar1 != 0) {
      *(long *)(param_1 + 2) = lVar1;
      uVar2 = 1;
      goto LAB_0050b974;
    }
    uVar3 = *param_1;
    if (uVar4 <= uVar3) {
      return 1;
    }
  }
  uVar2 = 0;
  uVar4 = ~uVar3;
LAB_0050b974:
  *param_1 = uVar4;
  return uVar2;
}


// ===== 0050b9a4  FUN_0050b9a4 =====

void * FUN_0050b9a4(int *param_1,uint param_2)

{
  void *pvVar1;
  void *__src;
  
  if (param_2 == 0) {
    if (*param_1 - 1U < 0xfffffffe) {
      free(*(void **)(param_1 + 2));
    }
    pvVar1 = (void *)0x0;
  }
  else {
    __src = *(void **)(param_1 + 2);
    if ((*param_1 != 0) || (__src == (void *)0x0)) {
      pvVar1 = realloc(__src,(ulong)param_2 * 0x14);
      return pvVar1;
    }
    pvVar1 = malloc((ulong)param_2 * 0x14);
    if ((pvVar1 != (void *)0x0) && (param_1[1] != 0)) {
      memcpy(pvVar1,__src,(ulong)(uint)param_1[1] * 0x14);
    }
  }
  return pvVar1;
}


// ===== 0050ba48  FUN_0050ba48 =====

undefined8 FUN_0050ba48(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  if ((int)uVar3 < 0) {
    return 0;
  }
  uVar4 = uVar3;
  if (param_2 <= uVar3) {
    return 1;
  }
  do {
    uVar4 = uVar4 + (uVar4 >> 1) + 8;
  } while (uVar4 < param_2);
  if (uVar4 < 0xaaaaaab) {
    lVar1 = FUN_0050bae4(param_1,uVar4);
    if (lVar1 != 0) {
      *(long *)(param_1 + 2) = lVar1;
      uVar2 = 1;
      goto LAB_0050bab4;
    }
    uVar3 = *param_1;
    if (uVar4 <= uVar3) {
      return 1;
    }
  }
  uVar2 = 0;
  uVar4 = ~uVar3;
LAB_0050bab4:
  *param_1 = uVar4;
  return uVar2;
}


// ===== 0050bae4  FUN_0050bae4 =====

void * FUN_0050bae4(int *param_1,uint param_2)

{
  void *pvVar1;
  void *__src;
  
  if (param_2 == 0) {
    if (*param_1 - 1U < 0xfffffffe) {
      free(*(void **)(param_1 + 2));
    }
    pvVar1 = (void *)0x0;
  }
  else {
    __src = *(void **)(param_1 + 2);
    if ((*param_1 != 0) || (__src == (void *)0x0)) {
      pvVar1 = realloc(__src,(ulong)param_2 * 0x18);
      return pvVar1;
    }
    pvVar1 = malloc((ulong)param_2 * 0x18);
    if ((pvVar1 != (void *)0x0) && (param_1[1] != 0)) {
      memcpy(pvVar1,__src,(ulong)(uint)param_1[1] * 0x18);
    }
  }
  return pvVar1;
}


// ===== 0050bb88  rive_hb_font_get_glyph_contour_point =====

bool rive_hb_font_get_glyph_contour_point
               (long param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x90);
  *param_5 = 0;
  *param_4 = 0;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar5 + 0x78);
  }
  iVar2 = (**(code **)(lVar4 + 0x98))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,param_5,uVar3);
  if (iVar2 != 0) {
    if (*(float *)(param_1 + 0x4c) != 0.0) {
      *param_4 = (int)((float)(int)(*(float *)(param_1 + 0x4c) * (float)*param_5 + 0.5) +
                      (float)*param_4);
    }
    if (*(char *)(param_1 + 0x3c) == '\0') {
      iVar1 = -*(int *)(param_1 + 0x40);
      if (-1 < *(int *)(param_1 + 0x28)) {
        iVar1 = *(int *)(param_1 + 0x40);
      }
      *param_4 = *param_4 + iVar1;
    }
  }
  return iVar2 != 0;
}


// ===== 0050bb8c  FUN_0050bb8c =====

bool FUN_0050bb8c(long param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x90);
  *param_5 = 0;
  *param_4 = 0;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar5 + 0x78);
  }
  iVar2 = (**(code **)(lVar4 + 0x98))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,param_5,uVar3);
  if (iVar2 != 0) {
    if (*(float *)(param_1 + 0x4c) != 0.0) {
      *param_4 = (int)((float)(int)(*(float *)(param_1 + 0x4c) * (float)*param_5 + 0.5) +
                      (float)*param_4);
    }
    if (*(char *)(param_1 + 0x3c) == '\0') {
      iVar1 = -*(int *)(param_1 + 0x40);
      if (-1 < *(int *)(param_1 + 0x28)) {
        iVar1 = *(int *)(param_1 + 0x40);
      }
      *param_4 = *param_4 + iVar1;
    }
  }
  return iVar2 != 0;
}


// ===== 0050bc64  rive_hb_font_get_glyph_name =====

void rive_hb_font_get_glyph_name(long param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (param_4 != 0) {
    *param_3 = 0;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 0x90) + 0xa0);
  if (*(long *)(*(long *)(param_1 + 0x90) + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0050bc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0050bc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,0);
  return;
}


// ===== 0050bc98  rive_hb_font_get_glyph_from_name =====

void rive_hb_font_get_glyph_from_name(long param_1,char *param_2,uint param_3,undefined4 *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  
  sVar1 = (size_t)param_3;
  *param_4 = 0;
  if (param_3 == 0xffffffff) {
    sVar1 = strlen(param_2);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x88);
  }
                    /* WARNING: Could not recover jumptable at 0x00509434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x90) + 0xa8))
            (param_1,*(undefined8 *)(param_1 + 0x98),param_2,sVar1,param_4,uVar2);
  return;
}


// ===== 0050bc9c  rive_hb_font_draw_glyph_or_fail =====

uint rive_hb_font_draw_glyph_or_fail(void)

{
  uint uVar1;
  
  uVar1 = FUN_005087fc();
  return uVar1 & 1;
}


// ===== 0050bcb8  rive_hb_font_paint_glyph_or_fail =====

uint rive_hb_font_paint_glyph_or_fail(void)

{
  uint uVar1;
  
  uVar1 = FUN_00508704();
  return uVar1 & 1;
}


// ===== 0050bcd0  rive_hb_font_draw_glyph =====

void rive_hb_font_draw_glyph(void)

{
  FUN_005087fc();
  return;
}


// ===== 0050bcd8  rive_hb_font_paint_glyph =====

void rive_hb_font_paint_glyph
               (undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00508704();
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (*(long *)(param_3 + 0x80) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x80) + 0x18);
  }
  (**(code **)(param_3 + 0x28))(param_3,param_4,param_2,param_1,uVar2);
  if (*(long *)(param_3 + 0x80) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x80) + 0x30);
  }
  (**(code **)(param_3 + 0x40))(param_3,param_4,1,param_6,uVar2);
  if (*(long *)(param_3 + 0x80) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x80) + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x0050bda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x38))(param_3,param_4,uVar2);
  return;
}


// ===== 0050bda8  rive_hb_font_get_extents_for_direction =====

void rive_hb_font_get_extents_for_direction(long param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 & 0xfffffffe) == 4) {
    FUN_0050be14(param_1,param_3);
    return;
  }
  iVar2 = FUN_0050b068(param_1,param_3);
  if (iVar2 == 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    param_3[2] = 0;
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = iVar1 + 1;
    }
    *param_3 = iVar2 >> 1;
    param_3[1] = (iVar2 >> 1) - iVar1;
  }
  return;
}


// ===== 0050be14  FUN_0050be14 =====

void FUN_0050be14(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0050afe8();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    param_2[2] = 0;
    iVar2 = (int)((double)iVar1 * DAT_0024e950);
    *param_2 = iVar2;
    param_2[1] = iVar2 - iVar1;
  }
  return;
}


// ===== 0050be60  rive_hb_font_get_glyph_advance_for_direction =====

void rive_hb_font_get_glyph_advance_for_direction
               (undefined8 param_1,undefined8 param_2,uint param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  undefined4 uVar1;
  
  *param_5 = 0;
  *param_4 = 0;
  if ((param_3 & 0xfffffffe) == 4) {
    uVar1 = FUN_0050b20c();
    *param_4 = uVar1;
  }
  else {
    uVar1 = FUN_0050b280();
    *param_5 = uVar1;
  }
  return;
}


// ===== 0050bea8  rive_hb_font_get_glyph_advances_for_direction =====

void rive_hb_font_get_glyph_advances_for_direction
               (undefined8 param_1,uint param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  if ((param_2 & 0xfffffffe) == 4) {
    FUN_0050b2f4();
    return;
  }
  FUN_0050b3a8(param_1,param_3,param_4,param_5,param_6,param_7);
  return;
}


// ===== 0050bed4  rive_hb_font_get_glyph_origin_for_direction =====

void rive_hb_font_get_glyph_origin_for_direction
               (undefined8 param_1,undefined4 param_2,uint param_3,int *param_4,int *param_5)

{
  long lVar1;
  int iVar2;
  int aiStack_78 [12];
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 & 0xfffffffe) == 4) {
    iVar2 = FUN_00509728(param_1,param_2,param_4,param_5);
    if ((iVar2 == 0) && (iVar2 = FUN_00509670(param_1,param_2,param_4,param_5), iVar2 != 0)) {
      iVar2 = FUN_0050b20c(param_1,param_2);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      FUN_0050be14(param_1,aiStack_78);
      *param_4 = *param_4 - (iVar2 >> 1);
      *param_5 = *param_5 - aiStack_78[0];
    }
    if (*(long *)(lVar1 + 0x28) == lStack_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lStack_48) {
    FUN_0050bfe8(param_1,param_2,param_4,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050bed8  FUN_0050bed8 =====

void FUN_0050bed8(undefined8 param_1,undefined4 param_2,uint param_3,int *param_4,int *param_5)

{
  long lVar1;
  int iVar2;
  int local_78 [12];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 & 0xfffffffe) == 4) {
    iVar2 = FUN_00509728(param_1,param_2,param_4,param_5);
    if ((iVar2 == 0) && (iVar2 = FUN_00509670(param_1,param_2,param_4,param_5), iVar2 != 0)) {
      iVar2 = FUN_0050b20c(param_1,param_2);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      FUN_0050be14(param_1,local_78);
      *param_4 = *param_4 - (iVar2 >> 1);
      *param_5 = *param_5 - local_78[0];
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
    FUN_0050bfe8(param_1,param_2,param_4,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050bfe8  FUN_0050bfe8 =====

void FUN_0050bfe8(undefined8 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  int local_78 [12];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00509670();
  if ((iVar2 == 0) && (iVar2 = FUN_00509728(param_1,param_2,param_3,param_4), iVar2 != 0)) {
    iVar2 = FUN_0050b20c(param_1,param_2);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    FUN_0050be14(param_1,local_78);
    *param_3 = *param_3 + (iVar2 >> 1);
    *param_4 = *param_4 + local_78[0];
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050c0a4  rive_hb_font_add_glyph_origin_for_direction =====

void rive_hb_font_add_glyph_origin_for_direction(void)

{
  long lVar1;
  int *in_x3;
  int *in_x4;
  long lVar2;
  undefined4 local_40;
  undefined4 local_3c;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0050bed8();
  *in_x3 = *in_x3 + local_3c;
  *in_x4 = *in_x4 + local_40;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050c120  rive_hb_font_subtract_glyph_origin_for_direction =====

void rive_hb_font_subtract_glyph_origin_for_direction(void)

{
  long lVar1;
  int *in_x3;
  int *in_x4;
  long lVar2;
  undefined4 local_40;
  undefined4 local_3c;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0050bed8();
  *in_x3 = *in_x3 - local_3c;
  *in_x4 = *in_x4 - local_40;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050c19c  rive_hb_font_get_glyph_kerning_for_direction =====

void rive_hb_font_get_glyph_kerning_for_direction(void)

{
  undefined4 *puVar1;
  uint in_w3;
  undefined4 *in_x4;
  undefined4 *in_x5;
  
  puVar1 = in_x4;
  if ((in_w3 & 0xfffffffe) != 4) {
    puVar1 = in_x5;
    in_x5 = in_x4;
  }
  *in_x5 = 0;
  *puVar1 = 0;
  return;
}


// ===== 0050c1b8  rive_hb_font_get_glyph_extents_for_origin =====

int rive_hb_font_get_glyph_extents_for_origin
              (undefined8 param_1,ulong param_2,undefined4 param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  int local_50;
  int iStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_0050b474(param_1,param_2,param_4);
  if (iVar2 != 0) {
    FUN_0050bed8(param_1,param_2 & 0xffffffff,param_3,&iStack_4c,&local_50);
    *param_4 = *param_4 - iStack_4c;
    param_4[1] = param_4[1] - local_50;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050c258  rive_hb_font_get_glyph_contour_point_for_origin =====

int rive_hb_font_get_glyph_contour_point_for_origin
              (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
              int *param_5,int *param_6)

{
  long lVar1;
  int iVar2;
  int iStack_60;
  int iStack_5c;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_0050bb8c();
  if (iVar2 != 0) {
    FUN_0050bed8(param_1,param_2,param_4,&iStack_5c,&iStack_60);
    *param_5 = *param_5 - iStack_5c;
    *param_6 = *param_6 - iStack_60;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050c25c  FUN_0050c25c =====

int FUN_0050c25c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                int *param_5,int *param_6)

{
  long lVar1;
  int iVar2;
  int local_60;
  int local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_0050bb8c();
  if (iVar2 != 0) {
    FUN_0050bed8(param_1,param_2,param_4,&local_5c,&local_60);
    *param_5 = *param_5 - local_5c;
    *param_6 = *param_6 - local_60;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050c318  rive_hb_font_glyph_to_string =====

void rive_hb_font_glyph_to_string(long param_1,uint param_2,char *param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_4 != 0) {
    *param_3 = '\0';
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x80);
  }
  iVar1 = (**(code **)(*(long *)(param_1 + 0x90) + 0xa0))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,uVar2);
  if (((param_4 != 0) && (iVar1 == 0)) &&
     (iVar1 = snprintf(param_3,(ulong)param_4,"gid%u",(ulong)param_2), iVar1 < 0)) {
    *param_3 = '\0';
  }
  return;
}


// ===== 0050c3a0  rive_hb_font_glyph_from_string =====

void rive_hb_font_glyph_from_string(long param_1,char *param_2,ulong param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  size_t sVar6;
  char *local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  sVar6 = param_3 & 0xffffffff;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_005093c8();
  if (iVar2 == 0) {
    if ((int)param_3 == -1) {
      sVar6 = strlen(param_2);
    }
    local_58 = param_2;
    uVar3 = FUN_0050dca0(&local_58,param_2 + (sVar6 & 0xffffffff),&local_4c,10);
    if ((uVar3 & 1) == 0) {
      if (3 < (int)sVar6) {
        iVar2 = strncmp(param_2,"gid",3);
        if (iVar2 == 0) {
          local_58 = param_2 + 3;
          uVar3 = FUN_0050dca0(&local_58,local_58 + ((sVar6 & 0xffffffff) - 3),&local_4c,10);
          if ((uVar3 & 1) != 0) goto LAB_0050c40c;
        }
        iVar2 = strncmp(param_2,"uni",3);
        if (iVar2 == 0) {
          local_58 = param_2 + 3;
          uVar3 = FUN_0050dca0(&local_58,local_58 + ((sVar6 & 0xffffffff) - 3),&local_4c,0x10);
          if ((uVar3 & 1) != 0) {
            *param_4 = 0;
            lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
            if (lVar5 == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined8 *)(lVar5 + 0x10);
            }
            iVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 0x30))
                              (param_1,*(undefined8 *)(param_1 + 0x98),local_4c,param_4,uVar4);
            if (iVar2 != 0) goto LAB_0050c414;
          }
        }
      }
      uVar4 = 0;
      goto LAB_0050c418;
    }
LAB_0050c40c:
    *param_4 = local_4c;
  }
LAB_0050c414:
  uVar4 = 1;
LAB_0050c418:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 0050c50c  rive_hb_font_create =====

long rive_hb_font_create(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0050c584();
  rive_hb_font_set_funcs_using(lVar2,0);
  if (param_1 != 0) {
    if (0xffff < *(uint *)(param_1 + 0x10)) {
      if ((*(byte *)(lVar2 + 4) & 1) == 0) {
        return lVar2;
      }
      iVar1 = (*(uint *)(param_1 + 0x10) >> 0x10) - 1;
      if (*(int *)(lVar2 + 0x74) == iVar1) {
        return lVar2;
      }
      *(int *)(lVar2 + 0x74) = iVar1;
    }
    rive_hb_font_set_variations(lVar2,0,0);
  }
  return lVar2;
}


// ===== 0050c584  FUN_0050c584 =====

undefined4 * FUN_0050c584(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)&DAT_00686440;
  }
  puVar2 = (undefined4 *)calloc(1,0xb8);
  puVar3 = (undefined4 *)&DAT_006865a8;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
    *(undefined1 *)(puVar2 + 1) = 1;
    *(undefined8 *)(puVar2 + 2) = 0;
    if ((*(byte *)(param_1 + 1) & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    *(undefined **)(puVar2 + 6) = &DAT_006865a8;
    if (*param_1 != 0) {
      FUN_00340fe0(1,param_1);
    }
    *(int **)(puVar2 + 8) = param_1;
    *(undefined **)(puVar2 + 0x24) = &DAT_00686380;
    *(undefined4 **)(puVar2 + 0x2a) = puVar2;
    iVar1 = param_1[5];
    if (iVar1 == 0) {
      iVar1 = FUN_00564f7c(param_1);
    }
    uVar4 = NEON_fmov(0x3f800000,4);
    puVar2[10] = iVar1;
    puVar2[0xb] = iVar1;
    *(undefined1 *)(puVar2 + 0xf) = 1;
    puVar2[0x1d] = 0xffffffff;
    *(undefined8 *)(puVar2 + 0x14) = uVar4;
    *(undefined8 *)(puVar2 + 0x18) = 0x10000;
    *(undefined8 *)(puVar2 + 0x16) = 0x10000;
    puVar3 = puVar2;
  }
  return puVar3;
}


// ===== 0050c66c  rive_hb_font_set_funcs_using =====

bool rive_hb_font_set_funcs_using(long param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  char *__s2;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return false;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_2 = DAT_00687060;
    if (DAT_00687060 == (char *)0x0) {
      param_2 = "";
      lVar4 = FUN_003410d0(0,&DAT_00243399,&DAT_00687060);
      if (lVar4 != 0) {
        bVar2 = true;
        param_2 = DAT_00687060;
        if (DAT_00687060 == (char *)0x0) {
          __s2 = (char *)0x0;
          goto LAB_0050c6f8;
        }
        goto LAB_0050c6dc;
      }
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
LAB_0050c6dc:
  __s2 = (char *)0x0;
  if (*param_2 != '\0') {
    __s2 = param_2;
  }
LAB_0050c6f8:
  do {
    while (bVar1 = bVar2, __s2 != (char *)0x0) {
      iVar3 = strcmp("ot",__s2);
      if (iVar3 == 0) {
        rive_hb_ot_font_set_funcs(param_1);
        return true;
      }
      __s2 = (char *)0x0;
      bVar2 = false;
      if (!bVar1) {
        return false;
      }
    }
    rive_hb_ot_font_set_funcs(param_1);
    if (*(undefined **)(param_1 + 0x90) != &DAT_00686380) break;
    __s2 = (char *)0x0;
    bVar2 = false;
  } while (bVar1);
  return *(undefined **)(param_1 + 0x90) != &DAT_00686380;
}


// ===== 0050c78c  rive_hb_font_set_variations =====

void rive_hb_font_set_variations(long param_1,long param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  void *__ptr;
  uint *__ptr_00;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong __nmemb;
  uint uVar12;
  uint local_5c;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    lVar7 = FUN_0050c97c(*(long *)(param_1 + 0x20) + 200);
    puVar1 = &DAT_0025d4b0;
    if (0xf < *(uint *)(lVar7 + 0x18)) {
      puVar1 = *(undefined4 **)(lVar7 + 0x10);
    }
    uVar4 = (uint)(*(ushort *)(puVar1 + 1) >> 8) | (*(ushort *)(puVar1 + 1) & 0xff00ff) << 8;
    uVar5 = (uint)(*(ushort *)(puVar1 + 2) >> 8) | (*(ushort *)(puVar1 + 2) & 0xff00ff) << 8;
    __nmemb = (ulong)uVar5;
    puVar2 = &DAT_0025d4b0;
    if (uVar4 != 0) {
      puVar2 = (undefined4 *)((long)puVar1 + (ulong)uVar4);
    }
    if (uVar5 == 0) {
      __ptr = (void *)0x0;
      __ptr_00 = (uint *)0x0;
    }
    else {
      __ptr = calloc(__nmemb,4);
      __ptr_00 = (uint *)calloc(__nmemb,4);
      if (__ptr == (void *)0x0 || __ptr_00 == (uint *)0x0) {
        free(__ptr);
        if (*(long *)(lVar6 + 0x28) == local_58) {
          free(__ptr_00);
          return;
        }
        goto LAB_0050c978;
      }
      lVar8 = 0;
      lVar7 = (long)puVar2 + 0xb;
      do {
        puVar10 = (uint *)(lVar7 + -3);
        lVar7 = lVar7 + 0x14;
        uVar4 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
        *(float *)((long)__ptr_00 + lVar8) = (float)(int)(uVar4 >> 0x10 | uVar4 << 0x10) / 65536.0;
        lVar8 = lVar8 + 4;
      } while (__nmemb * 4 - lVar8 != 0);
    }
    if (*(int *)(param_1 + 0x74) != -1) {
      local_5c = uVar5;
      rive_hb_ot_var_named_instance_get_design_coords
                (*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x74),&local_5c,__ptr_00);
    }
    if (param_3 != 0) {
      uVar9 = 0;
      do {
        if (uVar5 != 0) {
          puVar10 = (uint *)(param_2 + uVar9 * 8);
          uVar4 = *puVar10;
          uVar12 = puVar10[1];
          lVar7 = (long)puVar2 + 3;
          puVar10 = __ptr_00;
          uVar11 = __nmemb;
          do {
            uVar3 = (*(uint *)(lVar7 + -3) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar7 + -3) & 0xff00ff) << 8;
            if ((uVar3 >> 0x10 | uVar3 << 0x10) == uVar4) {
              *puVar10 = uVar12;
            }
            uVar11 = uVar11 - 1;
            lVar7 = lVar7 + 0x14;
            puVar10 = puVar10 + 1;
          } while (uVar11 != 0);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != param_3);
    }
    rive_hb_ot_var_normalize_coords(*(undefined8 *)(param_1 + 0x20),uVar5,__ptr_00,__ptr);
    FUN_0050ca20(param_1,__ptr,__ptr_00,uVar5);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_0050c978:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050c97c  FUN_0050c97c =====

undefined4 * FUN_0050c97c(long *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 == (undefined4 *)0x0) {
    do {
      if (param_1[-0xd] == 0) {
        return &DAT_0025d4b0;
      }
      puVar2 = (undefined4 *)FUN_0050cbe0();
      if (puVar2 == (undefined4 *)0x0) {
        lVar1 = FUN_003410d0(0,&DAT_0025d4b0,param_1);
        if (lVar1 == 0) {
          return &DAT_0025d4b0;
        }
      }
      else {
        lVar1 = FUN_003410d0(0,puVar2,param_1);
        if (lVar1 == 0) {
          return puVar2;
        }
        if (puVar2 != &DAT_0025d4b0) {
          rive_hb_blob_destroy(puVar2);
        }
      }
      puVar2 = (undefined4 *)*param_1;
    } while (puVar2 == (undefined4 *)0x0);
  }
  return puVar2;
}


// ===== 0050ca20  FUN_0050ca20 =====

void FUN_0050ca20(long param_1,int *param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  
  free(*(void **)(param_1 + 0x80));
  free(*(void **)(param_1 + 0x88));
  *(int **)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x88) = param_3;
  *(int *)(param_1 + 0x7c) = param_4;
  if (param_4 == 0) {
    bVar1 = false;
  }
  else {
    do {
      bVar1 = *param_2 != 0;
      if (*param_2 != 0) break;
      param_4 = param_4 + -1;
      param_2 = param_2 + 1;
    } while (param_4 != 0);
  }
  *(bool *)(param_1 + 0x78) = bVar1;
  FUN_0050caac(param_1);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ===== 0050caac  FUN_0050caac =====

void FUN_0050caac(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined4 *__ptr;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  ulong uVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 0x14);
  if (uVar3 == 0) {
    uVar3 = FUN_00564f7c(*(long *)(param_1 + 0x20));
  }
  uVar8 = *(ulong *)(param_1 + 0x28);
  fVar12 = (float)uVar3;
  iVar5 = (int)uVar8;
  lVar1 = (uVar8 & 0xffffffff) << 0x10;
  if (iVar5 < 0) {
    lVar1 = (ulong)(uint)-iVar5 * -0x10000;
  }
  uVar3 = (uint)(uVar8 >> 0x20);
  lVar2 = (ulong)uVar3 << 0x10;
  if ((long)uVar8 < 0) {
    lVar2 = (ulong)-uVar3 * -0x10000;
  }
  uVar11 = NEON_scvtf(uVar8,4);
  fVar7 = (float)((ulong)uVar11 >> 0x20);
  fVar13 = (float)*(undefined8 *)(param_1 + 0x34);
  *(long *)(param_1 + 0x58) = (long)((float)lVar1 / fVar12);
  *(long *)(param_1 + 0x60) = (long)((float)lVar2 / fVar12);
  bVar4 = true;
  *(ulong *)(param_1 + 0x50) = CONCAT44(fVar7 / fVar12,(float)uVar11 / fVar12);
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
  if ((fVar13 == 0.0) && (fVar12 == 0.0)) {
    bVar4 = *(float *)(param_1 + 0x48) != 0.0;
  }
  uVar6 = MP_INT_ABS(iVar5);
  uVar10 = MP_INT_ABS(uVar3);
  *(bool *)(param_1 + 0x30) = bVar4;
  uVar9 = NEON_scvtf(CONCAT44(uVar10,uVar6),4);
  *(ulong *)(param_1 + 0x40) =
       CONCAT44((int)(float)(int)(fVar12 * (float)((ulong)uVar9 >> 0x20) + 0.5),
                (int)(float)(int)(fVar13 * (float)uVar9 + 0.5));
  if (uVar3 == 0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (*(float *)(param_1 + 0x48) * (float)uVar11) / fVar7;
  }
  *(float *)(param_1 + 0x4c) = fVar7;
  __ptr = *(undefined4 **)(param_1 + 0xb0);
  if ((__ptr != (undefined4 *)0x0) && (__ptr != &DAT_0025d4b0)) {
    free(__ptr);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_00340fe0(1,param_1 + 0x10);
  return;
}


// ===== 0050cbe0  FUN_0050cbe0 =====

int * FUN_0050cbe0(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar8 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x66766172,*(undefined8 *)(param_1 + 0x28)),
     piVar8 == (int *)0x0)) {
    piVar8 = &DAT_0025d4b0;
  }
  if (*piVar8 != 0) {
    FUN_00340fe0(1,piVar8);
  }
  uVar2 = piVar8[6];
  puVar9 = *(ushort **)(piVar8 + 4);
  uVar10 = 0x3fffffff;
  if (uVar2 >> 0x1a == 0) {
    uVar10 = uVar2 << 6;
    if (uVar10 < 0x4001) {
      uVar10 = 0x4000;
    }
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
  }
  if (puVar9 == (ushort *)0x0) {
    rive_hb_blob_destroy(piVar8);
    return piVar8;
  }
  if ((((3 < uVar2) && (((uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8) == 1)) && (0xf < uVar2))
     && (((uint)(puVar9[5] >> 8) | (puVar9[5] & 0xff00ff) << 8) == 0x14)) {
    bVar3 = (byte)puVar9[4];
    bVar4 = *(byte *)((long)puVar9 + 9);
    uVar5 = (uint)(puVar9[7] >> 8) | (puVar9[7] & 0xff00ff) << 8;
    if (((uint)bVar3 << 10 | (uint)bVar4 << 2) + 4 <= uVar5) {
      uVar6 = (uint)(puVar9[2] >> 8) | (puVar9[2] & 0xff00ff) << 8;
      puVar1 = &DAT_0025d4b0;
      if (uVar6 != 0) {
        puVar1 = (undefined4 *)((long)puVar9 + (ulong)uVar6);
      }
      if ((ulong)((long)puVar1 - (long)puVar9) <= (ulong)uVar2) {
        iVar11 = (int)puVar9 + uVar2;
        if (((uint)CONCAT11(bVar3,bVar4) * 0x14 <= (uint)(iVar11 - (int)puVar1)) &&
           (iVar7 = uVar10 + (uint)CONCAT11(bVar3,bVar4) * -0x14, 0 < iVar7)) {
          puVar1 = &DAT_0025d4b0;
          if (uVar6 != 0) {
            puVar1 = (undefined4 *)((long)puVar9 + (ulong)uVar6);
          }
          if (((ulong)((long)(puVar1 + (ulong)CONCAT11(bVar3,bVar4) * 5) - (long)puVar9) <=
               (ulong)uVar2) &&
             (uVar5 = uVar5 * ((uint)(puVar9[6] >> 8) | (puVar9[6] & 0xff00ff) << 8),
             uVar5 <= (uint)(iVar11 - (int)(puVar1 + (ulong)CONCAT11(bVar3,bVar4) * 5)))) {
            rive_hb_blob_destroy(piVar8);
            if (0 < (int)(iVar7 - uVar5)) {
              if ((*(byte *)(piVar8 + 1) & 1) == 0) {
                return piVar8;
              }
              *(undefined1 *)(piVar8 + 1) = 0;
              return piVar8;
            }
            goto LAB_0050cd5c;
          }
        }
      }
    }
  }
  rive_hb_blob_destroy(piVar8);
LAB_0050cd5c:
  rive_hb_blob_destroy(piVar8);
  return &DAT_0025d4b0;
}


// ===== 0050cd94  rive_hb_font_set_var_named_instance =====

void rive_hb_font_set_var_named_instance(long param_1,int param_2)

{
  if (((*(byte *)(param_1 + 4) & 1) != 0) && (*(int *)(param_1 + 0x74) != param_2)) {
    *(int *)(param_1 + 0x74) = param_2;
    rive_hb_font_set_variations(param_1,0,0);
    return;
  }
  return;
}


// ===== 0050cdc0  rive_hb_font_create_sub_font =====

long rive_hb_font_create_sub_font(int *param_1)

{
  uint uVar1;
  long lVar2;
  void *__ptr;
  void *__ptr_00;
  ulong __nmemb;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)&DAT_006865a8;
  }
  lVar2 = FUN_0050c584(*(undefined8 *)(param_1 + 8));
  if ((*(byte *)(lVar2 + 4) & 1) != 0) {
    if (*param_1 != 0) {
      FUN_00340fe0(1,param_1);
    }
    uVar3 = *(undefined8 *)(param_1 + 10);
    iVar4 = param_1[0xf];
    *(int **)(lVar2 + 0x18) = param_1;
    *(undefined8 *)(lVar2 + 0x28) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0xd);
    uVar5 = *(undefined8 *)(param_1 + 0x1a);
    *(char *)(lVar2 + 0x3c) = (char)iVar4;
    *(undefined8 *)(lVar2 + 0x34) = uVar3;
    *(undefined8 *)(lVar2 + 0x68) = uVar5;
    iVar4 = param_1[0x1c];
    uVar1 = param_1[0x1f];
    __nmemb = (ulong)uVar1;
    *(int *)(lVar2 + 0x48) = param_1[0x12];
    *(int *)(lVar2 + 0x70) = iVar4;
    if (uVar1 != 0) {
      __ptr = calloc(__nmemb,4);
      __ptr_00 = calloc(__nmemb,4);
      if ((__ptr == (void *)0x0) || (__ptr_00 == (void *)0x0)) {
        free(__ptr);
        free(__ptr_00);
      }
      else {
        memcpy(__ptr,*(void **)(param_1 + 0x20),__nmemb << 2);
        memcpy(__ptr_00,*(void **)(param_1 + 0x22),__nmemb << 2);
        FUN_0050ca20(lVar2,__ptr,__ptr_00,uVar1);
      }
    }
    FUN_0050caac(lVar2);
    *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(lVar2 + 0x10);
  }
  return lVar2;
}


// ===== 0050cee8  rive_hb_font_get_empty =====

undefined * rive_hb_font_get_empty(void)

{
  return &DAT_006865a8;
}


// ===== 0050cef4  rive_hb_font_reference =====

int * rive_hb_font_reference(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_00340fe0(1,param_1);
  }
  return param_1;
}


// ===== 0050cf30  rive_hb_font_destroy =====

void rive_hb_font_destroy(int *param_1)

{
  int iVar1;
  undefined4 *__ptr;
  mutex *this;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = FUN_00340fe0(0xffffffff,param_1), iVar1 == 1)) {
    *param_1 = -0xdead;
    this = *(mutex **)(param_1 + 2);
    if (this != (mutex *)0x0) {
      FUN_004fe408(this + 0x28,this);
      std::__ndk1::mutex::~mutex(this);
      free(this);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    __ptr = *(undefined4 **)(param_1 + 0x2c);
    if ((__ptr != (undefined4 *)0x0) && (__ptr != &DAT_0025d4b0)) {
      free(__ptr);
    }
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x26));
    }
    rive_hb_font_destroy(*(undefined8 *)(param_1 + 6));
    rive_hb_face_destroy(*(undefined8 *)(param_1 + 8));
    rive_hb_font_funcs_destroy(*(undefined8 *)(param_1 + 0x24));
    free(*(void **)(param_1 + 0x20));
    free(*(void **)(param_1 + 0x22));
    free(param_1);
    return;
  }
  return;
}


// ===== 0050d010  rive_hb_font_set_user_data =====

uint rive_hb_font_set_user_data
               (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  mutex *this;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    FUN_0050caac(param_1);
  }
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    this = *(mutex **)(param_1 + 2);
    while (this == (mutex *)0x0) {
      this = (mutex *)calloc(1,0x38);
      if (this == (mutex *)0x0) {
        return 0;
      }
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)this = 0;
      lVar2 = FUN_003410d0(0,this,param_1 + 2);
      if (lVar2 == 0) break;
      FUN_004fe408(this + 0x28,this);
      std::__ndk1::mutex::~mutex(this);
      free(this);
      this = *(mutex **)(param_1 + 2);
    }
    uVar1 = FUN_004fe740(this,param_2,param_3,param_4,param_5);
    uVar1 = uVar1 & 1;
  }
  return uVar1;
}


// ===== 0050d104  rive_hb_font_get_user_data =====

void rive_hb_font_get_user_data(int *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  int *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) || (*(long *)(param_1 + 2) == 0)) {
      param_1 = (int *)0x0;
    }
    else {
      local_40 = 0;
      local_38 = (int *)0x0;
      local_30 = 0;
      uVar2 = FUN_004feac8(*(long *)(param_1 + 2) + 0x28,param_2,&local_40);
      param_1 = local_38;
      if ((uVar2 & 1) == 0) {
        param_1 = (int *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


// ===== 0050d184  rive_hb_font_make_immutable =====

void rive_hb_font_make_immutable(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      rive_hb_font_make_immutable();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


// ===== 0050d1b8  rive_hb_font_is_immutable =====

byte rive_hb_font_is_immutable(long param_1)

{
  return (*(byte *)(param_1 + 4) ^ 0xff) & 1;
}


// ===== 0050d1c8  rive_hb_font_get_serial =====

undefined8 rive_hb_font_get_serial(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 0050d1d4  rive_hb_font_changed =====

void rive_hb_font_changed(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return;
  }
  FUN_0050caac();
  return;
}


// ===== 0050d1e4  rive_hb_font_set_parent =====

void rive_hb_font_set_parent(long param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (((*(byte *)(param_1 + 4) & 1) != 0) && (piVar2 = *(int **)(param_1 + 0x18), piVar2 != param_2)
     ) {
    piVar1 = (int *)&DAT_006865a8;
    if (param_2 != (int *)0x0) {
      piVar1 = param_2;
    }
    if (*piVar1 != 0) {
      FUN_00340fe0(1,piVar1);
    }
    *(int **)(param_1 + 0x18) = piVar1;
    rive_hb_font_destroy(piVar2);
    FUN_0050caac(param_1);
    return;
  }
  return;
}


// ===== 0050d264  rive_hb_font_get_parent =====

undefined8 rive_hb_font_get_parent(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 0050d26c  rive_hb_font_set_face =====

void rive_hb_font_set_face(long param_1,int *param_2)

{
  int *piVar1;
  
  if (((*(byte *)(param_1 + 4) & 1) != 0) && (piVar1 = *(int **)(param_1 + 0x20), piVar1 != param_2)
     ) {
    if (param_2 == (int *)0x0) {
      param_2 = (int *)&DAT_00686440;
    }
    if ((*(byte *)(param_2 + 1) & 1) != 0) {
      *(undefined1 *)(param_2 + 1) = 0;
    }
    if (*param_2 != 0) {
      FUN_00340fe0(1,param_2);
    }
    *(int **)(param_1 + 0x20) = param_2;
    FUN_0050caac(param_1);
    rive_hb_face_destroy(piVar1);
    FUN_0050caac(param_1);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}


// ===== 0050d300  rive_hb_font_get_face =====

undefined8 rive_hb_font_get_face(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 0050d308  rive_hb_font_set_funcs =====

void rive_hb_font_set_funcs
               (long param_1,int *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x98));
    }
    piVar1 = (int *)&DAT_00686380;
    if (param_2 != (int *)0x0) {
      piVar1 = param_2;
    }
    if (*piVar1 != 0) {
      FUN_00340fe0(1,piVar1);
    }
    rive_hb_font_funcs_destroy(*(undefined8 *)(param_1 + 0x90));
    *(int **)(param_1 + 0x90) = piVar1;
    *(undefined8 *)(param_1 + 0x98) = param_3;
    *(code **)(param_1 + 0xa0) = UNRECOVERED_JUMPTABLE;
    FUN_0050caac(param_1);
    return;
  }
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050d338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_3);
    return;
  }
  return;
}


// ===== 0050d3b8  rive_hb_font_set_funcs_data =====

void rive_hb_font_set_funcs_data(long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x98));
    }
    *(undefined8 *)(param_1 + 0x98) = param_2;
    *(code **)(param_1 + 0xa0) = UNRECOVERED_JUMPTABLE;
    FUN_0050caac(param_1);
    return;
  }
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0050d3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2);
    return;
  }
  return;
}


// ===== 0050d430  rive_hb_font_list_funcs =====

undefined8 * rive_hb_font_list_funcs(void)

{
  undefined8 *__ptr;
  long lVar1;
  
  if (DAT_00687068 == (undefined8 *)0x0) {
    do {
      __ptr = (undefined8 *)calloc(2,8);
      if (__ptr == (undefined8 *)0x0) {
        lVar1 = FUN_003410d0(0,&DAT_002537e0,&DAT_00687068);
        if (lVar1 == 0) {
          return (undefined8 *)&DAT_002537e0;
        }
      }
      else {
        *__ptr = &DAT_006786b0;
        __ptr[1] = 0;
        lVar1 = FUN_003410d0(0,__ptr,&DAT_00687068);
        if (lVar1 == 0) {
          return __ptr;
        }
        free(__ptr);
      }
    } while (DAT_00687068 == (undefined8 *)0x0);
  }
  return DAT_00687068;
}


// ===== 0050d4dc  rive_hb_font_set_scale =====

void rive_hb_font_set_scale(long param_1,int param_2,int param_3)

{
  if (((*(byte *)(param_1 + 4) & 1) != 0) &&
     ((*(int *)(param_1 + 0x28) != param_2 || (*(int *)(param_1 + 0x2c) != param_3)))) {
    *(int *)(param_1 + 0x28) = param_2;
    *(int *)(param_1 + 0x2c) = param_3;
    FUN_0050caac();
    return;
  }
  return;
}


// ===== 0050d508  rive_hb_font_get_scale =====

void rive_hb_font_get_scale(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x28);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x2c);
  }
  return;
}


// ===== 0050d524  rive_hb_font_set_ppem =====

void rive_hb_font_set_ppem(long param_1,int param_2,int param_3)

{
  if (((*(byte *)(param_1 + 4) & 1) != 0) &&
     ((*(int *)(param_1 + 0x68) != param_2 || (*(int *)(param_1 + 0x6c) != param_3)))) {
    *(int *)(param_1 + 0x68) = param_2;
    *(int *)(param_1 + 0x6c) = param_3;
    FUN_0050caac();
    return;
  }
  return;
}


// ===== 0050d550  rive_hb_font_get_ppem =====

void rive_hb_font_get_ppem(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x68);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x6c);
  }
  return;
}


// ===== 0050d56c  rive_hb_font_set_ptem =====

void rive_hb_font_set_ptem(float param_1,long param_2)

{
  if (((*(byte *)(param_2 + 4) & 1) != 0) && (*(float *)(param_2 + 0x70) != param_1)) {
    *(float *)(param_2 + 0x70) = param_1;
    FUN_0050caac();
    return;
  }
  return;
}


// ===== 0050d58c  rive_hb_font_get_ptem =====

undefined4 rive_hb_font_get_ptem(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}


// ===== 0050d594  rive_hb_font_is_synthetic =====

undefined1 rive_hb_font_is_synthetic(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}


// ===== 0050d59c  rive_hb_font_set_synthetic_bold =====

void rive_hb_font_set_synthetic_bold(float param_1,float param_2,long param_3,int param_4)

{
  if (((*(byte *)(param_3 + 4) & 1) != 0) &&
     (((*(float *)(param_3 + 0x34) != param_1 || (*(float *)(param_3 + 0x38) != param_2)) ||
      ((bool)*(char *)(param_3 + 0x3c) != (param_4 != 0))))) {
    *(float *)(param_3 + 0x34) = param_1;
    *(float *)(param_3 + 0x38) = param_2;
    *(bool *)(param_3 + 0x3c) = param_4 != 0;
    FUN_0050caac();
    return;
  }
  return;
}


// ===== 0050d5e8  rive_hb_font_get_synthetic_bold =====

void rive_hb_font_get_synthetic_bold
               (long param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x34);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x38);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)*(byte *)(param_1 + 0x3c);
  }
  return;
}


// ===== 0050d610  rive_hb_font_set_synthetic_slant =====

void rive_hb_font_set_synthetic_slant(float param_1,long param_2)

{
  if (((*(byte *)(param_2 + 4) & 1) != 0) && (*(float *)(param_2 + 0x48) != param_1)) {
    *(float *)(param_2 + 0x48) = param_1;
    FUN_0050caac();
    return;
  }
  return;
}


// ===== 0050d630  rive_hb_font_get_synthetic_slant =====

undefined4 rive_hb_font_get_synthetic_slant(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


// ===== 0050d638  rive_hb_font_set_variation =====

void rive_hb_font_set_variation(undefined4 param_1,long param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  void *__ptr;
  void *__ptr_00;
  uint uVar7;
  long lVar8;
  ulong __nmemb;
  uint local_5c;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    lVar6 = FUN_0050c97c(*(long *)(param_2 + 0x20) + 200);
    puVar2 = &DAT_0025d4b0;
    if (0xf < *(uint *)(lVar6 + 0x18)) {
      puVar2 = *(undefined4 **)(lVar6 + 0x10);
    }
    uVar4 = (uint)(*(ushort *)(puVar2 + 1) >> 8) | (*(ushort *)(puVar2 + 1) & 0xff00ff) << 8;
    uVar7 = (uint)(*(ushort *)(puVar2 + 2) >> 8) | (*(ushort *)(puVar2 + 2) & 0xff00ff) << 8;
    __nmemb = (ulong)uVar7;
    puVar3 = &DAT_0025d4b0;
    if (uVar4 != 0) {
      puVar3 = (undefined4 *)((long)puVar2 + (ulong)uVar4);
    }
    if (uVar7 == 0) {
      __ptr_00 = (void *)0x0;
      __ptr = (void *)0x0;
      if (*(long *)(param_2 + 0x88) == 0) {
LAB_0050d74c:
        if (*(int *)(param_2 + 0x74) != -1) {
          local_5c = uVar7;
          rive_hb_ot_var_named_instance_get_design_coords
                    (*(undefined8 *)(param_2 + 0x20),*(int *)(param_2 + 0x74),&local_5c,__ptr_00);
        }
        goto LAB_0050d76c;
      }
LAB_0050d7c8:
      rive_hb_ot_var_normalize_coords(*(undefined8 *)(param_2 + 0x20),0,__ptr_00,__ptr);
      uVar7 = 0;
    }
    else {
      __ptr = calloc(__nmemb,4);
      __ptr_00 = calloc(__nmemb,4);
      if (__ptr == (void *)0x0 || __ptr_00 == (void *)0x0) {
        free(__ptr);
        if (*(long *)(lVar5 + 0x28) == local_58) {
          free(__ptr_00);
          return;
        }
        goto LAB_0050d85c;
      }
      lVar6 = *(long *)(param_2 + 0x88);
      if (lVar6 == 0) {
        lVar6 = (long)puVar3 + 0xb;
        lVar8 = 0;
        do {
          puVar1 = (uint *)(lVar6 + -3);
          lVar6 = lVar6 + 0x14;
          uVar4 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
          *(float *)((long)__ptr_00 + lVar8) = (float)(int)(uVar4 >> 0x10 | uVar4 << 0x10) / 65536.0
          ;
          lVar8 = lVar8 + 4;
        } while (__nmemb * 4 - lVar8 != 0);
        goto LAB_0050d74c;
      }
      lVar8 = 0;
      do {
        *(undefined4 *)((long)__ptr_00 + lVar8) = *(undefined4 *)(lVar6 + lVar8);
        lVar8 = lVar8 + 4;
      } while (__nmemb * 4 - lVar8 != 0);
LAB_0050d76c:
      if (uVar7 == 0) goto LAB_0050d7c8;
      lVar8 = 0;
      lVar6 = (long)puVar3 + 3;
      do {
        uVar4 = (*(uint *)(lVar6 + -3) & 0xff00ff00) >> 8 | (*(uint *)(lVar6 + -3) & 0xff00ff) << 8;
        if ((uVar4 >> 0x10 | uVar4 << 0x10) == param_3) {
          *(undefined4 *)((long)__ptr_00 + lVar8) = param_1;
        }
        lVar8 = lVar8 + 4;
        lVar6 = lVar6 + 0x14;
      } while (__nmemb << 2 != lVar8);
      rive_hb_ot_var_normalize_coords(*(undefined8 *)(param_2 + 0x20),uVar7,__ptr_00,__ptr);
    }
    FUN_0050ca20(param_2,__ptr,__ptr_00,uVar7);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
LAB_0050d85c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050d860  rive_hb_font_set_var_coords_design =====

void rive_hb_font_set_var_coords_design(long param_1,void *param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  void *__ptr;
  void *__ptr_00;
  long lVar7;
  float *pfVar8;
  ulong __nmemb;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return;
  }
  lVar6 = FUN_0050c97c(*(long *)(param_1 + 0x20) + 200);
  puVar2 = &DAT_0025d4b0;
  if (0xf < *(uint *)(lVar6 + 0x18)) {
    puVar2 = *(undefined4 **)(lVar6 + 0x10);
  }
  uVar4 = (uint)(*(ushort *)(puVar2 + 1) >> 8) | (*(ushort *)(puVar2 + 1) & 0xff00ff) << 8;
  uVar5 = (uint)(*(ushort *)(puVar2 + 2) >> 8) | (*(ushort *)(puVar2 + 2) & 0xff00ff) << 8;
  __nmemb = (ulong)uVar5;
  puVar3 = &DAT_0025d4b0;
  if (uVar4 != 0) {
    puVar3 = (undefined4 *)((long)puVar2 + (ulong)uVar4);
  }
  uVar4 = uVar5;
  if (param_3 <= uVar5) {
    uVar4 = param_3;
  }
  if (uVar5 == 0) {
    __ptr_00 = (void *)0x0;
    __ptr = (void *)0x0;
  }
  else {
    __ptr = calloc(__nmemb,4);
    __ptr_00 = calloc(__nmemb,4);
    if (__ptr == (void *)0x0 || __ptr_00 == (void *)0x0) {
      free(__ptr);
      free(__ptr_00);
      return;
    }
  }
  if (uVar4 != 0) {
    memcpy(__ptr_00,param_2,(ulong)(uVar4 << 2));
  }
  if (param_3 < uVar5) {
    lVar7 = __nmemb - param_3;
    lVar6 = (long)puVar3 + (ulong)param_3 * 0x14 + 0xb;
    pfVar8 = (float *)((long)__ptr_00 + (ulong)param_3 * 4);
    do {
      puVar1 = (uint *)(lVar6 + -3);
      lVar7 = lVar7 + -1;
      lVar6 = lVar6 + 0x14;
      uVar4 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
      *pfVar8 = (float)(int)(uVar4 >> 0x10 | uVar4 << 0x10) / 65536.0;
      pfVar8 = pfVar8 + 1;
    } while (lVar7 != 0);
  }
  rive_hb_ot_var_normalize_coords(*(undefined8 *)(param_1 + 0x20),uVar5,param_2,__ptr);
  FUN_0050ca20(param_1,__ptr,__ptr_00,__nmemb);
  return;
}


// ===== 0050d9d8  rive_hb_font_get_var_named_instance =====

undefined4 rive_hb_font_get_var_named_instance(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}


// ===== 0050d9e0  rive_hb_font_set_var_coords_normalized =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rive_hb_font_set_var_coords_normalized(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  void *__ptr;
  void *__ptr_00;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return;
  }
  lVar6 = FUN_0050c97c(*(long *)(param_1 + 0x20) + 200);
  puVar2 = &DAT_0025d4b0;
  if (0xf < *(uint *)(lVar6 + 0x18)) {
    puVar2 = *(undefined4 **)(lVar6 + 0x10);
  }
  uVar7 = (uint)(*(ushort *)(puVar2 + 2) >> 8) | (*(ushort *)(puVar2 + 2) & 0xff00ff) << 8;
  uVar9 = (ulong)uVar7;
  uVar1 = uVar7;
  if (param_3 <= uVar7) {
    uVar1 = param_3;
  }
  if (uVar7 == 0) {
    __ptr_00 = (void *)0x0;
    __ptr = (void *)0x0;
  }
  else {
    __ptr = calloc(uVar9,4);
    __ptr_00 = calloc(uVar9,4);
    if (__ptr == (void *)0x0 || __ptr_00 == (void *)0x0) {
      free(__ptr);
      free(__ptr_00);
      return;
    }
  }
  if (uVar1 != 0) {
    memcpy(__ptr,param_2,(ulong)(uVar1 << 2));
  }
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    lVar8 = uVar9 - 1;
    uVar9 = 0;
    lVar6 = _DAT_0024e340;
    lVar10 = _UNK_0024e348;
    lVar11 = _DAT_0024e100;
    lVar12 = _UNK_0024e108;
    do {
      auVar13._8_8_ = lVar8;
      auVar13._0_8_ = lVar8;
      auVar5._8_8_ = lVar12;
      auVar5._0_8_ = lVar11;
      auVar13 = NEON_cmhs(auVar13,auVar5,8);
      if ((auVar13 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        *(undefined4 *)((long)__ptr_00 + uVar9 * 4) = 0x7fc00000;
      }
      if ((auVar13 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        *(undefined4 *)((long)__ptr_00 + uVar9 * 4 + 4) = 0x7fc00000;
      }
      auVar3._8_8_ = lVar8;
      auVar3._0_8_ = lVar8;
      auVar4._8_8_ = lVar10;
      auVar4._0_8_ = lVar6;
      auVar13 = NEON_cmhs(auVar3,auVar4,8);
      if ((auVar13 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        *(undefined4 *)((long)__ptr_00 + uVar9 * 4 + 8) = 0x7fc00000;
      }
      if ((auVar13 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        *(undefined4 *)((long)__ptr_00 + uVar9 * 4 + 0xc) = 0x7fc00000;
      }
      lVar6 = lVar6 + 4;
      lVar10 = lVar10 + 4;
      lVar11 = lVar11 + 4;
      lVar12 = lVar12 + 4;
      uVar9 = uVar9 + 4;
    } while (((ulong)(uVar7 + 3) & 0x1fffc) != uVar9);
  }
  FUN_0050ca20(param_1,__ptr,__ptr_00,uVar7);
  return;
}


// ===== 0050db9c  rive_hb_font_get_var_coords_normalized =====

undefined8 rive_hb_font_get_var_coords_normalized(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x7c);
  }
  return *(undefined8 *)(param_1 + 0x80);
}


// ===== 0050dbb0  rive_hb_font_get_var_coords_design =====

undefined8 rive_hb_font_get_var_coords_design(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x7c);
  }
  return *(undefined8 *)(param_1 + 0x88);
}


// ===== 0050dbc4  FUN_0050dbc4 =====

void FUN_0050dbc4(long *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  char *local_70;
  char acStack_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = param_2 - (int)(char *)*param_1;
  if (0x1e < uVar1) {
    uVar1 = 0x1f;
  }
  strncpy(acStack_68,(char *)*param_1,(ulong)uVar1);
  acStack_68[uVar1] = '\0';
  local_70 = acStack_68;
  piVar3 = (int *)__errno();
  *piVar3 = 0;
  lVar4 = strtol(acStack_68,&local_70,10);
  *param_3 = (int)lVar4;
  if ((*piVar3 == 0) && (acStack_68 != local_70)) {
    uVar5 = 1;
    *param_1 = (long)(local_70 + (*param_1 - (long)acStack_68));
  }
  else {
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 0050dca0  FUN_0050dca0 =====

void FUN_0050dca0(long *param_1,long param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *local_80;
  char acStack_78 [32];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = (int)param_2 - (int)(char *)*param_1;
  if (0x1e < uVar1) {
    uVar1 = 0x1f;
  }
  strncpy(acStack_78,(char *)*param_1,(ulong)uVar1);
  acStack_78[uVar1] = '\0';
  local_80 = acStack_78;
  piVar3 = (int *)__errno();
  *piVar3 = 0;
  uVar4 = strtoul(acStack_78,&local_80,param_4);
  *param_3 = (int)uVar4;
  if ((*piVar3 == 0) && (acStack_78 != local_80)) {
    if ((long)local_80 - (long)acStack_78 == param_2 - *param_1) {
      uVar5 = 1;
      *param_1 = *param_1 + ((long)local_80 - (long)acStack_78);
      goto LAB_0050dd64;
    }
  }
  uVar5 = 0;
LAB_0050dd64:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 0050dd94  FUN_0050dd94 =====

byte FUN_0050dd94(undefined8 *param_1,byte *param_2,double *param_3,byte param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  double *pdVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  pbVar6 = (byte *)*param_1;
  pbVar7 = pbVar6;
  if (pbVar6 < param_2) {
    lVar10 = (long)param_2 - (long)pbVar6;
    pbVar8 = pbVar6;
    do {
      if ((4 < *pbVar8 - 9) && (pbVar7 = pbVar8, *pbVar8 != 0x20)) break;
      lVar10 = lVar10 + -1;
      pbVar8 = pbVar8 + 1;
      pbVar7 = param_2;
    } while (lVar10 != 0);
  }
  if (pbVar7 == param_2) {
    pbVar8 = param_2;
    dVar16 = 0.0;
  }
  else {
    dVar18 = 0.0;
    dVar17 = 0.0;
    dVar16 = 0.0;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    uVar9 = 0;
    uVar12 = 1;
    do {
      bVar5 = *pbVar7;
      uVar14 = (uint)bVar5;
      uVar15 = (ulong)(byte)(&DAT_002538c3)[uVar12];
      if (((byte)(&DAT_002537e8)[uVar12 * 2] <= bVar5) &&
         (uVar14 <= (byte)(&UNK_002537e9)[uVar12 * 2])) {
        uVar15 = (ulong)bVar5 - (ulong)(byte)(&DAT_002537e8)[uVar12 * 2];
      }
      uVar13 = (ulong)(byte)(&UNK_002537fb)[uVar15 + (byte)(&UNK_002538ba)[uVar12]];
      if ((0x24bUL >> (uVar13 & 0x3f) & 1) == 0) {
        bVar5 = (&DAT_002538d6)[uVar13];
        if (bVar5 < 3) {
          if (bVar5 == 1) {
            bVar2 = true;
          }
          else if (bVar5 == 2) {
            dVar16 = (double)NEON_fmadd(dVar16,0x4024000000000000,(double)(int)(uVar14 - 0x30));
          }
        }
        else if (bVar5 == 3) {
          if (dVar17 <= DAT_0024e5e0) {
            dVar18 = dVar18 + 1.0;
            dVar17 = (double)NEON_fmadd(dVar17,0x4024000000000000,(double)(int)(uVar14 - 0x30));
          }
        }
        else if (bVar5 == 4) {
          bVar4 = true;
        }
        else if (bVar5 == 5) {
          uVar14 = (uVar14 + uVar9 * 10) - 0x30;
          if (uVar14 < 0x800) {
            uVar9 = uVar14;
          }
          bVar3 = (bool)(0x7ff < uVar14 | bVar3);
        }
      }
      pbVar8 = pbVar7;
      if ((&UNK_002537fb)[uVar15 + (byte)(&UNK_002538ba)[uVar12]] == 1) break;
      pbVar7 = pbVar7 + 1;
      uVar12 = (ulong)(byte)(&DAT_002538cc)[uVar13];
      pbVar8 = param_2;
    } while (pbVar7 != param_2);
    if (dVar18 != 0.0) {
      dVar19 = 1.0;
      pdVar11 = (double *)&DAT_002538e0;
      uVar14 = 0x100;
      do {
        if ((uVar14 & (int)dVar18) != 0) {
          dVar19 = dVar19 * *pdVar11;
        }
        pdVar11 = pdVar11 + 1;
        bVar1 = 1 < uVar14;
        uVar14 = uVar14 >> 1;
      } while (bVar1);
      dVar16 = dVar16 + dVar17 / dVar19;
    }
    if (bVar2) {
      dVar16 = -dVar16;
    }
    if (bVar3) {
      if (dVar16 != 0.0) {
        if (bVar4) {
          dVar17 = 2.2250738585072014e-308;
          dVar16 = -2.2250738585072014e-308;
        }
        else {
          dVar17 = 1.79769313486232e+308;
          dVar16 = -1.79769313486232e+308;
        }
        if (!bVar2) {
          dVar16 = dVar17;
        }
      }
    }
    else if (uVar9 != 0) {
      dVar17 = 1.0;
      if (bVar4) {
        pdVar11 = (double *)&DAT_002538e0;
        uVar14 = 0x100;
        do {
          if ((uVar14 & uVar9) != 0) {
            dVar17 = dVar17 * *pdVar11;
          }
          pdVar11 = pdVar11 + 1;
          bVar2 = 1 < uVar14;
          uVar14 = uVar14 >> 1;
        } while (bVar2);
        dVar16 = dVar16 / dVar17;
      }
      else {
        pdVar11 = (double *)&DAT_002538e0;
        uVar14 = 0x100;
        do {
          if ((uVar14 & uVar9) != 0) {
            dVar17 = dVar17 * *pdVar11;
          }
          pdVar11 = pdVar11 + 1;
          bVar2 = 1 < uVar14;
          uVar14 = uVar14 >> 1;
        } while (bVar2);
        dVar16 = dVar16 * dVar17;
      }
    }
  }
  *param_3 = dVar16;
  if (pbVar6 == pbVar8) {
    bVar5 = 0;
  }
  else {
    *param_1 = pbVar8;
    bVar5 = pbVar8 == param_2 | param_4 ^ 1;
  }
  return bVar5 & 1;
}


// ===== 0050e08c  rive_hb_ot_color_has_palettes =====

bool rive_hb_ot_color_has_palettes(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = FUN_0050e0cc(param_1 + 0x148);
  puVar1 = &DAT_0025d4b0;
  if (0xb < *(uint *)(lVar2 + 0x18)) {
    puVar1 = *(undefined4 **)(lVar2 + 0x10);
  }
  return *(ushort *)(puVar1 + 1) >> 8 != 0 || (*(ushort *)(puVar1 + 1) & 0xff) != 0;
}


// ===== 0050e0cc  FUN_0050e0cc =====

undefined4 * FUN_0050e0cc(long *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 == (undefined4 *)0x0) {
    do {
      if (param_1[-0x1d] == 0) {
        return &DAT_0025d4b0;
      }
      puVar2 = (undefined4 *)FUN_0050e170();
      if (puVar2 == (undefined4 *)0x0) {
        lVar1 = FUN_003410d0(0,&DAT_0025d4b0,param_1);
        if (lVar1 == 0) {
          return &DAT_0025d4b0;
        }
      }
      else {
        lVar1 = FUN_003410d0(0,puVar2,param_1);
        if (lVar1 == 0) {
          return puVar2;
        }
        if (puVar2 != &DAT_0025d4b0) {
          rive_hb_blob_destroy(puVar2);
        }
      }
      puVar2 = (undefined4 *)*param_1;
    } while (puVar2 == (undefined4 *)0x0);
  }
  return puVar2;
}


// ===== 0050e170  FUN_0050e170 =====

int * FUN_0050e170(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  uint uVar10;
  ushort *puVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar8 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x4350414c,*(undefined8 *)(param_1 + 0x28)),
     piVar8 == (int *)0x0)) {
    piVar8 = &DAT_0025d4b0;
  }
  if (*piVar8 != 0) {
    FUN_00340fe0(1,piVar8);
  }
  uVar1 = piVar8[6];
  uVar9 = (ulong)uVar1;
  puVar11 = *(ushort **)(piVar8 + 4);
  uVar10 = 0x3fffffff;
  if (uVar1 >> 0x1a == 0) {
    uVar10 = uVar1 << 6;
    if (uVar10 < 0x4001) {
      uVar10 = 0x4000;
    }
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
  }
  if (puVar11 == (ushort *)0x0) {
    rive_hb_blob_destroy(piVar8);
    return piVar8;
  }
  if ((((0xb < uVar1) &&
       (uVar7 = (*(uint *)(puVar11 + 4) & 0xff00ff00) >> 8 |
                (*(uint *)(puVar11 + 4) & 0xff00ff) << 8, uVar7 = uVar7 >> 0x10 | uVar7 << 0x10,
       uVar7 <= uVar9)) &&
      (uVar6 = (uint)(byte)puVar11[3] << 10 | (uint)*(byte *)((long)puVar11 + 7) << 2,
      uVar6 <= uVar1 - uVar7)) &&
     (((iVar14 = uVar10 - uVar6, 0 < iVar14 &&
       (uVar10 = (uint)(byte)puVar11[2] << 9 | (uint)*(byte *)((long)puVar11 + 5) << 1,
       uVar10 <= uVar1 - 0xc)) && (iVar14 = iVar14 - uVar10, 0 < iVar14)))) {
    if (*puVar11 >> 8 == 0 && (*puVar11 & 0xff) == 0) {
LAB_0050e3d4:
      rive_hb_blob_destroy(piVar8);
LAB_0050e3dc:
      if ((*(byte *)(piVar8 + 1) & 1) == 0) {
        return piVar8;
      }
      *(undefined1 *)(piVar8 + 1) = 0;
      return piVar8;
    }
    uVar12 = (ulong)(byte)puVar11[2] << 9 | (ulong)*(byte *)((long)puVar11 + 5) << 1;
    if (uVar12 + 0x18 <= uVar9) {
      uVar10 = (uint)CONCAT11((byte)puVar11[2],*(byte *)((long)puVar11 + 5));
      bVar2 = *(byte *)((long)puVar11 + uVar12 + 0xc);
      bVar3 = *(byte *)((long)puVar11 + uVar12 + 0xd);
      bVar4 = *(byte *)((long)puVar11 + uVar12 + 0xe);
      bVar5 = *(byte *)((long)puVar11 + uVar12 + 0xf);
      if ((((bVar2 == 0 && bVar3 == 0) && bVar4 == 0) && bVar5 == 0) ||
         (((uVar13 = (ulong)bVar2 << 0x18 | (ulong)bVar3 << 0x10 | (ulong)bVar4 << 8 | (ulong)bVar5,
           uVar13 <= uVar9 && (uVar10 << 2 <= uVar1 - (int)uVar13)) &&
          (iVar14 = iVar14 + uVar10 * -4, 0 < iVar14)))) {
        bVar2 = *(byte *)((long)puVar11 + uVar12 + 0x10);
        bVar3 = *(byte *)((long)puVar11 + uVar12 + 0x11);
        bVar4 = *(byte *)((long)puVar11 + uVar12 + 0x12);
        bVar5 = *(byte *)((long)puVar11 + uVar12 + 0x13);
        if ((((bVar2 == 0 && bVar3 == 0) && bVar4 == 0) && bVar5 == 0) ||
           (((uVar13 = (ulong)bVar2 << 0x18 | (ulong)bVar3 << 0x10 | (ulong)bVar4 << 8 |
                       (ulong)bVar5, uVar13 <= uVar9 && (uVar10 << 1 <= uVar1 - (int)uVar13)) &&
            (iVar14 = iVar14 + uVar10 * -2, 0 < iVar14)))) {
          bVar2 = *(byte *)((long)puVar11 + uVar12 + 0x14);
          bVar3 = *(byte *)((long)puVar11 + uVar12 + 0x15);
          bVar4 = *(byte *)((long)puVar11 + uVar12 + 0x16);
          bVar5 = *(byte *)((long)puVar11 + uVar12 + 0x17);
          if (((bVar2 == 0 && bVar3 == 0) && bVar4 == 0) && bVar5 == 0) goto LAB_0050e3d4;
          uVar12 = (ulong)bVar2 << 0x18 | (ulong)bVar3 << 0x10 | (ulong)bVar4 << 8 | (ulong)bVar5;
          if ((uVar12 <= uVar9) &&
             (uVar10 = (uint)*(byte *)((long)puVar11 + 3) << 1 | (uint)(byte)puVar11[1] << 9,
             uVar10 <= uVar1 - (int)uVar12)) {
            rive_hb_blob_destroy(piVar8);
            if ((int)uVar10 < iVar14) goto LAB_0050e3dc;
            goto LAB_0050e280;
          }
        }
      }
    }
  }
  rive_hb_blob_destroy(piVar8);
LAB_0050e280:
  rive_hb_blob_destroy(piVar8);
  return &DAT_0025d4b0;
}


// ===== 0050e404  rive_hb_ot_color_palette_get_count =====

uint rive_hb_ot_color_palette_get_count(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = FUN_0050e0cc(param_1 + 0x148);
  puVar1 = &DAT_0025d4b0;
  if (0xb < *(uint *)(lVar2 + 0x18)) {
    puVar1 = *(undefined4 **)(lVar2 + 0x10);
  }
  return (uint)(*(ushort *)(puVar1 + 1) >> 8) | (*(ushort *)(puVar1 + 1) & 0xff00ff) << 8;
}


// ===== 0050e43c  rive_hb_ot_color_palette_get_name_id =====

uint rive_hb_ot_color_palette_get_name_id(long param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  
  lVar3 = FUN_0050e0cc(param_1 + 0x148);
  puVar1 = (ushort *)&DAT_0025d4b0;
  if (0xb < *(uint *)(lVar3 + 0x18)) {
    puVar1 = *(ushort **)(lVar3 + 0x10);
  }
  if (*puVar1 >> 8 == 0 && (*puVar1 & 0xff) == 0) {
    uVar4 = (ulong)(byte)puVar1[2];
    uVar5 = (ulong)*(byte *)((long)puVar1 + 5);
    puVar6 = &DAT_0025d4b0;
  }
  else {
    uVar4 = (ulong)(byte)puVar1[2];
    uVar5 = (ulong)*(byte *)((long)puVar1 + 5);
    puVar6 = (undefined4 *)((long)puVar1 + (uVar4 << 9 | uVar5 << 1) + 0xc);
  }
  if (((*(byte *)(puVar6 + 1) == 0 && *(byte *)((long)puVar6 + 5) == 0) &&
      *(byte *)((long)puVar6 + 6) == 0) && *(byte *)((long)puVar6 + 7) == 0) {
    uVar2 = 0xffff;
  }
  else {
    puVar1 = (ushort *)
             ((long)puVar1 +
             (ulong)param_2 * 2 +
             ((ulong)*(byte *)(puVar6 + 1) << 0x18 | (ulong)*(byte *)((long)puVar6 + 5) << 0x10 |
              (ulong)*(byte *)((long)puVar6 + 6) << 8 | (ulong)*(byte *)((long)puVar6 + 7)));
    if (((uint)uVar5 | (int)uVar4 << 8) <= param_2) {
      puVar1 = &DAT_0025d0f8;
    }
    uVar2 = (uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8;
  }
  return uVar2;
}


// ===== 0050e514  rive_hb_ot_color_palette_color_get_name_id =====

uint rive_hb_ot_color_palette_color_get_name_id(long param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  ushort *puVar4;
  
  lVar3 = FUN_0050e0cc(param_1 + 0x148);
  puVar4 = (ushort *)&DAT_0025d4b0;
  puVar1 = puVar4;
  if (0xb < *(uint *)(lVar3 + 0x18)) {
    puVar1 = *(ushort **)(lVar3 + 0x10);
  }
  if (*puVar1 >> 8 != 0 || (*puVar1 & 0xff) != 0) {
    puVar4 = (ushort *)
             ((long)puVar1 +
             ((ulong)(byte)puVar1[2] << 9 | (ulong)*(byte *)((long)puVar1 + 5) << 1) + 0xc);
  }
  if ((((byte)puVar4[4] == 0 && *(byte *)((long)puVar4 + 9) == 0) && (byte)puVar4[5] == 0) &&
      *(byte *)((long)puVar4 + 0xb) == 0) {
    uVar2 = 0xffff;
  }
  else {
    puVar4 = (ushort *)
             ((long)puVar1 +
             (ulong)param_2 * 2 +
             ((ulong)(byte)puVar4[4] << 0x18 | (ulong)*(byte *)((long)puVar4 + 9) << 0x10 |
              (ulong)(byte)puVar4[5] << 8 | (ulong)*(byte *)((long)puVar4 + 0xb)));
    if (((uint)(puVar1[1] >> 8) | (puVar1[1] & 0xff00ff) << 8) <= param_2) {
      puVar4 = &DAT_0025d0f8;
    }
    uVar2 = (uint)(*puVar4 >> 8) | (*puVar4 & 0xff00ff) << 8;
  }
  return uVar2;
}


// ===== 0050e5dc  rive_hb_ot_color_palette_get_flags =====

uint rive_hb_ot_color_palette_get_flags(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  
  lVar3 = FUN_0050e0cc(param_1 + 0x148);
  puVar1 = &DAT_0025d4b0;
  if (0xb < *(uint *)(lVar3 + 0x18)) {
    puVar1 = *(uint **)(lVar3 + 0x10);
  }
  if ((ushort)((ushort)*puVar1 >> 8) == 0 && ((ushort)*puVar1 & 0xff) == 0) {
    uVar4 = (ulong)(byte)puVar1[1];
    uVar5 = (ulong)*(byte *)((long)puVar1 + 5);
    pbVar6 = (byte *)&DAT_0025d4b0;
  }
  else {
    uVar4 = (ulong)(byte)puVar1[1];
    uVar5 = (ulong)*(byte *)((long)puVar1 + 5);
    pbVar6 = (byte *)((long)puVar1 + (uVar4 << 9 | uVar5 << 1) + 0xc);
  }
  if (((*pbVar6 == 0 && pbVar6[1] == 0) && pbVar6[2] == 0) && pbVar6[3] == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (uint *)((long)puVar1 +
                     (ulong)param_2 * 4 +
                     ((ulong)*pbVar6 << 0x18 | (ulong)pbVar6[1] << 0x10 | (ulong)pbVar6[2] << 8 |
                     (ulong)pbVar6[3]));
    if (((uint)uVar5 | (int)uVar4 << 8) <= param_2) {
      puVar1 = &DAT_0025d4b0;
    }
    uVar2 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  }
  return uVar2;
}


// ===== 0050e6ac  rive_hb_ot_color_palette_get_colors =====

uint rive_hb_ot_color_palette_get_colors
               (long param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  
  lVar11 = FUN_0050e0cc(param_1 + 0x148);
  puVar1 = &DAT_0025d4b0;
  if (0xb < *(uint *)(lVar11 + 0x18)) {
    puVar1 = *(undefined4 **)(lVar11 + 0x10);
  }
  if (param_2 < ((uint)(*(ushort *)(puVar1 + 1) >> 8) | (*(ushort *)(puVar1 + 1) & 0xff00ff) << 8))
  {
    if (param_4 != (uint *)0x0) {
      bVar2 = *(byte *)((long)puVar1 + 10);
      bVar3 = *(byte *)((long)puVar1 + 0xb);
      uVar6 = *(ushort *)((long)puVar1 + (ulong)param_2 * 2 + 0xc);
      uVar12 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
      uVar8 = (uint)(*(ushort *)((long)puVar1 + 6) >> 8) |
              (*(ushort *)((long)puVar1 + 6) & 0xff00ff) << 8;
      uVar7 = *(ushort *)((long)puVar1 + 2);
      uVar10 = 0;
      if (uVar12 <= uVar8) {
        uVar10 = uVar8 - uVar12;
      }
      bVar4 = *(byte *)(puVar1 + 2);
      if (((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8) <= uVar10) {
        uVar10 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
      }
      bVar5 = *(byte *)((long)puVar1 + 9);
      uVar12 = 0;
      if (param_3 <= uVar10) {
        uVar12 = uVar10 - param_3;
      }
      if (*param_4 <= uVar12) {
        uVar12 = *param_4;
      }
      *param_4 = uVar12;
      if (uVar12 != 0) {
        iVar14 = -uVar12;
        puVar13 = (uint *)((long)puVar1 +
                          (ulong)param_3 * 4 +
                          (ulong)((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8) * 4 +
                          ((ulong)bVar5 << 0x10 | (ulong)bVar4 << 0x18 | (ulong)bVar2 << 8 |
                          (ulong)bVar3));
        do {
          uVar10 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8;
          uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
          if (uVar12 != 0) {
            uVar12 = uVar12 - 1;
            *param_5 = uVar10;
            param_5 = param_5 + 1;
            uVar10 = (uint)DAT_006870b0;
          }
          DAT_006870b0._0_4_ = uVar10;
          bVar9 = iVar14 != -1;
          iVar14 = iVar14 + 1;
          puVar13 = puVar13 + 1;
        } while (bVar9);
      }
    }
    uVar10 = (uint)(*(ushort *)((long)puVar1 + 2) >> 8) |
             (*(ushort *)((long)puVar1 + 2) & 0xff00ff) << 8;
  }
  else {
    uVar10 = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = 0;
    }
  }
  return uVar10;
}


// ===== 0050e7dc  rive_hb_ot_color_has_layers =====

bool rive_hb_ot_color_has_layers(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_0050e828(param_1 + 0x140);
  puVar1 = &DAT_0025d4b0;
  if ((undefined4 *)*puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
  }
  puVar2 = &DAT_0025d4b0;
  if (0xd < (uint)puVar1[6]) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
  }
  return *(ushort *)((long)puVar2 + 2) >> 8 != 0 || (*(ushort *)((long)puVar2 + 2) & 0xff) != 0;
}


// ===== 0050e828  FUN_0050e828 =====

undefined4 * FUN_0050e828(long *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 == (undefined4 *)0x0) {
    do {
      if (param_1[-0x1c] == 0) {
        return &DAT_0025d4b0;
      }
      puVar2 = (undefined4 *)FUN_0050e8b0();
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_0025d4b0;
      }
      lVar1 = FUN_003410d0(0,puVar2,param_1);
      if (lVar1 == 0) {
        return puVar2;
      }
      FUN_0050edcc(puVar2);
      puVar2 = (undefined4 *)*param_1;
    } while (puVar2 == (undefined4 *)0x0);
  }
  return puVar2;
}


// ===== 0050e8b0  FUN_0050e8b0 =====

/* WARNING: Removing unreachable block (ram,0x0050ed9c) */

undefined8 * FUN_0050e8b0(long param_1)

{
  char *pcVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulong uVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  ushort *puVar17;
  uint *puVar18;
  uint *puVar19;
  long lVar20;
  undefined4 local_a8 [2];
  ushort *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined1 local_80;
  int *local_78;
  int local_70;
  undefined2 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar6 = (undefined8 *)calloc(1,0x10);
  if (puVar6 == (undefined8 *)0x0) goto LAB_0050e9ec;
  local_a8[0] = 0;
  local_78 = (int *)0x0;
  local_80 = 0;
  local_70 = 0x10000;
  pcStack_98 = (char *)0x0;
  local_a0 = (ushort *)0x0;
  uStack_88 = 0;
  local_90 = 0;
  local_6c = 0;
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 == -1) {
    iVar5 = FUN_00564f34(param_1);
  }
  local_6c = CONCAT11(local_6c._1_1_,1);
  local_70 = iVar5;
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar7 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x434f4c52,*(undefined8 *)(param_1 + 0x28)),
     piVar7 == (int *)0x0)) {
    piVar7 = &DAT_0025d4b0;
  }
  if (*piVar7 != 0) {
    FUN_00340fe0(1,piVar7);
  }
  uVar2 = piVar7[6];
  pcVar9 = (char *)(ulong)uVar2;
  puVar17 = *(ushort **)(piVar7 + 4);
  uVar13 = 0x3fffffff;
  pcStack_98 = (char *)((long)puVar17 + (long)pcVar9);
  local_80 = 0;
  if (uVar2 >> 0x1a == 0) {
    uVar13 = uVar2 << 6;
    if (uVar13 < 0x4001) {
      uVar13 = 0x4000;
    }
    if (0x3ffffffe < uVar13) {
      uVar13 = 0x3fffffff;
    }
  }
  local_90 = CONCAT44(uVar13,uVar2);
  local_a8[0] = 0;
  uStack_88 = uStack_88 & 0xffffffff;
  local_a0 = puVar17;
  local_78 = piVar7;
  if (puVar17 == (ushort *)0x0) {
    rive_hb_blob_destroy(piVar7);
  }
  else {
    if ((uVar2 < 0xe) ||
       (uVar12 = (*(uint *)(puVar17 + 2) & 0xff00ff00) >> 8 |
                 (*(uint *)(puVar17 + 2) & 0xff00ff) << 8, uVar12 = uVar12 >> 0x10 | uVar12 << 0x10,
       pcVar9 < (char *)(ulong)uVar12)) {
LAB_0050e9c4:
      rive_hb_blob_destroy(local_78);
      local_90 = local_90 & 0xffffffff00000000;
    }
    else {
      uVar3 = puVar17[1];
      iVar5 = ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * 2 +
              ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8);
      iVar10 = (int)pcStack_98;
      if ((iVar10 - (int)puVar17) - uVar12 < (uint)(iVar5 * 2)) goto LAB_0050e9c4;
      iVar5 = uVar13 + iVar5 * -2;
      local_90 = CONCAT44(iVar5,uVar2);
      if (((iVar5 < 1) ||
          (uVar13 = (*(uint *)(puVar17 + 4) & 0xff00ff00) >> 8 |
                    (*(uint *)(puVar17 + 4) & 0xff00ff) << 8,
          uVar13 = uVar13 >> 0x10 | uVar13 << 0x10, pcVar9 < (char *)(ulong)uVar13)) ||
         (uVar12 = (uint)(byte)puVar17[6] << 10 | (uint)*(byte *)((long)puVar17 + 0xd) << 2,
         (iVar10 - (int)puVar17) - uVar13 < uVar12)) goto LAB_0050e9c4;
      iVar5 = iVar5 - uVar12;
      local_90 = CONCAT44(iVar5,uVar2);
      if (iVar5 < 1) goto LAB_0050e9c4;
      if (*puVar17 >> 8 == 0 && (*puVar17 & 0xff) == 0) {
        rive_hb_blob_destroy(piVar7);
        local_90 = local_90 & 0xffffffff00000000;
LAB_0050ed84:
        local_78 = (int *)0x0;
        pcStack_98 = (char *)0x0;
        local_a0 = (ushort *)0x0;
        if ((*(byte *)(piVar7 + 1) & 1) != 0) {
          *(undefined1 *)(piVar7 + 1) = 0;
          *puVar6 = piVar7;
          goto LAB_0050e9ec;
        }
        goto LAB_0050e9e8;
      }
      if (uVar2 < 0x12) goto LAB_0050e9c4;
      uVar13 = (*(uint *)(puVar17 + 7) & 0xff00ff00) >> 8 | (*(uint *)(puVar17 + 7) & 0xff00ff) << 8
      ;
      uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
      if (uVar13 != 0) {
        puVar19 = (uint *)((long)puVar17 + (ulong)uVar13);
        if (((pcVar9 < (char *)((long)(puVar19 + 1) - (long)puVar17)) ||
            (uVar12 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8,
            uVar14 = (ulong)(uVar12 >> 0x10 | uVar12 << 0x10) * 6,
            (uVar14 & 0xffffffff00000000) != 0)) ||
           ((uVar12 = (uint)uVar14, (uint)(iVar10 - (int)(puVar19 + 1)) < uVar12 ||
            (iVar5 = iVar5 - uVar12, local_90 = CONCAT44(iVar5,uVar2), iVar5 < 1))))
        goto LAB_0050e9c4;
        uVar2 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
        uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
        uVar14 = (ulong)uVar2;
        if (uVar2 != 0) {
          lVar20 = (long)puVar17 + (ulong)uVar13 + 10;
          puVar18 = puVar19;
          do {
            puVar18 = (uint *)((long)puVar18 + 6);
            if (((local_90 & 0xffffffff) < (ulong)(lVar20 - (long)local_a0)) ||
               (uVar8 = FUN_0050f31c(puVar18,local_a8,puVar19), (uVar8 & 1) == 0))
            goto LAB_0050e9c4;
            uVar14 = uVar14 - 1;
            lVar20 = lVar20 + 6;
          } while (uVar14 != 0);
          pcVar9 = (char *)(local_90 & 0xffffffff);
        }
      }
      if (pcVar9 < (char *)((long)puVar17 + (0x16 - (long)local_a0))) goto LAB_0050e9c4;
      uVar13 = (*(uint *)(puVar17 + 9) & 0xff00ff00) >> 8 | (*(uint *)(puVar17 + 9) & 0xff00ff) << 8
      ;
      uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
      if (uVar13 == 0) goto LAB_0050ec30;
      puVar18 = (uint *)((long)puVar17 + (ulong)uVar13);
      puVar19 = puVar18 + 1;
      if ((pcVar9 < (char *)((long)puVar19 - (long)local_a0)) || ((byte)((byte)*puVar18 >> 6) != 0))
      goto LAB_0050e9c4;
      uVar13 = (uint)(byte)*puVar18 << 0x18 | (uint)*(byte *)((long)puVar18 + 1) << 0x10 |
               (uint)*(byte *)((long)puVar18 + 2) << 8 | (uint)*(byte *)((long)puVar18 + 3);
      if ((uint)((int)pcStack_98 - (int)puVar19) < uVar13 * 4) goto LAB_0050e9c4;
      iVar5 = local_90._4_4_ + uVar13 * -4;
      local_90 = CONCAT44(iVar5,(undefined4)local_90);
      if (iVar5 < 1) goto LAB_0050e9c4;
      uVar13 = (*puVar18 & 0xff00ff00) >> 8 | (*puVar18 & 0xff00ff) << 8;
      uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
      uVar14 = (ulong)uVar13;
      if (uVar13 != 0) {
        do {
          uVar14 = uVar14 - 1;
          uVar8 = FUN_0050f31c(puVar19,local_a8,puVar18);
          if ((uVar8 & 1) == 0) break;
          puVar19 = puVar19 + 1;
        } while (uVar14 != 0);
        if ((uVar8 & 1) == 0) goto LAB_0050e9c4;
        pcVar9 = (char *)(local_90 & 0xffffffff);
      }
LAB_0050ec30:
      if (pcVar9 < (char *)((long)(puVar17 + 0xd) - (long)local_a0)) goto LAB_0050e9c4;
      uVar13 = (*(uint *)(puVar17 + 0xb) & 0xff00ff00) >> 8 |
               (*(uint *)(puVar17 + 0xb) & 0xff00ff) << 8;
      uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
      uVar14 = (ulong)uVar13;
      if (uVar13 != 0) {
        lVar20 = (long)puVar17 + uVar14 + 5;
        if (((char *)(lVar20 - (long)local_a0) <= pcVar9) &&
           (uVar13 = *(uint *)((long)puVar17 + uVar14 + 1),
           uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8,
           uVar8 = (ulong)(uVar13 >> 0x10 | uVar13 << 0x10) * 7, (uVar8 & 0xffffffff00000000) == 0))
        {
          uVar13 = (uint)uVar8;
          if (uVar13 <= (uint)((int)pcStack_98 - (int)lVar20)) {
            iVar5 = local_90._4_4_ - uVar13;
            local_90 = CONCAT44(iVar5,(undefined4)local_90);
            if (0 < iVar5) {
              uVar13 = *(uint *)((long)puVar17 + uVar14 + 1);
              uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
              uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
              uVar8 = (ulong)uVar13;
              if (uVar13 != 0) {
                pbVar15 = (byte *)((long)puVar17 + uVar14 + 0xb);
                pcVar11 = (char *)((long)puVar17 + (uVar14 - (long)local_a0) + 0xc);
                do {
                  if (pcVar9 < pcVar11) goto LAB_0050e9c4;
                  uVar16 = (ulong)pbVar15[-2] << 0x10 | (ulong)pbVar15[-1] << 8 | (ulong)*pbVar15;
                  if ((int)uVar16 != 0) {
                    pcVar1 = (char *)((long)puVar17 + uVar16 + uVar14);
                    if (pcVar9 < pcVar1 + (1 - (long)local_a0)) goto LAB_0050e9c4;
                    if (*pcVar1 != '\x01') {
                      if (*pcVar1 != '\x02') goto LAB_0050ed1c;
                      if (pcVar9 < pcVar1 + (0xd - (long)local_a0)) goto LAB_0050e9c4;
                    }
                    if (pcVar9 < pcVar1 + (9 - (long)local_a0)) goto LAB_0050e9c4;
                  }
LAB_0050ed1c:
                  uVar8 = uVar8 - 1;
                  pcVar11 = pcVar11 + 7;
                  pbVar15 = pbVar15 + 7;
                } while (uVar8 != 0);
              }
              goto LAB_0050ed2c;
            }
          }
        }
        goto LAB_0050e9c4;
      }
LAB_0050ed2c:
      uVar14 = FUN_0050eec4(puVar17 + 0xd,local_a8,puVar17);
      if ((uVar14 & 1) == 0) goto LAB_0050e9c4;
      uVar14 = FUN_0050effc(puVar17 + 0xf,local_a8,puVar17);
      rive_hb_blob_destroy(local_78);
      local_90 = local_90 & 0xffffffff00000000;
      if ((uVar14 & 1) != 0) goto LAB_0050ed84;
    }
    local_78 = (int *)0x0;
    pcStack_98 = (char *)0x0;
    local_a0 = (ushort *)0x0;
    rive_hb_blob_destroy(piVar7);
    piVar7 = &DAT_0025d4b0;
  }
LAB_0050e9e8:
  *puVar6 = piVar7;
LAB_0050e9ec:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050edcc  FUN_0050edcc =====

void FUN_0050edcc(undefined8 *param_1)

{
  void *__ptr;
  int *piVar1;
  int *piVar2;
  
  if ((param_1 != (undefined8 *)0x0) && (param_1 != (undefined8 *)&DAT_0025d4b0)) {
    __ptr = (void *)param_1[1];
    if (__ptr != (void *)0x0) {
      piVar2 = (int *)((long)__ptr + 0x38);
      piVar1 = (int *)((long)__ptr + 0x18);
      if (*piVar2 - 1U < 0xfffffffe) {
        *(undefined4 *)((long)__ptr + 0x3c) = 0;
        free(*(void **)((long)__ptr + 0x40));
      }
      piVar2[0] = 0;
      piVar2[1] = 0;
      *(undefined8 *)((long)__ptr + 0x40) = 0;
      piVar2 = (int *)((long)__ptr + 0x28);
      if (*piVar2 - 1U < 0xfffffffe) {
        *(undefined4 *)((long)__ptr + 0x2c) = 0;
        free(*(void **)((long)__ptr + 0x30));
      }
      piVar2[0] = 0;
      piVar2[1] = 0;
      *(undefined8 *)((long)__ptr + 0x30) = 0;
      if (*piVar1 - 1U < 0xfffffffe) {
        *(undefined4 *)((long)__ptr + 0x1c) = 0;
        free(*(void **)((long)__ptr + 0x20));
      }
      piVar1[0] = 0;
      piVar1[1] = 0;
      *(undefined8 *)((long)__ptr + 0x20) = 0;
      if (*(int *)((long)__ptr + 8) - 1U < 0xfffffffe) {
        *(undefined4 *)((long)__ptr + 0xc) = 0;
        free(*(void **)((long)__ptr + 0x10));
      }
      free(__ptr);
    }
    rive_hb_blob_destroy(*param_1);
    free(param_1);
    return;
  }
  return;
}


// ===== 0050eec4  FUN_0050eec4 =====

bool FUN_0050eec4(uint *param_1,long param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  if ((ulong)((long)param_1 + (4 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18)) {
    uVar4 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    if (uVar4 == 0) {
      return true;
    }
    pcVar2 = (char *)(param_3 + (ulong)uVar4);
    if (pcVar2 + (1 - *(long *)(param_2 + 8)) <= (char *)(ulong)*(uint *)(param_2 + 0x18)) {
      if (*pcVar2 == '\x01') {
        pcVar1 = pcVar2 + 6;
        if (((((ulong)((long)pcVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))
             && (uVar4 = (*(uint *)(pcVar2 + 2) & 0xff00ff00) >> 8 |
                         (*(uint *)(pcVar2 + 2) & 0xff00ff) << 8,
                uVar6 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10) *
                        (ulong)(((byte)pcVar2[1] >> 4 & 3) + 1), (uVar6 & 0xffffffff00000000) == 0))
            && ((ulong)((long)pcVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)))
           && (uVar4 = (uint)uVar6, uVar4 <= (uint)(*(int *)(param_2 + 0x10) - (int)pcVar1))) {
          iVar5 = *(int *)(param_2 + 0x1c) - uVar4;
LAB_0050efec:
          *(int *)(param_2 + 0x1c) = iVar5;
          return 0 < iVar5;
        }
      }
      else {
        if (*pcVar2 != '\0') {
          return true;
        }
        pcVar1 = pcVar2 + 4;
        if (((ulong)((long)pcVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
           ((ulong)((long)pcVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
          uVar3 = *(ushort *)(pcVar2 + 2);
          uVar4 = ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * ((byte)pcVar2[1] >> 4 & 3) +
                  ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8);
          if (uVar4 <= (uint)(*(int *)(param_2 + 0x10) - (int)pcVar1)) {
            iVar5 = *(int *)(param_2 + 0x1c) - uVar4;
            goto LAB_0050efec;
          }
        }
      }
    }
  }
  return false;
}


// ===== 0050effc  FUN_0050effc =====

undefined8 FUN_0050effc(uint *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (4 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (uVar1 != 0) {
    uVar2 = FUN_0050f038(param_3 + (ulong)uVar1);
    return uVar2;
  }
  return 1;
}


// ===== 0050f038  FUN_0050f038 =====

bool FUN_0050f038(ushort *param_1,long param_2)

{
  long lVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  
  puVar11 = param_1 + 4;
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar11 - *(long *)(param_2 + 8))) {
    return false;
  }
  if (((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8) != 1) {
    return false;
  }
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (6 - *(long *)(param_2 + 8)))) {
    return false;
  }
  uVar9 = (ulong)*(uint *)(param_2 + 0x18);
  uVar7 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  lVar8 = *(long *)(param_2 + 8);
  if (uVar7 != 0) {
    puVar2 = (ushort *)((long)param_1 + (ulong)uVar7);
    puVar3 = puVar2 + 2;
    if (uVar9 < (ulong)((long)puVar3 - lVar8)) {
      return false;
    }
    uVar10 = (ulong)(((uint)(puVar2[1] >> 8) | (puVar2[1] & 0xff00ff) << 8) *
                    ((uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8)) * 6;
    if ((uVar10 & 0xffffffff00000000) != 0) {
      return false;
    }
    lVar8 = *(long *)(param_2 + 8);
    uVar9 = (ulong)*(uint *)(param_2 + 0x18);
    if (uVar9 < (ulong)((long)puVar3 - lVar8)) {
      return false;
    }
    uVar7 = (uint)uVar10;
    if ((uint)(*(int *)(param_2 + 0x10) - (int)puVar3) < uVar7) {
      return false;
    }
    iVar5 = *(int *)(param_2 + 0x1c) - uVar7;
    *(int *)(param_2 + 0x1c) = iVar5;
    if (iVar5 < 1) {
      return false;
    }
  }
  if (((((ulong)((long)puVar11 - lVar8) <= uVar9) &&
       ((ulong)((long)puVar11 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
      (uVar7 = (uint)(byte)param_1[3] << 10 | (uint)*(byte *)((long)param_1 + 7) << 2,
      uVar7 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar11))) &&
     (iVar5 = *(int *)(param_2 + 0x1c) - uVar7, *(int *)(param_2 + 0x1c) = iVar5, 0 < iVar5)) {
    uVar7 = (uint)(param_1[3] >> 8) | (param_1[3] & 0xff00ff) << 8;
    uVar9 = (ulong)uVar7;
    if (uVar7 == 0) {
      return true;
    }
    lVar8 = (long)param_1 + 0xb;
    puVar11 = param_1 + 6;
    while (uVar9 = uVar9 - 1,
          (ulong)((long)puVar11 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
      uVar7 = (*(uint *)(lVar8 + -3) & 0xff00ff00) >> 8 | (*(uint *)(lVar8 + -3) & 0xff00ff) << 8;
      uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
      if (uVar7 == 0) {
        bVar6 = true;
      }
      else {
        puVar3 = (ushort *)((long)param_1 + (ulong)uVar7);
        if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar3 + (6 - *(long *)(param_2 + 8))))
        {
          return false;
        }
        uVar10 = FUN_0050f2b0(puVar3 + 2,param_2);
        if ((uVar10 & 1) == 0) {
          return false;
        }
        uVar7 = (uint)*(byte *)((long)puVar3 + 3) | ((byte)puVar3[1] & 0x7f) << 8;
        uVar4 = (uint)CONCAT11((byte)puVar3[2],*(byte *)((long)puVar3 + 5));
        if (uVar4 < uVar7) {
          return false;
        }
        uVar10 = (ulong)((uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8) *
                 (ulong)(uVar4 + uVar7 << (ulong)(byte)((byte)puVar3[1] >> 7));
        if ((uVar10 & 0xffffffff00000000) != 0) {
          return false;
        }
        lVar1 = (long)(puVar3 + 2) +
                ((ulong)(byte)puVar3[2] << 9 | (ulong)*(byte *)((long)puVar3 + 5) << 1) + 2;
        if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar1 - *(long *)(param_2 + 8))) {
          return false;
        }
        uVar7 = (uint)uVar10;
        if ((uint)(*(int *)(param_2 + 0x10) - (int)lVar1) < uVar7) {
          return false;
        }
        iVar5 = *(int *)(param_2 + 0x1c) - uVar7;
        *(int *)(param_2 + 0x1c) = iVar5;
        bVar6 = 0 < iVar5;
      }
      if (bVar6 == false) {
        return false;
      }
      lVar8 = lVar8 + 4;
      puVar11 = puVar11 + 2;
      if (uVar9 == 0) {
        return bVar6;
      }
    }
  }
  return false;
}


// ===== 0050f2b0  FUN_0050f2b0 =====

bool FUN_0050f2b0(byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  pbVar1 = param_1 + 2;
  if ((((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
      ((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
     (uVar2 = (uint)*param_1 << 9 | (uint)param_1[1] << 1,
     uVar2 <= (uint)(*(int *)(param_2 + 0x10) - (int)pbVar1))) {
    iVar3 = *(int *)(param_2 + 0x1c) - uVar2;
    *(int *)(param_2 + 0x1c) = iVar3;
    return 0 < iVar3;
  }
  return false;
}


// ===== 0050f31c  FUN_0050f31c =====

undefined8 FUN_0050f31c(uint *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (4 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  if (uVar1 != 0) {
    uVar2 = FUN_0050f358(param_3 + (ulong)uVar1);
    return uVar2;
  }
  return 1;
}


// ===== 0050f358  FUN_0050f358 =====

byte FUN_0050f358(undefined1 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  uVar1 = *(uint *)(param_2 + 0x24);
  if (0x3f < (int)uVar1) {
    bVar5 = 0;
    goto LAB_0050f5fc;
  }
  *(uint *)(param_2 + 0x24) = uVar1 + 1;
  if (0xfffffffe < uVar1) {
    bVar5 = 0;
    goto LAB_0050f5fc;
  }
  puVar7 = param_1 + 1;
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar7 - *(long *)(param_2 + 8)))
  goto LAB_0050f39c;
  switch(*param_1) {
  case 1:
    puVar7 = (undefined1 *)(ulong)*(uint *)(param_2 + 0x18);
    param_1 = param_1 + (6 - *(long *)(param_2 + 8));
    goto LAB_0050f500;
  case 2:
    puVar7 = (undefined1 *)(ulong)*(uint *)(param_2 + 0x18);
    param_1 = param_1 + (5 - *(long *)(param_2 + 8));
    goto LAB_0050f500;
  case 3:
    puVar7 = (undefined1 *)(ulong)*(uint *)(param_2 + 0x18);
    bVar3 = puVar7 < param_1 + (9 - *(long *)(param_2 + 8)) ||
            puVar7 <= param_1 + (5 - *(long *)(param_2 + 8));
    bVar4 = puVar7 >= param_1 + (9 - *(long *)(param_2 + 8)) &&
            param_1 + (5 - *(long *)(param_2 + 8)) == puVar7;
    goto LAB_0050f504;
  case 4:
  case 6:
    uVar1 = *(uint *)(param_2 + 0x18);
    lVar2 = 0x10 - *(long *)(param_2 + 8);
    goto LAB_0050f4c8;
  case 5:
  case 7:
    puVar6 = (undefined1 *)(ulong)*(uint *)(param_2 + 0x18);
    bVar5 = 0;
    if (param_1 + (0x14 - *(long *)(param_2 + 8)) <= puVar6) {
      lVar2 = 0x10 - *(long *)(param_2 + 8);
LAB_0050f54c:
      bVar5 = 0;
      if (param_1 + lVar2 <= puVar6) {
        bVar5 = FUN_0050f6c8(puVar7,param_2);
      }
    }
    break;
  case 8:
    uVar1 = *(uint *)(param_2 + 0x18);
    lVar2 = 0xc - *(long *)(param_2 + 8);
LAB_0050f4c8:
    if (param_1 + lVar2 <= (undefined1 *)(ulong)uVar1) {
      bVar5 = FUN_0050f614(puVar7,param_2);
      break;
    }
    goto LAB_0050f39c;
  case 9:
    puVar6 = (undefined1 *)(ulong)*(uint *)(param_2 + 0x18);
    bVar5 = 0;
    if (param_1 + (0x10 - *(long *)(param_2 + 8)) <= puVar6) {
      lVar2 = 0xc - *(long *)(param_2 + 8);
      goto LAB_0050f54c;
    }
    break;
  case 10:
  case 0x14:
  case 0x18:
    puVar6 = (undefined1 *)(ulong)*(uint *)(param_2 + 0x18);
    param_1 = param_1 + (6 - *(long *)(param_2 + 8));
    goto LAB_0050f450;
  case 0xb:
    puVar7 = (undefined1 *)(ulong)*(uint *)(param_2 + 0x18);
    param_1 = param_1 + (3 - *(long *)(param_2 + 8));
LAB_0050f500:
    bVar3 = puVar7 <= param_1;
    bVar4 = param_1 == puVar7;
LAB_0050f504:
    bVar5 = !bVar3 || bVar4;
    break;
  case 0xc:
    bVar5 = FUN_0050f7c8(param_1,param_2);
    break;
  case 0xd:
    bVar5 = FUN_0050f874(param_1,param_2);
    break;
  case 0xe:
  case 0x10:
  case 0x1c:
    puVar6 = (undefined1 *)(ulong)*(uint *)(param_2 + 0x18);
    param_1 = param_1 + (8 - *(long *)(param_2 + 8));
    goto LAB_0050f450;
  case 0xf:
    bVar5 = FUN_0050f928(param_1,param_2);
    break;
  case 0x11:
    bVar5 = FUN_0050f95c(param_1,param_2);
    break;
  case 0x12:
  case 0x1e:
    puVar6 = (undefined1 *)(ulong)*(uint *)(param_2 + 0x18);
    param_1 = param_1 + (0xc - *(long *)(param_2 + 8));
    goto LAB_0050f450;
  case 0x13:
    bVar5 = FUN_0050f990(param_1,param_2);
    break;
  case 0x15:
    bVar5 = FUN_0050f9c4(param_1,param_2);
    break;
  case 0x16:
  case 0x1a:
    puVar6 = (undefined1 *)(ulong)*(uint *)(param_2 + 0x18);
    param_1 = param_1 + (10 - *(long *)(param_2 + 8));
LAB_0050f450:
    if (puVar6 < param_1) {
LAB_0050f39c:
      bVar5 = 0;
    }
    else {
      bVar5 = FUN_0050f77c(puVar7,param_2);
    }
    break;
  case 0x17:
    bVar5 = FUN_0050f9f8(param_1,param_2);
    break;
  case 0x19:
    bVar5 = FUN_0050fa2c(param_1,param_2);
    break;
  case 0x1b:
    bVar5 = FUN_0050fa60(param_1,param_2);
    break;
  case 0x1d:
    bVar5 = FUN_0050fa94(param_1,param_2);
    break;
  case 0x1f:
    bVar5 = FUN_0050fac8(param_1,param_2);
    break;
  case 0x20:
    bVar5 = FUN_0050fafc(param_1,param_2);
    break;
  default:
    bVar5 = 1;
  }
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
LAB_0050f5fc:
  return bVar5 & 1;
}


// ===== 0050f614  FUN_0050f614 =====

bool FUN_0050f614(byte *param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ulong uVar4;
  
  if (param_1 + (3 - *(long *)(param_2 + 8)) <= (byte *)(ulong)*(uint *)(param_2 + 0x18)) {
    uVar4 = (ulong)*param_1 << 0x10 | (ulong)param_1[1] << 8 | (ulong)param_1[2];
    if ((int)uVar4 == 0) {
      return true;
    }
    param_3 = param_3 + uVar4;
    lVar1 = param_3 + 3;
    if (((ulong)(lVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
       ((ulong)(lVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
      uVar3 = *(ushort *)(param_3 + 1);
      iVar2 = ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * 2 +
              ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8);
      if ((uint)(iVar2 * 2) <= (uint)(*(int *)(param_2 + 0x10) - (int)lVar1)) {
        iVar2 = *(int *)(param_2 + 0x1c) + iVar2 * -2;
        *(int *)(param_2 + 0x1c) = iVar2;
        return 0 < iVar2;
      }
    }
  }
  return false;
}


// ===== 0050f6c8  FUN_0050f6c8 =====

bool FUN_0050f6c8(byte *param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ulong uVar4;
  
  if (param_1 + (3 - *(long *)(param_2 + 8)) <= (byte *)(ulong)*(uint *)(param_2 + 0x18)) {
    uVar4 = (ulong)*param_1 << 0x10 | (ulong)param_1[1] << 8 | (ulong)param_1[2];
    if ((int)uVar4 == 0) {
      return true;
    }
    param_3 = param_3 + uVar4;
    lVar1 = param_3 + 3;
    if (((ulong)(lVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
       ((ulong)(lVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
      uVar3 = *(ushort *)(param_3 + 1);
      iVar2 = ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * 4 +
              ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8);
      if ((uint)(iVar2 * 2) <= (uint)(*(int *)(param_2 + 0x10) - (int)lVar1)) {
        iVar2 = *(int *)(param_2 + 0x1c) + iVar2 * -2;
        *(int *)(param_2 + 0x1c) = iVar2;
        return 0 < iVar2;
      }
    }
  }
  return false;
}


// ===== 0050f77c  FUN_0050f77c =====

undefined8 FUN_0050f77c(byte *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((byte *)(ulong)*(uint *)(param_2 + 0x18) < param_1 + (3 - *(long *)(param_2 + 8))) {
    return 0;
  }
  uVar2 = (ulong)*param_1 << 0x10 | (ulong)param_1[1] << 8 | (ulong)param_1[2];
  if ((int)uVar2 != 0) {
    uVar1 = FUN_0050f358(param_3 + uVar2);
    return uVar1;
  }
  return 1;
}


// ===== 0050f7c8  FUN_0050f7c8 =====

bool FUN_0050f7c8(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  
  if ((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((param_1 + 7) - *(long *)(param_2 + 8))) ||
      (uVar2 = FUN_0050f77c(param_1 + 1,param_2,param_1), (uVar2 & 1) == 0)) ||
     ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((param_1 + 7) - *(long *)(param_2 + 8)))) {
    bVar1 = false;
  }
  else {
    uVar2 = (ulong)*(byte *)(param_1 + 4) << 0x10 | (ulong)*(byte *)(param_1 + 5) << 8 |
            (ulong)*(byte *)(param_1 + 6);
    if ((int)uVar2 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = ((param_1 + uVar2) - *(long *)(param_2 + 8)) + 0x18 <=
              (ulong)*(uint *)(param_2 + 0x18);
    }
  }
  return bVar1;
}


// ===== 0050f874  FUN_0050f874 =====

bool FUN_0050f874(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  if ((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((param_1 + 7) - *(long *)(param_2 + 8))) ||
      (uVar2 = FUN_0050f77c(param_1 + 1,param_2,param_1), (uVar2 & 1) == 0)) ||
     ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((param_1 + 7) - *(long *)(param_2 + 8)))) {
    bVar1 = false;
  }
  else {
    uVar2 = (ulong)*(byte *)(param_1 + 4) << 0x10 | (ulong)*(byte *)(param_1 + 5) << 8 |
            (ulong)*(byte *)(param_1 + 6);
    if ((int)uVar2 == 0) {
      bVar1 = true;
    }
    else {
      lVar3 = (param_1 + uVar2) - *(long *)(param_2 + 8);
      bVar1 = lVar3 + 0x1cU <= (ulong)*(uint *)(param_2 + 0x18) &&
              lVar3 + 0x18U <= (ulong)*(uint *)(param_2 + 0x18);
    }
  }
  return bVar1;
}


// ===== 0050f928  FUN_0050f928 =====

undefined8 FUN_0050f928(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 - *(long *)(param_2 + 8);
  if ((ulong)*(uint *)(param_2 + 0x18) < lVar2 + 0xcU ||
      (ulong)*(uint *)(param_2 + 0x18) < lVar2 + 8U) {
    return 0;
  }
  uVar1 = FUN_0050f77c(param_1 + 1,param_2,param_1);
  return uVar1;
}


// ===== 0050f95c  FUN_0050f95c =====

undefined8 FUN_0050f95c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 - *(long *)(param_2 + 8);
  if ((ulong)*(uint *)(param_2 + 0x18) < lVar2 + 0xcU ||
      (ulong)*(uint *)(param_2 + 0x18) < lVar2 + 8U) {
    return 0;
  }
  uVar1 = FUN_0050f77c(param_1 + 1,param_2,param_1);
  return uVar1;
}


// ===== 0050f990  FUN_0050f990 =====

undefined8 FUN_0050f990(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 - *(long *)(param_2 + 8);
  if ((ulong)*(uint *)(param_2 + 0x18) < lVar2 + 0x10U ||
      (ulong)*(uint *)(param_2 + 0x18) < lVar2 + 0xcU) {
    return 0;
  }
  uVar1 = FUN_0050f77c(param_1 + 1,param_2,param_1);
  return uVar1;
}


// ===== 0050f9c4  FUN_0050f9c4 =====

undefined8 FUN_0050f9c4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 - *(long *)(param_2 + 8);
  if ((ulong)*(uint *)(param_2 + 0x18) < lVar2 + 10U ||
      (ulong)*(uint *)(param_2 + 0x18) < lVar2 + 6U) {
    return 0;
  }
  uVar1 = FUN_0050f77c(param_1 + 1,param_2,param_1);
  return uVar1;
}


// ===== 0050f9f8  FUN_0050f9f8 =====

undefined8 FUN_0050f9f8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 - *(long *)(param_2 + 8);
  if ((ulong)*(uint *)(param_2 + 0x18) < lVar2 + 0xeU ||
      (ulong)*(uint *)(param_2 + 0x18) < lVar2 + 10U) {
    return 0;
  }
  uVar1 = FUN_0050f77c(param_1 + 1,param_2,param_1);
  return uVar1;
}


// ===== 0050fa2c  FUN_0050fa2c =====

undefined8 FUN_0050fa2c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 - *(long *)(param_2 + 8);
  if ((ulong)*(uint *)(param_2 + 0x18) < lVar2 + 10U ||
      (ulong)*(uint *)(param_2 + 0x18) < lVar2 + 6U) {
    return 0;
  }
  uVar1 = FUN_0050f77c(param_1 + 1,param_2,param_1);
  return uVar1;
}


// ===== 0050fa60  FUN_0050fa60 =====

undefined8 FUN_0050fa60(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 - *(long *)(param_2 + 8);
  if ((ulong)*(uint *)(param_2 + 0x18) < lVar2 + 0xeU ||
      (ulong)*(uint *)(param_2 + 0x18) < lVar2 + 10U) {
    return 0;
  }
  uVar1 = FUN_0050f77c(param_1 + 1,param_2,param_1);
  return uVar1;
}


// ===== 0050fa94  FUN_0050fa94 =====

undefined8 FUN_0050fa94(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 - *(long *)(param_2 + 8);
  if ((ulong)*(uint *)(param_2 + 0x18) < lVar2 + 0xcU ||
      (ulong)*(uint *)(param_2 + 0x18) < lVar2 + 8U) {
    return 0;
  }
  uVar1 = FUN_0050f77c(param_1 + 1,param_2,param_1);
  return uVar1;
}


// ===== 0050fac8  FUN_0050fac8 =====

undefined8 FUN_0050fac8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 - *(long *)(param_2 + 8);
  if ((ulong)*(uint *)(param_2 + 0x18) < lVar2 + 0x10U ||
      (ulong)*(uint *)(param_2 + 0x18) < lVar2 + 0xcU) {
    return 0;
  }
  uVar1 = FUN_0050f77c(param_1 + 1,param_2,param_1);
  return uVar1;
}


// ===== 0050fafc  FUN_0050fafc =====

undefined8 FUN_0050fafc(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((param_1 - *(long *)(param_2 + 8)) + 8U <= (ulong)*(uint *)(param_2 + 0x18)) {
    iVar1 = *(int *)(param_2 + 0x1c);
    iVar2 = iVar1 + -8;
    if (iVar2 == 0 || iVar1 < 8) {
      iVar2 = -1;
    }
    *(int *)(param_2 + 0x1c) = iVar2;
    if ((8 < iVar1) && (uVar3 = FUN_0050f77c(param_1 + 1,param_2,param_1), (uVar3 & 1) != 0)) {
      uVar4 = FUN_0050f77c(param_1 + 5,param_2,param_1);
      return uVar4;
    }
  }
  return 0;
}


// ===== 0050fb7c  rive_hb_ot_color_has_paint =====

bool rive_hb_ot_color_has_paint(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_0050e828(param_1 + 0x140);
  puVar2 = &DAT_0025d4b0;
  if ((uint *)*puVar5 != (uint *)0x0) {
    puVar2 = (uint *)*puVar5;
  }
  puVar1 = &DAT_0025d4b0;
  if (0xd < puVar2[6]) {
    puVar1 = *(uint **)(puVar2 + 4);
  }
  if ((ushort)((ushort)*puVar1 >> 8) == 0 && ((ushort)*puVar1 & 0xff) == 0) {
    bVar4 = false;
  }
  else {
    uVar3 = (*(uint *)((long)puVar1 + 0xe) & 0xff00ff00) >> 8 |
            (*(uint *)((long)puVar1 + 0xe) & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    puVar2 = &DAT_0025d4b0;
    if (uVar3 != 0) {
      puVar2 = (uint *)((long)puVar1 + (ulong)uVar3);
    }
    uVar3 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
    bVar4 = uVar3 >> 0x10 != 0 || (uVar3 & 0xffff) != 0;
  }
  return bVar4;
}


// ===== 0050fbf0  rive_hb_ot_color_glyph_has_paint =====

bool rive_hb_ot_color_glyph_has_paint(long param_1,undefined4 param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)FUN_0050e828(param_1 + 0x140);
  puVar1 = (ushort *)&DAT_0025d4b0;
  if ((ushort *)*puVar4 != (ushort *)0x0) {
    puVar1 = (ushort *)*puVar4;
  }
  puVar2 = (ushort *)&DAT_0025d4b0;
  if (0xd < *(uint *)(puVar1 + 0xc)) {
    puVar2 = *(ushort **)(puVar1 + 8);
  }
  if (*puVar2 >> 8 == 0 && (*puVar2 & 0xff) == 0) {
    bVar3 = false;
  }
  else {
    lVar5 = FUN_0050fc5c(puVar2,param_2);
    bVar3 = lVar5 != 0;
  }
  return bVar3;
}


// ===== 0050fc5c  FUN_0050fc5c =====

uint * FUN_0050fc5c(long param_1,uint param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = (*(uint *)(param_1 + 0xe) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 0xe) & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  puVar1 = &DAT_0025d4b0;
  if (uVar3 != 0) {
    puVar1 = (uint *)(param_1 + (ulong)uVar3);
  }
  uVar3 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  iVar6 = uVar3 - 1;
  puVar5 = &DAT_0025d4b0;
  if (0 < (int)uVar3) {
    iVar7 = 0;
    puVar5 = &DAT_0025d4b0;
    do {
      uVar3 = (uint)(iVar6 + iVar7) >> 1;
      uVar2 = *(ushort *)((long)puVar1 + (ulong)uVar3 * 6 + 4);
      uVar4 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
      if (param_2 <= uVar4 && uVar4 != param_2) {
        iVar6 = uVar3 - 1;
      }
      else {
        if (param_2 <= uVar4) {
          puVar5 = (uint *)((long)puVar1 + (ulong)uVar3 * 6 + 4);
          break;
        }
        iVar7 = uVar3 + 1;
      }
    } while (iVar7 <= iVar6);
  }
  if (param_2 != ((uint)(ushort)((ushort)*puVar5 >> 8) | ((ushort)*puVar5 & 0xff00ff) << 8)) {
    return (uint *)0x0;
  }
  uVar3 = (*(uint *)((long)puVar5 + 2) & 0xff00ff00) >> 8 |
          (*(uint *)((long)puVar5 + 2) & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  puVar5 = &DAT_0025d4b0;
  if (uVar3 != 0) {
    puVar5 = (uint *)((long)puVar1 + (ulong)uVar3);
  }
  return puVar5;
}


// ===== 0050fd14  rive_hb_ot_color_glyph_get_layers =====

void rive_hb_ot_color_glyph_get_layers
               (long param_1,uint param_2,uint param_3,uint *param_4,ulong *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  
  puVar12 = (undefined8 *)FUN_0050e828(param_1 + 0x140);
  puVar15 = &DAT_0025d4b0;
  puVar1 = puVar15;
  if ((undefined4 *)*puVar12 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar12;
  }
  puVar2 = puVar15;
  if (0xd < (uint)puVar1[6]) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
  }
  uVar9 = (uint)(*(ushort *)((long)puVar2 + 2) >> 8) |
          (*(ushort *)((long)puVar2 + 2) & 0xff00ff) << 8;
  if (uVar9 != 0) {
    iVar16 = 0;
    iVar17 = uVar9 - 1;
    uVar9 = (puVar2[1] & 0xff00ff00) >> 8 | (puVar2[1] & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    puVar15 = &DAT_0025d4b0;
    do {
      uVar14 = (uint)(iVar17 + iVar16) >> 1;
      uVar8 = *(ushort *)((long)puVar2 + (ulong)uVar14 * 6 + (ulong)uVar9);
      uVar10 = (uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8;
      if (param_2 <= uVar10 && uVar10 != param_2) {
        iVar17 = uVar14 - 1;
      }
      else {
        if (param_2 <= uVar10) {
          puVar15 = (undefined4 *)((long)puVar2 + (ulong)uVar14 * 6 + (ulong)uVar9);
          break;
        }
        iVar16 = uVar14 + 1;
      }
    } while (iVar16 <= iVar17);
  }
  uVar8 = *(ushort *)((long)puVar15 + 2);
  uVar7 = *(ushort *)(puVar15 + 1);
  uVar10 = (uint)(*(ushort *)(puVar2 + 3) >> 8) | (*(ushort *)(puVar2 + 3) & 0xff00ff) << 8;
  uVar14 = (uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8;
  uVar9 = 0;
  if (uVar14 <= uVar10) {
    uVar9 = uVar10 - uVar14;
  }
  if (((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8) <= uVar9) {
    uVar9 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
  }
  if (param_4 != (uint *)0x0) {
    bVar3 = *(byte *)((long)puVar2 + 9);
    uVar14 = 0;
    if (param_3 <= uVar9) {
      uVar14 = uVar9 - param_3;
    }
    bVar4 = *(byte *)(puVar2 + 2);
    bVar5 = *(byte *)((long)puVar2 + 10);
    bVar6 = *(byte *)((long)puVar2 + 0xb);
    if (*param_4 <= uVar14) {
      uVar14 = *param_4;
    }
    *param_4 = uVar14;
    if (uVar14 != 0) {
      iVar16 = -uVar14;
      puVar13 = (uint *)((long)puVar2 +
                        (ulong)param_3 * 4 +
                        (ulong)((uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8) * 4 +
                        ((ulong)bVar3 << 0x10 | (ulong)bVar4 << 0x18 | (ulong)bVar5 << 8 |
                        (ulong)bVar6));
      do {
        uVar9 = *puVar13;
        uVar18 = ((ulong)uVar9 & 0xff0000) << 0x18 | (ulong)(uVar9 >> 0x18) << 0x20 |
                 (ulong)(((uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8) & 0xffff);
        if (uVar14 != 0) {
          uVar14 = uVar14 - 1;
          *param_5 = uVar18;
          param_5 = param_5 + 1;
          uVar18 = DAT_006870b0;
        }
        DAT_006870b0 = uVar18;
        bVar11 = iVar16 != -1;
        iVar16 = iVar16 + 1;
        puVar13 = puVar13 + 1;
      } while (bVar11);
    }
  }
  return;
}


// ===== 0050fea8  rive_hb_ot_color_has_png =====

bool rive_hb_ot_color_has_png(long param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = FUN_0050ff38(param_1 + 0x150);
  puVar1 = (ushort *)&DAT_0025d4b0;
  if (*(ushort **)(lVar4 + 8) != (ushort *)0x0) {
    puVar1 = *(ushort **)(lVar4 + 8);
  }
  puVar2 = (ushort *)&DAT_0025d4b0;
  if (3 < *(uint *)(puVar1 + 0xc)) {
    puVar2 = *(ushort **)(puVar1 + 8);
  }
  if (*puVar2 >> 8 == 0 && (*puVar2 & 0xff) == 0) {
    puVar5 = (undefined8 *)FUN_0050ffd4(param_1 + 0x158);
    puVar1 = (ushort *)&DAT_0025d4b0;
    if ((ushort *)*puVar5 != (ushort *)0x0) {
      puVar1 = (ushort *)*puVar5;
    }
    puVar2 = (ushort *)&DAT_0025d4b0;
    if (7 < *(uint *)(puVar1 + 0xc)) {
      puVar2 = *(ushort **)(puVar1 + 8);
    }
    bVar3 = *puVar2 >> 8 != 0 || (*puVar2 & 0xff) != 0;
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}


// ===== 0050ff38  FUN_0050ff38 =====

undefined4 * FUN_0050ff38(long *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 == (undefined4 *)0x0) {
    do {
      if (param_1[-0x1e] == 0) {
        return &DAT_0025d4b0;
      }
      puVar2 = (undefined4 *)FUN_005102c4();
      if (puVar2 == (undefined4 *)0x0) {
        lVar1 = FUN_003410d0(0,&DAT_0025d4b0,param_1);
        if (lVar1 == 0) {
          return &DAT_0025d4b0;
        }
      }
      else {
        lVar1 = FUN_003410d0(0,puVar2,param_1);
        if (lVar1 == 0) {
          return puVar2;
        }
        FUN_005106fc(puVar2);
      }
      puVar2 = (undefined4 *)*param_1;
    } while (puVar2 == (undefined4 *)0x0);
  }
  return puVar2;
}


// ===== 0050ffd4  FUN_0050ffd4 =====

undefined4 * FUN_0050ffd4(long *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 == (undefined4 *)0x0) {
    do {
      if (param_1[-0x1f] == 0) {
        return &DAT_0025d4b0;
      }
      puVar2 = (undefined4 *)FUN_0051005c();
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_0025d4b0;
      }
      lVar1 = FUN_003410d0(0,puVar2,param_1);
      if (lVar1 == 0) {
        return puVar2;
      }
      FUN_0051027c(puVar2);
      puVar2 = (undefined4 *)*param_1;
    } while (puVar2 == (undefined4 *)0x0);
  }
  return puVar2;
}


// ===== 0051005c  FUN_0051005c =====

undefined8 * FUN_0051005c(long param_1)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  
  puVar7 = (undefined8 *)calloc(1,0x10);
  if (puVar7 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 == -1) {
    iVar6 = FUN_00564f34(param_1);
  }
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar8 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x73626978,*(undefined8 *)(param_1 + 0x28)),
     piVar8 == (int *)0x0)) {
    piVar8 = &DAT_0025d4b0;
  }
  if (*piVar8 != 0) {
    FUN_00340fe0(1,piVar8);
  }
  uVar3 = piVar8[6];
  puVar9 = *(ushort **)(piVar8 + 4);
  uVar10 = 0x3fffffff;
  if (uVar3 >> 0x1a == 0) {
    uVar10 = uVar3 << 6;
    if (uVar10 < 0x4001) {
      uVar10 = 0x4000;
    }
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
  }
  piVar15 = piVar8;
  if (puVar9 != (ushort *)0x0) {
    if ((uVar3 < 8) || (*puVar9 >> 8 == 0 && (*puVar9 & 0xff) == 0)) {
LAB_005101f4:
      rive_hb_blob_destroy(piVar8);
    }
    else {
      bVar4 = (byte)puVar9[2];
      if (bVar4 >> 6 != 0) goto LAB_005101f4;
      uVar5 = (uint)bVar4 << 0x18 | (uint)*(byte *)((long)puVar9 + 5) << 0x10 |
              (uint)(byte)puVar9[3] << 8 | (uint)*(byte *)((long)puVar9 + 7);
      uVar12 = (ulong)uVar3 - 8;
      if (((uint)uVar12 < uVar5 * 4) || (iVar11 = uVar10 + uVar5 * -4, iVar11 < 1))
      goto LAB_005101f4;
      uVar10 = (*(uint *)(puVar9 + 2) & 0xff00ff00) >> 8 | (*(uint *)(puVar9 + 2) & 0xff00ff) << 8;
      uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
      uVar13 = (ulong)uVar10;
      if (uVar10 == 0) {
        rive_hb_blob_destroy(piVar8);
LAB_0051021c:
        if ((*(byte *)(piVar8 + 1) & 1) != 0) {
          *(undefined1 *)(piVar8 + 1) = 0;
        }
        goto LAB_00510228;
      }
      uVar10 = iVar6 + 1;
      uVar12 = uVar12 >> 2;
      lVar14 = (long)puVar9 + 0xb;
      do {
        uVar13 = uVar13 - 1;
        if (uVar12 == 0) goto LAB_005101f4;
        uVar5 = (*(uint *)(lVar14 + -3) & 0xff00ff00) >> 8 |
                (*(uint *)(lVar14 + -3) & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if (uVar5 == 0) {
          bVar1 = true;
        }
        else {
          pbVar2 = (byte *)((long)(puVar9 + 2) + (ulong)uVar5);
          if ((((ulong)uVar3 < (ulong)((long)pbVar2 - (long)puVar9)) || (uVar10 >> 0x1e != 0)) ||
             (((int)puVar9 + uVar3) - (int)pbVar2 < uVar10 * 4)) goto LAB_005101f4;
          iVar11 = iVar11 + uVar10 * -4;
          bVar1 = 0 < iVar11;
        }
        if (!bVar1) break;
        uVar12 = uVar12 - 1;
        lVar14 = lVar14 + 4;
      } while (uVar13 != 0);
      rive_hb_blob_destroy(piVar8);
      if (bVar1) goto LAB_0051021c;
    }
    piVar15 = &DAT_0025d4b0;
  }
  rive_hb_blob_destroy(piVar8);
LAB_00510228:
  *puVar7 = piVar15;
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 == -1) {
    iVar6 = FUN_00564f34(param_1);
  }
  *(int *)(puVar7 + 1) = iVar6;
  return puVar7;
}


// ===== 0051027c  FUN_0051027c =====

void FUN_0051027c(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && (param_1 != (undefined8 *)&DAT_0025d4b0)) {
    rive_hb_blob_destroy(*param_1);
    free(param_1);
    return;
  }
  return;
}


// ===== 005102c4  FUN_005102c4 =====

undefined8 * FUN_005102c4(long param_1)

{
  bool bVar1;
  byte *pbVar2;
  ushort *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  
  puVar9 = (undefined8 *)calloc(1,0x18);
  if (puVar9 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00564f34(param_1);
  }
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar10 = (int *)(**(code **)(param_1 + 0x20))
                                 (param_1,0x43424c43,*(undefined8 *)(param_1 + 0x28)),
     piVar10 == (int *)0x0)) {
    piVar10 = &DAT_0025d4b0;
  }
  if (*piVar10 != 0) {
    FUN_00340fe0(1,piVar10);
  }
  uVar4 = piVar10[6];
  pbVar15 = (byte *)(ulong)uVar4;
  pbVar16 = *(byte **)(piVar10 + 4);
  uVar17 = 0x3fffffff;
  if (uVar4 >> 0x1a == 0) {
    uVar17 = uVar4 << 6;
    if (uVar17 < 0x4001) {
      uVar17 = 0x4000;
    }
    if (0x3ffffffe < uVar17) {
      uVar17 = 0x3fffffff;
    }
  }
  if (pbVar16 == (byte *)0x0) {
    rive_hb_blob_destroy(piVar10);
  }
  else {
    if (((uVar4 < 8) || ((pbVar16[1] & 0xfe | (uint)*pbVar16 << 8) != 2)) ||
       (uVar19 = (*(uint *)(pbVar16 + 4) & 0xff00ff00) >> 8 |
                 (*(uint *)(pbVar16 + 4) & 0xff00ff) << 8,
       uVar20 = (ulong)(uVar19 >> 0x10 | uVar19 << 0x10) * 0x30, (uVar20 & 0xffffffff00000000) != 0)
       ) {
LAB_00510374:
      rive_hb_blob_destroy(piVar10);
    }
    else {
      uVar19 = (uint)uVar20;
      if (((uint)(pbVar15 + -8) < uVar19) || (iVar8 = uVar17 - uVar19, iVar8 < 1))
      goto LAB_00510374;
      uVar17 = (*(uint *)(pbVar16 + 4) & 0xff00ff00) >> 8 | (*(uint *)(pbVar16 + 4) & 0xff00ff) << 8
      ;
      uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
      if (uVar17 == 0) {
        rive_hb_blob_destroy(piVar10);
LAB_00510698:
        if ((*(byte *)(piVar10 + 1) & 1) != 0) {
          *(undefined1 *)(piVar10 + 1) = 0;
        }
        goto LAB_0051038c;
      }
      uVar21 = (ulong)uVar17 - 1;
      iVar18 = (int)pbVar16 + uVar4;
      uVar13 = 0;
      uVar20 = (ulong)pbVar15 / 0x30;
      if (uVar21 <= (ulong)pbVar15 / 0x30) {
        uVar20 = uVar21;
      }
      do {
        uVar21 = uVar13;
        if ((uVar21 == (ulong)(pbVar15 + -8) / 0x30) ||
           (pbVar15 < pbVar16 + uVar21 * 0x30 + 8 + (4 - (long)pbVar16))) goto LAB_00510374;
        uVar17 = (*(uint *)(pbVar16 + uVar21 * 0x30 + 0x10) & 0xff00ff00) >> 8 |
                 (*(uint *)(pbVar16 + uVar21 * 0x30 + 0x10) & 0xff00ff) << 8;
        uVar4 = uVar17 << 0x10;
        uVar17 = uVar17 >> 0x10 | uVar4;
        uVar13 = (ulong)uVar17;
        if (uVar4 >> 0x1d != 0) goto LAB_00510374;
        uVar11 = (ulong)pbVar16[uVar21 * 0x30 + 8] * 0x1000000;
        pbVar14 = (byte *)(uVar11 | (ulong)pbVar16[uVar21 * 0x30 + 9] << 0x10 |
                           (ulong)pbVar16[uVar21 * 0x30 + 10] << 8 |
                          (ulong)pbVar16[uVar21 * 0x30 + 0xb]);
        pbVar2 = pbVar16 + (long)pbVar14;
        if ((pbVar15 < pbVar14 || (uint)(iVar18 - (int)pbVar2) < uVar17 * 8) ||
           (iVar8 = iVar8 + uVar17 * -8, iVar8 < 1)) goto LAB_00510374;
        if (uVar17 != 0) {
          lVar12 = uVar11 + (ulong)pbVar16[uVar21 * 0x30 + 9] * 0x10000 +
                   (ulong)pbVar16[uVar21 * 0x30 + 10] * 0x100 + (ulong)pbVar16[uVar21 * 0x30 + 0xb];
          do {
            uVar13 = uVar13 - 1;
            if ((pbVar15 < (byte *)(lVar12 + 8U)) ||
               (uVar17 = (uint)(*(ushort *)(pbVar16 + lVar12 + 2) >> 8) |
                         (*(ushort *)(pbVar16 + lVar12 + 2) & 0xff00ff) << 8,
               iVar7 = uVar17 - CONCAT11(pbVar16[lVar12],pbVar16[lVar12 + 1]),
               uVar17 < CONCAT11(pbVar16[lVar12],pbVar16[lVar12 + 1]))) goto LAB_00510374;
            uVar17 = (*(uint *)(pbVar16 + lVar12 + 4) & 0xff00ff00) >> 8 |
                     (*(uint *)(pbVar16 + lVar12 + 4) & 0xff00ff) << 8;
            uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
            if (uVar17 == 0) {
LAB_005105a4:
              bVar1 = true;
            }
            else {
              puVar3 = (ushort *)(pbVar2 + uVar17);
              if (pbVar15 < (byte *)((long)(puVar3 + 4) - (long)pbVar16)) goto LAB_00510374;
              uVar17 = (uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8;
              if (uVar17 == 3) {
                if (iVar7 + 2 < 0 != SCARRY4(iVar7,2)) goto LAB_00510374;
                uVar17 = iVar7 * 2 + 4;
              }
              else {
                if (uVar17 != 1) goto LAB_005105a4;
                if (iVar7 + 2U >> 0x1e != 0) goto LAB_00510374;
                uVar17 = (iVar7 + 2U) * 4;
              }
              if ((uint)(iVar18 - (int)(puVar3 + 4)) < uVar17) goto LAB_00510374;
              iVar8 = iVar8 - uVar17;
              bVar1 = 0 < iVar8;
            }
          } while ((bVar1) && (lVar12 = lVar12 + 8, uVar13 != 0));
          if (!bVar1) goto LAB_00510374;
        }
        if (pbVar15 < (byte *)(uVar21 * 0x30 + 0x24)) goto LAB_00510374;
        uVar13 = uVar21 + 1;
      } while (uVar21 != uVar20);
      rive_hb_blob_destroy(piVar10);
      if ((byte *)(uVar21 * 0x30 + 0x30) <= pbVar15) goto LAB_00510698;
    }
    rive_hb_blob_destroy(piVar10);
    piVar10 = &DAT_0025d4b0;
  }
LAB_0051038c:
  *puVar9 = piVar10;
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_00564f34(param_1);
  }
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar10 = (int *)(**(code **)(param_1 + 0x20))
                                 (param_1,0x43424454,*(undefined8 *)(param_1 + 0x28)),
     piVar10 == (int *)0x0)) {
    piVar10 = &DAT_0025d4b0;
  }
  if (*piVar10 != 0) {
    FUN_00340fe0(1,piVar10);
  }
  pbVar15 = *(byte **)(piVar10 + 4);
  if (pbVar15 == (byte *)0x0) {
    rive_hb_blob_destroy(piVar10);
  }
  else {
    if ((uint)piVar10[6] < 4) {
      rive_hb_blob_destroy(piVar10);
    }
    else {
      bVar5 = pbVar15[1];
      bVar6 = *pbVar15;
      rive_hb_blob_destroy(piVar10);
      if ((bVar5 & 0xfe | (uint)bVar6 << 8) == 2) {
        if ((*(byte *)(piVar10 + 1) & 1) != 0) {
          *(undefined1 *)(piVar10 + 1) = 0;
        }
        goto LAB_00510668;
      }
    }
    rive_hb_blob_destroy(piVar10);
    piVar10 = &DAT_0025d4b0;
  }
LAB_00510668:
  puVar9[1] = piVar10;
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar8 == 0) {
    iVar8 = FUN_00564f7c(param_1);
  }
  *(int *)(puVar9 + 2) = iVar8;
  return puVar9;
}


// ===== 005106fc  FUN_005106fc =====

void FUN_005106fc(undefined8 *param_1)

{
  rive_hb_blob_destroy(*param_1);
  *param_1 = 0;
  rive_hb_blob_destroy(param_1[1]);
  free(param_1);
  return;
}


// ===== 00510730  rive_hb_ot_color_glyph_reference_png =====

ushort * rive_hb_ot_color_glyph_reference_png(long param_1,undefined4 param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ushort *puVar5;
  long lVar6;
  
  puVar3 = (undefined8 *)FUN_0050ffd4(*(long *)(param_1 + 0x20) + 0x158);
  puVar5 = (ushort *)&DAT_0025d4b0;
  if ((ushort *)*puVar3 != (ushort *)0x0) {
    puVar5 = (ushort *)*puVar3;
  }
  puVar1 = (ushort *)&DAT_0025d4b0;
  if (7 < *(uint *)(puVar5 + 0xc)) {
    puVar1 = *(ushort **)(puVar5 + 8);
  }
  puVar5 = (ushort *)&DAT_0025d4b0;
  if (*puVar1 >> 8 != 0 || (*puVar1 & 0xff) != 0) {
    puVar3 = (undefined8 *)FUN_0050ffd4(*(long *)(param_1 + 0x20) + 0x158);
    uVar4 = FUN_00510838(puVar3,param_1);
    puVar5 = (ushort *)FUN_005109bc(uVar4,param_2,*puVar3,0,0,*(undefined4 *)(puVar3 + 1),0);
  }
  if (*(int *)(puVar5 + 0xc) == 0) {
    lVar6 = FUN_0050ff38(*(long *)(param_1 + 0x20) + 0x150);
    puVar1 = (ushort *)&DAT_0025d4b0;
    if (*(ushort **)(lVar6 + 8) != (ushort *)0x0) {
      puVar1 = *(ushort **)(lVar6 + 8);
    }
    puVar2 = (ushort *)&DAT_0025d4b0;
    if (3 < *(uint *)(puVar1 + 0xc)) {
      puVar2 = *(ushort **)(puVar1 + 8);
    }
    if (*puVar2 >> 8 != 0 || (*puVar2 & 0xff) != 0) {
      uVar4 = FUN_0050ff38(*(long *)(param_1 + 0x20) + 0x150);
      puVar5 = (ushort *)FUN_00510ad0(uVar4,param_1,param_2);
      return puVar5;
    }
  }
  return puVar5;
}


// ===== 00510838  FUN_00510838 =====

undefined4 * FUN_00510838(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  puVar10 = &DAT_0025d4b0;
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    puVar10 = (undefined4 *)*param_1;
  }
  puVar2 = &DAT_0025d4b0;
  if (7 < (uint)puVar10[6]) {
    puVar2 = *(undefined4 **)(puVar10 + 4);
  }
  bVar3 = *(byte *)(puVar2 + 1);
  bVar4 = *(byte *)((long)puVar2 + 5);
  bVar5 = *(byte *)((long)puVar2 + 6);
  bVar6 = *(byte *)((long)puVar2 + 7);
  uVar13 = (uint)bVar3 * 0x1000000 | (uint)bVar4 << 0x10 | (uint)bVar5 << 8 | (uint)bVar6;
  if (uVar13 != 0) {
    uVar8 = *(uint *)(param_2 + 0x68);
    if (*(uint *)(param_2 + 0x68) <= *(uint *)(param_2 + 0x6c)) {
      uVar8 = *(uint *)(param_2 + 0x6c);
    }
    uVar1 = 0x40000000;
    if (uVar8 != 0) {
      uVar1 = uVar8;
    }
    puVar9 = (ushort *)FUN_00510f7c(puVar2,0);
    iVar11 = 0;
    if (uVar13 != 1) {
      iVar12 = 0;
      iVar11 = 0;
      uVar13 = (uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8;
      do {
        puVar10 = &DAT_0025d4b0;
        if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
          puVar10 = (undefined4 *)*param_1;
        }
        puVar2 = &DAT_0025d4b0;
        if (7 < (uint)puVar10[6]) {
          puVar2 = *(undefined4 **)(puVar10 + 4);
        }
        puVar9 = (ushort *)FUN_00510f7c(puVar2,iVar12 + 1);
        uVar7 = *puVar9;
        uVar8 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
        if ((uVar1 <= ((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8) && uVar8 < uVar13) ||
           ((uVar13 < uVar1 && (uVar13 < uVar8)))) {
          iVar11 = iVar12 + 1;
          uVar13 = uVar8;
        }
        iVar12 = iVar12 + 1;
      } while ((uint)bVar3 * 0x1000000 + (uint)bVar4 * 0x10000 + (uint)bVar5 * 0x100 + (uint)bVar6 +
               -1 != iVar12);
    }
    puVar10 = &DAT_0025d4b0;
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      puVar10 = (undefined4 *)*param_1;
    }
    puVar2 = &DAT_0025d4b0;
    if (7 < (uint)puVar10[6]) {
      puVar2 = *(undefined4 **)(puVar10 + 4);
    }
    puVar10 = (undefined4 *)FUN_00510f7c(puVar2,iVar11);
    return puVar10;
  }
  return &DAT_0025d4b0;
}


// ===== 005109bc  FUN_005109bc =====

undefined4 *
FUN_005109bc(ushort *param_1,ulong param_2,long param_3,uint *param_4,uint *param_5,ulong param_6,
            uint *param_7)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined4 *puVar8;
  int iVar9;
  
  uVar4 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar4 != 0) {
    param_2 = param_2 & 0xffffffff;
    iVar5 = (int)param_1 - *(int *)(param_3 + 0x10);
    iVar9 = -9;
    do {
      if ((param_6 & 0xffffffff) <= param_2) {
        return &DAT_0025d4b0;
      }
      uVar2 = *(uint *)(param_1 + param_2 * 2 + 2);
      uVar3 = *(uint *)((long)(param_1 + param_2 * 2 + 2) + 4);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar6 = uVar3 - uVar2;
      if (uVar3 < uVar2 || uVar6 == 0) {
        return &DAT_0025d4b0;
      }
      if (uVar6 < 9) {
        return &DAT_0025d4b0;
      }
      if ((uint)(*(int *)(param_3 + 0x18) - iVar5) < uVar3) {
        return &DAT_0025d4b0;
      }
      pbVar1 = (byte *)&DAT_0025d4b0;
      if (uVar2 != 0) {
        pbVar1 = (byte *)((long)param_1 + (ulong)uVar2);
      }
      uVar3 = (*(uint *)(pbVar1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(pbVar1 + 4) & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      if (uVar3 != 0x64757065) {
        if (uVar3 != 0x706e6720) {
          return &DAT_0025d4b0;
        }
        if (param_7 != (uint *)0x0) {
          *param_7 = uVar4;
        }
        if (param_4 != (uint *)0x0) {
          *param_4 = (int)(short)((ushort)*pbVar1 << 8) | (uint)pbVar1[1];
        }
        if (param_5 != (uint *)0x0) {
          *param_5 = (int)(short)((ushort)pbVar1[2] << 8) | (uint)pbVar1[3];
        }
        puVar8 = (undefined4 *)rive_hb_blob_create_sub_blob(param_3,iVar5 + uVar2 + 8,uVar6 - 8);
        return puVar8;
      }
      if (uVar6 - 8 < 2) {
        return &DAT_0025d4b0;
      }
      bVar7 = iVar9 != -1;
      iVar9 = iVar9 + 1;
      param_2 = (ulong)((uint)(*(ushort *)(pbVar1 + 8) >> 8) |
                       (*(ushort *)(pbVar1 + 8) & 0xff00ff) << 8);
    } while (bVar7);
  }
  return &DAT_0025d4b0;
}


// ===== 00510ad0  FUN_00510ad0 =====

undefined4 * FUN_00510ad0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar8 = &DAT_0025d4b0;
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)*param_1;
  }
  puVar2 = &DAT_0025d4b0;
  if (7 < (uint)puVar8[6]) {
    puVar2 = *(undefined4 **)(puVar8 + 4);
  }
  lVar4 = FUN_00510cb8(puVar2);
  puVar8 = &DAT_0025d4b0;
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)*param_1;
  }
  puVar2 = &DAT_0025d4b0;
  if (7 < (uint)puVar8[6]) {
    puVar2 = *(undefined4 **)(puVar8 + 4);
  }
  lVar5 = FUN_00510dd8(lVar4,param_3,puVar2,&local_50);
  puVar8 = &DAT_0025d4b0;
  if ((lVar5 != 0 && *(char *)(lVar4 + 0x2c) != '\0') && *(char *)(lVar4 + 0x2d) != '\0') {
    local_58 = 0;
    local_5c = 0;
    uVar6 = FUN_00510e50(lVar5,param_3,local_50,(long)&local_58 + 4,&local_58,&local_5c);
    if ((uVar6 & 1) != 0) {
      puVar7 = (undefined4 *)param_1[1];
      uVar6 = (ulong)local_58._4_4_;
      puVar2 = &DAT_0025d4b0;
      if (puVar7 != (undefined4 *)0x0) {
        puVar2 = puVar7;
      }
      uVar11 = puVar2[6];
      puVar8 = &DAT_0025d4b0;
      if ((local_58._4_4_ <= uVar11) && ((uint)local_58 <= uVar11 - local_58._4_4_)) {
        if (local_5c == 0x13) {
          if ((uint)local_58 < 4) goto LAB_00510c88;
          iVar9 = local_58._4_4_ + 4;
          puVar8 = &DAT_0025d4b0;
          if (3 < uVar11) {
            puVar8 = *(undefined4 **)(puVar2 + 4);
          }
          pbVar1 = (byte *)((long)puVar8 + uVar6);
          pbVar10 = pbVar1 + 3;
          uVar11 = (uint)*pbVar1 << 0x18 | (uint)pbVar1[1] << 0x10;
          uVar12 = (uint)pbVar1[2];
        }
        else if (local_5c == 0x12) {
          if ((uint)local_58 < 0xc) goto LAB_00510c88;
          iVar9 = local_58._4_4_ + 0xc;
          puVar8 = &DAT_0025d4b0;
          if (3 < uVar11) {
            puVar8 = *(undefined4 **)(puVar2 + 4);
          }
          pbVar10 = (byte *)((long)puVar8 + uVar6 + 0xb);
          uVar11 = (uint)*(byte *)((long)puVar8 + uVar6 + 8) << 0x18 |
                   (uint)*(byte *)((long)puVar8 + uVar6 + 9) << 0x10;
          uVar12 = (uint)*(byte *)((long)puVar8 + uVar6 + 10);
        }
        else {
          if ((local_5c != 0x11) || ((uint)local_58 < 9)) goto LAB_00510c88;
          iVar9 = local_58._4_4_ + 9;
          puVar8 = &DAT_0025d4b0;
          if (3 < uVar11) {
            puVar8 = *(undefined4 **)(puVar2 + 4);
          }
          pbVar10 = (byte *)((long)puVar8 + uVar6 + 8);
          uVar11 = (uint)*(byte *)((long)puVar8 + uVar6 + 5) << 0x18 |
                   (uint)*(byte *)((long)puVar8 + uVar6 + 6) << 0x10;
          uVar12 = (uint)*(byte *)((long)puVar8 + uVar6 + 7);
        }
        puVar8 = (undefined4 *)
                 rive_hb_blob_create_sub_blob(puVar7,iVar9,uVar11 | uVar12 << 8 | (uint)*pbVar10);
      }
    }
  }
LAB_00510c88:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00510cb8  FUN_00510cb8 =====

undefined4 * FUN_00510cb8(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  
  uVar3 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  if (uVar3 != 0) {
    uVar7 = *(uint *)(param_2 + 0x68);
    if (*(uint *)(param_2 + 0x68) <= *(uint *)(param_2 + 0x6c)) {
      uVar7 = *(uint *)(param_2 + 0x6c);
    }
    uVar9 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
    uVar1 = 0x40000000;
    if (uVar7 != 0) {
      uVar1 = uVar7;
    }
    if (uVar9 >> 0x10 == 0 && (uVar9 & 0xffff) == 0) {
      puVar5 = &DAT_0025d4b0;
    }
    else {
      puVar5 = (undefined4 *)(param_1 + 8);
    }
    if (uVar3 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      puVar6 = (undefined4 *)(param_1 + 0x38);
      bVar2 = *(byte *)(param_1 + 0x34);
      if (*(byte *)(param_1 + 0x34) <= *(byte *)((long)puVar5 + 0x2d)) {
        bVar2 = *(byte *)((long)puVar5 + 0x2d);
      }
      uVar9 = (uint)bVar2;
      uVar8 = 1;
      do {
        uVar4 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
        uVar10 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
        puVar5 = &DAT_0025d4b0;
        if (uVar8 < uVar10) {
          uVar4 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 |
                  (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
          uVar10 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
          puVar5 = puVar6;
        }
        puVar11 = &DAT_0025d4b0;
        if (uVar8 < uVar10) {
          puVar11 = puVar6;
        }
        bVar2 = *(byte *)(puVar5 + 0xb);
        if (*(byte *)(puVar5 + 0xb) <= *(byte *)((long)puVar11 + 0x2d)) {
          bVar2 = *(byte *)((long)puVar11 + 0x2d);
        }
        uVar4 = (uint)bVar2;
        if (((uVar1 <= uVar4) && (uVar4 < uVar9)) || ((uVar9 < uVar1 && (uVar9 < uVar4)))) {
          uVar7 = (uint)uVar8;
          uVar9 = uVar4;
        }
        uVar8 = uVar8 + 1;
        puVar6 = puVar6 + 0xc;
      } while (uVar3 != uVar8);
    }
    uVar3 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
    if (uVar7 < (uVar3 >> 0x10 | uVar3 << 0x10)) {
      return (undefined4 *)(param_1 + (ulong)uVar7 * 0x30 + 8);
    }
  }
  return &DAT_0025d4b0;
}


// ===== 00510dd8  FUN_00510dd8 =====

ushort * FUN_00510dd8(uint *param_1,uint param_2,long param_3,long *param_4)

{
  uint uVar1;
  ushort *puVar2;
  ulong uVar3;
  
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  *param_4 = param_3 + (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
  uVar1 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar3 = (ulong)uVar1;
  if (uVar1 != 0) {
    puVar2 = (ushort *)
             (param_3 +
             (ulong)(byte)*param_1 * 0x1000000 + (ulong)*(byte *)((long)param_1 + 1) * 0x10000 +
             (ulong)*(byte *)((long)param_1 + 2) * 0x100 + (ulong)*(byte *)((long)param_1 + 3));
    do {
      if (((uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8) <= param_2 &&
          param_2 <= ((uint)(puVar2[1] >> 8) | (puVar2[1] & 0xff00ff) << 8)) {
        return puVar2;
      }
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 4;
    } while (uVar3 != 0);
  }
  return (ushort *)0x0;
}


// ===== 00510e50  FUN_00510e50 =====

undefined8
FUN_00510e50(ushort *param_1,uint param_2,long param_3,int *param_4,int *param_5,uint *param_6)

{
  uint *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = *param_1;
  if ((((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8) <= param_2) &&
     (param_2 <= ((uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8))) {
    param_2 = param_2 - ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
    uVar6 = (*(uint *)(param_1 + 2) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 2) & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    puVar3 = (ushort *)&DAT_0025d4b0;
    if (uVar6 != 0) {
      puVar3 = (ushort *)(param_3 + (ulong)uVar6);
    }
    *param_6 = (uint)(puVar3[1] >> 8) | (puVar3[1] & 0xff00ff) << 8;
    uVar6 = (uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8;
    if (uVar6 == 3) {
      puVar2 = puVar3 + (ulong)param_2 + 4;
      pbVar5 = (byte *)((long)puVar2 + 1);
      uVar6 = (uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8;
      if (uVar6 < ((uint)(puVar3[(ulong)(param_2 + 1) + 4] >> 8) |
                  (puVar3[(ulong)(param_2 + 1) + 4] & 0xff00ff) << 8)) {
        uVar7 = (*(uint *)(puVar3 + 2) & 0xff00ff00) >> 8 | (*(uint *)(puVar3 + 2) & 0xff00ff) << 8;
        *param_4 = (uVar7 >> 0x10 | uVar7 << 0x10) + uVar6;
        uVar6 = (uint)(byte)*puVar2 << 8;
        uVar7 = (uint)(puVar3[(ulong)(param_2 + 1) + 4] >> 8) |
                (puVar3[(ulong)(param_2 + 1) + 4] & 0xff00ff) << 8;
LAB_00510f5c:
        *param_5 = uVar7 - (uVar6 | *pbVar5);
        return 1;
      }
    }
    else if (uVar6 == 1) {
      puVar1 = (uint *)(puVar3 + (ulong)param_2 * 2 + 4);
      uVar6 = (*(uint *)(puVar3 + (ulong)(param_2 + 1) * 2 + 4) & 0xff00ff00) >> 8 |
              (*(uint *)(puVar3 + (ulong)(param_2 + 1) * 2 + 4) & 0xff00ff) << 8;
      pbVar5 = (byte *)((long)puVar1 + 3);
      uVar7 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
      uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
      if (uVar7 < (uVar6 >> 0x10 | uVar6 << 0x10)) {
        uVar6 = (*(uint *)(puVar3 + 2) & 0xff00ff00) >> 8 | (*(uint *)(puVar3 + 2) & 0xff00ff) << 8;
        *param_4 = (uVar6 >> 0x10 | uVar6 << 0x10) + uVar7;
        uVar6 = (*(uint *)(puVar3 + (ulong)(param_2 + 1) * 2 + 4) & 0xff00ff00) >> 8 |
                (*(uint *)(puVar3 + (ulong)(param_2 + 1) * 2 + 4) & 0xff00ff) << 8;
        uVar7 = uVar6 >> 0x10 | uVar6 << 0x10;
        uVar6 = (uint)(byte)*puVar1 << 0x18 | (uint)*(byte *)((long)puVar1 + 1) << 0x10 |
                (uint)*(byte *)((long)puVar1 + 2) << 8;
        goto LAB_00510f5c;
      }
    }
  }
  return 0;
}


// ===== 00510f7c  FUN_00510f7c =====

uint * FUN_00510f7c(long param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
  puVar2 = &DAT_0025d4b0;
  if (param_2 < (uVar1 >> 0x10 | uVar1 << 0x10)) {
    puVar2 = (uint *)(param_1 + (ulong)param_2 * 4 + 8);
  }
  uVar1 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  puVar2 = &DAT_0025d4b0;
  if (uVar1 != 0) {
    puVar2 = (uint *)(param_1 + (ulong)uVar1);
  }
  return puVar2;
}


// ===== 00510fbc  FUN_00510fbc =====

void FUN_00510fbc(void *param_1)

{
  free(*(void **)((long)param_1 + 0x50));
  rive_hb_blob_destroy(*(undefined8 *)((long)param_1 + 0x58));
  free(param_1);
  return;
}


// ===== 00510fec  FUN_00510fec =====

void FUN_00510fec(void *param_1)

{
  rive_hb_blob_destroy(*(undefined8 *)((long)param_1 + 0x18));
  *(undefined8 *)((long)param_1 + 0x18) = 0;
  rive_hb_blob_destroy(*(undefined8 *)((long)param_1 + 0x20));
  free(param_1);
  return;
}


// ===== 00511020  FUN_00511020 =====

void FUN_00511020(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && (param_1 != (undefined8 *)&DAT_0025d4b0)) {
    free((void *)param_1[6]);
    rive_hb_blob_destroy(*param_1);
    *param_1 = 0;
    if (*(int *)(param_1 + 3) - 1U < 0xfffffffe) {
      *(undefined4 *)((long)param_1 + 0x1c) = 0;
      free((void *)param_1[4]);
    }
    free(param_1);
    return;
  }
  return;
}


// ===== 00511094  FUN_00511094 =====

void FUN_00511094(undefined4 *param_1)

{
  void *__ptr;
  
  if ((param_1 != (undefined4 *)0x0) && (param_1 != &DAT_0025d4b0)) {
    __ptr = *(void **)(param_1 + 10);
    if (__ptr != (void *)0x0) {
      FUN_00511c70(__ptr);
      free(__ptr);
    }
    rive_hb_blob_destroy(*(undefined8 *)(param_1 + 8));
    free(param_1);
    return;
  }
  return;
}


// ===== 005110f4  FUN_005110f4 =====

void FUN_005110f4(undefined4 *param_1)

{
  long lVar1;
  int *piVar2;
  
  if ((param_1 != (undefined4 *)0x0) && (param_1 != &DAT_0025d4b0)) {
    piVar2 = *(int **)(param_1 + 0x4c);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 - 1U < 0xfffffffe) {
        piVar2[1] = 0;
        free(*(void **)(piVar2 + 2));
      }
      free(piVar2);
    }
    FUN_00511a90(param_1);
    FUN_00511b00(param_1 + 0x46);
    FUN_00511b44(param_1 + 0x42);
    piVar2 = param_1 + 0x28;
    if (*piVar2 - 1U < 0xfffffffe) {
      param_1[0x29] = 0;
      free(*(void **)(param_1 + 0x2a));
    }
    lVar1 = *(long *)(param_1 + 0xc);
    piVar2[0] = 0;
    piVar2[1] = 0;
    *(undefined8 *)(param_1 + 0x2a) = 0;
    if (lVar1 != 0) {
      rive_hb_blob_destroy();
    }
    free(param_1);
    return;
  }
  return;
}


