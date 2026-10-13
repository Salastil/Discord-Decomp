// ===== 001ceadc  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_in =====

/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_in(mbstate_t&, char const*, char const*, char
   const*&, wchar_t*, wchar_t*, wchar_t*&) const */

void __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_in
          (codecvt<wchar_t,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar_t *param_5,wchar_t *param_6,wchar_t **param_7)

{
  char *pcVar1;
  wchar_t *__pwc;
  long lVar2;
  bool bVar3;
  undefined1 uVar4;
  __locale_t p_Var5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  mbstate_t local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pcVar8 = param_2;
  pcVar1 = param_2;
  if (param_2 != param_3) {
    do {
      pcVar8 = pcVar1;
      if (*pcVar8 == '\0') break;
      pcVar1 = pcVar8 + 1;
      pcVar8 = param_3;
    } while (param_3 != pcVar1);
  }
  *param_7 = param_5;
  *param_4 = param_2;
  if ((param_5 != param_6) && (param_2 != param_3)) {
    while( true ) {
      local_70 = *param_1;
      p_Var5 = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001ceb9c to 001cebb3 has its CatchHandler @ 001ceddc */
      sVar6 = mbsnrtowcs(param_5,param_4,(long)pcVar8 - (long)param_2,
                         (long)param_6 - (long)param_5 >> 2,param_1);
      if (p_Var5 != (__locale_t)0x0) {
                    /* try { // try from 001cebbc to 001cebc3 has its CatchHandler @ 001cedd8 */
        uselocale(p_Var5);
      }
      if (sVar6 == 0xffffffffffffffff) {
        *param_7 = param_5;
        if (param_2 != *param_4) goto LAB_001cecd4;
        goto LAB_001ced38;
      }
      __pwc = *param_7 + sVar6;
      *param_7 = __pwc;
      if (__pwc == param_6) break;
      bVar3 = pcVar8 != param_3;
      param_2 = *param_4;
      pcVar8 = param_3;
      if (bVar3) {
        p_Var5 = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001cec04 to 001cec17 has its CatchHandler @ 001cedc0 */
        sVar6 = mbrtowc(__pwc,param_2,1,param_1);
        if (p_Var5 != (__locale_t)0x0) {
                    /* try { // try from 001cec20 to 001cec27 has its CatchHandler @ 001cedbc */
          uselocale(p_Var5);
        }
        if (sVar6 != 0) {
          uVar4 = 2;
          goto LAB_001ced58;
        }
        *param_7 = *param_7 + 1;
        pcVar1 = *param_4 + 1;
        *param_4 = pcVar1;
        param_2 = param_3;
        pcVar7 = pcVar1;
        if (pcVar1 == param_3) goto LAB_001ced50;
        do {
          param_2 = pcVar1;
          pcVar8 = pcVar7;
          if (*pcVar7 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar8 = param_3;
        } while (param_3 != pcVar7);
      }
      param_5 = *param_7;
      if ((param_5 == param_6) || (param_2 == param_3)) goto LAB_001ced50;
    }
    param_2 = *param_4;
  }
  goto LAB_001ced50;
LAB_001cecd4:
  do {
    p_Var5 = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001cece4 to 001cecf7 has its CatchHandler @ 001ceda4 */
    sVar6 = mbrtowc(param_5,param_2,(long)pcVar8 - (long)param_2,&local_70);
    if (p_Var5 != (__locale_t)0x0) {
                    /* try { // try from 001ced00 to 001ced07 has its CatchHandler @ 001ceda0 */
      uselocale(p_Var5);
    }
    if (sVar6 == 0) {
      sVar6 = 1;
    }
    else {
      if (sVar6 == 0xfffffffffffffffe) {
        uVar4 = 1;
        *param_4 = param_2;
        goto LAB_001ced58;
      }
      if (sVar6 == 0xffffffffffffffff) {
        uVar4 = 2;
        *param_4 = param_2;
        goto LAB_001ced58;
      }
    }
    param_2 = param_2 + sVar6;
    param_5 = *param_7 + 1;
    *param_7 = param_5;
  } while (param_2 != *param_4);
LAB_001ced38:
  *param_4 = param_2;
LAB_001ced50:
  uVar4 = param_2 != param_3;
LAB_001ced58:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 001cedf8  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_unshift =====

/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_unshift(mbstate_t&, char*, char*, char*&)
   const */

void __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_unshift
          (codecvt<wchar_t,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  char cVar1;
  long lVar2;
  __locale_t __dataset;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  char local_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *param_4 = param_2;
  __dataset = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001cee38 to 001cee47 has its CatchHandler @ 001ceefc */
  sVar3 = wcrtomb(local_4c,L'\0',param_1);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 001cee50 to 001cee57 has its CatchHandler @ 001ceef8 */
    uselocale(__dataset);
  }
  if (sVar3 + 1 < 2) {
    uVar4 = 2;
  }
  else {
    pcVar6 = *param_4;
    if ((ulong)((long)param_3 - (long)pcVar6) < sVar3 - 1) {
      uVar4 = 1;
    }
    else {
      if (sVar3 != 1) {
        *param_4 = pcVar6 + 1;
        lVar5 = sVar3 - 2;
        *pcVar6 = local_4c[0];
        if (lVar5 != 0) {
          pcVar6 = (char *)((ulong)local_4c | 1);
          do {
            pcVar7 = *param_4;
            cVar1 = *pcVar6;
            lVar5 = lVar5 + -1;
            *param_4 = pcVar7 + 1;
            *pcVar7 = cVar1;
            pcVar6 = pcVar6 + 1;
          } while (lVar5 != 0);
        }
      }
      uVar4 = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 001cef18  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_encoding =====

/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_encoding() const */

ulong __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_encoding(codecvt<wchar_t,char,mbstate_t> *this)

{
  int iVar1;
  __locale_t p_Var2;
  ulong uVar3;
  size_t sVar4;
  
                    /* try { // try from 001cef30 to 001cef33 has its CatchHandler @ 001cefe0 */
  p_Var2 = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001cef38 to 001cef47 has its CatchHandler @ 001cefc8 */
  iVar1 = mbtowc((wchar_t *)0x0,(char *)0x0,4);
  if (p_Var2 != (__locale_t)0x0) {
                    /* try { // try from 001cef50 to 001cef57 has its CatchHandler @ 001cefc4 */
    uselocale(p_Var2);
  }
  if (iVar1 == 0) {
    if (*(__locale_t *)(this + 0x10) == (__locale_t)0x0) {
      uVar3 = 1;
    }
    else {
                    /* try { // try from 001cef6c to 001cef6f has its CatchHandler @ 001cefe0 */
      p_Var2 = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001cef74 to 001cef77 has its CatchHandler @ 001cefac */
      sVar4 = __ctype_get_mb_cur_max();
      if (p_Var2 != (__locale_t)0x0) {
                    /* try { // try from 001cef80 to 001cef87 has its CatchHandler @ 001cefa8 */
        uselocale(p_Var2);
      }
      uVar3 = (ulong)(sVar4 == 1);
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


// ===== 001cefec  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_always_noconv =====

/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_always_noconv() const */

undefined8 std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_always_noconv(void)

{
  return 0;
}


// ===== 001ceff4  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_length =====

/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_length
          (codecvt<wchar_t,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  bool bVar1;
  __locale_t __dataset;
  size_t sVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  if ((param_2 != param_3) && (param_4 != 0)) {
    iVar4 = 0;
    uVar5 = 1;
    while( true ) {
      __dataset = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001cf04c to 001cf05b has its CatchHandler @ 001cf0cc */
      sVar2 = mbrlen(param_2,(long)param_3 - (long)param_2,param_1);
      if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 001cf064 to 001cf06b has its CatchHandler @ 001cf0c8 */
        uselocale(__dataset);
      }
      if (sVar2 == 0) {
        sVar2 = 1;
        iVar3 = 1;
      }
      else {
        if (sVar2 + 2 < 2) {
          return iVar4;
        }
        iVar3 = (int)sVar2;
      }
      param_2 = param_2 + sVar2;
      iVar4 = iVar3 + iVar4;
      if (param_2 == param_3) break;
      bVar1 = param_4 <= uVar5;
      uVar5 = uVar5 + 1;
      if (bVar1) {
        return iVar4;
      }
    }
    return iVar4;
  }
  return 0;
}


// ===== 001cf0e8  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_max_length =====

/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_max_length() const */

ulong __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_max_length(codecvt<wchar_t,char,mbstate_t> *this)

{
  __locale_t __dataset;
  size_t sVar1;
  
  if (*(__locale_t *)(this + 0x10) == (__locale_t)0x0) {
    sVar1 = 1;
  }
  else {
                    /* try { // try from 001cf0fc to 001cf0ff has its CatchHandler @ 001cf14c */
    __dataset = uselocale(*(__locale_t *)(this + 0x10));
                    /* try { // try from 001cf104 to 001cf107 has its CatchHandler @ 001cf134 */
    sVar1 = __ctype_get_mb_cur_max();
    if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 001cf110 to 001cf117 has its CatchHandler @ 001cf130 */
      uselocale(__dataset);
    }
  }
  return sVar1 & 0xffffffff;
}


// ===== 001cf158  std::__ndk1::codecvt<char16_t,char,mbstate_t>::~codecvt =====

/* std::__ndk1::codecvt<char16_t, char, mbstate_t>::~codecvt() */

void __thiscall
std::__ndk1::codecvt<char16_t,char,mbstate_t>::~codecvt(codecvt<char16_t,char,mbstate_t> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001cf17c  std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_out =====

/* std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_out(mbstate_t&, char16_t const*, char16_t
   const*, char16_t const*&, char*, char*, char*&) const */

void __thiscall
std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_out
          (codecvt<char16_t,char,mbstate_t> *this,mbstate_t *param_1,wchar16 *param_2,
          wchar16 *param_3,wchar16 **param_4,char *param_5,char *param_6,char **param_7)

{
  long lVar1;
  char *local_48;
  wchar16 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_001cf20c(param_2,param_3,&local_40,param_5,param_6,&local_48,0x10ffff,0);
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001cf20c  FUN_001cf20c =====

undefined8
FUN_001cf20c(long param_1,ushort *param_2,long *param_3,undefined1 *param_4,long param_5,
            long *param_6,ulong param_7,uint param_8)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  byte *pbVar6;
  byte bVar7;
  
  *param_3 = param_1;
  *param_6 = (long)param_4;
  if ((param_8 >> 1 & 1) != 0) {
    if (param_5 - (long)param_4 < 3) {
      return 1;
    }
    *param_6 = (long)(param_4 + 1);
    *param_4 = 0xef;
    puVar4 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar4 + 1);
    *puVar4 = 0xbb;
    puVar4 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar4 + 1);
    *puVar4 = 0xbf;
  }
  puVar5 = (ushort *)*param_3;
  do {
    if (param_2 <= puVar5) {
      return 0;
    }
    uVar2 = *puVar5;
    if (param_7 < uVar2) {
      return 2;
    }
    if (uVar2 < 0x80) {
      pbVar6 = (byte *)*param_6;
      if (param_5 - (long)pbVar6 < 1) {
        return 1;
      }
      *param_6 = (long)(pbVar6 + 1);
      *pbVar6 = (byte)uVar2;
    }
    else {
      if (uVar2 < 0x800) {
        pbVar6 = (byte *)*param_6;
        if (param_5 - (long)pbVar6 < 2) {
          return 1;
        }
        bVar7 = (byte)(uVar2 >> 6) | 0xc0;
      }
      else {
        if (0x1a < uVar2 >> 0xb) {
          if (uVar2 >> 10 < 0x37) {
            if ((long)param_2 - (long)puVar5 < 4) {
              return 1;
            }
            uVar3 = puVar5[1];
            if ((uVar3 & 0xfc00) != 0xdc00) {
              return 2;
            }
            if (param_5 - *param_6 < 4) {
              return 1;
            }
            if (param_7 < (((ulong)uVar2 & 0x3ff) << 10 | (ulong)uVar3 & 0x3ff) + 0x10000) {
              return 2;
            }
            *param_3 = (long)(puVar5 + 1);
            pbVar6 = (byte *)*param_6;
            uVar1 = (uVar2 >> 6 & 0xf) + 1;
            *param_6 = (long)(pbVar6 + 1);
            *pbVar6 = (byte)(uVar1 >> 2) | 0xf0;
            pbVar6 = (byte *)*param_6;
            *param_6 = (long)(pbVar6 + 1);
            *pbVar6 = (byte)((uVar1 & 3) << 4) | (byte)(uVar2 >> 2) & 0xf | 0x80;
            pbVar6 = (byte *)*param_6;
            *param_6 = (long)(pbVar6 + 1);
            *pbVar6 = (byte)((uVar2 & 3) << 4) | (byte)(uVar3 >> 6) & 0xf | 0x80;
            pbVar6 = (byte *)*param_6;
            *param_6 = (long)(pbVar6 + 1);
            *pbVar6 = (byte)uVar3 & 0x3f | 0x80;
            goto LAB_001cf2b4;
          }
          if (uVar2 < 0xe000) {
            return 2;
          }
        }
        pbVar6 = (byte *)*param_6;
        if (param_5 - (long)pbVar6 < 3) {
          return 1;
        }
        *param_6 = (long)(pbVar6 + 1);
        *pbVar6 = (byte)(uVar2 >> 0xc) | 0xe0;
        pbVar6 = (byte *)*param_6;
        bVar7 = (byte)(uVar2 >> 6) & 0x3f | 0x80;
      }
      *param_6 = (long)(pbVar6 + 1);
      *pbVar6 = bVar7;
      pbVar6 = (byte *)*param_6;
      *param_6 = (long)(pbVar6 + 1);
      *pbVar6 = (byte)uVar2 & 0x3f | 0x80;
    }
LAB_001cf2b4:
    puVar5 = (ushort *)(*param_3 + 2);
    *param_3 = (long)puVar5;
  } while( true );
}


// ===== 001cf428  std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_in =====

/* std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_in(mbstate_t&, char const*, char const*, char
   const*&, char16_t*, char16_t*, char16_t*&) const */

void __thiscall
std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_in
          (codecvt<char16_t,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar16 *param_5,wchar16 *param_6,wchar16 **param_7)

{
  long lVar1;
  wchar16 *local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_001cf4b8(param_2,param_3,&local_40,param_5,param_6,&local_48,0x10ffff,0);
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001cf4b8  FUN_001cf4b8 =====

undefined8
FUN_001cf4b8(long param_1,byte *param_2,long *param_3,long param_4,ushort *param_5,long *param_6,
            ulong param_7,uint param_8)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar8 = (byte *)*param_3;
  if (((((param_8 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)pbVar8)) && (*pbVar8 == 0xef)) &&
     ((pbVar8[1] == 0xbb && (pbVar8[2] == 0xbf)))) {
    pbVar8 = pbVar8 + 3;
    *param_3 = (long)pbVar8;
  }
  if (pbVar8 < param_2) {
    puVar7 = (ushort *)*param_6;
    do {
      if (param_5 <= puVar7) {
        return 1;
      }
      bVar3 = *pbVar8;
      if (param_7 < bVar3) {
        return 2;
      }
      if ((char)bVar3 < '\0') {
        if (bVar3 < 0xc2) {
          return 2;
        }
        if (bVar3 < 0xe0) {
          if ((long)param_2 - (long)pbVar8 < 2) {
            return 1;
          }
          if ((pbVar8[1] & 0xc0) != 0x80) {
            return 2;
          }
          uVar9 = ((ulong)bVar3 & 0x1f) << 6 | (ulong)pbVar8[1] & 0x3f;
          if (param_7 < uVar9) {
            return 2;
          }
          *puVar7 = (ushort)uVar9;
          pbVar8 = pbVar8 + 2;
        }
        else if (bVar3 < 0xf0) {
          if ((long)param_2 - (long)pbVar8 < 3) {
            return 1;
          }
          bVar4 = pbVar8[1];
          if (bVar3 == 0xed) {
            bVar5 = bVar4 & 0xe0;
joined_r0x001cf630:
            if (bVar5 != 0x80) {
              return 2;
            }
          }
          else {
            if (bVar3 != 0xe0) {
              bVar5 = bVar4 & 0xc0;
              goto joined_r0x001cf630;
            }
            if ((bVar4 & 0xe0) != 0xa0) {
              return 2;
            }
          }
          if (((pbVar8[2] & 0xc0) != 0x80) ||
             (uVar10 = (ulong)bVar3 << 0xc, uVar9 = ((ulong)bVar4 & 0x3f) << 6,
             uVar2 = (ulong)pbVar8[2] & 0x3f, param_7 < (uVar10 & 0xffc0 | uVar9 | uVar2))) {
            return 2;
          }
          *puVar7 = (ushort)uVar10 | (ushort)uVar9 | (ushort)uVar2;
          pbVar8 = pbVar8 + 3;
        }
        else {
          if (0xf4 < bVar3) {
            return 2;
          }
          if ((long)param_2 - (long)pbVar8 < 4) {
            return 1;
          }
          bVar4 = pbVar8[1];
          bVar5 = pbVar8[2];
          bVar6 = pbVar8[3];
          uVar11 = (uint)bVar4;
          if (bVar3 == 0xf4) {
            uVar1 = uVar11 & 0xf0;
joined_r0x001cf67c:
            if (uVar1 != 0x80) {
              return 2;
            }
          }
          else {
            if (bVar3 != 0xf0) {
              uVar1 = uVar11 & 0xc0;
              goto joined_r0x001cf67c;
            }
            if (0x2f < (uVar11 + 0x70 & 0xff)) {
              return 2;
            }
          }
          if ((bVar5 & 0xc0) != 0x80) {
            return 2;
          }
          if ((bVar6 & 0xc0) != 0x80) {
            return 2;
          }
          if ((long)param_5 - (long)puVar7 < 4) {
            return 1;
          }
          if (param_7 < (((ulong)bVar3 & 7) << 0x12 | ((ulong)bVar4 & 0x3f) << 0xc |
                         ((ulong)bVar5 & 0x3f) << 6 | (ulong)bVar6 & 0x3f)) {
            return 2;
          }
          *puVar7 = ((ushort)((uVar11 & 0xf) << 2) | bVar5 >> 4 & 3 |
                    (ushort)(((bVar3 & 7) << 2 | bVar4 >> 4 & 3) << 6)) + 0x3fc0 | 0xd800;
          *param_6 = (long)(puVar7 + 1);
          puVar7[1] = bVar6 & 0x3f | (ushort)((bVar5 & 0xf) << 6) | 0xdc00;
          pbVar8 = (byte *)(*param_3 + 4);
        }
      }
      else {
        *puVar7 = (ushort)bVar3;
        pbVar8 = pbVar8 + 1;
      }
      *param_3 = (long)pbVar8;
      puVar7 = (ushort *)(*param_6 + 2);
      *param_6 = (long)puVar7;
      pbVar8 = (byte *)*param_3;
    } while (pbVar8 < param_2);
  }
  return 0;
}


// ===== 001cf734  std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_unshift =====

/* std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_unshift(mbstate_t&, char*, char*, char*&)
   const */

undefined8 __thiscall
std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_unshift
          (codecvt<char16_t,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001cf740  std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_encoding =====

/* std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_encoding() const */

undefined8 std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_encoding(void)

{
  return 0;
}


// ===== 001cf748  std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_always_noconv =====

/* std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_always_noconv() const */

undefined8 std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_always_noconv(void)

{
  return 0;
}


// ===== 001cf750  std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_length =====

/* std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

void __thiscall
std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_length
          (codecvt<char16_t,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  FUN_001cf768(param_2,param_3,param_4,0x10ffff,0);
  return;
}


// ===== 001cf768  FUN_001cf768 =====

int FUN_001cf768(byte *param_1,byte *param_2,ulong param_3,ulong param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  byte bVar5;
  
  pbVar3 = param_1;
  if (((((param_5 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)param_1)) && (*param_1 == 0xef)) &&
     ((param_1[1] == 0xbb && (pbVar3 = param_1 + 3, param_1[2] != 0xbf)))) {
    pbVar3 = param_1;
  }
  if ((param_3 != 0) && (pbVar3 < param_2)) {
    uVar4 = 0;
    while (bVar1 = *pbVar3, bVar1 <= param_4) {
      if ((char)bVar1 < '\0') {
        if (bVar1 < 0xc2) break;
        if (bVar1 < 0xe0) {
          if ((((long)param_2 - (long)pbVar3 < 2) || ((pbVar3[1] & 0xc0) != 0x80)) ||
             (param_4 < (((ulong)bVar1 & 0x1f) << 6 | (ulong)pbVar3[1] & 0x3f))) break;
          pbVar3 = pbVar3 + 2;
        }
        else if (bVar1 < 0xf0) {
          if ((long)param_2 - (long)pbVar3 < 3) break;
          bVar2 = pbVar3[1];
          if (bVar1 == 0xed) {
            bVar5 = bVar2 & 0xe0;
LAB_001cf8bc:
            if (bVar5 != 0x80) break;
          }
          else {
            if (bVar1 != 0xe0) {
              bVar5 = bVar2 & 0xc0;
              goto LAB_001cf8bc;
            }
            if ((bVar2 & 0xe0) != 0xa0) break;
          }
          if (((pbVar3[2] & 0xc0) != 0x80) ||
             (param_4 < (((ulong)bVar1 & 0xf) << 0xc | ((ulong)bVar2 & 0x3f) << 6 |
                        (ulong)pbVar3[2] & 0x3f))) break;
          pbVar3 = pbVar3 + 3;
        }
        else {
          if (((0xf4 < bVar1) || (param_3 - uVar4 < 2)) || ((long)param_2 - (long)pbVar3 < 4))
          break;
          bVar2 = pbVar3[1];
          if (bVar1 == 0xf4) {
            bVar5 = bVar2 & 0xf0;
LAB_001cf900:
            if (bVar5 != 0x80) break;
          }
          else {
            if (bVar1 != 0xf0) {
              bVar5 = bVar2 & 0xc0;
              goto LAB_001cf900;
            }
            if (0x2f < (byte)(bVar2 + 0x70)) break;
          }
          if ((((pbVar3[2] & 0xc0) != 0x80) || ((pbVar3[3] & 0xc0) != 0x80)) ||
             (param_4 < (((ulong)bVar1 & 7) << 0x12 | ((ulong)bVar2 & 0x3f) << 0xc |
                         ((ulong)pbVar3[2] & 0x3f) << 6 | (ulong)pbVar3[3] & 0x3f))) break;
          uVar4 = uVar4 + 1;
          pbVar3 = pbVar3 + 4;
        }
      }
      else {
        pbVar3 = pbVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      if ((param_3 <= uVar4) || (param_2 <= pbVar3)) break;
    }
  }
  return (int)pbVar3 - (int)param_1;
}


// ===== 001cf968  std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_max_length =====

/* std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_max_length() const */

undefined8 std::__ndk1::codecvt<char16_t,char,mbstate_t>::do_max_length(void)

{
  return 4;
}


// ===== 001cf970  std::__ndk1::codecvt<char32_t,char,mbstate_t>::~codecvt =====

/* std::__ndk1::codecvt<char32_t, char, mbstate_t>::~codecvt() */

void __thiscall
std::__ndk1::codecvt<char32_t,char,mbstate_t>::~codecvt(codecvt<char32_t,char,mbstate_t> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001cf994  std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_out =====

/* std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_out(mbstate_t&, char32_t const*, char32_t
   const*, char32_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_out
          (codecvt<char32_t,char,mbstate_t> *this,mbstate_t *param_1,wchar32 *param_2,
          wchar32 *param_3,wchar32 **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar32 wVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  if (param_2 < param_3) {
    uVar3 = 2;
    pbVar4 = (byte *)param_5;
    do {
      wVar1 = *param_2;
      if ((0x10 < (uint)wVar1 >> 0x10) || ((wVar1 & 0xfffff800U) == 0xd800)) goto LAB_001cfaa4;
      bVar2 = (byte)wVar1;
      if ((uint)wVar1 < 0x80) {
        if ((long)param_6 - (long)pbVar4 < 1) goto LAB_001cfab0;
        param_5 = (char *)(pbVar4 + 1);
        *pbVar4 = bVar2;
      }
      else if ((uint)wVar1 < 0x800) {
        if ((long)param_6 - (long)pbVar4 < 2) goto LAB_001cfab0;
        *pbVar4 = (byte)((uint)wVar1 >> 6) | 0xc0;
        param_5 = (char *)(pbVar4 + 2);
        pbVar4[1] = bVar2 & 0x3f | 0x80;
      }
      else if ((uint)wVar1 >> 0x10 == 0) {
        if ((long)param_6 - (long)pbVar4 < 3) {
LAB_001cfab0:
          uVar3 = 1;
          goto LAB_001cfaa4;
        }
        *pbVar4 = (byte)((uint)wVar1 >> 0xc) | 0xe0;
        pbVar4[1] = (byte)((uint)wVar1 >> 6) & 0x3f | 0x80;
        param_5 = (char *)(pbVar4 + 3);
        pbVar4[2] = bVar2 & 0x3f | 0x80;
      }
      else {
        if ((long)param_6 - (long)pbVar4 < 4) goto LAB_001cfab0;
        param_5 = (char *)(pbVar4 + 4);
        *pbVar4 = (byte)((uint)wVar1 >> 0x12) | 0xf0;
        pbVar4[1] = (byte)((uint)wVar1 >> 0xc) & 0x3f | 0x80;
        pbVar4[2] = (byte)((uint)wVar1 >> 6) & 0x3f | 0x80;
        pbVar4[3] = bVar2 & 0x3f | 0x80;
      }
      param_2 = param_2 + 1;
      pbVar4 = (byte *)param_5;
    } while (param_2 < param_3);
  }
  uVar3 = 0;
  pbVar4 = (byte *)param_5;
LAB_001cfaa4:
  *param_4 = param_2;
  *param_7 = (char *)pbVar4;
  return uVar3;
}


// ===== 001cfab8  FUN_001cfab8 =====

undefined8
FUN_001cfab8(long param_1,uint *param_2,long *param_3,undefined1 *param_4,long param_5,long *param_6
            ,ulong param_7,uint param_8)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  
  *param_3 = param_1;
  *param_6 = (long)param_4;
  if ((param_8 >> 1 & 1) != 0) {
    if (param_5 - (long)param_4 < 3) {
      return 1;
    }
    *param_6 = (long)(param_4 + 1);
    *param_4 = 0xef;
    puVar2 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar2 + 1);
    *puVar2 = 0xbb;
    puVar2 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar2 + 1);
    *puVar2 = 0xbf;
  }
  puVar3 = (uint *)*param_3;
  while( true ) {
    if (param_2 <= puVar3) {
      return 0;
    }
    uVar1 = *puVar3;
    if (uVar1 >> 0xb == 0x1b) break;
    if (param_7 < uVar1) {
      return 2;
    }
    if (uVar1 < 0x80) {
      pbVar4 = (byte *)*param_6;
      if (param_5 - (long)pbVar4 < 1) {
        return 1;
      }
      *param_6 = (long)(pbVar4 + 1);
      *pbVar4 = (byte)uVar1;
    }
    else {
      if (uVar1 < 0x800) {
        pbVar4 = (byte *)*param_6;
        if (param_5 - (long)pbVar4 < 2) {
          return 1;
        }
        bVar5 = (byte)(uVar1 >> 6) | 0xc0;
      }
      else {
        pbVar4 = (byte *)*param_6;
        if (uVar1 >> 0x10 == 0) {
          if (param_5 - (long)pbVar4 < 3) {
            return 1;
          }
          bVar5 = (byte)(uVar1 >> 0xc) | 0xe0;
        }
        else {
          if (param_5 - (long)pbVar4 < 4) {
            return 1;
          }
          *param_6 = (long)(pbVar4 + 1);
          *pbVar4 = (byte)(uVar1 >> 0x12) | 0xf0;
          pbVar4 = (byte *)*param_6;
          bVar5 = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
        }
        *param_6 = (long)(pbVar4 + 1);
        *pbVar4 = bVar5;
        pbVar4 = (byte *)*param_6;
        bVar5 = (byte)(uVar1 >> 6) & 0x3f | 0x80;
      }
      *param_6 = (long)(pbVar4 + 1);
      *pbVar4 = bVar5;
      pbVar4 = (byte *)*param_6;
      *param_6 = (long)(pbVar4 + 1);
      *pbVar4 = (byte)uVar1 & 0x3f | 0x80;
    }
    puVar3 = (uint *)(*param_3 + 4);
    *param_3 = (long)puVar3;
  }
  return 2;
}


// ===== 001cfc38  std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_in =====

/* std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_in(mbstate_t&, char const*, char const*, char
   const*&, char32_t*, char32_t*, char32_t*&) const */

void __thiscall
std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_in
          (codecvt<char32_t,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar32 *param_5,wchar32 *param_6,wchar32 **param_7)

{
  long lVar1;
  wchar32 *local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_001cfcc8(param_2,param_3,&local_40,param_5,param_6,&local_48,0x10ffff,0);
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001cfcc8  FUN_001cfcc8 =====

undefined8
FUN_001cfcc8(long param_1,byte *param_2,long *param_3,ulong param_4,undefined4 *param_5,
            ulong *param_6,ulong param_7,uint param_8)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  ulong uVar8;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar6 = (byte *)*param_3;
  if (((((param_8 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)pbVar6)) && (*pbVar6 == 0xef)) &&
     ((pbVar6[1] == 0xbb && (pbVar6[2] == 0xbf)))) {
    pbVar6 = pbVar6 + 3;
    *param_3 = (long)pbVar6;
  }
  if (pbVar6 < param_2) {
    puVar7 = (undefined4 *)*param_6;
    do {
      if (param_5 <= puVar7) {
        return 1;
      }
      bVar4 = *pbVar6;
      uVar2 = (uint)bVar4;
      uVar8 = (ulong)uVar2;
      if ((char)bVar4 < '\0') {
        if (bVar4 < 0xc2) {
          return 2;
        }
        if (bVar4 < 0xe0) {
          if ((long)param_2 - (long)pbVar6 < 2) {
            return 1;
          }
          if ((pbVar6[1] & 0xc0) != 0x80) {
            return 2;
          }
          uVar8 = ((ulong)bVar4 & 0x1f) << 6 | (ulong)pbVar6[1] & 0x3f;
          lVar5 = 2;
          if (param_7 < uVar8) {
            return 2;
          }
        }
        else if (bVar4 < 0xf0) {
          if ((long)param_2 - (long)pbVar6 < 3) {
            return 1;
          }
          bVar3 = pbVar6[1];
          if (uVar2 == 0xed) {
            bVar1 = bVar3 & 0xe0;
joined_r0x001cfe3c:
            if (bVar1 != 0x80) {
              return 2;
            }
          }
          else {
            if (uVar2 != 0xe0) {
              bVar1 = bVar3 & 0xc0;
              goto joined_r0x001cfe3c;
            }
            if ((bVar3 & 0xe0) != 0xa0) {
              return 2;
            }
          }
          if (((pbVar6[2] & 0xc0) != 0x80) ||
             (uVar8 = ((ulong)bVar4 & 0xf) << 0xc | ((ulong)bVar3 & 0x3f) << 6 |
                      (ulong)pbVar6[2] & 0x3f, param_7 < uVar8)) {
            return 2;
          }
          lVar5 = 3;
        }
        else {
          if (0xf4 < bVar4) {
            return 2;
          }
          if ((long)param_2 - (long)pbVar6 < 4) {
            return 1;
          }
          bVar3 = pbVar6[1];
          if (bVar4 == 0xf4) {
            bVar1 = bVar3 & 0xf0;
joined_r0x001cfe88:
            if (bVar1 != 0x80) {
              return 2;
            }
          }
          else {
            if (bVar4 != 0xf0) {
              bVar1 = bVar3 & 0xc0;
              goto joined_r0x001cfe88;
            }
            if (0x2f < (byte)(bVar3 + 0x70)) {
              return 2;
            }
          }
          if ((pbVar6[2] & 0xc0) != 0x80) {
            return 2;
          }
          if ((pbVar6[3] & 0xc0) != 0x80) {
            return 2;
          }
          uVar8 = ((ulong)bVar4 & 7) << 0x12 | ((ulong)bVar3 & 0x3f) << 0xc |
                  ((ulong)pbVar6[2] & 0x3f) << 6 | (ulong)pbVar6[3] & 0x3f;
          if (param_7 < uVar8) {
            return 2;
          }
          lVar5 = 4;
        }
      }
      else {
        if (param_7 < bVar4) {
          return 2;
        }
        lVar5 = 1;
      }
      *puVar7 = (int)uVar8;
      *param_3 = (long)(pbVar6 + lVar5);
      puVar7 = (undefined4 *)(*param_6 + 4);
      *param_6 = (ulong)puVar7;
      pbVar6 = (byte *)*param_3;
    } while (pbVar6 < param_2);
  }
  return 0;
}


// ===== 001cfef8  std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_unshift =====

/* std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_unshift(mbstate_t&, char*, char*, char*&)
   const */

undefined8 __thiscall
std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_unshift
          (codecvt<char32_t,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001cff04  std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_encoding =====

/* std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_encoding() const */

undefined8 std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_encoding(void)

{
  return 0;
}


// ===== 001cff0c  std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_always_noconv =====

/* std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_always_noconv() const */

undefined8 std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_always_noconv(void)

{
  return 0;
}


// ===== 001cff14  std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_length =====

/* std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

void __thiscall
std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_length
          (codecvt<char32_t,char,mbstate_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  FUN_001cff2c(param_2,param_3,param_4,0x10ffff,0);
  return;
}


// ===== 001cff2c  FUN_001cff2c =====

int FUN_001cff2c(byte *param_1,byte *param_2,ulong param_3,ulong param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  byte bVar5;
  
  pbVar3 = param_1;
  if (((((param_5 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)param_1)) && (*param_1 == 0xef)) &&
     ((param_1[1] == 0xbb && (pbVar3 = param_1 + 3, param_1[2] != 0xbf)))) {
    pbVar3 = param_1;
  }
  if ((param_3 != 0) && (pbVar3 < param_2)) {
    uVar4 = 1;
    do {
      bVar2 = *pbVar3;
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xc2) break;
        if (bVar2 < 0xe0) {
          if ((((long)param_2 - (long)pbVar3 < 2) || ((pbVar3[1] & 0xc0) != 0x80)) ||
             (param_4 < (((ulong)bVar2 & 0x1f) << 6 | (ulong)pbVar3[1] & 0x3f))) break;
          pbVar3 = pbVar3 + 2;
        }
        else if (bVar2 < 0xf0) {
          if ((long)param_2 - (long)pbVar3 < 3) break;
          bVar1 = pbVar3[1];
          if (bVar2 == 0xed) {
            bVar5 = bVar1 & 0xe0;
LAB_001d0088:
            if (bVar5 != 0x80) break;
          }
          else {
            if (bVar2 != 0xe0) {
              bVar5 = bVar1 & 0xc0;
              goto LAB_001d0088;
            }
            if ((bVar1 & 0xe0) != 0xa0) break;
          }
          if (((pbVar3[2] & 0xc0) != 0x80) ||
             (param_4 < (((ulong)bVar2 & 0xf) << 0xc | ((ulong)bVar1 & 0x3f) << 6 |
                        (ulong)pbVar3[2] & 0x3f))) break;
          pbVar3 = pbVar3 + 3;
        }
        else {
          if ((0xf4 < bVar2) || ((long)param_2 - (long)pbVar3 < 4)) break;
          bVar1 = pbVar3[1];
          if (bVar2 == 0xf4) {
            bVar5 = bVar1 & 0xf0;
LAB_001d00d4:
            if (bVar5 != 0x80) break;
          }
          else {
            if (bVar2 != 0xf0) {
              bVar5 = bVar1 & 0xc0;
              goto LAB_001d00d4;
            }
            if (0x2f < (byte)(bVar1 + 0x70)) break;
          }
          if ((((pbVar3[2] & 0xc0) != 0x80) || ((pbVar3[3] & 0xc0) != 0x80)) ||
             (param_4 < (((ulong)bVar2 & 7) << 0x12 | ((ulong)bVar1 & 0x3f) << 0xc |
                         ((ulong)pbVar3[2] & 0x3f) << 6 | (ulong)pbVar3[3] & 0x3f))) break;
          pbVar3 = pbVar3 + 4;
        }
      }
      else {
        if (param_4 < bVar2) break;
        pbVar3 = pbVar3 + 1;
      }
      if ((param_3 <= uVar4) || (uVar4 = uVar4 + 1, param_2 <= pbVar3)) break;
    } while( true );
  }
  return (int)pbVar3 - (int)param_1;
}


// ===== 001d0138  std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_max_length =====

/* std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_max_length() const */

undefined8 std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_max_length(void)

{
  return 4;
}


// ===== 001d0140  std::__ndk1::__codecvt_utf8<wchar_t>::do_out =====

/* std::__ndk1::__codecvt_utf8<wchar_t>::do_out(mbstate_t&, wchar_t const*, wchar_t const*, wchar_t
   const*&, char*, char*, char*&) const */

void __thiscall
std::__ndk1::__codecvt_utf8<wchar_t>::do_out
          (__codecvt_utf8<wchar_t> *this,mbstate_t *param_1,wchar_t *param_2,wchar_t *param_3,
          wchar_t **param_4,char *param_5,char *param_6,char **param_7)

{
  long lVar1;
  char *local_48;
  wchar_t *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_001cfab8(param_2,param_3,&local_40,param_5,param_6,&local_48,*(undefined8 *)(this + 0x18),
               *(undefined4 *)(this + 0x20));
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d01d4  std::__ndk1::__codecvt_utf8<wchar_t>::do_in =====

/* std::__ndk1::__codecvt_utf8<wchar_t>::do_in(mbstate_t&, char const*, char const*, char const*&,
   wchar_t*, wchar_t*, wchar_t*&) const */

void __thiscall
std::__ndk1::__codecvt_utf8<wchar_t>::do_in
          (__codecvt_utf8<wchar_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar_t *param_5,wchar_t *param_6,wchar_t **param_7)

{
  long lVar1;
  wchar_t *local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_001cfcc8(param_2,param_3,&local_40,param_5,param_6,&local_48,*(undefined8 *)(this + 0x18),
               *(undefined4 *)(this + 0x20));
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d0268  std::__ndk1::__codecvt_utf8<wchar_t>::do_unshift =====

/* std::__ndk1::__codecvt_utf8<wchar_t>::do_unshift(mbstate_t&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf8<wchar_t>::do_unshift
          (__codecvt_utf8<wchar_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001d0274  std::__ndk1::__codecvt_utf8<wchar_t>::do_encoding =====

/* std::__ndk1::__codecvt_utf8<wchar_t>::do_encoding() const */

undefined8 std::__ndk1::__codecvt_utf8<wchar_t>::do_encoding(void)

{
  return 0;
}


// ===== 001d027c  std::__ndk1::__codecvt_utf8<wchar_t>::do_always_noconv =====

/* std::__ndk1::__codecvt_utf8<wchar_t>::do_always_noconv() const */

undefined8 std::__ndk1::__codecvt_utf8<wchar_t>::do_always_noconv(void)

{
  return 0;
}


// ===== 001d0284  std::__ndk1::__codecvt_utf8<wchar_t>::do_length =====

/* std::__ndk1::__codecvt_utf8<wchar_t>::do_length(mbstate_t&, char const*, char const*, unsigned
   long) const */

void __thiscall
std::__ndk1::__codecvt_utf8<wchar_t>::do_length
          (__codecvt_utf8<wchar_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  FUN_001cff2c(param_2,param_3,param_4,*(undefined8 *)(this + 0x18),*(undefined4 *)(this + 0x20));
  return;
}


// ===== 001d02a0  std::__ndk1::__codecvt_utf8<wchar_t>::do_max_length =====

/* std::__ndk1::__codecvt_utf8<wchar_t>::do_max_length() const */

undefined4 __thiscall
std::__ndk1::__codecvt_utf8<wchar_t>::do_max_length(__codecvt_utf8<wchar_t> *this)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (((byte)this[0x20] & 4) != 0) {
    uVar1 = 7;
  }
  return uVar1;
}


// ===== 001d02b8  std::__ndk1::__codecvt_utf8<char16_t>::do_out =====

/* std::__ndk1::__codecvt_utf8<char16_t>::do_out(mbstate_t&, char16_t const*, char16_t const*,
   char16_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf8<char16_t>::do_out
          (__codecvt_utf8<char16_t> *this,mbstate_t *param_1,wchar16 *param_2,wchar16 *param_3,
          wchar16 **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar16 wVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(this + 0x10);
  pbVar4 = (byte *)param_5;
  if (((byte)this[0x18] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 3) {
LAB_001d02d0:
      uVar3 = 1;
      pbVar4 = (byte *)param_5;
      goto LAB_001d03b0;
    }
    param_5[0] = -0x11;
    param_5[1] = -0x45;
    pbVar4 = (byte *)(param_5 + 3);
    param_5[2] = -0x41;
  }
  if (param_2 < param_3) {
    uVar3 = 2;
    param_5 = (char *)pbVar4;
    do {
      wVar1 = *param_2;
      pbVar4 = (byte *)param_5;
      if (((ushort)wVar1 >> 0xb == 0x1b) || (uVar5 < (ushort)wVar1)) goto LAB_001d03b0;
      bVar2 = (byte)wVar1;
      if ((ushort)wVar1 < 0x80) {
        if ((long)param_6 - (long)param_5 < 1) goto LAB_001d02d0;
        pbVar4 = (byte *)param_5 + 1;
        *param_5 = bVar2;
      }
      else if ((ushort)wVar1 < 0x800) {
        if ((long)param_6 - (long)param_5 < 2) goto LAB_001d02d0;
        *param_5 = (byte)((ushort)wVar1 >> 6) | 0xc0;
        pbVar4 = (byte *)param_5 + 2;
        ((byte *)param_5)[1] = bVar2 & 0x3f | 0x80;
      }
      else {
        if ((long)param_6 - (long)param_5 < 3) goto LAB_001d02d0;
        pbVar4 = (byte *)param_5 + 3;
        *param_5 = (byte)((ushort)wVar1 >> 0xc) | 0xe0;
        ((byte *)param_5)[1] = (byte)((ushort)wVar1 >> 6) & 0x3f | 0x80;
        ((byte *)param_5)[2] = bVar2 & 0x3f | 0x80;
      }
      param_2 = param_2 + 1;
      param_5 = (char *)pbVar4;
    } while (param_2 < param_3);
  }
  uVar3 = 0;
LAB_001d03b0:
  *param_4 = param_2;
  *param_7 = (char *)pbVar4;
  return uVar3;
}


// ===== 001d03bc  std::__ndk1::__codecvt_utf8<char16_t>::do_in =====

/* std::__ndk1::__codecvt_utf8<char16_t>::do_in(mbstate_t&, char const*, char const*, char const*&,
   char16_t*, char16_t*, char16_t*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf8<char16_t>::do_in
          (__codecvt_utf8<char16_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar16 *param_5,wchar16 *param_6,wchar16 **param_7)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar6 = *(ulong *)(this + 0x10);
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (2 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -0x11)) && ((param_2[1] == -0x45 && (param_2[2] == -0x41)))) {
    param_2 = param_2 + 3;
  }
  do {
    if (param_3 <= param_2) {
      uVar5 = 0;
LAB_001d0518:
      *param_4 = param_2;
      *param_7 = param_5;
      return uVar5;
    }
    if (param_6 <= param_5) goto LAB_001d050c;
    bVar4 = *param_2;
    uVar7 = (ulong)bVar4;
    if ((char)bVar4 < '\0') {
      if (0xc1 < bVar4) {
        if (bVar4 < 0xe0) {
          if ((long)param_3 - (long)param_2 < 2) {
LAB_001d050c:
            uVar5 = 1;
            goto LAB_001d0518;
          }
          if (((((byte *)param_2)[1] & 0xc0) == 0x80) &&
             (uVar7 = ((ulong)bVar4 & 0x1f) << 6 | (ulong)((byte *)param_2)[1] & 0x3f,
             uVar7 <= uVar6)) {
            lVar9 = 2;
            goto LAB_001d04f4;
          }
        }
        else if (bVar4 < 0xf0) {
          if ((long)param_3 - (long)param_2 < 3) goto LAB_001d050c;
          bVar3 = ((byte *)param_2)[1];
          if (bVar4 == 0xed) {
            bVar4 = bVar3 & 0xe0;
joined_r0x001d04b8:
            if (bVar4 != 0x80) goto LAB_001d0514;
          }
          else {
            if (bVar4 != 0xe0) {
              bVar4 = bVar3 & 0xc0;
              goto joined_r0x001d04b8;
            }
            if ((bVar3 & 0xe0) != 0xa0) goto LAB_001d0514;
          }
          if (((((byte *)param_2)[2] & 0xc0) == 0x80) &&
             (uVar8 = uVar7 << 0xc, uVar1 = ((ulong)bVar3 & 0x3f) << 6,
             uVar2 = (ulong)((byte *)param_2)[2] & 0x3f, uVar7 = uVar8 | uVar1 | uVar2,
             (uVar8 & 0xffc0 | uVar1 | uVar2) <= uVar6)) {
            lVar9 = 3;
            goto LAB_001d04f4;
          }
        }
      }
LAB_001d0514:
      uVar5 = 2;
      goto LAB_001d0518;
    }
    if (uVar6 < uVar7) goto LAB_001d0514;
    lVar9 = 1;
LAB_001d04f4:
    param_2 = (char *)((byte *)param_2 + lVar9);
    *param_5 = (wchar16)uVar7;
    param_5 = param_5 + 1;
  } while( true );
}


// ===== 001d0524  std::__ndk1::__codecvt_utf8<char16_t>::do_unshift =====

/* std::__ndk1::__codecvt_utf8<char16_t>::do_unshift(mbstate_t&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf8<char16_t>::do_unshift
          (__codecvt_utf8<char16_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001d0530  std::__ndk1::__codecvt_utf8<char16_t>::do_encoding =====

/* std::__ndk1::__codecvt_utf8<char16_t>::do_encoding() const */

undefined8 std::__ndk1::__codecvt_utf8<char16_t>::do_encoding(void)

{
  return 0;
}


// ===== 001d0538  std::__ndk1::__codecvt_utf8<char16_t>::do_always_noconv =====

/* std::__ndk1::__codecvt_utf8<char16_t>::do_always_noconv() const */

undefined8 std::__ndk1::__codecvt_utf8<char16_t>::do_always_noconv(void)

{
  return 0;
}


// ===== 001d0540  std::__ndk1::__codecvt_utf8<char16_t>::do_length =====

/* std::__ndk1::__codecvt_utf8<char16_t>::do_length(mbstate_t&, char const*, char const*, unsigned
   long) const */

int __thiscall
std::__ndk1::__codecvt_utf8<char16_t>::do_length
          (__codecvt_utf8<char16_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  
  uVar4 = *(ulong *)(this + 0x10);
  pbVar3 = (byte *)param_2;
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (2 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -0x11)) &&
     ((param_2[1] == -0x45 && (pbVar3 = (byte *)(param_2 + 3), param_2[2] != -0x41)))) {
    pbVar3 = (byte *)param_2;
  }
  if ((param_4 != 0) && (pbVar3 < param_3)) {
    uVar5 = 1;
    do {
      bVar2 = *pbVar3;
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xc2) break;
        if (bVar2 < 0xe0) {
          if ((((long)param_3 - (long)pbVar3 < 2) || ((pbVar3[1] & 0xc0) != 0x80)) ||
             (uVar4 < (((ulong)bVar2 & 0x1f) << 6 | (ulong)pbVar3[1] & 0x3f))) break;
          pbVar3 = pbVar3 + 2;
        }
        else {
          if ((0xef < bVar2) || ((long)param_3 - (long)pbVar3 < 3)) break;
          bVar1 = pbVar3[1];
          if (bVar2 == 0xed) {
            bVar6 = bVar1 & 0xe0;
LAB_001d0660:
            if (bVar6 != 0x80) break;
          }
          else {
            if (bVar2 != 0xe0) {
              bVar6 = bVar1 & 0xc0;
              goto LAB_001d0660;
            }
            if ((bVar1 & 0xe0) != 0xa0) break;
          }
          if (((pbVar3[2] & 0xc0) != 0x80) ||
             (uVar4 < (((ulong)bVar2 & 0xf) << 0xc | ((ulong)bVar1 & 0x3f) << 6 |
                      (ulong)pbVar3[2] & 0x3f))) break;
          pbVar3 = pbVar3 + 3;
        }
      }
      else {
        if (uVar4 < bVar2) break;
        pbVar3 = pbVar3 + 1;
      }
      if ((param_4 <= uVar5) || (uVar5 = uVar5 + 1, param_3 <= pbVar3)) break;
    } while( true );
  }
  return (int)pbVar3 - (int)param_2;
}


// ===== 001d06b0  std::__ndk1::__codecvt_utf8<char16_t>::do_max_length =====

/* std::__ndk1::__codecvt_utf8<char16_t>::do_max_length() const */

undefined4 __thiscall
std::__ndk1::__codecvt_utf8<char16_t>::do_max_length(__codecvt_utf8<char16_t> *this)

{
  undefined4 uVar1;
  
  uVar1 = 3;
  if (((byte)this[0x18] & 4) != 0) {
    uVar1 = 6;
  }
  return uVar1;
}


// ===== 001d06c8  std::__ndk1::__codecvt_utf8<char32_t>::do_out =====

/* std::__ndk1::__codecvt_utf8<char32_t>::do_out(mbstate_t&, char32_t const*, char32_t const*,
   char32_t const*&, char*, char*, char*&) const */

void __thiscall
std::__ndk1::__codecvt_utf8<char32_t>::do_out
          (__codecvt_utf8<char32_t> *this,mbstate_t *param_1,wchar32 *param_2,wchar32 *param_3,
          wchar32 **param_4,char *param_5,char *param_6,char **param_7)

{
  long lVar1;
  char *local_48;
  wchar32 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_001cfab8(param_2,param_3,&local_40,param_5,param_6,&local_48,*(undefined8 *)(this + 0x10),
               *(undefined4 *)(this + 0x18));
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d075c  std::__ndk1::__codecvt_utf8<char32_t>::do_in =====

/* std::__ndk1::__codecvt_utf8<char32_t>::do_in(mbstate_t&, char const*, char const*, char const*&,
   char32_t*, char32_t*, char32_t*&) const */

void __thiscall
std::__ndk1::__codecvt_utf8<char32_t>::do_in
          (__codecvt_utf8<char32_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar32 *param_5,wchar32 *param_6,wchar32 **param_7)

{
  long lVar1;
  wchar32 *local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_001cfcc8(param_2,param_3,&local_40,param_5,param_6,&local_48,*(undefined8 *)(this + 0x10),
               *(undefined4 *)(this + 0x18));
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d07f0  std::__ndk1::__codecvt_utf8<char32_t>::do_unshift =====

/* std::__ndk1::__codecvt_utf8<char32_t>::do_unshift(mbstate_t&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf8<char32_t>::do_unshift
          (__codecvt_utf8<char32_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001d07fc  std::__ndk1::__codecvt_utf8<char32_t>::do_encoding =====

/* std::__ndk1::__codecvt_utf8<char32_t>::do_encoding() const */

undefined8 std::__ndk1::__codecvt_utf8<char32_t>::do_encoding(void)

{
  return 0;
}


// ===== 001d0804  std::__ndk1::__codecvt_utf8<char32_t>::do_always_noconv =====

/* std::__ndk1::__codecvt_utf8<char32_t>::do_always_noconv() const */

undefined8 std::__ndk1::__codecvt_utf8<char32_t>::do_always_noconv(void)

{
  return 0;
}


// ===== 001d080c  std::__ndk1::__codecvt_utf8<char32_t>::do_length =====

/* std::__ndk1::__codecvt_utf8<char32_t>::do_length(mbstate_t&, char const*, char const*, unsigned
   long) const */

void __thiscall
std::__ndk1::__codecvt_utf8<char32_t>::do_length
          (__codecvt_utf8<char32_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  FUN_001cff2c(param_2,param_3,param_4,*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x18));
  return;
}


// ===== 001d0828  std::__ndk1::__codecvt_utf8<char32_t>::do_max_length =====

/* std::__ndk1::__codecvt_utf8<char32_t>::do_max_length() const */

undefined4 __thiscall
std::__ndk1::__codecvt_utf8<char32_t>::do_max_length(__codecvt_utf8<char32_t> *this)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (((byte)this[0x18] & 4) != 0) {
    uVar1 = 7;
  }
  return uVar1;
}


// ===== 001d0840  std::__ndk1::__codecvt_utf16<wchar_t,false>::do_out =====

/* std::__ndk1::__codecvt_utf16<wchar_t, false>::do_out(mbstate_t&, wchar_t const*, wchar_t const*,
   wchar_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,false>::do_out
          (__codecvt_utf16<wchar_t,false> *this,mbstate_t *param_1,wchar_t *param_2,wchar_t *param_3
          ,wchar_t **param_4,char *param_5,char *param_6,char **param_7)

{
  int iVar1;
  wchar_t wVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  
  uVar5 = *(ulong *)(this + 0x18);
  if (((byte)this[0x20] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) {
LAB_001d0858:
      uVar4 = 1;
      goto LAB_001d0914;
    }
    param_5[0] = -2;
    param_5[1] = -1;
    param_5 = param_5 + 2;
  }
  if (param_2 < param_3) {
    uVar4 = 2;
    do {
      wVar2 = *param_2;
      if (((uint)wVar2 >> 0xb == 0x1b) || (uVar5 < (uint)wVar2)) goto LAB_001d0914;
      bVar3 = (byte)((uint)wVar2 >> 8);
      if ((uint)wVar2 >> 0x10 == 0) {
        if ((long)param_6 - (long)param_5 < 2) goto LAB_001d0858;
        pbVar6 = (byte *)param_5 + 1;
        *param_5 = bVar3;
        lVar7 = 2;
      }
      else {
        if ((long)param_6 - (long)param_5 < 4) goto LAB_001d0858;
        iVar1 = ((uint)wVar2 >> 10 & 0x7c0) + 0x3fc0;
        ((byte *)param_5)[2] = bVar3 & 3 | 0xdc;
        pbVar6 = (byte *)param_5 + 3;
        ((byte *)param_5)[1] = (byte)iVar1 | (byte)((uint)wVar2 >> 10) & 0x3f;
        lVar7 = 4;
        *param_5 = (byte)((uint)iVar1 >> 8) | 0xd8;
      }
      param_2 = param_2 + 1;
      param_5 = (char *)((byte *)param_5 + lVar7);
      *pbVar6 = (byte)wVar2;
    } while (param_2 < param_3);
  }
  uVar4 = 0;
LAB_001d0914:
  *param_4 = param_2;
  *param_7 = param_5;
  return uVar4;
}


// ===== 001d0920  std::__ndk1::__codecvt_utf16<wchar_t,false>::do_in =====

/* std::__ndk1::__codecvt_utf16<wchar_t, false>::do_in(mbstate_t&, char const*, char const*, char
   const*&, wchar_t*, wchar_t*, wchar_t*&) const */

ulong __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,false>::do_in
          (__codecvt_utf16<wchar_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar_t *param_5,wchar_t *param_6,wchar_t **param_7)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(this + 0x18);
  if ((((((byte)this[0x20] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -2)) && (param_2[1] == -1)) {
    param_2 = param_2 + 2;
  }
  for (; (param_2 < param_3 + -1 && (param_5 < param_6)); param_5 = param_5 + 1) {
    bVar1 = *param_2 & 0xfc;
    uVar2 = CONCAT11(*param_2,((byte *)param_2)[1]);
    uVar5 = (ulong)uVar2;
    if (bVar1 == 0xd8) {
      if ((long)param_3 - (long)param_2 < 4) {
        uVar3 = 1;
        goto LAB_001d0a1c;
      }
      if (((((byte *)param_2)[2] & 0xfc) != 0xdc) ||
         (uVar5 = (((ulong)uVar2 & 0x3ff) << 10 | ((ulong)((byte *)param_2)[2] & 3) << 8 |
                  (ulong)((byte *)param_2)[3]) + 0x10000, uVar4 < uVar5)) goto LAB_001d0a10;
      uVar3 = 4;
    }
    else {
      if (bVar1 == 0xdc) {
LAB_001d0a10:
        uVar3 = 2;
        goto LAB_001d0a1c;
      }
      uVar3 = 2;
      if (uVar4 < uVar5) goto LAB_001d0a1c;
    }
    param_2 = (char *)((byte *)param_2 + uVar3);
    *param_5 = (wchar_t)uVar5;
  }
  uVar3 = (ulong)(param_2 < param_3);
LAB_001d0a1c:
  *param_4 = param_2;
  *param_7 = param_5;
  return uVar3;
}


// ===== 001d0a28  std::__ndk1::__codecvt_utf16<wchar_t,false>::do_unshift =====

/* std::__ndk1::__codecvt_utf16<wchar_t, false>::do_unshift(mbstate_t&, char*, char*, char*&) const
    */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,false>::do_unshift
          (__codecvt_utf16<wchar_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001d0a34  std::__ndk1::__codecvt_utf16<wchar_t,false>::do_encoding =====

/* std::__ndk1::__codecvt_utf16<wchar_t, false>::do_encoding() const */

undefined8 std::__ndk1::__codecvt_utf16<wchar_t,false>::do_encoding(void)

{
  return 0;
}


// ===== 001d0a3c  std::__ndk1::__codecvt_utf16<wchar_t,false>::do_always_noconv =====

/* std::__ndk1::__codecvt_utf16<wchar_t, false>::do_always_noconv() const */

undefined8 std::__ndk1::__codecvt_utf16<wchar_t,false>::do_always_noconv(void)

{
  return 0;
}


// ===== 001d0a44  std::__ndk1::__codecvt_utf16<wchar_t,false>::do_length =====

/* std::__ndk1::__codecvt_utf16<wchar_t, false>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,false>::do_length
          (__codecvt_utf16<wchar_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  pbVar3 = (byte *)param_2;
  if ((((((byte)this[0x20] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -2)) && (pbVar3 = (byte *)(param_2 + 2), param_2[1] != -1)) {
    pbVar3 = (byte *)param_2;
  }
  if ((param_4 != 0) && (pbVar3 < param_3 + -1)) {
    uVar4 = 1;
    do {
      bVar1 = *pbVar3 & 0xfc;
      uVar2 = CONCAT11(*pbVar3,pbVar3[1]);
      if (bVar1 == 0xd8) {
        if ((((long)param_3 - (long)pbVar3 < 4) || ((pbVar3[2] & 0xfc) != 0xdc)) ||
           (*(ulong *)(this + 0x18) <
            (((ulong)uVar2 & 0x3ff) << 10 | ((ulong)pbVar3[2] & 3) << 8 | (ulong)pbVar3[3]) +
            0x10000)) break;
        pbVar3 = pbVar3 + 4;
      }
      else {
        if ((bVar1 == 0xdc) || (*(ulong *)(this + 0x18) < (ulong)uVar2)) break;
        pbVar3 = pbVar3 + 2;
      }
      if ((param_4 <= uVar4) || (uVar4 = uVar4 + 1, param_3 + -1 <= pbVar3)) break;
    } while( true );
  }
  return (int)pbVar3 - (int)param_2;
}


// ===== 001d0b40  std::__ndk1::__codecvt_utf16<wchar_t,false>::do_max_length =====

/* std::__ndk1::__codecvt_utf16<wchar_t, false>::do_max_length() const */

undefined4 __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,false>::do_max_length(__codecvt_utf16<wchar_t,false> *this)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (((byte)this[0x20] & 4) != 0) {
    uVar1 = 6;
  }
  return uVar1;
}


// ===== 001d0b58  std::__ndk1::__codecvt_utf16<wchar_t,true>::do_out =====

/* std::__ndk1::__codecvt_utf16<wchar_t, true>::do_out(mbstate_t&, wchar_t const*, wchar_t const*,
   wchar_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,true>::do_out
          (__codecvt_utf16<wchar_t,true> *this,mbstate_t *param_1,wchar_t *param_2,wchar_t *param_3,
          wchar_t **param_4,char *param_5,char *param_6,char **param_7)

{
  int iVar1;
  wchar_t wVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(this + 0x18);
  pbVar4 = (byte *)param_5;
  if (((byte)this[0x20] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) {
LAB_001d0b70:
      uVar3 = 1;
      pbVar4 = (byte *)param_5;
      goto LAB_001d0c1c;
    }
    pbVar4 = (byte *)(param_5 + 2);
    param_5[0] = -1;
    param_5[1] = -2;
  }
  if (param_2 < param_3) {
    uVar3 = 2;
    param_5 = (char *)pbVar4;
    do {
      wVar2 = *param_2;
      pbVar4 = (byte *)param_5;
      if (((uint)wVar2 >> 0xb == 0x1b) || (uVar5 < (uint)wVar2)) goto LAB_001d0c1c;
      if ((wVar2 & 0xffff0000U) == 0) {
        if ((long)param_6 - (long)param_5 < 2) goto LAB_001d0b70;
        pbVar4 = (byte *)param_5 + 2;
        *(short *)param_5 = (short)wVar2;
      }
      else {
        if ((long)param_6 - (long)param_5 < 4) goto LAB_001d0b70;
        iVar1 = ((uint)wVar2 >> 10 & 0x7c0) + 0x3fc0;
        ((byte *)param_5)[2] = (byte)wVar2;
        pbVar4 = (byte *)param_5 + 4;
        *param_5 = (byte)iVar1 | (byte)((uint)wVar2 >> 10) & 0x3f;
        ((byte *)param_5)[1] = (byte)((uint)iVar1 >> 8) | 0xd8;
        ((byte *)param_5)[3] = (byte)((uint)wVar2 >> 8) & 3 | 0xdc;
      }
      param_2 = param_2 + 1;
      param_5 = (char *)pbVar4;
    } while (param_2 < param_3);
  }
  uVar3 = 0;
LAB_001d0c1c:
  *param_4 = param_2;
  *param_7 = (char *)pbVar4;
  return uVar3;
}


// ===== 001d0c28  std::__ndk1::__codecvt_utf16<wchar_t,true>::do_in =====

/* std::__ndk1::__codecvt_utf16<wchar_t, true>::do_in(mbstate_t&, char const*, char const*, char
   const*&, wchar_t*, wchar_t*, wchar_t*&) const */

ulong __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,true>::do_in
          (__codecvt_utf16<wchar_t,true> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar_t *param_5,wchar_t *param_6,wchar_t **param_7)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(this + 0x18);
  if ((((((byte)this[0x20] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -1)) && (param_2[1] == -2)) {
    param_2 = param_2 + 2;
  }
  for (; (param_2 < param_3 + -1 && (param_5 < param_6)); param_5 = param_5 + 1) {
    bVar1 = *(byte *)((long)param_2 + 1) & 0xfc;
    uVar4 = (ulong)*(ushort *)param_2;
    if (bVar1 == 0xd8) {
      if ((long)param_3 - (long)param_2 < 4) {
        uVar2 = 1;
        goto LAB_001d0d24;
      }
      if (((*(byte *)((long)param_2 + 3) & 0xfc) != 0xdc) ||
         (uVar4 = (((ulong)*(ushort *)param_2 & 0x3ff) << 10 |
                   ((ulong)*(byte *)((long)param_2 + 3) & 3) << 8 |
                  (ulong)(byte)*(ushort *)((long)param_2 + 2)) + 0x10000, uVar3 < uVar4))
      goto LAB_001d0d18;
      uVar2 = 4;
    }
    else {
      if (bVar1 == 0xdc) {
LAB_001d0d18:
        uVar2 = 2;
        goto LAB_001d0d24;
      }
      uVar2 = 2;
      if (uVar3 < uVar4) goto LAB_001d0d24;
    }
    param_2 = (char *)((long)param_2 + uVar2);
    *param_5 = (wchar_t)uVar4;
  }
  uVar2 = (ulong)(param_2 < param_3);
LAB_001d0d24:
  *param_4 = param_2;
  *param_7 = param_5;
  return uVar2;
}


// ===== 001d0d30  std::__ndk1::__codecvt_utf16<wchar_t,true>::do_unshift =====

/* std::__ndk1::__codecvt_utf16<wchar_t, true>::do_unshift(mbstate_t&, char*, char*, char*&) const
    */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,true>::do_unshift
          (__codecvt_utf16<wchar_t,true> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001d0d3c  std::__ndk1::__codecvt_utf16<wchar_t,true>::do_encoding =====

/* std::__ndk1::__codecvt_utf16<wchar_t, true>::do_encoding() const */

undefined8 std::__ndk1::__codecvt_utf16<wchar_t,true>::do_encoding(void)

{
  return 0;
}


// ===== 001d0d44  std::__ndk1::__codecvt_utf16<wchar_t,true>::do_always_noconv =====

/* std::__ndk1::__codecvt_utf16<wchar_t, true>::do_always_noconv() const */

undefined8 std::__ndk1::__codecvt_utf16<wchar_t,true>::do_always_noconv(void)

{
  return 0;
}


// ===== 001d0d4c  std::__ndk1::__codecvt_utf16<wchar_t,true>::do_length =====

/* std::__ndk1::__codecvt_utf16<wchar_t, true>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,true>::do_length
          (__codecvt_utf16<wchar_t,true> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  byte bVar1;
  ushort *puVar2;
  ulong uVar3;
  
  puVar2 = (ushort *)param_2;
  if ((((((byte)this[0x20] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -1)) && (puVar2 = (ushort *)(param_2 + 2), param_2[1] != -2)) {
    puVar2 = (ushort *)param_2;
  }
  if ((param_4 != 0) && (puVar2 < param_3 + -1)) {
    uVar3 = 1;
    do {
      bVar1 = *(byte *)((long)puVar2 + 1) & 0xfc;
      if (bVar1 == 0xd8) {
        if ((((long)param_3 - (long)puVar2 < 4) || ((*(byte *)((long)puVar2 + 3) & 0xfc) != 0xdc))
           || (*(ulong *)(this + 0x18) <
               (((ulong)*puVar2 & 0x3ff) << 10 | ((ulong)*(byte *)((long)puVar2 + 3) & 3) << 8 |
               (ulong)(byte)puVar2[1]) + 0x10000)) break;
        puVar2 = puVar2 + 2;
      }
      else {
        if ((bVar1 == 0xdc) || (*(ulong *)(this + 0x18) < (ulong)*puVar2)) break;
        puVar2 = puVar2 + 1;
      }
      if ((param_4 <= uVar3) || (uVar3 = uVar3 + 1, param_3 + -1 <= puVar2)) break;
    } while( true );
  }
  return (int)puVar2 - (int)param_2;
}


// ===== 001d0e48  std::__ndk1::__codecvt_utf16<wchar_t,true>::do_max_length =====

/* std::__ndk1::__codecvt_utf16<wchar_t, true>::do_max_length() const */

undefined4 __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,true>::do_max_length(__codecvt_utf16<wchar_t,true> *this)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (((byte)this[0x20] & 4) != 0) {
    uVar1 = 6;
  }
  return uVar1;
}


// ===== 001d0e60  std::__ndk1::__codecvt_utf16<char16_t,false>::do_out =====

/* std::__ndk1::__codecvt_utf16<char16_t, false>::do_out(mbstate_t&, char16_t const*, char16_t
   const*, char16_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<char16_t,false>::do_out
          (__codecvt_utf16<char16_t,false> *this,mbstate_t *param_1,wchar16 *param_2,
          wchar16 *param_3,wchar16 **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar16 wVar1;
  undefined8 uVar2;
  ushort *puVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 0x10);
  puVar3 = (ushort *)param_5;
  if (((byte)this[0x18] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) {
LAB_001d0e78:
      uVar2 = 1;
      puVar3 = (ushort *)param_5;
      goto LAB_001d0ed0;
    }
    puVar3 = (ushort *)(param_5 + 2);
    param_5[0] = -2;
    param_5[1] = -1;
  }
  if (param_2 < param_3) {
    uVar2 = 2;
    param_5 = (char *)puVar3;
    do {
      wVar1 = *param_2;
      puVar3 = (ushort *)param_5;
      if (((ushort)wVar1 >> 0xb == 0x1b) || (uVar4 < (ushort)wVar1)) goto LAB_001d0ed0;
      if ((long)param_6 - (long)param_5 < 2) goto LAB_001d0e78;
      param_2 = param_2 + 1;
      puVar3 = (ushort *)((long)param_5 + 2);
      *(ushort *)param_5 = (ushort)wVar1 >> 8 | (ushort)(((ushort)wVar1 & 0xff00ff) << 8);
      param_5 = (char *)puVar3;
    } while (param_2 < param_3);
  }
  uVar2 = 0;
LAB_001d0ed0:
  *param_4 = param_2;
  *param_7 = (char *)puVar3;
  return uVar2;
}


// ===== 001d0edc  std::__ndk1::__codecvt_utf16<char16_t,false>::do_in =====

/* std::__ndk1::__codecvt_utf16<char16_t, false>::do_in(mbstate_t&, char const*, char const*, char
   const*&, char16_t*, char16_t*, char16_t*&) const */

undefined1 __thiscall
std::__ndk1::__codecvt_utf16<char16_t,false>::do_in
          (__codecvt_utf16<char16_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar16 *param_5,wchar16 *param_6,wchar16 **param_7)

{
  wchar16 wVar1;
  undefined1 uVar2;
  wchar16 *pwVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 0x10);
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -2)) && (param_2[1] == -1)) {
    param_2 = param_2 + 2;
  }
  if (param_2 < param_3 + -1) {
    uVar2 = 2;
    pwVar3 = param_5;
    while (param_5 = pwVar3, pwVar3 < param_6) {
      if (((*param_2 & 0xf8U) == 0xd8) ||
         (wVar1 = CONCAT11(*param_2,((byte *)param_2)[1]), uVar4 < (ushort)wVar1))
      goto LAB_001d0f60;
      param_2 = (char *)((byte *)param_2 + 2);
      param_5 = pwVar3 + 1;
      *pwVar3 = wVar1;
      pwVar3 = param_5;
      if (param_3 + -1 <= param_2) break;
    }
  }
  uVar2 = param_2 < param_3;
LAB_001d0f60:
  *param_4 = param_2;
  *param_7 = param_5;
  return uVar2;
}


// ===== 001d0f6c  std::__ndk1::__codecvt_utf16<char16_t,false>::do_unshift =====

/* std::__ndk1::__codecvt_utf16<char16_t, false>::do_unshift(mbstate_t&, char*, char*, char*&) const
    */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<char16_t,false>::do_unshift
          (__codecvt_utf16<char16_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001d0f78  std::__ndk1::__codecvt_utf16<char16_t,false>::do_encoding =====

/* std::__ndk1::__codecvt_utf16<char16_t, false>::do_encoding() const */

undefined8 std::__ndk1::__codecvt_utf16<char16_t,false>::do_encoding(void)

{
  return 0;
}


// ===== 001d0f80  std::__ndk1::__codecvt_utf16<char16_t,false>::do_always_noconv =====

/* std::__ndk1::__codecvt_utf16<char16_t, false>::do_always_noconv() const */

undefined8 std::__ndk1::__codecvt_utf16<char16_t,false>::do_always_noconv(void)

{
  return 0;
}


// ===== 001d0f88  std::__ndk1::__codecvt_utf16<char16_t,false>::do_length =====

/* std::__ndk1::__codecvt_utf16<char16_t, false>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::__ndk1::__codecvt_utf16<char16_t,false>::do_length
          (__codecvt_utf16<char16_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  
  pbVar2 = (byte *)param_2;
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -2)) && (pbVar2 = (byte *)(param_2 + 2), param_2[1] != -1)) {
    pbVar2 = (byte *)param_2;
  }
  if ((param_4 != 0) && (pbVar2 < param_3 + -1)) {
    uVar3 = 1;
    while (((*pbVar2 & 0xf8) != 0xd8 &&
           ((ulong)CONCAT11(*pbVar2,pbVar2[1]) <= *(ulong *)(this + 0x10)))) {
      pbVar2 = pbVar2 + 2;
      if ((param_3 + -1 <= pbVar2) || (bVar1 = param_4 <= uVar3, uVar3 = uVar3 + 1, bVar1)) break;
    }
  }
  return (int)pbVar2 - (int)param_2;
}


// ===== 001d101c  std::__ndk1::__codecvt_utf16<char16_t,false>::do_max_length =====

/* std::__ndk1::__codecvt_utf16<char16_t, false>::do_max_length() const */

undefined4 __thiscall
std::__ndk1::__codecvt_utf16<char16_t,false>::do_max_length(__codecvt_utf16<char16_t,false> *this)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (((byte)this[0x18] & 4) != 0) {
    uVar1 = 4;
  }
  return uVar1;
}


// ===== 001d1034  std::__ndk1::__codecvt_utf16<char16_t,true>::do_out =====

/* std::__ndk1::__codecvt_utf16<char16_t, true>::do_out(mbstate_t&, char16_t const*, char16_t
   const*, char16_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<char16_t,true>::do_out
          (__codecvt_utf16<char16_t,true> *this,mbstate_t *param_1,wchar16 *param_2,wchar16 *param_3
          ,wchar16 **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar16 wVar1;
  undefined8 uVar2;
  wchar16 *pwVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 0x10);
  pwVar3 = (wchar16 *)param_5;
  if (((byte)this[0x18] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) {
LAB_001d104c:
      uVar2 = 1;
      pwVar3 = (wchar16 *)param_5;
      goto LAB_001d10a0;
    }
    pwVar3 = (wchar16 *)(param_5 + 2);
    param_5[0] = -1;
    param_5[1] = -2;
  }
  if (param_2 < param_3) {
    uVar2 = 2;
    param_5 = (char *)pwVar3;
    do {
      wVar1 = *param_2;
      pwVar3 = (wchar16 *)param_5;
      if (((ushort)wVar1 >> 0xb == 0x1b) || (uVar4 < (ushort)wVar1)) goto LAB_001d10a0;
      if ((long)param_6 - (long)param_5 < 2) goto LAB_001d104c;
      param_2 = param_2 + 1;
      pwVar3 = (wchar16 *)((long)param_5 + 2);
      *(wchar16 *)param_5 = wVar1;
      param_5 = (char *)pwVar3;
    } while (param_2 < param_3);
  }
  uVar2 = 0;
LAB_001d10a0:
  *param_4 = param_2;
  *param_7 = (char *)pwVar3;
  return uVar2;
}


// ===== 001d10ac  std::__ndk1::__codecvt_utf16<char16_t,true>::do_in =====

/* std::__ndk1::__codecvt_utf16<char16_t, true>::do_in(mbstate_t&, char const*, char const*, char
   const*&, char16_t*, char16_t*, char16_t*&) const */

undefined1 __thiscall
std::__ndk1::__codecvt_utf16<char16_t,true>::do_in
          (__codecvt_utf16<char16_t,true> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar16 *param_5,wchar16 *param_6,wchar16 **param_7)

{
  wchar16 wVar1;
  undefined1 uVar2;
  wchar16 *pwVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 0x10);
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -1)) && (param_2[1] == -2)) {
    param_2 = param_2 + 2;
  }
  if (param_2 < param_3 + -1) {
    uVar2 = 2;
    pwVar3 = param_5;
    while (param_5 = pwVar3, pwVar3 < param_6) {
      if (((param_2[1] & 0xf8U) == 0xd8) ||
         (wVar1 = CONCAT11(param_2[1],*param_2), uVar4 < (ushort)wVar1)) goto LAB_001d1130;
      param_2 = param_2 + 2;
      param_5 = pwVar3 + 1;
      *pwVar3 = wVar1;
      pwVar3 = param_5;
      if (param_3 + -1 <= param_2) break;
    }
  }
  uVar2 = param_2 < param_3;
LAB_001d1130:
  *param_4 = param_2;
  *param_7 = param_5;
  return uVar2;
}


// ===== 001d113c  std::__ndk1::__codecvt_utf16<char16_t,true>::do_unshift =====

/* std::__ndk1::__codecvt_utf16<char16_t, true>::do_unshift(mbstate_t&, char*, char*, char*&) const
    */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<char16_t,true>::do_unshift
          (__codecvt_utf16<char16_t,true> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001d1148  std::__ndk1::__codecvt_utf16<char16_t,true>::do_encoding =====

/* std::__ndk1::__codecvt_utf16<char16_t, true>::do_encoding() const */

undefined8 std::__ndk1::__codecvt_utf16<char16_t,true>::do_encoding(void)

{
  return 0;
}


// ===== 001d1150  std::__ndk1::__codecvt_utf16<char16_t,true>::do_always_noconv =====

/* std::__ndk1::__codecvt_utf16<char16_t, true>::do_always_noconv() const */

undefined8 std::__ndk1::__codecvt_utf16<char16_t,true>::do_always_noconv(void)

{
  return 0;
}


// ===== 001d1158  std::__ndk1::__codecvt_utf16<char16_t,true>::do_length =====

/* std::__ndk1::__codecvt_utf16<char16_t, true>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::__ndk1::__codecvt_utf16<char16_t,true>::do_length
          (__codecvt_utf16<char16_t,true> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  char *pcVar4;
  
  pcVar2 = param_2;
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -1)) && (pcVar2 = param_2 + 2, param_2[1] != -2)) {
    pcVar2 = param_2;
  }
  if ((param_4 != 0) && (pcVar2 < param_3 + -1)) {
    uVar3 = 1;
    do {
      if (((pcVar2[1] & 0xf8U) == 0xd8) ||
         (pcVar4 = pcVar2 + 2, *(ulong *)(this + 0x10) < (ulong)CONCAT11(pcVar2[1],*pcVar2))) break;
      if (param_3 + -1 <= pcVar4) {
        return (int)pcVar4 - (int)param_2;
      }
      bVar1 = uVar3 < param_4;
      uVar3 = uVar3 + 1;
      pcVar2 = pcVar4;
    } while (bVar1);
  }
  return (int)pcVar2 - (int)param_2;
}


// ===== 001d1204  std::__ndk1::__codecvt_utf16<char16_t,true>::do_max_length =====

/* std::__ndk1::__codecvt_utf16<char16_t, true>::do_max_length() const */

undefined4 __thiscall
std::__ndk1::__codecvt_utf16<char16_t,true>::do_max_length(__codecvt_utf16<char16_t,true> *this)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (((byte)this[0x18] & 4) != 0) {
    uVar1 = 4;
  }
  return uVar1;
}


// ===== 001d121c  std::__ndk1::__codecvt_utf16<char32_t,false>::do_out =====

/* std::__ndk1::__codecvt_utf16<char32_t, false>::do_out(mbstate_t&, char32_t const*, char32_t
   const*, char32_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<char32_t,false>::do_out
          (__codecvt_utf16<char32_t,false> *this,mbstate_t *param_1,wchar32 *param_2,
          wchar32 *param_3,wchar32 **param_4,char *param_5,char *param_6,char **param_7)

{
  int iVar1;
  wchar32 wVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  
  uVar5 = *(ulong *)(this + 0x10);
  if (((byte)this[0x18] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) {
LAB_001d1234:
      uVar4 = 1;
      goto LAB_001d12f0;
    }
    param_5[0] = -2;
    param_5[1] = -1;
    param_5 = param_5 + 2;
  }
  if (param_2 < param_3) {
    uVar4 = 2;
    do {
      wVar2 = *param_2;
      if (((uint)wVar2 >> 0xb == 0x1b) || (uVar5 < (uint)wVar2)) goto LAB_001d12f0;
      bVar3 = (byte)((uint)wVar2 >> 8);
      if ((uint)wVar2 >> 0x10 == 0) {
        if ((long)param_6 - (long)param_5 < 2) goto LAB_001d1234;
        pbVar6 = (byte *)param_5 + 1;
        *param_5 = bVar3;
        lVar7 = 2;
      }
      else {
        if ((long)param_6 - (long)param_5 < 4) goto LAB_001d1234;
        iVar1 = ((uint)wVar2 >> 10 & 0x7c0) + 0x3fc0;
        ((byte *)param_5)[2] = bVar3 & 3 | 0xdc;
        pbVar6 = (byte *)param_5 + 3;
        ((byte *)param_5)[1] = (byte)iVar1 | (byte)((uint)wVar2 >> 10) & 0x3f;
        lVar7 = 4;
        *param_5 = (byte)((uint)iVar1 >> 8) | 0xd8;
      }
      param_2 = param_2 + 1;
      param_5 = (char *)((byte *)param_5 + lVar7);
      *pbVar6 = (byte)wVar2;
    } while (param_2 < param_3);
  }
  uVar4 = 0;
LAB_001d12f0:
  *param_4 = param_2;
  *param_7 = param_5;
  return uVar4;
}


// ===== 001d12fc  std::__ndk1::__codecvt_utf16<char32_t,false>::do_in =====

/* std::__ndk1::__codecvt_utf16<char32_t, false>::do_in(mbstate_t&, char const*, char const*, char
   const*&, char32_t*, char32_t*, char32_t*&) const */

ulong __thiscall
std::__ndk1::__codecvt_utf16<char32_t,false>::do_in
          (__codecvt_utf16<char32_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar32 *param_5,wchar32 *param_6,wchar32 **param_7)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(this + 0x10);
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -2)) && (param_2[1] == -1)) {
    param_2 = param_2 + 2;
  }
  for (; (param_2 < param_3 + -1 && (param_5 < param_6)); param_5 = param_5 + 1) {
    bVar1 = *param_2 & 0xfc;
    uVar2 = CONCAT11(*param_2,((byte *)param_2)[1]);
    uVar5 = (ulong)uVar2;
    if (bVar1 == 0xd8) {
      if ((long)param_3 - (long)param_2 < 4) {
        uVar3 = 1;
        goto LAB_001d13f8;
      }
      if (((((byte *)param_2)[2] & 0xfc) != 0xdc) ||
         (uVar5 = (((ulong)uVar2 & 0x3ff) << 10 | ((ulong)((byte *)param_2)[2] & 3) << 8 |
                  (ulong)((byte *)param_2)[3]) + 0x10000, uVar4 < uVar5)) goto LAB_001d13ec;
      uVar3 = 4;
    }
    else {
      if (bVar1 == 0xdc) {
LAB_001d13ec:
        uVar3 = 2;
        goto LAB_001d13f8;
      }
      uVar3 = 2;
      if (uVar4 < uVar5) goto LAB_001d13f8;
    }
    param_2 = (char *)((byte *)param_2 + uVar3);
    *param_5 = (wchar32)uVar5;
  }
  uVar3 = (ulong)(param_2 < param_3);
LAB_001d13f8:
  *param_4 = param_2;
  *param_7 = param_5;
  return uVar3;
}


// ===== 001d1404  std::__ndk1::__codecvt_utf16<char32_t,false>::do_unshift =====

/* std::__ndk1::__codecvt_utf16<char32_t, false>::do_unshift(mbstate_t&, char*, char*, char*&) const
    */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<char32_t,false>::do_unshift
          (__codecvt_utf16<char32_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001d1410  std::__ndk1::__codecvt_utf16<char32_t,false>::do_encoding =====

/* std::__ndk1::__codecvt_utf16<char32_t, false>::do_encoding() const */

undefined8 std::__ndk1::__codecvt_utf16<char32_t,false>::do_encoding(void)

{
  return 0;
}


// ===== 001d1418  std::__ndk1::__codecvt_utf16<char32_t,false>::do_always_noconv =====

/* std::__ndk1::__codecvt_utf16<char32_t, false>::do_always_noconv() const */

undefined8 std::__ndk1::__codecvt_utf16<char32_t,false>::do_always_noconv(void)

{
  return 0;
}


// ===== 001d1420  std::__ndk1::__codecvt_utf16<char32_t,false>::do_length =====

/* std::__ndk1::__codecvt_utf16<char32_t, false>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::__ndk1::__codecvt_utf16<char32_t,false>::do_length
          (__codecvt_utf16<char32_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  pbVar3 = (byte *)param_2;
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -2)) && (pbVar3 = (byte *)(param_2 + 2), param_2[1] != -1)) {
    pbVar3 = (byte *)param_2;
  }
  if ((param_4 != 0) && (pbVar3 < param_3 + -1)) {
    uVar4 = 1;
    do {
      bVar1 = *pbVar3 & 0xfc;
      uVar2 = CONCAT11(*pbVar3,pbVar3[1]);
      if (bVar1 == 0xd8) {
        if ((((long)param_3 - (long)pbVar3 < 4) || ((pbVar3[2] & 0xfc) != 0xdc)) ||
           (*(ulong *)(this + 0x10) <
            (((ulong)uVar2 & 0x3ff) << 10 | ((ulong)pbVar3[2] & 3) << 8 | (ulong)pbVar3[3]) +
            0x10000)) break;
        pbVar3 = pbVar3 + 4;
      }
      else {
        if ((bVar1 == 0xdc) || (*(ulong *)(this + 0x10) < (ulong)uVar2)) break;
        pbVar3 = pbVar3 + 2;
      }
      if ((param_4 <= uVar4) || (uVar4 = uVar4 + 1, param_3 + -1 <= pbVar3)) break;
    } while( true );
  }
  return (int)pbVar3 - (int)param_2;
}


// ===== 001d151c  std::__ndk1::__codecvt_utf16<char32_t,false>::do_max_length =====

/* std::__ndk1::__codecvt_utf16<char32_t, false>::do_max_length() const */

undefined4 __thiscall
std::__ndk1::__codecvt_utf16<char32_t,false>::do_max_length(__codecvt_utf16<char32_t,false> *this)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (((byte)this[0x18] & 4) != 0) {
    uVar1 = 6;
  }
  return uVar1;
}


// ===== 001d1534  std::__ndk1::__codecvt_utf16<char32_t,true>::do_out =====

/* std::__ndk1::__codecvt_utf16<char32_t, true>::do_out(mbstate_t&, char32_t const*, char32_t
   const*, char32_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<char32_t,true>::do_out
          (__codecvt_utf16<char32_t,true> *this,mbstate_t *param_1,wchar32 *param_2,wchar32 *param_3
          ,wchar32 **param_4,char *param_5,char *param_6,char **param_7)

{
  int iVar1;
  wchar32 wVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(this + 0x10);
  pbVar4 = (byte *)param_5;
  if (((byte)this[0x18] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) {
LAB_001d154c:
      uVar3 = 1;
      pbVar4 = (byte *)param_5;
      goto LAB_001d15f8;
    }
    pbVar4 = (byte *)(param_5 + 2);
    param_5[0] = -1;
    param_5[1] = -2;
  }
  if (param_2 < param_3) {
    uVar3 = 2;
    param_5 = (char *)pbVar4;
    do {
      wVar2 = *param_2;
      pbVar4 = (byte *)param_5;
      if (((uint)wVar2 >> 0xb == 0x1b) || (uVar5 < (uint)wVar2)) goto LAB_001d15f8;
      if ((wVar2 & 0xffff0000U) == 0) {
        if ((long)param_6 - (long)param_5 < 2) goto LAB_001d154c;
        pbVar4 = (byte *)param_5 + 2;
        *(short *)param_5 = (short)wVar2;
      }
      else {
        if ((long)param_6 - (long)param_5 < 4) goto LAB_001d154c;
        iVar1 = ((uint)wVar2 >> 10 & 0x7c0) + 0x3fc0;
        ((byte *)param_5)[2] = (byte)wVar2;
        pbVar4 = (byte *)param_5 + 4;
        *param_5 = (byte)iVar1 | (byte)((uint)wVar2 >> 10) & 0x3f;
        ((byte *)param_5)[1] = (byte)((uint)iVar1 >> 8) | 0xd8;
        ((byte *)param_5)[3] = (byte)((uint)wVar2 >> 8) & 3 | 0xdc;
      }
      param_2 = param_2 + 1;
      param_5 = (char *)pbVar4;
    } while (param_2 < param_3);
  }
  uVar3 = 0;
LAB_001d15f8:
  *param_4 = param_2;
  *param_7 = (char *)pbVar4;
  return uVar3;
}


// ===== 001d1604  std::__ndk1::__codecvt_utf16<char32_t,true>::do_in =====

/* std::__ndk1::__codecvt_utf16<char32_t, true>::do_in(mbstate_t&, char const*, char const*, char
   const*&, char32_t*, char32_t*, char32_t*&) const */

ulong __thiscall
std::__ndk1::__codecvt_utf16<char32_t,true>::do_in
          (__codecvt_utf16<char32_t,true> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar32 *param_5,wchar32 *param_6,wchar32 **param_7)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(this + 0x10);
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -1)) && (param_2[1] == -2)) {
    param_2 = param_2 + 2;
  }
  for (; (param_2 < param_3 + -1 && (param_5 < param_6)); param_5 = param_5 + 1) {
    bVar1 = *(byte *)((long)param_2 + 1) & 0xfc;
    uVar4 = (ulong)*(ushort *)param_2;
    if (bVar1 == 0xd8) {
      if ((long)param_3 - (long)param_2 < 4) {
        uVar2 = 1;
        goto LAB_001d1700;
      }
      if (((*(byte *)((long)param_2 + 3) & 0xfc) != 0xdc) ||
         (uVar4 = (((ulong)*(ushort *)param_2 & 0x3ff) << 10 |
                   ((ulong)*(byte *)((long)param_2 + 3) & 3) << 8 |
                  (ulong)(byte)*(ushort *)((long)param_2 + 2)) + 0x10000, uVar3 < uVar4))
      goto LAB_001d16f4;
      uVar2 = 4;
    }
    else {
      if (bVar1 == 0xdc) {
LAB_001d16f4:
        uVar2 = 2;
        goto LAB_001d1700;
      }
      uVar2 = 2;
      if (uVar3 < uVar4) goto LAB_001d1700;
    }
    param_2 = (char *)((long)param_2 + uVar2);
    *param_5 = (wchar32)uVar4;
  }
  uVar2 = (ulong)(param_2 < param_3);
LAB_001d1700:
  *param_4 = param_2;
  *param_7 = param_5;
  return uVar2;
}


// ===== 001d170c  std::__ndk1::__codecvt_utf16<char32_t,true>::do_unshift =====

/* std::__ndk1::__codecvt_utf16<char32_t, true>::do_unshift(mbstate_t&, char*, char*, char*&) const
    */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<char32_t,true>::do_unshift
          (__codecvt_utf16<char32_t,true> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001d1718  std::__ndk1::__codecvt_utf16<char32_t,true>::do_encoding =====

/* std::__ndk1::__codecvt_utf16<char32_t, true>::do_encoding() const */

undefined8 std::__ndk1::__codecvt_utf16<char32_t,true>::do_encoding(void)

{
  return 0;
}


// ===== 001d1720  std::__ndk1::__codecvt_utf16<char32_t,true>::do_always_noconv =====

/* std::__ndk1::__codecvt_utf16<char32_t, true>::do_always_noconv() const */

undefined8 std::__ndk1::__codecvt_utf16<char32_t,true>::do_always_noconv(void)

{
  return 0;
}


// ===== 001d1728  std::__ndk1::__codecvt_utf16<char32_t,true>::do_length =====

/* std::__ndk1::__codecvt_utf16<char32_t, true>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::__ndk1::__codecvt_utf16<char32_t,true>::do_length
          (__codecvt_utf16<char32_t,true> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  byte bVar1;
  ushort *puVar2;
  ulong uVar3;
  
  puVar2 = (ushort *)param_2;
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -1)) && (puVar2 = (ushort *)(param_2 + 2), param_2[1] != -2)) {
    puVar2 = (ushort *)param_2;
  }
  if ((param_4 != 0) && (puVar2 < param_3 + -1)) {
    uVar3 = 1;
    do {
      bVar1 = *(byte *)((long)puVar2 + 1) & 0xfc;
      if (bVar1 == 0xd8) {
        if ((((long)param_3 - (long)puVar2 < 4) || ((*(byte *)((long)puVar2 + 3) & 0xfc) != 0xdc))
           || (*(ulong *)(this + 0x10) <
               (((ulong)*puVar2 & 0x3ff) << 10 | ((ulong)*(byte *)((long)puVar2 + 3) & 3) << 8 |
               (ulong)(byte)puVar2[1]) + 0x10000)) break;
        puVar2 = puVar2 + 2;
      }
      else {
        if ((bVar1 == 0xdc) || (*(ulong *)(this + 0x10) < (ulong)*puVar2)) break;
        puVar2 = puVar2 + 1;
      }
      if ((param_4 <= uVar3) || (uVar3 = uVar3 + 1, param_3 + -1 <= puVar2)) break;
    } while( true );
  }
  return (int)puVar2 - (int)param_2;
}


// ===== 001d1824  std::__ndk1::__codecvt_utf16<char32_t,true>::do_max_length =====

/* std::__ndk1::__codecvt_utf16<char32_t, true>::do_max_length() const */

undefined4 __thiscall
std::__ndk1::__codecvt_utf16<char32_t,true>::do_max_length(__codecvt_utf16<char32_t,true> *this)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (((byte)this[0x18] & 4) != 0) {
    uVar1 = 6;
  }
  return uVar1;
}


// ===== 001d183c  std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_out =====

/* std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_out(mbstate_t&, wchar_t const*, wchar_t const*,
   wchar_t const*&, char*, char*, char*&) const */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_out
          (__codecvt_utf8_utf16<wchar_t> *this,mbstate_t *param_1,wchar_t *param_2,wchar_t *param_3,
          wchar_t **param_4,char *param_5,char *param_6,char **param_7)

{
  long lVar1;
  char *local_48;
  wchar_t *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_001d18d0(param_2,param_3,&local_40,param_5,param_6,&local_48,*(undefined8 *)(this + 0x18),
               *(undefined4 *)(this + 0x20));
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d18d0  FUN_001d18d0 =====

undefined8
FUN_001d18d0(long param_1,uint *param_2,long *param_3,undefined1 *param_4,long param_5,long *param_6
            ,ulong param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  
  *param_3 = param_1;
  *param_6 = (long)param_4;
  if ((param_8 >> 1 & 1) != 0) {
    if (param_5 - (long)param_4 < 3) {
      return 1;
    }
    *param_6 = (long)(param_4 + 1);
    *param_4 = 0xef;
    puVar3 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar3 + 1);
    *puVar3 = 0xbb;
    puVar3 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar3 + 1);
    *puVar3 = 0xbf;
  }
  puVar4 = (uint *)*param_3;
  do {
    if (param_2 <= puVar4) {
      return 0;
    }
    uVar1 = *puVar4;
    if (param_7 < ((ulong)uVar1 & 0xffff)) {
      return 2;
    }
    uVar7 = (uint)((ulong)uVar1 & 0xffff);
    if (uVar7 < 0x80) {
      pbVar5 = (byte *)*param_6;
      if (param_5 - (long)pbVar5 < 1) {
        return 1;
      }
      *param_6 = (long)(pbVar5 + 1);
      *pbVar5 = (byte)uVar1;
    }
    else {
      if (uVar7 < 0x800) {
        pbVar5 = (byte *)*param_6;
        if (param_5 - (long)pbVar5 < 2) {
          return 1;
        }
        bVar6 = (byte)(uVar1 >> 6) | 0xc0;
      }
      else {
        if (0x1a < uVar7 >> 0xb) {
          if (uVar7 >> 10 < 0x37) {
            if ((long)param_2 - (long)puVar4 < 8) {
              return 1;
            }
            uVar2 = puVar4[1];
            if ((uVar2 & 0xfc00) != 0xdc00) {
              return 2;
            }
            if (param_5 - *param_6 < 4) {
              return 1;
            }
            if (param_7 < ((ulong)(uVar7 << 10) & 0xffc00 | (ulong)uVar2 & 0x3ff) + 0x10000) {
              return 2;
            }
            *param_3 = (long)(puVar4 + 1);
            pbVar5 = (byte *)*param_6;
            uVar7 = (uVar1 >> 6 & 0xf) + 1;
            *param_6 = (long)(pbVar5 + 1);
            *pbVar5 = (byte)(uVar7 >> 2) | 0xf0;
            pbVar5 = (byte *)*param_6;
            *param_6 = (long)(pbVar5 + 1);
            *pbVar5 = (byte)(uVar1 >> 2) & 0xf | (byte)((uVar7 & 3) << 4) | 0x80;
            pbVar5 = (byte *)*param_6;
            *param_6 = (long)(pbVar5 + 1);
            *pbVar5 = (byte)((uVar1 & 3) << 4) | (byte)(uVar2 >> 6) & 0xf | 0x80;
            pbVar5 = (byte *)*param_6;
            *param_6 = (long)(pbVar5 + 1);
            *pbVar5 = (byte)uVar2 & 0x3f | 0x80;
            goto LAB_001d1978;
          }
          if (uVar7 < 0xe000) {
            return 2;
          }
        }
        pbVar5 = (byte *)*param_6;
        if (param_5 - (long)pbVar5 < 3) {
          return 1;
        }
        *param_6 = (long)(pbVar5 + 1);
        *pbVar5 = (byte)(uVar7 >> 0xc) | 0xe0;
        pbVar5 = (byte *)*param_6;
        bVar6 = (byte)(uVar1 >> 6) & 0x3f | 0x80;
      }
      *param_6 = (long)(pbVar5 + 1);
      *pbVar5 = bVar6;
      pbVar5 = (byte *)*param_6;
      *param_6 = (long)(pbVar5 + 1);
      *pbVar5 = (byte)uVar1 & 0x3f | 0x80;
    }
LAB_001d1978:
    puVar4 = (uint *)(*param_3 + 4);
    *param_3 = (long)puVar4;
  } while( true );
}


// ===== 001d1af0  std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_in =====

/* std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_in(mbstate_t&, char const*, char const*, char
   const*&, wchar_t*, wchar_t*, wchar_t*&) const */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_in
          (__codecvt_utf8_utf16<wchar_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar_t *param_5,wchar_t *param_6,wchar_t **param_7)

{
  long lVar1;
  wchar_t *local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_001d1b84(param_2,param_3,&local_40,param_5,param_6,&local_48,*(undefined8 *)(this + 0x18),
               *(undefined4 *)(this + 0x20));
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d1b84  FUN_001d1b84 =====

undefined8
FUN_001d1b84(long param_1,byte *param_2,long *param_3,long param_4,uint *param_5,long *param_6,
            ulong param_7,uint param_8)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar7 = (byte *)*param_3;
  if (((((param_8 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)pbVar7)) && (*pbVar7 == 0xef)) &&
     ((pbVar7[1] == 0xbb && (pbVar7[2] == 0xbf)))) {
    pbVar7 = pbVar7 + 3;
    *param_3 = (long)pbVar7;
  }
  if (pbVar7 < param_2) {
    puVar6 = (uint *)*param_6;
    do {
      if (param_5 <= puVar6) {
        return 1;
      }
      bVar2 = *pbVar7;
      if (param_7 < bVar2) {
        return 2;
      }
      uVar8 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        if (uVar8 < 0xc2) {
          return 2;
        }
        if (uVar8 < 0xe0) {
          if ((long)param_2 - (long)pbVar7 < 2) {
            return 1;
          }
          if ((pbVar7[1] & 0xc0) != 0x80) {
            return 2;
          }
          uVar9 = ((ulong)bVar2 & 0x1f) << 6 | (ulong)pbVar7[1] & 0x3f;
          if (param_7 < uVar9) {
            return 2;
          }
          *puVar6 = (uint)uVar9;
          pbVar7 = pbVar7 + 2;
        }
        else if (bVar2 < 0xf0) {
          if ((long)param_2 - (long)pbVar7 < 3) {
            return 1;
          }
          bVar3 = pbVar7[1];
          if (bVar2 == 0xed) {
            bVar4 = bVar3 & 0xe0;
joined_r0x001d1cf8:
            if (bVar4 != 0x80) {
              return 2;
            }
          }
          else {
            if (bVar2 != 0xe0) {
              bVar4 = bVar3 & 0xc0;
              goto joined_r0x001d1cf8;
            }
            if ((bVar3 & 0xe0) != 0xa0) {
              return 2;
            }
          }
          if (((pbVar7[2] & 0xc0) != 0x80) ||
             (uVar9 = ((ulong)bVar2 & 0xf) << 0xc | ((ulong)bVar3 & 0x3f) << 6 |
                      (ulong)pbVar7[2] & 0x3f, param_7 < uVar9)) {
            return 2;
          }
          *puVar6 = (uint)uVar9;
          pbVar7 = pbVar7 + 3;
        }
        else {
          if (0xf4 < bVar2) {
            return 2;
          }
          if ((long)param_2 - (long)pbVar7 < 4) {
            return 1;
          }
          bVar3 = pbVar7[1];
          bVar4 = pbVar7[2];
          bVar5 = pbVar7[3];
          uVar8 = (uint)bVar3;
          if (bVar2 == 0xf4) {
            uVar1 = uVar8 & 0xf0;
joined_r0x001d1d48:
            if (uVar1 != 0x80) {
              return 2;
            }
          }
          else {
            if (bVar2 != 0xf0) {
              uVar1 = uVar8 & 0xc0;
              goto joined_r0x001d1d48;
            }
            if (0x2f < (uVar8 + 0x70 & 0xff)) {
              return 2;
            }
          }
          if ((bVar4 & 0xc0) != 0x80) {
            return 2;
          }
          if ((bVar5 & 0xc0) != 0x80) {
            return 2;
          }
          if ((long)param_5 - (long)puVar6 < 8) {
            return 1;
          }
          if (param_7 < (((ulong)bVar2 & 7) << 0x12 | ((ulong)bVar3 & 0x3f) << 0xc |
                         ((ulong)bVar4 & 0x3f) << 6 | (ulong)bVar5 & 0x3f)) {
            return 2;
          }
          *puVar6 = (bVar4 >> 4 & 3 | (uVar8 & 0xf) << 2 | ((bVar2 & 7) << 2 | bVar3 >> 4 & 3) << 6)
                    - 0x40 | 0xd800;
          *param_6 = (long)(puVar6 + 1);
          puVar6[1] = bVar5 & 0x3f | (bVar4 & 0xf) << 6 | 0xdc00;
          pbVar7 = (byte *)(*param_3 + 4);
        }
      }
      else {
        *puVar6 = uVar8;
        pbVar7 = pbVar7 + 1;
      }
      *param_3 = (long)pbVar7;
      puVar6 = (uint *)(*param_6 + 4);
      *param_6 = (long)puVar6;
      pbVar7 = (byte *)*param_3;
    } while (pbVar7 < param_2);
  }
  return 0;
}


// ===== 001d1e00  std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_unshift =====

/* std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_unshift(mbstate_t&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_unshift
          (__codecvt_utf8_utf16<wchar_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001d1e0c  std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_encoding =====

/* std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_encoding() const */

undefined8 std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_encoding(void)

{
  return 0;
}


// ===== 001d1e14  std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_always_noconv =====

/* std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_always_noconv() const */

undefined8 std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_always_noconv(void)

{
  return 0;
}


// ===== 001d1e1c  std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_length =====

/* std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_length
          (__codecvt_utf8_utf16<wchar_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  FUN_001cf768(param_2,param_3,param_4,*(undefined8 *)(this + 0x18),*(undefined4 *)(this + 0x20));
  return;
}


// ===== 001d1e38  std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_max_length =====

/* std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_max_length() const */

undefined4 __thiscall
std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_max_length(__codecvt_utf8_utf16<wchar_t> *this)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (((byte)this[0x20] & 4) != 0) {
    uVar1 = 7;
  }
  return uVar1;
}


// ===== 001d1e50  std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_out =====

/* std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_out(mbstate_t&, char16_t const*, char16_t const*,
   char16_t const*&, char*, char*, char*&) const */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_out
          (__codecvt_utf8_utf16<char16_t> *this,mbstate_t *param_1,wchar16 *param_2,wchar16 *param_3
          ,wchar16 **param_4,char *param_5,char *param_6,char **param_7)

{
  long lVar1;
  char *local_48;
  wchar16 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_001cf20c(param_2,param_3,&local_40,param_5,param_6,&local_48,*(undefined8 *)(this + 0x10),
               *(undefined4 *)(this + 0x18));
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d1ee4  std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_in =====

/* std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_in(mbstate_t&, char const*, char const*, char
   const*&, char16_t*, char16_t*, char16_t*&) const */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_in
          (__codecvt_utf8_utf16<char16_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar16 *param_5,wchar16 *param_6,wchar16 **param_7)

{
  long lVar1;
  wchar16 *local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_001cf4b8(param_2,param_3,&local_40,param_5,param_6,&local_48,*(undefined8 *)(this + 0x10),
               *(undefined4 *)(this + 0x18));
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d1f78  std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_unshift =====

/* std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_unshift(mbstate_t&, char*, char*, char*&) const
    */

undefined8 __thiscall
std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_unshift
          (__codecvt_utf8_utf16<char16_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001d1f84  std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_encoding =====

/* std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_encoding() const */

undefined8 std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_encoding(void)

{
  return 0;
}


// ===== 001d1f8c  std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_always_noconv =====

/* std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_always_noconv() const */

undefined8 std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_always_noconv(void)

{
  return 0;
}


// ===== 001d1f94  std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_length =====

/* std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_length
          (__codecvt_utf8_utf16<char16_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  FUN_001cf768(param_2,param_3,param_4,*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x18));
  return;
}


// ===== 001d1fb0  std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_max_length =====

/* std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_max_length() const */

undefined4 __thiscall
std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_max_length(__codecvt_utf8_utf16<char16_t> *this)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (((byte)this[0x18] & 4) != 0) {
    uVar1 = 7;
  }
  return uVar1;
}


// ===== 001d1fc8  std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_out =====

/* std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_out(mbstate_t&, char32_t const*, char32_t const*,
   char32_t const*&, char*, char*, char*&) const */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_out
          (__codecvt_utf8_utf16<char32_t> *this,mbstate_t *param_1,wchar32 *param_2,wchar32 *param_3
          ,wchar32 **param_4,char *param_5,char *param_6,char **param_7)

{
  long lVar1;
  char *local_48;
  wchar32 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_001d18d0(param_2,param_3,&local_40,param_5,param_6,&local_48,*(undefined8 *)(this + 0x10),
               *(undefined4 *)(this + 0x18));
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d205c  std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_in =====

/* std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_in(mbstate_t&, char const*, char const*, char
   const*&, char32_t*, char32_t*, char32_t*&) const */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_in
          (__codecvt_utf8_utf16<char32_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar32 *param_5,wchar32 *param_6,wchar32 **param_7)

{
  long lVar1;
  wchar32 *local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = param_5;
  local_40 = param_2;
  FUN_001d1b84(param_2,param_3,&local_40,param_5,param_6,&local_48,*(undefined8 *)(this + 0x10),
               *(undefined4 *)(this + 0x18));
  *param_4 = local_40;
  *param_7 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d20f0  std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_unshift =====

/* std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_unshift(mbstate_t&, char*, char*, char*&) const
    */

undefined8 __thiscall
std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_unshift
          (__codecvt_utf8_utf16<char32_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4)

{
  *param_4 = param_2;
  return 3;
}


// ===== 001d20fc  std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_encoding =====

/* std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_encoding() const */

undefined8 std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_encoding(void)

{
  return 0;
}


// ===== 001d2104  std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_always_noconv =====

/* std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_always_noconv() const */

undefined8 std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_always_noconv(void)

{
  return 0;
}


// ===== 001d210c  std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_length =====

/* std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_length
          (__codecvt_utf8_utf16<char32_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  FUN_001cf768(param_2,param_3,param_4,*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 0x18));
  return;
}


// ===== 001d2128  std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_max_length =====

/* std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_max_length() const */

undefined4 __thiscall
std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_max_length(__codecvt_utf8_utf16<char32_t> *this)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (((byte)this[0x18] & 4) != 0) {
    uVar1 = 7;
  }
  return uVar1;
}


// ===== 001d2140  std::__ndk1::__narrow_to_utf8<16ul>::~__narrow_to_utf8 =====

/* std::__ndk1::__narrow_to_utf8<16ul>::~__narrow_to_utf8() */

void __thiscall std::__ndk1::__narrow_to_utf8<16ul>::~__narrow_to_utf8(__narrow_to_utf8<16ul> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001d2164  std::__ndk1::__narrow_to_utf8<32ul>::~__narrow_to_utf8 =====

/* std::__ndk1::__narrow_to_utf8<32ul>::~__narrow_to_utf8() */

void __thiscall std::__ndk1::__narrow_to_utf8<32ul>::~__narrow_to_utf8(__narrow_to_utf8<32ul> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001d2188  std::__ndk1::__widen_from_utf8<16ul>::~__widen_from_utf8 =====

/* std::__ndk1::__widen_from_utf8<16ul>::~__widen_from_utf8() */

void __thiscall
std::__ndk1::__widen_from_utf8<16ul>::~__widen_from_utf8(__widen_from_utf8<16ul> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001d21ac  std::__ndk1::__widen_from_utf8<32ul>::~__widen_from_utf8 =====

/* std::__ndk1::__widen_from_utf8<32ul>::~__widen_from_utf8() */

void __thiscall
std::__ndk1::__widen_from_utf8<32ul>::~__widen_from_utf8(__widen_from_utf8<32ul> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001d21d0  std::__ndk1::numpunct<char>::numpunct =====

/* std::__ndk1::numpunct<char>::numpunct(unsigned long) */

void __thiscall std::__ndk1::numpunct<char>::numpunct(numpunct<char> *this,ulong param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0020f9f0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x10) = 0x2c2e;
  *(undefined **)this = puVar1 + 0x10;
  *(ulong *)(this + 8) = param_1 - 1;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


// ===== 001d21f8  std::__ndk1::numpunct<wchar_t>::numpunct =====

/* std::__ndk1::numpunct<wchar_t>::numpunct(unsigned long) */

void __thiscall std::__ndk1::numpunct<wchar_t>::numpunct(numpunct<wchar_t> *this,ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_00146348;
  puVar1 = PTR_vtable_0020f9f8 + 0x10;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined **)this = puVar1;
  *(ulong *)(this + 8) = param_1 - 1;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


// ===== 001d2224  std::__ndk1::numpunct_byname<char>::~numpunct_byname =====

/* std::__ndk1::numpunct_byname<char>::~numpunct_byname() */

void __thiscall std::__ndk1::numpunct_byname<char>::~numpunct_byname(numpunct_byname<char> *this)

{
  *(undefined **)this = PTR_vtable_0020f9f0 + 0x10;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  __shared_count::~__shared_count((__shared_count *)this);
  return;
}


// ===== 001d2264  std::__ndk1::numpunct<char>::~numpunct =====

/* std::__ndk1::numpunct<char>::~numpunct() */

void __thiscall std::__ndk1::numpunct<char>::~numpunct(numpunct<char> *this)

{
  *(undefined **)this = PTR_vtable_0020f9f0 + 0x10;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001d22ac  std::__ndk1::numpunct_byname<wchar_t>::~numpunct_byname =====

/* std::__ndk1::numpunct_byname<wchar_t>::~numpunct_byname() */

void __thiscall
std::__ndk1::numpunct_byname<wchar_t>::~numpunct_byname(numpunct_byname<wchar_t> *this)

{
  *(undefined **)this = PTR_vtable_0020f9f8 + 0x10;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  __shared_count::~__shared_count((__shared_count *)this);
  return;
}


// ===== 001d22ec  std::__ndk1::numpunct<wchar_t>::~numpunct =====

/* std::__ndk1::numpunct<wchar_t>::~numpunct() */

void __thiscall std::__ndk1::numpunct<wchar_t>::~numpunct(numpunct<wchar_t> *this)

{
  *(undefined **)this = PTR_vtable_0020f9f8 + 0x10;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001d2334  std::__ndk1::numpunct<char>::do_decimal_point =====

/* std::__ndk1::numpunct<char>::do_decimal_point() const */

numpunct<char> __thiscall std::__ndk1::numpunct<char>::do_decimal_point(numpunct<char> *this)

{
  return this[0x10];
}


// ===== 001d233c  std::__ndk1::numpunct<wchar_t>::do_decimal_point =====

/* std::__ndk1::numpunct<wchar_t>::do_decimal_point() const */

undefined4 __thiscall std::__ndk1::numpunct<wchar_t>::do_decimal_point(numpunct<wchar_t> *this)

{
  return *(undefined4 *)(this + 0x10);
}


// ===== 001d2344  std::__ndk1::numpunct<char>::do_thousands_sep =====

/* std::__ndk1::numpunct<char>::do_thousands_sep() const */

numpunct<char> __thiscall std::__ndk1::numpunct<char>::do_thousands_sep(numpunct<char> *this)

{
  return this[0x11];
}


// ===== 001d234c  std::__ndk1::numpunct<wchar_t>::do_thousands_sep =====

/* std::__ndk1::numpunct<wchar_t>::do_thousands_sep() const */

undefined4 __thiscall std::__ndk1::numpunct<wchar_t>::do_thousands_sep(numpunct<wchar_t> *this)

{
  return *(undefined4 *)(this + 0x14);
}


// ===== 001d2354  std::__ndk1::numpunct<char>::do_grouping =====

/* std::__ndk1::numpunct<char>::do_grouping() const */

void std::__ndk1::numpunct<char>::do_grouping(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (in_x8,(basic_string_conflict *)(in_x0 + 0x18));
  return;
}


// ===== 001d2360  std::__ndk1::numpunct<wchar_t>::do_grouping =====

/* std::__ndk1::numpunct<wchar_t>::do_grouping() const */

void std::__ndk1::numpunct<wchar_t>::do_grouping(void)

{
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (in_x8,(basic_string_conflict *)(in_x0 + 0x18));
  return;
}


// ===== 001d236c  std::__ndk1::numpunct<char>::do_truename =====

/* std::__ndk1::numpunct<char>::do_truename() const */

void __thiscall std::__ndk1::numpunct<char>::do_truename(numpunct<char> *this)

{
  undefined1 *in_x8;
  
  *in_x8 = 8;
  *(undefined4 *)(in_x8 + 1) = 0x65757274;
  in_x8[5] = 0;
  return;
}


// ===== 001d2388  std::__ndk1::numpunct<wchar_t>::do_truename =====

/* std::__ndk1::numpunct<wchar_t>::do_truename() const */

void __thiscall std::__ndk1::numpunct<wchar_t>::do_truename(numpunct<wchar_t> *this)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *in_x8;
  
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
  basic_string<decltype(nullptr)>(in_x8,L"true");
  return;
}


// ===== 001d2398  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::basic_string<decltype(nullptr)> =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::basic_string<decltype(nullptr)>(wchar_t const*) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::basic_string<decltype(nullptr)>
          (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
           *this,wchar_t *param_1)

{
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  ulong uVar1;
  
  __n = wcslen(param_1);
  if (0x3fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 5) {
    __s1 = this + 4;
    *this = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_001d2418;
  }
  else {
    if (__n + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar1 = __n + 4 & 0xfffffffffffffffc;
    __s1 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *)operator_new(uVar1 << 2);
    *(size_t *)(this + 8) = __n;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = __s1;
    *(ulong *)this = uVar1 | 1;
  }
                    /* try { // try from 001d2408 to 001d2417 has its CatchHandler @ 001d2440 */
  wmemcpy((wchar_t *)__s1,param_1,__n);
LAB_001d2418:
  *(undefined4 *)(__s1 + __n * 4) = 0;
  return;
}


// ===== 001d2444  std::__ndk1::numpunct<char>::do_falsename =====

/* std::__ndk1::numpunct<char>::do_falsename() const */

void __thiscall std::__ndk1::numpunct<char>::do_falsename(numpunct<char> *this)

{
  undefined1 *in_x8;
  
  *in_x8 = 10;
  *(undefined4 *)(in_x8 + 1) = 0x736c6166;
  *(undefined2 *)(in_x8 + 5) = 0x65;
  return;
}


// ===== 001d2464  std::__ndk1::numpunct<wchar_t>::do_falsename =====

/* std::__ndk1::numpunct<wchar_t>::do_falsename() const */

void __thiscall std::__ndk1::numpunct<wchar_t>::do_falsename(numpunct<wchar_t> *this)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *in_x8;
  
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
  basic_string<decltype(nullptr)>(in_x8,L"false");
  return;
}


// ===== 001d2474  std::__ndk1::numpunct_byname<char>::numpunct_byname =====

/* std::__ndk1::numpunct_byname<char>::numpunct_byname(char const*, unsigned long) */

void __thiscall
std::__ndk1::numpunct_byname<char>::numpunct_byname
          (numpunct_byname<char> *this,char *param_1,ulong param_2)

{
  undefined *puVar1;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  puVar1 = PTR_vtable_0020fb08;
  *(undefined2 *)(this + 0x10) = 0x2c2e;
  *(undefined **)this = puVar1 + 0x10;
  *(ulong *)(this + 8) = param_2 - 1;
                    /* try { // try from 001d24a8 to 001d24ab has its CatchHandler @ 001d24b8 */
  __init(this,param_1);
  return;
}


// ===== 001d24ec  std::__ndk1::numpunct_byname<char>::__init =====

/* std::__ndk1::numpunct_byname<char>::__init(char const*) */

void __thiscall
std::__ndk1::numpunct_byname<char>::__init(numpunct_byname<char> *this,char *param_1)

{
  long lVar1;
  wchar_t __c;
  int iVar2;
  __locale_t __dataset;
  __locale_t p_Var3;
  lconv *plVar4;
  size_t sVar5;
  mbstate_t *pmVar6;
  undefined8 uVar7;
  numpunct_byname<char> nVar8;
  void *__dest;
  numpunct_byname<char> *pnVar9;
  ulong uVar10;
  ulong local_88;
  size_t local_80;
  void *local_78;
  mbstate_t local_70;
  mbstate_t mStack_68;
  mbstate_t local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = strcmp(param_1,"C");
  if (iVar2 == 0) goto LAB_001d26e0;
  __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  if (__dataset == (__locale_t)0x0) {
    sVar5 = strlen(param_1);
    if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 001d2720 to 001d275b has its CatchHandler @ 001d27e8 */
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    if (sVar5 < 0x17) {
      __dest = (void *)((ulong)&local_88 | 1);
      local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar5 << 1));
      if (sVar5 == 0) goto LAB_001d277c;
    }
    else {
      uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar10);
      local_88 = uVar10 | 1;
      local_80 = sVar5;
      local_78 = __dest;
    }
    memcpy(__dest,param_1,sVar5);
LAB_001d277c:
    *(undefined1 *)((long)__dest + sVar5) = 0;
                    /* try { // try from 001d2780 to 001d2793 has its CatchHandler @ 001d27cc */
    pmVar6 = (mbstate_t *)
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&local_88,0,
                        "numpunct_byname<char>::numpunct_byname failed to construct for ");
    local_60 = pmVar6[2];
    mStack_68 = pmVar6[1];
    local_70 = *pmVar6;
    pmVar6[1].__count = 0;
    pmVar6[1].__value = (_union_27)0x0;
    pmVar6[2].__count = 0;
    pmVar6[2].__value = (_union_27)0x0;
    pmVar6->__count = 0;
    pmVar6->__value = (_union_27)0x0;
                    /* try { // try from 001d27ac to 001d27b3 has its CatchHandler @ 001d27b4 */
    uVar7 = FUN_001cbd58(&local_70);
                    /* catch() { ... } // from try @ 001d27ac with catch @ 001d27b4 */
    if (((ulong)local_70 & 1) != 0) {
      operator_delete((void *)local_60);
    }
    if ((local_88 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00200e50(uVar7);
    }
    operator_delete(local_78);
                    /* WARNING: Subroutine does not return */
    FUN_00200e50(uVar7);
  }
                    /* try { // try from 001d2548 to 001d254b has its CatchHandler @ 001d287c */
  p_Var3 = uselocale(__dataset);
                    /* try { // try from 001d2550 to 001d2553 has its CatchHandler @ 001d2864 */
  plVar4 = localeconv();
  if (p_Var3 != (__locale_t)0x0) {
                    /* try { // try from 001d255c to 001d2563 has its CatchHandler @ 001d285c */
    uselocale(p_Var3);
  }
  pnVar9 = (numpunct_byname<char> *)plVar4->decimal_point;
  nVar8 = *pnVar9;
  if (nVar8 != (numpunct_byname<char>)0x0) {
    if (pnVar9[1] == (numpunct_byname<char>)0x0) {
LAB_001d2614:
      this[0x10] = nVar8;
    }
    else {
      local_70.__count = 0;
      local_70.__value = (_union_27)0x0;
                    /* try { // try from 001d257c to 001d2593 has its CatchHandler @ 001d287c */
      sVar5 = __strlen_chk(pnVar9,0xffffffffffffffff);
      p_Var3 = uselocale(__dataset);
                    /* try { // try from 001d2598 to 001d25ab has its CatchHandler @ 001d2844 */
      sVar5 = mbrtowc((wchar_t *)&local_88,(char *)pnVar9,sVar5,&local_70);
      if (p_Var3 != (__locale_t)0x0) {
                    /* try { // try from 001d25b4 to 001d25bb has its CatchHandler @ 001d2828 */
        uselocale(p_Var3);
      }
      __c = (wchar_t)local_88;
      if (sVar5 < 0xfffffffffffffffe) {
                    /* try { // try from 001d25c8 to 001d25cf has its CatchHandler @ 001d287c */
        p_Var3 = uselocale(__dataset);
                    /* try { // try from 001d25d4 to 001d25db has its CatchHandler @ 001d280c */
        iVar2 = wctob(__c);
        if (p_Var3 != (__locale_t)0x0) {
                    /* try { // try from 001d25e4 to 001d25eb has its CatchHandler @ 001d27f0 */
          uselocale(p_Var3);
        }
        if (iVar2 == -1) {
          if ((__c == L'\x202f') || (__c == L'\xa0')) {
            nVar8 = (numpunct_byname<char>)0x20;
            goto LAB_001d2614;
          }
        }
        else {
          this[0x10] = SUB41(iVar2,0);
        }
      }
    }
  }
  pnVar9 = (numpunct_byname<char> *)plVar4->thousands_sep;
  nVar8 = *pnVar9;
  if (nVar8 != (numpunct_byname<char>)0x0) {
    if (pnVar9[1] == (numpunct_byname<char>)0x0) {
LAB_001d26c8:
      this[0x11] = nVar8;
    }
    else {
      local_70.__count = 0;
      local_70.__value = (_union_27)0x0;
                    /* try { // try from 001d2630 to 001d2647 has its CatchHandler @ 001d287c */
      sVar5 = __strlen_chk(pnVar9,0xffffffffffffffff);
      p_Var3 = uselocale(__dataset);
                    /* try { // try from 001d264c to 001d265f has its CatchHandler @ 001d282c */
      sVar5 = mbrtowc((wchar_t *)&local_88,(char *)pnVar9,sVar5,&local_70);
      if (p_Var3 != (__locale_t)0x0) {
                    /* try { // try from 001d2668 to 001d266f has its CatchHandler @ 001d2824 */
        uselocale(p_Var3);
      }
      if (sVar5 < 0xfffffffffffffffe) {
                    /* try { // try from 001d267c to 001d2683 has its CatchHandler @ 001d287c */
        p_Var3 = uselocale(__dataset);
                    /* try { // try from 001d2688 to 001d268f has its CatchHandler @ 001d27f4 */
        iVar2 = wctob((wchar_t)local_88);
        if (p_Var3 != (__locale_t)0x0) {
                    /* try { // try from 001d2698 to 001d269f has its CatchHandler @ 001d27ec */
          uselocale(p_Var3);
        }
        if (iVar2 == -1) {
          if (((wchar_t)local_88 == L'\x202f') || ((wchar_t)local_88 == L'\xa0')) {
            nVar8 = (numpunct_byname<char>)0x20;
            goto LAB_001d26c8;
          }
        }
        else {
          this[0x11] = SUB41(iVar2,0);
        }
      }
    }
  }
                    /* try { // try from 001d26d4 to 001d26d7 has its CatchHandler @ 001d287c */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x18),plVar4->grouping);
                    /* try { // try from 001d26d8 to 001d26df has its CatchHandler @ 001d2860 */
  freelocale(__dataset);
LAB_001d26e0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001d2894  std::__ndk1::numpunct_byname<char>::numpunct_byname =====

/* std::__ndk1::numpunct_byname<char>::numpunct_byname(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */

void __thiscall
std::__ndk1::numpunct_byname<char>::numpunct_byname
          (numpunct_byname<char> *this,basic_string_conflict *param_1,ulong param_2)

{
  basic_string_conflict *pbVar1;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x10) = 0x2c2e;
  *(undefined **)this = PTR_vtable_0020fb08 + 0x10;
  *(ulong *)(this + 8) = param_2 - 1;
  pbVar1 = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
                    /* try { // try from 001d28d8 to 001d28db has its CatchHandler @ 001d28e8 */
  __init(this,(char *)pbVar1);
  return;
}


// ===== 001d291c  std::__ndk1::numpunct_byname<char>::~numpunct_byname =====

/* std::__ndk1::numpunct_byname<char>::~numpunct_byname() */

void __thiscall std::__ndk1::numpunct_byname<char>::~numpunct_byname(numpunct_byname<char> *this)

{
  *(undefined **)this = PTR_vtable_0020f9f0 + 0x10;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001d2964  std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname =====

/* std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname(char const*, unsigned long) */

void __thiscall
std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname
          (numpunct_byname<wchar_t> *this,char *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  uVar1 = DAT_00146348;
  *(undefined8 *)(this + 0x18) = 0;
  puVar2 = PTR_vtable_0020fb10;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined **)this = puVar2 + 0x10;
  *(ulong *)(this + 8) = param_2 - 1;
                    /* try { // try from 001d299c to 001d299f has its CatchHandler @ 001d29ac */
  __init(this,param_1);
  return;
}


// ===== 001d29e0  std::__ndk1::numpunct_byname<wchar_t>::__init =====

/* std::__ndk1::numpunct_byname<wchar_t>::__init(char const*) */

void __thiscall
std::__ndk1::numpunct_byname<wchar_t>::__init(numpunct_byname<wchar_t> *this,char *param_1)

{
  long lVar1;
  int iVar2;
  __locale_t __dataset;
  __locale_t p_Var3;
  lconv *plVar4;
  size_t sVar5;
  mbstate_t *pmVar6;
  undefined8 uVar7;
  void *__dest;
  char *pcVar8;
  ulong uVar9;
  ulong local_88;
  size_t local_80;
  void *local_78;
  mbstate_t local_70;
  mbstate_t mStack_68;
  mbstate_t local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = strcmp(param_1,"C");
  if (iVar2 == 0) {
LAB_001d2b2c:
    if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 001d2a3c to 001d2a3f has its CatchHandler @ 001d2c90 */
    p_Var3 = uselocale(__dataset);
                    /* try { // try from 001d2a44 to 001d2a47 has its CatchHandler @ 001d2c78 */
    plVar4 = localeconv();
    if (p_Var3 != (__locale_t)0x0) {
                    /* try { // try from 001d2a50 to 001d2a57 has its CatchHandler @ 001d2c70 */
      uselocale(p_Var3);
    }
    pcVar8 = plVar4->decimal_point;
    if (*pcVar8 != '\0') {
      local_70.__count = 0;
      local_70.__value = (_union_27)0x0;
                    /* try { // try from 001d2a68 to 001d2a7f has its CatchHandler @ 001d2c90 */
      sVar5 = __strlen_chk(pcVar8,0xffffffffffffffff);
      p_Var3 = uselocale(__dataset);
                    /* try { // try from 001d2a84 to 001d2a97 has its CatchHandler @ 001d2c58 */
      sVar5 = mbrtowc((wchar_t *)&local_88,pcVar8,sVar5,&local_70);
      if (p_Var3 != (__locale_t)0x0) {
                    /* try { // try from 001d2aa0 to 001d2aa7 has its CatchHandler @ 001d2c3c */
        uselocale(p_Var3);
      }
      if (sVar5 < 0xfffffffffffffffe) {
        *(wchar_t *)(this + 0x10) = (wchar_t)local_88;
      }
    }
    pcVar8 = plVar4->thousands_sep;
    if (*pcVar8 != '\0') {
      local_70.__count = 0;
      local_70.__value = (_union_27)0x0;
                    /* try { // try from 001d2ac8 to 001d2adf has its CatchHandler @ 001d2c90 */
      sVar5 = __strlen_chk(pcVar8,0xffffffffffffffff);
      p_Var3 = uselocale(__dataset);
                    /* try { // try from 001d2ae4 to 001d2af7 has its CatchHandler @ 001d2c40 */
      sVar5 = mbrtowc((wchar_t *)&local_88,pcVar8,sVar5,&local_70);
      if (p_Var3 != (__locale_t)0x0) {
                    /* try { // try from 001d2b00 to 001d2b07 has its CatchHandler @ 001d2c38 */
        uselocale(p_Var3);
      }
      if (sVar5 < 0xfffffffffffffffe) {
        *(wchar_t *)(this + 0x14) = (wchar_t)local_88;
      }
    }
                    /* try { // try from 001d2b20 to 001d2b23 has its CatchHandler @ 001d2c90 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x18),plVar4->grouping);
                    /* try { // try from 001d2b24 to 001d2b2b has its CatchHandler @ 001d2c74 */
    freelocale(__dataset);
    goto LAB_001d2b2c;
  }
  sVar5 = strlen(param_1);
  if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 001d2b6c to 001d2ba7 has its CatchHandler @ 001d2c34 */
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (sVar5 < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar5 << 1));
    if (sVar5 == 0) goto LAB_001d2bc8;
  }
  else {
    uVar9 = sVar5 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar9);
    local_88 = uVar9 | 1;
    local_80 = sVar5;
    local_78 = __dest;
  }
  memcpy(__dest,param_1,sVar5);
LAB_001d2bc8:
  *(undefined1 *)((long)__dest + sVar5) = 0;
                    /* try { // try from 001d2bcc to 001d2bdf has its CatchHandler @ 001d2c18 */
  pmVar6 = (mbstate_t *)
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_88,0,
                      "numpunct_byname<wchar_t>::numpunct_byname failed to construct for ");
  local_60 = pmVar6[2];
  mStack_68 = pmVar6[1];
  local_70 = *pmVar6;
  pmVar6[1].__count = 0;
  pmVar6[1].__value = (_union_27)0x0;
  pmVar6[2].__count = 0;
  pmVar6[2].__value = (_union_27)0x0;
  pmVar6->__count = 0;
  pmVar6->__value = (_union_27)0x0;
                    /* try { // try from 001d2bf8 to 001d2bff has its CatchHandler @ 001d2c00 */
  uVar7 = FUN_001cbd58(&local_70);
                    /* catch() { ... } // from try @ 001d2bf8 with catch @ 001d2c00 */
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)local_60);
  }
  if ((local_88 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00200e50(uVar7);
  }
  operator_delete(local_78);
                    /* WARNING: Subroutine does not return */
  FUN_00200e50(uVar7);
}


// ===== 001d2ca8  std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname =====

/* std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */

void __thiscall
std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname
          (numpunct_byname<wchar_t> *this,basic_string_conflict *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  basic_string_conflict *pbVar3;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  uVar1 = DAT_00146348;
  *(undefined8 *)(this + 0x18) = 0;
  puVar2 = PTR_vtable_0020fb10;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined **)this = puVar2 + 0x10;
  *(ulong *)(this + 8) = param_2 - 1;
  pbVar3 = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
  }
                    /* try { // try from 001d2cf0 to 001d2cf3 has its CatchHandler @ 001d2d00 */
  __init(this,(char *)pbVar3);
  return;
}


// ===== 001d2d34  std::__ndk1::numpunct_byname<wchar_t>::~numpunct_byname =====

/* std::__ndk1::numpunct_byname<wchar_t>::~numpunct_byname() */

void __thiscall
std::__ndk1::numpunct_byname<wchar_t>::~numpunct_byname(numpunct_byname<wchar_t> *this)

{
  *(undefined **)this = PTR_vtable_0020f9f8 + 0x10;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001d2d7c  std::__ndk1::__num_get_base::__get_base =====

/* std::__ndk1::__num_get_base::__get_base(std::__ndk1::ios_base&) */

undefined8 std::__ndk1::__num_get_base::__get_base(ios_base *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x4a;
  if (uVar1 == 0) {
    return 0;
  }
  if (uVar1 != 0x40) {
    if (uVar1 == 8) {
      return 0x10;
    }
    return 10;
  }
  return 8;
}


// ===== 001d2dbc  std::__ndk1::__time_get_c_storage<char>::__weeks =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::__time_get_c_storage<char>::__weeks() const */

undefined1 * std::__ndk1::__time_get_c_storage<char>::__weeks(void)

{
  int iVar1;
  
  if (((DAT_00214f68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214f68), iVar1 != 0)) {
    if (((DAT_00215210 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215210), iVar1 != 0)) {
      _DAT_002151f8 = 0;
      DAT_002151f0 = 0;
      DAT_00215208 = 0;
      _DAT_00215200 = 0;
      DAT_002151d8 = 0;
      _DAT_002151d0 = 0;
      uRam00000000002151e8 = 0;
      _DAT_002151e0 = 0;
      uRam00000000002151b8 = 0;
      _DAT_002151b0 = 0;
      _DAT_002151c8 = 0;
      DAT_002151c0 = 0;
      _DAT_00215198 = 0;
      DAT_00215190 = 0;
      DAT_002151a8 = 0;
      _DAT_002151a0 = 0;
      DAT_00215178 = 0;
      _DAT_00215170 = 0;
      uRam0000000000215188 = 0;
      _DAT_00215180 = 0;
      uRam0000000000215158 = 0;
      _DAT_00215150 = 0;
      _DAT_00215168 = 0;
      DAT_00215160 = 0;
      _DAT_00215138 = 0;
      DAT_00215130 = 0;
      DAT_00215148 = 0;
      _DAT_00215140 = 0;
      DAT_00215118 = 0;
      _DAT_00215110 = 0;
      uRam0000000000215128 = 0;
      _DAT_00215120 = 0;
      uRam00000000002150f8 = 0;
      _DAT_002150f0 = 0;
      _DAT_00215108 = 0;
      DAT_00215100 = 0;
      _DAT_002150d8 = 0;
      DAT_002150d0 = 0;
      DAT_002150e8 = 0;
      _DAT_002150e0 = 0;
      uRam00000000002150c8 = 0;
      _DAT_002150c0 = 0;
      __cxa_atexit(FUN_001da938,0,&PTR_LOOP_002086b0);
      __cxa_guard_release(&DAT_00215210);
    }
                    /* try { // try from 001d2e0c to 001d2f27 has its CatchHandler @ 001d2fb4 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002150c0,"Sunday");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002150d8,"Monday");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002150f0,"Tuesday");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215108,"Wednesday");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215120,"Thursday");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215138,"Friday");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215150,"Saturday");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215168,"Sun");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215180,"Mon");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215198,"Tue");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002151b0,"Wed");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002151c8,"Thu");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002151e0,"Fri");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002151f8,"Sat");
    DAT_00214f60 = &DAT_002150c0;
    __cxa_guard_release(&DAT_00214f68);
  }
  return DAT_00214f60;
}


// ===== 001d2fcc  std::__ndk1::__time_get_c_storage<wchar_t>::__weeks =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::__time_get_c_storage<wchar_t>::__weeks() const */

undefined1 * std::__ndk1::__time_get_c_storage<wchar_t>::__weeks(void)

{
  int iVar1;
  
  if (((DAT_00214f78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214f78), iVar1 != 0)) {
    if (((DAT_00215368 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215368), iVar1 != 0)) {
      _DAT_00215350 = 0;
      DAT_00215348 = 0;
      DAT_00215360 = 0;
      _DAT_00215358 = 0;
      DAT_00215330 = 0;
      _DAT_00215328 = 0;
      uRam0000000000215340 = 0;
      _DAT_00215338 = 0;
      uRam0000000000215310 = 0;
      _DAT_00215308 = 0;
      _DAT_00215320 = 0;
      DAT_00215318 = 0;
      _DAT_002152f0 = 0;
      DAT_002152e8 = 0;
      DAT_00215300 = 0;
      _DAT_002152f8 = 0;
      DAT_002152d0 = 0;
      _DAT_002152c8 = 0;
      uRam00000000002152e0 = 0;
      _DAT_002152d8 = 0;
      uRam00000000002152b0 = 0;
      _DAT_002152a8 = 0;
      _DAT_002152c0 = 0;
      DAT_002152b8 = 0;
      _DAT_00215290 = 0;
      DAT_00215288 = 0;
      DAT_002152a0 = 0;
      _DAT_00215298 = 0;
      DAT_00215270 = 0;
      _DAT_00215268 = 0;
      uRam0000000000215280 = 0;
      _DAT_00215278 = 0;
      uRam0000000000215250 = 0;
      _DAT_00215248 = 0;
      _DAT_00215260 = 0;
      DAT_00215258 = 0;
      _DAT_00215230 = 0;
      DAT_00215228 = 0;
      DAT_00215240 = 0;
      _DAT_00215238 = 0;
      uRam0000000000215220 = 0;
      _DAT_00215218 = 0;
      __cxa_atexit(FUN_001daa9c,0,&PTR_LOOP_002086b0);
      __cxa_guard_release(&DAT_00215368);
    }
                    /* try { // try from 001d301c to 001d3137 has its CatchHandler @ 001d31c4 */
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215218,L"Sunday");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215230,L"Monday");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215248,L"Tuesday");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215260,L"Wednesday");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215278,L"Thursday");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215290,L"Friday");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002152a8,L"Saturday");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002152c0,L"Sun");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002152d8,L"Mon");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002152f0,L"Tue");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215308,L"Wed");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215320,L"Thu");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215338,L"Fri");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215350,L"Sat");
    DAT_00214f70 = &DAT_00215218;
    __cxa_guard_release(&DAT_00214f78);
  }
  return DAT_00214f70;
}


// ===== 001d31dc  std::__ndk1::__time_get_c_storage<char>::__months =====

/* std::__ndk1::__time_get_c_storage<char>::__months() const */

undefined * std::__ndk1::__time_get_c_storage<char>::__months(void)

{
  int iVar1;
  
  if (((DAT_00214f88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214f88), iVar1 != 0)) {
    if (((DAT_002155b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_002155b0), iVar1 != 0)) {
      memset(&DAT_00215370,0,0x240);
      __cxa_atexit(FUN_001dac00,0,&PTR_LOOP_002086b0);
      __cxa_guard_release(&DAT_002155b0);
    }
                    /* try { // try from 001d322c to 001d340f has its CatchHandler @ 001d3478 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215370,"January");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215388,"February");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002153a0,"March");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002153b8,"April");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002153d0,"May");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002153e8,"June");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215400,"July");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215418,"August");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215430,"September");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215448,"October");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215460,"November");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215478,"December");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215490,"Jan");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002154a8,"Feb");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002154c0,"Mar");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002154d8,"Apr");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_002154f0,"May");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215508,"Jun");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215520,"Jul");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215538,"Aug");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215550,"Sep");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215568,"Oct");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215580,"Nov");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215598,"Dec");
    DAT_00214f80 = &DAT_00215370;
    __cxa_guard_release(&DAT_00214f88);
  }
  return DAT_00214f80;
}


// ===== 001d3490  std::__ndk1::__time_get_c_storage<wchar_t>::__months =====

/* std::__ndk1::__time_get_c_storage<wchar_t>::__months() const */

undefined * std::__ndk1::__time_get_c_storage<wchar_t>::__months(void)

{
  int iVar1;
  
  if (((DAT_00214f98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214f98), iVar1 != 0)) {
    if (((DAT_002157f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_002157f8), iVar1 != 0)) {
      memset(&DAT_002155b8,0,0x240);
      __cxa_atexit(FUN_001dac48,0,&PTR_LOOP_002086b0);
      __cxa_guard_release(&DAT_002157f8);
    }
                    /* try { // try from 001d34e0 to 001d36c3 has its CatchHandler @ 001d372c */
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002155b8,L"January");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002155d0,L"February");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002155e8,L"March");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215600,L"April");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215618,L"May");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215630,L"June");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215648,L"July");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215660,L"August");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215678,L"September");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215690,L"October");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002156a8,L"November");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002156c0,L"December");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002156d8,L"Jan");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002156f0,L"Feb");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215708,L"Mar");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215720,L"Apr");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215738,L"May");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215750,L"Jun");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215768,L"Jul");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215780,L"Aug");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215798,L"Sep");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002157b0,L"Oct");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002157c8,L"Nov");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002157e0,L"Dec");
    DAT_00214f90 = &DAT_002155b8;
    __cxa_guard_release(&DAT_00214f98);
  }
  return DAT_00214f90;
}


// ===== 001d3744  std::__ndk1::__time_get_c_storage<char>::__am_pm =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::__time_get_c_storage<char>::__am_pm() const */

undefined1 * std::__ndk1::__time_get_c_storage<char>::__am_pm(void)

{
  int iVar1;
  
  if (((DAT_00214fa8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214fa8), iVar1 != 0)) {
    if (((DAT_00215830 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215830), iVar1 != 0)) {
      _DAT_00215818 = 0;
      DAT_00215810 = 0;
      DAT_00215828 = 0;
      _DAT_00215820 = 0;
      uRam0000000000215808 = 0;
      _DAT_00215800 = 0;
      __cxa_atexit(FUN_001dac90,0,&PTR_LOOP_002086b0);
      __cxa_guard_release(&DAT_00215830);
    }
                    /* try { // try from 001d3794 to 001d37bf has its CatchHandler @ 001d3828 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215800,"AM");
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_00215818,"PM");
    DAT_00214fa0 = &DAT_00215800;
    __cxa_guard_release(&DAT_00214fa8);
  }
  return DAT_00214fa0;
}


// ===== 001d3840  std::__ndk1::__time_get_c_storage<wchar_t>::__am_pm =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::__time_get_c_storage<wchar_t>::__am_pm() const */

undefined1 * std::__ndk1::__time_get_c_storage<wchar_t>::__am_pm(void)

{
  int iVar1;
  
  if (((DAT_00214fb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214fb8), iVar1 != 0)) {
    if (((DAT_00215868 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215868), iVar1 != 0)) {
      _DAT_00215850 = 0;
      DAT_00215848 = 0;
      DAT_00215860 = 0;
      _DAT_00215858 = 0;
      uRam0000000000215840 = 0;
      _DAT_00215838 = 0;
      __cxa_atexit(FUN_001dacd4,0,&PTR_LOOP_002086b0);
      __cxa_guard_release(&DAT_00215868);
    }
                    /* try { // try from 001d3890 to 001d38bb has its CatchHandler @ 001d3924 */
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215838,L"AM");
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215850,L"PM");
    DAT_00214fb0 = &DAT_00215838;
    __cxa_guard_release(&DAT_00214fb8);
  }
  return DAT_00214fb0;
}


// ===== 001d393c  std::__ndk1::__time_get_c_storage<char>::__x =====

/* std::__ndk1::__time_get_c_storage<char>::__x() const */

undefined1 * std::__ndk1::__time_get_c_storage<char>::__x(void)

{
  int iVar1;
  
  if (((DAT_00214fd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214fd8), iVar1 != 0)) {
    DAT_00214fc0 = 0x10;
    DAT_00214fc1 = 0x79252f64252f6d25;
    DAT_00214fc9 = 0;
    __cxa_atexit(PTR__basic_string_0020f7d0,&DAT_00214fc0,&PTR_LOOP_002086b0);
    __cxa_guard_release(&DAT_00214fd8);
  }
  return &DAT_00214fc0;
}


// ===== 001d39c0  std::__ndk1::__time_get_c_storage<wchar_t>::__x =====

/* std::__ndk1::__time_get_c_storage<wchar_t>::__x() const */

undefined * std::__ndk1::__time_get_c_storage<wchar_t>::__x(void)

{
  int iVar1;
  
  if (((DAT_00214ff8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214ff8), iVar1 != 0)) {
                    /* try { // try from 001d3a00 to 001d3a13 has its CatchHandler @ 001d3a40 */
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    basic_string<decltype(nullptr)>
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00214fe0,L"%m/%d/%y");
    __cxa_atexit(PTR__basic_string_0020fb90,&DAT_00214fe0,&PTR_LOOP_002086b0);
    __cxa_guard_release(&DAT_00214ff8);
  }
  return &DAT_00214fe0;
}


// ===== 001d3a58  std::__ndk1::__time_get_c_storage<char>::__X =====

/* std::__ndk1::__time_get_c_storage<char>::__X() const */

undefined1 * std::__ndk1::__time_get_c_storage<char>::__X(void)

{
  int iVar1;
  
  if (((DAT_00215018 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215018), iVar1 != 0)) {
    DAT_00215000 = 0x10;
    DAT_00215001 = 0x53253a4d253a4825;
    DAT_00215009 = 0;
    __cxa_atexit(PTR__basic_string_0020f7d0,&DAT_00215000,&PTR_LOOP_002086b0);
    __cxa_guard_release(&DAT_00215018);
  }
  return &DAT_00215000;
}


// ===== 001d3adc  std::__ndk1::__time_get_c_storage<wchar_t>::__X =====

/* std::__ndk1::__time_get_c_storage<wchar_t>::__X() const */

undefined * std::__ndk1::__time_get_c_storage<wchar_t>::__X(void)

{
  int iVar1;
  
  if (((DAT_00215038 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215038), iVar1 != 0)) {
                    /* try { // try from 001d3b1c to 001d3b2f has its CatchHandler @ 001d3b5c */
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    basic_string<decltype(nullptr)>
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215020,L"%H:%M:%S");
    __cxa_atexit(PTR__basic_string_0020fb90,&DAT_00215020,&PTR_LOOP_002086b0);
    __cxa_guard_release(&DAT_00215038);
  }
  return &DAT_00215020;
}


// ===== 001d3b74  std::__ndk1::__time_get_c_storage<char>::__c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::__time_get_c_storage<char>::__c() const */

undefined1 * std::__ndk1::__time_get_c_storage<char>::__c(void)

{
  int iVar1;
  
  if (((DAT_00215058 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215058), iVar1 != 0)) {
    DAT_00215040 = 0x28;
    DAT_00215051 = 0x59252053;
    uRam0000000000215049._0_1_ = s__a__b__d__H__M__S__Y_00144bf3[8];
    uRam0000000000215049._1_1_ = s__a__b__d__H__M__S__Y_00144bf3[9];
    uRam0000000000215049._2_1_ = s__a__b__d__H__M__S__Y_00144bf3[10];
    uRam0000000000215049._3_1_ = s__a__b__d__H__M__S__Y_00144bf3[0xb];
    uRam0000000000215049._4_1_ = s__a__b__d__H__M__S__Y_00144bf3[0xc];
    uRam0000000000215049._5_1_ = s__a__b__d__H__M__S__Y_00144bf3[0xd];
    uRam0000000000215049._6_1_ = s__a__b__d__H__M__S__Y_00144bf3[0xe];
    uRam0000000000215049._7_1_ = s__a__b__d__H__M__S__Y_00144bf3[0xf];
    DAT_00215041 = s__a__b__d__H__M__S__Y_00144bf3[0];
    DAT_00215041_1._0_1_ = s__a__b__d__H__M__S__Y_00144bf3[1];
    DAT_00215041_1._1_1_ = s__a__b__d__H__M__S__Y_00144bf3[2];
    DAT_00215041_1._2_1_ = s__a__b__d__H__M__S__Y_00144bf3[3];
    DAT_00215041_1._3_1_ = s__a__b__d__H__M__S__Y_00144bf3[4];
    DAT_00215041_1._4_1_ = s__a__b__d__H__M__S__Y_00144bf3[5];
    DAT_00215041_1._5_1_ = s__a__b__d__H__M__S__Y_00144bf3[6];
    DAT_00215041_1._6_1_ = s__a__b__d__H__M__S__Y_00144bf3[7];
    DAT_00215055 = 0;
    __cxa_atexit(PTR__basic_string_0020f7d0,&DAT_00215040,&PTR_LOOP_002086b0);
    __cxa_guard_release(&DAT_00215058);
  }
  return &DAT_00215040;
}


// ===== 001d3c00  std::__ndk1::__time_get_c_storage<wchar_t>::__c =====

/* std::__ndk1::__time_get_c_storage<wchar_t>::__c() const */

undefined * std::__ndk1::__time_get_c_storage<wchar_t>::__c(void)

{
  int iVar1;
  
  if (((DAT_00215078 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215078), iVar1 != 0)) {
                    /* try { // try from 001d3c40 to 001d3c53 has its CatchHandler @ 001d3c80 */
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    basic_string<decltype(nullptr)>
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_00215060,L"%a %b %d %H:%M:%S %Y");
    __cxa_atexit(PTR__basic_string_0020fb90,&DAT_00215060,&PTR_LOOP_002086b0);
    __cxa_guard_release(&DAT_00215078);
  }
  return &DAT_00215060;
}


// ===== 001d3c98  std::__ndk1::__time_get_c_storage<char>::__r =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::__time_get_c_storage<char>::__r() const */

undefined1 * std::__ndk1::__time_get_c_storage<char>::__r(void)

{
  int iVar1;
  
  if (((DAT_00215098 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215098), iVar1 != 0)) {
    DAT_00215080 = 0x16;
    DAT_00215081._0_7_ = (undefined7)s__I__M__S__p_00145975._0_8_;
    ram0x00215088 = CONCAT31(0x702520,SUB81(s__I__M__S__p_00145975._0_8_,7));
    DAT_0021508c = 0;
    __cxa_atexit(PTR__basic_string_0020f7d0,&DAT_00215080,&PTR_LOOP_002086b0);
    __cxa_guard_release(&DAT_00215098);
  }
  return &DAT_00215080;
}


// ===== 001d3d24  std::__ndk1::__time_get_c_storage<wchar_t>::__r =====

/* std::__ndk1::__time_get_c_storage<wchar_t>::__r() const */

undefined * std::__ndk1::__time_get_c_storage<wchar_t>::__r(void)

{
  int iVar1;
  
  if (((DAT_002150b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_002150b8), iVar1 != 0)) {
                    /* try { // try from 001d3d64 to 001d3d77 has its CatchHandler @ 001d3da4 */
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    basic_string<decltype(nullptr)>
              ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&DAT_002150a0,L"%I:%M:%S %p");
    __cxa_atexit(PTR__basic_string_0020fb90,&DAT_002150a0,&PTR_LOOP_002086b0);
    __cxa_guard_release(&DAT_002150b8);
  }
  return &DAT_002150a0;
}


// ===== 001d3dbc  std::__ndk1::__time_get::__time_get =====

/* std::__ndk1::__time_get::__time_get(char const*) */

void __thiscall std::__ndk1::__time_get::__time_get(__time_get *this,char *param_1)

{
  long lVar1;
  __locale_t p_Var2;
  size_t __n;
  ulong *puVar3;
  undefined8 uVar4;
  void *__dest;
  ulong uVar5;
  ulong local_68;
  size_t local_60;
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  p_Var2 = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  *(__locale_t *)this = p_Var2;
  if (p_Var2 != (__locale_t)0x0) {
    if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_001d3e8c;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_68 = uVar5 | 1;
    local_60 = __n;
    local_58 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_001d3e8c:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 001d3e90 to 001d3ea3 has its CatchHandler @ 001d3ef4 */
  puVar3 = (ulong *)basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_68,0,"time_get_byname failed to construct for ");
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 001d3ebc to 001d3ec3 has its CatchHandler @ 001d3ec4 */
  uVar4 = FUN_001cbd58(&local_50);
                    /* catch() { ... } // from try @ 001d3ebc with catch @ 001d3ec4 */
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
                    /* WARNING: Subroutine does not return */
    FUN_00200e50(uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00200e50(uVar4);
}


// ===== 001d3f10  std::__ndk1::__time_get::__time_get =====

/* std::__ndk1::__time_get::__time_get(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall std::__ndk1::__time_get::__time_get(__time_get *this,basic_string_conflict *param_1)

{
  long lVar1;
  __locale_t p_Var2;
  basic_string_conflict *pbVar3;
  basic_string_conflict *__locale;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __locale = *(basic_string_conflict **)(param_1 + 0x10);
  pbVar3 = (basic_string_conflict *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    __locale = param_1 + 1;
  }
  p_Var2 = newlocale(0x1fbf,(char *)__locale,(__locale_t)0x0);
  *(__locale_t *)this = p_Var2;
  if (p_Var2 == (__locale_t)0x0) {
    operator+((__ndk1 *)"time_get_byname failed to construct for ",(char *)param_1,pbVar3);
                    /* try { // try from 001d3f94 to 001d3f9b has its CatchHandler @ 001d3fa0 */
    FUN_001cbd58(auStack_50);
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d3fbc  std::__ndk1::__time_get::~__time_get =====

/* std::__ndk1::__time_get::~__time_get() */

void __thiscall std::__ndk1::__time_get::~__time_get(__time_get *this)

{
                    /* try { // try from 001d3fc8 to 001d3fcb has its CatchHandler @ 001d3fd4 */
  freelocale(*(__locale_t *)this);
  return;
}


// ===== 001d3fd8  std::__ndk1::__time_get_storage<char>::__analyze =====

/* std::__ndk1::__time_get_storage<char>::__analyze(char, std::__ndk1::ctype<char> const&) */

void std::__ndk1::__time_get_storage<char>::__analyze(char param_1,ctype *param_2)

{
  undefined8 uVar1;
  
  uVar1 = tpidr_el0;
  FUN_00202ca4(param_1);
  return;
}


// ===== 001d400c  FUN_001d400c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d400c(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,undefined8 param_2,undefined8 *param_3,char param_4,long *param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  byte bVar5;
  uint uVar6;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 in_x10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  long unaff_x29;
  long in_stack_00000010;
  undefined8 in_stack_00000020;
  byte *in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  int iStack0000000000000050;
  undefined4 uStack0000000000000054;
  long lStack0000000000000058;
  char *pcStack0000000000000060;
  undefined2 uStack0000000000000068;
  undefined1 uStack000000000000006a;
  
  uStack0000000000000048 = _UNK_00146258;
  uStack0000000000000040 = _DAT_00146250;
  *(undefined8 *)(unaff_x29 + -0x10) = in_x10;
  lStack0000000000000058 = 0;
  iStack0000000000000050 = -1;
  uStack0000000000000054 = 0;
  pcStack0000000000000060 = (char *)0x0;
  uStack000000000000006a = 0;
  uStack0000000000000068 = CONCAT11(param_4,0x25);
  uStack0000000000000030 = param_2;
  sVar7 = strftime_l(&stack0x0000006c,100,(char *)&stack0x00000068,(tm *)&stack0x00000030,
                     (__locale_t)*param_3);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  if (sVar7 != 0) {
    pbVar3 = &stack0x0000006c + sVar7;
    puVar1 = param_3 + 0x2b;
    pbVar2 = (byte *)(param_3 + 0x73);
    pbVar12 = &stack0x0000006c;
    do {
      if (((char)*pbVar12 < '\0') || ((*(ulong *)(param_5[2] + (ulong)*pbVar12 * 8) & 1) == 0)) {
        in_stack_00000020._4_4_ = 0;
        in_stack_00000028 = pbVar12;
        lVar8 = FUN_001d45d0(&stack0x00000028,pbVar3,param_3 + 1,puVar1,param_5,
                             (long)&stack0x00000020 + 4,0);
        lVar8 = lVar8 - (long)(param_3 + 1);
        if (lVar8 < 0x150) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (param_1,'%');
          if (lVar8 < 0xa8) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(param_1,'A');
            pbVar13 = in_stack_00000028;
          }
          else {
                    /* try { // try from 001d40a8 to 001d4183 has its CatchHandler @ 001d45b4 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(param_1,'a');
            pbVar13 = in_stack_00000028;
          }
        }
        else {
          in_stack_00000028 = pbVar12;
          lVar8 = FUN_001d45d0(&stack0x00000028,pbVar3,puVar1,pbVar2,param_5,
                               (long)&stack0x00000020 + 4,0);
          lVar8 = lVar8 - (long)puVar1;
          if (lVar8 < 0x240) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(param_1,'%');
            if (lVar8 < 0x120) {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              push_back(param_1,'B');
            }
            else {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              push_back(param_1,'b');
            }
            pbVar13 = in_stack_00000028;
            if (param_4 == 'x') {
              lVar8 = lVar8 >> 3;
              if ((*(byte *)(param_3 + lVar8 + 0x2b) & 1) == 0) {
                bVar5 = *(byte *)((long)param_3 + lVar8 * 8 + 0x159);
              }
              else {
                bVar5 = *(byte *)param_3[lVar8 + 0x2d];
              }
              if ((-1 < (char)bVar5) &&
                 (((uint)*(undefined8 *)(param_5[2] + (ulong)bVar5 * 8) >> 6 & 1) != 0)) {
                uVar9 = (ulong)((byte)*param_1 >> 1);
                pbVar4 = param_1 + 1;
                if (((byte)*param_1 & 1) != 0) {
                  uVar9 = *(ulong *)(param_1 + 8);
                  pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                             **)(param_1 + 0x10);
                }
                pbVar4[uVar9 - 1] =
                     (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     )0x6d;
              }
            }
          }
          else {
            if ((*pbVar2 & 1) == 0) {
              uVar9 = (ulong)(*pbVar2 >> 1);
              bVar5 = *(byte *)(param_3 + 0x76);
              if ((bVar5 & 1) == 0) goto LAB_001d4208;
LAB_001d41dc:
              lVar8 = uVar9 + param_3[0x77];
            }
            else {
              uVar9 = param_3[0x74];
              bVar5 = *(byte *)(param_3 + 0x76);
              if ((bVar5 & 1) != 0) goto LAB_001d41dc;
LAB_001d4208:
              lVar8 = uVar9 + (bVar5 >> 1);
            }
                    /* try { // try from 001d4218 to 001d4357 has its CatchHandler @ 001d45b4 */
            if ((lVar8 == 0) ||
               (in_stack_00000028 = pbVar12,
               lVar8 = FUN_001d45d0(&stack0x00000028,pbVar3,pbVar2,param_3 + 0x79,param_5,
                                    (long)&stack0x00000020 + 4,0), 0x2f < lVar8 - (long)pbVar2)) {
              bVar5 = *pbVar12;
              if ((char)bVar5 < '\0') {
LAB_001d42e8:
                in_stack_00000028 = pbVar12;
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                push_back(param_1,bVar5);
              }
              else {
                if (((uint)*(undefined8 *)(param_5[2] + (ulong)bVar5 * 8) >> 6 & 1) != 0) {
                  in_stack_00000028 = pbVar12;
                  uVar6 = (**(code **)(*param_5 + 0x48))(param_5,(ulong)bVar5,0);
                  pbVar13 = pbVar12 + 1;
                  iVar11 = (uVar6 & 0xff) - 0x30;
                  if (pbVar13 == pbVar3) {
LAB_001d43cc:
                    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ | 2;
                  }
                  else {
                    uVar6 = 4;
                    do {
                      bVar5 = *pbVar13;
                      if (((char)bVar5 < '\0') ||
                         (((uint)*(undefined8 *)(param_5[2] + (ulong)bVar5 * 8) >> 6 & 1) == 0))
                      goto LAB_001d43d8;
                    /* try { // try from 001d4390 to 001d439b has its CatchHandler @ 001d45ac */
                      bVar5 = (**(code **)(*param_5 + 0x48))(param_5,(ulong)bVar5,0);
                      pbVar13 = pbVar13 + 1;
                      iVar11 = iVar11 * 10 + (uint)bVar5 + -0x30;
                    } while ((2 < uVar6) && (uVar6 = uVar6 - 1, pbVar13 != pbVar3));
                    if (pbVar13 == pbVar3) goto LAB_001d43cc;
                  }
LAB_001d43d8:
                  switch(iVar11) {
                  case 6:
                    /* try { // try from 001d43fc to 001d443f has its CatchHandler @ 001d45b4 */
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'%');
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'w');
                    break;
                  case 7:
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'%');
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'u');
                    break;
                  case 8:
                  case 9:
                  case 10:
                  case 0xd:
                  case 0xe:
                  case 0xf:
                  case 0x10:
                  case 0x11:
                  case 0x12:
                  case 0x13:
                  case 0x14:
                  case 0x15:
                  case 0x16:
                  case 0x18:
                  case 0x19:
                  case 0x1a:
                  case 0x1b:
                  case 0x1c:
                  case 0x1d:
                  case 0x1e:
                  case 0x20:
                  case 0x21:
                  case 0x22:
                  case 0x23:
                  case 0x24:
                  case 0x25:
                  case 0x26:
                  case 0x27:
                  case 0x28:
                  case 0x29:
                  case 0x2a:
                  case 0x2b:
                  case 0x2c:
                  case 0x2d:
                  case 0x2e:
                  case 0x2f:
                  case 0x30:
                  case 0x31:
                  case 0x32:
                  case 0x33:
                  case 0x34:
                  case 0x35:
                  case 0x36:
                  case 0x38:
                  case 0x39:
                  case 0x3a:
                  case 0x3c:
switchD_001d43f8_caseD_8:
                    for (; in_stack_00000028 != pbVar13; in_stack_00000028 = in_stack_00000028 + 1)
                    {
                    /* try { // try from 001d4454 to 001d445b has its CatchHandler @ 001d45a8 */
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::push_back(param_1,*in_stack_00000028);
                    }
                    break;
                  case 0xb:
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'%');
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'I');
                    break;
                  case 0xc:
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'%');
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'m');
                    break;
                  case 0x17:
                    /* try { // try from 001d4474 to 001d456b has its CatchHandler @ 001d45b4 */
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'%');
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'H');
                    break;
                  case 0x1f:
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'%');
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'d');
                    break;
                  case 0x37:
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'%');
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'M');
                    break;
                  case 0x3b:
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'%');
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'S');
                    break;
                  case 0x3d:
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'%');
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(param_1,'y');
                    break;
                  default:
                    if (iVar11 == 0x16c) {
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::push_back(param_1,'%');
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::push_back(param_1,'j');
                    }
                    else {
                      if (iVar11 != 0x80d) goto switchD_001d43f8_caseD_8;
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::push_back(param_1,'%');
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::push_back(param_1,'Y');
                    }
                  }
                  goto LAB_001d40b8;
                }
                if (bVar5 != 0x25) goto LAB_001d42e8;
                in_stack_00000028 = pbVar12;
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                push_back(param_1,'%');
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                push_back(param_1,'%');
              }
              pbVar13 = pbVar12 + 1;
            }
            else {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              push_back(param_1,'%');
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              push_back(param_1,'p');
              pbVar13 = in_stack_00000028;
            }
          }
        }
      }
      else {
                    /* try { // try from 001d4188 to 001d4193 has its CatchHandler @ 001d45b0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(param_1,' ');
        pbVar10 = pbVar12;
        while (pbVar10 = pbVar10 + 1, pbVar13 = pbVar3, pbVar3 != pbVar10) {
          pbVar12 = pbVar12 + 1;
          pbVar13 = pbVar12;
          if (((char)*pbVar10 < '\0') ||
             (pbVar13 = pbVar10, (*(ulong *)(param_5[2] + (ulong)*pbVar10 * 8) & 1) == 0)) break;
        }
      }
LAB_001d40b8:
      pbVar12 = pbVar13;
    } while (pbVar3 != pbVar13);
  }
  if (*(long *)(in_stack_00000010 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001d45d0  FUN_001d45d0 =====

byte * FUN_001d45d0(long *param_1,byte *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,ulong param_7)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  char *__ptr;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  ulong __size;
  char local_d4 [100];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  uVar6 = param_7;
  if (100 < __size) {
    __ptr = (char *)malloc(__size);
    uVar6 = param_7 & 0xffffffff;
    pcVar11 = __ptr;
    if (__ptr != (char *)0x0) goto LAB_001d4650;
                    /* try { // try from 001d4644 to 001d4647 has its CatchHandler @ 001d4900 */
    std::__throw_bad_alloc();
  }
  __ptr = (char *)0x0;
  pcVar11 = local_d4;
LAB_001d4650:
  lVar12 = 0;
  pbVar7 = param_3;
  pcVar9 = pcVar11;
  if (param_3 != param_4) {
    do {
      if ((*pbVar7 & 1) == 0) {
        if (*pbVar7 >> 1 != 0) goto LAB_001d46ac;
LAB_001d4674:
        __size = __size - 1;
        lVar12 = lVar12 + 1;
        *pcVar9 = '\x02';
      }
      else {
        if (*(long *)(pbVar7 + 8) == 0) goto LAB_001d4674;
LAB_001d46ac:
        *pcVar9 = '\x01';
      }
      pbVar7 = pbVar7 + 0x18;
      pcVar9 = pcVar9 + 1;
    } while (param_4 != pbVar7);
  }
  pbVar7 = (byte *)*param_1;
  if ((__size != 0) && (pbVar7 != param_2)) {
    uVar10 = 0;
    do {
      bVar4 = *pbVar7;
      if ((uVar6 & 1) == 0) {
                    /* try { // try from 001d46ec to 001d46f7 has its CatchHandler @ 001d4904 */
        bVar4 = (**(code **)(*param_5 + 0x18))(param_5,bVar4);
        uVar6 = param_7 & 0xffffffff;
      }
      uVar1 = uVar10 + 1;
      if (param_3 != param_4) {
        bVar3 = false;
        pcVar9 = pcVar11;
        pbVar7 = param_3;
        do {
          if (*pcVar9 == '\x01') {
            if ((*pbVar7 & 1) == 0) {
              bVar5 = pbVar7[uVar10 + 1];
            }
            else {
              bVar5 = *(byte *)(*(long *)(pbVar7 + 0x10) + uVar10);
            }
            if ((uVar6 & 1) == 0) {
                    /* try { // try from 001d4768 to 001d4773 has its CatchHandler @ 001d4908 */
              bVar5 = (**(code **)(*param_5 + 0x18))(param_5);
              uVar6 = param_7 & 0xffffffff;
            }
            if (bVar4 == bVar5) {
              if ((*pbVar7 & 1) == 0) {
                uVar8 = (ulong)(*pbVar7 >> 1);
              }
              else {
                uVar8 = *(ulong *)(pbVar7 + 8);
              }
              if (uVar8 == uVar1) {
                *pcVar9 = '\x02';
                __size = __size - 1;
                lVar12 = lVar12 + 1;
                bVar3 = true;
              }
              else {
                bVar3 = true;
              }
            }
            else {
              __size = __size - 1;
              *pcVar9 = '\0';
            }
          }
          pbVar7 = pbVar7 + 0x18;
          pcVar9 = pcVar9 + 1;
        } while (param_4 != pbVar7);
        if ((bVar3) &&
           (*param_1 = *param_1 + 1, pbVar7 = param_3, pcVar9 = pcVar11, 1 < lVar12 + __size)) {
          do {
            if (*pcVar9 == '\x02') {
              if ((*pbVar7 & 1) == 0) {
                uVar10 = (ulong)(*pbVar7 >> 1);
              }
              else {
                uVar10 = *(ulong *)(pbVar7 + 8);
              }
              if (uVar10 != uVar1) {
                lVar12 = lVar12 + -1;
                *pcVar9 = '\0';
              }
            }
            pbVar7 = pbVar7 + 0x18;
            pcVar9 = pcVar9 + 1;
          } while (param_4 != pbVar7);
        }
      }
      pbVar7 = (byte *)*param_1;
    } while ((__size != 0) && (uVar10 = uVar1, pbVar7 != param_2));
  }
  if (pbVar7 == param_2) {
    *param_6 = *param_6 | 2;
  }
  if (param_3 != param_4) {
    do {
      if (*pcVar11 == '\x02') goto joined_r0x001d48f4;
      param_3 = param_3 + 0x18;
      pcVar11 = pcVar11 + 1;
    } while (param_4 != param_3);
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x001d48f4:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}


// ===== 001d4920  std::__ndk1::__time_get_storage<wchar_t>::__analyze =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::__time_get_storage<wchar_t>::__analyze(char, std::__ndk1::ctype<wchar_t> const&) */

void std::__ndk1::__time_get_storage<wchar_t>::__analyze(char param_1,ctype *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  long lVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  __locale_t __dataset;
  size_t sVar10;
  ulong uVar11;
  long lVar12;
  long *in_x2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *in_x8;
  int iVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  wchar_t *local_2b8;
  char *local_2b0;
  mbstate_t mStack_2a8;
  tm local_2a0;
  undefined4 local_268;
  wchar_t local_264 [100];
  char acStack_d4 [100];
  long local_70;
  
  puVar9 = (undefined8 *)(ulong)(byte)param_1;
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_2a0.tm_gmtoff = 0;
  local_2a0.tm_isdst = -1;
  local_2a0._36_4_ = 0;
  local_2a0.tm_zone = (char *)0x0;
  local_2a0._8_8_ = _UNK_00146248;
  local_2a0._0_8_ = _DAT_00146240;
  local_2a0._24_8_ = _UNK_00146258;
  local_2a0._16_8_ = _DAT_00146250;
  local_268._2_1_ = 0;
  local_268._0_2_ = CONCAT11((char)param_2,0x25);
  strftime_l(acStack_d4,100,(char *)&local_268,&local_2a0,(__locale_t)*puVar9);
  mStack_2a8.__count = 0;
  mStack_2a8.__value = (_union_27)0x0;
  local_2b0 = acStack_d4;
  __dataset = uselocale((__locale_t)*puVar9);
                    /* try { // try from 001d49c0 to 001d49d3 has its CatchHandler @ 001d4fb0 */
  sVar10 = mbsrtowcs(local_264,&local_2b0,100,&mStack_2a8);
  if (__dataset != (__locale_t)0x0) {
                    /* try { // try from 001d49dc to 001d49e3 has its CatchHandler @ 001d4fac */
    uselocale(__dataset);
  }
  if (sVar10 == 0xffffffffffffffff) {
    __throw_runtime_error("locale not supported");
  }
  else {
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    if (sVar10 != 0) {
      pbVar1 = (byte *)(puVar9 + 0x73);
      pwVar3 = local_264 + sVar10;
      puVar2 = puVar9 + 0x2b;
      pwVar15 = local_264;
      do {
                    /* try { // try from 001d4a54 to 001d4a6f has its CatchHandler @ 001d4fd0 */
        uVar11 = (**(code **)(*in_x2 + 0x18))();
        if ((uVar11 & 1) == 0) {
                    /* try { // try from 001d4aa4 to 001d4c37 has its CatchHandler @ 001d4fd4 */
          local_2b8 = pwVar15;
          lVar12 = FUN_001d4ffc(&local_2b8,pwVar3,puVar9 + 1,puVar2);
          lVar12 = lVar12 - (long)(puVar9 + 1);
          if (lVar12 < 0x150) {
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::push_back(in_x8,L'%');
            if (lVar12 < 0xa8) {
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'A');
              pwVar14 = local_2b8;
            }
            else {
                    /* try { // try from 001d4a30 to 001d4a3b has its CatchHandler @ 001d4fd4 */
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'a');
              pwVar14 = local_2b8;
            }
          }
          else {
            local_2b8 = pwVar15;
            lVar12 = FUN_001d4ffc(&local_2b8,pwVar3,puVar2,pbVar1);
            if (lVar12 - (long)puVar2 < 0x240) {
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'%');
              if (lVar12 - (long)puVar2 < 0x120) {
                basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                ::push_back(in_x8,L'B');
              }
              else {
                basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                ::push_back(in_x8,L'b');
              }
              pwVar14 = local_2b8;
              if ((((uint)param_2 & 0xff) == 0x78) &&
                 (uVar11 = (**(code **)(*in_x2 + 0x18))(), pwVar14 = local_2b8, (uVar11 & 1) != 0))
              {
                uVar11 = (ulong)((byte)*in_x8 >> 1);
                pbVar5 = in_x8 + 4;
                if (((byte)*in_x8 & 1) != 0) {
                  uVar11 = *(ulong *)(in_x8 + 8);
                  pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                             **)(in_x8 + 0x10);
                }
                *(undefined4 *)(pbVar5 + uVar11 * 4 + -4) = 0x6d;
              }
            }
            else {
              if ((*pbVar1 & 1) == 0) {
                uVar11 = (ulong)(*pbVar1 >> 1);
                bVar6 = *(byte *)(puVar9 + 0x76);
                if ((bVar6 & 1) != 0) goto LAB_001d4b68;
LAB_001d4b84:
                lVar12 = uVar11 + (bVar6 >> 1);
              }
              else {
                uVar11 = puVar9[0x74];
                bVar6 = *(byte *)(puVar9 + 0x76);
                if ((bVar6 & 1) == 0) goto LAB_001d4b84;
LAB_001d4b68:
                lVar12 = uVar11 + puVar9[0x77];
              }
              if ((lVar12 == 0) ||
                 (local_2b8 = pwVar15, lVar12 = FUN_001d4ffc(&local_2b8,pwVar3,pbVar1,puVar9 + 0x79)
                 , 0x2f < lVar12 - (long)pbVar1)) {
                local_2b8 = pwVar15;
                uVar11 = (**(code **)(*in_x2 + 0x18))();
                if ((uVar11 & 1) == 0) {
                  cVar7 = (**(code **)(*in_x2 + 0x68))();
                  if (cVar7 == '%') {
                    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    ::push_back(in_x8,L'%');
                    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    ::push_back(in_x8,L'%');
                  }
                  else {
                    /* try { // try from 001d4e20 to 001d4f5b has its CatchHandler @ 001d4fd4 */
                    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    ::push_back(in_x8,*pwVar15);
                  }
                  pwVar14 = pwVar15 + 1;
                }
                else {
                  uVar11 = (**(code **)(*in_x2 + 0x18))();
                  if ((uVar11 & 1) == 0) {
switchD_001d4cec_caseD_8:
                    for (; pwVar14 = pwVar15, local_2b8 != pwVar15; local_2b8 = local_2b8 + 1) {
                    /* try { // try from 001d4dfc to 001d4e03 has its CatchHandler @ 001d4fcc */
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,*local_2b8);
                    }
                  }
                  else {
                    uVar8 = (**(code **)(*in_x2 + 0x68))();
                    pwVar15 = pwVar15 + 1;
                    iVar13 = (uVar8 & 0xff) - 0x30;
                    if (pwVar15 != pwVar3) {
                      uVar8 = 4;
                    /* try { // try from 001d4c60 to 001d4c8b has its CatchHandler @ 001d4fc8 */
                      while (uVar11 = (**(code **)(*in_x2 + 0x18))(), (uVar11 & 1) != 0) {
                        bVar6 = (**(code **)(*in_x2 + 0x68))();
                        pwVar15 = pwVar15 + 1;
                        iVar13 = iVar13 * 10 + (uint)bVar6 + -0x30;
                        if ((uVar8 < 3) || (uVar8 = uVar8 - 1, pwVar15 == pwVar3)) break;
                      }
                    }
                    pwVar14 = pwVar15;
                    switch(iVar13) {
                    case 6:
                    /* try { // try from 001d4cf0 to 001d4daf has its CatchHandler @ 001d4fd4 */
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'%');
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'w');
                      break;
                    case 7:
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'%');
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'u');
                      break;
                    case 8:
                    case 9:
                    case 10:
                    case 0xd:
                    case 0xe:
                    case 0xf:
                    case 0x10:
                    case 0x11:
                    case 0x12:
                    case 0x13:
                    case 0x14:
                    case 0x15:
                    case 0x16:
                    case 0x18:
                    case 0x19:
                    case 0x1a:
                    case 0x1b:
                    case 0x1c:
                    case 0x1d:
                    case 0x1e:
                    case 0x20:
                    case 0x21:
                    case 0x22:
                    case 0x23:
                    case 0x24:
                    case 0x25:
                    case 0x26:
                    case 0x27:
                    case 0x28:
                    case 0x29:
                    case 0x2a:
                    case 0x2b:
                    case 0x2c:
                    case 0x2d:
                    case 0x2e:
                    case 0x2f:
                    case 0x30:
                    case 0x31:
                    case 0x32:
                    case 0x33:
                    case 0x34:
                    case 0x35:
                    case 0x36:
                    case 0x38:
                    case 0x39:
                    case 0x3a:
                    case 0x3c:
                      goto switchD_001d4cec_caseD_8;
                    case 0xb:
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'%');
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'I');
                      break;
                    case 0xc:
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'%');
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'm');
                      break;
                    case 0x17:
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'%');
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'H');
                      break;
                    case 0x1f:
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'%');
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'd');
                      break;
                    case 0x37:
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'%');
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'M');
                      break;
                    case 0x3b:
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'%');
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'S');
                      break;
                    case 0x3d:
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'%');
                      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                      ::push_back(in_x8,L'y');
                      break;
                    default:
                      if (iVar13 == 0x16c) {
                        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                        ::push_back(in_x8,L'%');
                        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                        ::push_back(in_x8,L'j');
                      }
                      else {
                        if (iVar13 != 0x80d) goto switchD_001d4cec_caseD_8;
                        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                        ::push_back(in_x8,L'%');
                        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                        ::push_back(in_x8,L'Y');
                      }
                    }
                  }
                }
              }
              else {
                basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                ::push_back(in_x8,L'%');
                basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                ::push_back(in_x8,L'p');
                pwVar14 = local_2b8;
              }
            }
          }
        }
        else {
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back(in_x8,L' ');
          do {
            pwVar14 = pwVar3;
            if (&local_268 + sVar10 == pwVar15) break;
                    /* try { // try from 001d4a84 to 001d4a8f has its CatchHandler @ 001d4fd8 */
            uVar11 = (**(code **)(*in_x2 + 0x18))();
            pwVar15 = pwVar15 + 1;
            pwVar14 = pwVar15;
          } while ((uVar11 & 1) != 0);
        }
        pwVar15 = pwVar14;
      } while (pwVar3 != pwVar14);
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d4ffc  FUN_001d4ffc =====

byte * FUN_001d4ffc(long *param_1,int *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,ulong param_7)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *__ptr;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  byte *pbVar9;
  char *pcVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  ulong __size;
  char local_d4 [100];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  uVar6 = param_7;
  if (100 < __size) {
    __ptr = (char *)malloc(__size);
    uVar6 = param_7 & 0xffffffff;
    pcVar12 = __ptr;
    if (__ptr != (char *)0x0) goto LAB_001d507c;
                    /* try { // try from 001d5070 to 001d5073 has its CatchHandler @ 001d5328 */
    std::__throw_bad_alloc();
  }
  __ptr = (char *)0x0;
  pcVar12 = local_d4;
LAB_001d507c:
  lVar13 = 0;
  pbVar9 = param_3;
  pcVar10 = pcVar12;
  if (param_3 != param_4) {
    do {
      if ((*pbVar9 & 1) == 0) {
        if (*pbVar9 >> 1 != 0) goto LAB_001d50d8;
LAB_001d50a0:
        __size = __size - 1;
        lVar13 = lVar13 + 1;
        *pcVar10 = '\x02';
      }
      else {
        if (*(long *)(pbVar9 + 8) == 0) goto LAB_001d50a0;
LAB_001d50d8:
        *pcVar10 = '\x01';
      }
      pbVar9 = pbVar9 + 0x18;
      pcVar10 = pcVar10 + 1;
    } while (param_4 != pbVar9);
  }
  piVar7 = (int *)*param_1;
  if ((__size != 0) && (piVar7 != param_2)) {
    uVar11 = 0;
    do {
      iVar4 = *piVar7;
      if ((uVar6 & 1) == 0) {
                    /* try { // try from 001d5118 to 001d5123 has its CatchHandler @ 001d532c */
        iVar4 = (**(code **)(*param_5 + 0x38))(param_5,iVar4);
        uVar6 = param_7 & 0xffffffff;
      }
      uVar1 = uVar11 + 1;
      if (param_3 != param_4) {
        bVar3 = false;
        pcVar10 = pcVar12;
        pbVar9 = param_3;
        do {
          if (*pcVar10 == '\x01') {
            if ((*pbVar9 & 1) == 0) {
              iVar5 = *(int *)(pbVar9 + uVar11 * 4 + 4);
            }
            else {
              iVar5 = *(int *)(*(long *)(pbVar9 + 0x10) + uVar11 * 4);
            }
            if ((uVar6 & 1) == 0) {
                    /* try { // try from 001d5194 to 001d519f has its CatchHandler @ 001d5330 */
              iVar5 = (**(code **)(*param_5 + 0x38))(param_5);
              uVar6 = param_7 & 0xffffffff;
            }
            if (iVar4 == iVar5) {
              if ((*pbVar9 & 1) == 0) {
                uVar8 = (ulong)(*pbVar9 >> 1);
              }
              else {
                uVar8 = *(ulong *)(pbVar9 + 8);
              }
              if (uVar8 == uVar1) {
                *pcVar10 = '\x02';
                __size = __size - 1;
                lVar13 = lVar13 + 1;
                bVar3 = true;
              }
              else {
                bVar3 = true;
              }
            }
            else {
              __size = __size - 1;
              *pcVar10 = '\0';
            }
          }
          pbVar9 = pbVar9 + 0x18;
          pcVar10 = pcVar10 + 1;
        } while (param_4 != pbVar9);
        if ((bVar3) &&
           (*param_1 = *param_1 + 4, pbVar9 = param_3, pcVar10 = pcVar12, 1 < lVar13 + __size)) {
          do {
            if (*pcVar10 == '\x02') {
              if ((*pbVar9 & 1) == 0) {
                uVar11 = (ulong)(*pbVar9 >> 1);
              }
              else {
                uVar11 = *(ulong *)(pbVar9 + 8);
              }
              if (uVar11 != uVar1) {
                lVar13 = lVar13 + -1;
                *pcVar10 = '\0';
              }
            }
            pbVar9 = pbVar9 + 0x18;
            pcVar10 = pcVar10 + 1;
          } while (param_4 != pbVar9);
        }
      }
      piVar7 = (int *)*param_1;
    } while ((__size != 0) && (uVar11 = uVar1, piVar7 != param_2));
  }
  if (piVar7 == param_2) {
    *param_6 = *param_6 | 2;
  }
  if (param_3 != param_4) {
    do {
      if (*pcVar12 == '\x02') goto joined_r0x001d531c;
      param_3 = param_3 + 0x18;
      pcVar12 = pcVar12 + 1;
    } while (param_4 != param_3);
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x001d531c:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}


// ===== 001d5348  std::__ndk1::__time_get_storage<char>::init =====

/* std::__ndk1::__time_get_storage<char>::init(std::__ndk1::ctype<char> const&) */

void std::__ndk1::__time_get_storage<char>::init(ctype *param_1)

{
  long lVar1;
  char cVar2;
  ctype *pcVar3;
  long lVar4;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  tm local_100;
  char acStack_bc [100];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar4 = 0;
  pcVar3 = param_1 + 0xb0;
  local_100.tm_zone = (char *)0x0;
  local_100.tm_wday = 0;
  local_100.tm_yday = 0;
  local_100.tm_mon = 0;
  local_100.tm_year = 0;
  local_100.tm_gmtoff = 0;
  local_100.tm_isdst = 0;
  local_100._36_4_ = 0;
  local_100.tm_hour = 0;
  local_100.tm_mday = 0;
  local_100.tm_sec = 0;
  local_100.tm_min = 0;
  do {
    local_100.tm_wday = (int)lVar4;
    strftime_l(acStack_bc,100,"%A",&local_100,*(__locale_t *)param_1);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               pcVar3 + -0xa8,acStack_bc);
    strftime_l(acStack_bc,100,"%a",&local_100,*(__locale_t *)param_1);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               pcVar3,acStack_bc);
    lVar4 = lVar4 + 1;
    pcVar3 = (ctype *)((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)pcVar3 + 0x18);
  } while (lVar4 != 7);
  lVar4 = 0;
  pcVar3 = param_1 + 0x278;
  do {
    local_100.tm_mon = (int)lVar4;
    strftime_l(acStack_bc,100,"%B",&local_100,*(__locale_t *)param_1);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               pcVar3 + -0x120,acStack_bc);
    strftime_l(acStack_bc,100,"%b",&local_100,*(__locale_t *)param_1);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               pcVar3,acStack_bc);
    lVar4 = lVar4 + 1;
    pcVar3 = (ctype *)((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)pcVar3 + 0x18);
  } while (lVar4 != 0xc);
  local_100.tm_hour = 1;
  strftime_l(acStack_bc,100,"%p",&local_100,*(__locale_t *)param_1);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x398),acStack_bc);
  local_100.tm_hour = 0xd;
  strftime_l(acStack_bc,100,"%p",&local_100,*(__locale_t *)param_1);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x3b0),acStack_bc);
  cVar2 = (char)param_1;
  __analyze(cVar2,(ctype *)0x63);
  if (((byte)param_1[0x3c8] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x3d8));
  }
  *(undefined8 *)(param_1 + 0x3d8) = local_108;
  *(undefined8 *)(param_1 + 0x3d0) = uStack_110;
  *(undefined8 *)(param_1 + 0x3c8) = local_118;
  __analyze(cVar2,(ctype *)0x72);
  if (((byte)param_1[0x3e0] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x3f0));
  }
  *(undefined8 *)(param_1 + 0x3f0) = local_108;
  *(undefined8 *)(param_1 + 1000) = uStack_110;
  *(undefined8 *)(param_1 + 0x3e0) = local_118;
  __analyze(cVar2,(ctype *)0x78);
  if (((byte)param_1[0x3f8] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x408));
  }
  *(undefined8 *)(param_1 + 0x408) = local_108;
  *(undefined8 *)(param_1 + 0x400) = uStack_110;
  *(undefined8 *)(param_1 + 0x3f8) = local_118;
  __analyze(cVar2,(ctype *)0x58);
  if (((byte)param_1[0x410] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x420));
  }
  *(undefined8 *)(param_1 + 0x420) = local_108;
  *(undefined8 *)(param_1 + 0x418) = uStack_110;
  *(undefined8 *)(param_1 + 0x410) = local_118;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d55e0  std::__ndk1::__time_get_storage<wchar_t>::init =====

/* std::__ndk1::__time_get_storage<wchar_t>::init(std::__ndk1::ctype<wchar_t> const&) */

void std::__ndk1::__time_get_storage<wchar_t>::init(ctype *param_1)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar1;
  ctype cVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  __locale_t p_Var6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ctype *pcVar11;
  long lVar12;
  ctype *pcVar13;
  ctype *pcVar14;
  ctype *pcVar15;
  ulong uVar16;
  undefined8 *puVar17;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char *local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  char *local_2b0;
  mbstate_t local_2a8;
  tm local_2a0;
  ctype local_264 [8];
  undefined8 auStack_25c [49];
  char acStack_d4 [100];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar19 = 0;
  local_2a0.tm_zone = (char *)0x0;
  local_2a0.tm_wday = 0;
  local_2a0.tm_yday = 0;
  local_2a0.tm_mon = 0;
  local_2a0.tm_year = 0;
  local_2a0.tm_gmtoff = 0;
  local_2a0.tm_isdst = 0;
  local_2a0._36_4_ = 0;
  local_2a0.tm_hour = 0;
  local_2a0.tm_mday = 0;
  local_2a0.tm_sec = 0;
  local_2a0.tm_min = 0;
  local_2a8.__count = 0;
  local_2a8.__value = (_union_27)0x0;
  do {
    local_2a0.tm_wday = (int)lVar19;
    strftime_l(acStack_d4,100,"%A",&local_2a0,*(__locale_t *)param_1);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2c8 = acStack_d4;
    p_Var6 = uselocale(*(__locale_t *)param_1);
                    /* try { // try from 001d5698 to 001d56ab has its CatchHandler @ 001d6188 */
    sVar7 = mbsrtowcs((wchar_t *)local_264,&local_2c8,100,&local_2a8);
    if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d56b4 to 001d56bb has its CatchHandler @ 001d613c */
      uselocale(p_Var6);
    }
    if (sVar7 == 0xffffffffffffffff) goto LAB_001d60e8;
    pbVar18 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + lVar19 * 0x18 + 8);
    bVar1 = *pbVar18;
    uVar9 = (ulong)(byte)bVar1;
    if (((byte)bVar1 & 1) == 0) {
      if (4 < sVar7) {
        uVar9 = (ulong)((byte)bVar1 >> 1);
        uVar8 = 4;
LAB_001d5700:
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by(pbVar18,uVar8,sVar7 - uVar8,uVar9,0,uVar9,0);
        uVar9 = (ulong)(byte)*pbVar18;
      }
    }
    else {
      uVar9 = *(ulong *)pbVar18;
      uVar8 = (uVar9 & 0xfffffffffffffffe) - 1;
      if (uVar8 < sVar7) {
        uVar9 = *(ulong *)(param_1 + lVar19 * 0x18 + 0x10);
        goto LAB_001d5700;
      }
    }
    if ((uVar9 & 1) == 0) {
      pcVar14 = param_1 + lVar19 * 0x18 + 0xc;
    }
    else {
      pcVar14 = *(ctype **)(param_1 + lVar19 * 0x18 + 0x18);
    }
    if (sVar7 != 0) {
      lVar10 = sVar7 * 4;
      pcVar13 = local_264;
      pcVar15 = pcVar14;
      if ((0x1b < lVar10 - 4U) && ((local_264 + lVar10 <= pcVar14 || (pcVar14 + lVar10 <= pcVar13)))
         ) {
        uVar9 = (lVar10 - 4U >> 2) + 1;
        uVar16 = uVar9 & 0x7ffffffffffffff8;
        pcVar15 = pcVar14 + uVar16 * 4;
        pcVar13 = local_264 + uVar16 * 4;
        pcVar14 = pcVar14 + 0x10;
        uVar8 = uVar16;
        puVar17 = auStack_25c + 1;
        do {
          puVar4 = puVar17 + -1;
          uVar20 = puVar17[-2];
          uVar22 = puVar17[1];
          uVar21 = *puVar17;
          puVar17 = puVar17 + 4;
          uVar8 = uVar8 - 8;
          *(undefined8 *)(pcVar14 + -8) = *puVar4;
          *(undefined8 *)(pcVar14 + -0x10) = uVar20;
          *(undefined8 *)(pcVar14 + 8) = uVar22;
          *(undefined8 *)pcVar14 = uVar21;
          pcVar14 = pcVar14 + 0x20;
        } while (uVar8 != 0);
        pcVar14 = pcVar15;
        if (uVar9 == uVar16) goto LAB_001d5788;
      }
      do {
        pcVar11 = pcVar13 + 4;
        pcVar14 = pcVar15 + 4;
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar11;
        pcVar15 = pcVar14;
      } while (local_264 + sVar7 * 4 != pcVar11);
    }
LAB_001d5788:
    *(undefined4 *)pcVar14 = 0;
    if (((byte)*pbVar18 & 1) == 0) {
      *pbVar18 = SUB41((int)sVar7 << 1,0);
    }
    else {
      *(size_t *)(param_1 + lVar19 * 0x18 + 0x10) = sVar7;
    }
    strftime_l(acStack_d4,100,"%a",&local_2a0,*(__locale_t *)param_1);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2c8 = acStack_d4;
    p_Var6 = uselocale(*(__locale_t *)param_1);
                    /* try { // try from 001d57d4 to 001d57e7 has its CatchHandler @ 001d6170 */
    sVar7 = mbsrtowcs((wchar_t *)local_264,&local_2c8,100,&local_2a8);
    if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d57f0 to 001d57f7 has its CatchHandler @ 001d6138 */
      uselocale(p_Var6);
    }
    if (sVar7 == 0xffffffffffffffff) goto LAB_001d60e8;
    lVar10 = lVar19 + 7;
    pbVar18 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + lVar10 * 0x18 + 8);
    bVar1 = *pbVar18;
    uVar9 = (ulong)(byte)bVar1;
    if (((byte)bVar1 & 1) == 0) {
      if (4 < sVar7) {
        uVar9 = (ulong)((byte)bVar1 >> 1);
        uVar8 = 4;
LAB_001d5840:
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by(pbVar18,uVar8,sVar7 - uVar8,uVar9,0,uVar9,0);
        uVar9 = (ulong)(byte)*pbVar18;
      }
    }
    else {
      uVar9 = *(ulong *)pbVar18;
      uVar8 = (uVar9 & 0xfffffffffffffffe) - 1;
      if (uVar8 < sVar7) {
        uVar9 = *(ulong *)(param_1 + lVar10 * 0x18 + 0x10);
        goto LAB_001d5840;
      }
    }
    if ((uVar9 & 1) == 0) {
      pcVar14 = param_1 + lVar10 * 0x18 + 0xc;
    }
    else {
      pcVar14 = *(ctype **)(param_1 + lVar10 * 0x18 + 0x18);
    }
    if (sVar7 != 0) {
      lVar12 = sVar7 * 4;
      pcVar13 = local_264;
      pcVar15 = pcVar14;
      if ((0x1b < lVar12 - 4U) && ((local_264 + lVar12 <= pcVar14 || (pcVar14 + lVar12 <= pcVar13)))
         ) {
        uVar9 = (lVar12 - 4U >> 2) + 1;
        uVar16 = uVar9 & 0x7ffffffffffffff8;
        pcVar15 = pcVar14 + uVar16 * 4;
        pcVar13 = local_264 + uVar16 * 4;
        pcVar14 = pcVar14 + 0x10;
        uVar8 = uVar16;
        puVar17 = auStack_25c + 1;
        do {
          puVar4 = puVar17 + -1;
          uVar20 = puVar17[-2];
          uVar22 = puVar17[1];
          uVar21 = *puVar17;
          puVar17 = puVar17 + 4;
          uVar8 = uVar8 - 8;
          *(undefined8 *)(pcVar14 + -8) = *puVar4;
          *(undefined8 *)(pcVar14 + -0x10) = uVar20;
          *(undefined8 *)(pcVar14 + 8) = uVar22;
          *(undefined8 *)pcVar14 = uVar21;
          pcVar14 = pcVar14 + 0x20;
        } while (uVar8 != 0);
        pcVar14 = pcVar15;
        if (uVar9 == uVar16) goto LAB_001d58c8;
      }
      do {
        pcVar11 = pcVar13 + 4;
        pcVar14 = pcVar15 + 4;
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar11;
        pcVar15 = pcVar14;
      } while (local_264 + sVar7 * 4 != pcVar11);
    }
LAB_001d58c8:
    *(undefined4 *)pcVar14 = 0;
    if (((byte)*pbVar18 & 1) == 0) {
      *pbVar18 = SUB41((int)sVar7 << 1,0);
    }
    else {
      *(size_t *)(param_1 + lVar10 * 0x18 + 0x10) = sVar7;
    }
    lVar19 = lVar19 + 1;
  } while (lVar19 != 7);
  lVar19 = 0;
  do {
    local_2a0.tm_mon = (int)lVar19;
    strftime_l(acStack_d4,100,"%B",&local_2a0,*(__locale_t *)param_1);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2c8 = acStack_d4;
    p_Var6 = uselocale(*(__locale_t *)param_1);
                    /* try { // try from 001d59e0 to 001d59f3 has its CatchHandler @ 001d6158 */
    sVar7 = mbsrtowcs((wchar_t *)local_264,&local_2c8,100,&local_2a8);
    if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d59fc to 001d5a03 has its CatchHandler @ 001d6134 */
      uselocale(p_Var6);
    }
    if (sVar7 == 0xffffffffffffffff) goto LAB_001d60e8;
    cVar2 = param_1[lVar19 * 0x18 + 0x158];
    uVar9 = (ulong)(byte)cVar2;
    pbVar18 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + lVar19 * 0x18 + 0x158);
    if (((byte)cVar2 & 1) == 0) {
      if (4 < sVar7) {
        uVar9 = (ulong)((byte)cVar2 >> 1);
        uVar8 = 4;
LAB_001d5a4c:
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by(pbVar18,uVar8,sVar7 - uVar8,uVar9,0,uVar9,0);
        uVar9 = (ulong)(byte)*pbVar18;
      }
    }
    else {
      uVar9 = *(ulong *)pbVar18;
      uVar8 = (uVar9 & 0xfffffffffffffffe) - 1;
      if (uVar8 < sVar7) {
        uVar9 = *(ulong *)(param_1 + lVar19 * 0x18 + 0x160);
        goto LAB_001d5a4c;
      }
    }
    if ((uVar9 & 1) == 0) {
      pcVar14 = param_1 + lVar19 * 0x18 + 0x15c;
    }
    else {
      pcVar14 = *(ctype **)(param_1 + lVar19 * 0x18 + 0x168);
    }
    if (sVar7 != 0) {
      lVar10 = sVar7 * 4;
      pcVar13 = local_264;
      pcVar15 = pcVar14;
      if ((0x1b < lVar10 - 4U) && ((local_264 + lVar10 <= pcVar14 || (pcVar14 + lVar10 <= pcVar13)))
         ) {
        uVar9 = (lVar10 - 4U >> 2) + 1;
        uVar16 = uVar9 & 0x7ffffffffffffff8;
        pcVar15 = pcVar14 + uVar16 * 4;
        pcVar13 = local_264 + uVar16 * 4;
        pcVar14 = pcVar14 + 0x10;
        uVar8 = uVar16;
        puVar17 = auStack_25c + 1;
        do {
          puVar4 = puVar17 + -1;
          uVar20 = puVar17[-2];
          uVar22 = puVar17[1];
          uVar21 = *puVar17;
          puVar17 = puVar17 + 4;
          uVar8 = uVar8 - 8;
          *(undefined8 *)(pcVar14 + -8) = *puVar4;
          *(undefined8 *)(pcVar14 + -0x10) = uVar20;
          *(undefined8 *)(pcVar14 + 8) = uVar22;
          *(undefined8 *)pcVar14 = uVar21;
          pcVar14 = pcVar14 + 0x20;
        } while (uVar8 != 0);
        pcVar14 = pcVar15;
        if (uVar9 == uVar16) goto LAB_001d5ad4;
      }
      do {
        pcVar11 = pcVar13 + 4;
        pcVar14 = pcVar15 + 4;
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar11;
        pcVar15 = pcVar14;
      } while (local_264 + sVar7 * 4 != pcVar11);
    }
LAB_001d5ad4:
    *(undefined4 *)pcVar14 = 0;
    if (((byte)*pbVar18 & 1) == 0) {
      *pbVar18 = SUB41((int)sVar7 << 1,0);
    }
    else {
      *(size_t *)(param_1 + lVar19 * 0x18 + 0x160) = sVar7;
    }
    strftime_l(acStack_d4,100,"%b",&local_2a0,*(__locale_t *)param_1);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2c8 = acStack_d4;
    p_Var6 = uselocale(*(__locale_t *)param_1);
                    /* try { // try from 001d5b20 to 001d5b33 has its CatchHandler @ 001d6140 */
    sVar7 = mbsrtowcs((wchar_t *)local_264,&local_2c8,100,&local_2a8);
    if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d5b3c to 001d5b43 has its CatchHandler @ 001d6130 */
      uselocale(p_Var6);
    }
    if (sVar7 == 0xffffffffffffffff) goto LAB_001d60e8;
    lVar10 = lVar19 + 0xc;
    cVar2 = param_1[lVar10 * 0x18 + 0x158];
    uVar9 = (ulong)(byte)cVar2;
    pbVar18 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + lVar10 * 0x18 + 0x158);
    if (((byte)cVar2 & 1) == 0) {
      if (4 < sVar7) {
        uVar9 = (ulong)((byte)cVar2 >> 1);
        uVar8 = 4;
LAB_001d5b90:
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by(pbVar18,uVar8,sVar7 - uVar8,uVar9,0,uVar9,0);
        uVar9 = (ulong)(byte)*pbVar18;
      }
    }
    else {
      uVar9 = *(ulong *)pbVar18;
      uVar8 = (uVar9 & 0xfffffffffffffffe) - 1;
      if (uVar8 < sVar7) {
        uVar9 = *(ulong *)(param_1 + lVar10 * 0x18 + 0x160);
        goto LAB_001d5b90;
      }
    }
    if ((uVar9 & 1) == 0) {
      pcVar14 = param_1 + lVar10 * 0x18 + 0x15c;
    }
    else {
      pcVar14 = *(ctype **)(param_1 + lVar10 * 0x18 + 0x168);
    }
    if (sVar7 != 0) {
      lVar12 = sVar7 * 4;
      pcVar13 = local_264;
      pcVar15 = pcVar14;
      if ((0x1b < lVar12 - 4U) && ((local_264 + lVar12 <= pcVar14 || (pcVar14 + lVar12 <= pcVar13)))
         ) {
        uVar9 = (lVar12 - 4U >> 2) + 1;
        uVar16 = uVar9 & 0x7ffffffffffffff8;
        pcVar15 = pcVar14 + uVar16 * 4;
        pcVar13 = local_264 + uVar16 * 4;
        pcVar14 = pcVar14 + 0x10;
        uVar8 = uVar16;
        puVar17 = auStack_25c + 1;
        do {
          puVar4 = puVar17 + -1;
          uVar20 = puVar17[-2];
          uVar22 = puVar17[1];
          uVar21 = *puVar17;
          puVar17 = puVar17 + 4;
          uVar8 = uVar8 - 8;
          *(undefined8 *)(pcVar14 + -8) = *puVar4;
          *(undefined8 *)(pcVar14 + -0x10) = uVar20;
          *(undefined8 *)(pcVar14 + 8) = uVar22;
          *(undefined8 *)pcVar14 = uVar21;
          pcVar14 = pcVar14 + 0x20;
        } while (uVar8 != 0);
        pcVar14 = pcVar15;
        if (uVar9 == uVar16) goto LAB_001d5c18;
      }
      do {
        pcVar11 = pcVar13 + 4;
        pcVar14 = pcVar15 + 4;
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar11;
        pcVar15 = pcVar14;
      } while (local_264 + sVar7 * 4 != pcVar11);
    }
LAB_001d5c18:
    *(undefined4 *)pcVar14 = 0;
    if (((byte)*pbVar18 & 1) == 0) {
      *pbVar18 = SUB41((int)sVar7 << 1,0);
    }
    else {
      *(size_t *)(param_1 + lVar10 * 0x18 + 0x160) = sVar7;
    }
    lVar19 = lVar19 + 1;
  } while (lVar19 != 0xc);
  local_2a0.tm_hour = 1;
  strftime_l(acStack_d4,100,"%p",&local_2a0,*(__locale_t *)param_1);
  local_2a8.__count = 0;
  local_2a8.__value = (_union_27)0x0;
  local_2b0 = acStack_d4;
  p_Var6 = uselocale(*(__locale_t *)param_1);
                    /* try { // try from 001d5cf8 to 001d5d0b has its CatchHandler @ 001d6118 */
  sVar7 = mbsrtowcs((wchar_t *)local_264,&local_2b0,100,&local_2a8);
  if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d5d14 to 001d5d1b has its CatchHandler @ 001d60fc */
    uselocale(p_Var6);
  }
  if (sVar7 != 0xffffffffffffffff) {
    cVar2 = param_1[0x398];
    uVar9 = (ulong)(byte)cVar2;
    pbVar18 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + 0x398);
    if (((byte)cVar2 & 1) == 0) {
      if (4 < sVar7) {
        uVar9 = (ulong)((byte)cVar2 >> 1);
        uVar8 = 4;
LAB_001d5d5c:
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by(pbVar18,uVar8,sVar7 - uVar8,uVar9,0,uVar9,0);
        uVar9 = (ulong)(byte)*pbVar18;
      }
    }
    else {
      uVar9 = *(ulong *)pbVar18;
      uVar8 = (uVar9 & 0xfffffffffffffffe) - 1;
      if (uVar8 < sVar7) {
        uVar9 = *(ulong *)(param_1 + 0x3a0);
        goto LAB_001d5d5c;
      }
    }
    if ((uVar9 & 1) == 0) {
      pcVar14 = param_1 + 0x39c;
    }
    else {
      pcVar14 = *(ctype **)(param_1 + 0x3a8);
    }
    if (sVar7 != 0) {
      lVar19 = sVar7 * 4;
      if ((lVar19 - 4U < 0x1c) || ((pcVar14 < local_264 + lVar19 && (local_264 < pcVar14 + lVar19)))
         ) {
        pcVar13 = local_264;
        pcVar15 = pcVar14;
      }
      else {
        uVar9 = (lVar19 - 4U >> 2) + 1;
        uVar16 = uVar9 & 0x7ffffffffffffff8;
        puVar17 = auStack_25c + 1;
        pcVar15 = pcVar14 + uVar16 * 4;
        pcVar13 = local_264 + uVar16 * 4;
        pcVar14 = pcVar14 + 0x10;
        uVar8 = uVar16;
        do {
          puVar4 = puVar17 + -1;
          uVar20 = puVar17[-2];
          uVar22 = puVar17[1];
          uVar21 = *puVar17;
          puVar17 = puVar17 + 4;
          uVar8 = uVar8 - 8;
          *(undefined8 *)(pcVar14 + -8) = *puVar4;
          *(undefined8 *)(pcVar14 + -0x10) = uVar20;
          *(undefined8 *)(pcVar14 + 8) = uVar22;
          *(undefined8 *)pcVar14 = uVar21;
          pcVar14 = pcVar14 + 0x20;
        } while (uVar8 != 0);
        pcVar14 = pcVar15;
        if (uVar9 == uVar16) goto LAB_001d5de0;
      }
      do {
        pcVar11 = pcVar13 + 4;
        pcVar14 = pcVar15 + 4;
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar15 = pcVar14;
        pcVar13 = pcVar11;
      } while (local_264 + sVar7 * 4 != pcVar11);
    }
LAB_001d5de0:
    *(undefined4 *)pcVar14 = 0;
    if (((byte)*pbVar18 & 1) == 0) {
      *pbVar18 = SUB41((int)sVar7 << 1,0);
    }
    else {
      *(size_t *)(param_1 + 0x3a0) = sVar7;
    }
    local_2a0.tm_hour = 0xd;
    strftime_l(acStack_d4,100,"%p",&local_2a0,*(__locale_t *)param_1);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2b0 = acStack_d4;
    p_Var6 = uselocale(*(__locale_t *)param_1);
                    /* try { // try from 001d5e34 to 001d5e47 has its CatchHandler @ 001d6100 */
    sVar7 = mbsrtowcs((wchar_t *)local_264,&local_2b0,100,&local_2a8);
    if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d5e50 to 001d5e57 has its CatchHandler @ 001d60f8 */
      uselocale(p_Var6);
    }
    if (sVar7 != 0xffffffffffffffff) {
      cVar2 = param_1[0x3b0];
      uVar9 = (ulong)(byte)cVar2;
      pbVar18 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 *)(param_1 + 0x3b0);
      if (((byte)cVar2 & 1) == 0) {
        if (4 < sVar7) {
          uVar9 = (ulong)((byte)cVar2 >> 1);
          uVar8 = 4;
LAB_001d5e98:
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          __grow_by(pbVar18,uVar8,sVar7 - uVar8,uVar9,0,uVar9,0);
          uVar9 = (ulong)(byte)*pbVar18;
        }
      }
      else {
        uVar9 = *(ulong *)pbVar18;
        uVar8 = (uVar9 & 0xfffffffffffffffe) - 1;
        if (uVar8 < sVar7) {
          uVar9 = *(ulong *)(param_1 + 0x3b8);
          goto LAB_001d5e98;
        }
      }
      if ((uVar9 & 1) == 0) {
        pcVar14 = param_1 + 0x3b4;
      }
      else {
        pcVar14 = *(ctype **)(param_1 + 0x3c0);
      }
      if (sVar7 != 0) {
        lVar19 = sVar7 * 4;
        if ((lVar19 - 4U < 0x1c) ||
           ((pcVar14 < local_264 + lVar19 && (local_264 < pcVar14 + lVar19)))) {
          pcVar13 = local_264;
          pcVar15 = pcVar14;
        }
        else {
          uVar9 = (lVar19 - 4U >> 2) + 1;
          uVar16 = uVar9 & 0x7ffffffffffffff8;
          puVar17 = auStack_25c + 1;
          pcVar15 = pcVar14 + uVar16 * 4;
          pcVar13 = local_264 + uVar16 * 4;
          pcVar14 = pcVar14 + 0x10;
          uVar8 = uVar16;
          do {
            puVar4 = puVar17 + -1;
            uVar20 = puVar17[-2];
            uVar22 = puVar17[1];
            uVar21 = *puVar17;
            puVar17 = puVar17 + 4;
            uVar8 = uVar8 - 8;
            *(undefined8 *)(pcVar14 + -8) = *puVar4;
            *(undefined8 *)(pcVar14 + -0x10) = uVar20;
            *(undefined8 *)(pcVar14 + 8) = uVar22;
            *(undefined8 *)pcVar14 = uVar21;
            pcVar14 = pcVar14 + 0x20;
          } while (uVar8 != 0);
          pcVar14 = pcVar15;
          if (uVar9 == uVar16) goto LAB_001d5f1c;
        }
        do {
          pcVar11 = pcVar13 + 4;
          pcVar14 = pcVar15 + 4;
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar15 = pcVar14;
          pcVar13 = pcVar11;
        } while (local_264 + sVar7 * 4 != pcVar11);
      }
LAB_001d5f1c:
      *(undefined4 *)pcVar14 = 0;
      if (((byte)*pbVar18 & 1) == 0) {
        *pbVar18 = SUB41((int)sVar7 << 1,0);
      }
      else {
        *(size_t *)(param_1 + 0x3b8) = sVar7;
      }
      cVar5 = (char)param_1;
      __analyze(cVar5,(ctype *)0x63);
      if (((byte)param_1[0x3c8] & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x3d8));
      }
      *(undefined8 *)(param_1 + 0x3d8) = local_2b8;
      *(undefined8 *)(param_1 + 0x3d0) = uStack_2c0;
      *(char **)(param_1 + 0x3c8) = local_2c8;
      __analyze(cVar5,(ctype *)0x72);
      if (((byte)param_1[0x3e0] & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x3f0));
      }
      *(undefined8 *)(param_1 + 0x3f0) = local_2b8;
      *(undefined8 *)(param_1 + 1000) = uStack_2c0;
      *(char **)(param_1 + 0x3e0) = local_2c8;
      __analyze(cVar5,(ctype *)0x78);
      if (((byte)param_1[0x3f8] & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x408));
      }
      *(undefined8 *)(param_1 + 0x408) = local_2b8;
      *(undefined8 *)(param_1 + 0x400) = uStack_2c0;
      *(char **)(param_1 + 0x3f8) = local_2c8;
      __analyze(cVar5,(ctype *)0x58);
      if (((byte)param_1[0x410] & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x420));
      }
      *(undefined8 *)(param_1 + 0x420) = local_2b8;
      *(undefined8 *)(param_1 + 0x418) = uStack_2c0;
      *(char **)(param_1 + 0x410) = local_2c8;
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
      goto LAB_001d60f4;
    }
  }
LAB_001d60e8:
  __throw_runtime_error("locale not supported");
LAB_001d60f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d61a4  std::__ndk1::__time_get_storage<char>::__time_get_storage =====

/* std::__ndk1::__time_get_storage<char>::__time_get_storage(char const*) */

void __thiscall
std::__ndk1::__time_get_storage<char>::__time_get_storage
          (__time_get_storage<char> *this,char *param_1)

{
  long lVar1;
  undefined **local_60 [2];
  void *local_50;
  char local_48;
  __locale_t local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __time_get::__time_get((__time_get *)this,param_1);
  memset(this + 8,0,0x420);
                    /* try { // try from 001d61e0 to 001d61ef has its CatchHandler @ 001d62d8 */
  ctype_byname<char>::ctype_byname((ctype_byname<char> *)local_60,param_1,1);
  local_60[0] = &PTR__ctype_byname_0020c050;
                    /* try { // try from 001d61fc to 001d6207 has its CatchHandler @ 001d6288 */
  init((ctype *)this);
  local_60[0] = (undefined **)(PTR_vtable_0020fb80 + 0x10);
                    /* try { // try from 001d621c to 001d621f has its CatchHandler @ 001d6274 */
  freelocale(local_40);
  local_60[0] = (undefined **)(PTR_vtable_0020f9a8 + 0x10);
  if ((local_50 != (void *)0x0) && (local_48 != '\0')) {
    operator_delete__(local_50);
  }
  __shared_count::~__shared_count((__shared_count *)local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d64f4  std::__ndk1::ctype_byname<char>::~ctype_byname =====

/* std::__ndk1::ctype_byname<char>::~ctype_byname() */

void __thiscall std::__ndk1::ctype_byname<char>::~ctype_byname(ctype_byname<char> *this)

{
  *(undefined **)this = PTR_vtable_0020fb80 + 0x10;
                    /* try { // try from 001d6518 to 001d651b has its CatchHandler @ 001d6550 */
  freelocale(*(__locale_t *)(this + 0x20));
  *(undefined **)this = PTR_vtable_0020f9a8 + 0x10;
  if ((*(void **)(this + 0x10) != (void *)0x0) && (this[0x18] != (ctype_byname<char>)0x0)) {
    operator_delete__(*(void **)(this + 0x10));
  }
  __shared_count::~__shared_count((__shared_count *)this);
  return;
}


// ===== 001d6564  std::__ndk1::__time_get_storage<char>::__time_get_storage =====

/* std::__ndk1::__time_get_storage<char>::__time_get_storage(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::__time_get_storage<char>::__time_get_storage
          (__time_get_storage<char> *this,basic_string_conflict *param_1)

{
  long lVar1;
  __locale_t p_Var2;
  basic_string_conflict *pbVar3;
  basic_string_conflict *__locale;
  undefined **local_60 [2];
  void *local_50;
  char local_48;
  __locale_t local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __locale = *(basic_string_conflict **)(param_1 + 0x10);
  pbVar3 = (basic_string_conflict *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    __locale = param_1 + 1;
  }
  p_Var2 = newlocale(0x1fbf,(char *)__locale,(__locale_t)0x0);
  *(__locale_t *)this = p_Var2;
  if (p_Var2 == (__locale_t)0x0) {
    operator+((__ndk1 *)"time_get_byname failed to construct for ",(char *)param_1,pbVar3);
                    /* try { // try from 001d6664 to 001d666b has its CatchHandler @ 001d6670 */
    FUN_001cbd58(local_60);
  }
  else {
    memset(this + 8,0,0x420);
                    /* try { // try from 001d65c0 to 001d65cf has its CatchHandler @ 001d66ec */
    ctype_byname<char>::ctype_byname((ctype_byname<char> *)local_60,param_1,1);
    local_60[0] = &PTR__ctype_byname_0020c050;
                    /* try { // try from 001d65dc to 001d65e7 has its CatchHandler @ 001d669c */
    init((ctype *)this);
    local_60[0] = (undefined **)(PTR_vtable_0020fb80 + 0x10);
                    /* try { // try from 001d65fc to 001d65ff has its CatchHandler @ 001d6688 */
    freelocale(local_40);
    local_60[0] = (undefined **)(PTR_vtable_0020f9a8 + 0x10);
    if ((local_50 != (void *)0x0) && (local_48 != '\0')) {
      operator_delete__(local_50);
    }
    __shared_count::~__shared_count((__shared_count *)local_60);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d6908  std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage =====

/* std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage(char const*) */

void __thiscall
std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
          (__time_get_storage<wchar_t> *this,char *param_1)

{
  long lVar1;
  undefined **local_50 [2];
  __locale_t local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __time_get::__time_get((__time_get *)this,param_1);
  memset(this + 8,0,0x420);
                    /* try { // try from 001d6944 to 001d6953 has its CatchHandler @ 001d69f4 */
  ctype_byname<wchar_t>::ctype_byname((ctype_byname<wchar_t> *)local_50,param_1,1);
  local_50[0] = &PTR__ctype_byname_0020c0d0;
                    /* try { // try from 001d6960 to 001d696b has its CatchHandler @ 001d69c8 */
  init((ctype *)this);
  local_50[0] = (undefined **)(PTR_vtable_0020fb88 + 0x10);
                    /* try { // try from 001d6980 to 001d6983 has its CatchHandler @ 001d69b4 */
  freelocale(local_40);
  __shared_count::~__shared_count((__shared_count *)local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d6c10  std::__ndk1::ctype_byname<wchar_t>::~ctype_byname =====

/* std::__ndk1::ctype_byname<wchar_t>::~ctype_byname() */

void __thiscall std::__ndk1::ctype_byname<wchar_t>::~ctype_byname(ctype_byname<wchar_t> *this)

{
  *(undefined **)this = PTR_vtable_0020fb88 + 0x10;
                    /* try { // try from 001d6c34 to 001d6c37 has its CatchHandler @ 001d6c48 */
  freelocale(*(__locale_t *)(this + 0x10));
  __shared_count::~__shared_count((__shared_count *)this);
  return;
}


// ===== 001d6c5c  std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage =====

/* std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
          (__time_get_storage<wchar_t> *this,basic_string_conflict *param_1)

{
  long lVar1;
  __locale_t p_Var2;
  basic_string_conflict *pbVar3;
  basic_string_conflict *__locale;
  undefined **local_50 [2];
  __locale_t local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __locale = *(basic_string_conflict **)(param_1 + 0x10);
  pbVar3 = (basic_string_conflict *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    __locale = param_1 + 1;
  }
  p_Var2 = newlocale(0x1fbf,(char *)__locale,(__locale_t)0x0);
  *(__locale_t *)this = p_Var2;
  if (p_Var2 == (__locale_t)0x0) {
    operator+((__ndk1 *)"time_get_byname failed to construct for ",(char *)param_1,pbVar3);
                    /* try { // try from 001d6d38 to 001d6d3f has its CatchHandler @ 001d6d44 */
    FUN_001cbd58(local_50);
  }
  else {
    memset(this + 8,0,0x420);
                    /* try { // try from 001d6cb8 to 001d6cc7 has its CatchHandler @ 001d6d9c */
    ctype_byname<wchar_t>::ctype_byname((ctype_byname<wchar_t> *)local_50,param_1,1);
    local_50[0] = &PTR__ctype_byname_0020c0d0;
                    /* try { // try from 001d6cd4 to 001d6cdf has its CatchHandler @ 001d6d70 */
    init((ctype *)this);
    local_50[0] = (undefined **)(PTR_vtable_0020fb88 + 0x10);
                    /* try { // try from 001d6cf4 to 001d6cf7 has its CatchHandler @ 001d6d5c */
    freelocale(local_40);
    __shared_count::~__shared_count((__shared_count *)local_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d6fb8  std::__ndk1::__time_get_storage<char>::__do_date_order =====

/* std::__ndk1::__time_get_storage<char>::__do_date_order() const */

undefined8 __thiscall
std::__ndk1::__time_get_storage<char>::__do_date_order(__time_get_storage<char> *this)

{
  __time_get_storage<char> _Var1;
  uint uVar2;
  uint uVar3;
  __time_get_storage<char> *p_Var4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  __time_get_storage<char> *p_Var8;
  ulong uVar9;
  
  _Var1 = this[0x3f8];
  p_Var4 = this + 0x3f9;
  uVar5 = 1;
  uVar2 = (uint)((byte)_Var1 >> 1);
  do {
    uVar7 = (ulong)(uVar5 - 1);
    if (((byte)_Var1 & 1) == 0) {
      p_Var8 = p_Var4;
      if ((uVar2 <= uVar5 - 1) || (this[uVar7 + 0x3f9] == (__time_get_storage<char>)0x25)) break;
    }
    else if ((*(ulong *)(this + 0x400) <= uVar7) ||
            (*(char *)(*(long *)(this + 0x408) + uVar7) == '%')) {
      p_Var8 = *(__time_get_storage<char> **)(this + 0x408);
      break;
    }
    uVar5 = uVar5 + 1;
  } while( true );
  switch(p_Var8[uVar5]) {
  case (__time_get_storage<char>)0x59:
  case (__time_get_storage<char>)0x79:
    do {
      while( true ) {
        uVar3 = uVar5;
        uVar5 = uVar3 + 1;
        uVar7 = (ulong)uVar5;
        if (((byte)_Var1 & 1) != 0) break;
        if ((uVar2 <= uVar5) || (this[uVar7 + 0x3f9] == (__time_get_storage<char>)0x25)) {
          p_Var8 = p_Var4;
          if (uVar2 == uVar5) {
            return 0;
          }
          goto LAB_001d7174;
        }
      }
      uVar9 = *(ulong *)(this + 0x400);
      if (uVar9 <= uVar7) goto LAB_001d7098;
    } while (*(char *)(*(long *)(this + 0x408) + uVar7) != '%');
    uVar9 = *(ulong *)(this + 0x400);
LAB_001d7098:
    if (uVar9 != uVar7) {
      p_Var8 = *(__time_get_storage<char> **)(this + 0x408);
LAB_001d7174:
      iVar6 = uVar3 - 1;
      if (p_Var8[uVar3 + 2] == (__time_get_storage<char>)0x64) {
        while( true ) {
          uVar7 = (ulong)(iVar6 + 4U);
          if (((byte)_Var1 & 1) != 0) {
            uVar9 = *(ulong *)(this + 0x400);
            if (uVar7 < uVar9) {
              if (*(char *)(*(long *)(this + 0x408) + uVar7) != '%') goto LAB_001d7194;
              uVar9 = *(ulong *)(this + 0x400);
            }
            if (uVar9 == iVar6 + 4) {
              return 0;
            }
            p_Var4 = *(__time_get_storage<char> **)(this + 0x408);
            goto LAB_001d7364;
          }
          if ((uVar2 <= iVar6 + 4U) || (this[uVar7 + 0x3f9] == (__time_get_storage<char>)0x25))
          break;
LAB_001d7194:
          iVar6 = iVar6 + 1;
        }
        if (uVar2 - 4 != iVar6) {
LAB_001d7364:
          if (p_Var4[iVar6 + 5] == (__time_get_storage<char>)0x6d) {
            return 4;
          }
        }
      }
      else if (p_Var8[uVar3 + 2] == (__time_get_storage<char>)0x6d) {
        while( true ) {
          uVar7 = (ulong)(iVar6 + 4U);
          if (((byte)_Var1 & 1) != 0) {
            uVar9 = *(ulong *)(this + 0x400);
            if (uVar7 < uVar9) {
              if (*(char *)(*(long *)(this + 0x408) + uVar7) != '%') goto LAB_001d71f0;
              uVar9 = *(ulong *)(this + 0x400);
            }
            if (uVar9 == iVar6 + 4) {
              return 0;
            }
            p_Var4 = *(__time_get_storage<char> **)(this + 0x408);
            goto LAB_001d7388;
          }
          if ((uVar2 <= iVar6 + 4U) || (this[uVar7 + 0x3f9] == (__time_get_storage<char>)0x25))
          break;
LAB_001d71f0:
          iVar6 = iVar6 + 1;
        }
        if (uVar2 - 4 != iVar6) {
LAB_001d7388:
          if (p_Var4[iVar6 + 5] == (__time_get_storage<char>)0x64) {
            return 3;
          }
        }
      }
    }
    break;
  case (__time_get_storage<char>)0x64:
    do {
      while( true ) {
        uVar3 = uVar5;
        uVar5 = uVar3 + 1;
        uVar7 = (ulong)uVar5;
        if (((byte)_Var1 & 1) != 0) break;
        if ((uVar2 <= uVar5) || (this[uVar7 + 0x3f9] == (__time_get_storage<char>)0x25)) {
          if (uVar2 == uVar5) {
            return 0;
          }
          goto LAB_001d72e0;
        }
      }
      uVar9 = *(ulong *)(this + 0x400);
      if (uVar9 <= uVar7) goto LAB_001d7158;
    } while (*(char *)(*(long *)(this + 0x408) + uVar7) != '%');
    uVar9 = *(ulong *)(this + 0x400);
LAB_001d7158:
    if (uVar9 != uVar7) {
      p_Var4 = *(__time_get_storage<char> **)(this + 0x408);
LAB_001d72e0:
      if (p_Var4[uVar3 + 2] == (__time_get_storage<char>)0x6d) {
        uVar3 = uVar3 + 3;
        while( true ) {
          uVar7 = (ulong)uVar3;
          if (((byte)_Var1 & 1) != 0) {
            uVar9 = *(ulong *)(this + 0x400);
            if (uVar7 < uVar9) {
              if (*(char *)(*(long *)(this + 0x408) + uVar7) != '%') goto LAB_001d72f8;
              uVar9 = *(ulong *)(this + 0x400);
            }
            if (uVar9 == uVar7) {
              return 0;
            }
            _Var1 = *(__time_get_storage<char> *)(*(long *)(this + 0x408) + (ulong)(uVar3 + 1));
            goto LAB_001d73d8;
          }
          if ((uVar2 <= uVar3) || (this[uVar7 + 0x3f9] == (__time_get_storage<char>)0x25)) break;
LAB_001d72f8:
          uVar3 = uVar3 + 1;
        }
        if (uVar3 != uVar2) {
          _Var1 = this[(ulong)(uVar3 + 1) + 0x3f9];
LAB_001d73d8:
          if ((_Var1 == (__time_get_storage<char>)0x79) || (_Var1 == (__time_get_storage<char>)0x59)
             ) {
            return 1;
          }
        }
      }
    }
    break;
  case (__time_get_storage<char>)0x6d:
    do {
      while( true ) {
        uVar3 = uVar5;
        uVar5 = uVar3 + 1;
        uVar7 = (ulong)uVar5;
        if (((byte)_Var1 & 1) != 0) break;
        if ((uVar2 <= uVar5) || (this[uVar7 + 0x3f9] == (__time_get_storage<char>)0x25)) {
          if (uVar2 == uVar5) {
            return 0;
          }
          goto LAB_001d7254;
        }
      }
      uVar9 = *(ulong *)(this + 0x400);
      if (uVar9 <= uVar7) goto LAB_001d70f8;
    } while (*(char *)(*(long *)(this + 0x408) + uVar7) != '%');
    uVar9 = *(ulong *)(this + 0x400);
LAB_001d70f8:
    if (uVar9 != uVar7) {
      p_Var4 = *(__time_get_storage<char> **)(this + 0x408);
LAB_001d7254:
      if (p_Var4[uVar3 + 2] == (__time_get_storage<char>)0x64) {
        uVar3 = uVar3 + 3;
        while( true ) {
          uVar7 = (ulong)uVar3;
          if (((byte)_Var1 & 1) != 0) {
            uVar9 = *(ulong *)(this + 0x400);
            if (uVar7 < uVar9) {
              if (*(char *)(*(long *)(this + 0x408) + uVar7) != '%') goto LAB_001d726c;
              uVar9 = *(ulong *)(this + 0x400);
            }
            if (uVar9 == uVar7) {
              return 0;
            }
            _Var1 = *(__time_get_storage<char> *)(*(long *)(this + 0x408) + (ulong)(uVar3 + 1));
            if (_Var1 == (__time_get_storage<char>)0x79) {
              return 2;
            }
            goto LAB_001d73f0;
          }
          if ((uVar2 <= uVar3) || (this[uVar7 + 0x3f9] == (__time_get_storage<char>)0x25)) break;
LAB_001d726c:
          uVar3 = uVar3 + 1;
        }
        if (uVar3 != uVar2) {
          _Var1 = this[(ulong)(uVar3 + 1) + 0x3f9];
          if (_Var1 == (__time_get_storage<char>)0x79) {
            return 2;
          }
LAB_001d73f0:
          if (_Var1 == (__time_get_storage<char>)0x59) {
            return 2;
          }
        }
      }
    }
  }
  return 0;
}


// ===== 001d7408  std::__ndk1::__time_get_storage<wchar_t>::__do_date_order =====

/* std::__ndk1::__time_get_storage<wchar_t>::__do_date_order() const */

undefined8 __thiscall
std::__ndk1::__time_get_storage<wchar_t>::__do_date_order(__time_get_storage<wchar_t> *this)

{
  __time_get_storage<wchar_t> _Var1;
  uint uVar2;
  uint uVar3;
  __time_get_storage<wchar_t> *p_Var4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  __time_get_storage<wchar_t> *p_Var8;
  ulong uVar9;
  
  _Var1 = this[0x3f8];
  p_Var4 = this + 0x3fc;
  uVar5 = 1;
  uVar2 = (uint)((byte)_Var1 >> 1);
  do {
    uVar7 = (ulong)(uVar5 - 1);
    if (((byte)_Var1 & 1) == 0) {
      p_Var8 = p_Var4;
      if ((uVar2 <= uVar5 - 1) || (*(int *)(this + uVar7 * 4 + 0x3fc) == 0x25)) break;
    }
    else if ((*(ulong *)(this + 0x400) <= uVar7) ||
            (*(int *)(*(long *)(this + 0x408) + uVar7 * 4) == 0x25)) {
      p_Var8 = *(__time_get_storage<wchar_t> **)(this + 0x408);
      break;
    }
    uVar5 = uVar5 + 1;
  } while( true );
  switch(*(undefined4 *)(p_Var8 + (ulong)uVar5 * 4)) {
  case 0x59:
  case 0x79:
    do {
      while( true ) {
        uVar3 = uVar5;
        uVar5 = uVar3 + 1;
        uVar7 = (ulong)uVar5;
        if (((byte)_Var1 & 1) != 0) break;
        if ((uVar2 <= uVar5) || (*(int *)(this + uVar7 * 4 + 0x3fc) == 0x25)) {
          p_Var8 = p_Var4;
          if (uVar2 == uVar5) {
            return 0;
          }
          goto LAB_001d75c4;
        }
      }
      uVar9 = *(ulong *)(this + 0x400);
      if (uVar9 <= uVar7) goto LAB_001d74e8;
    } while (*(int *)(*(long *)(this + 0x408) + uVar7 * 4) != 0x25);
    uVar9 = *(ulong *)(this + 0x400);
LAB_001d74e8:
    if (uVar9 != uVar7) {
      p_Var8 = *(__time_get_storage<wchar_t> **)(this + 0x408);
LAB_001d75c4:
      iVar6 = uVar3 - 1;
      if (*(int *)(p_Var8 + (ulong)(uVar3 + 2) * 4) == 100) {
        while( true ) {
          uVar7 = (ulong)(iVar6 + 4U);
          if (((byte)_Var1 & 1) != 0) {
            uVar9 = *(ulong *)(this + 0x400);
            if (uVar7 < uVar9) {
              if (*(int *)(*(long *)(this + 0x408) + uVar7 * 4) != 0x25) goto LAB_001d75e4;
              uVar9 = *(ulong *)(this + 0x400);
            }
            if (uVar9 == iVar6 + 4) {
              return 0;
            }
            p_Var4 = *(__time_get_storage<wchar_t> **)(this + 0x408);
            goto LAB_001d77b4;
          }
          if ((uVar2 <= iVar6 + 4U) || (*(int *)(this + uVar7 * 4 + 0x3fc) == 0x25)) break;
LAB_001d75e4:
          iVar6 = iVar6 + 1;
        }
        if (uVar2 - 4 != iVar6) {
LAB_001d77b4:
          if (*(int *)(p_Var4 + (ulong)(iVar6 + 5) * 4) == 0x6d) {
            return 4;
          }
        }
      }
      else if (*(int *)(p_Var8 + (ulong)(uVar3 + 2) * 4) == 0x6d) {
        while( true ) {
          uVar7 = (ulong)(iVar6 + 4U);
          if (((byte)_Var1 & 1) != 0) {
            uVar9 = *(ulong *)(this + 0x400);
            if (uVar7 < uVar9) {
              if (*(int *)(*(long *)(this + 0x408) + uVar7 * 4) != 0x25) goto LAB_001d7640;
              uVar9 = *(ulong *)(this + 0x400);
            }
            if (uVar9 == iVar6 + 4) {
              return 0;
            }
            p_Var4 = *(__time_get_storage<wchar_t> **)(this + 0x408);
            goto LAB_001d77d8;
          }
          if ((uVar2 <= iVar6 + 4U) || (*(int *)(this + uVar7 * 4 + 0x3fc) == 0x25)) break;
LAB_001d7640:
          iVar6 = iVar6 + 1;
        }
        if (uVar2 - 4 != iVar6) {
LAB_001d77d8:
          if (*(int *)(p_Var4 + (ulong)(iVar6 + 5) * 4) == 100) {
            return 3;
          }
        }
      }
    }
    break;
  case 100:
    do {
      while( true ) {
        uVar3 = uVar5;
        uVar5 = uVar3 + 1;
        uVar7 = (ulong)uVar5;
        if (((byte)_Var1 & 1) != 0) break;
        if ((uVar2 <= uVar5) || (*(int *)(this + uVar7 * 4 + 0x3fc) == 0x25)) {
          if (uVar2 == uVar5) {
            return 0;
          }
          goto LAB_001d7730;
        }
      }
      uVar9 = *(ulong *)(this + 0x400);
      if (uVar9 <= uVar7) goto LAB_001d75a8;
    } while (*(int *)(*(long *)(this + 0x408) + uVar7 * 4) != 0x25);
    uVar9 = *(ulong *)(this + 0x400);
LAB_001d75a8:
    if (uVar9 != uVar7) {
      p_Var4 = *(__time_get_storage<wchar_t> **)(this + 0x408);
LAB_001d7730:
      if (*(int *)(p_Var4 + (ulong)(uVar3 + 2) * 4) == 0x6d) {
        uVar3 = uVar3 + 3;
        while( true ) {
          uVar7 = (ulong)uVar3;
          if (((byte)_Var1 & 1) != 0) {
            uVar9 = *(ulong *)(this + 0x400);
            if (uVar7 < uVar9) {
              if (*(int *)(*(long *)(this + 0x408) + uVar7 * 4) != 0x25) goto LAB_001d7748;
              uVar9 = *(ulong *)(this + 0x400);
            }
            if (uVar9 == uVar7) {
              return 0;
            }
            iVar6 = *(int *)(*(long *)(this + 0x408) + (ulong)(uVar3 + 1) * 4);
            goto LAB_001d7828;
          }
          if ((uVar2 <= uVar3) || (*(int *)(this + uVar7 * 4 + 0x3fc) == 0x25)) break;
LAB_001d7748:
          uVar3 = uVar3 + 1;
        }
        if (uVar3 != uVar2) {
          iVar6 = *(int *)(this + (ulong)(uVar3 + 1) * 4 + 0x3fc);
LAB_001d7828:
          if ((iVar6 == 0x79) || (iVar6 == 0x59)) {
            return 1;
          }
        }
      }
    }
    break;
  case 0x6d:
    do {
      while( true ) {
        uVar3 = uVar5;
        uVar5 = uVar3 + 1;
        uVar7 = (ulong)uVar5;
        if (((byte)_Var1 & 1) != 0) break;
        if ((uVar2 <= uVar5) || (*(int *)(this + uVar7 * 4 + 0x3fc) == 0x25)) {
          if (uVar2 == uVar5) {
            return 0;
          }
          goto LAB_001d76a4;
        }
      }
      uVar9 = *(ulong *)(this + 0x400);
      if (uVar9 <= uVar7) goto LAB_001d7548;
    } while (*(int *)(*(long *)(this + 0x408) + uVar7 * 4) != 0x25);
    uVar9 = *(ulong *)(this + 0x400);
LAB_001d7548:
    if (uVar9 != uVar7) {
      p_Var4 = *(__time_get_storage<wchar_t> **)(this + 0x408);
LAB_001d76a4:
      if (*(int *)(p_Var4 + (ulong)(uVar3 + 2) * 4) == 100) {
        uVar3 = uVar3 + 3;
        while( true ) {
          uVar7 = (ulong)uVar3;
          if (((byte)_Var1 & 1) != 0) {
            uVar9 = *(ulong *)(this + 0x400);
            if (uVar7 < uVar9) {
              if (*(int *)(*(long *)(this + 0x408) + uVar7 * 4) != 0x25) goto LAB_001d76bc;
              uVar9 = *(ulong *)(this + 0x400);
            }
            if (uVar9 == uVar7) {
              return 0;
            }
            iVar6 = *(int *)(*(long *)(this + 0x408) + (ulong)(uVar3 + 1) * 4);
            if (iVar6 == 0x79) {
              return 2;
            }
            goto LAB_001d7840;
          }
          if ((uVar2 <= uVar3) || (*(int *)(this + uVar7 * 4 + 0x3fc) == 0x25)) break;
LAB_001d76bc:
          uVar3 = uVar3 + 1;
        }
        if (uVar3 != uVar2) {
          iVar6 = *(int *)(this + (ulong)(uVar3 + 1) * 4 + 0x3fc);
          if (iVar6 == 0x79) {
            return 2;
          }
LAB_001d7840:
          if (iVar6 == 0x59) {
            return 2;
          }
        }
      }
    }
  }
  return 0;
}


// ===== 001d7858  std::__ndk1::__time_put::__time_put =====

/* std::__ndk1::__time_put::__time_put(char const*) */

void __thiscall std::__ndk1::__time_put::__time_put(__time_put *this,char *param_1)

{
  long lVar1;
  __locale_t p_Var2;
  size_t __n;
  ulong *puVar3;
  undefined8 uVar4;
  void *__dest;
  ulong uVar5;
  ulong local_68;
  size_t local_60;
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  p_Var2 = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  *(__locale_t *)this = p_Var2;
  if (p_Var2 != (__locale_t)0x0) {
    if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_68 | 1);
    local_68 = CONCAT71(local_68._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_001d7928;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_68 = uVar5 | 1;
    local_60 = __n;
    local_58 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_001d7928:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 001d792c to 001d793f has its CatchHandler @ 001d7990 */
  puVar3 = (ulong *)basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_68,0,"time_put_byname failed to construct for ");
  local_40 = (void *)puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 001d7958 to 001d795f has its CatchHandler @ 001d7960 */
  uVar4 = FUN_001cbd58(&local_50);
                    /* catch() { ... } // from try @ 001d7958 with catch @ 001d7960 */
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
                    /* WARNING: Subroutine does not return */
    FUN_00200e50(uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00200e50(uVar4);
}


// ===== 001d79ac  std::__ndk1::__time_put::__time_put =====

/* std::__ndk1::__time_put::__time_put(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall std::__ndk1::__time_put::__time_put(__time_put *this,basic_string_conflict *param_1)

{
  long lVar1;
  __locale_t p_Var2;
  basic_string_conflict *pbVar3;
  basic_string_conflict *__locale;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __locale = *(basic_string_conflict **)(param_1 + 0x10);
  pbVar3 = (basic_string_conflict *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    __locale = param_1 + 1;
  }
  p_Var2 = newlocale(0x1fbf,(char *)__locale,(__locale_t)0x0);
  *(__locale_t *)this = p_Var2;
  if (p_Var2 == (__locale_t)0x0) {
    operator+((__ndk1 *)"time_put_byname failed to construct for ",(char *)param_1,pbVar3);
                    /* try { // try from 001d7a30 to 001d7a37 has its CatchHandler @ 001d7a3c */
    FUN_001cbd58(auStack_50);
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001d7a58  std::__ndk1::__time_put::~__time_put =====

/* std::__ndk1::__time_put::~__time_put() */

void __thiscall std::__ndk1::__time_put::~__time_put(__time_put *this)

{
  int iVar1;
  __locale_t p_Var2;
  
  p_Var2 = *(__locale_t *)this;
  if (((DAT_00214ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214ea0), iVar1 != 0)) {
                    /* try { // try from 001d7ab8 to 001d7acb has its CatchHandler @ 001d7ae0 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  if (p_Var2 != DAT_00214e98) {
                    /* try { // try from 001d7a94 to 001d7a97 has its CatchHandler @ 001d7af8 */
    freelocale(*(__locale_t *)this);
  }
  return;
}


// ===== 001d7afc  std::__ndk1::moneypunct_byname<char,false>::init =====

/* std::__ndk1::moneypunct_byname<char, false>::init(char const*) */

void __thiscall
std::__ndk1::moneypunct_byname<char,false>::init(moneypunct_byname<char,false> *this,char *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  long lVar1;
  wchar_t __c;
  int iVar2;
  uint uVar3;
  __locale_t __dataset;
  __locale_t p_Var4;
  lconv *plVar5;
  size_t sVar6;
  mbstate_t *pmVar7;
  undefined8 uVar8;
  moneypunct_byname<char,false> mVar9;
  void *__dest;
  moneypunct_byname<char,false> *__s;
  ulong uVar10;
  byte *__s_00;
  ulong local_88;
  size_t local_80;
  void *local_78;
  mbstate_t local_70;
  mbstate_t mStack_68;
  mbstate_t local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  if (__dataset == (__locale_t)0x0) {
    sVar6 = strlen(param_1);
    if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 001d7de0 to 001d7de7 has its CatchHandler @ 001d7eac */
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    if (sVar6 < 0x17) {
      __dest = (void *)((ulong)&local_88 | 1);
      local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar6 << 1));
      if (sVar6 == 0) goto LAB_001d7e40;
    }
    else {
      uVar10 = sVar6 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001d7e18 to 001d7e1f has its CatchHandler @ 001d7eac */
      __dest = operator_new(uVar10);
      local_88 = uVar10 | 1;
      local_80 = sVar6;
      local_78 = __dest;
    }
    memcpy(__dest,param_1,sVar6);
LAB_001d7e40:
    *(undefined1 *)((long)__dest + sVar6) = 0;
                    /* try { // try from 001d7e44 to 001d7e57 has its CatchHandler @ 001d7e90 */
    pmVar7 = (mbstate_t *)
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&local_88,0,"moneypunct_byname failed to construct for ");
    local_60 = pmVar7[2];
    mStack_68 = pmVar7[1];
    local_70 = *pmVar7;
    pmVar7[1].__count = 0;
    pmVar7[1].__value = (_union_27)0x0;
    pmVar7[2].__count = 0;
    pmVar7[2].__value = (_union_27)0x0;
    pmVar7->__count = 0;
    pmVar7->__value = (_union_27)0x0;
                    /* try { // try from 001d7e70 to 001d7e77 has its CatchHandler @ 001d7e78 */
    uVar8 = FUN_001cbd58(&local_70);
                    /* catch() { ... } // from try @ 001d7e70 with catch @ 001d7e78 */
    if (((ulong)local_70 & 1) != 0) {
      operator_delete((void *)local_60);
    }
    if ((local_88 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00200e50(uVar8);
    }
    operator_delete(local_78);
                    /* WARNING: Subroutine does not return */
    FUN_00200e50(uVar8);
  }
                    /* try { // try from 001d7b40 to 001d7b43 has its CatchHandler @ 001d7f60 */
  p_Var4 = uselocale(__dataset);
                    /* try { // try from 001d7b48 to 001d7b4b has its CatchHandler @ 001d7f30 */
  plVar5 = localeconv();
  if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 001d7b54 to 001d7b5b has its CatchHandler @ 001d7f24 */
    uselocale(p_Var4);
  }
  __s = (moneypunct_byname<char,false> *)plVar5->mon_decimal_point;
  mVar9 = *__s;
  if (mVar9 == (moneypunct_byname<char,false>)0x0) goto LAB_001d7bbc;
  if (__s[1] == (moneypunct_byname<char,false>)0x0) {
LAB_001d7bc0:
    this[0x10] = mVar9;
  }
  else {
    local_70.__count = 0;
    local_70.__value = (_union_27)0x0;
                    /* try { // try from 001d7b74 to 001d7b8b has its CatchHandler @ 001d7f60 */
    sVar6 = __strlen_chk(__s,0xffffffffffffffff);
    p_Var4 = uselocale(__dataset);
                    /* try { // try from 001d7b90 to 001d7ba3 has its CatchHandler @ 001d7f0c */
    sVar6 = mbrtowc((wchar_t *)&local_88,(char *)__s,sVar6,&local_70);
    if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 001d7bac to 001d7bb3 has its CatchHandler @ 001d7ef0 */
      uselocale(p_Var4);
    }
    __c = (wchar_t)local_88;
    if (0xfffffffffffffffd < sVar6) {
LAB_001d7bbc:
      mVar9 = (moneypunct_byname<char,false>)0xff;
      goto LAB_001d7bc0;
    }
                    /* try { // try from 001d7d34 to 001d7d3b has its CatchHandler @ 001d7f60 */
    p_Var4 = uselocale(__dataset);
                    /* try { // try from 001d7d40 to 001d7d47 has its CatchHandler @ 001d7ed4 */
    iVar2 = wctob(__c);
    if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 001d7d50 to 001d7d57 has its CatchHandler @ 001d7eb8 */
      uselocale(p_Var4);
    }
    if (iVar2 == -1) {
      if ((__c == L'\x202f') || (__c == L'\xa0')) {
        mVar9 = (moneypunct_byname<char,false>)0x20;
        goto LAB_001d7bc0;
      }
      goto LAB_001d7bbc;
    }
    this[0x10] = SUB41(iVar2,0);
  }
  __s_00 = (byte *)plVar5->mon_thousands_sep;
  uVar3 = (uint)*__s_00;
  if (*__s_00 != 0) {
    if (__s_00[1] == 0) goto LAB_001d7c28;
    local_70.__count = 0;
    local_70.__value = (_union_27)0x0;
                    /* try { // try from 001d7bdc to 001d7bf3 has its CatchHandler @ 001d7f60 */
    sVar6 = __strlen_chk(__s_00,0xffffffffffffffff);
    p_Var4 = uselocale(__dataset);
                    /* try { // try from 001d7bf8 to 001d7c0b has its CatchHandler @ 001d7ef4 */
    sVar6 = mbrtowc((wchar_t *)&local_88,(char *)__s_00,sVar6,&local_70);
    if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 001d7c14 to 001d7c1b has its CatchHandler @ 001d7eec */
      uselocale(p_Var4);
    }
    if (sVar6 < 0xfffffffffffffffe) {
                    /* try { // try from 001d7d6c to 001d7d73 has its CatchHandler @ 001d7f60 */
      p_Var4 = uselocale(__dataset);
                    /* try { // try from 001d7d78 to 001d7d7f has its CatchHandler @ 001d7ebc */
      uVar3 = wctob((wchar_t)local_88);
      if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 001d7d88 to 001d7d8f has its CatchHandler @ 001d7eb4 */
        uselocale(p_Var4);
      }
      if (((uVar3 != 0xffffffff) || (uVar3 = 0x20, (wchar_t)local_88 == L'\xa0')) ||
         ((wchar_t)local_88 == L'\x202f')) goto LAB_001d7c28;
    }
  }
  uVar3 = 0xff;
LAB_001d7c28:
  this[0x11] = SUB41(uVar3,0);
                    /* try { // try from 001d7c34 to 001d7ca7 has its CatchHandler @ 001d7f60 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x18),plVar5->mon_grouping);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x30);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            (this_00,plVar5->currency_symbol);
  uVar3 = 0;
  if ((byte)plVar5->frac_digits != 0xff) {
    uVar3 = (uint)(byte)plVar5->frac_digits;
  }
  *(uint *)(this + 0x78) = uVar3;
  if (plVar5->p_sign_posn == '\0') {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x48),"()");
  }
  else {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x48),plVar5->positive_sign);
  }
  if (plVar5->n_sign_posn == '\0') {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x60),"()");
  }
  else {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x60),plVar5->negative_sign);
  }
                    /* try { // try from 001d7ca8 to 001d7cb3 has its CatchHandler @ 001d7f2c */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,(basic_string_conflict *)this_00);
                    /* try { // try from 001d7cc4 to 001d7ceb has its CatchHandler @ 001d7f48 */
  FUN_001d7f78(this + 0x7c,&local_70,0,plVar5->p_cs_precedes,plVar5->p_sep_by_space,
               plVar5->p_sign_posn);
  FUN_001d7f78(this + 0x80,this_00,0,plVar5->n_cs_precedes,plVar5->n_sep_by_space,
               plVar5->n_sign_posn);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)local_60);
  }
                    /* try { // try from 001d7cfc to 001d7d03 has its CatchHandler @ 001d7f28 */
  freelocale(__dataset);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001d7f78  FUN_001d7f78 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001d7f78(undefined4 *param_1,
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_2,ulong param_3,char param_4,char param_5,undefined1 param_6)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  long lVar2;
  size_t sVar3;
  byte bVar4;
  bool bVar5;
  undefined2 uVar6;
  ulong uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if ((param_3 & 1) == 0) {
    bVar5 = false;
  }
  else {
    uVar11 = (ulong)((byte)*param_2 >> 1);
    if (((byte)*param_2 & 1) != 0) {
      uVar11 = *(ulong *)(param_2 + 8);
    }
    bVar5 = uVar11 == 4;
  }
  if (param_4 == '\x01') {
    switch(param_6) {
    case 0:
      *param_1 = 0x4000203;
      if (param_5 == '\0') {
        return;
      }
      if (param_5 == '\x02') {
        return;
      }
      goto joined_r0x001d82a4;
    case 1:
      *(undefined1 *)param_1 = 3;
      *(undefined1 *)((long)param_1 + 3) = 4;
      break;
    case 2:
      *(undefined1 *)param_1 = 2;
      *(undefined1 *)((long)param_1 + 3) = 3;
      if (param_5 == '\x02') {
        uVar6 = 0x104;
        goto LAB_001d83cc;
      }
      if (param_5 == '\x01') {
        uVar6 = 0x400;
        goto LAB_001d83fc;
      }
      if (param_5 != '\0') goto switchD_001d8280_default;
      uVar6 = 0x400;
      goto LAB_001d83c0;
    case 3:
      *(undefined1 *)param_1 = 3;
      *(undefined1 *)((long)param_1 + 3) = 4;
      break;
    case 4:
      *(undefined1 *)param_1 = 2;
      *(undefined1 *)((long)param_1 + 3) = 4;
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          uVar6 = 0x103;
          goto LAB_001d83cc;
        }
        if (param_5 == '\0') {
          uVar6 = 3;
          goto LAB_001d83c0;
        }
        goto switchD_001d8280_default;
      }
      uVar6 = 0x300;
      goto LAB_001d83fc;
    default:
      goto switchD_001d8280_default;
    }
    if (param_5 == '\x02') {
      uVar6 = 0x201;
LAB_001d83cc:
      *(undefined2 *)((long)param_1 + 1) = uVar6;
      if (!bVar5) {
        return;
      }
      if (((byte)*param_2 & 1) == 0) {
        bVar4 = (byte)*param_2 >> 1;
        *param_2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                   ((bVar4 - 1) * '\x02');
        param_2[bVar4] =
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
        return;
      }
      lVar2 = *(long *)(param_2 + 8);
      *(long *)(param_2 + 8) = lVar2 + -1;
      *(undefined1 *)(*(long *)(param_2 + 0x10) + lVar2 + -1) = 0;
      return;
    }
    if (param_5 == '\x01') {
      uVar6 = 2;
LAB_001d83fc:
      *(undefined2 *)((long)param_1 + 1) = uVar6;
      if (bVar5) {
        return;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(param_2,' ');
      return;
    }
    if (param_5 == '\0') {
      uVar6 = 2;
LAB_001d83c0:
      *(undefined2 *)((long)param_1 + 1) = uVar6;
      return;
    }
switchD_001d8280_default:
    *param_1 = 0x4000302;
    return;
  }
  if (param_4 != '\0') goto switchD_001d8280_default;
  if (bVar5) {
    __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_2 + 0x10);
    pbVar12 = __dest + 3;
    pbVar8 = __dest + *(long *)(param_2 + 8);
    if (((byte)*param_2 & 1) == 0) {
      __dest = param_2 + 1;
      pbVar8 = param_2 + (ulong)((byte)*param_2 >> 1) + 1;
      pbVar12 = param_2 + 4;
    }
    if (pbVar12 != pbVar8) {
      if (__dest + 1 == pbVar12) {
        bVar1 = *__dest;
        sVar3 = (long)pbVar8 - (long)pbVar12;
        if (sVar3 != 0) {
          memmove(__dest,pbVar12,sVar3);
        }
        __dest[sVar3] = bVar1;
      }
      else if (pbVar12 + 1 == pbVar8) {
        bVar1 = pbVar8[-1];
        sVar3 = (long)(pbVar8 + -1) - (long)__dest;
        if (sVar3 != 0) {
          memmove(pbVar8 + -sVar3,__dest,sVar3);
        }
        *__dest = bVar1;
      }
      else {
        uVar7 = (long)pbVar12 - (long)__dest;
        uVar11 = (long)pbVar8 - (long)pbVar12;
        uVar9 = uVar7;
        if (uVar7 == (long)pbVar8 - (long)pbVar12) {
          pbVar8 = pbVar12;
          if (0x1f < uVar7) {
            uVar9 = uVar7 & 0xffffffffffffffe0;
            pbVar8 = __dest + 0x10;
            pbVar15 = pbVar12 + 0x10;
            uVar11 = uVar9;
            do {
              uVar17 = *(undefined8 *)(pbVar8 + -8);
              uVar16 = *(undefined8 *)(pbVar8 + -0x10);
              uVar22 = *(undefined8 *)(pbVar8 + 8);
              uVar21 = *(undefined8 *)pbVar8;
              uVar18 = *(undefined8 *)(pbVar15 + -0x10);
              uVar20 = *(undefined8 *)(pbVar15 + 8);
              uVar19 = *(undefined8 *)pbVar15;
              uVar11 = uVar11 - 0x20;
              *(undefined8 *)(pbVar8 + -8) = *(undefined8 *)(pbVar15 + -8);
              *(undefined8 *)(pbVar8 + -0x10) = uVar18;
              *(undefined8 *)(pbVar8 + 8) = uVar20;
              *(undefined8 *)pbVar8 = uVar19;
              *(undefined8 *)(pbVar15 + -8) = uVar17;
              *(undefined8 *)(pbVar15 + -0x10) = uVar16;
              *(undefined8 *)(pbVar15 + 8) = uVar22;
              *(undefined8 *)pbVar15 = uVar21;
              pbVar8 = pbVar8 + 0x20;
              pbVar15 = pbVar15 + 0x20;
            } while (uVar11 != 0);
            pbVar8 = pbVar12 + uVar9;
            __dest = __dest + uVar9;
            if (uVar7 == uVar9) goto code_r0x001d8268;
          }
          do {
            bVar1 = *__dest;
            pbVar15 = __dest + 1;
            *__dest = *pbVar8;
            *pbVar8 = bVar1;
            pbVar8 = pbVar8 + 1;
            __dest = pbVar15;
          } while (pbVar12 != pbVar15);
        }
        else {
          do {
            uVar10 = uVar11;
            lVar2 = 0;
            if (uVar10 != 0) {
              lVar2 = (long)uVar9 / (long)uVar10;
            }
            uVar11 = uVar9 - lVar2 * uVar10;
            uVar9 = uVar10;
          } while (uVar11 != 0);
          if (uVar10 != 0) {
            pbVar12 = __dest + uVar10;
            do {
              pbVar12 = pbVar12 + -1;
              bVar1 = *pbVar12;
              pbVar13 = pbVar12;
              pbVar15 = pbVar12 + uVar7;
              do {
                pbVar14 = pbVar15;
                pbVar15 = pbVar14 + uVar7;
                if ((long)pbVar8 - (long)pbVar14 <= (long)uVar7) {
                  pbVar15 = __dest + (uVar7 - ((long)pbVar8 - (long)pbVar14));
                }
                *pbVar13 = *pbVar14;
                pbVar13 = pbVar14;
              } while (pbVar15 != pbVar12);
              *pbVar14 = bVar1;
            } while (pbVar12 != __dest);
          }
        }
      }
    }
  }
code_r0x001d8268:
  switch(param_6) {
  case 0:
    *param_1 = 0x2000403;
    if (param_5 == '\0') {
      return;
    }
    if (param_5 == '\x02') {
      return;
    }
joined_r0x001d82a4:
    if (param_5 != '\x01') goto switchD_001d8280_default;
    goto joined_r0x001d843c;
  case 1:
    *(undefined1 *)param_1 = 3;
    *(undefined1 *)((long)param_1 + 3) = 2;
    if (param_5 == '\x02') {
      uVar6 = 0x401;
      goto LAB_001d845c;
    }
    if (param_5 != '\x01') {
      if (param_5 != '\0') goto switchD_001d8280_default;
      uVar6 = 4;
      goto LAB_001d83c0;
    }
    uVar6 = 4;
    break;
  case 2:
    *(undefined1 *)param_1 = 4;
    *(undefined1 *)((long)param_1 + 3) = 3;
    if (param_5 != '\x02') {
      if (param_5 == '\x01') {
        if (!bVar5) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                    (param_2,0,1,' ');
        }
      }
      else {
LAB_001d8330:
        if (param_5 != '\0') goto switchD_001d8280_default;
      }
      uVar6 = 0x200;
      goto LAB_001d83c0;
    }
LAB_001d838c:
    uVar6 = 0x102;
LAB_001d845c:
    *(undefined2 *)((long)param_1 + 1) = uVar6;
    if (!bVar5) {
      return;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    erase(param_2,0,1);
    return;
  case 3:
    *(undefined1 *)param_1 = 4;
    *(undefined1 *)((long)param_1 + 3) = 2;
    if (param_5 != '\x02') {
      if (param_5 == '\x01') {
        uVar6 = 0x301;
        goto LAB_001d845c;
      }
      if (param_5 == '\0') {
        uVar6 = 0x300;
        goto LAB_001d83c0;
      }
      goto switchD_001d8280_default;
    }
    uVar6 = 3;
    break;
  case 4:
    *(undefined1 *)param_1 = 4;
    *(undefined1 *)((long)param_1 + 3) = 3;
    if (param_5 == '\x02') goto LAB_001d838c;
    if (param_5 != '\x01') goto LAB_001d8330;
    uVar6 = 0x200;
    break;
  default:
    goto switchD_001d8280_default;
  }
  *(undefined2 *)((long)param_1 + 1) = uVar6;
joined_r0x001d843c:
  if (bVar5) {
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  insert(param_2,0,1,' ');
  return;
}


// ===== 001d848c  std::__ndk1::moneypunct_byname<char,true>::init =====

/* std::__ndk1::moneypunct_byname<char, true>::init(char const*) */

void __thiscall
std::__ndk1::moneypunct_byname<char,true>::init(moneypunct_byname<char,true> *this,char *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  long lVar1;
  wchar_t __c;
  int iVar2;
  uint uVar3;
  __locale_t __dataset;
  __locale_t p_Var4;
  lconv *plVar5;
  size_t sVar6;
  mbstate_t *pmVar7;
  undefined8 uVar8;
  moneypunct_byname<char,true> mVar9;
  void *__dest;
  moneypunct_byname<char,true> *__s;
  ulong uVar10;
  byte *__s_00;
  ulong local_88;
  size_t local_80;
  void *local_78;
  mbstate_t local_70;
  mbstate_t mStack_68;
  mbstate_t local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  if (__dataset == (__locale_t)0x0) {
    sVar6 = strlen(param_1);
    if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 001d8770 to 001d8777 has its CatchHandler @ 001d883c */
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    if (sVar6 < 0x17) {
      __dest = (void *)((ulong)&local_88 | 1);
      local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar6 << 1));
      if (sVar6 == 0) goto LAB_001d87d0;
    }
    else {
      uVar10 = sVar6 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001d87a8 to 001d87af has its CatchHandler @ 001d883c */
      __dest = operator_new(uVar10);
      local_88 = uVar10 | 1;
      local_80 = sVar6;
      local_78 = __dest;
    }
    memcpy(__dest,param_1,sVar6);
LAB_001d87d0:
    *(undefined1 *)((long)__dest + sVar6) = 0;
                    /* try { // try from 001d87d4 to 001d87e7 has its CatchHandler @ 001d8820 */
    pmVar7 = (mbstate_t *)
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                       ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&local_88,0,"moneypunct_byname failed to construct for ");
    local_60 = pmVar7[2];
    mStack_68 = pmVar7[1];
    local_70 = *pmVar7;
    pmVar7[1].__count = 0;
    pmVar7[1].__value = (_union_27)0x0;
    pmVar7[2].__count = 0;
    pmVar7[2].__value = (_union_27)0x0;
    pmVar7->__count = 0;
    pmVar7->__value = (_union_27)0x0;
                    /* try { // try from 001d8800 to 001d8807 has its CatchHandler @ 001d8808 */
    uVar8 = FUN_001cbd58(&local_70);
                    /* catch() { ... } // from try @ 001d8800 with catch @ 001d8808 */
    if (((ulong)local_70 & 1) != 0) {
      operator_delete((void *)local_60);
    }
    if ((local_88 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00200e50(uVar8);
    }
    operator_delete(local_78);
                    /* WARNING: Subroutine does not return */
    FUN_00200e50(uVar8);
  }
                    /* try { // try from 001d84d0 to 001d84d3 has its CatchHandler @ 001d88f0 */
  p_Var4 = uselocale(__dataset);
                    /* try { // try from 001d84d8 to 001d84db has its CatchHandler @ 001d88c0 */
  plVar5 = localeconv();
  if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 001d84e4 to 001d84eb has its CatchHandler @ 001d88b4 */
    uselocale(p_Var4);
  }
  __s = (moneypunct_byname<char,true> *)plVar5->mon_decimal_point;
  mVar9 = *__s;
  if (mVar9 == (moneypunct_byname<char,true>)0x0) goto LAB_001d854c;
  if (__s[1] == (moneypunct_byname<char,true>)0x0) {
LAB_001d8550:
    this[0x10] = mVar9;
  }
  else {
    local_70.__count = 0;
    local_70.__value = (_union_27)0x0;
                    /* try { // try from 001d8504 to 001d851b has its CatchHandler @ 001d88f0 */
    sVar6 = __strlen_chk(__s,0xffffffffffffffff);
    p_Var4 = uselocale(__dataset);
                    /* try { // try from 001d8520 to 001d8533 has its CatchHandler @ 001d889c */
    sVar6 = mbrtowc((wchar_t *)&local_88,(char *)__s,sVar6,&local_70);
    if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 001d853c to 001d8543 has its CatchHandler @ 001d8880 */
      uselocale(p_Var4);
    }
    __c = (wchar_t)local_88;
    if (0xfffffffffffffffd < sVar6) {
LAB_001d854c:
      mVar9 = (moneypunct_byname<char,true>)0xff;
      goto LAB_001d8550;
    }
                    /* try { // try from 001d86c4 to 001d86cb has its CatchHandler @ 001d88f0 */
    p_Var4 = uselocale(__dataset);
                    /* try { // try from 001d86d0 to 001d86d7 has its CatchHandler @ 001d8864 */
    iVar2 = wctob(__c);
    if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 001d86e0 to 001d86e7 has its CatchHandler @ 001d8848 */
      uselocale(p_Var4);
    }
    if (iVar2 == -1) {
      if ((__c == L'\x202f') || (__c == L'\xa0')) {
        mVar9 = (moneypunct_byname<char,true>)0x20;
        goto LAB_001d8550;
      }
      goto LAB_001d854c;
    }
    this[0x10] = SUB41(iVar2,0);
  }
  __s_00 = (byte *)plVar5->mon_thousands_sep;
  uVar3 = (uint)*__s_00;
  if (*__s_00 != 0) {
    if (__s_00[1] == 0) goto LAB_001d85b8;
    local_70.__count = 0;
    local_70.__value = (_union_27)0x0;
                    /* try { // try from 001d856c to 001d8583 has its CatchHandler @ 001d88f0 */
    sVar6 = __strlen_chk(__s_00,0xffffffffffffffff);
    p_Var4 = uselocale(__dataset);
                    /* try { // try from 001d8588 to 001d859b has its CatchHandler @ 001d8884 */
    sVar6 = mbrtowc((wchar_t *)&local_88,(char *)__s_00,sVar6,&local_70);
    if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 001d85a4 to 001d85ab has its CatchHandler @ 001d887c */
      uselocale(p_Var4);
    }
    if (sVar6 < 0xfffffffffffffffe) {
                    /* try { // try from 001d86fc to 001d8703 has its CatchHandler @ 001d88f0 */
      p_Var4 = uselocale(__dataset);
                    /* try { // try from 001d8708 to 001d870f has its CatchHandler @ 001d884c */
      uVar3 = wctob((wchar_t)local_88);
      if (p_Var4 != (__locale_t)0x0) {
                    /* try { // try from 001d8718 to 001d871f has its CatchHandler @ 001d8844 */
        uselocale(p_Var4);
      }
      if (((uVar3 != 0xffffffff) || (uVar3 = 0x20, (wchar_t)local_88 == L'\xa0')) ||
         ((wchar_t)local_88 == L'\x202f')) goto LAB_001d85b8;
    }
  }
  uVar3 = 0xff;
LAB_001d85b8:
  this[0x11] = SUB41(uVar3,0);
                    /* try { // try from 001d85c4 to 001d8637 has its CatchHandler @ 001d88f0 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x18),plVar5->mon_grouping);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x30);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            (this_00,plVar5->int_curr_symbol);
  uVar3 = 0;
  if ((byte)plVar5->int_frac_digits != 0xff) {
    uVar3 = (uint)(byte)plVar5->int_frac_digits;
  }
  *(uint *)(this + 0x78) = uVar3;
  if (plVar5->int_p_sign_posn == '\0') {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x48),"()");
  }
  else {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x48),plVar5->positive_sign);
  }
  if (plVar5->int_n_sign_posn == '\0') {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x60),"()");
  }
  else {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x60),plVar5->negative_sign);
  }
                    /* try { // try from 001d8638 to 001d8643 has its CatchHandler @ 001d88bc */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,(basic_string_conflict *)this_00);
                    /* try { // try from 001d8654 to 001d867b has its CatchHandler @ 001d88d8 */
  FUN_001d7f78(this + 0x7c,&local_70,1,plVar5->int_p_cs_precedes,plVar5->int_p_sep_by_space,
               plVar5->int_p_sign_posn);
  FUN_001d7f78(this + 0x80,this_00,1,plVar5->int_n_cs_precedes,plVar5->int_n_sep_by_space,
               plVar5->int_n_sign_posn);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)local_60);
  }
                    /* try { // try from 001d868c to 001d8693 has its CatchHandler @ 001d88b8 */
  freelocale(__dataset);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001d8908  std::__ndk1::moneypunct_byname<wchar_t,false>::init =====

/* std::__ndk1::moneypunct_byname<wchar_t, false>::init(char const*) */

void __thiscall
std::__ndk1::moneypunct_byname<wchar_t,false>::init
          (moneypunct_byname<wchar_t,false> *this,char *param_1)

{
  uint uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  char cVar3;
  long lVar4;
  mbstate_t *pmVar5;
  __locale_t __dataset;
  __locale_t p_Var6;
  size_t sVar7;
  mbstate_t *pmVar8;
  undefined8 uVar9;
  ulong uVar10;
  wchar_t wVar11;
  ulong uVar12;
  moneypunct_byname<wchar_t,false> *pmVar13;
  moneypunct_byname<wchar_t,false> *pmVar14;
  _union_27 *p_Var15;
  mbstate_t *pmVar16;
  ulong uVar17;
  mbstate_t *pmVar18;
  void *__dest;
  char *pcVar19;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this_00;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar20;
  mbstate_t mVar21;
  mbstate_t mVar22;
  mbstate_t mVar23;
  char *local_218;
  mbstate_t mStack_210;
  ulong local_208;
  ulong local_200;
  void *local_1f8;
  mbstate_t local_1f0 [51];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  if (__dataset == (__locale_t)0x0) {
    uVar12 = strlen(param_1);
    if (0xffffffffffffffef < uVar12) {
                    /* try { // try from 001d8f5c to 001d8f63 has its CatchHandler @ 001d904c */
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
  }
  else {
                    /* try { // try from 001d894c to 001d894f has its CatchHandler @ 001d9120 */
    p_Var6 = uselocale(__dataset);
                    /* try { // try from 001d8954 to 001d8957 has its CatchHandler @ 001d90ec */
    param_1 = (char *)localeconv();
    if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d8960 to 001d8967 has its CatchHandler @ 001d90c4 */
      uselocale(p_Var6);
    }
    pcVar19 = ((lconv *)param_1)->mon_decimal_point;
    if (*pcVar19 == '\0') {
LAB_001d89c0:
      wVar11 = L'\xffffffff';
    }
    else {
      local_1f0[0].__count = 0;
      local_1f0[0].__value = (_union_27)0x0;
                    /* try { // try from 001d8978 to 001d898f has its CatchHandler @ 001d9120 */
      sVar7 = __strlen_chk(pcVar19,0xffffffffffffffff);
      p_Var6 = uselocale(__dataset);
                    /* try { // try from 001d8994 to 001d89a7 has its CatchHandler @ 001d90ac */
      sVar7 = mbrtowc((wchar_t *)&local_208,pcVar19,sVar7,local_1f0);
      if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d89b0 to 001d89b7 has its CatchHandler @ 001d905c */
        uselocale(p_Var6);
      }
      if (0xfffffffffffffffd < sVar7) goto LAB_001d89c0;
      wVar11 = (wchar_t)local_208;
    }
    *(wchar_t *)(this + 0x10) = wVar11;
    pcVar19 = ((lconv *)param_1)->mon_thousands_sep;
    if (*pcVar19 == '\0') {
LAB_001d8a28:
      wVar11 = L'\xffffffff';
    }
    else {
      local_1f0[0].__count = 0;
      local_1f0[0].__value = (_union_27)0x0;
                    /* try { // try from 001d89e0 to 001d89f7 has its CatchHandler @ 001d9120 */
      sVar7 = __strlen_chk(pcVar19,0xffffffffffffffff);
      p_Var6 = uselocale(__dataset);
                    /* try { // try from 001d89fc to 001d8a0f has its CatchHandler @ 001d9094 */
      sVar7 = mbrtowc((wchar_t *)&local_208,pcVar19,sVar7,local_1f0);
      if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d8a18 to 001d8a1f has its CatchHandler @ 001d9058 */
        uselocale(p_Var6);
      }
      if (0xfffffffffffffffd < sVar7) goto LAB_001d8a28;
      wVar11 = (wchar_t)local_208;
    }
    *(wchar_t *)(this + 0x14) = wVar11;
                    /* try { // try from 001d8a40 to 001d8a43 has its CatchHandler @ 001d9120 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x18),((lconv *)param_1)->mon_grouping);
    local_218 = ((lconv *)param_1)->currency_symbol;
    mStack_210.__count = 0;
    mStack_210.__value = (_union_27)0x0;
                    /* try { // try from 001d8a4c to 001d8a53 has its CatchHandler @ 001d90e8 */
    p_Var6 = uselocale(__dataset);
                    /* try { // try from 001d8a58 to 001d8a6b has its CatchHandler @ 001d90d0 */
    sVar7 = mbsrtowcs(&local_1f0[0].__count,&local_218,100,&mStack_210);
    if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d8a74 to 001d8a7b has its CatchHandler @ 001d9090 */
      uselocale(p_Var6);
    }
    if (sVar7 == 0xffffffffffffffff) {
                    /* try { // try from 001d8f64 to 001d8f6f has its CatchHandler @ 001d90e8 */
      __throw_runtime_error("locale not supported");
      goto LAB_001d8f70;
    }
    this_00 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(this + 0x30);
    bVar2 = *this_00;
    uVar12 = (ulong)(byte)bVar2;
    if (((byte)bVar2 & 1) == 0) {
      if (4 < sVar7) {
        uVar12 = (ulong)((byte)bVar2 >> 1);
        uVar10 = 4;
LAB_001d8abc:
                    /* try { // try from 001d8ac0 to 001d8b83 has its CatchHandler @ 001d911c */
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by(this_00,uVar10,sVar7 - uVar10,uVar12,0,uVar12,0);
        uVar12 = (ulong)(byte)*this_00;
      }
    }
    else {
      uVar12 = *(ulong *)this_00;
      uVar10 = (uVar12 & 0xfffffffffffffffe) - 1;
      if (uVar10 < sVar7) {
        uVar12 = *(ulong *)(this + 0x38);
        goto LAB_001d8abc;
      }
    }
    if ((uVar12 & 1) == 0) {
      pmVar13 = this + 0x34;
    }
    else {
      pmVar13 = *(moneypunct_byname<wchar_t,false> **)(this + 0x40);
    }
    if (sVar7 != 0) {
      uVar12 = sVar7 * 4 - 4;
      if ((uVar12 < 0x1c) ||
         ((pmVar13 < (moneypunct_byname<wchar_t,false> *)(&local_1f0[0].__count + sVar7) &&
          (local_1f0 < (mbstate_t *)(pmVar13 + sVar7 * 4))))) {
        pmVar8 = local_1f0;
        pmVar14 = pmVar13;
      }
      else {
        uVar12 = (uVar12 >> 2) + 1;
        uVar17 = uVar12 & 0x7ffffffffffffff8;
        pmVar18 = local_1f0 + 2;
        pmVar14 = pmVar13 + uVar17 * 4;
        pmVar8 = (mbstate_t *)(&local_1f0[0].__count + uVar17);
        pmVar16 = (mbstate_t *)(pmVar13 + 0x10);
        uVar10 = uVar17;
        do {
          pmVar5 = pmVar18 + -1;
          mVar21 = pmVar18[-2];
          mVar23 = pmVar18[1];
          mVar22 = *pmVar18;
          pmVar18 = pmVar18 + 4;
          uVar10 = uVar10 - 8;
          pmVar16[-1] = *pmVar5;
          pmVar16[-2] = mVar21;
          pmVar16[1] = mVar23;
          *pmVar16 = mVar22;
          pmVar16 = pmVar16 + 4;
        } while (uVar10 != 0);
        pmVar13 = pmVar14;
        if (uVar12 == uVar17) goto LAB_001d8b40;
      }
      do {
        p_Var15 = &pmVar8->__value;
        pmVar13 = pmVar14 + 4;
        *(int *)pmVar14 = pmVar8->__count;
        pmVar14 = pmVar13;
        pmVar8 = (mbstate_t *)p_Var15;
      } while ((_union_27 *)(&local_1f0[0].__count + sVar7) != p_Var15);
    }
LAB_001d8b40:
    *(int *)pmVar13 = 0;
    if (((byte)*this_00 & 1) == 0) {
      *this_00 = SUB41((int)sVar7 << 1,0);
    }
    else {
      *(size_t *)(this + 0x38) = sVar7;
    }
    uVar1 = 0;
    if ((byte)((lconv *)param_1)->frac_digits != 0xff) {
      uVar1 = (uint)(byte)((lconv *)param_1)->frac_digits;
    }
    *(uint *)(this + 0x78) = uVar1;
    if (((lconv *)param_1)->p_sign_posn == '\0') {
                    /* try { // try from 001d8bd8 to 001d8bfb has its CatchHandler @ 001d911c */
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)(this + 0x48),L"()");
      cVar3 = ((lconv *)param_1)->n_sign_posn;
joined_r0x001d8be8:
      if (cVar3 == '\0') {
LAB_001d8d14:
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)(this + 0x60),L"()");
      }
      else {
LAB_001d8bec:
        local_218 = ((lconv *)param_1)->negative_sign;
        mStack_210.__count = 0;
        mStack_210.__value = (_union_27)0x0;
        p_Var6 = uselocale(__dataset);
                    /* try { // try from 001d8c00 to 001d8c13 has its CatchHandler @ 001d9060 */
        sVar7 = mbsrtowcs(&local_1f0[0].__count,&local_218,100,&mStack_210);
        if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d8c1c to 001d8c23 has its CatchHandler @ 001d9050 */
          uselocale(p_Var6);
        }
        if (sVar7 == 0xffffffffffffffff) goto LAB_001d8f80;
        pbVar20 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *)(this + 0x60);
        bVar2 = *pbVar20;
        uVar12 = (ulong)(byte)bVar2;
        if (((byte)bVar2 & 1) == 0) {
          if (4 < sVar7) {
            uVar12 = (ulong)((byte)bVar2 >> 1);
            uVar10 = 4;
LAB_001d8d40:
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::__grow_by(pbVar20,uVar10,sVar7 - uVar10,uVar12,0,uVar12,0);
            uVar12 = (ulong)(byte)*pbVar20;
          }
        }
        else {
          uVar12 = *(ulong *)pbVar20;
          uVar10 = (uVar12 & 0xfffffffffffffffe) - 1;
          if (uVar10 < sVar7) {
            uVar12 = *(ulong *)(this + 0x68);
            goto LAB_001d8d40;
          }
        }
        if ((uVar12 & 1) == 0) {
          pmVar13 = this + 100;
        }
        else {
          pmVar13 = *(moneypunct_byname<wchar_t,false> **)(this + 0x70);
        }
        pmVar14 = pmVar13;
        if (sVar7 != 0) {
          uVar12 = sVar7 * 4 - 4;
          if ((uVar12 < 0x1c) ||
             ((pmVar13 < (moneypunct_byname<wchar_t,false> *)(&local_1f0[0].__count + sVar7) &&
              (local_1f0 < (mbstate_t *)(pmVar13 + sVar7 * 4))))) {
            pmVar8 = local_1f0;
          }
          else {
            uVar12 = (uVar12 >> 2) + 1;
            uVar17 = uVar12 & 0x7ffffffffffffff8;
            pmVar18 = local_1f0 + 2;
            pmVar14 = pmVar13 + uVar17 * 4;
            pmVar8 = (mbstate_t *)(&local_1f0[0].__count + uVar17);
            pmVar16 = (mbstate_t *)(pmVar13 + 0x10);
            uVar10 = uVar17;
            do {
              pmVar5 = pmVar18 + -1;
              mVar21 = pmVar18[-2];
              mVar23 = pmVar18[1];
              mVar22 = *pmVar18;
              pmVar18 = pmVar18 + 4;
              uVar10 = uVar10 - 8;
              pmVar16[-1] = *pmVar5;
              pmVar16[-2] = mVar21;
              pmVar16[1] = mVar23;
              *pmVar16 = mVar22;
              pmVar16 = pmVar16 + 4;
            } while (uVar10 != 0);
            if (uVar12 == uVar17) goto LAB_001d8dc4;
          }
          pmVar13 = pmVar14;
          do {
            p_Var15 = &pmVar8->__value;
            pmVar14 = pmVar13 + 4;
            *(int *)pmVar13 = pmVar8->__count;
            pmVar13 = pmVar14;
            pmVar8 = (mbstate_t *)p_Var15;
          } while ((_union_27 *)(&local_1f0[0].__count + sVar7) != p_Var15);
        }
LAB_001d8dc4:
        *(int *)pmVar14 = 0;
        if (((byte)*pbVar20 & 1) == 0) {
          *pbVar20 = SUB41((int)sVar7 << 1,0);
        }
        else {
          *(size_t *)(this + 0x68) = sVar7;
        }
      }
                    /* try { // try from 001d8de0 to 001d8deb has its CatchHandler @ 001d90cc */
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      basic_string((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    *)&local_208,(basic_string_conflict *)this_00);
                    /* try { // try from 001d8dfc to 001d8e23 has its CatchHandler @ 001d9104 */
      FUN_001d9138(this + 0x7c,&local_208,0,((lconv *)param_1)->p_cs_precedes,
                   ((lconv *)param_1)->p_sep_by_space,((lconv *)param_1)->p_sign_posn);
      FUN_001d9138(this + 0x80,this_00,0,((lconv *)param_1)->n_cs_precedes,
                   ((lconv *)param_1)->n_sep_by_space,((lconv *)param_1)->n_sign_posn);
      if (((byte)local_208._0_1_ & 1) != 0) {
        operator_delete(local_1f8);
      }
                    /* try { // try from 001d8e34 to 001d8e3b has its CatchHandler @ 001d90c8 */
      freelocale(__dataset);
      if (*(long *)(lVar4 + 0x28) == local_58) {
        return;
      }
LAB_001d8f70:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_218 = ((lconv *)param_1)->positive_sign;
    mStack_210.__count = 0;
    mStack_210.__value = (_union_27)0x0;
    p_Var6 = uselocale(__dataset);
                    /* try { // try from 001d8b88 to 001d8b9b has its CatchHandler @ 001d9078 */
    sVar7 = mbsrtowcs(&local_1f0[0].__count,&local_218,100,&mStack_210);
    if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d8ba4 to 001d8bab has its CatchHandler @ 001d9054 */
      uselocale(p_Var6);
    }
    if (sVar7 != 0xffffffffffffffff) {
      pbVar20 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 *)(this + 0x48);
      bVar2 = *pbVar20;
      uVar12 = (ulong)(byte)bVar2;
      if (((byte)bVar2 & 1) == 0) {
        if (4 < sVar7) {
          uVar12 = (ulong)((byte)bVar2 >> 1);
          uVar10 = 4;
LAB_001d8c64:
                    /* try { // try from 001d8c68 to 001d8d57 has its CatchHandler @ 001d911c */
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          __grow_by(pbVar20,uVar10,sVar7 - uVar10,uVar12,0,uVar12,0);
          uVar12 = (ulong)(byte)*pbVar20;
        }
      }
      else {
        uVar12 = *(ulong *)pbVar20;
        uVar10 = (uVar12 & 0xfffffffffffffffe) - 1;
        if (uVar10 < sVar7) {
          uVar12 = *(ulong *)(this + 0x50);
          goto LAB_001d8c64;
        }
      }
      if ((uVar12 & 1) == 0) {
        pmVar13 = this + 0x4c;
      }
      else {
        pmVar13 = *(moneypunct_byname<wchar_t,false> **)(this + 0x58);
      }
      pmVar14 = pmVar13;
      if (sVar7 != 0) {
        uVar12 = sVar7 * 4 - 4;
        if ((uVar12 < 0x1c) ||
           ((pmVar13 < (moneypunct_byname<wchar_t,false> *)(&local_1f0[0].__count + sVar7) &&
            (local_1f0 < (mbstate_t *)(pmVar13 + sVar7 * 4))))) {
          pmVar8 = local_1f0;
        }
        else {
          uVar12 = (uVar12 >> 2) + 1;
          uVar17 = uVar12 & 0x7ffffffffffffff8;
          pmVar18 = local_1f0 + 2;
          pmVar14 = pmVar13 + uVar17 * 4;
          pmVar8 = (mbstate_t *)(&local_1f0[0].__count + uVar17);
          pmVar16 = (mbstate_t *)(pmVar13 + 0x10);
          uVar10 = uVar17;
          do {
            pmVar5 = pmVar18 + -1;
            mVar21 = pmVar18[-2];
            mVar23 = pmVar18[1];
            mVar22 = *pmVar18;
            pmVar18 = pmVar18 + 4;
            uVar10 = uVar10 - 8;
            pmVar16[-1] = *pmVar5;
            pmVar16[-2] = mVar21;
            pmVar16[1] = mVar23;
            *pmVar16 = mVar22;
            pmVar16 = pmVar16 + 4;
          } while (uVar10 != 0);
          if (uVar12 == uVar17) goto LAB_001d8ce8;
        }
        pmVar13 = pmVar14;
        do {
          p_Var15 = &pmVar8->__value;
          pmVar14 = pmVar13 + 4;
          *(int *)pmVar13 = pmVar8->__count;
          pmVar13 = pmVar14;
          pmVar8 = (mbstate_t *)p_Var15;
        } while ((_union_27 *)(&local_1f0[0].__count + sVar7) != p_Var15);
      }
LAB_001d8ce8:
      *(int *)pmVar14 = 0;
      if (((byte)*pbVar20 & 1) != 0) {
        *(size_t *)(this + 0x50) = sVar7;
        cVar3 = ((lconv *)param_1)->n_sign_posn;
        goto joined_r0x001d8be8;
      }
      *pbVar20 = SUB41((int)sVar7 << 1,0);
      if (((lconv *)param_1)->n_sign_posn == '\0') goto LAB_001d8d14;
      goto LAB_001d8bec;
    }
                    /* try { // try from 001d8f74 to 001d8f8b has its CatchHandler @ 001d911c */
    __throw_runtime_error("locale not supported");
LAB_001d8f80:
    uVar12 = __throw_runtime_error("locale not supported");
  }
  if (uVar12 < 0x17) {
    __dest = (void *)((ulong)&local_208 | 1);
    local_208 = CONCAT71(local_208._1_7_,(char)((int)uVar12 << 1));
    if (uVar12 == 0) goto LAB_001d8fe0;
  }
  else {
    uVar10 = uVar12 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001d8fb8 to 001d8fbf has its CatchHandler @ 001d904c */
    __dest = operator_new(uVar10);
    local_208 = uVar10 | 1;
    local_200 = uVar12;
    local_1f8 = __dest;
  }
  memcpy(__dest,param_1,uVar12);
LAB_001d8fe0:
  *(undefined1 *)((long)__dest + uVar12) = 0;
                    /* try { // try from 001d8fe4 to 001d8ff7 has its CatchHandler @ 001d9030 */
  pmVar8 = (mbstate_t *)
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_208,0,"moneypunct_byname failed to construct for ");
  local_1f0[2] = pmVar8[2];
  local_1f0[1] = pmVar8[1];
  local_1f0[0] = *pmVar8;
  pmVar8[1].__count = 0;
  pmVar8[1].__value = (_union_27)0x0;
  pmVar8[2].__count = 0;
  pmVar8[2].__value = (_union_27)0x0;
  pmVar8->__count = 0;
  pmVar8->__value = (_union_27)0x0;
                    /* try { // try from 001d9010 to 001d9017 has its CatchHandler @ 001d9018 */
  uVar9 = FUN_001cbd58(local_1f0);
                    /* catch() { ... } // from try @ 001d9010 with catch @ 001d9018 */
  if (((ulong)local_1f0[0] & 1) != 0) {
    operator_delete((void *)local_1f0[2]);
  }
  if ((local_208 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00200e50(uVar9);
  }
  operator_delete(local_1f8);
                    /* WARNING: Subroutine does not return */
  FUN_00200e50(uVar9);
}


// ===== 001d9138  FUN_001d9138 =====

void FUN_001d9138(undefined4 *param_1,
                 basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 *param_2,ulong param_3,char param_4,char param_5,undefined1 param_6)

{
  size_t sVar1;
  bool bVar2;
  undefined2 uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar10;
  ulong uVar11;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar12;
  long lVar13;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar14;
  ulong uVar15;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar16;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__dest;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if ((param_3 & 1) == 0) {
    bVar2 = false;
  }
  else {
    uVar7 = (ulong)((byte)*param_2 >> 1);
    if (((byte)*param_2 & 1) != 0) {
      uVar7 = *(ulong *)(param_2 + 8);
    }
    bVar2 = uVar7 == 4;
  }
  if (param_4 == '\x01') {
    switch(param_6) {
    case 0:
      uVar5 = 0x4000203;
LAB_001d9508:
      *param_1 = uVar5;
      if (param_5 == '\0') {
        return;
      }
      if (param_5 == '\x02') {
        return;
      }
      if (param_5 == '\x01') goto joined_r0x001d9674;
      goto switchD_001d94fc_default;
    case 1:
      *(undefined1 *)param_1 = 3;
      *(undefined1 *)((long)param_1 + 3) = 4;
      break;
    case 2:
      *(undefined1 *)param_1 = 2;
      *(undefined1 *)((long)param_1 + 3) = 3;
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          uVar3 = 0x400;
          goto LAB_001d93e4;
        }
        if (param_5 == '\0') {
          *(undefined2 *)((long)param_1 + 1) = 0x400;
          return;
        }
        goto switchD_001d94fc_default;
      }
      uVar3 = 0x104;
      goto LAB_001d9410;
    case 3:
      *(undefined1 *)param_1 = 3;
      *(undefined1 *)((long)param_1 + 3) = 4;
      break;
    case 4:
      *(undefined1 *)param_1 = 2;
      *(undefined1 *)((long)param_1 + 3) = 4;
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          uVar3 = 0x103;
          goto LAB_001d9410;
        }
        if (param_5 == '\0') {
          *(undefined2 *)((long)param_1 + 1) = 3;
          return;
        }
        goto switchD_001d94fc_default;
      }
      uVar3 = 0x300;
      goto LAB_001d93e4;
    default:
      goto switchD_001d94fc_default;
    }
    if (param_5 == '\x02') {
      uVar3 = 0x201;
LAB_001d9410:
      *(undefined2 *)((long)param_1 + 1) = uVar3;
      if (!bVar2) {
        return;
      }
      if (((byte)*param_2 & 1) == 0) {
        lVar8 = (ulong)((byte)*param_2 >> 1) - 1;
        *param_2 = SUB41((int)lVar8 << 1,0);
        *(undefined4 *)(param_2 + lVar8 * 4 + 4) = 0;
        return;
      }
      lVar8 = *(long *)(param_2 + 8);
      *(long *)(param_2 + 8) = lVar8 + -1;
      *(undefined4 *)(*(long *)(param_2 + 0x10) + (lVar8 + -1) * 4) = 0;
      return;
    }
    if (param_5 == '\x01') {
      uVar3 = 2;
LAB_001d93e4:
      *(undefined2 *)((long)param_1 + 1) = uVar3;
      if (bVar2) {
        return;
      }
      std::__ndk1::
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      push_back(param_2,L' ');
      return;
    }
    if (param_5 == '\0') {
      *(undefined2 *)((long)param_1 + 1) = 2;
      return;
    }
switchD_001d94fc_default:
    *param_1 = 0x4000302;
    return;
  }
  if (param_4 != '\0') goto switchD_001d94fc_default;
  if (bVar2) {
    pbVar12 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                **)(param_2 + 0x10);
    __dest = param_2 + 4;
    pbVar4 = param_2 + 4 + (ulong)((byte)*param_2 >> 1) * 4;
    pbVar10 = param_2 + 0x10;
    if (((byte)*param_2 & 1) != 0) {
      __dest = pbVar12;
      pbVar4 = pbVar12 + *(long *)(param_2 + 8) * 4;
      pbVar10 = pbVar12 + 0xc;
    }
    if (pbVar10 != pbVar4) {
      if (__dest + 4 == pbVar10) {
        uVar5 = *(undefined4 *)__dest;
        sVar1 = (long)pbVar4 - (long)pbVar10;
        if (sVar1 != 0) {
          memmove(__dest,pbVar10,sVar1);
        }
        *(undefined4 *)(__dest + sVar1) = uVar5;
      }
      else if (pbVar10 + 4 == pbVar4) {
        uVar5 = *(undefined4 *)(pbVar4 + -4);
        sVar1 = (long)(pbVar4 + -4) - (long)__dest;
        if (sVar1 != 0) {
          memmove(pbVar4 + -sVar1,__dest,sVar1);
        }
        *(undefined4 *)__dest = uVar5;
      }
      else {
        lVar6 = (long)pbVar10 - (long)__dest >> 2;
        lVar8 = (long)pbVar4 - (long)pbVar10 >> 2;
        lVar13 = lVar6;
        if (lVar6 == lVar8) {
          uVar7 = ((long)pbVar10 - (long)__dest) - 4;
          pbVar4 = pbVar10;
          if ((0x1b < uVar7) &&
             ((lVar8 = (uVar7 & 0xfffffffffffffffc) + 4, pbVar10 + lVar8 <= __dest ||
              (__dest + lVar8 <= pbVar10)))) {
            uVar7 = (uVar7 >> 2) + 1;
            uVar11 = uVar7 & 0x7ffffffffffffff8;
            pbVar4 = __dest + 0x10;
            __dest = __dest + uVar11 * 4;
            pbVar12 = pbVar10 + 0x10;
            uVar15 = uVar11;
            do {
              uVar18 = *(undefined8 *)(pbVar4 + -8);
              uVar17 = *(undefined8 *)(pbVar4 + -0x10);
              uVar23 = *(undefined8 *)(pbVar4 + 8);
              uVar22 = *(undefined8 *)pbVar4;
              uVar19 = *(undefined8 *)(pbVar12 + -0x10);
              uVar21 = *(undefined8 *)(pbVar12 + 8);
              uVar20 = *(undefined8 *)pbVar12;
              uVar15 = uVar15 - 8;
              *(undefined8 *)(pbVar4 + -8) = *(undefined8 *)(pbVar12 + -8);
              *(undefined8 *)(pbVar4 + -0x10) = uVar19;
              *(undefined8 *)(pbVar4 + 8) = uVar21;
              *(undefined8 *)pbVar4 = uVar20;
              *(undefined8 *)(pbVar12 + -8) = uVar18;
              *(undefined8 *)(pbVar12 + -0x10) = uVar17;
              *(undefined8 *)(pbVar12 + 8) = uVar23;
              *(undefined8 *)pbVar12 = uVar22;
              pbVar4 = pbVar4 + 0x20;
              pbVar12 = pbVar12 + 0x20;
            } while (uVar15 != 0);
            pbVar4 = pbVar10 + uVar11 * 4;
            if (uVar7 == uVar11) goto code_r0x001d94e4;
          }
          do {
            uVar5 = *(undefined4 *)__dest;
            pbVar12 = __dest + 4;
            *(undefined4 *)__dest = *(undefined4 *)pbVar4;
            *(undefined4 *)pbVar4 = uVar5;
            pbVar4 = pbVar4 + 4;
            __dest = pbVar12;
          } while (pbVar10 != pbVar12);
        }
        else {
          do {
            lVar9 = lVar8;
            lVar8 = 0;
            if (lVar9 != 0) {
              lVar8 = lVar13 / lVar9;
            }
            lVar8 = lVar13 - lVar8 * lVar9;
            lVar13 = lVar9;
          } while (lVar8 != 0);
          if (lVar9 != 0) {
            pbVar10 = __dest + lVar9 * 4;
            do {
              pbVar10 = pbVar10 + -4;
              uVar5 = *(undefined4 *)pbVar10;
              pbVar14 = pbVar10;
              pbVar12 = pbVar10 + lVar6 * 4;
              do {
                pbVar16 = pbVar12;
                lVar8 = (long)pbVar4 - (long)pbVar16 >> 2;
                pbVar12 = pbVar16 + lVar6 * 4;
                if (lVar8 <= lVar6) {
                  pbVar12 = __dest + (lVar6 - lVar8) * 4;
                }
                *(undefined4 *)pbVar14 = *(undefined4 *)pbVar16;
                pbVar14 = pbVar16;
              } while (pbVar12 != pbVar10);
              *(undefined4 *)pbVar16 = uVar5;
            } while (pbVar10 != __dest);
          }
        }
      }
    }
  }
code_r0x001d94e4:
  switch(param_6) {
  case 0:
    uVar5 = 0x2000403;
    goto LAB_001d9508;
  case 1:
    *(undefined1 *)param_1 = 3;
    *(undefined1 *)((long)param_1 + 3) = 2;
    if (param_5 == '\x02') {
      uVar3 = 0x401;
      goto LAB_001d9650;
    }
    if (param_5 != '\x01') {
      if (param_5 == '\0') {
        *(undefined2 *)((long)param_1 + 1) = 4;
        return;
      }
      goto switchD_001d94fc_default;
    }
    uVar3 = 4;
    break;
  case 2:
    *(undefined1 *)param_1 = 4;
    *(undefined1 *)((long)param_1 + 3) = 3;
    if (param_5 != '\x02') {
      if (param_5 == '\x01') {
        if (!bVar2) {
          std::__ndk1::
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          insert(param_2,0,1,L' ');
        }
        goto LAB_001d95fc;
      }
LAB_001d95f8:
      if (param_5 == '\0') {
LAB_001d95fc:
        *(undefined2 *)((long)param_1 + 1) = 0x200;
        return;
      }
      goto switchD_001d94fc_default;
    }
LAB_001d962c:
    uVar3 = 0x102;
LAB_001d9650:
    *(undefined2 *)((long)param_1 + 1) = uVar3;
    if (!bVar2) {
      return;
    }
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::erase
              (param_2,0,1);
    return;
  case 3:
    *(undefined1 *)param_1 = 4;
    *(undefined1 *)((long)param_1 + 3) = 2;
    if (param_5 != '\x02') {
      if (param_5 == '\x01') {
        uVar3 = 0x301;
        goto LAB_001d9650;
      }
      if (param_5 == '\0') {
        *(undefined2 *)((long)param_1 + 1) = 0x300;
        return;
      }
      goto switchD_001d94fc_default;
    }
    uVar3 = 3;
    break;
  case 4:
    *(undefined1 *)param_1 = 4;
    *(undefined1 *)((long)param_1 + 3) = 3;
    if (param_5 == '\x02') goto LAB_001d962c;
    if (param_5 != '\x01') goto LAB_001d95f8;
    uVar3 = 0x200;
    break;
  default:
    goto switchD_001d94fc_default;
  }
  *(undefined2 *)((long)param_1 + 1) = uVar3;
joined_r0x001d9674:
  if (bVar2) {
    return;
  }
  std::__ndk1::
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert
            (param_2,0,1,L' ');
  return;
}


// ===== 001d9690  std::__ndk1::moneypunct_byname<wchar_t,true>::init =====

/* std::__ndk1::moneypunct_byname<wchar_t, true>::init(char const*) */

void __thiscall
std::__ndk1::moneypunct_byname<wchar_t,true>::init
          (moneypunct_byname<wchar_t,true> *this,char *param_1)

{
  uint uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  char cVar3;
  long lVar4;
  mbstate_t *pmVar5;
  __locale_t __dataset;
  __locale_t p_Var6;
  size_t sVar7;
  mbstate_t *pmVar8;
  undefined8 uVar9;
  ulong uVar10;
  wchar_t wVar11;
  ulong uVar12;
  moneypunct_byname<wchar_t,true> *pmVar13;
  moneypunct_byname<wchar_t,true> *pmVar14;
  _union_27 *p_Var15;
  mbstate_t *pmVar16;
  ulong uVar17;
  mbstate_t *pmVar18;
  void *__dest;
  char *pcVar19;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this_00;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar20;
  mbstate_t mVar21;
  mbstate_t mVar22;
  mbstate_t mVar23;
  char *local_218;
  mbstate_t mStack_210;
  ulong local_208;
  ulong local_200;
  void *local_1f8;
  mbstate_t local_1f0 [51];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  if (__dataset == (__locale_t)0x0) {
    uVar12 = strlen(param_1);
    if (0xffffffffffffffef < uVar12) {
                    /* try { // try from 001d9ce4 to 001d9ceb has its CatchHandler @ 001d9dd4 */
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
  }
  else {
                    /* try { // try from 001d96d4 to 001d96d7 has its CatchHandler @ 001d9ea8 */
    p_Var6 = uselocale(__dataset);
                    /* try { // try from 001d96dc to 001d96df has its CatchHandler @ 001d9e74 */
    param_1 = (char *)localeconv();
    if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d96e8 to 001d96ef has its CatchHandler @ 001d9e4c */
      uselocale(p_Var6);
    }
    pcVar19 = ((lconv *)param_1)->mon_decimal_point;
    if (*pcVar19 == '\0') {
LAB_001d9748:
      wVar11 = L'\xffffffff';
    }
    else {
      local_1f0[0].__count = 0;
      local_1f0[0].__value = (_union_27)0x0;
                    /* try { // try from 001d9700 to 001d9717 has its CatchHandler @ 001d9ea8 */
      sVar7 = __strlen_chk(pcVar19,0xffffffffffffffff);
      p_Var6 = uselocale(__dataset);
                    /* try { // try from 001d971c to 001d972f has its CatchHandler @ 001d9e34 */
      sVar7 = mbrtowc((wchar_t *)&local_208,pcVar19,sVar7,local_1f0);
      if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d9738 to 001d973f has its CatchHandler @ 001d9de4 */
        uselocale(p_Var6);
      }
      if (0xfffffffffffffffd < sVar7) goto LAB_001d9748;
      wVar11 = (wchar_t)local_208;
    }
    *(wchar_t *)(this + 0x10) = wVar11;
    pcVar19 = ((lconv *)param_1)->mon_thousands_sep;
    if (*pcVar19 == '\0') {
LAB_001d97b0:
      wVar11 = L'\xffffffff';
    }
    else {
      local_1f0[0].__count = 0;
      local_1f0[0].__value = (_union_27)0x0;
                    /* try { // try from 001d9768 to 001d977f has its CatchHandler @ 001d9ea8 */
      sVar7 = __strlen_chk(pcVar19,0xffffffffffffffff);
      p_Var6 = uselocale(__dataset);
                    /* try { // try from 001d9784 to 001d9797 has its CatchHandler @ 001d9e1c */
      sVar7 = mbrtowc((wchar_t *)&local_208,pcVar19,sVar7,local_1f0);
      if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d97a0 to 001d97a7 has its CatchHandler @ 001d9de0 */
        uselocale(p_Var6);
      }
      if (0xfffffffffffffffd < sVar7) goto LAB_001d97b0;
      wVar11 = (wchar_t)local_208;
    }
    *(wchar_t *)(this + 0x14) = wVar11;
                    /* try { // try from 001d97c8 to 001d97cb has its CatchHandler @ 001d9ea8 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x18),((lconv *)param_1)->mon_grouping);
    local_218 = ((lconv *)param_1)->int_curr_symbol;
    mStack_210.__count = 0;
    mStack_210.__value = (_union_27)0x0;
                    /* try { // try from 001d97d4 to 001d97db has its CatchHandler @ 001d9e70 */
    p_Var6 = uselocale(__dataset);
                    /* try { // try from 001d97e0 to 001d97f3 has its CatchHandler @ 001d9e58 */
    sVar7 = mbsrtowcs(&local_1f0[0].__count,&local_218,100,&mStack_210);
    if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d97fc to 001d9803 has its CatchHandler @ 001d9e18 */
      uselocale(p_Var6);
    }
    if (sVar7 == 0xffffffffffffffff) {
                    /* try { // try from 001d9cec to 001d9cf7 has its CatchHandler @ 001d9e70 */
      __throw_runtime_error("locale not supported");
      goto LAB_001d9cf8;
    }
    this_00 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(this + 0x30);
    bVar2 = *this_00;
    uVar12 = (ulong)(byte)bVar2;
    if (((byte)bVar2 & 1) == 0) {
      if (4 < sVar7) {
        uVar12 = (ulong)((byte)bVar2 >> 1);
        uVar10 = 4;
LAB_001d9844:
                    /* try { // try from 001d9848 to 001d990b has its CatchHandler @ 001d9ea4 */
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by(this_00,uVar10,sVar7 - uVar10,uVar12,0,uVar12,0);
        uVar12 = (ulong)(byte)*this_00;
      }
    }
    else {
      uVar12 = *(ulong *)this_00;
      uVar10 = (uVar12 & 0xfffffffffffffffe) - 1;
      if (uVar10 < sVar7) {
        uVar12 = *(ulong *)(this + 0x38);
        goto LAB_001d9844;
      }
    }
    if ((uVar12 & 1) == 0) {
      pmVar13 = this + 0x34;
    }
    else {
      pmVar13 = *(moneypunct_byname<wchar_t,true> **)(this + 0x40);
    }
    if (sVar7 != 0) {
      uVar12 = sVar7 * 4 - 4;
      if ((uVar12 < 0x1c) ||
         ((pmVar13 < (moneypunct_byname<wchar_t,true> *)(&local_1f0[0].__count + sVar7) &&
          (local_1f0 < (mbstate_t *)(pmVar13 + sVar7 * 4))))) {
        pmVar8 = local_1f0;
        pmVar14 = pmVar13;
      }
      else {
        uVar12 = (uVar12 >> 2) + 1;
        uVar17 = uVar12 & 0x7ffffffffffffff8;
        pmVar18 = local_1f0 + 2;
        pmVar14 = pmVar13 + uVar17 * 4;
        pmVar8 = (mbstate_t *)(&local_1f0[0].__count + uVar17);
        pmVar16 = (mbstate_t *)(pmVar13 + 0x10);
        uVar10 = uVar17;
        do {
          pmVar5 = pmVar18 + -1;
          mVar21 = pmVar18[-2];
          mVar23 = pmVar18[1];
          mVar22 = *pmVar18;
          pmVar18 = pmVar18 + 4;
          uVar10 = uVar10 - 8;
          pmVar16[-1] = *pmVar5;
          pmVar16[-2] = mVar21;
          pmVar16[1] = mVar23;
          *pmVar16 = mVar22;
          pmVar16 = pmVar16 + 4;
        } while (uVar10 != 0);
        pmVar13 = pmVar14;
        if (uVar12 == uVar17) goto LAB_001d98c8;
      }
      do {
        p_Var15 = &pmVar8->__value;
        pmVar13 = pmVar14 + 4;
        *(int *)pmVar14 = pmVar8->__count;
        pmVar14 = pmVar13;
        pmVar8 = (mbstate_t *)p_Var15;
      } while ((_union_27 *)(&local_1f0[0].__count + sVar7) != p_Var15);
    }
LAB_001d98c8:
    *(int *)pmVar13 = 0;
    if (((byte)*this_00 & 1) == 0) {
      *this_00 = SUB41((int)sVar7 << 1,0);
    }
    else {
      *(size_t *)(this + 0x38) = sVar7;
    }
    uVar1 = 0;
    if ((byte)((lconv *)param_1)->int_frac_digits != 0xff) {
      uVar1 = (uint)(byte)((lconv *)param_1)->int_frac_digits;
    }
    *(uint *)(this + 0x78) = uVar1;
    if (((lconv *)param_1)->int_p_sign_posn == '\0') {
                    /* try { // try from 001d9960 to 001d9983 has its CatchHandler @ 001d9ea4 */
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)(this + 0x48),L"()");
      cVar3 = ((lconv *)param_1)->int_n_sign_posn;
joined_r0x001d9970:
      if (cVar3 == '\0') {
LAB_001d9a9c:
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        assign((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)(this + 0x60),L"()");
      }
      else {
LAB_001d9974:
        local_218 = ((lconv *)param_1)->negative_sign;
        mStack_210.__count = 0;
        mStack_210.__value = (_union_27)0x0;
        p_Var6 = uselocale(__dataset);
                    /* try { // try from 001d9988 to 001d999b has its CatchHandler @ 001d9de8 */
        sVar7 = mbsrtowcs(&local_1f0[0].__count,&local_218,100,&mStack_210);
        if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d99a4 to 001d99ab has its CatchHandler @ 001d9dd8 */
          uselocale(p_Var6);
        }
        if (sVar7 == 0xffffffffffffffff) goto LAB_001d9d08;
        pbVar20 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *)(this + 0x60);
        bVar2 = *pbVar20;
        uVar12 = (ulong)(byte)bVar2;
        if (((byte)bVar2 & 1) == 0) {
          if (4 < sVar7) {
            uVar12 = (ulong)((byte)bVar2 >> 1);
            uVar10 = 4;
LAB_001d9ac8:
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::__grow_by(pbVar20,uVar10,sVar7 - uVar10,uVar12,0,uVar12,0);
            uVar12 = (ulong)(byte)*pbVar20;
          }
        }
        else {
          uVar12 = *(ulong *)pbVar20;
          uVar10 = (uVar12 & 0xfffffffffffffffe) - 1;
          if (uVar10 < sVar7) {
            uVar12 = *(ulong *)(this + 0x68);
            goto LAB_001d9ac8;
          }
        }
        if ((uVar12 & 1) == 0) {
          pmVar13 = this + 100;
        }
        else {
          pmVar13 = *(moneypunct_byname<wchar_t,true> **)(this + 0x70);
        }
        pmVar14 = pmVar13;
        if (sVar7 != 0) {
          uVar12 = sVar7 * 4 - 4;
          if ((uVar12 < 0x1c) ||
             ((pmVar13 < (moneypunct_byname<wchar_t,true> *)(&local_1f0[0].__count + sVar7) &&
              (local_1f0 < (mbstate_t *)(pmVar13 + sVar7 * 4))))) {
            pmVar8 = local_1f0;
          }
          else {
            uVar12 = (uVar12 >> 2) + 1;
            uVar17 = uVar12 & 0x7ffffffffffffff8;
            pmVar18 = local_1f0 + 2;
            pmVar14 = pmVar13 + uVar17 * 4;
            pmVar8 = (mbstate_t *)(&local_1f0[0].__count + uVar17);
            pmVar16 = (mbstate_t *)(pmVar13 + 0x10);
            uVar10 = uVar17;
            do {
              pmVar5 = pmVar18 + -1;
              mVar21 = pmVar18[-2];
              mVar23 = pmVar18[1];
              mVar22 = *pmVar18;
              pmVar18 = pmVar18 + 4;
              uVar10 = uVar10 - 8;
              pmVar16[-1] = *pmVar5;
              pmVar16[-2] = mVar21;
              pmVar16[1] = mVar23;
              *pmVar16 = mVar22;
              pmVar16 = pmVar16 + 4;
            } while (uVar10 != 0);
            if (uVar12 == uVar17) goto LAB_001d9b4c;
          }
          pmVar13 = pmVar14;
          do {
            p_Var15 = &pmVar8->__value;
            pmVar14 = pmVar13 + 4;
            *(int *)pmVar13 = pmVar8->__count;
            pmVar13 = pmVar14;
            pmVar8 = (mbstate_t *)p_Var15;
          } while ((_union_27 *)(&local_1f0[0].__count + sVar7) != p_Var15);
        }
LAB_001d9b4c:
        *(int *)pmVar14 = 0;
        if (((byte)*pbVar20 & 1) == 0) {
          *pbVar20 = SUB41((int)sVar7 << 1,0);
        }
        else {
          *(size_t *)(this + 0x68) = sVar7;
        }
      }
                    /* try { // try from 001d9b68 to 001d9b73 has its CatchHandler @ 001d9e54 */
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      basic_string((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    *)&local_208,(basic_string_conflict *)this_00);
                    /* try { // try from 001d9b84 to 001d9bab has its CatchHandler @ 001d9e8c */
      FUN_001d9138(this + 0x7c,&local_208,1,((lconv *)param_1)->int_p_cs_precedes,
                   ((lconv *)param_1)->int_p_sep_by_space,((lconv *)param_1)->int_p_sign_posn);
      FUN_001d9138(this + 0x80,this_00,1,((lconv *)param_1)->int_n_cs_precedes,
                   ((lconv *)param_1)->int_n_sep_by_space,((lconv *)param_1)->int_n_sign_posn);
      if (((byte)local_208._0_1_ & 1) != 0) {
        operator_delete(local_1f8);
      }
                    /* try { // try from 001d9bbc to 001d9bc3 has its CatchHandler @ 001d9e50 */
      freelocale(__dataset);
      if (*(long *)(lVar4 + 0x28) == local_58) {
        return;
      }
LAB_001d9cf8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_218 = ((lconv *)param_1)->positive_sign;
    mStack_210.__count = 0;
    mStack_210.__value = (_union_27)0x0;
    p_Var6 = uselocale(__dataset);
                    /* try { // try from 001d9910 to 001d9923 has its CatchHandler @ 001d9e00 */
    sVar7 = mbsrtowcs(&local_1f0[0].__count,&local_218,100,&mStack_210);
    if (p_Var6 != (__locale_t)0x0) {
                    /* try { // try from 001d992c to 001d9933 has its CatchHandler @ 001d9ddc */
      uselocale(p_Var6);
    }
    if (sVar7 != 0xffffffffffffffff) {
      pbVar20 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 *)(this + 0x48);
      bVar2 = *pbVar20;
      uVar12 = (ulong)(byte)bVar2;
      if (((byte)bVar2 & 1) == 0) {
        if (4 < sVar7) {
          uVar12 = (ulong)((byte)bVar2 >> 1);
          uVar10 = 4;
LAB_001d99ec:
                    /* try { // try from 001d99f0 to 001d9adf has its CatchHandler @ 001d9ea4 */
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          __grow_by(pbVar20,uVar10,sVar7 - uVar10,uVar12,0,uVar12,0);
          uVar12 = (ulong)(byte)*pbVar20;
        }
      }
      else {
        uVar12 = *(ulong *)pbVar20;
        uVar10 = (uVar12 & 0xfffffffffffffffe) - 1;
        if (uVar10 < sVar7) {
          uVar12 = *(ulong *)(this + 0x50);
          goto LAB_001d99ec;
        }
      }
      if ((uVar12 & 1) == 0) {
        pmVar13 = this + 0x4c;
      }
      else {
        pmVar13 = *(moneypunct_byname<wchar_t,true> **)(this + 0x58);
      }
      pmVar14 = pmVar13;
      if (sVar7 != 0) {
        uVar12 = sVar7 * 4 - 4;
        if ((uVar12 < 0x1c) ||
           ((pmVar13 < (moneypunct_byname<wchar_t,true> *)(&local_1f0[0].__count + sVar7) &&
            (local_1f0 < (mbstate_t *)(pmVar13 + sVar7 * 4))))) {
          pmVar8 = local_1f0;
        }
        else {
          uVar12 = (uVar12 >> 2) + 1;
          uVar17 = uVar12 & 0x7ffffffffffffff8;
          pmVar18 = local_1f0 + 2;
          pmVar14 = pmVar13 + uVar17 * 4;
          pmVar8 = (mbstate_t *)(&local_1f0[0].__count + uVar17);
          pmVar16 = (mbstate_t *)(pmVar13 + 0x10);
          uVar10 = uVar17;
          do {
            pmVar5 = pmVar18 + -1;
            mVar21 = pmVar18[-2];
            mVar23 = pmVar18[1];
            mVar22 = *pmVar18;
            pmVar18 = pmVar18 + 4;
            uVar10 = uVar10 - 8;
            pmVar16[-1] = *pmVar5;
            pmVar16[-2] = mVar21;
            pmVar16[1] = mVar23;
            *pmVar16 = mVar22;
            pmVar16 = pmVar16 + 4;
          } while (uVar10 != 0);
          if (uVar12 == uVar17) goto LAB_001d9a70;
        }
        pmVar13 = pmVar14;
        do {
          p_Var15 = &pmVar8->__value;
          pmVar14 = pmVar13 + 4;
          *(int *)pmVar13 = pmVar8->__count;
          pmVar13 = pmVar14;
          pmVar8 = (mbstate_t *)p_Var15;
        } while ((_union_27 *)(&local_1f0[0].__count + sVar7) != p_Var15);
      }
LAB_001d9a70:
      *(int *)pmVar14 = 0;
      if (((byte)*pbVar20 & 1) != 0) {
        *(size_t *)(this + 0x50) = sVar7;
        cVar3 = ((lconv *)param_1)->int_n_sign_posn;
        goto joined_r0x001d9970;
      }
      *pbVar20 = SUB41((int)sVar7 << 1,0);
      if (((lconv *)param_1)->int_n_sign_posn == '\0') goto LAB_001d9a9c;
      goto LAB_001d9974;
    }
                    /* try { // try from 001d9cfc to 001d9d13 has its CatchHandler @ 001d9ea4 */
    __throw_runtime_error("locale not supported");
LAB_001d9d08:
    uVar12 = __throw_runtime_error("locale not supported");
  }
  if (uVar12 < 0x17) {
    __dest = (void *)((ulong)&local_208 | 1);
    local_208 = CONCAT71(local_208._1_7_,(char)((int)uVar12 << 1));
    if (uVar12 == 0) goto LAB_001d9d68;
  }
  else {
    uVar10 = uVar12 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001d9d40 to 001d9d47 has its CatchHandler @ 001d9dd4 */
    __dest = operator_new(uVar10);
    local_208 = uVar10 | 1;
    local_200 = uVar12;
    local_1f8 = __dest;
  }
  memcpy(__dest,param_1,uVar12);
LAB_001d9d68:
  *(undefined1 *)((long)__dest + uVar12) = 0;
                    /* try { // try from 001d9d6c to 001d9d7f has its CatchHandler @ 001d9db8 */
  pmVar8 = (mbstate_t *)
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_208,0,"moneypunct_byname failed to construct for ");
  local_1f0[2] = pmVar8[2];
  local_1f0[1] = pmVar8[1];
  local_1f0[0] = *pmVar8;
  pmVar8[1].__count = 0;
  pmVar8[1].__value = (_union_27)0x0;
  pmVar8[2].__count = 0;
  pmVar8[2].__value = (_union_27)0x0;
  pmVar8->__count = 0;
  pmVar8->__value = (_union_27)0x0;
                    /* try { // try from 001d9d98 to 001d9d9f has its CatchHandler @ 001d9da0 */
  uVar9 = FUN_001cbd58(local_1f0);
                    /* catch() { ... } // from try @ 001d9d98 with catch @ 001d9da0 */
  if (((ulong)local_1f0[0] & 1) != 0) {
    operator_delete((void *)local_1f0[2]);
  }
  if ((local_208 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00200e50(uVar9);
  }
  operator_delete(local_1f8);
                    /* WARNING: Subroutine does not return */
  FUN_00200e50(uVar9);
}


// ===== 001d9ec0  std::__ndk1::__codecvt_utf8<wchar_t>::~__codecvt_utf8 =====

/* std::__ndk1::__codecvt_utf8<wchar_t>::~__codecvt_utf8() */

void __thiscall std::__ndk1::__codecvt_utf8<wchar_t>::~__codecvt_utf8(__codecvt_utf8<wchar_t> *this)

{
  codecvt<wchar_t,char,mbstate_t>::~codecvt((codecvt<wchar_t,char,mbstate_t> *)this);
  operator_delete(this);
  return;
}


// ===== 001d9ee4  std::__ndk1::__codecvt_utf8<char16_t>::~__codecvt_utf8 =====

/* std::__ndk1::__codecvt_utf8<char16_t>::~__codecvt_utf8() */

void __thiscall
std::__ndk1::__codecvt_utf8<char16_t>::~__codecvt_utf8(__codecvt_utf8<char16_t> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001d9f08  std::__ndk1::__codecvt_utf8<char32_t>::~__codecvt_utf8 =====

/* std::__ndk1::__codecvt_utf8<char32_t>::~__codecvt_utf8() */

void __thiscall
std::__ndk1::__codecvt_utf8<char32_t>::~__codecvt_utf8(__codecvt_utf8<char32_t> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001d9f2c  std::__ndk1::__codecvt_utf16<wchar_t,false>::~__codecvt_utf16 =====

/* std::__ndk1::__codecvt_utf16<wchar_t, false>::~__codecvt_utf16() */

void __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,false>::~__codecvt_utf16(__codecvt_utf16<wchar_t,false> *this)

{
  codecvt<wchar_t,char,mbstate_t>::~codecvt((codecvt<wchar_t,char,mbstate_t> *)this);
  operator_delete(this);
  return;
}


// ===== 001d9f50  std::__ndk1::__codecvt_utf16<wchar_t,true>::~__codecvt_utf16 =====

/* std::__ndk1::__codecvt_utf16<wchar_t, true>::~__codecvt_utf16() */

void __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,true>::~__codecvt_utf16(__codecvt_utf16<wchar_t,true> *this)

{
  codecvt<wchar_t,char,mbstate_t>::~codecvt((codecvt<wchar_t,char,mbstate_t> *)this);
  operator_delete(this);
  return;
}


// ===== 001d9f74  std::__ndk1::__codecvt_utf16<char16_t,false>::~__codecvt_utf16 =====

/* std::__ndk1::__codecvt_utf16<char16_t, false>::~__codecvt_utf16() */

void __thiscall
std::__ndk1::__codecvt_utf16<char16_t,false>::~__codecvt_utf16
          (__codecvt_utf16<char16_t,false> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001d9f98  std::__ndk1::__codecvt_utf16<char16_t,true>::~__codecvt_utf16 =====

/* std::__ndk1::__codecvt_utf16<char16_t, true>::~__codecvt_utf16() */

void __thiscall
std::__ndk1::__codecvt_utf16<char16_t,true>::~__codecvt_utf16(__codecvt_utf16<char16_t,true> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001d9fbc  std::__ndk1::__codecvt_utf16<char32_t,false>::~__codecvt_utf16 =====

/* std::__ndk1::__codecvt_utf16<char32_t, false>::~__codecvt_utf16() */

void __thiscall
std::__ndk1::__codecvt_utf16<char32_t,false>::~__codecvt_utf16
          (__codecvt_utf16<char32_t,false> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001d9fe0  std::__ndk1::__codecvt_utf16<char32_t,true>::~__codecvt_utf16 =====

/* std::__ndk1::__codecvt_utf16<char32_t, true>::~__codecvt_utf16() */

void __thiscall
std::__ndk1::__codecvt_utf16<char32_t,true>::~__codecvt_utf16(__codecvt_utf16<char32_t,true> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001da004  std::__ndk1::codecvt<wchar_t,char,mbstate_t>::~codecvt =====

/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::~codecvt() */

void __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::~codecvt(codecvt<wchar_t,char,mbstate_t> *this)

{
  int iVar1;
  __locale_t p_Var2;
  
  p_Var2 = *(__locale_t *)(this + 0x10);
  *(undefined **)this = PTR_vtable_0020f9c0 + 0x10;
  if (((DAT_00214ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214ea0), iVar1 != 0)) {
                    /* try { // try from 001da078 to 001da08b has its CatchHandler @ 001da0a0 */
    DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_00214ea0);
  }
  if (p_Var2 != DAT_00214e98) {
                    /* try { // try from 001da050 to 001da053 has its CatchHandler @ 001da0b4 */
    freelocale(*(__locale_t *)(this + 0x10));
  }
  __shared_count::~__shared_count((__shared_count *)this);
  return;
}


// ===== 001da0c8  std::__ndk1::__codecvt_utf8_utf16<wchar_t>::~__codecvt_utf8_utf16 =====

/* std::__ndk1::__codecvt_utf8_utf16<wchar_t>::~__codecvt_utf8_utf16() */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<wchar_t>::~__codecvt_utf8_utf16
          (__codecvt_utf8_utf16<wchar_t> *this)

{
  codecvt<wchar_t,char,mbstate_t>::~codecvt((codecvt<wchar_t,char,mbstate_t> *)this);
  operator_delete(this);
  return;
}


// ===== 001da0ec  std::__ndk1::__codecvt_utf8_utf16<char32_t>::~__codecvt_utf8_utf16 =====

/* std::__ndk1::__codecvt_utf8_utf16<char32_t>::~__codecvt_utf8_utf16() */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<char32_t>::~__codecvt_utf8_utf16
          (__codecvt_utf8_utf16<char32_t> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001da110  std::__ndk1::__codecvt_utf8_utf16<char16_t>::~__codecvt_utf8_utf16 =====

/* std::__ndk1::__codecvt_utf8_utf16<char16_t>::~__codecvt_utf8_utf16() */

void __thiscall
std::__ndk1::__codecvt_utf8_utf16<char16_t>::~__codecvt_utf8_utf16
          (__codecvt_utf8_utf16<char16_t> *this)

{
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001da134  FUN_001da134 =====

void FUN_001da134(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da158  FUN_001da158 =====

void FUN_001da158(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da17c  FUN_001da17c =====

void FUN_001da17c(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da1a0  FUN_001da1a0 =====

void FUN_001da1a0(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da1c4  std::__ndk1::__shared_count::~__shared_count =====

void __thiscall std::__ndk1::__shared_count::~__shared_count(__shared_count *this)

{
  (*(code *)PTR____shared_count_00210238)();
  return;
}


// ===== 001da1c8  FUN_001da1c8 =====

void FUN_001da1c8(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da1ec  std::__ndk1::__shared_count::~__shared_count =====

void __thiscall std::__ndk1::__shared_count::~__shared_count(__shared_count *this)

{
  (*(code *)PTR____shared_count_00210238)();
  return;
}


// ===== 001da1f0  FUN_001da1f0 =====

void FUN_001da1f0(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da214  FUN_001da214 =====

void FUN_001da214(__shared_count *param_1)

{
  FUN_001dc2a4(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 001da23c  FUN_001da23c =====

void FUN_001da23c(__shared_count *param_1)

{
  FUN_001dc2a4(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da26c  FUN_001da26c =====

void FUN_001da26c(long param_1)

{
  std::__ndk1::__time_get_storage<char>::__do_date_order
            ((__time_get_storage<char> *)(param_1 + 0x18));
  return;
}


// ===== 001da274  FUN_001da274 =====

long FUN_001da274(long param_1)

{
  return param_1 + 0x20;
}


// ===== 001da27c  FUN_001da27c =====

long FUN_001da27c(long param_1)

{
  return param_1 + 0x170;
}


// ===== 001da284  FUN_001da284 =====

long FUN_001da284(long param_1)

{
  return param_1 + 0x3b0;
}


// ===== 001da28c  FUN_001da28c =====

long FUN_001da28c(long param_1)

{
  return param_1 + 0x3e0;
}


// ===== 001da294  FUN_001da294 =====

long FUN_001da294(long param_1)

{
  return param_1 + 0x3f8;
}


// ===== 001da29c  FUN_001da29c =====

long FUN_001da29c(long param_1)

{
  return param_1 + 0x410;
}


// ===== 001da2a4  FUN_001da2a4 =====

long FUN_001da2a4(long param_1)

{
  return param_1 + 0x428;
}


// ===== 001da2ac  FUN_001da2ac =====

long FUN_001da2ac(long param_1)

{
  return param_1 + 0x10;
}


// ===== 001da2b4  FUN_001da2b4 =====

long FUN_001da2b4(long param_1)

{
  return param_1 + 0x160;
}


// ===== 001da2bc  FUN_001da2bc =====

long FUN_001da2bc(long param_1)

{
  return param_1 + 0x3a0;
}


// ===== 001da2c4  FUN_001da2c4 =====

long FUN_001da2c4(long param_1)

{
  return param_1 + 0x3d0;
}


// ===== 001da2cc  FUN_001da2cc =====

long FUN_001da2cc(long param_1)

{
  return param_1 + 1000;
}


// ===== 001da2d4  FUN_001da2d4 =====

long FUN_001da2d4(long param_1)

{
  return param_1 + 0x400;
}


// ===== 001da2dc  FUN_001da2dc =====

long FUN_001da2dc(long param_1)

{
  return param_1 + 0x418;
}


// ===== 001da2e4  FUN_001da2e4 =====

void FUN_001da2e4(__shared_count *param_1)

{
  FUN_001dc4cc(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 001da30c  FUN_001da30c =====

void FUN_001da30c(__shared_count *param_1)

{
  FUN_001dc4cc(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da33c  FUN_001da33c =====

void FUN_001da33c(long param_1)

{
  std::__ndk1::__time_get_storage<wchar_t>::__do_date_order
            ((__time_get_storage<wchar_t> *)(param_1 + 0x18));
  return;
}


// ===== 001da344  FUN_001da344 =====

long FUN_001da344(long param_1)

{
  return param_1 + 0x20;
}


// ===== 001da34c  FUN_001da34c =====

long FUN_001da34c(long param_1)

{
  return param_1 + 0x170;
}


// ===== 001da354  FUN_001da354 =====

long FUN_001da354(long param_1)

{
  return param_1 + 0x3b0;
}


// ===== 001da35c  FUN_001da35c =====

long FUN_001da35c(long param_1)

{
  return param_1 + 0x3e0;
}


// ===== 001da364  FUN_001da364 =====

long FUN_001da364(long param_1)

{
  return param_1 + 0x3f8;
}


// ===== 001da36c  FUN_001da36c =====

long FUN_001da36c(long param_1)

{
  return param_1 + 0x410;
}


// ===== 001da374  FUN_001da374 =====

long FUN_001da374(long param_1)

{
  return param_1 + 0x428;
}


// ===== 001da37c  FUN_001da37c =====

long FUN_001da37c(long param_1)

{
  return param_1 + 0x10;
}


// ===== 001da384  FUN_001da384 =====

long FUN_001da384(long param_1)

{
  return param_1 + 0x160;
}


// ===== 001da38c  FUN_001da38c =====

long FUN_001da38c(long param_1)

{
  return param_1 + 0x3a0;
}


// ===== 001da394  FUN_001da394 =====

long FUN_001da394(long param_1)

{
  return param_1 + 0x3d0;
}


// ===== 001da39c  FUN_001da39c =====

long FUN_001da39c(long param_1)

{
  return param_1 + 1000;
}


// ===== 001da3a4  FUN_001da3a4 =====

long FUN_001da3a4(long param_1)

{
  return param_1 + 0x400;
}


// ===== 001da3ac  FUN_001da3ac =====

long FUN_001da3ac(long param_1)

{
  return param_1 + 0x418;
}


// ===== 001da3b4  FUN_001da3b4 =====

void FUN_001da3b4(__shared_count *param_1)

{
  std::__ndk1::__time_put::~__time_put((__time_put *)(param_1 + 0x10));
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da3e4  FUN_001da3e4 =====

void FUN_001da3e4(__shared_count *param_1)

{
  std::__ndk1::__time_put::~__time_put((__time_put *)(param_1 + 0x10));
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 001da40c  FUN_001da40c =====

void FUN_001da40c(__shared_count *param_1)

{
  std::__ndk1::__time_put::~__time_put((__time_put *)(param_1 + 0x10));
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da43c  FUN_001da43c =====

void FUN_001da43c(__shared_count *param_1)

{
  std::__ndk1::__time_put::~__time_put((__time_put *)(param_1 + 0x10));
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 001da464  FUN_001da464 =====

void FUN_001da464(__shared_count *param_1)

{
  std::__ndk1::__time_put::~__time_put((__time_put *)(param_1 + 0x10));
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da494  FUN_001da494 =====

void FUN_001da494(__shared_count *param_1)

{
  std::__ndk1::__time_put::~__time_put((__time_put *)(param_1 + 0x10));
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da4c4  FUN_001da4c4 =====

void FUN_001da4c4(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da4e8  FUN_001da4e8 =====

void FUN_001da4e8(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da50c  FUN_001da50c =====

void FUN_001da50c(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da530  std::__ndk1::codecvt<char16_t,char,mbstate_t>::~codecvt =====

/* std::__ndk1::codecvt<char16_t, char, mbstate_t>::~codecvt() */

void __thiscall
std::__ndk1::codecvt<char16_t,char,mbstate_t>::~codecvt(codecvt<char16_t,char,mbstate_t> *this)

{
  (*(code *)PTR____shared_count_00210238)();
  return;
}


// ===== 001da534  FUN_001da534 =====

void FUN_001da534(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da558  FUN_001da558 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001da558(__shared_count *param_1)

{
  __shared_count _Var1;
  
  *(undefined **)param_1 = PTR_vtable_0020fb38 + 0x10;
  if (((byte)param_1[0x60] & 1) == 0) {
    _Var1 = param_1[0x48];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x70));
    _Var1 = param_1[0x48];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    _Var1 = param_1[0x30];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    _Var1 = param_1[0x18];
  }
  if (((byte)_Var1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 001da5e4  FUN_001da5e4 =====

void FUN_001da5e4(void *param_1)

{
  FUN_001da558();
  operator_delete(param_1);
  return;
}


// ===== 001da608  FUN_001da608 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001da608(__shared_count *param_1)

{
  __shared_count _Var1;
  
  *(undefined **)param_1 = PTR_vtable_0020fb40 + 0x10;
  if (((byte)param_1[0x60] & 1) == 0) {
    _Var1 = param_1[0x48];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x70));
    _Var1 = param_1[0x48];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    _Var1 = param_1[0x30];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    _Var1 = param_1[0x18];
  }
  if (((byte)_Var1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 001da694  FUN_001da694 =====

void FUN_001da694(void *param_1)

{
  FUN_001da608();
  operator_delete(param_1);
  return;
}


// ===== 001da6b8  FUN_001da6b8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001da6b8(__shared_count *param_1)

{
  __shared_count _Var1;
  
  *(undefined **)param_1 = PTR_vtable_0020fb48 + 0x10;
  if (((byte)param_1[0x60] & 1) == 0) {
    _Var1 = param_1[0x48];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x70));
    _Var1 = param_1[0x48];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    _Var1 = param_1[0x30];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    _Var1 = param_1[0x18];
  }
  if (((byte)_Var1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 001da744  FUN_001da744 =====

void FUN_001da744(void *param_1)

{
  FUN_001da6b8();
  operator_delete(param_1);
  return;
}


// ===== 001da768  FUN_001da768 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001da768(__shared_count *param_1)

{
  __shared_count _Var1;
  
  *(undefined **)param_1 = PTR_vtable_0020fb50 + 0x10;
  if (((byte)param_1[0x60] & 1) == 0) {
    _Var1 = param_1[0x48];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x70));
    _Var1 = param_1[0x48];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = param_1[0x30];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x58));
    _Var1 = param_1[0x30];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = param_1[0x18];
  }
  else {
    operator_delete(*(void **)(param_1 + 0x40));
    _Var1 = param_1[0x18];
  }
  if (((byte)_Var1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 001da7f4  FUN_001da7f4 =====

void FUN_001da7f4(void *param_1)

{
  FUN_001da768();
  operator_delete(param_1);
  return;
}


// ===== 001da818  FUN_001da818 =====

void FUN_001da818(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da83c  FUN_001da83c =====

void FUN_001da83c(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da860  FUN_001da860 =====

void FUN_001da860(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da884  FUN_001da884 =====

void FUN_001da884(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da8a8  FUN_001da8a8 =====

void FUN_001da8a8(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da8cc  FUN_001da8cc =====

void FUN_001da8cc(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da8f0  FUN_001da8f0 =====

void FUN_001da8f0(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da914  FUN_001da914 =====

void FUN_001da914(__shared_count *param_1)

{
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001da938  FUN_001da938 =====

void FUN_001da938(void)

{
  if ((DAT_002151f8 & 1) != 0) {
    operator_delete(DAT_00215208);
  }
  if ((DAT_002151e0 & 1) != 0) {
    operator_delete(DAT_002151f0);
  }
  if ((DAT_002151c8 & 1) != 0) {
    operator_delete(DAT_002151d8);
  }
  if ((DAT_002151b0 & 1) != 0) {
    operator_delete(DAT_002151c0);
  }
  if ((DAT_00215198 & 1) != 0) {
    operator_delete(DAT_002151a8);
  }
  if ((DAT_00215180 & 1) != 0) {
    operator_delete(DAT_00215190);
  }
  if ((DAT_00215168 & 1) != 0) {
    operator_delete(DAT_00215178);
  }
  if ((DAT_00215150 & 1) != 0) {
    operator_delete(DAT_00215160);
  }
  if ((DAT_00215138 & 1) != 0) {
    operator_delete(DAT_00215148);
  }
  if ((DAT_00215120 & 1) != 0) {
    operator_delete(DAT_00215130);
  }
  if ((DAT_00215108 & 1) != 0) {
    operator_delete(DAT_00215118);
  }
  if ((DAT_002150f0 & 1) != 0) {
    operator_delete(DAT_00215100);
  }
  if ((DAT_002150d8 & 1) != 0) {
    operator_delete(DAT_002150e8);
  }
  if ((DAT_002150c0 & 1) == 0) {
    return;
  }
  operator_delete(DAT_002150d0);
  return;
}


// ===== 001daa9c  FUN_001daa9c =====

void FUN_001daa9c(void)

{
  if ((DAT_00215350 & 1) != 0) {
    operator_delete(DAT_00215360);
  }
  if ((DAT_00215338 & 1) != 0) {
    operator_delete(DAT_00215348);
  }
  if ((DAT_00215320 & 1) != 0) {
    operator_delete(DAT_00215330);
  }
  if ((DAT_00215308 & 1) != 0) {
    operator_delete(DAT_00215318);
  }
  if ((DAT_002152f0 & 1) != 0) {
    operator_delete(DAT_00215300);
  }
  if ((DAT_002152d8 & 1) != 0) {
    operator_delete(DAT_002152e8);
  }
  if ((DAT_002152c0 & 1) != 0) {
    operator_delete(DAT_002152d0);
  }
  if ((DAT_002152a8 & 1) != 0) {
    operator_delete(DAT_002152b8);
  }
  if ((DAT_00215290 & 1) != 0) {
    operator_delete(DAT_002152a0);
  }
  if ((DAT_00215278 & 1) != 0) {
    operator_delete(DAT_00215288);
  }
  if ((DAT_00215260 & 1) != 0) {
    operator_delete(DAT_00215270);
  }
  if ((DAT_00215248 & 1) != 0) {
    operator_delete(DAT_00215258);
  }
  if ((DAT_00215230 & 1) != 0) {
    operator_delete(DAT_00215240);
  }
  if ((DAT_00215218 & 1) == 0) {
    return;
  }
  operator_delete(DAT_00215228);
  return;
}


// ===== 001dac00  FUN_001dac00 =====

void FUN_001dac00(void)

{
  long lVar1;
  
  lVar1 = 0x240;
  do {
    if (((&DAT_00215358)[lVar1] & 1) != 0) {
      operator_delete(*(void **)(&DAT_00215368 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}


// ===== 001dac48  FUN_001dac48 =====

void FUN_001dac48(void)

{
  long lVar1;
  
  lVar1 = 0x240;
  do {
    if ((*(byte *)(lVar1 + 0x2155a0) & 1) != 0) {
      operator_delete(*(void **)(&DAT_002155b0 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}


// ===== 001dac90  FUN_001dac90 =====

void FUN_001dac90(void)

{
  if ((DAT_00215818 & 1) != 0) {
    operator_delete(DAT_00215828);
  }
  if ((DAT_00215800 & 1) == 0) {
    return;
  }
  operator_delete(DAT_00215810);
  return;
}


// ===== 001dacd4  FUN_001dacd4 =====

void FUN_001dacd4(void)

{
  if ((DAT_00215850 & 1) != 0) {
    operator_delete(DAT_00215860);
  }
  if ((DAT_00215838 & 1) == 0) {
    return;
  }
  operator_delete(DAT_00215848);
  return;
}


// ===== 001dad18  FUN_001dad18 =====

void FUN_001dad18(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 001dad34 to 001dad3b has its CatchHandler @ 001dad54 */
  FUN_001dad68(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_PTR_0020fb98,PTR__domain_error_0020fba0);
}


// ===== 001dad68  FUN_001dad68 =====

void FUN_001dad68(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_0020fba8 + 0x10;
  return;
}


// ===== 001dad98  FUN_001dad98 =====

void FUN_001dad98(undefined8 *param_1,void *param_2,void *param_3)

{
  void *__src;
  long lVar1;
  void *__dest;
  size_t sVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = param_1[2];
  puVar3 = (undefined8 *)*param_1;
  sVar2 = (long)param_3 - (long)param_2;
  uVar4 = (long)sVar2 >> 3;
  if (uVar4 <= (ulong)(lVar1 - (long)puVar3 >> 3)) {
    uVar5 = param_1[1] - (long)puVar3 >> 3;
    __src = (void *)((long)param_2 + (param_1[1] - (long)puVar3));
    if (uVar4 <= uVar5) {
      __src = param_3;
    }
    sVar2 = (long)__src - (long)param_2;
    if (sVar2 != 0) {
      memmove(puVar3,param_2,sVar2);
    }
    if (uVar5 < uVar4) {
      __dest = (void *)param_1[1];
      sVar2 = (long)param_3 - (long)__src;
      if (0 < (long)sVar2) {
        memcpy(__dest,__src,sVar2);
        __dest = (void *)((long)__dest + sVar2);
      }
      param_1[1] = __dest;
    }
    else {
      param_1[1] = (long)puVar3 + sVar2;
    }
    return;
  }
  if (puVar3 != (undefined8 *)0x0) {
    param_1[1] = puVar3;
    if (puVar3 == param_1 + 4) {
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    else {
      operator_delete(puVar3);
    }
    lVar1 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (uVar4 >> 0x3d == 0) {
    if (uVar4 <= (ulong)(lVar1 >> 2)) {
      uVar4 = lVar1 >> 2;
    }
    if (0xffffffffffffffe < (ulong)(lVar1 >> 3)) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 >> 0x3d == 0) {
      if ((uVar4 < 0x1d) && (*(char *)(param_1 + 0x20) == '\0')) {
        puVar3 = param_1 + 4;
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      else {
        puVar3 = (undefined8 *)operator_new(uVar4 << 3);
      }
      *param_1 = puVar3;
      param_1[1] = puVar3;
      param_1[2] = puVar3 + uVar4;
      if (0 < (long)sVar2) {
        memcpy(puVar3,param_2,sVar2);
        puVar3 = (undefined8 *)((long)puVar3 + sVar2);
      }
      param_1[1] = puVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


// ===== 001daf1c  FUN_001daf1c =====

void FUN_001daf1c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *__s;
  void *__s_00;
  void *pvVar2;
  long *plVar3;
  long *__src;
  size_t __n;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  __s_00 = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)__s_00 >> 3) < param_2) {
    lVar6 = (long)__s_00 - *param_1 >> 3;
    uVar1 = lVar6 + param_2;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1;
    uVar5 = lVar4 >> 2;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      plVar3 = (long *)0x0;
    }
    else if ((uVar1 < 0x1d) && ((char)param_1[0x20] == '\0')) {
      *(undefined1 *)(param_1 + 0x20) = 1;
      plVar3 = param_1 + 4;
    }
    else {
      plVar3 = (long *)operator_new(uVar1 << 3);
    }
    __s = plVar3 + lVar6;
    memset(__s,0,param_2 * 8);
    __src = (long *)*param_1;
    __n = param_1[1] - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)__s - __n),__src,__n);
      __src = (long *)*param_1;
    }
    *param_1 = (long)((long)__s - __n);
    param_1[1] = (long)(__s + param_2);
    param_1[2] = (long)(plVar3 + uVar1);
    if (__src != (long *)0x0) {
      if (__src != param_1 + 4) {
        operator_delete(__src);
        return;
      }
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
  }
  else {
    pvVar2 = __s_00;
    if (param_2 != 0) {
      pvVar2 = (void *)((long)__s_00 + param_2 * 8);
      memset(__s_00,0,param_2 * 8);
    }
    param_1[1] = (long)pvVar2;
  }
  return;
}


// ===== 001db064  FUN_001db064 =====

void FUN_001db064(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  
  plVar1 = *(long **)*param_1;
  UNRECOVERED_JUMPTABLE = (code *)plVar1[1];
  if ((plVar1[2] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*plVar1 + (plVar1[2] >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x001db084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ===== 001db088  FUN_001db088 =====

void FUN_001db088(__shared_count *param_1)

{
  *(undefined **)param_1 = PTR_vtable_0020fb80 + 0x10;
                    /* try { // try from 001db0ac to 001db0af has its CatchHandler @ 001db0ec */
  freelocale(*(__locale_t *)(param_1 + 0x20));
  *(undefined **)param_1 = PTR_vtable_0020f9a8 + 0x10;
  if ((*(void **)(param_1 + 0x10) != (void *)0x0) && (param_1[0x18] != (__shared_count)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x10));
  }
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001db100  FUN_001db100 =====

void FUN_001db100(__shared_count *param_1)

{
  *(undefined **)param_1 = PTR_vtable_0020fb88 + 0x10;
                    /* try { // try from 001db124 to 001db127 has its CatchHandler @ 001db140 */
  freelocale(*(__locale_t *)(param_1 + 0x10));
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001db154  FUN_001db154 =====

void FUN_001db154(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 != param_2) {
    piVar4 = (int *)__errno();
    iVar1 = *piVar4;
    *piVar4 = 0;
    if (((DAT_00214ea0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_00214ea0), iVar3 != 0)) {
                    /* try { // try from 001db258 to 001db26b has its CatchHandler @ 001db284 */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
    lVar5 = strtoll_l(param_1,&local_60,param_4,DAT_00214e98);
    lVar6 = lVar5;
    if (*piVar4 == 0) {
      *piVar4 = iVar1;
      if (local_60 == param_2) goto LAB_001db21c;
    }
    else if (local_60 == param_2) {
      if (*piVar4 == 0x22) {
        *param_3 = 4;
        lVar6 = 0x7fffffffffffffff;
        if (lVar5 < 1) {
          lVar6 = -0x8000000000000000;
        }
      }
      goto LAB_001db21c;
    }
  }
  *param_3 = 4;
  lVar6 = 0;
LAB_001db21c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar6);
  }
  return;
}


// ===== 001db29c  FUN_001db29c =====

void FUN_001db29c(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 != param_2) {
    piVar4 = (int *)__errno();
    iVar1 = *piVar4;
    *piVar4 = 0;
    if (((DAT_00214ea0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_00214ea0), iVar3 != 0)) {
                    /* try { // try from 001db3a0 to 001db3b3 has its CatchHandler @ 001db3cc */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
    lVar5 = strtoll_l(param_1,&local_60,param_4,DAT_00214e98);
    lVar6 = lVar5;
    if (*piVar4 == 0) {
      *piVar4 = iVar1;
      if (local_60 == param_2) goto LAB_001db364;
    }
    else if (local_60 == param_2) {
      if (*piVar4 == 0x22) {
        *param_3 = 4;
        lVar6 = 0x7fffffffffffffff;
        if (lVar5 < 1) {
          lVar6 = -0x8000000000000000;
        }
      }
      goto LAB_001db364;
    }
  }
  *param_3 = 4;
  lVar6 = 0;
LAB_001db364:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar6);
  }
  return;
}


// ===== 001db3e4  FUN_001db3e4 =====

void FUN_001db3e4(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((param_1 == param_2) ||
     ((cVar1 = *param_1, cVar1 == '-' && (param_1 = param_1 + 1, param_1 == param_2)))) {
LAB_001db4b8:
    *param_3 = 4;
    iVar3 = 0;
  }
  else {
    piVar5 = (int *)__errno();
    iVar3 = *piVar5;
    *piVar5 = 0;
    if (((DAT_00214ea0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00214ea0), iVar4 != 0)) {
                    /* try { // try from 001db51c to 001db52f has its CatchHandler @ 001db548 */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
    uVar6 = strtoull_l(param_1,&local_70,param_4,DAT_00214e98);
    if (*piVar5 == 0) {
      *piVar5 = iVar3;
      if (local_70 != param_2) goto LAB_001db4b8;
      if (0xffff < uVar6) goto LAB_001db4fc;
    }
    else {
      if (local_70 != param_2) goto LAB_001db4b8;
      if ((uVar6 >> 0x10 != 0) || (*piVar5 == 0x22)) {
LAB_001db4fc:
        *param_3 = 4;
        iVar3 = 0xffff;
        goto LAB_001db4c4;
      }
    }
    iVar3 = -(int)uVar6;
    if (cVar1 != '-') {
      iVar3 = (int)uVar6;
    }
  }
LAB_001db4c4:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}


// ===== 001db560  FUN_001db560 =====

void FUN_001db560(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((param_1 == param_2) ||
     ((cVar1 = *param_1, cVar1 == '-' && (param_1 = param_1 + 1, param_1 == param_2)))) {
LAB_001db634:
    *param_3 = 4;
    iVar3 = 0;
  }
  else {
    piVar5 = (int *)__errno();
    iVar3 = *piVar5;
    *piVar5 = 0;
    if (((DAT_00214ea0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00214ea0), iVar4 != 0)) {
                    /* try { // try from 001db698 to 001db6ab has its CatchHandler @ 001db6c4 */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
    uVar6 = strtoull_l(param_1,&local_70,param_4,DAT_00214e98);
    if (*piVar5 == 0) {
      *piVar5 = iVar3;
      if (local_70 != param_2) goto LAB_001db634;
      if (uVar6 >> 0x20 != 0) goto LAB_001db678;
    }
    else {
      if (local_70 != param_2) goto LAB_001db634;
      if ((uVar6 >> 0x20 != 0) || (*piVar5 == 0x22)) {
LAB_001db678:
        *param_3 = 4;
        iVar3 = -1;
        goto LAB_001db640;
      }
    }
    iVar3 = -(int)uVar6;
    if (cVar1 != '-') {
      iVar3 = (int)uVar6;
    }
  }
LAB_001db640:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}


// ===== 001db6dc  FUN_001db6dc =====

void FUN_001db6dc(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((param_1 == param_2) ||
     ((cVar2 = *param_1, cVar2 == '-' && (param_1 = param_1 + 1, param_1 == param_2)))) {
LAB_001db7ac:
    *param_3 = 4;
    uVar7 = 0;
  }
  else {
    piVar5 = (int *)__errno();
    iVar1 = *piVar5;
    *piVar5 = 0;
    if (((DAT_00214ea0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00214ea0), iVar4 != 0)) {
                    /* try { // try from 001db804 to 001db817 has its CatchHandler @ 001db830 */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
    uVar6 = strtoull_l(param_1,&local_70,param_4,DAT_00214e98);
    if (*piVar5 == 0) {
      *piVar5 = iVar1;
      if (local_70 != param_2) goto LAB_001db7ac;
    }
    else {
      if (local_70 != param_2) goto LAB_001db7ac;
      if (*piVar5 == 0x22) {
        *param_3 = 4;
        uVar7 = 0xffffffffffffffff;
        goto LAB_001db7b8;
      }
    }
    uVar7 = -uVar6;
    if (cVar2 != '-') {
      uVar7 = uVar6;
    }
  }
LAB_001db7b8:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


// ===== 001db848  FUN_001db848 =====

void FUN_001db848(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((param_1 == param_2) ||
     ((cVar2 = *param_1, cVar2 == '-' && (param_1 = param_1 + 1, param_1 == param_2)))) {
LAB_001db918:
    *param_3 = 4;
    uVar7 = 0;
  }
  else {
    piVar5 = (int *)__errno();
    iVar1 = *piVar5;
    *piVar5 = 0;
    if (((DAT_00214ea0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00214ea0), iVar4 != 0)) {
                    /* try { // try from 001db970 to 001db983 has its CatchHandler @ 001db99c */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
    uVar6 = strtoull_l(param_1,&local_70,param_4,DAT_00214e98);
    if (*piVar5 == 0) {
      *piVar5 = iVar1;
      if (local_70 != param_2) goto LAB_001db918;
    }
    else {
      if (local_70 != param_2) goto LAB_001db918;
      if (*piVar5 == 0x22) {
        *param_3 = 4;
        uVar7 = 0xffffffffffffffff;
        goto LAB_001db924;
      }
    }
    uVar7 = -uVar6;
    if (cVar2 != '-') {
      uVar7 = uVar6;
    }
  }
LAB_001db924:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


// ===== 001db9b4  FUN_001db9b4 =====

void FUN_001db9b4(char *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == param_2) {
LAB_001dba4c:
    fVar5 = 0.0;
  }
  else {
    piVar4 = (int *)__errno();
    iVar1 = *piVar4;
    *piVar4 = 0;
    if (((DAT_00214ea0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_00214ea0), iVar3 != 0)) {
                    /* try { // try from 001dba90 to 001dbaa3 has its CatchHandler @ 001dbac0 */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
    fVar5 = strtof(param_1,&local_50);
    if (*piVar4 == 0) {
      *piVar4 = iVar1;
      if (local_50 == param_2) goto LAB_001dba58;
      goto LAB_001dba4c;
    }
    if (local_50 != param_2) goto LAB_001dba4c;
    if (*piVar4 != 0x22) goto LAB_001dba58;
  }
  *param_3 = 4;
LAB_001dba58:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar5);
  }
  return;
}


// ===== 001dbad8  FUN_001dbad8 =====

void FUN_001dbad8(char *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == param_2) {
LAB_001dbb70:
    dVar5 = 0.0;
  }
  else {
    piVar4 = (int *)__errno();
    iVar1 = *piVar4;
    *piVar4 = 0;
    if (((DAT_00214ea0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_00214ea0), iVar3 != 0)) {
                    /* try { // try from 001dbbb4 to 001dbbc7 has its CatchHandler @ 001dbbe4 */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
    dVar5 = strtod(param_1,&local_50);
    if (*piVar4 == 0) {
      *piVar4 = iVar1;
      if (local_50 == param_2) goto LAB_001dbb7c;
      goto LAB_001dbb70;
    }
    if (local_50 != param_2) goto LAB_001dbb70;
    if (*piVar4 != 0x22) goto LAB_001dbb7c;
  }
  *param_3 = 4;
LAB_001dbb7c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(dVar5);
  }
  return;
}


// ===== 001dbbfc  FUN_001dbbfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001dbbfc(char *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  double dVar3;
  int iVar4;
  int *piVar5;
  double dVar6;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  dVar3 = _DAT_00146230;
  if (param_1 != param_2) {
    piVar5 = (int *)__errno();
    iVar1 = *piVar5;
    *piVar5 = 0;
    if (((DAT_00214ea0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_00214ea0), iVar4 != 0)) {
                    /* try { // try from 001dbce8 to 001dbcfb has its CatchHandler @ 001dbd14 */
      DAT_00214e98 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_00214ea0);
    }
    dVar6 = strtold_l(param_1,&local_60,DAT_00214e98);
    if (*piVar5 == 0) {
      *piVar5 = iVar1;
      dVar3 = _DAT_00146230;
      if (local_60 == param_2) goto LAB_001dbcac;
    }
    else {
      dVar3 = _DAT_00146230;
      if ((local_60 == param_2) && (dVar3 = dVar6, *piVar5 != 0x22)) goto LAB_001dbcac;
    }
  }
  dVar6 = dVar3;
  *param_3 = 4;
LAB_001dbcac:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(dVar6);
  }
  return;
}


// ===== 001dbd2c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__append_forward_unsafe<char*> =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__append_forward_unsafe<char*>(char*, char*) */

basic_string_conflict * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__append_forward_unsafe<char*>
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,char *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  char *pcVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_60;
  ulong local_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  bVar1 = *this;
  uVar7 = (ulong)(byte)bVar1;
  uVar13 = (long)param_2 - (long)param_1;
  if (((byte)bVar1 & 1) == 0) {
    if (uVar13 == 0) goto LAB_001dbf70;
    uVar12 = (ulong)((byte)bVar1 >> 1);
    pbVar11 = this + 1;
    uVar6 = 0x16;
  }
  else {
    if (uVar13 == 0) goto LAB_001dbf70;
    uVar7 = *(ulong *)this;
    uVar12 = *(ulong *)(this + 8);
    pbVar11 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x10);
    uVar6 = (uVar7 & 0xfffffffffffffffe) - 1;
  }
  if ((pbVar11 <= param_1) && (param_1 < pbVar11 + uVar12)) {
    if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    if (uVar13 < 0x17) {
      local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar13 << 1));
      pcVar4 = (char *)((ulong)&local_60 | 1);
    }
    else {
      uVar7 = uVar13 + 0x10 & 0xfffffffffffffff0;
      pcVar4 = (char *)operator_new(uVar7);
      local_60 = uVar7 | 1;
      local_58 = uVar13;
      local_50 = pcVar4;
    }
    if (param_1 != param_2) {
      pcVar5 = pcVar4;
      if (0x1f < uVar13) {
        uVar12 = uVar13 & 0xffffffffffffffe0;
        pcVar5 = pcVar4 + 0x10;
        pcVar4 = pcVar4 + uVar12;
        pcVar10 = param_1 + 0x10;
        uVar7 = uVar12;
        do {
          pcVar3 = pcVar10 + -8;
          uVar14 = *(undefined8 *)(pcVar10 + -0x10);
          uVar16 = *(undefined8 *)(pcVar10 + 8);
          uVar15 = *(undefined8 *)pcVar10;
          uVar7 = uVar7 - 0x20;
          pcVar10 = pcVar10 + 0x20;
          *(undefined8 *)(pcVar5 + -8) = *(undefined8 *)pcVar3;
          *(undefined8 *)(pcVar5 + -0x10) = uVar14;
          *(undefined8 *)(pcVar5 + 8) = uVar16;
          *(undefined8 *)pcVar5 = uVar15;
          pcVar5 = pcVar5 + 0x20;
        } while (uVar7 != 0);
        pcVar5 = pcVar4;
        param_1 = param_1 + uVar12;
        if (uVar13 == uVar12) goto LAB_001dbf34;
      }
      do {
        pcVar10 = param_1 + 1;
        pcVar4 = pcVar5 + 1;
        *pcVar5 = *param_1;
        pcVar5 = pcVar4;
        param_1 = pcVar10;
      } while (param_2 != pcVar10);
    }
LAB_001dbf34:
    *pcVar4 = '\0';
    uVar7 = local_60 >> 1 & 0x7f;
    pcVar4 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      uVar7 = local_58;
      pcVar4 = local_50;
    }
                    /* try { // try from 001dbf58 to 001dbf5f has its CatchHandler @ 001dbfa8 */
    append(this,pcVar4,uVar7);
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    goto LAB_001dbf70;
  }
  if (uVar6 - uVar12 < uVar13) {
    __grow_by(this,uVar6,(uVar13 + uVar12) - uVar6,uVar12,uVar12,0,0);
    uVar7 = (ulong)(byte)*this;
  }
  if ((uVar7 & 1) == 0) {
    pbVar11 = this + 1;
  }
  else {
    pbVar11 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x10);
  }
  pbVar9 = pbVar11 + uVar12;
  if (param_1 != param_2) {
    pbVar8 = pbVar9;
    if ((0x1f < uVar13) &&
       ((param_2 <= pbVar9 || (pbVar11 + (long)(param_2 + (uVar12 - (long)param_1)) <= param_1)))) {
      uVar6 = uVar13 & 0xffffffffffffffe0;
      pcVar4 = param_1 + 0x10;
      pbVar9 = pbVar9 + uVar6;
      pbVar11 = pbVar11 + uVar12 + 0x10;
      uVar7 = uVar6;
      do {
        pcVar5 = pcVar4 + -8;
        uVar14 = *(undefined8 *)(pcVar4 + -0x10);
        uVar16 = *(undefined8 *)(pcVar4 + 8);
        uVar15 = *(undefined8 *)pcVar4;
        pcVar4 = pcVar4 + 0x20;
        uVar7 = uVar7 - 0x20;
        *(undefined8 *)(pbVar11 + -8) = *(undefined8 *)pcVar5;
        *(undefined8 *)(pbVar11 + -0x10) = uVar14;
        *(undefined8 *)(pbVar11 + 8) = uVar16;
        *(undefined8 *)pbVar11 = uVar15;
        pbVar11 = pbVar11 + 0x20;
      } while (uVar7 != 0);
      pbVar8 = pbVar9;
      param_1 = (char *)(param_1 + uVar6);
      if (uVar13 == uVar6) goto LAB_001dbe94;
    }
    do {
      pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_1 + 1;
      pbVar9 = pbVar8 + 1;
      *pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                *param_1;
      pbVar8 = pbVar9;
      param_1 = (char *)pbVar11;
    } while ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_2 != pbVar11);
  }
LAB_001dbe94:
  *pbVar9 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)(uVar13 + uVar12) << 1,0);
  }
  else {
    *(ulong *)(this + 8) = uVar13 + uVar12;
  }
LAB_001dbf70:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (basic_string_conflict *)this;
}


// ===== 001dbfc4  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::__append_forward_unsafe<wchar_t*> =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >& std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t>
   >::__append_forward_unsafe<wchar_t*>(wchar_t*, wchar_t*) */

basic_string_conflict * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__append_forward_unsafe<wchar_t*>
          (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
           *this,wchar_t *param_1,wchar_t *param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar1;
  long lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  ulong uVar6;
  ulong uVar7;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar8;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar9;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar10;
  wchar_t *pwVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_70;
  ulong local_68;
  wchar_t *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  bVar1 = *this;
  uVar7 = (ulong)(byte)bVar1;
  uVar14 = (long)param_2 - (long)param_1;
  if (((byte)bVar1 & 1) == 0) {
    if (uVar14 == 0) goto LAB_001dc240;
    uVar12 = (ulong)((byte)bVar1 >> 1);
    pbVar10 = this + 4;
    uVar6 = 4;
  }
  else {
    if (uVar14 == 0) goto LAB_001dc240;
    uVar7 = *(ulong *)this;
    uVar12 = *(ulong *)(this + 8);
    pbVar10 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                **)(this + 0x10);
    uVar6 = (uVar7 & 0xfffffffffffffffe) - 1;
  }
  uVar13 = (long)uVar14 >> 2;
  if ((param_1 < pbVar10) || (pbVar10 + uVar12 * 4 <= param_1)) {
    if (uVar6 - uVar12 < uVar13) {
      __grow_by(this,uVar6,(uVar13 + uVar12) - uVar6,uVar12,uVar12,0,0);
      uVar7 = (ulong)(byte)*this;
    }
    if ((uVar7 & 1) == 0) {
      pbVar10 = this + 4;
    }
    else {
      pbVar10 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  **)(this + 0x10);
    }
    pbVar9 = pbVar10 + uVar12 * 4;
    if (param_1 != param_2) {
      pbVar8 = pbVar9;
      if ((0x1b < uVar14 - 4) &&
         ((uVar7 = uVar14 - 4 >> 2,
          (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *
          )(param_1 + uVar7 + 1) <= pbVar9 || (pbVar10 + (uVar12 + uVar7) * 4 + 4 <= param_1)))) {
        uVar6 = uVar7 + 1 & 0x7ffffffffffffff8;
        pwVar4 = param_1 + 4;
        pbVar9 = pbVar9 + uVar6 * 4;
        pbVar10 = pbVar10 + uVar12 * 4 + 0x10;
        uVar14 = uVar6;
        do {
          pwVar5 = pwVar4 + -2;
          uVar15 = *(undefined8 *)(pwVar4 + -4);
          uVar17 = *(undefined8 *)(pwVar4 + 2);
          uVar16 = *(undefined8 *)pwVar4;
          pwVar4 = pwVar4 + 8;
          uVar14 = uVar14 - 8;
          *(undefined8 *)(pbVar10 + -8) = *(undefined8 *)pwVar5;
          *(undefined8 *)(pbVar10 + -0x10) = uVar15;
          *(undefined8 *)(pbVar10 + 8) = uVar17;
          *(undefined8 *)pbVar10 = uVar16;
          pbVar10 = pbVar10 + 0x20;
        } while (uVar14 != 0);
        pbVar8 = pbVar9;
        param_1 = param_1 + uVar6;
        if (uVar7 + 1 == uVar6) goto LAB_001dc14c;
      }
      do {
        pwVar4 = param_1 + 1;
        pbVar9 = pbVar8 + 4;
        *(wchar_t *)pbVar8 = *param_1;
        pbVar8 = pbVar9;
        param_1 = pwVar4;
      } while (param_2 != pwVar4);
    }
LAB_001dc14c:
    *(undefined4 *)pbVar9 = 0;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)(uVar13 + uVar12) << 1,0);
    }
    else {
      *(ulong *)(this + 8) = uVar13 + uVar12;
    }
    goto LAB_001dc240;
  }
  if (0x3fffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar13 < 5) {
    local_70 = CONCAT71(local_70._1_7_,(char)(uVar14 >> 1)) & 0xfffffffffffffffe;
    pwVar4 = (wchar_t *)((ulong)&local_70 | 4);
  }
  else {
    if (uVar13 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar7 = uVar13 + 4 & 0xfffffffffffffffc;
    pwVar4 = (wchar_t *)operator_new(uVar7 << 2);
    local_70 = uVar7 | 1;
    local_68 = uVar13;
    local_60 = pwVar4;
  }
  if (param_1 != param_2) {
    pwVar5 = pwVar4;
    if (0x1b < uVar14 - 4) {
      uVar7 = (uVar14 - 4 >> 2) + 1;
      uVar12 = uVar7 & 0x7ffffffffffffff8;
      pwVar5 = pwVar4 + 4;
      pwVar4 = pwVar4 + uVar12;
      pwVar11 = param_1 + 4;
      uVar14 = uVar12;
      do {
        pwVar3 = pwVar11 + -2;
        uVar15 = *(undefined8 *)(pwVar11 + -4);
        uVar17 = *(undefined8 *)(pwVar11 + 2);
        uVar16 = *(undefined8 *)pwVar11;
        uVar14 = uVar14 - 8;
        pwVar11 = pwVar11 + 8;
        *(undefined8 *)(pwVar5 + -2) = *(undefined8 *)pwVar3;
        *(undefined8 *)(pwVar5 + -4) = uVar15;
        *(undefined8 *)(pwVar5 + 2) = uVar17;
        *(undefined8 *)pwVar5 = uVar16;
        pwVar5 = pwVar5 + 8;
      } while (uVar14 != 0);
      pwVar5 = pwVar4;
      param_1 = param_1 + uVar12;
      if (uVar7 == uVar12) goto LAB_001dc204;
    }
    do {
      pwVar11 = param_1 + 1;
      pwVar4 = pwVar5 + 1;
      *pwVar5 = *param_1;
      pwVar5 = pwVar4;
      param_1 = pwVar11;
    } while (param_2 != pwVar11);
  }
LAB_001dc204:
  *pwVar4 = L'\0';
  uVar7 = local_70 >> 1 & 0x7f;
  pwVar4 = (wchar_t *)((ulong)&local_70 | 4);
  if ((local_70 & 1) != 0) {
    uVar7 = local_68;
    pwVar4 = local_60;
  }
                    /* try { // try from 001dc228 to 001dc22f has its CatchHandler @ 001dc288 */
  append(this,pwVar4,uVar7);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_001dc240:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (basic_string_conflict *)this;
}


// ===== 001dc2a4  FUN_001dc2a4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001dc2a4(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x82) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7f);
  }
  else {
    operator_delete((void *)param_1[0x84]);
    bVar1 = *(byte *)(param_1 + 0x7f);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7c);
  }
  else {
    operator_delete((void *)param_1[0x81]);
    bVar1 = *(byte *)(param_1 + 0x7c);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x79);
  }
  else {
    operator_delete((void *)param_1[0x7e]);
    bVar1 = *(byte *)(param_1 + 0x79);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x76);
  }
  else {
    operator_delete((void *)param_1[0x7b]);
    bVar1 = *(byte *)(param_1 + 0x76);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x73);
  }
  else {
    operator_delete((void *)param_1[0x78]);
    bVar1 = *(byte *)(param_1 + 0x73);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[0x75]);
  }
  lVar2 = 0x240;
  do {
    if ((*(byte *)((long)param_1 + lVar2 + 0x140) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar2 + 0x150));
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != 0);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x25);
  }
  else {
    operator_delete((void *)param_1[0x2a]);
    bVar1 = *(byte *)(param_1 + 0x25);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x22);
  }
  else {
    operator_delete((void *)param_1[0x27]);
    bVar1 = *(byte *)(param_1 + 0x22);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x1f);
  }
  else {
    operator_delete((void *)param_1[0x24]);
    bVar1 = *(byte *)(param_1 + 0x1f);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x1c);
  }
  else {
    operator_delete((void *)param_1[0x21]);
    bVar1 = *(byte *)(param_1 + 0x1c);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x19);
  }
  else {
    operator_delete((void *)param_1[0x1e]);
    bVar1 = *(byte *)(param_1 + 0x19);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x16);
  }
  else {
    operator_delete((void *)param_1[0x1b]);
    bVar1 = *(byte *)(param_1 + 0x16);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x13);
  }
  else {
    operator_delete((void *)param_1[0x18]);
    bVar1 = *(byte *)(param_1 + 0x13);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  else {
    operator_delete((void *)param_1[0x15]);
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xd);
  }
  else {
    operator_delete((void *)param_1[0x12]);
    bVar1 = *(byte *)(param_1 + 0xd);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    operator_delete((void *)param_1[0xf]);
    bVar1 = *(byte *)(param_1 + 10);
  }
  if ((bVar1 & 1) == 0) {
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
                    /* try { // try from 001dc390 to 001dc393 has its CatchHandler @ 001dc4c8 */
  freelocale((__locale_t)*param_1);
  return;
}


// ===== 001dc4cc  FUN_001dc4cc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_001dc4cc(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x82) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7f);
  }
  else {
    operator_delete((void *)param_1[0x84]);
    bVar1 = *(byte *)(param_1 + 0x7f);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7c);
  }
  else {
    operator_delete((void *)param_1[0x81]);
    bVar1 = *(byte *)(param_1 + 0x7c);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x79);
  }
  else {
    operator_delete((void *)param_1[0x7e]);
    bVar1 = *(byte *)(param_1 + 0x79);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x76);
  }
  else {
    operator_delete((void *)param_1[0x7b]);
    bVar1 = *(byte *)(param_1 + 0x76);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x73);
  }
  else {
    operator_delete((void *)param_1[0x78]);
    bVar1 = *(byte *)(param_1 + 0x73);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete((void *)param_1[0x75]);
  }
  lVar2 = 0x240;
  do {
    if ((*(byte *)((long)param_1 + lVar2 + 0x140) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar2 + 0x150));
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != 0);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x25);
  }
  else {
    operator_delete((void *)param_1[0x2a]);
    bVar1 = *(byte *)(param_1 + 0x25);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x22);
  }
  else {
    operator_delete((void *)param_1[0x27]);
    bVar1 = *(byte *)(param_1 + 0x22);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x1f);
  }
  else {
    operator_delete((void *)param_1[0x24]);
    bVar1 = *(byte *)(param_1 + 0x1f);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x1c);
  }
  else {
    operator_delete((void *)param_1[0x21]);
    bVar1 = *(byte *)(param_1 + 0x1c);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x19);
  }
  else {
    operator_delete((void *)param_1[0x1e]);
    bVar1 = *(byte *)(param_1 + 0x19);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x16);
  }
  else {
    operator_delete((void *)param_1[0x1b]);
    bVar1 = *(byte *)(param_1 + 0x16);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x13);
  }
  else {
    operator_delete((void *)param_1[0x18]);
    bVar1 = *(byte *)(param_1 + 0x13);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  else {
    operator_delete((void *)param_1[0x15]);
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xd);
  }
  else {
    operator_delete((void *)param_1[0x12]);
    bVar1 = *(byte *)(param_1 + 0xd);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    operator_delete((void *)param_1[0xf]);
    bVar1 = *(byte *)(param_1 + 10);
  }
  if ((bVar1 & 1) == 0) {
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
                    /* try { // try from 001dc5b8 to 001dc5bb has its CatchHandler @ 001dc6f0 */
  freelocale((__locale_t)*param_1);
  return;
}


// ===== 001dc6f4  std::__ndk1::bad_weak_ptr::~bad_weak_ptr =====

/* std::__ndk1::bad_weak_ptr::~bad_weak_ptr() */

void __thiscall std::__ndk1::bad_weak_ptr::~bad_weak_ptr(bad_weak_ptr *this)

{
  (*(code *)PTR__exception_002106f0)();
  return;
}


// ===== 001dc6f8  std::__ndk1::bad_weak_ptr::~bad_weak_ptr =====

/* std::__ndk1::bad_weak_ptr::~bad_weak_ptr() */

void __thiscall std::__ndk1::bad_weak_ptr::~bad_weak_ptr(bad_weak_ptr *this)

{
  exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


// ===== 001dc71c  std::__ndk1::bad_weak_ptr::what =====

/* std::__ndk1::bad_weak_ptr::what() const */

char * std::__ndk1::bad_weak_ptr::what(void)

{
  return "bad_weak_ptr";
}


// ===== 001dc728  std::__ndk1::__shared_count::~__shared_count =====

/* std::__ndk1::__shared_count::~__shared_count() */

void __thiscall std::__ndk1::__shared_count::~__shared_count(__shared_count *this)

{
  return;
}


// ===== 001dc72c  std::__ndk1::__shared_count::~__shared_count =====

/* std::__ndk1::__shared_count::~__shared_count() */

void __thiscall std::__ndk1::__shared_count::~__shared_count(__shared_count *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1dc730);
  (*pcVar1)();
}


// ===== 001dc730  std::__ndk1::__shared_weak_count::~__shared_weak_count =====

/* std::__ndk1::__shared_weak_count::~__shared_weak_count() */

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1dc734);
  (*pcVar1)();
}


// ===== 001dc734  std::__ndk1::__shared_count::__add_shared =====

/* std::__ndk1::__shared_count::__add_shared() */

void __thiscall std::__ndk1::__shared_count::__add_shared(__shared_count *this)

{
  __shared_count *p_Var1;
  char cVar2;
  bool bVar3;
  
  p_Var1 = this + 8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
    if (bVar3) {
      *(long *)p_Var1 = *(long *)p_Var1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 001dc74c  std::__ndk1::__shared_count::__release_shared =====

/* std::__ndk1::__shared_count::__release_shared() */

undefined8 __thiscall std::__ndk1::__shared_count::__release_shared(__shared_count *this)

{
  __shared_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
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
  if (lVar4 != 0) {
    return 0;
  }
  (**(code **)(*(long *)this + 0x10))();
  return 1;
}


// ===== 001dc790  std::__ndk1::__shared_weak_count::__add_shared =====

/* std::__ndk1::__shared_weak_count::__add_shared() */

void __thiscall std::__ndk1::__shared_weak_count::__add_shared(__shared_weak_count *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  
  p_Var1 = this + 8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
    if (bVar3) {
      *(long *)p_Var1 = *(long *)p_Var1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 001dc7a8  std::__ndk1::__shared_weak_count::__add_weak =====

/* std::__ndk1::__shared_weak_count::__add_weak() */

void __thiscall std::__ndk1::__shared_weak_count::__add_weak(__shared_weak_count *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  
  p_Var1 = this + 0x10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
    if (bVar3) {
      *(long *)p_Var1 = *(long *)p_Var1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


// ===== 001dc7c0  std::__ndk1::__shared_weak_count::__release_shared =====

/* std::__ndk1::__shared_weak_count::__release_shared() */

void __thiscall std::__ndk1::__shared_weak_count::__release_shared(__shared_weak_count *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  __shared_weak_count *p_Var4;
  
  p_Var4 = this + 8;
  do {
    lVar3 = *(long *)p_Var4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(p_Var4,0x10);
    if (bVar2) {
      *(long *)p_Var4 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 != 0) {
    return;
  }
  p_Var4 = this + 0x10;
  (**(code **)(*(long *)this + 0x10))(this);
  if (*(long *)p_Var4 != 0) {
    do {
      lVar3 = *(long *)p_Var4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(p_Var4,0x10);
      if (bVar2) {
        *(long *)p_Var4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001dc838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x20))(this);
  return;
}


// ===== 001dc83c  std::__ndk1::__shared_weak_count::__release_weak =====

/* std::__ndk1::__shared_weak_count::__release_weak() */

void __thiscall std::__ndk1::__shared_weak_count::__release_weak(__shared_weak_count *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  p_Var1 = this + 0x10;
  if (*(long *)p_Var1 != 0) {
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001dc868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x20))();
  return;
}


// ===== 001dc86c  std::__ndk1::__shared_weak_count::lock =====

/* std::__ndk1::__shared_weak_count::lock() */

__shared_weak_count * __thiscall std::__ndk1::__shared_weak_count::lock(__shared_weak_count *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  p_Var1 = this + 8;
  lVar4 = *(long *)p_Var1;
  do {
    if (lVar4 == -1) {
      return (__shared_weak_count *)0x0;
    }
    lVar5 = *(long *)p_Var1;
    if (lVar5 == lVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_001dc8a0;
      bVar3 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001dc8a0:
      bVar3 = false;
    }
    lVar4 = lVar5;
    if (bVar3) {
      return this;
    }
  } while( true );
}


// ===== 001dc8bc  std::__ndk1::__shared_weak_count::__get_deleter =====

/* std::__ndk1::__shared_weak_count::__get_deleter(std::type_info const&) const */

undefined8 std::__ndk1::__shared_weak_count::__get_deleter(type_info *param_1)

{
  return 0;
}


// ===== 001dc8c4  std::__ndk1::__sp_mut::lock =====

/* std::__ndk1::__sp_mut::lock() */

int __thiscall std::__ndk1::__sp_mut::lock(__sp_mut *this)

{
  int iVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  
  __mutex = *(pthread_mutex_t **)this;
  iVar2 = 0x11;
  while( true ) {
                    /* try { // try from 001dc8d8 to 001dc8df has its CatchHandler @ 001dc910 */
    iVar1 = pthread_mutex_trylock(__mutex);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
                    /* try { // try from 001dc8ec to 001dc8ef has its CatchHandler @ 001dc90c */
    sched_yield();
  }
                    /* try { // try from 001dc8f4 to 001dc8fb has its CatchHandler @ 001dc908 */
  iVar2 = pthread_mutex_lock(__mutex);
  return iVar2;
}


// ===== 001dc914  std::__ndk1::__sp_mut::unlock =====

/* std::__ndk1::__sp_mut::unlock() */

int __thiscall std::__ndk1::__sp_mut::unlock(__sp_mut *this)

{
  int iVar1;
  
                    /* try { // try from 001dc920 to 001dc923 has its CatchHandler @ 001dc92c */
  iVar1 = pthread_mutex_unlock(*(pthread_mutex_t **)this);
  return iVar1;
}


// ===== 001dc930  std::__ndk1::__get_sp_mut =====

/* std::__ndk1::__get_sp_mut(void const*) */

int std::__ndk1::__get_sp_mut(void *param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  lVar1 = (uVar2 ^ (ulong)param_1 >> 0x20 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
  return (((uint)((ulong)lVar1 >> 0x2f) ^ (uint)lVar1) * 0x2d69 & 0xf) * 8 + 0x214a48;
}


// ===== 001dc988  std::__ndk1::declare_reachable =====

/* std::__ndk1::declare_reachable(void*) */

void std::__ndk1::declare_reachable(void *param_1)

{
  return;
}


// ===== 001dc98c  std::__ndk1::declare_no_pointers =====

/* std::__ndk1::declare_no_pointers(char*, unsigned long) */

void std::__ndk1::declare_no_pointers(char *param_1,ulong param_2)

{
  return;
}


// ===== 001dc990  std::__ndk1::undeclare_no_pointers =====

/* std::__ndk1::undeclare_no_pointers(char*, unsigned long) */

void std::__ndk1::undeclare_no_pointers(char *param_1,ulong param_2)

{
  return;
}


// ===== 001dc994  std::__ndk1::get_pointer_safety =====

/* std::__ndk1::get_pointer_safety() */

undefined8 std::__ndk1::get_pointer_safety(void)

{
  return 0;
}


// ===== 001dc99c  std::__ndk1::__undeclare_reachable =====

/* std::__ndk1::__undeclare_reachable(void*) */

void std::__ndk1::__undeclare_reachable(void *param_1)

{
  return;
}


// ===== 001dc9a0  std::__ndk1::align =====

/* std::__ndk1::align(unsigned long, unsigned long, void*&, unsigned long&) */

void * std::__ndk1::align(ulong param_1,ulong param_2,void **param_3,ulong *param_4)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  
  uVar2 = *param_4;
  if (uVar2 < param_2) {
    return (void *)0x0;
  }
  pvVar3 = (void *)((long)*param_3 + (param_1 - 1) & -param_1);
  uVar4 = (long)pvVar3 - (long)*param_3;
  pvVar1 = (void *)0x0;
  if (uVar4 <= uVar2 - param_2) {
    *param_3 = pvVar3;
    *param_4 = uVar2 - uVar4;
    pvVar1 = pvVar3;
  }
  return pvVar1;
}


// ===== 001dc9ec  std::__ndk1::mutex::lock =====

/* std::__ndk1::mutex::lock() */

void __thiscall std::__ndk1::mutex::lock(mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"mutex lock failed");
}


// ===== 001dca10  std::__ndk1::mutex::try_lock =====

/* std::__ndk1::mutex::try_lock() */

bool __thiscall std::__ndk1::mutex::try_lock(mutex *this)

{
  int iVar1;
  
                    /* try { // try from 001dca18 to 001dca1b has its CatchHandler @ 001dca2c */
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  return iVar1 == 0;
}


// ===== 001dca30  std::__ndk1::mutex::unlock =====

/* std::__ndk1::mutex::unlock() */

int __thiscall std::__ndk1::mutex::unlock(mutex *this)

{
  int iVar1;
  
                    /* try { // try from 001dca38 to 001dca3b has its CatchHandler @ 001dca44 */
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)this);
  return iVar1;
}


// ===== 001dca48  std::__ndk1::recursive_mutex::recursive_mutex =====

/* std::__ndk1::recursive_mutex::recursive_mutex() */

void __thiscall std::__ndk1::recursive_mutex::recursive_mutex(recursive_mutex *this)

{
  long lVar1;
  int iVar2;
  int local_44;
  pthread_mutexattr_t apStack_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_44 = pthread_mutexattr_init(apStack_40);
  if (local_44 == 0) {
    local_44 = pthread_mutexattr_settype(apStack_40,1);
    if (local_44 == 0) {
      local_44 = pthread_mutex_init((pthread_mutex_t *)this,apStack_40);
      iVar2 = pthread_mutexattr_destroy(apStack_40);
      if (local_44 == 0) {
        if (iVar2 == 0) {
          if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        pthread_mutex_destroy((pthread_mutex_t *)this);
        local_44 = iVar2;
      }
    }
    else {
      pthread_mutexattr_destroy(apStack_40);
    }
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(local_44,"recursive_mutex constructor failed");
}


// ===== 001dcb0c  std::__ndk1::recursive_mutex::~recursive_mutex =====

/* std::__ndk1::recursive_mutex::~recursive_mutex() */

int __thiscall std::__ndk1::recursive_mutex::~recursive_mutex(recursive_mutex *this)

{
  int iVar1;
  
                    /* try { // try from 001dcb14 to 001dcb17 has its CatchHandler @ 001dcb20 */
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)this);
  return iVar1;
}


// ===== 001dcb24  std::__ndk1::recursive_mutex::lock =====

/* std::__ndk1::recursive_mutex::lock() */

void __thiscall std::__ndk1::recursive_mutex::lock(recursive_mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"recursive_mutex lock failed");
}


// ===== 001dcb48  std::__ndk1::recursive_mutex::unlock =====

/* std::__ndk1::recursive_mutex::unlock() */

int __thiscall std::__ndk1::recursive_mutex::unlock(recursive_mutex *this)

{
  int iVar1;
  
                    /* try { // try from 001dcb50 to 001dcb53 has its CatchHandler @ 001dcb5c */
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)this);
  return iVar1;
}


// ===== 001dcb60  std::__ndk1::recursive_mutex::try_lock =====

/* std::__ndk1::recursive_mutex::try_lock() */

bool __thiscall std::__ndk1::recursive_mutex::try_lock(recursive_mutex *this)

{
  int iVar1;
  
                    /* try { // try from 001dcb68 to 001dcb6b has its CatchHandler @ 001dcb7c */
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  return iVar1 == 0;
}


// ===== 001dcb80  std::__ndk1::timed_mutex::timed_mutex =====

/* std::__ndk1::timed_mutex::timed_mutex() */

void __thiscall std::__ndk1::timed_mutex::timed_mutex(timed_mutex *this)

{
  *(undefined8 *)(this + 0x51) = 0;
  *(undefined8 *)(this + 0x49) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  return;
}


// ===== 001dcb98  std::__ndk1::timed_mutex::~timed_mutex =====

/* std::__ndk1::timed_mutex::~timed_mutex() */

void __thiscall std::__ndk1::timed_mutex::~timed_mutex(timed_mutex *this)

{
  int iVar1;
  
                    /* try { // try from 001dcba8 to 001dcbab has its CatchHandler @ 001dcbdc */
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
                    /* try { // try from 001dcbb0 to 001dcbb7 has its CatchHandler @ 001dcbf8 */
    pthread_mutex_unlock((pthread_mutex_t *)this);
    condition_variable::~condition_variable((condition_variable *)(this + 0x28));
    mutex::~mutex((mutex *)this);
    return;
  }
                    /* try { // try from 001dcbd0 to 001dcbdb has its CatchHandler @ 001dcbdc */
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"mutex lock failed");
}


// ===== 001dcbfc  std::__ndk1::timed_mutex::lock =====

/* std::__ndk1::timed_mutex::lock() */

void __thiscall std::__ndk1::timed_mutex::lock(timed_mutex *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  pthread_mutex_t *local_48;
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = '\x01';
  local_48 = (pthread_mutex_t *)this;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(iVar2,"mutex lock failed");
  }
  if (this[0x58] == (timed_mutex)0x0) {
    this[0x58] = (timed_mutex)0x1;
  }
  else {
    do {
      uVar4 = condition_variable::wait((condition_variable *)(this + 0x28),(unique_lock *)&local_48)
      ;
    } while (this[0x58] != (timed_mutex)0x0);
    this[0x58] = (timed_mutex)0x1;
    if (local_40 == '\0') goto LAB_001dcc78;
  }
                    /* try { // try from 001dcc74 to 001dcc77 has its CatchHandler @ 001dccac */
  uVar3 = pthread_mutex_unlock(local_48);
  uVar4 = (ulong)uVar3;
LAB_001dcc78:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 001dccb0  std::__ndk1::timed_mutex::try_lock =====

/* std::__ndk1::timed_mutex::try_lock() */

bool __thiscall std::__ndk1::timed_mutex::try_lock(timed_mutex *this)

{
  int iVar1;
  bool bVar2;
  
                    /* try { // try from 001dccc0 to 001dccc3 has its CatchHandler @ 001dcd04 */
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
    bVar2 = this[0x58] == (timed_mutex)0x0;
    if (bVar2) {
      this[0x58] = (timed_mutex)0x1;
    }
                    /* try { // try from 001dcce8 to 001dccef has its CatchHandler @ 001dcd00 */
    pthread_mutex_unlock((pthread_mutex_t *)this);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


// ===== 001dcd08  std::__ndk1::timed_mutex::unlock =====

/* std::__ndk1::timed_mutex::unlock() */

int __thiscall std::__ndk1::timed_mutex::unlock(timed_mutex *this)

{
  int iVar1;
  
                    /* try { // try from 001dcd18 to 001dcd1b has its CatchHandler @ 001dcd4c */
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
    this[0x58] = (timed_mutex)0x0;
    condition_variable::notify_one((condition_variable *)(this + 0x28));
                    /* try { // try from 001dcd2c to 001dcd33 has its CatchHandler @ 001dcd50 */
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)this);
    return iVar1;
  }
                    /* try { // try from 001dcd40 to 001dcd4b has its CatchHandler @ 001dcd4c */
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"mutex lock failed");
}


// ===== 001dcd54  std::__ndk1::recursive_timed_mutex::recursive_timed_mutex =====

/* std::__ndk1::recursive_timed_mutex::recursive_timed_mutex() */

void __thiscall
std::__ndk1::recursive_timed_mutex::recursive_timed_mutex(recursive_timed_mutex *this)

{
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


// ===== 001dcd6c  std::__ndk1::recursive_timed_mutex::~recursive_timed_mutex =====

/* std::__ndk1::recursive_timed_mutex::~recursive_timed_mutex() */

void __thiscall
std::__ndk1::recursive_timed_mutex::~recursive_timed_mutex(recursive_timed_mutex *this)

{
  int iVar1;
  
                    /* try { // try from 001dcd7c to 001dcd7f has its CatchHandler @ 001dcdb0 */
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
                    /* try { // try from 001dcd84 to 001dcd8b has its CatchHandler @ 001dcdcc */
    pthread_mutex_unlock((pthread_mutex_t *)this);
    condition_variable::~condition_variable((condition_variable *)(this + 0x28));
    mutex::~mutex((mutex *)this);
    return;
  }
                    /* try { // try from 001dcda4 to 001dcdaf has its CatchHandler @ 001dcdb0 */
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"mutex lock failed");
}


// ===== 001dcdd0  std::__ndk1::recursive_timed_mutex::lock =====

/* std::__ndk1::recursive_timed_mutex::lock() */

void __thiscall std::__ndk1::recursive_timed_mutex::lock(recursive_timed_mutex *this)

{
  long lVar1;
  uint uVar2;
  pthread_t __thread1;
  ulong uVar3;
  pthread_t __thread2;
  pthread_mutex_t *local_48;
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __thread1 = pthread_self();
  local_40 = '\x01';
  local_48 = (pthread_mutex_t *)this;
  uVar2 = pthread_mutex_lock((pthread_mutex_t *)this);
  uVar3 = (ulong)uVar2;
  if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(uVar2,"mutex lock failed");
  }
  __thread2 = *(pthread_t *)(this + 0x60);
  if ((__thread1 == 0) || (__thread2 == 0)) {
    if (__thread2 != 0 || __thread1 != 0) goto LAB_001dce54;
  }
  else {
                    /* try { // try from 001dce20 to 001dce27 has its CatchHandler @ 001dcef0 */
    uVar2 = pthread_equal(__thread1,__thread2);
    uVar3 = (ulong)uVar2;
    if (uVar2 == 0) {
LAB_001dce54:
      if (*(long *)(this + 0x58) != 0) {
        do {
          uVar3 = condition_variable::wait
                            ((condition_variable *)(this + 0x28),(unique_lock *)&local_48);
        } while (*(long *)(this + 0x58) != 0);
      }
      *(undefined8 *)(this + 0x58) = 1;
      *(pthread_t *)(this + 0x60) = __thread1;
      goto joined_r0x001dce44;
    }
  }
  if (*(long *)(this + 0x58) == -1) {
                    /* try { // try from 001dcec0 to 001dcecf has its CatchHandler @ 001dced0 */
                    /* WARNING: Subroutine does not return */
    __throw_system_error(0xb,"recursive_timed_mutex lock limit reached");
  }
  *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
joined_r0x001dce44:
  if (local_40 != '\0') {
                    /* try { // try from 001dce88 to 001dce8b has its CatchHandler @ 001dcef4 */
    uVar2 = pthread_mutex_unlock(local_48);
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 001dcef8  std::__ndk1::recursive_timed_mutex::try_lock =====

/* std::__ndk1::recursive_timed_mutex::try_lock() */

undefined4 __thiscall std::__ndk1::recursive_timed_mutex::try_lock(recursive_timed_mutex *this)

{
  int iVar1;
  pthread_t __thread1;
  pthread_t __thread2;
  long lVar2;
  undefined4 uVar3;
  
  __thread1 = pthread_self();
                    /* try { // try from 001dcf10 to 001dcf17 has its CatchHandler @ 001dcf90 */
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  if (iVar1 != 0) {
    return 0;
  }
  lVar2 = *(long *)(this + 0x58);
  if (lVar2 == 0) {
LAB_001dcf5c:
    *(long *)(this + 0x58) = lVar2 + 1;
    *(pthread_t *)(this + 0x60) = __thread1;
    uVar3 = 1;
  }
  else {
    __thread2 = *(pthread_t *)(this + 0x60);
    if ((__thread1 == 0) || (__thread2 == 0)) {
      if (__thread2 == 0 && __thread1 == 0) goto LAB_001dcf54;
    }
    else {
                    /* try { // try from 001dcf38 to 001dcf3f has its CatchHandler @ 001dcf88 */
      iVar1 = pthread_equal(__thread1,__thread2);
      if (iVar1 != 0) {
        lVar2 = *(long *)(this + 0x58);
LAB_001dcf54:
        if (lVar2 != -1) goto LAB_001dcf5c;
      }
    }
    uVar3 = 0;
  }
                    /* try { // try from 001dcf70 to 001dcf77 has its CatchHandler @ 001dcf8c */
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return uVar3;
}


// ===== 001dcf94  std::__ndk1::recursive_timed_mutex::unlock =====

/* std::__ndk1::recursive_timed_mutex::unlock() */

ulong __thiscall std::__ndk1::recursive_timed_mutex::unlock(recursive_timed_mutex *this)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
                    /* try { // try from 001dcfa4 to 001dcfa7 has its CatchHandler @ 001dd000 */
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 != 0) {
                    /* try { // try from 001dcfec to 001dcff7 has its CatchHandler @ 001dd000 */
                    /* WARNING: Subroutine does not return */
    __throw_system_error(iVar1,"mutex lock failed");
  }
  lVar4 = *(long *)(this + 0x58);
  *(long *)(this + 0x58) = lVar4 + -1;
  if (lVar4 + -1 != 0) {
                    /* try { // try from 001dcfbc to 001dcfc3 has its CatchHandler @ 001dcffc */
    uVar2 = pthread_mutex_unlock((pthread_mutex_t *)this);
    return (ulong)uVar2;
  }
  *(undefined8 *)(this + 0x60) = 0;
                    /* try { // try from 001dcfd4 to 001dcfdb has its CatchHandler @ 001dcff8 */
  pthread_mutex_unlock((pthread_mutex_t *)this);
  uVar3 = condition_variable::notify_one((condition_variable *)(this + 0x28));
  return uVar3;
}


// ===== 001dd004  std::__ndk1::__call_once =====

/* std::__ndk1::__call_once(unsigned long volatile&, void*, void (*)(void*)) */

int std::__ndk1::__call_once(ulong *param_1,void *param_2,_func_void_void_ptr *param_3)

{
  int iVar1;
  ulong uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00215e90);
  uVar2 = *param_1;
  while (uVar2 == 1) {
    pthread_cond_wait((pthread_cond_t *)&DAT_00215eb8,(pthread_mutex_t *)&DAT_00215e90);
    uVar2 = *param_1;
  }
  if (*param_1 != 0) {
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00215e90);
    return iVar1;
  }
  *param_1 = 1;
                    /* try { // try from 001dd090 to 001dd0cf has its CatchHandler @ 001dd0e4 */
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00215e90);
  (*param_3)(param_2);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00215e90);
  *param_1 = 0xffffffffffffffff;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00215e90);
  iVar1 = pthread_cond_broadcast((pthread_cond_t *)&DAT_00215eb8);
  return iVar1;
}


// ===== 001dd128  std::__ndk1::mutex::~mutex =====

/* std::__ndk1::mutex::~mutex() */

int __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  int iVar1;
  
                    /* try { // try from 001dd130 to 001dd133 has its CatchHandler @ 001dd13c */
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)this);
  return iVar1;
}


// ===== 001dd140  std::__throw_bad_alloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__throw_bad_alloc() */

void std::__throw_bad_alloc(void)

{
  bad_alloc *this;
  
  this = (bad_alloc *)__cxa_allocate_exception(8);
  bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_0020fbb0,PTR__exception_0020fbb8);
}


// ===== 001dd174  operator.new =====

/* operator new(unsigned long) */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  code *pcVar2;
  bad_alloc *this;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    pvVar1 = malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    pcVar2 = (code *)std::get_new_handler();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_0020fbb0,PTR__exception_0020fbb8);
}


// ===== 001dd1d8  operator.new =====

/* operator new(unsigned long, std::nothrow_t const&) */

void * operator_new(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
                    /* try { // try from 001dd1e0 to 001dd1e3 has its CatchHandler @ 001dd1ec */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// ===== 001dd204  operator.new[] =====

/* operator new[](unsigned long) */

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0020fd08)();
  return pvVar1;
}


// ===== 001dd208  operator.new[] =====

/* operator new[](unsigned long, std::nothrow_t const&) */

void * operator_new__(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
                    /* try { // try from 001dd210 to 001dd213 has its CatchHandler @ 001dd21c */
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}


// ===== 001dd234  operator.delete =====

/* operator delete(void*) */

void operator_delete(void *param_1)

{
  (*(code *)PTR_free_0020fee8)();
  return;
}


// ===== 001dd238  operator.delete =====

/* operator delete(void*, std::nothrow_t const&) */

void operator_delete(void *param_1,nothrow_t *param_2)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001dd23c  operator.delete =====

/* operator delete(void*, unsigned long) */

void operator_delete(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001dd240  operator.delete[] =====

/* operator delete[](void*) */

void operator_delete__(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001dd244  operator.delete[] =====

/* operator delete[](void*, std::nothrow_t const&) */

void operator_delete__(void *param_1,nothrow_t *param_2)

{
  (*(code *)PTR_operator_delete___0020fdb8)();
  return;
}


// ===== 001dd248  operator.delete[] =====

/* operator delete[](void*, unsigned long) */

void operator_delete__(void *param_1,ulong param_2)

{
  (*(code *)PTR_operator_delete___0020fdb8)();
  return;
}


// ===== 001dd24c  operator.new =====

/* operator new(unsigned long, std::align_val_t) */

void * operator_new(size_t param_1,size_t param_2)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  bad_alloc *this;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    param_1 = 1;
  }
  if (param_2 < 9) {
    param_2 = 8;
  }
  while( true ) {
    iVar2 = posix_memalign(&local_40,param_2,param_1);
    if (iVar2 == 0) {
      if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_40;
    }
    pcVar3 = (code *)std::get_new_handler();
    if (pcVar3 == (code *)0x0) break;
    (*pcVar3)();
  }
  this = (bad_alloc *)__cxa_allocate_exception(8);
  std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_0020fbb0,PTR__exception_0020fbb8);
}


// ===== 001dd2f8  operator.new =====

/* operator new(unsigned long, std::align_val_t, std::nothrow_t const&) */

void * operator_new(void)

{
  void *pvVar1;
  
                    /* try { // try from 001dd300 to 001dd303 has its CatchHandler @ 001dd30c */
  pvVar1 = operator_new();
  return pvVar1;
}


// ===== 001dd324  operator.new[] =====

/* operator new[](unsigned long, std::align_val_t) */

void * operator_new__(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00210768)();
  return pvVar1;
}


// ===== 001dd328  operator.new[] =====

/* operator new[](unsigned long, std::align_val_t, std::nothrow_t const&) */

void * operator_new__(void)

{
  void *pvVar1;
  
                    /* try { // try from 001dd330 to 001dd333 has its CatchHandler @ 001dd33c */
  pvVar1 = operator_new__();
  return pvVar1;
}


// ===== 001dd354  operator.delete =====

/* operator delete(void*, std::align_val_t) */

void operator_delete(void)

{
  (*(code *)PTR_free_0020fee8)();
  return;
}


// ===== 001dd358  operator.delete =====

/* operator delete(void*, std::align_val_t, std::nothrow_t const&) */

void operator_delete(void)

{
  (*(code *)PTR_operator_delete_00210778)();
  return;
}


// ===== 001dd35c  operator.delete =====

/* operator delete(void*, unsigned long, std::align_val_t) */

void operator_delete(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  operator_delete(param_1,param_3);
  return;
}


// ===== 001dd364  operator.delete[] =====

/* operator delete[](void*, std::align_val_t) */

void operator_delete__(void)

{
  (*(code *)PTR_operator_delete_00210778)();
  return;
}


// ===== 001dd368  operator.delete[] =====

/* operator delete[](void*, std::align_val_t, std::nothrow_t const&) */

void operator_delete__(void)

{
  (*(code *)PTR_operator_delete___00210780)();
  return;
}


// ===== 001dd36c  operator.delete[] =====

/* operator delete[](void*, unsigned long, std::align_val_t) */

void operator_delete__(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  operator_delete__(param_1,param_3);
  return;
}


// ===== 001dd374  std::logic_error::logic_error =====

/* std::logic_error::logic_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall std::logic_error::logic_error(logic_error *this,basic_string_conflict *param_1)

{
  long lVar1;
  long *plVar2;
  basic_string_conflict *__src;
  
  *(undefined **)this = PTR_vtable_0020fbc0 + 0x10;
  __src = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __src = param_1 + 1;
  }
                    /* try { // try from 001dd3a8 to 001dd3bf has its CatchHandler @ 001dd3f0 */
  lVar1 = __strlen_chk(__src,0xffffffffffffffff);
  plVar2 = (long *)operator_new(lVar1 + 0x19);
  *plVar2 = lVar1;
  plVar2[1] = lVar1;
  *(undefined4 *)(plVar2 + 2) = 0;
  memcpy(plVar2 + 3,__src,lVar1 + 1);
  *(long **)(this + 8) = plVar2 + 3;
  return;
}


// ===== 001dd404  std::logic_error::logic_error =====

/* std::logic_error::logic_error(char const*) */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined **)this = PTR_vtable_0020fbc0 + 0x10;
                    /* try { // try from 001dd42c to 001dd443 has its CatchHandler @ 001dd474 */
  lVar1 = __strlen_chk(param_1,0xffffffffffffffff);
  plVar2 = (long *)operator_new(lVar1 + 0x19);
  *plVar2 = lVar1;
  plVar2[1] = lVar1;
  *(undefined4 *)(plVar2 + 2) = 0;
  memcpy(plVar2 + 3,param_1,lVar1 + 1);
  *(long **)(this + 8) = plVar2 + 3;
  return;
}


// ===== 001dd488  std::logic_error::logic_error =====

/* std::logic_error::logic_error(std::logic_error const&) */

void __thiscall std::logic_error::logic_error(logic_error *this,logic_error *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  
  *(undefined **)this = PTR_vtable_0020fbc0 + 0x10;
  lVar3 = *(long *)(param_1 + 8);
  *(long *)(this + 8) = lVar3;
  piVar4 = (int *)(lVar3 + -8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar2) {
      *piVar4 = *piVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}


// ===== 001dd4b8  std::logic_error::operator= =====

/* std::logic_error::TEMPNAMEPLACEHOLDERVALUE(std::logic_error const&) */

logic_error * __thiscall std::logic_error::operator=(logic_error *this,logic_error *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(this + 8);
  *(long *)(this + 8) = lVar5;
  piVar6 = (int *)(lVar5 + -8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar3) {
      *piVar6 = *piVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  piVar6 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar3) {
      *piVar6 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  return this;
}


// ===== 001dd518  std::runtime_error::runtime_error =====

/* std::runtime_error::runtime_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
std::runtime_error::runtime_error(runtime_error *this,basic_string_conflict *param_1)

{
  long lVar1;
  long *plVar2;
  basic_string_conflict *__src;
  
  *(undefined **)this = PTR_vtable_0020fbc8 + 0x10;
  __src = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __src = param_1 + 1;
  }
                    /* try { // try from 001dd54c to 001dd563 has its CatchHandler @ 001dd594 */
  lVar1 = __strlen_chk(__src,0xffffffffffffffff);
  plVar2 = (long *)operator_new(lVar1 + 0x19);
  *plVar2 = lVar1;
  plVar2[1] = lVar1;
  *(undefined4 *)(plVar2 + 2) = 0;
  memcpy(plVar2 + 3,__src,lVar1 + 1);
  *(long **)(this + 8) = plVar2 + 3;
  return;
}


// ===== 001dd5a8  std::runtime_error::runtime_error =====

/* std::runtime_error::runtime_error(char const*) */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,char *param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined **)this = PTR_vtable_0020fbc8 + 0x10;
                    /* try { // try from 001dd5d0 to 001dd5e7 has its CatchHandler @ 001dd618 */
  lVar1 = __strlen_chk(param_1,0xffffffffffffffff);
  plVar2 = (long *)operator_new(lVar1 + 0x19);
  *plVar2 = lVar1;
  plVar2[1] = lVar1;
  *(undefined4 *)(plVar2 + 2) = 0;
  memcpy(plVar2 + 3,param_1,lVar1 + 1);
  *(long **)(this + 8) = plVar2 + 3;
  return;
}


// ===== 001dd62c  std::runtime_error::runtime_error =====

/* std::runtime_error::runtime_error(std::runtime_error const&) */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  
  *(undefined **)this = PTR_vtable_0020fbc8 + 0x10;
  lVar3 = *(long *)(param_1 + 8);
  *(long *)(this + 8) = lVar3;
  piVar4 = (int *)(lVar3 + -8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar2) {
      *piVar4 = *piVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}


// ===== 001dd65c  std::runtime_error::operator= =====

/* std::runtime_error::TEMPNAMEPLACEHOLDERVALUE(std::runtime_error const&) */

runtime_error * __thiscall std::runtime_error::operator=(runtime_error *this,runtime_error *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(this + 8);
  *(long *)(this + 8) = lVar5;
  piVar6 = (int *)(lVar5 + -8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar3) {
      *piVar6 = *piVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  piVar6 = (int *)(lVar4 + -8);
  do {
    iVar1 = *piVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar3) {
      *piVar6 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 < 0) {
    operator_delete((void *)(lVar4 + -0x18));
  }
  return this;
}


// ===== 001dd6bc  std::__ndk1::__basic_string_common<true>::__throw_length_error =====

/* std::__ndk1::__basic_string_common<true>::__throw_length_error() const */

void std::__ndk1::__basic_string_common<true>::__throw_length_error(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001dad18("basic_string");
}


// ===== 001dd6d0  std::__ndk1::__basic_string_common<true>::__throw_out_of_range =====

/* std::__ndk1::__basic_string_common<true>::__throw_out_of_range() const */

void std::__ndk1::__basic_string_common<true>::__throw_out_of_range(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001dd6e4("basic_string");
}


// ===== 001dd6e4  FUN_001dd6e4 =====

void FUN_001dd6e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 001dd700 to 001dd707 has its CatchHandler @ 001dd720 */
  FUN_001e50ec(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
}


// ===== 001dd734  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  long lVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest_00;
  ulong uVar3;
  size_t __n;
  ulong uVar4;
  ulong __n_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  
  if (((byte)*this & 1) == 0) {
    uVar4 = (ulong)((byte)*this >> 1);
    uVar2 = uVar4 - param_1;
    if (uVar4 < param_1) {
LAB_001dd908:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    __n_00 = uVar2;
    if (param_2 <= uVar2) {
      __n_00 = param_2;
    }
    if ((__n_00 - uVar4) + 0x16 < param_4) {
      uVar3 = 0x16;
LAB_001dd7c4:
      __grow_by_and_replace
                (this,uVar3,(uVar4 + param_4) - (uVar3 + __n_00),uVar4,param_1,__n_00,param_4,
                 param_3);
      return this;
    }
    pbVar5 = this + 1;
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    uVar2 = uVar4 - param_1;
    if (uVar4 < param_1) goto LAB_001dd908;
    __n_00 = uVar2;
    if (param_2 <= uVar2) {
      __n_00 = param_2;
    }
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if ((__n_00 - uVar4) + uVar3 < param_4) goto LAB_001dd7c4;
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  uVar3 = param_4;
  if ((__n_00 == param_4) || (__n = uVar2 - __n_00, uVar3 = __n_00, __n == 0)) {
    __n_00 = uVar3;
    __n = param_4;
    if (param_4 == 0) goto LAB_001dd858;
LAB_001dd848:
    __dest_00 = pbVar5 + param_1;
    param_4 = __n;
  }
  else {
    __dest = pbVar5 + param_1;
    if (__n_00 <= param_4) {
      if ((__dest < param_3) && (param_3 < pbVar5 + uVar4)) {
        if (param_3 < __dest + __n_00) {
          if (__n_00 != 0) {
            memmove(__dest,param_3,__n_00);
          }
          param_1 = __n_00 + param_1;
          param_3 = param_3 + param_4;
          param_4 = param_4 - __n_00;
          __n_00 = 0;
        }
        else {
          param_3 = param_3 + (param_4 - __n_00);
        }
      }
      memmove(pbVar5 + param_4 + param_1,pbVar5 + __n_00 + param_1,__n);
      __n = param_4;
      if (param_4 == 0) goto LAB_001dd858;
      goto LAB_001dd848;
    }
    if (param_4 != 0) {
      memmove(__dest,param_3,param_4);
    }
    __dest_00 = __dest + param_4;
    param_3 = (char *)(__dest + __n_00);
  }
  memmove(__dest_00,param_3,__n);
LAB_001dd858:
  lVar1 = (param_4 - __n_00) + uVar4;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  pbVar5[lVar1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}


// ===== 001dd910  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__grow_by_and_replace =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__grow_by_and_replace(unsigned long, unsigned long, unsigned long, unsigned long, unsigned
   long, unsigned long, char const*) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__grow_by_and_replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
          char *param_7)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar3;
  
  if (-param_1 - 0x12 < param_2) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (((byte)*this & 1) == 0) {
    __src = this + 1;
  }
  else {
    __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x10);
  }
  if (param_1 < 0x7fffffffffffffe7) {
    uVar2 = param_1 << 1;
    if (param_1 << 1 <= param_2 + param_1) {
      uVar2 = param_2 + param_1;
    }
    uVar3 = 0x17;
    if (0x16 < uVar2) {
      uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    }
  }
  else {
    uVar3 = 0xffffffffffffffef;
  }
  __dest = operator_new(uVar3);
  if (param_4 != 0) {
    memcpy(__dest,__src,param_4);
  }
  if (param_6 != 0) {
    memcpy((void *)((long)__dest + param_4),param_7,param_6);
  }
  __n = (param_3 - param_5) - param_4;
  if (__n != 0) {
    memcpy((void *)((long)__dest + param_6 + param_4),__src + param_5 + param_4,__n);
  }
  if (param_1 != 0x16) {
    operator_delete(__src);
  }
  lVar1 = (param_3 - param_5) + param_6;
  *(ulong *)this = uVar3 | 1;
  *(long *)(this + 8) = lVar1;
  *(void **)(this + 0x10) = __dest;
  *(undefined1 *)((long)__dest + lVar1) = 0;
  return;
}


// ===== 001dda44  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::rfind(char const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  ulong uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  long lVar11;
  
  if (((byte)*this & 1) == 0) {
    pbVar6 = this + 1;
    uVar7 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar7 = *(ulong *)(this + 8);
    pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  uVar2 = uVar7;
  if (param_2 <= uVar7) {
    uVar2 = param_2;
  }
  uVar3 = uVar2 + param_3;
  if (uVar7 - uVar2 <= param_3) {
    uVar3 = uVar7;
  }
  pbVar1 = pbVar6 + uVar3;
  pbVar8 = pbVar1;
  if ((param_3 != 0) && ((long)param_3 <= (long)uVar3)) {
    pbVar10 = pbVar1;
    while (pbVar9 = pbVar10, pbVar6 + (param_3 - 1) != pbVar9) {
      pbVar10 = pbVar9 + -1;
      if (*pbVar10 ==
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + (param_3 - 1))) {
        lVar11 = 0;
        do {
          if (1 - param_3 == lVar11) {
            pbVar8 = pbVar10 + (1 - param_3);
            goto LAB_001ddaf0;
          }
          lVar5 = lVar11 + -2;
          lVar4 = lVar11 + (param_3 - 2);
          lVar11 = lVar11 + -1;
        } while (pbVar9[lVar5] ==
                 *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  (param_1 + lVar4));
      }
    }
  }
LAB_001ddaf0:
  lVar11 = (long)pbVar8 - (long)pbVar6;
  if (pbVar8 == pbVar1 && param_3 != 0) {
    lVar11 = -1;
  }
  return lVar11;
}


// ===== 001ddb04  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__init(char const*, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar1;
  
  if (param_3 < 0xfffffffffffffff0) {
    if (param_3 < 0x17) {
      __dest = this + 1;
      *this = SUB41((int)param_2 << 1,0);
    }
    else {
      uVar1 = param_3 + 0x10 & 0xfffffffffffffff0;
      __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new(uVar1);
      *(ulong *)(this + 8) = param_2;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x10) = __dest;
      *(ulong *)this = uVar1 | 1;
    }
    if (param_2 != 0) {
      memcpy(__dest,param_1,param_2);
    }
    __dest[param_2] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_length_error();
}


// ===== 001ddb90  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
basic_string(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
            basic_string_conflict *param_1)

{
  ulong uVar1;
  void *__src;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((byte)*param_1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar4;
    *(undefined8 *)this = uVar3;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 8);
    __src = *(void **)(param_1 + 0x10);
    if (uVar1 < 0x17) {
      __dest = this + 1;
      *this = SUB41((int)uVar1 << 1,0);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        __basic_string_common<true>::__throw_length_error();
      }
      uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new(uVar2);
      *(ulong *)(this + 8) = uVar1;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x10) = __dest;
      *(ulong *)this = uVar2 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  return;
}


// ===== 001ddc28  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, char const*) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_3);
  replace(this,param_1,param_2,param_3,sVar1);
  return;
}


// ===== 001ddc74  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::allocator<char> const&) */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     basic_string(basic_string_conflict *param_1,allocator *param_2)

{
  ulong uVar1;
  void *__src;
  basic_string_conflict *__dest;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((byte)*param_2 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(undefined8 *)param_1 = uVar3;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 8);
    __src = *(void **)(param_2 + 0x10);
    if (uVar1 < 0x17) {
      __dest = param_1 + 1;
      *param_1 = SUB41((int)uVar1 << 1,0);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        __basic_string_common<true>::__throw_length_error();
      }
      uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (basic_string_conflict *)operator_new(uVar2);
      *(ulong *)(param_1 + 8) = uVar1;
      *(basic_string_conflict **)(param_1 + 0x10) = __dest;
      *(ulong *)param_1 = uVar2 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  return;
}


// ===== 001ddd0c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find_last_not_of =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find_last_not_of(char const*, unsigned long, unsigned long) const */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
find_last_not_of(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *this,char *param_1,ulong param_2,ulong param_3)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  
  if (((byte)*this & 1) == 0) {
    pbVar4 = this + 1;
    uVar2 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar2 = *(ulong *)(this + 8);
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if (param_2 < uVar2) {
    uVar2 = param_2 + 1;
  }
  do {
    uVar3 = uVar2;
    if (uVar3 == 0) {
      return (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             0xffffffffffffffff;
    }
    if (param_3 == 0) break;
    pvVar1 = memchr(param_1,(uint)(byte)pbVar4[uVar3 - 1],param_3);
    uVar2 = uVar3 - 1;
  } while (pvVar1 != (void *)0x0);
  return pbVar4 + ~(ulong)pbVar4 + uVar3;
}


// ===== 001ddd98  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::~basic_string() */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_string(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this)

{
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


// ===== 001dddac  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find_first_not_of =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find_first_not_of(char const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
find_first_not_of(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *this,char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  void *pvVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 1;
    uVar3 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar3 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if (param_2 < uVar3) {
    pbVar4 = pbVar1 + param_2;
    do {
      if (param_3 == 0) {
LAB_001dde28:
        return (long)pbVar4 - (long)pbVar1;
      }
      pvVar2 = memchr(param_1,(uint)(byte)pbVar1[param_2],param_3);
      if (pvVar2 == (void *)0x0) {
        pbVar4 = pbVar1 + param_2;
        goto LAB_001dde28;
      }
      param_2 = param_2 + 1;
    } while (uVar3 != param_2);
  }
  return -1;
}


// ===== 001dde40  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(unsigned long, unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char param_3)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar2 >> 1);
  }
  else {
    uVar4 = *(ulong *)(this + 8);
  }
  if (uVar4 < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  if (param_2 == 0) {
    return this;
  }
  if (((byte)bVar2 & 1) == 0) {
    uVar3 = 0x16;
    if (param_2 <= 0x16 - uVar4) {
      pbVar5 = this + 1;
joined_r0x001ddef0:
      if (uVar4 - param_1 != 0) {
        memmove(pbVar5 + param_1 + param_2,pbVar5 + param_1,uVar4 - param_1);
      }
      goto LAB_001ddf00;
    }
  }
  else {
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (param_2 <= uVar3 - uVar4) {
      pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      goto joined_r0x001ddef0;
    }
  }
  __grow_by(this,uVar3,(uVar4 + param_2) - uVar3,uVar4,param_1,0,param_2);
  pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
LAB_001ddf00:
  memset(pbVar5 + param_1,(uint)(byte)param_3,param_2);
  lVar1 = uVar4 + param_2;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  pbVar5[lVar1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}


// ===== 001ddf50  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__grow_by =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__grow_by(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned
   long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__grow_by(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
  ulong uVar1;
  size_t __n;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar2;
  
  if (-param_1 - 0x11 < param_2) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (((byte)*this & 1) == 0) {
    __src = this + 1;
  }
  else {
    __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x10);
  }
  if (param_1 < 0x7fffffffffffffe7) {
    uVar1 = param_1 << 1;
    if (param_1 << 1 <= param_2 + param_1) {
      uVar1 = param_2 + param_1;
    }
    uVar2 = 0x17;
    if (0x16 < uVar1) {
      uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
    }
  }
  else {
    uVar2 = 0xffffffffffffffef;
  }
  __dest = operator_new(uVar2);
  if (param_4 != 0) {
    memcpy(__dest,__src,param_4);
  }
  __n = (param_3 - param_5) - param_4;
  if (__n != 0) {
    memcpy((void *)((long)__dest + param_6 + param_4),__src + param_5 + param_4,__n);
  }
  if (param_1 != 0x16) {
    operator_delete(__src);
  }
  *(void **)(this + 0x10) = __dest;
  *(ulong *)this = uVar2 | 1;
  return;
}


// ===== 001de064  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator= =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::TEMPNAMEPLACEHOLDERVALUE(char) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
operator=(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         char param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 1;
    *this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x2;
  }
  else {
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    *(undefined8 *)(this + 8) = 1;
  }
  *pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)param_1;
  pbVar1[1] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return;
}


// ===== 001de094  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__init(char const*, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar1;
  
  if (0xffffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (param_2 < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)param_2 << 1,0);
    if (param_2 == 0) goto LAB_001de100;
  }
  else {
    uVar1 = param_2 + 0x10 & 0xfffffffffffffff0;
    __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             operator_new(uVar1);
    *(ulong *)(this + 8) = param_2;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __dest;
    *(ulong *)this = uVar1 | 1;
  }
  memcpy(__dest,param_1,param_2);
LAB_001de100:
  __dest[param_2] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return;
}


// ===== 001de11c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::at =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::at(unsigned long) const */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::at
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  
  if (((byte)*this & 1) == 0) {
    if ((byte)*this >> 1 <= param_1) {
LAB_001de158:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    pbVar1 = this + 1;
  }
  else {
    if (*(ulong *)(this + 8) <= param_1) goto LAB_001de158;
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  return pbVar1 + param_1;
}


// ===== 001de15c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(unsigned long, char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char *param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  long lVar1;
  char *pcVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
  bVar3 = *this;
  if (((byte)bVar3 & 1) == 0) {
    uVar5 = (ulong)((byte)bVar3 >> 1);
    if (uVar5 < param_1) {
LAB_001de274:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    uVar4 = 0x16;
  }
  else {
    uVar5 = *(ulong *)(this + 8);
    if (uVar5 < param_1) goto LAB_001de274;
    uVar4 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (uVar4 - uVar5 < param_3) {
    __grow_by_and_replace(this,uVar4,(uVar5 + param_3) - uVar4,uVar5,param_1,0,param_3,param_2);
  }
  else if (param_3 != 0) {
    if (((byte)bVar3 & 1) == 0) {
      pbVar6 = this + 1;
    }
    else {
      pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    if (uVar5 - param_1 != 0) {
      __src = pbVar6 + param_1;
      pcVar2 = param_2 + param_3;
      if (pbVar6 + uVar5 <= param_2 || param_2 < __src) {
        pcVar2 = param_2;
      }
      memmove(__src + param_3,__src,uVar5 - param_1);
      param_2 = pcVar2;
    }
    memmove(pbVar6 + param_1,param_2,param_3);
    lVar1 = uVar5 + param_3;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    pbVar6[lVar1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  }
  return this;
}


// ===== 001de27c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find_first_of =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find_first_of(char const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
find_first_of(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
             char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 1;
    uVar6 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar6 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if ((param_3 == 0) || (uVar6 <= param_2)) {
    return -1;
  }
  pbVar4 = pbVar1 + param_2;
  pbVar2 = pbVar1 + uVar6;
  do {
    uVar6 = param_3;
    pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_1;
    do {
      pbVar5 = pbVar4;
      if (*pbVar4 == *pbVar7) goto LAB_001de2e4;
      uVar6 = uVar6 - 1;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0);
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar2;
  } while (pbVar4 != pbVar2);
LAB_001de2e4:
  lVar3 = (long)pbVar5 - (long)pbVar1;
  if (pbVar5 == pbVar2) {
    lVar3 = -1;
  }
  return lVar3;
}


// ===== 001de2f4  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,ulong param_3,char param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
  if (((byte)*this & 1) == 0) {
    uVar4 = (ulong)((byte)*this >> 1);
    uVar2 = uVar4 - param_1;
    if (uVar4 < param_1) {
LAB_001de434:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    uVar5 = uVar2;
    if (param_2 <= uVar2) {
      uVar5 = param_2;
    }
    if ((uVar5 - uVar4) + 0x16 < param_3) {
      uVar3 = 0x16;
      goto LAB_001de380;
    }
    pbVar6 = this + 1;
joined_r0x001de3c4:
    if ((uVar5 != param_3) && (uVar2 - uVar5 != 0)) {
      memmove(pbVar6 + param_3 + param_1,pbVar6 + uVar5 + param_1,uVar2 - uVar5);
    }
    if (param_3 == 0) goto LAB_001de3f4;
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    uVar2 = uVar4 - param_1;
    if (uVar4 < param_1) goto LAB_001de434;
    uVar5 = uVar2;
    if (param_2 <= uVar2) {
      uVar5 = param_2;
    }
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (param_3 <= (uVar5 - uVar4) + uVar3) {
      pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      goto joined_r0x001de3c4;
    }
LAB_001de380:
    __grow_by(this,uVar3,(uVar4 + param_3) - (uVar3 + uVar5),uVar4,param_1,uVar5,param_3);
    pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  memset(pbVar6 + param_1,(uint)(byte)param_4,param_3);
LAB_001de3f4:
  lVar1 = (param_3 - uVar5) + uVar4;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  pbVar6[lVar1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}


// ===== 001de43c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  
  if (((byte)*this & 1) == 0) {
    if (param_2 < 0x17) {
      __dest = this + 1;
joined_r0x001de4b8:
      if (param_2 != 0) {
        memmove(__dest,param_1,param_2);
      }
      __dest[param_2] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)param_2 << 1,0);
        return this;
      }
      *(ulong *)(this + 8) = param_2;
      return this;
    }
    uVar2 = (ulong)((byte)*this >> 1);
    uVar1 = 0x16;
  }
  else {
    uVar1 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (param_2 <= uVar1) {
      __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      goto joined_r0x001de4b8;
    }
    uVar2 = *(ulong *)(this + 8);
  }
  __grow_by_and_replace(this,uVar1,param_2 - uVar1,uVar2,0,uVar2,param_2,param_1);
  return this;
}


// ===== 001de4fc  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::reserve(unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  bool bVar3;
  bool bVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar7;
  
  if (0xffffffffffffffef < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar7 = (ulong)((byte)bVar2 >> 1);
    uVar5 = 0x16;
  }
  else {
    uVar7 = *(ulong *)(this + 8);
    uVar5 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  uVar1 = uVar7;
  if (uVar7 <= param_1) {
    uVar1 = param_1;
  }
  uVar6 = (uVar1 + 0x10 & 0xfffffffffffffff0) - 1;
  if (uVar1 < 0x17) {
    uVar6 = 0x16;
  }
  if (uVar6 == uVar5) {
    return;
  }
  if (uVar6 == 0x16) {
    __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x10);
    bVar4 = false;
    __dest = this + 1;
    if (((byte)bVar2 & 1) != 0) {
LAB_001de5cc:
      uVar5 = *(ulong *)(this + 8);
      bVar3 = true;
      goto joined_r0x001de5d8;
    }
    bVar3 = true;
  }
  else {
    if (uVar5 < uVar6) {
      __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new(uVar6 + 1);
    }
    else {
                    /* try { // try from 001de59c to 001de59f has its CatchHandler @ 001de638 */
      __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new(uVar6 + 1);
    }
    if (((byte)bVar2 & 1) != 0) {
      __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x10);
      bVar4 = true;
      goto LAB_001de5cc;
    }
    bVar3 = false;
    __src = this + 1;
    bVar4 = true;
  }
  uVar5 = (ulong)((byte)bVar2 >> 1);
joined_r0x001de5d8:
  if (uVar5 != 0xffffffffffffffff) {
    memcpy(__dest,__src,uVar5 + 1);
  }
  if (bVar3) {
    operator_delete(__src);
  }
  if (bVar4) {
    *(ulong *)this = uVar6 + 1 | 1;
    *(ulong *)(this + 8) = uVar7;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __dest;
  }
  else {
    *this = SUB41((int)uVar7 << 1,0);
  }
  return;
}


// ===== 001de654  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar2 >> 1);
    uVar3 = 0x16;
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (uVar3 - uVar4 < param_2) {
    __grow_by_and_replace(this,uVar3,(uVar4 + param_2) - uVar3,uVar4,uVar4,0,param_2,param_1);
  }
  else if (param_2 != 0) {
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = this + 1;
    }
    else {
      pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    memcpy(pbVar5 + uVar4,param_1,param_2);
    lVar1 = uVar4 + param_2;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    pbVar5[lVar1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  }
  return this;
}


// ===== 001de718  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          basic_string_conflict *param_1,ulong param_2,ulong param_3)

{
  ulong __n;
  ulong uVar1;
  ulong uVar2;
  basic_string_conflict *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  
  if (((byte)*param_1 & 1) == 0) {
    uVar2 = (ulong)((byte)*param_1 >> 1);
    if (uVar2 < param_2) {
LAB_001de80c:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    pbVar3 = param_1 + 1;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 < param_2) goto LAB_001de80c;
    pbVar3 = *(basic_string_conflict **)(param_1 + 0x10);
  }
  __n = uVar2 - param_2;
  if (param_3 <= uVar2 - param_2) {
    __n = param_3;
  }
  if (((byte)*this & 1) == 0) {
    if (__n < 0x17) {
      __dest = this + 1;
joined_r0x001de7c8:
      if (__n != 0) {
        memmove(__dest,pbVar3 + param_2,__n);
      }
      __dest[__n] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)__n << 1,0);
        return this;
      }
      *(ulong *)(this + 8) = __n;
      return this;
    }
    uVar1 = (ulong)((byte)*this >> 1);
    uVar2 = 0x16;
  }
  else {
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (__n <= uVar2) {
      __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      goto joined_r0x001de7c8;
    }
    uVar1 = *(ulong *)(this + 8);
  }
  __grow_by_and_replace(this,uVar2,__n - uVar2,uVar1,0,uVar1,__n,(char *)(pbVar3 + param_2));
  return this;
}


// ===== 001de814  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::copy =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::copy(char*, unsigned long, unsigned long) const */

size_t __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::copy
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  ulong __n;
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  
  if (((byte)*this & 1) == 0) {
    uVar1 = (ulong)((byte)*this >> 1);
    __n = uVar1 - param_3;
    if (uVar1 < param_3) {
LAB_001de888:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    if (param_2 <= __n) {
      __n = param_2;
    }
    pbVar2 = this + 1;
  }
  else {
    __n = *(ulong *)(this + 8) - param_3;
    if (*(ulong *)(this + 8) < param_3) goto LAB_001de888;
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (param_2 <= __n) {
      __n = param_2;
    }
  }
  if (__n != 0) {
    memcpy(param_1,pbVar2 + param_3,__n);
  }
  return __n;
}


// ===== 001de88c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long, std::__ndk1::allocator<char>
   const&) */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     basic_string(basic_string_conflict *param_1,ulong param_2,ulong param_3,allocator *param_4)

{
  allocator *__n;
  ulong uVar1;
  basic_string_conflict *__dest;
  long lVar2;
  
  if ((*(byte *)param_2 & 1) == 0) {
    uVar1 = (ulong)(*(byte *)param_2 >> 1);
    if (uVar1 < param_3) {
LAB_001de948:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    lVar2 = param_2 + 1;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 8);
    if (uVar1 < param_3) goto LAB_001de948;
    lVar2 = *(long *)(param_2 + 0x10);
  }
  __n = (allocator *)(uVar1 - param_3);
  if (param_4 <= (allocator *)(uVar1 - param_3)) {
    __n = param_4;
  }
  if ((allocator *)0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < (allocator *)0x17) {
    __dest = param_1 + 1;
    *param_1 = SUB41((int)__n << 1,0);
    if (__n == (allocator *)0x0) goto LAB_001de930;
  }
  else {
    __dest = (basic_string_conflict *)operator_new((ulong)(__n + 0x10) & 0xfffffffffffffff0);
    *(allocator **)(param_1 + 8) = __n;
    *(basic_string_conflict **)(param_1 + 0x10) = __dest;
    *(ulong *)param_1 = (ulong)(__n + 0x10) & 0xfffffffffffffff0 | 1;
  }
  memcpy(__dest,(void *)(lVar2 + param_3),(size_t)__n);
LAB_001de930:
  __dest[(long)__n] = (basic_string_conflict)0x0;
  return;
}


// ===== 001de958  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find(char, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char param_1,ulong param_2)

{
  bool bVar1;
  void *pvVar2;
  ulong uVar3;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  
  if (((byte)*this & 1) == 0) {
    pbVar4 = this + 1;
    uVar3 = (ulong)((byte)*this >> 1);
    __n = uVar3 - param_2;
    bVar1 = __n == 0;
    if (param_2 <= uVar3 && !bVar1) {
LAB_001de990:
      if (bVar1) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = memchr(pbVar4 + param_2,(uint)(byte)param_1,__n);
      }
      if (pvVar2 != (void *)0x0) {
        return (long)pvVar2 - (long)pbVar4;
      }
      return -1;
    }
  }
  else {
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    __n = *(ulong *)(this + 8) - param_2;
    bVar1 = __n == 0;
    if (param_2 <= *(ulong *)(this + 8) && !bVar1) goto LAB_001de990;
  }
  return -1;
}


// ===== 001de9c4  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__init(unsigned long, char) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s;
  ulong uVar1;
  
  if (0xffffffffffffffef < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (param_1 < 0x17) {
    __s = this + 1;
    *this = SUB41((int)param_1 << 1,0);
    if (param_1 == 0) goto LAB_001dea30;
  }
  else {
    uVar1 = param_1 + 0x10 & 0xfffffffffffffff0;
    __s = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          operator_new(uVar1);
    *(ulong *)(this + 8) = param_1;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __s;
    *(ulong *)this = uVar1 | 1;
  }
  memset(__s,(uint)(byte)param_2,param_1);
LAB_001dea30:
  __s[param_1] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
  ;
  return;
}


// ===== 001dea4c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(unsigned long, char const*) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  insert(this,param_1,param_2,sVar1);
  return;
}


// ===== 001dea90  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find_last_of =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find_last_of(char const*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
find_last_of(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
            char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  void *pvVar2;
  ulong uVar3;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 1;
    uVar3 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar3 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if (param_3 == 0) {
LAB_001deaf4:
    uVar3 = 0xffffffffffffffff;
  }
  else {
    if (param_2 < uVar3) {
      uVar3 = param_2 + 1;
    }
    do {
      if (uVar3 == 0) goto LAB_001deaf4;
      pvVar2 = memchr(param_1,(uint)(byte)pbVar1[uVar3 - 1],param_3);
      uVar3 = uVar3 - 1;
    } while (pvVar2 == (void *)0x0);
  }
  return uVar3;
}


// ===== 001deb0c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::push_back(char) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
push_back(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         char param_1)

{
  byte bVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  
  if (((byte)*this & 1) == 0) {
    bVar1 = (byte)*this >> 1;
    uVar4 = (ulong)bVar1;
    if (bVar1 == 0x16) {
      uVar4 = 0x16;
      uVar2 = 0x16;
LAB_001deb58:
      __grow_by(this,uVar2,1,uVar2,uVar2,0,0);
      if (((byte)*this & 1) != 0) goto LAB_001deb8c;
    }
    pbVar3 = this + 1;
    *this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
            ((char)uVar4 * '\x02' + '\x02');
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (uVar4 == uVar2) goto LAB_001deb58;
LAB_001deb8c:
    pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    *(ulong *)(this + 8) = uVar4 + 1;
  }
  pbVar3[uVar4] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)param_1;
  (pbVar3 + uVar4)[1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return;
}


// ===== 001debb8  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
  if (param_1 != 0) {
    bVar2 = *this;
    uVar4 = (ulong)(byte)bVar2;
    if (((byte)bVar2 & 1) == 0) {
      uVar5 = (ulong)((byte)bVar2 >> 1);
      uVar3 = 0x16;
    }
    else {
      uVar4 = *(ulong *)this;
      uVar5 = *(ulong *)(this + 8);
      uVar3 = (uVar4 & 0xfffffffffffffffe) - 1;
    }
    if (uVar3 - uVar5 < param_1) {
      __grow_by(this,uVar3,(uVar5 + param_1) - uVar3,uVar5,uVar5,0,0);
      uVar4 = (ulong)(byte)*this;
    }
    if ((uVar4 & 1) == 0) {
      pbVar6 = this + 1;
    }
    else {
      pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    memset(pbVar6 + uVar5,(uint)(byte)param_2,param_1);
    lVar1 = uVar5 + param_1;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    pbVar6[lVar1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  }
  return this;
}


// ===== 001dec84  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::rfind(char, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char param_1,ulong param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  long lVar2;
  ulong uVar3;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 1;
    uVar3 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar3 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if (uVar3 != 0) {
    if (param_2 < uVar3) {
      uVar3 = param_2 + 1;
    }
    while (uVar3 != 0) {
      lVar2 = uVar3 - 1;
      uVar3 = uVar3 - 1;
      if (pbVar1[lVar2] ==
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)param_1) {
        return uVar3;
      }
    }
  }
  return 0xffffffffffffffff;
}


// ===== 001decd0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  ulong uVar5;
  
  uVar2 = (ulong)(byte)*this;
  if (((byte)*this & 1) == 0) {
    if (param_1 < 0x17) goto LAB_001dedac;
    if (0xffffffffffffffd9 < param_1 - 0x16) {
LAB_001dee08:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    pbVar4 = this + 1;
    uVar5 = 0x16;
LAB_001ded50:
    uVar3 = uVar5 * 2;
    if (uVar3 < param_1 || uVar3 - param_1 == 0) {
      uVar3 = param_1;
    }
    uVar2 = 0x17;
    if (0x16 < uVar3) {
      uVar2 = uVar3 + 0x10 & 0xfffffffffffffff0;
    }
    pvVar1 = operator_new(uVar2);
    if (uVar5 != 0x16) goto LAB_001ded98;
  }
  else {
    uVar2 = *(ulong *)this;
    uVar5 = (uVar2 & 0xfffffffffffffffe) - 1;
    if (param_1 <= uVar5) goto LAB_001dedac;
    if (-(uVar2 & 0xfffffffffffffffe) - 0x10 < param_1 - uVar5) goto LAB_001dee08;
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (uVar5 < 0x7fffffffffffffe7) goto LAB_001ded50;
    uVar2 = 0xffffffffffffffef;
    pvVar1 = operator_new(0xffffffffffffffef);
LAB_001ded98:
    operator_delete(pbVar4);
  }
  uVar2 = uVar2 | 1;
  *(void **)(this + 0x10) = pvVar1;
  *(ulong *)this = uVar2;
LAB_001dedac:
  if ((uVar2 & 1) == 0) {
    pbVar4 = this + 1;
  }
  else {
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if (param_1 != 0) {
    memset(pbVar4,(uint)(byte)param_2,param_1);
  }
  pbVar4[param_1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)param_1 << 1,0);
  }
  else {
    *(ulong *)(this + 8) = param_1;
  }
  return this;
}


