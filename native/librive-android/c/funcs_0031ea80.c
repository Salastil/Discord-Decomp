// ===== 0031ea80  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_006513f0);
  return;
}


// ===== 0031ea90  FUN_0031ea90 =====

void FUN_0031ea90(void)

{
  return;
}


// ===== 0031ea98  _FINI_0 =====

void _FINI_0(void)

{
  FUN_0031ea90();
  return;
}


// ===== 0031eaa0  FUN_0031eaa0 =====

void FUN_0031eaa0(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0031eaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 0031eab4  FUN_0031eab4 =====

void FUN_0031eab4(undefined8 param_1)

{
  __cxa_atexit(FUN_0031eaa0,param_1,&PTR_LOOP_006513f0);
  return;
}


// ===== 0031ead0  Java_app_rive_runtime_kotlin_core_Artboard_cppName =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppName
               (long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3 + 0x11;
  if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(param_3 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0031eaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1,lVar1);
  return;
}


// ===== 0031eaf0  Java_app_rive_runtime_kotlin_core_Artboard_cppAnimationNameByIndex =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppAnimationNameByIndex
               (long *param_1,undefined8 param_2,Artboard *param_3,int param_4)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_40;
  undefined8 uStack_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar3 = rive::Artboard::animation(param_3,(long)param_4);
  if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
    uStack_38 = *(undefined8 *)(lVar3 + 0x18);
    local_40 = *(ulong *)(lVar3 + 0x10);
    local_30 = *(void **)(lVar3 + 0x20);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_40,*(char **)(lVar3 + 0x20),*(ulong *)(lVar3 + 0x18));
  }
  pvVar1 = (void *)((ulong)&local_40 | 1);
  if ((local_40 & 1) != 0) {
    pvVar1 = local_30;
  }
  uVar4 = (**(code **)(*param_1 + 0x538))(param_1,pvVar1);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0031ebb0  Java_app_rive_runtime_kotlin_core_Artboard_cppStateMachineNameByIndex =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppStateMachineNameByIndex
               (long *param_1,undefined8 param_2,Artboard *param_3,int param_4)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_40;
  undefined8 uStack_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar3 = rive::Artboard::stateMachine(param_3,(long)param_4);
  if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
    uStack_38 = *(undefined8 *)(lVar3 + 0x18);
    local_40 = *(ulong *)(lVar3 + 0x10);
    local_30 = *(void **)(lVar3 + 0x20);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_40,*(char **)(lVar3 + 0x20),*(ulong *)(lVar3 + 0x18));
  }
  pvVar1 = (void *)((ulong)&local_40 | 1);
  if ((local_40 & 1) != 0) {
    pvVar1 = local_30;
  }
  uVar4 = (**(code **)(*param_1 + 0x538))(param_1,pvVar1);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0031ec70  Java_app_rive_runtime_kotlin_core_Artboard_cppAnimationByIndex =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppAnimationByIndex
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rive::ArtboardInstance::animationAt(param_3);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 0031ecc4  Java_app_rive_runtime_kotlin_core_Artboard_cppAnimationByName =====

undefined8
Java_app_rive_runtime_kotlin_core_Artboard_cppAnimationByName
          (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 local_48;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  rive::ArtboardInstance::animationNamed((basic_string *)param_3);
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031ed40  Java_app_rive_runtime_kotlin_core_Artboard_cppAnimationCount =====

ulong Java_app_rive_runtime_kotlin_core_Artboard_cppAnimationCount
                (undefined8 param_1,undefined8 param_2,long param_3)

{
  return (ulong)(*(long *)(param_3 + 0xa90) - *(long *)(param_3 + 0xa88)) >> 3;
}


// ===== 0031ed54  Java_app_rive_runtime_kotlin_core_Artboard_cppStateMachineByIndex =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppStateMachineByIndex
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rive::ArtboardInstance::stateMachineAt(param_3);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 0031eda8  Java_app_rive_runtime_kotlin_core_Artboard_cppStateMachineByName =====

undefined8
Java_app_rive_runtime_kotlin_core_Artboard_cppStateMachineByName
          (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 local_48;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  rive::ArtboardInstance::stateMachineNamed((basic_string *)param_3);
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031ee24  Java_app_rive_runtime_kotlin_core_Artboard_cppStateMachineCount =====

ulong Java_app_rive_runtime_kotlin_core_Artboard_cppStateMachineCount
                (undefined8 param_1,undefined8 param_2,long param_3)

{
  return (ulong)(*(long *)(param_3 + 0xaa8) - *(long *)(param_3 + 0xaa0)) >> 3;
}


// ===== 0031ee38  Java_app_rive_runtime_kotlin_core_Artboard_cppInputByNameAtPath =====

undefined8
Java_app_rive_runtime_kotlin_core_Artboard_cppInputByNameAtPath
          (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4,
          _JNIEnv *param_5)

{
  long lVar1;
  undefined8 uVar2;
  _jstring *p_Var3;
  basic_string local_68 [16];
  void *local_58;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  p_Var3 = param_3;
  rive_android::JStringToString(param_1,param_4,param_3);
  rive_android::JStringToString(param_1,param_5,p_Var3);
  uVar2 = rive::ArtboardInstance::input((ArtboardInstance *)param_3,local_50,local_68);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031eee0  Java_app_rive_runtime_kotlin_core_Artboard_cppGetVolume =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppGetVolume
               (undefined8 param_1,undefined8 param_2,Artboard *param_3)

{
  rive::Artboard::volume(param_3);
  return;
}


// ===== 0031eee8  Java_app_rive_runtime_kotlin_core_Artboard_cppSetVolume =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppSetVolume
               (float param_1,undefined8 param_2,undefined8 param_3,Artboard *param_4)

{
  rive::Artboard::volume(param_4,param_1);
  return;
}


// ===== 0031eef0  Java_app_rive_runtime_kotlin_core_Artboard_cppFindTextValueRun =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppFindTextValueRun
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  TextValueRun *pTVar2;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  pTVar2 = rive::Artboard::find<rive::TextValueRun>((Artboard *)param_3,local_40);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pTVar2);
}


// ===== 0031ef68  rive::Artboard::find<rive::TextValueRun> =====

/* rive::TextValueRun* rive::Artboard::find<rive::TextValueRun>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

TextValueRun * __thiscall
rive::Artboard::find<rive::TextValueRun>(Artboard *this,basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  basic_string *__s2;
  TextValueRun TVar3;
  basic_string bVar4;
  int iVar5;
  ulong uVar6;
  TextValueRun *pTVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined8 **)(this + 0xa58);
  puVar9 = *(undefined8 **)(this + 0xa60);
  if (puVar8 != puVar9) {
    do {
      pTVar7 = (TextValueRun *)*puVar8;
      if ((pTVar7 != (TextValueRun *)0x0) &&
         (uVar6 = (**(code **)(*(long *)pTVar7 + 0x18))(pTVar7,0x87), (uVar6 & 1) != 0)) {
        TVar3 = pTVar7[0x10];
        bVar4 = *param_1;
        sVar1 = (ulong)((byte)TVar3 >> 1);
        if (((byte)TVar3 & 1) != 0) {
          sVar1 = *(size_t *)(pTVar7 + 0x18);
        }
        sVar2 = (ulong)((byte)bVar4 >> 1);
        if (((byte)bVar4 & 1) != 0) {
          sVar2 = *(size_t *)(param_1 + 8);
        }
        if (sVar1 == sVar2) {
          __s2 = param_1 + 1;
          if (((byte)bVar4 & 1) != 0) {
            __s2 = *(basic_string **)(param_1 + 0x10);
          }
          if (((byte)TVar3 & 1) == 0) {
            if ((byte)TVar3 < 2) {
              return pTVar7;
            }
            uVar6 = 0;
            while (pTVar7[uVar6 + 0x11] == *(TextValueRun *)(__s2 + uVar6)) {
              uVar6 = uVar6 + 1;
              if ((byte)TVar3 >> 1 == uVar6) {
                return pTVar7;
              }
            }
          }
          else {
            iVar5 = memcmp(*(void **)(pTVar7 + 0x20),__s2,*(size_t *)(pTVar7 + 0x18));
            if (iVar5 == 0) {
              return pTVar7;
            }
          }
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar9);
  }
  return (TextValueRun *)0x0;
}


// ===== 0031f05c  Java_app_rive_runtime_kotlin_core_Artboard_cppFindValueOfTextValueRun =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppFindValueOfTextValueRun
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  TextValueRun *pTVar1;
  long lVar2;
  TextValueRun *pTVar3;
  undefined8 uVar4;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  pTVar3 = rive::Artboard::find<rive::TextValueRun>((Artboard *)param_3,local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (pTVar3 == (TextValueRun *)0x0) {
    uVar4 = 0;
  }
  else {
    pTVar1 = pTVar3 + 0x91;
    if (((byte)pTVar3[0x90] & 1) != 0) {
      pTVar1 = *(TextValueRun **)(pTVar3 + 0xa0);
    }
    uVar4 = (**(code **)(*(long *)param_1 + 0x538))(param_1,pTVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0031f108  Java_app_rive_runtime_kotlin_core_Artboard_cppSetValueOfTextValueRun =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppSetValueOfTextValueRun
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4,
               _JNIEnv *param_5)

{
  size_t sVar1;
  size_t sVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long lVar4;
  int iVar5;
  TextValueRun *pTVar6;
  undefined8 uVar7;
  TextValueRun *__s2;
  _jstring *p_Var8;
  ulong uVar9;
  TextValueRun *pTVar10;
  byte bVar11;
  basic_string local_68 [8];
  size_t local_60;
  TextValueRun *local_58;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  p_Var8 = param_3;
  rive_android::JStringToString(param_1,param_4,param_3);
  pTVar6 = rive::Artboard::find<rive::TextValueRun>((Artboard *)param_3,local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (pTVar6 == (TextValueRun *)0x0) {
    uVar7 = 0;
    goto LAB_0031f244;
  }
  rive_android::JStringToString(param_1,param_5,p_Var8);
  bVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pTVar6 + 0x90);
  uVar9 = (ulong)((byte)bVar3 >> 1);
  sVar1 = uVar9;
  if (((byte)bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(pTVar6 + 0x98);
  }
  bVar11 = (byte)local_68[0] & 1;
  sVar2 = (ulong)((byte)local_68[0] >> 1);
  if (((byte)local_68[0] & 1) != 0) {
    sVar2 = local_60;
  }
  if (sVar1 == sVar2) {
    __s2 = (TextValueRun *)((ulong)local_68 | 1);
    if (((byte)local_68[0] & 1) != 0) {
      __s2 = local_58;
    }
    if (((byte)bVar3 & 1) == 0) {
      if (1 < (byte)bVar3) {
        pTVar10 = pTVar6 + 0x91;
        do {
          if (*pTVar10 != *__s2) goto LAB_0031f214;
          uVar9 = uVar9 - 1;
          pTVar10 = pTVar10 + 1;
          __s2 = __s2 + 1;
        } while (uVar9 != 0);
      }
    }
    else {
      iVar5 = memcmp(*(void **)(pTVar6 + 0xa0),__s2,*(size_t *)(pTVar6 + 0x98));
      if (iVar5 != 0) goto LAB_0031f214;
    }
  }
  else {
LAB_0031f214:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (pTVar6 + 0x90),local_68);
    (**(code **)(*(long *)pTVar6 + 0x98))(pTVar6);
    bVar11 = (byte)local_68[0] & 1;
  }
  if (bVar11 != 0) {
    operator_delete(local_58);
  }
  uVar7 = 1;
LAB_0031f244:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


// ===== 0031f26c  Java_app_rive_runtime_kotlin_core_Artboard_cppFindTextValueRunAtPath =====

undefined8
Java_app_rive_runtime_kotlin_core_Artboard_cppFindTextValueRunAtPath
          (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4,
          _JNIEnv *param_5)

{
  long lVar1;
  undefined8 uVar2;
  _jstring *p_Var3;
  basic_string local_68 [16];
  void *local_58;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  p_Var3 = param_3;
  rive_android::JStringToString(param_1,param_4,param_3);
  rive_android::JStringToString(param_1,param_5,p_Var3);
  uVar2 = rive::ArtboardInstance::getTextRun((ArtboardInstance *)param_3,local_50,local_68);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031f314  Java_app_rive_runtime_kotlin_core_Artboard_cppFindValueOfTextValueRunAtPath =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppFindValueOfTextValueRunAtPath
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4,
               _JNIEnv *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  _jstring *p_Var5;
  basic_string local_68 [16];
  void *local_58;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  p_Var5 = param_3;
  rive_android::JStringToString(param_1,param_4,param_3);
  rive_android::JStringToString(param_1,param_5,p_Var5);
  lVar3 = rive::ArtboardInstance::getTextRun((ArtboardInstance *)param_3,local_50,local_68);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = lVar3 + 0x91;
    if ((*(byte *)(lVar3 + 0x90) & 1) != 0) {
      lVar1 = *(long *)(lVar3 + 0xa0);
    }
    uVar4 = (**(code **)(*(long *)param_1 + 0x538))(param_1,lVar1);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 0031f3f4  Java_app_rive_runtime_kotlin_core_Artboard_cppSetValueOfTextValueRunAtPath =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppSetValueOfTextValueRunAtPath
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4,
               _JNIEnv *param_5,_JNIEnv *param_6)

{
  size_t sVar1;
  size_t sVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  char *__s2;
  _jstring *p_Var8;
  basic_string *pbVar9;
  ulong uVar10;
  char *pcVar11;
  byte bVar12;
  basic_string local_90 [8];
  size_t local_88;
  char *local_80;
  basic_string local_78 [16];
  void *local_68;
  basic_string local_60 [16];
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  p_Var8 = param_3;
  rive_android::JStringToString(param_1,param_4,param_3);
  rive_android::JStringToString(param_1,param_6,p_Var8);
  pbVar9 = local_78;
  plVar6 = (long *)rive::ArtboardInstance::getTextRun((ArtboardInstance *)param_3,local_60,pbVar9);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (plVar6 == (long *)0x0) {
    uVar7 = 0;
    goto LAB_0031f568;
  }
  rive_android::JStringToString(param_1,param_5,(_jstring *)pbVar9);
  bVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (plVar6 + 0x12);
  uVar10 = (ulong)((byte)bVar3 >> 1);
  sVar1 = uVar10;
  if (((byte)bVar3 & 1) != 0) {
    sVar1 = plVar6[0x13];
  }
  bVar12 = (byte)local_90[0] & 1;
  sVar2 = (ulong)((byte)local_90[0] >> 1);
  if (((byte)local_90[0] & 1) != 0) {
    sVar2 = local_88;
  }
  if (sVar1 == sVar2) {
    __s2 = (char *)((ulong)local_90 | 1);
    if (((byte)local_90[0] & 1) != 0) {
      __s2 = local_80;
    }
    if (((byte)bVar3 & 1) == 0) {
      if (1 < (byte)bVar3) {
        pcVar11 = (char *)((long)plVar6 + 0x91);
        do {
          if (*pcVar11 != *__s2) goto LAB_0031f538;
          uVar10 = uVar10 - 1;
          pcVar11 = pcVar11 + 1;
          __s2 = __s2 + 1;
        } while (uVar10 != 0);
      }
    }
    else {
      iVar5 = memcmp((void *)plVar6[0x14],__s2,plVar6[0x13]);
      if (iVar5 != 0) goto LAB_0031f538;
    }
  }
  else {
LAB_0031f538:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (plVar6 + 0x12),local_90);
    (**(code **)(*plVar6 + 0x98))(plVar6);
    bVar12 = (byte)local_90[0] & 1;
  }
  if (bVar12 != 0) {
    operator_delete(local_80);
  }
  uVar7 = 1;
LAB_0031f568:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


// ===== 0031f594  Java_app_rive_runtime_kotlin_core_Artboard_cppAdvance =====

uint Java_app_rive_runtime_kotlin_core_Artboard_cppAdvance
               (undefined8 param_1,undefined8 param_2,Artboard *param_3)

{
  uint uVar1;
  
  uVar1 = rive::Artboard::advance(param_3,0xb);
  return uVar1 & 1;
}


// ===== 0031f5b4  Java_app_rive_runtime_kotlin_core_Artboard_cppBounds =====

undefined8
Java_app_rive_runtime_kotlin_core_Artboard_cppBounds
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,_jclass *param_5,
          undefined8 param_6,Artboard *param_7)

{
  _jmethodID *p_Var1;
  undefined8 uVar2;
  float fVar3;
  
  p_Var1 = (_jmethodID *)(**(code **)(*(long *)param_5 + 0x30))(param_5,"android/graphics/RectF");
  uVar2 = (**(code **)(*(long *)param_5 + 0x108))(param_5,p_Var1,"<init>","(FFFF)V");
  fVar3 = (float)rive::Artboard::bounds(param_7);
  uVar2 = _JNIEnv::NewObject(param_5,p_Var1,(double)fVar3,(double)param_2,(double)param_3,
                             (double)param_4,uVar2);
  (**(code **)(*(long *)param_5 + 0xb8))(param_5,p_Var1);
  return uVar2;
}


// ===== 0031f660  _JNIEnv::NewObject =====

/* _JNIEnv::NewObject(_jclass*, _jmethodID*, ...) */

void _JNIEnv::NewObject(_jclass *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*(long *)param_1 + 0xe8))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031f6fc  Java_app_rive_runtime_kotlin_core_Artboard_cppResetArtboardSize =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppResetArtboardSize
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (*(float *)((long)param_3 + 0x174) != *(float *)(param_3 + 0x185)) {
    *(float *)((long)param_3 + 0x174) = *(float *)(param_3 + 0x185);
    (**(code **)(*param_3 + 0x238))(param_3);
  }
  if (*(float *)(param_3 + 0x2f) == *(float *)((long)param_3 + 0xc2c)) {
    return;
  }
  *(float *)(param_3 + 0x2f) = *(float *)((long)param_3 + 0xc2c);
                    /* WARNING: Could not recover jumptable at 0x0031f764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x240))(param_3);
  return;
}


// ===== 0031f768  Java_app_rive_runtime_kotlin_core_Artboard_cppGetArtboardWidth =====

undefined4
Java_app_rive_runtime_kotlin_core_Artboard_cppGetArtboardWidth
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(undefined4 *)(param_3 + 0x174);
}


// ===== 0031f770  Java_app_rive_runtime_kotlin_core_Artboard_cppSetArtboardWidth =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppSetArtboardWidth
               (float param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  if (*(float *)((long)param_4 + 0x174) == param_1) {
    return;
  }
  *(float *)((long)param_4 + 0x174) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0031f790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x238))(param_4);
  return;
}


// ===== 0031f794  Java_app_rive_runtime_kotlin_core_Artboard_cppGetArtboardHeight =====

undefined4
Java_app_rive_runtime_kotlin_core_Artboard_cppGetArtboardHeight
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(undefined4 *)(param_3 + 0x178);
}


// ===== 0031f79c  Java_app_rive_runtime_kotlin_core_Artboard_cppSetArtboardHeight =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppSetArtboardHeight
               (float param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  if (*(float *)(param_4 + 0x2f) == param_1) {
    return;
  }
  *(float *)(param_4 + 0x2f) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0031f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x240))(param_4);
  return;
}


// ===== 0031f7c0  Java_app_rive_runtime_kotlin_core_Artboard_cppSetViewModelInstance =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppSetViewModelInstance
               (undefined8 param_1,undefined8 param_2,Artboard *param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_4 + 8);
  if (plVar3 != (long *)0x0) {
    FUN_00340fb0(1,(long)plVar3 + 0xa4);
  }
  local_40 = plVar3;
  rive::Artboard::bindViewModelInstance(param_3,&local_40);
  plVar3 = local_40;
  if ((local_40 != (long *)0x0) &&
     (iVar2 = FUN_00340fe0(0xffffffff,(long)local_40 + 0xa4), iVar2 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031f85c  Java_app_rive_runtime_kotlin_core_Artboard_cppDraw =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppDraw
               (undefined8 param_1,undefined8 param_2,long *param_3,JNIRenderer *param_4)

{
  undefined8 uVar1;
  
  uVar1 = rive_android::JNIRenderer::getRendererOnWorkerThread(param_4);
                    /* WARNING: Could not recover jumptable at 0x0031f88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x1d8))(param_3,uVar1);
  return;
}


// ===== 0031f890  Java_app_rive_runtime_kotlin_core_Artboard_cppDrawAligned =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppDrawAligned
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               _JNIEnv *param_5,undefined8 param_6,Artboard *param_7,JNIRenderer *param_8,
               _jobject *param_9,_jobject *param_10)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  float local_98;
  float fStack_94;
  undefined1 auStack_90 [24];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)rive_android::JNIRenderer::getRendererOnWorkerThread(param_8);
  uVar2 = rive_android::GetFit(param_5,param_9);
  uVar7 = rive_android::GetAlignment(param_5,param_10);
  uVar8 = param_2;
  if (*(int *)(*(long *)(param_8 + 0x20) + 8) == 1) {
    iVar3 = -1;
    if (((*(long *)(param_8 + 0x40) != 0) && (*(long *)(param_8 + 0x48) != 0)) &&
       (lVar6 = rive_android::JNIRenderer::getRendererOnWorkerThread(param_8), lVar6 != 0)) {
      iVar3 = *(int *)(lVar6 + 0x10);
    }
  }
  else if (*(int *)(param_8 + 0x38) == 1) {
    iVar3 = ANativeWindow_getWidth(*(undefined8 *)(param_8 + 0x30));
  }
  else {
    iVar3 = -1;
  }
  if (*(int *)(*(long *)(param_8 + 0x20) + 8) == 1) {
    lVar6 = rive_android::JNIRenderer::getRendererOnWorkerThread(param_8);
    if (lVar6 != 0) {
      iVar4 = *(int *)(lVar6 + 0x14);
      goto LAB_0031f9a4;
    }
  }
  else if (*(int *)(param_8 + 0x38) == 1) {
    iVar4 = ANativeWindow_getHeight(*(undefined8 *)(param_8 + 0x30));
    goto LAB_0031f9a4;
  }
  iVar4 = -1;
LAB_0031f9a4:
  (**(code **)(*plVar5 + 0x10))(plVar5);
  local_a0 = 0;
  local_98 = (float)iVar3;
  fStack_94 = (float)iVar4;
  local_b0 = rive::Artboard::bounds(param_7);
  uStack_ac = uVar8;
  local_a8 = param_3;
  uStack_a4 = param_4;
  rive::computeAlignment(auStack_90,uVar7,param_2,param_1,uVar2,&local_a0,&local_b0);
  (**(code **)(*plVar5 + 0x20))(plVar5,auStack_90);
  (**(code **)(*(long *)param_7 + 0x1d8))(param_7,plVar5);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031fa68  Java_app_rive_runtime_kotlin_core_Artboard_cppDelete =====

void Java_app_rive_runtime_kotlin_core_Artboard_cppDelete
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0031fa78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}


// ===== 0031fa80  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

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
      FUN_0031faf0(this);
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


// ===== 0031faf0  FUN_0031faf0 =====

void FUN_0031faf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("basic_string");
}


// ===== 0031fb04  FUN_0031fb04 =====

void FUN_0031fb04(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__libcpp_verbose_abort
            ("length_error was thrown in -fno-exceptions mode with message \"%s\"",param_1);
}


// ===== 0031fb1c  Java_app_rive_core_AudioEngine_acquire =====

void Java_app_rive_core_AudioEngine_acquire(void)

{
  AudioEngine *this;
  
  this = (AudioEngine *)rive_android::AudioEngine::Instance();
  rive_android::AudioEngine::acquire(this);
  return;
}


// ===== 0031fb30  Java_app_rive_core_AudioEngine_release =====

void Java_app_rive_core_AudioEngine_release(void)

{
  AudioEngine *this;
  
  this = (AudioEngine *)rive_android::AudioEngine::Instance();
  rive_android::AudioEngine::release(this);
  return;
}


// ===== 0031fb44  Java_app_rive_runtime_kotlin_core_BindableArtboard_cppDelete =====

void Java_app_rive_runtime_kotlin_core_BindableArtboard_cppDelete
               (undefined8 param_1,undefined8 param_2,void *param_3)

{
  int iVar1;
  long *plVar2;
  File *this;
  
  iVar1 = FUN_00340fe0(0xffffffff,param_3);
  if (iVar1 == 1) {
    plVar2 = *(long **)((long)param_3 + 0x10);
    *(undefined8 *)((long)param_3 + 0x10) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    this = *(File **)((long)param_3 + 8);
    if ((this != (File *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,this), iVar1 == 1)) {
      rive::File::~File(this);
      operator_delete(this);
    }
    operator_delete(param_3);
    return;
  }
  return;
}


// ===== 0031fbc8  Java_app_rive_runtime_kotlin_core_BindableArtboard_cppName =====

void Java_app_rive_runtime_kotlin_core_BindableArtboard_cppName
               (long *param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong local_40;
  undefined8 uStack_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_3 + 0x10);
  if ((*(byte *)(lVar4 + 0x10) & 1) == 0) {
    uStack_38 = *(undefined8 *)(lVar4 + 0x18);
    local_40 = *(ulong *)(lVar4 + 0x10);
    local_30 = *(void **)(lVar4 + 0x20);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_40,*(char **)(lVar4 + 0x20),*(ulong *)(lVar4 + 0x18));
  }
  pvVar1 = (void *)((ulong)&local_40 | 1);
  if ((local_40 & 1) != 0) {
    pvVar1 = local_30;
  }
  uVar3 = (**(code **)(*param_1 + 0x538))(param_1,pvVar1);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0031fc80  getProperty =====

/* getProperty(_JNIEnv*, long, long, long, _jstring*, void
   (rive::CommandQueue::*)(rive::ViewModelInstanceHandle_HandlePlaceholder*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   unsigned long)) */

void getProperty(_JNIEnv *param_1,long param_2,long param_3,long param_4,_jstring *param_5,
                _func_void_ViewModelInstanceHandle_HandlePlaceholder_ptr_basic_string_ulong *param_6
                )

{
  ViewModelInstanceHandle_HandlePlaceholder *pVVar1;
  long lVar2;
  ulong in_x6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong uStack_78;
  char *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  rive_android::JStringToString((rive_android *)param_1,(_JNIEnv *)param_5,(_jstring *)param_3);
  pVVar1 = (ViewModelInstanceHandle_HandlePlaceholder *)(param_2 + ((long)in_x6 >> 1));
  if ((in_x6 & 1) != 0) {
    param_6 = *(_func_void_ViewModelInstanceHandle_HandlePlaceholder_ptr_basic_string_ulong **)
               (param_6 + *(long *)pVVar1);
  }
  if (((byte)local_60 & 1) == 0) {
    local_80[0] = local_60;
    uStack_78 = uStack_58;
    local_70 = local_50;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_80,local_50,uStack_58);
  }
  (*param_6)(pVVar1,SUB81(param_4,0),(ulong)local_80);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031fd5c  Java_app_rive_core_CommandQueueJNIBridge_cppConstructor =====

CommandQueue *
Java_app_rive_core_CommandQueueJNIBridge_cppConstructor
          (rive_android *param_1,undefined8 param_2,RenderContext *param_3)

{
  uint uVar1;
  long lVar2;
  CommandQueue *this;
  int iVar3;
  long *plVar4;
  CommandQueue *this_00;
  long lVar5;
  undefined8 uVar6;
  promise *ppVar7;
  CommandQueue *pCVar8;
  long local_190;
  long *local_188;
  char local_180 [8];
  byte local_178;
  void *local_168;
  long *local_160;
  undefined8 local_158 [32];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)operator_new(0x98);
  *plVar4 = (long)&PTR____assoc_sub_state_00651750;
  plVar4[2] = 0;
  plVar4[1] = 0;
  plVar4[6] = 0;
  plVar4[5] = 0;
  plVar4[8] = 0;
  plVar4[7] = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0;
  *(undefined8 *)((long)plVar4 + 100) = 0;
  plVar4[4] = 0;
  plVar4[3] = 0;
  local_160 = plVar4;
  std::__ndk1::mutex::lock();
  uVar1 = *(uint *)(plVar4 + 0xe);
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_00323ff4(1);
    goto LAB_0031ffc0;
  }
  FUN_00341010(1,plVar4 + 1);
  *(uint *)(plVar4 + 0xe) = uVar1 | 2;
  std::__ndk1::mutex::unlock();
  this_00 = (CommandQueue *)operator_new(0x498);
  rive::CommandQueue::CommandQueue(this_00);
  ppVar7 = (promise *)&local_160;
  this_00[0x440] = (CommandQueue)0x0;
  *(undefined8 *)(this_00 + 0x450) = 0;
  *(undefined8 *)(this_00 + 0x448) = 0;
  *(undefined8 *)(this_00 + 0x460) = 0;
  *(undefined8 *)(this_00 + 0x458) = 0;
  *(undefined8 *)(this_00 + 0x438) = 0;
  *(undefined8 *)(this_00 + 0x430) = 0;
  *(undefined4 *)(this_00 + 0x468) = 0x3f800000;
  *(undefined8 *)(this_00 + 0x478) = 0;
  *(undefined8 *)(this_00 + 0x470) = 0;
  *(undefined8 *)(this_00 + 0x488) = 0;
  *(undefined8 *)(this_00 + 0x480) = 0;
  *(undefined4 *)(this_00 + 0x490) = 0x3f800000;
  CommandQueueWithThread::startCommandServer((CommandQueueWithThread *)this_00,param_3,ppVar7);
  FUN_00327eb8(local_180,plVar4);
  lVar5 = FUN_00341040(0xffffffffffffffff,plVar4 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (local_180[0] == '\0') goto code_r0x0031ff44;
LAB_0031fe64:
    this = (CommandQueue *)0x0;
    pCVar8 = this_00;
  }
  else {
    if (local_180[0] != '\0') goto LAB_0031fe64;
code_r0x0031ff44:
    rive_android::FindClass
              (param_1,(_JNIEnv *)"app/rive/RiveInitializationException",(char *)ppVar7);
    FUN_003200f4(local_158);
    (**(code **)(*(long *)param_1 + 0x70))(param_1,local_190,local_158);
    if (local_190 != 0) {
      (**(code **)(*local_188 + 0xb8))();
    }
    pCVar8 = (CommandQueue *)0x0;
    this = this_00;
  }
  if ((local_178 & 1) != 0) {
    operator_delete(local_168);
  }
  if ((this != (CommandQueue *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,this), iVar3 == 1)) {
    rive::CommandQueue::~CommandQueue(this);
    operator_delete(this);
  }
  if (local_160 != (long *)0x0) {
    if ((*(byte *)(local_160 + 0xe) & 1) == 0) {
      lVar5 = local_160[2];
      local_158[0] = 0;
      std::exception_ptr::~exception_ptr((exception_ptr *)local_158);
      if ((lVar5 == 0) && (0 < local_160[1])) {
        uVar6 = std::__ndk1::future_category();
        std::__ndk1::future_error::future_error((future_error *)local_158,4,uVar6);
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    plVar4 = local_160;
    lVar5 = FUN_00341040(0xffffffffffffffff,local_160 + 1);
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return pCVar8;
  }
LAB_0031ffc0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0031ffdc  CommandQueueWithThread::startCommandServer =====

/* WARNING: Type propagation algorithm not settling */
/* CommandQueueWithThread::startCommandServer(rive_android::RenderContext*,
   std::__ndk1::promise<rive_android::StartupResult>&&) */

void __thiscall
CommandQueueWithThread::startCommandServer
          (CommandQueueWithThread *this,RenderContext *param_1,promise *param_2)

{
  long lVar1;
  pthread_t pVar2;
  int iVar3;
  __thread_struct *this_00;
  undefined8 *__arg;
  undefined8 uVar4;
  pthread_t local_58 [3];
  
  lVar1 = tpidr_el0;
  local_58[2] = *(long *)(lVar1 + 0x28);
  FUN_00340fb0(1,this);
  FUN_00340fb0(1,this);
  uVar4 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  this_00 = (__thread_struct *)operator_new(8);
  std::__ndk1::__thread_struct::__thread_struct(this_00);
  __arg = (undefined8 *)operator_new(0x20);
  *__arg = this_00;
  __arg[1] = param_1;
  __arg[2] = this;
  __arg[3] = uVar4;
  iVar3 = pthread_create(local_58,(pthread_attr_t *)0x0,FUN_00323908,__arg);
  if (iVar3 == 0) {
    local_58[1] = 0;
    FUN_003241b8(local_58 + 1,0);
    pVar2 = local_58[0];
    if (*(long *)(this + 0x430) == 0) {
      local_58[0] = 0;
      *(pthread_t *)(this + 0x430) = pVar2;
      std::__ndk1::thread::~thread((thread *)local_58);
      iVar3 = FUN_00340fe0(0xffffffff,this);
      if (iVar3 == 1) {
        rive::CommandQueue::~CommandQueue((CommandQueue *)this);
        operator_delete(this);
      }
      if (*(long *)(lVar1 + 0x28) == local_58[2]) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    std::__ndk1::__throw_system_error(iVar3,"thread constructor failed");
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 003200f4  FUN_003200f4 =====

void FUN_003200f4(char *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  puStack_60 = &local_90;
  uStack_58 = 0xffffff80ffffffe0;
  local_90 = in_x4;
  uStack_88 = in_x5;
  local_80 = in_x6;
  uStack_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  iVar2 = vsnprintf(param_1,0x100,"CommandQueue startup failed (EGL 0x%04x): %s",&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 00320190  FUN_00320190 =====

void FUN_00320190(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  future_error afStack_60 [32];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(plVar3 + 0xe) & 1) == 0) {
      lVar4 = plVar3[2];
      local_40 = 0;
      std::exception_ptr::~exception_ptr((exception_ptr *)&local_40);
      plVar3 = (long *)*param_1;
      if ((lVar4 == 0) && (0 < plVar3[1])) {
        uVar2 = std::__ndk1::future_category();
        std::__ndk1::future_error::future_error(afStack_60,4,uVar2);
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    lVar4 = FUN_00341040(0xffffffffffffffff,plVar3 + 1);
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320248  Java_app_rive_core_CommandQueueJNIBridge_cppDelete =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDelete
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  
  rive::CommandQueue::disconnect(param_3);
  if (*(long *)(param_3 + 0x430) != 0) {
    std::__ndk1::thread::join();
  }
  uVar2 = *(uint *)param_3;
  if (uVar2 != 1) {
    rive_android::RiveLogW
              ("RiveN/CQ",
               "Command queue ref count before cppDelete unref does not match expected value:\n  Expected: 1; Actual: %d\n    1. This main thread\'s released reference"
               ,(ulong)uVar2);
    pcVar1 = "Expected the count to be 1 but it is greater, likely indicating a leak.";
    if ((int)uVar2 < 2) {
      pcVar1 = "Expected the count to be 1 but it is less. May result in use-after-free.";
    }
    rive_android::RiveLogW("RiveN/CQ",pcVar1);
  }
  iVar3 = FUN_00340fe0(0xffffffff,param_3);
  if (iVar3 == 1) {
    rive::CommandQueue::~CommandQueue(param_3);
    operator_delete(param_3);
    return;
  }
  return;
}


// ===== 003202fc  Java_app_rive_core_CommandQueueJNIBridge_isCurrentThreadCommandServer =====

bool Java_app_rive_core_CommandQueueJNIBridge_isCurrentThreadCommandServer
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  pthread_t pVar1;
  
  pVar1 = pthread_self();
  return *(pthread_t *)(param_3 + 0x438) == pVar1;
}


// ===== 00320328  Java_app_rive_core_CommandQueueJNIBridge_cppCreateListeners =====

long Java_app_rive_core_CommandQueueJNIBridge_cppCreateListeners
               (rive_android *param_1,undefined8 param_2,char *param_3,_jobject *param_4)

{
  long lVar1;
  undefined *puVar2;
  _jmethodID *p_Var3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  _jclass *local_88;
  long *local_80;
  long local_78;
  long *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  rive_android::FindClass(param_1,(_JNIEnv *)"app/rive/core/Listeners",param_3);
  p_Var3 = (_jmethodID *)
           (**(code **)(*(long *)param_1 + 0x108))(param_1,local_88,"<init>","(JJJJJJJ)V");
  plVar4 = (long *)operator_new(0x28);
  puVar2 = PTR_vtable_0067caa0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  rive_android::GetObjectClass((_JNIEnv *)param_1,param_4);
  lVar5 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_78);
  if (local_78 != 0) {
    (**(code **)(*local_70 + 0xb8))();
  }
  lVar12 = *(long *)param_1;
  plVar4[3] = lVar5;
  lVar5 = (**(code **)(lVar12 + 0xa8))(param_1,param_4);
  plVar4[4] = lVar5;
  plVar6 = (long *)operator_new(0x28);
  puVar2 = PTR_vtable_0067caa8;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar2 + 0x10);
  rive_android::GetObjectClass((_JNIEnv *)param_1,param_4);
  lVar5 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_78);
  if (local_78 != 0) {
    (**(code **)(*local_70 + 0xb8))();
  }
  lVar12 = *(long *)param_1;
  plVar6[3] = lVar5;
  lVar5 = (**(code **)(lVar12 + 0xa8))(param_1,param_4);
  plVar6[4] = lVar5;
  plVar7 = (long *)operator_new(0x28);
  puVar2 = PTR_vtable_0067cab0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)(puVar2 + 0x10);
  rive_android::GetObjectClass((_JNIEnv *)param_1,param_4);
  lVar5 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_78);
  if (local_78 != 0) {
    (**(code **)(*local_70 + 0xb8))();
  }
  lVar12 = *(long *)param_1;
  plVar7[3] = lVar5;
  lVar5 = (**(code **)(lVar12 + 0xa8))(param_1,param_4);
  plVar7[4] = lVar5;
  plVar8 = (long *)operator_new(0x28);
  puVar2 = PTR_vtable_0067cab8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)(puVar2 + 0x10);
  rive_android::GetObjectClass((_JNIEnv *)param_1,param_4);
  lVar5 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_78);
  if (local_78 != 0) {
    (**(code **)(*local_70 + 0xb8))();
  }
  lVar12 = *(long *)param_1;
  plVar8[3] = lVar5;
  lVar5 = (**(code **)(lVar12 + 0xa8))(param_1,param_4);
  plVar8[4] = lVar5;
  plVar9 = (long *)operator_new(0x28);
  puVar2 = PTR_vtable_0067cac0;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)(puVar2 + 0x10);
  rive_android::GetObjectClass((_JNIEnv *)param_1,param_4);
  lVar5 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_78);
  if (local_78 != 0) {
    (**(code **)(*local_70 + 0xb8))();
  }
  lVar12 = *(long *)param_1;
  plVar9[3] = lVar5;
  lVar5 = (**(code **)(lVar12 + 0xa8))(param_1,param_4);
  plVar9[4] = lVar5;
  plVar10 = (long *)operator_new(0x28);
  puVar2 = PTR_vtable_0067cac8;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)(puVar2 + 0x10);
  rive_android::GetObjectClass((_JNIEnv *)param_1,param_4);
  lVar5 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_78);
  if (local_78 != 0) {
    (**(code **)(*local_70 + 0xb8))();
  }
  lVar12 = *(long *)param_1;
  plVar10[3] = lVar5;
  lVar5 = (**(code **)(lVar12 + 0xa8))(param_1,param_4);
  plVar10[4] = lVar5;
  plVar11 = (long *)operator_new(0x28);
  puVar2 = PTR_vtable_0067cad0;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)(puVar2 + 0x10);
  rive_android::GetObjectClass((_JNIEnv *)param_1,param_4);
  lVar5 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,local_78);
  if (local_78 != 0) {
    (**(code **)(*local_70 + 0xb8))();
  }
  lVar12 = *(long *)param_1;
  plVar11[3] = lVar5;
  lVar5 = (**(code **)(lVar12 + 0xa8))(param_1,param_4);
  plVar11[4] = lVar5;
  *(long **)(param_3 + 0x2e0) = plVar4;
  *(long **)(param_3 + 0x300) = plVar6;
  *(long **)(param_3 + 0x310) = plVar7;
  *(long **)(param_3 + 0x308) = plVar8;
  *(long **)(param_3 + 0x2e8) = plVar9;
  *(long **)(param_3 + 0x2f0) = plVar10;
  *(long **)(param_3 + 0x2f8) = plVar11;
  rive_android::MakeObject
            ((_JNIEnv *)param_1,local_88,p_Var3,&local_78,plVar4,plVar6,plVar7,plVar8,plVar9,plVar10
             ,plVar11);
  if (local_88 != (_jclass *)0x0) {
    (**(code **)(*local_80 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return local_78;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032079c  Java_app_rive_core_CommandQueueJNIBridge_cppPollMessages =====

void Java_app_rive_core_CommandQueueJNIBridge_cppPollMessages
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3)

{
  rive::CommandQueue::processMessages(param_3);
  return;
}


// ===== 003207a4  Java_app_rive_core_CommandQueueJNIBridge_cppSetTracingEnabled =====

void Java_app_rive_core_CommandQueueJNIBridge_cppSetTracingEnabled
               (undefined8 param_1,undefined8 param_2,long param_3,char param_4)

{
  *(bool *)(param_3 + 0x440) = param_4 != '\0';
  return;
}


// ===== 003207b4  Java_app_rive_core_CommandQueueJNIBridge_cppLoadFile =====

void Java_app_rive_core_CommandQueueJNIBridge_cppLoadFile
               (rive_android *param_1,undefined8 param_2,_jbyteArray *param_3,undefined8 param_4,
               _JNIEnv *param_5)

{
  void *pvVar1;
  ulong __n;
  long lVar2;
  void *__src;
  void *local_78;
  void *local_70;
  void *local_68;
  void *local_60;
  void *local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  rive_android::ByteArrayToUint8Vec(param_1,param_5,param_3);
  __src = local_60;
  local_78 = (void *)0x0;
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  __n = (long)local_58 - (long)local_60;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00327f8c(&local_78);
    }
    local_78 = operator_new(__n);
    pvVar1 = (void *)((long)local_78 + __n);
    local_68 = pvVar1;
    memcpy(local_78,__src,__n);
    local_70 = pvVar1;
  }
  rive::CommandQueue::loadFile((CommandQueue *)param_3,&local_78,0,param_4);
  if (local_78 != (void *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320890  Java_app_rive_core_CommandQueueJNIBridge_cppDeleteFile =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDeleteFile
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,ulong param_4,
               FileHandle_HandlePlaceholder *param_5)

{
  rive::CommandQueue::deleteFile(param_3,param_5,param_4);
  return;
}


// ===== 003208a0  Java_app_rive_core_CommandQueueJNIBridge_cppGetArtboardNames =====

void Java_app_rive_core_CommandQueueJNIBridge_cppGetArtboardNames
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,ulong param_4,
               FileHandle_HandlePlaceholder *param_5)

{
  rive::CommandQueue::requestArtboardNames(param_3,param_5,param_4);
  return;
}


// ===== 003208b0  Java_app_rive_core_CommandQueueJNIBridge_cppGetStateMachineNames =====

void Java_app_rive_core_CommandQueueJNIBridge_cppGetStateMachineNames
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,ulong param_4,
               ArtboardHandle_HandlePlaceholder *param_5)

