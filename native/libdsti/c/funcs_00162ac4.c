// ===== 00162ac4  entry =====

void entry(void)

{
  __cxa_finalize(&PTR_LOOP_002086b0);
  return;
}


// ===== 00162ad4  _FINI_0 =====

int _FINI_0(void)

{
  int iVar1;
  
  if (DAT_00216404 != 0) {
    DAT_00216404 = 0;
    iVar1 = pthread_key_delete(DAT_00216400);
    return iVar1;
  }
  return 0x216000;
}


// ===== 00162b00  Java_com_discord_rlottie_RLottieDrawable_00024Companion_create =====

LottieInfo *
Java_com_discord_rlottie_RLottieDrawable_00024Companion_create
          (long *param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5,
          undefined8 param_6,char param_7,long param_8,char param_9)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  LottieInfo *pLVar1;
  undefined4 uVar2;
  long lVar3;
  Animation *pAVar4;
  char *pcVar5;
  uint uVar6;
  LottieInfo *this_00;
  piecewise_construct_t *ppVar7;
  basic_string_conflict *pbVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong *puVar12;
  FILE *__stream;
  size_t sVar13;
  undefined4 *puVar14;
  int extraout_w1;
  int extraout_w1_00;
  int iVar15;
  int extraout_w1_01;
  LottieInfo *pLVar16;
  map *pmVar17;
  allocator *paVar18;
  ulong uVar19;
  uint uVar20;
  piecewise_construct_t *ppVar21;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  double dVar22;
  undefined1 auVar23 [12];
  byte local_e0 [8];
  ulong local_d8;
  char *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  Animation *local_90;
  ulong uStack_88;
  char *local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  this_00 = (LottieInfo *)operator_new(0x98);
  memset(this_00,0,0x98);
  *(undefined2 *)(this_00 + 0x14) = 0;
  this_00[0x16] = (LottieInfo)0x0;
  *(undefined4 *)(this_00 + 0x10) = 0x1e;
  this_01 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_00 + 0x18);
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x4c) = 0;
  *(undefined8 *)(this_00 + 0x44) = 0;
  *(undefined4 *)(this_00 + 0x54) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  this_00[0x60] = (LottieInfo)0x0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  this_00[0x80] = (LottieInfo)0x0;
  *(undefined4 *)(this_00 + 0x90) = 0;
  if ((param_8 == 0) ||
     (ppVar7 = (piecewise_construct_t *)(**(code **)(*param_1 + 0x5d8))(param_1,param_8,0),
     ppVar7 == (piecewise_construct_t *)0x0)) {
    uVar20 = 0;
    pbVar8 = (basic_string_conflict *)0x0;
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x558))(param_1,param_8);
    pbVar8 = (basic_string_conflict *)operator_new(0x18);
    *(undefined8 *)(pbVar8 + 8) = 0;
    uVar20 = 0;
    *(undefined8 *)(pbVar8 + 0x10) = 0;
    *(basic_string_conflict **)pbVar8 = pbVar8 + 8;
    if (1 < (int)uVar6) {
      uVar19 = (ulong)(uVar6 >> 1);
      ppVar21 = ppVar7;
      do {
        uVar2 = *(undefined4 *)(ppVar21 + 4);
        local_90 = (Animation *)ppVar21;
        lVar9 = std::__ndk1::
                __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
                ::
                __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                          ((int *)pbVar8,ppVar21,(tuple *)&DAT_00146167,(tuple *)&local_90);
        *(undefined4 *)(lVar9 + 0x20) = uVar2;
        if (uVar20 == 0) {
          uVar20 = *(uint *)(ppVar21 + 4);
        }
        uVar19 = uVar19 - 1;
        ppVar21 = ppVar21 + 8;
      } while (uVar19 != 0);
    }
    (**(code **)(*param_1 + 0x618))(param_1,param_8,ppVar7,0);
  }
  pmVar17 = (map *)0x0;
  pcVar10 = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(this_01,pcVar10);
  rlottie::Animation::loadFromFile((Animation *)this_01,pbVar8,pmVar17);
  pAVar4 = local_90;
  local_90 = (Animation *)0x0;
  FUN_00164070(this_00,pAVar4);
  pAVar4 = local_90;
  local_90 = (Animation *)0x0;
  if (pAVar4 != (Animation *)0x0) {
    rlottie::Animation::~Animation(pAVar4);
    operator_delete(pAVar4);
  }
  if (pcVar10 != (char *)0x0) {
    (**(code **)(*param_1 + 0x550))(param_1,param_3,pcVar10);
  }
  if (*(Animation **)this_00 != (Animation *)0x0) {
    uVar11 = rlottie::Animation::totalFrame(*(Animation **)this_00);
    *(undefined8 *)(this_00 + 8) = uVar11;
    dVar22 = (double)rlottie::Animation::frameRate(*(Animation **)this_00);
    *(int *)(this_00 + 0x10) = (int)dVar22;
    this_00[0x16] = (LottieInfo)(param_9 != '\0');
    if (((int)dVar22 < 0x3d) && (*(ulong *)(this_00 + 8) < 0x259)) {
      this_00[0x14] = (LottieInfo)(param_7 != '\0');
      if (param_7 != '\0') {
        this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this_00 + 0x30);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=(this,(basic_string_conflict *)this_01);
        if (((byte)this_00[0x30] & 1) == 0) {
          pLVar16 = this_00 + 0x31;
          paVar18 = (allocator *)(ulong)((byte)this_00[0x30] >> 1);
        }
        else {
          paVar18 = *(allocator **)(this_00 + 0x38);
          pLVar16 = *(LottieInfo **)(this_00 + 0x40);
        }
        do {
          iVar15 = extraout_w1;
          if (paVar18 == (allocator *)0x0) goto LAB_00162e94;
          pLVar1 = pLVar16 + (long)paVar18;
          paVar18 = paVar18 + -1;
        } while (pLVar1[-1] != (LottieInfo)0x2f);
        if (paVar18 != (allocator *)0xffffffffffffffff) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string_conflict *)&local_b0,(ulong)this,0,paVar18);
          puVar12 = (ulong *)std::__ndk1::
                             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                             ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                       *)&local_b0,"/acache");
          local_80 = (char *)puVar12[2];
          uStack_88 = puVar12[1];
          local_90 = (Animation *)*puVar12;
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          if (((byte)local_b0._0_1_ & 1) != 0) {
            operator_delete(local_a0);
          }
          pcVar5 = local_80;
          pAVar4 = local_90;
          pcVar10 = (char *)((ulong)&local_90 | 1);
          if (((ulong)local_90 & 1) != 0) {
            pcVar10 = local_80;
          }
          mkdir(pcVar10,0x1ff);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                    (this,(ulong)paVar18,"/acache");
          iVar15 = extraout_w1_00;
          if (((ulong)pAVar4 & 1) != 0) {
            operator_delete(pcVar5);
          }
        }
LAB_00162e94:
        std::__ndk1::to_string((__ndk1 *)(ulong)param_4,iVar15);
        auVar23 = std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  append(local_c8,"_");
        puVar12 = auVar23._0_8_;
        uStack_a8 = puVar12[1];
        local_b0 = *puVar12;
        local_a0 = (void *)puVar12[2];
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        std::__ndk1::to_string((__ndk1 *)(ulong)param_5,auVar23._8_4_);
        uVar19 = (ulong)(local_e0[0] >> 1);
        pcVar10 = (char *)((ulong)local_e0 | 1);
        if ((local_e0[0] & 1) != 0) {
          uVar19 = local_d8;
          pcVar10 = local_d0;
        }
        puVar12 = (ulong *)std::__ndk1::
                           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                     *)&local_b0,pcVar10,uVar19);
        uStack_88 = puVar12[1];
        local_90 = (Animation *)*puVar12;
        local_80 = (char *)puVar12[2];
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        uVar19 = (ulong)local_90 >> 1 & 0x7f;
        pcVar10 = (char *)((ulong)&local_90 | 1);
        if (((ulong)local_90 & 1) != 0) {
          uVar19 = uStack_88;
          pcVar10 = local_80;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(this,pcVar10,uVar19);
        iVar15 = extraout_w1_01;
        if (((ulong)local_90 & 1) != 0) {
          operator_delete(local_80);
        }
        if ((local_e0[0] & 1) != 0) {
          operator_delete(local_d0);
        }
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        if (((byte)local_c8[0] & 1) != 0) {
          operator_delete(local_b8);
        }
        if (uVar20 != 0) {
          std::__ndk1::to_string((__ndk1 *)(ulong)uVar20,iVar15);
          puVar12 = (ulong *)std::__ndk1::
                             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                             ::insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                       *)&local_b0,0,"_");
          uStack_88 = puVar12[1];
          local_90 = (Animation *)*puVar12;
          local_80 = (char *)puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          uVar19 = (ulong)local_90 >> 1 & 0x7f;
          pcVar10 = (char *)((ulong)&local_90 | 1);
          if (((ulong)local_90 & 1) != 0) {
            uVar19 = uStack_88;
            pcVar10 = local_80;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (this,pcVar10,uVar19);
          if (((ulong)local_90 & 1) != 0) {
            operator_delete(local_80);
          }
          if ((local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
        }
        pcVar10 = ".s.cache";
        if (param_9 == '\0') {
          pcVar10 = ".cache";
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(this,pcVar10);
        if (((byte)*this & 1) == 0) {
          pLVar16 = this_00 + 0x31;
        }
        else {
          pLVar16 = *(LottieInfo **)(this_00 + 0x40);
        }
        __stream = fopen((char *)pLVar16,"r+");
        if (__stream == (FILE *)0x0) {
          this_00[0x15] = (LottieInfo)0x1;
        }
        else {
          sVar13 = fread(&local_b0,1,1,__stream);
          this_00[0x15] = (LottieInfo)(sVar13 != 1 || local_b0._0_1_ == (basic_string_conflict)0x0);
          if (sVar13 == 1 && local_b0._0_1_ != (basic_string_conflict)0x0) {
            fread(&local_90,4,1,__stream);
            *(undefined4 *)(this_00 + 0x54) = local_90._0_4_;
            fread(this_00 + 0x58,4,1,__stream);
            *(undefined4 *)(this_00 + 0x5c) = 9;
            if (((byte)this_00[0x30] & 1) == 0) {
              pLVar16 = this_00 + 0x31;
            }
            else {
              pLVar16 = *(LottieInfo **)(this_00 + 0x40);
            }
            utimensat(0,(char *)pLVar16,(timespec *)0x0,0);
          }
          fclose(__stream);
        }
      }
      puVar14 = (undefined4 *)(**(code **)(*param_1 + 0x5d8))(param_1,param_6,0);
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = (int)*(undefined8 *)(this_00 + 8);
        dVar22 = (double)rlottie::Animation::frameRate(*(Animation **)this_00);
        puVar14[1] = (int)dVar22;
        puVar14[2] = (uint)(byte)this_00[0x15];
        (**(code **)(*param_1 + 0x618))(param_1,param_6,puVar14,0);
      }
      goto LAB_00162d68;
    }
  }
  LottieInfo::~LottieInfo(this_00);
  operator_delete(this_00);
  this_00 = (LottieInfo *)0x0;
LAB_00162d68:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163154  LottieInfo::~LottieInfo =====

/* LottieInfo::~LottieInfo() */

void __thiscall LottieInfo::~LottieInfo(LottieInfo *this)

{
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
  }
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  FUN_00164070(this,0);
  return;
}


// ===== 001631a8  Java_com_discord_rlottie_RLottieDrawable_00024Companion_createWithJson =====

LottieInfo *
Java_com_discord_rlottie_RLottieDrawable_00024Companion_createWithJson
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,long param_6)

{
  undefined4 uVar1;
  long lVar2;
  Animation *pAVar3;
  uint uVar4;
  piecewise_construct_t *ppVar5;
  int *piVar6;
  long lVar7;
  LottieInfo *this;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  ulong uVar12;
  piecewise_construct_t *ppVar13;
  double dVar14;
  byte local_b8 [16];
  void *local_a8;
  piecewise_construct_t *local_a0 [2];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  Animation *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((param_6 == 0) ||
     (ppVar5 = (piecewise_construct_t *)(**(code **)(*param_1 + 0x5d8))(param_1,param_6,0),
     ppVar5 == (piecewise_construct_t *)0x0)) {
    piVar6 = (int *)0x0;
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x558))(param_1,param_6);
    piVar6 = (int *)operator_new(0x18);
    piVar11 = piVar6 + 2;
    piVar11[0] = 0;
    piVar11[1] = 0;
    piVar6[4] = 0;
    piVar6[5] = 0;
    *(int **)piVar6 = piVar11;
    if (1 < (int)uVar4) {
      uVar12 = (ulong)(uVar4 >> 1);
      ppVar13 = ppVar5;
      do {
        uVar1 = *(undefined4 *)(ppVar13 + 4);
        local_a0[0] = ppVar13;
        lVar7 = std::__ndk1::
                __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
                ::
                __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                          (piVar6,ppVar13,(tuple *)&DAT_00146167,(tuple *)local_a0);
        uVar12 = uVar12 - 1;
        ppVar13 = ppVar13 + 8;
        *(undefined4 *)(lVar7 + 0x20) = uVar1;
      } while (uVar12 != 0);
    }
    (**(code **)(*param_1 + 0x618))(param_1,param_6,ppVar5,0);
  }
  this = (LottieInfo *)operator_new(0x98);
  memset(this,0,0x98);
  *(undefined2 *)(this + 0x14) = 0;
  this[0x16] = (LottieInfo)0x0;
  *(undefined4 *)(this + 0x10) = 0x1e;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0x60] = (LottieInfo)0x0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x80] = (LottieInfo)0x0;
  *(undefined4 *)(this + 0x90) = 0;
  lVar7 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
  lVar8 = (**(code **)(*param_1 + 0x548))(param_1,param_4,0);
  FUN_001634e0(local_88,lVar7);
  FUN_001634e0(local_a0,lVar8);
  FUN_001634e0(local_b8,&DAT_00145e06);
  rlottie::Animation::loadFromData((Animation *)&local_70,local_88,local_a0,piVar6,local_b8);
  pAVar3 = local_70;
  local_70 = (Animation *)0x0;
  FUN_00164070(this,pAVar3);
  pAVar3 = local_70;
  local_70 = (Animation *)0x0;
  if (pAVar3 != (Animation *)0x0) {
    rlottie::Animation::~Animation(pAVar3);
    operator_delete(pAVar3);
  }
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (((ulong)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (lVar7 != 0) {
    (**(code **)(*param_1 + 0x550))(param_1,param_3,lVar7);
  }
  if (lVar8 != 0) {
    (**(code **)(*param_1 + 0x550))(param_1,param_4,lVar8);
  }
  if (*(Animation **)this == (Animation *)0x0) {
    LottieInfo::~LottieInfo(this);
    operator_delete(this);
    this = (LottieInfo *)0x0;
  }
  else {
    uVar9 = rlottie::Animation::totalFrame(*(Animation **)this);
    *(undefined8 *)(this + 8) = uVar9;
    dVar14 = (double)rlottie::Animation::frameRate(*(Animation **)this);
    *(int *)(this + 0x10) = (int)dVar14;
    puVar10 = (undefined4 *)(**(code **)(*param_1 + 0x5d8))(param_1,param_5,0);
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = (int)*(undefined8 *)(this + 8);
      dVar14 = (double)rlottie::Animation::frameRate(*(Animation **)this);
      puVar10[1] = (int)dVar14;
      puVar10[2] = 0;
      (**(code **)(*param_1 + 0x618))(param_1,param_5,puVar10,0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001634e0  FUN_001634e0 =====

void FUN_001634e0(ulong *param_1,char *param_2)

{
  size_t __n;
  undefined1 *__dest;
  ulong uVar1;
  
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00163554;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)operator_new(uVar1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
  }
  memcpy(__dest,param_2,__n);
LAB_00163554:
  __dest[__n] = 0;
  return;
}


// ===== 00163570  Java_com_discord_rlottie_RLottieDrawable_00024Companion_destroy =====

void Java_com_discord_rlottie_RLottieDrawable_00024Companion_destroy
               (undefined8 param_1,undefined8 param_2,LottieInfo *param_3)

{
  if (param_3 != (LottieInfo *)0x0) {
    LottieInfo::~LottieInfo(param_3);
    operator_delete(param_3);
    return;
  }
  return;
}


// ===== 001635a0  Java_com_discord_rlottie_RLottieDrawable_00024Companion_setLayerColor =====

void Java_com_discord_rlottie_RLottieDrawable_00024Companion_setLayerColor
               (long *param_1,undefined8 param_2,undefined8 *param_3,long param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 != (undefined8 *)0x0) && (param_4 != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x548))(param_1,param_4,0);
    uVar3 = *param_3;
    FUN_001634e0(local_60,lVar2);
    rlottie::Animation::setValue
              ((float)(param_5 & 0xff) * DAT_00144b04,(float)(param_5 >> 8 & 0xff) * DAT_00144b04,
               (float)(param_5 >> 0x10 & 0xff) * DAT_00144b04,uVar3,extraout_x1,0,local_60);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    if (lVar2 != 0) {
      (**(code **)(*param_1 + 0x550))(param_1,param_4,lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163698  Java_com_discord_rlottie_RLottieDrawable_00024Companion_replaceColors =====

void Java_com_discord_rlottie_RLottieDrawable_00024Companion_replaceColors
               (long *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  piecewise_construct_t *ppVar4;
  long lVar5;
  piecewise_construct_t *ppVar6;
  ulong uVar7;
  piecewise_construct_t *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (((param_3 != (undefined8 *)0x0) && (param_4 != 0)) &&
     (ppVar4 = (piecewise_construct_t *)(**(code **)(*param_1 + 0x5d8))(param_1,param_4,0),
     ppVar4 != (piecewise_construct_t *)0x0)) {
    uVar3 = (**(code **)(*param_1 + 0x558))(param_1,param_4);
    if (1 < (int)uVar3) {
      uVar7 = (ulong)(uVar3 >> 1);
      ppVar6 = ppVar4;
      do {
        uVar1 = *(undefined4 *)(ppVar6 + 4);
        local_70 = ppVar6;
        lVar5 = std::__ndk1::
                __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
                ::
                __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                          (*(int **)*param_3,ppVar6,(tuple *)&DAT_00146167,(tuple *)&local_70);
        uVar7 = uVar7 - 1;
        ppVar6 = ppVar6 + 8;
        *(undefined4 *)(lVar5 + 0x20) = uVar1;
      } while (uVar7 != 0);
    }
    rlottie::Animation::resetCurrentFrame((Animation *)*param_3);
    (**(code **)(*param_1 + 0x618))(param_1,param_4,ppVar4,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001637ac  CacheWriteThreadProc =====

void CacheWriteThreadProc(void)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *this;
  undefined *puVar4;
  undefined *this_00;
  undefined *this_01;
  undefined *puVar5;
  undefined *this_02;
  uint uVar6;
  int __fd;
  long lVar7;
  uint local_7c;
  mutex *local_78;
  char local_70;
  long local_68;
  
  this_02 = PTR_cacheDoneCv_0020f798;
  puVar5 = PTR_cacheWriteThreadTask_0020f790;
  this_01 = PTR_cacheDoneMutex_0020f788;
  this_00 = PTR_cacheCv_0020f780;
  puVar4 = PTR_frameReady_0020f778;
  this = PTR_cacheMutex_0020f770;
  puVar3 = PTR_cacheWriteThreadDone_0020f768;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  cVar1 = *PTR_cacheWriteThreadDone_0020f768;
  while (cVar1 == '\0') {
    local_78 = (mutex *)this;
    local_70 = '\x01';
    std::__ndk1::mutex::lock((mutex *)this);
    while ((*puVar4 & 1) == 0) {
      std::__ndk1::condition_variable::wait((condition_variable *)this_00,(unique_lock *)&local_78);
    }
    std::__ndk1::mutex::lock((mutex *)this_01);
    lVar7 = *(long *)puVar5;
    if (lVar7 == 0) {
      std::__ndk1::unique_lock<std::__ndk1::mutex>::unlock
                ((unique_lock<std::__ndk1::mutex> *)&local_78);
    }
    else {
      *(undefined8 *)puVar5 = 0;
      std::__ndk1::unique_lock<std::__ndk1::mutex>::unlock
                ((unique_lock<std::__ndk1::mutex> *)&local_78);
      local_7c = LZ4_compress_default
                           (*(undefined8 *)(lVar7 + 0x78),*(undefined8 *)(lVar7 + 0x70),
                            *(undefined4 *)(lVar7 + 0x84),*(undefined4 *)(lVar7 + 0x88));
      if (*(char *)(lVar7 + 0x80) != '\0') {
        *(uint *)(lVar7 + 0x8c) = local_7c;
        *(uint *)(lVar7 + 0x5c) = local_7c + 0xd;
      }
      uVar6 = local_7c;
      if (local_7c < *(uint *)(lVar7 + 0x54)) {
        uVar6 = *(uint *)(lVar7 + 0x54);
      }
      *(uint *)(lVar7 + 0x54) = uVar6;
      fwrite(&local_7c,4,1,*(FILE **)(lVar7 + 0x68));
      fwrite(*(void **)(lVar7 + 0x70),1,(ulong)local_7c,*(FILE **)(lVar7 + 0x68));
      fflush(*(FILE **)(lVar7 + 0x68));
      __fd = fileno(*(FILE **)(lVar7 + 0x68));
      fsync(__fd);
      *(int *)(lVar7 + 0x90) = *(int *)(lVar7 + 0x90) + 1;
    }
    *(undefined4 *)puVar4 = 0;
    std::__ndk1::condition_variable::notify_one((condition_variable *)this_02);
    std::__ndk1::mutex::unlock((mutex *)this_01);
    if (local_70 != '\0') {
      std::__ndk1::mutex::unlock(local_78);
    }
    cVar1 = *puVar3;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00163948  std::__ndk1::unique_lock<std::__ndk1::mutex>::unlock =====

/* std::__ndk1::unique_lock<std::__ndk1::mutex>::unlock() */

void __thiscall
std::__ndk1::unique_lock<std::__ndk1::mutex>::unlock(unique_lock<std::__ndk1::mutex> *this)

{
  if (this[8] != (unique_lock<std::__ndk1::mutex>)0x0) {
    mutex::unlock(*(mutex **)this);
    this[8] = (unique_lock<std::__ndk1::mutex>)0x0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(1,"unique_lock::unlock: not locked");
}


// ===== 00163988  Java_com_discord_rlottie_RLottieDrawable_00024Companion_createCache =====

void Java_com_discord_rlottie_RLottieDrawable_00024Companion_createCache
               (FILE *param_1,undefined8 param_2,undefined8 *param_3,uint param_4,int param_5)

{
  Surface *pSVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *this;
  pthread_t pVar6;
  uint uVar7;
  int iVar8;
  size_t sVar9;
  __thread_struct *this_00;
  undefined8 *__arg;
  char *pcVar10;
  void *pvVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  bool bVar15;
  ulong uVar16;
  undefined4 local_104;
  Surface aSStack_100 [64];
  pthread_t local_c0 [8];
  mutex *local_80;
  char local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (param_3 != (undefined8 *)0x0) {
    if ((*(byte *)(param_3 + 6) & 1) == 0) {
      pcVar10 = (char *)((long)param_3 + 0x31);
    }
    else {
      pcVar10 = (char *)param_3[8];
    }
    param_1 = fopen(pcVar10,"r+");
    if (param_1 != (FILE *)0x0) {
      sVar9 = fread(local_c0,1,1,param_1);
      uVar7 = fclose(param_1);
      param_1 = (FILE *)(ulong)uVar7;
      if ((sVar9 == 1) && (local_c0[0]._0_1_ != (thread)0x0)) goto LAB_00163d88;
    }
    if (*PTR_cacheWriteThreadCreated_0020f7a0 == '\0') {
      *PTR_cacheWriteThreadCreated_0020f7a0 = 1;
      this_00 = (__thread_struct *)operator_new(8);
      std::__ndk1::__thread_struct::__thread_struct(this_00);
      __arg = (undefined8 *)operator_new(0x10);
      puVar4 = PTR_CacheWriteThreadProc_0020f7a8;
      *__arg = this_00;
      __arg[1] = puVar4;
      iVar8 = pthread_create(local_c0,(pthread_attr_t *)0x0,FUN_00164364,__arg);
      pVar6 = local_c0[0];
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__throw_system_error(iVar8,"thread constructor failed");
      }
      if (*(long *)PTR_worker_0020f7b0 != 0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      local_c0[0] = 0;
      *(pthread_t *)PTR_worker_0020f7b0 = pVar6;
      param_1 = (FILE *)std::__ndk1::thread::~thread((thread *)local_c0);
    }
    if (((*(char *)(param_3 + 0xc) != '\0') && (*(char *)((long)param_3 + 0x15) != '\0')) &&
       (param_3[1] != 0)) {
      if ((*(byte *)(param_3 + 6) & 1) == 0) {
        pcVar10 = (char *)((long)param_3 + 0x31);
      }
      else {
        pcVar10 = (char *)param_3[8];
      }
      param_1 = fopen(pcVar10,"w+");
      param_3[0xd] = param_1;
      if (param_1 != (FILE *)0x0) {
        *(undefined4 *)((long)param_3 + 0x5c) = 9;
        fseek(param_1,9,0);
        iVar8 = param_4 * param_5 * 4;
        *(int *)(param_3 + 0xb) = iVar8;
        *(undefined4 *)((long)param_3 + 0x54) = 0;
        *(int *)((long)param_3 + 0x84) = iVar8;
        iVar8 = LZ4_compressBound();
        *(int *)(param_3 + 0x11) = iVar8;
        pvVar11 = operator_new__((long)iVar8);
        param_3[0xe] = pvVar11;
        puVar12 = (uint *)operator_new__((long)*(int *)((long)param_3 + 0x84));
        puVar13 = (uint *)operator_new__((long)*(int *)((long)param_3 + 0x84));
        uVar16 = -(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_4 << 2;
        rlottie::Surface::Surface
                  ((Surface *)local_c0,puVar12,(long)(int)param_4,(long)param_5,uVar16);
        rlottie::Surface::Surface(aSStack_100,puVar13,(long)(int)param_4,(long)param_5,uVar16);
        this = PTR_cacheDoneCv_0020f798;
        puVar5 = PTR_frameReady_0020f778;
        puVar4 = PTR_cacheMutex_0020f770;
        if (*(char *)((long)param_3 + 0x16) == '\0') {
          lVar14 = 1;
        }
        else {
          lVar14 = 1;
          if (0x3b < *(int *)(param_3 + 2)) {
            lVar14 = 2;
          }
        }
        if (param_3[1] != 0) {
          uVar16 = 0;
          bVar15 = false;
          do {
            pSVar1 = (Surface *)local_c0;
            if (bVar15) {
              pSVar1 = aSStack_100;
            }
            rlottie::Animation::renderSync((Animation *)*param_3,uVar16,pSVar1,true);
            if (uVar16 != 0) {
              local_80 = (mutex *)PTR_cacheDoneMutex_0020f788;
              local_78 = '\x01';
              std::__ndk1::mutex::lock((mutex *)PTR_cacheDoneMutex_0020f788);
              while ((*puVar5 & 1) != 0) {
                std::__ndk1::condition_variable::wait
                          ((condition_variable *)this,(unique_lock *)&local_80);
              }
              if (local_78 != '\0') {
                std::__ndk1::mutex::unlock(local_80);
              }
            }
            std::__ndk1::mutex::lock((mutex *)puVar4);
            *(undefined8 **)PTR_cacheWriteThreadTask_0020f790 = param_3;
            *(bool *)(param_3 + 0x10) = uVar16 == 0;
            pSVar1 = (Surface *)local_c0;
            if (bVar15) {
              pSVar1 = aSStack_100;
            }
            param_3[0xf] = *(undefined8 *)pSVar1;
            *(undefined4 *)puVar5 = 1;
            std::__ndk1::condition_variable::notify_one((condition_variable *)PTR_cacheCv_0020f780);
            std::__ndk1::mutex::unlock((mutex *)puVar4);
            uVar16 = uVar16 + lVar14;
            bVar15 = (bool)(bVar15 ^ 1);
          } while (uVar16 < (ulong)param_3[1]);
        }
        local_80 = (mutex *)PTR_cacheDoneMutex_0020f788;
        local_78 = '\x01';
        std::__ndk1::mutex::lock((mutex *)PTR_cacheDoneMutex_0020f788);
        puVar4 = PTR_cacheDoneCv_0020f798;
        bVar2 = *puVar5;
        while ((bVar2 & 1) != 0) {
          std::__ndk1::condition_variable::wait
                    ((condition_variable *)puVar4,(unique_lock *)&local_80);
          bVar2 = *puVar5;
        }
        if ((void *)param_3[0xe] != (void *)0x0) {
          operator_delete__((void *)param_3[0xe]);
        }
        operator_delete__(puVar12);
        operator_delete__(puVar13);
        fseek((FILE *)param_3[0xd],0,0);
        fputc(1,(FILE *)param_3[0xd]);
        local_104 = *(undefined4 *)((long)param_3 + 0x54);
        fwrite(&local_104,4,1,(FILE *)param_3[0xd]);
        fwrite(param_3 + 0xb,4,1,(FILE *)param_3[0xd]);
        fflush((FILE *)param_3[0xd]);
        iVar8 = fileno((FILE *)param_3[0xd]);
        fsync(iVar8);
        *(undefined1 *)((long)param_3 + 0x15) = 0;
        uVar7 = fclose((FILE *)param_3[0xd]);
        param_1 = (FILE *)(ulong)uVar7;
        if (local_78 != '\0') {
          param_1 = (FILE *)std::__ndk1::mutex::unlock(local_80);
        }
      }
    }
  }
LAB_00163d88:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00163dcc  Java_com_discord_rlottie_RLottieDrawable_00024Companion_getFrame =====

void Java_com_discord_rlottie_RLottieDrawable_00024Companion_getFrame
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4,long param_5,
               int param_6,int param_7,int param_8,char param_9)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  char *__filename;
  FILE *__stream;
  void *pvVar5;
  uint uVar6;
  ulong __n;
  uint uVar7;
  uint local_b0 [16];
  uint *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = 0;
  if ((param_3 == (undefined8 *)0x0) || (param_5 == 0)) goto LAB_0016403c;
  if ((*(char *)((long)param_3 + 0x16) == '\0') || (*(int *)(param_3 + 2) < 0x3c)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 2;
  }
  if (((*(char *)((long)param_3 + 0x15) != '\0') && (0 < (int)param_4)) &&
     (*(char *)((long)param_3 + 0x14) != '\0')) {
    uVar4 = 0;
    if (uVar7 != 0) {
      uVar4 = param_4 / uVar7;
    }
    if (*(int *)(param_3 + 0x12) <= (int)uVar4) {
      uVar4 = 0xffffffff;
      goto LAB_0016403c;
    }
  }
  iVar3 = AndroidBitmap_lockPixels(param_1,param_5,&local_70);
  uVar4 = param_4;
  if (iVar3 < 0) goto LAB_0016403c;
  uVar6 = *(uint *)((long)param_3 + 0x54);
  if (((*(char *)((long)param_3 + 0x14) == '\0') || (param_8 != param_6 * 4)) ||
     (((int)param_4 < 1 && *(char *)((long)param_3 + 0x15) != '\0' ||
      ((uVar1 = param_8 * param_7, uVar1 < uVar6 || (*(uint *)(param_3 + 0xb) != uVar1)))))) {
LAB_00163fe0:
    if ((*(char *)(param_3 + 0xc) == '\0') || (*(char *)((long)param_3 + 0x14) == '\0')) {
      rlottie::Surface::Surface
                ((Surface *)local_b0,local_70,(long)param_6,(long)param_7,(long)param_8);
      rlottie::Animation::renderSync
                ((Animation *)*param_3,(long)(int)param_4,(Surface *)local_b0,param_9 != '\0');
      *(undefined1 *)(param_3 + 0xc) = 1;
    }
  }
  else {
    if ((*(byte *)(param_3 + 6) & 1) == 0) {
      __filename = (char *)((long)param_3 + 0x31);
    }
    else {
      __filename = (char *)param_3[8];
    }
    __stream = fopen(__filename,"r");
    if (__stream == (FILE *)0x0) goto LAB_00163fe0;
    if ((void *)param_3[9] == (void *)0x0) {
LAB_00163f18:
      *(uint *)(param_3 + 10) = uVar6;
      if (*(char *)((long)param_3 + 0x15) != '\0') {
        uVar6 = uVar6 + 10000;
        *(uint *)(param_3 + 10) = uVar6;
      }
      pvVar5 = operator_new__((ulong)uVar6);
      param_3[9] = pvVar5;
    }
    else if (*(uint *)(param_3 + 10) < uVar6) {
      operator_delete__((void *)param_3[9]);
      param_3[9] = 0;
      goto LAB_00163f18;
    }
    fseek(__stream,(ulong)*(uint *)((long)param_3 + 0x5c),0);
    fread(local_b0,4,1,__stream);
    __n = (ulong)local_b0[0];
    if (local_b0[0] != 0) {
      if (*(uint *)(param_3 + 10) < local_b0[0]) {
        __n = 0;
      }
      else {
        fread((void *)param_3[9],1,__n,__stream);
        *(uint *)((long)param_3 + 0x5c) = local_b0[0] + *(int *)((long)param_3 + 0x5c) + 4;
        __n = 1;
        LZ4_decompress_safe(param_3[9],local_70,local_b0[0],uVar1);
      }
    }
    fclose(__stream);
    if ((ulong)param_3[1] <= (ulong)(long)(int)(uVar7 + param_4)) {
      *(undefined4 *)((long)param_3 + 0x5c) = 9;
    }
    if ((__n & 1) == 0) goto LAB_00163fe0;
  }
  AndroidBitmap_unlockPixels(param_1,param_5);
LAB_0016403c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 00164070  FUN_00164070 =====

void FUN_00164070(undefined8 *param_1,undefined8 param_2)

{
  Animation *this;
  
  this = (Animation *)*param_1;
  *param_1 = param_2;
  if (this != (Animation *)0x0) {
    rlottie::Animation::~Animation(this);
    operator_delete(this);
    return;
  }
  return;
}


// ===== 001640ac  std::__ndk1::__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>::__emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>> =====

/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int, int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<int, int>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<int, int>, std::__ndk1::__map_value_compare<int,
   std::__ndk1::__value_type<int, int>, std::__ndk1::less<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<int, int> > >::__emplace_unique_key_args<int,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>, std::__ndk1::tuple<>
   >(int const&, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&,
   std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
::
__emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
          (int *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  bool bVar1;
  __tree_end_node *p_Var2;
  __tree_end_node *p_Var3;
  __tree_end_node *p_Var4;
  __tree_node_base *p_Var5;
  undefined1 auVar6 [16];
  
  p_Var3 = (__tree_end_node *)(param_1 + 2);
  p_Var4 = p_Var3;
  if (*(__tree_end_node **)p_Var3 != (__tree_end_node *)0x0) {
    p_Var2 = *(__tree_end_node **)p_Var3;
    p_Var4 = (__tree_end_node *)(param_1 + 2);
    do {
      while (p_Var3 = p_Var2, *(int *)param_2 < *(int *)(p_Var3 + 0x1c)) {
        p_Var2 = *(__tree_end_node **)p_Var3;
        p_Var4 = p_Var3;
        if (*(__tree_end_node **)p_Var3 == (__tree_end_node *)0x0) goto LAB_00164120;
      }
      if (*(int *)param_2 <= *(int *)(p_Var3 + 0x1c)) break;
      p_Var4 = p_Var3 + 8;
      p_Var2 = *(__tree_end_node **)p_Var4;
    } while (*(__tree_end_node **)p_Var4 != (__tree_end_node *)0x0);
  }
LAB_00164120:
  p_Var5 = *(__tree_node_base **)p_Var4;
  bVar1 = p_Var5 == (__tree_node_base *)0x0;
  if (bVar1) {
    p_Var5 = (__tree_node_base *)operator_new(0x28);
    *(undefined4 *)(p_Var5 + 0x1c) = **(undefined4 **)param_4;
    *(undefined4 *)(p_Var5 + 0x20) = 0;
    __insert_node_at((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
                      *)param_1,p_Var3,(__tree_node_base **)p_Var4,p_Var5);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = p_Var5;
  auVar6._9_7_ = 0;
  return auVar6;
}


// ===== 00164178  std::__ndk1::__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>::__insert_node_at =====

/* std::__ndk1::__tree<std::__ndk1::__value_type<int, int>, std::__ndk1::__map_value_compare<int,
   std::__ndk1::__value_type<int, int>, std::__ndk1::less<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<int, int> >
   >::__insert_node_at(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*,
   std::__ndk1::__tree_node_base<void*>*&, std::__ndk1::__tree_node_base<void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
::__insert_node_at(__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
                   *this,__tree_end_node *param_1,__tree_node_base **param_2,
                  __tree_node_base *param_3)

{
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  *(__tree_end_node **)(param_3 + 0x10) = param_1;
  *param_2 = param_3;
  if (**(long **)this != 0) {
    *(long *)this = **(long **)this;
    param_3 = *param_2;
  }
  __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 8),param_3);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return;
}


// ===== 001641cc  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*> =====

/* void 
   std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(std::__ndk1::__tree_node_base<void*>*,
   std::__ndk1::__tree_node_base<void*>*) */

void std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
               (__tree_node_base *param_1,__tree_node_base *param_2)

{
  __tree_node_base _Var1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  long *plVar4;
  long lVar5;
  __tree_node_base *p_Var6;
  
  _Var1 = (__tree_node_base)(param_2 == param_1);
  param_2[0x18] = _Var1;
  do {
    if (((bool)_Var1) ||
       (p_Var3 = *(__tree_node_base **)(param_2 + 0x10), p_Var3[0x18] != (__tree_node_base)0x0)) {
      return;
    }
    p_Var2 = *(__tree_node_base **)(p_Var3 + 0x10);
    p_Var6 = *(__tree_node_base **)p_Var2;
    if (p_Var6 == p_Var3) {
      if ((*(long *)(p_Var2 + 8) == 0) ||
         (p_Var6 = (__tree_node_base *)(*(long *)(p_Var2 + 8) + 0x18),
         *p_Var6 != (__tree_node_base)0x0)) {
        if (*(__tree_node_base **)p_Var3 != param_2) {
          p_Var6 = *(__tree_node_base **)(p_Var3 + 8);
          lVar5 = *(long *)p_Var6;
          *(long *)(p_Var3 + 8) = lVar5;
          if (lVar5 != 0) {
            *(__tree_node_base **)(lVar5 + 0x10) = p_Var3;
            p_Var2 = *(__tree_node_base **)(p_Var3 + 0x10);
          }
          *(__tree_node_base **)(p_Var6 + 0x10) = p_Var2;
          (*(undefined8 **)(p_Var3 + 0x10))
          [(__tree_node_base *)**(undefined8 **)(p_Var3 + 0x10) != p_Var3] = p_Var6;
          *(__tree_node_base **)p_Var6 = p_Var3;
          *(__tree_node_base **)(p_Var3 + 0x10) = p_Var6;
          p_Var2 = *(__tree_node_base **)(p_Var6 + 0x10);
          p_Var3 = p_Var6;
        }
        p_Var3[0x18] = (__tree_node_base)0x1;
        plVar4 = *(long **)p_Var2;
        p_Var2[0x18] = (__tree_node_base)0x0;
        lVar5 = plVar4[1];
        *(long *)p_Var2 = lVar5;
        if (lVar5 != 0) {
          *(__tree_node_base **)(lVar5 + 0x10) = p_Var2;
        }
        plVar4[2] = *(long *)(p_Var2 + 0x10);
        (*(undefined8 **)(p_Var2 + 0x10))
        [(__tree_node_base *)**(undefined8 **)(p_Var2 + 0x10) != p_Var2] = plVar4;
        plVar4[1] = (long)p_Var2;
LAB_0016435c:
        *(long **)(p_Var2 + 0x10) = plVar4;
        return;
      }
    }
    else if ((p_Var6 == (__tree_node_base *)0x0) ||
            (p_Var6 = p_Var6 + 0x18, *p_Var6 != (__tree_node_base)0x0)) {
      if (*(__tree_node_base **)p_Var3 == param_2) {
        lVar5 = *(long *)(param_2 + 8);
        *(long *)p_Var3 = lVar5;
        if (lVar5 != 0) {
          *(__tree_node_base **)(lVar5 + 0x10) = p_Var3;
          p_Var2 = *(__tree_node_base **)(p_Var3 + 0x10);
        }
        *(__tree_node_base **)(param_2 + 0x10) = p_Var2;
        (*(undefined8 **)(p_Var3 + 0x10))
        [(__tree_node_base *)**(undefined8 **)(p_Var3 + 0x10) != p_Var3] = param_2;
        *(__tree_node_base **)(param_2 + 8) = p_Var3;
        *(__tree_node_base **)(p_Var3 + 0x10) = param_2;
        p_Var2 = *(__tree_node_base **)(param_2 + 0x10);
        p_Var3 = param_2;
      }
      p_Var3[0x18] = (__tree_node_base)0x1;
      plVar4 = *(long **)(p_Var2 + 8);
      p_Var2[0x18] = (__tree_node_base)0x0;
      lVar5 = *plVar4;
      *(long *)(p_Var2 + 8) = lVar5;
      if (lVar5 != 0) {
        *(__tree_node_base **)(lVar5 + 0x10) = p_Var2;
      }
      plVar4[2] = *(long *)(p_Var2 + 0x10);
      (*(undefined8 **)(p_Var2 + 0x10))
      [(__tree_node_base *)**(undefined8 **)(p_Var2 + 0x10) != p_Var2] = plVar4;
      *plVar4 = (long)p_Var2;
      goto LAB_0016435c;
    }
    _Var1 = (__tree_node_base)(p_Var2 == param_1);
    p_Var3[0x18] = (__tree_node_base)0x1;
    p_Var2[0x18] = _Var1;
    *p_Var6 = (__tree_node_base)0x1;
    param_2 = p_Var2;
  } while( true );
}


// ===== 00164364  FUN_00164364 =====

undefined8 FUN_00164364(undefined8 *param_1)

{
  int iVar1;
  pthread_key_t *ppVar2;
  void *__pointer;
  
  ppVar2 = (pthread_key_t *)std::__ndk1::__thread_local_data();
  __pointer = (void *)*param_1;
  *param_1 = 0;
  iVar1 = pthread_setspecific(*ppVar2,__pointer);
  (*(code *)param_1[1])(iVar1);
  if (param_1 != (undefined8 *)0x0) {
    FUN_001643b8(param_1,0);
    operator_delete(param_1);
  }
  return 0;
}


// ===== 001643b8  FUN_001643b8 =====

void FUN_001643b8(undefined8 *param_1,undefined8 param_2)

{
  __thread_struct *this;
  
  this = (__thread_struct *)*param_1;
  *param_1 = param_2;
  if (this != (__thread_struct *)0x0) {
    std::__ndk1::__thread_struct::~__thread_struct(this);
    operator_delete(this);
    return;
  }
  return;
}


// ===== 001643f4  _INIT_0 =====

void _INIT_0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_worker_0020f7b0;
  *(undefined8 *)PTR_worker_0020f7b0 = 0;
  __cxa_atexit(PTR__thread_0020f7b8,puVar1,&PTR_LOOP_002086b0);
  puVar1 = PTR__mutex_0020f7c0;
  __cxa_atexit(PTR__mutex_0020f7c0,PTR_cacheMutex_0020f770,&PTR_LOOP_002086b0);
  puVar2 = PTR__condition_variable_0020f7c8;
  __cxa_atexit(PTR__condition_variable_0020f7c8,PTR_cacheCv_0020f780,&PTR_LOOP_002086b0);
  __cxa_atexit(puVar1,PTR_cacheDoneMutex_0020f788,&PTR_LOOP_002086b0);
  __cxa_atexit(puVar2,PTR_cacheDoneCv_0020f798,&PTR_LOOP_002086b0);
  return;
}


// ===== 00164494  LZ4_versionNumber =====

undefined8 LZ4_versionNumber(void)

{
  return 0x2a95;
}


// ===== 0016449c  LZ4_versionString =====

char * LZ4_versionString(void)

{
  return "1.9.1";
}


// ===== 001644a8  LZ4_compressBound =====

int LZ4_compressBound(uint param_1)

{
  if (0x7e000000 < param_1) {
    return 0;
  }
  return (uint)((ulong)param_1 * 0x8080808081 >> 0x27) + 0x10;
}


// ===== 001644d8  LZ4_sizeofState =====

undefined8 LZ4_sizeofState(void)

{
  return 0x4020;
}


// ===== 001644e0  LZ4_compress_fast_extState =====

int LZ4_compress_fast_extState
              (void *param_1,long *param_2,short *param_3,uint param_4,int param_5,int param_6)

{
  char *pcVar1;
  uint *puVar2;
  char *pcVar3;
  ushort uVar4;
  short sVar5;
  long *plVar6;
  short *psVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  uint uVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  ulong *puVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  long *plVar28;
  long lVar29;
  int iVar30;
  
  if (param_1 != (void *)0x0) {
    if (((ulong)param_1 & 7) == 0) {
      memset(param_1,0,0x4020);
    }
    else {
      param_1 = (void *)0x0;
    }
  }
  if (param_6 < 2) {
    param_6 = 1;
  }
  puVar2 = (uint *)((long)param_1 + 0x4000);
  if (param_4 < 0x7e000001) {
    iVar16 = (uint)((ulong)param_4 * 0x8080808081 >> 0x27) + 0x10;
  }
  else {
    iVar16 = 0;
  }
  uVar9 = *puVar2;
  iVar20 = *(int *)((long)param_1 + 0x4018);
  lVar29 = (long)param_2 - (ulong)uVar9;
  iVar27 = (int)lVar29;
  sVar5 = (short)lVar29;
  iVar30 = (int)param_3;
  plVar28 = param_2;
  if (param_5 < iVar16) {
    pcVar1 = (char *)((long)param_3 + (long)param_5);
    if ((int)param_4 < 0x1000b) {
      if (param_4 < 0x7e000001) {
        *(uint *)((long)param_1 + 0x4018) = iVar20 + param_4;
        *puVar2 = uVar9 + param_4;
        *(undefined2 *)((long)param_1 + 0x4006) = 3;
        if ((int)param_4 < 0xd) {
LAB_00165710:
          uVar24 = (long)param_2 + ((long)(int)param_4 - (long)plVar28);
          if ((char *)((long)param_3 + (uVar24 + 0xf0) / 0xff + uVar24 + 1) <= pcVar1)
          goto LAB_00165740;
        }
        else {
          plVar22 = (long *)((long)param_2 + (long)(int)param_4 + -0xb);
          puVar23 = (ulong *)((long)param_2 + (long)(int)param_4 + -0xc);
          *(short *)((long)param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) =
               (short)uVar9;
LAB_00164fc0:
          iVar27 = *(int *)((long)plVar28 + 1U);
          iVar20 = 1;
          plVar17 = (long *)((long)plVar28 + 1U);
          iVar16 = param_6 << 6;
          do {
            plVar21 = (long *)((long)plVar17 + (long)iVar20);
            if (plVar22 < plVar21) goto LAB_00165710;
            lVar18 = (ulong)((uint)(iVar27 * -0x61c8864f) >> 0x13) * 2;
            uVar4 = *(ushort *)((long)param_1 + lVar18);
            iVar27 = (int)*plVar21;
            *(short *)((long)param_1 + lVar18) = (short)plVar17 - sVar5;
            plVar8 = (long *)(lVar29 + (ulong)uVar4);
            lVar18 = *plVar17;
            iVar20 = iVar16 >> 6;
            iVar16 = iVar16 + 1;
            plVar12 = plVar17;
            plVar17 = plVar21;
          } while ((int)*plVar8 != (int)lVar18);
          do {
            plVar17 = plVar8;
            plVar21 = plVar12;
            if ((plVar17 <= param_2) || (plVar21 <= plVar28)) break;
            plVar12 = (long *)((long)plVar21 + -1);
            plVar8 = (long *)((long)plVar17 + -1);
          } while (*(char *)((long)plVar21 + -1) == *(char *)((long)plVar17 + -1));
          uVar24 = (long)plVar21 - (long)plVar28 & 0xffffffff;
          if ((char *)((long)param_3 + uVar24 / 0xff + uVar24 + 9) <= pcVar1) {
            uVar9 = (uint)((long)plVar21 - (long)plVar28);
            iVar16 = uVar9 - 0xf;
            plVar8 = (long *)((long)param_3 + 1);
            if (uVar9 < 0xf) {
              *(char *)param_3 = (char)(uVar9 << 4);
            }
            else {
              *(char *)param_3 = -0x10;
              if (0xfe < iVar16) {
                if (0x1fc < iVar16) {
                  iVar16 = 0x1fd;
                }
                iVar20 = (int)plVar21 + 0xef;
                iVar27 = (int)plVar28;
                memset(plVar8,0xff,(ulong)((uint)(iVar20 - (iVar16 + iVar27)) / 0xff + 1));
                uVar9 = (iVar20 - iVar16) - iVar27;
                plVar8 = (long *)((long)param_3 + (ulong)uVar9 / 0xff + 2);
                iVar16 = ((int)plVar21 - iVar27) + uVar9 / 0xff + -0x10e;
              }
              *(char *)plVar8 = (char)iVar16;
              plVar8 = (long *)((long)plVar8 + 1);
            }
            plVar12 = (long *)((long)plVar8 + uVar24);
            do {
              plVar6 = plVar8 + 1;
              *plVar8 = *plVar28;
              plVar8 = plVar6;
              plVar28 = plVar28 + 1;
            } while (plVar6 < plVar12);
            do {
              puVar14 = (ulong *)((long)plVar21 + 4);
              psVar7 = (short *)((long)plVar12 + 2);
              *(short *)plVar12 = (short)plVar21 - (short)plVar17;
              puVar19 = (ulong *)((long)plVar17 + 4);
              iVar16 = (int)puVar14;
              if (puVar14 < puVar23) {
                uVar24 = *puVar14 ^ *puVar19;
                if (uVar24 == 0) {
                  puVar14 = (ulong *)((long)plVar21 + 0xc);
                  puVar19 = (ulong *)((long)plVar17 + 0xc);
                  goto joined_r0x00165328;
                }
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar9 = (uint)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
              }
              else {
joined_r0x00165328:
                for (; puVar14 < puVar23; puVar14 = puVar14 + 1) {
                  uVar24 = *puVar14 ^ *puVar19;
                  if (uVar24 != 0) {
                    uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1
                    ;
                    uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2
                    ;
                    uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar24 & 0xffff0000ffff) << 0x10;
                    uVar9 = ((int)puVar14 +
                            (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3)) - iVar16;
                    goto LAB_00165280;
                  }
                  puVar19 = puVar19 + 1;
                }
                if ((puVar14 < (ulong *)((long)param_2 + (long)(int)param_4 + -8)) &&
                   ((int)*puVar19 == (int)*puVar14)) {
                  puVar14 = (ulong *)((long)puVar14 + 4);
                  puVar19 = (ulong *)((long)puVar19 + 4);
                }
                if ((puVar14 < (ulong *)((long)param_2 + (long)(int)param_4 + -6)) &&
                   ((short)*puVar19 == (short)*puVar14)) {
                  puVar14 = (ulong *)((long)puVar14 + 2);
                  puVar19 = (ulong *)((long)puVar19 + 2);
                }
                puVar15 = puVar14;
                if ((puVar14 < (ulong *)((long)param_2 + (long)(int)param_4 + -5)) &&
                   (puVar15 = (ulong *)((long)puVar14 + 1), (char)*puVar19 != (char)*puVar14)) {
                  puVar15 = puVar14;
                }
                uVar9 = (int)puVar15 - iVar16;
              }
LAB_00165280:
              if (pcVar1 < (char *)((long)plVar12 + (ulong)(uVar9 >> 8) + 8)) {
                return 0;
              }
              uVar13 = uVar9 - 0xf;
              plVar28 = (long *)((long)plVar21 + (ulong)uVar9 + 4);
              if (uVar9 < 0xf) {
                *(char *)param_3 = (char)*param_3 + (char)uVar9;
                param_3 = psVar7;
              }
              else {
                *(char *)param_3 = (char)*param_3 + '\x0f';
                psVar7[0] = -1;
                psVar7[1] = -1;
                if (0x3fb < uVar13) {
                  uVar13 = ((uVar9 - 0x40b) / 0x3fc) * 4;
                  memset((short *)((long)plVar12 + 6),0xff,(ulong)(uVar13 + 4));
                  psVar7 = (short *)((long)plVar12 + 6 + (ulong)uVar13);
                  uVar13 = (uVar9 - 0x40b) % 0x3fc;
                }
                pcVar3 = (char *)((long)psVar7 + (ulong)(uVar13 & 0xffff) / 0xff);
                *pcVar3 = (char)uVar13 + (char)((uVar13 & 0xffff) / 0xff);
                param_3 = (short *)(pcVar3 + 1);
              }
              if (plVar22 <= plVar28) goto LAB_00165710;
              piVar11 = (int *)((long)plVar21 + (ulong)uVar9 + 2);
              *(short *)((long)param_1 + (ulong)((uint)(*piVar11 * -0x61c8864f) >> 0x13) * 2) =
                   (short)piVar11 - sVar5;
              lVar18 = (ulong)((uint)((int)*plVar28 * -0x61c8864f) >> 0x13) * 2;
              uVar4 = *(ushort *)((long)param_1 + lVar18);
              *(short *)((long)param_1 + lVar18) = (short)plVar28 - sVar5;
              plVar17 = (long *)(lVar29 + (ulong)uVar4);
              if ((int)*plVar17 != (int)*plVar28) goto LAB_00164fc0;
              plVar12 = (long *)((long)param_3 + 1);
              *(char *)param_3 = '\0';
              plVar21 = plVar28;
            } while( true );
          }
        }
      }
    }
    else if (param_4 < 0x7e000001) {
      *(uint *)((long)param_1 + 0x4018) = iVar20 + param_4;
      *puVar2 = uVar9 + param_4;
      *(undefined2 *)((long)param_1 + 0x4006) = 2;
      plVar17 = (long *)((long)param_2 + 2);
      plVar21 = (long *)((long)param_2 + ((ulong)param_4 - 0xb));
      plVar22 = (long *)((long)param_2 + 1);
      uVar13 = uVar9 + 1;
      puVar23 = (ulong *)((long)param_2 + ((ulong)param_4 - 0xc));
      *(uint *)((long)param_1 + ((ulong)(*param_2 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) = uVar9;
LAB_00164af8:
      lVar18 = *plVar22;
      iVar16 = param_6 << 6;
      while( true ) {
        uVar24 = (ulong)(lVar18 * -0x30e4432345000000) >> 0x32 & 0x3ffc;
        uVar9 = *(uint *)((long)param_1 + uVar24);
        lVar18 = *plVar17;
        *(uint *)((long)param_1 + uVar24) = uVar13;
        if ((uVar13 <= uVar9 + 0xffff) &&
           (plVar8 = (long *)(lVar29 + (ulong)uVar9), (int)*plVar8 == (int)*plVar22)) break;
        plVar8 = (long *)((long)plVar17 + (long)(iVar16 >> 6));
        uVar13 = (int)plVar17 - iVar27;
        iVar16 = iVar16 + 1;
        plVar22 = plVar17;
        plVar17 = plVar8;
        if (plVar21 < plVar8) goto LAB_00164eb4;
      }
      do {
        plVar17 = plVar22;
        plVar12 = plVar8;
        if ((plVar12 <= param_2) || (plVar17 <= plVar28)) break;
        plVar8 = (long *)((long)plVar12 + -1);
        plVar22 = (long *)((long)plVar17 + -1);
      } while (*(char *)((long)plVar17 + -1) == *(char *)((long)plVar12 + -1));
      uVar24 = (long)plVar17 - (long)plVar28 & 0xffffffff;
      if ((char *)((long)param_3 + uVar24 / 0xff + uVar24 + 9) <= pcVar1) {
        uVar9 = (uint)((long)plVar17 - (long)plVar28);
        iVar16 = uVar9 - 0xf;
        plVar22 = (long *)((long)param_3 + 1);
        if (uVar9 < 0xf) {
          *(char *)param_3 = (char)(uVar9 << 4);
        }
        else {
          *(char *)param_3 = -0x10;
          if (0xfe < iVar16) {
            if (0x1fc < iVar16) {
              iVar16 = 0x1fd;
            }
            iVar20 = (int)plVar17 + 0xef;
            iVar26 = (int)plVar28;
            memset(plVar22,0xff,(ulong)((uint)(iVar20 - (iVar16 + iVar26)) / 0xff + 1));
            uVar9 = (iVar20 - iVar16) - iVar26;
            plVar22 = (long *)((long)param_3 + (ulong)uVar9 / 0xff + 2);
            iVar16 = ((int)plVar17 - iVar26) + uVar9 / 0xff + -0x10e;
          }
          *(char *)plVar22 = (char)iVar16;
          plVar22 = (long *)((long)plVar22 + 1);
        }
        plVar8 = (long *)((long)plVar22 + uVar24);
        do {
          plVar6 = plVar22 + 1;
          *plVar22 = *plVar28;
          plVar22 = plVar6;
          plVar28 = plVar28 + 1;
        } while (plVar6 < plVar8);
        do {
          puVar14 = (ulong *)((long)plVar17 + 4);
          psVar7 = (short *)((long)plVar8 + 2);
          *(short *)plVar8 = (short)plVar17 - (short)plVar12;
          puVar19 = (ulong *)((long)plVar12 + 4);
          iVar16 = (int)puVar14;
          if (puVar14 < puVar23) {
            uVar24 = *puVar14 ^ *puVar19;
            if (uVar24 == 0) {
              puVar14 = (ulong *)((long)plVar17 + 0xc);
              puVar19 = (ulong *)((long)plVar12 + 0xc);
              goto joined_r0x00164ea0;
            }
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
          }
          else {
joined_r0x00164ea0:
            for (; puVar14 < puVar23; puVar14 = puVar14 + 1) {
              uVar24 = *puVar14 ^ *puVar19;
              if (uVar24 != 0) {
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar24 = (ulong)(uint)(((int)puVar14 +
                                       (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3))
                                      - iVar16);
                goto LAB_00164d6c;
              }
              puVar19 = puVar19 + 1;
            }
            if ((puVar14 < (ulong *)((long)param_2 + ((ulong)param_4 - 8))) &&
               ((int)*puVar19 == (int)*puVar14)) {
              puVar14 = (ulong *)((long)puVar14 + 4);
              puVar19 = (ulong *)((long)puVar19 + 4);
            }
            if ((puVar14 < (ulong *)((long)param_2 + ((ulong)param_4 - 6))) &&
               ((short)*puVar19 == (short)*puVar14)) {
              puVar14 = (ulong *)((long)puVar14 + 2);
              puVar19 = (ulong *)((long)puVar19 + 2);
            }
            puVar15 = puVar14;
            if ((puVar14 < (ulong *)((long)param_2 + ((ulong)param_4 - 5))) &&
               (puVar15 = (ulong *)((long)puVar14 + 1), (char)*puVar19 != (char)*puVar14)) {
              puVar15 = puVar14;
            }
            uVar24 = (ulong)(uint)((int)puVar15 - iVar16);
          }
LAB_00164d6c:
          if (pcVar1 < (char *)((long)plVar8 + (uVar24 >> 8) + 8)) {
            return 0;
          }
          uVar13 = (uint)uVar24;
          uVar9 = uVar13 - 0xf;
          plVar28 = (long *)((long)plVar17 + uVar24 + 4);
          if (uVar13 < 0xf) {
            *(char *)param_3 = (char)*param_3 + (char)uVar24;
            param_3 = psVar7;
          }
          else {
            *(char *)param_3 = (char)*param_3 + '\x0f';
            psVar7[0] = -1;
            psVar7[1] = -1;
            if (0x3fb < uVar9) {
              uVar9 = ((uVar13 - 0x40b) / 0x3fc) * 4;
              memset((short *)((long)plVar8 + 6),0xff,(ulong)(uVar9 + 4));
              psVar7 = (short *)((long)plVar8 + 6 + (ulong)uVar9);
              uVar9 = (uVar13 - 0x40b) % 0x3fc;
            }
            pcVar3 = (char *)((long)psVar7 + (ulong)(uVar9 & 0xffff) / 0xff);
            param_3 = (short *)(pcVar3 + 1);
            *pcVar3 = (char)uVar9 + (char)((uVar9 & 0xffff) / 0xff);
          }
          if (plVar21 <= plVar28) goto LAB_00164eb4;
          plVar22 = (long *)((long)plVar17 + uVar24 + 2);
          uVar13 = (int)plVar28 - iVar27;
          *(int *)((long)param_1 + ((ulong)(*plVar22 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
               (int)plVar22 - iVar27;
          uVar10 = (ulong)(*plVar28 * -0x30e4432345000000) >> 0x32 & 0x3ffc;
          uVar9 = *(uint *)((long)param_1 + uVar10);
          *(uint *)((long)param_1 + uVar10) = uVar13;
          if ((uVar9 + 0xffff < uVar13) ||
             (plVar12 = (long *)(lVar29 + (ulong)uVar9), (int)*plVar12 != (int)*plVar28))
          goto LAB_00164ae4;
          plVar8 = (long *)((long)param_3 + 1);
          *(char *)param_3 = '\0';
          plVar17 = plVar28;
        } while( true );
      }
    }
  }
  else if ((int)param_4 < 0x1000b) {
    if (param_4 < 0x7e000001) {
      *(uint *)((long)param_1 + 0x4018) = iVar20 + param_4;
      *puVar2 = uVar9 + param_4;
      *(undefined2 *)((long)param_1 + 0x4006) = 3;
      if (0xc < (int)param_4) {
        plVar22 = (long *)((long)param_2 + (long)(int)param_4 + -0xb);
        puVar23 = (ulong *)((long)param_2 + (long)(int)param_4 + -0xc);
        *(short *)((long)param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) =
             (short)uVar9;
LAB_0016539c:
        iVar27 = *(int *)((long)plVar28 + 1U);
        iVar20 = 1;
        plVar17 = (long *)((long)plVar28 + 1U);
        iVar16 = param_6 << 6;
        do {
          plVar21 = (long *)((long)plVar17 + (long)iVar20);
          if (plVar22 < plVar21) goto LAB_001656f8;
          lVar18 = (ulong)((uint)(iVar27 * -0x61c8864f) >> 0x13) * 2;
          uVar4 = *(ushort *)((long)param_1 + lVar18);
          iVar27 = (int)*plVar21;
          *(short *)((long)param_1 + lVar18) = (short)plVar17 - sVar5;
          plVar8 = (long *)(lVar29 + (ulong)uVar4);
          lVar18 = *plVar17;
          iVar20 = iVar16 >> 6;
          iVar16 = iVar16 + 1;
          plVar12 = plVar17;
          plVar17 = plVar21;
        } while ((int)*plVar8 != (int)lVar18);
        do {
          plVar17 = plVar8;
          plVar21 = plVar12;
          if ((plVar17 <= param_2) || (plVar21 <= plVar28)) break;
          plVar12 = (long *)((long)plVar21 + -1);
          plVar8 = (long *)((long)plVar17 + -1);
        } while (*(char *)((long)plVar21 + -1) == *(char *)((long)plVar17 + -1));
        uVar9 = (uint)((long)plVar21 - (long)plVar28);
        iVar16 = uVar9 - 0xf;
        plVar8 = (long *)((long)param_3 + 1);
        if (uVar9 < 0xf) {
          *(char *)param_3 = (char)(uVar9 << 4);
        }
        else {
          *(char *)param_3 = -0x10;
          if (0xfe < iVar16) {
            if (0x1fc < iVar16) {
              iVar16 = 0x1fd;
            }
            iVar20 = (int)plVar21 + 0xef;
            iVar27 = (int)plVar28;
            memset(plVar8,0xff,(ulong)((uint)(iVar20 - (iVar16 + iVar27)) / 0xff + 1));
            uVar9 = (iVar20 - iVar16) - iVar27;
            plVar8 = (long *)((long)param_3 + (ulong)uVar9 / 0xff + 2);
            iVar16 = ((int)plVar21 - iVar27) + uVar9 / 0xff + -0x10e;
          }
          *(char *)plVar8 = (char)iVar16;
          plVar8 = (long *)((long)plVar8 + 1);
        }
        plVar12 = (long *)((long)plVar8 + ((long)plVar21 - (long)plVar28 & 0xffffffffU));
        do {
          plVar6 = plVar8 + 1;
          *plVar8 = *plVar28;
          plVar8 = plVar6;
          plVar28 = plVar28 + 1;
        } while (plVar6 < plVar12);
        do {
          puVar14 = (ulong *)((long)plVar21 + 4);
          psVar7 = (short *)((long)plVar12 + 2);
          *(short *)plVar12 = (short)plVar21 - (short)plVar17;
          puVar19 = (ulong *)((long)plVar17 + 4);
          iVar16 = (int)puVar14;
          if (puVar14 < puVar23) {
            uVar24 = *puVar14 ^ *puVar19;
            if (uVar24 == 0) {
              puVar14 = (ulong *)((long)plVar21 + 0xc);
              puVar19 = (ulong *)((long)plVar17 + 0xc);
              goto joined_r0x001656cc;
            }
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
          }
          else {
joined_r0x001656cc:
            for (; puVar14 < puVar23; puVar14 = puVar14 + 1) {
              uVar24 = *puVar14 ^ *puVar19;
              if (uVar24 != 0) {
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar24 = (ulong)(uint)(((int)puVar14 +
                                       (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3))
                                      - iVar16);
                goto LAB_0016563c;
              }
              puVar19 = puVar19 + 1;
            }
            if ((puVar14 < (ulong *)((long)param_2 + (long)(int)param_4 + -8)) &&
               ((int)*puVar19 == (int)*puVar14)) {
              puVar14 = (ulong *)((long)puVar14 + 4);
              puVar19 = (ulong *)((long)puVar19 + 4);
            }
            if ((puVar14 < (ulong *)((long)param_2 + (long)(int)param_4 + -6)) &&
               ((short)*puVar19 == (short)*puVar14)) {
              puVar14 = (ulong *)((long)puVar14 + 2);
              puVar19 = (ulong *)((long)puVar19 + 2);
            }
            puVar15 = puVar14;
            if ((puVar14 < (ulong *)((long)param_2 + (long)(int)param_4 + -5)) &&
               (puVar15 = (ulong *)((long)puVar14 + 1), (char)*puVar19 != (char)*puVar14)) {
              puVar15 = puVar14;
            }
            uVar24 = (ulong)(uint)((int)puVar15 - iVar16);
          }
LAB_0016563c:
          uVar13 = (uint)uVar24;
          uVar9 = uVar13 - 0xf;
          plVar28 = (long *)((long)plVar21 + uVar24 + 4);
          if (uVar13 < 0xf) {
            *(char *)param_3 = (char)*param_3 + (char)uVar24;
            param_3 = psVar7;
          }
          else {
            *(char *)param_3 = (char)*param_3 + '\x0f';
            psVar7[0] = -1;
            psVar7[1] = -1;
            if (0x3fb < uVar9) {
              uVar9 = ((uVar13 - 0x40b) / 0x3fc) * 4;
              memset((short *)((long)plVar12 + 6),0xff,(ulong)(uVar9 + 4));
              psVar7 = (short *)((long)plVar12 + 6 + (ulong)uVar9);
              uVar9 = (uVar13 - 0x40b) % 0x3fc;
            }
            pcVar1 = (char *)((long)psVar7 + (ulong)(uVar9 & 0xffff) / 0xff);
            *pcVar1 = (char)uVar9 + (char)((uVar9 & 0xffff) / 0xff);
            param_3 = (short *)(pcVar1 + 1);
          }
          if (plVar22 <= plVar28) break;
          piVar11 = (int *)((long)plVar21 + uVar24 + 2);
          *(short *)((long)param_1 + (ulong)((uint)(*piVar11 * -0x61c8864f) >> 0x13) * 2) =
               (short)piVar11 - sVar5;
          lVar18 = (ulong)((uint)((int)*plVar28 * -0x61c8864f) >> 0x13) * 2;
          uVar4 = *(ushort *)((long)param_1 + lVar18);
          *(short *)((long)param_1 + lVar18) = (short)plVar28 - sVar5;
          plVar17 = (long *)(lVar29 + (ulong)uVar4);
          if ((int)*plVar17 != (int)*plVar28) goto LAB_0016539c;
          plVar12 = (long *)((long)param_3 + 1);
          *(char *)param_3 = '\0';
          plVar21 = plVar28;
        } while( true );
      }
LAB_001656f8:
      uVar24 = (long)param_2 + ((long)(int)param_4 - (long)plVar28);
LAB_00165740:
      uVar10 = uVar24 - 0xf;
      if (uVar24 < 0xf) {
        *(char *)param_3 = (char)((int)uVar24 << 4);
      }
      else {
        psVar7 = (short *)((long)param_3 + 1);
        *(char *)param_3 = -0x10;
        if (0xfe < uVar10) {
          uVar25 = (uVar24 - 0x10e) / 0xff;
          memset(psVar7,0xff,uVar25 + 1);
          uVar10 = (uVar24 - 0x10e) % 0xff;
          psVar7 = (short *)((long)param_3 + uVar25 + 2);
        }
        *(char *)psVar7 = (char)uVar10;
        param_3 = psVar7;
      }
      memcpy((char *)((long)param_3 + 1),plVar28,uVar24);
      return ((int)(char *)((long)param_3 + 1) + (int)uVar24) - iVar30;
    }
  }
  else if (param_4 < 0x7e000001) {
    *(uint *)((long)param_1 + 0x4018) = iVar20 + param_4;
    *puVar2 = uVar9 + param_4;
    *(undefined2 *)((long)param_1 + 0x4006) = 2;
    plVar17 = (long *)((long)param_2 + 2);
    plVar21 = (long *)((long)param_2 + ((ulong)param_4 - 0xb));
    plVar22 = (long *)((long)param_2 + 1);
    uVar13 = uVar9 + 1;
    puVar23 = (ulong *)((long)param_2 + ((ulong)param_4 - 0xc));
    *(uint *)((long)param_1 + ((ulong)(*param_2 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) = uVar9;
LAB_0016476c:
    lVar18 = *plVar22;
    iVar16 = param_6 << 6;
    while( true ) {
      uVar24 = (ulong)(lVar18 * -0x30e4432345000000) >> 0x32 & 0x3ffc;
      uVar9 = *(uint *)((long)param_1 + uVar24);
      lVar18 = *plVar17;
      *(uint *)((long)param_1 + uVar24) = uVar13;
      if ((uVar13 <= uVar9 + 0xffff) &&
         (plVar8 = (long *)(lVar29 + (ulong)uVar9), (int)*plVar8 == (int)*plVar22)) break;
      plVar8 = (long *)((long)plVar17 + (long)(iVar16 >> 6));
      uVar13 = (int)plVar17 - iVar27;
      iVar16 = iVar16 + 1;
      plVar22 = plVar17;
      plVar17 = plVar8;
      if (plVar21 < plVar8) goto LAB_00164ea8;
    }
    do {
      plVar17 = plVar22;
      plVar12 = plVar8;
      if ((plVar12 <= param_2) || (plVar17 <= plVar28)) break;
      plVar8 = (long *)((long)plVar12 + -1);
      plVar22 = (long *)((long)plVar17 + -1);
    } while (*(char *)((long)plVar17 + -1) == *(char *)((long)plVar12 + -1));
    uVar9 = (uint)((long)plVar17 - (long)plVar28);
    iVar16 = uVar9 - 0xf;
    plVar22 = (long *)((long)param_3 + 1);
    if (uVar9 < 0xf) {
      *(char *)param_3 = (char)(uVar9 << 4);
    }
    else {
      *(char *)param_3 = -0x10;
      if (0xfe < iVar16) {
        if (0x1fc < iVar16) {
          iVar16 = 0x1fd;
        }
        iVar20 = (int)plVar17 + 0xef;
        iVar26 = (int)plVar28;
        memset(plVar22,0xff,(ulong)((uint)(iVar20 - (iVar16 + iVar26)) / 0xff + 1));
        uVar9 = (iVar20 - iVar16) - iVar26;
        plVar22 = (long *)((long)param_3 + (ulong)uVar9 / 0xff + 2);
        iVar16 = ((int)plVar17 - iVar26) + uVar9 / 0xff + -0x10e;
      }
      *(char *)plVar22 = (char)iVar16;
      plVar22 = (long *)((long)plVar22 + 1);
    }
    plVar8 = (long *)((long)plVar22 + ((long)plVar17 - (long)plVar28 & 0xffffffffU));
    do {
      plVar6 = plVar22 + 1;
      *plVar22 = *plVar28;
      plVar22 = plVar6;
      plVar28 = plVar28 + 1;
    } while (plVar6 < plVar8);
    do {
      puVar14 = (ulong *)((long)plVar17 + 4);
      psVar7 = (short *)((long)plVar8 + 2);
      *(short *)plVar8 = (short)plVar17 - (short)plVar12;
      puVar19 = (ulong *)((long)plVar12 + 4);
      iVar16 = (int)puVar14;
      if (puVar14 < puVar23) {
        uVar24 = *puVar14 ^ *puVar19;
        if (uVar24 == 0) {
          puVar14 = (ulong *)((long)plVar17 + 0xc);
          puVar19 = (ulong *)((long)plVar12 + 0xc);
          goto joined_r0x00164adc;
        }
        uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
      }
      else {
joined_r0x00164adc:
        for (; puVar14 < puVar23; puVar14 = puVar14 + 1) {
          uVar24 = *puVar14 ^ *puVar19;
          if (uVar24 != 0) {
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = (ulong)(uint)(((int)puVar14 +
                                   (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3)) -
                                  iVar16);
            goto LAB_001649c0;
          }
          puVar19 = puVar19 + 1;
        }
        if ((puVar14 < (ulong *)((long)param_2 + ((ulong)param_4 - 8))) &&
           ((int)*puVar19 == (int)*puVar14)) {
          puVar14 = (ulong *)((long)puVar14 + 4);
          puVar19 = (ulong *)((long)puVar19 + 4);
        }
        if ((puVar14 < (ulong *)((long)param_2 + ((ulong)param_4 - 6))) &&
           ((short)*puVar19 == (short)*puVar14)) {
          puVar14 = (ulong *)((long)puVar14 + 2);
          puVar19 = (ulong *)((long)puVar19 + 2);
        }
        puVar15 = puVar14;
        if ((puVar14 < (ulong *)((long)param_2 + ((ulong)param_4 - 5))) &&
           (puVar15 = (ulong *)((long)puVar14 + 1), (char)*puVar19 != (char)*puVar14)) {
          puVar15 = puVar14;
        }
        uVar24 = (ulong)(uint)((int)puVar15 - iVar16);
      }
LAB_001649c0:
      uVar13 = (uint)uVar24;
      uVar9 = uVar13 - 0xf;
      plVar28 = (long *)((long)plVar17 + uVar24 + 4);
      if (uVar13 < 0xf) {
        *(char *)param_3 = (char)*param_3 + (char)uVar24;
        param_3 = psVar7;
      }
      else {
        *(char *)param_3 = (char)*param_3 + '\x0f';
        psVar7[0] = -1;
        psVar7[1] = -1;
        if (0x3fb < uVar9) {
          uVar9 = ((uVar13 - 0x40b) / 0x3fc) * 4;
          memset((short *)((long)plVar8 + 6),0xff,(ulong)(uVar9 + 4));
          psVar7 = (short *)((long)plVar8 + 6 + (ulong)uVar9);
          uVar9 = (uVar13 - 0x40b) % 0x3fc;
        }
        pcVar1 = (char *)((long)psVar7 + (ulong)(uVar9 & 0xffff) / 0xff);
        param_3 = (short *)(pcVar1 + 1);
        *pcVar1 = (char)uVar9 + (char)((uVar9 & 0xffff) / 0xff);
      }
      if (plVar21 <= plVar28) goto LAB_00164ea8;
      plVar22 = (long *)((long)plVar17 + uVar24 + 2);
      uVar13 = (int)plVar28 - iVar27;
      *(int *)((long)param_1 + ((ulong)(*plVar22 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
           (int)plVar22 - iVar27;
      uVar10 = (ulong)(*plVar28 * -0x30e4432345000000) >> 0x32 & 0x3ffc;
      uVar9 = *(uint *)((long)param_1 + uVar10);
      *(uint *)((long)param_1 + uVar10) = uVar13;
      if ((uVar9 + 0xffff < uVar13) ||
         (plVar12 = (long *)(lVar29 + (ulong)uVar9), (int)*plVar12 != (int)*plVar28))
      goto LAB_00164758;
      plVar8 = (long *)((long)param_3 + 1);
      *(char *)param_3 = '\0';
      plVar17 = plVar28;
    } while( true );
  }
  return 0;
LAB_00164758:
  plVar22 = (long *)((long)plVar17 + uVar24 + 5);
  plVar17 = (long *)((long)plVar17 + uVar24 + 6);
  uVar13 = (int)plVar22 - iVar27;
  if (plVar21 < plVar17) goto LAB_00164ea8;
  goto LAB_0016476c;
LAB_00164ea8:
  uVar24 = (long)param_2 + ((ulong)param_4 - (long)plVar28);
  goto LAB_00164ee0;
LAB_00164ae4:
  plVar22 = (long *)((long)plVar17 + uVar24 + 5);
  plVar17 = (long *)((long)plVar17 + uVar24 + 6);
  uVar13 = (int)plVar22 - iVar27;
  if (plVar21 < plVar17) goto LAB_00164eb4;
  goto LAB_00164af8;
LAB_00164eb4:
  uVar24 = (long)param_2 + ((ulong)param_4 - (long)plVar28);
  if (pcVar1 < (char *)((long)param_3 + (uVar24 + 0xf0) / 0xff + uVar24 + 1)) {
    return 0;
  }
LAB_00164ee0:
  uVar10 = uVar24 - 0xf;
  if (uVar24 < 0xf) {
    *(char *)param_3 = (char)((int)uVar24 << 4);
  }
  else {
    psVar7 = (short *)((long)param_3 + 1);
    *(char *)param_3 = -0x10;
    if (0xfe < uVar10) {
      uVar25 = (uVar24 - 0x10e) / 0xff;
      memset(psVar7,0xff,uVar25 + 1);
      uVar10 = (uVar24 - 0x10e) % 0xff;
      psVar7 = (short *)((long)param_3 + uVar25 + 2);
    }
    *(char *)psVar7 = (char)uVar10;
    param_3 = psVar7;
  }
  memcpy((char *)((long)param_3 + 1),plVar28,uVar24);
  return ((int)(char *)((long)param_3 + 1) + (int)uVar24) - iVar30;
}


// ===== 001657dc  LZ4_initStream =====

void * LZ4_initStream(void *param_1,ulong param_2)

{
  if (((param_1 != (void *)0x0) && (0x200 < param_2 >> 5)) && (((ulong)param_1 & 7) == 0)) {
    memset(param_1,0,0x4020);
    return param_1;
  }
  return (void *)0x0;
}


// ===== 00165838  LZ4_compress_fast_extState_fastReset =====

int LZ4_compress_fast_extState_fastReset
              (void *param_1,long *param_2,short *param_3,uint param_4,int param_5,int param_6)

{
  uint *puVar1;
  char *pcVar2;
  ushort uVar3;
  short *psVar4;
  long *plVar5;
  char *pcVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  long *plVar28;
  int iVar29;
  long *plVar30;
  ulong *puVar31;
  long lVar32;
  long lVar33;
  
  if (param_6 < 2) {
    param_6 = 1;
  }
  puVar1 = (uint *)((long)param_1 + 0x4000);
  iVar29 = (int)param_3;
  plVar28 = param_2;
  if (param_4 < 0x7e000001) {
    sVar7 = *(short *)((long)param_1 + 0x4004);
    if ((int)((uint)((ulong)param_4 * 0x8080808081 >> 0x27) + 0x10) <= param_5) goto LAB_00165894;
  }
  else {
    sVar7 = *(short *)((long)param_1 + 0x4004);
    if (-1 < param_5) {
LAB_00165894:
      if (0x1000a < (int)param_4) {
        if (sVar7 == 0) {
          if (*(short *)((long)param_1 + 0x4006) == 0) {
            if (*puVar1 == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = *puVar1 + 0x10000;
              *puVar1 = uVar14;
            }
          }
          else {
            memset(param_1,0,0x4000);
            uVar14 = 0;
            *puVar1 = 0;
            *(undefined2 *)((long)param_1 + 0x4006) = 0;
          }
          *(undefined4 *)((long)param_1 + 0x4018) = 0;
          *(undefined8 *)((long)param_1 + 0x4010) = 0;
          *(undefined8 *)((long)param_1 + 0x4008) = 0;
        }
        else {
          memset(param_1,0,0x4020);
          uVar14 = *puVar1;
        }
        if (0x7e000000 < param_4) {
          return 0;
        }
        lVar33 = (long)param_2 + (ulong)param_4;
        *puVar1 = uVar14 + param_4;
        *(undefined2 *)((long)param_1 + 0x4006) = 2;
        *(uint *)((long)param_1 + 0x4018) = *(int *)((long)param_1 + 0x4018) + param_4;
        plVar17 = (long *)((long)param_2 + 2);
        plVar15 = (long *)(lVar33 + -0xb);
        lVar32 = (long)param_2 - (ulong)uVar14;
        plVar30 = (long *)((long)param_2 + 1);
        uVar13 = uVar14 + 1;
        *(uint *)((long)param_1 + ((ulong)(*param_2 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
             uVar14;
LAB_00166d44:
        lVar23 = *plVar30;
        iVar8 = param_6 << 6;
        while( true ) {
          uVar24 = (ulong)(lVar23 * -0x30e4432345000000) >> 0x32 & 0x3ffc;
          uVar14 = *(uint *)((long)param_1 + uVar24);
          lVar23 = *plVar17;
          *(uint *)((long)param_1 + uVar24) = uVar13;
          iVar9 = (int)lVar32;
          if ((uVar13 <= uVar14 + 0xffff) &&
             (plVar11 = (long *)(lVar32 + (ulong)uVar14), (int)*plVar11 == (int)*plVar30)) break;
          plVar11 = (long *)((long)plVar17 + (long)(iVar8 >> 6));
          uVar13 = (int)plVar17 - iVar9;
          iVar8 = iVar8 + 1;
          plVar30 = plVar17;
          plVar17 = plVar11;
          if (plVar15 < plVar11) goto LAB_001670a8;
        }
        do {
          plVar16 = plVar11;
          plVar17 = plVar30;
          if ((plVar16 <= param_2) || (plVar17 <= plVar28)) break;
          plVar30 = (long *)((long)plVar17 + -1);
          plVar11 = (long *)((long)plVar16 + -1);
        } while (*(char *)((long)plVar17 + -1) == *(char *)((long)plVar16 + -1));
        uVar14 = (uint)((long)plVar17 - (long)plVar28);
        iVar8 = uVar14 - 0xf;
        plVar30 = (long *)((long)param_3 + 1);
        if (uVar14 < 0xf) {
          *(char *)param_3 = (char)(uVar14 << 4);
        }
        else {
          *(char *)param_3 = -0x10;
          if (0xfe < iVar8) {
            if (0x1fc < iVar8) {
              iVar8 = 0x1fd;
            }
            iVar27 = (int)plVar17 + 0xef;
            iVar26 = (int)plVar28;
            memset(plVar30,0xff,(ulong)((uint)(iVar27 - (iVar8 + iVar26)) / 0xff + 1));
            uVar14 = (iVar27 - iVar8) - iVar26;
            plVar30 = (long *)((long)param_3 + (ulong)uVar14 / 0xff + 2);
            iVar8 = ((int)plVar17 - iVar26) + uVar14 / 0xff + -0x10e;
          }
          *(char *)plVar30 = (char)iVar8;
          plVar30 = (long *)((long)plVar30 + 1);
        }
        plVar11 = (long *)((long)plVar30 + ((long)plVar17 - (long)plVar28 & 0xffffffffU));
        do {
          plVar5 = plVar30 + 1;
          *plVar30 = *plVar28;
          plVar30 = plVar5;
          plVar28 = plVar28 + 1;
        } while (plVar5 < plVar11);
        do {
          puVar22 = (ulong *)((long)plVar17 + 4);
          psVar4 = (short *)((long)plVar11 + 2);
          *(short *)plVar11 = (short)plVar17 - (short)plVar16;
          puVar31 = (ulong *)((long)plVar16 + 4);
          iVar8 = (int)puVar22;
          if (puVar22 < (ulong *)(lVar33 + -0xc)) {
            uVar24 = *puVar22 ^ *puVar31;
            if (uVar24 == 0) {
              puVar22 = (ulong *)((long)plVar17 + 0xc);
              puVar31 = (ulong *)((long)plVar16 + 0xc);
              goto joined_r0x0016709c;
            }
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
          }
          else {
joined_r0x0016709c:
            for (; puVar22 < (ulong *)(lVar33 + -0xc); puVar22 = puVar22 + 1) {
              uVar24 = *puVar22 ^ *puVar31;
              if (uVar24 != 0) {
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar24 = (ulong)(uint)(((int)puVar22 +
                                       (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3))
                                      - iVar8);
                goto LAB_00166f94;
              }
              puVar31 = puVar31 + 1;
            }
            if ((puVar22 < (ulong *)(lVar33 + -8)) && ((int)*puVar31 == (int)*puVar22)) {
              puVar22 = (ulong *)((long)puVar22 + 4);
              puVar31 = (ulong *)((long)puVar31 + 4);
            }
            if ((puVar22 < (ulong *)(lVar33 + -6)) && ((short)*puVar31 == (short)*puVar22)) {
              puVar22 = (ulong *)((long)puVar22 + 2);
              puVar31 = (ulong *)((long)puVar31 + 2);
            }
            puVar19 = puVar22;
            if ((puVar22 < (ulong *)(lVar33 + -5)) &&
               (puVar19 = (ulong *)((long)puVar22 + 1), (char)*puVar31 != (char)*puVar22)) {
              puVar19 = puVar22;
            }
            uVar24 = (ulong)(uint)((int)puVar19 - iVar8);
          }
LAB_00166f94:
          uVar13 = (uint)uVar24;
          uVar14 = uVar13 - 0xf;
          plVar28 = (long *)((long)plVar17 + uVar24 + 4);
          if (uVar13 < 0xf) {
            *(char *)param_3 = (char)*param_3 + (char)uVar24;
            param_3 = psVar4;
          }
          else {
            *(char *)param_3 = (char)*param_3 + '\x0f';
            psVar4[0] = -1;
            psVar4[1] = -1;
            if (0x3fb < uVar14) {
              uVar14 = ((uVar13 - 0x40b) / 0x3fc) * 4;
              memset((short *)((long)plVar11 + 6),0xff,(ulong)(uVar14 + 4));
              psVar4 = (short *)((long)plVar11 + 6 + (ulong)uVar14);
              uVar14 = (uVar13 - 0x40b) % 0x3fc;
            }
            pcVar6 = (char *)((long)psVar4 + (ulong)(uVar14 & 0xffff) / 0xff);
            param_3 = (short *)(pcVar6 + 1);
            *pcVar6 = (char)uVar14 + (char)((uVar14 & 0xffff) / 0xff);
          }
          if (plVar15 <= plVar28) goto LAB_001670a8;
          plVar30 = (long *)((long)plVar17 + uVar24 + 2);
          uVar13 = (int)plVar28 - iVar9;
          *(int *)((long)param_1 + ((ulong)(*plVar30 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
               (int)plVar30 - iVar9;
          uVar12 = (ulong)(*plVar28 * -0x30e4432345000000) >> 0x32 & 0x3ffc;
          uVar14 = *(uint *)((long)param_1 + uVar12);
          *(uint *)((long)param_1 + uVar12) = uVar13;
          if ((uVar14 + 0xffff < uVar13) ||
             (plVar16 = (long *)(lVar32 + (ulong)uVar14), (int)*plVar16 != (int)*plVar28))
          goto LAB_00166d2c;
          plVar11 = (long *)((long)param_3 + 1);
          *(char *)param_3 = '\0';
          plVar17 = plVar28;
        } while( true );
      }
      if (sVar7 == 0) {
        if ((*(short *)((long)param_1 + 0x4006) != 0) &&
           (((*(short *)((long)param_1 + 0x4006) != 3 || (0xfff < (int)param_4)) ||
            (0xfffe < *puVar1 + param_4)))) {
          memset(param_1,0,0x4000);
          *puVar1 = 0;
          *(undefined2 *)((long)param_1 + 0x4006) = 0;
        }
        iVar8 = 0;
        *(undefined4 *)((long)param_1 + 0x4018) = 0;
        *(undefined8 *)((long)param_1 + 0x4010) = 0;
        *(undefined8 *)((long)param_1 + 0x4008) = 0;
      }
      else {
        memset(param_1,0,0x4020);
        iVar8 = *(int *)((long)param_1 + 0x4018);
      }
      uVar14 = *puVar1;
      lVar33 = (long)param_2 + (long)(int)param_4;
      lVar32 = (long)param_2 - (ulong)uVar14;
      plVar30 = (long *)(lVar33 + -0xb);
      sVar7 = (short)lVar32;
      if (uVar14 == 0) {
        if (0x7e000000 < param_4) {
          return 0;
        }
        *puVar1 = param_4;
        *(uint *)((long)param_1 + 0x4018) = iVar8 + param_4;
        *(undefined2 *)((long)param_1 + 0x4006) = 3;
        if (0xc < (int)param_4) {
          *(undefined2 *)((long)param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2)
               = 0;
LAB_0016643c:
          iVar27 = *(int *)((long)plVar28 + 1U);
          iVar9 = 1;
          plVar17 = (long *)((long)plVar28 + 1U);
          iVar8 = param_6 << 6;
          do {
            plVar15 = (long *)((long)plVar17 + (long)iVar9);
            if (plVar30 < plVar15) goto LAB_00166b5c;
            lVar23 = (ulong)((uint)(iVar27 * -0x61c8864f) >> 0x13) * 2;
            uVar3 = *(ushort *)((long)param_1 + lVar23);
            iVar27 = (int)*plVar15;
            *(short *)((long)param_1 + lVar23) = (short)plVar17 - sVar7;
            plVar11 = (long *)(lVar32 + (ulong)uVar3);
            lVar23 = *plVar17;
            iVar9 = iVar8 >> 6;
            iVar8 = iVar8 + 1;
            plVar16 = plVar17;
            plVar17 = plVar15;
          } while ((int)*plVar11 != (int)lVar23);
          do {
            plVar17 = plVar11;
            plVar15 = plVar16;
            if ((plVar17 <= param_2) || (plVar15 <= plVar28)) break;
            plVar16 = (long *)((long)plVar15 + -1);
            plVar11 = (long *)((long)plVar17 + -1);
          } while (*(char *)((long)plVar15 + -1) == *(char *)((long)plVar17 + -1));
          uVar14 = (uint)((long)plVar15 - (long)plVar28);
          iVar8 = uVar14 - 0xf;
          plVar11 = (long *)((long)param_3 + 1);
          if (uVar14 < 0xf) {
            *(char *)param_3 = (char)(uVar14 << 4);
          }
          else {
            *(char *)param_3 = -0x10;
            if (0xfe < iVar8) {
              if (0x1fc < iVar8) {
                iVar8 = 0x1fd;
              }
              iVar9 = (int)plVar15 + 0xef;
              iVar27 = (int)plVar28;
              memset(plVar11,0xff,(ulong)((uint)(iVar9 - (iVar8 + iVar27)) / 0xff + 1));
              uVar14 = (iVar9 - iVar8) - iVar27;
              plVar11 = (long *)((long)param_3 + (ulong)uVar14 / 0xff + 2);
              iVar8 = ((int)plVar15 - iVar27) + uVar14 / 0xff + -0x10e;
            }
            *(char *)plVar11 = (char)iVar8;
            plVar11 = (long *)((long)plVar11 + 1);
          }
          plVar16 = (long *)((long)plVar11 + ((long)plVar15 - (long)plVar28 & 0xffffffffU));
          do {
            plVar5 = plVar11 + 1;
            *plVar11 = *plVar28;
            plVar11 = plVar5;
            plVar28 = plVar28 + 1;
            psVar4 = param_3;
          } while (plVar5 < plVar16);
          do {
            puVar22 = (ulong *)((long)plVar15 + 4);
            param_3 = (short *)((long)plVar16 + 2);
            *(short *)plVar16 = (short)plVar15 - (short)plVar17;
            puVar31 = (ulong *)((long)plVar17 + 4);
            iVar8 = (int)puVar22;
            if (puVar22 < (ulong *)(lVar33 + -0xc)) {
              uVar24 = *puVar22 ^ *puVar31;
              if (uVar24 == 0) {
                puVar22 = (ulong *)((long)plVar15 + 0xc);
                puVar31 = (ulong *)((long)plVar17 + 0xc);
                goto joined_r0x00166768;
              }
              uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
              uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
            }
            else {
joined_r0x00166768:
              for (; puVar22 < (ulong *)(lVar33 + -0xc); puVar22 = puVar22 + 1) {
                uVar24 = *puVar22 ^ *puVar31;
                if (uVar24 != 0) {
                  uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                  uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                  uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                  uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10
                  ;
                  uVar24 = (ulong)(uint)(((int)puVar22 +
                                         (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3)
                                         ) - iVar8);
                  goto LAB_00166684;
                }
                puVar31 = puVar31 + 1;
              }
              if ((puVar22 < (ulong *)(lVar33 + -8)) && ((int)*puVar31 == (int)*puVar22)) {
                puVar22 = (ulong *)((long)puVar22 + 4);
                puVar31 = (ulong *)((long)puVar31 + 4);
              }
              if ((puVar22 < (ulong *)(lVar33 + -6)) && ((short)*puVar31 == (short)*puVar22)) {
                puVar22 = (ulong *)((long)puVar22 + 2);
                puVar31 = (ulong *)((long)puVar31 + 2);
              }
              puVar19 = puVar22;
              if ((puVar22 < (ulong *)(lVar33 + -5)) &&
                 (puVar19 = (ulong *)((long)puVar22 + 1), (char)*puVar31 != (char)*puVar22)) {
                puVar19 = puVar22;
              }
              uVar24 = (ulong)(uint)((int)puVar19 - iVar8);
            }
LAB_00166684:
            uVar13 = (uint)uVar24;
            uVar14 = uVar13 - 0xf;
            plVar28 = (long *)((long)plVar15 + uVar24 + 4);
            if (uVar13 < 0xf) {
              *(char *)psVar4 = (char)*psVar4 + (char)uVar24;
            }
            else {
              *(char *)psVar4 = (char)*psVar4 + '\x0f';
              param_3[0] = -1;
              param_3[1] = -1;
              if (0x3fb < uVar14) {
                uVar14 = ((uVar13 - 0x40b) / 0x3fc) * 4;
                memset((short *)((long)plVar16 + 6),0xff,(ulong)(uVar14 + 4));
                param_3 = (short *)((long)plVar16 + 6 + (ulong)uVar14);
                uVar14 = (uVar13 - 0x40b) % 0x3fc;
              }
              pcVar6 = (char *)((long)param_3 + (ulong)(uVar14 & 0xffff) / 0xff);
              param_3 = (short *)(pcVar6 + 1);
              *pcVar6 = (char)uVar14 + (char)((uVar14 & 0xffff) / 0xff);
            }
            if (plVar30 <= plVar28) goto LAB_00166b5c;
            piVar10 = (int *)((long)plVar15 + uVar24 + 2);
            *(short *)((long)param_1 + (ulong)((uint)(*piVar10 * -0x61c8864f) >> 0x13) * 2) =
                 (short)piVar10 - sVar7;
            lVar23 = (ulong)((uint)((int)*plVar28 * -0x61c8864f) >> 0x13) * 2;
            uVar3 = *(ushort *)((long)param_1 + lVar23);
            *(short *)((long)param_1 + lVar23) = (short)plVar28 - sVar7;
            plVar17 = (long *)(lVar32 + (ulong)uVar3);
            if ((int)*plVar17 != (int)*plVar28) goto LAB_0016643c;
            plVar16 = (long *)((long)param_3 + 1);
            *(char *)param_3 = '\0';
            plVar15 = plVar28;
            psVar4 = param_3;
          } while( true );
        }
        lVar32 = -(long)param_2;
joined_r0x00166b68:
        uVar24 = lVar33 + lVar32;
        if (uVar24 < 0xf) {
          *(char *)param_3 = (char)((int)uVar24 << 4);
          psVar4 = param_3;
        }
        else {
          uVar12 = uVar24 - 0xf;
          psVar4 = (short *)((long)param_3 + 1);
          *(char *)param_3 = -0x10;
          if (0xfe < uVar12) {
            uVar25 = (uVar24 - 0x10e) / 0xff;
            memset(psVar4,0xff,uVar25 + 1);
            uVar12 = (uVar24 - 0x10e) % 0xff;
            psVar4 = (short *)((long)param_3 + uVar25 + 2);
          }
          *(char *)psVar4 = (char)uVar12;
        }
        memcpy((char *)((long)psVar4 + 1),param_2,uVar24);
        return ((int)(char *)((long)psVar4 + 1) + (int)uVar24) - iVar29;
      }
      if (0x7e000000 < param_4) {
        return 0;
      }
      *(uint *)((long)param_1 + 0x4018) = iVar8 + param_4;
      *puVar1 = uVar14 + param_4;
      *(undefined2 *)((long)param_1 + 0x4006) = 3;
      if (0xc < (int)param_4) {
        plVar15 = (long *)((long)param_2 + 2);
        plVar17 = (long *)((long)param_2 + 1);
        *(short *)((long)param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) =
             (short)uVar14;
LAB_00165c88:
        iVar27 = (int)*plVar17;
        iVar9 = param_6 << 6;
        while( true ) {
          lVar23 = (ulong)((uint)(iVar27 * -0x61c8864f) >> 0x13) * 2;
          uVar3 = *(ushort *)((long)param_1 + lVar23);
          iVar27 = (int)*plVar15;
          *(short *)((long)param_1 + lVar23) = (short)plVar17 - sVar7;
          if ((uVar14 - iVar8 <= (uint)uVar3) &&
             (plVar11 = (long *)(lVar32 + (ulong)uVar3), (int)*plVar11 == (int)*plVar17)) break;
          plVar11 = (long *)((long)plVar15 + (long)(iVar9 >> 6));
          iVar9 = iVar9 + 1;
          plVar17 = plVar15;
          plVar15 = plVar11;
          if (plVar30 < plVar11) goto LAB_001670a8;
        }
        do {
          plVar15 = plVar11;
          plVar16 = plVar17;
          if ((plVar15 <= param_2) || (plVar16 <= plVar28)) break;
          plVar17 = (long *)((long)plVar16 + -1);
          plVar11 = (long *)((long)plVar15 + -1);
        } while (*(char *)((long)plVar16 + -1) == *(char *)((long)plVar15 + -1));
        uVar13 = (uint)((long)plVar16 - (long)plVar28);
        iVar9 = uVar13 - 0xf;
        plVar17 = (long *)((long)param_3 + 1);
        if (uVar13 < 0xf) {
          *(char *)param_3 = (char)(uVar13 << 4);
        }
        else {
          *(char *)param_3 = -0x10;
          if (0xfe < iVar9) {
            if (0x1fc < iVar9) {
              iVar9 = 0x1fd;
            }
            iVar27 = (int)plVar16 + 0xef;
            iVar26 = (int)plVar28;
            memset(plVar17,0xff,(ulong)((uint)(iVar27 - (iVar9 + iVar26)) / 0xff + 1));
            uVar13 = (iVar27 - iVar9) - iVar26;
            plVar17 = (long *)((long)param_3 + (ulong)uVar13 / 0xff + 2);
            iVar9 = ((int)plVar16 - iVar26) + uVar13 / 0xff + -0x10e;
          }
          *(char *)plVar17 = (char)iVar9;
          plVar17 = (long *)((long)plVar17 + 1);
        }
        plVar11 = (long *)((long)plVar17 + ((long)plVar16 - (long)plVar28 & 0xffffffffU));
        do {
          plVar5 = plVar17 + 1;
          *plVar17 = *plVar28;
          plVar17 = plVar5;
          plVar28 = plVar28 + 1;
        } while (plVar5 < plVar11);
        do {
          puVar22 = (ulong *)((long)plVar16 + 4);
          psVar4 = (short *)((long)plVar11 + 2);
          *(short *)plVar11 = (short)plVar16 - (short)plVar15;
          puVar31 = (ulong *)((long)plVar15 + 4);
          iVar9 = (int)puVar22;
          if (puVar22 < (ulong *)(lVar33 + -0xc)) {
            uVar24 = *puVar22 ^ *puVar31;
            if (uVar24 == 0) {
              puVar22 = (ulong *)((long)plVar16 + 0xc);
              puVar31 = (ulong *)((long)plVar15 + 0xc);
              goto joined_r0x00165fd0;
            }
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
          }
          else {
joined_r0x00165fd0:
            for (; puVar22 < (ulong *)(lVar33 + -0xc); puVar22 = puVar22 + 1) {
              uVar24 = *puVar22 ^ *puVar31;
              if (uVar24 != 0) {
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar24 = (ulong)(uint)(((int)puVar22 +
                                       (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3))
                                      - iVar9);
                goto LAB_00165ed4;
              }
              puVar31 = puVar31 + 1;
            }
            if ((puVar22 < (ulong *)(lVar33 + -8)) && ((int)*puVar31 == (int)*puVar22)) {
              puVar22 = (ulong *)((long)puVar22 + 4);
              puVar31 = (ulong *)((long)puVar31 + 4);
            }
            if ((puVar22 < (ulong *)(lVar33 + -6)) && ((short)*puVar31 == (short)*puVar22)) {
              puVar22 = (ulong *)((long)puVar22 + 2);
              puVar31 = (ulong *)((long)puVar31 + 2);
            }
            puVar19 = puVar22;
            if ((puVar22 < (ulong *)(lVar33 + -5)) &&
               (puVar19 = (ulong *)((long)puVar22 + 1), (char)*puVar31 != (char)*puVar22)) {
              puVar19 = puVar22;
            }
            uVar24 = (ulong)(uint)((int)puVar19 - iVar9);
          }
LAB_00165ed4:
          uVar18 = (uint)uVar24;
          uVar13 = uVar18 - 0xf;
          plVar28 = (long *)((long)plVar16 + uVar24 + 4);
          if (uVar18 < 0xf) {
            *(char *)param_3 = (char)*param_3 + (char)uVar24;
          }
          else {
            *(char *)param_3 = (char)*param_3 + '\x0f';
            psVar4[0] = -1;
            psVar4[1] = -1;
            if (0x3fb < uVar13) {
              uVar13 = ((uVar18 - 0x40b) / 0x3fc) * 4;
              memset((short *)((long)plVar11 + 6),0xff,(ulong)(uVar13 + 4));
              psVar4 = (short *)((long)plVar11 + 6 + (ulong)uVar13);
              uVar13 = (uVar18 - 0x40b) % 0x3fc;
            }
            pcVar6 = (char *)((long)psVar4 + (ulong)(uVar13 & 0xffff) / 0xff);
            psVar4 = (short *)(pcVar6 + 1);
            *pcVar6 = (char)uVar13 + (char)((uVar13 & 0xffff) / 0xff);
          }
          param_3 = psVar4;
          if (plVar30 <= plVar28) break;
          piVar10 = (int *)((long)plVar16 + uVar24 + 2);
          *(short *)((long)param_1 + (ulong)((uint)(*piVar10 * -0x61c8864f) >> 0x13) * 2) =
               (short)piVar10 - sVar7;
          lVar23 = (ulong)((uint)((int)*plVar28 * -0x61c8864f) >> 0x13) * 2;
          uVar3 = *(ushort *)((long)param_1 + lVar23);
          *(short *)((long)param_1 + lVar23) = (short)plVar28 - sVar7;
          if (((uint)uVar3 < uVar14 - iVar8) ||
             (plVar15 = (long *)(lVar32 + (ulong)uVar3), (int)*plVar15 != (int)*plVar28))
          goto LAB_00165c74;
          plVar11 = (long *)((long)psVar4 + 1);
          *(char *)psVar4 = '\0';
          plVar16 = plVar28;
        } while( true );
      }
LAB_001670a8:
      uVar24 = lVar33 - (long)plVar28;
      goto joined_r0x00165b04;
    }
  }
  if (0x1000a < (int)param_4) {
    if (sVar7 == 0) {
      if (*(short *)((long)param_1 + 0x4006) == 0) {
        if (*puVar1 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *puVar1 + 0x10000;
          *puVar1 = uVar14;
        }
      }
      else {
        memset(param_1,0,0x4000);
        uVar14 = 0;
        *puVar1 = 0;
        *(undefined2 *)((long)param_1 + 0x4006) = 0;
      }
      *(undefined4 *)((long)param_1 + 0x4018) = 0;
      *(undefined8 *)((long)param_1 + 0x4010) = 0;
      *(undefined8 *)((long)param_1 + 0x4008) = 0;
    }
    else {
      memset(param_1,0,0x4020);
      uVar14 = *puVar1;
    }
    if (0x7e000000 < param_4) {
      return 0;
    }
    *puVar1 = uVar14 + param_4;
    *(undefined2 *)((long)param_1 + 0x4006) = 2;
    *(uint *)((long)param_1 + 0x4018) = *(int *)((long)param_1 + 0x4018) + param_4;
    plVar17 = (long *)((long)param_2 + 2);
    plVar15 = (long *)((long)param_2 + ((ulong)param_4 - 0xb));
    lVar33 = (long)param_2 - (ulong)uVar14;
    pcVar6 = (char *)((long)param_3 + (long)param_5);
    plVar30 = (long *)((long)param_2 + 1);
    uVar13 = uVar14 + 1;
    puVar22 = (ulong *)((long)param_2 + ((ulong)param_4 - 0xc));
    *(uint *)((long)param_1 + ((ulong)(*param_2 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) = uVar14;
LAB_001671b8:
    lVar32 = *plVar30;
    iVar8 = param_6 << 6;
    while( true ) {
      uVar24 = (ulong)(lVar32 * -0x30e4432345000000) >> 0x32 & 0x3ffc;
      uVar14 = *(uint *)((long)param_1 + uVar24);
      lVar32 = *plVar17;
      *(uint *)((long)param_1 + uVar24) = uVar13;
      iVar9 = (int)lVar33;
      if ((uVar13 <= uVar14 + 0xffff) &&
         (plVar11 = (long *)(lVar33 + (ulong)uVar14), (int)*plVar11 == (int)*plVar30)) break;
      plVar11 = (long *)((long)plVar17 + (long)(iVar8 >> 6));
      uVar13 = (int)plVar17 - iVar9;
      iVar8 = iVar8 + 1;
      plVar30 = plVar17;
      plVar17 = plVar11;
      if (plVar15 < plVar11) goto LAB_00167560;
    }
    do {
      plVar16 = plVar11;
      plVar17 = plVar30;
      if ((plVar16 <= param_2) || (plVar17 <= plVar28)) break;
      plVar30 = (long *)((long)plVar17 + -1);
      plVar11 = (long *)((long)plVar16 + -1);
    } while (*(char *)((long)plVar17 + -1) == *(char *)((long)plVar16 + -1));
    uVar24 = (long)plVar17 - (long)plVar28 & 0xffffffff;
    if (pcVar6 < (char *)((long)param_3 + uVar24 / 0xff + uVar24 + 9)) {
      return 0;
    }
    uVar14 = (uint)((long)plVar17 - (long)plVar28);
    iVar8 = uVar14 - 0xf;
    plVar30 = (long *)((long)param_3 + 1);
    if (uVar14 < 0xf) {
      *(char *)param_3 = (char)(uVar14 << 4);
    }
    else {
      *(char *)param_3 = -0x10;
      if (0xfe < iVar8) {
        if (0x1fc < iVar8) {
          iVar8 = 0x1fd;
        }
        iVar27 = (int)plVar17 + 0xef;
        iVar26 = (int)plVar28;
        memset(plVar30,0xff,(ulong)((uint)(iVar27 - (iVar8 + iVar26)) / 0xff + 1));
        uVar14 = (iVar27 - iVar8) - iVar26;
        plVar30 = (long *)((long)param_3 + (ulong)uVar14 / 0xff + 2);
        iVar8 = ((int)plVar17 - iVar26) + uVar14 / 0xff + -0x10e;
      }
      *(char *)plVar30 = (char)iVar8;
      plVar30 = (long *)((long)plVar30 + 1);
    }
    plVar11 = (long *)((long)plVar30 + uVar24);
    do {
      plVar5 = plVar30 + 1;
      *plVar30 = *plVar28;
      plVar30 = plVar5;
      plVar28 = plVar28 + 1;
    } while (plVar5 < plVar11);
    do {
      puVar31 = (ulong *)((long)plVar17 + 4);
      psVar4 = (short *)((long)plVar11 + 2);
      *(short *)plVar11 = (short)plVar17 - (short)plVar16;
      puVar19 = (ulong *)((long)plVar16 + 4);
      iVar8 = (int)puVar31;
      if (puVar31 < puVar22) {
        uVar24 = *puVar31 ^ *puVar19;
        if (uVar24 == 0) {
          puVar31 = (ulong *)((long)plVar17 + 0xc);
          puVar19 = (ulong *)((long)plVar16 + 0xc);
          goto joined_r0x00167558;
        }
        uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
      }
      else {
joined_r0x00167558:
        for (; puVar31 < puVar22; puVar31 = puVar31 + 1) {
          uVar24 = *puVar31 ^ *puVar19;
          if (uVar24 != 0) {
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = (ulong)(uint)(((int)puVar31 +
                                   (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3)) -
                                  iVar8);
            goto LAB_00167428;
          }
          puVar19 = puVar19 + 1;
        }
        if ((puVar31 < (ulong *)((long)param_2 + ((ulong)param_4 - 8))) &&
           ((int)*puVar19 == (int)*puVar31)) {
          puVar31 = (ulong *)((long)puVar31 + 4);
          puVar19 = (ulong *)((long)puVar19 + 4);
        }
        if ((puVar31 < (ulong *)((long)param_2 + ((ulong)param_4 - 6))) &&
           ((short)*puVar19 == (short)*puVar31)) {
          puVar31 = (ulong *)((long)puVar31 + 2);
          puVar19 = (ulong *)((long)puVar19 + 2);
        }
        puVar21 = puVar31;
        if ((puVar31 < (ulong *)((long)param_2 + ((ulong)param_4 - 5))) &&
           (puVar21 = (ulong *)((long)puVar31 + 1), (char)*puVar19 != (char)*puVar31)) {
          puVar21 = puVar31;
        }
        uVar24 = (ulong)(uint)((int)puVar21 - iVar8);
      }
LAB_00167428:
      if (pcVar6 < (char *)((long)plVar11 + (uVar24 >> 8) + 8)) {
        return 0;
      }
      uVar13 = (uint)uVar24;
      uVar14 = uVar13 - 0xf;
      plVar28 = (long *)((long)plVar17 + uVar24 + 4);
      if (uVar13 < 0xf) {
        *(char *)param_3 = (char)*param_3 + (char)uVar24;
        param_3 = psVar4;
      }
      else {
        *(char *)param_3 = (char)*param_3 + '\x0f';
        psVar4[0] = -1;
        psVar4[1] = -1;
        if (0x3fb < uVar14) {
          uVar14 = ((uVar13 - 0x40b) / 0x3fc) * 4;
          memset((short *)((long)plVar11 + 6),0xff,(ulong)(uVar14 + 4));
          psVar4 = (short *)((long)plVar11 + 6 + (ulong)uVar14);
          uVar14 = (uVar13 - 0x40b) % 0x3fc;
        }
        pcVar2 = (char *)((long)psVar4 + (ulong)(uVar14 & 0xffff) / 0xff);
        param_3 = (short *)(pcVar2 + 1);
        *pcVar2 = (char)uVar14 + (char)((uVar14 & 0xffff) / 0xff);
      }
      if (plVar15 <= plVar28) goto LAB_00167560;
      plVar30 = (long *)((long)plVar17 + uVar24 + 2);
      uVar13 = (int)plVar28 - iVar9;
      *(int *)((long)param_1 + ((ulong)(*plVar30 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
           (int)plVar30 - iVar9;
      uVar12 = (ulong)(*plVar28 * -0x30e4432345000000) >> 0x32 & 0x3ffc;
      uVar14 = *(uint *)((long)param_1 + uVar12);
      *(uint *)((long)param_1 + uVar12) = uVar13;
      if ((uVar14 + 0xffff < uVar13) ||
         (plVar16 = (long *)(lVar33 + (ulong)uVar14), (int)*plVar16 != (int)*plVar28))
      goto LAB_001671a0;
      plVar11 = (long *)((long)param_3 + 1);
      *(char *)param_3 = '\0';
      plVar17 = plVar28;
    } while( true );
  }
  if (sVar7 == 0) {
    if ((*(short *)((long)param_1 + 0x4006) != 0) &&
       (((*(short *)((long)param_1 + 0x4006) != 3 || (0xfff < (int)param_4)) ||
        (0xfffe < *puVar1 + param_4)))) {
      memset(param_1,0,0x4000);
      *puVar1 = 0;
      *(undefined2 *)((long)param_1 + 0x4006) = 0;
    }
    iVar8 = 0;
    *(undefined4 *)((long)param_1 + 0x4018) = 0;
    *(undefined8 *)((long)param_1 + 0x4010) = 0;
    *(undefined8 *)((long)param_1 + 0x4008) = 0;
  }
  else {
    memset(param_1,0,0x4020);
    iVar8 = *(int *)((long)param_1 + 0x4018);
  }
  uVar14 = *puVar1;
  pcVar6 = (char *)((long)param_3 + (long)param_5);
  lVar33 = (long)param_2 - (ulong)uVar14;
  plVar30 = (long *)((long)param_2 + (long)(int)param_4 + -0xb);
  puVar22 = (ulong *)((long)param_2 + (long)(int)param_4 + -5);
  sVar7 = (short)lVar33;
  if (uVar14 == 0) {
    if (0x7e000000 < param_4) {
      return 0;
    }
    *puVar1 = param_4;
    *(uint *)((long)param_1 + 0x4018) = iVar8 + param_4;
    *(undefined2 *)((long)param_1 + 0x4006) = 3;
    if (0xc < (int)param_4) {
      puVar31 = (ulong *)((long)param_2 + (long)(int)param_4 + -0xc);
      *(undefined2 *)((long)param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) = 0;
LAB_001667d0:
      iVar27 = *(int *)((long)plVar28 + 1U);
      iVar9 = 1;
      plVar17 = (long *)((long)plVar28 + 1U);
      iVar8 = param_6 << 6;
      do {
        plVar15 = (long *)((long)plVar17 + (long)iVar9);
        if (plVar30 < plVar15) goto LAB_00166be8;
        lVar32 = (ulong)((uint)(iVar27 * -0x61c8864f) >> 0x13) * 2;
        uVar3 = *(ushort *)((long)param_1 + lVar32);
        iVar27 = (int)*plVar15;
        *(short *)((long)param_1 + lVar32) = (short)plVar17 - sVar7;
        plVar11 = (long *)(lVar33 + (ulong)uVar3);
        lVar32 = *plVar17;
        iVar9 = iVar8 >> 6;
        iVar8 = iVar8 + 1;
        plVar16 = plVar17;
        plVar17 = plVar15;
      } while ((int)*plVar11 != (int)lVar32);
      do {
        plVar17 = plVar11;
        plVar15 = plVar16;
        if ((plVar17 <= param_2) || (plVar15 <= plVar28)) break;
        plVar16 = (long *)((long)plVar15 + -1);
        plVar11 = (long *)((long)plVar17 + -1);
      } while (*(char *)((long)plVar15 + -1) == *(char *)((long)plVar17 + -1));
      uVar24 = (long)plVar15 - (long)plVar28 & 0xffffffff;
      if (pcVar6 < (char *)((long)param_3 + uVar24 / 0xff + uVar24 + 9)) {
        return 0;
      }
      uVar14 = (uint)((long)plVar15 - (long)plVar28);
      iVar8 = uVar14 - 0xf;
      plVar11 = (long *)((long)param_3 + 1);
      if (uVar14 < 0xf) {
        *(char *)param_3 = (char)(uVar14 << 4);
      }
      else {
        *(char *)param_3 = -0x10;
        if (0xfe < iVar8) {
          if (0x1fc < iVar8) {
            iVar8 = 0x1fd;
          }
          iVar9 = (int)plVar15 + 0xef;
          iVar27 = (int)plVar28;
          memset(plVar11,0xff,(ulong)((uint)(iVar9 - (iVar8 + iVar27)) / 0xff + 1));
          uVar14 = (iVar9 - iVar8) - iVar27;
          plVar11 = (long *)((long)param_3 + (ulong)uVar14 / 0xff + 2);
          iVar8 = ((int)plVar15 - iVar27) + uVar14 / 0xff + -0x10e;
        }
        *(char *)plVar11 = (char)iVar8;
        plVar11 = (long *)((long)plVar11 + 1);
      }
      plVar16 = (long *)((long)plVar11 + uVar24);
      do {
        plVar5 = plVar11 + 1;
        *plVar11 = *plVar28;
        plVar11 = plVar5;
        plVar28 = plVar28 + 1;
        psVar4 = param_3;
      } while (plVar5 < plVar16);
      do {
        puVar19 = (ulong *)((long)plVar15 + 4);
        param_3 = (short *)((long)plVar16 + 2);
        *(short *)plVar16 = (short)plVar15 - (short)plVar17;
        puVar21 = (ulong *)((long)plVar17 + 4);
        iVar8 = (int)puVar19;
        if (puVar19 < puVar31) {
          uVar24 = *puVar19 ^ *puVar21;
          if (uVar24 == 0) {
            puVar19 = (ulong *)((long)plVar15 + 0xc);
            puVar21 = (ulong *)((long)plVar17 + 0xc);
            goto joined_r0x00166b34;
          }
          uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
          uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
          uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
          uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
          uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
        }
        else {
joined_r0x00166b34:
          for (; puVar19 < puVar31; puVar19 = puVar19 + 1) {
            uVar24 = *puVar19 ^ *puVar21;
            if (uVar24 != 0) {
              uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
              uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              uVar24 = (ulong)(uint)(((int)puVar19 +
                                     (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3)) -
                                    iVar8);
              goto LAB_00166a38;
            }
            puVar21 = puVar21 + 1;
          }
          if ((puVar19 < (ulong *)((long)param_2 + (long)(int)param_4 + -8)) &&
             ((int)*puVar21 == (int)*puVar19)) {
            puVar19 = (ulong *)((long)puVar19 + 4);
            puVar21 = (ulong *)((long)puVar21 + 4);
          }
          if ((puVar19 < (ulong *)((long)param_2 + (long)(int)param_4 + -6)) &&
             ((short)*puVar21 == (short)*puVar19)) {
            puVar19 = (ulong *)((long)puVar19 + 2);
            puVar21 = (ulong *)((long)puVar21 + 2);
          }
          puVar20 = puVar19;
          if ((puVar19 < puVar22) &&
             (puVar20 = (ulong *)((long)puVar19 + 1), (char)*puVar21 != (char)*puVar19)) {
            puVar20 = puVar19;
          }
          uVar24 = (ulong)(uint)((int)puVar20 - iVar8);
        }
LAB_00166a38:
        if (pcVar6 < (char *)((long)plVar16 + (uVar24 >> 8) + 8)) {
          return 0;
        }
        uVar13 = (uint)uVar24;
        uVar14 = uVar13 - 0xf;
        plVar28 = (long *)((long)plVar15 + uVar24 + 4);
        if (uVar13 < 0xf) {
          *(char *)psVar4 = (char)*psVar4 + (char)uVar24;
        }
        else {
          *(char *)psVar4 = (char)*psVar4 + '\x0f';
          param_3[0] = -1;
          param_3[1] = -1;
          if (0x3fb < uVar14) {
            uVar14 = ((uVar13 - 0x40b) / 0x3fc) * 4;
            memset((short *)((long)plVar16 + 6),0xff,(ulong)(uVar14 + 4));
            param_3 = (short *)((long)plVar16 + 6 + (ulong)uVar14);
            uVar14 = (uVar13 - 0x40b) % 0x3fc;
          }
          pcVar2 = (char *)((long)param_3 + (ulong)(uVar14 & 0xffff) / 0xff);
          param_3 = (short *)(pcVar2 + 1);
          *pcVar2 = (char)uVar14 + (char)((uVar14 & 0xffff) / 0xff);
        }
        if (plVar30 <= plVar28) break;
        piVar10 = (int *)((long)plVar15 + uVar24 + 2);
        *(short *)((long)param_1 + (ulong)((uint)(*piVar10 * -0x61c8864f) >> 0x13) * 2) =
             (short)piVar10 - sVar7;
        lVar32 = (ulong)((uint)((int)*plVar28 * -0x61c8864f) >> 0x13) * 2;
        uVar3 = *(ushort *)((long)param_1 + lVar32);
        *(short *)((long)param_1 + lVar32) = (short)plVar28 - sVar7;
        plVar17 = (long *)(lVar33 + (ulong)uVar3);
        if ((int)*plVar17 != (int)*plVar28) goto LAB_001667d0;
        plVar16 = (long *)((long)param_3 + 1);
        *(char *)param_3 = '\0';
        plVar15 = plVar28;
        psVar4 = param_3;
      } while( true );
    }
LAB_00166be8:
    uVar24 = (long)param_2 + ((long)(int)param_4 - (long)plVar28);
    if (pcVar6 < (char *)((long)param_3 + (uVar24 + 0xf0) / 0xff + uVar24 + 1)) {
      return 0;
    }
    uVar12 = uVar24 - 0xf;
    if (uVar24 < 0xf) {
      *(char *)param_3 = (char)((int)uVar24 << 4);
      pcVar6 = (char *)((long)param_3 + 1);
    }
    else {
      pcVar6 = (char *)((long)param_3 + 1);
      *(char *)param_3 = -0x10;
      if (0xfe < uVar12) {
        uVar25 = (uVar24 - 0x10e) / 0xff;
        memset(pcVar6,0xff,uVar25 + 1);
        uVar12 = (uVar24 - 0x10e) % 0xff;
        pcVar6 = (char *)((long)param_3 + uVar25 + 2);
      }
      *pcVar6 = (char)uVar12;
      pcVar6 = pcVar6 + 1;
    }
    goto LAB_001670c4;
  }
  if (0x7e000000 < param_4) {
    return 0;
  }
  *(uint *)((long)param_1 + 0x4018) = iVar8 + param_4;
  *puVar1 = uVar14 + param_4;
  *(undefined2 *)((long)param_1 + 0x4006) = 3;
  if (0xc < (int)param_4) {
    plVar15 = (long *)((long)param_2 + 2);
    plVar17 = (long *)((long)param_2 + 1);
    puVar31 = (ulong *)((long)param_2 + (long)(int)param_4 + -0xc);
    *(short *)((long)param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) =
         (short)uVar14;
LAB_00166040:
    iVar27 = (int)*plVar17;
    iVar9 = param_6 << 6;
    while( true ) {
      lVar32 = (ulong)((uint)(iVar27 * -0x61c8864f) >> 0x13) * 2;
      uVar3 = *(ushort *)((long)param_1 + lVar32);
      iVar27 = (int)*plVar15;
      *(short *)((long)param_1 + lVar32) = (short)plVar17 - sVar7;
      if ((uVar14 - iVar8 <= (uint)uVar3) &&
         (plVar11 = (long *)(lVar33 + (ulong)uVar3), (int)*plVar11 == (int)*plVar17)) break;
      plVar11 = (long *)((long)plVar15 + (long)(iVar9 >> 6));
      iVar9 = iVar9 + 1;
      plVar17 = plVar15;
      plVar15 = plVar11;
      if (plVar30 < plVar11) goto LAB_00165ad4;
    }
    do {
      plVar15 = plVar11;
      plVar16 = plVar17;
      if ((plVar15 <= param_2) || (plVar16 <= plVar28)) break;
      plVar17 = (long *)((long)plVar16 + -1);
      plVar11 = (long *)((long)plVar15 + -1);
    } while (*(char *)((long)plVar16 + -1) == *(char *)((long)plVar15 + -1));
    uVar24 = (long)plVar16 - (long)plVar28 & 0xffffffff;
    if (pcVar6 < (char *)((long)param_3 + uVar24 / 0xff + uVar24 + 9)) {
      return 0;
    }
    uVar13 = (uint)((long)plVar16 - (long)plVar28);
    iVar9 = uVar13 - 0xf;
    plVar17 = (long *)((long)param_3 + 1);
    if (uVar13 < 0xf) {
      *(char *)param_3 = (char)(uVar13 << 4);
    }
    else {
      *(char *)param_3 = -0x10;
      if (0xfe < iVar9) {
        if (0x1fc < iVar9) {
          iVar9 = 0x1fd;
        }
        iVar27 = (int)plVar16 + 0xef;
        iVar26 = (int)plVar28;
        memset(plVar17,0xff,(ulong)((uint)(iVar27 - (iVar9 + iVar26)) / 0xff + 1));
        uVar13 = (iVar27 - iVar9) - iVar26;
        plVar17 = (long *)((long)param_3 + (ulong)uVar13 / 0xff + 2);
        iVar9 = ((int)plVar16 - iVar26) + uVar13 / 0xff + -0x10e;
      }
      *(char *)plVar17 = (char)iVar9;
      plVar17 = (long *)((long)plVar17 + 1);
    }
    plVar11 = (long *)((long)plVar17 + uVar24);
    do {
      plVar5 = plVar17 + 1;
      *plVar17 = *plVar28;
      plVar17 = plVar5;
      plVar28 = plVar28 + 1;
      psVar4 = param_3;
    } while (plVar5 < plVar11);
    do {
      puVar19 = (ulong *)((long)plVar16 + 4);
      param_3 = (short *)((long)plVar11 + 2);
      *(short *)plVar11 = (short)plVar16 - (short)plVar15;
      puVar21 = (ulong *)((long)plVar15 + 4);
      iVar9 = (int)puVar19;
      if (puVar19 < puVar31) {
        uVar24 = *puVar19 ^ *puVar21;
        if (uVar24 == 0) {
          puVar19 = (ulong *)((long)plVar16 + 0xc);
          puVar21 = (ulong *)((long)plVar15 + 0xc);
          goto joined_r0x001663c0;
        }
        uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
      }
      else {
joined_r0x001663c0:
        for (; puVar19 < puVar31; puVar19 = puVar19 + 1) {
          uVar24 = *puVar19 ^ *puVar21;
          if (uVar24 != 0) {
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = (ulong)(uint)(((int)puVar19 +
                                   (int)((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3)) -
                                  iVar9);
            goto LAB_001662ac;
          }
          puVar21 = puVar21 + 1;
        }
        if ((puVar19 < (ulong *)((long)param_2 + (long)(int)param_4 + -8)) &&
           ((int)*puVar21 == (int)*puVar19)) {
          puVar19 = (ulong *)((long)puVar19 + 4);
          puVar21 = (ulong *)((long)puVar21 + 4);
        }
        if ((puVar19 < (ulong *)((long)param_2 + (long)(int)param_4 + -6)) &&
           ((short)*puVar21 == (short)*puVar19)) {
          puVar19 = (ulong *)((long)puVar19 + 2);
          puVar21 = (ulong *)((long)puVar21 + 2);
        }
        puVar20 = puVar19;
        if ((puVar19 < puVar22) &&
           (puVar20 = (ulong *)((long)puVar19 + 1), (char)*puVar21 != (char)*puVar19)) {
          puVar20 = puVar19;
        }
        uVar24 = (ulong)(uint)((int)puVar20 - iVar9);
      }
LAB_001662ac:
      if (pcVar6 < (char *)((long)plVar11 + (uVar24 >> 8) + 8)) {
        return 0;
      }
      uVar18 = (uint)uVar24;
      uVar13 = uVar18 - 0xf;
      plVar28 = (long *)((long)plVar16 + uVar24 + 4);
      if (uVar18 < 0xf) {
        *(char *)psVar4 = (char)*psVar4 + (char)uVar24;
      }
      else {
        *(char *)psVar4 = (char)*psVar4 + '\x0f';
        param_3[0] = -1;
        param_3[1] = -1;
        if (0x3fb < uVar13) {
          uVar13 = ((uVar18 - 0x40b) / 0x3fc) * 4;
          memset((short *)((long)plVar11 + 6),0xff,(ulong)(uVar13 + 4));
          param_3 = (short *)((long)plVar11 + 6 + (ulong)uVar13);
          uVar13 = (uVar18 - 0x40b) % 0x3fc;
        }
        pcVar2 = (char *)((long)param_3 + (ulong)(uVar13 & 0xffff) / 0xff);
        param_3 = (short *)(pcVar2 + 1);
        *pcVar2 = (char)uVar13 + (char)((uVar13 & 0xffff) / 0xff);
      }
      if (plVar30 <= plVar28) break;
      piVar10 = (int *)((long)plVar16 + uVar24 + 2);
      *(short *)((long)param_1 + (ulong)((uint)(*piVar10 * -0x61c8864f) >> 0x13) * 2) =
           (short)piVar10 - sVar7;
      lVar32 = (ulong)((uint)((int)*plVar28 * -0x61c8864f) >> 0x13) * 2;
      uVar3 = *(ushort *)((long)param_1 + lVar32);
      *(short *)((long)param_1 + lVar32) = (short)plVar28 - sVar7;
      if (((uint)uVar3 < uVar14 - iVar8) ||
         (plVar15 = (long *)(lVar33 + (ulong)uVar3), (int)*plVar15 != (int)*plVar28))
      goto LAB_0016602c;
      plVar11 = (long *)((long)param_3 + 1);
      *(char *)param_3 = '\0';
      plVar16 = plVar28;
      psVar4 = param_3;
    } while( true );
  }
LAB_00165ad4:
  uVar24 = (long)param_2 + ((long)(int)param_4 - (long)plVar28);
  if (pcVar6 < (char *)((long)param_3 + (uVar24 + 0xf0) / 0xff + uVar24 + 1)) {
    return 0;
  }
  goto joined_r0x00165b04;
LAB_00166d2c:
  plVar30 = (long *)((long)plVar17 + uVar24 + 5);
  plVar17 = (long *)((long)plVar17 + uVar24 + 6);
  uVar13 = (int)plVar30 - iVar9;
  if (plVar15 < plVar17) goto LAB_001670a8;
  goto LAB_00166d44;
LAB_00166b5c:
  lVar32 = -(long)plVar28;
  param_2 = plVar28;
  goto joined_r0x00166b68;
LAB_00165c74:
  plVar15 = (long *)((long)plVar16 + uVar24 + 6);
  plVar17 = (long *)((long)plVar16 + uVar24 + 5);
  if (plVar30 < plVar15) goto LAB_001670a8;
  goto LAB_00165c88;
LAB_001671a0:
  plVar30 = (long *)((long)plVar17 + uVar24 + 5);
  plVar17 = (long *)((long)plVar17 + uVar24 + 6);
  uVar13 = (int)plVar30 - iVar9;
  if (plVar15 < plVar17) goto LAB_00167560;
  goto LAB_001671b8;
LAB_0016602c:
  plVar15 = (long *)((long)plVar16 + uVar24 + 6);
  plVar17 = (long *)((long)plVar16 + uVar24 + 5);
  if (plVar30 < plVar15) goto LAB_00165ad4;
  goto LAB_00166040;
LAB_00167560:
  uVar24 = (long)param_2 + ((ulong)param_4 - (long)plVar28);
  if (pcVar6 < (char *)((long)param_3 + (uVar24 + 0xf0) / 0xff + uVar24 + 1)) {
    return 0;
  }
joined_r0x00165b04:
  if (uVar24 < 0xf) {
    *(char *)param_3 = (char)((int)uVar24 << 4);
    psVar4 = param_3;
  }
  else {
    uVar12 = uVar24 - 0xf;
    psVar4 = (short *)((long)param_3 + 1);
    *(char *)param_3 = -0x10;
    if (0xfe < uVar12) {
      uVar25 = (uVar24 - 0x10e) / 0xff;
      memset(psVar4,0xff,uVar25 + 1);
      uVar12 = (uVar24 - 0x10e) % 0xff;
      psVar4 = (short *)((long)param_3 + uVar25 + 2);
    }
    *(char *)psVar4 = (char)uVar12;
  }
  pcVar6 = (char *)((long)psVar4 + 1);
LAB_001670c4:
  memcpy(pcVar6,plVar28,uVar24);
  return ((int)pcVar6 + (int)uVar24) - iVar29;
}


// ===== 001675c0  LZ4_compress_fast =====

void LZ4_compress_fast(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  long lVar1;
  undefined1 auStack_4048 [16416];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  LZ4_compress_fast_extState(auStack_4048,param_1,param_2,param_3,param_4,param_5);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00167624  LZ4_compress_default =====

void LZ4_compress_default
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined1 auStack_4048 [16416];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  LZ4_compress_fast_extState(auStack_4048,param_1,param_2,param_3,param_4,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00167688  LZ4_compress_fast_force =====

void LZ4_compress_fast_force(long *param_1,short *param_2,uint param_3,int param_4,int param_5)

{
  char *pcVar1;
  char *pcVar2;
  ushort uVar3;
  long lVar4;
  short sVar5;
  int iVar6;
  long *plVar7;
  short *psVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  int *piVar16;
  uint uVar17;
  ulong *puVar18;
  ulong *puVar19;
  long lVar20;
  ulong *puVar21;
  int iVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  long *plVar26;
  ulong uVar27;
  long *plVar28;
  ulong *puVar29;
  uint auStack_4090 [4096];
  uint local_90;
  undefined2 uStack_8a;
  uint local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  memset(auStack_4090,0,0x4020);
  pcVar1 = (char *)((long)param_2 + (long)param_4);
  iVar22 = (int)param_1;
  iVar6 = (int)param_2;
  if ((int)param_3 < 0x1000b) {
    if (param_3 < 0x7e000001) {
      uStack_8a = 3;
      plVar10 = param_1;
      local_90 = param_3;
      local_78 = param_3;
      if ((int)param_3 < 0xd) {
LAB_00167fec:
        uVar23 = (long)param_1 + ((long)(int)param_3 - (long)plVar10);
        if ((char *)((long)param_2 + (uVar23 + 0xf0) / 0xff + uVar23 + 1) <= pcVar1) {
          uVar13 = uVar23 - 0xf;
          if (uVar23 < 0xf) {
            *(char *)param_2 = (char)((int)uVar23 << 4);
          }
          else {
            psVar8 = (short *)((long)param_2 + 1);
            *(char *)param_2 = -0x10;
            if (0xfe < uVar13) {
              uVar27 = (uVar23 - 0x10e) / 0xff;
              memset(psVar8,0xff,uVar27 + 1);
              uVar13 = (uVar23 - 0x10e) % 0xff;
              psVar8 = (short *)((long)param_2 + uVar27 + 2);
            }
            *(char *)psVar8 = (char)uVar13;
            param_2 = psVar8;
          }
          memcpy((char *)((long)param_2 + 1),plVar10,uVar23);
          iVar6 = ((int)(char *)((long)param_2 + 1) + (int)uVar23) - iVar6;
          if (*(long *)(lVar4 + 0x28) == local_70) {
            return;
          }
          goto LAB_001680dc;
        }
      }
      else {
        plVar26 = (long *)((long)param_1 + (long)(int)param_3 + -0xb);
        puVar29 = (ulong *)((long)param_1 + (long)(int)param_3 + -0xc);
        *(undefined2 *)
         ((long)auStack_4090 + (ulong)((uint)((int)*param_1 * -0x61c8864f) >> 0x13) * 2) = 0;
LAB_00167c5c:
        iVar25 = *(int *)((long)plVar10 + 1U);
        iVar9 = 1;
        plVar14 = (long *)((long)plVar10 + 1U);
        iVar22 = param_5 << 6;
        do {
          plVar28 = (long *)((long)plVar14 + (long)iVar9);
          if (plVar26 < plVar28) goto LAB_00167fec;
          lVar20 = (ulong)((uint)(iVar25 * -0x61c8864f) >> 0x13) * 2;
          uVar3 = *(ushort *)((long)auStack_4090 + lVar20);
          sVar5 = (short)param_1;
          iVar25 = (int)*plVar28;
          *(short *)((long)auStack_4090 + lVar20) = (short)plVar14 - sVar5;
          plVar11 = (long *)((long)param_1 + (ulong)uVar3);
          lVar20 = *plVar14;
          iVar9 = iVar22 >> 6;
          iVar22 = iVar22 + 1;
          plVar15 = plVar14;
          plVar14 = plVar28;
        } while ((int)*plVar11 != (int)lVar20);
        do {
          plVar14 = plVar11;
          plVar28 = plVar15;
          if ((plVar14 <= param_1) || (plVar28 <= plVar10)) break;
          plVar15 = (long *)((long)plVar28 + -1);
          plVar11 = (long *)((long)plVar14 + -1);
        } while (*(char *)((long)plVar28 + -1) == *(char *)((long)plVar14 + -1));
        uVar23 = (long)plVar28 - (long)plVar10 & 0xffffffff;
        if ((char *)((long)param_2 + uVar23 / 0xff + uVar23 + 9) <= pcVar1) {
          uVar12 = (uint)((long)plVar28 - (long)plVar10);
          iVar22 = uVar12 - 0xf;
          plVar11 = (long *)((long)param_2 + 1);
          if (uVar12 < 0xf) {
            *(char *)param_2 = (char)(uVar12 << 4);
          }
          else {
            *(char *)param_2 = -0x10;
            if (0xfe < iVar22) {
              if (0x1fc < iVar22) {
                iVar22 = 0x1fd;
              }
              iVar9 = (int)plVar28 + 0xef;
              iVar25 = (int)plVar10;
              memset(plVar11,0xff,(ulong)((uint)(iVar9 - (iVar22 + iVar25)) / 0xff + 1));
              uVar12 = (iVar9 - iVar22) - iVar25;
              plVar11 = (long *)((long)param_2 + (ulong)uVar12 / 0xff + 2);
              iVar22 = ((int)plVar28 - iVar25) + uVar12 / 0xff + -0x10e;
            }
            *(char *)plVar11 = (char)iVar22;
            plVar11 = (long *)((long)plVar11 + 1);
          }
          plVar15 = (long *)((long)plVar11 + uVar23);
          do {
            plVar7 = plVar11 + 1;
            *plVar11 = *plVar10;
            plVar11 = plVar7;
            plVar10 = plVar10 + 1;
          } while (plVar7 < plVar15);
          do {
            puVar18 = (ulong *)((long)plVar28 + 4);
            psVar8 = (short *)((long)plVar15 + 2);
            *(short *)plVar15 = (short)plVar28 - (short)plVar14;
            puVar21 = (ulong *)((long)plVar14 + 4);
            iVar22 = (int)puVar18;
            if (puVar18 < puVar29) {
              uVar23 = *puVar18 ^ *puVar21;
              if (uVar23 == 0) {
                puVar18 = (ulong *)((long)plVar28 + 0xc);
                puVar21 = (ulong *)((long)plVar14 + 0xc);
                goto joined_r0x00167ddc;
              }
              uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
              uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
            }
            else {
joined_r0x00167ddc:
              for (; puVar18 < puVar29; puVar18 = puVar18 + 1) {
                uVar23 = *puVar18 ^ *puVar21;
                if (uVar23 != 0) {
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = (ulong)(uint)(((int)puVar18 +
                                         (int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3)
                                         ) - iVar22);
                  goto LAB_00167ed4;
                }
                puVar21 = puVar21 + 1;
              }
              if ((puVar18 < (ulong *)((long)param_1 + (long)(int)param_3 + -8)) &&
                 ((int)*puVar21 == (int)*puVar18)) {
                puVar18 = (ulong *)((long)puVar18 + 4);
                puVar21 = (ulong *)((long)puVar21 + 4);
              }
              if ((puVar18 < (ulong *)((long)param_1 + (long)(int)param_3 + -6)) &&
                 ((short)*puVar21 == (short)*puVar18)) {
                puVar18 = (ulong *)((long)puVar18 + 2);
                puVar21 = (ulong *)((long)puVar21 + 2);
              }
              puVar19 = puVar18;
              if ((puVar18 < (ulong *)((long)param_1 + (long)(int)param_3 + -5)) &&
                 (puVar19 = (ulong *)((long)puVar18 + 1), (char)*puVar21 != (char)*puVar18)) {
                puVar19 = puVar18;
              }
              uVar23 = (ulong)(uint)((int)puVar19 - iVar22);
            }
LAB_00167ed4:
            if (pcVar1 < (char *)((long)plVar15 + (uVar23 >> 8) + 8)) break;
            uVar17 = (uint)uVar23;
            uVar12 = uVar17 - 0xf;
            plVar10 = (long *)((long)plVar28 + uVar23 + 4);
            if (uVar17 < 0xf) {
              *(char *)param_2 = (char)*param_2 + (char)uVar23;
              param_2 = psVar8;
            }
            else {
              *(char *)param_2 = (char)*param_2 + '\x0f';
              psVar8[0] = -1;
              psVar8[1] = -1;
              if (0x3fb < uVar12) {
                uVar12 = ((uVar17 - 0x40b) / 0x3fc) * 4;
                memset((short *)((long)plVar15 + 6),0xff,(ulong)(uVar12 + 4));
                psVar8 = (short *)((long)plVar15 + 6 + (ulong)uVar12);
                uVar12 = (uVar17 - 0x40b) % 0x3fc;
              }
              pcVar2 = (char *)((long)psVar8 + (ulong)(uVar12 & 0xffff) / 0xff);
              *pcVar2 = (char)uVar12 + (char)((uVar12 & 0xffff) / 0xff);
              param_2 = (short *)(pcVar2 + 1);
            }
            if (plVar26 <= plVar10) goto LAB_00167fec;
            piVar16 = (int *)((long)plVar28 + uVar23 + 2);
            *(short *)((long)auStack_4090 + (ulong)((uint)(*piVar16 * -0x61c8864f) >> 0x13) * 2) =
                 (short)piVar16 - sVar5;
            lVar20 = (ulong)((uint)((int)*plVar10 * -0x61c8864f) >> 0x13) * 2;
            uVar3 = *(ushort *)((long)auStack_4090 + lVar20);
            *(short *)((long)auStack_4090 + lVar20) = (short)plVar10 - sVar5;
            plVar14 = (long *)((long)param_1 + (ulong)uVar3);
            if ((int)*plVar14 != (int)*plVar10) goto LAB_00167c5c;
            plVar15 = (long *)((long)param_2 + 1);
            *(char *)param_2 = '\0';
            plVar28 = plVar10;
          } while( true );
        }
      }
    }
  }
  else if (param_3 < 0x7e000001) {
    uStack_8a = 2;
    plVar26 = (long *)((long)param_1 + 2);
    plVar28 = (long *)((long)param_1 + ((ulong)param_3 - 0xb));
    plVar10 = (long *)((long)param_1 + 1);
    uVar12 = 1;
    puVar29 = (ulong *)((long)param_1 + ((ulong)param_3 - 0xc));
    *(undefined4 *)((long)auStack_4090 + ((ulong)(*param_1 * -0x30e4432345000000) >> 0x32 & 0x3ffc))
         = 0;
    plVar14 = param_1;
    local_90 = param_3;
    local_78 = param_3;
LAB_001677ec:
    lVar20 = *plVar10;
    iVar9 = param_5 << 6;
    while( true ) {
      uVar23 = (ulong)(lVar20 * -0x30e4432345000000) >> 0x32 & 0x3ffc;
      uVar17 = *(uint *)((long)auStack_4090 + uVar23);
      lVar20 = *plVar26;
      *(uint *)((long)auStack_4090 + uVar23) = uVar12;
      if ((uVar12 <= uVar17 + 0xffff) &&
         (plVar11 = (long *)((long)param_1 + (ulong)uVar17), (int)*plVar11 == (int)*plVar10)) break;
      plVar11 = (long *)((long)plVar26 + (long)(iVar9 >> 6));
      uVar12 = (int)plVar26 - iVar22;
      iVar9 = iVar9 + 1;
      plVar10 = plVar26;
      plVar26 = plVar11;
      if (plVar28 < plVar11) goto LAB_00167b7c;
    }
    do {
      plVar15 = plVar11;
      plVar26 = plVar10;
      if ((plVar15 <= param_1) || (plVar26 <= plVar14)) break;
      plVar10 = (long *)((long)plVar26 + -1);
      plVar11 = (long *)((long)plVar15 + -1);
    } while (*(char *)((long)plVar26 + -1) == *(char *)((long)plVar15 + -1));
    uVar23 = (long)plVar26 - (long)plVar14 & 0xffffffff;
    if ((char *)((long)param_2 + uVar23 / 0xff + uVar23 + 9) <= pcVar1) {
      uVar12 = (uint)((long)plVar26 - (long)plVar14);
      iVar9 = uVar12 - 0xf;
      plVar10 = (long *)((long)param_2 + 1);
      if (uVar12 < 0xf) {
        *(char *)param_2 = (char)(uVar12 << 4);
      }
      else {
        *(char *)param_2 = -0x10;
        if (0xfe < iVar9) {
          if (0x1fc < iVar9) {
            iVar9 = 0x1fd;
          }
          iVar25 = (int)plVar26 + 0xef;
          iVar24 = (int)plVar14;
          memset(plVar10,0xff,(ulong)((uint)(iVar25 - (iVar9 + iVar24)) / 0xff + 1));
          uVar12 = (iVar25 - iVar9) - iVar24;
          plVar10 = (long *)((long)param_2 + (ulong)uVar12 / 0xff + 2);
          iVar9 = ((int)plVar26 - iVar24) + uVar12 / 0xff + -0x10e;
        }
        *(char *)plVar10 = (char)iVar9;
        plVar10 = (long *)((long)plVar10 + 1);
      }
      plVar11 = (long *)((long)plVar10 + uVar23);
      do {
        plVar7 = plVar10 + 1;
        *plVar10 = *plVar14;
        plVar10 = plVar7;
        plVar14 = plVar14 + 1;
      } while (plVar7 < plVar11);
      do {
        puVar18 = (ulong *)((long)plVar26 + 4);
        psVar8 = (short *)((long)plVar11 + 2);
        *(short *)plVar11 = (short)plVar26 - (short)plVar15;
        puVar21 = (ulong *)((long)plVar15 + 4);
        iVar9 = (int)puVar18;
        if (puVar18 < puVar29) {
          uVar23 = *puVar18 ^ *puVar21;
          if (uVar23 == 0) {
            puVar18 = (ulong *)((long)plVar26 + 0xc);
            puVar21 = (ulong *)((long)plVar15 + 0xc);
            goto joined_r0x00167b74;
          }
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
        }
        else {
joined_r0x00167b74:
          for (; puVar18 < puVar29; puVar18 = puVar18 + 1) {
            uVar23 = *puVar18 ^ *puVar21;
            if (uVar23 != 0) {
              uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
              uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              uVar23 = (ulong)(uint)(((int)puVar18 +
                                     (int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3)) -
                                    iVar9);
              goto LAB_00167a54;
            }
            puVar21 = puVar21 + 1;
          }
          if ((puVar18 < (ulong *)((long)param_1 + ((ulong)param_3 - 8))) &&
             ((int)*puVar21 == (int)*puVar18)) {
            puVar18 = (ulong *)((long)puVar18 + 4);
            puVar21 = (ulong *)((long)puVar21 + 4);
          }
          if ((puVar18 < (ulong *)((long)param_1 + ((ulong)param_3 - 6))) &&
             ((short)*puVar21 == (short)*puVar18)) {
            puVar18 = (ulong *)((long)puVar18 + 2);
            puVar21 = (ulong *)((long)puVar21 + 2);
          }
          puVar19 = puVar18;
          if ((puVar18 < (ulong *)((long)param_1 + ((ulong)param_3 - 5))) &&
             (puVar19 = (ulong *)((long)puVar18 + 1), (char)*puVar21 != (char)*puVar18)) {
            puVar19 = puVar18;
          }
          uVar23 = (ulong)(uint)((int)puVar19 - iVar9);
        }
LAB_00167a54:
        if (pcVar1 < (char *)((long)plVar11 + (uVar23 >> 8) + 8)) break;
        uVar17 = (uint)uVar23;
        uVar12 = uVar17 - 0xf;
        plVar14 = (long *)((long)plVar26 + uVar23 + 4);
        if (uVar17 < 0xf) {
          *(char *)param_2 = (char)*param_2 + (char)uVar23;
          param_2 = psVar8;
        }
        else {
          *(char *)param_2 = (char)*param_2 + '\x0f';
          psVar8[0] = -1;
          psVar8[1] = -1;
          if (0x3fb < uVar12) {
            uVar12 = ((uVar17 - 0x40b) / 0x3fc) * 4;
            memset((short *)((long)plVar11 + 6),0xff,(ulong)(uVar12 + 4));
            psVar8 = (short *)((long)plVar11 + 6 + (ulong)uVar12);
            uVar12 = (uVar17 - 0x40b) % 0x3fc;
          }
          pcVar2 = (char *)((long)psVar8 + (ulong)(uVar12 & 0xffff) / 0xff);
          param_2 = (short *)(pcVar2 + 1);
          *pcVar2 = (char)uVar12 + (char)((uVar12 & 0xffff) / 0xff);
        }
        if (plVar28 <= plVar14) goto LAB_00167b7c;
        plVar10 = (long *)((long)plVar26 + uVar23 + 2);
        uVar17 = (int)plVar14 - iVar22;
        *(int *)((long)auStack_4090 + ((ulong)(*plVar10 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
             (int)plVar10 - iVar22;
        uVar13 = (ulong)(*plVar14 * -0x30e4432345000000) >> 0x32 & 0x3ffc;
        uVar12 = *(uint *)((long)auStack_4090 + uVar13);
        *(uint *)((long)auStack_4090 + uVar13) = uVar17;
        if ((uVar12 + 0xffff < uVar17) ||
           (plVar15 = (long *)((long)param_1 + (ulong)uVar12), (int)*plVar15 != (int)*plVar14))
        goto LAB_001677d4;
        plVar11 = (long *)((long)param_2 + 1);
        *(char *)param_2 = '\0';
        plVar26 = plVar14;
      } while( true );
    }
  }
  goto LAB_00168014;
LAB_001677d4:
  plVar10 = (long *)((long)plVar26 + uVar23 + 5);
  plVar26 = (long *)((long)plVar26 + uVar23 + 6);
  uVar12 = (int)plVar10 - iVar22;
  if (plVar28 < plVar26) goto LAB_00167b7c;
  goto LAB_001677ec;
LAB_00167b7c:
  uVar23 = (long)param_1 + ((ulong)param_3 - (long)plVar14);
  if ((char *)((long)param_2 + (uVar23 + 0xf0) / 0xff + uVar23 + 1) <= pcVar1) {
    uVar13 = uVar23 - 0xf;
    if (uVar23 < 0xf) {
      *(char *)param_2 = (char)((int)uVar23 << 4);
    }
    else {
      psVar8 = (short *)((long)param_2 + 1);
      *(char *)param_2 = -0x10;
      if (0xfe < uVar13) {
        uVar27 = (uVar23 - 0x10e) / 0xff;
        memset(psVar8,0xff,uVar27 + 1);
        uVar13 = (uVar23 - 0x10e) % 0xff;
        psVar8 = (short *)((long)param_2 + uVar27 + 2);
      }
      *(char *)psVar8 = (char)uVar13;
      param_2 = psVar8;
    }
    memcpy((char *)((long)param_2 + 1),plVar14,uVar23);
    iVar6 = ((int)(char *)((long)param_2 + 1) + (int)uVar23) - iVar6;
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
    goto LAB_001680dc;
  }
LAB_00168014:
  iVar6 = 0;
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
LAB_001680dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
}


// ===== 00168124  LZ4_compress_destSize =====

void LZ4_compress_destSize(long *param_1,short *param_2,uint *param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  short sVar4;
  ulong uVar5;
  short *psVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  char *pcVar11;
  short *psVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  short *psVar17;
  long *plVar18;
  short *psVar19;
  uint uVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  char cVar24;
  long lVar25;
  ulong *puVar26;
  ulong uVar27;
  long *plVar28;
  int iVar29;
  long *plVar30;
  long *plVar31;
  char *pcVar32;
  ulong *puVar33;
  uint auStack_4090 [4096];
  uint local_90;
  undefined2 uStack_8a;
  uint local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  memset(auStack_4090,0,0x4020);
  uVar14 = *param_3;
  uVar9 = (ulong)uVar14;
  iVar29 = 0;
  if (uVar14 < 0x7e000001) {
    iVar29 = (uint)(uVar9 * 0x8080808081 >> 0x27) + 0x10;
  }
  if (iVar29 <= param_4) {
    uVar5 = LZ4_compress_fast_extState(auStack_4090,param_1,param_2,uVar9,param_4,1);
    goto LAB_00168be4;
  }
  psVar6 = (short *)((long)param_2 + (long)param_4);
  iVar29 = (int)param_1;
  plVar31 = param_1;
  psVar19 = param_2;
  if (0x1000a < (int)uVar14) {
    uVar5 = 0;
    if ((0 < param_4) && (uVar14 < 0x7e000001)) {
      uStack_8a = 2;
      plVar16 = (long *)((long)param_1 + 2);
      plVar28 = (long *)((long)param_1 + (uVar9 - 0xb));
      plVar30 = (long *)((long)param_1 + 1);
      uVar15 = 1;
      puVar33 = (ulong *)((long)param_1 + (uVar9 - 0xc));
      *(undefined4 *)
       ((long)auStack_4090 + ((ulong)(*param_1 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) = 0;
      local_90 = uVar14;
      local_78 = uVar14;
LAB_0016832c:
      lVar25 = *plVar30;
      uVar21 = 0x41;
      uVar5 = 1;
      while( true ) {
        uVar27 = (ulong)(lVar25 * -0x30e4432345000000) >> 0x32 & 0x3ffc;
        uVar14 = *(uint *)((long)auStack_4090 + uVar27);
        lVar25 = *plVar16;
        *(uint *)((long)auStack_4090 + uVar27) = uVar15;
        if ((uVar15 <= uVar14 + 0xffff) &&
           (plVar7 = (long *)((long)param_1 + (ulong)uVar14), (int)*plVar7 == (int)*plVar30)) break;
        plVar7 = (long *)((long)plVar16 + uVar5);
        uVar5 = uVar21 >> 6;
        uVar21 = (ulong)((int)uVar21 + 1);
        uVar15 = (int)plVar16 - iVar29;
        plVar30 = plVar16;
        plVar16 = plVar7;
        if (plVar28 < plVar7) goto LAB_0016871c;
      }
      do {
        plVar16 = plVar7;
        plVar13 = plVar30;
        if ((plVar16 <= param_1) || (plVar13 <= plVar31)) break;
        plVar30 = (long *)((long)plVar13 + -1);
        plVar7 = (long *)((long)plVar16 + -1);
      } while (*(char *)((long)plVar13 + -1) == *(char *)((long)plVar16 + -1));
      uVar14 = (uint)((long)plVar13 - (long)plVar31);
      uVar5 = (long)plVar13 - (long)plVar31 & 0xffffffff;
      if ((short *)((long)psVar19 + uVar5 + (ulong)(uVar14 + 0xf0) / 0xff + 0xc) <= psVar6) {
        iVar10 = uVar14 - 0xf;
        pcVar32 = (char *)((long)psVar19 + 1);
        if (uVar14 < 0xf) {
          *(char *)psVar19 = (char)(uVar14 << 4);
        }
        else {
          *(char *)psVar19 = -0x10;
          if (0xfe < iVar10) {
            iVar1 = (int)plVar13 + 0xef;
            if (0x1fc < iVar10) {
              iVar10 = 0x1fd;
            }
            memset(pcVar32,0xff,(ulong)((uint)((iVar1 - (int)plVar31) - iVar10) / 0xff + 1));
            iVar1 = iVar1 - iVar10;
            uVar21 = (ulong)(uint)(iVar1 - (int)plVar31);
            pcVar32 = (char *)((long)psVar19 + uVar21 / 0xff + 2);
            iVar10 = ((int)plVar13 - iVar1) + (uint)(uVar21 * 0x8080808081 >> 0x27) + -0x10e;
          }
          *pcVar32 = (char)iVar10;
          pcVar32 = pcVar32 + 1;
        }
        lVar25 = 0;
        psVar12 = (short *)(pcVar32 + uVar5);
        do {
          *(undefined8 *)(pcVar32 + lVar25) = *(undefined8 *)((long)plVar31 + lVar25);
          lVar25 = lVar25 + 8;
        } while (pcVar32 + lVar25 < psVar12);
        if ((short *)((long)psVar12 + 0xb) <= psVar6) {
          do {
            puVar22 = (ulong *)((long)plVar13 + 4);
            psVar17 = psVar12 + 1;
            *psVar12 = (short)plVar13 - (short)plVar16;
            puVar26 = (ulong *)((long)plVar16 + 4);
            iVar10 = (int)puVar22;
            if (puVar22 < puVar33) {
              uVar5 = *puVar22 ^ *puVar26;
              if (uVar5 == 0) {
                puVar22 = (ulong *)((long)plVar13 + 0xc);
                puVar26 = (ulong *)((long)plVar16 + 0xc);
                goto joined_r0x00168654;
              }
              uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
              uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
              uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
              uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
              uVar5 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
            }
            else {
joined_r0x00168654:
              for (; puVar22 < puVar33; puVar22 = puVar22 + 1) {
                uVar5 = *puVar22 ^ *puVar26;
                if (uVar5 != 0) {
                  uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
                  uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
                  uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                  uVar5 = (ulong)(uint)(((int)puVar22 +
                                        (int)((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3)) -
                                       iVar10);
                  goto LAB_001685a8;
                }
                puVar26 = puVar26 + 1;
              }
              if ((puVar22 < (ulong *)((long)param_1 + (uVar9 - 8))) &&
                 ((int)*puVar26 == (int)*puVar22)) {
                puVar22 = (ulong *)((long)puVar22 + 4);
                puVar26 = (ulong *)((long)puVar26 + 4);
              }
              if ((puVar22 < (ulong *)((long)param_1 + (uVar9 - 6))) &&
                 ((short)*puVar26 == (short)*puVar22)) {
                puVar22 = (ulong *)((long)puVar22 + 2);
                puVar26 = (ulong *)((long)puVar26 + 2);
              }
              puVar23 = puVar22;
              if ((puVar22 < (ulong *)((long)param_1 + (uVar9 - 5))) &&
                 (puVar23 = (ulong *)((long)puVar22 + 1), (char)*puVar26 != (char)*puVar22)) {
                puVar23 = puVar22;
              }
              uVar5 = (ulong)(uint)((int)puVar23 - iVar10);
            }
LAB_001685a8:
            plVar31 = (long *)((long)plVar13 + uVar5 + 4);
            uVar14 = (uint)uVar5;
            if (psVar6 < (short *)((long)psVar12 + (uVar5 >> 8) + 8)) {
              uVar15 = ((int)psVar6 - (int)psVar17) * 0xff - 0x7ea;
              plVar31 = (long *)((long)plVar31 - (ulong)(uVar14 - uVar15));
              cVar24 = (char)*psVar19;
              if (uVar15 < 0xf) goto LAB_00168684;
LAB_001685d0:
              uVar14 = uVar15 - 0xf;
              *(char *)psVar19 = cVar24 + '\x0f';
              psVar17[0] = -1;
              psVar17[1] = -1;
              if (0x3fb < uVar14) {
                uVar14 = ((uVar15 - 0x40b) / 0x3fc) * 4;
                memset(psVar12 + 3,0xff,(ulong)(uVar14 + 4));
                psVar17 = (short *)((long)(psVar12 + 3) + (ulong)uVar14);
                uVar14 = (uVar15 - 0x40b) % 0x3fc;
              }
              pcVar32 = (char *)((long)psVar17 + (ulong)(uVar14 & 0xffff) / 0xff);
              *pcVar32 = (char)uVar14 + (char)((uVar14 & 0xffff) / 0xff);
              psVar19 = (short *)(pcVar32 + 1);
            }
            else {
              cVar24 = (char)*psVar19;
              uVar15 = uVar14;
              if (0xe < uVar14) goto LAB_001685d0;
LAB_00168684:
              *(char *)psVar19 = cVar24 + (char)uVar15;
              psVar19 = psVar17;
            }
            if (plVar28 <= plVar31) break;
            uVar15 = (int)plVar31 - iVar29;
            *(int *)((long)auStack_4090 +
                    ((ulong)(*(long *)((long)plVar31 + -2) * -0x30e4432345000000) >> 0x32 & 0x3ffc))
                 = (int)(long *)((long)plVar31 + -2) - iVar29;
            uVar5 = (ulong)(*plVar31 * -0x30e4432345000000) >> 0x32 & 0x3ffc;
            uVar14 = *(uint *)((long)auStack_4090 + uVar5);
            *(uint *)((long)auStack_4090 + uVar5) = uVar15;
            if ((uVar14 + 0xffff < uVar15) ||
               (plVar16 = (long *)((long)param_1 + (ulong)uVar14), (int)*plVar16 != (int)*plVar31))
            goto LAB_00168708;
            *(char *)psVar19 = '\0';
            psVar12 = (short *)((long)psVar19 + 1);
            plVar13 = plVar31;
            if (psVar6 < psVar19 + 6) break;
          } while( true );
        }
      }
      goto LAB_0016871c;
    }
    goto LAB_00168be4;
  }
  uVar5 = 0;
  if ((param_4 < 1) || (0x7e000000 < uVar14)) goto LAB_00168be4;
  uStack_8a = 3;
  local_90 = uVar14;
  local_78 = uVar14;
  if (0xc < (int)uVar14) {
    plVar30 = (long *)((long)param_1 + (long)(int)uVar14 + -0xb);
    puVar33 = (ulong *)((long)param_1 + (long)(int)uVar14 + -0xc);
    *(undefined2 *)((long)auStack_4090 + (ulong)((uint)((int)*param_1 * -0x61c8864f) >> 0x13) * 2) =
         0;
LAB_00168804:
    iVar10 = *(int *)((long)plVar31 + 1U);
    uVar5 = 0x40;
    uVar9 = 1;
    plVar16 = (long *)((long)plVar31 + 1U);
    do {
      plVar28 = (long *)((long)plVar16 + uVar9);
      if (plVar30 < plVar28) goto LAB_0016821c;
      lVar25 = (ulong)((uint)(iVar10 * -0x61c8864f) >> 0x13) * 2;
      uVar2 = *(ushort *)((long)auStack_4090 + lVar25);
      sVar4 = (short)param_1;
      iVar10 = (int)*plVar28;
      *(short *)((long)auStack_4090 + lVar25) = (short)plVar16 - sVar4;
      plVar7 = (long *)((long)param_1 + (ulong)uVar2);
      lVar25 = *plVar16;
      uVar9 = uVar5 >> 6;
      uVar5 = (ulong)((int)uVar5 + 1);
      plVar13 = plVar16;
      plVar16 = plVar28;
    } while ((int)*plVar7 != (int)lVar25);
    do {
      plVar16 = plVar7;
      plVar28 = plVar13;
      if ((plVar16 <= param_1) || (plVar28 <= plVar31)) break;
      plVar13 = (long *)((long)plVar28 + -1);
      plVar7 = (long *)((long)plVar16 + -1);
    } while (*(char *)((long)plVar28 + -1) == *(char *)((long)plVar16 + -1));
    uVar15 = (uint)((long)plVar28 - (long)plVar31);
    uVar9 = (long)plVar28 - (long)plVar31 & 0xffffffff;
    if ((short *)((long)psVar19 + uVar9 + (ulong)(uVar15 + 0xf0) / 0xff + 0xc) <= psVar6) {
      iVar10 = uVar15 - 0xf;
      plVar7 = (long *)((long)psVar19 + 1);
      if (uVar15 < 0xf) {
        *(char *)psVar19 = (char)(uVar15 << 4);
      }
      else {
        *(char *)psVar19 = -0x10;
        if (0xfe < iVar10) {
          iVar1 = (int)plVar28 + 0xef;
          if (0x1fc < iVar10) {
            iVar10 = 0x1fd;
          }
          memset(plVar7,0xff,(ulong)((uint)((iVar1 - (int)plVar31) - iVar10) / 0xff + 1));
          iVar1 = iVar1 - iVar10;
          uVar5 = (ulong)(uint)(iVar1 - (int)plVar31);
          plVar7 = (long *)((long)psVar19 + uVar5 / 0xff + 2);
          iVar10 = ((int)plVar28 - iVar1) + (uint)(uVar5 * 0x8080808081 >> 0x27) + -0x10e;
        }
        *(char *)plVar7 = (char)iVar10;
        plVar7 = (long *)((long)plVar7 + 1);
      }
      plVar13 = (long *)((long)plVar7 + uVar9);
      plVar18 = plVar31;
      do {
        plVar8 = plVar7 + 1;
        *plVar7 = *plVar18;
        plVar7 = plVar8;
        plVar18 = plVar18 + 1;
      } while (plVar8 < plVar13);
      psVar12 = psVar19;
      if ((short *)((long)plVar13 + 0xb) <= psVar6) {
        do {
          puVar22 = (ulong *)((long)plVar28 + 4);
          psVar19 = (short *)((long)plVar13 + 2);
          *(short *)plVar13 = (short)plVar28 - (short)plVar16;
          puVar26 = (ulong *)((long)plVar16 + 4);
          iVar10 = (int)puVar22;
          if (puVar22 < puVar33) {
            uVar9 = *puVar22 ^ *puVar26;
            if (uVar9 == 0) {
              puVar22 = (ulong *)((long)plVar28 + 0xc);
              puVar26 = (ulong *)((long)plVar16 + 0xc);
              goto joined_r0x00168b00;
            }
            uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
          }
          else {
joined_r0x00168b00:
            for (; puVar22 < puVar33; puVar22 = puVar22 + 1) {
              uVar9 = *puVar22 ^ *puVar26;
              if (uVar9 != 0) {
                uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
                uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
                uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
                uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
                uVar9 = (ulong)(uint)(((int)puVar22 +
                                      (int)((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3)) -
                                     iVar10);
                goto LAB_00168a60;
              }
              puVar26 = puVar26 + 1;
            }
            if ((puVar22 < (ulong *)((long)param_1 + (long)(int)uVar14 + -8)) &&
               ((int)*puVar26 == (int)*puVar22)) {
              puVar22 = (ulong *)((long)puVar22 + 4);
              puVar26 = (ulong *)((long)puVar26 + 4);
            }
            if ((puVar22 < (ulong *)((long)param_1 + (long)(int)uVar14 + -6)) &&
               ((short)*puVar26 == (short)*puVar22)) {
              puVar22 = (ulong *)((long)puVar22 + 2);
              puVar26 = (ulong *)((long)puVar26 + 2);
            }
            puVar23 = puVar22;
            if ((puVar22 < (ulong *)((long)param_1 + (long)(int)uVar14 + -5)) &&
               (puVar23 = (ulong *)((long)puVar22 + 1), (char)*puVar26 != (char)*puVar22)) {
              puVar23 = puVar22;
            }
            uVar9 = (ulong)(uint)((int)puVar23 - iVar10);
          }
LAB_00168a60:
          plVar31 = (long *)((long)plVar28 + uVar9 + 4);
          uVar15 = (uint)uVar9;
          if (psVar6 < (short *)((long)plVar13 + (uVar9 >> 8) + 8)) {
            uVar20 = ((int)psVar6 - (int)psVar19) * 0xff - 0x7ea;
            plVar31 = (long *)((long)plVar31 - (ulong)(uVar15 - uVar20));
            cVar24 = (char)*psVar12;
            if (uVar20 < 0xf) goto LAB_00168b30;
LAB_00168a88:
            uVar15 = uVar20 - 0xf;
            *(char *)psVar12 = cVar24 + '\x0f';
            psVar19[0] = -1;
            psVar19[1] = -1;
            if (0x3fb < uVar15) {
              uVar15 = ((uVar20 - 0x40b) / 0x3fc) * 4;
              memset((short *)((long)plVar13 + 6),0xff,(ulong)(uVar15 + 4));
              psVar19 = (short *)((long)plVar13 + 6 + (ulong)uVar15);
              uVar15 = (uVar20 - 0x40b) % 0x3fc;
            }
            pcVar32 = (char *)((long)psVar19 + (ulong)(uVar15 & 0xffff) / 0xff);
            psVar19 = (short *)(pcVar32 + 1);
            *pcVar32 = (char)uVar15 + (char)((uVar15 & 0xffff) / 0xff);
          }
          else {
            cVar24 = (char)*psVar12;
            uVar20 = uVar15;
            if (0xe < uVar15) goto LAB_00168a88;
LAB_00168b30:
            *(char *)psVar12 = cVar24 + (char)uVar20;
          }
          if (plVar30 <= plVar31) break;
          *(short *)((long)auStack_4090 +
                    (ulong)((uint)(*(int *)((long)plVar31 + -2) * -0x61c8864f) >> 0x13) * 2) =
               (short)(int *)((long)plVar31 + -2) - sVar4;
          lVar25 = (ulong)((uint)((int)*plVar31 * -0x61c8864f) >> 0x13) * 2;
          uVar2 = *(ushort *)((long)auStack_4090 + lVar25);
          *(short *)((long)auStack_4090 + lVar25) = (short)plVar31 - sVar4;
          plVar16 = (long *)((long)param_1 + (ulong)uVar2);
          if ((int)*plVar16 != (int)*plVar31) goto LAB_00168804;
          *(char *)psVar19 = '\0';
          plVar13 = (long *)((long)psVar19 + 1);
          plVar28 = plVar31;
          psVar12 = psVar19;
          if (psVar6 < psVar19 + 6) break;
        } while( true );
      }
    }
  }
LAB_0016821c:
  pcVar32 = (char *)((long)param_1 + ((long)(int)uVar14 - (long)plVar31));
  if (psVar6 < (short *)((long)psVar19 + (long)(pcVar32 + (ulong)(pcVar32 + 0xf0) / 0xff + 1))) {
    pcVar32 = (char *)((long)psVar6 +
                      (~(ulong)psVar19 - (ulong)((long)psVar6 + ~(ulong)psVar19 + 0xf0) / 0xff));
  }
  if (pcVar32 < (char *)0xf) goto LAB_00168bb0;
LAB_00168768:
  pcVar11 = pcVar32 + -0xf;
  psVar6 = (short *)((long)psVar19 + 1);
  *(char *)psVar19 = -0x10;
  if ((char *)0xfe < pcVar11) {
    uVar9 = (ulong)(pcVar32 + -0x10e) / 0xff;
    memset(psVar6,0xff,uVar9 + 1);
    pcVar11 = (char *)((ulong)(pcVar32 + -0x10e) % 0xff);
    psVar6 = (short *)((long)psVar19 + uVar9 + 2);
  }
  *(char *)psVar6 = (char)pcVar11;
  psVar19 = psVar6;
  goto LAB_00168bb8;
LAB_00168708:
  plVar30 = (long *)((long)plVar31 + 1);
  plVar16 = (long *)((long)plVar31 + 2);
  uVar15 = (int)plVar30 - iVar29;
  if (plVar28 < plVar16) goto LAB_0016871c;
  goto LAB_0016832c;
LAB_0016871c:
  pcVar32 = (char *)((long)param_1 + (uVar9 - (long)plVar31));
  if (psVar6 < (short *)((long)psVar19 + (long)(pcVar32 + (ulong)(pcVar32 + 0xf0) / 0xff + 1))) {
    pcVar32 = (char *)((long)psVar6 +
                      (~(ulong)psVar19 - (ulong)((long)psVar6 + ~(ulong)psVar19 + 0xf0) / 0xff));
  }
  if ((char *)0xe < pcVar32) goto LAB_00168768;
LAB_00168bb0:
  *(char *)psVar19 = (char)((int)pcVar32 << 4);
LAB_00168bb8:
  memcpy((char *)((long)psVar19 + 1),plVar31,(size_t)pcVar32);
  *param_3 = ((int)plVar31 + (int)pcVar32) - iVar29;
  uVar5 = (ulong)(uint)(((int)(char *)((long)psVar19 + 1) + (int)pcVar32) - (int)param_2);
LAB_00168be4:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00168c24  LZ4_createStream =====

void * LZ4_createStream(void)

{
  void *__s;
  
  __s = malloc(0x4020);
  if ((__s != (void *)0x0) && (((ulong)__s & 7) == 0)) {
    memset(__s,0,0x4020);
    return __s;
  }
  return __s;
}


// ===== 00168c78  LZ4_resetStream =====

void LZ4_resetStream(void *param_1)

{
  memset(param_1,0,0x4020);
  return;
}


// ===== 00168c94  LZ4_resetStream_fast =====

void LZ4_resetStream_fast(void *param_1)

{
  short sVar1;
  uint uVar2;
  
  if (*(short *)((long)param_1 + 0x4004) != 0) {
    memset(param_1,0,0x4020);
    return;
  }
  sVar1 = *(short *)((long)param_1 + 0x4006);
  if (sVar1 == 2) {
    uVar2 = *(uint *)((long)param_1 + 0x4000);
    if (0x40000000 < uVar2) goto LAB_00168d10;
  }
  else {
    if (sVar1 != 0) {
LAB_00168d10:
      memset(param_1,0,0x4000);
      *(undefined4 *)((long)param_1 + 0x4000) = 0;
      *(short *)((long)param_1 + 0x4006) = 0;
      goto LAB_00168d40;
    }
    uVar2 = *(uint *)((long)param_1 + 0x4000);
  }
  if (uVar2 != 0) {
    *(uint *)((long)param_1 + 0x4000) = uVar2 + 0x10000;
  }
LAB_00168d40:
  *(undefined4 *)((long)param_1 + 0x4018) = 0;
  *(undefined8 *)((long)param_1 + 0x4010) = 0;
  *(undefined8 *)((long)param_1 + 0x4008) = 0;
  return;
}


// ===== 00168d64  LZ4_freeStream =====

undefined8 LZ4_freeStream(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return 0;
}


// ===== 00168d80  LZ4_loadDict =====

int LZ4_loadDict(void *param_1,long *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  
  lVar1 = (long)param_2 + (long)param_3;
  memset(param_1,0,0x4020);
  iVar2 = *(int *)((long)param_1 + 0x4000);
  plVar6 = (long *)(lVar1 - 0x10000U);
  if (param_3 < 0x10001) {
    plVar6 = param_2;
  }
  iVar3 = (int)lVar1 - (int)plVar6;
  *(long **)((long)param_1 + 0x4008) = plVar6;
  *(int *)((long)param_1 + 0x4018) = iVar3;
  *(int *)((long)param_1 + 0x4000) = iVar2 + 0x10000;
  *(undefined2 *)((long)param_1 + 0x4006) = 2;
  iVar4 = 0;
  if (7 < param_3) {
    iVar4 = iVar3;
    if (plVar6 <= (long *)(lVar1 - 8U)) {
      do {
        plVar5 = (long *)((long)plVar6 + 3);
        *(int *)((long)param_1 + ((ulong)(*plVar6 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
             (int)plVar6 - ((int)(long *)(lVar1 - 0x10000U) - iVar2);
        plVar6 = plVar5;
      } while (plVar5 <= (long *)(lVar1 - 8U));
      iVar4 = *(int *)((long)param_1 + 0x4018);
    }
  }
  return iVar4;
}


// ===== 00168e50  LZ4_attach_dictionary =====

void LZ4_attach_dictionary(void *param_1,long param_2)

{
  short sVar1;
  uint uVar2;
  
  if (*(short *)((long)param_1 + 0x4004) != 0) {
    memset(param_1,0,0x4020);
    goto joined_r0x00168f30;
  }
  sVar1 = *(short *)((long)param_1 + 0x4006);
  if (sVar1 == 2) {
    uVar2 = *(uint *)((long)param_1 + 0x4000);
    if (uVar2 < 0x40000001) goto LAB_00168f0c;
LAB_00168eec:
    memset(param_1,0,0x4000);
    *(undefined4 *)((long)param_1 + 0x4000) = 0;
    *(short *)((long)param_1 + 0x4006) = 0;
  }
  else {
    if (sVar1 != 0) goto LAB_00168eec;
    uVar2 = *(uint *)((long)param_1 + 0x4000);
LAB_00168f0c:
    if (uVar2 != 0) {
      *(uint *)((long)param_1 + 0x4000) = uVar2 + 0x10000;
    }
  }
  *(undefined4 *)((long)param_1 + 0x4018) = 0;
  *(undefined8 *)((long)param_1 + 0x4010) = 0;
  *(undefined8 *)((long)param_1 + 0x4008) = 0;
joined_r0x00168f30:
  if (param_2 != 0) {
    if (*(int *)((long)param_1 + 0x4000) == 0) {
      *(int *)((long)param_1 + 0x4000) = 0x10000;
    }
    *(long *)((long)param_1 + 0x4010) = param_2;
    return;
  }
  *(undefined8 *)((long)param_1 + 0x4010) = 0;
  return;
}


// ===== 00168f48  LZ4_compress_fast_continue =====

int LZ4_compress_fast_continue
              (void *param_1,ulong *param_2,short *param_3,uint param_4,int param_5,int param_6)

{
  char *pcVar1;
  uint *puVar2;
  undefined1 (*pauVar3) [16];
  ulong *puVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  ulong *puVar8;
  short *psVar9;
  ulong *puVar10;
  int iVar11;
  void *__src;
  ulong *puVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  int *piVar17;
  long *plVar18;
  uint uVar19;
  uint uVar20;
  ulong *puVar21;
  uint uVar22;
  uint uVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong *puVar27;
  int *piVar28;
  long lVar29;
  ulong *puVar30;
  ulong uVar31;
  int iVar32;
  int iVar33;
  ulong *puVar34;
  int iVar35;
  ulong *puVar36;
  int iVar37;
  long lVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint local_68;
  
  if (*(short *)((long)param_1 + 0x4004) != 0) {
    return 0;
  }
  puVar2 = (uint *)((long)param_1 + 0x4000);
  local_68 = *puVar2;
  puVar27 = *(ulong **)((long)param_1 + 0x4008);
  uVar14 = (ulong)*(uint *)((long)param_1 + 0x4018);
  puVar10 = (ulong *)((long)puVar27 + uVar14);
  if (0x80000000 < local_68 + param_4) {
    lVar15 = 0;
    iVar7 = local_68 - 0x10000;
    do {
      pauVar3 = (undefined1 (*) [16])((long)param_1 + lVar15);
      lVar15 = lVar15 + 0x20;
      auVar39._4_4_ = iVar7;
      auVar39._0_4_ = iVar7;
      auVar39._8_4_ = iVar7;
      auVar39._12_4_ = iVar7;
      auVar39 = NEON_uqsub(*pauVar3,auVar39,4);
      auVar40._4_4_ = iVar7;
      auVar40._0_4_ = iVar7;
      auVar40._8_4_ = iVar7;
      auVar40._12_4_ = iVar7;
      auVar40 = NEON_uqsub(pauVar3[1],auVar40,4);
      *(long *)(*pauVar3 + 8) = auVar39._8_8_;
      *(long *)*pauVar3 = auVar39._0_8_;
      *(long *)(pauVar3[1] + 8) = auVar40._8_8_;
      *(long *)pauVar3[1] = auVar40._0_8_;
    } while (lVar15 != 0x4000);
    uVar14 = (ulong)*(uint *)((long)param_1 + 0x4018);
    *puVar2 = 0x10000;
    if (0x10000 < *(uint *)((long)param_1 + 0x4018)) {
      uVar14 = 0x10000;
      *(undefined4 *)((long)param_1 + 0x4018) = 0x10000;
    }
    puVar27 = (ulong *)((long)puVar10 - uVar14);
    *(ulong **)((long)param_1 + 0x4008) = puVar27;
    local_68 = 0x10000;
  }
  if (param_6 < 2) {
    param_6 = 1;
  }
  if ((puVar10 != param_2) && ((int)uVar14 - 1U < 3)) {
    uVar14 = 0;
    *(undefined4 *)((long)param_1 + 0x4018) = 0;
    *(ulong **)((long)param_1 + 0x4008) = param_2;
    puVar10 = param_2;
    puVar27 = param_2;
  }
  lVar15 = (long)(int)param_4;
  puVar4 = (ulong *)((long)param_2 + lVar15);
  if ((puVar4 < puVar10) && (puVar27 < puVar4)) {
    uVar19 = (int)puVar10 - (int)puVar4;
    if (0xffff < uVar19) {
      uVar19 = 0x10000;
    }
    uVar20 = 0;
    if (3 < uVar19) {
      uVar20 = uVar19;
    }
    uVar14 = (ulong)uVar20;
    puVar27 = (ulong *)((long)puVar10 - uVar14);
    *(uint *)((long)param_1 + 0x4018) = uVar20;
    *(ulong **)((long)param_1 + 0x4008) = puVar27;
  }
  uVar19 = (uint)uVar14;
  iVar7 = (int)param_3;
  if (puVar10 == param_2) {
    lVar38 = (long)param_2 - (ulong)local_68;
    iVar32 = (int)lVar38;
    if (((uVar14 & 0xffff0000) != 0) || (local_68 <= uVar19)) {
      if (0x7e000000 < param_4) {
        return 0;
      }
      pcVar1 = (char *)((long)param_3 + (long)param_5);
      *(uint *)((long)param_1 + 0x4018) = uVar19 + param_4;
      *puVar2 = local_68 + param_4;
      *(undefined2 *)((long)param_1 + 0x4006) = 2;
      if ((int)param_4 < 0xd) {
LAB_001693e0:
        uVar14 = (long)puVar4 - (long)param_2;
        if (pcVar1 < (char *)((long)param_3 + (uVar14 + 0xf0) / 0xff + uVar14 + 1)) {
          return 0;
        }
        uVar26 = uVar14 - 0xf;
        if (uVar14 < 0xf) {
          *(char *)param_3 = (char)((int)uVar14 << 4);
        }
        else {
          psVar9 = (short *)((long)param_3 + 1);
          *(char *)param_3 = -0x10;
          if (0xfe < uVar26) {
            uVar31 = (uVar14 - 0x10e) / 0xff;
            memset(psVar9,0xff,uVar31 + 1);
            uVar26 = (uVar14 - 0x10e) % 0xff;
            psVar9 = (short *)((long)param_3 + uVar31 + 2);
          }
          *(char *)psVar9 = (char)uVar26;
          param_3 = psVar9;
        }
        memcpy((char *)((long)param_3 + 1),param_2,uVar14);
        return ((int)(char *)((long)param_3 + 1) + (int)uVar14) - iVar7;
      }
      piVar17 = (int *)((long)param_2 - uVar14);
      puVar21 = (ulong *)((long)param_2 + lVar15 + -0xb);
      puVar27 = (ulong *)((long)param_2 + 2);
      puVar10 = (ulong *)((long)param_2 + 1);
      uVar19 = local_68 + 1;
      *(uint *)((long)param_1 + (*param_2 * -0x30e4432345000000 >> 0x32 & 0x3ffc)) = local_68;
LAB_0016aef0:
      uVar14 = *puVar10;
      iVar37 = param_6 << 6;
      while( true ) {
        uVar26 = uVar14 * -0x30e4432345000000 >> 0x32 & 0x3ffc;
        uVar20 = *(uint *)((long)param_1 + uVar26);
        uVar14 = *puVar27;
        *(uint *)((long)param_1 + uVar26) = uVar19;
        if ((uVar19 <= uVar20 + 0xffff) &&
           (piVar6 = (int *)(lVar38 + (ulong)uVar20), *piVar6 == (int)*puVar10)) break;
        puVar12 = (ulong *)((long)puVar27 + (long)(iVar37 >> 6));
        uVar19 = (int)puVar27 - iVar32;
        iVar37 = iVar37 + 1;
        puVar10 = puVar27;
        puVar27 = puVar12;
        if (puVar21 < puVar12) goto LAB_001693e0;
      }
      do {
        piVar28 = piVar6;
        puVar27 = puVar10;
        if ((piVar28 <= piVar17) || (puVar27 <= param_2)) break;
        puVar10 = (ulong *)((long)puVar27 + -1);
        piVar6 = (int *)((long)piVar28 + -1);
      } while (*(char *)((long)puVar27 + -1) == *(char *)((long)piVar28 + -1));
      uVar14 = (long)puVar27 - (long)param_2 & 0xffffffff;
      if (pcVar1 < (char *)((long)param_3 + uVar14 / 0xff + uVar14 + 9)) {
        return 0;
      }
      uVar19 = (uint)((long)puVar27 - (long)param_2);
      iVar37 = uVar19 - 0xf;
      puVar10 = (ulong *)((long)param_3 + 1);
      if (uVar19 < 0xf) {
        *(char *)param_3 = (char)(uVar19 << 4);
      }
      else {
        *(char *)param_3 = -0x10;
        if (0xfe < iVar37) {
          if (0x1fc < iVar37) {
            iVar37 = 0x1fd;
          }
          iVar13 = (int)puVar27 + 0xef;
          iVar11 = (int)param_2;
          memset(puVar10,0xff,(ulong)((uint)(iVar13 - (iVar37 + iVar11)) / 0xff + 1));
          uVar19 = (iVar13 - iVar37) - iVar11;
          puVar10 = (ulong *)((long)param_3 + (ulong)uVar19 / 0xff + 2);
          iVar37 = ((int)puVar27 - iVar11) + uVar19 / 0xff + -0x10e;
        }
        *(char *)puVar10 = (char)iVar37;
        puVar10 = (ulong *)((long)puVar10 + 1);
      }
      puVar12 = (ulong *)((long)puVar10 + uVar14);
      do {
        puVar25 = puVar10 + 1;
        *puVar10 = *param_2;
        puVar10 = puVar25;
        param_2 = param_2 + 1;
        psVar9 = param_3;
      } while (puVar25 < puVar12);
      do {
        puVar10 = (ulong *)((long)puVar27 + 4);
        param_3 = (short *)((long)puVar12 + 2);
        *(short *)puVar12 = (short)puVar27 - (short)piVar28;
        puVar25 = (ulong *)(piVar28 + 1);
        iVar37 = (int)puVar10;
        if (puVar10 < (ulong *)((long)puVar4 - 0xcU)) {
          uVar14 = *puVar10 ^ *puVar25;
          if (uVar14 == 0) {
            puVar10 = (ulong *)((long)puVar27 + 0xc);
            puVar25 = (ulong *)(piVar28 + 3);
            goto joined_r0x0016b290;
          }
          uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
        }
        else {
joined_r0x0016b290:
          for (; puVar10 < (ulong *)((long)puVar4 - 0xcU); puVar10 = puVar10 + 1) {
            uVar14 = *puVar10 ^ *puVar25;
            if (uVar14 != 0) {
              uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
              uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
              uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = (ulong)(uint)(((int)puVar10 +
                                     (int)((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3)) -
                                    iVar37);
              goto LAB_0016b160;
            }
            puVar25 = puVar25 + 1;
          }
          if ((puVar10 < puVar4 + -1) && ((int)*puVar25 == (int)*puVar10)) {
            puVar10 = (ulong *)((long)puVar10 + 4);
            puVar25 = (ulong *)((long)puVar25 + 4);
          }
          if ((puVar10 < (ulong *)((long)puVar4 - 6U)) && ((short)*puVar25 == (short)*puVar10)) {
            puVar10 = (ulong *)((long)puVar10 + 2);
            puVar25 = (ulong *)((long)puVar25 + 2);
          }
          puVar30 = puVar10;
          if ((puVar10 < (ulong *)((long)puVar4 - 5U)) &&
             (puVar30 = (ulong *)((long)puVar10 + 1), (char)*puVar25 != (char)*puVar10)) {
            puVar30 = puVar10;
          }
          uVar14 = (ulong)(uint)((int)puVar30 - iVar37);
        }
LAB_0016b160:
        if (pcVar1 < (char *)((long)puVar12 + (uVar14 >> 8) + 8)) {
          return 0;
        }
        uVar20 = (uint)uVar14;
        uVar19 = uVar20 - 0xf;
        param_2 = (ulong *)((long)puVar27 + uVar14 + 4);
        if (uVar20 < 0xf) {
          *(char *)psVar9 = (char)*psVar9 + (char)uVar14;
        }
        else {
          *(char *)psVar9 = (char)*psVar9 + '\x0f';
          param_3[0] = -1;
          param_3[1] = -1;
          if (0x3fb < uVar19) {
            uVar19 = ((uVar20 - 0x40b) / 0x3fc) * 4;
            memset((short *)((long)puVar12 + 6),0xff,(ulong)(uVar19 + 4));
            param_3 = (short *)((long)puVar12 + 6 + (ulong)uVar19);
            uVar19 = (uVar20 - 0x40b) % 0x3fc;
          }
          pcVar5 = (char *)((long)param_3 + (ulong)(uVar19 & 0xffff) / 0xff);
          param_3 = (short *)(pcVar5 + 1);
          *pcVar5 = (char)uVar19 + (char)((uVar19 & 0xffff) / 0xff);
        }
        if (puVar21 <= param_2) goto LAB_001693e0;
        plVar18 = (long *)((long)puVar27 + uVar14 + 2);
        uVar20 = (int)param_2 - iVar32;
        *(int *)((long)param_1 + ((ulong)(*plVar18 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
             (int)plVar18 - iVar32;
        uVar26 = *param_2 * -0x30e4432345000000 >> 0x32 & 0x3ffc;
        uVar19 = *(uint *)((long)param_1 + uVar26);
        *(uint *)((long)param_1 + uVar26) = uVar20;
        if ((uVar19 + 0xffff < uVar20) ||
           (piVar28 = (int *)(lVar38 + (ulong)uVar19), *piVar28 != (int)*param_2))
        goto LAB_0016aed8;
        puVar12 = (ulong *)((long)param_3 + 1);
        *(char *)param_3 = '\0';
        puVar27 = param_2;
        psVar9 = param_3;
      } while( true );
    }
    if (0x7e000000 < param_4) {
      return 0;
    }
    pcVar1 = (char *)((long)param_3 + (long)param_5);
    *(uint *)((long)param_1 + 0x4018) = uVar19 + param_4;
    *puVar2 = local_68 + param_4;
    *(undefined2 *)((long)param_1 + 0x4006) = 2;
    if ((int)param_4 < 0xd) {
LAB_00169120:
      uVar14 = (long)puVar4 - (long)param_2;
      if (pcVar1 < (char *)((long)param_3 + (uVar14 + 0xf0) / 0xff + uVar14 + 1)) {
        return 0;
      }
      uVar26 = uVar14 - 0xf;
      if (uVar14 < 0xf) {
        *(char *)param_3 = (char)((int)uVar14 << 4);
      }
      else {
        psVar9 = (short *)((long)param_3 + 1);
        *(char *)param_3 = -0x10;
        if (0xfe < uVar26) {
          uVar31 = (uVar14 - 0x10e) / 0xff;
          memset(psVar9,0xff,uVar31 + 1);
          uVar26 = (uVar14 - 0x10e) % 0xff;
          psVar9 = (short *)((long)param_3 + uVar31 + 2);
        }
        *(char *)psVar9 = (char)uVar26;
        param_3 = psVar9;
      }
      memcpy((char *)((long)param_3 + 1),param_2,uVar14);
      return ((int)(char *)((long)param_3 + 1) + (int)uVar14) - iVar7;
    }
    piVar17 = (int *)((long)param_2 - uVar14);
    puVar21 = (ulong *)((long)param_2 + lVar15 + -0xb);
    puVar27 = (ulong *)((long)param_2 + 2);
    puVar10 = (ulong *)((long)param_2 + 1);
    uVar20 = local_68 + 1;
    *(uint *)((long)param_1 + (*param_2 * -0x30e4432345000000 >> 0x32 & 0x3ffc)) = local_68;
LAB_0016aa7c:
    uVar14 = *puVar10;
    iVar37 = param_6 << 6;
    while( true ) {
      uVar26 = uVar14 * -0x30e4432345000000 >> 0x32 & 0x3ffc;
      uVar22 = *(uint *)((long)param_1 + uVar26);
      uVar14 = *puVar27;
      *(uint *)((long)param_1 + uVar26) = uVar20;
      if (((local_68 - uVar19 <= uVar22) && (uVar20 <= uVar22 + 0xffff)) &&
         (piVar6 = (int *)(lVar38 + (ulong)uVar22),
         *(int *)(lVar38 + (ulong)uVar22) == (int)*puVar10)) break;
      puVar12 = (ulong *)((long)puVar27 + (long)(iVar37 >> 6));
      uVar20 = (int)puVar27 - iVar32;
      iVar37 = iVar37 + 1;
      puVar10 = puVar27;
      puVar27 = puVar12;
      if (puVar21 < puVar12) goto LAB_00169120;
    }
    do {
      puVar27 = puVar10;
      piVar28 = piVar6;
      if ((piVar28 <= piVar17) || (puVar27 <= param_2)) break;
      piVar6 = (int *)((long)piVar28 + -1);
      puVar10 = (ulong *)((long)puVar27 + -1);
    } while (*(char *)((long)puVar27 + -1) == *(char *)((long)piVar28 + -1));
    uVar14 = (long)puVar27 - (long)param_2 & 0xffffffff;
    if (pcVar1 < (char *)((long)param_3 + uVar14 / 0xff + uVar14 + 9)) {
      return 0;
    }
    uVar20 = (uint)((long)puVar27 - (long)param_2);
    iVar37 = uVar20 - 0xf;
    puVar10 = (ulong *)((long)param_3 + 1);
    if (uVar20 < 0xf) {
      *(char *)param_3 = (char)(uVar20 << 4);
    }
    else {
      *(char *)param_3 = -0x10;
      if (0xfe < iVar37) {
        if (0x1fc < iVar37) {
          iVar37 = 0x1fd;
        }
        iVar13 = (int)puVar27 + 0xef;
        iVar11 = (int)param_2;
        memset(puVar10,0xff,(ulong)((uint)(iVar13 - (iVar37 + iVar11)) / 0xff + 1));
        uVar20 = (iVar13 - iVar37) - iVar11;
        puVar10 = (ulong *)((long)param_3 + (ulong)uVar20 / 0xff + 2);
        iVar37 = ((int)puVar27 - iVar11) + uVar20 / 0xff + -0x10e;
      }
      *(char *)puVar10 = (char)iVar37;
      puVar10 = (ulong *)((long)puVar10 + 1);
    }
    puVar12 = (ulong *)((long)puVar10 + uVar14);
    do {
      puVar25 = puVar10 + 1;
      *puVar10 = *param_2;
      puVar10 = puVar25;
      param_2 = param_2 + 1;
      psVar9 = param_3;
    } while (puVar25 < puVar12);
    do {
      puVar10 = (ulong *)((long)puVar27 + 4);
      param_3 = (short *)((long)puVar12 + 2);
      *(short *)puVar12 = (short)puVar27 - (short)piVar28;
      puVar25 = (ulong *)(piVar28 + 1);
      iVar37 = (int)puVar10;
      if (puVar10 < (ulong *)((long)puVar4 - 0xcU)) {
        uVar14 = *puVar10 ^ *puVar25;
        if (uVar14 == 0) {
          puVar10 = (ulong *)((long)puVar27 + 0xc);
          puVar25 = (ulong *)(piVar28 + 3);
          goto joined_r0x0016ae58;
        }
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
      }
      else {
joined_r0x0016ae58:
        for (; puVar10 < (ulong *)((long)puVar4 - 0xcU); puVar10 = puVar10 + 1) {
          uVar14 = *puVar10 ^ *puVar25;
          if (uVar14 != 0) {
            uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
            uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
            uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar14 = (ulong)(uint)(((int)puVar10 +
                                   (int)((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3)) -
                                  iVar37);
            goto LAB_0016ad10;
          }
          puVar25 = puVar25 + 1;
        }
        if ((puVar10 < puVar4 + -1) && ((int)*puVar25 == (int)*puVar10)) {
          puVar10 = (ulong *)((long)puVar10 + 4);
          puVar25 = (ulong *)((long)puVar25 + 4);
        }
        if ((puVar10 < (ulong *)((long)puVar4 - 6U)) && ((short)*puVar25 == (short)*puVar10)) {
          puVar10 = (ulong *)((long)puVar10 + 2);
          puVar25 = (ulong *)((long)puVar25 + 2);
        }
        puVar30 = puVar10;
        if ((puVar10 < (ulong *)((long)puVar4 - 5U)) &&
           (puVar30 = (ulong *)((long)puVar10 + 1), (char)*puVar25 != (char)*puVar10)) {
          puVar30 = puVar10;
        }
        uVar14 = (ulong)(uint)((int)puVar30 - iVar37);
      }
LAB_0016ad10:
      if (pcVar1 < (char *)((long)puVar12 + (uVar14 >> 8) + 8)) {
        return 0;
      }
      uVar22 = (uint)uVar14;
      uVar20 = uVar22 - 0xf;
      param_2 = (ulong *)((long)puVar27 + uVar14 + 4);
      if (uVar22 < 0xf) {
        *(char *)psVar9 = (char)*psVar9 + (char)uVar14;
      }
      else {
        *(char *)psVar9 = (char)*psVar9 + '\x0f';
        param_3[0] = -1;
        param_3[1] = -1;
        if (0x3fb < uVar20) {
          uVar20 = ((uVar22 - 0x40b) / 0x3fc) * 4;
          memset((short *)((long)puVar12 + 6),0xff,(ulong)(uVar20 + 4));
          param_3 = (short *)((long)puVar12 + 6 + (ulong)uVar20);
          uVar20 = (uVar22 - 0x40b) % 0x3fc;
        }
        pcVar5 = (char *)((long)param_3 + (ulong)(uVar20 & 0xffff) / 0xff);
        param_3 = (short *)(pcVar5 + 1);
        *pcVar5 = (char)uVar20 + (char)((uVar20 & 0xffff) / 0xff);
      }
      if (puVar21 <= param_2) goto LAB_00169120;
      plVar18 = (long *)((long)puVar27 + uVar14 + 2);
      *(int *)((long)param_1 + ((ulong)(*plVar18 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
           (int)plVar18 - iVar32;
      uVar22 = (int)param_2 - iVar32;
      uVar26 = *param_2 * -0x30e4432345000000 >> 0x32 & 0x3ffc;
      uVar20 = *(uint *)((long)param_1 + uVar26);
      *(uint *)((long)param_1 + uVar26) = uVar22;
      if (((uVar20 < local_68 - uVar19) || (uVar20 + 0xffff < uVar22)) ||
         (piVar28 = (int *)(lVar38 + (ulong)uVar20), *piVar28 != (int)*param_2)) goto LAB_0016aa64;
      puVar12 = (ulong *)((long)param_3 + 1);
      *(char *)param_3 = '\0';
      puVar27 = param_2;
      psVar9 = param_3;
    } while( true );
  }
  __src = *(void **)((long)param_1 + 0x4010);
  if (__src == (void *)0x0) {
    lVar38 = -(ulong)local_68;
    lVar29 = (long)param_2 - (ulong)local_68;
    iVar32 = (int)lVar29;
    if ((uVar19 >> 0x10 == 0) && (uVar19 < local_68)) {
      if (0x7e000000 < param_4) {
LAB_0016947c:
        iVar7 = 0;
        goto LAB_0016bac4;
      }
      pcVar1 = (char *)((long)param_3 + (long)param_5);
      *(uint *)((long)param_1 + 0x4018) = uVar19 + param_4;
      *puVar2 = local_68 + param_4;
      *(undefined2 *)((long)param_1 + 0x4006) = 2;
      puVar10 = param_2;
      if (0xc < (int)param_4) {
        lVar38 = (long)puVar27 + lVar38 + uVar14;
        puVar12 = (ulong *)((long)param_2 + 2);
        puVar36 = (ulong *)((long)puVar4 - 5);
        puVar25 = (ulong *)((long)param_2 + lVar15 + -0xb);
        puVar21 = (ulong *)((long)param_2 + 1);
        uVar20 = local_68 + 1;
        puVar30 = (ulong *)((long)puVar4 - 0xc);
        *(uint *)((long)param_1 + (*param_2 * -0x30e4432345000000 >> 0x32 & 0x3ffc)) = local_68;
LAB_00169cd4:
        uVar26 = *puVar21;
        iVar37 = param_6 << 6;
        while( true ) {
          uVar31 = uVar26 * -0x30e4432345000000 >> 0x32 & 0x3ffc;
          uVar22 = *(uint *)((long)param_1 + uVar31);
          uVar26 = *puVar12;
          *(uint *)((long)param_1 + uVar31) = uVar20;
          lVar15 = lVar38;
          if (local_68 <= uVar22) {
            lVar15 = lVar29;
          }
          if (((local_68 - uVar19 <= uVar22) && (uVar20 <= uVar22 + 0xffff)) &&
             (puVar16 = (ulong *)(lVar15 + (ulong)uVar22), (int)*puVar16 == (int)*puVar21)) break;
          puVar16 = (ulong *)((long)puVar12 + (long)(iVar37 >> 6));
          uVar20 = (int)puVar12 - iVar32;
          iVar37 = iVar37 + 1;
          puVar21 = puVar12;
          puVar12 = puVar16;
          if (puVar25 < puVar16) goto LAB_0016b938;
        }
        iVar37 = uVar20 - uVar22;
        puVar12 = puVar27;
        if (local_68 <= uVar22) {
          puVar12 = param_2;
        }
        do {
          puVar34 = puVar21;
          puVar24 = puVar16;
          if ((puVar24 <= puVar12) || (puVar34 <= puVar10)) break;
          puVar16 = (ulong *)((long)puVar24 + -1);
          puVar21 = (ulong *)((long)puVar34 + -1);
        } while (*(char *)((long)puVar34 + -1) == *(char *)((long)puVar24 + -1));
        uVar26 = (long)puVar34 - (long)puVar10 & 0xffffffff;
        if ((char *)((long)param_3 + uVar26 / 0xff + uVar26 + 9) <= pcVar1) {
          uVar20 = (uint)((long)puVar34 - (long)puVar10);
          iVar13 = uVar20 - 0xf;
          puVar21 = (ulong *)((long)param_3 + 1);
          if (uVar20 < 0xf) {
            *(char *)param_3 = (char)(uVar20 << 4);
          }
          else {
            *(char *)param_3 = -0x10;
            if (0xfe < iVar13) {
              if (0x1fc < iVar13) {
                iVar13 = 0x1fd;
              }
              iVar11 = (int)puVar34 + 0xef;
              iVar33 = (int)puVar10;
              memset(puVar21,0xff,(ulong)((uint)(iVar11 - (iVar13 + iVar33)) / 0xff + 1));
              uVar20 = (iVar11 - iVar13) - iVar33;
              puVar21 = (ulong *)((long)param_3 + (ulong)uVar20 / 0xff + 2);
              iVar13 = ((int)puVar34 - iVar33) + uVar20 / 0xff + -0x10e;
            }
            *(char *)puVar21 = (char)iVar13;
            puVar21 = (ulong *)((long)puVar21 + 1);
          }
          puVar16 = (ulong *)((long)puVar21 + uVar26);
          do {
            puVar8 = puVar21 + 1;
            *puVar21 = *puVar10;
            puVar21 = puVar8;
            puVar10 = puVar10 + 1;
            psVar9 = param_3;
          } while (puVar8 < puVar16);
          do {
            param_3 = (short *)((long)puVar16 + 2);
            *(short *)puVar16 = (short)iVar37;
            if (puVar12 == puVar27) {
              puVar10 = (ulong *)((long)puVar24 + 4);
              puVar21 = (ulong *)((long)puVar34 + (long)puVar27 + (uVar14 - (long)puVar24));
              puVar12 = puVar36;
              if (puVar21 <= puVar36) {
                puVar12 = puVar21;
              }
              puVar21 = (ulong *)((long)puVar34 + 4);
              iVar37 = (int)puVar21;
              if (puVar21 < (ulong *)((long)puVar12 - 7U)) {
                uVar26 = *puVar21 ^ *puVar10;
                if (uVar26 == 0) {
                  puVar21 = (ulong *)((long)puVar34 + 0xc);
                  puVar10 = (ulong *)((long)puVar24 + 0xc);
                  goto joined_r0x0016a2e4;
                }
                uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
                uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
                uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
                uVar26 = (ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3;
              }
              else {
joined_r0x0016a2e4:
                for (; puVar21 < (ulong *)((long)puVar12 - 7U); puVar21 = puVar21 + 1) {
                  uVar26 = *puVar21 ^ *puVar10;
                  if (uVar26 != 0) {
                    uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1
                    ;
                    uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2
                    ;
                    uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                    uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar26 & 0xffff0000ffff) << 0x10;
                    uVar26 = (ulong)(uint)(((int)puVar21 +
                                           (int)((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >>
                                                3)) - iVar37);
                    goto LAB_0016a080;
                  }
                  puVar10 = puVar10 + 1;
                }
                if ((puVar21 < (ulong *)((long)puVar12 - 3U)) && ((int)*puVar10 == (int)*puVar21)) {
                  puVar21 = (ulong *)((long)puVar21 + 4);
                  puVar10 = (ulong *)((long)puVar10 + 4);
                }
                if ((puVar21 < (ulong *)((long)puVar12 - 1U)) &&
                   ((short)*puVar10 == (short)*puVar21)) {
                  puVar21 = (ulong *)((long)puVar21 + 2);
                  puVar10 = (ulong *)((long)puVar10 + 2);
                }
                puVar24 = puVar21;
                if ((puVar21 < puVar12) &&
                   (puVar24 = (ulong *)((long)puVar21 + 1), (char)*puVar10 != (char)*puVar21)) {
                  puVar24 = puVar21;
                }
                uVar26 = (ulong)(uint)((int)puVar24 - iVar37);
              }
LAB_0016a080:
              puVar10 = (ulong *)((long)puVar34 + uVar26 + 4);
              if (puVar10 == puVar12) {
                puVar10 = puVar12;
                puVar21 = param_2;
                if (puVar12 < puVar30) {
                  uVar31 = *puVar12 ^ *param_2;
                  if (uVar31 == 0) {
                    puVar10 = puVar12 + 1;
                    puVar21 = param_2 + 1;
                    goto LAB_0016a0c8;
                  }
                  uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
                  uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
                  uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                  uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10
                  ;
                  uVar20 = (uint)((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
                }
                else {
LAB_0016a0c8:
                  for (; puVar10 < puVar30; puVar10 = puVar10 + 1) {
                    uVar31 = *puVar10 ^ *puVar21;
                    if (uVar31 != 0) {
                      uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar31 & 0x5555555555555555) << 1;
                      uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 |
                               (uVar31 & 0x3333333333333333) << 2;
                      uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar31 & 0xffff0000ffff) << 0x10;
                      uVar20 = ((int)puVar10 +
                               (int)((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3)) -
                               (int)puVar12;
                      goto LAB_0016a174;
                    }
                    puVar21 = puVar21 + 1;
                  }
                  if ((puVar10 < puVar4 + -1) && ((int)*puVar21 == (int)*puVar10)) {
                    puVar10 = (ulong *)((long)puVar10 + 4);
                    puVar21 = (ulong *)((long)puVar21 + 4);
                  }
                  if ((puVar10 < (ulong *)((long)puVar4 - 6U)) &&
                     ((short)*puVar21 == (short)*puVar10)) {
                    puVar10 = (ulong *)((long)puVar10 + 2);
                    puVar21 = (ulong *)((long)puVar21 + 2);
                  }
                  puVar24 = puVar10;
                  if ((puVar10 < puVar36) &&
                     (puVar24 = (ulong *)((long)puVar10 + 1), (char)*puVar21 != (char)*puVar10)) {
                    puVar24 = puVar10;
                  }
                  uVar20 = (int)puVar24 - (int)puVar12;
                }
LAB_0016a174:
                uVar26 = (ulong)(uVar20 + (int)uVar26);
                puVar10 = (ulong *)((long)puVar12 + (ulong)uVar20);
              }
            }
            else {
              puVar10 = (ulong *)((long)puVar34 + 4);
              puVar21 = (ulong *)((long)puVar24 + 4);
              iVar37 = (int)puVar10;
              if (puVar10 < puVar30) {
                uVar26 = *puVar10 ^ *puVar21;
                if (uVar26 == 0) {
                  puVar10 = (ulong *)((long)puVar34 + 0xc);
                  puVar21 = (ulong *)((long)puVar24 + 0xc);
                  goto joined_r0x0016a2d4;
                }
                uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
                uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
                uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
                uVar26 = (ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3;
              }
              else {
joined_r0x0016a2d4:
                for (; puVar10 < puVar30; puVar10 = puVar10 + 1) {
                  uVar26 = *puVar10 ^ *puVar21;
                  if (uVar26 != 0) {
                    uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1
                    ;
                    uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2
                    ;
                    uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                    uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar26 & 0xffff0000ffff) << 0x10;
                    uVar26 = (ulong)(uint)(((int)puVar10 +
                                           (int)((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >>
                                                3)) - iVar37);
                    goto LAB_00169fc4;
                  }
                  puVar21 = puVar21 + 1;
                }
                if ((puVar10 < puVar4 + -1) && ((int)*puVar21 == (int)*puVar10)) {
                  puVar10 = (ulong *)((long)puVar10 + 4);
                  puVar21 = (ulong *)((long)puVar21 + 4);
                }
                if ((puVar10 < (ulong *)((long)puVar4 - 6U)) && ((short)*puVar21 == (short)*puVar10)
                   ) {
                  puVar10 = (ulong *)((long)puVar10 + 2);
                  puVar21 = (ulong *)((long)puVar21 + 2);
                }
                puVar12 = puVar10;
                if ((puVar10 < puVar36) &&
                   (puVar12 = (ulong *)((long)puVar10 + 1), (char)*puVar21 != (char)*puVar10)) {
                  puVar12 = puVar10;
                }
                uVar26 = (ulong)(uint)((int)puVar12 - iVar37);
              }
LAB_00169fc4:
              puVar10 = (ulong *)((long)puVar34 + uVar26 + 4);
            }
            if (pcVar1 < (char *)((long)puVar16 + (uVar26 >> 8) + 8)) break;
            uVar22 = (uint)uVar26;
            uVar20 = uVar22 - 0xf;
            if (uVar22 < 0xf) {
              *(char *)psVar9 = (char)*psVar9 + (char)uVar26;
            }
            else {
              *(char *)psVar9 = (char)*psVar9 + '\x0f';
              param_3[0] = -1;
              param_3[1] = -1;
              if (0x3fb < uVar20) {
                uVar20 = ((uVar22 - 0x40b) / 0x3fc) * 4;
                memset((char *)((long)puVar16 + 6),0xff,(ulong)(uVar20 + 4));
                param_3 = (short *)((char *)((long)puVar16 + 6) + uVar20);
                uVar20 = (uVar22 - 0x40b) % 0x3fc;
              }
              pcVar5 = (char *)((long)param_3 + (ulong)(uVar20 & 0xffff) / 0xff);
              param_3 = (short *)(pcVar5 + 1);
              *pcVar5 = (char)uVar20 + (char)((uVar20 & 0xffff) / 0xff);
            }
            if (puVar25 <= puVar10) goto LAB_0016b938;
            uVar22 = (int)puVar10 - iVar32;
            *(int *)((long)param_1 +
                    ((ulong)(*(long *)((long)puVar10 + -2) * -0x30e4432345000000) >> 0x32 & 0x3ffc))
                 = (int)(long *)((long)puVar10 + -2) - iVar32;
            uVar26 = *puVar10 * -0x30e4432345000000 >> 0x32 & 0x3ffc;
            uVar20 = *(uint *)((long)param_1 + uVar26);
            *(uint *)((long)param_1 + uVar26) = uVar22;
            puVar12 = puVar27;
            lVar15 = lVar38;
            if (local_68 <= uVar20) {
              puVar12 = param_2;
              lVar15 = lVar29;
            }
            if (((uVar20 < local_68 - uVar19) || (uVar20 + 0xffff < uVar22)) ||
               (puVar24 = (ulong *)(lVar15 + (ulong)uVar20), (int)*puVar24 != (int)*puVar10))
            goto LAB_00169cb8;
            puVar16 = (ulong *)((long)param_3 + 1);
            *(char *)param_3 = '\0';
            iVar37 = uVar22 - uVar20;
            puVar34 = puVar10;
            psVar9 = param_3;
          } while( true );
        }
        goto LAB_0016b964;
      }
LAB_0016b938:
      uVar14 = (long)puVar4 - (long)puVar10;
      if ((char *)((long)param_3 + (uVar14 + 0xf0) / 0xff + uVar14 + 1) <= pcVar1) {
        uVar26 = uVar14 - 0xf;
        if (uVar14 < 0xf) {
          *(char *)param_3 = (char)((int)uVar14 << 4);
        }
        else {
          psVar9 = (short *)((long)param_3 + 1);
          *(char *)param_3 = -0x10;
          if (0xfe < uVar26) {
            uVar31 = (uVar14 - 0x10e) / 0xff;
            memset(psVar9,0xff,uVar31 + 1);
            uVar26 = (uVar14 - 0x10e) % 0xff;
            psVar9 = (short *)((long)param_3 + uVar31 + 2);
          }
          *(char *)psVar9 = (char)uVar26;
          param_3 = psVar9;
        }
        memcpy((char *)((long)param_3 + 1),puVar10,uVar14);
        iVar7 = ((int)(char *)((long)param_3 + 1) + (int)uVar14) - iVar7;
        goto LAB_0016bac4;
      }
    }
    else {
      if (0x7e000000 < param_4) goto LAB_0016947c;
      pcVar1 = (char *)((long)param_3 + (long)param_5);
      *(uint *)((long)param_1 + 0x4018) = uVar19 + param_4;
      *puVar2 = local_68 + param_4;
      *(undefined2 *)((long)param_1 + 0x4006) = 2;
      puVar10 = param_2;
      if (0xc < (int)param_4) {
        lVar38 = (long)puVar27 + lVar38 + uVar14;
        puVar12 = (ulong *)((long)param_2 + 2);
        puVar30 = (ulong *)((long)puVar4 - 5);
        puVar25 = (ulong *)((long)param_2 + lVar15 + -0xb);
        puVar21 = (ulong *)((long)param_2 + 1);
        uVar19 = local_68 + 1;
        puVar36 = (ulong *)((long)puVar4 - 0xc);
        *(uint *)((long)param_1 + (*param_2 * -0x30e4432345000000 >> 0x32 & 0x3ffc)) = local_68;
LAB_0016b33c:
        uVar26 = *puVar21;
        iVar37 = param_6 << 6;
        while( true ) {
          uVar31 = uVar26 * -0x30e4432345000000 >> 0x32 & 0x3ffc;
          uVar20 = *(uint *)((long)param_1 + uVar31);
          uVar26 = *puVar12;
          *(uint *)((long)param_1 + uVar31) = uVar19;
          lVar15 = lVar38;
          if (local_68 <= uVar20) {
            lVar15 = lVar29;
          }
          if ((uVar19 <= uVar20 + 0xffff) &&
             (puVar16 = (ulong *)(lVar15 + (ulong)uVar20), (int)*puVar16 == (int)*puVar21)) break;
          puVar16 = (ulong *)((long)puVar12 + (long)(iVar37 >> 6));
          uVar19 = (int)puVar12 - iVar32;
          iVar37 = iVar37 + 1;
          puVar21 = puVar12;
          puVar12 = puVar16;
          if (puVar25 < puVar16) goto LAB_00169c34;
        }
        iVar37 = uVar19 - uVar20;
        puVar12 = puVar27;
        if (local_68 <= uVar20) {
          puVar12 = param_2;
        }
        do {
          puVar24 = puVar16;
          puVar34 = puVar21;
          if ((puVar24 <= puVar12) || (puVar34 <= puVar10)) break;
          puVar21 = (ulong *)((long)puVar34 + -1);
          puVar16 = (ulong *)((long)puVar24 + -1);
        } while (*(char *)((long)puVar34 + -1) == *(char *)((long)puVar24 + -1));
        uVar26 = (long)puVar34 - (long)puVar10 & 0xffffffff;
        if ((char *)((long)param_3 + uVar26 / 0xff + uVar26 + 9) <= pcVar1) {
          uVar19 = (uint)((long)puVar34 - (long)puVar10);
          iVar13 = uVar19 - 0xf;
          puVar21 = (ulong *)((long)param_3 + 1);
          if (uVar19 < 0xf) {
            *(char *)param_3 = (char)(uVar19 << 4);
          }
          else {
            *(char *)param_3 = -0x10;
            if (0xfe < iVar13) {
              if (0x1fc < iVar13) {
                iVar13 = 0x1fd;
              }
              iVar11 = (int)puVar34 + 0xef;
              iVar33 = (int)puVar10;
              memset(puVar21,0xff,(ulong)((uint)(iVar11 - (iVar13 + iVar33)) / 0xff + 1));
              uVar19 = (iVar11 - iVar13) - iVar33;
              puVar21 = (ulong *)((long)param_3 + (ulong)uVar19 / 0xff + 2);
              iVar13 = ((int)puVar34 - iVar33) + uVar19 / 0xff + -0x10e;
            }
            *(char *)puVar21 = (char)iVar13;
            puVar21 = (ulong *)((long)puVar21 + 1);
          }
          puVar16 = (ulong *)((long)puVar21 + uVar26);
          do {
            puVar8 = puVar21 + 1;
            *puVar21 = *puVar10;
            puVar21 = puVar8;
            puVar10 = puVar10 + 1;
            psVar9 = param_3;
          } while (puVar8 < puVar16);
          do {
            param_3 = (short *)((long)puVar16 + 2);
            *(short *)puVar16 = (short)iVar37;
            if (puVar12 == puVar27) {
              puVar10 = (ulong *)((long)puVar24 + 4);
              puVar21 = (ulong *)((long)puVar34 + (long)puVar27 + (uVar14 - (long)puVar24));
              puVar12 = puVar30;
              if (puVar21 <= puVar30) {
                puVar12 = puVar21;
              }
              puVar21 = (ulong *)((long)puVar34 + 4);
              iVar37 = (int)puVar21;
              if (puVar21 < (ulong *)((long)puVar12 - 7U)) {
                uVar26 = *puVar21 ^ *puVar10;
                if (uVar26 == 0) {
                  puVar21 = (ulong *)((long)puVar34 + 0xc);
                  puVar10 = (ulong *)((long)puVar24 + 0xc);
                  goto joined_r0x0016b92c;
                }
                uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
                uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
                uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
                uVar26 = (ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3;
              }
              else {
joined_r0x0016b92c:
                for (; puVar21 < (ulong *)((long)puVar12 - 7U); puVar21 = puVar21 + 1) {
                  uVar26 = *puVar21 ^ *puVar10;
                  if (uVar26 != 0) {
                    uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1
                    ;
                    uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2
                    ;
                    uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                    uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar26 & 0xffff0000ffff) << 0x10;
                    uVar26 = (ulong)(uint)(((int)puVar21 +
                                           (int)((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >>
                                                3)) - iVar37);
                    goto LAB_0016b6e4;
                  }
                  puVar10 = puVar10 + 1;
                }
                if ((puVar21 < (ulong *)((long)puVar12 - 3U)) && ((int)*puVar10 == (int)*puVar21)) {
                  puVar21 = (ulong *)((long)puVar21 + 4);
                  puVar10 = (ulong *)((long)puVar10 + 4);
                }
                if ((puVar21 < (ulong *)((long)puVar12 - 1U)) &&
                   ((short)*puVar10 == (short)*puVar21)) {
                  puVar21 = (ulong *)((long)puVar21 + 2);
                  puVar10 = (ulong *)((long)puVar10 + 2);
                }
                puVar24 = puVar21;
                if ((puVar21 < puVar12) &&
                   (puVar24 = (ulong *)((long)puVar21 + 1), (char)*puVar10 != (char)*puVar21)) {
                  puVar24 = puVar21;
                }
                uVar26 = (ulong)(uint)((int)puVar24 - iVar37);
              }
LAB_0016b6e4:
              puVar10 = (ulong *)((long)puVar34 + uVar26 + 4);
              if (puVar10 == puVar12) {
                puVar10 = puVar12;
                puVar21 = param_2;
                if (puVar12 < puVar36) {
                  uVar31 = *puVar12 ^ *param_2;
                  if (uVar31 == 0) {
                    puVar10 = puVar12 + 1;
                    puVar21 = param_2 + 1;
                    goto LAB_0016b72c;
                  }
                  uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
                  uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
                  uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                  uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10
                  ;
                  uVar19 = (uint)((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
                }
                else {
LAB_0016b72c:
                  for (; puVar10 < puVar36; puVar10 = puVar10 + 1) {
                    uVar31 = *puVar10 ^ *puVar21;
                    if (uVar31 != 0) {
                      uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar31 & 0x5555555555555555) << 1;
                      uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 |
                               (uVar31 & 0x3333333333333333) << 2;
                      uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar31 & 0xffff0000ffff) << 0x10;
                      uVar19 = ((int)puVar10 +
                               (int)((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3)) -
                               (int)puVar12;
                      goto LAB_0016b7d8;
                    }
                    puVar21 = puVar21 + 1;
                  }
                  if ((puVar10 < puVar4 + -1) && ((int)*puVar21 == (int)*puVar10)) {
                    puVar10 = (ulong *)((long)puVar10 + 4);
                    puVar21 = (ulong *)((long)puVar21 + 4);
                  }
                  if ((puVar10 < (ulong *)((long)puVar4 - 6U)) &&
                     ((short)*puVar21 == (short)*puVar10)) {
                    puVar10 = (ulong *)((long)puVar10 + 2);
                    puVar21 = (ulong *)((long)puVar21 + 2);
                  }
                  puVar24 = puVar10;
                  if ((puVar10 < puVar30) &&
                     (puVar24 = (ulong *)((long)puVar10 + 1), (char)*puVar21 != (char)*puVar10)) {
                    puVar24 = puVar10;
                  }
                  uVar19 = (int)puVar24 - (int)puVar12;
                }
LAB_0016b7d8:
                uVar26 = (ulong)(uVar19 + (int)uVar26);
                puVar10 = (ulong *)((long)puVar12 + (ulong)uVar19);
              }
            }
            else {
              puVar10 = (ulong *)((long)puVar34 + 4);
              puVar21 = (ulong *)((long)puVar24 + 4);
              iVar37 = (int)puVar10;
              if (puVar10 < puVar36) {
                uVar26 = *puVar10 ^ *puVar21;
                if (uVar26 == 0) {
                  puVar10 = (ulong *)((long)puVar34 + 0xc);
                  puVar21 = (ulong *)((long)puVar24 + 0xc);
                  goto joined_r0x0016b91c;
                }
                uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
                uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
                uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
                uVar26 = (ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3;
              }
              else {
joined_r0x0016b91c:
                for (; puVar10 < puVar36; puVar10 = puVar10 + 1) {
                  uVar26 = *puVar10 ^ *puVar21;
                  if (uVar26 != 0) {
                    uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1
                    ;
                    uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2
                    ;
                    uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                    uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar26 & 0xffff0000ffff) << 0x10;
                    uVar26 = (ulong)(uint)(((int)puVar10 +
                                           (int)((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >>
                                                3)) - iVar37);
                    goto LAB_0016b628;
                  }
                  puVar21 = puVar21 + 1;
                }
                if ((puVar10 < puVar4 + -1) && ((int)*puVar21 == (int)*puVar10)) {
                  puVar10 = (ulong *)((long)puVar10 + 4);
                  puVar21 = (ulong *)((long)puVar21 + 4);
                }
                if ((puVar10 < (ulong *)((long)puVar4 - 6U)) && ((short)*puVar21 == (short)*puVar10)
                   ) {
                  puVar10 = (ulong *)((long)puVar10 + 2);
                  puVar21 = (ulong *)((long)puVar21 + 2);
                }
                puVar12 = puVar10;
                if ((puVar10 < puVar30) &&
                   (puVar12 = (ulong *)((long)puVar10 + 1), (char)*puVar21 != (char)*puVar10)) {
                  puVar12 = puVar10;
                }
                uVar26 = (ulong)(uint)((int)puVar12 - iVar37);
              }
LAB_0016b628:
              puVar10 = (ulong *)((long)puVar34 + uVar26 + 4);
            }
            if (pcVar1 < (char *)((long)puVar16 + (uVar26 >> 8) + 8)) break;
            uVar20 = (uint)uVar26;
            uVar19 = uVar20 - 0xf;
            if (uVar20 < 0xf) {
              *(char *)psVar9 = (char)*psVar9 + (char)uVar26;
            }
            else {
              *(char *)psVar9 = (char)*psVar9 + '\x0f';
              param_3[0] = -1;
              param_3[1] = -1;
              if (0x3fb < uVar19) {
                uVar19 = ((uVar20 - 0x40b) / 0x3fc) * 4;
                memset((char *)((long)puVar16 + 6),0xff,(ulong)(uVar19 + 4));
                param_3 = (short *)((char *)((long)puVar16 + 6) + uVar19);
                uVar19 = (uVar20 - 0x40b) % 0x3fc;
              }
              pcVar5 = (char *)((long)param_3 + (ulong)(uVar19 & 0xffff) / 0xff);
              param_3 = (short *)(pcVar5 + 1);
              *pcVar5 = (char)uVar19 + (char)((uVar19 & 0xffff) / 0xff);
            }
            if (puVar25 <= puVar10) goto LAB_00169c34;
            uVar20 = (int)puVar10 - iVar32;
            *(int *)((long)param_1 +
                    ((ulong)(*(long *)((long)puVar10 + -2) * -0x30e4432345000000) >> 0x32 & 0x3ffc))
                 = (int)(long *)((long)puVar10 + -2) - iVar32;
            uVar26 = *puVar10 * -0x30e4432345000000 >> 0x32 & 0x3ffc;
            uVar19 = *(uint *)((long)param_1 + uVar26);
            *(uint *)((long)param_1 + uVar26) = uVar20;
            puVar12 = puVar27;
            lVar15 = lVar38;
            if (local_68 <= uVar19) {
              puVar12 = param_2;
              lVar15 = lVar29;
            }
            if ((uVar19 + 0xffff < uVar20) ||
               (puVar24 = (ulong *)(lVar15 + (ulong)uVar19), (int)*puVar24 != (int)*puVar10))
            goto LAB_0016b324;
            puVar16 = (ulong *)((long)param_3 + 1);
            *(char *)param_3 = '\0';
            iVar37 = uVar20 - uVar19;
            puVar34 = puVar10;
            psVar9 = param_3;
          } while( true );
        }
        goto LAB_0016b964;
      }
LAB_00169c34:
      uVar14 = (long)puVar4 - (long)puVar10;
      if ((char *)((long)param_3 + (uVar14 + 0xf0) / 0xff + uVar14 + 1) <= pcVar1) {
        uVar26 = uVar14 - 0xf;
        if (uVar14 < 0xf) {
          *(char *)param_3 = (char)((int)uVar14 << 4);
        }
        else {
          psVar9 = (short *)((long)param_3 + 1);
          *(char *)param_3 = -0x10;
          if (0xfe < uVar26) {
            uVar31 = (uVar14 - 0x10e) / 0xff;
            memset(psVar9,0xff,uVar31 + 1);
            uVar26 = (uVar14 - 0x10e) % 0xff;
            psVar9 = (short *)((long)param_3 + uVar31 + 2);
          }
          *(char *)psVar9 = (char)uVar26;
          param_3 = psVar9;
        }
        memcpy((char *)((long)param_3 + 1),puVar10,uVar14);
        iVar7 = ((int)(char *)((long)param_3 + 1) + (int)uVar14) - iVar7;
        goto LAB_0016bac4;
      }
    }
  }
  else {
    if (0x1000 < (int)param_4) {
      memcpy(param_1,__src,0x4020);
      if (param_4 < 0x7e000001) {
        uVar20 = *puVar2;
        uVar22 = *(uint *)((long)param_1 + 0x4018);
        puVar25 = (ulong *)((long)puVar4 - 5);
        puVar12 = (ulong *)((long)param_2 + lVar15 + -0xb);
        puVar36 = (ulong *)((long)puVar4 - 0xc);
        puVar30 = *(ulong **)((long)param_1 + 0x4008);
        *(uint *)((long)param_1 + 0x4018) = uVar22 + param_4;
        *puVar2 = uVar20 + param_4;
        *(undefined2 *)((long)param_1 + 0x4006) = 2;
        puVar21 = (ulong *)((long)param_2 + 2);
        pcVar1 = (char *)((long)param_3 + (long)param_5);
        puVar27 = (ulong *)((long)param_2 + 1);
        lVar38 = (long)param_2 - (ulong)uVar20;
        uVar19 = uVar20 + 1;
        lVar15 = (long)puVar30 + ((ulong)uVar22 - (ulong)uVar20);
        *(uint *)((long)param_1 + (*param_2 * -0x30e4432345000000 >> 0x32 & 0x3ffc)) = uVar20;
        puVar10 = param_2;
LAB_0016956c:
        uVar14 = *puVar27;
        iVar32 = param_6 << 6;
        while( true ) {
          uVar26 = uVar14 * -0x30e4432345000000 >> 0x32 & 0x3ffc;
          uVar23 = *(uint *)((long)param_1 + uVar26);
          uVar14 = *puVar21;
          *(uint *)((long)param_1 + uVar26) = uVar19;
          lVar29 = lVar15;
          if (uVar20 <= uVar23) {
            lVar29 = lVar38;
          }
          iVar37 = (int)lVar38;
          if ((uVar19 <= uVar23 + 0xffff) &&
             ((int)*(ulong *)(lVar29 + (ulong)uVar23) == (int)*puVar27)) break;
          puVar16 = (ulong *)((long)puVar21 + (long)(iVar32 >> 6));
          uVar19 = (int)puVar21 - iVar37;
          iVar32 = iVar32 + 1;
          puVar27 = puVar21;
          puVar21 = puVar16;
          if (puVar12 < puVar16) goto LAB_00169b70;
        }
        puVar21 = puVar30;
        if (uVar20 <= uVar23) {
          puVar21 = param_2;
        }
        iVar32 = uVar19 - uVar23;
        puVar16 = (ulong *)(lVar29 + (ulong)uVar23);
        do {
          puVar24 = puVar16;
          puVar34 = puVar27;
          if ((puVar24 <= puVar21) || (puVar34 <= puVar10)) break;
          puVar27 = (ulong *)((long)puVar34 + -1);
          puVar16 = (ulong *)((long)puVar24 + -1);
        } while (*(char *)((long)puVar34 + -1) == *(char *)((long)puVar24 + -1));
        uVar14 = (long)puVar34 - (long)puVar10 & 0xffffffff;
        if ((char *)((long)param_3 + uVar14 / 0xff + uVar14 + 9) <= pcVar1) {
          uVar19 = (uint)((long)puVar34 - (long)puVar10);
          iVar13 = uVar19 - 0xf;
          puVar27 = (ulong *)((long)param_3 + 1);
          if (uVar19 < 0xf) {
            *(char *)param_3 = (char)(uVar19 << 4);
          }
          else {
            *(char *)param_3 = -0x10;
            if (0xfe < iVar13) {
              if (0x1fc < iVar13) {
                iVar13 = 0x1fd;
              }
              iVar11 = (int)puVar34 + 0xef;
              iVar33 = (int)puVar10;
              memset(puVar27,0xff,(ulong)((uint)(iVar11 - (iVar13 + iVar33)) / 0xff + 1));
              uVar19 = (iVar11 - iVar13) - iVar33;
              puVar27 = (ulong *)((long)param_3 + (ulong)uVar19 / 0xff + 2);
              iVar13 = ((int)puVar34 - iVar33) + uVar19 / 0xff + -0x10e;
            }
            *(char *)puVar27 = (char)iVar13;
            puVar27 = (ulong *)((long)puVar27 + 1);
          }
          puVar16 = (ulong *)((long)puVar27 + uVar14);
          do {
            puVar8 = puVar27 + 1;
            *puVar27 = *puVar10;
            puVar27 = puVar8;
            puVar10 = puVar10 + 1;
            psVar9 = param_3;
          } while (puVar8 < puVar16);
          do {
            param_3 = (short *)((long)puVar16 + 2);
            *(short *)puVar16 = (short)iVar32;
            if (puVar21 == puVar30) {
              puVar10 = (ulong *)((long)puVar24 + 4);
              puVar27 = (ulong *)((long)puVar34 + (long)puVar30 + ((ulong)uVar22 - (long)puVar24));
              puVar21 = puVar25;
              if (puVar27 <= puVar25) {
                puVar21 = puVar27;
              }
              puVar27 = (ulong *)((long)puVar34 + 4);
              iVar32 = (int)puVar27;
              if (puVar27 < (ulong *)((long)puVar21 - 7U)) {
                uVar14 = *puVar27 ^ *puVar10;
                if (uVar14 == 0) {
                  puVar27 = (ulong *)((long)puVar34 + 0xc);
                  puVar10 = (ulong *)((long)puVar24 + 0xc);
                  goto joined_r0x00169b68;
                }
                uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
              }
              else {
joined_r0x00169b68:
                for (; puVar27 < (ulong *)((long)puVar21 - 7U); puVar27 = puVar27 + 1) {
                  uVar14 = *puVar27 ^ *puVar10;
                  if (uVar14 != 0) {
                    uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1
                    ;
                    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2
                    ;
                    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar14 & 0xffff0000ffff) << 0x10;
                    uVar14 = (ulong)(uint)(((int)puVar27 +
                                           (int)((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >>
                                                3)) - iVar32);
                    goto LAB_00169908;
                  }
                  puVar10 = puVar10 + 1;
                }
                if ((puVar27 < (ulong *)((long)puVar21 - 3U)) && ((int)*puVar10 == (int)*puVar27)) {
                  puVar27 = (ulong *)((long)puVar27 + 4);
                  puVar10 = (ulong *)((long)puVar10 + 4);
                }
                if ((puVar27 < (ulong *)((long)puVar21 - 1U)) &&
                   ((short)*puVar10 == (short)*puVar27)) {
                  puVar27 = (ulong *)((long)puVar27 + 2);
                  puVar10 = (ulong *)((long)puVar10 + 2);
                }
                puVar24 = puVar27;
                if ((puVar27 < puVar21) &&
                   (puVar24 = (ulong *)((long)puVar27 + 1), (char)*puVar10 != (char)*puVar27)) {
                  puVar24 = puVar27;
                }
                uVar14 = (ulong)(uint)((int)puVar24 - iVar32);
              }
LAB_00169908:
              puVar10 = (ulong *)((long)puVar34 + uVar14 + 4);
              if (puVar10 == puVar21) {
                puVar10 = puVar21;
                puVar27 = param_2;
                if (puVar21 < puVar36) {
                  uVar26 = *puVar21 ^ *param_2;
                  if (uVar26 == 0) {
                    puVar10 = puVar21 + 1;
                    puVar27 = param_2 + 1;
                    goto LAB_00169950;
                  }
                  uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
                  uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
                  uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                  uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10
                  ;
                  uVar19 = (uint)((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3);
                }
                else {
LAB_00169950:
                  for (; puVar10 < puVar36; puVar10 = puVar10 + 1) {
                    uVar26 = *puVar10 ^ *puVar27;
                    if (uVar26 != 0) {
                      uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar26 & 0x5555555555555555) << 1;
                      uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 |
                               (uVar26 & 0x3333333333333333) << 2;
                      uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar26 & 0xffff0000ffff) << 0x10;
                      uVar19 = ((int)puVar10 +
                               (int)((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3)) -
                               (int)puVar21;
                      goto LAB_001699fc;
                    }
                    puVar27 = puVar27 + 1;
                  }
                  if ((puVar10 < puVar4 + -1) && ((int)*puVar27 == (int)*puVar10)) {
                    puVar10 = (ulong *)((long)puVar10 + 4);
                    puVar27 = (ulong *)((long)puVar27 + 4);
                  }
                  if ((puVar10 < (ulong *)((long)puVar4 - 6U)) &&
                     ((short)*puVar27 == (short)*puVar10)) {
                    puVar10 = (ulong *)((long)puVar10 + 2);
                    puVar27 = (ulong *)((long)puVar27 + 2);
                  }
                  puVar24 = puVar10;
                  if ((puVar10 < puVar25) &&
                     (puVar24 = (ulong *)((long)puVar10 + 1), (char)*puVar27 != (char)*puVar10)) {
                    puVar24 = puVar10;
                  }
                  uVar19 = (int)puVar24 - (int)puVar21;
                }
LAB_001699fc:
                uVar14 = (ulong)(uVar19 + (int)uVar14);
                puVar10 = (ulong *)((long)puVar21 + (ulong)uVar19);
              }
            }
            else {
              puVar10 = (ulong *)((long)puVar34 + 4);
              puVar27 = (ulong *)((long)puVar24 + 4);
              iVar32 = (int)puVar10;
              if (puVar10 < puVar36) {
                uVar14 = *puVar10 ^ *puVar27;
                if (uVar14 == 0) {
                  puVar10 = (ulong *)((long)puVar34 + 0xc);
                  puVar27 = (ulong *)((long)puVar24 + 0xc);
                  goto joined_r0x00169b58;
                }
                uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
                uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
              }
              else {
joined_r0x00169b58:
                for (; puVar10 < puVar36; puVar10 = puVar10 + 1) {
                  uVar14 = *puVar10 ^ *puVar27;
                  if (uVar14 != 0) {
                    uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1
                    ;
                    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2
                    ;
                    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar14 & 0xffff0000ffff) << 0x10;
                    uVar14 = (ulong)(uint)(((int)puVar10 +
                                           (int)((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >>
                                                3)) - iVar32);
                    goto LAB_0016984c;
                  }
                  puVar27 = puVar27 + 1;
                }
                if ((puVar10 < puVar4 + -1) && ((int)*puVar27 == (int)*puVar10)) {
                  puVar10 = (ulong *)((long)puVar10 + 4);
                  puVar27 = (ulong *)((long)puVar27 + 4);
                }
                if ((puVar10 < (ulong *)((long)puVar4 - 6U)) && ((short)*puVar27 == (short)*puVar10)
                   ) {
                  puVar10 = (ulong *)((long)puVar10 + 2);
                  puVar27 = (ulong *)((long)puVar27 + 2);
                }
                puVar21 = puVar10;
                if ((puVar10 < puVar25) &&
                   (puVar21 = (ulong *)((long)puVar10 + 1), (char)*puVar27 != (char)*puVar10)) {
                  puVar21 = puVar10;
                }
                uVar14 = (ulong)(uint)((int)puVar21 - iVar32);
              }
LAB_0016984c:
              puVar10 = (ulong *)((long)puVar34 + uVar14 + 4);
            }
            if (pcVar1 < (char *)((long)puVar16 + (uVar14 >> 8) + 8)) break;
            uVar23 = (uint)uVar14;
            uVar19 = uVar23 - 0xf;
            if (uVar23 < 0xf) {
              *(char *)psVar9 = (char)*psVar9 + (char)uVar14;
            }
            else {
              *(char *)psVar9 = (char)*psVar9 + '\x0f';
              param_3[0] = -1;
              param_3[1] = -1;
              if (0x3fb < uVar19) {
                uVar19 = ((uVar23 - 0x40b) / 0x3fc) * 4;
                memset((char *)((long)puVar16 + 6),0xff,(ulong)(uVar19 + 4));
                param_3 = (short *)((char *)((long)puVar16 + 6) + uVar19);
                uVar19 = (uVar23 - 0x40b) % 0x3fc;
              }
              pcVar5 = (char *)((long)param_3 + (ulong)(uVar19 & 0xffff) / 0xff);
              param_3 = (short *)(pcVar5 + 1);
              *pcVar5 = (char)uVar19 + (char)((uVar19 & 0xffff) / 0xff);
            }
            if (puVar12 <= puVar10) goto LAB_00169b70;
            uVar23 = (int)puVar10 - iVar37;
            *(int *)((long)param_1 +
                    ((ulong)(*(long *)((long)puVar10 + -2) * -0x30e4432345000000) >> 0x32 & 0x3ffc))
                 = (int)(long *)((long)puVar10 + -2) - iVar37;
            uVar14 = *puVar10 * -0x30e4432345000000 >> 0x32 & 0x3ffc;
            uVar19 = *(uint *)((long)param_1 + uVar14);
            *(uint *)((long)param_1 + uVar14) = uVar23;
            puVar21 = puVar30;
            lVar29 = lVar15;
            if (uVar20 <= uVar19) {
              puVar21 = param_2;
              lVar29 = lVar38;
            }
            if ((uVar19 + 0xffff < uVar23) ||
               (puVar24 = (ulong *)(lVar29 + (ulong)uVar19), (int)*puVar24 != (int)*puVar10))
            goto LAB_00169554;
            puVar16 = (ulong *)((long)param_3 + 1);
            *(char *)param_3 = '\0';
            iVar32 = uVar23 - uVar19;
            puVar34 = puVar10;
            psVar9 = param_3;
          } while( true );
        }
        goto LAB_0016b964;
      }
      iVar7 = 0;
      goto LAB_0016bac4;
    }
    if (0x7e000000 < param_4) goto LAB_0016947c;
    pcVar1 = (char *)((long)param_3 + (long)param_5);
    puVar27 = *(ulong **)((long)__src + 0x4008);
    uVar19 = *(uint *)((long)__src + 0x4000);
    uVar20 = *(uint *)((long)__src + 0x4018);
    *(undefined8 *)((long)param_1 + 0x4010) = 0;
    *puVar2 = local_68 + param_4;
    *(uint *)((long)param_1 + 0x4018) = param_4;
    *(undefined2 *)((long)param_1 + 0x4006) = 2;
    puVar10 = param_2;
    if (0xc < (int)param_4) {
      iVar32 = local_68 - uVar19;
      lVar38 = (ulong)uVar20 - (ulong)uVar19;
      puVar12 = (ulong *)((long)param_2 + 2);
      puVar30 = (ulong *)((long)puVar4 - 5);
      puVar25 = (ulong *)((long)param_2 + lVar15 + -0xb);
      lVar15 = (long)param_2 - (ulong)local_68;
      puVar21 = (ulong *)((long)param_2 + 1);
      uVar19 = local_68 + 1;
      puVar36 = (ulong *)((long)puVar4 - 0xc);
      *(uint *)((long)param_1 + (*param_2 * -0x30e4432345000000 >> 0x32 & 0x3ffc)) = local_68;
LAB_0016a3a0:
      uVar14 = *puVar21;
      iVar37 = param_6 << 6;
      while( true ) {
        uVar26 = uVar14 * -0x30e4432345000000 >> 0x34;
        uVar22 = *(uint *)((long)param_1 + uVar26 * 4);
        if (uVar22 < local_68) {
          uVar22 = *(uint *)((long)__src + uVar26 * 4);
          puVar16 = (ulong *)((long)puVar27 + (ulong)uVar22 + lVar38);
          uVar22 = uVar22 + iVar32;
          puVar24 = puVar27;
        }
        else {
          puVar16 = (ulong *)(lVar15 + (ulong)uVar22);
          puVar24 = param_2;
        }
        uVar14 = *puVar12;
        *(uint *)((long)param_1 + uVar26 * 4) = uVar19;
        iVar13 = (int)lVar15;
        if ((uVar19 <= uVar22 + 0xffff) && ((int)*puVar16 == (int)*puVar21)) break;
        puVar16 = (ulong *)((long)puVar12 + (long)(iVar37 >> 6));
        uVar19 = (int)puVar12 - iVar13;
        iVar37 = iVar37 + 1;
        puVar21 = puVar12;
        puVar12 = puVar16;
        if (puVar25 < puVar16) goto LAB_00169314;
      }
      iVar37 = uVar19 - uVar22;
      do {
        puVar12 = puVar16;
        puVar34 = puVar21;
        if ((puVar12 <= puVar24) || (puVar34 <= puVar10)) break;
        puVar21 = (ulong *)((long)puVar34 + -1);
        puVar16 = (ulong *)((long)puVar12 + -1);
      } while (*(char *)((long)puVar34 + -1) == *(char *)((long)puVar12 + -1));
      uVar14 = (long)puVar34 - (long)puVar10 & 0xffffffff;
      if ((char *)((long)param_3 + uVar14 / 0xff + uVar14 + 9) <= pcVar1) {
        uVar19 = (uint)((long)puVar34 - (long)puVar10);
        iVar11 = uVar19 - 0xf;
        puVar21 = (ulong *)((long)param_3 + 1);
        if (uVar19 < 0xf) {
          *(char *)param_3 = (char)(uVar19 << 4);
        }
        else {
          *(char *)param_3 = -0x10;
          if (0xfe < iVar11) {
            if (0x1fc < iVar11) {
              iVar11 = 0x1fd;
            }
            iVar33 = (int)puVar34 + 0xef;
            iVar35 = (int)puVar10;
            memset(puVar21,0xff,(ulong)((uint)(iVar33 - (iVar11 + iVar35)) / 0xff + 1));
            uVar19 = (iVar33 - iVar11) - iVar35;
            puVar21 = (ulong *)((long)param_3 + (ulong)uVar19 / 0xff + 2);
            iVar11 = ((int)puVar34 - iVar35) + uVar19 / 0xff + -0x10e;
          }
          *(char *)puVar21 = (char)iVar11;
          puVar21 = (ulong *)((long)puVar21 + 1);
        }
        puVar16 = (ulong *)((long)puVar21 + uVar14);
        do {
          puVar8 = puVar21 + 1;
          *puVar21 = *puVar10;
          puVar21 = puVar8;
          puVar10 = puVar10 + 1;
          psVar9 = param_3;
        } while (puVar8 < puVar16);
        do {
          param_3 = (short *)((long)puVar16 + 2);
          *(short *)puVar16 = (short)iVar37;
          if (puVar24 == puVar27) {
            puVar10 = (ulong *)((long)puVar12 + 4);
            puVar21 = (ulong *)((long)puVar34 + (long)puVar27 + ((ulong)uVar20 - (long)puVar12));
            puVar24 = puVar30;
            if (puVar21 <= puVar30) {
              puVar24 = puVar21;
            }
            puVar21 = (ulong *)((long)puVar34 + 4);
            iVar37 = (int)puVar21;
            if (puVar21 < (ulong *)((long)puVar24 - 7U)) {
              uVar14 = *puVar21 ^ *puVar10;
              if (uVar14 == 0) {
                puVar21 = (ulong *)((long)puVar34 + 0xc);
                puVar10 = (ulong *)((long)puVar12 + 0xc);
                goto joined_r0x0016a9dc;
              }
              uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
              uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
              uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
            }
            else {
joined_r0x0016a9dc:
              for (; puVar21 < (ulong *)((long)puVar24 - 7U); puVar21 = puVar21 + 1) {
                uVar14 = *puVar21 ^ *puVar10;
                if (uVar14 != 0) {
                  uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                  uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                  uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  ;
                  uVar14 = (ulong)(uint)(((int)puVar21 +
                                         (int)((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3)
                                         ) - iVar37);
                  goto LAB_0016a764;
                }
                puVar10 = puVar10 + 1;
              }
              if ((puVar21 < (ulong *)((long)puVar24 - 3U)) && ((int)*puVar10 == (int)*puVar21)) {
                puVar21 = (ulong *)((long)puVar21 + 4);
                puVar10 = (ulong *)((long)puVar10 + 4);
              }
              if ((puVar21 < (ulong *)((long)puVar24 - 1U)) && ((short)*puVar10 == (short)*puVar21))
              {
                puVar21 = (ulong *)((long)puVar21 + 2);
                puVar10 = (ulong *)((long)puVar10 + 2);
              }
              puVar12 = puVar21;
              if ((puVar21 < puVar24) &&
                 (puVar12 = (ulong *)((long)puVar21 + 1), (char)*puVar10 != (char)*puVar21)) {
                puVar12 = puVar21;
              }
              uVar14 = (ulong)(uint)((int)puVar12 - iVar37);
            }
LAB_0016a764:
            puVar10 = (ulong *)((long)puVar34 + uVar14 + 4);
            if (puVar10 == puVar24) {
              puVar10 = puVar24;
              puVar21 = param_2;
              if (puVar24 < puVar36) {
                uVar26 = *puVar24 ^ *param_2;
                if (uVar26 == 0) {
                  puVar10 = puVar24 + 1;
                  puVar21 = param_2 + 1;
                  goto LAB_0016a7ac;
                }
                uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
                uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
                uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
                uVar19 = (uint)((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3);
              }
              else {
LAB_0016a7ac:
                for (; puVar10 < puVar36; puVar10 = puVar10 + 1) {
                  uVar26 = *puVar10 ^ *puVar21;
                  if (uVar26 != 0) {
                    uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1
                    ;
                    uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2
                    ;
                    uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                    uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar26 & 0xffff0000ffff) << 0x10;
                    uVar19 = ((int)puVar10 +
                             (int)((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3)) -
                             (int)puVar24;
                    goto LAB_0016a858;
                  }
                  puVar21 = puVar21 + 1;
                }
                if ((puVar10 < puVar4 + -1) && ((int)*puVar21 == (int)*puVar10)) {
                  puVar10 = (ulong *)((long)puVar10 + 4);
                  puVar21 = (ulong *)((long)puVar21 + 4);
                }
                if ((puVar10 < (ulong *)((long)puVar4 - 6U)) && ((short)*puVar21 == (short)*puVar10)
                   ) {
                  puVar10 = (ulong *)((long)puVar10 + 2);
                  puVar21 = (ulong *)((long)puVar21 + 2);
                }
                puVar12 = puVar10;
                if ((puVar10 < puVar30) &&
                   (puVar12 = (ulong *)((long)puVar10 + 1), (char)*puVar21 != (char)*puVar10)) {
                  puVar12 = puVar10;
                }
                uVar19 = (int)puVar12 - (int)puVar24;
              }
LAB_0016a858:
              uVar14 = (ulong)(uVar19 + (int)uVar14);
              puVar10 = (ulong *)((long)puVar24 + (ulong)uVar19);
            }
          }
          else {
            puVar10 = (ulong *)((long)puVar34 + 4);
            puVar21 = (ulong *)((long)puVar12 + 4);
            iVar37 = (int)puVar10;
            if (puVar10 < puVar36) {
              uVar14 = *puVar10 ^ *puVar21;
              if (uVar14 == 0) {
                puVar10 = (ulong *)((long)puVar34 + 0xc);
                puVar21 = (ulong *)((long)puVar12 + 0xc);
                goto joined_r0x0016a9cc;
              }
              uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
              uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
              uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
            }
            else {
joined_r0x0016a9cc:
              for (; puVar10 < puVar36; puVar10 = puVar10 + 1) {
                uVar14 = *puVar10 ^ *puVar21;
                if (uVar14 != 0) {
                  uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                  uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                  uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  ;
                  uVar14 = (ulong)(uint)(((int)puVar10 +
                                         (int)((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3)
                                         ) - iVar37);
                  goto LAB_0016a6a8;
                }
                puVar21 = puVar21 + 1;
              }
              if ((puVar10 < puVar4 + -1) && ((int)*puVar21 == (int)*puVar10)) {
                puVar10 = (ulong *)((long)puVar10 + 4);
                puVar21 = (ulong *)((long)puVar21 + 4);
              }
              if ((puVar10 < (ulong *)((long)puVar4 - 6U)) && ((short)*puVar21 == (short)*puVar10))
              {
                puVar10 = (ulong *)((long)puVar10 + 2);
                puVar21 = (ulong *)((long)puVar21 + 2);
              }
              puVar12 = puVar10;
              if ((puVar10 < puVar30) &&
                 (puVar12 = (ulong *)((long)puVar10 + 1), (char)*puVar21 != (char)*puVar10)) {
                puVar12 = puVar10;
              }
              uVar14 = (ulong)(uint)((int)puVar12 - iVar37);
            }
LAB_0016a6a8:
            puVar10 = (ulong *)((long)puVar34 + uVar14 + 4);
          }
          if (pcVar1 < (char *)((long)puVar16 + (uVar14 >> 8) + 8)) break;
          uVar22 = (uint)uVar14;
          uVar19 = uVar22 - 0xf;
          if (uVar22 < 0xf) {
            *(char *)psVar9 = (char)*psVar9 + (char)uVar14;
          }
          else {
            *(char *)psVar9 = (char)*psVar9 + '\x0f';
            param_3[0] = -1;
            param_3[1] = -1;
            if (0x3fb < uVar19) {
              uVar19 = ((uVar22 - 0x40b) / 0x3fc) * 4;
              memset((char *)((long)puVar16 + 6),0xff,(ulong)(uVar19 + 4));
              param_3 = (short *)((char *)((long)puVar16 + 6) + uVar19);
              uVar19 = (uVar22 - 0x40b) % 0x3fc;
            }
            pcVar5 = (char *)((long)param_3 + (ulong)(uVar19 & 0xffff) / 0xff);
            param_3 = (short *)(pcVar5 + 1);
            *pcVar5 = (char)uVar19 + (char)((uVar19 & 0xffff) / 0xff);
          }
          if (puVar25 <= puVar10) goto LAB_00169314;
          *(int *)((long)param_1 +
                  ((ulong)(*(long *)((long)puVar10 + -2) * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
               (int)(long *)((long)puVar10 + -2) - iVar13;
          uVar14 = *puVar10 * -0x30e4432345000000 >> 0x34;
          uVar19 = *(uint *)((long)param_1 + uVar14 * 4);
          uVar22 = (int)puVar10 - iVar13;
          if (uVar19 < local_68) {
            uVar19 = *(uint *)((long)__src + uVar14 * 4);
            puVar12 = (ulong *)((long)puVar27 + (ulong)uVar19 + lVar38);
            uVar19 = uVar19 + iVar32;
            puVar24 = puVar27;
          }
          else {
            puVar12 = (ulong *)(lVar15 + (ulong)uVar19);
            puVar24 = param_2;
          }
          *(uint *)((long)param_1 + uVar14 * 4) = uVar22;
          if ((uVar19 + 0xffff < uVar22) || ((int)*puVar12 != (int)*puVar10)) goto LAB_0016a388;
          puVar16 = (ulong *)((long)param_3 + 1);
          *(char *)param_3 = '\0';
          iVar37 = uVar22 - uVar19;
          puVar34 = puVar10;
          psVar9 = param_3;
        } while( true );
      }
      goto LAB_0016b964;
    }
LAB_00169314:
    uVar14 = (long)puVar4 - (long)puVar10;
    if ((char *)((long)param_3 + (uVar14 + 0xf0) / 0xff + uVar14 + 1) <= pcVar1) {
      uVar26 = uVar14 - 0xf;
      if (uVar14 < 0xf) {
        *(char *)param_3 = (char)((int)uVar14 << 4);
      }
      else {
        psVar9 = (short *)((long)param_3 + 1);
        *(char *)param_3 = -0x10;
        if (0xfe < uVar26) {
          uVar31 = (uVar14 - 0x10e) / 0xff;
          memset(psVar9,0xff,uVar31 + 1);
          uVar26 = (uVar14 - 0x10e) % 0xff;
          psVar9 = (short *)((long)param_3 + uVar31 + 2);
        }
        *(char *)psVar9 = (char)uVar26;
        param_3 = psVar9;
      }
      memcpy((char *)((long)param_3 + 1),puVar10,uVar14);
      iVar7 = ((int)(char *)((long)param_3 + 1) + (int)uVar14) - iVar7;
      goto LAB_0016bac4;
    }
  }
LAB_0016b964:
  iVar7 = 0;
LAB_0016bac4:
  *(ulong **)((long)param_1 + 0x4008) = param_2;
  *(uint *)((long)param_1 + 0x4018) = param_4;
  return iVar7;
LAB_0016aed8:
  puVar10 = (ulong *)((long)puVar27 + uVar14 + 5);
  puVar27 = (ulong *)((long)puVar27 + uVar14 + 6);
  uVar19 = (int)puVar10 - iVar32;
  if (puVar21 < puVar27) goto LAB_001693e0;
  goto LAB_0016aef0;
LAB_0016aa64:
  puVar10 = (ulong *)((long)puVar27 + uVar14 + 5);
  puVar27 = (ulong *)((long)puVar27 + uVar14 + 6);
  uVar20 = (int)puVar10 - iVar32;
  if (puVar21 < puVar27) goto LAB_00169120;
  goto LAB_0016aa7c;
LAB_0016b324:
  puVar21 = (ulong *)((long)puVar10 + 1);
  puVar12 = (ulong *)((long)puVar10 + 2);
  uVar19 = (int)puVar21 - iVar32;
  if (puVar25 < puVar12) goto LAB_00169c34;
  goto LAB_0016b33c;
LAB_00169cb8:
  puVar21 = (ulong *)((long)puVar10 + 1);
  puVar12 = (ulong *)((long)puVar10 + 2);
  uVar20 = (int)puVar21 - iVar32;
  if (puVar25 < puVar12) goto LAB_0016b938;
  goto LAB_00169cd4;
LAB_00169554:
  puVar27 = (ulong *)((long)puVar10 + 1);
  puVar21 = (ulong *)((long)puVar10 + 2);
  uVar19 = (int)puVar27 - iVar37;
  if (puVar12 < puVar21) goto LAB_00169b70;
  goto LAB_0016956c;
LAB_00169b70:
  uVar14 = (long)puVar4 - (long)puVar10;
  if ((char *)((long)param_3 + (uVar14 + 0xf0) / 0xff + uVar14 + 1) <= pcVar1) {
    uVar26 = uVar14 - 0xf;
    if (uVar14 < 0xf) {
      *(char *)param_3 = (char)((int)uVar14 << 4);
    }
    else {
      psVar9 = (short *)((long)param_3 + 1);
      *(char *)param_3 = -0x10;
      if (0xfe < uVar26) {
        uVar31 = (uVar14 - 0x10e) / 0xff;
        memset(psVar9,0xff,uVar31 + 1);
        uVar26 = (uVar14 - 0x10e) % 0xff;
        psVar9 = (short *)((long)param_3 + uVar31 + 2);
      }
      *(char *)psVar9 = (char)uVar26;
      param_3 = psVar9;
    }
    memcpy((char *)((long)param_3 + 1),puVar10,uVar14);
    iVar7 = ((int)(char *)((long)param_3 + 1) + (int)uVar14) - iVar7;
    goto LAB_0016bac4;
  }
  goto LAB_0016b964;
LAB_0016a388:
  puVar21 = (ulong *)((long)puVar10 + 1);
  puVar12 = (ulong *)((long)puVar10 + 2);
  uVar19 = (int)puVar21 - iVar13;
  if (puVar25 < puVar12) goto LAB_00169314;
  goto LAB_0016a3a0;
}


// ===== 0016baec  LZ4_compress_forceExtDict =====

int LZ4_compress_forceExtDict(long param_1,ulong *param_2,char *param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  int iVar5;
  char *pcVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  int iVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong *puVar18;
  ulong *puVar19;
  char cVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  ulong *puVar30;
  size_t __n;
  int iVar31;
  ulong *puVar32;
  int iVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint local_64;
  
  puVar2 = (uint *)(param_1 + 0x4000);
  local_64 = *puVar2;
  if (local_64 + param_4 < 0x80000001) {
    uVar14 = *(uint *)(param_1 + 0x4018);
  }
  else {
    lVar13 = *(long *)(param_1 + 0x4008);
    uVar15 = *(uint *)(param_1 + 0x4018);
    lVar17 = 0;
    iVar5 = local_64 - 0x10000;
    do {
      pauVar3 = (undefined1 (*) [16])(param_1 + lVar17);
      lVar17 = lVar17 + 0x20;
      auVar34._4_4_ = iVar5;
      auVar34._0_4_ = iVar5;
      auVar34._8_4_ = iVar5;
      auVar34._12_4_ = iVar5;
      auVar34 = NEON_uqsub(*pauVar3,auVar34,4);
      auVar35._4_4_ = iVar5;
      auVar35._0_4_ = iVar5;
      auVar35._8_4_ = iVar5;
      auVar35._12_4_ = iVar5;
      auVar35 = NEON_uqsub(pauVar3[1],auVar35,4);
      *(long *)(*pauVar3 + 8) = auVar34._8_8_;
      *(long *)*pauVar3 = auVar34._0_8_;
      *(long *)(pauVar3[1] + 8) = auVar35._8_8_;
      *(long *)pauVar3[1] = auVar35._0_8_;
    } while (lVar17 != 0x4000);
    uVar14 = *(uint *)(param_1 + 0x4018);
    *puVar2 = 0x10000;
    if (0x10000 < uVar14) {
      uVar14 = 0x10000;
      *(uint *)(param_1 + 0x4018) = 0x10000;
    }
    *(ulong *)(param_1 + 0x4008) = (lVar13 + (ulong)uVar15) - (ulong)uVar14;
    local_64 = 0x10000;
  }
  puVar9 = *(ulong **)(param_1 + 0x4008);
  lVar17 = -(ulong)local_64;
  lVar13 = (long)param_2 - (ulong)local_64;
  iVar33 = (int)lVar13;
  iVar5 = (int)param_3;
  puVar19 = param_2;
  if ((uVar14 >> 0x10 == 0) && (uVar14 < local_64)) {
    if (0x7e000000 < param_4) {
LAB_0016bca0:
      iVar5 = 0;
      goto LAB_0016cad8;
    }
    *(uint *)(param_1 + 0x4018) = uVar14 + param_4;
    *puVar2 = local_64 + param_4;
    *(undefined2 *)(param_1 + 0x4006) = 2;
    if (0xc < (int)param_4) {
      lVar17 = (long)puVar9 + lVar17 + (ulong)uVar14;
      puVar18 = (ulong *)((long)param_2 + 2);
      puVar25 = (ulong *)((long)param_2 + (long)(int)param_4 + -5);
      puVar21 = (ulong *)((long)param_2 + (long)(int)param_4 + -8);
      puVar32 = (ulong *)((long)param_2 + (long)(int)param_4 + -0xb);
      puVar7 = (ulong *)((long)param_2 + 1);
      uVar15 = local_64 + 1;
      puVar10 = (ulong *)((long)param_2 + (long)(int)param_4 + -0xc);
      puVar22 = (ulong *)((long)param_2 + (long)(int)param_4 + -6);
      *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x32 & 0x3ffc)) = local_64;
LAB_0016bdf0:
      uVar26 = *puVar7;
      uVar28 = 0x41;
      uVar23 = 1;
      while( true ) {
        uVar27 = uVar26 * -0x30e4432345000000 >> 0x32 & 0x3ffc;
        uVar16 = *(uint *)(param_1 + uVar27);
        uVar26 = *puVar18;
        *(uint *)(param_1 + uVar27) = uVar15;
        lVar4 = lVar17;
        if (local_64 <= uVar16) {
          lVar4 = lVar13;
        }
        if (((local_64 - uVar14 <= uVar16) && (uVar15 <= uVar16 + 0xffff)) &&
           (puVar12 = (ulong *)(lVar4 + (ulong)uVar16), (int)*puVar12 == (int)*puVar7)) break;
        puVar12 = (ulong *)((long)puVar18 + uVar23);
        uVar23 = uVar28 >> 6;
        uVar28 = (ulong)((int)uVar28 + 1);
        uVar15 = (int)puVar18 - iVar33;
        puVar7 = puVar18;
        puVar18 = puVar12;
        if (puVar32 < puVar12) goto LAB_0016bc24;
      }
      iVar31 = uVar15 - uVar16;
      puVar18 = puVar9;
      if (local_64 <= uVar16) {
        puVar18 = param_2;
      }
      do {
        puVar30 = puVar7;
        puVar24 = puVar12;
        if ((puVar24 <= puVar18) || (puVar30 <= puVar19)) break;
        puVar12 = (ulong *)((long)puVar24 + -1);
        puVar7 = (ulong *)((long)puVar30 + -1);
      } while (*(char *)((long)puVar30 + -1) == *(char *)((long)puVar24 + -1));
      uVar15 = (uint)((long)puVar30 - (long)puVar19);
      iVar11 = uVar15 - 0xf;
      puVar7 = (ulong *)(param_3 + 1);
      if (uVar15 < 0xf) {
        *param_3 = (char)(uVar15 << 4);
      }
      else {
        *param_3 = -0x10;
        if (0xfe < iVar11) {
          if (0x1fc < iVar11) {
            iVar11 = 0x1fd;
          }
          iVar1 = (int)puVar30 + 0xef;
          iVar29 = (int)puVar19;
          memset(puVar7,0xff,(ulong)((uint)(iVar1 - (iVar11 + iVar29)) / 0xff + 1));
          uVar15 = (iVar1 - iVar11) - iVar29;
          puVar7 = (ulong *)(param_3 + (ulong)uVar15 / 0xff + 2);
          iVar11 = ((int)puVar30 - iVar29) + uVar15 / 0xff + -0x10e;
        }
        *(char *)puVar7 = (char)iVar11;
        puVar7 = (ulong *)((long)puVar7 + 1);
      }
      puVar12 = (ulong *)((long)puVar7 + ((long)puVar30 - (long)puVar19 & 0xffffffffU));
      do {
        puVar8 = puVar7 + 1;
        *puVar7 = *puVar19;
        puVar7 = puVar8;
        puVar19 = puVar19 + 1;
      } while (puVar8 < puVar12);
      do {
        pcVar6 = (char *)((long)puVar12 + 2);
        *(short *)puVar12 = (short)iVar31;
        if (puVar18 == puVar9) {
          puVar19 = (ulong *)((long)puVar24 + 4);
          puVar7 = (ulong *)((long)puVar30 + (long)puVar9 + ((ulong)uVar14 - (long)puVar24));
          puVar18 = puVar25;
          if (puVar7 <= puVar25) {
            puVar18 = puVar7;
          }
          puVar7 = (ulong *)((long)puVar30 + 4);
          iVar31 = (int)puVar7;
          if (puVar7 < (ulong *)((long)puVar18 - 7U)) {
            uVar23 = *puVar7 ^ *puVar19;
            if (uVar23 == 0) {
              puVar7 = (ulong *)((long)puVar30 + 0xc);
              puVar19 = (ulong *)((long)puVar24 + 0xc);
              goto joined_r0x0016c410;
            }
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          }
          else {
joined_r0x0016c410:
            for (; puVar7 < (ulong *)((long)puVar18 - 7U); puVar7 = puVar7 + 1) {
              uVar23 = *puVar7 ^ *puVar19;
              if (uVar23 != 0) {
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = (ulong)(uint)(((int)puVar7 +
                                       (int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3))
                                      - iVar31);
                goto LAB_0016c1b0;
              }
              puVar19 = puVar19 + 1;
            }
            if ((puVar7 < (ulong *)((long)puVar18 - 3U)) && ((int)*puVar19 == (int)*puVar7)) {
              puVar7 = (ulong *)((long)puVar7 + 4);
              puVar19 = (ulong *)((long)puVar19 + 4);
            }
            if ((puVar7 < (ulong *)((long)puVar18 - 1U)) && ((short)*puVar19 == (short)*puVar7)) {
              puVar7 = (ulong *)((long)puVar7 + 2);
              puVar19 = (ulong *)((long)puVar19 + 2);
            }
            puVar24 = puVar7;
            if ((puVar7 < puVar18) &&
               (puVar24 = (ulong *)((long)puVar7 + 1), (char)*puVar19 != (char)*puVar7)) {
              puVar24 = puVar7;
            }
            uVar23 = (ulong)(uint)((int)puVar24 - iVar31);
          }
LAB_0016c1b0:
          uVar15 = (uint)uVar23;
          puVar19 = (ulong *)((long)puVar30 + uVar23 + 4);
          if (puVar19 == puVar18) {
            puVar19 = puVar18;
            puVar7 = param_2;
            if (puVar18 < puVar10) {
              uVar23 = *puVar18 ^ *param_2;
              if (uVar23 == 0) {
                puVar19 = puVar18 + 1;
                puVar7 = param_2 + 1;
                goto LAB_0016c334;
              }
              uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
              uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              uVar16 = (uint)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
            }
            else {
LAB_0016c334:
              for (; puVar19 < puVar10; puVar19 = puVar19 + 1) {
                uVar23 = *puVar19 ^ *puVar7;
                if (uVar23 != 0) {
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar16 = ((int)puVar19 +
                           (int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3)) -
                           (int)puVar18;
                  goto LAB_0016c3e0;
                }
                puVar7 = puVar7 + 1;
              }
              if ((puVar19 < puVar21) && ((int)*puVar7 == (int)*puVar19)) {
                puVar19 = (ulong *)((long)puVar19 + 4);
                puVar7 = (ulong *)((long)puVar7 + 4);
              }
              if ((puVar19 < puVar22) && ((short)*puVar7 == (short)*puVar19)) {
                puVar19 = (ulong *)((long)puVar19 + 2);
                puVar7 = (ulong *)((long)puVar7 + 2);
              }
              puVar24 = puVar19;
              if ((puVar19 < puVar25) &&
                 (puVar24 = (ulong *)((long)puVar19 + 1), (char)*puVar7 != (char)*puVar19)) {
                puVar24 = puVar19;
              }
              uVar16 = (int)puVar24 - (int)puVar18;
            }
LAB_0016c3e0:
            uVar15 = uVar16 + uVar15;
            puVar19 = (ulong *)((long)puVar18 + (ulong)uVar16);
            cVar20 = *param_3;
          }
          else {
            cVar20 = *param_3;
          }
          if (0xe < uVar15) goto LAB_0016c1cc;
LAB_0016c0ec:
          *param_3 = cVar20 + (char)uVar15;
          param_3 = pcVar6;
        }
        else {
          puVar19 = (ulong *)((long)puVar30 + 4);
          puVar7 = (ulong *)((long)puVar24 + 4);
          iVar31 = (int)puVar19;
          if (puVar19 < puVar10) {
            uVar23 = *puVar19 ^ *puVar7;
            if (uVar23 == 0) {
              puVar19 = (ulong *)((long)puVar30 + 0xc);
              puVar7 = (ulong *)((long)puVar24 + 0xc);
              goto joined_r0x0016c400;
            }
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          }
          else {
joined_r0x0016c400:
            for (; puVar19 < puVar10; puVar19 = puVar19 + 1) {
              uVar23 = *puVar19 ^ *puVar7;
              if (uVar23 != 0) {
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = (ulong)(uint)(((int)puVar19 +
                                       (int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3))
                                      - iVar31);
                goto LAB_0016c0d8;
              }
              puVar7 = puVar7 + 1;
            }
            if ((puVar19 < puVar21) && ((int)*puVar7 == (int)*puVar19)) {
              puVar19 = (ulong *)((long)puVar19 + 4);
              puVar7 = (ulong *)((long)puVar7 + 4);
            }
            if ((puVar19 < puVar22) && ((short)*puVar7 == (short)*puVar19)) {
              puVar19 = (ulong *)((long)puVar19 + 2);
              puVar7 = (ulong *)((long)puVar7 + 2);
            }
            puVar18 = puVar19;
            if ((puVar19 < puVar25) &&
               (puVar18 = (ulong *)((long)puVar19 + 1), (char)*puVar7 != (char)*puVar19)) {
              puVar18 = puVar19;
            }
            uVar23 = (ulong)(uint)((int)puVar18 - iVar31);
          }
LAB_0016c0d8:
          puVar19 = (ulong *)((long)puVar30 + uVar23 + 4);
          cVar20 = *param_3;
          uVar15 = (uint)uVar23;
          if (uVar15 < 0xf) goto LAB_0016c0ec;
LAB_0016c1cc:
          uVar16 = uVar15 - 0xf;
          *param_3 = cVar20 + '\x0f';
          pcVar6[0] = -1;
          pcVar6[1] = -1;
          pcVar6[2] = -1;
          pcVar6[3] = -1;
          if (0x3fb < uVar16) {
            uVar16 = ((uVar15 - 0x40b) / 0x3fc) * 4;
            memset((char *)((long)puVar12 + 6),0xff,(ulong)(uVar16 + 4));
            pcVar6 = (char *)((long)puVar12 + 6) + uVar16;
            uVar16 = (uVar15 - 0x40b) % 0x3fc;
          }
          pcVar6[(ulong)(uVar16 & 0xffff) / 0xff] = (char)uVar16 + (char)((uVar16 & 0xffff) / 0xff);
          param_3 = pcVar6 + (ulong)(uVar16 & 0xffff) / 0xff + 1;
        }
        if (puVar32 <= puVar19) break;
        uVar16 = (int)puVar19 - iVar33;
        *(int *)(param_1 +
                ((ulong)(*(long *)((long)puVar19 + -2) * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
             (int)(long *)((long)puVar19 + -2) - iVar33;
        uVar23 = *puVar19 * -0x30e4432345000000 >> 0x32 & 0x3ffc;
        uVar15 = *(uint *)(param_1 + uVar23);
        *(uint *)(param_1 + uVar23) = uVar16;
        puVar18 = puVar9;
        lVar4 = lVar17;
        if (local_64 <= uVar15) {
          puVar18 = param_2;
          lVar4 = lVar13;
        }
        if (((uVar15 < local_64 - uVar14) || (uVar15 + 0xffff < uVar16)) ||
           (puVar24 = (ulong *)(lVar4 + (ulong)uVar15), (int)*puVar24 != (int)*puVar19))
        goto LAB_0016bddc;
        puVar12 = (ulong *)(param_3 + 1);
        *param_3 = '\0';
        iVar31 = uVar16 - uVar15;
        puVar30 = puVar19;
      } while( true );
    }
LAB_0016bc24:
    __n = (long)param_2 + ((long)(int)param_4 - (long)puVar19);
    uVar23 = __n - 0xf;
    if (__n < 0xf) {
      *param_3 = (char)((int)__n << 4);
      pcVar6 = param_3 + 1;
    }
    else {
      pcVar6 = param_3 + 1;
      *param_3 = -0x10;
      if (0xfe < uVar23) {
        uVar28 = (__n - 0x10e) / 0xff;
        memset(pcVar6,0xff,uVar28 + 1);
        uVar23 = (__n - 0x10e) % 0xff;
        pcVar6 = param_3 + uVar28 + 2;
      }
      *pcVar6 = (char)uVar23;
      pcVar6 = pcVar6 + 1;
    }
  }
  else {
    if (0x7e000000 < param_4) goto LAB_0016bca0;
    *(uint *)(param_1 + 0x4018) = uVar14 + param_4;
    *puVar2 = local_64 + param_4;
    *(undefined2 *)(param_1 + 0x4006) = 2;
    if (0xc < (int)param_4) {
      lVar17 = (long)puVar9 + lVar17 + (ulong)uVar14;
      puVar18 = (ulong *)((long)param_2 + 2);
      puVar25 = (ulong *)((long)param_2 + (long)(int)param_4 + -5);
      puVar21 = (ulong *)((long)param_2 + (long)(int)param_4 + -8);
      puVar10 = (ulong *)((long)param_2 + (long)(int)param_4 + -0xb);
      puVar7 = (ulong *)((long)param_2 + 1);
      uVar15 = local_64 + 1;
      puVar32 = (ulong *)((long)param_2 + (long)(int)param_4 + -0xc);
      puVar22 = (ulong *)((long)param_2 + (long)(int)param_4 + -6);
      *(uint *)(param_1 + (*param_2 * -0x30e4432345000000 >> 0x32 & 0x3ffc)) = local_64;
LAB_0016c4c8:
      uVar26 = *puVar7;
      uVar28 = 0x41;
      uVar23 = 1;
      while( true ) {
        uVar27 = uVar26 * -0x30e4432345000000 >> 0x32 & 0x3ffc;
        uVar16 = *(uint *)(param_1 + uVar27);
        uVar26 = *puVar18;
        *(uint *)(param_1 + uVar27) = uVar15;
        lVar4 = lVar17;
        if (local_64 <= uVar16) {
          lVar4 = lVar13;
        }
        if ((uVar15 <= uVar16 + 0xffff) &&
           (puVar12 = (ulong *)(lVar4 + (ulong)uVar16), (int)*puVar12 == (int)*puVar7)) break;
        puVar12 = (ulong *)((long)puVar18 + uVar23);
        uVar23 = uVar28 >> 6;
        uVar28 = (ulong)((int)uVar28 + 1);
        uVar15 = (int)puVar18 - iVar33;
        puVar7 = puVar18;
        puVar18 = puVar12;
        if (puVar10 < puVar12) goto LAB_0016bcec;
      }
      iVar31 = uVar15 - uVar16;
      puVar18 = puVar9;
      if (local_64 <= uVar16) {
        puVar18 = param_2;
      }
      do {
        puVar24 = puVar12;
        puVar30 = puVar7;
        if ((puVar24 <= puVar18) || (puVar30 <= puVar19)) break;
        puVar7 = (ulong *)((long)puVar30 + -1);
        puVar12 = (ulong *)((long)puVar24 + -1);
      } while (*(char *)((long)puVar30 + -1) == *(char *)((long)puVar24 + -1));
      uVar15 = (uint)((long)puVar30 - (long)puVar19);
      iVar11 = uVar15 - 0xf;
      puVar7 = (ulong *)(param_3 + 1);
      if (uVar15 < 0xf) {
        *param_3 = (char)(uVar15 << 4);
      }
      else {
        *param_3 = -0x10;
        if (0xfe < iVar11) {
          if (0x1fc < iVar11) {
            iVar11 = 0x1fd;
          }
          iVar1 = (int)puVar30 + 0xef;
          iVar29 = (int)puVar19;
          memset(puVar7,0xff,(ulong)((uint)(iVar1 - (iVar11 + iVar29)) / 0xff + 1));
          uVar15 = (iVar1 - iVar11) - iVar29;
          puVar7 = (ulong *)(param_3 + (ulong)uVar15 / 0xff + 2);
          iVar11 = ((int)puVar30 - iVar29) + uVar15 / 0xff + -0x10e;
        }
        *(char *)puVar7 = (char)iVar11;
        puVar7 = (ulong *)((long)puVar7 + 1);
      }
      puVar12 = (ulong *)((long)puVar7 + ((long)puVar30 - (long)puVar19 & 0xffffffffU));
      do {
        puVar8 = puVar7 + 1;
        *puVar7 = *puVar19;
        puVar7 = puVar8;
        puVar19 = puVar19 + 1;
      } while (puVar8 < puVar12);
      do {
        pcVar6 = (char *)((long)puVar12 + 2);
        *(short *)puVar12 = (short)iVar31;
        if (puVar18 == puVar9) {
          puVar19 = (ulong *)((long)puVar24 + 4);
          puVar7 = (ulong *)((long)puVar30 + (long)puVar9 + ((ulong)uVar14 - (long)puVar24));
          puVar18 = puVar25;
          if (puVar7 <= puVar25) {
            puVar18 = puVar7;
          }
          puVar7 = (ulong *)((long)puVar30 + 4);
          iVar31 = (int)puVar7;
          if (puVar7 < (ulong *)((long)puVar18 - 7U)) {
            uVar23 = *puVar7 ^ *puVar19;
            if (uVar23 == 0) {
              puVar7 = (ulong *)((long)puVar30 + 0xc);
              puVar19 = (ulong *)((long)puVar24 + 0xc);
              goto joined_r0x0016ca9c;
            }
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          }
          else {
joined_r0x0016ca9c:
            for (; puVar7 < (ulong *)((long)puVar18 - 7U); puVar7 = puVar7 + 1) {
              uVar23 = *puVar7 ^ *puVar19;
              if (uVar23 != 0) {
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = (ulong)(uint)(((int)puVar7 +
                                       (int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3))
                                      - iVar31);
                goto LAB_0016c860;
              }
              puVar19 = puVar19 + 1;
            }
            if ((puVar7 < (ulong *)((long)puVar18 - 3U)) && ((int)*puVar19 == (int)*puVar7)) {
              puVar7 = (ulong *)((long)puVar7 + 4);
              puVar19 = (ulong *)((long)puVar19 + 4);
            }
            if ((puVar7 < (ulong *)((long)puVar18 - 1U)) && ((short)*puVar19 == (short)*puVar7)) {
              puVar7 = (ulong *)((long)puVar7 + 2);
              puVar19 = (ulong *)((long)puVar19 + 2);
            }
            puVar24 = puVar7;
            if ((puVar7 < puVar18) &&
               (puVar24 = (ulong *)((long)puVar7 + 1), (char)*puVar19 != (char)*puVar7)) {
              puVar24 = puVar7;
            }
            uVar23 = (ulong)(uint)((int)puVar24 - iVar31);
          }
LAB_0016c860:
          uVar15 = (uint)uVar23;
          puVar19 = (ulong *)((long)puVar30 + uVar23 + 4);
          if (puVar19 == puVar18) {
            puVar19 = puVar18;
            puVar7 = param_2;
            if (puVar18 < puVar32) {
              uVar23 = *puVar18 ^ *param_2;
              if (uVar23 == 0) {
                puVar19 = puVar18 + 1;
                puVar7 = param_2 + 1;
                goto LAB_0016c9c0;
              }
              uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
              uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              uVar16 = (uint)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
            }
            else {
LAB_0016c9c0:
              for (; puVar19 < puVar32; puVar19 = puVar19 + 1) {
                uVar23 = *puVar19 ^ *puVar7;
                if (uVar23 != 0) {
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar16 = ((int)puVar19 +
                           (int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3)) -
                           (int)puVar18;
                  goto LAB_0016ca6c;
                }
                puVar7 = puVar7 + 1;
              }
              if ((puVar19 < puVar21) && ((int)*puVar7 == (int)*puVar19)) {
                puVar19 = (ulong *)((long)puVar19 + 4);
                puVar7 = (ulong *)((long)puVar7 + 4);
              }
              if ((puVar19 < puVar22) && ((short)*puVar7 == (short)*puVar19)) {
                puVar19 = (ulong *)((long)puVar19 + 2);
                puVar7 = (ulong *)((long)puVar7 + 2);
              }
              puVar24 = puVar19;
              if ((puVar19 < puVar25) &&
                 (puVar24 = (ulong *)((long)puVar19 + 1), (char)*puVar7 != (char)*puVar19)) {
                puVar24 = puVar19;
              }
              uVar16 = (int)puVar24 - (int)puVar18;
            }
LAB_0016ca6c:
            uVar15 = uVar16 + uVar15;
            puVar19 = (ulong *)((long)puVar18 + (ulong)uVar16);
            cVar20 = *param_3;
          }
          else {
            cVar20 = *param_3;
          }
          if (0xe < uVar15) goto LAB_0016c87c;
LAB_0016c79c:
          *param_3 = cVar20 + (char)uVar15;
          param_3 = pcVar6;
        }
        else {
          puVar19 = (ulong *)((long)puVar30 + 4);
          puVar7 = (ulong *)((long)puVar24 + 4);
          iVar31 = (int)puVar19;
          if (puVar19 < puVar32) {
            uVar23 = *puVar19 ^ *puVar7;
            if (uVar23 == 0) {
              puVar19 = (ulong *)((long)puVar30 + 0xc);
              puVar7 = (ulong *)((long)puVar24 + 0xc);
              goto joined_r0x0016ca8c;
            }
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
          }
          else {
joined_r0x0016ca8c:
            for (; puVar19 < puVar32; puVar19 = puVar19 + 1) {
              uVar23 = *puVar19 ^ *puVar7;
              if (uVar23 != 0) {
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = (ulong)(uint)(((int)puVar19 +
                                       (int)((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3))
                                      - iVar31);
                goto LAB_0016c788;
              }
              puVar7 = puVar7 + 1;
            }
            if ((puVar19 < puVar21) && ((int)*puVar7 == (int)*puVar19)) {
              puVar19 = (ulong *)((long)puVar19 + 4);
              puVar7 = (ulong *)((long)puVar7 + 4);
            }
            if ((puVar19 < puVar22) && ((short)*puVar7 == (short)*puVar19)) {
              puVar19 = (ulong *)((long)puVar19 + 2);
              puVar7 = (ulong *)((long)puVar7 + 2);
            }
            puVar18 = puVar19;
            if ((puVar19 < puVar25) &&
               (puVar18 = (ulong *)((long)puVar19 + 1), (char)*puVar7 != (char)*puVar19)) {
              puVar18 = puVar19;
            }
            uVar23 = (ulong)(uint)((int)puVar18 - iVar31);
          }
LAB_0016c788:
          puVar19 = (ulong *)((long)puVar30 + uVar23 + 4);
          cVar20 = *param_3;
          uVar15 = (uint)uVar23;
          if (uVar15 < 0xf) goto LAB_0016c79c;
LAB_0016c87c:
          uVar16 = uVar15 - 0xf;
          *param_3 = cVar20 + '\x0f';
          pcVar6[0] = -1;
          pcVar6[1] = -1;
          pcVar6[2] = -1;
          pcVar6[3] = -1;
          if (0x3fb < uVar16) {
            uVar16 = ((uVar15 - 0x40b) / 0x3fc) * 4;
            memset((char *)((long)puVar12 + 6),0xff,(ulong)(uVar16 + 4));
            pcVar6 = (char *)((long)puVar12 + 6) + uVar16;
            uVar16 = (uVar15 - 0x40b) % 0x3fc;
          }
          pcVar6[(ulong)(uVar16 & 0xffff) / 0xff] = (char)uVar16 + (char)((uVar16 & 0xffff) / 0xff);
          param_3 = pcVar6 + (ulong)(uVar16 & 0xffff) / 0xff + 1;
        }
        if (puVar10 <= puVar19) break;
        uVar16 = (int)puVar19 - iVar33;
        *(int *)(param_1 +
                ((ulong)(*(long *)((long)puVar19 + -2) * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
             (int)(long *)((long)puVar19 + -2) - iVar33;
        uVar23 = *puVar19 * -0x30e4432345000000 >> 0x32 & 0x3ffc;
        uVar15 = *(uint *)(param_1 + uVar23);
        *(uint *)(param_1 + uVar23) = uVar16;
        puVar18 = puVar9;
        lVar4 = lVar17;
        if (local_64 <= uVar15) {
          puVar18 = param_2;
          lVar4 = lVar13;
        }
        if ((uVar15 + 0xffff < uVar16) ||
           (puVar24 = (ulong *)(lVar4 + (ulong)uVar15), (int)*puVar24 != (int)*puVar19))
        goto LAB_0016c4b4;
        puVar12 = (ulong *)(param_3 + 1);
        *param_3 = '\0';
        iVar31 = uVar16 - uVar15;
        puVar30 = puVar19;
      } while( true );
    }
LAB_0016bcec:
    __n = (long)param_2 + ((long)(int)param_4 - (long)puVar19);
    uVar23 = __n - 0xf;
    if (__n < 0xf) {
      *param_3 = (char)((int)__n << 4);
    }
    else {
      pcVar6 = param_3 + 1;
      *param_3 = -0x10;
      if (0xfe < uVar23) {
        uVar28 = (__n - 0x10e) / 0xff;
        memset(pcVar6,0xff,uVar28 + 1);
        uVar23 = (__n - 0x10e) % 0xff;
        pcVar6 = param_3 + uVar28 + 2;
      }
      *pcVar6 = (char)uVar23;
      param_3 = pcVar6;
    }
    pcVar6 = param_3 + 1;
  }
  memcpy(pcVar6,puVar19,__n);
  iVar5 = ((int)pcVar6 + (int)__n) - iVar5;
LAB_0016cad8:
  *(ulong **)(param_1 + 0x4008) = param_2;
  *(uint *)(param_1 + 0x4018) = param_4;
  return iVar5;
LAB_0016c4b4:
  puVar7 = (ulong *)((long)puVar19 + 1);
  puVar18 = (ulong *)((long)puVar19 + 2);
  uVar15 = (int)puVar7 - iVar33;
  if (puVar10 < puVar18) goto LAB_0016bcec;
  goto LAB_0016c4c8;
LAB_0016bddc:
  puVar7 = (ulong *)((long)puVar19 + 1);
  puVar18 = (ulong *)((long)puVar19 + 2);
  uVar15 = (int)puVar7 - iVar33;
  if (puVar32 < puVar18) goto LAB_0016bc24;
  goto LAB_0016bdf0;
}


// ===== 0016cb00  LZ4_saveDict =====

uint LZ4_saveDict(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x4018);
  if (0xffff < param_3) {
    param_3 = 0x10000;
  }
  uVar1 = uVar2;
  if (param_3 <= uVar2) {
    uVar1 = param_3;
  }
  memmove(param_2,(void *)((*(long *)(param_1 + 0x4008) + (ulong)uVar2) - (ulong)uVar1),(ulong)uVar1
         );
  *(void **)(param_1 + 0x4008) = param_2;
  *(uint *)(param_1 + 0x4018) = uVar1;
  return uVar1;
}


// ===== 0016cb68  LZ4_decompress_safe =====

int LZ4_decompress_safe(ushort *param_1,undefined8 *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  ushort uVar5;
  ushort *__src;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *__dest;
  ushort *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ushort *puVar6;
  
  if (param_1 != (ushort *)0x0) {
    if (param_4 == 0) {
      if (param_3 == 1) {
        return -(uint)((byte)*param_1 != 0);
      }
    }
    else if (param_3 != 0) {
      pbVar1 = (byte *)((long)param_1 + (long)param_3);
      puVar2 = (undefined8 *)((long)param_2 + (long)param_4);
      puVar11 = (undefined8 *)((long)puVar2 + -7);
      puVar6 = param_1;
      __dest = param_2;
LAB_0016cbf0:
      do {
        __src = (ushort *)((long)puVar6 + 1);
        bVar3 = (byte)*puVar6;
        uVar8 = (ulong)(bVar3 >> 4);
        if (bVar3 >> 4 == 0xf) {
          if (pbVar1 + -0xf <= __src) goto LAB_0016cea0;
          uVar7 = 0;
          puVar6 = __src;
          do {
            __src = (ushort *)((long)puVar6 + 1);
            uVar5 = *puVar6;
            uVar7 = uVar7 + (byte)uVar5;
            if (pbVar1 + -0xf <= __src) break;
            puVar6 = __src;
          } while ((byte)uVar5 == 0xff);
          uVar8 = (ulong)uVar7 + 0xf;
          if ((CARRY8((ulong)__dest,uVar8)) || (CARRY8((ulong)__src,uVar8))) goto LAB_0016cea0;
LAB_0016cc44:
          puVar13 = (undefined8 *)((long)__dest + uVar8);
          if (((undefined8 *)((long)puVar2 + -0xc) < puVar13) ||
             (puVar6 = (ushort *)((long)__src + uVar8), pbVar1 + -8 < puVar6)) {
            if ((puVar13 <= puVar2) && ((byte *)((long)__src + uVar8) == pbVar1)) {
              memcpy(__dest,__src,uVar8);
              return (int)puVar13 - (int)param_2;
            }
LAB_0016cea0:
            return ~(uint)__src + (int)param_1;
          }
          do {
            puVar9 = __dest + 1;
            *__dest = *(undefined8 *)__src;
            __src = __src + 4;
            __dest = puVar9;
          } while (puVar9 < puVar13);
          __src = puVar6 + 1;
          uVar8 = (ulong)*puVar6;
          puVar9 = (undefined8 *)((long)puVar13 - uVar8);
        }
        else {
          if ((puVar2 + -4 < __dest) || (pbVar1 + -0x10 <= __src)) goto LAB_0016cc44;
          uVar19 = *(undefined8 *)__src;
          puVar15 = (ushort *)((long)__src + uVar8);
          puVar13 = (undefined8 *)((long)__dest + uVar8);
          uVar12 = (ulong)bVar3 & 0xf;
          __dest[1] = *(undefined8 *)((long)puVar6 + 9);
          *__dest = uVar19;
          __src = puVar15 + 1;
          uVar5 = *puVar15;
          uVar8 = (ulong)uVar5;
          puVar9 = (undefined8 *)((long)puVar13 - uVar8);
          if ((((int)uVar12 != 0xf) && (7 < uVar5)) && (param_2 <= puVar9)) {
            *puVar13 = *puVar9;
            puVar13[1] = puVar9[1];
            *(undefined2 *)(puVar13 + 2) = *(undefined2 *)(puVar9 + 2);
            __dest = (undefined8 *)((long)puVar13 + uVar12 + 4);
            puVar6 = __src;
            goto LAB_0016cbf0;
          }
        }
        uVar12 = (ulong)bVar3 & 0xf;
        if (puVar9 < param_2) goto LAB_0016cea0;
        *(undefined4 *)puVar13 = 0;
        if (uVar12 == 0xf) {
          uVar7 = 0;
          puVar15 = __src;
          puVar6 = __src;
          if (__src <= pbVar1 + -5) {
            puVar6 = (ushort *)(pbVar1 + -5);
          }
          do {
            __src = (ushort *)((long)puVar15 + 1);
            uVar5 = *puVar15;
            if (puVar6 == puVar15) {
              __src = (ushort *)((long)puVar15 + 1);
              goto LAB_0016cea0;
            }
            uVar7 = uVar7 + (byte)uVar5;
            puVar15 = __src;
          } while ((byte)uVar5 == 0xff);
          uVar12 = (ulong)uVar7 + 0xf;
          if (CARRY8((ulong)puVar13,uVar12)) goto LAB_0016cea0;
        }
        __dest = (undefined8 *)((long)puVar13 + uVar12 + 4);
        if (uVar8 < 8) {
          uVar7 = *(uint *)(&DAT_001461e8 + uVar8 * 4);
          iVar4 = *(int *)(&DAT_001461a8 + uVar8 * 4);
          *(undefined1 *)puVar13 = *(undefined1 *)puVar9;
          *(undefined1 *)((long)puVar13 + 1) = *(undefined1 *)((long)puVar9 + 1);
          *(undefined1 *)((long)puVar13 + 2) = *(undefined1 *)((long)puVar9 + 2);
          *(undefined1 *)((long)puVar13 + 3) = *(undefined1 *)((long)puVar9 + 3);
          puVar10 = (undefined8 *)((long)((long)puVar9 + (ulong)uVar7) - (long)iVar4);
          *(undefined4 *)((long)puVar13 + 4) = *(undefined4 *)((long)puVar9 + (ulong)uVar7);
        }
        else {
          puVar10 = puVar9 + 1;
          *puVar13 = *puVar9;
        }
        puVar6 = __src;
        if ((undefined8 *)((long)puVar2 + -0xc) < __dest) {
          puVar9 = puVar13 + 1;
          if ((undefined8 *)((long)puVar2 + -5) < __dest) goto LAB_0016cea0;
          puVar14 = puVar10;
          puVar17 = puVar9;
          if (puVar9 < puVar11) {
            do {
              puVar18 = puVar17 + 1;
              *puVar17 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar17 = puVar18;
            } while (puVar18 < puVar11);
            puVar10 = (undefined8 *)((long)puVar10 + ((long)puVar11 - (long)puVar9));
            puVar9 = puVar11;
          }
          if (puVar9 < __dest) {
            uVar8 = (long)puVar13 + (uVar12 - (long)puVar9) + 4;
            if ((0x1f < uVar8) &&
               (((undefined8 *)((long)puVar10 + (long)puVar13 + (uVar12 - (long)puVar9) + 4) <=
                 puVar9 || (__dest <= puVar10)))) {
              uVar16 = uVar8 & 0xffffffffffffffe0;
              puVar13 = puVar10 + 2;
              puVar10 = (undefined8 *)((long)puVar10 + uVar16);
              puVar14 = puVar9 + 2;
              uVar12 = uVar16;
              do {
                puVar17 = puVar13 + -1;
                uVar19 = puVar13[-2];
                uVar21 = puVar13[1];
                uVar20 = *puVar13;
                puVar13 = puVar13 + 4;
                uVar12 = uVar12 - 0x20;
                puVar14[-1] = *puVar17;
                puVar14[-2] = uVar19;
                puVar14[1] = uVar21;
                *puVar14 = uVar20;
                puVar14 = puVar14 + 4;
              } while (uVar12 != 0);
              puVar9 = (undefined8 *)((long)puVar9 + uVar16);
              if (uVar16 == uVar8) goto LAB_0016cbf0;
            }
            do {
              puVar13 = (undefined8 *)((long)puVar9 + 1);
              *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
              puVar10 = (undefined8 *)((long)puVar10 + 1);
              puVar9 = puVar13;
            } while (__dest != puVar13);
          }
          goto LAB_0016cbf0;
        }
        puVar13[1] = *puVar10;
        if (0xc < uVar12) {
          puVar13 = puVar13 + 2;
          do {
            puVar10 = puVar10 + 1;
            puVar9 = puVar13 + 1;
            *puVar13 = *puVar10;
            puVar13 = puVar9;
          } while (puVar9 < __dest);
        }
      } while( true );
    }
  }
  return -1;
}


// ===== 0016cedc  LZ4_decompress_safe_partial =====

int LZ4_decompress_safe_partial
              (ushort *param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  size_t __n;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  ushort uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ushort *__src;
  ushort *puVar17;
  undefined8 *__dest;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ushort *puVar16;
  
  if (param_5 <= param_4) {
    param_4 = param_5;
  }
  if (param_1 != (ushort *)0x0) {
    if (param_4 == 0) {
      if (param_3 == 1) {
        return -(uint)((byte)*param_1 != 0);
      }
    }
    else if (param_3 != 0) {
      puVar2 = (ushort *)((long)param_1 + (long)param_3);
      puVar3 = (undefined8 *)((long)param_2 + (long)param_4);
      puVar16 = param_1;
      __dest = param_2;
LAB_0016cf60:
      do {
        __src = (ushort *)((long)puVar16 + 1);
        bVar4 = (byte)*puVar16;
        uVar12 = (ulong)(bVar4 >> 4);
        if (bVar4 >> 4 == 0xf) {
          if ((ushort *)((long)puVar2 - 0xfU) <= __src) goto LAB_0016d268;
          uVar9 = 0;
          puVar16 = __src;
          do {
            __src = (ushort *)((long)puVar16 + 1);
            uVar7 = *puVar16;
            uVar9 = uVar9 + (byte)uVar7;
            if ((ushort *)((long)puVar2 - 0xfU) <= __src) break;
            puVar16 = __src;
          } while ((byte)uVar7 == 0xff);
          uVar12 = (ulong)uVar9 + 0xf;
          if ((CARRY8((ulong)__dest,uVar12)) || (CARRY8((ulong)__src,uVar12))) goto LAB_0016d268;
LAB_0016cfb4:
          puVar10 = (undefined8 *)((long)__dest + uVar12);
          if (((undefined8 *)((long)puVar3 - 0xcU) < puVar10) ||
             (puVar16 = (ushort *)((long)__src + uVar12), puVar2 + -4 < puVar16)) {
            __n = (long)puVar3 - (long)__dest;
            if (puVar10 <= puVar3) {
              __n = uVar12;
            }
            puVar16 = (ushort *)((long)__src + __n);
            if (puVar2 < puVar16) goto LAB_0016d268;
            memcpy(__dest,__src,__n);
            bVar1 = puVar3 <= puVar10;
            puVar10 = (undefined8 *)((long)__dest + __n);
            if (bVar1) goto LAB_0016d25c;
          }
          else {
            do {
              puVar8 = __dest + 1;
              *__dest = *(undefined8 *)__src;
              __src = __src + 4;
              __dest = puVar8;
            } while (puVar8 < puVar10);
          }
          __src = puVar16 + 1;
          uVar12 = (ulong)*puVar16;
          puVar8 = (undefined8 *)((long)puVar10 - uVar12);
        }
        else {
          if ((puVar3 + -4 < __dest) || (puVar2 + -8 <= __src)) goto LAB_0016cfb4;
          uVar18 = *(undefined8 *)__src;
          puVar17 = (ushort *)((long)__src + uVar12);
          puVar10 = (undefined8 *)((long)__dest + uVar12);
          uVar13 = (ulong)bVar4 & 0xf;
          __dest[1] = *(undefined8 *)((long)puVar16 + 9);
          *__dest = uVar18;
          __src = puVar17 + 1;
          uVar7 = *puVar17;
          uVar12 = (ulong)uVar7;
          puVar8 = (undefined8 *)((long)puVar10 - uVar12);
          if ((((int)uVar13 != 0xf) && (7 < uVar7)) && (param_2 <= puVar8)) {
            __dest = (undefined8 *)((long)puVar10 + uVar13 + 4);
            *puVar10 = *puVar8;
            puVar10[1] = puVar8[1];
            *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar8 + 2);
            puVar16 = __src;
            goto LAB_0016cf60;
          }
        }
        uVar13 = (ulong)bVar4 & 0xf;
        if (puVar8 < param_2) {
LAB_0016d268:
          return ~(uint)__src + (int)param_1;
        }
        if (uVar13 == 0xf) {
          uVar9 = 0;
          puVar17 = __src;
          puVar16 = __src;
          if (__src <= (ushort *)((long)puVar2 - 5U)) {
            puVar16 = (ushort *)((long)puVar2 - 5U);
          }
          do {
            __src = (ushort *)((long)puVar17 + 1);
            uVar7 = *puVar17;
            if (puVar16 == puVar17) {
              __src = (ushort *)((long)puVar17 + 1);
              goto LAB_0016d268;
            }
            uVar9 = uVar9 + (byte)uVar7;
            puVar17 = __src;
          } while ((byte)uVar7 == 0xff);
          uVar13 = (ulong)uVar9 + 0xf;
          if (CARRY8((ulong)puVar10,uVar13)) goto LAB_0016d268;
        }
        uVar14 = uVar13 + 4;
        __dest = (undefined8 *)((long)puVar10 + uVar14);
        puVar16 = __src;
        if ((undefined8 *)((long)puVar3 - 0xcU) < __dest) {
          if ((ulong)((long)puVar3 - (long)puVar10) <= uVar14) {
            uVar14 = (long)puVar3 - (long)puVar10;
          }
          __dest = (undefined8 *)((long)puVar10 + uVar14);
          if (puVar10 < (undefined8 *)((long)puVar8 + uVar14)) {
            if (0 < (long)uVar14) {
              puVar11 = __dest;
              if (__dest <= (undefined8 *)((long)puVar10 + 1U)) {
                puVar11 = (undefined8 *)((long)puVar10 + 1);
              }
              uVar12 = (long)puVar11 - (long)puVar10;
              if (0x1f < uVar12) {
                puVar11 = __dest;
                if (__dest <= (undefined8 *)((long)puVar10 + 1U)) {
                  puVar11 = (undefined8 *)((long)puVar10 + 1);
                }
                if (((undefined8 *)((long)puVar8 + ((long)puVar11 - (long)puVar10)) <= puVar10) ||
                   (puVar11 <= puVar8)) {
                  uVar14 = uVar12 & 0xffffffffffffffe0;
                  puVar11 = puVar8 + 2;
                  puVar8 = (undefined8 *)((long)puVar8 + uVar14);
                  puVar15 = puVar10 + 2;
                  uVar13 = uVar14;
                  do {
                    puVar6 = puVar11 + -1;
                    uVar18 = puVar11[-2];
                    uVar20 = puVar11[1];
                    uVar19 = *puVar11;
                    puVar11 = puVar11 + 4;
                    uVar13 = uVar13 - 0x20;
                    puVar15[-1] = *puVar6;
                    puVar15[-2] = uVar18;
                    puVar15[1] = uVar20;
                    *puVar15 = uVar19;
                    puVar15 = puVar15 + 4;
                  } while (uVar13 != 0);
                  puVar10 = (undefined8 *)((long)puVar10 + uVar14);
                  if (uVar12 == uVar14) goto LAB_0016cf58;
                }
              }
              do {
                puVar11 = (undefined8 *)((long)puVar10 + 1);
                *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
                puVar8 = (undefined8 *)((long)puVar8 + 1);
                puVar10 = puVar11;
              } while (puVar11 < __dest);
            }
          }
          else {
            memcpy(puVar10,puVar8,uVar14);
          }
LAB_0016cf58:
          puVar10 = puVar3;
          if (__dest == puVar3) {
LAB_0016d25c:
            return (int)puVar10 - (int)param_2;
          }
        }
        else {
          if (uVar12 < 8) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
            uVar9 = *(uint *)(&DAT_001461e8 + uVar12 * 4);
            *(undefined1 *)((long)puVar10 + 1) = *(undefined1 *)((long)puVar8 + 1);
            iVar5 = *(int *)(&DAT_001461a8 + uVar12 * 4);
            *(undefined1 *)((long)puVar10 + 2) = *(undefined1 *)((long)puVar8 + 2);
            puVar11 = (undefined8 *)((long)((long)puVar8 + (ulong)uVar9) - (long)iVar5);
            *(undefined1 *)((long)puVar10 + 3) = *(undefined1 *)((long)puVar8 + 3);
            *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)((long)puVar8 + (ulong)uVar9);
            puVar10[1] = *puVar11;
          }
          else {
            puVar11 = puVar8 + 1;
            *puVar10 = *puVar8;
            puVar10[1] = *puVar11;
          }
          if (0xc < uVar13) {
            puVar10 = puVar10 + 2;
            do {
              puVar11 = puVar11 + 1;
              puVar8 = puVar10 + 1;
              *puVar10 = *puVar11;
              puVar10 = puVar8;
            } while (puVar8 < __dest);
          }
        }
      } while( true );
    }
  }
  return -1;
}


// ===== 0016d2b4  LZ4_decompress_fast =====

int LZ4_decompress_fast(ushort *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  undefined8 *puVar16;
  ushort *__src;
  size_t __n;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (param_1 == (ushort *)0x0) {
    return -1;
  }
  if (param_3 == 0) {
    iVar3 = -1;
    if ((byte)*param_1 == 0) {
      iVar3 = 1;
    }
    return iVar3;
  }
  puVar1 = (undefined8 *)((long)param_2 + (long)param_3);
  puVar11 = (undefined8 *)((long)puVar1 + -7);
  puVar15 = param_1;
LAB_0016d320:
  do {
    while( true ) {
      __src = (ushort *)((long)puVar15 + 1);
      uVar5 = (ulong)(byte)*puVar15;
      bVar4 = (byte)*puVar15 >> 4;
      __n = (size_t)bVar4;
      if ((0x8f < uVar5) || ((undefined8 *)((long)puVar1 + -0x1a) < param_2)) break;
      puVar15 = (ushort *)((long)__src + __n);
      *param_2 = *(undefined8 *)__src;
      __src = puVar15 + 1;
      uVar2 = *puVar15;
      uVar6 = (ulong)uVar2;
      puVar13 = (undefined8 *)((long)param_2 + __n);
      puVar14 = (undefined8 *)((long)puVar13 - uVar6);
      if (((int)(uVar5 & 0xf) == 0xf) || (uVar2 < 8)) goto LAB_0016d3bc;
      *puVar13 = *puVar14;
      puVar13[1] = puVar14[1];
      param_2 = (undefined8 *)((long)puVar13 + (uVar5 & 0xf) + 4);
      *(undefined2 *)(puVar13 + 2) = *(undefined2 *)(puVar14 + 2);
      puVar15 = __src;
    }
    if (bVar4 == 0xf) {
      uVar12 = 0;
      puVar15 = __src;
      do {
        __src = (ushort *)((long)puVar15 + 1);
        uVar2 = *puVar15;
        uVar12 = uVar12 + (byte)uVar2;
        puVar15 = __src;
      } while ((byte)uVar2 == 0xff);
      __n = (ulong)uVar12 + 0xf;
    }
    puVar13 = (undefined8 *)((long)param_2 + __n);
    puVar15 = __src;
    if (puVar1 + -1 < puVar13) {
      if (puVar13 == puVar1) {
        memcpy(param_2,__src,__n);
        return ((int)__src + (int)__n) - (int)param_1;
      }
LAB_0016d54c:
      return ~(uint)__src + (int)param_1;
    }
    do {
      puVar14 = param_2 + 1;
      *param_2 = *(undefined8 *)puVar15;
      param_2 = puVar14;
      puVar15 = puVar15 + 4;
    } while (puVar14 < puVar13);
    puVar15 = (ushort *)((long)__src + __n);
    __src = puVar15 + 1;
    uVar6 = (ulong)*puVar15;
    puVar14 = (undefined8 *)((long)puVar13 - uVar6);
LAB_0016d3bc:
    uVar5 = uVar5 & 0xf;
    *(undefined4 *)puVar13 = 0;
    if (uVar5 == 0xf) {
      uVar12 = 0;
      puVar15 = __src;
      do {
        __src = (ushort *)((long)puVar15 + 1);
        uVar2 = *puVar15;
        uVar12 = uVar12 + (byte)uVar2;
        puVar15 = __src;
      } while ((byte)uVar2 == 0xff);
      uVar5 = (ulong)uVar12 + 0xf;
    }
    param_2 = (undefined8 *)((long)puVar13 + uVar5 + 4);
    if (uVar6 < 8) {
      uVar12 = *(uint *)(&DAT_001461e8 + uVar6 * 4);
      iVar3 = *(int *)(&DAT_001461a8 + uVar6 * 4);
      *(undefined1 *)puVar13 = *(undefined1 *)puVar14;
      *(undefined1 *)((long)puVar13 + 1) = *(undefined1 *)((long)puVar14 + 1);
      *(undefined1 *)((long)puVar13 + 2) = *(undefined1 *)((long)puVar14 + 2);
      *(undefined1 *)((long)puVar13 + 3) = *(undefined1 *)((long)puVar14 + 3);
      puVar16 = (undefined8 *)((long)((long)puVar14 + (ulong)uVar12) - (long)iVar3);
      *(undefined4 *)((long)puVar13 + 4) = *(undefined4 *)((long)puVar14 + (ulong)uVar12);
    }
    else {
      puVar16 = puVar14 + 1;
      *puVar13 = *puVar14;
    }
    puVar15 = __src;
    if ((undefined8 *)((long)puVar1 + -0xc) < param_2) {
      puVar14 = puVar13 + 1;
      if ((undefined8 *)((long)puVar1 + -5) < param_2) goto LAB_0016d54c;
      puVar7 = puVar16;
      puVar9 = puVar14;
      if (puVar14 < puVar11) {
        do {
          puVar10 = puVar9 + 1;
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar10;
        } while (puVar10 < puVar11);
        puVar16 = (undefined8 *)((long)puVar16 + ((long)puVar11 - (long)puVar14));
        puVar14 = puVar11;
      }
      if (puVar14 < param_2) {
        uVar6 = (long)puVar13 + (uVar5 - (long)puVar14) + 4;
        if ((0x1f < uVar6) &&
           (((undefined8 *)((long)puVar16 + (long)puVar13 + (uVar5 - (long)puVar14) + 4) <= puVar14
            || (param_2 <= puVar16)))) {
          uVar8 = uVar6 & 0xffffffffffffffe0;
          puVar13 = puVar16 + 2;
          puVar16 = (undefined8 *)((long)puVar16 + uVar8);
          puVar7 = puVar14 + 2;
          uVar5 = uVar8;
          do {
            puVar9 = puVar13 + -1;
            uVar17 = puVar13[-2];
            uVar19 = puVar13[1];
            uVar18 = *puVar13;
            puVar13 = puVar13 + 4;
            uVar5 = uVar5 - 0x20;
            puVar7[-1] = *puVar9;
            puVar7[-2] = uVar17;
            puVar7[1] = uVar19;
            *puVar7 = uVar18;
            puVar7 = puVar7 + 4;
          } while (uVar5 != 0);
          puVar14 = (undefined8 *)((long)puVar14 + uVar8);
          if (uVar8 == uVar6) goto LAB_0016d320;
        }
        do {
          puVar13 = (undefined8 *)((long)puVar14 + 1);
          *(undefined1 *)puVar14 = *(undefined1 *)puVar16;
          puVar14 = puVar13;
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (param_2 != puVar13);
      }
      goto LAB_0016d320;
    }
    puVar13[1] = *puVar16;
    if (0xc < uVar5) {
      puVar13 = puVar13 + 2;
      do {
        puVar16 = puVar16 + 1;
        puVar14 = puVar13 + 1;
        *puVar13 = *puVar16;
        puVar13 = puVar14;
      } while (puVar14 < param_2);
    }
  } while( true );
}


// ===== 0016d5c0  LZ4_decompress_safe_withPrefix64k =====

ulong LZ4_decompress_safe_withPrefix64k(ushort *param_1,long param_2,int param_3,int param_4)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 *puVar10;
  ushort *__src;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ushort *puVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 *puVar9;
  ushort *puVar11;
  
  if (param_1 != (ushort *)0x0) {
    if (param_4 == 0) {
      if (param_3 == 1) {
        uVar14 = (ulong)-(uint)((byte)*param_1 != 0);
        goto LAB_0016d93c;
      }
    }
    else if (param_3 != 0) {
      pbVar1 = (byte *)((long)param_1 + (long)param_3);
      lVar2 = param_2 + param_4;
      lVar15 = 0;
      puVar10 = (undefined8 *)(lVar2 + -7);
      puVar11 = param_1;
LAB_0016d658:
      while( true ) {
        __src = (ushort *)((long)puVar11 + 1);
        bVar3 = (byte)*puVar11;
        puVar13 = (undefined8 *)(param_2 + lVar15);
        uVar7 = (ulong)(bVar3 >> 4);
        if (bVar3 >> 4 == 0xf) break;
        if ((pbVar1 + -0x10 <= __src) || ((undefined8 *)(lVar2 + -0x20) < puVar13))
        goto LAB_0016d6b0;
        uVar24 = *(undefined8 *)__src;
        puVar16 = (ushort *)((long)__src + uVar7);
        uVar14 = lVar15 + uVar7;
        puVar13[1] = *(undefined8 *)((long)puVar11 + 9);
        *puVar13 = uVar24;
        __src = puVar16 + 1;
        uVar5 = *puVar16;
        uVar7 = (ulong)uVar5;
        uVar12 = (ulong)bVar3 & 0xf;
        lVar15 = uVar14 - uVar7;
        if (((int)uVar12 == 0xf) || (uVar5 < 8)) goto LAB_0016d72c;
        puVar13 = (undefined8 *)(param_2 + lVar15);
        puVar9 = (undefined8 *)(param_2 + uVar14);
        *puVar9 = *puVar13;
        puVar9[1] = puVar13[1];
        lVar15 = uVar12 + uVar14 + 4;
        *(undefined2 *)(puVar9 + 2) = *(undefined2 *)(puVar13 + 2);
        puVar11 = __src;
      }
      if (pbVar1 + -0xf <= __src) goto LAB_0016d914;
      uVar6 = 0;
      puVar11 = __src;
      do {
        __src = (ushort *)((long)puVar11 + 1);
        uVar5 = *puVar11;
        uVar6 = uVar6 + (byte)uVar5;
        if (pbVar1 + -0xf <= __src) break;
        puVar11 = __src;
      } while ((byte)uVar5 == 0xff);
      uVar7 = (ulong)uVar6 + 0xf;
      if ((CARRY8((ulong)puVar13,uVar7)) || (CARRY8((ulong)__src,uVar7))) goto LAB_0016d914;
LAB_0016d6b0:
      uVar14 = uVar7 + lVar15;
      if (((undefined8 *)(param_2 + uVar14) <= (undefined8 *)(lVar2 + -0xc)) &&
         (puVar11 = (ushort *)((long)__src + uVar7), puVar11 <= pbVar1 + -8)) {
        do {
          puVar9 = puVar13 + 1;
          *puVar13 = *(undefined8 *)__src;
          __src = __src + 4;
          puVar13 = puVar9;
        } while (puVar9 < (undefined8 *)(param_2 + uVar14));
        __src = puVar11 + 1;
        uVar7 = (ulong)*puVar11;
        lVar15 = uVar14 - uVar7;
LAB_0016d72c:
        uVar12 = (ulong)bVar3 & 0xf;
        if (lVar15 + 0x10000 < 0 != SCARRY8(lVar15,0x10000)) goto LAB_0016d914;
        puVar13 = (undefined8 *)(param_2 + uVar14);
        *(undefined4 *)puVar13 = 0;
        if (uVar12 == 0xf) {
          uVar6 = 0;
          puVar16 = __src;
          puVar11 = __src;
          if (__src <= pbVar1 + -5) {
            puVar11 = (ushort *)(pbVar1 + -5);
          }
          do {
            __src = (ushort *)((long)puVar16 + 1);
            uVar5 = *puVar16;
            if (puVar11 == puVar16) {
              __src = (ushort *)((long)puVar16 + 1);
              goto LAB_0016d914;
            }
            uVar6 = uVar6 + (byte)uVar5;
            puVar16 = __src;
          } while ((byte)uVar5 == 0xff);
          uVar12 = (ulong)uVar6 + 0xf;
          if (CARRY8((ulong)puVar13,uVar12)) goto LAB_0016d914;
        }
        puVar9 = (undefined8 *)(param_2 + lVar15);
        lVar15 = uVar14 + uVar12 + 4;
        puVar22 = (undefined8 *)(param_2 + lVar15);
        if (uVar7 < 8) {
          uVar6 = *(uint *)(&DAT_001461e8 + uVar7 * 4);
          iVar4 = *(int *)(&DAT_001461a8 + uVar7 * 4);
          *(undefined1 *)puVar13 = *(undefined1 *)puVar9;
          *(undefined1 *)((long)puVar13 + 1) = *(undefined1 *)((long)puVar9 + 1);
          *(undefined1 *)((long)puVar13 + 2) = *(undefined1 *)((long)puVar9 + 2);
          *(undefined1 *)((long)puVar13 + 3) = *(undefined1 *)((long)puVar9 + 3);
          puVar17 = (undefined8 *)((long)((long)puVar9 + (ulong)uVar6) - (long)iVar4);
          *(undefined4 *)((long)puVar13 + 4) = *(undefined4 *)((long)puVar9 + (ulong)uVar6);
        }
        else {
          puVar17 = puVar9 + 1;
          *puVar13 = *puVar9;
        }
        puVar11 = __src;
        if ((undefined8 *)(lVar2 + -0xc) < puVar22) {
          puVar13 = puVar13 + 1;
          if ((undefined8 *)(lVar2 + -5) < puVar22) goto LAB_0016d914;
          puVar9 = puVar17;
          puVar20 = puVar13;
          if (puVar13 < puVar10) {
            do {
              puVar21 = puVar20 + 1;
              *puVar20 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar20 = puVar21;
            } while (puVar21 < puVar10);
            puVar17 = (undefined8 *)((long)puVar17 + ((long)puVar10 - (long)puVar13));
            puVar13 = puVar10;
          }
          if (puVar13 < puVar22) {
            lVar18 = (uVar12 + uVar14) - (long)puVar13;
            uVar7 = param_2 + 4 + lVar18;
            puVar9 = puVar13;
            if ((0x1f < uVar7) &&
               (((undefined8 *)((long)puVar17 + lVar18 + param_2 + 4) <= puVar13 ||
                (puVar22 <= puVar17)))) {
              uVar19 = uVar7 & 0xffffffffffffffe0;
              puVar22 = puVar17 + 2;
              puVar9 = (undefined8 *)((long)puVar13 + uVar19);
              puVar17 = (undefined8 *)((long)puVar17 + uVar19);
              puVar13 = puVar13 + 2;
              uVar23 = uVar19;
              do {
                puVar20 = puVar22 + -1;
                uVar24 = puVar22[-2];
                uVar26 = puVar22[1];
                uVar25 = *puVar22;
                puVar22 = puVar22 + 4;
                uVar23 = uVar23 - 0x20;
                puVar13[-1] = *puVar20;
                puVar13[-2] = uVar24;
                puVar13[1] = uVar26;
                *puVar13 = uVar25;
                puVar13 = puVar13 + 4;
              } while (uVar23 != 0);
              if (uVar19 == uVar7) goto LAB_0016d658;
            }
            puVar8 = (undefined4 *)((long)puVar9 + -4);
            do {
              *(undefined1 *)(puVar8 + 1) = *(undefined1 *)puVar17;
              puVar8 = (undefined4 *)((long)puVar8 + 1);
              puVar17 = (undefined8 *)((long)puVar17 + 1);
            } while ((undefined4 *)(param_2 + uVar12 + uVar14) != puVar8);
          }
        }
        else {
          puVar13[1] = *puVar17;
          if (0xc < uVar12) {
            puVar13 = puVar13 + 2;
            do {
              puVar17 = puVar17 + 1;
              puVar9 = puVar13 + 1;
              *puVar13 = *puVar17;
              puVar13 = puVar9;
            } while (puVar9 < puVar22);
          }
        }
        goto LAB_0016d658;
      }
      if (((long)uVar14 <= (long)param_4) && ((byte *)((long)__src + uVar7) == pbVar1)) {
        memcpy(puVar13,__src,uVar7);
        goto LAB_0016d93c;
      }
LAB_0016d914:
      uVar14 = (ulong)(~(uint)__src + (int)param_1);
      goto LAB_0016d93c;
    }
  }
  uVar14 = 0xffffffff;
LAB_0016d93c:
  return uVar14 & 0xffffffff;
}


// ===== 0016d958  LZ4_decompress_fast_withPrefix64k =====

void LZ4_decompress_fast_withPrefix64k(void)

{
  (*(code *)PTR_LZ4_decompress_fast_0020fef8)();
  return;
}


// ===== 0016d95c  LZ4_decompress_safe_forceExtDict =====

int LZ4_decompress_safe_forceExtDict
              (ushort *param_1,undefined8 *param_2,int param_3,int param_4,long param_5,
              ulong param_6)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  ushort uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ushort *__src;
  ushort *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ushort *puVar17;
  
  if (param_1 != (ushort *)0x0) {
    lVar4 = 0;
    if (param_5 != 0) {
      lVar4 = param_5 + param_6;
    }
    if (param_4 == 0) {
      if (param_3 == 1) {
        return -(uint)((byte)*param_1 != 0);
      }
    }
    else if (param_3 != 0) {
      pbVar1 = (byte *)((long)param_1 + (long)param_3);
      puVar2 = (undefined8 *)((long)param_2 + (long)param_4);
      puVar10 = (undefined8 *)((long)puVar2 + -7);
      puVar8 = param_2;
      puVar17 = param_1;
LAB_0016da28:
      do {
        __src = (ushort *)((long)puVar17 + 1);
        bVar5 = (byte)*puVar17;
        uVar9 = (ulong)(bVar5 >> 4);
        if (bVar5 >> 4 == 0xf) {
          if (pbVar1 + -0xf <= __src) goto LAB_0016de4c;
          uVar14 = 0;
          puVar17 = __src;
          do {
            __src = (ushort *)((long)puVar17 + 1);
            uVar7 = *puVar17;
            uVar14 = uVar14 + (byte)uVar7;
            if (pbVar1 + -0xf <= __src) break;
            puVar17 = __src;
          } while ((byte)uVar7 == 0xff);
          uVar9 = (ulong)uVar14 + 0xf;
          if ((CARRY8((ulong)puVar8,uVar9)) || (CARRY8((ulong)__src,uVar9))) goto LAB_0016de4c;
LAB_0016da7c:
          puVar13 = (undefined8 *)((long)puVar8 + uVar9);
          if (((undefined8 *)((long)puVar2 + -0xc) < puVar13) ||
             (puVar17 = (ushort *)((long)__src + uVar9), pbVar1 + -8 < puVar17)) {
            if ((puVar13 <= puVar2) && ((byte *)((long)__src + uVar9) == pbVar1)) {
              memcpy(puVar8,__src,uVar9);
              return (int)puVar13 - (int)param_2;
            }
LAB_0016de4c:
            return ~(uint)__src + (int)param_1;
          }
          do {
            puVar20 = puVar8 + 1;
            *puVar8 = *(undefined8 *)__src;
            puVar8 = puVar20;
            __src = __src + 4;
          } while (puVar20 < puVar13);
          __src = puVar17 + 1;
          uVar9 = (ulong)*puVar17;
          puVar20 = (undefined8 *)((long)puVar13 - uVar9);
        }
        else {
          if ((puVar2 + -4 < puVar8) || (pbVar1 + -0x10 <= __src)) goto LAB_0016da7c;
          uVar22 = *(undefined8 *)__src;
          puVar18 = (ushort *)((long)__src + uVar9);
          puVar13 = (undefined8 *)((long)puVar8 + uVar9);
          uVar19 = (ulong)bVar5 & 0xf;
          puVar8[1] = *(undefined8 *)((long)puVar17 + 9);
          *puVar8 = uVar22;
          __src = puVar18 + 1;
          uVar7 = *puVar18;
          uVar9 = (ulong)uVar7;
          puVar20 = (undefined8 *)((long)puVar13 - uVar9);
          if ((((int)uVar19 != 0xf) && (7 < uVar7)) && (param_2 <= puVar20)) {
            *puVar13 = *puVar20;
            puVar13[1] = puVar20[1];
            *(undefined2 *)(puVar13 + 2) = *(undefined2 *)(puVar20 + 2);
            puVar8 = (undefined8 *)((long)puVar13 + uVar19 + 4);
            puVar17 = __src;
            goto LAB_0016da28;
          }
        }
        uVar19 = (ulong)bVar5 & 0xf;
        if ((param_6 >> 0x10 == 0) && ((undefined8 *)((long)puVar20 + param_6) < param_2))
        goto LAB_0016de4c;
        *(undefined4 *)puVar13 = 0;
        if (uVar19 == 0xf) {
          uVar14 = 0;
          puVar18 = __src;
          puVar17 = __src;
          if (__src <= pbVar1 + -5) {
            puVar17 = (ushort *)(pbVar1 + -5);
          }
          do {
            __src = (ushort *)((long)puVar18 + 1);
            uVar7 = *puVar18;
            if (puVar17 == puVar18) {
              __src = (ushort *)((long)puVar18 + 1);
              goto LAB_0016de4c;
            }
            uVar14 = uVar14 + (byte)uVar7;
            puVar18 = __src;
          } while ((byte)uVar7 == 0xff);
          uVar19 = (ulong)uVar14 + 0xf;
          if (CARRY8((ulong)puVar13,uVar19)) goto LAB_0016de4c;
        }
        uVar15 = uVar19 + 4;
        puVar3 = (undefined8 *)((long)puVar13 + uVar15);
        puVar8 = puVar3;
        puVar17 = __src;
        if (param_2 <= puVar20) {
          if (uVar9 < 8) {
            *(undefined1 *)puVar13 = *(undefined1 *)puVar20;
            uVar14 = *(uint *)(&DAT_001461e8 + uVar9 * 4);
            *(undefined1 *)((long)puVar13 + 1) = *(undefined1 *)((long)puVar20 + 1);
            iVar6 = *(int *)(&DAT_001461a8 + uVar9 * 4);
            *(undefined1 *)((long)puVar13 + 2) = *(undefined1 *)((long)puVar20 + 2);
            puVar21 = (undefined8 *)((long)((long)puVar20 + (ulong)uVar14) - (long)iVar6);
            *(undefined1 *)((long)puVar13 + 3) = *(undefined1 *)((long)puVar20 + 3);
            *(undefined4 *)((long)puVar13 + 4) = *(undefined4 *)((long)puVar20 + (ulong)uVar14);
          }
          else {
            puVar21 = puVar20 + 1;
            *puVar13 = *puVar20;
          }
          if ((undefined8 *)((long)puVar2 + -0xc) < puVar3) {
            puVar20 = puVar13 + 1;
            if ((undefined8 *)((long)puVar2 + -5) < puVar3) goto LAB_0016de4c;
            puVar11 = puVar21;
            puVar12 = puVar20;
            if (puVar20 < puVar10) {
              do {
                puVar16 = puVar12 + 1;
                *puVar12 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar12 = puVar16;
              } while (puVar16 < puVar10);
              puVar21 = (undefined8 *)((long)puVar21 + ((long)puVar10 - (long)puVar20));
              puVar20 = puVar10;
            }
            if (puVar20 < puVar3) {
              uVar9 = (long)puVar13 + (uVar19 - (long)puVar20) + 4;
              if ((0x1f < uVar9) &&
                 (((undefined8 *)((long)puVar21 + (long)puVar13 + (uVar19 - (long)puVar20) + 4) <=
                   puVar20 || (puVar3 <= puVar21)))) {
                uVar15 = uVar9 & 0xffffffffffffffe0;
                puVar13 = puVar21 + 2;
                puVar21 = (undefined8 *)((long)puVar21 + uVar15);
                puVar11 = puVar20 + 2;
                uVar19 = uVar15;
                do {
                  puVar12 = puVar13 + -1;
                  uVar22 = puVar13[-2];
                  uVar24 = puVar13[1];
                  uVar23 = *puVar13;
                  puVar13 = puVar13 + 4;
                  uVar19 = uVar19 - 0x20;
                  puVar11[-1] = *puVar12;
                  puVar11[-2] = uVar22;
                  puVar11[1] = uVar24;
                  *puVar11 = uVar23;
                  puVar11 = puVar11 + 4;
                } while (uVar19 != 0);
                puVar20 = (undefined8 *)((long)puVar20 + uVar15);
                if (uVar15 == uVar9) goto LAB_0016da28;
              }
              do {
                puVar13 = (undefined8 *)((long)puVar20 + 1);
                *(undefined1 *)puVar20 = *(undefined1 *)puVar21;
                puVar20 = puVar13;
                puVar21 = (undefined8 *)((long)puVar21 + 1);
              } while (puVar3 != puVar13);
            }
          }
          else {
            puVar13[1] = *puVar21;
            if (0xc < uVar19) {
              puVar13 = puVar13 + 2;
              do {
                puVar21 = puVar21 + 1;
                puVar20 = puVar13 + 1;
                *puVar13 = *puVar21;
                puVar13 = puVar20;
              } while (puVar20 < puVar3);
            }
          }
          goto LAB_0016da28;
        }
        if ((undefined8 *)((long)puVar2 + -5) < puVar3) goto LAB_0016de4c;
        uVar19 = (long)param_2 - (long)puVar20;
        uVar9 = uVar15 - uVar19;
        if (uVar19 <= uVar15 && uVar9 != 0) {
          memcpy(puVar13,(void *)(lVar4 - uVar19),uVar19);
          puVar21 = (undefined8 *)((long)puVar13 + uVar19);
          if ((ulong)((long)puVar21 - (long)param_2) < uVar9) {
            puVar8 = puVar21;
            if ((long)uVar19 < (long)uVar15) {
              puVar11 = (undefined8 *)((long)puVar13 + (long)param_2 + (1 - (long)puVar20));
              puVar8 = puVar11;
              if (puVar11 <= puVar3) {
                puVar8 = puVar3;
              }
              uVar9 = (long)puVar8 + (((long)puVar20 - (long)puVar13) - (long)param_2);
              puVar12 = param_2;
              if (0x1f < uVar9) {
                if (puVar11 <= puVar3) {
                  puVar11 = puVar3;
                }
                if (((undefined8 *)((long)puVar11 + ((long)puVar20 - (long)puVar13)) <= puVar21) ||
                   (puVar11 <= param_2)) {
                  uVar15 = uVar9 & 0xffffffffffffffe0;
                  puVar21 = (undefined8 *)((long)puVar21 + uVar15);
                  puVar20 = (undefined8 *)(((long)puVar13 + (long)(param_2 + 2)) - (long)puVar20);
                  uVar19 = uVar15;
                  puVar8 = param_2 + 2;
                  do {
                    puVar13 = puVar8 + -1;
                    uVar22 = puVar8[-2];
                    uVar24 = puVar8[1];
                    uVar23 = *puVar8;
                    puVar8 = puVar8 + 4;
                    uVar19 = uVar19 - 0x20;
                    puVar20[-1] = *puVar13;
                    puVar20[-2] = uVar22;
                    puVar20[1] = uVar24;
                    *puVar20 = uVar23;
                    puVar20 = puVar20 + 4;
                  } while (uVar19 != 0);
                  puVar8 = puVar21;
                  puVar12 = (undefined8 *)((long)param_2 + uVar15);
                  if (uVar15 == uVar9) goto LAB_0016da28;
                }
              }
              do {
                puVar8 = (undefined8 *)((long)puVar21 + 1);
                *(undefined1 *)puVar21 = *(undefined1 *)puVar12;
                puVar21 = puVar8;
                puVar12 = (undefined8 *)((long)puVar12 + 1);
              } while (puVar8 < puVar3);
            }
          }
          else {
            memcpy(puVar21,param_2,uVar9);
          }
          goto LAB_0016da28;
        }
        memmove(puVar13,(void *)(lVar4 - uVar19),uVar15);
      } while( true );
    }
  }
  return -1;
}


// ===== 0016de98  LZ4_createStreamDecode =====

void LZ4_createStreamDecode(void)

{
  calloc(1,0x20);
  return;
}


// ===== 0016dea4  LZ4_freeStreamDecode =====

undefined8 LZ4_freeStreamDecode(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return 0;
}


// ===== 0016dec0  LZ4_setStreamDecode =====

undefined8 LZ4_setStreamDecode(undefined8 *param_1,long param_2,int param_3)

{
  param_1[2] = param_2 + param_3;
  param_1[3] = (long)param_3;
  param_1[1] = 0;
  *param_1 = 0;
  return 1;
}


// ===== 0016dee0  LZ4_decoderRingBufferSize =====

int LZ4_decoderRingBufferSize(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((int)param_1 < 0x11) {
    uVar2 = 0x10;
  }
  iVar1 = 0;
  if (param_1 < 0x7e000001) {
    iVar1 = uVar2 + 0x1000e;
  }
  return iVar1;
}


// ===== 0016df08  LZ4_decompress_safe_continue =====

ulong LZ4_decompress_safe_continue
                (long *param_1,ushort *param_2,undefined8 *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ushort *__src_00;
  ushort *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ushort *puVar19;
  
  uVar9 = param_1[3];
  if (uVar9 == 0) {
    uVar9 = LZ4_decompress_safe(param_2,param_3,param_4,param_5);
    iVar6 = (int)uVar9;
  }
  else {
    if ((undefined8 *)param_1[2] == param_3) {
      if (uVar9 < 0xffff) {
        uVar11 = param_1[1];
        if (uVar11 == 0) {
          uVar9 = FUN_0016e540(param_2,param_3,param_4,param_5,uVar9);
        }
        else {
          if (param_2 == (ushort *)0x0) {
            return 0xffffffff;
          }
          lVar10 = 0;
          if (*param_1 != 0) {
            lVar10 = *param_1 + uVar11;
          }
          if (param_5 == 0) {
            if (param_4 != 1) {
              return 0xffffffff;
            }
            return (ulong)-(uint)((byte)*param_2 != 0);
          }
          if (param_4 == 0) {
            return 0xffffffff;
          }
          pbVar1 = (byte *)((long)param_2 + (long)param_4);
          puVar2 = (undefined8 *)((long)param_3 + (long)param_5);
          puVar12 = (undefined8 *)((long)puVar2 + -7);
          __src = (undefined8 *)((long)param_3 - uVar9);
          puVar7 = param_3;
          puVar19 = param_2;
LAB_0016e078:
          __src_00 = (ushort *)((long)puVar19 + 1);
          bVar4 = (byte)*puVar19;
          uVar8 = (ulong)(bVar4 >> 4);
          if (bVar4 >> 4 != 0xf) {
            if ((puVar2 + -4 < puVar7) || (pbVar1 + -0x10 <= __src_00)) goto LAB_0016e0cc;
            uVar24 = *(undefined8 *)__src_00;
            puVar20 = (ushort *)((long)__src_00 + uVar8);
            puVar15 = (undefined8 *)((long)puVar7 + uVar8);
            uVar21 = (ulong)bVar4 & 0xf;
            puVar7[1] = *(undefined8 *)((long)puVar19 + 9);
            *puVar7 = uVar24;
            __src_00 = puVar20 + 1;
            uVar5 = *puVar20;
            uVar8 = (ulong)uVar5;
            puVar22 = (undefined8 *)((long)puVar15 - uVar8);
            if ((((int)uVar21 != 0xf) && (7 < uVar5)) && (__src <= puVar22)) {
              *puVar15 = *puVar22;
              puVar15[1] = puVar22[1];
              *(undefined2 *)(puVar15 + 2) = *(undefined2 *)(puVar22 + 2);
              puVar7 = (undefined8 *)((long)puVar15 + uVar21 + 4);
              puVar19 = __src_00;
              goto LAB_0016e078;
            }
LAB_0016e158:
            uVar21 = (ulong)bVar4 & 0xf;
            if ((uVar11 >> 0x10 == 0) && ((undefined8 *)((long)puVar22 + uVar11) < __src))
            goto LAB_0016e4d8;
            *(undefined4 *)puVar15 = 0;
            if (uVar21 == 0xf) {
              uVar16 = 0;
              puVar20 = __src_00;
              puVar19 = __src_00;
              if (__src_00 <= pbVar1 + -5) {
                puVar19 = (ushort *)(pbVar1 + -5);
              }
              do {
                __src_00 = (ushort *)((long)puVar20 + 1);
                uVar5 = *puVar20;
                if (puVar19 == puVar20) {
                  __src_00 = (ushort *)((long)puVar20 + 1);
                  goto LAB_0016e4d8;
                }
                uVar16 = uVar16 + (byte)uVar5;
                puVar20 = __src_00;
              } while ((byte)uVar5 == 0xff);
              uVar21 = (ulong)uVar16 + 0xf;
              if (CARRY8((ulong)puVar15,uVar21)) goto LAB_0016e4d8;
            }
            uVar17 = uVar21 + 4;
            puVar3 = (undefined8 *)((long)puVar15 + uVar17);
            puVar7 = puVar3;
            puVar19 = __src_00;
            if (__src <= puVar22) {
              if (uVar8 < 8) {
                *(undefined1 *)puVar15 = *(undefined1 *)puVar22;
                uVar16 = *(uint *)(&DAT_001461e8 + uVar8 * 4);
                *(undefined1 *)((long)puVar15 + 1) = *(undefined1 *)((long)puVar22 + 1);
                iVar6 = *(int *)(&DAT_001461a8 + uVar8 * 4);
                *(undefined1 *)((long)puVar15 + 2) = *(undefined1 *)((long)puVar22 + 2);
                puVar23 = (undefined8 *)((long)((long)puVar22 + (ulong)uVar16) - (long)iVar6);
                *(undefined1 *)((long)puVar15 + 3) = *(undefined1 *)((long)puVar22 + 3);
                *(undefined4 *)((long)puVar15 + 4) = *(undefined4 *)((long)puVar22 + (ulong)uVar16);
              }
              else {
                puVar23 = puVar22 + 1;
                *puVar15 = *puVar22;
              }
              if ((undefined8 *)((long)puVar2 + -0xc) < puVar3) {
                puVar22 = puVar15 + 1;
                if ((undefined8 *)((long)puVar2 + -5) < puVar3) goto LAB_0016e4d8;
                puVar13 = puVar23;
                puVar14 = puVar22;
                if (puVar22 < puVar12) {
                  do {
                    puVar18 = puVar14 + 1;
                    *puVar14 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar14 = puVar18;
                  } while (puVar18 < puVar12);
                  puVar23 = (undefined8 *)((long)puVar23 + ((long)puVar12 - (long)puVar22));
                  puVar22 = puVar12;
                }
                if (puVar22 < puVar3) {
                  uVar8 = (long)puVar15 + (uVar21 - (long)puVar22) + 4;
                  if ((0x1f < uVar8) &&
                     (((undefined8 *)((long)puVar23 + (long)puVar15 + (uVar21 - (long)puVar22) + 4)
                       <= puVar22 || (puVar3 <= puVar23)))) {
                    uVar17 = uVar8 & 0xffffffffffffffe0;
                    puVar15 = puVar23 + 2;
                    puVar23 = (undefined8 *)((long)puVar23 + uVar17);
                    puVar13 = puVar22 + 2;
                    uVar21 = uVar17;
                    do {
                      puVar14 = puVar15 + -1;
                      uVar24 = puVar15[-2];
                      uVar26 = puVar15[1];
                      uVar25 = *puVar15;
                      puVar15 = puVar15 + 4;
                      uVar21 = uVar21 - 0x20;
                      puVar13[-1] = *puVar14;
                      puVar13[-2] = uVar24;
                      puVar13[1] = uVar26;
                      *puVar13 = uVar25;
                      puVar13 = puVar13 + 4;
                    } while (uVar21 != 0);
                    puVar22 = (undefined8 *)((long)puVar22 + uVar17);
                    if (uVar17 == uVar8) goto LAB_0016e078;
                  }
                  do {
                    puVar15 = (undefined8 *)((long)puVar22 + 1);
                    *(undefined1 *)puVar22 = *(undefined1 *)puVar23;
                    puVar22 = puVar15;
                    puVar23 = (undefined8 *)((long)puVar23 + 1);
                  } while (puVar3 != puVar15);
                }
              }
              else {
                puVar15[1] = *puVar23;
                if (0xc < uVar21) {
                  puVar15 = puVar15 + 2;
                  do {
                    puVar23 = puVar23 + 1;
                    puVar22 = puVar15 + 1;
                    *puVar15 = *puVar23;
                    puVar15 = puVar22;
                  } while (puVar22 < puVar3);
                }
              }
              goto LAB_0016e078;
            }
            if ((undefined8 *)((long)puVar2 + -5) < puVar3) goto LAB_0016e4d8;
            uVar21 = (long)__src - (long)puVar22;
            uVar8 = uVar17 - uVar21;
            if (uVar17 < uVar21 || uVar8 == 0) {
              memmove(puVar15,(void *)(lVar10 - uVar21),uVar17);
            }
            else {
              memcpy(puVar15,(void *)(lVar10 - uVar21),uVar21);
              puVar23 = (undefined8 *)((long)puVar15 + uVar21);
              if ((ulong)((long)puVar23 - (long)__src) < uVar8) {
                puVar7 = puVar23;
                if ((long)uVar21 < (long)uVar17) {
                  puVar13 = (undefined8 *)((long)puVar15 + (long)__src + (1 - (long)puVar22));
                  puVar7 = puVar13;
                  if (puVar13 <= puVar3) {
                    puVar7 = puVar3;
                  }
                  uVar8 = (long)puVar22 + (long)puVar7 + (-(long)__src - (long)puVar15);
                  puVar14 = __src;
                  if (0x1f < uVar8) {
                    if (puVar13 <= puVar3) {
                      puVar13 = puVar3;
                    }
                    if (((undefined8 *)
                         ((long)puVar22 +
                         (long)puVar13 + (long)param_3 + (-(long)puVar15 - ((long)__src + uVar9)))
                         <= puVar23) || (puVar13 <= __src)) {
                      uVar17 = uVar8 & 0xffffffffffffffe0;
                      puVar23 = (undefined8 *)((long)puVar23 + uVar17);
                      puVar22 = (undefined8 *)(((long)puVar15 + (long)(__src + 2)) - (long)puVar22);
                      uVar21 = uVar17;
                      puVar7 = __src + 2;
                      do {
                        puVar15 = puVar7 + -1;
                        uVar24 = puVar7[-2];
                        uVar26 = puVar7[1];
                        uVar25 = *puVar7;
                        puVar7 = puVar7 + 4;
                        uVar21 = uVar21 - 0x20;
                        puVar22[-1] = *puVar15;
                        puVar22[-2] = uVar24;
                        puVar22[1] = uVar26;
                        *puVar22 = uVar25;
                        puVar22 = puVar22 + 4;
                      } while (uVar21 != 0);
                      puVar7 = puVar23;
                      puVar14 = (undefined8 *)((long)__src + uVar17);
                      if (uVar17 == uVar8) goto LAB_0016e078;
                    }
                  }
                  do {
                    puVar7 = (undefined8 *)((long)puVar23 + 1);
                    *(undefined1 *)puVar23 = *(undefined1 *)puVar14;
                    puVar23 = puVar7;
                    puVar14 = (undefined8 *)((long)puVar14 + 1);
                  } while (puVar7 < puVar3);
                }
              }
              else {
                memcpy(puVar23,__src,uVar8);
              }
            }
            goto LAB_0016e078;
          }
          if (pbVar1 + -0xf <= __src_00) goto LAB_0016e4d8;
          uVar16 = 0;
          puVar19 = __src_00;
          do {
            __src_00 = (ushort *)((long)puVar19 + 1);
            uVar5 = *puVar19;
            uVar16 = uVar16 + (byte)uVar5;
            if (pbVar1 + -0xf <= __src_00) break;
            puVar19 = __src_00;
          } while ((byte)uVar5 == 0xff);
          uVar8 = (ulong)uVar16 + 0xf;
          if ((CARRY8((ulong)puVar7,uVar8)) || (CARRY8((ulong)__src_00,uVar8))) goto LAB_0016e4d8;
LAB_0016e0cc:
          puVar15 = (undefined8 *)((long)puVar7 + uVar8);
          if ((puVar15 <= (undefined8 *)((long)puVar2 + -0xc)) &&
             (puVar19 = (ushort *)((long)__src_00 + uVar8), puVar19 <= pbVar1 + -8)) {
            do {
              puVar22 = puVar7 + 1;
              *puVar7 = *(undefined8 *)__src_00;
              puVar7 = puVar22;
              __src_00 = __src_00 + 4;
            } while (puVar22 < puVar15);
            __src_00 = puVar19 + 1;
            uVar8 = (ulong)*puVar19;
            puVar22 = (undefined8 *)((long)puVar15 - uVar8);
            goto LAB_0016e158;
          }
          if ((puVar15 <= puVar2) && ((byte *)((long)__src_00 + uVar8) == pbVar1)) {
            memcpy(puVar7,__src_00,uVar8);
            uVar9 = (ulong)(uint)((int)puVar15 - (int)param_3);
            goto LAB_0016e4e4;
          }
LAB_0016e4d8:
          uVar9 = (ulong)(~(uint)__src_00 + (int)param_2);
        }
      }
      else {
        uVar9 = LZ4_decompress_safe_withPrefix64k(param_2,param_3,param_4,param_5);
      }
LAB_0016e4e4:
      if ((int)uVar9 < 1) {
        return uVar9;
      }
      uVar11 = param_1[3] + (uVar9 & 0xffffffff);
      lVar10 = param_1[2] + (uVar9 & 0xffffffff);
      goto LAB_0016e4fc;
    }
    lVar10 = param_1[2] - uVar9;
    *param_1 = lVar10;
    param_1[1] = uVar9;
    uVar9 = LZ4_decompress_safe_forceExtDict(param_2,param_3,param_4,param_5,lVar10);
    iVar6 = (int)uVar9;
  }
  if (iVar6 < 1) {
    return uVar9;
  }
  uVar11 = uVar9 & 0xffffffff;
  lVar10 = (long)param_3 + uVar11;
LAB_0016e4fc:
  param_1[2] = lVar10;
  param_1[3] = uVar11;
  return uVar9;
}


// ===== 0016e540  FUN_0016e540 =====

int FUN_0016e540(ushort *param_1,undefined8 *param_2,int param_3,int param_4,long param_5)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  ushort uVar5;
  ushort *__src;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *__dest;
  ushort *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ushort *puVar6;
  
  if (param_1 != (ushort *)0x0) {
    if (param_4 == 0) {
      if (param_3 == 1) {
        return -(uint)((byte)*param_1 != 0);
      }
    }
    else if (param_3 != 0) {
      pbVar1 = (byte *)((long)param_1 + (long)param_3);
      puVar2 = (undefined8 *)((long)param_2 + (long)param_4);
      puVar11 = (undefined8 *)((long)puVar2 + -7);
      puVar6 = param_1;
      __dest = param_2;
LAB_0016e5cc:
      do {
        __src = (ushort *)((long)puVar6 + 1);
        bVar3 = (byte)*puVar6;
        uVar8 = (ulong)(bVar3 >> 4);
        if (bVar3 >> 4 == 0xf) {
          if (pbVar1 + -0xf <= __src) goto LAB_0016e87c;
          uVar7 = 0;
          puVar6 = __src;
          do {
            __src = (ushort *)((long)puVar6 + 1);
            uVar5 = *puVar6;
            uVar7 = uVar7 + (byte)uVar5;
            if (pbVar1 + -0xf <= __src) break;
            puVar6 = __src;
          } while ((byte)uVar5 == 0xff);
          uVar8 = (ulong)uVar7 + 0xf;
          if ((CARRY8((ulong)__dest,uVar8)) || (CARRY8((ulong)__src,uVar8))) goto LAB_0016e87c;
LAB_0016e620:
          puVar13 = (undefined8 *)((long)__dest + uVar8);
          if (((undefined8 *)((long)puVar2 + -0xc) < puVar13) ||
             (puVar6 = (ushort *)((long)__src + uVar8), pbVar1 + -8 < puVar6)) {
            if ((puVar13 <= puVar2) && ((byte *)((long)__src + uVar8) == pbVar1)) {
              memcpy(__dest,__src,uVar8);
              return (int)puVar13 - (int)param_2;
            }
LAB_0016e87c:
            return ~(uint)__src + (int)param_1;
          }
          do {
            puVar9 = __dest + 1;
            *__dest = *(undefined8 *)__src;
            __src = __src + 4;
            __dest = puVar9;
          } while (puVar9 < puVar13);
          __src = puVar6 + 1;
          uVar8 = (ulong)*puVar6;
          puVar9 = (undefined8 *)((long)puVar13 - uVar8);
        }
        else {
          if ((puVar2 + -4 < __dest) || (pbVar1 + -0x10 <= __src)) goto LAB_0016e620;
          uVar19 = *(undefined8 *)__src;
          puVar14 = (ushort *)((long)__src + uVar8);
          puVar13 = (undefined8 *)((long)__dest + uVar8);
          uVar12 = (ulong)bVar3 & 0xf;
          __dest[1] = *(undefined8 *)((long)puVar6 + 9);
          *__dest = uVar19;
          __src = puVar14 + 1;
          uVar5 = *puVar14;
          uVar8 = (ulong)uVar5;
          puVar9 = (undefined8 *)((long)puVar13 - uVar8);
          if ((((int)uVar12 != 0xf) && (7 < uVar5)) &&
             ((undefined8 *)((long)param_2 - param_5) <= puVar9)) {
            *puVar13 = *puVar9;
            puVar13[1] = puVar9[1];
            *(undefined2 *)(puVar13 + 2) = *(undefined2 *)(puVar9 + 2);
            __dest = (undefined8 *)((long)puVar13 + uVar12 + 4);
            puVar6 = __src;
            goto LAB_0016e5cc;
          }
        }
        uVar12 = (ulong)bVar3 & 0xf;
        if (puVar9 < (undefined8 *)((long)param_2 - param_5)) goto LAB_0016e87c;
        *(undefined4 *)puVar13 = 0;
        if (uVar12 == 0xf) {
          uVar7 = 0;
          puVar14 = __src;
          puVar6 = __src;
          if (__src <= pbVar1 + -5) {
            puVar6 = (ushort *)(pbVar1 + -5);
          }
          do {
            __src = (ushort *)((long)puVar14 + 1);
            uVar5 = *puVar14;
            if (puVar6 == puVar14) {
              __src = (ushort *)((long)puVar14 + 1);
              goto LAB_0016e87c;
            }
            uVar7 = uVar7 + (byte)uVar5;
            puVar14 = __src;
          } while ((byte)uVar5 == 0xff);
          uVar12 = (ulong)uVar7 + 0xf;
          if (CARRY8((ulong)puVar13,uVar12)) goto LAB_0016e87c;
        }
        __dest = (undefined8 *)((long)puVar13 + uVar12 + 4);
        if (uVar8 < 8) {
          uVar7 = *(uint *)(&DAT_001461e8 + uVar8 * 4);
          iVar4 = *(int *)(&DAT_001461a8 + uVar8 * 4);
          *(undefined1 *)puVar13 = *(undefined1 *)puVar9;
          *(undefined1 *)((long)puVar13 + 1) = *(undefined1 *)((long)puVar9 + 1);
          *(undefined1 *)((long)puVar13 + 2) = *(undefined1 *)((long)puVar9 + 2);
          *(undefined1 *)((long)puVar13 + 3) = *(undefined1 *)((long)puVar9 + 3);
          puVar10 = (undefined8 *)((long)((long)puVar9 + (ulong)uVar7) - (long)iVar4);
          *(undefined4 *)((long)puVar13 + 4) = *(undefined4 *)((long)puVar9 + (ulong)uVar7);
        }
        else {
          puVar10 = puVar9 + 1;
          *puVar13 = *puVar9;
        }
        puVar6 = __src;
        if ((undefined8 *)((long)puVar2 + -0xc) < __dest) {
          puVar9 = puVar13 + 1;
          if ((undefined8 *)((long)puVar2 + -5) < __dest) goto LAB_0016e87c;
          puVar16 = puVar10;
          puVar17 = puVar9;
          if (puVar9 < puVar11) {
            do {
              puVar18 = puVar17 + 1;
              *puVar17 = *puVar16;
              puVar16 = puVar16 + 1;
              puVar17 = puVar18;
            } while (puVar18 < puVar11);
            puVar10 = (undefined8 *)((long)puVar10 + ((long)puVar11 - (long)puVar9));
            puVar9 = puVar11;
          }
          if (puVar9 < __dest) {
            uVar8 = (long)puVar13 + (uVar12 - (long)puVar9) + 4;
            if ((0x1f < uVar8) &&
               (((undefined8 *)((long)puVar10 + (long)puVar13 + (uVar12 - (long)puVar9) + 4) <=
                 puVar9 || (__dest <= puVar10)))) {
              uVar15 = uVar8 & 0xffffffffffffffe0;
              puVar13 = puVar10 + 2;
              puVar10 = (undefined8 *)((long)puVar10 + uVar15);
              puVar16 = puVar9 + 2;
              uVar12 = uVar15;
              do {
                puVar17 = puVar13 + -1;
                uVar19 = puVar13[-2];
                uVar21 = puVar13[1];
                uVar20 = *puVar13;
                puVar13 = puVar13 + 4;
                uVar12 = uVar12 - 0x20;
                puVar16[-1] = *puVar17;
                puVar16[-2] = uVar19;
                puVar16[1] = uVar21;
                *puVar16 = uVar20;
                puVar16 = puVar16 + 4;
              } while (uVar12 != 0);
              puVar9 = (undefined8 *)((long)puVar9 + uVar15);
              if (uVar15 == uVar8) goto LAB_0016e5cc;
            }
            do {
              puVar13 = (undefined8 *)((long)puVar9 + 1);
              *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
              puVar10 = (undefined8 *)((long)puVar10 + 1);
              puVar9 = puVar13;
            } while (__dest != puVar13);
          }
          goto LAB_0016e5cc;
        }
        puVar13[1] = *puVar10;
        if (0xc < uVar12) {
          puVar13 = puVar13 + 2;
          do {
            puVar10 = puVar10 + 1;
            puVar9 = puVar13 + 1;
            *puVar13 = *puVar10;
            puVar13 = puVar9;
          } while (puVar9 < __dest);
        }
      } while( true );
    }
  }
  return -1;
}


// ===== 0016e8b8  LZ4_decompress_fast_continue =====

ulong LZ4_decompress_fast_continue(long *param_1,ushort *param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ushort *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ushort *__src;
  undefined8 *__src_00;
  undefined8 *puVar20;
  size_t sVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar6 = param_1[3];
  if (uVar6 == 0) {
    uVar6 = LZ4_decompress_fast(param_2,param_3,param_4);
    iVar5 = (int)uVar6;
joined_r0x0016e930:
    if (0 < iVar5) {
      param_1[2] = (long)param_3 + (long)param_4;
      param_1[3] = (long)param_4;
    }
    return uVar6;
  }
  if ((undefined8 *)param_1[2] != param_3) {
    *param_1 = param_1[2] - uVar6;
    param_1[1] = uVar6;
    uVar6 = FUN_0016ee24(param_2,param_3,param_4);
    iVar5 = (int)uVar6;
    goto joined_r0x0016e930;
  }
  if ((uVar6 < 0xffff) && (param_1[1] != 0)) {
    if (param_2 == (ushort *)0x0) {
      return 0xffffffff;
    }
    lVar11 = 0;
    if (*param_1 != 0) {
      lVar11 = *param_1 + param_1[1];
    }
    if (param_4 == 0) {
      if ((byte)*param_2 != 0) {
        return 0xffffffff;
      }
      lVar11 = 0;
      uVar7 = 1;
      goto LAB_0016ed94;
    }
    puVar1 = (undefined8 *)((long)param_3 + (long)param_4);
    __src_00 = (undefined8 *)((long)param_3 - uVar6);
    puVar16 = (undefined8 *)((long)puVar1 + -7);
    puVar14 = param_2;
    puVar20 = param_3;
LAB_0016e9dc:
    while( true ) {
      __src = (ushort *)((long)puVar14 + 1);
      uVar7 = (ulong)(byte)*puVar14;
      bVar4 = (byte)*puVar14 >> 4;
      sVar21 = (size_t)bVar4;
      if ((0x8f < uVar7) || ((undefined8 *)((long)puVar1 + -0x1a) < puVar20)) break;
      puVar14 = (ushort *)((long)__src + sVar21);
      puVar10 = (undefined8 *)((long)puVar20 + sVar21);
      *puVar20 = *(undefined8 *)__src;
      __src = puVar14 + 1;
      uVar3 = *puVar14;
      uVar13 = (ulong)uVar3;
      puVar18 = (undefined8 *)((long)puVar10 - uVar13);
      if (((int)(uVar7 & 0xf) == 0xf) || ((uVar3 < 8 || (puVar18 < __src_00)))) goto LAB_0016eaa8;
      *puVar10 = *puVar18;
      puVar10[1] = puVar18[1];
      *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar18 + 2);
      puVar14 = __src;
      puVar20 = (undefined8 *)((long)puVar10 + (uVar7 & 0xf) + 4);
    }
    if (bVar4 == 0xf) {
      uVar12 = 0;
      puVar14 = __src;
      do {
        __src = (ushort *)((long)puVar14 + 1);
        uVar3 = *puVar14;
        uVar12 = uVar12 + (byte)uVar3;
        puVar14 = __src;
      } while ((byte)uVar3 == 0xff);
      sVar21 = (ulong)uVar12 + 0xf;
    }
    puVar10 = (undefined8 *)((long)puVar20 + sVar21);
    puVar14 = __src;
    if (puVar10 <= puVar1 + -1) {
      do {
        puVar18 = puVar20 + 1;
        *puVar20 = *(undefined8 *)puVar14;
        puVar14 = puVar14 + 4;
        puVar20 = puVar18;
      } while (puVar18 < puVar10);
      puVar14 = (ushort *)((long)__src + sVar21);
      __src = puVar14 + 1;
      uVar13 = (ulong)*puVar14;
      puVar18 = (undefined8 *)((long)puVar10 - uVar13);
LAB_0016eaa8:
      uVar7 = uVar7 & 0xf;
      *(undefined4 *)puVar10 = 0;
      if (uVar7 == 0xf) {
        uVar12 = 0;
        puVar14 = __src;
        do {
          __src = (ushort *)((long)puVar14 + 1);
          uVar3 = *puVar14;
          uVar12 = uVar12 + (byte)uVar3;
          puVar14 = __src;
        } while ((byte)uVar3 == 0xff);
        uVar7 = (ulong)uVar12 + 0xf;
      }
      sVar21 = uVar7 + 4;
      puVar2 = (undefined8 *)((long)puVar10 + sVar21);
      puVar14 = __src;
      puVar20 = puVar2;
      if (puVar18 < __src_00) {
        if ((undefined8 *)((long)puVar1 + -5) < puVar2) goto LAB_0016edd0;
        uVar13 = (long)__src_00 - (long)puVar18;
        uVar7 = sVar21 - uVar13;
        if (sVar21 < uVar13 || uVar7 == 0) {
          memmove(puVar10,(void *)(lVar11 - uVar13),sVar21);
        }
        else {
          memcpy(puVar10,(void *)(lVar11 - uVar13),uVar13);
          puVar19 = (undefined8 *)((long)puVar10 + uVar13);
          if ((ulong)((long)puVar19 - (long)__src_00) < uVar7) {
            puVar20 = puVar19;
            if ((long)uVar13 < (long)sVar21) {
              puVar8 = (undefined8 *)((long)puVar10 + (long)__src_00 + (1 - (long)puVar18));
              puVar20 = puVar8;
              if (puVar8 <= puVar2) {
                puVar20 = puVar2;
              }
              uVar7 = (long)puVar18 + (long)puVar20 + (-(long)__src_00 - (long)puVar10);
              puVar9 = __src_00;
              if (0x1f < uVar7) {
                if (puVar8 <= puVar2) {
                  puVar8 = puVar2;
                }
                if (((undefined8 *)
                     ((long)puVar18 +
                     (long)puVar8 + (long)param_3 + (-(long)puVar10 - ((long)__src_00 + uVar6))) <=
                     puVar19) || (puVar8 <= __src_00)) {
                  uVar15 = uVar7 & 0xffffffffffffffe0;
                  puVar19 = (undefined8 *)((long)puVar19 + uVar15);
                  puVar18 = (undefined8 *)(((long)puVar10 + (long)(__src_00 + 2)) - (long)puVar18);
                  uVar13 = uVar15;
                  puVar20 = __src_00 + 2;
                  do {
                    puVar10 = puVar20 + -1;
                    uVar22 = puVar20[-2];
                    uVar24 = puVar20[1];
                    uVar23 = *puVar20;
                    puVar20 = puVar20 + 4;
                    uVar13 = uVar13 - 0x20;
                    puVar18[-1] = *puVar10;
                    puVar18[-2] = uVar22;
                    puVar18[1] = uVar24;
                    *puVar18 = uVar23;
                    puVar18 = puVar18 + 4;
                  } while (uVar13 != 0);
                  puVar9 = (undefined8 *)((long)__src_00 + uVar15);
                  puVar20 = puVar19;
                  if (uVar15 == uVar7) goto LAB_0016e9dc;
                }
              }
              do {
                puVar20 = (undefined8 *)((long)puVar19 + 1);
                *(undefined1 *)puVar19 = *(undefined1 *)puVar9;
                puVar9 = (undefined8 *)((long)puVar9 + 1);
                puVar19 = puVar20;
              } while (puVar20 < puVar2);
            }
          }
          else {
            memcpy(puVar19,__src_00,uVar7);
          }
        }
        goto LAB_0016e9dc;
      }
      if (uVar13 < 8) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar18;
        uVar12 = *(uint *)(&DAT_001461e8 + uVar13 * 4);
        *(undefined1 *)((long)puVar10 + 1) = *(undefined1 *)((long)puVar18 + 1);
        iVar5 = *(int *)(&DAT_001461a8 + uVar13 * 4);
        *(undefined1 *)((long)puVar10 + 2) = *(undefined1 *)((long)puVar18 + 2);
        puVar19 = (undefined8 *)((long)((long)puVar18 + (ulong)uVar12) - (long)iVar5);
        *(undefined1 *)((long)puVar10 + 3) = *(undefined1 *)((long)puVar18 + 3);
        *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)((long)puVar18 + (ulong)uVar12);
      }
      else {
        puVar19 = puVar18 + 1;
        *puVar10 = *puVar18;
      }
      if ((undefined8 *)((long)puVar1 + -0xc) < puVar2) {
        puVar18 = puVar10 + 1;
        if ((undefined8 *)((long)puVar1 + -5) < puVar2) goto LAB_0016edd0;
        puVar8 = puVar19;
        puVar9 = puVar18;
        if (puVar18 < puVar16) {
          do {
            puVar17 = puVar9 + 1;
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar17;
          } while (puVar17 < puVar16);
          puVar19 = (undefined8 *)((long)puVar19 + ((long)puVar16 - (long)puVar18));
          puVar18 = puVar16;
        }
        if (puVar18 < puVar2) {
          uVar13 = (long)puVar10 + (uVar7 - (long)puVar18) + 4;
          if ((0x1f < uVar13) &&
             (((undefined8 *)((long)puVar19 + (long)puVar10 + (uVar7 - (long)puVar18) + 4) <=
               puVar18 || (puVar2 <= puVar19)))) {
            uVar15 = uVar13 & 0xffffffffffffffe0;
            puVar10 = puVar19 + 2;
            puVar19 = (undefined8 *)((long)puVar19 + uVar15);
            puVar8 = puVar18 + 2;
            uVar7 = uVar15;
            do {
              puVar9 = puVar10 + -1;
              uVar22 = puVar10[-2];
              uVar24 = puVar10[1];
              uVar23 = *puVar10;
              puVar10 = puVar10 + 4;
              uVar7 = uVar7 - 0x20;
              puVar8[-1] = *puVar9;
              puVar8[-2] = uVar22;
              puVar8[1] = uVar24;
              *puVar8 = uVar23;
              puVar8 = puVar8 + 4;
            } while (uVar7 != 0);
            puVar18 = (undefined8 *)((long)puVar18 + uVar15);
            if (uVar15 == uVar13) goto LAB_0016e9dc;
          }
          do {
            puVar10 = (undefined8 *)((long)puVar18 + 1);
            *(undefined1 *)puVar18 = *(undefined1 *)puVar19;
            puVar18 = puVar10;
            puVar19 = (undefined8 *)((long)puVar19 + 1);
          } while (puVar2 != puVar10);
        }
      }
      else {
        puVar10[1] = *puVar19;
        if (0xc < uVar7) {
          puVar18 = puVar10 + 2;
          do {
            puVar19 = puVar19 + 1;
            puVar10 = puVar18 + 1;
            *puVar18 = *puVar19;
            puVar18 = puVar10;
          } while (puVar10 < puVar2);
        }
      }
      goto LAB_0016e9dc;
    }
    if (puVar10 == puVar1) {
      memcpy(puVar20,__src,sVar21);
      uVar7 = (ulong)(uint)(((int)__src + (int)sVar21) - (int)param_2);
      goto LAB_0016ed84;
    }
LAB_0016edd0:
    uVar7 = (ulong)(~(uint)__src + (int)param_2);
  }
  else {
    uVar7 = LZ4_decompress_fast(param_2,param_3,param_4);
  }
LAB_0016ed84:
  if ((int)uVar7 < 1) {
    return uVar7;
  }
  param_3 = (undefined8 *)param_1[2];
  uVar6 = param_1[3];
  lVar11 = (long)param_4;
LAB_0016ed94:
  param_1[2] = (long)param_3 + lVar11;
  param_1[3] = uVar6 + lVar11;
  return uVar7;
}


// ===== 0016ee24  FUN_0016ee24 =====

int FUN_0016ee24(ushort *param_1,undefined8 *param_2,int param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ushort uVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ushort *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ushort *__src;
  size_t sVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if (param_1 == (ushort *)0x0) {
    iVar6 = -1;
  }
  else {
    lVar3 = 0;
    if (param_4 != 0) {
      lVar3 = param_4 + param_5;
    }
    if (param_3 != 0) {
      puVar1 = (undefined8 *)((long)param_2 + (long)param_3);
      puVar12 = (undefined8 *)((long)puVar1 + -7);
      puVar7 = param_2;
      puVar14 = param_1;
LAB_0016eebc:
      do {
        while( true ) {
          __src = (ushort *)((long)puVar14 + 1);
          uVar9 = (ulong)(byte)*puVar14;
          bVar5 = (byte)*puVar14 >> 4;
          sVar18 = (size_t)bVar5;
          if ((0x8f < uVar9) || ((undefined8 *)((long)puVar1 + -0x1a) < puVar7)) break;
          puVar14 = (ushort *)((long)__src + sVar18);
          puVar8 = (undefined8 *)((long)puVar7 + sVar18);
          *puVar7 = *(undefined8 *)__src;
          __src = puVar14 + 1;
          uVar4 = *puVar14;
          uVar13 = (ulong)uVar4;
          puVar19 = (undefined8 *)((long)puVar8 - uVar13);
          if ((((int)(uVar9 & 0xf) == 0xf) || (uVar4 < 8)) || (puVar19 < param_2))
          goto LAB_0016ef80;
          *puVar8 = *puVar19;
          puVar8[1] = puVar19[1];
          *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar19 + 2);
          puVar7 = (undefined8 *)((long)puVar8 + (uVar9 & 0xf) + 4);
          puVar14 = __src;
        }
        if (bVar5 == 0xf) {
          uVar11 = 0;
          puVar14 = __src;
          do {
            __src = (ushort *)((long)puVar14 + 1);
            uVar4 = *puVar14;
            uVar11 = uVar11 + (byte)uVar4;
            puVar14 = __src;
          } while ((byte)uVar4 == 0xff);
          sVar18 = (ulong)uVar11 + 0xf;
        }
        puVar8 = (undefined8 *)((long)puVar7 + sVar18);
        puVar14 = __src;
        if (puVar1 + -1 < puVar8) {
          if (puVar8 == puVar1) {
            memcpy(puVar7,__src,sVar18);
            return ((int)__src + (int)sVar18) - (int)param_1;
          }
LAB_0016f24c:
          return ~(uint)__src + (int)param_1;
        }
        do {
          puVar19 = puVar7 + 1;
          *puVar7 = *(undefined8 *)puVar14;
          puVar7 = puVar19;
          puVar14 = puVar14 + 4;
        } while (puVar19 < puVar8);
        puVar14 = (ushort *)((long)__src + sVar18);
        __src = puVar14 + 1;
        uVar13 = (ulong)*puVar14;
        puVar19 = (undefined8 *)((long)puVar8 - uVar13);
LAB_0016ef80:
        uVar9 = uVar9 & 0xf;
        *(undefined4 *)puVar8 = 0;
        if (uVar9 == 0xf) {
          uVar11 = 0;
          puVar14 = __src;
          do {
            __src = (ushort *)((long)puVar14 + 1);
            uVar4 = *puVar14;
            uVar11 = uVar11 + (byte)uVar4;
            puVar14 = __src;
          } while ((byte)uVar4 == 0xff);
          uVar9 = (ulong)uVar11 + 0xf;
        }
        sVar18 = uVar9 + 4;
        puVar2 = (undefined8 *)((long)puVar8 + sVar18);
        puVar7 = puVar2;
        puVar14 = __src;
        if (param_2 <= puVar19) {
          if (uVar13 < 8) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar19;
            uVar11 = *(uint *)(&DAT_001461e8 + uVar13 * 4);
            *(undefined1 *)((long)puVar8 + 1) = *(undefined1 *)((long)puVar19 + 1);
            iVar6 = *(int *)(&DAT_001461a8 + uVar13 * 4);
            *(undefined1 *)((long)puVar8 + 2) = *(undefined1 *)((long)puVar19 + 2);
            puVar20 = (undefined8 *)((long)((long)puVar19 + (ulong)uVar11) - (long)iVar6);
            *(undefined1 *)((long)puVar8 + 3) = *(undefined1 *)((long)puVar19 + 3);
            *(undefined4 *)((long)puVar8 + 4) = *(undefined4 *)((long)puVar19 + (ulong)uVar11);
          }
          else {
            puVar20 = puVar19 + 1;
            *puVar8 = *puVar19;
          }
          if ((undefined8 *)((long)puVar1 + -0xc) < puVar2) {
            puVar19 = puVar8 + 1;
            if ((undefined8 *)((long)puVar1 + -5) < puVar2) goto LAB_0016f24c;
            puVar10 = puVar20;
            puVar16 = puVar19;
            if (puVar19 < puVar12) {
              do {
                puVar17 = puVar16 + 1;
                *puVar16 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar16 = puVar17;
              } while (puVar17 < puVar12);
              puVar20 = (undefined8 *)((long)puVar20 + ((long)puVar12 - (long)puVar19));
              puVar19 = puVar12;
            }
            if (puVar19 < puVar2) {
              uVar13 = (long)puVar8 + (uVar9 - (long)puVar19) + 4;
              if ((0x1f < uVar13) &&
                 (((undefined8 *)((long)puVar20 + (long)puVar8 + (uVar9 - (long)puVar19) + 4) <=
                   puVar19 || (puVar2 <= puVar20)))) {
                uVar15 = uVar13 & 0xffffffffffffffe0;
                puVar8 = puVar20 + 2;
                puVar20 = (undefined8 *)((long)puVar20 + uVar15);
                puVar10 = puVar19 + 2;
                uVar9 = uVar15;
                do {
                  puVar16 = puVar8 + -1;
                  uVar21 = puVar8[-2];
                  uVar23 = puVar8[1];
                  uVar22 = *puVar8;
                  puVar8 = puVar8 + 4;
                  uVar9 = uVar9 - 0x20;
                  puVar10[-1] = *puVar16;
                  puVar10[-2] = uVar21;
                  puVar10[1] = uVar23;
                  *puVar10 = uVar22;
                  puVar10 = puVar10 + 4;
                } while (uVar9 != 0);
                puVar19 = (undefined8 *)((long)puVar19 + uVar15);
                if (uVar15 == uVar13) goto LAB_0016eebc;
              }
              do {
                puVar8 = (undefined8 *)((long)puVar19 + 1);
                *(undefined1 *)puVar19 = *(undefined1 *)puVar20;
                puVar19 = puVar8;
                puVar20 = (undefined8 *)((long)puVar20 + 1);
              } while (puVar2 != puVar8);
            }
          }
          else {
            puVar8[1] = *puVar20;
            if (0xc < uVar9) {
              puVar8 = puVar8 + 2;
              do {
                puVar20 = puVar20 + 1;
                puVar19 = puVar8 + 1;
                *puVar8 = *puVar20;
                puVar8 = puVar19;
              } while (puVar19 < puVar2);
            }
          }
          goto LAB_0016eebc;
        }
        if ((undefined8 *)((long)puVar1 + -5) < puVar2) goto LAB_0016f24c;
        uVar13 = (long)param_2 - (long)puVar19;
        uVar9 = sVar18 - uVar13;
        if (uVar13 <= sVar18 && uVar9 != 0) {
          memcpy(puVar8,(void *)(lVar3 - uVar13),uVar13);
          puVar7 = (undefined8 *)((long)puVar8 + uVar13);
          if ((ulong)((long)puVar7 - (long)param_2) < uVar9) {
            if ((long)uVar13 < (long)sVar18) {
              puVar10 = (undefined8 *)((long)puVar8 + (long)param_2 + (1 - (long)puVar19));
              puVar20 = puVar10;
              if (puVar10 <= puVar2) {
                puVar20 = puVar2;
              }
              uVar9 = (long)puVar20 + (((long)puVar19 - (long)puVar8) - (long)param_2);
              puVar20 = param_2;
              if (0x1f < uVar9) {
                if (puVar10 <= puVar2) {
                  puVar10 = puVar2;
                }
                if (((undefined8 *)((long)puVar10 + ((long)puVar19 - (long)puVar8)) <= puVar7) ||
                   (puVar10 <= param_2)) {
                  uVar15 = uVar9 & 0xffffffffffffffe0;
                  puVar7 = (undefined8 *)((long)puVar7 + uVar15);
                  puVar19 = (undefined8 *)(((long)puVar8 + (long)(param_2 + 2)) - (long)puVar19);
                  uVar13 = uVar15;
                  puVar8 = param_2 + 2;
                  do {
                    puVar20 = puVar8 + -1;
                    uVar21 = puVar8[-2];
                    uVar23 = puVar8[1];
                    uVar22 = *puVar8;
                    puVar8 = puVar8 + 4;
                    uVar13 = uVar13 - 0x20;
                    puVar19[-1] = *puVar20;
                    puVar19[-2] = uVar21;
                    puVar19[1] = uVar23;
                    *puVar19 = uVar22;
                    puVar19 = puVar19 + 4;
                  } while (uVar13 != 0);
                  puVar20 = (undefined8 *)((long)param_2 + uVar15);
                  if (uVar15 == uVar9) goto LAB_0016eebc;
                }
              }
              do {
                puVar8 = (undefined8 *)((long)puVar7 + 1);
                *(undefined1 *)puVar7 = *(undefined1 *)puVar20;
                puVar7 = puVar8;
                puVar20 = (undefined8 *)((long)puVar20 + 1);
              } while (puVar8 < puVar2);
            }
          }
          else {
            memcpy(puVar7,param_2,uVar9);
            puVar7 = puVar2;
          }
          goto LAB_0016eebc;
        }
        memmove(puVar8,(void *)(lVar3 - uVar13),sVar18);
      } while( true );
    }
    iVar6 = -1;
    if ((byte)*param_1 == 0) {
      iVar6 = 1;
    }
  }
  return iVar6;
}


// ===== 0016f2b0  LZ4_decompress_safe_usingDict =====

void LZ4_decompress_safe_usingDict
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
               int param_6)

{
  if (param_6 == 0) {
    LZ4_decompress_safe();
    return;
  }
  if (param_5 + param_6 != param_2) {
    LZ4_decompress_safe_forceExtDict();
    return;
  }
  if (0xfffe < param_6) {
    LZ4_decompress_safe_withPrefix64k();
    return;
  }
  FUN_0016e540();
  return;
}


// ===== 0016f2e8  LZ4_decompress_fast_usingDict =====

void LZ4_decompress_fast_usingDict
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4,int param_5)

{
  if (param_5 != 0) {
    if (param_4 + param_5 != param_2) {
      FUN_0016ee24();
      return;
    }
  }
  LZ4_decompress_fast();
  return;
}


// ===== 0016f304  LZ4_compress_limitedOutput =====

void LZ4_compress_limitedOutput
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined1 auStack_4048 [16416];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  LZ4_compress_fast_extState(auStack_4048,param_1,param_2,param_3,param_4,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016f368  LZ4_compress =====

void LZ4_compress(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_4048 [16416];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 < 0x7e000001) {
    iVar2 = (uint)((ulong)param_3 * 0x8080808081 >> 0x27) + 0x10;
  }
  else {
    iVar2 = 0;
  }
  LZ4_compress_fast_extState(auStack_4048,param_1,param_2,(ulong)param_3,iVar2,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016f3f4  LZ4_compress_limitedOutput_withState =====

void LZ4_compress_limitedOutput_withState(void)

{
  LZ4_compress_fast_extState();
  return;
}


// ===== 0016f3fc  LZ4_compress_withState =====

void LZ4_compress_withState(void)

{
  uint in_w3;
  
  if (0x7e000000 < in_w3) {
    LZ4_compress_fast_extState();
    return;
  }
  LZ4_compress_fast_extState();
  return;
}


// ===== 0016f434  LZ4_compress_limitedOutput_continue =====

void LZ4_compress_limitedOutput_continue(void)

{
  LZ4_compress_fast_continue();
  return;
}


// ===== 0016f43c  LZ4_compress_continue =====

void LZ4_compress_continue(void)

{
  uint in_w3;
  
  if (0x7e000000 < in_w3) {
    LZ4_compress_fast_continue();
    return;
  }
  LZ4_compress_fast_continue();
  return;
}


// ===== 0016f474  LZ4_uncompress =====

void LZ4_uncompress(void)

{
  (*(code *)PTR_LZ4_decompress_fast_0020fef8)();
  return;
}


// ===== 0016f478  LZ4_uncompress_unknownOutputSize =====

void LZ4_uncompress_unknownOutputSize(void)

{
  (*(code *)PTR_LZ4_decompress_safe_0020fea0)();
  return;
}


// ===== 0016f47c  LZ4_sizeofStreamState =====

undefined8 LZ4_sizeofStreamState(void)

{
  return 0x4020;
}


// ===== 0016f484  LZ4_resetStreamState =====

undefined8 LZ4_resetStreamState(void *param_1)

{
  memset(param_1,0,0x4020);
  return 0;
}


// ===== 0016f4a4  LZ4_create =====

void * LZ4_create(void)

{
  void *__s;
  
  __s = malloc(0x4020);
  if ((__s != (void *)0x0) && (((ulong)__s & 7) == 0)) {
    memset(__s,0,0x4020);
    return __s;
  }
  return __s;
}


// ===== 0016f4f8  LZ4_slideInputBuffer =====

undefined8 LZ4_slideInputBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4008);
}


// ===== 0016f52c  FUN_0016f52c =====

void FUN_0016f52c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0016f55c();
  if ((uVar1 & 1) != 0) {
    FUN_00170b60(*(undefined8 *)(param_1 + 0x28));
  }
  FUN_00170b70(*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 0016f55c  FUN_0016f55c =====

void FUN_0016f55c(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar1 = *(ulong *)(**(long **)(param_1 + 0x18) + 0x40);
  uVar2 = *(ulong *)(**(long **)(param_1 + 0x18) + 0x48);
  if (uVar1 + param_2 <= uVar2) {
    uVar2 = uVar1 + param_2;
  }
  FUN_00170a20(*(undefined8 *)(param_1 + 0x28),param_3);
  uVar3 = (undefined4)uVar1;
  if (uVar1 <= uVar2) {
    uVar3 = (undefined4)uVar2;
  }
  FUN_00170a5c(*(undefined8 *)(param_1 + 0x28),uVar3);
  return;
}


// ===== 0016f5b0  FUN_0016f5b0 =====

void FUN_0016f5b0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 uint param_5)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar1 = (byte *)(param_2 + 0x40);
  if ((*pbVar1 & 1) == 0) {
    pbVar1[0] = 1;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    local_50 = CONCAT44((int)param_4[7],(int)param_4[6]);
    FUN_0016f55c(param_2,param_3,&local_50);
    FUN_00170b7c(*(undefined8 *)(param_2 + 0x28),param_4,param_5 & 1);
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
  }
  uVar5 = param_4[4];
  uVar4 = param_4[7];
  uVar3 = param_4[6];
  uVar9 = param_4[1];
  uVar8 = *param_4;
  uVar7 = param_4[3];
  uVar6 = param_4[2];
  param_1[5] = param_4[5];
  param_1[4] = uVar5;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[1] = uVar9;
  *param_1 = uVar8;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016f65c  FUN_0016f65c =====

void FUN_0016f65c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  __shared_weak_count *this;
  undefined8 uVar8;
  undefined8 local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  uVar8 = *param_2;
  lVar7 = param_2[1];
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  this = *(__shared_weak_count **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  *(long *)(param_1 + 0x20) = lVar7;
  if (this != (__shared_weak_count *)0x0) {
    p_Var2 = this + 8;
    do {
      lVar7 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  pvVar6 = operator_new(0x78);
  FUN_001707f0(pvVar6,uVar8);
  local_40 = 0;
  FUN_001704e4(param_1 + 0x28,pvVar6);
  FUN_001704e4(&local_40,0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016f73c  rlottie::Animation::loadFromData =====

/* rlottie::Animation::loadFromData(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::map<int, int, std::__ndk1::less<int>,
   std::__ndk1::allocator<std::__ndk1::pair<int const, int> > >*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
rlottie::Animation::loadFromData
          (undefined8 *param_1,Animation *this,undefined8 param_3,void *param_4,
          basic_string_conflict *param_5)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ushort local_70;
  undefined1 local_6e;
  __shared_weak_count *local_68;
  void *local_60;
  undefined8 local_58;
  __shared_weak_count *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (((byte)*this & 1) == 0) {
    if ((byte)*this >> 1 == 0) {
LAB_0016f7b4:
      *param_1 = 0;
      goto LAB_0016f8d0;
    }
  }
  else if (*(long *)(this + 8) == 0) goto LAB_0016f7b4;
  local_58 = 0;
  local_50 = (__shared_weak_count *)0x0;
  uVar6 = (ulong)((byte)*param_5 >> 1);
  if (((byte)*param_5 & 1) != 0) {
    uVar6 = *(ulong *)(param_5 + 8);
  }
  if (uVar6 == 0) {
    local_70 = 0x2002;
    local_6e = 0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,param_5);
  }
  uVar6 = FUN_0017bd60(&local_58,this,param_3,param_4,&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((uVar6 & 1) == 0) {
    if (param_4 != (void *)0x0) {
      FUN_00170550(param_4,*(undefined8 *)((long)param_4 + 8));
      operator_delete(param_4);
    }
    *param_1 = 0;
  }
  else {
    puVar7 = (undefined8 *)operator_new(0x10);
    puVar8 = (undefined8 *)operator_new(0x48);
    puVar8[8] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    *puVar7 = param_4;
    puVar7[1] = puVar8;
    *param_1 = puVar7;
    FUN_0017bf28(&local_70,&local_58);
    FUN_0016f65c(puVar8,&local_70);
    if (local_68 != (__shared_weak_count *)0x0) {
      p_Var1 = local_68 + 8;
      do {
        lVar9 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*(long *)local_68 + 0x10))(local_68);
        std::__ndk1::__shared_weak_count::__release_weak(local_68);
      }
    }
  }
  p_Var1 = local_50;
  if (local_50 != (__shared_weak_count *)0x0) {
    p_Var2 = local_50 + 8;
    do {
      lVar9 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)local_50 + 0x10))(local_50);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
LAB_0016f8d0:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016f8fc  FUN_0016f8fc =====

void FUN_0016f8fc(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 8);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 0016f954  rlottie::Animation::loadFromFile =====

/* rlottie::Animation::loadFromFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::map<int, int, std::__ndk1::less<int>,
   std::__ndk1::allocator<std::__ndk1::pair<int const, int> > >*) */

void __thiscall
rlottie::Animation::loadFromFile(Animation *this,basic_string_conflict *param_1,map *param_2)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *in_x8;
  long lVar9;
  undefined1 auStack_68 [8];
  __shared_weak_count *local_60;
  undefined8 local_58;
  __shared_weak_count *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = (ulong)((byte)*this >> 1);
  if (((byte)*this & 1) != 0) {
    uVar6 = *(ulong *)(this + 8);
  }
  if (uVar6 == 0) {
    *in_x8 = 0;
  }
  else {
    local_58 = 0;
    local_50 = (__shared_weak_count *)0x0;
    uVar6 = FUN_0017b940(&local_58,this,param_1);
    if ((uVar6 & 1) == 0) {
      if (param_1 != (basic_string_conflict *)0x0) {
        FUN_00170550(param_1,*(undefined8 *)(param_1 + 8));
        operator_delete(param_1);
      }
      *in_x8 = 0;
    }
    else {
      puVar7 = (undefined8 *)operator_new(0x10);
      puVar8 = (undefined8 *)operator_new(0x48);
      puVar8[8] = 0;
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[7] = 0;
      puVar8[6] = 0;
      *puVar7 = param_1;
      puVar7[1] = puVar8;
      *in_x8 = puVar7;
      FUN_0017bf28(auStack_68,&local_58);
      FUN_0016f65c(puVar8,auStack_68);
      if (local_60 != (__shared_weak_count *)0x0) {
        p_Var1 = local_60 + 8;
        do {
          lVar9 = *(long *)p_Var1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*(long *)local_60 + 0x10))(local_60);
          std::__ndk1::__shared_weak_count::__release_weak(local_60);
        }
      }
    }
    p_Var1 = local_50;
    if (local_50 != (__shared_weak_count *)0x0) {
      p_Var2 = local_50 + 8;
      do {
        lVar9 = *(long *)p_Var2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar4) {
          *(long *)p_Var2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*(long *)local_50 + 0x10))(local_50);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016fabc  rlottie::Animation::size =====

/* rlottie::Animation::size(unsigned long&, unsigned long&) const */

void __thiscall rlottie::Animation::size(Animation *this,ulong *param_1,ulong *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00170a54(*(undefined8 *)(*(long *)(this + 8) + 0x28));
  *param_1 = (long)(int)lVar1;
  *param_2 = lVar1 >> 0x20;
  return;
}


// ===== 0016faf8  rlottie::Animation::duration =====

/* rlottie::Animation::duration() const */

undefined1  [16] __thiscall rlottie::Animation::duration(Animation *this)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = **(long **)(*(long *)(this + 8) + 0x18);
  auVar2._0_8_ = (double)((float)(long)(*(long *)(lVar1 + 0x48) + ~*(ulong *)(lVar1 + 0x40)) /
                         *(float *)(lVar1 + 0x50));
  auVar2._8_8_ = 0;
  return auVar2;
}


// ===== 0016fb24  rlottie::Animation::frameRate =====

/* rlottie::Animation::frameRate() const */

undefined1  [16] __thiscall rlottie::Animation::frameRate(Animation *this)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (double)(ulong)(long)*(float *)(**(long **)(*(long *)(this + 8) + 0x18) + 0x50);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0016fb40  rlottie::Animation::totalFrame =====

/* rlottie::Animation::totalFrame() const */

long __thiscall rlottie::Animation::totalFrame(Animation *this)

{
  return *(long *)(**(long **)(*(long *)(this + 8) + 0x18) + 0x48) -
         *(long *)(**(long **)(*(long *)(this + 8) + 0x18) + 0x40);
}


// ===== 0016fb58  rlottie::Animation::frameAtPos =====

/* rlottie::Animation::frameAtPos(double) */

long __thiscall rlottie::Animation::frameAtPos(Animation *this,double param_1)

{
  double dVar1;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar1 = (double)NEON_fminnm(param_1,0x3ff0000000000000);
  return (long)(dVar1 * (double)(long)(*(long *)(**(long **)(*(long *)(this + 8) + 0x18) + 0x48) +
                                      ~*(ulong *)(**(long **)(*(long *)(this + 8) + 0x18) + 0x40)));
}


// ===== 0016fb90  rlottie::Animation::renderTree =====

/* rlottie::Animation::renderTree(unsigned long, unsigned long, unsigned long) const */

void __thiscall
rlottie::Animation::renderTree(Animation *this,ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  uStack_2c = (undefined4)param_3;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (undefined4)param_2;
  FUN_0016f52c(*(undefined8 *)(this + 8),param_1,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016fbe0  rlottie::Animation::renderSync =====

/* rlottie::Animation::renderSync(unsigned long, rlottie::Surface&, bool) */

void __thiscall
rlottie::Animation::renderSync(Animation *this,ulong param_1,Surface *param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0016f5b0(auStack_68,*(undefined8 *)(this + 8),param_1,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016fc30  rlottie::Animation::layers =====

/* rlottie::Animation::layers() const */

long __thiscall rlottie::Animation::layers(Animation *this)

{
  return **(long **)(*(long *)(this + 8) + 0x18) + 0x90;
}


// ===== 0016fc44  rlottie::Animation::setValue =====

/* rlottie::Animation::setValue(rlottie::Color_Type, rlottie::Property,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, rlottie::Color) */

void rlottie::Animation::setValue
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined4 param_6,byte *param_7)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined **local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  long *local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [32];
  undefined1 *local_50;
  long local_38;
  
  local_90 = (long *)&local_b0;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_4 + 8);
  uStack_7c = 2;
  local_50 = auStack_70;
  local_b0 = &PTR_LAB_002086c8;
  local_a8 = param_1;
  uStack_a4 = param_2;
  local_a0 = param_3;
  local_80 = param_6;
  FUN_001705d0(&local_b0);
  uVar1 = (ulong)(*param_7 >> 1);
  if ((*param_7 & 1) != 0) {
    uVar1 = *(ulong *)(param_7 + 8);
  }
  if (uVar1 != 0) {
    FUN_00170990(*(undefined8 *)(lVar4 + 0x28),param_7,&local_80);
  }
  FUN_001702e4(&local_80);
  if (&local_b0 == (undefined ***)local_90) {
    pcVar3 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_0016fcfc;
    pcVar3 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar3)();
LAB_0016fcfc:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016fd24  rlottie::Animation::setValue =====

/* rlottie::Animation::setValue(rlottie::Float_Type, rlottie::Property,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

void __thiscall
rlottie::Animation::setValue
          (undefined4 param_1,Animation *this,undefined8 param_3,undefined4 param_4,byte *param_5)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined **local_b0;
  undefined4 local_a8;
  long *local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [32];
  undefined1 *local_50;
  long local_38;
  
  local_90 = (long *)&local_b0;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(this + 8);
  uStack_7c = 1;
  local_50 = auStack_70;
  local_b0 = &PTR_LAB_00208710;
  local_a8 = param_1;
  local_80 = param_4;
  FUN_00170648(&local_b0);
  uVar1 = (ulong)(*param_5 >> 1);
  if ((*param_5 & 1) != 0) {
    uVar1 = *(ulong *)(param_5 + 8);
  }
  if (uVar1 != 0) {
    FUN_00170990(*(undefined8 *)(lVar4 + 0x28),param_5,&local_80);
  }
  FUN_001702e4(&local_80);
  if (&local_b0 == (undefined ***)local_90) {
    pcVar3 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_0016fdd8;
    pcVar3 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar3)();
LAB_0016fdd8:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016fe00  rlottie::Animation::setValue =====

/* rlottie::Animation::setValue(rlottie::Size_Type, rlottie::Property,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, rlottie::Size) */

void rlottie::Animation::setValue
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
               undefined4 param_5,byte *param_6)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined **local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  long *local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [32];
  undefined1 *local_50;
  long local_38;
  
  local_90 = (long *)&local_b0;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_3 + 8);
  uStack_7c = 4;
  local_50 = auStack_70;
  local_b0 = &PTR_LAB_00208758;
  local_a8 = param_1;
  uStack_a4 = param_2;
  local_80 = param_5;
  FUN_001706a8(&local_b0);
  uVar1 = (ulong)(*param_6 >> 1);
  if ((*param_6 & 1) != 0) {
    uVar1 = *(ulong *)(param_6 + 8);
  }
  if (uVar1 != 0) {
    FUN_00170990(*(undefined8 *)(lVar4 + 0x28),param_6,&local_80);
  }
  FUN_001702e4(&local_80);
  if (&local_b0 == (undefined ***)local_90) {
    pcVar3 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_0016feb4;
    pcVar3 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar3)();
LAB_0016feb4:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016fedc  rlottie::Animation::setValue =====

/* rlottie::Animation::setValue(rlottie::Point_Type, rlottie::Property,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, rlottie::Point) */

void rlottie::Animation::setValue
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
               undefined4 param_5,byte *param_6)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined **local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  long *local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [32];
  undefined1 *local_50;
  long local_38;
  
  local_90 = (long *)&local_b0;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_3 + 8);
  uStack_7c = 3;
  local_50 = auStack_70;
  local_b0 = &PTR_LAB_002087a0;
  local_a8 = param_1;
  uStack_a4 = param_2;
  local_80 = param_5;
  FUN_0017070c(&local_b0);
  uVar1 = (ulong)(*param_6 >> 1);
  if ((*param_6 & 1) != 0) {
    uVar1 = *(ulong *)(param_6 + 8);
  }
  if (uVar1 != 0) {
    FUN_00170990(*(undefined8 *)(lVar4 + 0x28),param_6,&local_80);
  }
  FUN_001702e4(&local_80);
  if (&local_b0 == (undefined ***)local_90) {
    pcVar3 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_0016ff90;
    pcVar3 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar3)();
LAB_0016ff90:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016ffb8  rlottie::Animation::setValue =====

/* rlottie::Animation::setValue(rlottie::Color_Type, rlottie::Property,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::function<rlottie::Color (rlottie::FrameInfo const&)>&&) */

void __thiscall
rlottie::Animation::setValue
          (Animation *this,undefined8 param_2,undefined4 param_3,byte *param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(this + 8);
  uStack_7c = 2;
  local_80 = param_3;
  FUN_00170344(auStack_70,param_5);
  uVar1 = (ulong)(*param_4 >> 1);
  if ((*param_4 & 1) != 0) {
    uVar1 = *(ulong *)(param_4 + 8);
  }
  if (uVar1 != 0) {
    FUN_00170990(*(undefined8 *)(lVar3 + 0x28),param_4,&local_80);
  }
  FUN_001702e4(&local_80);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00170050  rlottie::Animation::setValue =====

/* rlottie::Animation::setValue(rlottie::Float_Type, rlottie::Property,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::function<float (rlottie::FrameInfo const&)>&&) */

void __thiscall
rlottie::Animation::setValue
          (Animation *this,undefined8 param_2,undefined4 param_3,byte *param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(this + 8);
  uStack_7c = 1;
  local_80 = param_3;
  FUN_001703ac(auStack_70,param_5);
  uVar1 = (ulong)(*param_4 >> 1);
  if ((*param_4 & 1) != 0) {
    uVar1 = *(ulong *)(param_4 + 8);
  }
  if (uVar1 != 0) {
    FUN_00170990(*(undefined8 *)(lVar3 + 0x28),param_4,&local_80);
  }
  FUN_001702e4(&local_80);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001700e8  rlottie::Animation::setValue =====

/* rlottie::Animation::setValue(rlottie::Size_Type, rlottie::Property,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::function<rlottie::Size (rlottie::FrameInfo const&)>&&) */

void __thiscall
rlottie::Animation::setValue
          (Animation *this,undefined8 param_2,undefined4 param_3,byte *param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(this + 8);
  uStack_7c = 4;
  local_80 = param_3;
  FUN_00170414(auStack_70,param_5);
  uVar1 = (ulong)(*param_4 >> 1);
  if ((*param_4 & 1) != 0) {
    uVar1 = *(ulong *)(param_4 + 8);
  }
  if (uVar1 != 0) {
    FUN_00170990(*(undefined8 *)(lVar3 + 0x28),param_4,&local_80);
  }
  FUN_001702e4(&local_80);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00170180  rlottie::Animation::setValue =====

/* rlottie::Animation::setValue(rlottie::Point_Type, rlottie::Property,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::function<rlottie::Point (rlottie::FrameInfo const&)>&&) */

void __thiscall
rlottie::Animation::setValue
          (Animation *this,undefined8 param_2,undefined4 param_3,byte *param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(this + 8);
  uStack_7c = 3;
  local_80 = param_3;
  FUN_0017047c(auStack_70,param_5);
  uVar1 = (ulong)(*param_4 >> 1);
  if ((*param_4 & 1) != 0) {
    uVar1 = *(ulong *)(param_4 + 8);
  }
  if (uVar1 != 0) {
    FUN_00170990(*(undefined8 *)(lVar3 + 0x28),param_4,&local_80);
  }
  FUN_001702e4(&local_80);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00170218  rlottie::Animation::Animation =====

/* rlottie::Animation::Animation() */

void __thiscall rlottie::Animation::Animation(Animation *this)

{
  undefined8 *puVar1;
  
  *(undefined8 *)this = 0;
  puVar1 = (undefined8 *)operator_new(0x48);
  puVar1[8] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined8 **)(this + 8) = puVar1;
  return;
}


// ===== 00170254  rlottie::Animation::~Animation =====

/* rlottie::Animation::~Animation() */

void __thiscall rlottie::Animation::~Animation(Animation *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    FUN_00170550(pvVar1,*(undefined8 *)((long)pvVar1 + 8));
    operator_delete(pvVar1);
    *(undefined8 *)this = 0;
  }
  FUN_00170738(this + 8,0);
  return;
}


// ===== 00170298  rlottie::Animation::resetCurrentFrame =====

/* rlottie::Animation::resetCurrentFrame() */

void __thiscall rlottie::Animation::resetCurrentFrame(Animation *this)

{
  FUN_00170a14(*(undefined8 *)(*(long *)(this + 8) + 0x28));
  return;
}


// ===== 001702a4  rlottie::Surface::Surface =====

/* rlottie::Surface::Surface(unsigned int*, unsigned long, unsigned long, unsigned long) */

void __thiscall
rlottie::Surface::Surface(Surface *this,uint *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  *(uint **)this = param_1;
  *(ulong *)(this + 8) = param_2;
  *(ulong *)(this + 0x10) = param_3;
  *(ulong *)(this + 0x18) = param_4;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(ulong *)(this + 0x30) = param_2;
  *(ulong *)(this + 0x38) = param_3;
  return;
}


// ===== 001702b8  rlottie::Surface::setDrawRegion =====

/* rlottie::Surface::setDrawRegion(unsigned long, unsigned long, unsigned long, unsigned long) */

void __thiscall
rlottie::Surface::setDrawRegion
          (Surface *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  if ((param_3 + param_1 <= *(ulong *)(this + 8)) && (param_4 + param_2 <= *(ulong *)(this + 0x10)))
  {
    *(ulong *)(this + 0x20) = param_1;
    *(ulong *)(this + 0x28) = param_2;
    *(ulong *)(this + 0x30) = param_3;
    *(ulong *)(this + 0x38) = param_4;
  }
  return;
}


// ===== 001702e4  FUN_001702e4 =====

void FUN_001702e4(long param_1)

{
  long *plVar1;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
    plVar1 = *(long **)(param_1 + 0x30);
    if ((long *)(param_1 + 0x10) == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x00170340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))(plVar1);
      return;
    }
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0017032c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1);
      return;
    }
  }
  return;
}


// ===== 00170344  FUN_00170344 =====

void FUN_00170344(long param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)param_2[4];
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    if (param_2 == plVar2) {
      *(long *)(param_1 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x001703a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  return;
}


// ===== 001703ac  FUN_001703ac =====

void FUN_001703ac(long param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)param_2[4];
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    if (param_2 == plVar2) {
      *(long *)(param_1 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00170410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  return;
}


// ===== 00170414  FUN_00170414 =====

void FUN_00170414(long param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)param_2[4];
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    if (param_2 == plVar2) {
      *(long *)(param_1 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00170478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  return;
}


// ===== 0017047c  FUN_0017047c =====

void FUN_0017047c(long param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)param_2[4];
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    if (param_2 == plVar2) {
      *(long *)(param_1 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x001704e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  return;
}


// ===== 001704e4  FUN_001704e4 =====

void FUN_001704e4(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar3 != (void *)0x0) {
    pvVar1 = *(void **)((long)pvVar3 + 0x60);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar3 + 0x68) = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = *(void **)((long)pvVar3 + 0x48);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar3 + 0x50) = pvVar1;
      operator_delete(pvVar1);
    }
    plVar2 = *(long **)((long)pvVar3 + 0x38);
    *(undefined8 *)((long)pvVar3 + 0x38) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    operator_delete(pvVar3);
    return;
  }
  return;
}


// ===== 00170550  FUN_00170550 =====

void FUN_00170550(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00170550(param_1,*param_2);
    FUN_00170550(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 00170594  FUN_00170594 =====

void FUN_00170594(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *puVar2 = &PTR_LAB_002086c8;
  puVar2[1] = uVar3;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  return;
}


// ===== 001705d0  FUN_001705d0 =====

void FUN_001705d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_LAB_002086c8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 001705f0  FUN_001705f0 =====

void FUN_001705f0(void)

{
  return;
}


// ===== 001705f4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00170610  FUN_00170610 =====

void FUN_00170610(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_LAB_00208710;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  return;
}


// ===== 00170648  FUN_00170648 =====

void FUN_00170648(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_LAB_00208710;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  return;
}


// ===== 00170660  FUN_00170660 =====

void FUN_00170660(void)

{
  return;
}


// ===== 00170664  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00170674  FUN_00170674 =====

void FUN_00170674(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_LAB_00208758;
  puVar1[1] = uVar2;
  return;
}


// ===== 001706a8  FUN_001706a8 =====

void FUN_001706a8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_LAB_00208758;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 001706c0  FUN_001706c0 =====

void FUN_001706c0(void)

{
  return;
}


// ===== 001706c4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001706d8  FUN_001706d8 =====

void FUN_001706d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_LAB_002087a0;
  puVar1[1] = uVar2;
  return;
}


// ===== 0017070c  FUN_0017070c =====

void FUN_0017070c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_LAB_002087a0;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}


// ===== 00170724  FUN_00170724 =====

void FUN_00170724(void)

{
  return;
}


// ===== 00170728  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00170738  FUN_00170738 =====

void FUN_00170738(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  *param_1 = param_2;
  if (pbVar1 != (byte *)0x0) {
    FUN_00170798(pbVar1 + 0x30);
    FUN_001704e4(pbVar1 + 0x28,0);
    FUN_0016f8fc(pbVar1 + 0x18);
    if ((*pbVar1 & 1) != 0) {
      operator_delete(*(void **)(pbVar1 + 0x10));
    }
    operator_delete(pbVar1);
    return;
  }
  return;
}


// ===== 00170798  FUN_00170798 =====

void FUN_00170798(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 8);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 001707f0  FUN_001707f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001707f0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long local_30;
  long local_28;
  
  uVar3 = _UNK_001462a8;
  uVar2 = _DAT_001462a0;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  *(undefined2 *)((long)param_1 + 0x24) = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0xffffffff;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  lVar5 = *param_2;
  param_1[6] = lVar5;
  FUN_001708b8(&local_30,*(undefined8 *)(lVar5 + 0x58));
  lVar5 = local_30;
  local_30 = 0;
  plVar4 = (long *)param_1[7];
  param_1[7] = lVar5;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    lVar5 = param_1[7];
  }
  *(undefined1 *)(lVar5 + 0x9c) = 0;
  param_1[5] = *(undefined8 *)(param_1[6] + 0x38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001708b8  FUN_001708b8 =====

void FUN_001708b8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  switch(*(undefined1 *)(param_2 + 0x49)) {
  case 0:
    puVar1 = (undefined8 *)operator_new(0xd8);
    FUN_00172470(puVar1,param_2);
    break;
  case 1:
    puVar1 = (undefined8 *)operator_new(0x150);
    FUN_00173164(puVar1,param_2);
    break;
  case 2:
    puVar1 = (undefined8 *)operator_new(0x150);
    FUN_00173934(puVar1,param_2);
    break;
  case 3:
    puVar1 = (undefined8 *)operator_new(0xa0);
    FUN_00171d2c(puVar1,param_2);
    *puVar1 = &PTR_FUN_00208928;
    break;
  case 4:
    puVar1 = (undefined8 *)operator_new(0xc0);
    FUN_00173df8(puVar1,param_2);
    break;
  default:
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = puVar1;
  return;
}


// ===== 00170990  FUN_00170990 =====

void FUN_00170990(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0017a488(auStack_50);
  (**(code **)(**(long **)(param_1 + 0x38) + 0x30))(*(long **)(param_1 + 0x38),auStack_50,0,param_3)
  ;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  FUN_00177660(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00170a14  FUN_00170a14 =====

void FUN_00170a14(long param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  return;
}


// ===== 00170a20  FUN_00170a20 =====

void FUN_00170a20(long param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x28) != *param_2) || (*(int *)(param_1 + 0x2c) != param_2[1])) {
    uVar1 = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  return;
}


// ===== 00170a54  FUN_00170a54 =====

undefined8 FUN_00170a54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 00170a5c  FUN_00170a5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00170a5c(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x40) == '\0') && (*(int *)(param_1 + 0x44) == param_2)) {
    uVar2 = 0;
  }
  else {
    uStack_58 = _UNK_001462a8;
    local_60 = _DAT_001462a0;
    uStack_48 = _UNK_001462a8;
    uStack_50 = _DAT_001462a0;
    fVar3 = (float)*(int *)(*(long *)(param_1 + 0x30) + 0x38);
    fVar4 = (float)*(int *)(*(long *)(param_1 + 0x30) + 0x3c);
    uVar5 = NEON_fminnm((float)*(int *)(param_1 + 0x28) / fVar3,
                        (float)*(int *)(param_1 + 0x2c) / fVar4);
    fVar3 = (float)NEON_fmsub(uVar5,fVar3,(float)*(int *)(param_1 + 0x28));
    fVar4 = (float)NEON_fmsub(uVar5,fVar4,(float)*(int *)(param_1 + 0x2c));
    local_40 = 0x3f800000;
    local_3c = 0;
    FUN_0018f6e4(fVar3 * 0.5,fVar4 * 0.5,&local_60);
    FUN_0018f7e0(uVar5,uVar5);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))
              (0x3f800000,*(long **)(param_1 + 0x38),param_2,&local_60);
    uVar2 = 1;
    *(int *)(param_1 + 0x44) = param_2;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 00170b60  FUN_00170b60 =====

void FUN_00170b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00170b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x38) + 0x28))();
  return;
}


// ===== 00170b70  FUN_00170b70 =====

undefined8 FUN_00170b70(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
}


// ===== 00170b7c  FUN_00170b7c =====

undefined8 FUN_00170b7c(long param_1,undefined8 *param_2,uint param_3)

{
  __shared_weak_count *p_Var1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  __shared_weak_count *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_0018d7b0(auStack_58,*param_2,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 2),
               *(undefined4 *)(param_2 + 3),2);
  plVar7 = (long *)(param_1 + 0x60);
  *(long *)(param_1 + 0x68) = *plVar7;
  (**(code **)(**(long **)(param_1 + 0x38) + 0x18))(*(long **)(param_1 + 0x38),plVar7);
  local_68 = 0;
  local_60 = CONCAT44((int)param_2[7],(int)param_2[6]);
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  for (puVar8 = (undefined8 *)*plVar7; puVar8 != puVar2; puVar8 = puVar8 + 1) {
    FUN_0018e8c8(*puVar8,&local_68);
  }
  FUN_00193ec8(auStack_70,auStack_58,param_3 & 1);
  local_80 = CONCAT44((int)param_2[5],(int)param_2[4]);
  uStack_78 = CONCAT44((int)param_2[7] + (int)param_2[5],(int)param_2[6] + (int)param_2[4]);
  FUN_00193f80(auStack_70,&local_80);
  plVar7 = *(long **)(param_1 + 0x38);
  local_80 = 0;
  FUN_001776ec(&local_80);
  local_88 = 0;
  FUN_001776ec(&local_88);
  (**(code **)(*plVar7 + 0x20))(plVar7,auStack_70,&local_80,&local_88);
  FUN_001777c4(&local_88);
  FUN_001777c4(&local_80);
  FUN_00193e3c(auStack_70);
  if (local_50 != (__shared_weak_count *)0x0) {
    p_Var1 = local_50 + 8;
    do {
      lVar6 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)local_50 + 0x10))(local_50);
      std::__ndk1::__shared_weak_count::__release_weak(local_50);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


// ===== 00170d00  FUN_00170d00 =====

void FUN_00170d00(long *param_1,undefined4 param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  long *local_70;
  void *local_68;
  void *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = *param_1;
  if ((*param_4 == 0) && (*(char *)(lVar4 + 0x39) != '\0')) goto LAB_00170e6c;
  if (*(char *)(lVar4 + 0x20) == '\0') {
    FUN_00170e98(&local_68,lVar4,param_2);
LAB_00170d90:
    FUN_00170ee8(&local_68,param_1 + 7);
    if (local_68 != (void *)0x0) {
      local_60 = local_68;
      operator_delete(local_68);
    }
  }
  else if (*(long *)(param_1[7] + 0x20) == *(long *)(param_1[7] + 0x28)) {
    FUN_00170e98(&local_68,lVar4,param_2);
    goto LAB_00170d90;
  }
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0x30) == '\0') {
    fVar7 = (float)FUN_00178d34(*(undefined8 *)(lVar4 + 0x28),param_2);
  }
  else {
    fVar7 = *(float *)(lVar4 + 0x28);
  }
  *(float *)(param_1 + 1) = fVar7 * DAT_00144b80;
  lVar4 = FUN_00177878(param_1 + 8);
  lVar6 = param_1[7];
  if (lVar4 != lVar6 + 8) {
    FUN_00177b40(lVar4,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
    FUN_00177c7c(lVar4 + 0x18,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28));
  }
  uVar8 = *(undefined8 *)(lVar6 + 0x40);
  uVar5 = *(undefined8 *)(lVar6 + 0x38);
  *(undefined2 *)(lVar4 + 0x40) = *(undefined2 *)(lVar6 + 0x48);
  *(undefined8 *)(lVar4 + 0x38) = uVar8;
  *(undefined8 *)(lVar4 + 0x30) = uVar5;
  uVar5 = FUN_00177878(param_1 + 8);
  FUN_001972e4(uVar5,param_3);
  local_70 = (long *)param_1[8];
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(local_70,0x10);
    if (bVar2) {
      *local_70 = *local_70 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_68 = (void *)0x0;
  local_60 = (void *)0x0;
  FUN_00199c2c(param_1 + 9,&local_70,1,&local_68);
  FUN_00177938(&local_70);
  *(undefined1 *)(param_1 + 0xb) = 1;
LAB_00170e6c:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00170e98  FUN_00170e98 =====

void FUN_00170e98(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) != '\0') {
    FUN_001779a4(param_1,param_2);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 3);
    return;
  }
  FUN_00178df4(param_1,*param_2);
  return;
}


// ===== 00170ee8  FUN_00170ee8 =====

void FUN_00170ee8(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  FUN_00177878(param_2);
  FUN_00197a68();
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 != (undefined4 *)param_1[1]) {
    uVar2 = param_1[1] - (long)puVar3;
    iVar5 = (int)(uVar2 >> 3);
    uVar1 = FUN_00177878(param_2);
    FUN_00197a98(uVar1,(long)(uVar2 * 0x20000000 + 0x100000000) >> 0x20,(long)(iVar5 / 3 + 2));
    FUN_00177878(param_2);
    FUN_00197498(*puVar3,puVar3[1]);
    if (1 < iVar5) {
      puVar3 = puVar3 + 4;
      iVar4 = 1;
      do {
        FUN_00177878(param_2);
        FUN_00197748(puVar3[-2],puVar3[-1],*puVar3,puVar3[1],puVar3[2],puVar3[3]);
        iVar4 = iVar4 + 3;
        puVar3 = puVar3 + 6;
      } while (iVar4 < iVar5);
    }
    if ((char)param_1[3] != '\0') {
      FUN_00177878(param_2);
      FUN_00197910();
      return;
    }
  }
  return;
}


// ===== 00170fe4  FUN_00170fe4 =====

void FUN_00170fe4(undefined8 param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((char)param_2[0xb] != '\0') {
    fVar5 = *(float *)(param_2 + 1);
    fVar6 = ABS(fVar5 + -1.0);
    bVar1 = NAN(DAT_00144b68);
    bVar3 = fVar6 < DAT_00144b68;
    *(undefined1 *)(param_2 + 0xb) = 0;
    if (bVar3 == (NAN(fVar6) || bVar1)) {
      FUN_00199a08(auStack_40,param_2 + 9);
      uVar4 = FUN_00177da0(auStack_40);
      FUN_0019e72c(uVar4,(int)(fVar5 * 255.0));
      FUN_001777c4(auStack_40);
    }
    if (*(char *)(*param_2 + 0x38) != '\0') {
      FUN_00199a08(auStack_40,param_2 + 9);
      FUN_00177da0(auStack_40);
      FUN_0019e704();
      FUN_001777c4(auStack_40);
    }
  }
  FUN_00199a08(param_1,param_2 + 9);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001710cc  FUN_001710cc =====

void FUN_001710cc(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar3 = (undefined8 *)operator_new(0x68);
    puVar3[0xc] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    *(undefined8 **)(param_1 + 0x20) = puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    puVar3[8] = 0;
    *(undefined4 *)(puVar3 + 9) = 0;
    puVar3[10] = 0;
    *(undefined4 *)(puVar3 + 0xb) = 0xff;
    puVar3[2] = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(undefined4 *)(lVar4 + 0x28) = 0;
    pbVar7 = *(byte **)(param_1 + 0x48);
    if ((*pbVar7 & 1) == 0) {
      pbVar7 = pbVar7 + 1;
    }
    else {
      pbVar7 = *(byte **)(pbVar7 + 0x10);
    }
    *(byte **)(lVar4 + 0x60) = pbVar7;
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    *(int *)(*(long *)(param_1 + 0x20) + 0x58) = (int)(*(float *)(param_1 + 0x90) * 255.0);
  }
  lVar4 = *(long *)(param_1 + 0x48);
  if ((*(int *)(param_1 + 0x94) < *(int *)(lVar4 + 100)) ||
     (*(int *)(lVar4 + 0x68) <= *(int *)(param_1 + 0x94))) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(lVar5 + 0x54) = uVar8;
  uVar8 = 1;
  switch(*(undefined1 *)(lVar4 + 0x48)) {
  case 0:
    goto switchD_001711dc_caseD_0;
  case 1:
    break;
  case 2:
    uVar8 = 2;
    break;
  case 3:
    uVar8 = 3;
    break;
  case 4:
    uVar8 = 4;
    break;
  default:
    uVar8 = 0;
  }
  *(undefined4 *)(lVar5 + 0x50) = uVar8;
switchD_001711dc_caseD_0:
  plVar6 = *(long **)(param_1 + 0x40);
  if (plVar6 != (long *)0x0) {
    plVar13 = (long *)(param_1 + 8);
    *(long *)(param_1 + 0x10) = *plVar13;
    FUN_00171324(plVar13,(plVar6[1] - *plVar6 >> 5) * -0x5555555555555555);
    plVar6 = (long *)**(long **)(param_1 + 0x40);
    plVar1 = (long *)(*(long **)(param_1 + 0x40))[1];
    if (plVar6 == plVar1) {
      lVar4 = *plVar13;
    }
    else {
      lVar4 = *plVar13;
      piVar9 = (int *)(lVar4 + 0x18);
      do {
        lVar5 = plVar6[8];
        lVar10 = *(long *)(lVar5 + 8);
        uVar11 = *(undefined8 *)(lVar5 + 0x20);
        *(long *)(piVar9 + -6) = lVar10;
        lVar12 = *(long *)(lVar5 + 0x10);
        *(undefined8 *)(piVar9 + -2) = uVar11;
        piVar9[-4] = (int)((ulong)(lVar12 - lVar10) >> 3);
        *piVar9 = *(int *)(lVar5 + 0x28) - (int)uVar11;
        piVar9[3] = (int)(*(float *)(plVar6 + 1) * 255.0);
        plVar13 = plVar6 + 0xc;
        uVar2 = *(int *)(*plVar6 + 0x3c) - 1;
        if (3 < uVar2) {
          uVar2 = 0;
        }
        piVar9[2] = uVar2;
        piVar9 = piVar9 + 10;
        plVar6 = plVar13;
      } while (plVar1 != plVar13);
    }
    **(long **)(param_1 + 0x20) = lVar4;
    *(int *)(*(long *)(param_1 + 0x20) + 8) =
         (int)((ulong)(*(long *)(param_1 + 0x10) - lVar4) >> 3) * -0x33333333;
  }
  return;
}


// ===== 00171324  FUN_00171324 =====

void FUN_00171324(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[1] - *param_1 >> 3;
  uVar2 = lVar1 * -0x3333333333333333;
  if (uVar2 < param_2) {
    FUN_00179240(param_1,param_2 + lVar1 * 0x3333333333333333);
    return;
  }
  if (uVar2 >= param_2 && uVar2 - param_2 != 0) {
    param_1[1] = *param_1 + param_2 * 0x28;
  }
  return;
}


// ===== 00171360  FUN_00171360 =====

void FUN_00171360(long *param_1,undefined8 param_2,long *param_3,long **param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long **pplVar6;
  long *plVar7;
  long lVar8;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined1 local_58 [16];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  param_1[6] = param_1[5];
  (**(code **)(*param_1 + 0x18))(param_1,param_1 + 5);
  FUN_001776ec(&local_68);
  lVar8 = param_1[8];
  if (lVar8 == 0) {
    param_3 = (long *)*param_3;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
      if (bVar3) {
        *param_3 = *param_3 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_60 = (long *)0x0;
    local_58._0_8_ = local_68;
    local_68 = param_3;
    FUN_001777c4(local_58);
    FUN_001777c4(&local_60);
  }
  else {
    local_58 = FUN_00193fd8(param_2);
    FUN_001716a0(&local_70,lVar8,local_58);
    local_60 = local_68;
    local_68 = local_70;
    local_70 = (long *)0x0;
    FUN_001777c4(&local_60);
    FUN_001777c4(&local_70);
    if (*(long *)(*param_3 + 8) != *(long *)(*param_3 + 0x10)) {
      if (local_68[1] == local_68[2]) {
        local_60 = (long *)0x0;
        FUN_001776ec(&local_60);
      }
      else {
        FUN_001776ec(local_58);
        uVar5 = FUN_00177da0(local_58);
        FUN_0019f764(uVar5,local_68 + 1,*param_3 + 8);
        local_60 = (long *)local_58._0_8_;
        local_58._0_8_ = 0;
        FUN_001777c4(local_58);
      }
      local_58._0_8_ = local_68;
      local_68 = local_60;
      local_60 = (long *)0x0;
      FUN_001777c4(local_58);
      FUN_001777c4(&local_60);
    }
    if (local_68[1] == local_68[2]) goto LAB_0017166c;
  }
  plVar1 = (long *)param_1[6];
  for (plVar7 = (long *)param_1[5]; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    FUN_00193fa8(param_2,*plVar7 + 0x10);
    thunk_FUN_00199a08(&local_60,*plVar7);
    if ((*param_4)[1] == (*param_4)[2]) {
      if (local_68[1] == local_68[2]) goto LAB_00171648;
      pplVar6 = &local_68;
LAB_0017160c:
      FUN_00193fd0(param_2,&local_60,pplVar6);
    }
    else {
      if (local_68[1] != local_68[2]) {
        if (local_60[1] == local_60[2]) {
          local_70 = (long *)0x0;
          FUN_001776ec(&local_70);
        }
        else {
          FUN_001776ec(local_58);
          uVar5 = FUN_00177da0(local_58);
          FUN_0019f764(uVar5,local_60 + 1,local_68 + 1);
          local_70 = (long *)local_58._0_8_;
          local_58._0_8_ = 0;
          FUN_001777c4(local_58);
        }
        local_58._0_8_ = local_60;
        local_60 = local_70;
        local_70 = (long *)0x0;
        FUN_001777c4(local_58);
        FUN_001777c4(&local_70);
      }
      if (local_60[1] != local_60[2]) {
        pplVar6 = param_4;
        if (*(char *)(param_1[9] + 0x48) != '\x02') goto LAB_0017160c;
        if ((*param_4)[1] == (*param_4)[2]) {
          local_70 = local_60;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(local_60,0x10);
            if (bVar3) {
              *local_60 = *local_60 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        else {
          FUN_001776ec(local_58);
          uVar5 = FUN_00177da0(local_58);
          FUN_0019e974(uVar5,local_60 + 1,*param_4 + 1);
          local_70 = (long *)local_58._0_8_;
          local_58._0_8_ = 0;
          FUN_001777c4(local_58);
        }
        local_58._0_8_ = local_60;
        local_60 = local_70;
        local_70 = (long *)0x0;
        FUN_001777c4(local_58);
        FUN_001777c4(&local_70);
LAB_00171648:
        local_58._0_8_ = 0;
        FUN_00193fc8(param_2,local_58,&local_60);
      }
    }
    FUN_001777c4(&local_60);
  }
LAB_0017166c:
  FUN_001777c4(&local_68);
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001716a0  FUN_001716a0 =====

void FUN_001716a0(undefined8 *param_1,long *param_2,int *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*(char *)((long)param_2 + 0x21) == '\0') {
    plVar7 = (long *)param_2[3];
    *param_1 = plVar7;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    FUN_001776ec(&local_68);
    plVar1 = (long *)param_2[1];
    for (plVar7 = (long *)*param_2; plVar7 != plVar1; plVar7 = plVar7 + 0xc) {
      switch(*(undefined4 *)(*plVar7 + 0x3c)) {
      case 1:
        FUN_00170fe4(&local_78,plVar7);
        if (local_68[1] == local_68[2]) {
          local_70 = local_78;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(local_78,0x10);
            if (bVar3) {
              *local_78 = *local_78 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        else {
          if (local_78[1] != local_78[2]) {
            FUN_001776ec(&local_60);
            uVar5 = FUN_00177da0(&local_60);
            uVar6 = 0;
LAB_0017185c:
            FUN_0019ee00(uVar5,local_68 + 1,local_78 + 1,uVar6);
            goto LAB_00171914;
          }
          local_70 = local_68;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(local_68,0x10);
            if (bVar3) {
              *local_68 = *local_68 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        break;
      case 2:
        if (((local_68[1] == local_68[2]) && (*param_3 < param_3[2])) && (param_3[1] < param_3[3]))
        {
          FUN_0019fa74(&local_70,param_3);
          local_60 = local_68;
          local_68 = local_70;
          local_70 = (long *)0x0;
          FUN_001777c4(&local_60);
          FUN_001777c4(&local_70);
        }
        FUN_00170fe4(&local_78,plVar7);
        if (local_68[1] == local_68[2]) {
LAB_0017192c:
          local_70 = (long *)0x0;
          FUN_001776ec(&local_70);
        }
        else {
          if (local_78[1] != local_78[2]) {
            FUN_001776ec(&local_60);
            uVar5 = FUN_00177da0(&local_60);
            FUN_0019e974(uVar5,local_68 + 1,local_78 + 1);
            goto LAB_00171914;
          }
          local_70 = local_68;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(local_68,0x10);
            if (bVar3) {
              *local_68 = *local_68 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        break;
      case 3:
        if (((local_68[1] == local_68[2]) && (*param_3 < param_3[2])) && (param_3[1] < param_3[3]))
        {
          FUN_0019fa74(&local_70,param_3);
          local_60 = local_68;
          local_68 = local_70;
          local_70 = (long *)0x0;
          FUN_001777c4(&local_60);
          FUN_001777c4(&local_70);
        }
        FUN_00170fe4(&local_78,plVar7);
        if ((local_68[1] == local_68[2]) || (local_78[1] == local_78[2])) goto LAB_0017192c;
        FUN_001776ec(&local_60);
        uVar5 = FUN_00177da0(&local_60);
        FUN_0019f764(uVar5,local_68 + 1,local_78 + 1);
LAB_00171914:
        local_70 = local_60;
        local_60 = (long *)0x0;
        FUN_001777c4(&local_60);
        break;
      case 4:
        FUN_00170fe4(&local_78,plVar7);
        if (local_68[1] == local_68[2]) {
          local_70 = local_78;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(local_78,0x10);
            if (bVar3) {
              *local_78 = *local_78 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        else {
          if (local_78[1] != local_78[2]) {
            FUN_001776ec(&local_60);
            uVar5 = FUN_00177da0(&local_60);
            uVar6 = 1;
            goto LAB_0017185c;
          }
          local_70 = local_68;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(local_68,0x10);
            if (bVar3) {
              *local_68 = *local_68 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        break;
      default:
        goto switchD_00171718_default;
      }
      local_60 = local_68;
      local_68 = local_70;
      local_70 = (long *)0x0;
      FUN_001777c4(&local_60);
      FUN_001777c4(&local_70);
      FUN_001777c4(&local_78);
switchD_00171718_default:
    }
    if ((local_68[1] == local_68[2]) || (*local_68 == 1)) {
      FUN_00177f04(param_2 + 3,&local_68);
    }
    else {
      uVar5 = FUN_00177da0(param_2 + 3);
      FUN_0019e498(uVar5,local_68 + 1);
    }
    plVar7 = (long *)param_2[3];
    *(undefined1 *)((long)param_2 + 0x21) = 0;
    *param_1 = plVar7;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_001777c4(&local_68);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00171a90  FUN_00171a90 =====

void FUN_00171a90(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auStack_90 [16];
  long local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_001776ec(param_1 + 3);
  *(undefined2 *)(param_1 + 4) = 0x101;
  lVar5 = *(long *)(param_2 + 0x70);
  if (lVar5 != 0) {
    FUN_00171c18(param_1,*(long *)(lVar5 + 0x60) - *(long *)(lVar5 + 0x58) >> 4);
    plVar8 = *(long **)(*(long *)(param_2 + 0x70) + 0x58);
    plVar2 = *(long **)(*(long *)(param_2 + 0x70) + 0x60);
    if (plVar8 != plVar2) {
      do {
        uVar1 = param_1[1];
        lVar5 = *plVar8;
        if (uVar1 < (ulong)param_1[2]) {
          FUN_00179674(uVar1,lVar5);
          param_1[1] = uVar1 + 0x60;
        }
        else {
          lVar4 = ((long)(uVar1 - *param_1) >> 5) * -0x5555555555555555;
          uVar1 = lVar4 + 1;
          if (0x2aaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          lVar6 = param_1[2] - *param_1 >> 5;
          uVar7 = lVar6 * 0x5555555555555556;
          if (uVar1 <= uVar7) {
            uVar1 = uVar7;
          }
          if (0x155555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
            uVar1 = 0x2aaaaaaaaaaaaaa;
          }
          FUN_001794c0(auStack_90,uVar1,lVar4,param_1 + 2);
          FUN_00179674(local_80,lVar5);
          local_80 = local_80 + 0x60;
          FUN_00179534(param_1,auStack_90);
          FUN_00179598(auStack_90);
        }
        plVar9 = plVar8 + 2;
        *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & *(byte *)(*plVar8 + 0x39);
        plVar8 = plVar9;
      } while (plVar2 != plVar9);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00171c18  FUN_00171c18 =====

void FUN_00171c18(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((ulong)((param_1[2] - *param_1 >> 5) * -0x5555555555555555) < param_2) {
    FUN_001794c0(auStack_50,param_2,(param_1[1] - *param_1 >> 5) * -0x5555555555555555,param_1 + 2);
    FUN_00179534(param_1,auStack_50);
    FUN_00179598(auStack_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00171cb0  FUN_00171cb0 =====

void FUN_00171cb0(long *param_1,undefined4 param_2,undefined8 param_3,int *param_4)

{
  long lVar1;
  long lVar2;
  
  if ((*param_4 != 0) || ((char)param_1[4] == '\0')) {
    lVar2 = param_1[1];
    for (lVar1 = *param_1; lVar1 != lVar2; lVar1 = lVar1 + 0x60) {
      FUN_00170d00(lVar1,param_2,param_3,param_4);
    }
    *(undefined1 *)((long)param_1 + 0x21) = 1;
  }
  return;
}


// ===== 00171d2c  FUN_00171d2c =====

void FUN_00171d2c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_40;
  long local_38;
  
  uVar3 = DAT_00146398;
  uVar2 = DAT_00146328;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_002087e8;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = uVar2;
  param_1[0xc] = 0;
  param_1[0xd] = uVar2;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((long)param_1 + 0x94) = uVar3;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  if (*(char *)(param_2 + 0x4c) != '\0') {
    pvVar4 = operator_new(0x28);
    FUN_00171a90(pvVar4,param_2);
    local_40 = 0;
    FUN_001796c8(param_1 + 8,pvVar4);
    FUN_001796c8(&local_40,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00171e10  FUN_00171e10 =====

void FUN_00171e10(long param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0017a840(param_2,*(undefined8 *)(param_1 + 0x48));
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_00171f00(param_2,*(undefined8 *)(param_1 + 0x48));
    if ((uVar3 & 1) == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_60,*(basic_string_conflict **)(param_1 + 0x48));
      uVar3 = FUN_0017ab2c(param_2,local_60,param_3);
      if ((uVar3 & 1) == 0) {
        if (((byte)local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
      }
      else {
        iVar1 = *param_4;
        if (((byte)local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
        if (iVar1 - 4U < 5) {
          *(undefined4 *)(param_1 + 0x98) = 3;
        }
      }
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 00171f00  FUN_00171f00 =====

bool FUN_00171f00(undefined8 param_1,
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_2)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  
  uVar1 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 2) {
    iVar3 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      (param_2,0,0xffffffffffffffff,"__",2);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


// ===== 00171f58  FUN_00171f58 =====

void FUN_00171f58(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00171e10();
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_60,*(basic_string_conflict **)(param_1 + 0x48));
    uVar3 = FUN_00172058(param_2,local_60,param_3);
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    if ((uVar3 & 1) != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_78,*(basic_string_conflict **)(param_1 + 0x48));
      uVar2 = FUN_0017a9e8(param_2,local_78,param_3);
      if (((byte)local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
      uVar3 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))
                        (*(long **)(param_1 + 0xb8),param_2,uVar2,param_4);
      if ((uVar3 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x98) = 3;
      }
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 00172058  FUN_00172058 =====

bool FUN_00172058(long *param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  
  uVar3 = FUN_00171f00();
  if (((uVar3 & 1) == 0) &&
     ((int)((ulong)(param_1[1] - *param_1) >> 3) * -0x55555555 - 1U <= param_3)) {
    this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (*param_1 + (ulong)param_3 * 0x18);
    uVar3 = (ulong)((byte)*this >> 1);
    if (((byte)*this & 1) != 0) {
      uVar3 = *(ulong *)(this + 8);
    }
    if (uVar3 == 2) {
      iVar2 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare(this,0,0xffffffffffffffff,"**",2);
      bVar1 = iVar2 == 0;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// ===== 00172380  FUN_00172380 =====

void FUN_00172380(undefined8 param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0x50) == 0) {
    FUN_00172418(param_1,*(undefined8 *)(param_2 + 0x48),param_3);
  }
  else {
    FUN_00172418(auStack_60,*(undefined8 *)(param_2 + 0x48),param_3);
    FUN_00172380(auStack_88,*(undefined8 *)(param_2 + 0x50),param_3);
    FUN_0018fbec(param_1,auStack_60,auStack_88);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00172418  FUN_00172418 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00172418(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = _UNK_001462a8;
  uVar2 = _DAT_001462a0;
  lVar1 = *(long *)(param_2 + 0x38);
  if (lVar1 == 0) {
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 4) = 0x3f800000;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    *(undefined2 *)((long)param_1 + 0x24) = 0;
    return;
  }
  if (*(char *)(lVar1 + 0x18) != '\0') {
    uVar3 = *(undefined8 *)(lVar1 + 0x3c);
    uVar2 = *(undefined8 *)(lVar1 + 0x34);
    uVar5 = *(undefined8 *)(lVar1 + 0x2c);
    uVar4 = *(undefined8 *)(lVar1 + 0x24);
    param_1[4] = *(undefined8 *)(lVar1 + 0x44);
    param_1[1] = uVar5;
    *param_1 = uVar4;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    return;
  }
  FUN_0017cf70(*(undefined8 *)(lVar1 + 0x20),param_3,*(undefined1 *)(param_2 + 0x4f));
  return;
}


// ===== 00172470  FUN_00172470 =====

void FUN_00172470(undefined8 *param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  FUN_00171d2c();
  *param_1 = &PTR_FUN_00208838;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  plVar8 = *(long **)(param_1[9] + 0x20);
  plVar9 = *(long **)(param_1[9] + 0x28);
  if (plVar8 == plVar9) {
    plVar9 = (long *)0x0;
    plVar8 = (long *)0x0;
  }
  else {
    do {
      if (*(short *)(*plVar8 + 0x1a) == 2) {
        FUN_001708b8(&local_60);
        plVar10 = local_60;
        if (local_60 == (long *)0x0) {
          local_60 = (long *)0x0;
        }
        else {
          puVar7 = (undefined8 *)param_1[0x18];
          if (puVar7 < (undefined8 *)param_1[0x19]) {
            local_60 = (long *)0x0;
            *puVar7 = plVar10;
            param_1[0x18] = puVar7 + 1;
          }
          else {
            FUN_001797d0(param_1 + 0x17,&local_60);
          }
          plVar10 = local_60;
          local_60 = (long *)0x0;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar9 != plVar8);
    plVar8 = (long *)param_1[0x17];
    plVar9 = (long *)param_1[0x18];
  }
  if (plVar9 != plVar8) {
    plVar10 = plVar8;
    do {
      lVar11 = *plVar10;
      iVar4 = *(int *)(*(long *)(lVar11 + 0x48) + 0x58);
      if (-1 < iVar4) {
        iVar5 = *(int *)(*(long *)(*plVar8 + 0x48) + 0x5c);
        plVar3 = plVar8;
        while (iVar5 != iVar4) {
          if (plVar9 + -1 == plVar3) goto LAB_001725e0;
          plVar2 = plVar3 + 1;
          plVar3 = plVar3 + 1;
          iVar5 = *(int *)(*(long *)(*plVar2 + 0x48) + 0x5c);
        }
        if (plVar3 != plVar9) {
          lVar12 = *plVar3;
          do {
            if (lVar12 == lVar11) goto LAB_001725e0;
            lVar12 = *(long *)(lVar12 + 0x50);
          } while (lVar12 != 0);
          *(long *)(lVar11 + 0x50) = *plVar3;
        }
      }
LAB_001725e0:
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar9);
    if ((plVar9 != plVar8) && (plVar8 < plVar9 + -1)) {
      plVar9 = plVar9 + -2;
      do {
        lVar11 = *plVar8;
        *plVar8 = plVar9[1];
        plVar9[1] = lVar11;
        bVar1 = plVar8 + 1 < plVar9;
        plVar8 = plVar8 + 1;
        plVar9 = plVar9 + -1;
      } while (bVar1);
    }
  }
  uVar13 = *(undefined8 *)(param_2 + 0x50);
  if ((0 < (int)uVar13) && (0 < (int)((ulong)uVar13 >> 0x20))) {
    puVar7 = (undefined8 *)operator_new(0x20);
    *puVar7 = uVar13;
    FUN_00177f84(puVar7 + 1);
    puVar7[2] = 0;
    puVar7[3] = 0;
    local_60 = (long *)0x0;
    FUN_0017978c(param_1 + 0x1a,puVar7);
    FUN_0017978c(&local_60,0);
  }
  if (1 < (ulong)((long)(param_1[0x18] - param_1[0x17]) >> 3)) {
    *(undefined1 *)((long)param_1 + 0x9c) = 1;
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00172988  FUN_00172988 =====

void FUN_00172988(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined1 local_58 [16];
  long local_48;
  
  pplVar6 = &local_70;
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_001776ec(&local_68);
  lVar10 = *(long *)(param_1 + 0x40);
  if (lVar10 == 0) {
    param_3 = (long *)*param_3;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
      if (bVar3) {
        *param_3 = *param_3 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_60 = (long *)0x0;
    local_58._0_8_ = local_68;
    local_68 = param_3;
    FUN_001777c4(local_58);
    FUN_001777c4(&local_60);
  }
  else {
    local_58 = FUN_00193fd8(param_2);
    FUN_001716a0(&local_70,lVar10,local_58);
    local_60 = local_68;
    local_68 = local_70;
    local_70 = (long *)0x0;
    FUN_001777c4(&local_60);
    FUN_001777c4(&local_70);
    if (*(long *)(*param_3 + 8) != *(long *)(*param_3 + 0x10)) {
      if (local_68[1] == local_68[2]) {
        local_60 = (long *)0x0;
        FUN_001776ec(&local_60);
      }
      else {
        FUN_001776ec(local_58);
        uVar5 = FUN_00177da0(local_58);
        FUN_0019f764(uVar5,local_68 + 1,*param_3 + 8);
        local_60 = (long *)local_58._0_8_;
        local_58._0_8_ = 0;
        FUN_001777c4(local_58);
      }
      local_58._0_8_ = local_68;
      local_68 = local_60;
      local_60 = (long *)0x0;
      FUN_001777c4(local_58);
      FUN_001777c4(&local_60);
    }
    if (local_68[1] == local_68[2]) goto LAB_00172c40;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    lVar10 = *(long *)(param_1 + 0xd0) + 0x10;
    if (local_68[1] == local_68[2]) {
      FUN_00199a08(&local_60,lVar10);
      plVar9 = local_68;
      local_68 = local_60;
      local_60 = (long *)0x0;
      local_58._0_8_ = plVar9;
      FUN_001777c4(local_58);
      pplVar6 = &local_60;
    }
    else {
      FUN_00199a08(&local_70,lVar10);
      if ((local_70[1] == local_70[2]) || (local_68[1] == local_68[2])) {
        local_60 = (long *)0x0;
        FUN_001776ec(&local_60);
      }
      else {
        FUN_001776ec(local_58);
        uVar5 = FUN_00177da0(local_58);
        FUN_0019f764(uVar5,local_70 + 1,local_68 + 1);
        local_60 = (long *)local_58._0_8_;
        local_58._0_8_ = 0;
        FUN_001777c4(local_58);
      }
      local_58._0_8_ = local_68;
      local_68 = local_60;
      local_60 = (long *)0x0;
      FUN_001777c4(local_58);
      FUN_001777c4(&local_60);
    }
    FUN_001777c4(pplVar6);
  }
  plVar9 = *(long **)(param_1 + 0xb8);
  plVar1 = *(long **)(param_1 + 0xc0);
  if (plVar9 != plVar1) {
    plVar8 = (long *)0x0;
    do {
      plVar7 = (long *)*plVar9;
      lVar10 = plVar7[9];
      if (*(char *)(lVar10 + 0x48) == '\0') {
        if ((*(int *)(lVar10 + 100) <= *(int *)((long)plVar7 + 0x94)) &&
           (*(int *)((long)plVar7 + 0x94) < *(int *)(lVar10 + 0x68))) {
          if (plVar8 == (long *)0x0) {
            (**(code **)(*plVar7 + 0x20))(plVar7,param_2,&local_68,param_4);
          }
          else if ((*(int *)(plVar8[9] + 100) <= *(int *)((long)plVar8 + 0x94)) &&
                  (*(int *)((long)plVar8 + 0x94) < *(int *)(plVar8[9] + 0x68))) {
            FUN_00172c7c(plVar7,param_2,&local_68,param_4,plVar8,plVar7);
          }
        }
        plVar7 = (long *)0x0;
      }
      plVar9 = plVar9 + 1;
      plVar8 = plVar7;
    } while (plVar1 != plVar9);
  }
LAB_00172c40:
  FUN_001777c4(&local_68);
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00172c7c  FUN_00172c7c =====

void FUN_00172c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,long *param_6)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  auVar7 = FUN_00193fd8(param_2);
  iVar4 = auVar7._8_4_ - auVar7._0_4_;
  iVar5 = auVar7._12_4_ - auVar7._4_4_;
  FUN_00193e74(auStack_70);
  plVar1 = param_6 + 0x10;
  FUN_0018d8b8(plVar1,iVar4,iVar5,2);
  FUN_00193f38(auStack_70,plVar1,1);
  (**(code **)(*param_6 + 0x20))(param_6,auStack_70,param_3,param_4);
  FUN_00193f7c(auStack_70);
  FUN_00193e74(auStack_78);
  plVar2 = param_5 + 0x10;
  FUN_0018d8b8(plVar2,iVar4,iVar5,2);
  FUN_00193f38(auStack_78,plVar2,1);
  (**(code **)(*param_5 + 0x20))(param_5,auStack_78,param_3,param_4);
  uVar3 = *(byte *)(param_5[9] + 0x48) - 1;
  if (uVar3 < 4) {
    FUN_00193fbc(auStack_78,*(undefined4 *)(&DAT_00146210 + (long)(char)uVar3 * 4));
  }
  if (*(byte *)(param_5[9] + 0x48) - 3 < 2) {
    FUN_0018db24(plVar1);
  }
  local_80 = 0;
  FUN_001941c8(auStack_78,&local_80,plVar1,0xff);
  FUN_00193f7c(auStack_78);
  local_80 = 0;
  FUN_001941c8(param_2,&local_80,plVar2,0xff);
  FUN_00193e3c(auStack_78);
  FUN_00193e3c(auStack_70);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00172e38  FUN_00172e38 =====

void FUN_00172e38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  puVar1 = param_1 + 1;
  FUN_00177878(puVar1);
  FUN_00197a68();
  local_48 = 0;
  local_40 = NEON_scvtf(*param_1,4);
  uVar5 = FUN_00177878(puVar1);
  FUN_00198384(uVar5,&local_48,1);
  uVar5 = FUN_00177878(puVar1);
  FUN_001972e4(uVar5,param_2);
  local_50 = (long *)param_1[1];
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(local_50,0x10);
    if (bVar3) {
      *local_50 = *local_50 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_48 = 0;
  local_40 = 0;
  FUN_00199c2c(param_1 + 2,&local_50,1,&local_48);
  FUN_00177938(&local_50);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00173064  FUN_00173064 =====

void FUN_00173064(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  
  if (((*(int *)(*(long *)(param_1 + 0x48) + 100) <= *(int *)(param_1 + 0x94)) &&
      (*(int *)(param_1 + 0x94) < *(int *)(*(long *)(param_1 + 0x48) + 0x68))) &&
     (fVar6 = ABS(*(float *)(param_1 + 0x90)),
     fVar6 != DAT_00144b68 && fVar6 < DAT_00144b68 == (NAN(fVar6) || NAN(DAT_00144b68)))) {
    plVar5 = *(long **)(param_1 + 0xb8);
    plVar1 = *(long **)(param_1 + 0xc0);
    if (plVar5 != plVar1) {
      plVar3 = (long *)0x0;
      do {
        plVar2 = (long *)*plVar5;
        lVar4 = plVar2[9];
        if (*(char *)(lVar4 + 0x48) == '\0') {
          if ((*(int *)(lVar4 + 100) <= *(int *)((long)plVar2 + 0x94)) &&
             (*(int *)((long)plVar2 + 0x94) < *(int *)(lVar4 + 0x68))) {
            if (plVar3 == (long *)0x0) {
              lVar4 = *plVar2;
              plVar3 = plVar2;
            }
            else {
              if ((*(int *)((long)plVar3 + 0x94) < *(int *)(plVar3[9] + 100)) ||
                 (*(int *)(plVar3[9] + 0x68) <= *(int *)((long)plVar3 + 0x94))) goto LAB_00173100;
              (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
              lVar4 = *plVar3;
            }
            (**(code **)(lVar4 + 0x18))(plVar3,param_2);
          }
LAB_00173100:
          plVar2 = (long *)0x0;
        }
        plVar5 = plVar5 + 1;
        plVar3 = plVar2;
      } while (plVar1 != plVar5);
    }
  }
  return;
}


// ===== 00173164  FUN_00173164 =====

void FUN_00173164(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00171d2c();
  *param_1 = &PTR_FUN_00208888;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  uVar1 = DAT_00146328;
  param_1[0x1c] = 0;
  *(undefined2 *)((long)param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = 0;
  param_1[0x1f] = uVar1;
  param_1[0x20] = 0;
  FUN_00177f84(param_1 + 0x22);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x4120000000000000;
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((long)param_1 + 0x13a) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0x111;
  *(undefined2 *)((long)param_1 + 0x144) = 1;
  param_1[0x29] = 0;
  return;
}


// ===== 001731f0  FUN_001731f0 =====

void FUN_001731f0(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  __shared_weak_count *local_78;
  undefined8 local_70;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  uVar6 = *(uint *)(param_1 + 0x98);
  if ((uVar6 & 1) != 0) {
    FUN_00177f84(&local_40);
    local_90 = 0;
    uStack_88 = CONCAT44((float)*(int *)(*(long *)(param_1 + 0x48) + 0x54),
                         (float)*(int *)(*(long *)(param_1 + 0x48) + 0x50));
    uVar5 = FUN_00177878(&local_40);
    FUN_00198384(uVar5,&local_90,1);
    local_70 = *(undefined8 *)(param_1 + 0x78);
    local_78 = *(__shared_weak_count **)(param_1 + 0x70);
    uStack_80 = *(undefined8 *)(param_1 + 0x68);
    uStack_88 = *(undefined8 *)(param_1 + 0x60);
    local_90 = *(undefined8 *)(param_1 + 0x58);
    uVar5 = FUN_00177878(&local_40);
    FUN_001972e4(uVar5,&local_90);
    *(uint *)(param_1 + 0x140) = *(uint *)(param_1 + 0x140) | 1;
    FUN_0017804c(param_1 + 0x110,&local_40);
    FUN_00177938(&local_40);
    uVar6 = *(uint *)(param_1 + 0x98);
  }
  if ((uVar6 >> 1 & 1) != 0) {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x48) + 0x70);
    local_30 = puVar7[2];
    uStack_38 = puVar7[1];
    local_40 = *puVar7;
    local_94 = FUN_00173340(*(undefined4 *)(param_1 + 0x90),&local_40);
    FUN_0018dea8(&local_90,&local_94);
    FUN_00173448(param_1 + 0xb8,&local_90);
    this = local_78;
    *(uint *)(param_1 + 0x140) = *(uint *)(param_1 + 0x140) | 0x100;
    if (local_78 != (__shared_weak_count *)0x0) {
      p_Var1 = local_78 + 8;
      do {
        lVar8 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*(long *)local_78 + 0x10))(local_78);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00173340  FUN_00173340 =====

uint FUN_00173340(float param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  float fVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  lVar2 = *param_2;
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    plVar3 = (long *)(lVar2 + 8);
    plVar4 = (long *)*plVar3;
    if (plVar4 != (long *)0x0) {
      uVar1 = (int)(*(float *)(param_2 + 1) * 255.0) & 0xffU |
              ((int)(*(float *)((long)param_2 + 0xc) * 255.0) & 0xffU) << 8 |
              ((int)(*(float *)(param_2 + 2) * 255.0) & 0xffU) << 0x10;
      plVar5 = plVar3;
      do {
        if ((int)uVar1 <= *(int *)((long)plVar4 + 0x1c)) {
          plVar5 = plVar4;
        }
        plVar4 = (long *)plVar4[*(int *)((long)plVar4 + 0x1c) < (int)uVar1];
      } while (plVar4 != (long *)0x0);
      if ((plVar5 != plVar3) && (*(int *)((long)plVar5 + 0x1c) <= (int)uVar1)) {
        uVar1 = *(uint *)(plVar5 + 4);
        fVar6 = (float)(uVar1 & 0xff) * DAT_00144b04;
        uVar7 = NEON_neg(DAT_00146388,4);
        uVar8 = NEON_ushl(CONCAT44(uVar1,uVar1),uVar7,4);
        uVar7 = NEON_scvtf(uVar8 & 0xff000000ff,4);
        uVar7 = CONCAT44((float)((ulong)uVar7 >> 0x20) * 0.003921569,(float)uVar7 * 0.003921569);
        goto LAB_001733c4;
      }
    }
  }
  fVar6 = *(float *)(param_2 + 1);
  uVar7 = *(undefined8 *)((long)param_2 + 0xc);
LAB_001733c4:
  return (int)(param_1 * 255.0) & 0xffU | ((int)(fVar6 * 255.0) & 0xffU) << 8 |
         ((int)((float)uVar7 * 255.0) & 0xffU) << 0x10 |
         (int)((float)((ulong)uVar7 >> 0x20) * 255.0) << 0x18;
}


// ===== 00173448  FUN_00173448 =====

void FUN_00173448(long param_1,undefined8 *param_2)

{
  long *plVar1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *this;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = *param_2;
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  uVar6 = param_2[2];
  lVar5 = param_2[3];
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  this = *(__shared_weak_count **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(long *)(param_1 + 0x28) = lVar5;
  if (this != (__shared_weak_count *)0x0) {
    p_Var2 = this + 8;
    do {
      lVar5 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  uVar9 = param_2[5];
  uVar8 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  *(undefined8 *)(param_1 + 0x4e) = *(undefined8 *)((long)param_2 + 0x3e);
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  return;
}


// ===== 001734e0  FUN_001734e0 =====

void FUN_001734e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_001710cc();
  puVar4 = (undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *puVar4;
  FUN_001735d4(param_1,puVar4);
  lVar2 = *(long *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa8) = lVar2;
  plVar5 = (long *)*puVar4;
  plVar6 = *(long **)(param_1 + 0x30);
  lVar3 = lVar2;
  if (plVar5 != plVar6) {
    do {
      lVar2 = *plVar5;
      FUN_0017367c(lVar2);
      local_50 = *(undefined8 *)(lVar2 + 0x90);
      puVar4 = *(undefined8 **)(param_1 + 0xa8);
      if (puVar4 < *(undefined8 **)(param_1 + 0xb0)) {
        *puVar4 = local_50;
        *(undefined8 **)(param_1 + 0xa8) = puVar4 + 1;
      }
      else {
        FUN_00179af8((long *)(param_1 + 0xa0),&local_50);
      }
      plVar5 = plVar5 + 1;
    } while (plVar6 != plVar5);
    lVar2 = *(long *)(param_1 + 0xa8);
    lVar3 = *(long *)(param_1 + 0xa0);
  }
  *(long *)(*(long *)(param_1 + 0x20) + 0x40) = lVar3;
  *(int *)(*(long *)(param_1 + 0x20) + 0x48) = (int)((ulong)(lVar2 - lVar3) >> 3);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001735d4  FUN_001735d4 =====

void FUN_001735d4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  long local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (((*(int *)(*(long *)(param_1 + 0x48) + 100) <= *(int *)(param_1 + 0x94)) &&
      (*(int *)(param_1 + 0x94) < *(int *)(*(long *)(param_1 + 0x48) + 0x68))) &&
     (fVar3 = ABS(*(float *)(param_1 + 0x90)),
     fVar3 != DAT_00144b68 && fVar3 < DAT_00144b68 == (NAN(fVar3) || NAN(DAT_00144b68)))) {
    local_30 = param_1 + 0xb8;
    plVar1 = *(long **)(param_2 + 8);
    if (plVar1 < *(long **)(param_2 + 0x10)) {
      *plVar1 = local_30;
      *(long **)(param_2 + 8) = plVar1 + 1;
    }
    else {
      FUN_00179c84(param_2,&local_30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017367c  FUN_0017367c =====

void FUN_0017367c(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  void *__s;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88 [6];
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  __s = *(void **)(param_3 + 0x90);
  if (__s == (void *)0x0) {
    __s = operator_new(0xd8);
    memset(__s,0,0xd8);
    *(void **)(param_3 + 0x90) = __s;
    *(undefined8 *)((long)__s + 0x58) = 0;
    *(undefined4 *)((long)__s + 0x60) = 0;
  }
  *(undefined4 *)((long)__s + 200) = 0;
  if ((*(byte *)(param_3 + 0x88) & 1) != 0) {
    lVar4 = *(long *)(param_3 + 0x68) - *(long *)(param_3 + 0x60);
    if (lVar4 != 0) {
      FUN_0018e19c(local_88,*(long *)(param_3 + 0x60),lVar4 >> 2);
      FUN_0018e734(&local_98,local_88,param_3 + 0x58);
      uStack_90 = *(undefined8 *)(param_3 + 0x58);
      *(undefined8 *)(param_3 + 0x58) = local_98;
      local_98 = 0;
      FUN_00177938(&uStack_90);
      FUN_00177938(&local_98);
      FUN_00177938(auStack_58);
      __s = *(void **)(param_3 + 0x90);
    }
    lVar4 = *(long *)(param_3 + 0x58);
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    lVar6 = *(long *)(lVar4 + 8);
    *(undefined8 *)((long)__s + 0x10) = uVar5;
    iVar1 = *(int *)(lVar4 + 0x28);
    plVar7 = *(long **)(param_3 + 0x90);
    *plVar7 = lVar6;
    *(int *)(plVar7 + 3) = iVar1 - (int)uVar5;
    __s = *(void **)(param_3 + 0x90);
    *(uint *)((long)__s + 8) = (uint)((ulong)(*(long *)(lVar4 + 0x10) - lVar6) >> 2) & 0xfffffffe;
    *(uint *)((long)__s + 200) = *(uint *)((long)__s + 200) | 1;
  }
  if (*(char *)(param_3 + 0x80) == '\0') {
    *(undefined1 *)((long)__s + 0x28) = 0;
  }
  else {
    *(int *)((long)__s + 0x2c) = (int)*(float *)(param_3 + 0x78);
    fVar8 = *(float *)(param_3 + 0x7c);
    *(undefined1 *)((long)__s + 0x28) = 1;
    *(int *)((long)__s + 0x38) = (int)fVar8;
    if (*(byte *)(param_3 + 0x81) < 3) {
      *(uint *)((long)__s + 0x30) = (uint)*(byte *)(param_3 + 0x81);
    }
    bVar2 = *(byte *)(param_3 + 0x82);
    if ((bVar2 == 2) || (bVar2 == 1)) {
      *(uint *)((long)__s + 0x34) = (uint)bVar2;
    }
    else {
      *(undefined4 *)((long)__s + 0x34) = 0;
    }
  }
  *(uint *)((long)__s + 0xd0) = (uint)(*(char *)(param_3 + 0x8c) != '\0');
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 == 3) {
    *(undefined4 *)((long)__s + 0xcc) = 1;
    *(undefined4 *)((long)__s + 0x50) = 1;
    local_88[0] = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x2c);
    uVar9 = FUN_00190798(*(long *)(param_3 + 0x18) + 0x44,local_88);
    local_88[0] = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x34);
    uVar11 = param_2;
    uVar10 = FUN_00190798(*(long *)(param_3 + 0x18) + 0x44,local_88);
    lVar4 = *(long *)(param_3 + 0x90);
    *(undefined4 *)(lVar4 + 0x74) = uVar9;
    *(undefined4 *)(lVar4 + 0x78) = param_2;
    *(undefined4 *)(lVar4 + 0x7c) = uVar10;
    *(undefined4 *)(lVar4 + 0x80) = uVar11;
    fVar8 = (float)FUN_001762d0(*(long *)(param_3 + 0x18) + 0x44);
    lVar6 = *(long *)(param_3 + 0x18);
    lVar4 = *(long *)(param_3 + 0x90);
    *(float *)(lVar4 + 0x84) = *(float *)(lVar6 + 0x3c) * fVar8;
    *(float *)(lVar4 + 0x88) = *(float *)(lVar6 + 0x40) * fVar8;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        *(undefined4 *)((long)__s + 0xcc) = 0;
        *(undefined1 *)((long)__s + 0x20) = *(undefined1 *)(param_3 + 0x15);
        *(undefined1 *)((long)__s + 0x21) = *(undefined1 *)(param_3 + 0x16);
        *(undefined1 *)((long)__s + 0x22) = *(undefined1 *)(param_3 + 0x17);
        *(undefined1 *)((long)__s + 0x23) = *(undefined1 *)(param_3 + 0x14);
      }
      goto LAB_00173908;
    }
    *(undefined4 *)((long)__s + 0xcc) = 1;
    *(undefined4 *)((long)__s + 0x50) = 0;
    local_88[0] = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x2c);
    uVar9 = FUN_00190798(*(long *)(param_3 + 0x18) + 0x44,local_88);
    local_88[0] = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x34);
    uVar11 = param_2;
    uVar10 = FUN_00190798(*(long *)(param_3 + 0x18) + 0x44,local_88);
    lVar4 = *(long *)(param_3 + 0x90);
    *(undefined4 *)(lVar4 + 100) = uVar9;
    *(undefined4 *)(lVar4 + 0x68) = param_2;
    *(undefined4 *)(lVar4 + 0x6c) = uVar10;
    *(undefined4 *)(lVar4 + 0x70) = uVar11;
    lVar6 = *(long *)(param_3 + 0x18);
  }
  FUN_00176b40(lVar4,lVar6);
LAB_00173908:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00173934  FUN_00173934 =====

void FUN_00173934(undefined8 *param_1)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_90;
  __shared_weak_count *local_88;
  undefined1 auStack_80 [24];
  __shared_weak_count *local_68;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  FUN_00171d2c();
  *param_1 = &PTR_FUN_002088d8;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  uVar6 = DAT_00146328;
  param_1[0x1c] = 0;
  *(undefined2 *)((long)param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  param_1[0x1d] = uVar6;
  param_1[0x1e] = 0;
  param_1[0x1f] = uVar6;
  param_1[0x20] = 0;
  FUN_00177f84(param_1 + 0x22);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x4120000000000000;
  *(undefined1 *)((long)param_1 + 0x13a) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0x111;
  *(undefined2 *)((long)param_1 + 0x144) = 1;
  param_1[0x29] = 0;
  if ((*(long *)(param_1[9] + 0x70) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1[9] + 0x70) + 0x48), lVar7 != 0)) {
    local_90 = *(undefined8 *)(lVar7 + 0x40);
    local_88 = *(__shared_weak_count **)(lVar7 + 0x48);
    if (local_88 != (__shared_weak_count *)0x0) {
      p_Var1 = local_88 + 8;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_0018df64(auStack_80,&local_90);
    p_Var1 = local_88;
    if (local_88 != (__shared_weak_count *)0x0) {
      p_Var2 = local_88 + 8;
      do {
        lVar7 = *(long *)p_Var2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar4) {
          *(long *)p_Var2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*(long *)local_88 + 0x10))(local_88);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
      }
    }
    FUN_00173448(param_1 + 0x17,auStack_80);
    if (local_68 != (__shared_weak_count *)0x0) {
      p_Var1 = local_68 + 8;
      do {
        lVar7 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*(long *)local_68 + 0x10))(local_68);
        std::__ndk1::__shared_weak_count::__release_weak(local_68);
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00173bac  FUN_00173bac =====

void FUN_00173bac(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  long local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (((*(int *)(*(long *)(param_1 + 0x48) + 100) <= *(int *)(param_1 + 0x94)) &&
      (*(int *)(param_1 + 0x94) < *(int *)(*(long *)(param_1 + 0x48) + 0x68))) &&
     (fVar3 = ABS(*(float *)(param_1 + 0x90)),
     fVar3 != DAT_00144b68 && fVar3 < DAT_00144b68 == (NAN(fVar3) || NAN(DAT_00144b68)))) {
    local_30 = param_1 + 0xb8;
    plVar1 = *(long **)(param_2 + 8);
    if (plVar1 < *(long **)(param_2 + 0x10)) {
      *plVar1 = local_30;
      *(long **)(param_2 + 8) = plVar1 + 1;
    }
    else {
      FUN_00179c84(param_2,&local_30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00173dc8  FUN_00173dc8 =====

void FUN_00173dc8(undefined8 *param_1)

{
  FUN_00171d2c();
  *param_1 = &PTR_FUN_00208928;
  return;
}


// ===== 00173df8  FUN_00173df8 =====

void FUN_00173df8(undefined8 *param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00171d2c();
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_00208978;
  param_1[0x14] = 0;
  pvVar2 = operator_new(0x60);
  FUN_00174b7c(pvVar2,0);
  param_1[0x17] = pvVar2;
  FUN_00173ec4(pvVar2,param_2);
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  FUN_00173fd4(param_1[0x17],&local_50);
  if (*(char *)(param_2 + 0x4b) != '\0') {
    local_48 = local_50;
    FUN_001740b4(param_1[0x17],&local_50);
  }
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00173ec4  FUN_00173ec4 =====

void FUN_00173ec4(long param_1,long param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_2 != 0) {
    puVar5 = *(undefined8 **)(param_2 + 0x20);
    puVar6 = *(undefined8 **)(param_2 + 0x28);
    if (puVar5 != puVar6) {
      do {
        FUN_00174194(&local_50,*puVar5);
        plVar4 = local_50;
        if (local_50 == (long *)0x0) {
          local_50 = (long *)0x0;
        }
        else {
          local_50[2] = param_1;
          puVar2 = *(undefined8 **)(param_1 + 0x28);
          if (puVar2 < *(undefined8 **)(param_1 + 0x30)) {
            local_50 = (long *)0x0;
            *puVar2 = plVar4;
            *(undefined8 **)(param_1 + 0x28) = puVar2 + 1;
          }
          else {
            FUN_00179e10(param_1 + 0x20,&local_50);
          }
          plVar4 = local_50;
          local_50 = (long *)0x0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
        puVar5 = puVar5 + 2;
      } while (puVar6 != puVar5);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    puVar6 = *(undefined8 **)(param_1 + 0x28);
    if ((puVar6 != puVar5) && (puVar5 < puVar6 + -1)) {
      puVar6 = puVar6 + -2;
      do {
        uVar7 = *puVar5;
        *puVar5 = puVar6[1];
        puVar6[1] = uVar7;
        bVar1 = puVar5 + 1 < puVar6;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + -1;
      } while (bVar1);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00173fd4  FUN_00173fd4 =====

void FUN_00173fd4(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 != *(long **)(param_1 + 0x20)) {
    lVar1 = *param_2;
    lVar3 = param_2[1];
    do {
      plVar7 = plVar7 + -1;
      lVar6 = *plVar7;
      iVar4 = *(int *)(lVar6 + 8);
      if (iVar4 == 1) {
        FUN_00173fd4(lVar6,param_2);
      }
      else if (iVar4 == 3) {
        FUN_00175100(lVar6,param_2,(ulong)(lVar3 - lVar1) >> 3 & 0xffffffff);
      }
      else if (iVar4 == 2) {
        plVar2 = (long *)param_2[1];
        local_50 = lVar6;
        if (plVar2 < (long *)param_2[2]) {
          *plVar2 = lVar6;
          param_2[1] = (long)(plVar2 + 1);
        }
        else {
          FUN_00179fac(param_2,&local_50);
        }
      }
    } while (plVar7 != *(long **)(param_1 + 0x20));
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001740b4  FUN_001740b4 =====

void FUN_001740b4(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 != *(long **)(param_1 + 0x20)) {
    lVar1 = *param_2;
    lVar3 = param_2[1];
    do {
      plVar7 = plVar7 + -1;
      lVar6 = *plVar7;
      iVar4 = *(int *)(lVar6 + 8);
      if (iVar4 == 1) {
        FUN_001740b4(lVar6,param_2);
      }
      else if (iVar4 == 4) {
        FUN_0017516c(lVar6,param_2,(ulong)(lVar3 - lVar1) >> 3 & 0xffffffff);
      }
      else if (iVar4 == 2) {
        plVar2 = (long *)param_2[1];
        local_50 = lVar6;
        if (plVar2 < (long *)param_2[2]) {
          *plVar2 = lVar6;
          param_2[1] = (long)(plVar2 + 1);
        }
        else {
          FUN_00179fac(param_2,&local_50);
        }
      }
    } while (plVar7 != *(long **)(param_1 + 0x20));
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00174194  FUN_00174194 =====

void FUN_00174194(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  switch(*(undefined2 *)(param_2 + 0x1a)) {
  case 3:
    puVar3 = (undefined8 *)operator_new(0x60);
    FUN_00174b7c(puVar3,param_2);
    break;
  case 5:
    puVar3 = (undefined8 *)operator_new(0x110);
    FUN_00175960(puVar3,*(undefined1 *)(param_2 + 0x18));
    puVar3[0x1c] = param_2;
    *puVar3 = &PTR_FUN_00208b68;
    puVar3[0x1e] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x20] = 0;
    puVar3[0x1f] = 0;
    *(undefined4 *)(puVar3 + 0x21) = 0;
    break;
  case 6:
    puVar3 = (undefined8 *)operator_new(0x130);
    FUN_00175960(puVar3,*(undefined1 *)(param_2 + 0x18));
    puVar3[0x1c] = param_2;
    *(undefined4 *)(puVar3 + 0x25) = 0;
    *puVar3 = &PTR_FUN_00208bf8;
    puVar3[0x1e] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x20] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x21] = 0;
    break;
  case 7:
    puVar3 = (undefined8 *)operator_new(0xf8);
    FUN_00175960(puVar3,*(undefined1 *)(param_2 + 0x18));
    puVar3[0x1c] = param_2;
    puVar3[0x1d] = 0;
    *puVar3 = &PTR_FUN_00208bb0;
    *(undefined4 *)(puVar3 + 0x1e) = 0x3f800000;
    *(undefined1 *)((long)puVar3 + 0xf4) = 1;
    break;
  case 8:
    puVar3 = (undefined8 *)operator_new(0x120);
    FUN_00175960(puVar3,*(undefined1 *)(param_2 + 0x18));
    uVar1 = DAT_00146328;
    puVar3[0x1c] = param_2;
    puVar3[0x1d] = 0;
    *(undefined2 *)(puVar3 + 0x1e) = 0;
    *(undefined8 *)((long)puVar3 + 0xf4) = 0;
    *puVar3 = &PTR_FUN_00208c40;
    *(undefined8 *)((long)puVar3 + 0xfc) = uVar1;
    *(undefined4 *)((long)puVar3 + 0x11c) = 0;
    break;
  case 9:
    puVar3 = (undefined8 *)operator_new(0x40);
    FUN_001753ac(puVar3,*(undefined1 *)(param_2 + 0x18));
    ppuVar2 = &PTR_FUN_00208a00;
    goto LAB_00174360;
  case 10:
    puVar3 = (undefined8 *)operator_new(0x40);
    FUN_001753ac(puVar3,*(undefined1 *)(param_2 + 0x18));
    ppuVar2 = &PTR_FUN_00208a48;
    goto LAB_00174360;
  case 0xb:
    puVar3 = (undefined8 *)operator_new(0x40);
    FUN_001753ac(puVar3,*(undefined1 *)(param_2 + 0x18));
    ppuVar2 = &PTR_FUN_00208a90;
    goto LAB_00174360;
  case 0xc:
    puVar3 = (undefined8 *)operator_new(0x40);
    FUN_001753ac(puVar3,*(undefined1 *)(param_2 + 0x18));
    ppuVar2 = &PTR_FUN_00208ad8;
LAB_00174360:
    *puVar3 = ppuVar2;
    puVar3[7] = param_2;
    break;
  case 0xd:
    puVar3 = (undefined8 *)operator_new(0x50);
    *(undefined4 *)(puVar3 + 1) = 4;
    *puVar3 = &PTR_LAB_00208c88;
    puVar3[2] = 0;
    puVar3[7] = 0;
    puVar3[8] = param_2;
    *(undefined4 *)((long)puVar3 + 0x1c) = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 3) = 0xffffffff;
    *(undefined1 *)(puVar3 + 9) = 1;
    break;
  case 0xe:
    puVar3 = (undefined8 *)operator_new(0x70);
    FUN_001767f4(puVar3,param_2);
  }
  *param_1 = puVar3;
  return;
}


// ===== 001743d8  FUN_001743d8 =====

void FUN_001743d8(long param_1)

{
  long lVar1;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *(undefined8 *)(param_1 + 0x78);
  uStack_38 = *(undefined8 *)(param_1 + 0x70);
  uStack_40 = *(undefined8 *)(param_1 + 0x68);
  uStack_48 = *(undefined8 *)(param_1 + 0x60);
  local_50 = *(undefined8 *)(param_1 + 0x58);
  local_58[0] = *(undefined4 *)(param_1 + 0x98);
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))
            (*(undefined4 *)(param_1 + 0x90),*(long **)(param_1 + 0xb8),
             *(undefined4 *)(param_1 + 0x94),&local_50,local_58);
  if (*(char *)(*(long *)(param_1 + 0x48) + 0x4b) != '\0') {
    FUN_00174468(*(undefined8 *)(param_1 + 0xb8));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00174468  FUN_00174468 =====

void FUN_00174468(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != *(long **)(param_1 + 0x20)) {
    do {
      plVar1 = plVar1 + -1;
      if (*(int *)(*plVar1 + 8) == 1) {
        FUN_00174468();
      }
      else if (*(int *)(*plVar1 + 8) == 4) {
        FUN_00174d90();
      }
    } while (plVar1 != *(long **)(param_1 + 0x20));
  }
  return;
}


// ===== 001744c0  FUN_001744c0 =====

void FUN_001744c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_001710cc();
  puVar4 = (undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *puVar4;
  FUN_001745b4(param_1,puVar4);
  lVar2 = *(long *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa8) = lVar2;
  plVar5 = (long *)*puVar4;
  plVar6 = *(long **)(param_1 + 0x30);
  lVar3 = lVar2;
  if (plVar5 != plVar6) {
    do {
      lVar2 = *plVar5;
      FUN_0017367c(lVar2);
      local_50 = *(undefined8 *)(lVar2 + 0x90);
      puVar4 = *(undefined8 **)(param_1 + 0xa8);
      if (puVar4 < *(undefined8 **)(param_1 + 0xb0)) {
        *puVar4 = local_50;
        *(undefined8 **)(param_1 + 0xa8) = puVar4 + 1;
      }
      else {
        FUN_00179af8((long *)(param_1 + 0xa0),&local_50);
      }
      plVar5 = plVar5 + 1;
    } while (plVar6 != plVar5);
    lVar2 = *(long *)(param_1 + 0xa8);
    lVar3 = *(long *)(param_1 + 0xa0);
  }
  *(long *)(*(long *)(param_1 + 0x20) + 0x40) = lVar3;
  *(int *)(*(long *)(param_1 + 0x20) + 0x48) = (int)((ulong)(lVar2 - lVar3) >> 3);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001745b4  FUN_001745b4 =====

void FUN_001745b4(long param_1)

{
  float fVar1;
  
  if (((*(int *)(*(long *)(param_1 + 0x48) + 100) <= *(int *)(param_1 + 0x94)) &&
      (*(int *)(param_1 + 0x94) < *(int *)(*(long *)(param_1 + 0x48) + 0x68))) &&
     (fVar1 = ABS(*(float *)(param_1 + 0x90)),
     fVar1 != DAT_00144b68 && fVar1 < DAT_00144b68 == (NAN(fVar1) || NAN(DAT_00144b68)))) {
                    /* WARNING: Could not recover jumptable at 0x001745f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
    return;
  }
  return;
}


// ===== 00174600  FUN_00174600 =====

void FUN_00174600(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  basic_string_conflict *pbVar6;
  undefined8 *puVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00174774();
  uVar5 = FUN_0017a840(param_2,uVar4,param_3);
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00174774(param_1);
    uVar5 = FUN_00171f00(param_2,uVar4);
    if ((uVar5 & 1) == 0) {
      pbVar6 = (basic_string_conflict *)FUN_00174774(param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_60,pbVar6);
      FUN_0017ab2c(param_2,local_60,param_3);
      if (((byte)local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
    }
    pbVar6 = (basic_string_conflict *)FUN_00174774(param_1);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_78,pbVar6);
    uVar5 = FUN_00172058(param_2,local_78,param_3);
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    if ((uVar5 & 1) != 0) {
      pbVar6 = (basic_string_conflict *)FUN_00174774(param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_90,pbVar6);
      uVar3 = FUN_0017a9e8(param_2,local_90,param_3);
      if (((byte)local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x28);
      for (puVar7 = *(undefined8 **)(param_1 + 0x20); puVar7 != puVar1; puVar7 = puVar7 + 1) {
        (**(code **)(*(long *)*puVar7 + 0x20))((long *)*puVar7,param_2,uVar3,param_4);
      }
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 00174774  FUN_00174774 =====

undefined1 * FUN_00174774(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  if ((DAT_00214ca0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_00214ca0);
    if (iVar2 != 0) {
      DAT_00214c88 = 4;
      DAT_00214c89 = 0x5f5f;
      DAT_00214c8b = 0;
      __cxa_atexit(PTR__basic_string_0020f7d0,&DAT_00214c88,&PTR_LOOP_002086b0);
      __cxa_guard_release(&DAT_00214ca0);
    }
  }
  puVar1 = &DAT_00214c88;
  if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 0x18);
  }
  return puVar1;
}


// ===== 001748fc  FUN_001748fc =====

void FUN_001748fc(ulong *param_1,uint *param_2)

{
  void *pvVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  void *local_70;
  void *pvStack_68;
  long local_60;
  void *local_58;
  ulong *puStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = (ulong)*param_2;
  if (*param_2 < 0x20) {
    uVar6 = 1L << (uVar4 & 0x3f);
    if ((*param_1 & uVar6) == 0) {
      uVar4 = param_1[2];
      *param_1 = *param_1 | uVar6;
      if (uVar4 == param_1[3]) {
        uVar6 = param_1[1];
        lVar8 = (long)(uVar4 - uVar6) >> 6;
        uVar4 = lVar8 + 1;
        if (uVar4 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        lVar5 = param_1[3] - uVar6;
        uVar6 = lVar5 >> 5;
        if (uVar4 <= uVar6) {
          uVar4 = uVar6;
        }
        puStack_50 = param_1 + 3;
        if (0x1fffffffffffffe < (ulong)(lVar5 >> 6)) {
          uVar4 = 0x3ffffffffffffff;
        }
        local_58 = (void *)0x0;
        if (uVar4 == 0) {
          local_70 = (void *)0x0;
        }
        else {
          if (uVar4 >> 0x3a != 0) goto LAB_00174a80;
          local_70 = operator_new(uVar4 << 6);
        }
        pvVar1 = (void *)((long)local_70 + lVar8 * 0x40);
        local_58 = (void *)((long)local_70 + uVar4 * 0x40);
        *(undefined4 *)((long)pvVar1 + 4) = 0;
        pvStack_68 = pvVar1;
        FUN_001780cc(pvVar1,param_2);
        local_60 = (long)pvVar1 + 0x40;
        FUN_00178158(param_1 + 1,&local_70);
        FUN_001781f4(&local_70);
      }
      else {
        *(undefined4 *)(uVar4 + 4) = 0;
        FUN_001780cc(uVar4,param_2);
        param_1[2] = uVar4 + 0x40;
      }
    }
    else {
      piVar7 = (int *)param_1[1];
      piVar2 = (int *)param_1[2];
      if (piVar7 != piVar2) {
        while( true ) {
          if (*piVar7 == (int)uVar4) {
            FUN_001702e4(piVar7);
            FUN_001780cc(piVar7,param_2);
          }
          if (piVar2 + -0x10 == piVar7) break;
          uVar4 = (ulong)*param_2;
          piVar7 = piVar7 + 0x10;
        }
      }
    }
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00174a80:
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00174b7c  FUN_00174b7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00174b7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = 1;
  uVar2 = _UNK_001462a8;
  uVar1 = _DAT_001462a0;
  *param_1 = &PTR_LAB_002089c8;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  *(undefined2 *)((long)param_1 + 0x5c) = 0;
  FUN_00173ec4();
  return;
}


// ===== 00174d48  FUN_00174d48 =====

float FUN_00174d48(long param_1)

{
  long lVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    lVar1 = *(long *)(param_1 + 0x20);
    if (*(char *)(lVar1 + 0x70) == '\0') {
      fVar2 = (float)FUN_00178d34(*(undefined8 *)(lVar1 + 0x68));
    }
    else {
      fVar2 = *(float *)(lVar1 + 0x68);
    }
    fVar2 = fVar2 * DAT_00144b80;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x20);
  }
  return fVar2;
}


// ===== 00174d90  FUN_00174d90 =====

void FUN_00174d90(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x48) == '\0') {
    plVar4 = *(long **)(param_1 + 0x28);
    do {
      if (plVar4 == *(long **)(param_1 + 0x30)) goto LAB_00175078;
      lVar6 = *plVar4;
      plVar4 = plVar4 + 1;
    } while (*(char *)(lVar6 + 0x34) == '\0');
  }
  fVar8 = *(float *)(param_1 + 0x1c);
  fVar10 = *(float *)(param_1 + 0x20);
  fVar13 = ABS(fVar8 - fVar10);
  if (fVar13 < DAT_00144b68 == (NAN(fVar13) || NAN(DAT_00144b68))) {
    if (ABS(fVar13 + -1.0) < DAT_00144b68 == (NAN(ABS(fVar13 + -1.0)) || NAN(DAT_00144b68))) {
      plVar4 = *(long **)(param_1 + 0x28);
      plVar1 = *(long **)(param_1 + 0x30);
      if (*(int *)(*(long *)(param_1 + 0x40) + 0x50) == 0) {
        if (plVar4 != plVar1) {
          lVar7 = *plVar4;
          lVar6 = lVar7 + 0x20;
          local_80 = *(undefined8 *)(param_1 + 0x1c);
          FUN_00199358(&uStack_88,&local_80,lVar6);
          FUN_0017804c(lVar6,&uStack_88);
          *(undefined2 *)(lVar7 + 0x34) = 0x101;
          FUN_00177938(&uStack_88);
          while (plVar4 = plVar4 + 1, plVar4 != plVar1) {
            local_80 = *(undefined8 *)(param_1 + 0x1c);
            lVar7 = *plVar4;
            lVar6 = lVar7 + 0x20;
            FUN_00199358(&uStack_88,&local_80,lVar6);
            FUN_0017804c(lVar6,&uStack_88);
            *(undefined2 *)(lVar7 + 0x34) = 0x101;
            FUN_00177938(&uStack_88);
          }
        }
      }
      else {
        fVar13 = 0.0;
        if (plVar4 != plVar1) {
          do {
            plVar5 = plVar4 + 1;
            fVar8 = (float)FUN_00197338(*(long *)(*plVar4 + 0x20) + 8);
            fVar13 = fVar8 + fVar13;
            plVar4 = plVar5;
          } while (plVar1 != plVar5);
          fVar8 = *(float *)(param_1 + 0x1c);
          fVar10 = *(float *)(param_1 + 0x20);
        }
        fVar8 = fVar8 * fVar13;
        fVar10 = fVar10 * fVar13;
        if (fVar8 < fVar10 != (NAN(fVar8) || NAN(fVar10))) {
          plVar4 = *(long **)(param_1 + 0x28);
          plVar1 = *(long **)(param_1 + 0x30);
          if (plVar4 != plVar1) {
            fVar13 = 0.0;
            do {
              lVar6 = *plVar4;
              if (fVar13 == fVar10 || fVar13 < fVar10 != (NAN(fVar13) || NAN(fVar10))) {
                fVar9 = (float)FUN_00197338(*(long *)(lVar6 + 0x20) + 8);
                if ((fVar13 < fVar8 == (NAN(fVar13) || NAN(fVar8))) ||
                   (fVar9 + fVar13 < fVar8 == (NAN(fVar9 + fVar13) || NAN(fVar8)))) {
                  fVar14 = fVar9 + fVar13;
                  if ((fVar8 == fVar13 || fVar8 < fVar13 != (NAN(fVar8) || NAN(fVar13))) &&
                     (fVar10 < fVar14 == (NAN(fVar10) || NAN(fVar14)))) goto LAB_00174fe0;
                  fVar11 = fVar8 - fVar13;
                  if (fVar13 < fVar8 == (NAN(fVar13) || NAN(fVar8))) {
                    fVar11 = 0.0;
                  }
                  fVar12 = fVar9;
                  if (fVar14 < fVar10 == (NAN(fVar14) || NAN(fVar10))) {
                    fVar12 = fVar10 - fVar13;
                  }
                  local_80 = CONCAT44(fVar12 / fVar9,fVar11 / fVar9);
                  FUN_00199358(&uStack_88,&local_80,*plVar4 + 0x20);
                  lVar6 = *plVar4;
                  FUN_0017804c(lVar6 + 0x20,&uStack_88);
                  puVar3 = &uStack_88;
                  *(undefined2 *)(lVar6 + 0x34) = 0x101;
                }
                else {
                  lVar6 = *plVar4;
                  local_80 = 0;
                  FUN_00177f84(&local_80);
                  FUN_0017804c(lVar6 + 0x20,&local_80);
                  *(undefined2 *)(lVar6 + 0x34) = 0x101;
                  puVar3 = &local_80;
                }
                FUN_00177938(puVar3);
                fVar14 = fVar9 + fVar13;
              }
              else {
                local_80 = 0;
                FUN_00177f84(&local_80);
                FUN_0017804c(lVar6 + 0x20,&local_80);
                *(undefined2 *)(lVar6 + 0x34) = 0x101;
                FUN_00177938(&local_80);
                fVar14 = fVar13;
              }
LAB_00174fe0:
              fVar13 = fVar14;
              plVar4 = plVar4 + 1;
            } while (plVar1 != plVar4);
          }
        }
      }
    }
    else {
      plVar1 = *(long **)(param_1 + 0x30);
      for (plVar4 = *(long **)(param_1 + 0x28); plVar4 != plVar1; plVar4 = plVar4 + 1) {
        lVar7 = *plVar4;
        lVar6 = lVar7 + 0x20;
        FUN_0017804c(lVar6,lVar6);
        *(undefined2 *)(lVar7 + 0x34) = 0x101;
      }
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 0x30);
    for (plVar4 = *(long **)(param_1 + 0x28); plVar4 != plVar1; plVar4 = plVar4 + 1) {
      lVar6 = *plVar4;
      local_80 = 0;
      FUN_00177f84(&local_80);
      FUN_0017804c(lVar6 + 0x20,&local_80);
      *(undefined2 *)(lVar6 + 0x34) = 0x101;
      FUN_00177938(&local_80);
    }
  }
LAB_00175078:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001750b4  FUN_001750b4 =====

void FUN_001750b4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  for (puVar2 = *(undefined8 **)(param_1 + 0x20); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,param_2);
  }
  return;
}


// ===== 00175100  FUN_00175100 =====

void FUN_00175100(long param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)param_2[1];
  puVar3 = (undefined8 *)(*param_2 + (long)param_3 * 8);
  if (puVar3 != puVar2) {
    do {
      puVar1 = *(undefined8 **)(param_1 + 0x20);
      if (puVar1 == *(undefined8 **)(param_1 + 0x28)) {
        FUN_0017a2d8(param_1 + 0x18,puVar3);
      }
      else {
        *puVar1 = *puVar3;
        *(undefined8 **)(param_1 + 0x20) = puVar1 + 1;
      }
      puVar3 = puVar3 + 1;
    } while (puVar2 != puVar3);
  }
  return;
}


// ===== 0017516c  FUN_0017516c =====

void FUN_0017516c(long param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)param_2[1];
  puVar3 = (undefined8 *)(*param_2 + (long)param_3 * 8);
  if (puVar3 != puVar2) {
    do {
      puVar1 = *(undefined8 **)(param_1 + 0x30);
      if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
        FUN_0017a2d8(param_1 + 0x28,puVar3);
      }
      else {
        *puVar1 = *puVar3;
        *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
      }
      puVar3 = puVar3 + 1;
    } while (puVar2 != puVar3);
  }
  return;
}


// ===== 001751d8  FUN_001751d8 =====

void FUN_001751d8(long *param_1,int param_2,undefined8 param_3,byte *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = (int)param_1[6];
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(int *)(param_1 + 6) = param_2;
  if ((iVar1 == -1) ||
     (((iVar1 != param_2 && (*(char *)((long)param_1 + 0x36) == '\0')) &&
      (uVar3 = (**(code **)(*param_1 + 0x30))(param_1,iVar1,param_2), (uVar3 & 1) != 0)))) {
    local_48 = 0;
    FUN_00177f84(&local_48);
    lStack_40 = param_1[4];
    param_1[4] = local_48;
    local_48 = 0;
    FUN_00177938(&lStack_40);
    FUN_00177938(&local_48);
    (**(code **)(*param_1 + 0x28))(param_1,param_1 + 3,param_2);
    *(undefined2 *)((long)param_1 + 0x34) = 0x101;
  }
  FUN_0017804c(param_1 + 4,param_1 + 3);
  if (((*param_4 & 1) != 0) || (*(char *)((long)param_1 + 0x34) != '\0')) {
    *(undefined1 *)((long)param_1 + 0x34) = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001752d8  FUN_001752d8 =====

long FUN_001752d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((*(char *)(param_1 + 0x34) != '\0') || (*(char *)(param_1 + 0x35) != '\0')) {
    lVar1 = FUN_00177878(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar1 != lVar3 + 8) {
      FUN_00177b40(lVar1,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
      FUN_00177c7c(lVar1 + 0x18,*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28));
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x40);
    uVar2 = *(undefined8 *)(lVar3 + 0x38);
    *(undefined2 *)(lVar1 + 0x40) = *(undefined2 *)(lVar3 + 0x48);
    *(undefined8 *)(lVar1 + 0x38) = uVar4;
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    lVar1 = *(long *)(param_1 + 0x10);
    uVar2 = FUN_00177878(param_1 + 0x28);
    FUN_001972e4(uVar2,lVar1 + 0x38);
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  return param_1 + 0x28;
}


// ===== 00175374  FUN_00175374 =====

void FUN_00175374(undefined8 *param_1,long param_2)

{
  FUN_001753ac(param_1,*(undefined1 *)(param_2 + 0x18));
  *param_1 = &PTR_FUN_00208a00;
  param_1[7] = param_2;
  return;
}


// ===== 001753ac  FUN_001753ac =====

void FUN_001753ac(undefined8 *param_1,byte param_2)

{
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 2;
  *param_1 = &PTR_FUN_00208cf8;
  FUN_00177f84(param_1 + 3);
  FUN_00177f84(param_1 + 4);
  FUN_00177f84(param_1 + 5);
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x34) = 0x101;
  *(byte *)((long)param_1 + 0x36) = param_2 & 1;
  return;
}


// ===== 0017540c  FUN_0017540c =====

void FUN_0017540c(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  float fVar7;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_0017551c(*(long *)(param_3 + 0x38) + 0x20,param_5);
  fVar7 = param_2;
  local_70 = (float)FUN_0017551c(*(long *)(param_3 + 0x38) + 0x30,param_5);
  lVar4 = *(long *)(param_3 + 0x38);
  if (*(char *)(lVar4 + 0x48) == '\0') {
    uVar6 = FUN_00178d34(*(undefined8 *)(lVar4 + 0x40),param_5);
  }
  else {
    uVar6 = (ulong)*(uint *)(lVar4 + 0x40);
  }
  local_78 = (float)NEON_fmsub(local_70,0x3f000000,uVar5);
  fStack_74 = (float)NEON_fmsub(fVar7,0x3f000000,param_2);
  local_70 = local_78 + local_70;
  fStack_6c = fStack_74 + fVar7;
  FUN_00177878(param_4);
  FUN_00197a68();
  iVar1 = *(int *)(*(long *)(param_3 + 0x38) + 0x1c);
  uVar3 = FUN_00177878(param_4);
  FUN_0019846c(uVar6,uVar3,&local_78,iVar1 != 3);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017551c  FUN_0017551c =====

undefined1  [16] FUN_0017551c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 extraout_s0;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_0017a138(*param_1);
    uVar1 = extraout_s0;
    uVar3 = extraout_var;
    uVar4 = extraout_var_00;
  }
  else {
    uVar1 = *(undefined4 *)param_1;
    uVar3 = 0;
    uVar4 = 0;
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = uVar1;
  auVar2._8_8_ = uVar4;
  return auVar2;
}


// ===== 00175544  FUN_00175544 =====

void FUN_00175544(undefined8 *param_1,long param_2)

{
  FUN_001753ac(param_1,*(undefined1 *)(param_2 + 0x18));
  *param_1 = &PTR_FUN_00208a48;
  param_1[7] = param_2;
  return;
}


// ===== 0017557c  FUN_0017557c =====

void FUN_0017557c(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_0017551c(*(long *)(param_3 + 0x38) + 0x20,param_5);
  fVar5 = param_2;
  local_50 = (float)FUN_0017551c(*(long *)(param_3 + 0x38) + 0x30,param_5);
  local_58 = (float)NEON_fmsub(local_50,0x3f000000,uVar4);
  fStack_54 = (float)NEON_fmsub(fVar5,0x3f000000,param_2);
  local_50 = local_58 + local_50;
  fStack_4c = fStack_54 + fVar5;
  FUN_00177878(param_4);
  FUN_00197a68();
  iVar1 = *(int *)(*(long *)(param_3 + 0x38) + 0x1c);
  uVar3 = FUN_00177878(param_4);
  FUN_00198184(uVar3,&local_58,iVar1 != 3);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017564c  FUN_0017564c =====

void FUN_0017564c(undefined8 *param_1,long param_2)

{
  FUN_001753ac(param_1,*(undefined1 *)(param_2 + 0x18));
  *param_1 = &PTR_FUN_00208a90;
  param_1[7] = param_2;
  return;
}


// ===== 00175684  FUN_00175684 =====

void FUN_00175684(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  void *local_48;
  void *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00170e98(&local_48,*(long *)(param_1 + 0x38) + 0x20,param_3);
  FUN_00170ee8(&local_48,param_2);
  if (local_48 != (void *)0x0) {
    local_40 = local_48;
    operator_delete(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001756f8  FUN_001756f8 =====

void FUN_001756f8(undefined8 *param_1,long param_2)

{
  FUN_001753ac(param_1,*(undefined1 *)(param_2 + 0x18));
  *param_1 = &PTR_FUN_00208ad8;
  param_1[7] = param_2;
  return;
}


// ===== 00175730  FUN_00175730 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00175730(undefined1 param_1 [16],undefined8 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined2 local_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_0017551c(*(long *)(param_3 + 0x38) + 0x28,param_5);
  lVar5 = *(long *)(param_3 + 0x38);
  if (*(char *)(lVar5 + 0x40) == '\0') {
    uVar7 = FUN_00178d34(*(undefined8 *)(lVar5 + 0x38),param_5);
    lVar5 = *(long *)(param_3 + 0x38);
  }
  else {
    uVar7 = (ulong)*(uint *)(lVar5 + 0x38);
  }
  if (*(char *)(lVar5 + 0x50) == '\0') {
    uVar8 = FUN_00178d34(*(undefined8 *)(lVar5 + 0x48),param_5);
    lVar5 = *(long *)(param_3 + 0x38);
  }
  else {
    uVar8 = (ulong)*(uint *)(lVar5 + 0x48);
  }
  if (*(char *)(lVar5 + 0x60) == '\0') {
    uVar9 = FUN_00178d34(*(undefined8 *)(lVar5 + 0x58),param_5);
    lVar5 = *(long *)(param_3 + 0x38);
  }
  else {
    uVar9 = (ulong)*(uint *)(lVar5 + 0x58);
  }
  if (*(char *)(lVar5 + 0x70) == '\0') {
    uVar10 = FUN_00178d34(*(undefined8 *)(lVar5 + 0x68),param_5);
    lVar5 = *(long *)(param_3 + 0x38);
  }
  else {
    uVar10 = (ulong)*(uint *)(lVar5 + 0x68);
  }
  if (*(char *)(lVar5 + 0x80) == '\0') {
    uVar11 = FUN_00178d34(*(undefined8 *)(lVar5 + 0x78),param_5);
    lVar5 = *(long *)(param_3 + 0x38);
  }
  else {
    uVar11 = (ulong)*(uint *)(lVar5 + 0x78);
  }
  if (*(char *)(lVar5 + 0x90) == '\0') {
    uVar12 = FUN_00178d34(*(undefined8 *)(lVar5 + 0x88),param_5);
  }
  else {
    uVar12 = (ulong)*(uint *)(lVar5 + 0x88);
  }
  FUN_00177878(param_4);
  FUN_00197a68();
  local_80 = 0x3f800000;
  local_7c = 0;
  uStack_98 = _UNK_001462a8;
  local_a0 = _DAT_001462a0;
  uStack_88 = _UNK_001462a8;
  uStack_90 = _DAT_001462a0;
  iVar1 = *(int *)(*(long *)(param_3 + 0x38) + 0x20);
  bVar3 = *(int *)(*(long *)(param_3 + 0x38) + 0x1c) != 3;
  uVar4 = FUN_00177878(param_4);
  if (iVar1 == 1) {
    FUN_00198a14(uVar7,uVar8,uVar9,uVar10,uVar11,0,0,0,uVar4,bVar3);
  }
  else {
    FUN_00198dc0(uVar7,uVar9,uVar11,0,0,0,uVar4,bVar3);
  }
  uVar6 = FUN_0018f6e4(uVar6,param_2,&local_a0);
  FUN_0018f9b8(uVar12,uVar6,2);
  FUN_0018f9b8(uVar12,&local_a0,2);
  uVar6 = FUN_00177878(param_4);
  FUN_001972e4(uVar6,&local_a0);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175960  FUN_00175960 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00175960(undefined8 *param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  uVar2 = _UNK_001462a8;
  uVar1 = _DAT_001462a0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)((long)param_1 + 0x84) = 0;
  *param_1 = &PTR_FUN_00208b20;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar2;
  param_1[0xe] = uVar1;
  FUN_00177f84(param_1 + 0x11);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x4120000000000000;
  *(undefined1 *)((long)param_1 + 0xb2) = 1;
  *(undefined4 *)(param_1 + 0x17) = 0x111;
  *(undefined2 *)((long)param_1 + 0xbc) = 1;
  FUN_00177f84(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(byte *)((long)param_1 + 0xdc) = param_2 & 1;
  *(undefined8 *)((long)param_1 + 0xd4) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xdd) = 1;
  return;
}


// ===== 00175a3c  FUN_00175a3c =====

void FUN_00175a3c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  if (*(long **)(param_1 + 0x18) != *(long **)(param_1 + 0x20)) {
    bVar3 = false;
    plVar8 = *(long **)(param_1 + 0x18);
    do {
      bVar3 = (bool)(bVar3 | *(char *)(*plVar8 + 0x34) != '\0');
      if (*(char *)(*plVar8 + 0x34) != '\0') break;
      bVar4 = *(long **)(param_1 + 0x20) + -1 != plVar8;
      plVar8 = plVar8 + 1;
    } while (bVar4);
    if (bVar3) {
      plVar8 = (long *)(param_1 + 200);
      FUN_00177878(plVar8);
      FUN_00197a68();
      puVar2 = *(undefined8 **)(param_1 + 0x20);
      for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != puVar2; puVar1 = puVar1 + 1) {
        plVar5 = (long *)FUN_001752d8(*puVar1);
        if (*(long *)(*plVar5 + 0x20) != *(long *)(*plVar5 + 0x28)) {
          lVar7 = *plVar8;
          if ((*(long *)(lVar7 + 0x20) == *(long *)(lVar7 + 0x28)) &&
             (*(long *)(lVar7 + 0x30) == *(long *)(lVar7 + 0x20))) {
            FUN_0017804c(plVar8,plVar5);
          }
          else {
            uVar6 = FUN_00177878(plVar8);
            FUN_00198fcc(uVar6,*plVar5 + 8);
          }
        }
      }
      FUN_0018ebc8(param_1 + 0x30,plVar8);
      return;
    }
  }
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
    FUN_0017804c(param_1 + 0x88,param_1 + 200);
  }
  return;
}


// ===== 00175b5c  FUN_00175b5c =====

void FUN_00175b5c(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(char *)((long)param_1 + 0xdd) != '\0') {
    (**(code **)(*param_1 + 0x30))(param_1);
    FUN_00175a3c(param_1);
    *(undefined1 *)((long)param_1 + 0xdd) = 0;
  }
  local_40 = param_1 + 6;
  plVar1 = *(long **)(param_2 + 8);
  if (plVar1 < *(long **)(param_2 + 0x10)) {
    *plVar1 = (long)local_40;
    *(long **)(param_2 + 8) = plVar1 + 1;
  }
  else {
    FUN_00179c84(param_2,&local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175bfc  FUN_00175bfc =====

void FUN_00175bfc(undefined8 *param_1,long param_2)

{
  FUN_00175960(param_1,*(undefined1 *)(param_2 + 0x18));
  param_1[0x1c] = param_2;
  *param_1 = &PTR_FUN_00208b68;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  return;
}


// ===== 00175c44  FUN_00175c44 =====

void FUN_00175c44(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00175cbc(auStack_50,param_1 + 0xe0);
  FUN_00175d04(param_1 + 0xe0,param_2);
  uVar2 = FUN_00173340(auStack_50);
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175cbc  FUN_00175cbc =====

void FUN_00175cbc(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    FUN_001782d8(param_2 + 1,0);
    return;
  }
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x38) != '\0') {
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    param_1[2] = *(undefined8 *)(lVar1 + 0x30);
    param_1[1] = uVar3;
    *param_1 = uVar2;
    return;
  }
  FUN_00178390(*(undefined8 *)(lVar1 + 0x20),param_3);
  return;
}


// ===== 00175d04  FUN_00175d04 =====

undefined1  [16] FUN_00175d04(long *param_1,undefined4 param_2)

{
  long lVar1;
  float fVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    lVar1 = *param_1;
    if (*(char *)(lVar1 + 0x48) == '\0') {
      fVar2 = (float)FUN_00178d34(*(undefined8 *)(lVar1 + 0x40),param_2);
    }
    else {
      fVar2 = *(float *)(lVar1 + 0x40);
    }
    return ZEXT416((uint)(fVar2 * DAT_00144b80));
  }
  FUN_00178920(param_1 + 1,1);
  auVar3._4_4_ = extraout_var;
  auVar3._0_4_ = extraout_s0;
  auVar3._8_8_ = extraout_var_00;
  return auVar3;
}


// ===== 00175d5c  FUN_00175d5c =====

void FUN_00175d5c(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 local_74;
  undefined3 uStack_73;
  undefined1 auStack_70 [24];
  __shared_weak_count *local_58;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  _local_74 = CONCAT31((int3)(*(uint *)(param_1 + 0x108) >> 8),
                       (char)(int)(*(float *)(param_1 + 0xd0) *
                                  (float)(*(uint *)(param_1 + 0x108) & 0xff)));
  FUN_0018dea8(auStack_70,&local_74);
  FUN_00173448(param_1 + 0x30,auStack_70);
  *(undefined1 *)(param_1 + 0xbc) = *(undefined1 *)(*(long *)(param_1 + 0xe0) + 0x1c);
  if (local_58 != (__shared_weak_count *)0x0) {
    p_Var1 = local_58 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)local_58 + 0x10))(local_58);
      std::__ndk1::__shared_weak_count::__release_weak(local_58);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175e1c  FUN_00175e1c =====

void FUN_00175e1c(undefined8 *param_1,long param_2)

{
  FUN_00175960(param_1,*(undefined1 *)(param_2 + 0x18));
  param_1[0x1c] = param_2;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_00208bb0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0xf4) = 1;
  return;
}


// ===== 00175e64  FUN_00175e64 =====

void FUN_00175e64(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  if (*(char *)(lVar1 + 0x68) == '\0') {
    fVar3 = (float)FUN_00178d34(*(undefined8 *)(lVar1 + 0x60),param_2);
    lVar1 = *(long *)(param_1 + 0xe0);
  }
  else {
    fVar3 = *(float *)(lVar1 + 0x60);
  }
  *(float *)(param_1 + 0xf0) = (float)((double)fVar3 * DAT_00146338);
  FUN_0017d798(lVar1,param_1 + 0xe8,param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0xe8);
  uVar5 = *(undefined8 *)(lVar1 + 0x50);
  uVar4 = *(undefined8 *)(lVar1 + 0x48);
  uVar7 = *(undefined8 *)(lVar1 + 0x40);
  uVar6 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar2 + 0x62) = *(undefined8 *)(lVar1 + 0x56);
  *(undefined8 *)(lVar2 + 0x5c) = uVar5;
  *(undefined8 *)(lVar2 + 0x54) = uVar4;
  *(undefined8 *)(lVar2 + 0x4c) = uVar7;
  *(undefined8 *)(lVar2 + 0x44) = uVar6;
  *(undefined1 *)(param_1 + 0xf4) = *(undefined1 *)(*(long *)(param_1 + 0xe0) + 0x95);
  return;
}


// ===== 00175ef8  FUN_00175ef8 =====

void FUN_00175ef8(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [24];
  __shared_weak_count *local_68;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  *(float *)(*(long *)(param_1 + 0xe8) + 0x28) =
       *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0xf0);
  FUN_0018df18(auStack_80);
  FUN_00173448(param_1 + 0x30,auStack_80);
  if (local_68 != (__shared_weak_count *)0x0) {
    p_Var1 = local_68 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)local_68 + 0x10))(local_68);
      std::__ndk1::__shared_weak_count::__release_weak(local_68);
    }
  }
  *(undefined1 *)(param_1 + 0xbc) = *(undefined1 *)(param_1 + 0xf4);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00175fb0  FUN_00175fb0 =====

void FUN_00175fb0(undefined8 *param_1,long param_2)

{
  FUN_00175960(param_1,*(undefined1 *)(param_2 + 0x18));
  param_1[0x1c] = param_2;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *param_1 = &PTR_FUN_00208bf8;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  return;
}


// ===== 00175ffc  FUN_00175ffc =====

void FUN_00175ffc(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0xe0;
  FUN_001760a0(auStack_50,lVar1);
  FUN_001760e8(lVar1,param_2);
  uVar3 = FUN_00173340(auStack_50);
  *(undefined4 *)(param_1 + 0x108) = uVar3;
  uVar3 = FUN_00176140(lVar1,param_2);
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  if (*(int *)(*(long *)(param_1 + 0xe0) + 0xb8) != 0) {
    uVar3 = FUN_0017d164(*(long *)(param_1 + 0xe0),param_2,param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x128) = uVar3;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001760a0  FUN_001760a0 =====

void FUN_001760a0(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    FUN_001782d8(param_2 + 1,0);
    return;
  }
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x38) != '\0') {
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    param_1[2] = *(undefined8 *)(lVar1 + 0x30);
    param_1[1] = uVar3;
    *param_1 = uVar2;
    return;
  }
  FUN_00178390(*(undefined8 *)(lVar1 + 0x20),param_3);
  return;
}


// ===== 001760e8  FUN_001760e8 =====

undefined1  [16] FUN_001760e8(long *param_1,undefined4 param_2)

{
  long lVar1;
  float fVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  if ((*(byte *)(param_1 + 1) >> 2 & 1) == 0) {
    lVar1 = *param_1;
    if (*(char *)(lVar1 + 0x48) == '\0') {
      fVar2 = (float)FUN_00178d34(*(undefined8 *)(lVar1 + 0x40),param_2);
    }
    else {
      fVar2 = *(float *)(lVar1 + 0x40);
    }
    return ZEXT416((uint)(fVar2 * DAT_00144b80));
  }
  FUN_00178920(param_1 + 1,2);
  auVar3._4_4_ = extraout_var;
  auVar3._0_4_ = extraout_s0;
  auVar3._8_8_ = extraout_var_00;
  return auVar3;
}


// ===== 00176140  FUN_00176140 =====

undefined1  [16] FUN_00176140(long *param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((*(byte *)(param_1 + 1) >> 3 & 1) != 0) {
    FUN_0017a3ec(param_1 + 1,3);
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_01;
    return auVar2;
  }
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x58) != '\0') {
    return ZEXT416(*(uint *)(lVar1 + 0x50));
  }
  FUN_00178d34(*(undefined8 *)(lVar1 + 0x50),param_2);
  auVar3._4_4_ = extraout_var_00;
  auVar3._0_4_ = extraout_s0_00;
  auVar3._8_8_ = extraout_var_02;
  return auVar3;
}


// ===== 001762d0  FUN_001762d0 =====

float FUN_001762d0(undefined1 param_1 [16],float param_2,undefined8 param_3)

{
  long lVar1;
  float fVar2;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  local_38 = 0x3fb504d53fb504d5;
  local_30._0_4_ = (float)FUN_00190798(param_3,&local_30);
  local_30._4_4_ = param_2;
  fVar2 = (float)FUN_00190798(param_3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    fVar2 = (float)NEON_fmadd(param_2 - local_30._4_4_,param_2 - local_30._4_4_,
                              (fVar2 - (float)local_30) * (fVar2 - (float)local_30));
    return SQRT(fVar2) * 0.5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00176360  FUN_00176360 =====

void FUN_00176360(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_00175960(param_1,*(undefined1 *)(param_2 + 0x18));
  uVar1 = DAT_00146328;
  param_1[0x1c] = param_2;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *param_1 = &PTR_FUN_00208c40;
  *(undefined8 *)((long)param_1 + 0xfc) = uVar1;
  *(undefined4 *)((long)param_1 + 0x11c) = 0;
  return;
}


// ===== 001763b0  FUN_001763b0 =====

void FUN_001763b0(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  if (*(char *)(lVar1 + 0x68) == '\0') {
    fVar4 = (float)FUN_00178d34(*(undefined8 *)(lVar1 + 0x60),param_2);
    lVar1 = *(long *)(param_1 + 0xe0);
  }
  else {
    fVar4 = *(float *)(lVar1 + 0x60);
  }
  *(float *)(param_1 + 0xfc) = (float)((double)fVar4 * DAT_00146338);
  FUN_0017d798(lVar1,param_1 + 0xe8,param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0xe8);
  uVar6 = *(undefined8 *)(lVar1 + 0x48);
  uVar3 = *(undefined8 *)(lVar1 + 0x56);
  uVar8 = *(undefined8 *)(lVar1 + 0x40);
  uVar7 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar2 + 0x5c) = *(undefined8 *)(lVar1 + 0x50);
  *(undefined8 *)(lVar2 + 0x54) = uVar6;
  *(undefined8 *)(lVar2 + 0x62) = uVar3;
  *(undefined8 *)(lVar2 + 0x4c) = uVar8;
  *(undefined8 *)(lVar2 + 0x44) = uVar7;
  lVar1 = *(long *)(param_1 + 0xe0);
  *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(lVar1 + 0xa8);
  *(undefined1 *)(param_1 + 0xf1) = *(undefined1 *)(lVar1 + 0xa9);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(lVar1 + 0xac);
  if (*(char *)(lVar1 + 0xa0) == '\0') {
    uVar5 = FUN_00178d34(*(undefined8 *)(lVar1 + 0x98),param_2);
    lVar1 = *(long *)(param_1 + 0xe0);
  }
  else {
    uVar5 = *(undefined4 *)(lVar1 + 0x98);
  }
  *(undefined4 *)(param_1 + 0x100) = uVar5;
  if (*(int *)(lVar1 + 0x100) != 0) {
    uVar5 = FUN_0017d27c(lVar1,param_2,param_1 + 0x104);
    *(undefined4 *)(param_1 + 0x11c) = uVar5;
  }
  return;
}


// ===== 00176490  FUN_00176490 =====

void FUN_00176490(long param_1)

{
  long lVar1;
  __shared_weak_count *p_Var2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  float fVar10;
  undefined1 auStack_90 [24];
  __shared_weak_count *local_78;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  fVar10 = (float)FUN_001762d0(*(long *)(param_1 + 0xe8) + 0x44);
  lVar1 = param_1 + 0x30;
  *(float *)(*(long *)(param_1 + 0xe8) + 0x28) =
       *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0xfc);
  FUN_0018df18(auStack_90);
  FUN_00173448(lVar1,auStack_90);
  if (local_78 != (__shared_weak_count *)0x0) {
    p_Var2 = local_78 + 8;
    do {
      lVar9 = *(long *)p_Var2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar5) {
        *(long *)p_Var2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)local_78 + 0x10))(local_78);
      std::__ndk1::__shared_weak_count::__release_weak(local_78);
    }
  }
  FUN_0018ea14(*(undefined4 *)(param_1 + 0xf4),*(float *)(param_1 + 0x100) * fVar10,lVar1,
               *(undefined1 *)(param_1 + 0xf0),*(undefined1 *)(param_1 + 0xf1));
  uVar3 = *(uint *)(param_1 + 0x11c);
  uVar7 = (ulong)uVar3;
  if (uVar3 != 0) {
    if (0 < (int)uVar3) {
      pfVar8 = (float *)(param_1 + 0x104);
      do {
        uVar7 = uVar7 - 1;
        *pfVar8 = *pfVar8 * fVar10;
        pfVar8 = pfVar8 + 1;
      } while (uVar7 != 0);
    }
    FUN_0018ea78(lVar1,param_1 + 0x104);
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001765e4  FUN_001765e4 =====

void FUN_001765e4(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  *(undefined1 *)(param_3 + 0x48) = 0;
  if (*(int *)(param_3 + 0x18) != param_4) {
    fVar1 = (float)FUN_00176654(*(undefined8 *)(param_3 + 0x40));
    fVar2 = ABS(*(float *)(param_3 + 0x1c) - fVar1);
    if ((fVar2 < DAT_00144b68 == (NAN(fVar2) || NAN(DAT_00144b68))) ||
       (fVar2 = ABS(*(float *)(param_3 + 0x20) - param_2),
       fVar2 < DAT_00144b68 == (NAN(fVar2) || NAN(DAT_00144b68)))) {
      *(undefined1 *)(param_3 + 0x48) = 1;
      *(float *)(param_3 + 0x1c) = fVar1;
      *(float *)(param_3 + 0x20) = param_2;
    }
    *(int *)(param_3 + 0x18) = param_4;
  }
  return;
}


// ===== 00176654  FUN_00176654 =====

float FUN_00176654(long param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    fVar4 = (float)FUN_00178d34(*(undefined8 *)(param_1 + 0x20),param_2);
  }
  else {
    fVar4 = *(float *)(param_1 + 0x20);
  }
  fVar2 = DAT_00144b80;
  if (*(char *)(param_1 + 0x38) == '\0') {
    fVar1 = (float)FUN_00178d34(*(undefined8 *)(param_1 + 0x30),param_2);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x30);
  }
  fVar4 = fVar4 * fVar2;
  fVar1 = fVar1 * fVar2;
  if (*(char *)(param_1 + 0x48) == '\0') {
    fVar2 = (float)FUN_00178d34(*(undefined8 *)(param_1 + 0x40),param_2);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x40);
  }
  fVar2 = fmodf(fVar2,360.0);
  fVar3 = ABS(fVar4 - fVar1);
  if (fVar3 < DAT_00144b68 != (NAN(fVar3) || NAN(DAT_00144b68))) {
    return 0.0;
  }
  if (ABS(fVar3 + -1.0) < DAT_00144b68 != (NAN(ABS(fVar3 + -1.0)) || NAN(DAT_00144b68))) {
    return 0.0;
  }
  fVar2 = fVar2 * DAT_00144b44;
  fVar4 = fVar2 + fVar4;
  fVar1 = fVar2 + fVar1;
  if (fVar2 == 0.0 || fVar2 < 0.0 != NAN(fVar2)) {
    if ((fVar4 < 0.0 != NAN(fVar4)) || (fVar1 < 0.0 != NAN(fVar1))) {
      if ((fVar4 < 0.0 == NAN(fVar4)) || (fVar1 < 0.0 == NAN(fVar1))) {
        if (fVar4 < 0.0 == NAN(fVar4)) {
          fVar1 = fVar1 + 1.0;
        }
        else {
          fVar4 = fVar4 + 1.0;
        }
        goto LAB_001767d8;
      }
      fVar4 = fVar4 + 1.0;
      fVar1 = fVar1 + 1.0;
    }
  }
  else if ((fVar4 != 1.0 && fVar4 < 1.0 == NAN(fVar4)) ||
          (fVar1 != 1.0 && fVar1 < 1.0 == NAN(fVar1))) {
    if ((fVar4 == 1.0 || fVar4 < 1.0 != NAN(fVar4)) || (fVar1 == 1.0 || fVar1 < 1.0 != NAN(fVar1)))
    {
      if (fVar4 == 1.0 || fVar4 < 1.0 != NAN(fVar4)) {
        fVar1 = fVar1 + -1.0;
      }
      else {
        fVar4 = fVar4 + -1.0;
      }
LAB_001767d8:
      fVar2 = fVar4;
      if (fVar4 <= fVar1) {
        fVar2 = fVar1;
      }
      NEON_fminnm(fVar1,fVar4);
      return fVar2;
    }
    fVar4 = fVar4 + -1.0;
    fVar1 = fVar1 + -1.0;
  }
  fVar4 = (float)NEON_fminnm(fVar1,fVar4);
  return fVar4;
}


// ===== 001767f4  FUN_001767f4 =====

void FUN_001767f4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00174b7c(param_1,0);
  param_1[0xc] = param_2;
  *param_1 = &PTR_LAB_00208cc0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  fVar6 = *(float *)(param_2 + 0xb0);
  *(int *)((long)param_1 + 0x6c) = (int)fVar6;
  if (0 < (int)fVar6) {
    iVar5 = 1;
    while( true ) {
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      plVar3 = (long *)operator_new(0x60);
      FUN_00174b7c(plVar3,uVar4);
      plVar3[2] = (long)param_1;
      puVar1 = (undefined8 *)param_1[5];
      if (puVar1 < (undefined8 *)param_1[6]) {
        local_50 = (long *)0x0;
        *puVar1 = plVar3;
        param_1[5] = puVar1 + 1;
      }
      else {
        local_50 = plVar3;
        FUN_00179e10(param_1 + 4,&local_50);
      }
      plVar3 = local_50;
      local_50 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (*(int *)((long)param_1 + 0x6c) <= iVar5) break;
      param_2 = param_1[0xc];
      iVar5 = iVar5 + 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00176aec  FUN_00176aec =====

void FUN_00176aec(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    for (puVar2 = *(undefined8 **)(param_1 + 0x20); puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,param_2);
    }
  }
  return;
}


// ===== 00176b40  FUN_00176b40 =====

void FUN_00176b40(long param_1,long param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  
  puVar6 = *(undefined4 **)(param_2 + 0x10);
  puVar5 = *(undefined4 **)(param_2 + 0x18);
  uVar3 = (long)puVar5 - (long)puVar6;
  if ((ulong)*(uint *)(param_1 + 0x60) != (long)uVar3 >> 3) {
    if (*(uint *)(param_1 + 0x60) != 0) {
      free(*(void **)(param_1 + 0x58));
      puVar6 = *(undefined4 **)(param_2 + 0x10);
      puVar5 = *(undefined4 **)(param_2 + 0x18);
      uVar3 = (long)puVar5 - (long)puVar6;
    }
    *(int *)(param_1 + 0x60) = (int)(uVar3 >> 3);
    pvVar2 = malloc(uVar3 & 0x7fffffff8);
    *(void **)(param_1 + 0x58) = pvVar2;
  }
  if (puVar6 != puVar5) {
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    fVar7 = *(float *)(param_2 + 0x28);
    do {
      *puVar4 = *puVar6;
      fVar8 = (float)NEON_ucvtf((uint)*(byte *)(puVar6 + 1));
      *(char *)((long)puVar4 + 7) = (char)(int)(fVar7 * fVar8);
      *(undefined1 *)(puVar4 + 1) = *(undefined1 *)((long)puVar6 + 5);
      *(undefined1 *)((long)puVar4 + 5) = *(undefined1 *)((long)puVar6 + 6);
      puVar1 = (undefined1 *)((long)puVar6 + 7);
      puVar6 = puVar6 + 2;
      *(undefined1 *)((long)puVar4 + 6) = *puVar1;
      puVar4 = puVar4 + 2;
    } while (puVar6 != puVar5);
  }
  return;
}


// ===== 00176c10  FUN_00176c10 =====

void FUN_00176c10(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00208838;
  FUN_0017978c(param_1 + 0x1a,0);
  FUN_001789c8(param_1 + 0x17);
  pvVar1 = (void *)param_1[0x14];
  if (pvVar1 != (void *)0x0) {
    param_1[0x15] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_00176dc0(param_1);
  return;
}


// ===== 00176c5c  FUN_00176c5c =====

void FUN_00176c5c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00208838;
  FUN_0017978c(param_1 + 0x1a,0);
  FUN_001789c8(param_1 + 0x17);
  pvVar1 = (void *)param_1[0x14];
  if (pvVar1 != (void *)0x0) {
    param_1[0x15] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_00176dc0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00176cb0  FUN_00176cb0 =====

void FUN_00176cb0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00208888;
  FUN_00178a40(param_1 + 0x17);
  pvVar1 = (void *)param_1[0x14];
  if (pvVar1 != (void *)0x0) {
    param_1[0x15] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_00176dc0(param_1);
  return;
}


// ===== 00176cf0  FUN_00176cf0 =====

void FUN_00176cf0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00208888;
  FUN_00178a40(param_1 + 0x17);
  pvVar1 = (void *)param_1[0x14];
  if (pvVar1 != (void *)0x0) {
    param_1[0x15] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_00176dc0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00176d38  FUN_00176d38 =====

void FUN_00176d38(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_002088d8;
  FUN_00178a40(param_1 + 0x17);
  pvVar1 = (void *)param_1[0x14];
  if (pvVar1 != (void *)0x0) {
    param_1[0x15] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_00176dc0(param_1);
  return;
}


// ===== 00176d78  FUN_00176d78 =====

void FUN_00176d78(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_002088d8;
  FUN_00178a40(param_1 + 0x17);
  pvVar1 = (void *)param_1[0x14];
  if (pvVar1 != (void *)0x0) {
    param_1[0x15] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_00176dc0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00176dc0  FUN_00176dc0 =====

void FUN_00176dc0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_002087e8;
  FUN_00177820(param_1 + 0x10);
  FUN_001796c8(param_1 + 8,0);
  pvVar1 = (void *)param_1[5];
  if (pvVar1 != (void *)0x0) {
    param_1[6] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  param_1[4] = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00176e30  FUN_00176e30 =====

void FUN_00176e30(void *param_1)

{
  FUN_00176dc0();
  operator_delete(param_1);
  return;
}


// ===== 00176e54  FUN_00176e54 =====

void FUN_00176e54(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  
  plVar1 = (long *)param_1[0x17];
  *param_1 = &PTR_FUN_00208978;
  param_1[0x17] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pvVar2 = (void *)param_1[0x14];
  if (pvVar2 != (void *)0x0) {
    param_1[0x15] = pvVar2;
    operator_delete(pvVar2);
  }
  FUN_00176dc0(param_1);
  return;
}


// ===== 00176ea8  FUN_00176ea8 =====

void FUN_00176ea8(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  
  plVar1 = (long *)param_1[0x17];
  *param_1 = &PTR_FUN_00208978;
  param_1[0x17] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pvVar2 = (void *)param_1[0x14];
  if (pvVar2 != (void *)0x0) {
    param_1[0x15] = pvVar2;
    operator_delete(pvVar2);
  }
  FUN_00176dc0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00176f04  FUN_00176f04 =====

void FUN_00176f04(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_002089c8;
  FUN_00178b10(param_1 + 4);
  operator_delete(param_1);
  return;
}


// ===== 00176f34  FUN_00176f34 =====

void FUN_00176f34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00208cf8;
  FUN_00177938(param_1 + 5);
  FUN_00177938(param_1 + 4);
  FUN_00177938(param_1 + 3);
  operator_delete(param_1);
  return;
}


// ===== 00176f7c  FUN_00176f7c =====

undefined8 FUN_00176f7c(long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00178b88(*(long *)(param_1 + 0x38) + 0x20);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = FUN_00178b88(*(long *)(param_1 + 0x38) + 0x30,param_2,param_3), (uVar1 & 1) == 0)) {
    uVar2 = FUN_00178be0(*(long *)(param_1 + 0x38) + 0x40,param_2,param_3);
    return uVar2;
  }
  return 1;
}


// ===== 00176ff4  FUN_00176ff4 =====

void FUN_00176ff4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00208cf8;
  FUN_00177938(param_1 + 5);
  FUN_00177938(param_1 + 4);
  FUN_00177938(param_1 + 3);
  operator_delete(param_1);
  return;
}


// ===== 0017703c  FUN_0017703c =====

undefined8 FUN_0017703c(long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00178b88(*(long *)(param_1 + 0x38) + 0x20);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = FUN_00178b88(*(long *)(param_1 + 0x38) + 0x30,param_2,param_3);
  return uVar2;
}


// ===== 0017709c  FUN_0017709c =====

void FUN_0017709c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00208cf8;
  FUN_00177938(param_1 + 5);
  FUN_00177938(param_1 + 4);
  FUN_00177938(param_1 + 3);
  operator_delete(param_1);
  return;
}


// ===== 001770f0  FUN_001770f0 =====

void FUN_001770f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00208cf8;
  FUN_00177938(param_1 + 5);
  FUN_00177938(param_1 + 4);
  FUN_00177938(param_1 + 3);
  return;
}


// ===== 00177130  FUN_00177130 =====

void FUN_00177130(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00208cf8;
  FUN_00177938(param_1 + 5);
  FUN_00177938(param_1 + 4);
  FUN_00177938(param_1 + 3);
  operator_delete(param_1);
  return;
}


// ===== 00177178  FUN_00177178 =====

undefined8 FUN_00177178(long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00178b88(*(long *)(param_1 + 0x38) + 0x28);
  if (((((uVar1 & 1) == 0) &&
       (uVar1 = FUN_00178be0(*(long *)(param_1 + 0x38) + 0x38,param_2,param_3), (uVar1 & 1) == 0))
      && (uVar1 = FUN_00178be0(*(long *)(param_1 + 0x38) + 0x48,param_2,param_3), (uVar1 & 1) == 0))
     && (((uVar1 = FUN_00178be0(*(long *)(param_1 + 0x38) + 0x58,param_2,param_3), (uVar1 & 1) == 0
          && (uVar1 = FUN_00178be0(*(long *)(param_1 + 0x38) + 0x68,param_2,param_3),
             (uVar1 & 1) == 0)) &&
         (uVar1 = FUN_00178be0(*(long *)(param_1 + 0x38) + 0x78,param_2,param_3), (uVar1 & 1) == 0))
        )) {
    uVar2 = FUN_00178be0(*(long *)(param_1 + 0x38) + 0x88,param_2,param_3);
    return uVar2;
  }
  return 1;
}


// ===== 00177250  FUN_00177250 =====

void FUN_00177250(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00208b20;
  FUN_00177938(param_1 + 0x19);
  FUN_00178a40(param_1 + 6);
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 001772a0  FUN_001772a0 =====

void FUN_001772a0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00208b68;
  FUN_00178c90(param_1 + 0x1e);
  *param_1 = &PTR_FUN_00208b20;
  FUN_00177938(param_1 + 0x19);
  FUN_00178a40(param_1 + 6);
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00177300  FUN_00177300 =====

void FUN_00177300(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00208b68;
  FUN_00178c90(param_1 + 0x1e);
  *param_1 = &PTR_FUN_00208b20;
  FUN_00177938(param_1 + 0x19);
  FUN_00178a40(param_1 + 6);
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 0017735c  FUN_0017735c =====

void FUN_0017735c(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_00208bb0;
  lVar2 = param_1[0x1d];
  param_1[0x1d] = 0;
  if (lVar2 != 0) {
    FUN_00178cfc();
  }
  *param_1 = &PTR_FUN_00208b20;
  FUN_00177938(param_1 + 0x19);
  FUN_00178a40(param_1 + 6);
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 001773c8  FUN_001773c8 =====

void FUN_001773c8(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_00208bb0;
  lVar2 = param_1[0x1d];
  param_1[0x1d] = 0;
  if (lVar2 != 0) {
    FUN_00178cfc();
  }
  *param_1 = &PTR_FUN_00208b20;
  FUN_00177938(param_1 + 0x19);
  FUN_00178a40(param_1 + 6);
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00177430  FUN_00177430 =====

void FUN_00177430(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00208bf8;
  FUN_00178c90(param_1 + 0x1e);
  *param_1 = &PTR_FUN_00208b20;
  FUN_00177938(param_1 + 0x19);
  FUN_00178a40(param_1 + 6);
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00177490  FUN_00177490 =====

void FUN_00177490(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00208bf8;
  FUN_00178c90(param_1 + 0x1e);
  *param_1 = &PTR_FUN_00208b20;
  FUN_00177938(param_1 + 0x19);
  FUN_00178a40(param_1 + 6);
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 001774ec  FUN_001774ec =====

void FUN_001774ec(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_00208c40;
  lVar2 = param_1[0x1d];
  param_1[0x1d] = 0;
  if (lVar2 != 0) {
    FUN_00178cfc();
  }
  *param_1 = &PTR_FUN_00208b20;
  FUN_00177938(param_1 + 0x19);
  FUN_00178a40(param_1 + 6);
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00177558  FUN_00177558 =====

void FUN_00177558(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_00208c40;
  lVar2 = param_1[0x1d];
  param_1[0x1d] = 0;
  if (lVar2 != 0) {
    FUN_00178cfc();
  }
  *param_1 = &PTR_FUN_00208b20;
  FUN_00177938(param_1 + 0x19);
  FUN_00178a40(param_1 + 6);
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 001775e4  FUN_001775e4 =====

void FUN_001775e4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[5];
  *param_1 = &PTR_LAB_00208c88;
  if (pvVar1 != (void *)0x0) {
    param_1[6] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00177630  FUN_00177630 =====

void FUN_00177630(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_002089c8;
  FUN_00178b10(param_1 + 4);
  operator_delete(param_1);
  return;
}


// ===== 00177660  FUN_00177660 =====

void FUN_00177660(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00177698();
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00177698  FUN_00177698 =====

void FUN_00177698(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar1 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  while (pbVar2 = pbVar3, pbVar2 != pbVar1) {
    pbVar3 = pbVar2 + -0x18;
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar2 + -8));
    }
  }
  param_1[1] = (long)pbVar1;
  return;
}


// ===== 001776ec  FUN_001776ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001776ec(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if ((DAT_00214c28 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_00214c28);
    if (iVar3 != 0) {
      DAT_00214be8 = 1;
      uRam0000000000214bf8 = 0;
      _DAT_00214bf0 = 0;
      uRam0000000000214c08 = 0;
      _DAT_00214c00 = 0;
      uRam0000000000214c18 = 0;
      _DAT_00214c10 = 0;
      DAT_00214c20 = 1;
      __cxa_atexit(&LAB_001777ac,&DAT_00214be8,&PTR_LOOP_002086b0);
      __cxa_guard_release(&DAT_00214c28);
    }
  }
  *param_1 = &DAT_00214be8;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x214be8,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00214be8 = DAT_00214be8 + 1;
    }
  } while (cVar1 != '\0');
  return;
}


// ===== 001777c4  FUN_001777c4 =====

void FUN_001777c4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar5 + -1 == 0) && (pvVar6 = (void *)*param_1, pvVar6 != (void *)0x0)) {
      pvVar3 = *(void **)((long)pvVar6 + 8);
      if (pvVar3 != (void *)0x0) {
        *(void **)((long)pvVar6 + 0x10) = pvVar3;
        operator_delete(pvVar3);
      }
      operator_delete(pvVar6);
      return;
    }
  }
  return;
}


// ===== 00177820  FUN_00177820 =====

void FUN_00177820(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 8);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 00177878  FUN_00177878 =====

long FUN_00177878(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)*param_1 != 1) {
    lVar3 = *param_1;
    puVar2 = (undefined8 *)operator_new(0x50);
    *puVar2 = 1;
    FUN_001779a4(puVar2 + 1,lVar3 + 8);
    FUN_00177a10(puVar2 + 4,lVar3 + 0x20);
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
    *(undefined2 *)(puVar2 + 9) = *(undefined2 *)(lVar3 + 0x48);
    puVar2[8] = uVar5;
    puVar2[7] = uVar4;
    lStack_40 = *param_1;
    *param_1 = (long)puVar2;
    local_48 = 0;
    FUN_00177938(&lStack_40);
    FUN_00177938(&local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return *param_1 + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00177938  FUN_00177938 =====

void FUN_00177938(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar5 + -1 == 0) && (pvVar6 = (void *)*param_1, pvVar6 != (void *)0x0)) {
      pvVar3 = *(void **)((long)pvVar6 + 0x20);
      if (pvVar3 != (void *)0x0) {
        *(void **)((long)pvVar6 + 0x28) = pvVar3;
        operator_delete(pvVar3);
      }
      pvVar3 = *(void **)((long)pvVar6 + 8);
      if (pvVar3 != (void *)0x0) {
        *(void **)((long)pvVar6 + 0x10) = pvVar3;
        operator_delete(pvVar3);
      }
      operator_delete(pvVar6);
      return;
    }
  }
  return;
}


// ===== 001779a4  FUN_001779a4 =====

void FUN_001779a4(undefined8 *param_1,long *param_2)

{
  void *__dest;
  size_t __n;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    FUN_00177a78(param_1,param_2[1] - *param_2 >> 3);
    __dest = (void *)param_1[1];
    __n = param_2[1] - *param_2;
    if (0 < (long)__n) {
      memcpy(__dest,(void *)*param_2,__n);
      __dest = (void *)((long)__dest + __n);
    }
    param_1[1] = __dest;
  }
  return;
}


// ===== 00177a10  FUN_00177a10 =====

void FUN_00177a10(undefined8 *param_1,long *param_2)

{
  void *__dest;
  size_t __n;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    FUN_00177abc(param_1,param_2[1] - *param_2);
    __dest = (void *)param_1[1];
    __n = param_2[1] - *param_2;
    if (0 < (long)__n) {
      memcpy(__dest,(void *)*param_2,__n);
      __dest = (void *)((long)__dest + __n);
    }
    param_1[1] = __dest;
  }
  return;
}


// ===== 00177a78  FUN_00177a78 =====

void FUN_00177a78(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  if (param_2 >> 0x3d == 0) {
    pvVar1 = operator_new(param_2 << 3);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + param_2 * 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


// ===== 00177abc  FUN_00177abc =====

void FUN_00177abc(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  if (-1 < (long)param_2) {
    pvVar1 = operator_new(param_2);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (long)pvVar1 + param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


// ===== 00177afc  FUN_00177afc =====

void FUN_00177afc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00177b40  FUN_00177b40 =====

void FUN_00177b40(undefined8 *param_1,void *param_2,void *param_3)

{
  ulong uVar1;
  void *__src;
  long lVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
  lVar2 = param_1[2];
  pvVar4 = (void *)*param_1;
  sVar3 = (long)param_3 - (long)param_2;
  uVar5 = (long)sVar3 >> 3;
  if ((ulong)(lVar2 - (long)pvVar4 >> 3) < uVar5) {
    if (pvVar4 != (void *)0x0) {
      param_1[1] = pvVar4;
      operator_delete(pvVar4);
      lVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar5 <= (ulong)(lVar2 >> 2)) {
      uVar5 = lVar2 >> 2;
    }
    if (0xffffffffffffffe < (ulong)(lVar2 >> 3)) {
      uVar5 = 0x1fffffffffffffff;
    }
    FUN_00177a78(param_1,uVar5);
    pvVar4 = (void *)param_1[1];
    if (0 < (long)sVar3) {
      memcpy(pvVar4,param_2,sVar3);
      pvVar4 = (void *)((long)pvVar4 + sVar3);
    }
    param_1[1] = pvVar4;
  }
  else {
    uVar1 = param_1[1] - (long)pvVar4 >> 3;
    __src = (void *)((long)param_2 + (param_1[1] - (long)pvVar4));
    if (uVar5 <= uVar1) {
      __src = param_3;
    }
    sVar3 = (long)__src - (long)param_2;
    if (sVar3 != 0) {
      memmove(pvVar4,param_2,sVar3);
    }
    if (uVar1 < uVar5) {
      pvVar4 = (void *)param_1[1];
      sVar3 = (long)param_3 - (long)__src;
      if (0 < (long)sVar3) {
        memcpy(pvVar4,__src,sVar3);
        pvVar4 = (void *)((long)pvVar4 + sVar3);
      }
      param_1[1] = pvVar4;
    }
    else {
      param_1[1] = (long)pvVar4 + sVar3;
    }
  }
  return;
}


// ===== 00177c7c  FUN_00177c7c =====

void FUN_00177c7c(undefined8 *param_1,void *param_2,void *param_3)

{
  ulong uVar1;
  void *__src;
  ulong uVar2;
  long lVar3;
  ulong __n;
  size_t sVar4;
  void *pvVar5;
  
  uVar2 = param_1[2];
  pvVar5 = (void *)*param_1;
  __n = (long)param_3 - (long)param_2;
  if (uVar2 - (long)pvVar5 < __n) {
    if (pvVar5 != (void *)0x0) {
      param_1[1] = pvVar5;
      operator_delete(pvVar5);
      uVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar1 = __n;
    if (__n <= uVar2 << 1) {
      uVar1 = uVar2 << 1;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar1 = 0x7fffffffffffffff;
    }
    FUN_00177abc(param_1,uVar1);
    pvVar5 = (void *)param_1[1];
    memcpy(pvVar5,param_2,__n);
    lVar3 = (long)pvVar5 + __n;
  }
  else {
    uVar2 = param_1[1] - (long)pvVar5;
    __src = (void *)((long)param_2 + uVar2);
    if (__n <= uVar2) {
      __src = param_3;
    }
    sVar4 = (long)__src - (long)param_2;
    if (sVar4 != 0) {
      memmove(pvVar5,param_2,sVar4);
    }
    if (uVar2 < __n) {
      pvVar5 = (void *)param_1[1];
      sVar4 = (long)param_3 - (long)__src;
      if (0 < (long)sVar4) {
        memcpy(pvVar5,__src,sVar4);
        pvVar5 = (void *)((long)pvVar5 + sVar4);
      }
      param_1[1] = pvVar5;
      return;
    }
    lVar3 = (long)pvVar5 + sVar4;
  }
  param_1[1] = lVar3;
  return;
}


// ===== 00177da0  FUN_00177da0 =====

long FUN_00177da0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)*param_1 != 1) {
    lVar3 = *param_1;
    puVar2 = (undefined8 *)operator_new(0x40);
    *puVar2 = 1;
    FUN_00177e54(puVar2 + 1,lVar3 + 8);
    uVar4 = *(undefined8 *)(lVar3 + 0x29);
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
    *(undefined8 *)((long)puVar2 + 0x29) = uVar4;
    puVar2[5] = uVar6;
    puVar2[4] = uVar5;
    lStack_40 = *param_1;
    *param_1 = (long)puVar2;
    local_48 = 0;
    FUN_001777c4(&lStack_40);
    FUN_001777c4(&local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return *param_1 + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00177e54  FUN_00177e54 =====

void FUN_00177e54(undefined8 *param_1,long *param_2)

{
  void *__dest;
  size_t __n;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    FUN_00177ec0(param_1,param_2[1] - *param_2 >> 3);
    __dest = (void *)param_1[1];
    __n = param_2[1] - *param_2;
    if (0 < (long)__n) {
      memcpy(__dest,(void *)*param_2,__n);
      __dest = (void *)((long)__dest + __n);
    }
    param_1[1] = __dest;
  }
  return;
}


// ===== 00177ec0  FUN_00177ec0 =====

void FUN_00177ec0(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  if (param_2 >> 0x3d == 0) {
    pvVar1 = operator_new(param_2 << 3);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + param_2 * 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


// ===== 00177f04  FUN_00177f04 =====

undefined8 * FUN_00177f04(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)*param_2;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_30 = *param_1;
  *param_1 = plVar4;
  local_38 = 0;
  FUN_001777c4(&uStack_30);
  FUN_001777c4(&local_38);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00177f84  FUN_00177f84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00177f84(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if ((DAT_00214c80 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_00214c80);
    if (iVar3 != 0) {
      DAT_00214c70 = 0;
      DAT_00214c6c = 0;
      DAT_00214c30 = 1;
      uRam0000000000214c40 = 0;
      _DAT_00214c38 = 0;
      uRam0000000000214c50 = 0;
      _DAT_00214c48 = 0;
      uRam0000000000214c60 = 0;
      _DAT_00214c58 = 0;
      DAT_00214c78 = 1;
      __cxa_atexit(FUN_00177afc,&DAT_00214c30,&PTR_LOOP_002086b0);
      __cxa_guard_release(&DAT_00214c80);
    }
  }
  *param_1 = &DAT_00214c30;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x214c30,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_00214c30 = DAT_00214c30 + 1;
    }
  } while (cVar1 != '\0');
  return;
}


// ===== 0017804c  FUN_0017804c =====

undefined8 * FUN_0017804c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)*param_2;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_30 = *param_1;
  *param_1 = plVar4;
  local_38 = 0;
  FUN_00177938(&uStack_30);
  FUN_00177938(&local_38);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001780cc  FUN_001780cc =====

void FUN_001780cc(undefined8 *param_1,undefined8 *param_2)

{
  switch(*(undefined4 *)((long)param_2 + 4)) {
  case 1:
    FUN_001703ac(param_1 + 2,param_2 + 2);
    break;
  case 2:
    FUN_00170344(param_1 + 2,param_2 + 2);
    break;
  case 3:
    FUN_0017047c(param_1 + 2,param_2 + 2);
    break;
  case 4:
    FUN_00170414(param_1 + 2,param_2 + 2);
  }
  *param_1 = *param_2;
  return;
}


// ===== 00178158  FUN_00178158 =====

void FUN_00178158(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 == lVar3) {
    lVar1 = param_2[1];
  }
  else {
    lVar1 = param_2[1];
    do {
      lVar2 = lVar2 + -0x40;
      *(undefined4 *)(lVar1 + -0x3c) = 0;
      FUN_00178244(lVar1 + -0x40,lVar2);
      lVar1 = param_2[1] + -0x40;
      param_2[1] = lVar1;
    } while (lVar3 != lVar2);
    lVar3 = *param_1;
  }
  *param_1 = lVar1;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}


// ===== 001781f4  FUN_001781f4 =====

void FUN_001781f4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x40;
    FUN_001702e4();
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00178244  FUN_00178244 =====

void FUN_00178244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  switch(*(undefined4 *)((long)param_2 + 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
    puVar1 = (undefined8 *)param_2[6];
    if (puVar1 == (undefined8 *)0x0) {
      param_1[6] = 0;
    }
    else if (param_2 + 2 == puVar1) {
      param_1[6] = param_1 + 2;
      (**(code **)(*(long *)param_2[6] + 0x18))();
    }
    else {
      param_1[6] = puVar1;
      param_2[6] = 0;
    }
  }
  *param_1 = *param_2;
  *(undefined4 *)((long)param_2 + 4) = 0;
  return;
}


// ===== 001782d8  FUN_001782d8 =====

void FUN_001782d8(undefined8 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
                 long param_5,int param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 local_30 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  piVar5 = *(int **)(param_5 + 8);
  piVar1 = *(int **)(param_5 + 0x10);
  piVar6 = piVar5;
  if (piVar5 != piVar1) {
    iVar2 = *piVar5;
    while ((piVar6 = piVar5, iVar2 != param_6 &&
           (piVar5 = piVar5 + 0x10, piVar6 = piVar1, piVar1 != piVar5))) {
      iVar2 = *piVar5;
    }
  }
  plVar4 = *(long **)(piVar6 + 0xc);
  local_30[0] = param_7;
  if (plVar4 == (long *)0x0) {
    FUN_00178384();
  }
  else {
    uVar7 = (**(code **)(*plVar4 + 0x30))(plVar4,local_30);
    *(undefined4 *)(param_1 + 1) = uVar7;
    *(undefined4 *)((long)param_1 + 0xc) = param_3;
    *(undefined4 *)(param_1 + 2) = param_4;
    *param_1 = 0;
    if (*(long *)(lVar3 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00178384  FUN_00178384 =====

void FUN_00178384(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00178390  FUN_00178390 =====

void FUN_00178390(undefined8 *param_1,long *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  long *plVar4;
  float *pfVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  long local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined8 local_50;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  pfVar3 = (float *)*param_2;
  pfVar5 = (float *)param_2[1];
  if (pfVar3 == pfVar5) {
LAB_001783e4:
    uVar9 = NEON_fmov(0x3f800000,4);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = uVar9;
    *(undefined4 *)(param_1 + 2) = 0x3f800000;
    return;
  }
  fVar8 = (float)param_3;
  if (*pfVar3 < fVar8 == (NAN(*pfVar3) || NAN(fVar8))) {
    uVar10 = *(undefined8 *)(pfVar3 + 8);
    uVar9 = *(undefined8 *)(pfVar3 + 6);
    param_1[2] = *(undefined8 *)(pfVar3 + 10);
  }
  else {
    fVar11 = pfVar5[-0x11];
    if (fVar11 != fVar8 && fVar11 < fVar8 == (NAN(fVar11) || NAN(fVar8))) {
      do {
        fVar11 = *pfVar3;
        if ((fVar11 == fVar8 || fVar11 < fVar8 != (NAN(fVar11) || NAN(fVar8))) &&
           (fVar11 = pfVar3[1], fVar11 != fVar8 && fVar11 < fVar8 == (NAN(fVar11) || NAN(fVar8)))) {
          if (*(long *)(pfVar3 + 2) == 0) {
            local_40 = 0.0;
          }
          else {
            local_40 = (float)FUN_0018f1ac(((float)param_3 - *pfVar3) / (pfVar3[1] - *pfVar3));
          }
          lVar2 = tpidr_el0;
          local_38 = *(long *)(lVar2 + 0x28);
          FUN_00178778(&local_68,pfVar3 + 0xc,pfVar3 + 6);
          if ((local_68 != 0) && (*(long *)(local_68 + 0x10) != 0)) {
            plVar4 = (long *)(local_68 + 8);
            plVar6 = (long *)*plVar4;
            if (plVar6 != (long *)0x0) {
              uVar1 = (int)(local_60 * 255.0) & 0xffU | ((int)(fStack_5c * 255.0) & 0xffU) << 8 |
                      ((int)(local_58 * 255.0) & 0xffU) << 0x10;
              plVar7 = plVar4;
              do {
                if ((int)uVar1 <= *(int *)((long)plVar6 + 0x1c)) {
                  plVar7 = plVar6;
                }
                plVar6 = (long *)plVar6[*(int *)((long)plVar6 + 0x1c) < (int)uVar1];
              } while (plVar6 != (long *)0x0);
              if ((plVar7 != plVar4) && (*(int *)((long)plVar7 + 0x1c) <= (int)uVar1)) {
                uVar1 = *(uint *)(plVar7 + 4);
                uVar9 = NEON_scvtf(CONCAT44(uVar1 >> 8,uVar1) & 0xff000000ff,4);
                local_60 = (float)uVar9 * 0.003921569;
                fStack_5c = (float)((ulong)uVar9 >> 0x20) * 0.003921569;
                local_58 = (float)(uVar1 >> 0x10 & 0xff) * DAT_00144b04;
              }
            }
          }
          local_48 = CONCAT44(fStack_5c * local_40,local_60 * local_40);
          local_40 = local_58 * local_40;
          local_50 = 0;
          FUN_001785d0(param_1,pfVar3 + 6,&local_50);
          if (*(long *)(lVar2 + 0x28) == local_38) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        pfVar3 = pfVar3 + 0x12;
      } while (pfVar5 != pfVar3);
      goto LAB_001783e4;
    }
    uVar10 = *(undefined8 *)(pfVar5 + -4);
    uVar9 = *(undefined8 *)(pfVar5 + -6);
    param_1[2] = *(undefined8 *)(pfVar5 + -2);
  }
  param_1[1] = uVar10;
  *param_1 = uVar9;
  return;
}


// ===== 001785d0  FUN_001785d0 =====

void FUN_001785d0(undefined8 *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  lVar2 = *param_2;
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) {
LAB_0017864c:
    lVar2 = param_2[1];
    fVar7 = *(float *)(param_2 + 2);
  }
  else {
    plVar3 = (long *)(lVar2 + 8);
    plVar5 = (long *)*plVar3;
    if (plVar5 == (long *)0x0) goto LAB_0017864c;
    uVar1 = (int)(*(float *)(param_2 + 1) * 255.0) & 0xffU |
            ((int)(*(float *)((long)param_2 + 0xc) * 255.0) & 0xffU) << 8 |
            ((int)(*(float *)(param_2 + 2) * 255.0) & 0xffU) << 0x10;
    plVar6 = plVar3;
    do {
      if ((int)uVar1 <= *(int *)((long)plVar5 + 0x1c)) {
        plVar6 = plVar5;
      }
      plVar5 = (long *)plVar5[*(int *)((long)plVar5 + 0x1c) < (int)uVar1];
    } while (plVar5 != (long *)0x0);
    if ((plVar6 == plVar3) || ((int)uVar1 < *(int *)((long)plVar6 + 0x1c))) goto LAB_0017864c;
    uVar1 = *(uint *)(plVar6 + 4);
    uVar9 = NEON_scvtf(CONCAT44(uVar1 >> 8,uVar1) & 0xff000000ff,4);
    lVar2 = CONCAT44((float)((ulong)uVar9 >> 0x20) * 0.003921569,(float)uVar9 * 0.003921569);
    fVar7 = (float)(uVar1 >> 0x10 & 0xff) * DAT_00144b04;
  }
  lVar4 = *param_3;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar3 = (long *)(lVar4 + 8);
    plVar5 = (long *)*plVar3;
    if (plVar5 != (long *)0x0) {
      uVar1 = (int)(*(float *)(param_3 + 1) * 255.0) & 0xffU |
              ((int)(*(float *)((long)param_3 + 0xc) * 255.0) & 0xffU) << 8 |
              ((int)(*(float *)(param_3 + 2) * 255.0) & 0xffU) << 0x10;
      plVar6 = plVar3;
      do {
        if ((int)uVar1 <= *(int *)((long)plVar5 + 0x1c)) {
          plVar6 = plVar5;
        }
        plVar5 = (long *)plVar5[*(int *)((long)plVar5 + 0x1c) < (int)uVar1];
      } while (plVar5 != (long *)0x0);
      if ((plVar6 != plVar3) && (*(int *)((long)plVar6 + 0x1c) <= (int)uVar1)) {
        uVar1 = *(uint *)(plVar6 + 4);
        uVar9 = NEON_scvtf(CONCAT44(uVar1 >> 8,uVar1) & 0xff000000ff,4);
        lVar4 = CONCAT44((float)((ulong)uVar9 >> 0x20) * 0.003921569,(float)uVar9 * 0.003921569);
        fVar8 = (float)(uVar1 >> 0x10 & 0xff) * DAT_00144b04;
        goto LAB_001786d8;
      }
    }
  }
  lVar4 = param_3[1];
  fVar8 = *(float *)(param_3 + 2);
LAB_001786d8:
  param_1[1] = CONCAT44((float)((ulong)lVar4 >> 0x20) + (float)((ulong)lVar2 >> 0x20),
                        (float)lVar4 + (float)lVar2);
  *(float *)(param_1 + 2) = fVar8 + fVar7;
  *param_1 = 0;
  return;
}


// ===== 00178778  FUN_00178778 =====

void FUN_00178778(undefined8 *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  lVar2 = *param_2;
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) {
LAB_001787f4:
    lVar2 = param_2[1];
    fVar7 = *(float *)(param_2 + 2);
  }
  else {
    plVar3 = (long *)(lVar2 + 8);
    plVar5 = (long *)*plVar3;
    if (plVar5 == (long *)0x0) goto LAB_001787f4;
    uVar1 = (int)(*(float *)(param_2 + 1) * 255.0) & 0xffU |
            ((int)(*(float *)((long)param_2 + 0xc) * 255.0) & 0xffU) << 8 |
            ((int)(*(float *)(param_2 + 2) * 255.0) & 0xffU) << 0x10;
    plVar6 = plVar3;
    do {
      if ((int)uVar1 <= *(int *)((long)plVar5 + 0x1c)) {
        plVar6 = plVar5;
      }
      plVar5 = (long *)plVar5[*(int *)((long)plVar5 + 0x1c) < (int)uVar1];
    } while (plVar5 != (long *)0x0);
    if ((plVar6 == plVar3) || ((int)uVar1 < *(int *)((long)plVar6 + 0x1c))) goto LAB_001787f4;
    uVar1 = *(uint *)(plVar6 + 4);
    uVar9 = NEON_scvtf(CONCAT44(uVar1 >> 8,uVar1) & 0xff000000ff,4);
    lVar2 = CONCAT44((float)((ulong)uVar9 >> 0x20) * 0.003921569,(float)uVar9 * 0.003921569);
    fVar7 = (float)(uVar1 >> 0x10 & 0xff) * DAT_00144b04;
  }
  lVar4 = *param_3;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar3 = (long *)(lVar4 + 8);
    plVar5 = (long *)*plVar3;
    if (plVar5 != (long *)0x0) {
      uVar1 = (int)(*(float *)(param_3 + 1) * 255.0) & 0xffU |
              ((int)(*(float *)((long)param_3 + 0xc) * 255.0) & 0xffU) << 8 |
              ((int)(*(float *)(param_3 + 2) * 255.0) & 0xffU) << 0x10;
      plVar6 = plVar3;
      do {
        if ((int)uVar1 <= *(int *)((long)plVar5 + 0x1c)) {
          plVar6 = plVar5;
        }
        plVar5 = (long *)plVar5[*(int *)((long)plVar5 + 0x1c) < (int)uVar1];
      } while (plVar5 != (long *)0x0);
      if ((plVar6 != plVar3) && (*(int *)((long)plVar6 + 0x1c) <= (int)uVar1)) {
        uVar1 = *(uint *)(plVar6 + 4);
        uVar9 = NEON_scvtf(CONCAT44(uVar1 >> 8,uVar1) & 0xff000000ff,4);
        lVar4 = CONCAT44((float)((ulong)uVar9 >> 0x20) * 0.003921569,(float)uVar9 * 0.003921569);
        fVar8 = (float)(uVar1 >> 0x10 & 0xff) * DAT_00144b04;
        goto LAB_00178880;
      }
    }
  }
  lVar4 = param_3[1];
  fVar8 = *(float *)(param_3 + 2);
LAB_00178880:
  param_1[1] = CONCAT44((float)((ulong)lVar2 >> 0x20) - (float)((ulong)lVar4 >> 0x20),
                        (float)lVar2 - (float)lVar4);
  *(float *)(param_1 + 2) = fVar7 - fVar8;
  *param_1 = 0;
  return;
}


// ===== 00178920  FUN_00178920 =====

float FUN_00178920(long param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  int *piVar6;
  float fVar7;
  undefined4 local_30 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  piVar5 = *(int **)(param_1 + 8);
  piVar1 = *(int **)(param_1 + 0x10);
  piVar6 = piVar5;
  if (piVar5 != piVar1) {
    iVar2 = *piVar5;
    while ((piVar6 = piVar5, iVar2 != param_2 &&
           (piVar5 = piVar5 + 0x10, piVar6 = piVar1, piVar1 != piVar5))) {
      iVar2 = *piVar5;
    }
  }
  plVar4 = *(long **)(piVar6 + 0xc);
  local_30[0] = param_3;
  if (plVar4 == (long *)0x0) {
    FUN_00178384();
  }
  else {
    fVar7 = (float)(**(code **)(*plVar4 + 0x30))(plVar4,local_30);
    if (*(long *)(lVar3 + 0x28) == local_28) {
      return fVar7 * DAT_00144b80;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001789c8  FUN_001789c8 =====

void FUN_001789c8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)param_1[1];
  plVar1 = plVar2;
  if (plVar3 != plVar2) {
    do {
      plVar3 = plVar3 + -1;
      plVar1 = (long *)*plVar3;
      *plVar3 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    } while (plVar2 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar2;
  operator_delete(plVar1);
  return;
}


// ===== 00178a40  FUN_00178a40 =====

void FUN_00178a40(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x90);
  if (pvVar1 == (void *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  else {
    if (*(void **)((long)pvVar1 + 0x58) == (void *)0x0) {
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    else {
      free(*(void **)((long)pvVar1 + 0x58));
      pvVar1 = *(void **)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x90) = 0;
      if (pvVar1 == (void *)0x0) goto LAB_00178a88;
    }
    operator_delete(pvVar1);
  }
LAB_00178a88:
  pvVar1 = *(void **)(param_1 + 0x60);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x68) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_00177938(param_1 + 0x58);
  FUN_00177820(param_1 + 0x20);
  FUN_00178ab8(param_1);
  return;
}


// ===== 00178ab8  FUN_00178ab8 =====

void FUN_00178ab8(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 8);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 00178b10  FUN_00178b10 =====

void FUN_00178b10(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)param_1[1];
  plVar1 = plVar2;
  if (plVar3 != plVar2) {
    do {
      plVar3 = plVar3 + -1;
      plVar1 = (long *)*plVar3;
      *plVar3 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    } while (plVar2 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar2;
  operator_delete(plVar1);
  return;
}


// ===== 00178b88  FUN_00178b88 =====

bool FUN_00178b88(undefined8 *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 1) == '\0') {
    pfVar1 = *(float **)*param_1;
    pfVar2 = (float *)((long *)*param_1)[1];
    if (pfVar1 != pfVar2) {
      iVar3 = (int)*pfVar1;
      if ((iVar3 <= param_2) || (iVar3 <= param_3)) {
        iVar3 = (int)pfVar2[-0xf];
        return param_2 <= iVar3 || param_3 <= iVar3;
      }
    }
  }
  return false;
}


// ===== 00178be0  FUN_00178be0 =====

bool FUN_00178be0(undefined8 *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 1) == '\0') {
    pfVar1 = *(float **)*param_1;
    pfVar2 = (float *)((long *)*param_1)[1];
    if (pfVar1 != pfVar2) {
      iVar3 = (int)*pfVar1;
      if ((iVar3 <= param_2) || (iVar3 <= param_3)) {
        iVar3 = (int)pfVar2[-7];
        return param_2 <= iVar3 || param_3 <= iVar3;
      }
    }
  }
  return false;
}


// ===== 00178c90  FUN_00178c90 =====

void FUN_00178c90(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[1];
  pvVar1 = pvVar3;
  if (pvVar2 != pvVar3) {
    do {
      pvVar2 = (void *)((long)pvVar2 + -0x40);
      FUN_001702e4(pvVar2);
    } while (pvVar3 != pvVar2);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 00178cfc  FUN_00178cfc =====

void FUN_00178cfc(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  
  if (param_2 != (void *)0x0) {
    pvVar1 = *(void **)((long)param_2 + 0x10);
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)param_2 + 0x18) = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 00178d34  FUN_00178d34 =====

undefined1  [16] FUN_00178d34(long *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 extraout_s0;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined4 uVar5;
  undefined8 extraout_var_00;
  undefined8 uVar6;
  undefined1 auVar4 [16];
  float fVar7;
  float fVar8;
  
  pfVar1 = (float *)*param_1;
  pfVar2 = (float *)param_1[1];
  if (pfVar1 != pfVar2) {
    fVar7 = (float)param_2;
    if (*pfVar1 < fVar7 == (NAN(*pfVar1) || NAN(fVar7))) {
      return ZEXT416((uint)pfVar1[6]);
    }
    fVar8 = pfVar2[-7];
    if (fVar8 == fVar7 || fVar8 < fVar7 != (NAN(fVar8) || NAN(fVar7))) {
      return ZEXT416((uint)pfVar2[-1]);
    }
    do {
      fVar8 = *pfVar1;
      if ((fVar8 == fVar7 || fVar8 < fVar7 != (NAN(fVar8) || NAN(fVar7))) &&
         (fVar8 = pfVar1[1], fVar8 != fVar7 && fVar8 < fVar7 == (NAN(fVar8) || NAN(fVar7)))) {
        if (*(long *)(pfVar1 + 2) == 0) {
          uVar3 = 0;
          uVar5 = 0;
          uVar6 = 0;
        }
        else {
          FUN_0018f1ac(((float)param_2 - *pfVar1) / (pfVar1[1] - *pfVar1));
          uVar3 = extraout_s0;
          uVar5 = extraout_var;
          uVar6 = extraout_var_00;
        }
        auVar4._0_4_ = NEON_fmadd(pfVar1[7] - pfVar1[6],uVar3,pfVar1[6]);
        auVar4._4_4_ = uVar5;
        auVar4._8_8_ = uVar6;
        return auVar4;
      }
      pfVar1 = pfVar1 + 8;
    } while (pfVar2 != pfVar1);
  }
  return ZEXT816(0);
}


// ===== 00178df4  FUN_00178df4 =====

void FUN_00178df4(undefined8 *param_1,long *param_2,int param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  long lVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  float local_60;
  undefined8 local_50;
  long local_48;
  
  pfVar8 = (float *)*param_2;
  pfVar3 = (float *)param_2[1];
  if (pfVar8 == pfVar3) {
LAB_00178e54:
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    fVar10 = (float)param_3;
    if (*pfVar8 < fVar10 == (NAN(*pfVar8) || NAN(fVar10))) {
      FUN_001779a4(param_1,pfVar8 + 6);
      uVar5 = *(undefined1 *)(pfVar8 + 0xc);
    }
    else {
      fVar12 = pfVar3[-0x15];
      if (fVar12 != fVar10 && fVar12 < fVar10 == (NAN(fVar12) || NAN(fVar10))) {
        do {
          fVar12 = *pfVar8;
          if ((fVar12 == fVar10 || fVar12 < fVar10 != (NAN(fVar12) || NAN(fVar10))) &&
             (fVar12 = pfVar8[1],
             fVar12 != fVar10 && fVar12 < fVar10 == (NAN(fVar12) || NAN(fVar10)))) {
            lVar4 = tpidr_el0;
            local_48 = *(long *)(lVar4 + 0x28);
            if (*(long *)(pfVar8 + 2) == 0) {
              local_60 = 0.0;
            }
            else {
              local_60 = (float)FUN_0018f1ac(((float)param_3 - *pfVar8) / (pfVar8[1] - *pfVar8));
            }
            *param_1 = 0;
            param_1[1] = 0;
            *(undefined1 *)(param_1 + 3) = 0;
            param_1[2] = 0;
            uVar6 = *(long *)(pfVar8 + 0x10) - *(long *)(pfVar8 + 0xe) >> 3;
            uVar7 = *(long *)(pfVar8 + 8) - *(long *)(pfVar8 + 6) >> 3;
            if (uVar7 <= uVar6) {
              uVar6 = uVar7;
            }
            FUN_00178fe4(param_1,(long)(int)uVar6);
            if (uVar6 != 0) {
              uVar7 = 0;
              uVar9 = 1;
              do {
                uVar11 = *(undefined8 *)(*(long *)(pfVar8 + 0xe) + uVar7 * 8);
                uVar13 = *(undefined8 *)(*(long *)(pfVar8 + 6) + uVar7 * 8);
                puVar2 = (undefined8 *)param_1[1];
                fVar10 = (float)uVar13;
                fVar12 = (float)((ulong)uVar13 >> 0x20);
                local_50 = CONCAT44(fVar12 + local_60 * ((float)((ulong)uVar11 >> 0x20) - fVar12),
                                    fVar10 + local_60 * ((float)uVar11 - fVar10));
                if (puVar2 == (undefined8 *)param_1[2]) {
                  FUN_0017912c(param_1,&local_50);
                }
                else {
                  *puVar2 = local_50;
                  param_1[1] = puVar2 + 1;
                }
                uVar1 = (ulong)uVar9;
                uVar7 = (ulong)uVar9;
                uVar9 = uVar9 + 1;
              } while (uVar1 < uVar6);
            }
            if (*(long *)(lVar4 + 0x28) == local_48) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          pfVar8 = pfVar8 + 0x16;
        } while (pfVar3 != pfVar8);
        goto LAB_00178e54;
      }
      FUN_001779a4(param_1,pfVar3 + -8);
      uVar5 = *(undefined1 *)(pfVar3 + -2);
    }
    *(undefined1 *)(param_1 + 3) = uVar5;
  }
  return;
}


// ===== 00178fe4  FUN_00178fe4 =====

void FUN_00178fe4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *local_60;
  long local_58;
  long local_50;
  void *local_48;
  long *plStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2 >> 3) < param_2) {
    lVar3 = param_1[1];
    plStack_40 = param_1 + 2;
    local_48 = (void *)0x0;
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_60 = operator_new(param_2 << 3);
    local_58 = (long)local_60 + (lVar3 - lVar2);
    local_48 = (void *)((long)local_60 + param_2 * 8);
    local_50 = local_58;
    FUN_001790b4(param_1,&local_60);
    if (local_50 - local_58 != 0) {
      local_50 = local_50 + ((local_50 - local_58) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
    if (local_60 != (void *)0x0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001790b4  FUN_001790b4 =====

void FUN_001790b4(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  void *__dest;
  size_t __n;
  undefined8 uVar1;
  
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  __dest = (void *)(param_2[1] - __n);
  param_2[1] = __dest;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __dest = (void *)param_2[1];
  }
  uVar1 = *param_1;
  *param_1 = __dest;
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}


// ===== 0017912c  FUN_0017912c =====

void FUN_0017912c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar5 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar3 = *plStack_50 - *param_1;
  uVar4 = lVar3 >> 2;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  if (0xffffffffffffffe < (ulong)(lVar3 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  local_58 = (void *)0x0;
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_70 = operator_new(uVar1 << 3);
  }
  local_68 = (undefined8 *)((long)local_70 + lVar5 * 8);
  local_58 = (void *)((long)local_70 + uVar1 * 8);
  local_60 = local_68 + 1;
  *local_68 = *param_2;
  FUN_001790b4(param_1,&local_70);
  if ((long)local_60 - (long)local_68 != 0) {
    local_60 = local_60 + (((long)local_60 - (long)local_68) - 8U >> 3 ^ 0xffffffffffffffff);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179240  FUN_00179240 =====

void FUN_00179240(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  void *local_60;
  long local_58;
  undefined8 *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar4 >> 3) * -0x3333333333333333) < param_2) {
    lVar3 = ((long)puVar4 - *param_1 >> 3) * -0x3333333333333333;
    uVar1 = lVar3 + param_2;
    if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar6 * -0x6666666666666666;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar1 = 0x666666666666666;
    }
    FUN_001793d4(&local_60,uVar1,lVar3,param_1 + 2);
    lVar3 = param_2 * 0x28;
    puVar4 = local_50;
    do {
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      lVar3 = lVar3 + -0x28;
      puVar4 = puVar4 + 5;
    } while (lVar3 != 0);
    local_50 = local_50 + param_2 * 5;
    FUN_00179448(param_1,&local_60);
    if ((long)local_50 - local_58 != 0) {
      local_50 = local_50 + ((((long)local_50 - local_58) - 0x28U) / 0x28 ^ 0xffffffffffffffff) * 5;
    }
    if (local_60 != (void *)0x0) {
      operator_delete(local_60);
    }
  }
  else {
    puVar5 = puVar4;
    if (param_2 != 0) {
      puVar5 = puVar4 + param_2 * 5;
      lVar3 = param_2 * 0x28;
      do {
        puVar4[4] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        lVar3 = lVar3 + -0x28;
        puVar4 = puVar4 + 5;
      } while (lVar3 != 0);
    }
    param_1[1] = (long)puVar5;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001793d4  FUN_001793d4 =====

void FUN_001793d4(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  void *pvVar1;
  void *pvVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x666666666666666 < param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar1 = operator_new(param_2 * 0x28);
  }
  pvVar2 = (void *)((long)pvVar1 + param_3 * 0x28);
  *param_1 = pvVar1;
  param_1[1] = pvVar2;
  param_1[2] = pvVar2;
  param_1[3] = (void *)((long)pvVar1 + param_2 * 0x28);
  return;
}


// ===== 00179448  FUN_00179448 =====

void FUN_00179448(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  void *__dest;
  size_t __n;
  undefined8 uVar1;
  
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  __dest = (void *)(param_2[1] - __n);
  param_2[1] = __dest;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __dest = (void *)param_2[1];
  }
  uVar1 = *param_1;
  *param_1 = __dest;
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}


// ===== 001794c0  FUN_001794c0 =====

void FUN_001794c0(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  void *pvVar1;
  void *pvVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x2aaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar1 = operator_new(param_2 * 0x60);
  }
  pvVar2 = (void *)((long)pvVar1 + param_3 * 0x60);
  *param_1 = pvVar1;
  param_1[1] = pvVar2;
  param_1[2] = pvVar2;
  param_1[3] = (void *)((long)pvVar1 + param_2 * 0x60);
  return;
}


// ===== 00179534  FUN_00179534 =====

void FUN_00179534(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_00179608(param_1 + 2,*param_1,param_1[1],param_2 + 1);
  uVar1 = *param_1;
  *param_1 = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}


// ===== 00179598  FUN_00179598 =====

void FUN_00179598(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x60;
    FUN_00178ab8(lVar2 + -0x18);
    FUN_00177938(lVar2 + -0x20);
    FUN_00177938(lVar2 + -0x28);
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00179608  FUN_00179608 =====

void FUN_00179608(undefined8 param_1,long param_2,long param_3,long *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_3 != param_2) {
    lVar2 = *param_4;
    do {
      uVar6 = *(undefined8 *)(param_3 + -0x48);
      uVar5 = *(undefined8 *)(param_3 + -0x50);
      uVar4 = *(undefined8 *)(param_3 + -0x38);
      uVar3 = *(undefined8 *)(param_3 + -0x40);
      uVar8 = *(undefined8 *)(param_3 + -0x58);
      uVar7 = *(undefined8 *)(param_3 + -0x60);
      *(undefined2 *)(lVar2 + -0x30) = *(undefined2 *)(param_3 + -0x30);
      *(undefined8 *)(lVar2 + -0x48) = uVar6;
      *(undefined8 *)(lVar2 + -0x50) = uVar5;
      *(undefined8 *)(lVar2 + -0x38) = uVar4;
      *(undefined8 *)(lVar2 + -0x40) = uVar3;
      *(undefined8 *)(lVar2 + -0x58) = uVar8;
      *(undefined8 *)(lVar2 + -0x60) = uVar7;
      *(undefined8 *)(lVar2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      uVar3 = *(undefined8 *)(param_3 + -0x20);
      *(undefined8 *)(param_3 + -0x28) = 0;
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      *(undefined8 *)(lVar2 + -0x20) = uVar3;
      *(undefined8 *)(param_3 + -0x20) = 0;
      *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      puVar1 = (undefined1 *)(param_3 + -8);
      *(undefined8 *)(param_3 + -0x18) = 0;
      *(undefined8 *)(param_3 + -0x10) = 0;
      param_3 = param_3 + -0x60;
      *(undefined1 *)(lVar2 + -8) = *puVar1;
      lVar2 = *param_4 + -0x60;
      *param_4 = lVar2;
    } while (param_2 != param_3);
  }
  return;
}


// ===== 00179674  FUN_00179674 =====

void FUN_00179674(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = DAT_00146378;
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = uVar1;
  FUN_00177f84(param_1 + 7);
  FUN_00177f84(param_1 + 8);
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}


// ===== 001796c8  FUN_001796c8 =====

void FUN_001796c8(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_001777c4((long)pvVar1 + 0x18);
    FUN_0017970c(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0017970c  FUN_0017970c =====

void FUN_0017970c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar1;
  pvVar2 = (void *)param_1[1];
  if ((void *)param_1[1] != pvVar1) {
    do {
      pvVar3 = (void *)((long)pvVar2 + -0x60);
      FUN_00178ab8((long)pvVar2 + -0x18);
      FUN_00177938((long)pvVar2 + -0x20);
      FUN_00177938((long)pvVar2 + -0x28);
      pvVar2 = pvVar3;
    } while (pvVar1 != pvVar3);
    pvVar3 = (void *)*param_1;
  }
  param_1[1] = pvVar1;
  operator_delete(pvVar3);
  return;
}


// ===== 0017978c  FUN_0017978c =====

void FUN_0017978c(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_00178ab8((long)pvVar1 + 0x10);
    FUN_00177938((long)pvVar1 + 8);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 001797d0  FUN_001797d0 =====

void FUN_001797d0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  long local_58;
  long *plStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar9 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar4 = *plStack_50 - *param_1;
  uVar7 = lVar4 >> 2;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  local_58 = 0;
  if (uVar1 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar3 = operator_new(uVar1 << 3);
  }
  puVar5 = (undefined8 *)((long)pvVar3 + lVar9 * 8);
  uVar6 = *param_2;
  *param_2 = 0;
  puVar8 = puVar5 + 1;
  *puVar5 = uVar6;
  local_70 = (undefined8 *)*param_1;
  local_60 = (undefined8 *)param_1[1];
  if (local_60 != local_70) {
    do {
      local_60 = local_60 + -1;
      uVar6 = *local_60;
      *local_60 = 0;
      puVar5[-1] = uVar6;
      puVar5 = puVar5 + -1;
    } while (local_70 != local_60);
    local_70 = (undefined8 *)*param_1;
    local_60 = (undefined8 *)param_1[1];
  }
  *param_1 = (long)puVar5;
  param_1[1] = (long)puVar8;
  local_58 = param_1[2];
  param_1[2] = (long)((long)pvVar3 + uVar1 * 8);
  local_68 = local_70;
  FUN_00179908(&local_70);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179908  FUN_00179908 =====

void FUN_00179908(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 0017996c  FUN_0017996c =====

void FUN_0017996c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar5 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar3 = *plStack_50 - *param_1;
  uVar4 = lVar3 >> 2;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  if (0xffffffffffffffe < (ulong)(lVar3 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  local_58 = (void *)0x0;
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_70 = operator_new(uVar1 << 3);
  }
  local_68 = (undefined8 *)((long)local_70 + lVar5 * 8);
  local_58 = (void *)((long)local_70 + uVar1 * 8);
  local_60 = local_68 + 1;
  *local_68 = *param_2;
  FUN_00179a80(param_1,&local_70);
  if ((long)local_60 - (long)local_68 != 0) {
    local_60 = local_60 + (((long)local_60 - (long)local_68) - 8U >> 3 ^ 0xffffffffffffffff);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179a80  FUN_00179a80 =====

void FUN_00179a80(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  void *__dest;
  size_t __n;
  undefined8 uVar1;
  
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  __dest = (void *)(param_2[1] - __n);
  param_2[1] = __dest;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __dest = (void *)param_2[1];
  }
  uVar1 = *param_1;
  *param_1 = __dest;
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}


// ===== 00179af8  FUN_00179af8 =====

void FUN_00179af8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar5 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar3 = *plStack_50 - *param_1;
  uVar4 = lVar3 >> 2;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  if (0xffffffffffffffe < (ulong)(lVar3 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  local_58 = (void *)0x0;
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_70 = operator_new(uVar1 << 3);
  }
  local_68 = (undefined8 *)((long)local_70 + lVar5 * 8);
  local_58 = (void *)((long)local_70 + uVar1 * 8);
  local_60 = local_68 + 1;
  *local_68 = *param_2;
  FUN_00179c0c(param_1,&local_70);
  if ((long)local_60 - (long)local_68 != 0) {
    local_60 = local_60 + (((long)local_60 - (long)local_68) - 8U >> 3 ^ 0xffffffffffffffff);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179c0c  FUN_00179c0c =====

void FUN_00179c0c(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  void *__dest;
  size_t __n;
  undefined8 uVar1;
  
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  __dest = (void *)(param_2[1] - __n);
  param_2[1] = __dest;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __dest = (void *)param_2[1];
  }
  uVar1 = *param_1;
  *param_1 = __dest;
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}


// ===== 00179c84  FUN_00179c84 =====

void FUN_00179c84(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar5 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar3 = *plStack_50 - *param_1;
  uVar4 = lVar3 >> 2;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  if (0xffffffffffffffe < (ulong)(lVar3 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  local_58 = (void *)0x0;
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_70 = operator_new(uVar1 << 3);
  }
  local_68 = (undefined8 *)((long)local_70 + lVar5 * 8);
  local_58 = (void *)((long)local_70 + uVar1 * 8);
  local_60 = local_68 + 1;
  *local_68 = *param_2;
  FUN_00179d98(param_1,&local_70);
  if ((long)local_60 - (long)local_68 != 0) {
    local_60 = local_60 + (((long)local_60 - (long)local_68) - 8U >> 3 ^ 0xffffffffffffffff);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179d98  FUN_00179d98 =====

void FUN_00179d98(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  void *__dest;
  size_t __n;
  undefined8 uVar1;
  
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  __dest = (void *)(param_2[1] - __n);
  param_2[1] = __dest;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __dest = (void *)param_2[1];
  }
  uVar1 = *param_1;
  *param_1 = __dest;
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}


// ===== 00179e10  FUN_00179e10 =====

void FUN_00179e10(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  long local_58;
  long *plStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar9 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar4 = *plStack_50 - *param_1;
  uVar7 = lVar4 >> 2;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  local_58 = 0;
  if (uVar1 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar3 = operator_new(uVar1 << 3);
  }
  puVar5 = (undefined8 *)((long)pvVar3 + lVar9 * 8);
  uVar6 = *param_2;
  *param_2 = 0;
  puVar8 = puVar5 + 1;
  *puVar5 = uVar6;
  local_70 = (undefined8 *)*param_1;
  local_60 = (undefined8 *)param_1[1];
  if (local_60 != local_70) {
    do {
      local_60 = local_60 + -1;
      uVar6 = *local_60;
      *local_60 = 0;
      puVar5[-1] = uVar6;
      puVar5 = puVar5 + -1;
    } while (local_70 != local_60);
    local_70 = (undefined8 *)*param_1;
    local_60 = (undefined8 *)param_1[1];
  }
  *param_1 = (long)puVar5;
  param_1[1] = (long)puVar8;
  local_58 = param_1[2];
  param_1[2] = (long)((long)pvVar3 + uVar1 * 8);
  local_68 = local_70;
  FUN_00179f48(&local_70);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00179f48  FUN_00179f48 =====

void FUN_00179f48(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00179fac  FUN_00179fac =====

void FUN_00179fac(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar5 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar3 = *plStack_50 - *param_1;
  uVar4 = lVar3 >> 2;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  if (0xffffffffffffffe < (ulong)(lVar3 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  local_58 = (void *)0x0;
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_70 = operator_new(uVar1 << 3);
  }
  local_68 = (undefined8 *)((long)local_70 + lVar5 * 8);
  local_58 = (void *)((long)local_70 + uVar1 * 8);
  local_60 = local_68 + 1;
  *local_68 = *param_2;
  FUN_0017a0c0(param_1,&local_70);
  if ((long)local_60 - (long)local_68 != 0) {
    local_60 = local_60 + (((long)local_60 - (long)local_68) - 8U >> 3 ^ 0xffffffffffffffff);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a0c0  FUN_0017a0c0 =====

void FUN_0017a0c0(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  void *__dest;
  size_t __n;
  undefined8 uVar1;
  
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  __dest = (void *)(param_2[1] - __n);
  param_2[1] = __dest;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __dest = (void *)param_2[1];
  }
  uVar1 = *param_1;
  *param_1 = __dest;
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}


// ===== 0017a138  FUN_0017a138 =====

undefined1  [16] FUN_0017a138(long *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float extraout_s0;
  undefined4 uVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar2 = (float *)*param_1;
  pfVar1 = (float *)param_1[1];
  fVar3 = 0.0;
  uVar5 = 0;
  uVar6 = 0;
  if (pfVar2 != pfVar1) {
    fVar7 = (float)param_2;
    if (*pfVar2 < fVar7 == (NAN(*pfVar2) || NAN(fVar7))) {
      fVar3 = pfVar2[6];
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      fVar8 = pfVar1[-0xf];
      if (fVar8 == fVar7 || fVar8 < fVar7 != (NAN(fVar8) || NAN(fVar7))) {
        fVar3 = pfVar1[-8];
        uVar5 = 0;
        uVar6 = 0;
      }
      else {
        do {
          fVar8 = *pfVar2;
          if ((fVar8 == fVar7 || fVar8 < fVar7 != (NAN(fVar8) || NAN(fVar7))) &&
             (fVar9 = pfVar2[1], fVar9 != fVar7 && fVar9 < fVar7 == (NAN(fVar9) || NAN(fVar7)))) {
            if (*(long *)(pfVar2 + 2) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_0018f1ac((fVar7 - fVar8) / (fVar9 - fVar8));
            }
            FUN_0017a1e4(uVar5,pfVar2 + 6);
            fVar3 = extraout_s0;
            uVar5 = extraout_var;
            uVar6 = extraout_var_00;
            break;
          }
          pfVar2 = pfVar2 + 0x10;
        } while (pfVar1 != pfVar2);
      }
    }
  }
  auVar4._4_4_ = uVar5;
  auVar4._0_4_ = fVar3;
  auVar4._8_8_ = uVar6;
  return auVar4;
}


// ===== 0017a1e4  FUN_0017a1e4 =====

void FUN_0017a1e4(float param_1,undefined8 *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_2 + 4) == '\0') {
    fVar2 = (float)*param_2;
    fVar3 = (float)((ulong)*param_2 >> 0x20);
    uVar4 = CONCAT44(fVar3 + ((float)((ulong)param_2[1] >> 0x20) - fVar3) * param_1,
                     fVar2 + ((float)param_2[1] - fVar2) * param_1);
  }
  else {
    local_50 = CONCAT44((float)((ulong)param_2[3] >> 0x20) + (float)((ulong)*param_2 >> 0x20),
                        (float)param_2[3] + (float)*param_2);
    local_58 = CONCAT44((float)((ulong)param_2[2] >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                        (float)param_2[2] + (float)param_2[1]);
    FUN_0018d1f8(local_48,param_2,&local_50,&local_58);
    fVar2 = (float)FUN_0018d214(local_48);
    fVar2 = (float)FUN_0018d428(fVar2 * param_1,local_48);
    fVar3 = 1.0 - fVar2;
    fVar5 = (float)local_48._8_8_ * fVar3 + (float)local_48._16_8_ * fVar2;
    fVar6 = SUB84(local_48._8_8_,4) * fVar3 + SUB84(local_48._16_8_,4) * fVar2;
    uVar4 = CONCAT44(((SUB84(local_48._0_8_,4) * fVar3 + SUB84(local_48._8_8_,4) * fVar2) * fVar3 +
                     fVar6 * fVar2) * fVar3 +
                     (fVar6 * fVar3 +
                     (SUB84(local_48._16_8_,4) * fVar3 + SUB84(local_48._24_8_,4) * fVar2) * fVar2)
                     * fVar2,(((float)local_48._0_8_ * fVar3 + (float)local_48._8_8_ * fVar2) *
                              fVar3 + fVar5 * fVar2) * fVar3 +
                             (fVar5 * fVar3 +
                             ((float)local_48._16_8_ * fVar3 + (float)local_48._24_8_ * fVar2) *
                             fVar2) * fVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0017a2d8  FUN_0017a2d8 =====

void FUN_0017a2d8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar5 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar3 = *plStack_50 - *param_1;
  uVar4 = lVar3 >> 2;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  if (0xffffffffffffffe < (ulong)(lVar3 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  local_58 = (void *)0x0;
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_70 = operator_new(uVar1 << 3);
  }
  local_68 = (undefined8 *)((long)local_70 + lVar5 * 8);
  local_58 = (void *)((long)local_70 + uVar1 * 8);
  local_60 = local_68 + 1;
  *local_68 = *param_2;
  FUN_0017a0c0(param_1,&local_70);
  if ((long)local_60 - (long)local_68 != 0) {
    local_60 = local_60 + (((long)local_60 - (long)local_68) - 8U >> 3 ^ 0xffffffffffffffff);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a3ec  FUN_0017a3ec =====

void FUN_0017a3ec(long param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_30 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  piVar5 = *(int **)(param_1 + 8);
  piVar1 = *(int **)(param_1 + 0x10);
  piVar6 = piVar5;
  if (piVar5 != piVar1) {
    iVar2 = *piVar5;
    while ((piVar6 = piVar5, iVar2 != param_2 &&
           (piVar5 = piVar5 + 0x10, piVar6 = piVar1, piVar1 != piVar5))) {
      iVar2 = *piVar5;
    }
  }
  plVar4 = *(long **)(piVar6 + 0xc);
  local_30[0] = param_3;
  if (plVar4 == (long *)0x0) {
    FUN_00178384();
  }
  else {
    (**(code **)(*plVar4 + 0x30))(plVar4,local_30);
    if (*(long *)(lVar3 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a488  FUN_0017a488 =====

void FUN_0017a488(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  ulong local_198 [2];
  void *local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined *local_170;
  undefined *local_168 [8];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  puVar4 = PTR_vtable_0020f7d8;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_vtable_0020f7d8 + 0x40;
  local_180 = PTR_construction_vtable_0020f7e0 + 0x18;
  local_100[0] = PTR_construction_vtable_0020f7e0 + 0x40;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_178 = 0;
  local_170 = puVar1;
  std::__ndk1::ios_base::init
            ((ios_base *)local_100,(basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_168
            );
  local_180 = puVar4 + 0x18;
  local_100[0] = puVar4 + 0x68;
  local_70 = 0xffffffff;
  local_78 = 0;
  local_170 = puVar1;
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_168);
  puVar1 = PTR_vtable_0020f7e8;
  local_168[0] = PTR_vtable_0020f7e8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x18;
  FUN_0017b5c4((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_168,param_2);
  local_198[0] = 0;
  local_198[1] = 0;
  local_188 = (void *)0x0;
  plVar5 = (long *)FUN_0017a674(&local_180,local_198,0x2e);
  bVar2 = *(byte *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x20);
  while ((bVar2 & 5) == 0) {
    this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           param_1[1];
    if (this == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_1[2]) {
      FUN_0017b6f8(param_1);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(this,(basic_string_conflict *)local_198);
      param_1[1] = this + 0x18;
    }
    plVar5 = (long *)FUN_0017a674(&local_180,local_198,0x2e);
    bVar2 = *(byte *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x20);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  local_180 = puVar4 + 0x18;
  local_100[0] = puVar4 + 0x68;
  local_170 = puVar4 + 0x40;
  local_168[0] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    operator_delete(local_118);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_168);
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__ndk1::char_traits<char>> *)&local_180);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017a674  FUN_0017a674 =====

basic_istream *
FUN_0017a674(basic_istream *param_1,
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_2,
            byte param_3)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  sentry local_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_50,param_1,true);
  if (local_50[0] != (sentry)0x0) {
    if (((byte)*param_2 & 1) == 0) {
      *(undefined2 *)param_2 = 0;
    }
    else {
      **(undefined1 **)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
    }
    lVar5 = 0;
    do {
      plVar4 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28);
      pbVar1 = (byte *)plVar4[3];
      if (pbVar1 == (byte *)plVar4[4]) {
        uVar3 = (**(code **)(*plVar4 + 0x50))();
        if (uVar3 == 0xffffffff) {
          uVar3 = 6;
          if (lVar5 != 0) {
            uVar3 = 2;
          }
          goto LAB_0017a76c;
        }
      }
      else {
        plVar4[3] = (long)(pbVar1 + 1);
        uVar3 = (uint)*pbVar1;
      }
      if ((uVar3 & 0xff) == (uint)param_3) {
        uVar3 = 0;
        goto LAB_0017a76c;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(param_2,(char)uVar3);
      lVar5 = lVar5 + -1;
    } while ((((byte)*param_2 & 1) == 0) || (*(long *)(param_2 + 8) != -0x11));
    uVar3 = 4;
LAB_0017a76c:
    std::__ndk1::ios_base::clear
              ((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
               *(uint *)((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20) | uVar3
              );
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


// ===== 0017a7b4  FUN_0017a7b4 =====

void FUN_0017a7b4(basic_iostream<char,std::__ndk1::char_traits<char>> *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_vtable_0020f7d8 + 0x68;
  puVar2 = PTR_vtable_0020f7d8 + 0x40;
  puVar3 = PTR_vtable_0020f7e8 + 0x10;
  *(undefined **)param_1 = PTR_vtable_0020f7d8 + 0x18;
  *(undefined **)(param_1 + 0x80) = puVar1;
  *(undefined **)(param_1 + 0x10) = puVar2;
  *(undefined **)(param_1 + 0x18) = puVar3;
  if (((byte)param_1[0x58] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x68));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 0x18));
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream(param_1);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(param_1 + 0x80));
  return;
}


// ===== 0017a840  FUN_0017a840 =====

bool FUN_0017a840(long *param_1,byte *param_2,uint param_3)

{
  size_t __n;
  size_t sVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  ulong uVar8;
  long lVar9;
  size_t sVar10;
  size_t sVar11;
  
  uVar8 = (ulong)param_3;
  uVar5 = FUN_00171f00();
  if ((uVar5 & 1) != 0) {
    return true;
  }
  lVar9 = *param_1;
  if (param_3 <= (int)((ulong)(param_1[1] - lVar9) >> 3) * -0x55555555 - 1U) {
    pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar9 + (ulong)param_3 * 0x18);
    bVar2 = *pbVar7;
    bVar3 = *param_2;
    sVar10 = *(size_t *)(pbVar7 + 8);
    sVar11 = (size_t)((byte)bVar2 >> 1);
    __n = sVar11;
    if (((byte)bVar2 & 1) != 0) {
      __n = sVar10;
    }
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_2 + 8);
    }
    if (__n == sVar1) {
      pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (lVar9 + uVar8 * 0x18 + 0x10);
      __s2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_2 + 0x10);
      if (((byte)bVar2 & 1) == 0) {
        pbVar6 = pbVar7 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1);
      }
      if (((byte)bVar2 & 1) == 0) {
        uVar5 = sVar11;
        pbVar6 = pbVar7;
        if (__n == 0) {
          return true;
        }
        while (pbVar6[1] == *__s2) {
          uVar5 = uVar5 - 1;
          __s2 = __s2 + 1;
          pbVar6 = pbVar6 + 1;
          if (uVar5 == 0) {
            return true;
          }
        }
      }
      else {
        if (__n == 0) {
          return true;
        }
        iVar4 = memcmp(pbVar6,__s2,__n);
        if (iVar4 == 0) {
          return true;
        }
      }
    }
    if (__n == 1) {
      iVar4 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare(pbVar7,0,0xffffffffffffffff,"*",1);
      if (iVar4 == 0) {
        return true;
      }
      lVar9 = *param_1;
      pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (lVar9 + uVar8 * 0x18);
      bVar2 = *pbVar7;
      sVar10 = *(size_t *)(pbVar7 + 8);
      sVar11 = (size_t)((byte)bVar2 >> 1);
    }
    if (((byte)bVar2 & 1) != 0) {
      sVar11 = sVar10;
    }
    if (sVar11 == 2) {
      iVar4 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)(lVar9 + uVar8 * 0x18),0,0xffffffffffffffff,"**",2);
      return iVar4 == 0;
    }
  }
  return false;
}


// ===== 0017a9e8  FUN_0017a9e8 =====

ulong FUN_0017a9e8(long *param_1,byte *param_2,uint param_3)

{
  size_t __n;
  size_t sVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  size_t sVar7;
  byte *__s1;
  byte *pbVar8;
  byte *__s2;
  ulong uVar9;
  
  uVar9 = (ulong)param_3;
  uVar6 = FUN_00171f00();
  if ((uVar6 & 1) == 0) {
    this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (*param_1 + uVar9 * 0x18);
    uVar6 = (ulong)((byte)*this >> 1);
    if (((byte)*this & 1) != 0) {
      uVar6 = *(ulong *)(this + 8);
    }
    if ((uVar6 == 2) &&
       (iVar5 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare(this,0,0xffffffffffffffff,"**",2), iVar5 == 0)) {
      lVar2 = *param_1;
      if ((int)((ulong)(param_1[1] - lVar2) >> 3) * -0x55555555 - 1U != param_3) {
        pbVar8 = (byte *)(lVar2 + (ulong)(param_3 + 1) * 0x18);
        bVar3 = *pbVar8;
        bVar4 = *param_2;
        sVar7 = (size_t)(bVar3 >> 1);
        __n = sVar7;
        if ((bVar3 & 1) != 0) {
          __n = *(size_t *)(pbVar8 + 8);
        }
        sVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(param_2 + 8);
        }
        if (__n == sVar1) {
          __s1 = *(byte **)(lVar2 + (ulong)(param_3 + 1) * 0x18 + 0x10);
          __s2 = *(byte **)(param_2 + 0x10);
          if ((bVar3 & 1) == 0) {
            __s1 = pbVar8 + 1;
          }
          if ((bVar4 & 1) == 0) {
            __s2 = param_2 + 1;
          }
          if ((bVar3 & 1) == 0) {
            while (__n != 0) {
              pbVar8 = pbVar8 + 1;
              if (*pbVar8 != *__s2) {
                return uVar9;
              }
              __s2 = __s2 + 1;
              sVar7 = sVar7 - 1;
              __n = sVar7;
            }
          }
          else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) {
            return uVar9;
          }
          uVar9 = (ulong)(param_3 + 2);
        }
      }
    }
    else {
      uVar9 = (ulong)(param_3 + 1);
    }
  }
  return uVar9;
}


// ===== 0017ab2c  FUN_0017ab2c =====

ulong FUN_0017ab2c(long *param_1,byte *param_2,uint param_3)

{
  size_t sVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  size_t sVar7;
  int iVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  size_t sVar10;
  size_t sVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  
  lVar18 = *param_1;
  uVar13 = (param_1[1] - lVar18 >> 3) * -0x5555555555555555;
  if (param_3 <= uVar13) {
    uVar17 = (ulong)param_3;
    pbVar9 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar18 + uVar17 * 0x18);
    bVar2 = *pbVar9;
    sVar11 = *(size_t *)(pbVar9 + 8);
    sVar10 = (size_t)((byte)bVar2 >> 1);
    sVar1 = sVar10;
    if (((byte)bVar2 & 1) != 0) {
      sVar1 = sVar11;
    }
    uVar5 = (int)uVar13 - 1;
    if (sVar1 == 2) {
      iVar8 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare(pbVar9,0,0xffffffffffffffff,"**",2);
      if (iVar8 == 0) {
        if (uVar5 != param_3) {
          lVar18 = *param_1;
          uVar17 = (ulong)(param_3 + 1);
          bVar3 = *param_2;
          pbVar15 = (byte *)(lVar18 + uVar17 * 0x18);
          bVar4 = *pbVar15;
          uVar13 = (ulong)(bVar4 >> 1);
          sVar1 = uVar13;
          if ((bVar4 & 1) != 0) {
            sVar1 = *(size_t *)(pbVar15 + 8);
          }
          sVar10 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar10 = *(size_t *)(param_2 + 8);
          }
          if (sVar1 == sVar10) {
            pbVar12 = *(byte **)(lVar18 + uVar17 * 0x18 + 0x10);
            pbVar14 = *(byte **)(param_2 + 0x10);
            if ((bVar4 & 1) == 0) {
              pbVar12 = pbVar15 + 1;
            }
            if ((bVar3 & 1) == 0) {
              pbVar14 = param_2 + 1;
            }
            pbVar6 = pbVar15;
            sVar11 = uVar13;
            sVar7 = sVar1;
            if ((bVar4 & 1) == 0) {
              while (sVar7 != 0) {
                if (pbVar6[1] != *pbVar14) goto LAB_0017adc8;
                pbVar14 = pbVar14 + 1;
                sVar11 = sVar11 - 1;
                pbVar6 = pbVar6 + 1;
                sVar7 = sVar11;
              }
            }
            else if ((sVar1 != 0) && (iVar8 = memcmp(pbVar12,pbVar14,sVar1), iVar8 != 0))
            goto LAB_0017adc8;
            iVar8 = (int)((ulong)(param_1[1] - lVar18) >> 3) * -0x55555555;
            if (iVar8 - 2U != param_3) {
              if (iVar8 - 3U == param_3) {
                uVar13 = FUN_0017aeb8(param_1);
                return uVar13;
              }
              goto LAB_0017ab6c;
            }
          }
          else {
LAB_0017adc8:
            uVar16 = 0;
            if ((param_3 + 1 < (int)((ulong)(param_1[1] - lVar18) >> 3) * -0x55555555 - 1U) ||
               (uVar16 = 0, sVar1 != sVar10)) goto LAB_0017acec;
            pbVar12 = *(byte **)(lVar18 + uVar17 * 0x18 + 0x10);
            pbVar14 = *(byte **)(param_2 + 0x10);
            if ((bVar4 & 1) == 0) {
              pbVar12 = pbVar15 + 1;
            }
            if ((bVar3 & 1) == 0) {
              pbVar14 = param_2 + 1;
            }
            if ((bVar4 & 1) == 0) {
              if (sVar1 != 0) {
                uVar16 = 1;
                do {
                  pbVar15 = pbVar15 + 1;
                  if (*pbVar15 != *pbVar14) goto LAB_0017ab6c;
                  uVar13 = uVar13 - 1;
                  pbVar14 = pbVar14 + 1;
                } while (uVar13 != 0);
                goto LAB_0017acec;
              }
            }
            else if (sVar1 != 0) {
              iVar8 = memcmp(pbVar12,pbVar14,sVar1);
              uVar16 = (uint)(iVar8 == 0);
              goto LAB_0017acec;
            }
          }
        }
        uVar16 = 1;
        goto LAB_0017acec;
      }
      lVar18 = *param_1;
      pbVar9 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (lVar18 + uVar17 * 0x18);
      bVar2 = *pbVar9;
      sVar11 = *(size_t *)(pbVar9 + 8);
      sVar10 = (size_t)((byte)bVar2 >> 1);
    }
    bVar3 = *param_2;
    sVar1 = sVar10;
    if (((byte)bVar2 & 1) != 0) {
      sVar1 = sVar11;
    }
    sVar11 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar11 = *(size_t *)(param_2 + 8);
    }
    if (sVar1 == sVar11) {
      pbVar12 = (byte *)(lVar18 + uVar17 * 0x18);
      pbVar14 = *(byte **)(pbVar12 + 0x10);
      pbVar15 = *(byte **)(param_2 + 0x10);
      if (((byte)bVar2 & 1) == 0) {
        pbVar14 = pbVar12 + 1;
      }
      if ((bVar3 & 1) == 0) {
        pbVar15 = param_2 + 1;
      }
      sVar11 = sVar1;
      if (((byte)bVar2 & 1) == 0) {
        while (sVar11 != 0) {
          pbVar12 = pbVar12 + 1;
          if (*pbVar12 != *pbVar15) goto LAB_0017ac64;
          pbVar15 = pbVar15 + 1;
          sVar10 = sVar10 - 1;
          sVar11 = sVar10;
        }
      }
      else if ((sVar1 != 0) && (iVar8 = memcmp(pbVar14,pbVar15,sVar1), iVar8 != 0))
      goto LAB_0017ac64;
      uVar16 = 1;
    }
    else {
LAB_0017ac64:
      if (sVar1 == 1) {
        iVar8 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)(lVar18 + uVar17 * 0x18),0,0xffffffffffffffff,"*",1);
        uVar16 = (uint)(iVar8 == 0);
      }
      else {
        uVar16 = 0;
      }
    }
    if ((uVar5 == param_3) ||
       (((int)((ulong)(param_1[1] - *param_1) >> 3) * -0x55555555 - 2U == param_3 &&
        (uVar13 = FUN_0017aeb8(param_1), (uVar13 & 1) != 0)))) goto LAB_0017acec;
  }
LAB_0017ab6c:
  uVar16 = 0;
LAB_0017acec:
  return (ulong)uVar16;
}


// ===== 0017aeb8  FUN_0017aeb8 =====

bool FUN_0017aeb8(long param_1)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  bool bVar3;
  int iVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (*(long *)(param_1 + 8) + -0x18);
  bVar2 = *this;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(*(long *)(param_1 + 8) + -0x10);
  }
  if (uVar1 == 2) {
    iVar4 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      (this,0,0xffffffffffffffff,"**",2);
    bVar3 = iVar4 == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// ===== 0017af10  FUN_0017af10 =====

void FUN_0017af10(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_0020f7d8;
  *(undefined **)(param_1 + -2) = PTR_vtable_0020f7d8 + 0x18;
  *(undefined **)(param_1 + 0xe) = puVar1 + 0x68;
  puVar2 = PTR_vtable_0020f7e8;
  *param_1 = (long)(puVar1 + 0x40);
  *(undefined **)(param_1 + 1) = puVar2 + 0x10;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 1));
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
            ((basic_iostream<char,std::__ndk1::char_traits<char>> *)(param_1 + -2));
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(param_1 + 0xe));
  return;
}


// ===== 0017af9c  FUN_0017af9c =====

void FUN_0017af9c(long *param_1)

{
  undefined *puVar1;
  basic_iostream<char,std::__ndk1::char_traits<char>> *this;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_0020f7d8;
  this = (basic_iostream<char,std::__ndk1::char_traits<char>> *)
         ((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1 = PTR_vtable_0020f7d8 + 0x68;
  *(undefined **)this = PTR_vtable_0020f7d8 + 0x18;
  *(undefined **)(this + 0x80) = puVar1;
  puVar1 = PTR_vtable_0020f7e8;
  *(undefined **)(this + 0x10) = puVar2 + 0x40;
  *(undefined **)(this + 0x18) = puVar1 + 0x10;
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(this + 0x18));
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream(this);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this + 0x80));
  return;
}


// ===== 0017b030  FUN_0017b030 =====

void FUN_0017b030(basic_iostream<char,std::__ndk1::char_traits<char>> *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_vtable_0020f7d8 + 0x68;
  puVar2 = PTR_vtable_0020f7d8 + 0x40;
  puVar3 = PTR_vtable_0020f7e8 + 0x10;
  *(undefined **)param_1 = PTR_vtable_0020f7d8 + 0x18;
  *(undefined **)(param_1 + 0x80) = puVar1;
  *(undefined **)(param_1 + 0x10) = puVar2;
  *(undefined **)(param_1 + 0x18) = puVar3;
  if (((byte)param_1[0x58] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x68));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 0x18));
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream(param_1);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(param_1 + 0x80));
  operator_delete(param_1);
  return;
}


// ===== 0017b0c4  FUN_0017b0c4 =====

void FUN_0017b0c4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  basic_iostream<char,std::__ndk1::char_traits<char>> *this;
  
  puVar1 = PTR_vtable_0020f7d8;
  this = (basic_iostream<char,std::__ndk1::char_traits<char>> *)(param_1 + -2);
  *(undefined **)this = PTR_vtable_0020f7d8 + 0x18;
  *(undefined **)(param_1 + 0xe) = puVar1 + 0x68;
  puVar2 = PTR_vtable_0020f7e8;
  *param_1 = (long)(puVar1 + 0x40);
  *(undefined **)(param_1 + 1) = puVar2 + 0x10;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 1));
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream(this);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(param_1 + 0xe));
  operator_delete(this);
  return;
}


// ===== 0017b158  FUN_0017b158 =====

void FUN_0017b158(long *param_1)

{
  undefined *puVar1;
  basic_iostream<char,std::__ndk1::char_traits<char>> *this;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_0020f7d8;
  this = (basic_iostream<char,std::__ndk1::char_traits<char>> *)
         ((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1 = PTR_vtable_0020f7d8 + 0x68;
  *(undefined **)this = PTR_vtable_0020f7d8 + 0x18;
  *(undefined **)(this + 0x80) = puVar1;
  puVar1 = PTR_vtable_0020f7e8;
  *(undefined **)(this + 0x10) = puVar2 + 0x40;
  *(undefined **)(this + 0x18) = puVar1 + 0x10;
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)(this + 0x18));
  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream(this);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this + 0x80));
  operator_delete(this);
  return;
}


// ===== 0017b1f4  FUN_0017b1f4 =====

void FUN_0017b1f4(basic_streambuf<char,std::__ndk1::char_traits<char>> *param_1)

{
  *(undefined **)param_1 = PTR_vtable_0020f7e8 + 0x10;
  if (((byte)param_1[0x40] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf(param_1);
  return;
}


// ===== 0017b234  FUN_0017b234 =====

void FUN_0017b234(basic_streambuf<char,std::__ndk1::char_traits<char>> *param_1)

{
  *(undefined **)param_1 = PTR_vtable_0020f7e8 + 0x10;
  if (((byte)param_1[0x40] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017b444  FUN_0017b444 =====

ulong FUN_0017b444(long *param_1,uint param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  undefined1 **ppuVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *local_58;
  
  if (param_2 == 0xffffffff) {
    uVar4 = 0;
  }
  else {
    puVar9 = (undefined1 *)param_1[6];
    puVar5 = (undefined1 *)param_1[7];
    lVar2 = param_1[2];
    lVar3 = param_1[3];
    if (puVar9 == puVar5) {
      if ((*(byte *)(param_1 + 0xc) >> 4 & 1) == 0) {
        return 0xffffffff;
      }
      lVar8 = param_1[5];
      lVar10 = param_1[0xb];
      this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(this,'\0');
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar4 = 0x16;
      }
      else {
        uVar4 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      resize(this,uVar4,'\0');
      if (((byte)*this & 1) == 0) {
        lVar6 = (long)param_1 + 0x41;
        uVar4 = (ulong)((byte)*this >> 1);
      }
      else {
        uVar4 = param_1[9];
        lVar6 = param_1[10];
      }
      puVar5 = (undefined1 *)(lVar6 + uVar4);
      puVar9 = puVar9 + (lVar6 - lVar8);
      puVar7 = (undefined1 *)(lVar6 + (lVar10 - lVar8));
      param_1[6] = (long)puVar9;
      param_1[7] = (long)puVar5;
      param_1[5] = lVar6;
      param_1[0xb] = (long)puVar7;
    }
    else {
      puVar7 = (undefined1 *)param_1[0xb];
    }
    local_58 = puVar9 + 1;
    ppuVar1 = (undefined1 **)(param_1 + 0xb);
    if (puVar7 <= local_58) {
      ppuVar1 = &local_58;
    }
    puVar7 = *ppuVar1;
    param_1[0xb] = (long)puVar7;
    if ((*(byte *)(param_1 + 0xc) >> 3 & 1) != 0) {
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        lVar8 = (long)param_1 + 0x41;
      }
      else {
        lVar8 = param_1[10];
      }
      param_1[2] = lVar8;
      param_1[3] = lVar8 + (lVar3 - lVar2);
      param_1[4] = (long)puVar7;
    }
    if (puVar9 == puVar5) {
                    /* WARNING: Could not recover jumptable at 0x0017b5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xff);
      return uVar4;
    }
    uVar4 = (ulong)(param_2 & 0xff);
    param_1[6] = (long)local_58;
    *puVar9 = (char)param_2;
  }
  return uVar4;
}


// ===== 0017b5c4  FUN_0017b5c4 =====

void FUN_0017b5c4(long param_1,basic_string_conflict *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (param_1 + 0x40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=(this,param_2);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((*(uint *)(param_1 + 0x60) >> 3 & 1) != 0) {
    if (((byte)*this & 1) == 0) {
      lVar3 = param_1 + 0x41;
      lVar4 = lVar3 + (ulong)((byte)*this >> 1);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x50);
      lVar4 = lVar3 + *(long *)(param_1 + 0x48);
    }
    *(long *)(param_1 + 0x58) = lVar4;
    *(long *)(param_1 + 0x10) = lVar3;
    *(long *)(param_1 + 0x18) = lVar3;
    *(long *)(param_1 + 0x20) = lVar4;
  }
  if ((*(uint *)(param_1 + 0x60) >> 4 & 1) != 0) {
    bVar1 = *this;
    if (((byte)bVar1 & 1) == 0) {
      uVar5 = (ulong)((byte)bVar1 >> 1);
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (param_1 + 0x58) = this + (ulong)((byte)bVar1 >> 1) + 1;
      uVar2 = 0x16;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x48);
      uVar2 = (*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffe) - 1;
      *(ulong *)(param_1 + 0x58) = *(long *)(param_1 + 0x50) + uVar5;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize(this,uVar2,'\0');
    if (((byte)*this & 1) == 0) {
      lVar3 = param_1 + 0x41;
      uVar2 = (ulong)((byte)*this >> 1);
    }
    else {
      uVar2 = *(ulong *)(param_1 + 0x48);
      lVar3 = *(long *)(param_1 + 0x50);
    }
    *(long *)(param_1 + 0x28) = lVar3;
    *(long *)(param_1 + 0x30) = lVar3;
    *(ulong *)(param_1 + 0x38) = lVar3 + uVar2;
    if ((*(byte *)(param_1 + 0x60) & 3) != 0) {
      if (uVar5 >> 0x1f != 0) {
        lVar4 = ((uVar5 - 0x80000000) / 0x7fffffff) * 0x80000000 - (uVar5 - 0x80000000) / 0x7fffffff
        ;
        lVar3 = lVar4 + lVar3 + 0x7fffffff;
        uVar5 = (uVar5 - lVar4) - 0x7fffffff;
        *(long *)(param_1 + 0x30) = lVar3;
      }
      if (uVar5 != 0) {
        *(long *)(param_1 + 0x30) = lVar3 + (int)uVar5;
      }
    }
  }
  return;
}


// ===== 0017b6f8  FUN_0017b6f8 =====

void FUN_0017b6f8(long *param_1,basic_string_conflict *param_2)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_60;
  long local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_50;
  long local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar1 = (param_1[1] - *param_1 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * 0x5555555555555556;
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar1 = 0xaaaaaaaaaaaaaaa;
  }
  FUN_0017b840(&local_60,uVar1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_50,param_2);
  pbVar2 = local_50 + 0x18;
  local_60 = *param_1;
  local_50 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_1[1];
  if (local_50 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)local_60) {
    do {
      uVar7 = *(undefined8 *)((long)local_50 + -0x10);
      uVar6 = *(undefined8 *)((long)local_50 + -0x18);
      *(undefined8 *)(local_58 + -8) = *(undefined8 *)((long)local_50 + -8);
      *(undefined8 *)(local_58 + -0x10) = uVar7;
      *(undefined8 *)(local_58 + -0x18) = uVar6;
      *(undefined8 *)((long)local_50 + -0x10) = 0;
      *(undefined8 *)((long)local_50 + -8) = 0;
      *(undefined8 *)((long)local_50 + -0x18) = 0;
      local_50 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 ((long)local_50 + -0x18);
      local_58 = local_58 + -0x18;
    } while ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_60 != local_50);
    local_60 = *param_1;
    local_50 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               param_1[1];
  }
  *param_1 = local_58;
  param_1[1] = (long)pbVar2;
  lVar4 = param_1[2];
  param_1[2] = local_48;
  local_58 = local_60;
  local_48 = lVar4;
  FUN_0017b8b4(&local_60);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0017b840  FUN_0017b840 =====

void FUN_0017b840(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  void *pvVar1;
  void *pvVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar1 = operator_new(param_2 * 0x18);
  }
  pvVar2 = (void *)((long)pvVar1 + param_3 * 0x18);
  *param_1 = pvVar1;
  param_1[1] = pvVar2;
  param_1[2] = pvVar2;
  param_1[3] = (void *)((long)pvVar1 + param_2 * 0x18);
  return;
}


// ===== 0017b8b4  FUN_0017b8b4 =====

void FUN_0017b8b4(undefined8 *param_1)

{
  FUN_0017b8ec(param_1,param_1[1]);
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 0017b8ec  FUN_0017b8ec =====

void FUN_0017b8ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar1 = lVar2, lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x18;
    lVar2 = lVar1 + -0x18;
    if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
      operator_delete(*(void **)(lVar1 + -8));
      lVar2 = *(long *)(param_1 + 0x10);
    }
  }
  return;
}


// ===== 0017b940  FUN_0017b940 =====

bool FUN_0017b940(ulong *param_1,byte *param_2,undefined8 param_3)

{
  void *pvVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  byte *__s;
  __shared_weak_count *p_Var9;
  int iVar10;
  __shared_weak_count *p_Var11;
  void *pvVar12;
  ulong local_1f8;
  __shared_weak_count *local_1f0;
  void *local_1e8;
  ulong local_1e0;
  long local_1d8;
  void *local_1d0;
  undefined1 auStack_1c8 [16];
  undefined *local_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  uint auStack_198 [26];
  long local_130;
  undefined *local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  p_Var9 = (__shared_weak_count *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (p_Var9 != (__shared_weak_count *)0x0) {
    p_Var11 = p_Var9 + 8;
    do {
      lVar8 = *(long *)p_Var11;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
      if (bVar5) {
        *(long *)p_Var11 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
    }
  }
  if (*param_1 != 0) {
    bVar5 = true;
    goto LAB_0017bc78;
  }
  local_1b8 = PTR_construction_vtable_0020f7f8 + 0x18;
  local_100[0] = PTR_construction_vtable_0020f7f8 + 0x40;
  uStack_1b0 = 0;
  std::__ndk1::ios_base::init((ios_base *)local_100,auStack_1a8);
  puVar4 = PTR_vtable_0020f800;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_1b8 = PTR_vtable_0020f800 + 0x18;
  local_100[0] = PTR_vtable_0020f800 + 0x40;
  FUN_0017cb90(auStack_1a8);
  FUN_0017bcb0(&local_1b8,param_2,8);
  if (local_130 == 0) {
    bVar5 = false;
  }
  else {
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = (void *)0x0;
    FUN_0017a674(&local_1b8,&local_1e0,0);
    lVar8 = FUN_0017c0d0(auStack_1a8);
    if (lVar8 == 0) {
      std::__ndk1::ios_base::clear
                ((ios_base *)((long)&local_1b8 + *(long *)(local_1b8 + -0x18)),
                 *(uint *)((long)auStack_198 + *(long *)(local_1b8 + -0x18)) | 4);
    }
    if ((local_1e0 & 1) == 0) {
      if ((byte)local_1e0 < 2) {
        iVar10 = 1;
      }
      else {
        pvVar12 = (void *)((ulong)&local_1e0 | 1);
LAB_0017bab4:
        __s = *(byte **)(param_2 + 0x10);
        if ((*param_2 & 1) == 0) {
          __s = param_2 + 1;
        }
        pcVar6 = strrchr((char *)__s,0x2f);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string_conflict *)&local_1f8,(ulong)param_2,0,
                       (allocator *)(long)(((int)pcVar6 - (int)__s) + 1));
        pvVar1 = (void *)((ulong)&local_1f8 | 1);
        if ((local_1f8 & 1) != 0) {
          pvVar1 = local_1e8;
        }
        FUN_00185b9c(auStack_1c8,pvVar12,pvVar1,param_3);
        if ((local_1f8 & 1) != 0) {
          operator_delete(local_1e8);
        }
        uVar7 = FUN_00185d60(auStack_1c8);
        if ((uVar7 & 1) == 0) {
          FUN_00185c44(&local_1f8,auStack_1c8);
          p_Var9 = local_1f0;
          uVar7 = local_1f8;
          local_1f8 = 0;
          local_1f0 = (__shared_weak_count *)0x0;
          p_Var11 = (__shared_weak_count *)param_1[1];
          *param_1 = uVar7;
          param_1[1] = (ulong)p_Var9;
          if (p_Var11 != (__shared_weak_count *)0x0) {
            p_Var9 = p_Var11 + 8;
            do {
              lVar8 = *(long *)p_Var9;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
              if (bVar5) {
                *(long *)p_Var9 = lVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*(long *)p_Var11 + 0x10))(p_Var11);
              std::__ndk1::__shared_weak_count::__release_weak(p_Var11);
            }
          }
          p_Var9 = local_1f0;
          if (local_1f0 != (__shared_weak_count *)0x0) {
            p_Var11 = local_1f0 + 8;
            do {
              lVar8 = *(long *)p_Var11;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
              if (bVar5) {
                *(long *)p_Var11 = lVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*(long *)local_1f0 + 0x10))(local_1f0);
              std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
            }
          }
          if (*param_1 == 0) goto LAB_0017bc14;
          p_Var9 = (__shared_weak_count *)param_1[1];
          if (p_Var9 != (__shared_weak_count *)0x0) {
            p_Var11 = p_Var9 + 8;
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
              if (bVar5) {
                *(long *)p_Var11 = *(long *)p_Var11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            do {
              lVar8 = *(long *)p_Var11;
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
              if (bVar5) {
                *(long *)p_Var11 = lVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
              std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
            }
            p_Var9 = (__shared_weak_count *)0x0;
          }
        }
        else {
LAB_0017bc14:
          p_Var9 = (__shared_weak_count *)0x1;
        }
        iVar10 = (int)p_Var9;
        FUN_00185b34(auStack_1c8);
        if ((local_1e0 & 1) != 0) goto LAB_0017bc30;
      }
    }
    else {
      pvVar12 = local_1d0;
      if (local_1d8 != 0) goto LAB_0017bab4;
      iVar10 = 1;
LAB_0017bc30:
      operator_delete(local_1d0);
    }
    bVar5 = iVar10 == 0;
  }
  local_1b8 = puVar4 + 0x18;
  local_100[0] = puVar4 + 0x40;
  FUN_0017c074(auStack_1a8);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
            ((basic_istream<char,std::__ndk1::char_traits<char>> *)&local_1b8);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
LAB_0017bc78:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


// ===== 0017bcb0  FUN_0017bcb0 =====

void FUN_0017bcb0(long *param_1,byte *param_2,uint param_3)

{
  ios_base *this;
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  lVar1 = FUN_0017cc90(param_1 + 2,pbVar3,param_3 | 8);
  this = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
  if (lVar1 == 0) {
    uVar2 = *(uint *)(this + 0x20) | 4;
  }
  else {
    uVar2 = 0;
  }
  std::__ndk1::ios_base::clear(this,uVar2);
  return;
}


// ===== 0017bd0c  FUN_0017bd0c =====

void FUN_0017bd0c(basic_istream<char,std::__ndk1::char_traits<char>> *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0020f800 + 0x40;
  *(undefined **)param_1 = PTR_vtable_0020f800 + 0x18;
  *(undefined **)(param_1 + 0xb8) = puVar1;
  FUN_0017c074(param_1 + 0x10);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream(param_1);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(param_1 + 0xb8));
  return;
}


// ===== 0017bd60  FUN_0017bd60 =====

undefined4
FUN_0017bd60(long *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,byte *param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 uVar7;
  __shared_weak_count *p_Var8;
  __shared_weak_count *p_Var9;
  long local_68;
  __shared_weak_count *local_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  p_Var9 = (__shared_weak_count *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (p_Var9 != (__shared_weak_count *)0x0) {
    p_Var8 = p_Var9 + 8;
    do {
      lVar4 = *(long *)p_Var8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(p_Var8,0x10);
      if (bVar2) {
        *(long *)p_Var8 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
    }
  }
  if (*param_1 == 0) {
    pbVar5 = *(byte **)(param_2 + 0x10);
    pbVar6 = *(byte **)(param_5 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar5 = param_2 + 1;
    }
    if ((*param_5 & 1) == 0) {
      pbVar6 = param_5 + 1;
    }
    FUN_00185b9c(auStack_58,pbVar5,pbVar6,param_4);
    FUN_00185c44(&local_68,auStack_58);
    p_Var9 = local_60;
    lVar4 = local_68;
    local_68 = 0;
    local_60 = (__shared_weak_count *)0x0;
    p_Var8 = (__shared_weak_count *)param_1[1];
    *param_1 = lVar4;
    param_1[1] = (long)p_Var9;
    if (p_Var8 != (__shared_weak_count *)0x0) {
      p_Var9 = p_Var8 + 8;
      do {
        lVar4 = *(long *)p_Var9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
        if (bVar2) {
          *(long *)p_Var9 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
      }
    }
    p_Var9 = local_60;
    if (local_60 != (__shared_weak_count *)0x0) {
      p_Var8 = local_60 + 8;
      do {
        lVar4 = *(long *)p_Var8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(p_Var8,0x10);
        if (bVar2) {
          *(long *)p_Var8 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*(long *)local_60 + 0x10))(local_60);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
      }
    }
    if (*param_1 == 0) {
      uVar7 = 0;
    }
    else {
      p_Var9 = (__shared_weak_count *)param_1[1];
      if (p_Var9 != (__shared_weak_count *)0x0) {
        p_Var8 = p_Var9 + 8;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(p_Var8,0x10);
          if (bVar2) {
            *(long *)p_Var8 = *(long *)p_Var8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        do {
          lVar4 = *(long *)p_Var8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(p_Var8,0x10);
          if (bVar2) {
            *(long *)p_Var8 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
        }
      }
      uVar7 = 1;
    }
    FUN_00185b34(auStack_58);
  }
  else {
    uVar7 = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017bf28  FUN_0017bf28 =====

void FUN_0017bf28(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


// ===== 0017bf50  FUN_0017bf50 =====

void FUN_0017bf50(long *param_1)

{
  undefined *puVar1;
  basic_istream<char,std::__ndk1::char_traits<char>> *this;
  
  this = (basic_istream<char,std::__ndk1::char_traits<char>> *)
         ((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1 = PTR_vtable_0020f800 + 0x40;
  *(undefined **)this = PTR_vtable_0020f800 + 0x18;
  *(undefined **)(this + 0xb8) = puVar1;
  FUN_0017c074(this + 0x10);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream(this);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this + 0xb8));
  return;
}


// ===== 0017bfb0  FUN_0017bfb0 =====

void FUN_0017bfb0(basic_istream<char,std::__ndk1::char_traits<char>> *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0020f800 + 0x40;
  *(undefined **)param_1 = PTR_vtable_0020f800 + 0x18;
  *(undefined **)(param_1 + 0xb8) = puVar1;
  FUN_0017c074(param_1 + 0x10);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream(param_1);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(param_1 + 0xb8));
  operator_delete(param_1);
  return;
}


// ===== 0017c00c  FUN_0017c00c =====

void FUN_0017c00c(long *param_1)

{
  undefined *puVar1;
  basic_istream<char,std::__ndk1::char_traits<char>> *this;
  
  this = (basic_istream<char,std::__ndk1::char_traits<char>> *)
         ((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1 = PTR_vtable_0020f800 + 0x40;
  *(undefined **)this = PTR_vtable_0020f800 + 0x18;
  *(undefined **)(this + 0xb8) = puVar1;
  FUN_0017c074(this + 0x10);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream(this);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)(this + 0xb8));
  operator_delete(this);
  return;
}


// ===== 0017c074  FUN_0017c074 =====

void FUN_0017c074(basic_streambuf<char,std::__ndk1::char_traits<char>> *param_1)

{
  *(undefined **)param_1 = PTR_vtable_0020f810 + 0x10;
  FUN_0017c0d0();
  if ((param_1[0xa0] != (basic_streambuf<char,std::__ndk1::char_traits<char>>)0x0) &&
     (*(void **)(param_1 + 0x40) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x40));
  }
  if ((param_1[0xa1] != (basic_streambuf<char,std::__ndk1::char_traits<char>>)0x0) &&
     (*(void **)(param_1 + 0x68) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x68));
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf(param_1);
  return;
}


// ===== 0017c0d0  FUN_0017c0d0 =====

FILE * FUN_0017c0d0(FILE *param_1)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  
  __stream = (FILE *)param_1->_old_offset;
  if (__stream != (FILE *)0x0) {
    iVar1 = (**(code **)(*(long *)param_1 + 0x30))();
    iVar2 = fclose(__stream);
    param_1->_old_offset = 0;
    __stream = param_1;
    if (iVar2 != 0 || iVar1 != 0) {
      __stream = (FILE *)0x0;
    }
    (**(code **)(*(long *)param_1 + 0x18))(param_1,0,0);
  }
  return __stream;
}


// ===== 0017c140  FUN_0017c140 =====

void FUN_0017c140(void *param_1)

{
  FUN_0017c074();
  operator_delete(param_1);
  return;
}


// ===== 0017c164  FUN_0017c164 =====

void FUN_0017c164(long *param_1,locale *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  long *plVar6;
  void *pvVar7;
  
  (**(code **)(*param_1 + 0x30))();
  plVar6 = (long *)std::__ndk1::locale::use_facet(param_2,(id *)PTR_id_0020f818);
  param_1[0x10] = (long)plVar6;
  bVar3 = *(byte *)((long)param_1 + 0xa2);
  bVar5 = (**(code **)(*plVar6 + 0x38))();
  *(byte *)((long)param_1 + 0xa2) = bVar5 & 1;
  if (bVar3 != (bVar5 & 1)) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    if ((bVar5 & 1) == 0) {
      if (((char)param_1[0x14] == '\0') && ((long *)param_1[8] != param_1 + 0xb)) {
        *(undefined1 *)((long)param_1 + 0xa1) = 0;
        param_1[0xd] = param_1[8];
        param_1[0xe] = param_1[0xc];
        pvVar7 = operator_new__(param_1[0xc]);
        param_1[8] = (long)pvVar7;
        *(undefined1 *)(param_1 + 0x14) = 1;
      }
      else {
        param_1[0xe] = param_1[0xc];
        pvVar7 = operator_new__(param_1[0xc]);
        param_1[0xd] = (long)pvVar7;
        *(undefined1 *)((long)param_1 + 0xa1) = 1;
      }
    }
    else {
      if (((char)param_1[0x14] != '\0') && ((void *)param_1[8] != (void *)0x0)) {
        operator_delete__((void *)param_1[8]);
      }
      uVar4 = *(undefined1 *)((long)param_1 + 0xa1);
      lVar1 = param_1[0xd];
      lVar2 = param_1[0xe];
      *(undefined1 *)((long)param_1 + 0xa1) = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      *(undefined1 *)(param_1 + 0x14) = uVar4;
      param_1[0xc] = lVar2;
      param_1[8] = lVar1;
    }
  }
  return;
}


// ===== 0017c254  FUN_0017c254 =====

long FUN_0017c254(long param_1,long param_2,ulong param_3)

{
  char cVar1;
  void *pvVar2;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(char *)(param_1 + 0xa0) != '\0') && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x40));
  }
  if ((*(char *)(param_1 + 0xa1) != '\0') && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x68));
  }
  *(ulong *)(param_1 + 0x60) = param_3;
  if (param_3 < 9) {
    cVar1 = *(char *)(param_1 + 0xa2);
    *(long *)(param_1 + 0x40) = param_1 + 0x58;
    *(undefined8 *)(param_1 + 0x60) = 8;
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0xa2);
    if ((param_2 != 0) && (cVar1 != '\0')) {
      *(long *)(param_1 + 0x40) = param_2;
      *(undefined1 *)(param_1 + 0xa0) = 0;
      goto LAB_0017c2e4;
    }
    pvVar2 = operator_new__(param_3);
    *(void **)(param_1 + 0x40) = pvVar2;
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  if (cVar1 == '\0') {
    if ((long)param_3 < 9) {
      param_3 = 8;
    }
    *(ulong *)(param_1 + 0x70) = param_3;
    if (param_2 != 0) {
      *(long *)(param_1 + 0x68) = param_2;
      *(undefined1 *)(param_1 + 0xa1) = 0;
      return param_1;
    }
    pvVar2 = operator_new__(param_3);
    *(void **)(param_1 + 0x68) = pvVar2;
    *(undefined1 *)(param_1 + 0xa1) = 1;
    return param_1;
  }
LAB_0017c2e4:
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return param_1;
}


// ===== 0017c34c  FUN_0017c34c =====

undefined1  [16] FUN_0017c34c(long *param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  __off_t _Var3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((long *)param_1[0x10] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0017cb1c();
  }
  iVar1 = (**(code **)(*(long *)param_1[0x10] + 0x30))();
  lVar4 = param_1[0xf];
  if (lVar4 != 0) {
    if ((param_2 == 0) || (0 < iVar1)) {
      iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
      lVar4 = 0;
      _Var3 = -1;
      if ((iVar2 != 0) || (2 < param_3)) goto LAB_0017c3e0;
      _Var3 = iVar1 * param_2;
      if (iVar1 < 1) {
        _Var3 = 0;
      }
      iVar1 = fseeko((FILE *)param_1[0xf],_Var3,param_3);
      if (iVar1 == 0) {
        _Var3 = ftello((FILE *)param_1[0xf]);
        lVar4 = param_1[0x11];
        goto LAB_0017c3e0;
      }
    }
    lVar4 = 0;
  }
  _Var3 = -1;
LAB_0017c3e0:
  auVar5._8_8_ = _Var3;
  auVar5._0_8_ = lVar4;
  return auVar5;
}


// ===== 0017c40c  FUN_0017c40c =====

undefined1  [16] FUN_0017c40c(long *param_1,long param_2,__off_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  if (((param_1[0xf] == 0) || (iVar1 = (**(code **)(*param_1 + 0x30))(), iVar1 != 0)) ||
     (iVar1 = fseeko((FILE *)param_1[0xf],param_3,0), iVar1 != 0)) {
    param_2 = 0;
    param_3 = -1;
  }
  else {
    param_1[0x11] = param_2;
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_2;
  return auVar2;
}


// ===== 0017c940  FUN_0017c940 =====

void FUN_0017c940(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  size_t sVar7;
  undefined1 *puVar8;
  FILE *__s;
  void *__ptr;
  void *pvVar9;
  void *local_70;
  long local_68;
  undefined1 local_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_0017cb28();
    puVar8 = *(undefined1 **)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    pvVar9 = *(void **)(param_1 + 0x28);
    __ptr = pvVar9;
    if (param_2 != -1) {
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = local_5c;
        *(undefined1 **)(param_1 + 0x28) = puVar8;
        *(undefined1 **)(param_1 + 0x30) = puVar8;
        *(ulong *)(param_1 + 0x38) = (ulong)puVar8 | 1;
      }
      *puVar8 = (char)param_2;
      puVar8 = (undefined1 *)(*(long *)(param_1 + 0x30) + 1);
      *(undefined1 **)(param_1 + 0x30) = puVar8;
      __ptr = *(void **)(param_1 + 0x28);
    }
    sVar7 = (long)puVar8 - (long)__ptr;
    if (sVar7 == 0) {
LAB_0017c9ec:
      iVar4 = 0;
      if (param_2 != -1) {
        iVar4 = param_2;
      }
      goto LAB_0017cad0;
    }
    if (*(char *)(param_1 + 0xa2) == '\0') {
      local_68 = *(long *)(param_1 + 0x40);
      plVar6 = *(long **)(param_1 + 0x80);
      if (plVar6 == (long *)0x0) {
LAB_0017cb18:
                    /* WARNING: Subroutine does not return */
        FUN_0017cb1c();
      }
      uVar3 = (**(code **)(*plVar6 + 0x18))
                        (plVar6,param_1 + 0x88,__ptr,puVar8,&local_70,local_68,
                         local_68 + *(long *)(param_1 + 0x60),&local_68);
      __ptr = *(void **)(param_1 + 0x28);
      if (local_70 != __ptr) {
        do {
          if (uVar3 == 3) {
            __s = *(FILE **)(param_1 + 0x78);
            sVar7 = *(long *)(param_1 + 0x30) - (long)__ptr;
            goto LAB_0017c9d4;
          }
          if ((1 < uVar3) ||
             (sVar5 = local_68 - (long)*(void **)(param_1 + 0x40),
             sVar7 = fwrite(*(void **)(param_1 + 0x40),1,sVar5,*(FILE **)(param_1 + 0x78)),
             sVar7 != sVar5)) break;
          if (uVar3 != 1) goto LAB_0017c9e4;
          plVar6 = *(long **)(param_1 + 0x80);
          *(void **)(param_1 + 0x28) = local_70;
          *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
          if (plVar6 == (long *)0x0) goto LAB_0017cb18;
          uVar3 = (**(code **)(*plVar6 + 0x18))
                            (plVar6,param_1 + 0x88,local_70,*(undefined8 *)(param_1 + 0x30),
                             &local_70,*(long *)(param_1 + 0x40),
                             *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x60),&local_68);
          __ptr = *(void **)(param_1 + 0x28);
        } while (local_70 != __ptr);
      }
    }
    else {
      __s = *(FILE **)(param_1 + 0x78);
LAB_0017c9d4:
      sVar5 = fwrite(__ptr,1,sVar7,__s);
      if (sVar5 == sVar7) {
LAB_0017c9e4:
        *(void **)(param_1 + 0x28) = pvVar9;
        *(void **)(param_1 + 0x30) = pvVar9;
        *(undefined8 *)(param_1 + 0x38) = uVar1;
        goto LAB_0017c9ec;
      }
    }
  }
  iVar4 = -1;
LAB_0017cad0:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}


// ===== 0017cb1c  FUN_0017cb1c =====

void FUN_0017cb1c(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0017cb28  FUN_0017cb28 =====

void FUN_0017cb28(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x9c) >> 4 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (*(ulong *)(param_1 + 0x60) < 9) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else if (*(char *)(param_1 + 0xa2) == '\0') {
      lVar1 = *(long *)(param_1 + 0x68);
      *(long *)(param_1 + 0x28) = lVar1;
      *(long *)(param_1 + 0x30) = lVar1;
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x70) + lVar1 + -1;
    }
    else {
      lVar1 = *(long *)(param_1 + 0x40);
      *(long *)(param_1 + 0x28) = lVar1;
      *(long *)(param_1 + 0x30) = lVar1;
      *(ulong *)(param_1 + 0x38) = *(ulong *)(param_1 + 0x60) + lVar1 + -1;
    }
    *(undefined4 *)(param_1 + 0x9c) = 0x10;
  }
  return;
}


// ===== 0017cb90  FUN_0017cb90 =====

void FUN_0017cb90(basic_streambuf<char,std::__ndk1::char_traits<char>> *param_1)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  locale alStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf(param_1);
  puVar1 = PTR_vtable_0020f810 + 0x10;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  *(undefined **)param_1 = puVar1;
  std::__ndk1::locale::locale(alStack_40,(locale *)(param_1 + 8));
  uVar4 = std::__ndk1::locale::has_facet(alStack_40,(id *)PTR_id_0020f818);
  std::__ndk1::locale::~locale(alStack_40);
  if ((uVar4 & 1) != 0) {
    std::__ndk1::locale::locale(alStack_40,(locale *)(param_1 + 8));
    uVar5 = std::__ndk1::locale::use_facet(alStack_40,(id *)PTR_id_0020f818);
    *(undefined8 *)(param_1 + 0x80) = uVar5;
    std::__ndk1::locale::~locale(alStack_40);
    bVar3 = (**(code **)(**(long **)(param_1 + 0x80) + 0x38))();
    param_1[0xa2] = (basic_streambuf<char,std::__ndk1::char_traits<char>>)(bVar3 & 1);
  }
  (**(code **)(*(long *)param_1 + 0x18))(param_1,0,0x1000);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017cc90  FUN_0017cc90 =====

FILE * FUN_0017cc90(FILE *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  FILE *pFVar3;
  FILE *__stream;
  char *__modes;
  
  if (param_1->_old_offset != 0) {
    return (FILE *)0x0;
  }
  uVar1 = param_3 & 0xfffffffd;
  __modes = "we";
  if ((int)uVar1 < 0x30) {
    pFVar3 = (FILE *)0x0;
    switch(uVar1) {
    case 1:
    case 0x11:
      __modes = "ae";
      break;
    default:
      goto switchD_0017ccf4_caseD_2;
    case 5:
    case 0x15:
      __modes = "abe";
      break;
    case 8:
      __modes = "re";
      break;
    case 9:
    case 0x19:
      __modes = "a+e";
      break;
    case 0xc:
      __modes = "rbe";
      break;
    case 0xd:
    case 0x1d:
      __modes = "a+be";
      break;
    case 0x10:
      break;
    case 0x14:
switchD_0017ccf4_caseD_14:
      __modes = "wbe";
      break;
    case 0x18:
      __modes = "r+e";
      break;
    case 0x1c:
      __modes = "r+be";
    }
  }
  else if ((int)uVar1 < 0x38) {
    if (uVar1 != 0x30) {
      if (uVar1 != 0x34) {
        return (FILE *)0x0;
      }
      goto switchD_0017ccf4_caseD_14;
    }
  }
  else if (uVar1 == 0x38) {
    __modes = "w+e";
  }
  else {
    if (uVar1 != 0x3c) {
      return (FILE *)0x0;
    }
    __modes = "w+be";
  }
  __stream = fopen(param_2,__modes);
  param_1->_old_offset = (__off_t)__stream;
  pFVar3 = __stream;
  if (((__stream != (FILE *)0x0) &&
      (*(uint *)&param_1->__pad1 = param_3, pFVar3 = param_1, (param_3 >> 1 & 1) != 0)) &&
     (iVar2 = fseek(__stream,0,2), iVar2 != 0)) {
    fclose((FILE *)param_1->_old_offset);
    param_1->_old_offset = 0;
    pFVar3 = (FILE *)0x0;
  }
switchD_0017ccf4_caseD_2:
  return pFVar3;
}


// ===== 0017cde8  FUN_0017cde8 =====

void FUN_0017cde8(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x58) + 0x1a);
  if ((uVar1 < 0xf) && ((1 << (ulong)(uVar1 & 0x1f) & 0x400cU) != 0)) {
    FUN_0017dc50(auStack_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017ce54  FUN_0017ce54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017ce54(undefined8 *param_1,float param_2,float param_3,float *param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = (float)FUN_0017551c(param_4 + 4);
  param_3 = param_3 * DAT_00144b80;
  fVar4 = powf(fVar3 * DAT_00144b80,param_2);
  fVar3 = param_2;
  fVar5 = powf(param_3,param_2);
  uVar1 = _UNK_001462a8;
  uVar2 = _DAT_001462a0;
  *(undefined2 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[1] = uVar1;
  *param_1 = uVar2;
  param_1[3] = uVar1;
  param_1[2] = uVar2;
  fVar6 = (float)FUN_0017551c(param_4 + 8,param_5);
  uVar2 = FUN_0018f6e4(fVar6 * param_2,fVar3 * param_2,param_1);
  FUN_0017551c(param_4 + 0xc,param_5);
  FUN_0018f6e4(uVar2);
  uVar2 = FUN_0018f7e0(fVar4,fVar5);
  if (*(char *)(param_4 + 2) == '\0') {
    fVar3 = (float)FUN_00178d34(*(undefined8 *)param_4,param_5);
  }
  else {
    fVar3 = *param_4;
  }
  uVar2 = FUN_0018f9b8(fVar3 * param_2,uVar2,2);
  fVar3 = (float)FUN_0017551c(param_4 + 0xc,param_5);
  FUN_0018f6e4(-fVar3,-fVar5,uVar2);
  return;
}


// ===== 0017cf70  FUN_0017cf70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017cf70(undefined8 *param_1,undefined1 param_2 [16],ulong param_3,long *param_4,
                 undefined4 param_5,uint param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  
  uVar2 = _UNK_001462a8;
  uVar1 = _DAT_001462a0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x24) = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  if ((char)param_4[0xf] == '\0') {
    uVar7 = FUN_0017551c(param_4 + 5,param_5);
  }
  else {
    if ((char)param_4[8] == '\0') {
      uVar7 = FUN_00178d34(param_4[7],param_5);
    }
    else {
      uVar7 = (ulong)*(uint *)(param_4 + 7);
    }
    if ((char)param_4[10] == '\0') {
      param_3 = FUN_00178d34(param_4[9],param_5);
    }
    else {
      param_3 = (ulong)*(uint *)(param_4 + 9);
    }
  }
  fVar5 = 0.0;
  if (((param_6 & 1) != 0) && ((char)param_4[6] == '\0')) {
    fVar5 = (float)FUN_0017e2e0(param_4[5],param_5);
  }
  lVar4 = *param_4;
  uVar1 = FUN_0018f6e4(uVar7,param_3,param_1);
  fVar8 = (float)param_3;
  if (lVar4 == 0) {
    if ((char)param_4[2] == '\0') {
      fVar6 = (float)FUN_00178d34(param_4[1],param_5);
    }
    else {
      fVar6 = *(float *)(param_4 + 1);
    }
    uVar7 = (ulong)(uint)(fVar6 + fVar5);
    uVar2 = 2;
  }
  else {
    lVar4 = *param_4;
    if (*(char *)(lVar4 + 0x28) == '\0') {
      fVar6 = (float)FUN_00178d34(*(undefined8 *)(lVar4 + 0x20),param_5);
    }
    else {
      fVar6 = *(float *)(lVar4 + 0x20);
    }
    uVar1 = FUN_0018f9b8(fVar6 + fVar5,uVar1,2);
    lVar4 = *param_4;
    if (*(char *)(lVar4 + 0x18) == '\0') {
      uVar7 = FUN_00178d34(*(undefined8 *)(lVar4 + 0x10),param_5);
    }
    else {
      uVar7 = (ulong)*(uint *)(lVar4 + 0x10);
    }
    uVar1 = FUN_0018f9b8(uVar7,uVar1,1);
    puVar3 = (uint *)*param_4;
    if ((char)puVar3[2] == '\0') {
      uVar7 = FUN_00178d34(*(undefined8 *)puVar3,param_5);
    }
    else {
      uVar7 = (ulong)*puVar3;
    }
    uVar2 = 0;
  }
  uVar1 = FUN_0018f9b8(uVar7,uVar1,uVar2);
  fVar5 = (float)FUN_0017551c(param_4 + 3,param_5);
  fVar8 = fVar8 * DAT_00144b80;
  uVar1 = FUN_0018f7e0(fVar5 * DAT_00144b80,fVar8,uVar1);
  fVar5 = (float)FUN_0017551c(param_4 + 0xb,param_5);
  FUN_0018f6e4(-fVar5,-fVar8,uVar1);
  return;
}


// ===== 0017d164  FUN_0017d164 =====

uint FUN_0017d164(long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((int)uVar1 < 2) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        puVar4 = (undefined8 *)(param_1 + 0x68);
        do {
          if (*(char *)(puVar4 + 1) == '\0') {
            uVar5 = FUN_00178d34(*puVar4,param_2);
            uVar1 = *(uint *)(param_1 + 0xb8);
          }
          else {
            uVar5 = *(undefined4 *)puVar4;
          }
          *(undefined4 *)(param_3 + uVar2 * 4) = uVar5;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 2;
        } while ((long)uVar2 < (long)(int)(uVar1 - 1));
      }
      *(undefined4 *)(param_3 + (uVar2 & 0xffffffff) * 4) =
           *(undefined4 *)(param_3 + (long)((int)uVar2 + -1) * 4);
      lVar3 = param_1 + (uVar2 & 0xffffffff) * 0x10;
      puVar4 = (undefined8 *)(lVar3 + 0x68);
      if (*(char *)(lVar3 + 0x70) == '\0') {
        uVar5 = FUN_00178d34(*puVar4,param_2);
        uVar1 = *(uint *)(param_1 + 0xb8);
      }
      else {
        uVar5 = *(undefined4 *)puVar4;
      }
      uVar1 = uVar1 + 1;
      *(undefined4 *)(param_3 + (ulong)((int)uVar2 + 1) * 4) = uVar5;
    }
    else if (0 < (int)uVar1) {
      lVar3 = 0;
      puVar4 = (undefined8 *)(param_1 + 0x68);
      do {
        if (*(char *)(puVar4 + 1) == '\0') {
          uVar5 = FUN_00178d34(*puVar4,param_2);
          uVar1 = *(uint *)(param_1 + 0xb8);
        }
        else {
          uVar5 = *(undefined4 *)puVar4;
        }
        *(undefined4 *)(param_3 + lVar3 * 4) = uVar5;
        lVar3 = lVar3 + 1;
        puVar4 = puVar4 + 2;
      } while (lVar3 < (int)uVar1);
    }
  }
  return uVar1;
}


// ===== 0017d27c  FUN_0017d27c =====

uint FUN_0017d27c(long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x100);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((int)uVar1 < 2) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        puVar4 = (undefined8 *)(param_1 + 0xb0);
        do {
          if (*(char *)(puVar4 + 1) == '\0') {
            uVar5 = FUN_00178d34(*puVar4,param_2);
            uVar1 = *(uint *)(param_1 + 0x100);
          }
          else {
            uVar5 = *(undefined4 *)puVar4;
          }
          *(undefined4 *)(param_3 + uVar2 * 4) = uVar5;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 2;
        } while ((long)uVar2 < (long)(int)(uVar1 - 1));
      }
      *(undefined4 *)(param_3 + (uVar2 & 0xffffffff) * 4) =
           *(undefined4 *)(param_3 + (long)((int)uVar2 + -1) * 4);
      lVar3 = param_1 + (uVar2 & 0xffffffff) * 0x10;
      puVar4 = (undefined8 *)(lVar3 + 0xb0);
      if (*(char *)(lVar3 + 0xb8) == '\0') {
        uVar5 = FUN_00178d34(*puVar4,param_2);
        uVar1 = *(uint *)(param_1 + 0x100);
      }
      else {
        uVar5 = *(undefined4 *)puVar4;
      }
      uVar1 = uVar1 + 1;
      *(undefined4 *)(param_3 + (ulong)((int)uVar2 + 1) * 4) = uVar5;
    }
    else if (0 < (int)uVar1) {
      lVar3 = 0;
      puVar4 = (undefined8 *)(param_1 + 0xb0);
      do {
        if (*(char *)(puVar4 + 1) == '\0') {
          uVar5 = FUN_00178d34(*puVar4,param_2);
          uVar1 = *(uint *)(param_1 + 0x100);
        }
        else {
          uVar5 = *(undefined4 *)puVar4;
        }
        *(undefined4 *)(param_3 + lVar3 * 4) = uVar5;
        lVar3 = lVar3 + 1;
        puVar4 = puVar4 + 2;
      } while (lVar3 < (int)uVar1);
    }
  }
  return uVar1;
}


// ===== 0017d394  FUN_0017d394 =====

void FUN_0017d394(long param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  float *pfVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong local_b8;
  float *local_b0;
  long local_a8;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  long local_80;
  
  lVar8 = tpidr_el0;
  local_80 = *(long *)(lVar8 + 0x28);
  FUN_0017d778(&local_b0,param_1 + 0x70,param_3);
  pfVar9 = local_b0;
  if (local_b0 == (float *)0x0) goto LAB_0017d730;
  iVar7 = *(int *)(param_1 + 0x90);
  iVar13 = (int)((ulong)(local_a8 - (long)local_b0) >> 2);
  iVar17 = iVar13 + 3;
  if (-1 < iVar13) {
    iVar17 = iVar13;
  }
  iVar2 = iVar17 >> 2;
  if (iVar7 <= iVar17 >> 2 && -1 < iVar7) {
    iVar2 = iVar7;
  }
  uVar19 = iVar13 + iVar2 * -4;
  if ((uVar19 & 1) == 0) {
    uVar1 = uVar19;
    if ((int)uVar19 < 0) {
      uVar1 = uVar19 + 1;
    }
    if (((int)uVar19 < 4) && ((int)uVar1 >> 1 < iVar2)) goto LAB_0017d434;
  }
  else {
LAB_0017d434:
    uVar19 = 0;
  }
  param_2[1] = *param_2;
  if (0 < iVar2) {
    iVar7 = iVar2 << 2;
    lVar14 = (long)(int)uVar19;
    iVar17 = 0;
    uVar1 = 0;
    pfVar16 = local_b0;
    do {
      fVar3 = *pfVar16;
      uVar4 = (ulong)(uint)fVar3;
      local_88 = pfVar16[1];
      local_98 = 0;
      local_90 = NEON_rev64(*(undefined8 *)(pfVar16 + 2),4);
      if (uVar19 == 0) {
        lVar10 = FUN_00173340(0x3f800000,&local_98);
        local_b8 = uVar4 | lVar10 << 0x20;
        puVar5 = (ulong *)param_2[1];
        if (puVar5 < (ulong *)param_2[2]) {
          *puVar5 = local_b8;
          param_2[1] = puVar5 + 1;
        }
        else {
          FUN_0017e8b0(param_2,&local_b8);
        }
LAB_0017d6e4:
        puVar6 = (undefined8 *)*param_2;
        pfVar16 = pfVar16 + 4;
        if (puVar6 == (undefined8 *)param_2[1]) {
          local_b8 = 0xffffffff00000000;
          if (puVar6 < (undefined8 *)param_2[2]) {
            *puVar6 = 0xffffffff00000000;
            param_2[1] = puVar6 + 1;
          }
          else {
            FUN_0017e8b0(param_2,&local_b8);
          }
        }
      }
      else {
        if (uVar1 != uVar19) {
          if ((int)uVar1 < (int)uVar19) {
            lVar10 = 0;
            lVar18 = (long)(int)uVar1;
            lVar12 = (lVar18 << 0x20) + 0x100000000;
            lVar21 = (lVar18 << 0x20) + -0x100000000;
            lVar15 = (lVar18 << 0x20) + -0x200000000;
            pfVar20 = pfVar9 + (long)iVar7 + (long)(int)uVar1 + 1;
            do {
              fVar22 = pfVar20[-1];
              if (fVar22 < fVar3 == (NAN(fVar22) || NAN(fVar3))) {
                if (uVar1 + (int)lVar10 == 0) {
                  fVar24 = pfVar9[(long)iVar7 + 1];
                }
                else {
                  fVar23 = *(float *)((long)pfVar9 + (lVar15 >> 0x1e) + (long)iVar7 * 4);
                  fVar24 = *(float *)((long)pfVar9 + (lVar21 >> 0x1e) + (long)iVar7 * 4);
                  fVar24 = ((*(float *)((long)pfVar9 + (lVar12 >> 0x1e) + (long)iVar7 * 4) - fVar24)
                           * (fVar3 - fVar23)) / (fVar22 - fVar23) + fVar24;
                }
                lVar12 = FUN_00173340(fVar24,&local_98);
                local_b8 = uVar4 | lVar12 << 0x20;
                puVar5 = (ulong *)param_2[1];
                if (puVar5 < (ulong *)param_2[2]) {
                  *puVar5 = local_b8;
                  param_2[1] = puVar5 + 1;
                }
                else {
                  FUN_0017e8b0(param_2,&local_b8);
                }
                uVar1 = uVar1 + (int)lVar10 + 2;
                goto LAB_0017d6e4;
              }
              lVar11 = FUN_00173340(*pfVar20,&local_98);
              local_b8 = (ulong)(uint)fVar22 | lVar11 << 0x20;
              puVar5 = (ulong *)param_2[1];
              if (puVar5 < (ulong *)param_2[2]) {
                *puVar5 = local_b8;
                param_2[1] = puVar5 + 1;
              }
              else {
                FUN_0017e8b0(param_2,&local_b8);
              }
              lVar10 = lVar10 + 2;
              lVar12 = lVar12 + 0x200000000;
              lVar21 = lVar21 + 0x200000000;
              lVar15 = lVar15 + 0x200000000;
              pfVar20 = pfVar20 + 2;
            } while (lVar18 + lVar10 < lVar14);
            uVar1 = uVar1 + (int)lVar10;
          }
          goto LAB_0017d6e4;
        }
        fVar24 = pfVar9[(long)iVar7 + lVar14 + -2];
        fVar22 = pfVar9[(long)iVar7 + lVar14 + -1];
        if (fVar24 < fVar3 == (NAN(fVar24) || NAN(fVar3))) {
          fVar22 = ((fVar22 - pfVar9[(long)iVar7 + lVar14 + -3]) *
                   (fVar3 - pfVar9[(long)iVar7 + lVar14 + -4])) /
                   (fVar24 - pfVar9[(long)iVar7 + lVar14 + -4]) + pfVar9[(long)iVar7 + lVar14 + -3];
        }
        lVar10 = FUN_00173340(fVar22,&local_98);
        local_b8 = uVar4 | lVar10 << 0x20;
        puVar5 = (ulong *)param_2[1];
        uVar1 = uVar19;
        if (puVar5 < (ulong *)param_2[2]) {
          *puVar5 = local_b8;
          param_2[1] = puVar5 + 1;
        }
        else {
          FUN_0017e8b0(param_2,&local_b8);
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != iVar2);
  }
LAB_0017d730:
  if (local_b0 != (float *)0x0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar8 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017d778  FUN_0017d778 =====

void FUN_0017d778(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) != '\0') {
    FUN_0017e4a4(param_1,param_2);
    return;
  }
  FUN_0017e42c(*param_2);
  return;
}


// ===== 0017d798  FUN_0017d798 =====

void FUN_0017d798(undefined1 param_1 [16],float param_2,long param_3,long *param_4,
                 undefined4 param_5)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined4 uVar11;
  float local_48;
  float fStack_44;
  
  lVar3 = *param_4;
  if (lVar3 == 0) {
    iVar1 = *(int *)(param_3 + 0x1c);
    pvVar2 = operator_new(0x70);
    param_2 = 0.0;
    if (iVar1 == 1) {
      FUN_0018ddc8(pvVar2);
    }
    else {
      FUN_0018de60(0,0,0,0,0,0,pvVar2);
    }
    lVar3 = *param_4;
    *param_4 = (long)pvVar2;
    if (lVar3 != 0) {
      FUN_00178cfc(param_4);
    }
    lVar3 = *param_4;
    *(undefined4 *)(lVar3 + 4) = 0;
  }
  else if (*(char *)(param_3 + 0x88) != '\0') goto LAB_0017d840;
  FUN_0017d394(param_3,lVar3 + 0x10,param_5);
LAB_0017d840:
  iVar1 = *(int *)(param_3 + 0x1c);
  fVar4 = (float)FUN_0017551c(param_3 + 0x20,param_5);
  fVar7 = param_2;
  fVar5 = (float)FUN_0017551c(param_3 + 0x30,param_5);
  *(float *)(*param_4 + 0x2c) = fVar4;
  *(float *)(*param_4 + 0x30) = param_2;
  if (iVar1 == 1) {
    *(float *)(*param_4 + 0x34) = fVar5;
    *(float *)(*param_4 + 0x38) = fVar7;
  }
  else {
    fVar8 = ABS(fVar5 - fVar4);
    fVar10 = ABS(fVar7 - param_2);
    fVar6 = fVar8;
    if (fVar8 <= fVar10) {
      fVar6 = fVar10;
    }
    fVar8 = (float)NEON_fminnm(fVar8,fVar10);
    dVar9 = (double)NEON_fmadd((double)fVar8,0x3fd8000000000000,(double)fVar6);
    *(float *)(*param_4 + 0x3c) = (float)dVar9;
    if (*(char *)(param_3 + 0x48) == '\0') {
      fVar6 = (float)FUN_00178d34(*(undefined8 *)(param_3 + 0x40),param_5);
    }
    else {
      fVar6 = *(float *)(param_3 + 0x40);
    }
    fVar10 = ABS(fVar6 * DAT_00144b80 + -1.0);
    fVar8 = DAT_00144b1c;
    if (fVar10 < DAT_00144b68 == (NAN(fVar10) || NAN(DAT_00144b68))) {
      fVar8 = fVar6 * DAT_00144b80;
    }
    fVar7 = atan2f(fVar7 - param_2,fVar5 - fVar4);
    dVar9 = (double)fVar7 * DAT_00146340;
    if (*(char *)(param_3 + 0x58) == '\0') {
      fVar7 = (float)FUN_00178d34(*(undefined8 *)(param_3 + 0x50),param_5);
    }
    else {
      fVar7 = *(float *)(param_3 + 0x50);
    }
    lVar3 = *param_4;
    uVar11 = *(undefined4 *)(lVar3 + 0x2c);
    sincosf((float)((double)(fVar7 + (float)dVar9) * DAT_00146390),&fStack_44,&local_48);
    uVar11 = NEON_fmadd(*(float *)(lVar3 + 0x3c) * fVar8,local_48,uVar11);
    *(undefined4 *)(lVar3 + 0x34) = uVar11;
    lVar3 = *param_4;
    uVar11 = NEON_fmadd(fStack_44 * fVar8,*(undefined4 *)(lVar3 + 0x3c),
                        *(undefined4 *)(lVar3 + 0x30));
    *(undefined4 *)(lVar3 + 0x38) = uVar11;
    *(undefined4 *)(*param_4 + 0x40) = 0;
  }
  return;
}


// ===== 0017d9c4  FUN_0017d9c4 =====

void FUN_0017d9c4(long param_1,byte *param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  __shared_weak_count *p_Var9;
  undefined8 local_48;
  __shared_weak_count *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if ((*param_2 & 1) == 0) {
    if (*param_2 >> 1 == 0) goto LAB_0017daa8;
  }
  else if (*(long *)(param_2 + 8) == 0) goto LAB_0017daa8;
  uVar5 = FUN_0017dad0();
  if ((*param_2 & 1) == 0) {
    pbVar6 = param_2 + 1;
    uVar7 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar7 = *(ulong *)(param_2 + 8);
    pbVar6 = *(byte **)(param_2 + 0x10);
  }
  FUN_0018ede4(&local_48,uVar5,pbVar6,uVar7);
  p_Var1 = local_40;
  uVar5 = local_48;
  local_48 = 0;
  local_40 = (__shared_weak_count *)0x0;
  p_Var9 = *(__shared_weak_count **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  *(__shared_weak_count **)(param_1 + 0x48) = p_Var1;
  if (p_Var9 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var9 + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
    }
  }
  p_Var1 = local_40;
  if (local_40 != (__shared_weak_count *)0x0) {
    p_Var9 = local_40 + 8;
    do {
      lVar8 = *(long *)p_Var9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
      if (bVar3) {
        *(long *)p_Var9 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)local_40 + 0x10))(local_40);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
LAB_0017daa8:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0017dad0  FUN_0017dad0 =====

undefined * FUN_0017dad0(void)

{
  int iVar1;
  
  if (((DAT_00214cb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214cb0), iVar1 != 0)) {
    FUN_0018ed0c(&DAT_00214ca8);
    __cxa_atexit(PTR_DAT_0020f820,&DAT_00214ca8,&PTR_LOOP_002086b0);
    __cxa_guard_release(&DAT_00214cb0);
  }
  return &DAT_00214ca8;
}


// ===== 0017db48  FUN_0017db48 =====

void FUN_0017db48(long param_1,byte *param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  __shared_weak_count *p_Var7;
  undefined8 local_48;
  __shared_weak_count *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if ((*param_2 & 1) == 0) {
    if (*param_2 >> 1 == 0) goto LAB_0017dc28;
  }
  else if (*(long *)(param_2 + 8) == 0) goto LAB_0017dc28;
  uVar5 = FUN_0017dad0();
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  FUN_0018ed44(&local_48,uVar5,param_2);
  p_Var1 = local_40;
  uVar5 = local_48;
  local_48 = 0;
  local_40 = (__shared_weak_count *)0x0;
  p_Var7 = *(__shared_weak_count **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  *(__shared_weak_count **)(param_1 + 0x48) = p_Var1;
  if (p_Var7 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var7 + 8;
    do {
      lVar6 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
    }
  }
  p_Var1 = local_40;
  if (local_40 != (__shared_weak_count *)0x0) {
    p_Var7 = local_40 + 8;
    do {
      lVar6 = *(long *)p_Var7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var7,0x10);
      if (bVar3) {
        *(long *)p_Var7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)local_40 + 0x10))(local_40);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
LAB_0017dc28:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0017dc50  FUN_0017dc50 =====

void FUN_0017dc50(undefined8 param_1,long param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  __shared_weak_count *local_60;
  __shared_weak_count *local_58;
  long local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  plVar8 = (long *)(param_2 + 0x20);
  plVar5 = (long *)*plVar8;
  plVar6 = *(long **)(param_2 + 0x28);
  if (plVar5 != plVar6) {
    do {
      plVar6 = plVar6 + -2;
      lVar9 = *plVar6;
      if (*(ushort *)(lVar9 + 0x1a) - 2 < 2) {
        FUN_0017dc50(param_1,lVar9);
        plVar5 = (long *)*plVar8;
      }
      else if ((*(ushort *)(lVar9 + 0x1a) == 0xe) && (*(long *)(lVar9 + 0x20) == 0)) {
        local_58 = (__shared_weak_count *)operator_new(0x60);
        *(undefined8 *)(local_58 + 8) = 0;
        *(undefined8 *)(local_58 + 0x10) = 0;
        local_60 = local_58 + 0x18;
        *(undefined8 *)local_60 = 0;
        *(undefined ***)local_58 = &PTR_FUN_002090e0;
        *(undefined8 *)(local_58 + 0x20) = 0;
        *(undefined8 *)(local_58 + 0x28) = 0;
        *(undefined4 *)(local_58 + 0x30) = 0x30001;
        *(undefined8 *)(local_58 + 0x40) = 0;
        *(undefined8 *)(local_58 + 0x38) = 0;
        *(undefined8 *)(local_58 + 0x50) = 0;
        *(undefined8 *)(local_58 + 0x48) = 0;
        *(undefined8 *)(local_58 + 0x58) = 0;
        FUN_0017dddc(lVar9,&local_60);
        this = local_58;
        if (local_58 != (__shared_weak_count *)0x0) {
          p_Var1 = local_58 + 8;
          do {
            lVar7 = *(long *)p_Var1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar3) {
              *(long *)p_Var1 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*(long *)local_58 + 0x10))(local_58);
            std::__ndk1::__shared_weak_count::__release_weak(this);
          }
        }
        lVar9 = *(long *)(lVar9 + 0x20);
        plVar5 = (long *)*plVar8;
        local_50 = lVar9 + 0x20;
        if (plVar5 != plVar6) {
          do {
            FUN_0017e108(&local_50,plVar5);
            plVar5 = plVar5 + 2;
          } while (plVar6 != plVar5);
          plVar5 = (long *)*plVar8;
        }
        FUN_0017de40(plVar8,plVar5,plVar6);
        FUN_0017dc50(param_1,lVar9);
        break;
      }
    } while (plVar6 != plVar5);
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0017dddc  FUN_0017dddc =====

void FUN_0017dddc(long param_1,undefined8 *param_2)

{
  __shared_weak_count *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  __shared_weak_count *this;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  this = *(__shared_weak_count **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar6 = *(long *)p_Var1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 0017de40  FUN_0017de40 =====

undefined8 * FUN_0017de40(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  __shared_weak_count *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  __shared_weak_count *this;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_2 != param_3) {
    puVar8 = *(undefined8 **)(param_1 + 8);
    puVar7 = param_2;
    if (param_3 != puVar8) {
      do {
        uVar2 = *param_3;
        uVar3 = param_3[1];
        *param_3 = 0;
        param_3[1] = 0;
        this = (__shared_weak_count *)puVar7[1];
        *puVar7 = uVar2;
        puVar7[1] = uVar3;
        if (this != (__shared_weak_count *)0x0) {
          p_Var1 = this + 8;
          do {
            lVar6 = *(long *)p_Var1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar5) {
              *(long *)p_Var1 = lVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*(long *)this + 0x10))(this);
            std::__ndk1::__shared_weak_count::__release_weak(this);
          }
        }
        param_3 = param_3 + 2;
        puVar7 = puVar7 + 2;
      } while (param_3 != puVar8);
      param_3 = *(undefined8 **)(param_1 + 8);
    }
    while (param_3 != puVar7) {
      param_3 = param_3 + -2;
      FUN_0017e0b0(param_3);
    }
    *(undefined8 **)(param_1 + 8) = puVar7;
  }
  return param_2;
}


// ===== 0017df0c  FUN_0017df0c =====

void FUN_0017df0c(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_002090e0;
  FUN_0017dfec(param_1 + 0x50);
  FUN_0017e044(param_1 + 0x38);
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 0017df54  FUN_0017df54 =====

void FUN_0017df54(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_002090e0;
  FUN_0017dfec(param_1 + 0x50);
  FUN_0017e044(param_1 + 0x38);
  if (((byte)param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0017dfa4  FUN_0017dfa4 =====

void FUN_0017dfa4(long param_1)

{
  FUN_0017dfec(param_1 + 0x50);
  FUN_0017e044(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x28));
  return;
}


// ===== 0017dfec  FUN_0017dfec =====

void FUN_0017dfec(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 8);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 0017e044  FUN_0017e044 =====

void FUN_0017e044(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[1];
  pvVar1 = pvVar3;
  if (pvVar2 != pvVar3) {
    do {
      pvVar2 = (void *)((long)pvVar2 + -0x10);
      FUN_0017e0b0(pvVar2);
    } while (pvVar3 != pvVar2);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 0017e0b0  FUN_0017e0b0 =====

void FUN_0017e0b0(long param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  
  this = *(__shared_weak_count **)(param_1 + 8);
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      return;
    }
  }
  return;
}


// ===== 0017e108  FUN_0017e108 =====

undefined8 * FUN_0017e108(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  void *local_70;
  undefined8 *puStack_68;
  undefined8 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar6 = (long *)*param_1;
  puVar2 = (undefined8 *)plVar6[1];
  if (puVar2 < (undefined8 *)plVar6[2]) {
    uVar8 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar8;
    *param_2 = 0;
    param_2[1] = 0;
    plVar6[1] = (long)(puVar2 + 2);
  }
  else {
    lVar7 = (long)puVar2 - *plVar6 >> 4;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = plVar6[2] - *plVar6;
    uVar5 = lVar4 >> 3;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    plStack_50 = plVar6 + 2;
    if (0x7fffffffffffffe < (ulong)(lVar4 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    local_58 = (void *)0x0;
    if (uVar1 == 0) {
      local_70 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_70 = operator_new(uVar1 << 4);
    }
    puStack_68 = (undefined8 *)((long)local_70 + lVar7 * 0x10);
    uVar8 = *param_2;
    local_58 = (void *)((long)local_70 + uVar1 * 0x10);
    local_60 = puStack_68 + 2;
    puStack_68[1] = param_2[1];
    *puStack_68 = uVar8;
    *param_2 = 0;
    param_2[1] = 0;
    FUN_0017e220(plVar6,&local_70);
    FUN_0017e290(&local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017e220  FUN_0017e220 =====

void FUN_0017e220(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar5;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if ((undefined8 *)param_1[1] == puVar1) {
    lVar2 = param_2[1];
  }
  else {
    lVar2 = param_2[1];
    puVar3 = (undefined8 *)param_1[1];
    do {
      puVar4 = puVar3 + -2;
      uVar5 = *puVar4;
      *(undefined8 *)(lVar2 + -8) = puVar3[-1];
      *(undefined8 *)(lVar2 + -0x10) = uVar5;
      *puVar4 = 0;
      puVar3[-1] = 0;
      lVar2 = param_2[1] + -0x10;
      param_2[1] = lVar2;
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    puVar1 = (undefined8 *)*param_1;
  }
  *param_1 = lVar2;
  param_2[1] = puVar1;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}


// ===== 0017e290  FUN_0017e290 =====

void FUN_0017e290(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_0017e0b0();
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 0017e2e0  FUN_0017e2e0 =====

undefined1  [16] FUN_0017e2e0(long *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 auStack_48 [32];
  long local_28;
  
  pfVar1 = (float *)*param_1;
  pfVar2 = (float *)param_1[1];
  if (pfVar1 != pfVar2) {
    fVar8 = *pfVar1;
    fVar5 = (float)param_2;
    if ((fVar8 < fVar5 != (NAN(fVar8) || NAN(fVar5))) &&
       (fVar9 = pfVar2[-0xf], fVar9 != fVar5 && fVar9 < fVar5 == (NAN(fVar9) || NAN(fVar5)))) {
      while( true ) {
        pfVar4 = pfVar1 + 0x10;
        if ((fVar8 == fVar5 || fVar8 < fVar5 != (NAN(fVar8) || NAN(fVar5))) &&
           (fVar9 = pfVar1[1], fVar9 != fVar5 && fVar9 < fVar5 == (NAN(fVar9) || NAN(fVar5)))) {
          if (*(long *)(pfVar1 + 2) == 0) {
            fVar5 = 0.0;
          }
          else {
            fVar5 = (float)FUN_0018f1ac((fVar5 - fVar8) / (fVar9 - fVar8));
          }
          lVar3 = tpidr_el0;
          local_28 = *(long *)(lVar3 + 0x28);
          if (*(char *)(pfVar1 + 0xe) == '\0') {
            auVar7 = ZEXT816(0);
          }
          else {
            uVar6 = *(undefined8 *)(pfVar1 + 6);
            local_50 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20) +
                                (float)((ulong)uVar6 >> 0x20),
                                (float)*(undefined8 *)(pfVar1 + 0xc) + (float)uVar6);
            local_58 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20),
                                (float)*(undefined8 *)(pfVar1 + 10) +
                                (float)*(undefined8 *)(pfVar1 + 8));
            FUN_0018d1f8(auStack_48,pfVar1 + 6,&local_50,&local_58);
            fVar8 = (float)FUN_0018d214(auStack_48);
            FUN_0018d428(fVar8 * fVar5,auStack_48);
            auVar7 = FUN_0018d678(auStack_48);
          }
          if (*(long *)(lVar3 + 0x28) == local_28) {
            return auVar7;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(auVar7._0_8_);
        }
        if (pfVar2 == pfVar4) break;
        fVar8 = *pfVar4;
        pfVar1 = pfVar4;
      }
    }
  }
  return ZEXT416(0);
}


// ===== 0017e42c  FUN_0017e42c =====

void FUN_0017e42c(undefined8 *param_1,long *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  pfVar1 = (float *)*param_2;
  pfVar2 = (float *)param_2[1];
  if (pfVar1 == pfVar2) {
LAB_0017e480:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  fVar3 = (float)param_3;
  if (*pfVar1 < fVar3 == (NAN(*pfVar1) || NAN(fVar3))) {
    pfVar1 = pfVar1 + 6;
  }
  else {
    fVar4 = pfVar2[-0x11];
    if (fVar4 != fVar3 && fVar4 < fVar3 == (NAN(fVar4) || NAN(fVar3))) {
      do {
        fVar4 = *pfVar1;
        if ((fVar4 == fVar3 || fVar4 < fVar3 != (NAN(fVar4) || NAN(fVar3))) &&
           (fVar4 = pfVar1[1], fVar4 != fVar3 && fVar4 < fVar3 == (NAN(fVar4) || NAN(fVar3)))) {
          FUN_0017e554();
          return;
        }
        pfVar1 = pfVar1 + 0x12;
      } while (pfVar2 != pfVar1);
      goto LAB_0017e480;
    }
    pfVar1 = pfVar2 + -6;
  }
  FUN_0017e4a4(param_1,pfVar1);
  return;
}


// ===== 0017e4a4  FUN_0017e4a4 =====

void FUN_0017e4a4(undefined8 *param_1,long *param_2)

{
  void *__dest;
  size_t __n;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    FUN_0017e510(param_1,param_2[1] - *param_2 >> 2);
    __dest = (void *)param_1[1];
    __n = param_2[1] - *param_2;
    if (0 < (long)__n) {
      memcpy(__dest,(void *)*param_2,__n);
      __dest = (void *)((long)__dest + __n);
    }
    param_1[1] = __dest;
  }
  return;
}


// ===== 0017e510  FUN_0017e510 =====

void FUN_0017e510(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  if (param_2 >> 0x3e == 0) {
    pvVar1 = operator_new(param_2 << 2);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + param_2 * 4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


// ===== 0017e554  FUN_0017e554 =====

void FUN_0017e554(undefined8 *param_1,float *param_2,int param_3)

{
  float **ppfVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float *local_80;
  float *local_78;
  undefined8 local_70;
  float *local_68;
  float *local_60;
  undefined8 local_58;
  float *local_50;
  float *pfStack_48;
  undefined8 local_40;
  long local_38;
  
  if (*(long *)(param_2 + 2) == 0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)FUN_0018f1ac(((float)param_3 - *param_2) / (param_2[1] - *param_2));
  }
  ppfVar1 = (float **)(param_2 + 6);
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pfVar3 = *(float **)(param_2 + 0xc);
  if (*(long *)(param_2 + 0xe) - (long)pfVar3 == *(long *)(param_2 + 8) - (long)*ppfVar1) {
    local_50 = (float *)0x0;
    pfStack_48 = (float *)0x0;
    local_40 = 0;
    if ((&local_50 != (float **)(param_2 + 0xc)) &&
       (FUN_0017e774(&local_50,pfVar3), local_50 != pfStack_48)) {
      pfVar3 = *ppfVar1;
      pfVar4 = local_50;
      do {
        pfVar5 = pfVar4 + 1;
        *pfVar4 = *pfVar4 - *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar4 = pfVar5;
      } while (pfStack_48 != pfVar5);
    }
    local_70 = local_40;
    local_80 = local_50;
    local_78 = pfStack_48;
  }
  else {
    FUN_0017e4a4(&local_80);
  }
  local_68 = (float *)0x0;
  local_60 = (float *)0x0;
  local_58 = 0;
  FUN_0017e774(&local_68,local_80,local_78);
  for (pfVar3 = local_68; pfVar3 != local_60; pfVar3 = pfVar3 + 1) {
    *pfVar3 = *pfVar3 * fVar7;
  }
  if (*(long *)(param_2 + 8) - (long)*ppfVar1 == (long)local_60 - (long)local_68) {
    local_50 = (float *)0x0;
    pfStack_48 = (float *)0x0;
    local_40 = 0;
    if ((&local_50 != ppfVar1) && (FUN_0017e774(&local_50), local_50 != pfStack_48)) {
      lVar6 = 0;
      do {
        *(float *)((long)local_50 + lVar6) =
             *(float *)((long)local_68 + lVar6) + *(float *)((long)local_50 + lVar6);
        lVar6 = lVar6 + 4;
      } while ((long)pfStack_48 - (long)local_50 != lVar6);
    }
    *param_1 = local_50;
    param_1[1] = pfStack_48;
    param_1[2] = local_40;
  }
  else {
    FUN_0017e4a4(param_1,ppfVar1);
  }
  if (local_68 != (float *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  if (local_80 != (float *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017e774  FUN_0017e774 =====

void FUN_0017e774(undefined8 *param_1,void *param_2,void *param_3)

{
  ulong uVar1;
  void *__src;
  long lVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
  lVar2 = param_1[2];
  pvVar4 = (void *)*param_1;
  sVar3 = (long)param_3 - (long)param_2;
  uVar5 = (long)sVar3 >> 2;
  if ((ulong)(lVar2 - (long)pvVar4 >> 2) < uVar5) {
    if (pvVar4 != (void *)0x0) {
      param_1[1] = pvVar4;
      operator_delete(pvVar4);
      lVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar5 <= (ulong)(lVar2 >> 1)) {
      uVar5 = lVar2 >> 1;
    }
    if (0x1ffffffffffffffe < (ulong)(lVar2 >> 2)) {
      uVar5 = 0x3fffffffffffffff;
    }
    FUN_0017e510(param_1,uVar5);
    pvVar4 = (void *)param_1[1];
    if (0 < (long)sVar3) {
      memcpy(pvVar4,param_2,sVar3);
      pvVar4 = (void *)((long)pvVar4 + sVar3);
    }
    param_1[1] = pvVar4;
  }
  else {
    uVar1 = param_1[1] - (long)pvVar4 >> 2;
    __src = (void *)((long)param_2 + (param_1[1] - (long)pvVar4));
    if (uVar5 <= uVar1) {
      __src = param_3;
    }
    sVar3 = (long)__src - (long)param_2;
    if (sVar3 != 0) {
      memmove(pvVar4,param_2,sVar3);
    }
    if (uVar1 < uVar5) {
      pvVar4 = (void *)param_1[1];
      sVar3 = (long)param_3 - (long)__src;
      if (0 < (long)sVar3) {
        memcpy(pvVar4,__src,sVar3);
        pvVar4 = (void *)((long)pvVar4 + sVar3);
      }
      param_1[1] = pvVar4;
    }
    else {
      param_1[1] = (long)pvVar4 + sVar3;
    }
  }
  return;
}


// ===== 0017e8b0  FUN_0017e8b0 =====

void FUN_0017e8b0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar5 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar3 = *plStack_50 - *param_1;
  uVar4 = lVar3 >> 2;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  if (0xffffffffffffffe < (ulong)(lVar3 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  local_58 = (void *)0x0;
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_70 = operator_new(uVar1 << 3);
  }
  local_68 = (undefined8 *)((long)local_70 + lVar5 * 8);
  local_58 = (void *)((long)local_70 + uVar1 * 8);
  local_60 = local_68 + 1;
  *local_68 = *param_2;
  FUN_0017e9c4(param_1,&local_70);
  if ((long)local_60 - (long)local_68 != 0) {
    local_60 = local_60 + (((long)local_60 - (long)local_68) - 8U >> 3 ^ 0xffffffffffffffff);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0017e9c4  FUN_0017e9c4 =====

void FUN_0017e9c4(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  void *__dest;
  size_t __n;
  undefined8 uVar1;
  
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  __dest = (void *)(param_2[1] - __n);
  param_2[1] = __dest;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __dest = (void *)param_2[1];
  }
  uVar1 = *param_1;
  *param_1 = __dest;
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}


// ===== 0017ea3c  FUN_0017ea3c =====

void FUN_0017ea3c(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0x100;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 2;
  puVar2 = param_1 + 0xd;
  *puVar2 = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = param_2;
  FUN_00186274(puVar2);
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar1 = FUN_0017eb10(param_1 + 4,puVar2,param_1);
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)(param_1 + 3) = 1;
  }
  return;
}


// ===== 0017ead0  FUN_0017ead0 =====

void FUN_0017ead0(long param_1)

{
  ulong uVar1;
  
  if ((*(int *)(param_1 + 0x50) != 0) ||
     (uVar1 = FUN_0017eb10(param_1 + 0x20,param_1 + 0x68,param_1), (uVar1 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


// ===== 0017eb10  FUN_0017eb10 =====

void FUN_0017eb10(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  pbVar6 = (byte *)*param_2;
  bVar2 = *pbVar6;
  if (bVar2 != 0) {
    plVar1 = param_2 + 1;
LAB_0017eb78:
    pbVar7 = pbVar6;
    while( true ) {
      pbVar6 = pbVar7 + 1;
      if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0)) break;
      bVar2 = *pbVar6;
      pbVar7 = pbVar6;
    }
    *param_2 = (long)pbVar7;
    param_2[2] = param_2[2];
    *plVar1 = *plVar1;
    uVar10 = *(uint *)(param_1 + 0x40);
    bVar2 = (&UNK_00146605)[(ulong)(byte)(&DAT_00146505)[*pbVar7] + (ulong)uVar10 * 0xb];
    uVar13 = (uint)bVar2;
    uVar14 = (uint)bVar2;
    switch((uint)bVar2) {
    case 1:
      goto switchD_0017ebe8_caseD_1;
    default:
      FUN_001865d4(param_1,param_2,param_3);
      uVar10 = (uint)(*(int *)(param_1 + 0x30) != 0);
LAB_0017ed00:
      if (uVar10 != 1) goto LAB_0017edb0;
      goto switchD_0017ebe8_caseD_1;
    case 3:
    case 7:
      uVar13 = 8;
      if (((uVar10 != 7) && (uVar10 != 0xb)) && (uVar13 = uVar10, uVar10 == 0xd)) {
        uVar13 = 5;
      }
      puVar9 = *(uint **)(param_1 + 0x18);
      lVar8 = *(long *)(param_1 + 0x20);
      if (lVar8 - (long)puVar9 < 4) {
        FUN_00186634(param_1,1);
        puVar9 = *(uint **)(param_1 + 0x18);
        lVar8 = *(long *)(param_1 + 0x20);
      }
      puVar12 = puVar9 + 1;
      *(uint **)(param_1 + 0x18) = puVar12;
      *puVar9 = uVar13;
      if (lVar8 - (long)puVar12 < 4) {
        FUN_00186634(param_1,1);
        puVar12 = *(uint **)(param_1 + 0x18);
      }
      *(uint **)(param_1 + 0x18) = puVar12 + 1;
      uVar11 = 7;
      if (bVar2 != 3) {
        uVar11 = 9;
      }
      *puVar12 = 0;
      *(undefined4 *)(param_3 + 0x18) = uVar11;
      *param_2 = *param_2 + 1;
      break;
    case 4:
      FUN_00186380(param_1,param_2,param_3,1);
      if (*(int *)(param_1 + 0x30) != 0) goto switchD_0017ebe8_caseD_1;
      uVar14 = 4;
      break;
    case 5:
      FUN_001865d4(param_1,param_2,param_3);
      if (*(int *)(param_1 + 0x30) != 0) goto switchD_0017ebe8_caseD_1;
      uVar14 = 5;
      break;
    case 6:
      if (uVar10 == 0xc) {
        lVar8 = param_2[2];
        uVar11 = 4;
        goto LAB_0017ecd4;
      }
      lVar8 = *(long *)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = lVar8 + -8;
      uVar10 = *(uint *)(lVar8 + -8);
      uVar11 = 8;
LAB_0017ed9c:
      *(undefined4 *)(param_3 + 0x18) = uVar11;
      *param_2 = (long)pbVar6;
      if (uVar10 == 2) {
        uVar10 = 0;
LAB_0017edb0:
        *(uint *)(param_1 + 0x40) = uVar10;
        pbVar6 = (byte *)*param_2;
        while ((*pbVar6 < 0x21 && ((1L << ((ulong)*pbVar6 & 0x3f) & 0x100002600U) != 0))) {
          pbVar6 = pbVar6 + 1;
        }
        *param_2 = (long)pbVar6;
        param_2[2] = param_2[2];
        *plVar1 = *plVar1;
        if (*pbVar6 == 0) goto LAB_0017ed80;
switchD_0017ebe8_caseD_1:
        uVar13 = *(uint *)(param_1 + 0x40);
        goto LAB_0017ee08;
      }
      if ((int)uVar10 < 2) goto LAB_0017ed00;
      *(uint *)(param_1 + 0x40) = uVar10;
      goto LAB_0017ed80;
    case 8:
      FUN_001865d4(param_1,param_2,param_3);
      if (*(int *)(param_1 + 0x30) != 0) goto switchD_0017ebe8_caseD_1;
      uVar14 = 8;
      break;
    case 9:
      if (uVar10 != 0xb) {
        lVar8 = *(long *)(param_1 + 0x18);
        *(long *)(param_1 + 0x18) = lVar8 + -8;
        uVar10 = *(uint *)(lVar8 + -8);
        uVar11 = 10;
        goto LAB_0017ed9c;
      }
      lVar8 = param_2[2];
      uVar11 = 3;
LAB_0017ecd4:
      *(undefined4 *)(param_1 + 0x30) = uVar11;
      *(long *)(param_1 + 0x38) = (long)pbVar7 - lVar8;
      goto switchD_0017ebe8_caseD_1;
    case 0xb:
    case 0xc:
      *param_2 = (long)pbVar6;
      *(int *)(*(long *)(param_1 + 0x18) + -4) = *(int *)(*(long *)(param_1 + 0x18) + -4) + 1;
      goto LAB_0017ec08;
    case 0xd:
      *param_2 = (long)pbVar6;
LAB_0017ec08:
      *(uint *)(param_1 + 0x40) = (uint)bVar2;
      bVar2 = *pbVar6;
      if (bVar2 == 0) goto code_r0x0017ec14;
      goto LAB_0017eb78;
    }
    *(uint *)(param_1 + 0x40) = uVar14;
    goto LAB_0017ed80;
  }
  uVar13 = *(uint *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  if (uVar13 == 0) {
LAB_0017ed80:
    uVar4 = 1;
    goto LAB_0017ee14;
  }
LAB_0017ee08:
  FUN_001862f4(param_1,uVar13,param_2);
  uVar4 = 0;
LAB_0017ee14:
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
code_r0x0017ec14:
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  goto LAB_0017ee08;
}


// ===== 0017ee8c  FUN_0017ee8c =====

undefined8 FUN_0017ee8c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x18) == 7) {
    if (*(int *)(param_1 + 0x50) == 0) {
      uVar2 = FUN_0017eb10(param_1 + 0x20,param_1 + 0x68,param_1);
      uVar1 = 1;
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  return uVar1;
}


// ===== 0017eef0  FUN_0017eef0 =====

undefined8 FUN_0017eef0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x18) == 9) {
    if (*(int *)(param_1 + 0x50) == 0) {
      uVar2 = FUN_0017eb10(param_1 + 0x20,param_1 + 0x68,param_1);
      uVar1 = 1;
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  return uVar1;
}


// ===== 0017ef54  FUN_0017ef54 =====

long FUN_0017ef54(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 6:
    lVar2 = param_1;
    if ((*(byte *)(param_1 + 0x17) >> 4 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 8);
    }
    if ((*(int *)(param_1 + 0x50) == 0) &&
       (uVar1 = FUN_0017eb10(param_1 + 0x20,param_1 + 0x68,param_1), (uVar1 & 1) != 0)) {
      return lVar2;
    }
    break;
  case 7:
  case 10:
    goto switchD_0017ef8c_caseD_7;
  case 8:
    if ((*(int *)(param_1 + 0x50) == 0) &&
       (uVar1 = FUN_0017eb10(param_1 + 0x20,param_1 + 0x68,param_1), (uVar1 & 1) != 0)) {
      return 0;
    }
  default:
    lVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
switchD_0017ef8c_caseD_7:
  return lVar2;
}


// ===== 0017f004  FUN_0017f004 =====

undefined8 FUN_0017f004(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x18)) {
  default:
    uVar1 = 1;
    break;
  case 8:
    break;
  case 10:
    if ((*(int *)(param_1 + 0x50) == 0) &&
       (uVar2 = FUN_0017eb10(param_1 + 0x20,param_1 + 0x68,param_1), (uVar2 & 1) != 0)) {
      return 0;
    }
  case 1:
  case 6:
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return uVar1;
}


// ===== 0017f084  FUN_0017f084 =====

undefined4 FUN_0017f084(undefined4 *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if ((param_1[6] == 4) && ((*(byte *)((long)param_1 + 0x16) >> 5 & 1) != 0)) {
    uVar2 = *param_1;
    if ((param_1[0x14] == 0) &&
       (uVar1 = FUN_0017eb10(param_1 + 8,param_1 + 0x1a,param_1), (uVar1 & 1) != 0)) {
      return uVar2;
    }
  }
  else {
    uVar2 = 0;
  }
  param_1[6] = 1;
  return uVar2;
}


// ===== 0017f0e8  FUN_0017f0e8 =====

undefined1  [16] FUN_0017f0e8(long param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar3;
  
  auVar4 = ZEXT816(0);
  if (*(int *)(param_1 + 0x18) == 4) {
    auVar4 = FUN_0017f150(param_1);
    uVar5 = auVar4._8_8_;
    uVar3 = auVar4._0_8_;
    if (*(int *)(param_1 + 0x50) == 0) {
      uVar2 = FUN_0017eb10(param_1 + 0x20,param_1 + 0x68,param_1);
      auVar1._8_8_ = uVar5;
      auVar1._0_8_ = uVar3;
      auVar4._8_8_ = uVar5;
      auVar4._0_8_ = uVar3;
      if ((uVar2 & 1) != 0) {
        return auVar1;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  return auVar4;
}


// ===== 0017f150  FUN_0017f150 =====

undefined1  [16] FUN_0017f150(ulong *param_1)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar1 = *(ushort *)((long)param_1 + 0x16);
  if ((uVar1 >> 9 & 1) != 0) {
    auVar3._0_8_ = *param_1;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    auVar4._0_8_ = (double)(int)*param_1;
    auVar4._8_8_ = 0;
    return auVar4;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    auVar5._0_8_ = NEON_ucvtf((ulong)(uint)*param_1);
    auVar5._8_8_ = 0;
    return auVar5;
  }
  if ((uVar1 >> 7 & 1) == 0) {
    auVar2._0_8_ = (double)*param_1;
    auVar2._8_8_ = 0;
    return auVar2;
  }
  auVar6._0_8_ = (double)(long)*param_1;
  auVar6._8_8_ = 0;
  return auVar6;
}


