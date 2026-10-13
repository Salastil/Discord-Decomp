// ===== 00100ef4  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_00105740);
  return;
}


// ===== 00100f04  FUN_00100f04 =====

void FUN_00100f04(void)

{
  return;
}


// ===== 00100f0c  _FINI_0 =====

void _FINI_0(void)

{
  FUN_00100f04();
  return;
}


// ===== 00100f14  FUN_00100f14 =====

void FUN_00100f14(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 00100f28  FUN_00100f28 =====

void FUN_00100f28(undefined8 param_1)

{
  __cxa_atexit(FUN_00100f14,param_1,&PTR_LOOP_00105740);
  return;
}


// ===== 00100f44  FUN_00100f44 =====

void FUN_00100f44(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x720))();
  if (cVar1 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3);
  return;
}


// ===== 00100fa8  JNI_OnLoad =====

undefined4 JNI_OnLoad(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined4 uVar5;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = 0x10006;
  local_40 = (long *)0x0;
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1,&local_40,0x10006);
  if (iVar2 == 0) {
    lVar3 = (**(code **)(*local_40 + 0x30))(local_40,"java/lang/RuntimeException");
    if (lVar3 == 0) {
      __android_log_print(6,"libimagepipeline","could not find RuntimeException class");
    }
    else {
      DAT_00109a38 = (**(code **)(*local_40 + 0xa8))(local_40,lVar3);
      iVar2 = FUN_001010e4(local_40);
      if (iVar2 == -1) {
        pcVar4 = "Could not register Bitmaps methods";
      }
      else {
        iVar2 = FUN_00101188(local_40);
        if (iVar2 == -1) {
          pcVar4 = "Could not register DalvikPurgeableDecoder methods";
        }
        else {
          iVar2 = FUN_00101538(local_40);
          if (iVar2 != -1) goto LAB_001010b8;
          pcVar4 = "Could not register NativeMemoryChunk methods";
        }
      }
      FUN_00100f44(local_40,DAT_00109a38,pcVar4);
    }
  }
  uVar5 = 0xffffffff;
LAB_001010b8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001010e4  FUN_001010e4 =====

undefined4 FUN_001010e4(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/RuntimeException");
  if (lVar2 != 0) {
    DAT_00109a40 = (**(code **)(*param_1 + 0xa8))(param_1,lVar2);
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1,"com/facebook/imagepipeline/nativecode/Bitmaps");
    if (lVar2 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x6b8))(param_1,lVar2,&PTR_s_nativeCopyBitmap_00109978,1);
      if (iVar1 == 0) {
        return 0x10006;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}


// ===== 00101188  FUN_00101188 =====

undefined4 FUN_00101188(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/RuntimeException");
  if (lVar2 != 0) {
    DAT_00109a40 = (**(code **)(*param_1 + 0xa8))(param_1,lVar2);
    lVar2 = (**(code **)(*param_1 + 0x30))
                      (param_1,"com/facebook/imagepipeline/nativecode/DalvikPurgeableDecoder");
    if (lVar2 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x6b8))(param_1,lVar2,&PTR_s_nativePinBitmap_00109990,1);
      if (iVar1 == 0) {
        return 0x10006;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}


// ===== 0010122c  FUN_0010122c =====

void FUN_0010122c(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                 ,int param_6,int param_7)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  void *local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = (void *)0x0;
  local_60 = (void *)0x0;
  iVar3 = AndroidBitmap_lockPixels(param_1,param_3,&local_60);
  if ((iVar3 == 0) && (local_60 != (void *)0x0)) {
    iVar3 = AndroidBitmap_lockPixels(param_1,param_5,&local_68);
    if ((iVar3 == 0) && (local_68 != (void *)0x0)) {
      if (local_60 != local_68) {
        if (param_4 == param_6) {
          memcpy(local_60,local_68,(long)(param_7 * param_4));
        }
        else if (0 < param_7) {
          iVar3 = param_4;
          if (param_6 <= param_4) {
            iVar3 = param_6;
          }
          do {
            memcpy(local_60,local_68,(long)iVar3);
            param_7 = param_7 + -1;
            local_60 = (void *)((long)local_60 + (long)param_4);
            local_68 = (void *)((long)local_68 + (long)param_6);
          } while (param_7 != 0);
        }
      }
      lVar4 = (**(code **)(*param_1 + 0x78))(param_1);
      if (lVar4 == 0) {
        AndroidBitmap_unlockPixels(param_1,param_5);
      }
      else {
        (**(code **)(*param_1 + 0x88))(param_1);
        AndroidBitmap_unlockPixels(param_1,param_5);
        cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
        if (cVar2 != '\0') {
          (**(code **)(*param_1 + 0x80))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
        }
        (**(code **)(*param_1 + 0x68))(param_1,lVar4);
      }
    }
    else {
      cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
      if (cVar2 == '\0') {
        (**(code **)(*param_1 + 0x70))(param_1,DAT_00109a40,"Could not lock source\'s pixels");
      }
    }
    lVar4 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar4 == 0) {
      AndroidBitmap_unlockPixels(param_1,param_3);
    }
    else {
      (**(code **)(*param_1 + 0x88))(param_1);
      AndroidBitmap_unlockPixels(param_1,param_3);
      cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0x80))(param_1);
        (**(code **)(*param_1 + 0x88))(param_1);
      }
      (**(code **)(*param_1 + 0x68))(param_1,lVar4);
    }
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x70))(param_1,DAT_00109a40,"Could not lock desination\'s pixels");
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001014cc  FUN_001014cc =====