{
  rive::CommandQueue::requestStateMachineNames(param_3,param_5,param_4);
  return;
}


// ===== 003208c0  Java_app_rive_core_CommandQueueJNIBridge_cppGetDefaultViewModelInfo =====

void Java_app_rive_core_CommandQueueJNIBridge_cppGetDefaultViewModelInfo
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,ulong param_4,
               FileHandle_HandlePlaceholder *param_5,ArtboardHandle_HandlePlaceholder *param_6)

{
  rive::CommandQueue::requestDefaultViewModelInfo(param_3,param_6,param_5,param_4);
  return;
}


// ===== 003208d0  Java_app_rive_core_CommandQueueJNIBridge_cppGetViewModelNames =====

void Java_app_rive_core_CommandQueueJNIBridge_cppGetViewModelNames
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,ulong param_4,
               FileHandle_HandlePlaceholder *param_5)

{
  rive::CommandQueue::requestViewModelNames(param_3,param_5,param_4);
  return;
}


// ===== 003208e0  Java_app_rive_core_CommandQueueJNIBridge_cppGetViewModelInstanceNames =====

void Java_app_rive_core_CommandQueueJNIBridge_cppGetViewModelInstanceNames
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               undefined8 param_5,_JNIEnv *param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_6,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::requestViewModelInstanceNames
            ((CommandQueue *)param_3,param_5,local_70,param_4);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032099c  Java_app_rive_core_CommandQueueJNIBridge_cppGetViewModelProperties =====

void Java_app_rive_core_CommandQueueJNIBridge_cppGetViewModelProperties
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               undefined8 param_5,_JNIEnv *param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_6,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::requestViewModelPropertyDefinitions
            ((CommandQueue *)param_3,param_5,local_70,param_4);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320a58  Java_app_rive_core_CommandQueueJNIBridge_cppGetEnums =====

void Java_app_rive_core_CommandQueueJNIBridge_cppGetEnums
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,ulong param_4,
               FileHandle_HandlePlaceholder *param_5)

{
  rive::CommandQueue::requestViewModelEnums(param_3,param_5,param_4);
  return;
}


// ===== 00320a68  Java_app_rive_core_CommandQueueJNIBridge_cppCreateDefaultArtboard =====

void Java_app_rive_core_CommandQueueJNIBridge_cppCreateDefaultArtboard
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  ushort local_40 [8];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0;
  uVar2 = rive::CommandQueue::instantiateArtboardNamed(param_3,param_5,local_40,0,param_4);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00320ae0  Java_app_rive_core_CommandQueueJNIBridge_cppCreateArtboardByName =====

undefined8
Java_app_rive_core_CommandQueueJNIBridge_cppCreateArtboardByName
          (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
          undefined8 param_5,_JNIEnv *param_6)

{
  long lVar1;
  undefined8 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_6,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  uVar2 = rive::CommandQueue::instantiateArtboardNamed
                    ((CommandQueue *)param_3,param_5,local_70,0,param_4);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320ba8  Java_app_rive_core_CommandQueueJNIBridge_cppDeleteArtboard =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDeleteArtboard
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,ulong param_4,
               ArtboardHandle_HandlePlaceholder *param_5)

{
  rive::CommandQueue::deleteArtboard(param_3,param_5,param_4);
  return;
}


// ===== 00320bb8  Java_app_rive_core_CommandQueueJNIBridge_cppCreateDefaultStateMachine =====

void Java_app_rive_core_CommandQueueJNIBridge_cppCreateDefaultStateMachine
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  ushort local_40 [8];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0;
  uVar2 = rive::CommandQueue::instantiateStateMachineNamed(param_3,param_5,local_40,0,param_4);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00320c30  Java_app_rive_core_CommandQueueJNIBridge_cppCreateStateMachineByName =====

undefined8
Java_app_rive_core_CommandQueueJNIBridge_cppCreateStateMachineByName
          (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
          undefined8 param_5,_JNIEnv *param_6)

{
  long lVar1;
  undefined8 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_6,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  uVar2 = rive::CommandQueue::instantiateStateMachineNamed
                    ((CommandQueue *)param_3,param_5,local_70,0,param_4);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320cf8  Java_app_rive_core_CommandQueueJNIBridge_cppDeleteStateMachine =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDeleteStateMachine
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,ulong param_4,
               StateMachineHandle_HandlePlaceholder *param_5)

{
  rive::CommandQueue::deleteStateMachine(param_3,param_5,param_4);
  return;
}


// ===== 00320d08  Java_app_rive_core_CommandQueueJNIBridge_cppAdvanceStateMachine =====

void Java_app_rive_core_CommandQueueJNIBridge_cppAdvanceStateMachine
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,
               StateMachineHandle_HandlePlaceholder *param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar4 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3[0x440] == (CommandQueue)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      rive::CommandQueue::advanceStateMachine(param_3,param_4,(float)param_5 / 1e+09,0);
      return;
    }
    goto LAB_00320e24;
  }
  if (((*PTR_tracer_0067cad8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_tracer_0067cad8), iVar3 != 0)) {
    __cxa_guard_release(PTR_tracer_0067cad8);
  }
  local_50 = (long *)operator_new(0x28);
  puVar2 = PTR_PTR_0067cae0;
  local_50[2] = (long)param_3;
  local_50[3] = (long)param_4;
  *(float *)(local_50 + 4) = (float)param_5 / 1e+09;
  *local_50 = (long)&PTR_FUN_00651780;
  local_50[1] = (long)puVar2;
  rive::CommandQueue::runOnce(param_3,local_70);
  if (local_50 == local_70) {
    lVar5 = 4;
LAB_00320df0:
    (**(code **)(*plVar4 + lVar5 * 8))();
  }
  else if (local_50 != (long *)0x0) {
    lVar5 = 5;
    plVar4 = local_50;
    goto LAB_00320df0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00320e24:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320e48  Java_app_rive_core_CommandQueueJNIBridge_cppNamedVMCreateBlankVMI =====

undefined8
Java_app_rive_core_CommandQueueJNIBridge_cppNamedVMCreateBlankVMI
          (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
          undefined8 param_5,_JNIEnv *param_6)

{
  long lVar1;
  undefined8 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_6,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  uVar2 = rive::CommandQueue::instantiateBlankViewModelInstance
                    ((CommandQueue *)param_3,param_5,local_70,0,param_4);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00320f10  Java_app_rive_core_CommandQueueJNIBridge_cppDefaultVMCreateBlankVMI =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDefaultVMCreateBlankVMI
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,ulong param_4,
               FileHandle_HandlePlaceholder *param_5,ArtboardHandle_HandlePlaceholder *param_6)

{
  rive::CommandQueue::instantiateBlankViewModelInstance
            (param_3,param_5,param_6,(ViewModelInstanceListener *)0x0,param_4);
  return;
}


// ===== 00320f28  Java_app_rive_core_CommandQueueJNIBridge_cppNamedVMCreateDefaultVMI =====

/* WARNING: Type propagation algorithm not settling */

undefined8
Java_app_rive_core_CommandQueueJNIBridge_cppNamedVMCreateDefaultVMI
          (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
          undefined8 param_5,_JNIEnv *param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  byte local_80;
  undefined7 uStack_7f;
  ulong uStack_78;
  char *local_70;
  ushort local_68 [8];
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_6,param_3);
  if ((local_80 & 1) == 0) {
    local_a0 = CONCAT71(uStack_7f,local_80);
    uStack_98 = uStack_78;
    local_90 = local_70;
    if ((local_80 & 1) == 0) {
LAB_00320fa4:
      uStack_48 = uStack_98;
      local_50 = local_a0;
      local_40 = local_90;
      goto LAB_00320fb4;
    }
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a0,local_70,uStack_78);
    if ((local_a0 & 1) == 0) goto LAB_00320fa4;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __init_copy_ctor_external
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_50,local_90,uStack_98);
LAB_00320fb4:
  local_68[0] = 0;
  uVar2 = rive::CommandQueue::instantiateViewModelInstanceNamed
                    ((CommandQueue *)param_3,param_5,&local_50,local_68,0,param_4);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (((byte)local_a0._0_1_ & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


// ===== 00321060  Java_app_rive_core_CommandQueueJNIBridge_cppDefaultVMCreateDefaultVMI =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDefaultVMCreateDefaultVMI
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  ushort local_40 [8];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0;
  uVar2 = rive::CommandQueue::instantiateViewModelInstanceNamed
                    (param_3,param_5,param_6,local_40,0,param_4);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 003210e0  Java_app_rive_core_CommandQueueJNIBridge_cppNamedVMCreateNamedVMI =====

undefined8
Java_app_rive_core_CommandQueueJNIBridge_cppNamedVMCreateNamedVMI
          (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
          undefined8 param_5,_JNIEnv *param_6,_JNIEnv *param_7)

{
  long lVar1;
  undefined8 uVar2;
  _jstring *p_Var3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  ulong uStack_a8;
  char *local_a0;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78;
  ulong uStack_70;
  char *local_68;
  byte local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  p_Var3 = param_3;
  rive_android::JStringToString(param_1,param_6,param_3);
  rive_android::JStringToString(param_1,param_7,p_Var3);
  if ((local_60 & 1) == 0) {
    local_90 = (ulong)local_60;
    uStack_88 = uStack_58;
    local_80 = local_50;
    if (((byte)local_78 & 1) != 0) goto LAB_00321154;
LAB_00321178:
    local_b0[0] = local_78;
    uStack_a8 = uStack_70;
    local_a0 = local_68;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_90,local_50,uStack_58);
    if (((byte)local_78 & 1) == 0) goto LAB_00321178;
LAB_00321154:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_b0,local_68,uStack_70);
  }
  uVar2 = rive::CommandQueue::instantiateViewModelInstanceNamed
                    ((CommandQueue *)param_3,param_5,&local_90,local_b0,0,param_4);
  if (((byte)local_b0[0] & 1) == 0) {
    if ((local_90 & 1) == 0) goto joined_r0x00321218;
  }
  else {
    operator_delete(local_a0);
    if (((byte)local_90._0_1_ & 1) == 0) goto joined_r0x00321218;
  }
  operator_delete(local_80);
joined_r0x00321218:
  if (((byte)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00321234  Java_app_rive_core_CommandQueueJNIBridge_cppDefaultVMCreateNamedVMI =====

undefined8
Java_app_rive_core_CommandQueueJNIBridge_cppDefaultVMCreateNamedVMI
          (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,_JNIEnv *param_7)

{
  long lVar1;
  undefined8 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong uStack_78;
  char *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_7,param_3);
  if (((byte)local_60 & 1) == 0) {
    local_80[0] = local_60;
    uStack_78 = uStack_58;
    local_70 = local_50;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_80,local_50,uStack_58);
  }
  uVar2 = rive::CommandQueue::instantiateViewModelInstanceNamed
                    ((CommandQueue *)param_3,param_5,param_6,local_80,0,param_4);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032130c  Java_app_rive_core_CommandQueueJNIBridge_cppReferenceNestedVMI =====

undefined8
Java_app_rive_core_CommandQueueJNIBridge_cppReferenceNestedVMI
          (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
          undefined8 param_5,_JNIEnv *param_6)

{
  long lVar1;
  undefined8 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_6,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  uVar2 = rive::CommandQueue::referenceNestedViewModelInstance
                    ((CommandQueue *)param_3,param_5,local_70,0,param_4);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003213d4  Java_app_rive_core_CommandQueueJNIBridge_cppReferenceListItemVMI =====

undefined8
Java_app_rive_core_CommandQueueJNIBridge_cppReferenceListItemVMI
          (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
          undefined8 param_5,_JNIEnv *param_6,undefined4 param_7)

{
  long lVar1;
  undefined8 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong uStack_78;
  char *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_6,param_3);
  if (((byte)local_60 & 1) == 0) {
    local_80[0] = local_60;
    uStack_78 = uStack_58;
    local_70 = local_50;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_80,local_50,uStack_58);
  }
  uVar2 = rive::CommandQueue::referenceListViewModelInstance
                    ((CommandQueue *)param_3,param_5,local_80,param_7,0,param_4);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003214ac  Java_app_rive_core_CommandQueueJNIBridge_cppDeleteViewModelInstance =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDeleteViewModelInstance
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,ulong param_4,
               ViewModelInstanceHandle_HandlePlaceholder *param_5)

{
  rive::CommandQueue::deleteViewModelInstance(param_3,param_5,param_4);
  return;
}


// ===== 003214bc  Java_app_rive_core_CommandQueueJNIBridge_cppBindViewModelInstance =====

void Java_app_rive_core_CommandQueueJNIBridge_cppBindViewModelInstance
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,ulong param_4,
               StateMachineHandle_HandlePlaceholder *param_5,
               ViewModelInstanceHandle_HandlePlaceholder *param_6)

{
  rive::CommandQueue::bindViewModelInstance(param_3,param_5,param_6,param_4);
  return;
}


// ===== 003214cc  Java_app_rive_core_CommandQueueJNIBridge_cppSetNumberProperty =====

void Java_app_rive_core_CommandQueueJNIBridge_cppSetNumberProperty
               (CommandQueue *param_1,rive_android *param_2,undefined8 param_3,_jstring *param_4,
               undefined8 param_5,_JNIEnv *param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_2,param_6,param_4);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::setViewModelInstanceNumber(param_1._0_4_,param_4,param_5,local_70,0);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00321594  Java_app_rive_core_CommandQueueJNIBridge_cppGetNumberProperty =====

void Java_app_rive_core_CommandQueueJNIBridge_cppGetNumberProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               undefined8 param_5,_JNIEnv *param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_6,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::requestViewModelInstanceNumber
            ((CommandQueue *)param_3,param_5,local_70,param_4);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00321650  Java_app_rive_core_CommandQueueJNIBridge_cppSetStringProperty =====

/* WARNING: Type propagation algorithm not settling */

void Java_app_rive_core_CommandQueueJNIBridge_cppSetStringProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5,_JNIEnv *param_6)

{
  long lVar1;
  _jstring *p_Var2;
  ulong local_d0;
  _jstring *p_Stack_c8;
  char *local_c0;
  byte local_b8;
  undefined7 uStack_b7;
  _jstring *p_Stack_b0;
  char *local_a8;
  ulong local_a0;
  _jstring *p_Stack_98;
  char *local_90;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  byte local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  p_Var2 = param_3;
  rive_android::JStringToString(param_1,param_6,param_3);
  if ((local_b8 & 1) == 0) {
    local_d0 = CONCAT71(uStack_b7,local_b8);
    p_Stack_c8 = p_Stack_b0;
    local_c0 = local_a8;
    p_Stack_b0 = p_Var2;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_d0,local_a8,(ulong)p_Stack_b0);
  }
  rive_android::JStringToString(param_1,param_5,p_Stack_b0);
  if ((local_60 & 1) == 0) {
    local_80 = (ulong)local_60;
    uStack_78 = uStack_58;
    local_70 = local_50;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,local_50,uStack_58);
  }
  local_90 = local_c0;
  p_Stack_98 = p_Stack_c8;
  p_Stack_c8 = (_jstring *)0x0;
  local_c0 = (char *)0x0;
  local_a0 = local_d0;
  local_d0 = 0;
  rive::CommandQueue::setViewModelInstanceString
            ((CommandQueue *)param_3,param_4,&local_80,&local_a0,0);
  if ((local_a0 & 1) == 0) {
    if ((local_80 & 1) == 0) goto joined_r0x00321734;
  }
  else {
    operator_delete(local_90);
    if (((byte)local_80._0_1_ & 1) == 0) goto joined_r0x00321734;
  }
  operator_delete(local_70);
joined_r0x00321734:
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003217c0  Java_app_rive_core_CommandQueueJNIBridge_cppGetStringProperty =====

void Java_app_rive_core_CommandQueueJNIBridge_cppGetStringProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               undefined8 param_5,_JNIEnv *param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_6,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::requestViewModelInstanceString
            ((CommandQueue *)param_3,param_5,local_70,param_4);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032187c  Java_app_rive_core_CommandQueueJNIBridge_cppSetBooleanProperty =====

void Java_app_rive_core_CommandQueueJNIBridge_cppSetBooleanProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5,char param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_5,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::setViewModelInstanceBool
            ((CommandQueue *)param_3,param_4,local_70,param_6 != '\0',0);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00321940  Java_app_rive_core_CommandQueueJNIBridge_cppGetBooleanProperty =====

void Java_app_rive_core_CommandQueueJNIBridge_cppGetBooleanProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               undefined8 param_5,_JNIEnv *param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_6,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::requestViewModelInstanceBool((CommandQueue *)param_3,param_5,local_70,param_4)
  ;
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003219fc  Java_app_rive_core_CommandQueueJNIBridge_cppSetEnumProperty =====

/* WARNING: Type propagation algorithm not settling */

void Java_app_rive_core_CommandQueueJNIBridge_cppSetEnumProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5,_JNIEnv *param_6)

{
  long lVar1;
  _jstring *p_Var2;
  ulong local_d0;
  _jstring *p_Stack_c8;
  char *local_c0;
  byte local_b8;
  undefined7 uStack_b7;
  _jstring *p_Stack_b0;
  char *local_a8;
  ulong local_a0;
  _jstring *p_Stack_98;
  char *local_90;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  byte local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  p_Var2 = param_3;
  rive_android::JStringToString(param_1,param_6,param_3);
  if ((local_b8 & 1) == 0) {
    local_d0 = CONCAT71(uStack_b7,local_b8);
    p_Stack_c8 = p_Stack_b0;
    local_c0 = local_a8;
    p_Stack_b0 = p_Var2;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_d0,local_a8,(ulong)p_Stack_b0);
  }
  rive_android::JStringToString(param_1,param_5,p_Stack_b0);
  if ((local_60 & 1) == 0) {
    local_80 = (ulong)local_60;
    uStack_78 = uStack_58;
    local_70 = local_50;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,local_50,uStack_58);
  }
  local_90 = local_c0;
  p_Stack_98 = p_Stack_c8;
  p_Stack_c8 = (_jstring *)0x0;
  local_c0 = (char *)0x0;
  local_a0 = local_d0;
  local_d0 = 0;
  rive::CommandQueue::setViewModelInstanceEnum
            ((CommandQueue *)param_3,param_4,&local_80,&local_a0,0);
  if ((local_a0 & 1) == 0) {
    if ((local_80 & 1) == 0) goto joined_r0x00321ae0;
  }
  else {
    operator_delete(local_90);
    if (((byte)local_80._0_1_ & 1) == 0) goto joined_r0x00321ae0;
  }
  operator_delete(local_70);
joined_r0x00321ae0:
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00321b6c  Java_app_rive_core_CommandQueueJNIBridge_cppGetEnumProperty =====

void Java_app_rive_core_CommandQueueJNIBridge_cppGetEnumProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               undefined8 param_5,_JNIEnv *param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_6,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::requestViewModelInstanceEnum((CommandQueue *)param_3,param_5,local_70,param_4)
  ;
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00321c28  Java_app_rive_core_CommandQueueJNIBridge_cppSetColorProperty =====

void Java_app_rive_core_CommandQueueJNIBridge_cppSetColorProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5,undefined4 param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_5,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::setViewModelInstanceColor((CommandQueue *)param_3,param_4,local_70,param_6,0);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00321ce8  Java_app_rive_core_CommandQueueJNIBridge_cppGetColorProperty =====

void Java_app_rive_core_CommandQueueJNIBridge_cppGetColorProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               undefined8 param_5,_JNIEnv *param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_6,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::requestViewModelInstanceColor
            ((CommandQueue *)param_3,param_5,local_70,param_4);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00321da4  Java_app_rive_core_CommandQueueJNIBridge_cppFireTriggerProperty =====

void Java_app_rive_core_CommandQueueJNIBridge_cppFireTriggerProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_5,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::fireViewModelTrigger((CommandQueue *)param_3,param_4,local_70,0);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00321e5c  Java_app_rive_core_CommandQueueJNIBridge_cppSubscribeToProperty =====

void Java_app_rive_core_CommandQueueJNIBridge_cppSubscribeToProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5,undefined4 param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_5,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::subscribeToViewModelProperty
            ((CommandQueue *)param_3,param_4,local_70,param_6,0);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00321f1c  Java_app_rive_core_CommandQueueJNIBridge_cppUnsubscribeFromProperty =====

void Java_app_rive_core_CommandQueueJNIBridge_cppUnsubscribeFromProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5,undefined4 param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_5,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::unsubscribeToViewModelProperty
            ((CommandQueue *)param_3,param_4,local_70,param_6,0);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00321fdc  Java_app_rive_core_CommandQueueJNIBridge_cppSetImageProperty =====

void Java_app_rive_core_CommandQueueJNIBridge_cppSetImageProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5,undefined8 param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_5,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::setViewModelInstanceImage((CommandQueue *)param_3,param_4,local_70,param_6,0);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032209c  Java_app_rive_core_CommandQueueJNIBridge_cppSetArtboardProperty =====

void Java_app_rive_core_CommandQueueJNIBridge_cppSetArtboardProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5,undefined8 param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_5,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::setViewModelInstanceArtboard
            ((CommandQueue *)param_3,param_4,local_70,param_6,0);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032215c  Java_app_rive_core_CommandQueueJNIBridge_cppSetViewModelInstanceProperty =====

void Java_app_rive_core_CommandQueueJNIBridge_cppSetViewModelInstanceProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5,undefined8 param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_5,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::setViewModelInstanceNestedViewModel
            ((CommandQueue *)param_3,param_4,local_70,param_6,0);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032221c  Java_app_rive_core_CommandQueueJNIBridge_cppGetListSize =====

void Java_app_rive_core_CommandQueueJNIBridge_cppGetListSize
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               undefined8 param_5,_JNIEnv *param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_6,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::requestViewModelInstanceListSize
            ((CommandQueue *)param_3,param_5,local_70,param_4);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003222d8  Java_app_rive_core_CommandQueueJNIBridge_cppInsertToListAtIndex =====

void Java_app_rive_core_CommandQueueJNIBridge_cppInsertToListAtIndex
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5,undefined4 param_6,undefined8 param_7)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong uStack_78;
  char *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_5,param_3);
  if (((byte)local_60 & 1) == 0) {
    local_80[0] = local_60;
    uStack_78 = uStack_58;
    local_70 = local_50;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_80,local_50,uStack_58);
  }
  rive::CommandQueue::insertViewModelInstanceListViewModel
            ((CommandQueue *)param_3,param_4,local_80,param_7,param_6,0);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003223a8  Java_app_rive_core_CommandQueueJNIBridge_cppAppendToList =====

void Java_app_rive_core_CommandQueueJNIBridge_cppAppendToList
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5,undefined8 param_6)

{
  long lVar1;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  byte local_68;
  undefined7 uStack_67;
  ulong uStack_60;
  char *local_58;
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_5,param_3);
  if ((local_68 & 1) == 0) {
    local_80 = CONCAT71(uStack_67,local_68);
    uStack_78 = uStack_60;
    local_70 = local_58;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,local_58,uStack_60);
  }
  uStack_48 = uStack_78;
  local_50 = local_80;
  local_40 = local_70;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (char *)0x0;
  rive::CommandQueue::insertViewModelInstanceListViewModel
            ((CommandQueue *)param_3,param_4,&local_50,param_6,0xffffffff,0);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003224a8  Java_app_rive_core_CommandQueueJNIBridge_cppRemoveFromListAtIndex =====

void Java_app_rive_core_CommandQueueJNIBridge_cppRemoveFromListAtIndex
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5,undefined4 param_6)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_5,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::removeViewModelInstanceListViewModel
            ((CommandQueue *)param_3,param_4,local_70,param_6,0,0);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032256c  Java_app_rive_core_CommandQueueJNIBridge_cppRemoveFromList =====

void Java_app_rive_core_CommandQueueJNIBridge_cppRemoveFromList
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5,undefined8 param_6)

{
  long lVar1;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  byte local_68;
  undefined7 uStack_67;
  ulong uStack_60;
  char *local_58;
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_5,param_3);
  if ((local_68 & 1) == 0) {
    local_80 = CONCAT71(uStack_67,local_68);
    uStack_78 = uStack_60;
    local_70 = local_58;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,local_58,uStack_60);
  }
  uStack_48 = uStack_78;
  local_50 = local_80;
  local_40 = local_70;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (char *)0x0;
  rive::CommandQueue::removeViewModelInstanceListViewModel
            ((CommandQueue *)param_3,param_4,&local_50,0xffffffff,param_6,0);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032266c  Java_app_rive_core_CommandQueueJNIBridge_cppSwapListItems =====

void Java_app_rive_core_CommandQueueJNIBridge_cppSwapListItems
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,undefined8 param_4,
               _JNIEnv *param_5,undefined4 param_6,undefined4 param_7)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong uStack_78;
  char *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_5,param_3);
  if (((byte)local_60 & 1) == 0) {
    local_80[0] = local_60;
    uStack_78 = uStack_58;
    local_70 = local_50;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_80,local_50,uStack_58);
  }
  rive::CommandQueue::swapViewModelInstanceListValues
            ((CommandQueue *)param_3,param_4,local_80,param_6,param_7,0);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (((byte)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032273c  Java_app_rive_core_CommandQueueJNIBridge_cppDecodeImage =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDecodeImage
               (rive_android *param_1,undefined8 param_2,_jbyteArray *param_3,undefined8 param_4,
               _JNIEnv *param_5)

{
  void *pvVar1;
  ulong __n;
  long lVar2;
  void *__src;
  void *local_78;
  void *local_70;
  void *local_68;
  void *local_60;
  void *local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  rive_android::ByteArrayToUint8Vec(param_1,param_5,param_3);
  __src = local_60;
  local_78 = (void *)0x0;
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  __n = (long)local_58 - (long)local_60;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00327f8c(&local_78);
    }
    local_78 = operator_new(__n);
    pvVar1 = (void *)((long)local_78 + __n);
    local_68 = pvVar1;
    memcpy(local_78,__src,__n);
    local_70 = pvVar1;
  }
  rive::CommandQueue::decodeImage((CommandQueue *)param_3,&local_78,0,param_4);
  if (local_78 != (void *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00322818  Java_app_rive_core_CommandQueueJNIBridge_cppDeleteImage =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDeleteImage
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,
               RenderImageHandle_HandlePlaceholder *param_4)

{
  rive::CommandQueue::deleteImage(param_3,param_4,0);
  return;
}


// ===== 00322828  Java_app_rive_core_CommandQueueJNIBridge_cppRegisterImage =====

void Java_app_rive_core_CommandQueueJNIBridge_cppRegisterImage
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4,
               undefined8 param_5)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::addGlobalImageAsset((CommandQueue *)param_3,local_70,param_5,0);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003228e0  Java_app_rive_core_CommandQueueJNIBridge_cppUnregisterImage =====

void Java_app_rive_core_CommandQueueJNIBridge_cppUnregisterImage
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [8];
  ulong uStack_58;
  char *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40;
  ulong uStack_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  if (((byte)local_40 & 1) == 0) {
    local_60[0] = local_40;
    uStack_58 = uStack_38;
    local_50 = local_30;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_60,local_30,uStack_38);
  }
  rive::CommandQueue::removeGlobalImageAsset((CommandQueue *)param_3,local_60,0);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00322988  Java_app_rive_core_CommandQueueJNIBridge_cppDecodeAudio =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDecodeAudio
               (rive_android *param_1,undefined8 param_2,_jbyteArray *param_3,undefined8 param_4,
               _JNIEnv *param_5)

{
  void *pvVar1;
  ulong __n;
  long lVar2;
  void *__src;
  void *local_78;
  void *local_70;
  void *local_68;
  void *local_60;
  void *local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  rive_android::ByteArrayToUint8Vec(param_1,param_5,param_3);
  __src = local_60;
  local_78 = (void *)0x0;
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  __n = (long)local_58 - (long)local_60;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00327f8c(&local_78);
    }
    local_78 = operator_new(__n);
    pvVar1 = (void *)((long)local_78 + __n);
    local_68 = pvVar1;
    memcpy(local_78,__src,__n);
    local_70 = pvVar1;
  }
  rive::CommandQueue::decodeAudio((CommandQueue *)param_3,&local_78,0,param_4);
  if (local_78 != (void *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00322a64  Java_app_rive_core_CommandQueueJNIBridge_cppDeleteAudio =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDeleteAudio
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,
               AudioSourceHandle_HandlePlaceholder *param_4)

{
  rive::CommandQueue::deleteAudio(param_3,param_4,0);
  return;
}


// ===== 00322a74  Java_app_rive_core_CommandQueueJNIBridge_cppRegisterAudio =====

void Java_app_rive_core_CommandQueueJNIBridge_cppRegisterAudio
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4,
               undefined8 param_5)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::addGlobalAudioAsset((CommandQueue *)param_3,local_70,param_5,0);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00322b2c  Java_app_rive_core_CommandQueueJNIBridge_cppUnregisterAudio =====

void Java_app_rive_core_CommandQueueJNIBridge_cppUnregisterAudio
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [8];
  ulong uStack_58;
  char *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40;
  ulong uStack_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  if (((byte)local_40 & 1) == 0) {
    local_60[0] = local_40;
    uStack_58 = uStack_38;
    local_50 = local_30;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_60,local_30,uStack_38);
  }
  rive::CommandQueue::removeGlobalAudioAsset((CommandQueue *)param_3,local_60,0);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00322bd4  Java_app_rive_core_CommandQueueJNIBridge_cppDecodeFont =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDecodeFont
               (rive_android *param_1,undefined8 param_2,_jbyteArray *param_3,undefined8 param_4,
               _JNIEnv *param_5)

{
  void *pvVar1;
  ulong __n;
  long lVar2;
  void *__src;
  void *local_78;
  void *local_70;
  void *local_68;
  void *local_60;
  void *local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  rive_android::ByteArrayToUint8Vec(param_1,param_5,param_3);
  __src = local_60;
  local_78 = (void *)0x0;
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  __n = (long)local_58 - (long)local_60;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00327f8c(&local_78);
    }
    local_78 = operator_new(__n);
    pvVar1 = (void *)((long)local_78 + __n);
    local_68 = pvVar1;
    memcpy(local_78,__src,__n);
    local_70 = pvVar1;
  }
  rive::CommandQueue::decodeFont((CommandQueue *)param_3,&local_78,0,param_4);
  if (local_78 != (void *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00322cb0  Java_app_rive_core_CommandQueueJNIBridge_cppDeleteFont =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDeleteFont
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,
               FontHandle_HandlePlaceholder *param_4)

{
  rive::CommandQueue::deleteFont(param_3,param_4,0);
  return;
}


// ===== 00322cc0  Java_app_rive_core_CommandQueueJNIBridge_cppRegisterFont =====

void Java_app_rive_core_CommandQueueJNIBridge_cppRegisterFont
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4,
               undefined8 param_5)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong uStack_68;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  if (((byte)local_50 & 1) == 0) {
    local_70[0] = local_50;
    uStack_68 = uStack_48;
    local_60 = local_40;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_70,local_40,uStack_48);
  }
  rive::CommandQueue::addGlobalFontAsset((CommandQueue *)param_3,local_70,param_5,0);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00322d78  Java_app_rive_core_CommandQueueJNIBridge_cppUnregisterFont =====

void Java_app_rive_core_CommandQueueJNIBridge_cppUnregisterFont
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [8];
  ulong uStack_58;
  char *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40;
  ulong uStack_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  if (((byte)local_40 & 1) == 0) {
    local_60[0] = local_40;
    uStack_58 = uStack_38;
    local_50 = local_30;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_60,local_30,uStack_38);
  }
  rive::CommandQueue::removeGlobalFontAsset((CommandQueue *)param_3,local_60,0);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00322e20  Java_app_rive_core_CommandQueueJNIBridge_cppPointerMove =====

