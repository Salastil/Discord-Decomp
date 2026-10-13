// ===== 004b9368  FUN_004b9368 =====

int FUN_004b9368(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = (int)*param_1;
  if (iVar1 == 0x7fffffff) {
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 004b937c  FUN_004b937c =====

int FUN_004b937c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 4);
  if (iVar1 == 0x7fffffff) {
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 004b9394  discord::media::VideoFrameRgba::VideoFrameRgba =====

/* discord::media::VideoFrameRgba::VideoFrameRgba(std::__Cr::shared_ptr<discord::media::VideoFrameBuffer>)
    */

void __thiscall
discord::media::VideoFrameRgba::VideoFrameRgba
          (VideoFrameRgba *this,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *(undefined8 *)this = param_2;
  *(long **)(this + 8) = param_3;
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*param_3 + 0x10))(param_3);
      FUN_005466cc(param_3);
      return;
    }
  }
  return;
}


// ===== 004b9400  discord::media::VideoFrameRgba::ok =====

/* discord::media::VideoFrameRgba::ok() const */

undefined1 __thiscall discord::media::VideoFrameRgba::ok(VideoFrameRgba *this)

{
  return *(undefined1 *)(*(long *)this + 0x18);
}


// ===== 004b940c  discord::media::VideoFrameRgba::width =====

/* discord::media::VideoFrameRgba::width() const */

undefined4 __thiscall discord::media::VideoFrameRgba::width(VideoFrameRgba *this)

{
  return **(undefined4 **)this;
}


// ===== 004b9418  discord::media::VideoFrameRgba::height =====

/* discord::media::VideoFrameRgba::height() const */

undefined4 __thiscall discord::media::VideoFrameRgba::height(VideoFrameRgba *this)

{
  return *(undefined4 *)(*(long *)this + 4);
}


// ===== 004b9424  discord::media::VideoFrameRgba::bytesPerPixel =====

/* discord::media::VideoFrameRgba::bytesPerPixel() const */

undefined8 discord::media::VideoFrameRgba::bytesPerPixel(void)

{
  return 4;
}


// ===== 004b942c  discord::media::VideoFrameRgba::data =====

/* discord::media::VideoFrameRgba::data() const */

undefined8 __thiscall discord::media::VideoFrameRgba::data(VideoFrameRgba *this)

{
  return *(undefined8 *)(*(long *)this + 8);
}


// ===== 004b9438  discord::media::VideoFrameI420::VideoFrameI420 =====

/* discord::media::VideoFrameI420::VideoFrameI420(webrtc::VideoFrameBuffer*, int,
   discord::media::VideoInputDeviceFacing, long) */

void __thiscall
discord::media::VideoFrameI420::VideoFrameI420
          (VideoFrameI420 *this,undefined8 *param_1,undefined4 param_2,undefined4 param_4,
          undefined8 param_5)

{
  *(undefined8 **)this = param_1;
  *(undefined4 *)(this + 8) = param_2;
  *(undefined4 *)(this + 0xc) = param_4;
  *(undefined8 *)(this + 0x10) = param_5;
  if (param_1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b9454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1);
    return;
  }
  return;
}


// ===== 004b945c  discord::media::VideoFrameI420::VideoFrameI420 =====

/* discord::media::VideoFrameI420::VideoFrameI420(webrtc::VideoFrameBuffer*, int, long) */

void __thiscall
discord::media::VideoFrameI420::VideoFrameI420
          (VideoFrameI420 *this,VideoFrameBuffer *param_1,int param_2,long param_3)

{
  *(VideoFrameBuffer **)this = param_1;
  *(int *)(this + 8) = param_2;
  *(undefined4 *)(this + 0xc) = 0;
  *(long *)(this + 0x10) = param_3;
  if (param_1 != (VideoFrameBuffer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b9478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)param_1)(param_1);
    return;
  }
  return;
}


// ===== 004b9480  discord::media::VideoFrameI420::VideoFrameI420 =====

/* discord::media::VideoFrameI420::VideoFrameI420(discord::media::VideoFrameI420 const&) */

void __thiscall
discord::media::VideoFrameI420::VideoFrameI420(VideoFrameI420 *this,VideoFrameI420 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)param_1;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 **)this = puVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 8) = uVar3;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b94a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


// ===== 004b94b0  discord::media::VideoFrameI420::~VideoFrameI420 =====

/* discord::media::VideoFrameI420::~VideoFrameI420() */

void __thiscall discord::media::VideoFrameI420::~VideoFrameI420(VideoFrameI420 *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
    *(undefined8 *)this = 0;
  }
  return;
}


// ===== 004b94e4  discord::media::VideoFrameI420::operator= =====

/* discord::media::VideoFrameI420::TEMPNAMEPLACEHOLDERVALUE(discord::media::VideoFrameI420 const&)
    */

VideoFrameI420 * __thiscall
discord::media::VideoFrameI420::operator=(VideoFrameI420 *this,VideoFrameI420 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)this;
  plVar1 = *(long **)param_1;
  if (plVar2 != plVar1) {
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar1 = *(long **)param_1;
    }
    *(long **)this = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)*plVar1)();
    }
  }
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return this;
}


// ===== 004b9554  discord::media::VideoFrameI420::width =====

/* discord::media::VideoFrameI420::width() const */

void __thiscall discord::media::VideoFrameI420::width(VideoFrameI420 *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b9560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x30))();
  return;
}


// ===== 004b9564  discord::media::VideoFrameI420::height =====

/* discord::media::VideoFrameI420::height() const */

void __thiscall discord::media::VideoFrameI420::height(VideoFrameI420 *this)

{
                    /* WARNING: Could not recover jumptable at 0x004b9570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x38))();
  return;
}


// ===== 004b9574  discord::media::VideoFrameI420::ok =====

/* discord::media::VideoFrameI420::ok() const */

undefined8 discord::media::VideoFrameI420::ok(void)

{
  return 1;
}


// ===== 004b957c  discord::media::VideoFrameI420::strideY =====

/* discord::media::VideoFrameI420::strideY() const */

void __thiscall discord::media::VideoFrameI420::strideY(VideoFrameI420 *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(**(long **)this + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x004b95a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x80))();
  return;
}


// ===== 004b95a4  discord::media::VideoFrameI420::strideU =====

/* discord::media::VideoFrameI420::strideU() const */

void __thiscall discord::media::VideoFrameI420::strideU(VideoFrameI420 *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(**(long **)this + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x004b95c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x88))();
  return;
}


// ===== 004b95cc  discord::media::VideoFrameI420::strideV =====

/* discord::media::VideoFrameI420::strideV() const */

void __thiscall discord::media::VideoFrameI420::strideV(VideoFrameI420 *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(**(long **)this + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x004b95f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x90))();
  return;
}


// ===== 004b95f4  discord::media::VideoFrameI420::dataY =====

/* discord::media::VideoFrameI420::dataY() const */

void __thiscall discord::media::VideoFrameI420::dataY(VideoFrameI420 *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(**(long **)this + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x004b9618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x98))();
  return;
}


// ===== 004b961c  discord::media::VideoFrameI420::dataU =====

/* discord::media::VideoFrameI420::dataU() const */

void __thiscall discord::media::VideoFrameI420::dataU(VideoFrameI420 *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(**(long **)this + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x004b9640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa0))();
  return;
}


// ===== 004b9644  discord::media::VideoFrameI420::dataV =====

/* discord::media::VideoFrameI420::dataV() const */

void __thiscall discord::media::VideoFrameI420::dataV(VideoFrameI420 *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(**(long **)this + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x004b9668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa8))();
  return;
}


// ===== 004b966c  discord::media::VideoFrameI420::buffer =====

/* discord::media::VideoFrameI420::buffer() const */

undefined8 __thiscall discord::media::VideoFrameI420::buffer(VideoFrameI420 *this)

{
  return *(undefined8 *)this;
}


// ===== 004b9674  discord::media::VideoFrameI420::rotation =====

/* discord::media::VideoFrameI420::rotation() const */

undefined4 __thiscall discord::media::VideoFrameI420::rotation(VideoFrameI420 *this)

{
  return *(undefined4 *)(this + 8);
}


// ===== 004b967c  discord::media::VideoFrameI420::timestamp_us =====

/* discord::media::VideoFrameI420::timestamp_us() const */

undefined8 __thiscall discord::media::VideoFrameI420::timestamp_us(VideoFrameI420 *this)

{
  return *(undefined8 *)(this + 0x10);
}


// ===== 004b9684  discord::media::VideoFrameI420::sourceFacing =====

/* discord::media::VideoFrameI420::sourceFacing() const */

undefined4 __thiscall discord::media::VideoFrameI420::sourceFacing(VideoFrameI420 *this)

{
  return *(undefined4 *)(this + 0xc);
}


// ===== 004b968c  FUN_004b968c =====

void FUN_004b968c(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_007bf3cc(param_2);
  *param_1 = uVar1;
  uVar1 = FUN_007bf3e8(param_2);
  param_1[1] = uVar1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 0x100;
  iVar2 = FUN_007bf3e8(param_2);
  iVar3 = FUN_007bf3cc(param_2);
  lVar4 = (long)(iVar2 * iVar3 * 4);
  *(long *)(param_1 + 4) = lVar4;
  uVar5 = FUN_00546b90(lVar4,PTR_DAT_00d51ca8);
  *(undefined8 *)(param_1 + 2) = uVar5;
  FUN_004b9718(param_1,param_2);
  return;
}


// ===== 004b9718  FUN_004b9718 =====

bool FUN_004b9718(int *param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 6) = 0;
  iVar3 = FUN_007bf3cc(param_2);
  bVar2 = false;
  if (iVar3 == *param_1) {
    iVar3 = FUN_007bf3e8(param_2);
    if ((iVar3 == param_1[1]) && (*(long *)(param_1 + 2) != 0)) {
      FUN_007bf464(&local_70,param_2);
      (**(code **)(*local_70 + 0x40))(&local_78);
      bVar2 = local_78 != (long *)0x0;
      if (local_78 != (long *)0x0) {
        uVar9 = (**(code **)(*local_78 + 0x98))();
        uVar4 = (**(code **)(*local_78 + 0x80))();
        uVar10 = (**(code **)(*local_78 + 0xa0))();
        uVar5 = (**(code **)(*local_78 + 0x88))();
        uVar11 = (**(code **)(*local_78 + 0xa8))();
        uVar6 = (**(code **)(*local_78 + 0x90))();
        uVar12 = *(undefined8 *)(param_1 + 2);
        iVar3 = FUN_007bf3cc(param_2);
        uVar7 = FUN_007bf3cc(param_2);
        uVar8 = FUN_007bf3e8(param_2);
        iVar3 = FUN_007c048c(uVar9,uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,iVar3 << 2,uVar7,uVar8);
        *(bool *)(param_1 + 6) = iVar3 == 0;
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 8))();
        }
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 8))();
      }
    }
    else {
      bVar2 = false;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b98f4  FUN_004b98f4 =====

void FUN_004b98f4(long param_1)

{
  if ((*(void **)(param_1 + 8) != (void *)0x0) && (*(char *)(param_1 + 0x19) != '\0')) {
    operator_delete__(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 004b9910  FUN_004b9910 =====

undefined8 FUN_004b9910(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  return 1;
}


// ===== 004b9920  FUN_004b9920 =====

/* WARNING: Removing unreachable block (ram,0x004b9e18) */
/* WARNING: Removing unreachable block (ram,0x004b9b2c) */
/* WARNING: Removing unreachable block (ram,0x004b99c0) */
/* WARNING: Removing unreachable block (ram,0x004b9c34) */
/* WARNING: Removing unreachable block (ram,0x004b9df0) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_004b9920(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,long param_5)

{
  char *pcVar1;
  long *plVar2;
  ulong uVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *******pppppppuVar6;
  byte bVar7;
  char cVar8;
  long lVar9;
  byte bVar10;
  bool bVar11;
  int iVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  long lVar16;
  undefined8 *******pppppppuVar17;
  char *******pppppppcVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  undefined1 auVar22 [16];
  undefined8 *******local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 *******local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined7 uStack_98;
  undefined4 uStack_91;
  char local_8d [4];
  undefined1 local_89;
  char *******local_88;
  size_t local_80;
  byte local_71;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  pvVar13 = operator_new(0x20);
  local_89 = 0x13;
  if ((&local_a0 < "trobe Video Source") && ("Strobe Video Source" < local_8d)) goto LAB_004b9ff0;
  local_8d[0] = '\0';
  uStack_98 = (undefined7)s_Strobe_Video_Source_001f701a._8_8_;
  uStack_91 = CONCAT31(0x656372,SUB81(s_Strobe_Video_Source_001f701a._8_8_,7));
  local_a0._0_1_ = s_Strobe_Video_Source_001f701a[0];
  local_a0._1_1_ = s_Strobe_Video_Source_001f701a[1];
  local_a0._2_1_ = s_Strobe_Video_Source_001f701a[2];
  local_a0._3_1_ = s_Strobe_Video_Source_001f701a[3];
  local_a0._4_1_ = s_Strobe_Video_Source_001f701a[4];
  local_a0._5_1_ = s_Strobe_Video_Source_001f701a[5];
  local_a0._6_1_ = s_Strobe_Video_Source_001f701a[6];
  local_a0._7_1_ = s_Strobe_Video_Source_001f701a[7];
  FUN_004b6564(pvVar13,&local_a0);
  pcVar1 = (char *)(param_4 + 0x18);
  FUN_004b6594(&local_a0,pvVar13,0);
  bVar10 = local_71;
  bVar7 = *(byte *)(param_4 + 0x2f);
  uVar19 = (ulong)bVar7;
  bVar11 = false;
  sVar5 = *(size_t *)(param_4 + 0x20);
  if (-1 < (char)bVar7) {
    sVar5 = uVar19;
  }
  sVar4 = local_80;
  if (-1 < (char)local_71) {
    sVar4 = (ulong)local_71;
  }
  if (sVar5 == sVar4) {
    pcVar21 = *(char **)pcVar1;
    if (-1 < (char)bVar7) {
      pcVar21 = pcVar1;
    }
    pppppppcVar18 = local_88;
    if (-1 < (char)local_71) {
      pppppppcVar18 = (char *******)&local_88;
    }
    if ((char)bVar7 < '\0') {
      if (sVar5 == 0) {
        bVar11 = true;
      }
      else {
        iVar12 = memcmp(pcVar21,pppppppcVar18,sVar5);
        bVar11 = iVar12 == 0;
      }
    }
    else {
      pcVar21 = pcVar1;
      if (bVar7 == 0) {
        bVar11 = true;
      }
      else {
        do {
          uVar19 = uVar19 - 1;
          bVar11 = *pcVar21 == *(char *)pppppppcVar18;
          if (!bVar11) break;
          pppppppcVar18 = (char *******)((long)pppppppcVar18 + 1);
          pcVar21 = pcVar21 + 1;
        } while (uVar19 != 0);
      }
    }
  }
  if ((char)bVar10 < '\0') {
    operator_delete(local_88);
  }
  if (bVar11) {
    auVar22 = FUN_004b5ea8(param_1,0x1e);
    cVar8 = *(char *)((long)pvVar13 + 0x1f);
    goto joined_r0x004b9a88;
  }
  pvVar14 = (void *)FUN_004ba024("Blank Video Source");
  FUN_004b6594(&local_a0,pvVar14,0);
  bVar10 = local_71;
  bVar7 = *(byte *)(param_4 + 0x2f);
  uVar19 = (ulong)bVar7;
  bVar11 = false;
  sVar5 = *(size_t *)(param_4 + 0x20);
  if (-1 < (char)bVar7) {
    sVar5 = uVar19;
  }
  sVar4 = local_80;
  if (-1 < (char)local_71) {
    sVar4 = (ulong)local_71;
  }
  if (sVar5 == sVar4) {
    pcVar21 = *(char **)pcVar1;
    if (-1 < (char)bVar7) {
      pcVar21 = pcVar1;
    }
    pppppppcVar18 = local_88;
    if (-1 < (char)local_71) {
      pppppppcVar18 = (char *******)&local_88;
    }
    if ((char)bVar7 < '\0') {
      if (sVar5 == 0) {
        bVar11 = true;
      }
      else {
        iVar12 = memcmp(pcVar21,pppppppcVar18,sVar5);
        bVar11 = iVar12 == 0;
      }
    }
    else {
      pcVar21 = pcVar1;
      if (bVar7 == 0) {
        bVar11 = true;
      }
      else {
        do {
          uVar19 = uVar19 - 1;
          bVar11 = *pcVar21 == *(char *)pppppppcVar18;
          if (!bVar11) break;
          pppppppcVar18 = (char *******)((long)pppppppcVar18 + 1);
          pcVar21 = pcVar21 + 1;
        } while (uVar19 != 0);
      }
    }
  }
  if ((char)bVar10 < '\0') {
    operator_delete(local_88);
  }
  if (bVar11) {
    local_b8 = (void *)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    auVar22 = FUN_004b5f2c(param_1,0x1e,0,&local_b8);
    if (local_a8 < 0) {
      operator_delete(local_b8);
    }
  }
  else {
    lVar20 = param_5 + 8;
    pvVar15 = operator_new(0x20);
    FUN_004c02ac(pvVar15,lVar20);
    uVar19 = *(ulong *)(param_5 + 0x10);
    if (-1 < (char)*(byte *)(param_5 + 0x1f)) {
      uVar19 = (ulong)*(byte *)(param_5 + 0x1f);
    }
    if (uVar19 == 0) {
LAB_004b9e24:
      auVar22 = FUN_004ba324(&local_a0,param_4);
    }
    else {
      FUN_004c0390(&local_a0,pvVar15,0);
      bVar7 = *(byte *)(param_4 + 0x2f);
      uVar19 = (ulong)bVar7;
      bVar11 = false;
      sVar5 = *(size_t *)(param_4 + 0x20);
      if (-1 < (char)bVar7) {
        sVar5 = uVar19;
      }
      if (-1 < (char)local_71) {
        local_80 = (ulong)local_71;
      }
      if (sVar5 == local_80) {
        pcVar21 = *(char **)pcVar1;
        if (-1 < (char)bVar7) {
          pcVar21 = pcVar1;
        }
        pppppppcVar18 = local_88;
        if (-1 < (char)local_71) {
          pppppppcVar18 = (char *******)&local_88;
        }
        if ((char)bVar7 < '\0') {
          if (sVar5 == 0) goto LAB_004b9d7c;
          iVar12 = memcmp(pcVar21,pppppppcVar18,sVar5);
          bVar11 = iVar12 == 0;
        }
        else {
          pcVar21 = pcVar1;
          if (bVar7 == 0) {
LAB_004b9d7c:
            bVar11 = true;
          }
          else {
            do {
              uVar19 = uVar19 - 1;
              bVar11 = *pcVar21 == *(char *)pppppppcVar18;
              if (!bVar11) break;
              pppppppcVar18 = (char *******)((long)pppppppcVar18 + 1);
              pcVar21 = pcVar21 + 1;
            } while (uVar19 != 0);
          }
        }
      }
      if ((char)local_71 < '\0') {
        operator_delete(local_88);
      }
      if (!bVar11) goto LAB_004b9e24;
      local_89 = 3;
      if ((&local_a0 < &UNK_001f70b8) && (&DAT_001f70b7 < (undefined *)((ulong)&local_a0 | 3))) {
LAB_004b9ff0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      local_a0._0_4_ = 0x6d3479;
      lVar16 = FUN_004bfd50(lVar20,&local_a0);
      if (lVar16 == 0) {
        uVar19 = FUN_004249b0();
        if ((uVar19 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4eff,"../../discord_native_lib/src/media/video_input_device.cpp",
                       0x1bb,"Failed to load fake video capture file \'",lVar20,
                       "\', falling back to a blank video source");
        }
        if (*(char *)(param_4 + 0x2f) < '\0') {
          pppppppuVar6 = *(undefined8 ********)(param_4 + 0x18);
          uVar19 = *(ulong *)(param_4 + 0x20);
          if (uVar19 < 0x17) {
            pppppppuVar17 = &local_d0;
            local_c0 = CONCAT17((char)uVar19,(undefined7)local_c0);
          }
          else {
            if (0x7fffffffffffffef < uVar19) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar3 = (uVar19 | 0xf) + 1;
            pppppppuVar17 = (undefined8 *******)operator_new(uVar3);
            local_c0 = uVar3 | 0x8000000000000000;
            local_d0 = pppppppuVar17;
            uStack_c8 = uVar19;
          }
          if ((pppppppuVar17 <= pppppppuVar6) &&
             (pppppppuVar6 < (undefined8 *******)((long)pppppppuVar17 + uVar19 + 1)))
          goto LAB_004b9ff0;
          memmove(pppppppuVar17,pppppppuVar6,uVar19 + 1);
        }
        else {
          uStack_c8 = *(ulong *)(param_4 + 0x20);
          local_d0 = *(undefined8 ********)pcVar1;
          local_c0 = *(ulong *)(param_4 + 0x28);
        }
        auVar22 = FUN_004b5f2c(param_1,0x1e,0,&local_d0);
        if ((long)local_c0 < 0) {
          operator_delete(local_d0);
        }
      }
      else {
        if (*(char *)(param_4 + 0x2f) < '\0') {
          pppppppuVar6 = *(undefined8 ********)(param_4 + 0x18);
          uVar19 = *(ulong *)(param_4 + 0x20);
          if (uVar19 < 0x17) {
            pppppppuVar17 = &local_f0;
            local_e0 = CONCAT17((char)uVar19,(undefined7)local_e0);
          }
          else {
            if (0x7fffffffffffffef < uVar19) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar3 = (uVar19 | 0xf) + 1;
            pppppppuVar17 = (undefined8 *******)operator_new(uVar3);
            local_e0 = uVar3 | 0x8000000000000000;
            local_f0 = pppppppuVar17;
            uStack_e8 = uVar19;
          }
          if ((pppppppuVar17 <= pppppppuVar6) &&
             (pppppppuVar6 < (undefined8 *******)((long)pppppppuVar17 + uVar19 + 1)))
          goto LAB_004b9ff0;
          memmove(pppppppuVar17,pppppppuVar6,uVar19 + 1);
        }
        else {
          uStack_e8 = *(ulong *)(param_4 + 0x20);
          local_f0 = *(undefined8 ********)pcVar1;
          local_e0 = *(ulong *)(param_4 + 0x28);
        }
        auVar22 = FUN_004bfda0(param_1,lVar16,1,&local_f0);
        if ((long)local_e0 < 0) {
          operator_delete(local_f0);
        }
      }
    }
    if (*(char *)((long)pvVar15 + 0x1f) < '\0') {
      operator_delete(*(void **)((long)pvVar15 + 8));
    }
    operator_delete(pvVar15);
  }
  if (*(char *)((long)pvVar14 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)pvVar14 + 8));
  }
  operator_delete(pvVar14);
  cVar8 = *(char *)((long)pvVar13 + 0x1f);
joined_r0x004b9a88:
  if (cVar8 < '\0') {
    operator_delete(*(void **)((long)pvVar13 + 8));
  }
  operator_delete(pvVar13);
  if (param_3 != (long *)0x0) {
    plVar2 = param_3 + 1;
    do {
      lVar20 = *plVar2;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *plVar2 = lVar20 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*param_3 + 0x10))(param_3);
      FUN_005466cc(param_3);
    }
  }
  if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return auVar22;
}


// ===== 004ba024  FUN_004ba024 =====

void * FUN_004ba024(char *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  size_t __n;
  char **__dest;
  char *local_60;
  size_t local_58;
  undefined8 uStack_50;
  long local_48;
  
  __dest = &local_60;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pvVar3 = operator_new(0x20);
  __n = strlen(param_1);
  if (0x7fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    uStack_50 = CONCAT17((char)__n,(undefined7)uStack_50);
  }
  else {
    uVar1 = (__n | 0xf) + 1;
    __dest = (char **)operator_new(uVar1);
    uStack_50 = uVar1 | 0x8000000000000000;
    local_60 = (char *)__dest;
    local_58 = __n;
  }
  if ((__dest <= param_1) && (param_1 < (char *)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  if (__n != 0) {
    memcpy(__dest,param_1,__n);
  }
  *(char *)((long)__dest + __n) = '\0';
  FUN_004b6564(pvVar3,&local_60);
  if ((long)uStack_50 < 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ba140  FUN_004ba140 =====

void * FUN_004ba140(char *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  void *local_50;
  undefined7 uStack_48;
  undefined4 uStack_41;
  char local_3d [4];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 == '\0') {
    uVar4 = *(ulong *)(param_1 + 0x10);
    if (-1 < param_1[0x1f]) {
      uVar4 = (ulong)(byte)param_1[0x1f];
    }
    if (uVar4 == 0) {
      pvVar2 = operator_new(0x10);
      FUN_004c14b4();
    }
    else {
      local_39 = '\x03';
      if ((&local_50 < &UNK_001f70b8) && (&DAT_001f70b7 < (undefined *)((ulong)&local_50 | 3)))
      goto LAB_004ba2f8;
      param_1 = param_1 + 8;
      local_50 = (void *)CONCAT44(local_50._4_4_,0x6d3479);
      plVar3 = (long *)FUN_004bfd50(param_1,&local_50);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3);
      }
      if (local_39 < '\0') {
        operator_delete(local_50);
      }
      if (plVar3 == (long *)0x0) {
        uVar4 = FUN_004249b0();
        if ((uVar4 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4eff,"../../discord_native_lib/src/media/video_input_device.cpp",
                       0x2f3,"Failed to load fake video capture file \'",param_1,
                       "\', enumerating a blank video source");
        }
        pvVar2 = (void *)FUN_004ba024("Blank Video Source");
      }
      else {
        pvVar2 = operator_new(0x20);
        FUN_004c02ac(pvVar2,param_1);
      }
    }
  }
  else {
    pvVar2 = operator_new(0x20);
    local_39 = '\x13';
    if ((&local_50 < "trobe Video Source") && ("Strobe Video Source" < local_3d)) {
LAB_004ba2f8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    local_3d[0] = '\0';
    uStack_48 = (undefined7)s_Strobe_Video_Source_001f701a._8_8_;
    uStack_41 = CONCAT31(0x656372,SUB81(s_Strobe_Video_Source_001f701a._8_8_,7));
    local_50 = (void *)s_Strobe_Video_Source_001f701a._0_8_;
    FUN_004b6564(pvVar2,&local_50);
    if (local_39 < '\0') {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ba324  FUN_004ba324 =====

undefined1  [16] FUN_004ba324(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  void *local_80 [2];
  char local_69;
  void *local_68;
  char local_51;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)operator_new(0x4a8);
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  plVar8 = plVar4 + 2;
  *plVar8 = 0;
  plVar6 = plVar4 + 3;
  *plVar4 = (long)&PTR_FUN_00d1e498;
  FUN_00411394(local_80,param_2);
  local_4c = *(undefined4 *)(param_2 + 0x34);
  FUN_004c1bb4(plVar6,local_80);
  if (local_51 < '\0') {
    operator_delete(local_68);
    if (-1 < local_69) goto LAB_004ba3a8;
LAB_004ba3c4:
    operator_delete(local_80[0]);
    lVar5 = plVar4[5];
    if (lVar5 == 0) goto LAB_004ba40c;
LAB_004ba3d4:
    if (*(long *)(lVar5 + 8) != -1) goto LAB_004ba45c;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[4] = (long)plVar6;
    plVar4[5] = (long)plVar4;
    FUN_005466cc();
  }
  else {
    if (local_69 < '\0') goto LAB_004ba3c4;
LAB_004ba3a8:
    lVar5 = plVar4[5];
    if (lVar5 != 0) goto LAB_004ba3d4;
LAB_004ba40c:
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[4] = (long)plVar6;
    plVar4[5] = (long)plVar4;
  }
  do {
    lVar5 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_005466cc(plVar4);
  }
LAB_004ba45c:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar9._8_8_ = plVar4;
  auVar9._0_8_ = plVar6;
  return auVar9;
}


// ===== 004ba490  FUN_004ba490 =====

void FUN_004ba490(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 local_88 [2];
  code *local_78;
  undefined8 *local_70;
  undefined8 local_68 [2];
  code *local_58;
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x80);
  local_58 = FUN_0040df64;
  local_50 = &DAT_001f1910;
  local_78 = FUN_0040dec4;
  local_70 = &DAT_001f1910;
  FUN_00513ef0(pvVar2,"VideoDevicePoll",local_68,local_88);
  if ((code *)local_70[1] != (code *)0x0) {
    (*(code *)local_70[1])(local_88[0]);
  }
  if ((code *)local_50[1] != (code *)0x0) {
    (*(code *)local_50[1])(local_68[0]);
  }
  *param_1 = pvVar2;
  uVar3 = FUN_0051452c(pvVar2);
  pvVar2 = operator_new(0x18);
  FUN_005156ac(pvVar2,uVar3,param_1);
  param_1[1] = pvVar2;
  param_1[2] = param_2;
  uVar3 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar3;
  param_1[5] = param_3[2];
  puVar4 = (undefined8 *)param_3[3];
  param_1[6] = puVar4;
  pcVar5 = (code *)*puVar4;
  if (pcVar5 != (code *)0x0) {
    uVar3 = (*pcVar5)(*param_3);
    param_1[3] = uVar3;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_004ba5c0(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ba5c0  FUN_004ba5c0 =====

/* WARNING: Removing unreachable block (ram,0x004ba788) */
/* WARNING: Removing unreachable block (ram,0x004ba72c) */
/* WARNING: Removing unreachable block (ram,0x004ba740) */
/* WARNING: Removing unreachable block (ram,0x004ba79c) */

void FUN_004ba5c0(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  void *local_78;
  void *local_70;
  void *local_68;
  void *local_60;
  void *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(&local_60);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  pvVar7 = *(void **)(param_1 + 0x40);
  pvVar5 = *(void **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = uStack_50;
  *(void **)(param_1 + 0x40) = local_58;
  uVar3 = (long)local_58 - (long)local_60;
  *(void **)(param_1 + 0x38) = local_60;
  pvVar4 = local_60;
  pvVar6 = local_58;
  local_58 = pvVar7;
  uStack_50 = uVar8;
  if ((long)pvVar7 - (long)pvVar5 == uVar3) {
    local_60 = pvVar5;
    if (pvVar5 == pvVar7) goto LAB_004ba758;
    do {
      uVar3 = FUN_004baee4(pvVar5,pvVar4);
      if ((uVar3 & 1) == 0) break;
      pvVar5 = (void *)((long)pvVar5 + 0x38);
      pvVar4 = (void *)((long)pvVar4 + 0x38);
    } while (pvVar5 != pvVar7);
    if ((uVar3 & 1) != 0) goto LAB_004ba758;
    pvVar4 = *(void **)(param_1 + 0x38);
    pvVar6 = *(void **)(param_1 + 0x40);
    uVar3 = (long)pvVar6 - (long)pvVar4;
    pvVar5 = local_60;
  }
  local_60 = pvVar5;
  local_78 = (void *)0x0;
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  pvVar5 = local_70;
  if (pvVar6 != pvVar4) {
    if (0x492492492492492 < (ulong)(((long)uVar3 >> 3) * 0x6db6db6db6db6db7)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar5 = operator_new(uVar3);
    local_68 = (void *)((long)pvVar5 + ((long)uVar3 >> 3) * 8);
    local_78 = pvVar5;
    do {
      FUN_00411394(pvVar5,pvVar4);
      puVar1 = (undefined4 *)((long)pvVar4 + 0x34);
      pvVar4 = (void *)((long)pvVar4 + 0x38);
      *(undefined4 *)((long)pvVar5 + 0x34) = *puVar1;
      pvVar5 = (void *)((long)pvVar5 + 0x38);
    } while (pvVar4 != pvVar6);
  }
  local_70 = pvVar5;
  (**(code **)(param_1 + 0x28))(param_1 + 0x18,&local_78);
  if (local_78 != (void *)0x0) {
    for (; local_70 != local_78; local_70 = (void *)((long)local_70 + -0x38)) {
    }
    local_70 = local_78;
    operator_delete(local_78);
  }
LAB_004ba758:
  if (local_60 != (void *)0x0) {
    for (; local_58 != local_60; local_58 = (void *)((long)local_58 + -0x38)) {
    }
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ba7e4  FUN_004ba7e4 =====

/* WARNING: Removing unreachable block (ram,0x004ba99c) */
/* WARNING: Removing unreachable block (ram,0x004ba9b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ba7e4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  long lVar12;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  char *local_88;
  undefined8 local_80;
  long lStack_78;
  long local_70;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)(*param_1 + 0x58);
  local_a8 = param_1;
  if (lVar9 != 0) {
    lVar12 = *(long *)(*param_1 + 0x78);
    if (lVar12 == 0) {
      FUN_00520194(&local_90);
      puVar6 = (undefined8 *)operator_new(0x18);
      puVar6[2] = &local_90;
      *puVar6 = &PTR_FUN_00d1eaf0;
      puVar6[1] = &local_a8;
      FUN_00512cf8(lVar9,puVar6);
      FUN_005203e8(&local_98,&local_90);
      FUN_0052007c(local_98);
      FUN_00520164(&local_98);
      FUN_005201dc(&local_90);
    }
    else {
      uVar5 = FUN_005ce36c();
      local_90 = param_1;
      local_88 = (char *)operator_new(0x20);
      uVar4 = s__VideoInputDevicePoller_0019a0e7._0_8_;
      lStack_78 = _UNK_001f3b08;
      local_80 = _DAT_001f3b00;
      if ((local_88 < "VideoInputDevicePoller") && ("~VideoInputDevicePoller" < local_88 + 0x17)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      uVar2 = CONCAT17(s__VideoInputDevicePoller_0019a0e7[0xf],
                       s__VideoInputDevicePoller_0019a0e7._8_7_);
      local_88[0x17] = '\0';
      uVar3 = CONCAT71(s__VideoInputDevicePoller_0019a0e7._16_7_,
                       s__VideoInputDevicePoller_0019a0e7[0xf]);
      *(undefined8 *)(local_88 + 8) = uVar2;
      *(undefined8 *)local_88 = uVar4;
      *(undefined8 *)(local_88 + 0xf) = uVar3;
      local_60 = FUN_0040e7ec;
      local_58 = &DAT_001f4e70;
      local_70 = lVar12;
      local_50 = uVar5;
      FUN_00520194(&local_98);
      puVar6 = (undefined8 *)operator_new(0x18);
      puVar6[2] = &local_98;
      *puVar6 = &PTR_FUN_00d1eac8;
      puVar6[1] = &local_90;
      FUN_00512cf8(lVar9,puVar6);
      FUN_005203e8(&local_a0,&local_98);
      FUN_0052007c(local_a0);
      FUN_00520164(&local_a0);
      FUN_005201dc(&local_98);
      if (*(code **)(local_58 + 8) != (code *)0x0) {
        (**(code **)(local_58 + 8))(local_70);
      }
      if (lStack_78 < 0) {
        operator_delete(local_88);
      }
    }
  }
  pvVar10 = (void *)param_1[7];
  if (pvVar10 != (void *)0x0) {
    pvVar11 = (void *)param_1[8];
    pvVar7 = pvVar10;
    if (pvVar11 != pvVar10) {
      do {
        pvVar11 = (void *)((long)pvVar11 + -0x38);
      } while (pvVar11 != pvVar10);
      pvVar7 = (void *)param_1[7];
    }
    param_1[8] = (long)pvVar10;
    operator_delete(pvVar7);
  }
  if (*(code **)(param_1[6] + 8) != (code *)0x0) {
    (**(code **)(param_1[6] + 8))(param_1[3]);
  }
  plVar8 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  puVar6 = (undefined8 *)param_1[1];
  param_1[1] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_00d193e8;
    if (puVar6[1] != 0) {
      FUN_005ce374(puVar6[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar6);
  }
  pvVar10 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar10 != (void *)0x0) {
    FUN_00514454(pvVar10);
    operator_delete(pvVar10);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004baa98  FUN_004baa98 =====

void FUN_004baa98(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long *local_b0 [2];
  code *local_a0;
  undefined *local_98;
  long *local_90;
  undefined4 local_88;
  undefined1 uStack_84;
  char cStack_83;
  undefined2 uStack_82;
  char local_71;
  long local_70;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00514534(*param_1);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004d7934("../../discord_native_lib/src/media/video_input_device_poller.cpp",0x28,
                 "!pollerLoop_->IsCurrentThread()",&DAT_001f6647);
  }
  local_a0 = FUN_004bb11c;
  local_98 = &DAT_001f70c0;
  local_b0[0] = param_1;
  uVar2 = (**(code **)(*(long *)param_1[2] + 0x20))((long *)param_1[2],local_b0);
  if (*(code **)(local_98 + 8) != (code *)0x0) {
    (**(code **)(local_98 + 8))(local_b0[0]);
  }
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)(*param_1 + 0x58);
    local_c8 = param_1;
    if (lVar4 != 0) {
      lVar5 = *(long *)(*param_1 + 0x78);
      if (lVar5 == 0) {
        FUN_00520194(&local_90);
        puVar3 = (undefined8 *)operator_new(0x18);
        puVar3[2] = &local_90;
        *puVar3 = &PTR_FUN_00d1eb40;
        puVar3[1] = &local_c8;
        FUN_00512cf8(lVar4,puVar3);
        FUN_005203e8(&local_b8,&local_90);
        FUN_0052007c(local_b8);
        FUN_00520164(&local_b8);
        FUN_005201dc(&local_90);
      }
      else {
        local_50 = FUN_005ce36c();
        local_71 = '\x05';
        local_90 = param_1;
        if ((&local_88 < "tart") && ("Start" < &cStack_83)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        uStack_84 = 0x74;
        local_88 = 0x72617453;
        cStack_83 = '\0';
        local_60 = FUN_0040e7ec;
        local_58 = &DAT_001f4e70;
        local_70 = lVar5;
        FUN_00520194(&local_b8);
        puVar3 = (undefined8 *)operator_new(0x18);
        puVar3[2] = &local_b8;
        *puVar3 = &PTR_FUN_00d1eb18;
        puVar3[1] = &local_90;
        FUN_00512cf8(lVar4,puVar3);
        FUN_005203e8(&local_c0,&local_b8);
        FUN_0052007c(local_c0);
        FUN_00520164(&local_c0);
        FUN_005201dc(&local_b8);
        if (*(code **)(local_58 + 8) != (code *)0x0) {
          (**(code **)(local_58 + 8))(local_70);
        }
        if (local_71 < '\0') {
          operator_delete((void *)CONCAT26(uStack_82,
                                           CONCAT15(cStack_83,CONCAT14(uStack_84,local_88))));
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bacdc  FUN_004bacdc =====

void FUN_004bacdc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  undefined4 local_88;
  uint auStack_84 [4];
  char local_71;
  long local_70;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00514534(*param_1);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004d7934("../../discord_native_lib/src/media/video_input_device_poller.cpp",0x37,
                 "!pollerLoop_->IsCurrentThread()",&DAT_001f6647);
  }
  lVar4 = *(long *)(*param_1 + 0x58);
  local_a8 = param_1;
  if (lVar4 != 0) {
    lVar5 = *(long *)(*param_1 + 0x78);
    if (lVar5 == 0) {
      FUN_00520194(&local_90);
      puVar3 = (undefined8 *)operator_new(0x18);
      puVar3[2] = &local_90;
      *puVar3 = &PTR_FUN_00d1eb90;
      puVar3[1] = &local_a8;
      FUN_00512cf8(lVar4,puVar3);
      FUN_005203e8(&local_98,&local_90);
      FUN_0052007c(local_98);
      FUN_00520164(&local_98);
      FUN_005201dc(&local_90);
    }
    else {
      local_50 = FUN_005ce36c();
      local_71 = '\x04';
      local_90 = param_1;
      if ((&local_88 < &UNK_001c5088) && (&UNK_001c5087 < auStack_84)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      auStack_84[0] = auStack_84[0] & 0xffffff00;
      local_88 = 0x706f7453;
      local_60 = FUN_0040e7ec;
      local_58 = &DAT_001f4e70;
      local_70 = lVar5;
      FUN_00520194(&local_98);
      puVar3 = (undefined8 *)operator_new(0x18);
      puVar3[2] = &local_98;
      *puVar3 = &PTR_FUN_00d1eb68;
      puVar3[1] = &local_90;
      FUN_00512cf8(lVar4,puVar3);
      FUN_005203e8(&local_a0,&local_98);
      FUN_0052007c(local_a0);
      FUN_00520164(&local_a0);
      FUN_005201dc(&local_98);
      if (*(code **)(local_58 + 8) != (code *)0x0) {
        (**(code **)(local_58 + 8))(local_70);
      }
      if (local_71 < '\0') {
        operator_delete((void *)CONCAT44(auStack_84[0],local_88));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004baed0  FUN_004baed0 =====

void FUN_004baed0(long *param_1)

{
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    FUN_004ba5c0();
    return;
  }
  return;
}


// ===== 004baee4  FUN_004baee4 =====

bool FUN_004baee4(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  
  bVar3 = param_1[0x17];
  uVar8 = (ulong)bVar3;
  bVar4 = param_2[0x17];
  sVar1 = *(size_t *)(param_1 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar8;
  }
  sVar2 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    sVar2 = (ulong)bVar4;
  }
  if (sVar1 == sVar2) {
    pcVar9 = *(char **)param_1;
    if (-1 < (char)bVar3) {
      pcVar9 = param_1;
    }
    pcVar7 = *(char **)param_2;
    if (-1 < (char)bVar4) {
      pcVar7 = param_2;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 != 0) && (iVar6 = memcmp(pcVar9,pcVar7,sVar1), iVar6 != 0)) {
        return false;
      }
    }
    else {
      pcVar9 = param_1;
      if (bVar3 != 0) {
        do {
          if (*pcVar9 != *pcVar7) {
            return false;
          }
          uVar8 = uVar8 - 1;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        } while (uVar8 != 0);
      }
    }
    bVar3 = param_1[0x2f];
    uVar8 = (ulong)bVar3;
    bVar4 = param_2[0x2f];
    sVar1 = *(size_t *)(param_1 + 0x20);
    if (-1 < (char)bVar3) {
      sVar1 = uVar8;
    }
    sVar2 = *(size_t *)(param_2 + 0x20);
    if (-1 < (char)bVar4) {
      sVar2 = (ulong)bVar4;
    }
    if (sVar1 == sVar2) {
      param_1 = param_1 + 0x18;
      pcVar9 = *(char **)param_1;
      if (-1 < (char)bVar3) {
        pcVar9 = param_1;
      }
      pcVar7 = *(char **)(param_2 + 0x18);
      if (-1 < (char)bVar4) {
        pcVar7 = param_2 + 0x18;
      }
      if ((char)bVar3 < '\0') {
        if (sVar1 != 0) {
          iVar6 = memcmp(pcVar9,pcVar7,sVar1);
          return iVar6 == 0;
        }
      }
      else if (bVar3 != 0) {
        do {
          uVar8 = uVar8 - 1;
          bVar5 = *param_1 == *pcVar7;
          if (!bVar5) {
            return bVar5;
          }
          pcVar7 = pcVar7 + 1;
          param_1 = param_1 + 1;
        } while (uVar8 != 0);
        return bVar5;
      }
      return true;
    }
  }
  return false;
}


// ===== 004bb02c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004bb030  FUN_004bb030 =====

void FUN_004bb030(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 8);
  uVar1 = FUN_005ce36c();
  puVar3 = *(undefined8 **)(*plVar4 + 8);
  *(undefined8 *)(*plVar4 + 8) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_00d193e8;
    if (puVar3[1] != 0) {
      FUN_005ce374(puVar3[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar3);
  }
  uVar2 = FUN_005ce36c();
  (*(code *)plVar4[6])(plVar4 + 4,plVar4 + 1,plVar4[8],uVar1,uVar2);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 004bb0bc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004bb0c0  FUN_004bb0c0 =====

void FUN_004bb0c0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(**(long **)(param_1 + 8) + 8);
  *(undefined8 *)(**(long **)(param_1 + 8) + 8) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_00d193e8;
    if (puVar1[1] != 0) {
      FUN_005ce374(puVar1[1],PTR_free_00d51ac0);
    }
    operator_delete(puVar1);
  }
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 004bb11c  FUN_004bb11c =====

void FUN_004bb11c(undefined8 *param_1)

{
  FUN_004ba5c0(*param_1);
  return;
}


// ===== 004bb124  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004bb128  FUN_004bb128 =====

void FUN_004bb128(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  uVar1 = FUN_005ce36c();
  FUN_00515708(*(undefined8 *)(*plVar3 + 8),FUN_004baed0,3000,3000);
  uVar2 = FUN_005ce36c();
  (*(code *)plVar3[6])(plVar3 + 4,plVar3 + 1,plVar3[8],uVar1,uVar2);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 004bb198  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004bb19c  FUN_004bb19c =====

void FUN_004bb19c(long param_1)

{
  FUN_00515708(*(undefined8 *)(**(long **)(param_1 + 8) + 8),FUN_004baed0,3000,3000);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 004bb1dc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004bb1e0  FUN_004bb1e0 =====

void FUN_004bb1e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  uVar1 = FUN_005ce36c();
  FUN_00515738(*(undefined8 *)(*plVar3 + 8));
  uVar2 = FUN_005ce36c();
  (*(code *)plVar3[6])(plVar3 + 4,plVar3 + 1,plVar3[8],uVar1,uVar2);
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 004bb240  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004bb244  FUN_004bb244 =====

void FUN_004bb244(long param_1)

{
  FUN_00515738(*(undefined8 *)(**(long **)(param_1 + 8) + 8));
  FUN_00520464(*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 004bb274  FUN_004bb274 =====

void FUN_004bb274(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_00d1ebb8;
  FUN_005468e0((long)param_1 + 0x44);
  if (*(code **)(param_1[7] + 8) != (code *)0x0) {
    (**(code **)(param_1[7] + 8))(param_1[4]);
  }
  plVar4 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
      return;
    }
  }
  return;
}


// ===== 004bb310  FUN_004bb310 =====

void FUN_004bb310(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_00d1ebb8;
  FUN_005468e0((long)param_1 + 0x44);
  if (*(code **)(param_1[7] + 8) != (code *)0x0) {
    (**(code **)(param_1[7] + 8))(param_1[4]);
  }
  plVar4 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004bb3a8  FUN_004bb3a8 =====

void FUN_004bb3a8(long param_1,undefined8 param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined1 local_78 [16];
  long local_68 [2];
  code *local_58;
  undefined *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  FUN_00546924(param_1 + 0x44);
  auVar7._8_8_ = local_78._8_8_;
  auVar7._0_8_ = local_78._0_8_;
  auVar8._8_8_ = local_78._8_8_;
  auVar8._0_8_ = local_78._0_8_;
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x10) != '\0') {
    piVar1 = (int *)(param_1 + 0x6c);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_004bb4f0;
  }
  pbVar2 = (byte *)(param_1 + 0x40);
  do {
    bVar3 = *pbVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar5) {
      *pbVar2 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((bVar3 & 1) == 0) {
    piVar1 = (int *)(param_1 + 0x6c);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      auVar7 = auVar8;
    } while (cVar4 != '\0');
    goto LAB_004bb4f0;
  }
  plVar10 = *(long **)(param_1 + 0x78);
  if (plVar10 != (long *)0x0) {
    local_58 = FUN_004bc2e0;
    local_50 = &DAT_001f70e0;
    local_68[0] = param_1;
    (**(code **)(*plVar10 + 0x18))(plVar10,param_2,local_68);
    auVar7._8_8_ = local_78._8_8_;
    auVar7._0_8_ = local_78._0_8_;
    if (*(code **)(local_50 + 8) != (code *)0x0) {
      (**(code **)(local_50 + 8))(local_68[0]);
      auVar7._8_8_ = local_78._8_8_;
      auVar7._0_8_ = local_78._0_8_;
    }
    goto LAB_004bb4f0;
  }
  local_78 = FUN_004bb524(param_1,param_2);
  uVar11 = discord::media::VideoFrameRgba::ok((VideoFrameRgba *)local_78);
  if ((uVar11 & 1) == 0) {
LAB_004bb4b0:
    pbVar2[0] = 1;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
  }
  else {
    uVar11 = (**(code **)(param_1 + 0x30))(param_1 + 0x20,local_78);
    if ((uVar11 & 1) != 0) goto LAB_004bb4b0;
  }
  uVar9 = local_78._8_8_;
  auVar7 = local_78;
  if ((long *)local_78._8_8_ != (long *)0x0) {
    plVar10 = (long *)(local_78._8_8_ + 8);
    do {
      lVar12 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*(long *)local_78._8_8_ + 0x10))(local_78._8_8_);
      FUN_005466cc(uVar9);
      auVar7 = local_78;
    }
  }
LAB_004bb4f0:
  local_78 = auVar7;
  FUN_00546948(param_1 + 0x44);
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004bb524  FUN_004bb524 =====

void FUN_004bb524(long param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar11 = (long *)(param_1 + 0x80);
  plVar13 = *(long **)(param_1 + 0x88);
  if (plVar13 != (long *)*plVar11) {
    iVar1 = **(int **)*plVar11;
    iVar5 = FUN_007bf3cc(param_2);
    if (iVar1 == iVar5) {
      if (*(long **)(param_1 + 0x88) == *(long **)(param_1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                   "__n < size()","vector[] index out of bounds");
      }
      iVar1 = *(int *)(**(long **)(param_1 + 0x80) + 4);
      iVar5 = FUN_007bf3e8(param_2);
      if (iVar1 == iVar5) {
        plVar13 = *(long **)(param_1 + 0x88);
        goto LAB_004bb5f8;
      }
    }
    plVar13 = *(long **)(param_1 + 0x80);
    plVar14 = *(long **)(param_1 + 0x88);
    while (plVar14 != plVar13) {
      plVar12 = (long *)plVar14[-1];
      plVar14 = plVar14 + -2;
      if (plVar12 != (long *)0x0) {
        plVar7 = plVar12 + 1;
        do {
          lVar9 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          FUN_005466cc(plVar12);
        }
      }
    }
    *(long **)(param_1 + 0x88) = plVar13;
  }
LAB_004bb5f8:
  plVar14 = (long *)*plVar11;
LAB_004bb604:
  if (plVar14 == plVar13) {
    plVar13 = (long *)0x0;
  }
  else {
    if ((((plVar14[1] == 0) || (*(long *)(plVar14[1] + 8) != 0)) ||
        (uVar6 = FUN_004b9910(*plVar14), (uVar6 & 1) == 0)) ||
       (uVar6 = FUN_004b9718(*plVar14,param_2), (uVar6 & 1) == 0)) goto LAB_004bb600;
    lVar9 = *plVar14;
    plVar13 = (long *)plVar14[1];
    if (plVar13 != (long *)0x0) {
      plVar14 = plVar13 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = *plVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar14 = plVar13;
    if (lVar9 != 0) goto joined_r0x004bb7bc;
  }
  plVar7 = (long *)operator_new(0x38);
  plVar14 = plVar7 + 3;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_00d1ec98;
  FUN_004b968c(plVar14,param_2);
  plVar12 = *(long **)(param_1 + 0x88);
  local_78 = plVar14;
  local_70 = plVar7;
  if (plVar12 < *(long **)(param_1 + 0x90)) {
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    plVar8 = plVar12 + 2;
    *plVar12 = (long)plVar14;
    plVar12[1] = (long)plVar7;
    local_78 = (long *)0x0;
    local_70 = (long *)0x0;
    *(long **)(param_1 + 0x88) = plVar8;
  }
  else {
    FUN_004bc130(plVar11,&local_78);
    plVar8 = *(long **)(param_1 + 0x88);
  }
  plVar14 = local_70;
  if ((long *)*plVar11 != plVar8) {
    if (local_70 != (long *)0x0) {
      plVar11 = local_70 + 1;
      do {
        lVar9 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
        FUN_005466cc(plVar14);
      }
    }
    lVar10 = *(long *)(param_1 + 0x88);
    if (*(long *)(param_1 + 0x80) != lVar10) {
      lVar9 = *(long *)(lVar10 + -0x10);
      plVar14 = *(long **)(lVar10 + -8);
      if (plVar14 != (long *)0x0) {
        plVar11 = plVar14 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (plVar13 != (long *)0x0) {
        plVar11 = plVar13 + 1;
        do {
          lVar10 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          FUN_005466cc(plVar13);
        }
      }
joined_r0x004bb7bc:
      if (plVar14 == (long *)0x0) {
        discord::media::VideoFrameRgba::VideoFrameRgba((VideoFrameRgba *)&local_68,lVar9,0);
      }
      else {
        plVar13 = plVar14 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        discord::media::VideoFrameRgba::VideoFrameRgba((VideoFrameRgba *)&local_68,lVar9,plVar14);
        do {
          lVar9 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          FUN_005466cc(plVar14);
        }
      }
      if (*(long *)(lVar4 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_68,uStack_60);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()",
             "back() called on an empty vector");
LAB_004bb600:
  plVar14 = plVar14 + 2;
  goto LAB_004bb604;
}


// ===== 004bb87c  FUN_004bb87c =====

void FUN_004bb87c(undefined8 *param_1,undefined8 param_2,long *param_3,byte param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 local_78 [2];
  byte local_76;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  *param_1 = &PTR_FUN_00d1ebf0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[6] = FUN_00413c90;
  param_1[7] = &DAT_001f1910;
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_0054680c((long)param_1 + 0x44);
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  FUN_007bfa40(local_78);
  local_78[0] = 0;
  local_76 = param_4 & 1;
  (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],param_1,local_78);
  FUN_007bfb14(local_78);
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*param_3 + 0x10))(param_3);
      FUN_005466cc(param_3);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bb990  FUN_004bb990 =====

void FUN_004bb990(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_00d1ebf0;
  FUN_005468e0((long)param_1 + 0x44);
  if (*(code **)(param_1[7] + 8) != (code *)0x0) {
    (**(code **)(param_1[7] + 8))(param_1[4]);
  }
  plVar4 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
      return;
    }
  }
  return;
}


// ===== 004bba2c  FUN_004bba2c =====

void FUN_004bba2c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_00d1ebf0;
  FUN_005468e0((long)param_1 + 0x44);
  if (*(code **)(param_1[7] + 8) != (code *)0x0) {
    (**(code **)(param_1[7] + 8))(param_1[4]);
  }
  plVar4 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004bbac4  FUN_004bbac4 =====

void FUN_004bbac4(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_00546924(param_1 + 0x44);
  *(code **)(param_1 + 0x30) = FUN_00413c90;
  pcVar1 = *(code **)(*(long *)(param_1 + 0x38) + 8);
  *(undefined8 **)(param_1 + 0x38) = &DAT_001f1910;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = param_2[2];
  *(undefined8 *)(param_1 + 0x38) = param_2[3];
  param_2[2] = FUN_00413c90;
  param_2[3] = &DAT_001f1910;
  FUN_00546948(param_1 + 0x44);
  return;
}


// ===== 004bbb50  FUN_004bbb50 =====

void FUN_004bbb50(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  FUN_00546924(param_1 + 0x44);
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00546948(param_1 + 0x44);
  return;
}


// ===== 004bbba0  FUN_004bbba0 =====

void FUN_004bbba0(long *param_1,long param_2)

{
  *param_1 = param_2 + 0x44;
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_00546924();
  return;
}


// ===== 004bbbb4  FUN_004bbbb4 =====

void FUN_004bbbb4(long param_1,undefined8 param_2,long *param_3)

{
  if (*param_3 == param_1 + 0x44 && (char)param_3[1] != '\0') {
    *(undefined8 *)(param_1 + 0x78) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004d7934("../../discord_native_lib/src/media/video_output_stream.cpp",0x78,
               "configLock.mutex() == &lock_ && configLock.owns_lock()",&DAT_001f6647);
}


// ===== 004bbc00  FUN_004bbc00 =====

void FUN_004bbc00(long param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}


// ===== 004bbc10  FUN_004bbc10 =====

void FUN_004bbc10(long param_1,undefined8 param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  VideoFrameI420 aVStack_80 [24];
  long local_68 [2];
  code *local_58;
  undefined *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  FUN_00546924(param_1 + 0x44);
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x10) == '\0') {
    pbVar2 = (byte *)(param_1 + 0x40);
    do {
      bVar3 = *pbVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
      if (bVar5) {
        *pbVar2 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((bVar3 & 1) == 0) {
      piVar1 = (int *)(param_1 + 0x6c);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      plVar7 = *(long **)(param_1 + 0x78);
      if (plVar7 == (long *)0x0) {
        FUN_004bbd5c(aVStack_80,param_1,param_2);
        uVar8 = discord::media::VideoFrameI420::ok();
        if (((uVar8 & 1) == 0) ||
           (uVar8 = (**(code **)(param_1 + 0x30))(param_1 + 0x20,aVStack_80), (uVar8 & 1) != 0)) {
          pbVar2[0] = 1;
          pbVar2[1] = 0;
          pbVar2[2] = 0;
          pbVar2[3] = 0;
        }
        discord::media::VideoFrameI420::~VideoFrameI420(aVStack_80);
      }
      else {
        local_58 = thunk_FUN_004bc47c;
        local_50 = &DAT_001f7100;
        local_68[0] = param_1;
        (**(code **)(*plVar7 + 0x18))(plVar7,param_2,local_68);
        if (*(code **)(local_50 + 8) != (code *)0x0) {
          (**(code **)(local_50 + 8))(local_68[0]);
        }
      }
    }
  }
  else {
    piVar1 = (int *)(param_1 + 0x6c);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_00546948(param_1 + 0x44);
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004bbd5c  FUN_004bbd5c =====

void FUN_004bbd5c(VideoFrameI420 *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long *local_80;
  void *local_78 [2];
  char local_61;
  void *local_60;
  char local_49;
  undefined4 local_44;
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  (**(code **)(**(long **)(param_2 + 8) + 0x78))(local_78);
  uVar1 = 0;
  if (local_40 != '\0') {
    uVar1 = local_44;
  }
  FUN_007bf464(&local_80,param_3);
  discord::media::VideoFrameI420::VideoFrameI420
            (param_1,local_80,*(undefined4 *)(param_3 + 0x48),uVar1,*(undefined8 *)(param_3 + 0x20))
  ;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 8))();
  }
  if (local_40 != '\0') {
    if (local_49 < '\0') {
      operator_delete(local_60);
    }
    if (local_61 < '\0') {
      operator_delete(local_78[0]);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bbe3c  FUN_004bbe3c =====

void FUN_004bbe3c(undefined8 *param_1)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  
  pbVar1 = (byte *)(param_1 + 0xe);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((bVar3 & 1) == 0) {
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],param_1);
  }
  pvVar9 = (void *)param_1[0x10];
  if (pvVar9 != (void *)0x0) {
    pvVar10 = (void *)param_1[0x11];
    pvVar6 = pvVar9;
    if (pvVar10 != pvVar9) {
      do {
        plVar7 = *(long **)((long)pvVar10 + -8);
        pvVar10 = (void *)((long)pvVar10 + -0x10);
        if (plVar7 != (long *)0x0) {
          plVar2 = plVar7 + 1;
          do {
            lVar8 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            FUN_005466cc(plVar7);
          }
        }
      } while (pvVar10 != pvVar9);
      pvVar6 = (void *)param_1[0x10];
    }
    param_1[0x11] = pvVar9;
    operator_delete(pvVar6);
  }
  *param_1 = &PTR_FUN_00d1ebb8;
  FUN_005468e0((long)param_1 + 0x44);
  if (*(code **)(param_1[7] + 8) != (code *)0x0) {
    (**(code **)(param_1[7] + 8))(param_1[4]);
  }
  plVar7 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = (long *)param_1[2];
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar8 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
      return;
    }
  }
  return;
}


// ===== 004bbf80  FUN_004bbf80 =====

void FUN_004bbf80(void *param_1)

{
  FUN_004bbe3c();
  operator_delete(param_1);
  return;
}


// ===== 004bbfa4  FUN_004bbfa4 =====

void FUN_004bbfa4(undefined8 *param_1)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  pbVar1 = (byte *)(param_1 + 0xe);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((bVar3 & 1) == 0) {
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],param_1);
  }
  *param_1 = &PTR_FUN_00d1ebf0;
  FUN_005468e0((long)param_1 + 0x44);
  if (*(code **)(param_1[7] + 8) != (code *)0x0) {
    (**(code **)(param_1[7] + 8))(param_1[4]);
  }
  plVar6 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)param_1[2];
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
      return;
    }
  }
  return;
}


// ===== 004bc06c  FUN_004bc06c =====

void FUN_004bc06c(undefined8 *param_1)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  pbVar1 = (byte *)(param_1 + 0xe);
  do {
    bVar3 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((bVar3 & 1) == 0) {
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],param_1);
  }
  *param_1 = &PTR_FUN_00d1ebf0;
  FUN_005468e0((long)param_1 + 0x44);
  if (*(code **)(param_1[7] + 8) != (code *)0x0) {
    (**(code **)(param_1[7] + 8))(param_1[4]);
  }
  plVar6 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)param_1[2];
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  operator_delete(param_1);
  return;
}


// ===== 004bc130  FUN_004bc130 =====

void FUN_004bc130(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar12;
  
  lVar15 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar15 + 1;
  if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar7 = param_1[2] - *param_1;
  uVar10 = uVar7 >> 3;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x7fffffffffffffef < uVar7) {
    uVar10 = 0xfffffffffffffff;
  }
  if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar6 = operator_new(uVar10 * 0x10);
  uVar17 = param_2[1];
  uVar16 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  puVar14 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)((long)pvVar6 + lVar15 * 0x10);
  pvVar6 = (void *)((long)pvVar6 + uVar10 * 0x10);
  puVar3[1] = uVar17;
  *puVar3 = uVar16;
  puVar8 = puVar3;
  if (puVar11 == puVar14) {
    *param_1 = (long)puVar3;
    param_1[1] = (long)(puVar3 + 2);
    param_1[2] = (long)pvVar6;
  }
  else {
    do {
      puVar12 = puVar11 + -2;
      uVar16 = *puVar12;
      puVar9 = puVar8 + -2;
      puVar8[-1] = puVar11[-1];
      *puVar9 = uVar16;
      *puVar12 = 0;
      puVar11[-1] = 0;
      puVar8 = puVar9;
      puVar11 = puVar12;
    } while (puVar12 != puVar14);
    puVar11 = (undefined8 *)*param_1;
    puVar14 = (undefined8 *)param_1[1];
    *param_1 = (long)puVar9;
    param_1[1] = (long)(puVar3 + 2);
    param_1[2] = (long)pvVar6;
    while (puVar14 != puVar11) {
      plVar13 = (long *)puVar14[-1];
      puVar14 = puVar14 + -2;
      if (plVar13 != (long *)0x0) {
        plVar2 = plVar13 + 1;
        do {
          lVar15 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          FUN_005466cc(plVar13);
        }
      }
    }
  }
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar11);
  return;
}


// ===== 004bc294  FUN_004bc294 =====

void FUN_004bc294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1ec98;
  FUN_005466c0();
  return;
}


// ===== 004bc2a4  FUN_004bc2a4 =====

void FUN_004bc2a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d1ec98;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 004bc2d4  FUN_004bc2d4 =====

void FUN_004bc2d4(long param_1)

{
  FUN_004b98f4(param_1 + 0x18);
  return;
}


// ===== 004bc2dc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004bc2e0  FUN_004bc2e0 =====

void FUN_004bc2e0(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined1 local_120 [224];
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_120[0] = 0;
  local_40 = 0;
  bVar1 = *(char *)(param_2 + 0xe0) != '\0';
  if (bVar1) {
    FUN_007bf130(local_120);
  }
  local_40 = bVar1;
  FUN_004bc368(param_1,local_120);
  if (local_40 != '\0') {
    FUN_007bf020(local_120);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bc368  FUN_004bc368 =====

void FUN_004bc368(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 local_48 [16];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (*(char *)(param_2 + 0xe0) != '\0') {
    lVar8 = *param_1;
    FUN_00546924(lVar8 + 0x44);
    if (*(char *)(param_2 + 0xe0) == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3c2,
                 "this->has_value()","optional operator* called on a disengaged value");
    }
    local_48 = FUN_004bb524(lVar8,param_2);
    uVar6 = discord::media::VideoFrameRgba::ok((VideoFrameRgba *)local_48);
    if (((uVar6 & 1) == 0) ||
       (uVar6 = (**(code **)(lVar8 + 0x30))(lVar8 + 0x20,local_48), (uVar6 & 1) != 0)) {
      *(undefined4 *)(lVar8 + 0x40) = 1;
    }
    uVar5 = local_48._8_8_;
    if ((long *)local_48._8_8_ != (long *)0x0) {
      plVar1 = (long *)(local_48._8_8_ + 8);
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*(long *)local_48._8_8_ + 0x10))(local_48._8_8_);
        FUN_005466cc(uVar5);
      }
    }
    FUN_00546948(lVar8 + 0x44);
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bc478  thunk_FUN_004bc47c =====

void thunk_FUN_004bc47c(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  VideoFrameI420 aVStack_138 [24];
  undefined1 auStack_120 [224];
  char cStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  auStack_120[0] = 0;
  cStack_40 = '\0';
  if (*(char *)(param_2 + 0xe0) != '\0') {
    FUN_007bf130(auStack_120);
    lVar3 = *param_1;
    cStack_40 = '\x01';
    FUN_00546924(lVar3 + 0x44);
    if (cStack_40 == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3c2,
                 "this->has_value()","optional operator* called on a disengaged value");
    }
    FUN_004bbd5c(aVStack_138,lVar3,auStack_120);
    uVar2 = discord::media::VideoFrameI420::ok();
    if (((uVar2 & 1) == 0) ||
       (uVar2 = (**(code **)(lVar3 + 0x30))(lVar3 + 0x20,aVStack_138), (uVar2 & 1) != 0)) {
      *(undefined4 *)(lVar3 + 0x40) = 1;
    }
    discord::media::VideoFrameI420::~VideoFrameI420(aVStack_138);
    FUN_00546948(lVar3 + 0x44);
    if (cStack_40 != '\0') {
      FUN_007bf020(auStack_120);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bc47c  FUN_004bc47c =====

void FUN_004bc47c(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  VideoFrameI420 aVStack_138 [24];
  undefined1 local_120 [224];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_120[0] = 0;
  local_40 = '\0';
  if (*(char *)(param_2 + 0xe0) != '\0') {
    FUN_007bf130(local_120);
    lVar3 = *param_1;
    local_40 = '\x01';
    FUN_00546924(lVar3 + 0x44);
    if (local_40 == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3c2,
                 "this->has_value()","optional operator* called on a disengaged value");
    }
    FUN_004bbd5c(aVStack_138,lVar3,local_120);
    uVar2 = discord::media::VideoFrameI420::ok();
    if (((uVar2 & 1) == 0) ||
       (uVar2 = (**(code **)(lVar3 + 0x30))(lVar3 + 0x20,aVStack_138), (uVar2 & 1) != 0)) {
      *(undefined4 *)(lVar3 + 0x40) = 1;
    }
    discord::media::VideoFrameI420::~VideoFrameI420(aVStack_138);
    FUN_00546948(lVar3 + 0x44);
    if (local_40 != '\0') {
      FUN_007bf020(local_120);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bc584  FUN_004bc584 =====

uint FUN_004bc584(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((int)(param_2 * param_1) <= param_3) {
    uVar1 = param_1 & 0xf;
    if ((int)param_1 < 1) {
      uVar1 = -(-param_1 & 0xf);
    }
    if ((uVar1 >> 1 | uVar1 << 0x1f) < 6 && (1 << (ulong)(uVar1 >> 1 & 0x1f) & 0x35U) != 0) {
      uVar1 = param_2 & 0xf;
      uVar2 = 0;
      if ((int)param_2 < 1) {
        uVar1 = -(-param_2 & 0xf);
      }
      if ((uVar1 >> 1 | uVar1 << 0x1f) < 6) {
        uVar2 = 0x35U >> (ulong)(uVar1 >> 1 & 0x1f) & 1;
      }
      return uVar2;
    }
  }
  return 0;
}


// ===== 004bc5f8  FUN_004bc5f8 =====

undefined8 FUN_004bc5f8(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0x100000001;
  if ((param_1 != 0) && (iVar1 = param_2, iVar3 = param_1, param_2 != 0)) {
    do {
      iVar4 = iVar1;
      iVar1 = 0;
      if (iVar4 != 0) {
        iVar1 = iVar3 / iVar4;
      }
      iVar1 = iVar3 - iVar1 * iVar4;
      iVar3 = iVar4;
    } while (iVar1 != 0);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = param_2 / iVar4;
    }
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = param_1 / iVar4;
    }
    uVar2 = CONCAT44(iVar1,iVar3);
  }
  return uVar2;
}


// ===== 004bc634  FUN_004bc634 =====

ulong FUN_004bc634(uint param_1,ulong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  
  uVar9 = param_2 & 0xffffffff;
  uVar10 = (ulong)param_1;
  if (0 < param_3) {
    uVar8 = (uint)param_2;
    if (param_3 < (int)(uVar8 * param_1)) {
      iVar2 = 1;
      iVar3 = 1;
      if ((param_1 != 0) && (uVar8 != 0)) {
        do {
          iVar3 = 0;
          iVar4 = (int)uVar9;
          if (iVar4 != 0) {
            iVar3 = (int)uVar10 / iVar4;
          }
          uVar6 = (int)uVar10 - iVar3 * iVar4;
          uVar10 = uVar9;
          uVar9 = (ulong)uVar6;
        } while (uVar6 != 0);
        iVar3 = 0;
        if (iVar4 != 0) {
          iVar3 = (int)uVar8 / iVar4;
        }
        iVar2 = 0;
        if (iVar4 != 0) {
          iVar2 = (int)param_1 / iVar4;
        }
      }
      iVar4 = (int)(SQRT(((double)iVar2 / (double)iVar3) * (double)param_3) / (double)iVar2);
      if (0 < iVar4) {
        uVar6 = iVar4 * iVar2;
        iVar7 = iVar4 + 1;
        uVar5 = iVar4 * iVar3;
        do {
          if ((int)(uVar5 * uVar6) <= param_3) {
            uVar1 = uVar6 & 0xf;
            if ((int)uVar6 < 1) {
              uVar1 = -(-uVar6 & 0xf);
            }
            if ((uVar1 >> 1 | uVar1 << 0x1f) < 6 && (1 << (ulong)(uVar1 >> 1 & 0x1f) & 0x35U) != 0)
            {
              uVar1 = uVar5 & 0xf;
              if ((int)uVar5 < 1) {
                uVar1 = -(-uVar5 & 0xf);
              }
              if (((uVar1 >> 1 | uVar1 << 0x1f) < 6) &&
                 ((1 << (ulong)(uVar1 >> 1 & 0x1f) & 0x35U) != 0)) {
                if ((int)param_1 <= (int)uVar6) {
                  uVar6 = param_1;
                }
                uVar10 = (ulong)uVar6;
                if ((int)uVar8 <= (int)uVar5) {
                  uVar5 = uVar8;
                }
                uVar9 = (ulong)uVar5;
                goto LAB_004bc7ac;
              }
            }
          }
          iVar7 = iVar7 + -1;
          uVar6 = uVar6 - iVar2;
          uVar5 = uVar5 - iVar3;
        } while (1 < iVar7);
      }
      uVar10 = FUN_00417e08();
      if ((uVar10 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/video_resolution_utils.cpp",
                     0x271,
                     "VideoResolutionUtils: Could not find a suitable resolution, falling back to scaler method."
                    );
      }
      dVar11 = SQRT((double)param_3 / (double)(int)(uVar8 * param_1));
      uVar10 = (ulong)(uint)(int)(dVar11 * (double)(int)param_1);
      uVar9 = (ulong)(uint)(int)(dVar11 * (double)(int)uVar8);
    }
  }
LAB_004bc7ac:
  return uVar10 | uVar9 << 0x20;
}


// ===== 004bc7c8  FUN_004bc7c8 =====

void FUN_004bc7c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  *param_1 = &PTR_FUN_00d1ecd0;
  if (param_1[0x86] != 0) {
    lVar3 = param_1[0x84];
    plVar2 = (long *)param_1[0x85];
    param_1[0x86] = 0;
    lVar4 = *plVar2;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    while (plVar2 != param_1 + 0x84) {
      plVar5 = (long *)plVar2[1];
      operator_delete(plVar2);
      plVar2 = plVar5;
    }
  }
  FUN_005f0718(param_1 + 0x7b);
  FUN_005f0718(param_1 + 0x74);
  FUN_007bfb14(param_1 + 0x6a);
  FUN_007bfb14(param_1 + 0x62);
  puVar1 = (undefined8 *)param_1[0x5e];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar1;
    FUN_0089e310(puVar1 + 3);
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar6;
  }
  pvVar6 = (void *)param_1[0x5c];
  param_1[0x5c] = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  puVar1 = (undefined8 *)param_1[0x59];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar1;
    FUN_007bfb14(puVar1 + 3);
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar6;
  }
  pvVar6 = (void *)param_1[0x57];
  param_1[0x57] = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  FUN_005468e0(param_1 + 0x52);
  FUN_0089e310(param_1 + 0x35);
  FUN_0089e310(param_1 + 0x18);
  *param_1 = &PTR_FUN_00d1cba0;
  if (*(char *)(param_1 + 0x16) != '\0') {
    FUN_007b5d24(param_1 + 0x12);
  }
  FUN_00546ab0(param_1 + 0xd);
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_007b5d24(param_1 + 8);
  }
  FUN_00546ab0(param_1 + 3);
  if (param_1[2] == 0) {
    return;
  }
  FUN_005466cc();
  return;
}


// ===== 004bc93c  FUN_004bc93c =====

void FUN_004bc93c(void *param_1)

{
  FUN_004bc7c8();
  operator_delete(param_1);
  return;
}


// ===== 004bc960  FUN_004bc960 =====

void FUN_004bc960(long *param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  char *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  long local_80;
  undefined1 *local_78;
  undefined1 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00546924(param_1 + 0x52);
  bVar2 = (int)param_1[0x72] != param_2;
  bVar3 = *(int *)((long)param_1 + 0x394) != param_3;
  bVar4 = (int)param_1[0x73] != param_4;
  if ((bVar2 || bVar3) || bVar4) {
    *(int *)(param_1 + 0x72) = param_2;
    *(int *)((long)param_1 + 0x394) = param_3;
    *(int *)(param_1 + 0x73) = param_4;
    if (param_4 == 0) {
      lVar7 = 100000;
    }
    else {
      iVar6 = 0;
      if (param_4 != 0) {
        iVar6 = 1000000000 / param_4;
      }
      lVar7 = (long)iVar6;
    }
    local_88 = (char *)CONCAT44(param_3,param_2);
    local_78 = (undefined1 *)((ulong)local_78 & 0xffffffff00000000);
    local_70 = 1;
    local_80 = lVar7;
    FUN_0089ed2c(param_1 + 0x18,&local_88);
    local_88 = (char *)CONCAT44(param_3,param_2);
    local_78 = (undefined1 *)((ulong)local_78 & 0xffffffff00000000);
    local_70 = 1;
    local_80 = lVar7;
    FUN_0089ed2c(param_1 + 0x35,&local_88);
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      if (lVar7 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0;
        if ((int)lVar7 != 0) {
          iVar6 = 1000000000 / (int)lVar7;
        }
      }
      FUN_00623bb0(&DAT_001f613f,"../../discord_native_lib/src/media/video_source.cpp",0x141,
                   "Set output format for source aligned adapter to ",param_2,&DAT_0019caaa,param_3,
                   ", framerate: ",iVar6," [fps]");
    }
  }
  FUN_00546948(param_1 + 0x52);
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    local_78 = auStack_a0;
    local_88 = "../../discord_native_lib/src/media/video_source.cpp";
    local_80 = 0x171;
    puStack_90 = &local_88;
    local_98 = "Video source reconfigure to ";
    FUN_00623bb0(&DAT_001f613f,"../../discord_native_lib/src/media/video_source.cpp",0x171,
                 "Video source reconfigure to ",param_2,&DAT_0019caaa,param_3,", framerate: ",
                 param_4," [fps]",param_2,&local_98);
  }
  if ((bVar2 || bVar3) || bVar4) {
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bcb5c  FUN_004bcb5c =====

void FUN_004bcb5c(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  undefined8 uVar19;
  undefined1 *local_b0;
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  int iStack_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined7 local_70;
  undefined1 uStack_69;
  undefined7 local_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_b0 = param_2;
  uVar9 = FUN_00417e08();
  if ((uVar9 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/video_source.cpp",0x231,
                 "Try to update sink want");
  }
  if (param_2 != (undefined1 *)0x0) {
    FUN_00546924(param_1 + 0x290);
    if (*(char *)((long)param_3 + 3) == '\0') {
      local_a0 = &local_b0;
      lVar10 = FUN_004be034(param_1 + 0x2b8,&local_b0,&DAT_001f7120,&local_a0,auStack_a8);
      uVar19 = param_3[1];
      uVar13 = *param_3;
      *(undefined8 *)(lVar10 + 0x28) = param_3[2];
      *(undefined8 *)(lVar10 + 0x20) = uVar19;
      *(undefined8 *)(lVar10 + 0x18) = uVar13;
      if ((undefined8 *)(lVar10 + 0x18) != param_3) {
        FUN_004bdeb0(lVar10 + 0x30,param_3[3],param_3[4]);
      }
      uVar13 = param_3[6];
      *(undefined8 *)(lVar10 + 0x4f) = *(undefined8 *)((long)param_3 + 0x37);
      *(undefined8 *)(lVar10 + 0x48) = uVar13;
      local_a0 = &local_b0;
      lVar10 = FUN_004be474(param_1 + 0x2e0,&local_b0,&DAT_001f7120,&local_a0,auStack_a8);
      FUN_0089f83c(lVar10 + 0x18,param_3);
      FUN_007bfa40(&local_a0);
      plVar11 = *(long **)(param_1 + 0x2c8);
      if (plVar11 != (long *)0x0) {
        uVar15 = uStack_94 & 0xff;
        iVar12 = local_a0._4_4_;
        iVar18 = iStack_98;
        bVar5 = (char)local_a0 != '\0';
        iVar14 = iStack_90;
        bVar6 = local_a0._1_1_ != '\0';
        do {
          bVar17 = bVar6;
          bVar16 = bVar5;
          bVar7 = (char)plVar11[3] != '\0';
          bVar8 = *(char *)((long)plVar11 + 0x19) != '\0';
          iVar2 = *(int *)((long)plVar11 + 0x1c);
          if (iVar12 <= *(int *)((long)plVar11 + 0x1c)) {
            iVar2 = iVar12;
          }
          if (*(char *)((long)plVar11 + 0x24) != '\0') {
            iVar3 = (int)plVar11[4];
            iVar12 = iVar3;
            if (iVar18 <= iVar3) {
              iVar12 = iVar18;
            }
            iVar18 = iVar3;
            if (uVar15 != 0) {
              iVar18 = iVar12;
            }
            uVar15 = 1;
            uStack_94 = CONCAT31(uStack_94._1_3_,1);
            iStack_98 = iVar18;
          }
          plVar1 = plVar11 + 5;
          plVar11 = (long *)*plVar11;
          iStack_90 = (int)*plVar1;
          if (iVar14 <= (int)*plVar1) {
            iStack_90 = iVar14;
          }
          iVar12 = iVar2;
          bVar5 = (bool)(bVar16 | bVar7);
          iVar14 = iStack_90;
          bVar6 = (bool)(bVar17 | bVar8);
        } while (plVar11 != (long *)0x0);
        local_a0 = (undefined1 **)CONCAT44(iVar2,(undefined4)local_a0);
        local_a0._0_2_ = CONCAT11(bVar17 | bVar8,bVar16 | bVar7);
      }
      param_3 = (undefined8 *)(param_1 + 0x350);
      *(ulong *)(param_1 + 0x358) = CONCAT44(uStack_94,iStack_98);
      *(undefined1 ***)(param_1 + 0x350) = local_a0;
      *(ulong *)(param_1 + 0x360) = CONCAT44(uStack_8c,iStack_90);
      if (param_3 != &local_a0) {
        FUN_004bdeb0(param_1 + 0x368,local_88,local_80);
      }
      *(ulong *)(param_1 + 0x380) = CONCAT17(uStack_69,local_70);
      *(ulong *)(param_1 + 0x387) = CONCAT71(local_68,uStack_69);
      FUN_007bfb14(&local_a0);
      lVar10 = param_1 + 0xc0;
    }
    else {
      uVar9 = FUN_00417e08();
      if ((uVar9 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6148,"../../discord_native_lib/src/media/video_source.cpp",0x271,
                     "Updating sink for source aligned sink max fps: ",*(undefined4 *)(param_3 + 2),
                     "max pixel count: ",*(undefined4 *)((long)param_3 + 4));
      }
      local_a0 = (undefined1 **)param_2;
      FUN_007bfa80(&iStack_98,param_3);
      *(undefined1 ***)(param_1 + 0x308) = local_a0;
      *(ulong *)(param_1 + 0x318) = CONCAT44(uStack_8c,iStack_90);
      *(ulong *)(param_1 + 0x310) = CONCAT44(uStack_94,iStack_98);
      *(undefined8 *)(param_1 + 800) = local_88;
      if ((undefined8 *)(param_1 + 0x308) != &local_a0) {
        FUN_004bdeb0(param_1 + 0x328,local_80,uStack_78);
      }
      *(ulong *)(param_1 + 0x340) = CONCAT17(uStack_61,local_68);
      *(ulong *)(param_1 + 0x347) = CONCAT71(uStack_60,uStack_61);
      FUN_007bfb14(&iStack_98);
      lVar10 = param_1 + 0x1a8;
    }
    FUN_0089f83c(lVar10,param_3);
    FUN_00546948(param_1 + 0x290);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bce4c  FUN_004bce4c =====

void FUN_004bce4c(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  long local_98;
  undefined8 local_90;
  int iStack_88;
  uint uStack_84;
  int local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined7 local_60;
  undefined1 uStack_59;
  undefined7 local_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_98 = param_2;
  if (param_2 != 0) {
    FUN_00546924(param_1 + 0x290);
    lVar9 = FUN_004be8b4(param_1 + 0x2b8,&local_98);
    if (lVar9 != 0) {
      FUN_007bfa40(&local_90);
      plVar10 = *(long **)(param_1 + 0x2c8);
      if (plVar10 != (long *)0x0) {
        uVar13 = uStack_84 & 0xff;
        iVar11 = local_90._4_4_;
        iVar16 = iStack_88;
        bVar5 = (char)local_90 != '\0';
        iVar12 = local_80;
        bVar6 = local_90._1_1_ != '\0';
        do {
          bVar15 = bVar6;
          bVar14 = bVar5;
          bVar7 = (char)plVar10[3] != '\0';
          bVar8 = *(char *)((long)plVar10 + 0x19) != '\0';
          iVar2 = *(int *)((long)plVar10 + 0x1c);
          if (iVar11 <= *(int *)((long)plVar10 + 0x1c)) {
            iVar2 = iVar11;
          }
          if (*(char *)((long)plVar10 + 0x24) != '\0') {
            iVar3 = (int)plVar10[4];
            iVar11 = iVar3;
            if (iVar16 <= iVar3) {
              iVar11 = iVar16;
            }
            iVar16 = iVar3;
            if (uVar13 != 0) {
              iVar16 = iVar11;
            }
            uVar13 = 1;
            uStack_84 = CONCAT31(uStack_84._1_3_,1);
            iStack_88 = iVar16;
          }
          plVar1 = plVar10 + 5;
          plVar10 = (long *)*plVar10;
          local_80 = (int)*plVar1;
          if (iVar12 <= (int)*plVar1) {
            local_80 = iVar12;
          }
          iVar11 = iVar2;
          bVar5 = (bool)(bVar14 | bVar7);
          iVar12 = local_80;
          bVar6 = (bool)(bVar15 | bVar8);
        } while (plVar10 != (long *)0x0);
        local_90 = CONCAT44(iVar2,(undefined4)local_90);
        local_90._0_2_ = CONCAT11(bVar15 | bVar8,bVar14 | bVar7);
      }
      *(ulong *)(param_1 + 0x358) = CONCAT44(uStack_84,iStack_88);
      *(undefined8 *)(param_1 + 0x350) = local_90;
      *(ulong *)(param_1 + 0x360) = CONCAT44(uStack_7c,local_80);
      if ((undefined8 *)(param_1 + 0x350) != &local_90) {
        FUN_004bdeb0(param_1 + 0x368,local_78,local_70);
      }
      *(ulong *)(param_1 + 0x380) = CONCAT17(uStack_59,local_60);
      *(ulong *)(param_1 + 0x387) = CONCAT71(local_58,uStack_59);
      FUN_007bfb14(&local_90);
      FUN_0089f83c(param_1 + 0xc0,(undefined8 *)(param_1 + 0x350));
    }
    if ((*(long *)(param_1 + 0x308) != 0) && (*(long *)(param_1 + 0x308) == local_98)) {
      local_90 = 0;
      FUN_007bfa40(&iStack_88);
      *(undefined8 *)(param_1 + 0x308) = local_90;
      *(ulong *)(param_1 + 0x318) = CONCAT44(uStack_7c,local_80);
      *(ulong *)(param_1 + 0x310) = CONCAT44(uStack_84,iStack_88);
      *(undefined8 *)(param_1 + 800) = local_78;
      if ((undefined8 *)(param_1 + 0x308) != &local_90) {
        FUN_004bdeb0(param_1 + 0x328,local_70,uStack_68);
      }
      *(ulong *)(param_1 + 0x340) = CONCAT17(uStack_51,local_58);
      *(ulong *)(param_1 + 0x347) = CONCAT71(uStack_50,uStack_51);
      FUN_007bfb14(&iStack_88);
    }
    FUN_004beb40(param_1 + 0x2e0,&local_98);
    FUN_00546948(param_1 + 0x290);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bd05c  FUN_004bd05c =====

void FUN_004bd05c(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char local_1a8;
  undefined7 uStack_1a7;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined8 uStack_194;
  undefined1 auStack_188 [224];
  char local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_005183d8();
  FUN_00546924(param_1 + 0x52);
  lVar10 = param_1[0x86];
  while ((lVar10 != 0 && (plVar6 = (long *)param_1[0x85], 1000999999 < lVar5 - plVar6[2]))) {
    lVar9 = *plVar6;
    *(long *)(lVar9 + 8) = plVar6[1];
    *(long *)plVar6[1] = lVar9;
    param_1[0x86] = lVar10 + -1;
    operator_delete(plVar6);
    lVar10 = param_1[0x86];
  }
  plVar6 = (long *)operator_new(0x18);
  lVar9 = param_1[0x84];
  plVar6[1] = (long)(param_1 + 0x84);
  plVar6[2] = lVar5;
  *plVar6 = lVar9;
  *(long **)(lVar9 + 8) = plVar6;
  param_1[0x84] = (long)plVar6;
  param_1[0x86] = lVar10 + 1;
  if (param_1[0x61] != 0) {
    uVar3 = FUN_007bf3cc(param_2);
    uVar4 = FUN_007bf3e8(param_2);
    FUN_004bd76c(&local_1a8,param_1,param_1 + 0x35,uVar3,uVar4,DAT_00d60fd8);
    iVar1 = 0;
    if ((int)param_1[0x73] != 0) {
      iVar1 = 1000000 / (int)param_1[0x73];
    }
    DAT_00d60fd8 = DAT_00d60fd8 + iVar1;
    if ((local_1a8 != '\0') && (uVar7 = FUN_004249b0(), (uVar7 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/video_source.cpp",0x3db,
                   "A source frame is dropped for a video sink that wants to align with the source frame rate and resolution"
                  );
    }
    FUN_004bd364(auStack_188,param_1,param_1 + 0x62,param_2,&local_1a8);
    if ((local_a8 != '\0') &&
       ((**(code **)(*(long *)param_1[0x61] + 0x10))((long *)param_1[0x61],auStack_188),
       local_a8 != '\0')) {
      FUN_007bf020(auStack_188);
    }
  }
  if (param_1[0x5a] != 0) {
    uVar3 = FUN_007bf3cc(param_2);
    uVar4 = FUN_007bf3e8(param_2);
    FUN_004bd76c(&local_1a8,param_1,param_1 + 0x18,uVar3,uVar4,*(undefined8 *)(param_2 + 0x20));
    if (local_1a8 == '\0') {
      if (param_1[0x82] != 0) {
        plVar6 = param_1 + 0x59;
        do {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_004bd294;
        } while (*(char *)((long)plVar6 + 0x1a) == '\0');
        FUN_004bd59c(param_1,param_2,0);
        if (param_1[0x82] != 0) {
LAB_004bd294:
          uVar8 = FUN_005183d8();
          local_a0 = CONCAT71(uStack_1a7,local_1a8);
          plVar6 = (long *)param_1[0x82];
          uStack_98 = uStack_1a0;
          uStack_8c = (undefined4)uStack_194;
          uStack_88 = (undefined4)((ulong)uStack_194 >> 0x20);
          uStack_94 = uStack_19c;
          uStack_90 = uStack_198;
          local_68 = FUN_004bedcc;
          local_60 = &PTR_FUN_00d1ed78;
          local_78[0] = (undefined8 *)operator_new(0x30);
          local_78[0][4] = uVar8;
          local_78[0][5] = param_1;
          local_78[0][1] = CONCAT44(uStack_94,uStack_98);
          *local_78[0] = local_a0;
          local_78[0][3] = CONCAT44(uStack_84,uStack_88);
          local_78[0][2] = CONCAT44(uStack_8c,uStack_90);
          (**(code **)(*plVar6 + 0x18))(plVar6,param_2,local_78);
          if ((code *)local_60[1] != (code *)0x0) {
            (*(code *)local_60[1])(local_78[0]);
          }
          goto LAB_004bd228;
        }
      }
      (**(code **)(*param_1 + 0x98))(auStack_188,param_1,param_2,&local_1a8);
      if (local_a8 != '\0') {
        FUN_004bd59c(param_1,auStack_188,1);
        *(int *)((long)param_1 + 0x39c) = *(int *)((long)param_1 + 0x39c) + 1;
        if (local_a8 != '\0') {
          FUN_007bf020(auStack_188);
        }
        goto LAB_004bd228;
      }
    }
  }
  *(int *)(param_1 + 0x87) = (int)param_1[0x87] + 1;
LAB_004bd228:
  FUN_00546948(param_1 + 0x52);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bd364  FUN_004bd364 =====

void FUN_004bd364(undefined1 *param_1,long param_2,char *param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long *local_208;
  long *local_200 [25];
  long *local_138 [28];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_007bf464(&local_208,param_4);
  iVar9 = *(int *)(param_4 + 0x48);
  if ((iVar9 != 0) && (*param_3 != '\0')) {
    (**(code **)(*local_208 + 0x40))(local_138);
    plVar4 = local_138[0];
    if (local_138[0] == (long *)0x0) {
      uVar8 = FUN_004249b0();
      if ((uVar8 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../discord_native_lib/src/media/video_source.cpp",0x76b,
                     "Failed to convert frame to i420 for rotation");
      }
      *param_1 = 0;
      param_1[0xe0] = 0;
    }
    else {
      thunk_FUN_007bd13c(local_200,local_138[0],param_2 + 0x3d8,iVar9);
      plVar3 = local_208;
      local_208 = local_200[0];
      local_200[0] = (long *)0x0;
      if ((plVar3 != (long *)0x0) && ((**(code **)(*plVar3 + 8))(), local_200[0] != (long *)0x0)) {
        (**(code **)(*local_200[0] + 8))();
      }
      iVar9 = 0;
    }
    if (local_138[0] != (long *)0x0) {
      (**(code **)(*local_138[0] + 8))();
    }
    if (plVar4 == (long *)0x0) goto LAB_004bd51c;
  }
  iVar1 = *(int *)(param_5 + 4);
  iVar5 = FUN_007bf3cc(param_4);
  if ((iVar1 != iVar5) ||
     (iVar1 = *(int *)(param_5 + 8), iVar5 = FUN_007bf3e8(param_4), iVar1 != iVar5)) {
    (**(code **)(*local_208 + 0x50))
              (local_138,local_208,*(undefined4 *)(param_5 + 0xc),*(undefined4 *)(param_5 + 0x10),
               *(undefined4 *)(param_5 + 0x14),*(undefined4 *)(param_5 + 0x18),
               *(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 8));
    plVar3 = local_138[0];
    plVar4 = local_208;
    local_138[0] = (long *)0x0;
    local_208 = plVar3;
    if ((plVar4 != (long *)0x0) && ((**(code **)(*plVar4 + 8))(), local_138[0] != (long *)0x0)) {
      (**(code **)(*local_138[0] + 8))();
    }
  }
  FUN_007beb5c(local_200);
  uVar6 = FUN_007bed3c(local_200,&local_208);
  uVar6 = FUN_007bedd8(uVar6,iVar9);
  uVar6 = FUN_007bedc0(uVar6,*(undefined4 *)(param_4 + 0x10));
  lVar7 = FUN_007bf4f8(param_4);
  FUN_007beda8(uVar6,lVar7 * 1000);
  FUN_007bebfc(local_138);
  FUN_007bf130(param_1,local_138);
  param_1[0xe0] = 1;
  FUN_007bf020(local_138);
  FUN_007bebac(local_200);
LAB_004bd51c:
  if (local_208 != (long *)0x0) {
    (**(code **)(*local_208 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bd59c  FUN_004bd59c =====

void FUN_004bd59c(long *param_1,long param_2,byte param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *local_90;
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)param_1[0x59];
  if (plVar7 != (long *)0x0) {
    do {
      plVar1 = plVar7 + 2;
      local_90 = plVar1;
      lVar5 = FUN_004be474(param_1 + 0x5c,plVar1,&DAT_001f7120,&local_90,auStack_70);
      uVar3 = FUN_007bf3cc(param_2);
      uVar4 = FUN_007bf3e8(param_2);
      uVar6 = FUN_0089e398(lVar5 + 0x18,uVar3,uVar4,*(long *)(param_2 + 0x20) * 1000,auStack_7c,
                           auStack_78,(ulong)&local_90 | 4,auStack_88);
      if (((uVar6 & 1) != 0) &&
         ((param_1[0x82] == 0 || (*(byte *)((long)plVar7 + 0x1a) == ((param_3 ^ 0xff) & 1))))) {
        (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,param_2);
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  if ((char)param_1[0x17] == '\0') {
    *(undefined1 *)(param_1 + 0x17) = 1;
    FUN_005467a4(param_1 + 3);
    if ((char)param_1[0xc] == '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x3b0,
                 "this->has_value()","optional operator-> called on a disengaged value");
    }
    local_90 = param_1;
    FUN_007b6160(param_1 + 8,&local_90,FUN_00482aec);
    FUN_005467c8(param_1 + 3);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004bd758  FUN_004bd758 =====

void FUN_004bd758(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004bd364(param_1,param_1 + 0x350,param_2,param_3);
  return;
}


// ===== 004bd76c  FUN_004bd76c =====

void FUN_004bd76c(byte *param_1,long param_2,undefined8 param_3,int param_4,int param_5,long param_6
                 )

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_88 [8];
  char *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pbVar1 = param_1 + 4;
  pbVar10 = param_1 + 0x18;
  pbVar10[0] = 0;
  pbVar10[1] = 0;
  pbVar10[2] = 0;
  pbVar10[3] = 0;
  pbVar9 = param_1 + 8;
  pbVar9[0] = 0;
  pbVar9[1] = 0;
  pbVar9[2] = 0;
  pbVar9[3] = 0;
  pbVar9[4] = 0;
  pbVar9[5] = 0;
  pbVar9[6] = 0;
  pbVar9[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  bVar4 = FUN_0089e398(param_3,param_4,param_5,param_6 * 1000,param_1 + 0x14,pbVar10,pbVar1,pbVar9);
  *param_1 = (bVar4 ^ 0xff) & 1;
  if ((~bVar4 & 1) == 0) {
    iVar2 = *(int *)(param_2 + 0x394) * *(int *)(param_2 + 0x390);
    if (iVar2 != 0) {
      if (*(int *)(param_2 + 0x354) <= iVar2) {
        iVar2 = *(int *)(param_2 + 0x354);
      }
      iVar7 = iVar2;
      if (*(char *)(param_2 + 0x35c) != '\0') {
        iVar7 = *(int *)(param_2 + 0x358);
      }
      uVar5 = FUN_004bc5f8(param_4,param_5);
      iVar12 = (int)uVar5;
      iVar11 = (int)((ulong)uVar5 >> 0x20);
      dVar15 = (double)param_4;
      dVar14 = SQRT(((double)iVar12 / (double)iVar11) * (double)iVar7);
      if (dVar14 == dVar15 || dVar14 < dVar15 != (NAN(dVar14) || NAN(dVar15))) {
        dVar15 = dVar14;
      }
      iVar7 = (int)(dVar15 / (double)iVar12);
      if (iVar7 < 1) {
        iVar8 = 0;
        iVar13 = 0;
      }
      else {
        iVar13 = iVar7 * iVar11;
        iVar8 = iVar7 * iVar12;
        iVar7 = iVar7 + 1;
        do {
          uVar6 = FUN_004bc584(iVar8,iVar13,iVar2);
          if ((uVar6 & 1) != 0) goto LAB_004bd8d4;
          iVar7 = iVar7 + -1;
          iVar13 = iVar13 - iVar11;
          iVar8 = iVar8 - iVar12;
        } while (1 < iVar7);
        iVar8 = 0;
        iVar13 = 0;
      }
LAB_004bd8d4:
      uVar6 = FUN_004bc584(*(int *)pbVar1,*(int *)pbVar9,iVar2);
      if (iVar13 * iVar8 == 0) {
        if (((uVar6 & 1) == 0) && (uVar6 = FUN_004022fc(), (uVar6 & 1) == 0)) {
          local_70 = auStack_88;
          local_80 = "../../discord_native_lib/src/media/video_source.cpp";
          uStack_78 = 0xa3a;
          FUN_00623bb0(&DAT_001f707a,"../../discord_native_lib/src/media/video_source.cpp",0xa3a,
                       "Both WebRTC and Discord resolution adaptations are invalid! Using WebRTC\'s: "
                       ,*(int *)pbVar1,&DAT_001c4fee,*(int *)pbVar9,", budget: ",iVar2);
        }
      }
      else if (((uVar6 & 1) == 0) || (*(int *)pbVar9 * *(int *)pbVar1 < iVar13 * iVar8)) {
        *(int *)pbVar9 = iVar13;
        *(int *)pbVar10 = param_5;
        *(int *)pbVar1 = iVar8;
        *(int *)(param_1 + 0x14) = param_4;
      }
    }
    param_4 = param_4 - *(int *)(param_1 + 0x14);
    param_5 = param_5 - *(int *)(param_1 + 0x18);
    if (param_4 < 0) {
      param_4 = param_4 + 1;
    }
    if (param_5 < 0) {
      param_5 = param_5 + 1;
    }
    *(int *)(param_1 + 0xc) = param_4 >> 1;
    *(int *)(param_1 + 0x10) = param_5 >> 1;
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004bd9f0  FUN_004bd9f0 =====

void FUN_004bd9f0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *__dest;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  size_t __n;
  long *plVar12;
  long *plVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  char *local_a8;
  undefined1 auStack_a0 [40];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  FUN_00546924(param_1 + 0x290);
  FUN_004df1ec(auStack_a0,*(undefined4 *)(param_1 + 0x39c));
  local_a8 = "capturedFramesTotal";
  uVar3 = FUN_004e148c(param_2,&local_a8);
  FUN_004dfa04(uVar3,auStack_a0);
  FUN_004df880(auStack_a0);
  FUN_004df1ec(auStack_a0,*(undefined4 *)(param_1 + 0x43c));
  local_a8 = "slowFramesTotal";
  uVar3 = FUN_004e148c(param_2,&local_a8);
  FUN_004dfa04(uVar3,auStack_a0);
  FUN_004df880(auStack_a0);
  if (*(ulong *)(param_1 + 0x430) < 5) goto LAB_004bddb8;
  lVar14 = *(long *)(param_1 + 0x428);
  if (lVar14 == param_1 + 0x420) {
LAB_004bde1c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x630,
               "__position != end()",
               "vector::erase(iterator) called with a non-dereferenceable iterator");
  }
  plVar9 = (long *)0x0;
  plVar12 = (long *)0x0;
  plVar13 = (long *)(lVar14 + 0x10);
  plVar11 = (long *)0x0;
  do {
    lVar4 = *plVar13;
    plVar13 = (long *)(lVar14 + 0x10);
    lVar4 = (*plVar13 - lVar4) / 1000000;
    if (plVar9 < plVar12) {
      if (plVar9 == (long *)0x0) {
LAB_004bddf4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
      *plVar9 = lVar4;
      __dest = plVar11;
    }
    else {
      __n = (long)plVar9 - (long)plVar11;
      lVar10 = (long)__n >> 3;
      uVar1 = lVar10 + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar5 = (ulong)((long)plVar12 - (long)plVar11) >> 2;
      if (uVar5 <= uVar1) {
        uVar5 = uVar1;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)plVar12 - (long)plVar11)) {
        uVar5 = 0x1fffffffffffffff;
      }
      if (uVar5 == 0) goto LAB_004bddf4;
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      __dest = (long *)operator_new(uVar5 * 8);
      plVar9 = __dest + lVar10;
      plVar12 = __dest + uVar5;
      *plVar9 = lVar4;
      memmove(__dest,plVar11,__n);
      if (plVar11 != (long *)0x0) {
        operator_delete(plVar11);
      }
    }
    plVar9 = plVar9 + 1;
    lVar14 = *(long *)(lVar14 + 8);
    plVar11 = __dest;
  } while (lVar14 != param_1 + 0x420);
  if (plVar9 == __dest) goto LAB_004bde1c;
  plVar13 = __dest + 1;
  memmove(__dest,plVar13,(long)plVar9 - (long)plVar13);
  uVar1 = (long)plVar9 - (long)plVar13;
  if (uVar1 == 0) {
    dVar15 = (double)(ulong)((long)uVar1 >> 3);
    dVar17 = 0.0;
    dVar16 = 0.0 / dVar15;
  }
  else {
    uVar5 = uVar1 - 8;
    dVar16 = 0.0;
    plVar9 = (long *)((long)__dest + (uVar1 & 0xfffffffffffffff8));
    plVar12 = __dest;
    if (uVar5 < 8) {
LAB_004bdc28:
      do {
        plVar11 = plVar12 + 1;
        dVar16 = dVar16 + (double)*plVar12;
        plVar12 = plVar11;
      } while (plVar11 != plVar9);
    }
    else {
      uVar7 = (uVar5 >> 3) + 1;
      uVar8 = uVar7 & 0x3ffffffffffffffe;
      uVar6 = uVar8;
      plVar12 = plVar13;
      do {
        plVar11 = plVar12 + -1;
        lVar14 = *plVar12;
        plVar12 = plVar12 + 2;
        uVar6 = uVar6 - 2;
        dVar16 = dVar16 + (double)*plVar11 + (double)lVar14;
      } while (uVar6 != 0);
      plVar12 = __dest + uVar8;
      if (uVar7 != uVar8) goto LAB_004bdc28;
    }
    dVar15 = (double)(ulong)((long)uVar1 >> 3);
    dVar16 = dVar16 / dVar15;
    dVar17 = 0.0;
    plVar12 = __dest;
    if (7 < uVar5) {
      uVar5 = (uVar5 >> 3) + 1;
      uVar6 = uVar5 & 0x3ffffffffffffffe;
      uVar7 = uVar6;
      do {
        plVar12 = plVar13 + -1;
        lVar14 = *plVar13;
        plVar13 = plVar13 + 2;
        uVar7 = uVar7 - 2;
        dVar17 = dVar17 + (double)(*plVar12 * *plVar12) + (double)(lVar14 * lVar14);
      } while (uVar7 != 0);
      plVar12 = __dest + uVar6;
      if (uVar5 == uVar6) goto LAB_004bdccc;
    }
    do {
      plVar13 = plVar12 + 1;
      dVar17 = dVar17 + (double)(*plVar12 * *plVar12);
      plVar12 = plVar13;
    } while (plVar13 != plVar9);
  }
LAB_004bdccc:
  dVar15 = (double)NEON_fmsub(dVar16,dVar16,dVar17 / dVar15);
  FUN_004df1ec(auStack_a0,*(undefined4 *)(param_1 + 0x438));
  local_a8 = "capturedFramesDropped";
  uVar3 = FUN_004e148c(param_2,&local_a8);
  FUN_004dfa04(uVar3,auStack_a0);
  FUN_004df880(auStack_a0);
  FUN_004df1c8(auStack_a0,uVar1 >> 3 & 0xffffffff);
  local_a8 = "capturedFramesCount";
  uVar3 = FUN_004e148c(param_2,&local_a8);
  FUN_004dfa04(uVar3,auStack_a0);
  FUN_004df880(auStack_a0);
  FUN_004df1c8(auStack_a0,(int)dVar16);
  local_a8 = "capturedFramesMean";
  uVar3 = FUN_004e148c(param_2,&local_a8);
  FUN_004dfa04(uVar3,auStack_a0);
  FUN_004df880(auStack_a0);
  FUN_004df1c8(auStack_a0,(int)SQRT(dVar15));
  local_a8 = "capturedFramesStdev";
  uVar3 = FUN_004e148c(param_2,&local_a8);
  FUN_004dfa04(uVar3,auStack_a0);
  FUN_004df880(auStack_a0);
  if (__dest != (long *)0x0) {
    operator_delete(__dest);
  }
LAB_004bddb8:
  FUN_00546948(param_1 + 0x290);
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004bde50  FUN_004bde50 =====

void FUN_004bde50(long *param_1,long param_2)

{
  *param_1 = param_2 + 0x290;
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_00546924();
  return;
}


// ===== 004bde64  FUN_004bde64 =====

void FUN_004bde64(long param_1,undefined8 param_2,long *param_3)

{
  if (*param_3 == param_1 + 0x290 && (char)param_3[1] != '\0') {
    *(undefined8 *)(param_1 + 0x410) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004d7934("../../discord_native_lib/src/media/video_source.cpp",0x1d7,
               "configLock.mutex() == &mutex_ && configLock.owns_lock()",&DAT_001f6647);
}


// ===== 004bdeb0  FUN_004bdeb0 =====

void FUN_004bdeb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t sVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  uVar4 = param_1[2];
  lVar7 = (long)param_3 - (long)param_2;
  pvVar6 = (void *)*param_1;
  uVar9 = lVar7 >> 3;
  if ((ulong)((long)(uVar4 - (long)pvVar6) >> 3) < uVar9) {
    if (pvVar6 != (void *)0x0) {
      param_1[1] = pvVar6;
      operator_delete(pvVar6);
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (lVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = uVar4 >> 2;
    if (uVar4 >> 2 <= uVar9) {
      uVar2 = uVar9;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar6 = operator_new(uVar2 * 8);
    *param_1 = pvVar6;
    param_1[1] = pvVar6;
    param_1[2] = (void *)((long)pvVar6 + uVar2 * 8);
    if (param_2 != param_3) {
      sVar1 = (lVar7 - 8U & 0xfffffffffffffff8) + 8;
      memcpy(pvVar6,param_2,sVar1);
      pvVar6 = (void *)((long)pvVar6 + sVar1);
    }
    param_1[1] = pvVar6;
  }
  else {
    uVar4 = param_1[1] - (long)pvVar6 >> 3;
    puVar8 = (undefined8 *)((long)param_2 + (param_1[1] - (long)pvVar6));
    puVar3 = puVar8;
    if (uVar9 <= uVar4) {
      puVar3 = param_3;
    }
    sVar1 = (long)puVar3 - (long)param_2;
    if (sVar1 != 0) {
      memmove(pvVar6,param_2,sVar1);
    }
    if (uVar4 < uVar9) {
      puVar5 = (undefined8 *)param_1[1];
      while (puVar3 != param_3) {
        if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        *puVar5 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar5 + 1;
        puVar3 = puVar8;
      }
    }
    else {
      puVar5 = (undefined8 *)((long)pvVar6 + sVar1);
    }
    param_1[1] = puVar5;
  }
  return;
}


// ===== 004be034  FUN_004be034 =====

undefined1  [16] FUN_004be034(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  uVar3 = *param_2;
  uVar10 = param_1[1];
  uVar6 = ((uVar3 & 0xffffffff) * 8 + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar3 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar10 != 0) {
    uVar12 = NEON_cnt(uVar10,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar2 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar2 < 2) {
      unaff_x24 = uVar6 & uVar10 - 1;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_004be12c;
        uVar8 = plVar9[1];
        if (uVar8 != uVar6) {
          if (uVar2 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar1 * uVar10;
          }
          if (uVar8 != unaff_x24) goto LAB_004be12c;
        }
      } while (plVar9[2] != uVar3);
      uVar12 = 0;
      goto LAB_004be300;
    }
  }
LAB_004be12c:
  plVar9 = (long *)operator_new(0x58);
  plVar9[2] = *(long *)*param_4;
  FUN_007bfa40(plVar9 + 3);
  lVar4 = param_1[3];
  *plVar9 = 0;
  plVar9[1] = uVar6;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(lVar4 + 1))) {
    if (uVar10 < 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar3 = uVar3 | uVar10 << 1;
    uVar10 = (ulong)((float)(lVar4 + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar10) {
      uVar3 = uVar10;
    }
    if (uVar3 - 1 == 0) {
      uVar3 = 2;
    }
    else if ((uVar3 & uVar3 - 1) != 0) {
      uVar3 = FUN_005204f8(uVar3);
    }
    uVar10 = param_1[1];
    if (uVar10 < uVar3) {
LAB_004be24c:
      FUN_004be318(param_1,uVar3);
    }
    else if (uVar3 < uVar10) {
      uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar10 < 3) {
LAB_004be238:
        uVar2 = FUN_005204f8();
      }
      else {
        uVar12 = NEON_cnt(uVar10,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff)) goto LAB_004be238;
        if (1 < uVar2) {
          uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
        }
      }
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      if (uVar3 < uVar10) goto LAB_004be24c;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar3 * uVar10;
      }
    }
  }
  lVar4 = *param_1;
  plVar5 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    lVar7 = *plVar5;
    *plVar5 = (long)plVar9;
    *plVar9 = lVar7;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar5;
    if (*plVar9 != 0) {
      uVar3 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar3 = uVar3 & uVar10 - 1;
      }
      else if (uVar10 <= uVar3) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar3 / uVar10;
        }
        uVar3 = uVar3 - uVar6 * uVar10;
      }
      plVar5 = (long *)(*param_1 + uVar3 * 8);
      goto LAB_004be2ec;
    }
  }
  else {
    *plVar9 = *plVar5;
LAB_004be2ec:
    *plVar5 = (long)plVar9;
  }
  uVar12 = 1;
  param_1[3] = param_1[3] + 1;
LAB_004be300:
  auVar13._8_8_ = uVar12;
  auVar13._0_8_ = plVar9;
  return auVar13;
}


// ===== 004be318  FUN_004be318 =====

void FUN_004be318(long *param_1,ulong param_2)

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
      FUN_00401ad4();
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


// ===== 004be474  FUN_004be474 =====

undefined1  [16] FUN_004be474(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  uVar3 = *param_2;
  uVar10 = param_1[1];
  uVar6 = ((uVar3 & 0xffffffff) * 8 + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (uVar3 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar10 != 0) {
    uVar12 = NEON_cnt(uVar10,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar2 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar2 < 2) {
      unaff_x24 = uVar6 & uVar10 - 1;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_004be56c;
        uVar8 = plVar9[1];
        if (uVar8 != uVar6) {
          if (uVar2 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar1 * uVar10;
          }
          if (uVar8 != unaff_x24) goto LAB_004be56c;
        }
      } while (plVar9[2] != uVar3);
      uVar12 = 0;
      goto LAB_004be740;
    }
  }
LAB_004be56c:
  plVar9 = (long *)operator_new(0x100);
  plVar9[2] = *(long *)*param_4;
  FUN_0089e258(plVar9 + 3);
  lVar4 = param_1[3];
  *plVar9 = 0;
  plVar9[1] = uVar6;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(lVar4 + 1))) {
    if (uVar10 < 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar3 = uVar3 | uVar10 << 1;
    uVar10 = (ulong)((float)(lVar4 + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar10) {
      uVar3 = uVar10;
    }
    if (uVar3 - 1 == 0) {
      uVar3 = 2;
    }
    else if ((uVar3 & uVar3 - 1) != 0) {
      uVar3 = FUN_005204f8(uVar3);
    }
    uVar10 = param_1[1];
    if (uVar10 < uVar3) {
LAB_004be68c:
      FUN_004be758(param_1,uVar3);
    }
    else if (uVar3 < uVar10) {
      uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar10 < 3) {
LAB_004be678:
        uVar2 = FUN_005204f8();
      }
      else {
        uVar12 = NEON_cnt(uVar10,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff)) goto LAB_004be678;
        if (1 < uVar2) {
          uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
        }
      }
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      if (uVar3 < uVar10) goto LAB_004be68c;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar6;
    }
    else {
      unaff_x24 = uVar6;
      if (uVar10 <= uVar6) {
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = uVar6 / uVar10;
        }
        unaff_x24 = uVar6 - uVar3 * uVar10;
      }
    }
  }
  lVar4 = *param_1;
  plVar5 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    lVar7 = *plVar5;
    *plVar5 = (long)plVar9;
    *plVar9 = lVar7;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar5;
    if (*plVar9 != 0) {
      uVar3 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar3 = uVar3 & uVar10 - 1;
      }
      else if (uVar10 <= uVar3) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar3 / uVar10;
        }
        uVar3 = uVar3 - uVar6 * uVar10;
      }
      plVar5 = (long *)(*param_1 + uVar3 * 8);
      goto LAB_004be72c;
    }
  }
  else {
    *plVar9 = *plVar5;
LAB_004be72c:
    *plVar5 = (long)plVar9;
  }
  uVar12 = 1;
  param_1[3] = param_1[3] + 1;
LAB_004be740:
  auVar13._8_8_ = uVar12;
  auVar13._0_8_ = plVar9;
  return auVar13;
}


// ===== 004be758  FUN_004be758 =====

void FUN_004be758(long *param_1,ulong param_2)

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
      FUN_00401ad4();
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


// ===== 004be8b4  FUN_004be8b4 =====

void FUN_004be8b4(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [2];
  char local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = *param_2;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((uVar5 & 0xffffffff) * 8 + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = (uVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
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
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (plVar9[2] == uVar5) {
            FUN_004bea0c(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              if (local_30 != '\0') {
                FUN_007bfb14((long)pvVar3 + 0x18);
              }
              operator_delete(pvVar3);
            }
            uVar12 = 1;
            goto LAB_004be9b4;
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
  uVar12 = 0;
LAB_004be9b4:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


// ===== 004bea0c  FUN_004bea0c =====

void FUN_004bea0c(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_004bead8;
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
    if (uVar9 == uVar3) goto LAB_004bead8;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_004bead8:
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
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar4 + -1;
  return;
}


// ===== 004beb40  FUN_004beb40 =====

void FUN_004beb40(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_40 [2];
  char local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = *param_2;
    uVar12 = NEON_cnt(uVar4,1);
    uVar6 = ((uVar5 & 0xffffffff) * 8 + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = (uVar5 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
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
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (plVar9[2] == uVar5) {
            FUN_004bec98(local_40);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              if (local_30 != '\0') {
                FUN_0089e310((long)pvVar3 + 0x18);
              }
              operator_delete(pvVar3);
            }
            uVar12 = 1;
            goto LAB_004bec40;
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
  uVar12 = 0;
LAB_004bec40:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


// ===== 004bec98  FUN_004bec98 =====

void FUN_004bec98(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar9 == uVar3) goto LAB_004bed64;
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
    if (uVar9 == uVar3) goto LAB_004bed64;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_004bed64:
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
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar4 + -1;
  return;
}


// ===== 004bedcc  FUN_004bedcc =====

void FUN_004bedcc(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined1 local_218 [224];
  char local_138;
  undefined1 auStack_130 [224];
  char local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_218[0] = 0;
  lVar6 = *param_1;
  local_138 = 0;
  bVar1 = *(char *)(param_2 + 0xe0) != '\0';
  if (bVar1) {
    FUN_007bf130(local_218);
  }
  plVar5 = *(long **)(lVar6 + 0x28);
  local_138 = bVar1;
  FUN_00546924(plVar5 + 0x52);
  lVar3 = FUN_005183d8();
  lVar3 = lVar3 - *(long *)(lVar6 + 0x20);
  if (1000999999 < lVar3) {
    *(int *)((long)plVar5 + 0x43c) = *(int *)((long)plVar5 + 0x43c) + 1;
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f7121,"../../discord_native_lib/src/media/video_source.cpp",0x542,
                   "Slow capture frame process time: ",lVar3 / 1000000," [ms]");
    }
  }
  if (local_138 != '\0') {
    (**(code **)(*plVar5 + 0x98))(auStack_130,plVar5,local_218,lVar6);
    if (local_50 != '\0') {
      FUN_004bd59c(plVar5,auStack_130,1);
      *(int *)((long)plVar5 + 0x39c) = *(int *)((long)plVar5 + 0x39c) + 1;
      if (local_50 != '\0') {
        FUN_007bf020(auStack_130);
      }
      goto LAB_004bef00;
    }
  }
  *(int *)(plVar5 + 0x87) = (int)plVar5[0x87] + 1;
LAB_004bef00:
  FUN_00546948(plVar5 + 0x52);
  if (local_138 != '\0') {
    FUN_007bf020(local_218);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bef44  FUN_004bef44 =====

void FUN_004bef44(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  uVar6 = param_1[5];
  uVar5 = param_1[4];
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  return;
}


// ===== 004bef78  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004bef7c  FUN_004bef7c =====

void FUN_004bef7c(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  if ((*param_1 != 0) && (param_1[3] != 0)) {
    lVar5 = param_1[4];
    lVar2 = param_1[5];
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_004beff8(*param_1,param_1[1],param_1[2],param_1[3],lVar5,lVar2);
  }
  plVar6 = (long *)param_1[5];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
      return;
    }
  }
  return;
}


// ===== 004beff8  FUN_004beff8 =====

void FUN_004beff8(undefined8 *param_1,uint param_2,long param_3,long param_4,undefined8 param_5,
                 long *param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *__arg;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined1 auStack_e8 [8];
  char *local_e0;
  long **pplStack_d8;
  ulong local_d0;
  char **ppcStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a0;
  long *plStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined4 local_80;
  char local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar13 = (long *)*param_1;
  plVar18 = (long *)param_1[1];
  if (plVar13 == plVar18) {
LAB_004bf068:
    if (plVar13 != plVar18) {
      lVar17 = *plVar13;
      lVar8 = lVar17 + 0x38;
      FUN_005467a4();
      plVar15 = *(long **)(lVar17 + 0x28);
      plVar18 = *(long **)(lVar17 + 0x20);
      plVar14 = plVar18;
      for (; plVar19 = plVar14, plVar18 != plVar15; plVar18 = plVar18 + 1) {
        plVar14 = plVar15;
        if (*(long *)*plVar18 == param_4) {
          plVar19 = plVar18;
          if ((plVar18 != plVar15) && (plVar16 = plVar18 + 1, plVar16 != plVar15)) {
            do {
              plVar14 = (long *)*plVar16;
              if (*plVar14 != param_4) {
                *plVar16 = 0;
                pvVar6 = (void *)*plVar18;
                *plVar18 = (long)plVar14;
                if (pvVar6 != (void *)0x0) {
                  pcVar7 = *(code **)(*(long *)((long)pvVar6 + 0xb8) + 8);
                  if (pcVar7 != (code *)0x0) {
                    (*pcVar7)(*(undefined8 *)((long)pvVar6 + 0xa0));
                  }
                  pcVar7 = *(code **)(*(long *)((long)pvVar6 + 0x98) + 8);
                  if (pcVar7 != (code *)0x0) {
                    (*pcVar7)(*(undefined8 *)((long)pvVar6 + 0x80));
                  }
                  pcVar7 = *(code **)(*(long *)((long)pvVar6 + 0x78) + 8);
                  if (pcVar7 != (code *)0x0) {
                    (*pcVar7)(*(undefined8 *)((long)pvVar6 + 0x60));
                  }
                  if (*(char *)((long)pvVar6 + 0x3f) < '\0') {
                    operator_delete(*(void **)((long)pvVar6 + 0x28));
                  }
                  operator_delete(pvVar6);
                }
                plVar18 = plVar18 + 1;
              }
              plVar16 = plVar16 + 1;
            } while (plVar16 != plVar15);
            plVar14 = *(long **)(lVar17 + 0x28);
            plVar19 = plVar18;
          }
          break;
        }
      }
      FUN_004bf804((undefined8 *)(lVar17 + 0x20),plVar19,plVar14);
      plVar18 = *(long **)(lVar17 + 0x20);
      if (plVar18 == *(long **)(lVar17 + 0x28)) {
        FUN_005467c8(lVar8);
        uVar11 = FUN_00417e08();
        if ((uVar11 & 1) == 0) {
          FUN_00623bb0(&DAT_001f7140,
                       "../../discord_native_lib/src/media/videoshare/capture_broker.cpp",0xb99,
                       "CaptureBroker: last subscriber released for source(",param_2,&DAT_001ea264,
                       param_3,"), destroying shared capture");
        }
        lVar17 = plVar13[1];
        lVar8 = *plVar13;
        *plVar13 = 0;
        plVar13[1] = 0;
        plVar18 = (long *)param_1[1];
        if (plVar18 == plVar13) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x630,
                     "__position != end()",
                     "vector::erase(iterator) called with a non-dereferenceable iterator");
        }
        plVar14 = plVar13 + 2;
        if (plVar14 != plVar18) {
          do {
            lVar20 = plVar14[1];
            lVar9 = *plVar14;
            *plVar14 = 0;
            plVar14[1] = 0;
            plVar15 = (long *)plVar13[1];
            plVar13[1] = lVar20;
            *plVar13 = lVar9;
            if (plVar15 != (long *)0x0) {
              plVar19 = plVar15 + 1;
              do {
                lVar9 = *plVar19;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar2) {
                  *plVar19 = lVar9 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
                FUN_005466cc(plVar15);
              }
            }
            plVar14 = plVar14 + 2;
            plVar13 = plVar13 + 2;
          } while (plVar14 != plVar18);
          plVar18 = (long *)param_1[1];
        }
        while (plVar18 != plVar13) {
          plVar14 = (long *)plVar18[-1];
          plVar18 = plVar18 + -2;
          if (plVar14 != (long *)0x0) {
            plVar15 = plVar14 + 1;
            do {
              lVar9 = *plVar15;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar2) {
                *plVar15 = lVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              FUN_005466cc(plVar14);
            }
          }
        }
        param_1[1] = plVar13;
        pvVar6 = operator_new(8);
        FUN_0054a384();
        __arg = (undefined8 *)operator_new(0x28);
        *__arg = pvVar6;
        __arg[2] = lVar17;
        __arg[1] = lVar8;
        __arg[3] = param_5;
        __arg[4] = param_6;
        iVar5 = pthread_create(&local_d0,(pthread_attr_t *)0x0,FUN_004bf98c,__arg);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0054a0b0(iVar5,"thread constructor failed");
        }
        local_a0 = (long *)0x0;
        FUN_004bfaec(&local_a0);
        FUN_0054a1b8(&local_d0);
        FUN_0054a158(&local_d0);
        goto LAB_004bf500;
      }
      lVar9 = 0;
      do {
        lVar10 = *plVar18;
        lVar20 = lVar10;
        if (((lVar9 != 0) && (*(byte *)(lVar10 + 8) <= *(byte *)(lVar9 + 8))) &&
           (lVar20 = lVar9, *(byte *)(lVar10 + 8) == *(byte *)(lVar9 + 8))) {
          uVar11 = *(long *)(lVar9 + 0x50) * *(long *)(lVar9 + 0x48);
          uVar12 = *(long *)(lVar10 + 0x50) * *(long *)(lVar10 + 0x48);
          if (*(long *)(lVar9 + 0x50) == 0 || *(long *)(lVar9 + 0x48) == 0) {
            uVar11 = 0xffffffffffffffff;
          }
          if (*(long *)(lVar10 + 0x50) == 0 || *(long *)(lVar10 + 0x48) == 0) {
            uVar12 = 0xffffffffffffffff;
          }
          lVar20 = lVar10;
          if (((uVar12 <= uVar11) && (lVar20 = lVar9, uVar12 == uVar11)) &&
             (lVar20 = lVar10, *(ulong *)(lVar10 + 0x58) <= *(ulong *)(lVar9 + 0x58))) {
            lVar20 = lVar9;
          }
        }
        plVar18 = plVar18 + 1;
        lVar9 = lVar20;
      } while (plVar18 != *(long **)(lVar17 + 0x28));
      if (lVar20 == 0) {
        local_b0 = 0x1e;
        local_c0 = 0;
        uStack_b8 = 0;
      }
      else {
        uStack_b8 = *(undefined8 *)(lVar20 + 0x50);
        local_c0 = *(undefined8 *)(lVar20 + 0x48);
        local_b0 = *(undefined8 *)(lVar20 + 0x58);
      }
      FUN_004bf618(&local_a0,lVar17,&local_c0);
      puVar4 = local_90;
      plVar13 = plStack_98;
      plVar18 = local_a0;
      if (local_78 == '\0') {
        FUN_005467c8(lVar8);
        uVar11 = FUN_00417e08();
        plVar13 = plVar14;
      }
      else {
        FUN_005467c8(lVar8);
        (**(code **)(*plVar18 + 0x28))(plVar18,(ulong)puVar4 & 0xffffffff,local_88,local_80);
        uVar11 = FUN_00417e08();
      }
      if ((uVar11 & 1) == 0) {
        local_90 = auStack_e8;
        local_a0 = (long *)0x1ecd41;
        plStack_98 = (long *)0xb59;
        pplStack_d8 = &local_a0;
        local_d0 = (ulong)param_2;
        ppcStack_c8 = &local_e0;
        local_e0 = "CaptureBroker: released subscriber on source(";
        FUN_00623bb0(&DAT_001f7138,
                     "../../discord_native_lib/src/media/videoshare/capture_broker.cpp",0xb59,
                     "CaptureBroker: released subscriber on source(",param_2,&DAT_001ea264,param_3,
                     ") remaining=",*(long *)(lVar17 + 0x28) - *(long *)(lVar17 + 0x20) >> 3);
      }
      if ((local_78 != '\0') && (plVar13 != (long *)0x0)) {
        plVar18 = plVar13 + 1;
        do {
          lVar8 = *plVar18;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar2) {
            *plVar18 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          FUN_005466cc(plVar13);
        }
      }
    }
  }
  else {
    do {
      if (*(uint *)*plVar13 == param_2 && *(long *)((uint *)*plVar13 + 2) == param_3)
      goto LAB_004bf068;
      plVar13 = plVar13 + 2;
    } while (plVar13 != plVar18);
  }
  if (param_6 != (long *)0x0) {
    plVar13 = param_6 + 1;
    do {
      lVar8 = *plVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*param_6 + 0x10))(param_6);
      FUN_005466cc(param_6);
    }
  }
LAB_004bf500:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004bf568  FUN_004bf568 =====

void FUN_004bf568(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  return;
}


// ===== 004bf578  FUN_004bf578 =====

void FUN_004bf578(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  void *pvVar8;
  
  pvVar7 = (void *)*param_1;
  if (pvVar7 == (void *)0x0) {
    return;
  }
  pvVar8 = (void *)param_1[1];
  pvVar4 = pvVar7;
  if (pvVar8 != pvVar7) {
    do {
      plVar6 = *(long **)((long)pvVar8 + -8);
      pvVar8 = (void *)((long)pvVar8 + -0x10);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_005466cc(plVar6);
        }
      }
    } while (pvVar8 != pvVar7);
    pvVar4 = (void *)*param_1;
  }
  param_1[1] = pvVar7;
  operator_delete(pvVar4);
  return;
}


// ===== 004bf618  FUN_004bf618 =====

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa0 : 0x004bf754 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004bf618(long *param_1,uint *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_108 [8];
  char *local_100;
  char **ppcStack_f8;
  ulong local_f0;
  char **local_e8;
  undefined *local_e0;
  ulong *puStack_d8;
  undefined8 local_d0;
  undefined **ppuStack_c8;
  char *local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  char **local_a8;
  undefined *puStack_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined *puStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined **ppuStack_68;
  char *local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (((*(long *)(param_2 + 0x18) != *param_3) || (*(long *)(param_2 + 0x1a) != param_3[1])) ||
     (*(long *)(param_2 + 0x1c) != param_3[2])) {
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      local_50 = auStack_108;
      local_d0 = *(undefined8 *)(param_2 + 2);
      puStack_d8 = &local_f0;
      local_60 = "../../discord_native_lib/src/media/videoshare/capture_broker.cpp";
      uStack_58 = 0x2a1;
      ppcStack_f8 = &local_60;
      local_f0 = (ulong)*param_2;
      local_100 = "CaptureBroker: source(";
      local_e8 = &local_100;
      ppuStack_c8 = &local_e0;
      local_e0 = &DAT_001ea264;
      local_98 = &local_b0;
      puStack_b8 = &local_d0;
      local_88 = &puStack_a0;
      ppuStack_68 = &puStack_80;
      local_c0 = ") active request ";
      local_a8 = &local_c0;
      puStack_80 = &DAT_001d2f31;
      local_b0 = *(undefined8 *)(param_2 + 0x18);
      local_90 = *(undefined8 *)(param_2 + 0x1a);
      puStack_a0 = &DAT_001c4fee;
      local_78 = &local_90;
      local_70 = *(undefined8 *)(param_2 + 0x1c);
      FUN_00623bb0(&DAT_001f7126,"../../discord_native_lib/src/media/videoshare/capture_broker.cpp",
                   0x2a1,"CaptureBroker: source(",local_f0,&DAT_001ea264,local_d0,
                   ") active request ",local_b0,&DAT_001c4fee,local_90,&DAT_001d2f31,local_70,
                   &DAT_001c2103,*param_3,&DAT_001c4fee,param_3[1],&DAT_001d2f31,param_3[2],
                   &DAT_001c2103,&local_70);
    }
    lVar9 = *param_3;
    lVar7 = param_3[2];
    lVar6 = *(long *)(param_2 + 4);
    *(long *)(param_2 + 0x1a) = param_3[1];
    *(long *)(param_2 + 0x18) = lVar9;
    *(long *)(param_2 + 0x1c) = lVar7;
    if (lVar6 != 0) {
      lVar7 = *(long *)(param_2 + 6);
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lVar11 = param_3[1];
      lVar10 = *param_3;
      uVar8 = 1;
      lVar9 = param_3[2];
      *param_1 = lVar6;
      param_1[1] = lVar7;
      param_1[3] = lVar11;
      param_1[2] = lVar10;
      param_1[4] = lVar9;
      goto LAB_004bf7d4;
    }
  }
  uVar8 = 0;
  *(undefined1 *)param_1 = 0;
LAB_004bf7d4:
  *(undefined1 *)(param_1 + 5) = uVar8;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bf804  FUN_004bf804 =====

undefined8 * FUN_004bf804(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_3 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
               "__first <= __last","vector::erase(first, last) called with invalid range");
  }
  if (param_2 != param_3) {
    puVar7 = *(undefined8 **)(param_1 + 8);
    puVar6 = (undefined8 *)((long)param_2 + ((long)param_3 - (long)param_2));
    puVar5 = param_2;
    if (puVar6 != puVar7) {
      lVar1 = (long)param_3 - (long)param_2 >> 3;
      do {
        uVar2 = puVar5[lVar1];
        puVar5[lVar1] = 0;
        pvVar4 = (void *)*puVar5;
        *puVar5 = uVar2;
        if (pvVar4 != (void *)0x0) {
          pcVar3 = *(code **)(*(long *)((long)pvVar4 + 0xb8) + 8);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(*(undefined8 *)((long)pvVar4 + 0xa0));
          }
          pcVar3 = *(code **)(*(long *)((long)pvVar4 + 0x98) + 8);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(*(undefined8 *)((long)pvVar4 + 0x80));
          }
          pcVar3 = *(code **)(*(long *)((long)pvVar4 + 0x78) + 8);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(*(undefined8 *)((long)pvVar4 + 0x60));
          }
          if (*(char *)((long)pvVar4 + 0x3f) < '\0') {
            operator_delete(*(void **)((long)pvVar4 + 0x28));
          }
          operator_delete(pvVar4);
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 + lVar1 != puVar7);
      puVar6 = *(undefined8 **)(param_1 + 8);
    }
    while (puVar6 != puVar5) {
      puVar6 = puVar6 + -1;
      pvVar4 = (void *)*puVar6;
      *puVar6 = 0;
      if (pvVar4 != (void *)0x0) {
        pcVar3 = *(code **)(*(long *)((long)pvVar4 + 0xb8) + 8);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(*(undefined8 *)((long)pvVar4 + 0xa0));
        }
        pcVar3 = *(code **)(*(long *)((long)pvVar4 + 0x98) + 8);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(*(undefined8 *)((long)pvVar4 + 0x80));
        }
        pcVar3 = *(code **)(*(long *)((long)pvVar4 + 0x78) + 8);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(*(undefined8 *)((long)pvVar4 + 0x60));
        }
        if (*(char *)((long)pvVar4 + 0x3f) < '\0') {
          operator_delete(*(void **)((long)pvVar4 + 0x28));
        }
        operator_delete(pvVar4);
      }
    }
    *(undefined8 **)(param_1 + 8) = puVar5;
  }
  return param_2;
}


// ===== 004bf98c  FUN_004bf98c =====

undefined8 FUN_004bf98c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  pthread_key_t *ppVar6;
  void *pvVar7;
  long lVar8;
  void *__pointer;
  long *plVar9;
  long *plVar10;
  undefined8 *local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  local_40 = param_1;
  ppVar6 = (pthread_key_t *)FUN_0054a21c();
  __pointer = (void *)*param_1;
  *param_1 = 0;
  pvVar7 = pthread_getspecific(*ppVar6);
  if (pvVar7 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/thread",0xc9,
               "get() == nullptr","Attempting to overwrite thread local data");
  }
  pthread_setspecific(*ppVar6,__pointer);
  lVar8 = param_1[1];
  plVar2 = (long *)param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  plVar9 = (long *)param_1[4];
  param_1[3] = 0;
  param_1[4] = 0;
  plVar10 = *(long **)(lVar8 + 0x18);
  *(undefined8 *)(lVar8 + 0x10) = 0;
  *(undefined8 *)(lVar8 + 0x18) = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 1;
    do {
      lVar8 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_005466cc(plVar9);
    }
  }
  if (plVar2 != (long *)0x0) {
    plVar9 = plVar2 + 1;
    do {
      lVar8 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_005466cc(plVar2);
    }
  }
  FUN_004bfaec(&local_40);
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bfaec  FUN_004bfaec =====

void FUN_004bfaec(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  void *pvVar7;
  
  puVar5 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar6 = (long *)puVar5[4];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_005466cc(plVar6);
      }
    }
    plVar6 = (long *)puVar5[2];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_005466cc(plVar6);
      }
    }
    pvVar7 = (void *)*puVar5;
    *puVar5 = 0;
    if (pvVar7 != (void *)0x0) {
      FUN_0054a3b8(pvVar7);
      operator_delete(pvVar7);
    }
    operator_delete(puVar5);
    return;
  }
  return;
}


// ===== 004bfbac  FUN_004bfbac =====

void FUN_004bfbac(undefined8 *param_1)

{
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004bfbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[3] + 8))(*param_1);
    return;
  }
  return;
}


// ===== 004bfbc4  FUN_004bfbc4 =====

void FUN_004bfbc4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
      return;
    }
  }
  return;
}


// ===== 004bfc1c  FUN_004bfc1c =====

void FUN_004bfc1c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  FUN_005467a4(&DAT_00d61040);
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,
                 "../../discord_native_lib/src/media/videoshare/screenshare_helper.cpp",0x711,
                 "Screenshare: Reset helper");
  }
  plVar4 = DAT_00d61038;
  DAT_00d61030 = 0;
  DAT_00d61038 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_005466cc(plVar4);
    }
  }
  FUN_005467c8(&DAT_00d61040);
  return;
}


// ===== 004bfcb4  FUN_004bfcb4 =====

void FUN_004bfcb4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 004bfcc0  _INIT_7 =====

void _INIT_7(void)

{
  undefined *puVar1;
  
  DAT_00d60ff0 = FUN_004bfcb4;
  DAT_00d60ff8 = &DAT_001f1910;
  __cxa_atexit(FUN_004bfbac,&DAT_00d60fe0,&PTR_LOOP_00d19390);
  puVar1 = PTR_FUN_00d51ac8;
  __cxa_atexit(PTR_FUN_00d51ac8,&DAT_00d61000,&PTR_LOOP_00d19390);
  __cxa_atexit(FUN_004bfbc4,&DAT_00d61030,&PTR_LOOP_00d19390);
  __cxa_atexit(puVar1,&DAT_00d61040,&PTR_LOOP_00d19390);
  return;
}


// ===== 004bfd50  FUN_004bfd50 =====

undefined8 FUN_004bfd50(undefined8 param_1,char *param_2)

{
  char *__s1;
  int iVar1;
  undefined8 uVar2;
  
  __s1 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    __s1 = param_2;
  }
  iVar1 = strcmp(__s1,"y4m");
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_004c06d4(param_1);
  return uVar2;
}


// ===== 004bfda0  FUN_004bfda0 =====

undefined1  [16] FUN_004bfda0(undefined8 param_1,long param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_2 == 0) {
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../discord_native_lib/src/media/videosource/local_video_source.cpp",0xc3,
                   "LocalVideoFile injected to LocalVideoSource cannot be nullptr");
    }
    plVar5 = (long *)0x0;
    pvVar4 = (void *)0x0;
    goto LAB_004bfef8;
  }
  pvVar4 = operator_new(0x478);
  uStack_58 = param_4[1];
  local_60 = (void *)*param_4;
  local_50 = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  FUN_004bff50(pvVar4,param_1,param_2,param_3 & 1,&local_60);
  plVar5 = (long *)operator_new(0x20);
  lVar6 = *(long *)((long)pvVar4 + 0x10);
  plVar5[3] = (long)pvVar4;
  *plVar5 = (long)&PTR_FUN_00d1eea0;
  plVar9 = plVar5 + 1;
  *plVar9 = 0;
  plVar8 = plVar5 + 2;
  *plVar8 = 0;
  if (lVar6 == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(void **)((long)pvVar4 + 8) = pvVar4;
    *(long **)((long)pvVar4 + 0x10) = plVar5;
LAB_004bfea0:
    do {
      lVar6 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  else if (*(long *)(lVar6 + 8) == -1) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(void **)((long)pvVar4 + 8) = pvVar4;
    *(long **)((long)pvVar4 + 0x10) = plVar5;
    FUN_005466cc();
    goto LAB_004bfea0;
  }
  if (local_50 < 0) {
    operator_delete(local_60);
  }
LAB_004bfef8:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar10._8_8_ = plVar5;
  auVar10._0_8_ = pvVar4;
  return auVar10;
}


// ===== 004bff50  FUN_004bff50 =====

void FUN_004bff50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *local_68 [2];
  code *local_58;
  undefined *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_0048288c();
  *(undefined2 *)(param_1 + 0x88) = 0;
  *(undefined1 *)((long)param_1 + 0x442) = 0;
  *param_1 = &PTR_FUN_00d1eda8;
  param_1[0x89] = param_3;
  param_1[0x8a] = 0;
  *(undefined1 *)(param_1 + 0x8b) = param_4;
  uVar8 = param_5[1];
  uVar7 = *param_5;
  param_1[0x8e] = param_5[2];
  param_1[0x8d] = uVar8;
  param_1[0x8c] = uVar7;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  fVar6 = (float)(**(code **)(*(long *)param_1[0x89] + 0x18))();
  pvVar2 = operator_new(0x50);
  FUN_00489274(pvVar2,param_2,(int)fVar6);
  plVar3 = (long *)param_1[0x8a];
  param_1[0x8a] = pvVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  uVar4 = FUN_00417e08();
  if ((uVar4 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,
                 "../../discord_native_lib/src/media/videosource/local_video_source.cpp",0x159,
                 "timingSource fps of local video source is set to: ",(int)fVar6);
  }
  local_58 = FUN_004c06cc;
  local_50 = &DAT_001f7148;
  local_68[0] = param_1;
  FUN_004891f8(param_1[0x8a],local_68);
  if (*(code **)(local_50 + 8) != (code *)0x0) {
    (**(code **)(local_50 + 8))(local_68[0]);
  }
  if (*(char *)((long)param_1 + 0x442) != '\0') {
    (**(code **)(*(long *)param_1[0x8a] + 0x18))();
    *(undefined2 *)(param_1 + 0x88) = 0;
  }
  lVar5 = *(long *)param_1[0x8a];
  *(undefined1 *)((long)param_1 + 0x442) = 1;
  (**(code **)(lVar5 + 0x10))();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c00cc  FUN_004c00cc =====

void FUN_004c00cc(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x442) != '\0') {
    (**(code **)(**(long **)(param_1 + 0x450) + 0x18))();
    *(undefined2 *)(param_1 + 0x440) = 0;
    lVar1 = **(long **)(param_1 + 0x450);
    *(undefined1 *)(param_1 + 0x442) = 1;
                    /* WARNING: Could not recover jumptable at 0x004c0114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))();
    return;
  }
  return;
}


// ===== 004c0124  FUN_004c0124 =====

void FUN_004c0124(long param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 local_138;
  long local_130;
  undefined4 local_128;
  undefined1 local_120;
  undefined1 auStack_118 [224];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if ((*(int *)(param_1 + 0x390) == 0) || (*(int *)(param_1 + 0x394) == 0)) {
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) == 0) {
      pcVar7 = "width or height is not set";
      uVar6 = 0x253;
LAB_004c0208:
      FUN_00623bb0(&DAT_001f4e98,
                   "../../discord_native_lib/src/media/videosource/local_video_source.cpp",uVar6,
                   pcVar7);
    }
LAB_004c020c:
    (**(code **)(**(long **)(param_1 + 0x450) + 0x18))();
    *(undefined1 *)(param_1 + 0x442) = 0;
    *(undefined2 *)(param_1 + 0x440) = 0;
  }
  else {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x448) + 8))();
    if ((uVar5 & 1) == 0) {
      cVar2 = *(char *)(param_1 + 0x458);
      uVar5 = FUN_00417e08();
      if (cVar2 == '\0') {
        if ((uVar5 & 1) == 0) {
          pcVar7 = "Reached end of file, stopping";
          uVar6 = 0x2a9;
          goto LAB_004c0208;
        }
        goto LAB_004c020c;
      }
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,
                     "../../discord_native_lib/src/media/videosource/local_video_source.cpp",0x289,
                     "Reached end of file, resetting");
      }
      (**(code **)(**(long **)(param_1 + 0x448) + 0x10))();
    }
    (**(code **)**(undefined8 **)(param_1 + 0x448))(auStack_118);
    iVar1 = *(int *)(param_1 + 0x398);
    local_138 = *(undefined8 *)(param_1 + 0x390);
    if (iVar1 == 0) {
      local_130 = 100000;
    }
    else {
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = 1000000000 / iVar1;
      }
      local_130 = (long)iVar3;
    }
    local_128 = 0;
    local_120 = 1;
    FUN_0089ed2c(param_1 + 0xc0,&local_138);
    FUN_004bd05c(param_1,auStack_118);
    FUN_007bf020(auStack_118);
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c02ac  FUN_004c02ac =====

void FUN_004c02ac(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __dest = param_1 + 1;
  *param_1 = &PTR_FUN_00d1ee60;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar4;
    *__dest = uVar3;
    return;
  }
  __src = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x1f) = (char)uVar2;
  }
  else {
    if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = (uVar2 | 0xf) + 1;
    __dest = (undefined8 *)operator_new(uVar1);
    param_1[1] = __dest;
    param_1[2] = uVar2;
    param_1[3] = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  memmove(__dest,__src,uVar2 + 1);
  return;
}


// ===== 004c0388  FUN_004c0388 =====

undefined8 FUN_004c0388(void)

{
  return 1;
}


// ===== 004c0390  FUN_004c0390 =====

void FUN_004c0390(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  void *local_50 [2];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_3 == 0) {
    FUN_00511cc0(local_50,param_2 + 8);
    FUN_00411268(param_1,local_50);
    FUN_00411268(param_1 + 3,local_50);
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,
                   "../../discord_native_lib/src/media/videosource/local_video_source.cpp",0x3a9,
                   "local video file name: ",local_50);
    }
    *(undefined4 *)(param_1 + 6) = 0;
    if (local_39 < '\0') {
      operator_delete(local_50[0]);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c0458  FUN_004c0458 =====

void FUN_004c0458(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
  operator_delete(*(void **)(param_1 + 8));
  return;
}


// ===== 004c046c  FUN_004c046c =====

void FUN_004c046c(void *param_1)

{
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 004c049c  FUN_004c049c =====

void FUN_004c049c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00d1eda8;
  (**(code **)(*(long *)param_1[0x8a] + 0x18))();
  *(undefined1 *)((long)param_1 + 0x442) = 0;
  *(undefined2 *)(param_1 + 0x88) = 0;
  if (*(char *)((long)param_1 + 0x477) < '\0') {
    operator_delete((void *)param_1[0x8c]);
  }
  plVar1 = (long *)param_1[0x8a];
  param_1[0x8a] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0x89];
  param_1[0x89] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  FUN_004bc7c8(param_1);
  return;
}


// ===== 004c0520  FUN_004c0520 =====

void FUN_004c0520(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00d1eda8;
  (**(code **)(*(long *)param_1[0x8a] + 0x18))();
  *(undefined1 *)((long)param_1 + 0x442) = 0;
  *(undefined2 *)(param_1 + 0x88) = 0;
  if (*(char *)((long)param_1 + 0x477) < '\0') {
    operator_delete((void *)param_1[0x8c]);
  }
  plVar1 = (long *)param_1[0x8a];
  param_1[0x8a] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0x89];
  param_1[0x89] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  FUN_004bc7c8(param_1);
  operator_delete(param_1);
  return;
}


// ===== 004c05ac  FUN_004c05ac =====

void FUN_004c05ac(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *__dest;
  undefined8 uVar2;
  undefined8 *__src;
  ulong uVar3;
  undefined8 uVar4;
  
  if (-1 < *(char *)(param_2 + 0x477)) {
    uVar4 = *(undefined8 *)(param_2 + 0x460);
    uVar2 = *(undefined8 *)(param_2 + 0x470);
    param_1[1] = *(undefined8 *)(param_2 + 0x468);
    *param_1 = uVar4;
    param_1[2] = uVar2;
    return;
  }
  uVar3 = *(ulong *)(param_2 + 0x468);
  __src = *(undefined8 **)(param_2 + 0x460);
  if (uVar3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar3;
    __dest = param_1;
  }
  else {
    if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = (uVar3 | 0xf) + 1;
    __dest = (undefined8 *)operator_new(uVar1);
    *param_1 = __dest;
    param_1[1] = uVar3;
    param_1[2] = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar3 + 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  memmove(__dest,__src,uVar3 + 1);
  return;
}


// ===== 004c068c  FUN_004c068c =====

void FUN_004c068c(void *param_1)

{
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 004c06b0  FUN_004c06b0 =====

void FUN_004c06b0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004c06c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 004c06c8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 004c06cc  FUN_004c06cc =====

void FUN_004c06cc(undefined8 *param_1)

{
  FUN_004c0124(*param_1);
  return;
}


// ===== 004c06d4  FUN_004c06d4 =====

long * FUN_004c06d4(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)operator_new(0x188);
  FUN_004c0e6c(plVar1,param_1);
  uVar2 = FUN_004c0728(plVar1);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
    plVar1 = (long *)0x0;
  }
  return plVar1;
}


// ===== 004c0728  FUN_004c0728 =====

/* WARNING: Removing unreachable block (ram,0x004c0da0) */
/* WARNING: Removing unreachable block (ram,0x004c0cb8) */
/* WARNING: Removing unreachable block (ram,0x004c0cc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c0728(long param_1)

{
  ulong uVar1;
  undefined8 *****__src;
  char cVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long *****ppppplVar9;
  long *plVar10;
  undefined8 uVar11;
  long *****__s;
  int *piVar12;
  long *plVar13;
  int *****pppppiVar14;
  void *pvVar15;
  int *****pppppiVar16;
  ulong uVar17;
  undefined8 *****pppppuVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  int local_f8;
  int iStack_f4;
  int ****local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  long ****local_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined8 ****local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  int ****local_98;
  ulong local_90;
  undefined8 uStack_88;
  int local_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  plVar13 = (long *)(param_1 + 0x20);
  if ((*(long *)(param_1 + 0xa8) != 0) && (lVar8 = FUN_0054e074(param_1 + 0x30), lVar8 == 0)) {
    lVar8 = (long)plVar13 + *(long *)(*plVar13 + -0x18);
    FUN_00520d98(lVar8,*(uint *)(lVar8 + 0x20) | 4);
  }
  FUN_0054ddfc(plVar13,param_1 + 8,4);
  if ((*(byte *)((long)plVar13 + *(long *)(*(long *)(param_1 + 0x20) + -0x18) + 0x20) & 5) == 0) {
    ppppplVar9 = (long *****)operator_new(0x70);
    uStack_b8 = _UNK_001f4cb8;
    local_c0 = _DAT_001f4cb0;
    ppppplVar9[1] = (long ****)0x0;
    *ppppplVar9 = (long ****)0x0;
    ppppplVar9[3] = (long ****)0x0;
    ppppplVar9[2] = (long ****)0x0;
    ppppplVar9[5] = (long ****)0x0;
    ppppplVar9[4] = (long ****)0x0;
    ppppplVar9[7] = (long ****)0x0;
    ppppplVar9[6] = (long ****)0x0;
    ppppplVar9[9] = (long ****)0x0;
    ppppplVar9[8] = (long ****)0x0;
    ppppplVar9[0xb] = (long ****)0x0;
    ppppplVar9[10] = (long ****)0x0;
    *(undefined8 *)((long)ppppplVar9 + 0x5d) = 0;
    local_c8 = (long ****)ppppplVar9;
    plVar10 = (long *)FUN_0054af80(plVar13,ppppplVar9,100);
    fVar24 = 0.0;
    if (((*(byte *)((long)plVar10 + *(long *)(*plVar10 + -0x18) + 0x20) & 5) == 0) &&
       (*ppppplVar9 == (long ****)0x4745504d34565559 && *(char *)(ppppplVar9 + 1) == '2')) {
      lVar8 = 100;
      __s = ppppplVar9;
      do {
        piVar12 = (int *)memchr(__s,0x46,lVar8 - 4);
        if (piVar12 == (int *)0x0) break;
        if (*piVar12 == 0x4d415246 && (char)piVar12[1] == 'E') {
          iVar5 = 0;
          if ((piVar12 == (int *)((long)ppppplVar9 + 100)) ||
             ((long)piVar12 - (long)ppppplVar9 == -1)) {
            iVar6 = 0;
            bVar4 = false;
            goto LAB_004c0848;
          }
          plVar13 = (long *)FUN_0054b19c(plVar13,0);
          if ((*(byte *)((long)plVar13 + *(long *)(*plVar13 + -0x18) + 0x20) & 5) == 0) {
            fVar24 = 0.0;
            iVar5 = 0;
            iVar6 = 0;
            uVar21 = 0;
            local_f8 = 0;
            iStack_f4 = 0;
            goto LAB_004c0958;
          }
          break;
        }
        __s = (long *****)((long)piVar12 + 1);
        lVar8 = ((long)ppppplVar9 + 100) - (long)__s;
      } while (4 < lVar8);
    }
    iVar5 = 0;
    iVar6 = 0;
    fVar24 = 0.0;
    goto LAB_004c0844;
  }
  goto LAB_004c0878;
LAB_004c0958:
  do {
    uVar17 = local_c0;
    ppppplVar9 = (long *****)local_c8;
    if (-1 < (long)uStack_b8) {
      uVar17 = uStack_b8 >> 0x38;
      ppppplVar9 = &local_c8;
    }
    if (uVar17 <= uVar21) goto LAB_004c0db8;
    uVar22 = 0xffffffffffffffff;
    while ((cVar2 = ((char *)((long)ppppplVar9 + uVar21))[uVar22 + 1], cVar2 != '\n' &&
           (cVar2 != ' '))) {
      uVar22 = uVar22 + 1;
      if ((uVar21 - uVar17) + uVar22 == -1) goto LAB_004c0db8;
    }
    if (((uVar21 - uVar17) + uVar22 == -1) || (uVar21 + uVar22 == -2)) goto LAB_004c0db8;
    uVar23 = uVar21 + 1;
    if (uVar17 < uVar23) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar20 = uVar17 - uVar23;
    if (uVar22 <= uVar17 - uVar23) {
      uVar20 = uVar22;
    }
    if (0x7fffffffffffffef < uVar20) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar20 < 0x17) {
      pppppiVar14 = &local_e0;
      uStack_d0 = CONCAT17((char)uVar20,(undefined7)uStack_d0);
    }
    else {
      uVar1 = (uVar20 | 0xf) + 1;
      pppppiVar14 = (int *****)operator_new(uVar1);
      local_e0 = (int ****)pppppiVar14;
      local_d8 = uVar20;
      uStack_d0 = uVar1 | 0x8000000000000000;
    }
    pppppiVar16 = (int *****)((long)ppppplVar9 + uVar23);
    if ((pppppiVar14 <= pppppiVar16) && (pppppiVar16 < (int *****)((long)pppppiVar14 + uVar20)))
    goto LAB_004c0e04;
    if (uVar20 != 0) {
      memmove(pppppiVar14,pppppiVar16,uVar20);
    }
    *(undefined1 *)((long)pppppiVar14 + uVar20) = 0;
    if (uVar17 < uVar21) goto LAB_004c0ddc;
    cVar2 = *(char *)((long)ppppplVar9 + uVar21);
    if (cVar2 == 'F') {
      uVar17 = local_d8;
      pppppiVar14 = (int *****)local_e0;
      if (-1 < (long)uStack_d0) {
        uVar17 = uStack_d0 >> 0x38;
        pppppiVar14 = &local_e0;
      }
      if ((pppppiVar14 == (int *****)0x0) && (uVar17 != 0)) goto LAB_004c0e2c;
      if (uVar17 < 4) {
        if (uVar17 != 0) goto LAB_004c0b60;
      }
      else {
        if (pppppiVar14 == (int *****)0x0) goto LAB_004c0e2c;
        if (*(int *)pppppiVar14 == 0x454d4152) goto LAB_004c0ae0;
LAB_004c0b60:
        pvVar15 = memchr(pppppiVar14,0x3a,uVar17);
        if ((pvVar15 != (void *)0x0) &&
           (uVar23 = (long)pvVar15 - (long)pppppiVar14, uVar23 != 0xffffffffffffffff)) {
          if (uVar23 <= uVar17) {
            uVar17 = uVar23;
          }
          if (0x7fffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (uVar17 < 0x17) {
            pppppiVar16 = &local_98;
            uStack_88 = CONCAT17((char)uVar17,(undefined7)uStack_88);
          }
          else {
            uVar20 = (uVar17 | 0xf) + 1;
            pppppiVar16 = (int *****)operator_new(uVar20);
            uStack_88 = uVar20 | 0x8000000000000000;
            local_98 = (int ****)pppppiVar16;
            local_90 = uVar17;
          }
          if ((pppppiVar16 <= pppppiVar14) &&
             (pppppiVar14 < (int *****)((long)pppppiVar16 + uVar17))) {
LAB_004c0e04:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                       ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range")
            ;
          }
          if (uVar17 != 0) {
            memmove(pppppiVar16,pppppiVar14,uVar17);
          }
          *(undefined1 *)((long)pppppiVar16 + uVar17) = 0;
          if ((&local_98 == (int *****)0x0) && (uStack_88 >> 0x38 != 0)) {
LAB_004c0e2c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string_view",
                       0x131,"__len == 0 || __s != nullptr",
                       "string_view::string_view(_CharT *, size_t): received nullptr");
          }
          uVar17 = FUN_00621b38(&local_98,uStack_88 >> 0x38,&local_b0,10);
          iStack_f4 = (int)local_b0;
          if ((uVar17 & 1) == 0) {
            uVar7 = 0;
          }
          else {
            uVar17 = local_d8;
            if (-1 < (long)uStack_d0) {
              uVar17 = uStack_d0 >> 0x38;
            }
            if (uVar17 <= uVar23) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar20 = uVar17 - (uVar23 + 1);
            pppppiVar14 = (int *****)local_e0;
            if (-1 < (long)uStack_d0) {
              pppppiVar14 = &local_e0;
            }
            if (uVar17 <= uVar20) {
              uVar20 = uVar17;
            }
            if (0x7fffffffffffffef < uVar20) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (uVar20 < 0x17) {
              pppppuVar18 = &local_b0;
              uStack_a0 = CONCAT17((char)uVar20,(undefined7)uStack_a0);
            }
            else {
              uVar17 = (uVar20 | 0xf) + 1;
              pppppuVar18 = (undefined8 *****)operator_new(uVar17);
              uStack_a0 = uVar17 | 0x8000000000000000;
              local_b0 = pppppuVar18;
              local_a8 = uVar20;
            }
            __src = (undefined8 *****)((long)pppppiVar14 + uVar23 + 1);
            if ((pppppuVar18 <= __src) && (__src < (undefined8 *****)((long)pppppuVar18 + uVar20)))
            goto LAB_004c0e04;
            if (uVar20 != 0) {
              memmove(pppppuVar18,__src,uVar20);
            }
            *(undefined1 *)((long)pppppuVar18 + uVar20) = 0;
            uVar17 = local_a8;
            pppppuVar18 = (undefined8 *****)local_b0;
            if (-1 < (long)uStack_a0) {
              uVar17 = uStack_a0 >> 0x38;
              pppppuVar18 = &local_b0;
            }
            if ((pppppuVar18 == (undefined8 *****)0x0) && (uVar17 != 0)) goto LAB_004c0e2c;
            uVar7 = FUN_00621b38(pppppuVar18,uVar17,&local_7c,10);
            local_f8 = local_7c;
            if ((long)uStack_a0 < 0) {
              operator_delete(local_b0);
            }
          }
          if ((uVar7 & 1) != 0) {
            if (local_f8 != 0) {
              fVar24 = (float)iStack_f4 / (float)local_f8;
              goto LAB_004c0ae0;
            }
            local_f8 = 0;
          }
          iVar19 = 1;
          goto LAB_004c0b30;
        }
      }
      iVar19 = 1;
    }
    else {
      if (cVar2 == 'H') {
        iVar6 = FUN_00548d78(&local_e0,0,10);
      }
      else if (cVar2 == 'W') {
        iVar5 = FUN_00548d78(&local_e0,0,10);
      }
LAB_004c0ae0:
      uVar17 = local_c0;
      if (-1 < (long)uStack_b8) {
        uVar17 = uStack_b8 >> 0x38;
      }
      if (uVar17 < uVar21 + uVar22 + 1) {
LAB_004c0ddc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd57,
                   "__pos <= size()","string index out of bounds");
      }
      ppppplVar9 = (long *****)local_c8;
      if (-1 < (long)uStack_b8) {
        ppppplVar9 = &local_c8;
      }
      bVar4 = *(char *)((long)ppppplVar9 + uVar21 + uVar22 + 1) != '\n';
      if (bVar4) {
        uVar21 = uVar21 + uVar22 + 2;
      }
      iVar19 = 3;
      if (bVar4) {
        iVar19 = 0;
      }
    }
LAB_004c0b30:
    if ((long)uStack_d0 < 0) {
      operator_delete(local_e0);
    }
  } while (iVar19 == 0);
  if (iVar19 == 3) {
LAB_004c0db8:
    bVar4 = false;
    if (((iVar5 != 0) && (bVar4 = false, iVar6 != 0)) && (iStack_f4 != 0)) {
      bVar4 = local_f8 != 0;
    }
  }
  else {
LAB_004c0844:
    bVar4 = false;
  }
LAB_004c0848:
  if ((long)uStack_b8 < 0) {
    operator_delete(local_c8);
  }
  if (bVar4) {
    uVar11 = 1;
    *(float *)(param_1 + 0x180) = fVar24;
    *(long *)(param_1 + 0x170) = (long)iVar5;
    *(long *)(param_1 + 0x178) = (long)iVar6;
    goto LAB_004c087c;
  }
LAB_004c0878:
  uVar11 = 0;
LAB_004c087c:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


// ===== 004c0e6c  FUN_004c0e6c =====

void FUN_004c0e6c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *__src;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *__dest;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  __dest = param_1 + 1;
  *param_1 = &PTR_FUN_00d1eed8;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined8 *)*param_2;
    uVar3 = param_2[1];
    if (uVar3 < 0x17) {
      *(char *)((long)param_1 + 0x1f) = (char)uVar3;
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      __dest = (undefined8 *)operator_new(uVar1);
      param_1[1] = __dest;
      param_1[2] = uVar3;
      param_1[3] = uVar1 | 0x8000000000000000;
    }
    if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar3 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar3 + 1);
  }
  else {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar8;
    *__dest = uVar7;
  }
  puVar4 = PTR_DAT_00d51c30;
  lVar5 = *(long *)(PTR_PTR_00d51c38 + 8);
  uVar7 = *(undefined8 *)(PTR_PTR_00d51c38 + 0x10);
  puVar2 = PTR_DAT_00d51c30 + 0x40;
  plVar6 = param_1 + 4;
  *plVar6 = lVar5;
  param_1[0x1b] = puVar2;
  lVar5 = *(long *)(lVar5 + -0x18);
  param_1[5] = 0;
  *(undefined8 *)((long)plVar6 + lVar5) = uVar7;
  lVar5 = (long)plVar6 + *(long *)(*plVar6 + -0x18);
  FUN_00520e8c(lVar5,param_1 + 6);
  *(undefined8 *)(lVar5 + 0x88) = 0;
  param_1[0x1b] = puVar2;
  *(undefined4 *)(lVar5 + 0x90) = 0xffffffff;
  *plVar6 = (long)(puVar4 + 0x18);
  FUN_0054de58(param_1 + 6);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


// ===== 004c0fb8  FUN_004c0fb8 =====

bool FUN_004c0fb8(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_0054ae74(param_1 + 0x20);
  return iVar1 != -1;
}


// ===== 004c0fd8  FUN_004c0fd8 =====

void FUN_004c0fd8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *__s;
  int *piVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + 0x20);
  FUN_00520d98((long)plVar5 + *(long *)(*plVar5 + -0x18),0);
  FUN_0054b19c(plVar5,0,0);
  puVar1 = (undefined8 *)operator_new(0x70);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((long)puVar1 + 0x5d) = 0;
  plVar2 = (long *)FUN_0054af80(plVar5,puVar1,100);
  if ((*(byte *)((long)plVar2 + *(long *)(*plVar2 + -0x18) + 0x20) & 5) == 0) {
    lVar4 = 100;
    __s = puVar1;
    while (piVar3 = (int *)memchr(__s,0x46,lVar4 - 4), piVar3 != (int *)0x0) {
      if (*piVar3 == 0x4d415246 && (char)piVar3[1] == 'E') {
        if ((piVar3 != (int *)((long)puVar1 + 100)) && ((long)piVar3 - (long)puVar1 != -1)) {
          FUN_0054b19c(plVar5,0);
        }
        break;
      }
      __s = (undefined8 *)((long)piVar3 + 1);
      lVar4 = ((long)puVar1 + 100) - (long)__s;
      if (lVar4 < 5) break;
    }
  }
  operator_delete(puVar1);
  return;
}


// ===== 004c10ec  FUN_004c10ec =====

void FUN_004c10ec(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  lVar1 = param_2 + 0x20;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar3 = FUN_0054ae74(lVar1);
  if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../discord_native_lib/src/media/videosource/yuv_for_mpeg2_file.cpp",0xaa,
                 "HasNextFrame()",&DAT_001f5fa0);
  }
  FUN_0054acc8(lVar1,6,0xffffffff);
  FUN_007bcfd8(&local_50,*(undefined4 *)(param_2 + 0x170),*(undefined4 *)(param_2 + 0x178));
  uVar5 = FUN_007bd0fc(local_50);
  iVar3 = (**(code **)(*local_50 + 0x38))();
  iVar4 = (**(code **)(*local_50 + 0x80))();
  plVar6 = (long *)FUN_0054af80(lVar1,uVar5,(long)(iVar4 * iVar3));
  if ((*(byte *)((long)plVar6 + *(long *)(*plVar6 + -0x18) + 0x20) & 5) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../discord_native_lib/src/media/videosource/yuv_for_mpeg2_file.cpp",0xae,
                 "fileStream_.read(reinterpret_cast<char*>(buffer->MutableDataY()), buffer->height() * buffer->StrideY())"
                 ,&DAT_001f5fa0);
  }
  uVar5 = FUN_007bd10c(local_50);
  iVar3 = FUN_007bf72c(local_50);
  iVar4 = (**(code **)(*local_50 + 0x88))();
  plVar6 = (long *)FUN_0054af80(lVar1,uVar5,(long)(iVar4 * iVar3));
  if ((*(byte *)((long)plVar6 + *(long *)(*plVar6 + -0x18) + 0x20) & 5) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../discord_native_lib/src/media/videosource/yuv_for_mpeg2_file.cpp",0xb0,
                 "fileStream_.read(reinterpret_cast<char*>(buffer->MutableDataU()), buffer->ChromaHeight() * buffer->StrideU())"
                 ,&DAT_001f5fa0);
  }
  uVar5 = FUN_007bd11c(local_50);
  iVar3 = FUN_007bf72c(local_50);
  iVar4 = (**(code **)(*local_50 + 0x90))();
  plVar6 = (long *)FUN_0054af80(lVar1,uVar5,(long)(iVar4 * iVar3));
  if ((*(byte *)((long)plVar6 + *(long *)(*plVar6 + -0x18) + 0x20) & 5) == 0) {
    local_58 = local_50;
    if (local_50 != (long *)0x0) {
      (**(code **)*local_50)();
    }
    uVar5 = FUN_0062589c();
    FUN_007bef7c(param_1,&local_58,0,uVar5,0);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 8))();
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 8))();
    }
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../discord_native_lib/src/media/videosource/yuv_for_mpeg2_file.cpp",0xb2,
               "fileStream_.read(reinterpret_cast<char*>(buffer->MutableDataV()), buffer->ChromaHeight() * buffer->StrideV())"
               ,&DAT_001f5fa0);
}


// ===== 004c1360  FUN_004c1360 =====

undefined4 FUN_004c1360(long param_1)

{
  return *(undefined4 *)(param_1 + 0x180);
}


// ===== 004c1368  FUN_004c1368 =====

undefined8 FUN_004c1368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}


// ===== 004c1370  FUN_004c1370 =====

undefined8 FUN_004c1370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}


// ===== 004c1378  FUN_004c1378 =====

void FUN_004c1378(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  puVar1 = PTR_PTR_00d51c38;
  *param_1 = &PTR_FUN_00d1eed8;
  lVar2 = *(long *)puVar1;
  uVar3 = *(undefined8 *)(puVar1 + 0x18);
  plVar4 = param_1 + 4;
  *plVar4 = lVar2;
  *(undefined8 *)((long)plVar4 + *(long *)(lVar2 + -0x18)) = uVar3;
  FUN_0054dfb0(param_1 + 6);
  FUN_0054a7a4(plVar4,puVar1 + 8);
  thunk_FUN_00520cf4(param_1 + 0x1b);
  if (-1 < *(char *)((long)param_1 + 0x1f)) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 004c13fc  FUN_004c13fc =====

void FUN_004c13fc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  puVar1 = PTR_PTR_00d51c38;
  *param_1 = &PTR_FUN_00d1eed8;
  lVar2 = *(long *)puVar1;
  uVar3 = *(undefined8 *)(puVar1 + 0x18);
  plVar4 = param_1 + 4;
  *plVar4 = lVar2;
  *(undefined8 *)((long)plVar4 + *(long *)(lVar2 + -0x18)) = uVar3;
  FUN_0054dfb0(param_1 + 6);
  FUN_0054a7a4(plVar4,puVar1 + 8);
  thunk_FUN_00520cf4(param_1 + 0x1b);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 004c1478  FUN_004c1478 =====

void FUN_004c1478(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 004c1484  FUN_004c1484 =====

void FUN_004c1484(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 004c1490  FUN_004c1490 =====

void FUN_004c1490(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 004c1498  FUN_004c1498 =====

void FUN_004c1498(void)

{
  return;
}


// ===== 004c149c  FUN_004c149c =====

void FUN_004c149c(void)

{
  return;
}


// ===== 004c14a0  FUN_004c14a0 =====

void FUN_004c14a0(void)

{
  return;
}


// ===== 004c14a4  FUN_004c14a4 =====

void FUN_004c14a4(void)

{
  return;
}


// ===== 004c14a8  FUN_004c14a8 =====

void FUN_004c14a8(void)

{
  return;
}


// ===== 004c14ac  FUN_004c14ac =====

void FUN_004c14ac(void)

{
  return;
}


// ===== 004c14b0  FUN_004c14b0 =====

void FUN_004c14b0(void)

{
  return;
}


// ===== 004c14b4  FUN_004c14b4 =====

void FUN_004c14b4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_00d1ef28;
  lVar1 = FUN_004a3c14();
  uVar2 = FUN_004a2934();
  lVar1 = FUN_004b8418(uVar2,*(undefined8 *)(lVar1 + 0x138),*(undefined8 *)(lVar1 + 0x130));
  param_1[1] = 0;
  if (lVar1 != 0) {
    plVar3 = (long *)FUN_004a2934();
    uVar2 = (**(code **)(*plVar3 + 0xa8))(plVar3,lVar1);
    param_1[1] = uVar2;
  }
  return;
}


// ===== 004c1514  FUN_004c1514 =====

void FUN_004c1514(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_004a3c14();
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(lVar1 + 0x140);
  uVar2 = FUN_004a2934();
  FUN_004c1718(uVar2,uVar3,uVar4);
  return;
}


// ===== 004c1548  FUN_004c1548 =====

void FUN_004c1548(undefined8 *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_004a2934();
  FUN_004c1850(auStack_60,uVar3);
  FUN_004c1b20(auStack_68,0x80);
  lVar4 = FUN_004a3c14();
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar7 = *(undefined8 *)(lVar4 + 0x148);
  uVar3 = FUN_004a2934();
  FUN_004a41b4(uVar3,uVar6,uVar7,param_3);
  FUN_004a3c54(&local_80);
  uVar6 = *(undefined8 *)(lVar4 + 0x150);
  uVar7 = *(undefined8 *)(param_2 + 8);
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[2] = local_70;
  uVar3 = FUN_004a2934();
  FUN_004a41b4(uVar3,uVar7,uVar6,param_3);
  FUN_004a3c54(&local_80);
  uVar6 = *(undefined8 *)(lVar4 + 0x158);
  uVar7 = *(undefined8 *)(param_2 + 8);
  param_1[4] = uStack_78;
  param_1[3] = local_80;
  param_1[5] = local_70;
  param_1[6] = 0;
  uVar3 = FUN_004a2934();
  cVar2 = FUN_004c17b4(uVar3,uVar7,uVar6,param_3);
  if (cVar2 == '\0') {
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined8 *)(lVar4 + 0x160);
    uVar3 = FUN_004a2934();
    cVar2 = FUN_004c17b4(uVar3,uVar6,uVar7,param_3);
    iVar5 = (uint)(cVar2 != '\0') << 1;
  }
  else {
    iVar5 = 1;
  }
  *(undefined4 *)(param_1 + 6) = param_3;
  *(int *)((long)param_1 + 0x34) = iVar5;
  FUN_004c1b84(auStack_68);
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c16a0  FUN_004c16a0 =====

void FUN_004c16a0(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


// ===== 004c16dc  FUN_004c16dc =====

void FUN_004c16dc(void *param_1)

{
  long *plVar1;
  
  if (*(long *)((long)param_1 + 8) != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined8 *)((long)param_1 + 8));
  }
  operator_delete(param_1);
  return;
}


// ===== 004c1718  FUN_004c1718 =====

void FUN_004c1718(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
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
  
  ppuStack_68 = &local_70;
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*param_1 + 400))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c17b4  FUN_004c17b4 =====

void FUN_004c17b4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
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
  
  ppuStack_68 = &local_70;
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*param_1 + 0x130))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c1850  FUN_004c1850 =====

void FUN_004c1850(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 004c1858  FUN_004c1858 =====

void FUN_004c1858(long *param_1)

{
  char cVar1;
  
  if (((long *)*param_1 != (long *)0x0) &&
     (cVar1 = (**(code **)(*(long *)*param_1 + 0x720))(), cVar1 != '\0')) {
    (**(code **)(*(long *)*param_1 + 0x80))();
    (**(code **)(*(long *)*param_1 + 0x88))();
    __android_log_print(6,"DiscordJNI","Cleared pending Java exception at a JNI callback boundary");
    return;
  }
  return;
}


// ===== 004c18d0  FUN_004c18d0 =====

void FUN_004c18d0(byte *param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar3 = FUN_004e05b4();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    bVar2 = FUN_004e03c4(param_2);
    bVar2 = bVar2 & 1;
  }
  else {
    bVar2 = 0;
  }
  *param_1 = bVar2;
  param_1[1] = bVar1;
  return;
}


// ===== 004c191c  FUN_004c191c =====

void FUN_004c191c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_004e05b4();
  if ((uVar2 & 1) == 0) {
    FUN_004dfbf8(&local_50,param_2);
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[2] = local_40;
    *(undefined1 *)(param_1 + 3) = 1;
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_004c19b4;
  }
  else {
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_004c19b4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  return;
}


// ===== 004c19b8  FUN_004c19b8 =====

void FUN_004c19b8(undefined1 *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  ulong uVar3;
  
  uVar3 = FUN_004e05b4();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    uVar2 = FUN_004dff08(param_2);
  }
  else {
    uVar2 = 0;
  }
  *param_1 = uVar2;
  param_1[1] = bVar1;
  return;
}


// ===== 004c1a00  FUN_004c1a00 =====

void FUN_004c1a00(undefined2 *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined2 uVar2;
  ulong uVar3;
  
  uVar3 = FUN_004e05b4();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    uVar2 = FUN_004dff08(param_2);
  }
  else {
    uVar2 = 0;
  }
  *param_1 = uVar2;
  *(bool *)(param_1 + 1) = bVar1;
  return;
}


// ===== 004c1a48  FUN_004c1a48 =====

void FUN_004c1a48(undefined4 *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar3 = FUN_004e05b4();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    uVar2 = FUN_004dff08(param_2);
  }
  else {
    uVar2 = 0;
  }
  *param_1 = uVar2;
  *(bool *)(param_1 + 1) = bVar1;
  return;
}


// ===== 004c1a90  FUN_004c1a90 =====

void FUN_004c1a90(undefined4 *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar3 = FUN_004e05b4();
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    uVar2 = FUN_004dfde0(param_2);
  }
  else {
    uVar2 = 0;
  }
  *param_1 = uVar2;
  *(bool *)(param_1 + 1) = bVar1;
  return;
}


// ===== 004c1ad8  FUN_004c1ad8 =====

void FUN_004c1ad8(undefined4 *param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_004e05b4();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    uVar3 = FUN_004e02f8(param_2);
  }
  else {
    uVar3 = 0;
  }
  *param_1 = uVar3;
  *(bool *)(param_1 + 1) = bVar1;
  return;
}


// ===== 004c1b20  FUN_004c1b20 =====

void FUN_004c1b20(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = 0;
  plVar2 = (long *)FUN_004a2934();
  iVar1 = (**(code **)(*plVar2 + 0x98))(plVar2,param_2);
  if (iVar1 != 0) {
    __android_log_print(6,"DiscordJNI","Failed to push local frame");
  }
  *param_1 = iVar1 == 0;
  return;
}


// ===== 004c1b84  FUN_004c1b84 =====

void FUN_004c1b84(char *param_1)

{
  long *plVar1;
  
  if (*param_1 != '\0') {
    plVar1 = (long *)FUN_004a2934();
                    /* WARNING: Could not recover jumptable at 0x004c1ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa0))(plVar1,0);
    return;
  }
  return;
}


// ===== 004c1bb4  FUN_004c1bb4 =====

void FUN_004c1bb4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_0048288c();
  *param_1 = &PTR_FUN_00d1ef68;
  lVar1 = FUN_004c1c64(param_1,param_2);
  param_1[0x88] = 0;
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,lVar1);
    param_1[0x88] = uVar3;
  }
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_1[0x8d] = param_2[2];
  param_1[0x8c] = uVar4;
  param_1[0x8b] = uVar3;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  *param_2 = 0;
  param_1[0x90] = param_2[5];
  param_1[0x8f] = uVar4;
  param_1[0x8e] = uVar3;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  param_1[0x91] = param_2[6];
  return;
}


// ===== 004c1c64  FUN_004c1c64 =====

undefined8 FUN_004c1c64(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *__src;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 **__dest;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  
  __dest = &local_70;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  lVar6 = FUN_004a3c14();
  uVar7 = FUN_004a3b44();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined1 *)*param_2;
    uVar3 = param_2[1];
    if (uVar3 < 0x17) {
      local_60 = CONCAT17((char)uVar3,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_60 = uVar1 | 0x8000000000000000;
      local_70 = (undefined1 *)__dest;
      uStack_68 = uVar3;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar3 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar3 + 1);
  }
  else {
    uStack_68 = param_2[1];
    local_70 = (undefined1 *)*param_2;
    local_60 = param_2[2];
  }
  uVar8 = FUN_004a2934();
  uVar2 = *(undefined8 *)(lVar6 + 0xe8);
  uVar4 = *(undefined8 *)(lVar6 + 0xf0);
  uVar9 = FUN_004a3de8(&local_70);
  uVar7 = FUN_004b8418(uVar8,uVar4,uVar2,param_1,uVar7,uVar9);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c1dc4  FUN_004c1dc4 =====

void FUN_004c1dc4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  FUN_0048288c();
  lVar5 = *param_2;
  *param_2 = 0;
  *param_1 = &PTR_FUN_00d1ef68;
  lVar1 = FUN_004a3c14();
  uVar2 = FUN_004a3b44();
  uVar3 = FUN_004a2934();
  lVar1 = FUN_004b8418(uVar3,*(undefined8 *)(lVar1 + 0x100),*(undefined8 *)(lVar1 + 0xf8),param_1,
                       uVar2,lVar5);
  param_1[0x88] = 0;
  if (lVar1 != 0) {
    plVar4 = (long *)FUN_004a2934();
    uVar2 = (**(code **)(*plVar4 + 0xa8))(plVar4,lVar1);
    param_1[0x88] = uVar2;
  }
  if (lVar5 != 0) {
    plVar4 = (long *)FUN_004a2934();
    (**(code **)(*plVar4 + 0xb0))(plVar4,lVar5);
  }
  param_1[0x91] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  return;
}


// ===== 004c1e7c  FUN_004c1e7c =====

void FUN_004c1e7c(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x440) != 0) {
    lVar2 = FUN_004a3c14();
    uVar5 = *(undefined8 *)(param_1 + 0x440);
    uVar6 = *(undefined8 *)(lVar2 + 0x108);
    uVar3 = FUN_004a2934();
    FUN_004c2120(uVar3,uVar5,uVar6);
  }
  if (*(char *)(param_1 + 0x487) < '\0') {
    operator_delete(*(void **)(param_1 + 0x470));
    cVar1 = *(char *)(param_1 + 0x46f);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x46f);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 0x458));
    lVar2 = *(long *)(param_1 + 0x440);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x440);
  }
  if (lVar2 != 0) {
    plVar4 = (long *)FUN_004a2934();
    (**(code **)(*plVar4 + 0xb0))(plVar4,*(undefined8 *)(param_1 + 0x440));
    *(undefined8 *)(param_1 + 0x440) = 0;
  }
  FUN_004bc7c8(param_1);
  return;
}


// ===== 004c1f1c  FUN_004c1f1c =====

void FUN_004c1f1c(void *param_1)

{
  FUN_004c1e7c();
  operator_delete(param_1);
  return;
}


// ===== 004c1f40  FUN_004c1f40 =====

void FUN_004c1f40(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined8 *)(param_1 + 0x448) = *(undefined8 *)(param_1 + 0x390);
  if (*(long *)(param_1 + 0x440) != 0) {
    lVar4 = FUN_004a3c14();
    uVar6 = *(undefined8 *)(param_1 + 0x440);
    uVar1 = *(undefined4 *)(param_1 + 0x448);
    uVar2 = *(undefined4 *)(param_1 + 0x44c);
    uVar3 = *(undefined4 *)(param_1 + 0x398);
    uVar7 = *(undefined8 *)(lVar4 + 0x110);
    uVar5 = FUN_004a2934();
    FUN_004c2120(uVar5,uVar6,uVar7,uVar1,uVar2,uVar3);
    return;
  }
  return;
}


// ===== 004c1fc0  FUN_004c1fc0 =====

void FUN_004c1fc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long *local_200;
  undefined8 local_1f8;
  undefined1 auStack_1f0 [200];
  undefined1 auStack_128 [224];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x450) == param_6) {
    param_6 = FUN_0062587c();
  }
  else {
    *(long *)(param_1 + 0x450) = param_6;
  }
  FUN_004a2934();
  local_1f8 = param_2;
  uVar2 = FUN_004a2934();
  FUN_00ae9bec(&local_200,uVar2,&local_1f8);
  FUN_007beb5c(auStack_1f0);
  uVar2 = FUN_007bed3c(auStack_1f0,&local_200);
  uVar2 = FUN_007bedd8(uVar2,param_5);
  FUN_007beda8(uVar2,param_6 / 1000);
  FUN_007bebfc(auStack_128);
  FUN_007bebac(auStack_1f0);
  FUN_004bd05c(param_1,auStack_128);
  FUN_007bf020(auStack_128);
  if (local_200 != (long *)0x0) {
    (**(code **)(*local_200 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c20c8  FUN_004c20c8 =====

void FUN_004c20c8(long param_1,long param_2)

{
  FUN_00411394(param_1,param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x48c);
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}


// ===== 004c2104  Java_co_discord_media_1engine_NativeCapturerObserver_nativeOnFrame =====

void Java_co_discord_media_1engine_NativeCapturerObserver_nativeOnFrame
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  if (param_3 != 0) {
    FUN_004c1fc0(param_3,param_4,param_3,param_4,param_7,param_8);
    return;
  }
  return;
}


// ===== 004c2120  FUN_004c2120 =====

void FUN_004c2120(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
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
  
  ppuStack_68 = &local_70;
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*param_1 + 0x1f0))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c21bc  Java_com_discord_native_engine_NativeConnection_setDesktopSource =====

void Java_com_discord_native_engine_NativeConnection_setDesktopSource(void)

{
  return;
}


// ===== 004c21c0  Java_com_discord_native_engine_NativeConnection_configureConnectionRetries =====

void Java_com_discord_native_engine_NativeConnection_configureConnectionRetries
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  long *plVar1;
  ConnectionSettings *pCVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_498 [8];
  undefined8 local_490;
  code *local_480;
  undefined8 *local_478;
  undefined1 local_470;
  undefined8 local_468;
  code *local_458;
  undefined8 *local_450;
  undefined1 local_448;
  undefined4 local_440;
  undefined1 local_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  code *local_428;
  undefined8 *puStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined1 local_3b8;
  undefined2 local_3b0;
  undefined4 local_3ac;
  undefined1 local_3a8;
  undefined2 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined1 local_390;
  void *local_388;
  undefined8 uStack_380;
  long local_378;
  void *local_370;
  void *pvStack_368;
  undefined8 local_360;
  undefined1 local_358;
  undefined8 local_350;
  code *local_340;
  undefined8 *local_338;
  undefined1 local_330;
  undefined8 local_328;
  code *local_318;
  undefined8 *local_310;
  undefined1 local_308;
  undefined4 local_300;
  undefined1 local_2fc;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined4 local_2f0;
  undefined1 local_2ec;
  undefined1 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined7 local_187;
  undefined1 uStack_180;
  undefined8 uStack_17f;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined1 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_004c1850(auStack_498,param_1);
  lVar6 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar6 + 0x578);
  plVar7 = (long *)FUN_004a2934();
  puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x328))(plVar7,param_2,uVar9);
  pCVar2 = (ConnectionSettings *)*puVar8;
  plVar7 = (long *)puVar8[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (pCVar2 != (ConnectionSettings *)0x0) {
    local_480 = FUN_00442f08;
    local_478 = &DAT_001f1910;
    local_470 = 0;
    local_458 = FUN_0040dec4;
    local_450 = &DAT_001f1910;
    local_448 = 0;
    local_440 = 0;
    local_3d8 = 0;
    uStack_410 = 0;
    local_418 = 0;
    uStack_400 = 0;
    local_408 = 0;
    uStack_3f0 = 0;
    local_3f8 = 0;
    uStack_3e0 = 0;
    local_3e8 = 0;
    local_428 = FUN_004547f0;
    puStack_420 = &DAT_001f1910;
    local_43c = 0;
    uStack_430 = 0;
    local_438 = 0;
    uStack_380 = 0;
    local_388 = (void *)0x0;
    uStack_3d0 = 0;
    local_3c8 = 0;
    uStack_3c0 = 0;
    local_340 = FUN_0048870c;
    local_338 = &DAT_001f1910;
    local_3b8 = 0;
    local_3b0 = 0;
    local_3ac = 0;
    local_318 = FUN_00488718;
    local_310 = &DAT_001f1910;
    local_3a8 = 0;
    local_3a0 = 0;
    uStack_17f = 0;
    uStack_180 = 0;
    local_110 = &uStack_108;
    local_390 = 1;
    local_378 = 0;
    local_360 = 0;
    pvStack_368 = (void *)0x0;
    local_370 = (void *)0x0;
    local_358 = 0;
    local_330 = 0;
    local_308 = 0;
    local_300 = 0;
    local_2fc = 0;
    local_2f8 = 0;
    local_2f4 = 0;
    local_2f0 = 0;
    local_2ec = 0;
    local_2e8 = 1;
    uStack_2d8 = 0;
    local_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    local_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    local_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    local_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    local_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    local_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    local_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    local_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    local_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    local_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    local_187 = 0;
    uStack_190 = 0;
    local_158 = 0;
    local_160 = 0;
    uStack_168 = 0;
    local_170 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_97 = 0;
    local_90 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    uStack_9f = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_a7 = 0;
    local_b0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    local_88 = 0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_60 = 0;
    local_39c = param_3;
    local_398 = param_4;
    local_394 = param_5;
    discord::voice::Connection::ApplySettings(pCVar2);
    FUN_004379f4(&local_150);
    FUN_0043ba38(&local_2e0);
    if ((code *)local_310[1] != (code *)0x0) {
      (*(code *)local_310[1])(local_328);
    }
    if ((code *)local_338[1] != (code *)0x0) {
      (*(code *)local_338[1])(local_350);
    }
    if (local_370 != (void *)0x0) {
      pvStack_368 = local_370;
      operator_delete(local_370);
    }
    if (local_378 < 0) {
      operator_delete(local_388);
    }
    if ((code *)puStack_420[1] != (code *)0x0) {
      (*(code *)puStack_420[1])(local_438);
    }
    if ((code *)local_450[1] != (code *)0x0) {
      (*(code *)local_450[1])(local_468);
    }
    if ((code *)local_478[1] != (code *)0x0) {
      (*(code *)local_478[1])(local_490);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_004c1858(auStack_498);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c24e8  Java_com_discord_native_engine_NativeConnection_startBroadcast =====

void Java_com_discord_native_engine_NativeConnection_startBroadcast
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  Connection *this;
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_004c1850(auStack_50,param_1);
  lVar4 = FUN_004a3bd4();
  uVar8 = *(undefined8 *)(lVar4 + 0x578);
  plVar5 = (long *)FUN_004a2934();
  puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x328))(plVar5,param_2,uVar8);
  this = (Connection *)*puVar6;
  plVar5 = (long *)puVar6[1];
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (this != (Connection *)0x0) {
    local_58 = 0;
    if (param_3 != 0) {
      plVar7 = (long *)FUN_004a2934();
      local_58 = (**(code **)(*plVar7 + 0xa8))(plVar7,param_3);
    }
    discord::voice::Connection::SetDesktopSourceAndroid(this,&local_58);
    if (local_58 != 0) {
      plVar7 = (long *)FUN_004a2934();
      (**(code **)(*plVar7 + 0xb0))(plVar7,local_58);
      local_58 = 0;
    }
    uVar8 = *(undefined8 *)(param_4 + 0x10);
    if (*(long *)(param_4 + 0x18) != 0) {
      plVar7 = (long *)(*(long *)(param_4 + 0x18) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    discord::voice::Connection::SetSoundshareControllerAndroid(this,uVar8);
    discord::voice::Connection::SetVideoBroadcast(this,true);
  }
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 1;
    do {
      lVar4 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c2648  Java_com_discord_native_engine_NativeConnection_stopBroadcast =====

void Java_com_discord_native_engine_NativeConnection_stopBroadcast
               (undefined8 param_1,undefined8 param_2)

{
  Connection *this;
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar4 = FUN_004a3bd4();
  uVar8 = *(undefined8 *)(lVar4 + 0x578);
  plVar5 = (long *)FUN_004a2934();
  puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x328))(plVar5,param_2,uVar8);
  this = (Connection *)*puVar6;
  plVar5 = (long *)puVar6[1];
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (this != (Connection *)0x0) {
    local_48 = 0;
    discord::voice::Connection::SetDesktopSourceAndroid(this,&local_48);
    if (local_48 != 0) {
      plVar7 = (long *)FUN_004a2934();
      (**(code **)(*plVar7 + 0xb0))(plVar7,local_48);
      local_48 = 0;
    }
    discord::voice::Connection::SetVideoBroadcast(this,false);
  }
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 1;
    do {
      lVar4 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
    }
  }
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c2758  Java_com_discord_native_engine_NativeConnection_getEncryptionModes =====

void Java_com_discord_native_engine_NativeConnection_getEncryptionModes
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  Connection *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar5 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar9);
  pCVar1 = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 != (Connection *)0x0) {
    if (param_3 != 0) {
      plVar8 = (long *)FUN_004a2934();
      param_3 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_3);
    }
    local_48 = FUN_004c93a0;
    local_40 = &PTR_FUN_00d1f010;
    local_58[0] = (long *)operator_new(8);
    *local_58[0] = param_3;
    discord::voice::Connection::GetEncryptionModes(pCVar1,local_58);
    if ((code *)local_40[1] != (code *)0x0) {
      (*(code *)local_40[1])(local_58[0]);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c2890  Java_com_discord_native_engine_NativeConnection_setTransportOptions  [FAILED] =====
/* decompilation failed: Exception while decompiling 004c2890: process: timeout
 */

// ===== 004c4940  FUN_004c4940 =====

void FUN_004c4940(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_004e1714();
  if ((uVar1 & 1) != 0) {
    FUN_004e12e0(param_2,param_3);
    FUN_004c191c(param_1);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  return;
}


// ===== 004c49a0  Java_com_discord_native_engine_NativeConnection_mergeUsers =====

/* WARNING: Removing unreachable block (ram,0x004c54b4) */
/* WARNING: Removing unreachable block (ram,0x004c4fd8) */
/* WARNING: Removing unreachable block (ram,0x004c54c0) */
/* WARNING: Removing unreachable block (ram,0x004c55ac) */
/* WARNING: Removing unreachable block (ram,0x004c54d0) */
/* WARNING: Removing unreachable block (ram,0x004c4fe4) */
/* WARNING: Removing unreachable block (ram,0x004c54ec) */
/* WARNING: Removing unreachable block (ram,0x004c54f8) */
/* WARNING: Removing unreachable block (ram,0x004c5504) */
/* WARNING: Removing unreachable block (ram,0x004c4cfc) */
/* WARNING: Removing unreachable block (ram,0x004c51e8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Java_com_discord_native_engine_NativeConnection_mergeUsers
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *******__src;
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  void *pvVar17;
  undefined4 *puVar18;
  undefined8 *******__dest;
  void *pvVar19;
  bool bVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  int iVar30;
  undefined8 uVar31;
  undefined8 *puVar32;
  undefined4 *puVar33;
  undefined8 *puVar35;
  undefined8 uVar36;
  long *plVar37;
  undefined8 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined8 *puVar41;
  undefined8 *local_280;
  undefined8 *******local_270;
  ulong uStack_268;
  undefined8 local_260;
  undefined1 auStack_258 [8];
  void *local_250 [2];
  char local_239;
  undefined2 local_238;
  undefined1 auStack_230 [40];
  undefined4 *local_208;
  undefined4 *local_200;
  undefined4 *local_1f8;
  void *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  ulong local_1b8;
  long local_1b0;
  void *local_1a8;
  char local_191;
  void *local_168;
  char local_151;
  undefined4 local_148;
  char local_144;
  undefined4 local_140;
  char local_13c;
  undefined4 local_138;
  char local_134;
  undefined4 local_130;
  char local_12c;
  undefined4 local_128;
  char local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined4 local_a1;
  undefined7 local_98;
  byte bStack_91;
  undefined7 uStack_90;
  long local_88;
  undefined4 *puVar34;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_258,param_1);
  uVar9 = uStack_b0._7_1_;
  uVar27 = uStack_f8;
  uVar38 = uStack_b0;
  uStack_b0._7_1_ = uVar9;
  lVar13 = FUN_004a3bd4();
  uStack_f8 = uVar27;
  uVar9 = uStack_b0._7_1_;
  uVar27 = uStack_f8;
  uVar31 = *(undefined8 *)(lVar13 + 0x578);
  uVar38 = uStack_b0;
  uStack_b0._7_1_ = uVar9;
  plVar14 = (long *)FUN_004a2934();
  uStack_f8 = uVar27;
  uVar9 = uStack_b0._7_1_;
  uVar27 = uStack_f8;
  uVar38 = uStack_b0;
  uStack_b0._7_1_ = uVar9;
  plVar14 = (long *)(**(code **)(*plVar14 + 0x328))(plVar14,param_2,uVar31);
  uStack_f8 = uVar27;
  uVar9 = uStack_b0._7_1_;
  uVar27 = uStack_f8;
  lVar13 = *plVar14;
  plVar14 = (long *)plVar14[1];
  if (plVar14 != (long *)0x0) {
    plVar37 = plVar14 + 1;
    do {
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar20) {
        *plVar37 = *plVar37 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar38 = uStack_b0;
  if (lVar13 != 0) {
    uStack_b0._7_1_ = uVar9;
    FUN_004a3c54(local_250,param_3);
    uStack_f8 = uVar27;
    uVar38 = uStack_b0;
    uVar27 = uStack_f8;
    FUN_004d9768(&local_208);
    uStack_b0 = uVar38;
    uStack_f8 = uVar27;
    uVar38 = uStack_b0;
    uVar27 = uStack_f8;
    FUN_004df134(auStack_230,0);
    uStack_b0 = uVar38;
    uStack_f8 = uVar27;
    uVar38 = uStack_b0;
    uVar27 = uStack_f8;
    uVar15 = FUN_004d9798(&local_208,local_250,auStack_230,0);
    uStack_b0 = uVar38;
    uStack_f8 = uVar27;
    uVar38 = uStack_b0;
    uVar27 = uStack_f8;
    uVar9 = uStack_f8._7_1_;
    uVar40 = uStack_b0._7_1_;
    if (((uVar15 & 1) == 0) ||
       (uVar15 = FUN_004e05c4(auStack_230), uStack_b0 = uVar38, uStack_f8 = uVar27,
       uVar40 = uStack_b0._7_1_, uVar9 = uStack_f8._7_1_, uVar27 = uStack_f8, uVar38 = uStack_b0,
       (uVar15 & 1) == 0)) {
      uStack_b0._7_1_ = uVar40;
      uStack_f8._7_1_ = uVar9;
      uStack_b0 = uVar38;
      uStack_f8 = uVar27;
      uVar40 = uStack_b0._7_1_;
      uVar9 = uStack_f8._7_1_;
      puVar16 = (undefined8 *)0x0;
      puVar35 = (undefined8 *)0x0;
      bVar20 = true;
      uVar27 = uStack_f8;
      uVar38 = uStack_b0;
      uStack_f8._7_1_ = uVar9;
      uStack_b0._7_1_ = uVar40;
    }
    else {
      uStack_f8._7_1_ = uVar9;
      uStack_b0._7_1_ = uVar40;
      uVar11 = FUN_004e04c8(auStack_230);
      uVar38 = uStack_b0;
      uVar27 = uStack_f8;
      if (uVar11 == 0) {
        puVar16 = (undefined8 *)0x0;
        local_280 = (undefined8 *)0x0;
      }
      else {
        puVar16 = (undefined8 *)operator_new((ulong)uVar11 * 0x50);
        uStack_b0 = uVar38;
        uStack_f8 = uVar27;
        uVar38 = uStack_b0;
        uVar27 = uStack_f8;
        local_280 = puVar16 + (ulong)uVar11 * 10;
      }
      uStack_b0 = uVar38;
      uStack_f8 = uVar27;
      uVar40 = uStack_b0._7_1_;
      uVar9 = uStack_f8._7_1_;
      uVar27 = uStack_f8;
      uStack_f8._7_1_ = uVar9;
      uVar38 = uStack_b0;
      uStack_b0._7_1_ = uVar40;
      iVar12 = FUN_004e04c8(auStack_230);
      uVar38 = uStack_b0;
      uVar27 = uStack_f8;
      if (iVar12 == 0) {
        bVar20 = false;
        puVar35 = puVar16;
      }
      else {
        iVar30 = 0;
        puVar32 = puVar16;
        uVar9 = uStack_f8._7_1_;
        uVar40 = uStack_b0._7_1_;
        do {
          uStack_b0._7_1_ = uVar40;
          uStack_f8._7_1_ = uVar9;
          uStack_b0 = uVar38;
          uStack_f8 = uVar27;
          uVar40 = uStack_b0._7_1_;
          uVar9 = uStack_f8._7_1_;
          uVar27 = uStack_f8;
          uStack_f8._7_1_ = uVar9;
          uVar38 = uStack_b0;
          uStack_b0._7_1_ = uVar40;
          uVar15 = FUN_004e119c(auStack_230,iVar30);
          uVar38 = uStack_b0;
          uVar27 = uStack_f8;
          if ((uVar15 & 1) == 0) {
LAB_004c4ff0:
            uStack_f8 = uVar27;
            uVar9 = uStack_f8._7_1_;
            uVar38 = 0;
            uVar39 = 0;
            uVar27 = 0;
            uVar31 = 0;
            uVar29 = 0;
            uVar36 = 0;
            uVar40 = 0;
            uStack_b0._7_1_ = 0;
            uStack_a8 = 0;
            uStack_90 = 0;
            bStack_91 = 0;
            local_a1 = 0;
            uVar8 = local_f0;
            uVar7 = 0;
          }
          else {
            uVar9 = uStack_f8._7_1_;
            uStack_f8 = uVar27;
            uVar40 = uStack_b0._7_1_;
            uStack_b0 = uVar38;
            uVar27 = uStack_f8;
            uStack_f8._7_1_ = uVar9;
            uVar38 = uStack_b0;
            uStack_b0._7_1_ = uVar40;
            uVar31 = FUN_004e09f8(auStack_230,iVar30);
            uVar9 = uStack_b0._7_1_;
            uVar27 = uStack_f8;
            uVar40 = uStack_f8._7_1_;
            uStack_f8 = uVar27;
            uVar27 = uStack_f8;
            uStack_f8._7_1_ = uVar40;
            uVar38 = uStack_b0;
            uStack_b0._7_1_ = uVar9;
            uVar15 = FUN_004e05d4();
            uVar9 = uStack_b0._7_1_;
            uVar27 = uStack_f8;
            if ((((uVar15 & 1) == 0) ||
                (uVar40 = uStack_f8._7_1_, uStack_f8 = uVar27, uVar27 = uStack_f8,
                uStack_f8._7_1_ = uVar40, uVar38 = uStack_b0, uStack_b0._7_1_ = uVar9,
                uVar15 = FUN_004e1714(uVar31,&DAT_0019cad0), uVar38 = uStack_b0, uVar27 = uStack_f8,
                (uVar15 & 1) == 0)) ||
               ((uVar9 = uStack_f8._7_1_, uStack_f8 = uVar27, uVar40 = uStack_b0._7_1_,
                uStack_b0 = uVar38, uVar27 = uStack_f8, uStack_f8._7_1_ = uVar9, uVar38 = uStack_b0,
                uStack_b0._7_1_ = uVar40, uVar15 = FUN_004e1714(uVar31,"audioSsrc"),
                uVar38 = uStack_b0, uVar27 = uStack_f8, (uVar15 & 1) == 0 &&
                (uVar9 = uStack_f8._7_1_, uStack_f8 = uVar27, uVar40 = uStack_b0._7_1_,
                uStack_b0 = uVar38, uVar27 = uStack_f8, uStack_f8._7_1_ = uVar9, uVar38 = uStack_b0,
                uStack_b0._7_1_ = uVar40, uVar15 = FUN_004e1714(uVar31,&DAT_001c7baf),
                uVar38 = uStack_b0, uVar27 = uStack_f8, (uVar15 & 1) == 0)))) goto LAB_004c4ff0;
            uStack_b0 = uVar38;
            uStack_f8 = uVar27;
            uVar40 = uStack_b0._7_1_;
            uVar9 = uStack_f8._7_1_;
            uVar27 = uStack_f8;
            uStack_f8._7_1_ = uVar9;
            uVar38 = uStack_b0;
            uStack_b0._7_1_ = uVar40;
            uVar15 = FUN_004e1714(uVar31,&DAT_0019cad0);
            uVar38 = uStack_b0;
            uVar27 = uStack_f8;
            if ((uVar15 & 1) == 0) {
              local_120 = 0;
              uStack_118 = 0;
              local_108 = 0;
              local_110 = 0;
            }
            else {
              uVar9 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar40 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = uVar9;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar40;
              FUN_004e12e0(uVar31,&DAT_0019cad0);
              uVar38 = uStack_b0;
              uVar27 = uStack_f8;
              uVar9 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar40 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = uVar9;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar40;
              FUN_004c191c(&local_120);
              uVar38 = uStack_b0;
            }
            uStack_b0 = uVar38;
            uVar9 = uStack_b0._7_1_;
            uStack_f8._7_1_ = (byte)((ulong)uStack_118 >> 0x38);
            local_100 = local_120;
            local_f0 = local_110;
            bVar6 = uStack_f8._7_1_;
            uStack_f8 = uStack_118;
            uVar27 = uStack_f8;
            uStack_f8._7_1_ = bVar6;
            uVar38 = uStack_b0;
            uStack_b0._7_1_ = uVar9;
            uVar15 = FUN_004e1714(uVar31,&DAT_001c7baf);
            uVar38 = uStack_b0;
            uVar27 = uStack_f8;
            if ((uVar15 & 1) == 0) {
              local_128 = 0;
              local_124 = '\0';
            }
            else {
              bVar6 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar9 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = bVar6;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar9;
              FUN_004e12e0(uVar31,&DAT_001c7baf);
              uVar38 = uStack_b0;
              uVar27 = uStack_f8;
              bVar6 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar9 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = bVar6;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar9;
              FUN_004c1a48(&local_128);
              uVar38 = uStack_b0;
              uVar27 = uStack_f8;
            }
            uStack_b0 = uVar38;
            uStack_f8 = uVar27;
            uVar9 = uStack_b0._7_1_;
            bVar6 = uStack_f8._7_1_;
            uVar27 = uStack_f8;
            uStack_f8._7_1_ = bVar6;
            uVar38 = uStack_b0;
            uStack_b0._7_1_ = uVar9;
            uVar15 = FUN_004e1714(uVar31,"audioSSsrc");
            uVar38 = uStack_b0;
            uVar27 = uStack_f8;
            if ((uVar15 & 1) == 0) {
              local_130 = 0;
              local_12c = '\0';
              local_e8 = 0;
            }
            else {
              bVar6 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar9 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = bVar6;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar9;
              FUN_004e12e0(uVar31,"audioSSsrc");
              uVar38 = uStack_b0;
              uVar27 = uStack_f8;
              bVar6 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar9 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = bVar6;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar9;
              FUN_004c1a48(&local_130);
              uVar38 = uStack_b0;
              uVar27 = uStack_f8;
              local_e8 = 0;
              if (local_12c != '\0') {
                local_e8 = local_130;
              }
            }
            uStack_b0 = uVar38;
            uStack_f8 = uVar27;
            uVar9 = uStack_b0._7_1_;
            bVar6 = uStack_f8._7_1_;
            if (local_124 != '\0') {
              local_e8 = local_128;
            }
            uVar27 = uStack_f8;
            uStack_f8._7_1_ = bVar6;
            uVar38 = uStack_b0;
            uStack_b0._7_1_ = uVar9;
            uVar15 = FUN_004e1714(uVar31,"videoSsrc");
            uVar38 = uStack_b0;
            uVar27 = uStack_f8;
            if ((uVar15 & 1) == 0) {
              uStack_e4 = 0;
              local_138 = 0;
              local_134 = '\0';
            }
            else {
              bVar6 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar9 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = bVar6;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar9;
              FUN_004e12e0(uVar31,"videoSsrc");
              uVar38 = uStack_b0;
              uVar27 = uStack_f8;
              bVar6 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar9 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = bVar6;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar9;
              FUN_004c1a48(&local_138);
              uVar38 = uStack_b0;
              uVar27 = uStack_f8;
              uStack_e4 = 0;
              if (local_134 != '\0') {
                uStack_e4 = local_138;
              }
            }
            uStack_b0 = uVar38;
            uStack_f8 = uVar27;
            uVar9 = uStack_b0._7_1_;
            bVar6 = uStack_f8._7_1_;
            uVar27 = uStack_f8;
            uStack_f8._7_1_ = bVar6;
            uVar38 = uStack_b0;
            uStack_b0._7_1_ = uVar9;
            uVar15 = FUN_004e1714(uVar31,"videoSsrcs");
            uVar38 = uStack_b0;
            uVar27 = uStack_f8;
            if ((uVar15 & 1) == 0) {
              local_e0 = 0;
              local_d8 = 0;
              local_c8 = 0;
              local_d0 = 0;
            }
            else {
              bVar6 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar9 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = bVar6;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar9;
              FUN_004e12e0(uVar31,"videoSsrcs");
              uVar38 = uStack_b0;
              uVar27 = uStack_f8;
              bVar6 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar9 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = bVar6;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar9;
              FUN_004cbe10(&local_e0);
              uVar38 = uStack_b0;
              uVar27 = uStack_f8;
            }
            uStack_b0 = uVar38;
            uStack_f8 = uVar27;
            uVar9 = uStack_b0._7_1_;
            bVar6 = uStack_f8._7_1_;
            uVar27 = uStack_f8;
            uStack_f8._7_1_ = bVar6;
            uVar38 = uStack_b0;
            uStack_b0._7_1_ = uVar9;
            uVar15 = FUN_004e1714(uVar31,"rtxSsrc");
            uVar38 = uStack_b0;
            uVar27 = uStack_f8;
            if ((uVar15 & 1) == 0) {
              local_c0 = 0;
              local_140 = 0;
              local_13c = '\0';
            }
            else {
              bVar6 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar9 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = bVar6;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar9;
              FUN_004e12e0(uVar31,"rtxSsrc");
              uVar38 = uStack_b0;
              uVar27 = uStack_f8;
              bVar6 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar9 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = bVar6;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar9;
              FUN_004c1a48(&local_140);
              uVar38 = uStack_b0;
              uVar27 = uStack_f8;
              local_c0 = 0;
              if (local_13c != '\0') {
                local_c0 = local_140;
              }
            }
            uStack_b0 = uVar38;
            uStack_f8 = uVar27;
            uVar9 = uStack_b0._7_1_;
            bVar6 = uStack_f8._7_1_;
            uVar27 = uStack_f8;
            uStack_f8._7_1_ = bVar6;
            uVar38 = uStack_b0;
            uStack_b0._7_1_ = uVar9;
            uVar15 = FUN_004e1714(uVar31,&DAT_001c2118);
            uVar38 = uStack_b0;
            uVar27 = uStack_f8;
            if ((uVar15 & 1) == 0) {
              bVar20 = false;
              local_238 = 0;
            }
            else {
              bVar6 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar9 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = bVar6;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar9;
              FUN_004e12e0(uVar31,&DAT_001c2118);
              uVar38 = uStack_b0;
              uVar27 = uStack_f8;
              bVar6 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar9 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = bVar6;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar9;
              FUN_004c18d0(&local_238);
              uVar38 = uStack_b0;
              uVar27 = uStack_f8;
              bVar20 = local_238._1_1_ != '\0' && (char)local_238 != '\0';
            }
            uStack_b0 = uVar38;
            uStack_f8 = uVar27;
            uVar9 = uStack_b0._7_1_;
            bVar6 = uStack_f8._7_1_;
            uStack_bc = CONCAT31(uStack_bc._1_3_,bVar20);
            uVar27 = uStack_f8;
            uStack_f8._7_1_ = bVar6;
            uVar38 = uStack_b0;
            uStack_b0._7_1_ = uVar9;
            uVar15 = FUN_004e1714(uVar31,"volume");
            uVar38 = uStack_b0;
            uVar27 = uStack_f8;
            uVar2 = 0;
            if ((uVar15 & 1) != 0) {
              bVar6 = uStack_f8._7_1_;
              uStack_f8 = uVar27;
              uVar9 = uStack_b0._7_1_;
              uStack_b0 = uVar38;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = bVar6;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar9;
              FUN_004e12e0(uVar31,"volume");
              uVar9 = uStack_b0._7_1_;
              bVar6 = uStack_f8._7_1_;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = bVar6;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar9;
              FUN_004c1ad8(&local_148);
              uVar38 = uStack_b0;
              uVar2 = 0;
              if (local_144 != '\0') {
                uVar2 = local_148;
              }
            }
            local_b8 = uVar2;
            uStack_b0 = uVar38;
            uVar7 = uStack_b0;
            uVar40 = local_c8;
            uVar36 = local_d0;
            uVar29 = local_d8;
            uVar31 = local_e0;
            bStack_91 = uStack_f8._7_1_;
            uVar38 = local_100;
            uVar27 = CONCAT44(uStack_e4,local_e8);
            local_e0 = 0;
            local_d8 = 0;
            local_d0 = 0;
            uStack_f8 = 0;
            uStack_f8._7_1_ = 0;
            uStack_90 = (undefined7)local_f0;
            local_100 = 0;
            local_c8 = 0;
            uStack_b0._7_1_ = (undefined1)local_c0;
            uVar8 = 0;
            local_a1 = local_b8;
            uVar39 = local_f0._7_1_;
            uVar9 = uStack_f8._7_1_;
          }
          uStack_f8._7_1_ = uVar9;
          uStack_b0 = uVar7;
          local_f0 = uVar8;
          uVar10 = uStack_b0._7_1_;
          uVar9 = uStack_f8._7_1_;
          local_98 = 0;
          uStack_f8._7_1_ = uVar9;
          uStack_b0._7_1_ = uVar10;
          if (puVar16 < local_280) {
            if (puVar16 == (undefined8 *)0x0) {
LAB_004c5574:
              uVar27 = uStack_f8;
              uVar38 = uStack_b0;
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                         ,0x23,"__location != nullptr","null pointer given to construct_at");
            }
            *puVar16 = uVar38;
            puVar16[3] = uVar27;
            puVar16[4] = uVar31;
            *(undefined1 *)((long)puVar16 + 0x17) = uVar39;
            puVar16[5] = uVar29;
            puVar16[6] = uVar36;
            puVar16[1] = (ulong)bStack_91 << 0x38;
            *(undefined1 *)(puVar16 + 7) = uVar40;
            *(ulong *)((long)puVar16 + 0xf) = CONCAT71(uStack_90,bStack_91);
            puVar16[8] = CONCAT71(uStack_a8,uVar10);
            *(undefined4 *)(puVar16 + 9) = local_a1;
            puVar35 = puVar32;
            puVar41 = puVar16;
            uVar27 = uStack_f8;
            uVar38 = uStack_b0;
          }
          else {
            lVar23 = (long)puVar16 - (long)puVar32 >> 4;
            uVar15 = lVar23 * -0x3333333333333333 + 1;
            if (0x333333333333333 < uVar15) {
              uVar27 = uStack_f8;
              uVar38 = uStack_b0;
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar21 = (long)local_280 - (long)puVar32 >> 4;
            uVar25 = lVar21 * -0x6666666666666666;
            if (uVar25 < uVar15 || uVar25 - uVar15 == 0) {
              uVar25 = uVar15;
            }
            if (0x199999999999998 < (ulong)(lVar21 * -0x3333333333333333)) {
              uVar25 = 0x333333333333333;
            }
            if (uVar25 == 0) goto LAB_004c5574;
            if (0x333333333333333 < uVar25) {
              uVar27 = uStack_f8;
              uVar38 = uStack_b0;
                    /* WARNING: Subroutine does not return */
              FUN_00401ad4();
            }
            uVar7 = uStack_f8;
            uVar8 = uStack_b0;
            pvVar17 = operator_new(uVar25 * 0x50);
            uVar8 = uStack_b0;
            uVar7 = uStack_f8;
            puVar41 = (undefined8 *)((long)pvVar17 + lVar23 * 0x10);
            *puVar41 = uVar38;
            puVar41[1] = CONCAT17(bStack_91,local_98);
            uVar38 = CONCAT71(uStack_90,bStack_91);
            local_98 = 0;
            bStack_91 = 0;
            uStack_90 = 0;
            *(undefined8 *)((long)puVar41 + 0xf) = uVar38;
            *(undefined1 *)((long)puVar41 + 0x17) = uVar39;
            puVar41[3] = uVar27;
            puVar41[4] = uVar31;
            puVar41[5] = uVar29;
            puVar41[6] = uVar36;
            *(undefined1 *)(puVar41 + 7) = uVar40;
            puVar41[8] = CONCAT71(uStack_a8,uStack_b0._7_1_);
            *(undefined4 *)(puVar41 + 9) = local_a1;
            puVar35 = puVar41;
            if (puVar16 != puVar32) {
              lVar23 = 0;
              do {
                lVar21 = lVar23 + -0x50;
                uVar38 = *(undefined8 *)((long)puVar16 + lVar23 + -0x48);
                uVar27 = *(undefined8 *)((long)puVar16 + lVar23 + -0x50);
                *(undefined8 *)((long)puVar41 + lVar23 + -0x40) =
                     *(undefined8 *)((long)puVar16 + lVar23 + -0x40);
                *(undefined8 *)((long)puVar41 + lVar23 + -0x48) = uVar38;
                *(undefined8 *)((long)puVar41 + lVar23 + -0x50) = uVar27;
                *(undefined8 *)((long)puVar16 + lVar23 + -0x48) = 0;
                *(undefined8 *)((long)puVar16 + lVar23 + -0x40) = 0;
                *(undefined8 *)((long)puVar16 + lVar23 + -0x50) = 0;
                *(undefined8 *)((long)puVar41 + lVar23 + -0x38) =
                     *(undefined8 *)((long)puVar16 + lVar23 + -0x38);
                uVar27 = *(undefined8 *)((long)puVar16 + lVar23 + -0x30);
                *(undefined8 *)((long)puVar41 + lVar23 + -0x28) =
                     *(undefined8 *)((long)puVar16 + lVar23 + -0x28);
                *(undefined8 *)((long)puVar41 + lVar23 + -0x30) = uVar27;
                *(undefined8 *)((long)puVar41 + lVar23 + -0x20) =
                     *(undefined8 *)((long)puVar16 + lVar23 + -0x20);
                *(undefined8 *)((long)puVar16 + lVar23 + -0x28) = 0;
                *(undefined8 *)((long)puVar16 + lVar23 + -0x20) = 0;
                *(undefined8 *)((long)puVar16 + lVar23 + -0x30) = 0;
                *(undefined1 *)((long)puVar41 + lVar23 + -0x18) =
                     *(undefined1 *)((long)puVar16 + lVar23 + -0x18);
                *(undefined1 *)((long)puVar16 + lVar23 + -0x18) = 0;
                uVar27 = *(undefined8 *)((long)puVar16 + lVar23 + -0x10);
                *(undefined4 *)((long)puVar41 + lVar23 + -8) =
                     *(undefined4 *)((long)puVar16 + lVar23 + -8);
                *(undefined8 *)((long)puVar41 + lVar23 + -0x10) = uVar27;
                lVar23 = lVar21;
              } while ((undefined8 *)((long)puVar16 + lVar21) != puVar32);
              puVar35 = (undefined8 *)((long)puVar41 + lVar21);
              do {
                uStack_b0 = uVar8;
                uStack_f8 = uVar7;
                uVar40 = uStack_b0._7_1_;
                uVar9 = uStack_f8._7_1_;
                pvVar19 = (void *)puVar16[-6];
                if (pvVar19 != (void *)0x0) {
                  puVar16[-5] = pvVar19;
                  uVar27 = uStack_f8;
                  uStack_f8._7_1_ = uVar9;
                  uVar38 = uStack_b0;
                  uStack_b0._7_1_ = uVar40;
                  operator_delete(pvVar19);
                }
                puVar16 = puVar16 + -10;
                uVar7 = uStack_f8;
                uVar8 = uStack_b0;
              } while (puVar16 != puVar32);
            }
            uStack_b0 = uVar8;
            uStack_f8 = uVar7;
            uVar10 = uStack_b0._7_1_;
            uVar9 = uStack_f8._7_1_;
            local_280 = (undefined8 *)((long)pvVar17 + uVar25 * 0x50);
            uVar27 = uStack_f8;
            uVar38 = uStack_b0;
            if (puVar32 != (undefined8 *)0x0) {
              uStack_f8._7_1_ = uVar9;
              uStack_b0._7_1_ = uVar10;
              operator_delete(puVar32);
              uVar38 = uStack_b0;
              uVar27 = uStack_f8;
              uVar9 = uStack_f8._7_1_;
              uVar10 = uStack_b0._7_1_;
            }
          }
          uStack_b0._7_1_ = uVar10;
          uStack_f8._7_1_ = uVar9;
          uStack_b0 = uVar38;
          uStack_f8 = uVar27;
          uVar40 = uStack_b0._7_1_;
          uVar9 = uStack_f8._7_1_;
          puVar16 = puVar41 + 10;
          iVar30 = iVar30 + 1;
          puVar32 = puVar35;
          uVar27 = uStack_f8;
          uVar38 = uStack_b0;
        } while (iVar30 != iVar12);
        bVar20 = false;
        uStack_f8._7_1_ = uVar9;
        uStack_b0._7_1_ = uVar40;
      }
    }
    uStack_b0 = uVar38;
    uStack_f8 = uVar27;
    uVar40 = uStack_b0._7_1_;
    uVar9 = uStack_f8._7_1_;
    uVar27 = uStack_f8;
    uStack_f8._7_1_ = uVar9;
    uVar38 = uStack_b0;
    uStack_b0._7_1_ = uVar40;
    FUN_004df880(auStack_230);
    uVar38 = uStack_b0;
    uVar27 = uStack_f8;
    if (local_151 < '\0') {
      uVar9 = uStack_f8._7_1_;
      uStack_f8 = uVar27;
      uVar40 = uStack_b0._7_1_;
      uStack_b0 = uVar38;
      uVar27 = uStack_f8;
      uStack_f8._7_1_ = uVar9;
      uVar38 = uStack_b0;
      uStack_b0._7_1_ = uVar40;
      operator_delete(local_168);
      uVar38 = uStack_b0;
      uVar27 = uStack_f8;
    }
    if (local_191 < '\0') {
      uStack_f8._7_1_ = (byte)((ulong)uVar27 >> 0x38);
      uStack_b0._7_1_ = (undefined1)((ulong)uVar38 >> 0x38);
      uVar9 = uStack_f8._7_1_;
      uStack_f8 = uVar27;
      uVar40 = uStack_b0._7_1_;
      uStack_b0 = uVar38;
      uVar27 = uStack_f8;
      uStack_f8._7_1_ = uVar9;
      uVar38 = uStack_b0;
      uStack_b0._7_1_ = uVar40;
      operator_delete(local_1a8);
      uVar38 = uStack_b0;
      uVar27 = uStack_f8;
    }
    uStack_b0 = uVar38;
    uStack_f8 = uVar27;
    uVar40 = uStack_b0._7_1_;
    uVar9 = uStack_f8._7_1_;
    puVar32 = local_1d0;
    if (local_1c8 != local_1d0) {
      uVar15 = local_1b0 + local_1b8;
      plVar37 = local_1d0 + local_1b8 / 0x49;
      lVar26 = local_1d0[uVar15 / 0x49];
      lVar21 = *plVar37;
      lVar23 = lVar21 + (local_1b8 % 0x49) * 0x38;
      puVar32 = local_1c8;
      while (local_1c8 = puVar32, lVar23 != lVar26 + (uVar15 % 0x49) * 0x38) {
        uStack_f8._7_1_ = uVar9;
        uStack_b0._7_1_ = uVar40;
        if (lVar23 == 0) {
          uVar27 = uStack_f8;
          uVar38 = uStack_b0;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
        }
        uVar27 = uStack_f8;
        uVar38 = uStack_b0;
        if (*(char *)(lVar23 + 0x2f) < '\0') {
          operator_delete(*(void **)(lVar23 + 0x18));
          uVar38 = uStack_b0;
          uVar27 = uStack_f8;
          lVar21 = *plVar37;
          uVar9 = uStack_f8._7_1_;
          uVar40 = uStack_b0._7_1_;
        }
        uStack_b0._7_1_ = uVar40;
        uStack_f8._7_1_ = uVar9;
        uStack_b0 = uVar38;
        uStack_f8 = uVar27;
        uVar40 = uStack_b0._7_1_;
        uVar9 = uStack_f8._7_1_;
        lVar23 = lVar23 + 0x38;
        puVar32 = local_1c8;
        if (lVar23 - lVar21 == 0xff8) {
          plVar37 = plVar37 + 1;
          lVar21 = *plVar37;
          lVar23 = lVar21;
        }
      }
    }
    uVar15 = (long)puVar32 - (long)local_1d0;
    local_1b0 = 0;
    uVar27 = uStack_f8;
    uVar38 = uStack_b0;
    while( true ) {
      uStack_f8._7_1_ = (byte)((ulong)uVar27 >> 0x38);
      uStack_b0._7_1_ = (undefined1)((ulong)uVar38 >> 0x38);
      if (uVar15 < 0x11) break;
      uVar9 = uStack_f8._7_1_;
      uStack_f8 = uVar27;
      uVar40 = uStack_b0._7_1_;
      uStack_b0 = uVar38;
      uVar27 = uStack_f8;
      uStack_f8._7_1_ = uVar9;
      uVar38 = uStack_b0;
      uStack_b0._7_1_ = uVar40;
      operator_delete((void *)*local_1d0);
      uVar38 = uStack_b0;
      uVar27 = uStack_f8;
      local_1d0 = local_1d0 + 1;
      uVar15 = (long)local_1c8 - (long)local_1d0;
      puVar32 = local_1c8;
    }
    if (uVar15 >> 3 == 1) {
      local_1b8 = 0x24;
    }
    else if (uVar15 >> 3 == 2) {
      local_1b8 = 0x49;
    }
    puVar41 = local_1d0;
    if (local_1d0 != puVar32) {
      do {
        uStack_b0 = uVar38;
        uStack_f8 = uVar27;
        uVar40 = uStack_b0._7_1_;
        uVar9 = uStack_f8._7_1_;
        puVar28 = puVar41 + 1;
        uVar27 = uStack_f8;
        uStack_f8._7_1_ = uVar9;
        uVar38 = uStack_b0;
        uStack_b0._7_1_ = uVar40;
        operator_delete((void *)*puVar41);
        uVar38 = uStack_b0;
        uVar27 = uStack_f8;
        puVar41 = puVar28;
      } while (puVar28 != puVar32);
      if (local_1c8 != local_1d0) {
        local_1c8 = (undefined8 *)
                    ((long)local_1c8 +
                    ((long)local_1d0 + (7 - (long)local_1c8) & 0xfffffffffffffff8U));
      }
    }
    uStack_b0 = uVar38;
    uStack_f8 = uVar27;
    uVar40 = uStack_b0._7_1_;
    uVar9 = uStack_f8._7_1_;
    uVar27 = uStack_f8;
    uVar38 = uStack_b0;
    if (local_1d8 != (void *)0x0) {
      uStack_f8._7_1_ = uVar9;
      uStack_b0._7_1_ = uVar40;
      operator_delete(local_1d8);
      uVar38 = uStack_b0;
      uVar27 = uStack_f8;
      uVar9 = uStack_f8._7_1_;
      uVar40 = uStack_b0._7_1_;
    }
    uStack_b0._7_1_ = uVar40;
    uStack_f8._7_1_ = uVar9;
    uStack_b0 = uVar38;
    uStack_f8 = uVar27;
    uVar40 = uStack_b0._7_1_;
    uVar9 = uStack_f8._7_1_;
    uVar27 = uStack_f8;
    uStack_f8._7_1_ = uVar9;
    uVar38 = uStack_b0;
    uStack_b0._7_1_ = uVar40;
    FUN_004491b8(&local_208);
    uVar38 = uStack_b0;
    uVar27 = uStack_f8;
    if (local_239 < '\0') {
      uVar9 = uStack_f8._7_1_;
      uStack_f8 = uVar27;
      uVar40 = uStack_b0._7_1_;
      uStack_b0 = uVar38;
      uVar27 = uStack_f8;
      uStack_f8._7_1_ = uVar9;
      uVar38 = uStack_b0;
      uStack_b0._7_1_ = uVar40;
      operator_delete(local_250[0]);
      uVar38 = uStack_b0;
      uVar27 = uStack_f8;
    }
    uStack_b0 = uVar38;
    uStack_f8 = uVar27;
    uVar40 = uStack_b0._7_1_;
    uVar9 = uStack_f8._7_1_;
    if (puVar35 == puVar16) {
      bVar20 = true;
    }
    puVar32 = puVar35;
    if (!bVar20) {
      do {
        uStack_b0._7_1_ = uVar40;
        uStack_f8._7_1_ = uVar9;
        uVar40 = uStack_b0._7_1_;
        uVar9 = uStack_f8._7_1_;
        uVar2 = *(undefined4 *)((long)puVar32 + 0x1c);
        uVar27 = uStack_f8;
        uStack_f8._7_1_ = uVar9;
        uVar38 = uStack_b0;
        uStack_b0._7_1_ = uVar40;
        puVar18 = (undefined4 *)operator_new(4);
        uVar38 = uStack_b0;
        uVar27 = uStack_f8;
        *puVar18 = uVar2;
        if (*(char *)(puVar32 + 7) == '\0') {
          local_200 = puVar18 + 1;
          local_208 = puVar18;
          local_1f8 = local_200;
          if (-1 < *(char *)((long)puVar32 + 0x17)) goto LAB_004c4dfc;
LAB_004c4e24:
          uStack_b0 = uVar38;
          uStack_f8 = uVar27;
          uVar40 = uStack_b0._7_1_;
          uVar9 = uStack_f8._7_1_;
          __src = (undefined8 *******)*puVar32;
          uVar15 = puVar32[1];
          uStack_f8._7_1_ = uVar9;
          uStack_b0._7_1_ = uVar40;
          if (uVar15 < 0x17) {
            __dest = &local_270;
            local_260 = CONCAT17((char)uVar15,(undefined7)local_260);
            uVar27 = uStack_f8;
            uVar38 = uStack_b0;
          }
          else {
            if (0x7fffffffffffffef < uVar15) {
              uVar27 = uStack_f8;
              uVar38 = uStack_b0;
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar25 = (uVar15 | 0xf) + 1;
            uVar27 = uStack_f8;
            uVar38 = uStack_b0;
            __dest = (undefined8 *******)operator_new(uVar25);
            uVar38 = uStack_b0;
            uVar27 = uStack_f8;
            local_260 = uVar25 | 0x8000000000000000;
            local_270 = __dest;
            uStack_268 = uVar15;
          }
          uStack_b0 = uVar38;
          uStack_f8 = uVar27;
          uVar40 = uStack_b0._7_1_;
          uVar9 = uStack_f8._7_1_;
          uStack_f8._7_1_ = uVar9;
          uStack_b0._7_1_ = uVar40;
          if ((__dest <= __src) && (__src < (undefined8 *******)((long)__dest + uVar15 + 1))) {
            uVar27 = uStack_f8;
            uVar38 = uStack_b0;
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                       ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range")
            ;
          }
          uVar27 = uStack_f8;
          uVar38 = uStack_b0;
          memmove(__dest,__src,uVar15 + 1);
          uVar38 = uStack_b0;
          uVar27 = uStack_f8;
        }
        else {
          puVar33 = (undefined4 *)puVar32[4];
          puVar1 = (undefined4 *)puVar32[5];
          local_208 = (undefined4 *)0x0;
          local_200 = (undefined4 *)0x0;
          local_1f8 = (undefined4 *)0x0;
          uVar15 = (long)puVar1 - (long)puVar33;
          if (uVar15 != 0) {
            uStack_f8 = uVar27;
            uStack_b0 = uVar38;
            if ((long)uVar15 < 0) {
              uVar9 = uStack_f8._7_1_;
              uVar40 = uStack_b0._7_1_;
              uVar27 = uStack_f8;
              uStack_f8._7_1_ = uVar9;
              uVar38 = uStack_b0;
              uStack_b0._7_1_ = uVar40;
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar9 = uStack_f8._7_1_;
            uVar40 = uStack_b0._7_1_;
            uVar27 = uStack_f8;
            uStack_f8._7_1_ = uVar9;
            uVar38 = uStack_b0;
            uStack_b0._7_1_ = uVar40;
            local_208 = (undefined4 *)operator_new(uVar15);
            uVar38 = uStack_b0;
            uVar27 = uStack_f8;
            local_1f8 = local_208 + ((long)uVar15 >> 2);
            puVar22 = local_208;
            if ((0x1b < uVar15 - 4) && (0x1f < (ulong)((long)local_208 - (long)puVar33))) {
              puVar41 = (undefined8 *)(puVar33 + 4);
              uVar15 = (uVar15 - 4 >> 2) + 1;
              puVar28 = (undefined8 *)(local_208 + 4);
              uVar24 = uVar15 & 0x7ffffffffffffff8;
              puVar22 = local_208 + uVar24;
              puVar33 = puVar33 + uVar24;
              uVar25 = uVar24;
              do {
                puVar5 = puVar41 + -1;
                uVar31 = puVar41[-2];
                uVar36 = puVar41[1];
                uVar29 = *puVar41;
                puVar41 = puVar41 + 4;
                uVar25 = uVar25 - 8;
                puVar28[-1] = *puVar5;
                puVar28[-2] = uVar31;
                puVar28[1] = uVar36;
                *puVar28 = uVar29;
                puVar28 = puVar28 + 4;
              } while (uVar25 != 0);
              local_200 = puVar22;
              if (uVar15 == uVar24) goto LAB_004c4dec;
            }
            do {
              puVar34 = puVar33 + 1;
              local_200 = puVar22 + 1;
              *puVar22 = *puVar33;
              puVar22 = local_200;
              puVar33 = puVar34;
            } while (puVar34 != puVar1);
          }
LAB_004c4dec:
          uStack_b0 = uVar38;
          uStack_f8 = uVar27;
          uVar40 = uStack_b0._7_1_;
          uVar9 = uStack_f8._7_1_;
          uVar27 = uStack_f8;
          uStack_f8._7_1_ = uVar9;
          uVar38 = uStack_b0;
          uStack_b0._7_1_ = uVar40;
          operator_delete(puVar18);
          uVar38 = uStack_b0;
          uVar27 = uStack_f8;
          if (*(char *)((long)puVar32 + 0x17) < '\0') goto LAB_004c4e24;
LAB_004c4dfc:
          uStack_b0 = uVar38;
          uStack_f8 = uVar27;
          uVar40 = uStack_b0._7_1_;
          uVar9 = uStack_f8._7_1_;
          local_260 = puVar32[2];
          uStack_268 = puVar32[1];
          local_270 = (undefined8 *******)*puVar32;
          uVar27 = uStack_f8;
          uVar38 = uStack_b0;
          uStack_f8._7_1_ = uVar9;
          uStack_b0._7_1_ = uVar40;
        }
        uStack_b0 = uVar38;
        uStack_f8 = uVar27;
        uVar40 = uStack_b0._7_1_;
        uVar9 = uStack_f8._7_1_;
                    /* WARNING: Load size is inaccurate */
        uVar27 = uStack_f8;
        uStack_f8._7_1_ = uVar9;
        uVar38 = uStack_b0;
        uStack_b0._7_1_ = uVar40;
        discord::voice::Connection::ConnectUser
                  (puVar32[9],lVar13,&local_270,*(undefined4 *)(puVar32 + 3),&local_208,
                   *(undefined1 *)((long)puVar32 + 0x44),0);
        uVar38 = uStack_b0;
        uVar27 = uStack_f8;
        uVar9 = uStack_f8._7_1_;
        uVar40 = uStack_b0._7_1_;
        if ((long)local_260 < 0) {
          uStack_f8 = uVar27;
          uStack_b0 = uVar38;
          uVar27 = uStack_f8;
          uStack_f8._7_1_ = uVar9;
          uVar38 = uStack_b0;
          uStack_b0._7_1_ = uVar40;
          operator_delete(local_270);
          uVar38 = uStack_b0;
          uVar27 = uStack_f8;
          uVar9 = uStack_f8._7_1_;
          uVar40 = uStack_b0._7_1_;
        }
        uStack_b0 = uVar38;
        uStack_f8 = uVar27;
        uVar27 = uStack_f8;
        uVar38 = uStack_b0;
        if (local_208 != (undefined4 *)0x0) {
          local_200 = local_208;
          uStack_f8._7_1_ = uVar9;
          uStack_b0._7_1_ = uVar40;
          operator_delete(local_208);
          uVar38 = uStack_b0;
          uVar27 = uStack_f8;
          uVar9 = uStack_f8._7_1_;
          uVar40 = uStack_b0._7_1_;
        }
        uStack_b0._7_1_ = uVar40;
        uStack_f8._7_1_ = uVar9;
        uStack_b0 = uVar38;
        uStack_f8 = uVar27;
        uVar40 = uStack_b0._7_1_;
        uVar9 = uStack_f8._7_1_;
        puVar32 = puVar32 + 10;
      } while (puVar32 != puVar16);
    }
    uStack_b0._7_1_ = uVar40;
    uStack_f8._7_1_ = uVar9;
    uVar9 = uStack_b0._7_1_;
    uVar40 = uStack_f8._7_1_;
    uVar27 = uStack_f8;
    uVar38 = uStack_b0;
    uStack_f8._7_1_ = uVar40;
    if (puVar35 != (undefined8 *)0x0) {
      while( true ) {
        uStack_f8._7_1_ = (byte)((ulong)uVar27 >> 0x38);
        uStack_b0._7_1_ = (undefined1)((ulong)uVar38 >> 0x38);
        uStack_f8 = uVar27;
        uStack_b0 = uVar38;
        if (puVar35 == puVar16) break;
        pvVar17 = (void *)puVar16[-6];
        if (pvVar17 != (void *)0x0) {
          puVar16[-5] = pvVar17;
          uVar9 = uStack_f8._7_1_;
          uVar40 = uStack_b0._7_1_;
          uVar27 = uStack_f8;
          uStack_f8._7_1_ = uVar9;
          uVar38 = uStack_b0;
          uStack_b0._7_1_ = uVar40;
          operator_delete(pvVar17);
          uVar27 = uStack_f8;
          uVar38 = uStack_b0;
        }
        uStack_b0 = uVar38;
        uStack_f8 = uVar27;
        puVar16 = puVar16 + -10;
        uVar27 = uStack_f8;
        uVar38 = uStack_b0;
      }
      uVar9 = uStack_f8._7_1_;
      uVar40 = uStack_b0._7_1_;
      uVar27 = uStack_f8;
      uStack_f8._7_1_ = uVar9;
      uVar38 = uStack_b0;
      uStack_b0._7_1_ = uVar40;
      operator_delete(puVar35);
      uVar38 = uStack_b0;
      uVar27 = uStack_f8;
      uVar9 = uStack_b0._7_1_;
    }
  }
  uStack_b0._7_1_ = uVar9;
  uStack_b0 = uVar38;
  uStack_f8 = uVar27;
  uVar40 = uStack_b0._7_1_;
  uVar9 = uStack_f8._7_1_;
  uVar27 = uStack_f8;
  uVar38 = uStack_b0;
  if (plVar14 != (long *)0x0) {
    plVar37 = plVar14 + 1;
    do {
      lVar13 = *plVar37;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar37,0x10);
      if (bVar20) {
        *plVar37 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      uStack_f8._7_1_ = uVar9;
      uStack_b0._7_1_ = uVar40;
      (**(code **)(*plVar14 + 0x10))(plVar14);
      uVar38 = uStack_b0;
      uVar27 = uStack_f8;
      uVar9 = uStack_f8._7_1_;
      uStack_f8 = uVar27;
      uVar40 = uStack_b0._7_1_;
      uStack_b0 = uVar38;
      uVar27 = uStack_f8;
      uStack_f8._7_1_ = uVar9;
      uVar38 = uStack_b0;
      uStack_b0._7_1_ = uVar40;
      FUN_005466cc(plVar14);
      uVar38 = uStack_b0;
      uVar27 = uStack_f8;
      uVar9 = uStack_f8._7_1_;
      uVar40 = uStack_b0._7_1_;
    }
  }
  uStack_b0._7_1_ = uVar40;
  uStack_f8._7_1_ = uVar9;
  uStack_b0 = uVar38;
  uStack_f8 = uVar27;
  uVar40 = uStack_b0._7_1_;
  uVar9 = uStack_f8._7_1_;
  uVar27 = uStack_f8;
  uStack_f8._7_1_ = uVar9;
  uVar38 = uStack_b0;
  uStack_b0._7_1_ = uVar40;
  FUN_004c1858(auStack_258);
  uVar38 = uStack_b0;
  uVar27 = uStack_f8;
  if (*(long *)(lVar4 + 0x28) != local_88) {
    uVar9 = uStack_f8._7_1_;
    uStack_f8 = uVar27;
    uVar40 = uStack_b0._7_1_;
    uStack_b0 = uVar38;
    uVar27 = uStack_f8;
    uStack_f8._7_1_ = uVar9;
    uVar38 = uStack_b0;
    uStack_b0._7_1_ = uVar40;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004c55b4  FUN_004c55b4 =====

void FUN_004c55b4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  undefined8 *__dest;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar3;
    return;
  }
  __src = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    __dest = param_1;
  }
  else {
    if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = (uVar2 | 0xf) + 1;
    __dest = (undefined8 *)operator_new(uVar1);
    *param_1 = __dest;
    param_1[1] = uVar2;
    param_1[2] = uVar1 | 0x8000000000000000;
  }
  if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h",
               0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
  }
  memmove(__dest,__src,uVar2 + 1);
  return;
}


// ===== 004c568c  Java_com_discord_native_engine_NativeConnection_destroyUser =====

void Java_com_discord_native_engine_NativeConnection_destroyUser
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  Connection *this;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *local_58 [2];
  char local_41;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar5 = FUN_004a3bd4();
  uVar8 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar8);
  this = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (this != (Connection *)0x0) {
    FUN_004a3c54(local_58,param_3);
    discord::voice::Connection::DisconnectUser(this,(basic_string *)local_58);
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c578c  Java_com_discord_native_engine_NativeConnection_setVideoBroadcast =====

void Java_com_discord_native_engine_NativeConnection_setVideoBroadcast
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  long *plVar1;
  Connection *this;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar5 = FUN_004a3bd4();
  uVar8 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar8);
  this = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (this != (Connection *)0x0) {
    discord::voice::Connection::SetVideoBroadcast(this,param_3 != '\0');
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c5870  Java_com_discord_native_engine_NativeConnection_setLocalPan =====

void Java_com_discord_native_engine_NativeConnection_setLocalPan
               (float param_1,float param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
               )

{
  long *plVar1;
  Connection *this;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *local_68 [2];
  char local_51;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_50,param_3);
  lVar5 = FUN_004a3bd4();
  uVar8 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_4,uVar8);
  this = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (this != (Connection *)0x0) {
    FUN_004a3c54(local_68,param_5);
    discord::voice::Connection::SetUserPlayoutPan(this,(basic_string *)local_68,param_1,param_2);
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c5988  Java_com_discord_native_engine_NativeConnection_setLocalVolume =====

void Java_com_discord_native_engine_NativeConnection_setLocalVolume
               (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  Connection *this;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *local_68 [2];
  char local_51;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_50,param_2);
  lVar5 = FUN_004a3bd4();
  uVar8 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_3,uVar8);
  this = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (this != (Connection *)0x0) {
    FUN_004a3c54(local_68,param_4);
    discord::voice::Connection::SetUserPlayoutVolume(this,(basic_string *)local_68,param_1);
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c5a98  Java_com_discord_native_engine_NativeConnection_setLocalMute =====

void Java_com_discord_native_engine_NativeConnection_setLocalMute
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  long *plVar1;
  Connection *this;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *local_68 [2];
  char local_51;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_50,param_1);
  lVar5 = FUN_004a3bd4();
  uVar8 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar8);
  this = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (this != (Connection *)0x0) {
    FUN_004a3c54(local_68,param_3);
    discord::voice::Connection::MuteUser(this,(basic_string *)local_68,param_4 != '\0');
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c5bac  Java_com_discord_native_engine_NativeConnection_fastUdpReconnect =====

void Java_com_discord_native_engine_NativeConnection_fastUdpReconnect
               (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  Connection *this;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar5 = FUN_004a3bd4();
  uVar8 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar8);
  this = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (this != (Connection *)0x0) {
    discord::voice::Connection::FastUdpReconnect(this);
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c5c84  Java_com_discord_native_engine_NativeConnection_setUdpEndpoint =====

/* WARNING: Removing unreachable block (ram,0x004c5d50) */

void Java_com_discord_native_engine_NativeConnection_setUdpEndpoint
               (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  long *plVar1;
  Connection *pCVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined1 auStack_98 [8];
  undefined1 local_90;
  undefined7 uStack_8f;
  char local_79;
  char local_78;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined1 local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_004c1850(auStack_98,param_1);
  lVar6 = FUN_004a3bd4();
  uVar10 = *(undefined8 *)(lVar6 + 0x578);
  plVar7 = (long *)FUN_004a2934();
  puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x328))(plVar7,param_2,uVar10);
  pCVar2 = (Connection *)*puVar8;
  plVar7 = (long *)puVar8[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (pCVar2 != (Connection *)0x0) {
    if (param_3 == 0) {
      local_90 = 0;
      local_78 = '\0';
      discord::voice::Connection::SetUdpEndpoint(pCVar2,&local_90,0);
      if ((local_78 == '\0') || (-1 < local_79)) goto LAB_004c5d98;
      pvVar9 = (void *)CONCAT71(uStack_8f,local_90);
    }
    else {
      FUN_004a3c54(&local_b0,param_3);
      local_60 = local_a0;
      uStack_68 = uStack_a8;
      uStack_a8 = 0;
      local_a0 = 0;
      local_70 = local_b0;
      local_b0 = (void *)0x0;
      local_58 = 1;
      discord::voice::Connection::SetUdpEndpoint(pCVar2,&local_70,param_4);
      pvVar9 = local_b0;
      if (-1 < local_a0) goto LAB_004c5d98;
    }
    operator_delete(pvVar9);
  }
LAB_004c5d98:
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_004c1858(auStack_98);
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004c5e00  Java_com_discord_native_engine_NativeConnection_setSelfMute =====

void Java_com_discord_native_engine_NativeConnection_setSelfMute
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  long *plVar1;
  ConnectionSettings *pCVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_5f0 [8];
  undefined4 local_5e8;
  undefined1 local_5e4;
  undefined1 local_5e0;
  undefined1 local_5df;
  undefined8 local_5dc;
  undefined4 local_5d4;
  undefined1 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined1 local_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined1 uStack_4a8;
  undefined1 uStack_4a7;
  undefined1 uStack_4a6;
  undefined1 uStack_4a5;
  undefined1 uStack_4a4;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined1 local_488;
  undefined8 local_480;
  code *local_470;
  undefined8 *local_468;
  undefined1 local_460;
  undefined8 local_458;
  code *local_448;
  undefined8 *local_440;
  undefined1 local_438;
  undefined4 local_430;
  undefined1 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  code *local_418;
  undefined8 *puStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8;
  undefined2 local_3a0;
  undefined4 local_39c;
  undefined1 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  void *local_378;
  undefined8 local_370;
  long lStack_368;
  void *local_360;
  void *local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  code *local_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  code *pcStack_308;
  undefined8 *local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8;
  undefined4 local_2d0;
  undefined1 local_2cc;
  undefined1 local_2c8;
  undefined1 local_2c7;
  undefined5 uStack_2c4;
  undefined3 local_2bf;
  undefined5 uStack_2bc;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0;
  undefined1 local_298;
  undefined4 local_290;
  undefined1 local_28c;
  undefined4 local_288;
  undefined1 local_284;
  undefined4 local_280;
  undefined1 local_27c;
  undefined4 local_278;
  undefined1 local_274;
  undefined4 local_270;
  undefined1 local_26c;
  undefined4 local_268;
  undefined1 local_264;
  undefined4 local_260;
  undefined1 local_25c;
  undefined4 local_258;
  undefined1 local_254;
  undefined4 local_250;
  undefined1 local_24c;
  undefined4 local_248;
  undefined1 local_244;
  undefined4 local_240;
  undefined1 local_23c;
  undefined2 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  undefined1 local_1cf;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a0;
  undefined4 local_198;
  undefined1 local_194;
  undefined1 local_190;
  undefined1 local_18f;
  undefined1 local_18e;
  undefined1 local_18d;
  undefined1 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_004c1850(auStack_5f0,param_1);
  lVar6 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar6 + 0x578);
  plVar7 = (long *)FUN_004a2934();
  puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x328))(plVar7,param_2,uVar9);
  pCVar2 = (ConnectionSettings *)*puVar8;
  plVar7 = (long *)puVar8[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (pCVar2 != (ConnectionSettings *)0x0) {
    local_5e0 = param_3 != '\0';
    local_318 = 0;
    uStack_320 = 0;
    local_470 = FUN_00442f08;
    local_468 = &DAT_001f1910;
    local_448 = FUN_0040dec4;
    local_440 = &DAT_001f1910;
    uStack_228 = 0;
    local_230 = 0;
    local_3c8 = 0;
    uStack_420 = 0;
    local_428 = 0;
    uStack_400 = 0;
    local_408 = 0;
    uStack_3f0 = 0;
    local_3f8 = 0;
    uStack_3e0 = 0;
    local_3e8 = 0;
    uStack_3d0 = 0;
    local_3d8 = 0;
    uStack_540 = 0;
    local_548 = 0;
    uStack_208 = 0;
    local_210 = 0;
    uStack_520 = 0;
    local_528 = 0;
    uStack_500 = 0;
    local_508 = 0;
    local_418 = FUN_004547f0;
    puStack_410 = &DAT_001f1910;
    local_1d0 = 0;
    local_330 = FUN_0048870c;
    local_250 = 0;
    local_1b8 = 0;
    puStack_328 = &DAT_001f1910;
    uStack_388 = 0;
    local_390 = 0;
    local_378 = (void *)0x0;
    uStack_380 = 0;
    lStack_368 = 0;
    local_370 = 0;
    local_358 = (void *)0x0;
    local_360 = (void *)0x0;
    local_248 = 0;
    uStack_348 = 0;
    local_350 = 0;
    uStack_338 = 0;
    local_340 = 0;
    local_310 = 0;
    uStack_2f8 = 0;
    pcStack_308 = FUN_00488718;
    local_300 = &DAT_001f1910;
    local_1b0 = 0;
    uStack_4a8 = 0;
    uStack_4a6 = 0;
    local_4b0 = 0;
    local_24c = 0;
    local_240 = 0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    local_1a7 = 0;
    local_244 = 0;
    local_238 = 0;
    local_1a8 = 0;
    local_198 = 0;
    local_23c = 0;
    local_218 = 0;
    local_1a0 = 0;
    local_190 = 0;
    local_220 = 0;
    local_1f8 = 0;
    local_194 = 0;
    local_18e = 0;
    local_200 = 0;
    local_1e0 = 0;
    local_18f = 0;
    local_18c = 0;
    local_1d8 = 0;
    uStack_1c0 = 0;
    local_1c8 = 0;
    local_18d = 0;
    local_178 = 0;
    uStack_498 = 0;
    local_4a0 = 0;
    local_100 = &uStack_f8;
    local_460 = 0;
    local_438 = 0;
    local_430 = 0;
    local_42c = 0;
    uStack_3c0 = 0;
    local_3b8 = 0;
    uStack_3b0 = 0;
    local_3a8 = 0;
    local_3a0 = 0;
    local_39c = 0;
    local_398 = 0;
    local_2f0 = 0;
    local_2e0 = 0;
    uStack_2e8 = 0;
    local_2d8 = 0;
    local_5e8 = 0;
    local_5dc = 0;
    local_5d4 = 0;
    local_5c8 = 0;
    uStack_5b8 = 0;
    local_5c0 = 0;
    uStack_5a0 = 0;
    local_5a8 = 0;
    uStack_590 = 0;
    local_598 = 0;
    uStack_580 = 0;
    local_588 = 0;
    uStack_570 = 0;
    local_578 = 0;
    local_2d0 = 0;
    local_2cc = 0;
    local_5e4 = 0;
    local_2c7 = 1;
    local_5df = 0;
    uStack_2bc = 0;
    uStack_2c4 = 0;
    local_2bf = 0;
    local_5d0 = 0;
    local_2b0 = 0;
    local_2a8 = 0;
    local_2a0 = 0;
    local_298 = 0;
    local_5b0 = 0;
    local_290 = 0;
    local_28c = 0;
    local_288 = 0;
    local_284 = 0;
    local_280 = 0;
    local_27c = 0;
    local_278 = 0;
    local_274 = 0;
    local_270 = 0;
    local_26c = 0;
    local_268 = 0;
    local_264 = 0;
    local_260 = 0;
    local_25c = 0;
    local_258 = 0;
    local_254 = 0;
    local_568 = 0;
    uStack_560 = 0;
    local_558 = 0;
    local_550 = 0;
    local_538 = 0;
    local_530 = 0;
    local_518 = 0;
    local_510 = 0;
    local_4f8 = 0;
    local_4f0 = 0;
    local_1cf = 0;
    local_4e8 = 0;
    local_4d0 = 0;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4b8 = 0;
    local_4ac = 0;
    uStack_4a7 = 0;
    uStack_4a5 = 0;
    uStack_4a4 = 0;
    uStack_180 = 0;
    local_188 = 0;
    local_490 = 0;
    local_170 = 0;
    local_488 = 0;
    local_168 = 1;
    local_148 = 0;
    local_150 = 0;
    uStack_158 = 0;
    local_160 = 0;
    local_80 = 0;
    uStack_87 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_f8 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_8f = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_98 = 0;
    uStack_97 = 0;
    local_a0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_50 = 0;
    local_58 = 0;
    local_2c8 = local_5e0;
    discord::voice::Connection::ApplySettings(pCVar2);
    FUN_004379f4(&local_140);
    FUN_0043ba38(&local_2d0);
    if ((code *)local_300[1] != (code *)0x0) {
      (*(code *)local_300[1])(local_318);
    }
    if ((code *)puStack_328[1] != (code *)0x0) {
      (*(code *)puStack_328[1])(local_340);
    }
    if (local_360 != (void *)0x0) {
      local_358 = local_360;
      operator_delete(local_360);
    }
    if (lStack_368 < 0) {
      operator_delete(local_378);
    }
    if ((code *)puStack_410[1] != (code *)0x0) {
      (*(code *)puStack_410[1])(local_428);
    }
    if ((code *)local_440[1] != (code *)0x0) {
      (*(code *)local_440[1])(local_458);
    }
    if ((code *)local_468[1] != (code *)0x0) {
      (*(code *)local_468[1])(local_480);
    }
    FUN_0043ba38(&local_5e8);
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_004c1858(auStack_5f0);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c6354  Java_com_discord_native_engine_NativeConnection_setSelfDeafen =====

void Java_com_discord_native_engine_NativeConnection_setSelfDeafen
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  long *plVar1;
  ConnectionSettings *pCVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_488 [8];
  undefined8 local_480;
  code *local_470;
  undefined8 *local_468;
  undefined1 local_460;
  undefined8 local_458;
  code *local_448;
  undefined8 *local_440;
  undefined1 local_438;
  undefined4 local_430;
  undefined1 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  code *local_418;
  undefined8 *puStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8;
  undefined1 local_3a0;
  undefined1 local_39f;
  undefined4 local_39c;
  undefined1 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  void *local_378;
  undefined8 local_370;
  long lStack_368;
  void *local_360;
  void *local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  code *local_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  code *pcStack_308;
  undefined8 *local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 local_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_004c1850(auStack_488,param_1);
  lVar6 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar6 + 0x578);
  plVar7 = (long *)FUN_004a2934();
  puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x328))(plVar7,param_2,uVar9);
  pCVar2 = (ConnectionSettings *)*puVar8;
  plVar7 = (long *)puVar8[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (pCVar2 != (ConnectionSettings *)0x0) {
    local_3a0 = param_3 != '\0';
    local_470 = FUN_00442f08;
    local_468 = &DAT_001f1910;
    local_460 = 0;
    local_448 = FUN_0040dec4;
    local_440 = &DAT_001f1910;
    local_39f = 1;
    local_438 = 0;
    local_3c8 = 0;
    uStack_400 = 0;
    local_408 = 0;
    uStack_3f0 = 0;
    local_3f8 = 0;
    uStack_3e0 = 0;
    local_3e8 = 0;
    uStack_3d0 = 0;
    local_3d8 = 0;
    local_418 = FUN_004547f0;
    puStack_410 = &DAT_001f1910;
    local_310 = 0;
    uStack_2f8 = 0;
    local_2f0 = 0;
    uStack_420 = 0;
    local_428 = 0;
    uStack_3c0 = 0;
    uStack_3b0 = 0;
    uStack_388 = 0;
    local_390 = 0;
    local_378 = (void *)0x0;
    uStack_380 = 0;
    lStack_368 = 0;
    local_370 = 0;
    local_358 = (void *)0x0;
    local_360 = (void *)0x0;
    uStack_348 = 0;
    local_350 = 0;
    uStack_338 = 0;
    local_340 = 0;
    local_318 = 0;
    uStack_320 = 0;
    local_330 = FUN_0048870c;
    puStack_328 = &DAT_001f1910;
    local_430 = 0;
    local_42c = 0;
    local_3b8 = 0;
    pcStack_308 = FUN_00488718;
    local_300 = &DAT_001f1910;
    local_3a8 = 0;
    local_39c = 0;
    uStack_16f = 0;
    uStack_170 = 0;
    local_100 = &uStack_f8;
    local_398 = 0;
    local_2e0 = 0;
    uStack_2e8 = 0;
    local_2d8 = 0;
    uStack_2c8 = 0;
    local_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    local_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    local_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    local_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    local_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    local_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    local_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    local_177 = 0;
    uStack_180 = 0;
    local_148 = 0;
    local_150 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_87 = 0;
    local_80 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    uStack_8f = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_97 = 0;
    local_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0;
    discord::voice::Connection::ApplySettings(pCVar2);
    FUN_004379f4(&local_140);
    FUN_0043ba38(&local_2d0);
    if ((code *)local_300[1] != (code *)0x0) {
      (*(code *)local_300[1])(local_318);
    }
    if ((code *)puStack_328[1] != (code *)0x0) {
      (*(code *)puStack_328[1])(local_340);
    }
    if (local_360 != (void *)0x0) {
      local_358 = local_360;
      operator_delete(local_360);
    }
    if (lStack_368 < 0) {
      operator_delete(local_378);
    }
    if ((code *)puStack_410[1] != (code *)0x0) {
      (*(code *)puStack_410[1])(local_428);
    }
    if ((code *)local_440[1] != (code *)0x0) {
      (*(code *)local_440[1])(local_458);
    }
    if ((code *)local_468[1] != (code *)0x0) {
      (*(code *)local_468[1])(local_480);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_004c1858(auStack_488);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c664c  Java_com_discord_native_engine_NativeConnection_setMinimumOutputDelay =====

void Java_com_discord_native_engine_NativeConnection_setMinimumOutputDelay
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  ConnectionSettings *pCVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_488 [8];
  undefined8 local_480;
  code *local_470;
  undefined8 *local_468;
  undefined1 local_460;
  undefined8 local_458;
  code *local_448;
  undefined8 *local_440;
  undefined1 local_438;
  undefined4 local_430;
  undefined1 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  code *local_418;
  undefined8 *puStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8;
  undefined2 local_3a0;
  undefined4 local_39c;
  undefined1 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  void *local_378;
  undefined8 local_370;
  long lStack_368;
  void *local_360;
  void *local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  code *local_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  code *pcStack_308;
  undefined8 *local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 local_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_004c1850(auStack_488,param_1);
  lVar6 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar6 + 0x578);
  plVar7 = (long *)FUN_004a2934();
  puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x328))(plVar7,param_2,uVar9);
  pCVar2 = (ConnectionSettings *)*puVar8;
  plVar7 = (long *)puVar8[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (pCVar2 != (ConnectionSettings *)0x0) {
    local_470 = FUN_00442f08;
    local_468 = &DAT_001f1910;
    local_460 = 0;
    local_448 = FUN_0040dec4;
    local_440 = &DAT_001f1910;
    local_438 = 0;
    local_430 = 0;
    local_3c8 = 0;
    uStack_400 = 0;
    local_408 = 0;
    uStack_3f0 = 0;
    local_3f8 = 0;
    uStack_3e0 = 0;
    local_3e8 = 0;
    uStack_3d0 = 0;
    local_3d8 = 0;
    local_418 = FUN_004547f0;
    puStack_410 = &DAT_001f1910;
    local_310 = 0;
    uStack_2f8 = 0;
    local_2f0 = 0;
    local_398 = 1;
    uStack_3c0 = 0;
    local_3b8 = 0;
    uStack_3b0 = 0;
    uStack_388 = 0;
    local_390 = 0;
    local_378 = (void *)0x0;
    uStack_380 = 0;
    lStack_368 = 0;
    local_370 = 0;
    local_358 = (void *)0x0;
    local_360 = (void *)0x0;
    uStack_348 = 0;
    local_350 = 0;
    uStack_338 = 0;
    local_340 = 0;
    local_318 = 0;
    uStack_320 = 0;
    local_330 = FUN_0048870c;
    puStack_328 = &DAT_001f1910;
    local_42c = 0;
    uStack_420 = 0;
    local_428 = 0;
    local_3a8 = 0;
    pcStack_308 = FUN_00488718;
    local_300 = &DAT_001f1910;
    local_3a0 = 0;
    local_2e0 = 0;
    uStack_16f = 0;
    uStack_170 = 0;
    local_100 = &uStack_f8;
    uStack_2e8 = 0;
    local_2d8 = 0;
    uStack_2c8 = 0;
    local_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    local_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    local_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    local_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    local_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    local_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    local_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    local_177 = 0;
    uStack_180 = 0;
    local_148 = 0;
    local_150 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_87 = 0;
    local_80 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    uStack_8f = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_97 = 0;
    local_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0;
    local_39c = param_3;
    discord::voice::Connection::ApplySettings(pCVar2);
    FUN_004379f4(&local_140);
    FUN_0043ba38(&local_2d0);
    if ((code *)local_300[1] != (code *)0x0) {
      (*(code *)local_300[1])(local_318);
    }
    if ((code *)puStack_328[1] != (code *)0x0) {
      (*(code *)puStack_328[1])(local_340);
    }
    if (local_360 != (void *)0x0) {
      local_358 = local_360;
      operator_delete(local_360);
    }
    if (lStack_368 < 0) {
      operator_delete(local_378);
    }
    if ((code *)puStack_410[1] != (code *)0x0) {
      (*(code *)puStack_410[1])(local_428);
    }
    if ((code *)local_440[1] != (code *)0x0) {
      (*(code *)local_440[1])(local_458);
    }
    if ((code *)local_468[1] != (code *)0x0) {
      (*(code *)local_468[1])(local_480);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_004c1858(auStack_488);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c6938  Java_com_discord_native_engine_NativeConnection_setNoInputThreshold =====

void Java_com_discord_native_engine_NativeConnection_setNoInputThreshold(void)

{
  return;
}


// ===== 004c693c  Java_com_discord_native_engine_NativeConnection_setPTTActive =====

void Java_com_discord_native_engine_NativeConnection_setPTTActive
               (undefined8 param_1,undefined8 param_2,char param_3,char param_4,char param_5)

{
  long *plVar1;
  Connection *this;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_50,param_1);
  lVar5 = FUN_004a3bd4();
  uVar8 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar8);
  this = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (this != (Connection *)0x0) {
    discord::voice::Connection::SetPTTActive(this,param_3 != '\0',param_4 != '\0',param_5 != '\0');
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c6a40  Java_com_discord_native_engine_NativeConnection_getStats =====

void Java_com_discord_native_engine_NativeConnection_getStats
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  Connection *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar5 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar9);
  pCVar1 = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 != (Connection *)0x0) {
    if (param_3 != 0) {
      plVar8 = (long *)FUN_004a2934();
      param_3 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_3);
    }
    local_48 = FUN_004cc00c;
    local_40 = &PTR_FUN_00d1f030;
    local_58[0] = (long *)operator_new(8);
    *local_58[0] = param_3;
    discord::voice::Connection::GetStats(pCVar1,local_58,0xffffffff);
    if ((code *)local_40[1] != (code *)0x0) {
      (*(code *)local_40[1])(local_58[0]);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c6b7c  Java_com_discord_native_engine_NativeConnection_setPingInterval =====

void Java_com_discord_native_engine_NativeConnection_setPingInterval
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  ConnectionSettings *pCVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_488 [8];
  undefined8 local_480;
  code *local_470;
  undefined8 *local_468;
  undefined1 local_460;
  undefined8 local_458;
  code *local_448;
  undefined8 *local_440;
  undefined1 local_438;
  undefined4 local_430;
  undefined1 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  code *local_418;
  undefined8 *puStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8;
  undefined2 local_3a0;
  undefined4 local_39c;
  undefined1 local_398;
  undefined2 local_390;
  undefined5 local_38c;
  undefined3 uStack_387;
  undefined5 uStack_384;
  void *local_378;
  undefined8 uStack_370;
  long local_368;
  void *local_360;
  void *pvStack_358;
  undefined8 local_350;
  undefined1 local_348;
  undefined8 local_340;
  code *local_330;
  undefined8 *local_328;
  undefined1 local_320;
  undefined8 local_318;
  code *local_308;
  undefined8 *local_300;
  undefined1 local_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec;
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined4 local_2e0;
  undefined1 local_2dc;
  undefined1 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 local_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_004c1850(auStack_488,param_1);
  lVar6 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar6 + 0x578);
  plVar7 = (long *)FUN_004a2934();
  puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x328))(plVar7,param_2,uVar9);
  pCVar2 = (ConnectionSettings *)*puVar8;
  plVar7 = (long *)puVar8[1];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (pCVar2 != (ConnectionSettings *)0x0) {
    local_470 = FUN_00442f08;
    local_468 = &DAT_001f1910;
    local_460 = 0;
    local_448 = FUN_0040dec4;
    local_440 = &DAT_001f1910;
    local_438 = 0;
    local_430 = 0;
    local_3c8 = 0;
    uStack_400 = 0;
    local_408 = 0;
    uStack_3f0 = 0;
    local_3f8 = 0;
    uStack_3e0 = 0;
    local_3e8 = 0;
    uStack_3d0 = 0;
    local_3d8 = 0;
    local_418 = FUN_004547f0;
    puStack_410 = &DAT_001f1910;
    local_42c = 0;
    uStack_420 = 0;
    local_428 = 0;
    uStack_370 = 0;
    local_378 = (void *)0x0;
    uStack_3c0 = 0;
    local_3b8 = 0;
    uStack_3b0 = 0;
    local_330 = FUN_0048870c;
    local_328 = &DAT_001f1910;
    local_3a8 = 0;
    local_3a0 = 0;
    local_39c = 0;
    local_308 = FUN_00488718;
    local_300 = &DAT_001f1910;
    local_398 = 0;
    local_390 = 0;
    local_2ec = 1;
    local_2d8 = 1;
    local_100 = &uStack_f8;
    local_38c = 0;
    uStack_387 = 0;
    uStack_384 = 0;
    local_368 = 0;
    local_350 = 0;
    pvStack_358 = (void *)0x0;
    local_360 = (void *)0x0;
    local_348 = 0;
    local_320 = 0;
    local_2f8 = 0;
    local_2e8 = 0;
    local_2e4 = 0;
    local_2e0 = 0;
    local_2dc = 0;
    uStack_16f = 0;
    uStack_170 = 0;
    uStack_2c8 = 0;
    local_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    local_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    local_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    local_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    local_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    local_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    local_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    local_177 = 0;
    uStack_180 = 0;
    local_148 = 0;
    local_150 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_87 = 0;
    local_80 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    uStack_8f = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_97 = 0;
    local_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0;
    local_2f0 = param_3;
    discord::voice::Connection::ApplySettings(pCVar2);
    FUN_004379f4(&local_140);
    FUN_0043ba38(&local_2d0);
    if ((code *)local_300[1] != (code *)0x0) {
      (*(code *)local_300[1])(local_318);
    }
    if ((code *)local_328[1] != (code *)0x0) {
      (*(code *)local_328[1])(local_340);
    }
    if (local_360 != (void *)0x0) {
      pvStack_358 = local_360;
      operator_delete(local_360);
    }
    if (local_368 < 0) {
      operator_delete(local_378);
    }
    if ((code *)puStack_410[1] != (code *)0x0) {
      (*(code *)puStack_410[1])(local_428);
    }
    if ((code *)local_440[1] != (code *)0x0) {
      (*(code *)local_440[1])(local_458);
    }
    if ((code *)local_468[1] != (code *)0x0) {
      (*(code *)local_468[1])(local_480);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_004c1858(auStack_488);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c6e8c  Java_com_discord_native_engine_NativeConnection_getFilteredStats =====

void Java_com_discord_native_engine_NativeConnection_getFilteredStats
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  Connection *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  long *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_70,param_1);
  lVar5 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar9);
  pCVar1 = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 != (Connection *)0x0) {
    if (param_4 != 0) {
      plVar8 = (long *)FUN_004a2934();
      param_4 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_4);
    }
    local_58 = FUN_004cc204;
    local_50 = &PTR_FUN_00d1f050;
    local_68[0] = (long *)operator_new(8);
    *local_68[0] = param_4;
    discord::voice::Connection::GetStats(pCVar1,local_68,param_3);
    if ((code *)local_50[1] != (code *)0x0) {
      (*(code *)local_50[1])(local_68[0]);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_70);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c6fd4  Java_com_discord_native_engine_NativeConnection_setOnSpeakingCallback =====

void Java_com_discord_native_engine_NativeConnection_setOnSpeakingCallback
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  ConnectionSettings *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auStack_498 [8];
  long *local_490;
  code *local_480;
  undefined **local_478;
  undefined1 local_470;
  undefined8 local_468;
  code *local_458;
  undefined8 *local_450;
  undefined1 local_448;
  undefined4 local_440;
  undefined1 local_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  code *local_428;
  undefined8 *puStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined1 local_3b8;
  undefined2 local_3b0;
  undefined4 local_3ac;
  undefined1 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  void *local_388;
  undefined8 local_380;
  long lStack_378;
  void *local_370;
  void *local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  code *local_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  code *pcStack_318;
  undefined8 *local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined7 local_187;
  undefined1 uStack_180;
  undefined8 uStack_17f;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined1 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_498,param_1);
  lVar5 = FUN_004a3bd4();
  uVar10 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar10);
  pCVar1 = (ConnectionSettings *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 != (ConnectionSettings *)0x0) {
    if (param_3 == 0) {
      lVar5 = 0;
    }
    else {
      plVar8 = (long *)FUN_004a2934();
      lVar5 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_3);
    }
    plVar8 = (long *)operator_new(8);
    *plVar8 = lVar5;
    local_480 = FUN_004cc3fc;
    local_478 = &PTR_FUN_00d1f070;
    local_490 = plVar8;
    puVar7 = (undefined8 *)operator_new(8);
    *puVar7 = 0;
    if (lVar5 != 0) {
      plVar9 = (long *)FUN_004a2934();
      uVar10 = (**(code **)(*plVar9 + 0xa8))(plVar9,*plVar8);
      *puVar7 = uVar10;
    }
    local_470 = 1;
    local_458 = FUN_0040dec4;
    local_450 = &DAT_001f1910;
    uStack_410 = 0;
    local_418 = 0;
    uStack_400 = 0;
    local_408 = 0;
    uStack_3f0 = 0;
    local_3f8 = 0;
    uStack_3e0 = 0;
    local_3e8 = 0;
    uStack_3d0 = 0;
    local_3d8 = 0;
    local_428 = FUN_004547f0;
    puStack_420 = &DAT_001f1910;
    uStack_2f8 = 0;
    local_300 = 0;
    uStack_398 = 0;
    local_3a0 = 0;
    local_388 = (void *)0x0;
    uStack_390 = 0;
    lStack_378 = 0;
    local_380 = 0;
    local_368 = (void *)0x0;
    local_370 = (void *)0x0;
    uStack_358 = 0;
    local_360 = 0;
    uStack_348 = 0;
    local_350 = 0;
    local_328 = 0;
    uStack_330 = 0;
    local_320 = 0;
    uStack_308 = 0;
    local_340 = FUN_0048870c;
    puStack_338 = &DAT_001f1910;
    pcStack_318 = FUN_00488718;
    local_310 = &DAT_001f1910;
    local_110 = &uStack_108;
    local_448 = 0;
    local_440 = 0;
    local_43c = 0;
    uStack_430 = 0;
    local_438 = 0;
    uStack_3c0 = 0;
    local_3c8 = 0;
    local_3b8 = 0;
    local_3b0 = 0;
    local_3ac = 0;
    local_3a8 = 0;
    local_2f0 = 0;
    local_2e8 = 0;
    uStack_17f = 0;
    uStack_180 = 0;
    uStack_2d8 = 0;
    local_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    local_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    local_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    local_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    local_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    local_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    local_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    local_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    local_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    local_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    local_187 = 0;
    uStack_190 = 0;
    local_158 = 0;
    local_160 = 0;
    uStack_168 = 0;
    local_170 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_97 = 0;
    local_90 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    uStack_9f = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_a7 = 0;
    local_b0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    local_88 = 0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_60 = 0;
    local_490 = puVar7;
    discord::voice::Connection::ApplySettings(pCVar1);
    FUN_004379f4(&local_150);
    FUN_0043ba38(&local_2e0);
    if ((code *)local_310[1] != (code *)0x0) {
      (*(code *)local_310[1])(local_328);
    }
    if ((code *)puStack_338[1] != (code *)0x0) {
      (*(code *)puStack_338[1])(local_350);
    }
    if (local_370 != (void *)0x0) {
      local_368 = local_370;
      operator_delete(local_370);
    }
    if (lStack_378 < 0) {
      operator_delete(local_388);
    }
    if ((code *)puStack_420[1] != (code *)0x0) {
      (*(code *)puStack_420[1])(local_438);
    }
    if ((code *)local_450[1] != (code *)0x0) {
      (*(code *)local_450[1])(local_468);
    }
    if ((code *)local_478[1] != (code *)0x0) {
      (*(code *)local_478[1])(local_490);
    }
    if (*plVar8 != 0) {
      plVar9 = (long *)FUN_004a2934();
      (**(code **)(*plVar9 + 0xb0))(plVar9,*plVar8);
    }
    operator_delete(plVar8);
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_498);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c7358  Java_com_discord_native_engine_NativeConnection_setOnSpeakingWhileMutedCallback =====

void Java_com_discord_native_engine_NativeConnection_setOnSpeakingWhileMutedCallback
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  ConnectionSettings *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_488 [8];
  undefined8 local_480;
  code *local_470;
  undefined8 *local_468;
  undefined1 local_460;
  long *local_458;
  code *local_448;
  undefined **local_440;
  undefined1 local_438;
  undefined4 local_430;
  undefined1 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  code *local_418;
  undefined8 *puStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8;
  undefined2 local_3a0;
  undefined4 local_39c;
  undefined1 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  void *local_378;
  undefined8 local_370;
  long lStack_368;
  void *local_360;
  void *local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  code *local_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  code *pcStack_308;
  undefined8 *local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 local_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_488,param_1);
  lVar5 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar9);
  pCVar1 = (ConnectionSettings *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 != (ConnectionSettings *)0x0) {
    if (param_3 != 0) {
      plVar8 = (long *)FUN_004a2934();
      param_3 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_3);
    }
    local_458 = (long *)operator_new(8);
    *local_458 = param_3;
    local_470 = FUN_00442f08;
    local_468 = &DAT_001f1910;
    local_448 = FUN_004cc628;
    local_440 = &PTR_FUN_00d1f090;
    local_3c8 = 0;
    uStack_400 = 0;
    local_408 = 0;
    local_438 = 1;
    uStack_3f0 = 0;
    local_3f8 = 0;
    uStack_3e0 = 0;
    local_3e8 = 0;
    uStack_3d0 = 0;
    local_3d8 = 0;
    local_418 = FUN_004547f0;
    puStack_410 = &DAT_001f1910;
    uStack_3c0 = 0;
    uStack_3b0 = 0;
    uStack_388 = 0;
    local_390 = 0;
    local_378 = (void *)0x0;
    uStack_380 = 0;
    lStack_368 = 0;
    local_370 = 0;
    local_358 = (void *)0x0;
    local_360 = (void *)0x0;
    uStack_348 = 0;
    local_350 = 0;
    uStack_338 = 0;
    local_340 = 0;
    local_318 = 0;
    uStack_320 = 0;
    local_310 = 0;
    uStack_2f8 = 0;
    local_2f0 = 0;
    local_330 = FUN_0048870c;
    puStack_328 = &DAT_001f1910;
    local_460 = 0;
    local_430 = 0;
    local_42c = 0;
    pcStack_308 = FUN_00488718;
    local_300 = &DAT_001f1910;
    uStack_420 = 0;
    local_428 = 0;
    local_3b8 = 0;
    uStack_16f = 0;
    uStack_170 = 0;
    local_100 = &uStack_f8;
    local_3a8 = 0;
    local_3a0 = 0;
    local_39c = 0;
    local_398 = 0;
    local_2e0 = 0;
    uStack_2e8 = 0;
    local_2d8 = 0;
    uStack_2c8 = 0;
    local_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    local_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    local_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    local_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    local_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    local_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    local_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    local_177 = 0;
    uStack_180 = 0;
    local_148 = 0;
    local_150 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_87 = 0;
    local_80 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    uStack_8f = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_97 = 0;
    local_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0;
    discord::voice::Connection::ApplySettings(pCVar1);
    FUN_004379f4(&local_140);
    FUN_0043ba38(&local_2d0);
    if ((code *)local_300[1] != (code *)0x0) {
      (*(code *)local_300[1])(local_318);
    }
    if ((code *)puStack_328[1] != (code *)0x0) {
      (*(code *)puStack_328[1])(local_340);
    }
    if (local_360 != (void *)0x0) {
      local_358 = local_360;
      operator_delete(local_360);
    }
    if (lStack_368 < 0) {
      operator_delete(local_378);
    }
    if ((code *)puStack_410[1] != (code *)0x0) {
      (*(code *)puStack_410[1])(local_428);
    }
    if ((code *)local_440[1] != (code *)0x0) {
      (*(code *)local_440[1])(local_458);
    }
    if ((code *)local_468[1] != (code *)0x0) {
      (*(code *)local_468[1])(local_480);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_488);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c767c  Java_com_discord_native_engine_NativeConnection_setOnPingCallback =====

void Java_com_discord_native_engine_NativeConnection_setOnPingCallback
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  ConnectionSettings *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_488 [8];
  undefined8 local_480;
  code *local_470;
  undefined8 *local_468;
  undefined1 local_460;
  undefined8 local_458;
  code *local_448;
  undefined8 *local_440;
  undefined1 local_438;
  undefined4 local_430;
  undefined1 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  code *local_418;
  undefined8 *puStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8;
  undefined2 local_3a0;
  undefined4 local_39c;
  undefined1 local_398;
  undefined2 local_390;
  undefined5 local_38c;
  undefined3 uStack_387;
  undefined5 uStack_384;
  void *local_378;
  undefined8 uStack_370;
  long local_368;
  void *local_360;
  void *pvStack_358;
  undefined8 local_350;
  undefined1 local_348;
  long *local_340;
  code *local_330;
  undefined **local_328;
  undefined1 local_320;
  undefined8 local_318;
  code *local_308;
  undefined8 *local_300;
  undefined1 local_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec;
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined4 local_2e0;
  undefined1 local_2dc;
  undefined1 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 local_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_488,param_1);
  lVar5 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar9);
  pCVar1 = (ConnectionSettings *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 != (ConnectionSettings *)0x0) {
    if (param_3 != 0) {
      plVar8 = (long *)FUN_004a2934();
      param_3 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_3);
    }
    local_340 = (long *)operator_new(8);
    *local_340 = param_3;
    local_470 = FUN_00442f08;
    local_468 = &DAT_001f1910;
    local_3c8 = 0;
    local_448 = FUN_0040dec4;
    local_440 = &DAT_001f1910;
    uStack_400 = 0;
    local_408 = 0;
    uStack_3f0 = 0;
    local_3f8 = 0;
    uStack_3e0 = 0;
    local_3e8 = 0;
    uStack_3d0 = 0;
    local_3d8 = 0;
    local_418 = FUN_004547f0;
    puStack_410 = &DAT_001f1910;
    local_328 = &PTR_FUN_00d1f0b0;
    local_460 = 0;
    uStack_370 = 0;
    local_378 = (void *)0x0;
    local_308 = FUN_00488718;
    local_300 = &DAT_001f1910;
    local_438 = 0;
    local_430 = 0;
    local_330 = FUN_004cc748;
    uStack_16f = 0;
    uStack_170 = 0;
    local_100 = &uStack_f8;
    local_42c = 0;
    uStack_420 = 0;
    local_428 = 0;
    uStack_3c0 = 0;
    uStack_3b0 = 0;
    local_3b8 = 0;
    local_3a8 = 0;
    local_3a0 = 0;
    local_39c = 0;
    local_398 = 0;
    local_390 = 0;
    local_38c = 0;
    uStack_387 = 0;
    uStack_384 = 0;
    local_368 = 0;
    local_350 = 0;
    pvStack_358 = (void *)0x0;
    local_360 = (void *)0x0;
    local_348 = 0;
    local_320 = 1;
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 0;
    local_2e8 = 0;
    local_2e4 = 0;
    local_2e0 = 0;
    local_2dc = 0;
    local_2d8 = 1;
    uStack_2c8 = 0;
    local_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    local_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    local_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    local_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    local_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    local_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    local_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    local_177 = 0;
    uStack_180 = 0;
    local_148 = 0;
    local_150 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_87 = 0;
    local_80 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    uStack_8f = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_97 = 0;
    local_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0;
    discord::voice::Connection::ApplySettings(pCVar1);
    FUN_004379f4(&local_140);
    FUN_0043ba38(&local_2d0);
    if ((code *)local_300[1] != (code *)0x0) {
      (*(code *)local_300[1])(local_318);
    }
    if ((code *)local_328[1] != (code *)0x0) {
      (*(code *)local_328[1])(local_340);
    }
    if (local_360 != (void *)0x0) {
      pvStack_358 = local_360;
      operator_delete(local_360);
    }
    if (local_368 < 0) {
      operator_delete(local_378);
    }
    if ((code *)puStack_410[1] != (code *)0x0) {
      (*(code *)puStack_410[1])(local_428);
    }
    if ((code *)local_440[1] != (code *)0x0) {
      (*(code *)local_440[1])(local_458);
    }
    if ((code *)local_468[1] != (code *)0x0) {
      (*(code *)local_468[1])(local_480);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_488);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c79c8  Java_com_discord_native_engine_NativeConnection_setOnFirstFrameCallback =====

void Java_com_discord_native_engine_NativeConnection_setOnFirstFrameCallback
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  Connection *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar5 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar9);
  pCVar1 = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 != (Connection *)0x0) {
    if (param_3 != 0) {
      plVar8 = (long *)FUN_004a2934();
      param_3 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_3);
    }
    local_58[0] = (long *)operator_new(8);
    *local_58[0] = param_3;
    local_48 = FUN_004cc96c;
    local_40 = &PTR_FUN_00d1f0d0;
    discord::voice::Connection::SetOnFirstFrameCallback(pCVar1,local_58);
    if ((code *)local_40[1] != (code *)0x0) {
      (*(code *)local_40[1])(local_58[0]);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c7b00  Java_com_discord_native_engine_NativeConnection_setOnMLSFailureCallback =====

void Java_com_discord_native_engine_NativeConnection_setOnMLSFailureCallback
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  Connection *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar5 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar9);
  pCVar1 = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 != (Connection *)0x0) {
    if (param_3 != 0) {
      plVar8 = (long *)FUN_004a2934();
      param_3 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_3);
    }
    local_58[0] = (long *)operator_new(8);
    *local_58[0] = param_3;
    local_48 = FUN_004ccc34;
    local_40 = &PTR_FUN_00d1f0f0;
    discord::voice::Connection::SetOnMLSFailureCallback(pCVar1,local_58);
    if ((code *)local_40[1] != (code *)0x0) {
      (*(code *)local_40[1])(local_58[0]);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c7c38  Java_com_discord_native_engine_NativeConnection_setOnConnectionFailedCallback =====

void Java_com_discord_native_engine_NativeConnection_setOnConnectionFailedCallback
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  Connection *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar5 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar9);
  pCVar1 = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 != (Connection *)0x0) {
    if (param_3 != 0) {
      plVar8 = (long *)FUN_004a2934();
      param_3 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_3);
    }
    local_58[0] = (long *)operator_new(8);
    *local_58[0] = param_3;
    local_48 = FUN_004ccef0;
    local_40 = &PTR_FUN_00d1f110;
    discord::voice::Connection::SetOnConnectionFailedCallback(pCVar1,local_58);
    if ((code *)local_40[1] != (code *)0x0) {
      (*(code *)local_40[1])(local_58[0]);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c7d70  Java_com_discord_native_engine_NativeConnection_setSecureFramesStateUpdateCallback =====

void Java_com_discord_native_engine_NativeConnection_setSecureFramesStateUpdateCallback
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  Connection *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar5 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar9);
  pCVar1 = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 != (Connection *)0x0) {
    if (param_3 != 0) {
      plVar8 = (long *)FUN_004a2934();
      param_3 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_3);
    }
    local_58[0] = (long *)operator_new(8);
    *local_58[0] = param_3;
    local_48 = FUN_004cd0e8;
    local_40 = &PTR_FUN_00d1f130;
    discord::voice::Connection::SetSecureFramesStateUpdateCallback(pCVar1,local_58);
    if ((code *)local_40[1] != (code *)0x0) {
      (*(code *)local_40[1])(local_58[0]);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c7ea8  Java_com_discord_native_engine_NativeConnection_setOnPingTimeoutCallback =====

void Java_com_discord_native_engine_NativeConnection_setOnPingTimeoutCallback
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  ConnectionSettings *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_488 [8];
  undefined8 local_480;
  code *local_470;
  undefined8 *local_468;
  undefined1 local_460;
  undefined8 local_458;
  code *local_448;
  undefined8 *local_440;
  undefined1 local_438;
  undefined4 local_430;
  undefined1 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  code *local_418;
  undefined8 *puStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8;
  undefined2 local_3a0;
  undefined4 local_39c;
  undefined1 local_398;
  undefined2 local_390;
  undefined5 local_38c;
  undefined3 uStack_387;
  undefined5 uStack_384;
  void *local_378;
  undefined8 uStack_370;
  long local_368;
  void *local_360;
  void *pvStack_358;
  undefined8 local_350;
  undefined1 local_348;
  undefined8 local_340;
  code *local_330;
  undefined8 *local_328;
  undefined1 local_320;
  long *local_318;
  code *local_308;
  undefined **local_300;
  undefined1 local_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec;
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined4 local_2e0;
  undefined1 local_2dc;
  undefined1 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 local_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_488,param_1);
  lVar5 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar9);
  pCVar1 = (ConnectionSettings *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 != (ConnectionSettings *)0x0) {
    if (param_3 != 0) {
      plVar8 = (long *)FUN_004a2934();
      param_3 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_3);
    }
    local_318 = (long *)operator_new(8);
    *local_318 = param_3;
    local_470 = FUN_00442f08;
    local_468 = &DAT_001f1910;
    local_3c8 = 0;
    local_448 = FUN_0040dec4;
    local_440 = &DAT_001f1910;
    uStack_400 = 0;
    local_408 = 0;
    uStack_3f0 = 0;
    local_3f8 = 0;
    uStack_3e0 = 0;
    local_3e8 = 0;
    uStack_3d0 = 0;
    local_3d8 = 0;
    local_418 = FUN_004547f0;
    puStack_410 = &DAT_001f1910;
    local_460 = 0;
    local_438 = 0;
    uStack_370 = 0;
    local_378 = (void *)0x0;
    local_430 = 0;
    local_42c = 0;
    uStack_420 = 0;
    local_428 = 0;
    local_330 = FUN_0048870c;
    local_328 = &DAT_001f1910;
    uStack_3c0 = 0;
    local_2f8 = 1;
    local_308 = FUN_004cd3dc;
    local_300 = &PTR_FUN_00d1f150;
    local_2d8 = 1;
    local_100 = &uStack_f8;
    uStack_3b0 = 0;
    local_3b8 = 0;
    local_3a8 = 0;
    local_3a0 = 0;
    local_39c = 0;
    local_398 = 0;
    local_390 = 0;
    local_38c = 0;
    uStack_387 = 0;
    uStack_384 = 0;
    local_368 = 0;
    local_350 = 0;
    pvStack_358 = (void *)0x0;
    local_360 = (void *)0x0;
    local_348 = 0;
    local_320 = 0;
    local_2f0 = 0;
    local_2ec = 0;
    local_2e8 = 0;
    local_2e4 = 0;
    local_2e0 = 0;
    local_2dc = 0;
    uStack_16f = 0;
    uStack_170 = 0;
    uStack_2c8 = 0;
    local_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    local_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    local_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    local_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    local_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    local_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    local_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    local_177 = 0;
    uStack_180 = 0;
    local_148 = 0;
    local_150 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_87 = 0;
    local_80 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    uStack_8f = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_97 = 0;
    local_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0;
    discord::voice::Connection::ApplySettings(pCVar1);
    FUN_004379f4(&local_140);
    FUN_0043ba38(&local_2d0);
    if ((code *)local_300[1] != (code *)0x0) {
      (*(code *)local_300[1])(local_318);
    }
    if ((code *)local_328[1] != (code *)0x0) {
      (*(code *)local_328[1])(local_340);
    }
    if (local_360 != (void *)0x0) {
      pvStack_358 = local_360;
      operator_delete(local_360);
    }
    if (local_368 < 0) {
      operator_delete(local_378);
    }
    if ((code *)puStack_410[1] != (code *)0x0) {
      (*(code *)puStack_410[1])(local_428);
    }
    if ((code *)local_440[1] != (code *)0x0) {
      (*(code *)local_440[1])(local_458);
    }
    if ((code *)local_468[1] != (code *)0x0) {
      (*(code *)local_468[1])(local_480);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_488);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c81f0  Java_com_discord_native_engine_NativeConnection_setOnVideoCallback =====

void Java_com_discord_native_engine_NativeConnection_setOnVideoCallback
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  Connection *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar5 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar9);
  pCVar1 = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 != (Connection *)0x0) {
    if (param_3 != 0) {
      plVar8 = (long *)FUN_004a2934();
      param_3 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_3);
    }
    local_58[0] = (long *)operator_new(8);
    *local_58[0] = param_3;
    local_48 = FUN_004cd600;
    local_40 = &PTR_FUN_00d1f170;
    discord::voice::Connection::SetOnVideoCallback(pCVar1,local_58);
    if ((code *)local_40[1] != (code *)0x0) {
      (*(code *)local_40[1])(local_58[0]);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c8328  Java_com_discord_native_engine_NativeConnection_prepareSecureFramesTransition =====

void Java_com_discord_native_engine_NativeConnection_prepareSecureFramesTransition
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  Connection *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  long *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_70,param_1);
  lVar5 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar9);
  pCVar1 = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 != (Connection *)0x0) {
    if (param_5 != 0) {
      plVar8 = (long *)FUN_004a2934();
      param_5 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_5);
    }
    local_68[0] = (long *)operator_new(8);
    *local_68[0] = param_5;
    local_58 = FUN_004cdc08;
    local_50 = &PTR_FUN_00d1f190;
    discord::voice::Connection::PrepareSecureFramesTransition(pCVar1,param_3,param_4,local_68);
    if ((code *)local_50[1] != (code *)0x0) {
      (*(code *)local_50[1])(local_68[0]);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_70);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c8478  Java_com_discord_native_engine_NativeConnection_executeSecureFramesTransition =====

void Java_com_discord_native_engine_NativeConnection_executeSecureFramesTransition
               (undefined8 param_1,undefined8 param_2,ushort param_3)

{
  long *plVar1;
  Connection *this;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar5 = FUN_004a3bd4();
  uVar8 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar8);
  this = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (this != (Connection *)0x0) {
    discord::voice::Connection::ExecuteSecureFramesTransition(this,param_3);
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c8558  Java_com_discord_native_engine_NativeConnection_prepareSecureFramesEpoch =====

void Java_com_discord_native_engine_NativeConnection_prepareSecureFramesEpoch
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
               undefined8 param_5)

{
  long *plVar1;
  Connection *this;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_50,param_1);
  lVar5 = FUN_004a3bd4();
  uVar10 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar10);
  this = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (this != (Connection *)0x0) {
    uVar8 = FUN_004a3e48(param_3);
    uVar9 = FUN_004a3e48(param_5);
    discord::voice::Connection::PrepareSecureFramesEpoch(this,uVar8,param_4,uVar9);
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c8668  Java_com_discord_native_engine_NativeConnection_getMLSKeyPackageB64 =====

void Java_com_discord_native_engine_NativeConnection_getMLSKeyPackageB64
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  Connection *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar5 = FUN_004a3bd4();
  uVar9 = *(undefined8 *)(lVar5 + 0x578);
  plVar6 = (long *)FUN_004a2934();
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x328))(plVar6,param_2,uVar9);
  pCVar1 = (Connection *)*puVar7;
  plVar6 = (long *)puVar7[1];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 != (Connection *)0x0) {
    if (param_3 != 0) {
      plVar8 = (long *)FUN_004a2934();
      param_3 = (**(code **)(*plVar8 + 0xa8))(plVar8,param_3);
    }
    local_58[0] = (long *)operator_new(8);
    *local_58[0] = param_3;
    local_48 = FUN_004cdd28;
    local_40 = &PTR_FUN_00d1f1b0;
    discord::voice::Connection::GetMLSKeyPackage(pCVar1,local_58);
    if ((code *)local_40[1] != (code *)0x0) {
      (*(code *)local_40[1])(local_58[0]);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_005466cc(plVar6);
    }
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c87a0  Java_com_discord_native_engine_NativeConnection_updateMLSExternalSenderB64 =====

/* WARNING: Removing unreachable block (ram,0x004c88fc) */

void Java_com_discord_native_engine_NativeConnection_updateMLSExternalSenderB64
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  Connection *pCVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 local_68 [24];
  undefined1 auStack_50 [8];
  long local_48;
  undefined1 *puVar18;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  FUN_004c1850(auStack_50,param_1);
  lVar9 = FUN_004a3bd4();
  uVar16 = *(undefined8 *)(lVar9 + 0x578);
  plVar10 = (long *)FUN_004a2934();
  puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x328))(plVar10,param_2,uVar16);
  pCVar2 = (Connection *)*puVar11;
  plVar10 = (long *)puVar11[1];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (pCVar2 == (Connection *)0x0) goto LAB_004c8904;
  FUN_004a3c54(local_68,param_3);
  FUN_00511544(&local_80,local_68);
  puVar8 = local_78;
  puVar18 = local_80;
  local_98 = (undefined1 *)0x0;
  local_90 = (undefined1 *)0x0;
  local_88 = (undefined1 *)0x0;
  uVar5 = (long)local_78 - (long)local_80;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_98 = (undefined1 *)operator_new(uVar5);
    local_88 = local_98 + uVar5;
    puVar12 = local_98;
    if ((0x1f < uVar5) && (0x1f < (ulong)((long)local_98 - (long)puVar18))) {
      uVar13 = uVar5 & 0xffffffffffffffe0;
      puVar11 = (undefined8 *)(puVar18 + 0x10);
      puVar12 = local_98 + uVar13;
      puVar18 = puVar18 + uVar13;
      puVar14 = (undefined8 *)(local_98 + 0x10);
      uVar15 = uVar13;
      do {
        puVar7 = puVar11 + -1;
        uVar16 = puVar11[-2];
        uVar20 = puVar11[1];
        uVar19 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar15 = uVar15 - 0x20;
        puVar14[-1] = *puVar7;
        puVar14[-2] = uVar16;
        puVar14[1] = uVar20;
        *puVar14 = uVar19;
        puVar14 = puVar14 + 4;
      } while (uVar15 != 0);
      local_90 = puVar12;
      if (uVar5 == uVar13) goto LAB_004c88c8;
    }
    do {
      puVar17 = puVar18 + 1;
      local_90 = puVar12 + 1;
      *puVar12 = *puVar18;
      puVar12 = local_90;
      puVar18 = puVar17;
    } while (puVar17 != puVar8);
  }
LAB_004c88c8:
  discord::voice::Connection::UpdateMLSExternalSender(pCVar2,&local_98);
  if (local_98 != (undefined1 *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (local_80 != (undefined1 *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
LAB_004c8904:
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_005466cc(plVar10);
    }
  }
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c8970  Java_com_discord_native_engine_NativeConnection_processMLSProposalsB64 =====

void Java_com_discord_native_engine_NativeConnection_processMLSProposalsB64
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  Connection *pCVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  void *local_98 [2];
  char local_81;
  undefined1 auStack_80 [8];
  undefined8 *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  undefined1 *puVar19;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_004c1850(auStack_80,param_1);
  lVar8 = FUN_004a3bd4();
  uVar17 = *(undefined8 *)(lVar8 + 0x578);
  plVar9 = (long *)FUN_004a2934();
  puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x328))(plVar9,param_2,uVar17);
  pCVar1 = (Connection *)*puVar10;
  plVar9 = (long *)puVar10[1];
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 == (Connection *)0x0) goto LAB_004c8b40;
  FUN_004a3c54(local_98,param_3);
  FUN_00511544(&local_b0,local_98);
  if (param_4 == 0) {
    uVar17 = 0;
  }
  else {
    plVar11 = (long *)FUN_004a2934();
    uVar17 = (**(code **)(*plVar11 + 0xa8))(plVar11,param_4);
  }
  puVar10 = (undefined8 *)operator_new(8);
  puVar7 = local_a8;
  puVar19 = local_b0;
  *puVar10 = uVar17;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (undefined1 *)0x0;
  local_c8 = (undefined1 *)0x0;
  uVar4 = (long)local_a8 - (long)local_b0;
  if (uVar4 != 0) {
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_c8 = (undefined1 *)operator_new(uVar4);
    local_b8 = local_c8 + uVar4;
    puVar12 = local_c8;
    if ((0x1f < uVar4) && (0x1f < (ulong)((long)local_c8 - (long)puVar19))) {
      uVar13 = uVar4 & 0xffffffffffffffe0;
      puVar14 = (undefined8 *)(puVar19 + 0x10);
      puVar12 = local_c8 + uVar13;
      puVar19 = puVar19 + uVar13;
      puVar15 = (undefined8 *)(local_c8 + 0x10);
      uVar16 = uVar13;
      do {
        puVar6 = puVar14 + -1;
        uVar17 = puVar14[-2];
        uVar21 = puVar14[1];
        uVar20 = *puVar14;
        puVar14 = puVar14 + 4;
        uVar16 = uVar16 - 0x20;
        puVar15[-1] = *puVar6;
        puVar15[-2] = uVar17;
        puVar15[1] = uVar21;
        *puVar15 = uVar20;
        puVar15 = puVar15 + 4;
      } while (uVar16 != 0);
      local_c0 = puVar12;
      if (uVar4 == uVar13) goto LAB_004c8ad4;
    }
    do {
      puVar18 = puVar19 + 1;
      local_c0 = puVar12 + 1;
      *puVar12 = *puVar19;
      puVar12 = local_c0;
      puVar19 = puVar18;
    } while (puVar18 != puVar7);
  }
LAB_004c8ad4:
  local_68 = FUN_004cdf4c;
  local_60 = &PTR_FUN_00d1f1d0;
  local_78[0] = puVar10;
  discord::voice::Connection::ProcessMLSProposals(pCVar1,&local_c8,local_78);
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78[0]);
  }
  if (local_c8 != (undefined1 *)0x0) {
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
  if (local_b0 != (undefined1 *)0x0) {
    local_a8 = local_b0;
    operator_delete(local_b0);
  }
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
LAB_004c8b40:
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 1;
    do {
      lVar8 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_005466cc(plVar9);
    }
  }
  FUN_004c1858(auStack_80);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004c8bb0  Java_com_discord_native_engine_NativeConnection_prepareMLSCommitTransitionB64 =====

void Java_com_discord_native_engine_NativeConnection_prepareMLSCommitTransitionB64
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               long param_5)

{
  Connection *pCVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  void *local_98 [2];
  char local_81;
  undefined1 auStack_80 [8];
  undefined8 *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  undefined1 *puVar19;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_004c1850(auStack_80,param_1);
  lVar8 = FUN_004a3bd4();
  uVar17 = *(undefined8 *)(lVar8 + 0x578);
  plVar9 = (long *)FUN_004a2934();
  puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x328))(plVar9,param_2,uVar17);
  pCVar1 = (Connection *)*puVar10;
  plVar9 = (long *)puVar10[1];
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 == (Connection *)0x0) goto LAB_004c8d88;
  if (param_5 == 0) {
    uVar17 = 0;
  }
  else {
    plVar11 = (long *)FUN_004a2934();
    uVar17 = (**(code **)(*plVar11 + 0xa8))(plVar11,param_5);
  }
  puVar10 = (undefined8 *)operator_new(8);
  *puVar10 = uVar17;
  FUN_004a3c54(local_98,param_4);
  FUN_00511544(&local_b0,local_98);
  puVar7 = local_a8;
  puVar19 = local_b0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (undefined1 *)0x0;
  uVar4 = (long)local_a8 - (long)local_b0;
  if (uVar4 != 0) {
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_c8 = (undefined1 *)operator_new(uVar4);
    local_b8 = local_c8 + uVar4;
    puVar12 = local_c8;
    if ((0x1f < uVar4) && (0x1f < (ulong)((long)local_c8 - (long)puVar19))) {
      uVar13 = uVar4 & 0xffffffffffffffe0;
      puVar14 = (undefined8 *)(puVar19 + 0x10);
      puVar12 = local_c8 + uVar13;
      puVar19 = puVar19 + uVar13;
      puVar15 = (undefined8 *)(local_c8 + 0x10);
      uVar16 = uVar13;
      do {
        puVar6 = puVar14 + -1;
        uVar17 = puVar14[-2];
        uVar21 = puVar14[1];
        uVar20 = *puVar14;
        puVar14 = puVar14 + 4;
        uVar16 = uVar16 - 0x20;
        puVar15[-1] = *puVar6;
        puVar15[-2] = uVar17;
        puVar15[1] = uVar21;
        *puVar15 = uVar20;
        puVar15 = puVar15 + 4;
      } while (uVar16 != 0);
      local_c0 = puVar12;
      if (uVar4 == uVar13) goto LAB_004c8d18;
    }
    do {
      puVar18 = puVar19 + 1;
      local_c0 = puVar12 + 1;
      *puVar12 = *puVar19;
      puVar12 = local_c0;
      puVar19 = puVar18;
    } while (puVar18 != puVar7);
  }
LAB_004c8d18:
  local_68 = FUN_004ce170;
  local_60 = &PTR_FUN_00d1f1f0;
  local_78[0] = puVar10;
  discord::voice::Connection::PrepareMLSCommitTransition(pCVar1,param_3,&local_c8,local_78);
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78[0]);
  }
  if (local_c8 != (undefined1 *)0x0) {
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
  if (local_b0 != (undefined1 *)0x0) {
    local_a8 = local_b0;
    operator_delete(local_b0);
  }
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
LAB_004c8d88:
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 1;
    do {
      lVar8 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_005466cc(plVar9);
    }
  }
  FUN_004c1858(auStack_80);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004c8df8  Java_com_discord_native_engine_NativeConnection_processMLSWelcomeB64 =====

void Java_com_discord_native_engine_NativeConnection_processMLSWelcomeB64
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               long param_5)

{
  Connection *pCVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  void *local_98 [2];
  char local_81;
  undefined1 auStack_80 [8];
  undefined8 *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  undefined1 *puVar19;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_004c1850(auStack_80,param_1);
  lVar8 = FUN_004a3bd4();
  uVar17 = *(undefined8 *)(lVar8 + 0x578);
  plVar9 = (long *)FUN_004a2934();
  puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x328))(plVar9,param_2,uVar17);
  pCVar1 = (Connection *)*puVar10;
  plVar9 = (long *)puVar10[1];
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pCVar1 == (Connection *)0x0) goto LAB_004c8fd0;
  if (param_5 == 0) {
    uVar17 = 0;
  }
  else {
    plVar11 = (long *)FUN_004a2934();
    uVar17 = (**(code **)(*plVar11 + 0xa8))(plVar11,param_5);
  }
  puVar10 = (undefined8 *)operator_new(8);
  *puVar10 = uVar17;
  FUN_004a3c54(local_98,param_4);
  FUN_00511544(&local_b0,local_98);
  puVar7 = local_a8;
  puVar19 = local_b0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (undefined1 *)0x0;
  uVar4 = (long)local_a8 - (long)local_b0;
  if (uVar4 != 0) {
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_c8 = (undefined1 *)operator_new(uVar4);
    local_b8 = local_c8 + uVar4;
    puVar12 = local_c8;
    if ((0x1f < uVar4) && (0x1f < (ulong)((long)local_c8 - (long)puVar19))) {
      uVar13 = uVar4 & 0xffffffffffffffe0;
      puVar14 = (undefined8 *)(puVar19 + 0x10);
      puVar12 = local_c8 + uVar13;
      puVar19 = puVar19 + uVar13;
      puVar15 = (undefined8 *)(local_c8 + 0x10);
      uVar16 = uVar13;
      do {
        puVar6 = puVar14 + -1;
        uVar17 = puVar14[-2];
        uVar21 = puVar14[1];
        uVar20 = *puVar14;
        puVar14 = puVar14 + 4;
        uVar16 = uVar16 - 0x20;
        puVar15[-1] = *puVar6;
        puVar15[-2] = uVar17;
        puVar15[1] = uVar21;
        *puVar15 = uVar20;
        puVar15 = puVar15 + 4;
      } while (uVar16 != 0);
      local_c0 = puVar12;
      if (uVar4 == uVar13) goto LAB_004c8f60;
    }
    do {
      puVar18 = puVar19 + 1;
      local_c0 = puVar12 + 1;
      *puVar12 = *puVar19;
      puVar12 = local_c0;
      puVar19 = puVar18;
    } while (puVar18 != puVar7);
  }
LAB_004c8f60:
  local_68 = FUN_004ce444;
  local_60 = &PTR_FUN_00d1f210;
  local_78[0] = puVar10;
  discord::voice::Connection::ProcessMLSWelcome(pCVar1,param_3,&local_c8,local_78);
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78[0]);
  }
  if (local_c8 != (undefined1 *)0x0) {
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
  if (local_b0 != (undefined1 *)0x0) {
    local_a8 = local_b0;
    operator_delete(local_b0);
  }
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
LAB_004c8fd0:
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 1;
    do {
      lVar8 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_005466cc(plVar9);
    }
  }
  FUN_004c1858(auStack_80);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004c9040  Java_com_discord_native_engine_NativeConnection_getMLSPairwiseFingerprintB64 =====

void Java_com_discord_native_engine_NativeConnection_getMLSPairwiseFingerprintB64
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               long param_5)

{
  ulong uVar1;
  Connection *pCVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 *__src;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 **__dest;
  undefined8 uVar10;
  undefined1 *local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  ulong uStack_90;
  undefined7 local_88;
  char cStack_81;
  undefined1 auStack_80 [8];
  undefined8 *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  
  __dest = &local_b0;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_004c1850(auStack_80,param_1);
  lVar6 = FUN_004a3bd4();
  uVar10 = *(undefined8 *)(lVar6 + 0x578);
  plVar7 = (long *)FUN_004a2934();
  puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x328))(plVar7,param_2,uVar10);
  pCVar2 = (Connection *)*puVar8;
  plVar7 = (long *)puVar8[1];
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (pCVar2 != (Connection *)0x0) {
    if (param_5 == 0) {
      uVar10 = 0;
    }
    else {
      plVar9 = (long *)FUN_004a2934();
      uVar10 = (**(code **)(*plVar9 + 0xa8))(plVar9,param_5);
    }
    puVar8 = (undefined8 *)operator_new(8);
    *puVar8 = uVar10;
    FUN_004a3c54(&local_98,param_4);
    __src = local_98;
    if (cStack_81 < '\0') {
      if (uStack_90 < 0x17) {
        local_a0 = CONCAT17((char)uStack_90,(undefined7)local_a0);
      }
      else {
        if (0x7fffffffffffffef < uStack_90) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uStack_90 | 0xf) + 1;
        __dest = (undefined1 **)operator_new(uVar1);
        local_a0 = uVar1 | 0x8000000000000000;
        uStack_a8 = uStack_90;
        local_b0 = (undefined1 *)__dest;
      }
      if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uStack_90 + 1))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest,__src,uStack_90 + 1);
    }
    else {
      local_a0 = CONCAT17(cStack_81,local_88);
      uStack_a8 = uStack_90;
      local_b0 = local_98;
    }
    local_68 = FUN_004ce5b4;
    local_60 = &PTR_FUN_00d1f230;
    local_78[0] = puVar8;
    discord::voice::Connection::GetMLSPairwiseFingerprint(pCVar2,param_3,&local_b0,local_78);
    if ((code *)local_60[1] != (code *)0x0) {
      (*(code *)local_60[1])(local_78[0]);
    }
    if ((long)local_a0 < 0) {
      operator_delete(local_b0);
    }
    if (cStack_81 < '\0') {
      operator_delete(local_98);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    do {
      lVar6 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_005466cc(plVar7);
    }
  }
  FUN_004c1858(auStack_80);
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004c9288  Java_com_discord_native_engine_NativeConnection_nativeDestroyInstance =====

void Java_com_discord_native_engine_NativeConnection_nativeDestroyInstance
               (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar4 = FUN_004a3bd4();
  uVar8 = *(undefined8 *)(lVar4 + 0x578);
  plVar5 = (long *)FUN_004a2934();
  pvVar6 = (void *)(**(code **)(*plVar5 + 0x328))(plVar5,param_2,uVar8);
  if (pvVar6 != (void *)0x0) {
    plVar5 = *(long **)((long)pvVar6 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_005466cc(plVar5);
      }
    }
    operator_delete(pvVar6);
    uVar8 = *(undefined8 *)(lVar4 + 0x578);
    plVar5 = (long *)FUN_004a2934();
                    /* WARNING: Could not recover jumptable at 0x004c9330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x370))(plVar5,param_2,uVar8,0);
    return;
  }
  return;
}


// ===== 004c9344  FUN_004c9344 =====

void FUN_004c9344(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_004e1714();
  if ((uVar1 & 1) != 0) {
    FUN_004e12e0(param_2,param_3);
    FUN_004c1a48(param_1);
    return;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// ===== 004c93a0  FUN_004c93a0 =====

/* WARNING: Removing unreachable block (ram,0x004c9554) */

void FUN_004c93a0(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *__src;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  void *pvVar9;
  undefined8 *__dest;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  void *local_90;
  void *local_88;
  void *local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar7 = FUN_004a2934();
  FUN_004c1850(auStack_70,uVar7);
  FUN_004c1b20(auStack_78,0x80);
  lVar8 = FUN_004a3bd4();
  lVar3 = *param_2;
  lVar4 = param_2[1];
  uVar7 = *param_1;
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  local_90 = (void *)0x0;
  uVar5 = lVar4 - lVar3;
  if (uVar5 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar5 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar9 = operator_new(uVar5);
    lVar13 = 0;
    local_80 = (void *)((long)pvVar9 + ((long)uVar5 >> 3) * 8);
    local_90 = pvVar9;
    do {
      puVar2 = (undefined8 *)(lVar3 + lVar13);
      __dest = (undefined8 *)((long)pvVar9 + lVar13);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        __src = (undefined8 *)*puVar2;
        uVar5 = puVar2[1];
        if (uVar5 < 0x17) {
          *(char *)((long)pvVar9 + lVar13 + 0x17) = (char)uVar5;
        }
        else {
          if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = (uVar5 | 0xf) + 1;
          __dest = (undefined8 *)operator_new(uVar1);
          puVar2 = (undefined8 *)((long)pvVar9 + lVar13);
          puVar2[1] = uVar5;
          puVar2[2] = uVar1 | 0x8000000000000000;
          *puVar2 = __dest;
        }
        if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        memmove(__dest,__src,uVar5 + 1);
      }
      else {
        uVar11 = puVar2[1];
        uVar10 = *puVar2;
        __dest[2] = puVar2[2];
        __dest[1] = uVar11;
        *__dest = uVar10;
      }
      lVar13 = lVar13 + 0x18;
    } while (lVar3 + lVar13 != lVar4);
    local_88 = (void *)((long)pvVar9 + lVar13);
  }
  uVar12 = *(undefined8 *)(lVar8 + 0x598);
  uVar10 = FUN_004c95e0(&local_90);
  uVar11 = FUN_004a2934();
  FUN_004c2120(uVar11,uVar7,uVar12,uVar10);
  if (local_90 != (void *)0x0) {
    for (; local_88 != local_90; local_88 = (void *)((long)local_88 + -0x18)) {
    }
    local_88 = local_90;
    operator_delete(local_90);
  }
  FUN_004c1b84(auStack_78);
  FUN_004c1858(auStack_70);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c95e0  FUN_004c95e0 =====

undefined8 FUN_004c95e0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  plVar2 = (long *)FUN_004a2934();
  lVar8 = *param_1;
  lVar1 = param_1[1];
  uVar7 = (lVar1 - lVar8 >> 3) * -0x5555555555555555;
  uVar3 = (**(code **)(*plVar2 + 0x560))
                    (plVar2,uVar7 & 0xffffffff,*(undefined8 *)(*DAT_00d60cc8 + 8),0);
  if (lVar1 != lVar8) {
    lVar8 = 0;
    uVar6 = 0;
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    do {
      uVar5 = (param_1[1] - *param_1 >> 3) * -0x5555555555555555;
      if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x591,
                   "__n < size()","vector[] index out of bounds");
      }
      uVar4 = FUN_004a3de8(*param_1 + lVar8);
      (**(code **)(*plVar2 + 0x570))(plVar2,uVar3,uVar6 & 0xffffffff,uVar4);
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar7 != uVar6);
  }
  return uVar3;
}


// ===== 004c96ec  FUN_004c96ec =====

undefined8 * FUN_004c96ec(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004c973c  FUN_004c973c =====

void FUN_004c973c(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004c9778  FUN_004c9778 =====

void FUN_004c9778(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *__dest;
  ulong uVar6;
  int iVar7;
  undefined1 *__src;
  size_t __n;
  undefined1 *puVar8;
  undefined2 local_70 [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_004e05c4();
  if ((uVar4 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_004c9954;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  else {
    uVar2 = FUN_004e04c8(param_2);
    if (uVar2 == 0) {
      puVar5 = (undefined1 *)0x0;
      puVar8 = (undefined1 *)0x0;
    }
    else {
      puVar5 = (undefined1 *)operator_new((ulong)uVar2);
      puVar8 = puVar5 + uVar2;
    }
    iVar3 = FUN_004e04c8(param_2);
    __dest = puVar5;
    if (iVar3 != 0) {
      iVar7 = 0;
      __src = puVar5;
      do {
        uVar4 = FUN_004e119c(param_2,iVar7);
        if ((uVar4 & 1) == 0) {
          local_70[0] = 0;
          if (puVar8 <= puVar5) goto LAB_004c9860;
LAB_004c98d0:
          if (puVar5 == (undefined1 *)0x0) {
LAB_004c9928:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          *puVar5 = (undefined1)local_70[0];
          __dest = __src;
        }
        else {
          FUN_004e09f8(param_2,iVar7);
          FUN_004c19b8(local_70);
          if (puVar5 < puVar8) goto LAB_004c98d0;
LAB_004c9860:
          __n = (long)puVar5 - (long)__src;
          uVar4 = __n + 1;
          if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar6 = ((long)puVar8 - (long)__src) * 2;
          if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
            uVar6 = uVar4;
          }
          if (0x3ffffffffffffffe < (ulong)((long)puVar8 - (long)__src)) {
            uVar6 = 0x7fffffffffffffff;
          }
          if (uVar6 == 0) goto LAB_004c9928;
          __dest = (undefined1 *)operator_new(uVar6);
          puVar5 = __dest + __n;
          puVar8 = __dest + uVar6;
          *puVar5 = (undefined1)local_70[0];
          memmove(__dest,__src,__n);
          if (__src != (undefined1 *)0x0) {
            operator_delete(__src);
          }
        }
        puVar5 = puVar5 + 1;
        iVar7 = iVar7 + 1;
        __src = __dest;
      } while (iVar3 != iVar7);
    }
    *param_1 = __dest;
    param_1[1] = puVar5;
    param_1[2] = puVar8;
    *(undefined1 *)(param_1 + 3) = 1;
    if (*(long *)(lVar1 + 0x28) != local_68) {
LAB_004c9954:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 004c9958  FUN_004c9958 =====

/* WARNING: Removing unreachable block (ram,0x004c9ad0) */
/* WARNING: Removing unreachable block (ram,0x004c9c6c) */
/* WARNING: Removing unreachable block (ram,0x004c9ce0) */
/* WARNING: Removing unreachable block (ram,0x004c9c78) */
/* WARNING: Removing unreachable block (ram,0x004c9adc) */
/* WARNING: Removing unreachable block (ram,0x004c9c94) */
/* WARNING: Removing unreachable block (ram,0x004c9ca0) */
/* WARNING: Removing unreachable block (ram,0x004c9cb8) */
/* WARNING: Removing unreachable block (ram,0x004c9cac) */
/* WARNING: Removing unreachable block (ram,0x004c9c54) */

void FUN_004c9958(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined2 local_e0 [4];
  undefined2 local_d8 [4];
  undefined2 local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  long *local_98;
  long local_90;
  long local_88;
  char local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_004e05d4();
  if (((((uVar5 & 1) == 0) || (uVar5 = FUN_004e1714(param_2,&DAT_001ab396), (uVar5 & 1) == 0)) ||
      (uVar5 = FUN_004e1714(param_2,"rtxType"), (uVar5 & 1) == 0)) ||
     (uVar5 = FUN_004e1714(param_2,&DAT_001b0a79), (uVar5 & 1) == 0)) {
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[4] = param_1 + 5;
    goto LAB_004c9a1c;
  }
  uVar5 = FUN_004e1714(param_2,&DAT_001ab396);
  if ((uVar5 & 1) == 0) {
    local_d8[0]._0_1_ = 0;
    local_d8[0] = 0;
  }
  else {
    FUN_004e12e0(param_2,&DAT_001ab396);
    FUN_004c19b8(local_d8);
  }
  local_d0 = CONCAT11(local_d0._1_1_,(undefined1)local_d8[0]);
  uVar5 = FUN_004e1714(param_2,"rtxType");
  if ((uVar5 & 1) == 0) {
    local_e0[0]._0_1_ = 0;
    local_e0[0] = 0;
  }
  else {
    FUN_004e12e0(param_2,"rtxType");
    FUN_004c19b8(local_e0);
  }
  local_d0 = CONCAT11((undefined1)local_e0[0],(undefined1)local_d0);
  uVar5 = FUN_004e1714(param_2,&DAT_001b0a79);
  if ((uVar5 & 1) == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_60 = 0;
    local_68 = 0;
  }
  else {
    FUN_004e12e0(param_2,&DAT_001b0a79);
    FUN_004c191c(&local_78);
  }
  uStack_c0 = uStack_70;
  local_c8 = (void *)local_78;
  local_b8 = local_68;
  uVar5 = FUN_004e1714(param_2,"params");
  if ((uVar5 & 1) == 0) {
    local_90 = 0;
    local_88 = 0;
    local_98 = &local_90;
    local_80 = '\0';
LAB_004c9bb4:
    local_a8 = 0;
    local_a0 = 0;
LAB_004c9bc4:
    local_b0 = &local_a8;
    lVar6 = 0;
  }
  else {
    FUN_004e12e0(param_2,"params");
    FUN_004c9d40(&local_98);
    lVar6 = local_88;
    if (local_80 == '\0') goto LAB_004c9bb4;
    local_a8 = local_90;
    local_a0 = local_88;
    if (local_88 == 0) goto LAB_004c9bc4;
    *(long **)(local_90 + 0x10) = &local_a8;
    local_90 = 0;
    local_88 = 0;
    local_b0 = local_98;
    local_98 = &local_90;
  }
  lVar4 = local_b8;
  uVar3 = uStack_c0;
  pvVar2 = local_c8;
  local_f8 = &local_f0;
  uStack_e8 = 0;
  local_f0 = 0;
  param_1[6] = lVar6;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  *(undefined2 *)param_1 = local_d0;
  param_1[2] = uVar3;
  param_1[1] = pvVar2;
  param_1[3] = lVar4;
  param_1[4] = local_b0;
  plVar7 = param_1 + 5;
  *plVar7 = local_a8;
  if (lVar6 == 0) {
    param_1[4] = plVar7;
  }
  else {
    *(long **)(local_a8 + 0x10) = plVar7;
    local_a8 = 0;
    local_a0 = 0;
    local_b0 = &local_a8;
  }
  *(undefined1 *)(param_1 + 7) = 1;
  FUN_00441e1c(&local_b0,local_a8);
  if (local_b8 < 0) {
    operator_delete(local_c8);
  }
  FUN_00441e1c(&local_f8,local_f0);
  FUN_00441e1c(&local_98,local_90);
LAB_004c9a1c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c9ce8  FUN_004c9ce8 =====

void FUN_004c9ce8(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_004e1714();
  if ((uVar1 & 1) != 0) {
    FUN_004e12e0(param_2,param_3);
    FUN_004c19b8(param_1);
    return;
  }
  *param_1 = 0;
  return;
}


// ===== 004c9d40  FUN_004c9d40 =====

/* WARNING: Removing unreachable block (ram,0x004c9e04) */
/* WARNING: Removing unreachable block (ram,0x004c9e5c) */

void FUN_004c9d40(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *local_b8;
  void *local_b0;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  void *local_80;
  undefined1 local_78 [24];
  char local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_004e05d4();
  if ((uVar6 & 1) == 0) {
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    *param_1 = param_1 + 1;
  }
  else {
    local_98 = 0;
    local_90 = 0;
    local_a0 = &local_98;
    FUN_004e1754(&local_b8,param_2);
    pvVar3 = local_b0;
    for (pvVar1 = local_b8; pvVar1 != pvVar3; pvVar1 = (void *)((long)pvVar1 + 0x18)) {
      FUN_004e138c(param_2,pvVar1);
      FUN_004c191c(local_78);
      if (local_60 != '\0') {
        local_80 = pvVar1;
        lVar7 = FUN_004c9f50(&local_a0,pvVar1,&DAT_001f7168,&local_80,local_88);
        FUN_00411268(lVar7 + 0x38,local_78);
      }
    }
    if (local_b8 != (void *)0x0) {
      for (; local_b0 != local_b8; local_b0 = (void *)((long)local_b0 + -0x18)) {
      }
      operator_delete(local_b8);
    }
    param_1[2] = 0;
    puVar9 = param_1 + 1;
    *puVar9 = 0;
    *param_1 = puVar9;
    puVar8 = local_a0;
    while (puVar8 != &local_98) {
      FUN_004414e0(param_1,puVar9,puVar8 + 4,puVar8 + 4);
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                   "__x != nullptr","node shouldn\'t be null");
      }
      puVar4 = (undefined8 *)puVar8[1];
      puVar10 = puVar8;
      if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
        do {
          puVar8 = (undefined8 *)puVar10[2];
          bVar5 = (undefined8 *)*puVar8 != puVar10;
          puVar10 = puVar8;
        } while (bVar5);
      }
      else {
        do {
          puVar8 = puVar4;
          puVar4 = (undefined8 *)*puVar8;
        } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
      }
    }
    *(undefined1 *)(param_1 + 3) = 1;
    FUN_00441e1c(&local_a0,local_98);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004c9f50  FUN_004c9f50 =====

undefined1  [16]
FUN_004c9f50(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *__src;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  plVar7 = (long *)param_1[1];
  plVar8 = param_1 + 1;
  while (plVar9 = plVar8, plVar7 != (long *)0x0) {
    while( true ) {
      plVar9 = plVar7;
      uVar3 = FUN_0041d7a0(param_2,plVar9 + 4);
      if ((uVar3 >> 7 & 1) != 0) break;
      uVar3 = FUN_0041d7a0(plVar9 + 4,param_2);
      if ((uVar3 >> 7 & 1) == 0) {
        puVar4 = (undefined8 *)*plVar8;
        if (puVar4 == (undefined8 *)0x0) goto LAB_004c9fcc;
        uVar6 = 0;
        goto LAB_004ca0ac;
      }
      plVar8 = plVar9 + 1;
      plVar7 = (long *)*plVar8;
      if ((long *)*plVar8 == (long *)0x0) goto LAB_004c9fcc;
    }
    plVar8 = plVar9;
    plVar7 = (long *)*plVar9;
  }
LAB_004c9fcc:
  puVar4 = (undefined8 *)operator_new(0x50);
  param_4 = (undefined8 *)*param_4;
  puVar5 = puVar4 + 4;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    __src = (undefined8 *)*param_4;
    uVar2 = param_4[1];
    if (uVar2 < 0x17) {
      *(char *)((long)puVar4 + 0x37) = (char)uVar2;
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      puVar5 = (undefined8 *)operator_new(uVar1);
      puVar4[4] = puVar5;
      puVar4[5] = uVar2;
      puVar4[6] = uVar1 | 0x8000000000000000;
    }
    if ((puVar5 <= __src) && (__src < (undefined8 *)((long)puVar5 + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar5,__src,uVar2 + 1);
  }
  else {
    uVar10 = param_4[1];
    uVar6 = *param_4;
    puVar4[6] = param_4[2];
    puVar4[5] = uVar10;
    *puVar5 = uVar6;
  }
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = plVar9;
  *plVar8 = (long)puVar4;
  puVar5 = puVar4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar5 = (undefined8 *)*plVar8;
  }
  FUN_0041dcd0(param_1[1],puVar5);
  uVar6 = 1;
  param_1[2] = param_1[2] + 1;
LAB_004ca0ac:
  auVar11._8_8_ = uVar6;
  auVar11._0_8_ = puVar4;
  return auVar11;
}


// ===== 004ca0f4  FUN_004ca0f4 =====

void FUN_004ca0f4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  undefined8 local_c0;
  undefined2 *puStack_b8;
  undefined2 *local_b0;
  undefined8 local_a0;
  void *pvStack_98;
  undefined8 uStack_90;
  long local_88;
  long *local_80;
  long local_78;
  long local_70;
  undefined1 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_004e05c4();
  if ((uVar4 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_004ca2e4;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  else {
    local_c0 = 0;
    puStack_b8 = (undefined2 *)0x0;
    local_b0 = (undefined2 *)0x0;
    uVar2 = FUN_004e04c8(param_2);
    FUN_004ca2e8(&local_c0,uVar2);
    iVar3 = FUN_004e04c8(param_2);
    if (iVar3 != 0) {
      iVar6 = 0;
      do {
        uVar4 = FUN_004e119c(param_2,iVar6);
        if ((uVar4 & 1) == 0) {
          local_70 = 0;
          local_68 = 0;
          local_88 = 0;
          uStack_90 = 0;
          local_78 = 0;
          pvStack_98 = (void *)0x0;
          local_a0 = 0;
          local_80 = &local_78;
        }
        else {
          FUN_004e09f8(param_2,iVar6);
          FUN_004ca6ac(&local_a0);
        }
        if (puStack_b8 < local_b0) {
          if (puStack_b8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          *puStack_b8 = (undefined2)local_a0;
          *(long *)(puStack_b8 + 0xc) = local_88;
          *(undefined8 *)(puStack_b8 + 8) = uStack_90;
          *(void **)(puStack_b8 + 4) = pvStack_98;
          uStack_90 = 0;
          local_88 = 0;
          pvStack_98 = (void *)0x0;
          *(long **)(puStack_b8 + 0x10) = local_80;
          plVar5 = (long *)(puStack_b8 + 0x14);
          *plVar5 = local_78;
          *(long *)(puStack_b8 + 0x18) = local_70;
          if (local_70 == 0) {
            *(long **)(puStack_b8 + 0x10) = plVar5;
          }
          else {
            *(long **)(local_78 + 0x10) = plVar5;
            local_78 = 0;
            local_70 = 0;
            local_80 = &local_78;
          }
          puStack_b8 = puStack_b8 + 0x1c;
        }
        else {
          FUN_004ca464(&local_c0,&local_a0);
        }
        FUN_00441e1c(&local_80,local_78);
        if (local_88 < 0) {
          operator_delete(pvStack_98);
        }
        iVar6 = iVar6 + 1;
      } while (iVar3 != iVar6);
    }
    param_1[1] = puStack_b8;
    *param_1 = local_c0;
    param_1[2] = local_b0;
    *(undefined1 *)(param_1 + 3) = 1;
    if (*(long *)(lVar1 + 0x28) != local_58) {
LAB_004ca2e4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 004ca2e8  FUN_004ca2e8 =====

/* WARNING: Removing unreachable block (ram,0x004ca424) */

void FUN_004ca2e8(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  pvVar9 = (void *)*param_1;
  if ((ulong)((param_1[2] - (long)pvVar9 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    if (0x492492492492492 < param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar11 = param_1[1];
    pvVar3 = operator_new(param_2 * 0x38);
    lVar10 = (long)pvVar3 + (lVar11 - (long)pvVar9);
    pvVar3 = (void *)((long)pvVar3 + param_2 * 0x38);
    if (lVar11 - (long)pvVar9 == 0) {
      *param_1 = lVar10;
      param_1[1] = lVar10;
      param_1[2] = (long)pvVar3;
    }
    else {
      lVar4 = 0;
      do {
        lVar1 = lVar11 + lVar4;
        lVar2 = lVar10 + lVar4;
        *(undefined2 *)(lVar2 + -0x38) = *(undefined2 *)(lVar1 + -0x38);
        uVar13 = *(undefined8 *)(lVar1 + -0x28);
        uVar12 = *(undefined8 *)(lVar1 + -0x30);
        *(undefined8 *)(lVar2 + -0x20) = *(undefined8 *)(lVar1 + -0x20);
        *(undefined8 *)(lVar2 + -0x28) = uVar13;
        *(undefined8 *)(lVar2 + -0x30) = uVar12;
        *(undefined8 *)(lVar1 + -0x28) = 0;
        *(undefined8 *)(lVar1 + -0x20) = 0;
        *(undefined8 *)(lVar1 + -0x30) = 0;
        *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar1 + -0x18);
        plVar5 = (long *)(lVar1 + -0x10);
        lVar7 = *plVar5;
        plVar6 = (long *)(lVar2 + -0x10);
        *plVar6 = lVar7;
        lVar8 = *(long *)(lVar1 + -8);
        *(long *)(lVar2 + -8) = lVar8;
        if (lVar8 == 0) {
          *(long **)(lVar2 + -0x18) = plVar6;
        }
        else {
          *(long **)(lVar7 + 0x10) = plVar6;
          *(long **)(lVar1 + -0x18) = plVar5;
          *plVar5 = 0;
          *(undefined8 *)(lVar1 + -8) = 0;
        }
        lVar4 = lVar4 + -0x38;
      } while ((void *)(lVar11 + lVar4) != pvVar9);
      param_1[2] = (long)pvVar3;
      pvVar9 = (void *)*param_1;
      pvVar3 = (void *)param_1[1];
      *param_1 = lVar10 + lVar4;
      param_1[1] = lVar10;
      if (pvVar3 != pvVar9) {
        lVar10 = (long)pvVar3 + -0x18;
        do {
          FUN_00441e1c(lVar10,*(undefined8 *)(lVar10 + 8));
          pvVar3 = (void *)(lVar10 + -0x20);
          lVar10 = lVar10 + -0x38;
        } while (pvVar3 != pvVar9);
      }
    }
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
      return;
    }
  }
  return;
}


// ===== 004ca464  FUN_004ca464 =====

/* WARNING: Removing unreachable block (ram,0x004ca640) */

void FUN_004ca464(long *param_1,undefined2 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  undefined2 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar4 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  uVar7 = lVar6 * -0x2492492492492492;
  if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
    uVar7 = uVar1;
  }
  if (0x249249249249248 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
    uVar7 = 0x492492492492492;
  }
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (0x492492492492492 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar3 = operator_new(uVar7 * 0x38);
  uVar13 = *(undefined8 *)(param_2 + 0xc);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  puVar5 = (undefined2 *)((long)pvVar3 + lVar4 * 8);
  uVar14 = *(undefined8 *)(param_2 + 8);
  uVar12 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *puVar5 = *param_2;
  plVar8 = (long *)(param_2 + 0x14);
  lVar4 = *plVar8;
  *(undefined8 *)(puVar5 + 0xc) = uVar13;
  *(undefined8 *)(puVar5 + 0x10) = uVar15;
  lVar6 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(puVar5 + 8) = uVar14;
  *(undefined8 *)(puVar5 + 4) = uVar12;
  plVar9 = (long *)(puVar5 + 0x14);
  *plVar9 = lVar4;
  *(long *)(puVar5 + 0x18) = lVar6;
  if (lVar6 == 0) {
    *(long **)(puVar5 + 0x10) = plVar9;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar9;
    *(long **)(param_2 + 0x10) = plVar8;
    *plVar8 = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  pvVar2 = (void *)*param_1;
  pvVar11 = (void *)param_1[1];
  pvVar3 = (void *)((long)pvVar3 + uVar7 * 0x38);
  if (pvVar11 == pvVar2) {
    *param_1 = (long)puVar5;
    param_1[1] = (long)(puVar5 + 0x1c);
    param_1[2] = (long)pvVar3;
  }
  else {
    lVar4 = 0;
    do {
      *(undefined2 *)((long)puVar5 + lVar4 + -0x38) = *(undefined2 *)((long)pvVar11 + lVar4 + -0x38)
      ;
      uVar15 = *(undefined8 *)((long)pvVar11 + lVar4 + -0x28);
      uVar13 = *(undefined8 *)((long)pvVar11 + lVar4 + -0x30);
      *(undefined8 *)((long)puVar5 + lVar4 + -0x20) = *(undefined8 *)((long)pvVar11 + lVar4 + -0x20)
      ;
      *(undefined8 *)((long)puVar5 + lVar4 + -0x28) = uVar15;
      *(undefined8 *)((long)puVar5 + lVar4 + -0x30) = uVar13;
      *(undefined8 *)((long)pvVar11 + lVar4 + -0x28) = 0;
      *(undefined8 *)((long)pvVar11 + lVar4 + -0x20) = 0;
      *(undefined8 *)((long)pvVar11 + lVar4 + -0x30) = 0;
      *(undefined8 *)((long)puVar5 + lVar4 + -0x18) = *(undefined8 *)((long)pvVar11 + lVar4 + -0x18)
      ;
      plVar8 = (long *)((long)pvVar11 + lVar4 + -0x10);
      lVar10 = *plVar8;
      plVar9 = (long *)((long)puVar5 + lVar4 + -0x10);
      *plVar9 = lVar10;
      lVar6 = *(long *)((long)pvVar11 + lVar4 + -8);
      *(long *)((long)puVar5 + lVar4 + -8) = lVar6;
      if (lVar6 == 0) {
        *(long **)((long)puVar5 + lVar4 + -0x18) = plVar9;
      }
      else {
        *(long **)(lVar10 + 0x10) = plVar9;
        *(long **)((long)pvVar11 + lVar4 + -0x18) = plVar8;
        *plVar8 = 0;
        *(undefined8 *)((long)pvVar11 + lVar4 + -8) = 0;
      }
      lVar4 = lVar4 + -0x38;
    } while ((void *)((long)pvVar11 + lVar4) != pvVar2);
    param_1[2] = (long)pvVar3;
    pvVar11 = (void *)*param_1;
    pvVar3 = (void *)param_1[1];
    *param_1 = (long)puVar5 + lVar4;
    param_1[1] = (long)(puVar5 + 0x1c);
    if (pvVar3 != pvVar11) {
      lVar4 = (long)pvVar3 + -0x18;
      do {
        FUN_00441e1c(lVar4,*(undefined8 *)(lVar4 + 8));
        pvVar3 = (void *)(lVar4 + -0x20);
        lVar4 = lVar4 + -0x38;
      } while (pvVar3 != pvVar11);
    }
  }
  if (pvVar11 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar11);
  return;
}


// ===== 004ca6ac  FUN_004ca6ac =====

/* WARNING: Removing unreachable block (ram,0x004ca824) */
/* WARNING: Removing unreachable block (ram,0x004ca9c0) */
/* WARNING: Removing unreachable block (ram,0x004caa34) */
/* WARNING: Removing unreachable block (ram,0x004ca9cc) */
/* WARNING: Removing unreachable block (ram,0x004ca830) */
/* WARNING: Removing unreachable block (ram,0x004ca9e8) */
/* WARNING: Removing unreachable block (ram,0x004ca9f4) */
/* WARNING: Removing unreachable block (ram,0x004caa0c) */
/* WARNING: Removing unreachable block (ram,0x004caa00) */
/* WARNING: Removing unreachable block (ram,0x004ca9a8) */

void FUN_004ca6ac(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined2 local_e0 [4];
  undefined2 local_d8 [4];
  undefined2 local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  long *local_98;
  long local_90;
  long local_88;
  char local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_004e05d4();
  if (((((uVar5 & 1) == 0) || (uVar5 = FUN_004e1714(param_2,&DAT_001ab396), (uVar5 & 1) == 0)) ||
      (uVar5 = FUN_004e1714(param_2,"rtxType"), (uVar5 & 1) == 0)) ||
     (uVar5 = FUN_004e1714(param_2,&DAT_001b0a79), (uVar5 & 1) == 0)) {
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[4] = param_1 + 5;
    goto LAB_004ca770;
  }
  uVar5 = FUN_004e1714(param_2,&DAT_001ab396);
  if ((uVar5 & 1) == 0) {
    local_d8[0]._0_1_ = 0;
    local_d8[0] = 0;
  }
  else {
    FUN_004e12e0(param_2,&DAT_001ab396);
    FUN_004c19b8(local_d8);
  }
  local_d0 = CONCAT11(local_d0._1_1_,(undefined1)local_d8[0]);
  uVar5 = FUN_004e1714(param_2,"rtxType");
  if ((uVar5 & 1) == 0) {
    local_e0[0]._0_1_ = 0;
    local_e0[0] = 0;
  }
  else {
    FUN_004e12e0(param_2,"rtxType");
    FUN_004c19b8(local_e0);
  }
  local_d0 = CONCAT11((undefined1)local_e0[0],(undefined1)local_d0);
  uVar5 = FUN_004e1714(param_2,&DAT_001b0a79);
  if ((uVar5 & 1) == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_60 = 0;
    local_68 = 0;
  }
  else {
    FUN_004e12e0(param_2,&DAT_001b0a79);
    FUN_004c191c(&local_78);
  }
  uStack_c0 = uStack_70;
  local_c8 = (void *)local_78;
  local_b8 = local_68;
  uVar5 = FUN_004e1714(param_2,"params");
  if ((uVar5 & 1) == 0) {
    local_90 = 0;
    local_88 = 0;
    local_98 = &local_90;
    local_80 = '\0';
LAB_004ca908:
    local_a8 = 0;
    local_a0 = 0;
LAB_004ca918:
    local_b0 = &local_a8;
    lVar6 = 0;
  }
  else {
    FUN_004e12e0(param_2,"params");
    FUN_004c9d40(&local_98);
    lVar6 = local_88;
    if (local_80 == '\0') goto LAB_004ca908;
    local_a8 = local_90;
    local_a0 = local_88;
    if (local_88 == 0) goto LAB_004ca918;
    *(long **)(local_90 + 0x10) = &local_a8;
    local_90 = 0;
    local_88 = 0;
    local_b0 = local_98;
    local_98 = &local_90;
  }
  lVar4 = local_b8;
  uVar3 = uStack_c0;
  pvVar2 = local_c8;
  local_f8 = &local_f0;
  uStack_e8 = 0;
  local_f0 = 0;
  param_1[6] = lVar6;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  *(undefined2 *)param_1 = local_d0;
  param_1[2] = uVar3;
  param_1[1] = pvVar2;
  param_1[3] = lVar4;
  param_1[4] = local_b0;
  plVar7 = param_1 + 5;
  *plVar7 = local_a8;
  if (lVar6 == 0) {
    param_1[4] = plVar7;
  }
  else {
    *(long **)(local_a8 + 0x10) = plVar7;
    local_a8 = 0;
    local_a0 = 0;
    local_b0 = &local_a8;
  }
  *(undefined1 *)(param_1 + 7) = 1;
  FUN_00441e1c(&local_b0,local_a8);
  if (local_b8 < 0) {
    operator_delete(local_c8);
  }
  FUN_00441e1c(&local_f8,local_f0);
  FUN_00441e1c(&local_98,local_90);
LAB_004ca770:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004caa3c  FUN_004caa3c =====

void FUN_004caa3c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 local_b8 [8];
  undefined4 local_b0 [2];
  undefined4 local_a8 [2];
  undefined4 local_a0 [2];
  undefined4 local_98 [2];
  void *local_90 [2];
  char local_79;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_004e05d4();
  if (((((uVar4 & 1) == 0) || (uVar4 = FUN_004e1714(param_2,&DAT_001ab396), (uVar4 & 1) == 0)) ||
      (uVar4 = FUN_004e1714(param_2,&DAT_001e455b), (uVar4 & 1) == 0)) ||
     (((uVar4 = FUN_004e1714(param_2,&DAT_001b0a79), (uVar4 & 1) == 0 ||
       (uVar4 = FUN_004e1714(param_2,"channels"), (uVar4 & 1) == 0)) ||
      ((uVar4 = FUN_004e1714(param_2,"pacsize"), (uVar4 & 1) == 0 ||
       (uVar4 = FUN_004e1714(param_2,&DAT_001d6214), (uVar4 & 1) == 0)))))) {
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_004cac28;
    *(undefined8 *)((long)param_1 + 0x31) = 0;
    *(undefined8 *)((long)param_1 + 0x29) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    FUN_004c9ce8(local_b8,param_2,&DAT_001ab396);
    local_70 = local_b8[0];
    FUN_004c4940(local_90,param_2,&DAT_001b0a79);
    FUN_004c55b4(&local_68,local_90);
    FUN_004c9344(local_98,param_2,&DAT_001e455b);
    local_50 = local_98[0];
    FUN_004c9344(local_a0,param_2,"pacsize");
    uStack_4c = local_a0[0];
    FUN_004c9344(local_a8,param_2,"channels");
    uStack_48 = local_a8[0];
    FUN_004c9344(local_b0,param_2,&DAT_001d6214);
    uVar3 = uStack_60;
    uVar2 = local_68;
    local_40 = 0;
    local_68 = 0;
    uStack_60 = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    uStack_44 = local_b0[0];
    param_1[2] = uVar3;
    param_1[1] = uVar2;
    *(undefined1 *)param_1 = local_70;
    param_1[3] = local_58;
    local_58 = 0;
    param_1[5] = CONCAT44(local_b0[0],uStack_48);
    param_1[4] = CONCAT44(uStack_4c,local_50);
    *(undefined1 *)(param_1 + 7) = 1;
    if (local_79 < '\0') {
      operator_delete(local_90[0]);
    }
    if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_004cac28:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 004cac2c  FUN_004cac2c =====

void FUN_004cac2c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined8 local_a0;
  void *pvStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  long *plStack_78;
  long local_70;
  long local_68;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_004e05c4();
  if ((uVar4 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_004cae20;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  else {
    local_c0 = 0;
    puStack_b8 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    uVar2 = FUN_004e04c8(param_2);
    FUN_004cae24(&local_c0,uVar2);
    iVar3 = FUN_004e04c8(param_2);
    if (iVar3 != 0) {
      iVar6 = 0;
      do {
        uVar4 = FUN_004e119c(param_2,iVar6);
        if ((uVar4 & 1) == 0) {
          local_60 = 0;
          pvStack_98 = (void *)0x0;
          local_a0 = 0;
          local_88 = 0;
          uStack_90 = 0;
          local_80 = 0;
          local_68 = 0;
          local_70 = 0;
          plStack_78 = &local_70;
        }
        else {
          FUN_004e09f8(param_2,iVar6);
          FUN_004cb190(&local_a0);
        }
        if (puStack_b8 < local_b0) {
          if (puStack_b8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          *puStack_b8 = (undefined1)local_a0;
          *(long *)(puStack_b8 + 0x18) = local_88;
          *(undefined8 *)(puStack_b8 + 0x10) = uStack_90;
          *(void **)(puStack_b8 + 8) = pvStack_98;
          uStack_90 = 0;
          local_88 = 0;
          pvStack_98 = (void *)0x0;
          *(undefined8 *)(puStack_b8 + 0x20) = local_80;
          *(long **)(puStack_b8 + 0x28) = plStack_78;
          plVar5 = (long *)(puStack_b8 + 0x30);
          *plVar5 = local_70;
          *(long *)(puStack_b8 + 0x38) = local_68;
          if (local_68 == 0) {
            *(long **)(puStack_b8 + 0x28) = plVar5;
          }
          else {
            *(long **)(local_70 + 0x10) = plVar5;
            local_70 = 0;
            local_68 = 0;
            plStack_78 = &local_70;
          }
          puStack_b8 = puStack_b8 + 0x40;
        }
        else {
          FUN_004caf7c(&local_c0,&local_a0);
        }
        FUN_00441e1c(&plStack_78,local_70);
        if (local_88 < 0) {
          operator_delete(pvStack_98);
        }
        iVar6 = iVar6 + 1;
      } while (iVar3 != iVar6);
    }
    param_1[1] = puStack_b8;
    *param_1 = local_c0;
    param_1[2] = local_b0;
    *(undefined1 *)(param_1 + 3) = 1;
    if (*(long *)(lVar1 + 0x28) != local_58) {
LAB_004cae20:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 004cae24  FUN_004cae24 =====

/* WARNING: Removing unreachable block (ram,0x004caf3c) */

void FUN_004cae24(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  pvVar9 = (void *)*param_1;
  if ((ulong)(param_1[2] - (long)pvVar9 >> 6) < param_2) {
    if (param_2 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar11 = param_1[1];
    pvVar3 = operator_new(param_2 * 0x40);
    lVar10 = (long)pvVar3 + (lVar11 - (long)pvVar9);
    pvVar3 = (void *)((long)pvVar3 + param_2 * 0x40);
    if (lVar11 - (long)pvVar9 == 0) {
      *param_1 = lVar10;
      param_1[1] = lVar10;
      param_1[2] = (long)pvVar3;
    }
    else {
      lVar4 = 0;
      do {
        lVar1 = lVar11 + lVar4;
        lVar2 = lVar10 + lVar4;
        *(undefined1 *)(lVar2 + -0x40) = *(undefined1 *)(lVar1 + -0x40);
        uVar13 = *(undefined8 *)(lVar1 + -0x30);
        uVar12 = *(undefined8 *)(lVar1 + -0x38);
        *(undefined8 *)(lVar2 + -0x28) = *(undefined8 *)(lVar1 + -0x28);
        *(undefined8 *)(lVar2 + -0x30) = uVar13;
        *(undefined8 *)(lVar2 + -0x38) = uVar12;
        *(undefined8 *)(lVar1 + -0x30) = 0;
        *(undefined8 *)(lVar1 + -0x28) = 0;
        *(undefined8 *)(lVar1 + -0x38) = 0;
        *(undefined8 *)(lVar2 + -0x20) = *(undefined8 *)(lVar1 + -0x20);
        *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar1 + -0x18);
        plVar5 = (long *)(lVar1 + -0x10);
        lVar7 = *plVar5;
        plVar6 = (long *)(lVar2 + -0x10);
        *plVar6 = lVar7;
        lVar8 = *(long *)(lVar1 + -8);
        *(long *)(lVar2 + -8) = lVar8;
        if (lVar8 == 0) {
          *(long **)(lVar2 + -0x18) = plVar6;
        }
        else {
          *(long **)(lVar7 + 0x10) = plVar6;
          *(long **)(lVar1 + -0x18) = plVar5;
          *plVar5 = 0;
          *(undefined8 *)(lVar1 + -8) = 0;
        }
        lVar4 = lVar4 + -0x40;
      } while ((void *)(lVar11 + lVar4) != pvVar9);
      param_1[2] = (long)pvVar3;
      pvVar9 = (void *)*param_1;
      pvVar3 = (void *)param_1[1];
      *param_1 = lVar10 + lVar4;
      param_1[1] = lVar10;
      if (pvVar3 != pvVar9) {
        lVar10 = (long)pvVar3 + -0x18;
        do {
          FUN_00441e1c(lVar10,*(undefined8 *)(lVar10 + 8));
          pvVar3 = (void *)(lVar10 + -0x28);
          lVar10 = lVar10 + -0x40;
        } while (pvVar3 != pvVar9);
      }
    }
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
      return;
    }
  }
  return;
}


// ===== 004caf7c  FUN_004caf7c =====

/* WARNING: Removing unreachable block (ram,0x004cb124) */

void FUN_004caf7c(long *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  void *pvVar3;
  undefined1 uVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar14 = param_1[1] - *param_1 >> 6;
  uVar1 = lVar14 + 1;
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar6 = param_1[2] - *param_1;
  uVar8 = uVar6 >> 5;
  if (uVar8 <= uVar1) {
    uVar8 = uVar1;
  }
  if (0x7fffffffffffffbf < uVar6) {
    uVar8 = 0x3ffffffffffffff;
  }
  if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  if (uVar8 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401ad4();
  }
  pvVar5 = operator_new(uVar8 * 0x40);
  puVar2 = (undefined1 *)((long)pvVar5 + lVar14 * 0x40);
  uVar15 = *(undefined8 *)(param_2 + 8);
  uVar4 = *param_2;
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = uVar15;
  uVar16 = *(undefined8 *)(param_2 + 0x20);
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  plVar7 = (long *)(param_2 + 0x30);
  lVar14 = *plVar7;
  *puVar2 = uVar4;
  *(undefined8 *)(puVar2 + 0x28) = uVar10;
  lVar11 = *(long *)(param_2 + 0x38);
  *(undefined8 *)(puVar2 + 0x20) = uVar16;
  *(undefined8 *)(puVar2 + 0x18) = uVar15;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  plVar9 = (long *)(puVar2 + 0x30);
  *plVar9 = lVar14;
  *(long *)(puVar2 + 0x38) = lVar11;
  if (lVar11 == 0) {
    *(long **)(puVar2 + 0x28) = plVar9;
  }
  else {
    *(long **)(lVar14 + 0x10) = plVar9;
    *(long **)(param_2 + 0x28) = plVar7;
    *plVar7 = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  pvVar3 = (void *)*param_1;
  pvVar13 = (void *)param_1[1];
  pvVar5 = (void *)((long)pvVar5 + uVar8 * 0x40);
  if (pvVar13 == pvVar3) {
    *param_1 = (long)puVar2;
    param_1[1] = (long)(puVar2 + 0x40);
    param_1[2] = (long)pvVar5;
  }
  else {
    lVar14 = 0;
    do {
      puVar2[lVar14 + -0x40] = *(undefined1 *)((long)pvVar13 + lVar14 + -0x40);
      uVar15 = *(undefined8 *)((long)pvVar13 + lVar14 + -0x30);
      uVar10 = *(undefined8 *)((long)pvVar13 + lVar14 + -0x38);
      *(undefined8 *)(puVar2 + lVar14 + -0x28) = *(undefined8 *)((long)pvVar13 + lVar14 + -0x28);
      *(undefined8 *)(puVar2 + lVar14 + -0x30) = uVar15;
      *(undefined8 *)(puVar2 + lVar14 + -0x38) = uVar10;
      *(undefined8 *)((long)pvVar13 + lVar14 + -0x30) = 0;
      *(undefined8 *)((long)pvVar13 + lVar14 + -0x28) = 0;
      *(undefined8 *)((long)pvVar13 + lVar14 + -0x38) = 0;
      *(undefined8 *)(puVar2 + lVar14 + -0x20) = *(undefined8 *)((long)pvVar13 + lVar14 + -0x20);
      *(undefined8 *)(puVar2 + lVar14 + -0x18) = *(undefined8 *)((long)pvVar13 + lVar14 + -0x18);
      plVar7 = (long *)((long)pvVar13 + lVar14 + -0x10);
      lVar12 = *plVar7;
      plVar9 = (long *)(puVar2 + lVar14 + -0x10);
      *plVar9 = lVar12;
      lVar11 = *(long *)((long)pvVar13 + lVar14 + -8);
      *(long *)(puVar2 + lVar14 + -8) = lVar11;
      if (lVar11 == 0) {
        *(long **)(puVar2 + lVar14 + -0x18) = plVar9;
      }
      else {
        *(long **)(lVar12 + 0x10) = plVar9;
        *(long **)((long)pvVar13 + lVar14 + -0x18) = plVar7;
        *plVar7 = 0;
        *(undefined8 *)((long)pvVar13 + lVar14 + -8) = 0;
      }
      lVar14 = lVar14 + -0x40;
    } while ((void *)((long)pvVar13 + lVar14) != pvVar3);
    param_1[2] = (long)pvVar5;
    pvVar13 = (void *)*param_1;
    pvVar5 = (void *)param_1[1];
    *param_1 = (long)(puVar2 + lVar14);
    param_1[1] = (long)(puVar2 + 0x40);
    if (pvVar5 != pvVar13) {
      lVar14 = (long)pvVar5 + -0x18;
      do {
        FUN_00441e1c(lVar14,*(undefined8 *)(lVar14 + 8));
        pvVar5 = (void *)(lVar14 + -0x28);
        lVar14 = lVar14 + -0x40;
      } while (pvVar5 != pvVar13);
    }
  }
  if (pvVar13 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar13);
  return;
}


// ===== 004cb190  FUN_004cb190 =====

/* WARNING: Removing unreachable block (ram,0x004cb2dc) */
/* WARNING: Removing unreachable block (ram,0x004cb508) */
/* WARNING: Removing unreachable block (ram,0x004cb57c) */
/* WARNING: Removing unreachable block (ram,0x004cb514) */
/* WARNING: Removing unreachable block (ram,0x004cb2e8) */
/* WARNING: Removing unreachable block (ram,0x004cb530) */
/* WARNING: Removing unreachable block (ram,0x004cb53c) */
/* WARNING: Removing unreachable block (ram,0x004cb554) */
/* WARNING: Removing unreachable block (ram,0x004cb548) */
/* WARNING: Removing unreachable block (ram,0x004cb4f0) */

void FUN_004cb190(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined2 local_f0 [4];
  undefined1 local_e8;
  void *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  long *local_c0;
  long local_b8;
  long local_b0;
  long *local_a8;
  long local_a0;
  long local_98;
  char local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_004e05d4();
  if (((((uVar5 & 1) == 0) || (uVar5 = FUN_004e1714(param_2,&DAT_001ab396), (uVar5 & 1) == 0)) ||
      (uVar5 = FUN_004e1714(param_2,&DAT_001e455b), (uVar5 & 1) == 0)) ||
     ((uVar5 = FUN_004e1714(param_2,&DAT_001b0a79), (uVar5 & 1) == 0 ||
      (uVar5 = FUN_004e1714(param_2,"channels"), (uVar5 & 1) == 0)))) {
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = param_1 + 6;
    goto LAB_004cb268;
  }
  uVar5 = FUN_004e1714(param_2,&DAT_001ab396);
  if ((uVar5 & 1) == 0) {
    local_e8 = 0;
    local_f0[0] = 0;
  }
  else {
    FUN_004e12e0(param_2,&DAT_001ab396);
    FUN_004c19b8(local_f0);
    local_e8 = (undefined1)local_f0[0];
  }
  uVar5 = FUN_004e1714(param_2,&DAT_001b0a79);
  if ((uVar5 & 1) == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_60 = 0;
    local_68 = 0;
  }
  else {
    FUN_004e12e0(param_2,&DAT_001b0a79);
    FUN_004c191c(&local_78);
  }
  uStack_d8 = uStack_70;
  local_e0 = (void *)local_78;
  local_d0 = local_68;
  uVar5 = FUN_004e1714(param_2,&DAT_001e455b);
  if ((uVar5 & 1) == 0) {
    local_80 = 0;
    local_7c = 0;
  }
  else {
    FUN_004e12e0(param_2,&DAT_001e455b);
    FUN_004c1a48(&local_80);
  }
  local_c8 = local_80;
  uVar5 = FUN_004e1714(param_2,"channels");
  if ((uVar5 & 1) == 0) {
    local_88 = 0;
    local_84 = 0;
  }
  else {
    FUN_004e12e0(param_2,"channels");
    FUN_004c1a48(&local_88);
  }
  uStack_c4 = local_88;
  uVar5 = FUN_004e1714(param_2,"params");
  if ((uVar5 & 1) == 0) {
    local_a0 = 0;
    local_98 = 0;
    local_a8 = &local_a0;
    local_90 = '\0';
LAB_004cb448:
    local_b8 = 0;
    local_b0 = 0;
LAB_004cb458:
    local_c0 = &local_b8;
    lVar6 = 0;
  }
  else {
    FUN_004e12e0(param_2,"params");
    FUN_004c9d40(&local_a8);
    lVar6 = local_98;
    if (local_90 == '\0') goto LAB_004cb448;
    local_b8 = local_a0;
    local_b0 = local_98;
    if (local_98 == 0) goto LAB_004cb458;
    *(long **)(local_a0 + 0x10) = &local_b8;
    local_a0 = 0;
    local_98 = 0;
    local_c0 = local_a8;
    local_a8 = &local_a0;
  }
  lVar4 = local_d0;
  uVar3 = uStack_d8;
  pvVar2 = local_e0;
  local_108 = &local_100;
  uStack_f8 = 0;
  local_100 = 0;
  param_1[5] = local_c0;
  local_e0 = (void *)0x0;
  uStack_d8 = 0;
  local_d0 = 0;
  *(undefined1 *)param_1 = local_e8;
  param_1[2] = uVar3;
  param_1[1] = pvVar2;
  param_1[7] = lVar6;
  param_1[3] = lVar4;
  param_1[4] = CONCAT44(uStack_c4,local_c8);
  plVar7 = param_1 + 6;
  *plVar7 = local_b8;
  if (lVar6 == 0) {
    param_1[5] = plVar7;
  }
  else {
    *(long **)(local_b8 + 0x10) = plVar7;
    local_b8 = 0;
    local_b0 = 0;
    local_c0 = &local_b8;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_00441e1c(&local_c0,local_b8);
  if (local_d0 < 0) {
    operator_delete(local_e0);
  }
  FUN_00441e1c(&local_108,local_100);
  FUN_00441e1c(&local_a8,local_a0);
LAB_004cb268:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cb584  FUN_004cb584 =====

void FUN_004cb584(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined8 local_d0;
  undefined4 *puStack_c8;
  undefined4 *local_c0;
  undefined8 local_b0;
  void *pvStack_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined4 local_77;
  undefined4 uStack_73;
  undefined4 uStack_6f;
  undefined4 uStack_6b;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_004e05c4();
  if ((uVar4 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_004cb738;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  else {
    local_d0 = 0;
    puStack_c8 = (undefined4 *)0x0;
    local_c0 = (undefined4 *)0x0;
    uVar2 = FUN_004e04c8(param_2);
    FUN_004cb73c(&local_d0,uVar2);
    iVar3 = FUN_004e04c8(param_2);
    if (iVar3 != 0) {
      iVar5 = 0;
      do {
        uVar4 = FUN_004e119c(param_2,iVar5);
        if ((uVar4 & 1) == 0) {
          uStack_6f = 0;
          uStack_6b = 0;
          pvStack_a8 = (void *)0x0;
          local_b0 = 0;
          local_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          local_90 = 0;
          uStack_78 = 0;
          local_77 = 0;
          uStack_73 = 0;
          uStack_80 = 0;
        }
        else {
          FUN_004e09f8(param_2,iVar5);
          FUN_004cb880(&local_b0);
        }
        if (puStack_c8 < local_c0) {
          if (puStack_c8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          *puStack_c8 = (undefined4)local_b0;
          *(long *)(puStack_c8 + 6) = local_98;
          *(undefined8 *)(puStack_c8 + 4) = uStack_a0;
          *(void **)(puStack_c8 + 2) = pvStack_a8;
          uStack_a0 = 0;
          local_98 = 0;
          pvStack_a8 = (void *)0x0;
          *(undefined8 *)(puStack_c8 + 10) = uStack_88;
          *(undefined8 *)(puStack_c8 + 8) = local_90;
          *(ulong *)(puStack_c8 + 0xe) =
               CONCAT35((undefined3)uStack_73,CONCAT41(local_77,uStack_78));
          *(undefined8 *)(puStack_c8 + 0xc) = uStack_80;
          *(ulong *)((long)puStack_c8 + 0x3d) = CONCAT44(uStack_6f,uStack_73);
          puStack_c8 = puStack_c8 + 0x12;
        }
        else {
          FUN_0046bae4(&local_d0,&local_b0);
          if (local_98 < 0) {
            operator_delete(pvStack_a8);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar3 != iVar5);
    }
    param_1[1] = puStack_c8;
    *param_1 = local_d0;
    param_1[2] = local_c0;
    *(undefined1 *)(param_1 + 3) = 1;
    if (*(long *)(lVar1 + 0x28) != local_58) {
LAB_004cb738:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 004cb73c  FUN_004cb73c =====

/* WARNING: Removing unreachable block (ram,0x004cb854) */

void FUN_004cb73c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pvVar7 = (void *)*param_1;
  if ((ulong)((param_1[2] - (long)pvVar7 >> 3) * -0x71c71c71c71c71c7) < param_2) {
    if (0x38e38e38e38e38e < param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = param_1[1];
    pvVar4 = operator_new(param_2 * 0x48);
    lVar1 = (long)pvVar4 + (lVar8 - (long)pvVar7);
    pvVar4 = (void *)((long)pvVar4 + param_2 * 0x48);
    if (lVar8 - (long)pvVar7 == 0) {
      *param_1 = lVar1;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar4;
    }
    else {
      lVar5 = 0;
      do {
        lVar2 = lVar8 + lVar5;
        lVar3 = lVar1 + lVar5;
        lVar5 = lVar5 + -0x48;
        *(undefined4 *)(lVar3 + -0x48) = *(undefined4 *)(lVar2 + -0x48);
        uVar9 = *(undefined8 *)(lVar2 + -0x38);
        uVar6 = *(undefined8 *)(lVar2 + -0x40);
        *(undefined8 *)(lVar3 + -0x30) = *(undefined8 *)(lVar2 + -0x30);
        *(undefined8 *)(lVar3 + -0x38) = uVar9;
        *(undefined8 *)(lVar3 + -0x40) = uVar6;
        *(undefined8 *)(lVar2 + -0x38) = 0;
        *(undefined8 *)(lVar2 + -0x30) = 0;
        uVar9 = *(undefined8 *)(lVar2 + -0x18);
        uVar11 = *(undefined8 *)(lVar2 + -0x20);
        uVar10 = *(undefined8 *)(lVar2 + -0x28);
        *(undefined8 *)(lVar2 + -0x40) = 0;
        uVar6 = *(undefined8 *)(lVar2 + -0xb);
        *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar2 + -0x10);
        *(undefined8 *)(lVar3 + -0x18) = uVar9;
        *(undefined8 *)(lVar3 + -0x20) = uVar11;
        *(undefined8 *)(lVar3 + -0x28) = uVar10;
        *(undefined8 *)(lVar3 + -0xb) = uVar6;
      } while ((void *)(lVar8 + lVar5) != pvVar7);
      param_1[2] = (long)pvVar4;
      pvVar7 = (void *)*param_1;
      pvVar4 = (void *)param_1[1];
      *param_1 = lVar1 + lVar5;
      param_1[1] = lVar1;
      for (; pvVar4 != pvVar7; pvVar4 = (void *)((long)pvVar4 + -0x48)) {
      }
    }
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
      return;
    }
  }
  return;
}


// ===== 004cb880  FUN_004cb880 =====

void FUN_004cb880(undefined8 *param_1,undefined8 param_2)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  int *__src;
  undefined8 *__src_00;
  ulong uVar4;
  int **ppiVar5;
  undefined8 *__dest;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  int *local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  ulong uStack_a8;
  ulong local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  ulong uStack_80;
  long local_78;
  undefined8 uStack_70;
  uint local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 local_4c;
  long local_48;
  
  ppiVar5 = &local_d0;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_004e05d4();
  if ((((uVar4 & 1) == 0) || (uVar4 = FUN_004e1714(param_2,&DAT_001b99dd), (uVar4 & 1) == 0)) ||
     (uVar4 = FUN_004e1714(param_2,&DAT_001ab396), (uVar4 & 1) == 0)) {
    if (*(long *)(lVar3 + 0x28) == local_48) {
      *(undefined8 *)((long)param_1 + 0x41) = 0;
      *(undefined8 *)((long)param_1 + 0x39) = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      return;
    }
    goto LAB_004cbe0c;
  }
  local_90 = 0;
  local_68 = local_68 & 0xffffff00;
  local_64 = 0;
  uStack_60 = 0;
  uStack_80 = 0;
  local_88 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_78 = 0;
  local_54 = 0;
  uStack_50 = 0;
  local_5c = 0;
  uStack_58 = 0;
  local_4c = 0;
  uVar4 = FUN_004e1714(param_2,&DAT_001ab396);
  if ((uVar4 & 1) == 0) {
    local_b0 = (int *)0x0;
    uStack_a8 = 0;
    local_98 = 0;
    local_a0 = 0;
LAB_004cb990:
    uStack_c8 = uStack_a8;
    local_d0 = local_b0;
    local_c0 = local_a0;
  }
  else {
    FUN_004e12e0(param_2,&DAT_001ab396);
    FUN_004c191c(&local_b0);
    uVar4 = uStack_a8;
    __src = local_b0;
    if (-1 < (long)local_a0) goto LAB_004cb990;
    if (uStack_a8 < 0x17) {
      local_c0 = CONCAT17((char)uStack_a8,(undefined7)local_c0);
    }
    else {
      if (0x7fffffffffffffef < uStack_a8) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uStack_a8 | 0xf) + 1;
      ppiVar5 = (int **)operator_new(uVar2);
      local_c0 = uVar2 | 0x8000000000000000;
      uStack_c8 = uVar4;
      local_d0 = (int *)ppiVar5;
    }
    sVar1 = uVar4 + 1;
    if ((ppiVar5 <= __src) && (__src < (int *)((long)ppiVar5 + sVar1))) goto LAB_004cbddc;
    memmove(ppiVar5,__src,sVar1);
    operator_delete(__src);
  }
  uVar7 = (uint)(char)local_c0._7_1_;
  ppiVar5 = (int **)local_d0;
  if (-1 < (int)uVar7) {
    ppiVar5 = &local_d0;
  }
  uVar4 = uStack_c8;
  if (-1 < (int)uVar7) {
    uVar4 = (ulong)local_c0._7_1_;
  }
  if ((ppiVar5 == (int **)0x0) && (uVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  if (uVar4 == 5) {
    if (*(int *)ppiVar5 == 0x69647561 && (char)*(int *)((long)ppiVar5 + 4) == 'o') {
      local_90 = 0;
    }
    else {
      if (*(int *)ppiVar5 != 0x65646976 || (char)*(int *)((long)ppiVar5 + 4) != 'o')
      goto LAB_004cba08;
      local_90 = 1;
    }
    uVar4 = FUN_004e1714(param_2,&DAT_001b99dd);
    if ((uVar4 & 1) == 0) {
      local_b0 = (int *)0x0;
      uStack_a8 = 0;
      local_98 = 0;
      local_a0 = 0;
    }
    else {
      FUN_004e12e0(param_2,&DAT_001b99dd);
      FUN_004c191c(&local_b0);
    }
    FUN_00411268(&local_88,&local_b0);
    if ((long)local_a0 < 0) {
      operator_delete(local_b0);
    }
    uVar4 = FUN_004e1714(param_2,&DAT_001c7baf);
    if ((uVar4 & 1) == 0) {
LAB_004cbaf4:
      uVar8 = 0;
    }
    else {
      FUN_004e12e0(param_2,&DAT_001c7baf);
      FUN_004c1a48(&local_b0);
      if (local_b0._4_1_ == '\0') goto LAB_004cbaf4;
      uVar8 = SUB84(local_b0,0);
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
    uVar4 = FUN_004e1714(param_2,"rtxSsrc");
    if ((uVar4 & 1) == 0) {
LAB_004cbb38:
      uVar8 = 0;
    }
    else {
      FUN_004e12e0(param_2,"rtxSsrc");
      FUN_004c1a48(&local_b0);
      if (local_b0._4_1_ == '\0') goto LAB_004cbb38;
      uVar8 = SUB84(local_b0,0);
    }
    uStack_70 = CONCAT44(uVar8,(undefined4)uStack_70);
    uVar4 = FUN_004e1714(param_2,"active");
    if ((uVar4 & 1) == 0) {
      bVar6 = false;
    }
    else {
      FUN_004e12e0(param_2,"active");
      FUN_004c18d0(&local_b0);
      bVar6 = local_b0._1_1_ != '\0' && (char)local_b0 != '\0';
    }
    local_68 = CONCAT31(local_68._1_3_,bVar6);
    uVar4 = FUN_004e1714(param_2,"maxBitrate");
    if ((uVar4 & 1) == 0) {
      local_64 = 0;
    }
    else {
      FUN_004e12e0(param_2,"maxBitrate");
      FUN_004c1a90(&local_b0);
      local_64 = 0;
      if (local_b0._4_1_ != '\0') {
        local_64 = (undefined4)local_b0;
      }
    }
    uVar4 = FUN_004e1714(param_2,"quality");
    uVar8 = 100;
    if ((uVar4 & 1) != 0) {
      FUN_004e12e0(param_2,"quality");
      FUN_004c1a90(&local_b0);
      uVar8 = 100;
      if (local_b0._4_1_ != '\0') {
        uVar8 = (undefined4)local_b0;
      }
    }
    uStack_58 = uVar8;
    uVar4 = FUN_004e1714(param_2,"maxPixelCount");
    if ((uVar4 & 1) == 0) {
      local_54 = 0;
    }
    else {
      FUN_004e12e0(param_2,"maxPixelCount");
      FUN_004c1a90(&local_b0);
      local_54 = 0;
      if (local_b0._4_1_ != '\0') {
        local_54 = (undefined4)local_b0;
      }
    }
    uVar4 = FUN_004e1714(param_2,"soundshare");
    if ((uVar4 & 1) == 0) {
      local_4c = false;
    }
    else {
      FUN_004e12e0(param_2,"soundshare");
      FUN_004c18d0(&local_b0);
      local_4c = local_b0._1_1_ != '\0' && (char)local_b0 != '\0';
    }
    uVar4 = uStack_80;
    __src_00 = local_88;
    __dest = param_1 + 1;
    *(undefined4 *)param_1 = local_90;
    if (local_78 < 0) {
      if (uStack_80 < 0x17) {
        *(char *)((long)param_1 + 0x1f) = (char)uStack_80;
      }
      else {
        if (0x7fffffffffffffef < uStack_80) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar2 = (uStack_80 | 0xf) + 1;
        __dest = (undefined8 *)operator_new(uVar2);
        param_1[1] = __dest;
        param_1[2] = uVar4;
        param_1[3] = uVar2 | 0x8000000000000000;
      }
      sVar1 = uVar4 + 1;
      if ((__dest <= __src_00) && (__src_00 < (undefined8 *)((long)__dest + sVar1))) {
LAB_004cbddc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest,__src_00,sVar1);
    }
    else {
      param_1[2] = uStack_80;
      *__dest = local_88;
      param_1[3] = local_78;
    }
    *(undefined1 *)(param_1 + 9) = 1;
    param_1[5] = CONCAT44(local_64,local_68);
    param_1[4] = uStack_70;
    param_1[7] = CONCAT44(local_54,uStack_58);
    param_1[6] = CONCAT44(local_5c,uStack_60);
    *(ulong *)((long)param_1 + 0x3d) = CONCAT17(local_4c,CONCAT43(uStack_50,local_54._1_3_));
    if ((long)local_c0 < 0) {
LAB_004cba1c:
      operator_delete(local_d0);
    }
  }
  else {
LAB_004cba08:
    *(undefined8 *)((long)param_1 + 0x41) = 0;
    *(undefined8 *)((long)param_1 + 0x39) = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    if ((uVar7 >> 7 & 1) != 0) goto LAB_004cba1c;
  }
  if (local_78 < 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_004cbe0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cbe10  FUN_004cbe10 =====

void FUN_004cbe10(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *__dest;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined4 *__src;
  size_t __n;
  undefined4 *puVar9;
  undefined4 local_70;
  undefined1 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_004e05c4();
  if ((uVar4 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_004cc008;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  else {
    uVar2 = FUN_004e04c8(param_2);
    if (uVar2 == 0) {
      puVar5 = (undefined4 *)0x0;
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)operator_new((ulong)uVar2 * 4);
      puVar9 = puVar5 + uVar2;
    }
    iVar3 = FUN_004e04c8(param_2);
    __dest = puVar5;
    if (iVar3 != 0) {
      iVar8 = 0;
      __src = puVar5;
      do {
        uVar4 = FUN_004e119c(param_2,iVar8);
        if ((uVar4 & 1) == 0) {
          local_70 = 0;
          local_6c = 0;
          if (puVar9 <= puVar5) goto LAB_004cbef8;
LAB_004cbf80:
          if (puVar5 == (undefined4 *)0x0) {
LAB_004cbfd8:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          *puVar5 = local_70;
          __dest = __src;
        }
        else {
          FUN_004e09f8(param_2,iVar8);
          FUN_004c1a48(&local_70);
          if (puVar5 < puVar9) goto LAB_004cbf80;
LAB_004cbef8:
          __n = (long)puVar5 - (long)__src;
          lVar7 = (long)__n >> 2;
          uVar4 = lVar7 + 1;
          if (uVar4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar6 = (ulong)((long)puVar9 - (long)__src) >> 1;
          if (uVar6 <= uVar4) {
            uVar6 = uVar4;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar9 - (long)__src)) {
            uVar6 = 0x3fffffffffffffff;
          }
          if (uVar6 == 0) goto LAB_004cbfd8;
          if (uVar6 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00401ad4();
          }
          __dest = (undefined4 *)operator_new(uVar6 * 4);
          puVar5 = __dest + lVar7;
          puVar9 = __dest + uVar6;
          *puVar5 = local_70;
          memmove(__dest,__src,__n);
          if (__src != (undefined4 *)0x0) {
            operator_delete(__src);
          }
        }
        puVar5 = puVar5 + 1;
        iVar8 = iVar8 + 1;
        __src = __dest;
      } while (iVar3 != iVar8);
    }
    *param_1 = __dest;
    param_1[1] = puVar5;
    param_1[2] = puVar9;
    *(undefined1 *)(param_1 + 3) = 1;
    if (*(long *)(lVar1 + 0x28) != local_68) {
LAB_004cc008:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 004cc00c  FUN_004cc00c =====

void FUN_004cc00c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 **__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  __dest = &local_70;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar4 = FUN_004a2934();
  FUN_004c1850(auStack_50,uVar4);
  FUN_004c1b20(auStack_58,0x80);
  lVar5 = FUN_004a3bd4();
  uVar4 = *param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined1 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      local_60 = CONCAT17((char)uVar2,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_60 = uVar1 | 0x8000000000000000;
      local_70 = (undefined1 *)__dest;
      uStack_68 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_68 = param_2[1];
    local_70 = (undefined1 *)*param_2;
    local_60 = param_2[2];
  }
  uVar8 = *(undefined8 *)(lVar5 + 0x5b8);
  uVar6 = FUN_004a3de8(&local_70);
  uVar7 = FUN_004a2934();
  FUN_004c2120(uVar7,uVar4,uVar8,uVar6);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  FUN_004c1b84(auStack_58);
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cc178  FUN_004cc178 =====

undefined8 * FUN_004cc178(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004cc1c8  FUN_004cc1c8 =====

void FUN_004cc1c8(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004cc204  FUN_004cc204 =====

void FUN_004cc204(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 **__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  __dest = &local_70;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar4 = FUN_004a2934();
  FUN_004c1850(auStack_50,uVar4);
  FUN_004c1b20(auStack_58,0x80);
  lVar5 = FUN_004a3bd4();
  uVar4 = *param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined1 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      local_60 = CONCAT17((char)uVar2,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_60 = uVar1 | 0x8000000000000000;
      local_70 = (undefined1 *)__dest;
      uStack_68 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_68 = param_2[1];
    local_70 = (undefined1 *)*param_2;
    local_60 = param_2[2];
  }
  uVar8 = *(undefined8 *)(lVar5 + 0x5b8);
  uVar6 = FUN_004a3de8(&local_70);
  uVar7 = FUN_004a2934();
  FUN_004c2120(uVar7,uVar4,uVar8,uVar6);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  FUN_004c1b84(auStack_58);
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cc370  FUN_004cc370 =====

undefined8 * FUN_004cc370(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004cc3c0  FUN_004cc3c0 =====

void FUN_004cc3c0(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004cc3fc  FUN_004cc3fc =====

void FUN_004cc3fc(float param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 **__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long local_68;
  
  __dest = &local_90;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  param_2 = (undefined8 *)*param_2;
  uVar4 = FUN_004a2934();
  FUN_004c1850(auStack_70,uVar4);
  FUN_004c1b20(auStack_78,0x80);
  uVar8 = 4;
  if ((param_5 & 1) == 0) {
    uVar8 = 0;
  }
  lVar5 = FUN_004a3bd4();
  uVar4 = *param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined1 *)*param_3;
    uVar2 = param_3[1];
    if (uVar2 < 0x17) {
      local_80 = CONCAT17((char)uVar2,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      local_90 = (undefined1 *)__dest;
      uStack_88 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_88 = param_3[1];
    local_90 = (undefined1 *)*param_3;
    local_80 = param_3[2];
  }
  uVar9 = *(undefined8 *)(lVar5 + 0x5d8);
  uVar6 = FUN_004a3de8(&local_90);
  uVar7 = FUN_004a2934();
  FUN_004c2120((double)param_1,uVar7,uVar4,uVar9,uVar6,uVar8 | param_4);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  FUN_004c1b84(auStack_78);
  FUN_004c1858(auStack_70);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cc59c  FUN_004cc59c =====

undefined8 * FUN_004cc59c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004cc5ec  FUN_004cc5ec =====

void FUN_004cc5ec(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004cc628  FUN_004cc628 =====

void FUN_004cc628(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar2 = FUN_004a2934();
  FUN_004c1850(auStack_40,uVar2);
  FUN_004c1b20(auStack_48,0x80);
  lVar3 = FUN_004a3bd4();
  uVar4 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x5f8);
  uVar2 = FUN_004a2934();
  FUN_004c2120(uVar2,uVar4,uVar5);
  FUN_004c1b84(auStack_48);
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cc6bc  FUN_004cc6bc =====

undefined8 * FUN_004cc6bc(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004cc70c  FUN_004cc70c =====

void FUN_004cc70c(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004cc748  FUN_004cc748 =====

void FUN_004cc748(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined2 param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 **__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long local_68;
  
  __dest = &local_90;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar4 = FUN_004a2934();
  FUN_004c1850(auStack_70,uVar4);
  FUN_004c1b20(auStack_78,0x80);
  lVar5 = FUN_004a3bd4();
  uVar4 = *param_1;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __src = (undefined1 *)*param_3;
    uVar2 = param_3[1];
    if (uVar2 < 0x17) {
      local_80 = CONCAT17((char)uVar2,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      local_90 = (undefined1 *)__dest;
      uStack_88 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_88 = param_3[1];
    local_90 = (undefined1 *)*param_3;
    local_80 = param_3[2];
  }
  uVar8 = *(undefined8 *)(lVar5 + 0x618);
  uVar6 = FUN_004a3de8(&local_90);
  uVar7 = FUN_004a2934();
  FUN_004c2120(uVar7,uVar4,uVar8,param_2,uVar6,param_4,param_5);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  FUN_004c1b84(auStack_78);
  FUN_004c1858(auStack_70);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cc8e0  FUN_004cc8e0 =====

undefined8 * FUN_004cc8e0(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004cc930  FUN_004cc930 =====

void FUN_004cc930(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004cc96c  FUN_004cc96c =====

void FUN_004cc96c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 ****__src;
  undefined1 *__src_00;
  ulong uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 ****__dest;
  undefined1 **__dest_00;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 ***local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  
  __dest_00 = &local_a0;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar5 = FUN_004a2934();
  FUN_004c1850(auStack_60,uVar5);
  FUN_004c1b20(auStack_68,0x80);
  lVar6 = FUN_004a3bd4();
  uVar5 = *param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined8 ****)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      __dest = &local_80;
      local_70 = CONCAT17((char)uVar2,(undefined7)local_70);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 ****)operator_new(uVar1);
      local_70 = uVar1 | 0x8000000000000000;
      local_80 = __dest;
      uStack_78 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + uVar2 + 1)))
    goto LAB_004ccb74;
    memmove(__dest,__src,uVar2 + 1);
    cVar3 = *(char *)((long)param_4 + 0x17);
  }
  else {
    uStack_78 = param_2[1];
    local_80 = (undefined8 ***)*param_2;
    local_70 = param_2[2];
    cVar3 = *(char *)((long)param_4 + 0x17);
  }
  if (cVar3 < '\0') {
    __src_00 = (undefined1 *)*param_4;
    uVar2 = param_4[1];
    if (uVar2 < 0x17) {
      local_90 = CONCAT17((char)uVar2,(undefined7)local_90);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest_00 = (undefined1 **)operator_new(uVar1);
      local_90 = uVar1 | 0x8000000000000000;
      local_a0 = (undefined1 *)__dest_00;
      uStack_98 = uVar2;
    }
    if ((__dest_00 <= __src_00) && (__src_00 < (undefined1 *)((long)__dest_00 + uVar2 + 1))) {
LAB_004ccb74:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest_00,__src_00,uVar2 + 1);
  }
  else {
    uStack_98 = param_4[1];
    local_a0 = (undefined1 *)*param_4;
    local_90 = param_4[2];
  }
  uVar10 = *(undefined8 *)(lVar6 + 0x638);
  uVar7 = FUN_004a3de8(&local_80);
  uVar8 = FUN_004a3de8(&local_a0);
  uVar9 = FUN_004a2934();
  FUN_004c2120(uVar9,uVar5,uVar10,uVar7,param_3,uVar8);
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  FUN_004c1b84(auStack_68);
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ccba8  FUN_004ccba8 =====

undefined8 * FUN_004ccba8(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004ccbf8  FUN_004ccbf8 =====

void FUN_004ccbf8(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004ccc34  FUN_004ccc34 =====

void FUN_004ccc34(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 ****__src;
  undefined1 *__src_00;
  ulong uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 ****__dest;
  undefined1 **__dest_00;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 ***local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  
  __dest_00 = &local_a0;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar5 = FUN_004a2934();
  FUN_004c1850(auStack_60,uVar5);
  FUN_004c1b20(auStack_68,0x80);
  lVar6 = FUN_004a3bd4();
  uVar5 = *param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined8 ****)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      __dest = &local_80;
      local_70 = CONCAT17((char)uVar2,(undefined7)local_70);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 ****)operator_new(uVar1);
      local_70 = uVar1 | 0x8000000000000000;
      local_80 = __dest;
      uStack_78 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + uVar2 + 1)))
    goto LAB_004cce30;
    memmove(__dest,__src,uVar2 + 1);
    cVar3 = *(char *)((long)param_3 + 0x17);
  }
  else {
    uStack_78 = param_2[1];
    local_80 = (undefined8 ***)*param_2;
    local_70 = param_2[2];
    cVar3 = *(char *)((long)param_3 + 0x17);
  }
  if (cVar3 < '\0') {
    __src_00 = (undefined1 *)*param_3;
    uVar2 = param_3[1];
    if (uVar2 < 0x17) {
      local_90 = CONCAT17((char)uVar2,(undefined7)local_90);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest_00 = (undefined1 **)operator_new(uVar1);
      local_90 = uVar1 | 0x8000000000000000;
      local_a0 = (undefined1 *)__dest_00;
      uStack_98 = uVar2;
    }
    if ((__dest_00 <= __src_00) && (__src_00 < (undefined1 *)((long)__dest_00 + uVar2 + 1))) {
LAB_004cce30:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest_00,__src_00,uVar2 + 1);
  }
  else {
    uStack_98 = param_3[1];
    local_a0 = (undefined1 *)*param_3;
    local_90 = param_3[2];
  }
  uVar10 = *(undefined8 *)(lVar6 + 0x698);
  uVar7 = FUN_004a3de8(&local_80);
  uVar8 = FUN_004a3de8(&local_a0);
  uVar9 = FUN_004a2934();
  FUN_004c2120(uVar9,uVar5,uVar10,uVar7,uVar8);
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  FUN_004c1b84(auStack_68);
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004cce64  FUN_004cce64 =====

undefined8 * FUN_004cce64(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004cceb4  FUN_004cceb4 =====

void FUN_004cceb4(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004ccef0  FUN_004ccef0 =====

void FUN_004ccef0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 **__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  __dest = &local_70;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar4 = FUN_004a2934();
  FUN_004c1850(auStack_50,uVar4);
  FUN_004c1b20(auStack_58,0x80);
  lVar5 = FUN_004a3bd4();
  uVar4 = *param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined1 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      local_60 = CONCAT17((char)uVar2,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_60 = uVar1 | 0x8000000000000000;
      local_70 = (undefined1 *)__dest;
      uStack_68 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_68 = param_2[1];
    local_70 = (undefined1 *)*param_2;
    local_60 = param_2[2];
  }
  uVar8 = *(undefined8 *)(lVar5 + 0x6b8);
  uVar6 = FUN_004a3de8(&local_70);
  uVar7 = FUN_004a2934();
  FUN_004c2120(uVar7,uVar4,uVar8,uVar6);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  FUN_004c1b84(auStack_58);
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cd05c  FUN_004cd05c =====

undefined8 * FUN_004cd05c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004cd0ac  FUN_004cd0ac =====

void FUN_004cd0ac(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004cd0e8  FUN_004cd0e8 =====

void FUN_004cd0e8(undefined8 *param_1,undefined2 *param_2)

{
  ulong uVar1;
  undefined2 uVar2;
  long lVar3;
  undefined ****__src;
  undefined8 uVar4;
  long lVar5;
  undefined *****__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined ****local_c8;
  void *pvStack_c0;
  undefined7 local_b8;
  char cStack_b1;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined ****local_a0;
  void *pvStack_98;
  undefined8 local_90;
  char local_81;
  undefined1 auStack_70 [40];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar2 = *param_2;
  uStack_d8 = *(undefined8 *)(param_2 + 8);
  local_e0 = *(void **)(param_2 + 4);
  local_d0 = *(long *)(param_2 + 0xc);
  param_1 = (undefined8 *)*param_1;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  uVar4 = FUN_004a2934();
  FUN_004c1850(auStack_a8,uVar4);
  FUN_004c1b20(auStack_b0,0x80);
  FUN_004df134(auStack_70,7);
  FUN_004df1c8(&local_a0,uVar2);
  uVar4 = FUN_004e1438(auStack_70,"version");
  FUN_004dfa04(uVar4,&local_a0);
  FUN_004df880(&local_a0);
  FUN_004df478(&local_a0,&local_e0);
  uVar4 = FUN_004e1438(auStack_70,"epochAuthenticator");
  FUN_004dfa04(uVar4,&local_a0);
  FUN_004df880(&local_a0);
  FUN_004e36c8(&local_a0);
  FUN_004e36e0(&local_c8,&local_a0,auStack_70);
  local_a0 = (undefined ****)&PTR_FUN_00d1f540;
  if (local_81 < '\0') {
    operator_delete(pvStack_98);
  }
  FUN_004e36c0(&local_a0);
  lVar5 = FUN_004a3bd4();
  __src = local_c8;
  uVar4 = *param_1;
  if (cStack_b1 < '\0') {
    if (pvStack_c0 < (void *)0x17) {
      __dest = &local_a0;
      local_90 = CONCAT17((char)pvStack_c0,(undefined7)local_90);
    }
    else {
      if ((void *)0x7fffffffffffffef < pvStack_c0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = ((ulong)pvStack_c0 | 0xf) + 1;
      __dest = (undefined *****)operator_new(uVar1);
      local_90 = uVar1 | 0x8000000000000000;
      pvStack_98 = pvStack_c0;
      local_a0 = (undefined ****)__dest;
    }
    if ((__dest <= __src) && (__src < (undefined *****)((long)__dest + (long)pvStack_c0 + 1U))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,(long)pvStack_c0 + 1U);
  }
  else {
    local_90 = CONCAT17(cStack_b1,local_b8);
    pvStack_98 = pvStack_c0;
    local_a0 = local_c8;
  }
  uVar8 = *(undefined8 *)(lVar5 + 0x6d8);
  uVar6 = FUN_004a3de8(&local_a0);
  uVar7 = FUN_004a2934();
  FUN_004c2120(uVar7,uVar4,uVar8,uVar6);
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  if (cStack_b1 < '\0') {
    operator_delete(local_c8);
  }
  FUN_004df880(auStack_70);
  FUN_004c1b84(auStack_b0);
  FUN_004c1858(auStack_a8);
  if (local_d0 < 0) {
    operator_delete(local_e0);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cd350  FUN_004cd350 =====

undefined8 * FUN_004cd350(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004cd3a0  FUN_004cd3a0 =====

void FUN_004cd3a0(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004cd3dc  FUN_004cd3dc =====

void FUN_004cd3dc(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 **__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long local_68;
  
  __dest = &local_90;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar4 = FUN_004a2934();
  FUN_004c1850(auStack_70,uVar4);
  FUN_004c1b20(auStack_78,0x80);
  lVar5 = FUN_004a3bd4();
  uVar4 = *param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined1 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      local_80 = CONCAT17((char)uVar2,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      local_90 = (undefined1 *)__dest;
      uStack_88 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_88 = param_2[1];
    local_90 = (undefined1 *)*param_2;
    local_80 = param_2[2];
  }
  uVar8 = *(undefined8 *)(lVar5 + 0x658);
  uVar6 = FUN_004a3de8(&local_90);
  uVar7 = FUN_004a2934();
  FUN_004c2120(uVar7,uVar4,uVar8,uVar6,param_3,param_4,param_5);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  FUN_004c1b84(auStack_78);
  FUN_004c1858(auStack_70);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cd574  FUN_004cd574 =====

undefined8 * FUN_004cd574(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004cd5c4  FUN_004cd5c4 =====

void FUN_004cd5c4(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004cd600  FUN_004cd600 =====

/* WARNING: Removing unreachable block (ram,0x004cd8a4) */
/* WARNING: Removing unreachable block (ram,0x004cdb28) */

void FUN_004cd600(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                 long *param_5)

{
  ulong uVar1;
  char *pcVar2;
  undefined *****__src;
  undefined8 ****ppppuVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *****__dest;
  undefined8 ****ppppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int *piVar15;
  int iVar16;
  undefined8 ***local_130 [2];
  undefined8 local_120;
  undefined8 ***local_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined8 ***local_e8;
  ulong uStack_e0;
  undefined7 local_d8;
  char cStack_d1;
  undefined ****local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_98 [40];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar7 = FUN_004a2934();
  FUN_004c1850(auStack_f0,uVar7);
  FUN_004c1b20(auStack_f8,0x80);
  FUN_004df134(auStack_98,6);
  piVar15 = (int *)*param_5;
  piVar4 = (int *)param_5[1];
  if (piVar15 != piVar4) {
    iVar16 = 0;
    do {
      FUN_004df134(&local_c0,7);
      pcVar2 = "audio";
      if (*piVar15 != 0) {
        pcVar2 = "video";
      }
      FUN_004df270(&local_e8,pcVar2);
      uVar7 = FUN_004e1438(&local_c0,&DAT_001ab396);
      FUN_004dfa04(uVar7,&local_e8);
      FUN_004df880(&local_e8);
      FUN_004df478(&local_e8,piVar15 + 2);
      uVar7 = FUN_004e1438(&local_c0,&DAT_001b99dd);
      FUN_004dfa04(uVar7,&local_e8);
      FUN_004df880(&local_e8);
      FUN_004df1ec(&local_e8,piVar15[8]);
      uVar7 = FUN_004e1438(&local_c0,&DAT_001c7baf);
      FUN_004dfa04(uVar7,&local_e8);
      FUN_004df880(&local_e8);
      FUN_004df1ec(&local_e8,piVar15[9]);
      uVar7 = FUN_004e1438(&local_c0,"rtxSsrc");
      FUN_004dfa04(uVar7,&local_e8);
      FUN_004df880(&local_e8);
      FUN_004df5b4(&local_e8,(char)piVar15[10]);
      uVar7 = FUN_004e1438(&local_c0,"active");
      FUN_004dfa04(uVar7,&local_e8);
      FUN_004df880(&local_e8);
      FUN_004df1c8(&local_e8,piVar15[0xb]);
      uVar7 = FUN_004e1438(&local_c0,"maxBitrate");
      FUN_004dfa04(uVar7,&local_e8);
      FUN_004df880(&local_e8);
      FUN_004df1c8(&local_e8,piVar15[0xe]);
      uVar7 = FUN_004e1438(&local_c0,"quality");
      FUN_004dfa04(uVar7,&local_e8);
      FUN_004df880(&local_e8);
      FUN_004df1c8(&local_e8,piVar15[0xf]);
      uVar7 = FUN_004e1438(&local_c0,"maxPixelCount");
      FUN_004dfa04(uVar7,&local_e8);
      FUN_004df880(&local_e8);
      FUN_004df5b4(&local_e8,(char)piVar15[0x11]);
      uVar7 = FUN_004e1438(&local_c0,"soundshare");
      FUN_004dfa04(uVar7,&local_e8);
      FUN_004df880(&local_e8);
      uVar7 = FUN_004e05e4(auStack_98,iVar16);
      FUN_004dfa04(uVar7,&local_c0);
      FUN_004df880(&local_c0);
      piVar15 = piVar15 + 0x12;
      iVar16 = iVar16 + 1;
    } while (piVar15 != piVar4);
  }
  FUN_004e36c8(&local_c0);
  FUN_004e36e0(&local_e8,&local_c0,auStack_98);
  local_c0 = (undefined ****)&PTR_FUN_00d1f540;
  FUN_004e36c0(&local_c0);
  lVar8 = FUN_004a3bd4();
  uVar7 = *param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined *****)*param_2;
    uVar5 = param_2[1];
    if (uVar5 < 0x17) {
      __dest = &local_c0;
      local_b0 = CONCAT17((char)uVar5,(undefined7)local_b0);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar5 | 0xf) + 1;
      __dest = (undefined *****)operator_new(uVar1);
      local_b0 = uVar1 | 0x8000000000000000;
      local_c0 = (undefined ****)__dest;
      uStack_b8 = uVar5;
    }
    if ((__dest <= __src) && (__src < (undefined *****)((long)__dest + uVar5 + 1)))
    goto LAB_004cdb44;
    memmove(__dest,__src,uVar5 + 1);
  }
  else {
    uStack_b8 = param_2[1];
    local_c0 = (undefined ****)*param_2;
    local_b0 = param_2[2];
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    ppppuVar3 = (undefined8 ****)*param_4;
    uVar5 = param_4[1];
    if (uVar5 < 0x17) {
      ppppuVar9 = &local_110;
      local_100 = CONCAT17((char)uVar5,(undefined7)local_100);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar5 | 0xf) + 1;
      ppppuVar9 = (undefined8 ****)operator_new(uVar1);
      local_100 = uVar1 | 0x8000000000000000;
      local_110 = ppppuVar9;
      uStack_108 = uVar5;
    }
    if ((ppppuVar9 <= ppppuVar3) && (ppppuVar3 < (undefined8 ****)((long)ppppuVar9 + uVar5 + 1)))
    goto LAB_004cdb44;
    memmove(ppppuVar9,ppppuVar3,uVar5 + 1);
    ppppuVar3 = (undefined8 ****)local_e8;
    uVar5 = uStack_e0;
  }
  else {
    uStack_108 = param_4[1];
    local_110 = (undefined8 ***)*param_4;
    local_100 = param_4[2];
    ppppuVar3 = (undefined8 ****)local_e8;
    uVar5 = uStack_e0;
  }
  local_e8 = ppppuVar3;
  if (cStack_d1 < '\0') {
    if (uVar5 < 0x17) {
      ppppuVar9 = local_130;
      local_120 = CONCAT17((char)uVar5,(undefined7)local_120);
    }
    else {
      if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar5 | 0xf) + 1;
      ppppuVar9 = (undefined8 ****)operator_new(uVar1);
      local_120 = uVar1 | 0x8000000000000000;
      local_130[0] = ppppuVar9;
    }
    if ((ppppuVar9 <= ppppuVar3) && (ppppuVar3 < (undefined8 ****)((long)ppppuVar9 + uVar5 + 1))) {
LAB_004cdb44:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(ppppuVar9,ppppuVar3,uVar5 + 1);
  }
  else {
    local_120 = CONCAT17(cStack_d1,local_d8);
    local_130[0] = ppppuVar3;
  }
  uVar14 = *(undefined8 *)(lVar8 + 0x678);
  uVar10 = FUN_004a3de8(&local_c0);
  uVar11 = FUN_004a3de8(&local_110);
  uVar12 = FUN_004a3de8(local_130);
  uVar13 = FUN_004a2934();
  FUN_004c2120(uVar13,uVar7,uVar14,uVar10,param_3,uVar11,uVar12);
  if ((long)local_120 < 0) {
    operator_delete(local_130[0]);
  }
  if ((long)local_100 < 0) {
    operator_delete(local_110);
  }
  if (cStack_d1 < '\0') {
    operator_delete(local_e8);
  }
  FUN_004df880(auStack_98);
  FUN_004c1b84(auStack_f8);
  FUN_004c1858(auStack_f0);
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cdb7c  FUN_004cdb7c =====

undefined8 * FUN_004cdb7c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004cdbcc  FUN_004cdbcc =====

void FUN_004cdbcc(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004cdc08  FUN_004cdc08 =====

void FUN_004cdc08(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar2 = FUN_004a2934();
  FUN_004c1850(auStack_40,uVar2);
  FUN_004c1b20(auStack_48,0x80);
  lVar3 = FUN_004a3bd4();
  uVar4 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x6f8);
  uVar2 = FUN_004a2934();
  FUN_004c2120(uVar2,uVar4,uVar5);
  FUN_004c1b84(auStack_48);
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cdc9c  FUN_004cdc9c =====

undefined8 * FUN_004cdc9c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004cdcec  FUN_004cdcec =====

void FUN_004cdcec(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004cdd28  FUN_004cdd28 =====

void FUN_004cdd28(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 *__src;
  undefined8 uVar3;
  long lVar4;
  undefined1 **__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined1 *local_70;
  ulong uStack_68;
  undefined7 local_60;
  char cStack_59;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  __dest = &local_90;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar3 = FUN_004a2934();
  FUN_004c1850(auStack_50,uVar3);
  FUN_004c1b20(auStack_58,0x80);
  FUN_00511324(&local_70,*param_2,param_2[1] - *param_2);
  lVar4 = FUN_004a3bd4();
  __src = local_70;
  uVar3 = *param_1;
  if (cStack_59 < '\0') {
    if (uStack_68 < 0x17) {
      local_80 = CONCAT17((char)uStack_68,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_68 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      uStack_88 = uStack_68;
      local_90 = (undefined1 *)__dest;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uStack_68 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uStack_68 + 1);
  }
  else {
    local_80 = CONCAT17(cStack_59,local_60);
    uStack_88 = uStack_68;
    local_90 = local_70;
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x718);
  uVar5 = FUN_004a3de8(&local_90);
  uVar6 = FUN_004a2934();
  FUN_004c2120(uVar6,uVar3,uVar7,uVar5);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  if (cStack_59 < '\0') {
    operator_delete(local_70);
  }
  FUN_004c1b84(auStack_58);
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cdec0  FUN_004cdec0 =====

undefined8 * FUN_004cdec0(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004cdf10  FUN_004cdf10 =====

void FUN_004cdf10(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004cdf4c  FUN_004cdf4c =====

void FUN_004cdf4c(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 *__src;
  undefined8 uVar3;
  long lVar4;
  undefined1 **__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined1 *local_70;
  ulong uStack_68;
  undefined7 local_60;
  char cStack_59;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  __dest = &local_90;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar3 = FUN_004a2934();
  FUN_004c1850(auStack_50,uVar3);
  FUN_004c1b20(auStack_58,0x80);
  FUN_00511324(&local_70,*param_2,param_2[1] - *param_2);
  lVar4 = FUN_004a3bd4();
  __src = local_70;
  uVar3 = *param_1;
  if (cStack_59 < '\0') {
    if (uStack_68 < 0x17) {
      local_80 = CONCAT17((char)uStack_68,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_68 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      uStack_88 = uStack_68;
      local_90 = (undefined1 *)__dest;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uStack_68 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uStack_68 + 1);
  }
  else {
    local_80 = CONCAT17(cStack_59,local_60);
    uStack_88 = uStack_68;
    local_90 = local_70;
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x738);
  uVar5 = FUN_004a3de8(&local_90);
  uVar6 = FUN_004a2934();
  FUN_004c2120(uVar6,uVar3,uVar7,uVar5);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  if (cStack_59 < '\0') {
    operator_delete(local_70);
  }
  FUN_004c1b84(auStack_58);
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ce0e4  FUN_004ce0e4 =====

undefined8 * FUN_004ce0e4(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004ce134  FUN_004ce134 =====

void FUN_004ce134(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004ce170  FUN_004ce170 =====

void FUN_004ce170(undefined8 *param_1,long param_2,undefined2 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *local_70 [2];
  char local_59;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar3 = FUN_004a2934();
  FUN_004c1850(auStack_50,uVar3);
  FUN_004c1b20(auStack_58,0x80);
  lVar4 = FUN_004a3bd4();
  uVar7 = *param_1;
  uVar1 = *(undefined1 *)(param_2 + 0x18);
  FUN_004ce254(local_70,param_2);
  uVar6 = *(undefined8 *)(lVar4 + 0x758);
  uVar3 = FUN_004a3de8(local_70);
  uVar5 = FUN_004a2934();
  FUN_004c2120(uVar5,uVar7,uVar6,uVar1,param_3,uVar3);
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  FUN_004c1b84(auStack_58);
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ce254  FUN_004ce254 =====

void FUN_004ce254(undefined8 param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  void *local_b8 [2];
  char local_a1;
  void *local_a0 [2];
  char local_89;
  undefined **local_88;
  void *local_80;
  char local_69;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004df134(auStack_60,7);
  if ((char)param_2[3] != '\0') {
    plVar5 = (long *)*param_2;
    while (plVar5 != param_2 + 1) {
      FUN_00511324(local_a0,plVar5[5],plVar5[6] - plVar5[5]);
      FUN_004df478(&local_88,local_a0);
      FUN_00549320(local_b8,plVar5[4]);
      uVar3 = FUN_004e146c(auStack_60,local_b8);
      FUN_004dfa04(uVar3,&local_88);
      if (local_a1 < '\0') {
        operator_delete(local_b8[0]);
      }
      FUN_004df880(&local_88);
      if (local_89 < '\0') {
        operator_delete(local_a0[0]);
        plVar4 = (long *)plVar5[1];
        if ((long *)plVar5[1] != (long *)0x0) goto LAB_004ce38c;
LAB_004ce39c:
        do {
          plVar4 = (long *)plVar5[2];
          bVar2 = (long *)*plVar4 != plVar5;
          plVar5 = plVar4;
        } while (bVar2);
      }
      else {
        plVar4 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) goto LAB_004ce39c;
LAB_004ce38c:
        do {
          plVar5 = plVar4;
          plVar4 = (long *)*plVar5;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  FUN_004e36c8(&local_88);
  FUN_004e36e0(param_1,&local_88,auStack_60);
  local_88 = &PTR_FUN_00d1f540;
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  FUN_004e36c0(&local_88);
  FUN_004df880(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ce3b8  FUN_004ce3b8 =====

undefined8 * FUN_004ce3b8(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004ce408  FUN_004ce408 =====

void FUN_004ce408(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004ce444  FUN_004ce444 =====

void FUN_004ce444(undefined8 *param_1,long param_2,undefined2 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *local_70 [2];
  char local_59;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar3 = FUN_004a2934();
  FUN_004c1850(auStack_50,uVar3);
  FUN_004c1b20(auStack_58,0x80);
  lVar4 = FUN_004a3bd4();
  uVar7 = *param_1;
  uVar1 = *(undefined1 *)(param_2 + 0x18);
  FUN_004ce254(local_70,param_2);
  uVar6 = *(undefined8 *)(lVar4 + 0x778);
  uVar3 = FUN_004a3de8(local_70);
  uVar5 = FUN_004a2934();
  FUN_004c2120(uVar5,uVar7,uVar6,uVar1,param_3,uVar3);
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  FUN_004c1b84(auStack_58);
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ce528  FUN_004ce528 =====

undefined8 * FUN_004ce528(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004ce578  FUN_004ce578 =====

void FUN_004ce578(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004ce5b4  FUN_004ce5b4 =====

void FUN_004ce5b4(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 *__src;
  undefined8 uVar3;
  long lVar4;
  undefined1 **__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined1 *local_70;
  ulong uStack_68;
  undefined7 local_60;
  char cStack_59;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  __dest = &local_90;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar3 = FUN_004a2934();
  FUN_004c1850(auStack_50,uVar3);
  FUN_004c1b20(auStack_58,0x80);
  FUN_00511324(&local_70,*param_2,param_2[1] - *param_2);
  lVar4 = FUN_004a3bd4();
  __src = local_70;
  uVar3 = *param_1;
  if (cStack_59 < '\0') {
    if (uStack_68 < 0x17) {
      local_80 = CONCAT17((char)uStack_68,(undefined7)local_80);
    }
    else {
      if (0x7fffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_68 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_80 = uVar1 | 0x8000000000000000;
      uStack_88 = uStack_68;
      local_90 = (undefined1 *)__dest;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uStack_68 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uStack_68 + 1);
  }
  else {
    local_80 = CONCAT17(cStack_59,local_60);
    uStack_88 = uStack_68;
    local_90 = local_70;
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x798);
  uVar5 = FUN_004a3de8(&local_90);
  uVar6 = FUN_004a2934();
  FUN_004c2120(uVar6,uVar3,uVar7,uVar5);
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  if (cStack_59 < '\0') {
    operator_delete(local_70);
  }
  FUN_004c1b84(auStack_58);
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ce74c  FUN_004ce74c =====

undefined8 * FUN_004ce74c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004ce79c  FUN_004ce79c =====

void FUN_004ce79c(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004ce7d8  Java_com_discord_native_engine_NativeEngine_setTransportOptions =====

void Java_com_discord_native_engine_NativeEngine_setTransportOptions
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *this;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 local_1a0 [20];
  undefined8 uStack_18c;
  void *local_180 [2];
  char local_169;
  undefined1 auStack_168 [8];
  bool local_160;
  char cStack_15f;
  undefined2 uStack_15e;
  char cStack_15c;
  undefined8 uStack_14c;
  char local_144;
  undefined1 auStack_140 [40];
  undefined1 auStack_118 [48];
  void *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  ulong local_c8;
  long local_c0;
  void *local_b8;
  char local_a1;
  void *local_78;
  char local_61;
  long local_58;
  undefined8 *puVar8;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_168,param_1);
  lVar2 = FUN_004a3bd4();
  uVar10 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  this = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar10);
  FUN_004d9768(auStack_118);
  FUN_004df134(auStack_140,0);
  FUN_004a3c54(local_180,param_3);
  uVar4 = FUN_004d9798(auStack_118,local_180,auStack_140,0);
  if ((uVar4 & 1) == 0) {
    __android_log_print(6,"DiscordJNI","failed to parse NativeEngine.setTransportOptions() payload")
    ;
  }
  uVar4 = FUN_004e1714(auStack_140,"builtInEchoCancellation");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_140,"builtInEchoCancellation");
    FUN_004c18d0(&local_160);
    if (cStack_15f != '\0') {
      Discord::EnableBuiltInAEC(this,local_160);
    }
  }
  uVar4 = FUN_004e1714(auStack_140,"echoCancellation");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_140,"echoCancellation");
    FUN_004c18d0(&local_160);
    if (cStack_15f != '\0') {
      Discord::SetEchoCancellation(this,local_160);
    }
  }
  uVar4 = FUN_004e1714(auStack_140,"noiseSuppression");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_140,"noiseSuppression");
    FUN_004c18d0(&local_160);
    if (cStack_15f != '\0') {
      Discord::SetNoiseSuppression(this,local_160);
    }
  }
  uVar4 = FUN_004e1714(auStack_140,"automaticGainControl");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_140,"automaticGainControl");
    FUN_004c18d0(&local_160);
    if (cStack_15f != '\0') {
      Discord::SetAutomaticGainControl(this,local_160);
    }
  }
  uVar4 = FUN_004e1714(auStack_140,"automaticGainControlConfig");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_140,"automaticGainControlConfig");
    FUN_004d1814(&local_160);
    if (local_144 != '\0') {
      uStack_18c = uStack_14c;
      Discord::SetAutomaticGainControlConfig(this,local_1a0);
    }
  }
  uVar4 = FUN_004e1714(auStack_140,"noiseCancellation");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_140,"noiseCancellation");
    FUN_004c18d0(&local_160);
    if (cStack_15f != '\0') {
      Discord::SetNoiseCancellation(this,local_160);
    }
  }
  uVar4 = FUN_004e1714(auStack_140,"noiseCancellationDuringProcessing");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_140,"noiseCancellationDuringProcessing");
    FUN_004c18d0(&local_160);
    if (cStack_15f != '\0') {
      Discord::SetNoiseCancellationDuringProcessing(this,local_160);
    }
  }
  uVar4 = FUN_004e1714(auStack_140,"inputDevice");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_140,"inputDevice");
    FUN_004c1a90(&local_160);
    if (cStack_15c != '\0') {
      Discord::SetRecordingDevice(this,CONCAT22(uStack_15e,CONCAT11(cStack_15f,local_160)));
    }
  }
  uVar4 = FUN_004e1714(auStack_140,"outputDevice");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_140,"outputDevice");
    FUN_004c1a90(&local_160);
    if (cStack_15c != '\0') {
      Discord::SetPlayoutDevice(this,CONCAT22(uStack_15e,CONCAT11(cStack_15f,local_160)));
    }
  }
  uVar4 = FUN_004e1714(auStack_140,"inputVolume");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_140,"inputVolume");
    FUN_004c1ad8(&local_160);
    if (cStack_15c != '\0') {
      Discord::SetMicVolume(this,(float)CONCAT22(uStack_15e,CONCAT11(cStack_15f,local_160)));
    }
  }
  uVar4 = FUN_004e1714(auStack_140,"outputVolume");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_140,"outputVolume");
    FUN_004c1ad8(&local_160);
    if (cStack_15c != '\0') {
      Discord::SetSpeakerVolume(this,(float)CONCAT22(uStack_15e,CONCAT11(cStack_15f,local_160)));
    }
  }
  uVar4 = FUN_004e1714(auStack_140,"ducking");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_140,"ducking");
    FUN_004c18d0(&local_160);
    if (cStack_15f != '\0') {
      Discord::SetDuckingPreference(this,local_160);
    }
  }
  uVar4 = FUN_004e1714(auStack_140,"idleJitterBufferFlush");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_140,"idleJitterBufferFlush");
    FUN_004c18d0(&local_160);
    if (cStack_15f != '\0') {
      Discord::SetIdleJitterBufferFlush(this,local_160);
    }
  }
  if (local_169 < '\0') {
    operator_delete(local_180[0]);
  }
  FUN_004df880(auStack_140);
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_a1 < '\0') {
    operator_delete(local_b8);
  }
  puVar9 = local_e0;
  if (local_d8 != local_e0) {
    uVar4 = local_c0 + local_c8;
    plVar3 = local_e0 + local_c8 / 0x49;
    lVar6 = local_e0[uVar4 / 0x49];
    lVar5 = *plVar3;
    lVar2 = lVar5 + (local_c8 % 0x49) * 0x38;
    puVar9 = local_d8;
    while (local_d8 = puVar9, lVar2 != lVar6 + (uVar4 % 0x49) * 0x38) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
      }
      if (*(char *)(lVar2 + 0x2f) < '\0') {
        operator_delete(*(void **)(lVar2 + 0x18));
        lVar5 = *plVar3;
      }
      lVar2 = lVar2 + 0x38;
      puVar9 = local_d8;
      if (lVar2 - lVar5 == 0xff8) {
        plVar3 = plVar3 + 1;
        lVar5 = *plVar3;
        lVar2 = lVar5;
      }
    }
  }
  local_c0 = 0;
  uVar4 = (long)puVar9 - (long)local_e0;
  while (0x10 < uVar4) {
    operator_delete((void *)*local_e0);
    local_e0 = local_e0 + 1;
    puVar9 = local_d8;
    uVar4 = (long)local_d8 - (long)local_e0;
  }
  if (uVar4 >> 3 == 1) {
    local_c8 = 0x24;
  }
  else if (uVar4 >> 3 == 2) {
    local_c8 = 0x49;
  }
  puVar7 = local_e0;
  if (local_e0 != puVar9) {
    do {
      puVar8 = puVar7 + 1;
      operator_delete((void *)*puVar7);
      puVar7 = puVar8;
    } while (puVar8 != puVar9);
    if (local_d8 != local_e0) {
      local_d8 = (undefined8 *)
                 ((long)local_d8 + ((long)local_e0 + (7 - (long)local_d8) & 0xfffffffffffffff8U));
    }
  }
  if (local_e8 != (void *)0x0) {
    operator_delete(local_e8);
  }
  FUN_004491b8(auStack_118);
  FUN_004c1858(auStack_168);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cedcc  Java_com_discord_native_engine_NativeEngine_setInputVolume =====

void Java_com_discord_native_engine_NativeEngine_setInputVolume
               (float param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *this;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_40,param_2);
  lVar2 = FUN_004a3bd4();
  uVar4 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  this = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_3,uVar4);
  Discord::SetMicVolume(this,param_1);
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cee60  Java_com_discord_native_engine_NativeEngine_setOutputVolume =====

void Java_com_discord_native_engine_NativeEngine_setOutputVolume
               (float param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *this;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_40,param_2);
  lVar2 = FUN_004a3bd4();
  uVar4 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  this = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_3,uVar4);
  Discord::SetSpeakerVolume(this,param_1);
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ceef4  Java_com_discord_native_engine_NativeEngine_setEmitVADLevel2 =====

void Java_com_discord_native_engine_NativeEngine_setEmitVADLevel2
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *this;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  code *local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_68,param_1);
  lVar2 = FUN_004a3bd4();
  uVar4 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  this = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar4);
  if ((param_3 == '\0') || (DAT_00d61068 == (undefined8 *)0x0)) {
    local_50 = FUN_004547f0;
    local_48 = &DAT_001f1910;
  }
  else {
    local_50 = (code *)DAT_00d61068[2];
    local_48 = (undefined8 *)DAT_00d61068[3];
    uStack_58 = DAT_00d61068[1];
    local_60 = *DAT_00d61068;
    if ((code *)*local_48 != (code *)0x0) {
      local_60 = (*(code *)*local_48)(*DAT_00d61068);
    }
  }
  Discord::SetLocalVoiceLevelChangedCallback(this,(function *)&local_60);
  if ((code *)local_48[1] != (code *)0x0) {
    (*(code *)local_48[1])(local_60);
  }
  FUN_004c1858(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cefe8  Java_com_discord_native_engine_NativeEngine_getInputDevices =====

void Java_com_discord_native_engine_NativeEngine_getInputDevices
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar2 = FUN_004a3bd4();
  uVar5 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar5);
  if (param_3 != 0) {
    plVar3 = (long *)FUN_004a2934();
    param_3 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_3);
  }
  local_48 = FUN_004d1ba4;
  local_40 = &PTR_FUN_00d1f250;
  local_58[0] = (long *)operator_new(8);
  *local_58[0] = param_3;
  Discord::GetRecordingDevices(pDVar4,local_58);
  if ((code *)local_40[1] != (code *)0x0) {
    (*(code *)local_40[1])(local_58[0]);
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cf0d0  Java_com_discord_native_engine_NativeEngine_setInputDeviceIndex =====

void Java_com_discord_native_engine_NativeEngine_setInputDeviceIndex
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *this;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar2 = FUN_004a3bd4();
  uVar4 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  this = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar4);
  Discord::SetRecordingDevice(this,param_3);
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cf15c  Java_com_discord_native_engine_NativeEngine_setInputDevice =====

void Java_com_discord_native_engine_NativeEngine_setInputDevice
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  undefined8 uVar5;
  void *local_58 [2];
  char local_41;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar2 = FUN_004a3bd4();
  uVar5 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar5);
  FUN_004a3c54(local_58,param_3);
  Discord::SetRecordingDevice(pDVar4,local_58);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cf20c  Java_com_discord_native_engine_NativeEngine_getOutputDevices =====

void Java_com_discord_native_engine_NativeEngine_getOutputDevices
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar2 = FUN_004a3bd4();
  uVar5 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar5);
  if (param_3 != 0) {
    plVar3 = (long *)FUN_004a2934();
    param_3 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_3);
  }
  local_48 = FUN_004d21f8;
  local_40 = &PTR_FUN_00d1f270;
  local_58[0] = (long *)operator_new(8);
  *local_58[0] = param_3;
  Discord::GetPlayoutDevices(pDVar4,local_58);
  if ((code *)local_40[1] != (code *)0x0) {
    (*(code *)local_40[1])(local_58[0]);
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cf2f4  Java_com_discord_native_engine_NativeEngine_setOutputDeviceIndex =====

void Java_com_discord_native_engine_NativeEngine_setOutputDeviceIndex
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *this;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar2 = FUN_004a3bd4();
  uVar4 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  this = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar4);
  Discord::SetPlayoutDevice(this,param_3);
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cf380  Java_com_discord_native_engine_NativeEngine_setOutputDevice =====

void Java_com_discord_native_engine_NativeEngine_setOutputDevice
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  undefined8 uVar5;
  void *local_58 [2];
  char local_41;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar2 = FUN_004a3bd4();
  uVar5 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar5);
  FUN_004a3c54(local_58,param_3);
  Discord::SetPlayoutDevice(pDVar4,local_58);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cf430  Java_com_discord_native_engine_NativeEngine_getVideoInputDevices =====

void Java_com_discord_native_engine_NativeEngine_getVideoInputDevices
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar2 = FUN_004a3bd4();
  uVar5 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar5);
  if (param_3 != 0) {
    plVar3 = (long *)FUN_004a2934();
    param_3 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_3);
  }
  local_48 = FUN_004d2858;
  local_40 = &PTR_FUN_00d1f290;
  local_58[0] = (long *)operator_new(8);
  *local_58[0] = param_3;
  Discord::GetVideoInputDevices(pDVar4,local_58);
  if ((code *)local_40[1] != (code *)0x0) {
    (*(code *)local_40[1])(local_58[0]);
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cf518  Java_com_discord_native_engine_NativeEngine_setVideoInputDeviceIndex =====

void Java_com_discord_native_engine_NativeEngine_setVideoInputDeviceIndex
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *this;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar2 = FUN_004a3bd4();
  uVar4 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  this = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar4);
  Discord::SetVideoInputDevice(this,param_3);
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cf5a4  Java_com_discord_native_engine_NativeEngine_setVideoInputDevice =====

void Java_com_discord_native_engine_NativeEngine_setVideoInputDevice
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  undefined8 uVar5;
  void *local_58 [2];
  char local_41;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar2 = FUN_004a3bd4();
  uVar5 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar5);
  FUN_004a3c54(local_58,param_3);
  Discord::SetVideoInputDevice(pDVar4,local_58);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cf654  Java_com_discord_native_engine_NativeEngine_setOnDeviceChangeCallback =====

void Java_com_discord_native_engine_NativeEngine_setOnDeviceChangeCallback
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [8];
  long *local_98 [2];
  code *local_88;
  undefined **local_80;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_a0,param_1);
  lVar2 = FUN_004a3bd4();
  uVar6 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar6);
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    plVar3 = (long *)FUN_004a2934();
    lVar2 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_3);
  }
  plVar3 = (long *)operator_new(8);
  *plVar3 = lVar2;
  local_68 = FUN_004d2ef4;
  local_60 = &PTR_FUN_00d1f2b0;
  local_78[0] = (undefined8 *)operator_new(8);
  *local_78[0] = 0;
  if (lVar2 != 0) {
    plVar5 = (long *)FUN_004a2934();
    uVar6 = (**(code **)(*plVar5 + 0xa8))(plVar5,lVar2);
    *local_78[0] = uVar6;
  }
  Discord::GetDevices(pDVar4,local_78);
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78[0]);
  }
  local_88 = FUN_004d2ef4;
  local_80 = &PTR_FUN_00d1f2b0;
  local_98[0] = plVar3;
  Discord::SetDeviceChangeCallback(pDVar4,local_98);
  if ((code *)local_80[1] != (code *)0x0) {
    (*(code *)local_80[1])(local_98[0]);
  }
  FUN_004c1858(auStack_a0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cf7ac  Java_com_discord_native_engine_NativeEngine_setVideoOutputSink =====

void Java_com_discord_native_engine_NativeEngine_setVideoOutputSink
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_c0 [2];
  char local_a9;
  undefined8 auStack_a8 [2];
  char local_91;
  undefined1 auStack_90 [8];
  undefined8 *local_88 [2];
  code *local_78;
  undefined **local_70;
  undefined8 local_68 [2];
  code *local_58;
  undefined8 *local_50;
  long local_48;
  
  puVar6 = local_c0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_90,param_1);
  lVar2 = FUN_004a3bd4();
  uVar7 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar7);
  if (param_4 == 0) {
    FUN_004a3c54(auStack_a8,param_3);
    local_58 = FUN_00413c90;
    local_50 = &DAT_001f1910;
    Discord::SetVideoOutputSink(pDVar4,auStack_a8,local_68);
    if ((code *)local_50[1] != (code *)0x0) {
      (*(code *)local_50[1])(local_68[0]);
    }
    if (-1 < local_91) goto LAB_004cf8e8;
    puVar6 = auStack_a8;
  }
  else {
    plVar3 = (long *)FUN_004a2934();
    uVar7 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_4);
    puVar5 = (undefined8 *)operator_new(8);
    *puVar5 = uVar7;
    FUN_004a3c54(local_c0,param_3);
    local_78 = FUN_004d32a8;
    local_70 = &PTR_FUN_00d1f2d0;
    local_88[0] = puVar5;
    Discord::SetVideoOutputSink(pDVar4,local_c0,local_88);
    if ((code *)local_70[1] != (code *)0x0) {
      (*(code *)local_70[1])(local_88[0]);
    }
    if (-1 < local_a9) goto LAB_004cf8e8;
  }
  operator_delete((void *)*puVar6);
LAB_004cf8e8:
  FUN_004c1858(auStack_90);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004cf91c  Java_com_discord_native_engine_NativeEngine_setNoInputThreshold =====

void Java_com_discord_native_engine_NativeEngine_setNoInputThreshold
               (float param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *this;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_40,param_2);
  lVar2 = FUN_004a3bd4();
  uVar4 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  this = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_3,uVar4);
  Discord::SetNoAudioInputThreshold(this,param_1);
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cf9b0  Java_com_discord_native_engine_NativeEngine_setOnNoInputCallback =====

void Java_com_discord_native_engine_NativeEngine_setOnNoInputCallback
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar2 = FUN_004a3bd4();
  uVar5 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar5);
  if (param_3 != 0) {
    plVar3 = (long *)FUN_004a2934();
    param_3 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_3);
  }
  local_58[0] = (long *)operator_new(8);
  *local_58[0] = param_3;
  local_48 = FUN_004d3474;
  local_40 = &PTR_FUN_00d1f2f0;
  Discord::SetNoAudioInputCallback(pDVar4,local_58);
  if ((code *)local_40[1] != (code *)0x0) {
    (*(code *)local_40[1])(local_58[0]);
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cfa98  Java_com_discord_native_engine_NativeEngine_setOnVoiceCallback =====

void Java_com_discord_native_engine_NativeEngine_setOnVoiceCallback
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_50,param_1);
  puVar4 = DAT_00d61068;
  if (DAT_00d61068 != (undefined8 *)0x0) {
    if (*(code **)(DAT_00d61068[3] + 8) != (code *)0x0) {
      (**(code **)(DAT_00d61068[3] + 8))(*DAT_00d61068);
    }
    operator_delete(puVar4);
  }
  if (param_3 == 0) {
    DAT_00d61068 = (undefined8 *)0x0;
  }
  else {
    plVar2 = (long *)FUN_004a2934();
    lVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_3);
    puVar4 = (undefined8 *)operator_new(0x20);
    puVar4[2] = FUN_004d359c;
    puVar4[3] = &PTR_FUN_00d1f310;
    puVar5 = (undefined8 *)operator_new(8);
    *puVar5 = 0;
    if (lVar3 == 0) {
      *puVar4 = puVar5;
      DAT_00d61068 = puVar4;
    }
    else {
      plVar2 = (long *)FUN_004a2934();
      uVar6 = (**(code **)(*plVar2 + 0xa8))(plVar2,lVar3);
      *puVar4 = puVar5;
      *puVar5 = uVar6;
      DAT_00d61068 = puVar4;
      plVar2 = (long *)FUN_004a2934();
      (**(code **)(*plVar2 + 0xb0))(plVar2,lVar3);
    }
  }
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cfbc0  Java_com_discord_native_engine_NativeEngine_getAudioSubsystem =====

void Java_com_discord_native_engine_NativeEngine_getAudioSubsystem
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar2 = FUN_004a3bd4();
  uVar5 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar5);
  if (param_3 != 0) {
    plVar3 = (long *)FUN_004a2934();
    param_3 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_3);
  }
  local_48 = FUN_004d36d4;
  local_40 = &PTR_FUN_00d1f330;
  local_58[0] = (long *)operator_new(8);
  *local_58[0] = param_3;
  Discord::GetAudioSubsystem(pDVar4,local_58);
  if ((code *)local_40[1] != (code *)0x0) {
    (*(code *)local_40[1])(local_58[0]);
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cfca8  Java_com_discord_native_engine_NativeEngine_getCodecCapabilities =====

void Java_com_discord_native_engine_NativeEngine_getCodecCapabilities
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar2 = FUN_004a3bd4();
  uVar5 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar5);
  if (param_3 != 0) {
    plVar3 = (long *)FUN_004a2934();
    param_3 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_3);
  }
  local_48 = FUN_004d3990;
  local_40 = &PTR_FUN_00d1f350;
  local_58[0] = (long *)operator_new(8);
  *local_58[0] = param_3;
  Discord::GetCodecCapabilities(pDVar4,local_58);
  if ((code *)local_40[1] != (code *)0x0) {
    (*(code *)local_40[1])(local_58[0]);
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cfd90  Java_com_discord_native_engine_NativeEngine_getCodecSurvey =====

void Java_com_discord_native_engine_NativeEngine_getCodecSurvey
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar2 = FUN_004a3bd4();
  uVar5 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar5);
  if (param_3 != 0) {
    plVar3 = (long *)FUN_004a2934();
    param_3 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_3);
  }
  local_48 = FUN_004d3b88;
  local_40 = &PTR_FUN_00d1f370;
  local_58[0] = (long *)operator_new(8);
  *local_58[0] = param_3;
  Discord::GetCodecSurvey(pDVar4,local_58);
  if ((code *)local_40[1] != (code *)0x0) {
    (*(code *)local_40[1])(local_58[0]);
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cfe78  Java_com_discord_native_engine_NativeEngine_rankRtcRegions =====

void Java_com_discord_native_engine_NativeEngine_rankRtcRegions
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  void **ppvVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  Discord *pDVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  void *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char local_70;
  long *local_68 [2];
  code *local_58;
  undefined **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_004c1850(auStack_a8,param_1);
  lVar4 = FUN_004a3bd4();
  uVar8 = *(undefined8 *)(lVar4 + 0x328);
  plVar5 = (long *)FUN_004a2934();
  pDVar6 = (Discord *)(**(code **)(*plVar5 + 0x328))(plVar5,param_2,uVar8);
  FUN_004a3c54(&local_a0,param_3);
  FUN_004d3d80(&local_88,&local_a0);
  if (local_90._7_1_ < '\0') {
    operator_delete(local_a0);
  }
  local_90 = 0;
  bVar3 = local_70 == '\0';
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  ppvVar1 = &local_a0;
  if (!bVar3) {
    ppvVar1 = &local_88;
  }
  pvVar7 = *ppvVar1;
  ppvVar1[2] = (void *)0x0;
  ppvVar1[1] = (void *)0x0;
  *ppvVar1 = (void *)0x0;
  auVar9._0_8_ = (ulong)CONCAT14(bVar3,(uint)bVar3) << 0x3f;
  auVar9._8_8_ = (ulong)bVar3 << 0x3f;
  auVar9 = NEON_cmge(auVar9,0,8);
  auVar10._0_8_ =
       CONCAT17((byte)((ulong)local_80 >> 0x38) & auVar9[7],
                CONCAT16((byte)((ulong)local_80 >> 0x30) & auVar9[6],
                         CONCAT15((byte)((ulong)local_80 >> 0x28) & auVar9[5],
                                  CONCAT14((byte)((ulong)local_80 >> 0x20) & auVar9[4],
                                           CONCAT13((byte)((ulong)local_80 >> 0x18) & auVar9[3],
                                                    CONCAT12((byte)((ulong)local_80 >> 0x10) &
                                                             auVar9[2],
                                                             CONCAT11((byte)((ulong)local_80 >> 8) &
                                                                      auVar9[1],
                                                                      (byte)local_80 & auVar9[0]))))
                                 )));
  auVar10[8] = (byte)uStack_78 & auVar9[8];
  auVar10[9] = (byte)((ulong)uStack_78 >> 8) & auVar9[9];
  auVar10[10] = (byte)((ulong)uStack_78 >> 0x10) & auVar9[10];
  auVar10[0xb] = (byte)((ulong)uStack_78 >> 0x18) & auVar9[0xb];
  auVar10[0xc] = (byte)((ulong)uStack_78 >> 0x20) & auVar9[0xc];
  auVar10[0xd] = (byte)((ulong)uStack_78 >> 0x28) & auVar9[0xd];
  auVar10[0xe] = (byte)((ulong)uStack_78 >> 0x30) & auVar9[0xe];
  auVar10[0xf] = (byte)((ulong)uStack_78 >> 0x38) & auVar9[0xf];
  FUN_0040dcf8(&local_a0);
  FUN_0040dcf8(&local_88);
  if (param_4 != 0) {
    plVar5 = (long *)FUN_004a2934();
    param_4 = (**(code **)(*plVar5 + 0xa8))(plVar5,param_4);
  }
  local_80 = 0;
  uStack_78 = 0;
  local_88 = (void *)0x0;
  local_58 = FUN_004d49d0;
  local_50 = &PTR_FUN_00d1f390;
  local_c0 = pvVar7;
  local_b8 = auVar10._0_8_;
  uStack_b0 = auVar10._8_8_;
  local_68[0] = (long *)operator_new(8);
  *local_68[0] = param_4;
  Discord::RankRtcRegions(pDVar6,&local_c0,local_68);
  if ((code *)local_50[1] != (code *)0x0) {
    (*(code *)local_50[1])(local_68[0]);
  }
  FUN_0040dcf8(&local_c0);
  FUN_0040dcf8(&local_88);
  FUN_004c1858(auStack_a8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d0018  Java_com_discord_native_engine_NativeEngine_setAudioInputInitializationCallback =====

void Java_com_discord_native_engine_NativeEngine_setAudioInputInitializationCallback
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar2 = FUN_004a3bd4();
  uVar5 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar5);
  if (param_3 != 0) {
    plVar3 = (long *)FUN_004a2934();
    param_3 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_3);
  }
  local_48 = FUN_004d4c9c;
  local_40 = &PTR_FUN_00d1f3b0;
  local_58[0] = (long *)operator_new(8);
  *local_58[0] = param_3;
  Discord::SetAudioInputInitializationCallback(pDVar4,local_58);
  if ((code *)local_40[1] != (code *)0x0) {
    (*(code *)local_40[1])(local_58[0]);
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d0100  Java_com_discord_native_engine_NativeEngine_setVoiceProcessingErrorCallback =====

void Java_com_discord_native_engine_NativeEngine_setVoiceProcessingErrorCallback
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar2 = FUN_004a3bd4();
  uVar5 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar5);
  if (param_3 != 0) {
    plVar3 = (long *)FUN_004a2934();
    param_3 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_3);
  }
  local_48 = FUN_004d4fb0;
  local_40 = &PTR_FUN_00d1f3d0;
  local_58[0] = (long *)operator_new(8);
  *local_58[0] = param_3;
  Discord::SetVoiceProcessingErrorCallback(pDVar4,local_58);
  if ((code *)local_40[1] != (code *)0x0) {
    (*(code *)local_40[1])(local_58[0]);
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d01e8  Java_com_discord_native_engine_NativeEngine_startLocalAudioRecording =====

void Java_com_discord_native_engine_NativeEngine_startLocalAudioRecording
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *this;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar9;
  undefined8 uVar10;
  bool local_188;
  char local_187;
  void *local_180 [2];
  char local_169;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [40];
  undefined1 auStack_138 [48];
  void *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  ulong local_e8;
  long local_e0;
  void *local_d8;
  char local_c1;
  void *local_98;
  char local_81;
  long *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  undefined8 *puVar8;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_168,param_1);
  lVar2 = FUN_004a3bd4();
  uVar10 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  this = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar10);
  FUN_004d9768(auStack_138);
  FUN_004df134(auStack_160,0);
  FUN_004a3c54(local_180,param_3);
  uVar4 = FUN_004d9798(auStack_138,local_180,auStack_160,0);
  if ((uVar4 & 1) == 0) {
    __android_log_print(6,"DiscordJNI",
                        "failed to parse NativeEngine.startLocalAudioRecording() payload");
  }
  uVar4 = FUN_004e1714(auStack_160,"echoCancellation");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_160,"echoCancellation");
    FUN_004c18d0(&local_188);
    if (local_187 != '\0') {
      Discord::SetEchoCancellation(this,local_188);
    }
  }
  uVar4 = FUN_004e1714(auStack_160,"noiseSuppression");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_160,"noiseSuppression");
    FUN_004c18d0(&local_188);
    if (local_187 != '\0') {
      Discord::SetNoiseSuppression(this,local_188);
    }
  }
  uVar4 = FUN_004e1714(auStack_160,"automaticGainControl");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_160,"automaticGainControl");
    FUN_004c18d0(&local_188);
    if (local_187 != '\0') {
      Discord::SetAutomaticGainControl(this,local_188);
    }
  }
  uVar4 = FUN_004e1714(auStack_160,"noiseCancellation");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_160,"noiseCancellation");
    FUN_004c18d0(&local_188);
    if (local_187 != '\0') {
      Discord::SetNoiseCancellation(this,local_188);
    }
  }
  uVar4 = FUN_004e1714(auStack_160,"noiseCancellationDuringProcessing");
  if ((uVar4 & 1) != 0) {
    FUN_004e12e0(auStack_160,"noiseCancellationDuringProcessing");
    FUN_004c18d0(&local_188);
    if (local_187 != '\0') {
      Discord::SetNoiseCancellationDuringProcessing(this,local_188);
    }
  }
  if (param_4 != 0) {
    plVar3 = (long *)FUN_004a2934();
    param_4 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_4);
  }
  local_68 = FUN_004d50e8;
  local_60 = &PTR_FUN_00d1f3f0;
  local_78[0] = (long *)operator_new(8);
  *local_78[0] = param_4;
  FUN_00409bc8(this,local_78,DAT_00d61068);
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78[0]);
  }
  if (local_169 < '\0') {
    operator_delete(local_180[0]);
  }
  FUN_004df880(auStack_160);
  if (local_81 < '\0') {
    operator_delete(local_98);
  }
  if (local_c1 < '\0') {
    operator_delete(local_d8);
  }
  puVar9 = local_100;
  if (local_f8 != local_100) {
    uVar4 = local_e0 + local_e8;
    plVar3 = local_100 + local_e8 / 0x49;
    lVar6 = local_100[uVar4 / 0x49];
    lVar5 = *plVar3;
    lVar2 = lVar5 + (local_e8 % 0x49) * 0x38;
    puVar9 = local_f8;
    while (local_f8 = puVar9, lVar2 != lVar6 + (uVar4 % 0x49) * 0x38) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
      }
      if (*(char *)(lVar2 + 0x2f) < '\0') {
        operator_delete(*(void **)(lVar2 + 0x18));
        lVar5 = *plVar3;
      }
      lVar2 = lVar2 + 0x38;
      puVar9 = local_f8;
      if (lVar2 - lVar5 == 0xff8) {
        plVar3 = plVar3 + 1;
        lVar5 = *plVar3;
        lVar2 = lVar5;
      }
    }
  }
  local_e0 = 0;
  uVar4 = (long)puVar9 - (long)local_100;
  while (0x10 < uVar4) {
    operator_delete((void *)*local_100);
    local_100 = local_100 + 1;
    puVar9 = local_f8;
    uVar4 = (long)local_f8 - (long)local_100;
  }
  if (uVar4 >> 3 == 1) {
    local_e8 = 0x24;
  }
  else if (uVar4 >> 3 == 2) {
    local_e8 = 0x49;
  }
  puVar7 = local_100;
  if (local_100 != puVar9) {
    do {
      puVar8 = puVar7 + 1;
      operator_delete((void *)*puVar7);
      puVar7 = puVar8;
    } while (puVar8 != puVar9);
    if (local_f8 != local_100) {
      local_f8 = (undefined8 *)
                 ((long)local_f8 + ((long)local_100 + (7 - (long)local_f8) & 0xfffffffffffffff8U));
    }
  }
  if (local_108 != (void *)0x0) {
    operator_delete(local_108);
  }
  FUN_004491b8(auStack_138);
  FUN_004c1858(auStack_168);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d0638  Java_com_discord_native_engine_NativeEngine_stopLocalAudioRecording =====

void Java_com_discord_native_engine_NativeEngine_stopLocalAudioRecording
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  long *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_60,param_1);
  lVar2 = FUN_004a3bd4();
  uVar4 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  uVar4 = (**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar4);
  if (param_3 != 0) {
    plVar3 = (long *)FUN_004a2934();
    param_3 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_3);
  }
  local_48 = FUN_004d5210;
  local_40 = &PTR_FUN_00d1f410;
  local_58[0] = (long *)operator_new(8);
  *local_58[0] = param_3;
  FUN_00409e88(uVar4,local_58);
  if ((code *)local_40[1] != (code *)0x0) {
    (*(code *)local_40[1])(local_58[0]);
  }
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d0720  Java_com_discord_native_engine_NativeEngine_createVoiceConnection =====

undefined8
Java_com_discord_native_engine_NativeEngine_createVoiceConnection
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  Discord *pDVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_2c0 [8];
  undefined4 local_2b8 [2];
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined7 uStack_2a0;
  undefined1 uStack_299;
  undefined2 uStack_298;
  undefined1 uStack_296;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined1 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  long lStack_210;
  undefined8 local_208;
  undefined2 local_200;
  undefined1 local_1fe;
  long *local_1f8;
  long *local_1f0;
  undefined8 uStack_1e8;
  char local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  char local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined2 local_160;
  undefined1 local_15e;
  long *local_158;
  long *local_150;
  undefined8 uStack_148;
  char local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8 [2];
  code *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8 [2];
  code *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8 [2];
  code *local_98;
  undefined *local_90;
  long *local_88 [2];
  code *local_78;
  undefined **local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_004c1850(auStack_2c0,param_1);
  lVar6 = FUN_004a3bd4();
  uVar12 = *(undefined8 *)(lVar6 + 0x328);
  plVar7 = (long *)FUN_004a2934();
  pDVar8 = (Discord *)(**(code **)(*plVar7 + 0x328))(plVar7,param_2,uVar12);
  if (param_5 != 0) {
    plVar7 = (long *)FUN_004a2934();
    param_5 = (**(code **)(*plVar7 + 0xa8))(plVar7,param_5);
  }
  FUN_004a3c54(&local_180,param_4);
  FUN_004d5418(&local_220,&local_180);
  if (uStack_170._7_1_ < '\0') {
    operator_delete((void *)CONCAT44(uStack_17c,local_180));
  }
  local_120 = local_1c0;
  local_128 = local_1c8;
  uVar11 = uStack_1d0;
  uVar12 = local_1d8;
  cVar4 = local_1e0;
  local_168 = local_208;
  uStack_170 = lStack_210;
  local_178 = local_218;
  local_138 = 0;
  uStack_130 = 0;
  local_2b8[0] = 0;
  local_278 = 0;
  uStack_298 = 0;
  uStack_296 = 0;
  uStack_238 = 0;
  uStack_228 = 0;
  local_230 = 0;
  if (local_188 == '\0') {
    local_178 = 0;
    local_168 = 0;
    uStack_170 = 0;
    local_160 = 0;
    local_128 = 0;
    local_15e = 0;
    local_120 = 0;
    puVar10 = &uStack_238;
    local_180 = 0;
    local_158 = (long *)0x0;
    uStack_148 = 0;
    local_150 = (long *)0x0;
    local_140 = '\0';
    local_108 = 0;
    uStack_110 = 0;
    local_118 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    local_f0 = 0;
  }
  else {
    local_208 = 0;
    local_218 = 0;
    lStack_210 = 0;
    local_180 = local_220;
    local_160 = local_200;
    local_15e = local_1fe;
    uStack_110 = uStack_1b0;
    local_118 = local_1b8;
    local_108 = local_1a8;
    local_158 = local_1f8;
    uStack_148 = uStack_1e8;
    local_150 = local_1f0;
    local_1f0 = (long *)0x0;
    uStack_1e8 = 0;
    local_1f8 = (long *)0x0;
    puVar10 = &local_1a0;
    local_140 = local_1e0;
    local_1e0 = '\0';
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_f0 = local_190;
    local_1a8 = 0;
    uStack_f8 = uStack_198;
    local_100 = local_1a0;
    local_138 = uVar12;
    uStack_130 = uVar11;
  }
  plVar5 = local_150;
  plVar7 = local_158;
  uStack_299 = 0;
  local_240 = 0;
  uStack_248 = 0;
  local_250 = 0;
  local_258 = 0;
  local_260 = 0;
  uStack_268 = 0;
  local_270 = 0;
  local_280 = 0;
  uStack_288 = 0;
  local_290 = 0;
  uStack_2a0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  FUN_004037cc(local_2b8);
  FUN_004037cc(&local_220);
  uVar12 = 0;
  if ((local_188 != '\0' && cVar4 != '\0') && (plVar7 != plVar5)) {
    do {
      uVar1 = plVar7[1];
      plVar3 = (long *)*plVar7;
      if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)plVar7 + 0x17);
        plVar3 = plVar7;
      }
      if (plVar3 == (long *)0x0 && uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                   "__len == 0 || __s != nullptr",
                   "string_view::string_view(_CharT *, size_t): received nullptr");
      }
      if ((uVar1 == 0x1f) &&
         (((*plVar3 == 0x2d33302d36323032 && plVar3[1] == 0x2d65636166727573) &&
          plVar3[2] == 0x722d746365726964) && *(long *)((long)plVar3 + 0x17) == 0x72657265646e6572))
      {
        uVar12 = 1;
        goto LAB_004d0a48;
      }
      plVar7 = plVar7 + 3;
    } while (plVar7 != plVar5);
    uVar12 = 0;
  }
LAB_004d0a48:
  FUN_004a4390(uVar12);
  FUN_004a3c54(&local_220,param_3);
  local_78 = FUN_004d5b80;
  local_70 = &PTR_FUN_00d1f430;
  local_88[0] = (long *)operator_new(8);
  *local_88[0] = param_5;
  local_98 = FUN_004d60a4;
  local_90 = &DAT_001f7170;
  local_b8 = FUN_0040eaac;
  local_b0 = &DAT_001f1910;
  local_d8 = FUN_0040eab8;
  local_d0 = &DAT_001f1910;
  auVar13 = Discord::Connect(pDVar8,&local_220,&local_180,local_88,local_a8,local_c8,local_e8);
  if ((code *)local_d0[1] != (code *)0x0) {
    (*(code *)local_d0[1])(local_e8[0]);
  }
  if ((code *)local_b0[1] != (code *)0x0) {
    (*(code *)local_b0[1])(local_c8[0]);
  }
  if (*(code **)(local_90 + 8) != (code *)0x0) {
    (**(code **)(local_90 + 8))(local_a8[0]);
  }
  if ((code *)local_70[1] != (code *)0x0) {
    (*(code *)local_70[1])(local_88[0]);
  }
  if (lStack_210 < 0) {
    operator_delete((void *)CONCAT44(uStack_21c,local_220));
  }
  pauVar9 = (undefined1 (*) [16])operator_new(0x10);
  *pauVar9 = auVar13;
  lVar6 = FUN_004a3bd4();
  uVar12 = FUN_004a2934();
  uVar12 = FUN_004b8418(uVar12,*(undefined8 *)(lVar6 + 0x570),*(undefined8 *)(lVar6 + 0x568));
  uVar11 = *(undefined8 *)(lVar6 + 0x578);
  plVar7 = (long *)FUN_004a2934();
  (**(code **)(*plVar7 + 0x370))(plVar7,uVar12,uVar11,pauVar9);
  FUN_004037cc(&local_180);
  FUN_004c1858(auStack_2c0);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}


// ===== 004d0bf4  Java_com_discord_native_engine_NativeEngine_nativeCreateInstance =====

/* WARNING: Removing unreachable block (ram,0x004d0e54) */
/* WARNING: Removing unreachable block (ram,0x004d0e44) */
/* WARNING: Removing unreachable block (ram,0x004d0e24) */
/* WARNING: Removing unreachable block (ram,0x004d0d3c) */
/* WARNING: Removing unreachable block (ram,0x004d0e64) */

Discord * Java_com_discord_native_engine_NativeEngine_nativeCreateInstance
                    (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5,char param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  Discord *pDVar6;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  void *local_170;
  char local_159;
  void *local_158;
  char local_141;
  void *local_130;
  char local_119;
  void *local_110;
  void *local_108;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  void *local_88;
  void *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_004c1850(auStack_180,param_1);
  lVar4 = FUN_004a3bd4();
  uVar1 = *(undefined8 *)(lVar4 + 0xa8);
  uVar2 = *(undefined8 *)(lVar4 + 0xb0);
  uVar5 = FUN_004a2934();
  FUN_004a44dc(uVar5,uVar1,uVar2,param_3);
  FUN_004a38e4(param_3);
  FUN_004a3b84(param_4);
  local_b0 = 0;
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_88 = (void *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b8 = 5000000;
  local_a8 = 0;
  local_90 = 0;
  local_70 = 0x1010101;
  local_6c = 0;
  local_f0 = 1;
  FUN_004a3f38(&local_198);
  local_d8 = local_188;
  uStack_e0 = uStack_190;
  local_e8 = local_198;
  FUN_004a3f38(&local_198);
  uStack_c8 = uStack_190;
  local_d0 = local_198;
  local_c0 = local_188;
  local_70 = CONCAT13(param_6 != '\0',(undefined3)local_70);
  local_ec = param_5;
  pDVar6 = (Discord *)operator_new(0x70);
  FUN_004d0e74(auStack_178,&local_f0);
  Discord::Discord(pDVar6,auStack_178);
  if (local_110 != (void *)0x0) {
    for (; local_108 != local_110; local_108 = (void *)((long)local_108 + -0x18)) {
    }
    local_108 = local_110;
    operator_delete(local_110);
  }
  if (local_119 < '\0') {
    operator_delete(local_130);
  }
  if (local_141 < '\0') {
    operator_delete(local_158);
  }
  if (local_159 < '\0') {
    operator_delete(local_170);
  }
  if (local_88 != (void *)0x0) {
    for (; local_80 != local_88; local_80 = (void *)((long)local_80 + -0x18)) {
    }
    local_80 = local_88;
    operator_delete(local_88);
  }
  FUN_004c1858(auStack_180);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pDVar6;
}


// ===== 004d0e74  FUN_004d0e74 =====

void FUN_004d0e74(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *__src;
  long lVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar7 = param_1 + 1;
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    puVar9 = (undefined8 *)param_2[1];
    uVar6 = param_2[2];
    if (uVar6 < 0x17) {
      *(char *)((long)param_1 + 0x1f) = (char)uVar6;
    }
    else {
      if (0x7fffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar6 | 0xf) + 1;
      puVar7 = (undefined8 *)operator_new(uVar1);
      param_1[1] = puVar7;
      param_1[2] = uVar6;
      param_1[3] = uVar1 | 0x8000000000000000;
    }
    if ((puVar7 <= puVar9) && (puVar9 < (undefined8 *)((long)puVar7 + uVar6 + 1)))
    goto LAB_004d1174;
    memmove(puVar7,puVar9,uVar6 + 1);
  }
  else {
    uVar12 = param_2[2];
    uVar10 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar12;
    *puVar7 = uVar10;
  }
  puVar7 = param_1 + 4;
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    puVar9 = (undefined8 *)param_2[4];
    uVar6 = param_2[5];
    if (uVar6 < 0x17) {
      *(char *)((long)param_1 + 0x37) = (char)uVar6;
    }
    else {
      if (0x7fffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar6 | 0xf) + 1;
      puVar7 = (undefined8 *)operator_new(uVar1);
      param_1[4] = puVar7;
      param_1[5] = uVar6;
      param_1[6] = uVar1 | 0x8000000000000000;
    }
    if ((puVar7 <= puVar9) && (puVar9 < (undefined8 *)((long)puVar7 + uVar6 + 1)))
    goto LAB_004d1174;
    memmove(puVar7,puVar9,uVar6 + 1);
  }
  else {
    uVar12 = param_2[5];
    uVar10 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar12;
    *puVar7 = uVar10;
  }
  puVar7 = param_1 + 9;
  uVar10 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar10;
  if (*(char *)((long)param_2 + 0x5f) < '\0') {
    puVar9 = (undefined8 *)param_2[9];
    uVar6 = param_2[10];
    if (uVar6 < 0x17) {
      *(char *)((long)param_1 + 0x5f) = (char)uVar6;
    }
    else {
      if (0x7fffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar6 | 0xf) + 1;
      puVar7 = (undefined8 *)operator_new(uVar1);
      param_1[9] = puVar7;
      param_1[10] = uVar6;
      param_1[0xb] = uVar1 | 0x8000000000000000;
    }
    if ((puVar7 <= puVar9) && (puVar9 < (undefined8 *)((long)puVar7 + uVar6 + 1))) {
LAB_004d1174:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(puVar7,puVar9,uVar6 + 1);
  }
  else {
    uVar12 = param_2[10];
    uVar10 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar12;
    *puVar7 = uVar10;
  }
  uVar5 = *(undefined1 *)(param_2 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  lVar2 = param_2[0xd];
  lVar3 = param_2[0xe];
  *(undefined1 *)(param_1 + 0xc) = uVar5;
  uVar6 = lVar3 - lVar2;
  if (uVar6 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar6 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar8 = operator_new(uVar6);
    param_1[0xd] = pvVar8;
    param_1[0xe] = pvVar8;
    param_1[0xf] = (void *)((long)pvVar8 + ((long)uVar6 >> 3) * 8);
    lVar2 = param_2[0xd];
    lVar3 = param_2[0xe];
    if (lVar2 != lVar3) {
      lVar11 = 0;
      do {
        puVar7 = (undefined8 *)(lVar2 + lVar11);
        puVar9 = (undefined8 *)((long)pvVar8 + lVar11);
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          __src = (undefined8 *)*puVar7;
          uVar6 = puVar7[1];
          if (uVar6 < 0x17) {
            *(char *)((long)pvVar8 + lVar11 + 0x17) = (char)uVar6;
          }
          else {
            if (0x7fffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar1 = (uVar6 | 0xf) + 1;
            puVar9 = (undefined8 *)operator_new(uVar1);
            puVar7 = (undefined8 *)((long)pvVar8 + lVar11);
            puVar7[1] = uVar6;
            puVar7[2] = uVar1 | 0x8000000000000000;
            *puVar7 = puVar9;
          }
          if ((puVar9 <= __src) && (__src < (undefined8 *)((long)puVar9 + uVar6 + 1)))
          goto LAB_004d1174;
          memmove(puVar9,__src,uVar6 + 1);
        }
        else {
          uVar12 = puVar7[1];
          uVar10 = *puVar7;
          puVar9[2] = puVar7[2];
          puVar9[1] = uVar12;
          *puVar9 = uVar10;
        }
        lVar11 = lVar11 + 0x18;
      } while (lVar2 + lVar11 != lVar3);
      pvVar8 = (void *)((long)pvVar8 + lVar11);
    }
    param_1[0xe] = pvVar8;
  }
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)((long)param_1 + 0x84) = *(undefined2 *)((long)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return;
}


// ===== 004d11b0  Java_com_discord_native_engine_NativeEngine_nativeDestroyInstance =====

void Java_com_discord_native_engine_NativeEngine_nativeDestroyInstance
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  Discord *this;
  undefined8 uVar3;
  
  lVar1 = FUN_004a3bd4();
  uVar3 = *(undefined8 *)(lVar1 + 0x328);
  plVar2 = (long *)FUN_004a2934();
  this = (Discord *)(**(code **)(*plVar2 + 0x328))(plVar2,param_2,uVar3);
  if (this != (Discord *)0x0) {
    Discord::~Discord(this);
    operator_delete(this);
    uVar3 = *(undefined8 *)(lVar1 + 0x328);
    plVar2 = (long *)FUN_004a2934();
                    /* WARNING: Could not recover jumptable at 0x004d1224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x370))(plVar2,param_2,uVar3,0);
    return;
  }
  return;
}


// ===== 004d1238  Java_com_discord_native_engine_NativeEngine_enableBuiltInAEC =====

void Java_com_discord_native_engine_NativeEngine_enableBuiltInAEC
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *this;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar2 = FUN_004a3bd4();
  uVar4 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  this = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar4);
  Discord::EnableBuiltInAEC(this,param_3 != '\0');
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d12c8  Java_com_discord_native_engine_NativeEngine_setAudioInputEnabled =====

void Java_com_discord_native_engine_NativeEngine_setAudioInputEnabled
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *this;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar2 = FUN_004a3bd4();
  uVar4 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  this = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar4);
  Discord::SetAudioInputEnabled(this,param_3 != '\0');
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d1358  Java_com_discord_native_engine_NativeEngine_setHasFullbandPerformance =====

void Java_com_discord_native_engine_NativeEngine_setHasFullbandPerformance
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *this;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar2 = FUN_004a3bd4();
  uVar4 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  this = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar4);
  Discord::SetHasFullbandPerformance(this,param_3 != '\0');
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d13e8  Java_com_discord_native_engine_NativeEngine_getMaxSupportedProtocolVersion =====

undefined2 Java_com_discord_native_engine_NativeEngine_getMaxSupportedProtocolVersion(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0050dfb0();
  return uVar1;
}


// ===== 004d1400  Java_com_discord_native_engine_NativeEngine_getMLSSigningKeyB64 =====

/* WARNING: Type propagation algorithm not settling */

void Java_com_discord_native_engine_NativeEngine_getMLSSigningKeyB64
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *__src;
  undefined8 *******__src_00;
  long lVar4;
  undefined8 *******__dest;
  undefined1 **__dest_00;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *local_e0 [2];
  undefined8 local_d0;
  undefined8 *******local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  ulong uStack_a0;
  undefined7 local_98;
  char cStack_91;
  undefined8 *******local_90;
  ulong uStack_88;
  undefined7 local_80;
  char cStack_79;
  void *local_78;
  void *local_70;
  void *local_60;
  long local_58;
  long local_48;
  
  __dest_00 = local_e0;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_004a3c54(&local_90,param_3);
  FUN_0050e2e8(&local_78,0,&local_90,param_4);
  if (cStack_79 < '\0') {
    operator_delete(local_90);
  }
  FUN_00511324(&local_90,local_78,(long)local_70 - (long)local_78);
  FUN_00511324(&local_a8,local_60,local_58 - (long)local_60);
  lVar4 = FUN_004a3bd4();
  __src_00 = local_90;
  if (cStack_79 < '\0') {
    if (uStack_88 < 0x17) {
      __dest = &local_c0;
      local_b0 = CONCAT17((char)uStack_88,(undefined7)local_b0);
    }
    else {
      if (0x7fffffffffffffef < uStack_88) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uStack_88 | 0xf) + 1;
      __dest = (undefined8 *******)operator_new(uVar1);
      local_b0 = uVar1 | 0x8000000000000000;
      uStack_b8 = uStack_88;
      local_c0 = __dest;
    }
    if ((__dest <= __src_00) && (__src_00 < (undefined8 *******)((long)__dest + uStack_88 + 1)))
    goto LAB_004d1668;
    memmove(__dest,__src_00,uStack_88 + 1);
    __src = local_a8;
    uVar1 = uStack_a0;
  }
  else {
    local_b0 = CONCAT17(cStack_79,local_80);
    local_c0 = local_90;
    uStack_b8 = uStack_88;
    __src = local_a8;
    uVar1 = uStack_a0;
  }
  local_a8 = __src;
  if (cStack_91 < '\0') {
    if (uVar1 < 0x17) {
      local_d0 = CONCAT17((char)uVar1,(undefined7)local_d0);
    }
    else {
      if (0x7fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = (uVar1 | 0xf) + 1;
      __dest_00 = (undefined1 **)operator_new(uVar2);
      local_d0 = uVar2 | 0x8000000000000000;
      local_e0[0] = (undefined1 *)__dest_00;
    }
    if ((__dest_00 <= __src) && (__src < (undefined1 *)((long)__dest_00 + uVar1 + 1))) {
LAB_004d1668:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest_00,__src,uVar1 + 1);
  }
  else {
    local_d0 = CONCAT17(cStack_91,local_98);
    local_e0[0] = __src;
  }
  uVar8 = *(undefined8 *)(lVar4 + 0x508);
  uVar5 = FUN_004a3de8(&local_c0);
  uVar6 = FUN_004a3de8(local_e0);
  uVar7 = FUN_004a2934();
  FUN_004c2120(uVar7,param_5,uVar8,uVar5,uVar6);
  if ((long)local_d0 < 0) {
    operator_delete(local_e0[0]);
  }
  if ((long)local_b0 < 0) {
    operator_delete(local_c0);
  }
  if (cStack_91 < '\0') {
    operator_delete(local_a8);
  }
  if (cStack_79 < '\0') {
    operator_delete(local_90);
  }
  if (local_60 != (void *)0x0) {
    operator_delete(local_60);
  }
  if (local_78 != (void *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004d169c  Java_com_discord_native_engine_NativeEngine_setSidechainCompression =====

void Java_com_discord_native_engine_NativeEngine_setSidechainCompression
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *this;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_40,param_1);
  lVar2 = FUN_004a3bd4();
  uVar4 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  this = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar4);
  Discord::SetSidechainCompression(this,param_3 != '\0');
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d172c  Java_com_discord_native_engine_NativeEngine_updateFieldTrial =====

void Java_com_discord_native_engine_NativeEngine_updateFieldTrial
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Discord *pDVar4;
  undefined8 uVar5;
  void *local_80 [2];
  char local_69;
  void *local_68 [2];
  char local_51;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_004c1850(auStack_50,param_1);
  lVar2 = FUN_004a3bd4();
  uVar5 = *(undefined8 *)(lVar2 + 0x328);
  plVar3 = (long *)FUN_004a2934();
  pDVar4 = (Discord *)(**(code **)(*plVar3 + 0x328))(plVar3,param_2,uVar5);
  FUN_004a3c54(local_68,param_3);
  FUN_004a3c54(local_80,param_4);
  Discord::UpdateFieldTrial(pDVar4,local_68,local_80);
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d1814  FUN_004d1814 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d1814(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_80;
  char local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_004e05d4();
  uVar4 = DAT_001f59f8;
  uVar3 = _UNK_001f4ac8;
  uVar2 = _DAT_001f4ac0;
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
    *param_1 = 0x1000001;
    *(undefined8 *)(param_1 + 3) = uVar3;
    *(undefined8 *)(param_1 + 1) = uVar2;
    *(undefined8 *)(param_1 + 5) = uVar4;
  }
  else {
    uVar5 = FUN_004e1714(param_2,"enabled");
    if ((uVar5 & 1) == 0) {
      uVar6 = 1;
    }
    else {
      FUN_004e12e0(param_2,"enabled");
      FUN_004c18d0(&local_80);
      uVar6 = (undefined1)local_80;
      if (local_80._1_1_ == '\0') {
        uVar6 = 1;
      }
    }
    uVar5 = FUN_004e1714(param_2,"useAGC2");
    if ((uVar5 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      FUN_004e12e0(param_2,"useAGC2");
      FUN_004c18d0(&local_80);
      uVar7 = 0;
      if (local_80._1_1_ != '\0') {
        uVar7 = (undefined1)local_80;
      }
    }
    uVar5 = FUN_004e1714(param_2,"enableAnalog");
    if ((uVar5 & 1) == 0) {
      uVar8 = 0;
    }
    else {
      FUN_004e12e0(param_2,"enableAnalog");
      FUN_004c18d0(&local_80);
      uVar8 = 0;
      if (local_80._1_1_ != '\0') {
        uVar8 = (undefined1)local_80;
      }
    }
    uVar5 = FUN_004e1714(param_2,"enableDigital");
    if ((uVar5 & 1) == 0) {
      uVar9 = 1;
    }
    else {
      FUN_004e12e0(param_2,"enableDigital");
      FUN_004c18d0(&local_80);
      uVar9 = (undefined1)local_80;
      if (local_80._1_1_ == '\0') {
        uVar9 = 1;
      }
    }
    uVar5 = FUN_004e1714(param_2,"headroom_db");
    uVar11 = 0x40a00000;
    if ((uVar5 & 1) != 0) {
      FUN_004e12e0(param_2,"headroom_db");
      FUN_004c1ad8(&local_80);
      uVar11 = 0x40a00000;
      if (local_7c != '\0') {
        uVar11 = local_80;
      }
    }
    uVar5 = FUN_004e1714(param_2,"max_gain_db");
    if ((uVar5 & 1) == 0) {
      uVar12 = 0x42480000;
    }
    else {
      FUN_004e12e0(param_2,"max_gain_db");
      FUN_004c1ad8(&local_80);
      uVar12 = 0x42480000;
      if (local_7c != '\0') {
        uVar12 = local_80;
      }
    }
    uVar5 = FUN_004e1714(param_2,"initial_gain_db");
    uVar13 = 0x41700000;
    if ((uVar5 & 1) != 0) {
      FUN_004e12e0(param_2,"initial_gain_db");
      FUN_004c1ad8(&local_80);
      uVar13 = 0x41700000;
      if (local_7c != '\0') {
        uVar13 = local_80;
      }
    }
    uVar5 = FUN_004e1714(param_2,"max_gain_change_db_per_second");
    uVar14 = 0x40c00000;
    if ((uVar5 & 1) != 0) {
      FUN_004e12e0(param_2,"max_gain_change_db_per_second");
      FUN_004c1ad8(&local_80);
      uVar14 = 0x40c00000;
      if (local_7c != '\0') {
        uVar14 = local_80;
      }
    }
    uVar5 = FUN_004e1714(param_2,"max_output_noise_level_dbfs");
    if ((uVar5 & 1) == 0) {
      uVar15 = 0xc2480000;
    }
    else {
      FUN_004e12e0(param_2,"max_output_noise_level_dbfs");
      FUN_004c1ad8(&local_80);
      uVar15 = 0xc2480000;
      if (local_7c != '\0') {
        uVar15 = local_80;
      }
    }
    uVar5 = FUN_004e1714(param_2,"fixed_gain_db");
    uVar10 = 0;
    if ((uVar5 & 1) != 0) {
      FUN_004e12e0(param_2,"fixed_gain_db");
      FUN_004c1ad8(&local_80);
      uVar10 = 0;
      if (local_7c != '\0') {
        uVar10 = local_80;
      }
    }
    *(undefined1 *)param_1 = uVar6;
    uVar6 = 1;
    *(undefined1 *)((long)param_1 + 1) = uVar7;
    *(undefined1 *)((long)param_1 + 2) = uVar8;
    *(undefined1 *)((long)param_1 + 3) = uVar9;
    param_1[1] = uVar11;
    param_1[2] = uVar12;
    param_1[3] = uVar13;
    param_1[4] = uVar14;
    param_1[5] = uVar15;
    param_1[6] = uVar10;
  }
  *(undefined1 *)(param_1 + 7) = uVar6;
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004d1ba4  FUN_004d1ba4 =====

void FUN_004d1ba4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  void *local_60;
  void *local_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar2 = FUN_004a2934();
  FUN_004c1850(auStack_40,uVar2);
  FUN_004c1b20(auStack_48,0x80);
  lVar3 = FUN_004a3bd4();
  uVar2 = *param_1;
  FUN_004d1d54(&local_60,param_2);
  FUN_004d1c58(lVar3 + 0x348,uVar2,&local_60);
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  FUN_004c1b84(auStack_48);
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d1c58  FUN_004d1c58 =====

void FUN_004d1c58(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = *param_1;
  plVar3 = (long *)FUN_004a2934();
  lVar1 = *param_3;
  lVar2 = param_3[1];
  uVar8 = lVar2 - lVar1 >> 3;
  uVar4 = (**(code **)(*plVar3 + 0x560))
                    (plVar3,uVar8 & 0xffffffff,*(undefined8 *)(*DAT_00d60d18 + 8),0);
  if (lVar2 != lVar1) {
    uVar7 = 0;
    if (uVar8 < 2) {
      uVar8 = 1;
    }
    do {
      if ((ulong)(param_3[1] - *param_3 >> 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x591,
                   "__n < size()","vector[] index out of bounds");
      }
      (**(code **)(*plVar3 + 0x570))
                (plVar3,uVar4,uVar7 & 0xffffffff,*(undefined8 *)(*param_3 + uVar7 * 8));
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
  }
  uVar5 = FUN_004a2934();
  FUN_004c2120(uVar5,param_2,uVar6,uVar4);
  return;
}


// ===== 004d1d54  FUN_004d1d54 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004d1d54(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *__src;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *******__dest;
  undefined1 **__dest_00;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *******pppppppuVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 *******local_80;
  ulong uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar2 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar12 = (long)puVar4 - (long)puVar2;
  if (lVar12 != 0) {
    lVar12 = lVar12 >> 3;
    if ((ulong)(lVar12 * -0x1084210842108421) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar13 = lVar12 * 0x7bdef7bdef7bdef8;
    pvVar7 = operator_new(uVar13);
    *param_1 = pvVar7;
    param_1[1] = pvVar7;
    param_1[2] = (void *)((long)pvVar7 + uVar13);
  }
  do {
    if (puVar2 == puVar4) {
      if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar12 = FUN_004a3bd4();
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      pppppppuVar11 = (undefined8 *******)*puVar2;
      uVar13 = puVar2[1];
      if (uVar13 < 0x17) {
        __dest = &local_80;
        local_70 = CONCAT17((char)uVar13,(undefined7)local_70);
      }
      else {
        if (0x7fffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uVar13 | 0xf) + 1;
        __dest = (undefined8 *******)operator_new(uVar1);
        local_70 = uVar1 | 0x8000000000000000;
        local_80 = __dest;
        uStack_78 = uVar13;
      }
      if ((__dest <= pppppppuVar11) &&
         (pppppppuVar11 < (undefined8 *******)((long)__dest + uVar13 + 1))) goto LAB_004d1f9c;
      memmove(__dest,pppppppuVar11,uVar13 + 1);
      if (-1 < *(char *)((long)puVar2 + 0x2f)) goto LAB_004d1e28;
LAB_004d1ea4:
      __src = (undefined1 *)puVar2[3];
      uVar13 = puVar2[4];
      if (uVar13 < 0x17) {
        local_90 = CONCAT17((char)uVar13,(undefined7)local_90);
        __dest_00 = &local_a0;
      }
      else {
        if (0x7fffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uVar13 | 0xf) + 1;
        __dest_00 = (undefined1 **)operator_new(uVar1);
        local_90 = uVar1 | 0x8000000000000000;
        local_a0 = (undefined1 *)__dest_00;
        uStack_98 = uVar13;
      }
      if ((__dest_00 <= __src) && (__src < (undefined1 *)((long)__dest_00 + uVar13 + 1))) {
LAB_004d1f9c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest_00,__src,uVar13 + 1);
    }
    else {
      local_70 = puVar2[2];
      uStack_78 = puVar2[1];
      local_80 = (undefined8 *******)*puVar2;
      if (*(char *)((long)puVar2 + 0x2f) < '\0') goto LAB_004d1ea4;
LAB_004d1e28:
      local_90 = puVar2[5];
      uStack_98 = puVar2[4];
      local_a0 = (undefined1 *)puVar2[3];
    }
    uVar8 = FUN_004a2934();
    uVar3 = *(undefined8 *)(lVar12 + 0x1e8);
    uVar5 = *(undefined8 *)(lVar12 + 0x1f0);
    uVar9 = FUN_004a3de8(&local_80);
    uVar10 = FUN_004a3de8(&local_a0);
    pppppppuVar11 = (undefined8 *******)FUN_004b8418(uVar8,uVar5,uVar3,uVar9,uVar10);
    if ((long)local_90 < 0) {
      operator_delete(local_a0);
    }
    if ((long)local_70 < 0) {
      operator_delete(local_80);
    }
    local_80 = pppppppuVar11;
    FUN_004d1fd4(param_1,&local_80);
    puVar2 = puVar2 + 0x1f;
  } while( true );
}


// ===== 004d1fd4  FUN_004d1fd4 =====

void FUN_004d1fd4(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = *param_2;
      param_1[1] = (ulong)(puVar9 + 1);
      return;
    }
  }
  else {
    puVar12 = (undefined8 *)*param_1;
    lVar13 = (long)puVar9 - (long)puVar12 >> 3;
    uVar7 = lVar13 + 1;
    if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = (long)param_1[2] - (long)puVar12;
    uVar5 = uVar3 >> 2;
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 != 0) {
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      pvVar2 = operator_new(uVar5 * 8);
      puVar4 = (undefined8 *)((long)pvVar2 + lVar13 * 8);
      puVar6 = puVar4 + 1;
      *puVar4 = *param_2;
      if ((long)puVar9 - (long)puVar12 != 0) {
        uVar7 = ((long)puVar9 - (long)puVar12) - 8;
        puVar11 = puVar9;
        if ((0x57 < uVar7) &&
           (0x1f < (ulong)((long)puVar9 + (-(long)pvVar2 - ((long)puVar9 - (long)puVar12))))) {
          uVar7 = (uVar7 >> 3) + 1;
          puVar10 = (undefined8 *)((long)pvVar2 + lVar13 * 8 + -0x10);
          uVar8 = uVar7 & 0x3ffffffffffffffc;
          puVar4 = puVar4 + -uVar8;
          puVar11 = puVar9 + -uVar8;
          puVar9 = puVar9 + -2;
          uVar3 = uVar8;
          do {
            puVar1 = puVar9 + -1;
            uVar16 = puVar9[-2];
            uVar15 = puVar9[1];
            uVar14 = *puVar9;
            puVar9 = puVar9 + -4;
            uVar3 = uVar3 - 4;
            puVar10[-1] = *puVar1;
            puVar10[-2] = uVar16;
            puVar10[1] = uVar15;
            *puVar10 = uVar14;
            puVar10 = puVar10 + -4;
          } while (uVar3 != 0);
          puVar9 = puVar12;
          if (uVar7 == uVar8) goto LAB_004d20fc;
        }
        do {
          puVar11 = puVar11 + -1;
          puVar4 = puVar4 + -1;
          *puVar4 = *puVar11;
          puVar9 = puVar12;
        } while (puVar11 != puVar12);
      }
LAB_004d20fc:
      *param_1 = (ulong)puVar4;
      param_1[1] = (ulong)puVar6;
      param_1[2] = (ulong)((long)pvVar2 + uVar5 * 8);
      if (puVar9 == (undefined8 *)0x0) {
        return;
      }
      operator_delete(puVar9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 004d216c  FUN_004d216c =====

undefined8 * FUN_004d216c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d21bc  FUN_004d21bc =====

void FUN_004d21bc(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d21f8  FUN_004d21f8 =====

void FUN_004d21f8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  void *local_60;
  void *local_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar2 = FUN_004a2934();
  FUN_004c1850(auStack_40,uVar2);
  FUN_004c1b20(auStack_48,0x80);
  lVar3 = FUN_004a3bd4();
  uVar2 = *param_1;
  FUN_004d23a8(&local_60,param_2);
  FUN_004d22ac(lVar3 + 0x368,uVar2,&local_60);
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  FUN_004c1b84(auStack_48);
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d22ac  FUN_004d22ac =====

void FUN_004d22ac(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = *param_1;
  plVar3 = (long *)FUN_004a2934();
  lVar1 = *param_3;
  lVar2 = param_3[1];
  uVar8 = lVar2 - lVar1 >> 3;
  uVar4 = (**(code **)(*plVar3 + 0x560))
                    (plVar3,uVar8 & 0xffffffff,*(undefined8 *)(*DAT_00d60d28 + 8),0);
  if (lVar2 != lVar1) {
    uVar7 = 0;
    if (uVar8 < 2) {
      uVar8 = 1;
    }
    do {
      if ((ulong)(param_3[1] - *param_3 >> 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x591,
                   "__n < size()","vector[] index out of bounds");
      }
      (**(code **)(*plVar3 + 0x570))
                (plVar3,uVar4,uVar7 & 0xffffffff,*(undefined8 *)(*param_3 + uVar7 * 8));
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
  }
  uVar5 = FUN_004a2934();
  FUN_004c2120(uVar5,param_2,uVar6,uVar4);
  return;
}


// ===== 004d23a8  FUN_004d23a8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004d23a8(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *__src;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *******__dest;
  undefined1 **__dest_00;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *******pppppppuVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 *******local_80;
  ulong uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar11 = *param_2;
  lVar3 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar3 - lVar11 != 0) {
    lVar11 = lVar3 - lVar11 >> 3;
    if ((ulong)(lVar11 * -0x1084210842108421) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar12 = lVar11 * 0x7bdef7bdef7bdef8;
    pvVar6 = operator_new(uVar12);
    *param_1 = pvVar6;
    param_1[1] = pvVar6;
    param_1[2] = (void *)((long)pvVar6 + uVar12);
  }
  lVar11 = FUN_004a3bd4();
  puVar2 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)param_2[1];
  do {
    if (puVar2 == puVar4) {
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      pppppppuVar10 = (undefined8 *******)*puVar2;
      uVar12 = puVar2[1];
      if (uVar12 < 0x17) {
        __dest = &local_80;
        local_70 = CONCAT17((char)uVar12,(undefined7)local_70);
      }
      else {
        if (0x7fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uVar12 | 0xf) + 1;
        __dest = (undefined8 *******)operator_new(uVar1);
        local_70 = uVar1 | 0x8000000000000000;
        local_80 = __dest;
        uStack_78 = uVar12;
      }
      if ((__dest <= pppppppuVar10) &&
         (pppppppuVar10 < (undefined8 *******)((long)__dest + uVar12 + 1))) goto LAB_004d25fc;
      memmove(__dest,pppppppuVar10,uVar12 + 1);
      if (-1 < *(char *)((long)puVar2 + 0x2f)) goto LAB_004d2484;
LAB_004d2500:
      __src = (undefined1 *)puVar2[3];
      uVar12 = puVar2[4];
      if (uVar12 < 0x17) {
        local_90 = CONCAT17((char)uVar12,(undefined7)local_90);
        __dest_00 = &local_a0;
      }
      else {
        if (0x7fffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uVar12 | 0xf) + 1;
        __dest_00 = (undefined1 **)operator_new(uVar1);
        local_90 = uVar1 | 0x8000000000000000;
        local_a0 = (undefined1 *)__dest_00;
        uStack_98 = uVar12;
      }
      if ((__dest_00 <= __src) && (__src < (undefined1 *)((long)__dest_00 + uVar12 + 1))) {
LAB_004d25fc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(__dest_00,__src,uVar12 + 1);
    }
    else {
      local_70 = puVar2[2];
      uStack_78 = puVar2[1];
      local_80 = (undefined8 *******)*puVar2;
      if (*(char *)((long)puVar2 + 0x2f) < '\0') goto LAB_004d2500;
LAB_004d2484:
      local_90 = puVar2[5];
      uStack_98 = puVar2[4];
      local_a0 = (undefined1 *)puVar2[3];
    }
    uVar7 = FUN_004a2934();
    uVar13 = *(undefined8 *)(lVar11 + 0x260);
    uVar14 = *(undefined8 *)(lVar11 + 600);
    uVar8 = FUN_004a3de8(&local_80);
    uVar9 = FUN_004a3de8(&local_a0);
    pppppppuVar10 = (undefined8 *******)FUN_004b8418(uVar7,uVar13,uVar14,uVar8,uVar9);
    if ((long)local_90 < 0) {
      operator_delete(local_a0);
    }
    if ((long)local_70 < 0) {
      operator_delete(local_80);
    }
    local_80 = pppppppuVar10;
    FUN_004d2634(param_1,&local_80);
    puVar2 = puVar2 + 0x1f;
  } while( true );
}


// ===== 004d2634  FUN_004d2634 =====

void FUN_004d2634(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = *param_2;
      param_1[1] = (ulong)(puVar9 + 1);
      return;
    }
  }
  else {
    puVar12 = (undefined8 *)*param_1;
    lVar13 = (long)puVar9 - (long)puVar12 >> 3;
    uVar7 = lVar13 + 1;
    if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = (long)param_1[2] - (long)puVar12;
    uVar5 = uVar3 >> 2;
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 != 0) {
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      pvVar2 = operator_new(uVar5 * 8);
      puVar4 = (undefined8 *)((long)pvVar2 + lVar13 * 8);
      puVar6 = puVar4 + 1;
      *puVar4 = *param_2;
      if ((long)puVar9 - (long)puVar12 != 0) {
        uVar7 = ((long)puVar9 - (long)puVar12) - 8;
        puVar11 = puVar9;
        if ((0x57 < uVar7) &&
           (0x1f < (ulong)((long)puVar9 + (-(long)pvVar2 - ((long)puVar9 - (long)puVar12))))) {
          uVar7 = (uVar7 >> 3) + 1;
          puVar10 = (undefined8 *)((long)pvVar2 + lVar13 * 8 + -0x10);
          uVar8 = uVar7 & 0x3ffffffffffffffc;
          puVar4 = puVar4 + -uVar8;
          puVar11 = puVar9 + -uVar8;
          puVar9 = puVar9 + -2;
          uVar3 = uVar8;
          do {
            puVar1 = puVar9 + -1;
            uVar16 = puVar9[-2];
            uVar15 = puVar9[1];
            uVar14 = *puVar9;
            puVar9 = puVar9 + -4;
            uVar3 = uVar3 - 4;
            puVar10[-1] = *puVar1;
            puVar10[-2] = uVar16;
            puVar10[1] = uVar15;
            *puVar10 = uVar14;
            puVar10 = puVar10 + -4;
          } while (uVar3 != 0);
          puVar9 = puVar12;
          if (uVar7 == uVar8) goto LAB_004d275c;
        }
        do {
          puVar11 = puVar11 + -1;
          puVar4 = puVar4 + -1;
          *puVar4 = *puVar11;
          puVar9 = puVar12;
        } while (puVar11 != puVar12);
      }
LAB_004d275c:
      *param_1 = (ulong)puVar4;
      param_1[1] = (ulong)puVar6;
      param_1[2] = (ulong)((long)pvVar2 + uVar5 * 8);
      if (puVar9 == (undefined8 *)0x0) {
        return;
      }
      operator_delete(puVar9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 004d27cc  FUN_004d27cc =====

undefined8 * FUN_004d27cc(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d281c  FUN_004d281c =====

void FUN_004d281c(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d2858  FUN_004d2858 =====

void FUN_004d2858(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  void *local_60;
  void *local_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar2 = FUN_004a2934();
  FUN_004c1850(auStack_40,uVar2);
  FUN_004c1b20(auStack_48,0x80);
  lVar3 = FUN_004a3bd4();
  uVar2 = *param_1;
  FUN_004d2a08(&local_60,param_2);
  FUN_004d290c(lVar3 + 0x388,uVar2,&local_60);
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  FUN_004c1b84(auStack_48);
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d290c  FUN_004d290c =====

void FUN_004d290c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = *param_1;
  plVar3 = (long *)FUN_004a2934();
  lVar1 = *param_3;
  lVar2 = param_3[1];
  uVar8 = lVar2 - lVar1 >> 3;
  uVar4 = (**(code **)(*plVar3 + 0x560))
                    (plVar3,uVar8 & 0xffffffff,*(undefined8 *)(*DAT_00d60d30 + 8),0);
  if (lVar2 != lVar1) {
    uVar7 = 0;
    if (uVar8 < 2) {
      uVar8 = 1;
    }
    do {
      if ((ulong)(param_3[1] - *param_3 >> 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x591,
                   "__n < size()","vector[] index out of bounds");
      }
      (**(code **)(*plVar3 + 0x570))
                (plVar3,uVar4,uVar7 & 0xffffffff,*(undefined8 *)(*param_3 + uVar7 * 8));
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
  }
  uVar5 = FUN_004a2934();
  FUN_004c2120(uVar5,param_2,uVar6,uVar4);
  return;
}


// ===== 004d2a08  FUN_004d2a08 =====

/* WARNING: Removing unreachable block (ram,0x004d2c44) */
/* WARNING: Removing unreachable block (ram,0x004d2c58) */

void FUN_004d2a08(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *****pppppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *****pppppuVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 ****local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 ****local_80;
  ulong uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar13 = *param_2;
  lVar8 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (lVar8 - lVar13 != 0) {
    lVar13 = lVar8 - lVar13 >> 3;
    if ((ulong)(lVar13 * 0x6db6db6db6db6db7) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar15 = lVar13 * 0x6db6db6db6db6db8;
    pvVar6 = operator_new(uVar15);
    *param_1 = pvVar6;
    param_1[1] = pvVar6;
    param_1[2] = (void *)((long)pvVar6 + uVar15);
  }
  lVar13 = FUN_004a3bd4();
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined8 *)param_2[1];
  do {
    if (puVar2 == puVar3) {
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      pppppuVar12 = (undefined8 *****)*puVar2;
      uVar15 = puVar2[1];
      if (uVar15 < 0x17) {
        pppppuVar7 = &local_80;
        local_70 = CONCAT17((char)uVar15,(undefined7)local_70);
      }
      else {
        if (0x7fffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uVar15 | 0xf) + 1;
        pppppuVar7 = (undefined8 *****)operator_new(uVar1);
        local_70 = uVar1 | 0x8000000000000000;
        local_80 = pppppuVar7;
        uStack_78 = uVar15;
      }
      if ((pppppuVar7 <= pppppuVar12) &&
         (pppppuVar12 < (undefined8 *****)((long)pppppuVar7 + uVar15 + 1))) goto LAB_004d2c98;
      memmove(pppppuVar7,pppppuVar12,uVar15 + 1);
      if (-1 < *(char *)((long)puVar2 + 0x2f)) goto LAB_004d2ae8;
LAB_004d2b64:
      pppppuVar12 = (undefined8 *****)puVar2[3];
      uVar15 = puVar2[4];
      if (uVar15 < 0x17) {
        pppppuVar7 = &local_a0;
        local_90 = CONCAT17((char)uVar15,(undefined7)local_90);
      }
      else {
        if (0x7fffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = (uVar15 | 0xf) + 1;
        pppppuVar7 = (undefined8 *****)operator_new(uVar1);
        local_90 = uVar1 | 0x8000000000000000;
        local_a0 = pppppuVar7;
        uStack_98 = uVar15;
      }
      if ((pppppuVar7 <= pppppuVar12) &&
         (pppppuVar12 < (undefined8 *****)((long)pppppuVar7 + uVar15 + 1))) {
LAB_004d2c98:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                   ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
      }
      memmove(pppppuVar7,pppppuVar12,uVar15 + 1);
    }
    else {
      local_70 = puVar2[2];
      uStack_78 = puVar2[1];
      local_80 = (undefined8 ****)*puVar2;
      if (*(char *)((long)puVar2 + 0x2f) < '\0') goto LAB_004d2b64;
LAB_004d2ae8:
      local_90 = puVar2[5];
      uStack_98 = puVar2[4];
      local_a0 = (undefined8 ****)puVar2[3];
    }
    iVar4 = *(int *)((long)puVar2 + 0x34);
    lVar8 = FUN_004a3bd4();
    if (iVar4 == 2) {
      puVar14 = (undefined8 *)(lVar8 + 0x1b0);
    }
    else if (iVar4 == 1) {
      puVar14 = (undefined8 *)(lVar8 + 0x198);
    }
    else {
      puVar14 = (undefined8 *)(lVar8 + 0x1c8);
    }
    uVar16 = *puVar14;
    uVar9 = FUN_004a2934();
    uVar17 = *(undefined8 *)(lVar13 + 0x298);
    uVar18 = *(undefined8 *)(lVar13 + 0x290);
    uVar10 = FUN_004a3de8(&local_80);
    uVar11 = FUN_004a3de8(&local_a0);
    pppppuVar12 = (undefined8 *****)FUN_004b8418(uVar9,uVar17,uVar18,uVar10,uVar11,uVar16);
    if ((long)local_90 < 0) {
      operator_delete(local_a0);
    }
    local_80 = pppppuVar12;
    FUN_004d2cd0(param_1,&local_80);
    puVar2 = puVar2 + 7;
  } while( true );
}


// ===== 004d2cd0  FUN_004d2cd0 =====

void FUN_004d2cd0(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = *param_2;
      param_1[1] = (ulong)(puVar9 + 1);
      return;
    }
  }
  else {
    puVar12 = (undefined8 *)*param_1;
    lVar13 = (long)puVar9 - (long)puVar12 >> 3;
    uVar7 = lVar13 + 1;
    if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = (long)param_1[2] - (long)puVar12;
    uVar5 = uVar3 >> 2;
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 != 0) {
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      pvVar2 = operator_new(uVar5 * 8);
      puVar4 = (undefined8 *)((long)pvVar2 + lVar13 * 8);
      puVar6 = puVar4 + 1;
      *puVar4 = *param_2;
      if ((long)puVar9 - (long)puVar12 != 0) {
        uVar7 = ((long)puVar9 - (long)puVar12) - 8;
        puVar11 = puVar9;
        if ((0x57 < uVar7) &&
           (0x1f < (ulong)((long)puVar9 + (-(long)pvVar2 - ((long)puVar9 - (long)puVar12))))) {
          uVar7 = (uVar7 >> 3) + 1;
          puVar10 = (undefined8 *)((long)pvVar2 + lVar13 * 8 + -0x10);
          uVar8 = uVar7 & 0x3ffffffffffffffc;
          puVar4 = puVar4 + -uVar8;
          puVar11 = puVar9 + -uVar8;
          puVar9 = puVar9 + -2;
          uVar3 = uVar8;
          do {
            puVar1 = puVar9 + -1;
            uVar16 = puVar9[-2];
            uVar15 = puVar9[1];
            uVar14 = *puVar9;
            puVar9 = puVar9 + -4;
            uVar3 = uVar3 - 4;
            puVar10[-1] = *puVar1;
            puVar10[-2] = uVar16;
            puVar10[1] = uVar15;
            *puVar10 = uVar14;
            puVar10 = puVar10 + -4;
          } while (uVar3 != 0);
          puVar9 = puVar12;
          if (uVar7 == uVar8) goto LAB_004d2df8;
        }
        do {
          puVar11 = puVar11 + -1;
          puVar4 = puVar4 + -1;
          *puVar4 = *puVar11;
          puVar9 = puVar12;
        } while (puVar11 != puVar12);
      }
LAB_004d2df8:
      *param_1 = (ulong)puVar4;
      param_1[1] = (ulong)puVar6;
      param_1[2] = (ulong)((long)pvVar2 + uVar5 * 8);
      if (puVar9 == (undefined8 *)0x0) {
        return;
      }
      operator_delete(puVar9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 004d2e68  FUN_004d2e68 =====

undefined8 * FUN_004d2e68(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d2eb8  FUN_004d2eb8 =====

void FUN_004d2eb8(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d2ef4  FUN_004d2ef4 =====

void FUN_004d2ef4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  void *local_a0;
  void *local_98;
  void *local_88;
  void *local_80;
  void *local_70;
  void *local_68;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar2 = FUN_004a2934();
  FUN_004c1850(auStack_50,uVar2);
  FUN_004c1b20(auStack_58,0x80);
  lVar3 = FUN_004a3bd4();
  uVar2 = *param_1;
  FUN_004d1d54(&local_70,param_2);
  FUN_004d23a8(&local_88,param_3);
  FUN_004d2a08(&local_a0,param_4);
  FUN_004d2ff8(lVar3 + 0x3a8,uVar2,&local_70,&local_88,&local_a0);
  if (local_a0 != (void *)0x0) {
    local_98 = local_a0;
    operator_delete(local_a0);
  }
  if (local_88 != (void *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (local_70 != (void *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
  FUN_004c1b84(auStack_58);
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d2ff8  FUN_004d2ff8 =====

void FUN_004d2ff8(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = *param_1;
  plVar3 = (long *)FUN_004a2934();
  lVar1 = *param_3;
  lVar2 = param_3[1];
  uVar10 = lVar2 - lVar1 >> 3;
  uVar4 = (**(code **)(*plVar3 + 0x560))
                    (plVar3,uVar10 & 0xffffffff,*(undefined8 *)(*DAT_00d60d18 + 8),0);
  if (lVar2 != lVar1) {
    uVar9 = 0;
    if (uVar10 < 2) {
      uVar10 = 1;
    }
    do {
      if ((ulong)(param_3[1] - *param_3 >> 3) <= uVar9) goto LAB_004d31f4;
      (**(code **)(*plVar3 + 0x570))
                (plVar3,uVar4,uVar9 & 0xffffffff,*(undefined8 *)(*param_3 + uVar9 * 8));
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar9);
  }
  plVar3 = (long *)FUN_004a2934();
  lVar1 = *param_4;
  lVar2 = param_4[1];
  uVar10 = lVar2 - lVar1 >> 3;
  uVar5 = (**(code **)(*plVar3 + 0x560))
                    (plVar3,uVar10 & 0xffffffff,*(undefined8 *)(*DAT_00d60d28 + 8),0);
  if (lVar2 != lVar1) {
    uVar9 = 0;
    if (uVar10 < 2) {
      uVar10 = 1;
    }
    do {
      if ((ulong)(param_4[1] - *param_4 >> 3) <= uVar9) goto LAB_004d31f4;
      (**(code **)(*plVar3 + 0x570))
                (plVar3,uVar5,uVar9 & 0xffffffff,*(undefined8 *)(*param_4 + uVar9 * 8));
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar9);
  }
  plVar3 = (long *)FUN_004a2934();
  lVar1 = *param_5;
  lVar2 = param_5[1];
  uVar10 = lVar2 - lVar1 >> 3;
  uVar6 = (**(code **)(*plVar3 + 0x560))
                    (plVar3,uVar10 & 0xffffffff,*(undefined8 *)(*DAT_00d60d30 + 8),0);
  if (lVar2 != lVar1) {
    uVar9 = 0;
    if (uVar10 < 2) {
      uVar10 = 1;
    }
    do {
      if ((ulong)(param_5[1] - *param_5 >> 3) <= uVar9) {
LAB_004d31f4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x591,
                   "__n < size()","vector[] index out of bounds");
      }
      (**(code **)(*plVar3 + 0x570))
                (plVar3,uVar6,uVar9 & 0xffffffff,*(undefined8 *)(*param_5 + uVar9 * 8));
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar9);
  }
  uVar7 = FUN_004a2934();
  FUN_004c2120(uVar7,param_2,uVar8,uVar4,uVar5,uVar6);
  return;
}


// ===== 004d321c  FUN_004d321c =====

undefined8 * FUN_004d321c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d326c  FUN_004d326c =====

void FUN_004d326c(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d32a8  FUN_004d32a8 =====

bool FUN_004d32a8(undefined8 *param_1,VideoFrameI420 *param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_150;
  undefined8 local_148;
  long *local_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [224];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar5 = FUN_004a2934();
  FUN_004c1850(auStack_130,uVar5);
  FUN_004c1b20(auStack_138,0x80);
  local_140 = (long *)discord::media::VideoFrameI420::buffer(param_2);
  if (local_140 != (long *)0x0) {
    (**(code **)*local_140)();
  }
  uVar3 = discord::media::VideoFrameI420::rotation(param_2);
  FUN_007beee4(auStack_128,&local_140,uVar3,0);
  iVar4 = discord::media::VideoFrameI420::sourceFacing(param_2);
  FUN_00aea0b8(&local_150,uVar5,auStack_128);
  lVar6 = FUN_004a3bd4();
  uVar7 = *param_1;
  uVar8 = *(undefined8 *)(lVar6 + 0x3c8);
  uVar5 = FUN_004a2934();
  cVar2 = FUN_004c17b4(uVar5,uVar7,uVar8,local_150,iVar4 == 1);
  FUN_00ada608(&local_150,local_148);
  FUN_007bf020(auStack_128);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 8))();
  }
  FUN_004c1b84(auStack_138);
  FUN_004c1858(auStack_130);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return cVar2 != '\0';
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d33e8  FUN_004d33e8 =====

undefined8 * FUN_004d33e8(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d3438  FUN_004d3438 =====

void FUN_004d3438(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d3474  FUN_004d3474 =====

void FUN_004d3474(undefined8 *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar2 = FUN_004a2934();
  FUN_004c1850(auStack_40,uVar2);
  FUN_004c1b20(auStack_48,0x80);
  lVar3 = FUN_004a3bd4();
  uVar4 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 1000);
  uVar2 = FUN_004a2934();
  FUN_004c2120(uVar2,uVar4,uVar5,param_2 & 1);
  FUN_004c1b84(auStack_48);
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d3510  FUN_004d3510 =====

undefined8 * FUN_004d3510(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d3560  FUN_004d3560 =====

void FUN_004d3560(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d359c  FUN_004d359c =====

void FUN_004d359c(float param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  param_2 = (undefined8 *)*param_2;
  uVar2 = FUN_004a2934();
  FUN_004c1850(auStack_50,uVar2);
  FUN_004c1b20(auStack_58,0x80);
  lVar3 = FUN_004a3bd4();
  uVar4 = *param_2;
  uVar5 = *(undefined8 *)(lVar3 + 0x408);
  uVar2 = FUN_004a2934();
  FUN_004c2120((double)param_1,uVar2,uVar4,uVar5,param_3);
  FUN_004c1b84(auStack_58);
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d3648  FUN_004d3648 =====

undefined8 * FUN_004d3648(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d3698  FUN_004d3698 =====

void FUN_004d3698(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d36d4  FUN_004d36d4 =====

void FUN_004d36d4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 ****__src;
  undefined1 *__src_00;
  ulong uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 ****__dest;
  undefined1 **__dest_00;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 ***local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  
  __dest_00 = &local_a0;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar5 = FUN_004a2934();
  FUN_004c1850(auStack_60,uVar5);
  FUN_004c1b20(auStack_68,0x80);
  lVar6 = FUN_004a3bd4();
  uVar5 = *param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined8 ****)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      __dest = &local_80;
      local_70 = CONCAT17((char)uVar2,(undefined7)local_70);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined8 ****)operator_new(uVar1);
      local_70 = uVar1 | 0x8000000000000000;
      local_80 = __dest;
      uStack_78 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + uVar2 + 1)))
    goto LAB_004d38d0;
    memmove(__dest,__src,uVar2 + 1);
    cVar3 = *(char *)((long)param_3 + 0x17);
  }
  else {
    uStack_78 = param_2[1];
    local_80 = (undefined8 ***)*param_2;
    local_70 = param_2[2];
    cVar3 = *(char *)((long)param_3 + 0x17);
  }
  if (cVar3 < '\0') {
    __src_00 = (undefined1 *)*param_3;
    uVar2 = param_3[1];
    if (uVar2 < 0x17) {
      local_90 = CONCAT17((char)uVar2,(undefined7)local_90);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest_00 = (undefined1 **)operator_new(uVar1);
      local_90 = uVar1 | 0x8000000000000000;
      local_a0 = (undefined1 *)__dest_00;
      uStack_98 = uVar2;
    }
    if ((__dest_00 <= __src_00) && (__src_00 < (undefined1 *)((long)__dest_00 + uVar2 + 1))) {
LAB_004d38d0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest_00,__src_00,uVar2 + 1);
  }
  else {
    uStack_98 = param_3[1];
    local_a0 = (undefined1 *)*param_3;
    local_90 = param_3[2];
  }
  uVar10 = *(undefined8 *)(lVar6 + 0x428);
  uVar7 = FUN_004a3de8(&local_80);
  uVar8 = FUN_004a3de8(&local_a0);
  uVar9 = FUN_004a2934();
  FUN_004c2120(uVar9,uVar5,uVar10,uVar7,uVar8);
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  FUN_004c1b84(auStack_68);
  FUN_004c1858(auStack_60);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004d3904  FUN_004d3904 =====

undefined8 * FUN_004d3904(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d3954  FUN_004d3954 =====

void FUN_004d3954(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d3990  FUN_004d3990 =====

void FUN_004d3990(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 **__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  __dest = &local_70;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar4 = FUN_004a2934();
  FUN_004c1850(auStack_50,uVar4);
  FUN_004c1b20(auStack_58,0x80);
  lVar5 = FUN_004a3bd4();
  uVar4 = *param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined1 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      local_60 = CONCAT17((char)uVar2,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_60 = uVar1 | 0x8000000000000000;
      local_70 = (undefined1 *)__dest;
      uStack_68 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_68 = param_2[1];
    local_70 = (undefined1 *)*param_2;
    local_60 = param_2[2];
  }
  uVar8 = *(undefined8 *)(lVar5 + 0x448);
  uVar6 = FUN_004a3de8(&local_70);
  uVar7 = FUN_004a2934();
  FUN_004c2120(uVar7,uVar4,uVar8,uVar6);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  FUN_004c1b84(auStack_58);
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d3afc  FUN_004d3afc =====

undefined8 * FUN_004d3afc(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d3b4c  FUN_004d3b4c =====

void FUN_004d3b4c(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d3b88  FUN_004d3b88 =====

void FUN_004d3b88(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 *__src;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 **__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  __dest = &local_70;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar4 = FUN_004a2934();
  FUN_004c1850(auStack_50,uVar4);
  FUN_004c1b20(auStack_58,0x80);
  lVar5 = FUN_004a3bd4();
  uVar4 = *param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __src = (undefined1 *)*param_2;
    uVar2 = param_2[1];
    if (uVar2 < 0x17) {
      local_60 = CONCAT17((char)uVar2,(undefined7)local_60);
    }
    else {
      if (0x7fffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar2 | 0xf) + 1;
      __dest = (undefined1 **)operator_new(uVar1);
      local_60 = uVar1 | 0x8000000000000000;
      local_70 = (undefined1 *)__dest;
      uStack_68 = uVar2;
    }
    if ((__dest <= __src) && (__src < (undefined1 *)((long)__dest + uVar2 + 1))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(__dest,__src,uVar2 + 1);
  }
  else {
    uStack_68 = param_2[1];
    local_70 = (undefined1 *)*param_2;
    local_60 = param_2[2];
  }
  uVar8 = *(undefined8 *)(lVar5 + 0x468);
  uVar6 = FUN_004a3de8(&local_70);
  uVar7 = FUN_004a2934();
  FUN_004c2120(uVar7,uVar4,uVar8,uVar6);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  FUN_004c1b84(auStack_58);
  FUN_004c1858(auStack_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d3cf4  FUN_004d3cf4 =====

undefined8 * FUN_004d3cf4(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d3d44  FUN_004d3d44 =====

void FUN_004d3d44(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d3d80  FUN_004d3d80 =====

void FUN_004d3d80(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 auStack_140 [40];
  undefined1 auStack_118 [48];
  void *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  ulong local_c8;
  long local_c0;
  void *local_b8;
  char local_a1;
  void *local_78;
  char local_61;
  long local_58;
  undefined8 *puVar7;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_004d9768(auStack_118);
  FUN_004df134(auStack_140,0);
  uVar3 = FUN_004d9798(auStack_118,param_2,auStack_140,0);
  if ((uVar3 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  else {
    FUN_004d3fd4(param_1,auStack_140);
  }
  FUN_004df880(auStack_140);
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_a1 < '\0') {
    operator_delete(local_b8);
  }
  puVar8 = local_e0;
  if (local_d8 != local_e0) {
    uVar3 = local_c0 + local_c8;
    plVar9 = local_e0 + local_c8 / 0x49;
    lVar5 = local_e0[uVar3 / 0x49];
    lVar4 = *plVar9;
    lVar1 = lVar4 + (local_c8 % 0x49) * 0x38;
    puVar8 = local_d8;
    while (local_d8 = puVar8, lVar1 != lVar5 + (uVar3 % 0x49) * 0x38) {
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
      }
      if (*(char *)(lVar1 + 0x2f) < '\0') {
        operator_delete(*(void **)(lVar1 + 0x18));
        lVar4 = *plVar9;
      }
      lVar1 = lVar1 + 0x38;
      puVar8 = local_d8;
      if (lVar1 - lVar4 == 0xff8) {
        plVar9 = plVar9 + 1;
        lVar4 = *plVar9;
        lVar1 = lVar4;
      }
    }
  }
  local_c0 = 0;
  uVar3 = (long)puVar8 - (long)local_e0;
  while (0x10 < uVar3) {
    operator_delete((void *)*local_e0);
    local_e0 = local_e0 + 1;
    puVar8 = local_d8;
    uVar3 = (long)local_d8 - (long)local_e0;
  }
  if (uVar3 >> 3 == 1) {
    local_c8 = 0x24;
  }
  else if (uVar3 >> 3 == 2) {
    local_c8 = 0x49;
  }
  puVar6 = local_e0;
  if (local_e0 != puVar8) {
    do {
      puVar7 = puVar6 + 1;
      operator_delete((void *)*puVar6);
      puVar6 = puVar7;
    } while (puVar7 != puVar8);
    if (local_d8 != local_e0) {
      local_d8 = (undefined8 *)
                 ((long)local_d8 + ((long)local_e0 + (7 - (long)local_d8) & 0xfffffffffffffff8U));
    }
  }
  if (local_e8 != (void *)0x0) {
    operator_delete(local_e8);
  }
  FUN_004491b8(auStack_118);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d3fd4  FUN_004d3fd4 =====

/* WARNING: Removing unreachable block (ram,0x004d414c) */

void FUN_004d3fd4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  undefined8 *local_a0 [2];
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 local_68;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar6 = FUN_004e05c4();
  if ((uVar6 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_004d4214;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  else {
    local_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    local_a0[0] = (undefined8 *)0x0;
    uVar4 = FUN_004e04c8(param_2);
    if (uVar4 != 0) {
      ppuStack_70 = local_a0;
      local_b0 = (undefined8 *)operator_new((ulong)uVar4 * 0x30);
      local_a0[0] = local_b0 + (ulong)uVar4 * 6;
      uStack_88 = 0;
      local_90 = (void *)0x0;
      ppuStack_78 = (undefined8 **)0x0;
      local_80 = 0;
      puStack_a8 = local_b0;
      FUN_004d4218(&local_90);
    }
    iVar5 = FUN_004e04c8(param_2);
    if (iVar5 != 0) {
      iVar7 = 0;
      do {
        uVar6 = FUN_004e119c(param_2,iVar7);
        if ((uVar6 & 1) == 0) {
          local_60 = 0;
          ppuStack_78 = (undefined8 **)0x0;
          local_80 = 0;
          local_68 = 0;
          ppuStack_70 = (undefined8 **)0x0;
          uStack_88 = 0;
          local_90 = (void *)0x0;
        }
        else {
          FUN_004e09f8(param_2,iVar7);
          FUN_004d44bc(&local_90);
        }
        if (puStack_a8 < local_a0[0]) {
          if (puStack_a8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          puStack_a8[4] = 0;
          puStack_a8[5] = 0;
          puStack_a8[1] = uStack_88;
          *puStack_a8 = local_90;
          puStack_a8[2] = local_80;
          puStack_a8[3] = 0;
          uStack_88 = 0;
          local_80 = 0;
          local_90 = (void *)0x0;
          puStack_a8[4] = ppuStack_70;
          puStack_a8[3] = ppuStack_78;
          ppuStack_78 = (undefined8 **)0x0;
          ppuStack_70 = (undefined8 **)0x0;
          puStack_a8[5] = local_68;
          puStack_a8 = puStack_a8 + 6;
          local_68 = 0;
        }
        else {
          FUN_004d42dc(&local_b0,&local_90);
          if (ppuStack_78 != (undefined8 **)0x0) {
            for (; ppuStack_70 != ppuStack_78; ppuStack_70 = ppuStack_70 + -3) {
            }
            ppuStack_70 = ppuStack_78;
            operator_delete(ppuStack_78);
          }
        }
        if (local_80 < 0) {
          operator_delete(local_90);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != iVar5);
    }
    puVar3 = local_a0[0];
    puVar2 = puStack_a8;
    puStack_a8 = (undefined8 *)0x0;
    local_a0[0] = (undefined8 *)0x0;
    param_1[1] = puVar2;
    *param_1 = local_b0;
    param_1[2] = puVar3;
    local_b0 = (undefined8 *)0x0;
    *(undefined1 *)(param_1 + 3) = 1;
    FUN_0040dcf8(&local_b0);
    if (*(long *)(lVar1 + 0x28) != local_58) {
LAB_004d4214:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 004d4218  FUN_004d4218 =====

/* WARNING: Removing unreachable block (ram,0x004d4280) */
/* WARNING: Removing unreachable block (ram,0x004d42a0) */

void FUN_004d4218(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  
  lVar1 = param_1[1];
  lVar4 = param_1[2];
  while (lVar4 != lVar1) {
    pvVar5 = *(void **)(lVar4 + -0x18);
    param_1[2] = lVar4 + -0x30;
    if (pvVar5 != (void *)0x0) {
      pvVar3 = *(void **)(lVar4 + -0x10);
      pvVar2 = pvVar5;
      if (pvVar3 != pvVar5) {
        do {
          pvVar3 = (void *)((long)pvVar3 + -0x18);
        } while (pvVar3 != pvVar5);
        pvVar2 = *(void **)(lVar4 + -0x18);
      }
      *(void **)(lVar4 + -0x10) = pvVar5;
      operator_delete(pvVar2);
    }
    lVar4 = param_1[2];
  }
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 004d42dc  FUN_004d42dc =====

void FUN_004d42dc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long local_70;
  long local_68;
  long lStack_60;
  void *local_58;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar5 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar5 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_50 = param_1 + 2;
  lVar7 = *local_50 - *param_1 >> 4;
  uVar8 = lVar7 * 0x5555555555555556;
  if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
    uVar8 = uVar1;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar8 = 0x555555555555555;
  }
  if (uVar8 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
    pvVar4 = operator_new(uVar8 * 0x30);
  }
  local_58 = (void *)((long)pvVar4 + uVar8 * 0x30);
  if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  uVar12 = param_2[1];
  uVar11 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar9 = param_2[2];
  uVar14 = param_2[4];
  uVar13 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0;
  puVar6 = (undefined8 *)((long)pvVar4 + lVar5 * 0x10);
  uVar10 = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  lVar5 = *param_1;
  local_70 = param_1[1];
  puVar6[2] = uVar9;
  puVar2 = puVar6 + 6;
  puVar6[1] = uVar12;
  *puVar6 = uVar11;
  puVar6[5] = uVar10;
  puVar6[4] = uVar14;
  puVar6[3] = uVar13;
  lStack_60 = local_70;
  if (local_70 != lVar5) {
    do {
      uVar10 = *(undefined8 *)(local_70 + -0x28);
      uVar9 = *(undefined8 *)(local_70 + -0x30);
      puVar6[-4] = *(undefined8 *)(local_70 + -0x20);
      puVar6[-5] = uVar10;
      puVar6[-6] = uVar9;
      *(undefined8 *)(local_70 + -0x28) = 0;
      *(undefined8 *)(local_70 + -0x20) = 0;
      *(undefined8 *)(local_70 + -0x30) = 0;
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      uVar9 = *(undefined8 *)(local_70 + -0x18);
      puVar6[-2] = *(undefined8 *)(local_70 + -0x10);
      puVar6[-3] = uVar9;
      puVar6[-1] = *(undefined8 *)(local_70 + -8);
      lVar7 = local_70 + -0x30;
      *(undefined8 *)(local_70 + -0x18) = 0;
      *(undefined8 *)(local_70 + -0x10) = 0;
      puVar6 = puVar6 + -6;
      *(undefined8 *)(local_70 + -8) = 0;
      local_70 = lVar7;
    } while (lVar7 != lVar5);
    local_70 = *param_1;
    lStack_60 = param_1[1];
  }
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar2;
  lVar5 = param_1[2];
  param_1[2] = (long)local_58;
  local_68 = local_70;
  local_58 = (void *)lVar5;
  FUN_004d4218(&local_70);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004d44bc  FUN_004d44bc =====

/* WARNING: Removing unreachable block (ram,0x004d478c) */
/* WARNING: Removing unreachable block (ram,0x004d4554) */
/* WARNING: Removing unreachable block (ram,0x004d47c8) */
/* WARNING: Removing unreachable block (ram,0x004d4848) */
/* WARNING: Removing unreachable block (ram,0x004d47d8) */
/* WARNING: Removing unreachable block (ram,0x004d4560) */
/* WARNING: Removing unreachable block (ram,0x004d47f4) */
/* WARNING: Removing unreachable block (ram,0x004d4800) */
/* WARNING: Removing unreachable block (ram,0x004d480c) */
/* WARNING: Removing unreachable block (ram,0x004d47ac) */

void FUN_004d44bc(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *__src;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *pvVar10;
  undefined8 *__dest;
  void *pvVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar9 = FUN_004e05d4();
  if ((((uVar9 & 1) == 0) || (uVar9 = FUN_004e1714(param_2,"region"), (uVar9 & 1) == 0)) ||
     (uVar9 = FUN_004e1714(param_2,&DAT_001ef78b), (uVar9 & 1) == 0)) {
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_004d484c;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    uVar9 = FUN_004e1714(param_2,"region");
    if ((uVar9 & 1) == 0) {
      local_88 = 0;
      uStack_80 = 0;
      local_70 = 0;
      local_78 = 0;
    }
    else {
      FUN_004e12e0(param_2,"region");
      FUN_004c191c(&local_88);
    }
    uVar8 = local_78;
    uVar7 = uStack_80;
    uVar6 = local_88;
    uVar9 = FUN_004e1714(param_2,&DAT_001ef78b);
    if ((uVar9 & 1) == 0) {
      pvVar11 = (void *)0x0;
      lVar12 = 0;
      pvVar10 = (void *)0x0;
      local_a8 = (void *)0x0;
      local_a0 = (void *)0x0;
      local_90 = 0;
      local_98 = 0;
    }
    else {
      FUN_004e12e0(param_2,&DAT_001ef78b);
      FUN_004d4850(&local_a8);
      pvVar5 = local_a0;
      pvVar4 = local_a8;
      uVar9 = (long)local_a0 - (long)local_a8;
      if (uVar9 == 0) {
        pvVar11 = (void *)0x0;
        lVar12 = 0;
        pvVar10 = (void *)0x0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar9 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pvVar10 = operator_new(uVar9);
        lVar12 = 0;
        pvVar11 = (void *)((long)pvVar10 + ((long)uVar9 >> 3) * 8);
        do {
          puVar2 = (undefined8 *)((long)pvVar4 + lVar12);
          __dest = (undefined8 *)((long)pvVar10 + lVar12);
          if (*(char *)((long)puVar2 + 0x17) < '\0') {
            __src = (undefined8 *)*puVar2;
            uVar9 = puVar2[1];
            if (uVar9 < 0x17) {
              *(char *)((long)pvVar10 + lVar12 + 0x17) = (char)uVar9;
            }
            else {
              if (0x7fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar1 = (uVar9 | 0xf) + 1;
              __dest = (undefined8 *)operator_new(uVar1);
              puVar2 = (undefined8 *)((long)pvVar10 + lVar12);
              puVar2[1] = uVar9;
              puVar2[2] = uVar1 | 0x8000000000000000;
              *puVar2 = __dest;
            }
            if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar9 + 1))) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                         ,0xec,"__s2 < __s1 || __s2 >= __s1+__n",
                         "char_traits::copy overlapped range");
            }
            memmove(__dest,__src,uVar9 + 1);
          }
          else {
            uVar14 = puVar2[1];
            uVar13 = *puVar2;
            __dest[2] = puVar2[2];
            __dest[1] = uVar14;
            *__dest = uVar13;
          }
          lVar12 = lVar12 + 0x18;
        } while ((void *)((long)pvVar4 + lVar12) != pvVar5);
        lVar12 = (long)pvVar10 + lVar12;
      }
    }
    param_1[4] = lVar12;
    param_1[5] = pvVar11;
    param_1[1] = uVar7;
    *param_1 = uVar6;
    param_1[2] = uVar8;
    param_1[3] = pvVar10;
    *(undefined1 *)(param_1 + 6) = 1;
    if (local_a8 != (void *)0x0) {
      for (; local_a0 != local_a8; local_a0 = (void *)((long)local_a0 + -0x18)) {
      }
      local_a0 = local_a8;
      operator_delete(local_a8);
    }
    if (*(long *)(lVar3 + 0x28) != local_68) {
LAB_004d484c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 004d4850  FUN_004d4850 =====

void FUN_004d4850(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_004e05c4();
  if ((uVar4 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_004d49cc;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  else {
    local_80 = 0;
    puStack_78 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
    uVar2 = FUN_004e04c8(param_2);
    FUN_0047a51c(&local_80,uVar2);
    iVar3 = FUN_004e04c8(param_2);
    if (iVar3 != 0) {
      iVar5 = 0;
      do {
        uVar4 = FUN_004e119c(param_2,iVar5);
        if ((uVar4 & 1) == 0) {
          local_68 = (void *)0x0;
          uStack_60 = 0;
          local_50 = 0;
          local_58 = 0;
        }
        else {
          FUN_004e09f8(param_2,iVar5);
          FUN_004c191c(&local_68);
        }
        if (puStack_78 < local_70) {
          if (puStack_78 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          puStack_78[2] = local_58;
          puStack_78[1] = uStack_60;
          *puStack_78 = local_68;
          puStack_78 = puStack_78 + 3;
        }
        else {
          FUN_0047a79c(&local_80,&local_68);
          if (local_58 < 0) {
            operator_delete(local_68);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar3 != iVar5);
    }
    param_1[1] = puStack_78;
    *param_1 = local_80;
    param_1[2] = local_70;
    *(undefined1 *)(param_1 + 3) = 1;
    if (*(long *)(lVar1 + 0x28) != local_48) {
LAB_004d49cc:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 004d49d0  FUN_004d49d0 =====

/* WARNING: Removing unreachable block (ram,0x004d4b84) */

void FUN_004d49d0(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *__src;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  void *pvVar9;
  undefined8 *__dest;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  void *local_90;
  void *local_88;
  void *local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar7 = FUN_004a2934();
  FUN_004c1850(auStack_70,uVar7);
  FUN_004c1b20(auStack_78,0x80);
  lVar8 = FUN_004a3bd4();
  lVar3 = *param_2;
  lVar4 = param_2[1];
  uVar7 = *param_1;
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  local_90 = (void *)0x0;
  uVar5 = lVar4 - lVar3;
  if (uVar5 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar5 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar9 = operator_new(uVar5);
    lVar13 = 0;
    local_80 = (void *)((long)pvVar9 + ((long)uVar5 >> 3) * 8);
    local_90 = pvVar9;
    do {
      puVar2 = (undefined8 *)(lVar3 + lVar13);
      __dest = (undefined8 *)((long)pvVar9 + lVar13);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        __src = (undefined8 *)*puVar2;
        uVar5 = puVar2[1];
        if (uVar5 < 0x17) {
          *(char *)((long)pvVar9 + lVar13 + 0x17) = (char)uVar5;
        }
        else {
          if (0x7fffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = (uVar5 | 0xf) + 1;
          __dest = (undefined8 *)operator_new(uVar1);
          puVar2 = (undefined8 *)((long)pvVar9 + lVar13);
          puVar2[1] = uVar5;
          puVar2[2] = uVar1 | 0x8000000000000000;
          *puVar2 = __dest;
        }
        if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + uVar5 + 1))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                     ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
        }
        memmove(__dest,__src,uVar5 + 1);
      }
      else {
        uVar11 = puVar2[1];
        uVar10 = *puVar2;
        __dest[2] = puVar2[2];
        __dest[1] = uVar11;
        *__dest = uVar10;
      }
      lVar13 = lVar13 + 0x18;
    } while (lVar3 + lVar13 != lVar4);
    local_88 = (void *)((long)pvVar9 + lVar13);
  }
  uVar12 = *(undefined8 *)(lVar8 + 0x488);
  uVar10 = FUN_004c95e0(&local_90);
  uVar11 = FUN_004a2934();
  FUN_004c2120(uVar11,uVar7,uVar12,uVar10);
  if (local_90 != (void *)0x0) {
    for (; local_88 != local_90; local_88 = (void *)((long)local_88 + -0x18)) {
    }
    local_88 = local_90;
    operator_delete(local_90);
  }
  FUN_004c1b84(auStack_78);
  FUN_004c1858(auStack_70);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d4c10  FUN_004d4c10 =====

undefined8 * FUN_004d4c10(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d4c60  FUN_004d4c60 =====

void FUN_004d4c60(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d4c9c  FUN_004d4c9c =====

/* WARNING: Removing unreachable block (ram,0x004d4ee4) */

void FUN_004d4c9c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 ***local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 ***local_80;
  ulong uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar6 = FUN_004a2934();
  FUN_004c1850(auStack_a8,uVar6);
  FUN_004c1b20(auStack_b0,0x80);
  lVar7 = FUN_004a3bd4();
  uVar6 = *param_1;
  lVar8 = FUN_004a3bd4();
  lVar9 = FUN_004a3bd4();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    ppppuVar2 = (undefined8 ****)*param_2;
    uVar3 = param_2[1];
    if (uVar3 < 0x17) {
      ppppuVar10 = &local_80;
      local_70 = CONCAT17((char)uVar3,(undefined7)local_70);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      ppppuVar10 = (undefined8 ****)operator_new(uVar1);
      local_70 = uVar1 | 0x8000000000000000;
      local_80 = ppppuVar10;
      uStack_78 = uVar3;
    }
    if ((ppppuVar10 <= ppppuVar2) && (ppppuVar2 < (undefined8 ****)((long)ppppuVar10 + uVar3 + 1)))
    goto LAB_004d4ef0;
    memmove(ppppuVar10,ppppuVar2,uVar3 + 1);
    cVar4 = *(char *)((long)param_2 + 0x2f);
  }
  else {
    uStack_78 = param_2[1];
    local_80 = (undefined8 ***)*param_2;
    local_70 = param_2[2];
    cVar4 = *(char *)((long)param_2 + 0x2f);
  }
  if (cVar4 < '\0') {
    ppppuVar2 = (undefined8 ****)param_2[3];
    uVar3 = param_2[4];
    if (uVar3 < 0x17) {
      ppppuVar10 = &local_a0;
      local_90 = CONCAT17((char)uVar3,(undefined7)local_90);
    }
    else {
      if (0x7fffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar1 = (uVar3 | 0xf) + 1;
      ppppuVar10 = (undefined8 ****)operator_new(uVar1);
      local_90 = uVar1 | 0x8000000000000000;
      local_a0 = ppppuVar10;
      uStack_98 = uVar3;
    }
    if ((ppppuVar10 <= ppppuVar2) && (ppppuVar2 < (undefined8 ****)((long)ppppuVar10 + uVar3 + 1)))
    {
LAB_004d4ef0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__string/char_traits.h"
                 ,0xec,"__s2 < __s1 || __s2 >= __s1+__n","char_traits::copy overlapped range");
    }
    memmove(ppppuVar10,ppppuVar2,uVar3 + 1);
  }
  else {
    uStack_98 = param_2[4];
    local_a0 = (undefined8 ***)param_2[3];
    local_90 = param_2[5];
  }
  uVar11 = FUN_004a2934();
  uVar14 = *(undefined8 *)(lVar9 + 0x1e8);
  uVar15 = *(undefined8 *)(lVar9 + 0x1f0);
  uVar12 = FUN_004a3de8(&local_80);
  uVar13 = FUN_004a3de8(&local_a0);
  uVar14 = FUN_004b8418(uVar11,uVar15,uVar14,uVar12,uVar13);
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  uVar11 = param_2[7];
  uVar15 = FUN_004a2934();
  uVar14 = FUN_004b8418(uVar15,*(undefined8 *)(lVar8 + 0x228),*(undefined8 *)(lVar8 + 0x220),uVar14,
                        uVar11);
  uVar11 = *(undefined8 *)(lVar7 + 0x528);
  uVar15 = FUN_004a2934();
  FUN_004c2120(uVar15,uVar6,uVar11,uVar14);
  FUN_004c1b84(auStack_b0);
  FUN_004c1858(auStack_a8);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004d4f24  FUN_004d4f24 =====

undefined8 * FUN_004d4f24(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d4f74  FUN_004d4f74 =====

void FUN_004d4f74(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d4fb0  FUN_004d4fb0 =====

void FUN_004d4fb0(undefined8 *param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  *(undefined1 *)(param_3 + 8) = 0;
  *(undefined1 *)(param_3 + 0x18) = 0;
  *(undefined1 *)(param_3 + 0x24) = 0;
  *(undefined1 *)(param_3 + 0x30) = 0;
  uVar2 = FUN_004a2934();
  FUN_004c1850(auStack_40,uVar2);
  FUN_004c1b20(auStack_48,0x80);
  lVar3 = FUN_004a3bd4();
  uVar4 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x548);
  uVar2 = FUN_004a2934();
  FUN_004c2120(uVar2,uVar4,uVar5,param_2);
  FUN_004c1b84(auStack_48);
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004d505c  FUN_004d505c =====

undefined8 * FUN_004d505c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)operator_new(8);
  lVar4 = *param_1;
  *puVar1 = 0;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_004a2934();
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,*param_1);
    *puVar1 = uVar3;
  }
  return puVar1;
}


// ===== 004d50ac  FUN_004d50ac =====

void FUN_004d50ac(long *param_1)

{
  long *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_004a2934();
    (**(code **)(*plVar1 + 0xb0))(plVar1,*param_1);
  }
  operator_delete(param_1);
  return;
}


// ===== 004d50e8  FUN_004d50e8 =====

void FUN_004d50e8(undefined8 *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = (undefined8 *)*param_1;
  uVar2 = FUN_004a2934();
  FUN_004c1850(auStack_40,uVar2);
  FUN_004c1b20(auStack_48,0x80);
  lVar3 = FUN_004a3bd4();
  uVar4 = *param_1;
  uVar5 = *(undefined8 *)(lVar3 + 0x4c8);
  uVar2 = FUN_004a2934();
  FUN_004c2120(uVar2,uVar4,uVar5,param_2 & 1);
  FUN_004c1b84(auStack_48);
  FUN_004c1858(auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