void FUN_001014cc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = AndroidBitmap_lockPixels(param_1,param_3,0);
  if ((iVar2 != 0) && (cVar1 = (**(code **)(*param_1 + 0x720))(param_1), cVar1 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00101534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x70))(param_1,DAT_00109a40,"Failed to pin Bitmap");
    return;
  }
  return;
}


// ===== 00101538  FUN_00101538 =====

undefined4 FUN_00101538(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/RuntimeException");
  if (lVar2 != 0) {
    DAT_00109a48 = (**(code **)(*param_1 + 0xa8))(param_1,lVar2);
    lVar2 = (**(code **)(*param_1 + 0x30))
                      (param_1,"com/facebook/imagepipeline/memory/NativeMemoryChunk");
    if (lVar2 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x6b8))(param_1,lVar2,&PTR_s_nativeAllocate_001099a8,6);
      if (iVar1 == 0) {
        return 0x10006;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}


// ===== 001015dc  FUN_001015dc =====

void * FUN_001015dc(long *param_1,undefined8 param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = malloc((long)param_3);
  if (pvVar1 == (void *)0x0) {
    (**(code **)(*param_1 + 0x70))(param_1,DAT_00109a48,"could not allocate memory");
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}


// ===== 0010162c  FUN_0010162c =====

void FUN_0010162c(undefined8 param_1,undefined8 param_2,void *param_3)

{
  free(param_3);
  return;
}


// ===== 00101634  FUN_00101634 =====

void FUN_00101634(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00101650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x680))(param_1,param_4,param_5,param_6,param_3);
  return;
}


// ===== 00101654  FUN_00101654 =====

void FUN_00101654(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00101670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x640))(param_1,param_4,param_5,param_6,param_3);
  return;
}


// ===== 00101674  FUN_00101674 =====

void FUN_00101674(undefined8 param_1,undefined8 param_2,void *param_3,void *param_4,int param_5)

{
  memcpy(param_3,param_4,(long)param_5);
  return;
}


// ===== 00101688  FUN_00101688 =====

undefined1 FUN_00101688(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  return *param_3;
}


// ===== 00101690  FUN_00101690 =====

void FUN_00101690(void)

{
  (*(code *)PTR_00105928)();
  return;
}


// ===== 001016b0  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00105930)();
  return;
}


// ===== 001016c0  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00105938)();
  return;
}


// ===== 001016d0  <EXTERNAL>::__android_log_print =====

void __android_log_print(void)

{
  (*(code *)PTR___android_log_print_00105940)();
  return;
}


// ===== 001016e0  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00105948)();
  return;
}


// ===== 001016f0  <EXTERNAL>::AndroidBitmap_lockPixels =====

void AndroidBitmap_lockPixels(void)

{
  (*(code *)PTR_AndroidBitmap_lockPixels_00105950)();
  return;
}


// ===== 00101700  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00105958)();
  return pvVar1;
}


// ===== 00101710  <EXTERNAL>::AndroidBitmap_unlockPixels =====

void AndroidBitmap_unlockPixels(void)

{
  (*(code *)PTR_AndroidBitmap_unlockPixels_00105960)();
  return;
}


// ===== 00101720  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00105968)();
  return pvVar1;
}


// ===== 00101730  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00105970)();
  return;
}


// ===== 0010a000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010a008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010a010  <EXTERNAL>::__android_log_print =====

/* WARNING: Control flow encountered bad instruction data */

void __android_log_print(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010a018  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010a020  <EXTERNAL>::AndroidBitmap_lockPixels =====

/* WARNING: Control flow encountered bad instruction data */

void AndroidBitmap_lockPixels(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010a028  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010a030  <EXTERNAL>::AndroidBitmap_unlockPixels =====

/* WARNING: Control flow encountered bad instruction data */

void AndroidBitmap_unlockPixels(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010a038  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010a040  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