void Java_app_rive_core_CommandQueueJNIBridge_cppPointerMove
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,CommandQueue *param_8,
               undefined8 param_9,uchar param_10,uchar param_11,undefined4 param_12)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 local_9c [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar3 = param_2;
  uVar2 = rive_android::GetFit(param_10);
  local_98 = rive_android::GetAlignment(param_11);
  local_9c[0] = uVar2;
  uStack_94 = uVar3;
  local_90 = param_2;
  uStack_8c = param_3;
  local_88 = param_4;
  uStack_84 = param_5;
  local_80 = param_1;
  local_7c = param_12;
  rive::CommandQueue::pointerMove(param_8,param_9,local_9c,0);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00322eec  Java_app_rive_core_CommandQueueJNIBridge_cppPointerDown =====

void Java_app_rive_core_CommandQueueJNIBridge_cppPointerDown
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,CommandQueue *param_8,
               undefined8 param_9,uchar param_10,uchar param_11,undefined4 param_12)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 local_9c [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar3 = param_2;
  uVar2 = rive_android::GetFit(param_10);
  local_98 = rive_android::GetAlignment(param_11);
  local_9c[0] = uVar2;
  uStack_94 = uVar3;
  local_90 = param_2;
  uStack_8c = param_3;
  local_88 = param_4;
  uStack_84 = param_5;
  local_80 = param_1;
  local_7c = param_12;
  rive::CommandQueue::pointerDown(param_8,param_9,local_9c,0);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00322fb8  Java_app_rive_core_CommandQueueJNIBridge_cppPointerUp =====

void Java_app_rive_core_CommandQueueJNIBridge_cppPointerUp
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,CommandQueue *param_8,
               undefined8 param_9,uchar param_10,uchar param_11,undefined4 param_12)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 local_9c [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar3 = param_2;
  uVar2 = rive_android::GetFit(param_10);
  local_98 = rive_android::GetAlignment(param_11);
  local_9c[0] = uVar2;
  uStack_94 = uVar3;
  local_90 = param_2;
  uStack_8c = param_3;
  local_88 = param_4;
  uStack_84 = param_5;
  local_80 = param_1;
  local_7c = param_12;
  rive::CommandQueue::pointerUp(param_8,param_9,local_9c,0);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323084  Java_app_rive_core_CommandQueueJNIBridge_cppPointerExit =====

void Java_app_rive_core_CommandQueueJNIBridge_cppPointerExit
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,CommandQueue *param_8,
               undefined8 param_9,uchar param_10,uchar param_11,undefined4 param_12)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 local_9c [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar3 = param_2;
  uVar2 = rive_android::GetFit(param_10);
  local_98 = rive_android::GetAlignment(param_11);
  local_9c[0] = uVar2;
  uStack_94 = uVar3;
  local_90 = param_2;
  uStack_8c = param_3;
  local_88 = param_4;
  uStack_84 = param_5;
  local_80 = param_1;
  local_7c = param_12;
  rive::CommandQueue::pointerExit(param_8,param_9,local_9c,0);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323150  Java_app_rive_core_CommandQueueJNIBridge_cppResizeArtboard =====

void Java_app_rive_core_CommandQueueJNIBridge_cppResizeArtboard
               (float param_1,undefined8 param_2,undefined8 param_3,CommandQueue *param_4,
               ArtboardHandle_HandlePlaceholder *param_5,int param_6,int param_7)

{
  rive::CommandQueue::setArtboardSize(param_4,param_5,(float)param_6,(float)param_7,param_1,0);
  return;
}


// ===== 0032316c  Java_app_rive_core_CommandQueueJNIBridge_cppResetArtboardSize =====

void Java_app_rive_core_CommandQueueJNIBridge_cppResetArtboardSize
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,
               ArtboardHandle_HandlePlaceholder *param_4)

{
  rive::CommandQueue::resetArtboardSize(param_3,param_4,0);
  return;
}


// ===== 0032317c  Java_app_rive_core_CommandQueueJNIBridge_cppCreateDrawKey =====

void Java_app_rive_core_CommandQueueJNIBridge_cppCreateDrawKey
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3)

{
  rive::CommandQueue::createDrawKey(param_3);
  return;
}


// ===== 00323184  Java_app_rive_core_CommandQueueJNIBridge_cppDraw =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDraw
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               CommandQueue *param_5,long param_6,long param_7,undefined8 param_8,long param_9,
               long param_10,long param_11,undefined4 param_12,undefined4 param_13,uchar param_14,
               uchar param_15,undefined4 param_16)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 uVar7;
  long local_c0 [4];
  long *local_a0;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  uVar2 = rive_android::GetFit(param_14);
  uVar7 = rive_android::GetAlignment(param_15);
  if (param_5[0x440] == (CommandQueue)0x0) {
    if (((*PTR_tracer_0067cae8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_tracer_0067cae8), iVar3 != 0)) {
      __cxa_guard_release(PTR_tracer_0067cae8);
    }
    local_a0 = (long *)operator_new(0x60);
    local_a0[2] = param_6;
    local_a0[3] = param_7;
    *local_a0 = (long)&PTR_FUN_006516d8;
    local_a0[1] = (long)param_5;
    local_a0[4] = param_9;
    local_a0[5] = param_10;
    local_a0[6] = param_11;
    *(undefined4 *)(local_a0 + 7) = param_12;
    *(undefined4 *)((long)local_a0 + 0x3c) = param_13;
    *(undefined1 *)(local_a0 + 8) = uVar2;
    *(undefined4 *)((long)local_a0 + 0x44) = uVar7;
    *(undefined4 *)(local_a0 + 9) = param_2;
    *(undefined4 *)((long)local_a0 + 0x4c) = param_16;
    puVar5 = PTR_PTR_0067caf0;
  }
  else {
    if (((*PTR_tracer_0067cad8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_tracer_0067cad8), iVar3 != 0)) {
      __cxa_guard_release(PTR_tracer_0067cad8);
    }
    local_a0 = (long *)operator_new(0x60);
    local_a0[2] = param_6;
    local_a0[3] = param_7;
    *local_a0 = (long)&PTR_FUN_00651690;
    local_a0[1] = (long)param_5;
    local_a0[4] = param_9;
    local_a0[5] = param_10;
    local_a0[6] = param_11;
    *(undefined4 *)(local_a0 + 7) = param_12;
    *(undefined4 *)((long)local_a0 + 0x3c) = param_13;
    *(undefined1 *)(local_a0 + 8) = uVar2;
    *(undefined4 *)((long)local_a0 + 0x44) = uVar7;
    *(undefined4 *)(local_a0 + 9) = param_2;
    *(undefined4 *)((long)local_a0 + 0x4c) = param_16;
    puVar5 = PTR_PTR_0067cae0;
  }
  *(undefined4 *)(local_a0 + 10) = param_1;
  local_a0[0xb] = (long)puVar5;
  rive::CommandQueue::draw(param_5,param_8,local_c0);
  if (local_a0 == local_c0) {
    lVar6 = 4;
    plVar4 = local_c0;
  }
  else {
    if (local_a0 == (long *)0x0) goto LAB_00323304;
    lVar6 = 5;
    plVar4 = local_a0;
  }
  (**(code **)(*plVar4 + lVar6 * 8))();
LAB_00323304:
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323384  Java_app_rive_core_CommandQueueJNIBridge_cppCancelDraw =====

void Java_app_rive_core_CommandQueueJNIBridge_cppCancelDraw
               (undefined8 param_1,undefined8 param_2,CommandQueue *param_3,
               DrawKey_HandlePlaceholder *param_4)

{
  rive::CommandQueue::cancelDraw(param_3,param_4);
  return;
}


// ===== 00323390  Java_app_rive_core_CommandQueueJNIBridge_cppDrawToBuffer =====

void Java_app_rive_core_CommandQueueJNIBridge_cppDrawToBuffer
               (undefined4 param_1,undefined4 param_2,rive_android *param_3,undefined8 param_4,
               CommandQueue *param_5,undefined8 param_6,undefined8 param_7,unique_lock *param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
               undefined4 param_13,uchar param_14,uchar param_15,undefined4 param_16,
               undefined8 param_17)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  CommandQueue *pCVar6;
  long *plVar7;
  undefined ***pppuVar8;
  char *pcVar9;
  CommandQueue *pCVar10;
  undefined8 uVar11;
  long *plVar12;
  unique_lock *puVar13;
  long lVar14;
  undefined4 uVar15;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  long *plStack_170;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long *plStack_140;
  long *plStack_130;
  rive_android *prStack_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  long local_f8;
  undefined4 local_ec;
  long local_e8;
  long *local_e0;
  undefined8 local_d8;
  unique_lock *local_d0;
  char local_c8;
  CommandQueue local_c0 [32];
  CommandQueue *local_a0;
  long local_90;
  
  lVar14 = tpidr_el0;
  local_90 = *(long *)(lVar14 + 0x28);
  uVar11 = param_6;
  local_ec = rive_android::GetFit(param_14);
  uVar15 = rive_android::GetAlignment(param_15);
  pcVar9 = (char *)0x0;
  lVar3 = (**(code **)(*(long *)param_3 + 0x5c0))(param_3,param_17);
  rive_android::FindClass(param_3,(_JNIEnv *)"app/rive/RiveDrawToBufferException",pcVar9);
  if (lVar3 == 0) {
    rive_android::RiveLogE("RiveN/CQ","Failed to access pixel buffer for drawIntoBuffer");
    (**(code **)(*(long *)param_3 + 0x70))
              (param_3,local_e8,"Failed to access pixel buffer for drawing");
    goto LAB_0032370c;
  }
  local_120 = param_17;
  local_fc = param_16;
  local_100 = param_13;
  local_104 = param_12;
  local_110 = param_11;
  local_118 = lVar14;
  local_f8 = lVar3;
  plVar4 = (long *)operator_new(0x20);
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_006517c8;
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  puVar5 = (undefined8 *)operator_new(0x78);
  plVar12 = plVar4 + 3;
  *plVar12 = (long)puVar5;
  *puVar5 = &PTR____assoc_sub_state_00651800;
  puVar5[2] = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  *(undefined8 *)((long)puVar5 + 0x6c) = 0;
  *(undefined8 *)((long)puVar5 + 100) = 0;
  FUN_00341010(1,plVar7);
  FUN_00341010(1,plVar7);
  local_a0 = (CommandQueue *)operator_new(0x70);
  lVar14 = local_f8;
  *(undefined8 *)(local_a0 + 0x10) = param_6;
  *(undefined8 *)(local_a0 + 0x18) = param_7;
  *(undefined ***)local_a0 = &PTR_FUN_00651830;
  *(CommandQueue **)(local_a0 + 8) = param_5;
  *(undefined8 *)(local_a0 + 0x20) = param_9;
  *(undefined8 *)(local_a0 + 0x28) = param_10;
  pCVar10 = local_c0;
  *(undefined8 *)(local_a0 + 0x30) = local_110;
  *(undefined4 *)(local_a0 + 0x44) = uVar15;
  *(undefined4 *)(local_a0 + 0x48) = param_2;
  *(undefined4 *)(local_a0 + 0x4c) = param_1;
  *(undefined4 *)(local_a0 + 0x38) = local_104;
  *(undefined4 *)(local_a0 + 0x3c) = local_100;
  *(long *)(local_a0 + 0x58) = local_f8;
  *(long **)(local_a0 + 0x60) = plVar12;
  local_a0[0x40] = SUB41(local_ec,0);
  *(long **)(local_a0 + 0x68) = plVar4;
  *(undefined4 *)(local_a0 + 0x50) = local_fc;
  rive::CommandQueue::draw(param_5,param_8,pCVar10);
  if (local_a0 == local_c0) {
    lVar3 = 4;
    pCVar6 = local_c0;
LAB_0032359c:
    (**(code **)(*(long *)pCVar6 + lVar3 * 8))();
  }
  else if (local_a0 != (CommandQueue *)0x0) {
    lVar3 = 5;
    pCVar6 = local_a0;
    goto LAB_0032359c;
  }
  puVar13 = (unique_lock *)*plVar12;
  if (puVar13 == (unique_lock *)0x0) {
    FUN_00323ff4(3);
LAB_00323768:
    FUN_00323ff4(1);
  }
  else {
    param_8 = puVar13 + 0x18;
    std::__ndk1::mutex::lock();
    uVar1 = *(uint *)(puVar13 + 0x70);
    plVar12 = (long *)(ulong)uVar1;
    if ((uVar1 >> 1 & 1) != 0) goto LAB_00323768;
    FUN_00341010(1,puVar13 + 8);
    *(uint *)(puVar13 + 0x70) = uVar1 | 2;
    std::__ndk1::mutex::unlock();
    local_c8 = '\x01';
    local_d0 = param_8;
    std::__ndk1::mutex::lock();
    std::__ndk1::__assoc_sub_state::__sub_wait(puVar13);
    local_d8 = 0;
    param_8 = puVar13 + 0x10;
    plVar12 = *(long **)param_8;
    std::exception_ptr::~exception_ptr((exception_ptr *)&local_d8);
    if (plVar12 == (long *)0x0) {
      iVar2 = *(int *)(puVar13 + 0x74);
      if (local_c8 != '\0') {
        std::__ndk1::mutex::unlock();
      }
      lVar3 = FUN_00341040(0xffffffffffffffff,puVar13 + 8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)puVar13 + 0x10))(puVar13);
      }
      (**(code **)(*(long *)param_3 + 0x600))(param_3,local_120,lVar14,0);
      lVar14 = local_118;
      if (iVar2 == 2) {
        (**(code **)(*(long *)param_3 + 0x70))
                  (param_3,local_e8,"Failed to draw into buffer: State machine instance is null");
        lVar14 = local_118;
      }
      else if (iVar2 == 1) {
        (**(code **)(*(long *)param_3 + 0x70))
                  (param_3,local_e8,"Failed to draw into buffer: Artboard instance is null");
      }
      lVar3 = FUN_00341040(0xffffffffffffffff,plVar7);
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      lVar3 = FUN_00341040(0xffffffffffffffff,plVar7);
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
LAB_0032370c:
      if (local_e8 != 0) {
        (**(code **)(*local_e0 + 0xb8))();
      }
      if (*(long *)(lVar14 + 0x28) == local_90) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  std::exception_ptr::exception_ptr((exception_ptr *)&local_d8,(exception_ptr *)param_8);
  plVar7 = (long *)std::rethrow_exception(&local_d8);
  pppuVar8 = &ppuStack_190;
  pcStack_148 = Java_app_rive_core_CommandQueueJNIBridge_cppRunOnCommandServer;
  lVar14 = tpidr_el0;
  lStack_158 = *(long *)(lVar14 + 0x28);
  puStack_150 = &stack0xffffffffffffffa0;
  plStack_140 = plVar4;
  plStack_130 = plVar12;
  prStack_128 = param_3;
  uStack_188 = (**(code **)(*plVar7 + 0xa8))(plVar7,uVar11);
  ppuStack_190 = &PTR_FUN_00651878;
  plStack_170 = (long *)&ppuStack_190;
  rive::CommandQueue::runOnce(pCVar10,&ppuStack_190);
  if ((undefined ***)plStack_170 == &ppuStack_190) {
    lVar3 = 4;
  }
  else {
    if (plStack_170 == (long *)0x0) goto LAB_00323804;
    lVar3 = 5;
    pppuVar8 = (undefined ***)plStack_170;
  }
  (**(code **)((long)*pppuVar8 + lVar3 * 8))();
LAB_00323804:
  if (*(long *)(lVar14 + 0x28) == lStack_158) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323784  Java_app_rive_core_CommandQueueJNIBridge_cppRunOnCommandServer =====

void Java_app_rive_core_CommandQueueJNIBridge_cppRunOnCommandServer
               (long *param_1,undefined8 param_2,CommandQueue *param_3,undefined8 param_4)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **local_70;
  undefined8 uStack_68;
  long *local_50;
  long local_38;
  
  pppuVar2 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_68 = (**(code **)(*param_1 + 0xa8))(param_1,param_4);
  local_70 = &PTR_FUN_00651878;
  local_50 = (long *)&local_70;
  rive::CommandQueue::runOnce(param_3,&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar3 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00323804;
    lVar3 = 5;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar3 * 8))();
LAB_00323804:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032382c  Java_app_rive_core_Listeners_cppDelete =====

void Java_app_rive_core_Listeners_cppDelete
               (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
               long *param_6,long *param_7,long *param_8,long *param_9)

{
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x58))(param_3);
  }
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x30))(param_4);
  }
  if (param_5 != (long *)0x0) {
    (**(code **)(*param_5 + 0x20))(param_5);
  }
  if (param_6 != (long *)0x0) {
    (**(code **)(*param_6 + 0x38))(param_6);
  }
  if (param_7 != (long *)0x0) {
    (**(code **)(*param_7 + 0x20))(param_7);
  }
  if (param_8 != (long *)0x0) {
    (**(code **)(*param_8 + 0x20))(param_8);
  }
  if (param_9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003238f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_9 + 0x20))(param_9);
    return;
  }
  return;
}


// ===== 00323908  FUN_00323908 =====

undefined8 FUN_00323908(undefined8 *param_1)

{
  pthread_key_t __key;
  long lVar1;
  pthread_key_t *ppVar2;
  void *__pointer;
  undefined8 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  ppVar2 = (pthread_key_t *)std::__ndk1::__thread_local_data();
  __pointer = (void *)*param_1;
  __key = *ppVar2;
  *param_1 = 0;
  pthread_setspecific(__key,__pointer);
  CommandQueueWithThread::
  startCommandServer(rive_android::RenderContext*,std::__ndk1::promise<rive_android::StartupResult>&&)
  ::{lambda()#1}::operator()((_lambda___1_ *)(param_1 + 1));
  FUN_003241b8(&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032397c  CommandQueueWithThread::startCommandServer(rive_android::RenderContext*,std::__ndk1::promise<rive_android::StartupResult>&&)::{lambda()#1}::operator() =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandQueueWithThread::startCommandServer(rive_android::RenderContext*,
   std::__ndk1::promise<rive_android::StartupResult>&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
CommandQueueWithThread::
startCommandServer(rive_android::RenderContext*,std::__ndk1::promise<rive_android::StartupResult>&&)
::{lambda()#1}::operator()(_lambda___1_ *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  CommandQueue *this_00;
  rive_android *prVar5;
  uint uVar6;
  int iVar7;
  pthread_t __target_thread;
  long *plVar8;
  undefined8 uVar9;
  _jmethodID *p_Var10;
  undefined8 *puVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_310;
  long lStack_308;
  undefined1 *puStack_300;
  code *pcStack_2f8;
  _jmethodID *p_Stack_2f0;
  _jclass *p_Stack_2e8;
  char *pcStack_2e0;
  _lambda___1_ *p_Stack_2d8;
  undefined1 local_2d0 [4];
  undefined4 local_2cc;
  ulong local_2c8;
  undefined8 uStack_2c0;
  char *local_2b8;
  long *local_2b0;
  CommandQueue *local_2a8;
  undefined *local_2a0;
  undefined8 uStack_298;
  char local_290;
  undefined7 uStack_28f;
  byte local_288;
  undefined7 uStack_287;
  char *local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  rive_android *local_258;
  uint local_250;
  undefined4 uStack_24c;
  long *local_248;
  undefined8 uStack_240;
  char *local_238;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __target_thread = pthread_self();
  puVar4 = PTR_g_JVM_0067caf8;
  uStack_268 = _UNK_00651400;
  local_270 = _DAT_006513f8;
  local_258 = (rive_android *)0x0;
  *(pthread_t *)(*(long *)(this + 8) + 0x438) = __target_thread;
  plVar8 = *(long **)puVar4;
  pcVar12 = (char *)&local_270;
  local_260 = DAT_00651408;
  uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,&local_258);
  rive_android::RiveLogD("RiveN/CQ","Attached command server thread to JVM");
  if (uVar6 == 0) {
    rive_android::RiveLogD("RiveN/CQ","Setting command server thread name");
    pthread_setname_np(__target_thread,"Rive CmdServer");
    rive_android::FindClass(local_258,(_JNIEnv *)"java/lang/Thread",pcVar12);
    uVar9 = (**(code **)(*(long *)local_258 + 0x388))
                      (local_258,CONCAT44(uStack_24c,local_250),"currentThread",
                       "()Ljava/lang/Thread;");
    p_Var10 = (_jmethodID *)
              _JNIEnv::CallStaticObjectMethod
                        ((_jclass *)local_258,(_jmethodID *)CONCAT44(uStack_24c,local_250),uVar9);
    prVar5 = local_258;
    uVar9 = (**(code **)(*(long *)local_258 + 0x108))
                      (local_258,CONCAT44(uStack_24c,local_250),"setName","(Ljava/lang/String;)V");
    rive_android::MakeJString((_JNIEnv *)local_258,"Rive CmdServer");
    _JNIEnv::CallVoidMethod((_jobject *)local_258,p_Var10,uVar9,CONCAT71(uStack_28f,local_290));
    if (CONCAT71(uStack_28f,local_290) != 0) {
      (**(code **)(*(long *)CONCAT71(uStack_287,local_288) + 0xb8))();
    }
    if (p_Var10 != (_jmethodID *)0x0) {
      (**(code **)(*(long *)prVar5 + 0xb8))(prVar5,p_Var10);
    }
    if (CONCAT44(uStack_24c,local_250) != 0) {
      (**(code **)(*local_248 + 0xb8))();
    }
    rive_android::RiveLogD("RiveN/CQ","Initializing Rive render context for command server");
    (**(code **)(**(long **)this + 0x10))(&local_290);
    if (local_290 == '\0') {
      rive_android::RiveLogE("RiveN/CQ","Failed to initialize the Rive render context");
      if (*(long *)(this + 0x10) == 0) {
        auVar16 = FUN_00323ff4(3);
        puVar11 = auVar16._8_8_;
        pcStack_2f8 = FUN_00323df0;
        p_Stack_2e8 = (_jclass *)prVar5;
        pcStack_2e0 = "Rive CmdServer";
        lVar1 = tpidr_el0;
        lStack_308 = *(long *)(lVar1 + 0x28);
        lVar13 = *auVar16._0_8_;
        puStack_300 = &stack0xffffffffffffffb0;
        p_Stack_2f0 = p_Var10;
        p_Stack_2d8 = this;
        if (lVar13 != 0) {
          puStack_300 = &stack0xffffffffffffffb0;
          std::__ndk1::mutex::lock();
          if ((*(byte *)(lVar13 + 0x70) & 1) == 0) {
            lVar14 = *(long *)(lVar13 + 0x10);
            uStack_310 = 0;
            std::exception_ptr::~exception_ptr((exception_ptr *)&uStack_310);
            if (lVar14 == 0) {
              *(undefined8 *)(lVar13 + 0x78) = *puVar11;
              uVar15 = puVar11[2];
              uVar9 = puVar11[1];
              *(undefined8 *)(lVar13 + 0x90) = puVar11[3];
              *(undefined8 *)(lVar13 + 0x88) = uVar15;
              *(undefined8 *)(lVar13 + 0x80) = uVar9;
              puVar11[2] = 0;
              puVar11[3] = 0;
              puVar11[1] = 0;
              *(uint *)(lVar13 + 0x70) = *(uint *)(lVar13 + 0x70) | 5;
              std::__ndk1::condition_variable::notify_all();
              std::__ndk1::mutex::unlock();
              if (*(long *)(lVar1 + 0x28) == lStack_308) {
                return;
              }
              goto LAB_00323eb4;
            }
          }
          FUN_00323ff4(2);
        }
        FUN_00323ff4(3);
LAB_00323eb4:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      FUN_0032401c(*(long *)(this + 0x10),&local_290);
    }
    else {
      rive_android::RiveLogD("RiveN/CQ","Creating command server factory");
      uStack_298 = *(undefined8 *)this;
      local_2a0 = PTR_vtable_0067cb00 + 0x10;
      rive_android::RiveLogD("RiveN/CQ","Creating command server");
      local_2a8 = *(CommandQueue **)(this + 8);
      if (local_2a8 != (CommandQueue *)0x0) {
        FUN_00340fb0(1,local_2a8);
      }
      local_2b0 = (long *)0x0;
      rive::CommandServer::CommandServer
                ((CommandServer *)&local_250,&local_2a8,&local_2a0,&local_2b0);
      plVar8 = local_2b0;
      if ((local_2b0 != (long *)0x0) && (iVar7 = FUN_00340fe0(0xffffffff,local_2b0 + 1), iVar7 == 1)
         ) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      this_00 = local_2a8;
      if ((local_2a8 != (CommandQueue *)0x0) &&
         (iVar7 = FUN_00340fe0(0xffffffff,local_2a8), iVar7 == 1)) {
        rive::CommandQueue::~CommandQueue(this_00);
        operator_delete(this_00);
      }
      local_2d0[0] = 1;
      local_2cc = 0x3000;
      local_2b8 = (char *)operator_new(0x30);
      uStack_2c0 = _UNK_0024e208;
      local_2c8 = _DAT_0024e200;
      uVar3 = s_Command_Server_started_successfu_00243f72._24_8_;
      uVar2 = s_Command_Server_started_successfu_00243f72._16_8_;
      uVar15 = s_Command_Server_started_successfu_00243f72._8_8_;
      uVar9 = s_Command_Server_started_successfu_00243f72._0_8_;
      local_2b8[0x1f] = 'u';
      local_2b8[0x20] = 'l';
      local_2b8[0x21] = 'l';
      local_2b8[0x22] = 'y';
      local_2b8[0x23] = '\0';
      *(undefined8 *)(local_2b8 + 8) = uVar15;
      *(undefined8 *)local_2b8 = uVar9;
      *(undefined8 *)(local_2b8 + 0x18) = uVar3;
      *(undefined8 *)(local_2b8 + 0x10) = uVar2;
      FUN_00323df0(this + 0x10,local_2d0);
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      rive_android::RiveLogD("RiveN/CQ","Beginning command server processing loop");
      rive::CommandServer::serveUntilDisconnect((CommandServer *)&local_250);
      rive_android::RiveLogD("RiveN/CQ","Command server disconnected, cleaning up");
      rive_android::RiveLogD("RiveN/CQ","Deleting render context");
      (**(code **)(**(long **)this + 0x18))();
      if (**(int **)(this + 8) != 3) {
        rive_android::RiveLogW
                  ("RiveN/CQ",
                   "Command queue ref count before worker thread detach does not match expected value:\n  Expected: 3; Actual: %d\n    1. Main thread\'s released reference\n    2. This worker thread, cleaned by rcp scope\n    3. Command server rcp, stack allocated and about to fall from scope"
                  );
      }
      rive_android::RiveLogD("RiveN/CQ","Detaching command server thread from JVM");
      (**(code **)(**(long **)puVar4 + 0x28))();
      rive::CommandServer::~CommandServer((CommandServer *)&local_250);
    }
    if ((local_288 & 1) == 0) goto LAB_00323db8;
  }
  else {
    rive_android::RiveLogE
              ("RiveN/CQ","Failed to attach command server thread to JVM: %d",(ulong)uVar6);
    local_250 = local_250 & 0xffffff00;
    uStack_24c = 0x3003;
    local_238 = (char *)operator_new(0x20);
    uStack_240 = _UNK_0024e028;
    local_248 = _DAT_0024e020;
    uVar2 = s_Failed_to_attach_thread_to_JVM_002480cd._22_8_;
    uVar15 = s_Failed_to_attach_thread_to_JVM_002480cd._0_8_;
    uVar9 = CONCAT62(s_Failed_to_attach_thread_to_JVM_002480cd._16_6_,
                     s_Failed_to_attach_thread_to_JVM_002480cd._14_2_);
    *(ulong *)(local_238 + 8) =
         CONCAT26(s_Failed_to_attach_thread_to_JVM_002480cd._14_2_,
                  s_Failed_to_attach_thread_to_JVM_002480cd._8_6_);
    *(undefined8 *)local_238 = uVar15;
    *(undefined8 *)(local_238 + 0x16) = uVar2;
    *(undefined8 *)(local_238 + 0xe) = uVar9;
    local_238[0x1e] = '\0';
    FUN_00323df0(this + 0x10,&local_250);
    local_278 = local_238;
    if (((ulong)local_248 & 1) == 0) goto LAB_00323db8;
  }
  operator_delete(local_278);
LAB_00323db8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323df0  FUN_00323df0 =====

void FUN_00323df0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    std::__ndk1::mutex::lock();
    if ((*(byte *)(lVar2 + 0x70) & 1) == 0) {
      lVar3 = *(long *)(lVar2 + 0x10);
      local_40 = 0;
      std::exception_ptr::~exception_ptr((exception_ptr *)&local_40);
      if (lVar3 == 0) {
        *(undefined8 *)(lVar2 + 0x78) = *param_2;
        uVar5 = param_2[2];
        uVar4 = param_2[1];
        *(undefined8 *)(lVar2 + 0x90) = param_2[3];
        *(undefined8 *)(lVar2 + 0x88) = uVar5;
        *(undefined8 *)(lVar2 + 0x80) = uVar4;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[1] = 0;
        *(uint *)(lVar2 + 0x70) = *(uint *)(lVar2 + 0x70) | 5;
        std::__ndk1::condition_variable::notify_all();
        std::__ndk1::mutex::unlock();
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
        goto LAB_00323eb4;
      }
    }
    FUN_00323ff4(2);
  }
  FUN_00323ff4(3);
LAB_00323eb4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323eb8  _JNIEnv::CallStaticObjectMethod =====

/* _JNIEnv::CallStaticObjectMethod(_jclass*, _jmethodID*, ...) */

void _JNIEnv::CallStaticObjectMethod(_jclass *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*(long *)param_1 + 0x398))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323f54  _JNIEnv::CallVoidMethod =====

/* _JNIEnv::CallVoidMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallVoidMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*(long *)param_1 + 0x1f0))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00323ff0  rive::Factory::~Factory =====

/* rive::Factory::~Factory() */

void __thiscall rive::Factory::~Factory(Factory *this)

{
  return;
}


// ===== 00323ff4  FUN_00323ff4 =====

void FUN_00323ff4(void)

{
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__libcpp_verbose_abort("future_error was thrown in -fno-exceptions mode");
}


// ===== 00324008  FUN_00324008 =====

void FUN_00324008(void)

{
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__libcpp_verbose_abort("bad_array_new_length was thrown in -fno-exceptions mode");
}


// ===== 0032401c  FUN_0032401c =====

void FUN_0032401c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::mutex::lock();
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    local_40 = 0;
    std::exception_ptr::~exception_ptr((exception_ptr *)&local_40);
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x78) = *param_2;
      if ((*(byte *)(param_2 + 1) & 1) == 0) {
        uVar4 = param_2[2];
        uVar3 = param_2[1];
        *(undefined8 *)(param_1 + 0x90) = param_2[3];
        *(undefined8 *)(param_1 + 0x88) = uVar4;
        *(undefined8 *)(param_1 + 0x80) = uVar3;
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(param_1 + 0x80),(char *)param_2[3],param_2[2]);
      }
      *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 5;
      std::__ndk1::condition_variable::notify_all();
      std::__ndk1::mutex::unlock();
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_003240e8;
    }
  }
  FUN_00323ff4(2);
LAB_003240e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003240ec  CommandServerFactory::~CommandServerFactory =====

/* CommandServerFactory::~CommandServerFactory() */

void __thiscall CommandServerFactory::~CommandServerFactory(CommandServerFactory *this)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003240f0  CommandServerFactory::makeRenderBuffer =====

/* CommandServerFactory::makeRenderBuffer(rive::RenderBufferType, rive::RenderBufferFlags, unsigned
   long) */

void CommandServerFactory::makeRenderBuffer
               (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  long *plVar1;
  
  rive_android::RiveLogD("RiveN/CQFactory","Creating render buffer");
  plVar1 = *(long **)(*(long *)(param_2 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x0032415c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(param_1,plVar1,param_3,param_4,param_5);
  return;
}


// ===== 00324160  CommandServerFactory::decodeImage =====

/* CommandServerFactory::decodeImage(rive::Span<unsigned char const>) */

void CommandServerFactory::decodeImage
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  rive_android::RiveLogD("RiveN/CQFactory","Decoding encoded image");
  rive_android::renderImageFromAndroidDecode(param_1,param_3,param_4,0,*(undefined8 *)(param_2 + 8))
  ;
  return;
}


// ===== 003241b8  FUN_003241b8 =====

void FUN_003241b8(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  CommandQueue *this;
  __thread_struct *this_00;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00320190(puVar2 + 3);
    this = (CommandQueue *)puVar2[2];
    if ((this != (CommandQueue *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,this), iVar1 == 1)) {
      rive::CommandQueue::~CommandQueue(this);
      operator_delete(this);
    }
    this_00 = (__thread_struct *)*puVar2;
    *puVar2 = 0;
    if (this_00 != (__thread_struct *)0x0) {
      std::__ndk1::__thread_struct::~__thread_struct(this_00);
      operator_delete(this_00);
    }
    operator_delete(puVar2);
    return;
  }
  return;
}


// ===== 0032423c  FileListener::onFileError =====

/* FileListener::onFileError(rive::FileHandle_HandlePlaceholder*, unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)
    */

void __thiscall
FileListener::onFileError
          (FileListener *this,undefined8 param_2_00,basic_string *param_2,_JNIEnv *param_4)

