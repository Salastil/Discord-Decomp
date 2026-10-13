// ===== 0032c2c8  Java_app_rive_runtime_kotlin_renderers_Renderer_constructor =====

JNIRenderer *
Java_app_rive_runtime_kotlin_renderers_Renderer_constructor
          (_JNIEnv *param_1,_jobject *param_2,char param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  JNIRenderer *pJVar3;
  _jmethodID *p_Var4;
  long lVar5;
  long local_58;
  long *local_50;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  pJVar3 = (JNIRenderer *)operator_new(0x78);
  rive_android::JNIRenderer::JNIRenderer(pJVar3,param_2,param_3 != '\0',param_4);
  uVar1 = *(uint *)(*(long *)(pJVar3 + 0x20) + 8);
  if (uVar1 != param_4) {
    rive_android::GetObjectClass(param_1,param_2);
    p_Var4 = (_jmethodID *)
             (**(code **)(*(long *)param_1 + 0x108))
                       (param_1,local_58,"setRendererType",&DAT_00249cea);
    rive_android::JNIExceptionHandler::CallVoidMethod(param_1,param_2,p_Var4,(ulong)uVar1);
    if (local_58 != 0) {
      (**(code **)(*local_50 + 0xb8))();
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return pJVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032c3bc  Java_app_rive_runtime_kotlin_renderers_Renderer_cppDelete =====

void Java_app_rive_runtime_kotlin_renderers_Renderer_cppDelete
               (undefined8 param_1,undefined8 param_2,JNIRenderer *param_3)

{
  rive_android::JNIRenderer::scheduleDispose(param_3);
  return;
}


// ===== 0032c3c4  Java_app_rive_runtime_kotlin_renderers_Renderer_cppStop =====

void Java_app_rive_runtime_kotlin_renderers_Renderer_cppStop
               (undefined8 param_1,undefined8 param_2,JNIRenderer *param_3)

{
  rive_android::JNIRenderer::stop(param_3);
  return;
}


// ===== 0032c3cc  Java_app_rive_runtime_kotlin_renderers_Renderer_cppStart =====

void Java_app_rive_runtime_kotlin_renderers_Renderer_cppStart
               (undefined8 param_1,undefined8 param_2,JNIRenderer *param_3)

{
  rive_android::JNIRenderer::start(param_3);
  return;
}


// ===== 0032c3d4  Java_app_rive_runtime_kotlin_renderers_Renderer_cppDoFrame =====

void Java_app_rive_runtime_kotlin_renderers_Renderer_cppDoFrame
               (undefined8 param_1,undefined8 param_2,JNIRenderer *param_3)

{
  rive_android::JNIRenderer::doFrame(param_3);
  return;
}


// ===== 0032c3dc  Java_app_rive_runtime_kotlin_renderers_Renderer_cppSetSurface =====

void Java_app_rive_runtime_kotlin_renderers_Renderer_cppSetSurface
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (*(int *)(*(long *)(param_4 + 0x20) + 8) == 1) {
    rive_android::JNIRenderer::setSurface(param_4,param_3,2);
    return;
  }
  lVar1 = ANativeWindow_fromSurface(param_1,param_3);
  rive_android::JNIRenderer::setSurface(param_4,lVar1,1);
  if (lVar1 != 0) {
    rive_android::RiveLogD
              ("RiveLN/Renderer","Releasing ANativeWindow handle after passing to JNIRenderer.");
    ANativeWindow_release(lVar1);
    return;
  }
  return;
}


// ===== 0032c460  Java_app_rive_runtime_kotlin_renderers_Renderer_cppDestroySurface =====

void Java_app_rive_runtime_kotlin_renderers_Renderer_cppDestroySurface
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  rive_android::JNIRenderer::setSurface(param_3,param_2,0);
  return;
}


// ===== 0032c46c  Java_app_rive_runtime_kotlin_renderers_Renderer_cppSave =====

void Java_app_rive_runtime_kotlin_renderers_Renderer_cppSave
               (undefined8 param_1,undefined8 param_2,JNIRenderer *param_3)

{
  long *plVar1;
  
  plVar1 = (long *)rive_android::JNIRenderer::getRendererOnWorkerThread(param_3);
                    /* WARNING: Could not recover jumptable at 0x0032c488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))();
  return;
}


// ===== 0032c48c  Java_app_rive_runtime_kotlin_renderers_Renderer_cppRestore =====

void Java_app_rive_runtime_kotlin_renderers_Renderer_cppRestore
               (undefined8 param_1,undefined8 param_2,JNIRenderer *param_3)

{
  long *plVar1;
  
  plVar1 = (long *)rive_android::JNIRenderer::getRendererOnWorkerThread(param_3);
                    /* WARNING: Could not recover jumptable at 0x0032c4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


// ===== 0032c4ac  Java_app_rive_runtime_kotlin_renderers_Renderer_cppAlign =====

void Java_app_rive_runtime_kotlin_renderers_Renderer_cppAlign
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               _JNIEnv *param_5,undefined8 param_6,JNIRenderer *param_7,_jobject *param_8,
               _jobject *param_9,_jobject *param_10,_jobject *param_11)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = rive_android::GetFit(param_5,param_8);
  uVar4 = rive_android::GetAlignment(param_5,param_9);
  uVar5 = param_2;
  local_90 = rive_android::RectFToAABB(param_5,param_10);
  uStack_8c = uVar5;
  local_88 = param_3;
  uStack_84 = param_4;
  local_a0 = rive_android::RectFToAABB(param_5,param_11);
  uStack_9c = uVar5;
  local_98 = param_3;
  uStack_94 = param_4;
  plVar3 = (long *)rive_android::JNIRenderer::getRendererOnWorkerThread(param_7);
  rive::computeAlignment(auStack_80,uVar4,param_2,param_1,uVar2,&local_90,&local_a0);
  (**(code **)(*plVar3 + 0x20))(plVar3,auStack_80);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032c5b4  Java_app_rive_runtime_kotlin_renderers_Renderer_cppTransform =====

void Java_app_rive_runtime_kotlin_renderers_Renderer_cppTransform
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
               JNIRenderer *param_9)

{
  long lVar1;
  long *plVar2;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)rive_android::JNIRenderer::getRendererOnWorkerThread(param_9);
  local_70 = param_1;
  uStack_6c = param_2;
  local_68 = param_3;
  uStack_64 = param_4;
  local_60 = param_5;
  uStack_5c = param_6;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032c648  Java_app_rive_runtime_kotlin_renderers_Renderer_cppWidth =====

ulong Java_app_rive_runtime_kotlin_renderers_Renderer_cppWidth
                (undefined8 param_1,undefined8 param_2,JNIRenderer *param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(*(long *)(param_3 + 0x20) + 8) == 1) {
    uVar1 = 0xffffffff;
    if ((*(long *)(param_3 + 0x40) != 0) && (*(long *)(param_3 + 0x48) != 0)) {
      lVar2 = rive_android::JNIRenderer::getRendererOnWorkerThread(param_3);
      if (lVar2 == 0) {
        return 0xffffffff;
      }
      uVar1 = (ulong)*(uint *)(lVar2 + 0x10);
    }
    return uVar1;
  }
  if (*(int *)(param_3 + 0x38) != 1) {
    return 0xffffffff;
  }
  uVar1 = ANativeWindow_getWidth(*(undefined8 *)(param_3 + 0x30));
  return uVar1;
}


// ===== 0032c6b0  Java_app_rive_runtime_kotlin_renderers_Renderer_cppHeight =====

ulong Java_app_rive_runtime_kotlin_renderers_Renderer_cppHeight
                (undefined8 param_1,undefined8 param_2,JNIRenderer *param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(*(long *)(param_3 + 0x20) + 8) == 1) {
    lVar1 = rive_android::JNIRenderer::getRendererOnWorkerThread(param_3);
    if (lVar1 != 0) {
      return (ulong)*(uint *)(lVar1 + 0x14);
    }
  }
  else if (*(int *)(param_3 + 0x38) == 1) {
    uVar2 = ANativeWindow_getHeight(*(undefined8 *)(param_3 + 0x30));
    return uVar2;
  }
  return 0xffffffff;
}


// ===== 0032c704  Java_app_rive_runtime_kotlin_renderers_Renderer_cppAvgFps =====

undefined1  [16]
Java_app_rive_runtime_kotlin_renderers_Renderer_cppAvgFps
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_3 + 0x60) & 0xffffffff;
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0032c714  GetTargetValue =====

char * GetTargetValue(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0xd8) - 1;
  if (uVar1 < 3) {
    return (&PTR_s__parent_00651a38)[uVar1];
  }
  return "_blank";
}


// ===== 0032c740  GetProperties =====

_jobject * GetProperties(_jclass *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  short sVar4;
  undefined8 uVar5;
  _jmethodID *p_Var6;
  _jmethodID *p_Var7;
  _jobject *p_Var8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  float fVar13;
  
  uVar5 = rive_android::GetHashMapClass();
  p_Var6 = (_jmethodID *)
           (**(code **)(*(long *)param_1 + 0x108))
                     (param_1,uVar5,&DAT_00247a2e,
                      "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
  p_Var7 = (_jmethodID *)rive_android::GetHashMapClass();
  uVar5 = rive_android::GetHashMapConstructorId();
  p_Var8 = (_jobject *)_JNIEnv::NewObject(param_1,p_Var7,uVar5);
  if (param_2 != 0) {
    puVar2 = *(undefined8 **)(param_2 + 0x90);
    for (puVar12 = *(undefined8 **)(param_2 + 0x88); puVar12 != puVar2; puVar12 = puVar12 + 1) {
      plVar11 = (long *)*puVar12;
      uVar9 = (**(code **)(*plVar11 + 0x18))(plVar11,0xa7);
      if ((uVar9 & 1) != 0) {
        bVar3 = *(byte *)(plVar11 + 2);
        uVar9 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar9 = plVar11[3];
        }
        if (uVar9 != 0) {
          lVar1 = (long)plVar11 + 0x11;
          if ((bVar3 & 1) != 0) {
            lVar1 = plVar11[4];
          }
          uVar5 = (**(code **)(*(long *)param_1 + 0x538))(param_1,lVar1);
          sVar4 = (**(code **)(*plVar11 + 0x10))(plVar11);
          if (sVar4 == 0x7f) {
            fVar13 = *(float *)(plVar11 + 0x11);
            p_Var7 = (_jmethodID *)rive_android::GetFloatClass();
            uVar10 = rive_android::GetFloatConstructor();
            uVar10 = _JNIEnv::NewObject(param_1,p_Var7,(double)fVar13,uVar10);
LAB_0032c7e0:
            rive_android::JNIExceptionHandler::CallObjectMethod
                      ((_JNIEnv *)param_1,p_Var8,p_Var6,uVar5,uVar10);
            (**(code **)(*(long *)param_1 + 0xb8))(param_1,uVar10);
          }
          else {
            if (sVar4 == 0x82) {
              lVar1 = (long)plVar11 + 0x89;
              if ((*(byte *)(plVar11 + 0x11) & 1) != 0) {
                lVar1 = plVar11[0x13];
              }
              uVar10 = (**(code **)(*(long *)param_1 + 0x538))(param_1,lVar1);
              goto LAB_0032c7e0;
            }
            if (sVar4 == 0x81) {
              bVar3 = *(byte *)(plVar11 + 0x11);
              p_Var7 = (_jmethodID *)rive_android::GetBooleanClass();
              uVar10 = rive_android::GetBooleanConstructor();
              uVar10 = _JNIEnv::NewObject(param_1,p_Var7,uVar10,(ulong)bVar3);
              goto LAB_0032c7e0;
            }
          }
          (**(code **)(*(long *)param_1 + 0xb8))(param_1,uVar5);
        }
      }
    }
  }
  return p_Var8;
}


// ===== 0032c924  Java_app_rive_runtime_kotlin_core_RiveOpenURLEvent_cppURL =====

void Java_app_rive_runtime_kotlin_core_RiveOpenURLEvent_cppURL
               (long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = (**(code **)(*param_3 + 0x18))(param_3,0x83);
  if ((uVar1 & 1) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x538);
    puVar2 = &DAT_00243399;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x538);
    puVar2 = (undefined1 *)((long)param_3 + 0xc1);
    if ((*(byte *)(param_3 + 0x18) & 1) != 0) {
      puVar2 = (undefined1 *)param_3[0x1a];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0032c98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,puVar2);
  return;
}


// ===== 0032c990  Java_app_rive_runtime_kotlin_core_RiveOpenURLEvent_cppTarget =====

void Java_app_rive_runtime_kotlin_core_RiveOpenURLEvent_cppTarget
               (long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = (**(code **)(*param_3 + 0x18))(param_3,0x83);
  if (((uVar2 & 1) == 0) || (uVar1 = (int)param_3[0x1b] - 1, 2 < uVar1)) {
    pcVar3 = "_blank";
  }
  else {
    pcVar3 = (&PTR_s__parent_00651a38)[uVar1];
  }
                    /* WARNING: Could not recover jumptable at 0x0032c9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1,pcVar3);
  return;
}


// ===== 0032c9fc  Java_app_rive_runtime_kotlin_core_RiveEvent_cppName =====

void Java_app_rive_runtime_kotlin_core_RiveEvent_cppName
               (long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3 + 0x11;
  if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(param_3 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0032ca18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1,lVar1);
  return;
}


// ===== 0032ca1c  Java_app_rive_runtime_kotlin_core_RiveEvent_cppType =====

void Java_app_rive_runtime_kotlin_core_RiveEvent_cppType
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0032ca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3);
  return;
}


// ===== 0032ca2c  Java_app_rive_runtime_kotlin_core_RiveEvent_cppProperties =====

void Java_app_rive_runtime_kotlin_core_RiveEvent_cppProperties
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  GetProperties(param_1,param_3);
  return;
}


// ===== 0032ca34  Java_app_rive_runtime_kotlin_core_RiveEvent_cppData =====

_jobject *
Java_app_rive_runtime_kotlin_core_RiveEvent_cppData
          (_jclass *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  _jmethodID *p_Var3;
  undefined8 uVar4;
  _jmethodID *p_Var5;
  _jobject *p_Var6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  
  p_Var3 = (_jmethodID *)rive_android::GetHashMapClass();
  uVar4 = rive_android::GetHashMapConstructorId();
  p_Var5 = (_jmethodID *)
           (**(code **)(*(long *)param_1 + 0x108))
                     (param_1,p_Var3,&DAT_00247a2e,
                      "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
  p_Var6 = (_jobject *)_JNIEnv::NewObject(param_1,p_Var3,uVar4);
  if (param_3 != (long *)0x0) {
    uVar4 = (**(code **)(*(long *)param_1 + 0x538))(param_1,&DAT_0024a9e9);
    lVar1 = (long)param_3 + 0x11;
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      lVar1 = param_3[4];
    }
    uVar7 = (**(code **)(*(long *)param_1 + 0x538))(param_1,lVar1);
    rive_android::JNIExceptionHandler::CallObjectMethod
              ((_JNIEnv *)param_1,p_Var6,p_Var5,uVar4,uVar7);
    uVar8 = (**(code **)(*param_3 + 0x18))(param_3,0x83);
    if ((uVar8 & 1) != 0) {
      lVar1 = (long)param_3 + 0xc1;
      if ((*(byte *)(param_3 + 0x18) & 1) != 0) {
        lVar1 = param_3[0x1a];
      }
      p_Var3 = (_jmethodID *)rive_android::GetShortClass();
      uVar4 = rive_android::GetShortConstructor();
      uVar2 = (**(code **)(*param_3 + 0x10))(param_3);
      uVar4 = _JNIEnv::NewObject(param_1,p_Var3,uVar4,(ulong)(uVar2 & 0xffff));
      uVar7 = (**(code **)(*(long *)param_1 + 0x538))(param_1,&DAT_0024b138);
      rive_android::JNIExceptionHandler::CallObjectMethod
                ((_JNIEnv *)param_1,p_Var6,p_Var5,uVar7,uVar4);
      uVar4 = (**(code **)(*(long *)param_1 + 0x538))(param_1,&DAT_002401e5);
      uVar7 = (**(code **)(*(long *)param_1 + 0x538))(param_1,lVar1);
      rive_android::JNIExceptionHandler::CallObjectMethod
                ((_JNIEnv *)param_1,p_Var6,p_Var5,uVar4,uVar7);
      uVar2 = (int)param_3[0x1b] - 1;
      if (uVar2 < 3) {
        pcVar9 = (&PTR_s__parent_00651a38)[uVar2];
      }
      else {
        pcVar9 = "_blank";
      }
      uVar4 = (**(code **)(*(long *)param_1 + 0x538))(param_1,"target");
      uVar7 = (**(code **)(*(long *)param_1 + 0x538))(param_1,pcVar9);
      rive_android::JNIExceptionHandler::CallObjectMethod
                ((_JNIEnv *)param_1,p_Var6,p_Var5,uVar4,uVar7);
    }
    uVar4 = (**(code **)(*(long *)param_1 + 0x538))(param_1,"properties");
    uVar7 = GetProperties(param_1,param_3);
    rive_android::JNIExceptionHandler::CallObjectMethod
              ((_JNIEnv *)param_1,p_Var6,p_Var5,uVar4,uVar7);
  }
  return p_Var6;
}


// ===== 0032cca4  Java_app_rive_runtime_kotlin_RiveTextureView_cppGetAverageFps =====

undefined1  [16]
Java_app_rive_runtime_kotlin_RiveTextureView_cppGetAverageFps
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_3 + 0x60) & 0xffffffff;
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0032ccb4  Java_app_rive_runtime_kotlin_core_SMIInput_cppName =====

void Java_app_rive_runtime_kotlin_core_SMIInput_cppName
               (long *param_1,undefined8 param_2,SMIInput *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)rive::SMIInput::name(param_3);
  pbVar2 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbVar2 = pbVar1 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0032ccf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1,pbVar2);
  return;
}


// ===== 0032ccf4  Java_app_rive_runtime_kotlin_core_SMIInput_cppIsBoolean =====

uint Java_app_rive_runtime_kotlin_core_SMIInput_cppIsBoolean
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_3 + 0x10) + 0x18))(*(long **)(param_3 + 0x10),0x3b);
  return uVar1 & 1;
}


// ===== 0032cd1c  Java_app_rive_runtime_kotlin_core_SMIInput_cppIsNumber =====

uint Java_app_rive_runtime_kotlin_core_SMIInput_cppIsNumber
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_3 + 0x10) + 0x18))(*(long **)(param_3 + 0x10),0x38);
  return uVar1 & 1;
}


// ===== 0032cd44  Java_app_rive_runtime_kotlin_core_SMIInput_cppIsTrigger =====

uint Java_app_rive_runtime_kotlin_core_SMIInput_cppIsTrigger
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_3 + 0x10) + 0x18))(*(long **)(param_3 + 0x10),0x3a);
  return uVar1 & 1;
}


// ===== 0032cd6c  Java_app_rive_runtime_kotlin_core_SMIBoolean_cppValue =====

undefined1
Java_app_rive_runtime_kotlin_core_SMIBoolean_cppValue
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(undefined1 *)(param_3 + 0x18);
}


// ===== 0032cd74  Java_app_rive_runtime_kotlin_core_SMIBoolean_cppSetValue =====

void Java_app_rive_runtime_kotlin_core_SMIBoolean_cppSetValue
               (undefined8 param_1,undefined8 param_2,SMIBool *param_3,char param_4)

{
  rive::SMIBool::value(param_3,param_4 != '\0');
  return;
}


// ===== 0032cd84  Java_app_rive_runtime_kotlin_core_SMINumber_cppValue =====

undefined4
Java_app_rive_runtime_kotlin_core_SMINumber_cppValue
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  return *(undefined4 *)(param_3 + 0x18);
}


// ===== 0032cd8c  Java_app_rive_runtime_kotlin_core_SMINumber_cppSetValue =====

void Java_app_rive_runtime_kotlin_core_SMINumber_cppSetValue
               (float param_1,undefined8 param_2,undefined8 param_3,SMINumber *param_4)

{
  rive::SMINumber::value(param_4,param_1);
  return;
}


// ===== 0032cd94  Java_app_rive_runtime_kotlin_core_SMITrigger_cppFire =====

void Java_app_rive_runtime_kotlin_core_SMITrigger_cppFire
               (undefined8 param_1,undefined8 param_2,SMITrigger *param_3)

{
  rive::SMITrigger::fire(param_3);
  return;
}


// ===== 0032cd9c  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppAdvance =====

uint Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppAdvance
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x38))(param_3);
  return uVar1 & 1;
}


// ===== 0032cdc0  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppStateChangedCount =====

void Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppStateChangedCount
               (undefined8 param_1,undefined8 param_2,StateMachineInstance *param_3)

{
  ulong uVar1;
  
  uVar1 = rive::StateMachineInstance::stateChangedCount(param_3);
  rive_android::SizeTToInt(uVar1);
  return;
}


// ===== 0032cdd8  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppStateChangedByIndex =====

void Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppStateChangedByIndex
               (undefined8 param_1,undefined8 param_2,StateMachineInstance *param_3,int param_4)

{
  rive::StateMachineInstance::stateChangedByIndex(param_3,(long)param_4);
  return;
}


// ===== 0032cde4  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppReportedEventCount =====

void Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppReportedEventCount
               (undefined8 param_1,undefined8 param_2,StateMachineInstance *param_3)

{
  ulong uVar1;
  
  uVar1 = rive::StateMachineInstance::reportedEventCount(param_3);
  rive_android::SizeTToInt(uVar1);
  return;
}


// ===== 0032cdfc  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppReportedEventAt =====

void Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppReportedEventAt
               (_jclass *param_1,undefined8 param_2,StateMachineInstance *param_3,int param_4)

{
  _jmethodID *p_Var1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  
  auVar3 = rive::StateMachineInstance::reportedEventAt(param_3,(long)param_4);
  p_Var1 = (_jmethodID *)rive_android::GetRiveEventReportClass();
  uVar2 = rive_android::GetRiveEventReportConstructorId();
  _JNIEnv::NewObject(param_1,p_Var1,(double)auVar3._8_4_,uVar2,auVar3._0_8_);
  return;
}


// ===== 0032ce5c  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppSMIInputByIndex =====

void Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppSMIInputByIndex
               (undefined8 param_1,undefined8 param_2,long *param_3,int param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0032ce6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x70))(param_3,(long)param_4);
  return;
}


// ===== 0032ce70  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppInputCount =====

void Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppInputCount
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x68))(param_3);
  rive_android::SizeTToInt(uVar1);
  return;
}


// ===== 0032ce90  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppName =====

void Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppName
               (long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + 0x120);
  lVar1 = lVar2 + 0x11;
  if ((*(byte *)(lVar2 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(lVar2 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0032ceb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1,lVar1);
  return;
}


// ===== 0032ceb4  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppLayerCount =====

ulong Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppLayerCount
                (undefined8 param_1,undefined8 param_2,long param_3)

{
  return (ulong)(*(long *)(*(long *)(param_3 + 0x120) + 0x30) -
                *(long *)(*(long *)(param_3 + 0x120) + 0x28)) >> 3;
}


// ===== 0032cec8  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppPointerDown =====

void Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppPointerDown
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0032ced8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x48))(param_3,param_4);
  return;
}


// ===== 0032cedc  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppPointerMove =====

void Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppPointerMove
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined8 param_4,long *param_5,undefined4 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0032cef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_5 + 0x50))(param_1,param_2,0,param_5,param_6);
  return;
}


// ===== 0032cef4  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppPointerUp =====

void Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppPointerUp
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0032cf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x58))(param_3,param_4);
  return;
}


// ===== 0032cf08  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppPointerExit =====

void Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppPointerExit
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0032cf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x60))(param_3,param_4);
  return;
}


// ===== 0032cf1c  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppSetViewModelInstance =====

void Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppSetViewModelInstance
               (undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

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
  (**(code **)(*param_3 + 0x40))(param_3,&local_40);
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


// ===== 0032cfc0  Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppDelete =====

void Java_app_rive_runtime_kotlin_core_StateMachineInstance_cppDelete
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0032cfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}


// ===== 0032cfd8  Java_app_rive_runtime_kotlin_core_RiveTextValueRun_cppText =====

void Java_app_rive_runtime_kotlin_core_RiveTextValueRun_cppText
               (long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3 + 0x91;
  if ((*(byte *)(param_3 + 0x90) & 1) != 0) {
    lVar1 = *(long *)(param_3 + 0xa0);
  }
                    /* WARNING: Could not recover jumptable at 0x0032cff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1,lVar1);
  return;
}


// ===== 0032cff8  Java_app_rive_runtime_kotlin_core_RiveTextValueRun_cppSetText =====

void Java_app_rive_runtime_kotlin_core_RiveTextValueRun_cppSetText
               (rive_android *param_1,undefined8 param_2,_jstring *param_3,_JNIEnv *param_4)

{
  size_t sVar1;
  size_t sVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long lVar4;
  int iVar5;
  _jstring *__s2;
  ulong uVar6;
  _jstring *p_Var7;
  byte bVar8;
  basic_string local_50 [8];
  size_t local_48;
  _jstring *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  rive_android::JStringToString(param_1,param_4,param_3);
  bVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_3 + 0x90);
  uVar6 = (ulong)((byte)bVar3 >> 1);
  sVar1 = uVar6;
  if (((byte)bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_3 + 0x98);
  }
  bVar8 = (byte)local_50[0] & 1;
  sVar2 = (ulong)((byte)local_50[0] >> 1);
  if (((byte)local_50[0] & 1) != 0) {
    sVar2 = local_48;
  }
  if (sVar1 == sVar2) {
    __s2 = (_jstring *)((ulong)local_50 | 1);
    if (((byte)local_50[0] & 1) != 0) {
      __s2 = local_40;
    }
    if (((byte)bVar3 & 1) == 0) {
      if (1 < (byte)bVar3) {
        p_Var7 = param_3 + 0x91;
        do {
          if (*p_Var7 != *__s2) goto LAB_0032d0c0;
          uVar6 = uVar6 - 1;
          p_Var7 = p_Var7 + 1;
          __s2 = __s2 + 1;
        } while (uVar6 != 0);
      }
      goto LAB_0032d0e0;
    }
    iVar5 = memcmp(*(void **)(param_3 + 0xa0),__s2,*(size_t *)(param_3 + 0x98));
    if (iVar5 == 0) goto LAB_0032d0e0;
  }
LAB_0032d0c0:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (param_3 + 0x90),local_50);
  (**(code **)(*(long *)param_3 + 0x98))(param_3);
  bVar8 = (byte)local_50[0] & 1;
LAB_0032d0e0:
  if (bVar8 != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0032d114  rive_android::decode<rive::RenderImage> =====

/* rive::rcp<rive::RenderImage> rive_android::decode<rive::RenderImage>(rive::Span<unsigned char
   const>, rive_android::RendererType) */

void rive_android::decode<rive::RenderImage>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)GetFactory(param_4);
                    /* WARNING: Could not recover jumptable at 0x0032d158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(param_1,plVar1,param_2,param_3);
  return;
}


// ===== 0032d15c  rive_android::decode<rive::Font> =====

/* rive::rcp<rive::Font> rive_android::decode<rive::Font>(rive::Span<unsigned char const>,
   rive_android::RendererType) */

void rive_android::decode<rive::Font>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = GetFactory(param_4);
  rive::Factory::decodeFont(param_1,uVar1,param_2,param_3);
  return;
}


// ===== 0032d19c  rive_android::decode<rive::AudioSource> =====

/* rive::rcp<rive::AudioSource> rive_android::decode<rive::AudioSource>(rive::Span<unsigned char
   const>, rive_android::RendererType) */

void rive_android::decode<rive::AudioSource>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = GetFactory(param_4);
  rive::Factory::decodeAudio(param_1,uVar1,param_2,param_3);
  return;
}


// ===== 0032d1dc  rive_android::AndroidRiveRenderFactory::makeRenderBuffer =====

/* rive_android::AndroidRiveRenderFactory::makeRenderBuffer(rive::RenderBufferType,
   rive::RenderBufferFlags, unsigned long) */

void rive_android::AndroidRiveRenderFactory::makeRenderBuffer
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  AndroidPLSRenderBuffer *pAVar1;
  
  pAVar1 = (AndroidPLSRenderBuffer *)operator_new(0x60);
  AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(pAVar1,param_3,param_4,param_5);
  *param_1 = pAVar1;
  return;
}


// ===== 0032d234  rive_android::AndroidImage::AndroidImage =====

/* rive_android::AndroidImage::AndroidImage(int, int, std::__ndk1::unique_ptr<unsigned char const
   [], std::__ndk1::default_delete<unsigned char const []> >) */

void __thiscall
rive_android::AndroidImage::AndroidImage
          (AndroidImage *this,undefined4 param_1,undefined4 param_2,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  RefWorker *this_00;
  undefined ***pppuVar3;
  long lVar4;
  long lVar5;
  undefined **local_80;
  AndroidImage *pAStack_78;
  undefined8 local_70;
  long *local_60;
  long local_48;
  
  pppuVar3 = &local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (RefWorker *)rive::RenderImage::RenderImage((RenderImage *)this);
  *(undefined8 *)(this + 0x30) = 0;
  puVar2 = PTR_vtable_0067cb88;
  *(undefined4 *)(this + 0x14) = param_2;
  *(undefined4 *)(this + 0xc) = 0xd59c2a46;
  *(undefined4 *)(this + 0x10) = param_1;
  *(undefined **)this = puVar2 + 0x10;
  RefWorker::RiveWorker(this_00);
  local_70 = *param_4;
  *param_4 = 0;
  lVar5 = *(long *)(this + 0x38);
  local_80 = &PTR_FUN_00651c38;
  pAStack_78 = this;
  local_60 = (long *)&local_80;
  std::__ndk1::mutex::lock();
  std::__ndk1::
  deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
  ::emplace_back<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>
            ((deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
              *)(lVar5 + 0x48),(function *)&local_80);
  lVar4 = *(long *)(lVar5 + 0x30) + 1;
  *(long *)(lVar5 + 0x30) = lVar4;
  std::__ndk1::mutex::unlock();
  std::__ndk1::mutex::lock();
  std::__ndk1::mutex::unlock();
  std::__ndk1::condition_variable::notify_one();
  *(long *)(this + 0x40) = lVar4;
  if ((undefined ***)local_60 == &local_80) {
    lVar4 = 4;
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_0032d330;
    lVar4 = 5;
    pppuVar3 = (undefined ***)local_60;
  }
  (**(code **)((long)*pppuVar3 + lVar4 * 8))();
LAB_0032d330:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032d35c  rive_android::AndroidImage::~AndroidImage =====

/* rive_android::AndroidImage::~AndroidImage() */

void __thiscall rive_android::AndroidImage::~AndroidImage(AndroidImage *this)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined ***pppuVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined **local_80;
  long lStack_78;
  long *local_60;
  long local_48;
  
  pppuVar4 = &local_80;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)(this + 0x38);
  uVar1 = *(ulong *)(this + 0x40);
  *(undefined **)this = PTR_vtable_0067cb88 + 0x10;
  if (*(ulong *)(lVar6 + 0x38) < uVar1) {
    std::__ndk1::mutex::lock();
    uVar5 = *(ulong *)(lVar6 + 0x38);
    while (uVar5 < uVar1) {
      FUN_0032e1d8(lVar6 + 0xb8,lVar6 + 0xf8);
      uVar5 = *(ulong *)(lVar6 + 0x38);
    }
    std::__ndk1::mutex::unlock();
  }
  lVar6 = *(long *)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  if (lVar6 != 0) {
    lVar8 = *(long *)(this + 0x38);
    local_80 = &PTR_FUN_00651c80;
    lStack_78 = lVar6;
    local_60 = (long *)&local_80;
    std::__ndk1::mutex::lock();
    std::__ndk1::
    deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
    ::emplace_back<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>
              ((deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
                *)(lVar8 + 0x48),(function *)&local_80);
    *(long *)(lVar8 + 0x30) = *(long *)(lVar8 + 0x30) + 1;
    std::__ndk1::mutex::unlock();
    std::__ndk1::mutex::lock();
    std::__ndk1::mutex::unlock();
    std::__ndk1::condition_variable::notify_one();
    if ((undefined ***)local_60 == &local_80) {
      lVar6 = 4;
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_0032d474;
      lVar6 = 5;
      pppuVar4 = (undefined ***)local_60;
    }
    (**(code **)((long)*pppuVar4 + lVar6 * 8))();
  }
LAB_0032d474:
  if (*(RefWorker **)(this + 0x38) != (RefWorker *)0x0) {
    RefWorker::unref(*(RefWorker **)(this + 0x38));
  }
  plVar7 = *(long **)(this + 0x30);
  *(undefined **)this = PTR_vtable_0067cb80 + 0x10;
  if ((plVar7 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,plVar7 + 1), iVar3 == 1)) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  rive::RenderImage::~RenderImage((RenderImage *)this);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0032d4f0  rive_android::AndroidImage::~AndroidImage =====

/* rive_android::AndroidImage::~AndroidImage() */

void __thiscall rive_android::AndroidImage::~AndroidImage(AndroidImage *this)

{
  ~AndroidImage(this);
  operator_delete(this);
  return;
}


// ===== 0032d514  rive_android::AndroidRiveRenderFactory::decodeImage =====

/* rive_android::AndroidRiveRenderFactory::decodeImage(rive::Span<unsigned char const>) */

void rive_android::AndroidRiveRenderFactory::decodeImage
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  renderImageFromAndroidDecode(param_2,param_3,0,0);
  return;
}


// ===== 0032d528  rive_android::AndroidCanvasFactory::makeRenderBuffer =====

/* rive_android::AndroidCanvasFactory::makeRenderBuffer(rive::RenderBufferType,
   rive::RenderBufferFlags, unsigned long) */

void rive_android::AndroidCanvasFactory::makeRenderBuffer
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               size_t param_5)

{
  undefined *puVar1;
  RenderBuffer *pRVar2;
  void *pvVar3;
  
  pRVar2 = (RenderBuffer *)operator_new(0x30);
  rive::RenderBuffer::RenderBuffer(pRVar2,param_3,param_4,param_5);
  puVar1 = PTR_vtable_0067cb90;
  *(undefined4 *)(pRVar2 + 0xc) = 0xc5236cbf;
  *(undefined **)pRVar2 = puVar1 + 0x10;
  pvVar3 = malloc(param_5);
  *param_1 = pRVar2;
  *(void **)(pRVar2 + 0x28) = pvVar3;
  return;
}


// ===== 0032d5a8  rive_android::AndroidCanvasFactory::decodeImage =====

/* rive_android::AndroidCanvasFactory::decodeImage(rive::Span<unsigned char const>) */

void rive_android::AndroidCanvasFactory::decodeImage
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  CanvasRenderImage *pCVar1;
  
  pCVar1 = (CanvasRenderImage *)operator_new(0x40);
  CanvasRenderImage::CanvasRenderImage(pCVar1,param_3,param_4);
  *param_1 = pCVar1;
  return;
}


// ===== 0032d5f0  rive_android::AndroidCanvasFactory::makeLinearGradient =====

/* rive_android::AndroidCanvasFactory::makeLinearGradient(float, float, float, float, unsigned int
   const*, float const*, unsigned long) */

void rive_android::AndroidCanvasFactory::makeLinearGradient
               (float param_1,float param_2,float param_3,float param_4,uint *param_5,float *param_6
               ,ulong param_7)

{
  LinearGradientCanvasShader *this;
  ulong in_x3;
  undefined8 *in_x8;
  
  this = (LinearGradientCanvasShader *)operator_new(0x18);
  LinearGradientCanvasShader::LinearGradientCanvasShader
            (this,param_1,param_2,param_3,param_4,(uint *)param_6,(float *)param_7,in_x3);
  *in_x8 = this;
  return;
}


// ===== 0032d678  rive_android::AndroidCanvasFactory::makeRadialGradient =====

/* rive_android::AndroidCanvasFactory::makeRadialGradient(float, float, float, unsigned int const*,
   float const*, unsigned long) */

void rive_android::AndroidCanvasFactory::makeRadialGradient
               (float param_1,float param_2,float param_3,uint *param_4,float *param_5,ulong param_6
               )

{
  RadialGradientCanvasShader *this;
  ulong in_x3;
  undefined8 *in_x8;
  
  this = (RadialGradientCanvasShader *)operator_new(0x18);
  RadialGradientCanvasShader::RadialGradientCanvasShader
            (this,param_1,param_2,param_3,(uint *)param_5,(float *)param_6,in_x3);
  *in_x8 = this;
  return;
}


// ===== 0032d6f8  rive_android::AndroidCanvasFactory::makeRenderPath =====

/* rive_android::AndroidCanvasFactory::makeRenderPath(rive::RawPath&, rive::FillRule) */

void rive_android::AndroidCanvasFactory::makeRenderPath
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  CanvasRenderPath *pCVar1;
  
  pCVar1 = (CanvasRenderPath *)operator_new(0x20);
  CanvasRenderPath::CanvasRenderPath(pCVar1,param_3,param_4);
  *param_1 = pCVar1;
  return;
}


// ===== 0032d740  rive_android::AndroidCanvasFactory::makeEmptyRenderPath =====

/* rive_android::AndroidCanvasFactory::makeEmptyRenderPath() */

void __thiscall rive_android::AndroidCanvasFactory::makeEmptyRenderPath(AndroidCanvasFactory *this)

{
  CanvasRenderPath *this_00;
  undefined8 *in_x8;
  
  this_00 = (CanvasRenderPath *)operator_new(0x20);
  CanvasRenderPath::CanvasRenderPath(this_00);
  *in_x8 = this_00;
  return;
}


// ===== 0032d770  rive_android::AndroidCanvasFactory::makeRenderPaint =====

/* rive_android::AndroidCanvasFactory::makeRenderPaint() */

void __thiscall rive_android::AndroidCanvasFactory::makeRenderPaint(AndroidCanvasFactory *this)

{
  CanvasRenderPaint *this_00;
  undefined8 *in_x8;
  
  this_00 = (CanvasRenderPaint *)operator_new(0x18);
  CanvasRenderPaint::CanvasRenderPaint(this_00);
  *in_x8 = this_00;
  return;
}


// ===== 0032d7a0  rive_android::AndroidRiveRenderFactory::~AndroidRiveRenderFactory =====

/* rive_android::AndroidRiveRenderFactory::~AndroidRiveRenderFactory() */

void __thiscall
rive_android::AndroidRiveRenderFactory::~AndroidRiveRenderFactory(AndroidRiveRenderFactory *this)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0032d7a4  rive_android::AndroidCanvasFactory::~AndroidCanvasFactory =====

/* rive_android::AndroidCanvasFactory::~AndroidCanvasFactory() */

void __thiscall
rive_android::AndroidCanvasFactory::~AndroidCanvasFactory(AndroidCanvasFactory *this)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0032d7a8  std::__ndk1::deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>::emplace_back<std::__ndk1::function<void(rive_android::DrawableThreadState*)>> =====

/* std::__ndk1::function<void (rive_android::DrawableThreadState*)>&
   std::__ndk1::deque<std::__ndk1::function<void (rive_android::DrawableThreadState*)>,
   std::__ndk1::allocator<std::__ndk1::function<void (rive_android::DrawableThreadState*)> >
   >::emplace_back<std::__ndk1::function<void (rive_android::DrawableThreadState*)>
   >(std::__ndk1::function<void (rive_android::DrawableThreadState*)>&&) */

function * __thiscall
std::__ndk1::
deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
::emplace_back<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>
          (deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
           *this,function *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  function *pfVar6;
  long lVar7;
  
  lVar4 = *(long *)(this + 8);
  lVar5 = *(long *)(this + 0x10);
  lVar3 = 0;
  if (lVar5 != lVar4) {
    lVar3 = (lVar5 - lVar4 >> 3) * 0x55 + -1;
  }
  if (lVar3 == *(long *)(this + 0x28) + *(long *)(this + 0x20)) {
    FUN_0032d8dc(this);
    lVar4 = *(long *)(this + 8);
    lVar5 = *(long *)(this + 0x10);
  }
  if (lVar5 == lVar4) {
    lVar3 = 0;
    pfVar6 = *(function **)(param_1 + 0x20);
  }
  else {
    lVar3 = *(long *)(lVar4 + ((ulong)(*(long *)(this + 0x28) + *(long *)(this + 0x20)) / 0x55) * 8)
            + ((ulong)(*(long *)(this + 0x28) + *(long *)(this + 0x20)) % 0x55) * 0x30;
    pfVar6 = *(function **)(param_1 + 0x20);
  }
  if (pfVar6 == (function *)0x0) {
    *(undefined8 *)(lVar3 + 0x20) = 0;
  }
  else if (pfVar6 == param_1) {
    *(long *)(lVar3 + 0x20) = lVar3;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    lVar4 = *(long *)(this + 8);
    lVar5 = *(long *)(this + 0x10);
  }
  else {
    *(function **)(lVar3 + 0x20) = pfVar6;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar1 = *(long *)(this + 0x20) + *(long *)(this + 0x28) + 1;
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  plVar2 = (long *)(lVar4 + (uVar1 / 0x55) * 8);
  lVar7 = *plVar2;
  lVar3 = 0;
  if (lVar5 != lVar4) {
    lVar3 = lVar7 + (uVar1 % 0x55) * 0x30;
  }
  if (lVar3 == lVar7) {
    lVar3 = plVar2[-1] + 0xff0;
  }
  return (function *)(lVar3 + -0x30);
}


// ===== 0032d8dc  FUN_0032d8dc =====

void FUN_0032d8dc(undefined8 *param_1)

{
  long lVar1;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  void *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((ulong)param_1[4] < 0x55) {
    puVar12 = (undefined8 *)param_1[1];
    puVar16 = (undefined8 *)param_1[2];
    puVar13 = param_1 + 3;
    puVar14 = (undefined8 *)*puVar13;
    uVar17 = (long)puVar16 - (long)puVar12;
    uVar9 = (long)puVar14 - (long)*param_1;
    if (uVar9 <= uVar17) {
      uVar9 = (long)uVar9 >> 2;
      if (puVar14 == (undefined8 *)*param_1) {
        uVar9 = 1;
      }
      local_70 = puVar13;
      if (uVar9 >> 0x3d != 0) {
LAB_0032dd34:
                    /* WARNING: Subroutine does not return */
        FUN_00324008();
      }
      uVar9 = uVar9 * 8;
      pvVar5 = operator_new(uVar9);
      puVar13 = (undefined8 *)((long)pvVar5 + uVar17);
      local_90 = pvVar5;
      local_88 = puVar13;
      local_78 = (undefined8 *)((long)pvVar5 + uVar9);
      pvVar4 = operator_new(0xff0);
      pvVar6 = pvVar5;
      puVar8 = puVar13;
      puVar14 = (undefined8 *)((long)pvVar5 + uVar9);
      if (uVar17 == uVar9) {
        if ((long)uVar17 < 1) {
          uVar17 = (long)uVar17 >> 2;
          if (puVar16 == puVar12) {
            uVar17 = 1;
          }
          if (uVar17 >> 0x3d != 0) goto LAB_0032dd34;
          pvVar6 = operator_new(uVar17 * 8);
          puVar14 = (undefined8 *)((long)pvVar6 + uVar17 * 8);
          puVar8 = (undefined8 *)((long)pvVar6 + (uVar17 >> 2) * 8);
          local_90 = pvVar6;
          local_88 = puVar8;
          local_78 = puVar14;
          operator_delete(pvVar5);
          puVar12 = (undefined8 *)param_1[1];
          puVar16 = (undefined8 *)param_1[2];
        }
        else {
          puVar8 = (undefined8 *)((long)puVar13 - ((uVar17 >> 1) + 4 & 0xfffffffffffffff8));
          puVar14 = puVar13;
          local_88 = puVar8;
        }
      }
      local_80 = puVar8 + 1;
      *puVar8 = pvVar4;
      puVar13 = puVar12;
      if (puVar16 != puVar12) {
        do {
          puVar12 = puVar16 + -1;
          FUN_0032e04c(&local_90,puVar12);
          puVar16 = puVar12;
        } while (puVar12 != (undefined8 *)param_1[1]);
        pvVar6 = local_90;
        puVar13 = (undefined8 *)param_1[2];
        puVar8 = local_88;
        puVar14 = local_78;
      }
      local_90 = (void *)*param_1;
      local_78 = (undefined8 *)param_1[3];
      *param_1 = pvVar6;
      param_1[1] = puVar8;
      param_1[2] = local_80;
      param_1[3] = puVar14;
      local_80 = puVar13;
      if (puVar13 != puVar12) {
        local_80 = (undefined8 *)
                   ((long)puVar13 + ((long)puVar12 + (7 - (long)puVar13) & 0xfffffffffffffff8U));
      }
      local_88 = puVar12;
      if (local_90 != (void *)0x0) {
        operator_delete(local_90);
      }
      goto LAB_0032dc8c;
    }
    if (puVar14 != puVar16) {
      local_90 = operator_new(0xff0);
      FUN_0032dd38(param_1,&local_90);
      goto LAB_0032dc8c;
    }
    local_90 = operator_new(0xff0);
    FUN_0032dec0(param_1,&local_90);
    puVar12 = (undefined8 *)param_1[1];
    puVar16 = (undefined8 *)param_1[2];
    puVar13 = puVar12 + 1;
    uVar15 = *puVar12;
    param_1[1] = puVar13;
    if (puVar16 != (undefined8 *)param_1[3]) goto LAB_0032dc7c;
    puVar14 = (undefined8 *)*param_1;
    lVar7 = (long)puVar13 - (long)puVar14;
    if (puVar14 <= puVar13 && lVar7 != 0) goto LAB_0032d944;
    uVar9 = (long)puVar16 - (long)puVar14 >> 2;
    if ((long)puVar16 - (long)puVar14 == 0) {
      uVar9 = 1;
    }
    if (uVar9 >> 0x3d != 0) goto LAB_0032dd34;
    uVar17 = uVar9 >> 2;
    pvVar5 = operator_new(uVar9 * 8);
    puVar8 = (undefined8 *)((long)pvVar5 + uVar17 * 8);
    pvVar6 = (void *)((long)pvVar5 + uVar9 * 8);
    puVar10 = puVar8;
    if ((long)puVar16 - (long)puVar13 != 0) {
      uVar9 = (long)puVar16 + (-0x10 - (long)puVar12);
      puVar10 = (undefined8 *)((long)puVar8 + ((long)puVar16 - (long)puVar13));
      puVar16 = puVar8;
      if ((0x47 < uVar9) && (0x1f < (long)pvVar5 + (uVar17 * 8 - (long)puVar12) + -8)) {
        puVar16 = (undefined8 *)((long)pvVar5 + uVar17 * 8 + 0x10);
        uVar9 = (uVar9 >> 3) + 1;
        uVar11 = uVar9 & 0x3ffffffffffffffc;
        puVar13 = puVar13 + uVar11;
        puVar12 = puVar12 + 3;
        uVar17 = uVar11;
        do {
          puVar3 = puVar12 + -1;
          uVar18 = puVar12[-2];
          uVar20 = puVar12[1];
          uVar19 = *puVar12;
          uVar17 = uVar17 - 4;
          puVar12 = puVar12 + 4;
          puVar16[-1] = *puVar3;
          puVar16[-2] = uVar18;
          puVar16[1] = uVar20;
          *puVar16 = uVar19;
          puVar16 = puVar16 + 4;
        } while (uVar17 != 0);
        puVar16 = puVar8 + uVar11;
        if (uVar9 == uVar11) goto LAB_0032dc68;
      }
      do {
        puVar12 = puVar16 + 1;
        *puVar16 = *puVar13;
        puVar16 = puVar12;
        puVar13 = puVar13 + 1;
      } while (puVar12 != puVar10);
    }
    goto LAB_0032dc68;
  }
  puVar12 = (undefined8 *)param_1[1];
  puVar16 = (undefined8 *)param_1[2];
  param_1[4] = param_1[4] - 0x55;
  puVar13 = puVar12 + 1;
  uVar15 = *puVar12;
  param_1[1] = puVar13;
  if (puVar16 == (undefined8 *)param_1[3]) {
    puVar14 = (undefined8 *)*param_1;
    lVar7 = (long)puVar13 - (long)puVar14;
    if (puVar13 < puVar14 || lVar7 == 0) {
      uVar9 = (long)puVar16 - (long)puVar14 >> 2;
      if ((long)puVar16 - (long)puVar14 == 0) {
        uVar9 = 1;
      }
      if (uVar9 >> 0x3d != 0) goto LAB_0032dd34;
      uVar17 = uVar9 >> 2;
      pvVar5 = operator_new(uVar9 * 8);
      puVar8 = (undefined8 *)((long)pvVar5 + uVar17 * 8);
      pvVar6 = (void *)((long)pvVar5 + uVar9 * 8);
      puVar10 = puVar8;
      if ((long)puVar16 - (long)puVar13 != 0) {
        uVar9 = (long)puVar16 + (-0x10 - (long)puVar12);
        puVar10 = (undefined8 *)((long)puVar8 + ((long)puVar16 - (long)puVar13));
        puVar16 = puVar8;
        if ((0x47 < uVar9) && (0x1f < (long)pvVar5 + (uVar17 * 8 - (long)puVar12) + -8)) {
          puVar16 = (undefined8 *)((long)pvVar5 + uVar17 * 8 + 0x10);
          uVar9 = (uVar9 >> 3) + 1;
          uVar11 = uVar9 & 0x3ffffffffffffffc;
          puVar13 = puVar13 + uVar11;
          puVar12 = puVar12 + 3;
          uVar17 = uVar11;
          do {
            puVar3 = puVar12 + -1;
            uVar18 = puVar12[-2];
            uVar20 = puVar12[1];
            uVar19 = *puVar12;
            uVar17 = uVar17 - 4;
            puVar12 = puVar12 + 4;
            puVar16[-1] = *puVar3;
            puVar16[-2] = uVar18;
            puVar16[1] = uVar20;
            *puVar16 = uVar19;
            puVar16 = puVar16 + 4;
          } while (uVar17 != 0);
          puVar16 = puVar8 + uVar11;
          if (uVar9 == uVar11) goto LAB_0032dc68;
        }
        do {
          puVar12 = puVar16 + 1;
          *puVar16 = *puVar13;
          puVar16 = puVar12;
          puVar13 = puVar13 + 1;
        } while (puVar12 != puVar10);
      }
LAB_0032dc68:
      *param_1 = pvVar5;
      param_1[1] = puVar8;
      param_1[2] = puVar10;
      param_1[3] = pvVar6;
      operator_delete(puVar14);
      puVar16 = (undefined8 *)param_1[2];
    }
    else {
LAB_0032d944:
      lVar7 = lVar7 >> 3;
      lVar1 = lVar7 + 2;
      if (lVar7 + 1 < 0 == SCARRY8(lVar7,1)) {
        lVar1 = lVar7 + 1;
      }
      __n = (long)puVar16 - (long)puVar13;
      puVar16 = puVar13 + -(lVar1 >> 1);
      if (__n != 0) {
        memmove(puVar16,puVar13,__n);
        puVar13 = (undefined8 *)param_1[1];
      }
      puVar16 = (undefined8 *)((long)puVar16 + __n);
      param_1[1] = puVar13 + -(lVar1 >> 1);
      param_1[2] = puVar16;
    }
  }
LAB_0032dc7c:
  *puVar16 = uVar15;
  param_1[2] = param_1[2] + 8;
LAB_0032dc8c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0032dd38  FUN_0032dd38 =====

void FUN_0032dd38(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t __n;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *__src;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar12 = (undefined8 *)param_1[2];
  if (puVar12 != (undefined8 *)param_1[3]) goto LAB_0032de90;
  puVar3 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (puVar3 <= __src && (long)__src - (long)puVar3 != 0) {
    lVar6 = (long)__src - (long)puVar3 >> 3;
    lVar1 = lVar6 + 2;
    if (lVar6 + 1 < 0 == SCARRY8(lVar6,1)) {
      lVar1 = lVar6 + 1;
    }
    __n = (long)puVar12 - (long)__src;
    if (__n != 0) {
      memmove(__src + -(lVar1 >> 1),__src,__n);
      puVar12 = (undefined8 *)param_1[1];
    }
    puVar3 = puVar12 + -(lVar1 >> 1);
    puVar12 = (undefined8 *)((long)(__src + -(lVar1 >> 1)) + __n);
    param_1[1] = puVar3;
    param_1[2] = puVar12;
    goto LAB_0032de90;
  }
  uVar7 = (long)puVar12 - (long)puVar3 >> 2;
  if ((long)puVar12 - (long)puVar3 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar13 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  puVar2 = (undefined8 *)((long)pvVar5 + uVar13 * 8);
  lVar1 = (long)puVar12 - (long)__src;
  puVar12 = puVar2;
  if (lVar1 != 0) {
    puVar12 = (undefined8 *)((long)puVar2 + lVar1);
    puVar8 = puVar2;
    if ((0x37 < lVar1 - 8U) && (0x1f < (long)pvVar5 + (uVar13 * 8 - (long)__src))) {
      puVar8 = __src + 2;
      puVar10 = (undefined8 *)((long)pvVar5 + uVar13 * 8 + 0x10);
      uVar13 = (lVar1 - 8U >> 3) + 1;
      uVar9 = uVar13 & 0x3ffffffffffffffc;
      __src = __src + uVar9;
      uVar11 = uVar9;
      do {
        puVar4 = puVar8 + -1;
        uVar14 = puVar8[-2];
        uVar16 = puVar8[1];
        uVar15 = *puVar8;
        uVar11 = uVar11 - 4;
        puVar8 = puVar8 + 4;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar14;
        puVar10[1] = uVar16;
        *puVar10 = uVar15;
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
      puVar8 = puVar2 + uVar9;
      if (uVar13 == uVar9) goto LAB_0032de78;
    }
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *__src;
      puVar8 = puVar10;
      __src = __src + 1;
    } while (puVar10 != puVar12);
  }
LAB_0032de78:
  *param_1 = pvVar5;
  param_1[1] = puVar2;
  param_1[2] = puVar12;
  param_1[3] = (void *)((long)pvVar5 + uVar7 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3);
    puVar12 = (undefined8 *)param_1[2];
  }
LAB_0032de90:
  *puVar12 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


// ===== 0032dec0  FUN_0032dec0 =====

void FUN_0032dec0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *__src;
  undefined8 *__dest;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  __src = (undefined8 *)param_1[1];
  __dest = __src;
  if (__src != (undefined8 *)*param_1) goto LAB_0032e020;
  uVar2 = param_1[2];
  uVar11 = param_1[3];
  if (uVar2 < uVar11) {
    lVar4 = (long)(uVar11 - uVar2) >> 3;
    lVar1 = lVar4 + 2;
    if (lVar4 + 1 < 0 == SCARRY8(lVar4,1)) {
      lVar1 = lVar4 + 1;
    }
    __dest = __src + (lVar1 >> 1);
    if (uVar2 - (long)__src != 0) {
      memmove(__dest,__src,uVar2 - (long)__src);
      __src = (undefined8 *)param_1[2];
    }
    param_1[1] = (long)__dest;
    param_1[2] = (long)(__src + (lVar1 >> 1));
    goto LAB_0032e020;
  }
  uVar5 = (long)(uVar11 - (long)__src) >> 2;
  if (uVar11 - (long)__src == 0) {
    uVar5 = 1;
  }
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar11 = uVar5 + 3 >> 2;
  pvVar3 = operator_new(uVar5 * 8);
  lVar1 = uVar2 - (long)__src;
  __dest = (undefined8 *)((long)pvVar3 + uVar11 * 8);
  puVar6 = __dest;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)((long)__dest + lVar1);
    puVar7 = __dest;
    puVar9 = __src;
    if ((0x37 < lVar1 - 8U) && (0x1f < (long)pvVar3 + (uVar11 * 8 - (long)__src))) {
      puVar7 = __src + 2;
      puVar9 = (undefined8 *)((long)pvVar3 + uVar11 * 8 + 0x10);
      uVar2 = (lVar1 - 8U >> 3) + 1;
      uVar10 = uVar2 & 0x3ffffffffffffffc;
      uVar11 = uVar10;
      do {
        puVar8 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        uVar11 = uVar11 - 4;
        puVar7 = puVar7 + 4;
        puVar9[-1] = *puVar8;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar11 != 0);
      puVar7 = __dest + uVar10;
      puVar9 = __src + uVar10;
      if (uVar2 == uVar10) goto LAB_0032e008;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_0032e008:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_0032e020:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 0032e04c  FUN_0032e04c =====

void FUN_0032e04c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *__src;
  undefined8 *__dest;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  __src = (undefined8 *)param_1[1];
  __dest = __src;
  if (__src != (undefined8 *)*param_1) goto LAB_0032e1ac;
  uVar2 = param_1[2];
  uVar11 = param_1[3];
  if (uVar2 < uVar11) {
    lVar4 = (long)(uVar11 - uVar2) >> 3;
    lVar1 = lVar4 + 2;
    if (lVar4 + 1 < 0 == SCARRY8(lVar4,1)) {
      lVar1 = lVar4 + 1;
    }
    __dest = __src + (lVar1 >> 1);
    if (uVar2 - (long)__src != 0) {
      memmove(__dest,__src,uVar2 - (long)__src);
      __src = (undefined8 *)param_1[2];
    }
    param_1[1] = (long)__dest;
    param_1[2] = (long)(__src + (lVar1 >> 1));
    goto LAB_0032e1ac;
  }
  uVar5 = (long)(uVar11 - (long)__src) >> 2;
  if (uVar11 - (long)__src == 0) {
    uVar5 = 1;
  }
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar11 = uVar5 + 3 >> 2;
  pvVar3 = operator_new(uVar5 * 8);
  lVar1 = uVar2 - (long)__src;
  __dest = (undefined8 *)((long)pvVar3 + uVar11 * 8);
  puVar6 = __dest;
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)((long)__dest + lVar1);
    puVar7 = __dest;
    puVar9 = __src;
    if ((0x37 < lVar1 - 8U) && (0x1f < (long)pvVar3 + (uVar11 * 8 - (long)__src))) {
      puVar7 = __src + 2;
      puVar9 = (undefined8 *)((long)pvVar3 + uVar11 * 8 + 0x10);
      uVar2 = (lVar1 - 8U >> 3) + 1;
      uVar10 = uVar2 & 0x3ffffffffffffffc;
      uVar11 = uVar10;
      do {
        puVar8 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        uVar11 = uVar11 - 4;
        puVar7 = puVar7 + 4;
        puVar9[-1] = *puVar8;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar14;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 4;
      } while (uVar11 != 0);
      puVar7 = __dest + uVar10;
      puVar9 = __src + uVar10;
      if (uVar2 == uVar10) goto LAB_0032e194;
    }
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar8;
      puVar9 = puVar9 + 1;
    } while (puVar8 != puVar6);
  }
LAB_0032e194:
  *param_1 = (long)pvVar3;
  param_1[1] = (long)__dest;
  param_1[2] = (long)puVar6;
  param_1[3] = (long)((long)pvVar3 + uVar5 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
    __dest = (undefined8 *)param_1[1];
  }
LAB_0032e1ac:
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


// ===== 0032e1d8  FUN_0032e1d8 =====

/* WARNING: Removing unreachable block (ram,0x0032e264) */
/* WARNING: Removing unreachable block (ram,0x0032e2c0) */

void FUN_0032e1d8(unique_lock *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    FUN_00341010(1,plVar1 + 1);
  }
  std::__ndk1::mutex::lock();
  std::__ndk1::mutex::unlock();
  std::__ndk1::condition_variable::wait(param_1);
  std::__ndk1::mutex::unlock();
  std::__ndk1::mutex::lock();
  if ((plVar1 != (long *)0x0) && (lVar3 = FUN_00341040(0xffffffffffffffff,plVar1 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0032e2d4  rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer =====

/* rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,
   rive::RenderBufferFlags, unsigned long) */

void __thiscall
rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(AndroidPLSRenderBuffer *this)

{
  long lVar1;
  long lVar2;
  int iVar3;
  RefWorker *this_00;
  pthread_t pVar4;
  function *pfVar5;
  void *pvVar6;
  long lVar7;
  void *local_88;
  function local_80 [32];
  function *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_00 = (RefWorker *)rive::gpu::RenderBufferGLImpl::RenderBufferGLImpl();
  *(undefined **)this = PTR_vtable_0067cb98 + 0x10;
  RefWorker::RiveWorker(this_00);
  *(undefined8 *)(this + 0x50) = 0;
  pVar4 = pthread_self();
  lVar7 = *(long *)(this + 0x48);
  if (*(pthread_t *)(lVar7 + 0x120) == pVar4) {
    pvVar6 = *(void **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x128) + 0x28) + 8) + 0x340);
    if (pvVar6 != (void *)0x0) {
      FUN_00340fb0(1,pvVar6);
    }
    local_88 = pvVar6;
    rive::gpu::RenderBufferGLImpl::init((RenderBufferGLImpl *)this,&local_88);
    pvVar6 = local_88;
    if ((local_88 != (void *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_88), iVar3 == 1)) {
      operator_delete(pvVar6);
    }
    *(undefined8 *)(this + 0x58) = 0;
    goto LAB_0032e45c;
  }
  FUN_00340fb0(1,this + 8);
  FUN_00340fb0(1,this + 8);
  local_60 = (function *)operator_new(0x10);
  *(undefined **)local_60 = PTR_vtable_0067cba0 + 0x10;
  *(AndroidPLSRenderBuffer **)(local_60 + 8) = this;
  std::__ndk1::mutex::lock();
  std::__ndk1::
  deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
  ::emplace_back<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>
            ((deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
              *)(lVar7 + 0x48),local_80);
  lVar1 = *(long *)(lVar7 + 0x30) + 1;
  *(long *)(lVar7 + 0x30) = lVar1;
  std::__ndk1::mutex::unlock();
  std::__ndk1::mutex::lock();
  std::__ndk1::mutex::unlock();
  std::__ndk1::condition_variable::notify_one();
  *(long *)(this + 0x58) = lVar1;
  if (local_60 == local_80) {
    lVar7 = 4;
    pfVar5 = local_80;
LAB_0032e42c:
    (**(code **)(*(long *)pfVar5 + lVar7 * 8))();
  }
  else if (local_60 != (function *)0x0) {
    lVar7 = 5;
    pfVar5 = local_60;
    goto LAB_0032e42c;
  }
  iVar3 = FUN_00340fe0(0xffffffff,this + 8);
  if (iVar3 == 1) {
    (**(code **)(*(long *)this + 8))(this);
  }
LAB_0032e45c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032e488  rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer =====

/* rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer() */

void __thiscall
rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer(AndroidPLSRenderBuffer *this)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  pthread_t pVar5;
  function *pfVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  function local_80 [32];
  long *local_60;
  long local_48;
  
  pfVar6 = local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0067cb98 + 0x10;
  pVar5 = pthread_self();
  lVar8 = *(long *)(this + 0x48);
  if (*(pthread_t *)(lVar8 + 0x120) == pVar5) goto LAB_0032e610;
  uVar10 = *(ulong *)(this + 0x58);
  if (*(ulong *)(lVar8 + 0x38) < uVar10) {
    std::__ndk1::mutex::lock();
    uVar7 = *(ulong *)(lVar8 + 0x38);
    while (uVar7 < uVar10) {
      FUN_0032e1d8(lVar8 + 0xb8,lVar8 + 0xf8);
      uVar7 = *(ulong *)(lVar8 + 0x38);
    }
    std::__ndk1::mutex::unlock();
  }
  uVar3 = rive::gpu::RenderBufferGLImpl::detachBuffer((RenderBufferGLImpl *)this);
  pvVar9 = *(void **)(this + 0x40);
  if (pvVar9 == (void *)0x0) {
    lVar8 = *(long *)(this + 0x48);
  }
  else {
    FUN_00340fb0(1,pvVar9);
    lVar8 = *(long *)(this + 0x48);
    FUN_00340fb0(1,pvVar9);
  }
  local_60 = (long *)operator_new(0x18);
  puVar2 = PTR_vtable_0067cba8;
  *(undefined4 *)(local_60 + 1) = uVar3;
  local_60[2] = (long)pvVar9;
  *local_60 = (long)(puVar2 + 0x10);
  std::__ndk1::mutex::lock();
  std::__ndk1::
  deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
  ::emplace_back<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>
            ((deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
              *)(lVar8 + 0x48),local_80);
  *(long *)(lVar8 + 0x30) = *(long *)(lVar8 + 0x30) + 1;
  std::__ndk1::mutex::unlock();
  std::__ndk1::mutex::lock();
  std::__ndk1::mutex::unlock();
  std::__ndk1::condition_variable::notify_one();
  if ((function *)local_60 == local_80) {
    lVar8 = 4;
LAB_0032e5e4:
    (**(code **)(*(long *)pfVar6 + lVar8 * 8))();
  }
  else if (local_60 != (long *)0x0) {
    lVar8 = 5;
    pfVar6 = (function *)local_60;
    goto LAB_0032e5e4;
  }
  if ((pvVar9 != (void *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,pvVar9), iVar4 == 1)) {
    operator_delete(pvVar9);
  }
LAB_0032e610:
  pvVar9 = *(void **)(this + 0x50);
  *(undefined8 *)(this + 0x50) = 0;
  if (pvVar9 != (void *)0x0) {
    operator_delete__(pvVar9);
  }
  if (*(RefWorker **)(this + 0x48) != (RefWorker *)0x0) {
    RefWorker::unref(*(RefWorker **)(this + 0x48));
  }
  rive::gpu::RenderBufferGLImpl::~RenderBufferGLImpl((RenderBufferGLImpl *)this);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0032e660  rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer =====

/* rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer() */

void __thiscall
rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer(AndroidPLSRenderBuffer *this)

{
  ~AndroidPLSRenderBuffer(this);
  operator_delete(this);
  return;
}


// ===== 0032e684  rive_android::AndroidPLSRenderBuffer::onMap =====

/* rive_android::AndroidPLSRenderBuffer::onMap() */

void * __thiscall rive_android::AndroidPLSRenderBuffer::onMap(AndroidPLSRenderBuffer *this)

{
  pthread_t pVar1;
  void *pvVar2;
  void *pvVar3;
  
  pVar1 = pthread_self();
  if (*(pthread_t *)(*(long *)(this + 0x48) + 0x120) == pVar1) {
    pvVar2 = (void *)rive::gpu::RenderBufferGLImpl::onMap((RenderBufferGLImpl *)this);
    return pvVar2;
  }
  pvVar2 = operator_new__(*(ulong *)(this + 0x18));
  pvVar3 = *(void **)(this + 0x50);
  *(void **)(this + 0x50) = pvVar2;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
    pvVar2 = *(void **)(this + 0x50);
  }
  return pvVar2;
}


// ===== 0032e6e4  rive_android::AndroidPLSRenderBuffer::onUnmap =====

/* rive_android::AndroidPLSRenderBuffer::onUnmap() */

void __thiscall rive_android::AndroidPLSRenderBuffer::onUnmap(AndroidPLSRenderBuffer *this)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  pthread_t pVar4;
  function *pfVar5;
  long lVar6;
  long lVar7;
  function local_80 [32];
  long *local_60;
  long local_48;
  
  pfVar5 = local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pVar4 = pthread_self();
  lVar7 = *(long *)(this + 0x48);
  if (*(pthread_t *)(lVar7 + 0x120) == pVar4) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      rive::gpu::RenderBufferGLImpl::onUnmap((RenderBufferGLImpl *)this);
      return;
    }
    goto LAB_0032e84c;
  }
  lVar6 = *(long *)(this + 0x50);
  *(undefined8 *)(this + 0x50) = 0;
  FUN_00340fb0(1,this + 8);
  FUN_00340fb0(1,this + 8);
  local_60 = (long *)operator_new(0x18);
  puVar2 = PTR_vtable_0067cbb0;
  local_60[1] = lVar6;
  local_60[2] = (long)this;
  *local_60 = (long)(puVar2 + 0x10);
  std::__ndk1::mutex::lock();
  std::__ndk1::
  deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
  ::emplace_back<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>
            ((deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
              *)(lVar7 + 0x48),local_80);
  *(long *)(lVar7 + 0x30) = *(long *)(lVar7 + 0x30) + 1;
  std::__ndk1::mutex::unlock();
  std::__ndk1::mutex::lock();
  std::__ndk1::mutex::unlock();
  std::__ndk1::condition_variable::notify_one();
  if ((function *)local_60 == local_80) {
    lVar7 = 4;
LAB_0032e7f4:
    (**(code **)(*(long *)pfVar5 + lVar7 * 8))();
  }
  else if (local_60 != (long *)0x0) {
    lVar7 = 5;
    pfVar5 = (function *)local_60;
    goto LAB_0032e7f4;
  }
  iVar3 = FUN_00340fe0(0xffffffff,this + 8);
  if (iVar3 == 1) {
    (**(code **)(*(long *)this + 8))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0032e84c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032e850  std::__ndk1::__function::__func<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,rive::RenderBufferFlags,unsigned_long)::{lambda(rive_android::DrawableThreadState*)#1},std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,rive::RenderBufferFlags,unsigned_long)::{lambda(rive_android::DrawableThreadState*)#1}>,void(rive_android::DrawableThreadState*)>::~__func =====

/* std::__ndk1::__function::__func<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,
   rive::RenderBufferFlags, unsigned long)::{lambda(rive_android::DrawableThreadState*)#1},
   std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,
   rive::RenderBufferFlags, unsigned long)::{lambda(rive_android::DrawableThreadState*)#1}>, void
   (rive_android::DrawableThreadState*)>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,rive::RenderBufferFlags,unsigned_long)::{lambda(rive_android::DrawableThreadState*)#1},std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,rive::RenderBufferFlags,unsigned_long)::{lambda(rive_android::DrawableThreadState*)#1}>,void(rive_android::DrawableThreadState*)>
::~__func(__func<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,rive::RenderBufferFlags,unsigned_long)::_lambda(rive_android::DrawableThreadState*)_1_,std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,rive::RenderBufferFlags,unsigned_long)::_lambda(rive_android::DrawableThreadState*)_1_>,void(rive_android::DrawableThreadState*)>
          *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  *(undefined **)this = PTR_vtable_0067cba0 + 0x10;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0032e89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 0032e8ac  std::__ndk1::__function::__func<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,rive::RenderBufferFlags,unsigned_long)::{lambda(rive_android::DrawableThreadState*)#1},std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,rive::RenderBufferFlags,unsigned_long)::{lambda(rive_android::DrawableThreadState*)#1}>,void(rive_android::DrawableThreadState*)>::~__func =====

/* std::__ndk1::__function::__func<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,
   rive::RenderBufferFlags, unsigned long)::{lambda(rive_android::DrawableThreadState*)#1},
   std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,
   rive::RenderBufferFlags, unsigned long)::{lambda(rive_android::DrawableThreadState*)#1}>, void
   (rive_android::DrawableThreadState*)>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,rive::RenderBufferFlags,unsigned_long)::{lambda(rive_android::DrawableThreadState*)#1},std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,rive::RenderBufferFlags,unsigned_long)::{lambda(rive_android::DrawableThreadState*)#1}>,void(rive_android::DrawableThreadState*)>
::~__func(__func<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,rive::RenderBufferFlags,unsigned_long)::_lambda(rive_android::DrawableThreadState*)_1_,std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::AndroidPLSRenderBuffer(rive::RenderBufferType,rive::RenderBufferFlags,unsigned_long)::_lambda(rive_android::DrawableThreadState*)_1_>,void(rive_android::DrawableThreadState*)>
          *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  *(undefined **)this = PTR_vtable_0067cba0 + 0x10;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(this);
  return;
}


// ===== 0032e908  FUN_0032e908 =====

long * FUN_0032e908(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)operator_new(0x10);
  lVar2 = *(long *)(param_1 + 8);
  *plVar1 = (long)(PTR_vtable_0067cba0 + 0x10);
  if (lVar2 != 0) {
    FUN_00340fb0(1,lVar2 + 8);
  }
  plVar1[1] = lVar2;
  return plVar1;
}


// ===== 0032e95c  FUN_0032e95c =====

void FUN_0032e95c(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *param_2 = (long)(PTR_vtable_0067cba0 + 0x10);
  if (lVar1 != 0) {
    FUN_00340fb0(1,lVar1 + 8);
  }
  param_2[1] = lVar1;
  return;
}


// ===== 0032e9a0  FUN_0032e9a0 =====

void FUN_0032e9a0(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0032e9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 0032e9ec  FUN_0032e9ec =====

void FUN_0032e9ec(void *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 8);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 0032ea38  FUN_0032ea38 =====

void FUN_0032ea38(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  RenderBufferGLImpl *pRVar3;
  void *pvVar4;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pRVar3 = *(RenderBufferGLImpl **)(param_1 + 8);
  pvVar4 = *(void **)(*(long *)(*(long *)(*param_2 + 0x28) + 8) + 0x340);
  if (pvVar4 != (void *)0x0) {
    FUN_00340fb0(1,pvVar4);
  }
  local_40 = pvVar4;
  rive::gpu::RenderBufferGLImpl::init(pRVar3,&local_40);
  pvVar4 = local_40;
  if ((local_40 != (void *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,local_40), iVar2 == 1)) {
    operator_delete(pvVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032ead8  std::__ndk1::__function::__func<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::{lambda(rive_android::DrawableThreadState*)#1},std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::{lambda(rive_android::DrawableThreadState*)#1}>,void(rive_android::DrawableThreadState*)>::~__func =====

/* std::__ndk1::__function::__func<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::{lambda(rive_android::DrawableThreadState*)#1},
   std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::{lambda(rive_android::DrawableThreadState*)#1}>,
   void (rive_android::DrawableThreadState*)>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::{lambda(rive_android::DrawableThreadState*)#1},std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::{lambda(rive_android::DrawableThreadState*)#1}>,void(rive_android::DrawableThreadState*)>
::~__func(__func<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::_lambda(rive_android::DrawableThreadState*)_1_,std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::_lambda(rive_android::DrawableThreadState*)_1_>,void(rive_android::DrawableThreadState*)>
          *this)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x10);
  *(undefined **)this = PTR_vtable_0067cba8 + 0x10;
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 0032eb2c  std::__ndk1::__function::__func<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::{lambda(rive_android::DrawableThreadState*)#1},std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::{lambda(rive_android::DrawableThreadState*)#1}>,void(rive_android::DrawableThreadState*)>::~__func =====

/* std::__ndk1::__function::__func<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::{lambda(rive_android::DrawableThreadState*)#1},
   std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::{lambda(rive_android::DrawableThreadState*)#1}>,
   void (rive_android::DrawableThreadState*)>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::{lambda(rive_android::DrawableThreadState*)#1},std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::{lambda(rive_android::DrawableThreadState*)#1}>,void(rive_android::DrawableThreadState*)>
::~__func(__func<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::_lambda(rive_android::DrawableThreadState*)_1_,std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::~AndroidPLSRenderBuffer()::_lambda(rive_android::DrawableThreadState*)_1_>,void(rive_android::DrawableThreadState*)>
          *this)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x10);
  *(undefined **)this = PTR_vtable_0067cba8 + 0x10;
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  operator_delete(this);
  return;
}


// ===== 0032eb80  FUN_0032eb80 =====

long * FUN_0032eb80(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)operator_new(0x18);
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR_vtable_0067cba8 + 0x10;
  *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(param_1 + 8);
  *plVar2 = (long)puVar1;
  if (lVar3 != 0) {
    FUN_00340fb0(1,lVar3);
  }
  plVar2[2] = lVar3;
  return plVar2;
}


// ===== 0032ebdc  FUN_0032ebdc =====

void FUN_0032ebdc(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  puVar1 = PTR_vtable_0067cba8 + 0x10;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  *param_2 = (long)puVar1;
  if (lVar2 != 0) {
    FUN_00340fb0(1,lVar2);
  }
  param_2[2] = lVar2;
  return;
}


// ===== 0032ec28  FUN_0032ec28 =====

void FUN_0032ec28(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 0x10);
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 0032ec6c  FUN_0032ec6c =====

void FUN_0032ec6c(void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)((long)param_1 + 0x10);
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 0032ecb0  FUN_0032ecb0 =====

void FUN_0032ecb0(long param_1)

{
  if (*(uint *)(param_1 + 8) != 0) {
    rive::gpu::GLState::deleteBuffer(*(GLState **)(param_1 + 0x10),*(uint *)(param_1 + 8));
    return;
  }
  return;
}


// ===== 0032ecc4  std::__ndk1::__function::__func<rive_android::AndroidPLSRenderBuffer::onUnmap()::{lambda(rive_android::DrawableThreadState*)#1},std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::onUnmap()::{lambda(rive_android::DrawableThreadState*)#1}>,void(rive_android::DrawableThreadState*)>::~__func =====

/* std::__ndk1::__function::__func<rive_android::AndroidPLSRenderBuffer::onUnmap()::{lambda(rive_android::DrawableThreadState*)#1},
   std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::onUnmap()::{lambda(rive_android::DrawableThreadState*)#1}>,
   void (rive_android::DrawableThreadState*)>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<rive_android::AndroidPLSRenderBuffer::onUnmap()::{lambda(rive_android::DrawableThreadState*)#1},std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::onUnmap()::{lambda(rive_android::DrawableThreadState*)#1}>,void(rive_android::DrawableThreadState*)>
::~__func(__func<rive_android::AndroidPLSRenderBuffer::onUnmap()::_lambda(rive_android::DrawableThreadState*)_1_,std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::onUnmap()::_lambda(rive_android::DrawableThreadState*)_1_>,void(rive_android::DrawableThreadState*)>
          *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x10);
  *(undefined **)this = PTR_vtable_0067cbb0 + 0x10;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0032ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 0032ed20  std::__ndk1::__function::__func<rive_android::AndroidPLSRenderBuffer::onUnmap()::{lambda(rive_android::DrawableThreadState*)#1},std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::onUnmap()::{lambda(rive_android::DrawableThreadState*)#1}>,void(rive_android::DrawableThreadState*)>::~__func =====

/* std::__ndk1::__function::__func<rive_android::AndroidPLSRenderBuffer::onUnmap()::{lambda(rive_android::DrawableThreadState*)#1},
   std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::onUnmap()::{lambda(rive_android::DrawableThreadState*)#1}>,
   void (rive_android::DrawableThreadState*)>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<rive_android::AndroidPLSRenderBuffer::onUnmap()::{lambda(rive_android::DrawableThreadState*)#1},std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::onUnmap()::{lambda(rive_android::DrawableThreadState*)#1}>,void(rive_android::DrawableThreadState*)>
::~__func(__func<rive_android::AndroidPLSRenderBuffer::onUnmap()::_lambda(rive_android::DrawableThreadState*)_1_,std::__ndk1::allocator<rive_android::AndroidPLSRenderBuffer::onUnmap()::_lambda(rive_android::DrawableThreadState*)_1_>,void(rive_android::DrawableThreadState*)>
          *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x10);
  *(undefined **)this = PTR_vtable_0067cbb0 + 0x10;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(this);
  return;
}


// ===== 0032ed7c  FUN_0032ed7c =====

long * FUN_0032ed7c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)operator_new(0x18);
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *plVar3 = (long)(PTR_vtable_0067cbb0 + 0x10);
  plVar3[1] = lVar1;
  if (lVar2 != 0) {
    FUN_00340fb0(1,lVar2 + 8);
  }
  plVar3[2] = lVar2;
  return plVar3;
}


// ===== 0032edd0  FUN_0032edd0 =====

void FUN_0032edd0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = (long)(PTR_vtable_0067cbb0 + 0x10);
  param_2[1] = lVar1;
  if (lVar2 != 0) {
    FUN_00340fb0(1,lVar2 + 8);
  }
  param_2[2] = lVar2;
  return;
}


// ===== 0032ee14  FUN_0032ee14 =====

void FUN_0032ee14(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0032ee50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 0032ee60  FUN_0032ee60 =====

void FUN_0032ee60(void *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 0032eeac  FUN_0032eeac =====

void FUN_0032eeac(long param_1)

{
  void *__dest;
  
  __dest = (void *)rive::gpu::RenderBufferGLImpl::onMap(*(RenderBufferGLImpl **)(param_1 + 0x10));
  memcpy(__dest,*(void **)(param_1 + 8),*(size_t *)(*(long *)(param_1 + 0x10) + 0x18));
  rive::gpu::RenderBufferGLImpl::onUnmap(*(RenderBufferGLImpl **)(param_1 + 0x10));
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 0032eef8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0032eefc  FUN_0032eefc =====

void FUN_0032eefc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00651c38;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 0032ef34  FUN_0032ef34 =====

void FUN_0032ef34(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_00651c38;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 0032ef4c  FUN_0032ef4c =====

void FUN_0032ef4c(void)

{
  return;
}


// ===== 0032ef50  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0032ef54  FUN_0032ef54 =====

void FUN_0032ef54(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 8);
  (**(code **)(**(long **)(*(long *)(*param_2 + 0x28) + 8) + 0x20))(&local_40);
  plVar2 = local_40;
  plVar4 = *(long **)(lVar5 + 0x30);
  local_40 = (long *)0x0;
  *(long **)(lVar5 + 0x30) = plVar2;
  if (plVar4 != (long *)0x0) {
    iVar3 = FUN_00340fe0(0xffffffff,plVar4 + 1);
    if (iVar3 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    plVar2 = local_40;
    if ((local_40 != (long *)0x0) && (iVar3 = FUN_00340fe0(0xffffffff,local_40 + 1), iVar3 == 1)) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032f04c  FUN_0032f04c =====

void FUN_0032f04c(void)

{
  return;
}


// ===== 0032f050  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0032f054  FUN_0032f054 =====

void FUN_0032f054(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00651c80;
  puVar1[1] = uVar2;
  return;
}


// ===== 0032f088  FUN_0032f088 =====

void FUN_0032f088(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00651c80;
  param_2[1] = uVar1;
  return;
}


// ===== 0032f09c  FUN_0032f09c =====

void FUN_0032f09c(void)

{
  return;
}


// ===== 0032f0a0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0032f0a4  FUN_0032f0a4 =====

void FUN_0032f0a4(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  iVar1 = FUN_00340fe0(0xffffffff,plVar2 + 1);
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0032f0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 0032f0ec  rive::DataRenderBuffer::~DataRenderBuffer =====

/* rive::DataRenderBuffer::~DataRenderBuffer() */

void __thiscall rive::DataRenderBuffer::~DataRenderBuffer(DataRenderBuffer *this)

{
  *(undefined **)this = PTR_vtable_0067cb90 + 0x10;
  free(*(void **)(this + 0x28));
  RenderBuffer::~RenderBuffer((RenderBuffer *)this);
  return;
}


// ===== 0032f124  rive::DataRenderBuffer::~DataRenderBuffer =====

/* rive::DataRenderBuffer::~DataRenderBuffer() */

void __thiscall rive::DataRenderBuffer::~DataRenderBuffer(DataRenderBuffer *this)

{
  *(undefined **)this = PTR_vtable_0067cb90 + 0x10;
  free(*(void **)(this + 0x28));
  RenderBuffer::~RenderBuffer((RenderBuffer *)this);
  operator_delete(this);
  return;
}


// ===== 0032f164  rive::DataRenderBuffer::onMap =====

/* rive::DataRenderBuffer::onMap() */

undefined8 __thiscall rive::DataRenderBuffer::onMap(DataRenderBuffer *this)

{
  return *(undefined8 *)(this + 0x28);
}


// ===== 0032f16c  rive::DataRenderBuffer::onUnmap =====

/* rive::DataRenderBuffer::onUnmap() */

void rive::DataRenderBuffer::onUnmap(void)

{
  return;
}


// ===== 0032f170  rive_android::AudioEngine::Instance =====

/* rive_android::AudioEngine::Instance() */

undefined * rive_android::AudioEngine::Instance(void)

{
  int iVar1;
  
  if (((DAT_00686cc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00686cc8), iVar1 != 0)) {
    __cxa_atexit(PTR__AudioEngine_0067cbb8,&DAT_00686c98,&PTR_LOOP_006513f0);
    __cxa_guard_release(&DAT_00686cc8);
  }
  return &DAT_00686c98;
}


// ===== 0032f1d4  rive_android::AudioEngine::~AudioEngine =====

/* rive_android::AudioEngine::~AudioEngine() */

void __thiscall rive_android::AudioEngine::~AudioEngine(AudioEngine *this)

{
  std::__ndk1::mutex::~mutex((mutex *)(this + 4));
  return;
}


// ===== 0032f1dc  rive_android::AudioEngine::acquire =====

/* rive_android::AudioEngine::acquire() */

void __thiscall rive_android::AudioEngine::acquire(AudioEngine *this)

{
  long lVar1;
  int iVar2;
  bool extraout_w1;
  long lVar3;
  AudioEngine *local_40;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00340fe0(1,this);
  if (iVar2 == 0) {
    std::__ndk1::mutex::lock();
    rive::AudioEngine::RuntimeEngine((AudioEngine *)0x0,extraout_w1);
    if (local_40 != (AudioEngine *)0x0) {
      rive::AudioEngine::start(local_40);
      RiveLogI(*(char **)PTR_AUDIO_TAG_0067cbc0,"AudioEngine: Started (new ref count: %d)",1);
      if ((local_40 != (AudioEngine *)0x0) &&
         (iVar2 = FUN_00340fe0(0xffffffff,local_40), iVar2 == 1)) {
        rive::AudioEngine::~AudioEngine(local_40);
        operator_delete(local_40);
      }
    }
    std::__ndk1::mutex::unlock();
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar3) {
    RiveLogD(*(char **)PTR_AUDIO_TAG_0067cbc0,"AudioEngine: Acquired (new ref count: %d)",
             (ulong)(iVar2 + 1));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032f2ec  rive_android::AudioEngine::release =====

/* rive_android::AudioEngine::release() */

void __thiscall rive_android::AudioEngine::release(AudioEngine *this)

{
  long lVar1;
  int iVar2;
  bool extraout_w1;
  long lVar3;
  AudioEngine *local_40;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00340fe0(0xffffffff,this);
  if (iVar2 < 1) {
    RiveLogE(*(char **)PTR_AUDIO_TAG_0067cbc0,
             "AudioEngine: Release called when ref count was already 0");
    *(undefined4 *)this = 0;
  }
  else {
    if (iVar2 != 1) {
      if (*(long *)(lVar1 + 0x28) == lVar3) {
        RiveLogD(*(char **)PTR_AUDIO_TAG_0067cbc0,"AudioEngine: Released (new ref count: %d)");
        return;
      }
      goto LAB_0032f414;
    }
    std::__ndk1::mutex::lock();
    rive::AudioEngine::RuntimeEngine((AudioEngine *)0x0,extraout_w1);
    if (local_40 != (AudioEngine *)0x0) {
      rive::AudioEngine::stop(local_40);
      RiveLogI(*(char **)PTR_AUDIO_TAG_0067cbc0,"AudioEngine: Stopped (new ref count: 0)");
      if ((local_40 != (AudioEngine *)0x0) &&
         (iVar2 = FUN_00340fe0(0xffffffff,local_40), iVar2 == 1)) {
        rive::AudioEngine::~AudioEngine(local_40);
        operator_delete(local_40);
      }
    }
    std::__ndk1::mutex::unlock();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_0032f414:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032f418  rive_android::CanvasRenderPath::CreatePath =====

/* rive_android::CanvasRenderPath::CreatePath() */

undefined8 rive_android::CanvasRenderPath::CreatePath(void)

{
  _jclass *p_Var1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  
  p_Var1 = (_jclass *)GetJNIEnv();
  p_Var2 = (_jmethodID *)GetPathClass();
  uVar3 = GetPathInitMethodId();
  uVar3 = _JNIEnv::NewObject(p_Var1,p_Var2,uVar3);
  uVar3 = (**(code **)(*(long *)p_Var1 + 0xa8))(p_Var1,uVar3);
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,p_Var2);
  return uVar3;
}


// ===== 0032f48c  rive_android::CanvasRenderPath::CanvasRenderPath =====

/* rive_android::CanvasRenderPath::CanvasRenderPath() */

void __thiscall rive_android::CanvasRenderPath::CanvasRenderPath(CanvasRenderPath *this)

{
  undefined *puVar1;
  _jclass *p_Var2;
  _jmethodID *p_Var3;
  undefined8 uVar4;
  
  rive::RenderPath::RenderPath((RenderPath *)this);
  puVar1 = PTR_vtable_0067cbc8;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  p_Var2 = (_jclass *)GetJNIEnv();
  p_Var3 = (_jmethodID *)GetPathClass();
  uVar4 = GetPathInitMethodId();
  uVar4 = _JNIEnv::NewObject(p_Var2,p_Var3,uVar4);
  uVar4 = (**(code **)(*(long *)p_Var2 + 0xa8))(p_Var2,uVar4);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,p_Var3);
  *(undefined8 *)(this + 0x18) = uVar4;
  return;
}


// ===== 0032f51c  rive_android::CanvasRenderPath::CanvasRenderPath =====

/* rive_android::CanvasRenderPath::CanvasRenderPath(rive::RawPath&, rive::FillRule) */

void __thiscall
rive_android::CanvasRenderPath::CanvasRenderPath
          (CanvasRenderPath *this,undefined8 param_1,undefined4 param_3)

{
  undefined *puVar1;
  _jclass *p_Var2;
  _jmethodID *p_Var3;
  undefined8 uVar4;
  
  rive::RenderPath::RenderPath((RenderPath *)this);
  puVar1 = PTR_vtable_0067cbc8;
  *(undefined4 *)(this + 0x10) = param_3;
  *(undefined **)this = puVar1 + 0x10;
  p_Var2 = (_jclass *)GetJNIEnv();
  p_Var3 = (_jmethodID *)GetPathClass();
  uVar4 = GetPathInitMethodId();
  uVar4 = _JNIEnv::NewObject(p_Var2,p_Var3,uVar4);
  uVar4 = (**(code **)(*(long *)p_Var2 + 0xa8))(p_Var2,uVar4);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,p_Var3);
  *(undefined8 *)(this + 0x18) = uVar4;
  FUN_0032f5c4(uVar4,param_1);
  return;
}


// ===== 0032f5c4  FUN_0032f5c4 =====

void FUN_0032f5c4(_jobject *param_1,long *param_2)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  _JNIEnv *p_Var4;
  _jmethodID *p_Var5;
  _jmethodID *p_Var6;
  _jmethodID *p_Var7;
  _jmethodID *p_Var8;
  _jmethodID *p_Var9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  
  p_Var4 = (_JNIEnv *)rive_android::GetJNIEnv();
  pbVar1 = (byte *)param_2[3];
  lVar2 = param_2[4];
  pfVar10 = (float *)*param_2;
  p_Var5 = (_jmethodID *)rive_android::GetMoveToMethodId();
  p_Var6 = (_jmethodID *)rive_android::GetLineToMethodId();
  p_Var7 = (_jmethodID *)rive_android::GetCubicToMethodId();
  p_Var8 = (_jmethodID *)rive_android::GetCloseMethodId();
  lVar2 = lVar2 - (long)pbVar1;
  do {
    if (lVar2 == 0) {
      return;
    }
    bVar3 = *pbVar1;
    if (bVar3 < 4) {
      if (bVar3 == 0) {
        fVar11 = *pfVar10;
        fVar12 = pfVar10[1];
        p_Var9 = p_Var5;
      }
      else {
        if (bVar3 != 1) goto LAB_0032f65c;
        fVar11 = *pfVar10;
        fVar12 = pfVar10[1];
        p_Var9 = p_Var6;
      }
      rive_android::JNIExceptionHandler::CallVoidMethod
                (p_Var4,param_1,p_Var9,(double)fVar11,(double)fVar12);
      pfVar10 = pfVar10 + 2;
    }
    else if (bVar3 == 4) {
      rive_android::JNIExceptionHandler::CallVoidMethod
                (p_Var4,param_1,p_Var7,(double)*pfVar10,(double)pfVar10[1],(double)pfVar10[2],
                 (double)pfVar10[3],(double)pfVar10[4],(double)pfVar10[5]);
      pfVar10 = pfVar10 + 6;
    }
    else if (bVar3 == 5) {
      rive_android::JNIExceptionHandler::CallVoidMethod(p_Var4,param_1,p_Var8);
    }
LAB_0032f65c:
    lVar2 = lVar2 + -1;
    pbVar1 = pbVar1 + 1;
  } while( true );
}


// ===== 0032f6f8  rive_android::CanvasRenderPath::~CanvasRenderPath =====

/* rive_android::CanvasRenderPath::~CanvasRenderPath() */

void __thiscall rive_android::CanvasRenderPath::~CanvasRenderPath(CanvasRenderPath *this)

{
  long *plVar1;
  
  *(undefined **)this = PTR_vtable_0067cbc8 + 0x10;
  plVar1 = (long *)GetJNIEnv();
  (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(this + 0x18));
  rive::RenderPath::~RenderPath((RenderPath *)this);
  return;
}


// ===== 0032f73c  rive_android::CanvasRenderPath::~CanvasRenderPath =====

/* rive_android::CanvasRenderPath::~CanvasRenderPath() */

void __thiscall rive_android::CanvasRenderPath::~CanvasRenderPath(CanvasRenderPath *this)

{
  ~CanvasRenderPath(this);
  operator_delete(this);
  return;
}


// ===== 0032f760  rive_android::CanvasRenderPath::rewind =====

/* rive_android::CanvasRenderPath::rewind() */

void __thiscall rive_android::CanvasRenderPath::rewind(CanvasRenderPath *this)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_jobject *)GetJNIEnv();
  p_Var3 = *(_jmethodID **)(this + 0x18);
  uVar2 = GetResetMethodId();
  _JNIEnv::CallVoidMethod(p_Var1,p_Var3,uVar2);
  return;
}


// ===== 0032f798  rive_android::CanvasRenderPath::addRawPath =====

/* rive_android::CanvasRenderPath::addRawPath(rive::RawPath const&) */

void rive_android::CanvasRenderPath::addRawPath(RawPath *param_1)

{
  FUN_0032f5c4(*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 0032f7a0  rive_android::CanvasRenderPath::addRenderPath =====

/* rive_android::CanvasRenderPath::addRenderPath(rive::RenderPath const*, rive::Mat2D const&) */

void __thiscall
rive_android::CanvasRenderPath::addRenderPath
          (CanvasRenderPath *this,RenderPath *param_1,Mat2D *param_2)

{
  long lVar1;
  _jclass *p_Var2;
  _jmethodID *p_Var3;
  undefined8 uVar4;
  _jobject *p_Var5;
  _jmethodID *p_Var6;
  _jobject *p_Var7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  p_Var2 = (_jclass *)GetJNIEnv();
  p_Var3 = (_jmethodID *)GetMatrixClass();
  uVar4 = GetMatrixInitMethodId();
  p_Var5 = (_jobject *)_JNIEnv::NewObject(p_Var2,p_Var3,uVar4);
  uVar8 = (undefined4)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  local_64 = 0;
  uStack_60 = 0;
  local_5c = 0x3f800000;
  auVar9._12_4_ = (int)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
  auVar9._0_12_ = *(undefined1 (*) [12])(param_2 + 4);
  auVar9 = NEON_rev64(auVar9,4);
  local_7c = *(undefined4 *)param_2;
  local_68 = *(undefined4 *)(param_2 + 0x14);
  uStack_70 = CONCAT44(auVar9._12_4_,auVar9._4_4_);
  local_78 = CONCAT44(uVar8,uVar8);
  uVar4 = (**(code **)(*(long *)p_Var2 + 0x5a8))(p_Var2,9);
  (**(code **)(*(long *)p_Var2 + 0x6a8))(p_Var2,uVar4,0,9,&local_7c);
  p_Var6 = (_jmethodID *)GetMatrixSetValuesMethodId();
  JNIExceptionHandler::CallVoidMethod((_JNIEnv *)p_Var2,p_Var5,p_Var6,uVar4);
  p_Var7 = *(_jobject **)(this + 0x18);
  p_Var6 = (_jmethodID *)GetAddPathMethodId();
  JNIExceptionHandler::CallVoidMethod
            ((_JNIEnv *)p_Var2,p_Var7,p_Var6,*(undefined8 *)(param_1 + 0x18),p_Var5);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,p_Var3);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,p_Var5);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0032f904  rive_android::CanvasRenderPath::moveTo =====

/* rive_android::CanvasRenderPath::moveTo(float, float) */

void __thiscall
rive_android::CanvasRenderPath::moveTo(CanvasRenderPath *this,float param_1,float param_2)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_jobject *)GetJNIEnv();
  p_Var3 = *(_jmethodID **)(this + 0x18);
  uVar2 = GetMoveToMethodId();
  _JNIEnv::CallVoidMethod(p_Var1,p_Var3,(double)param_1,(double)param_2,uVar2);
  return;
}


// ===== 0032f954  rive_android::CanvasRenderPath::lineTo =====

/* rive_android::CanvasRenderPath::lineTo(float, float) */

void __thiscall
rive_android::CanvasRenderPath::lineTo(CanvasRenderPath *this,float param_1,float param_2)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_jobject *)GetJNIEnv();
  p_Var3 = *(_jmethodID **)(this + 0x18);
  uVar2 = GetLineToMethodId();
  _JNIEnv::CallVoidMethod(p_Var1,p_Var3,(double)param_1,(double)param_2,uVar2);
  return;
}


// ===== 0032f9a4  rive_android::CanvasRenderPath::cubicTo =====

/* rive_android::CanvasRenderPath::cubicTo(float, float, float, float, float, float) */

void __thiscall
rive_android::CanvasRenderPath::cubicTo
          (CanvasRenderPath *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_jobject *)GetJNIEnv();
  p_Var3 = *(_jmethodID **)(this + 0x18);
  uVar2 = GetCubicToMethodId();
  _JNIEnv::CallVoidMethod
            (p_Var1,p_Var3,(double)param_1,(double)param_2,(double)param_3,(double)param_4,
             (double)param_5,(double)param_6,uVar2);
  return;
}


// ===== 0032fa24  rive_android::CanvasRenderPath::close =====

/* rive_android::CanvasRenderPath::close() */

void __thiscall rive_android::CanvasRenderPath::close(CanvasRenderPath *this)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_jobject *)GetJNIEnv();
  p_Var3 = *(_jmethodID **)(this + 0x18);
  uVar2 = GetCloseMethodId();
  _JNIEnv::CallVoidMethod(p_Var1,p_Var3,uVar2);
  return;
}


// ===== 0032fa5c  rive_android::CanvasRenderPath::fillRule =====

/* rive_android::CanvasRenderPath::fillRule(rive::FillRule) */

void __thiscall rive_android::CanvasRenderPath::fillRule(CanvasRenderPath *this,int param_2)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  _jmethodID *p_Var4;
  _jobject *p_Var5;
  undefined8 unaff_x20;
  
  *(int *)(this + 0x10) = param_2;
  if ((param_2 == 0) || (param_2 == 2)) {
    unaff_x20 = GetNonZeroId();
  }
  else if (param_2 == 1) {
    unaff_x20 = GetEvenOddId();
  }
  p_Var1 = (_JNIEnv *)GetJNIEnv();
  uVar2 = GetFillTypeClass();
  uVar3 = (**(code **)(*(long *)p_Var1 + 0x488))(p_Var1,uVar2,unaff_x20);
  p_Var5 = *(_jobject **)(this + 0x18);
  p_Var4 = (_jmethodID *)GetSetFillTypeMethodId();
  JNIExceptionHandler::CallVoidMethod(p_Var1,p_Var5,p_Var4,uVar3);
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0032fb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,uVar3);
  return;
}


// ===== 0032fb14  rive_android::LinearGradientCanvasShader::LinearGradientCanvasShader =====

/* rive_android::LinearGradientCanvasShader::LinearGradientCanvasShader(float, float, float, float,
   unsigned int const*, float const*, unsigned long) */

void __thiscall
rive_android::LinearGradientCanvasShader::LinearGradientCanvasShader
          (LinearGradientCanvasShader *this,float param_1,float param_2,float param_3,float param_4,
          uint *param_5,float *param_6,ulong param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  _jclass *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _jmethodID *p_Var8;
  undefined8 uVar9;
  long lVar10;
  
  rive::RenderShader::RenderShader((RenderShader *)this);
  puVar1 = PTR_vtable_0067cbd0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  p_Var3 = (_jclass *)GetJNIEnv();
  uVar2 = SizeTToInt(param_7);
  uVar4 = (**(code **)(*(long *)p_Var3 + 0x598))(p_Var3,uVar2);
  uVar5 = (**(code **)(*(long *)p_Var3 + 0x5a8))(p_Var3,uVar2);
  (**(code **)(*(long *)p_Var3 + 0x698))(p_Var3,uVar4,0,uVar2,param_5);
  (**(code **)(*(long *)p_Var3 + 0x6a8))(p_Var3,uVar5,0,uVar2,param_6);
  uVar6 = GetTileModeClass();
  uVar7 = GetClampId();
  uVar7 = (**(code **)(*(long *)p_Var3 + 0x488))(p_Var3,uVar6,uVar7);
  p_Var8 = (_jmethodID *)GetLinearGradientClass();
  uVar9 = GetLinearGradientInitMethodId();
  uVar9 = _JNIEnv::NewObject(p_Var3,p_Var8,(double)param_1,(double)param_2,(double)param_3,
                             (double)param_4,uVar9,uVar4,uVar5,uVar7);
  uVar9 = (**(code **)(*(long *)p_Var3 + 0xa8))(p_Var3,uVar9);
  lVar10 = *(long *)p_Var3;
  *(undefined8 *)(this + 0x10) = uVar9;
  (**(code **)(lVar10 + 0xb8))(p_Var3,uVar4);
  (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,uVar5);
  (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,p_Var8);
  (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,uVar6);
                    /* WARNING: Could not recover jumptable at 0x0032fce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,uVar7);
  return;
}


// ===== 0032fce8  rive_android::RadialGradientCanvasShader::RadialGradientCanvasShader =====

/* rive_android::RadialGradientCanvasShader::RadialGradientCanvasShader(float, float, float,
   unsigned int const*, float const*, unsigned long) */

void __thiscall
rive_android::RadialGradientCanvasShader::RadialGradientCanvasShader
          (RadialGradientCanvasShader *this,float param_1,float param_2,float param_3,uint *param_4,
          float *param_5,ulong param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  _jclass *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _jmethodID *p_Var8;
  undefined8 uVar9;
  long lVar10;
  
  rive::RenderShader::RenderShader((RenderShader *)this);
  puVar1 = PTR_vtable_0067cbd8;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  p_Var3 = (_jclass *)GetJNIEnv();
  uVar2 = SizeTToInt(param_6);
  uVar4 = (**(code **)(*(long *)p_Var3 + 0x598))(p_Var3,uVar2);
  uVar5 = (**(code **)(*(long *)p_Var3 + 0x5a8))(p_Var3,uVar2);
  (**(code **)(*(long *)p_Var3 + 0x698))(p_Var3,uVar4,0,uVar2,param_4);
  (**(code **)(*(long *)p_Var3 + 0x6a8))(p_Var3,uVar5,0,uVar2,param_5);
  uVar6 = GetTileModeClass();
  uVar7 = GetClampId();
  uVar7 = (**(code **)(*(long *)p_Var3 + 0x488))(p_Var3,uVar6,uVar7);
  p_Var8 = (_jmethodID *)GetRadialGradientClass();
  uVar9 = GetRadialGradientInitMethodId();
  uVar9 = _JNIEnv::NewObject(p_Var3,p_Var8,(double)param_1,(double)param_2,(double)param_3,uVar9,
                             uVar4,uVar5,uVar7);
  uVar9 = (**(code **)(*(long *)p_Var3 + 0xa8))(p_Var3,uVar9);
  lVar10 = *(long *)p_Var3;
  *(undefined8 *)(this + 0x10) = uVar9;
  (**(code **)(lVar10 + 0xb8))(p_Var3,uVar4);
  (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,uVar5);
  (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,p_Var8);
  (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,uVar6);
                    /* WARNING: Could not recover jumptable at 0x0032feb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,uVar7);
  return;
}


// ===== 0032feb4  rive_android::CanvasRenderPaint::CanvasRenderPaint =====

/* rive_android::CanvasRenderPaint::CanvasRenderPaint() */

void __thiscall rive_android::CanvasRenderPaint::CanvasRenderPaint(CanvasRenderPaint *this)

{
  _JNIEnv *p_Var1;
  _jclass *p_Var2;
  _jmethodID *p_Var3;
  undefined8 uVar4;
  _jobject *p_Var5;
  
  rive::RenderPaint::RenderPaint((RenderPaint *)this);
  *(undefined **)this = PTR_vtable_0067cbe0 + 0x10;
  p_Var1 = (_JNIEnv *)GetJNIEnv();
  p_Var2 = (_jclass *)GetJNIEnv();
  p_Var3 = (_jmethodID *)GetPaintClass();
  uVar4 = GetPaintInitMethod();
  uVar4 = _JNIEnv::NewObject(p_Var2,p_Var3,uVar4);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,p_Var3);
  p_Var5 = (_jobject *)(**(code **)(*(long *)p_Var1 + 0xa8))(p_Var1,uVar4);
  *(_jobject **)(this + 0x10) = p_Var5;
  p_Var3 = (_jmethodID *)GetSetAntiAliasMethodId();
  JNIExceptionHandler::CallVoidMethod(p_Var1,p_Var5,p_Var3,1);
  p_Var5 = *(_jobject **)(this + 0x10);
  p_Var3 = (_jmethodID *)GetSetFilterBitmapMethodId();
  JNIExceptionHandler::CallVoidMethod(p_Var1,p_Var5,p_Var3,1);
  return;
}


// ===== 0032ff84  rive_android::CanvasRenderPaint::CreateKtPaint =====

/* rive_android::CanvasRenderPaint::CreateKtPaint() */

undefined8 rive_android::CanvasRenderPaint::CreateKtPaint(void)

{
  _jclass *p_Var1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  
  p_Var1 = (_jclass *)GetJNIEnv();
  p_Var2 = (_jmethodID *)GetPaintClass();
  uVar3 = GetPaintInitMethod();
  uVar3 = _JNIEnv::NewObject(p_Var1,p_Var2,uVar3);
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,p_Var2);
  return uVar3;
}


// ===== 0032ffe4  rive_android::CanvasRenderPaint::~CanvasRenderPaint =====

/* rive_android::CanvasRenderPaint::~CanvasRenderPaint() */

void __thiscall rive_android::CanvasRenderPaint::~CanvasRenderPaint(CanvasRenderPaint *this)

{
  long *plVar1;
  
  *(undefined **)this = PTR_vtable_0067cbe0 + 0x10;
  plVar1 = (long *)GetJNIEnv();
  (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(this + 0x10));
  rive::RenderPaint::~RenderPaint((RenderPaint *)this);
  return;
}


// ===== 00330028  rive_android::CanvasRenderPaint::~CanvasRenderPaint =====

/* rive_android::CanvasRenderPaint::~CanvasRenderPaint() */

void __thiscall rive_android::CanvasRenderPaint::~CanvasRenderPaint(CanvasRenderPaint *this)

{
  ~CanvasRenderPaint(this);
  operator_delete(this);
  return;
}


// ===== 0033004c  rive_android::CanvasRenderPaint::style =====

/* rive_android::CanvasRenderPaint::style(rive::RenderPaintStyle) */

void rive_android::CanvasRenderPaint::style(long param_1)

{
  SetStyle(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 00330054  rive_android::CanvasRenderPaint::SetStyle =====

/* rive_android::CanvasRenderPaint::SetStyle(_jobject*, rive::RenderPaintStyle) */

void rive_android::CanvasRenderPaint::SetStyle(_jobject *param_1,int param_2)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  _jmethodID *p_Var4;
  
  p_Var1 = (_JNIEnv *)GetJNIEnv();
  uVar2 = GetStyleClass();
  if (param_2 == 0) {
    uVar3 = GetStrokeId();
  }
  else {
    uVar3 = GetFillId();
  }
  uVar3 = (**(code **)(*(long *)p_Var1 + 0x488))(p_Var1,uVar2,uVar3);
  p_Var4 = (_jmethodID *)GetSetStyleMethodId();
  JNIExceptionHandler::CallVoidMethod(p_Var1,param_1,p_Var4,uVar3);
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x003300f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,uVar3);
  return;
}


// ===== 003300f4  rive_android::CanvasRenderPaint::thickness =====

/* rive_android::CanvasRenderPaint::thickness(float) */

void __thiscall rive_android::CanvasRenderPaint::thickness(CanvasRenderPaint *this,float param_1)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var3 = *(_jmethodID **)(this + 0x10);
  p_Var1 = (_jobject *)GetJNIEnv();
  uVar2 = GetSetStrokeWidthMethodId();
  _JNIEnv::CallVoidMethod(p_Var1,p_Var3,(double)param_1,uVar2);
  return;
}


// ===== 00330138  rive_android::CanvasRenderPaint::SetThickness =====

/* rive_android::CanvasRenderPaint::SetThickness(_jobject*, float) */

void rive_android::CanvasRenderPaint::SetThickness(_jobject *param_1,float param_2)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = (_jobject *)GetJNIEnv();
  uVar2 = GetSetStrokeWidthMethodId();
  _JNIEnv::CallVoidMethod(p_Var1,(_jmethodID *)param_1,(double)param_2,uVar2);
  return;
}


// ===== 0033017c  rive_android::CanvasRenderPaint::join =====

/* rive_android::CanvasRenderPaint::join(rive::StrokeJoin) */

void rive_android::CanvasRenderPaint::join(long param_1)

{
  SetJoin(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 00330184  rive_android::CanvasRenderPaint::SetJoin =====

/* rive_android::CanvasRenderPaint::SetJoin(_jobject*, rive::StrokeJoin) */

void rive_android::CanvasRenderPaint::SetJoin(_jobject *param_1,int param_2)

{
  undefined8 uVar1;
  _JNIEnv *p_Var2;
  undefined8 uVar3;
  _jmethodID *p_Var4;
  
  if (param_2 == 2) {
    uVar1 = GetBevelId();
  }
  else if (param_2 == 1) {
    uVar1 = GetRoundId();
  }
  else {
    uVar1 = GetMiterId();
  }
  p_Var2 = (_JNIEnv *)GetJNIEnv();
  uVar3 = GetJoinClass();
  uVar1 = (**(code **)(*(long *)p_Var2 + 0x488))(p_Var2,uVar3,uVar1);
  p_Var4 = (_jmethodID *)GetSetStrokeJoinMethodId();
  JNIExceptionHandler::CallVoidMethod(p_Var2,param_1,p_Var4,uVar1);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00330234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar1);
  return;
}


// ===== 00330238  rive_android::CanvasRenderPaint::color =====

/* rive_android::CanvasRenderPaint::color(unsigned int) */

void __thiscall rive_android::CanvasRenderPaint::color(CanvasRenderPaint *this,uint param_1)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var3 = *(_jmethodID **)(this + 0x10);
  p_Var1 = (_jobject *)GetJNIEnv();
  uVar2 = GetSetColorMethodId();
  _JNIEnv::CallVoidMethod(p_Var1,p_Var3,uVar2,(ulong)param_1);
  return;
}


// ===== 0033027c  rive_android::CanvasRenderPaint::SetColor =====

/* rive_android::CanvasRenderPaint::SetColor(_jobject*, unsigned int) */

void rive_android::CanvasRenderPaint::SetColor(_jobject *param_1,uint param_2)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = (_jobject *)GetJNIEnv();
  uVar2 = GetSetColorMethodId();
  _JNIEnv::CallVoidMethod(p_Var1,(_jmethodID *)param_1,uVar2,(ulong)param_2);
  return;
}


// ===== 003302c0  rive_android::CanvasRenderPaint::cap =====

/* rive_android::CanvasRenderPaint::cap(rive::StrokeCap) */

void rive_android::CanvasRenderPaint::cap(long param_1)

{
  SetCap(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 003302c8  rive_android::CanvasRenderPaint::SetCap =====

/* rive_android::CanvasRenderPaint::SetCap(_jobject*, rive::StrokeCap) */

void rive_android::CanvasRenderPaint::SetCap(_jobject *param_1,int param_2)

{
  undefined8 uVar1;
  _JNIEnv *p_Var2;
  undefined8 uVar3;
  _jmethodID *p_Var4;
  
  if (param_2 == 2) {
    uVar1 = GetCapSquareId();
  }
  else if (param_2 == 1) {
    uVar1 = GetCapRoundId();
  }
  else {
    uVar1 = GetCapButtID();
  }
  p_Var2 = (_JNIEnv *)GetJNIEnv();
  uVar3 = GetCapClass();
  uVar1 = (**(code **)(*(long *)p_Var2 + 0x488))(p_Var2,uVar3,uVar1);
  p_Var4 = (_jmethodID *)GetSetStrokeCapMethodId();
  JNIExceptionHandler::CallVoidMethod(p_Var2,param_1,p_Var4,uVar1);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00330378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar1);
  return;
}


// ===== 0033037c  rive_android::CanvasRenderPaint::shader =====

/* rive_android::CanvasRenderPaint::shader(rive::rcp<rive::RenderShader>) */

void __thiscall rive_android::CanvasRenderPaint::shader(CanvasRenderPaint *this,long *param_2)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  _jmethodID *p_Var4;
  
  if (*param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*param_2 + 0x10);
  }
  p_Var4 = *(_jmethodID **)(this + 0x10);
  p_Var1 = (_jobject *)GetJNIEnv();
  uVar2 = GetSetShaderMethodId();
  _JNIEnv::CallObjectMethod(p_Var1,p_Var4,uVar2,uVar3);
  return;
}


// ===== 003303d0  rive_android::CanvasRenderPaint::SetShader =====

/* rive_android::CanvasRenderPaint::SetShader(_jobject*, _jobject*) */

void rive_android::CanvasRenderPaint::SetShader(_jobject *param_1,_jobject *param_2)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = (_jobject *)GetJNIEnv();
  uVar2 = GetSetShaderMethodId();
  _JNIEnv::CallObjectMethod(p_Var1,(_jmethodID *)param_1,uVar2,param_2);
  return;
}


// ===== 00330414  rive_android::CanvasRenderPaint::blendMode =====

/* rive_android::CanvasRenderPaint::blendMode(rive::BlendMode) */

void rive_android::CanvasRenderPaint::blendMode(long param_1)

{
  SetBlendMode(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 0033041c  rive_android::CanvasRenderPaint::SetBlendMode =====

/* rive_android::CanvasRenderPaint::SetBlendMode(_jobject*, rive::BlendMode) */

void rive_android::CanvasRenderPaint::SetBlendMode(_jobject *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  _JNIEnv *p_Var2;
  undefined8 uVar3;
  _jmethodID *p_Var4;
  
  if (0x1c < *(long *)PTR_g_sdkVersion_0067cbe8) {
    switch(param_2) {
    default:
      uVar1 = GetSrcOver();
      break;
    case 0xe:
      uVar1 = GetScreen();
      break;
    case 0xf:
      uVar1 = GetOverlay();
      break;
    case 0x10:
      uVar1 = GetDarken();
      break;
    case 0x11:
      uVar1 = GetLighten();
      break;
    case 0x12:
      uVar1 = GetColorDodge();
      break;
    case 0x13:
      uVar1 = GetColorBurn();
      break;
    case 0x14:
      uVar1 = GetHardLight();
      break;
    case 0x15:
      uVar1 = GetSoftLight();
      break;
    case 0x16:
      uVar1 = GetDifference();
      break;
    case 0x17:
      uVar1 = GetExclusion();
      break;
    case 0x18:
      uVar1 = GetMultiply();
      break;
    case 0x19:
      uVar1 = GetHue();
      break;
    case 0x1a:
      uVar1 = GetSaturation();
      break;
    case 0x1b:
      uVar1 = GetColor();
      break;
    case 0x1c:
      uVar1 = GetLuminosity();
    }
    p_Var2 = (_JNIEnv *)GetJNIEnv();
    uVar3 = GetBlendModeClass();
    uVar1 = (**(code **)(*(long *)p_Var2 + 0x488))(p_Var2,uVar3,uVar1);
    p_Var4 = (_jmethodID *)GetSetBlendModeMethodId();
    JNIExceptionHandler::CallVoidMethod(p_Var2,param_1,p_Var4,uVar1);
    (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00330564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar1);
    return;
  }
  porterDuffBlendMode();
  return;
}


// ===== 00330568  rive_android::CanvasRenderPaint::porterDuffBlendMode =====

/* rive_android::CanvasRenderPaint::porterDuffBlendMode(_jobject*, rive::BlendMode) */

void rive_android::CanvasRenderPaint::porterDuffBlendMode(_jobject *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  _jclass *p_Var3;
  undefined8 uVar4;
  _jmethodID *p_Var5;
  undefined8 uVar6;
  _jmethodID *p_Var7;
  undefined8 uVar8;
  
  uVar1 = param_2 & 0xff;
  if (uVar1 < 0x10) {
    if (uVar1 == 3) {
      uVar2 = GetPdSrcOver();
      goto LAB_00330620;
    }
    if (uVar1 == 0xe) {
      uVar2 = GetPdScreen();
      goto LAB_00330620;
    }
    if (uVar1 == 0xf) {
      uVar2 = GetPdOverlay();
      goto LAB_00330620;
    }
  }
  else {
    if (uVar1 < 0x1d) {
      if ((1 << (ulong)(param_2 & 0x1f) & 0x1efc0000U) != 0) {
        return;
      }
      if (uVar1 == 0x11) {
        uVar2 = GetPdLighten();
        goto LAB_00330620;
      }
      if (uVar1 == 0x18) {
        uVar2 = GetPdMultiply();
        goto LAB_00330620;
      }
    }
    if (uVar1 == 0x10) {
      uVar2 = GetPdDarken();
      goto LAB_00330620;
    }
  }
  uVar2 = GetPdClear();
LAB_00330620:
  p_Var3 = (_jclass *)GetJNIEnv();
  uVar4 = GetPorterDuffClass();
  uVar2 = (**(code **)(*(long *)p_Var3 + 0x488))(p_Var3,uVar4,uVar2);
  p_Var5 = (_jmethodID *)GetPorterDuffXferModeClass();
  uVar6 = GetPorterDuffXferModeInitMethodId();
  uVar6 = _JNIEnv::NewObject(p_Var3,p_Var5,uVar6,uVar2);
  p_Var7 = (_jmethodID *)GetSetXfermodeMethodId();
  uVar8 = JNIExceptionHandler::CallObjectMethod((_JNIEnv *)p_Var3,param_1,p_Var7,uVar6);
  (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,uVar8);
  (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,uVar6);
  (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,p_Var5);
  (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x003306fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)p_Var3 + 0xb8))(p_Var3,uVar4);
  return;
}


// ===== 00330700  rive_android::CanvasRenderPaint::SetPaintAlpha =====

/* rive_android::CanvasRenderPaint::SetPaintAlpha(_jobject*, int) */

void rive_android::CanvasRenderPaint::SetPaintAlpha(_jobject *param_1,int param_2)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = (_jobject *)GetJNIEnv();
  uVar2 = GetSetAlphaMethodId();
  _JNIEnv::CallVoidMethod(p_Var1,(_jmethodID *)param_1,uVar2,(ulong)(uint)param_2);
  return;
}


// ===== 00330744  rive_android::CanvasRenderImage::CreateKtBitmapFrom =====

/* rive_android::CanvasRenderImage::CreateKtBitmapFrom(_JNIEnv*, rive::Span<unsigned char const>&)
    */

long rive_android::CanvasRenderImage::CreateKtBitmapFrom(_JNIEnv *param_1,Span *param_2)

{
  undefined4 uVar1;
  long lVar2;
  _jclass *p_Var3;
  _jmethodID *p_Var4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  lVar2 = (**(code **)(*(long *)param_1 + 0x580))(param_1,uVar1);
  if (lVar2 == 0) {
    pcVar7 = "CreateKtBitmapFrom() - NewByteArray() failed.";
  }
  else {
    (**(code **)(*(long *)param_1 + 0x680))(param_1,lVar2,0,uVar1,*(undefined8 *)param_2);
    p_Var3 = (_jclass *)GetAndroidBitmapFactoryClass();
    p_Var4 = (_jmethodID *)GetDecodeByteArrayStaticMethodId();
    uVar5 = SizeTToInt(*(ulong *)(param_2 + 8));
    lVar6 = JNIExceptionHandler::CallStaticObjectMethod
                      (param_1,p_Var3,p_Var4,lVar2,0,uVar5 & 0xffffffff);
    (**(code **)(*(long *)param_1 + 0xb8))(param_1,lVar2);
    (**(code **)(*(long *)param_1 + 0xb8))(param_1,p_Var3);
    if (lVar6 != 0) {
      return lVar6;
    }
    pcVar7 = "CreateKtBitmapFrom() - decodeByteArray() failed.";
  }
  RiveLogE("RiveLN/CanvasRenderImage",pcVar7);
  return 0;
}


// ===== 00330838  rive_android::CanvasRenderImage::CanvasRenderImage =====

/* rive_android::CanvasRenderImage::CanvasRenderImage(rive::Span<unsigned char const>) */

void __thiscall
rive_android::CanvasRenderImage::CanvasRenderImage
          (CanvasRenderImage *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  _JNIEnv *p_Var4;
  _jobject *p_Var5;
  _jmethodID *p_Var6;
  undefined8 uVar7;
  _jclass *p_Var8;
  long lVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = param_2;
  uStack_50 = param_3;
  rive::RenderImage::RenderImage((RenderImage *)this);
  puVar2 = PTR_vtable_0067cbf0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined **)this = puVar2 + 0x10;
  p_Var4 = (_JNIEnv *)GetJNIEnv();
  p_Var5 = (_jobject *)CreateKtBitmapFrom(p_Var4,(Span *)&local_58);
  if (p_Var5 == (_jobject *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      RiveLogE("RiveLN/CanvasRenderImage","CanvasRenderImage() - Failed to create a Bitmap.");
      return;
    }
  }
  else {
    p_Var6 = (_jmethodID *)GetBitmapWidthMethodId();
    uVar3 = JNIExceptionHandler::CallIntMethod(p_Var4,p_Var5,p_Var6);
    *(undefined4 *)(this + 0x10) = uVar3;
    p_Var6 = (_jmethodID *)GetBitmapHeightMethodId();
    uVar3 = JNIExceptionHandler::CallIntMethod(p_Var4,p_Var5,p_Var6);
    lVar9 = *(long *)p_Var4;
    *(undefined4 *)(this + 0x14) = uVar3;
    uVar7 = (**(code **)(lVar9 + 0xa8))(p_Var4,p_Var5);
    lVar9 = *(long *)p_Var4;
    *(undefined8 *)(this + 0x30) = uVar7;
    (**(code **)(lVar9 + 0xb8))(p_Var4,p_Var5);
    p_Var8 = (_jclass *)GetJNIEnv();
    p_Var6 = (_jmethodID *)GetPaintClass();
    uVar7 = GetPaintInitMethod();
    uVar7 = _JNIEnv::NewObject(p_Var8,p_Var6,uVar7);
    (**(code **)(*(long *)p_Var8 + 0xb8))(p_Var8,p_Var6);
    p_Var5 = (_jobject *)(**(code **)(*(long *)p_Var4 + 0xa8))(p_Var4,uVar7);
    *(_jobject **)(this + 0x38) = p_Var5;
    p_Var6 = (_jmethodID *)GetSetAntiAliasMethodId();
    JNIExceptionHandler::CallVoidMethod(p_Var4,p_Var5,p_Var6,1);
    p_Var5 = *(_jobject **)(this + 0x38);
    p_Var6 = (_jmethodID *)GetSetFilterBitmapMethodId();
    if (*(long *)(lVar1 + 0x28) == local_48) {
      JNIExceptionHandler::CallVoidMethod(p_Var4,p_Var5,p_Var6,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003309dc  rive_android::CanvasRenderImage::CanvasRenderImage =====

/* rive_android::CanvasRenderImage::CanvasRenderImage(_jobject*) */

void __thiscall
rive_android::CanvasRenderImage::CanvasRenderImage(CanvasRenderImage *this,_jobject *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  _JNIEnv *p_Var3;
  _jmethodID *p_Var4;
  undefined8 uVar5;
  _jclass *p_Var6;
  _jobject *p_Var7;
  long lVar8;
  
  rive::RenderImage::RenderImage((RenderImage *)this);
  puVar1 = PTR_vtable_0067cbf0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined **)this = puVar1 + 0x10;
  p_Var3 = (_JNIEnv *)GetJNIEnv();
  if (param_1 != (_jobject *)0x0) {
    p_Var4 = (_jmethodID *)GetBitmapWidthMethodId();
    uVar2 = JNIExceptionHandler::CallIntMethod(p_Var3,param_1,p_Var4);
    *(undefined4 *)(this + 0x10) = uVar2;
    p_Var4 = (_jmethodID *)GetBitmapHeightMethodId();
    uVar2 = JNIExceptionHandler::CallIntMethod(p_Var3,param_1,p_Var4);
    lVar8 = *(long *)p_Var3;
    *(undefined4 *)(this + 0x14) = uVar2;
    uVar5 = (**(code **)(lVar8 + 0xa8))(p_Var3,param_1);
    *(undefined8 *)(this + 0x30) = uVar5;
    p_Var6 = (_jclass *)GetJNIEnv();
    p_Var4 = (_jmethodID *)GetPaintClass();
    uVar5 = GetPaintInitMethod();
    uVar5 = _JNIEnv::NewObject(p_Var6,p_Var4,uVar5);
    (**(code **)(*(long *)p_Var6 + 0xb8))(p_Var6,p_Var4);
    p_Var7 = (_jobject *)(**(code **)(*(long *)p_Var3 + 0xa8))(p_Var3,uVar5);
    *(_jobject **)(this + 0x38) = p_Var7;
    p_Var4 = (_jmethodID *)GetSetAntiAliasMethodId();
    JNIExceptionHandler::CallVoidMethod(p_Var3,p_Var7,p_Var4,1);
    p_Var7 = *(_jobject **)(this + 0x38);
    p_Var4 = (_jmethodID *)GetSetFilterBitmapMethodId();
    JNIExceptionHandler::CallVoidMethod(p_Var3,p_Var7,p_Var4,1);
    return;
  }
  RiveLogE("RiveLN/CanvasRenderImage","CanvasRenderImage(jBitmap) - Bitmap is null.");
  return;
}


// ===== 00330b24  rive_android::CanvasRenderImage::~CanvasRenderImage =====

/* rive_android::CanvasRenderImage::~CanvasRenderImage() */

void __thiscall rive_android::CanvasRenderImage::~CanvasRenderImage(CanvasRenderImage *this)

{
  long *plVar1;
  
  *(undefined **)this = PTR_vtable_0067cbf0 + 0x10;
  plVar1 = (long *)GetJNIEnv();
  if (*(long *)(this + 0x30) != 0) {
    (**(code **)(*plVar1 + 0xb0))(plVar1);
    *(undefined8 *)(this + 0x30) = 0;
  }
  if (*(long *)(this + 0x38) != 0) {
    (**(code **)(*plVar1 + 0xb0))(plVar1);
    *(undefined8 *)(this + 0x38) = 0;
  }
  rive::RenderImage::~RenderImage((RenderImage *)this);
  return;
}


// ===== 00330b94  rive_android::CanvasRenderImage::~CanvasRenderImage =====

/* rive_android::CanvasRenderImage::~CanvasRenderImage() */

void __thiscall rive_android::CanvasRenderImage::~CanvasRenderImage(CanvasRenderImage *this)

{
  ~CanvasRenderImage(this);
  operator_delete(this);
  return;
}


// ===== 00330bb8  rive::RenderPath::addPath =====

/* rive::RenderPath::addPath(rive::CommandPath*, rive::Mat2D const&) */

void __thiscall rive::RenderPath::addPath(RenderPath *this,CommandPath *param_1,Mat2D *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00330bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x58))(this,uVar1,param_2);
  return;
}


// ===== 00330bfc  rive::RenderPath::renderPath =====

/* rive::RenderPath::renderPath() */

void rive::RenderPath::renderPath(void)

{
  return;
}


// ===== 00330c00  rive::RenderPath::renderPath =====

/* rive::RenderPath::renderPath() const */

void rive::RenderPath::renderPath(void)

{
  return;
}


// ===== 00330c04  rive::RenderPath::addRenderPathBackwards =====

/* rive::RenderPath::addRenderPathBackwards(rive::RenderPath const*, rive::Mat2D const&) */

void rive::RenderPath::addRenderPathBackwards(RenderPath *param_1,Mat2D *param_2)

{
  return;
}


// ===== 00330c08  rive::RenderPaint::feather =====

/* rive::RenderPaint::feather(float) */

void rive::RenderPaint::feather(float param_1)

{
  return;
}


// ===== 00330c0c  rive_android::CanvasRenderPaint::invalidateStroke =====

/* rive_android::CanvasRenderPaint::invalidateStroke() */

void rive_android::CanvasRenderPaint::invalidateStroke(void)

{
  return;
}


// ===== 00330c10  rive_android::LinearGradientCanvasShader::~LinearGradientCanvasShader =====

/* rive_android::LinearGradientCanvasShader::~LinearGradientCanvasShader() */

void __thiscall
rive_android::LinearGradientCanvasShader::~LinearGradientCanvasShader
          (LinearGradientCanvasShader *this)

{
  long *plVar1;
  
  *(undefined **)this = PTR_vtable_0067cbf8 + 0x10;
  if (*(long *)(this + 0x10) != 0) {
    plVar1 = (long *)GetJNIEnv();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(this + 0x10));
  }
  rive::RenderShader::~RenderShader((RenderShader *)this);
  operator_delete(this);
  return;
}


// ===== 00330c64  rive_android::CanvasShader::~CanvasShader =====

/* rive_android::CanvasShader::~CanvasShader() */

void __thiscall rive_android::CanvasShader::~CanvasShader(CanvasShader *this)

{
  long *plVar1;
  
  *(undefined **)this = PTR_vtable_0067cbf8 + 0x10;
  if (*(long *)(this + 0x10) != 0) {
    plVar1 = (long *)GetJNIEnv();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(this + 0x10));
  }
  rive::RenderShader::~RenderShader((RenderShader *)this);
  return;
}


// ===== 00330cb0  rive_android::RadialGradientCanvasShader::~RadialGradientCanvasShader =====

/* rive_android::RadialGradientCanvasShader::~RadialGradientCanvasShader() */

void __thiscall
rive_android::RadialGradientCanvasShader::~RadialGradientCanvasShader
          (RadialGradientCanvasShader *this)

{
  long *plVar1;
  
  *(undefined **)this = PTR_vtable_0067cbf8 + 0x10;
  if (*(long *)(this + 0x10) != 0) {
    plVar1 = (long *)GetJNIEnv();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(this + 0x10));
  }
  rive::RenderShader::~RenderShader((RenderShader *)this);
  operator_delete(this);
  return;
}


// ===== 00330d04  rive_android::CanvasShader::~CanvasShader =====

/* rive_android::CanvasShader::~CanvasShader() */

void __thiscall rive_android::CanvasShader::~CanvasShader(CanvasShader *this)

{
  long *plVar1;
  
  *(undefined **)this = PTR_vtable_0067cbf8 + 0x10;
  if (*(long *)(this + 0x10) != 0) {
    plVar1 = (long *)GetJNIEnv();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(this + 0x10));
  }
  rive::RenderShader::~RenderShader((RenderShader *)this);
  operator_delete(this);
  return;
}


// ===== 00330d58  rive_android::JStringToString =====

/* rive_android::JStringToString(_JNIEnv*, _jstring*) */

void __thiscall rive_android::JStringToString(rive_android *this,_JNIEnv *param_1,_jstring *param_2)

{
  char *__s;
  size_t __n;
  long *in_x8;
  void *__dest;
  
  if (param_1 == (_JNIEnv *)0x0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    return;
  }
  __s = (char *)(**(code **)(*(long *)this + 0x548))(this,param_1,0);
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0031faf0();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00330e00;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    in_x8[1] = __n;
    in_x8[2] = (long)__dest;
    *in_x8 = (__n | 0xf) + 2;
  }
  memmove(__dest,__s,__n);
LAB_00330e00:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* WARNING: Could not recover jumptable at 0x00330e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x550))(this,param_1,__s);
  return;
}


// ===== 00330e34  rive_android::SizeTToInt =====

/* rive_android::SizeTToInt(unsigned long) */

ulong rive_android::SizeTToInt(ulong param_1)

{
  if (0x7ffffffe < param_1) {
    param_1 = 0x7fffffff;
  }
  return param_1;
}


// ===== 00330e44  rive_android::JIntToSizeT =====

/* rive_android::JIntToSizeT(int) */

int rive_android::JIntToSizeT(int param_1)

{
  if (-1 < param_1) {
    return param_1;
  }
  RiveLogW("RiveLN/JIntToSizeT","Value is a negative number %d");
  return 0;
}


// ===== 00330e7c  rive_android::VecUInt32ToJIntArray =====

/* rive_android::VecUInt32ToJIntArray(_JNIEnv*, std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> > const&) */

void __thiscall
rive_android::VecUInt32ToJIntArray(rive_android *this,_JNIEnv *param_1,vector *param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  long *in_x8;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined4 *puVar14;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar5 = (**(code **)(*(long *)this + 0x598))
                    (this,(ulong)(*(long *)(param_1 + 8) - *(long *)param_1) >> 2);
  if (lVar5 == 0) {
    *in_x8 = 0;
    in_x8[1] = (long)this;
    goto LAB_00330fb4;
  }
  puVar13 = *(undefined4 **)param_1;
  puVar1 = *(undefined4 **)(param_1 + 8);
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  uVar2 = (long)puVar1 - (long)puVar13;
  if (uVar2 == 0) {
    puVar7 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
  }
  else {
    if ((long)uVar2 < 0) {
      FUN_00330fec(&local_70);
                    /* WARNING: Subroutine does not return */
      FUN_0031fb04("vector");
    }
    puVar6 = (undefined4 *)operator_new(uVar2);
    puVar8 = puVar6;
    if ((0x1b < uVar2 - 4) && (0x1f < (ulong)((long)puVar6 - (long)puVar13))) {
      puVar10 = (undefined8 *)(puVar6 + 4);
      puVar11 = (undefined8 *)(puVar13 + 4);
      uVar2 = (uVar2 - 4 >> 2) + 1;
      uVar9 = uVar2 & 0x7ffffffffffffff8;
      puVar7 = puVar6 + uVar9;
      uVar12 = uVar9;
      do {
        puVar4 = puVar11 + -1;
        uVar15 = puVar11[-2];
        uVar17 = puVar11[1];
        uVar16 = *puVar11;
        uVar12 = uVar12 - 8;
        puVar11 = puVar11 + 4;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar15;
        puVar10[1] = uVar17;
        *puVar10 = uVar16;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      puVar8 = puVar7;
      puVar13 = puVar13 + uVar9;
      if (uVar2 == uVar9) goto LAB_00330f80;
    }
    do {
      puVar14 = puVar13 + 1;
      puVar7 = puVar8 + 1;
      *puVar8 = *puVar13;
      puVar8 = puVar7;
      puVar13 = puVar14;
    } while (puVar14 != puVar1);
  }
LAB_00330f80:
  (**(code **)(*(long *)this + 0x698))
            (this,lVar5,0,(ulong)((long)puVar7 - (long)puVar6) >> 2,puVar6);
  *in_x8 = lVar5;
  in_x8[1] = (long)this;
  if (puVar6 != (undefined4 *)0x0) {
    operator_delete(puVar6);
  }
LAB_00330fb4:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00330fec  FUN_00330fec =====

void FUN_00330fec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 00331000  FUN_00331000 =====

void FUN_00331000(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = (undefined8 *)param_1[1];
  puVar2 = puVar4;
  if (puVar5 != puVar4) {
    do {
      puVar5 = puVar5 + -1;
      plVar3 = (long *)*puVar5;
      if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    } while (puVar5 != puVar4);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar4;
  operator_delete(puVar2);
  return;
}


// ===== 00331090  FUN_00331090 =====

void FUN_00331090(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)puVar1[3];
    pvVar3 = (void *)*puVar1;
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)puVar1[4];
      puVar4 = puVar6;
      if (puVar7 != puVar6) {
        do {
          puVar7 = puVar7 + -1;
          plVar5 = (long *)*puVar7;
          if ((plVar5 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar5 + 1), iVar2 == 1))
          {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        } while (puVar7 != puVar6);
        puVar4 = (undefined8 *)puVar1[3];
      }
      puVar1[4] = puVar6;
      operator_delete(puVar4);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
    return;
  }
  return;
}


// ===== 00331158  rive_android::FontHelper::RegisterFallbackFont =====

/* rive_android::FontHelper::RegisterFallbackFont(_jbyteArray*) */

void rive_android::FontHelper::RegisterFallbackFont(_jbyteArray *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  rive_android *this;
  undefined8 *puVar7;
  _jbyteArray *in_x2;
  long *local_58;
  void *local_50;
  void *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (rive_android *)GetJNIEnv();
  ByteArrayToUint8Vec(this,(_JNIEnv *)param_1,in_x2);
  HBFont::Decode(&local_58,local_50,(long)local_48 - (long)local_50);
  plVar5 = local_58;
  puVar4 = PTR_s_fallbackFonts_0067cc00;
  if (local_58 == (long *)0x0) {
    RiveLogE("RiveN/FontHelper","RegisterFallbackFont - failed to decode byte fonts");
    plVar3 = local_58;
  }
  else {
    puVar1 = *(undefined8 **)(PTR_s_fallbackFonts_0067cc00 + 8);
    if (puVar1 < *(undefined8 **)(PTR_s_fallbackFonts_0067cc00 + 0x10)) {
      FUN_00340fb0(1,local_58 + 1);
      puVar7 = puVar1 + 1;
      *puVar1 = plVar5;
    }
    else {
      puVar7 = (undefined8 *)
               std::__ndk1::
               vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>::
               __push_back_slow_path<rive::rcp<rive::Font>const&>
                         ((vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>
                           *)PTR_s_fallbackFonts_0067cc00,(rcp *)&local_58);
    }
    *(undefined8 **)(puVar4 + 8) = puVar7;
    plVar3 = local_58;
  }
  if ((plVar3 != (long *)0x0) && (iVar6 = FUN_00340fe0(0xffffffff,plVar3 + 1), iVar6 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar5 != (long *)0x0);
}


// ===== 00331270  rive_android::FontHelper::GetSystemFontBytes =====

/* rive_android::FontHelper::GetSystemFontBytes() */

void rive_android::FontHelper::GetSystemFontBytes(void)

{
  long lVar1;
  rive_android *this;
  _jfieldID *p_Var2;
  _jmethodID *p_Var3;
  _JNIEnv *p_Var4;
  char *pcVar5;
  char *in_x2;
  undefined8 *in_x8;
  long lVar6;
  long local_68;
  long *local_60;
  _jobject *local_58;
  long *local_50;
  _jclass *local_48;
  long *local_40;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  this = (rive_android *)GetJNIEnv();
  FindClass(this,(_JNIEnv *)"app/rive/runtime/kotlin/fonts/FontHelper",in_x2);
  if (local_48 == (_jclass *)0x0) {
    pcVar5 = "FontHelper class not found";
  }
  else {
    p_Var2 = (_jfieldID *)
             (**(code **)(*(long *)this + 0x480))
                       (this,local_48,"Companion",
                        "Lapp/rive/runtime/kotlin/fonts/FontHelper$Companion;");
    if (p_Var2 != (_jfieldID *)0x0) {
      GetStaticObjectField((_JNIEnv *)this,local_48,p_Var2);
      if (local_58 == (_jobject *)0x0) {
        RiveLogE("RiveN/FontHelper","Could not get FontHelper Companion object");
        *in_x8 = 0;
        in_x8[1] = 0;
        in_x8[2] = 0;
      }
      else {
        FindClass(this,(_JNIEnv *)"app/rive/runtime/kotlin/fonts/FontHelper$Companion",
                  (char *)p_Var2);
        if (local_68 == 0) {
          pcVar5 = "FontHelper Companion class not found";
LAB_0033140c:
          RiveLogE("RiveN/FontHelper",pcVar5);
          *in_x8 = 0;
          in_x8[1] = 0;
          in_x8[2] = 0;
        }
        else {
          p_Var3 = (_jmethodID *)
                   (**(code **)(*(long *)this + 0x108))
                             (this,local_68,"getFallbackFontBytes",
                              "(Lapp/rive/runtime/kotlin/fonts/Fonts$FontOpts;)[B");
          if (p_Var3 == (_jmethodID *)0x0) {
            pcVar5 = "FontHelper did not find getFallbackFontBytes() method";
            goto LAB_0033140c;
          }
          p_Var4 = (_JNIEnv *)
                   JNIExceptionHandler::CallObjectMethod((_JNIEnv *)this,local_58,p_Var3,0);
          if (p_Var4 == (_JNIEnv *)0x0) {
            pcVar5 = "FontHelper couldn\'t load fallback font from the system";
            goto LAB_0033140c;
          }
          ByteArrayToUint8Vec(this,p_Var4,(_jbyteArray *)p_Var3);
          (**(code **)(*(long *)this + 0xb8))(this,p_Var4);
        }
        if (local_68 != 0) {
          (**(code **)(*local_60 + 0xb8))();
        }
      }
      if (local_58 != (_jobject *)0x0) {
        (**(code **)(*local_50 + 0xb8))();
      }
      goto LAB_00331448;
    }
    pcVar5 = "FontHelper Companion field not found";
  }
  RiveLogE("RiveN/FontHelper",pcVar5);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
LAB_00331448:
  if (local_48 != (_jclass *)0x0) {
    (**(code **)(*local_40 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00331488  rive_android::FontHelper::PickFonts =====

/* rive_android::FontHelper::PickFonts(unsigned short) */

long * rive_android::FontHelper::PickFonts(ushort param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  rive_android *this;
  _jfieldID *p_Var7;
  _jmethodID *p_Var8;
  _jmethodID *p_Var9;
  void *__s;
  long lVar10;
  undefined **in_x2;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined2 uVar19;
  undefined8 uVar20;
  long *local_110;
  void *local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  long local_c8;
  long *local_c0;
  _jobject *local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  _jobject *local_98;
  long *local_90;
  _jclass *local_88;
  long *local_80;
  ushort local_74 [2];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_74[0] = param_1;
  if (((DAT_00686d50 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_00686d50), iVar6 != 0)) {
    in_x2 = &PTR_LOOP_006513f0;
    DAT_00686d38 = 0;
    DAT_00686d40 = 0;
    DAT_00686d48 = 0;
    __cxa_atexit(FUN_00331000);
    __cxa_guard_release(&DAT_00686d50);
  }
  uVar16 = (ulong)local_74[0];
  uVar11 = *(ulong *)(PTR_s_pickFontCache_0067cb50 + 8);
  if (uVar11 != 0) {
    uVar20 = NEON_cnt(uVar11,1);
    uVar19 = NEON_uaddlv(uVar20,1);
    uVar12 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
    if (uVar12 < 2) {
      uVar13 = (int)uVar11 - 1 & uVar16;
    }
    else {
      uVar13 = uVar16;
      if (uVar11 <= uVar16) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar16 / uVar11;
        }
        uVar13 = uVar16 - uVar13 * uVar11;
      }
    }
    plVar14 = *(long **)(*(long *)PTR_s_pickFontCache_0067cb50 + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      do {
        uVar15 = plVar14[1];
        if (uVar15 == uVar16) {
          if (*(ushort *)(plVar14 + 2) == local_74[0]) {
            plVar14 = plVar14 + 3;
            goto LAB_0033196c;
          }
        }
        else {
          if (uVar12 < 2) {
            uVar15 = uVar15 & uVar11 - 1;
          }
          else if (uVar11 <= uVar15) {
            uVar1 = 0;
            if (uVar11 != 0) {
              uVar1 = uVar15 / uVar11;
            }
            uVar15 = uVar15 - uVar1 * uVar11;
          }
          if (uVar15 != uVar13) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  this = (rive_android *)GetJNIEnv();
  FindClass(this,(_JNIEnv *)"app/rive/runtime/kotlin/fonts/FontFallbackStrategy",(char *)in_x2);
  if (local_88 == (_jclass *)0x0) {
    RiveLogE("RiveN/FontHelper","FontFallbackStrategy class not found");
    plVar14 = &DAT_00686d38;
  }
  else {
    p_Var7 = (_jfieldID *)
             (**(code **)(*(long *)this + 0x480))
                       (this,local_88,"Companion",
                        "Lapp/rive/runtime/kotlin/fonts/FontFallbackStrategy$Companion;");
    GetStaticObjectField((_JNIEnv *)this,local_88,p_Var7);
    FindClass(this,(_JNIEnv *)"app/rive/runtime/kotlin/fonts/FontFallbackStrategy$Companion",
              (char *)p_Var7);
    if (local_a8 == 0) {
      RiveLogE("RiveN/FontHelper","FontFallbackStrategy Companion class not found");
      plVar14 = &DAT_00686d38;
    }
    else {
      p_Var8 = (_jmethodID *)
               (**(code **)(*(long *)this + 0x108))(this,local_a8,"pickFont","(I)Ljava/util/List;");
      GetObjectFromMethod((_JNIEnv *)this,local_98,p_Var8,&local_b8,uVar16);
      GetObjectClass((_JNIEnv *)this,local_b8);
      p_Var8 = (_jmethodID *)
               (**(code **)(*(long *)this + 0x108))(this,local_c8,&DAT_0024cba2,&DAT_0024a36c);
      p_Var9 = (_jmethodID *)
               (**(code **)(*(long *)this + 0x108))
                         (this,local_c8,&DAT_002447e2,"(I)Ljava/lang/Object;");
      uVar5 = JNIExceptionHandler::CallIntMethod((_JNIEnv *)this,local_b8,p_Var8);
      local_e0 = (undefined8 *)0x0;
      local_d8 = (undefined8 *)0x0;
      local_d0 = (undefined8 *)0x0;
      FUN_003319f8(&local_e0,(long)(int)uVar5);
      if (0 < (int)uVar5) {
        uVar17 = 0;
        do {
          GetObjectFromMethod((_JNIEnv *)this,local_b8,p_Var9,&local_f0,(ulong)uVar17);
          lVar10 = local_f0;
          iVar6 = (**(code **)(*(long *)this + 0x558))(this,local_f0);
          uVar11 = (ulong)iVar6;
          local_108 = (void *)0x0;
          local_100 = 0;
          local_f8 = 0;
          if (iVar6 == 0) {
            __s = (void *)0x0;
          }
          else {
            if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00327f8c(&local_108);
            }
            __s = operator_new(uVar11);
            local_108 = __s;
            local_f8 = (long)__s + uVar11;
            memset(__s,0,uVar11);
            local_100 = (long)__s + uVar11;
          }
          lVar3 = local_100;
          (**(code **)(*(long *)this + 0x640))(this,lVar10,0,iVar6,__s);
          HBFont::Decode(&local_110,__s,lVar3 - (long)__s);
          plVar14 = local_110;
          if (local_110 == (long *)0x0) {
            RiveLogE("RiveN/FontHelper","Failed to decode fallback font at index %d for weight %d",
                     (ulong)uVar17,(ulong)local_74[0]);
            plVar14 = local_110;
joined_r0x003317c4:
            local_110 = plVar14;
            if ((plVar14 != (long *)0x0) &&
               (iVar6 = FUN_00340fe0(0xffffffff,plVar14 + 1), iVar6 == 1)) {
              (**(code **)(*plVar14 + 8))(plVar14);
            }
          }
          else {
            if (local_d0 <= local_d8) {
              local_d8 = (undefined8 *)
                         std::__ndk1::
                         vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>
                         ::__push_back_slow_path<rive::rcp<rive::Font>>
                                   ((vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>
                                     *)&local_e0,(rcp *)&local_110);
              plVar14 = local_110;
              goto joined_r0x003317c4;
            }
            local_110 = (long *)0x0;
            *local_d8 = plVar14;
            local_d8 = local_d8 + 1;
          }
          if (local_108 != (void *)0x0) {
            operator_delete(local_108);
          }
          if (local_f0 != 0) {
            (**(code **)(*local_e8 + 0xb8))();
          }
          uVar17 = uVar17 + 1;
        } while (uVar5 != uVar17);
      }
      lVar10 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::__unordered_map_hasher<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::hash<unsigned_short>,std::__ndk1::equal_to<unsigned_short>,true>,std::__ndk1::__unordered_map_equal<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::equal_to<unsigned_short>,std::__ndk1::hash<unsigned_short>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>>>
               ::
               __emplace_unique_key_args<unsigned_short,unsigned_short&,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>
                         ((__hash_table<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::__unordered_map_hasher<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::hash<unsigned_short>,std::__ndk1::equal_to<unsigned_short>,true>,std::__ndk1::__unordered_map_equal<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::equal_to<unsigned_short>,std::__ndk1::hash<unsigned_short>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>>>
                           *)PTR_s_pickFontCache_0067cb50,local_74,local_74,(vector *)&local_e0);
      puVar4 = local_e0;
      puVar18 = local_d8;
      if (local_e0 != (undefined8 *)0x0) {
        while (puVar18 != puVar4) {
          puVar18 = puVar18 + -1;
          plVar14 = (long *)*puVar18;
          if ((plVar14 != (long *)0x0) && (iVar6 = FUN_00340fe0(0xffffffff,plVar14 + 1), iVar6 == 1)
             ) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
        local_d8 = puVar4;
        operator_delete(local_e0);
      }
      if (local_c8 != 0) {
        (**(code **)(*local_c0 + 0xb8))();
      }
      plVar14 = (long *)(lVar10 + 0x18);
      if (local_b8 != (_jobject *)0x0) {
        (**(code **)(*local_b0 + 0xb8))();
      }
    }
    if (local_a8 != 0) {
      (**(code **)(*local_a0 + 0xb8))();
    }
    if (local_98 != (_jobject *)0x0) {
      (**(code **)(*local_90 + 0xb8))();
    }
  }
  if (local_88 != (_jclass *)0x0) {
    (**(code **)(*local_80 + 0xb8))();
  }
LAB_0033196c:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return plVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003319f8  FUN_003319f8 =====

void FUN_003319f8(ulong *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  undefined8 *extraout_x8;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  puVar15 = (undefined8 *)*param_1;
  if (param_2 <= (ulong)((long)(param_1[2] - (long)puVar15) >> 3)) {
    return;
  }
  if (param_2 >> 0x3d != 0) {
    uVar6 = FUN_00332098(param_1);
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    reserve((ulong)extraout_x8);
    cVar4 = (char)extraout_x8;
    if (0x7f < uVar6) {
      if (uVar6 < 0x800) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar4);
      }
      else {
        if (uVar6 >> 0x10 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar4);
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar4);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar4);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar4);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar4);
    return;
  }
  puVar17 = (undefined8 *)param_1[1];
  pvVar7 = operator_new(param_2 * 8);
  lVar3 = (long)puVar17 - (long)puVar15;
  pvVar1 = (void *)((long)pvVar7 + param_2 * 8);
  puVar2 = (undefined8 *)((long)pvVar7 + lVar3);
  if (lVar3 == 0) {
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)pvVar1;
    goto LAB_00331b0c;
  }
  uVar9 = lVar3 - 8;
  puVar8 = puVar2;
  if ((uVar9 < 0x68) ||
     (((undefined8 *)((long)puVar17 + ((uVar9 ^ 0xffffffffffffffff) & 0xfffffffffffffff8)) < puVar2
      && ((undefined8 *)((long)pvVar7 + (uVar9 & 7)) < puVar17)))) {
LAB_00331ae4:
    do {
      puVar17 = puVar17 + -1;
      uVar10 = *puVar17;
      *puVar17 = 0;
      puVar8 = puVar8 + -1;
      *puVar8 = uVar10;
    } while (puVar17 != puVar15);
  }
  else {
    puVar12 = puVar17 + -2;
    uVar9 = (uVar9 >> 3) + 1;
    puVar13 = (undefined8 *)((long)pvVar7 + ((long)puVar12 - (long)puVar15));
    uVar11 = uVar9 & 0x3ffffffffffffffc;
    puVar17 = puVar17 + -uVar11;
    puVar8 = puVar2 + -uVar11;
    uVar14 = uVar11;
    do {
      uVar20 = puVar12[-1];
      uVar19 = puVar12[-2];
      uVar18 = puVar12[1];
      uVar10 = *puVar12;
      uVar14 = uVar14 - 4;
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar12[-1] = 0;
      puVar12[-2] = 0;
      puVar12 = puVar12 + -4;
      puVar13[-1] = uVar20;
      puVar13[-2] = uVar19;
      puVar13[1] = uVar18;
      *puVar13 = uVar10;
      puVar13 = puVar13 + -4;
    } while (uVar14 != 0);
    if (uVar9 != uVar11) goto LAB_00331ae4;
  }
  puVar15 = (undefined8 *)*param_1;
  puVar17 = (undefined8 *)param_1[1];
  *param_1 = (ulong)puVar8;
  param_1[1] = (ulong)puVar2;
  param_1[2] = (ulong)pvVar1;
  while (puVar17 != puVar15) {
    puVar17 = puVar17 + -1;
    plVar16 = (long *)*puVar17;
    if ((plVar16 != (long *)0x0) && (iVar5 = FUN_00340fe0(0xffffffff,plVar16 + 1), iVar5 == 1)) {
      (**(code **)(*plVar16 + 8))(plVar16);
    }
  }
LAB_00331b0c:
  if (puVar15 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar15);
  return;
}


// ===== 00331b74  rive_android::FontHelper::UTF8FromCodepoint =====

/* rive_android::FontHelper::UTF8FromCodepoint(unsigned int) */

void __thiscall rive_android::FontHelper::UTF8FromCodepoint(FontHelper *this,uint param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 *in_x8;
  
  uVar1 = (uint)this;
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)in_x8);
  cVar2 = (char)in_x8;
  if (0x7f < uVar1) {
    if (uVar1 < 0x800) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar2);
    }
    else {
      if (uVar1 >> 0x10 == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar2);
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar2);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar2);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(cVar2);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  push_back(cVar2);
  return;
}


// ===== 00331c48  rive_android::FontHelper::DebugCodepoint =====

/* rive_android::FontHelper::DebugCodepoint(unsigned int) */

void __thiscall rive_android::FontHelper::DebugCodepoint(FontHelper *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)this;
  uVar1 = 0x2421;
  if (uVar3 != 0x7f) {
    uVar1 = uVar3;
  }
  uVar2 = uVar3 | 0x2400;
  if (0x20 < uVar3) {
    uVar2 = uVar1;
  }
  UTF8FromCodepoint((FontHelper *)(ulong)uVar2,param_1);
  return;
}


// ===== 00331c68  rive_android::FontHelper::FindFontFallback =====

/* rive_android::FontHelper::FindFontFallback(unsigned int, unsigned int, rive::Font const*) */

void __thiscall
rive_android::FontHelper::FindFontFallback(FontHelper *this,uint param_1,uint param_2,Font *param_3)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  long *in_x8;
  uint uVar10;
  long lVar11;
  undefined1 auVar12 [12];
  byte local_80 [16];
  void *local_70;
  long *local_68;
  void *local_60;
  void *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  std::__ndk1::mutex::lock();
  if (param_1 == 0) {
    DAT_006860e8 = (**(code **)(*(long *)(ulong)param_2 + 0x28))((long *)(ulong)param_2);
  }
  plVar7 = (long *)PickFonts(DAT_006860e8);
  if ((ulong)param_1 < (ulong)(plVar7[1] - *plVar7 >> 3)) {
    lVar11 = *(long *)(*plVar7 + (ulong)param_1 * 8);
    if (lVar11 != 0) {
LAB_00331cf0:
      FUN_00340fb0(1,lVar11 + 8);
    }
LAB_00331cfc:
    *in_x8 = lVar11;
    goto LAB_00331e7c;
  }
  plVar4 = *(long **)(PTR_s_fallbackFonts_0067cc00 + 8);
  for (plVar7 = *(long **)PTR_s_fallbackFonts_0067cc00; plVar7 != plVar4; plVar7 = plVar7 + 1) {
    uVar8 = (**(code **)(*(long *)*plVar7 + 0x40))((long *)*plVar7,(ulong)this & 0xffffffff);
    if ((uVar8 & 1) != 0) {
      lVar11 = *plVar7;
      if (lVar11 == 0) goto LAB_00331cfc;
      goto LAB_00331cf0;
    }
  }
  GetSystemFontBytes();
  if (local_60 == local_58) {
    RiveLogW("RiveN/FontHelper","FindFontFallback - No system font found");
    *in_x8 = 0;
  }
  else {
    HBFont::Decode(&local_68,local_60,(long)local_58 - (long)local_60);
    if (local_68 == (long *)0x0) {
      pcVar9 = "FindFontFallback - failed to decode system font bytes";
LAB_00331e38:
      RiveLogE("RiveN/FontHelper",pcVar9);
      *in_x8 = 0;
    }
    else {
      auVar12 = (**(code **)(*local_68 + 0x40))(local_68,(ulong)this & 0xffffffff);
      if ((auVar12 & (undefined1  [12])0x1) == (undefined1  [12])0x0) {
        pcVar9 = "FindFontFallback - no fallback found";
        goto LAB_00331e38;
      }
      uVar10 = (uint)this;
      uVar1 = 0x2421;
      if (uVar10 != 0x7f) {
        uVar1 = uVar10;
      }
      uVar2 = uVar10 | 0x2400;
      if (0x20 < uVar10) {
        uVar2 = uVar1;
      }
      UTF8FromCodepoint((FontHelper *)(ulong)uVar2,auVar12._8_4_);
      pvVar3 = (void *)((ulong)local_80 | 1);
      if ((local_80[0] & 1) != 0) {
        pvVar3 = local_70;
      }
      RiveLogD("RiveN/FontHelper",
               "FindFontFallback - found a system fallback for missing glyph: U+%04X \'%s\'",
               (ulong)this & 0xffffffff,pvVar3);
      plVar7 = local_68;
      local_68 = (long *)0x0;
      *in_x8 = (long)plVar7;
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    plVar7 = local_68;
    if ((local_68 != (long *)0x0) && (iVar6 = FUN_00340fe0(0xffffffff,local_68 + 1), iVar6 == 1)) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
LAB_00331e7c:
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00331eb4  std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>::__push_back_slow_path<rive::rcp<rive::Font>const&> =====

/* rive::rcp<rive::Font>* std::__ndk1::vector<rive::rcp<rive::Font>,
   std::__ndk1::allocator<rive::rcp<rive::Font> > >::__push_back_slow_path<rive::rcp<rive::Font>
   const&>(rive::rcp<rive::Font> const&) */

rcp * __thiscall
std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>::
__push_back_slow_path<rive::rcp<rive::Font>const&>
          (vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>> *this,
          rcp *param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  plVar10 = *(long **)this;
  plVar6 = *(long **)(this + 8);
  lVar13 = (long)plVar6 - (long)plVar10;
  lVar14 = lVar13 >> 3;
  uVar4 = lVar14 + 1;
  if (uVar4 >> 0x3d != 0) {
    FUN_00332098(this);
LAB_00332094:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar5 = *(long *)(this + 0x10) - (long)plVar10 >> 2;
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (0x7ffffffffffffff7 < (ulong)(*(long *)(this + 0x10) - (long)plVar10)) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_00332094;
    pvVar3 = operator_new(uVar5 << 3);
  }
  lVar15 = *(long *)param_1;
  plVar11 = (long *)((long)pvVar3 + lVar14 * 8);
  if (lVar15 != 0) {
    FUN_00340fb0(1,lVar15 + 8);
    plVar10 = *(long **)this;
    plVar6 = *(long **)(this + 8);
  }
  pvVar1 = (void *)((long)pvVar3 + uVar5 * 8);
  plVar12 = plVar11 + 1;
  *plVar11 = lVar15;
  if ((long)plVar6 - (long)plVar10 == 0) {
    *(long **)this = plVar11;
    *(long **)(this + 8) = plVar12;
    *(void **)(this + 0x10) = pvVar1;
    goto LAB_0033200c;
  }
  uVar4 = ((long)plVar6 - (long)plVar10) - 8;
  if ((uVar4 < 0x78) ||
     (((long *)((long)plVar6 + (-8 - (uVar4 & 0xfffffffffffffff8))) < plVar11 &&
      ((long *)((long)pvVar3 + (lVar13 - (uVar4 & 0xfffffffffffffff8)) + -8) < plVar6)))) {
LAB_00331fa0:
    do {
      plVar6 = plVar6 + -1;
      lVar13 = *plVar6;
      *plVar6 = 0;
      plVar11 = plVar11 + -1;
      *plVar11 = lVar13;
    } while (plVar6 != plVar10);
  }
  else {
    plVar8 = plVar11 + -2;
    plVar9 = plVar6 + -2;
    uVar4 = (uVar4 >> 3) + 1;
    uVar7 = uVar4 & 0x3ffffffffffffffc;
    plVar6 = plVar6 + -uVar7;
    plVar11 = plVar11 + -uVar7;
    uVar5 = uVar7;
    do {
      lVar16 = plVar9[-1];
      lVar15 = plVar9[-2];
      lVar14 = plVar9[1];
      lVar13 = *plVar9;
      uVar5 = uVar5 - 4;
      plVar9[1] = 0;
      *plVar9 = 0;
      plVar9[-1] = 0;
      plVar9[-2] = 0;
      plVar9 = plVar9 + -4;
      plVar8[-1] = lVar16;
      plVar8[-2] = lVar15;
      plVar8[1] = lVar14;
      *plVar8 = lVar13;
      plVar8 = plVar8 + -4;
    } while (uVar5 != 0);
    if (uVar4 != uVar7) goto LAB_00331fa0;
  }
  plVar10 = *(long **)this;
  plVar6 = *(long **)(this + 8);
  *(long **)this = plVar11;
  *(long **)(this + 8) = plVar12;
  *(void **)(this + 0x10) = pvVar1;
  while (plVar6 != plVar10) {
    plVar6 = plVar6 + -1;
    plVar11 = (long *)*plVar6;
    if ((plVar11 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar11 + 1), iVar2 == 1)) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
  }
LAB_0033200c:
  if (plVar10 != (long *)0x0) {
    operator_delete(plVar10);
  }
  return (rcp *)plVar12;
}


// ===== 00332098  FUN_00332098 =====

void FUN_00332098(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0031fb04("vector");
}


// ===== 003320ac  std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>::__push_back_slow_path<rive::rcp<rive::Font>> =====

/* rive::rcp<rive::Font>* std::__ndk1::vector<rive::rcp<rive::Font>,
   std::__ndk1::allocator<rive::rcp<rive::Font> > >::__push_back_slow_path<rive::rcp<rive::Font>
   >(rive::rcp<rive::Font>&&) */

rcp * __thiscall
std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>::
__push_back_slow_path<rive::rcp<rive::Font>>
          (vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>> *this,
          rcp *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar1 = *(undefined8 **)this;
  puVar14 = *(undefined8 **)(this + 8);
  lVar15 = (long)puVar14 - (long)puVar1 >> 3;
  uVar4 = lVar15 + 1;
  if (uVar4 >> 0x3d != 0) {
    FUN_00332098(this);
LAB_0033226c:
                    /* WARNING: Subroutine does not return */
    FUN_00324008();
  }
  uVar7 = *(long *)(this + 0x10) - (long)puVar1 >> 2;
  if (uVar7 <= uVar4) {
    uVar7 = uVar4;
  }
  if (0x7ffffffffffffff7 < (ulong)(*(long *)(this + 0x10) - (long)puVar1)) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_0033226c;
    pvVar3 = operator_new(uVar7 << 3);
  }
  puVar6 = (undefined8 *)((long)pvVar3 + lVar15 * 8);
  uVar8 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  puVar13 = puVar6 + 1;
  *puVar6 = uVar8;
  if ((long)puVar14 - (long)puVar1 != 0) {
    uVar4 = ((long)puVar14 - (long)puVar1) - 8;
    puVar5 = puVar6;
    if ((0x77 < uVar4) &&
       ((puVar6 <= (undefined8 *)((long)puVar14 + (-8 - (uVar4 & 0xfffffffffffffff8))) ||
        (puVar14 <=
         (undefined8 *)
         ((long)pvVar3 + (((long)puVar14 - (long)puVar1) - (uVar4 & 0xfffffffffffffff8)) + -8))))) {
      puVar10 = puVar14 + -2;
      uVar4 = (uVar4 >> 3) + 1;
      uVar9 = uVar4 & 0x3ffffffffffffffc;
      puVar14 = puVar14 + -uVar9;
      puVar5 = puVar6 + -uVar9;
      puVar6 = puVar6 + -2;
      uVar11 = uVar9;
      do {
        uVar18 = puVar10[-1];
        uVar17 = puVar10[-2];
        uVar16 = puVar10[1];
        uVar8 = *puVar10;
        uVar11 = uVar11 - 4;
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[-1] = 0;
        puVar10[-2] = 0;
        puVar10 = puVar10 + -4;
        puVar6[-1] = uVar18;
        puVar6[-2] = uVar17;
        puVar6[1] = uVar16;
        *puVar6 = uVar8;
        puVar6 = puVar6 + -4;
      } while (uVar11 != 0);
      puVar6 = puVar5;
      if (uVar4 == uVar9) goto LAB_003321f0;
    }
    do {
      puVar14 = puVar14 + -1;
      uVar8 = *puVar14;
      *puVar14 = 0;
      puVar6 = puVar5 + -1;
      *puVar6 = uVar8;
      puVar5 = puVar6;
    } while (puVar14 != puVar1);
  }
LAB_003321f0:
  puVar1 = *(undefined8 **)this;
  puVar14 = *(undefined8 **)(this + 8);
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar13;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar7 * 8);
  while (puVar14 != puVar1) {
    puVar14 = puVar14 + -1;
    plVar12 = (long *)*puVar14;
    if ((plVar12 != (long *)0x0) && (iVar2 = FUN_00340fe0(0xffffffff,plVar12 + 1), iVar2 == 1)) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1);
  }
  return (rcp *)puVar13;
}


// ===== 00332270  std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::__unordered_map_hasher<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::hash<unsigned_short>,std::__ndk1::equal_to<unsigned_short>,true>,std::__ndk1::__unordered_map_equal<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::equal_to<unsigned_short>,std::__ndk1::hash<unsigned_short>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>>>::__emplace_unique_key_args<unsigned_short,unsigned_short&,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>> =====

/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   short, std::__ndk1::vector<rive::rcp<rive::Font>, std::__ndk1::allocator<rive::rcp<rive::Font> >
   > >, void*>*>, bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned short,
   std::__ndk1::vector<rive::rcp<rive::Font>, std::__ndk1::allocator<rive::rcp<rive::Font> > > >,
   std::__ndk1::__unordered_map_hasher<unsigned short, std::__ndk1::__hash_value_type<unsigned
   short, std::__ndk1::vector<rive::rcp<rive::Font>, std::__ndk1::allocator<rive::rcp<rive::Font> >
   > >, std::__ndk1::hash<unsigned short>, std::__ndk1::equal_to<unsigned short>, true>,
   std::__ndk1::__unordered_map_equal<unsigned short, std::__ndk1::__hash_value_type<unsigned short,
   std::__ndk1::vector<rive::rcp<rive::Font>, std::__ndk1::allocator<rive::rcp<rive::Font> > > >,
   std::__ndk1::equal_to<unsigned short>, std::__ndk1::hash<unsigned short>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned short,
   std::__ndk1::vector<rive::rcp<rive::Font>, std::__ndk1::allocator<rive::rcp<rive::Font> > > > >
   >::__emplace_unique_key_args<unsigned short, unsigned short&,
   std::__ndk1::vector<rive::rcp<rive::Font>, std::__ndk1::allocator<rive::rcp<rive::Font> > >
   >(unsigned short const&, unsigned short&, std::__ndk1::vector<rive::rcp<rive::Font>,
   std::__ndk1::allocator<rive::rcp<rive::Font> > >&&) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::__unordered_map_hasher<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::hash<unsigned_short>,std::__ndk1::equal_to<unsigned_short>,true>,std::__ndk1::__unordered_map_equal<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::equal_to<unsigned_short>,std::__ndk1::hash<unsigned_short>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>>>
::
__emplace_unique_key_args<unsigned_short,unsigned_short&,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::__unordered_map_hasher<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::hash<unsigned_short>,std::__ndk1::equal_to<unsigned_short>,true>,std::__ndk1::__unordered_map_equal<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::equal_to<unsigned_short>,std::__ndk1::hash<unsigned_short>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>>>
           *this,ushort *param_1,ushort *param_2,vector *param_3)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::__unordered_map_hasher<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::hash<unsigned_short>,std::__ndk1::equal_to<unsigned_short>,true>,std::__ndk1::__unordered_map_equal<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::equal_to<unsigned_short>,std::__ndk1::hash<unsigned_short>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>>>
  *p_Var4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined2 uVar12;
  undefined8 uVar13;
  float fVar14;
  long lVar15;
  long lVar16;
  
  uVar11 = *(ulong *)(this + 8);
  uVar10 = (ulong)*param_1;
  if (uVar11 != 0) {
    uVar13 = NEON_cnt(uVar11,1);
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = (int)uVar11 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar11 <= uVar10) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar10 / uVar11;
        }
        unaff_x24 = uVar10 - uVar8 * uVar11;
      }
    }
    plVar5 = *(long **)(*(long *)this + unaff_x24 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar8 = plVar5[1];
        if (uVar8 == uVar10) {
          if (*(ushort *)(plVar5 + 2) == *param_1) {
            return;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar8 = uVar8 & uVar11 - 1;
          }
          else if (uVar11 <= uVar8) {
            uVar2 = 0;
            if (uVar11 != 0) {
              uVar2 = uVar8 / uVar11;
            }
            uVar8 = uVar8 - uVar2 * uVar11;
          }
          if (uVar8 != unaff_x24) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  plVar5 = (long *)operator_new(0x30);
  uVar1 = *param_2;
  lVar16 = *(long *)(param_3 + 8);
  lVar15 = *(long *)param_3;
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  lVar6 = *(long *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = 0;
  lVar9 = *(long *)(this + 0x18);
  plVar5[4] = lVar16;
  plVar5[3] = lVar15;
  fVar14 = *(float *)(this + 0x20);
  *plVar5 = 0;
  plVar5[1] = uVar10;
  *(ushort *)(plVar5 + 2) = uVar1;
  plVar5[5] = lVar6;
  if ((uVar11 == 0) || (fVar14 * (float)uVar11 < (float)(lVar9 + 1))) {
    if (uVar11 < 3) {
      uVar7 = 1;
    }
    else {
      uVar7 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar7 = uVar7 | uVar11 << 1;
    uVar11 = (ulong)((float)(lVar9 + 1) / fVar14);
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      uVar7 = std::__ndk1::__next_prime(uVar7);
    }
    uVar11 = *(ulong *)(this + 8);
    if (uVar11 < uVar7) {
LAB_003323f8:
      __do_rehash<true>(this,uVar7);
    }
    else if (uVar7 < uVar11) {
      uVar8 = (ulong)((float)*(ulong *)(this + 0x18) / *(float *)(this + 0x20));
      if (uVar11 < 3) {
LAB_0033246c:
        uVar8 = std::__ndk1::__next_prime(uVar8);
      }
      else {
        uVar13 = NEON_cnt(uVar11,1);
        uVar12 = NEON_uaddlv(uVar13,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12)) goto LAB_0033246c;
        if (1 < uVar8) {
          uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
        }
      }
      if (uVar7 <= uVar8) {
        uVar7 = uVar8;
      }
      if (uVar7 < uVar11) goto LAB_003323f8;
    }
    uVar11 = *(ulong *)(this + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x24 = (int)uVar11 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar11 <= uVar10) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar10 / uVar11;
        }
        unaff_x24 = uVar10 - uVar7 * uVar11;
      }
    }
  }
  lVar6 = *(long *)this;
  plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    p_Var4 = this + 0x10;
    lVar9 = *(long *)p_Var4;
    *(long **)p_Var4 = plVar5;
    *plVar5 = lVar9;
    *(__hash_table<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::__unordered_map_hasher<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::hash<unsigned_short>,std::__ndk1::equal_to<unsigned_short>,true>,std::__ndk1::__unordered_map_equal<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::equal_to<unsigned_short>,std::__ndk1::hash<unsigned_short>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>>>
      **)(lVar6 + unaff_x24 * 8) = p_Var4;
    if (*plVar5 == 0) goto LAB_00332534;
    uVar10 = *(ulong *)(*plVar5 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar10 = uVar10 & uVar11 - 1;
    }
    else if (uVar11 <= uVar10) {
      uVar7 = 0;
      if (uVar11 != 0) {
        uVar7 = uVar10 / uVar11;
      }
      uVar10 = uVar10 - uVar7 * uVar11;
    }
    plVar3 = (long *)(*(long *)this + uVar10 * 8);
  }
  else {
    *plVar5 = *plVar3;
  }
  *plVar3 = (long)plVar5;
LAB_00332534:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return;
}


// ===== 00332558  std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::__unordered_map_hasher<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::hash<unsigned_short>,std::__ndk1::equal_to<unsigned_short>,true>,std::__ndk1::__unordered_map_equal<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::equal_to<unsigned_short>,std::__ndk1::hash<unsigned_short>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>>>::__do_rehash<true> =====

/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned short,
   std::__ndk1::vector<rive::rcp<rive::Font>, std::__ndk1::allocator<rive::rcp<rive::Font> > > >,
   std::__ndk1::__unordered_map_hasher<unsigned short, std::__ndk1::__hash_value_type<unsigned
   short, std::__ndk1::vector<rive::rcp<rive::Font>, std::__ndk1::allocator<rive::rcp<rive::Font> >
   > >, std::__ndk1::hash<unsigned short>, std::__ndk1::equal_to<unsigned short>, true>,
   std::__ndk1::__unordered_map_equal<unsigned short, std::__ndk1::__hash_value_type<unsigned short,
   std::__ndk1::vector<rive::rcp<rive::Font>, std::__ndk1::allocator<rive::rcp<rive::Font> > > >,
   std::__ndk1::equal_to<unsigned short>, std::__ndk1::hash<unsigned short>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned short,
   std::__ndk1::vector<rive::rcp<rive::Font>, std::__ndk1::allocator<rive::rcp<rive::Font> > > > >
   >::__do_rehash<true>(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::__unordered_map_hasher<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::hash<unsigned_short>,std::__ndk1::equal_to<unsigned_short>,true>,std::__ndk1::__unordered_map_equal<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::equal_to<unsigned_short>,std::__ndk1::hash<unsigned_short>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>>>
::__do_rehash<true>(__hash_table<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::__unordered_map_hasher<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::hash<unsigned_short>,std::__ndk1::equal_to<unsigned_short>,true>,std::__ndk1::__unordered_map_equal<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::equal_to<unsigned_short>,std::__ndk1::hash<unsigned_short>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>>>
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
      *(__hash_table<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::__unordered_map_hasher<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::hash<unsigned_short>,std::__ndk1::equal_to<unsigned_short>,true>,std::__ndk1::__unordered_map_equal<unsigned_short,std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>,std::__ndk1::equal_to<unsigned_short>,std::__ndk1::hash<unsigned_short>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_short,std::__ndk1::vector<rive::rcp<rive::Font>,std::__ndk1::allocator<rive::rcp<rive::Font>>>>>>
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


// ===== 003326b4  _INIT_2 =====

void _INIT_2(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_fallbackFonts_0067cc00;
  *(undefined8 *)PTR_s_fallbackFonts_0067cc00 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  __cxa_atexit(FUN_00331000,puVar1,&PTR_LOOP_006513f0);
  puVar1 = PTR_s_pickFontCache_0067cb50;
  *(undefined4 *)(PTR_s_pickFontCache_0067cb50 + 0x20) = 0x3f800000;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  __cxa_atexit(FUN_00331090,puVar1,&PTR_LOOP_006513f0);
  __cxa_atexit(PTR__mutex_0067cb30,PTR_s_fallbackFontsMutex_0067cb48,&PTR_LOOP_006513f0);
  return;
}


// ===== 00332730  rive_android::GetJNIEnv =====

/* rive_android::GetJNIEnv() */

void rive_android::GetJNIEnv(void)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 local_30;
  long local_28;
  
  puVar2 = PTR_g_JVM_0067caf8;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  iVar3 = (**(code **)(**(long **)PTR_g_JVM_0067caf8 + 0x30))
                    (*(long **)PTR_g_JVM_0067caf8,&local_30,0x10006);
  if (iVar3 == -3) {
    RiveLogE("RiveN/GetJNIEnv","GetJNIEnv: unsupported version %d",0xfffffffd);
  }
  else if (iVar3 == -2) {
    RiveLogW("RiveN/GetJNIEnv","GetJNIEnv - Not Attached.");
    iVar3 = (**(code **)(**(long **)puVar2 + 0x20))(*(long **)puVar2,&local_30,0);
    if (iVar3 != 0) {
      RiveLogE("RiveN/GetJNIEnv","Failed to attach current thread.");
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 0033280c  rive_android::DetachThread =====

/* rive_android::DetachThread() */

void rive_android::DetachThread(void)

{
  int iVar1;
  
  RiveLogD("RiveLN/DetachThread","Detaching thread.");
  iVar1 = (**(code **)(**(long **)PTR_g_JVM_0067caf8 + 0x28))();
  if (iVar1 != 0) {
    RiveLogE("RiveN/GetJNIEnv","DetachCurrentThread failed.");
    return;
  }
  return;
}


// ===== 00332864  rive_android::LogReferenceTables =====

/* rive_android::LogReferenceTables() */

void rive_android::LogReferenceTables(void)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  _jmethodID *p_Var4;
  undefined8 uVar5;
  _jclass *local_40;
  long local_38;
  
  puVar2 = PTR_g_JVM_0067caf8;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (_jclass *)0x0;
  iVar3 = (**(code **)(**(long **)PTR_g_JVM_0067caf8 + 0x30))
                    (*(long **)PTR_g_JVM_0067caf8,&local_40,0x10006);
  if (iVar3 == -3) {
    RiveLogE("RiveN/GetJNIEnv","GetJNIEnv: unsupported version %d",0xfffffffd);
  }
  else if (iVar3 == -2) {
    RiveLogW("RiveN/GetJNIEnv","GetJNIEnv - Not Attached.");
    iVar3 = (**(code **)(**(long **)puVar2 + 0x20))(*(long **)puVar2,&local_40,0);
    if (iVar3 != 0) {
      RiveLogE("RiveN/GetJNIEnv","Failed to attach current thread.");
    }
  }
  p_Var4 = (_jmethodID *)(**(code **)(*(long *)local_40 + 0x30))(local_40,"dalvik/system/VMDebug");
  local_40 = (_jclass *)0x0;
  iVar3 = (**(code **)(**(long **)puVar2 + 0x30))(*(long **)puVar2,&local_40,0x10006);
  if (iVar3 == -3) {
    RiveLogE("RiveN/GetJNIEnv","GetJNIEnv: unsupported version %d",0xfffffffd);
  }
  else if (iVar3 == -2) {
    RiveLogW("RiveN/GetJNIEnv","GetJNIEnv - Not Attached.");
    iVar3 = (**(code **)(**(long **)puVar2 + 0x20))(*(long **)puVar2,&local_40,0);
    if (iVar3 != 0) {
      RiveLogE("RiveN/GetJNIEnv","Failed to attach current thread.");
    }
  }
  uVar5 = (**(code **)(*(long *)local_40 + 0x388))
                    (local_40,p_Var4,"dumpReferenceTables",&DAT_00241fd9);
  local_40 = (_jclass *)0x0;
  iVar3 = (**(code **)(**(long **)puVar2 + 0x30))(*(long **)puVar2,&local_40,0x10006);
  if (iVar3 == -3) {
    RiveLogE("RiveN/GetJNIEnv","GetJNIEnv: unsupported version %d",0xfffffffd);
  }
  else if (iVar3 == -2) {
    RiveLogW("RiveN/GetJNIEnv","GetJNIEnv - Not Attached.");
    iVar3 = (**(code **)(**(long **)puVar2 + 0x20))(*(long **)puVar2,&local_40,0);
    if (iVar3 != 0) {
      RiveLogE("RiveN/GetJNIEnv","Failed to attach current thread.");
    }
  }
  _JNIEnv::CallStaticVoidMethod(local_40,p_Var4,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00332ac0  _JNIEnv::CallStaticVoidMethod =====

/* _JNIEnv::CallStaticVoidMethod(_jclass*, _jmethodID*, ...) */

void _JNIEnv::CallStaticVoidMethod(_jclass *param_1,_jmethodID *param_2,...)

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
  (**(code **)(*(long *)param_1 + 0x470))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00332b5c  rive_android::SetSDKVersion =====

/* rive_android::SetSDKVersion() */

void rive_android::SetSDKVersion(void)

{
  long lVar1;
  long lVar2;
  char acStack_127 [255];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __system_property_get("ro.build.version.sdk",acStack_127);
  lVar2 = strtol(acStack_127,(char **)0x0,10);
  *(long *)PTR_g_sdkVersion_0067cbe8 = lVar2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00332bc8  rive_android::GetFit =====

/* rive_android::GetFit(unsigned char) */

uchar rive_android::GetFit(uchar param_1)

{
  return param_1;
}


// ===== 00332bcc  rive_android::GetFit =====

/* rive_android::GetFit(_JNIEnv*, _jobject*) */

undefined4 rive_android::GetFit(_JNIEnv *param_1,_jobject *param_2)

{
  int iVar1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  char *__s1;
  undefined4 uVar4;
  
  p_Var2 = (_jmethodID *)GetFitNameMethodId();
  uVar3 = JNIExceptionHandler::CallObjectMethod(param_1,param_2,p_Var2);
  __s1 = (char *)(**(code **)(*(long *)param_1 + 0x548))(param_1,uVar3,0);
  iVar1 = strcmp(__s1,"FILL");
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = strcmp(__s1,"CONTAIN");
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    else {
      iVar1 = strcmp(__s1,"COVER");
      if (iVar1 == 0) {
        uVar4 = 2;
      }
      else {
        iVar1 = strcmp(__s1,"FIT_WIDTH");
        if (iVar1 == 0) {
          uVar4 = 3;
        }
        else {
          iVar1 = strcmp(__s1,"FIT_HEIGHT");
          if (iVar1 == 0) {
            uVar4 = 4;
          }
          else {
            iVar1 = strcmp(__s1,"NONE");
            if (iVar1 == 0) {
              uVar4 = 5;
            }
            else {
              iVar1 = strcmp(__s1,"SCALE_DOWN");
              if (iVar1 == 0) {
                uVar4 = 6;
              }
              else {
                iVar1 = strcmp(__s1,"LAYOUT");
                uVar4 = 7;
                if (iVar1 != 0) {
                  uVar4 = 5;
                }
              }
            }
          }
        }
      }
    }
  }
  (**(code **)(*(long *)param_1 + 0x550))(param_1,uVar3,__s1);
  (**(code **)(*(long *)param_1 + 0xb8))(param_1,uVar3);
  return uVar4;
}


// ===== 00332d38  rive_android::GetAlignment =====

/* rive_android::GetAlignment(unsigned char) */

undefined4 rive_android::GetAlignment(uchar param_1)

{
  if (param_1 < 9) {
    return *(undefined4 *)(&PTR_topLeft_00651e50)[param_1];
  }
  RiveLogE("RiveN/GetAlignment","Invalid alignment ordinal: %u");
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00332d90  rive_android::GetAlignment =====

/* rive_android::GetAlignment(_JNIEnv*, _jobject*) */

undefined1  [16] rive_android::GetAlignment(_JNIEnv *param_1,_jobject *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  _jmethodID *p_Var4;
  undefined8 uVar5;
  char *__s1;
  ulong *puVar6;
  undefined8 uVar7;
  ulong local_40;
  
  p_Var4 = (_jmethodID *)GetAlignmentNameMethodId();
  uVar5 = JNIExceptionHandler::CallObjectMethod(param_1,param_2,p_Var4);
  __s1 = (char *)(**(code **)(*(long *)param_1 + 0x548))(param_1,uVar5,0);
  local_40 = *(ulong *)PTR_center_0067cc08;
  iVar2 = strcmp(__s1,"TOP_LEFT");
  puVar6 = (ulong *)PTR_topLeft_0067cc18;
  if ((((iVar2 != 0) &&
       (iVar2 = strcmp(__s1,"TOP_CENTER"), puVar6 = (ulong *)PTR_topCenter_0067cc20, iVar2 != 0)) &&
      (iVar2 = strcmp(__s1,"TOP_RIGHT"), puVar6 = (ulong *)PTR_topRight_0067cc28, iVar2 != 0)) &&
     (iVar2 = strcmp(__s1,"CENTER_LEFT"), puVar6 = (ulong *)PTR_centerLeft_0067cc30, iVar2 != 0)) {
    iVar2 = strcmp(__s1,"CENTER");
    if (iVar2 == 0) goto LAB_00332f20;
    iVar2 = strcmp(__s1,"CENTER_RIGHT");
    puVar6 = (ulong *)PTR_centerRight_0067cc38;
    if (((iVar2 != 0) &&
        (iVar2 = strcmp(__s1,"BOTTOM_LEFT"), puVar6 = (ulong *)PTR_bottomLeft_0067cc40, iVar2 != 0))
       && (iVar2 = strcmp(__s1,"BOTTOM_CENTER"), puVar6 = (ulong *)PTR_bottomCenter_0067cc48,
          iVar2 != 0)) {
      uVar3 = strcmp(__s1,"BOTTOM_RIGHT");
      uVar7 = NEON_cmeq((ulong)uVar3,0,4);
      local_40 = NEON_bit(local_40,*(undefined8 *)PTR_bottomRight_0067cc10,
                          CONCAT44((int)uVar7,(int)uVar7),1);
      goto LAB_00332f20;
    }
  }
  local_40 = *puVar6;
LAB_00332f20:
  (**(code **)(*(long *)param_1 + 0x550))(param_1,uVar5,__s1);
  (**(code **)(*(long *)param_1 + 0xb8))(param_1,uVar5);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_40;
  return auVar1;
}


// ===== 00332f68  rive_android::GetFactory =====

/* rive_android::GetFactory(rive_android::RendererType) */

void rive_android::GetFactory(RefWorker *param_1)

{
  long lVar1;
  pointer_____offset_0x10___ *ppuVar2;
  long lVar3;
  RefWorker *local_30;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((int)param_1 == 0) {
    RefWorker::RiveWorker(param_1);
    if (local_30 != (RefWorker *)0x0) {
      RefWorker::unref(local_30);
      ppuVar2 = &PTR_PTR__Factory_006860f0;
      goto LAB_00332fb0;
    }
  }
  ppuVar2 = &PTR_PTR__Factory_006860f8;
LAB_00332fb0:
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(ppuVar2);
}


// ===== 00332fd4  rive_android::Import =====

/* rive_android::Import(unsigned char*, int, rive_android::RendererType, rive::FileAssetLoader*) */

void rive_android::Import(RefWorker *param_1,int param_2,int param_3,RefWorker *param_4)

{
  pointer_____offset_0x10___ *ppuVar1;
  long lVar2;
  RefWorker *pRVar3;
  int iVar4;
  long local_60;
  int local_54;
  RefWorker *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((param_3 == 0) && (RefWorker::RiveWorker(param_1), local_50 != (RefWorker *)0x0)) {
    RefWorker::unref(local_50);
    ppuVar1 = &PTR_PTR__Factory_006860f0;
  }
  else {
    ppuVar1 = &PTR_PTR__Factory_006860f8;
  }
  if (param_4 != (RefWorker *)0x0) {
    FUN_00340fb0(1,param_4 + 8);
  }
  local_50 = param_4;
  rive::File::import(&local_60,param_1,(long)param_2,ppuVar1,&local_54,&local_50,0);
  pRVar3 = local_50;
  if ((local_50 != (RefWorker *)0x0) && (iVar4 = FUN_00340fe0(0xffffffff,local_50 + 8), iVar4 == 1))
  {
    (**(code **)(*(long *)pRVar3 + 8))(pRVar3);
  }
  if (local_54 == 2) {
    iVar4 = ThrowMalformedFileException("Malformed Rive File.");
  }
  else if (local_54 == 1) {
    iVar4 = ThrowUnsupportedRuntimeVersionException("Unsupported Rive File Version.");
  }
  else {
    if (local_54 == 0) goto LAB_003330ec;
    iVar4 = ThrowRiveException("Unknown error loading file.");
  }
  local_60 = (long)iVar4;
LAB_003330ec:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60);
}


// ===== 00333118  rive_android::renderImageFromAndroidDecode =====

/* rive_android::renderImageFromAndroidDecode(rive::Span<unsigned char const>, bool,
   rive_android::RenderContext*) */

void rive_android::renderImageFromAndroidDecode
               (undefined8 *param_1,undefined8 param_2,ulong param_3,char *param_4,long *param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uVar9;
  rive_android *this;
  _jmethodID *p_Var10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  uint *puVar14;
  void *pvVar15;
  AndroidImage *pAVar16;
  char *pcVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  void *local_88;
  _jclass *local_80;
  long *local_78;
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pcVar13 = param_4;
  this = (rive_android *)GetJNIEnv();
  FindClass(this,(_JNIEnv *)"app/rive/runtime/kotlin/core/ImageDecoder",pcVar13);
  p_Var10 = (_jmethodID *)
            (**(code **)(*(long *)this + 0x388))(this,local_80,"decodeToBitmap","([B)[I");
  uVar8 = SizeTToInt(param_3);
  lVar11 = (**(code **)(*(long *)this + 0x580))(this,uVar8);
  if (lVar11 == 0) {
    pcVar13 = "RiveLN/ImageDecode";
    pcVar17 = "Failed to allocate NewByteArray";
LAB_0033326c:
    RiveLogE(pcVar13,pcVar17);
  }
  else {
    uVar8 = SizeTToInt(param_3);
    (**(code **)(*(long *)this + 0x680))(this,lVar11,0,uVar8,param_2);
    lVar12 = JNIExceptionHandler::CallStaticObjectMethod((_JNIEnv *)this,local_80,p_Var10,lVar11);
    (**(code **)(*(long *)this + 0xb8))(this,lVar11);
    if (lVar12 == 0) {
      pcVar13 = "RiveN/ImageDecode";
      pcVar17 = "ImageDecoder.decodeToBitmap returned null";
      goto LAB_0033326c;
    }
    uVar9 = (**(code **)(*(long *)this + 0x558))(this,lVar12);
    if ((int)uVar9 < 2) {
      RiveLogE("RiveN/ImageDecode","Bad array length (unexpected)");
    }
    else {
      puVar14 = (uint *)(**(code **)(*(long *)this + 0x5d8))(this,lVar12,0);
      uVar2 = (ulong)*puVar14;
      uVar3 = puVar14[1];
      lVar11 = uVar3 * uVar2;
      if (lVar11 == 0) {
        pcVar13 = "Unsupported empty image (zero dimension)";
      }
      else {
        if (lVar11 + 2U <= (ulong)uVar9) {
          pvVar15 = operator_new__(lVar11 * 4);
          uVar7 = DAT_0024e948;
          lVar18 = 0;
          do {
            uVar4 = *(uint *)((long)puVar14 + lVar18 + 8);
            uVar5 = uVar4 >> 0x18;
            uVar9 = uVar4 & 0xff;
            uVar19 = NEON_ushl(CONCAT44(uVar4,uVar4),uVar7,4);
            uVar19 = uVar19 & 0xff000000ff;
            if (((ulong)param_4 & 1) == 0) {
              if (uVar5 == 0) {
                uVar19 = 0;
                uVar9 = 0;
              }
              else if (uVar5 != 0xff) {
                uVar5 = uVar5 | uVar5 << 8;
                uVar9 = uVar5 * uVar9 + 0x8080 >> 0x10;
                uVar20 = uVar5 * (int)(uVar19 >> 0x20) + 0x8080;
                uVar19 = CONCAT44(uVar20 >> 0x10,
                                  (int)(CONCAT44(uVar20,uVar5 * (int)uVar19 + 0x8080) >> 0x10)) &
                         0xffffffff0000ffff;
              }
            }
            puVar1 = (undefined1 *)((long)pvVar15 + lVar18);
            lVar11 = lVar11 + -1;
            lVar18 = lVar18 + 4;
            puVar1[2] = (char)uVar9;
            puVar1[3] = (char)(uVar4 >> 0x18);
            *puVar1 = (char)uVar19;
            puVar1[1] = (char)(uVar19 >> 0x20);
          } while (lVar11 != 0);
          (**(code **)(*(long *)this + 0x618))(this,lVar12,puVar14,2);
          (**(code **)(*(long *)this + 0xb8))(this,lVar12);
          if (param_5 == (long *)0x0) {
            pAVar16 = (AndroidImage *)operator_new(0x48);
            local_70 = pvVar15;
            AndroidImage::AndroidImage(pAVar16,uVar2,uVar3,&local_70);
            pvVar15 = local_70;
            local_70 = (void *)0x0;
            if (pvVar15 != (void *)0x0) {
              operator_delete__(pvVar15);
            }
            *param_1 = pAVar16;
          }
          else {
            local_88 = pvVar15;
            (**(code **)(*param_5 + 0x20))(param_1,param_5,uVar2,uVar3,&local_88);
            pvVar15 = local_88;
            local_88 = (void *)0x0;
            if (pvVar15 != (void *)0x0) {
              operator_delete__(pvVar15);
            }
          }
          goto LAB_00333308;
        }
        pcVar13 = "Not enough elements in pixel array";
      }
      RiveLogE("RiveN/ImageDecode",pcVar13);
      (**(code **)(*(long *)this + 0x618))(this,lVar12,puVar14,2);
    }
    (**(code **)(*(long *)this + 0xb8))(this,lVar12);
  }
  *param_1 = 0;
LAB_00333308:
  if (local_80 != (_jclass *)0x0) {
    (**(code **)(*local_78 + 0xb8))();
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003334a0  rive_android::premultiply =====

/* rive_android::premultiply(unsigned char, unsigned char) */

uint rive_android::premultiply(uchar param_1,uchar param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_2;
  if (param_2 != 0) {
    if (param_2 == 0xff) {
      return (uint)param_1;
    }
    uVar1 = (uint)param_1 * (uint)param_2 * 0x101 + 0x8080 >> 0x10;
  }
  return uVar1;
}


// ===== 003334dc  rive_android::renderImageFromRGBABytesRive =====

/* rive_android::renderImageFromRGBABytesRive(unsigned int, unsigned int, unsigned char const*,
   bool) */

void __thiscall
rive_android::renderImageFromRGBABytesRive
          (rive_android *this,uint param_1,uint param_2,uchar *param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  void *pvVar7;
  AndroidImage *pAVar8;
  ulong uVar9;
  undefined8 *in_x8;
  long lVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  long lVar15;
  void *local_60;
  long local_58;
  
  uVar9 = (ulong)param_2;
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if ((((int)this == 0) || (param_1 == 0)) || (uVar9 == 0)) {
    RiveLogE("RiveLN/ImageDecode","renderImageFromRGBABytesRive() - Invalid args.",uVar9,param_3,
             (ulong)param_4);
    pAVar8 = (AndroidImage *)0x0;
  }
  else {
    lVar15 = (ulong)param_1 * ((ulong)this & 0xffffffff);
    local_60 = operator_new__(lVar15 * 4);
    lVar10 = 0;
    do {
      pbVar1 = (byte *)(uVar9 + lVar10);
      bVar2 = *pbVar1;
      bVar3 = pbVar1[1];
      bVar4 = pbVar1[2];
      bVar5 = pbVar1[3];
      bVar12 = bVar2;
      bVar13 = bVar3;
      bVar14 = bVar4;
      if (((((ulong)param_3 & 1) == 0) &&
          (bVar12 = bVar5, bVar13 = bVar5, bVar14 = bVar5, bVar5 != 0)) &&
         (uVar11 = (uint)bVar5, bVar12 = bVar2, bVar13 = bVar3, bVar14 = bVar4, uVar11 != 0xff)) {
        bVar12 = (byte)(bVar2 * uVar11 * 0x101 + 0x8080 >> 0x10);
        bVar13 = (byte)(bVar3 * uVar11 * 0x101 + 0x8080 >> 0x10);
        bVar14 = (byte)(bVar4 * uVar11 * 0x101 + 0x8080 >> 0x10);
      }
      pbVar1 = (byte *)((long)local_60 + lVar10);
      lVar15 = lVar15 + -1;
      lVar10 = lVar10 + 4;
      *pbVar1 = bVar12;
      pbVar1[1] = bVar13;
      pbVar1[2] = bVar14;
      pbVar1[3] = bVar5;
    } while (lVar15 != 0);
    pAVar8 = (AndroidImage *)operator_new(0x48);
    AndroidImage::AndroidImage(pAVar8,(ulong)this & 0xffffffff,(ulong)param_1,&local_60);
    pvVar7 = local_60;
    local_60 = (void *)0x0;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
    }
  }
  *in_x8 = pAVar8;
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00333650  rive_android::renderImageFromRGBABytesCanvas =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive_android::renderImageFromRGBABytesCanvas(unsigned int, unsigned int, unsigned char const*,
   bool) */

void __thiscall
rive_android::renderImageFromRGBABytesCanvas
          (rive_android *this,uint param_1,uint param_2,uchar *param_3,bool param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  uint uVar9;
  undefined1 auVar10 [15];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [13];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  unkuint10 Var21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [11];
  unkbyte9 Var25;
  undefined5 uVar26;
  undefined3 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  _JNIEnv *p_Var34;
  undefined8 uVar35;
  undefined8 uVar36;
  _jclass *p_Var37;
  _jmethodID *p_Var38;
  _jobject *p_Var39;
  long lVar40;
  byte *pbVar41;
  CanvasRenderImage *this_00;
  char *pcVar42;
  byte *pbVar43;
  undefined8 *in_x8;
  byte bVar44;
  long lVar45;
  byte *pbVar46;
  uint *puVar47;
  ulong uVar48;
  byte *pbVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  undefined1 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 in_q4 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 in_q5 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 in_q6 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  byte bVar75;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  undefined1 in_q7 [16];
  undefined1 auVar77 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  byte bVar95;
  byte bVar108;
  uint3 uVar96;
  unkuint9 Var99;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  undefined1 auVar103 [16];
  byte bVar109;
  undefined1 auVar104 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  byte bVar116;
  byte bVar122;
  uint3 uVar117;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  byte bVar123;
  undefined1 auVar121 [16];
  short sVar134;
  short sVar135;
  short sVar136;
  short sVar137;
  short sVar138;
  short sVar139;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  short sVar140;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar141 [14];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [14];
  ushort uVar160;
  ushort uVar161;
  ushort uVar162;
  undefined1 in_q21 [16];
  undefined1 auVar149 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  ushort uVar163;
  ushort uVar164;
  undefined1 auVar156 [16];
  undefined1 auVar159 [16];
  ushort uVar171;
  undefined1 auVar165 [14];
  ushort uVar170;
  ushort uVar172;
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  ushort uVar173;
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  ushort uVar174;
  undefined1 auVar175 [14];
  undefined1 in_q23 [16];
  undefined1 auVar176 [16];
  undefined1 auVar181 [16];
  undefined2 uVar182;
  undefined4 uVar183;
  undefined8 uVar184;
  unkbyte10 Var185;
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar189 [14];
  undefined1 in_q25 [16];
  undefined1 auVar190 [16];
  ushort uVar200;
  ushort uVar201;
  ushort uVar202;
  ushort uVar203;
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar199 [16];
  ushort uVar204;
  undefined1 auVar205 [14];
  undefined1 in_q27 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [14];
  undefined1 in_q28 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined2 uVar212;
  undefined2 uVar213;
  byte bVar214;
  byte bVar215;
  byte bVar216;
  byte bVar217;
  byte bVar218;
  byte bVar219;
  byte bVar220;
  byte bVar221;
  byte bVar222;
  byte bVar223;
  byte bVar224;
  byte bVar225;
  byte bVar226;
  byte bVar227;
  byte bVar228;
  undefined2 uStack_128;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [16];
  undefined1 auVar76 [16];
  undefined6 uVar97;
  undefined1 auVar105 [16];
  undefined7 uVar98;
  undefined1 auVar100 [11];
  undefined1 auVar101 [12];
  undefined1 auVar102 [13];
  undefined6 uVar118;
  undefined1 auVar151 [16];
  undefined1 auVar150 [16];
  undefined1 auVar157 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar158 [16];
  undefined1 auVar178 [16];
  undefined1 auVar177 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar188 [16];
  undefined1 auVar193 [16];
  undefined1 auVar197 [16];
  undefined1 auVar194 [16];
  undefined1 auVar198 [16];
  
  pbVar43 = (byte *)(ulong)param_2;
  if ((((int)this == 0) || (uVar55 = (ulong)param_1, param_1 == 0)) || (pbVar43 == (byte *)0x0)) {
    pcVar42 = "renderImageFromRGBABytesCanvas() - Invalid args.";
  }
  else {
    uVar54 = (ulong)this & 0xffffffff;
    p_Var34 = (_JNIEnv *)GetJNIEnv();
    uVar35 = GetAndroidBitmapConfigClass();
    uVar36 = GetARGB8888Field();
    uVar35 = (**(code **)(*(long *)p_Var34 + 0x488))(p_Var34,uVar35,uVar36);
    p_Var37 = (_jclass *)GetAndroidBitmapClass();
    p_Var38 = (_jmethodID *)GetCreateBitmapStaticMethodId();
    p_Var39 = (_jobject *)
              JNIExceptionHandler::CallStaticObjectMethod
                        (p_Var34,p_Var37,p_Var38,uVar54,uVar55,uVar35);
    if (p_Var39 == (_jobject *)0x0) {
      pcVar42 = "renderImageFromRGBABytesCanvas() - Bitmap.createBitmap(...) failed.";
    }
    else {
      uVar56 = uVar55 * uVar54;
      lVar40 = (**(code **)(*(long *)p_Var34 + 0x598))(p_Var34,uVar56 & 0xffffffff);
      if (lVar40 != 0) {
        pbVar41 = (byte *)(**(code **)(*(long *)p_Var34 + 0x5d8))(p_Var34,lVar40,0);
        uVar33 = _UNK_0024e4f8;
        uVar32 = _DAT_0024e4f0;
        uVar31 = _UNK_0024e3a8;
        uVar30 = _DAT_0024e3a0;
        uVar29 = _UNK_0024e218;
        uVar28 = _DAT_0024e210;
        uVar36 = _UNK_0024de88;
        uVar35 = _DAT_0024de80;
        pbVar49 = pbVar43;
        if (uVar56 < 8) {
          uVar55 = 0;
LAB_00334480:
          lVar45 = uVar56 - uVar55;
          puVar47 = (uint *)(pbVar41 + uVar55 * 4);
          do {
            uVar53 = (uint)*pbVar49;
            uVar52 = (uint)pbVar49[1];
            uVar51 = (uint)pbVar49[2];
            bVar44 = pbVar49[3];
            uVar50 = (uint)bVar44;
            if ((((ulong)param_3 & 1) != 0) && (uVar50 != 0xff)) {
              if (uVar50 == 0) {
                uVar53 = 0;
                uVar52 = 0;
                uVar51 = 0;
              }
              else {
                uVar9 = (uint)(bVar44 >> 1);
                uVar53 = 0;
                if (bVar44 != 0) {
                  uVar53 = (uVar9 + (uint)*pbVar49 * 0xff & 0xffff) / (uint)bVar44;
                }
                uVar52 = 0;
                if (uVar50 != 0) {
                  uVar52 = (uVar9 + (uint)pbVar49[1] * 0xff & 0xffff) / uVar50;
                }
                if (0xfe < uVar53) {
                  uVar53 = 0xff;
                }
                uVar51 = 0;
                if (uVar50 != 0) {
                  uVar51 = (uVar9 + (uint)pbVar49[2] * 0xff & 0xffff) / uVar50;
                }
                if (0xfe < uVar52) {
                  uVar52 = 0xff;
                }
                if (0xfe < uVar51) {
                  uVar51 = 0xff;
                }
              }
            }
            lVar45 = lVar45 + -1;
            pbVar49 = pbVar49 + 4;
            *puVar47 = uVar53 << 0x10 | uVar50 << 0x18 | uVar52 << 8 | uVar51;
            puVar47 = puVar47 + 1;
          } while (lVar45 != 0);
        }
        else {
          lVar45 = uVar55 * uVar54 * 4;
          if ((pbVar41 < pbVar43 + lVar45) && (pbVar43 < pbVar41 + lVar45)) {
            uVar55 = 0;
            goto LAB_00334480;
          }
          if (uVar56 < 0x10) {
            uVar48 = 0;
LAB_00333824:
            auVar92._8_8_ = 0xff00ff00ff00ff;
            auVar92._0_8_ = 0xff00ff00ff00ff;
            uVar55 = uVar56 & 0xfffffffffffffff8;
            pbVar49 = pbVar43 + uVar55 * 4;
            auVar88._8_8_ = _UNK_0024e4f8;
            auVar88._0_8_ = _DAT_0024e4f0;
            auVar87._8_8_ = _UNK_0024e218;
            auVar87._0_8_ = _DAT_0024e210;
            pbVar43 = pbVar43 + uVar48 * 4;
            lVar45 = uVar48 - uVar55;
            pbVar46 = pbVar41 + uVar48 * 4;
            do {
              auVar70[0] = pbVar43[1];
              auVar73[0] = pbVar43[2];
              bVar75 = pbVar43[3];
              auVar70[1] = pbVar43[5];
              auVar73[1] = pbVar43[6];
              bVar78 = pbVar43[7];
              auVar70[2] = pbVar43[9];
              auVar73[2] = pbVar43[10];
              bVar79 = pbVar43[0xb];
              auVar70[3] = pbVar43[0xd];
              auVar73[3] = pbVar43[0xe];
              bVar80 = pbVar43[0xf];
              auVar70[4] = pbVar43[0x11];
              auVar73[4] = pbVar43[0x12];
              bVar81 = pbVar43[0x13];
              auVar70[5] = pbVar43[0x15];
              auVar73[5] = pbVar43[0x16];
              bVar82 = pbVar43[0x17];
              auVar70[6] = pbVar43[0x19];
              auVar73[6] = pbVar43[0x1a];
              bVar83 = pbVar43[0x1b];
              auVar65._8_8_ = in_q4._8_8_;
              auVar65._0_8_ =
                   CONCAT17(pbVar43[0x1c],
                            CONCAT16(pbVar43[0x18],
                                     CONCAT15(pbVar43[0x14],
                                              CONCAT14(pbVar43[0x10],
                                                       CONCAT13(pbVar43[0xc],
                                                                CONCAT12(pbVar43[8],
                                                                         CONCAT11(pbVar43[4],
                                                                                  *pbVar43)))))));
              auVar70._8_8_ = in_q5._8_8_;
              auVar70[7] = pbVar43[0x1d];
              auVar73._8_8_ = in_q6._8_8_;
              auVar73[7] = pbVar43[0x1e];
              auVar76._8_8_ = in_q7._8_8_;
              bVar84 = pbVar43[0x1f];
              auVar76._0_8_ =
                   CONCAT17(bVar84,CONCAT16(bVar83,CONCAT15(bVar82,CONCAT14(bVar81,CONCAT13(bVar80,
                                                  CONCAT12(bVar79,CONCAT11(bVar78,bVar75)))))));
              bVar44 = -(((ulong)param_3 & 1) != 0);
              uVar35 = NEON_cmeq(auVar76._0_8_,0xffffffffffffffff,1);
              auVar131 = NEON_umull(auVar65._0_8_,0xffffffffffffffff,1);
              auVar144[0] = bVar75 >> 1;
              auVar144[1] = bVar78 >> 1;
              auVar144[2] = bVar79 >> 1;
              auVar144[3] = bVar80 >> 1;
              auVar144[4] = bVar81 >> 1;
              auVar144[5] = bVar82 >> 1;
              auVar144[6] = bVar83 >> 1;
              auVar144[7] = bVar84 >> 1;
              auVar144._8_8_ = 0;
              bVar95 = bVar44 & ~(byte)uVar35;
              bVar108 = bVar44 & ~(byte)((ulong)uVar35 >> 8);
              bVar109 = bVar44 & ~(byte)((ulong)uVar35 >> 0x10);
              bVar110 = bVar44 & ~(byte)((ulong)uVar35 >> 0x18);
              bVar111 = bVar44 & ~(byte)((ulong)uVar35 >> 0x20);
              bVar112 = bVar44 & ~(byte)((ulong)uVar35 >> 0x28);
              bVar113 = bVar44 & ~(byte)((ulong)uVar35 >> 0x30);
              bVar44 = bVar44 & ~(byte)((ulong)uVar35 >> 0x38);
              uVar48 = NEON_cmeq(auVar76._0_8_,0,1);
              sVar134 = auVar131._2_2_;
              sVar135 = auVar131._4_2_;
              sVar136 = auVar131._6_2_;
              sVar137 = auVar131._8_2_;
              sVar138 = auVar131._10_2_;
              sVar139 = auVar131._12_2_;
              sVar140 = auVar131._14_2_;
              bVar116 = bVar95 & ~(byte)uVar48;
              bVar122 = bVar108 & ~(byte)(uVar48 >> 8);
              bVar123 = bVar109 & ~(byte)(uVar48 >> 0x10);
              bVar124 = bVar110 & ~(byte)(uVar48 >> 0x18);
              bVar125 = bVar111 & ~(byte)(uVar48 >> 0x20);
              bVar126 = bVar112 & ~(byte)(uVar48 >> 0x28);
              bVar127 = bVar113 & ~(byte)(uVar48 >> 0x30);
              bVar128 = bVar44 & ~(byte)(uVar48 >> 0x38);
              if ((bVar116 & 1) != 0) {
                uVar53 = 0;
                if (bVar75 != 0) {
                  uVar53 = (uint)(ushort)(auVar131._0_2_ + (ushort)auVar144[0]) /
                           (CONCAT12(bVar78,(ushort)bVar75) & 0xffff);
                }
                auVar131 = ZEXT416(uVar53);
              }
              uVar200 = (ushort)bVar78;
              if ((bVar122 & 1) != 0) {
                uVar201 = 0;
                if (uVar200 != 0) {
                  uVar201 = (ushort)(sVar134 + (ushort)auVar144[1]) / uVar200;
                }
                auVar131._2_2_ = uVar201;
              }
              uVar201 = (ushort)bVar79;
              if ((bVar123 & 1) != 0) {
                uVar202 = 0;
                if (uVar201 != 0) {
                  uVar202 = (ushort)(sVar135 + (ushort)auVar144[2]) / uVar201;
                }
                auVar131._4_2_ = uVar202;
              }
              uVar202 = (ushort)bVar80;
              if ((bVar124 & 1) != 0) {
                uVar203 = 0;
                if (uVar202 != 0) {
                  uVar203 = (ushort)(sVar136 + (ushort)auVar144[3]) / uVar202;
                }
                auVar131._6_2_ = uVar203;
              }
              uVar203 = (ushort)bVar81;
              if ((bVar125 & 1) != 0) {
                uVar204 = 0;
                if (uVar203 != 0) {
                  uVar204 = (ushort)(sVar137 + (ushort)auVar144[4]) / uVar203;
                }
                auVar131._8_2_ = uVar204;
              }
              uVar204 = (ushort)bVar82;
              if ((bVar126 & 1) != 0) {
                uVar171 = 0;
                if (uVar204 != 0) {
                  uVar171 = (ushort)(sVar138 + (ushort)auVar144[5]) / uVar204;
                }
                auVar131._10_2_ = uVar171;
              }
              uVar171 = (ushort)bVar83;
              if ((bVar127 & 1) != 0) {
                uVar173 = 0;
                if (uVar171 != 0) {
                  uVar173 = (ushort)(sVar139 + (ushort)auVar144[6]) / uVar171;
                }
                auVar131._12_2_ = uVar173;
              }
              uVar173 = (ushort)bVar84;
              if ((bVar128 & 1) != 0) {
                uVar160 = 0;
                if (uVar173 != 0) {
                  uVar160 = (ushort)(sVar140 + (ushort)auVar144[7]) / uVar173;
                }
                auVar131._14_2_ = uVar160;
              }
              auVar168._0_2_ = (ushort)auVar144[0] + (ushort)auVar70[0] * 0xff;
              auVar168._2_2_ = (ushort)auVar144[1] + (ushort)auVar70[1] * 0xff;
              auVar168._4_2_ = (ushort)auVar144[2] + (ushort)auVar70[2] * 0xff;
              auVar168._6_2_ = (ushort)auVar144[3] + (ushort)auVar70[3] * 0xff;
              auVar168._8_2_ = (ushort)auVar144[4] + (ushort)auVar70[4] * 0xff;
              auVar168._10_2_ = (ushort)auVar144[5] + (ushort)auVar70[5] * 0xff;
              auVar168._12_2_ = (ushort)auVar144[6] + (ushort)auVar70[6] * 0xff;
              auVar168._14_2_ = (ushort)auVar144[7] + (ushort)auVar70[7] * 0xff;
              uVar53 = CONCAT12(bVar78,(ushort)bVar75) & 0xffff;
              if ((bVar116 & 1) == 0) {
                auVar64 = auVar144;
                auVar145 = auVar144;
                if ((bVar122 & 1) == 0) goto LAB_00333a70;
LAB_00333ad0:
                uVar160 = 0;
                if (uVar200 != 0) {
                  uVar160 = auVar168._2_2_ / uVar200;
                }
                auVar145._4_12_ = auVar64._4_12_;
                auVar145._0_2_ = auVar64._0_2_;
                auVar145._2_2_ = uVar160;
                if ((bVar123 & 1) != 0) goto LAB_00333a78;
LAB_00333ae4:
                if ((bVar124 & 1) == 0) goto LAB_00333a8c;
LAB_00333aec:
                uVar160 = 0;
                if (uVar202 != 0) {
                  uVar160 = auVar168._6_2_ / uVar202;
                }
                auVar145._6_2_ = uVar160;
                if ((bVar125 & 1) != 0) goto LAB_00333a94;
LAB_00333b00:
                if ((bVar126 & 1) == 0) goto LAB_00333aa8;
LAB_00333b08:
                uVar160 = 0;
                if (uVar204 != 0) {
                  uVar160 = auVar168._10_2_ / uVar204;
                }
                auVar145._10_2_ = uVar160;
                if ((bVar127 & 1) != 0) goto LAB_00333ab0;
LAB_00333b1c:
                auVar141 = auVar145._0_14_;
              }
              else {
                uVar52 = 0;
                if (bVar75 != 0) {
                  uVar52 = auVar168._0_2_ / uVar53;
                }
                auVar64 = ZEXT416(uVar52);
                auVar145 = ZEXT416(uVar52);
                if ((bVar122 & 1) != 0) goto LAB_00333ad0;
LAB_00333a70:
                if ((bVar123 & 1) == 0) goto LAB_00333ae4;
LAB_00333a78:
                uVar160 = 0;
                if (uVar201 != 0) {
                  uVar160 = auVar168._4_2_ / uVar201;
                }
                auVar145._4_2_ = uVar160;
                if ((bVar124 & 1) != 0) goto LAB_00333aec;
LAB_00333a8c:
                if ((bVar125 & 1) == 0) goto LAB_00333b00;
LAB_00333a94:
                uVar160 = 0;
                if (uVar203 != 0) {
                  uVar160 = auVar168._8_2_ / uVar203;
                }
                auVar145._8_2_ = uVar160;
                if ((bVar126 & 1) != 0) goto LAB_00333b08;
LAB_00333aa8:
                if ((bVar127 & 1) == 0) goto LAB_00333b1c;
LAB_00333ab0:
                uVar160 = 0;
                if (uVar171 != 0) {
                  uVar160 = auVar168._12_2_ / uVar171;
                }
                auVar141._0_12_ = auVar145._0_12_;
                auVar141._12_2_ = uVar160;
                auVar145._0_14_ = auVar141;
              }
              if ((bVar128 & 1) != 0) {
                uVar160 = 0;
                if (uVar173 != 0) {
                  uVar160 = auVar168._14_2_ / uVar173;
                }
                auVar145._14_2_ = uVar160;
                auVar145._0_14_ = auVar141;
              }
              uVar160 = (ushort)auVar144[3] + (ushort)auVar73[3] * 0xff;
              uVar161 = (ushort)auVar144[4] + (ushort)auVar73[4] * 0xff;
              uVar162 = (ushort)auVar144[5] + (ushort)auVar73[5] * 0xff;
              uVar163 = (ushort)auVar144[6] + (ushort)auVar73[6] * 0xff;
              uVar164 = (ushort)auVar144[7] + (ushort)auVar73[7] * 0xff;
              Var21 = CONCAT28(uVar164,CONCAT26(uVar163,CONCAT24(uVar162,CONCAT22(uVar161,uVar160)))
                              );
              auVar22._10_6_ = 0;
              auVar22._0_10_ = Var21;
              if ((bVar116 & 1) == 0) {
                if ((bVar122 & 1) == 0) goto LAB_00333b50;
LAB_00333bb0:
                uVar170 = 0;
                if (uVar200 != 0) {
                  uVar170 = (ushort)((ushort)auVar144[1] + (ushort)auVar73[1] * 0xff) / uVar200;
                }
                auVar168._2_2_ = uVar170;
                if ((bVar123 & 1) != 0) goto LAB_00333b58;
LAB_00333bc4:
                if ((bVar124 & 1) == 0) goto LAB_00333b6c;
LAB_00333bcc:
                uVar200 = 0;
                if (uVar202 != 0) {
                  uVar200 = uVar160 / uVar202;
                }
                auVar168._6_2_ = uVar200;
                if ((bVar125 & 1) != 0) goto LAB_00333b74;
LAB_00333be0:
                if ((bVar126 & 1) == 0) goto LAB_00333b88;
LAB_00333be8:
                uVar200 = 0;
                if (uVar204 != 0) {
                  uVar200 = uVar162 / uVar204;
                }
                auVar168._10_2_ = uVar200;
                if ((bVar127 & 1) != 0) goto LAB_00333b90;
LAB_00333bfc:
                auVar165 = auVar168._0_14_;
              }
              else {
                uVar52 = 0;
                if (bVar75 != 0) {
                  uVar52 = (ushort)((ushort)auVar144[0] + (ushort)auVar73[0] * 0xff) / uVar53;
                }
                auVar168 = ZEXT416(uVar52);
                if ((bVar122 & 1) != 0) goto LAB_00333bb0;
LAB_00333b50:
                if ((bVar123 & 1) == 0) goto LAB_00333bc4;
LAB_00333b58:
                uVar200 = 0;
                if (uVar201 != 0) {
                  uVar200 = (ushort)((ushort)auVar144[2] + (ushort)auVar73[2] * 0xff) / uVar201;
                }
                auVar168._4_2_ = uVar200;
                if ((bVar124 & 1) != 0) goto LAB_00333bcc;
LAB_00333b6c:
                if ((bVar125 & 1) == 0) goto LAB_00333be0;
LAB_00333b74:
                uVar200 = 0;
                if (uVar203 != 0) {
                  uVar200 = uVar161 / uVar203;
                }
                auVar168._8_2_ = uVar200;
                if ((bVar126 & 1) != 0) goto LAB_00333be8;
LAB_00333b88:
                if ((bVar127 & 1) == 0) goto LAB_00333bfc;
LAB_00333b90:
                uVar200 = 0;
                if (uVar171 != 0) {
                  uVar200 = uVar163 / uVar171;
                }
                auVar165._0_12_ = auVar168._0_12_;
                auVar165._12_2_ = uVar200;
                auVar168._0_14_ = auVar165;
              }
              if ((bVar128 & 1) != 0) {
                uVar200 = 0;
                if (uVar173 != 0) {
                  uVar200 = uVar164 / uVar173;
                }
                auVar168._14_2_ = uVar200;
                auVar168._0_14_ = auVar165;
              }
              auVar11._1_13_ = SUB1613(auVar22 << 0x30,3);
              auVar11[0] = bVar126;
              auVar151._0_4_ = auVar11._0_4_ << 0x10;
              auVar151._5_11_ = SUB1611(auVar22 << 0x30,5);
              auVar151[4] = bVar127;
              auVar153._7_9_ = (unkbyte9)(Var21 >> 8);
              auVar153._0_6_ = auVar151._0_6_;
              auVar153[6] = bVar128;
              auVar149._2_14_ = auVar153._2_14_;
              auVar149[1] = 0xff;
              auVar149[0] = bVar125;
              auVar150._4_12_ = auVar153._4_12_;
              auVar150._0_4_ = CONCAT13(0xff,auVar149._0_3_);
              auVar152._6_10_ = auVar153._6_10_;
              auVar152._0_6_ = CONCAT15(0xff,auVar150._0_5_);
              uVar35 = CONCAT17(bVar128,CONCAT16(bVar124,(uint6)CONCAT14(bVar123,(uint)bVar122 <<
                                                                                 0x10)));
              uVar117 = (uint3)CONCAT62((int6)((ulong)uVar35 >> 0x10),CONCAT11(0xff,bVar116));
              uVar52 = CONCAT13(0xff,uVar117);
              uVar118 = CONCAT15(0xff,(int5)CONCAT44((int)((ulong)uVar35 >> 0x20),uVar52));
              lVar45 = lVar45 + 8;
              uVar48 = CONCAT17(bVar44,CONCAT16(bVar113,CONCAT15(bVar112,CONCAT14(bVar111,CONCAT13(
                                                  bVar110,CONCAT12(bVar109,CONCAT11(bVar108,bVar95))
                                                  ))))) & uVar48;
              auVar129 = NEON_umin(auVar131,auVar92,2);
              pbVar43 = pbVar43 + 0x20;
              auVar142 = NEON_umin(auVar145,auVar92,2);
              auVar186 = a64_TBL(ZEXT816(0),auVar65,auVar87);
              auVar190 = a64_TBL(ZEXT816(0),auVar70,auVar88);
              auVar191 = a64_TBL(ZEXT816(0),auVar70,auVar87);
              auVar166 = NEON_umin(auVar168,auVar92,2);
              auVar206 = a64_TBL(ZEXT816(0),auVar73,auVar88);
              auVar12._1_13_ = in_q23._3_13_;
              auVar12[0] = (char)(uVar48 >> 0x28);
              auVar178._0_4_ = auVar12._0_4_ << 0x10;
              auVar178._5_11_ = in_q23._5_11_;
              auVar178[4] = (char)(uVar48 >> 0x30);
              auVar180._7_9_ = in_q23._7_9_;
              auVar180._0_6_ = auVar178._0_6_;
              auVar180[6] = (char)(uVar48 >> 0x38);
              auVar176._2_14_ = auVar180._2_14_;
              auVar176[1] = 0xff;
              auVar176[0] = (char)(uVar48 >> 0x20);
              auVar177._4_12_ = auVar180._4_12_;
              auVar177._0_4_ = CONCAT13(0xff,auVar176._0_3_);
              auVar179._6_10_ = auVar180._6_10_;
              auVar179._0_6_ = CONCAT15(0xff,auVar177._0_5_);
              uVar57 = (undefined1)(uVar48 >> 0x18);
              uVar98 = CONCAT16(uVar57,(uint6)CONCAT14((char)(uVar48 >> 0x10),
                                                       ((uint)(uVar48 >> 8) & 0xff) << 0x10));
              uVar96 = (uint3)CONCAT52((int5)((uint7)uVar98 >> 0x10),CONCAT11(0xff,(char)uVar48));
              uVar53 = CONCAT13(0xff,uVar96);
              uVar97 = CONCAT15(0xff,(int5)CONCAT34((int3)((uint7)uVar98 >> 0x20),uVar53));
              auVar154 = a64_TBL(ZEXT816(0),auVar65,auVar88);
              auVar130._2_2_ = 0;
              auVar130._0_2_ = auVar129._0_2_;
              auVar130._4_2_ = auVar129._2_2_;
              auVar130._6_2_ = 0;
              auVar130._8_2_ = auVar129._4_2_;
              auVar130._10_2_ = 0;
              auVar130._12_2_ = auVar129._6_2_;
              auVar130._14_2_ = 0;
              auVar143._2_2_ = 0;
              auVar143._0_2_ = auVar142._0_2_;
              auVar143._4_2_ = auVar142._2_2_;
              auVar143._6_2_ = 0;
              auVar143._8_2_ = auVar142._4_2_;
              auVar143._10_2_ = 0;
              auVar143._12_2_ = auVar142._6_2_;
              auVar143._14_2_ = 0;
              auVar114._0_4_ = (uint)auVar149._0_3_ << 0x1f;
              auVar114._4_4_ = (auVar150._0_4_ >> 0x10) << 0x1f;
              auVar114._8_4_ = (uint)(ushort)((uint6)auVar152._0_6_ >> 0x20) << 0x1f;
              auVar114._12_4_ = (uint)(ushort)(CONCAT17(0xff,auVar152._0_7_) >> 0x30) << 0x1f;
              auVar119._0_4_ = (uint)uVar117 << 0x1f;
              auVar119._4_4_ = (uVar52 >> 0x10) << 0x1f;
              auVar119._8_4_ = (uint)(ushort)((uint6)uVar118 >> 0x20) << 0x1f;
              auVar119._12_4_ =
                   (uint)(ushort)(CONCAT17(0xff,(int7)CONCAT26((short)((ulong)uVar35 >> 0x30),
                                                               uVar118)) >> 0x30) << 0x1f;
              auVar210 = a64_TBL(ZEXT816(0),auVar73,auVar87);
              auVar64 = a64_TBL(ZEXT816(0),auVar76,auVar87);
              auVar115 = NEON_cmlt(auVar114,0,4);
              auVar120 = NEON_cmlt(auVar119,0,4);
              auVar181._0_4_ = (uint)auVar176._0_3_ << 0x1f;
              auVar181._4_4_ = (auVar177._0_4_ >> 0x10) << 0x1f;
              auVar181._8_4_ = (uint)(ushort)((uint6)auVar179._0_6_ >> 0x20) << 0x1f;
              auVar181._12_4_ = (uint)(ushort)(CONCAT17(0xff,auVar179._0_7_) >> 0x30) << 0x1f;
              auVar103._0_4_ = (uint)uVar96 << 0x1f;
              auVar103._4_4_ = (uVar53 >> 0x10) << 0x1f;
              auVar103._8_4_ = (uint)(ushort)((uint6)uVar97 >> 0x20) << 0x1f;
              auVar103._12_4_ =
                   (uint)(ushort)(CONCAT17(0xff,CONCAT16(uVar57,uVar97)) >> 0x30) << 0x1f;
              auVar2._2_2_ = 0;
              auVar2._0_2_ = auVar129._8_2_;
              auVar2._4_2_ = auVar129._10_2_;
              auVar2._6_2_ = 0;
              auVar2._8_2_ = auVar129._12_2_;
              auVar2._10_2_ = 0;
              auVar2._12_2_ = auVar129._14_2_;
              auVar2._14_2_ = 0;
              auVar155 = NEON_bit(auVar154,auVar2,auVar115,1);
              auVar167._2_2_ = 0;
              auVar167._0_2_ = auVar166._0_2_;
              auVar167._4_2_ = auVar166._2_2_;
              auVar167._6_2_ = 0;
              auVar167._8_2_ = auVar166._4_2_;
              auVar167._10_2_ = 0;
              auVar167._12_2_ = auVar166._6_2_;
              auVar167._14_2_ = 0;
              auVar4._2_2_ = 0;
              auVar4._0_2_ = auVar142._8_2_;
              auVar4[4] = auVar142[10];
              auVar4[5] = auVar142[0xb];
              auVar4._6_2_ = 0;
              auVar4[8] = auVar142[0xc];
              auVar4[9] = auVar142[0xd];
              auVar4._10_2_ = 0;
              auVar4[0xc] = auVar142[0xe];
              auVar4[0xd] = auVar142[0xf];
              auVar4._14_2_ = 0;
              auVar190 = NEON_bit(auVar190,auVar4,auVar115,1);
              auVar142 = NEON_bif(auVar130,auVar186,auVar120,1);
              auVar154 = NEON_bif(auVar143,auVar191,auVar120,1);
              in_q23 = NEON_cmge(auVar181,0,4);
              auVar129 = NEON_cmge(auVar103,0,4);
              auVar120 = NEON_bsl(auVar120,auVar167,auVar210,1);
              auVar3._2_2_ = 0;
              auVar3._0_2_ = auVar166._8_2_;
              auVar3._4_2_ = auVar166._10_2_;
              auVar3._6_2_ = 0;
              auVar3._8_2_ = auVar166._12_2_;
              auVar3._10_2_ = 0;
              auVar3._12_2_ = auVar166._14_2_;
              auVar3._14_2_ = 0;
              auVar115 = NEON_bsl(auVar115,auVar3,auVar206,1);
              auVar166 = a64_TBL(ZEXT816(0),auVar76,auVar88);
              bVar80 = in_q23[7] & (auVar190[6] | auVar115[7]);
              bVar81 = in_q23[8] & auVar115[8];
              auVar23[1] = bVar81;
              auVar23[0] = bVar80;
              bVar82 = in_q23[9] & (auVar190[8] | auVar115[9]);
              auVar23[2] = bVar82;
              bVar79 = auVar190[9] | auVar115[10];
              auVar23[3] = in_q23[10] & bVar79;
              bVar83 = in_q23[0xb] & (auVar190[10] | auVar115[0xb]);
              auVar23[4] = bVar83;
              bVar84 = in_q23[0xc] & auVar115[0xc];
              auVar23[5] = bVar84;
              bVar95 = in_q23[0xd] & (auVar190[0xc] | auVar115[0xd]);
              auVar23[6] = bVar95;
              bVar75 = auVar190[0xd] | auVar115[0xe];
              auVar23[7] = in_q23[0xe] & bVar75;
              bVar108 = in_q23[0xf] & (auVar190[0xe] | auVar115[0xf]);
              auVar23[8] = bVar108;
              auVar23._9_7_ = 0;
              in_q6 = auVar23 << 0x38;
              bVar109 = auVar129[7] & (auVar154[6] | auVar120[7]);
              bVar110 = auVar129[8] & auVar120[8];
              in_q7[1] = bVar110;
              in_q7[0] = bVar109;
              bVar111 = auVar129[9] & (auVar154[8] | auVar120[9]);
              in_q7[2] = bVar111;
              bVar78 = auVar154[9] | auVar120[10];
              in_q7[3] = auVar129[10] & bVar78;
              bVar112 = auVar129[0xb] & (auVar154[10] | auVar120[0xb]);
              in_q7[4] = bVar112;
              bVar113 = auVar129[0xc] & auVar120[0xc];
              in_q7[5] = bVar113;
              bVar116 = auVar129[0xd] & (auVar154[0xc] | auVar120[0xd]);
              in_q7[6] = bVar116;
              bVar44 = auVar154[0xd] | auVar120[0xe];
              in_q7[7] = auVar129[0xe] & bVar44;
              bVar122 = auVar129[0xf] & (auVar154[0xe] | auVar120[0xf]);
              in_q7[8] = bVar122;
              in_q7._9_7_ = 0;
              in_q7 = in_q7 << 0x38;
              in_q5._0_8_ = CONCAT17(auVar155[5] & in_q23[7] | auVar166[4] | bVar80,
                                     CONCAT16(in_q23[6] & (auVar155[4] | auVar190[5] | auVar115[6]),
                                              CONCAT15(in_q23[5] & (auVar190[4] | auVar115[5]),
                                                       CONCAT14(in_q23[4] & auVar115[4],
                                                                CONCAT13(auVar155[1] & in_q23[3] |
                                                                         auVar166[0] |
                                                                         in_q23[3] &
                                                                         (auVar190[2] | auVar115[3])
                                                                         ,CONCAT12(in_q23[2] &
                                                                                   (auVar155[0] |
                                                                                   auVar190[1] |
                                                                                   auVar115[2]),
                                                                                   CONCAT11(in_q23[1
                                                  ] & (auVar190[0] | auVar115[1]),
                                                  in_q23[0] & auVar115[0])))))));
              in_q5[8] = bVar81;
              in_q5[9] = bVar82;
              in_q5[10] = in_q23[10] & (auVar155[8] | bVar79);
              in_q5[0xb] = auVar155[9] & in_q23[0xb] | auVar166[8] | bVar83;
              in_q5[0xc] = bVar84;
              in_q5[0xd] = bVar95;
              in_q5[0xe] = in_q23[0xe] & (auVar155[0xc] | bVar75);
              in_q5[0xf] = auVar155[0xd] & in_q23[0xf] | auVar166[0xc] | bVar108;
              in_q4._0_8_ = CONCAT17(auVar142[5] & auVar129[7] | auVar64[4] | bVar109,
                                     CONCAT16(auVar129[6] &
                                              (auVar142[4] | auVar154[5] | auVar120[6]),
                                              CONCAT15(auVar129[5] & (auVar154[4] | auVar120[5]),
                                                       CONCAT14(auVar129[4] & auVar120[4],
                                                                CONCAT13(auVar142[1] & auVar129[3] |
                                                                         auVar64[0] |
                                                                         auVar129[3] &
                                                                         (auVar154[2] | auVar120[3])
                                                                         ,CONCAT12(auVar129[2] &
                                                                                   (auVar142[0] |
                                                                                   auVar154[1] |
                                                                                   auVar120[2]),
                                                                                   CONCAT11(auVar129
                                                  [1] & (auVar154[0] | auVar120[1]),
                                                  auVar129[0] & auVar120[0])))))));
              in_q4[8] = bVar110;
              in_q4[9] = bVar111;
              in_q4[10] = auVar129[10] & (auVar142[8] | bVar78);
              in_q4[0xb] = auVar142[9] & auVar129[0xb] | auVar64[8] | bVar112;
              in_q4[0xc] = bVar113;
              in_q4[0xd] = bVar116;
              in_q4[0xe] = auVar129[0xe] & (auVar142[0xc] | bVar44);
              in_q4[0xf] = auVar142[0xd] & auVar129[0xf] | auVar64[0xc] | bVar122;
              *(long *)(pbVar46 + 8) = in_q4._8_8_;
              *(undefined8 *)pbVar46 = in_q4._0_8_;
              *(long *)(pbVar46 + 0x18) = in_q5._8_8_;
              *(undefined8 *)(pbVar46 + 0x10) = in_q5._0_8_;
              pbVar46 = pbVar46 + 0x20;
            } while (lVar45 != 0);
            if (uVar56 != uVar55) goto LAB_00334480;
          }
          else {
            uVar48 = uVar56 & 0xfffffffffffffff0;
            uStack_128 = (undefined2)_UNK_0024e218;
            uVar55 = uVar48;
            pbVar46 = pbVar41;
            do {
              auVar64._8_8_ = 0xffffffffffffffff;
              auVar64._0_8_ = 0xffffffffffffffff;
              auVar142[0] = pbVar49[1];
              auVar154[0] = pbVar49[2];
              auVar155[0] = pbVar49[3];
              auVar142[1] = pbVar49[5];
              auVar154[1] = pbVar49[6];
              auVar155[1] = pbVar49[7];
              auVar142[2] = pbVar49[9];
              auVar154[2] = pbVar49[10];
              auVar155[2] = pbVar49[0xb];
              auVar142[3] = pbVar49[0xd];
              auVar154[3] = pbVar49[0xe];
              auVar155[3] = pbVar49[0xf];
              auVar142[4] = pbVar49[0x11];
              auVar154[4] = pbVar49[0x12];
              auVar155[4] = pbVar49[0x13];
              auVar142[5] = pbVar49[0x15];
              auVar154[5] = pbVar49[0x16];
              auVar155[5] = pbVar49[0x17];
              auVar142[6] = pbVar49[0x19];
              auVar154[6] = pbVar49[0x1a];
              auVar155[6] = pbVar49[0x1b];
              auVar120._0_8_ =
                   CONCAT17(pbVar49[0x1c],
                            CONCAT16(pbVar49[0x18],
                                     CONCAT15(pbVar49[0x14],
                                              CONCAT14(pbVar49[0x10],
                                                       CONCAT13(pbVar49[0xc],
                                                                CONCAT12(pbVar49[8],
                                                                         CONCAT11(pbVar49[4],
                                                                                  *pbVar49)))))));
              auVar142[7] = pbVar49[0x1d];
              auVar154[7] = pbVar49[0x1e];
              auVar155[7] = pbVar49[0x1f];
              auVar120[8] = pbVar49[0x20];
              auVar142[8] = pbVar49[0x21];
              auVar154[8] = pbVar49[0x22];
              auVar155[8] = pbVar49[0x23];
              auVar120[9] = pbVar49[0x24];
              auVar142[9] = pbVar49[0x25];
              auVar154[9] = pbVar49[0x26];
              auVar155[9] = pbVar49[0x27];
              auVar120[10] = pbVar49[0x28];
              auVar142[10] = pbVar49[0x29];
              auVar154[10] = pbVar49[0x2a];
              auVar155[10] = pbVar49[0x2b];
              auVar120[0xb] = pbVar49[0x2c];
              auVar142[0xb] = pbVar49[0x2d];
              auVar154[0xb] = pbVar49[0x2e];
              auVar155[0xb] = pbVar49[0x2f];
              auVar120[0xc] = pbVar49[0x30];
              auVar142[0xc] = pbVar49[0x31];
              auVar154[0xc] = pbVar49[0x32];
              auVar155[0xc] = pbVar49[0x33];
              auVar120[0xd] = pbVar49[0x34];
              auVar142[0xd] = pbVar49[0x35];
              auVar154[0xd] = pbVar49[0x36];
              auVar155[0xd] = pbVar49[0x37];
              auVar120[0xe] = pbVar49[0x38];
              auVar142[0xe] = pbVar49[0x39];
              auVar154[0xe] = pbVar49[0x3a];
              auVar155[0xe] = pbVar49[0x3b];
              auVar120[0xf] = pbVar49[0x3c];
              auVar142[0xf] = pbVar49[0x3d];
              auVar154[0xf] = pbVar49[0x3e];
              auVar155[0xf] = pbVar49[0x3f];
              bVar44 = -(((ulong)param_3 & 1) != 0);
              auVar64 = NEON_cmeq(auVar155,auVar64,1);
              auVar166 = NEON_cmeq(auVar155,0,1);
              bVar84 = auVar155[0] >> 1;
              bVar95 = auVar155[1] >> 1;
              bVar108 = auVar155[2] >> 1;
              bVar109 = auVar155[3] >> 1;
              bVar110 = auVar155[4] >> 1;
              bVar111 = auVar155[5] >> 1;
              bVar112 = auVar155[6] >> 1;
              bVar113 = auVar155[7] >> 1;
              bVar116 = auVar155[8] >> 1;
              bVar122 = auVar155[9] >> 1;
              bVar123 = auVar155[10] >> 1;
              bVar124 = auVar155[0xb] >> 1;
              bVar125 = auVar155[0xc] >> 1;
              bVar126 = auVar155[0xd] >> 1;
              bVar127 = auVar155[0xe] >> 1;
              bVar128 = auVar155[0xf] >> 1;
              uVar96 = CONCAT12(auVar155[1],(ushort)auVar155[0]);
              uVar53 = CONCAT13(0,uVar96);
              auVar5[4] = auVar155[2];
              auVar5._0_4_ = uVar53;
              auVar5[5] = 0;
              auVar5[6] = auVar155[3];
              auVar5[7] = 0;
              auVar5[8] = auVar155[4];
              auVar5[9] = 0;
              auVar5[10] = auVar155[5];
              auVar5[0xb] = 0;
              auVar5[0xc] = auVar155[6];
              auVar5[0xd] = 0;
              auVar5[0xe] = auVar155[7];
              bVar214 = bVar44 & ~auVar64[0];
              bVar215 = bVar44 & ~auVar64[1];
              bVar216 = bVar44 & ~auVar64[2];
              bVar217 = bVar44 & ~auVar64[3];
              bVar218 = bVar44 & ~auVar64[4];
              bVar219 = bVar44 & ~auVar64[5];
              bVar220 = bVar44 & ~auVar64[6];
              bVar221 = bVar44 & ~auVar64[7];
              bVar222 = bVar44 & ~auVar64[8];
              bVar223 = bVar44 & ~auVar64[9];
              bVar224 = bVar44 & ~auVar64[10];
              bVar225 = bVar44 & ~auVar64[0xb];
              bVar226 = bVar44 & ~auVar64[0xc];
              bVar227 = bVar44 & ~auVar64[0xd];
              bVar228 = bVar44 & ~auVar64[0xe];
              bVar44 = bVar44 & ~auVar64[0xf];
              auVar64 = NEON_umull(auVar120._0_8_,0xffffffffffffffff,1);
              auVar129[0] = bVar214 & ~auVar166[0];
              bVar75 = bVar215 & ~auVar166[1];
              bVar78 = bVar216 & ~auVar166[2];
              bVar79 = bVar217 & ~auVar166[3];
              bVar80 = bVar218 & ~auVar166[4];
              bVar81 = bVar219 & ~auVar166[5];
              bVar82 = bVar220 & ~auVar166[6];
              bVar83 = bVar221 & ~auVar166[7];
              Var99 = CONCAT18(bVar222 & ~auVar166[8],
                               CONCAT17(bVar83,CONCAT16(bVar82,CONCAT15(bVar81,CONCAT14(bVar80,
                                                  CONCAT13(bVar79,CONCAT12(bVar78,CONCAT11(bVar75,
                                                  auVar129[0]))))))));
              auVar100._0_10_ = CONCAT19(bVar223 & ~auVar166[9],Var99);
              auVar100[10] = bVar224 & ~auVar166[10];
              auVar101[0xb] = bVar225 & ~auVar166[0xb];
              auVar101._0_11_ = auVar100;
              auVar102[0xc] = bVar226 & ~auVar166[0xc];
              auVar102._0_12_ = auVar101;
              auVar115[0xd] = bVar227 & ~auVar166[0xd];
              auVar115._0_13_ = auVar102;
              auVar115[0xe] = bVar228 & ~auVar166[0xe];
              auVar115[0xf] = bVar44 & ~auVar166[0xf];
              uVar200 = (ushort)auVar155[1];
              uVar201 = (ushort)auVar155[2];
              uVar202 = (ushort)auVar155[3];
              uVar203 = (ushort)auVar155[4];
              uVar204 = (ushort)auVar155[5];
              uVar171 = (ushort)auVar155[6];
              uVar173 = (ushort)auVar155[7];
              if ((Var99 & 1) == 0) {
                if ((auVar100._0_10_ & 0x100) == 0) goto LAB_00333e4c;
LAB_00333eb8:
                uVar160 = 0;
                if (uVar200 != 0) {
                  uVar160 = (ushort)(auVar64._2_2_ + (ushort)bVar95) / uVar200;
                }
                in_q21._2_2_ = uVar160;
                if ((auVar100 & (undefined1  [11])0x10000) != (undefined1  [11])0x0)
                goto LAB_00333e54;
LAB_00333ed0:
                if ((auVar101 & (undefined1  [12])0x1000000) == (undefined1  [12])0x0)
                goto LAB_00333e6c;
LAB_00333ed8:
                uVar160 = 0;
                if (uVar202 != 0) {
                  uVar160 = (ushort)(auVar64._6_2_ + (ushort)bVar109) / uVar202;
                }
                in_q21._6_2_ = uVar160;
                if ((auVar102 & (undefined1  [13])0x100000000) != (undefined1  [13])0x0)
                goto LAB_00333e74;
LAB_00333ef0:
                if ((bVar81 & 1) == 0) goto LAB_00333e8c;
LAB_00333ef8:
                uVar160 = 0;
                if (uVar204 != 0) {
                  uVar160 = (ushort)(auVar64._10_2_ + (ushort)bVar111) / uVar204;
                }
                in_q21._10_2_ = uVar160;
                if ((bVar82 & 1) != 0) goto LAB_00333e94;
LAB_00333f10:
                auVar148 = in_q21._0_14_;
              }
              else {
                uVar52 = 0;
                if (auVar155[0] != 0) {
                  uVar52 = (uint)(ushort)(auVar64._0_2_ + (ushort)bVar84) / (uVar53 & 0xffff);
                }
                in_q21 = ZEXT416(uVar52);
                if ((auVar100._0_10_ & 0x100) != 0) goto LAB_00333eb8;
LAB_00333e4c:
                if ((auVar100 & (undefined1  [11])0x10000) == (undefined1  [11])0x0)
                goto LAB_00333ed0;
LAB_00333e54:
                uVar160 = 0;
                if (uVar201 != 0) {
                  uVar160 = (ushort)(auVar64._4_2_ + (ushort)bVar108) / uVar201;
                }
                in_q21._4_2_ = uVar160;
                if ((auVar101 & (undefined1  [12])0x1000000) != (undefined1  [12])0x0)
                goto LAB_00333ed8;
LAB_00333e6c:
                if ((auVar102 & (undefined1  [13])0x100000000) == (undefined1  [13])0x0)
                goto LAB_00333ef0;
LAB_00333e74:
                uVar160 = 0;
                if (uVar203 != 0) {
                  uVar160 = (ushort)(auVar64._8_2_ + (ushort)bVar110) / uVar203;
                }
                in_q21._8_2_ = uVar160;
                if ((bVar81 & 1) != 0) goto LAB_00333ef8;
LAB_00333e8c:
                if ((bVar82 & 1) == 0) goto LAB_00333f10;
LAB_00333e94:
                uVar160 = 0;
                if (uVar171 != 0) {
                  uVar160 = (ushort)(auVar64._12_2_ + (ushort)bVar112) / uVar171;
                }
                auVar148._0_12_ = in_q21._0_12_;
                auVar148._12_2_ = uVar160;
                in_q21._0_14_ = auVar148;
              }
              if ((bVar83 & 1) != 0) {
                uVar160 = 0;
                if (uVar173 != 0) {
                  uVar160 = (ushort)(auVar64._14_2_ + (ushort)bVar113) / uVar173;
                }
                in_q21._14_2_ = uVar160;
                in_q21._0_14_ = auVar148;
              }
              auVar64 = NEON_ext(auVar120,auVar120,8,1);
              uVar160 = (ushort)auVar155[8];
              auVar6[10] = auVar155[0xd];
              auVar6._0_10_ = (unkuint10)auVar155[0xc] << 0x40;
              auVar6[0xb] = 0;
              auVar6[0xc] = auVar155[0xe];
              auVar6[0xd] = 0;
              auVar6[0xe] = auVar155[0xf];
              auVar64 = NEON_umull(auVar64._0_8_,0xffffffffffffffff,1);
              uVar96 = CONCAT12(bVar122,(short)(CONCAT12(bVar122,CONCAT11(bVar116,bVar113)) >> 8)) &
                       0xff00ff;
              uVar161 = (ushort)auVar155[9];
              if ((Var99 & 1) != 0) {
                uVar162 = 0;
                if (uVar160 != 0) {
                  uVar162 = (ushort)(auVar64._0_2_ + (short)uVar96) / uVar160;
                }
                in_q23._0_2_ = uVar162;
              }
              if ((auVar100._0_10_ & 0x100) != 0) {
                uVar162 = 0;
                if (uVar161 != 0) {
                  uVar162 = (ushort)(auVar64._2_2_ + (ushort)(byte)(uVar96 >> 0x10)) / uVar161;
                }
                in_q23._2_2_ = uVar162;
              }
              uVar162 = (ushort)auVar155[10];
              uVar163 = (ushort)auVar155[0xb];
              uVar164 = (ushort)auVar155[0xc];
              uVar170 = (ushort)auVar155[0xd];
              uVar172 = (ushort)auVar155[0xe];
              uVar174 = (ushort)auVar155[0xf];
              if ((auVar100 & (undefined1  [11])0x10000) == (undefined1  [11])0x0) {
                if ((auVar101 & (undefined1  [12])0x1000000) == (undefined1  [12])0x0)
                goto LAB_00333f94;
LAB_00333fe0:
                uVar1 = 0;
                if (uVar163 != 0) {
                  uVar1 = (ushort)(auVar64._6_2_ + (ushort)bVar124) / uVar163;
                }
                in_q23._6_2_ = uVar1;
                if ((auVar102 & (undefined1  [13])0x100000000) != (undefined1  [13])0x0)
                goto LAB_00333f9c;
LAB_00333ff8:
                if ((auVar115[0xd] & 1) == 0) goto LAB_00333fb4;
LAB_00334000:
                uVar1 = 0;
                if (uVar170 != 0) {
                  uVar1 = (ushort)(auVar64._10_2_ + (ushort)bVar126) / uVar170;
                }
                in_q23._10_2_ = uVar1;
                if ((auVar115[0xe] & 1) != 0) goto LAB_00333fbc;
LAB_00334018:
                auVar175 = in_q23._0_14_;
              }
              else {
                uVar1 = 0;
                if (uVar162 != 0) {
                  uVar1 = (ushort)(auVar64._4_2_ + (ushort)bVar123) / uVar162;
                }
                in_q23._4_2_ = uVar1;
                if ((auVar101 & (undefined1  [12])0x1000000) != (undefined1  [12])0x0)
                goto LAB_00333fe0;
LAB_00333f94:
                if ((auVar102 & (undefined1  [13])0x100000000) == (undefined1  [13])0x0)
                goto LAB_00333ff8;
LAB_00333f9c:
                uVar1 = 0;
                if (uVar164 != 0) {
                  uVar1 = (ushort)(auVar64._8_2_ + (ushort)bVar125) / uVar164;
                }
                in_q23._8_2_ = uVar1;
                if ((auVar115[0xd] & 1) != 0) goto LAB_00334000;
LAB_00333fb4:
                if ((auVar115[0xe] & 1) == 0) goto LAB_00334018;
LAB_00333fbc:
                uVar1 = 0;
                if (uVar172 != 0) {
                  uVar1 = (ushort)(auVar64._12_2_ + (ushort)bVar127) / uVar172;
                }
                auVar175._0_12_ = in_q23._0_12_;
                auVar175._12_2_ = uVar1;
                in_q23._0_14_ = auVar175;
              }
              if ((auVar115[0xf] & 1) != 0) {
                uVar1 = 0;
                if (uVar174 != 0) {
                  uVar1 = (ushort)(auVar64._14_2_ + (ushort)bVar128) / uVar174;
                }
                in_q23._14_2_ = uVar1;
                in_q23._0_14_ = auVar175;
              }
              if ((Var99 & 1) == 0) {
                if ((auVar100._0_10_ & 0x100) == 0) goto LAB_00334054;
LAB_003340a4:
                uVar1 = 0;
                if (uVar200 != 0) {
                  uVar1 = (ushort)((ushort)bVar95 + (ushort)auVar142[1] * 0xff) / uVar200;
                }
                in_q25._2_2_ = uVar1;
                if ((auVar100 & (undefined1  [11])0x10000) != (undefined1  [11])0x0)
                goto LAB_00334058;
LAB_003340b8:
                if ((auVar101 & (undefined1  [12])0x1000000) == (undefined1  [12])0x0)
                goto LAB_0033406c;
LAB_003340bc:
                uVar1 = 0;
                if (uVar202 != 0) {
                  uVar1 = (ushort)((ushort)bVar109 + (ushort)auVar142[3] * 0xff) / uVar202;
                }
                in_q25._6_2_ = uVar1;
                if ((auVar102 & (undefined1  [13])0x100000000) != (undefined1  [13])0x0)
                goto LAB_00334070;
LAB_003340d0:
                if ((bVar81 & 1) == 0) goto LAB_00334084;
LAB_003340d4:
                uVar1 = 0;
                if (uVar204 != 0) {
                  uVar1 = (ushort)((ushort)bVar111 + (ushort)auVar142[5] * 0xff) / uVar204;
                }
                in_q25._10_2_ = uVar1;
                if ((bVar82 & 1) != 0) goto LAB_00334088;
LAB_003340e8:
                auVar189 = in_q25._0_14_;
              }
              else {
                uVar52 = 0;
                if (auVar155[0] != 0) {
                  uVar52 = (uint)(ushort)((ushort)bVar84 + (ushort)auVar142[0] * 0xff) /
                           (uVar53 & 0xffff);
                }
                in_q25 = ZEXT416(uVar52);
                if ((auVar100._0_10_ & 0x100) != 0) goto LAB_003340a4;
LAB_00334054:
                if ((auVar100 & (undefined1  [11])0x10000) == (undefined1  [11])0x0)
                goto LAB_003340b8;
LAB_00334058:
                uVar1 = 0;
                if (uVar201 != 0) {
                  uVar1 = (ushort)((ushort)bVar108 + (ushort)auVar142[2] * 0xff) / uVar201;
                }
                in_q25._4_2_ = uVar1;
                if ((auVar101 & (undefined1  [12])0x1000000) != (undefined1  [12])0x0)
                goto LAB_003340bc;
LAB_0033406c:
                if ((auVar102 & (undefined1  [13])0x100000000) == (undefined1  [13])0x0)
                goto LAB_003340d0;
LAB_00334070:
                uVar1 = 0;
                if (uVar203 != 0) {
                  uVar1 = (ushort)((ushort)bVar110 + (ushort)auVar142[4] * 0xff) / uVar203;
                }
                in_q25._8_2_ = uVar1;
                if ((bVar81 & 1) != 0) goto LAB_003340d4;
LAB_00334084:
                if ((bVar82 & 1) == 0) goto LAB_003340e8;
LAB_00334088:
                uVar1 = 0;
                if (uVar171 != 0) {
                  uVar1 = (ushort)((ushort)bVar112 + (ushort)auVar142[6] * 0xff) / uVar171;
                }
                auVar189._0_12_ = in_q25._0_12_;
                auVar189._12_2_ = uVar1;
                in_q25._0_14_ = auVar189;
              }
              if ((bVar83 & 1) != 0) {
                uVar1 = 0;
                if (uVar173 != 0) {
                  uVar1 = (ushort)((ushort)bVar113 + (ushort)auVar142[7] * 0xff) / uVar173;
                }
                in_q25._14_2_ = uVar1;
                in_q25._0_14_ = auVar189;
              }
              auVar64 = NEON_ext(auVar142,auVar142,8,1);
              if ((Var99 & 1) != 0) {
                uVar1 = 0;
                if (uVar160 != 0) {
                  uVar1 = (ushort)((ushort)bVar116 + (ushort)auVar64[0] * 0xff) / uVar160;
                }
                in_q27._0_2_ = uVar1;
              }
              if ((auVar100._0_10_ & 0x100) != 0) {
                uVar1 = 0;
                if (uVar161 != 0) {
                  uVar1 = (ushort)((ushort)bVar122 + (ushort)auVar64[1] * 0xff) / uVar161;
                }
                in_q27._2_2_ = uVar1;
              }
              if ((auVar100 & (undefined1  [11])0x10000) == (undefined1  [11])0x0) {
                if ((auVar101 & (undefined1  [12])0x1000000) == (undefined1  [12])0x0)
                goto LAB_00334154;
LAB_0033418c:
                uVar1 = 0;
                if (uVar163 != 0) {
                  uVar1 = (ushort)((ushort)bVar124 + (ushort)auVar64[3] * 0xff) / uVar163;
                }
                in_q27._6_2_ = uVar1;
                if ((auVar102 & (undefined1  [13])0x100000000) != (undefined1  [13])0x0)
                goto LAB_00334158;
LAB_003341a0:
                if ((auVar115[0xd] & 1) == 0) goto LAB_0033416c;
LAB_003341a4:
                uVar1 = 0;
                if (uVar170 != 0) {
                  uVar1 = (ushort)((ushort)bVar126 + (ushort)auVar64[5] * 0xff) / uVar170;
                }
                in_q27._10_2_ = uVar1;
                if ((auVar115[0xe] & 1) != 0) goto LAB_00334170;
LAB_003341b8:
                auVar205 = in_q27._0_14_;
              }
              else {
                uVar1 = 0;
                if (uVar162 != 0) {
                  uVar1 = (ushort)((ushort)bVar123 + (ushort)auVar64[2] * 0xff) / uVar162;
                }
                in_q27._4_2_ = uVar1;
                if ((auVar101 & (undefined1  [12])0x1000000) != (undefined1  [12])0x0)
                goto LAB_0033418c;
LAB_00334154:
                if ((auVar102 & (undefined1  [13])0x100000000) == (undefined1  [13])0x0)
                goto LAB_003341a0;
LAB_00334158:
                uVar1 = 0;
                if (uVar164 != 0) {
                  uVar1 = (ushort)((ushort)bVar125 + (ushort)auVar64[4] * 0xff) / uVar164;
                }
                in_q27._8_2_ = uVar1;
                if ((auVar115[0xd] & 1) != 0) goto LAB_003341a4;
LAB_0033416c:
                if ((auVar115[0xe] & 1) == 0) goto LAB_003341b8;
LAB_00334170:
                uVar1 = 0;
                if (uVar172 != 0) {
                  uVar1 = (ushort)((ushort)bVar127 + (ushort)auVar64[6] * 0xff) / uVar172;
                }
                auVar205._0_12_ = in_q27._0_12_;
                auVar205._12_2_ = uVar1;
                in_q27._0_14_ = auVar205;
              }
              if ((auVar115[0xf] & 1) != 0) {
                uVar1 = 0;
                if (uVar174 != 0) {
                  uVar1 = (ushort)((ushort)bVar128 + (ushort)auVar64[7] * 0xff) / uVar174;
                }
                in_q27._14_2_ = uVar1;
                in_q27._0_14_ = auVar205;
              }
              if ((Var99 & 1) == 0) {
                if ((auVar100._0_10_ & 0x100) == 0) goto LAB_003341e8;
LAB_00334238:
                uVar1 = 0;
                if (uVar200 != 0) {
                  uVar1 = (ushort)((ushort)bVar95 + (ushort)auVar154[1] * 0xff) / uVar200;
                }
                in_q28._2_2_ = uVar1;
                if ((auVar100 & (undefined1  [11])0x10000) != (undefined1  [11])0x0)
                goto LAB_003341ec;
LAB_0033424c:
                if ((auVar101 & (undefined1  [12])0x1000000) == (undefined1  [12])0x0)
                goto LAB_00334200;
LAB_00334250:
                uVar200 = 0;
                if (uVar202 != 0) {
                  uVar200 = (ushort)((ushort)bVar109 + (ushort)auVar154[3] * 0xff) / uVar202;
                }
                in_q28._6_2_ = uVar200;
                if ((auVar102 & (undefined1  [13])0x100000000) != (undefined1  [13])0x0)
                goto LAB_00334204;
LAB_00334264:
                if ((bVar81 & 1) == 0) goto LAB_00334218;
LAB_00334268:
                uVar200 = 0;
                if (uVar204 != 0) {
                  uVar200 = (ushort)((ushort)bVar111 + (ushort)auVar154[5] * 0xff) / uVar204;
                }
                in_q28._10_2_ = uVar200;
                if ((bVar82 & 1) != 0) goto LAB_0033421c;
LAB_0033427c:
                auVar209 = in_q28._0_14_;
              }
              else {
                uVar52 = 0;
                if (auVar155[0] != 0) {
                  uVar52 = (uint)(ushort)((ushort)bVar84 + (ushort)auVar154[0] * 0xff) /
                           (uVar53 & 0xffff);
                }
                in_q28 = ZEXT416(uVar52);
                if ((auVar100._0_10_ & 0x100) != 0) goto LAB_00334238;
LAB_003341e8:
                if ((auVar100 & (undefined1  [11])0x10000) == (undefined1  [11])0x0)
                goto LAB_0033424c;
LAB_003341ec:
                uVar200 = 0;
                if (uVar201 != 0) {
                  uVar200 = (ushort)((ushort)bVar108 + (ushort)auVar154[2] * 0xff) / uVar201;
                }
                in_q28._4_2_ = uVar200;
                if ((auVar101 & (undefined1  [12])0x1000000) != (undefined1  [12])0x0)
                goto LAB_00334250;
LAB_00334200:
                if ((auVar102 & (undefined1  [13])0x100000000) == (undefined1  [13])0x0)
                goto LAB_00334264;
LAB_00334204:
                uVar200 = 0;
                if (uVar203 != 0) {
                  uVar200 = (ushort)((ushort)bVar110 + (ushort)auVar154[4] * 0xff) / uVar203;
                }
                in_q28._8_2_ = uVar200;
                if ((bVar81 & 1) != 0) goto LAB_00334268;
LAB_00334218:
                if ((bVar82 & 1) == 0) goto LAB_0033427c;
LAB_0033421c:
                uVar200 = 0;
                if (uVar171 != 0) {
                  uVar200 = (ushort)((ushort)bVar112 + (ushort)auVar154[6] * 0xff) / uVar171;
                }
                auVar209._0_12_ = in_q28._0_12_;
                auVar209._12_2_ = uVar200;
                in_q28._0_14_ = auVar209;
              }
              if ((bVar83 & 1) != 0) {
                uVar200 = 0;
                if (uVar173 != 0) {
                  uVar200 = (ushort)((ushort)bVar113 + (ushort)auVar154[7] * 0xff) / uVar173;
                }
                in_q28._14_2_ = uVar200;
                in_q28._0_14_ = auVar209;
              }
              auVar64 = NEON_ext(auVar154,auVar154,8,1);
              uVar200 = (ushort)bVar124 + (ushort)auVar64[3] * 0xff;
              uVar201 = (ushort)bVar125 + (ushort)auVar64[4] * 0xff;
              uVar202 = (ushort)bVar126 + (ushort)auVar64[5] * 0xff;
              uVar203 = (ushort)bVar127 + (ushort)auVar64[6] * 0xff;
              uVar204 = (ushort)bVar128 + (ushort)auVar64[7] * 0xff;
              Var21 = CONCAT28(uVar204,CONCAT26(uVar203,CONCAT24(uVar202,CONCAT22(uVar201,uVar200)))
                              );
              auVar186._10_6_ = 0;
              auVar186._0_10_ = Var21;
              if ((Var99 & 1) != 0) {
                uVar171 = 0;
                if (uVar160 != 0) {
                  uVar171 = (ushort)((ushort)bVar116 + (ushort)auVar64[0] * 0xff) / uVar160;
                }
                auVar5._2_13_ = auVar5._2_13_;
                auVar5._0_2_ = uVar171;
              }
              if ((auVar100._0_10_ & 0x100) != 0) {
                uVar171 = 0;
                if (uVar161 != 0) {
                  uVar171 = (ushort)((ushort)bVar122 + (ushort)auVar64[1] * 0xff) / uVar161;
                }
                auVar24 = auVar5._4_11_;
                uVar182 = auVar5._0_2_;
                auVar5._2_2_ = uVar171;
                auVar5._0_2_ = uVar182;
                auVar5._4_11_ = auVar24;
              }
              if ((auVar100 & (undefined1  [11])0x10000) != (undefined1  [11])0x0) {
                uVar171 = 0;
                if (uVar162 != 0) {
                  uVar171 = (ushort)((ushort)bVar123 + (ushort)auVar64[2] * 0xff) / uVar162;
                }
                Var25 = auVar5._6_9_;
                uVar183 = auVar5._0_4_;
                auVar5._4_2_ = uVar171;
                auVar5._0_4_ = uVar183;
                auVar5._6_9_ = Var25;
              }
              if ((auVar101 & (undefined1  [12])0x1000000) != (undefined1  [12])0x0) {
                uVar171 = 0;
                if (uVar163 != 0) {
                  uVar171 = uVar200 / uVar163;
                }
                uVar98 = auVar5._8_7_;
                uVar97 = auVar5._0_6_;
                auVar5._6_2_ = uVar171;
                auVar5._0_6_ = uVar97;
                auVar5._8_7_ = uVar98;
              }
              if ((auVar102 & (undefined1  [13])0x100000000) != (undefined1  [13])0x0) {
                uVar200 = 0;
                if (uVar164 != 0) {
                  uVar200 = uVar201 / uVar164;
                }
                uVar26 = auVar5._10_5_;
                uVar184 = auVar5._0_8_;
                auVar5._8_2_ = uVar200;
                auVar5._0_8_ = uVar184;
                auVar5._10_5_ = uVar26;
              }
              if ((auVar115[0xd] & 1) != 0) {
                uVar200 = 0;
                if (uVar170 != 0) {
                  uVar200 = uVar202 / uVar170;
                }
                uVar27 = auVar5._12_3_;
                Var185 = auVar5._0_10_;
                auVar5._10_2_ = uVar200;
                auVar5._0_10_ = Var185;
                auVar5._12_3_ = uVar27;
              }
              if ((auVar115[0xe] & 1) != 0) {
                uVar200 = 0;
                if (uVar172 != 0) {
                  uVar200 = uVar203 / uVar172;
                }
                uVar57 = auVar5[0xe];
                auVar101 = auVar5._0_12_;
                auVar5._12_2_ = uVar200;
                auVar5._0_12_ = auVar101;
                auVar5[0xe] = uVar57;
              }
              auVar188[0xf] = 0;
              auVar188._0_15_ = auVar5;
              auVar211._8_8_ = uVar31;
              auVar211._0_8_ = uVar30;
              auVar132._8_8_ = uVar36;
              auVar132._0_8_ = uVar35;
              uVar182 = (undefined2)((ulong)uVar29 >> 0x10);
              uVar212 = (undefined2)((ulong)uVar29 >> 0x20);
              uVar213 = (undefined2)((ulong)uVar29 >> 0x30);
              auVar210._8_2_ = uStack_128;
              auVar210._0_8_ = uVar28;
              auVar206._8_2_ = uStack_128;
              auVar206._0_8_ = uVar28;
              auVar191._8_2_ = uStack_128;
              auVar191._0_8_ = uVar28;
              auVar190._8_2_ = uStack_128;
              auVar190._0_8_ = uVar28;
              auVar107._8_8_ = uVar33;
              auVar107._0_8_ = uVar32;
              auVar59 = a64_TBL(ZEXT816(0),auVar142,auVar132);
              auVar64 = a64_TBL(ZEXT816(0),auVar142,auVar211);
              auVar86 = a64_TBL(ZEXT816(0),auVar120,auVar132);
              auVar90 = a64_TBL(ZEXT816(0),auVar120,auVar211);
              auVar58 = a64_TBL(ZEXT816(0),auVar120,auVar107);
              auVar190._10_2_ = uVar182;
              auVar190._12_2_ = uVar212;
              auVar190._14_2_ = uVar213;
              auVar93 = a64_TBL(ZEXT816(0),auVar120,auVar190);
              auVar94 = a64_TBL(ZEXT816(0),auVar142,auVar107);
              auVar87 = a64_TBL(ZEXT816(0),auVar154,auVar132);
              auVar88 = a64_TBL(ZEXT816(0),auVar154,auVar211);
              auVar91 = a64_TBL(ZEXT816(0),auVar154,auVar107);
              auVar191._10_2_ = uVar182;
              auVar191._12_2_ = uVar212;
              auVar191._14_2_ = uVar213;
              auVar92 = a64_TBL(ZEXT816(0),auVar154,auVar191);
              auVar206._10_2_ = uVar182;
              auVar206._12_2_ = uVar212;
              auVar206._14_2_ = uVar213;
              auVar206 = a64_TBL(ZEXT816(0),auVar155,auVar206);
              auVar210._10_2_ = uVar182;
              auVar210._12_2_ = uVar212;
              auVar210._14_2_ = uVar213;
              auVar120 = a64_TBL(ZEXT816(0),auVar142,auVar210);
              auVar207._8_8_ = 0xff00ff00ff00ff;
              auVar207._0_8_ = 0xff00ff00ff00ff;
              auVar142 = NEON_umin(in_q23,auVar207,2);
              auVar191 = NEON_umin(in_q21,auVar207,2);
              auVar154 = NEON_umin(in_q25,auVar207,2);
              auVar207 = NEON_umin(in_q27,auVar207,2);
              auVar210 = a64_TBL(ZEXT816(0),auVar155,auVar132);
              auVar190 = a64_TBL(ZEXT816(0),auVar155,auVar211);
              auVar155 = a64_TBL(ZEXT816(0),auVar155,auVar107);
              auVar187._2_2_ = 0;
              auVar187._0_2_ = auVar191._8_2_;
              auVar187._4_2_ = auVar191._10_2_;
              auVar187._6_2_ = 0;
              auVar187._8_2_ = auVar191._12_2_;
              auVar187._10_2_ = 0;
              auVar187._12_2_ = auVar191._14_2_;
              auVar187._14_2_ = 0;
              auVar147._2_2_ = 0;
              auVar147._0_2_ = auVar142._8_2_;
              auVar147._4_2_ = auVar142._10_2_;
              auVar147._6_2_ = 0;
              auVar147._8_2_ = auVar142._12_2_;
              auVar147._10_2_ = 0;
              auVar147._12_2_ = auVar142._14_2_;
              auVar147._14_2_ = 0;
              auVar74._2_2_ = 0;
              auVar74._0_2_ = auVar191._0_2_;
              auVar74._4_2_ = auVar191._2_2_;
              auVar74._6_2_ = 0;
              auVar74._8_2_ = auVar191._4_2_;
              auVar74._10_2_ = 0;
              auVar74._12_2_ = auVar191._6_2_;
              auVar74._14_2_ = 0;
              auVar146._2_2_ = 0;
              auVar146._0_2_ = auVar142._0_2_;
              auVar146._4_2_ = auVar142._2_2_;
              auVar146._6_2_ = 0;
              auVar146._8_2_ = auVar142._4_2_;
              auVar146._10_2_ = 0;
              auVar146._12_2_ = auVar142._6_2_;
              auVar146._14_2_ = 0;
              auVar77._2_2_ = 0;
              auVar77._0_2_ = auVar154._8_2_;
              auVar77._4_2_ = auVar154._10_2_;
              auVar77._6_2_ = 0;
              auVar77._8_2_ = auVar154._12_2_;
              auVar77._10_2_ = 0;
              auVar77._12_2_ = auVar154._14_2_;
              auVar77._14_2_ = 0;
              auVar133._2_2_ = 0;
              auVar133._0_2_ = auVar207._8_2_;
              auVar133._4_2_ = auVar207._10_2_;
              auVar133._6_2_ = 0;
              auVar133._8_2_ = auVar207._12_2_;
              auVar133._10_2_ = 0;
              auVar133._12_2_ = auVar207._14_2_;
              auVar133._14_2_ = 0;
              auVar121._2_2_ = 0;
              auVar121._0_2_ = auVar154._0_2_;
              auVar121._4_2_ = auVar154._2_2_;
              auVar121._6_2_ = 0;
              auVar121._8_2_ = auVar154._4_2_;
              auVar121._10_2_ = 0;
              auVar121._12_2_ = auVar154._6_2_;
              auVar121._14_2_ = 0;
              auVar208._2_2_ = 0;
              auVar208._0_2_ = auVar207._0_2_;
              auVar208._4_2_ = auVar207._2_2_;
              auVar208._6_2_ = 0;
              auVar208._8_2_ = auVar207._4_2_;
              auVar208._10_2_ = 0;
              auVar208._12_2_ = auVar207._6_2_;
              auVar208._14_2_ = 0;
              if ((auVar115[0xf] & 1) != 0) {
                uVar200 = 0;
                if (uVar174 != 0) {
                  uVar200 = uVar204 / uVar174;
                }
                auVar188._0_14_ = auVar5._0_14_;
                auVar188._14_2_ = uVar200;
              }
              auVar142 = NEON_ext(auVar115,auVar115,8,1);
              auVar13._1_12_ = auVar6._3_12_;
              auVar13[0] = bVar81;
              auVar7[4] = bVar82;
              auVar7._0_4_ = auVar13._0_4_ << 0x10;
              auVar7._5_10_ = auVar6._5_10_;
              auVar8[6] = bVar83;
              auVar8._0_6_ = auVar7._0_6_;
              auVar8._7_8_ = auVar6._7_8_;
              auVar10[1] = 0;
              auVar10[0] = bVar80;
              auVar10._2_13_ = auVar8._2_13_;
              uVar55 = uVar55 - 0x10;
              auVar14._1_13_ = auVar115._3_13_;
              auVar14[0] = bVar75;
              auVar104._0_4_ = auVar14._0_4_ << 0x10;
              auVar104._5_11_ = auVar115._5_11_;
              auVar104[4] = bVar78;
              auVar105._7_9_ = auVar115._7_9_;
              auVar105._0_6_ = auVar104._0_6_;
              auVar105[6] = bVar79;
              auVar129._2_14_ = auVar105._2_14_;
              auVar129[1] = 0;
              auVar66[0] = bVar214 & auVar166[0];
              auVar66[1] = bVar215 & auVar166[1];
              auVar66[2] = bVar216 & auVar166[2];
              auVar66[3] = bVar217 & auVar166[3];
              auVar66[4] = bVar218 & auVar166[4];
              auVar66[5] = bVar219 & auVar166[5];
              auVar66[6] = bVar220 & auVar166[6];
              auVar66[7] = bVar221 & auVar166[7];
              auVar66[8] = bVar222 & auVar166[8];
              auVar66[9] = bVar223 & auVar166[9];
              auVar66[10] = bVar224 & auVar166[10];
              auVar66[0xb] = bVar225 & auVar166[0xb];
              auVar66[0xc] = bVar226 & auVar166[0xc];
              auVar66[0xd] = bVar227 & auVar166[0xd];
              auVar66[0xe] = bVar228 & auVar166[0xe];
              auVar66[0xf] = bVar44 & auVar166[0xf];
              pbVar49 = pbVar49 + 0x40;
              in_q25._0_4_ = auVar155._0_4_ << 0x18;
              in_q25._4_4_ = auVar155._4_4_ << 0x18;
              in_q25._8_4_ = auVar155._8_4_ << 0x18;
              in_q25._12_4_ = auVar155._12_4_ << 0x18;
              in_q23._0_4_ = auVar210._0_4_ << 0x18;
              in_q23._4_4_ = auVar210._4_4_ << 0x18;
              in_q23._8_4_ = auVar210._8_4_ << 0x18;
              in_q23._12_4_ = auVar210._12_4_ << 0x18;
              auVar15._1_13_ = SUB1613(auVar186 << 0x30,3);
              auVar15[0] = auVar142[1];
              auVar193._0_4_ = auVar15._0_4_ << 0x10;
              auVar193._5_11_ = SUB1611(auVar186 << 0x30,5);
              auVar193[4] = auVar142[2];
              auVar194._7_9_ = (unkbyte9)(Var21 >> 8);
              auVar194._0_6_ = auVar193._0_6_;
              auVar194[6] = auVar142[3];
              auVar192._2_14_ = auVar194._2_14_;
              auVar192[1] = 0;
              auVar192[0] = auVar142[0];
              auVar16._1_13_ = auVar142._3_13_;
              auVar16[0] = auVar142[5];
              auVar61._0_4_ = auVar16._0_4_ << 0x10;
              auVar61._5_11_ = auVar142._5_11_;
              auVar61[4] = auVar142[6];
              auVar62._7_9_ = auVar142._7_9_;
              auVar62._0_6_ = auVar61._0_6_;
              auVar62[6] = auVar142[7];
              auVar60._2_14_ = auVar62._2_14_;
              auVar60[1] = 0;
              auVar60[0] = auVar142[4];
              auVar186 = NEON_ext(auVar66,auVar66,8,1);
              auVar17._1_13_ = in_q21._3_13_;
              auVar17[0] = auVar66[5];
              auVar157._0_4_ = auVar17._0_4_ << 0x10;
              auVar157._5_11_ = in_q21._5_11_;
              auVar157[4] = auVar66[6];
              auVar158._7_9_ = in_q21._7_9_;
              auVar158._0_6_ = auVar157._0_6_;
              auVar158[6] = auVar66[7];
              auVar156._2_14_ = auVar158._2_14_;
              auVar156[1] = 0;
              auVar156[0] = auVar66[4];
              auVar166._8_2_ = 0xff;
              auVar166._0_8_ = 0xff00ff00ff00ff;
              auVar166._10_2_ = 0xff;
              auVar166._12_2_ = 0xff;
              auVar166._14_2_ = 0xff;
              auVar211 = NEON_umin(in_q28,auVar166,2);
              auVar18._1_13_ = auVar66._3_13_;
              auVar18[0] = auVar66[1];
              auVar68._0_4_ = auVar18._0_4_ << 0x10;
              auVar68._5_11_ = auVar66._5_11_;
              auVar68[4] = auVar66[2];
              auVar69._7_9_ = auVar66._7_9_;
              auVar69._0_6_ = auVar68._0_6_;
              auVar69[6] = auVar66[3];
              auVar67._2_14_ = auVar69._2_14_;
              auVar67[1] = 0;
              auVar67[0] = auVar66[0];
              auVar169._0_4_ = (uint)auVar10._0_3_ << 0x1f;
              auVar169._4_4_ = (uint)(uint3)(auVar10._0_3_ >> 0x10) << 0x1f;
              auVar169._8_4_ = (uint)bVar82 << 0x1f;
              auVar169._12_4_ = (uint)bVar83 << 0x1f;
              auVar106._0_4_ = (uint)auVar129._0_3_ << 0x1f;
              auVar106._4_4_ = (uint)(uint3)(auVar129._0_3_ >> 0x10) << 0x1f;
              auVar106._8_4_ = (uint)bVar78 << 0x1f;
              auVar106._12_4_ = (uint)bVar79 << 0x1f;
              auVar207 = NEON_cmlt(auVar169,0,4);
              auVar195._0_4_ = (uint)auVar192._0_3_ << 0x1f;
              auVar195._4_4_ = (uint)(uint3)(auVar192._0_3_ >> 0x10) << 0x1f;
              auVar195._8_4_ = (uint)auVar142[2] << 0x1f;
              auVar195._12_4_ = (uint)auVar142[3] << 0x1f;
              auVar63._0_4_ = (uint)auVar60._0_3_ << 0x1f;
              auVar63._4_4_ = (uint)(uint3)(auVar60._0_3_ >> 0x10) << 0x1f;
              auVar63._8_4_ = (uint)auVar142[6] << 0x1f;
              auVar63._12_4_ = (uint)auVar142[7] << 0x1f;
              auVar107 = NEON_cmlt(auVar106,0,4);
              auVar159._0_4_ = (uint)auVar156._0_3_ << 0x1f;
              auVar159._4_4_ = (uint)(uint3)(auVar156._0_3_ >> 0x10) << 0x1f;
              auVar159._8_4_ = (uint)auVar66[6] << 0x1f;
              auVar159._12_4_ = (uint)auVar66[7] << 0x1f;
              auVar115 = NEON_bit(auVar58,auVar187,auVar207,1);
              auVar58._8_2_ = 0xff;
              auVar58._0_8_ = 0xff00ff00ff00ff;
              auVar58._10_2_ = 0xff;
              auVar58._12_2_ = 0xff;
              auVar58._14_2_ = 0xff;
              auVar142 = NEON_umin(auVar188,auVar58,2);
              auVar191 = NEON_bif(auVar77,auVar94,auVar207,1);
              auVar187 = NEON_cmlt(auVar195,0,4);
              auVar19._1_13_ = auVar195._3_13_;
              auVar19[0] = auVar186[5];
              auVar197._0_4_ = auVar19._0_4_ << 0x10;
              auVar197._5_11_ = auVar195._5_11_;
              auVar197[4] = auVar186[6];
              auVar198._7_9_ = auVar195._7_9_;
              auVar198._0_6_ = auVar197._0_6_;
              auVar198[6] = auVar186[7];
              auVar196._2_14_ = auVar198._2_14_;
              auVar196[1] = 0;
              auVar196[0] = auVar186[4];
              auVar20._1_13_ = auVar186._3_13_;
              auVar20[0] = auVar186[1];
              auVar72._0_4_ = auVar20._0_4_ << 0x10;
              auVar72._5_11_ = auVar186._5_11_;
              auVar72[4] = auVar186[2];
              auVar94._7_9_ = auVar186._7_9_;
              auVar94._0_6_ = auVar72._0_6_;
              auVar94[6] = auVar186[3];
              auVar71._2_14_ = auVar94._2_14_;
              auVar71[0] = auVar186[0];
              auVar71[1] = 0;
              auVar154 = NEON_cmlt(auVar63,0,4);
              auVar166 = NEON_bif(auVar74,auVar93,auVar107,1);
              auVar93._0_4_ = (uint)auVar67._0_3_ << 0x1f;
              auVar93._4_4_ = (uint)(uint3)(auVar67._0_3_ >> 0x10) << 0x1f;
              auVar93._8_4_ = (uint)auVar66[2] << 0x1f;
              auVar93._12_4_ = (uint)auVar66[3] << 0x1f;
              auVar58 = NEON_cmge(auVar159,0,4);
              auVar129 = NEON_bif(auVar146,auVar90,auVar187,1);
              auVar89._2_2_ = 0;
              auVar89._0_2_ = auVar211._8_2_;
              auVar89._4_2_ = auVar211._10_2_;
              auVar89._6_2_ = 0;
              auVar89._8_2_ = auVar211._12_2_;
              auVar89._10_2_ = 0;
              auVar89._12_2_ = auVar211._14_2_;
              auVar89._14_2_ = 0;
              in_q28._2_2_ = 0;
              in_q28._0_2_ = auVar211._0_2_;
              in_q28._4_2_ = auVar211._2_2_;
              in_q28._6_2_ = 0;
              in_q28._8_2_ = auVar211._4_2_;
              in_q28._10_2_ = 0;
              in_q28._12_2_ = auVar211._6_2_;
              in_q28._14_2_ = 0;
              auVar132 = NEON_bif(auVar133,auVar59,auVar154,1);
              auVar146 = NEON_bif(auVar147,auVar86,auVar154,1);
              auVar85._2_2_ = 0;
              auVar85._0_2_ = auVar142._8_2_;
              auVar85._4_2_ = auVar142._10_2_;
              auVar85._6_2_ = 0;
              auVar85._8_2_ = auVar142._12_2_;
              auVar85._10_2_ = 0;
              auVar85._12_2_ = auVar142._14_2_;
              auVar85._14_2_ = 0;
              auVar90._2_2_ = 0;
              auVar90._0_2_ = auVar142._0_2_;
              auVar90._4_2_ = auVar142._2_2_;
              auVar90._6_2_ = 0;
              auVar90._8_2_ = auVar142._4_2_;
              auVar90._10_2_ = 0;
              auVar90._12_2_ = auVar142._6_2_;
              auVar90._14_2_ = 0;
              in_q27 = NEON_bif(auVar208,auVar64,auVar187,1);
              auVar211 = NEON_bif(auVar121,auVar120,auVar107,1);
              auVar207 = NEON_bsl(auVar207,auVar89,auVar91,1);
              auVar199._0_4_ = (uint)auVar196._0_3_ << 0x1f;
              auVar199._4_4_ = (uint)(uint3)(auVar196._0_3_ >> 0x10) << 0x1f;
              auVar199._8_4_ = (uint)auVar186[6] << 0x1f;
              auVar199._12_4_ = (uint)auVar186[7] << 0x1f;
              auVar91._0_4_ = (uint)auVar71._0_3_ << 0x1f;
              auVar91._4_4_ = (uint)(uint3)(auVar71._0_3_ >> 0x10) << 0x1f;
              auVar91._8_4_ = (uint)auVar186[2] << 0x1f;
              auVar91._12_4_ = (uint)auVar186[3] << 0x1f;
              auVar120 = NEON_bsl(auVar154,auVar85,auVar87,1);
              auVar64 = NEON_bif(auVar90,auVar88,auVar187,1);
              auVar186 = NEON_bsl(auVar107,in_q28,auVar92,1);
              auVar142 = NEON_cmge(auVar93,0,4);
              auVar107 = NEON_cmge(auVar199,0,4);
              auVar154 = NEON_cmge(auVar91,0,4);
              local_c0 = auVar190._0_4_;
              iStack_bc = auVar190._4_4_;
              iStack_b8 = auVar190._8_4_;
              iStack_b4 = auVar190._12_4_;
              bVar78 = auVar154[7];
              bVar79 = auVar154[0xb];
              bVar80 = auVar154[0xf];
              in_q21._0_4_ = local_c0 << 0x18;
              in_q21._4_4_ = iStack_bc << 0x18;
              in_q21._8_4_ = iStack_b8 << 0x18;
              in_q21._12_4_ = iStack_b4 << 0x18;
              in_q6[0xe] = auVar166[0xc] & auVar142[0xe];
              in_q5._0_9_ = (unkuint9)(in_q27[6] & bVar78) << 0x38;
              in_q5[9] = in_q27[8] & auVar154[9];
              in_q5[10] = in_q27[9] & auVar154[10];
              in_q5[0xb] = in_q27[10] & bVar79;
              in_q5[0xc] = 0;
              in_q5[0xd] = in_q27[0xc] & auVar154[0xd];
              in_q5[0xe] = in_q27[0xd] & auVar154[0xe];
              in_q5[0xf] = in_q27[0xe] & bVar80;
              bVar83 = auVar58[7] & (auVar191[6] | auVar207[7]);
              bVar84 = auVar58[8] & auVar207[8];
              auVar59[1] = bVar84;
              auVar59[0] = bVar83;
              bVar95 = auVar58[9] & (auVar191[8] | auVar207[9]);
              auVar59[2] = bVar95;
              bVar75 = auVar191[9] | auVar207[10];
              auVar59[3] = auVar58[10] & bVar75;
              bVar108 = auVar58[0xb] & (auVar191[10] | auVar207[0xb]);
              auVar59[4] = bVar108;
              bVar109 = auVar58[0xc] & auVar207[0xc];
              auVar59[5] = bVar109;
              bVar110 = auVar58[0xd] & (auVar191[0xc] | auVar207[0xd]);
              auVar59[6] = bVar110;
              bVar44 = auVar191[0xd] | auVar207[0xe];
              auVar59[7] = auVar58[0xe] & bVar44;
              bVar111 = auVar58[0xf] & (auVar191[0xe] | auVar207[0xf]);
              auVar59[8] = bVar111;
              auVar59._9_7_ = 0;
              in_q7 = auVar59 << 0x38;
              bVar81 = auVar166[5] & auVar142[7] | auVar206[4];
              bVar82 = auVar166[9] & auVar142[0xb] | auVar206[8];
              in_q6._0_14_ = ZEXT514(CONCAT14(bVar82,CONCAT13(auVar166[8] & auVar142[10],
                                                              (uint3)bVar81))) << 0x38;
              in_q6[0xf] = auVar166[0xd] & auVar142[0xf] | auVar206[0xc];
              in_q4[8] = auVar142[8] & auVar186[8];
              in_q4[9] = auVar142[9] & (auVar211[8] | auVar186[9]);
              in_q4[0xc] = auVar142[0xc] & auVar186[0xc];
              in_q4[0xd] = auVar142[0xd] & (auVar211[0xc] | auVar186[0xd]);
              in_q4._0_8_ = CONCAT17(bVar81 | auVar142[7] & (auVar211[6] | auVar186[7]),
                                     CONCAT16(auVar142[6] &
                                              (auVar166[4] | auVar211[5] | auVar186[6]),
                                              CONCAT15(auVar142[5] & (auVar211[4] | auVar186[5]),
                                                       CONCAT14(auVar142[4] & auVar186[4],
                                                                CONCAT13(auVar166[1] & auVar142[3] |
                                                                         auVar206[0] |
                                                                         auVar142[3] &
                                                                         (auVar211[2] | auVar186[3])
                                                                         ,CONCAT12(auVar142[2] &
                                                                                   (auVar166[0] |
                                                                                   auVar211[1] |
                                                                                   auVar186[2]),
                                                                                   CONCAT11(auVar142
                                                  [1] & (auVar211[0] | auVar186[1]),
                                                  auVar142[0] & auVar186[0])))))));
              in_q4[10] = auVar142[10] & (auVar166[8] | auVar211[9] | auVar186[10]);
              in_q4[0xb] = bVar82 | auVar142[0xb] & (auVar211[10] | auVar186[0xb]);
              in_q4[0xe] = auVar142[0xe] & (auVar166[0xc] | auVar211[0xd] | auVar186[0xe]);
              in_q4[0xf] = in_q6[0xf] | auVar142[0xf] & (auVar211[0xe] | auVar186[0xf]);
              auVar86._0_8_ =
                   CONCAT17(auVar129[5] & bVar78 | auVar190[4] | bVar78 & (in_q27[6] | auVar64[7]),
                            CONCAT16(auVar154[6] & (auVar129[4] | in_q27[5] | auVar64[6]),
                                     CONCAT15(auVar154[5] & (in_q27[4] | auVar64[5]),
                                              CONCAT14(auVar154[4] & auVar64[4],
                                                       CONCAT13(auVar129[1] & auVar154[3] |
                                                                auVar190[0] |
                                                                auVar154[3] &
                                                                (in_q27[2] | auVar64[3]),
                                                                CONCAT12(auVar154[2] &
                                                                         (auVar129[0] |
                                                                         in_q27[1] | auVar64[2]),
                                                                         CONCAT11(auVar154[1] &
                                                                                  (in_q27[0] |
                                                                                  auVar64[1]),
                                                                                  auVar154[0] &
                                                                                  auVar64[0])))))));
              auVar86[8] = auVar154[8] & auVar64[8];
              auVar86[9] = auVar154[9] & (in_q27[8] | auVar64[9]);
              auVar86[10] = auVar154[10] & (auVar129[8] | in_q27[9] | auVar64[10]);
              auVar86[0xb] = auVar129[9] & bVar79 | auVar190[8] |
                             bVar79 & (in_q27[10] | auVar64[0xb]);
              auVar86[0xc] = auVar154[0xc] & auVar64[0xc];
              auVar86[0xd] = auVar154[0xd] & (in_q27[0xc] | auVar64[0xd]);
              auVar86[0xe] = auVar154[0xe] & (auVar129[0xc] | in_q27[0xd] | auVar64[0xe]);
              auVar86[0xf] = auVar129[0xd] & bVar80 | auVar190[0xc] |
                             bVar80 & (in_q27[0xe] | auVar64[0xf]);
              *(long *)(pbVar46 + 8) = in_q4._8_8_;
              *(undefined8 *)pbVar46 = in_q4._0_8_;
              pbVar46[0x20] = bVar84;
              pbVar46[0x21] = bVar95;
              pbVar46[0x22] = auVar58[10] & (auVar115[8] | bVar75);
              pbVar46[0x23] = auVar115[9] & auVar58[0xb] | auVar155[8] | bVar108;
              pbVar46[0x24] = bVar109;
              pbVar46[0x25] = bVar110;
              pbVar46[0x26] = auVar58[0xe] & (auVar115[0xc] | bVar44);
              pbVar46[0x27] = auVar115[0xd] & auVar58[0xf] | auVar155[0xc] | bVar111;
              pbVar46[0x10] = auVar58[0] & auVar207[0];
              pbVar46[0x11] = auVar58[1] & (auVar191[0] | auVar207[1]);
              pbVar46[0x12] = auVar58[2] & (auVar115[0] | auVar191[1] | auVar207[2]);
              pbVar46[0x13] =
                   auVar115[1] & auVar58[3] | auVar155[0] | auVar58[3] & (auVar191[2] | auVar207[3])
              ;
              pbVar46[0x14] = auVar58[4] & auVar207[4];
              pbVar46[0x15] = auVar58[5] & (auVar191[4] | auVar207[5]);
              pbVar46[0x16] = auVar58[6] & (auVar115[4] | auVar191[5] | auVar207[6]);
              pbVar46[0x17] = auVar115[5] & auVar58[7] | auVar155[4] | bVar83;
              *(long *)(pbVar46 + 0x28) = auVar86._8_8_;
              *(undefined8 *)(pbVar46 + 0x20) = auVar86._0_8_;
              pbVar46[0x40] = auVar107[8] & auVar120[8];
              pbVar46[0x41] = auVar107[9] & (auVar132[8] | auVar120[9]);
              pbVar46[0x42] = auVar107[10] & (auVar146[8] | auVar132[9] | auVar120[10]);
              pbVar46[0x43] =
                   auVar146[9] & auVar107[0xb] | auVar210[8] |
                   auVar107[0xb] & (auVar132[10] | auVar120[0xb]);
              pbVar46[0x44] = auVar107[0xc] & auVar120[0xc];
              pbVar46[0x45] = auVar107[0xd] & (auVar132[0xc] | auVar120[0xd]);
              pbVar46[0x46] = auVar107[0xe] & (auVar146[0xc] | auVar132[0xd] | auVar120[0xe]);
              pbVar46[0x47] =
                   auVar146[0xd] & auVar107[0xf] | auVar210[0xc] |
                   auVar107[0xf] & (auVar132[0xe] | auVar120[0xf]);
              pbVar46[0x30] = auVar107[0] & auVar120[0];
              pbVar46[0x31] = auVar107[1] & (auVar132[0] | auVar120[1]);
              pbVar46[0x32] = auVar107[2] & (auVar146[0] | auVar132[1] | auVar120[2]);
              pbVar46[0x33] =
                   auVar146[1] & auVar107[3] | auVar210[0] |
                   auVar107[3] & (auVar132[2] | auVar120[3]);
              pbVar46[0x34] = auVar107[4] & auVar120[4];
              pbVar46[0x35] = auVar107[5] & (auVar132[4] | auVar120[5]);
              pbVar46[0x36] = auVar107[6] & (auVar146[4] | auVar132[5] | auVar120[6]);
              pbVar46[0x37] =
                   auVar146[5] & auVar107[7] | auVar210[4] |
                   auVar107[7] & (auVar132[6] | auVar120[7]);
              pbVar46 = pbVar46 + 0x40;
            } while (uVar55 != 0);
            if (uVar56 != uVar48) {
              if (((uint)uVar56 >> 3 & 1) == 0) {
                pbVar49 = pbVar43 + uVar48 * 4;
                uVar55 = uVar48;
                goto LAB_00334480;
              }
              goto LAB_00333824;
            }
          }
        }
        (**(code **)(*(long *)p_Var34 + 0x618))(p_Var34,lVar40,pbVar41,0);
        p_Var38 = (_jmethodID *)GetBitmapSetPixelsMethodId();
        JNIExceptionHandler::CallVoidMethod
                  (p_Var34,p_Var39,p_Var38,lVar40,0,uVar54,0,0,(int)this,param_1);
        this_00 = (CanvasRenderImage *)operator_new(0x40);
        CanvasRenderImage::CanvasRenderImage(this_00,p_Var39);
        (**(code **)(*(long *)p_Var34 + 0xb8))(p_Var34,lVar40);
        (**(code **)(*(long *)p_Var34 + 0xb8))(p_Var34,p_Var39);
        goto LAB_003337a4;
      }
      (**(code **)(*(long *)p_Var34 + 0xb8))(p_Var34,p_Var39);
      pcVar42 = "renderImageFromRGBABytesCanvas() - NewIntArray failed.";
    }
  }
  RiveLogE("RiveLN/ImageDecode",pcVar42);
  this_00 = (CanvasRenderImage *)0x0;
LAB_003337a4:
  *in_x8 = this_00;
  return;
}


// ===== 0033453c  rive_android::unpremultiply =====

/* rive_android::unpremultiply(unsigned char, unsigned char) */

uint rive_android::unpremultiply(uchar param_1,uchar param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  if (uVar2 != 0) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = ((uint)param_1 * 0xff + (uint)(param_2 >> 1) & 0xffff) / uVar2;
    }
    if (0xfe < uVar1) {
      uVar1 = 0xff;
    }
    return uVar1;
  }
  return 0;
}


// ===== 00334578  rive_android::renderImageFromARGBIntsRive =====

/* rive_android::renderImageFromARGBIntsRive(unsigned int, unsigned int, unsigned int const*, bool)
    */

void __thiscall
rive_android::renderImageFromARGBIntsRive
          (rive_android *this,uint param_1,uint param_2,uint *param_3,bool param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  AndroidImage *pAVar7;
  ulong uVar8;
  undefined8 *in_x8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  void *local_60;
  long local_58;
  
  uVar8 = (ulong)param_2;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((((int)this == 0) || (param_1 == 0)) || (uVar8 == 0)) {
    RiveLogE("RiveLN/ImageDecode","renderImageFromARGBIntsRive() - Invalid args.",uVar8,param_3,
             (ulong)param_4);
    pAVar7 = (AndroidImage *)0x0;
  }
  else {
    lVar11 = (ulong)param_1 * ((ulong)this & 0xffffffff);
    local_60 = operator_new__(lVar11 * 4);
    uVar5 = DAT_0024e948;
    lVar9 = 0;
    do {
      uVar2 = *(uint *)(uVar8 + lVar9);
      uVar3 = uVar2 >> 0x18;
      uVar10 = uVar2 & 0xff;
      uVar12 = NEON_ushl(CONCAT44(uVar2,uVar2),uVar5,4);
      uVar12 = uVar12 & 0xff000000ff;
      if (((ulong)param_3 & 1) == 0) {
        if (uVar3 == 0) {
          uVar12 = 0;
          uVar10 = 0;
        }
        else if (uVar3 != 0xff) {
          uVar3 = uVar3 | uVar3 << 8;
          uVar10 = uVar3 * uVar10 + 0x8080 >> 0x10;
          uVar13 = uVar3 * (int)(uVar12 >> 0x20) + 0x8080;
          uVar12 = CONCAT44(uVar13 >> 0x10,
                            (int)(CONCAT44(uVar13,uVar3 * (int)uVar12 + 0x8080) >> 0x10)) &
                   0xffffffff0000ffff;
        }
      }
      puVar1 = (undefined1 *)((long)local_60 + lVar9);
      lVar11 = lVar11 + -1;
      lVar9 = lVar9 + 4;
      puVar1[2] = (char)uVar10;
      puVar1[3] = (char)(uVar2 >> 0x18);
      *puVar1 = (char)uVar12;
      puVar1[1] = (char)(uVar12 >> 0x20);
    } while (lVar11 != 0);
    pAVar7 = (AndroidImage *)operator_new(0x48);
    AndroidImage::AndroidImage(pAVar7,(ulong)this & 0xffffffff,(ulong)param_1,&local_60);
    pvVar6 = local_60;
    local_60 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
    }
  }
  *in_x8 = pAVar7;
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003346e4  rive_android::renderImageFromARGBIntsCanvas =====

/* rive_android::renderImageFromARGBIntsCanvas(unsigned int, unsigned int, unsigned int const*,
   bool) */

void __thiscall
rive_android::renderImageFromARGBIntsCanvas
          (rive_android *this,uint param_1,uint param_2,uint *param_3,bool param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  _JNIEnv *p_Var5;
  undefined8 uVar6;
  undefined8 uVar7;
  _jclass *p_Var8;
  _jmethodID *p_Var9;
  _jobject *p_Var10;
  long lVar11;
  void *pvVar12;
  CanvasRenderImage *this_00;
  char *pcVar13;
  ulong uVar14;
  undefined8 *in_x8;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  
  uVar14 = (ulong)param_2;
  if ((((int)this == 0) || (param_1 == 0)) || (uVar14 == 0)) {
    pcVar13 = "renderImageFromARGBIntsCanvas() - Invalid args.";
  }
  else {
    uVar20 = (ulong)this & 0xffffffff;
    p_Var5 = (_JNIEnv *)GetJNIEnv();
    uVar6 = GetAndroidBitmapConfigClass();
    uVar7 = GetARGB8888Field();
    uVar6 = (**(code **)(*(long *)p_Var5 + 0x488))(p_Var5,uVar6,uVar7);
    p_Var8 = (_jclass *)GetAndroidBitmapClass();
    p_Var9 = (_jmethodID *)GetCreateBitmapStaticMethodId();
    p_Var10 = (_jobject *)
              JNIExceptionHandler::CallStaticObjectMethod
                        (p_Var5,p_Var8,p_Var9,uVar20,(ulong)param_1,uVar6);
    if (p_Var10 == (_jobject *)0x0) {
      pcVar13 = "renderImageFromARGBIntsCanvas() - Bitmap.createBitmap(...) failed.";
    }
    else {
      uVar21 = param_1 * uVar20;
      lVar11 = (**(code **)(*(long *)p_Var5 + 0x598))(p_Var5,uVar21 & 0xffffffff);
      if (lVar11 != 0) {
        if (((ulong)param_3 & 1) == 0) {
          (**(code **)(*(long *)p_Var5 + 0x698))(p_Var5,lVar11,0,uVar21 & 0xffffffff,uVar14);
        }
        else {
          uVar16 = uVar21 * 4;
          if (uVar21 >> 0x3e != 0) {
            uVar16 = 0xffffffffffffffff;
          }
          pvVar12 = operator_new__(uVar16);
          lVar15 = 0;
          do {
            uVar1 = *(uint *)(uVar14 + lVar15 * 4);
            uVar2 = uVar1 >> 0x18;
            uVar17 = uVar1 >> 8 & 0xff;
            if (uVar2 == 0xff) {
              uVar18 = uVar1 >> 0x10 & 0xff;
              uVar19 = uVar1 & 0xff;
            }
            else if (uVar2 == 0) {
              uVar17 = 0;
              uVar19 = 0;
              uVar18 = 0;
            }
            else {
              uVar3 = uVar1 >> 0x19;
              iVar4 = uVar17 * 0xff;
              uVar18 = 0;
              if (uVar2 != 0) {
                uVar18 = ((uVar3 - (uVar1 >> 0x10 & 0xff)) + (uVar1 >> 0x10) * 0x100 & 0xffff) /
                         uVar2;
              }
              uVar17 = 0;
              if (uVar2 != 0) {
                uVar17 = (uVar3 + iVar4 & 0xffff) / uVar2;
              }
              uVar19 = 0;
              if (uVar2 != 0) {
                uVar19 = ((uVar3 - (uVar1 & 0xff)) + uVar1 * 0x100 & 0xffff) / uVar2;
              }
              if (0xfe < uVar18) {
                uVar18 = 0xff;
              }
              if (0xfe < uVar17) {
                uVar17 = 0xff;
              }
              if (0xfe < uVar19) {
                uVar19 = 0xff;
              }
            }
            *(uint *)((long)pvVar12 + lVar15 * 4) =
                 uVar1 & 0xff000000 | uVar18 << 0x10 | uVar17 << 8 | uVar19;
            lVar15 = lVar15 + 1;
          } while (uVar21 - lVar15 != 0);
          (**(code **)(*(long *)p_Var5 + 0x698))(p_Var5,lVar11,0,uVar21 & 0xffffffff,pvVar12);
          operator_delete__(pvVar12);
        }
        p_Var9 = (_jmethodID *)GetBitmapSetPixelsMethodId();
        JNIExceptionHandler::CallVoidMethod
                  (p_Var5,p_Var10,p_Var9,lVar11,0,uVar20,0,0,(int)this,param_1);
        this_00 = (CanvasRenderImage *)operator_new(0x40);
        CanvasRenderImage::CanvasRenderImage(this_00,p_Var10);
        (**(code **)(*(long *)p_Var5 + 0xb8))(p_Var5,lVar11);
        (**(code **)(*(long *)p_Var5 + 0xb8))(p_Var5,p_Var10);
        goto LAB_003348c0;
      }
      (**(code **)(*(long *)p_Var5 + 0xb8))(p_Var5,p_Var10);
      pcVar13 = "renderImageFromARGBIntsCanvas() - NewIntArray failed.";
    }
  }
  RiveLogE("RiveLN/ImageDecode",pcVar13);
  this_00 = (CanvasRenderImage *)0x0;
LAB_003348c0:
  *in_x8 = this_00;
  return;
}


// ===== 003349a0  rive_android::renderImageFromBitmapRive =====

/* rive_android::renderImageFromBitmapRive(_jobject*, bool) */

void rive_android::renderImageFromBitmapRive(_jobject *param_1,bool param_2)

{
  long lVar1;
  _JNIEnv *p_Var2;
  ulong uVar3;
  void *__dest;
  char *pcVar4;
  undefined1 in_w4;
  undefined8 *in_x8;
  size_t __n;
  uint *__src;
  void *__dest_00;
  uint *local_88;
  uint local_7c;
  uint uStack_78;
  uint local_74;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (_jobject *)0x0) {
    pcVar4 = "renderImageFromBitmapRive() - Bitmap was null.";
  }
  else {
    p_Var2 = (_JNIEnv *)GetJNIEnv();
    local_88 = (uint *)0x0;
    uVar3 = lockBitmapRGBA8888(p_Var2,param_1,(AndroidBitmapInfo *)&local_7c,&local_88);
    if ((uVar3 & 1) != 0) {
      uVar3 = (ulong)uStack_78;
      __n = (long)(ulong)local_7c * 4;
      __dest = operator_new__(__n * uVar3);
      if (__n - local_74 == 0) {
        memcpy(__dest,local_88,__n * uVar3);
      }
      else {
        __src = local_88;
        __dest_00 = __dest;
        if (uStack_78 != 0) {
          do {
            memcpy(__dest_00,__src,__n);
            uVar3 = uVar3 - 1;
            __src = (uint *)((long)__src + (ulong)local_74);
            __dest_00 = (void *)((long)__dest_00 + __n);
          } while (uVar3 != 0);
        }
      }
      AndroidBitmap_unlockPixels(p_Var2,param_1);
      renderImageFromRGBABytesRive
                ((rive_android *)(ulong)local_7c,uStack_78,(uint)__dest,
                 (uchar *)(ulong)(param_2 & 1),(bool)in_w4);
      operator_delete__(__dest);
      goto LAB_00334ad0;
    }
    pcVar4 = "renderImageFromBitmapRive() - Failed to lock srcPixels.";
  }
  RiveLogE("RiveLN/ImageDecode",pcVar4);
  *in_x8 = 0;
LAB_00334ad0:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00334b04  rive_android::lockBitmapRGBA8888 =====

/* rive_android::lockBitmapRGBA8888(_JNIEnv*, _jobject*, AndroidBitmapInfo*, unsigned int const**)
    */

void rive_android::lockBitmapRGBA8888
               (_JNIEnv *param_1,_jobject *param_2,AndroidBitmapInfo *param_3,uint **param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = AndroidBitmap_getInfo();
  if (iVar3 == 0) {
    if (*(int *)(param_3 + 0xc) == 1) {
      if ((*(int *)param_3 != 0) && (*(int *)(param_3 + 4) != 0)) {
        local_50 = (uint *)0x0;
        iVar3 = AndroidBitmap_lockPixels(param_1,param_2,&local_50);
        bVar2 = iVar3 == 0 && local_50 != (uint *)0x0;
        if (iVar3 == 0 && local_50 != (uint *)0x0) {
          *param_4 = local_50;
        }
        else {
          if (iVar3 == -3) {
            pcVar4 = "lockBitmapRGBA8888() - Failed to lock pixes: allocation failed.";
          }
          else if (iVar3 == -2) {
            pcVar4 = "lockBitmapRGBA8888() - Failed to lock pixes: JNI exception occurred.";
          }
          else {
            if (iVar3 != -1) {
              RiveLogE("RiveLN/ImageDecode",
                       "lockBitmapRGBA8888() - Failed to lock pixes: unknown error: %d");
              goto LAB_00334bd0;
            }
            pcVar4 = "lockBitmapRGBA8888() - Failed to lock pixes: bad parameter.";
          }
          RiveLogE("RiveLN/ImageDecode",pcVar4);
        }
        goto LAB_00334bd0;
      }
      pcVar4 = "lockBitmapRGBA8888() - Invalid dimensions.";
    }
    else {
      pcVar4 = "lockBitmapRGBA8888() - Unexpected bitmap format.";
    }
  }
  else {
    pcVar4 = "lockBitmapRGBA8888() - AndroidBitmap_getInfo failed.";
  }
  RiveLogE("RiveLN/ImageDecode",pcVar4);
  bVar2 = false;
LAB_00334bd0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


// ===== 00334c78  rive_android::renderImageFromBitmapCanvas =====

/* rive_android::renderImageFromBitmapCanvas(_jobject*) */

void __thiscall rive_android::renderImageFromBitmapCanvas(rive_android *this,_jobject *param_1)

{
  CanvasRenderImage *this_00;
  undefined8 *in_x8;
  
  if (this == (rive_android *)0x0) {
    RiveLogE("RiveLN/ImageDecode","renderImageFromBitmapCanvas() - Bitmap was null.");
    this_00 = (CanvasRenderImage *)0x0;
  }
  else {
    this_00 = (CanvasRenderImage *)operator_new(0x40);
    CanvasRenderImage::CanvasRenderImage(this_00,(_jobject *)this);
  }
  *in_x8 = this_00;
  return;
}


// ===== 00334cd8  rive_android::JNIExceptionHandler::get_exception_message =====

/* rive_android::JNIExceptionHandler::get_exception_message(_JNIEnv*, _jthrowable*) */

void rive_android::JNIExceptionHandler::get_exception_message(_JNIEnv *param_1,_jthrowable *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  _jthrowable *p_Var6;
  long lVar7;
  undefined *local_170;
  undefined *local_168 [8];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [3];
  undefined8 uStack_e8;
  undefined4 auStack_e0 [30];
  long local_68;
  
  puVar4 = PTR_VTT_0067cc58;
  puVar3 = PTR_vtable_0067cc50;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_vtable_0067cc50 + 0x40;
  local_170 = *(undefined **)(PTR_VTT_0067cc58 + 8);
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_168 + *(long *)(local_170 + -0x18) + -8) =
       *(undefined8 *)(PTR_VTT_0067cc58 + 0x10);
  lVar7 = *(long *)(local_170 + -0x18);
  std::__ndk1::ios_base::init((void *)((long)local_168 + lVar7 + -8));
  local_170 = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar7) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar7) = 0xffffffff;
  local_100[0] = puVar1;
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  puVar1 = PTR_vtable_0067cc60 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
  local_168[0] = puVar1;
  append_throwable_message(param_1,param_2,(basic_ostringstream *)&local_170);
  uVar5 = (**(code **)(*(long *)param_1 + 0x30))(param_1,"java/lang/Throwable");
  uVar5 = (**(code **)(*(long *)param_1 + 0x108))
                    (param_1,uVar5,"getCause","()Ljava/lang/Throwable;");
  p_Var6 = (_jthrowable *)_JNIEnv::CallObjectMethod((_jobject *)param_1,(_jmethodID *)param_2,uVar5)
  ;
  if (p_Var6 != (_jthrowable *)0x0) {
    FUN_0033586c(&local_170,"\nCaused by: ",0xc);
    append_throwable_message(param_1,p_Var6,(basic_ostringstream *)&local_170);
  }
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  local_170 = *(undefined **)puVar4;
  *(undefined8 *)((long)local_168 + *(long *)(local_170 + -0x18) + -8) =
       *(undefined8 *)(puVar4 + 0x18);
  local_168[0] = puVar1;
  if ((local_128 & 1) != 0) {
    operator_delete(local_118);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_168);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_170);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334ea4  rive_android::JNIExceptionHandler::append_throwable_message =====

/* rive_android::JNIExceptionHandler::append_throwable_message(_JNIEnv*, _jthrowable*,
   std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void rive_android::JNIExceptionHandler::append_throwable_message
               (_JNIEnv *param_1,_jthrowable *param_2,basic_ostringstream *param_3)

{
  long lVar1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  long lVar4;
  char *__s;
  size_t sVar5;
  long lVar6;
  long local_68;
  long *local_60;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  FindClass((rive_android *)param_1,(_JNIEnv *)"java/lang/Throwable",(char *)param_3);
  uVar2 = (**(code **)(*(long *)param_1 + 0x108))
                    (param_1,local_68,"toString","()Ljava/lang/String;");
  p_Var3 = (_jmethodID *)
           (**(code **)(*(long *)param_1 + 0x108))
                     (param_1,local_68,"getStackTrace","()[Ljava/lang/StackTraceElement;");
  lVar4 = _JNIEnv::CallObjectMethod((_jobject *)param_1,(_jmethodID *)param_2,uVar2);
  if (lVar4 != 0) {
    __s = (char *)(**(code **)(*(long *)param_1 + 0x548))(param_1,lVar4,0);
    uVar2 = FUN_0033586c(param_3,&DAT_0024901f,1);
    sVar5 = strlen(__s);
    FUN_0033586c(uVar2,__s,sVar5);
    (**(code **)(*(long *)param_1 + 0x550))(param_1,lVar4,__s);
    (**(code **)(*(long *)param_1 + 0xb8))(param_1,lVar4);
  }
  append_stack_trace(param_1,param_2,p_Var3,param_3);
  if (local_68 != 0) {
    (**(code **)(*local_60 + 0xb8))();
  }
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00335024  rive_android::JNIExceptionHandler::get_cause =====

/* rive_android::JNIExceptionHandler::get_cause(_JNIEnv*, _jthrowable*) */

void rive_android::JNIExceptionHandler::get_cause(_JNIEnv *param_1,_jthrowable *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x30))(param_1,"java/lang/Throwable");
  uVar1 = (**(code **)(*(long *)param_1 + 0x108))
                    (param_1,uVar1,"getCause","()Ljava/lang/Throwable;");
  _JNIEnv::CallObjectMethod((_jobject *)param_1,(_jmethodID *)param_2,uVar1);
  return;
}


// ===== 00335088  rive_android::JNIExceptionHandler::append_stack_trace =====

/* rive_android::JNIExceptionHandler::append_stack_trace(_JNIEnv*, _jthrowable*, _jmethodID*,
   std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void rive_android::JNIExceptionHandler::append_stack_trace
               (_JNIEnv *param_1,_jthrowable *param_2,_jmethodID *param_3,
               basic_ostringstream *param_4)

{
  long lVar1;
  long lVar2;
  _jobjectArray *p_Var3;
  int iVar4;
  _jmethodID *p_Var5;
  char *__s;
  undefined8 uVar6;
  size_t sVar7;
  int iVar8;
  long local_a8;
  long *local_a0;
  _jobject *local_98;
  long *local_90;
  long local_88;
  long *local_80;
  _jobjectArray *local_78;
  long *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  GetObjectFromMethod(param_1,(_jobject *)param_2,param_3,&local_78);
  if (local_78 != (_jobjectArray *)0x0) {
    FindClass((rive_android *)param_1,(_JNIEnv *)"java/lang/StackTraceElement",(char *)param_3);
    p_Var5 = (_jmethodID *)
             (**(code **)(*(long *)param_1 + 0x108))
                       (param_1,local_88,"toString","()Ljava/lang/String;");
    p_Var3 = local_78;
    iVar4 = (**(code **)(*(long *)param_1 + 0x558))(param_1,local_78);
    if (0 < iVar4) {
      iVar8 = 0;
      do {
        GetObjectArrayElement(param_1,p_Var3,iVar8);
        if (local_98 != (_jobject *)0x0) {
          GetObjectFromMethod(param_1,local_98,p_Var5,&local_a8);
          lVar2 = local_a8;
          if (local_a8 != 0) {
            __s = (char *)(**(code **)(*(long *)param_1 + 0x548))(param_1,local_a8,0);
            uVar6 = FUN_0033586c(param_4,"\n    ",5);
            sVar7 = strlen(__s);
            FUN_0033586c(uVar6,__s,sVar7);
            (**(code **)(*(long *)param_1 + 0x550))(param_1,lVar2,__s);
            if (local_a8 != 0) {
              (**(code **)(*local_a0 + 0xb8))();
            }
          }
          if (local_98 != (_jobject *)0x0) {
            (**(code **)(*local_90 + 0xb8))();
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar4 != iVar8);
    }
    if (local_88 != 0) {
      (**(code **)(*local_80 + 0xb8))();
    }
    if (local_78 != (_jobjectArray *)0x0) {
      (**(code **)(*local_70 + 0xb8))();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033527c  rive_android::JNIExceptionHandler::check_and_rethrow =====

/* rive_android::JNIExceptionHandler::check_and_rethrow(_JNIEnv*) */

void rive_android::JNIExceptionHandler::check_and_rethrow(_JNIEnv *param_1)

{
  long lVar1;
  char cVar2;
  _jthrowable *p_Var3;
  _jmethodID *p_Var4;
  char *in_x2;
  char *pcVar5;
  long local_80;
  long *local_78;
  long local_70;
  long *local_68;
  _jclass *local_60;
  long *local_58;
  _JNIEnv local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cVar2 = (**(code **)(*(long *)param_1 + 0x720))();
  if (cVar2 != '\0') {
    p_Var3 = (_jthrowable *)(**(code **)(*(long *)param_1 + 0x78))(param_1);
    (**(code **)(*(long *)param_1 + 0x88))(param_1);
    get_exception_message(param_1,p_Var3);
    FindClass((rive_android *)param_1,(_JNIEnv *)"java/lang/Throwable",in_x2);
    pcVar5 = "<init>";
    p_Var4 = (_jmethodID *)
             (**(code **)(*(long *)param_1 + 0x108))
                       (param_1,local_60,"<init>","(Ljava/lang/String;)V");
    MakeJString((rive_android *)param_1,local_50,(basic_string *)pcVar5);
    MakeObject(param_1,local_60,p_Var4,&local_80,local_70);
    (**(code **)(*(long *)param_1 + 0x68))(param_1,local_80);
    DetachThread();
    if (local_80 != 0) {
      (**(code **)(*local_78 + 0xb8))();
    }
    if (local_70 != 0) {
      (**(code **)(*local_68 + 0xb8))();
    }
    if (local_60 != (_jclass *)0x0) {
      (**(code **)(*local_58 + 0xb8))();
    }
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003353e4  rive_android::JNIExceptionHandler::ClearAndLogErrors =====

/* rive_android::JNIExceptionHandler::ClearAndLogErrors(_JNIEnv*, char const*, char const*) */

void rive_android::JNIExceptionHandler::ClearAndLogErrors
               (_JNIEnv *param_1,char *param_2,char *param_3)

{
  void *pvVar1;
  long lVar2;
  char cVar3;
  _jthrowable *p_Var4;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  cVar3 = (**(code **)(*(long *)param_1 + 0x720))();
  if (cVar3 != '\0') {
    p_Var4 = (_jthrowable *)(**(code **)(*(long *)param_1 + 0x78))(param_1);
    (**(code **)(*(long *)param_1 + 0x88))(param_1);
    get_exception_message(param_1,p_Var4);
    pvVar1 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar1 = local_60;
    }
    RiveLogE(param_2,"%s\n%s",param_3,pvVar1);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if (p_Var4 != (_jthrowable *)0x0) {
      (**(code **)(*(long *)param_1 + 0xb8))(param_1,p_Var4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3 != '\0');
}


// ===== 003354f0  rive_android::JNIExceptionHandler::CallObjectMethod =====

/* rive_android::JNIExceptionHandler::CallObjectMethod(_JNIEnv*, _jobject*, _jmethodID*, ...) */

undefined8
rive_android::JNIExceptionHandler::CallObjectMethod
          (_JNIEnv *param_1,_jobject *param_2,_jmethodID *param_3,...)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0x118))();
  check_and_rethrow(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003355a4  rive_android::JNIExceptionHandler::CallVoidMethod =====

/* rive_android::JNIExceptionHandler::CallVoidMethod(_JNIEnv*, _jobject*, _jmethodID*, ...) */

void rive_android::JNIExceptionHandler::CallVoidMethod
               (_JNIEnv *param_1,_jobject *param_2,_jmethodID *param_3,...)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0x1f0))();
  check_and_rethrow(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00335650  rive_android::JNIExceptionHandler::CallIntMethod =====

/* rive_android::JNIExceptionHandler::CallIntMethod(_JNIEnv*, _jobject*, _jmethodID*, ...) */

undefined4
rive_android::JNIExceptionHandler::CallIntMethod
          (_JNIEnv *param_1,_jobject *param_2,_jmethodID *param_3,...)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 400))();
  check_and_rethrow(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00335704  rive_android::JNIExceptionHandler::CallBooleanMethod =====

/* rive_android::JNIExceptionHandler::CallBooleanMethod(_JNIEnv*, _jobject*, _jmethodID*, ...) */

undefined4
rive_android::JNIExceptionHandler::CallBooleanMethod
          (_JNIEnv *param_1,_jobject *param_2,_jmethodID *param_3,...)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0x130))();
  check_and_rethrow(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003357b8  rive_android::JNIExceptionHandler::CallStaticObjectMethod =====

/* rive_android::JNIExceptionHandler::CallStaticObjectMethod(_JNIEnv*, _jclass*, _jmethodID*, ...)
    */

undefined8
rive_android::JNIExceptionHandler::CallStaticObjectMethod
          (_JNIEnv *param_1,_jclass *param_2,_jmethodID *param_3,...)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0x398))();
  check_and_rethrow(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033586c  FUN_0033586c =====

basic_ostream * FUN_0033586c(basic_ostream *param_1,long param_2,long param_3)

{
  basic_ostream *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  sentry local_70 [16];
  id aiStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry(local_70,param_1);
  if (local_70[0] != (sentry)0x0) {
    pbVar1 = param_1 + *(long *)(*(long *)param_1 + -0x18);
    uVar6 = *(undefined8 *)(pbVar1 + 0x28);
    lVar5 = param_2 + param_3;
    if ((*(uint *)(pbVar1 + 8) & 0xb0) != 0x20) {
      lVar5 = param_2;
    }
    if (*(int *)(pbVar1 + 0x90) == -1) {
      std::__ndk1::ios_base::getloc();
      plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_60);
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      std::__ndk1::locale::~locale((locale *)aiStack_60);
      *(uint *)(pbVar1 + 0x90) = uVar3 & 0xff;
    }
    lVar5 = FUN_0033599c(uVar6,param_2,lVar5,param_2 + param_3,pbVar1);
    if (lVar5 == 0) {
      std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
    }
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033599c  FUN_0033599c =====

long * FUN_0033599c(long *param_1,long param_2,long param_3,long param_4,long param_5,int param_6)

{
  ulong __n;
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (long *)0x0) goto LAB_00335aec;
  lVar4 = param_3 - param_2;
  __n = *(long *)(param_5 + 0x18) - (param_4 - param_2);
  if (__n == 0 || *(long *)(param_5 + 0x18) < param_4 - param_2) {
    __n = 0;
  }
  if ((lVar4 < 1) || (lVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar4), lVar2 == lVar4)
     ) {
    if (0 < (long)__n) {
      if (__n < 0x17) {
        pvVar5 = (void *)((ulong)&local_80 | 1);
        local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      }
      else {
        pvVar5 = operator_new((__n | 0xf) + 1);
        local_80 = (__n | 0xf) + 2;
        local_78 = __n;
        local_70 = pvVar5;
      }
      memset(pvVar5,param_6,__n);
      *(undefined1 *)((long)pvVar5 + __n) = 0;
      pvVar5 = (void *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        pvVar5 = local_70;
      }
      uVar3 = (**(code **)(*param_1 + 0x60))(param_1,pvVar5,__n);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (uVar3 != __n) goto LAB_00335ae8;
    }
    param_4 = param_4 - param_3;
    if ((param_4 < 1) ||
       (lVar4 = (**(code **)(*param_1 + 0x60))(param_1,param_3,param_4), lVar4 == param_4)) {
      *(undefined8 *)(param_5 + 0x18) = 0;
      goto LAB_00335aec;
    }
  }
LAB_00335ae8:
  param_1 = (long *)0x0;
LAB_00335aec:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00335b24  rive_android::InitJNIClassLoader =====

/* rive_android::InitJNIClassLoader(_JNIEnv*, _jobject*) */

void rive_android::InitJNIClassLoader(_JNIEnv *param_1,_jobject *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  _jmethodID *p_Var4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  
  puVar2 = PTR_gLoadClassMID_0067cc78;
  puVar1 = PTR_gClassLoader_0067cc70;
  if ((param_1 == (_JNIEnv *)0x0) || (param_2 == (_jobject *)0x0)) {
    RiveLogE("RiveN/ClassLoader","Invalid arguments");
    return;
  }
  if ((*(long *)PTR_gClassLoader_0067cc70 != 0) && (*(long *)PTR_gLoadClassMID_0067cc78 != 0)) {
    return;
  }
  p_Var4 = (_jmethodID *)(**(code **)(*(long *)param_1 + 0xf8))(param_1);
  cVar3 = (**(code **)(*(long *)param_1 + 0x720))(param_1);
  if ((p_Var4 == (_jmethodID *)0x0) || (cVar3 != '\0')) {
    (**(code **)(*(long *)param_1 + 0x88))(param_1);
    RiveLogE("RiveN/ClassLoader","Failed to get anchor object class");
    if (p_Var4 == (_jmethodID *)0x0) {
      return;
    }
  }
  else {
    lVar5 = (**(code **)(*(long *)param_1 + 0x30))(param_1,"java/lang/Class");
    cVar3 = (**(code **)(*(long *)param_1 + 0x720))(param_1);
    if ((lVar5 == 0) || (cVar3 != '\0')) {
      (**(code **)(*(long *)param_1 + 0x88))(param_1);
      pcVar9 = "Failed to find java/lang/Class";
    }
    else {
      lVar5 = (**(code **)(*(long *)param_1 + 0x108))
                        (param_1,lVar5,"getClassLoader","()Ljava/lang/ClassLoader;");
      cVar3 = (**(code **)(*(long *)param_1 + 0x720))(param_1);
      if ((lVar5 == 0) || (cVar3 != '\0')) {
        (**(code **)(*(long *)param_1 + 0x88))(param_1);
        pcVar9 = "Failed to get Class.getClassLoader method";
      }
      else {
        lVar5 = _JNIEnv::CallObjectMethod((_jobject *)param_1,p_Var4,lVar5);
        cVar3 = (**(code **)(*(long *)param_1 + 0x720))(param_1);
        if ((lVar5 != 0) && (cVar3 == '\0')) {
          lVar6 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,lVar5);
          cVar3 = (**(code **)(*(long *)param_1 + 0x720))(param_1);
          if ((lVar6 == 0) || (cVar3 != '\0')) {
            (**(code **)(*(long *)param_1 + 0x88))(param_1);
            RiveLogE("RiveN/ClassLoader","Failed to find java/lang/ClassLoader");
            if (lVar6 == 0) goto LAB_00335dbc;
          }
          else {
            lVar7 = (**(code **)(*(long *)param_1 + 0x108))
                              (param_1,lVar6,"loadClass","(Ljava/lang/String;)Ljava/lang/Class;");
            cVar3 = (**(code **)(*(long *)param_1 + 0x720))(param_1);
            if ((lVar7 == 0) || (cVar3 != '\0')) {
              (**(code **)(*(long *)param_1 + 0x88))(param_1);
              RiveLogE("RiveN/ClassLoader","Failed to get ClassLoader.loadClass method");
            }
            else {
              uVar8 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,lVar5);
              *(undefined8 *)puVar1 = uVar8;
              *(long *)puVar2 = lVar7;
              RiveLogD("RiveN/ClassLoader","Initialized global ClassLoader for JNI class lookup");
            }
          }
          (**(code **)(*(long *)param_1 + 0xb8))(param_1,lVar6);
          goto LAB_00335dbc;
        }
        (**(code **)(*(long *)param_1 + 0x88))(param_1);
        pcVar9 = "Failed to obtain anchor ClassLoader";
      }
    }
    RiveLogE("RiveN/ClassLoader",pcVar9);
  }
LAB_00335dbc:
                    /* WARNING: Could not recover jumptable at 0x00335de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0xb8))(param_1,p_Var4);
  return;
}


// ===== 00335e44  rive_android::GetObjectClass =====

/* rive_android::GetObjectClass(_JNIEnv*, _jobject*) */

void rive_android::GetObjectClass(_JNIEnv *param_1,_jobject *param_2)

{
  undefined8 uVar1;
  undefined8 *in_x8;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0xf8))();
  *in_x8 = uVar1;
  in_x8[1] = param_1;
  return;
}


// ===== 00335e74  rive_android::FindClass =====

/* WARNING: Type propagation algorithm not settling */
/* rive_android::FindClass(_JNIEnv*, char const*) */

void __thiscall rive_android::FindClass(rive_android *this,_JNIEnv *param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  size_t __n;
  long lVar6;
  long *in_x8;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 auVar13 [16];
  ulong local_80;
  ulong local_78;
  char *local_70;
  long local_68;
  
  puVar4 = PTR_gLoadClassMID_0067cc78;
  puVar3 = PTR_gClassLoader_0067cc70;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((this == (rive_android *)0x0) || (param_1 == (_JNIEnv *)0x0)) {
    RiveLogE("RiveN/FindClass","Invalid arguments");
    lVar8 = 0;
    goto LAB_003362ec;
  }
  if ((*(long *)PTR_gClassLoader_0067cc70 != 0) && (*(long *)PTR_gLoadClassMID_0067cc78 != 0)) {
    __n = strlen((char *)param_1);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      FUN_0031faf0(&local_80);
    }
    if (__n < 0x17) {
      pcVar12 = (char *)((ulong)&local_80 | 1);
      local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_00335f40;
    }
    else {
      pcVar12 = (char *)operator_new((__n | 0xf) + 1);
      local_80 = (__n | 0xf) + 2;
      local_78 = __n;
      local_70 = pcVar12;
LAB_00335f40:
      memcpy(pcVar12,param_1,__n);
    }
    pcVar12[__n] = '\0';
    pcVar12 = (char *)((ulong)&local_80 | 1);
    uVar2 = local_80 >> 1 & 0x7f;
    if ((local_80 & 1) != 0) {
      pcVar12 = local_70;
      uVar2 = local_78;
    }
    if (uVar2 != 0) {
      pcVar9 = pcVar12;
      if (7 < uVar2) {
        if (uVar2 < 0x10) {
          uVar7 = 0;
        }
        else {
          uVar7 = uVar2 & 0xfffffffffffffff0;
          pcVar9 = pcVar12 + 7;
          uVar10 = uVar7;
          do {
            auVar13[8] = 0x2f;
            auVar13._0_8_ = 0x2f2f2f2f2f2f2f2f;
            auVar13[9] = 0x2f;
            auVar13[10] = 0x2f;
            auVar13[0xb] = 0x2f;
            auVar13[0xc] = 0x2f;
            auVar13[0xd] = 0x2f;
            auVar13[0xe] = 0x2f;
            auVar13[0xf] = 0x2f;
            auVar13 = NEON_cmeq(*(undefined1 (*) [16])(pcVar9 + -7),auVar13,1);
            if ((auVar13 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
              pcVar9[-7] = '.';
            }
            if ((auVar13 & (undefined1  [16])0x100) != (undefined1  [16])0x0) {
              pcVar9[-6] = '.';
            }
            if ((auVar13 & (undefined1  [16])0x10000) != (undefined1  [16])0x0) {
              pcVar9[-5] = '.';
            }
            if ((auVar13 & (undefined1  [16])0x1000000) != (undefined1  [16])0x0) {
              pcVar9[-4] = '.';
            }
            if ((auVar13 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
              pcVar9[-3] = '.';
            }
            if ((auVar13 & (undefined1  [16])0x10000000000) != (undefined1  [16])0x0) {
              pcVar9[-2] = '.';
            }
            if ((auVar13 & (undefined1  [16])0x1000000000000) != (undefined1  [16])0x0) {
              pcVar9[-1] = '.';
            }
            if ((auVar13 & (undefined1  [16])0x100000000000000) != (undefined1  [16])0x0) {
              *pcVar9 = '.';
            }
            if ((auVar13 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
              pcVar9[1] = '.';
            }
            if ((auVar13 & (undefined1  [16])0x100) != (undefined1  [16])0x0) {
              pcVar9[2] = '.';
            }
            if ((auVar13 & (undefined1  [16])0x10000) != (undefined1  [16])0x0) {
              pcVar9[3] = '.';
            }
            if ((auVar13 & (undefined1  [16])0x1000000) != (undefined1  [16])0x0) {
              pcVar9[4] = '.';
            }
            if ((auVar13 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
              pcVar9[5] = '.';
            }
            if ((auVar13 & (undefined1  [16])0x10000000000) != (undefined1  [16])0x0) {
              pcVar9[6] = '.';
            }
            if ((auVar13 & (undefined1  [16])0x1000000000000) != (undefined1  [16])0x0) {
              pcVar9[7] = '.';
            }
            if ((auVar13 & (undefined1  [16])0x100000000000000) != (undefined1  [16])0x0) {
              pcVar9[8] = '.';
            }
            uVar10 = uVar10 - 0x10;
            pcVar9 = pcVar9 + 0x10;
          } while (uVar10 != 0);
          if (uVar2 == uVar7) goto LAB_003361f0;
          if (((uint)uVar2 >> 3 & 1) == 0) {
            pcVar9 = pcVar12 + uVar7;
            goto LAB_00336328;
          }
        }
        uVar10 = uVar2 & 0xfffffffffffffff8;
        pcVar9 = pcVar12 + uVar10;
        lVar8 = uVar7 - uVar10;
        pcVar11 = pcVar12 + uVar7 + 3;
        do {
          uVar7 = NEON_cmeq(*(undefined8 *)(pcVar11 + -3),0x2f2f2f2f2f2f2f2f,1);
          if ((uVar7 & 1) != 0) {
            pcVar11[-3] = '.';
          }
          if ((uVar7 & 0x100) != 0) {
            pcVar11[-2] = '.';
          }
          if ((uVar7 & 0x10000) != 0) {
            pcVar11[-1] = '.';
          }
          if ((uVar7 & 0x1000000) != 0) {
            *pcVar11 = '.';
          }
          if ((uVar7 & 0x100000000) != 0) {
            pcVar11[1] = '.';
          }
          if ((uVar7 & 0x10000000000) != 0) {
            pcVar11[2] = '.';
          }
          if ((uVar7 & 0x1000000000000) != 0) {
            pcVar11[3] = '.';
          }
          if ((uVar7 & 0x100000000000000) != 0) {
            pcVar11[4] = '.';
          }
          lVar8 = lVar8 + 8;
          pcVar11 = pcVar11 + 8;
        } while (lVar8 != 0);
        if (uVar2 == uVar10) goto LAB_003361f0;
      }
LAB_00336328:
      do {
        if (*pcVar9 == '/') {
          *pcVar9 = '.';
        }
        pcVar9 = pcVar9 + 1;
      } while (pcVar9 != pcVar12 + uVar2);
    }
LAB_003361f0:
    pcVar12 = (char *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pcVar12 = local_70;
    }
    lVar6 = (**(code **)(*(long *)this + 0x538))(this,pcVar12);
    lVar8 = JNIExceptionHandler::CallObjectMethod
                      ((_JNIEnv *)this,*(_jobject **)puVar3,*(_jmethodID **)puVar4,lVar6);
    cVar5 = (**(code **)(*(long *)this + 0x720))(this);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)this + 0x88))(this);
      RiveLogE("RiveN/FindClass","ClassLoader.loadClass failed for: %s",param_1);
      lVar8 = 0;
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)this + 0xb8))(this,lVar6);
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (lVar8 != 0) goto LAB_003362ec;
  }
  lVar8 = (**(code **)(*(long *)this + 0x30))(this,param_1);
  cVar5 = (**(code **)(*(long *)this + 0x720))(this);
  if (cVar5 != '\0') {
    (**(code **)(*(long *)this + 0x88))(this);
    RiveLogE("RiveN/FindClass","Failed to find class: %s",param_1);
  }
LAB_003362ec:
  *in_x8 = lVar8;
  in_x8[1] = (long)this;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336360  rive_android::MakeJString =====

/* rive_android::MakeJString(_JNIEnv*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall rive_android::MakeJString(rive_android *this,_JNIEnv *param_1,basic_string *param_2)

{
  undefined8 uVar1;
  undefined8 *in_x8;
  _JNIEnv *p_Var2;
  
  p_Var2 = *(_JNIEnv **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    p_Var2 = param_1 + 1;
  }
  uVar1 = (**(code **)(*(long *)this + 0x538))(this,p_Var2);
  *in_x8 = uVar1;
  in_x8[1] = this;
  return;
}


// ===== 003363a0  rive_android::GetStaticObjectField =====

/* rive_android::GetStaticObjectField(_JNIEnv*, _jclass*, _jfieldID*) */

void rive_android::GetStaticObjectField(_JNIEnv *param_1,_jclass *param_2,_jfieldID *param_3)

{
  undefined8 uVar1;
  undefined8 *in_x8;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x488))();
  *in_x8 = uVar1;
  in_x8[1] = param_1;
  return;
}


// ===== 003363d0  rive_android::GetObjectFromMethod =====

/* rive_android::GetObjectFromMethod(_JNIEnv*, _jobject*, _jmethodID*, ...) */

void rive_android::GetObjectFromMethod(_JNIEnv *param_1,_jobject *param_2,_jmethodID *param_3,...)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *in_x8;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0x118))();
  *in_x8 = uVar2;
  in_x8[1] = param_1;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033647c  rive_android::GetObjectArrayElement =====

/* rive_android::GetObjectArrayElement(_JNIEnv*, _jobjectArray*, int) */

void rive_android::GetObjectArrayElement(_JNIEnv *param_1,_jobjectArray *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *in_x8;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x568))(param_1,param_2,param_3);
  *in_x8 = uVar1;
  in_x8[1] = param_1;
  return;
}


// ===== 003364ac  rive_android::MakeObject =====

/* rive_android::MakeObject(_JNIEnv*, _jclass*, _jmethodID*, ...) */

void rive_android::MakeObject(_JNIEnv *param_1,_jclass *param_2,_jmethodID *param_3,...)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *in_x8;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0xe8))();
  *in_x8 = uVar2;
  in_x8[1] = param_1;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336558  rive_android::MakeJString =====

/* rive_android::MakeJString(_JNIEnv*, char const*) */

void rive_android::MakeJString(_JNIEnv *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 *in_x8;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x538))();
  *in_x8 = uVar1;
  in_x8[1] = param_1;
  return;
}


// ===== 00336588  rive_android::ByteArrayToUint8Vec =====

/* rive_android::ByteArrayToUint8Vec(_JNIEnv*, _jbyteArray*) */

void __thiscall
rive_android::ByteArrayToUint8Vec(rive_android *this,_JNIEnv *param_1,_jbyteArray *param_2)

{
  int iVar1;
  ulong __n;
  void *__s;
  undefined8 *in_x8;
  
  iVar1 = (**(code **)(*(long *)this + 0x558))();
  __n = JIntToSizeT(iVar1);
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if (__n == 0) {
    __s = (void *)0x0;
  }
  else {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00327f8c();
    }
    __s = operator_new(__n);
    *in_x8 = __s;
    in_x8[2] = (long)__s + __n;
    memset(__s,0,__n);
    in_x8[1] = (long)__s + __n;
  }
                    /* WARNING: Could not recover jumptable at 0x00336630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x640))(this,param_1,0,iVar1,__s);
  return;
}


// ===== 0033663c  rive_android::VecStringToJStringList =====

/* rive_android::VecStringToJStringList(_JNIEnv*,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const&) */

void rive_android::VecStringToJStringList(_JNIEnv *param_1,vector *param_2)

{
  byte *pbVar1;
  long lVar2;
  _jmethodID *p_Var3;
  undefined8 uVar4;
  long lVar5;
  char *in_x2;
  undefined8 *in_x8;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  _jclass *local_68;
  long *local_60;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  FindClass((rive_android *)param_1,(_JNIEnv *)"java/util/ArrayList",in_x2);
  p_Var3 = (_jmethodID *)
           (**(code **)(*(long *)param_1 + 0x108))(param_1,local_68,"<init>",&DAT_00241fd9);
  uVar4 = (**(code **)(*(long *)param_1 + 0x108))
                    (param_1,local_68,&DAT_0024336a,"(Ljava/lang/Object;)Z");
  MakeObject(param_1,local_68,p_Var3);
  pbVar1 = *(byte **)(param_2 + 8);
  for (pbVar8 = *(byte **)param_2; pbVar8 != pbVar1; pbVar8 = pbVar8 + 0x18) {
    pbVar7 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar7 = pbVar8 + 1;
    }
    lVar5 = (**(code **)(*(long *)param_1 + 0x538))(param_1,pbVar7);
    _JNIEnv::CallBooleanMethod((_jobject *)param_1,(_jmethodID *)*in_x8,uVar4,lVar5);
    if (lVar5 != 0) {
      (**(code **)(*(long *)param_1 + 0xb8))(param_1,lVar5);
    }
  }
  if (local_68 == (_jclass *)0x0) {
    if (*(long *)(lVar2 + 0x28) == lVar6) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00336790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*local_60 + 0xb8))(local_60,local_68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003367c4  rive_android::InitializeRiveLog =====

/* rive_android::InitializeRiveLog() */

void rive_android::InitializeRiveLog(void)

{
  long lVar1;
  char cVar2;
  rive_android *this;
  char *in_x2;
  long lVar3;
  long local_58;
  long *local_50;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  std::__ndk1::mutex::lock();
  if (((DAT_00686da0 & 1) == 0) && (this = (rive_android *)GetJNIEnv(), this != (rive_android *)0x0)
     ) {
    FindClass(this,(_JNIEnv *)"app/rive/RiveLog",in_x2);
    if (local_58 != 0) {
      DAT_00686da8 = (**(code **)(*(long *)this + 0xa8))(this);
      if (DAT_00686da8 != 0) {
        DAT_00686db0 = (**(code **)(*(long *)this + 0x388))
                                 (this,DAT_00686da8,&DAT_0024aa4e,
                                  "(Ljava/lang/String;Ljava/lang/String;)V");
        DAT_00686db8 = (**(code **)(*(long *)this + 0x388))
                                 (this,DAT_00686da8,&DAT_00249dac,
                                  "(Ljava/lang/String;Ljava/lang/String;)V");
        DAT_00686dc0 = (**(code **)(*(long *)this + 0x388))
                                 (this,DAT_00686da8,&DAT_002440a7,
                                  "(Ljava/lang/String;Ljava/lang/String;)V");
        DAT_00686dc8 = (**(code **)(*(long *)this + 0x388))
                                 (this,DAT_00686da8,&DAT_002464cb,
                                  "(Ljava/lang/String;Ljava/lang/String;)V");
        DAT_00686dd0 = (**(code **)(*(long *)this + 0x388))
                                 (this,DAT_00686da8,&DAT_002473a1,
                                  "(Ljava/lang/String;Ljava/lang/String;)V");
        cVar2 = (**(code **)(*(long *)this + 0x720))(this);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)this + 0x80))(this);
          (**(code **)(*(long *)this + 0x88))(this);
        }
        DAT_00686da0 = 1;
      }
      if (local_58 != 0) {
        (**(code **)(*local_50 + 0xb8))();
      }
    }
  }
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003369a0  rive_android::RiveLogV =====

/* rive_android::RiveLogV(char const*, char const*, ...) */

void rive_android::RiveLogV(char *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  puStack_60 = &local_a0;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = in_x2;
  uStack_98 = in_x3;
  local_90 = in_x4;
  uStack_88 = in_x5;
  local_80 = in_x6;
  uStack_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00336a48(DAT_00686db0,param_1,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336a48  FUN_00336a48 =====

void FUN_00336a48(long param_1,char *param_2,char *param_3,long *param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long local_298;
  long *local_290;
  _JNIEnv *local_288;
  long local_280;
  long *plStack_278;
  long lStack_270;
  long lStack_268;
  long local_260;
  long *plStack_258;
  long lStack_250;
  long lStack_248;
  char acStack_238 [511];
  undefined1 local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_278 = (long *)param_4[1];
  local_280 = *param_4;
  lStack_268 = param_4[3];
  lStack_270 = param_4[2];
  local_260 = local_280;
  plStack_258 = plStack_278;
  lStack_250 = lStack_270;
  lStack_248 = lStack_268;
  uVar3 = vsnprintf(acStack_238,0x200,param_3,&local_260);
  if (-1 < (int)uVar3) {
    if (0x1ff < uVar3) {
      local_39 = 0;
    }
    if ((param_1 != 0) && (DAT_00686da0 == '\x01')) {
      local_288 = (_JNIEnv *)0x0;
      iVar4 = (**(code **)(**(long **)PTR_g_JVM_0067caf8 + 0x30))
                        (*(long **)PTR_g_JVM_0067caf8,&local_288,0x10006);
      if (iVar4 == 0) {
        rive_android::MakeJString(local_288,param_2);
        rive_android::MakeJString(local_288,acStack_238);
        _JNIEnv::CallStaticVoidMethod((_jclass *)local_288,DAT_00686da8,param_1,local_260,local_298)
        ;
        cVar2 = (**(code **)(*(long *)local_288 + 0x720))();
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_288 + 0x80))();
          (**(code **)(*(long *)local_288 + 0x88))();
        }
        if (local_298 != 0) {
          (**(code **)(*local_290 + 0xb8))();
        }
        if (local_260 != 0) {
          (**(code **)(*plStack_258 + 0xb8))();
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336ba8  rive_android::RiveLogD =====

/* rive_android::RiveLogD(char const*, char const*, ...) */

void rive_android::RiveLogD(char *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  puStack_60 = &local_a0;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = in_x2;
  uStack_98 = in_x3;
  local_90 = in_x4;
  uStack_88 = in_x5;
  local_80 = in_x6;
  uStack_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00336a48(DAT_00686db8,param_1,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336c50  rive_android::RiveLogI =====

/* rive_android::RiveLogI(char const*, char const*, ...) */

void rive_android::RiveLogI(char *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  puStack_60 = &local_a0;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = in_x2;
  uStack_98 = in_x3;
  local_90 = in_x4;
  uStack_88 = in_x5;
  local_80 = in_x6;
  uStack_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00336a48(DAT_00686dc0,param_1,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336cf8  rive_android::RiveLogW =====

/* rive_android::RiveLogW(char const*, char const*, ...) */

void rive_android::RiveLogW(char *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  puStack_60 = &local_a0;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = in_x2;
  uStack_98 = in_x3;
  local_90 = in_x4;
  uStack_88 = in_x5;
  local_80 = in_x6;
  uStack_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00336a48(DAT_00686dc8,param_1,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336da0  rive_android::RiveLogE =====

/* rive_android::RiveLogE(char const*, char const*, ...) */

void rive_android::RiveLogE(char *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  puStack_60 = &local_a0;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = in_x2;
  uStack_98 = in_x3;
  local_90 = in_x4;
  uStack_88 = in_x5;
  local_80 = in_x6;
  uStack_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00336a48(DAT_00686dd0,param_1,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336e48  _INIT_3 =====

void _INIT_3(void)

{
  __cxa_atexit(PTR__mutex_0067cb30,&DAT_00686d78,&PTR_LOOP_006513f0);
  return;
}


// ===== 00336e64  rive_android::getNumCpus =====

/* rive_android::getNumCpus() */

undefined4 rive_android::getNumCpus(void)

{
  int iVar1;
  
  if (((DAT_00686de0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00686de0), iVar1 != 0)) {
    DAT_00686dd8 = FUN_00336ec0();
    __cxa_guard_release(&DAT_00686de0);
  }
  return DAT_00686dd8;
}


// ===== 00336ec0  FUN_00336ec0 =====

void FUN_00336ec0(void)

{
  long lVar1;
  __pid_t __pid;
  ulong uVar2;
  cpu_set_t local_b0;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __pid = gettid();
  local_b0.__bits[1] = 0;
  local_b0.__bits[0] = 0;
  local_b0.__bits[3] = 0;
  local_b0.__bits[2] = 0;
  local_b0.__bits[5] = 0;
  local_b0.__bits[4] = 0;
  local_b0.__bits[7] = 0;
  local_b0.__bits[6] = 0;
  local_b0.__bits[9] = 0;
  local_b0.__bits[8] = 0;
  local_b0.__bits[0xb] = 0;
  local_b0.__bits[10] = 0;
  local_b0.__bits[0xd] = 0;
  local_b0.__bits[0xc] = 0;
  local_b0.__bits[0xf] = 0;
  local_b0.__bits[0xe] = 0;
  sched_getaffinity(__pid,0x80,&local_b0);
  uVar2 = 0;
  do {
    if ((*(ulong *)((long)local_b0.__bits + (uVar2 >> 3 & 0x1ffffffffffffff8)) >> (uVar2 & 0x3f) & 1
        ) == 0) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x400);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00336f4c  rive_android::setAffinity =====

/* rive_android::setAffinity(int) */

void rive_android::setAffinity(int param_1)

{
  long lVar1;
  __pid_t __pid;
  int iVar2;
  ulong uVar3;
  cpu_set_t local_b0;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_b0.__bits[1] = 0;
  local_b0.__bits[0] = 0;
  local_b0.__bits[3] = 0;
  local_b0.__bits[2] = 0;
  local_b0.__bits[5] = 0;
  local_b0.__bits[4] = 0;
  local_b0.__bits[7] = 0;
  local_b0.__bits[6] = 0;
  local_b0.__bits[9] = 0;
  local_b0.__bits[8] = 0;
  local_b0.__bits[0xb] = 0;
  local_b0.__bits[10] = 0;
  local_b0.__bits[0xd] = 0;
  local_b0.__bits[0xc] = 0;
  local_b0.__bits[0xf] = 0;
  local_b0.__bits[0xe] = 0;
  if ((uint)param_1 < 0x400) {
    uVar3 = (ulong)((uint)param_1 >> 3) & 0x1ffffff8;
    *(ulong *)((long)local_b0.__bits + uVar3) =
         *(ulong *)((long)local_b0.__bits + uVar3) | 1L << ((ulong)(uint)param_1 & 0x3f);
  }
  __pid = gettid();
  iVar2 = sched_setaffinity(__pid,0x80,&local_b0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 00336fdc  rive_android::setAffinity =====

/* rive_android::setAffinity(rive_android::Affinity) */

void rive_android::setAffinity(int param_1)

{
  long lVar1;
  __pid_t __pid;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  cpu_set_t local_b0;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((DAT_00686de0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_00686de0), iVar2 != 0)) {
    DAT_00686dd8 = FUN_00336ec0();
    __cxa_guard_release(&DAT_00686de0);
  }
  local_b0.__bits[1] = 0;
  local_b0.__bits[0] = 0;
  local_b0.__bits[3] = 0;
  local_b0.__bits[2] = 0;
  local_b0.__bits[5] = 0;
  local_b0.__bits[4] = 0;
  local_b0.__bits[7] = 0;
  local_b0.__bits[6] = 0;
  local_b0.__bits[9] = 0;
  local_b0.__bits[8] = 0;
  local_b0.__bits[0xb] = 0;
  local_b0.__bits[10] = 0;
  local_b0.__bits[0xd] = 0;
  local_b0.__bits[0xc] = 0;
  local_b0.__bits[0xf] = 0;
  local_b0.__bits[0xe] = 0;
  if (0 < (int)DAT_00686dd8) {
    uVar3 = 0;
    do {
      if (param_1 == 2) {
        if ((uVar3 & 0x7ffffc01) == 1) {
LAB_00337044:
          uVar4 = 0x3f;
LAB_00337048:
          uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)((long)local_b0.__bits + uVar5) =
               *(ulong *)((long)local_b0.__bits + uVar5) | 1L << (uVar3 & uVar4);
        }
      }
      else if (param_1 == 1) {
        if ((uVar3 & 0x7ffffc01) == 0) {
          uVar4 = 0x3e;
          goto LAB_00337048;
        }
      }
      else if ((param_1 == 0) && (uVar3 < 0x400)) goto LAB_00337044;
      uVar3 = uVar3 + 1;
    } while (DAT_00686dd8 != uVar3);
  }
  __pid = gettid();
  iVar2 = sched_setaffinity(__pid,0x80,&local_b0);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


// ===== 0033712c  rive_android::EGLThreadState::EGLThreadState =====

/* rive_android::EGLThreadState::EGLThreadState() */

void __thiscall rive_android::EGLThreadState::EGLThreadState(EGLThreadState *this)

{
  void *pvVar1;
  long lVar2;
  byte local_48 [16];
  void *local_38;
  ulong local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  *(undefined **)this = PTR_vtable_0067cc80 + 0x10;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  RiveLogD("RiveLN/EGLThreadState","Creating EGLThreadState.");
  local_30 = initializeEGLState(this);
  if (local_30 >> 0x20 != 0x3000) {
    EGLResult::summary();
    pvVar1 = (void *)((ulong)local_48 | 1);
    if ((local_48[0] & 1) != 0) {
      pvVar1 = local_38;
    }
    RiveLogE("RiveLN/EGLThreadState","Failed to initialize EGLThreadState: %s",pvVar1);
    if ((local_48[0] & 1) != 0) {
      operator_delete(local_38);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00337200  rive_android::EGLThreadState::initializeEGLState =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive_android::EGLThreadState::initializeEGLState() */

void __thiscall rive_android::EGLThreadState::initializeEGLState(EGLThreadState *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *__s;
  rive_android *prVar7;
  int extraout_w1;
  int extraout_w1_00;
  char *pcVar8;
  undefined8 *puVar9;
  ulong __n;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [12];
  uint local_d0 [4];
  void *local_c0;
  uint local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  RiveLogD("RiveLN/EGLThreadState","Initializing display.");
  lVar6 = eglGetDisplay(0);
  *(long *)(this + 0x10) = lVar6;
  if (lVar6 == 0) {
    auVar12 = consume_egl_error_or_default(0x3008,"RiveLN/EGLThreadState");
    prVar7 = auVar12._0_8_;
    EGLErrorString(prVar7,auVar12._8_4_);
    pcVar8 = "eglGetDisplay() failed: %s";
LAB_00337460:
    uVar10 = (ulong)prVar7 & 0xffffffff;
    pvVar2 = (void *)((ulong)&local_a0 | 1);
    if (((byte)local_a0 & 1) != 0) {
      pvVar2 = local_90;
    }
    RiveLogE("RiveLN/EGLThreadState",pcVar8,pvVar2);
    local_c0 = local_90;
    if ((local_a0 & 1) != 0) {
LAB_0033747c:
      operator_delete(local_c0);
    }
  }
  else {
    iVar5 = eglInitialize(lVar6,0,0);
    if (iVar5 == 0) {
      auVar12 = consume_egl_error_or_default(0x3001,"RiveLN/EGLThreadState");
      prVar7 = auVar12._0_8_;
      EGLErrorString(prVar7,auVar12._8_4_);
      pcVar8 = "eglInitialize() failed: %s";
      goto LAB_00337460;
    }
    RiveLogD("RiveLN/EGLThreadState","Initializing EGL config.");
    uStack_78 = _UNK_0024e9d8;
    local_80 = _DAT_0024e9d0;
    uStack_98 = _UNK_0024e9b8;
    local_a0 = _DAT_0024e9b0;
    uStack_88 = _UNK_0024e9c8;
    local_90 = _DAT_0024e9c0;
    local_b4 = 0;
    uStack_6c = _UNK_0024e9e4;
    uStack_74 = _DAT_0024e9dc;
    uStack_70 = _UNK_0024e9e0;
    iVar5 = eglChooseConfig(*(undefined8 *)(this + 0x10),&local_a0,0,0,&local_b4);
    uVar4 = local_b4;
    if (iVar5 != 0) {
      uVar10 = (ulong)local_b4;
      if ((int)local_b4 < 1) {
        EGLErrorString((rive_android *)0x3005,extraout_w1);
        pvVar2 = (void *)((ulong)local_d0 | 1);
        if ((local_d0[0] & 1) != 0) {
          pvVar2 = local_c0;
        }
        RiveLogE("RiveLN/EGLThreadState",
                 "eglChooseConfig() didn\'t find any suitable configurations: %s",pvVar2);
        if ((local_d0[0] & 1) != 0) {
          operator_delete(local_c0);
        }
        uVar10 = 0x300500000003;
        goto LAB_00337488;
      }
      __n = uVar10 * 8;
      __s = (undefined8 *)operator_new(__n);
      memset(__s,0,__n);
      iVar5 = eglChooseConfig(*(undefined8 *)(this + 0x10),&local_a0,__s,uVar4,&local_b4);
      if (iVar5 == 0) {
        auVar12 = consume_egl_error_or_default(0x3005,"RiveLN/EGLThreadState");
        prVar7 = auVar12._0_8_;
        EGLErrorString(prVar7,auVar12._8_4_);
        pcVar8 = "eglChooseConfig() failed when fetching configs: %s";
LAB_00337688:
        pvVar2 = (void *)((ulong)local_d0 | 1);
        if (((byte)local_d0[0] & 1) != 0) {
          pvVar2 = local_c0;
        }
        RiveLogE("RiveLN/EGLThreadState",pcVar8,pvVar2);
        if ((local_d0[0] & 1) != 0) {
          operator_delete(local_c0);
        }
        uVar10 = (long)prVar7 << 0x20 | 3;
      }
      else if ((int)local_b4 < 1) {
        EGLErrorString((rive_android *)0x3005,extraout_w1_00);
        pvVar2 = (void *)((ulong)local_d0 | 1);
        if ((local_d0[0] & 1) != 0) {
          pvVar2 = local_c0;
        }
        RiveLogE("RiveLN/EGLThreadState","No EGL configs were returned: %s",pvVar2);
        if ((local_d0[0] & 1) != 0) {
          operator_delete(local_c0);
        }
        uVar10 = 0x300500000003;
      }
      else {
        lVar6 = 0;
        do {
          uVar11 = *(undefined8 *)((long)__s + lVar6);
          local_d0[0] = 0;
          iVar5 = eglGetConfigAttrib(*(undefined8 *)(this + 0x10),uVar11,0x3024,local_d0);
          if ((iVar5 != 0) && (local_d0[0] == 8)) {
            local_d0[0] = 0;
            iVar5 = eglGetConfigAttrib(*(undefined8 *)(this + 0x10),uVar11,0x3023,local_d0);
            if ((iVar5 != 0) && (local_d0[0] == 8)) {
              local_d0[0] = 0;
              iVar5 = eglGetConfigAttrib(*(undefined8 *)(this + 0x10),uVar11,0x3022,local_d0);
              if ((iVar5 != 0) && (local_d0[0] == 8)) {
                local_d0[0] = 0;
                iVar5 = eglGetConfigAttrib(*(undefined8 *)(this + 0x10),uVar11,0x3026,local_d0);
                if ((iVar5 != 0) && (local_d0[0] == 8)) {
                  local_d0[0] = 0;
                  iVar5 = eglGetConfigAttrib(*(undefined8 *)(this + 0x10),uVar11,0x3025,local_d0);
                  if ((iVar5 != 0) && (local_d0[0] == 0)) {
                    puVar9 = (undefined8 *)((long)__s + lVar6);
                    break;
                  }
                }
              }
            }
          }
          lVar6 = lVar6 + 8;
          puVar9 = __s + uVar10;
        } while (__n - lVar6 != 0);
        puVar1 = __s;
        if (puVar9 != __s + uVar10) {
          puVar1 = puVar9;
        }
        local_a8 = 0x3038;
        *(undefined8 *)(this + 0x20) = *puVar1;
        local_b0 = 0x200003098;
        RiveLogD("RiveLN/EGLThreadState","Creating EGL context.");
        lVar6 = eglCreateContext(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20),0,
                                 &local_b0);
        *(long *)(this + 0x18) = lVar6;
        if (lVar6 == 0) {
          auVar12 = consume_egl_error_or_default(0x3006,"RiveLN/EGLThreadState");
          prVar7 = auVar12._0_8_;
          EGLErrorString(prVar7,auVar12._8_4_);
          pcVar8 = "eglCreateContext() failed: %s";
          goto LAB_00337688;
        }
        uVar10 = 0x300000000000;
      }
      operator_delete(__s);
      goto LAB_00337488;
    }
    auVar12 = consume_egl_error_or_default(0x3005,"RiveLN/EGLThreadState");
    uVar10 = (ulong)auVar12._0_8_ & 0xffffffff;
    EGLErrorString(auVar12._0_8_,auVar12._8_4_);
    pvVar2 = (void *)((ulong)local_d0 | 1);
    if ((local_d0[0] & 1) != 0) {
      pvVar2 = local_c0;
    }
    RiveLogE("RiveLN/EGLThreadState","eglChooseConfig() failed: %s",pvVar2);
    if ((local_d0[0] & 1) != 0) goto LAB_0033747c;
  }
  uVar10 = uVar10 << 0x20 | 3;
LAB_00337488:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


// ===== 003376c4  rive_android::EGLThreadState::~EGLThreadState =====

/* rive_android::EGLThreadState::~EGLThreadState() */

void __thiscall rive_android::EGLThreadState::~EGLThreadState(EGLThreadState *this)

{
  *(undefined **)this = PTR_vtable_0067cc80 + 0x10;
  RiveLogD("RiveLN/EGLThreadState",&DAT_00242e1d);
  teardownEGLState(this);
  return;
}


// ===== 00337708  rive_android::EGLThreadState::teardownEGLState =====

/* rive_android::EGLThreadState::teardownEGLState() */

void __thiscall rive_android::EGLThreadState::teardownEGLState(EGLThreadState *this)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined1 auVar4 [12];
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(this + 0x18) != 0) && (*(long *)(this + 0x10) != 0)) {
    RiveLogD("RiveLN/EGLThreadState","Destroying context.");
    iVar3 = eglDestroyContext(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
    if (iVar3 == 0) {
      auVar4 = eglGetError();
      EGLErrorString(auVar4._0_8_,auVar4._8_4_);
      pvVar1 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pvVar1 = local_40;
      }
      RiveLogW("RiveLN/EGLThreadState","eglDestroyContext() failed during teardown: %s",pvVar1);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  RiveLogD("RiveLN/EGLThreadState","Releasing thread.");
  iVar3 = eglReleaseThread();
  if (iVar3 == 0) {
    auVar4 = eglGetError();
    EGLErrorString(auVar4._0_8_,auVar4._8_4_);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    RiveLogW("RiveLN/EGLThreadState","eglReleaseThread() failed during teardown: %s",pvVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(this + 0x10) != 0) {
    RiveLogD("RiveLN/EGLThreadState","Terminating display.");
    iVar3 = eglTerminate(*(undefined8 *)(this + 0x10));
    if (iVar3 == 0) {
      auVar4 = eglGetError();
      EGLErrorString(auVar4._0_8_,auVar4._8_4_);
      pvVar1 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pvVar1 = local_40;
      }
      RiveLogW("RiveLN/EGLThreadState","eglTerminate() failed during teardown: %s",pvVar1);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003378b0  rive_android::EGLThreadState::~EGLThreadState =====

/* rive_android::EGLThreadState::~EGLThreadState() */

void __thiscall rive_android::EGLThreadState::~EGLThreadState(EGLThreadState *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3378b4);
  (*pcVar1)();
}


// ===== 003378b4  rive_android::EGLThreadState::createEGLSurface =====

/* rive_android::EGLThreadState::createEGLSurface(ANativeWindow*) */

void __thiscall
rive_android::EGLThreadState::createEGLSurface(EGLThreadState *this,ANativeWindow *param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [12];
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == (ANativeWindow *)0x0) {
    RiveLogD("RiveLN/EGLThreadState","Window is null - returning EGL_NO_SURFACE.");
  }
  else if ((*(long *)(this + 0x10) == 0) || (*(long *)(this + 0x18) == 0)) {
    RiveLogW("RiveLN/EGLThreadState","Cannot create EGL surface: display/context are not valid.");
  }
  else {
    RiveLogD("RiveLN/EGLThreadState","Creating EGL surface.");
    lVar3 = eglCreateWindowSurface
                      (*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20),param_1,0);
    if (lVar3 != 0) goto LAB_003379ac;
    auVar4 = consume_egl_error_or_default(0x300d,"RiveLN/EGLThreadState");
    EGLErrorString(auVar4._0_8_,auVar4._8_4_);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    RiveLogE("RiveLN/EGLThreadState","eglCreateWindowSurface() failed: %s",pvVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  lVar3 = 0;
LAB_003379ac:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


// ===== 003379d4  rive_android::EGLThreadState::swapBuffers =====

/* rive_android::EGLThreadState::swapBuffers() */

ulong __thiscall rive_android::EGLThreadState::swapBuffers(EGLThreadState *this)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(this + 8) == 0) {
    return 0x300d00000002;
  }
  iVar1 = eglSwapBuffers(*(undefined8 *)(this + 0x10));
  if (iVar1 != 0) {
    return 0x300000000000;
  }
  lVar2 = consume_egl_error_or_default(0x300d,"RiveLN/EGLThreadState");
  return lVar2 << 0x20 | 2;
}


// ===== 00337a28  rive_android::EGLThreadState::recoverAfterContextLoss =====

/* rive_android::EGLThreadState::recoverAfterContextLoss() */

void __thiscall rive_android::EGLThreadState::recoverAfterContextLoss(EGLThreadState *this)

{
  RiveLogI("RiveLN/EGLThreadState","Attempting EGL context recovery.");
  teardownEGLState(this);
  initializeEGLState(this);
  return;
}


// ===== 00337a64  rive_android::PLSThreadState::PLSThreadState =====

/* rive_android::PLSThreadState::PLSThreadState() */

void __thiscall rive_android::PLSThreadState::PLSThreadState(PLSThreadState *this)

{
  void *pvVar1;
  long lVar2;
  undefined *puVar3;
  byte local_48 [16];
  void *local_38;
  ulong local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  EGLThreadState::EGLThreadState((EGLThreadState *)this);
  puVar3 = PTR_vtable_0067cc88;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined **)this = puVar3 + 0x10;
  local_30 = initializePLSResources(this);
  if (local_30 >> 0x20 != 0x3000) {
    EGLResult::summary();
    pvVar1 = (void *)((ulong)local_48 | 1);
    if ((local_48[0] & 1) != 0) {
      pvVar1 = local_38;
    }
    RiveLogE("RiveLN/PLSThreadState","Failed to initialize Rive Renderer resources: %s",pvVar1);
    if ((local_48[0] & 1) != 0) {
      operator_delete(local_38);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00337b20  rive_android::PLSThreadState::initializePLSResources =====

/* WARNING: Removing unreachable block (ram,0x00337c24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rive_android::PLSThreadState::initializePLSResources() */

void __thiscall rive_android::PLSThreadState::initializePLSResources(PLSThreadState *this)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ContextOptions *extraout_x1;
  long local_68;
  ulong local_58 [2];
  void *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar3 = 0x300600000003;
  if ((*(long *)(this + 0x10) != 0) && (*(long *)(this + 0x18) != 0)) {
    local_30 = 0x3038;
    uStack_38 = _UNK_0024e9f4;
    local_40 = _DAT_0024e9ec;
    RiveLogD("RiveLN/PLSThreadState","Creating background P-buffer surface.");
    lVar4 = eglCreatePbufferSurface
                      (*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20),&local_40);
    *(long *)(this + 0x30) = lVar4;
    if (lVar4 == 0) {
      RiveLogE("RiveLN/PLSThreadState","Failed to create a 1x1 background Pbuffer surface for PLS.")
      ;
      uVar3 = 0x300d00000003;
    }
    else {
      RiveLogD("RiveLN/PLSThreadState","Making background surface current.");
      uVar3 = (**(code **)(*(long *)this + 0x28))(this,*(undefined8 *)(this + 0x30));
      if (uVar3 >> 0x20 == 0x3000) {
        RiveLogD("RiveLN/PLSThreadState","Making Rive RenderContextGLImpl.");
        local_58[0] = 0;
        rive::gpu::RenderContextGLImpl::MakeContext((RenderContextGLImpl *)local_58,extraout_x1);
        plVar5 = *(long **)(this + 0x28);
        *(long *)(this + 0x28) = local_68;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
          local_68 = *(long *)(this + 0x28);
        }
        if (local_68 == 0) {
          RiveLogE("RiveLN/PLSThreadState","RenderContextGLImpl::MakeContext() returned null.");
          uVar3 = 0x300600000003;
        }
        else {
          uVar3 = 0x300000000000;
        }
      }
      else {
        EGLResult::summary();
        pvVar1 = (void *)((ulong)local_58 | 1);
        if ((local_58[0] & 1) != 0) {
          pvVar1 = local_48;
        }
        RiveLogE("RiveLN/PLSThreadState","Failed to make background surface current: %s",pvVar1);
        if ((local_58[0] & 1) != 0) {
          operator_delete(local_48);
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00337cf0  rive_android::PLSThreadState::~PLSThreadState =====

/* rive_android::PLSThreadState::~PLSThreadState() */

void __thiscall rive_android::PLSThreadState::~PLSThreadState(PLSThreadState *this)

{
  long *plVar1;
  
  *(undefined **)this = PTR_vtable_0067cc88 + 0x10;
  RiveLogD("RiveLN/PLSThreadState","Deleting Rive Renderer thread state.");
  teardownPLSResources(this);
  plVar1 = *(long **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  EGLThreadState::~EGLThreadState((EGLThreadState *)this);
  return;
}


// ===== 00337d54  rive_android::PLSThreadState::teardownPLSResources =====

/* rive_android::PLSThreadState::teardownPLSResources() */

void __thiscall rive_android::PLSThreadState::teardownPLSResources(PLSThreadState *this)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined1 auVar5 [12];
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(this + 8) != 0) && (*(long *)(this + 8) != *(long *)(this + 0x30))) {
    RiveLogW("RiveLN/PLSThreadState",
             "teardownPLSResources() called with a non-background current surface; expected WorkerImpl to destroy it first."
            );
  }
  plVar4 = *(long **)(this + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if ((*(long *)(this + 0x30) != 0) && (*(long *)(this + 0x10) != 0)) {
    RiveLogD("RiveLN/PLSThreadState","Destroying background surface.");
    iVar3 = eglDestroySurface(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x30));
    if (iVar3 == 0) {
      auVar5 = consume_egl_error_or_default(0x300d,"RiveLN/PLSThreadState");
      EGLErrorString(auVar5._0_8_,auVar5._8_4_);
      pvVar1 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pvVar1 = local_40;
      }
      RiveLogW("RiveLN/PLSThreadState",
               "eglDestroySurface() failed while tearing down background surface: %s",pvVar1);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
  }
  *(undefined8 *)(this + 0x30) = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00337e70  rive_android::PLSThreadState::~PLSThreadState =====

/* rive_android::PLSThreadState::~PLSThreadState() */

void __thiscall rive_android::PLSThreadState::~PLSThreadState(PLSThreadState *this)

{
  ~PLSThreadState(this);
  operator_delete(this);
  return;
}


// ===== 00337e94  rive_android::PLSThreadState::destroySurface =====

/* rive_android::PLSThreadState::destroySurface(void*) */

void __thiscall rive_android::PLSThreadState::destroySurface(PLSThreadState *this,void *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined1 auVar4 [12];
  byte local_58 [16];
  void *local_48;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 == (void *)0x0) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
      RiveLogD("RiveLN/PLSThreadState","Cannot destroy EGL_NO_SURFACE.");
      return;
    }
  }
  else {
    if (*(void **)(this + 8) == param_1) {
      RiveLogD("RiveLN/PLSThreadState","Making background surface current.");
      local_40 = (**(code **)(*(long *)this + 0x28))(this,*(undefined8 *)(this + 0x30));
      if (local_40 >> 0x20 != 0x3000) {
        EGLResult::summary();
        pvVar1 = (void *)((ulong)local_58 | 1);
        if ((local_58[0] & 1) != 0) {
          pvVar1 = local_48;
        }
        RiveLogE("RiveLN/PLSThreadState","Failed to switch to background surface before destroy: %s"
                 ,pvVar1);
        if ((local_58[0] & 1) != 0) {
          operator_delete(local_48);
        }
      }
    }
    RiveLogD("RiveLN/PLSThreadState","Destroying surface.");
    iVar3 = eglDestroySurface(*(undefined8 *)(this + 0x10),param_1);
    if (iVar3 == 0) {
      auVar4 = consume_egl_error_or_default(0x300d,"RiveLN/PLSThreadState");
      EGLErrorString(auVar4._0_8_,auVar4._8_4_);
      pvVar1 = (void *)((ulong)local_58 | 1);
      if ((local_58[0] & 1) != 0) {
        pvVar1 = local_48;
      }
      RiveLogW("RiveLN/PLSThreadState","eglDestroySurface() failed while destroying surface: %s",
               pvVar1);
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
    }
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00338020  rive_android::PLSThreadState::makeCurrent =====

/* rive_android::PLSThreadState::makeCurrent(void*) */

ulong __thiscall rive_android::PLSThreadState::makeCurrent(PLSThreadState *this,void *param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(void **)(this + 8) == param_1) {
    RiveLogV("RiveLN/PLSThreadState","Surface is already current.");
  }
  else {
    if (param_1 == (void *)0x0) {
      RiveLogE("RiveLN/PLSThreadState","Cannot make EGL_NO_SURFACE current.");
      return 0x300d00000001;
    }
    iVar1 = eglMakeCurrent(*(undefined8 *)(this + 0x10),param_1,param_1,*(undefined8 *)(this + 0x18)
                          );
    if (iVar1 == 0) {
      lVar2 = consume_egl_error_or_default(0x3006,"RiveLN/PLSThreadState");
      return lVar2 << 0x20 | 1;
    }
    *(void **)(this + 8) = param_1;
  }
  return 0x300000000000;
}


// ===== 003380c4  rive_android::PLSThreadState::recoverAfterContextLoss =====

/* rive_android::PLSThreadState::recoverAfterContextLoss() */

void __thiscall rive_android::PLSThreadState::recoverAfterContextLoss(PLSThreadState *this)

{
  ulong uVar1;
  
  RiveLogI("RiveLN/PLSThreadState","Recovering PLS thread state after context loss.");
  teardownPLSResources(this);
  uVar1 = EGLThreadState::recoverAfterContextLoss((EGLThreadState *)this);
  if (uVar1 >> 0x20 == 0x3000) {
    initializePLSResources(this);
    return;
  }
  return;
}


// ===== 00338120  FUN_00338120 =====

void FUN_00338120(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00338138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 00338140  rive_android::RefWorker::RiveWorker =====

/* rive_android::RefWorker::RiveWorker() */

void __thiscall rive_android::RefWorker::RiveWorker(RefWorker *this)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  WorkerThread *pWVar5;
  undefined ***pppuVar6;
  WorkerThread *pWVar7;
  long *in_x8;
  long lVar8;
  undefined **local_80 [4];
  long *local_60;
  long local_48;
  
  pppuVar6 = local_80;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((DAT_00686e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00686e28), iVar4 != 0)) {
    __cxa_atexit(FUN_00338120,&DAT_00686e20,&PTR_LOOP_006513f0);
    __cxa_guard_release(&DAT_00686e28);
  }
  RiveLogD("RiveLN/RefWorker","Creating Rive RefWorker.");
  std::__ndk1::mutex::lock();
  pWVar5 = DAT_00686e20;
  if (DAT_00686e18 == 0) {
    RiveLogD("RiveLN/RefWorker","Checking if Rive renderer is supported.");
    pWVar5 = (WorkerThread *)operator_new(0x138);
    WorkerThread::WorkerThread(pWVar5,&DAT_00245024,0,0);
    puVar3 = PTR_vtable_0067cc90;
    *(undefined8 *)(pWVar5 + 0x130) = 0;
    local_80[0] = &PTR_FUN_00651fe8;
    *(undefined **)pWVar5 = puVar3 + 0x10;
    local_60 = (long *)local_80;
    WorkerThread::runAndWait(pWVar5,(function *)local_80);
    if ((undefined ***)local_60 == local_80) {
      lVar8 = 4;
LAB_0033823c:
      (**(code **)((long)*pppuVar6 + lVar8 * 8))();
    }
    else if (local_60 != (long *)0x0) {
      lVar8 = 5;
      pppuVar6 = (undefined ***)local_60;
      goto LAB_0033823c;
    }
    if (DAT_00686e18 != 2) {
      RiveLogI("RiveLN/RefWorker","Rive Renderer is not supported. Falling back to Canvas renderer."
              );
      pWVar7 = pWVar5;
LAB_00338288:
      (**(code **)(*(long *)pWVar7 + 8))();
      pWVar5 = DAT_00686e20;
      goto joined_r0x00338298;
    }
    RiveLogI("RiveLN/RefWorker","Main thread: Rive Renderer is supported.");
    bVar1 = DAT_00686e20 != (WorkerThread *)0x0;
    pWVar7 = DAT_00686e20;
    DAT_00686e20 = pWVar5;
    if (bVar1) goto LAB_00338288;
  }
  else {
joined_r0x00338298:
    DAT_00686e20 = pWVar5;
    if (pWVar5 == (WorkerThread *)0x0) goto LAB_003382a8;
  }
  pWVar5 = DAT_00686e20;
  *(long *)(DAT_00686e20 + 0x130) = *(long *)(DAT_00686e20 + 0x130) + 1;
LAB_003382a8:
  *in_x8 = (long)pWVar5;
  std::__ndk1::mutex::unlock();
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00338320  rive_android::WorkerThread::runAndWait =====

/* rive_android::WorkerThread::runAndWait(std::__ndk1::function<void
   (rive_android::DrawableThreadState*)>&&) */

void __thiscall rive_android::WorkerThread::runAndWait(WorkerThread *this,function *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  std::__ndk1::mutex::lock();
  std::__ndk1::
  deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
  ::emplace_back<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>
            ((deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
              *)(this + 0x48),param_1);
  uVar1 = *(long *)(this + 0x30) + 1;
  *(ulong *)(this + 0x30) = uVar1;
  std::__ndk1::mutex::unlock();
  std::__ndk1::mutex::lock();
  std::__ndk1::mutex::unlock();
  std::__ndk1::condition_variable::notify_one();
  if (uVar1 <= *(ulong *)(this + 0x38)) {
    return;
  }
  std::__ndk1::mutex::lock();
  uVar2 = *(ulong *)(this + 0x38);
  while (uVar2 < uVar1) {
    FUN_0032e1d8(this + 0xb8,this + 0xf8);
    uVar2 = *(ulong *)(this + 0x38);
  }
  std::__ndk1::mutex::unlock();
  return;
}


// ===== 003383e0  rive_android::RefWorker::CanvasWorker =====

/* rive_android::RefWorker::CanvasWorker() */

void __thiscall rive_android::RefWorker::CanvasWorker(RefWorker *this)

{
  undefined *puVar1;
  WorkerThread *pWVar2;
  WorkerThread *pWVar3;
  undefined8 *in_x8;
  long lVar4;
  
  std::__ndk1::mutex::lock();
  pWVar3 = DAT_00686e10;
  if (DAT_00686e10 == (WorkerThread *)0x0) {
    RiveLogI("RiveLN/RefWorker","Creating *Canvas* RefWorker.");
    pWVar3 = (WorkerThread *)operator_new(0x138);
    WorkerThread::WorkerThread(pWVar3,"Canvas",0,1);
    pWVar2 = DAT_00686e10;
    puVar1 = PTR_vtable_0067cc90;
    *(undefined8 *)(pWVar3 + 0x130) = 0;
    DAT_00686e10 = pWVar3;
    *(undefined **)pWVar3 = puVar1 + 0x10;
    if (pWVar2 != (WorkerThread *)0x0) {
      (**(code **)(*(long *)pWVar2 + 8))();
      pWVar3 = DAT_00686e10;
    }
  }
  lVar4 = *(long *)(pWVar3 + 0x130);
  *in_x8 = pWVar3;
  *(long *)(pWVar3 + 0x130) = lVar4 + 1;
  std::__ndk1::mutex::unlock();
  return;
}


// ===== 00338498  rive_android::RefWorker::CurrentOrFallback =====

/* rive_android::RefWorker::CurrentOrFallback(rive_android::RendererType) */

void __thiscall rive_android::RefWorker::CurrentOrFallback(long *param_1,RefWorker *this)

{
  long lVar1;
  RefWorker *this_00;
  long lVar2;
  long local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((int)this == 1) {
    CanvasWorker(this);
LAB_003384d8:
    *param_1 = local_30;
    if (local_30 != 0) goto LAB_00338508;
  }
  else if ((int)this == 0) {
    RiveWorker(this);
    goto LAB_003384d8;
  }
  this_00 = (RefWorker *)RiveLogE("RiveLN/RefWorker","Falling back to Canvas worker.");
  CanvasWorker(this_00);
  *param_1 = local_30;
LAB_00338508:
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033852c  rive_android::RefWorker::~RefWorker =====

/* rive_android::RefWorker::~RefWorker() */

void __thiscall rive_android::RefWorker::~RefWorker(RefWorker *this)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_0024ea04 + (long)*(int *)(this + 8) * 4);
  *(undefined **)this = PTR_vtable_0067cc90 + 0x10;
  RiveLogI("RiveLN/RefWorker","Deleting the RefWorker with %s",&UNK_0024ea00 + iVar1);
  WorkerThread::terminateThread((WorkerThread *)this);
  WorkerThread::~WorkerThread((WorkerThread *)this);
  return;
}


// ===== 00338590  rive_android::WorkerThread::terminateThread =====

/* rive_android::WorkerThread::terminateThread() */

void __thiscall rive_android::WorkerThread::terminateThread(WorkerThread *this)

{
  ulong uVar1;
  pthread_t pVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  std::__ndk1::mutex::lock();
  if (this[0x40] != (WorkerThread)0x0) {
    std::__ndk1::mutex::unlock();
    return;
  }
  lVar3 = *(long *)(this + 0x50);
  lVar4 = *(long *)(this + 0x70);
  uVar5 = lVar4 + *(long *)(this + 0x68);
  uVar1 = 0;
  if (*(long *)(this + 0x58) != lVar3) {
    uVar1 = (*(long *)(this + 0x58) - lVar3 >> 3) * 0x55 - 1;
  }
  if (uVar1 == uVar5) {
    FUN_0032d8dc(this + 0x48);
    lVar4 = *(long *)(this + 0x70);
    lVar3 = *(long *)(this + 0x50);
    uVar5 = *(long *)(this + 0x68) + lVar4;
  }
  *(long *)(this + 0x70) = lVar4 + 1;
  this[0x40] = (WorkerThread)0x1;
  *(undefined8 *)(*(long *)(lVar3 + (uVar5 / 0x55) * 8) + (uVar5 % 0x55) * 0x30 + 0x20) = 0;
  std::__ndk1::mutex::unlock();
  std::__ndk1::mutex::lock();
  std::__ndk1::mutex::unlock();
  std::__ndk1::condition_variable::notify_one();
  pVar2 = pthread_self();
  if (*(pthread_t *)(this + 0x120) == pVar2) {
    std::__ndk1::thread::detach();
    return;
  }
  std::__ndk1::thread::join();
  return;
}


// ===== 0033869c  rive_android::RefWorker::~RefWorker =====

/* rive_android::RefWorker::~RefWorker() */

void __thiscall rive_android::RefWorker::~RefWorker(RefWorker *this)

{
  ~RefWorker(this);
  operator_delete(this);
  return;
}


// ===== 003386c0  rive_android::RefWorker::ref =====

/* rive_android::RefWorker::ref() */

void __thiscall rive_android::RefWorker::ref(RefWorker *this)

{
  std::__ndk1::mutex::lock();
  RiveLogV("RiveLN/RefWorker","Incrementing ref count; old: %d; new: %d.",*(long *)(this + 0x130),
           *(long *)(this + 0x130) + 1);
  *(long *)(this + 0x130) = *(long *)(this + 0x130) + 1;
  std::__ndk1::mutex::unlock();
  return;
}


// ===== 00338718  rive_android::RefWorker::unref =====

/* rive_android::RefWorker::unref() */

void __thiscall rive_android::RefWorker::unref(RefWorker *this)

{
  long lVar1;
  
  std::__ndk1::mutex::lock();
  RiveLogV("RiveLN/RefWorker","Decrementing ref count; old: %d; new: %d.",*(long *)(this + 0x130),
           *(long *)(this + 0x130) + -1);
  lVar1 = *(long *)(this + 0x130);
  *(long *)(this + 0x130) = lVar1 + -1;
  if (lVar1 + -1 == 0) {
    externalRefCountDidReachZero(this);
  }
  std::__ndk1::mutex::unlock();
  return;
}


// ===== 0033877c  rive_android::RefWorker::externalRefCountDidReachZero =====

/* rive_android::RefWorker::externalRefCountDidReachZero() */

void __thiscall rive_android::RefWorker::externalRefCountDidReachZero(RefWorker *this)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  pthread_t pVar4;
  int iVar5;
  __thread_struct *p_Var6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  long *plVar9;
  size_t __n;
  void *__dest;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  pthread_t pStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **local_70 [4];
  long *local_50;
  long local_38;
  
  uVar3 = DAT_00686e10;
  pppuVar8 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 8) != 1) {
    if (*(int *)(this + 8) == 0) {
      RiveLogD("RiveLN/RefWorker",
               "Main thread: Rive Renderer ref count reached 0. Releasing resources.");
      local_70[0] = &PTR_FUN_00652030;
      local_50 = (long *)local_70;
      std::__ndk1::mutex::lock();
      std::__ndk1::
      deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
      ::emplace_back<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>
                ((deque<std::__ndk1::function<void(rive_android::DrawableThreadState*)>,std::__ndk1::allocator<std::__ndk1::function<void(rive_android::DrawableThreadState*)>>>
                  *)(this + 0x48),(function *)local_70);
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      std::__ndk1::mutex::unlock();
      std::__ndk1::mutex::lock();
      std::__ndk1::mutex::unlock();
      std::__ndk1::condition_variable::notify_one();
      if ((undefined ***)local_50 == local_70) {
        lVar13 = 4;
      }
      else {
        if (local_50 == (long *)0x0) goto LAB_003388a4;
        lVar13 = 5;
        pppuVar8 = (undefined ***)local_50;
      }
      (**(code **)((long)*pppuVar8 + lVar13 * 8))();
    }
LAB_003388a4:
    if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  DAT_00686e10 = 0;
  p_Var6 = (__thread_struct *)operator_new(8);
  std::__ndk1::__thread_struct::__thread_struct(p_Var6);
  puVar7 = (undefined8 *)operator_new(0x10);
  *puVar7 = p_Var6;
  puVar7[1] = uVar3;
  uVar11 = 0x339288;
  iVar5 = pthread_create((pthread_t *)local_70,(pthread_attr_t *)0x0,FUN_00339288,puVar7);
  uVar12 = SUB84(puVar7,0);
  if (iVar5 == 0) {
    std::__ndk1::thread::detach();
    std::__ndk1::thread::~thread((thread *)local_70);
    goto LAB_003388a4;
  }
  auVar14 = std::__ndk1::__throw_system_error(iVar5,"thread constructor failed");
  plVar9 = auVar14._0_8_;
  pcStack_b8 = WorkerThread::WorkerThread;
  lVar1 = tpidr_el0;
  lStack_c8 = *(long *)(lVar1 + 0x28);
  *plVar9 = (long)(PTR_vtable_0067cc98 + 0x10);
  *(undefined4 *)(plVar9 + 1) = uVar12;
  puStack_c0 = &stack0xffffffffffffffd0;
  __n = strlen(auVar14._8_8_);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0031faf0(plVar9 + 2);
  }
  if (__n < 0x17) {
    __dest = (void *)((long)plVar9 + 0x11);
    *(char *)(plVar9 + 2) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0033897c;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    plVar9[3] = __n;
    plVar9[4] = (long)__dest;
    plVar9[2] = (__n | 0xf) + 2;
  }
  memmove(__dest,auVar14._8_8_,__n);
LAB_0033897c:
  *(undefined1 *)((long)__dest + __n) = 0;
  *(undefined4 *)(plVar9 + 5) = uVar11;
  plVar9[6] = 0;
  plVar9[7] = 0;
  *(undefined1 *)(plVar9 + 8) = 0;
  plVar9[10] = 0;
  plVar9[9] = 0;
  plVar9[0xc] = 0;
  plVar9[0xb] = 0;
  plVar9[0xe] = 0;
  plVar9[0xd] = 0;
  plVar9[0x10] = 0;
  plVar9[0xf] = 0;
  plVar9[0x12] = 0;
  plVar9[0x11] = 0;
  plVar9[0x14] = 0;
  plVar9[0x13] = 0;
  plVar10 = (long *)operator_new(0x40);
  puVar2 = PTR_vtable_0067cca0;
  plVar10[1] = 0;
  plVar10[2] = 0;
  plVar10[7] = 0;
  plVar9[0x16] = (long)plVar10;
  plVar10[6] = 0;
  plVar10[5] = 0;
  *plVar10 = (long)(puVar2 + 0x10);
  plVar10[4] = 0;
  plVar10[3] = 0;
  plVar9[0x15] = (long)(plVar10 + 3);
  plVar9[0x18] = 0;
  plVar9[0x17] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1b] = 0;
  plVar10 = (long *)operator_new(0x40);
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)(puVar2 + 0x10);
  plVar10[7] = 0;
  plVar9[0x1e] = (long)plVar10;
  plVar10[6] = 0;
  plVar10[5] = 0;
  plVar10[4] = 0;
  plVar10[3] = 0;
  plVar9[0x1d] = (long)(plVar10 + 3);
  plVar9[0x25] = 0;
  plVar9[0x20] = 0;
  plVar9[0x1f] = 0;
  plVar9[0x22] = 0;
  plVar9[0x21] = 0;
  plVar9[0x24] = 0;
  plVar9[0x23] = 0;
  RiveLogD("RiveLN/WorkerThread","Main thread: WorkerThread constructed. Launching threadMain.");
  p_Var6 = (__thread_struct *)operator_new(8);
  std::__ndk1::__thread_struct::__thread_struct(p_Var6);
  puVar7 = (undefined8 *)operator_new(0x10);
  *puVar7 = p_Var6;
  puVar7[1] = plVar9;
  iVar5 = pthread_create(&pStack_d0,(pthread_attr_t *)0x0,FUN_00338c48,puVar7);
  pVar4 = pStack_d0;
  if (iVar5 == 0) {
    if (plVar9[0x24] == 0) {
      pStack_d0 = 0;
      plVar9[0x24] = pVar4;
      std::__ndk1::thread::~thread((thread *)&pStack_d0);
      if (*(long *)(lVar1 + 0x28) != lStack_c8) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  else {
    std::__ndk1::__throw_system_error(iVar5,"thread constructor failed");
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 003388d8  rive_android::WorkerThread::WorkerThread =====

/* rive_android::WorkerThread::WorkerThread(char const*, rive_android::Affinity,
   rive_android::RendererType) */

void __thiscall
rive_android::WorkerThread::WorkerThread
          (WorkerThread *this,char *param_1,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined *puVar2;
  pthread_t pVar3;
  int iVar4;
  size_t __n;
  WorkerThread *__dest;
  long *plVar5;
  __thread_struct *this_00;
  undefined8 *__arg;
  pthread_t local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined **)this = PTR_vtable_0067cc98 + 0x10;
  *(undefined4 *)(this + 8) = param_4;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0031faf0(this + 0x10);
  }
  if (__n < 0x17) {
    __dest = this + 0x11;
    this[0x10] = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_0033897c;
  }
  else {
    __dest = (WorkerThread *)operator_new((__n | 0xf) + 1);
    *(size_t *)(this + 0x18) = __n;
    *(WorkerThread **)(this + 0x20) = __dest;
    *(size_t *)(this + 0x10) = (__n | 0xf) + 2;
  }
  memmove(__dest,param_1,__n);
LAB_0033897c:
  __dest[__n] = (WorkerThread)0x0;
  *(undefined4 *)(this + 0x28) = param_3;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x40] = (WorkerThread)0x0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  plVar5 = (long *)operator_new(0x40);
  puVar2 = PTR_vtable_0067cca0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  plVar5[7] = 0;
  *(long **)(this + 0xb0) = plVar5;
  plVar5[6] = 0;
  plVar5[5] = 0;
  *plVar5 = (long)(puVar2 + 0x10);
  plVar5[4] = 0;
  plVar5[3] = 0;
  *(long **)(this + 0xa8) = plVar5 + 3;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  plVar5 = (long *)operator_new(0x40);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar2 + 0x10);
  plVar5[7] = 0;
  *(long **)(this + 0xf0) = plVar5;
  plVar5[6] = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[3] = 0;
  *(long **)(this + 0xe8) = plVar5 + 3;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  RiveLogD("RiveLN/WorkerThread","Main thread: WorkerThread constructed. Launching threadMain.");
  this_00 = (__thread_struct *)operator_new(8);
  std::__ndk1::__thread_struct::__thread_struct(this_00);
  __arg = (undefined8 *)operator_new(0x10);
  *__arg = this_00;
  __arg[1] = this;
  iVar4 = pthread_create(&local_60,(pthread_attr_t *)0x0,FUN_00338c48,__arg);
  pVar3 = local_60;
  if (iVar4 == 0) {
    if (*(long *)(this + 0x120) == 0) {
      local_60 = 0;
      *(pthread_t *)(this + 0x120) = pVar3;
      std::__ndk1::thread::~thread((thread *)&local_60);
      if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  else {
    std::__ndk1::__throw_system_error(iVar4,"thread constructor failed");
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00338ad0  rive_android::WorkerThread::~WorkerThread =====

/* rive_android::WorkerThread::~WorkerThread() */

void __thiscall rive_android::WorkerThread::~WorkerThread(WorkerThread *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined **)this = PTR_vtable_0067cc98 + 0x10;
  RiveLogD("RiveLN/WorkerThread","Main thread: Destroying worker - terminating worker thread.");
  terminateThread(this);
  plVar1 = *(long **)(this + 0x128);
  *(undefined8 *)(this + 0x128) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  std::__ndk1::thread::~thread((thread *)(this + 0x120));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xf8));
  plVar1 = *(long **)(this + 0xf0);
  if ((plVar1 != (long *)0x0) && (lVar2 = FUN_00341040(0xffffffffffffffff,plVar1 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0xb8));
  plVar1 = *(long **)(this + 0xb0);
  if ((plVar1 != (long *)0x0) && (lVar2 = FUN_00341040(0xffffffffffffffff,plVar1 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x78));
  FUN_00338fc4(this + 0x48);
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


// ===== 00338bd0  rive_android::WorkerThread::~WorkerThread =====

/* rive_android::WorkerThread::~WorkerThread() */

void __thiscall rive_android::WorkerThread::~WorkerThread(WorkerThread *this)

{
  ~WorkerThread(this);
  operator_delete(this);
  return;
}


// ===== 00338bf4  std::__ndk1::__shared_ptr_emplace<std::__ndk1::mutex,std::__ndk1::allocator<std::__ndk1::mutex>>::~__shared_ptr_emplace =====

/* std::__ndk1::__shared_ptr_emplace<std::__ndk1::mutex, std::__ndk1::allocator<std::__ndk1::mutex>
   >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<std::__ndk1::mutex,std::__ndk1::allocator<std::__ndk1::mutex>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<std::__ndk1::mutex,std::__ndk1::allocator<std::__ndk1::mutex>> *this
          )

{
  *(undefined **)this = PTR_vtable_0067cca0 + 0x10;
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}


// ===== 00338c08  std::__ndk1::__shared_ptr_emplace<std::__ndk1::mutex,std::__ndk1::allocator<std::__ndk1::mutex>>::~__shared_ptr_emplace =====

/* std::__ndk1::__shared_ptr_emplace<std::__ndk1::mutex, std::__ndk1::allocator<std::__ndk1::mutex>
   >::~__shared_ptr_emplace() */

void __thiscall
std::__ndk1::__shared_ptr_emplace<std::__ndk1::mutex,std::__ndk1::allocator<std::__ndk1::mutex>>::
~__shared_ptr_emplace
          (__shared_ptr_emplace<std::__ndk1::mutex,std::__ndk1::allocator<std::__ndk1::mutex>> *this
          )

{
  *(undefined **)this = PTR_vtable_0067cca0 + 0x10;
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 00338c3c  FUN_00338c3c =====

void FUN_00338c3c(long param_1)

{
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x18));
  return;
}


// ===== 00338c44  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00338c48  FUN_00338c48 =====

undefined8 FUN_00338c48(undefined8 *param_1)

{
  pthread_key_t __key;
  pthread_key_t *ppVar1;
  void *__pointer;
  __thread_struct *this;
  
  ppVar1 = (pthread_key_t *)std::__ndk1::__thread_local_data();
  __pointer = (void *)*param_1;
  __key = *ppVar1;
  *param_1 = 0;
  pthread_setspecific(__key,__pointer);
  rive_android::WorkerThread::threadMain((WorkerThread *)param_1[1]);
  this = (__thread_struct *)*param_1;
  *param_1 = 0;
  if (this != (__thread_struct *)0x0) {
    std::__ndk1::__thread_struct::~__thread_struct(this);
    operator_delete(this);
  }
  operator_delete(param_1);
  return 0;
}


// ===== 00338ca8  rive_android::WorkerThread::threadMain =====

/* rive_android::WorkerThread::threadMain() */

void __thiscall rive_android::WorkerThread::threadMain(WorkerThread *this)

{
  WorkerThread *__name;
  long lVar1;
  long **pplVar2;
  pthread_t __target_thread;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_a8;
  long *local_a0 [4];
  long **local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  RiveLogD("RiveLN/WorkerThread","Worker thread: Beginning of worker threadMain.");
  setAffinity(*(undefined4 *)(this + 0x28));
  __target_thread = pthread_self();
  __name = this + 0x11;
  if (((byte)this[0x10] & 1) != 0) {
    __name = *(WorkerThread **)(this + 0x20);
  }
  pthread_setname_np(__target_thread,(char *)__name);
  GetJNIEnv();
  MakeThreadState((WorkerThread *)local_a0,*(undefined4 *)(this + 8));
  plVar4 = local_a0[0];
  plVar3 = *(long **)(this + 0x128);
  local_a0[0] = (long *)0x0;
  *(long **)(this + 0x128) = plVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    plVar4 = local_a0[0];
    local_a0[0] = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  std::__ndk1::mutex::lock();
  RiveLogD("RiveLN/WorkerThread","Worker thread: Beginning work loop.");
  do {
    while (*(long *)(this + 0x70) == 0) {
      FUN_0032e1d8(this + 0x78,this + 0xf8);
    }
    plVar3 = (long *)(*(long *)(*(long *)(this + 0x50) + (*(ulong *)(this + 0x68) / 0x55) * 8) +
                     (*(ulong *)(this + 0x68) % 0x55) * 0x30);
    plVar4 = (long *)plVar3[4];
    if (plVar4 == (long *)0x0) {
      local_80 = (long **)0x0;
    }
    else if (plVar4 == plVar3) {
      local_80 = local_a0;
      (**(code **)(*(long *)plVar3[4] + 0x18))((long *)plVar3[4],local_a0);
    }
    else {
      local_80 = (long **)(**(code **)(*plVar4 + 0x10))();
    }
    uVar6 = *(ulong *)(this + 0x68);
    plVar4 = (long *)(*(long *)(*(long *)(this + 0x50) + (uVar6 / 0x55) * 8) + (uVar6 % 0x55) * 0x30
                     );
    plVar3 = (long *)plVar4[4];
    if (plVar3 == plVar4) {
      lVar7 = 4;
LAB_00338e50:
      (**(code **)(*plVar4 + lVar7 * 8))();
      uVar6 = *(ulong *)(this + 0x68);
    }
    else if (plVar3 != (long *)0x0) {
      lVar7 = 5;
      plVar4 = plVar3;
      goto LAB_00338e50;
    }
    *(ulong *)(this + 0x68) = uVar6 + 1;
    *(long *)(this + 0x70) = *(long *)(this + 0x70) + -1;
    if (0xa9 < uVar6 + 1) {
      operator_delete((void *)**(undefined8 **)(this + 0x50));
      *(long *)(this + 0x50) = *(long *)(this + 0x50) + 8;
      *(long *)(this + 0x68) = *(long *)(this + 0x68) + -0x55;
    }
    pplVar2 = local_80;
    if (local_80 == (long **)0x0) {
      RiveLogD("RiveLN/WorkerThread","Worker thread: Encountered null work item - terminating loop."
              );
    }
    else {
      std::__ndk1::mutex::unlock();
      local_a8 = *(undefined8 *)(this + 0x128);
      if (local_80 == (long **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00338fb0();
      }
      (*(code *)(*local_80)[6])(local_80,&local_a8);
      std::__ndk1::mutex::lock();
      FUN_00341040(1,this + 0x38);
      std::__ndk1::mutex::lock();
      std::__ndk1::mutex::unlock();
      std::__ndk1::condition_variable::notify_all();
    }
    if (local_80 == local_a0) {
      pplVar5 = local_a0;
      lVar7 = 4;
LAB_00338f30:
      (*(code *)(*pplVar5)[lVar7])();
    }
    else if (local_80 != (long **)0x0) {
      lVar7 = 5;
      pplVar5 = local_80;
      goto LAB_00338f30;
    }
    if (pplVar2 == (long **)0x0) {
      std::__ndk1::mutex::unlock();
      plVar4 = *(long **)(this + 0x128);
      *(undefined8 *)(this + 0x128) = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      RiveLogD("RiveLN/WorkerThread","Worker thread: End of worker threadMain. Detaching thread.");
      DetachThread();
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


// ===== 00338fb0  FUN_00338fb0 =====

void FUN_00338fb0(void)

{
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__libcpp_verbose_abort("bad_function_call was thrown in -fno-exceptions mode");
}


// ===== 00338fc4  FUN_00338fc4 =====

void FUN_00338fc4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  puVar6 = (undefined8 *)param_1[1];
  puVar8 = puVar6;
  if ((undefined8 *)param_1[2] != puVar6) {
    uVar5 = param_1[4];
    plVar9 = puVar6 + uVar5 / 0x55;
    plVar2 = (long *)*plVar9;
    plVar11 = plVar2 + (uVar5 % 0x55) * 6;
    plVar10 = (long *)(puVar6[(param_1[5] + uVar5) / 0x55] + ((param_1[5] + uVar5) % 0x55) * 0x30);
    puVar8 = (undefined8 *)param_1[2];
    if (plVar11 != plVar10) {
      do {
        plVar1 = (long *)plVar11[4];
        if (plVar1 == plVar11) {
          lVar3 = 4;
          plVar1 = plVar11;
LAB_00339074:
          (**(code **)(*plVar1 + lVar3 * 8))();
          plVar2 = (long *)*plVar9;
        }
        else if (plVar1 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_00339074;
        }
        plVar11 = plVar11 + 6;
        if ((long)plVar11 - (long)plVar2 == 0xff0) {
          plVar9 = plVar9 + 1;
          plVar2 = (long *)*plVar9;
          plVar11 = plVar2;
        }
      } while (plVar11 != plVar10);
      puVar6 = (undefined8 *)param_1[1];
      puVar8 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar3 = (long)puVar8 - (long)puVar6;
  while (uVar5 = lVar3 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar6);
    puVar8 = (undefined8 *)param_1[2];
    puVar6 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar6;
    lVar3 = (long)puVar8 - (long)puVar6;
  }
  if (uVar5 == 1) {
    uVar4 = 0x2a;
  }
  else {
    if (uVar5 != 2) goto LAB_00339108;
    uVar4 = 0x55;
  }
  param_1[4] = uVar4;
LAB_00339108:
  if (puVar6 != puVar8) {
    do {
      puVar7 = puVar6 + 1;
      operator_delete((void *)*puVar6);
      puVar6 = puVar7;
    } while (puVar7 != puVar8);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00339178  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 0033917c  FUN_0033917c =====

void FUN_0033917c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00651fe8;
  return;
}


// ===== 003391a0  FUN_003391a0 =====

void FUN_003391a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00651fe8;
  return;
}


// ===== 003391b0  FUN_003391b0 =====

void FUN_003391b0(void)

{
  return;
}


// ===== 003391b4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003391b8  FUN_003391b8 =====

void FUN_003391b8(undefined8 param_1,long *param_2)

{
  char *pcVar1;
  
  DAT_00686e18 = 1;
  pcVar1 = "Worker thread: Rive renderer is not supported.";
  if (*(long *)(*param_2 + 0x28) != 0) {
    DAT_00686e18 = 2;
    pcVar1 = "Worker thread: Rive renderer is supported.";
  }
  rive_android::RiveLogD("RiveLN/RefWorker",pcVar1);
  return;
}


// ===== 003391f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003391f8  FUN_003391f8 =====

void FUN_003391f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00652030;
  return;
}


// ===== 0033921c  FUN_0033921c =====

void FUN_0033921c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00652030;
  return;
}


// ===== 0033922c  FUN_0033922c =====

void FUN_0033922c(void)

{
  return;
}


// ===== 00339230  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 00339234  FUN_00339234 =====

void FUN_00339234(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  rive_android::RiveLogD
            ("RiveLN/RefWorker",
             "Worker thread: Rive Renderer ref count reached 0. Releasing resources.");
  if (*(RenderContext **)(lVar1 + 0x28) != (RenderContext *)0x0) {
    rive::gpu::RenderContext::releaseResources(*(RenderContext **)(lVar1 + 0x28));
    return;
  }
  rive_android::RiveLogW
            ("RiveLN/RefWorker",
             "Failed to release resources on the Rive renderer - rive::RenderContext is null.");
  return;
}


// ===== 00339288  FUN_00339288 =====

undefined8 FUN_00339288(undefined8 *param_1)

{
  pthread_key_t __key;
  pthread_key_t *ppVar1;
  void *__pointer;
  __thread_struct *this;
  
  ppVar1 = (pthread_key_t *)std::__ndk1::__thread_local_data();
  __pointer = (void *)*param_1;
  __key = *ppVar1;
  *param_1 = 0;
  pthread_setspecific(__key,__pointer);
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  this = (__thread_struct *)*param_1;
  *param_1 = 0;
  if (this != (__thread_struct *)0x0) {
    std::__ndk1::__thread_struct::~__thread_struct(this);
    operator_delete(this);
  }
  operator_delete(param_1);
  return 0;
}


// ===== 003392f4  _INIT_4 =====

void _INIT_4(void)

{
  __cxa_atexit(PTR__mutex_0067cb30,&DAT_00686de8,&PTR_LOOP_006513f0);
  __cxa_atexit(FUN_00338120,&DAT_00686e10,&PTR_LOOP_006513f0);
  return;
}


// ===== 00339340  rive_android::WorkerThread::MakeThreadState =====

/* rive_android::WorkerThread::MakeThreadState(rive_android::RendererType) */

void __thiscall rive_android::WorkerThread::MakeThreadState(undefined8 *param_1,int param_2)

{
  PLSThreadState *this;
  
  if (param_2 == 1) {
    RiveLogD("RiveLN/WorkerThread","Creating Canvas Renderer thread state");
    this = (PLSThreadState *)operator_new(8);
    *(undefined **)this = PTR_vtable_0067cca8 + 0x10;
  }
  else {
    RiveLogD("RiveLN/WorkerThread","Creating Rive Renderer thread state");
    this = (PLSThreadState *)operator_new(0x38);
    PLSThreadState::PLSThreadState(this);
  }
  *param_1 = this;
  return;
}


// ===== 003393b8  rive_android::DrawableThreadState::~DrawableThreadState =====

/* rive_android::DrawableThreadState::~DrawableThreadState() */

void __thiscall rive_android::DrawableThreadState::~DrawableThreadState(DrawableThreadState *this)

{
  return;
}


// ===== 003393bc  rive_android::CanvasThreadState::~CanvasThreadState =====

/* rive_android::CanvasThreadState::~CanvasThreadState() */

void __thiscall rive_android::CanvasThreadState::~CanvasThreadState(CanvasThreadState *this)

{
  (*(code *)PTR_operator_delete_0067dc28)();
  return;
}


// ===== 003393c0  rive_android::CanvasThreadState::swapBuffers =====

/* rive_android::CanvasThreadState::swapBuffers() */

undefined8 rive_android::CanvasThreadState::swapBuffers(void)

{
  return 0x300000000000;
}


// ===== 003393c8  rive_android::DrawableThreadState::recoverAfterContextLoss =====

/* rive_android::DrawableThreadState::recoverAfterContextLoss() */

undefined8 rive_android::DrawableThreadState::recoverAfterContextLoss(void)

{
  return 0x300000000000;
}


// ===== 003393d0  rive_android::GetClass =====

/* rive_android::GetClass(char const*) */

void rive_android::GetClass(char *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x003393f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
  return;
}


// ===== 003393fc  rive_android::GetMethodId =====

/* rive_android::GetMethodId(_jclass*, char const*, char const*) */

undefined8 rive_android::GetMethodId(_jclass *param_1,char *param_2,char *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,param_1,param_2,param_3);
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_1);
  return uVar2;
}


// ===== 00339464  rive_android::GetStaticMethodId =====

/* rive_android::GetStaticMethodId(_jclass*, char const*, char const*) */

undefined8 rive_android::GetStaticMethodId(_jclass *param_1,char *param_2,char *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x388))(plVar1,param_1,param_2,param_3);
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_1);
  return uVar2;
}


// ===== 003394cc  rive_android::GetStaticFieldId =====

/* rive_android::GetStaticFieldId(_jclass*, char const*, char const*) */

undefined8 rive_android::GetStaticFieldId(_jclass *param_1,char *param_2,char *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x480))(plVar1,param_1,param_2,param_3);
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_1);
  return uVar2;
}


// ===== 00339534  rive_android::GetFieldId =====

/* rive_android::GetFieldId(_jclass*, char const*, char const*) */

undefined8 rive_android::GetFieldId(_jclass *param_1,char *param_2,char *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x2f0))(plVar1,param_1,param_2,param_3);
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_1);
  return uVar2;
}


// ===== 0033959c  rive_android::ThrowRiveException =====

/* rive_android::ThrowRiveException(char const*) */

void rive_android::ThrowRiveException(char *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/errors/RiveException");
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x003395e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x70))(plVar1,uVar2,param_1);
  return;
}


// ===== 003395e8  rive_android::ThrowMalformedFileException =====

/* rive_android::ThrowMalformedFileException(char const*) */

void rive_android::ThrowMalformedFileException(char *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))
                    (plVar1,"app/rive/runtime/kotlin/core/errors/MalformedFileException");
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x00339630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x70))(plVar1,uVar2,param_1);
  return;
}


// ===== 00339634  rive_android::ThrowUnsupportedRuntimeVersionException =====

/* rive_android::ThrowUnsupportedRuntimeVersionException(char const*) */

void rive_android::ThrowUnsupportedRuntimeVersionException(char *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))
                    (plVar1,"app/rive/runtime/kotlin/core/errors/UnsupportedRuntimeVersionException"
                    );
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033967c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x70))(plVar1,uVar2,param_1);
  return;
}


// ===== 00339680  rive_android::GetHashMapClass =====

/* rive_android::GetHashMapClass() */

void rive_android::GetHashMapClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x003396a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"java/util/HashMap");
  return;
}


// ===== 003396a4  rive_android::GetHashMapConstructorId =====

/* rive_android::GetHashMapConstructorId() */

undefined8 rive_android::GetHashMapConstructorId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"java/util/HashMap");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"<init>",&DAT_00241fd9);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 00339724  rive_android::GetFloatClass =====

/* rive_android::GetFloatClass() */

void rive_android::GetFloatClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x00339744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"java/lang/Float");
  return;
}


// ===== 00339748  rive_android::GetFloatConstructor =====

/* rive_android::GetFloatConstructor() */

undefined8 rive_android::GetFloatConstructor(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"java/lang/Float");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"<init>",&DAT_0024410c);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 003397c8  rive_android::GetBooleanClass =====

/* rive_android::GetBooleanClass() */

void rive_android::GetBooleanClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x003397e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"java/lang/Boolean");
  return;
}


// ===== 003397ec  rive_android::GetBooleanConstructor =====

/* rive_android::GetBooleanConstructor() */

undefined8 rive_android::GetBooleanConstructor(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"java/lang/Boolean");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"<init>",&DAT_002433ea);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033986c  rive_android::GetShortClass =====

/* rive_android::GetShortClass() */

void rive_android::GetShortClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033988c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"java/lang/Short");
  return;
}


// ===== 00339890  rive_android::GetShortConstructor =====

/* rive_android::GetShortConstructor() */

undefined8 rive_android::GetShortConstructor(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"java/lang/Short");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"<init>",&DAT_0024c0ae);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 00339910  rive_android::GetFitClass =====

/* rive_android::GetFitClass() */

void rive_android::GetFitClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x00339930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/Fit");
  return;
}


// ===== 00339934  rive_android::GetFitNameMethodId =====

/* rive_android::GetFitNameMethodId() */

undefined8 rive_android::GetFitNameMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/Fit");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,&DAT_0024a9e9,"()Ljava/lang/String;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 003399b4  rive_android::GetAlignmentClass =====

/* rive_android::GetAlignmentClass() */

void rive_android::GetAlignmentClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x003399d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/Alignment");
  return;
}


// ===== 003399d8  rive_android::GetAlignmentNameMethodId =====

/* rive_android::GetAlignmentNameMethodId() */

undefined8 rive_android::GetAlignmentNameMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/Alignment");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,&DAT_0024a9e9,"()Ljava/lang/String;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 00339a58  rive_android::GetLoopClass =====

/* rive_android::GetLoopClass() */

void rive_android::GetLoopClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x00339a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/Loop");
  return;
}


// ===== 00339a7c  rive_android::GetNoneLoopField =====

/* rive_android::GetNoneLoopField() */

undefined8 rive_android::GetNoneLoopField(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/Loop");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,&DAT_0024389b,"Lapp/rive/runtime/kotlin/core/Loop;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 00339afc  rive_android::GetOneShotLoopField =====

/* rive_android::GetOneShotLoopField() */

undefined8 rive_android::GetOneShotLoopField(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/Loop");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,"ONESHOT","Lapp/rive/runtime/kotlin/core/Loop;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 00339b7c  rive_android::GetLoopLoopField =====

/* rive_android::GetLoopLoopField() */

undefined8 rive_android::GetLoopLoopField(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/Loop");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,&DAT_00249df9,"Lapp/rive/runtime/kotlin/core/Loop;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 00339bfc  rive_android::GetPingPongLoopField =====

/* rive_android::GetPingPongLoopField() */

undefined8 rive_android::GetPingPongLoopField(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/Loop");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,"PINGPONG","Lapp/rive/runtime/kotlin/core/Loop;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 00339c7c  rive_android::GetAdvanceResultClass =====

/* rive_android::GetAdvanceResultClass() */

void rive_android::GetAdvanceResultClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x00339c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/AdvanceResult");
  return;
}


// ===== 00339ca0  rive_android::GetAdvanceResultAdvancedField =====

/* rive_android::GetAdvanceResultAdvancedField() */

undefined8 rive_android::GetAdvanceResultAdvancedField(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/AdvanceResult");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,"ADVANCED","Lapp/rive/runtime/kotlin/core/AdvanceResult;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 00339d20  rive_android::GetAdvanceResultOneShotField =====

/* rive_android::GetAdvanceResultOneShotField() */

undefined8 rive_android::GetAdvanceResultOneShotField(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/AdvanceResult");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,"ONESHOT","Lapp/rive/runtime/kotlin/core/AdvanceResult;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 00339da0  rive_android::GetAdvanceResultLoopField =====

/* rive_android::GetAdvanceResultLoopField() */

undefined8 rive_android::GetAdvanceResultLoopField(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/AdvanceResult");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,&DAT_00249df9,"Lapp/rive/runtime/kotlin/core/AdvanceResult;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 00339e20  rive_android::GetAdvanceResultPingPongField =====

/* rive_android::GetAdvanceResultPingPongField() */

undefined8 rive_android::GetAdvanceResultPingPongField(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/AdvanceResult");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,"PINGPONG","Lapp/rive/runtime/kotlin/core/AdvanceResult;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 00339ea0  rive_android::GetAdvanceResultNoneField =====

/* rive_android::GetAdvanceResultNoneField() */

undefined8 rive_android::GetAdvanceResultNoneField(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/AdvanceResult");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,&DAT_0024389b,"Lapp/rive/runtime/kotlin/core/AdvanceResult;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 00339f20  rive_android::GetRiveEventReportClass =====

/* rive_android::GetRiveEventReportClass() */

void rive_android::GetRiveEventReportClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x00339f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/RiveEventReport");
  return;
}


// ===== 00339f44  rive_android::GetRiveEventReportConstructorId =====

/* rive_android::GetRiveEventReportConstructorId() */

undefined8 rive_android::GetRiveEventReportConstructorId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"app/rive/runtime/kotlin/core/RiveEventReport");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"<init>","(JF)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 00339fc4  rive_android::GetPointerFClass =====

/* rive_android::GetPointerFClass() */

void rive_android::GetPointerFClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x00339fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/PointF");
  return;
}


// ===== 00339fe8  rive_android::GetXFieldId =====

/* rive_android::GetXFieldId() */

undefined8 rive_android::GetXFieldId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/PointF");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x2f0))(plVar1,uVar2,&DAT_00247435,&DAT_00249766);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033a068  rive_android::GetYFieldId =====

/* rive_android::GetYFieldId() */

undefined8 rive_android::GetYFieldId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/PointF");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x2f0))(plVar1,uVar2,&DAT_0024b8d4,&DAT_00249766);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033a0e8  rive_android::GetPointFInitMethod =====

/* rive_android::GetPointFInitMethod() */

undefined8 rive_android::GetPointFInitMethod(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/PointF");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"<init>","(FF)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033a168  rive_android::RectFToAABB =====

/* rive_android::RectFToAABB(_JNIEnv*, _jobject*) */

undefined4 rive_android::RectFToAABB(_JNIEnv *param_1,_jobject *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x30))(param_1,"android/graphics/RectF");
  uVar2 = (**(code **)(*(long *)param_1 + 0x2f0))(param_1,uVar1,&DAT_002482b8,&DAT_00249766);
  uVar3 = (**(code **)(*(long *)param_1 + 0x330))(param_1,param_2,uVar2);
  uVar2 = (**(code **)(*(long *)param_1 + 0x2f0))(param_1,uVar1,&DAT_0024a4d1,&DAT_00249766);
  (**(code **)(*(long *)param_1 + 0x330))(param_1,param_2,uVar2);
  uVar2 = (**(code **)(*(long *)param_1 + 0x2f0))(param_1,uVar1,"right",&DAT_00249766);
  (**(code **)(*(long *)param_1 + 0x330))(param_1,param_2,uVar2);
  uVar2 = (**(code **)(*(long *)param_1 + 0x2f0))(param_1,uVar1,"bottom",&DAT_00249766);
  (**(code **)(*(long *)param_1 + 0x330))(param_1,param_2,uVar2);
  (**(code **)(*(long *)param_1 + 0xb8))(param_1,uVar1);
  return uVar3;
}


// ===== 0033a2d4  rive_android::AABBToRectF =====

/* rive_android::AABBToRectF(_JNIEnv*, rive::AABB const&, _jobject*) */

void rive_android::AABBToRectF(_JNIEnv *param_1,AABB *param_2,_jobject *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x30))(param_1,"android/graphics/RectF");
  uVar4 = *(undefined4 *)param_2;
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar6 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = (**(code **)(*(long *)param_1 + 0x2f0))(param_1,uVar1,&DAT_002482b8,&DAT_00249766);
  (**(code **)(*(long *)param_1 + 0x378))(uVar4,param_1,param_3,uVar2);
  uVar2 = (**(code **)(*(long *)param_1 + 0x2f0))(param_1,uVar1,&DAT_0024a4d1,&DAT_00249766);
  (**(code **)(*(long *)param_1 + 0x378))(uVar5,param_1,param_3,uVar2);
  uVar2 = (**(code **)(*(long *)param_1 + 0x2f0))(param_1,uVar1,"right",&DAT_00249766);
  (**(code **)(*(long *)param_1 + 0x378))(uVar6,param_1,param_3,uVar2);
  uVar2 = (**(code **)(*(long *)param_1 + 0x2f0))(param_1,uVar1,"bottom",&DAT_00249766);
  (**(code **)(*(long *)param_1 + 0x378))(uVar3,param_1,param_3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0033a434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0xb8))(param_1,uVar1);
  return;
}


// ===== 0033a438  rive_android::GetRadialGradientClass =====

/* rive_android::GetRadialGradientClass() */

void rive_android::GetRadialGradientClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033a458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/RadialGradient");
  return;
}


// ===== 0033a45c  rive_android::GetRadialGradientInitMethodId =====

/* rive_android::GetRadialGradientInitMethodId() */

undefined8 rive_android::GetRadialGradientInitMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/RadialGradient");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"<init>","(FFF[I[FLandroid/graphics/Shader$TileMode;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033a4dc  rive_android::GetLinearGradientClass =====

/* rive_android::GetLinearGradientClass() */

void rive_android::GetLinearGradientClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033a4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/LinearGradient");
  return;
}


// ===== 0033a500  rive_android::GetLinearGradientInitMethodId =====

/* rive_android::GetLinearGradientInitMethodId() */

undefined8 rive_android::GetLinearGradientInitMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/LinearGradient");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"<init>","(FFFF[I[FLandroid/graphics/Shader$TileMode;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033a580  rive_android::GetTileModeClass =====

/* rive_android::GetTileModeClass() */

void rive_android::GetTileModeClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033a5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Shader$TileMode");
  return;
}


// ===== 0033a5a4  rive_android::GetClampId =====

/* rive_android::GetClampId() */

undefined8 rive_android::GetClampId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Shader$TileMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"CLAMP","Landroid/graphics/Shader$TileMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033a624  rive_android::GetPaintClass =====

/* rive_android::GetPaintClass() */

void rive_android::GetPaintClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033a644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint");
  return;
}


// ===== 0033a648  rive_android::GetPaintInitMethod =====

/* rive_android::GetPaintInitMethod() */

undefined8 rive_android::GetPaintInitMethod(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"<init>",&DAT_00241fd9);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033a6c8  rive_android::GetSetColorMethodId =====

/* rive_android::GetSetColorMethodId() */

undefined8 rive_android::GetSetColorMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"setColor",&DAT_00249cea);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033a748  rive_android::GetSetAlphaMethodId =====

/* rive_android::GetSetAlphaMethodId() */

undefined8 rive_android::GetSetAlphaMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"setAlpha",&DAT_00249cea);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033a7c8  rive_android::GetSetAntiAliasMethodId =====

/* rive_android::GetSetAntiAliasMethodId() */

undefined8 rive_android::GetSetAntiAliasMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"setAntiAlias",&DAT_002433ea);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033a848  rive_android::GetSetFilterBitmapMethodId =====

/* rive_android::GetSetFilterBitmapMethodId() */

undefined8 rive_android::GetSetFilterBitmapMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"setFilterBitmap",&DAT_002433ea);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033a8c8  rive_android::GetSetShaderMethodId =====

/* rive_android::GetSetShaderMethodId() */

undefined8 rive_android::GetSetShaderMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"setShader","(Landroid/graphics/Shader;)Landroid/graphics/Shader;"
                    );
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033a948  rive_android::GetSetStyleMethodId =====

/* rive_android::GetSetStyleMethodId() */

undefined8 rive_android::GetSetStyleMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"setStyle","(Landroid/graphics/Paint$Style;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033a9c8  rive_android::GetStyleClass =====

/* rive_android::GetStyleClass() */

void rive_android::GetStyleClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033a9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint$Style");
  return;
}


// ===== 0033a9ec  rive_android::GetJoinClass =====

/* rive_android::GetJoinClass() */

void rive_android::GetJoinClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033aa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint$Join");
  return;
}


// ===== 0033aa10  rive_android::GetSetStrokeWidthMethodId =====

/* rive_android::GetSetStrokeWidthMethodId() */

undefined8 rive_android::GetSetStrokeWidthMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"setStrokeWidth",&DAT_0024410c);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033aa90  rive_android::GetSetStrokeJoinMethodId =====

/* rive_android::GetSetStrokeJoinMethodId() */

undefined8 rive_android::GetSetStrokeJoinMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"setStrokeJoin","(Landroid/graphics/Paint$Join;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033ab10  rive_android::GetCapClass =====

/* rive_android::GetCapClass() */

void rive_android::GetCapClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033ab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint$Cap");
  return;
}


// ===== 0033ab34  rive_android::GetSetStrokeCapMethodId =====

/* rive_android::GetSetStrokeCapMethodId() */

undefined8 rive_android::GetSetStrokeCapMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"setStrokeCap","(Landroid/graphics/Paint$Cap;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033abb4  rive_android::GetBlendModeClass =====

/* rive_android::GetBlendModeClass() */

void rive_android::GetBlendModeClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033abd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/BlendMode");
  return;
}


// ===== 0033abd8  rive_android::GetSetBlendModeMethodId =====

/* rive_android::GetSetBlendModeMethodId() */

undefined8 rive_android::GetSetBlendModeMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"setBlendMode","(Landroid/graphics/BlendMode;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033ac58  rive_android::GetPathClass =====

/* rive_android::GetPathClass() */

void rive_android::GetPathClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033ac78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Path");
  return;
}


// ===== 0033ac7c  rive_android::GetPathInitMethodId =====

/* rive_android::GetPathInitMethodId() */

undefined8 rive_android::GetPathInitMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Path");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"<init>",&DAT_00241fd9);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033acfc  rive_android::GetResetMethodId =====

/* rive_android::GetResetMethodId() */

undefined8 rive_android::GetResetMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Path");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"reset",&DAT_00241fd9);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033ad7c  rive_android::GetSetFillTypeMethodId =====

/* rive_android::GetSetFillTypeMethodId() */

undefined8 rive_android::GetSetFillTypeMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Path");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"setFillType","(Landroid/graphics/Path$FillType;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033adfc  rive_android::GetFillTypeClass =====

/* rive_android::GetFillTypeClass() */

void rive_android::GetFillTypeClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033ae1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Path$FillType");
  return;
}


// ===== 0033ae20  rive_android::GetMatrixClass =====

/* rive_android::GetMatrixClass() */

void rive_android::GetMatrixClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033ae40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Matrix");
  return;
}


// ===== 0033ae44  rive_android::GetMatrixInitMethodId =====

/* rive_android::GetMatrixInitMethodId() */

undefined8 rive_android::GetMatrixInitMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Matrix");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"<init>",&DAT_00241fd9);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033aec4  rive_android::GetMatrixSetValuesMethodId =====

/* rive_android::GetMatrixSetValuesMethodId() */

undefined8 rive_android::GetMatrixSetValuesMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Matrix");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"setValues","([F)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033af44  rive_android::GetAddPathMethodId =====

/* rive_android::GetAddPathMethodId() */

undefined8 rive_android::GetAddPathMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Path");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"addPath","(Landroid/graphics/Path;Landroid/graphics/Matrix;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033afc4  rive_android::GetMoveToMethodId =====

/* rive_android::GetMoveToMethodId() */

undefined8 rive_android::GetMoveToMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Path");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"moveTo","(FF)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b044  rive_android::GetLineToMethodId =====

/* rive_android::GetLineToMethodId() */

undefined8 rive_android::GetLineToMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Path");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"lineTo","(FF)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b0c4  rive_android::GetCubicToMethodId =====

/* rive_android::GetCubicToMethodId() */

undefined8 rive_android::GetCubicToMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Path");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"cubicTo","(FFFFFF)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b144  rive_android::GetCloseMethodId =====

/* rive_android::GetCloseMethodId() */

undefined8 rive_android::GetCloseMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Path");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"close",&DAT_00241fd9);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b1c4  rive_android::GetAndroidSurfaceClass =====

/* rive_android::GetAndroidSurfaceClass() */

void rive_android::GetAndroidSurfaceClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033b1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/view/Surface");
  return;
}


// ===== 0033b1e8  rive_android::GetSurfaceLockCanvasMethodId =====

/* rive_android::GetSurfaceLockCanvasMethodId() */

undefined8 rive_android::GetSurfaceLockCanvasMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/view/Surface");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"lockCanvas","(Landroid/graphics/Rect;)Landroid/graphics/Canvas;")
  ;
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b268  rive_android::GetSurfaceUnlockCanvasAndPostMethodId =====

/* rive_android::GetSurfaceUnlockCanvasAndPostMethodId() */

undefined8 rive_android::GetSurfaceUnlockCanvasAndPostMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/view/Surface");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"unlockCanvasAndPost","(Landroid/graphics/Canvas;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b2e8  rive_android::GetAndroidCanvasClass =====

/* rive_android::GetAndroidCanvasClass() */

void rive_android::GetAndroidCanvasClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033b308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Canvas");
  return;
}


// ===== 0033b30c  rive_android::GetAndroidCanvasVertexModeClass =====

/* rive_android::GetAndroidCanvasVertexModeClass() */

void rive_android::GetAndroidCanvasVertexModeClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033b32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Canvas$VertexMode");
  return;
}


// ===== 0033b330  rive_android::GetCanvasSaveMethodId =====

/* rive_android::GetCanvasSaveMethodId() */

undefined8 rive_android::GetCanvasSaveMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Canvas");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,&DAT_0024aa97,&DAT_0024a36c);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b3b0  rive_android::GetCanvasRestoreMethodId =====

/* rive_android::GetCanvasRestoreMethodId() */

undefined8 rive_android::GetCanvasRestoreMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Canvas");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"restore",&DAT_00241fd9);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b430  rive_android::GetCanvasConcatMatrixMethodId =====

/* rive_android::GetCanvasConcatMatrixMethodId() */

undefined8 rive_android::GetCanvasConcatMatrixMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Canvas");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"concat","(Landroid/graphics/Matrix;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b4b0  rive_android::GetCanvasDrawPathMethodId =====

/* rive_android::GetCanvasDrawPathMethodId() */

undefined8 rive_android::GetCanvasDrawPathMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Canvas");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"drawPath","(Landroid/graphics/Path;Landroid/graphics/Paint;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b530  rive_android::GetCanvasDrawColorMethodId =====

/* rive_android::GetCanvasDrawColorMethodId() */

undefined8 rive_android::GetCanvasDrawColorMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Canvas");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"drawColor","(ILandroid/graphics/PorterDuff$Mode;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b5b0  rive_android::GetCanvasDrawBitmapMethodId =====

/* rive_android::GetCanvasDrawBitmapMethodId() */

undefined8 rive_android::GetCanvasDrawBitmapMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Canvas");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"drawBitmap",
                     "(Landroid/graphics/Bitmap;FFLandroid/graphics/Paint;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b630  rive_android::GetCanvasDrawVerticesMethodId =====

/* rive_android::GetCanvasDrawVerticesMethodId() */

undefined8 rive_android::GetCanvasDrawVerticesMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Canvas");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"drawVertices",
                     "(Landroid/graphics/Canvas$VertexMode;I[FI[FI[II[SIILandroid/graphics/Paint;)V"
                    );
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b6b0  rive_android::GetVertexModeTrianglesId =====

/* rive_android::GetVertexModeTrianglesId() */

undefined8 rive_android::GetVertexModeTrianglesId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Canvas$VertexMode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,"TRIANGLES","Landroid/graphics/Canvas$VertexMode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b730  rive_android::GetCanvasClipPathMethodId =====

/* rive_android::GetCanvasClipPathMethodId() */

undefined8 rive_android::GetCanvasClipPathMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Canvas");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"clipPath","(Landroid/graphics/Path;)Z");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b7b0  rive_android::GetCanvasWidthMethodId =====

/* rive_android::GetCanvasWidthMethodId() */

undefined8 rive_android::GetCanvasWidthMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Canvas");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"getWidth",&DAT_0024a36c);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b830  rive_android::GetCanvasHeightMethodId =====

/* rive_android::GetCanvasHeightMethodId() */

undefined8 rive_android::GetCanvasHeightMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Canvas");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar2,"getHeight",&DAT_0024a36c);
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b8b0  rive_android::GetPorterDuffClass =====

/* rive_android::GetPorterDuffClass() */

void rive_android::GetPorterDuffClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/PorterDuff$Mode");
  return;
}


// ===== 0033b8d4  rive_android::GetPorterDuffXferModeClass =====

/* rive_android::GetPorterDuffXferModeClass() */

void rive_android::GetPorterDuffXferModeClass(void)

{
  long *plVar1;
  
  plVar1 = (long *)GetJNIEnv();
                    /* WARNING: Could not recover jumptable at 0x0033b8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/PorterDuffXfermode");
  return;
}


// ===== 0033b8f8  rive_android::GetPorterDuffXferModeInitMethodId =====

/* rive_android::GetPorterDuffXferModeInitMethodId() */

undefined8 rive_android::GetPorterDuffXferModeInitMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/PorterDuffXfermode");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"<init>","(Landroid/graphics/PorterDuff$Mode;)V");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b978  rive_android::GetSetXfermodeMethodId =====

/* rive_android::GetSetXfermodeMethodId() */

undefined8 rive_android::GetSetXfermodeMethodId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,uVar2,"setXfermode",
                     "(Landroid/graphics/Xfermode;)Landroid/graphics/Xfermode;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033b9f8  rive_android::GetFillId =====

/* rive_android::GetFillId() */

undefined8 rive_android::GetFillId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint$Style");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))
                    (plVar1,uVar2,&DAT_002410db,"Landroid/graphics/Paint$Style;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


// ===== 0033ba78  rive_android::GetStrokeId =====

/* rive_android::GetStrokeId() */

undefined8 rive_android::GetStrokeId(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)GetJNIEnv();
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/graphics/Paint$Style");
  plVar1 = (long *)GetJNIEnv();
  uVar3 = (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,"STROKE","Landroid/graphics/Paint$Style;");
  (**(code **)(*plVar1 + 0xb8))(plVar1,uVar2);
  return uVar3;
}