{
  long lVar1;
  rive_android *this_00;
  _jobject *p_Var2;
  undefined8 uVar3;
  basic_string *pbVar4;
  long lVar5;
  long local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  pbVar4 = param_2;
  this_00 = (rive_android *)rive_android::GetJNIEnv();
  rive_android::MakeJString(this_00,param_4,pbVar4);
  p_Var2 = (_jobject *)rive_android::GetJNIEnv();
  uVar3 = (**(code **)(*(long *)p_Var2 + 0x108))
                    (p_Var2,*(undefined8 *)(this + 0x18),"onFileError","(JLjava/lang/String;)V");
  _JNIEnv::CallVoidMethod(p_Var2,*(_jmethodID **)(this + 0x20),uVar3,param_2,local_58);
  if (local_58 != 0) {
    (**(code **)(*local_50 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00324304  rive::CommandQueue::FileListener::onFileDeleted =====

/* rive::CommandQueue::FileListener::onFileDeleted(rive::FileHandle_HandlePlaceholder*, unsigned
   long) */

void rive::CommandQueue::FileListener::onFileDeleted
               (FileHandle_HandlePlaceholder *param_1,ulong param_2)

{
  return;
}


// ===== 00324308  FileListener::onFileLoaded =====

/* FileListener::onFileLoaded(rive::FileHandle_HandlePlaceholder*, unsigned long) */

void __thiscall
FileListener::onFileLoaded(FileListener *this,FileHandle_HandlePlaceholder *param_1,ulong param_2)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = (_jobject *)rive_android::GetJNIEnv();
  uVar2 = (**(code **)(*(long *)p_Var1 + 0x108))
                    (p_Var1,*(undefined8 *)(this + 0x18),"onFileLoaded","(JJ)V");
  _JNIEnv::CallVoidMethod(p_Var1,*(_jmethodID **)(this + 0x20),uVar2,param_2,param_1);
  return;
}


// ===== 00324370  rive::CommandQueue::FileListener::onArtboardInstantiated =====

/* rive::CommandQueue::FileListener::onArtboardInstantiated(rive::FileHandle_HandlePlaceholder*,
   unsigned long, rive::ArtboardHandle_HandlePlaceholder*) */

void rive::CommandQueue::FileListener::onArtboardInstantiated
               (FileHandle_HandlePlaceholder *param_1,ulong param_2,
               ArtboardHandle_HandlePlaceholder *param_3)

{
  return;
}


// ===== 00324374  rive::CommandQueue::FileListener::onViewModelInstanceInstantiated =====

/* rive::CommandQueue::FileListener::onViewModelInstanceInstantiated(rive::FileHandle_HandlePlaceholder*,
   unsigned long, rive::ViewModelInstanceHandle_HandlePlaceholder*) */

void rive::CommandQueue::FileListener::onViewModelInstanceInstantiated
               (FileHandle_HandlePlaceholder *param_1,ulong param_2,
               ViewModelInstanceHandle_HandlePlaceholder *param_3)

{
  return;
}


// ===== 00324378  FileListener::onArtboardsListed =====

/* FileListener::onArtboardsListed(rive::FileHandle_HandlePlaceholder*, unsigned long,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >) */

void __thiscall
FileListener::onArtboardsListed
          (FileListener *this,undefined8 param_2_00,undefined8 param_2,vector *param_4)

{
  long lVar1;
  _JNIEnv *p_Var2;
  _jobject *p_Var3;
  undefined8 uVar4;
  long lVar5;
  long local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  p_Var2 = (_JNIEnv *)rive_android::GetJNIEnv();
  rive_android::VecStringToJStringList(p_Var2,param_4);
  p_Var3 = (_jobject *)rive_android::GetJNIEnv();
  uVar4 = (**(code **)(*(long *)p_Var3 + 0x108))
                    (p_Var3,*(undefined8 *)(this + 0x18),"onArtboardsListed","(JLjava/util/List;)V")
  ;
  _JNIEnv::CallVoidMethod(p_Var3,*(_jmethodID **)(this + 0x20),uVar4,param_2,local_58);
  if (local_58 != 0) {
    (**(code **)(*local_50 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00324440  FileListener::onViewModelsListed =====

/* FileListener::onViewModelsListed(rive::FileHandle_HandlePlaceholder*, unsigned long,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >) */

void __thiscall
FileListener::onViewModelsListed
          (FileListener *this,undefined8 param_2_00,undefined8 param_2,vector *param_4)

{
  long lVar1;
  _JNIEnv *p_Var2;
  _jobject *p_Var3;
  undefined8 uVar4;
  long lVar5;
  long local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  p_Var2 = (_JNIEnv *)rive_android::GetJNIEnv();
  rive_android::VecStringToJStringList(p_Var2,param_4);
  p_Var3 = (_jobject *)rive_android::GetJNIEnv();
  uVar4 = (**(code **)(*(long *)p_Var3 + 0x108))
                    (p_Var3,*(undefined8 *)(this + 0x18),"onViewModelsListed","(JLjava/util/List;)V"
                    );
  _JNIEnv::CallVoidMethod(p_Var3,*(_jmethodID **)(this + 0x20),uVar4,param_2,local_58);
  if (local_58 != 0) {
    (**(code **)(*local_50 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00324508  FileListener::onViewModelInstanceNamesListed =====

/* FileListener::onViewModelInstanceNamesListed(rive::FileHandle_HandlePlaceholder*, unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >) */

void __thiscall
FileListener::onViewModelInstanceNamesListed
          (FileListener *this,undefined8 param_2_00,undefined8 param_2,undefined8 param_4,
          vector *param_5)

{
  long lVar1;
  _JNIEnv *p_Var2;
  _jobject *p_Var3;
  undefined8 uVar4;
  long lVar5;
  long local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  p_Var2 = (_JNIEnv *)rive_android::GetJNIEnv();
  rive_android::VecStringToJStringList(p_Var2,param_5);
  p_Var3 = (_jobject *)rive_android::GetJNIEnv();
  uVar4 = (**(code **)(*(long *)p_Var3 + 0x108))
                    (p_Var3,*(undefined8 *)(this + 0x18),"onViewModelInstancesListed",
                     "(JLjava/util/List;)V");
  _JNIEnv::CallVoidMethod(p_Var3,*(_jmethodID **)(this + 0x20),uVar4,param_2,local_58);
  if (local_58 != 0) {
    (**(code **)(*local_50 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003245d0  FileListener::onViewModelPropertiesListed =====

/* FileListener::onViewModelPropertiesListed(rive::FileHandle_HandlePlaceholder*, unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<rive::CommandQueue::FileListener::ViewModelPropertyData,
   std::__ndk1::allocator<rive::CommandQueue::FileListener::ViewModelPropertyData> >) */

void __thiscall
FileListener::onViewModelPropertiesListed
          (FileListener *this,undefined8 param_2_00,char *param_2,undefined8 param_4,
          undefined8 *param_5)

{
  uint *puVar1;
  long lVar2;
  _jmethodID *p_Var3;
  rive_android *this_00;
  basic_string *pbVar4;
  basic_string *pbVar5;
  _jmethodID *p_Var6;
  undefined8 uVar7;
  long lVar8;
  _jobject *p_Var9;
  char *pcVar10;
  char *pcVar11;
  uint *puVar12;
  long local_c8;
  long *local_c0;
  long local_b8;
  long *local_b0;
  _jmethodID *local_a8;
  long *local_a0;
  _jmethodID *local_98;
  long *local_90;
  _jclass *local_88;
  long *local_80;
  _jclass *local_78;
  long *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pcVar10 = param_2;
  this_00 = (rive_android *)rive_android::GetJNIEnv();
  rive_android::FindClass(this_00,(_JNIEnv *)"java/util/ArrayList",pcVar10);
  pcVar10 = "<init>";
  pbVar4 = (basic_string *)
           (**(code **)(*(long *)this_00 + 0x108))(this_00,local_78,"<init>",&DAT_00241fd9);
  pcVar11 = "add";
  pbVar5 = (basic_string *)
           (**(code **)(*(long *)this_00 + 0x108))
                     (this_00,local_78,&DAT_0024336a,"(Ljava/lang/Object;)Z");
  rive_android::FindClass
            (this_00,(_JNIEnv *)"app/rive/runtime/kotlin/core/ViewModel$Property",pcVar11);
  p_Var6 = (_jmethodID *)
           (**(code **)(*(long *)this_00 + 0x108))
                     (this_00,local_88,"<init>",
                      "(Lapp/rive/runtime/kotlin/core/ViewModel$PropertyDataType;Ljava/lang/String;)V"
                     );
  rive_android::FindClass
            (this_00,(_JNIEnv *)"app/rive/runtime/kotlin/core/ViewModel$PropertyDataType",pcVar10);
  uVar7 = (**(code **)(*(long *)this_00 + 0x388))
                    (this_00,local_98,"fromInt",
                     "(I)Lapp/rive/runtime/kotlin/core/ViewModel$PropertyDataType;");
  rive_android::MakeObject((_JNIEnv *)this_00,local_78,(_jmethodID *)pbVar4,&local_a8);
  puVar1 = (uint *)param_5[1];
  for (puVar12 = (uint *)*param_5; p_Var3 = local_a8, puVar12 != puVar1; puVar12 = puVar12 + 0xe) {
    rive_android::MakeJString(this_00,(_JNIEnv *)(puVar12 + 2),pbVar4);
    lVar8 = _JNIEnv::CallStaticObjectMethod((_jclass *)this_00,local_98,uVar7,(ulong)*puVar12);
    rive_android::MakeObject((_JNIEnv *)this_00,local_88,p_Var6,&local_c8,lVar8,local_b8);
    pbVar4 = pbVar5;
    _JNIEnv::CallBooleanMethod((_jobject *)this_00,local_a8,pbVar5,local_c8);
    if (local_c8 != 0) {
      (**(code **)(*local_c0 + 0xb8))();
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)this_00 + 0xb8))(this_00,lVar8);
    }
    if (local_b8 != 0) {
      (**(code **)(*local_b0 + 0xb8))();
    }
  }
  p_Var9 = (_jobject *)rive_android::GetJNIEnv();
  uVar7 = (**(code **)(*(long *)p_Var9 + 0x108))
                    (p_Var9,*(undefined8 *)(this + 0x18),"onViewModelPropertiesListed",
                     "(JLjava/util/List;)V");
  _JNIEnv::CallVoidMethod(p_Var9,*(_jmethodID **)(this + 0x20),uVar7,param_2,p_Var3);
  if (local_a8 != (_jmethodID *)0x0) {
    (**(code **)(*local_a0 + 0xb8))();
  }
  if (local_98 != (_jmethodID *)0x0) {
    (**(code **)(*local_90 + 0xb8))();
  }
  if (local_88 != (_jclass *)0x0) {
    (**(code **)(*local_80 + 0xb8))();
  }
  if (local_78 != (_jclass *)0x0) {
    (**(code **)(*local_70 + 0xb8))();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032488c  FileListener::onViewModelEnumsListed =====

/* FileListener::onViewModelEnumsListed(rive::FileHandle_HandlePlaceholder*, unsigned long,
   std::__ndk1::vector<rive::ViewModelEnum, std::__ndk1::allocator<rive::ViewModelEnum> >) */

void __thiscall
FileListener::onViewModelEnumsListed
          (FileListener *this,undefined8 param_2_00,char *param_2,undefined8 *param_4)

{
  _JNIEnv *p_Var1;
  _JNIEnv *p_Var2;
  long lVar3;
  _jmethodID *p_Var4;
  rive_android *this_00;
  _jmethodID *p_Var5;
  basic_string *pbVar6;
  _jmethodID *p_Var7;
  _jobject *p_Var8;
  undefined8 uVar9;
  char *pcVar10;
  _jmethodID *p_Var11;
  _JNIEnv *p_Var12;
  _JNIEnv *p_Var13;
  long local_c8;
  long *local_c0;
  _jmethodID *local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  _jmethodID *local_98;
  long *local_90;
  _jclass *local_88;
  long *local_80;
  _jclass *local_78;
  long *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pcVar10 = param_2;
  this_00 = (rive_android *)rive_android::GetJNIEnv();
  rive_android::FindClass(this_00,(_JNIEnv *)"java/util/ArrayList",pcVar10);
  p_Var5 = (_jmethodID *)
           (**(code **)(*(long *)this_00 + 0x108))(this_00,local_78,"<init>",&DAT_00241fd9);
  pcVar10 = "add";
  pbVar6 = (basic_string *)
           (**(code **)(*(long *)this_00 + 0x108))
                     (this_00,local_78,&DAT_0024336a,"(Ljava/lang/Object;)Z");
  rive_android::FindClass(this_00,(_JNIEnv *)"app/rive/runtime/kotlin/core/File$Enum",pcVar10);
  p_Var7 = (_jmethodID *)
           (**(code **)(*(long *)this_00 + 0x108))
                     (this_00,local_88,"<init>","(Ljava/lang/String;Ljava/util/List;)V");
  p_Var11 = p_Var5;
  rive_android::MakeObject((_JNIEnv *)this_00,local_78,p_Var5,&local_98);
  p_Var1 = (_JNIEnv *)param_4[1];
  for (p_Var12 = (_JNIEnv *)*param_4; p_Var4 = local_98, p_Var12 != p_Var1; p_Var12 = p_Var12 + 0x30
      ) {
    rive_android::MakeJString(this_00,p_Var12,(basic_string *)p_Var11);
    p_Var11 = p_Var5;
    rive_android::MakeObject((_JNIEnv *)this_00,local_78,p_Var5,&local_b8);
    p_Var2 = *(_JNIEnv **)(p_Var12 + 0x20);
    for (p_Var13 = *(_JNIEnv **)(p_Var12 + 0x18); p_Var13 != p_Var2; p_Var13 = p_Var13 + 0x18) {
      rive_android::MakeJString(this_00,p_Var13,(basic_string *)p_Var11);
      p_Var11 = (_jmethodID *)pbVar6;
      _JNIEnv::CallBooleanMethod((_jobject *)this_00,local_b8,pbVar6,local_c8);
      if (local_c8 != 0) {
        (**(code **)(*local_c0 + 0xb8))();
      }
    }
    rive_android::MakeObject((_JNIEnv *)this_00,local_88,p_Var7,&local_c8,local_a8,local_b8);
    p_Var11 = (_jmethodID *)pbVar6;
    _JNIEnv::CallBooleanMethod((_jobject *)this_00,local_98,pbVar6,local_c8);
    if (local_c8 != 0) {
      (**(code **)(*local_c0 + 0xb8))();
    }
    if (local_b8 != (_jmethodID *)0x0) {
      (**(code **)(*local_b0 + 0xb8))();
    }
    if (local_a8 != 0) {
      (**(code **)(*local_a0 + 0xb8))();
    }
  }
  p_Var8 = (_jobject *)rive_android::GetJNIEnv();
  uVar9 = (**(code **)(*(long *)p_Var8 + 0x108))
                    (p_Var8,*(undefined8 *)(this + 0x18),"onEnumsListed","(JLjava/util/List;)V");
  _JNIEnv::CallVoidMethod(p_Var8,*(_jmethodID **)(this + 0x20),uVar9,param_2,p_Var4);
  if (local_98 != (_jmethodID *)0x0) {
    (**(code **)(*local_90 + 0xb8))();
  }
  if (local_88 != (_jclass *)0x0) {
    (**(code **)(*local_80 + 0xb8))();
  }
  if (local_78 != (_jclass *)0x0) {
    (**(code **)(*local_70 + 0xb8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00324b44  FileListener::~FileListener =====

/* FileListener::~FileListener() */

void __thiscall FileListener::~FileListener(FileListener *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  CommandQueue *this_00;
  FileHandle_HandlePlaceholder *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0067caa0 + 0x10;
  plVar3 = (long *)rive_android::GetJNIEnv();
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x18));
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x20));
  if (*(long *)(this + 8) != 0) {
    local_40 = *(FileHandle_HandlePlaceholder **)(this + 0x10);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::__unordered_map_hasher<rive::FileHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::hash<rive::FileHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::FileHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::FileHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::equal_to<rive::FileHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::FileHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>>>
    ::__erase_unique<rive::FileHandle_HandlePlaceholder*>
              ((__hash_table<std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::__unordered_map_hasher<rive::FileHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::hash<rive::FileHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::FileHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::FileHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::equal_to<rive::FileHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::FileHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>>>
                *)(*(long *)(this + 8) + 0x318),&local_40);
    this_00 = *(CommandQueue **)(this + 8);
    if ((this_00 != (CommandQueue *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,this_00), iVar2 == 1))
    {
      rive::CommandQueue::~CommandQueue(this_00);
      operator_delete(this_00);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00324c14  FileListener::~FileListener =====

/* FileListener::~FileListener() */

void __thiscall FileListener::~FileListener(FileListener *this)

{
  ~FileListener(this);
  operator_delete(this);
  return;
}


// ===== 00324c38  _JNIEnv::CallBooleanMethod =====

/* _JNIEnv::CallBooleanMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallBooleanMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*(long *)param_1 + 0x130))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00324cd4  std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::__unordered_map_hasher<rive::FileHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::hash<rive::FileHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::FileHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::FileHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::equal_to<rive::FileHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::FileHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>>>::__erase_unique<rive::FileHandle_HandlePlaceholder*> =====

/* unsigned long
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,
   rive::CommandQueue::FileListener*>,
   std::__ndk1::__unordered_map_hasher<rive::FileHandle_HandlePlaceholder*,
   std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,
   rive::CommandQueue::FileListener*>, std::__ndk1::hash<rive::FileHandle_HandlePlaceholder*>,
   std::__ndk1::equal_to<rive::FileHandle_HandlePlaceholder*>, true>,
   std::__ndk1::__unordered_map_equal<rive::FileHandle_HandlePlaceholder*,
   std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,
   rive::CommandQueue::FileListener*>, std::__ndk1::equal_to<rive::FileHandle_HandlePlaceholder*>,
   std::__ndk1::hash<rive::FileHandle_HandlePlaceholder*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,
   rive::CommandQueue::FileListener*> >
   >::__erase_unique<rive::FileHandle_HandlePlaceholder*>(rive::FileHandle_HandlePlaceholder*
   const&) */

ulong __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::__unordered_map_hasher<rive::FileHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::hash<rive::FileHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::FileHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::FileHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::equal_to<rive::FileHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::FileHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>>>
::__erase_unique<rive::FileHandle_HandlePlaceholder*>
          (__hash_table<std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::__unordered_map_hasher<rive::FileHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::hash<rive::FileHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::FileHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::FileHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>,std::__ndk1::equal_to<rive::FileHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::FileHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::FileHandle_HandlePlaceholder*,rive::CommandQueue::FileListener*>>>
           *this,FileHandle_HandlePlaceholder **param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  FileHandle_HandlePlaceholder *pFVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 8);
  if (uVar4 != 0) {
    pFVar5 = *param_1;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((ulong)(uint)((int)pFVar5 << 3) + 8 ^ (ulong)pFVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = ((ulong)pFVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*(long *)this + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if ((FileHandle_HandlePlaceholder *)plVar9[2] == pFVar5) {
            FUN_00324e18(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar4 = 1;
            goto LAB_00324dd4;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar4 = 0;
LAB_00324dd4:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00324e18  FUN_00324e18 =====

void FUN_00324e18(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00324ee4;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00324ee4;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00324ee4:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 00324f4c  ArtboardListener::onArtboardError =====

/* ArtboardListener::onArtboardError(rive::ArtboardHandle_HandlePlaceholder*, unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)
    */

void __thiscall
ArtboardListener::onArtboardError
          (ArtboardListener *this,undefined8 param_2_00,basic_string *param_2,_JNIEnv *param_4)

{
  long lVar1;
  rive_android *this_00;
  _jobject *p_Var2;
  undefined8 uVar3;
  basic_string *pbVar4;
  long lVar5;
  long local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  pbVar4 = param_2;
  this_00 = (rive_android *)rive_android::GetJNIEnv();
  rive_android::MakeJString(this_00,param_4,pbVar4);
  p_Var2 = (_jobject *)rive_android::GetJNIEnv();
  uVar3 = (**(code **)(*(long *)p_Var2 + 0x108))
                    (p_Var2,*(undefined8 *)(this + 0x18),"onArtboardError","(JLjava/lang/String;)V")
  ;
  _JNIEnv::CallVoidMethod(p_Var2,*(_jmethodID **)(this + 0x20),uVar3,param_2,local_58);
  if (local_58 != 0) {
    (**(code **)(*local_50 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325014  ArtboardListener::onDefaultViewModelInfoReceived =====

/* ArtboardListener::onDefaultViewModelInfoReceived(rive::ArtboardHandle_HandlePlaceholder*,
   unsigned long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void __thiscall
ArtboardListener::onDefaultViewModelInfoReceived
          (ArtboardListener *this,undefined8 param_2_00,basic_string *param_2,_JNIEnv *param_4,
          _JNIEnv *param_5)

{
  long lVar1;
  rive_android *this_00;
  _jobject *p_Var2;
  undefined8 uVar3;
  basic_string *pbVar4;
  long lVar5;
  long local_68;
  long *local_60;
  long local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  pbVar4 = param_2;
  this_00 = (rive_android *)rive_android::GetJNIEnv();
  rive_android::MakeJString(this_00,param_4,pbVar4);
  rive_android::MakeJString(this_00,param_5,pbVar4);
  p_Var2 = (_jobject *)rive_android::GetJNIEnv();
  uVar3 = (**(code **)(*(long *)p_Var2 + 0x108))
                    (p_Var2,*(undefined8 *)(this + 0x18),"onDefaultViewModelInfoReceived",
                     "(JLjava/lang/String;Ljava/lang/String;)V");
  _JNIEnv::CallVoidMethod(p_Var2,*(_jmethodID **)(this + 0x20),uVar3,param_2,local_58,local_68);
  if (local_68 != 0) {
    (**(code **)(*local_60 + 0xb8))();
  }
  if (local_58 != 0) {
    (**(code **)(*local_50 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325114  rive::CommandQueue::ArtboardListener::onArtboardDeleted =====

/* rive::CommandQueue::ArtboardListener::onArtboardDeleted(rive::ArtboardHandle_HandlePlaceholder*,
   unsigned long) */

void rive::CommandQueue::ArtboardListener::onArtboardDeleted
               (ArtboardHandle_HandlePlaceholder *param_1,ulong param_2)

{
  return;
}


// ===== 00325118  rive::CommandQueue::ArtboardListener::onStateMachineInstantiated =====

/* rive::CommandQueue::ArtboardListener::onStateMachineInstantiated(rive::ArtboardHandle_HandlePlaceholder*,
   unsigned long, rive::StateMachineHandle_HandlePlaceholder*) */

void rive::CommandQueue::ArtboardListener::onStateMachineInstantiated
               (ArtboardHandle_HandlePlaceholder *param_1,ulong param_2,
               StateMachineHandle_HandlePlaceholder *param_3)

{
  return;
}


// ===== 0032511c  ArtboardListener::onStateMachinesListed =====

/* ArtboardListener::onStateMachinesListed(rive::ArtboardHandle_HandlePlaceholder*, unsigned long,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >) */

void __thiscall
ArtboardListener::onStateMachinesListed
          (ArtboardListener *this,undefined8 param_2_00,undefined8 param_2,vector *param_4)

{
  long lVar1;
  _JNIEnv *p_Var2;
  _jobject *p_Var3;
  undefined8 uVar4;
  long lVar5;
  long local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  p_Var2 = (_JNIEnv *)rive_android::GetJNIEnv();
  rive_android::VecStringToJStringList(p_Var2,param_4);
  p_Var3 = (_jobject *)rive_android::GetJNIEnv();
  uVar4 = (**(code **)(*(long *)p_Var3 + 0x108))
                    (p_Var3,*(undefined8 *)(this + 0x18),"onStateMachinesListed",
                     "(JLjava/util/List;)V");
  _JNIEnv::CallVoidMethod(p_Var3,*(_jmethodID **)(this + 0x20),uVar4,param_2,local_58);
  if (local_58 != 0) {
    (**(code **)(*local_50 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003251e4  ArtboardListener::~ArtboardListener =====

/* ArtboardListener::~ArtboardListener() */

void __thiscall ArtboardListener::~ArtboardListener(ArtboardListener *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  CommandQueue *this_00;
  ArtboardHandle_HandlePlaceholder *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0067caa8 + 0x10;
  plVar3 = (long *)rive_android::GetJNIEnv();
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x18));
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x20));
  if (*(long *)(this + 8) != 0) {
    local_40 = *(ArtboardHandle_HandlePlaceholder **)(this + 0x10);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::__unordered_map_hasher<rive::ArtboardHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::hash<rive::ArtboardHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::ArtboardHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::ArtboardHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::equal_to<rive::ArtboardHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::ArtboardHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>>>
    ::__erase_unique<rive::ArtboardHandle_HandlePlaceholder*>
              ((__hash_table<std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::__unordered_map_hasher<rive::ArtboardHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::hash<rive::ArtboardHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::ArtboardHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::ArtboardHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::equal_to<rive::ArtboardHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::ArtboardHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>>>
                *)(*(long *)(this + 8) + 0x3b8),&local_40);
    this_00 = *(CommandQueue **)(this + 8);
    if ((this_00 != (CommandQueue *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,this_00), iVar2 == 1))
    {
      rive::CommandQueue::~CommandQueue(this_00);
      operator_delete(this_00);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003252b4  ArtboardListener::~ArtboardListener =====

/* ArtboardListener::~ArtboardListener() */

void __thiscall ArtboardListener::~ArtboardListener(ArtboardListener *this)

{
  ~ArtboardListener(this);
  operator_delete(this);
  return;
}


// ===== 003252d8  std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::__unordered_map_hasher<rive::ArtboardHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::hash<rive::ArtboardHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::ArtboardHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::ArtboardHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::equal_to<rive::ArtboardHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::ArtboardHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>>>::__erase_unique<rive::ArtboardHandle_HandlePlaceholder*> =====

/* unsigned long
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,
   rive::CommandQueue::ArtboardListener*>,
   std::__ndk1::__unordered_map_hasher<rive::ArtboardHandle_HandlePlaceholder*,
   std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,
   rive::CommandQueue::ArtboardListener*>,
   std::__ndk1::hash<rive::ArtboardHandle_HandlePlaceholder*>,
   std::__ndk1::equal_to<rive::ArtboardHandle_HandlePlaceholder*>, true>,
   std::__ndk1::__unordered_map_equal<rive::ArtboardHandle_HandlePlaceholder*,
   std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,
   rive::CommandQueue::ArtboardListener*>,
   std::__ndk1::equal_to<rive::ArtboardHandle_HandlePlaceholder*>,
   std::__ndk1::hash<rive::ArtboardHandle_HandlePlaceholder*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,
   rive::CommandQueue::ArtboardListener*> >
   >::__erase_unique<rive::ArtboardHandle_HandlePlaceholder*>(rive::ArtboardHandle_HandlePlaceholder*
   const&) */

ulong __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::__unordered_map_hasher<rive::ArtboardHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::hash<rive::ArtboardHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::ArtboardHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::ArtboardHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::equal_to<rive::ArtboardHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::ArtboardHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>>>
::__erase_unique<rive::ArtboardHandle_HandlePlaceholder*>
          (__hash_table<std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::__unordered_map_hasher<rive::ArtboardHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::hash<rive::ArtboardHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::ArtboardHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::ArtboardHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>,std::__ndk1::equal_to<rive::ArtboardHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::ArtboardHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::ArtboardHandle_HandlePlaceholder*,rive::CommandQueue::ArtboardListener*>>>
           *this,ArtboardHandle_HandlePlaceholder **param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ArtboardHandle_HandlePlaceholder *pAVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 8);
  if (uVar4 != 0) {
    pAVar5 = *param_1;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((ulong)(uint)((int)pAVar5 << 3) + 8 ^ (ulong)pAVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = ((ulong)pAVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*(long *)this + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if ((ArtboardHandle_HandlePlaceholder *)plVar9[2] == pAVar5) {
            FUN_0032541c(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar4 = 1;
            goto LAB_003253d8;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar4 = 0;
LAB_003253d8:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032541c  FUN_0032541c =====

void FUN_0032541c(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_003254e8;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_003254e8;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_003254e8:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 00325550  StateMachineListener::onStateMachineError =====

/* StateMachineListener::onStateMachineError(rive::StateMachineHandle_HandlePlaceholder*, unsigned
   long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void __thiscall
StateMachineListener::onStateMachineError
          (StateMachineListener *this,undefined8 param_2_00,basic_string *param_2,_JNIEnv *param_4)

{
  long lVar1;
  rive_android *this_00;
  _jobject *p_Var2;
  undefined8 uVar3;
  basic_string *pbVar4;
  long lVar5;
  long local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  pbVar4 = param_2;
  this_00 = (rive_android *)rive_android::GetJNIEnv();
  rive_android::MakeJString(this_00,param_4,pbVar4);
  p_Var2 = (_jobject *)rive_android::GetJNIEnv();
  uVar3 = (**(code **)(*(long *)p_Var2 + 0x108))
                    (p_Var2,*(undefined8 *)(this + 0x18),"onStateMachineError",
                     "(JLjava/lang/String;)V");
  _JNIEnv::CallVoidMethod(p_Var2,*(_jmethodID **)(this + 0x20),uVar3,param_2,local_58);
  if (local_58 != 0) {
    (**(code **)(*local_50 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325618  rive::CommandQueue::StateMachineListener::onStateMachineDeleted =====

/* rive::CommandQueue::StateMachineListener::onStateMachineDeleted(rive::StateMachineHandle_HandlePlaceholder*,
   unsigned long) */

void rive::CommandQueue::StateMachineListener::onStateMachineDeleted
               (StateMachineHandle_HandlePlaceholder *param_1,ulong param_2)

{
  return;
}


// ===== 0032561c  StateMachineListener::onStateMachineSettled =====

/* StateMachineListener::onStateMachineSettled(rive::StateMachineHandle_HandlePlaceholder*, unsigned
   long) */

void StateMachineListener::onStateMachineSettled
               (StateMachineHandle_HandlePlaceholder *param_1,ulong param_2)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = (_jobject *)rive_android::GetJNIEnv();
  uVar2 = (**(code **)(*(long *)p_Var1 + 0x108))
                    (p_Var1,*(undefined8 *)(param_1 + 0x18),"onStateMachineSettled",&DAT_002487a3);
  _JNIEnv::CallVoidMethod(p_Var1,*(_jmethodID **)(param_1 + 0x20),uVar2,param_2);
  return;
}


// ===== 0032567c  StateMachineListener::~StateMachineListener =====

/* StateMachineListener::~StateMachineListener() */

void __thiscall StateMachineListener::~StateMachineListener(StateMachineListener *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  CommandQueue *this_00;
  StateMachineHandle_HandlePlaceholder *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0067cab0 + 0x10;
  plVar3 = (long *)rive_android::GetJNIEnv();
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x18));
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x20));
  if (*(long *)(this + 8) != 0) {
    local_40 = *(StateMachineHandle_HandlePlaceholder **)(this + 0x10);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::__unordered_map_hasher<rive::StateMachineHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::hash<rive::StateMachineHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::StateMachineHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::StateMachineHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::equal_to<rive::StateMachineHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::StateMachineHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>>>
    ::__erase_unique<rive::StateMachineHandle_HandlePlaceholder*>
              ((__hash_table<std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::__unordered_map_hasher<rive::StateMachineHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::hash<rive::StateMachineHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::StateMachineHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::StateMachineHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::equal_to<rive::StateMachineHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::StateMachineHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>>>
                *)(*(long *)(this + 8) + 0x408),&local_40);
    this_00 = *(CommandQueue **)(this + 8);
    if ((this_00 != (CommandQueue *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,this_00), iVar2 == 1))
    {
      rive::CommandQueue::~CommandQueue(this_00);
      operator_delete(this_00);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032574c  StateMachineListener::~StateMachineListener =====

/* StateMachineListener::~StateMachineListener() */

void __thiscall StateMachineListener::~StateMachineListener(StateMachineListener *this)

{
  ~StateMachineListener(this);
  operator_delete(this);
  return;
}


// ===== 00325770  std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::__unordered_map_hasher<rive::StateMachineHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::hash<rive::StateMachineHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::StateMachineHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::StateMachineHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::equal_to<rive::StateMachineHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::StateMachineHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>>>::__erase_unique<rive::StateMachineHandle_HandlePlaceholder*> =====

/* unsigned long
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,
   rive::CommandQueue::StateMachineListener*>,
   std::__ndk1::__unordered_map_hasher<rive::StateMachineHandle_HandlePlaceholder*,
   std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,
   rive::CommandQueue::StateMachineListener*>,
   std::__ndk1::hash<rive::StateMachineHandle_HandlePlaceholder*>,
   std::__ndk1::equal_to<rive::StateMachineHandle_HandlePlaceholder*>, true>,
   std::__ndk1::__unordered_map_equal<rive::StateMachineHandle_HandlePlaceholder*,
   std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,
   rive::CommandQueue::StateMachineListener*>,
   std::__ndk1::equal_to<rive::StateMachineHandle_HandlePlaceholder*>,
   std::__ndk1::hash<rive::StateMachineHandle_HandlePlaceholder*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,
   rive::CommandQueue::StateMachineListener*> >
   >::__erase_unique<rive::StateMachineHandle_HandlePlaceholder*>(rive::StateMachineHandle_HandlePlaceholder*
   const&) */

ulong __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::__unordered_map_hasher<rive::StateMachineHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::hash<rive::StateMachineHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::StateMachineHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::StateMachineHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::equal_to<rive::StateMachineHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::StateMachineHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>>>
::__erase_unique<rive::StateMachineHandle_HandlePlaceholder*>
          (__hash_table<std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::__unordered_map_hasher<rive::StateMachineHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::hash<rive::StateMachineHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::StateMachineHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::StateMachineHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>,std::__ndk1::equal_to<rive::StateMachineHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::StateMachineHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::StateMachineHandle_HandlePlaceholder*,rive::CommandQueue::StateMachineListener*>>>
           *this,StateMachineHandle_HandlePlaceholder **param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  StateMachineHandle_HandlePlaceholder *pSVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 8);
  if (uVar4 != 0) {
    pSVar5 = *param_1;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((ulong)(uint)((int)pSVar5 << 3) + 8 ^ (ulong)pSVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = ((ulong)pSVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*(long *)this + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if ((StateMachineHandle_HandlePlaceholder *)plVar9[2] == pSVar5) {
            FUN_003258b4(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar4 = 1;
            goto LAB_00325870;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar4 = 0;
LAB_00325870:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003258b4  FUN_003258b4 =====

void FUN_003258b4(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00325980;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00325980;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00325980:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 003259e8  rive::CommandQueue::ViewModelInstanceListener::onViewModelInstanceViewModelNameReceived =====

/* rive::CommandQueue::ViewModelInstanceListener::onViewModelInstanceViewModelNameReceived(rive::ViewModelInstanceHandle_HandlePlaceholder*,
   unsigned long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void rive::CommandQueue::ViewModelInstanceListener::onViewModelInstanceViewModelNameReceived(void)

{
  return;
}


// ===== 003259ec  ViewModelInstanceListener::onViewModelInstanceError =====

/* ViewModelInstanceListener::onViewModelInstanceError(rive::ViewModelInstanceHandle_HandlePlaceholder*,
   unsigned long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void __thiscall
ViewModelInstanceListener::onViewModelInstanceError
          (ViewModelInstanceListener *this,undefined8 param_2_00,basic_string *param_2,
          _JNIEnv *param_4)

{
  long lVar1;
  rive_android *this_00;
  _jobject *p_Var2;
  undefined8 uVar3;
  basic_string *pbVar4;
  long lVar5;
  long local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  pbVar4 = param_2;
  this_00 = (rive_android *)rive_android::GetJNIEnv();
  rive_android::MakeJString(this_00,param_4,pbVar4);
  p_Var2 = (_jobject *)rive_android::GetJNIEnv();
  uVar3 = (**(code **)(*(long *)p_Var2 + 0x108))
                    (p_Var2,*(undefined8 *)(this + 0x18),"onViewModelInstanceError",
                     "(JLjava/lang/String;)V");
  _JNIEnv::CallVoidMethod(p_Var2,*(_jmethodID **)(this + 0x20),uVar3,param_2,local_58);
  if (local_58 != 0) {
    (**(code **)(*local_50 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325ab4  rive::CommandQueue::ViewModelInstanceListener::onViewModelDeleted =====

/* rive::CommandQueue::ViewModelInstanceListener::onViewModelDeleted(rive::ViewModelInstanceHandle_HandlePlaceholder*,
   unsigned long) */

void rive::CommandQueue::ViewModelInstanceListener::onViewModelDeleted
               (ViewModelInstanceHandle_HandlePlaceholder *param_1,ulong param_2)

{
  return;
}


// ===== 00325ab8  ViewModelInstanceListener::onViewModelDataReceived =====

/* ViewModelInstanceListener::onViewModelDataReceived(rive::ViewModelInstanceHandle_HandlePlaceholder*,
   unsigned long, rive::CommandQueue::ViewModelInstanceData) */

void __thiscall
ViewModelInstanceListener::onViewModelDataReceived
          (ViewModelInstanceListener *this,undefined8 param_1,basic_string *param_2,uint *param_4)

{
  long lVar1;
  rive_android *this_00;
  _jobject *p_Var2;
  undefined8 uVar3;
  basic_string *pbVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  long local_78;
  long *local_70;
  long local_68;
  long *local_60;
  
  lVar1 = tpidr_el0;
  lVar7 = *(long *)(lVar1 + 0x28);
  pbVar4 = param_2;
  this_00 = (rive_android *)rive_android::GetJNIEnv();
  rive_android::MakeJString(this_00,(_JNIEnv *)(param_4 + 2),pbVar4);
  uVar9 = *param_4;
  if ((int)uVar9 < 4) {
    if (uVar9 == 1) {
      rive_android::MakeJString(this_00,(_JNIEnv *)(param_4 + 8),(basic_string *)(ulong)uVar9);
      p_Var2 = (_jobject *)rive_android::GetJNIEnv();
      lVar8 = *(long *)p_Var2;
      uVar3 = *(undefined8 *)(this + 0x18);
      pcVar5 = "onStringPropertyUpdated";
LAB_00325ce0:
      uVar3 = (**(code **)(lVar8 + 0x108))
                        (p_Var2,uVar3,pcVar5,"(JJLjava/lang/String;Ljava/lang/String;)V");
      _JNIEnv::CallVoidMethod
                (p_Var2,*(_jmethodID **)(this + 0x20),uVar3,param_2,param_1,local_68,local_78);
      if (local_78 != 0) {
        (**(code **)(*local_70 + 0xb8))();
      }
      goto LAB_00325d28;
    }
    if (uVar9 == 2) {
      fVar10 = (float)param_4[0xe];
      p_Var2 = (_jobject *)rive_android::GetJNIEnv();
      uVar3 = (**(code **)(*(long *)p_Var2 + 0x108))
                        (p_Var2,*(undefined8 *)(this + 0x18),"onNumberPropertyUpdated",
                         "(JJLjava/lang/String;F)V");
      _JNIEnv::CallVoidMethod
                (p_Var2,*(_jmethodID **)(this + 0x20),(double)fVar10,uVar3,param_2,param_1,local_68)
      ;
      goto LAB_00325d28;
    }
    if (uVar9 != 3) goto LAB_00325c44;
    uVar9 = (uint)(byte)param_4[0xe];
    p_Var2 = (_jobject *)rive_android::GetJNIEnv();
    lVar8 = *(long *)p_Var2;
    uVar3 = *(undefined8 *)(this + 0x18);
    pcVar5 = "onBooleanPropertyUpdated";
    pcVar6 = "(JJLjava/lang/String;Z)V";
  }
  else {
    if (uVar9 != 4) {
      if (uVar9 != 6) {
        if (uVar9 == 7) {
          p_Var2 = (_jobject *)rive_android::GetJNIEnv();
          uVar3 = (**(code **)(*(long *)p_Var2 + 0x108))
                            (p_Var2,*(undefined8 *)(this + 0x18),"onTriggerPropertyUpdated",
                             "(JJLjava/lang/String;)V");
          _JNIEnv::CallVoidMethod
                    (p_Var2,*(_jmethodID **)(this + 0x20),uVar3,param_2,param_1,local_68);
          goto LAB_00325d28;
        }
LAB_00325c44:
        rive_android::RiveLogE("RiveN/VMIListener","Unknown ViewModelInstance property type: %d");
        goto LAB_00325d28;
      }
      rive_android::MakeJString(this_00,(_JNIEnv *)(param_4 + 8),(basic_string *)(ulong)uVar9);
      p_Var2 = (_jobject *)rive_android::GetJNIEnv();
      lVar8 = *(long *)p_Var2;
      uVar3 = *(undefined8 *)(this + 0x18);
      pcVar5 = "onEnumPropertyUpdated";
      goto LAB_00325ce0;
    }
    uVar9 = param_4[0xe];
    p_Var2 = (_jobject *)rive_android::GetJNIEnv();
    lVar8 = *(long *)p_Var2;
    uVar3 = *(undefined8 *)(this + 0x18);
    pcVar5 = "onColorPropertyUpdated";
    pcVar6 = "(JJLjava/lang/String;I)V";
  }
  uVar3 = (**(code **)(lVar8 + 0x108))(p_Var2,uVar3,pcVar5,pcVar6);
  _JNIEnv::CallVoidMethod
            (p_Var2,*(_jmethodID **)(this + 0x20),uVar3,param_2,param_1,local_68,(ulong)uVar9);
LAB_00325d28:
  if (local_68 != 0) {
    (**(code **)(*local_60 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325d74  ViewModelInstanceListener::onViewModelListSizeReceived =====

/* ViewModelInstanceListener::onViewModelListSizeReceived(rive::ViewModelInstanceHandle_HandlePlaceholder*,
   unsigned long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned long) */

void __thiscall
ViewModelInstanceListener::onViewModelListSizeReceived
          (ViewModelInstanceListener *this,undefined8 param_2_00,undefined8 param_2,
          undefined8 param_4,undefined8 param_5)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = (_jobject *)rive_android::GetJNIEnv();
  uVar2 = (**(code **)(*(long *)p_Var1 + 0x108))
                    (p_Var1,*(undefined8 *)(this + 0x18),"onViewModelListSizeReceived","(JI)V");
  _JNIEnv::CallVoidMethod(p_Var1,*(_jmethodID **)(this + 0x20),uVar2,param_2,param_5);
  return;
}


// ===== 00325ddc  rive::CommandQueue::ViewModelInstanceListener::onViewModelListCleared =====

/* rive::CommandQueue::ViewModelInstanceListener::onViewModelListCleared(rive::ViewModelInstanceHandle_HandlePlaceholder*,
   unsigned long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void rive::CommandQueue::ViewModelInstanceListener::onViewModelListCleared(void)

{
  return;
}


// ===== 00325de0  ViewModelInstanceListener::~ViewModelInstanceListener =====

/* ViewModelInstanceListener::~ViewModelInstanceListener() */

void __thiscall
ViewModelInstanceListener::~ViewModelInstanceListener(ViewModelInstanceListener *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  CommandQueue *this_00;
  ViewModelInstanceHandle_HandlePlaceholder *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0067cab8 + 0x10;
  plVar3 = (long *)rive_android::GetJNIEnv();
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x18));
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x20));
  if (*(long *)(this + 8) != 0) {
    local_40 = *(ViewModelInstanceHandle_HandlePlaceholder **)(this + 0x10);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::__unordered_map_hasher<rive::ViewModelInstanceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::hash<rive::ViewModelInstanceHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::ViewModelInstanceHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::ViewModelInstanceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::equal_to<rive::ViewModelInstanceHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::ViewModelInstanceHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>>>
    ::__erase_unique<rive::ViewModelInstanceHandle_HandlePlaceholder*>
              ((__hash_table<std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::__unordered_map_hasher<rive::ViewModelInstanceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::hash<rive::ViewModelInstanceHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::ViewModelInstanceHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::ViewModelInstanceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::equal_to<rive::ViewModelInstanceHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::ViewModelInstanceHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>>>
                *)(*(long *)(this + 8) + 0x3e0),&local_40);
    this_00 = *(CommandQueue **)(this + 8);
    if ((this_00 != (CommandQueue *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,this_00), iVar2 == 1))
    {
      rive::CommandQueue::~CommandQueue(this_00);
      operator_delete(this_00);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00325eb0  ViewModelInstanceListener::~ViewModelInstanceListener =====

/* ViewModelInstanceListener::~ViewModelInstanceListener() */

void __thiscall
ViewModelInstanceListener::~ViewModelInstanceListener(ViewModelInstanceListener *this)

{
  ~ViewModelInstanceListener(this);
  operator_delete(this);
  return;
}


// ===== 00325ed4  std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::__unordered_map_hasher<rive::ViewModelInstanceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::hash<rive::ViewModelInstanceHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::ViewModelInstanceHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::ViewModelInstanceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::equal_to<rive::ViewModelInstanceHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::ViewModelInstanceHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>>>::__erase_unique<rive::ViewModelInstanceHandle_HandlePlaceholder*> =====

/* unsigned long
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,
   rive::CommandQueue::ViewModelInstanceListener*>,
   std::__ndk1::__unordered_map_hasher<rive::ViewModelInstanceHandle_HandlePlaceholder*,
   std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,
   rive::CommandQueue::ViewModelInstanceListener*>,
   std::__ndk1::hash<rive::ViewModelInstanceHandle_HandlePlaceholder*>,
   std::__ndk1::equal_to<rive::ViewModelInstanceHandle_HandlePlaceholder*>, true>,
   std::__ndk1::__unordered_map_equal<rive::ViewModelInstanceHandle_HandlePlaceholder*,
   std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,
   rive::CommandQueue::ViewModelInstanceListener*>,
   std::__ndk1::equal_to<rive::ViewModelInstanceHandle_HandlePlaceholder*>,
   std::__ndk1::hash<rive::ViewModelInstanceHandle_HandlePlaceholder*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,
   rive::CommandQueue::ViewModelInstanceListener*> >
   >::__erase_unique<rive::ViewModelInstanceHandle_HandlePlaceholder*>(rive::ViewModelInstanceHandle_HandlePlaceholder*
   const&) */

ulong __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::__unordered_map_hasher<rive::ViewModelInstanceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::hash<rive::ViewModelInstanceHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::ViewModelInstanceHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::ViewModelInstanceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::equal_to<rive::ViewModelInstanceHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::ViewModelInstanceHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>>>
::__erase_unique<rive::ViewModelInstanceHandle_HandlePlaceholder*>
          (__hash_table<std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::__unordered_map_hasher<rive::ViewModelInstanceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::hash<rive::ViewModelInstanceHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::ViewModelInstanceHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::ViewModelInstanceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>,std::__ndk1::equal_to<rive::ViewModelInstanceHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::ViewModelInstanceHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::ViewModelInstanceHandle_HandlePlaceholder*,rive::CommandQueue::ViewModelInstanceListener*>>>
           *this,ViewModelInstanceHandle_HandlePlaceholder **param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ViewModelInstanceHandle_HandlePlaceholder *pVVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 8);
  if (uVar4 != 0) {
    pVVar5 = *param_1;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((ulong)(uint)((int)pVVar5 << 3) + 8 ^ (ulong)pVVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = ((ulong)pVVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*(long *)this + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if ((ViewModelInstanceHandle_HandlePlaceholder *)plVar9[2] == pVVar5) {
            FUN_00326018(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar4 = 1;
            goto LAB_00325fd4;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar4 = 0;
LAB_00325fd4:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326018  FUN_00326018 =====

void FUN_00326018(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_003260e4;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_003260e4;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_003260e4:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 0032614c  ImageListener::onRenderImageDecoded =====

/* ImageListener::onRenderImageDecoded(rive::RenderImageHandle_HandlePlaceholder*, unsigned long) */

void __thiscall
ImageListener::onRenderImageDecoded
          (ImageListener *this,RenderImageHandle_HandlePlaceholder *param_1,ulong param_2)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = (_jobject *)rive_android::GetJNIEnv();
  uVar2 = (**(code **)(*(long *)p_Var1 + 0x108))
                    (p_Var1,*(undefined8 *)(this + 0x18),"onImageDecoded","(JJ)V");
  _JNIEnv::CallVoidMethod(p_Var1,*(_jmethodID **)(this + 0x20),uVar2,param_2,param_1);
  return;
}


// ===== 003261b4  ImageListener::onRenderImageError =====

/* ImageListener::onRenderImageError(rive::RenderImageHandle_HandlePlaceholder*, unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)
    */

void __thiscall
ImageListener::onRenderImageError
          (ImageListener *this,undefined8 param_2_00,basic_string *param_2,_JNIEnv *param_4)

{
  long lVar1;
  rive_android *this_00;
  _jobject *p_Var2;
  undefined8 uVar3;
  basic_string *pbVar4;
  long lVar5;
  long local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  pbVar4 = param_2;
  this_00 = (rive_android *)rive_android::GetJNIEnv();
  rive_android::MakeJString(this_00,param_4,pbVar4);
  p_Var2 = (_jobject *)rive_android::GetJNIEnv();
  uVar3 = (**(code **)(*(long *)p_Var2 + 0x108))
                    (p_Var2,*(undefined8 *)(this + 0x18),"onImageError","(JLjava/lang/String;)V");
  _JNIEnv::CallVoidMethod(p_Var2,*(_jmethodID **)(this + 0x20),uVar3,param_2,local_58);
  if (local_58 != 0) {
    (**(code **)(*local_50 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032627c  rive::CommandQueue::RenderImageListener::onRenderImageDeleted =====

/* rive::CommandQueue::RenderImageListener::onRenderImageDeleted(rive::RenderImageHandle_HandlePlaceholder*,
   unsigned long) */

void rive::CommandQueue::RenderImageListener::onRenderImageDeleted
               (RenderImageHandle_HandlePlaceholder *param_1,ulong param_2)

{
  return;
}


// ===== 00326280  ImageListener::~ImageListener =====

/* ImageListener::~ImageListener() */

void __thiscall ImageListener::~ImageListener(ImageListener *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  CommandQueue *this_00;
  RenderImageHandle_HandlePlaceholder *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0067cac0 + 0x10;
  plVar3 = (long *)rive_android::GetJNIEnv();
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x18));
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x20));
  if (*(long *)(this + 8) != 0) {
    local_40 = *(RenderImageHandle_HandlePlaceholder **)(this + 0x10);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::__unordered_map_hasher<rive::RenderImageHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::hash<rive::RenderImageHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::RenderImageHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::RenderImageHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::equal_to<rive::RenderImageHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::RenderImageHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>>>
    ::__erase_unique<rive::RenderImageHandle_HandlePlaceholder*>
              ((__hash_table<std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::__unordered_map_hasher<rive::RenderImageHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::hash<rive::RenderImageHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::RenderImageHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::RenderImageHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::equal_to<rive::RenderImageHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::RenderImageHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>>>
                *)(*(long *)(this + 8) + 0x340),&local_40);
    this_00 = *(CommandQueue **)(this + 8);
    if ((this_00 != (CommandQueue *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,this_00), iVar2 == 1))
    {
      rive::CommandQueue::~CommandQueue(this_00);
      operator_delete(this_00);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326350  ImageListener::~ImageListener =====

/* ImageListener::~ImageListener() */

void __thiscall ImageListener::~ImageListener(ImageListener *this)

{
  ~ImageListener(this);
  operator_delete(this);
  return;
}


// ===== 00326374  std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::__unordered_map_hasher<rive::RenderImageHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::hash<rive::RenderImageHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::RenderImageHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::RenderImageHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::equal_to<rive::RenderImageHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::RenderImageHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>>>::__erase_unique<rive::RenderImageHandle_HandlePlaceholder*> =====

/* unsigned long
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,
   rive::CommandQueue::RenderImageListener*>,
   std::__ndk1::__unordered_map_hasher<rive::RenderImageHandle_HandlePlaceholder*,
   std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,
   rive::CommandQueue::RenderImageListener*>,
   std::__ndk1::hash<rive::RenderImageHandle_HandlePlaceholder*>,
   std::__ndk1::equal_to<rive::RenderImageHandle_HandlePlaceholder*>, true>,
   std::__ndk1::__unordered_map_equal<rive::RenderImageHandle_HandlePlaceholder*,
   std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,
   rive::CommandQueue::RenderImageListener*>,
   std::__ndk1::equal_to<rive::RenderImageHandle_HandlePlaceholder*>,
   std::__ndk1::hash<rive::RenderImageHandle_HandlePlaceholder*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,
   rive::CommandQueue::RenderImageListener*> >
   >::__erase_unique<rive::RenderImageHandle_HandlePlaceholder*>(rive::RenderImageHandle_HandlePlaceholder*
   const&) */

ulong __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::__unordered_map_hasher<rive::RenderImageHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::hash<rive::RenderImageHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::RenderImageHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::RenderImageHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::equal_to<rive::RenderImageHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::RenderImageHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>>>
::__erase_unique<rive::RenderImageHandle_HandlePlaceholder*>
          (__hash_table<std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::__unordered_map_hasher<rive::RenderImageHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::hash<rive::RenderImageHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::RenderImageHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::RenderImageHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>,std::__ndk1::equal_to<rive::RenderImageHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::RenderImageHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::RenderImageHandle_HandlePlaceholder*,rive::CommandQueue::RenderImageListener*>>>
           *this,RenderImageHandle_HandlePlaceholder **param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  RenderImageHandle_HandlePlaceholder *pRVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 8);
  if (uVar4 != 0) {
    pRVar5 = *param_1;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((ulong)(uint)((int)pRVar5 << 3) + 8 ^ (ulong)pRVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = ((ulong)pRVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*(long *)this + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if ((RenderImageHandle_HandlePlaceholder *)plVar9[2] == pRVar5) {
            FUN_003264b8(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar4 = 1;
            goto LAB_00326474;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar4 = 0;
LAB_00326474:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003264b8  FUN_003264b8 =====

void FUN_003264b8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00326584;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00326584;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00326584:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 003265ec  AudioListener::onAudioSourceDecoded =====

/* AudioListener::onAudioSourceDecoded(rive::AudioSourceHandle_HandlePlaceholder*, unsigned long) */

void __thiscall
AudioListener::onAudioSourceDecoded
          (AudioListener *this,AudioSourceHandle_HandlePlaceholder *param_1,ulong param_2)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = (_jobject *)rive_android::GetJNIEnv();
  uVar2 = (**(code **)(*(long *)p_Var1 + 0x108))
                    (p_Var1,*(undefined8 *)(this + 0x18),"onAudioDecoded","(JJ)V");
  _JNIEnv::CallVoidMethod(p_Var1,*(_jmethodID **)(this + 0x20),uVar2,param_2,param_1);
  return;
}


// ===== 00326654  AudioListener::onAudioSourceError =====

/* AudioListener::onAudioSourceError(rive::AudioSourceHandle_HandlePlaceholder*, unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)
    */

void __thiscall
AudioListener::onAudioSourceError
          (AudioListener *this,undefined8 param_2_00,basic_string *param_2,_JNIEnv *param_4)

{
  long lVar1;
  rive_android *this_00;
  _jobject *p_Var2;
  undefined8 uVar3;
  basic_string *pbVar4;
  long lVar5;
  long local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  pbVar4 = param_2;
  this_00 = (rive_android *)rive_android::GetJNIEnv();
  rive_android::MakeJString(this_00,param_4,pbVar4);
  p_Var2 = (_jobject *)rive_android::GetJNIEnv();
  uVar3 = (**(code **)(*(long *)p_Var2 + 0x108))
                    (p_Var2,*(undefined8 *)(this + 0x18),"onAudioError","(JLjava/lang/String;)V");
  _JNIEnv::CallVoidMethod(p_Var2,*(_jmethodID **)(this + 0x20),uVar3,param_2,local_58);
  if (local_58 != 0) {
    (**(code **)(*local_50 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032671c  rive::CommandQueue::AudioSourceListener::onAudioSourceDeleted =====

/* rive::CommandQueue::AudioSourceListener::onAudioSourceDeleted(rive::AudioSourceHandle_HandlePlaceholder*,
   unsigned long) */

void rive::CommandQueue::AudioSourceListener::onAudioSourceDeleted
               (AudioSourceHandle_HandlePlaceholder *param_1,ulong param_2)

{
  return;
}


// ===== 00326720  AudioListener::~AudioListener =====

/* AudioListener::~AudioListener() */

void __thiscall AudioListener::~AudioListener(AudioListener *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  CommandQueue *this_00;
  AudioSourceHandle_HandlePlaceholder *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0067cac8 + 0x10;
  plVar3 = (long *)rive_android::GetJNIEnv();
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x18));
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x20));
  if (*(long *)(this + 8) != 0) {
    local_40 = *(AudioSourceHandle_HandlePlaceholder **)(this + 0x10);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::__unordered_map_hasher<rive::AudioSourceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::hash<rive::AudioSourceHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::AudioSourceHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::AudioSourceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::equal_to<rive::AudioSourceHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::AudioSourceHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>>>
    ::__erase_unique<rive::AudioSourceHandle_HandlePlaceholder*>
              ((__hash_table<std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::__unordered_map_hasher<rive::AudioSourceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::hash<rive::AudioSourceHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::AudioSourceHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::AudioSourceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::equal_to<rive::AudioSourceHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::AudioSourceHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>>>
                *)(*(long *)(this + 8) + 0x368),&local_40);
    this_00 = *(CommandQueue **)(this + 8);
    if ((this_00 != (CommandQueue *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,this_00), iVar2 == 1))
    {
      rive::CommandQueue::~CommandQueue(this_00);
      operator_delete(this_00);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003267f0  AudioListener::~AudioListener =====

/* AudioListener::~AudioListener() */

void __thiscall AudioListener::~AudioListener(AudioListener *this)

{
  ~AudioListener(this);
  operator_delete(this);
  return;
}


// ===== 00326814  std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::__unordered_map_hasher<rive::AudioSourceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::hash<rive::AudioSourceHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::AudioSourceHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::AudioSourceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::equal_to<rive::AudioSourceHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::AudioSourceHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>>>::__erase_unique<rive::AudioSourceHandle_HandlePlaceholder*> =====

/* unsigned long
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,
   rive::CommandQueue::AudioSourceListener*>,
   std::__ndk1::__unordered_map_hasher<rive::AudioSourceHandle_HandlePlaceholder*,
   std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,
   rive::CommandQueue::AudioSourceListener*>,
   std::__ndk1::hash<rive::AudioSourceHandle_HandlePlaceholder*>,
   std::__ndk1::equal_to<rive::AudioSourceHandle_HandlePlaceholder*>, true>,
   std::__ndk1::__unordered_map_equal<rive::AudioSourceHandle_HandlePlaceholder*,
   std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,
   rive::CommandQueue::AudioSourceListener*>,
   std::__ndk1::equal_to<rive::AudioSourceHandle_HandlePlaceholder*>,
   std::__ndk1::hash<rive::AudioSourceHandle_HandlePlaceholder*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,
   rive::CommandQueue::AudioSourceListener*> >
   >::__erase_unique<rive::AudioSourceHandle_HandlePlaceholder*>(rive::AudioSourceHandle_HandlePlaceholder*
   const&) */

ulong __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::__unordered_map_hasher<rive::AudioSourceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::hash<rive::AudioSourceHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::AudioSourceHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::AudioSourceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::equal_to<rive::AudioSourceHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::AudioSourceHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>>>
::__erase_unique<rive::AudioSourceHandle_HandlePlaceholder*>
          (__hash_table<std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::__unordered_map_hasher<rive::AudioSourceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::hash<rive::AudioSourceHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::AudioSourceHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::AudioSourceHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>,std::__ndk1::equal_to<rive::AudioSourceHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::AudioSourceHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::AudioSourceHandle_HandlePlaceholder*,rive::CommandQueue::AudioSourceListener*>>>
           *this,AudioSourceHandle_HandlePlaceholder **param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  AudioSourceHandle_HandlePlaceholder *pAVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 8);
  if (uVar4 != 0) {
    pAVar5 = *param_1;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((ulong)(uint)((int)pAVar5 << 3) + 8 ^ (ulong)pAVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = ((ulong)pAVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*(long *)this + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if ((AudioSourceHandle_HandlePlaceholder *)plVar9[2] == pAVar5) {
            FUN_00326958(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar4 = 1;
            goto LAB_00326914;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar4 = 0;
LAB_00326914:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326958  FUN_00326958 =====

void FUN_00326958(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00326a24;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00326a24;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00326a24:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 00326a8c  FontListener::onFontDecoded =====

/* FontListener::onFontDecoded(rive::FontHandle_HandlePlaceholder*, unsigned long) */

void __thiscall
FontListener::onFontDecoded(FontListener *this,FontHandle_HandlePlaceholder *param_1,ulong param_2)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = (_jobject *)rive_android::GetJNIEnv();
  uVar2 = (**(code **)(*(long *)p_Var1 + 0x108))
                    (p_Var1,*(undefined8 *)(this + 0x18),"onFontDecoded","(JJ)V");
  _JNIEnv::CallVoidMethod(p_Var1,*(_jmethodID **)(this + 0x20),uVar2,param_2,param_1);
  return;
}


// ===== 00326af4  FontListener::onFontError =====

/* FontListener::onFontError(rive::FontHandle_HandlePlaceholder*, unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)
    */

void __thiscall
FontListener::onFontError
          (FontListener *this,undefined8 param_2_00,basic_string *param_2,_JNIEnv *param_4)

{
  long lVar1;
  rive_android *this_00;
  _jobject *p_Var2;
  undefined8 uVar3;
  basic_string *pbVar4;
  long lVar5;
  long local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  pbVar4 = param_2;
  this_00 = (rive_android *)rive_android::GetJNIEnv();
  rive_android::MakeJString(this_00,param_4,pbVar4);
  p_Var2 = (_jobject *)rive_android::GetJNIEnv();
  uVar3 = (**(code **)(*(long *)p_Var2 + 0x108))
                    (p_Var2,*(undefined8 *)(this + 0x18),"onFontError","(JLjava/lang/String;)V");
  _JNIEnv::CallVoidMethod(p_Var2,*(_jmethodID **)(this + 0x20),uVar3,param_2,local_58);
  if (local_58 != 0) {
    (**(code **)(*local_50 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326bbc  rive::CommandQueue::FontListener::onFontDeleted =====

/* rive::CommandQueue::FontListener::onFontDeleted(rive::FontHandle_HandlePlaceholder*, unsigned
   long) */

void rive::CommandQueue::FontListener::onFontDeleted
               (FontHandle_HandlePlaceholder *param_1,ulong param_2)

{
  return;
}


// ===== 00326bc0  FontListener::~FontListener =====

/* FontListener::~FontListener() */

void __thiscall FontListener::~FontListener(FontListener *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  CommandQueue *this_00;
  FontHandle_HandlePlaceholder *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0067cad0 + 0x10;
  plVar3 = (long *)rive_android::GetJNIEnv();
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x18));
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined8 *)(this + 0x20));
  if (*(long *)(this + 8) != 0) {
    local_40 = *(FontHandle_HandlePlaceholder **)(this + 0x10);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::__unordered_map_hasher<rive::FontHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::hash<rive::FontHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::FontHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::FontHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::equal_to<rive::FontHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::FontHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>>>
    ::__erase_unique<rive::FontHandle_HandlePlaceholder*>
              ((__hash_table<std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::__unordered_map_hasher<rive::FontHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::hash<rive::FontHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::FontHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::FontHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::equal_to<rive::FontHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::FontHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>>>
                *)(*(long *)(this + 8) + 0x390),&local_40);
    this_00 = *(CommandQueue **)(this + 8);
    if ((this_00 != (CommandQueue *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,this_00), iVar2 == 1))
    {
      rive::CommandQueue::~CommandQueue(this_00);
      operator_delete(this_00);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326c90  FontListener::~FontListener =====

/* FontListener::~FontListener() */

void __thiscall FontListener::~FontListener(FontListener *this)

{
  ~FontListener(this);
  operator_delete(this);
  return;
}


// ===== 00326cb4  std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::__unordered_map_hasher<rive::FontHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::hash<rive::FontHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::FontHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::FontHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::equal_to<rive::FontHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::FontHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>>>::__erase_unique<rive::FontHandle_HandlePlaceholder*> =====

/* unsigned long
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,
   rive::CommandQueue::FontListener*>,
   std::__ndk1::__unordered_map_hasher<rive::FontHandle_HandlePlaceholder*,
   std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,
   rive::CommandQueue::FontListener*>, std::__ndk1::hash<rive::FontHandle_HandlePlaceholder*>,
   std::__ndk1::equal_to<rive::FontHandle_HandlePlaceholder*>, true>,
   std::__ndk1::__unordered_map_equal<rive::FontHandle_HandlePlaceholder*,
   std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,
   rive::CommandQueue::FontListener*>, std::__ndk1::equal_to<rive::FontHandle_HandlePlaceholder*>,
   std::__ndk1::hash<rive::FontHandle_HandlePlaceholder*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,
   rive::CommandQueue::FontListener*> >
   >::__erase_unique<rive::FontHandle_HandlePlaceholder*>(rive::FontHandle_HandlePlaceholder*
   const&) */

ulong __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::__unordered_map_hasher<rive::FontHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::hash<rive::FontHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::FontHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::FontHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::equal_to<rive::FontHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::FontHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>>>
::__erase_unique<rive::FontHandle_HandlePlaceholder*>
          (__hash_table<std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::__unordered_map_hasher<rive::FontHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::hash<rive::FontHandle_HandlePlaceholder*>,std::__ndk1::equal_to<rive::FontHandle_HandlePlaceholder*>,true>,std::__ndk1::__unordered_map_equal<rive::FontHandle_HandlePlaceholder*,std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>,std::__ndk1::equal_to<rive::FontHandle_HandlePlaceholder*>,std::__ndk1::hash<rive::FontHandle_HandlePlaceholder*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<rive::FontHandle_HandlePlaceholder*,rive::CommandQueue::FontListener*>>>
           *this,FontHandle_HandlePlaceholder **param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  FontHandle_HandlePlaceholder *pFVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 8);
  if (uVar4 != 0) {
    pFVar5 = *param_1;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((ulong)(uint)((int)pFVar5 << 3) + 8 ^ (ulong)pFVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = ((ulong)pFVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar4 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar6 / uVar4;
        }
        uVar8 = uVar6 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*(long *)this + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if ((FontHandle_HandlePlaceholder *)plVar9[2] == pFVar5) {
            FUN_00326df8(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            uVar4 = 1;
            goto LAB_00326db4;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar4 = 0;
LAB_00326db4:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00326df8  FUN_00326df8 =====

void FUN_00326df8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00326ec4;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00326ec4;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00326ec4:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 00326f2c  rive_android::Tracer::~Tracer =====

/* rive_android::Tracer::~Tracer() */

void __thiscall rive_android::Tracer::~Tracer(Tracer *this)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00326f30  rive_android::Tracer::beginSection =====

/* rive_android::Tracer::beginSection(char const*) const */

Tracer * __thiscall rive_android::Tracer::beginSection(Tracer *this,char *param_1)

{
  Tracer *pTVar1;
  undefined1 auVar2 [16];
  
  if (param_1 == (char *)0x0) {
    this = (Tracer *)RiveLogE("Tracer","beginSection called with null section name");
    param_1 = "Rive/InvalidTraceSectionName";
  }
  if ((*PTR_traceApi_0067cb08 & 1) == 0) {
    this = (Tracer *)__cxa_guard_acquire(PTR_traceApi_0067cb08);
    if ((int)this != 0) {
      auVar2 = loadAPI();
      *(undefined1 (*) [16])PTR_traceApi_0067cb10 = auVar2;
      this = (Tracer *)__cxa_guard_release(PTR_traceApi_0067cb08);
    }
  }
  if (*(code **)PTR_traceApi_0067cb10 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00326f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar1 = (Tracer *)(**(code **)PTR_traceApi_0067cb10)(param_1);
    return pTVar1;
  }
  return this;
}


// ===== 00326fe4  rive_android::Tracer::endSection =====

/* rive_android::Tracer::endSection() const */

void rive_android::Tracer::endSection(void)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  if ((*PTR_traceApi_0067cb08 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_traceApi_0067cb08);
    if (iVar1 != 0) {
      auVar2 = loadAPI();
      *(undefined1 (*) [16])PTR_traceApi_0067cb10 = auVar2;
      __cxa_guard_release(PTR_traceApi_0067cb08);
    }
  }
  if (*(code **)(PTR_traceApi_0067cb10 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00327010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(PTR_traceApi_0067cb10 + 8))();
    return;
  }
  return;
}


// ===== 0032705c  rive_android::Tracer::loadAPI =====

/* rive_android::Tracer::loadAPI() */

void rive_android::Tracer::loadAPI(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  char local_a0 [104];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a0[0x54] = '\0';
  local_a0[0x55] = '\0';
  local_a0[0x56] = '\0';
  local_a0[0x57] = '\0';
  local_a0[0x58] = '\0';
  local_a0[0x59] = '\0';
  local_a0[0x5a] = '\0';
  local_a0[0x5b] = '\0';
  local_a0[0x50] = '\0';
  local_a0[0x51] = '\0';
  local_a0[0x52] = '\0';
  local_a0[0x53] = '\0';
  local_a0[0x18] = '\0';
  local_a0[0x19] = '\0';
  local_a0[0x1a] = '\0';
  local_a0[0x1b] = '\0';
  local_a0[0x1c] = '\0';
  local_a0[0x1d] = '\0';
  local_a0[0x1e] = '\0';
  local_a0[0x1f] = '\0';
  local_a0[0x10] = '\0';
  local_a0[0x11] = '\0';
  local_a0[0x12] = '\0';
  local_a0[0x13] = '\0';
  local_a0[0x14] = '\0';
  local_a0[0x15] = '\0';
  local_a0[0x16] = '\0';
  local_a0[0x17] = '\0';
  local_a0[0x28] = '\0';
  local_a0[0x29] = '\0';
  local_a0[0x2a] = '\0';
  local_a0[0x2b] = '\0';
  local_a0[0x2c] = '\0';
  local_a0[0x2d] = '\0';
  local_a0[0x2e] = '\0';
  local_a0[0x2f] = '\0';
  local_a0[0x20] = '\0';
  local_a0[0x21] = '\0';
  local_a0[0x22] = '\0';
  local_a0[0x23] = '\0';
  local_a0[0x24] = '\0';
  local_a0[0x25] = '\0';
  local_a0[0x26] = '\0';
  local_a0[0x27] = '\0';
  local_a0[0x38] = '\0';
  local_a0[0x39] = '\0';
  local_a0[0x3a] = '\0';
  local_a0[0x3b] = '\0';
  local_a0[0x3c] = '\0';
  local_a0[0x3d] = '\0';
  local_a0[0x3e] = '\0';
  local_a0[0x3f] = '\0';
  local_a0[0x30] = '\0';
  local_a0[0x31] = '\0';
  local_a0[0x32] = '\0';
  local_a0[0x33] = '\0';
  local_a0[0x34] = '\0';
  local_a0[0x35] = '\0';
  local_a0[0x36] = '\0';
  local_a0[0x37] = '\0';
  local_a0[0x48] = '\0';
  local_a0[0x49] = '\0';
  local_a0[0x4a] = '\0';
  local_a0[0x4b] = '\0';
  local_a0[0x4c] = '\0';
  local_a0[0x4d] = '\0';
  local_a0[0x4e] = '\0';
  local_a0[0x4f] = '\0';
  local_a0[0x40] = '\0';
  local_a0[0x41] = '\0';
  local_a0[0x42] = '\0';
  local_a0[0x43] = '\0';
  local_a0[0x44] = '\0';
  local_a0[0x45] = '\0';
  local_a0[0x46] = '\0';
  local_a0[0x47] = '\0';
  local_a0[8] = '\0';
  local_a0[9] = '\0';
  local_a0[10] = '\0';
  local_a0[0xb] = '\0';
  local_a0[0xc] = '\0';
  local_a0[0xd] = '\0';
  local_a0[0xe] = '\0';
  local_a0[0xf] = '\0';
  local_a0[0] = '\0';
  local_a0[1] = '\0';
  local_a0[2] = '\0';
  local_a0[3] = '\0';
  local_a0[4] = '\0';
  local_a0[5] = '\0';
  local_a0[6] = '\0';
  local_a0[7] = '\0';
  iVar2 = __system_property_get("ro.build.version.sdk",local_a0);
  if (((0 < iVar2) && (uVar3 = atoi(local_a0), 0 < (int)uVar3)) && (0x16 < uVar3)) {
    lVar4 = dlopen("libandroid.so",2);
    if (lVar4 == 0) {
      pcVar6 = "Tracer cannot load libandroid.so!";
    }
    else {
      lVar5 = dlsym(lVar4,"ATrace_beginSection");
      lVar4 = dlsym(lVar4,"ATrace_endSection");
      if ((lVar5 != 0) && (lVar4 != 0)) goto LAB_00327138;
      pcVar6 = "Tracer cannot resolve ATrace symbols.";
    }
    RiveLogE("Tracer",pcVar6);
  }
  lVar5 = 0;
  lVar4 = 0;
LAB_00327138:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5,lVar4);
}


// ===== 00327160  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00327164  FUN_00327164 =====

void FUN_00327164(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)operator_new(0x60);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *puVar1 = &PTR_FUN_00651690;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puVar1[6] = uVar4;
  puVar1[5] = uVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  puVar1[8] = uVar6;
  puVar1[7] = uVar5;
  puVar1[10] = uVar4;
  puVar1[9] = uVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[0xb] = uVar2;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  return;
}


// ===== 003271c4  FUN_003271c4 =====

void FUN_003271c4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_FUN_00651690;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar1;
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  param_2[0xb] = *(undefined8 *)(param_1 + 0x58);
  param_2[10] = uVar2;
  param_2[9] = uVar1;
  param_2[8] = uVar6;
  param_2[7] = uVar5;
  param_2[6] = uVar4;
  param_2[5] = uVar3;
  return;
}


// ===== 00327204  FUN_00327204 =====

void FUN_00327204(void)

{
  return;
}


// ===== 00327208  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0032720c  FUN_0032720c =====

void FUN_0032720c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  long lVar2;
  StateMachineHandle_HandlePlaceholder *pSVar3;
  long *plVar4;
  LazyFramebufferRenderTargetGL *this;
  uint uVar5;
  undefined1 uVar6;
  long lVar7;
  Artboard *this_00;
  long lVar8;
  ulong extraout_x1;
  ulong extraout_x1_00;
  char *pcVar9;
  long *plVar10;
  CommandServer *this_01;
  RenderContext *this_02;
  DrawKey_HandlePlaceholder *pDVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  DrawKey_HandlePlaceholder *pDVar15;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  DrawKey_HandlePlaceholder *local_148;
  long local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined1 auStack_a8 [24];
  long local_90;
  
  lVar7 = tpidr_el0;
  local_90 = *(long *)(lVar7 + 0x28);
  pDVar11 = (DrawKey_HandlePlaceholder *)*param_6;
  this_01 = (CommandServer *)*param_7;
  uVar6 = *(undefined1 *)(param_5 + 0x40);
  uVar1 = *(undefined8 *)(param_5 + 0x18);
  plVar10 = *(long **)(param_5 + 0x58);
  lVar2 = *(long *)(param_5 + 8);
  plVar4 = *(long **)(param_5 + 0x10);
  pDVar15 = *(DrawKey_HandlePlaceholder **)(param_5 + 0x38);
  pSVar3 = *(StateMachineHandle_HandlePlaceholder **)(param_5 + 0x28);
  this = *(LazyFramebufferRenderTargetGL **)(param_5 + 0x30);
  uVar5 = *(uint *)(param_5 + 0x4c);
  uVar12 = *(undefined4 *)(param_5 + 0x44);
  uVar13 = *(undefined4 *)(param_5 + 0x48);
  uVar14 = *(undefined4 *)(param_5 + 0x50);
  this_00 = (Artboard *)
            rive::CommandServer::getArtboardInstance
                      (this_01,*(ArtboardHandle_HandlePlaceholder **)(param_5 + 0x20));
  local_148 = pDVar11;
  if (this_00 == (Artboard *)0x0) {
    std::__ndk1::
    __hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
    ::
    __emplace_unique_key_args<rive::DrawKey_HandlePlaceholder*,rive::DrawKey_HandlePlaceholder*const&>
              ((__hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
                *)(lVar2 + 0x448),&local_148,&local_148);
    if ((extraout_x1 & 1) == 0) goto LAB_003274b0;
    pcVar9 = "Draw failed: Artboard instance is null (only reported once)";
  }
  else {
    lVar8 = rive::CommandServer::getStateMachineInstance(this_01,pSVar3);
    if (lVar8 != 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,"Rive/Frame/Draw");
      this_02 = *(RenderContext **)(*(long *)(*(long *)(this_01 + 0x18) + 8) + 8);
      (**(code **)(*plVar10 + 0x10))(plVar10,"Rive/Frame/Draw/Begin");
      (**(code **)(*plVar4 + 0x28))(plVar4,uVar1);
      pDVar11 = (DrawKey_HandlePlaceholder *)
                rive_android::LazyFramebufferRenderTargetGL::getOrCreate(this);
      local_140 = (ulong)uVar5 << 0x20;
      local_138 = (ulong)local_138._5_3_ << 0x28;
      local_130 = 1;
      local_12c = 0;
      uStack_128 = 0;
      local_124 = 0;
      local_148 = pDVar15;
      rive::gpu::RenderContext::beginFrame(this_02,(FrameDescriptor *)&local_148);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10,"Rive/Frame/Draw/Render");
      rive::RiveRenderer::RiveRenderer((RiveRenderer *)&local_148,this_02);
      local_150 = NEON_scvtf(pDVar15,4);
      local_158 = 0;
      local_168 = rive::Artboard::bounds(this_00);
      uStack_164 = param_2;
      local_160 = param_3;
      uStack_15c = param_4;
      rive::computeAlignment(auStack_a8,uVar12,uVar13,uVar14,uVar6,&local_158,&local_168);
      (**(code **)(local_148 + 0x20))(&local_148,auStack_a8);
      (**(code **)(*(long *)this_00 + 0x1d8))(this_00,&local_148);
      rive::RiveRenderer::~RiveRenderer((RiveRenderer *)&local_148);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10,"Rive/Frame/Draw/Flush");
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_12c = 0;
      local_148 = pDVar11;
      rive::gpu::RenderContext::flush(this_02,(FlushResources *)&local_148);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10,"Rive/Frame/Draw/Present");
      (**(code **)(*plVar4 + 0x30))(plVar4,uVar1);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      goto LAB_003274b0;
    }
    std::__ndk1::
    __hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
    ::
    __emplace_unique_key_args<rive::DrawKey_HandlePlaceholder*,rive::DrawKey_HandlePlaceholder*const&>
              ((__hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
                *)(lVar2 + 0x470),&local_148,&local_148);
    if ((extraout_x1_00 & 1) == 0) goto LAB_003274b0;
    pcVar9 = "Draw failed: State machine instance is null (only reported once)";
  }
  rive_android::RiveLogE("RiveN/CQ",pcVar9);
LAB_003274b0:
  if (*(long *)(lVar7 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003274ec  rive_android::LazyFramebufferRenderTargetGL::getOrCreate =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive_android::LazyFramebufferRenderTargetGL::getOrCreate() */

void __thiscall
rive_android::LazyFramebufferRenderTargetGL::getOrCreate(LazyFramebufferRenderTargetGL *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(this + 8);
  if (lVar8 == 0) {
    local_3c = 1;
    glBindFramebuffer(0x8d40,0);
    glGetIntegerv(0x80a9,&local_3c);
    RiveLogD("RiveN/LazyRT","Creating render target on command server (sample count: %d)",
             (ulong)local_3c);
    plVar9 = (long *)operator_new(0x80);
    puVar6 = PTR_vtable_0067cb18;
    uVar5 = _UNK_0024e2b8;
    uVar4 = _DAT_0024e2b0;
    uVar1 = *(undefined4 *)this;
    uVar2 = *(undefined4 *)(this + 4);
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((long)plVar9 + 0xc) = uVar1;
    *(undefined4 *)(plVar9 + 6) = 1;
    *(undefined4 *)((long)plVar9 + 0x34) = uVar1;
    *(undefined4 *)(plVar9 + 2) = uVar2;
    *plVar9 = (long)(puVar6 + 0x10);
    *(undefined8 *)((long)plVar9 + 0x1c) = uVar5;
    *(undefined8 *)((long)plVar9 + 0x14) = uVar4;
    uVar4 = DAT_0024e640;
    *(uint *)((long)plVar9 + 0x24) = local_3c;
    *(undefined4 *)(plVar9 + 7) = uVar2;
    puVar6 = PTR_vtable_0067cb20;
    plVar10 = *(long **)(this + 8);
    *(undefined4 *)((long)plVar9 + 0x44) = 0;
    *(undefined8 *)((long)plVar9 + 0x3c) = uVar4;
    plVar9[9] = 0;
    plVar9[5] = (long)(puVar6 + 0x10);
    *(undefined8 *)((long)plVar9 + 0x4d) = 0;
    *(undefined8 *)((long)plVar9 + 0x5d) = 0;
    plVar9[0xb] = 0;
    plVar9[0xd] = 0;
    plVar9[0xe] = 0;
    *(undefined4 *)(plVar9 + 0xf) = 0;
    *(long **)(this + 8) = plVar9;
    if ((plVar10 != (long *)0x0) && (iVar7 = FUN_00340fe0(0xffffffff,plVar10 + 1), iVar7 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    lVar8 = *(long *)(this + 8);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar8);
}


// ===== 00327624  std::__ndk1::__hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>::__emplace_unique_key_args<rive::DrawKey_HandlePlaceholder*,rive::DrawKey_HandlePlaceholder*const&> =====

/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<rive::DrawKey_HandlePlaceholder*,
   void*>*>, bool> std::__ndk1::__hash_table<rive::DrawKey_HandlePlaceholder*,
   std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,
   std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,
   std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>
   >::__emplace_unique_key_args<rive::DrawKey_HandlePlaceholder*, rive::DrawKey_HandlePlaceholder*
   const&>(rive::DrawKey_HandlePlaceholder* const&, rive::DrawKey_HandlePlaceholder* const&) */

void __thiscall
std::__ndk1::
__hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
::__emplace_unique_key_args<rive::DrawKey_HandlePlaceholder*,rive::DrawKey_HandlePlaceholder*const&>
          (__hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
           *this,DrawKey_HandlePlaceholder **param_1,DrawKey_HandlePlaceholder **param_2)

{
  ulong uVar1;
  DrawKey_HandlePlaceholder *pDVar2;
  long lVar3;
  long *plVar4;
  __hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
  *p_Var5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x23;
  undefined2 uVar12;
  undefined8 uVar13;
  float fVar14;
  
  pDVar2 = *param_1;
  uVar11 = *(ulong *)(this + 8);
  uVar7 = ((ulong)(uint)((int)pDVar2 << 3) + 8 ^ (ulong)pDVar2 >> 0x20) * -0x622015f714c7d297;
  uVar7 = ((ulong)pDVar2 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  if (uVar11 != 0) {
    uVar13 = NEON_cnt(uVar11,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x23 = uVar7 & uVar11 - 1;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar11 <= uVar7) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar7 / uVar11;
        }
        unaff_x23 = uVar7 - uVar10 * uVar11;
      }
    }
    plVar8 = *(long **)(*(long *)this + unaff_x23 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar10 = plVar8[1];
        if (uVar10 == uVar7) {
          if ((DrawKey_HandlePlaceholder *)plVar8[2] == pDVar2) {
            return;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar11 - 1;
          }
          else if (uVar11 <= uVar10) {
            uVar1 = 0;
            if (uVar11 != 0) {
              uVar1 = uVar10 / uVar11;
            }
            uVar10 = uVar10 - uVar1 * uVar11;
          }
          if (uVar10 != unaff_x23) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)operator_new(0x18);
  lVar3 = *(long *)(this + 0x18);
  fVar14 = *(float *)(this + 0x20);
  *plVar8 = 0;
  plVar8[1] = uVar7;
  plVar8[2] = (long)*param_2;
  if ((uVar11 == 0) || (fVar14 * (float)uVar11 < (float)(lVar3 + 1))) {
    if (uVar11 < 3) {
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar6 = uVar6 | uVar11 << 1;
    uVar10 = (ulong)((float)(lVar3 + 1) / fVar14);
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = std::__ndk1::__next_prime(uVar6);
      uVar11 = *(ulong *)(this + 8);
    }
    if (uVar11 < uVar6) {
LAB_003277c8:
      __do_rehash<true>(this,uVar6);
    }
    else if (uVar6 < uVar11) {
      uVar10 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
      if (uVar11 < 3) {
LAB_0032783c:
        uVar10 = std::__ndk1::__next_prime(uVar10);
      }
      else {
        uVar13 = NEON_cnt(uVar11,1);
        uVar12 = NEON_uaddlv(uVar13,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12)) goto LAB_0032783c;
        if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
      }
      if (uVar6 <= uVar10) {
        uVar6 = uVar10;
      }
      if (uVar6 < uVar11) goto LAB_003277c8;
    }
    uVar11 = *(ulong *)(this + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x23 = uVar11 - 1 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar11 <= uVar7) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar7 / uVar11;
        }
        unaff_x23 = uVar7 - uVar6 * uVar11;
      }
    }
  }
  lVar3 = *(long *)this;
  plVar4 = *(long **)(lVar3 + unaff_x23 * 8);
  if (plVar4 == (long *)0x0) {
    p_Var5 = this + 0x10;
    lVar9 = *(long *)p_Var5;
    *(long **)p_Var5 = plVar8;
    *plVar8 = lVar9;
    *(__hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
      **)(lVar3 + unaff_x23 * 8) = p_Var5;
    if (*plVar8 == 0) goto LAB_00327900;
    uVar7 = *(ulong *)(*plVar8 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar7 = uVar7 & uVar11 - 1;
    }
    else if (uVar11 <= uVar7) {
      uVar6 = 0;
      if (uVar11 != 0) {
        uVar6 = uVar7 / uVar11;
      }
      uVar7 = uVar7 - uVar6 * uVar11;
    }
    plVar4 = (long *)(*(long *)this + uVar7 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_00327900:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return;
}


// ===== 00327924  std::__ndk1::__hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>::__do_rehash<true> =====

/* void std::__ndk1::__hash_table<rive::DrawKey_HandlePlaceholder*,
   std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,
   std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,
   std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*> >::__do_rehash<true>(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
::__do_rehash<true>(__hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
                    *this,ulong param_1)

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
  
  if (param_1 == 0) {
    pvVar2 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00324008();
    }
    pvVar2 = operator_new(param_1 << 3);
    pvVar3 = *(void **)this;
    *(void **)this = pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
      *(undefined8 *)(*(long *)this + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_1 != uVar4);
    plVar5 = *(long **)(this + 0x10);
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar10 = NEON_cnt(param_1,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & param_1 - 1;
      }
      else if (param_1 <= uVar4) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = uVar4 / param_1;
        }
        uVar4 = uVar4 - uVar8 * param_1;
      }
      *(__hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
        **)(*(long *)this + uVar4 * 8) = this + 0x10;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & param_1 - 1;
          }
          else if (param_1 <= uVar8) {
            uVar1 = 0;
            if (param_1 != 0) {
              uVar1 = uVar8 / param_1;
            }
            uVar8 = uVar8 - uVar1 * param_1;
          }
          if (uVar8 != uVar4) {
            if (*(long *)(*(long *)this + uVar8 * 8) == 0) {
              *(long **)(*(long *)this + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = **(long **)(*(long *)this + uVar8 * 8);
              **(undefined8 **)(*(long *)this + uVar8 * 8) = plVar7;
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


// ===== 00327a80  FUN_00327a80 =====

void FUN_00327a80(void)

{
  return;
}


// ===== 00327a84  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00327a88  FUN_00327a88 =====

void FUN_00327a88(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)operator_new(0x60);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *puVar1 = &PTR_FUN_006516d8;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puVar1[6] = uVar4;
  puVar1[5] = uVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  puVar1[8] = uVar6;
  puVar1[7] = uVar5;
  puVar1[10] = uVar4;
  puVar1[9] = uVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[0xb] = uVar2;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  return;
}


// ===== 00327ae8  FUN_00327ae8 =====

void FUN_00327ae8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_FUN_006516d8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar1;
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  param_2[0xb] = *(undefined8 *)(param_1 + 0x58);
  param_2[10] = uVar2;
  param_2[9] = uVar1;
  param_2[8] = uVar6;
  param_2[7] = uVar5;
  param_2[6] = uVar4;
  param_2[5] = uVar3;
  return;
}


// ===== 00327b28  FUN_00327b28 =====

void FUN_00327b28(void)

{
  return;
}


// ===== 00327b2c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00327b30  FUN_00327b30 =====

void FUN_00327b30(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  long lVar2;
  StateMachineHandle_HandlePlaceholder *pSVar3;
  long *plVar4;
  LazyFramebufferRenderTargetGL *this;
  uint uVar5;
  undefined1 uVar6;
  long lVar7;
  Artboard *this_00;
  long lVar8;
  ulong extraout_x1;
  ulong extraout_x1_00;
  char *pcVar9;
  long *plVar10;
  CommandServer *this_01;
  RenderContext *this_02;
  DrawKey_HandlePlaceholder *pDVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  DrawKey_HandlePlaceholder *pDVar15;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  DrawKey_HandlePlaceholder *local_148;
  long local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined1 auStack_a8 [24];
  long local_90;
  
  lVar7 = tpidr_el0;
  local_90 = *(long *)(lVar7 + 0x28);
  pDVar11 = (DrawKey_HandlePlaceholder *)*param_6;
  this_01 = (CommandServer *)*param_7;
  uVar6 = *(undefined1 *)(param_5 + 0x40);
  uVar1 = *(undefined8 *)(param_5 + 0x18);
  plVar10 = *(long **)(param_5 + 0x58);
  lVar2 = *(long *)(param_5 + 8);
  plVar4 = *(long **)(param_5 + 0x10);
  pDVar15 = *(DrawKey_HandlePlaceholder **)(param_5 + 0x38);
  pSVar3 = *(StateMachineHandle_HandlePlaceholder **)(param_5 + 0x28);
  this = *(LazyFramebufferRenderTargetGL **)(param_5 + 0x30);
  uVar5 = *(uint *)(param_5 + 0x4c);
  uVar12 = *(undefined4 *)(param_5 + 0x44);
  uVar13 = *(undefined4 *)(param_5 + 0x48);
  uVar14 = *(undefined4 *)(param_5 + 0x50);
  this_00 = (Artboard *)
            rive::CommandServer::getArtboardInstance
                      (this_01,*(ArtboardHandle_HandlePlaceholder **)(param_5 + 0x20));
  local_148 = pDVar11;
  if (this_00 == (Artboard *)0x0) {
    std::__ndk1::
    __hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
    ::
    __emplace_unique_key_args<rive::DrawKey_HandlePlaceholder*,rive::DrawKey_HandlePlaceholder*const&>
              ((__hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
                *)(lVar2 + 0x448),&local_148,&local_148);
    if ((extraout_x1 & 1) == 0) goto LAB_00327dd4;
    pcVar9 = "Draw failed: Artboard instance is null (only reported once)";
  }
  else {
    lVar8 = rive::CommandServer::getStateMachineInstance(this_01,pSVar3);
    if (lVar8 != 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,"Rive/Frame/Draw");
      this_02 = *(RenderContext **)(*(long *)(*(long *)(this_01 + 0x18) + 8) + 8);
      (**(code **)(*plVar10 + 0x10))(plVar10,"Rive/Frame/Draw/Begin");
      (**(code **)(*plVar4 + 0x28))(plVar4,uVar1);
      pDVar11 = (DrawKey_HandlePlaceholder *)
                rive_android::LazyFramebufferRenderTargetGL::getOrCreate(this);
      local_140 = (ulong)uVar5 << 0x20;
      local_138 = (ulong)local_138._5_3_ << 0x28;
      local_130 = 1;
      local_12c = 0;
      uStack_128 = 0;
      local_124 = 0;
      local_148 = pDVar15;
      rive::gpu::RenderContext::beginFrame(this_02,(FrameDescriptor *)&local_148);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10,"Rive/Frame/Draw/Render");
      rive::RiveRenderer::RiveRenderer((RiveRenderer *)&local_148,this_02);
      local_150 = NEON_scvtf(pDVar15,4);
      local_158 = 0;
      local_168 = rive::Artboard::bounds(this_00);
      uStack_164 = param_2;
      local_160 = param_3;
      uStack_15c = param_4;
      rive::computeAlignment(auStack_a8,uVar12,uVar13,uVar14,uVar6,&local_158,&local_168);
      (**(code **)(local_148 + 0x20))(&local_148,auStack_a8);
      (**(code **)(*(long *)this_00 + 0x1d8))(this_00,&local_148);
      rive::RiveRenderer::~RiveRenderer((RiveRenderer *)&local_148);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10,"Rive/Frame/Draw/Flush");
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_12c = 0;
      local_148 = pDVar11;
      rive::gpu::RenderContext::flush(this_02,(FlushResources *)&local_148);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x10))(plVar10,"Rive/Frame/Draw/Present");
      (**(code **)(*plVar4 + 0x30))(plVar4,uVar1);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      goto LAB_00327dd4;
    }
    std::__ndk1::
    __hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
    ::
    __emplace_unique_key_args<rive::DrawKey_HandlePlaceholder*,rive::DrawKey_HandlePlaceholder*const&>
              ((__hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
                *)(lVar2 + 0x470),&local_148,&local_148);
    if ((extraout_x1_00 & 1) == 0) goto LAB_00327dd4;
    pcVar9 = "Draw failed: State machine instance is null (only reported once)";
  }
  rive_android::RiveLogE("RiveN/CQ",pcVar9);
LAB_00327dd4:
  if (*(long *)(lVar7 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00327e10  rive_android::ITracer::~ITracer =====

/* rive_android::ITracer::~ITracer() */

void __thiscall rive_android::ITracer::~ITracer(ITracer *this)

{
  return;
}


// ===== 00327e14  rive_android::NoopTracer::~NoopTracer =====

/* rive_android::NoopTracer::~NoopTracer() */

void __thiscall rive_android::NoopTracer::~NoopTracer(NoopTracer *this)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00327e18  rive_android::NoopTracer::beginSection =====

/* rive_android::NoopTracer::beginSection(char const*) const */

void rive_android::NoopTracer::beginSection(char *param_1)

{
  return;
}


// ===== 00327e1c  rive_android::NoopTracer::endSection =====

/* rive_android::NoopTracer::endSection() const */

void rive_android::NoopTracer::endSection(void)

{
  return;
}


// ===== 00327e20  FUN_00327e20 =====

void FUN_00327e20(__shared_count *param_1)

{
  *(undefined **)param_1 = PTR_vtable_0067cb28 + 0x10;
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(param_1 + 0x40));
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x18));
  std::exception_ptr::~exception_ptr((exception_ptr *)(param_1 + 0x10));
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00327e74  FUN_00327e74 =====

void FUN_00327e74(long *param_1)

{
  if (((*(byte *)(param_1 + 0xe) & 1) != 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
    operator_delete((void *)param_1[0x12]);
  }
                    /* WARNING: Could not recover jumptable at 0x00327eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


// ===== 00327eb8  FUN_00327eb8 =====

void FUN_00327eb8(undefined8 *param_1,unique_lock *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  exception_ptr aeStack_68 [8];
  undefined8 local_60;
  unique_lock *local_58;
  char local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = param_2 + 0x18;
  local_50 = '\x01';
  std::__ndk1::mutex::lock();
  std::__ndk1::__assoc_sub_state::__sub_wait(param_2);
  local_60 = 0;
  lVar3 = *(long *)(param_2 + 0x10);
  std::exception_ptr::~exception_ptr((exception_ptr *)&local_60);
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x88);
    uVar4 = *(undefined8 *)(param_2 + 0x80);
    uVar2 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *param_1 = *(undefined8 *)(param_2 + 0x78);
    param_1[2] = uVar5;
    param_1[1] = uVar4;
    param_1[3] = uVar2;
    *(undefined8 *)(param_2 + 0x90) = 0;
    if (local_50 != '\0') {
      std::__ndk1::mutex::unlock();
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    std::exception_ptr::exception_ptr(aeStack_68,(exception_ptr *)(param_2 + 0x10));
    std::rethrow_exception(aeStack_68);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00327f8c  FUN_00327f8c =====

void FUN_00327f8c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00327fa0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00327fa4  FUN_00327fa4 =====

void FUN_00327fa4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00651780;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  puVar1[4] = uVar5;
  puVar1[3] = uVar4;
  return;
}


// ===== 00327fe4  FUN_00327fe4 =====

void FUN_00327fe4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_00651780;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar1;
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  return;
}


// ===== 00328004  FUN_00328004 =====

void FUN_00328004(void)

{
  return;
}


// ===== 00328008  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0032800c  FUN_0032800c =====

void FUN_0032800c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  CommandQueue *this;
  long *plVar2;
  ulong uVar3;
  StateMachineHandle_HandlePlaceholder *pSVar4;
  CommandServer *this_00;
  float fVar5;
  
  plVar1 = *(long **)(param_1 + 8);
  this = *(CommandQueue **)(param_1 + 0x10);
  this_00 = (CommandServer *)*param_2;
  pSVar4 = *(StateMachineHandle_HandlePlaceholder **)(param_1 + 0x18);
  fVar5 = *(float *)(param_1 + 0x20);
  (**(code **)(*plVar1 + 0x10))(plVar1,"Rive/Frame/Advance");
  plVar2 = (long *)rive::CommandServer::getStateMachineInstance(this_00,pSVar4);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x38))(fVar5);
    fVar5 = 0.0;
    if ((uVar3 & 1) != 0) goto LAB_00328084;
  }
  rive::CommandQueue::advanceStateMachine(this,pSVar4,fVar5,0);
LAB_00328084:
                    /* WARNING: Could not recover jumptable at 0x003280a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}


// ===== 003280a4  FUN_003280a4 =====

void FUN_003280a4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_006517c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 003280b4  FUN_003280b4 =====

void FUN_003280b4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_006517c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 003280e4  FUN_003280e4 =====

void FUN_003280e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_58 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(plVar3 + 0xe) & 1) == 0) {
      lVar4 = plVar3[2];
      local_58[0] = 0;
      std::exception_ptr::~exception_ptr((exception_ptr *)local_58);
      plVar3 = *(long **)(param_1 + 0x18);
      if ((lVar4 == 0) && (0 < plVar3[1])) {
        uVar2 = std::__ndk1::future_category();
        std::__ndk1::future_error::future_error((future_error *)local_58,4,uVar2);
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    lVar4 = FUN_00341040(0xffffffffffffffff,plVar3 + 1);
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032819c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003281a0  std::__ndk1::__assoc_sub_state::~__assoc_sub_state =====

/* std::__ndk1::__assoc_sub_state::~__assoc_sub_state() */

void __thiscall std::__ndk1::__assoc_sub_state::~__assoc_sub_state(__assoc_sub_state *this)

{
  *(undefined **)this = PTR_vtable_0067cb28 + 0x10;
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x40));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x18));
  std::exception_ptr::~exception_ptr((exception_ptr *)(this + 0x10));
  std::__ndk1::__shared_count::~__shared_count((__shared_count *)this);
  return;
}


// ===== 003281ec  FUN_003281ec =====

void FUN_003281ec(__shared_count *param_1)

{
  *(undefined **)param_1 = PTR_vtable_0067cb28 + 0x10;
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(param_1 + 0x40));
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x18));
  std::exception_ptr::~exception_ptr((exception_ptr *)(param_1 + 0x10));
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00328240  FUN_00328240 =====

void FUN_00328240(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00328248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


// ===== 0032824c  FUN_0032824c =====

void FUN_0032824c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0xd];
  *param_1 = &PTR_FUN_00651830;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00341040(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 003282a8  FUN_003282a8 =====

void FUN_003282a8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0xd];
  *param_1 = &PTR_FUN_00651830;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00341040(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00328304  FUN_00328304 =====

undefined8 * FUN_00328304(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar3 = (undefined8 *)operator_new(0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  puVar3[5] = uVar5;
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  puVar3[8] = uVar8;
  puVar3[7] = uVar7;
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 8);
  puVar3[10] = uVar6;
  puVar3[9] = uVar5;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *puVar3 = &PTR_FUN_00651830;
  lVar4 = *(long *)(param_1 + 0x68);
  puVar3[2] = uVar8;
  puVar3[1] = uVar7;
  puVar3[4] = uVar6;
  puVar3[3] = uVar5;
  puVar3[0xb] = uVar1;
  puVar3[0xc] = uVar2;
  puVar3[0xd] = lVar4;
  if (lVar4 != 0) {
    FUN_00341010(1,lVar4 + 8);
  }
  return puVar3;
}


// ===== 00328384  FUN_00328384 =====

void FUN_00328384(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_2 = &PTR_FUN_00651830;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar2;
  param_2[2] = uVar4;
  param_2[1] = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  param_2[0xb] = *(undefined8 *)(param_1 + 0x58);
  param_2[10] = uVar3;
  param_2[9] = uVar2;
  param_2[8] = uVar7;
  param_2[7] = uVar6;
  param_2[6] = uVar5;
  param_2[5] = uVar4;
  lVar1 = *(long *)(param_1 + 0x68);
  param_2[0xc] = *(undefined8 *)(param_1 + 0x60);
  param_2[0xd] = lVar1;
  if (lVar1 != 0) {
    FUN_00341010(1,lVar1 + 8);
  }
  return;
}


// ===== 003283e8  FUN_003283e8 =====

void FUN_003283e8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x68);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00341040(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00328438  FUN_00328438 =====

void FUN_00328438(void *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 0x68);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00341040(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00328488  FUN_00328488 =====

void FUN_00328488(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 *param_6,undefined8 *param_7)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  Artboard *this;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong extraout_x1;
  ulong extraout_x1_00;
  int iVar7;
  DrawKey_HandlePlaceholder *pDVar8;
  CommandServer *this_00;
  RenderContext *this_01;
  ulong __n;
  void *__src;
  void *__src_00;
  void *pvVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  ulong local_148;
  undefined8 local_140;
  DrawKey_HandlePlaceholder *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined1 local_124;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  void *local_98;
  void *local_90;
  void *local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  this_00 = (CommandServer *)*param_7;
  pDVar8 = (DrawKey_HandlePlaceholder *)*param_6;
  this = (Artboard *)
         rive::CommandServer::getArtboardInstance
                   (this_00,*(ArtboardHandle_HandlePlaceholder **)(param_5 + 0x20));
  local_138 = pDVar8;
  if (this == (Artboard *)0x0) {
    std::__ndk1::
    __hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
    ::
    __emplace_unique_key_args<rive::DrawKey_HandlePlaceholder*,rive::DrawKey_HandlePlaceholder*const&>
              ((__hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
                *)(*(long *)(param_5 + 8) + 0x448),&local_138,&local_138);
    if ((extraout_x1 & 1) != 0) {
      rive_android::RiveLogE
                ("RiveN/CQ","Draw failed: Artboard instance is null (only reported once)");
    }
    uVar6 = *(undefined8 *)(param_5 + 0x60);
    uVar11 = 1;
  }
  else {
    lVar4 = rive::CommandServer::getStateMachineInstance
                      (this_00,*(StateMachineHandle_HandlePlaceholder **)(param_5 + 0x28));
    if (lVar4 != 0) {
      (**(code **)(**(long **)(param_5 + 0x10) + 0x28))
                (*(long **)(param_5 + 0x10),*(undefined8 *)(param_5 + 0x18));
      pvVar5 = (void *)rive_android::LazyFramebufferRenderTargetGL::getOrCreate
                                 (*(LazyFramebufferRenderTargetGL **)(param_5 + 0x30));
      local_138 = *(DrawKey_HandlePlaceholder **)(param_5 + 0x38);
      uStack_12c = *(undefined4 *)(param_5 + 0x50);
      this_01 = *(RenderContext **)(*(long *)(*(long *)(this_00 + 0x18) + 8) + 8);
      local_130 = 0;
      local_128 = 0;
      local_124 = 0;
      local_120 = 1;
      local_11c = 0;
      local_114 = 0;
      rive::gpu::RenderContext::beginFrame(this_01,(FrameDescriptor *)&local_138);
      rive::RiveRenderer::RiveRenderer((RiveRenderer *)&local_138,this_01);
      uVar11 = *(undefined4 *)(param_5 + 0x44);
      uVar12 = *(undefined4 *)(param_5 + 0x48);
      uVar2 = *(undefined1 *)(param_5 + 0x40);
      local_148 = 0;
      local_140 = NEON_scvtf(*(undefined8 *)(param_5 + 0x38),4);
      local_158 = rive::Artboard::bounds(this);
      uStack_154 = param_2;
      local_150 = param_3;
      uStack_14c = param_4;
      rive::computeAlignment
                (&local_98,uVar11,uVar12,*(undefined4 *)(param_5 + 0x4c),uVar2,&local_148,&local_158
                );
      (**(code **)(local_138 + 0x20))(&local_138,&local_98);
      (**(code **)(*(long *)this + 0x1d8))(this,&local_138);
      local_90 = (void *)0x0;
      local_88 = (void *)0x0;
      uStack_80 = 0;
      local_98 = pvVar5;
      rive::gpu::RenderContext::flush(this_01,(FlushResources *)&local_98);
      glBindFramebuffer(0x8d40,0);
      glFinish();
      glPixelStorei(0xd05,1);
      glReadPixels(0,0,*(undefined4 *)(param_5 + 0x38),*(undefined4 *)(param_5 + 0x3c),0x1908,0x1401
                   ,*(undefined8 *)(param_5 + 0x58));
      iVar7 = *(int *)(param_5 + 0x38);
      local_98 = (void *)0x0;
      local_90 = (void *)0x0;
      local_88 = (void *)0x0;
      __n = (long)iVar7 * 4;
      if (iVar7 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00327f8c(&local_98);
        }
        pvVar5 = operator_new(__n);
        local_88 = (void *)((long)pvVar5 + __n);
        local_98 = pvVar5;
        memset(pvVar5,0,__n);
      }
      iVar7 = *(int *)(param_5 + 0x3c);
      if (1 < iVar7) {
        pvVar9 = *(void **)(param_5 + 0x58);
        lVar4 = 0;
        iVar10 = -1;
        __src = pvVar9;
        do {
          __src_00 = (void *)((long)pvVar9 + __n * (long)(iVar7 + iVar10));
          memcpy(pvVar5,__src,__n);
          memcpy(__src,__src_00,__n);
          pvVar5 = local_98;
          memcpy(__src_00,local_98,__n);
          iVar7 = *(int *)(param_5 + 0x3c);
          lVar4 = lVar4 + 1;
          iVar10 = iVar10 + -1;
          __src = (void *)((long)__src + __n);
          iVar1 = iVar7;
          if (iVar7 < 0) {
            iVar1 = iVar7 + 1;
          }
        } while (lVar4 < iVar1 >> 1);
      }
      (**(code **)(**(long **)(param_5 + 0x10) + 0x30))
                (*(long **)(param_5 + 0x10),*(undefined8 *)(param_5 + 0x18));
      local_148 = local_148 & 0xffffffff00000000;
      FUN_003287d0(*(undefined8 *)(param_5 + 0x60),&local_148);
      if (pvVar5 != (void *)0x0) {
        local_90 = pvVar5;
        operator_delete(pvVar5);
      }
      rive::RiveRenderer::~RiveRenderer((RiveRenderer *)&local_138);
      goto LAB_00328790;
    }
    std::__ndk1::
    __hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
    ::
    __emplace_unique_key_args<rive::DrawKey_HandlePlaceholder*,rive::DrawKey_HandlePlaceholder*const&>
              ((__hash_table<rive::DrawKey_HandlePlaceholder*,std::__ndk1::hash<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::equal_to<rive::DrawKey_HandlePlaceholder*>,std::__ndk1::allocator<rive::DrawKey_HandlePlaceholder*>>
                *)(*(long *)(param_5 + 8) + 0x470),&local_138,&local_138);
    if ((extraout_x1_00 & 1) != 0) {
      rive_android::RiveLogE
                ("RiveN/CQ","Draw failed: State machine instance is null (only reported once)");
    }
    uVar6 = *(undefined8 *)(param_5 + 0x60);
    uVar11 = 2;
  }
  local_138 = (DrawKey_HandlePlaceholder *)CONCAT44(local_138._4_4_,uVar11);
  FUN_003287d0(uVar6,&local_138);
LAB_00328790:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003287d0  FUN_003287d0 =====

void FUN_003287d0(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    std::__ndk1::mutex::lock();
    if ((*(byte *)(lVar3 + 0x70) & 1) == 0) {
      lVar4 = *(long *)(lVar3 + 0x10);
      local_40 = 0;
      std::exception_ptr::~exception_ptr((exception_ptr *)&local_40);
      if (lVar4 == 0) {
        uVar1 = *param_2;
        *(uint *)(lVar3 + 0x70) = *(uint *)(lVar3 + 0x70) | 5;
        *(undefined4 *)(lVar3 + 0x74) = uVar1;
        std::__ndk1::condition_variable::notify_all();
        std::__ndk1::mutex::unlock();
        if (*(long *)(lVar2 + 0x28) == local_38) {
          return;
        }
        goto LAB_00328878;
      }
    }
    FUN_00323ff4(2);
  }
  FUN_00323ff4(3);
LAB_00328878:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032887c  FUN_0032887c =====

void FUN_0032887c(void)

{
  return;
}


// ===== 00328880  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00328884  FUN_00328884 =====

void FUN_00328884(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00651878;
  puVar1[1] = uVar2;
  return;
}


// ===== 003288b8  FUN_003288b8 =====

void FUN_003288b8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00651878;
  param_2[1] = uVar1;
  return;
}


// ===== 003288cc  FUN_003288cc =====

void FUN_003288cc(void)

{
  return;
}


// ===== 003288d0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003288d4  FUN_003288d4 =====

void FUN_003288d4(long param_1)

{
  long lVar1;
  _JNIEnv *p_Var2;
  undefined8 uVar3;
  long lVar4;
  long local_48;
  long *local_40;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  p_Var2 = (_JNIEnv *)rive_android::GetJNIEnv();
  if (p_Var2 == (_JNIEnv *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      rive_android::RiveLogE("RiveN/CQ","Failed to get command server JNIEnv");
      return;
    }
  }
  else {
    rive_android::GetObjectClass(p_Var2,*(_jobject **)(param_1 + 8));
    uVar3 = (**(code **)(*(long *)p_Var2 + 0x108))(p_Var2,local_48,"invoke","()Ljava/lang/Object;");
    _JNIEnv::CallObjectMethod((_jobject *)p_Var2,*(_jmethodID **)(param_1 + 8),uVar3);
    rive_android::JNIExceptionHandler::ClearAndLogErrors
              (p_Var2,"RiveN/CQ","runOnCommandServer: Exception thrown in Kotlin lambda:");
    (**(code **)(*(long *)p_Var2 + 0xb0))(p_Var2,*(undefined8 *)(param_1 + 8));
    if (local_48 != 0) {
      (**(code **)(*local_40 + 0xb8))();
    }
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003289e4  _JNIEnv::CallObjectMethod =====

/* _JNIEnv::CallObjectMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallObjectMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = in_x3;
  uStack_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*(long *)param_1 + 0x118))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00328a80  Java_app_rive_runtime_kotlin_core_ViewModel_cppName =====

void Java_app_rive_runtime_kotlin_core_ViewModel_cppName
               (long *param_1,undefined8 param_2,ViewModelRuntime *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)rive::ViewModelRuntime::name(param_3);
  pbVar2 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbVar2 = pbVar1 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00328abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1,pbVar2);
  return;
}


// ===== 00328ac0  Java_app_rive_runtime_kotlin_core_ViewModel_cppInstanceCount =====

void Java_app_rive_runtime_kotlin_core_ViewModel_cppInstanceCount
               (undefined8 param_1,undefined8 param_2,ViewModelRuntime *param_3)

{
  rive::ViewModelRuntime::instanceCount(param_3);
  return;
}


// ===== 00328ad8  Java_app_rive_runtime_kotlin_core_ViewModel_cppPropertyCount =====

void Java_app_rive_runtime_kotlin_core_ViewModel_cppPropertyCount
               (undefined8 param_1,undefined8 param_2,ViewModelRuntime *param_3)

{
  rive::ViewModelRuntime::propertyCount(param_3);
  return;
}


// ===== 00328af0  Java_app_rive_runtime_kotlin_core_ViewModel_cppGetProperties =====

_jmethodID *
Java_app_rive_runtime_kotlin_core_ViewModel_cppGetProperties
          (rive_android *param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  uint *puVar2;
  basic_string *pbVar3;
  basic_string *pbVar4;
  _jmethodID *p_Var5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  long local_d0;
  long *local_c8;
  long local_c0;
  long *local_b8;
  _jmethodID *local_b0 [2];
  _jmethodID *local_a0;
  long *local_98;
  _jclass *local_90;
  long *local_88;
  _jclass *local_80;
  long *local_78;
  uint *local_70;
  uint *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  rive::ViewModelRuntime::properties();
  rive_android::FindClass(param_1,(_JNIEnv *)"java/util/ArrayList",param_3);
  pcVar9 = "<init>";
  pbVar3 = (basic_string *)
           (**(code **)(*(long *)param_1 + 0x108))(param_1,local_80,"<init>",&DAT_00241fd9);
  pcVar8 = "add";
  pbVar4 = (basic_string *)
           (**(code **)(*(long *)param_1 + 0x108))
                     (param_1,local_80,&DAT_0024336a,"(Ljava/lang/Object;)Z");
  rive_android::FindClass
            (param_1,(_JNIEnv *)"app/rive/runtime/kotlin/core/ViewModel$Property",pcVar8);
  p_Var5 = (_jmethodID *)
           (**(code **)(*(long *)param_1 + 0x108))
                     (param_1,local_90,"<init>",
                      "(Lapp/rive/runtime/kotlin/core/ViewModel$PropertyDataType;Ljava/lang/String;)V"
                     );
  rive_android::FindClass
            (param_1,(_JNIEnv *)"app/rive/runtime/kotlin/core/ViewModel$PropertyDataType",pcVar9);
  uVar6 = (**(code **)(*(long *)param_1 + 0x388))
                    (param_1,local_a0,"fromInt",
                     "(I)Lapp/rive/runtime/kotlin/core/ViewModel$PropertyDataType;");
  rive_android::MakeObject((_JNIEnv *)param_1,local_80,(_jmethodID *)pbVar3,local_b0);
  puVar2 = local_68;
  for (puVar10 = local_70; puVar10 != puVar2; puVar10 = puVar10 + 8) {
    rive_android::MakeJString(param_1,(_JNIEnv *)(puVar10 + 2),pbVar3);
    lVar7 = _JNIEnv::CallStaticObjectMethod((_jclass *)param_1,local_a0,uVar6,(ulong)*puVar10);
    rive_android::MakeObject((_JNIEnv *)param_1,local_90,p_Var5,&local_d0,lVar7,local_c0);
    pbVar3 = pbVar4;
    _JNIEnv::CallBooleanMethod((_jobject *)param_1,local_b0[0],pbVar4,local_d0);
    if (local_d0 != 0) {
      (**(code **)(*local_c8 + 0xb8))();
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)param_1 + 0xb8))(param_1,lVar7);
    }
    if (local_c0 != 0) {
      (**(code **)(*local_b8 + 0xb8))();
    }
  }
  if (local_a0 != (_jmethodID *)0x0) {
    (**(code **)(*local_98 + 0xb8))();
  }
  if (local_90 != (_jclass *)0x0) {
    (**(code **)(*local_88 + 0xb8))();
  }
  if (local_80 != (_jclass *)0x0) {
    (**(code **)(*local_78 + 0xb8))();
  }
  puVar2 = local_70;
  puVar10 = local_68;
  if (local_70 != (uint *)0x0) {
    for (; puVar10 != puVar2; puVar10 = puVar10 + -8) {
      if ((puVar10[-6] & 1) != 0) {
        operator_delete(*(void **)(puVar10 + -2));
      }
    }
    local_68 = puVar2;
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_b0[0];
}


// ===== 00328d98  Java_app_rive_runtime_kotlin_core_ViewModel_cppCreateBlankInstance =====

void Java_app_rive_runtime_kotlin_core_ViewModel_cppCreateBlankInstance(void)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rive::ViewModelRuntime::createInstance();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 00328de8  Java_app_rive_runtime_kotlin_core_ViewModel_cppCreateDefaultInstance =====

void Java_app_rive_runtime_kotlin_core_ViewModel_cppCreateDefaultInstance(void)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rive::ViewModelRuntime::createDefaultInstance();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 00328e38  Java_app_rive_runtime_kotlin_core_ViewModel_cppCreateInstanceFromIndex =====

void Java_app_rive_runtime_kotlin_core_ViewModel_cppCreateInstanceFromIndex
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rive::ViewModelRuntime::createInstanceFromIndex(param_3);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 00328e8c  Java_app_rive_runtime_kotlin_core_ViewModel_cppCreateInstanceFromName =====

undefined8
Java_app_rive_runtime_kotlin_core_ViewModel_cppCreateInstanceFromName
          (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  rive::ViewModelRuntime::createInstanceFromName((basic_string *)param_3);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return local_48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00328f04  Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppName =====

void Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppName
               (long *param_1,undefined8 param_2,ViewModelInstanceRuntime *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)rive::ViewModelInstanceRuntime::name(param_3);
  pbVar2 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbVar2 = pbVar1 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00328f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1,pbVar2);
  return;
}


// ===== 00328f44  Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyNumber =====

void Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyNumber
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  undefined8 uVar2;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  uVar2 = rive::ViewModelInstanceRuntime::propertyNumber
                    ((ViewModelInstanceRuntime *)param_3,local_40);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00328fbc  Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyString =====

void Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyString
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  undefined8 uVar2;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  uVar2 = rive::ViewModelInstanceRuntime::propertyString
                    ((ViewModelInstanceRuntime *)param_3,local_40);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00329034  Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyBoolean =====

void Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyBoolean
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  undefined8 uVar2;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  uVar2 = rive::ViewModelInstanceRuntime::propertyBoolean
                    ((ViewModelInstanceRuntime *)param_3,local_40);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 003290ac  Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyColor =====

void Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyColor
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  undefined8 uVar2;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  uVar2 = rive::ViewModelInstanceRuntime::propertyColor
                    ((ViewModelInstanceRuntime *)param_3,local_40);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00329124  Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyEnum =====

void Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyEnum
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  undefined8 uVar2;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  uVar2 = rive::ViewModelInstanceRuntime::propertyEnum((ViewModelInstanceRuntime *)param_3,local_40)
  ;
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0032919c  Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyTrigger =====

void Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyTrigger
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  undefined8 uVar2;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  uVar2 = rive::ViewModelInstanceRuntime::propertyTrigger
                    ((ViewModelInstanceRuntime *)param_3,local_40);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00329214  Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyImage =====

void Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyImage
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  undefined8 uVar2;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  uVar2 = rive::ViewModelInstanceRuntime::propertyImage
                    ((ViewModelInstanceRuntime *)param_3,local_40);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0032928c  Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyList =====

void Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyList
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  undefined8 uVar2;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  uVar2 = rive::ViewModelInstanceRuntime::propertyList((ViewModelInstanceRuntime *)param_3,local_40)
  ;
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00329304  Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyArtboard =====

void Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyArtboard
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  undefined8 uVar2;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  uVar2 = rive::ViewModelInstanceRuntime::propertyArtboard
                    ((ViewModelInstanceRuntime *)param_3,local_40);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0032937c  Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyInstance =====

undefined8
Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppPropertyInstance
          (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  rive::ViewModelInstanceRuntime::propertyViewModel((basic_string *)param_3);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return local_48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003293f4  Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppSetInstanceProperty =====

uint Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppSetInstanceProperty
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4,
               ViewModelInstanceRuntime *param_5)

{
  long lVar1;
  uint uVar2;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  uVar2 = rive::ViewModelInstanceRuntime::replaceViewModel
                    ((ViewModelInstanceRuntime *)param_3,local_50,param_5);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00329478  Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppRefInstance =====

void Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppRefInstance
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00340fb0(1,param_3);
  return;
}


// ===== 00329494  Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppDerefInstance =====

void Java_app_rive_runtime_kotlin_core_ViewModelInstance_cppDerefInstance
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceRuntime *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00340fe0(0xffffffff,param_3);
  if (iVar1 == 1) {
    rive::ViewModelInstanceRuntime::~ViewModelInstanceRuntime(param_3);
    operator_delete(param_3);
    return;
  }
  return;
}


// ===== 003294dc  Java_app_rive_runtime_kotlin_core_ViewModelProperty_cppName =====

void Java_app_rive_runtime_kotlin_core_ViewModelProperty_cppName
               (long *param_1,undefined8 param_2,ViewModelInstanceValueRuntime *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)rive::ViewModelInstanceValueRuntime::name(param_3);
  pbVar2 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbVar2 = pbVar1 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00329518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1,pbVar2);
  return;
}


// ===== 0032951c  Java_app_rive_runtime_kotlin_core_ViewModelProperty_cppHasChanged =====

undefined1
Java_app_rive_runtime_kotlin_core_ViewModelProperty_cppHasChanged
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(undefined1 *)(param_3 + 0x10);
}


// ===== 00329524  Java_app_rive_runtime_kotlin_core_ViewModelProperty_cppFlushChanges =====

uint Java_app_rive_runtime_kotlin_core_ViewModelProperty_cppFlushChanges
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceValueRuntime *param_3)

{
  uint uVar1;
  
  uVar1 = rive::ViewModelInstanceValueRuntime::flushChanges(param_3);
  return uVar1 & 1;
}


// ===== 00329540  Java_app_rive_runtime_kotlin_core_ViewModelNumberProperty_cppGetValue =====

void Java_app_rive_runtime_kotlin_core_ViewModelNumberProperty_cppGetValue
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceNumberRuntime *param_3)

{
  rive::ViewModelInstanceNumberRuntime::value(param_3);
  return;
}


// ===== 00329548  Java_app_rive_runtime_kotlin_core_ViewModelNumberProperty_cppSetValue =====

void Java_app_rive_runtime_kotlin_core_ViewModelNumberProperty_cppSetValue
               (float param_1,undefined8 param_2,undefined8 param_3,
               ViewModelInstanceNumberRuntime *param_4)

{
  rive::ViewModelInstanceNumberRuntime::value(param_4,param_1);
  return;
}


// ===== 00329550  Java_app_rive_runtime_kotlin_core_ViewModelStringProperty_cppGetValue =====

void Java_app_rive_runtime_kotlin_core_ViewModelStringProperty_cppGetValue
               (long *param_1,undefined8 param_2,ViewModelInstanceStringRuntime *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)rive::ViewModelInstanceStringRuntime::value(param_3);
  pbVar2 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbVar2 = pbVar1 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0032958c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1,pbVar2);
  return;
}


// ===== 00329590  Java_app_rive_runtime_kotlin_core_ViewModelStringProperty_cppSetValue =====

void Java_app_rive_runtime_kotlin_core_ViewModelStringProperty_cppSetValue
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [8];
  ulong uStack_58;
  char *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40;
  ulong uStack_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  if (((byte)local_40 & 1) == 0) {
    local_60[0] = local_40;
    uStack_58 = uStack_38;
    local_50 = local_30;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_60,local_30,uStack_38);
  }
  rive::ViewModelInstanceStringRuntime::value((ViewModelInstanceStringRuntime *)param_3,local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00329634  Java_app_rive_runtime_kotlin_core_ViewModelBooleanProperty_cppGetValue =====

uint Java_app_rive_runtime_kotlin_core_ViewModelBooleanProperty_cppGetValue
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceBooleanRuntime *param_3)

{
  uint uVar1;
  
  uVar1 = rive::ViewModelInstanceBooleanRuntime::value(param_3);
  return uVar1 & 1;
}


// ===== 00329650  Java_app_rive_runtime_kotlin_core_ViewModelBooleanProperty_cppSetValue =====

void Java_app_rive_runtime_kotlin_core_ViewModelBooleanProperty_cppSetValue
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceBooleanRuntime *param_3,
               char param_4)

{
  rive::ViewModelInstanceBooleanRuntime::value(param_3,param_4 != '\0');
  return;
}


// ===== 00329660  Java_app_rive_runtime_kotlin_core_ViewModelColorProperty_cppGetValue =====

void Java_app_rive_runtime_kotlin_core_ViewModelColorProperty_cppGetValue
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceColorRuntime *param_3)

{
  rive::ViewModelInstanceColorRuntime::value(param_3);
  return;
}


// ===== 00329668  Java_app_rive_runtime_kotlin_core_ViewModelColorProperty_cppSetValue =====

void Java_app_rive_runtime_kotlin_core_ViewModelColorProperty_cppSetValue
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceColorRuntime *param_3,
               int param_4)

{
  rive::ViewModelInstanceColorRuntime::value(param_3,param_4);
  return;
}


// ===== 00329674  Java_app_rive_runtime_kotlin_core_ViewModelEnumProperty_cppGetValue =====

void Java_app_rive_runtime_kotlin_core_ViewModelEnumProperty_cppGetValue(long *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  rive::ViewModelInstanceEnumRuntime::value();
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  uVar3 = (**(code **)(*param_1 + 0x538))(param_1,pvVar1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00329710  Java_app_rive_runtime_kotlin_core_ViewModelEnumProperty_cppSetValue =====

void Java_app_rive_runtime_kotlin_core_ViewModelEnumProperty_cppSetValue
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [8];
  ulong uStack_58;
  char *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40;
  ulong uStack_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  if (((byte)local_40 & 1) == 0) {
    local_60[0] = local_40;
    uStack_58 = uStack_38;
    local_50 = local_30;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(local_60,local_30,uStack_38);
  }
  rive::ViewModelInstanceEnumRuntime::value((ViewModelInstanceEnumRuntime *)param_3,local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003297b4  Java_app_rive_runtime_kotlin_core_ViewModelTriggerProperty_cppTrigger =====

void Java_app_rive_runtime_kotlin_core_ViewModelTriggerProperty_cppTrigger
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceTriggerRuntime *param_3)

{
  rive::ViewModelInstanceTriggerRuntime::trigger(param_3);
  return;
}


// ===== 003297bc  Java_app_rive_runtime_kotlin_core_ViewModelImageProperty_cppSetValue =====

void Java_app_rive_runtime_kotlin_core_ViewModelImageProperty_cppSetValue
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceAssetImageRuntime *param_3,
               RenderImage *param_4)

{
  rive::ViewModelInstanceAssetImageRuntime::value(param_3,param_4);
  return;
}


// ===== 003297c8  Java_app_rive_runtime_kotlin_core_ViewModelListProperty_cppSize =====

void Java_app_rive_runtime_kotlin_core_ViewModelListProperty_cppSize
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceListRuntime *param_3)

{
  rive::ViewModelInstanceListRuntime::size(param_3);
  return;
}


// ===== 003297e0  Java_app_rive_runtime_kotlin_core_ViewModelListProperty_cppElementAt =====

void Java_app_rive_runtime_kotlin_core_ViewModelListProperty_cppElementAt
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rive::ViewModelInstanceListRuntime::instanceAt(param_3);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 00329834  Java_app_rive_runtime_kotlin_core_ViewModelListProperty_cppAdd =====

void Java_app_rive_runtime_kotlin_core_ViewModelListProperty_cppAdd
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceListRuntime *param_3,
               ViewModelInstanceRuntime *param_4)

{
  rive::ViewModelInstanceListRuntime::addInstance(param_3,param_4);
  return;
}


// ===== 00329840  Java_app_rive_runtime_kotlin_core_ViewModelListProperty_cppAddAt =====

void Java_app_rive_runtime_kotlin_core_ViewModelListProperty_cppAddAt
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceListRuntime *param_3,
               int param_4,ViewModelInstanceRuntime *param_5)

{
  rive::ViewModelInstanceListRuntime::addInstanceAt(param_3,param_5,param_4);
  return;
}


// ===== 00329850  Java_app_rive_runtime_kotlin_core_ViewModelListProperty_cppRemove =====

void Java_app_rive_runtime_kotlin_core_ViewModelListProperty_cppRemove
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceListRuntime *param_3,
               ViewModelInstanceRuntime *param_4)

{
  rive::ViewModelInstanceListRuntime::removeInstance(param_3,param_4);
  return;
}


// ===== 0032985c  Java_app_rive_runtime_kotlin_core_ViewModelListProperty_cppRemoveAt =====

void Java_app_rive_runtime_kotlin_core_ViewModelListProperty_cppRemoveAt
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceListRuntime *param_3,
               int param_4)

{
  rive::ViewModelInstanceListRuntime::removeInstanceAt(param_3,param_4);
  return;
}


// ===== 00329868  Java_app_rive_runtime_kotlin_core_ViewModelListProperty_cppSwap =====

void Java_app_rive_runtime_kotlin_core_ViewModelListProperty_cppSwap
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceListRuntime *param_3,
               uint param_4,uint param_5)

{
  rive::ViewModelInstanceListRuntime::swap(param_3,param_4,param_5);
  return;
}


// ===== 00329878  Java_app_rive_runtime_kotlin_core_ViewModelArtboardProperty_cppSetArtboard =====

void Java_app_rive_runtime_kotlin_core_ViewModelArtboardProperty_cppSetArtboard
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceArtboardRuntime *param_3,
               Artboard *param_4)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  long *plVar4;
  File *pFVar5;
  void *local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  rive::File::internalBindableArtboardFromArtboard(param_4);
  local_48 = local_40;
  if (local_40 != (void *)0x0) {
    FUN_00340fb0(1,local_40);
  }
  rive::ViewModelInstanceArtboardRuntime::value(param_3,&local_48);
  pvVar2 = local_48;
  if ((local_48 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_48), iVar3 == 1)) {
    plVar4 = *(long **)((long)pvVar2 + 0x10);
    *(undefined8 *)((long)pvVar2 + 0x10) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    pFVar5 = *(File **)((long)pvVar2 + 8);
    if ((pFVar5 != (File *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,pFVar5), iVar3 == 1)) {
      rive::File::~File(pFVar5);
      operator_delete(pFVar5);
    }
    operator_delete(pvVar2);
  }
  if ((local_40 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_40), iVar3 == 1)) {
    plVar4 = *(long **)((long)local_40 + 0x10);
    *(undefined8 *)((long)local_40 + 0x10) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    pFVar5 = *(File **)((long)local_40 + 8);
    if ((pFVar5 != (File *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,pFVar5), iVar3 == 1)) {
      rive::File::~File(pFVar5);
      operator_delete(pFVar5);
    }
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003299c8  Java_app_rive_runtime_kotlin_core_ViewModelArtboardProperty_cppSetBindableArtboard =====

void Java_app_rive_runtime_kotlin_core_ViewModelArtboardProperty_cppSetBindableArtboard
               (undefined8 param_1,undefined8 param_2,ViewModelInstanceArtboardRuntime *param_3,
               void *param_4,long param_5)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  long *plVar4;
  File *pFVar5;
  long *local_60;
  void *local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 == (void *)0x0) {
    local_50 = (void *)0x0;
    rive::ViewModelInstanceArtboardRuntime::value(param_3,&local_50);
    pvVar2 = local_50;
    if ((local_50 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_50), iVar3 == 1)) {
      plVar4 = *(long **)((long)pvVar2 + 0x10);
      *(undefined8 *)((long)pvVar2 + 0x10) = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      pFVar5 = *(File **)((long)pvVar2 + 8);
      if ((pFVar5 != (File *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,pFVar5), iVar3 == 1)) {
        rive::File::~File(pFVar5);
        operator_delete(pFVar5);
      }
      operator_delete(pvVar2);
    }
  }
  else {
    FUN_00340fb0(1,param_4);
    local_58 = param_4;
    rive::ViewModelInstanceArtboardRuntime::value(param_3,&local_58);
    pvVar2 = local_58;
    if ((local_58 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_58), iVar3 == 1)) {
      plVar4 = *(long **)((long)pvVar2 + 0x10);
      *(undefined8 *)((long)pvVar2 + 0x10) = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      pFVar5 = *(File **)((long)pvVar2 + 8);
      if ((pFVar5 != (File *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,pFVar5), iVar3 == 1)) {
        rive::File::~File(pFVar5);
        operator_delete(pFVar5);
      }
      operator_delete(pvVar2);
    }
    if (param_5 != 0) {
      plVar4 = *(long **)(param_5 + 8);
      if (plVar4 != (long *)0x0) {
        FUN_00340fb0(1,(long)plVar4 + 0xa4);
      }
      local_60 = plVar4;
      rive::ViewModelInstanceArtboardRuntime::viewModelInstance(param_3,&local_60);
      plVar4 = local_60;
      if ((local_60 != (long *)0x0) &&
         (iVar3 = FUN_00340fe0(0xffffffff,(long)local_60 + 0xa4), iVar3 == 1)) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00329b7c  Java_app_rive_runtime_kotlin_core_File_import =====

undefined8
Java_app_rive_runtime_kotlin_core_File_import
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5
          ,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x5c0))(param_1,param_3,0);
  uVar2 = rive_android::Import(uVar1,param_4,param_5,param_6);
  (**(code **)(*param_1 + 0x600))(param_1,param_3,uVar1,2);
  return uVar2;
}


// ===== 00329c04  Java_app_rive_runtime_kotlin_core_File_cppArtboardByName =====

void Java_app_rive_runtime_kotlin_core_File_cppArtboardByName
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  byte local_48 [16];
  void *local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  rive::File::artboardNamed(&local_30,param_3,local_48);
  if ((local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  if (local_30 != 0) {
    rive::Artboard::advance((Artboard *)0x0,local_30,0xb);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 00329c8c  Java_app_rive_runtime_kotlin_core_File_cppDelete =====

void Java_app_rive_runtime_kotlin_core_File_cppDelete
               (undefined8 param_1,undefined8 param_2,File *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00340fe0(0xffffffff,param_3);
  if (iVar1 == 1) {
    rive::File::~File(param_3);
    operator_delete(param_3);
    return;
  }
  return;
}


// ===== 00329cd4  Java_app_rive_runtime_kotlin_core_File_cppArtboardCount =====

ulong Java_app_rive_runtime_kotlin_core_File_cppArtboardCount
                (undefined8 param_1,undefined8 param_2,long param_3)

{
  return (ulong)(*(long *)(param_3 + 0x90) - *(long *)(param_3 + 0x88)) >> 3;
}


// ===== 00329ce4  Java_app_rive_runtime_kotlin_core_File_cppArtboardByIndex =====

void Java_app_rive_runtime_kotlin_core_File_cppArtboardByIndex
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rive::File::artboardAt(param_3);
  if (local_30 != 0) {
    rive::Artboard::advance((Artboard *)0x0,local_30,0xb);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 00329d4c  Java_app_rive_runtime_kotlin_core_File_cppArtboardNameByIndex =====

void Java_app_rive_runtime_kotlin_core_File_cppArtboardNameByIndex
               (long *param_1,undefined8 param_2,File *param_3,int param_4)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_40;
  undefined8 uStack_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar3 = rive::File::artboard(param_3,(long)param_4);
  if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
    uStack_38 = *(undefined8 *)(lVar3 + 0x18);
    local_40 = *(ulong *)(lVar3 + 0x10);
    local_30 = *(void **)(lVar3 + 0x20);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_40,*(char **)(lVar3 + 0x20),*(ulong *)(lVar3 + 0x18));
  }
  pvVar1 = (void *)((ulong)&local_40 | 1);
  if ((local_40 & 1) != 0) {
    pvVar1 = local_30;
  }
  uVar4 = (**(code **)(*param_1 + 0x538))(param_1,pvVar1);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 00329e0c  Java_app_rive_runtime_kotlin_core_File_cppCreateBindableArtboardByName =====

void Java_app_rive_runtime_kotlin_core_File_cppCreateBindableArtboardByName
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  byte local_48 [16];
  void *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  rive::File::bindableArtboardNamed(&local_30,param_3,local_48);
  if ((local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 00329e80  Java_app_rive_runtime_kotlin_core_File_cppCreateDefaultBindableArtboard =====

void Java_app_rive_runtime_kotlin_core_File_cppCreateDefaultBindableArtboard(void)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rive::File::bindableArtboardDefault();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 00329ed0  Java_app_rive_runtime_kotlin_core_File_cppEnums =====

/* WARNING: Type propagation algorithm not settling */

_jmethodID *
Java_app_rive_runtime_kotlin_core_File_cppEnums
          (rive_android *param_1,undefined8 param_2,File *param_3)

{
  void *__src;
  long *plVar1;
  long lVar2;
  _jmethodID *p_Var3;
  undefined8 *puVar4;
  File *__dest;
  _jmethodID *p_Var5;
  _jmethodID *p_Var6;
  _jmethodID *p_Var7;
  _JNIEnv *p_Var8;
  File *pFVar9;
  char *pcVar10;
  _jmethodID *p_Var11;
  File *pFVar12;
  long *plVar13;
  long local_e0;
  long *local_d8;
  _jmethodID *local_d0;
  long *local_c8;
  long local_c0;
  long *local_b8;
  _jmethodID *local_b0 [2];
  _jclass *local_a0;
  long *local_98;
  _jclass *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined8 *)rive::File::enums(param_3);
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  __src = (void *)*puVar4;
  pFVar9 = (File *)(puVar4[1] - (long)__src);
  if (pFVar9 == (File *)0x0) {
    pFVar12 = (File *)0x0;
    __dest = (File *)0x0;
  }
  else {
    if ((long)pFVar9 < 0) {
      FUN_0032a244(&local_80);
      return (_jmethodID *)((ulong)(*(long *)(param_3 + 0xa8) - *(long *)(param_3 + 0xa0)) >> 3);
    }
    __dest = (File *)operator_new((ulong)pFVar9);
    pFVar12 = __dest + (long)pFVar9;
    memcpy(__dest,__src,(size_t)pFVar9);
    param_3 = pFVar9;
  }
  rive_android::FindClass(param_1,(_JNIEnv *)"java/util/ArrayList",(char *)param_3);
  p_Var5 = (_jmethodID *)
           (**(code **)(*(long *)param_1 + 0x108))(param_1,local_90,"<init>",&DAT_00241fd9);
  pcVar10 = "add";
  p_Var6 = (_jmethodID *)
           (**(code **)(*(long *)param_1 + 0x108))
                     (param_1,local_90,&DAT_0024336a,"(Ljava/lang/Object;)Z");
  rive_android::FindClass(param_1,(_JNIEnv *)"app/rive/runtime/kotlin/core/File$Enum",pcVar10);
  p_Var7 = (_jmethodID *)
           (**(code **)(*(long *)param_1 + 0x108))
                     (param_1,local_a0,"<init>","(Ljava/lang/String;Ljava/util/List;)V");
  p_Var11 = p_Var5;
  rive_android::MakeObject((_JNIEnv *)param_1,local_90,p_Var5,local_b0);
  p_Var3 = local_b0[0];
  for (pFVar9 = __dest; pFVar9 != pFVar12; pFVar9 = pFVar9 + 8) {
    local_b0[0] = p_Var3;
    p_Var8 = (_JNIEnv *)(**(code **)(**(long **)pFVar9 + 0x50))();
    rive_android::MakeJString(param_1,p_Var8,(basic_string *)p_Var11);
    p_Var11 = p_Var5;
    rive_android::MakeObject((_JNIEnv *)param_1,local_90,p_Var5,&local_d0);
    plVar1 = *(long **)(*(long *)pFVar9 + 0x18);
    for (plVar13 = *(long **)(*(long *)pFVar9 + 0x10); plVar13 != plVar1; plVar13 = plVar13 + 1) {
      rive_android::MakeJString(param_1,(_JNIEnv *)(*plVar13 + 0x10),(basic_string *)p_Var11);
      p_Var11 = p_Var6;
      _JNIEnv::CallBooleanMethod((_jobject *)param_1,local_d0,p_Var6,local_e0);
      if (local_e0 != 0) {
        (**(code **)(*local_d8 + 0xb8))();
      }
    }
    rive_android::MakeObject((_JNIEnv *)param_1,local_a0,p_Var7,&local_e0,local_c0,local_d0);
    p_Var11 = p_Var6;
    _JNIEnv::CallBooleanMethod((_jobject *)param_1,local_b0[0],p_Var6,local_e0);
    if (local_e0 != 0) {
      (**(code **)(*local_d8 + 0xb8))();
    }
    if (local_d0 != (_jmethodID *)0x0) {
      (**(code **)(*local_c8 + 0xb8))();
    }
    if (local_c0 != 0) {
      (**(code **)(*local_b8 + 0xb8))();
    }
    p_Var3 = local_b0[0];
  }
  if (local_a0 != (_jclass *)0x0) {
    (**(code **)(*local_98 + 0xb8))();
  }
  if (local_90 != (_jclass *)0x0) {
    (**(code **)(*local_88 + 0xb8))();
  }
  if (__dest != (File *)0x0) {
    operator_delete(__dest);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return p_Var3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032a1a4  Java_app_rive_runtime_kotlin_core_File_cppViewModelCount =====

ulong Java_app_rive_runtime_kotlin_core_File_cppViewModelCount
                (undefined8 param_1,undefined8 param_2,long param_3)

{
  return (ulong)(*(long *)(param_3 + 0xa8) - *(long *)(param_3 + 0xa0)) >> 3;
}


// ===== 0032a1b4  Java_app_rive_runtime_kotlin_core_File_cppViewModelByIndex =====

void Java_app_rive_runtime_kotlin_core_File_cppViewModelByIndex
               (undefined8 param_1,undefined8 param_2,File *param_3,int param_4)

{
  rive::File::viewModelByIndex(param_3,(long)param_4);
  return;
}


// ===== 0032a1c0  Java_app_rive_runtime_kotlin_core_File_cppViewModelByName =====

void Java_app_rive_runtime_kotlin_core_File_cppViewModelByName
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  uVar2 = rive::File::viewModelByName((File *)param_3,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0032a238  Java_app_rive_runtime_kotlin_core_File_cppDefaultViewModelForArtboard =====

void Java_app_rive_runtime_kotlin_core_File_cppDefaultViewModelForArtboard
               (undefined8 param_1,undefined8 param_2,File *param_3,Artboard *param_4)

{
  rive::File::defaultArtboardViewModel(param_3,param_4);
  return;
}


// ===== 0032a244  FUN_0032a244 =====

void FUN_0032a244(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 0032a258  Java_app_rive_runtime_kotlin_core_FileAsset_cppName =====

void Java_app_rive_runtime_kotlin_core_FileAsset_cppName
               (long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3 + 0x11;
  if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(param_3 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0032a274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1,lVar1);
  return;
}


// ===== 0032a278  Java_app_rive_runtime_kotlin_core_FileAsset_cppUniqueFilename =====

void Java_app_rive_runtime_kotlin_core_FileAsset_cppUniqueFilename(long *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  rive::FileAsset::uniqueFilename();
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  uVar3 = (**(code **)(*param_1 + 0x538))(param_1,pvVar1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0032a314  Java_app_rive_runtime_kotlin_core_FileAsset_cppDecode =====

uint Java_app_rive_runtime_kotlin_core_FileAsset_cppDecode
               (long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,undefined4 param_5
               )

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  void *__src;
  size_t __size;
  void *local_68;
  size_t local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = rive_android::GetFactory(param_5);
  __src = (void *)(**(code **)(*param_1 + 0x5c0))(param_1,param_4,0);
  iVar2 = (**(code **)(*param_1 + 0x558))(param_1,param_4);
  __size = rive_android::JIntToSizeT(iVar2);
  local_68 = (void *)0x0;
  local_60 = 0;
  if (__size != 0) {
    local_68 = malloc(__size);
    if (local_68 != (void *)0x0) {
      local_60 = __size;
      memcpy(local_68,__src,__size);
    }
  }
  uVar3 = (**(code **)(*param_3 + 0x88))(param_3,&local_68,uVar4);
  (**(code **)(*param_1 + 0x600))(param_1,param_4,__src,2);
  free(local_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032a424  Java_app_rive_runtime_kotlin_core_FileAsset_cppCDNUrl =====

undefined8
Java_app_rive_runtime_kotlin_core_FileAsset_cppCDNUrl(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  rive::FileAsset::cdnUuidStr();
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 0) {
    uVar4 = (**(code **)(*param_1 + 0x538))(param_1,&DAT_00243399);
  }
  else {
    if ((*(byte *)(param_3 + 0x30) & 1) == 0) {
      uStack_68 = *(ulong *)(param_3 + 0x38);
      local_70 = *(ulong *)(param_3 + 0x30);
      local_60 = *(void **)(param_3 + 0x40);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,*(char **)(param_3 + 0x40),*(ulong *)(param_3 + 0x38));
    }
    uVar1 = local_70 >> 1 & 0x7f;
    pvVar2 = (void *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      uVar1 = uStack_68;
      pvVar2 = local_60;
    }
    if (*(char *)((long)pvVar2 + (uVar1 - 1)) != '/') {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back((char)&local_70);
    }
    pvVar2 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar2 = local_40;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_70,(ulong)pvVar2);
    pvVar2 = (void *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pvVar2 = local_60;
    }
    uVar4 = (**(code **)(*param_1 + 0x538))(param_1,pvVar2);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


// ===== 0032a590  Java_app_rive_runtime_kotlin_core_ImageAsset_cppSetRenderImage =====

void Java_app_rive_runtime_kotlin_core_ImageAsset_cppSetRenderImage
               (undefined8 param_1,undefined8 param_2,ImageAsset *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_4 != (long *)0x0) {
    FUN_00340fb0(1,param_4 + 1);
  }
  local_40 = param_4;
  rive::ImageAsset::renderImage(param_3,&local_40);
  plVar2 = local_40;
  if ((local_40 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_40 + 1), iVar3 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032a62c  Java_app_rive_runtime_kotlin_core_ImageAsset_cppGetRenderImage =====

undefined8
Java_app_rive_runtime_kotlin_core_ImageAsset_cppGetRenderImage
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(undefined8 *)(param_3 + 0x88);
}


// ===== 0032a634  Java_app_rive_runtime_kotlin_core_ImageAsset_cppImageAssetWidth =====

undefined4
Java_app_rive_runtime_kotlin_core_ImageAsset_cppImageAssetWidth
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(undefined4 *)(param_3 + 0x84);
}


// ===== 0032a63c  Java_app_rive_runtime_kotlin_core_ImageAsset_cppImageAssetHeight =====

undefined4
Java_app_rive_runtime_kotlin_core_ImageAsset_cppImageAssetHeight
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(undefined4 *)(param_3 + 0x80);
}


// ===== 0032a644  Java_app_rive_runtime_kotlin_core_RiveRenderImage_00024Companion_cppFromRGBABytes =====

void Java_app_rive_runtime_kotlin_core_RiveRenderImage_00024Companion_cppFromRGBABytes
               (long *param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5,
               int param_6,char param_7)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar6;
  undefined8 local_60;
  uint uVar5;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  uVar5 = param_5;
  iVar2 = (**(code **)(*param_1 + 0x558))(param_1,param_3);
  uVar4 = (undefined1)uVar5;
  if ((((int)param_4 < 1) || ((int)param_5 < 1)) ||
     ((long)iVar2 != (ulong)param_4 * (ulong)param_5 * 4)) {
    rive_android::RiveLogE("RiveLN/RiveRenderImage","cppFromRGBABytes - Invalid args.");
    local_60 = 0;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x5c0))(param_1,param_3,0);
    if (param_6 == 0) {
      rive_android::renderImageFromRGBABytesRive
                ((rive_android *)(ulong)param_4,param_5,(uint)uVar3,
                 (uchar *)(ulong)(param_7 == '\x01'),(bool)uVar4);
    }
    else {
      rive_android::renderImageFromRGBABytesCanvas
                ((rive_android *)(ulong)param_4,param_5,(uint)uVar3,
                 (uchar *)(ulong)(param_7 == '\x01'),(bool)uVar4);
    }
    (**(code **)(*param_1 + 0x600))(param_1,param_3,uVar3,2);
  }
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60);
}


// ===== 0032a768  Java_app_rive_runtime_kotlin_core_RiveRenderImage_00024Companion_cppFromARGBInts =====

void Java_app_rive_runtime_kotlin_core_RiveRenderImage_00024Companion_cppFromARGBInts
               (long *param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5,
               int param_6,char param_7)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar6;
  undefined8 local_60;
  uint uVar5;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  uVar5 = param_5;
  iVar2 = (**(code **)(*param_1 + 0x558))(param_1,param_3);
  uVar4 = (undefined1)uVar5;
  if ((((int)param_4 < 1) || ((int)param_5 < 1)) ||
     ((ulong)param_5 * (ulong)param_4 - (long)iVar2 != 0)) {
    rive_android::RiveLogE("RiveLN/RiveRenderImage","cppFromARGBInts - Invalid args.");
    local_60 = 0;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x5d8))(param_1,param_3,0);
    if (param_6 == 0) {
      rive_android::renderImageFromARGBIntsRive
                ((rive_android *)(ulong)param_4,param_5,(uint)uVar3,
                 (uint *)(ulong)(param_7 == '\x01'),(bool)uVar4);
    }
    else {
      rive_android::renderImageFromARGBIntsCanvas
                ((rive_android *)(ulong)param_4,param_5,(uint)uVar3,
                 (uint *)(ulong)(param_7 == '\x01'),(bool)uVar4);
    }
    (**(code **)(*param_1 + 0x618))(param_1,param_3,uVar3,2);
  }
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60);
}


// ===== 0032a888  Java_app_rive_runtime_kotlin_core_RiveRenderImage_00024Companion_cppFromBitmapRive =====

void Java_app_rive_runtime_kotlin_core_RiveRenderImage_00024Companion_cppFromBitmapRive
               (undefined8 param_1,undefined8 param_2,_jobject *param_3,char param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rive_android::renderImageFromBitmapRive(param_3,param_4 == '\x01');
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 0032a8e4  Java_app_rive_runtime_kotlin_core_RiveRenderImage_00024Companion_cppFromBitmapCanvas =====

void Java_app_rive_runtime_kotlin_core_RiveRenderImage_00024Companion_cppFromBitmapCanvas
               (undefined8 param_1,_jobject *param_2,rive_android *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rive_android::renderImageFromBitmapCanvas(param_3,param_2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 0032a934  Java_app_rive_runtime_kotlin_core_RiveRenderImage_cppDelete =====

void Java_app_rive_runtime_kotlin_core_RiveRenderImage_cppDelete
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  
  if ((param_3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,param_3 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0032a970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}


// ===== 0032a980  Java_app_rive_runtime_kotlin_core_FontAsset_cppSetFont =====

void Java_app_rive_runtime_kotlin_core_FontAsset_cppSetFont
               (undefined8 param_1,undefined8 param_2,FontAsset *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_4 != (long *)0x0) {
    FUN_00340fb0(1,param_4 + 1);
  }
  local_40 = param_4;
  rive::FontAsset::font(param_3,&local_40);
  plVar2 = local_40;
  if ((local_40 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_40 + 1), iVar3 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032aa1c  Java_app_rive_runtime_kotlin_core_FontAsset_cppGetFont =====

long * Java_app_rive_runtime_kotlin_core_FontAsset_cppGetFont
                 (undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_3 + 0x80);
  if (plVar2 != (long *)0x0) {
    FUN_00340fb0(1,plVar2 + 1);
    iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1);
    if (iVar1 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  return plVar2;
}


// ===== 0032aa70  Java_app_rive_runtime_kotlin_core_RiveFont_00024Companion_cppMakeFont =====

void Java_app_rive_runtime_kotlin_core_RiveFont_00024Companion_cppMakeFont
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = (**(code **)(*param_1 + 0x558))(param_1,param_3);
  uVar3 = (**(code **)(*param_1 + 0x5c0))(param_1,param_3,0);
  rive_android::decode<rive::Font>(&local_50,uVar3,(long)iVar2,param_4);
  (**(code **)(*param_1 + 0x600))(param_1,param_3,uVar3,2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50);
}


// ===== 0032ab2c  Java_app_rive_runtime_kotlin_core_RiveFont_cppDelete =====

void Java_app_rive_runtime_kotlin_core_RiveFont_cppDelete
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  
  if ((param_3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,param_3 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0032ab68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}


// ===== 0032ab78  Java_app_rive_runtime_kotlin_core_AudioAsset_cppSetAudio =====

void Java_app_rive_runtime_kotlin_core_AudioAsset_cppSetAudio
               (undefined8 param_1,undefined8 param_2,long param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  
  if (param_4 != (void *)0x0) {
    FUN_00340fb0(1,param_4);
    FUN_00340fb0(1,param_4);
  }
  pvVar2 = *(void **)(param_3 + 0x88);
  *(void **)(param_3 + 0x88) = param_4;
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,pvVar2), iVar1 == 1)) {
    free(*(void **)((long)pvVar2 + 0x28));
    operator_delete(pvVar2);
  }
  if ((param_4 != (void *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,param_4), iVar1 == 1)) {
    free(*(void **)((long)param_4 + 0x28));
    operator_delete(param_4);
    return;
  }
  return;
}


// ===== 0032ac20  Java_app_rive_runtime_kotlin_core_AudioAsset_cppGetAudio =====

void * Java_app_rive_runtime_kotlin_core_AudioAsset_cppGetAudio
                 (undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_3 + 0x88);
  if (pvVar2 != (void *)0x0) {
    FUN_00340fb0(1,pvVar2);
    iVar1 = FUN_00340fe0(0xffffffff,pvVar2);
    if (iVar1 == 1) {
      free(*(void **)((long)pvVar2 + 0x28));
      operator_delete(pvVar2);
    }
  }
  return pvVar2;
}


// ===== 0032ac74  Java_app_rive_runtime_kotlin_core_RiveAudio_00024Companion_cppMakeAudio =====

void Java_app_rive_runtime_kotlin_core_RiveAudio_00024Companion_cppMakeAudio
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = (**(code **)(*param_1 + 0x558))(param_1,param_3);
  uVar3 = (**(code **)(*param_1 + 0x5c0))(param_1,param_3,0);
  rive_android::decode<rive::AudioSource>(&local_50,uVar3,(long)iVar2,param_4);
  (**(code **)(*param_1 + 0x600))(param_1,param_3,uVar3,2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50);
}


// ===== 0032ad30  Java_app_rive_runtime_kotlin_core_RiveAudio_cppDelete =====

void Java_app_rive_runtime_kotlin_core_RiveAudio_cppDelete
               (undefined8 param_1,undefined8 param_2,void *param_3)

{
  int iVar1;
  
  if ((param_3 != (void *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,param_3), iVar1 == 1)) {
    free(*(void **)((long)param_3 + 0x28));
    operator_delete(param_3);
    return;
  }
  return;
}


// ===== 0032ad7c  Java_app_rive_runtime_kotlin_core_FileAssetLoader_constructor =====

JNIFileAssetLoader *
Java_app_rive_runtime_kotlin_core_FileAssetLoader_constructor(_JNIEnv *param_1,_jobject *param_2)

{
  JNIFileAssetLoader *this;
  
  this = (JNIFileAssetLoader *)operator_new(0x28);
  rive_android::JNIFileAssetLoader::JNIFileAssetLoader(this,param_2,param_1);
  return this;
}


// ===== 0032adc0  Java_app_rive_runtime_kotlin_core_FileAssetLoader_cppDelete =====

void Java_app_rive_runtime_kotlin_core_FileAssetLoader_cppDelete
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00340fe0(0xffffffff,param_3 + 1);
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0032adf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}


// ===== 0032ae08  Java_app_rive_runtime_kotlin_core_FileAssetLoader_cppRef =====

void Java_app_rive_runtime_kotlin_core_FileAssetLoader_cppRef
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00340fb0(1,param_3 + 8);
  return;
}


// ===== 0032ae24  Java_app_rive_runtime_kotlin_core_FileAssetLoader_cppSetRendererType =====

void Java_app_rive_runtime_kotlin_core_FileAssetLoader_cppSetRendererType
               (undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  if (*(int *)(param_3 + 0x20) != param_4) {
    *(int *)(param_3 + 0x20) = param_4;
  }
  return;
}


// ===== 0032ae38  Java_app_rive_runtime_kotlin_fonts_NativeFontHelper_cppRegisterFallbackFont =====

uint Java_app_rive_runtime_kotlin_fonts_NativeFontHelper_cppRegisterFallbackFont
               (undefined8 param_1,undefined8 param_2,_jbyteArray *param_3)

{
  uint uVar1;
  
  uVar1 = rive_android::FontHelper::RegisterFallbackFont(param_3);
  return uVar1 & 1;
}


// ===== 0032ae54  Java_app_rive_runtime_kotlin_fonts_FontFallbackStrategy_00024Companion_cppResetFontCache =====

void Java_app_rive_runtime_kotlin_fonts_FontFallbackStrategy_00024Companion_cppResetFontCache(void)

{
  std::__ndk1::mutex::lock();
  FUN_0032ae8c(PTR_s_pickFontCache_0067cb50);
  std::__ndk1::mutex::unlock();
  return;
}


// ===== 0032ae8c  FUN_0032ae8c =====

void FUN_0032ae8c(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_1[3] != 0) {
    puVar1 = (undefined8 *)param_1[2];
    while (puVar1 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)puVar1[3];
      pvVar7 = (void *)*puVar1;
      if (puVar8 != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)puVar1[4];
        puVar3 = puVar8;
        if (puVar9 != puVar8) {
          do {
            puVar9 = puVar9 + -1;
            plVar6 = (long *)*puVar9;
            if ((plVar6 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar6 + 1), iVar2 == 1)
               ) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          } while (puVar9 != puVar8);
          puVar3 = (undefined8 *)puVar1[3];
        }
        puVar1[4] = puVar8;
        operator_delete(puVar3);
      }
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar7;
    }
    lVar4 = param_1[1];
    param_1[2] = 0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    param_1[3] = 0;
  }
  return;
}


// ===== 0032af64  Java_app_rive_runtime_kotlin_core_Helpers_cppConvertToArtboardSpace =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Java_app_rive_runtime_kotlin_core_Helpers_cppConvertToArtboardSpace
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               _JNIEnv *param_5,undefined8 param_6,_jobject *param_7,undefined8 param_8,
               _jobject *param_9,_jobject *param_10,_jobject *param_11)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  _jmethodID *p_Var4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  Mat2D aMStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = rive_android::GetFit(param_5,param_9);
  uVar5 = rive_android::GetAlignment(param_5,param_10);
  uVar8 = param_2;
  local_b0 = rive_android::RectFToAABB(param_5,param_11);
  uStack_ac = uVar8;
  local_a8 = param_3;
  uStack_a4 = param_4;
  local_c0 = rive_android::RectFToAABB(param_5,param_7);
  uStack_bc = uVar8;
  local_b8 = param_3;
  uStack_b4 = param_4;
  uVar3 = rive_android::GetXFieldId();
  fVar6 = (float)(**(code **)(*(long *)param_5 + 0x330))(param_5,param_8,uVar3);
  uVar3 = rive_android::GetYFieldId();
  fVar7 = (float)(**(code **)(*(long *)param_5 + 0x330))(param_5,param_8,uVar3);
  rive::computeAlignment(aMStack_80,uVar5,param_2,param_1,uVar2,&local_c0,&local_b0);
  local_90 = 0;
  uStack_98 = _UNK_0024e970;
  local_a0 = _DAT_0024e968;
  rive::Mat2D::invert(aMStack_80,(Mat2D *)&local_a0);
  fVar9 = (float)NEON_fmadd((undefined4)local_a0,(float)(long)fVar6,
                            (float)uStack_98 * (float)(long)fVar7);
  fVar6 = (float)NEON_fmadd(local_a0._4_4_,(float)(long)fVar6,uStack_98._4_4_ * (float)(long)fVar7);
  fVar9 = (float)local_90 + fVar9;
  fVar6 = local_90._4_4_ + fVar6;
  p_Var4 = (_jmethodID *)rive_android::GetPointerFClass();
  uVar3 = rive_android::GetPointFInitMethod();
  _JNIEnv::NewObject((_jclass *)param_5,p_Var4,(double)fVar9,(double)fVar6,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032b0fc  Java_app_rive_runtime_kotlin_core_Rive_cppCalculateRequiredBounds =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Java_app_rive_runtime_kotlin_core_Rive_cppCalculateRequiredBounds
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               _JNIEnv *param_5,undefined8 param_6,_jobject *param_7,_jobject *param_8,
               _jobject *param_9,_jobject *param_10,_jobject *param_11)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = rive_android::GetFit(param_5,param_7);
  uVar3 = rive_android::GetAlignment(param_5,param_8);
  uVar4 = param_2;
  local_78 = rive_android::RectFToAABB(param_5,param_9);
  uStack_74 = uVar4;
  local_70 = param_3;
  uStack_6c = param_4;
  local_88 = rive_android::RectFToAABB(param_5,param_10);
  uStack_90 = _UNK_0024deb8;
  local_98 = _DAT_0024deb0;
  local_a0 = PTR_vtable_0067cb58 + 0x10;
  uStack_84 = uVar4;
  local_80 = param_3;
  uStack_7c = param_4;
  local_b0 = rive_android::DimensionsHelper::computeDimensions
                       (uVar3,&local_a0,uVar2,&local_78,&local_88);
  uStack_ac = param_2;
  local_a8 = param_1;
  uStack_a4 = param_4;
  rive_android::AABBToRectF(param_5,(AABB *)&local_b0,param_11);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032b218  rive::Renderer::~Renderer =====

/* rive::Renderer::~Renderer() */

void __thiscall rive::Renderer::~Renderer(Renderer *this)

{
  return;
}


// ===== 0032b21c  JNI_OnLoad =====

undefined8 JNI_OnLoad(undefined8 param_1)

{
  *(undefined8 *)PTR_g_JVM_0067caf8 = param_1;
  return 0x10006;
}


// ===== 0032b238  Java_app_rive_runtime_kotlin_core_Rive_cppInitialize =====

void Java_app_rive_runtime_kotlin_core_Rive_cppInitialize(_JNIEnv *param_1,_jobject *param_2)

{
  rive_android::SetSDKVersion();
  rive_android::InitializeRiveLog();
  rive_android::RiveLogD("RiveN/Init","Initializing global class loader");
  rive_android::InitJNIClassLoader(param_1,param_2);
  rive_android::RiveLogD("RiveN/Init","Initializing fallback font global callback");
  *(undefined **)PTR_gFallbackProc_0067cb60 = PTR_FindFontFallback_0067cb68;
  return;
}


// ===== 0032b2b0  rive_android::DimensionsHelper::~DimensionsHelper =====

/* rive_android::DimensionsHelper::~DimensionsHelper() */

void __thiscall rive_android::DimensionsHelper::~DimensionsHelper(DimensionsHelper *this)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0032b2b4  rive_android::DimensionsHelper::save =====

/* rive_android::DimensionsHelper::save() */

void rive_android::DimensionsHelper::save(void)

{
  return;
}


// ===== 0032b2b8  rive_android::DimensionsHelper::restore =====

/* rive_android::DimensionsHelper::restore() */

void rive_android::DimensionsHelper::restore(void)

{
  return;
}


// ===== 0032b2bc  rive_android::DimensionsHelper::transform =====

/* rive_android::DimensionsHelper::transform(rive::Mat2D const&) */

void __thiscall rive_android::DimensionsHelper::transform(DimensionsHelper *this,Mat2D *param_1)

{
  *(undefined4 *)(this + 0x10) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0xc);
  return;
}


// ===== 0032b2d0  rive_android::DimensionsHelper::drawPath =====

/* rive_android::DimensionsHelper::drawPath(rive::RenderPath*, rive::RenderPaint*) */

void rive_android::DimensionsHelper::drawPath(RenderPath *param_1,RenderPaint *param_2)

{
  return;
}


// ===== 0032b2d4  rive_android::DimensionsHelper::clipPath =====

/* rive_android::DimensionsHelper::clipPath(rive::RenderPath*) */

void rive_android::DimensionsHelper::clipPath(RenderPath *param_1)

{
  return;
}


// ===== 0032b2d8  rive_android::DimensionsHelper::drawImage =====

/* rive_android::DimensionsHelper::drawImage(rive::RenderImage const*, rive::ImageSampler,
   rive::BlendMode, float) */

void rive_android::DimensionsHelper::drawImage(void)

{
  return;
}


// ===== 0032b2dc  rive_android::DimensionsHelper::drawImageMesh =====

/* rive_android::DimensionsHelper::drawImageMesh(rive::RenderImage const*, rive::ImageSampler,
   rive::rcp<rive::RenderBuffer>, rive::rcp<rive::RenderBuffer>, rive::rcp<rive::RenderBuffer>,
   unsigned int, unsigned int, rive::BlendMode, float) */

void rive_android::DimensionsHelper::drawImageMesh(void)

{
  return;
}


// ===== 0032b2e0  rive_android::DimensionsHelper::modulateOpacity =====

/* rive_android::DimensionsHelper::modulateOpacity(float) */

void rive_android::DimensionsHelper::modulateOpacity(float param_1)

{
  return;
}


// ===== 0032b2e4  Java_app_rive_runtime_kotlin_core_LayerState_cppIsExitState =====

uint Java_app_rive_runtime_kotlin_core_LayerState_cppIsExitState
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x18))(param_3,0x40);
  return uVar1 & 1;
}


// ===== 0032b30c  Java_app_rive_runtime_kotlin_core_LayerState_cppIsAnyState =====

uint Java_app_rive_runtime_kotlin_core_LayerState_cppIsAnyState
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x18))(param_3,0x3e);
  return uVar1 & 1;
}


// ===== 0032b334  Java_app_rive_runtime_kotlin_core_LayerState_cppIsEntryState =====

uint Java_app_rive_runtime_kotlin_core_LayerState_cppIsEntryState
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x18))(param_3,0x3f);
  return uVar1 & 1;
}


// ===== 0032b35c  Java_app_rive_runtime_kotlin_core_LayerState_cppIsAnimationState =====

uint Java_app_rive_runtime_kotlin_core_LayerState_cppIsAnimationState
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x18))(param_3,0x3d);
  return uVar1 & 1;
}


// ===== 0032b384  Java_app_rive_runtime_kotlin_core_LayerState_cppIsBlendState =====

uint Java_app_rive_runtime_kotlin_core_LayerState_cppIsBlendState
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x18))(param_3,0x48);
  return uVar1 & 1;
}


// ===== 0032b3ac  Java_app_rive_runtime_kotlin_core_LayerState_cppIsBlendState1D =====

uint Java_app_rive_runtime_kotlin_core_LayerState_cppIsBlendState1D
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x18))(param_3,0x20f);
  return uVar1 & 1;
}


// ===== 0032b3d4  Java_app_rive_runtime_kotlin_core_LayerState_cppIsBlendStateDirect =====

uint Java_app_rive_runtime_kotlin_core_LayerState_cppIsBlendStateDirect
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x18))(param_3,0x49);
  return uVar1 & 1;
}


// ===== 0032b3fc  Java_app_rive_runtime_kotlin_core_AnimationState_cppName =====

void Java_app_rive_runtime_kotlin_core_AnimationState_cppName
               (long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + 0x68);
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x11;
    if ((*(byte *)(lVar2 + 0x10) & 1) != 0) {
      lVar1 = *(long *)(lVar2 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x0032b420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x538))(param_1,lVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0032b434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1,"Unknown");
  return;
}


// ===== 0032b438  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppAdvance =====

undefined8
Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppAdvance
          (float param_1,long *param_2,undefined8 param_3,LinearAnimationInstance *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  rive::LinearAnimationInstance::advance(param_4,param_1,(KeyedCallbackReporter *)0x0);
  if (param_4[0x58] == (LinearAnimationInstance)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (**(code **)(*(long *)param_4 + 0x20))(param_4);
    if (iVar1 == 2) {
      uVar2 = rive_android::GetPingPongLoopField();
    }
    else if (iVar1 == 1) {
      uVar2 = rive_android::GetLoopLoopField();
    }
    else if (iVar1 == 0) {
      uVar2 = rive_android::GetOneShotLoopField();
    }
    else {
      uVar2 = rive_android::GetNoneLoopField();
    }
    uVar3 = rive_android::GetLoopClass();
    uVar2 = (**(code **)(*param_2 + 0x488))(param_2,uVar3,uVar2);
    (**(code **)(*param_2 + 0xb8))(param_2,uVar3);
  }
  return uVar2;
}


// ===== 0032b4fc  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppAdvanceAndGetResult =====

undefined8
Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppAdvanceAndGetResult
          (float param_1,long *param_2,undefined8 param_3,LinearAnimationInstance *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = rive::LinearAnimationInstance::advance(param_4,param_1,(KeyedCallbackReporter *)0x0);
  if (param_4[0x58] == (LinearAnimationInstance)0x0) {
    if ((uVar2 & 1) != 0) {
      uVar3 = rive_android::GetAdvanceResultAdvancedField();
      goto LAB_0032b574;
    }
  }
  else {
    iVar1 = (**(code **)(*(long *)param_4 + 0x20))(param_4);
    if (iVar1 == 2) {
      uVar3 = rive_android::GetAdvanceResultPingPongField();
      goto LAB_0032b574;
    }
    if (iVar1 == 1) {
      uVar3 = rive_android::GetAdvanceResultLoopField();
      goto LAB_0032b574;
    }
    if (iVar1 == 0) {
      uVar3 = rive_android::GetAdvanceResultOneShotField();
      goto LAB_0032b574;
    }
  }
  uVar3 = rive_android::GetAdvanceResultNoneField();
LAB_0032b574:
  uVar4 = rive_android::GetAdvanceResultClass();
  uVar3 = (**(code **)(*param_2 + 0x488))(param_2,uVar4,uVar3);
  (**(code **)(*param_2 + 0xb8))(param_2,uVar4);
  return uVar3;
}


// ===== 0032b5c4  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppApply =====

void Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppApply
               (float param_1,undefined8 param_2,undefined8 param_3,LinearAnimationInstance *param_4
               )

{
  rive::LinearAnimation::apply
            (*(LinearAnimation **)(param_4 + 0x38),*(Artboard **)(param_4 + 0x10),
             *(float *)(param_4 + 0x40),param_1,param_4);
  return;
}


// ===== 0032b5e0  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppGetTime =====

undefined4
Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppGetTime
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(undefined4 *)(param_3 + 0x40);
}


// ===== 0032b5e8  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppSetTime =====

void Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppSetTime
               (float param_1,undefined8 param_2,undefined8 param_3,LinearAnimationInstance *param_4
               )

{
  rive::LinearAnimationInstance::time(param_4,param_1);
  return;
}


// ===== 0032b5f0  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppSetDirection =====

void Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppSetDirection
               (undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if (param_4 < 1) {
    uVar1 = 0xbf800000;
  }
  *(undefined4 *)(param_3 + 0x54) = uVar1;
  return;
}


// ===== 0032b608  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppGetDirection =====

int Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppGetDirection
              (undefined8 param_1,undefined8 param_2,long param_3)

{
  return (int)*(float *)(param_3 + 0x54);
}


// ===== 0032b614  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppGetLoop =====

void Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppGetLoop
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0032b620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x20))(param_3);
  return;
}


// ===== 0032b624  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppSetLoop =====

void Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppSetLoop
               (undefined8 param_1,undefined8 param_2,LinearAnimationInstance *param_3,int param_4)

{
  rive::LinearAnimationInstance::loopValue(param_3,param_4);
  return;
}


// ===== 0032b630  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppName =====

void Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppName
               (long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + 0x38);
  lVar1 = lVar2 + 0x11;
  if ((*(byte *)(lVar2 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(lVar2 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0032b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1,lVar1);
  return;
}


// ===== 0032b654  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppDuration =====

undefined4
Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppDuration
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(undefined4 *)(*(long *)(param_3 + 0x38) + 0x2c);
}


// ===== 0032b660  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppFps =====

undefined4
Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppFps
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(undefined4 *)(*(long *)(param_3 + 0x38) + 0x28);
}


// ===== 0032b66c  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppWorkStart =====

undefined4
Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppWorkStart
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(undefined4 *)(*(long *)(param_3 + 0x38) + 0x38);
}


// ===== 0032b678  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppWorkEnd =====

undefined4
Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppWorkEnd
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(undefined4 *)(*(long *)(param_3 + 0x38) + 0x3c);
}


// ===== 0032b684  Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppDelete =====

void Java_app_rive_runtime_kotlin_core_LinearAnimationInstance_cppDelete
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0032b694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}


// ===== 0032b69c  Java_app_rive_core_RenderContextGL_cppConstructor =====

RenderContextGL *
Java_app_rive_core_RenderContextGL_cppConstructor
          (undefined8 param_1,undefined8 param_2,void *param_3,void *param_4)

{
  RenderContextGL *this;
  
  this = (RenderContextGL *)operator_new(0x28);
  rive_android::RenderContextGL::RenderContextGL(this,param_3,param_4);
  return this;
}


// ===== 0032b6e0  rive_android::RenderContextGL::RenderContextGL =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive_android::RenderContextGL::RenderContextGL(void*, void*) */

void __thiscall
rive_android::RenderContextGL::RenderContextGL(RenderContextGL *this,void *param_1,void *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [12];
  byte local_90 [16];
  void *local_80;
  int local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined **)this = PTR_vtable_0067cb70 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(void **)(this + 0x10) = param_1;
  *(void **)(this + 0x18) = param_2;
  RiveLogD("RiveN/RenderContext","Creating 1x1 PBuffer surface for EGL context");
  local_64 = 0;
  eglQueryContext(param_1,param_2,0x3028,&local_64);
  local_44 = 0x3028;
  uStack_40 = local_64;
  local_74 = 0;
  local_3c = 0x3038;
  eglChooseConfig(param_1,&local_44,&local_70,1,&local_74);
  if (local_74 == 1) {
    local_50 = 0x3038;
    uStack_58 = _UNK_0024e988;
    local_60 = _DAT_0024e980;
    lVar3 = eglCreatePbufferSurface(param_1,local_70,&local_60);
    if (lVar3 == 0) {
      auVar4 = eglGetError();
      EGLErrorString(auVar4._0_8_,auVar4._8_4_);
      pvVar1 = (void *)((ulong)local_90 | 1);
      if ((local_90[0] & 1) != 0) {
        pvVar1 = local_80;
      }
      RiveLogE("RiveN/RenderContext","Failed to create PBuffer surface. Error: %s",pvVar1);
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
    }
    else {
      RiveLogD("RiveN/RenderContext","Successfully created PBuffer surface");
    }
  }
  else {
    RiveLogE("RiveN/RenderContext","Failed to choose EGL config for PBuffer surface");
    lVar3 = 0;
  }
  *(long *)(this + 0x20) = lVar3;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032b85c  Java_app_rive_core_RenderContextGL_cppDelete =====

void Java_app_rive_core_RenderContextGL_cppDelete
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0032b86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}


// ===== 0032b874  Java_app_rive_core_RenderContextGL_cppCreateRiveRenderTarget =====

void Java_app_rive_core_RenderContextGL_cppCreateRiveRenderTarget
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(0x10);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(puVar1 + 2) = 0;
  return;
}


// ===== 0032b8a4  Java_app_rive_core_RenderContextGL_cppDeleteRiveRenderTarget =====

void Java_app_rive_core_RenderContextGL_cppDeleteRiveRenderTarget
               (undefined8 param_1,undefined8 param_2,void *param_3)

{
  int iVar1;
  long *plVar2;
  
  if (param_3 != (void *)0x0) {
    plVar2 = *(long **)((long)param_3 + 8);
    *(undefined8 *)((long)param_3 + 8) = 0;
    if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    operator_delete(param_3);
    return;
  }
  return;
}


// ===== 0032b8fc  Java_app_rive_core_RiveSurface_cppDeleteRenderTarget =====

void Java_app_rive_core_RiveSurface_cppDeleteRenderTarget
               (undefined8 param_1,undefined8 param_2,void *param_3)

{
  int iVar1;
  long *plVar2;
  
  if (param_3 != (void *)0x0) {
    plVar2 = *(long **)((long)param_3 + 8);
    *(undefined8 *)((long)param_3 + 8) = 0;
    if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    operator_delete(param_3);
    return;
  }
  return;
}


// ===== 0032b954  rive_android::RenderContext::~RenderContext =====

/* rive_android::RenderContext::~RenderContext() */

void __thiscall rive_android::RenderContext::~RenderContext(RenderContext *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  *(undefined **)this = PTR_vtable_0067cb78 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0032b978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 0032b980  rive_android::RenderContextGL::~RenderContextGL =====

/* rive_android::RenderContextGL::~RenderContextGL() */

void __thiscall rive_android::RenderContextGL::~RenderContextGL(RenderContextGL *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  *(undefined **)this = PTR_vtable_0067cb78 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  operator_delete(this);
  return;
}


// ===== 0032b9c8  rive_android::RenderContextGL::initialize =====

/* WARNING: Removing unreachable block (ram,0x0032ba70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive_android::RenderContextGL::initialize() */

void rive_android::RenderContextGL::initialize(void)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 uVar11;
  long in_x0;
  long *plVar12;
  char *pcVar13;
  ContextOptions *extraout_x1;
  undefined1 *in_x8;
  char *pcVar14;
  undefined1 auVar15 [12];
  long local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(in_x0 + 0x20) == 0) {
    uVar11 = eglGetError();
    auVar15 = eglGetError();
    EGLErrorString(auVar15._0_8_,auVar15._8_4_);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    RiveLogE("RiveN/RenderContext","Failed to create PBuffer surface. Error: %s",pvVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    *in_x8 = 0;
    *(undefined4 *)(in_x8 + 4) = uVar11;
    pcVar13 = (char *)operator_new(0x30);
    uVar8 = _UNK_0024e0e8;
    uVar7 = _DAT_0024e0e0;
    uVar6 = s_Failed_to_create_PBuffer_surface_0024200c._24_8_;
    uVar5 = s_Failed_to_create_PBuffer_surface_0024200c._16_8_;
    uVar4 = s_Failed_to_create_PBuffer_surface_0024200c._8_8_;
    uVar3 = s_Failed_to_create_PBuffer_surface_0024200c._0_8_;
    *(char **)(in_x8 + 0x18) = pcVar13;
    pcVar14 = pcVar13 + 0x20;
    *(undefined8 *)(in_x8 + 0x10) = uVar8;
    *(undefined8 *)(in_x8 + 8) = uVar7;
    *(undefined8 *)(pcVar13 + 8) = uVar4;
    *(undefined8 *)pcVar13 = uVar3;
    *(undefined8 *)(pcVar13 + 0x18) = uVar6;
    *(undefined8 *)(pcVar13 + 0x10) = uVar5;
  }
  else {
    RiveLogD("RiveN/RenderContext","Making EGL context current with PBuffer surface");
    iVar10 = eglMakeCurrent(*(undefined8 *)(in_x0 + 0x10),*(undefined8 *)(in_x0 + 0x20),
                            *(undefined8 *)(in_x0 + 0x20),*(undefined8 *)(in_x0 + 0x18));
    if (iVar10 == 0) {
      uVar11 = eglGetError();
      auVar15 = eglGetError();
      EGLErrorString(auVar15._0_8_,auVar15._8_4_);
      pvVar1 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pvVar1 = local_40;
      }
      RiveLogE("RiveN/RenderContext","Failed to make EGL context current. Error: %s",pvVar1);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      *in_x8 = 0;
      *(undefined4 *)(in_x8 + 4) = uVar11;
      pcVar13 = (char *)operator_new(0x30);
      *(char **)(in_x8 + 0x18) = pcVar13;
      uVar8 = _UNK_0024e038;
      uVar7 = _DAT_0024e030;
      uVar6 = s_Failed_to_make_EGL_context_curre_00249cac._24_8_;
      uVar5 = s_Failed_to_make_EGL_context_curre_00249cac._16_8_;
      uVar4 = s_Failed_to_make_EGL_context_curre_00249cac._8_8_;
      uVar3 = s_Failed_to_make_EGL_context_curre_00249cac._0_8_;
      pcVar13[0x20] = 'n';
      pcVar13[0x21] = 't';
      *(undefined8 *)(in_x8 + 0x10) = uVar8;
      *(undefined8 *)(in_x8 + 8) = uVar7;
      pcVar14 = pcVar13 + 0x22;
      *(undefined8 *)(pcVar13 + 8) = uVar4;
      *(undefined8 *)pcVar13 = uVar3;
      *(undefined8 *)(pcVar13 + 0x18) = uVar6;
      *(undefined8 *)(pcVar13 + 0x10) = uVar5;
    }
    else {
      RiveLogD("RiveN/RenderContext","Creating Rive RenderContextGL");
      local_50[0] = 0;
      rive::gpu::RenderContextGLImpl::MakeContext((RenderContextGLImpl *)local_50,extraout_x1);
      plVar12 = *(long **)(in_x0 + 8);
      *(long *)(in_x0 + 8) = local_58;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 8))();
        local_58 = *(long *)(in_x0 + 8);
      }
      if (local_58 == 0) {
        uVar11 = eglGetError();
        auVar15 = eglGetError();
        EGLErrorString(auVar15._0_8_,auVar15._8_4_);
        pvVar1 = (void *)((ulong)local_50 | 1);
        if ((local_50[0] & 1) != 0) {
          pvVar1 = local_40;
        }
        RiveLogE("RiveN/RenderContext","Failed to create Rive RenderContextGL. Error: %s",pvVar1);
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        *in_x8 = 0;
        *(undefined4 *)(in_x8 + 4) = uVar11;
        pcVar13 = (char *)operator_new(0x30);
        uVar9 = _UNK_0024e0d8;
        uVar8 = _DAT_0024e0d0;
        uVar7 = s_Failed_to_create_Rive_RenderCont_0024477f._16_8_;
        uVar6 = s_Failed_to_create_Rive_RenderCont_0024477f._8_8_;
        uVar5 = s_Failed_to_create_Rive_RenderCont_0024477f._0_8_;
        uVar3 = CONCAT35(s_Failed_to_create_Rive_RenderCont_0024477f._29_3_,
                         s_Failed_to_create_Rive_RenderCont_0024477f._24_5_);
        uVar4 = CONCAT53(s_Failed_to_create_Rive_RenderCont_0024477f._32_5_,
                         s_Failed_to_create_Rive_RenderCont_0024477f._29_3_);
        *(char **)(in_x8 + 0x18) = pcVar13;
        pcVar14 = pcVar13 + 0x25;
        *(undefined8 *)(in_x8 + 0x10) = uVar9;
        *(undefined8 *)(in_x8 + 8) = uVar8;
        *(undefined8 *)(pcVar13 + 8) = uVar6;
        *(undefined8 *)pcVar13 = uVar5;
        *(undefined8 *)(pcVar13 + 0x18) = uVar3;
        *(undefined8 *)(pcVar13 + 0x10) = uVar7;
        *(undefined8 *)(pcVar13 + 0x1d) = uVar4;
      }
      else {
        *in_x8 = 1;
        *(undefined4 *)(in_x8 + 4) = 0x3000;
        pcVar13 = (char *)operator_new(0x30);
        uVar9 = _UNK_0024e458;
        uVar8 = _DAT_0024e450;
        uVar7 = s_RenderContextGL_initialized_succ_00244f35._32_8_;
        uVar6 = s_RenderContextGL_initialized_succ_00244f35._24_8_;
        uVar5 = s_RenderContextGL_initialized_succ_00244f35._16_8_;
        uVar4 = s_RenderContextGL_initialized_succ_00244f35._8_8_;
        uVar3 = s_RenderContextGL_initialized_succ_00244f35._0_8_;
        pcVar14 = pcVar13 + 0x28;
        *(char **)(in_x8 + 0x18) = pcVar13;
        *(undefined8 *)(in_x8 + 0x10) = uVar9;
        *(undefined8 *)(in_x8 + 8) = uVar8;
        *(undefined8 *)(pcVar13 + 8) = uVar4;
        *(undefined8 *)pcVar13 = uVar3;
        *(undefined8 *)(pcVar13 + 0x18) = uVar6;
        *(undefined8 *)(pcVar13 + 0x10) = uVar5;
        *(undefined8 *)(pcVar13 + 0x20) = uVar7;
      }
    }
  }
  *pcVar14 = '\0';
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0032bc9c  rive_android::RenderContextGL::destroy =====

/* rive_android::RenderContextGL::destroy() */

void __thiscall rive_android::RenderContextGL::destroy(RenderContextGL *this)

{
  void *pvVar1;
  long lVar2;
  undefined1 auVar3 [12];
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  RiveLogD("RiveN/RenderContext","Releasing EGL context and surface bindings");
  eglMakeCurrent(*(undefined8 *)(this + 0x10),0,0,0);
  if (*(long *)(this + 0x20) != 0) {
    RiveLogD("RiveN/RenderContext","Destroying PBuffer surface");
    eglDestroySurface(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20));
    *(undefined8 *)(this + 0x20) = 0;
    auVar3 = eglGetError();
    if (auVar3._0_4_ != 0x3000) {
      EGLErrorString(auVar3._0_8_,auVar3._8_4_);
      pvVar1 = (void *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        pvVar1 = local_30;
      }
      RiveLogE("RiveN/RenderContext","Failed to destroy PBuffer surface. Error: %s",pvVar1);
      if ((local_40[0] & 1) != 0) {
        operator_delete(local_30);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032bd84  rive_android::RenderContextGL::makeImage =====

/* rive_android::RenderContextGL::makeImage(unsigned int, unsigned int,
   std::__ndk1::unique_ptr<unsigned char const [], std::__ndk1::default_delete<unsigned char const
   []> >) */

void rive_android::RenderContextGL::makeImage
               (undefined8 *param_1,long param_2_00,uint param_2,uint param_4,undefined8 *param_5)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  RenderImage *this;
  undefined8 uVar5;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  RiveLogD("RiveN/RenderContext","Creating RiveRenderImage");
  plVar4 = *(long **)(*(long *)(param_2_00 + 8) + 8);
  (**(code **)(*plVar4 + 0x20))
            (&local_60,plVar4,param_2,param_4,0x20 - (int)LZCOUNT(param_4 | param_2),0,*param_5);
  this = (RenderImage *)operator_new(0x38);
  plVar4 = local_60;
  if (local_60 != (long *)0x0) {
    FUN_00340fb0(1,local_60 + 1);
  }
  uVar5 = *(undefined8 *)((long)plVar4 + 0xc);
  rive::RenderImage::RenderImage(this);
  puVar2 = PTR_vtable_0067cb80;
  *(long **)(this + 0x30) = plVar4;
  *(undefined8 *)(this + 0x10) = uVar5;
  *(undefined4 *)(this + 0xc) = 0xd59c2a46;
  *(undefined **)this = puVar2 + 0x10;
  *param_1 = this;
  if ((local_60 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_60 + 1), iVar3 == 1)) {
    (**(code **)(*local_60 + 8))(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032bec8  rive_android::RenderContextGL::beginFrame =====

/* rive_android::RenderContextGL::beginFrame(void*) */

void __thiscall rive_android::RenderContextGL::beginFrame(RenderContextGL *this,void *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined1 auVar4 [12];
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar3 = eglMakeCurrent(*(undefined8 *)(this + 0x10),param_1,param_1,*(undefined8 *)(this + 0x18));
  if (iVar3 == 0) {
    auVar4 = eglGetError();
    EGLErrorString(auVar4._0_8_,auVar4._8_4_);
    pvVar1 = (void *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      pvVar1 = local_30;
    }
    RiveLogE("RiveN/RenderContext","Failed to make EGL context current in beginFrame. Error: %s",
             pvVar1);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032bf64  rive_android::RenderContextGL::present =====

/* rive_android::RenderContextGL::present(void*) */

void rive_android::RenderContextGL::present(void *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined1 auVar4 [12];
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar3 = eglSwapBuffers(*(undefined8 *)((long)param_1 + 0x10));
  if (iVar3 == 0) {
    auVar4 = eglGetError();
    EGLErrorString(auVar4._0_8_,auVar4._8_4_);
    pvVar1 = (void *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      pvVar1 = local_30;
    }
    RiveLogE("RiveN/RenderContext","Failed to swap EGL buffers in present. Error: %s",pvVar1);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032bff8  rive_android::RenderContext::~RenderContext =====

/* rive_android::RenderContext::~RenderContext() */

void __thiscall rive_android::RenderContext::~RenderContext(RenderContext *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x32bffc);
  (*pcVar1)();
}


// ===== 0032bffc  rive_android::EGLErrorString =====

/* rive_android::EGLErrorString(int) */

void __thiscall rive_android::EGLErrorString(rive_android *this,int param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  undefined8 in_x2;
  undefined8 in_x3;
  char *pcVar5;
  long *in_x8;
  undefined1 *puVar6;
  void *pvVar7;
  char acStack_88 [64];
  long local_48;
  
  lVar2 = tpidr_el0;
  uVar1 = (int)this - 0x3000;
  local_48 = *(long *)(lVar2 + 0x28);
  if (uVar1 < 0xf) {
    pcVar5 = (&PTR_s_EGL_SUCCESS_006519c0)[uVar1];
  }
  else {
    pcVar5 = "EGL_UNKNOWN";
  }
  iVar3 = FUN_0032c16c(acStack_88,param_1,in_x2,in_x3,pcVar5,(ulong)this & 0xffffffff);
  if (iVar3 < 0) {
    if (uVar1 < 0xf) {
      pcVar5 = (&PTR_s_EGL_SUCCESS_006519c0)[uVar1];
    }
    else {
      pcVar5 = "EGL_UNKNOWN";
    }
    sVar4 = strlen(pcVar5);
    if (0xffffffffffffffef < sVar4) goto LAB_0032c160;
    if (sVar4 < 0x17) {
      pvVar7 = (void *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)sVar4 << 1);
      if (sVar4 != 0) goto LAB_0032c120;
    }
    else {
      pvVar7 = operator_new((sVar4 | 0xf) + 1);
      in_x8[1] = sVar4;
      in_x8[2] = (long)pvVar7;
      *in_x8 = (sVar4 | 0xf) + 2;
LAB_0032c120:
      memcpy(pvVar7,pcVar5,sVar4);
    }
    puVar6 = (undefined1 *)((long)pvVar7 + sVar4);
    goto LAB_0032c134;
  }
  sVar4 = strlen(acStack_88);
  if (0xffffffffffffffef < sVar4) {
LAB_0032c160:
                    /* WARNING: Subroutine does not return */
    FUN_0031faf0();
  }
  if (sVar4 < 0x17) {
    pvVar7 = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)sVar4 << 1);
    if (sVar4 != 0) goto LAB_0032c0b8;
  }
  else {
    pvVar7 = operator_new((sVar4 | 0xf) + 1);
    in_x8[1] = sVar4;
    in_x8[2] = (long)pvVar7;
    *in_x8 = (sVar4 | 0xf) + 2;
LAB_0032c0b8:
    memcpy(pvVar7,acStack_88,sVar4);
  }
  puVar6 = (undefined1 *)((long)pvVar7 + sVar4);
LAB_0032c134:
  *puVar6 = 0;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0032c16c  FUN_0032c16c =====

void FUN_0032c16c(char *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  puStack_60 = &local_90;
  uStack_58 = 0xffffff80ffffffe0;
  local_90 = in_x4;
  uStack_88 = in_x5;
  local_80 = in_x6;
  uStack_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  iVar2 = vsnprintf(param_1,0x40,"%s (0x%04x)",&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 0032c208  rive::RiveRenderImage::~RiveRenderImage =====

/* rive::RiveRenderImage::~RiveRenderImage() */

void __thiscall rive::RiveRenderImage::~RiveRenderImage(RiveRenderImage *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x30);
  *(undefined **)this = PTR_vtable_0067cb80 + 0x10;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  RenderImage::~RenderImage((RenderImage *)this);
  return;
}


// ===== 0032c264  rive::RiveRenderImage::~RiveRenderImage =====

/* rive::RiveRenderImage::~RiveRenderImage() */

void __thiscall rive::RiveRenderImage::~RiveRenderImage(RiveRenderImage *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x30);
  *(undefined **)this = PTR_vtable_0067cb80 + 0x10;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  RenderImage::~RenderImage((RenderImage *)this);
  operator_delete(this);
  return;
}


