// ===== 001dee10  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::erase =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::erase(unsigned long, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::erase
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar3 = (ulong)((byte)bVar2 >> 1);
  }
  else {
    uVar3 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar3) {
    if (param_2 != 0) {
      if (param_2 == 0xffffffffffffffff) {
        if (((byte)bVar2 & 1) == 0) {
          this[param_1 + 1] =
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
          *this = SUB41((int)param_1 << 1,0);
        }
        else {
          *(undefined1 *)(*(long *)(this + 0x10) + param_1) = 0;
          *(ulong *)(this + 8) = param_1;
        }
      }
      else {
        if (((byte)bVar2 & 1) == 0) {
          uVar3 = (ulong)((byte)bVar2 >> 1);
          pbVar6 = this + 1;
        }
        else {
          uVar3 = *(ulong *)(this + 8);
          pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(this + 0x10);
        }
        uVar4 = uVar3 - param_1;
        uVar1 = uVar4;
        if (param_2 <= uVar4) {
          uVar1 = param_2;
        }
        if (uVar4 - uVar1 != 0) {
          memmove(pbVar6 + param_1,pbVar6 + param_1 + uVar1,uVar4 - uVar1);
          bVar2 = *this;
        }
        lVar5 = uVar3 - uVar1;
        if (((byte)bVar2 & 1) == 0) {
          *this = SUB41((int)lVar5 << 1,0);
        }
        else {
          *(long *)(this + 8) = lVar5;
        }
        pbVar6[lVar5] =
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      }
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}


// ===== 001deee4  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          basic_string_conflict *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string_conflict *pbVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
  if (((byte)*param_1 & 1) == 0) {
    uVar4 = (ulong)((byte)*param_1 >> 1);
    if (uVar4 < param_2) {
LAB_001defdc:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    pbVar5 = param_1 + 1;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    if (uVar4 < param_2) goto LAB_001defdc;
    pbVar5 = *(basic_string_conflict **)(param_1 + 0x10);
  }
  bVar2 = *this;
  __n = uVar4 - param_2;
  if (param_3 <= uVar4 - param_2) {
    __n = param_3;
  }
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar2 >> 1);
    uVar3 = 0x16;
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (uVar3 - uVar4 < __n) {
    __grow_by_and_replace
              (this,uVar3,(uVar4 + __n) - uVar3,uVar4,uVar4,0,__n,(char *)(pbVar5 + param_2));
  }
  else if (__n != 0) {
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = this + 1;
    }
    else {
      pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    memcpy(pbVar6 + uVar4,pbVar5 + param_2,__n);
    lVar1 = uVar4 + __n;
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


// ===== 001defe4  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(char const*) const */

uint __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  size_t __n;
  uint uVar1;
  size_t sVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s1;
  ulong uVar3;
  
  sVar2 = strlen(param_1);
  if (((byte)*this & 1) == 0) {
    if (sVar2 == 0xffffffffffffffff) {
LAB_001df060:
                    /* try { // try from 001df060 to 001df067 has its CatchHandler @ 001df068 */
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    uVar3 = (ulong)((byte)*this >> 1);
    __s1 = this + 1;
  }
  else {
    if (sVar2 == 0xffffffffffffffff) goto LAB_001df060;
    uVar3 = *(ulong *)(this + 8);
    __s1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  }
  __n = sVar2;
  if (uVar3 <= sVar2) {
    __n = uVar3;
  }
  if (((__n == 0) || (uVar1 = memcmp(__s1,param_1,__n), uVar1 == 0)) &&
     (uVar1 = (uint)(sVar2 < uVar3), uVar3 < sVar2)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 001df06c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(unsigned long, unsigned long, char const*, unsigned long) const */

uint __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  size_t __n;
  uint uVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  
  if (((byte)*this & 1) == 0) {
    if ((param_4 == 0xffffffffffffffff) ||
       (uVar2 = (ulong)((byte)*this >> 1), uVar4 = uVar2 - param_1, uVar2 < param_1)) {
LAB_001df0fc:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    if (param_2 <= uVar4) {
      uVar4 = param_2;
    }
    pbVar3 = this + 1;
  }
  else {
    if ((param_4 == 0xffffffffffffffff) ||
       (uVar4 = *(ulong *)(this + 8) - param_1, *(ulong *)(this + 8) < param_1)) goto LAB_001df0fc;
    pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (param_2 <= uVar4) {
      uVar4 = param_2;
    }
  }
  __n = param_4;
  if (uVar4 <= param_4) {
    __n = uVar4;
  }
  if (((__n == 0) || (uVar1 = memcmp(pbVar3 + param_1,param_3,__n), uVar1 == 0)) &&
     (uVar1 = (uint)(param_4 < uVar4), uVar4 < param_4)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 001df100  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(unsigned long, unsigned long, char const*) const */

uint __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3)

{
  size_t __n;
  uint uVar1;
  size_t sVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  ulong uVar5;
  
  sVar2 = strlen(param_3);
  if (((byte)*this & 1) == 0) {
    if ((sVar2 == 0xffffffffffffffff) ||
       (uVar3 = (ulong)((byte)*this >> 1), uVar5 = uVar3 - param_1, uVar3 < param_1)) {
LAB_001df1b4:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    if (param_2 <= uVar5) {
      uVar5 = param_2;
    }
    pbVar4 = this + 1;
  }
  else {
    if ((sVar2 == 0xffffffffffffffff) ||
       (uVar5 = *(ulong *)(this + 8) - param_1, *(ulong *)(this + 8) < param_1)) goto LAB_001df1b4;
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (param_2 <= uVar5) {
      uVar5 = param_2;
    }
  }
  __n = sVar2;
  if (uVar5 <= sVar2) {
    __n = uVar5;
  }
  if (((__n == 0) || (uVar1 = memcmp(pbVar4 + param_1,param_3,__n), uVar1 == 0)) &&
     (uVar1 = (uint)(sVar2 < uVar5), uVar5 < sVar2)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 001df1bc  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::at =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::at(unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::at
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  
  if (((byte)*this & 1) == 0) {
    if ((byte)*this >> 1 <= param_1) {
LAB_001df1f8:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    pbVar1 = this + 1;
  }
  else {
    if (*(ulong *)(this + 8) <= param_1) goto LAB_001df1f8;
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  return pbVar1 + param_1;
}


// ===== 001df1fc  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(char const*) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  
  __n = strlen(param_1);
  if (((byte)*this & 1) == 0) {
    if (__n < 0x17) {
      __dest = this + 1;
joined_r0x001df284:
      if (__n != 0) {
        memmove(__dest,param_1,__n);
      }
      __dest[__n] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)__n << 1,0);
        return this;
      }
      *(size_t *)(this + 8) = __n;
      return this;
    }
    uVar2 = (ulong)((byte)*this >> 1);
    uVar1 = 0x16;
  }
  else {
    uVar1 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (__n <= uVar1) {
      __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      goto joined_r0x001df284;
    }
    uVar2 = *(ulong *)(this + 8);
  }
  __grow_by_and_replace(this,uVar1,__n - uVar1,uVar2,0,uVar2,__n,param_1);
  return this;
}


// ===== 001df2c8  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find(char const*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  byte bVar3;
  int iVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 1;
    uVar6 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar6 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if (uVar6 < param_2) {
    param_2 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    pbVar5 = pbVar1 + param_2;
    pbVar2 = pbVar1 + uVar6;
    lVar7 = (long)pbVar2 - (long)pbVar5;
    pbVar8 = pbVar2;
    if ((long)param_3 <= lVar7) {
      bVar3 = *param_1;
      do {
        pbVar8 = pbVar2;
        if (((0xfffffffffffffffe < lVar7 - param_3) ||
            (pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)memchr(pbVar5,(uint)bVar3,(lVar7 - param_3) + 1),
            pbVar5 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)0x0)) ||
           (iVar4 = memcmp(pbVar5,param_1,param_3), pbVar8 = pbVar5, iVar4 == 0)) break;
        pbVar5 = pbVar5 + 1;
        lVar7 = (long)pbVar2 - (long)pbVar5;
        pbVar8 = pbVar2;
      } while ((long)param_3 <= lVar7);
    }
    param_2 = (long)pbVar8 - (long)pbVar1;
    if (pbVar8 == pbVar2) {
      param_2 = 0xffffffffffffffff;
    }
  }
  return param_2;
}


// ===== 001df394  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(unsigned long, unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned
   long) const */

int __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,basic_string_conflict *param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  basic_string_conflict *pbVar3;
  int iVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  
  uVar2 = *(ulong *)(param_3 + 8);
  pbVar3 = *(basic_string_conflict **)(param_3 + 0x10);
  if (((byte)*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
    uVar2 = (ulong)((byte)*param_3 >> 1);
  }
  if (((byte)*this & 1) == 0) {
    pbVar5 = this + 1;
    uVar6 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar6 = *(ulong *)(this + 8);
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if (param_1 <= uVar6) {
    uVar1 = uVar6 - param_1;
    if (param_2 <= uVar6 - param_1) {
      uVar1 = param_2;
    }
    if (param_4 <= uVar2) {
      uVar6 = uVar2 - param_4;
      if (param_5 <= uVar2 - param_4) {
        uVar6 = param_5;
      }
      __n = uVar6;
      if (uVar1 <= uVar6) {
        __n = uVar1;
      }
      if ((__n == 0) || (iVar4 = memcmp(pbVar5 + param_1,pbVar3 + param_4,__n), iVar4 == 0)) {
        if (uVar1 == uVar6) {
          iVar4 = 0;
        }
        else {
          iVar4 = 1;
          if (uVar1 < uVar6) {
            iVar4 = -1;
          }
        }
      }
      return iVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001dd6e4("string_view::substr");
}


// ===== 001df43c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator= =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
operator=(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         basic_string_conflict *param_1)

{
  basic_string_conflict bVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string_conflict *__src;
  ulong uVar4;
  ulong __n;
  void *__dest;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (this == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_1) {
    return this;
  }
  bVar1 = *param_1;
  if (((byte)*this & 1) == 0) {
    if (((byte)bVar1 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar5 = *(undefined8 *)param_1;
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(this + 8) = uVar6;
      *(undefined8 *)this = uVar5;
      return this;
    }
    __n = *(ulong *)(param_1 + 8);
    __src = *(basic_string_conflict **)(param_1 + 0x10);
    uVar4 = __n - 0x16;
    if (__n < 0x16 || uVar4 == 0) {
      *this = SUB41((int)__n << 1,0);
      if (__n != 0) {
        memcpy(this + 1,__src,__n);
      }
      this[__n + 1] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      return this;
    }
    uVar3 = (ulong)((byte)*this >> 1);
    uVar2 = 0x16;
  }
  else {
    __n = *(ulong *)(param_1 + 8);
    __src = *(basic_string_conflict **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      __src = param_1 + 1;
      __n = (ulong)((byte)bVar1 >> 1);
    }
    uVar4 = *(ulong *)this & 0xfffffffffffffffe;
    if (__n < uVar4) {
      __dest = *(void **)(this + 0x10);
      *(ulong *)(this + 8) = __n;
      if (__n != 0) {
        memcpy(__dest,__src,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
      return this;
    }
    uVar3 = *(ulong *)(this + 8);
    uVar2 = uVar4 - 1;
    uVar4 = (__n - uVar4) + 1;
  }
  __grow_by_and_replace(this,uVar2,uVar4,uVar3,0,uVar3,__n,(char *)__src);
  return this;
}


// ===== 001df53c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(char const*) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  
  __n = strlen(param_1);
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar2 >> 1);
    uVar3 = 0x16;
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (uVar3 - uVar4 < __n) {
    __grow_by_and_replace(this,uVar3,(uVar4 + __n) - uVar3,uVar4,uVar4,0,__n,param_1);
  }
  else if (__n != 0) {
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = this + 1;
    }
    else {
      pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    memcpy(pbVar5 + uVar4,param_1,__n);
    lVar1 = uVar4 + __n;
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


// ===== 001df614  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned
   long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,basic_string_conflict *param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  basic_string_conflict *pbVar3;
  
  if (((byte)*param_3 & 1) == 0) {
    uVar2 = (ulong)((byte)*param_3 >> 1);
    if (uVar2 < param_4) {
LAB_001df660:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    pbVar3 = param_3 + 1;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    if (uVar2 < param_4) goto LAB_001df660;
    pbVar3 = *(basic_string_conflict **)(param_3 + 0x10);
  }
  uVar1 = uVar2 - param_4;
  if (param_5 <= uVar2 - param_4) {
    uVar1 = param_5;
  }
  replace(this,param_1,param_2,(char *)(pbVar3 + param_4),uVar1);
  return;
}


// ===== 001df664  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(std::__ndk1::__wrap_iter<char const*>, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          long param_2,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  
  if (((byte)*this & 1) == 0) {
    pbVar5 = this + 1;
    bVar2 = (byte)*this >> 1;
    uVar4 = (ulong)bVar2;
    uVar3 = param_2 - (long)pbVar5;
    if (bVar2 != 0x16) goto LAB_001df6e8;
    uVar4 = 0x16;
LAB_001df6c0:
    __grow_by(this,uVar4,1,uVar4,uVar3,0,1);
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    uVar3 = param_2 - (long)pbVar5;
    if ((*(ulong *)this & 0xfffffffffffffffe) - 1 == uVar4) goto LAB_001df6c0;
LAB_001df6e8:
    if (uVar4 - uVar3 != 0) {
      memmove(pbVar5 + uVar3 + 1,pbVar5 + uVar3,uVar4 - uVar3);
    }
  }
  lVar1 = uVar4 + 1;
  pbVar5[uVar3] = param_3;
  pbVar5[lVar1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
    if (((byte)*this & 1) != 0) {
      this = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
      goto LAB_001df730;
    }
  }
  this = this + 1;
LAB_001df730:
  return this + uVar3;
}


// ===== 001df748  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::resize(unsigned long, char) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  ulong uVar1;
  
  if (((byte)*this & 1) == 0) {
    uVar1 = (ulong)((byte)*this >> 1);
    if (param_1 <= uVar1) {
      this[param_1 + 1] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      *this = SUB41((int)param_1 << 1,0);
      return;
    }
  }
  else {
    uVar1 = *(ulong *)(this + 8);
    if (param_1 <= uVar1) {
      *(undefined1 *)(*(long *)(this + 0x10) + param_1) = 0;
      *(ulong *)(this + 8) = param_1;
      return;
    }
  }
  append(this,param_1 - uVar1,param_2);
  return;
}


// ===== 001df7ac  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(unsigned long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,basic_string_conflict *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  basic_string_conflict *pbVar3;
  
  if (((byte)*param_2 & 1) == 0) {
    uVar2 = (ulong)((byte)*param_2 >> 1);
    if (uVar2 < param_3) {
LAB_001df7f8:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    pbVar3 = param_2 + 1;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 8);
    if (uVar2 < param_3) goto LAB_001df7f8;
    pbVar3 = *(basic_string_conflict **)(param_2 + 0x10);
  }
  uVar1 = uVar2 - param_3;
  if (param_4 <= uVar2 - param_3) {
    uVar1 = param_4;
  }
  insert(this,param_1,(char *)(pbVar3 + param_3),uVar1);
  return;
}


// ===== 001df7fc  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::replace =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long, wchar_t const*, unsigned
   long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::replace(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,wchar_t *param_3,ulong param_4)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  long lVar1;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  ulong __n_00;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  
  if (((byte)*this & 1) == 0) {
    uVar4 = (ulong)((byte)*this >> 1);
    uVar2 = uVar4 - param_1;
    if (uVar4 < param_1) goto LAB_001df9d0;
    __n_00 = uVar2;
    if (param_2 <= uVar2) {
      __n_00 = param_2;
    }
    if ((__n_00 - uVar4) + 4 < param_4) {
      uVar3 = 4;
      goto LAB_001df88c;
    }
    pbVar5 = this + 4;
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    uVar2 = uVar4 - param_1;
    if (uVar4 < param_1) {
LAB_001df9d0:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    __n_00 = uVar2;
    if (param_2 <= uVar2) {
      __n_00 = param_2;
    }
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if ((__n_00 - uVar4) + uVar3 < param_4) {
LAB_001df88c:
      __grow_by_and_replace
                (this,uVar3,(uVar4 + param_4) - (uVar3 + __n_00),uVar4,param_1,__n_00,param_4,
                 param_3);
      return this;
    }
    pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  uVar3 = param_4;
  if ((__n_00 != param_4) && (__n = uVar2 - __n_00, uVar3 = __n_00, __n != 0)) {
    __s1 = pbVar5 + param_1 * 4;
    if (param_4 < __n_00) {
      if (param_4 != 0) {
                    /* try { // try from 001df8dc to 001df8eb has its CatchHandler @ 001df9dc */
        wmemmove((wchar_t *)__s1,param_3,param_4);
      }
                    /* try { // try from 001df8f4 to 001df8fb has its CatchHandler @ 001df9e4 */
      wmemmove((wchar_t *)(__s1 + param_4 * 4),(wchar_t *)(__s1 + __n_00 * 4),__n);
      goto LAB_001df98c;
    }
    if ((__s1 < param_3) && (param_3 < pbVar5 + uVar4 * 4)) {
      if (param_3 < __s1 + __n_00 * 4) {
        if (__n_00 != 0) {
                    /* try { // try from 001df938 to 001df947 has its CatchHandler @ 001df9d8 */
          wmemmove((wchar_t *)__s1,param_3,__n_00);
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
                    /* try { // try from 001df970 to 001df977 has its CatchHandler @ 001df9e0 */
    wmemmove((wchar_t *)(pbVar5 + param_4 * 4 + param_1 * 4),
             (wchar_t *)(pbVar5 + __n_00 * 4 + param_1 * 4),__n);
    uVar3 = __n_00;
  }
  if (param_4 != 0) {
                    /* try { // try from 001df980 to 001df98b has its CatchHandler @ 001df9e8 */
    wmemmove((wchar_t *)(pbVar5 + param_1 * 4),param_3,param_4);
  }
LAB_001df98c:
  lVar1 = (param_4 - uVar3) + uVar4;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  *(undefined4 *)(pbVar5 + lVar1 * 4) = 0;
  return this;
}


// ===== 001df9ec  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::__grow_by_and_replace =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__grow_by_and_replace(unsigned long, unsigned long, unsigned
   long, unsigned long, unsigned long, unsigned long, wchar_t const*) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__grow_by_and_replace
          (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
           *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6
          ,wchar_t *param_7)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  wchar_t *__s1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s2;
  ulong uVar3;
  
  if (0x3fffffffffffffee - param_1 < param_2) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (((byte)*this & 1) == 0) {
    __s2 = this + 4;
  }
  else {
    __s2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
             **)(this + 0x10);
  }
  if (param_1 < 0x1fffffffffffffe7) {
    uVar2 = param_1 << 1;
    if (param_1 << 1 <= param_2 + param_1) {
      uVar2 = param_2 + param_1;
    }
    uVar3 = 5;
    if (4 < uVar2) {
      uVar3 = uVar2 + 4 & 0xfffffffffffffffc;
    }
    if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar3 = 0x3fffffffffffffef;
  }
  __s1 = (wchar_t *)operator_new(uVar3 << 2);
  if (param_4 != 0) {
                    /* try { // try from 001dfaa8 to 001dfab7 has its CatchHandler @ 001dfb40 */
    wmemcpy(__s1,(wchar_t *)__s2,param_4);
  }
  if (param_6 != 0) {
                    /* try { // try from 001dfac0 to 001dfacb has its CatchHandler @ 001dfb3c */
    wmemcpy(__s1 + param_4,param_7,param_6);
  }
  __n = (param_3 - param_5) - param_4;
  if (__n != 0) {
                    /* try { // try from 001dfaec to 001dfaef has its CatchHandler @ 001dfb38 */
    wmemcpy(__s1 + param_4 + param_6,(wchar_t *)(__s2 + param_5 * 4 + param_4 * 4),__n);
  }
  if (param_1 != 4) {
    operator_delete(__s2);
  }
  lVar1 = (param_3 - param_5) + param_6;
  *(ulong *)this = uVar3 | 1;
  *(long *)(this + 8) = lVar1;
  *(wchar_t **)(this + 0x10) = __s1;
  __s1[lVar1] = L'\0';
  return;
}


// ===== 001dfb44  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::rfind =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::rfind(wchar_t const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::rfind(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
        *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  ulong uVar7;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar8;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar9;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar10;
  long lVar11;
  
  if (((byte)*this & 1) == 0) {
    pbVar6 = this + 4;
    uVar7 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar7 = *(ulong *)(this + 8);
    pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  uVar2 = uVar7;
  if (param_2 <= uVar7) {
    uVar2 = param_2;
  }
  uVar3 = uVar2 + param_3;
  if (uVar7 - uVar2 <= param_3) {
    uVar3 = uVar7;
  }
  pbVar1 = pbVar6 + uVar3 * 4;
  pbVar8 = pbVar1;
  if ((param_3 != 0) && ((long)param_3 <= (long)uVar3)) {
    pbVar10 = pbVar1;
    while (pbVar9 = pbVar10, pbVar6 + param_3 * 4 + -4 != pbVar9) {
      pbVar10 = pbVar9 + -4;
      if (*(wchar_t *)pbVar10 == param_1[param_3 - 1]) {
        lVar11 = 0;
        do {
          if (param_3 * -4 + 4 == lVar11) {
            pbVar8 = pbVar9 + lVar11 + -4;
            goto LAB_001dfbf8;
          }
          lVar5 = lVar11 + -8;
          lVar4 = lVar11 + param_3 * 4 + -8;
          lVar11 = lVar11 + -4;
        } while (*(int *)(pbVar9 + lVar5) == *(int *)((long)param_1 + lVar4));
      }
    }
  }
LAB_001dfbf8:
  lVar11 = (long)pbVar8 - (long)pbVar6 >> 2;
  if (pbVar8 == pbVar1 && param_3 != 0) {
    lVar11 = -1;
  }
  return lVar11;
}


// ===== 001dfc10  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::__init =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__init(wchar_t const*, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__init(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  ulong uVar1;
  
  if (0x3fffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (param_3 < 5) {
    __s1 = this + 4;
    *this = SUB41((int)param_2 << 1,0);
  }
  else {
    if (param_3 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar1 = param_3 + 4 & 0xfffffffffffffffc;
    __s1 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *)operator_new(uVar1 << 2);
    *(ulong *)(this + 8) = param_2;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = __s1;
    *(ulong *)this = uVar1 | 1;
  }
  if (param_2 != 0) {
                    /* try { // try from 001dfc7c to 001dfc8b has its CatchHandler @ 001dfcb4 */
    wmemcpy((wchar_t *)__s1,param_1,param_2);
  }
  *(undefined4 *)(__s1 + param_2 * 4) = 0;
  return;
}


// ===== 001dfcb8  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::basic_string =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::basic_string(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *this,basic_string_conflict *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((byte)*param_1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)this = uVar1;
    return;
  }
  __init_copy_ctor_external(this,*(wchar_t **)(param_1 + 0x10),*(ulong *)(param_1 + 8));
  return;
}


// ===== 001dfce0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::__init_copy_ctor_external =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__init_copy_ctor_external(wchar_t const*, unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__init_copy_ctor_external
          (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
           *this,wchar_t *param_1,ulong param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  ulong uVar1;
  
  if (param_2 < 5) {
    __s1 = this + 4;
    *this = SUB41((int)param_2 << 1,0);
  }
  else {
    if (0x3fffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    if (param_2 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar1 = param_2 + 4 & 0xfffffffffffffffc;
    __s1 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *)operator_new(uVar1 << 2);
    *(ulong *)(this + 8) = param_2;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = __s1;
    *(ulong *)this = uVar1 | 1;
  }
                    /* try { // try from 001dfd48 to 001dfd53 has its CatchHandler @ 001dfd78 */
  wmemcpy((wchar_t *)__s1,param_1,param_2 + 1);
  return;
}


// ===== 001dfd7c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::replace =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long, wchar_t const*) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::replace(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,wchar_t *param_3)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_3);
  replace(this,param_1,param_2,param_3,sVar1);
  return;
}


// ===== 001dfdc8  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::basic_string =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&,
   std::__ndk1::allocator<wchar_t> const&) */

void std::__ndk1::
     basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
     basic_string(basic_string_conflict *param_1,allocator *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((byte)*param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)param_1 = uVar1;
    return;
  }
  __init_copy_ctor_external
            ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)param_1,*(wchar_t **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  return;
}


// ===== 001dfdf0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find_last_not_of =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_last_not_of(wchar_t const*, unsigned long, unsigned long)
   const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_last_not_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  long lVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  
  if (((byte)*this & 1) == 0) {
    pbVar5 = this + 4;
    uVar3 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar3 = *(ulong *)(this + 8);
    pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (param_2 < uVar3) {
    uVar3 = param_2 + 1;
  }
  lVar1 = uVar3 << 2;
  do {
    lVar4 = lVar1;
    if (lVar4 == 0) {
      return -1;
    }
    if (param_3 == 0) break;
    pwVar2 = wmemchr(param_1,*(wchar_t *)(pbVar5 + lVar4 + -4),param_3);
    lVar1 = lVar4 + -4;
  } while (pwVar2 != (wchar_t *)0x0);
  return lVar4 + -4 >> 2;
}


// ===== 001dfe84  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::~basic_string =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::~basic_string() */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::~basic_string(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *this)

{
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


// ===== 001dfe98  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find_first_not_of =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_first_not_of(wchar_t const*, unsigned long, unsigned
   long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_first_not_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 4;
    uVar3 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar3 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (param_2 < uVar3) {
    lVar4 = param_2 * 4;
    do {
      lVar5 = param_2 * 4;
      if ((param_3 == 0) ||
         (pwVar2 = wmemchr(param_1,*(wchar_t *)(pbVar1 + lVar4),param_3), lVar5 = lVar4,
         pwVar2 == (wchar_t *)0x0)) {
        return lVar5 >> 2;
      }
      lVar4 = lVar4 + 4;
    } while (uVar3 * 4 - lVar4 != 0);
  }
  return -1;
}


// ===== 001dff34  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, unsigned long, wchar_t) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,ulong param_2,wchar_t param_3)

{
  long lVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  
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
    uVar3 = 4;
    if (param_2 <= 4 - uVar4) {
      pbVar5 = this + 4;
joined_r0x001dffe4:
      if (uVar4 - param_1 != 0) {
                    /* try { // try from 001dfff0 to 001dfff3 has its CatchHandler @ 001e0044 */
        wmemmove((wchar_t *)(pbVar5 + param_1 * 4 + param_2 * 4),(wchar_t *)(pbVar5 + param_1 * 4),
                 uVar4 - param_1);
      }
      goto LAB_001dfff4;
    }
  }
  else {
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (param_2 <= uVar3 - uVar4) {
      pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
      goto joined_r0x001dffe4;
    }
  }
  __grow_by(this,uVar3,(uVar4 + param_2) - uVar3,uVar4,param_1,0,param_2);
  pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
             **)(this + 0x10);
LAB_001dfff4:
                    /* try { // try from 001dfff8 to 001e0003 has its CatchHandler @ 001e0048 */
  wmemset((wchar_t *)(pbVar5 + param_1 * 4),param_3,param_2);
  lVar1 = uVar4 + param_2;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  *(undefined4 *)(pbVar5 + lVar1 * 4) = 0;
  return this;
}


// ===== 001e004c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::__grow_by =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__grow_by(unsigned long, unsigned long, unsigned long,
   unsigned long, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__grow_by(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
           ulong param_6)

{
  ulong uVar1;
  size_t __n;
  wchar_t *__s1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s2;
  ulong uVar2;
  
  uVar2 = 0x3fffffffffffffef;
  if (0x3fffffffffffffef - param_1 < param_2) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (((byte)*this & 1) == 0) {
    __s2 = this + 4;
  }
  else {
    __s2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
             **)(this + 0x10);
  }
  if (param_1 < 0x1fffffffffffffe7) {
    uVar1 = param_1 << 1;
    if (param_1 << 1 <= param_2 + param_1) {
      uVar1 = param_2 + param_1;
    }
    uVar2 = 5;
    if (4 < uVar1) {
      uVar2 = uVar1 + 4 & 0xfffffffffffffffc;
    }
    if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  __s1 = (wchar_t *)operator_new(uVar2 << 2);
  if (param_4 != 0) {
                    /* try { // try from 001e00f4 to 001e0103 has its CatchHandler @ 001e0178 */
    wmemcpy(__s1,(wchar_t *)__s2,param_4);
  }
  __n = (param_3 - param_5) - param_4;
  if (__n != 0) {
                    /* try { // try from 001e0124 to 001e0127 has its CatchHandler @ 001e0174 */
    wmemcpy(__s1 + param_4 + param_6,(wchar_t *)(__s2 + param_5 * 4 + param_4 * 4),__n);
  }
  if (param_1 != 4) {
    operator_delete(__s2);
  }
  *(wchar_t **)(this + 0x10) = __s1;
  *(ulong *)this = uVar2 | 1;
  return;
}


// ===== 001e017c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::operator= =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::TEMPNAMEPLACEHOLDERVALUE(wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::operator=(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *this,wchar_t param_1)

{
  wchar_t *pwVar1;
  
  if (((byte)*this & 1) == 0) {
    *this = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            )0x2;
    *(wchar_t *)(this + 4) = param_1;
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  pwVar1 = *(wchar_t **)(this + 0x10);
  *(undefined8 *)(this + 8) = 1;
  *pwVar1 = param_1;
  pwVar1[1] = L'\0';
  return;
}


// ===== 001e01ac  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::__init =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__init(wchar_t const*, unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__init(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,wchar_t *param_1,ulong param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  ulong uVar1;
  
  if (0x3fffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (param_2 < 5) {
    __s1 = this + 4;
    *this = SUB41((int)param_2 << 1,0);
    if (param_2 == 0) goto LAB_001e0224;
  }
  else {
    if (param_2 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar1 = param_2 + 4 & 0xfffffffffffffffc;
    __s1 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *)operator_new(uVar1 << 2);
    *(ulong *)(this + 8) = param_2;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = __s1;
    *(ulong *)this = uVar1 | 1;
  }
                    /* try { // try from 001e0214 to 001e0223 has its CatchHandler @ 001e024c */
  wmemcpy((wchar_t *)__s1,param_1,param_2);
LAB_001e0224:
  *(undefined4 *)(__s1 + param_2 * 4) = 0;
  return;
}


// ===== 001e0250  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::at =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::at(unsigned long) const */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::at(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this,
    ulong param_1)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  
  if (((byte)*this & 1) == 0) {
    if ((byte)*this >> 1 <= param_1) {
LAB_001e028c:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    pbVar1 = this + 4;
  }
  else {
    if (*(ulong *)(this + 8) <= param_1) goto LAB_001e028c;
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  return pbVar1 + param_1 * 4;
}


// ===== 001e0290  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, wchar_t const*, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t *param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s2;
  long lVar1;
  wchar_t *pwVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  
  bVar3 = *this;
  if (((byte)bVar3 & 1) == 0) {
    uVar5 = (ulong)((byte)bVar3 >> 1);
    if (uVar5 < param_1) {
LAB_001e03ac:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    uVar4 = 4;
  }
  else {
    uVar5 = *(ulong *)(this + 8);
    if (uVar5 < param_1) goto LAB_001e03ac;
    uVar4 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (uVar4 - uVar5 < param_3) {
    __grow_by_and_replace(this,uVar4,(uVar5 + param_3) - uVar4,uVar5,param_1,0,param_3,param_2);
  }
  else if (param_3 != 0) {
    if (((byte)bVar3 & 1) == 0) {
      pbVar6 = this + 4;
    }
    else {
      pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    if (uVar5 - param_1 != 0) {
      __s2 = pbVar6 + param_1 * 4;
      pwVar2 = param_2 + param_3;
      if (pbVar6 + uVar5 * 4 <= param_2 || param_2 < __s2) {
        pwVar2 = param_2;
      }
                    /* try { // try from 001e0360 to 001e0363 has its CatchHandler @ 001e03b4 */
      wmemmove((wchar_t *)(__s2 + param_3 * 4),(wchar_t *)__s2,uVar5 - param_1);
      param_2 = pwVar2;
    }
                    /* try { // try from 001e0368 to 001e0373 has its CatchHandler @ 001e03b8 */
    wmemmove((wchar_t *)(pbVar6 + param_1 * 4),param_2,param_3);
    lVar1 = uVar5 + param_3;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    *(undefined4 *)(pbVar6 + lVar1 * 4) = 0;
  }
  return this;
}


// ===== 001e03bc  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find_first_of =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_first_of(wchar_t const*, unsigned long, unsigned long)
   const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_first_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  long lVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  ulong uVar6;
  wchar_t *pwVar7;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 4;
    uVar6 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar6 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if ((param_3 == 0) || (uVar6 <= param_2)) {
    return -1;
  }
  pbVar4 = pbVar1 + param_2 * 4;
  pbVar2 = pbVar1 + uVar6 * 4;
  do {
    lVar3 = param_3 << 2;
    pwVar7 = param_1;
    do {
      pbVar5 = pbVar4;
      if (*(wchar_t *)pbVar4 == *pwVar7) goto LAB_001e0428;
      lVar3 = lVar3 + -4;
      pwVar7 = pwVar7 + 1;
    } while (lVar3 != 0);
    pbVar4 = pbVar4 + 4;
    pbVar5 = pbVar2;
  } while (pbVar4 != pbVar2);
LAB_001e0428:
  lVar3 = (long)pbVar5 - (long)pbVar1 >> 2;
  if (pbVar5 == pbVar2) {
    lVar3 = -1;
  }
  return lVar3;
}


// ===== 001e043c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::replace =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long, unsigned long, wchar_t)
    */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::replace(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,ulong param_3,wchar_t param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  
  if (((byte)*this & 1) == 0) {
    uVar4 = (ulong)((byte)*this >> 1);
    uVar2 = uVar4 - param_1;
    if (uVar4 < param_1) {
LAB_001e057c:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    uVar5 = uVar2;
    if (param_2 <= uVar2) {
      uVar5 = param_2;
    }
    if ((uVar5 - uVar4) + 4 < param_3) {
      uVar3 = 4;
      goto LAB_001e04c8;
    }
    pbVar6 = this + 4;
joined_r0x001e050c:
    if ((uVar5 != param_3) && (uVar2 - uVar5 != 0)) {
                    /* try { // try from 001e0524 to 001e0527 has its CatchHandler @ 001e0584 */
      wmemmove((wchar_t *)(pbVar6 + param_3 * 4 + param_1 * 4),
               (wchar_t *)(pbVar6 + uVar5 * 4 + param_1 * 4),uVar2 - uVar5);
    }
    if (param_3 == 0) goto LAB_001e053c;
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    uVar2 = uVar4 - param_1;
    if (uVar4 < param_1) goto LAB_001e057c;
    uVar5 = uVar2;
    if (param_2 <= uVar2) {
      uVar5 = param_2;
    }
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (param_3 <= (uVar5 - uVar4) + uVar3) {
      pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
      goto joined_r0x001e050c;
    }
LAB_001e04c8:
    __grow_by(this,uVar3,(uVar4 + param_3) - (uVar3 + uVar5),uVar4,param_1,uVar5,param_3);
    pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
                    /* try { // try from 001e0530 to 001e053b has its CatchHandler @ 001e0588 */
  wmemset((wchar_t *)(pbVar6 + param_1 * 4),param_4,param_3);
LAB_001e053c:
  lVar1 = (param_3 - uVar5) + uVar4;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  *(undefined4 *)(pbVar6 + lVar1 * 4) = 0;
  return this;
}


// ===== 001e058c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::assign(wchar_t const*, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::assign(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,wchar_t *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  
  if (((byte)*this & 1) == 0) {
    if (param_2 < 5) {
      __s1 = this + 4;
joined_r0x001e0608:
      if (param_2 != 0) {
                    /* try { // try from 001e060c to 001e061b has its CatchHandler @ 001e064c */
        wmemmove((wchar_t *)__s1,param_1,param_2);
      }
      *(undefined4 *)(__s1 + param_2 * 4) = 0;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)param_2 << 1,0);
        return this;
      }
      *(ulong *)(this + 8) = param_2;
      return this;
    }
    uVar2 = (ulong)((byte)*this >> 1);
    uVar1 = 4;
  }
  else {
    uVar1 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (param_2 <= uVar1) {
      __s1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
      goto joined_r0x001e0608;
    }
    uVar2 = *(ulong *)(this + 8);
  }
  __grow_by_and_replace(this,uVar1,param_2 - uVar1,uVar2,0,uVar2,param_2,param_1);
  return this;
}


// ===== 001e0650  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::reserve =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::reserve(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  bool bVar3;
  bool bVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  ulong uVar5;
  ulong uVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s2;
  ulong uVar7;
  
  if (0x3fffffffffffffef < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar7 = (ulong)((byte)bVar2 >> 1);
    uVar5 = 4;
  }
  else {
    uVar7 = *(ulong *)(this + 8);
    uVar5 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  uVar1 = uVar7;
  if (uVar7 <= param_1) {
    uVar1 = param_1;
  }
  uVar6 = (uVar1 + 4 & 0xfffffffffffffffc) - 1;
  if (uVar1 < 5) {
    uVar6 = 4;
  }
  if (uVar6 == uVar5) {
    return;
  }
  if (uVar6 == 4) {
    __s2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
             **)(this + 0x10);
    bVar4 = false;
    __s1 = this + 4;
    if (((byte)bVar2 & 1) == 0) {
      bVar3 = true;
LAB_001e0720:
      uVar5 = (ulong)((byte)bVar2 >> 1);
      goto joined_r0x001e0728;
    }
  }
  else {
    uVar1 = uVar6 + 1;
    if (uVar5 < uVar6) {
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __s1 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)operator_new(uVar1 * 4);
    }
    else {
      if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 001e07ac to 001e07b7 has its CatchHandler @ 001e07b8 */
                    /* WARNING: Subroutine does not return */
        FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 001e0708 to 001e070b has its CatchHandler @ 001e07b8 */
      __s1 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)operator_new(uVar1 * 4);
    }
    if (((byte)bVar2 & 1) == 0) {
      bVar3 = false;
      __s2 = this + 4;
      bVar4 = true;
      goto LAB_001e0720;
    }
    __s2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
             **)(this + 0x10);
    bVar4 = true;
  }
  uVar5 = *(ulong *)(this + 8);
  bVar3 = true;
joined_r0x001e0728:
  if (uVar5 != 0xffffffffffffffff) {
                    /* try { // try from 001e0748 to 001e0753 has its CatchHandler @ 001e07d4 */
    wmemcpy((wchar_t *)__s1,(wchar_t *)__s2,uVar5 + 1);
  }
  if (bVar3) {
    operator_delete(__s2);
  }
  if (bVar4) {
    *(ulong *)this = uVar6 + 1 | 1;
    *(ulong *)(this + 8) = uVar7;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = __s1;
  }
  else {
    *this = SUB41((int)uVar7 << 1,0);
  }
  return;
}


// ===== 001e07d8  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::append(wchar_t const*, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::append(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,wchar_t *param_1,ulong param_2)

{
  long lVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar2 >> 1);
    uVar3 = 4;
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
      pbVar5 = this + 4;
    }
    else {
      pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
                    /* try { // try from 001e085c to 001e0867 has its CatchHandler @ 001e089c */
    wmemcpy((wchar_t *)(pbVar5 + uVar4 * 4),param_1,param_2);
    lVar1 = uVar4 + param_2;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    *(undefined4 *)(pbVar5 + lVar1 * 4) = 0;
  }
  return this;
}


// ===== 001e08a0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::assign(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long,
   unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::assign(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,basic_string_conflict *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  basic_string_conflict *pbVar3;
  
  if (((byte)*param_1 & 1) == 0) {
    uVar2 = (ulong)((byte)*param_1 >> 1);
    if (uVar2 < param_2) {
LAB_001e08ec:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    pbVar3 = param_1 + 4;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 < param_2) goto LAB_001e08ec;
    pbVar3 = *(basic_string_conflict **)(param_1 + 0x10);
  }
  uVar1 = uVar2 - param_2;
  if (param_3 <= uVar2 - param_2) {
    uVar1 = param_3;
  }
  assign(this,(wchar_t *)(pbVar3 + param_2 * 4),uVar1);
  return;
}


// ===== 001e08f0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::copy =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::copy(wchar_t*, unsigned long, unsigned long) const */

size_t __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::copy(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this
      ,wchar_t *param_1,ulong param_2,ulong param_3)

{
  ulong __n;
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  
  if (((byte)*this & 1) == 0) {
    uVar1 = (ulong)((byte)*this >> 1);
    __n = uVar1 - param_3;
    if (uVar1 < param_3) {
LAB_001e0964:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    if (param_2 <= __n) {
      __n = param_2;
    }
    pbVar2 = this + 4;
  }
  else {
    __n = *(ulong *)(this + 8) - param_3;
    if (*(ulong *)(this + 8) < param_3) goto LAB_001e0964;
    pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    if (param_2 <= __n) {
      __n = param_2;
    }
  }
  if (__n != 0) {
                    /* try { // try from 001e0944 to 001e0953 has its CatchHandler @ 001e0968 */
    wmemcpy(param_1,(wchar_t *)(pbVar2 + param_3 * 4),__n);
  }
  return __n;
}


// ===== 001e096c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::basic_string =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long,
   unsigned long, std::__ndk1::allocator<wchar_t> const&) */

void std::__ndk1::
     basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
     basic_string(basic_string_conflict *param_1,ulong param_2,ulong param_3,allocator *param_4)

{
  allocator *__n;
  ulong uVar1;
  basic_string_conflict *__s1;
  long lVar2;
  
  if ((*(byte *)param_2 & 1) == 0) {
    uVar1 = (ulong)(*(byte *)param_2 >> 1);
    if (uVar1 < param_3) {
LAB_001e0a34:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    lVar2 = param_2 + 4;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 8);
    if (uVar1 < param_3) goto LAB_001e0a34;
    lVar2 = *(long *)(param_2 + 0x10);
  }
  __n = (allocator *)(uVar1 - param_3);
  if (param_4 <= (allocator *)(uVar1 - param_3)) {
    __n = param_4;
  }
  if ((allocator *)0x3fffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < (allocator *)0x5) {
    __s1 = param_1 + 4;
    *param_1 = SUB41((int)__n << 1,0);
    if (__n == (allocator *)0x0) goto LAB_001e0a1c;
  }
  else {
    if ((ulong)(__n + 4) >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar1 = (ulong)(__n + 4) & 0xfffffffffffffffc;
    __s1 = (basic_string_conflict *)operator_new(uVar1 << 2);
    *(allocator **)(param_1 + 8) = __n;
    *(basic_string_conflict **)(param_1 + 0x10) = __s1;
    *(ulong *)param_1 = uVar1 | 1;
  }
                    /* try { // try from 001e0a10 to 001e0a1b has its CatchHandler @ 001e0a50 */
  wmemcpy((wchar_t *)__s1,(wchar_t *)(lVar2 + param_3 * 4),(size_t)__n);
LAB_001e0a1c:
  *(undefined4 *)(__s1 + (long)__n * 4) = 0;
  return;
}


// ===== 001e0a54  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find(wchar_t, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this
      ,wchar_t param_1,ulong param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  
  if (((byte)*this & 1) == 0) {
    pbVar4 = this + 4;
    uVar3 = (ulong)((byte)*this >> 1);
    __n = uVar3 - param_2;
    bVar1 = __n == 0;
    if (param_2 <= uVar3 && !bVar1) {
LAB_001e0a8c:
      if (bVar1) {
        pwVar2 = (wchar_t *)0x0;
      }
      else {
        pwVar2 = wmemchr((wchar_t *)(pbVar4 + param_2 * 4),param_1,__n);
      }
      if (pwVar2 != (wchar_t *)0x0) {
        return (long)pwVar2 - (long)pbVar4 >> 2;
      }
      return -1;
    }
  }
  else {
    pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    __n = *(ulong *)(this + 8) - param_2;
    bVar1 = __n == 0;
    if (param_2 <= *(ulong *)(this + 8) && !bVar1) goto LAB_001e0a8c;
  }
  return -1;
}


// ===== 001e0ac0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::__init =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__init(unsigned long, wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__init(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s;
  ulong uVar1;
  
  if (0x3fffffffffffffef < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (param_1 < 5) {
    __s = this + 4;
    *this = SUB41((int)param_1 << 1,0);
    if (param_1 == 0) goto LAB_001e0b38;
  }
  else {
    if (param_1 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar1 = param_1 + 4 & 0xfffffffffffffffc;
    __s = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *
          )operator_new(uVar1 << 2);
    *(ulong *)(this + 8) = param_1;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = __s;
    *(ulong *)this = uVar1 | 1;
  }
                    /* try { // try from 001e0b28 to 001e0b37 has its CatchHandler @ 001e0b60 */
  wmemset((wchar_t *)__s,param_2,param_1);
LAB_001e0b38:
  *(undefined4 *)(__s + param_1 * 4) = 0;
  return;
}


// ===== 001e0b64  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, wchar_t const*) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t *param_2)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_2);
  insert(this,param_1,param_2,sVar1);
  return;
}


// ===== 001e0ba8  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find_last_of =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_last_of(wchar_t const*, unsigned long, unsigned long)
   const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_last_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  wchar_t *pwVar2;
  long lVar3;
  ulong uVar4;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 4;
    uVar4 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (param_3 == 0) {
LAB_001e0c14:
    lVar3 = -1;
  }
  else {
    if (param_2 < uVar4) {
      uVar4 = param_2 + 1;
    }
    lVar3 = uVar4 << 2;
    do {
      if (lVar3 == 0) goto LAB_001e0c14;
      pwVar2 = wmemchr(param_1,*(wchar_t *)(pbVar1 + lVar3 + -4),param_3);
      lVar3 = lVar3 + -4;
    } while (pwVar2 == (wchar_t *)0x0);
    lVar3 = lVar3 >> 2;
  }
  return lVar3;
}


// ===== 001e0c28  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::push_back =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::push_back(wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::push_back(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *this,wchar_t param_1)

{
  byte bVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  ulong uVar4;
  
  if (((byte)*this & 1) == 0) {
    bVar1 = (byte)*this >> 1;
    uVar4 = (ulong)bVar1;
    if (bVar1 == 4) {
      uVar4 = 4;
      uVar2 = 4;
LAB_001e0c74:
      __grow_by(this,uVar2,1,uVar2,uVar2,0,0);
      if (((byte)*this & 1) != 0) goto LAB_001e0ca8;
    }
    pbVar3 = this + 4;
    *this = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            )((char)uVar4 * '\x02' + '\x02');
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (uVar4 == uVar2) goto LAB_001e0c74;
LAB_001e0ca8:
    pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    *(ulong *)(this + 8) = uVar4 + 1;
  }
  *(wchar_t *)(pbVar3 + uVar4 * 4) = param_1;
  *(undefined4 *)(pbVar3 + uVar4 * 4 + 4) = 0;
  return;
}


// ===== 001e0cd0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::append(unsigned long, wchar_t) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::append(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  long lVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  
  if (param_1 != 0) {
    bVar2 = *this;
    uVar4 = (ulong)(byte)bVar2;
    if (((byte)bVar2 & 1) == 0) {
      uVar5 = (ulong)((byte)bVar2 >> 1);
      uVar3 = 4;
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
      pbVar6 = this + 4;
    }
    else {
      pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
                    /* try { // try from 001e0d58 to 001e0d63 has its CatchHandler @ 001e0d9c */
    wmemset((wchar_t *)(pbVar6 + uVar5 * 4),param_2,param_1);
    lVar1 = uVar5 + param_1;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    *(undefined4 *)(pbVar6 + lVar1 * 4) = 0;
  }
  return this;
}


// ===== 001e0da0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::rfind =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::rfind(wchar_t, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::rfind(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
        *this,wchar_t param_1,ulong param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 4;
    uVar3 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar3 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (uVar3 != 0) {
    if (param_2 < uVar3) {
      uVar3 = param_2 + 1;
    }
    lVar4 = uVar3 << 2;
    while (lVar4 != 0) {
      lVar2 = lVar4 + -4;
      lVar4 = lVar4 + -4;
      if (*(wchar_t *)(pbVar1 + lVar2) == param_1) {
        return lVar4 >> 2;
      }
    }
  }
  return -1;
}


// ===== 001e0df4  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::assign(unsigned long, wchar_t) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::assign(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s;
  
  bVar1 = *this;
  uVar3 = (ulong)(byte)bVar1;
  if (((byte)bVar1 & 1) == 0) {
    if (param_1 < 5) goto LAB_001e0e60;
    uVar3 = (ulong)((byte)bVar1 >> 1);
    uVar2 = 4;
  }
  else {
    uVar3 = *(ulong *)this;
    uVar2 = (uVar3 & 0xfffffffffffffffe) - 1;
    if (param_1 <= uVar2) goto LAB_001e0e60;
    uVar3 = *(ulong *)(this + 8);
  }
  __grow_by(this,uVar2,param_1 - uVar2,uVar3,0,uVar3,0);
  uVar3 = (ulong)(byte)*this;
LAB_001e0e60:
  if ((uVar3 & 1) == 0) {
    __s = this + 4;
  }
  else {
    __s = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            **)(this + 0x10);
  }
  if (param_1 != 0) {
                    /* try { // try from 001e0e78 to 001e0e87 has its CatchHandler @ 001e0eb8 */
    wmemset((wchar_t *)__s,param_2,param_1);
  }
  *(undefined4 *)(__s + param_1 * 4) = 0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)param_1 << 1,0);
  }
  else {
    *(ulong *)(this + 8) = param_1;
  }
  return this;
}


// ===== 001e0ebc  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::erase =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::erase(unsigned long, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::erase(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
        *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar3 = (ulong)((byte)bVar2 >> 1);
  }
  else {
    uVar3 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar3) {
    if (param_2 != 0) {
      if (param_2 == 0xffffffffffffffff) {
        if (((byte)bVar2 & 1) == 0) {
          *(undefined4 *)(this + param_1 * 4 + 4) = 0;
          *this = SUB41((int)param_1 << 1,0);
        }
        else {
          *(undefined4 *)(*(long *)(this + 0x10) + param_1 * 4) = 0;
          *(ulong *)(this + 8) = param_1;
        }
      }
      else {
        if (((byte)bVar2 & 1) == 0) {
          uVar3 = (ulong)((byte)bVar2 >> 1);
          pbVar6 = this + 4;
        }
        else {
          uVar3 = *(ulong *)(this + 8);
          pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                     **)(this + 0x10);
        }
        uVar4 = uVar3 - param_1;
        uVar1 = uVar4;
        if (param_2 <= uVar4) {
          uVar1 = param_2;
        }
        if (uVar4 - uVar1 != 0) {
                    /* try { // try from 001e0f50 to 001e0f53 has its CatchHandler @ 001e0f90 */
          wmemmove((wchar_t *)(pbVar6 + param_1 * 4),(wchar_t *)(pbVar6 + param_1 * 4 + uVar1 * 4),
                   uVar4 - uVar1);
          bVar2 = *this;
        }
        lVar5 = uVar3 - uVar1;
        if (((byte)bVar2 & 1) == 0) {
          *this = SUB41((int)lVar5 << 1,0);
        }
        else {
          *(long *)(this + 8) = lVar5;
        }
        *(undefined4 *)(pbVar6 + lVar5 * 4) = 0;
      }
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}


// ===== 001e0f94  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::append(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long,
   unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::append(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,basic_string_conflict *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  basic_string_conflict *pbVar3;
  
  if (((byte)*param_1 & 1) == 0) {
    uVar2 = (ulong)((byte)*param_1 >> 1);
    if (uVar2 < param_2) {
LAB_001e0fe0:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    pbVar3 = param_1 + 4;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 < param_2) goto LAB_001e0fe0;
    pbVar3 = *(basic_string_conflict **)(param_1 + 0x10);
  }
  uVar1 = uVar2 - param_2;
  if (param_3 <= uVar2 - param_2) {
    uVar1 = param_3;
  }
  append(this,(wchar_t *)(pbVar3 + param_2 * 4),uVar1);
  return;
}


// ===== 001e0fe4  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::compare =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(wchar_t const*) const */

uint __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,wchar_t *param_1)

{
  size_t __n;
  uint uVar1;
  size_t sVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  ulong uVar3;
  
  sVar2 = wcslen(param_1);
  if (((byte)*this & 1) == 0) {
    if (sVar2 == 0xffffffffffffffff) {
LAB_001e1060:
                    /* try { // try from 001e1060 to 001e1067 has its CatchHandler @ 001e1068 */
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    uVar3 = (ulong)((byte)*this >> 1);
    __s1 = this + 4;
  }
  else {
    if (sVar2 == 0xffffffffffffffff) goto LAB_001e1060;
    uVar3 = *(ulong *)(this + 8);
    __s1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
             **)(this + 0x10);
  }
  __n = sVar2;
  if (uVar3 <= sVar2) {
    __n = uVar3;
  }
  if (((__n == 0) || (uVar1 = wmemcmp((wchar_t *)__s1,param_1,__n), uVar1 == 0)) &&
     (uVar1 = (uint)(sVar2 < uVar3), uVar3 < sVar2)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 001e106c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::compare =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(unsigned long, unsigned long, wchar_t const*, unsigned
   long) const */

uint __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,wchar_t *param_3,ulong param_4)

{
  size_t __n;
  uint uVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  ulong uVar4;
  
  if (((byte)*this & 1) == 0) {
    if ((param_4 == 0xffffffffffffffff) ||
       (uVar2 = (ulong)((byte)*this >> 1), uVar4 = uVar2 - param_1, uVar2 < param_1)) {
LAB_001e10fc:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    if (param_2 <= uVar4) {
      uVar4 = param_2;
    }
    pbVar3 = this + 4;
  }
  else {
    if ((param_4 == 0xffffffffffffffff) ||
       (uVar4 = *(ulong *)(this + 8) - param_1, *(ulong *)(this + 8) < param_1)) goto LAB_001e10fc;
    pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    if (param_2 <= uVar4) {
      uVar4 = param_2;
    }
  }
  __n = param_4;
  if (uVar4 <= param_4) {
    __n = uVar4;
  }
  if (((__n == 0) || (uVar1 = wmemcmp((wchar_t *)(pbVar3 + param_1 * 4),param_3,__n), uVar1 == 0))
     && (uVar1 = (uint)(param_4 < uVar4), uVar4 < param_4)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 001e1100  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::compare =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(unsigned long, unsigned long, wchar_t const*) const */

uint __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,wchar_t *param_3)

{
  size_t __n;
  uint uVar1;
  size_t sVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  ulong uVar5;
  
  sVar2 = wcslen(param_3);
  if (((byte)*this & 1) == 0) {
    if ((sVar2 == 0xffffffffffffffff) ||
       (uVar3 = (ulong)((byte)*this >> 1), uVar5 = uVar3 - param_1, uVar3 < param_1)) {
LAB_001e11b4:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    if (param_2 <= uVar5) {
      uVar5 = param_2;
    }
    pbVar4 = this + 4;
  }
  else {
    if ((sVar2 == 0xffffffffffffffff) ||
       (uVar5 = *(ulong *)(this + 8) - param_1, *(ulong *)(this + 8) < param_1)) goto LAB_001e11b4;
    pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    if (param_2 <= uVar5) {
      uVar5 = param_2;
    }
  }
  __n = sVar2;
  if (uVar5 <= sVar2) {
    __n = uVar5;
  }
  if (((__n == 0) || (uVar1 = wmemcmp((wchar_t *)(pbVar4 + param_1 * 4),param_3,__n), uVar1 == 0))
     && (uVar1 = (uint)(sVar2 < uVar5), uVar5 < sVar2)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 001e11bc  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::at =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::at(unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::at(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this,
    ulong param_1)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  
  if (((byte)*this & 1) == 0) {
    if ((byte)*this >> 1 <= param_1) {
LAB_001e11f8:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    pbVar1 = this + 4;
  }
  else {
    if (*(ulong *)(this + 8) <= param_1) goto LAB_001e11f8;
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  return pbVar1 + param_1 * 4;
}


// ===== 001e11fc  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::assign(wchar_t const*) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::assign(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,wchar_t *param_1)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  assign(this,param_1,sVar1);
  return;
}


// ===== 001e1230  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find(wchar_t const*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this
      ,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  wchar_t __c;
  int iVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  ulong uVar5;
  long lVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 4;
    uVar5 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar5 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (uVar5 < param_2) {
    param_2 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    pbVar4 = pbVar1 + param_2 * 4;
    pbVar2 = pbVar1 + uVar5 * 4;
    lVar6 = (long)pbVar2 - (long)pbVar4 >> 2;
    pbVar7 = pbVar2;
    if ((long)param_3 <= lVar6) {
      __c = *param_1;
      do {
        pbVar7 = pbVar2;
        if (((0xfffffffffffffffe < lVar6 - param_3) ||
            (pbVar4 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                       *)wmemchr((wchar_t *)pbVar4,__c,(lVar6 - param_3) + 1),
            pbVar4 == (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                       *)0x0)) ||
           (iVar3 = wmemcmp((wchar_t *)pbVar4,param_1,param_3), pbVar7 = pbVar4, iVar3 == 0)) break;
        pbVar4 = pbVar4 + 4;
        lVar6 = (long)pbVar2 - (long)pbVar4 >> 2;
        pbVar7 = pbVar2;
      } while ((long)param_3 <= lVar6);
    }
    param_2 = (long)pbVar7 - (long)pbVar1 >> 2;
    if (pbVar7 == pbVar2) {
      param_2 = 0xffffffffffffffff;
    }
  }
  return param_2;
}


// ===== 001e1308  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::compare =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(unsigned long, unsigned long,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long) const */

int __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,basic_string_conflict *param_3,ulong param_4,
         ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  basic_string_conflict *pbVar3;
  int iVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  ulong uVar6;
  
  uVar1 = (ulong)((byte)*param_3 >> 1);
  pbVar3 = param_3 + 4;
  if (((byte)*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
    pbVar3 = *(basic_string_conflict **)(param_3 + 0x10);
  }
  if (((byte)*this & 1) == 0) {
    pbVar5 = this + 4;
    uVar6 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar6 = *(ulong *)(this + 8);
    pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (param_1 <= uVar6) {
    uVar2 = uVar6 - param_1;
    if (param_2 <= uVar6 - param_1) {
      uVar2 = param_2;
    }
    if (param_4 <= uVar1) {
      uVar6 = uVar1 - param_4;
      if (param_5 <= uVar1 - param_4) {
        uVar6 = param_5;
      }
      __n = uVar6;
      if (uVar2 <= uVar6) {
        __n = uVar2;
      }
      if ((__n == 0) ||
         (iVar4 = wmemcmp((wchar_t *)(pbVar5 + param_1 * 4),(wchar_t *)(pbVar3 + param_4 * 4),__n),
         iVar4 == 0)) {
        if (uVar2 == uVar6) {
          iVar4 = 0;
        }
        else {
          iVar4 = 1;
          if (uVar2 < uVar6) {
            iVar4 = -1;
          }
        }
      }
      return iVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001dd6e4("string_view::substr");
}


// ===== 001e13b4  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::operator= =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::operator=(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *this,basic_string_conflict *param_1)

{
  basic_string_conflict bVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string_conflict *__s2;
  ulong uVar4;
  ulong __n;
  wchar_t *__s1;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (this == (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)param_1) {
    return this;
  }
  bVar1 = *param_1;
  if (((byte)*this & 1) == 0) {
    if (((byte)bVar1 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar5 = *(undefined8 *)param_1;
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(this + 8) = uVar6;
      *(undefined8 *)this = uVar5;
      return this;
    }
    __n = *(ulong *)(param_1 + 8);
    __s2 = *(basic_string_conflict **)(param_1 + 0x10);
    uVar4 = __n - 4;
    if (__n < 4 || uVar4 == 0) {
      *this = SUB41((int)__n << 1,0);
      if (__n != 0) {
                    /* try { // try from 001e145c to 001e1467 has its CatchHandler @ 001e14b8 */
        wmemcpy((wchar_t *)(this + 4),(wchar_t *)__s2,__n);
      }
      *(undefined4 *)(this + __n * 4 + 4) = 0;
      return this;
    }
    uVar3 = (ulong)((byte)*this >> 1);
    uVar2 = 4;
  }
  else {
    __n = (ulong)((byte)bVar1 >> 1);
    __s2 = param_1 + 4;
    if (((byte)bVar1 & 1) != 0) {
      __n = *(ulong *)(param_1 + 8);
      __s2 = *(basic_string_conflict **)(param_1 + 0x10);
    }
    uVar4 = *(ulong *)this & 0xfffffffffffffffe;
    if (__n < uVar4) {
      __s1 = *(wchar_t **)(this + 0x10);
      *(ulong *)(this + 8) = __n;
      if (__n != 0) {
                    /* try { // try from 001e1428 to 001e1437 has its CatchHandler @ 001e14bc */
        wmemcpy(__s1,(wchar_t *)__s2,__n);
      }
      __s1[__n] = L'\0';
      return this;
    }
    uVar3 = *(ulong *)(this + 8);
    uVar2 = uVar4 - 1;
    uVar4 = (__n - uVar4) + 1;
  }
  __grow_by_and_replace(this,uVar2,uVar4,uVar3,0,uVar3,__n,(wchar_t *)__s2);
  return this;
}


// ===== 001e14c0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::append(wchar_t const*) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::append(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,wchar_t *param_1)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  append(this,param_1,sVar1);
  return;
}


// ===== 001e14f4  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::replace =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::replace(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,basic_string_conflict *param_3,ulong param_4,
         ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  basic_string_conflict *pbVar3;
  
  if (((byte)*param_3 & 1) == 0) {
    uVar2 = (ulong)((byte)*param_3 >> 1);
    if (uVar2 < param_4) {
LAB_001e1540:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    pbVar3 = param_3 + 4;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    if (uVar2 < param_4) goto LAB_001e1540;
    pbVar3 = *(basic_string_conflict **)(param_3 + 0x10);
  }
  uVar1 = uVar2 - param_4;
  if (param_5 <= uVar2 - param_4) {
    uVar1 = param_5;
  }
  replace(this,param_1,param_2,(wchar_t *)(pbVar3 + param_4 * 4),uVar1);
  return;
}


// ===== 001e1544  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(std::__ndk1::__wrap_iter<wchar_t const*>, wchar_t) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,long param_2,undefined4 param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  
  if (((byte)*this & 1) == 0) {
    pbVar5 = this + 4;
    bVar2 = (byte)*this >> 1;
    uVar4 = (ulong)bVar2;
    uVar3 = param_2 - (long)pbVar5 >> 2;
    if (bVar2 != 4) goto LAB_001e15d0;
    uVar4 = 4;
LAB_001e15a8:
    __grow_by(this,uVar4,1,uVar4,uVar3,0,1);
    pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    uVar3 = param_2 - (long)pbVar5 >> 2;
    if ((*(ulong *)this & 0xfffffffffffffffe) - 1 == uVar4) goto LAB_001e15a8;
LAB_001e15d0:
    if (uVar4 - uVar3 != 0) {
                    /* try { // try from 001e15e0 to 001e15e3 has its CatchHandler @ 001e1630 */
      wmemmove((wchar_t *)(pbVar5 + uVar3 * 4 + 4),(wchar_t *)(pbVar5 + uVar3 * 4),uVar4 - uVar3);
    }
  }
  lVar1 = uVar4 + 1;
  *(undefined4 *)(pbVar5 + uVar3 * 4) = param_3;
  *(undefined4 *)(pbVar5 + lVar1 * 4) = 0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
    if (((byte)*this & 1) != 0) {
      this = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
      goto LAB_001e1618;
    }
  }
  this = this + 4;
LAB_001e1618:
  return this + uVar3 * 4;
}


// ===== 001e1634  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::resize =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::resize(unsigned long, wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::resize(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  ulong uVar1;
  
  if (((byte)*this & 1) == 0) {
    uVar1 = (ulong)((byte)*this >> 1);
    if (param_1 <= uVar1) {
      *(undefined4 *)(this + param_1 * 4 + 4) = 0;
      *this = SUB41((int)param_1 << 1,0);
      return;
    }
  }
  else {
    uVar1 = *(ulong *)(this + 8);
    if (param_1 <= uVar1) {
      *(undefined4 *)(*(long *)(this + 0x10) + param_1 * 4) = 0;
      *(ulong *)(this + 8) = param_1;
      return;
    }
  }
  append(this,param_1 - uVar1,param_2);
  return;
}


// ===== 001e1698  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long,
   unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,basic_string_conflict *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  basic_string_conflict *pbVar3;
  
  if (((byte)*param_2 & 1) == 0) {
    uVar2 = (ulong)((byte)*param_2 >> 1);
    if (uVar2 < param_3) {
LAB_001e16e4:
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_out_of_range();
    }
    pbVar3 = param_2 + 4;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 8);
    if (uVar2 < param_3) goto LAB_001e16e4;
    pbVar3 = *(basic_string_conflict **)(param_2 + 0x10);
  }
  uVar1 = uVar2 - param_3;
  if (param_4 <= uVar2 - param_3) {
    uVar1 = param_4;
  }
  insert(this,param_1,(wchar_t *)(pbVar3 + param_3 * 4),uVar1);
  return;
}


// ===== 001e16e8  std::__ndk1::operator+ =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::TEMPNAMEPLACEHOLDERVALUE(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall std::__ndk1::operator+(__ndk1 *this,char *param_1,basic_string_conflict *param_2)

{
  long lVar1;
  ulong __n;
  byte bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  size_t __n_00;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  char *__src;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  __n_00 = strlen((char *)this);
  bVar2 = *param_1;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(ulong *)(param_1 + 8);
  }
  uVar5 = __n + __n_00;
  if (uVar5 < 0xfffffffffffffff0) {
    if (uVar5 < 0x17) {
      pbVar6 = in_x8 + 1;
      *in_x8 = SUB41((int)__n_00 << 1,0);
    }
    else {
      uVar5 = uVar5 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001e1798 to 001e17ef has its CatchHandler @ 001e1854 */
      pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new(uVar5);
      *(size_t *)(in_x8 + 8) = __n_00;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (in_x8 + 0x10) = pbVar6;
      *(ulong *)in_x8 = uVar5 | 1;
    }
    if (__n_00 != 0) {
      memcpy(pbVar6,this,__n_00);
      bVar2 = *param_1;
    }
    pbVar6[__n_00] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    __src = *(char **)(param_1 + 0x10);
    bVar3 = *in_x8;
    if ((bVar2 & 1) == 0) {
      __src = param_1 + 1;
    }
    if (((byte)bVar3 & 1) == 0) {
      uVar5 = (ulong)((byte)bVar3 >> 1);
      uVar4 = 0x16;
    }
    else {
      uVar5 = *(ulong *)(in_x8 + 8);
      uVar4 = (*(ulong *)in_x8 & 0xfffffffffffffffe) - 1;
    }
    if (uVar4 - uVar5 < __n) {
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by_and_replace(in_x8,uVar4,(uVar5 + __n) - uVar4,uVar5,uVar5,0,__n,__src);
    }
    else if (__n != 0) {
      pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (in_x8 + 0x10);
      if (((byte)bVar3 & 1) == 0) {
        pbVar6 = in_x8 + 1;
      }
      memcpy(pbVar6 + uVar5,__src,__n);
      lVar1 = uVar5 + __n;
      if (((byte)*in_x8 & 1) == 0) {
        *in_x8 = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(in_x8 + 8) = lVar1;
      }
      pbVar6[lVar1] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    return;
  }
                    /* try { // try from 001e184c to 001e1853 has its CatchHandler @ 001e1854 */
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_length_error();
}


// ===== 001e1870  std::__ndk1::stoi =====

/* std::__ndk1::stoi(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*, int) */

ulong std::__ndk1::stoi(basic_string_conflict *param_1,ulong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  logic_error *plVar6;
  basic_string_conflict *__nptr;
  byte local_80 [16];
  void *local_70;
  char *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 8;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x69;
  local_80[5] = 0;
  local_68 = (char *)0x0;
  __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  uVar5 = strtol((char *)__nptr,&local_68,param_3);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
                    /* try { // try from 001e1954 to 001e1967 has its CatchHandler @ 001e1a98 */
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e1974 to 001e197b has its CatchHandler @ 001e1a60 */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e198c to 001e19a3 has its CatchHandler @ 001e1a58 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e19a4 to 001e19b7 has its CatchHandler @ 001e1a98 */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e19c4 to 001e19cb has its CatchHandler @ 001e1a54 */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e19dc to 001e19f3 has its CatchHandler @ 001e1a50 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr;
  }
  if (uVar5 == (long)(int)uVar5) {
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return uVar5 & 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 001e19f4 to 001e1a07 has its CatchHandler @ 001e1a98 */
  FUN_001e511c(abStack_60,local_80,": out of range");
  plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e1a14 to 001e1a1b has its CatchHandler @ 001e1a4c */
  logic_error::logic_error(plVar6,abStack_60);
  *(undefined **)plVar6 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e1a2c to 001e1a43 has its CatchHandler @ 001e1a48 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar6,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
}


// ===== 001e1ab4  std::__ndk1::stoi =====

/* std::__ndk1::stoi(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */

ulong std::__ndk1::stoi(basic_string_conflict *param_1,ulong *param_2,int param_3)

{
  basic_string_conflict *__nptr;
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  logic_error *plVar6;
  byte local_80 [16];
  void *local_70;
  wchar_t *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 8;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x69;
  local_80[5] = 0;
  local_68 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
                    /* try { // try from 001e1b20 to 001e1bb3 has its CatchHandler @ 001e1ce4 */
  uVar5 = wcstol((wchar_t *)__nptr,&local_68,param_3);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e1bc0 to 001e1bc7 has its CatchHandler @ 001e1cac */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e1bd8 to 001e1bef has its CatchHandler @ 001e1ca4 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e1bf0 to 001e1c03 has its CatchHandler @ 001e1ce4 */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e1c10 to 001e1c17 has its CatchHandler @ 001e1ca0 */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e1c28 to 001e1c3f has its CatchHandler @ 001e1c9c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr >> 2;
  }
  if (uVar5 == (long)(int)uVar5) {
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return uVar5 & 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 001e1c40 to 001e1c53 has its CatchHandler @ 001e1ce4 */
  FUN_001e511c(abStack_60,local_80,": out of range");
  plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e1c60 to 001e1c67 has its CatchHandler @ 001e1c98 */
  logic_error::logic_error(plVar6,abStack_60);
  *(undefined **)plVar6 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e1c78 to 001e1c8f has its CatchHandler @ 001e1c94 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar6,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
}


// ===== 001e1d00  std::__ndk1::stol =====

/* std::__ndk1::stol(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*, int) */

long std::__ndk1::stol(basic_string_conflict *param_1,ulong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  logic_error *plVar6;
  basic_string_conflict *__nptr;
  byte local_80 [16];
  void *local_70;
  char *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 8;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x6c;
  local_80[5] = 0;
  local_68 = (char *)0x0;
  __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  lVar5 = strtol((char *)__nptr,&local_68,param_3);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
                    /* try { // try from 001e1ddc to 001e1def has its CatchHandler @ 001e1ec8 */
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e1dfc to 001e1e03 has its CatchHandler @ 001e1e90 */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e1e14 to 001e1e2b has its CatchHandler @ 001e1e88 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e1e2c to 001e1e3f has its CatchHandler @ 001e1ec8 */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e1e4c to 001e1e53 has its CatchHandler @ 001e1e84 */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e1e64 to 001e1e7b has its CatchHandler @ 001e1e80 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e1ee4  std::__ndk1::stol =====

/* std::__ndk1::stol(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */

long std::__ndk1::stol(basic_string_conflict *param_1,ulong *param_2,int param_3)

{
  basic_string_conflict *__nptr;
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  logic_error *plVar6;
  byte local_80 [16];
  void *local_70;
  wchar_t *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 8;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x6c;
  local_80[5] = 0;
  local_68 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
                    /* try { // try from 001e1f50 to 001e1fdb has its CatchHandler @ 001e20b4 */
  lVar5 = wcstol((wchar_t *)__nptr,&local_68,param_3);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e1fe8 to 001e1fef has its CatchHandler @ 001e207c */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e2000 to 001e2017 has its CatchHandler @ 001e2074 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e2018 to 001e202b has its CatchHandler @ 001e20b4 */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e2038 to 001e203f has its CatchHandler @ 001e2070 */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e2050 to 001e2067 has its CatchHandler @ 001e206c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr >> 2;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e20d0  std::__ndk1::stoul =====

/* std::__ndk1::stoul(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*, int) */

ulong std::__ndk1::stoul(basic_string_conflict *param_1,ulong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  logic_error *plVar6;
  basic_string_conflict *__nptr;
  byte local_80 [16];
  void *local_70;
  char *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 10;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x75;
  local_80[5] = 0x6c;
  local_80[6] = 0;
  local_68 = (char *)0x0;
  __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  uVar5 = strtoul((char *)__nptr,&local_68,param_3);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
                    /* try { // try from 001e21b0 to 001e21c3 has its CatchHandler @ 001e229c */
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e21d0 to 001e21d7 has its CatchHandler @ 001e2264 */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e21e8 to 001e21ff has its CatchHandler @ 001e225c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e2200 to 001e2213 has its CatchHandler @ 001e229c */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e2220 to 001e2227 has its CatchHandler @ 001e2258 */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e2238 to 001e224f has its CatchHandler @ 001e2254 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e22b8  std::__ndk1::stoul =====

/* std::__ndk1::stoul(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */

ulong std::__ndk1::stoul(basic_string_conflict *param_1,ulong *param_2,int param_3)

{
  basic_string_conflict *__nptr;
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  logic_error *plVar6;
  byte local_80 [16];
  void *local_70;
  wchar_t *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 10;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x75;
  local_80[5] = 0x6c;
  local_80[6] = 0;
  local_68 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
                    /* try { // try from 001e2328 to 001e23b3 has its CatchHandler @ 001e248c */
  uVar5 = wcstoul((wchar_t *)__nptr,&local_68,param_3);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e23c0 to 001e23c7 has its CatchHandler @ 001e2454 */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e23d8 to 001e23ef has its CatchHandler @ 001e244c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e23f0 to 001e2403 has its CatchHandler @ 001e248c */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e2410 to 001e2417 has its CatchHandler @ 001e2448 */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e2428 to 001e243f has its CatchHandler @ 001e2444 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr >> 2;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e24a8  std::__ndk1::stoll =====

/* std::__ndk1::stoll(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*, int) */

longlong std::__ndk1::stoll(basic_string_conflict *param_1,ulong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  longlong lVar5;
  logic_error *plVar6;
  basic_string_conflict *__nptr;
  byte local_80 [16];
  void *local_70;
  char *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 10;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x6c;
  local_80[5] = 0x6c;
  local_80[6] = 0;
  local_68 = (char *)0x0;
  __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  lVar5 = strtoll((char *)__nptr,&local_68,param_3);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
                    /* try { // try from 001e2588 to 001e259b has its CatchHandler @ 001e2674 */
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e25a8 to 001e25af has its CatchHandler @ 001e263c */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e25c0 to 001e25d7 has its CatchHandler @ 001e2634 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e25d8 to 001e25eb has its CatchHandler @ 001e2674 */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e25f8 to 001e25ff has its CatchHandler @ 001e2630 */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e2610 to 001e2627 has its CatchHandler @ 001e262c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e2690  std::__ndk1::stoll =====

/* std::__ndk1::stoll(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */

longlong std::__ndk1::stoll(basic_string_conflict *param_1,ulong *param_2,int param_3)

{
  basic_string_conflict *__nptr;
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  longlong lVar5;
  logic_error *plVar6;
  byte local_80 [16];
  void *local_70;
  wchar_t *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 10;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x6c;
  local_80[5] = 0x6c;
  local_80[6] = 0;
  local_68 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
                    /* try { // try from 001e2700 to 001e278b has its CatchHandler @ 001e2864 */
  lVar5 = wcstoll((wchar_t *)__nptr,&local_68,param_3);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e2798 to 001e279f has its CatchHandler @ 001e282c */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e27b0 to 001e27c7 has its CatchHandler @ 001e2824 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e27c8 to 001e27db has its CatchHandler @ 001e2864 */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e27e8 to 001e27ef has its CatchHandler @ 001e2820 */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e2800 to 001e2817 has its CatchHandler @ 001e281c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr >> 2;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e2880  std::__ndk1::stoull =====

/* std::__ndk1::stoull(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*, int) */

ulonglong std::__ndk1::stoull(basic_string_conflict *param_1,ulong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulonglong uVar5;
  logic_error *plVar6;
  basic_string_conflict *__nptr;
  byte local_80 [16];
  void *local_70;
  char *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 0xc;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x75;
  local_80[5] = 0x6c;
  local_80[6] = 0x6c;
  local_80[7] = 0;
  local_68 = (char *)0x0;
  __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  uVar5 = strtoull((char *)__nptr,&local_68,param_3);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
                    /* try { // try from 001e2964 to 001e2977 has its CatchHandler @ 001e2a50 */
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e2984 to 001e298b has its CatchHandler @ 001e2a18 */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e299c to 001e29b3 has its CatchHandler @ 001e2a10 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e29b4 to 001e29c7 has its CatchHandler @ 001e2a50 */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e29d4 to 001e29db has its CatchHandler @ 001e2a0c */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e29ec to 001e2a03 has its CatchHandler @ 001e2a08 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e2a6c  std::__ndk1::stoull =====

/* std::__ndk1::stoull(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */

ulonglong std::__ndk1::stoull(basic_string_conflict *param_1,ulong *param_2,int param_3)

{
  basic_string_conflict *__nptr;
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulonglong uVar5;
  logic_error *plVar6;
  byte local_80 [16];
  void *local_70;
  wchar_t *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 0xc;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x75;
  local_80[5] = 0x6c;
  local_80[6] = 0x6c;
  local_80[7] = 0;
  local_68 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
                    /* try { // try from 001e2ae0 to 001e2b6b has its CatchHandler @ 001e2c44 */
  uVar5 = wcstoull((wchar_t *)__nptr,&local_68,param_3);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e2b78 to 001e2b7f has its CatchHandler @ 001e2c0c */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e2b90 to 001e2ba7 has its CatchHandler @ 001e2c04 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e2ba8 to 001e2bbb has its CatchHandler @ 001e2c44 */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar6 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e2bc8 to 001e2bcf has its CatchHandler @ 001e2c00 */
    logic_error::logic_error(plVar6,abStack_60);
    *(undefined **)plVar6 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e2be0 to 001e2bf7 has its CatchHandler @ 001e2bfc */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar6,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr >> 2;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e2c60  std::__ndk1::stof =====

/* std::__ndk1::stof(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*) */

undefined1  [16] std::__ndk1::stof(basic_string_conflict *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  logic_error *plVar5;
  basic_string_conflict *__nptr;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined8 uVar7;
  undefined1 auVar6 [16];
  byte local_80 [16];
  void *local_70;
  char *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 8;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x66;
  local_80[5] = 0;
  local_68 = (char *)0x0;
  __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  uVar7 = extraout_var_00;
  auVar6._0_4_ = strtof((char *)__nptr,&local_68);
  auVar6._4_4_ = extraout_var;
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
                    /* try { // try from 001e2d3c to 001e2d4f has its CatchHandler @ 001e2e28 */
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e2d5c to 001e2d63 has its CatchHandler @ 001e2df0 */
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined **)plVar5 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e2d74 to 001e2d8b has its CatchHandler @ 001e2de8 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e2d8c to 001e2d9f has its CatchHandler @ 001e2e28 */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e2dac to 001e2db3 has its CatchHandler @ 001e2de4 */
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined **)plVar5 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e2dc4 to 001e2ddb has its CatchHandler @ 001e2de0 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    auVar6._8_8_ = uVar7;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e2e44  std::__ndk1::stof =====

/* std::__ndk1::stof(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*) */

undefined1  [16] std::__ndk1::stof(basic_string_conflict *param_1,ulong *param_2)

{
  basic_string_conflict *__nptr;
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  logic_error *plVar5;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined8 uVar7;
  undefined1 auVar6 [16];
  byte local_80 [16];
  void *local_70;
  wchar_t *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 8;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x66;
  local_80[5] = 0;
  local_68 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
                    /* try { // try from 001e2eb0 to 001e2f3b has its CatchHandler @ 001e3014 */
  uVar7 = extraout_var_00;
  auVar6._0_4_ = wcstof((wchar_t *)__nptr,&local_68);
  auVar6._4_4_ = extraout_var;
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e2f48 to 001e2f4f has its CatchHandler @ 001e2fdc */
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined **)plVar5 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e2f60 to 001e2f77 has its CatchHandler @ 001e2fd4 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e2f78 to 001e2f8b has its CatchHandler @ 001e3014 */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e2f98 to 001e2f9f has its CatchHandler @ 001e2fd0 */
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined **)plVar5 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e2fb0 to 001e2fc7 has its CatchHandler @ 001e2fcc */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr >> 2;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    auVar6._8_8_ = uVar7;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e3030  std::__ndk1::stod =====

/* std::__ndk1::stod(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*) */

undefined1  [16] std::__ndk1::stod(basic_string_conflict *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  logic_error *plVar5;
  basic_string_conflict *__nptr;
  undefined8 extraout_var;
  undefined8 uVar7;
  undefined1 auVar6 [16];
  byte local_80 [16];
  void *local_70;
  char *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 8;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 100;
  local_80[5] = 0;
  local_68 = (char *)0x0;
  __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  uVar7 = extraout_var;
  auVar6._0_8_ = strtod((char *)__nptr,&local_68);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
                    /* try { // try from 001e310c to 001e311f has its CatchHandler @ 001e31f8 */
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e312c to 001e3133 has its CatchHandler @ 001e31c0 */
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined **)plVar5 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e3144 to 001e315b has its CatchHandler @ 001e31b8 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e315c to 001e316f has its CatchHandler @ 001e31f8 */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e317c to 001e3183 has its CatchHandler @ 001e31b4 */
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined **)plVar5 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e3194 to 001e31ab has its CatchHandler @ 001e31b0 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    auVar6._8_8_ = uVar7;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e3214  std::__ndk1::stod =====

/* std::__ndk1::stod(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*) */

undefined1  [16] std::__ndk1::stod(basic_string_conflict *param_1,ulong *param_2)

{
  basic_string_conflict *__nptr;
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  logic_error *plVar5;
  undefined8 extraout_var;
  undefined8 uVar7;
  undefined1 auVar6 [16];
  byte local_80 [16];
  void *local_70;
  wchar_t *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 8;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 100;
  local_80[5] = 0;
  local_68 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
                    /* try { // try from 001e3280 to 001e330b has its CatchHandler @ 001e33e4 */
  uVar7 = extraout_var;
  auVar6._0_8_ = wcstod((wchar_t *)__nptr,&local_68);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e3318 to 001e331f has its CatchHandler @ 001e33ac */
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined **)plVar5 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e3330 to 001e3347 has its CatchHandler @ 001e33a4 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e3348 to 001e335b has its CatchHandler @ 001e33e4 */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e3368 to 001e336f has its CatchHandler @ 001e33a0 */
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined **)plVar5 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e3380 to 001e3397 has its CatchHandler @ 001e339c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr >> 2;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    auVar6._8_8_ = uVar7;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e3400  std::__ndk1::stold =====

/* std::__ndk1::stold(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*) */

void std::__ndk1::stold(basic_string_conflict *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  logic_error *plVar5;
  basic_string_conflict *__nptr;
  double dVar6;
  byte local_80 [16];
  void *local_70;
  char *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 10;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x6c;
  local_80[5] = 100;
  local_80[6] = 0;
  local_68 = (char *)0x0;
  __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  dVar6 = strtold((char *)__nptr,&local_68);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
                    /* try { // try from 001e34d8 to 001e34eb has its CatchHandler @ 001e35c4 */
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e34f8 to 001e34ff has its CatchHandler @ 001e358c */
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined **)plVar5 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e3510 to 001e3527 has its CatchHandler @ 001e3584 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e3528 to 001e353b has its CatchHandler @ 001e35c4 */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e3548 to 001e354f has its CatchHandler @ 001e3580 */
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined **)plVar5 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e3560 to 001e3577 has its CatchHandler @ 001e357c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar6);
}


// ===== 001e35e0  std::__ndk1::stold =====

/* std::__ndk1::stold(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*) */

void std::__ndk1::stold(basic_string_conflict *param_1,ulong *param_2)

{
  basic_string_conflict *__nptr;
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  logic_error *plVar5;
  double dVar6;
  byte local_80 [16];
  void *local_70;
  wchar_t *local_68;
  basic_string_conflict abStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_80[0] = 10;
  local_80[1] = 0x73;
  local_80[2] = 0x74;
  local_80[3] = 0x6f;
  local_80[4] = 0x6c;
  local_80[5] = 100;
  local_80[6] = 0;
  local_68 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string_conflict **)(param_1 + 0x10);
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
                    /* try { // try from 001e364c to 001e36d3 has its CatchHandler @ 001e37ac */
  dVar6 = wcstold((wchar_t *)__nptr,&local_68);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 == 0x22) {
    FUN_001e511c(abStack_60,local_80,": out of range");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e36e0 to 001e36e7 has its CatchHandler @ 001e3774 */
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined **)plVar5 = PTR_vtable_0020fbe0 + 0x10;
                    /* try { // try from 001e36f8 to 001e370f has its CatchHandler @ 001e376c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,PTR_PTR_0020fbd0,PTR__domain_error_0020fbd8);
  }
  if ((long)local_68 - (long)__nptr == 0) {
                    /* try { // try from 001e3710 to 001e3723 has its CatchHandler @ 001e37ac */
    FUN_001e511c(abStack_60,local_80,": no conversion");
    plVar5 = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001e3730 to 001e3737 has its CatchHandler @ 001e3768 */
    logic_error::logic_error(plVar5,abStack_60);
    *(undefined **)plVar5 = PTR_vtable_0020fbe8 + 0x10;
                    /* try { // try from 001e3748 to 001e375f has its CatchHandler @ 001e3764 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar5,PTR_PTR_0020fbf0,PTR__domain_error_0020fbf8);
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = (long)local_68 - (long)__nptr >> 2;
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar6);
}


// ===== 001e37c8  std::__ndk1::to_string =====

/* std::__ndk1::to_string(int) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,int param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  ulong *in_x8;
  char *pcVar7;
  ulong uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char local_54 [8];
  undefined1 auStack_4c [12];
  char *pcVar8;
  
  uVar4 = (uint)this;
  lVar2 = tpidr_el0;
  pcVar6 = local_54;
  pcVar5 = auStack_4c + 3;
  auStack_4c._4_8_ = *(long *)(lVar2 + 0x28);
  if ((int)uVar4 < 0) {
    pcVar6 = (char *)((ulong)pcVar6 | 1);
    uVar4 = -uVar4;
    local_54[0] = '-';
  }
  if ((9 < (long)pcVar5 - (long)pcVar6) ||
     (uVar1 = (uint)((0x20 - (int)LZCOUNT(uVar4 | 1)) * 0x4d1) >> 0xc,
     (long)(int)((uVar1 - (uVar4 < *(uint *)(&DAT_00149480 + (ulong)uVar1 * 4))) + 1) <=
     (long)pcVar5 - (long)pcVar6)) {
    pcVar5 = (char *)__itoa::__u32toa(uVar4,pcVar6);
  }
  uVar13 = (long)pcVar5 - (long)local_54;
  if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar13 < 0x17) {
    pcVar6 = (char *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar13 << 1);
  }
  else {
    uVar12 = uVar13 + 0x10 & 0xfffffffffffffff0;
    pcVar6 = (char *)operator_new(uVar12);
    in_x8[1] = uVar13;
    in_x8[2] = (ulong)pcVar6;
    *in_x8 = uVar12 | 1;
  }
  if (local_54 != pcVar5) {
    uVar13 = (long)pcVar5 - (long)local_54;
    pcVar8 = local_54;
    pcVar11 = pcVar6;
    if (0x1f < uVar13) {
      uVar9 = uVar13 & 0xffffffffffffffe0;
      pcVar8 = pcVar6 + 0x10;
      pcVar6 = pcVar6 + uVar9;
      puVar10 = (undefined8 *)(auStack_4c + 8);
      uVar12 = uVar9;
      do {
        puVar3 = puVar10 + -1;
        uVar14 = puVar10[-2];
        uVar16 = puVar10[1];
        uVar15 = *puVar10;
        uVar12 = uVar12 - 0x20;
        puVar10 = puVar10 + 4;
        *(undefined8 *)(pcVar8 + -8) = *puVar3;
        *(undefined8 *)(pcVar8 + -0x10) = uVar14;
        *(undefined8 *)(pcVar8 + 8) = uVar16;
        *(undefined8 *)pcVar8 = uVar15;
        pcVar8 = pcVar8 + 0x20;
      } while (uVar12 != 0);
      pcVar8 = local_54 + uVar9;
      pcVar11 = pcVar6;
      if (uVar13 == uVar9) goto LAB_001e3908;
    }
    do {
      pcVar7 = pcVar8 + 1;
      pcVar6 = pcVar11 + 1;
      *pcVar11 = *pcVar8;
      pcVar8 = pcVar7;
      pcVar11 = pcVar6;
    } while (pcVar5 != pcVar7);
  }
LAB_001e3908:
  *pcVar6 = '\0';
  if (*(long *)(lVar2 + 0x28) == auStack_4c._4_8_) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e3940  std::__ndk1::to_string =====

/* std::__ndk1::to_string(long) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong *in_x8;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long local_5c [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  plVar5 = local_5c;
  plVar4 = &local_48;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((long)this < 0) {
    plVar5 = (long *)((ulong)plVar5 | 1);
    this = (__ndk1 *)-(long)this;
    local_5c[0]._0_1_ = 0x2d;
  }
  if ((0x13 < (long)plVar4 - (long)plVar5) ||
     (uVar1 = (uint)((0x40 - (int)LZCOUNT((ulong)this | 1)) * 0x4d1) >> 0xc,
     (long)(int)((uVar1 - (this < *(__ndk1 **)(&DAT_001494a8 + (ulong)uVar1 * 8))) + 1) <=
     (long)plVar4 - (long)plVar5)) {
    plVar4 = (long *)__itoa::__u64toa((ulong)this,(char *)plVar5);
  }
  uVar13 = (long)plVar4 - (long)local_5c;
  if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar13 < 0x17) {
    puVar10 = (undefined1 *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar13 << 1);
  }
  else {
    uVar12 = uVar13 + 0x10 & 0xfffffffffffffff0;
    puVar10 = (undefined1 *)operator_new(uVar12);
    in_x8[1] = uVar13;
    in_x8[2] = (ulong)puVar10;
    *in_x8 = uVar12 | 1;
  }
  if (local_5c != plVar4) {
    uVar13 = (long)plVar4 - (long)local_5c;
    plVar5 = local_5c;
    puVar11 = puVar10;
    if (0x1f < uVar13) {
      uVar7 = uVar13 & 0xffffffffffffffe0;
      puVar8 = (undefined8 *)(puVar10 + 0x10);
      puVar10 = puVar10 + uVar7;
      puVar9 = (undefined8 *)&stack0xffffffffffffffb4;
      uVar12 = uVar7;
      do {
        puVar3 = puVar9 + -1;
        uVar14 = puVar9[-2];
        uVar16 = puVar9[1];
        uVar15 = *puVar9;
        uVar12 = uVar12 - 0x20;
        puVar9 = puVar9 + 4;
        puVar8[-1] = *puVar3;
        puVar8[-2] = uVar14;
        puVar8[1] = uVar16;
        *puVar8 = uVar15;
        puVar8 = puVar8 + 4;
      } while (uVar12 != 0);
      plVar5 = (long *)((long)local_5c + uVar7);
      puVar11 = puVar10;
      if (uVar13 == uVar7) goto LAB_001e3a80;
    }
    do {
      plVar6 = (long *)((long)plVar5 + 1);
      puVar10 = puVar11 + 1;
      *puVar11 = (char)*plVar5;
      plVar5 = plVar6;
      puVar11 = puVar10;
    } while (plVar4 != plVar6);
  }
LAB_001e3a80:
  *puVar10 = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e3ab8  std::__ndk1::to_string =====

/* std::__ndk1::to_string(long long) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,longlong param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong *in_x8;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long local_5c [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  plVar5 = local_5c;
  plVar4 = &local_48;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((long)this < 0) {
    plVar5 = (long *)((ulong)plVar5 | 1);
    this = (__ndk1 *)-(long)this;
    local_5c[0]._0_1_ = 0x2d;
  }
  if ((0x13 < (long)plVar4 - (long)plVar5) ||
     (uVar1 = (uint)((0x40 - (int)LZCOUNT((ulong)this | 1)) * 0x4d1) >> 0xc,
     (long)(int)((uVar1 - (this < *(__ndk1 **)(&DAT_001494a8 + (ulong)uVar1 * 8))) + 1) <=
     (long)plVar4 - (long)plVar5)) {
    plVar4 = (long *)__itoa::__u64toa((ulong)this,(char *)plVar5);
  }
  uVar13 = (long)plVar4 - (long)local_5c;
  if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar13 < 0x17) {
    puVar10 = (undefined1 *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar13 << 1);
  }
  else {
    uVar12 = uVar13 + 0x10 & 0xfffffffffffffff0;
    puVar10 = (undefined1 *)operator_new(uVar12);
    in_x8[1] = uVar13;
    in_x8[2] = (ulong)puVar10;
    *in_x8 = uVar12 | 1;
  }
  if (local_5c != plVar4) {
    uVar13 = (long)plVar4 - (long)local_5c;
    plVar5 = local_5c;
    puVar11 = puVar10;
    if (0x1f < uVar13) {
      uVar7 = uVar13 & 0xffffffffffffffe0;
      puVar8 = (undefined8 *)(puVar10 + 0x10);
      puVar10 = puVar10 + uVar7;
      puVar9 = (undefined8 *)&stack0xffffffffffffffb4;
      uVar12 = uVar7;
      do {
        puVar3 = puVar9 + -1;
        uVar14 = puVar9[-2];
        uVar16 = puVar9[1];
        uVar15 = *puVar9;
        uVar12 = uVar12 - 0x20;
        puVar9 = puVar9 + 4;
        puVar8[-1] = *puVar3;
        puVar8[-2] = uVar14;
        puVar8[1] = uVar16;
        *puVar8 = uVar15;
        puVar8 = puVar8 + 4;
      } while (uVar12 != 0);
      plVar5 = (long *)((long)local_5c + uVar7);
      puVar11 = puVar10;
      if (uVar13 == uVar7) goto LAB_001e3bf8;
    }
    do {
      plVar6 = (long *)((long)plVar5 + 1);
      puVar10 = puVar11 + 1;
      *puVar11 = (char)*plVar5;
      plVar5 = plVar6;
      puVar11 = puVar10;
    } while (plVar4 != plVar6);
  }
LAB_001e3bf8:
  *puVar10 = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e3c30  std::__ndk1::to_string =====

/* std::__ndk1::to_string(unsigned int) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,uint param_1)

{
  long lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  ulong *in_x8;
  char *pcVar4;
  ulong uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char local_54 [8];
  undefined1 auStack_4c [12];
  char *pcVar5;
  
  lVar1 = tpidr_el0;
  auStack_4c._4_8_ = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)__itoa::__u32toa((uint)this,local_54);
  uVar11 = (long)pcVar3 - (long)local_54;
  if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar11 < 0x17) {
    pcVar8 = (char *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar11 << 1);
  }
  else {
    uVar10 = uVar11 + 0x10 & 0xfffffffffffffff0;
    pcVar8 = (char *)operator_new(uVar10);
    in_x8[1] = uVar11;
    in_x8[2] = (ulong)pcVar8;
    *in_x8 = uVar10 | 1;
  }
  if (local_54 != pcVar3) {
    uVar11 = (long)pcVar3 - (long)local_54;
    pcVar5 = local_54;
    pcVar9 = pcVar8;
    if (0x1f < uVar11) {
      uVar6 = uVar11 & 0xffffffffffffffe0;
      pcVar5 = pcVar8 + 0x10;
      pcVar8 = pcVar8 + uVar6;
      puVar7 = (undefined8 *)(auStack_4c + 8);
      uVar10 = uVar6;
      do {
        puVar2 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        uVar10 = uVar10 - 0x20;
        puVar7 = puVar7 + 4;
        *(undefined8 *)(pcVar5 + -8) = *puVar2;
        *(undefined8 *)(pcVar5 + -0x10) = uVar12;
        *(undefined8 *)(pcVar5 + 8) = uVar14;
        *(undefined8 *)pcVar5 = uVar13;
        pcVar5 = pcVar5 + 0x20;
      } while (uVar10 != 0);
      pcVar5 = local_54 + uVar6;
      pcVar9 = pcVar8;
      if (uVar11 == uVar6) goto LAB_001e3d0c;
    }
    do {
      pcVar4 = pcVar5 + 1;
      pcVar8 = pcVar9 + 1;
      *pcVar9 = *pcVar5;
      pcVar5 = pcVar4;
      pcVar9 = pcVar8;
    } while (pcVar3 != pcVar4);
  }
LAB_001e3d0c:
  *pcVar8 = '\0';
  if (*(long *)(lVar1 + 0x28) == auStack_4c._4_8_) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e3d44  std::__ndk1::to_string =====

/* std::__ndk1::to_string(unsigned long) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,ulong param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong *in_x8;
  undefined1 *puVar4;
  ulong uVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_60 [4];
  long *plVar5;
  
  lVar1 = tpidr_el0;
  local_60[3] = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined1 *)__itoa::__u64toa((ulong)this,(char *)local_60);
  uVar11 = (long)puVar3 - (long)local_60;
  if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar11 < 0x17) {
    puVar8 = (undefined1 *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar11 << 1);
  }
  else {
    uVar10 = uVar11 + 0x10 & 0xfffffffffffffff0;
    puVar8 = (undefined1 *)operator_new(uVar10);
    in_x8[1] = uVar11;
    in_x8[2] = (ulong)puVar8;
    *in_x8 = uVar10 | 1;
  }
  if (local_60 != (long *)puVar3) {
    uVar11 = (long)puVar3 - (long)local_60;
    plVar5 = local_60;
    puVar9 = puVar8;
    if (0x1f < uVar11) {
      uVar6 = uVar11 & 0xffffffffffffffe0;
      plVar5 = (long *)(puVar8 + 0x10);
      puVar8 = puVar8 + uVar6;
      plVar7 = local_60 + 2;
      uVar10 = uVar6;
      do {
        plVar2 = plVar7 + -1;
        lVar12 = plVar7[-2];
        lVar14 = plVar7[1];
        lVar13 = *plVar7;
        uVar10 = uVar10 - 0x20;
        plVar7 = plVar7 + 4;
        plVar5[-1] = *plVar2;
        plVar5[-2] = lVar12;
        plVar5[1] = lVar14;
        *plVar5 = lVar13;
        plVar5 = plVar5 + 4;
      } while (uVar10 != 0);
      plVar5 = (long *)((long)local_60 + uVar6);
      puVar9 = puVar8;
      if (uVar11 == uVar6) goto LAB_001e3e20;
    }
    do {
      puVar4 = (undefined1 *)((long)plVar5 + 1);
      puVar8 = puVar9 + 1;
      *puVar9 = *(undefined1 *)plVar5;
      plVar5 = (long *)puVar4;
      puVar9 = puVar8;
    } while (puVar3 != puVar4);
  }
LAB_001e3e20:
  *puVar8 = 0;
  if (*(long *)(lVar1 + 0x28) == local_60[3]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e3e58  std::__ndk1::to_string =====

/* std::__ndk1::to_string(unsigned long long) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,ulonglong param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong *in_x8;
  undefined1 *puVar4;
  ulong uVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_60 [4];
  long *plVar5;
  
  lVar1 = tpidr_el0;
  local_60[3] = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined1 *)__itoa::__u64toa((ulong)this,(char *)local_60);
  uVar11 = (long)puVar3 - (long)local_60;
  if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar11 < 0x17) {
    puVar8 = (undefined1 *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar11 << 1);
  }
  else {
    uVar10 = uVar11 + 0x10 & 0xfffffffffffffff0;
    puVar8 = (undefined1 *)operator_new(uVar10);
    in_x8[1] = uVar11;
    in_x8[2] = (ulong)puVar8;
    *in_x8 = uVar10 | 1;
  }
  if (local_60 != (long *)puVar3) {
    uVar11 = (long)puVar3 - (long)local_60;
    plVar5 = local_60;
    puVar9 = puVar8;
    if (0x1f < uVar11) {
      uVar6 = uVar11 & 0xffffffffffffffe0;
      plVar5 = (long *)(puVar8 + 0x10);
      puVar8 = puVar8 + uVar6;
      plVar7 = local_60 + 2;
      uVar10 = uVar6;
      do {
        plVar2 = plVar7 + -1;
        lVar12 = plVar7[-2];
        lVar14 = plVar7[1];
        lVar13 = *plVar7;
        uVar10 = uVar10 - 0x20;
        plVar7 = plVar7 + 4;
        plVar5[-1] = *plVar2;
        plVar5[-2] = lVar12;
        plVar5[1] = lVar14;
        *plVar5 = lVar13;
        plVar5 = plVar5 + 4;
      } while (uVar10 != 0);
      plVar5 = (long *)((long)local_60 + uVar6);
      puVar9 = puVar8;
      if (uVar11 == uVar6) goto LAB_001e3f34;
    }
    do {
      puVar4 = (undefined1 *)((long)plVar5 + 1);
      puVar8 = puVar9 + 1;
      *puVar9 = *(undefined1 *)plVar5;
      plVar5 = (long *)puVar4;
      puVar9 = puVar8;
    } while (puVar3 != puVar4);
  }
LAB_001e3f34:
  *puVar8 = 0;
  if (*(long *)(lVar1 + 0x28) == local_60[3]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e3f6c  std::__ndk1::to_wstring =====

/* std::__ndk1::to_wstring(int) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,int param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong *in_x8;
  byte *pbVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  byte local_54 [11];
  byte bStack_49;
  long local_48;
  
  uVar4 = (uint)this;
  lVar3 = tpidr_el0;
  pbVar6 = local_54;
  pbVar5 = &bStack_49;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((int)uVar4 < 0) {
    pbVar6 = (byte *)((ulong)pbVar6 | 1);
    uVar4 = -uVar4;
    local_54[0] = 0x2d;
  }
  if ((9 < (long)pbVar5 - (long)pbVar6) ||
     (uVar2 = (uint)((0x20 - (int)LZCOUNT(uVar4 | 1)) * 0x4d1) >> 0xc,
     (long)(int)((uVar2 - (uVar4 < *(uint *)(&DAT_00149480 + (ulong)uVar2 * 4))) + 1) <=
     (long)pbVar5 - (long)pbVar6)) {
    pbVar5 = (byte *)__itoa::__u32toa(uVar4,(char *)pbVar6);
  }
  uVar11 = (long)pbVar5 - (long)local_54;
  if (0x3fffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar11 < 5) {
    puVar10 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar11 << 1);
  }
  else {
    if (uVar11 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar12 = uVar11 + 4 & 0xfffffffffffffffc;
    puVar10 = (uint *)operator_new(uVar12 << 2);
    in_x8[1] = uVar11;
    in_x8[2] = (ulong)puVar10;
    *in_x8 = uVar12 | 1;
  }
  if (local_54 != pbVar5) {
    uVar11 = (long)pbVar5 - (long)local_54;
    pbVar6 = local_54;
    puVar9 = puVar10;
    if (1 < uVar11) {
      uVar8 = uVar11 & 0xfffffffffffffffe;
      puVar9 = puVar10 + 1;
      puVar10 = puVar10 + uVar8;
      pbVar6 = (byte *)((ulong)local_54 | 1);
      uVar12 = uVar8;
      do {
        bVar1 = *pbVar6;
        uVar12 = uVar12 - 2;
        puVar9[-1] = (uint)pbVar6[-1];
        *puVar9 = (uint)bVar1;
        puVar9 = puVar9 + 2;
        pbVar6 = pbVar6 + 2;
      } while (uVar12 != 0);
      pbVar6 = local_54 + uVar8;
      puVar9 = puVar10;
      if (uVar11 == uVar8) goto LAB_001e40b8;
    }
    do {
      pbVar7 = pbVar6 + 1;
      puVar10 = puVar9 + 1;
      *puVar9 = (uint)*pbVar6;
      pbVar6 = pbVar7;
      puVar9 = puVar10;
    } while (pbVar5 != pbVar7);
  }
LAB_001e40b8:
  *puVar10 = 0;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e40fc  std::__ndk1::to_wstring =====

/* std::__ndk1::to_wstring(long) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,long param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong *in_x8;
  byte *pbVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  byte local_5c [20];
  long local_48;
  
  lVar3 = tpidr_el0;
  pbVar5 = local_5c;
  pbVar4 = (byte *)&local_48;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((long)this < 0) {
    pbVar5 = (byte *)((ulong)pbVar5 | 1);
    this = (__ndk1 *)-(long)this;
    local_5c[0] = 0x2d;
  }
  if ((0x13 < (long)pbVar4 - (long)pbVar5) ||
     (uVar2 = (uint)((0x40 - (int)LZCOUNT((ulong)this | 1)) * 0x4d1) >> 0xc,
     (long)(int)((uVar2 - (this < *(__ndk1 **)(&DAT_001494a8 + (ulong)uVar2 * 8))) + 1) <=
     (long)pbVar4 - (long)pbVar5)) {
    pbVar4 = (byte *)__itoa::__u64toa((ulong)this,(char *)pbVar5);
  }
  uVar10 = (long)pbVar4 - (long)local_5c;
  if (0x3fffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar10 < 5) {
    puVar9 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar10 << 1);
  }
  else {
    if (uVar10 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar11 = uVar10 + 4 & 0xfffffffffffffffc;
    puVar9 = (uint *)operator_new(uVar11 << 2);
    in_x8[1] = uVar10;
    in_x8[2] = (ulong)puVar9;
    *in_x8 = uVar11 | 1;
  }
  if (local_5c != pbVar4) {
    uVar10 = (long)pbVar4 - (long)local_5c;
    pbVar5 = local_5c;
    puVar8 = puVar9;
    if (1 < uVar10) {
      uVar7 = uVar10 & 0xfffffffffffffffe;
      puVar8 = puVar9 + 1;
      puVar9 = puVar9 + uVar7;
      pbVar5 = (byte *)((ulong)local_5c | 1);
      uVar11 = uVar7;
      do {
        bVar1 = *pbVar5;
        uVar11 = uVar11 - 2;
        puVar8[-1] = (uint)pbVar5[-1];
        *puVar8 = (uint)bVar1;
        puVar8 = puVar8 + 2;
        pbVar5 = pbVar5 + 2;
      } while (uVar11 != 0);
      pbVar5 = local_5c + uVar7;
      puVar8 = puVar9;
      if (uVar10 == uVar7) goto LAB_001e4248;
    }
    do {
      pbVar6 = pbVar5 + 1;
      puVar9 = puVar8 + 1;
      *puVar8 = (uint)*pbVar5;
      pbVar5 = pbVar6;
      puVar8 = puVar9;
    } while (pbVar4 != pbVar6);
  }
LAB_001e4248:
  *puVar9 = 0;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e428c  std::__ndk1::to_wstring =====

/* std::__ndk1::to_wstring(long long) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,longlong param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong *in_x8;
  byte *pbVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  byte local_5c [20];
  long local_48;
  
  lVar3 = tpidr_el0;
  pbVar5 = local_5c;
  pbVar4 = (byte *)&local_48;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((long)this < 0) {
    pbVar5 = (byte *)((ulong)pbVar5 | 1);
    this = (__ndk1 *)-(long)this;
    local_5c[0] = 0x2d;
  }
  if ((0x13 < (long)pbVar4 - (long)pbVar5) ||
     (uVar2 = (uint)((0x40 - (int)LZCOUNT((ulong)this | 1)) * 0x4d1) >> 0xc,
     (long)(int)((uVar2 - (this < *(__ndk1 **)(&DAT_001494a8 + (ulong)uVar2 * 8))) + 1) <=
     (long)pbVar4 - (long)pbVar5)) {
    pbVar4 = (byte *)__itoa::__u64toa((ulong)this,(char *)pbVar5);
  }
  uVar10 = (long)pbVar4 - (long)local_5c;
  if (0x3fffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar10 < 5) {
    puVar9 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar10 << 1);
  }
  else {
    if (uVar10 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar11 = uVar10 + 4 & 0xfffffffffffffffc;
    puVar9 = (uint *)operator_new(uVar11 << 2);
    in_x8[1] = uVar10;
    in_x8[2] = (ulong)puVar9;
    *in_x8 = uVar11 | 1;
  }
  if (local_5c != pbVar4) {
    uVar10 = (long)pbVar4 - (long)local_5c;
    pbVar5 = local_5c;
    puVar8 = puVar9;
    if (1 < uVar10) {
      uVar7 = uVar10 & 0xfffffffffffffffe;
      puVar8 = puVar9 + 1;
      puVar9 = puVar9 + uVar7;
      pbVar5 = (byte *)((ulong)local_5c | 1);
      uVar11 = uVar7;
      do {
        bVar1 = *pbVar5;
        uVar11 = uVar11 - 2;
        puVar8[-1] = (uint)pbVar5[-1];
        *puVar8 = (uint)bVar1;
        puVar8 = puVar8 + 2;
        pbVar5 = pbVar5 + 2;
      } while (uVar11 != 0);
      pbVar5 = local_5c + uVar7;
      puVar8 = puVar9;
      if (uVar10 == uVar7) goto LAB_001e43d8;
    }
    do {
      pbVar6 = pbVar5 + 1;
      puVar9 = puVar8 + 1;
      *puVar8 = (uint)*pbVar5;
      pbVar5 = pbVar6;
      puVar8 = puVar9;
    } while (pbVar4 != pbVar6);
  }
LAB_001e43d8:
  *puVar9 = 0;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e441c  std::__ndk1::to_wstring =====

/* std::__ndk1::to_wstring(unsigned int) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,uint param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong *in_x8;
  byte *pbVar4;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  byte abStack_54 [12];
  long local_48;
  byte *pbVar5;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)__itoa::__u32toa((uint)this,(char *)abStack_54);
  uVar9 = (long)pbVar3 - (long)abStack_54;
  if (0x3fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar9 < 5) {
    puVar8 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar9 << 1);
  }
  else {
    if (uVar9 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar10 = uVar9 + 4 & 0xfffffffffffffffc;
    puVar8 = (uint *)operator_new(uVar10 << 2);
    in_x8[1] = uVar9;
    in_x8[2] = (ulong)puVar8;
    *in_x8 = uVar10 | 1;
  }
  if (abStack_54 != pbVar3) {
    uVar9 = (long)pbVar3 - (long)abStack_54;
    pbVar5 = abStack_54;
    puVar7 = puVar8;
    if (1 < uVar9) {
      uVar6 = uVar9 & 0xfffffffffffffffe;
      puVar7 = puVar8 + 1;
      puVar8 = puVar8 + uVar6;
      pbVar5 = (byte *)((ulong)abStack_54 | 1);
      uVar10 = uVar6;
      do {
        bVar1 = *pbVar5;
        uVar10 = uVar10 - 2;
        puVar7[-1] = (uint)pbVar5[-1];
        *puVar7 = (uint)bVar1;
        puVar7 = puVar7 + 2;
        pbVar5 = pbVar5 + 2;
      } while (uVar10 != 0);
      pbVar5 = abStack_54 + uVar6;
      puVar7 = puVar8;
      if (uVar9 == uVar6) goto LAB_001e4504;
    }
    do {
      pbVar4 = pbVar5 + 1;
      puVar8 = puVar7 + 1;
      *puVar7 = (uint)*pbVar5;
      pbVar5 = pbVar4;
      puVar7 = puVar8;
    } while (pbVar3 != pbVar4);
  }
LAB_001e4504:
  *puVar8 = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e4548  std::__ndk1::to_wstring =====

/* std::__ndk1::to_wstring(unsigned long) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,ulong param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong *in_x8;
  byte *pbVar4;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  byte abStack_60 [24];
  long local_48;
  byte *pbVar5;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)__itoa::__u64toa((ulong)this,(char *)abStack_60);
  uVar9 = (long)pbVar3 - (long)abStack_60;
  if (0x3fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar9 < 5) {
    puVar8 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar9 << 1);
  }
  else {
    if (uVar9 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar10 = uVar9 + 4 & 0xfffffffffffffffc;
    puVar8 = (uint *)operator_new(uVar10 << 2);
    in_x8[1] = uVar9;
    in_x8[2] = (ulong)puVar8;
    *in_x8 = uVar10 | 1;
  }
  if (abStack_60 != pbVar3) {
    uVar9 = (long)pbVar3 - (long)abStack_60;
    pbVar5 = abStack_60;
    puVar7 = puVar8;
    if (1 < uVar9) {
      uVar6 = uVar9 & 0xfffffffffffffffe;
      puVar7 = puVar8 + 1;
      puVar8 = puVar8 + uVar6;
      pbVar5 = (byte *)((ulong)abStack_60 | 1);
      uVar10 = uVar6;
      do {
        bVar1 = *pbVar5;
        uVar10 = uVar10 - 2;
        puVar7[-1] = (uint)pbVar5[-1];
        *puVar7 = (uint)bVar1;
        puVar7 = puVar7 + 2;
        pbVar5 = pbVar5 + 2;
      } while (uVar10 != 0);
      pbVar5 = abStack_60 + uVar6;
      puVar7 = puVar8;
      if (uVar9 == uVar6) goto LAB_001e4630;
    }
    do {
      pbVar4 = pbVar5 + 1;
      puVar8 = puVar7 + 1;
      *puVar7 = (uint)*pbVar5;
      pbVar5 = pbVar4;
      puVar7 = puVar8;
    } while (pbVar3 != pbVar4);
  }
LAB_001e4630:
  *puVar8 = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e4674  std::__ndk1::to_wstring =====

/* std::__ndk1::to_wstring(unsigned long long) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,ulonglong param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong *in_x8;
  byte *pbVar4;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  byte abStack_60 [24];
  long local_48;
  byte *pbVar5;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)__itoa::__u64toa((ulong)this,(char *)abStack_60);
  uVar9 = (long)pbVar3 - (long)abStack_60;
  if (0x3fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar9 < 5) {
    puVar8 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar9 << 1);
  }
  else {
    if (uVar9 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001dad18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar10 = uVar9 + 4 & 0xfffffffffffffffc;
    puVar8 = (uint *)operator_new(uVar10 << 2);
    in_x8[1] = uVar9;
    in_x8[2] = (ulong)puVar8;
    *in_x8 = uVar10 | 1;
  }
  if (abStack_60 != pbVar3) {
    uVar9 = (long)pbVar3 - (long)abStack_60;
    pbVar5 = abStack_60;
    puVar7 = puVar8;
    if (1 < uVar9) {
      uVar6 = uVar9 & 0xfffffffffffffffe;
      puVar7 = puVar8 + 1;
      puVar8 = puVar8 + uVar6;
      pbVar5 = (byte *)((ulong)abStack_60 | 1);
      uVar10 = uVar6;
      do {
        bVar1 = *pbVar5;
        uVar10 = uVar10 - 2;
        puVar7[-1] = (uint)pbVar5[-1];
        *puVar7 = (uint)bVar1;
        puVar7 = puVar7 + 2;
        pbVar5 = pbVar5 + 2;
      } while (uVar10 != 0);
      pbVar5 = abStack_60 + uVar6;
      puVar7 = puVar8;
      if (uVar9 == uVar6) goto LAB_001e475c;
    }
    do {
      pbVar4 = pbVar5 + 1;
      puVar8 = puVar7 + 1;
      *puVar7 = (uint)*pbVar5;
      pbVar5 = pbVar4;
      puVar7 = puVar8;
    } while (pbVar3 != pbVar4);
  }
LAB_001e475c:
  *puVar8 = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e47a0  std::__ndk1::to_string =====

/* std::__ndk1::to_string(float) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,float param_1)

{
  char *__s;
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong *in_x8;
  ulong uVar4;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0;
  local_50 = (char *)0x0;
  local_60 = 0;
                    /* try { // try from 001e47d8 to 001e47e7 has its CatchHandler @ 001e48ac */
  FUN_001e52ac(&local_60,0x16);
  uVar4 = (ulong)((byte)local_60 >> 1);
  if ((local_60 & 1) != 0) {
    uVar4 = uStack_58;
  }
  do {
    __s = (char *)((ulong)&local_60 | 1);
    if (((byte)local_60 & 1) != 0) {
      __s = local_50;
    }
    uVar2 = snprintf(__s,uVar4 + 1,"%f",(double)param_1);
    if ((int)uVar2 < 0) {
      uVar3 = uVar4 << 1 | 1;
    }
    else {
      uVar3 = (ulong)uVar2;
      if (uVar3 <= uVar4) {
                    /* try { // try from 001e4860 to 001e4867 has its CatchHandler @ 001e48a8 */
        FUN_001e52ac(&local_60);
        in_x8[2] = (ulong)local_50;
        in_x8[1] = uStack_58;
        *in_x8 = local_60;
        if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
                    /* try { // try from 001e484c to 001e4857 has its CatchHandler @ 001e48b0 */
    FUN_001e52ac(&local_60,uVar3);
    uVar4 = uVar3;
  } while( true );
}


// ===== 001e48cc  std::__ndk1::to_string =====

/* std::__ndk1::to_string(double) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,double param_1)

{
  char *__s;
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong *in_x8;
  ulong uVar4;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0;
  local_50 = (char *)0x0;
  local_60 = 0;
                    /* try { // try from 001e4904 to 001e4913 has its CatchHandler @ 001e49d4 */
  FUN_001e52ac(&local_60,0x16);
  uVar4 = (ulong)((byte)local_60 >> 1);
  if ((local_60 & 1) != 0) {
    uVar4 = uStack_58;
  }
  do {
    __s = (char *)((ulong)&local_60 | 1);
    if (((byte)local_60 & 1) != 0) {
      __s = local_50;
    }
    uVar2 = snprintf(__s,uVar4 + 1,"%f",param_1);
    if ((int)uVar2 < 0) {
      uVar3 = uVar4 << 1 | 1;
    }
    else {
      uVar3 = (ulong)uVar2;
      if (uVar3 <= uVar4) {
                    /* try { // try from 001e4988 to 001e498f has its CatchHandler @ 001e49d0 */
        FUN_001e52ac(&local_60);
        in_x8[2] = (ulong)local_50;
        in_x8[1] = uStack_58;
        *in_x8 = local_60;
        if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
                    /* try { // try from 001e4974 to 001e497f has its CatchHandler @ 001e49d8 */
    FUN_001e52ac(&local_60,uVar3);
    uVar4 = uVar3;
  } while( true );
}


// ===== 001e49f4  std::__ndk1::to_string =====

/* std::__ndk1::to_string(long double) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,longdouble param_1)

{
  char *__s;
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong *in_x8;
  ulong uVar4;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0;
  local_50 = (char *)0x0;
  local_60 = 0;
                    /* try { // try from 001e4a28 to 001e4a37 has its CatchHandler @ 001e4af4 */
  FUN_001e52ac(&local_60,0x16);
  uVar4 = (ulong)((byte)local_60 >> 1);
  if ((local_60 & 1) != 0) {
    uVar4 = uStack_58;
  }
  do {
    __s = (char *)((ulong)&local_60 | 1);
    if (((byte)local_60 & 1) != 0) {
      __s = local_50;
    }
    uVar2 = snprintf(__s,uVar4 + 1,"%Lf",param_1);
    if ((int)uVar2 < 0) {
      uVar3 = uVar4 << 1 | 1;
    }
    else {
      uVar3 = (ulong)uVar2;
      if (uVar3 <= uVar4) {
                    /* try { // try from 001e4aac to 001e4ab3 has its CatchHandler @ 001e4af0 */
        FUN_001e52ac(&local_60);
        in_x8[2] = (ulong)local_50;
        in_x8[1] = uStack_58;
        *in_x8 = local_60;
        if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
                    /* try { // try from 001e4a98 to 001e4aa3 has its CatchHandler @ 001e4af8 */
    FUN_001e52ac(&local_60,uVar3);
    uVar4 = uVar3;
  } while( true );
}


// ===== 001e4b14  std::__ndk1::to_wstring =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(float) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,float param_1)

{
  long lVar1;
  uint uVar2;
  wchar_t *pwVar3;
  ulong *in_x8;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_70;
  ulong uStack_68;
  wchar_t *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pwVar3 = (wchar_t *)operator_new(0x60);
  uStack_68 = _UNK_00146288;
  local_70 = _DAT_00146280;
  local_60 = pwVar3;
                    /* try { // try from 001e4b60 to 001e4b6b has its CatchHandler @ 001e4cec */
  wmemset(pwVar3,L'\0',0x14);
  pwVar3[0x14] = L'\0';
                    /* try { // try from 001e4b70 to 001e4b83 has its CatchHandler @ 001e4ce8 */
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
            ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_70,3,L'\0');
  uVar4 = local_70 & 0xff;
  uVar5 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    uVar5 = uStack_68;
  }
  do {
    while( true ) {
      pwVar3 = (wchar_t *)((ulong)&local_70 | 4);
      if ((uVar4 & 1) != 0) {
        pwVar3 = local_60;
      }
      uVar2 = swprintf(pwVar3,uVar5 + 1,L"%f",(double)param_1);
      if (-1 < (int)uVar2) break;
      uVar6 = uVar5 << 1 | 1;
      if ((local_70 & 1) == 0) goto LAB_001e4bf8;
LAB_001e4c30:
      uVar5 = uStack_68;
      if (uStack_68 < uVar6) {
LAB_001e4bac:
                    /* try { // try from 001e4bb0 to 001e4bdb has its CatchHandler @ 001e4cf0 */
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&local_70,uVar6 - uVar5,L'\0');
      }
      else {
        local_60[uVar6] = L'\0';
        uStack_68 = uVar6;
      }
      uVar4 = local_70 & 0xff;
      uVar5 = uVar6;
    }
    uVar6 = (ulong)uVar2;
    if (uVar6 <= uVar5) break;
    if ((local_70 & 1) != 0) goto LAB_001e4c30;
LAB_001e4bf8:
    uVar5 = (ulong)((byte)local_70._0_1_ >> 1);
    if ((byte)local_70._0_1_ >> 1 < uVar6) goto LAB_001e4bac;
    *(undefined4 *)((long)&local_70 + uVar6 * 4 + 4) = 0;
    local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar6 << 1));
    uVar4 = 0;
    uVar5 = uVar6;
  } while( true );
  if ((local_70 & 1) == 0) {
    uVar5 = (ulong)((byte)local_70._0_1_ >> 1);
    if (uVar6 <= (byte)local_70._0_1_ >> 1) {
      *(undefined4 *)((long)&local_70 + uVar6 * 4 + 4) = 0;
      local_70 = CONCAT71(local_70._1_7_,(char)(uVar2 << 1));
      goto LAB_001e4ca4;
    }
  }
  else {
    uVar5 = uStack_68;
    if (uVar6 <= uStack_68) {
      local_60[uVar6] = L'\0';
      uStack_68 = uVar6;
      goto LAB_001e4ca4;
    }
  }
                    /* try { // try from 001e4c88 to 001e4c93 has its CatchHandler @ 001e4ce4 */
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
            ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_70,uVar6 - uVar5,L'\0');
LAB_001e4ca4:
  in_x8[2] = (ulong)local_60;
  in_x8[1] = uStack_68;
  *in_x8 = local_70;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001e4d0c  std::__ndk1::to_wstring =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(double) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,double param_1)

{
  long lVar1;
  uint uVar2;
  wchar_t *pwVar3;
  ulong *in_x8;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_70;
  ulong uStack_68;
  wchar_t *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pwVar3 = (wchar_t *)operator_new(0x60);
  uStack_68 = _UNK_00146288;
  local_70 = _DAT_00146280;
  local_60 = pwVar3;
                    /* try { // try from 001e4d58 to 001e4d63 has its CatchHandler @ 001e4ee0 */
  wmemset(pwVar3,L'\0',0x14);
  pwVar3[0x14] = L'\0';
                    /* try { // try from 001e4d68 to 001e4d7b has its CatchHandler @ 001e4edc */
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
            ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_70,3,L'\0');
  uVar4 = local_70 & 0xff;
  uVar5 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    uVar5 = uStack_68;
  }
  do {
    while( true ) {
      pwVar3 = (wchar_t *)((ulong)&local_70 | 4);
      if ((uVar4 & 1) != 0) {
        pwVar3 = local_60;
      }
      uVar2 = swprintf(pwVar3,uVar5 + 1,L"%f",param_1);
      if (-1 < (int)uVar2) break;
      uVar6 = uVar5 << 1 | 1;
      if ((local_70 & 1) == 0) goto LAB_001e4dec;
LAB_001e4e24:
      uVar5 = uStack_68;
      if (uStack_68 < uVar6) {
LAB_001e4da0:
                    /* try { // try from 001e4da4 to 001e4dcf has its CatchHandler @ 001e4ee4 */
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&local_70,uVar6 - uVar5,L'\0');
      }
      else {
        local_60[uVar6] = L'\0';
        uStack_68 = uVar6;
      }
      uVar4 = local_70 & 0xff;
      uVar5 = uVar6;
    }
    uVar6 = (ulong)uVar2;
    if (uVar6 <= uVar5) break;
    if ((local_70 & 1) != 0) goto LAB_001e4e24;
LAB_001e4dec:
    uVar5 = (ulong)((byte)local_70._0_1_ >> 1);
    if ((byte)local_70._0_1_ >> 1 < uVar6) goto LAB_001e4da0;
    *(undefined4 *)((long)&local_70 + uVar6 * 4 + 4) = 0;
    local_70 = CONCAT71(local_70._1_7_,(char)((int)uVar6 << 1));
    uVar4 = 0;
    uVar5 = uVar6;
  } while( true );
  if ((local_70 & 1) == 0) {
    uVar5 = (ulong)((byte)local_70._0_1_ >> 1);
    if (uVar6 <= (byte)local_70._0_1_ >> 1) {
      *(undefined4 *)((long)&local_70 + uVar6 * 4 + 4) = 0;
      local_70 = CONCAT71(local_70._1_7_,(char)(uVar2 << 1));
      goto LAB_001e4e98;
    }
  }
  else {
    uVar5 = uStack_68;
    if (uVar6 <= uStack_68) {
      local_60[uVar6] = L'\0';
      uStack_68 = uVar6;
      goto LAB_001e4e98;
    }
  }
                    /* try { // try from 001e4e7c to 001e4e87 has its CatchHandler @ 001e4ed8 */
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
            ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_70,uVar6 - uVar5,L'\0');
LAB_001e4e98:
  in_x8[2] = (ulong)local_60;
  in_x8[1] = uStack_68;
  *in_x8 = local_70;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001e4f00  std::__ndk1::to_wstring =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(long double) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,longdouble param_1)

{
  long lVar1;
  uint uVar2;
  wchar_t *pwVar3;
  ulong *in_x8;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_60;
  ulong uStack_58;
  wchar_t *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pwVar3 = (wchar_t *)operator_new(0x60);
  uStack_58 = _UNK_00146288;
  local_60 = _DAT_00146280;
  local_50 = pwVar3;
                    /* try { // try from 001e4f48 to 001e4f53 has its CatchHandler @ 001e50cc */
  wmemset(pwVar3,L'\0',0x14);
  pwVar3[0x14] = L'\0';
                    /* try { // try from 001e4f58 to 001e4f6b has its CatchHandler @ 001e50c8 */
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
            ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_60,3,L'\0');
  uVar4 = local_60 & 0xff;
  uVar5 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    uVar5 = uStack_58;
  }
  do {
    while( true ) {
      pwVar3 = (wchar_t *)((ulong)&local_60 | 4);
      if ((uVar4 & 1) != 0) {
        pwVar3 = local_50;
      }
      uVar2 = swprintf(pwVar3,uVar5 + 1,L"%Lf",param_1);
      if (-1 < (int)uVar2) break;
      uVar6 = uVar5 << 1 | 1;
      if ((local_60 & 1) == 0) goto LAB_001e4fdc;
LAB_001e5014:
      uVar5 = uStack_58;
      if (uStack_58 < uVar6) {
LAB_001e4f90:
                    /* try { // try from 001e4f94 to 001e4fbf has its CatchHandler @ 001e50d0 */
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)&local_60,uVar6 - uVar5,L'\0');
      }
      else {
        local_50[uVar6] = L'\0';
        uStack_58 = uVar6;
      }
      uVar4 = local_60 & 0xff;
      uVar5 = uVar6;
    }
    uVar6 = (ulong)uVar2;
    if (uVar6 <= uVar5) break;
    if ((local_60 & 1) != 0) goto LAB_001e5014;
LAB_001e4fdc:
    uVar5 = (ulong)((byte)local_60._0_1_ >> 1);
    if ((byte)local_60._0_1_ >> 1 < uVar6) goto LAB_001e4f90;
    *(undefined4 *)((long)&local_60 + uVar6 * 4 + 4) = 0;
    local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar6 << 1));
    uVar4 = 0;
    uVar5 = uVar6;
  } while( true );
  if ((local_60 & 1) == 0) {
    uVar5 = (ulong)((byte)local_60._0_1_ >> 1);
    if (uVar6 <= (byte)local_60._0_1_ >> 1) {
      *(undefined4 *)((long)&local_60 + uVar6 * 4 + 4) = 0;
      local_60 = CONCAT71(local_60._1_7_,(char)(uVar2 << 1));
      goto LAB_001e5088;
    }
  }
  else {
    uVar5 = uStack_58;
    if (uVar6 <= uStack_58) {
      local_50[uVar6] = L'\0';
      uStack_58 = uVar6;
      goto LAB_001e5088;
    }
  }
                    /* try { // try from 001e506c to 001e5077 has its CatchHandler @ 001e50c4 */
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
            ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_60,uVar6 - uVar5,L'\0');
LAB_001e5088:
  in_x8[2] = (ulong)local_50;
  in_x8[1] = uStack_58;
  *in_x8 = local_60;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001e50ec  FUN_001e50ec =====

void FUN_001e50ec(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_0020fbe0 + 0x10;
  return;
}


// ===== 001e511c  FUN_001e511c =====

void FUN_001e511c(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,byte *param_2,char *param_3)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  size_t __n;
  ulong uVar3;
  size_t __n_00;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*param_2 & 1) == 0) {
    __n_00 = (size_t)(*param_2 >> 1);
    __n = strlen(param_3);
    param_2 = param_2 + 1;
  }
  else {
    __n_00 = *(size_t *)(param_2 + 8);
    __n = strlen(param_3);
    param_2 = *(byte **)(param_2 + 0x10);
  }
  uVar4 = __n_00 + __n;
  if (uVar4 < 0xfffffffffffffff0) {
    if (uVar4 < 0x17) {
      pbVar5 = param_1 + 1;
      *param_1 = SUB41((int)__n_00 << 1,0);
    }
    else {
      uVar4 = uVar4 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001e51d0 to 001e522b has its CatchHandler @ 001e5290 */
      pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new(uVar4);
      *(size_t *)(param_1 + 8) = __n_00;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (param_1 + 0x10) = pbVar5;
      *(ulong *)param_1 = uVar4 | 1;
    }
    if (__n_00 != 0) {
      memcpy(pbVar5,param_2,__n_00);
    }
    pbVar5[__n_00] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    bVar2 = *param_1;
    if (((byte)bVar2 & 1) == 0) {
      uVar4 = (ulong)((byte)bVar2 >> 1);
      uVar3 = 0x16;
    }
    else {
      uVar4 = *(ulong *)(param_1 + 8);
      uVar3 = (*(ulong *)param_1 & 0xfffffffffffffffe) - 1;
    }
    if (uVar3 - uVar4 < __n) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by_and_replace(param_1,uVar3,(uVar4 + __n) - uVar3,uVar4,uVar4,0,__n,param_3);
    }
    else if (__n != 0) {
      pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (param_1 + 0x10);
      if (((byte)bVar2 & 1) == 0) {
        pbVar5 = param_1 + 1;
      }
      memcpy(pbVar5 + uVar4,param_3,__n);
      lVar1 = uVar4 + __n;
      if (((byte)*param_1 & 1) == 0) {
        *param_1 = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(param_1 + 8) = lVar1;
      }
      pbVar5[lVar1] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    return;
  }
                    /* try { // try from 001e5288 to 001e528f has its CatchHandler @ 001e5290 */
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__basic_string_common<true>::__throw_length_error();
}


// ===== 001e52ac  FUN_001e52ac =====

void FUN_001e52ac(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,ulong param_2)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
  bVar2 = *param_1;
  uVar4 = (ulong)(byte)bVar2;
  if (((byte)bVar2 & 1) == 0) {
    uVar5 = (ulong)((byte)bVar2 >> 1);
    if (param_2 <= uVar5) {
      param_1[param_2 + 1] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      *param_1 = SUB41((int)param_2 << 1,0);
      return;
    }
    param_2 = param_2 - uVar5;
    if (param_2 == 0) {
      return;
    }
    uVar3 = 0x16;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    if (param_2 <= uVar5) {
      *(undefined1 *)(*(long *)(param_1 + 0x10) + param_2) = 0;
      *(ulong *)(param_1 + 8) = param_2;
      return;
    }
    param_2 = param_2 - uVar5;
    if (param_2 == 0) {
      return;
    }
    uVar4 = *(ulong *)param_1;
    uVar3 = (uVar4 & 0xfffffffffffffffe) - 1;
  }
  if (uVar3 - uVar5 < param_2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by(param_1,uVar3,(uVar5 + param_2) - uVar3,uVar5,uVar5,0,0);
    uVar4 = (ulong)(byte)*param_1;
  }
  if ((uVar4 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  else {
    pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
  }
  memset(pbVar6 + uVar5,0,param_2);
  lVar1 = uVar5 + param_2;
  if (((byte)*param_1 & 1) == 0) {
    *param_1 = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(param_1 + 8) = lVar1;
  }
  pbVar6[lVar1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return;
}


// ===== 001e53a8  std::__ndk1::__itoa::__u32toa =====

/* std::__ndk1::__itoa::__u32toa(unsigned int, char*) */

char * std::__ndk1::__itoa::__u32toa(uint param_1,char *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  
  if (99999999 < param_1) {
    uVar4 = param_1 % 100000000;
    if (param_1 < 1000000000) {
      *param_2 = (char)(param_1 / 100000000) + '0';
      lVar6 = 1;
    }
    else {
      *(undefined2 *)param_2 = *(undefined2 *)(&DAT_00149548 + (ulong)(param_1 / 100000000) * 2);
      lVar6 = 2;
    }
    uVar1 = *(undefined2 *)(&DAT_00149548 + ((ulong)(uVar4 % 10000) / 100) * 2);
    uVar2 = *(undefined2 *)
             (&DAT_00149548 + ((ulong)(uVar4 / 10000 + ((uVar4 / 10000) / 100) * -100) & 0xffff) * 2
             );
    uVar3 = *(undefined2 *)(&DAT_00149548 + (ulong)((uVar4 % 10000) % 100) * 2);
    pcVar5 = param_2 + lVar6;
    *(undefined2 *)pcVar5 = *(undefined2 *)(&DAT_00149548 + ((ulong)(uVar4 / 10000) / 100) * 2);
    *(undefined2 *)(pcVar5 + 4) = uVar1;
    *(undefined2 *)(pcVar5 + 2) = uVar2;
    *(undefined2 *)(pcVar5 + 6) = uVar3;
    return pcVar5 + 8;
  }
  pcVar5 = (char *)FUN_001e547c(param_2,param_1);
  return pcVar5;
}


// ===== 001e547c  FUN_001e547c =====

char * FUN_001e547c(char *param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if (0x270 < param_2 >> 4) {
    uVar2 = param_2 / 10000;
    if (param_2 < 1000000) {
      if (param_2 >> 5 < 0xc35) {
        *param_1 = (char)uVar2 + '0';
        lVar4 = 1;
      }
      else {
        *(undefined2 *)param_1 = *(undefined2 *)(&DAT_00149548 + ((ulong)param_2 / 10000) * 2);
        lVar4 = 2;
      }
    }
    else if (param_2 < 10000000) {
      uVar3 = (uVar2 & 0xffff) / 100;
      uVar1 = *(undefined2 *)(&DAT_00149548 + ((ulong)(uVar2 + uVar3 * -100) & 0xffff) * 2);
      *param_1 = (char)uVar3 + '0';
      lVar4 = 3;
      *(undefined2 *)(param_1 + 1) = uVar1;
    }
    else {
      uVar1 = *(undefined2 *)
               (&DAT_00149548 + (ulong)(uVar2 + (int)(((ulong)param_2 / 10000) / 100) * -100) * 2);
      *(undefined2 *)param_1 = *(undefined2 *)(&DAT_00149548 + (ulong)(param_2 / 1000000) * 2);
      lVar4 = 4;
      *(undefined2 *)(param_1 + 2) = uVar1;
    }
    uVar1 = *(undefined2 *)(&DAT_00149548 + (ulong)((param_2 % 10000) % 100) * 2);
    param_1 = param_1 + lVar4;
    *(undefined2 *)param_1 = *(undefined2 *)(&DAT_00149548 + ((ulong)(param_2 % 10000) / 100) * 2);
    *(undefined2 *)(param_1 + 2) = uVar1;
    return param_1 + 4;
  }
  if (99 < param_2) {
    uVar2 = param_2 & 0xffff;
    if (999 < param_2) {
      uVar1 = *(undefined2 *)
               (&DAT_00149548 + ((ulong)(param_2 + (uVar2 / 100) * -100) & 0xffff) * 2);
      *(undefined2 *)param_1 = *(undefined2 *)(&DAT_00149548 + ((ulong)uVar2 / 100) * 2);
      *(undefined2 *)(param_1 + 2) = uVar1;
      return param_1 + 4;
    }
    uVar1 = *(undefined2 *)(&DAT_00149548 + (ulong)(uVar2 % 100) * 2);
    *param_1 = (char)(uVar2 / 100) + '0';
    *(undefined2 *)(param_1 + 1) = uVar1;
    return param_1 + 3;
  }
  if (9 < param_2) {
    *(undefined2 *)param_1 = *(undefined2 *)(&DAT_00149548 + (ulong)param_2 * 2);
    return param_1 + 2;
  }
  *param_1 = (char)param_2 + '0';
  return param_1 + 1;
}


// ===== 001e5638  std::__ndk1::__itoa::__u64toa =====

/* std::__ndk1::__itoa::__u64toa(unsigned long, char*) */

char * std::__ndk1::__itoa::__u64toa(ulong param_1,char *param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  char *pcVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  
  if (99999999 < param_1) {
    if (param_1 < 10000000000000000) {
      uVar9 = (int)param_1 + (int)(param_1 / 100000000) * -100000000;
      puVar14 = (undefined2 *)FUN_001e547c(param_2,param_1 / 100000000 & 0xffffffff);
      uVar16 = uVar9 / 10000 & 0xffff;
      uVar2 = *(undefined2 *)(&DAT_00149548 + ((ulong)(uVar9 % 10000) / 100) * 2);
      uVar3 = *(undefined2 *)
               (&DAT_00149548 + ((ulong)(uVar9 / 10000 + (uVar16 / 100) * -100) & 0xffff) * 2);
      uVar4 = *(undefined2 *)(&DAT_00149548 + (ulong)((uVar9 % 10000) % 100) * 2);
      *puVar14 = *(undefined2 *)(&DAT_00149548 + ((ulong)uVar16 / 100) * 2);
      puVar14[2] = uVar2;
      puVar14[1] = uVar3;
      puVar14[3] = uVar4;
      pcVar13 = (char *)(puVar14 + 4);
    }
    else {
      uVar12 = param_1 / 10000000000000000;
      uVar16 = (uint)uVar12;
      if (uVar16 < 100) {
        if (uVar16 < 10) {
          *param_2 = (char)uVar12 + '0';
          lVar17 = 1;
        }
        else {
          *(undefined2 *)param_2 = *(undefined2 *)(&DAT_00149548 + uVar12 * 2);
          lVar17 = 2;
        }
      }
      else if (uVar16 < 1000) {
        uVar2 = *(undefined2 *)(&DAT_00149548 + (ulong)(uVar16 % 100) * 2);
        *param_2 = (char)(uVar16 / 100) + '0';
        *(undefined2 *)(param_2 + 1) = uVar2;
        lVar17 = 3;
      }
      else {
        uVar2 = *(undefined2 *)(&DAT_00149548 + (ulong)(uVar16 / 100) * 2);
        *(undefined2 *)(param_2 + 2) = *(undefined2 *)(&DAT_00149548 + (ulong)(uVar16 % 100) * 2);
        lVar17 = 4;
        *(undefined2 *)param_2 = uVar2;
      }
      uVar12 = (param_1 % 10000000000000000) / 100000000;
      uVar10 = (int)(param_1 % 10000000000000000) + (int)uVar12 * -100000000;
      uVar15 = (uint)(uVar12 / 10000);
      uVar11 = (int)uVar12 + uVar15 * -10000;
      uVar16 = uVar11 & 0xffff;
      uVar9 = uVar10 / 10000 & 0xffff;
      uVar2 = *(undefined2 *)(&DAT_00149548 + ((ulong)uVar16 / 100) * 2);
      uVar3 = *(undefined2 *)(&DAT_00149548 + ((ulong)uVar9 / 100) * 2);
      uVar4 = *(undefined2 *)
               (&DAT_00149548 +
               ((ulong)((int)(uVar12 / 10000) + (uVar15 / 100) * -100) & 0xffff) * 2);
      uVar5 = *(undefined2 *)(&DAT_00149548 + ((ulong)(uVar10 % 10000) / 100) * 2);
      uVar6 = *(undefined2 *)
               (&DAT_00149548 + ((ulong)(uVar11 + (uVar16 / 100) * -100) & 0xffff) * 2);
      uVar7 = *(undefined2 *)
               (&DAT_00149548 + ((ulong)(uVar10 / 10000 + (uVar9 / 100) * -100) & 0xffff) * 2);
      uVar8 = *(undefined2 *)(&DAT_00149548 + (ulong)((uVar10 % 10000) % 100) * 2);
      pcVar1 = param_2 + lVar17;
      pcVar13 = pcVar1 + 0x10;
      *(undefined2 *)pcVar1 = *(undefined2 *)(&DAT_00149548 + ((uVar12 / 10000) / 100) * 2);
      *(undefined2 *)(pcVar1 + 4) = uVar2;
      *(undefined2 *)(pcVar1 + 8) = uVar3;
      *(undefined2 *)(pcVar1 + 2) = uVar4;
      *(undefined2 *)(pcVar1 + 0xc) = uVar5;
      *(undefined2 *)(pcVar1 + 6) = uVar6;
      *(undefined2 *)(pcVar1 + 10) = uVar7;
      *(undefined2 *)(pcVar1 + 0xe) = uVar8;
    }
    return pcVar13;
  }
  pcVar13 = (char *)FUN_001e547c(param_2,param_1 & 0xffffffff);
  return pcVar13;
}


// ===== 001e5880  std::__ndk1::error_category::error_category =====

/* std::__ndk1::error_category::error_category() */

void __thiscall std::__ndk1::error_category::error_category(error_category *this)

{
  *(undefined **)this = PTR_vtable_0020fc00 + 0x10;
  return;
}


// ===== 001e5894  std::__ndk1::error_category::~error_category =====

/* std::__ndk1::error_category::~error_category() */

void __thiscall std::__ndk1::error_category::~error_category(error_category *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1e5898);
  (*pcVar1)();
}


// ===== 001e5898  std::__ndk1::error_category::default_error_condition =====

/* std::__ndk1::error_category::default_error_condition(int) const */

undefined1  [16] __thiscall
std::__ndk1::error_category::default_error_condition(error_category *this,int param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = 0;
  auVar1._0_4_ = param_1;
  auVar1._8_8_ = this;
  return auVar1;
}


// ===== 001e58a8  std::__ndk1::error_category::equivalent =====

/* std::__ndk1::error_category::equivalent(int, std::__ndk1::error_condition const&) const */

bool __thiscall
std::__ndk1::error_category::equivalent(error_category *this,int param_1,error_condition *param_2)

{
  int iVar1;
  long extraout_x1;
  
  iVar1 = (**(code **)(*(long *)this + 0x18))(this,param_1);
  return *(long *)(param_2 + 8) == extraout_x1 && *(int *)param_2 == iVar1;
}


// ===== 001e58ec  std::__ndk1::error_category::equivalent =====

/* std::__ndk1::error_category::equivalent(std::__ndk1::error_code const&, int) const */

bool __thiscall
std::__ndk1::error_category::equivalent(error_category *this,error_code *param_1,int param_2)

{
  return *(error_category **)(param_1 + 8) == this && *(int *)param_1 == param_2;
}


// ===== 001e590c  FUN_001e590c =====

void FUN_001e590c(ulong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  size_t __n;
  undefined1 *__dest;
  char *__s;
  ulong uVar6;
  char acStack_458 [1024];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __s = acStack_458;
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  pcVar5 = strerror_r(param_3,acStack_458,0x400);
  iVar3 = (int)pcVar5;
  if (iVar3 != 0) {
    if (iVar3 == -1) {
      iVar3 = *piVar4;
    }
    if (iVar3 != 0x16) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __s = "";
  }
  if (*__s == '\0') {
    __s = acStack_458;
    FUN_001e6590(acStack_458);
  }
  *piVar4 = iVar1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_001e59f4;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)operator_new(uVar6);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar6 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_001e59f4:
  __dest[__n] = 0;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001e5a34  FUN_001e5a34 =====

char * FUN_001e5a34(void)

{
  return "generic";
}


// ===== 001e5a40  FUN_001e5a40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e5a40(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if (0xfff < param_3) {
    pcVar7 = (char *)operator_new(0x30);
    uVar6 = _UNK_00146308;
    uVar5 = _DAT_00146300;
    uVar4 = s_unspecified_generic_category_err_001460e4._24_8_;
    uVar3 = s_unspecified_generic_category_err_001460e4._16_8_;
    uVar2 = s_unspecified_generic_category_err_001460e4._8_8_;
    uVar1 = s_unspecified_generic_category_err_001460e4._0_8_;
    param_1[2] = pcVar7;
    *(undefined8 *)(pcVar7 + 8) = uVar2;
    *(undefined8 *)pcVar7 = uVar1;
    *(undefined8 *)(pcVar7 + 0x18) = uVar4;
    *(undefined8 *)(pcVar7 + 0x10) = uVar3;
    param_1[1] = uVar6;
    *param_1 = uVar5;
    pcVar7[0x20] = 'o';
    pcVar7[0x21] = 'r';
    pcVar7[0x22] = '\0';
    return;
  }
  FUN_001e590c(param_1);
  return;
}


// ===== 001e5aa8  std::__ndk1::generic_category =====

/* std::__ndk1::generic_category() */

undefined8 * std::__ndk1::generic_category(void)

{
  int iVar1;
  
  if (((DAT_00215ef0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215ef0), iVar1 != 0)) {
    DAT_00215ee8 = &PTR__error_category_0020c340;
    __cxa_guard_release(&DAT_00215ef0);
  }
  return &DAT_00215ee8;
}


// ===== 001e5b00  FUN_001e5b00 =====

char * FUN_001e5b00(void)

{
  return "system";
}


// ===== 001e5b0c  FUN_001e5b0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e5b0c(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if (0xfff < param_3) {
    pcVar7 = (char *)operator_new(0x30);
    uVar6 = _UNK_001462c8;
    uVar5 = _DAT_001462c0;
    uVar4 = s_unspecified_system_category_erro_001457f5._24_8_;
    uVar3 = s_unspecified_system_category_erro_001457f5._16_8_;
    uVar2 = s_unspecified_system_category_erro_001457f5._8_8_;
    uVar1 = s_unspecified_system_category_erro_001457f5._0_8_;
    param_1[2] = pcVar7;
    *(undefined8 *)(pcVar7 + 8) = uVar2;
    *(undefined8 *)pcVar7 = uVar1;
    *(undefined8 *)(pcVar7 + 0x18) = uVar4;
    *(undefined8 *)(pcVar7 + 0x10) = uVar3;
    param_1[1] = uVar6;
    *param_1 = uVar5;
    pcVar7[0x20] = 'r';
    pcVar7[0x21] = '\0';
    return;
  }
  FUN_001e590c(param_1);
  return;
}


// ===== 001e5b74  FUN_001e5b74 =====

int FUN_001e5b74(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (param_2 < 0x1000) {
    if ((DAT_00215ef0 & 1) != 0) {
      return param_2;
    }
    iVar1 = __cxa_guard_acquire(&DAT_00215ef0);
    if (iVar1 == 0) {
      return param_2;
    }
    puVar2 = &DAT_00215ef0;
    DAT_00215ee8 = &PTR__error_category_0020c340;
  }
  else {
    if ((DAT_00215f00 & 1) != 0) {
      return param_2;
    }
    iVar1 = __cxa_guard_acquire(&DAT_00215f00);
    if (iVar1 == 0) {
      return param_2;
    }
    DAT_00215ef8 = &PTR__error_category_0020c3a0;
    puVar2 = &DAT_00215f00;
  }
  __cxa_guard_release(puVar2);
  return param_2;
}


// ===== 001e5c4c  std::__ndk1::system_category =====

/* std::__ndk1::system_category() */

undefined8 * std::__ndk1::system_category(void)

{
  int iVar1;
  
  if (((DAT_00215f00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215f00), iVar1 != 0)) {
    DAT_00215ef8 = &PTR__error_category_0020c3a0;
    __cxa_guard_release(&DAT_00215f00);
  }
  return &DAT_00215ef8;
}


// ===== 001e5ca4  std::__ndk1::error_condition::message =====

/* std::__ndk1::error_condition::message() const */

void __thiscall std::__ndk1::error_condition::message(error_condition *this)

{
                    /* WARNING: Could not recover jumptable at 0x001e5cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),*(undefined4 *)this);
  return;
}


// ===== 001e5cbc  std::__ndk1::error_code::message =====

/* std::__ndk1::error_code::message() const */

void __thiscall std::__ndk1::error_code::message(error_code *this)

{
                    /* WARNING: Could not recover jumptable at 0x001e5cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),*(undefined4 *)this);
  return;
}


// ===== 001e5cd4  std::__ndk1::system_error::__init =====

/* std::__ndk1::system_error::__init(std::__ndk1::error_code const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall
std::__ndk1::system_error::__init
          (undefined8 *param_1_00,system_error *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_50 [8];
  ulong local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar4 = *(int *)this;
  if (iVar4 == 0) goto LAB_001e5d84;
  if (((byte)*param_1 & 1) == 0) {
    if ((byte)*param_1 >> 1 != 0) {
LAB_001e5d24:
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                (param_1,": ");
      iVar4 = *(int *)this;
    }
  }
  else if (*(long *)(param_1 + 8) != 0) goto LAB_001e5d24;
  (**(code **)(**(long **)(this + 8) + 0x30))(local_50,*(long **)(this + 8),iVar4);
  uVar1 = (ulong)(local_50[0] >> 1);
  pcVar3 = (char *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
    pcVar3 = local_40;
  }
                    /* try { // try from 001e5d6c to 001e5d73 has its CatchHandler @ 001e5dc4 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
            (param_1,pcVar3,uVar1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_001e5d84:
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)param_1;
  param_1_00[2] = *(undefined8 *)(param_1 + 0x10);
  param_1_00[1] = uVar6;
  *param_1_00 = uVar5;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e5de0  std::__ndk1::system_error::system_error =====

/* std::__ndk1::system_error::system_error(std::__ndk1::error_code, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::system_error::system_error
          (system_error *this,undefined8 param_2,undefined8 param_3,basic_string_conflict *param_4)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  system_error local_50 [16];
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  uStack_30 = param_3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (local_68,param_4);
                    /* try { // try from 001e5e10 to 001e5e1f has its CatchHandler @ 001e5eb8 */
  __init(local_50,&local_38,local_68);
                    /* try { // try from 001e5e20 to 001e5e2b has its CatchHandler @ 001e5e88 */
  runtime_error::runtime_error((runtime_error *)this,(basic_string_conflict *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  *(undefined **)this = PTR_vtable_0020fc08 + 0x10;
  *(undefined8 *)(this + 0x18) = uStack_30;
  *(undefined8 *)(this + 0x10) = local_38;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e5ed4  std::__ndk1::system_error::system_error =====

/* std::__ndk1::system_error::system_error(std::__ndk1::error_code, char const*) */

void __thiscall
std::__ndk1::system_error::system_error
          (system_error *this,undefined8 param_2,undefined8 param_3,char *param_4)

{
  long lVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  ulong local_88;
  size_t local_80;
  void *local_78;
  system_error local_70 [16];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = param_2;
  uStack_50 = param_3;
  __n = strlen(param_4);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_001e5f68;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_88 = uVar2 | 1;
    local_80 = __n;
    local_78 = __dest;
  }
  memcpy(__dest,param_4,__n);
LAB_001e5f68:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 001e5f6c to 001e5f7b has its CatchHandler @ 001e6024 */
  __init(local_70,&local_58,&local_88);
                    /* try { // try from 001e5f7c to 001e5f87 has its CatchHandler @ 001e5ff4 */
  runtime_error::runtime_error((runtime_error *)this,(basic_string_conflict *)local_70);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  *(undefined **)this = PTR_vtable_0020fc08 + 0x10;
  *(undefined8 *)(this + 0x18) = uStack_50;
  *(undefined8 *)(this + 0x10) = local_58;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001e6040  std::__ndk1::system_error::system_error =====

/* std::__ndk1::system_error::system_error(std::__ndk1::error_code) */

void __thiscall
std::__ndk1::system_error::system_error(system_error *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ushort local_68 [8];
  void *local_58;
  system_error local_50 [16];
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68[0] = 0;
                    /* try { // try from 001e6068 to 001e6077 has its CatchHandler @ 001e6110 */
  local_38 = param_2;
  uStack_30 = param_3;
  __init(local_50,&local_38,local_68);
                    /* try { // try from 001e6078 to 001e6083 has its CatchHandler @ 001e60e0 */
  runtime_error::runtime_error((runtime_error *)this,(basic_string_conflict *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  *(undefined **)this = PTR_vtable_0020fc08 + 0x10;
  *(undefined8 *)(this + 0x18) = uStack_30;
  *(undefined8 *)(this + 0x10) = local_38;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e612c  std::__ndk1::system_error::system_error =====

/* std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
std::__ndk1::system_error::system_error
          (system_error *this,int param_1,error_category *param_2,basic_string_conflict *param_3)

{
  long lVar1;
  undefined *puVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  int local_60 [2];
  error_category *local_58;
  system_error local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60[0] = param_1;
  local_58 = param_2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (local_78,param_3);
                    /* try { // try from 001e616c to 001e617b has its CatchHandler @ 001e6218 */
  __init(local_50,local_60,local_78);
                    /* try { // try from 001e617c to 001e6187 has its CatchHandler @ 001e61e8 */
  runtime_error::runtime_error((runtime_error *)this,(basic_string_conflict *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  puVar2 = PTR_vtable_0020fc08;
  *(int *)(this + 0x10) = param_1;
  *(error_category **)(this + 0x18) = param_2;
  *(undefined **)this = puVar2 + 0x10;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e6234  std::__ndk1::system_error::system_error =====

/* std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, char const*) */

void __thiscall
std::__ndk1::system_error::system_error
          (system_error *this,int param_1,error_category *param_2,char *param_3)

{
  long lVar1;
  undefined *puVar2;
  size_t __n;
  void *__dest;
  ulong uVar3;
  ulong local_98;
  size_t local_90;
  void *local_88;
  int local_80 [2];
  error_category *local_78;
  system_error local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_80[0] = param_1;
  local_78 = param_2;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_001e62d8;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_98 = uVar3 | 1;
    local_90 = __n;
    local_88 = __dest;
  }
  memcpy(__dest,param_3,__n);
LAB_001e62d8:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 001e62dc to 001e62eb has its CatchHandler @ 001e6398 */
  __init(local_70,local_80,&local_98);
                    /* try { // try from 001e62ec to 001e62f7 has its CatchHandler @ 001e6368 */
  runtime_error::runtime_error((runtime_error *)this,(basic_string_conflict *)local_70);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  puVar2 = PTR_vtable_0020fc08;
  *(int *)(this + 0x10) = param_1;
  *(error_category **)(this + 0x18) = param_2;
  *(undefined **)this = puVar2 + 0x10;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001e63b4  std::__ndk1::system_error::system_error =====

/* std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&) */

void __thiscall
std::__ndk1::system_error::system_error(system_error *this,int param_1,error_category *param_2)

{
  long lVar1;
  undefined *puVar2;
  ushort local_78 [8];
  void *local_68;
  int local_60 [2];
  error_category *local_58;
  system_error local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78[0] = 0;
                    /* try { // try from 001e63ec to 001e63fb has its CatchHandler @ 001e6498 */
  local_60[0] = param_1;
  local_58 = param_2;
  __init(local_50,local_60,local_78);
                    /* try { // try from 001e63fc to 001e6407 has its CatchHandler @ 001e6468 */
  runtime_error::runtime_error((runtime_error *)this,(basic_string_conflict *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  puVar2 = PTR_vtable_0020fc08;
  *(int *)(this + 0x10) = param_1;
  *(error_category **)(this + 0x18) = param_2;
  *(undefined **)this = puVar2 + 0x10;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e64b4  std::__ndk1::system_error::~system_error =====

/* std::__ndk1::system_error::~system_error() */

void __thiscall std::__ndk1::system_error::~system_error(system_error *this)

{
  (*(code *)PTR__underflow_error_00210890)();
  return;
}


// ===== 001e64b8  std::__ndk1::system_error::~system_error =====

/* std::__ndk1::system_error::~system_error() */

void __thiscall std::__ndk1::system_error::~system_error(system_error *this)

{
  underflow_error::~underflow_error((underflow_error *)this);
  operator_delete(this);
  return;
}


// ===== 001e64dc  std::__ndk1::__throw_system_error =====

/* std::__ndk1::__throw_system_error(int, char const*) */

void std::__ndk1::__throw_system_error(int param_1,char *param_2)

{
  int iVar1;
  system_error *psVar2;
  
  psVar2 = (system_error *)__cxa_allocate_exception(0x20);
  if (((DAT_00215f00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215f00), iVar1 != 0)) {
    DAT_00215ef8 = &PTR__error_category_0020c3a0;
    __cxa_guard_release(&DAT_00215f00);
  }
                    /* try { // try from 001e6548 to 001e6553 has its CatchHandler @ 001e656c */
  system_error::system_error(psVar2,param_1,&DAT_00215ef8,param_2);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(psVar2,PTR_PTR_0020fc10,PTR__system_error_0020fc18);
}


// ===== 001e6580  std::__ndk1::error_category::~error_category =====

/* std::__ndk1::error_category::~error_category() */

void __thiscall std::__ndk1::error_category::~error_category(error_category *this)

{
  return;
}


// ===== 001e6584  FUN_001e6584 =====

void FUN_001e6584(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1e6588);
  (*pcVar1)();
}


// ===== 001e6588  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001e658c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001e6590  FUN_001e6590 =====

void FUN_001e6590(char *param_1)

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
  iVar2 = vsnprintf(param_1,0x400,"Unknown error %d",&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 001e662c  std::__ndk1::thread::~thread =====

/* std::__ndk1::thread::~thread() */

void __thiscall std::__ndk1::thread::~thread(thread *this)

{
  if (*(long *)this == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}


// ===== 001e6648  std::__ndk1::thread::join =====

/* std::__ndk1::thread::join() */

void __thiscall std::__ndk1::thread::join(thread *this)

{
  int iVar1;
  
  if (*(pthread_t *)this == 0) {
    iVar1 = 0x16;
  }
  else {
    iVar1 = pthread_join(*(pthread_t *)this,(void **)0x0);
    if (iVar1 == 0) {
      *(undefined8 *)this = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"thread::join failed");
}


// ===== 001e668c  std::__ndk1::thread::detach =====

/* std::__ndk1::thread::detach() */

void __thiscall std::__ndk1::thread::detach(thread *this)

{
  int iVar1;
  
  if (*(pthread_t *)this == 0) {
    iVar1 = 0x16;
  }
  else {
    iVar1 = pthread_detach(*(pthread_t *)this);
    if (iVar1 == 0) {
      *(undefined8 *)this = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"thread::detach failed");
}


// ===== 001e66cc  std::__ndk1::thread::hardware_concurrency =====

/* std::__ndk1::thread::hardware_concurrency() */

undefined4 std::__ndk1::thread::hardware_concurrency(void)

{
  undefined4 uVar1;
  long lVar2;
  
                    /* try { // try from 001e66d4 to 001e66db has its CatchHandler @ 001e66ec */
  lVar2 = sysconf(0x61);
  uVar1 = (undefined4)lVar2;
  if (lVar2 < 1) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 001e66f0  std::__ndk1::this_thread::sleep_for =====

/* std::__ndk1::this_thread::sleep_for(std::__ndk1::chrono::duration<long long,
   std::__ndk1::ratio<1l, 1000000000l> > const&) */

void std::__ndk1::this_thread::sleep_for(duration *param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  timespec local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar4 = *(ulong *)param_1;
  if (0 < (long)uVar4) {
    local_38.tv_sec = uVar4 / 1000000000;
    local_38.tv_nsec = uVar4 % 1000000000;
    do {
      iVar2 = nanosleep(&local_38,&local_38);
      if (iVar2 != -1) break;
      piVar3 = (int *)__errno();
    } while (*piVar3 == 4);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e678c  std::__ndk1::__thread_local_data =====

/* std::__ndk1::__thread_local_data() */

undefined * std::__ndk1::__thread_local_data(void)

{
  int iVar1;
  
  if (((DAT_00215f10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215f10), iVar1 != 0)) {
                    /* try { // try from 001e67cc to 001e67ff has its CatchHandler @ 001e6800 */
    iVar1 = pthread_key_create((pthread_key_t *)&DAT_00215f08,FUN_001e6b58);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __throw_system_error(iVar1,"__thread_specific_ptr construction failed");
    }
    __cxa_guard_release(&DAT_00215f10);
  }
  return &DAT_00215f08;
}


// ===== 001e6818  FUN_001e6818 =====

void FUN_001e6818(long *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[4];
  for (puVar2 = (undefined8 *)param_1[3]; puVar2 != puVar3; puVar2 = puVar2 + 2) {
    std::__ndk1::mutex::unlock((mutex *)puVar2[1]);
    std::__ndk1::condition_variable::notify_all((condition_variable *)*puVar2);
  }
  puVar3 = (undefined8 *)param_1[1];
  for (puVar2 = (undefined8 *)*param_1; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                    /* try { // try from 001e6868 to 001e686b has its CatchHandler @ 001e68b8 */
    std::__ndk1::__assoc_sub_state::__make_ready((__assoc_sub_state *)*puVar2);
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar2);
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  param_1[1] = (long)pvVar1;
  operator_delete(pvVar1);
  return;
}


// ===== 001e68d4  FUN_001e68d4 =====

void FUN_001e68d4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 001e68ec  FUN_001e68ec =====

void FUN_001e68ec(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 001e6904  FUN_001e6904 =====

void FUN_001e6904(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__src;
  size_t __n;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 < *(undefined8 **)(param_1 + 0x28)) {
    *puVar4 = param_2;
    puVar4[1] = param_3;
    *(undefined8 **)(param_1 + 0x20) = puVar4 + 2;
  }
  else {
    __src = *(void **)(param_1 + 0x18);
    lVar7 = (long)puVar4 - (long)__src >> 4;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = (long)*(undefined8 **)(param_1 + 0x28) - (long)__src;
    uVar6 = lVar5 >> 3;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x7fffffffffffffe < (ulong)(lVar5 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = operator_new(uVar1 << 4);
      __src = *(void **)(param_1 + 0x18);
      puVar4 = *(undefined8 **)(param_1 + 0x20);
    }
    puVar2 = (undefined8 *)((long)pvVar3 + lVar7 * 0x10);
    __n = (long)puVar4 - (long)__src;
    *puVar2 = param_2;
    puVar2[1] = param_3;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar2 - __n),__src,__n);
      __src = *(void **)(param_1 + 0x18);
    }
    *(void **)(param_1 + 0x18) = (void *)((long)puVar2 - __n);
    *(undefined8 **)(param_1 + 0x20) = puVar2 + 2;
    *(void **)(param_1 + 0x28) = (void *)((long)pvVar3 + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


// ===== 001e69fc  FUN_001e69fc =====

void FUN_001e69fc(long *param_1,__shared_count *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__src;
  size_t __n;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 == (undefined8 *)param_1[2]) {
    __src = (void *)*param_1;
    lVar7 = (long)puVar4 - (long)__src >> 3;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - (long)__src;
    uVar6 = lVar5 >> 2;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0xffffffffffffffe < (ulong)(lVar5 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = operator_new(uVar1 << 3);
      __src = (void *)*param_1;
      puVar4 = (undefined8 *)param_1[1];
    }
    puVar2 = (undefined8 *)((long)pvVar3 + lVar7 * 8);
    __n = (long)puVar4 - (long)__src;
    *puVar2 = param_2;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar2 - __n),__src,__n);
      __src = (void *)*param_1;
    }
    *param_1 = (long)((long)puVar2 - __n);
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = (long)((long)pvVar3 + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *puVar4 = param_2;
    param_1[1] = (long)(puVar4 + 1);
  }
  std::__ndk1::__shared_count::__add_shared(param_2);
  return;
}


// ===== 001e6adc  std::__ndk1::__thread_struct::__thread_struct =====

/* std::__ndk1::__thread_struct::__thread_struct() */

void __thiscall std::__ndk1::__thread_struct::__thread_struct(__thread_struct *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 **)this = puVar1;
  return;
}


// ===== 001e6b10  std::__ndk1::__thread_struct::~__thread_struct =====

/* std::__ndk1::__thread_struct::~__thread_struct() */

void __thiscall std::__ndk1::__thread_struct::~__thread_struct(__thread_struct *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    FUN_001e6818(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 001e6b48  std::__ndk1::__thread_struct::notify_all_at_thread_exit =====

/* std::__ndk1::__thread_struct::notify_all_at_thread_exit(std::__ndk1::condition_variable*,
   std::__ndk1::mutex*) */

void std::__ndk1::__thread_struct::notify_all_at_thread_exit
               (condition_variable *param_1,mutex *param_2)

{
  FUN_001e6904(*(undefined8 *)param_1);
  return;
}


// ===== 001e6b50  std::__ndk1::__thread_struct::__make_ready_at_thread_exit =====

/* std::__ndk1::__thread_struct::__make_ready_at_thread_exit(std::__ndk1::__assoc_sub_state*) */

void std::__ndk1::__thread_struct::__make_ready_at_thread_exit(__assoc_sub_state *param_1)

{
  FUN_001e69fc(*(undefined8 *)param_1);
  return;
}


// ===== 001e6b58  FUN_001e6b58 =====

void FUN_001e6b58(undefined8 *param_1)

{
  void *pvVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      FUN_001e6818(pvVar1);
      operator_delete(pvVar1);
    }
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 001e6b98  FUN_001e6b98 =====

char * FUN_001e6b98(void)

{
  return "future";
}


// ===== 001e6ba4  FUN_001e6ba4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e6ba4(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  
  switch(param_3) {
  case 0:
  case 4:
    pcVar10 = (char *)operator_new(0x60);
    uVar1 = _DAT_00146260;
    uVar4 = s_The_associated_promise_has_been_d_00144f5b._72_8_;
    uVar3 = s_The_associated_promise_has_been_d_00144f5b._64_8_;
    uVar8 = s_The_associated_promise_has_been_d_00144f5b._56_8_;
    uVar7 = s_The_associated_promise_has_been_d_00144f5b._48_8_;
    param_1[1] = _UNK_00146268;
    *param_1 = uVar1;
    uVar9 = s_The_associated_promise_has_been_d_00144f5b._80_8_;
    uVar2 = s_The_associated_promise_has_been_d_00144f5b._8_8_;
    uVar1 = s_The_associated_promise_has_been_d_00144f5b._0_8_;
    *(undefined8 *)(pcVar10 + 0x48) = uVar4;
    *(undefined8 *)(pcVar10 + 0x40) = uVar3;
    uVar6 = s_The_associated_promise_has_been_d_00144f5b._40_8_;
    uVar5 = s_The_associated_promise_has_been_d_00144f5b._32_8_;
    uVar4 = s_The_associated_promise_has_been_d_00144f5b._24_8_;
    uVar3 = s_The_associated_promise_has_been_d_00144f5b._16_8_;
    param_1[2] = pcVar10;
    *(undefined8 *)(pcVar10 + 0x50) = uVar9;
    pcVar11 = pcVar10 + 0x58;
    *(undefined8 *)(pcVar10 + 0x28) = uVar6;
    *(undefined8 *)(pcVar10 + 0x20) = uVar5;
    *(undefined8 *)(pcVar10 + 0x38) = uVar8;
    *(undefined8 *)(pcVar10 + 0x30) = uVar7;
    *(undefined8 *)(pcVar10 + 8) = uVar2;
    *(undefined8 *)pcVar10 = uVar1;
    *(undefined8 *)(pcVar10 + 0x18) = uVar4;
    *(undefined8 *)(pcVar10 + 0x10) = uVar3;
    break;
  case 1:
    pcVar11 = (char *)operator_new(0x50);
    uVar1 = _DAT_00146290;
    uVar9 = s_The_future_has_already_been_retr_001451ac._64_8_;
    param_1[1] = _UNK_00146298;
    *param_1 = uVar1;
    uVar8 = s_The_future_has_already_been_retr_001451ac._56_8_;
    uVar7 = s_The_future_has_already_been_retr_001451ac._48_8_;
    uVar6 = s_The_future_has_already_been_retr_001451ac._40_8_;
    uVar5 = s_The_future_has_already_been_retr_001451ac._32_8_;
    uVar4 = s_The_future_has_already_been_retr_001451ac._24_8_;
    uVar3 = s_The_future_has_already_been_retr_001451ac._16_8_;
    uVar2 = s_The_future_has_already_been_retr_001451ac._8_8_;
    uVar1 = s_The_future_has_already_been_retr_001451ac._0_8_;
    param_1[2] = pcVar11;
    *(undefined8 *)(pcVar11 + 0x40) = uVar9;
    *(undefined8 *)(pcVar11 + 0x28) = uVar6;
    *(undefined8 *)(pcVar11 + 0x20) = uVar5;
    *(undefined8 *)(pcVar11 + 0x38) = uVar8;
    *(undefined8 *)(pcVar11 + 0x30) = uVar7;
    *(undefined8 *)(pcVar11 + 8) = uVar2;
    *(undefined8 *)pcVar11 = uVar1;
    *(undefined8 *)(pcVar11 + 0x18) = uVar4;
    *(undefined8 *)(pcVar11 + 0x10) = uVar3;
    pcVar11 = pcVar11 + 0x48;
    break;
  case 2:
    pcVar11 = (char *)operator_new(0x30);
    uVar8 = _UNK_00146228;
    uVar7 = _DAT_00146220;
    uVar6 = s_The_state_of_the_promise_has_alr_00144cef._38_8_;
    uVar5 = s_The_state_of_the_promise_has_alr_00144cef._16_8_;
    uVar4 = s_The_state_of_the_promise_has_alr_00144cef._8_8_;
    uVar3 = s_The_state_of_the_promise_has_alr_00144cef._0_8_;
    uVar2 = CONCAT62(s_The_state_of_the_promise_has_alr_00144cef._32_6_,
                     s_The_state_of_the_promise_has_alr_00144cef._30_2_);
    uVar1 = CONCAT26(s_The_state_of_the_promise_has_alr_00144cef._30_2_,
                     s_The_state_of_the_promise_has_alr_00144cef._24_6_);
    param_1[2] = pcVar11;
    param_1[1] = uVar8;
    *param_1 = uVar7;
    *(undefined8 *)(pcVar11 + 0x26) = uVar6;
    *(undefined8 *)(pcVar11 + 0x1e) = uVar2;
    *(undefined8 *)(pcVar11 + 8) = uVar4;
    *(undefined8 *)pcVar11 = uVar3;
    *(undefined8 *)(pcVar11 + 0x18) = uVar1;
    *(undefined8 *)(pcVar11 + 0x10) = uVar5;
    pcVar11 = pcVar11 + 0x2e;
    break;
  case 3:
    pcVar11 = (char *)operator_new(0x50);
    uVar5 = _DAT_001462e0;
    uVar4 = s_Operation_not_permitted_on_an_ob_00145d4d._24_8_;
    uVar3 = s_Operation_not_permitted_on_an_ob_00145d4d._16_8_;
    uVar2 = s_Operation_not_permitted_on_an_ob_00145d4d._8_8_;
    uVar1 = s_Operation_not_permitted_on_an_ob_00145d4d._0_8_;
    param_1[1] = _UNK_001462e8;
    *param_1 = uVar5;
    uVar8 = s_Operation_not_permitted_on_an_ob_00145d4d._56_8_;
    uVar7 = s_Operation_not_permitted_on_an_ob_00145d4d._48_8_;
    uVar6 = s_Operation_not_permitted_on_an_ob_00145d4d._40_8_;
    uVar5 = s_Operation_not_permitted_on_an_ob_00145d4d._32_8_;
    param_1[2] = pcVar11;
    pcVar11[0x40] = '.';
    *(undefined8 *)(pcVar11 + 0x28) = uVar6;
    *(undefined8 *)(pcVar11 + 0x20) = uVar5;
    *(undefined8 *)(pcVar11 + 0x38) = uVar8;
    *(undefined8 *)(pcVar11 + 0x30) = uVar7;
    *(undefined8 *)(pcVar11 + 8) = uVar2;
    *(undefined8 *)pcVar11 = uVar1;
    *(undefined8 *)(pcVar11 + 0x18) = uVar4;
    *(undefined8 *)(pcVar11 + 0x10) = uVar3;
    pcVar11 = pcVar11 + 0x41;
    break;
  default:
    pcVar10 = (char *)operator_new(0x20);
    uVar6 = _UNK_001462b8;
    uVar5 = _DAT_001462b0;
    uVar4 = s_unspecified_future_errc_value_00145f09._22_8_;
    uVar3 = s_unspecified_future_errc_value_00145f09._0_8_;
    uVar2 = CONCAT62(s_unspecified_future_errc_value_00145f09._16_6_,
                     s_unspecified_future_errc_value_00145f09._14_2_);
    uVar1 = CONCAT26(s_unspecified_future_errc_value_00145f09._14_2_,
                     s_unspecified_future_errc_value_00145f09._8_6_);
    pcVar11 = pcVar10 + 0x1e;
    param_1[2] = pcVar10;
    param_1[1] = uVar6;
    *param_1 = uVar5;
    *(undefined8 *)(pcVar10 + 0x16) = uVar4;
    *(undefined8 *)(pcVar10 + 0xe) = uVar2;
    *(undefined8 *)(pcVar10 + 8) = uVar1;
    *(undefined8 *)pcVar10 = uVar3;
  }
  *pcVar11 = '\0';
  return;
}


// ===== 001e6d1c  std::__ndk1::future_category =====

/* std::__ndk1::future_category() */

undefined8 * std::__ndk1::future_category(void)

{
  int iVar1;
  
  if (((DAT_00215f20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215f20), iVar1 != 0)) {
    error_category::error_category((error_category *)&DAT_00215f18);
    DAT_00215f18 = &PTR__error_category_0020c488;
    __cxa_atexit(PTR__error_category_0020f8f8,&DAT_00215f18,&PTR_LOOP_002086b0);
    __cxa_guard_release(&DAT_00215f20);
  }
  return &DAT_00215f18;
}


// ===== 001e6da0  std::__ndk1::future_error::future_error =====

/* std::__ndk1::future_error::future_error(std::__ndk1::error_code) */

void __thiscall
std::__ndk1::future_error::future_error(future_error *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  basic_string_conflict local_50 [16];
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  uStack_30 = param_3;
  error_code::message((error_code *)&local_38);
                    /* try { // try from 001e6dd0 to 001e6ddb has its CatchHandler @ 001e6e28 */
  logic_error::logic_error((logic_error *)this,local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined **)this = PTR_vtable_0020fc20 + 0x10;
  *(undefined8 *)(this + 0x18) = uStack_30;
  *(undefined8 *)(this + 0x10) = local_38;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e6e44  std::__ndk1::future_error::~future_error =====

/* std::__ndk1::future_error::~future_error() */

void __thiscall std::__ndk1::future_error::~future_error(future_error *this)

{
  (*(code *)PTR__domain_error_002108e0)();
  return;
}


// ===== 001e6e48  std::__ndk1::future_error::~future_error =====

/* std::__ndk1::future_error::~future_error() */

void __thiscall std::__ndk1::future_error::~future_error(future_error *this)

{
  domain_error::~domain_error((domain_error *)this);
  operator_delete(this);
  return;
}


// ===== 001e6e6c  std::__ndk1::__assoc_sub_state::__on_zero_shared =====

/* std::__ndk1::__assoc_sub_state::__on_zero_shared() */

void __thiscall std::__ndk1::__assoc_sub_state::__on_zero_shared(__assoc_sub_state *this)

{
  if (this != (__assoc_sub_state *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001e6e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}


// ===== 001e6e80  std::__ndk1::__assoc_sub_state::set_value =====

/* std::__ndk1::__assoc_sub_state::set_value() */

void __thiscall std::__ndk1::__assoc_sub_state::set_value(__assoc_sub_state *this)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  mutex::lock((mutex *)(this + 0x18));
  if (((byte)this[0x70] & 1) == 0) {
    local_40 = 0;
    lVar2 = *(long *)(this + 0x10);
    exception_ptr::~exception_ptr((exception_ptr *)&local_40);
    if (lVar2 == 0) {
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 5;
      condition_variable::notify_all((condition_variable *)(this + 0x40));
      mutex::unlock((mutex *)(this + 0x18));
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* try { // try from 001e6f10 to 001e6f17 has its CatchHandler @ 001e6f1c */
                    /* WARNING: Subroutine does not return */
  FUN_001e6f30(2);
}


// ===== 001e6f30  FUN_001e6f30 =====

void FUN_001e6f30(undefined4 param_1)

{
  int iVar1;
  future_error *pfVar2;
  
  pfVar2 = (future_error *)__cxa_allocate_exception(0x20);
  if (((DAT_00215f20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00215f20), iVar1 != 0)) {
    std::__ndk1::error_category::error_category((error_category *)&DAT_00215f18);
    DAT_00215f18 = &PTR__error_category_0020c488;
    __cxa_atexit(PTR__error_category_0020f8f8,&DAT_00215f18,&PTR_LOOP_002086b0);
    __cxa_guard_release(&DAT_00215f20);
  }
                    /* try { // try from 001e6fbc to 001e6fc3 has its CatchHandler @ 001e6fdc */
  std::__ndk1::future_error::future_error(pfVar2,param_1,&DAT_00215f18);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pfVar2,PTR_PTR_0020fc28,PTR__future_error_0020fc30);
}


// ===== 001e6ff0  std::__ndk1::__assoc_sub_state::set_value_at_thread_exit =====

/* std::__ndk1::__assoc_sub_state::set_value_at_thread_exit() */

void __thiscall std::__ndk1::__assoc_sub_state::set_value_at_thread_exit(__assoc_sub_state *this)

{
  long lVar1;
  pthread_key_t *ppVar2;
  __assoc_sub_state *p_Var3;
  long lVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  mutex::lock((mutex *)(this + 0x18));
  if (((byte)this[0x70] & 1) == 0) {
    local_40 = 0;
    lVar4 = *(long *)(this + 0x10);
    exception_ptr::~exception_ptr((exception_ptr *)&local_40);
    if (lVar4 == 0) {
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
                    /* try { // try from 001e7048 to 001e708f has its CatchHandler @ 001e7094 */
      ppVar2 = (pthread_key_t *)__thread_local_data();
      p_Var3 = (__assoc_sub_state *)pthread_getspecific(*ppVar2);
      __thread_struct::__make_ready_at_thread_exit(p_Var3);
      mutex::unlock((mutex *)(this + 0x18));
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001e6f30(2);
}


// ===== 001e70a8  std::__ndk1::__assoc_sub_state::set_exception =====

/* std::__ndk1::__assoc_sub_state::set_exception(std::exception_ptr) */

void __thiscall
std::__ndk1::__assoc_sub_state::set_exception(__assoc_sub_state *this,exception_ptr *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  mutex::lock((mutex *)(this + 0x18));
  if (((byte)this[0x70] & 1) == 0) {
    local_50 = 0;
    lVar2 = *(long *)(this + 0x10);
    exception_ptr::~exception_ptr((exception_ptr *)&local_50);
    if (lVar2 == 0) {
      exception_ptr::operator=((exception_ptr *)(this + 0x10),param_2);
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 4;
      condition_variable::notify_all((condition_variable *)(this + 0x40));
      mutex::unlock((mutex *)(this + 0x18));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* try { // try from 001e714c to 001e7153 has its CatchHandler @ 001e7158 */
                    /* WARNING: Subroutine does not return */
  FUN_001e6f30(2);
}


// ===== 001e716c  std::__ndk1::__assoc_sub_state::set_exception_at_thread_exit =====

/* std::__ndk1::__assoc_sub_state::set_exception_at_thread_exit(std::exception_ptr) */

void __thiscall
std::__ndk1::__assoc_sub_state::set_exception_at_thread_exit
          (__assoc_sub_state *this,exception_ptr *param_2)

{
  long lVar1;
  pthread_key_t *ppVar2;
  __assoc_sub_state *p_Var3;
  long lVar4;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  mutex::lock((mutex *)(this + 0x18));
  if (((byte)this[0x70] & 1) == 0) {
    local_50 = 0;
    lVar4 = *(long *)(this + 0x10);
    exception_ptr::~exception_ptr((exception_ptr *)&local_50);
    if (lVar4 == 0) {
      exception_ptr::operator=((exception_ptr *)(this + 0x10),param_2);
                    /* try { // try from 001e71cc to 001e7217 has its CatchHandler @ 001e721c */
      ppVar2 = (pthread_key_t *)__thread_local_data();
      p_Var3 = (__assoc_sub_state *)pthread_getspecific(*ppVar2);
      __thread_struct::__make_ready_at_thread_exit(p_Var3);
      mutex::unlock((mutex *)(this + 0x18));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001e6f30(2);
}


// ===== 001e7230  std::__ndk1::__assoc_sub_state::__make_ready =====

/* std::__ndk1::__assoc_sub_state::__make_ready() */

void __thiscall std::__ndk1::__assoc_sub_state::__make_ready(__assoc_sub_state *this)

{
  mutex::lock((mutex *)(this + 0x18));
  *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 4;
  condition_variable::notify_all((condition_variable *)(this + 0x40));
  mutex::unlock((mutex *)(this + 0x18));
  return;
}


// ===== 001e7270  std::__ndk1::__assoc_sub_state::copy =====

/* std::__ndk1::__assoc_sub_state::copy() */

void __thiscall std::__ndk1::__assoc_sub_state::copy(__assoc_sub_state *this)

{
  mutex *this_00;
  uint uVar1;
  long lVar2;
  long lVar3;
  exception_ptr aeStack_58 [8];
  undefined8 local_50;
  mutex *local_48;
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = (mutex *)(this + 0x18);
  local_40 = '\x01';
  local_48 = this_00;
  mutex::lock(this_00);
  uVar1 = *(uint *)(this + 0x70);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      do {
        condition_variable::wait((condition_variable *)(this + 0x40),(unique_lock *)&local_48);
      } while (((byte)this[0x70] >> 2 & 1) == 0);
    }
    else {
      *(uint *)(this + 0x70) = uVar1 & 0xfffffff7;
      mutex::unlock(this_00);
      local_40 = '\0';
                    /* try { // try from 001e72f0 to 001e72f7 has its CatchHandler @ 001e7368 */
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  local_50 = 0;
  lVar3 = *(long *)(this + 0x10);
  exception_ptr::~exception_ptr((exception_ptr *)&local_50);
  if (lVar3 == 0) {
    if (local_40 != '\0') {
      mutex::unlock(local_48);
    }
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
  else {
    exception_ptr::exception_ptr(aeStack_58,(exception_ptr *)(this + 0x10));
                    /* try { // try from 001e734c to 001e7353 has its CatchHandler @ 001e7358 */
    rethrow_exception(aeStack_58);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e7384  std::__ndk1::__assoc_sub_state::__sub_wait =====

/* std::__ndk1::__assoc_sub_state::__sub_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&) */

void __thiscall
std::__ndk1::__assoc_sub_state::__sub_wait(__assoc_sub_state *this,unique_lock *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x70);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) != 0) {
      *(uint *)(this + 0x70) = uVar1 & 0xfffffff7;
      if (param_1[8] != (unique_lock)0x0) {
        mutex::unlock(*(mutex **)param_1);
        param_1[8] = (unique_lock)0x0;
                    /* WARNING: Could not recover jumptable at 0x001e7404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0x18))(this);
        return;
      }
                    /* WARNING: Subroutine does not return */
      __throw_system_error(1,"unique_lock::unlock: not locked");
    }
    do {
      condition_variable::wait((condition_variable *)(this + 0x40),param_1);
    } while (((byte)this[0x70] >> 2 & 1) == 0);
  }
  return;
}


// ===== 001e7418  std::__ndk1::__assoc_sub_state::wait =====

/* std::__ndk1::__assoc_sub_state::wait() */

void __thiscall std::__ndk1::__assoc_sub_state::wait(__assoc_sub_state *this)

{
  mutex *this_00;
  uint uVar1;
  long lVar2;
  mutex *local_48;
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = (mutex *)(this + 0x18);
  local_40 = '\x01';
  local_48 = this_00;
  mutex::lock(this_00);
  uVar1 = *(uint *)(this + 0x70);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      do {
        condition_variable::wait((condition_variable *)(this + 0x40),(unique_lock *)&local_48);
      } while (((byte)this[0x70] >> 2 & 1) == 0);
    }
    else {
      *(uint *)(this + 0x70) = uVar1 & 0xfffffff7;
      mutex::unlock(this_00);
      local_40 = '\0';
                    /* try { // try from 001e7498 to 001e749f has its CatchHandler @ 001e74d8 */
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  if (local_40 != '\0') {
    mutex::unlock(local_48);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001e74f4  std::__ndk1::__assoc_sub_state::__execute =====

/* std::__ndk1::__assoc_sub_state::__execute() */

void std::__ndk1::__assoc_sub_state::__execute(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001e6f30(3);
}


// ===== 001e7504  std::__ndk1::future<void>::future =====

/* std::__ndk1::future<void>::future(std::__ndk1::__assoc_sub_state*) */

void __thiscall std::__ndk1::future<void>::future(future<void> *this,__assoc_sub_state *param_1)

{
  *(__assoc_sub_state **)this = param_1;
  mutex::lock((mutex *)(param_1 + 0x18));
  if (((byte)param_1[0x70] >> 1 & 1) == 0) {
    __shared_count::__add_shared((__shared_count *)param_1);
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 2;
    mutex::unlock((mutex *)(param_1 + 0x18));
    return;
  }
                    /* try { // try from 001e7550 to 001e7557 has its CatchHandler @ 001e7558 */
                    /* WARNING: Subroutine does not return */
  FUN_001e6f30(1);
}


// ===== 001e756c  std::__ndk1::future<void>::~future =====

/* std::__ndk1::future<void>::~future() */

void __thiscall std::__ndk1::future<void>::~future(future<void> *this)

{
  if (*(__shared_count **)this != (__shared_count *)0x0) {
    __shared_count::__release_shared(*(__shared_count **)this);
    return;
  }
  return;
}


// ===== 001e757c  std::__ndk1::future<void>::get =====

/* std::__ndk1::future<void>::get() */

void __thiscall std::__ndk1::future<void>::get(future<void> *this)

{
  __assoc_sub_state *this_00;
  
  this_00 = *(__assoc_sub_state **)this;
  *(undefined8 *)this = 0;
                    /* try { // try from 001e7590 to 001e7597 has its CatchHandler @ 001e75b8 */
  __assoc_sub_state::copy(this_00);
  if (this_00 != (__assoc_sub_state *)0x0) {
    __shared_count::__release_shared((__shared_count *)this_00);
    return;
  }
  return;
}


// ===== 001e75d0  std::__ndk1::promise<void>::promise =====

/* std::__ndk1::promise<void>::promise() */

void __thiscall std::__ndk1::promise<void>::promise(promise<void> *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x78);
  puVar1 = PTR_vtable_0020fc38;
  *(undefined4 *)(plVar2 + 0xe) = 0;
  plVar2[3] = 0;
  plVar2[2] = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  plVar2[0xd] = 0;
  plVar2[0xc] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  *(long **)this = plVar2;
  return;
}


// ===== 001e761c  std::__ndk1::promise<void>::~promise =====

/* std::__ndk1::promise<void>::~promise() */

void __thiscall std::__ndk1::promise<void>::~promise(promise<void> *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  __assoc_sub_state *p_Var4;
  undefined *local_88 [2];
  undefined8 local_78;
  undefined8 *puStack_70;
  exception_ptr aeStack_68 [8];
  ulong local_60 [2];
  void *local_50;
  undefined8 local_48;
  undefined8 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)this;
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 0x70) & 1) == 0) {
      local_60[0] = 0;
      lVar3 = *(long *)(lVar3 + 0x10);
      exception_ptr::~exception_ptr((exception_ptr *)local_60);
      if ((lVar3 == 0) && (p_Var4 = *(__assoc_sub_state **)this, 0 < *(long *)(p_Var4 + 8))) {
        if (((DAT_00215f20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_00215f20), iVar2 != 0)) {
          error_category::error_category((error_category *)&DAT_00215f18);
          DAT_00215f18 = &PTR__error_category_0020c488;
          __cxa_atexit(PTR__error_category_0020f8f8,&DAT_00215f18,&PTR_LOOP_002086b0);
          __cxa_guard_release(&DAT_00215f20);
        }
        local_48 = 4;
        puStack_40 = &DAT_00215f18;
                    /* try { // try from 001e7694 to 001e769f has its CatchHandler @ 001e77d0 */
        error_code::message((error_code *)&local_48);
                    /* try { // try from 001e76a0 to 001e76ab has its CatchHandler @ 001e77b4 */
        logic_error::logic_error((logic_error *)local_88,(basic_string_conflict *)local_60);
        if ((local_60[0] & 1) != 0) {
          operator_delete(local_50);
        }
        puStack_70 = puStack_40;
        local_78 = local_48;
        local_88[0] = PTR_vtable_0020fc20 + 0x10;
        FUN_001e77dc(aeStack_68,local_88);
                    /* try { // try from 001e76e0 to 001e76eb has its CatchHandler @ 001e7798 */
        __assoc_sub_state::set_exception(p_Var4,aeStack_68);
        exception_ptr::~exception_ptr(aeStack_68);
        domain_error::~domain_error((domain_error *)local_88);
      }
    }
    __shared_count::__release_shared(*(__shared_count **)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e77dc  FUN_001e77dc =====

void FUN_001e77dc(logic_error *param_1)

{
  logic_error *this;
  undefined8 uVar1;
  
  this = (logic_error *)__cxa_allocate_exception(0x20);
  std::logic_error::logic_error(this,param_1);
  *(undefined **)this = PTR_vtable_0020fc20 + 0x10;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
                    /* try { // try from 001e7820 to 001e7837 has its CatchHandler @ 001e7838 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_0020fc28,PTR__future_error_0020fc30);
}


// ===== 001e785c  std::__ndk1::promise<void>::get_future =====

/* std::__ndk1::promise<void>::get_future() */

void std::__ndk1::promise<void>::get_future(void)

{
  undefined8 *in_x0;
  undefined8 *in_x8;
  __shared_count *this;
  
  this = (__shared_count *)*in_x0;
  if (this == (__shared_count *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_001e6f30(3);
  }
  *in_x8 = this;
  mutex::lock((mutex *)(this + 0x18));
  if (((byte)this[0x70] >> 1 & 1) == 0) {
    __shared_count::__add_shared(this);
    *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
    mutex::unlock((mutex *)(this + 0x18));
    return;
  }
                    /* try { // try from 001e78b4 to 001e78bb has its CatchHandler @ 001e78bc */
                    /* WARNING: Subroutine does not return */
  FUN_001e6f30(1);
}


// ===== 001e78d0  std::__ndk1::promise<void>::set_value =====

/* std::__ndk1::promise<void>::set_value() */

void __thiscall std::__ndk1::promise<void>::set_value(promise<void> *this)

{
  if (*(__assoc_sub_state **)this != (__assoc_sub_state *)0x0) {
    __assoc_sub_state::set_value(*(__assoc_sub_state **)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001e6f30(3);
}


// ===== 001e78f0  std::__ndk1::promise<void>::set_exception =====

/* std::__ndk1::promise<void>::set_exception(std::exception_ptr) */

void __thiscall
std::__ndk1::promise<void>::set_exception(promise<void> *this,exception_ptr *param_2)

{
  long lVar1;
  __assoc_sub_state *p_Var2;
  exception_ptr aeStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  p_Var2 = *(__assoc_sub_state **)this;
  if (p_Var2 == (__assoc_sub_state *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_001e6f30(3);
  }
  exception_ptr::exception_ptr(aeStack_30,param_2);
                    /* try { // try from 001e791c to 001e7927 has its CatchHandler @ 001e795c */
  __assoc_sub_state::set_exception(p_Var2,aeStack_30);
  exception_ptr::~exception_ptr(aeStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e7970  std::__ndk1::promise<void>::set_value_at_thread_exit =====

/* std::__ndk1::promise<void>::set_value_at_thread_exit() */

void __thiscall std::__ndk1::promise<void>::set_value_at_thread_exit(promise<void> *this)

{
  if (*(__assoc_sub_state **)this != (__assoc_sub_state *)0x0) {
    __assoc_sub_state::set_value_at_thread_exit(*(__assoc_sub_state **)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001e6f30(3);
}


// ===== 001e7990  std::__ndk1::promise<void>::set_exception_at_thread_exit =====

/* std::__ndk1::promise<void>::set_exception_at_thread_exit(std::exception_ptr) */

void __thiscall
std::__ndk1::promise<void>::set_exception_at_thread_exit(promise<void> *this,exception_ptr *param_2)

{
  long lVar1;
  __assoc_sub_state *p_Var2;
  exception_ptr aeStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  p_Var2 = *(__assoc_sub_state **)this;
  if (p_Var2 == (__assoc_sub_state *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_001e6f30(3);
  }
  exception_ptr::exception_ptr(aeStack_30,param_2);
                    /* try { // try from 001e79bc to 001e79c7 has its CatchHandler @ 001e79fc */
  __assoc_sub_state::set_exception_at_thread_exit(p_Var2,aeStack_30);
  exception_ptr::~exception_ptr(aeStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e7a10  std::__ndk1::shared_future<void>::~shared_future =====

/* std::__ndk1::shared_future<void>::~shared_future() */

void __thiscall std::__ndk1::shared_future<void>::~shared_future(shared_future<void> *this)

{
  if (*(__shared_count **)this != (__shared_count *)0x0) {
    __shared_count::__release_shared(*(__shared_count **)this);
    return;
  }
  return;
}


// ===== 001e7a20  std::__ndk1::shared_future<void>::operator= =====

/* std::__ndk1::shared_future<void>::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::shared_future<void>
   const&) */

shared_future<void> * __thiscall
std::__ndk1::shared_future<void>::operator=(shared_future<void> *this,shared_future *param_1)

{
  if (*(__shared_count **)param_1 != (__shared_count *)0x0) {
    __shared_count::__add_shared(*(__shared_count **)param_1);
  }
  if (*(__shared_count **)this != (__shared_count *)0x0) {
    __shared_count::__release_shared(*(__shared_count **)this);
  }
  *(undefined8 *)this = *(undefined8 *)param_1;
  return this;
}


// ===== 001e7a68  std::__ndk1::__assoc_sub_state::~__assoc_sub_state =====

/* std::__ndk1::__assoc_sub_state::~__assoc_sub_state() */

void __thiscall std::__ndk1::__assoc_sub_state::~__assoc_sub_state(__assoc_sub_state *this)

{
  *(undefined **)this = PTR_vtable_0020fc38 + 0x10;
  condition_variable::~condition_variable((condition_variable *)(this + 0x40));
  mutex::~mutex((mutex *)(this + 0x18));
  exception_ptr::~exception_ptr((exception_ptr *)(this + 0x10));
  __shared_count::~__shared_count((__shared_count *)this);
  return;
}


// ===== 001e7ab4  std::__ndk1::__assoc_sub_state::~__assoc_sub_state =====

/* std::__ndk1::__assoc_sub_state::~__assoc_sub_state() */

void __thiscall std::__ndk1::__assoc_sub_state::~__assoc_sub_state(__assoc_sub_state *this)

{
  *(undefined **)this = PTR_vtable_0020fc38 + 0x10;
  condition_variable::~condition_variable((condition_variable *)(this + 0x40));
  mutex::~mutex((mutex *)(this + 0x18));
  exception_ptr::~exception_ptr((exception_ptr *)(this + 0x10));
  __shared_count::~__shared_count((__shared_count *)this);
  operator_delete(this);
  return;
}


// ===== 001e7b08  FUN_001e7b08 =====

void FUN_001e7b08(error_category *param_1)

{
  std::__ndk1::error_category::~error_category(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001e7b2c  std::__ndk1::__vector_base_common<true>::__throw_length_error =====

/* std::__ndk1::__vector_base_common<true>::__throw_length_error() const */

void std::__ndk1::__vector_base_common<true>::__throw_length_error(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001dad18("vector");
}


// ===== 001e7b40  std::__ndk1::__vector_base_common<true>::__throw_out_of_range =====

/* std::__ndk1::__vector_base_common<true>::__throw_out_of_range() const */

void std::__ndk1::__vector_base_common<true>::__throw_out_of_range(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001dd6e4("vector");
}


// ===== 001e7b54  FUN_001e7b54 =====

void FUN_001e7b54(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}


// ===== 001e7b5c  FUN_001e7b5c =====

undefined8 FUN_001e7b5c(undefined8 *param_1)

{
  return *param_1;
}


// ===== 001e7b64  FUN_001e7b64 =====

bool FUN_001e7b64(ulong *param_1)

{
  return *param_1 >> 8 == 0x434c4e47432b2b;
}


// ===== 001e7b84  __cxa_allocate_exception =====

long __cxa_allocate_exception(long param_1)

{
  void *__s;
  ulong __n;
  
  __n = param_1 + 0x8fU & 0xfffffffffffffff0;
                    /* try { // try from 001e7b98 to 001e7b9f has its CatchHandler @ 001e7bcc */
  __s = (void *)FUN_001fd07c(__n);
  if (__s != (void *)0x0) {
    memset(__s,0,__n);
    return (long)__s + 0x80;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 001e7bd0  __cxa_free_exception =====

void __cxa_free_exception(long param_1)

{
                    /* try { // try from 001e7bdc to 001e7bdf has its CatchHandler @ 001e7be8 */
  FUN_001fd230(param_1 + -0x80);
  return;
}


// ===== 001e7bec  __cxa_allocate_dependent_exception =====

void __cxa_allocate_dependent_exception(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001fd07c(0x80);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 001e7c20  __cxa_free_dependent_exception =====

void __cxa_free_dependent_exception(undefined1 *param_1)

{
  if (((undefined1 *)0x215fbf < param_1) && (param_1 < &DAT_002161c0)) {
    FUN_001fd258();
    return;
  }
  free(param_1);
  return;
}


// ===== 001e7c24  __cxa_throw =====

void __cxa_throw(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = __cxa_get_globals();
  uVar2 = std::get_unexpected();
  *(undefined8 *)(param_1 + -0x60) = uVar2;
  uVar2 = std::get_terminate();
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  *(undefined8 *)(param_1 + -0x58) = uVar2;
  FUN_001e7ca0(param_1 + -0x20);
  *(undefined8 *)(param_1 + -0x78) = 1;
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  *(code **)(param_1 + -0x18) = FUN_001e7cb8;
  FUN_00200be4(param_1 + -0x20);
  puVar3 = (undefined8 *)FUN_001e7d1c(param_1 + -0x80);
  *puVar3 = 0x434c4e47432b2b00;
  return;
}


// ===== 001e7ca0  FUN_001e7ca0 =====

void FUN_001e7ca0(undefined8 *param_1)

{
  *param_1 = 0x434c4e47432b2b00;
  return;
}


// ===== 001e7cb8  FUN_001e7cb8 =====

void FUN_001e7cb8(int param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 == 1) {
    plVar3 = (long *)(param_2 + -0x58);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      if (*(code **)(param_2 + -0x48) != (code *)0x0) {
                    /* try { // try from 001e7cf4 to 001e7cf7 has its CatchHandler @ 001e7d14 */
        (**(code **)(param_2 + -0x48))(param_2 + 0x20);
      }
                    /* try { // try from 001e7cf8 to 001e7cff has its CatchHandler @ 001e7d18 */
      FUN_001fd230(param_2 + -0x60);
    }
    return;
  }
  FUN_001e8704(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 001e7cf4 with catch @ 001e7d14 */
  __cxa_call_unexpected();
}


// ===== 001e7d1c  FUN_001e7d1c =====

undefined8 FUN_001e7d1c(long param_1)

{
  long lVar1;
  
  __cxa_begin_catch(param_1 + 0x60);
  lVar1 = FUN_001e8704(*(undefined8 *)(param_1 + 0x28));
  return *(undefined8 *)(lVar1 + -8);
}


// ===== 001e7d3c  __cxa_get_exception_ptr =====

undefined8 __cxa_get_exception_ptr(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}


// ===== 001e7d44  __cxa_begin_catch =====

ulong * __cxa_begin_catch(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
                    /* try { // try from 001e7d58 to 001e7d5b has its CatchHandler @ 001e7dd4 */
  plVar3 = (long *)__cxa_get_globals();
  puVar4 = param_1 + -0xc;
  if (uVar5 >> 8 == 0x434c4e47432b2b) {
    iVar2 = (int)param_1[-5];
    iVar1 = -iVar2;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    *(int *)(param_1 + -5) = iVar1 + 1;
    if ((ulong *)*plVar3 != puVar4) {
      param_1[-6] = (ulong)*plVar3;
      *plVar3 = (long)puVar4;
    }
    *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
    param_1 = (ulong *)param_1[-1];
  }
  else {
    if (*plVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    *plVar3 = (long)puVar4;
    param_1 = param_1 + 4;
  }
  return param_1;
}


// ===== 001e7dd8  __cxa_end_catch =====

void __cxa_end_catch(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)__cxa_get_globals_fast();
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    if (*(ulong *)(lVar5 + 0x60) >> 8 == 0x434c4e47432b2b) {
      iVar1 = *(int *)(lVar5 + 0x38);
      if (iVar1 < 0) {
        *(int *)(lVar5 + 0x38) = iVar1 + 1;
        if (iVar1 == -1) {
          *plVar4 = *(long *)(lVar5 + 0x30);
        }
      }
      else {
        *(int *)(lVar5 + 0x38) = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          *plVar4 = *(long *)(lVar5 + 0x30);
          lVar6 = lVar5;
          if (*(char *)(lVar5 + 0x60) == '\x01') {
            lVar6 = *(long *)(lVar5 + 8) + -0x80;
            FUN_001fd230(lVar5);
          }
          plVar4 = (long *)(lVar6 + 8);
          do {
            lVar5 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 + -1 == 0) {
            if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
                    /* try { // try from 001e7e74 to 001e7e77 has its CatchHandler @ 001e7eb0 */
              (**(code **)(lVar6 + 0x18))(lVar6 + 0x80);
            }
                    /* try { // try from 001e7e78 to 001e7e7f has its CatchHandler @ 001e7eb4 */
            FUN_001fd230(lVar6);
          }
        }
      }
    }
    else {
      FUN_00201044();
      *plVar4 = 0;
    }
  }
  return;
}


// ===== 001e7eb8  __cxa_decrement_exception_refcount =====

void __cxa_decrement_exception_refcount(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 != 0) {
    plVar3 = (long *)(param_1 + -0x78);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      if (*(code **)(param_1 + -0x68) != (code *)0x0) {
                    /* try { // try from 001e7eec to 001e7eef has its CatchHandler @ 001e7f04 */
        (**(code **)(param_1 + -0x68))();
      }
                    /* try { // try from 001e7ef0 to 001e7ef7 has its CatchHandler @ 001e7f08 */
      FUN_001fd230(param_1 + -0x80);
    }
  }
  return;
}


// ===== 001e7f0c  __cxa_current_exception_type =====

long * __cxa_current_exception_type(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)__cxa_get_globals_fast();
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if ((lVar2 == 0) || (*(ulong *)(lVar2 + 0x60) >> 8 != 0x434c4e47432b2b)) {
      return (long *)0x0;
    }
    plVar1 = *(long **)(lVar2 + 0x10);
  }
  return plVar1;
}


// ===== 001e7f58  __cxa_rethrow =====

void __cxa_rethrow(void)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  
  plVar3 = (long *)__cxa_get_globals();
  lVar6 = *plVar3;
  if (lVar6 != 0) {
    puVar5 = (ulong *)(lVar6 + 0x60);
    uVar4 = *puVar5;
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      *(int *)(lVar6 + 0x38) = -*(int *)(lVar6 + 0x38);
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    }
    else {
      *plVar3 = 0;
    }
    FUN_00200be4(puVar5);
    uVar7 = *puVar5;
                    /* try { // try from 001e7fc8 to 001e7fcb has its CatchHandler @ 001e803c */
    plVar3 = (long *)__cxa_get_globals();
    if ((uVar7 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      iVar2 = *(int *)(lVar6 + 0x38);
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      *(int *)(lVar6 + 0x38) = iVar1 + 1;
      if (*plVar3 != lVar6) {
        *(long *)(lVar6 + 0x30) = *plVar3;
        *plVar3 = lVar6;
      }
      *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
    }
    else {
      if (*plVar3 != 0) goto LAB_001e8038;
      *plVar3 = lVar6;
    }
    if ((uVar4 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      FUN_001e8704(*(undefined8 *)(lVar6 + 0x28));
    }
  }
LAB_001e8038:
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 001e8040  __cxa_increment_exception_refcount =====

void __cxa_increment_exception_refcount(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  if (param_1 != 0) {
    plVar3 = (long *)(param_1 + -0x78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}


// ===== 001e805c  __cxa_current_primary_exception =====

long * __cxa_current_primary_exception(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
                    /* try { // try from 001e8064 to 001e8067 has its CatchHandler @ 001e80d0 */
  plVar4 = (long *)__cxa_get_globals_fast();
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    if ((lVar5 == 0) || (*(ulong *)(lVar5 + 0x60) >> 8 != 0x434c4e47432b2b)) {
      return (long *)0x0;
    }
    if ((*(ulong *)(lVar5 + 0x60) & 0xff) == 1) {
      lVar5 = *(long *)(lVar5 + 8) + -0x80;
    }
    plVar4 = (long *)(lVar5 + 0x80);
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return plVar4;
}


// ===== 001e80d4  __cxa_rethrow_primary_exception =====

void __cxa_rethrow_primary_exception(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  
  if (param_1 != 0) {
    puVar5 = (undefined8 *)FUN_001fd07c(0x80);
    if (puVar5 == (undefined8 *)0x0) {
LAB_001e81e8:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    plVar8 = (long *)(param_1 + -0x78);
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[1] = param_1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar5[2] = *(undefined8 *)(param_1 + -0x70);
    uVar6 = std::get_unexpected();
    puVar5[4] = uVar6;
    uVar6 = std::get_terminate();
    puVar9 = puVar5 + 0xc;
    *puVar9 = 0x434c4e47432b2b01;
    puVar5[5] = uVar6;
    lVar7 = __cxa_get_globals();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    puVar5[0xd] = FUN_001e81f0;
    FUN_00200be4(puVar9);
    uVar10 = *puVar9;
                    /* try { // try from 001e8184 to 001e8187 has its CatchHandler @ 001e81ec */
    plVar8 = (long *)__cxa_get_globals();
    if ((uVar10 & 0xffffffffffffff00) == 0x434c4e47432b2b00) {
      iVar2 = *(int *)(puVar5 + 7);
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      *(int *)(puVar5 + 7) = iVar1 + 1;
      if ((undefined8 *)*plVar8 != puVar5) {
        puVar5[6] = (undefined8 *)*plVar8;
        *plVar8 = (long)puVar5;
      }
      *(int *)(plVar8 + 1) = (int)plVar8[1] + -1;
    }
    else {
      if (*plVar8 != 0) goto LAB_001e81e8;
      *plVar8 = (long)puVar5;
    }
  }
  return;
}


// ===== 001e81f0  FUN_001e81f0 =====

void FUN_001e81f0(int param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 == 1) {
    lVar3 = *(long *)(param_2 + -0x58);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + -0x78);
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        if (*(code **)(lVar3 + -0x68) != (code *)0x0) {
                    /* try { // try from 001e8234 to 001e8237 has its CatchHandler @ 001e8258 */
          (**(code **)(lVar3 + -0x68))();
        }
                    /* try { // try from 001e8238 to 001e823f has its CatchHandler @ 001e825c */
        FUN_001fd230(lVar3 + -0x80);
      }
    }
    FUN_001fd230(param_2 + -0x60);
    return;
  }
  FUN_001e8704(*(undefined8 *)(param_2 + -0x38));
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 001e8234 with catch @ 001e8258 */
  __cxa_call_unexpected();
}


// ===== 001e8260  __cxa_uncaught_exception =====

ulong __cxa_uncaught_exception(void)

{
  ulong uVar1;
  
                    /* try { // try from 001e8268 to 001e826b has its CatchHandler @ 001e8284 */
  uVar1 = __cxa_get_globals_fast();
  if (uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(uVar1 + 8) != 0);
  }
  return uVar1;
}


// ===== 001e8288  __cxa_uncaught_exceptions =====

ulong __cxa_uncaught_exceptions(void)

{
  ulong uVar1;
  
                    /* try { // try from 001e8290 to 001e8293 has its CatchHandler @ 001e82a4 */
  uVar1 = __cxa_get_globals_fast();
  if (uVar1 != 0) {
    uVar1 = (ulong)*(uint *)(uVar1 + 8);
  }
  return uVar1;
}


// ===== 001e82a8  __cxa_get_globals =====

void __cxa_get_globals(void)

{
  FUN_00202b10(&DAT_00214ac8);
  return;
}


// ===== 001e82c4  __cxa_get_globals_fast =====

void __cxa_get_globals_fast(void)

{
  FUN_00202b10(&DAT_00214ac8);
  return;
}


// ===== 001e82e0  __cxa_guard_acquire =====

undefined4 __cxa_guard_acquire(char *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  int unaff_w20;
  
  if (*param_1 == '\0') {
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00215f28);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001e8584("%s failed to acquire mutex","__cxa_guard_acquire");
    }
    if (((byte)param_1[1] >> 1 & 1) == 0) {
      bVar2 = true;
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
                    /* try { // try from 001e8330 to 001e8337 has its CatchHandler @ 001e8404 */
      lVar4 = syscall(0xb2);
      unaff_w20 = (int)lVar4;
      if (iVar3 == unaff_w20) {
                    /* try { // try from 001e83f8 to 001e8403 has its CatchHandler @ 001e8404 */
                    /* WARNING: Subroutine does not return */
        FUN_001e8584("__cxa_guard_acquire detected recursive initialization");
      }
      bVar2 = false;
    }
    while (bVar1 = param_1[1], (bVar1 >> 1 & 1) != 0) {
      param_1[1] = bVar1 | 4;
                    /* try { // try from 001e8368 to 001e8373 has its CatchHandler @ 001e840c */
      pthread_cond_wait((pthread_cond_t *)&DAT_00215f50,(pthread_mutex_t *)&DAT_00215f28);
    }
    if (bVar1 == 1) {
      uVar5 = 0;
    }
    else {
      if (bVar2) {
                    /* try { // try from 001e838c to 001e8393 has its CatchHandler @ 001e8404 */
        lVar4 = syscall(0xb2);
        unaff_w20 = (int)lVar4;
      }
      *(int *)(param_1 + 4) = unaff_w20;
      param_1[1] = '\x02';
      uVar5 = 1;
    }
                    /* try { // try from 001e83a8 to 001e83b3 has its CatchHandler @ 001e8408 */
    iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00215f28);
    if (iVar3 != 0) {
                    /* try { // try from 001e83e4 to 001e83f7 has its CatchHandler @ 001e8408 */
                    /* WARNING: Subroutine does not return */
      FUN_001e8584("%s failed to release mutex","__cxa_guard_acquire");
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


// ===== 001e8440  __cxa_guard_release =====

void __cxa_guard_release(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  
  *param_1 = 1;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00215f28);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001e8584("%s failed to acquire mutex","__cxa_guard_release");
  }
  bVar1 = *(byte *)((long)param_1 + 1);
  *(undefined1 *)((long)param_1 + 1) = 1;
                    /* try { // try from 001e8474 to 001e847f has its CatchHandler @ 001e84e4 */
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00215f28);
  if (iVar2 == 0) {
    if (((bVar1 >> 2 & 1) != 0) &&
       (iVar2 = pthread_cond_broadcast((pthread_cond_t *)&DAT_00215f50), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_001e8584("%s failed to broadcast","__cxa_guard_release");
    }
    return;
  }
                    /* try { // try from 001e84bc to 001e84cf has its CatchHandler @ 001e84e4 */
                    /* WARNING: Subroutine does not return */
  FUN_001e8584("%s failed to release mutex","__cxa_guard_release");
}


// ===== 001e84e8  __cxa_guard_abort =====

void __cxa_guard_abort(long param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00215f28);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001e8584("%s failed to acquire mutex","__cxa_guard_abort");
  }
  bVar1 = *(byte *)(param_1 + 1);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
                    /* try { // try from 001e8514 to 001e851f has its CatchHandler @ 001e8580 */
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00215f28);
  if (iVar2 == 0) {
    if (((bVar1 >> 2 & 1) != 0) &&
       (iVar2 = pthread_cond_broadcast((pthread_cond_t *)&DAT_00215f50), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_001e8584("%s failed to broadcast","__cxa_guard_abort");
    }
    return;
  }
                    /* try { // try from 001e8558 to 001e856b has its CatchHandler @ 001e8580 */
                    /* WARNING: Subroutine does not return */
  FUN_001e8584("%s failed to release mutex","__cxa_guard_abort");
}


// ===== 001e8584  FUN_001e8584 =====

void FUN_001e8584(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FILE *__s;
  undefined1 auStack_120 [8];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 **ppuStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  char *local_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  
  uStack_78 = 0xffffff80ffffffc8;
  __s = (FILE *)(PTR___sF_0020f848 + 0x130);
  local_118 = param_2;
  uStack_110 = param_3;
  local_108 = param_4;
  uStack_100 = param_5;
  local_f8 = param_6;
  uStack_f0 = param_7;
  local_e8 = param_8;
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_e0;
  puStack_80 = auStack_120;
  vfprintf(__s,param_1,&local_90);
  fputc(10,__s);
  uStack_c8 = 0xffffff80ffffffc8;
  local_e0 = (undefined1 *)register0x00000008;
  ppuStack_d8 = &local_e0;
  puStack_d0 = auStack_120;
  vasprintf(&local_98,param_1,&local_e0);
  android_set_abort_message(local_98);
  openlog("libc++abi",0,0);
  syslog(2,"%s",local_98);
  closelog();
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 001e8674  std::get_unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::get_unexpected() */

undefined8 std::get_unexpected(void)

{
  return *(undefined8 *)PTR___cxa_unexpected_handler_0020fc40;
}


// ===== 001e8684  std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::terminate() */

void std::terminate(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
                    /* try { // try from 001e8688 to 001e868b has its CatchHandler @ 001e86c0 */
  plVar1 = (long *)__cxa_get_globals_fast();
                    /* try { // try from 001e869c to 001e869f has its CatchHandler @ 001e86bc */
  if (((plVar1 != (long *)0x0) && (lVar3 = *plVar1, lVar3 != 0)) &&
     (uVar2 = FUN_001e7b64(lVar3 + 0x60), (uVar2 & 1) != 0)) {
    FUN_001e8704(*(undefined8 *)(lVar3 + 0x28));
  }
  FUN_001e8704(*(undefined8 *)PTR___cxa_terminate_handler_0020fc48);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 001e869c with catch @ 001e86bc
                        */
  FUN_001a18b8();
}


// ===== 001e86c4  FUN_001e86c4 =====

void FUN_001e86c4(code *param_1)

{
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  FUN_001e8584("unexpected_handler unexpectedly returned");
}


// ===== 001e86dc  std::unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::unexpected() */

undefined8 std::unexpected(void)

{
  FUN_001e86c4(*(undefined8 *)PTR___cxa_unexpected_handler_0020fc40);
  return *(undefined8 *)PTR___cxa_terminate_handler_0020fc48;
}


// ===== 001e86f4  std::get_terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::get_terminate() */

undefined8 std::get_terminate(void)

{
  return *(undefined8 *)PTR___cxa_terminate_handler_0020fc48;
}


// ===== 001e8704  FUN_001e8704 =====

void FUN_001e8704(code *param_1)

{
                    /* try { // try from 001e8710 to 001e871f has its CatchHandler @ 001e8720 */
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  FUN_001e8584("terminate_handler unexpectedly returned");
}


// ===== 001e8744  std::set_new_handler =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_new_handler(void (*)()) */

undefined8 std::set_new_handler(_func_void *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR___cxa_new_handler_0020fc50;
  do {
    uVar4 = *(undefined8 *)puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(_func_void **)puVar3 = param_1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return uVar4;
}


// ===== 001e8760  std::get_new_handler =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::get_new_handler() */

undefined8 std::get_new_handler(void)

{
  return *(undefined8 *)PTR___cxa_new_handler_0020fc50;
}


// ===== 001e8770  FUN_001e8770 =====

void FUN_001e8770(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_440;
  undefined1 auStack_434 [1024];
  int local_34;
  long *local_18;
  
  plVar2 = (long *)__cxa_get_globals_fast();
  if ((plVar2 == (long *)0x0) || (lVar7 = *plVar2, lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_001e8584("terminating");
  }
  uVar3 = FUN_001e7b64(lVar7 + 0x60);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001e8584("terminating with %s foreign exception",PTR_s_uncaught_00214af8);
  }
  lVar4 = FUN_001e7b5c(lVar7 + 0x60);
  if (lVar4 == 0x434c4e47432b2b01) {
    local_18 = *(long **)(lVar7 + 8);
  }
  else {
    local_18 = (long *)(lVar7 + 0x80);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  local_440 = 0x400;
  uVar5 = __cxa_demangle(*(undefined8 *)(lVar7 + 8),auStack_434,&local_440,&local_34);
  if (local_34 != 0) {
    uVar5 = *(undefined8 *)(lVar7 + 8);
  }
  uVar3 = (**(code **)(*(long *)PTR_PTR_0020fc58 + 0x20))(PTR_PTR_0020fc58,lVar7,&local_18);
  puVar1 = PTR_s_uncaught_00214af8;
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001e8584("terminating with %s exception of type %s",PTR_s_uncaught_00214af8,uVar5);
  }
  uVar6 = (**(code **)(*local_18 + 0x10))();
                    /* WARNING: Subroutine does not return */
  FUN_001e8584("terminating with %s exception of type %s: %s",puVar1,uVar5,uVar6);
}


// ===== 001e8890  FUN_001e8890 =====

void FUN_001e8890(void)

{
  PTR_s_uncaught_00214af8 = s_unexpected_001456f1;
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 001e88ac  std::set_unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_unexpected(void (*)()) */

undefined8 std::set_unexpected(_func_void *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR___cxa_unexpected_handler_0020fc40;
  pcVar1 = FUN_001e8890;
  if (param_1 != (_func_void *)0x0) {
    pcVar1 = param_1;
  }
  do {
    uVar5 = *(undefined8 *)puVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *(code **)puVar4 = pcVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return uVar5;
}


// ===== 001e88d4  std::set_terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_terminate(void (*)()) */

undefined8 std::set_terminate(_func_void *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR___cxa_terminate_handler_0020fc48;
  pcVar1 = FUN_001e8770;
  if (param_1 != (_func_void *)0x0) {
    pcVar1 = param_1;
  }
  do {
    uVar5 = *(undefined8 *)puVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *(code **)puVar4 = pcVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return uVar5;
}


// ===== 001e88fc  __cxa_demangle =====

void * __cxa_demangle(byte *param_1,void *param_2,ulong *param_3,undefined4 *param_4)

{
  byte bVar1;
  long lVar2;
  size_t sVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *pvVar16;
  ulong uVar17;
  void *local_13e0;
  ulong local_13d8;
  size_t local_13d0;
  undefined8 local_13c8;
  byte *local_13c0;
  byte *local_13b8;
  undefined8 *local_13b0;
  undefined8 *local_13a8;
  undefined8 **ppuStack_13a0;
  undefined8 local_1398;
  undefined8 uStack_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined8 uStack_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined8 uStack_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 *local_1298;
  undefined8 *local_1290;
  undefined8 **ppuStack_1288;
  undefined8 local_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 local_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 local_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 local_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 local_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 local_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 local_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 local_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 *local_1180;
  undefined8 *local_1178;
  undefined8 **local_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 *local_1128;
  undefined8 *local_1120;
  undefined8 **local_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 *local_10f0;
  undefined8 *local_10e8;
  undefined2 *local_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined2 local_10b8 [4];
  undefined8 local_10b0;
  undefined8 local_10a8;
  undefined4 local_10a0;
  long local_1090;
  undefined8 uStack_1088;
  long *local_90;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if ((param_1 == (byte *)0x0) || ((param_2 != (void *)0x0 && (param_3 == (ulong *)0x0)))) {
    pvVar16 = (void *)0x0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0xfffffffd;
    }
    goto LAB_001e8fc0;
  }
  sVar3 = strlen((char *)param_1);
  local_13b8 = param_1 + sVar3;
  ppuStack_13a0 = &local_1298;
  uStack_12b0 = 0;
  local_12b8 = 0;
  local_1170 = &local_1128;
  ppuStack_1288 = &local_1180;
  uStack_1350 = 0;
  local_1358 = 0;
  uStack_1340 = 0;
  local_1348 = 0;
  uStack_1330 = 0;
  local_1338 = 0;
  uStack_1320 = 0;
  local_1328 = 0;
  uStack_1310 = 0;
  local_1318 = 0;
  uStack_1300 = 0;
  local_1308 = 0;
  uStack_12f0 = 0;
  local_12f8 = 0;
  uStack_12e0 = 0;
  local_12e8 = 0;
  uStack_12d0 = 0;
  local_12d8 = 0;
  uStack_12c0 = 0;
  local_12c8 = 0;
  uStack_12a0 = 0;
  local_12a8 = 0;
  uStack_1390 = 0;
  local_1398 = 0;
  uStack_1380 = 0;
  local_1388 = 0;
  uStack_1370 = 0;
  local_1378 = 0;
  uStack_1360 = 0;
  local_1368 = 0;
  uStack_1278 = 0;
  local_1280 = 0;
  uStack_1268 = 0;
  uStack_1270 = 0;
  uStack_1258 = 0;
  local_1260 = 0;
  uStack_1248 = 0;
  uStack_1250 = 0;
  uStack_1238 = 0;
  local_1240 = 0;
  uStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  local_1220 = 0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  local_1200 = 0;
  uStack_11e8 = 0;
  uStack_11f0 = 0;
  uStack_11d8 = 0;
  local_11e0 = 0;
  uStack_11c8 = 0;
  uStack_11d0 = 0;
  uStack_11b8 = 0;
  local_11c0 = 0;
  uStack_11a8 = 0;
  uStack_11b0 = 0;
  uStack_1198 = 0;
  local_11a0 = 0;
  uStack_1188 = 0;
  uStack_1190 = 0;
  uStack_1150 = 0;
  local_1158 = 0;
  local_10e0 = local_10b8;
  uStack_1130 = 0;
  local_1138 = 0;
  uStack_1140 = 0;
  local_1148 = 0;
  local_1118 = &local_10f0;
  uStack_1160 = 0;
  local_1168 = 0;
  uStack_1108 = 0;
  local_1110 = 0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  uStack_10c0 = 0;
  local_10c8 = 0;
  uStack_10d0 = 0;
  local_10d8 = 0;
  local_10b8[0] = 1;
  uStack_1088 = 0;
  local_1090 = 0;
  local_13e0 = (void *)0x0;
  local_13d8 = 0;
  local_13d0 = 0;
  local_10b0 = 0xffffffffffffffff;
  local_10a0 = 0;
  local_10a8 = 0;
  local_13c8 = 0xffffffffffffffff;
  local_13b0 = &local_1398;
  local_13a8 = &local_1398;
  local_1298 = &local_1280;
  local_1290 = &local_1280;
  local_1180 = &local_1168;
  local_1178 = &local_1168;
  local_1128 = &local_1110;
  local_1120 = &local_1110;
  local_10f0 = &local_10d8;
  local_10e8 = &local_10d8;
  local_90 = &local_1090;
  if ((sVar3 < 2) || (*param_1 != 0x5f)) {
LAB_001e8b90:
    local_13c0 = param_1;
    plVar5 = (long *)FUN_001e9ce4(&local_13c0);
    if (local_13b8 != local_13c0) goto LAB_001e8f24;
LAB_001e8ba8:
    if (plVar5 == (long *)0x0) goto LAB_001e8f24;
LAB_001e8bac:
    if (param_2 == (void *)0x0) {
      uVar17 = 0x400;
      param_2 = malloc(0x400);
      if (param_2 != (void *)0x0) goto LAB_001e8bdc;
      pvVar16 = (void *)0x0;
      uVar7 = 0xffffffff;
    }
    else {
      uVar17 = *param_3;
LAB_001e8bdc:
      local_13d8 = 0;
      local_13e0 = param_2;
      local_13d0 = uVar17;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_13e0);
      if (*(char *)((long)plVar5 + 9) != '\x01') {
        (**(code **)(*plVar5 + 0x28))(plVar5,&local_13e0);
      }
      uVar17 = local_13d8 + 1;
      if (local_13d0 <= uVar17) {
        uVar9 = local_13d0 << 1;
        local_13d0 = uVar17;
        if (uVar17 <= uVar9) {
          local_13d0 = uVar9;
        }
        local_13e0 = realloc(local_13e0,local_13d0);
        if (local_13e0 == (void *)0x0) {
LAB_001e8ffc:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        uVar17 = local_13d8 + 1;
      }
      *(undefined1 *)((long)local_13e0 + local_13d8) = 0;
      if (param_3 != (ulong *)0x0) {
        *param_3 = uVar17;
      }
      uVar7 = 0;
      pvVar16 = local_13e0;
      local_13d8 = uVar17;
    }
  }
  else {
    if (param_1[1] == 0x5a) {
      lVar8 = 2;
LAB_001e8abc:
      local_13c0 = param_1 + lVar8;
                    /* try { // try from 001e8ac4 to 001e8ccf has its CatchHandler @ 001e9000 */
      plVar4 = (long *)FUN_001e9094(&local_13c0);
      plVar6 = local_90;
      pbVar11 = local_13b8;
      pbVar12 = local_13c0;
      if (plVar4 != (long *)0x0) {
        plVar5 = plVar4;
        if (local_13b8 == local_13c0) goto LAB_001e8ba8;
        if (*local_13c0 == 0x2e) {
          lVar8 = local_90[1];
          if (0xfef < lVar8 + 0x30U) {
            plVar5 = (long *)malloc(0x1000);
            if (plVar5 == (long *)0x0) goto LAB_001e8ffc;
            lVar8 = 0;
            *plVar5 = (long)plVar6;
            plVar5[1] = 0;
            local_90 = plVar5;
          }
          local_90[1] = lVar8 + 0x30;
          plVar5 = (long *)((long)local_90 + lVar8 + 0x10);
          *plVar5 = (long)&PTR_FUN_0020df38;
          *(undefined4 *)((long)local_90 + lVar8 + 0x18) = 0x1010101;
          *(long **)((long)local_90 + lVar8 + 0x20) = plVar4;
          *(byte **)((long)local_90 + lVar8 + 0x28) = pbVar12;
          *(byte **)((long)local_90 + lVar8 + 0x30) = pbVar11;
          local_13c0 = local_13b8;
          if (plVar5 != (long *)0x0) goto LAB_001e8bac;
        }
      }
    }
    else {
      if ((sVar3 < 3) || (param_1[1] != 0x5f)) goto LAB_001e8b90;
      if (param_1[2] == 0x5a) {
        lVar8 = 3;
        goto LAB_001e8abc;
      }
      if (sVar3 < 4) goto LAB_001e8b90;
      if ((param_1[2] == 0x5f) && (param_1[3] == 0x5a)) {
        lVar8 = 4;
      }
      else {
        if ((sVar3 < 5) || (((param_1[2] != 0x5f || (param_1[3] != 0x5f)) || (param_1[4] != 0x5a))))
        goto LAB_001e8b90;
        lVar8 = 5;
      }
      local_13c0 = param_1 + lVar8;
      lVar8 = FUN_001e9094(&local_13c0);
      plVar5 = local_90;
      if (((((lVar8 != 0) && (0xc < (ulong)((long)local_13b8 - (long)local_13c0))) &&
           ((*local_13c0 == 0x5f && ((local_13c0[1] == 0x62 && (local_13c0[2] == 0x6c)))))) &&
          (local_13c0[3] == 0x6f)) &&
         ((((((local_13c0[4] == 99 && (local_13c0[5] == 0x6b)) && (local_13c0[6] == 0x5f)) &&
            ((local_13c0[7] == 0x69 && (local_13c0[8] == 0x6e)))) &&
           ((local_13c0[9] == 0x76 && ((local_13c0[10] == 0x6f && (local_13c0[0xb] == 0x6b)))))) &&
          (local_13c0[0xc] == 0x65)))) {
        pbVar12 = local_13c0 + 0xd;
        pbVar11 = local_13b8;
        pbVar14 = pbVar12;
        if (pbVar12 != local_13b8) {
          bVar1 = *pbVar12;
          if (bVar1 == 0x5f) {
            pbVar12 = local_13c0 + 0xe;
          }
          local_13c0 = pbVar12;
          if (local_13b8 == pbVar12) {
            pbVar13 = (byte *)0x0;
            pbVar14 = local_13b8;
            pbVar15 = (byte *)0x0;
          }
          else if (*pbVar12 - 0x30 < 10) {
            do {
              local_13c0 = local_13c0 + 1;
              pbVar13 = pbVar12;
              pbVar14 = local_13b8;
              pbVar15 = local_13b8;
              if (local_13b8 == local_13c0) break;
              pbVar14 = local_13c0;
              pbVar15 = local_13c0;
            } while (*local_13c0 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar14 = pbVar12;
            pbVar15 = (byte *)0x0;
          }
          pbVar11 = local_13c0;
          pbVar12 = pbVar14;
          pbVar14 = local_13c0;
          if (bVar1 == 0x5f && pbVar13 == pbVar15) goto LAB_001e8f24;
        }
        local_13c0 = pbVar14;
        if ((local_13b8 == pbVar11) || (*pbVar11 != 0x2e)) {
          if (local_13b8 != pbVar12) goto LAB_001e8f24;
        }
        else {
          local_13c0 = local_13b8;
        }
        lVar10 = local_90[1];
        if (0xfef < lVar10 + 0x30U) {
          plVar6 = (long *)malloc(0x1000);
          if (plVar6 == (long *)0x0) goto LAB_001e8ffc;
          lVar10 = 0;
          *plVar6 = (long)plVar5;
          plVar6[1] = 0;
          local_90 = plVar6;
        }
        local_90[1] = lVar10 + 0x30;
        plVar5 = (long *)((long)local_90 + lVar10 + 0x10);
        *plVar5 = (long)&PTR_FUN_0020c4e8;
        *(char **)((long)local_90 + lVar10 + 0x20) = "invocation function for block in ";
        *(char **)((long)local_90 + lVar10 + 0x28) = "";
        *(undefined4 *)((long)local_90 + lVar10 + 0x18) = 0x1010114;
        *(long *)((long)local_90 + lVar10 + 0x30) = lVar8;
        goto LAB_001e8bac;
      }
    }
LAB_001e8f24:
    uVar7 = 0xfffffffe;
    pvVar16 = (void *)0x0;
  }
  plVar5 = local_90;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar7;
  }
  while (local_90 = plVar5, local_90 != (long *)0x0) {
    while (plVar5 = (long *)*local_90, &local_1090 != local_90) {
      plVar5 = local_90;
      local_90 = (long *)*local_90;
      free(plVar5);
      if (local_90 == (long *)0x0) goto LAB_001e8f64;
    }
  }
LAB_001e8f64:
  local_1090 = 0;
  uStack_1088 = 0;
  local_90 = &local_1090;
  if (local_10f0 != &local_10d8) {
    free(local_10f0);
  }
  if (local_1128 != &local_1110) {
    free(local_1128);
  }
  if (local_1180 != &local_1168) {
    free(local_1180);
  }
  if (local_1298 != &local_1280) {
    free(local_1298);
  }
  if (local_13b0 != &local_1398) {
    free(local_13b0);
  }
LAB_001e8fc0:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return pvVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e9094  FUN_001e9094 =====

undefined8 * FUN_001e9094(long *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  char *pcVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  void *pvVar23;
  undefined8 *puVar24;
  undefined1 auVar25 [16];
  long local_88;
  undefined2 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  ulong local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pcVar17 = (char *)*param_1;
  pcVar14 = (char *)param_1[1];
  if ((pcVar14 == pcVar17) || ((cVar2 = *pcVar17, cVar2 != 'T' && (cVar2 != 'G')))) {
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_70 = param_1[0x5b] - param_1[0x5a] >> 3;
    puVar24 = (undefined8 *)FUN_001eb464(param_1,&local_80);
    puVar10 = puVar24;
    if (puVar24 == (undefined8 *)0x0) goto LAB_001e9bd8;
    lVar9 = param_1[0x5a];
    uVar8 = param_1[0x5b] - lVar9 >> 3;
    if (local_70 < uVar8) {
      puVar12 = (undefined8 *)param_1[0x53];
      if (puVar12 == (undefined8 *)param_1[0x54]) goto LAB_001e9bd4;
      lVar13 = uVar8 - local_70;
      plVar20 = (long *)(lVar9 + local_70 * 8);
      do {
        plVar22 = (long *)*puVar12;
        if (plVar22 == (long *)0x0) goto LAB_001e9bd4;
        lVar21 = *plVar20;
        uVar8 = *(ulong *)(lVar21 + 0x10);
        if ((ulong)(plVar22[1] - *plVar22 >> 3) <= uVar8) goto LAB_001e9bd4;
        lVar13 = lVar13 + -1;
        plVar20 = plVar20 + 1;
        *(undefined8 *)(lVar21 + 0x18) = *(undefined8 *)(*plVar22 + uVar8 * 8);
      } while (lVar13 != 0);
    }
    pbVar15 = (byte *)*param_1;
    pbVar1 = (byte *)param_1[1];
    param_1[0x5b] = lVar9 + local_70 * 8;
    if (pbVar1 == pbVar15) goto LAB_001e9bd8;
    uVar4 = *pbVar15 - 0x2e;
    if ((uVar4 < 0x32) && ((1L << ((ulong)uVar4 & 0x3f) & 0x2000000800001U) != 0))
    goto LAB_001e9bd8;
    puVar12 = (undefined8 *)0x0;
    if ((0xc < (ulong)((long)pbVar1 - (long)pbVar15)) && (*pbVar15 == 0x55)) {
      if (((((((pbVar15[1] == 0x61) && (pbVar15[2] == 0x39)) && (pbVar15[3] == 0x65)) &&
            ((pbVar15[4] == 0x6e && (pbVar15[5] == 0x61)))) && (pbVar15[6] == 0x62)) &&
          (((pbVar15[7] == 0x6c && (pbVar15[8] == 0x65)) && (pbVar15[9] == 0x5f)))) &&
         (((pbVar15[10] == 0x69 && (pbVar15[0xb] == 0x66)) && (pbVar15[0xc] == 0x49)))) {
        pbVar15 = pbVar15 + 0xd;
        *param_1 = (long)pbVar15;
        lVar9 = param_1[2];
        lVar13 = param_1[3];
        if (pbVar15 == pbVar1) goto LAB_001e931c;
        while (*pbVar15 != 0x45) {
LAB_001e931c:
          do {
            local_88 = FUN_001ebfb0(param_1);
            if (local_88 == 0) goto LAB_001e9bd4;
            FUN_001ec198(param_1 + 2,&local_88);
            pbVar15 = (byte *)*param_1;
          } while (pbVar15 == (byte *)param_1[1]);
        }
        lVar9 = (lVar13 - lVar9 >> 3) * 8;
        *param_1 = (long)(pbVar15 + 1);
        auVar25 = FUN_001f530c(param_1,param_1[2] + lVar9,param_1[3]);
        pvVar23 = (void *)param_1[0x266];
        param_1[3] = param_1[2] + lVar9;
        lVar9 = *(long *)((long)pvVar23 + 8);
        puVar10 = (undefined8 *)pvVar23;
        if (0xfef < lVar9 + 0x20U) {
          puVar10 = (undefined8 *)malloc(0x1000);
          if (puVar10 == (undefined8 *)0x0) goto LAB_001e9ce0;
          lVar9 = 0;
          *puVar10 = pvVar23;
          puVar10[1] = 0;
          param_1[0x266] = (long)puVar10;
        }
        *(long *)((long)puVar10 + 8) = lVar9 + 0x20;
        puVar12 = (undefined8 *)((long)puVar10 + lVar9 + 0x10);
        *puVar12 = &PTR_FUN_0020de58;
        *(undefined4 *)((long)puVar10 + lVar9 + 0x18) = 0x1010109;
        *(undefined1 (*) [16])((long)puVar10 + lVar9 + 0x20) = auVar25;
      }
      else {
        puVar12 = (undefined8 *)0x0;
      }
    }
    lVar9 = 0;
    if ((((char)local_80 != '\0') || (local_80._1_1_ == '\0')) ||
       (lVar9 = FUN_001e9ce4(param_1), lVar9 != 0)) {
      pcVar17 = (char *)*param_1;
      if ((pcVar17 == (char *)param_1[1]) || (*pcVar17 != 'v')) {
        lVar13 = param_1[2];
        lVar21 = param_1[3];
        do {
          local_88 = FUN_001e9ce4(param_1);
          if (local_88 == 0) goto LAB_001e9bd4;
          FUN_001ec198(param_1 + 2,&local_88);
        } while (((byte *)param_1[1] != (byte *)*param_1) &&
                ((uVar4 = *(byte *)*param_1 - 0x2e, 0x31 < uVar4 ||
                 ((1L << ((ulong)uVar4 & 0x3f) & 0x2000000800001U) == 0))));
        lVar13 = (lVar21 - lVar13 >> 3) * 8;
        auVar25 = FUN_001f530c(param_1,param_1[2] + lVar13,param_1[3]);
        pvVar23 = (void *)param_1[0x266];
        param_1[3] = param_1[2] + lVar13;
        lVar13 = *(long *)((long)pvVar23 + 8);
        puVar11 = (undefined8 *)pvVar23;
        if (0xfef < lVar13 + 0x40U) {
          puVar11 = (undefined8 *)malloc(0x1000);
          if (puVar11 == (undefined8 *)0x0) goto LAB_001e9ce0;
          lVar13 = 0;
          *puVar11 = pvVar23;
          puVar11[1] = 0;
          param_1[0x266] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar13 + 0x40;
        puVar10 = (undefined8 *)((long)puVar11 + lVar13 + 0x10);
        *puVar10 = &PTR_FUN_0020dec8;
        *(undefined4 *)((long)puVar11 + lVar13 + 0x18) = 0x10012;
        *(long *)((long)puVar11 + lVar13 + 0x20) = lVar9;
        *(undefined8 **)((long)puVar11 + lVar13 + 0x28) = puVar24;
        *(undefined1 (*) [16])((long)puVar11 + lVar13 + 0x30) = auVar25;
      }
      else {
        pvVar23 = (void *)param_1[0x266];
        *param_1 = (long)(pcVar17 + 1);
        lVar13 = *(long *)((long)pvVar23 + 8);
        puVar11 = (undefined8 *)pvVar23;
        if (0xfef < lVar13 + 0x40U) {
          puVar11 = (undefined8 *)malloc(0x1000);
          if (puVar11 == (undefined8 *)0x0) goto LAB_001e9ce0;
          lVar13 = 0;
          *puVar11 = pvVar23;
          puVar11[1] = 0;
          param_1[0x266] = (long)puVar11;
        }
        *(long *)((long)puVar11 + 8) = lVar13 + 0x40;
        puVar10 = (undefined8 *)((long)puVar11 + lVar13 + 0x10);
        *puVar10 = &PTR_FUN_0020dec8;
        *(undefined4 *)((long)puVar11 + lVar13 + 0x18) = 0x10012;
        *(long *)((long)puVar11 + lVar13 + 0x20) = lVar9;
        *(undefined8 **)((long)puVar11 + lVar13 + 0x28) = puVar24;
        *(undefined8 *)((long)puVar11 + lVar13 + 0x30) = 0;
        *(undefined8 *)((long)puVar11 + lVar13 + 0x38) = 0;
      }
      puVar10[6] = puVar12;
      *(undefined4 *)(puVar10 + 7) = local_7c;
      *(undefined1 *)((long)puVar10 + 0x3c) = local_78;
      goto LAB_001e9bd8;
    }
  }
  else if (pcVar14 != pcVar17) {
    if (cVar2 == 'G') {
      if (1 < (ulong)((long)pcVar14 - (long)pcVar17)) {
        if (pcVar17[1] == 'R') {
          *param_1 = (long)(pcVar17 + 2);
          lVar9 = FUN_001eb464(param_1,0);
          if (lVar9 != 0) {
            pbVar15 = (byte *)*param_1;
            pbVar1 = (byte *)param_1[1];
            if (((pbVar1 == pbVar15) || (bVar3 = *pbVar15, bVar3 < 0x30)) ||
               ((0x39 < bVar3 && (0x19 < (byte)(bVar3 + 0xbf))))) {
              bVar7 = true;
            }
            else {
              do {
                pbVar18 = pbVar15 + 1;
                if ((0x39 < bVar3) && (0x19 < (byte)(bVar3 + 0xbf))) {
                  bVar7 = false;
                  goto LAB_001e968c;
                }
                *param_1 = (long)pbVar18;
                pbVar15 = pbVar18;
              } while ((pbVar1 != pbVar18) && (bVar3 = *pbVar18, 0x2f < bVar3));
              bVar7 = false;
            }
LAB_001e968c:
            if ((pbVar15 == pbVar1) || (*pbVar15 != 0x5f)) {
              if (!bVar7) goto LAB_001e9bd4;
            }
            else {
              *param_1 = (long)(pbVar15 + 1);
            }
            pvVar23 = (void *)param_1[0x266];
            lVar13 = *(long *)((long)pvVar23 + 8);
            puVar10 = (undefined8 *)pvVar23;
            if (0xfef < lVar13 + 0x30U) {
              puVar10 = (undefined8 *)malloc(0x1000);
              if (puVar10 == (undefined8 *)0x0) goto LAB_001e9ce0;
              lVar13 = 0;
              *puVar10 = pvVar23;
              puVar10[1] = 0;
              param_1[0x266] = (long)puVar10;
            }
            pcVar17 = "reference temporary for ";
            *(long *)((long)puVar10 + 8) = lVar13 + 0x30;
            puVar10 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
            *puVar10 = &PTR_FUN_0020c4e8;
            pcVar14 = "";
            goto LAB_001e9ac4;
          }
        }
        else if (pcVar17[1] == 'V') {
          *param_1 = (long)(pcVar17 + 2);
          lVar9 = FUN_001eb464(param_1,0);
          if (lVar9 != 0) {
            pvVar23 = (void *)param_1[0x266];
            lVar13 = *(long *)((long)pvVar23 + 8);
            puVar10 = (undefined8 *)pvVar23;
            if (0xfef < lVar13 + 0x30U) {
              puVar10 = (undefined8 *)malloc(0x1000);
              if (puVar10 == (undefined8 *)0x0) goto LAB_001e9ce0;
              lVar13 = 0;
              *puVar10 = pvVar23;
              puVar10[1] = 0;
              param_1[0x266] = (long)puVar10;
            }
            pcVar17 = "guard variable for ";
            *(long *)((long)puVar10 + 8) = lVar13 + 0x30;
            puVar10 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
            *puVar10 = &PTR_FUN_0020c4e8;
            pcVar14 = "";
            goto LAB_001e9ac4;
          }
        }
      }
    }
    else if (cVar2 == 'T') {
      if ((ulong)((long)pcVar14 - (long)pcVar17) < 2) {
switchD_001e9128_caseD_44:
        pcVar17 = pcVar17 + 1;
        *param_1 = (long)pcVar17;
        if (pcVar14 == pcVar17) {
          bVar7 = false;
        }
        else {
          bVar7 = *pcVar17 == 'v';
        }
        uVar8 = FUN_001ec250(param_1);
        if (((uVar8 & 1) == 0) && (lVar9 = FUN_001e9094(param_1), lVar9 != 0)) {
          puVar24 = (undefined8 *)param_1[0x266];
          lVar13 = puVar24[1];
          bVar6 = 0xfef < lVar13 + 0x30U;
          if (bVar7) {
            puVar10 = puVar24;
            if (bVar6) {
              puVar10 = (undefined8 *)malloc(0x1000);
              if (puVar10 == (undefined8 *)0x0) {
LAB_001e9ce0:
                    /* WARNING: Subroutine does not return */
                std::terminate();
              }
              lVar13 = 0;
              *puVar10 = puVar24;
              puVar10[1] = 0;
              param_1[0x266] = (long)puVar10;
            }
            pcVar17 = "virtual thunk to ";
            puVar10[1] = lVar13 + 0x30;
            puVar10 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
            *puVar10 = &PTR_FUN_0020c4e8;
            pcVar14 = "";
          }
          else {
            puVar10 = puVar24;
            if (bVar6) {
              puVar10 = (undefined8 *)malloc(0x1000);
              if (puVar10 == (undefined8 *)0x0) goto LAB_001e9ce0;
              lVar13 = 0;
              *puVar10 = puVar24;
              puVar10[1] = 0;
              param_1[0x266] = (long)puVar10;
            }
            pcVar17 = "non-virtual thunk to ";
            puVar10[1] = lVar13 + 0x30;
            puVar10 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
            *puVar10 = &PTR_FUN_0020c4e8;
            pcVar14 = "";
          }
LAB_001e9ac4:
          *(undefined4 *)(puVar10 + 1) = 0x1010114;
          puVar10[2] = pcVar17;
          puVar10[3] = pcVar14;
          puVar10[4] = lVar9;
          goto LAB_001e9bd8;
        }
      }
      else {
        switch(pcVar17[1]) {
        case 'C':
          *param_1 = (long)(pcVar17 + 2);
          lVar9 = FUN_001e9ce4(param_1);
          if (lVar9 != 0) {
            pbVar15 = (byte *)*param_1;
            pbVar1 = (byte *)param_1[1];
            pbVar18 = pbVar15;
            if ((pbVar15 != pbVar1) && (*pbVar15 == 0x6e)) {
              *param_1 = (long)(pbVar15 + 1);
              pbVar18 = pbVar15 + 1;
            }
            if ((pbVar18 == pbVar1) || (9 < *pbVar18 - 0x30)) {
              pbVar15 = (byte *)0x0;
              pbVar16 = pbVar18;
              pbVar19 = (byte *)0x0;
            }
            else {
              do {
                pbVar18 = pbVar18 + 1;
                *param_1 = (long)pbVar18;
                pbVar16 = pbVar1;
                pbVar19 = pbVar1;
                if (pbVar1 == pbVar18) break;
                pbVar16 = pbVar18;
                pbVar19 = pbVar18;
              } while (*pbVar18 - 0x30 < 10);
            }
            puVar10 = (undefined8 *)0x0;
            if ((pbVar15 == pbVar19) || (pbVar16 == pbVar1)) goto LAB_001e9bd8;
            if (*pbVar16 == 0x5f) {
              *param_1 = (long)(pbVar16 + 1);
              lVar13 = FUN_001e9ce4(param_1);
              if (lVar13 != 0) {
                pvVar23 = (void *)param_1[0x266];
                lVar21 = *(long *)((long)pvVar23 + 8);
                puVar24 = (undefined8 *)pvVar23;
                if (0xfef < lVar21 + 0x20U) {
                  puVar24 = (undefined8 *)malloc(0x1000);
                  if (puVar24 == (undefined8 *)0x0) goto LAB_001e9ce0;
                  lVar21 = 0;
                  *puVar24 = pvVar23;
                  puVar24[1] = 0;
                  param_1[0x266] = (long)puVar24;
                }
                *(long *)((long)puVar24 + 8) = lVar21 + 0x20;
                puVar10 = (undefined8 *)((long)puVar24 + lVar21 + 0x10);
                *puVar10 = &PTR_FUN_0020c568;
                *(undefined4 *)((long)puVar24 + lVar21 + 0x18) = 0x1010115;
                *(long *)((long)puVar24 + lVar21 + 0x20) = lVar13;
                *(long *)((long)puVar24 + lVar21 + 0x28) = lVar9;
                goto LAB_001e9bd8;
              }
            }
          }
          break;
        default:
          goto switchD_001e9128_caseD_44;
        case 'H':
          *param_1 = (long)(pcVar17 + 2);
          lVar9 = FUN_001eb464(param_1,0);
          if (lVar9 == 0) break;
          pvVar23 = (void *)param_1[0x266];
          lVar13 = *(long *)((long)pvVar23 + 8);
          puVar10 = (undefined8 *)pvVar23;
          if (0xfef < lVar13 + 0x30U) {
            puVar10 = (undefined8 *)malloc(0x1000);
            if (puVar10 == (undefined8 *)0x0) goto LAB_001e9ce0;
            lVar13 = 0;
            *puVar10 = pvVar23;
            puVar10[1] = 0;
            param_1[0x266] = (long)puVar10;
          }
          pcVar17 = "thread-local initialization routine for ";
          *(long *)((long)puVar10 + 8) = lVar13 + 0x30;
          puVar10 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
          *puVar10 = &PTR_FUN_0020c4e8;
          pcVar14 = "";
          goto LAB_001e9ac4;
        case 'I':
          *param_1 = (long)(pcVar17 + 2);
          lVar9 = FUN_001e9ce4(param_1);
          if (lVar9 != 0) {
            pvVar23 = (void *)param_1[0x266];
            lVar13 = *(long *)((long)pvVar23 + 8);
            puVar10 = (undefined8 *)pvVar23;
            if (0xfef < lVar13 + 0x30U) {
              puVar10 = (undefined8 *)malloc(0x1000);
              if (puVar10 == (undefined8 *)0x0) goto LAB_001e9ce0;
              lVar13 = 0;
              *puVar10 = pvVar23;
              puVar10[1] = 0;
              param_1[0x266] = (long)puVar10;
            }
            pcVar17 = "typeinfo for ";
            *(long *)((long)puVar10 + 8) = lVar13 + 0x30;
            puVar10 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
            *puVar10 = &PTR_FUN_0020c4e8;
            pcVar14 = "";
            goto LAB_001e9ac4;
          }
          break;
        case 'S':
          *param_1 = (long)(pcVar17 + 2);
          lVar9 = FUN_001e9ce4(param_1);
          if (lVar9 != 0) {
            pvVar23 = (void *)param_1[0x266];
            lVar13 = *(long *)((long)pvVar23 + 8);
            puVar10 = (undefined8 *)pvVar23;
            if (0xfef < lVar13 + 0x30U) {
              puVar10 = (undefined8 *)malloc(0x1000);
              if (puVar10 == (undefined8 *)0x0) goto LAB_001e9ce0;
              lVar13 = 0;
              *puVar10 = pvVar23;
              puVar10[1] = 0;
              param_1[0x266] = (long)puVar10;
            }
            pcVar17 = "typeinfo name for ";
            *(long *)((long)puVar10 + 8) = lVar13 + 0x30;
            puVar10 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
            *puVar10 = &PTR_FUN_0020c4e8;
            pcVar14 = "";
            goto LAB_001e9ac4;
          }
          break;
        case 'T':
          *param_1 = (long)(pcVar17 + 2);
          lVar9 = FUN_001e9ce4(param_1);
          if (lVar9 != 0) {
            pvVar23 = (void *)param_1[0x266];
            lVar13 = *(long *)((long)pvVar23 + 8);
            puVar10 = (undefined8 *)pvVar23;
            if (0xfef < lVar13 + 0x30U) {
              puVar10 = (undefined8 *)malloc(0x1000);
              if (puVar10 == (undefined8 *)0x0) goto LAB_001e9ce0;
              lVar13 = 0;
              *puVar10 = pvVar23;
              puVar10[1] = 0;
              param_1[0x266] = (long)puVar10;
            }
            pcVar17 = "VTT for ";
            *(long *)((long)puVar10 + 8) = lVar13 + 0x30;
            puVar10 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
            *puVar10 = &PTR_FUN_0020c4e8;
            pcVar14 = "";
            goto LAB_001e9ac4;
          }
          break;
        case 'V':
          *param_1 = (long)(pcVar17 + 2);
          lVar9 = FUN_001e9ce4(param_1);
          if (lVar9 != 0) {
            pvVar23 = (void *)param_1[0x266];
            lVar13 = *(long *)((long)pvVar23 + 8);
            puVar10 = (undefined8 *)pvVar23;
            if (0xfef < lVar13 + 0x30U) {
              puVar10 = (undefined8 *)malloc(0x1000);
              if (puVar10 == (undefined8 *)0x0) goto LAB_001e9ce0;
              lVar13 = 0;
              *puVar10 = pvVar23;
              puVar10[1] = 0;
              param_1[0x266] = (long)puVar10;
            }
            pcVar17 = "vtable for ";
            *(long *)((long)puVar10 + 8) = lVar13 + 0x30;
            puVar10 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
            *puVar10 = &PTR_FUN_0020c4e8;
            pcVar14 = "";
            goto LAB_001e9ac4;
          }
          break;
        case 'W':
          *param_1 = (long)(pcVar17 + 2);
          lVar9 = FUN_001eb464(param_1,0);
          if (lVar9 != 0) {
            pvVar23 = (void *)param_1[0x266];
            lVar13 = *(long *)((long)pvVar23 + 8);
            puVar10 = (undefined8 *)pvVar23;
            if (0xfef < lVar13 + 0x30U) {
              puVar10 = (undefined8 *)malloc(0x1000);
              if (puVar10 == (undefined8 *)0x0) goto LAB_001e9ce0;
              lVar13 = 0;
              *puVar10 = pvVar23;
              puVar10[1] = 0;
              param_1[0x266] = (long)puVar10;
            }
            pcVar17 = "thread-local wrapper routine for ";
            *(long *)((long)puVar10 + 8) = lVar13 + 0x30;
            puVar10 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
            *puVar10 = &PTR_FUN_0020c4e8;
            pcVar14 = "";
            goto LAB_001e9ac4;
          }
          break;
        case 'c':
          *param_1 = (long)(pcVar17 + 2);
          uVar8 = FUN_001ec250(param_1);
          if ((((uVar8 & 1) == 0) && (uVar8 = FUN_001ec250(param_1), (uVar8 & 1) == 0)) &&
             (lVar9 = FUN_001e9094(param_1), lVar9 != 0)) {
            pvVar23 = (void *)param_1[0x266];
            lVar13 = *(long *)((long)pvVar23 + 8);
            puVar10 = (undefined8 *)pvVar23;
            if (0xfef < lVar13 + 0x30U) {
              puVar10 = (undefined8 *)malloc(0x1000);
              if (puVar10 == (undefined8 *)0x0) goto LAB_001e9ce0;
              lVar13 = 0;
              *puVar10 = pvVar23;
              puVar10[1] = 0;
              param_1[0x266] = (long)puVar10;
            }
            pcVar17 = "covariant return thunk to ";
            *(long *)((long)puVar10 + 8) = lVar13 + 0x30;
            puVar10 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
            *puVar10 = &PTR_FUN_0020c4e8;
            pcVar14 = "";
            goto LAB_001e9ac4;
          }
        }
      }
    }
  }
LAB_001e9bd4:
  puVar10 = (undefined8 *)0x0;
LAB_001e9bd8:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001e9ce4  FUN_001e9ce4 =====

byte * FUN_001e9ce4(long *param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  undefined **ppuVar12;
  byte *pbVar13;
  ulong uVar14;
  uint uVar15;
  undefined4 uVar16;
  ulong uVar17;
  char *pcVar18;
  byte *pbVar19;
  void *pvVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  byte *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_50 = (byte *)0x0;
  pbVar6 = (byte *)*param_1;
  pbVar5 = (byte *)param_1[1];
  uVar14 = (long)pbVar5 - (long)pbVar6;
  if (pbVar5 == pbVar6) {
switchD_001e9d40_caseD_42:
    pbVar6 = (byte *)FUN_001fa67c(param_1);
    goto LAB_001ea58c;
  }
  bVar1 = *pbVar6;
  switch(bVar1) {
  case 0x41:
    if (pbVar6 != pbVar5) {
      pbVar19 = pbVar6 + 1;
      *param_1 = (long)pbVar19;
      if ((pbVar5 == pbVar19) || (9 < *pbVar19 - 0x30)) {
        if ((pbVar19 != pbVar5) && (*pbVar19 == 0x5f)) {
          pbVar5 = (byte *)0x0;
          pbVar6 = pbVar6 + 2;
LAB_001eac34:
          *param_1 = (long)pbVar6;
          pbVar6 = (byte *)FUN_001e9ce4(param_1);
          if (pbVar6 != (byte *)0x0) {
            puVar21 = (undefined8 *)param_1[0x266];
            lVar10 = puVar21[1];
            puVar4 = puVar21;
            if (0xfef < lVar10 + 0x20U) {
              puVar4 = (undefined8 *)malloc(0x1000);
              if (puVar4 == (undefined8 *)0x0) {
LAB_001eb460:
                    /* WARNING: Subroutine does not return */
                std::terminate();
              }
              lVar10 = 0;
              *puVar4 = puVar21;
              puVar4[1] = 0;
              param_1[0x266] = (long)puVar4;
            }
            lVar7 = (long)puVar4 + lVar10;
            ppuVar12 = &PTR_FUN_0020e328;
            uVar16 = 0x100000e;
LAB_001eac90:
            puVar4[1] = lVar10 + 0x20;
            *(undefined ***)(lVar7 + 0x10) = ppuVar12;
            *(undefined4 *)(lVar7 + 0x18) = uVar16;
            *(byte **)(lVar7 + 0x20) = pbVar6;
            *(byte **)(lVar7 + 0x28) = pbVar5;
            pbVar6 = (byte *)(lVar7 + 0x10);
          }
          goto LAB_001ea58c;
        }
        pbVar5 = (byte *)FUN_001ede40(param_1);
        pbVar6 = pbVar5;
        if (pbVar5 == (byte *)0x0) goto LAB_001ea58c;
        pcVar18 = (char *)*param_1;
        if (pcVar18 != (char *)param_1[1]) {
          cVar2 = *pcVar18;
          goto joined_r0x001eab04;
        }
      }
      else {
        pbVar6 = pbVar6 + 2;
        do {
          pbVar13 = pbVar6;
          *param_1 = (long)pbVar13;
          pbVar22 = pbVar5;
          if (pbVar5 == pbVar13) break;
          pbVar6 = pbVar13 + 1;
          pbVar22 = pbVar13;
        } while (*pbVar13 - 0x30 < 10);
        pvVar20 = (void *)param_1[0x266];
        lVar10 = *(long *)((long)pvVar20 + 8);
        puVar4 = (undefined8 *)pvVar20;
        if (0xfef < lVar10 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
          lVar10 = 0;
          *puVar4 = pvVar20;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar10 + 0x20;
        pbVar5 = (byte *)((long)puVar4 + lVar10 + 0x10);
        *(undefined ***)pbVar5 = &PTR_FUN_0020c5d8;
        *(undefined4 *)((long)puVar4 + lVar10 + 0x18) = 0x1010107;
        *(byte **)((long)puVar4 + lVar10 + 0x20) = pbVar19;
        *(byte **)((long)puVar4 + lVar10 + 0x28) = pbVar22;
        pcVar18 = (char *)*param_1;
        if (pcVar18 != (char *)param_1[1]) {
          cVar2 = *pcVar18;
joined_r0x001eab04:
          if (cVar2 == '_') {
            pbVar6 = (byte *)(pcVar18 + 1);
            goto LAB_001eac34;
          }
        }
      }
    }
    goto LAB_001eb3e8;
  default:
    goto switchD_001e9d40_caseD_42;
  case 0x43:
    *param_1 = (long)(pbVar6 + 1);
    pbVar19 = (byte *)FUN_001e9ce4(param_1);
    if (pbVar19 == (byte *)0x0) goto switchD_001ea55c_caseD_50;
    pvVar20 = (void *)param_1[0x266];
    lVar10 = *(long *)((long)pvVar20 + 8);
    puVar4 = (undefined8 *)pvVar20;
    if (0xfef < lVar10 + 0x30U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = pvVar20;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    pcVar18 = " complex";
    *(long *)((long)puVar4 + 8) = lVar10 + 0x30;
    local_50 = (byte *)((long)puVar4 + lVar10 + 0x10);
    *(undefined ***)local_50 = &PTR_FUN_0020e558;
    pcVar11 = "";
    goto LAB_001ea41c;
  case 0x44:
    if (uVar14 < 2) goto LAB_001ead40;
    pbVar19 = (byte *)0x0;
    switch(pbVar6[1]) {
    case 0x4f:
    case 0x6f:
    case 0x77:
    case 0x78:
      goto switchD_001e9d40_caseD_46;
    default:
      goto switchD_001ea55c_caseD_50;
    case 0x54:
    case 0x74:
      pbVar6 = (byte *)FUN_001ed2c4(param_1);
      goto LAB_001ea58c;
    case 0x61:
      puVar21 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar10 = puVar21[1];
      puVar4 = puVar21;
      if (0xfef < lVar10 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
        lVar10 = 0;
        *puVar4 = puVar21;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar10 + 0x20;
      lVar10 = (long)puVar4 + lVar10;
      pcVar18 = "auto";
      goto LAB_001eaacc;
    case 99:
      puVar21 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar10 = puVar21[1];
      puVar4 = puVar21;
      if (0xfef < lVar10 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
        lVar10 = 0;
        *puVar4 = puVar21;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar10 + 0x20;
      lVar10 = (long)puVar4 + lVar10;
      pcVar18 = "decltype(auto)";
      goto LAB_001ea88c;
    case 100:
      puVar21 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar10 = puVar21[1];
      puVar4 = puVar21;
      if (0xfef < lVar10 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
        lVar10 = 0;
        *puVar4 = puVar21;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar10 + 0x20;
      lVar10 = (long)puVar4 + lVar10;
      pcVar18 = "decimal64";
      break;
    case 0x65:
      puVar21 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar10 = puVar21[1];
      puVar4 = puVar21;
      if (0xfef < lVar10 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
        lVar10 = 0;
        *puVar4 = puVar21;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = (long)puVar4 + lVar10;
      pcVar18 = "decimal128";
      goto LAB_001ea25c;
    case 0x66:
      puVar21 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar10 = puVar21[1];
      puVar4 = puVar21;
      if (0xfef < lVar10 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
        lVar10 = 0;
        *puVar4 = puVar21;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar10 + 0x20;
      lVar10 = (long)puVar4 + lVar10;
      pcVar18 = "decimal32";
      break;
    case 0x68:
      puVar21 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar10 = puVar21[1];
      puVar4 = puVar21;
      if (0xfef < lVar10 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
        lVar10 = 0;
        *puVar4 = puVar21;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar10 + 0x20;
      lVar10 = (long)puVar4 + lVar10;
      pcVar18 = "decimal16";
      break;
    case 0x69:
      puVar21 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar10 = puVar21[1];
      puVar4 = puVar21;
      if (0xfef < lVar10 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
        lVar10 = 0;
        *puVar4 = puVar21;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar10 + 0x20;
      lVar10 = (long)puVar4 + lVar10;
      pcVar18 = "char32_t";
      goto LAB_001e9f04;
    case 0x6e:
      puVar21 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar10 = puVar21[1];
      puVar4 = puVar21;
      if (0xfef < lVar10 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
        lVar10 = 0;
        *puVar4 = puVar21;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar10 + 0x20;
      lVar10 = (long)puVar4 + lVar10;
      pcVar18 = "std::nullptr_t";
LAB_001ea88c:
      puVar4[1] = lVar7;
      pbVar19 = (byte *)(lVar10 + 0x10);
      *(undefined ***)pbVar19 = &PTR_FUN_0020c5d8;
      pcVar11 = pcVar18 + 0xe;
      goto LAB_001eaad8;
    case 0x70:
      *param_1 = (long)(pbVar6 + 2);
      pbVar19 = (byte *)FUN_001e9ce4(param_1);
      if (pbVar19 == (byte *)0x0) goto switchD_001ea55c_caseD_50;
      pvVar20 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar20 + 8);
      puVar4 = (undefined8 *)pvVar20;
      if (0xfef < lVar10 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
        lVar10 = 0;
        *puVar4 = pvVar20;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar10 + 0x20;
      local_50 = (byte *)((long)puVar4 + lVar10 + 0x10);
      *(undefined ***)local_50 = &PTR_FUN_0020ce98;
      *(undefined4 *)((long)puVar4 + lVar10 + 0x18) = 0x1010122;
      *(byte **)((long)puVar4 + lVar10 + 0x20) = pbVar19;
      goto LAB_001ea594;
    case 0x73:
      puVar21 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar10 = puVar21[1];
      puVar4 = puVar21;
      if (0xfef < lVar10 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
        lVar10 = 0;
        *puVar4 = puVar21;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = lVar10 + 0x20;
      lVar10 = (long)puVar4 + lVar10;
      pcVar18 = "char16_t";
LAB_001e9f04:
      puVar4[1] = lVar7;
      pbVar19 = (byte *)(lVar10 + 0x10);
      *(undefined ***)pbVar19 = &PTR_FUN_0020c5d8;
      pcVar11 = pcVar18 + 8;
      goto LAB_001eaad8;
    case 0x75:
      puVar21 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(pbVar6 + 2);
      lVar10 = puVar21[1];
      puVar4 = puVar21;
      if (0xfef < lVar10 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
        lVar10 = 0;
        *puVar4 = puVar21;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = (long)puVar4 + lVar10;
      pcVar18 = "char8_t";
      goto LAB_001ea1ac;
    case 0x76:
      pbVar19 = pbVar6 + 2;
      *param_1 = (long)pbVar19;
      if ((pbVar5 == pbVar19) || (8 < *pbVar19 - 0x31)) {
        if ((pbVar19 == pbVar5) || (*pbVar19 != 0x5f)) {
          pbVar5 = (byte *)FUN_001ede40(param_1);
          pbVar6 = pbVar5;
          if (pbVar5 != (byte *)0x0) {
            pcVar18 = (char *)*param_1;
            if ((pcVar18 == (char *)param_1[1]) || (*pcVar18 != '_')) goto LAB_001eb3e8;
            *param_1 = (long)(pcVar18 + 1);
            pbVar6 = (byte *)FUN_001e9ce4(param_1);
            if (pbVar6 != (byte *)0x0) {
              puVar21 = (undefined8 *)param_1[0x266];
              lVar10 = puVar21[1];
              puVar4 = puVar21;
              if (0xfef < lVar10 + 0x20U) {
                puVar4 = (undefined8 *)malloc(0x1000);
                if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
                lVar10 = 0;
                *puVar4 = puVar21;
                puVar4[1] = 0;
                param_1[0x266] = (long)puVar4;
              }
              lVar7 = (long)puVar4 + lVar10;
              ppuVar12 = &PTR_FUN_0020e2b8;
              uVar16 = 0x1010119;
              goto LAB_001eac90;
            }
          }
        }
        else {
          *param_1 = (long)(pbVar6 + 3);
          pbVar6 = (byte *)FUN_001e9ce4(param_1);
          if (pbVar6 != (byte *)0x0) {
            pvVar20 = (void *)param_1[0x266];
            lVar10 = *(long *)((long)pvVar20 + 8);
            puVar4 = (undefined8 *)pvVar20;
            if (0xfef < lVar10 + 0x20U) {
              puVar4 = (undefined8 *)malloc(0x1000);
              if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
              lVar10 = 0;
              *puVar4 = pvVar20;
              puVar4[1] = 0;
              param_1[0x266] = (long)puVar4;
            }
            *(long *)((long)puVar4 + 8) = lVar10 + 0x20;
            pbVar5 = (byte *)((long)puVar4 + lVar10 + 0x10);
            *(undefined ***)pbVar5 = &PTR_FUN_0020e2b8;
            *(undefined4 *)((long)puVar4 + lVar10 + 0x18) = 0x1010119;
            *(byte **)((long)puVar4 + lVar10 + 0x20) = pbVar6;
            *(undefined8 *)((long)puVar4 + lVar10 + 0x28) = 0;
            pbVar6 = pbVar5;
          }
        }
      }
      else {
        if (*pbVar19 - 0x30 < 10) {
          pbVar6 = pbVar6 + 3;
          do {
            pbVar13 = pbVar6;
            *param_1 = (long)pbVar13;
            pbVar22 = pbVar5;
            if (pbVar5 == pbVar13) break;
            pbVar6 = pbVar13 + 1;
            pbVar22 = pbVar13;
          } while (*pbVar13 - 0x30 < 10);
        }
        else {
          pbVar19 = (byte *)0x0;
          pbVar22 = (byte *)0x0;
        }
        plVar8 = (long *)param_1[0x266];
        lVar10 = plVar8[1];
        plVar9 = plVar8;
        if (0xfef < lVar10 + 0x20U) {
          plVar9 = (long *)malloc(0x1000);
          if (plVar9 == (long *)0x0) goto LAB_001eb460;
          lVar10 = 0;
          *plVar9 = (long)plVar8;
          plVar9[1] = 0;
          param_1[0x266] = (long)plVar9;
        }
        plVar9[1] = lVar10 + 0x20;
        puVar4 = (undefined8 *)((long)plVar9 + lVar10 + 0x10);
        *puVar4 = &PTR_FUN_0020c5d8;
        *(undefined4 *)((long)plVar9 + lVar10 + 0x18) = 0x1010107;
        *(byte **)((long)plVar9 + lVar10 + 0x20) = pbVar19;
        *(byte **)((long)plVar9 + lVar10 + 0x28) = pbVar22;
        pcVar18 = (char *)*param_1;
        if ((pcVar18 == (char *)param_1[1]) || (*pcVar18 != '_')) goto LAB_001eb3e8;
        pcVar11 = pcVar18 + 1;
        *param_1 = (long)pcVar11;
        if ((pcVar11 == (char *)param_1[1]) || (*pcVar11 != 'p')) {
          pbVar6 = (byte *)FUN_001e9ce4(param_1);
          if (pbVar6 != (byte *)0x0) {
            pvVar20 = (void *)param_1[0x266];
            lVar10 = *(long *)((long)pvVar20 + 8);
            puVar21 = (undefined8 *)pvVar20;
            if (0xfef < lVar10 + 0x20U) {
              puVar21 = (undefined8 *)malloc(0x1000);
              if (puVar21 == (undefined8 *)0x0) goto LAB_001eb460;
              lVar10 = 0;
              *puVar21 = pvVar20;
              puVar21[1] = 0;
              param_1[0x266] = (long)puVar21;
            }
            *(long *)((long)puVar21 + 8) = lVar10 + 0x20;
            pbVar5 = (byte *)((long)puVar21 + lVar10 + 0x10);
            *(undefined ***)pbVar5 = &PTR_FUN_0020e2b8;
            *(undefined4 *)((long)puVar21 + lVar10 + 0x18) = 0x1010119;
            *(byte **)((long)puVar21 + lVar10 + 0x20) = pbVar6;
            *(undefined8 **)((long)puVar21 + lVar10 + 0x28) = puVar4;
            pbVar6 = pbVar5;
          }
        }
        else {
          pvVar20 = (void *)param_1[0x266];
          *param_1 = (long)(pcVar18 + 2);
          lVar10 = *(long *)((long)pvVar20 + 8);
          puVar21 = (undefined8 *)pvVar20;
          if (0xfef < lVar10 + 0x20U) {
            puVar21 = (undefined8 *)malloc(0x1000);
            if (puVar21 == (undefined8 *)0x0) goto LAB_001eb460;
            lVar10 = 0;
            *puVar21 = pvVar20;
            puVar21[1] = 0;
            param_1[0x266] = (long)puVar21;
          }
          *(long *)((long)puVar21 + 8) = lVar10 + 0x20;
          pbVar6 = (byte *)((long)puVar21 + lVar10 + 0x10);
          *(undefined ***)pbVar6 = &PTR_FUN_0020e248;
          *(undefined4 *)((long)puVar21 + lVar10 + 0x18) = 0x101011a;
          *(undefined8 **)((long)puVar21 + lVar10 + 0x20) = puVar4;
        }
      }
      goto LAB_001ea58c;
    }
LAB_001ea9fc:
    puVar4[1] = lVar7;
    pbVar19 = (byte *)(lVar10 + 0x10);
    *(undefined ***)pbVar19 = &PTR_FUN_0020c5d8;
    pcVar11 = pcVar18 + 9;
    break;
  case 0x46:
    goto switchD_001e9d40_caseD_46;
  case 0x47:
    *param_1 = (long)(pbVar6 + 1);
    pbVar19 = (byte *)FUN_001e9ce4(param_1);
    if (pbVar19 == (byte *)0x0) goto switchD_001ea55c_caseD_50;
    pvVar20 = (void *)param_1[0x266];
    lVar10 = *(long *)((long)pvVar20 + 8);
    puVar4 = (undefined8 *)pvVar20;
    if (0xfef < lVar10 + 0x30U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = pvVar20;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    pcVar18 = " imaginary";
    *(long *)((long)puVar4 + 8) = lVar10 + 0x30;
    local_50 = (byte *)((long)puVar4 + lVar10 + 0x10);
    *(undefined ***)local_50 = &PTR_FUN_0020e558;
    pcVar11 = "";
LAB_001ea41c:
    local_50[8] = 5;
    local_50[9] = 1;
    local_50[10] = 1;
    local_50[0xb] = 1;
    *(byte **)(local_50 + 0x10) = pbVar19;
    *(char **)(local_50 + 0x18) = pcVar18;
    *(char **)(local_50 + 0x20) = pcVar11;
    goto LAB_001ea594;
  case 0x4b:
  case 0x56:
  case 0x72:
    uVar17 = (ulong)(bVar1 == 0x72);
    if (uVar17 < uVar14) {
      uVar15 = 1;
      if (bVar1 == 0x72) {
        uVar15 = 2;
      }
      if (pbVar6[uVar17] != 0x56) {
        uVar15 = (uint)(bVar1 == 0x72);
      }
      uVar17 = (ulong)uVar15;
    }
    if (uVar17 < uVar14) {
      uVar15 = (uint)uVar17;
      if (pbVar6[uVar17] == 0x4b) {
        uVar15 = uVar15 + 1;
      }
      uVar17 = (ulong)uVar15;
    }
    if ((uVar14 <= uVar17) ||
       ((pbVar6[uVar17] != 0x46 &&
        (((pbVar6[uVar17] != 0x44 || (uVar14 <= uVar17 + 1)) ||
         ((0x29 < pbVar6[uVar17 + 1] - 0x4f ||
          ((1L << ((ulong)(pbVar6[uVar17 + 1] - 0x4f) & 0x3f) & 0x30100000001U) == 0))))))))
    goto switchD_001e9d40_caseD_55;
    goto switchD_001e9d40_caseD_46;
  case 0x4d:
    if (pbVar6 != pbVar5) {
      *param_1 = (long)(pbVar6 + 1);
      pbVar5 = (byte *)FUN_001e9ce4(param_1);
      pbVar6 = pbVar5;
      if ((pbVar5 != (byte *)0x0) && (pbVar6 = (byte *)FUN_001e9ce4(param_1), pbVar6 != (byte *)0x0)
         ) {
        pvVar20 = (void *)param_1[0x266];
        lVar10 = *(long *)((long)pvVar20 + 8);
        puVar4 = (undefined8 *)pvVar20;
        if (0xfef < lVar10 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
          lVar10 = 0;
          *puVar4 = pvVar20;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar10 + 0x20;
        bVar1 = pbVar6[9];
        pbVar19 = (byte *)((long)puVar4 + lVar10 + 0x10);
        *(undefined ***)pbVar19 = &PTR_FUN_0020e398;
        *(undefined1 *)((long)puVar4 + lVar10 + 0x18) = 0xd;
        *(undefined2 *)((long)puVar4 + lVar10 + 0x1a) = 0x101;
        *(byte *)((long)puVar4 + lVar10 + 0x19) = bVar1;
        *(byte **)((long)puVar4 + lVar10 + 0x20) = pbVar5;
        *(byte **)((long)puVar4 + lVar10 + 0x28) = pbVar6;
        pbVar6 = pbVar19;
      }
      goto LAB_001ea58c;
    }
LAB_001eb3e8:
    pbVar6 = (byte *)0x0;
LAB_001ea58c:
    local_50 = pbVar6;
    if (pbVar6 == (byte *)0x0) {
LAB_001ead40:
      pbVar19 = (byte *)0x0;
      goto switchD_001ea55c_caseD_50;
    }
    goto LAB_001ea594;
  case 0x4f:
    *param_1 = (long)(pbVar6 + 1);
    pbVar19 = (byte *)FUN_001e9ce4(param_1);
    if (pbVar19 == (byte *)0x0) goto switchD_001ea55c_caseD_50;
    pvVar20 = (void *)param_1[0x266];
    lVar10 = *(long *)((long)pvVar20 + 8);
    puVar4 = (undefined8 *)pvVar20;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = pvVar20;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar10 + 0x20;
    bVar1 = pbVar19[9];
    local_50 = (byte *)((long)puVar4 + lVar10 + 0x10);
    *(undefined ***)local_50 = &PTR_FUN_0020e4e8;
    *(undefined1 *)((long)puVar4 + lVar10 + 0x18) = 0xc;
    *(undefined2 *)((long)puVar4 + lVar10 + 0x1a) = 0x101;
    *(byte **)((long)puVar4 + lVar10 + 0x20) = pbVar19;
    *(undefined4 *)((long)puVar4 + lVar10 + 0x28) = 1;
    goto LAB_001ea998;
  case 0x50:
    *param_1 = (long)(pbVar6 + 1);
    pbVar19 = (byte *)FUN_001e9ce4(param_1);
    if (pbVar19 == (byte *)0x0) goto switchD_001ea55c_caseD_50;
    pvVar20 = (void *)param_1[0x266];
    lVar10 = *(long *)((long)pvVar20 + 8);
    puVar4 = (undefined8 *)pvVar20;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = pvVar20;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar10 + 0x20;
    bVar1 = pbVar19[9];
    local_50 = (byte *)((long)puVar4 + lVar10 + 0x10);
    *(undefined ***)local_50 = &PTR_FUN_0020e478;
    *(undefined1 *)((long)puVar4 + lVar10 + 0x18) = 0xb;
    *(undefined2 *)((long)puVar4 + lVar10 + 0x1a) = 0x101;
    *(byte **)((long)puVar4 + lVar10 + 0x20) = pbVar19;
    *(byte *)((long)puVar4 + lVar10 + 0x19) = bVar1;
    goto LAB_001ea594;
  case 0x52:
    *param_1 = (long)(pbVar6 + 1);
    pbVar19 = (byte *)FUN_001e9ce4(param_1);
    if (pbVar19 == (byte *)0x0) goto switchD_001ea55c_caseD_50;
    pvVar20 = (void *)param_1[0x266];
    lVar10 = *(long *)((long)pvVar20 + 8);
    puVar4 = (undefined8 *)pvVar20;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = pvVar20;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar10 + 0x20;
    bVar1 = pbVar19[9];
    local_50 = (byte *)((long)puVar4 + lVar10 + 0x10);
    *(undefined ***)local_50 = &PTR_FUN_0020e4e8;
    *(undefined1 *)((long)puVar4 + lVar10 + 0x18) = 0xc;
    *(undefined2 *)((long)puVar4 + lVar10 + 0x1a) = 0x101;
    *(byte **)((long)puVar4 + lVar10 + 0x20) = pbVar19;
    *(undefined4 *)((long)puVar4 + lVar10 + 0x28) = 0;
LAB_001ea998:
    local_50[0x1c] = 0;
    local_50[9] = bVar1;
    goto LAB_001ea594;
  case 0x53:
    if (((uVar14 < 2) || (pbVar6[1] == 0)) || (pbVar6[1] == 0x74)) goto switchD_001e9d40_caseD_42;
    pbVar19 = (byte *)FUN_001ec734(param_1);
    if ((((pbVar19 == (byte *)0x0) || ((char)param_1[0x61] == '\0')) ||
        ((char *)param_1[1] == (char *)*param_1)) || (*(char *)*param_1 != 'I'))
    goto switchD_001ea55c_caseD_50;
LAB_001eab40:
    pbVar6 = (byte *)FUN_001ecac4(param_1,0);
    if (pbVar6 == (byte *)0x0) goto LAB_001ead40;
    puVar21 = (undefined8 *)param_1[0x266];
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    uVar15 = 0x125;
    lVar7 = (long)puVar4 + lVar10;
    ppuVar12 = &PTR_FUN_0020dd08;
LAB_001ead14:
    puVar4[1] = lVar10 + 0x20;
    local_50 = (byte *)(lVar7 + 0x10);
    *(undefined ***)local_50 = ppuVar12;
    *(uint *)(lVar7 + 0x18) = uVar15 | 0x1010000;
    *(byte **)(lVar7 + 0x20) = pbVar19;
    *(byte **)(lVar7 + 0x28) = pbVar6;
    goto LAB_001ea594;
  case 0x54:
    if (((1 < uVar14) && (pbVar6[1] - 0x65 < 0x11)) &&
       ((1 << (ulong)(pbVar6[1] - 0x65 & 0x1f) & 0x14001U) != 0)) goto switchD_001e9d40_caseD_42;
    pbVar19 = (byte *)FUN_001ecf20(param_1);
    local_50 = pbVar19;
    if (pbVar19 == (byte *)0x0) goto switchD_001ea55c_caseD_50;
    if ((((char)param_1[0x61] != '\0') && ((char *)param_1[1] != (char *)*param_1)) &&
       (*(char *)*param_1 == 'I')) goto LAB_001eab40;
LAB_001ea594:
    FUN_001ec198(param_1 + 0x25,&local_50);
    pbVar19 = local_50;
    goto switchD_001ea55c_caseD_50;
  case 0x55:
switchD_001e9d40_caseD_55:
    pbVar6 = (byte *)FUN_001fa28c(param_1);
    goto LAB_001ea58c;
  case 0x61:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar10;
    pcVar18 = "signed char";
    goto LAB_001eaa64;
  case 0x62:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = lVar10 + 0x20;
    lVar10 = (long)puVar4 + lVar10;
    pcVar18 = "bool";
    goto LAB_001eaacc;
  case 99:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = lVar10 + 0x20;
    lVar10 = (long)puVar4 + lVar10;
    pcVar18 = "char";
    goto LAB_001eaacc;
  case 100:
    pvVar20 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = *(long *)((long)pvVar20 + 8);
    puVar4 = (undefined8 *)pvVar20;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = pvVar20;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    pcVar18 = "double";
    *(long *)((long)puVar4 + 8) = lVar10 + 0x20;
    pbVar19 = (byte *)((long)puVar4 + lVar10 + 0x10);
    *(undefined ***)pbVar19 = &PTR_FUN_0020c5d8;
    pcVar11 = "";
    break;
  case 0x65:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar10;
    pcVar18 = "long double";
LAB_001eaa64:
    puVar4[1] = lVar10 + 0x20;
    pbVar19 = (byte *)(lVar7 + 0x10);
    *(undefined ***)pbVar19 = &PTR_FUN_0020c5d8;
    pcVar11 = pcVar18 + 0xb;
    break;
  case 0x66:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar10;
    pcVar18 = "float";
    goto LAB_001ea668;
  case 0x67:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar10;
    pcVar18 = "__float128";
LAB_001ea25c:
    puVar4[1] = lVar10 + 0x20;
    pbVar19 = (byte *)(lVar7 + 0x10);
    *(undefined ***)pbVar19 = &PTR_FUN_0020c5d8;
    pcVar11 = pcVar18 + 10;
    break;
  case 0x68:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar10;
    pcVar18 = "unsigned char";
    goto LAB_001ea600;
  case 0x69:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar10;
    pcVar18 = "int";
    goto LAB_001ea51c;
  case 0x6a:
    pvVar20 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = *(long *)((long)pvVar20 + 8);
    puVar4 = (undefined8 *)pvVar20;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = pvVar20;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    pcVar18 = "unsigned int";
    *(long *)((long)puVar4 + 8) = lVar10 + 0x20;
    pbVar19 = (byte *)((long)puVar4 + lVar10 + 0x10);
    *(undefined ***)pbVar19 = &PTR_FUN_0020c5d8;
    pcVar11 = "";
    break;
  case 0x6c:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = lVar10 + 0x20;
    lVar10 = (long)puVar4 + lVar10;
    pcVar18 = "long";
    goto LAB_001eaacc;
  case 0x6d:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar10;
    pcVar18 = "unsigned long";
LAB_001ea600:
    puVar4[1] = lVar10 + 0x20;
    pbVar19 = (byte *)(lVar7 + 0x10);
    *(undefined ***)pbVar19 = &PTR_FUN_0020c5d8;
    pcVar11 = pcVar18 + 0xd;
    break;
  case 0x6e:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = lVar10 + 0x20;
    lVar10 = (long)puVar4 + lVar10;
    pcVar18 = "__int128";
    goto LAB_001e9f04;
  case 0x6f:
    pvVar20 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = *(long *)((long)pvVar20 + 8);
    puVar4 = (undefined8 *)pvVar20;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = pvVar20;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    pcVar18 = "unsigned __int128";
    *(long *)((long)puVar4 + 8) = lVar10 + 0x20;
    pbVar19 = (byte *)((long)puVar4 + lVar10 + 0x10);
    *(undefined ***)pbVar19 = &PTR_FUN_0020c5d8;
    pcVar11 = "";
    break;
  case 0x73:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar10;
    pcVar18 = "short";
LAB_001ea668:
    puVar4[1] = lVar10 + 0x20;
    pbVar19 = (byte *)(lVar7 + 0x10);
    *(undefined ***)pbVar19 = &PTR_FUN_0020c5d8;
    pcVar11 = pcVar18 + 5;
    break;
  case 0x74:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = lVar10 + 0x20;
    lVar10 = (long)puVar4 + lVar10;
    pcVar18 = "unsigned short";
    goto LAB_001ea88c;
  case 0x75:
    pbVar6 = pbVar6 + 1;
    *param_1 = (long)pbVar6;
    if ((pbVar5 != pbVar6) && (*pbVar6 - 0x30 < 10)) {
      if (pbVar6 == pbVar5) {
        uVar14 = 0xffffffffffffffd0;
        pbVar19 = pbVar5;
      }
      else {
        lVar10 = 0;
        pbVar19 = pbVar6;
        do {
          pbVar6 = pbVar19 + 1;
          *param_1 = (long)pbVar6;
          uVar14 = (lVar10 + (ulong)*pbVar19) - 0x30;
          pbVar19 = pbVar6;
          if ((pbVar5 == pbVar6) || (9 < *pbVar6 - 0x30)) goto LAB_001eacb4;
          lVar10 = uVar14 * 10;
        } while (pbVar5 != pbVar6);
        uVar14 = lVar10 - 0x30;
        pbVar19 = pbVar5;
      }
LAB_001eacb4:
      if (uVar14 <= (ulong)((long)pbVar5 - (long)pbVar6)) {
        pbVar6 = pbVar19 + uVar14;
        *param_1 = (long)pbVar6;
        if (pbVar19 != pbVar6) {
          puVar21 = (undefined8 *)param_1[0x266];
          lVar10 = puVar21[1];
          puVar4 = puVar21;
          if (0xfef < lVar10 + 0x20U) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
            lVar10 = 0;
            *puVar4 = puVar21;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          uVar15 = 0x107;
          lVar7 = (long)puVar4 + lVar10;
          ppuVar12 = &PTR_FUN_0020c5d8;
          goto LAB_001ead14;
        }
      }
    }
    goto LAB_001ead40;
  case 0x76:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = lVar10 + 0x20;
    lVar10 = (long)puVar4 + lVar10;
    pcVar18 = "void";
LAB_001eaacc:
    puVar4[1] = lVar7;
    pbVar19 = (byte *)(lVar10 + 0x10);
    *(undefined ***)pbVar19 = &PTR_FUN_0020c5d8;
    pcVar11 = pcVar18 + 4;
    break;
  case 0x77:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar10;
    pcVar18 = "wchar_t";
LAB_001ea1ac:
    puVar4[1] = lVar10 + 0x20;
    pbVar19 = (byte *)(lVar7 + 0x10);
    *(undefined ***)pbVar19 = &PTR_FUN_0020c5d8;
    pcVar11 = pcVar18 + 7;
    break;
  case 0x78:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = lVar10 + 0x20;
    lVar10 = (long)puVar4 + lVar10;
    pcVar18 = "long long";
    goto LAB_001ea9fc;
  case 0x79:
    pvVar20 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = *(long *)((long)pvVar20 + 8);
    puVar4 = (undefined8 *)pvVar20;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = pvVar20;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    pcVar18 = "unsigned long long";
    *(long *)((long)puVar4 + 8) = lVar10 + 0x20;
    pbVar19 = (byte *)((long)puVar4 + lVar10 + 0x10);
    *(undefined ***)pbVar19 = &PTR_FUN_0020c5d8;
    pcVar11 = "";
    break;
  case 0x7a:
    puVar21 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar10 = puVar21[1];
    puVar4 = puVar21;
    if (0xfef < lVar10 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001eb460;
      lVar10 = 0;
      *puVar4 = puVar21;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    lVar7 = (long)puVar4 + lVar10;
    pcVar18 = "...";
LAB_001ea51c:
    puVar4[1] = lVar10 + 0x20;
    pbVar19 = (byte *)(lVar7 + 0x10);
    *(undefined ***)pbVar19 = &PTR_FUN_0020c5d8;
    pcVar11 = pcVar18 + 3;
  }
LAB_001eaad8:
  pbVar19[8] = 7;
  pbVar19[9] = 1;
  pbVar19[10] = 1;
  pbVar19[0xb] = 1;
  *(char **)(pbVar19 + 0x10) = pcVar18;
  *(char **)(pbVar19 + 0x18) = pcVar11;
switchD_001ea55c_caseD_50:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pbVar19;
switchD_001e9d40_caseD_46:
  pbVar6 = (byte *)FUN_001f9d8c(param_1);
  goto LAB_001ea58c;
}


// ===== 001eb464  FUN_001eb464 =====

undefined8 * FUN_001eb464(long *param_1,long param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  void *pvVar21;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pcVar13 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if ((pcVar13 != pcVar1) && (*pcVar13 == 'L')) {
    pcVar13 = pcVar13 + 1;
    *param_1 = (long)pcVar13;
  }
  uVar4 = (long)pcVar1 - (long)pcVar13;
  if (pcVar1 == pcVar13) goto LAB_001eb764;
  cVar3 = *pcVar13;
  if (cVar3 == 'Z') {
    if (pcVar13 != pcVar1) {
      *param_1 = (long)(pcVar13 + 1);
      lVar12 = FUN_001e9094(param_1);
      if (lVar12 != 0) {
        pbVar17 = (byte *)*param_1;
        pbVar15 = (byte *)param_1[1];
        if ((pbVar17 != pbVar15) && (*pbVar17 == 0x45)) {
          pbVar20 = pbVar17 + 1;
          *param_1 = (long)pbVar20;
          if (pbVar20 == pbVar15) {
LAB_001ebd24:
            puVar6 = (undefined8 *)FUN_001eb464(param_1,param_2);
            if (puVar6 == (undefined8 *)0x0) goto LAB_001ebee4;
            pbVar17 = (byte *)*param_1;
            pbVar20 = (byte *)param_1[1];
            pbVar15 = pbVar17;
            if (pbVar17 != pbVar20) {
              uVar19 = (uint)*pbVar17;
              pbVar18 = pbVar17;
              if (uVar19 == 0x5f) {
                if (pbVar17 + 1 != pbVar20) {
                  uVar19 = (uint)pbVar17[1];
                  if (uVar19 - 0x30 < 10) {
                    pbVar15 = pbVar17 + 2;
                  }
                  else if (uVar19 == 0x5f) {
                    for (pbVar17 = pbVar17 + 2; pbVar17 != pbVar20; pbVar17 = pbVar17 + 1) {
                      if (9 < *pbVar17 - 0x30) {
                        if (*pbVar17 == 0x5f) {
                          pbVar15 = pbVar17 + 1;
                        }
                        break;
                      }
                    }
                  }
                }
              }
              else {
                while ((pbVar15 = pbVar17, uVar19 - 0x30 < 10 &&
                       (pbVar18 = pbVar18 + 1, pbVar15 = pbVar20, pbVar20 != pbVar18))) {
                  uVar19 = (uint)*pbVar18;
                }
              }
            }
            pvVar21 = (void *)param_1[0x266];
            *param_1 = (long)pbVar15;
          }
          else {
            if (*pbVar20 != 0x73) {
              if (*pbVar20 == 100) {
                pbVar20 = pbVar17 + 2;
                *param_1 = (long)pbVar20;
                pbVar18 = pbVar15;
                if ((pbVar20 != pbVar15) && (pbVar18 = pbVar20, *pbVar20 == 0x6e)) {
                  pbVar20 = pbVar17 + 3;
                  *param_1 = (long)pbVar20;
                  pbVar18 = pbVar20;
                }
                if (pbVar20 != pbVar15) {
                  bVar2 = *pbVar18;
                  while (bVar2 - 0x30 < 10) {
                    pbVar18 = pbVar18 + 1;
                    *param_1 = (long)pbVar18;
                    if (pbVar15 == pbVar18) break;
                    bVar2 = *pbVar18;
                  }
                }
                if ((pbVar18 != pbVar15) && (*pbVar18 == 0x5f)) {
                  *param_1 = (long)(pbVar18 + 1);
                  puVar6 = (undefined8 *)FUN_001eb464(param_1,param_2);
                  if (puVar6 != (undefined8 *)0x0) goto LAB_001ebe60;
                }
                goto LAB_001ebee4;
              }
              goto LAB_001ebd24;
            }
            pbVar20 = pbVar17 + 2;
            *param_1 = (long)pbVar20;
            pbVar18 = pbVar15;
            if (pbVar20 != pbVar15) {
              pbVar18 = pbVar20;
              if (*pbVar20 == 0x5f) {
                if (pbVar17 + 3 != pbVar15) {
                  uVar19 = (uint)pbVar17[3];
                  if (uVar19 - 0x30 < 10) {
                    pbVar18 = pbVar17 + 4;
                  }
                  else if (uVar19 == 0x5f) {
                    for (pbVar17 = pbVar17 + 4; pbVar17 != pbVar15; pbVar17 = pbVar17 + 1) {
                      if (9 < *pbVar17 - 0x30) {
                        if (*pbVar17 == 0x5f) {
                          pbVar18 = pbVar17 + 1;
                        }
                        break;
                      }
                    }
                  }
                }
              }
              else if (*pbVar20 - 0x30 < 10) {
                pbVar17 = pbVar17 + 3;
                do {
                  pbVar18 = pbVar15;
                  if (pbVar15 == pbVar17) break;
                  bVar2 = *pbVar17;
                  pbVar18 = pbVar20;
                  pbVar17 = pbVar17 + 1;
                } while (bVar2 - 0x30 < 10);
              }
            }
            pvVar21 = (void *)param_1[0x266];
            *param_1 = (long)pbVar18;
            lVar11 = *(long *)((long)pvVar21 + 8);
            puVar8 = (undefined8 *)pvVar21;
            if (0xfef < lVar11 + 0x20U) {
              puVar8 = (undefined8 *)malloc(0x1000);
              if (puVar8 == (undefined8 *)0x0) goto LAB_001ebfac;
              lVar11 = 0;
              *puVar8 = pvVar21;
              puVar8[1] = 0;
              param_1[0x266] = (long)puVar8;
            }
            *(long *)((long)puVar8 + 8) = lVar11 + 0x20;
            puVar6 = (undefined8 *)((long)puVar8 + lVar11 + 0x10);
            *puVar6 = &PTR_FUN_0020c5d8;
            *(undefined4 *)((long)puVar8 + lVar11 + 0x18) = 0x1010107;
            *(char **)((long)puVar8 + lVar11 + 0x20) = "string literal";
            *(char **)((long)puVar8 + lVar11 + 0x28) = "";
LAB_001ebe60:
            pvVar21 = (void *)param_1[0x266];
          }
          lVar11 = *(long *)((long)pvVar21 + 8);
          puVar8 = (undefined8 *)pvVar21;
          if (0xfef < lVar11 + 0x20U) {
            puVar8 = (undefined8 *)malloc(0x1000);
            if (puVar8 == (undefined8 *)0x0) goto LAB_001ebfac;
            lVar11 = 0;
            *puVar8 = pvVar21;
            puVar8[1] = 0;
            param_1[0x266] = (long)puVar8;
          }
          *(long *)((long)puVar8 + 8) = lVar11 + 0x20;
          puVar7 = (undefined8 *)((long)puVar8 + lVar11 + 0x10);
          *puVar7 = &PTR_FUN_0020db48;
          *(undefined4 *)((long)puVar8 + lVar11 + 0x18) = 0x1010118;
          *(long *)((long)puVar8 + lVar11 + 0x20) = lVar12;
          *(undefined8 **)((long)puVar8 + lVar11 + 0x28) = puVar6;
          goto LAB_001ebee8;
        }
      }
    }
  }
  else {
    if (cVar3 == 'S') {
      if ((uVar4 < 2) || (pcVar13[1] != 't')) {
        lVar12 = FUN_001ec734(param_1);
        if ((lVar12 != 0) &&
           ((((char *)param_1[1] != (char *)*param_1 && (*(char *)*param_1 == 'I')) &&
            (lVar11 = FUN_001ecac4(param_1,param_2 != 0), lVar11 != 0)))) {
          if (param_2 != 0) {
            *(undefined1 *)(param_2 + 1) = 1;
          }
          pvVar21 = (void *)param_1[0x266];
          lVar10 = *(long *)((long)pvVar21 + 8);
          puVar6 = (undefined8 *)pvVar21;
          if (0xfef < lVar10 + 0x20U) {
            puVar6 = (undefined8 *)malloc(0x1000);
            if (puVar6 == (undefined8 *)0x0) goto LAB_001ebfac;
            lVar10 = 0;
            *puVar6 = pvVar21;
            puVar6[1] = 0;
            param_1[0x266] = (long)puVar6;
          }
          *(long *)((long)puVar6 + 8) = lVar10 + 0x20;
          puVar7 = (undefined8 *)((long)puVar6 + lVar10 + 0x10);
          *puVar7 = &PTR_FUN_0020dd08;
          *(undefined4 *)((long)puVar6 + lVar10 + 0x18) = 0x1010125;
          *(long *)((long)puVar6 + lVar10 + 0x20) = lVar12;
          *(long *)((long)puVar6 + lVar10 + 0x28) = lVar11;
          goto LAB_001ebee8;
        }
        goto LAB_001ebee4;
      }
    }
    else if (cVar3 == 'N') {
      if (pcVar13 == pcVar1) goto LAB_001ebee4;
      pcVar16 = pcVar13 + 1;
      *param_1 = (long)pcVar16;
      if (pcVar16 == pcVar1) {
        uVar19 = 0;
        pcVar16 = pcVar1;
      }
      else {
        if (*pcVar16 == 'r') {
          pcVar16 = pcVar13 + 2;
          uVar19 = 4;
          *param_1 = (long)pcVar16;
        }
        else {
          uVar19 = 0;
        }
        if (pcVar16 != pcVar1) {
          if (*pcVar16 == 'V') {
            pcVar16 = pcVar16 + 1;
            uVar19 = uVar19 | 2;
            *param_1 = (long)pcVar16;
          }
          if ((pcVar16 != pcVar1) && (*pcVar16 == 'K')) {
            uVar19 = uVar19 | 1;
            *param_1 = (long)(pcVar16 + 1);
            pcVar16 = pcVar16 + 1;
          }
        }
      }
      if (param_2 != 0) {
        *(uint *)(param_2 + 4) = uVar19;
      }
      if (pcVar16 == pcVar1) {
LAB_001eb8cc:
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 8) = 0;
        }
      }
      else if (*pcVar16 == 'O') {
        pcVar16 = pcVar16 + 1;
        *param_1 = (long)pcVar16;
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 8) = 2;
        }
      }
      else {
        if (*pcVar16 != 'R') goto LAB_001eb8cc;
        pcVar16 = pcVar16 + 1;
        *param_1 = (long)pcVar16;
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 8) = 1;
        }
      }
      local_70 = (undefined8 *)0x0;
      if (((1 < (ulong)((long)pcVar1 - (long)pcVar16)) && (*pcVar16 == 'S')) && (pcVar16[1] == 't'))
      {
        pvVar21 = (void *)param_1[0x266];
        *param_1 = (long)(pcVar16 + 2);
        lVar12 = *(long *)((long)pvVar21 + 8);
        puVar6 = (undefined8 *)pvVar21;
        if (0xfef < lVar12 + 0x20U) {
          puVar6 = (undefined8 *)malloc(0x1000);
          if (puVar6 == (undefined8 *)0x0) goto LAB_001ebfac;
          lVar12 = 0;
          *puVar6 = pvVar21;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar12 + 0x20;
        local_70 = (undefined8 *)((long)puVar6 + lVar12 + 0x10);
        *local_70 = &PTR_FUN_0020c5d8;
        *(undefined4 *)((long)puVar6 + lVar12 + 0x18) = 0x1010107;
        *(undefined **)((long)puVar6 + lVar12 + 0x20) = &DAT_001450d2;
        *(undefined **)((long)puVar6 + lVar12 + 0x28) = &DAT_001450d5;
      }
LAB_001eb99c:
      do {
        pcVar13 = (char *)*param_1;
        pcVar1 = (char *)param_1[1];
        if (pcVar13 != pcVar1) {
          if (*pcVar13 == 'E') {
            *param_1 = (long)(pcVar13 + 1);
            puVar7 = local_70;
            if (local_70 == (undefined8 *)0x0) goto LAB_001ebee8;
            if (param_1[0x25] != param_1[0x26]) {
              param_1[0x26] = param_1[0x26] + -8;
              goto LAB_001ebee8;
            }
            break;
          }
          if (*pcVar13 == 'L') {
            pcVar13 = pcVar13 + 1;
            *param_1 = (long)pcVar13;
          }
        }
        if ((pcVar13 == pcVar1) || (*pcVar13 != 'M')) {
          if (pcVar1 == pcVar13) {
switchD_001eba00_caseD_45:
            puVar7 = (undefined8 *)FUN_001ed7dc(param_1,param_2);
            if (puVar7 == (undefined8 *)0x0) goto LAB_001ebee8;
LAB_001ebb98:
            puVar6 = local_70;
            if (local_70 != (undefined8 *)0x0) {
              pvVar21 = (void *)param_1[0x266];
              lVar12 = *(long *)((long)pvVar21 + 8);
              puVar8 = (undefined8 *)pvVar21;
              if (0xfef < lVar12 + 0x20U) {
                puVar8 = (undefined8 *)malloc(0x1000);
                if (puVar8 == (undefined8 *)0x0) goto LAB_001ebfac;
                lVar12 = 0;
                *puVar8 = pvVar21;
                puVar8[1] = 0;
                param_1[0x266] = (long)puVar8;
              }
              *(long *)((long)puVar8 + 8) = lVar12 + 0x20;
              puVar14 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
              *puVar14 = &PTR_FUN_0020c648;
              *(undefined4 *)((long)puVar8 + lVar12 + 0x18) = 0x1010117;
              *(undefined8 **)((long)puVar8 + lVar12 + 0x20) = puVar6;
              *(undefined8 **)((long)puVar8 + lVar12 + 0x28) = puVar7;
              puVar7 = puVar14;
            }
            local_70 = puVar7;
            if (param_2 != 0) {
              *(undefined1 *)(param_2 + 1) = 0;
            }
          }
          else {
            switch(*pcVar13) {
            case 'D':
              if (1 < (ulong)((long)pcVar1 - (long)pcVar13)) {
                if ((byte)(pcVar13[1] | 0x20U) == 0x74) {
                  puVar7 = (undefined8 *)FUN_001ed2c4(param_1);
                  goto joined_r0x001ebb60;
                }
                if (pcVar13[1] == 'C') goto switchD_001eba00_caseD_45;
              }
            case 'C':
              if (local_70 == (undefined8 *)0x0) goto LAB_001ebee4;
              puVar7 = (undefined8 *)FUN_001ed3e4(param_1,&local_70,param_2);
              puVar6 = local_70;
              if (puVar7 == (undefined8 *)0x0) goto LAB_001ebee8;
              if (local_70 != (undefined8 *)0x0) {
                pvVar21 = (void *)param_1[0x266];
                lVar12 = *(long *)((long)pvVar21 + 8);
                puVar8 = (undefined8 *)pvVar21;
                if (0xfef < lVar12 + 0x20U) {
                  puVar8 = (undefined8 *)malloc(0x1000);
                  if (puVar8 == (undefined8 *)0x0) goto LAB_001ebfac;
                  lVar12 = 0;
                  *puVar8 = pvVar21;
                  puVar8[1] = 0;
                  param_1[0x266] = (long)puVar8;
                }
                *(long *)((long)puVar8 + 8) = lVar12 + 0x20;
                puVar14 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
                *puVar14 = &PTR_FUN_0020c648;
                *(undefined4 *)((long)puVar8 + lVar12 + 0x18) = 0x1010117;
                *(undefined8 **)((long)puVar8 + lVar12 + 0x20) = puVar6;
                *(undefined8 **)((long)puVar8 + lVar12 + 0x28) = puVar7;
                puVar7 = puVar14;
              }
              local_70 = puVar7;
              if (param_2 != 0) {
                *(undefined1 *)(param_2 + 1) = 0;
              }
              local_70 = (undefined8 *)FUN_001ed654(param_1,local_70);
              if (local_70 == (undefined8 *)0x0) goto LAB_001ebee4;
              break;
            default:
              goto switchD_001eba00_caseD_45;
            case 'I':
              lVar12 = FUN_001ecac4(param_1,param_2 != 0);
              puVar6 = local_70;
              puVar7 = (undefined8 *)0x0;
              if ((lVar12 == 0) || (local_70 == (undefined8 *)0x0)) goto LAB_001ebee8;
              pvVar21 = (void *)param_1[0x266];
              lVar11 = *(long *)((long)pvVar21 + 8);
              puVar8 = (undefined8 *)pvVar21;
              if (0xfef < lVar11 + 0x20U) {
                puVar8 = (undefined8 *)malloc(0x1000);
                if (puVar8 == (undefined8 *)0x0) goto LAB_001ebfac;
                lVar11 = 0;
                *puVar8 = pvVar21;
                puVar8[1] = 0;
                param_1[0x266] = (long)puVar8;
              }
              *(long *)((long)puVar8 + 8) = lVar11 + 0x20;
              local_70 = (undefined8 *)((long)puVar8 + lVar11 + 0x10);
              *local_70 = &PTR_FUN_0020dd08;
              *(undefined4 *)((long)puVar8 + lVar11 + 0x18) = 0x1010125;
              *(undefined8 **)((long)puVar8 + lVar11 + 0x20) = puVar6;
              *(long *)((long)puVar8 + lVar11 + 0x28) = lVar12;
              if (param_2 != 0) {
                *(undefined1 *)(param_2 + 1) = 1;
              }
              break;
            case 'S':
              if ((1 < (ulong)((long)pcVar1 - (long)pcVar13)) && (pcVar13[1] == 't'))
              goto switchD_001eba00_caseD_45;
              puVar7 = (undefined8 *)FUN_001ec734(param_1);
              puVar6 = local_70;
              local_78 = puVar7;
              if (puVar7 == (undefined8 *)0x0) goto LAB_001ebee8;
              puVar8 = puVar7;
              if (local_70 != (undefined8 *)0x0) {
                pvVar21 = (void *)param_1[0x266];
                lVar12 = *(long *)((long)pvVar21 + 8);
                puVar14 = (undefined8 *)pvVar21;
                if (0xfef < lVar12 + 0x20U) {
                  puVar14 = (undefined8 *)malloc(0x1000);
                  if (puVar14 == (undefined8 *)0x0) goto LAB_001ebfac;
                  lVar12 = 0;
                  *puVar14 = pvVar21;
                  puVar14[1] = 0;
                  param_1[0x266] = (long)puVar14;
                }
                *(long *)((long)puVar14 + 8) = lVar12 + 0x20;
                puVar8 = (undefined8 *)((long)puVar14 + lVar12 + 0x10);
                *puVar8 = &PTR_FUN_0020c648;
                *(undefined4 *)((long)puVar14 + lVar12 + 0x18) = 0x1010117;
                *(undefined8 **)((long)puVar14 + lVar12 + 0x20) = puVar6;
                *(undefined8 **)((long)puVar14 + lVar12 + 0x28) = puVar7;
              }
              local_70 = puVar8;
              if (param_2 != 0) {
                *(undefined1 *)(param_2 + 1) = 0;
              }
              if (local_70 != puVar7) {
                ppuVar9 = &local_78;
                goto LAB_001ebc9c;
              }
              goto LAB_001eb99c;
            case 'T':
              puVar7 = (undefined8 *)FUN_001ecf20(param_1);
joined_r0x001ebb60:
              if (puVar7 != (undefined8 *)0x0) goto LAB_001ebb98;
              goto LAB_001ebee8;
            }
          }
          ppuVar9 = &local_70;
LAB_001ebc9c:
          FUN_001ec198(param_1 + 0x25,ppuVar9);
          goto LAB_001eb99c;
        }
        *param_1 = (long)(pcVar13 + 1);
      } while (local_70 != (undefined8 *)0x0);
      goto LAB_001ebee4;
    }
    if (uVar4 < 3) {
      if (uVar4 == 2) {
LAB_001eb6cc:
        if ((*pcVar13 == 'S') && (pcVar13[1] == 't')) {
          lVar12 = 2;
          goto LAB_001eb6e8;
        }
      }
LAB_001eb764:
      puVar7 = (undefined8 *)FUN_001ed7dc(param_1,param_2);
      puVar8 = puVar7;
      local_70 = puVar7;
      if (puVar7 == (undefined8 *)0x0) goto LAB_001ebee8;
    }
    else {
      if (*pcVar13 != 'S') goto LAB_001eb764;
      if ((pcVar13[1] != 't') || (pcVar13[2] != 'L')) goto LAB_001eb6cc;
      lVar12 = 3;
LAB_001eb6e8:
      *param_1 = (long)(pcVar13 + lVar12);
      lVar12 = FUN_001ed7dc(param_1,param_2);
      if (lVar12 == 0) {
        puVar7 = (undefined8 *)0x0;
        local_70 = (undefined8 *)0x0;
        goto LAB_001ebee8;
      }
      pvVar21 = (void *)param_1[0x266];
      lVar11 = *(long *)((long)pvVar21 + 8);
      puVar6 = (undefined8 *)pvVar21;
      if (0xfef < lVar11 + 0x20U) {
        puVar6 = (undefined8 *)malloc(0x1000);
        if (puVar6 == (undefined8 *)0x0) goto LAB_001ebfac;
        lVar11 = 0;
        *puVar6 = pvVar21;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar11 + 0x20;
      puVar8 = (undefined8 *)((long)puVar6 + lVar11 + 0x10);
      *puVar8 = &PTR_FUN_0020dd78;
      *(undefined4 *)((long)puVar6 + lVar11 + 0x18) = 0x1010127;
      *(long *)((long)puVar6 + lVar11 + 0x20) = lVar12;
    }
    puVar7 = puVar8;
    local_70 = puVar8;
    if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) goto LAB_001ebee8;
    FUN_001ec198(param_1 + 0x25,&local_70);
    lVar12 = FUN_001ecac4(param_1,param_2 != 0);
    if (lVar12 != 0) {
      if (param_2 != 0) {
        *(undefined1 *)(param_2 + 1) = 1;
      }
      pvVar21 = (void *)param_1[0x266];
      lVar11 = *(long *)((long)pvVar21 + 8);
      puVar6 = (undefined8 *)pvVar21;
      if (0xfef < lVar11 + 0x20U) {
        puVar6 = (undefined8 *)malloc(0x1000);
        if (puVar6 == (undefined8 *)0x0) {
LAB_001ebfac:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar11 = 0;
        *puVar6 = pvVar21;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar11 + 0x20;
      puVar7 = (undefined8 *)((long)puVar6 + lVar11 + 0x10);
      *puVar7 = &PTR_FUN_0020dd08;
      *(undefined8 **)((long)puVar6 + lVar11 + 0x20) = puVar8;
      *(long *)((long)puVar6 + lVar11 + 0x28) = lVar12;
      *(undefined4 *)((long)puVar6 + lVar11 + 0x18) = 0x1010125;
      goto LAB_001ebee8;
    }
  }
LAB_001ebee4:
  puVar7 = (undefined8 *)0x0;
LAB_001ebee8:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}


// ===== 001ebfb0  FUN_001ebfb0 =====

void FUN_001ebfb0(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  undefined8 *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pcVar6 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if (pcVar1 == pcVar6) {
LAB_001ec038:
    puVar4 = (undefined8 *)FUN_001e9ce4(param_1);
  }
  else {
    cVar2 = *pcVar6;
    if (cVar2 == 'J') {
      pcVar6 = pcVar6 + 1;
      *param_1 = (long)pcVar6;
      lVar7 = param_1[2];
      lVar8 = param_1[3];
      if (pcVar6 == pcVar1) goto LAB_001ec0c4;
      while (*pcVar6 != 'E') {
LAB_001ec0c4:
        do {
          puVar4 = (undefined8 *)FUN_001ebfb0(param_1);
          local_50 = puVar4;
          if (puVar4 == (undefined8 *)0x0) goto LAB_001ec040;
          FUN_001ec198(param_1 + 2,&local_50);
          pcVar6 = (char *)*param_1;
        } while (pcVar6 == (char *)param_1[1]);
      }
      lVar7 = (lVar8 - lVar7 >> 3) * 8;
      *param_1 = (long)(pcVar6 + 1);
      auVar10 = FUN_001f530c(param_1,param_1[2] + lVar7,param_1[3]);
      pvVar9 = (void *)param_1[0x266];
      param_1[3] = param_1[2] + lVar7;
      lVar7 = *(long *)((long)pvVar9 + 8);
      puVar5 = (undefined8 *)pvVar9;
      if (0xfef < lVar7 + 0x20U) {
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar7 = 0;
        *puVar5 = pvVar9;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
      puVar4 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
      *puVar4 = &PTR_FUN_0020dde8;
      *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x1010121;
      *(undefined1 (*) [16])((long)puVar5 + lVar7 + 0x20) = auVar10;
      goto LAB_001ec040;
    }
    if (cVar2 == 'L') {
      if (((ulong)((long)pcVar1 - (long)pcVar6) < 2) || (pcVar6[1] != 'Z')) {
        puVar4 = (undefined8 *)FUN_001efd04(param_1);
        goto LAB_001ec040;
      }
      *param_1 = (long)(pcVar6 + 2);
      puVar4 = (undefined8 *)FUN_001e9094(param_1);
    }
    else {
      if (cVar2 != 'X') goto LAB_001ec038;
      *param_1 = (long)(pcVar6 + 1);
      puVar4 = (undefined8 *)FUN_001ede40(param_1);
    }
    if (puVar4 != (undefined8 *)0x0) {
      pcVar6 = (char *)*param_1;
      if ((pcVar6 == (char *)param_1[1]) || (*pcVar6 != 'E')) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        *param_1 = (long)(pcVar6 + 1);
      }
    }
  }
LAB_001ec040:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 001ec198  FUN_001ec198 =====

void FUN_001ec198(undefined8 *param_1,undefined8 *param_2)

{
  void *__dest;
  undefined8 *puVar1;
  undefined8 uVar2;
  size_t __n;
  undefined8 *__src;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)param_1[2]) {
    __src = (undefined8 *)*param_1;
    __n = (long)puVar1 - (long)__src;
    if (param_1 + 3 == __src) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) goto LAB_001ec24c;
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      *param_1 = __dest;
    }
    else {
      __dest = realloc(__src,__n * 2);
      *param_1 = __dest;
      if (__dest == (void *)0x0) {
LAB_001ec24c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    puVar1 = (undefined8 *)((long)__dest + __n);
    param_1[1] = puVar1;
    param_1[2] = (void *)((long)__dest + ((long)__n >> 2) * 8);
  }
  uVar2 = *param_2;
  param_1[1] = puVar1 + 1;
  *puVar1 = uVar2;
  return;
}


// ===== 001ec250  FUN_001ec250 =====

undefined4 FUN_001ec250(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar5 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if (pbVar5 == pbVar1) {
    return 1;
  }
  if (*pbVar5 != 0x68) {
    if (*pbVar5 != 0x76) {
      return 1;
    }
    pbVar3 = pbVar5 + 1;
    *param_1 = (long)pbVar3;
    if (pbVar3 == pbVar1) {
      pbVar4 = pbVar1;
      if (pbVar3 != pbVar1) goto LAB_001ec380;
LAB_001ec390:
      pbVar3 = (byte *)0x0;
      pbVar5 = pbVar4;
      pbVar6 = (byte *)0x0;
    }
    else {
      pbVar4 = pbVar3;
      if (*pbVar3 == 0x6e) {
        pbVar4 = pbVar5 + 2;
        *param_1 = (long)pbVar4;
      }
      if (pbVar4 == pbVar1) goto LAB_001ec390;
LAB_001ec380:
      if (9 < *pbVar4 - 0x30) goto LAB_001ec390;
      do {
        pbVar4 = pbVar4 + 1;
        *param_1 = (long)pbVar4;
        pbVar5 = pbVar1;
        pbVar6 = pbVar1;
        if (pbVar1 == pbVar4) break;
        pbVar5 = pbVar4;
        pbVar6 = pbVar4;
      } while (*pbVar4 - 0x30 < 10);
    }
    if (pbVar3 == pbVar6) {
      return 1;
    }
    if (pbVar5 == pbVar1) {
      return 1;
    }
    if (*pbVar5 != 0x5f) {
      return 1;
    }
    pbVar3 = pbVar5 + 1;
    *param_1 = (long)pbVar3;
    pbVar4 = pbVar1;
    pbVar6 = pbVar3;
    if ((pbVar3 != pbVar1) && (pbVar4 = pbVar3, *pbVar3 == 0x6e)) {
      pbVar4 = pbVar5 + 2;
      *param_1 = (long)pbVar4;
      pbVar6 = pbVar4;
    }
    if ((pbVar6 == pbVar1) || (9 < *pbVar4 - 0x30)) {
      pbVar3 = (byte *)0x0;
      pbVar6 = (byte *)0x0;
      pbVar5 = pbVar4;
    }
    else {
      do {
        pbVar4 = pbVar4 + 1;
        *param_1 = (long)pbVar4;
        pbVar6 = pbVar1;
        pbVar5 = pbVar1;
        if (pbVar1 == pbVar4) break;
        pbVar6 = pbVar4;
        pbVar5 = pbVar4;
      } while (*pbVar4 - 0x30 < 10);
    }
    if (pbVar3 == pbVar6) {
      return 1;
    }
    if (pbVar5 == pbVar1) {
      return 1;
    }
    bVar2 = *pbVar5;
    goto joined_r0x001ec474;
  }
  pbVar3 = pbVar5 + 1;
  *param_1 = (long)pbVar3;
  if (pbVar3 == pbVar1) {
    pbVar4 = pbVar1;
    if (pbVar3 != pbVar1) goto LAB_001ec2fc;
LAB_001ec30c:
    pbVar3 = (byte *)0x0;
    pbVar5 = pbVar4;
    pbVar6 = (byte *)0x0;
  }
  else {
    pbVar4 = pbVar3;
    if (*pbVar3 == 0x6e) {
      pbVar4 = pbVar5 + 2;
      *param_1 = (long)pbVar4;
    }
    if (pbVar4 == pbVar1) goto LAB_001ec30c;
LAB_001ec2fc:
    if (9 < *pbVar4 - 0x30) goto LAB_001ec30c;
    do {
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar5 = pbVar1;
      pbVar6 = pbVar1;
      if (pbVar1 == pbVar4) break;
      pbVar5 = pbVar4;
      pbVar6 = pbVar4;
    } while (*pbVar4 - 0x30 < 10);
  }
  if (pbVar3 == pbVar6) {
    return 1;
  }
  if (pbVar5 == pbVar1) {
    return 1;
  }
  bVar2 = *pbVar5;
joined_r0x001ec474:
  if (bVar2 == 0x5f) {
    *param_1 = (long)(pbVar5 + 1);
    return 0;
  }
  return 1;
}


// ===== 001ec4cc  FUN_001ec4cc =====

undefined8 FUN_001ec4cc(void)

{
  return 0;
}


// ===== 001ec4d4  FUN_001ec4d4 =====

undefined8 FUN_001ec4d4(void)

{
  return 0;
}


// ===== 001ec4dc  FUN_001ec4dc =====

undefined8 FUN_001ec4dc(void)

{
  return 0;
}


// ===== 001ec4e4  FUN_001ec4e4 =====

void FUN_001ec4e4(void)

{
  return;
}


// ===== 001ec4e8  FUN_001ec4e8 =====

void FUN_001ec4e8(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *__src;
  size_t __n;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  __src = *(void **)(param_1 + 0x10);
  __n = *(long *)(param_1 + 0x18) - (long)__src;
  if (__n != 0) {
    lVar3 = param_2[1];
    __size = lVar3 + __n;
    if (__size < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (__size <= uVar2) {
        __size = uVar2;
      }
      param_2[2] = __size;
      pvVar1 = realloc((void *)*param_2,__size);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    memmove((void *)((long)pvVar1 + lVar3),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  plVar4 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001ec5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 001ec5bc  FUN_001ec5bc =====

void FUN_001ec5bc(void)

{
  return;
}


// ===== 001ec5c0  FUN_001ec5c0 =====

undefined1  [16] FUN_001ec5c0(void)

{
  return ZEXT816(0);
}


// ===== 001ec5cc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001ec5d0  FUN_001ec5d0 =====

void FUN_001ec5d0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = param_2[1];
  uVar1 = lVar7 + 0x18;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar5 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar5 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) goto LAB_001ec72c;
    lVar7 = param_2[1];
  }
  uVar4 = s_construction_vtable_for_00145840._8_8_;
  uVar3 = s_construction_vtable_for_00145840._0_8_;
  pcVar2 = (char *)((long)pvVar5 + lVar7);
  *(undefined8 *)(pcVar2 + 0x10) = s_construction_vtable_for_00145840._16_8_;
  *(undefined8 *)(pcVar2 + 8) = uVar4;
  *(undefined8 *)pcVar2 = uVar3;
  param_2[1] = param_2[1] + 0x18;
  plVar8 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
  if (*(char *)((long)plVar8 + 9) != '\x01') {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  lVar7 = param_2[1];
  uVar1 = lVar7 + 4;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar5 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar5 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
LAB_001ec72c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar7 = param_2[1];
  }
  *(undefined4 *)((long)pvVar5 + lVar7) = 0x2d6e692d;
  param_2[1] = param_2[1] + 4;
  plVar8 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
  if (*(char *)((long)plVar8 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001ec728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  return;
}


// ===== 001ec730  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001ec734  FUN_001ec734 =====

undefined8 * FUN_001ec734(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar1 != pbVar2) && (*pbVar1 == 0x53)) {
    pbVar7 = pbVar1 + 1;
    *param_1 = (long)pbVar7;
    if ((pbVar2 != pbVar7) && (*pbVar7 - 0x61 < 0x1a)) {
      puVar5 = (undefined8 *)0x0;
      switch((uint)*pbVar7) {
      case 0x61:
        puVar10 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(pbVar1 + 2);
        lVar8 = puVar10[1];
        if (lVar8 + 0x10U < 0xff0) {
          uVar6 = 0;
        }
        else {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) {
LAB_001ecac0:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          uVar6 = 0;
LAB_001ec8d4:
          *puVar5 = puVar10;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
LAB_001ec9cc:
          lVar8 = 0;
          puVar10 = puVar5;
        }
        break;
      case 0x62:
        puVar10 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(pbVar1 + 2);
        lVar8 = puVar10[1];
        if (0xfef < lVar8 + 0x10U) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_001ecac0;
          *puVar5 = puVar10;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
          uVar6 = 1;
          goto LAB_001ec9cc;
        }
        uVar6 = 1;
        break;
      default:
        goto switchD_001ec86c_caseD_63;
      case 100:
        puVar10 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(pbVar1 + 2);
        lVar8 = puVar10[1];
        if (0xfef < lVar8 + 0x10U) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_001ecac0;
          uVar6 = 5;
          goto LAB_001ec8d4;
        }
        uVar6 = 5;
        break;
      case 0x69:
        puVar10 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(pbVar1 + 2);
        lVar8 = puVar10[1];
        if (0xfef < lVar8 + 0x10U) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_001ecac0;
          *puVar5 = puVar10;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
          uVar6 = 3;
          goto LAB_001ec9cc;
        }
        uVar6 = 3;
        break;
      case 0x6f:
        puVar10 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(pbVar1 + 2);
        lVar8 = puVar10[1];
        if (0xfef < lVar8 + 0x10U) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_001ecac0;
          *puVar5 = puVar10;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
          uVar6 = 4;
          goto LAB_001ec9cc;
        }
        uVar6 = 4;
        break;
      case 0x73:
        puVar10 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(pbVar1 + 2);
        lVar8 = puVar10[1];
        if (0xfef < lVar8 + 0x10U) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_001ecac0;
          *puVar5 = puVar10;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
          uVar6 = 2;
          goto LAB_001ec9cc;
        }
        uVar6 = 2;
      }
      puVar10[1] = lVar8 + 0x10;
      puVar5 = (undefined8 *)((long)puVar10 + lVar8 + 0x10);
      *puVar5 = &PTR_FUN_0020dbb8;
      *(undefined4 *)((long)puVar10 + lVar8 + 0x18) = 0x1010129;
      *(undefined4 *)((long)puVar10 + lVar8 + 0x1c) = uVar6;
      puVar10 = (undefined8 *)FUN_001ed654(param_1,puVar5);
      local_40 = puVar10;
      if (puVar10 != puVar5) {
        FUN_001ec198(param_1 + 0x25,&local_40);
        puVar5 = puVar10;
      }
      goto switchD_001ec86c_caseD_63;
    }
    if ((pbVar7 == pbVar2) || (*pbVar7 != 0x5f)) {
      if (((pbVar2 != pbVar7) && (bVar3 = *pbVar7, 0x2f < bVar3)) &&
         ((bVar3 < 0x3a || ((byte)(bVar3 + 0xbf) < 0x1a)))) {
        lVar8 = 0;
        pbVar1 = pbVar1 + 2;
        do {
          pbVar7 = pbVar1;
          if (bVar3 < 0x3a) {
            lVar9 = -0x30;
          }
          else {
            if (0x19 < (byte)(bVar3 + 0xbf)) {
              pbVar7 = pbVar7 + -1;
              break;
            }
            lVar9 = -0x37;
          }
          lVar8 = lVar9 + (ulong)bVar3 + lVar8 * 0x24;
          *param_1 = (long)pbVar7;
          if (pbVar2 == pbVar7) break;
          bVar3 = *pbVar7;
          pbVar1 = pbVar7 + 1;
        } while (0x2f < bVar3);
        if ((pbVar7 != pbVar2) && (*pbVar7 == 0x5f)) {
          *param_1 = (long)(pbVar7 + 1);
          if (lVar8 + 1U < (ulong)(param_1[0x26] - param_1[0x25] >> 3)) {
            puVar5 = *(undefined8 **)(param_1[0x25] + (lVar8 + 1U) * 8);
            goto switchD_001ec86c_caseD_63;
          }
        }
      }
    }
    else {
      *param_1 = (long)(pbVar1 + 2);
      if ((undefined8 *)param_1[0x25] != (undefined8 *)param_1[0x26]) {
        puVar5 = *(undefined8 **)param_1[0x25];
        goto switchD_001ec86c_caseD_63;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
switchD_001ec86c_caseD_63:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ecac4  FUN_001ecac4 =====

void FUN_001ecac4(long *param_1,ulong param_2)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  void *pvVar18;
  undefined1 auVar19 [16];
  undefined8 *local_b0;
  undefined8 *local_a8;
  long *local_a0;
  long *local_98;
  long *plStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pcVar2 = (char *)*param_1;
  if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'I')) {
    *param_1 = (long)(pcVar2 + 1);
    if ((param_2 & 1) != 0) {
      local_a0 = param_1 + 0x48;
      param_1[0x54] = param_1[0x53];
      FUN_001edb54(param_1 + 0x53,&local_a0);
      param_1[0x49] = param_1[0x48];
    }
    plVar17 = param_1 + 2;
    lVar12 = *plVar17;
    lVar15 = param_1[3];
    plVar1 = param_1 + 0x56;
LAB_001ecb78:
    while ((pcVar2 = (char *)*param_1, pcVar2 == (char *)param_1[1] || (*pcVar2 != 'E'))) {
      if ((param_2 & 1) != 0) {
        uStack_80 = 0;
        local_88 = 0;
        uStack_70 = 0;
        uStack_78 = 0;
        plVar10 = (long *)param_1[0x53];
        plStack_90 = &local_68;
        if (plVar10 == plVar1) {
          local_a0 = &local_88;
          if (param_1[0x54] - (long)plVar10 == 0) {
            lVar16 = 0;
          }
          else {
            local_98 = &local_88;
            __memmove_chk(&local_88,plVar1,param_1[0x54] - (long)plVar10,0x20);
            plVar10 = (long *)param_1[0x53];
            lVar16 = param_1[0x54] - (long)plVar10 >> 3;
          }
          local_98 = local_a0 + lVar16;
          param_1[0x54] = (long)plVar10;
        }
        else {
          plStack_90 = (long *)param_1[0x55];
          local_98 = (long *)param_1[0x54];
          param_1[0x53] = (long)plVar1;
          param_1[0x54] = (long)plVar1;
          param_1[0x55] = (long)(param_1 + 0x5a);
          local_a0 = plVar10;
        }
                    /* try { // try from 001ecc34 to 001ecc3b has its CatchHandler @ 001ecf00 */
        puVar9 = (undefined8 *)FUN_001ebfb0(param_1);
        plVar10 = (long *)param_1[0x53];
        local_a8 = puVar9;
        if (local_a0 == &local_88) {
          plVar13 = &local_88;
          if (plVar10 != plVar1) {
            free(plVar10);
            param_1[0x53] = (long)plVar1;
            param_1[0x54] = (long)plVar1;
            param_1[0x55] = (long)(param_1 + 0x5a);
            plVar10 = plVar1;
            plVar13 = local_a0;
          }
          if ((long)local_98 - (long)local_a0 == 0) {
            lVar16 = 0;
            plVar10 = plVar1;
          }
          else {
            memmove(plVar10,plVar13,(long)local_98 - (long)local_a0);
            lVar16 = (long)local_98 - (long)local_a0;
            plVar13 = local_a0;
            plVar10 = (long *)param_1[0x53];
          }
          param_1[0x54] = (long)plVar10 + lVar16;
          plVar10 = plVar13;
          local_98 = local_a0;
joined_r0x001ecd04:
          local_a0 = local_98;
          if (puVar9 == (undefined8 *)0x0) goto LAB_001ece14;
LAB_001ecd08:
          local_a0 = local_98;
          FUN_001ec198(plVar17,&local_a8);
          local_b0 = puVar9;
          if (*(char *)(puVar9 + 1) == '!') {
            pvVar18 = (void *)param_1[0x266];
            plVar10 = (long *)puVar9[2];
            lVar16 = puVar9[3];
            lVar11 = *(long *)((long)pvVar18 + 8);
            puVar9 = (undefined8 *)pvVar18;
            if (0xfef < lVar11 + 0x20U) {
              puVar9 = (undefined8 *)malloc(0x1000);
              if (puVar9 == (undefined8 *)0x0) {
LAB_001ecefc:
                    /* WARNING: Subroutine does not return */
                std::terminate();
              }
              lVar11 = 0;
              *puVar9 = pvVar18;
              puVar9[1] = 0;
              param_1[0x266] = (long)puVar9;
            }
            *(long *)((long)puVar9 + 8) = lVar11 + 0x20;
            local_b0 = (undefined8 *)((long)puVar9 + lVar11 + 0x10);
            *local_b0 = &PTR_FUN_0020dc28;
            *(undefined4 *)((long)puVar9 + lVar11 + 0x18) = 0x2020220;
            lVar14 = lVar16 << 3;
            *(long **)((long)puVar9 + lVar11 + 0x20) = plVar10;
            *(long *)((long)puVar9 + lVar11 + 0x28) = lVar16;
            plVar13 = plVar10;
            lVar3 = lVar14;
            lVar7 = lVar16;
            while (plVar6 = plVar10, lVar4 = lVar14, lVar8 = lVar16, lVar7 != 0) {
              if (*(char *)(*plVar13 + 10) != '\x01') goto joined_r0x001ecdb0;
              lVar3 = lVar3 + -8;
              plVar13 = plVar13 + 1;
              lVar7 = lVar3;
            }
            *(undefined1 *)((long)puVar9 + lVar11 + 0x1a) = 1;
joined_r0x001ecdb0:
            do {
              if (lVar8 == 0) goto LAB_001ecdd4;
              if (*(char *)(*plVar6 + 0xb) != '\x01') goto joined_r0x001ecdd8;
              lVar4 = lVar4 + -8;
              plVar6 = plVar6 + 1;
              lVar8 = lVar4;
            } while( true );
          }
          goto LAB_001ecdfc;
        }
        param_1[0x53] = (long)local_a0;
        if (plVar10 == plVar1) {
          param_1[0x55] = (long)plStack_90;
          param_1[0x54] = (long)local_98;
          plVar10 = &local_88;
          local_98 = &local_88;
          plStack_90 = &local_68;
          goto joined_r0x001ecd04;
        }
        plVar13 = (long *)param_1[0x55];
        param_1[0x55] = (long)plStack_90;
        param_1[0x54] = (long)local_98;
        local_a0 = plVar10;
        local_98 = plVar10;
        plStack_90 = plVar13;
        if (puVar9 != (undefined8 *)0x0) goto LAB_001ecd08;
        goto LAB_001ece14;
      }
      plVar10 = (long *)FUN_001ebfb0(param_1);
      local_a0 = plVar10;
      if (plVar10 == (long *)0x0) goto LAB_001ecec8;
      FUN_001ec198(plVar17,&local_a0);
    }
    *param_1 = (long)(pcVar2 + 1);
    lVar12 = (lVar15 - lVar12 >> 3) * 8;
    auVar19 = FUN_001f530c(param_1,param_1[2] + lVar12,param_1[3]);
    pvVar18 = (void *)param_1[0x266];
    param_1[3] = param_1[2] + lVar12;
    lVar12 = *(long *)((long)pvVar18 + 8);
    puVar9 = (undefined8 *)pvVar18;
    if (0xfef < lVar12 + 0x20U) {
      puVar9 = (undefined8 *)malloc(0x1000);
      if (puVar9 == (undefined8 *)0x0) goto LAB_001ecefc;
      lVar12 = 0;
      *puVar9 = pvVar18;
      puVar9[1] = 0;
      param_1[0x266] = (long)puVar9;
    }
    *(long *)((long)puVar9 + 8) = lVar12 + 0x20;
    plVar10 = (long *)((long)puVar9 + lVar12 + 0x10);
    *plVar10 = (long)&PTR_FUN_0020dc98;
    *(undefined4 *)((long)puVar9 + lVar12 + 0x18) = 0x1010123;
    *(undefined1 (*) [16])((long)puVar9 + lVar12 + 0x20) = auVar19;
    goto LAB_001ecec8;
  }
  plVar10 = (long *)0x0;
LAB_001ecec8:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar10);
LAB_001ecdd4:
  *(undefined1 *)((long)puVar9 + lVar11 + 0x1b) = 1;
joined_r0x001ecdd8:
  do {
    if (lVar16 == 0) break;
    if (*(char *)(*plVar10 + 9) != '\x01') goto LAB_001ecdfc;
    lVar14 = lVar14 + -8;
    plVar10 = plVar10 + 1;
    lVar16 = lVar14;
  } while( true );
  *(undefined1 *)((long)puVar9 + lVar11 + 0x19) = 1;
LAB_001ecdfc:
  FUN_001f33d0(*(undefined8 *)(param_1[0x54] + -8),&local_b0);
  puVar9 = (undefined8 *)0x1;
  plVar10 = local_a0;
LAB_001ece14:
  if (plVar10 != &local_88) {
    free(plVar10);
  }
  if (((ulong)puVar9 & 1) == 0) goto LAB_001ecec0;
  goto LAB_001ecb78;
LAB_001ecec0:
  plVar10 = (long *)0x0;
  goto LAB_001ecec8;
}


// ===== 001ecf20  FUN_001ecf20 =====

undefined8 * FUN_001ecf20(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  ulong uVar11;
  size_t __n;
  void *pvVar12;
  long *plVar13;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pbVar6 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar6 != pbVar2) && (*pbVar6 == 0x54)) {
    pbVar9 = pbVar6 + 1;
    *param_1 = (long)pbVar9;
    if (pbVar9 != pbVar2) {
      if (*pbVar9 == 0x4c) {
        pbVar9 = pbVar6 + 2;
        *param_1 = (long)pbVar9;
        if ((pbVar2 != pbVar9) && (*pbVar9 - 0x30 < 10)) {
          lVar8 = 0;
          while (pbVar2 + -2 != pbVar6) {
            pbVar9 = pbVar6 + 3;
            *param_1 = (long)pbVar9;
            lVar8 = lVar8 * 10 + (ulong)pbVar6[2] + -0x30;
            if ((pbVar2 + -3 == pbVar6) ||
               (pbVar1 = pbVar6 + 3, pbVar6 = pbVar6 + 1, 9 < *pbVar1 - 0x30)) goto LAB_001ed190;
          }
          lVar8 = lVar8 * 10 + -0x30;
          pbVar9 = pbVar6 + 2;
LAB_001ed190:
          if ((pbVar9 != pbVar2) && (*pbVar9 == 0x5f)) {
            uVar7 = lVar8 + 1;
            pbVar9 = pbVar9 + 1;
            *param_1 = (long)pbVar9;
            goto joined_r0x001ecff4;
          }
        }
      }
      else {
        uVar7 = 0;
joined_r0x001ecff4:
        if ((pbVar9 != pbVar2) && (*pbVar9 == 0x5f)) {
          uVar11 = 0;
LAB_001ed008:
          *param_1 = (long)(pbVar9 + 1);
          if ((uVar7 == 0) && (*(char *)((long)param_1 + 0x309) != '\0')) {
            pvVar12 = (void *)param_1[0x266];
            lVar8 = *(long *)((long)pvVar12 + 8);
            puVar4 = (undefined8 *)pvVar12;
            if (0xfef < lVar8 + 0x30U) {
              puVar4 = (undefined8 *)malloc(0x1000);
              if (puVar4 == (undefined8 *)0x0) goto LAB_001ed2c0;
              lVar8 = 0;
              *puVar4 = pvVar12;
              puVar4[1] = 0;
              param_1[0x266] = (long)puVar4;
            }
            *(long *)((long)puVar4 + 8) = lVar8 + 0x30;
            puVar10 = (undefined8 *)((long)puVar4 + lVar8 + 0x10);
            *puVar10 = &PTR_FUN_0020c6b8;
            *(undefined4 *)((long)puVar4 + lVar8 + 0x18) = 0x2020224;
            *(ulong *)((long)puVar4 + lVar8 + 0x20) = uVar11;
            *(undefined8 *)((long)puVar4 + lVar8 + 0x28) = 0;
            *(undefined1 *)((long)puVar4 + lVar8 + 0x30) = 0;
            puVar4 = (undefined8 *)param_1[0x5b];
            if (puVar4 == (undefined8 *)param_1[0x5c]) {
              plVar13 = (long *)param_1[0x5a];
              __n = (long)puVar4 - (long)plVar13;
              if (param_1 + 0x5d == plVar13) {
                pvVar12 = malloc(__n * 2);
                if (pvVar12 == (void *)0x0) goto LAB_001ed2c0;
                if (__n != 0) {
                  memmove(pvVar12,plVar13,__n);
                }
                param_1[0x5a] = (long)pvVar12;
              }
              else {
                pvVar12 = realloc(plVar13,__n * 2);
                param_1[0x5a] = (long)pvVar12;
                if (pvVar12 == (void *)0x0) {
LAB_001ed2c0:
                    /* WARNING: Subroutine does not return */
                  std::terminate();
                }
              }
              puVar4 = (undefined8 *)((long)pvVar12 + __n);
              param_1[0x5b] = (long)puVar4;
              param_1[0x5c] = (long)((long)pvVar12 + ((long)__n >> 2) * 8);
            }
            param_1[0x5b] = (long)(puVar4 + 1);
            *puVar4 = puVar10;
          }
          else {
            uVar5 = param_1[0x54] - param_1[0x53] >> 3;
            if ((uVar7 < uVar5) &&
               ((plVar13 = *(long **)(param_1[0x53] + uVar7 * 8), plVar13 != (long *)0x0 &&
                (uVar11 < (ulong)(plVar13[1] - *plVar13 >> 3))))) {
              puVar10 = *(undefined8 **)(*plVar13 + uVar11 * 8);
            }
            else {
              puVar10 = (undefined8 *)0x0;
              if ((uVar7 <= uVar5) && (param_1[0x62] == uVar7)) {
                if (uVar7 == uVar5) {
                  local_50 = 0;
                  FUN_001edb54(param_1 + 0x53,&local_50);
                }
                pvVar12 = (void *)param_1[0x266];
                lVar8 = *(long *)((long)pvVar12 + 8);
                puVar4 = (undefined8 *)pvVar12;
                if (0xfef < lVar8 + 0x20U) {
                  puVar4 = (undefined8 *)malloc(0x1000);
                  if (puVar4 == (undefined8 *)0x0) goto LAB_001ed2c0;
                  lVar8 = 0;
                  *puVar4 = pvVar12;
                  puVar4[1] = 0;
                  param_1[0x266] = (long)puVar4;
                }
                *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
                puVar10 = (undefined8 *)((long)puVar4 + lVar8 + 0x10);
                *puVar10 = &PTR_FUN_0020c5d8;
                *(undefined4 *)((long)puVar4 + lVar8 + 0x18) = 0x1010107;
                *(undefined **)((long)puVar4 + lVar8 + 0x20) = &DAT_0014511f;
                *(undefined **)((long)puVar4 + lVar8 + 0x28) = &DAT_00145123;
              }
            }
          }
          goto LAB_001ed244;
        }
        if ((pbVar2 != pbVar9) && (*pbVar9 - 0x30 < 10)) {
          lVar8 = 0;
          pbVar6 = pbVar9;
          while (pbVar2 != pbVar6) {
            pbVar9 = pbVar6 + 1;
            *param_1 = (long)pbVar9;
            lVar8 = lVar8 * 10 + (ulong)*pbVar6 + -0x30;
            if ((pbVar2 + -1 == pbVar6) || (pbVar6 = pbVar9, 9 < *pbVar9 - 0x30)) goto LAB_001ed224;
          }
          lVar8 = lVar8 * 10 + -0x30;
          pbVar9 = pbVar6;
LAB_001ed224:
          if ((pbVar9 != pbVar2) && (*pbVar9 == 0x5f)) {
            uVar11 = lVar8 + 1;
            goto LAB_001ed008;
          }
        }
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_001ed244:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ed2c4  FUN_001ed2c4 =====

undefined8 * FUN_001ed2c4(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  pcVar2 = (char *)*param_1;
  if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'D')) {
    pcVar1 = pcVar2 + 1;
    *param_1 = (long)pcVar1;
    if ((pcVar1 != (char *)param_1[1]) && ((*pcVar1 == 't' || (*pcVar1 == 'T')))) {
      *param_1 = (long)(pcVar2 + 2);
      lVar3 = FUN_001ede40(param_1);
      if (lVar3 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar2 = (char *)*param_1;
      if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) {
        pvVar7 = (void *)param_1[0x266];
        *param_1 = (long)(pcVar2 + 1);
        lVar6 = *(long *)((long)pvVar7 + 8);
        puVar4 = (undefined8 *)pvVar7;
        if (0xfef < lVar6 + 0x40U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar6 = 0;
          *puVar4 = pvVar7;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar6 + 0x40;
        puVar5 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
        *puVar5 = &PTR_FUN_0020d6e8;
        *(undefined4 *)((long)puVar4 + lVar6 + 0x18) = 0x1010134;
        *(char **)((long)puVar4 + lVar6 + 0x20) = "decltype(";
        *(char **)((long)puVar4 + lVar6 + 0x28) = "";
        *(long *)((long)puVar4 + lVar6 + 0x30) = lVar3;
        *(undefined **)((long)puVar4 + lVar6 + 0x38) = &DAT_00145ead;
        *(undefined **)((long)puVar4 + lVar6 + 0x40) = &DAT_00145eae;
        return puVar5;
      }
    }
  }
  return (undefined8 *)0x0;
}


// ===== 001ed3e4  FUN_001ed3e4 =====

undefined8 * FUN_001ed3e4(long *param_1,long *param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  void *pvVar11;
  
  if ((*(char *)(*param_2 + 8) == ')') && (iVar4 = *(int *)(*param_2 + 0xc), iVar4 - 2U < 4)) {
    pvVar11 = (void *)param_1[0x266];
    lVar7 = *(long *)((long)pvVar11 + 8);
    puVar6 = (undefined8 *)pvVar11;
    if (0xfef < lVar7 + 0x10U) {
      puVar6 = (undefined8 *)malloc(0x1000);
      if (puVar6 == (undefined8 *)0x0) goto LAB_001ed650;
      lVar7 = 0;
      *puVar6 = pvVar11;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    *(long *)((long)puVar6 + 8) = lVar7 + 0x10;
    puVar8 = (undefined8 *)((long)puVar6 + lVar7 + 0x10);
    *puVar8 = &PTR_FUN_0020d988;
    *(undefined4 *)((long)puVar6 + lVar7 + 0x18) = 0x1010128;
    *(int *)((long)puVar6 + lVar7 + 0x1c) = iVar4;
    *param_2 = (long)puVar8;
  }
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  if ((pbVar2 == pbVar3) || (*pbVar2 != 0x43)) {
    if (pbVar3 != pbVar2) {
      if ((long)pbVar3 - (long)pbVar2 == 1) {
        return (undefined8 *)0x0;
      }
      if (*pbVar2 != 0x44) {
        return (undefined8 *)0x0;
      }
      bVar5 = pbVar2[1];
      if (0x35 < bVar5) {
        return (undefined8 *)0x0;
      }
      if ((1L << ((ulong)bVar5 & 0x3f) & 0x37000000000000U) == 0) {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pbVar2 + 2);
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
      pvVar11 = (void *)param_1[0x266];
      lVar7 = *(long *)((long)pvVar11 + 8);
      puVar6 = (undefined8 *)pvVar11;
      if (0xfef < lVar7 + 0x20U) {
        puVar6 = (undefined8 *)malloc(0x1000);
        if (puVar6 == (undefined8 *)0x0) {
LAB_001ed650:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar7 = 0;
        *puVar6 = pvVar11;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar7 + 0x20;
      lVar9 = *param_2;
      uVar10 = (uint)bVar5;
      puVar8 = (undefined8 *)((long)puVar6 + lVar7 + 0x10);
      *puVar8 = &PTR_FUN_0020d9f8;
      *(undefined4 *)((long)puVar6 + lVar7 + 0x18) = 0x101012a;
      *(undefined1 *)((long)puVar6 + lVar7 + 0x28) = 1;
LAB_001ed62c:
      puVar8[2] = lVar9;
      *(uint *)((long)puVar8 + 0x1c) = uVar10 - 0x30;
      return puVar8;
    }
  }
  else {
    pbVar1 = pbVar2 + 1;
    *param_1 = (long)pbVar1;
    if (pbVar1 != pbVar3) {
      bVar5 = *pbVar1;
      if (bVar5 == 0x49) {
        pbVar1 = pbVar2 + 2;
        *param_1 = (long)pbVar1;
      }
      if ((pbVar3 != pbVar1) && (uVar10 = (uint)*pbVar1, uVar10 - 0x31 < 5)) {
        *param_1 = (long)(pbVar1 + 1);
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
        if ((bVar5 == 0x49) && (lVar7 = FUN_001eb464(param_1,param_3), lVar7 == 0)) {
          return (undefined8 *)0x0;
        }
        pvVar11 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar11 + 8);
        puVar6 = (undefined8 *)pvVar11;
        if (0xfef < lVar7 + 0x20U) {
          puVar6 = (undefined8 *)malloc(0x1000);
          if (puVar6 == (undefined8 *)0x0) goto LAB_001ed650;
          lVar7 = 0;
          *puVar6 = pvVar11;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar7 + 0x20;
        lVar9 = *param_2;
        puVar8 = (undefined8 *)((long)puVar6 + lVar7 + 0x10);
        *puVar8 = &PTR_FUN_0020d9f8;
        *(undefined4 *)((long)puVar6 + lVar7 + 0x18) = 0x101012a;
        *(undefined1 *)((long)puVar6 + lVar7 + 0x28) = 0;
        goto LAB_001ed62c;
      }
    }
  }
  return (undefined8 *)0x0;
}


// ===== 001ed654  FUN_001ed654 =====

undefined8 * FUN_001ed654(long *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  
  pbVar7 = (byte *)*param_1;
  pbVar5 = (byte *)param_1[1];
  puVar9 = param_2;
  if (pbVar7 != pbVar5) {
    do {
      if (*pbVar7 != 0x42) {
        return puVar9;
      }
      pbVar1 = pbVar7 + 1;
      *param_1 = (long)pbVar1;
      if ((pbVar5 == pbVar1) || (9 < *pbVar1 - 0x30)) {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pbVar7 + 2);
      uVar8 = (ulong)pbVar7[1];
      pbVar7 = pbVar7 + 2;
      while ((uVar8 = uVar8 - 0x30, pbVar5 != pbVar7 && (*pbVar7 - 0x30 < 10))) {
        *param_1 = (long)(pbVar7 + 1);
        uVar8 = (ulong)*pbVar7 + uVar8 * 10;
        pbVar7 = pbVar7 + 1;
      }
      if ((ulong)((long)pbVar5 - (long)pbVar7) < uVar8) {
        return (undefined8 *)0x0;
      }
      pbVar5 = pbVar7 + uVar8;
      *param_1 = (long)pbVar5;
      if (pbVar7 == pbVar5) {
        return (undefined8 *)0x0;
      }
      pvVar10 = (void *)param_1[0x266];
      lVar6 = *(long *)((long)pvVar10 + 8);
      puVar4 = (undefined8 *)pvVar10;
      if (0xfef < lVar6 + 0x30U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = 0;
        *puVar4 = pvVar10;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar6 + 0x30;
      uVar3 = *(undefined2 *)((long)puVar9 + 9);
      uVar2 = *(undefined1 *)((long)puVar9 + 0xb);
      param_2 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
      *param_2 = &PTR_FUN_0020da68;
      *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 8;
      *(undefined8 **)((long)puVar4 + lVar6 + 0x20) = puVar9;
      *(byte **)((long)puVar4 + lVar6 + 0x28) = pbVar7;
      *(byte **)((long)puVar4 + lVar6 + 0x30) = pbVar5;
      *(undefined2 *)((long)puVar4 + lVar6 + 0x19) = uVar3;
      *(undefined1 *)((long)puVar4 + lVar6 + 0x1b) = uVar2;
      pbVar7 = (byte *)*param_1;
      pbVar5 = (byte *)param_1[1];
      puVar9 = param_2;
    } while (pbVar7 != pbVar5);
  }
  return param_2;
}


// ===== 001ed7dc  FUN_001ed7dc =====

undefined8 FUN_001ed7dc(long *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pbVar1 = (byte *)*param_1;
  if ((byte *)param_1[1] == pbVar1) {
LAB_001ed810:
    if ((((ulong)(param_1[1] - (long)pbVar1) < 2) || (*pbVar1 != 0x44)) || (pbVar1[1] != 0x43)) {
      puVar6 = (undefined8 *)FUN_001f5cf0(param_1);
      goto LAB_001ed958;
    }
    *param_1 = (long)(pbVar1 + 2);
    lVar7 = param_1[2];
    lVar8 = param_1[3];
    local_50 = FUN_001f59e0(param_1);
    if (local_50 != 0) {
      do {
        FUN_001ec198(param_1 + 2,&local_50);
        pcVar2 = (char *)*param_1;
        if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) {
          lVar7 = (lVar8 - lVar7 >> 3) * 8;
          *param_1 = (long)(pcVar2 + 1);
          auVar10 = FUN_001f530c(param_1,param_1[2] + lVar7,param_1[3]);
          pvVar9 = (void *)param_1[0x266];
          param_1[3] = param_1[2] + lVar7;
          lVar7 = *(long *)((long)pvVar9 + 8);
          puVar4 = (undefined8 *)pvVar9;
          if (0xfef < lVar7 + 0x20U) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar7 = 0;
            *puVar4 = pvVar9;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
          puVar6 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
          *puVar6 = &PTR_FUN_0020dad8;
          *(undefined4 *)((long)puVar4 + lVar7 + 0x18) = 0x101012e;
          *(undefined1 (*) [16])((long)puVar4 + lVar7 + 0x20) = auVar10;
          goto LAB_001ed960;
        }
        local_50 = FUN_001f59e0(param_1);
      } while (local_50 != 0);
    }
  }
  else {
    if (*pbVar1 == 0x55) {
      puVar6 = (undefined8 *)FUN_001f1b0c(param_1);
    }
    else {
      if (8 < *pbVar1 - 0x31) goto LAB_001ed810;
      puVar6 = (undefined8 *)FUN_001f59e0(param_1);
    }
LAB_001ed958:
    if (puVar6 != (undefined8 *)0x0) {
LAB_001ed960:
      uVar5 = FUN_001ed654(param_1,puVar6);
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return uVar5;
      }
      goto LAB_001ed9a8;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return 0;
  }
LAB_001ed9a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ed9b0  FUN_001ed9b0 =====

void FUN_001ed9b0(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *__src;
  size_t __n;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  __src = *(void **)(param_1 + 0x10);
  __n = *(long *)(param_1 + 0x18) - (long)__src;
  if (__n != 0) {
    lVar3 = param_2[1];
    __size = lVar3 + __n;
    if (__size < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (__size <= uVar2) {
        __size = uVar2;
      }
      param_2[2] = __size;
      pvVar1 = realloc((void *)*param_2,__size);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    memmove((void *)((long)pvVar1 + lVar3),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 001eda3c  FUN_001eda3c =====

undefined1  [16] FUN_001eda3c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}


// ===== 001eda48  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001eda4c  FUN_001eda4c =====

void FUN_001eda4c(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  if (*(char *)((long)plVar4 + 9) != '\x01') {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  lVar3 = param_2[1];
  __size = lVar3 + 2;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((long)pvVar1 + lVar3) = 0x3a3a;
  param_2[1] = param_2[1] + 2;
  plVar4 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001edb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 001edb40  FUN_001edb40 =====

void FUN_001edb40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001edb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 001edb50  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001edb54  FUN_001edb54 =====

void FUN_001edb54(undefined8 *param_1,undefined8 *param_2)

{
  void *__dest;
  undefined8 *puVar1;
  undefined8 uVar2;
  size_t __n;
  undefined8 *__src;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)param_1[2]) {
    __src = (undefined8 *)*param_1;
    __n = (long)puVar1 - (long)__src;
    if (param_1 + 3 == __src) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) goto LAB_001edc08;
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      *param_1 = __dest;
    }
    else {
      __dest = realloc(__src,__n * 2);
      *param_1 = __dest;
      if (__dest == (void *)0x0) {
LAB_001edc08:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    puVar1 = (undefined8 *)((long)__dest + __n);
    param_1[1] = puVar1;
    param_1[2] = (void *)((long)__dest + ((long)__n >> 2) * 8);
  }
  uVar2 = *param_2;
  param_1[1] = puVar1 + 1;
  *puVar1 = uVar2;
  return;
}


// ===== 001edc0c  FUN_001edc0c =====

byte FUN_001edc0c(long param_1)

{
  char cVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    cVar1 = *(char *)((long)*(undefined8 **)(param_1 + 0x18) + 9);
    if (cVar1 == '\x02') {
                    /* try { // try from 001edc4c to 001edc4f has its CatchHandler @ 001edc74 */
      bVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    }
    else {
      bVar2 = cVar1 == '\0';
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}


// ===== 001edc7c  FUN_001edc7c =====

byte FUN_001edc7c(long param_1)

{
  char cVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    cVar1 = *(char *)((long)*(long **)(param_1 + 0x18) + 10);
    if (cVar1 == '\x02') {
                    /* try { // try from 001edcbc to 001edcbf has its CatchHandler @ 001edce4 */
      bVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    }
    else {
      bVar2 = cVar1 == '\0';
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}


// ===== 001edcec  FUN_001edcec =====

byte FUN_001edcec(long param_1)

{
  char cVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    cVar1 = *(char *)((long)*(long **)(param_1 + 0x18) + 0xb);
    if (cVar1 == '\x02') {
                    /* try { // try from 001edd2c to 001edd2f has its CatchHandler @ 001edd54 */
      bVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    }
    else {
      bVar2 = cVar1 == '\0';
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}


// ===== 001edd5c  FUN_001edd5c =====

long FUN_001edd5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 001edd88 to 001edd8b has its CatchHandler @ 001edda4 */
    lVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return lVar1;
}


// ===== 001eddac  FUN_001eddac =====

void FUN_001eddac(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 001eddd8 to 001edddb has its CatchHandler @ 001eddec */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


// ===== 001eddf4  FUN_001eddf4 =====

void FUN_001eddf4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 001ede20 to 001ede23 has its CatchHandler @ 001ede34 */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


// ===== 001ede3c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001ede40  FUN_001ede40 =====

undefined8 * FUN_001ede40(long *param_1)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined **ppuVar13;
  uint uVar14;
  char *pcVar15;
  undefined1 uVar16;
  undefined8 *puVar17;
  long *plVar18;
  void *pvVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pcVar15 = (char *)*param_1;
  pcVar12 = (char *)param_1[1];
  if ((ulong)((long)pcVar12 - (long)pcVar15) < 2) goto LAB_001ede78;
  cVar1 = *pcVar15;
  if (cVar1 == 'g') {
    if (pcVar15[1] == 's') {
      pcVar15 = pcVar15 + 2;
      *param_1 = (long)pcVar15;
      if ((ulong)((long)pcVar12 - (long)pcVar15) < 2) goto LAB_001ede78;
      uVar16 = 1;
    }
    else {
      uVar16 = 0;
    }
    cVar1 = *pcVar15;
  }
  else {
    uVar16 = 0;
  }
  switch(cVar1) {
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
switchD_001edefc_caseD_31:
    puVar8 = (undefined8 *)FUN_001f115c(param_1);
    goto LAB_001ef6a8;
  default:
    puVar8 = (undefined8 *)0x0;
    if ((10 < (ulong)((long)pcVar12 - (long)pcVar15)) && (cVar1 == 'u')) {
      if ((((pcVar15[1] == '8') &&
           ((((pcVar15[2] == '_' && (pcVar15[3] == '_')) && (pcVar15[4] == 'u')) &&
            ((pcVar15[5] == 'u' && (pcVar15[6] == 'i')))))) && (pcVar15[7] == 'd')) &&
         (((pcVar15[8] == 'o' && (pcVar15[9] == 'f')) && (pcVar15[10] == 't')))) {
        *param_1 = (long)(pcVar15 + 0xb);
        lVar5 = FUN_001e9ce4(param_1);
      }
      else {
        if ((((((pcVar15[1] != '8') || (pcVar15[2] != '_')) || (pcVar15[3] != '_')) ||
             ((pcVar15[4] != 'u' || (pcVar15[5] != 'u')))) ||
            ((pcVar15[6] != 'i' || ((pcVar15[7] != 'd' || (pcVar15[8] != 'o')))))) ||
           ((pcVar15[9] != 'f' || (pcVar15[10] != 'z')))) break;
        *param_1 = (long)(pcVar15 + 0xb);
        lVar5 = FUN_001ede40(param_1);
      }
      if (lVar5 == 0) break;
      puVar17 = (undefined8 *)param_1[0x266];
      lVar10 = puVar17[1];
      puVar8 = puVar17;
      if (0xfef < lVar10 + 0x20U) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
        lVar10 = 0;
        *puVar8 = puVar17;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      uVar14 = 0x140;
      lVar4 = lVar10 + 0x20;
      lVar10 = (long)puVar8 + lVar10;
      ppuVar13 = &PTR_FUN_0020d918;
LAB_001ef2e0:
      puVar8[1] = lVar4;
      puVar8 = (undefined8 *)(lVar10 + 0x10);
      *puVar8 = ppuVar13;
      *(uint *)(lVar10 + 0x18) = uVar14 | 0x1010000;
      *(long *)(lVar10 + 0x20) = lVar5;
    }
    goto switchD_001edf74_caseD_66;
  case 'L':
    puVar8 = (undefined8 *)FUN_001efd04(param_1);
    goto LAB_001ef6a8;
  case 'T':
    puVar8 = (undefined8 *)FUN_001ecf20(param_1);
    goto LAB_001ef6a8;
  case 'a':
    puVar8 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'N':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_0014545b;
      break;
    default:
      goto switchD_001edf74_caseD_66;
    case 'S':
      puVar6 = &DAT_00145859;
      goto LAB_001ef698;
    case 'a':
      puVar6 = &DAT_00145daa;
      *param_1 = (long)(pcVar15 + 2);
      break;
    case 'd':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar8 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar10 = 0;
          *puVar8 = puVar17;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar8 + lVar10;
        puVar6 = &DAT_00145dec;
        goto LAB_001ef670;
      }
      goto LAB_001ede78;
    case 'n':
      puVar6 = &DAT_00145dec;
LAB_001ef698:
      *param_1 = (long)(pcVar15 + 2);
      puVar7 = puVar6 + 1;
      goto LAB_001ef6a0;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001e9ce4(param_1);
      goto joined_r0x001eeffc;
    case 'z':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
joined_r0x001eeffc:
      if (lVar5 == 0) goto LAB_001ede78;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar17 = (undefined8 *)pvVar19;
      if (0xfef < lVar10 + 0x40U) {
        puVar17 = (undefined8 *)malloc(0x1000);
        if (puVar17 == (undefined8 *)0x0) {
LAB_001efcf8:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar10 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
      pcVar15 = "alignof (";
      puVar8 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
      *puVar8 = &PTR_FUN_0020d6e8;
      *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010134;
      pcVar12 = "";
LAB_001ef0f0:
      puVar8[2] = pcVar15;
      puVar8[3] = pcVar12;
      puVar8[4] = lVar5;
LAB_001ef0fc:
      puVar8[5] = &DAT_00145ead;
      puVar8[6] = &DAT_00145eae;
      goto switchD_001edf74_caseD_66;
    }
    goto LAB_001eefe4;
  case 'c':
    puVar8 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001e9ce4(param_1);
      if ((lVar5 == 0) || (lVar10 = FUN_001ede40(param_1), lVar10 == 0)) break;
      pvVar19 = (void *)param_1[0x266];
      lVar4 = *(long *)((long)pvVar19 + 8);
      puVar8 = (undefined8 *)pvVar19;
      if (0xfef < lVar4 + 0x30U) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
        lVar4 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      pcVar15 = "const_cast";
      *(long *)((long)puVar8 + 8) = lVar4 + 0x30;
      puVar8 = (undefined8 *)((long)puVar8 + lVar4 + 0x10);
      *puVar8 = &PTR_FUN_0020cfe8;
      pcVar12 = "";
LAB_001ef4dc:
      *(undefined4 *)(puVar8 + 1) = 0x1010135;
      puVar8[2] = pcVar15;
      puVar8[3] = pcVar12;
      puVar8[4] = lVar5;
      puVar8[5] = lVar10;
    default:
      goto switchD_001edf74_caseD_66;
    case 'l':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if (lVar5 != 0) {
        lVar10 = param_1[2];
        lVar4 = param_1[3];
        while( true ) {
          pcVar15 = (char *)*param_1;
          if ((pcVar15 != (char *)param_1[1]) && (*pcVar15 == 'E')) {
            lVar10 = (lVar4 - lVar10 >> 3) * 8;
            *param_1 = (long)(pcVar15 + 1);
            auVar21 = FUN_001f530c(param_1,param_1[2] + lVar10,param_1[3]);
            puVar17 = (undefined8 *)param_1[0x266];
            param_1[3] = param_1[2] + lVar10;
            lVar10 = puVar17[1];
            puVar8 = puVar17;
            if (0xfef < lVar10 + 0x30U) {
              puVar8 = (undefined8 *)malloc(0x1000);
              if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
              lVar10 = 0;
              *puVar8 = puVar17;
              puVar8[1] = 0;
              param_1[0x266] = (long)puVar8;
            }
            uVar14 = 0x137;
            lVar4 = lVar10 + 0x30;
            lVar10 = (long)puVar8 + lVar10;
            ppuVar13 = &PTR_FUN_0020d058;
            goto LAB_001ef93c;
          }
          local_60 = FUN_001ede40(param_1);
          if (local_60 == 0) break;
          FUN_001ec198(param_1 + 2,&local_60);
        }
      }
      break;
    case 'm':
      puVar6 = &DAT_001453aa;
      goto LAB_001ef698;
    case 'o':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar8 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar10 = 0;
          *puVar8 = puVar17;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar8 + lVar10;
        puVar6 = &DAT_00145dee;
        goto LAB_001ef670;
      }
      break;
    case 'v':
      if (1 < (ulong)((long)pcVar12 - (long)pcVar15)) {
        lVar10 = param_1[0x61];
        *param_1 = (long)(pcVar15 + 2);
        *(undefined1 *)(param_1 + 0x61) = 0;
                    /* try { // try from 001ee9f0 to 001ee9f7 has its CatchHandler @ 001efcfc */
        lVar5 = FUN_001e9ce4(param_1);
        *(char *)(param_1 + 0x61) = (char)lVar10;
        if (lVar5 != 0) {
          pcVar15 = (char *)*param_1;
          if ((pcVar15 != (char *)param_1[1]) && (*pcVar15 == '_')) {
            pcVar15 = pcVar15 + 1;
            *param_1 = (long)pcVar15;
            lVar10 = param_1[2];
            lVar4 = param_1[3];
            if (pcVar15 == (char *)param_1[1]) goto LAB_001eea4c;
            while (*pcVar15 != 'E') {
LAB_001eea4c:
              do {
                local_60 = FUN_001ede40(param_1);
                if (local_60 == 0) goto LAB_001ede78;
                FUN_001ec198(param_1 + 2,&local_60);
                pcVar15 = (char *)*param_1;
              } while (pcVar15 == (char *)param_1[1]);
            }
            lVar10 = (lVar4 - lVar10 >> 3) * 8;
            *param_1 = (long)(pcVar15 + 1);
            auVar21 = FUN_001f530c(param_1,param_1[2] + lVar10,param_1[3]);
            puVar17 = (undefined8 *)param_1[0x266];
            param_1[3] = param_1[2] + lVar10;
            lVar10 = puVar17[1];
            puVar8 = puVar17;
            if (0xfef < lVar10 + 0x30U) {
              puVar8 = (undefined8 *)malloc(0x1000);
              if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
              lVar10 = 0;
              *puVar8 = puVar17;
              puVar8[1] = 0;
              param_1[0x266] = (long)puVar8;
            }
            uVar14 = 0x13c;
            lVar4 = lVar10 + 0x30;
            lVar10 = (long)puVar8 + lVar10;
            ppuVar13 = &PTR_FUN_0020d0c8;
            goto LAB_001ef93c;
          }
          local_60 = FUN_001ede40(param_1);
          if (local_60 != 0) {
            pvVar19 = (void *)param_1[0x266];
            lVar10 = *(long *)((long)pvVar19 + 8);
            puVar8 = (undefined8 *)pvVar19;
            if (0xfef < lVar10 + 0x10U) {
              puVar8 = (undefined8 *)malloc(0x1000);
              if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
              lVar10 = 0;
              *puVar8 = pvVar19;
              puVar8[1] = 0;
              param_1[0x266] = (long)puVar8;
            }
            *(long *)((long)puVar8 + 8) = lVar10 + 0x10;
            plVar18 = (long *)((long)puVar8 + lVar10 + 0x10);
            *plVar18 = local_60;
            pvVar19 = (void *)param_1[0x266];
            lVar10 = *(long *)((long)pvVar19 + 8);
            puVar17 = (undefined8 *)pvVar19;
            if (0xfef < lVar10 + 0x30U) {
              puVar17 = (undefined8 *)malloc(0x1000);
              if (puVar17 == (undefined8 *)0x0) goto LAB_001efcf8;
              lVar10 = 0;
              *puVar17 = pvVar19;
              puVar17[1] = 0;
              param_1[0x266] = (long)puVar17;
            }
            *(long *)((long)puVar17 + 8) = lVar10 + 0x30;
            puVar8 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
            *puVar8 = &PTR_FUN_0020d0c8;
            *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x101013c;
            *(long *)((long)puVar17 + lVar10 + 0x20) = lVar5;
            *(long **)((long)puVar17 + lVar10 + 0x28) = plVar18;
            *(undefined8 *)((long)puVar17 + lVar10 + 0x30) = 1;
            goto switchD_001edf74_caseD_66;
          }
        }
      }
    }
    break;
  case 'd':
    puVar8 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'V':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_001450d6;
      goto LAB_001eefe4;
    case 'a':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if (lVar5 == 0) goto LAB_001ede78;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar17 = (undefined8 *)pvVar19;
      if (0xfef < lVar10 + 0x20U) {
        puVar17 = (undefined8 *)malloc(0x1000);
        if (puVar17 == (undefined8 *)0x0) goto LAB_001efcf8;
        lVar10 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar10 + 0x20;
      puVar8 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
      *puVar8 = &PTR_FUN_0020d138;
      *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010139;
      *(long *)((long)puVar17 + lVar10 + 0x20) = lVar5;
      *(undefined1 *)((long)puVar17 + lVar10 + 0x28) = uVar16;
      *(undefined1 *)((long)puVar17 + lVar10 + 0x29) = 1;
      break;
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001e9ce4(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_001ede40(param_1), lVar10 != 0)) {
        pvVar19 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar19 + 8);
        puVar8 = (undefined8 *)pvVar19;
        if (0xfef < lVar4 + 0x30U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar4 = 0;
          *puVar8 = pvVar19;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        pcVar15 = "dynamic_cast";
        *(long *)((long)puVar8 + 8) = lVar4 + 0x30;
        puVar8 = (undefined8 *)((long)puVar8 + lVar4 + 0x10);
        *puVar8 = &PTR_FUN_0020cfe8;
        pcVar12 = "";
        goto LAB_001ef4dc;
      }
      goto LAB_001ede78;
    case 'e':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar8 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar10 = 0;
          *puVar8 = puVar17;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar8 + lVar10;
        puVar6 = &DAT_00145235;
        goto LAB_001ef670;
      }
      goto LAB_001ede78;
    case 'l':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if (lVar5 == 0) goto LAB_001ede78;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar17 = (undefined8 *)pvVar19;
      if (0xfef < lVar10 + 0x20U) {
        puVar17 = (undefined8 *)malloc(0x1000);
        if (puVar17 == (undefined8 *)0x0) goto LAB_001efcf8;
        lVar10 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar10 + 0x20;
      puVar8 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
      *puVar8 = &PTR_FUN_0020d138;
      *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010139;
      *(long *)((long)puVar17 + lVar10 + 0x20) = lVar5;
      *(undefined1 *)((long)puVar17 + lVar10 + 0x28) = uVar16;
      *(undefined1 *)((long)puVar17 + lVar10 + 0x29) = 0;
      break;
    case 'n':
      goto switchD_001edefc_caseD_31;
    case 's':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if ((lVar5 == 0) || (lVar10 = FUN_001ede40(param_1), lVar10 == 0)) goto LAB_001ede78;
      puVar17 = (undefined8 *)param_1[0x266];
      lVar4 = puVar17[1];
      puVar8 = puVar17;
      if (0xfef < lVar4 + 0x30U) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
        lVar4 = 0;
        *puVar8 = puVar17;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      lVar11 = (long)puVar8 + lVar4;
      puVar6 = &UNK_00145710;
LAB_001ef564:
      puVar8[1] = lVar4 + 0x30;
      puVar8 = (undefined8 *)(lVar11 + 0x10);
      *puVar8 = &PTR_FUN_0020d3d8;
      puVar7 = puVar6 + 2;
LAB_001ef5f8:
      *(undefined4 *)(puVar8 + 1) = 0x1010133;
      puVar8[2] = lVar5;
      puVar8[3] = puVar6;
      puVar8[4] = puVar7;
      puVar8[5] = lVar10;
      break;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_001ede40(param_1), lVar10 != 0)) {
        pvVar19 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar19 + 8);
        puVar8 = (undefined8 *)pvVar19;
        if (0xfef < lVar4 + 0x30U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar4 = 0;
          *puVar8 = pvVar19;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        puVar6 = &DAT_00144d1e;
        *(long *)((long)puVar8 + 8) = lVar4 + 0x30;
        puVar8 = (undefined8 *)((long)puVar8 + lVar4 + 0x10);
        *puVar8 = &PTR_FUN_0020d3d8;
        puVar7 = &DAT_00144d1f;
        goto LAB_001ef5f8;
      }
      goto LAB_001ede78;
    case 'v':
      puVar6 = &DAT_00144d20;
      goto LAB_001ef698;
    }
    goto switchD_001edf74_caseD_66;
  case 'e':
    cVar1 = pcVar15[1];
    if (cVar1 == 'O') {
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_0014564e;
    }
    else {
      if (cVar1 != 'q') {
        if (cVar1 == 'o') {
          puVar6 = &DAT_00145921;
          goto LAB_001ef698;
        }
        break;
      }
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00145651;
    }
    goto LAB_001eefe4;
  case 'f':
    if (((ulong)((long)pcVar12 - (long)pcVar15) < 2) ||
       ((pcVar15[1] != 'p' &&
        ((((ulong)((long)pcVar12 - (long)pcVar15) < 3 || (pcVar15[1] != 'L')) ||
         (9 < (byte)pcVar15[2] - 0x30)))))) {
      puVar8 = (undefined8 *)FUN_001f0ac0(param_1);
    }
    else {
      puVar8 = (undefined8 *)FUN_001f0784(param_1);
    }
    goto LAB_001ef6a8;
  case 'g':
    if (pcVar15[1] == 't') {
      puVar6 = &DAT_00145654;
      goto LAB_001ef698;
    }
    if (pcVar15[1] == 'e') {
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00144c3b;
      goto LAB_001eefe4;
    }
    break;
  case 'i':
    if (pcVar15[1] != 'l') {
      if (pcVar15[1] == 'x') {
        *param_1 = (long)(pcVar15 + 2);
        lVar5 = FUN_001ede40(param_1);
        if ((lVar5 != 0) && (lVar10 = FUN_001ede40(param_1), lVar10 != 0)) {
          pvVar19 = (void *)param_1[0x266];
          lVar4 = *(long *)((long)pvVar19 + 8);
          puVar17 = (undefined8 *)pvVar19;
          if (0xfef < lVar4 + 0x20U) {
            puVar17 = (undefined8 *)malloc(0x1000);
            if (puVar17 == (undefined8 *)0x0) goto LAB_001efcf8;
            lVar4 = 0;
            *puVar17 = pvVar19;
            puVar17[1] = 0;
            param_1[0x266] = (long)puVar17;
          }
          *(long *)((long)puVar17 + 8) = lVar4 + 0x20;
          puVar8 = (undefined8 *)((long)puVar17 + lVar4 + 0x10);
          *puVar8 = &PTR_FUN_0020d448;
          *(undefined4 *)((long)puVar17 + lVar4 + 0x18) = 0x1010130;
          *(long *)((long)puVar17 + lVar4 + 0x20) = lVar5;
          *(long *)((long)puVar17 + lVar4 + 0x28) = lVar10;
          goto switchD_001edf74_caseD_66;
        }
      }
      break;
    }
    pcVar15 = pcVar15 + 2;
    *param_1 = (long)pcVar15;
    lVar5 = param_1[2];
    lVar10 = param_1[3];
    if (pcVar15 == pcVar12) goto LAB_001ee664;
    while (*pcVar15 != 'E') {
LAB_001ee664:
      do {
        local_60 = FUN_001f1790(param_1);
        if (local_60 == 0) goto LAB_001ede78;
        FUN_001ec198(param_1 + 2,&local_60);
        pcVar15 = (char *)*param_1;
      } while (pcVar15 == (char *)param_1[1]);
    }
    lVar5 = (lVar10 - lVar5 >> 3) * 8;
    *param_1 = (long)(pcVar15 + 1);
    auVar21 = FUN_001f530c(param_1,param_1[2] + lVar5,param_1[3]);
    pvVar19 = (void *)param_1[0x266];
    param_1[3] = param_1[2] + lVar5;
    lVar5 = *(long *)((long)pvVar19 + 8);
    puVar17 = (undefined8 *)pvVar19;
    if (0xfef < lVar5 + 0x30U) {
      puVar17 = (undefined8 *)malloc(0x1000);
      if (puVar17 == (undefined8 *)0x0) goto LAB_001efcf8;
      lVar5 = 0;
      *puVar17 = pvVar19;
      puVar17[1] = 0;
      param_1[0x266] = (long)puVar17;
    }
    *(long *)((long)puVar17 + 8) = lVar5 + 0x30;
    puVar8 = (undefined8 *)((long)puVar17 + lVar5 + 0x10);
    *puVar8 = &PTR_FUN_0020d598;
    *(undefined4 *)((long)puVar17 + lVar5 + 0x18) = 0x101013d;
    *(undefined8 *)((long)puVar17 + lVar5 + 0x20) = 0;
    *(undefined1 (*) [16])((long)puVar17 + lVar5 + 0x28) = auVar21;
    goto switchD_001edf74_caseD_66;
  case 'l':
    puVar8 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'S':
      puVar6 = &UNK_0014599d;
LAB_001eed6c:
      *param_1 = (long)(pcVar15 + 2);
      puVar7 = puVar6 + 3;
      goto LAB_001ef6a0;
    default:
      goto switchD_001edf74_caseD_66;
    case 'e':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00145c4a;
      break;
    case 's':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00145ae1;
      break;
    case 't':
      puVar6 = &DAT_00144bd5;
      goto LAB_001ef698;
    }
    goto LAB_001eefe4;
  case 'm':
    puVar8 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'I':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_001450d9;
      goto LAB_001eefe4;
    case 'L':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_001453ac;
      goto LAB_001eefe4;
    case 'i':
      puVar6 = &DAT_00145124;
      goto LAB_001ef698;
    case 'l':
      puVar6 = &DAT_00145235;
      goto LAB_001ef698;
    case 'm':
      pcVar9 = pcVar15 + 2;
      *param_1 = (long)pcVar9;
      if ((pcVar9 == pcVar12) || (*pcVar9 != '_')) {
        lVar5 = FUN_001ede40(param_1);
        if (lVar5 == 0) goto LAB_001ede78;
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar8 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar10 = 0;
          *puVar8 = puVar17;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        lVar4 = (long)puVar8 + lVar10;
        puVar6 = &DAT_00145eaf;
LAB_001ef734:
        puVar8[1] = lVar10 + 0x30;
        puVar8 = (undefined8 *)(lVar4 + 0x10);
        *puVar8 = &PTR_FUN_0020d608;
        *(undefined4 *)(lVar4 + 0x18) = 0x1010131;
        *(long *)(lVar4 + 0x20) = lVar5;
        *(undefined **)(lVar4 + 0x28) = puVar6;
        *(undefined **)(lVar4 + 0x30) = puVar6 + 2;
      }
      else {
        *param_1 = (long)(pcVar15 + 3);
        lVar5 = FUN_001ede40(param_1);
        if (lVar5 == 0) goto LAB_001ede78;
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar8 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar10 = 0;
          *puVar8 = puVar17;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        lVar4 = (long)puVar8 + lVar10;
        puVar6 = &DAT_00145eaf;
LAB_001eee88:
        puVar8[1] = lVar10 + 0x30;
        puVar8 = (undefined8 *)(lVar4 + 0x10);
        *puVar8 = &PTR_FUN_0020cf78;
        puVar7 = puVar6 + 2;
LAB_001ef67c:
        *(undefined4 *)(puVar8 + 1) = 0x101013a;
        puVar8[2] = puVar6;
        puVar8[3] = puVar7;
        puVar8[4] = lVar5;
      }
    }
    goto switchD_001edf74_caseD_66;
  case 'n':
    cVar1 = pcVar15[1];
    puVar8 = (undefined8 *)0x0;
    switch(cVar1) {
    case 'a':
    case 'w':
      if ((1 < (ulong)((long)pcVar12 - (long)pcVar15)) && ((cVar1 == 'w' || (cVar1 == 'a')))) {
        pcVar9 = pcVar15 + 2;
        *param_1 = (long)pcVar9;
        plVar18 = param_1 + 2;
        lVar5 = *plVar18;
        lVar10 = param_1[3];
        bVar3 = 1 < (ulong)((long)pcVar12 - (long)pcVar15) && cVar1 == 'a';
        if (pcVar9 == pcVar12) goto LAB_001ee0b4;
        while (*pcVar9 != '_') {
LAB_001ee0b4:
          do {
            local_60 = FUN_001ede40(param_1);
            if (local_60 == 0) goto LAB_001ede78;
            FUN_001ec198(plVar18,&local_60);
            pcVar9 = (char *)*param_1;
          } while (pcVar9 == (char *)param_1[1]);
        }
        lVar5 = (lVar10 - lVar5 >> 3) * 8;
        *param_1 = (long)(pcVar9 + 1);
        auVar21 = FUN_001f530c(param_1,param_1[2] + lVar5,param_1[3]);
        param_1[3] = param_1[2] + lVar5;
        lVar5 = FUN_001e9ce4(param_1);
        if (lVar5 != 0) {
          pcVar15 = (char *)*param_1;
          pcVar12 = (char *)param_1[1];
          if ((((ulong)((long)pcVar12 - (long)pcVar15) < 2) || (*pcVar15 != 'p')) ||
             (pcVar15[1] != 'i')) {
            if ((pcVar15 == pcVar12) || (*pcVar15 != 'E')) break;
            pvVar19 = (void *)param_1[0x266];
            *param_1 = (long)(pcVar15 + 1);
            lVar10 = *(long *)((long)pvVar19 + 8);
            puVar17 = (undefined8 *)pvVar19;
            if (0xfef < lVar10 + 0x40U) {
              puVar17 = (undefined8 *)malloc(0x1000);
              if (puVar17 == (undefined8 *)0x0) goto LAB_001efcf8;
              lVar10 = 0;
              *puVar17 = pvVar19;
              puVar17[1] = 0;
              param_1[0x266] = (long)puVar17;
            }
            *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
            puVar8 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
            *puVar8 = &PTR_FUN_0020d678;
            *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010138;
            *(undefined1 (*) [16])((long)puVar17 + lVar10 + 0x20) = auVar21;
            *(undefined8 *)((long)puVar17 + lVar10 + 0x38) = 0;
            *(undefined8 *)((long)puVar17 + lVar10 + 0x40) = 0;
            *(long *)((long)puVar17 + lVar10 + 0x30) = lVar5;
            *(undefined1 *)((long)puVar17 + lVar10 + 0x48) = 0;
            *(bool *)((long)puVar17 + lVar10 + 0x49) = bVar3;
          }
          else {
            lVar10 = param_1[2];
            lVar4 = param_1[3];
            pcVar15 = pcVar15 + 2;
            *param_1 = (long)pcVar15;
            if (pcVar15 == pcVar12) goto LAB_001ef9ec;
            while (*pcVar15 != 'E') {
LAB_001ef9ec:
              do {
                local_60 = FUN_001ede40(param_1);
                if (local_60 == 0) goto LAB_001ede78;
                FUN_001ec198(plVar18,&local_60);
                pcVar15 = (char *)*param_1;
              } while (pcVar15 == (char *)param_1[1]);
            }
            lVar10 = (lVar4 - lVar10 >> 3) * 8;
            *param_1 = (long)(pcVar15 + 1);
            auVar22 = FUN_001f530c(param_1,param_1[2] + lVar10,param_1[3]);
            pvVar19 = (void *)param_1[0x266];
            param_1[3] = param_1[2] + lVar10;
            lVar10 = *(long *)((long)pvVar19 + 8);
            puVar17 = (undefined8 *)pvVar19;
            if (0xfef < lVar10 + 0x40U) {
              puVar17 = (undefined8 *)malloc(0x1000);
              if (puVar17 == (undefined8 *)0x0) goto LAB_001efcf8;
              lVar10 = 0;
              *puVar17 = pvVar19;
              puVar17[1] = 0;
              param_1[0x266] = (long)puVar17;
            }
            *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
            puVar8 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
            *puVar8 = &PTR_FUN_0020d678;
            *(undefined1 (*) [16])((long)puVar17 + lVar10 + 0x20) = auVar21;
            *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010138;
            *(long *)((long)puVar17 + lVar10 + 0x30) = lVar5;
            *(undefined1 (*) [16])((long)puVar17 + lVar10 + 0x38) = auVar22;
            *(undefined1 *)((long)puVar17 + lVar10 + 0x48) = 0;
            *(bool *)((long)puVar17 + lVar10 + 0x49) = bVar3;
          }
          goto switchD_001edf74_caseD_66;
        }
      }
      break;
    default:
      goto switchD_001edf74_caseD_66;
    case 'e':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00145bba;
      goto LAB_001eefe4;
    case 'g':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar8 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar10 = 0;
          *puVar8 = puVar17;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar8 + lVar10;
        puVar6 = &DAT_00145124;
LAB_001ef670:
        puVar8[1] = lVar4;
        puVar8 = (undefined8 *)(lVar10 + 0x10);
        *puVar8 = &PTR_FUN_0020cf78;
        puVar7 = puVar6 + 1;
        goto LAB_001ef67c;
      }
      break;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar8 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar10 = 0;
          *puVar8 = puVar17;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar8 + lVar10;
        puVar6 = &DAT_00145585;
        goto LAB_001ef670;
      }
      break;
    case 'x':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if (lVar5 == 0) break;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar17 = (undefined8 *)pvVar19;
      if (0xfef < lVar10 + 0x40U) {
        puVar17 = (undefined8 *)malloc(0x1000);
        if (puVar17 == (undefined8 *)0x0) goto LAB_001efcf8;
        lVar10 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
      pcVar15 = "noexcept (";
      puVar8 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
      *puVar8 = &PTR_FUN_0020d6e8;
      *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010134;
      pcVar12 = "";
      goto LAB_001ef0f0;
    }
    break;
  case 'o':
    puVar8 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'R':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00145923;
      break;
    default:
      goto switchD_001edf74_caseD_66;
    case 'n':
      goto switchD_001edefc_caseD_31;
    case 'o':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_0014585b;
      break;
    case 'r':
      puVar6 = &DAT_00145dad;
      goto LAB_001ef698;
    }
    goto LAB_001eefe4;
  case 'p':
    puVar8 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'L':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_0014578a;
      goto LAB_001eefe4;
    default:
      goto switchD_001edf74_caseD_66;
    case 'l':
      puVar6 = &DAT_00145926;
      goto LAB_001ef698;
    case 'm':
      puVar6 = &UNK_0014545e;
      goto LAB_001eed6c;
    case 'p':
      pcVar9 = pcVar15 + 2;
      *param_1 = (long)pcVar9;
      if ((pcVar9 == pcVar12) || (*pcVar9 != '_')) {
        lVar5 = FUN_001ede40(param_1);
        if (lVar5 != 0) {
          puVar17 = (undefined8 *)param_1[0x266];
          lVar10 = puVar17[1];
          puVar8 = puVar17;
          if (0xfef < lVar10 + 0x30U) {
            puVar8 = (undefined8 *)malloc(0x1000);
            if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
            lVar10 = 0;
            *puVar8 = puVar17;
            puVar8[1] = 0;
            param_1[0x266] = (long)puVar8;
          }
          lVar4 = (long)puVar8 + lVar10;
          puVar6 = &DAT_00144bd7;
          goto LAB_001ef734;
        }
      }
      else {
        *param_1 = (long)(pcVar15 + 3);
        lVar5 = FUN_001ede40(param_1);
        if (lVar5 != 0) {
          puVar17 = (undefined8 *)param_1[0x266];
          lVar10 = puVar17[1];
          puVar8 = puVar17;
          if (0xfef < lVar10 + 0x30U) {
            puVar8 = (undefined8 *)malloc(0x1000);
            if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
            lVar10 = 0;
            *puVar8 = puVar17;
            puVar8[1] = 0;
            param_1[0x266] = (long)puVar8;
          }
          lVar4 = (long)puVar8 + lVar10;
          puVar6 = &DAT_00144bd7;
          goto LAB_001eee88;
        }
      }
      break;
    case 's':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar8 = puVar17;
        if (0xfef < lVar10 + 0x30U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar10 = 0;
          *puVar8 = puVar17;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        lVar4 = lVar10 + 0x30;
        lVar10 = (long)puVar8 + lVar10;
        puVar6 = &DAT_00145926;
        goto LAB_001ef670;
      }
      break;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_001ede40(param_1), lVar10 != 0)) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar4 = puVar17[1];
        puVar8 = puVar17;
        if (0xfef < lVar4 + 0x30U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar4 = 0;
          *puVar8 = puVar17;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        lVar11 = (long)puVar8 + lVar4;
        puVar6 = &DAT_00145a74;
        goto LAB_001ef564;
      }
    }
    break;
  case 'q':
    if (pcVar15[1] == 'u') {
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_001ede40(param_1), lVar10 != 0)) {
        lVar4 = FUN_001ede40(param_1);
        auVar21._8_8_ = lVar4;
        auVar21._0_8_ = lVar10;
        if (lVar4 != 0) {
          puVar17 = (undefined8 *)param_1[0x266];
          lVar10 = puVar17[1];
          puVar8 = puVar17;
          if (0xfef < lVar10 + 0x30U) {
            puVar8 = (undefined8 *)malloc(0x1000);
            if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
            lVar10 = 0;
            *puVar8 = puVar17;
            puVar8[1] = 0;
            param_1[0x266] = (long)puVar8;
          }
          uVar14 = 0x132;
          lVar4 = lVar10 + 0x30;
          lVar10 = (long)puVar8 + lVar10;
          ppuVar13 = &PTR_FUN_0020d758;
LAB_001ef93c:
          puVar8[1] = lVar4;
          puVar8 = (undefined8 *)(lVar10 + 0x10);
          *puVar8 = ppuVar13;
          *(uint *)(lVar10 + 0x18) = uVar14 | 0x1010000;
          *(long *)(lVar10 + 0x20) = lVar5;
          *(undefined1 (*) [16])(lVar10 + 0x28) = auVar21;
          goto switchD_001edf74_caseD_66;
        }
      }
    }
    break;
  case 'r':
    puVar8 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'M':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &UNK_00145c4d;
      break;
    default:
      goto switchD_001edf74_caseD_66;
    case 'S':
      puVar6 = &DAT_0014578d;
      goto LAB_001eed6c;
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001e9ce4(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_001ede40(param_1), lVar10 != 0)) {
        pvVar19 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar19 + 8);
        puVar8 = (undefined8 *)pvVar19;
        if (0xfef < lVar4 + 0x30U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar4 = 0;
          *puVar8 = pvVar19;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        pcVar15 = "reinterpret_cast";
        *(long *)((long)puVar8 + 8) = lVar4 + 0x30;
        puVar8 = (undefined8 *)((long)puVar8 + lVar4 + 0x10);
        *puVar8 = &PTR_FUN_0020cfe8;
        pcVar12 = "";
        goto LAB_001ef4dc;
      }
      goto LAB_001ede78;
    case 'm':
      puVar6 = &DAT_0014610e;
      goto LAB_001ef698;
    case 's':
      *param_1 = (long)(pcVar15 + 2);
      puVar6 = &DAT_00144e0d;
    }
LAB_001eefe4:
    puVar7 = puVar6 + 2;
LAB_001ef6a0:
    puVar8 = (undefined8 *)FUN_001f10ac(param_1,puVar6,puVar7);
LAB_001ef6a8:
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return puVar8;
    }
    goto LAB_001efcf4;
  case 's':
    puVar8 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'P':
      pcVar15 = pcVar15 + 2;
      *param_1 = (long)pcVar15;
      lVar5 = param_1[2];
      lVar10 = param_1[3];
      if (pcVar15 == pcVar12) goto LAB_001ee33c;
      while (*pcVar15 != 'E') {
LAB_001ee33c:
        do {
          local_60 = FUN_001ebfb0(param_1);
          if (local_60 == 0) goto LAB_001ede78;
          FUN_001ec198(param_1 + 2,&local_60);
          pcVar15 = (char *)*param_1;
        } while (pcVar15 == (char *)param_1[1]);
      }
      lVar5 = (lVar10 - lVar5 >> 3) * 8;
      *param_1 = (long)(pcVar15 + 1);
      auVar21 = FUN_001f530c(param_1,param_1[2] + lVar5,param_1[3]);
      pvVar19 = (void *)param_1[0x266];
      param_1[3] = param_1[2] + lVar5;
      lVar5 = *(long *)((long)pvVar19 + 8);
      puVar8 = (undefined8 *)pvVar19;
      if (0xfef < lVar5 + 0x20U) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
        lVar5 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar5 + 0x20;
      puVar20 = (undefined8 *)((long)puVar8 + lVar5 + 0x10);
      *puVar20 = &PTR_FUN_0020d838;
      *(undefined4 *)((long)puVar8 + lVar5 + 0x18) = 0x1010100;
      *(undefined1 (*) [16])((long)puVar8 + lVar5 + 0x20) = auVar21;
      pvVar19 = (void *)param_1[0x266];
      lVar5 = *(long *)((long)pvVar19 + 8);
      puVar17 = (undefined8 *)pvVar19;
      if (0xfef < lVar5 + 0x40U) {
        puVar17 = (undefined8 *)malloc(0x1000);
        if (puVar17 == (undefined8 *)0x0) goto LAB_001efcf8;
        lVar5 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar5 + 0x40;
      puVar8 = (undefined8 *)((long)puVar17 + lVar5 + 0x10);
      *puVar8 = &PTR_FUN_0020d6e8;
      *(undefined4 *)((long)puVar17 + lVar5 + 0x18) = 0x1010134;
      *(char **)((long)puVar17 + lVar5 + 0x20) = "sizeof... (";
      *(char **)((long)puVar17 + lVar5 + 0x28) = "";
      *(undefined8 **)((long)puVar17 + lVar5 + 0x30) = puVar20;
      goto LAB_001ef0fc;
    default:
      goto switchD_001edf74_caseD_66;
    case 'Z':
      pcVar15 = pcVar15 + 2;
      *param_1 = (long)pcVar15;
      if (pcVar12 != pcVar15) {
        if (*pcVar15 == 'f') {
          lVar5 = FUN_001f0784(param_1);
          if (lVar5 != 0) {
            pvVar19 = (void *)param_1[0x266];
            lVar10 = *(long *)((long)pvVar19 + 8);
            puVar17 = (undefined8 *)pvVar19;
            if (0xfef < lVar10 + 0x40U) {
              puVar17 = (undefined8 *)malloc(0x1000);
              if (puVar17 == (undefined8 *)0x0) goto LAB_001efcf8;
              lVar10 = 0;
              *puVar17 = pvVar19;
              puVar17[1] = 0;
              param_1[0x266] = (long)puVar17;
            }
            *(long *)((long)puVar17 + 8) = lVar10 + 0x40;
            pcVar15 = "sizeof... (";
            puVar8 = (undefined8 *)((long)puVar17 + lVar10 + 0x10);
            *puVar8 = &PTR_FUN_0020d6e8;
            *(undefined4 *)((long)puVar17 + lVar10 + 0x18) = 0x1010134;
            pcVar12 = "";
            goto LAB_001ef0f0;
          }
        }
        else if ((*pcVar15 == 'T') && (lVar5 = FUN_001ecf20(param_1), lVar5 != 0)) {
          puVar17 = (undefined8 *)param_1[0x266];
          lVar10 = puVar17[1];
          puVar8 = puVar17;
          if (0xfef < lVar10 + 0x20U) {
            puVar8 = (undefined8 *)malloc(0x1000);
            if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
            lVar10 = 0;
            *puVar8 = puVar17;
            puVar8[1] = 0;
            param_1[0x266] = (long)puVar8;
          }
          uVar14 = 0x136;
          lVar4 = lVar10 + 0x20;
          lVar10 = (long)puVar8 + lVar10;
          ppuVar13 = &PTR_FUN_0020d7c8;
          goto LAB_001ef2e0;
        }
      }
      break;
    case 'c':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001e9ce4(param_1);
      if ((lVar5 != 0) && (lVar10 = FUN_001ede40(param_1), lVar10 != 0)) {
        pvVar19 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar19 + 8);
        puVar8 = (undefined8 *)pvVar19;
        if (0xfef < lVar4 + 0x30U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar4 = 0;
          *puVar8 = pvVar19;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        pcVar15 = "static_cast";
        *(long *)((long)puVar8 + 8) = lVar4 + 0x30;
        puVar8 = (undefined8 *)((long)puVar8 + lVar4 + 0x10);
        *puVar8 = &PTR_FUN_0020cfe8;
        pcVar12 = "";
        goto LAB_001ef4dc;
      }
      break;
    case 'p':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar8 = puVar17;
        if (0xfef < lVar10 + 0x20U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar10 = 0;
          *puVar8 = puVar17;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        uVar14 = 0x122;
        lVar4 = lVar10 + 0x20;
        lVar10 = (long)puVar8 + lVar10;
        ppuVar13 = &PTR_FUN_0020ce98;
        goto LAB_001ef2e0;
      }
      break;
    case 'r':
      goto switchD_001edefc_caseD_31;
    case 't':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001e9ce4(param_1);
      goto joined_r0x001ef080;
    case 'z':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
joined_r0x001ef080:
      if (lVar5 == 0) break;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar8 = (undefined8 *)pvVar19;
      if (0xfef < lVar10 + 0x40U) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
        lVar10 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar10 + 0x40;
      lVar10 = (long)puVar8 + lVar10;
      pcVar15 = "sizeof (";
LAB_001ef0dc:
      puVar8 = (undefined8 *)(lVar10 + 0x10);
      *puVar8 = &PTR_FUN_0020d6e8;
      *(undefined4 *)(lVar10 + 0x18) = 0x1010134;
      pcVar12 = pcVar15 + 8;
      goto LAB_001ef0f0;
    }
    break;
  case 't':
    puVar8 = (undefined8 *)0x0;
    switch(pcVar15[1]) {
    case 'e':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      goto joined_r0x001ee7c4;
    case 'i':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001e9ce4(param_1);
joined_r0x001ee7c4:
      if (lVar5 == 0) goto LAB_001ede78;
      pvVar19 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar19 + 8);
      puVar8 = (undefined8 *)pvVar19;
      if (0xfef < lVar10 + 0x40U) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
        lVar10 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar10 + 0x40;
      lVar10 = (long)puVar8 + lVar10;
      pcVar15 = "typeid (";
      goto LAB_001ef0dc;
    case 'l':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001e9ce4(param_1);
      if (lVar5 != 0) {
        lVar10 = param_1[2];
        lVar4 = param_1[3];
        while( true ) {
          pcVar15 = (char *)*param_1;
          if ((pcVar15 != (char *)param_1[1]) && (*pcVar15 == 'E')) {
            lVar10 = (lVar4 - lVar10 >> 3) * 8;
            *param_1 = (long)(pcVar15 + 1);
            auVar21 = FUN_001f530c(param_1,param_1[2] + lVar10,param_1[3]);
            puVar17 = (undefined8 *)param_1[0x266];
            param_1[3] = param_1[2] + lVar10;
            lVar10 = puVar17[1];
            puVar8 = puVar17;
            if (0xfef < lVar10 + 0x30U) {
              puVar8 = (undefined8 *)malloc(0x1000);
              if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
              lVar10 = 0;
              *puVar8 = puVar17;
              puVar8[1] = 0;
              param_1[0x266] = (long)puVar8;
            }
            uVar14 = 0x13d;
            lVar4 = lVar10 + 0x30;
            lVar10 = (long)puVar8 + lVar10;
            ppuVar13 = &PTR_FUN_0020d598;
            goto LAB_001ef93c;
          }
          local_60 = FUN_001f1790(param_1);
          if (local_60 == 0) break;
          FUN_001ec198(param_1 + 2,&local_60);
        }
      }
      goto LAB_001ede78;
    case 'r':
      pvVar19 = (void *)param_1[0x266];
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = *(long *)((long)pvVar19 + 8);
      puVar17 = (undefined8 *)pvVar19;
      if (0xfef < lVar5 + 0x20U) {
        puVar17 = (undefined8 *)malloc(0x1000);
        if (puVar17 == (undefined8 *)0x0) goto LAB_001efcf8;
        lVar5 = 0;
        *puVar17 = pvVar19;
        puVar17[1] = 0;
        param_1[0x266] = (long)puVar17;
      }
      *(long *)((long)puVar17 + 8) = lVar5 + 0x20;
      puVar8 = (undefined8 *)((long)puVar17 + lVar5 + 0x10);
      *puVar8 = &PTR_FUN_0020c5d8;
      *(undefined4 *)((long)puVar17 + lVar5 + 0x18) = 0x1010107;
      *(char **)((long)puVar17 + lVar5 + 0x20) = "throw";
      *(char **)((long)puVar17 + lVar5 + 0x28) = "";
      break;
    case 'w':
      *param_1 = (long)(pcVar15 + 2);
      lVar5 = FUN_001ede40(param_1);
      if (lVar5 != 0) {
        puVar17 = (undefined8 *)param_1[0x266];
        lVar10 = puVar17[1];
        puVar8 = puVar17;
        if (0xfef < lVar10 + 0x20U) {
          puVar8 = (undefined8 *)malloc(0x1000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_001efcf8;
          lVar10 = 0;
          *puVar8 = puVar17;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        uVar14 = 0x13f;
        lVar4 = lVar10 + 0x20;
        lVar10 = (long)puVar8 + lVar10;
        ppuVar13 = &PTR_FUN_0020d8a8;
        goto LAB_001ef2e0;
      }
      goto LAB_001ede78;
    }
    goto switchD_001edf74_caseD_66;
  }
LAB_001ede78:
  puVar8 = (undefined8 *)0x0;
switchD_001edf74_caseD_66:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return puVar8;
  }
LAB_001efcf4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001efd04  FUN_001efd04 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_001efd04(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  undefined **ppuVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  void *pvVar17;
  
  pcVar2 = (char *)*param_1;
  pcVar9 = (char *)param_1[1];
  if (pcVar2 == pcVar9) {
    return (undefined8 *)0x0;
  }
  if (*pcVar2 != 'L') {
    return (undefined8 *)0x0;
  }
  pcVar10 = pcVar2 + 1;
  uVar4 = (long)pcVar9 - (long)pcVar10;
  *param_1 = (long)pcVar10;
  if (pcVar9 == pcVar10) {
switchD_001efd6c_caseD_42:
    lVar5 = FUN_001e9ce4(param_1);
    if (lVar5 == 0) {
      return (undefined8 *)0x0;
    }
    pbVar15 = (byte *)*param_1;
    pbVar3 = (byte *)param_1[1];
    pbVar14 = pbVar15;
    if ((pbVar3 == pbVar15) || (9 < *pbVar15 - 0x30)) {
      pbVar15 = (byte *)0x0;
      pbVar16 = (byte *)0x0;
    }
    else {
      do {
        pbVar14 = pbVar14 + 1;
        *param_1 = (long)pbVar14;
        pbVar16 = pbVar3;
        if (pbVar3 == pbVar14) break;
        pbVar16 = pbVar14;
      } while (*pbVar14 - 0x30 < 10);
    }
    if (pbVar15 == pbVar16) {
      return (undefined8 *)0x0;
    }
    if (pbVar14 == pbVar3) {
      return (undefined8 *)0x0;
    }
    if (*pbVar14 != 0x45) {
      return (undefined8 *)0x0;
    }
    pvVar17 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar11 = *(long *)((long)pvVar17 + 8);
    puVar6 = (undefined8 *)pvVar17;
    if (0xfef < lVar11 + 0x30U) {
      puVar6 = (undefined8 *)malloc(0x1000);
      if (puVar6 == (undefined8 *)0x0) {
LAB_001f0780:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar11 = 0;
      *puVar6 = pvVar17;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    *(long *)((long)puVar6 + 8) = lVar11 + 0x30;
    puVar7 = (undefined8 *)((long)puVar6 + lVar11 + 0x10);
    *puVar7 = &PTR_FUN_0020cd48;
    *(undefined4 *)((long)puVar6 + lVar11 + 0x18) = 0x1010144;
    *(long *)((long)puVar6 + lVar11 + 0x20) = lVar5;
    *(byte **)((long)puVar6 + lVar11 + 0x28) = pbVar15;
    *(byte **)((long)puVar6 + lVar11 + 0x30) = pbVar16;
    return puVar7;
  }
  switch(*pcVar10) {
  case 'A':
    lVar5 = FUN_001e9ce4(param_1);
    if (lVar5 == 0) {
      return (undefined8 *)0x0;
    }
    pcVar2 = (char *)*param_1;
    if (pcVar2 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    if (*pcVar2 != 'E') {
      return (undefined8 *)0x0;
    }
    puVar7 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pcVar2 + 1);
    lVar11 = puVar7[1];
    puVar6 = puVar7;
    if (0xfef < lVar11 + 0x20U) {
      puVar6 = (undefined8 *)malloc(0x1000);
      if (puVar6 == (undefined8 *)0x0) goto LAB_001f0780;
      lVar11 = 0;
      *puVar6 = puVar7;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    lVar8 = (long)puVar6 + lVar11;
    uVar13 = 0x142;
    ppuVar12 = &PTR_FUN_0020c958;
    goto LAB_001f0270;
  default:
    goto switchD_001efd6c_caseD_42;
  case 'D':
    if (uVar4 < 3) {
      return (undefined8 *)0x0;
    }
    if (pcVar2[2] != 'n') {
      return (undefined8 *)0x0;
    }
    if (pcVar2[3] != 'E') {
      return (undefined8 *)0x0;
    }
    pvVar17 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar2 + 4);
    lVar5 = *(long *)((long)pvVar17 + 8);
    puVar6 = (undefined8 *)pvVar17;
    if (0xfef < lVar5 + 0x20U) {
      puVar6 = (undefined8 *)malloc(0x1000);
      if (puVar6 == (undefined8 *)0x0) goto LAB_001f0780;
      lVar5 = 0;
      *puVar6 = pvVar17;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    *(long *)((long)puVar6 + 8) = lVar5 + 0x20;
    puVar7 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
    *puVar7 = &PTR_FUN_0020c5d8;
    *(undefined4 *)((long)puVar6 + lVar5 + 0x18) = 0x1010107;
    *(undefined **)((long)puVar6 + lVar5 + 0x20) = &DAT_00145daf;
    *(undefined **)((long)puVar6 + lVar5 + 0x28) = &DAT_00145db6;
    return puVar7;
  case 'T':
    return (undefined8 *)0x0;
  case 'U':
    if (uVar4 < 2) {
      return (undefined8 *)0x0;
    }
    if (pcVar2[2] != 'l') {
      return (undefined8 *)0x0;
    }
    lVar5 = FUN_001f1b0c(param_1,0);
    if (lVar5 == 0) {
      return (undefined8 *)0x0;
    }
    pcVar2 = (char *)*param_1;
    if (pcVar2 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    if (*pcVar2 != 'E') {
      return (undefined8 *)0x0;
    }
    puVar7 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pcVar2 + 1);
    lVar11 = puVar7[1];
    puVar6 = puVar7;
    if (0xfef < lVar11 + 0x20U) {
      puVar6 = (undefined8 *)malloc(0x1000);
      if (puVar6 == (undefined8 *)0x0) goto LAB_001f0780;
      lVar11 = 0;
      *puVar6 = puVar7;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    lVar8 = (long)puVar6 + lVar11;
    uVar13 = 0x143;
    ppuVar12 = &PTR_FUN_0020ccd8;
LAB_001f0270:
    puVar6[1] = lVar11 + 0x20;
    *(undefined8 *)(lVar8 + 0x10) = ppuVar12;
    *(uint *)(lVar8 + 0x18) = uVar13 | 0x1010000;
    *(long *)(lVar8 + 0x20) = lVar5;
    return (undefined8 *)(lVar8 + 0x10);
  case '_':
    if (uVar4 < 2) {
      return (undefined8 *)0x0;
    }
    if (pcVar2[2] != 'Z') {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pcVar2 + 3);
    puVar6 = (undefined8 *)FUN_001e9094(param_1);
    if (puVar6 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar2 = (char *)*param_1;
    if (pcVar2 != (char *)param_1[1]) {
      if (*pcVar2 == 'E') {
        *param_1 = (long)(pcVar2 + 1);
        return puVar6;
      }
      return (undefined8 *)0x0;
    }
    return (undefined8 *)0x0;
  case 'a':
    pcVar9 = "signed char";
    pcVar10 = "";
    break;
  case 'b':
    if (uVar4 < 3) {
      return (undefined8 *)0x0;
    }
    if ((pcVar2[2] != '0') || (pcVar2[3] != 'E')) {
      if (pcVar2[2] != '1') {
        return (undefined8 *)0x0;
      }
      if (pcVar2[3] != 'E') {
        return (undefined8 *)0x0;
      }
      pvVar17 = (void *)param_1[0x266];
      *param_1 = (long)(pcVar2 + 4);
      lVar5 = *(long *)((long)pvVar17 + 8);
      puVar6 = (undefined8 *)pvVar17;
      if (0xfef < lVar5 + 0x10U) {
        puVar6 = (undefined8 *)malloc(0x1000);
        if (puVar6 == (undefined8 *)0x0) goto LAB_001f0780;
        lVar5 = 0;
        *puVar6 = pvVar17;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar5 + 0x10;
      puVar7 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
      *puVar7 = &PTR_FUN_0020c798;
      *(undefined4 *)((long)puVar6 + lVar5 + 0x18) = 0x1010141;
      *(undefined1 *)((long)puVar6 + lVar5 + 0x1c) = 1;
      return puVar7;
    }
    pvVar17 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar2 + 4);
    lVar5 = *(long *)((long)pvVar17 + 8);
    puVar6 = (undefined8 *)pvVar17;
    if (0xfef < lVar5 + 0x10U) {
      puVar6 = (undefined8 *)malloc(0x1000);
      if (puVar6 == (undefined8 *)0x0) goto LAB_001f0780;
      lVar5 = 0;
      *puVar6 = pvVar17;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    *(long *)((long)puVar6 + 8) = lVar5 + 0x10;
    puVar7 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
    *puVar7 = &PTR_FUN_0020c798;
    *(undefined4 *)((long)puVar6 + lVar5 + 0x18) = 0x1010141;
    *(undefined1 *)((long)puVar6 + lVar5 + 0x1c) = 0;
    return puVar7;
  case 'c':
    pcVar9 = "char";
    pcVar10 = "";
    break;
  case 'd':
    *param_1 = (long)(pcVar2 + 2);
    if ((ulong)((long)pcVar9 - (long)(pcVar2 + 2)) < 0x11) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[2] - 0x30) && (5 < ((byte)pcVar2[2] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[3] - 0x30) && (5 < ((byte)pcVar2[3] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[4] - 0x30) && (5 < ((byte)pcVar2[4] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[5] - 0x30) && (5 < ((byte)pcVar2[5] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[6] - 0x30) && (5 < ((byte)pcVar2[6] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[7] - 0x30) && (5 < ((byte)pcVar2[7] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[8] - 0x30) && (5 < ((byte)pcVar2[8] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[9] - 0x30) && (5 < ((byte)pcVar2[9] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[10] - 0x30) && (5 < ((byte)pcVar2[10] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[0xb] - 0x30) && (5 < ((byte)pcVar2[0xb] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[0xc] - 0x30) && (5 < ((byte)pcVar2[0xc] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[0xd] - 0x30) && (5 < ((byte)pcVar2[0xd] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[0xe] - 0x30) && (5 < ((byte)pcVar2[0xe] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[0xf] - 0x30) && (5 < ((byte)pcVar2[0xf] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[0x10] - 0x30) && (5 < ((byte)pcVar2[0x10] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[0x11] - 0x30) && (5 < ((byte)pcVar2[0x11] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    pcVar10 = pcVar2 + 0x12;
    *param_1 = (long)pcVar10;
    if (pcVar10 == pcVar9) {
      return (undefined8 *)0x0;
    }
    if (*pcVar10 != 'E') {
      return (undefined8 *)0x0;
    }
    puVar7 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pcVar2 + 0x13);
    lVar5 = puVar7[1];
    puVar6 = puVar7;
    if (0xfef < lVar5 + 0x20U) {
      puVar6 = (undefined8 *)malloc(0x1000);
      if (puVar6 == (undefined8 *)0x0) goto LAB_001f0780;
      lVar5 = 0;
      *puVar6 = puVar7;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    lVar11 = lVar5 + 0x20;
    lVar5 = (long)puVar6 + lVar5;
    uVar13 = 0x147;
    ppuVar12 = &PTR_FUN_0020c878;
    goto LAB_001f0750;
  case 'e':
    pcVar1 = pcVar2 + 2;
    *param_1 = (long)pcVar1;
    if ((ulong)((long)pcVar9 - (long)pcVar1) < 0x21) {
      return (undefined8 *)0x0;
    }
    lVar5 = 0;
    pcVar10 = pcVar2 + 0x22;
    do {
      if ((9 < (byte)pcVar1[lVar5] - 0x30) && (5 < ((byte)pcVar1[lVar5] & 0xffffffdf) - 0x41)) {
        return (undefined8 *)0x0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x20);
    *param_1 = (long)pcVar10;
    if (pcVar10 == pcVar9) {
      return (undefined8 *)0x0;
    }
    if (*pcVar10 != 'E') {
      return (undefined8 *)0x0;
    }
    puVar7 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pcVar2 + 0x23);
    lVar5 = puVar7[1];
    puVar6 = puVar7;
    if (0xfef < lVar5 + 0x20U) {
      puVar6 = (undefined8 *)malloc(0x1000);
      if (puVar6 == (undefined8 *)0x0) goto LAB_001f0780;
      lVar5 = 0;
      *puVar6 = puVar7;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    lVar11 = lVar5 + 0x20;
    lVar5 = (long)puVar6 + lVar5;
    uVar13 = 0x148;
    ppuVar12 = &PTR_FUN_0020c8e8;
    goto LAB_001f0750;
  case 'f':
    *param_1 = (long)(pcVar2 + 2);
    if ((ulong)((long)pcVar9 - (long)(pcVar2 + 2)) < 9) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[2] - 0x30) && (5 < ((byte)pcVar2[2] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[3] - 0x30) && (5 < ((byte)pcVar2[3] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[4] - 0x30) && (5 < ((byte)pcVar2[4] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[5] - 0x30) && (5 < ((byte)pcVar2[5] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[6] - 0x30) && (5 < ((byte)pcVar2[6] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[7] - 0x30) && (5 < ((byte)pcVar2[7] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[8] - 0x30) && (5 < ((byte)pcVar2[8] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    if ((9 < (byte)pcVar2[9] - 0x30) && (5 < ((byte)pcVar2[9] & 0xffffffdf) - 0x41)) {
      return (undefined8 *)0x0;
    }
    pcVar10 = pcVar2 + 10;
    *param_1 = (long)pcVar10;
    if (pcVar10 == pcVar9) {
      return (undefined8 *)0x0;
    }
    if (*pcVar10 != 'E') {
      return (undefined8 *)0x0;
    }
    puVar7 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pcVar2 + 0xb);
    lVar5 = puVar7[1];
    puVar6 = puVar7;
    if (0xfef < lVar5 + 0x20U) {
      puVar6 = (undefined8 *)malloc(0x1000);
      if (puVar6 == (undefined8 *)0x0) goto LAB_001f0780;
      lVar5 = 0;
      *puVar6 = puVar7;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    lVar11 = lVar5 + 0x20;
    lVar5 = (long)puVar6 + lVar5;
    uVar13 = 0x146;
    ppuVar12 = &PTR_FUN_0020c808;
LAB_001f0750:
    puVar6[1] = lVar11;
    *(undefined8 *)(lVar5 + 0x10) = ppuVar12;
    *(uint *)(lVar5 + 0x18) = uVar13 | 0x1010000;
    *(char **)(lVar5 + 0x20) = pcVar2 + 2;
    *(char **)(lVar5 + 0x28) = pcVar10;
    return (undefined8 *)(lVar5 + 0x10);
  case 'h':
    pcVar9 = "unsigned char";
    pcVar10 = "";
    break;
  case 'i':
    pcVar9 = "";
    *param_1 = (long)(pcVar2 + 2);
    pcVar10 = pcVar9;
    goto LAB_001f0658;
  case 'j':
    pcVar9 = "u";
    goto LAB_001f032c;
  case 'l':
    pcVar9 = "l";
LAB_001f032c:
    pcVar10 = pcVar9 + 1;
    break;
  case 'm':
    pcVar9 = "ul";
    goto LAB_001f033c;
  case 'n':
    pcVar9 = "__int128";
    pcVar10 = "";
    break;
  case 'o':
    pcVar9 = "unsigned __int128";
    pcVar10 = "";
    break;
  case 's':
    pcVar9 = "short";
    pcVar10 = "";
    break;
  case 't':
    pcVar9 = "unsigned short";
    pcVar10 = "";
    break;
  case 'w':
    pcVar9 = "wchar_t";
    pcVar10 = "";
    break;
  case 'x':
    pcVar9 = "ll";
LAB_001f033c:
    pcVar10 = pcVar9 + 2;
    break;
  case 'y':
    pcVar9 = "ull";
    pcVar10 = "";
  }
  *param_1 = (long)(pcVar2 + 2);
LAB_001f0658:
  puVar6 = (undefined8 *)FUN_001f19bc(param_1,pcVar9,pcVar10);
  return puVar6;
}


// ===== 001f0784  FUN_001f0784 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_001f0784(long *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  void *pvVar12;
  
  pcVar1 = (char *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((ulong)((long)pbVar2 - (long)pcVar1) < 2) {
    return (undefined8 *)0x0;
  }
  if (*pcVar1 != 'f') {
    return (undefined8 *)0x0;
  }
  pbVar8 = pbVar2;
  if (pcVar1[1] != 'p') {
    if (*pcVar1 != 'f') {
      return (undefined8 *)0x0;
    }
    if (pcVar1[1] != 'L') {
      return (undefined8 *)0x0;
    }
    pbVar10 = (byte *)(pcVar1 + 2);
    *param_1 = (long)pbVar10;
    if ((pbVar2 == pbVar10) || (9 < *pbVar10 - 0x30)) {
      pbVar7 = (byte *)0x0;
      pbVar9 = pbVar10;
      pbVar11 = (byte *)0x0;
    }
    else {
      pbVar3 = (byte *)(pcVar1 + 3);
      do {
        pbVar9 = pbVar3;
        *param_1 = (long)pbVar9;
        pbVar7 = pbVar10;
        pbVar11 = pbVar2;
        if (pbVar2 == pbVar9) break;
        pbVar11 = pbVar9;
        pbVar3 = pbVar9 + 1;
      } while (*pbVar9 - 0x30 < 10);
    }
    if (pbVar7 == pbVar11) {
      return (undefined8 *)0x0;
    }
    if (pbVar9 == pbVar2) {
      return (undefined8 *)0x0;
    }
    if (*pbVar9 != 0x70) {
      return (undefined8 *)0x0;
    }
    pbVar10 = pbVar9 + 1;
    *param_1 = (long)pbVar10;
    if (pbVar10 != pbVar2) {
      if (*pbVar10 == 0x72) {
        pbVar10 = pbVar9 + 2;
        *param_1 = (long)pbVar10;
      }
      pbVar8 = pbVar10;
      if (pbVar10 != pbVar2) {
        if (*pbVar10 == 0x56) {
          pbVar10 = pbVar10 + 1;
          *param_1 = (long)pbVar10;
        }
        pbVar8 = pbVar10;
        if ((pbVar10 != pbVar2) && (*pbVar10 == 0x4b)) {
          *param_1 = (long)(pbVar10 + 1);
          pbVar8 = pbVar10 + 1;
        }
      }
    }
    pbVar10 = pbVar8;
    if ((pbVar2 == pbVar8) || (9 < *pbVar8 - 0x30)) {
      pbVar7 = (byte *)0x0;
      pbVar8 = (byte *)0x0;
    }
    else {
      do {
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
        pbVar7 = pbVar2;
        if (pbVar2 == pbVar10) break;
        pbVar7 = pbVar10;
      } while (*pbVar10 - 0x30 < 10);
    }
    goto joined_r0x001f09e4;
  }
  pbVar10 = (byte *)(pcVar1 + 2);
  *param_1 = (long)pbVar10;
  if (pbVar10 != pbVar2) {
    if (*pbVar10 == 0x72) {
      pbVar10 = (byte *)(pcVar1 + 3);
      *param_1 = (long)pbVar10;
    }
    if (pbVar10 != pbVar2) {
      if (*pbVar10 == 0x56) {
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
      }
      pbVar8 = pbVar2;
      if (pbVar10 == pbVar2) goto LAB_001f0914;
      pbVar8 = pbVar10;
      if (*pbVar10 == 0x4b) {
        *param_1 = (long)(pbVar10 + 1);
        pbVar8 = pbVar10 + 1;
      }
    }
    if ((pbVar2 != pbVar8) && (pbVar10 = pbVar8, *pbVar8 - 0x30 < 10)) {
      do {
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
        pbVar7 = pbVar2;
        if (pbVar2 == pbVar10) break;
        pbVar7 = pbVar10;
      } while (*pbVar10 - 0x30 < 10);
      goto joined_r0x001f09e4;
    }
  }
LAB_001f0914:
  pbVar7 = (byte *)0x0;
  pbVar10 = pbVar8;
  pbVar8 = (byte *)0x0;
joined_r0x001f09e4:
  if ((pbVar10 != pbVar2) && (*pbVar10 == 0x5f)) {
    pvVar12 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar10 + 1);
    lVar6 = *(long *)((long)pvVar12 + 8);
    puVar4 = (undefined8 *)pvVar12;
    if (0xfef < lVar6 + 0x20U) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = 0;
      *puVar4 = pvVar12;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
    puVar5 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
    *puVar5 = &PTR_FUN_0020cdb8;
    *(undefined4 *)((long)puVar4 + lVar6 + 0x18) = 0x101013b;
    *(byte **)((long)puVar4 + lVar6 + 0x20) = pbVar8;
    *(byte **)((long)puVar4 + lVar6 + 0x28) = pbVar7;
    return puVar5;
  }
  return (undefined8 *)0x0;
}


// ===== 001f0ac0  FUN_001f0ac0 =====

undefined8 * FUN_001f0ac0(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char cVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  void *pvVar14;
  
  pcVar2 = (char *)*param_1;
  pcVar3 = (char *)param_1[1];
  if (pcVar2 == pcVar3) {
    return (undefined8 *)0x0;
  }
  if (*pcVar2 != 'f') {
    return (undefined8 *)0x0;
  }
  pcVar1 = pcVar2 + 1;
  *param_1 = (long)pcVar1;
  if (pcVar3 == pcVar1) {
    return (undefined8 *)0x0;
  }
  cVar4 = *pcVar1;
  bVar5 = true;
  switch(cVar4) {
  case 'L':
  case 'l':
    break;
  default:
    return (undefined8 *)0x0;
  case 'R':
  case 'r':
    bVar5 = false;
  }
  pcVar1 = pcVar2 + 2;
  *param_1 = (long)pcVar1;
  if ((ulong)((long)pcVar3 - (long)pcVar1) < 2) {
    return (undefined8 *)0x0;
  }
  cVar10 = *pcVar1;
  if (cVar10 == 'a') {
    if (pcVar2[3] != 'a') {
      cVar10 = *pcVar1;
      if (cVar10 == 'a') {
        if (pcVar2[3] == 'n') {
          puVar12 = &DAT_00145dec;
          puVar13 = &DAT_00145ded;
          goto LAB_001f0fb0;
        }
        cVar10 = *pcVar1;
        if (cVar10 == 'a') {
          if (pcVar2[3] == 'N') {
            puVar12 = &UNK_0014545b;
            goto LAB_001f0fac;
          }
          cVar10 = *pcVar1;
          if (cVar10 == 'a') {
            if (pcVar2[3] == 'S') {
              puVar12 = &DAT_00145859;
              puVar13 = &DAT_0014585a;
              goto LAB_001f0fb0;
            }
            cVar10 = *pcVar1;
          }
        }
      }
      goto LAB_001f0c04;
    }
    puVar12 = &DAT_00145daa;
    goto LAB_001f0fac;
  }
LAB_001f0c04:
  if ((cVar10 == 'c') && (pcVar2[3] == 'm')) {
    puVar12 = &DAT_001453aa;
    puVar13 = &DAT_001453ab;
    goto LAB_001f0fb0;
  }
  if (*pcVar1 == 'd') {
    if (pcVar2[3] == 's') {
      puVar12 = &UNK_00145710;
      goto LAB_001f0fac;
    }
    if (*pcVar1 != 'd') goto LAB_001f0c98;
    if (pcVar2[3] == 'v') {
      puVar12 = &DAT_00144d20;
      puVar13 = &DAT_00144d21;
      goto LAB_001f0fb0;
    }
    cVar10 = *pcVar1;
    if (cVar10 == 'd') {
      if (pcVar2[3] == 'V') {
        puVar12 = &UNK_001450d6;
        goto LAB_001f0fac;
      }
      goto LAB_001f0c98;
    }
  }
  else {
LAB_001f0c98:
    cVar10 = *pcVar1;
  }
  if ((cVar10 == 'e') && (pcVar2[3] == 'o')) {
    puVar12 = &DAT_00145921;
    puVar13 = &DAT_00145922;
    goto LAB_001f0fb0;
  }
  cVar10 = *pcVar1;
  if (cVar10 == 'e') {
    if (pcVar2[3] != 'O') {
      cVar10 = *pcVar1;
      if (cVar10 == 'e') {
        if (pcVar2[3] == 'q') {
          puVar12 = &UNK_00145651;
          goto LAB_001f0fac;
        }
        cVar10 = *pcVar1;
      }
      goto LAB_001f0d0c;
    }
    puVar12 = &UNK_0014564e;
  }
  else {
LAB_001f0d0c:
    if ((cVar10 == 'g') && (pcVar2[3] == 'e')) {
      puVar12 = &UNK_00144c3b;
    }
    else {
      cVar10 = *pcVar1;
      if (cVar10 == 'g') {
        if (pcVar2[3] == 't') {
          puVar12 = &DAT_00145654;
          puVar13 = &DAT_00145655;
          goto LAB_001f0fb0;
        }
        cVar10 = *pcVar1;
      }
      if ((cVar10 == 'l') && (pcVar2[3] == 'e')) {
        puVar12 = &UNK_00145c4a;
      }
      else if (*pcVar1 == 'l') {
        if (pcVar2[3] != 's') {
          if (*pcVar1 != 'l') goto LAB_001f0dec;
          if (pcVar2[3] != 'S') {
            cVar10 = *pcVar1;
            if (cVar10 == 'l') {
              if (pcVar2[3] == 't') {
                puVar12 = &DAT_00144bd5;
                puVar13 = &DAT_00144bd6;
                goto LAB_001f0fb0;
              }
              goto LAB_001f0dec;
            }
            goto LAB_001f0df0;
          }
          puVar12 = &UNK_0014599d;
LAB_001f0dbc:
          puVar13 = puVar12 + 3;
          goto LAB_001f0fb0;
        }
        puVar12 = &UNK_00145ae1;
      }
      else {
LAB_001f0dec:
        cVar10 = *pcVar1;
LAB_001f0df0:
        if ((cVar10 == 'm') && (pcVar2[3] == 'i')) {
          puVar12 = &DAT_00145124;
          puVar13 = &DAT_00145125;
          goto LAB_001f0fb0;
        }
        if (*pcVar1 == 'm') {
          if (pcVar2[3] == 'I') {
            puVar12 = &UNK_001450d9;
            goto LAB_001f0fac;
          }
          if (*pcVar1 != 'm') goto LAB_001f0e84;
          if (pcVar2[3] == 'l') {
            puVar12 = &DAT_00145235;
            puVar13 = &DAT_00145236;
            goto LAB_001f0fb0;
          }
          cVar10 = *pcVar1;
          if (cVar10 == 'm') {
            if (pcVar2[3] == 'L') {
              puVar12 = &UNK_001453ac;
              goto LAB_001f0fac;
            }
            goto LAB_001f0e84;
          }
        }
        else {
LAB_001f0e84:
          cVar10 = *pcVar1;
        }
        if ((cVar10 == 'n') && (pcVar2[3] == 'e')) {
          puVar12 = &UNK_00145bba;
        }
        else {
          if (*pcVar1 == 'o') {
            if (pcVar2[3] == 'o') {
              puVar12 = &UNK_0014585b;
              goto LAB_001f0fac;
            }
            if (*pcVar1 != 'o') goto LAB_001f0f18;
            if (pcVar2[3] == 'r') {
              puVar12 = &DAT_00145dad;
              puVar13 = &DAT_00145dae;
              goto LAB_001f0fb0;
            }
            cVar10 = *pcVar1;
            if (cVar10 == 'o') {
              if (pcVar2[3] == 'R') {
                puVar12 = &UNK_00145923;
                goto LAB_001f0fac;
              }
              goto LAB_001f0f18;
            }
          }
          else {
LAB_001f0f18:
            cVar10 = *pcVar1;
          }
          if ((cVar10 == 'p') && (pcVar2[3] == 'l')) {
            puVar12 = &DAT_00145926;
            puVar13 = &DAT_00145927;
            goto LAB_001f0fb0;
          }
          cVar10 = *pcVar1;
          if (cVar10 == 'p') {
            if (pcVar2[3] == 'L') {
              puVar12 = &UNK_0014578a;
              goto LAB_001f0fac;
            }
            cVar10 = *pcVar1;
          }
          if ((cVar10 == 'r') && (pcVar2[3] == 'm')) {
            puVar12 = &DAT_0014610e;
            puVar13 = &DAT_0014610f;
            goto LAB_001f0fb0;
          }
          if (*pcVar1 != 'r') {
            return (undefined8 *)0x0;
          }
          if (pcVar2[3] == 'M') {
            puVar12 = &UNK_00145c4d;
          }
          else {
            if (*pcVar1 != 'r') {
              return (undefined8 *)0x0;
            }
            if (pcVar2[3] != 's') {
              if (*pcVar1 != 'r') {
                return (undefined8 *)0x0;
              }
              if (pcVar2[3] != 'S') {
                return (undefined8 *)0x0;
              }
              puVar12 = &DAT_0014578d;
              goto LAB_001f0dbc;
            }
            puVar12 = &DAT_00144e0d;
          }
        }
      }
    }
  }
LAB_001f0fac:
  puVar13 = puVar12 + 2;
LAB_001f0fb0:
  *param_1 = (long)(pcVar2 + 4);
  lVar6 = FUN_001ede40(param_1);
  if (lVar6 == 0) {
    return (undefined8 *)0x0;
  }
  if ((cVar4 == 'R') || (cVar4 == 'L')) {
    lVar7 = FUN_001ede40(param_1);
    if (lVar7 == 0) {
      return (undefined8 *)0x0;
    }
    lVar11 = lVar7;
    if (!bVar5) {
      lVar11 = lVar6;
      lVar6 = lVar7;
    }
  }
  else {
    lVar11 = lVar6;
    lVar6 = 0;
  }
  pvVar14 = (void *)param_1[0x266];
  lVar7 = *(long *)((long)pvVar14 + 8);
  puVar8 = (undefined8 *)pvVar14;
  if (0xfef < lVar7 + 0x40U) {
    puVar8 = (undefined8 *)malloc(0x1000);
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar7 = 0;
    *puVar8 = pvVar14;
    puVar8[1] = 0;
    param_1[0x266] = (long)puVar8;
  }
  *(long *)((long)puVar8 + 8) = lVar7 + 0x40;
  puVar9 = (undefined8 *)((long)puVar8 + lVar7 + 0x10);
  *puVar9 = &PTR_FUN_0020ce28;
  *(undefined4 *)((long)puVar8 + lVar7 + 0x18) = 0x101013e;
  *(long *)((long)puVar8 + lVar7 + 0x20) = lVar11;
  *(long *)((long)puVar8 + lVar7 + 0x28) = lVar6;
  *(undefined **)((long)puVar8 + lVar7 + 0x30) = puVar12;
  *(undefined **)((long)puVar8 + lVar7 + 0x38) = puVar13;
  *(bool *)((long)puVar8 + lVar7 + 0x40) = bVar5;
  return puVar9;
}


// ===== 001f10ac  FUN_001f10ac =====

void FUN_001f10ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  
  lVar1 = FUN_001ede40();
  if ((lVar1 != 0) && (lVar2 = FUN_001ede40(param_1), lVar2 != 0)) {
    pvVar5 = *(void **)(param_1 + 0x1330);
    lVar4 = *(long *)((long)pvVar5 + 8);
    puVar3 = (undefined8 *)pvVar5;
    if (0xfef < lVar4 + 0x30U) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = 0;
      *puVar3 = pvVar5;
      puVar3[1] = 0;
      *(undefined8 **)(param_1 + 0x1330) = puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar4 + 0x30;
    *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_0020cf08;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x18) = 0x101012f;
    *(long *)((long)puVar3 + lVar4 + 0x20) = lVar1;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x28) = param_2;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x30) = param_3;
    *(long *)((long)puVar3 + lVar4 + 0x38) = lVar2;
  }
  return;
}


// ===== 001f115c  FUN_001f115c =====

undefined8 * FUN_001f115c(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  
  pcVar9 = (char *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((ulong)((long)pbVar2 - (long)pcVar9) < 3) {
    if ((long)pbVar2 - (long)pcVar9 != 2) {
      puVar5 = (undefined8 *)FUN_001f5778(param_1);
      return puVar5;
    }
LAB_001f1374:
    cVar3 = *pcVar9;
  }
  else {
    cVar3 = *pcVar9;
    if (cVar3 == 's') {
      if ((pcVar9[1] == 'r') && (pcVar9[2] == 'N')) {
        *param_1 = (long)(pcVar9 + 3);
        puVar5 = (undefined8 *)FUN_001f56c0(param_1);
        if (puVar5 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar6 = puVar5;
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          lVar11 = FUN_001ecac4(param_1,0);
          if (lVar11 == 0) {
            return (undefined8 *)0x0;
          }
          pvVar12 = (void *)param_1[0x266];
          lVar10 = *(long *)((long)pvVar12 + 8);
          puVar7 = (undefined8 *)pvVar12;
          if (0xfef < lVar10 + 0x20U) {
            puVar7 = (undefined8 *)malloc(0x1000);
            if (puVar7 == (undefined8 *)0x0) goto LAB_001f178c;
            lVar10 = 0;
            *puVar7 = pvVar12;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar10 + 0x20;
          puVar6 = (undefined8 *)((long)puVar7 + lVar10 + 0x10);
          *puVar6 = &PTR_FUN_0020dd08;
          *(undefined8 **)((long)puVar7 + lVar10 + 0x20) = puVar5;
          *(long *)((long)puVar7 + lVar10 + 0x28) = lVar11;
          *(undefined4 *)((long)puVar7 + lVar10 + 0x18) = 0x1010125;
        }
        while ((pcVar9 = (char *)*param_1, pcVar9 == (char *)param_1[1] || (*pcVar9 != 'E'))) {
          puVar5 = (undefined8 *)FUN_001f59e0(param_1);
          if (puVar5 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar7 = puVar5;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar11 = FUN_001ecac4(param_1,0);
            if (lVar11 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar12 = (void *)param_1[0x266];
            lVar10 = *(long *)((long)pvVar12 + 8);
            puVar8 = (undefined8 *)pvVar12;
            if (0xfef < lVar10 + 0x20U) {
              puVar8 = (undefined8 *)malloc(0x1000);
              if (puVar8 == (undefined8 *)0x0) goto LAB_001f178c;
              lVar10 = 0;
              *puVar8 = pvVar12;
              puVar8[1] = 0;
              param_1[0x266] = (long)puVar8;
            }
            *(long *)((long)puVar8 + 8) = lVar10 + 0x20;
            puVar7 = (undefined8 *)((long)puVar8 + lVar10 + 0x10);
            *puVar7 = &PTR_FUN_0020dd08;
            *(undefined8 **)((long)puVar8 + lVar10 + 0x20) = puVar5;
            *(long *)((long)puVar8 + lVar10 + 0x28) = lVar11;
            *(undefined4 *)((long)puVar8 + lVar10 + 0x18) = 0x1010125;
          }
          pvVar12 = (void *)param_1[0x266];
          lVar11 = *(long *)((long)pvVar12 + 8);
          puVar5 = (undefined8 *)pvVar12;
          if (0xfef < lVar11 + 0x20U) {
            puVar5 = (undefined8 *)malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) goto LAB_001f178c;
            lVar11 = 0;
            *puVar5 = pvVar12;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
          }
          *(long *)((long)puVar5 + 8) = lVar11 + 0x20;
          puVar8 = (undefined8 *)((long)puVar5 + lVar11 + 0x10);
          *puVar8 = &PTR_FUN_0020d1a8;
          *(undefined4 *)((long)puVar5 + lVar11 + 0x18) = 0x1010116;
          *(undefined8 **)((long)puVar5 + lVar11 + 0x20) = puVar6;
          *(undefined8 **)((long)puVar5 + lVar11 + 0x28) = puVar7;
          puVar6 = puVar8;
        }
        *param_1 = (long)(pcVar9 + 1);
        lVar11 = FUN_001f5778(param_1);
        if (lVar11 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar12 = (void *)param_1[0x266];
        lVar10 = *(long *)((long)pvVar12 + 8);
        puVar5 = (undefined8 *)pvVar12;
        if (lVar10 + 0x20U < 0xff0) {
LAB_001f1748:
          *(long *)((long)puVar5 + 8) = lVar10 + 0x20;
          puVar7 = (undefined8 *)((long)puVar5 + lVar10 + 0x10);
          *puVar7 = &PTR_FUN_0020d1a8;
          *(undefined4 *)((long)puVar5 + lVar10 + 0x18) = 0x1010116;
          goto LAB_001f16f8;
        }
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 != (undefined8 *)0x0) {
          lVar10 = 0;
          *puVar5 = pvVar12;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
          goto LAB_001f1748;
        }
        goto LAB_001f178c;
      }
      goto LAB_001f1374;
    }
  }
  if ((cVar3 == 'g') && (pcVar9[1] == 's')) {
    pcVar9 = pcVar9 + 2;
    bVar4 = true;
    *param_1 = (long)pcVar9;
    if (1 < (ulong)((long)pbVar2 - (long)pcVar9)) goto LAB_001f13ac;
  }
  else {
    bVar4 = false;
LAB_001f13ac:
    if ((*pcVar9 == 's') && (pcVar9[1] == 'r')) {
      pbVar1 = (byte *)(pcVar9 + 2);
      *param_1 = (long)pbVar1;
      if ((pbVar2 != pbVar1) && (*pbVar1 - 0x30 < 10)) {
        puVar5 = (undefined8 *)FUN_001f59e0(param_1);
        if (puVar5 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar7 = (undefined8 *)0x0;
        do {
          puVar6 = puVar5;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar11 = FUN_001ecac4(param_1,0);
            if (lVar11 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar12 = (void *)param_1[0x266];
            lVar10 = *(long *)((long)pvVar12 + 8);
            puVar8 = (undefined8 *)pvVar12;
            if (0xfef < lVar10 + 0x20U) {
              puVar8 = (undefined8 *)malloc(0x1000);
              if (puVar8 == (undefined8 *)0x0) goto LAB_001f178c;
              lVar10 = 0;
              *puVar8 = pvVar12;
              puVar8[1] = 0;
              param_1[0x266] = (long)puVar8;
            }
            *(long *)((long)puVar8 + 8) = lVar10 + 0x20;
            puVar6 = (undefined8 *)((long)puVar8 + lVar10 + 0x10);
            *puVar6 = &PTR_FUN_0020dd08;
            *(undefined8 **)((long)puVar8 + lVar10 + 0x20) = puVar5;
            *(long *)((long)puVar8 + lVar10 + 0x28) = lVar11;
            *(undefined4 *)((long)puVar8 + lVar10 + 0x18) = 0x1010125;
          }
          if (puVar7 == (undefined8 *)0x0) {
            if (bVar4) {
              pvVar12 = (void *)param_1[0x266];
              lVar11 = *(long *)((long)pvVar12 + 8);
              puVar5 = (undefined8 *)pvVar12;
              if (0xfef < lVar11 + 0x20U) {
                puVar5 = (undefined8 *)malloc(0x1000);
                if (puVar5 == (undefined8 *)0x0) goto LAB_001f178c;
                lVar11 = 0;
                *puVar5 = pvVar12;
                puVar5[1] = 0;
                param_1[0x266] = (long)puVar5;
              }
              *(long *)((long)puVar5 + 8) = lVar11 + 0x20;
              puVar8 = (undefined8 *)((long)puVar5 + lVar11 + 0x10);
              *puVar8 = &PTR_FUN_0020d368;
              *(undefined4 *)((long)puVar5 + lVar11 + 0x18) = 0x1010126;
              puVar5 = (undefined8 *)((long)puVar5 + lVar11 + 0x20);
              goto LAB_001f166c;
            }
          }
          else {
            pvVar12 = (void *)param_1[0x266];
            lVar11 = *(long *)((long)pvVar12 + 8);
            puVar5 = (undefined8 *)pvVar12;
            if (0xfef < lVar11 + 0x20U) {
              puVar5 = (undefined8 *)malloc(0x1000);
              if (puVar5 == (undefined8 *)0x0) goto LAB_001f178c;
              lVar11 = 0;
              *puVar5 = pvVar12;
              puVar5[1] = 0;
              param_1[0x266] = (long)puVar5;
            }
            *(long *)((long)puVar5 + 8) = lVar11 + 0x20;
            puVar8 = (undefined8 *)((long)puVar5 + lVar11 + 0x10);
            *puVar8 = &PTR_FUN_0020d1a8;
            *(undefined4 *)((long)puVar5 + lVar11 + 0x18) = 0x1010116;
            *(undefined8 **)((long)puVar5 + lVar11 + 0x20) = puVar7;
            puVar5 = (undefined8 *)((long)puVar5 + lVar11 + 0x28);
LAB_001f166c:
            *puVar5 = puVar6;
            puVar6 = puVar8;
          }
          pcVar9 = (char *)*param_1;
          if ((pcVar9 != (char *)param_1[1]) && (*pcVar9 == 'E')) {
            *param_1 = (long)(pcVar9 + 1);
            goto LAB_001f1694;
          }
          puVar5 = (undefined8 *)FUN_001f59e0(param_1);
          puVar7 = puVar6;
          if (puVar5 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        } while( true );
      }
      puVar5 = (undefined8 *)FUN_001f56c0(param_1);
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar6 = puVar5;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        lVar11 = FUN_001ecac4(param_1,0);
        if (lVar11 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar12 = (void *)param_1[0x266];
        lVar10 = *(long *)((long)pvVar12 + 8);
        puVar7 = (undefined8 *)pvVar12;
        if (0xfef < lVar10 + 0x20U) {
          puVar7 = (undefined8 *)malloc(0x1000);
          if (puVar7 == (undefined8 *)0x0) goto LAB_001f178c;
          lVar10 = 0;
          *puVar7 = pvVar12;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar10 + 0x20;
        puVar6 = (undefined8 *)((long)puVar7 + lVar10 + 0x10);
        *puVar6 = &PTR_FUN_0020dd08;
        *(undefined8 **)((long)puVar7 + lVar10 + 0x20) = puVar5;
        *(long *)((long)puVar7 + lVar10 + 0x28) = lVar11;
        *(undefined4 *)((long)puVar7 + lVar10 + 0x18) = 0x1010125;
      }
LAB_001f1694:
      lVar11 = FUN_001f5778(param_1);
      if (lVar11 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar12 = (void *)param_1[0x266];
      lVar10 = *(long *)((long)pvVar12 + 8);
      puVar5 = (undefined8 *)pvVar12;
      if (lVar10 + 0x20U < 0xff0) {
LAB_001f16d4:
        *(long *)((long)puVar5 + 8) = lVar10 + 0x20;
        puVar7 = (undefined8 *)((long)puVar5 + lVar10 + 0x10);
        *puVar7 = &PTR_FUN_0020d1a8;
        *(undefined4 *)((long)puVar5 + lVar10 + 0x18) = 0x1010116;
LAB_001f16f8:
        puVar7[2] = puVar6;
        puVar7[3] = lVar11;
        return puVar7;
      }
      puVar5 = (undefined8 *)malloc(0x1000);
      if (puVar5 != (undefined8 *)0x0) {
        lVar10 = 0;
        *puVar5 = pvVar12;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
        goto LAB_001f16d4;
      }
      goto LAB_001f178c;
    }
  }
  puVar6 = (undefined8 *)FUN_001f5778(param_1);
  puVar5 = puVar6;
  if ((puVar6 != (undefined8 *)0x0) && (bVar4)) {
    pvVar12 = (void *)param_1[0x266];
    lVar11 = *(long *)((long)pvVar12 + 8);
    puVar7 = (undefined8 *)pvVar12;
    if (0xfef < lVar11 + 0x20U) {
      puVar7 = (undefined8 *)malloc(0x1000);
      if (puVar7 == (undefined8 *)0x0) {
LAB_001f178c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar11 = 0;
      *puVar7 = pvVar12;
      puVar7[1] = 0;
      param_1[0x266] = (long)puVar7;
    }
    *(long *)((long)puVar7 + 8) = lVar11 + 0x20;
    puVar5 = (undefined8 *)((long)puVar7 + lVar11 + 0x10);
    *puVar5 = &PTR_FUN_0020d368;
    *(undefined4 *)((long)puVar7 + lVar11 + 0x18) = 0x1010126;
    *(undefined8 **)((long)puVar7 + lVar11 + 0x20) = puVar6;
  }
  return puVar5;
}


// ===== 001f1790  FUN_001f1790 =====

void FUN_001f1790(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  
  pcVar1 = (char *)*param_1;
  if ((((char *)param_1[1] != pcVar1) && (param_1[1] - (long)pcVar1 != 1)) && (*pcVar1 == 'd')) {
    cVar2 = pcVar1[1];
    if (cVar2 == 'X') {
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_001ede40(param_1);
      if (((lVar3 != 0) && (lVar4 = FUN_001ede40(param_1), lVar4 != 0)) &&
         (lVar6 = FUN_001f1790(param_1), lVar6 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar8 + 8);
        puVar5 = (undefined8 *)pvVar8;
        if (0xfef < lVar7 + 0x30U) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) {
LAB_001f19b8:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar7 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar7 + 0x30;
        *(undefined ***)((long)puVar5 + lVar7 + 0x10) = &PTR_FUN_0020d528;
        *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x101014a;
        *(long *)((long)puVar5 + lVar7 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar7 + 0x28) = lVar4;
        *(long *)((long)puVar5 + lVar7 + 0x30) = lVar6;
      }
    }
    else if (cVar2 == 'x') {
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_001ede40(param_1);
      if ((lVar3 != 0) && (lVar4 = FUN_001f1790(param_1), lVar4 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar8 + 8);
        puVar5 = (undefined8 *)pvVar8;
        if (0xfef < lVar6 + 0x30U) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_001f19b8;
          lVar6 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x30;
        *(undefined ***)((long)puVar5 + lVar6 + 0x10) = &PTR_FUN_0020d4b8;
        *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x1010149;
        *(long *)((long)puVar5 + lVar6 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar6 + 0x28) = lVar4;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x30) = 1;
      }
    }
    else {
      if (cVar2 != 'i') goto LAB_001f186c;
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_001f59e0(param_1);
      if ((lVar3 != 0) && (lVar4 = FUN_001f1790(param_1), lVar4 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar8 + 8);
        puVar5 = (undefined8 *)pvVar8;
        if (0xfef < lVar6 + 0x30U) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_001f19b8;
          lVar6 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x30;
        *(undefined ***)((long)puVar5 + lVar6 + 0x10) = &PTR_FUN_0020d4b8;
        *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x1010149;
        *(long *)((long)puVar5 + lVar6 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar6 + 0x28) = lVar4;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x30) = 0;
      }
    }
    return;
  }
LAB_001f186c:
  FUN_001ede40(param_1);
  return;
}


// ===== 001f19bc  FUN_001f19bc =====

undefined8 * FUN_001f19bc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  void *pvVar9;
  
  pbVar7 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  pbVar6 = pbVar7;
  if ((pbVar7 != pbVar1) && (*pbVar7 == 0x6e)) {
    pbVar6 = pbVar7 + 1;
    *param_1 = (long)pbVar6;
  }
  if ((pbVar6 == pbVar1) || (9 < *pbVar6 - 0x30)) {
    pbVar7 = (byte *)0x0;
    pbVar5 = pbVar6;
    pbVar8 = (byte *)0x0;
  }
  else {
    do {
      pbVar6 = pbVar6 + 1;
      *param_1 = (long)pbVar6;
      pbVar5 = pbVar1;
      pbVar8 = pbVar1;
      if (pbVar1 == pbVar6) break;
      pbVar5 = pbVar6;
      pbVar8 = pbVar6;
    } while (*pbVar6 - 0x30 < 10);
  }
  puVar2 = (undefined8 *)0x0;
  if ((pbVar7 != pbVar8) && (pbVar5 != pbVar1)) {
    if (*pbVar5 == 0x45) {
      pvVar9 = (void *)param_1[0x266];
      *param_1 = (long)(pbVar5 + 1);
      lVar4 = *(long *)((long)pvVar9 + 8);
      puVar3 = (undefined8 *)pvVar9;
      if (0xfef < lVar4 + 0x30U) {
        puVar3 = (undefined8 *)malloc(0x1000);
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar4 = 0;
        *puVar3 = pvVar9;
        puVar3[1] = 0;
        param_1[0x266] = (long)puVar3;
      }
      *(long *)((long)puVar3 + 8) = lVar4 + 0x30;
      puVar2 = (undefined8 *)((long)puVar3 + lVar4 + 0x10);
      *puVar2 = &PTR_FUN_0020c728;
      *(undefined4 *)((long)puVar3 + lVar4 + 0x18) = 0x1010145;
      *(undefined8 *)((long)puVar3 + lVar4 + 0x20) = param_2;
      *(undefined8 *)((long)puVar3 + lVar4 + 0x28) = param_3;
      *(byte **)((long)puVar3 + lVar4 + 0x30) = pbVar7;
      *(byte **)((long)puVar3 + lVar4 + 0x38) = pbVar8;
    }
    else {
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}


// ===== 001f1b0c  FUN_001f1b0c =====

undefined8 * FUN_001f1b0c(long *param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  size_t __n;
  undefined *puVar5;
  ulong uVar6;
  uint __c;
  long lVar7;
  char *pcVar8;
  long lVar9;
  byte *pbVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  void *pvVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 **local_d8;
  long *local_d0;
  long lStack_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_2 != 0) {
    param_1[0x54] = param_1[0x53];
  }
  pcVar8 = (char *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if ((1 < (ulong)((long)pbVar1 - (long)pcVar8)) && (*pcVar8 == 'U')) {
    if (pcVar8[1] == 't') {
      pbVar14 = (byte *)(pcVar8 + 2);
      *param_1 = (long)pbVar14;
      if ((pbVar1 == pbVar14) || (9 < *pbVar14 - 0x30)) {
        pbVar10 = pbVar14;
        pbVar14 = (byte *)0x0;
        pbVar15 = (byte *)0x0;
      }
      else {
        pbVar3 = (byte *)(pcVar8 + 3);
        do {
          pbVar10 = pbVar3;
          *param_1 = (long)pbVar10;
          pbVar15 = pbVar1;
          if (pbVar1 == pbVar10) break;
          pbVar3 = pbVar10 + 1;
          pbVar15 = pbVar10;
        } while (*pbVar10 - 0x30 < 10);
      }
      if ((pbVar10 != pbVar1) && (*pbVar10 == 0x5f)) {
        pvVar17 = (void *)param_1[0x266];
        *param_1 = (long)(pbVar10 + 1);
        lVar7 = *(long *)((long)pvVar17 + 8);
        puVar4 = (undefined8 *)pvVar17;
        if (0xfef < lVar7 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f20b8;
          lVar7 = 0;
          *puVar4 = pvVar17;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
        puVar20 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
        *puVar20 = &PTR_FUN_0020c9c8;
        *(undefined4 *)((long)puVar4 + lVar7 + 0x18) = 0x101012c;
        *(byte **)((long)puVar4 + lVar7 + 0x20) = pbVar14;
        *(byte **)((long)puVar4 + lVar7 + 0x28) = pbVar15;
        goto LAB_001f1dcc;
      }
    }
    else if (*pcVar8 == 'U') {
      if (pcVar8[1] == 'l') {
        lVar21 = param_1[0x62];
        *param_1 = (long)(pcVar8 + 2);
        local_d8 = &local_c0;
        lStack_c8 = param_1[0x54] - param_1[0x53] >> 3;
        local_b0 = &local_68;
        param_1[0x62] = lStack_c8;
        uStack_a0 = 0;
        local_a8 = 0;
        uStack_90 = 0;
        local_98 = 0;
        uStack_80 = 0;
        local_88 = 0;
        uStack_70 = 0;
        local_78 = 0;
        local_d0 = param_1;
        local_c0 = &local_a8;
        puStack_b8 = &local_a8;
        FUN_001edb54(param_1 + 0x53,&local_d8);
        plVar18 = param_1 + 2;
        lVar16 = *plVar18;
        pcVar8 = (char *)*param_1;
        lVar19 = param_1[3];
        lVar7 = lVar19;
        lVar9 = lVar16;
        if ((char *)param_1[1] != pcVar8) {
          while (*pcVar8 == 'T') {
                    /* try { // try from 001f1e24 to 001f1e2f has its CatchHandler @ 001f20c4 */
            __n = __strlen_chk(&DAT_00145ae4,5);
            if ((ulong)(param_1[1] - *param_1) < 2) {
              __c = 0;
            }
            else {
              __c = (uint)*(byte *)(*param_1 + 1);
            }
            if (((__n == 0) ||
                (puVar5 = (undefined *)memchr(&DAT_00145ae4,__c,__n), puVar5 == (undefined *)0x0))
               || (puVar5 == &UNK_00145ae3)) break;
                    /* try { // try from 001f1e6c to 001f1e73 has its CatchHandler @ 001f20c0 */
            local_d8 = (undefined8 **)FUN_001f2d44(param_1);
            if (local_d8 == (undefined8 **)0x0) goto LAB_001f2040;
            FUN_001ec198(plVar18,&local_d8);
            pcVar8 = (char *)*param_1;
            if ((char *)param_1[1] == pcVar8) break;
          }
          lVar7 = param_1[3];
          lVar9 = param_1[2];
        }
        lVar16 = (lVar19 - lVar16 >> 3) * 8;
        auVar22 = FUN_001f530c(param_1,lVar9 + lVar16,lVar7);
        param_1[3] = param_1[2] + lVar16;
        if (auVar22._8_8_ == 0) {
          param_1[0x54] = param_1[0x54] + -8;
        }
                    /* try { // try from 001f1ed4 to 001f1ee3 has its CatchHandler @ 001f20bc */
        uVar6 = __strlen_chk(&DAT_00145928,3);
        pcVar8 = (char *)*param_1;
        if ((ulong)(param_1[1] - (long)pcVar8) < uVar6) {
LAB_001f1ef4:
          do {
                    /* try { // try from 001f1ef4 to 001f1efb has its CatchHandler @ 001f20c8 */
            local_d8 = (undefined8 **)FUN_001e9ce4(param_1);
            if (local_d8 == (undefined8 **)0x0) goto LAB_001f2040;
            FUN_001ec198(plVar18,&local_d8);
            pcVar8 = (char *)*param_1;
          } while ((pcVar8 == (char *)param_1[1]) || (*pcVar8 != 'E'));
          pcVar8 = pcVar8 + 1;
        }
        else {
          if (uVar6 != 0) {
            pcVar11 = "vE";
            uVar12 = uVar6;
            pcVar13 = pcVar8;
            do {
              if (*pcVar11 != *pcVar13) goto LAB_001f1ef4;
              pcVar11 = pcVar11 + 1;
              uVar12 = uVar12 - 1;
              pcVar13 = pcVar13 + 1;
            } while (uVar12 != 0);
          }
          pcVar8 = pcVar8 + uVar6;
        }
        *param_1 = (long)pcVar8;
        auVar23 = FUN_001f530c(param_1,param_1[2] + lVar16,param_1[3]);
        pbVar1 = (byte *)param_1[1];
        pbVar10 = (byte *)*param_1;
        param_1[3] = param_1[2] + lVar16;
        pbVar14 = pbVar10;
        if ((pbVar1 == pbVar10) || (9 < *pbVar10 - 0x30)) {
          pbVar15 = (byte *)0x0;
          pbVar10 = (byte *)0x0;
        }
        else {
          do {
            pbVar14 = pbVar14 + 1;
            *param_1 = (long)pbVar14;
            pbVar15 = pbVar1;
            if (pbVar1 == pbVar14) break;
            pbVar15 = pbVar14;
          } while (*pbVar14 - 0x30 < 10);
        }
        if ((pbVar14 == pbVar1) || (*pbVar14 != 0x5f)) {
LAB_001f2040:
          puVar20 = (undefined8 *)0x0;
        }
        else {
          pvVar17 = (void *)param_1[0x266];
          *param_1 = (long)(pbVar14 + 1);
          lVar7 = *(long *)((long)pvVar17 + 8);
          puVar4 = (undefined8 *)pvVar17;
          if (0xfef < lVar7 + 0x40U) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) {
LAB_001f20b8:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar7 = 0;
            *puVar4 = pvVar17;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar7 + 0x40;
          puVar20 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
          *puVar20 = &PTR_FUN_0020cc68;
          *(undefined4 *)((long)puVar4 + lVar7 + 0x18) = 0x101012d;
          *(undefined1 (*) [16])((long)puVar4 + lVar7 + 0x20) = auVar22;
          *(undefined1 (*) [16])((long)puVar4 + lVar7 + 0x30) = auVar23;
          *(byte **)((long)puVar4 + lVar7 + 0x40) = pbVar10;
          *(byte **)((long)puVar4 + lVar7 + 0x48) = pbVar15;
        }
        local_d0[0x54] = local_d0[0x53] + lStack_c8 * 8;
        if (local_c0 != &local_a8) {
          free(local_c0);
        }
        param_1[0x62] = lVar21;
        goto LAB_001f1dcc;
      }
      if ((*pcVar8 == 'U') && (pcVar8[1] == 'b')) {
        pbVar14 = (byte *)(pcVar8 + 2);
        *param_1 = (long)pbVar14;
        if ((pbVar1 != pbVar14) && (*pbVar14 - 0x30 < 10)) {
          pbVar10 = (byte *)(pcVar8 + 3);
          do {
            pbVar14 = pbVar10;
            *param_1 = (long)pbVar14;
            if (pbVar1 == pbVar14) break;
            pbVar10 = pbVar14 + 1;
          } while (*pbVar14 - 0x30 < 10);
        }
        if ((pbVar14 != pbVar1) && (*pbVar14 == 0x5f)) {
          pvVar17 = (void *)param_1[0x266];
          *param_1 = (long)(pbVar14 + 1);
          lVar7 = *(long *)((long)pvVar17 + 8);
          puVar4 = (undefined8 *)pvVar17;
          if (0xfef < lVar7 + 0x20U) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) goto LAB_001f20b8;
            lVar7 = 0;
            *puVar4 = pvVar17;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar7 + 0x20;
          puVar20 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
          *puVar20 = &PTR_FUN_0020c5d8;
          *(undefined4 *)((long)puVar4 + lVar7 + 0x18) = 0x1010107;
          *(char **)((long)puVar4 + lVar7 + 0x20) = "\'block-literal\'";
          *(char **)((long)puVar4 + lVar7 + 0x28) = "";
          goto LAB_001f1dcc;
        }
      }
    }
  }
  puVar20 = (undefined8 *)0x0;
LAB_001f1dcc:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar20;
}


// ===== 001f20f8  FUN_001f20f8 =====

void FUN_001f20f8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  size_t sVar6;
  char *__src;
  
  if (3 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10))) {
    lVar5 = param_2[1];
    uVar1 = lVar5 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f23d0;
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar5) = 0x28;
    lVar5 = param_2[1] + 1;
    param_2[1] = lVar5;
    pvVar2 = *(void **)(param_1 + 0x10);
    sVar6 = *(long *)(param_1 + 0x18) - (long)pvVar2;
    if (sVar6 != 0) {
      uVar1 = lVar5 + sVar6;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar4 = param_2[2] << 1;
        if (uVar1 <= uVar4) {
          uVar1 = uVar4;
        }
        param_2[2] = uVar1;
        pvVar3 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_001f23d0;
        lVar5 = param_2[1];
      }
      memmove((void *)((long)pvVar3 + lVar5),pvVar2,sVar6);
      lVar5 = param_2[1] + sVar6;
      param_2[1] = lVar5;
    }
    uVar1 = lVar5 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f23d0;
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar5) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  __src = *(char **)(param_1 + 0x20);
  if (*__src == 'n') {
    lVar5 = param_2[1];
    uVar1 = lVar5 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f23d0;
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar5) = 0x2d;
    lVar5 = param_2[1] + 1;
    param_2[1] = lVar5;
    pvVar2 = *(void **)(param_1 + 0x20);
    if (*(void **)(param_1 + 0x28) != pvVar2) {
      pvVar2 = (void *)((long)pvVar2 + 1);
    }
    sVar6 = (long)*(void **)(param_1 + 0x28) - (long)pvVar2;
    if (sVar6 != 0) {
      uVar1 = lVar5 + sVar6;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar4 = param_2[2] << 1;
        if (uVar1 <= uVar4) {
          uVar1 = uVar4;
        }
        param_2[2] = uVar1;
        pvVar3 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_001f23d0;
        lVar5 = param_2[1];
      }
      memmove((void *)((long)pvVar3 + lVar5),pvVar2,sVar6);
      lVar5 = param_2[1] + sVar6;
LAB_001f2350:
      param_2[1] = lVar5;
    }
  }
  else {
    sVar6 = *(long *)(param_1 + 0x28) - (long)__src;
    if (sVar6 != 0) {
      lVar5 = param_2[1];
      uVar1 = lVar5 + sVar6;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar2 = (void *)*param_2;
      }
      else {
        uVar4 = param_2[2] << 1;
        if (uVar1 <= uVar4) {
          uVar1 = uVar4;
        }
        param_2[2] = uVar1;
        pvVar2 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_001f23d0;
        lVar5 = param_2[1];
      }
      memmove((void *)((long)pvVar2 + lVar5),__src,sVar6);
      lVar5 = param_2[1] + sVar6;
      goto LAB_001f2350;
    }
  }
  pvVar2 = *(void **)(param_1 + 0x10);
  sVar6 = *(long *)(param_1 + 0x18) - (long)pvVar2;
  if (sVar6 - 1 < 3) {
    lVar5 = param_2[1];
    uVar1 = lVar5 + sVar6;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_001f23d0:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,sVar6);
    param_2[1] = param_2[1] + sVar6;
  }
  return;
}


// ===== 001f23d4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f23d8  FUN_001f23d8 =====

void FUN_001f23d8(long param_1,undefined8 *param_2)

{
  ulong __size;
  size_t __n;
  char *__src;
  char cVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  
  cVar1 = *(char *)(param_1 + 0xc);
  lVar4 = param_2[1];
  __n = 4;
  if (cVar1 == '\0') {
    __n = 5;
  }
  __size = lVar4 + __n;
  if (__size < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (__size <= uVar3) {
      __size = uVar3;
    }
    param_2[2] = __size;
    pvVar2 = realloc((void *)*param_2,__size);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  __src = "false";
  if (cVar1 != '\0') {
    __src = "true";
  }
  memmove((void *)((long)pvVar2 + lVar4),__src,__n);
  param_2[1] = param_2[1] + __n;
  return;
}


// ===== 001f247c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f2480  FUN_001f2480 =====

void FUN_001f2480(long param_1,undefined8 *param_2)

{
  ulong __size;
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  undefined1 uVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  size_t __n;
  float local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar7 = tpidr_el0;
  local_38 = *(long *)(lVar7 + 0x28);
  pbVar5 = *(byte **)(param_1 + 0x10);
  if (8 < (*(long *)(param_1 + 0x18) - (long)pbVar5) + 1U) {
    cVar15 = '\t';
    cVar1 = cVar15;
    if (*pbVar5 - 0x30 < 10) {
      cVar1 = '\0';
    }
    cVar17 = -0x57;
    cVar2 = -0x57;
    if (pbVar5[1] - 0x30 < 10) {
      cVar2 = -0x30;
    }
    if (pbVar5[2] - 0x30 < 10) {
      cVar15 = '\0';
    }
    if (pbVar5[3] - 0x30 < 10) {
      cVar17 = -0x30;
    }
    cVar16 = '\t';
    cVar3 = cVar16;
    if (pbVar5[4] - 0x30 < 10) {
      cVar3 = '\0';
    }
    cVar18 = -0x57;
    cVar4 = cVar18;
    if (pbVar5[5] - 0x30 < 10) {
      cVar4 = -0x30;
    }
    puVar11 = (undefined1 *)((ulong)local_58 | 2);
    if (pbVar5[6] - 0x30 < 10) {
      cVar16 = '\0';
    }
    if (pbVar5[7] - 0x30 < 10) {
      cVar18 = -0x30;
    }
    local_58[0] = (float)CONCAT31(CONCAT12(cVar2 + pbVar5[1] + (cVar1 + *pbVar5) * '\x10',
                                           CONCAT11(cVar4 + pbVar5[5] + (cVar3 + pbVar5[4]) * '\x10'
                                                    ,cVar17 + pbVar5[3] +
                                                     (cVar15 + pbVar5[2]) * '\x10')),
                                  cVar18 + pbVar5[7] + (cVar16 + pbVar5[6]) * '\x10');
    puVar14 = puVar11;
    do {
      uVar6 = puVar11[-1];
      puVar11[-1] = *puVar14;
      *puVar14 = uVar6;
      bVar8 = puVar11 < puVar14 + -1;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + -1;
    } while (bVar8);
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    iVar9 = FUN_001f2668((double)local_58[0],&local_50,0x18,0x18,&DAT_00145794);
    if (iVar9 != 0) {
      lVar13 = param_2[1];
      __n = (size_t)iVar9;
      __size = lVar13 + __n;
      if (__size < (ulong)param_2[2]) {
        pvVar10 = (void *)*param_2;
      }
      else {
        uVar12 = param_2[2] << 1;
        if (__size <= uVar12) {
          __size = uVar12;
        }
        param_2[2] = __size;
        pvVar10 = realloc((void *)*param_2,__size);
        *param_2 = pvVar10;
        if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar13 = param_2[1];
      }
      memmove((void *)((long)pvVar10 + lVar13),&local_50,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001f2664  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f2668  FUN_001f2668 =====

void FUN_001f2668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  long lVar2;
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
  puStack_60 = &local_90;
  uStack_58 = 0xffffff80ffffffe0;
  local_90 = param_6;
  uStack_88 = param_7;
  local_80 = param_8;
  uStack_78 = param_9;
  local_70 = (undefined1 *)register0x00000008;
  __vsnprintf_chk(param_2,param_4,0,param_3,param_5,&local_70,param_8,param_9,param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001f270c  FUN_001f270c =====

void FUN_001f270c(long param_1,undefined8 *param_2)

{
  ulong __size;
  char cVar1;
  char cVar2;
  byte *pbVar3;
  undefined1 uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  char cVar11;
  char cVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  size_t __n;
  char local_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  pbVar3 = *(byte **)(param_1 + 0x10);
  if (0x10 < (*(long *)(param_1 + 0x18) - (long)pbVar3) + 1U) {
    cVar11 = '\t';
    cVar1 = cVar11;
    if (*pbVar3 - 0x30 < 10) {
      cVar1 = '\0';
    }
    cVar12 = -0x57;
    cVar2 = -0x57;
    if (pbVar3[1] - 0x30 < 10) {
      cVar2 = -0x30;
    }
    cStack_61 = cVar2 + pbVar3[1] + (cVar1 + *pbVar3) * '\x10';
    if (pbVar3[2] - 0x30 < 10) {
      cVar11 = '\0';
    }
    if (pbVar3[3] - 0x30 < 10) {
      cVar12 = -0x30;
    }
    cStack_67 = cVar12 + pbVar3[3] + (cVar11 + pbVar3[2]) * '\x10';
    cVar11 = '\t';
    cVar1 = cVar11;
    if (pbVar3[4] - 0x30 < 10) {
      cVar1 = '\0';
    }
    cVar12 = -0x57;
    cVar2 = cVar12;
    if (pbVar3[5] - 0x30 < 10) {
      cVar2 = -0x30;
    }
    cStack_66 = cVar2 + pbVar3[5] + (cVar1 + pbVar3[4]) * '\x10';
    cVar1 = cVar11;
    if (pbVar3[6] - 0x30 < 10) {
      cVar1 = '\0';
    }
    cVar2 = cVar12;
    if (pbVar3[7] - 0x30 < 10) {
      cVar2 = -0x30;
    }
    cStack_65 = cVar2 + pbVar3[7] + (cVar1 + pbVar3[6]) * '\x10';
    cVar1 = cVar11;
    if (pbVar3[8] - 0x30 < 10) {
      cVar1 = '\0';
    }
    cVar2 = -0x57;
    if (pbVar3[9] - 0x30 < 10) {
      cVar2 = -0x30;
    }
    cStack_64 = cVar2 + pbVar3[9] + (cVar1 + pbVar3[8]) * '\x10';
    if (pbVar3[10] - 0x30 < 10) {
      cVar11 = '\0';
    }
    if (pbVar3[0xb] - 0x30 < 10) {
      cVar12 = -0x30;
    }
    cStack_63 = cVar12 + pbVar3[0xb] + (cVar11 + pbVar3[10]) * '\x10';
    cVar11 = '\t';
    cVar1 = cVar11;
    if (pbVar3[0xc] - 0x30 < 10) {
      cVar1 = '\0';
    }
    cVar12 = -0x57;
    cVar2 = cVar12;
    if (pbVar3[0xd] - 0x30 < 10) {
      cVar2 = -0x30;
    }
    cStack_62 = cVar2 + pbVar3[0xd] + (cVar1 + pbVar3[0xc]) * '\x10';
    puVar13 = (undefined1 *)((ulong)&local_68 | 2);
    if (pbVar3[0xe] - 0x30 < 10) {
      cVar11 = '\0';
    }
    if (pbVar3[0xf] - 0x30 < 10) {
      cVar12 = -0x30;
    }
    local_68 = cVar12 + pbVar3[0xf] + (cVar11 + pbVar3[0xe]) * '\x10';
    puVar14 = (undefined1 *)((ulong)&local_68 | 6);
    do {
      uVar4 = puVar13[-1];
      puVar13[-1] = *puVar14;
      *puVar14 = uVar4;
      bVar6 = puVar13 < puVar14 + -1;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + -1;
    } while (bVar6);
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    iVar7 = FUN_001f2668(CONCAT17(cStack_61,
                                  CONCAT16(cStack_62,
                                           CONCAT15(cStack_63,
                                                    CONCAT14(cStack_64,
                                                             CONCAT13(cStack_65,
                                                                      CONCAT12(cStack_66,
                                                                               CONCAT11(cStack_67,
                                                                                        local_68))))
                                                   ))),&local_60,0x20,0x20,&DAT_001452c3);
    if (iVar7 != 0) {
      lVar10 = param_2[1];
      __n = (size_t)iVar7;
      __size = lVar10 + __n;
      if (__size < (ulong)param_2[2]) {
        pvVar8 = (void *)*param_2;
      }
      else {
        uVar9 = param_2[2] << 1;
        if (__size <= uVar9) {
          __size = uVar9;
        }
        param_2[2] = __size;
        pvVar8 = realloc((void *)*param_2,__size);
        *param_2 = pvVar8;
        if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar10 = param_2[1];
      }
      memmove((void *)((long)pvVar8 + lVar10),&local_60,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001f29b4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f29b8  FUN_001f29b8 =====

void FUN_001f29b8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  char cVar10;
  size_t __n;
  byte bVar11;
  byte bVar12;
  char cVar13;
  byte bVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  byte local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pbVar9 = *(byte **)(param_1 + 0x10);
  if (0x20 < (*(long *)(param_1 + 0x18) - (long)pbVar9) + 1U) {
    pbVar7 = local_60;
    if ((&local_70 < pbVar9 + 0x20) && (pbVar9 < pbVar7)) {
      lVar6 = 0;
      uVar1 = 0;
      do {
        uVar8 = uVar1;
        bVar11 = pbVar9[lVar6];
        bVar12 = (pbVar9 + lVar6)[1];
        lVar6 = lVar6 + 2;
        cVar13 = '\t';
        if (bVar11 - 0x30 < 10) {
          cVar13 = '\0';
        }
        cVar10 = -0x57;
        if (bVar12 - 0x30 < 10) {
          cVar10 = -0x30;
        }
        cVar13 = cVar10 + bVar12 + (cVar13 + bVar11) * '\x10';
        *(char *)((long)&local_70 + uVar8) = cVar13;
        uVar1 = uVar8 + 1;
      } while (lVar6 != 0x20);
      pbVar7 = (byte *)((long)&local_70 + uVar8 + 1);
    }
    else {
      bVar11 = pbVar9[2];
      bVar14 = pbVar9[3];
      bVar12 = pbVar9[0x12];
      bVar15 = pbVar9[0x13];
      uVar8 = 0xf;
      auVar24._0_4_ = (CONCAT12(bVar11,(ushort)*pbVar9) & 0xffff) - 0x30;
      auVar24._4_4_ = bVar11 - 0x30;
      auVar24._8_4_ = pbVar9[4] - 0x30;
      auVar24._12_4_ = pbVar9[6] - 0x30;
      auVar23._0_4_ = pbVar9[8] - 0x30;
      auVar23._4_4_ = pbVar9[10] - 0x30;
      auVar23._8_4_ = pbVar9[0xc] - 0x30;
      auVar23._12_4_ = pbVar9[0xe] - 0x30;
      auVar26._0_4_ = (CONCAT12(bVar12,(ushort)pbVar9[0x10]) & 0xffff) - 0x30;
      auVar26._4_4_ = bVar12 - 0x30;
      auVar26._8_4_ = pbVar9[0x14] - 0x30;
      auVar26._12_4_ = pbVar9[0x16] - 0x30;
      auVar17._0_4_ = pbVar9[0x18] - 0x30;
      auVar17._4_4_ = pbVar9[0x1a] - 0x30;
      auVar17._8_4_ = pbVar9[0x1c] - 0x30;
      auVar17._12_4_ = pbVar9[0x1e] - 0x30;
      auVar22._0_4_ = pbVar9[9] - 0x30;
      auVar22._4_4_ = pbVar9[0xb] - 0x30;
      auVar22._8_4_ = pbVar9[0xd] - 0x30;
      auVar22._12_4_ = pbVar9[0xf] - 0x30;
      auVar27._0_4_ = (CONCAT12(bVar15,(ushort)pbVar9[0x11]) & 0xffff) - 0x30;
      auVar27._4_4_ = bVar15 - 0x30;
      auVar27._8_4_ = pbVar9[0x15] - 0x30;
      auVar27._12_4_ = pbVar9[0x17] - 0x30;
      auVar16._0_4_ = pbVar9[0x19] - 0x30;
      auVar16._4_4_ = pbVar9[0x1b] - 0x30;
      auVar16._8_4_ = pbVar9[0x1d] - 0x30;
      auVar16._12_4_ = pbVar9[0x1f] - 0x30;
      auVar20._8_4_ = 9;
      auVar20._0_8_ = 0x900000009;
      auVar20._12_4_ = 9;
      auVar26 = NEON_cmhi(auVar26,auVar20,4);
      auVar17 = NEON_cmhi(auVar17,auVar20,4);
      auVar24 = NEON_cmhi(auVar24,auVar20,4);
      auVar18 = NEON_cmhi(auVar23,auVar20,4);
      auVar16 = NEON_cmhi(auVar16,auVar20,4);
      auVar27 = NEON_cmhi(auVar27,auVar20,4);
      auVar23 = NEON_cmhi(auVar22,auVar20,4);
      auVar21._4_4_ = bVar14 - 0x30;
      auVar21._0_4_ = (CONCAT12(bVar14,(ushort)pbVar9[1]) & 0xffff) - 0x30;
      auVar21._8_4_ = pbVar9[5] - 0x30;
      auVar21._12_4_ = pbVar9[7] - 0x30;
      auVar21 = NEON_cmhi(auVar21,auVar20,4);
      uVar1 = (ulong)CONCAT15(auVar18[0xc],
                              CONCAT14(auVar18[8],
                                       CONCAT13(auVar18[4],
                                                CONCAT12(auVar18[0],
                                                         CONCAT11(auVar24[0xc],auVar24[8]))))) &
              0x90909090909;
      auVar19[1] = auVar21[4];
      auVar19[0] = auVar21[0];
      auVar19[2] = auVar21[8];
      auVar19[3] = auVar21[0xc];
      auVar19[4] = auVar23[0];
      auVar19[5] = auVar23[4];
      auVar19[6] = auVar23[8];
      auVar19[7] = auVar23[0xc];
      auVar25[8] = 0xd0;
      auVar25._0_8_ = 0xd0d0d0d0d0d0d0d0;
      auVar25[9] = 0xd0;
      auVar25[10] = 0xd0;
      auVar25[0xb] = 0xd0;
      auVar25[0xc] = 0xd0;
      auVar25[0xd] = 0xd0;
      auVar25[0xe] = 0xd0;
      auVar25[0xf] = 0xd0;
      auVar18[8] = 0xa9;
      auVar18._0_8_ = 0xa9a9a9a9a9a9a9a9;
      auVar18[9] = 0xa9;
      auVar18[10] = 0xa9;
      auVar18[0xb] = 0xa9;
      auVar18[0xc] = 0xa9;
      auVar18[0xd] = 0xa9;
      auVar18[0xe] = 0xa9;
      auVar18[0xf] = 0xa9;
      auVar19[8] = auVar27[0];
      auVar19[9] = auVar27[4];
      auVar19[10] = auVar27[8];
      auVar19[0xb] = auVar27[0xc];
      auVar19[0xc] = auVar16[0];
      auVar19[0xd] = auVar16[4];
      auVar19[0xe] = auVar16[8];
      auVar19[0xf] = auVar16[0xc];
      auVar21 = NEON_bif(auVar18,auVar25,auVar19,1);
      local_70 = CONCAT17(auVar21[7] + pbVar9[0xf] + ((char)(uVar1 >> 0x28) + pbVar9[0xe]) * '\x10',
                          CONCAT16(auVar21[6] + pbVar9[0xd] +
                                   ((char)(uVar1 >> 0x20) + pbVar9[0xc]) * '\x10',
                                   CONCAT15(auVar21[5] + pbVar9[0xb] +
                                            ((char)(uVar1 >> 0x18) + pbVar9[10]) * '\x10',
                                            CONCAT14(auVar21[4] + pbVar9[9] +
                                                     ((char)(uVar1 >> 0x10) + pbVar9[8]) * '\x10',
                                                     CONCAT13(auVar21[3] + pbVar9[7] +
                                                              ((char)(uVar1 >> 8) + pbVar9[6]) *
                                                              '\x10',CONCAT12(auVar21[2] + pbVar9[5]
                                                                              + ((char)uVar1 +
                                                                                pbVar9[4]) * '\x10',
                                                                              CONCAT11(auVar21[1] +
                                                                                       bVar14 + ((
                                                  auVar24[4] & 9) + bVar11) * '\x10',
                                                  auVar21[0] + pbVar9[1] +
                                                  ((auVar24[0] & 9) + *pbVar9) * '\x10')))))));
      cVar13 = auVar21[0xf] + pbVar9[0x1f] + ((auVar17[0xc] & 9) + pbVar9[0x1e]) * '\x10';
      uStack_68 = CONCAT17(cVar13,CONCAT16(auVar21[0xe] + pbVar9[0x1d] +
                                           ((auVar17[8] & 9) + pbVar9[0x1c]) * '\x10',
                                           CONCAT15(auVar21[0xd] + pbVar9[0x1b] +
                                                    ((auVar17[4] & 9) + pbVar9[0x1a]) * '\x10',
                                                    CONCAT14(auVar21[0xc] + pbVar9[0x19] +
                                                             ((auVar17[0] & 9) + pbVar9[0x18]) *
                                                             '\x10',CONCAT13(auVar21[0xb] +
                                                                             pbVar9[0x17] +
                                                                             ((auVar26[0xc] & 9) +
                                                                             pbVar9[0x16]) * '\x10',
                                                                             CONCAT12(auVar21[10] +
                                                                                      pbVar9[0x15] +
                                                                                      ((auVar26[8] &
                                                                                       9) + pbVar9[
                                                  0x14]) * '\x10',
                                                  CONCAT11(auVar21[9] + bVar15 +
                                                           ((auVar26[4] & 9) + bVar12) * '\x10',
                                                           auVar21[8] + pbVar9[0x11] +
                                                           ((auVar26[0] & 9) + pbVar9[0x10]) *
                                                           '\x10')))))));
    }
    if ((pbVar7 != (byte *)&local_70) && (&local_70 < (undefined1 *)((long)&local_70 + uVar8))) {
      bVar11 = (byte)local_70;
      local_70 = CONCAT71(local_70._1_7_,cVar13);
      *(byte *)((long)&local_70 + uVar8) = bVar11;
      if (2 < uVar8) {
        pbVar9 = (byte *)((ulong)&local_70 | 2);
        pbVar7 = &local_71 + uVar8;
        do {
          bVar11 = pbVar9[-1];
          pbVar9[-1] = *pbVar7;
          *pbVar7 = bVar11;
          bVar3 = pbVar9 < pbVar7 + -1;
          pbVar9 = pbVar9 + 1;
          pbVar7 = pbVar7 + -1;
        } while (bVar3);
      }
    }
    local_60[0x20] = 0;
    local_60[0x21] = 0;
    local_60[0x22] = 0;
    local_60[0x23] = 0;
    local_60[0x24] = 0;
    local_60[0x25] = 0;
    local_60[0x26] = 0;
    local_60[0x27] = 0;
    local_60[8] = 0;
    local_60[9] = 0;
    local_60[10] = 0;
    local_60[0xb] = 0;
    local_60[0xc] = 0;
    local_60[0xd] = 0;
    local_60[0xe] = 0;
    local_60[0xf] = 0;
    local_60[0] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    local_60[4] = 0;
    local_60[5] = 0;
    local_60[6] = 0;
    local_60[7] = 0;
    local_60[0x18] = 0;
    local_60[0x19] = 0;
    local_60[0x1a] = 0;
    local_60[0x1b] = 0;
    local_60[0x1c] = 0;
    local_60[0x1d] = 0;
    local_60[0x1e] = 0;
    local_60[0x1f] = 0;
    local_60[0x10] = 0;
    local_60[0x11] = 0;
    local_60[0x12] = 0;
    local_60[0x13] = 0;
    local_60[0x14] = 0;
    local_60[0x15] = 0;
    local_60[0x16] = 0;
    local_60[0x17] = 0;
    iVar4 = FUN_001f2668(local_70,local_60,0x28,0x28,&DAT_00145135);
    if (iVar4 != 0) {
      lVar6 = param_2[1];
      __n = (size_t)iVar4;
      uVar1 = lVar6 + __n;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar8 = param_2[2] << 1;
        if (uVar1 <= uVar8) {
          uVar1 = uVar8;
        }
        param_2[2] = uVar1;
        pvVar5 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = param_2[1];
      }
      memmove((void *)((long)pvVar5 + lVar6),local_60,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001f2c40  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f2c44  FUN_001f2c44 =====

void FUN_001f2c44(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  uVar1 = lVar4 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f2d3c;
    lVar4 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar4) = 0x3c22;
  param_2[1] = param_2[1] + 2;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001f2d3c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar4) = 0x223e;
  param_2[1] = param_2[1] + 2;
  return;
}


// ===== 001f2d40  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f2d44  FUN_001f2d44 =====

undefined8 * FUN_001f2d44(long *param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  uint uVar12;
  long *plVar13;
  undefined8 *puVar14;
  void *pvVar15;
  undefined1 auVar16 [16];
  undefined8 **local_c8;
  long *local_c0;
  long lStack_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pcVar1 = (char *)*param_1;
  if ((1 < (ulong)(param_1[1] - (long)pcVar1)) && (*pcVar1 == 'T')) {
    if (pcVar1[1] == 'y') {
      lVar10 = param_1[99];
      pvVar15 = (void *)param_1[0x266];
      *param_1 = (long)(pcVar1 + 2);
      *(int *)(param_1 + 99) = (int)lVar10 + 1;
      lVar9 = *(long *)((long)pvVar15 + 8);
      puVar7 = (undefined8 *)pvVar15;
      if (0xfef < lVar9 + 0x20U) {
        puVar7 = (undefined8 *)malloc(0x1000);
        if (puVar7 == (undefined8 *)0x0) goto LAB_001f325c;
        lVar9 = 0;
        *puVar7 = pvVar15;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
      }
      *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
      plVar13 = (long *)((long)puVar7 + lVar9 + 0x10);
      *plVar13 = (long)&PTR_FUN_0020ca38;
      *(undefined8 *)((long)puVar7 + lVar9 + 0x18) = 0x101011b;
      *(int *)((long)puVar7 + lVar9 + 0x20) = (int)lVar10;
      local_c0 = plVar13;
      FUN_001f33d0(*(undefined8 *)(param_1[0x54] + -8),&local_c0);
      puVar14 = (undefined8 *)param_1[0x266];
      lVar10 = puVar14[1];
      puVar7 = puVar14;
      if (0xfef < lVar10 + 0x20U) {
        puVar7 = (undefined8 *)malloc(0x1000);
        if (puVar7 == (undefined8 *)0x0) {
LAB_001f325c:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar10 = 0;
        *puVar7 = puVar14;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
      }
      lVar9 = (long)puVar7 + lVar10;
      uVar12 = 0x1c;
      ppuVar11 = &PTR_FUN_0020caa8;
LAB_001f2e5c:
      puVar7[1] = lVar10 + 0x20;
      puVar14 = (undefined8 *)(lVar9 + 0x10);
      *puVar14 = ppuVar11;
      *(uint *)(lVar9 + 0x18) = uVar12 | 0x1010000;
      *(long **)(lVar9 + 0x20) = plVar13;
      goto LAB_001f3220;
    }
    if (*pcVar1 == 'T') {
      if (pcVar1[1] == 'n') {
        iVar2 = *(int *)((long)param_1 + 0x31c);
        pvVar15 = (void *)param_1[0x266];
        *param_1 = (long)(pcVar1 + 2);
        *(int *)((long)param_1 + 0x31c) = iVar2 + 1;
        lVar10 = *(long *)((long)pvVar15 + 8);
        puVar7 = (undefined8 *)pvVar15;
        if (0xfef < lVar10 + 0x20U) {
          puVar7 = (undefined8 *)malloc(0x1000);
          if (puVar7 == (undefined8 *)0x0) goto LAB_001f325c;
          lVar10 = 0;
          *puVar7 = pvVar15;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar10 + 0x20;
        plVar13 = (long *)((long)puVar7 + lVar10 + 0x10);
        *plVar13 = (long)&PTR_FUN_0020ca38;
        *(undefined8 *)((long)puVar7 + lVar10 + 0x18) = 0x10101011b;
        *(int *)((long)puVar7 + lVar10 + 0x20) = iVar2;
        local_c0 = plVar13;
        FUN_001f33d0(*(undefined8 *)(param_1[0x54] + -8),&local_c0);
        lVar10 = FUN_001e9ce4(param_1);
        if (lVar10 != 0) {
          pvVar15 = (void *)param_1[0x266];
          lVar9 = *(long *)((long)pvVar15 + 8);
          puVar7 = (undefined8 *)pvVar15;
          if (0xfef < lVar9 + 0x20U) {
            puVar7 = (undefined8 *)malloc(0x1000);
            if (puVar7 == (undefined8 *)0x0) goto LAB_001f325c;
            lVar9 = 0;
            *puVar7 = pvVar15;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
          puVar14 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
          *puVar14 = &PTR_FUN_0020cb18;
          *(undefined4 *)((long)puVar7 + lVar9 + 0x18) = 0x101001d;
          *(long **)((long)puVar7 + lVar9 + 0x20) = plVar13;
          *(long *)((long)puVar7 + lVar9 + 0x28) = lVar10;
          goto LAB_001f3220;
        }
      }
      else if (*pcVar1 == 'T') {
        if (pcVar1[1] == 't') {
          lVar10 = param_1[100];
          pvVar15 = (void *)param_1[0x266];
          *param_1 = (long)(pcVar1 + 2);
          *(int *)(param_1 + 100) = (int)lVar10 + 1;
          lVar9 = *(long *)((long)pvVar15 + 8);
          puVar7 = (undefined8 *)pvVar15;
          if (0xfef < lVar9 + 0x20U) {
            puVar7 = (undefined8 *)malloc(0x1000);
            if (puVar7 == (undefined8 *)0x0) goto LAB_001f325c;
            lVar9 = 0;
            *puVar7 = pvVar15;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
          plVar13 = (long *)((long)puVar7 + lVar9 + 0x10);
          *plVar13 = (long)&PTR_FUN_0020ca38;
          *(undefined8 *)((long)puVar7 + lVar9 + 0x18) = 0x20101011b;
          *(int *)((long)puVar7 + lVar9 + 0x20) = (int)lVar10;
          local_c0 = plVar13;
          FUN_001f33d0(*(undefined8 *)(param_1[0x54] + -8),&local_c0);
          lVar10 = param_1[2];
          lVar9 = param_1[3];
          plStack_a0 = &local_58;
          local_c8 = &local_b0;
          lStack_b8 = param_1[0x54] - param_1[0x53] >> 3;
          uStack_90 = 0;
          local_98 = 0;
          uStack_80 = 0;
          local_88 = 0;
          uStack_70 = 0;
          local_78 = 0;
          uStack_60 = 0;
          local_68 = 0;
          local_c0 = param_1;
          local_b0 = &local_98;
          local_a8 = &local_98;
          FUN_001edb54(param_1 + 0x53,&local_c8);
          while( true ) {
                    /* try { // try from 001f3088 to 001f3093 has its CatchHandler @ 001f3264 */
            uVar8 = __strlen_chk(&DAT_00145eb2,2);
            pcVar1 = (char *)*param_1;
            pcVar4 = "E";
            pcVar5 = pcVar1;
            uVar6 = uVar8;
            if (uVar8 <= (ulong)(param_1[1] - (long)pcVar1)) {
              while( true ) {
                if (uVar6 == 0) {
                  lVar10 = (lVar9 - lVar10 >> 3) * 8;
                  *param_1 = (long)(pcVar1 + uVar8);
                  auVar16 = FUN_001f530c(param_1,param_1[2] + lVar10,param_1[3]);
                  pvVar15 = (void *)param_1[0x266];
                  param_1[3] = param_1[2] + lVar10;
                  lVar10 = *(long *)((long)pvVar15 + 8);
                  puVar7 = (undefined8 *)pvVar15;
                  if (0xfef < lVar10 + 0x30U) {
                    puVar7 = (undefined8 *)malloc(0x1000);
                    if (puVar7 == (undefined8 *)0x0) goto LAB_001f325c;
                    lVar10 = 0;
                    *puVar7 = pvVar15;
                    puVar7[1] = 0;
                    param_1[0x266] = (long)puVar7;
                  }
                  *(long *)((long)puVar7 + 8) = lVar10 + 0x30;
                  puVar14 = (undefined8 *)((long)puVar7 + lVar10 + 0x10);
                  *puVar14 = &PTR_FUN_0020cb88;
                  *(undefined4 *)((long)puVar7 + lVar10 + 0x18) = 0x101001e;
                  *(long **)((long)puVar7 + lVar10 + 0x20) = plVar13;
                  *(undefined1 (*) [16])((long)puVar7 + lVar10 + 0x28) = auVar16;
                  goto LAB_001f3180;
                }
                if (*pcVar4 != *pcVar5) break;
                pcVar4 = pcVar4 + 1;
                pcVar5 = pcVar5 + 1;
                uVar6 = uVar6 - 1;
              }
            }
                    /* try { // try from 001f30a4 to 001f30ab has its CatchHandler @ 001f3260 */
            local_c8 = (undefined8 **)FUN_001f2d44(param_1);
            if (local_c8 == (undefined8 **)0x0) break;
            FUN_001ec198(param_1 + 2,&local_c8);
          }
          puVar14 = (undefined8 *)0x0;
LAB_001f3180:
          local_c0[0x54] = local_c0[0x53] + lStack_b8 * 8;
          if (local_b0 != &local_98) {
            free(local_b0);
          }
          goto LAB_001f3220;
        }
        if ((*pcVar1 == 'T') && (pcVar1[1] == 'p')) {
          *param_1 = (long)(pcVar1 + 2);
          plVar13 = (long *)FUN_001f2d44(param_1);
          if (plVar13 != (long *)0x0) {
            puVar14 = (undefined8 *)param_1[0x266];
            lVar10 = puVar14[1];
            puVar7 = puVar14;
            if (0xfef < lVar10 + 0x20U) {
              puVar7 = (undefined8 *)malloc(0x1000);
              if (puVar7 == (undefined8 *)0x0) goto LAB_001f325c;
              lVar10 = 0;
              *puVar7 = puVar14;
              puVar7[1] = 0;
              param_1[0x266] = (long)puVar7;
            }
            lVar9 = (long)puVar7 + lVar10;
            uVar12 = 0x1f;
            ppuVar11 = &PTR_FUN_0020cbf8;
            goto LAB_001f2e5c;
          }
        }
      }
    }
  }
  puVar14 = (undefined8 *)0x0;
LAB_001f3220:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar14;
}


// ===== 001f3290  FUN_001f3290 =====

void FUN_001f3290(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 8;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f33c8;
    lVar5 = param_2[1];
  }
  *(undefined8 *)((long)pvVar2 + lVar5) = 0x64656d616e6e7527;
  lVar5 = param_2[1] + 8;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x10);
  __n = *(long *)(param_1 + 0x18) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f33c8;
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    lVar5 = param_2[1] + __n;
    param_2[1] = lVar5;
  }
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001f33c8:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x27;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001f33cc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f33d0  FUN_001f33d0 =====

void FUN_001f33d0(undefined8 *param_1,undefined8 *param_2)

{
  void *__dest;
  undefined8 *puVar1;
  undefined8 uVar2;
  size_t __n;
  undefined8 *__src;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)param_1[2]) {
    __src = (undefined8 *)*param_1;
    __n = (long)puVar1 - (long)__src;
    if (param_1 + 3 == __src) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) goto LAB_001f3484;
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      *param_1 = __dest;
    }
    else {
      __dest = realloc(__src,__n * 2);
      *param_1 = __dest;
      if (__dest == (void *)0x0) {
LAB_001f3484:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    puVar1 = (undefined8 *)((long)__dest + __n);
    param_1[1] = puVar1;
    param_1[2] = (void *)((long)__dest + ((long)__n >> 2) * 8);
  }
  uVar2 = *param_2;
  param_1[1] = puVar1 + 1;
  *puVar1 = uVar2;
  return;
}


// ===== 001f3488  FUN_001f3488 =====

void FUN_001f3488(long param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  size_t __n;
  long lVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined2 uVar8;
  ulong uVar9;
  byte *__src;
  byte local_3c [4];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 2) {
    lVar6 = param_2[1];
    uVar9 = lVar6 + 3;
    if (uVar9 < (ulong)param_2[2]) {
      pvVar5 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar9 <= uVar7) {
        uVar9 = uVar7;
      }
      param_2[2] = uVar9;
      pvVar5 = realloc((void *)*param_2,uVar9);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) goto LAB_001f36f8;
      lVar6 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar5 + lVar6) + 1) = 0x54;
    *(undefined2 *)((long)pvVar5 + lVar6) = 0x5424;
    lVar6 = 3;
LAB_001f35c8:
    param_2[1] = param_2[1] + lVar6;
  }
  else {
    if (iVar2 == 1) {
      lVar6 = param_2[1];
      uVar9 = lVar6 + 2;
      if (uVar9 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
        uVar8 = 0x4e24;
      }
      else {
        uVar7 = param_2[2] << 1;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        param_2[2] = uVar9;
        pvVar5 = realloc((void *)*param_2,uVar9);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_001f36f8;
        lVar6 = param_2[1];
        uVar8 = 0x4e24;
      }
LAB_001f35c0:
      *(undefined2 *)((long)pvVar5 + lVar6) = uVar8;
      lVar6 = 2;
      goto LAB_001f35c8;
    }
    if (iVar2 == 0) {
      lVar6 = param_2[1];
      uVar9 = lVar6 + 2;
      if (uVar9 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar7 = param_2[2] << 1;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        param_2[2] = uVar9;
        pvVar5 = realloc((void *)*param_2,uVar9);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_001f36f8;
        lVar6 = param_2[1];
      }
      uVar8 = 0x5424;
      goto LAB_001f35c0;
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = *(int *)(param_1 + 0x10) - 1;
    if (uVar3 == 0) {
      lVar6 = param_2[1];
      uVar9 = lVar6 + 1;
      if (uVar9 < (ulong)param_2[2]) {
        pvVar5 = (void *)*param_2;
      }
      else {
        uVar7 = param_2[2] << 1;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        param_2[2] = uVar9;
        pvVar5 = realloc((void *)*param_2,uVar9);
        *param_2 = pvVar5;
        if (pvVar5 == (void *)0x0) {
LAB_001f36f8:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = param_2[1];
        uVar9 = lVar6 + 1;
      }
      param_2[1] = uVar9;
      *(undefined1 *)((long)pvVar5 + lVar6) = 0x30;
    }
    else {
      uVar9 = (ulong)uVar3;
      __src = local_3c + 1;
      do {
        __src = __src + -1;
        *__src = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
        bVar1 = 9 < uVar9;
        uVar9 = uVar9 / 10;
      } while (bVar1);
      __n = (long)(local_3c + 1) - (long)__src;
      if (__n != 0) {
        lVar6 = param_2[1];
        uVar9 = lVar6 + __n;
        if (uVar9 < (ulong)param_2[2]) {
          pvVar5 = (void *)*param_2;
        }
        else {
          uVar7 = param_2[2] << 1;
          if (uVar9 <= uVar7) {
            uVar9 = uVar7;
          }
          param_2[2] = uVar9;
          pvVar5 = realloc((void *)*param_2,uVar9);
          *param_2 = pvVar5;
          if (pvVar5 == (void *)0x0) goto LAB_001f36f8;
          lVar6 = param_2[1];
        }
        memmove((void *)((long)pvVar5 + lVar6),__src,__n);
        param_2[1] = param_2[1] + __n;
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001f36fc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f3700  FUN_001f3700 =====

void FUN_001f3700(undefined8 param_1,undefined8 *param_2)

{
  ulong __size;
  undefined8 uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_2[1];
  __size = lVar4 + 9;
  if (__size < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (__size <= uVar3) {
      __size = uVar3;
    }
    param_2[2] = __size;
    pvVar2 = realloc((void *)*param_2,__size);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  uVar1 = s_typename_00145462._0_8_;
  ((char *)((long)pvVar2 + lVar4))[8] = ' ';
  *(undefined8 *)((long)pvVar2 + lVar4) = uVar1;
  param_2[1] = param_2[1] + 9;
  return;
}


// ===== 001f3784  FUN_001f3784 =====

void FUN_001f3784(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if (*(char *)((long)plVar1 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f37d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 001f37dc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f37e0  FUN_001f37e0 =====

void FUN_001f37e0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if ((*(char *)((long)puVar1 + 9) != '\0') &&
     ((*(char *)((long)puVar1 + 9) != '\x02' ||
      (uVar2 = (**(code **)*puVar1)(puVar1,param_2), (uVar2 & 1) == 0)))) {
    lVar5 = param_2[1];
    uVar2 = lVar5 + 1;
    if (uVar2 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar2 <= uVar4) {
        uVar2 = uVar4;
      }
      param_2[2] = uVar2;
      pvVar3 = realloc((void *)*param_2,uVar2);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar3 + lVar5) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
  return;
}


// ===== 001f388c  FUN_001f388c =====

void FUN_001f388c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if (*(char *)((long)plVar1 + 9) != '\x01') {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x001f38f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}


// ===== 001f38f8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f38fc  FUN_001f38fc =====

void FUN_001f38fc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = param_2[1];
  uVar1 = lVar6 + 9;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar4 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar4 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_001f39f4;
    lVar6 = param_2[1];
  }
  uVar3 = s_template<_00145867._0_8_;
  ((char *)((long)pvVar4 + lVar6))[8] = '<';
  *(undefined8 *)((long)pvVar4 + lVar6) = uVar3;
  param_2[1] = param_2[1] + 9;
  FUN_001f3a54(param_1 + 0x18,param_2);
  lVar6 = param_2[1];
  uVar1 = lVar6 + 0xb;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar4 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar4 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_001f39f4:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar6 = param_2[1];
  }
  pcVar2 = (char *)((long)pvVar4 + lVar6);
  *(undefined8 *)pcVar2 = s_>_typename_0014550f._0_8_;
  pcVar2[7] = 'a';
  pcVar2[8] = 'm';
  pcVar2[9] = 'e';
  pcVar2[10] = ' ';
  param_2[1] = param_2[1] + 0xb;
  return;
}


// ===== 001f39f8  FUN_001f39f8 =====

void FUN_001f39f8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if (*(char *)((long)plVar1 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f3a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 001f3a50  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f3a54  FUN_001f3a54 =====

void FUN_001f3a54(long *param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  
  if (param_1[1] != 0) {
    lVar7 = param_2[1];
    lVar5 = 0;
    bVar6 = true;
    do {
      lVar2 = lVar7;
      if (!bVar6) {
        __size = lVar7 + 2;
        if (__size < (ulong)param_2[2]) {
          pvVar1 = (void *)*param_2;
        }
        else {
          uVar3 = param_2[2] << 1;
          if (__size <= uVar3) {
            __size = uVar3;
          }
          param_2[2] = __size;
          pvVar1 = realloc((void *)*param_2,__size);
          *param_2 = pvVar1;
          if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar2 = param_2[1];
        }
        *(undefined2 *)((long)pvVar1 + lVar2) = 0x202c;
        lVar2 = param_2[1] + 2;
        param_2[1] = lVar2;
      }
      plVar4 = *(long **)(*param_1 + lVar5 * 8);
      (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
      if (*(char *)((long)plVar4 + 9) != '\x01') {
        (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
      }
      if (lVar2 == param_2[1]) {
        param_2[1] = lVar7;
      }
      else {
        bVar6 = false;
        lVar7 = param_2[1];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != param_1[1]);
  }
  return;
}


// ===== 001f3b6c  FUN_001f3b6c =====

void FUN_001f3b6c(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  lVar3 = param_2[1];
  __size = lVar3 + 3;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar3) + 1) = 0x2e;
  *(undefined2 *)((long)pvVar1 + lVar3) = 0x2e2e;
  param_2[1] = param_2[1] + 3;
  return;
}


// ===== 001f3bf8  FUN_001f3bf8 =====

void FUN_001f3bf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001f3c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}


// ===== 001f3c08  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f3c0c  FUN_001f3c0c =====

void FUN_001f3c0c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 7;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f3d54;
    lVar5 = param_2[1];
  }
  *(undefined4 *)((long)pvVar2 + lVar5 + 3) = 0x6164626d;
  *(undefined4 *)((long)pvVar2 + lVar5) = 0x6d616c27;
  lVar5 = param_2[1] + 7;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x30);
  __n = *(long *)(param_1 + 0x38) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f3d54;
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    lVar5 = param_2[1] + __n;
    param_2[1] = lVar5;
  }
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001f3d54:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x27;
  param_2[1] = param_2[1] + 1;
  FUN_001f3d5c(param_1,param_2);
  return;
}


// ===== 001f3d58  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f3d5c  FUN_001f3d5c =====

void FUN_001f3d5c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_2[1];
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = lVar3 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f3ee0;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x3c;
    param_2[1] = param_2[1] + 1;
    FUN_001f3a54(param_1 + 0x10,param_2);
    lVar3 = param_2[1];
    uVar1 = lVar3 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f3ee0;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x3e;
    lVar3 = param_2[1] + 1;
    param_2[1] = lVar3;
  }
  uVar1 = lVar3 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f3ee0;
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
  param_2[1] = param_2[1] + 1;
  FUN_001f3a54(param_1 + 0x20,param_2);
  lVar3 = param_2[1];
  uVar1 = lVar3 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001f3ee0:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001f3ee4  FUN_001f3ee4 =====

void FUN_001f3ee4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_2[1];
  uVar1 = lVar3 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f3fd0;
    lVar3 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x5d5b;
  lVar3 = param_2[1] + 2;
  param_2[1] = lVar3;
  if (*(char *)(*(long *)(param_1 + 0x10) + 8) == '-') {
    FUN_001f3d5c(*(long *)(param_1 + 0x10),param_2);
    lVar3 = param_2[1];
  }
  uVar1 = lVar3 + 5;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001f3fd0:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar2 + lVar3) + 1) = 0x7d;
  *(undefined4 *)((long)pvVar2 + lVar3) = 0x2e2e2e7b;
  param_2[1] = param_2[1] + 5;
  return;
}


// ===== 001f3fd4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f3fd8  FUN_001f3fd8 =====

void FUN_001f3fd8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f413c;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f413c;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x29;
  lVar5 = param_2[1] + 1;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_001f413c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 001f4140  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f4144  FUN_001f4144 =====

void FUN_001f4144(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f4220;
    lVar5 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar5) = 0x7066;
  lVar5 = param_2[1] + 2;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x10);
  __n = *(long *)(param_1 + 0x18) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_001f4220:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 001f4224  FUN_001f4224 =====

void FUN_001f4224(void)

{
  return;
}


// ===== 001f4228  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f422c  FUN_001f422c =====

void FUN_001f422c(long param_1,undefined8 *param_2)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong *puVar8;
  undefined **local_60;
  undefined4 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar8 = param_2 + 1;
  uVar5 = *puVar8;
  uVar6 = uVar5 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    param_2[2] = uVar6;
    pvVar3 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001f497c;
    uVar5 = *puVar8;
    uVar6 = uVar5 + 1;
  }
  *puVar8 = uVar6;
  *(undefined1 *)((long)pvVar3 + uVar5) = 0x28;
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar5 = param_2[1];
    uVar6 = uVar5 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar3 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f497c;
      uVar5 = *puVar8;
      uVar6 = uVar5 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar3 + uVar5) = 0x28;
    local_50 = *(undefined8 *)(param_1 + 0x10);
    local_58 = 0x1010122;
    local_60 = &PTR_FUN_0020ce98;
    FUN_001f4988(&local_60,param_2);
    if (local_58._1_1_ != '\x01') {
      (*(code *)local_60[5])(&local_60,param_2);
    }
    uVar5 = param_2[1];
    uVar6 = uVar5 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar3 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f497c;
      uVar5 = *puVar8;
      uVar6 = uVar5 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar3 + uVar5) = 0x29;
    uVar5 = param_2[1];
    uVar6 = uVar5 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar3 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f497c;
      uVar5 = *puVar8;
      uVar6 = uVar5 + 1;
    }
    *puVar8 = uVar6;
    *(undefined1 *)((long)pvVar3 + uVar5) = 0x20;
    pvVar3 = *(void **)(param_1 + 0x20);
    uVar6 = *puVar8;
    sVar1 = *(long *)(param_1 + 0x28) - (long)pvVar3;
    if (sVar1 != 0) {
      uVar5 = uVar6 + sVar1;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar4 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        param_2[2] = uVar5;
        pvVar4 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_001f497c;
        uVar6 = *puVar8;
      }
      memmove((void *)((long)pvVar4 + uVar6),pvVar3,sVar1);
      uVar6 = *puVar8 + sVar1;
      *puVar8 = uVar6;
    }
    uVar5 = uVar6 + 4;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      param_2[2] = uVar5;
      pvVar3 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f497c;
      uVar6 = *puVar8;
    }
    *(undefined4 *)((long)pvVar3 + uVar6) = 0x2e2e2e20;
    uVar5 = *puVar8;
    uVar6 = uVar5 + 4;
    *puVar8 = uVar6;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar5 = uVar5 + 5;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        param_2[2] = uVar5;
        pvVar3 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_001f497c;
        uVar6 = *puVar8;
        uVar5 = uVar6 + 1;
      }
      *puVar8 = uVar5;
      *(undefined1 *)((long)pvVar3 + uVar6) = 0x20;
      pvVar3 = *(void **)(param_1 + 0x20);
      uVar6 = *puVar8;
      sVar1 = *(long *)(param_1 + 0x28) - (long)pvVar3;
      if (sVar1 != 0) {
        uVar5 = uVar6 + sVar1;
        if (uVar5 < (ulong)param_2[2]) {
          pvVar4 = (void *)*param_2;
        }
        else {
          uVar6 = param_2[2] << 1;
          if (uVar5 <= uVar6) {
            uVar5 = uVar6;
          }
          param_2[2] = uVar5;
          pvVar4 = realloc((void *)*param_2,uVar5);
          *param_2 = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_001f497c;
          uVar6 = *puVar8;
        }
        memmove((void *)((long)pvVar4 + uVar6),pvVar3,sVar1);
        uVar6 = *puVar8 + sVar1;
        *puVar8 = uVar6;
      }
      uVar5 = uVar6 + 1;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        param_2[2] = uVar5;
        pvVar3 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_001f497c;
        uVar6 = *puVar8;
        uVar5 = uVar6 + 1;
      }
      param_2[1] = uVar5;
      *(undefined1 *)((long)pvVar3 + uVar6) = 0x20;
      plVar7 = *(long **)(param_1 + 0x18);
      (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
      if (*(char *)((long)plVar7 + 9) != '\x01') {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
    }
  }
  else {
    plVar7 = *(long **)(param_1 + 0x18);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
      if (*(char *)((long)plVar7 + 9) != '\x01') {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
      uVar5 = param_2[1];
      uVar6 = uVar5 + 1;
      if (uVar6 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar5 = param_2[2] << 1;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        param_2[2] = uVar6;
        pvVar3 = realloc((void *)*param_2,uVar6);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_001f497c;
        uVar5 = *puVar8;
        uVar6 = uVar5 + 1;
      }
      *puVar8 = uVar6;
      *(undefined1 *)((long)pvVar3 + uVar5) = 0x20;
      pvVar3 = *(void **)(param_1 + 0x20);
      uVar6 = *puVar8;
      sVar1 = *(long *)(param_1 + 0x28) - (long)pvVar3;
      if (sVar1 != 0) {
        uVar5 = uVar6 + sVar1;
        if (uVar5 < (ulong)param_2[2]) {
          pvVar4 = (void *)*param_2;
        }
        else {
          uVar6 = param_2[2] << 1;
          if (uVar5 <= uVar6) {
            uVar5 = uVar6;
          }
          param_2[2] = uVar5;
          pvVar4 = realloc((void *)*param_2,uVar5);
          *param_2 = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_001f497c;
          uVar6 = *puVar8;
        }
        memmove((void *)((long)pvVar4 + uVar6),pvVar3,sVar1);
        uVar6 = *puVar8 + sVar1;
        *puVar8 = uVar6;
      }
      uVar5 = uVar6 + 1;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        param_2[2] = uVar5;
        pvVar3 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_001f497c;
        uVar6 = *puVar8;
        uVar5 = uVar6 + 1;
      }
      *puVar8 = uVar5;
      *(undefined1 *)((long)pvVar3 + uVar6) = 0x20;
    }
    uVar5 = param_2[1];
    uVar6 = uVar5 + 4;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar3 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f497c;
      uVar5 = *puVar8;
    }
    *(undefined4 *)((long)pvVar3 + uVar5) = 0x202e2e2e;
    uVar6 = *puVar8 + 4;
    *puVar8 = uVar6;
    pvVar3 = *(void **)(param_1 + 0x20);
    sVar1 = *(long *)(param_1 + 0x28) - (long)pvVar3;
    if (sVar1 != 0) {
      uVar5 = uVar6 + sVar1;
      if (uVar5 < (ulong)param_2[2]) {
        pvVar4 = (void *)*param_2;
      }
      else {
        uVar6 = param_2[2] << 1;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        param_2[2] = uVar5;
        pvVar4 = realloc((void *)*param_2,uVar5);
        *param_2 = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_001f497c;
        uVar6 = *puVar8;
      }
      memmove((void *)((long)pvVar4 + uVar6),pvVar3,sVar1);
      uVar6 = *puVar8 + sVar1;
      *puVar8 = uVar6;
    }
    uVar5 = uVar6 + 1;
    if (uVar5 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar6 = param_2[2] << 1;
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      param_2[2] = uVar5;
      pvVar3 = realloc((void *)*param_2,uVar5);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f497c;
      uVar6 = *puVar8;
      uVar5 = uVar6 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar3 + uVar6) = 0x20;
    uVar5 = param_2[1];
    uVar6 = uVar5 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar3 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f497c;
      uVar5 = *puVar8;
      uVar6 = uVar5 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar3 + uVar5) = 0x28;
    local_50 = *(undefined8 *)(param_1 + 0x10);
    local_58 = 0x1010122;
    local_60 = &PTR_FUN_0020ce98;
    FUN_001f4988(&local_60,param_2);
    if (local_58._1_1_ != '\x01') {
      (*(code *)local_60[5])(&local_60,param_2);
    }
    uVar5 = param_2[1];
    uVar6 = uVar5 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2[2] = uVar6;
      pvVar3 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f497c;
      uVar5 = *puVar8;
      uVar6 = uVar5 + 1;
    }
    *puVar8 = uVar6;
    *(undefined1 *)((long)pvVar3 + uVar5) = 0x29;
  }
  uVar5 = param_2[1];
  uVar6 = uVar5 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    param_2[2] = uVar6;
    pvVar3 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_001f497c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    uVar5 = *puVar8;
    uVar6 = uVar5 + 1;
  }
  *puVar8 = uVar6;
  *(undefined1 *)((long)pvVar3 + uVar5) = 0x29;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001f4984  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f4988  FUN_001f4988 =====

void FUN_001f4988(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  size_t sVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((long)param_2 + 0x1c);
  param_2[3] = 0xffffffffffffffff;
  plVar9 = *(long **)(param_1 + 0x10);
  uVar10 = param_2[1];
                    /* try { // try from 001f49c4 to 001f4a13 has its CatchHandler @ 001f4b68 */
  (**(code **)(*plVar9 + 0x20))(plVar9);
  if (*(char *)((long)plVar9 + 9) != '\x01') {
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
  }
  uVar4 = *(uint *)((long)param_2 + 0x1c);
  if (uVar4 == 0xffffffff) {
    sVar5 = __strlen_chk(&DAT_00145a77,4);
    if (sVar5 != 0) {
      lVar8 = param_2[1];
      uVar1 = lVar8 + sVar5;
      if (uVar1 < (ulong)param_2[2]) {
        pvVar6 = (void *)*param_2;
      }
      else {
        uVar7 = param_2[2] << 1;
        if (uVar1 <= uVar7) {
          uVar1 = uVar7;
        }
        param_2[2] = uVar1;
        pvVar6 = realloc((void *)*param_2,uVar1);
        *param_2 = pvVar6;
        if (pvVar6 == (void *)0x0) {
LAB_001f4b64:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar8 = param_2[1];
      }
      memcpy((void *)((long)pvVar6 + lVar8),&DAT_00145a77,sVar5);
      param_2[1] = param_2[1] + sVar5;
    }
  }
  else if (uVar4 == 0) {
    param_2[1] = uVar10;
  }
  else if (1 < uVar4) {
    uVar11 = 1;
    do {
                    /* try { // try from 001f4a58 to 001f4a63 has its CatchHandler @ 001f4b6c */
      sVar5 = __strlen_chk(&DAT_00145e03,3);
      if (sVar5 != 0) {
        lVar8 = param_2[1];
        uVar1 = lVar8 + sVar5;
        if (uVar1 < (ulong)param_2[2]) {
          pvVar6 = (void *)*param_2;
        }
        else {
          uVar7 = param_2[2] << 1;
          if (uVar1 <= uVar7) {
            uVar1 = uVar7;
          }
          param_2[2] = uVar1;
          pvVar6 = realloc((void *)*param_2,uVar1);
          *param_2 = pvVar6;
          if (pvVar6 == (void *)0x0) goto LAB_001f4b64;
          lVar8 = param_2[1];
        }
        memcpy((void *)((long)pvVar6 + lVar8),&DAT_00145e03,sVar5);
        param_2[1] = param_2[1] + sVar5;
      }
      *(uint *)(param_2 + 3) = uVar11;
      plVar9 = *(long **)(param_1 + 0x10);
                    /* try { // try from 001f4ad4 to 001f4aff has its CatchHandler @ 001f4b6c */
      (**(code **)(*plVar9 + 0x20))(plVar9,param_2);
      if (*(char *)((long)plVar9 + 9) != '\x01') {
        (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
      }
      uVar11 = uVar11 + 1;
    } while (uVar4 != uVar11);
  }
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1c) = uVar3;
  return;
}


// ===== 001f4b74  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f4b78  FUN_001f4b78 =====

void FUN_001f4b78(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  size_t __n;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  pcVar2 = *(char **)(param_1 + 0x20);
  if ((long)pcVar2 - (long)pcVar7 == 1) {
    if (pcVar7 != pcVar2) {
      pcVar9 = ">";
      do {
        if (*pcVar7 != *pcVar9) goto LAB_001f4c20;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      } while (pcVar2 != pcVar7);
    }
    lVar6 = param_2[1];
    uVar1 = lVar6 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f4ed4;
      lVar6 = param_2[1];
    }
    *(undefined1 *)((long)pvVar3 + lVar6) = 0x28;
    param_2[1] = param_2[1] + 1;
  }
LAB_001f4c20:
  lVar6 = param_2[1];
  uVar1 = lVar6 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001f4ed4;
    lVar6 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar6) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar10 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar10 + 0x20))(plVar10,param_2);
  if (*(char *)((long)plVar10 + 9) != '\x01') {
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2);
  }
  lVar6 = param_2[1];
  uVar1 = lVar6 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001f4ed4;
    lVar6 = param_2[1];
  }
  *(undefined2 *)((long)pvVar3 + lVar6) = 0x2029;
  lVar6 = param_2[1] + 2;
  param_2[1] = lVar6;
  pvVar3 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar3;
  if (__n != 0) {
    uVar1 = lVar6 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_001f4ed4;
      lVar6 = param_2[1];
    }
    memmove((void *)((long)pvVar4 + lVar6),pvVar3,__n);
    lVar6 = param_2[1] + __n;
    param_2[1] = lVar6;
  }
  uVar1 = lVar6 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001f4ed4;
    lVar6 = param_2[1];
  }
  *(undefined2 *)((long)pvVar3 + lVar6) = 0x2820;
  param_2[1] = param_2[1] + 2;
  plVar10 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar10 + 0x20))(plVar10,param_2);
  if (*(char *)((long)plVar10 + 9) != '\x01') {
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2);
  }
  lVar6 = param_2[1];
  uVar1 = lVar6 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001f4ed4;
    lVar6 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar6) = 0x29;
  lVar8 = param_2[1];
  lVar6 = lVar8 + 1;
  param_2[1] = lVar6;
  pcVar7 = *(char **)(param_1 + 0x18);
  pcVar2 = *(char **)(param_1 + 0x20);
  if ((long)pcVar2 - (long)pcVar7 == 1) {
    if (pcVar7 != pcVar2) {
      pcVar9 = ">";
      do {
        if (*pcVar7 != *pcVar9) {
          return;
        }
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      } while (pcVar2 != pcVar7);
    }
    uVar1 = lVar8 + 2;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_001f4ed4:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = param_2[1];
    }
    *(undefined1 *)((long)pvVar3 + lVar6) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  return;
}


// ===== 001f4ed8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f4edc  FUN_001f4edc =====

void FUN_001f4edc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  pvVar3 = *(void **)(param_1 + 0x10);
  lVar4 = param_2[1];
  __n = *(long *)(param_1 + 0x18) - (long)pvVar3;
  if (__n != 0) {
    uVar1 = lVar4 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f5044;
      lVar4 = param_2[1];
    }
    memmove((void *)((long)pvVar2 + lVar4),pvVar3,__n);
    lVar4 = param_2[1] + __n;
    param_2[1] = lVar4;
  }
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001f5044;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar6 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_001f5044:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001f5048  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f504c  FUN_001f504c =====

void FUN_001f504c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  
  pvVar3 = *(void **)(param_1 + 0x10);
  lVar4 = param_2[1];
  __n = *(long *)(param_1 + 0x18) - (long)pvVar3;
  if (__n != 0) {
    uVar1 = lVar4 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f51f4;
      lVar4 = param_2[1];
    }
    memmove((void *)((long)pvVar2 + lVar4),pvVar3,__n);
    lVar4 = param_2[1] + __n;
    param_2[1] = lVar4;
  }
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001f51f4;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x3c;
  param_2[1] = param_2[1] + 1;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(*(long **)(param_1 + 0x20),param_2);
  lVar4 = param_2[1];
  uVar1 = lVar4 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001f51f4;
    lVar4 = param_2[1];
  }
  *(undefined2 *)((long)pvVar3 + lVar4) = 0x283e;
  param_2[1] = param_2[1] + 2;
  (**(code **)(**(long **)(param_1 + 0x28) + 0x20))(*(long **)(param_1 + 0x28),param_2);
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_001f51f4:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar4) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001f51f8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f51fc  FUN_001f51fc =====

void FUN_001f51fc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f5304;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
  param_2[1] = param_2[1] + 1;
  FUN_001f3a54(param_1 + 0x18,param_2);
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001f5304:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001f5308  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f530c  FUN_001f530c =====

undefined1  [16] FUN_001f530c(long param_1,void *param_2,long param_3)

{
  undefined8 *__dest;
  undefined8 *puVar1;
  long lVar2;
  size_t __n;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = *(undefined8 **)(param_1 + 0x1330);
  __n = param_3 - (long)param_2;
  uVar4 = (ulong)((int)__n + 0xf) & 0xfffffff0;
  lVar2 = puVar3[1];
  puVar1 = puVar3;
  if (0xfef < lVar2 + uVar4) {
    if (0xff0 < uVar4) {
      puVar1 = (undefined8 *)malloc(uVar4 + 0x10);
      if (puVar1 == (undefined8 *)0x0) {
LAB_001f53d0:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      __dest = puVar1 + 2;
      *puVar1 = *puVar3;
      puVar1[1] = 0;
      *puVar3 = puVar1;
      goto joined_r0x001f53a0;
    }
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) goto LAB_001f53d0;
    lVar2 = 0;
    *puVar1 = puVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  __dest = (undefined8 *)((long)puVar1 + lVar2 + 0x10);
  puVar1[1] = lVar2 + uVar4;
joined_r0x001f53a0:
  if (__n != 0) {
    memmove(__dest,param_2,__n);
  }
  auVar5._8_8_ = (long)__n >> 3;
  auVar5._0_8_ = __dest;
  return auVar5;
}


// ===== 001f53d4  FUN_001f53d4 =====

void FUN_001f53d4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f5530;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f5530;
    lVar4 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar4) = 0x2829;
  param_2[1] = param_2[1] + 2;
  FUN_001f3a54(param_1 + 0x18,param_2);
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001f5530:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001f5534  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f5538  FUN_001f5538 =====

void FUN_001f5538(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar3 = param_2[1];
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar1 = lVar3 + 2;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f56b8;
      lVar3 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x3a3a;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  uVar1 = lVar3 + 6;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f56b8;
    lVar3 = param_2[1];
  }
  *(undefined2 *)((undefined4 *)((long)pvVar2 + lVar3) + 1) = 0x6574;
  *(undefined4 *)((long)pvVar2 + lVar3) = 0x656c6564;
  lVar5 = param_2[1];
  lVar3 = lVar5 + 6;
  param_2[1] = lVar3;
  if (*(char *)(param_1 + 0x19) != '\0') {
    uVar1 = lVar5 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_001f56b8:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar3) + 1) = 0x20;
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x5d5b;
    param_2[1] = param_2[1] + 3;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f56b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  return;
}


// ===== 001f56bc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f56c0  FUN_001f56c0 =====

long FUN_001f56c0(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((char *)param_1[1] == (char *)*param_1) {
LAB_001f5710:
    lVar3 = FUN_001ec734(param_1);
    if (*(long *)(lVar2 + 0x28) != local_38) goto LAB_001f5774;
  }
  else {
    cVar1 = *(char *)*param_1;
    if (cVar1 == 'D') {
      lVar3 = FUN_001ed2c4(param_1);
    }
    else {
      if (cVar1 != 'T') goto LAB_001f5710;
      lVar3 = FUN_001ecf20(param_1);
    }
    local_40 = lVar3;
    if (lVar3 != 0) {
      FUN_001ec198(param_1 + 0x25,&local_40);
    }
    if (*(long *)(lVar2 + 0x28) != local_38) {
LAB_001f5774:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return lVar3;
}


// ===== 001f5778  FUN_001f5778 =====

undefined8 * FUN_001f5778(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar2 == pbVar1) || (9 < *pbVar1 - 0x30)) {
    if (1 < (ulong)((long)pbVar2 - (long)pbVar1)) {
      bVar3 = *pbVar1;
      if (bVar3 == 100) {
        if (pbVar1[1] == 0x6e) {
          pbVar1 = pbVar1 + 2;
          *param_1 = (long)pbVar1;
          if ((pbVar2 == pbVar1) || (9 < *pbVar1 - 0x30)) {
            puVar4 = (undefined8 *)FUN_001f56c0(param_1);
            if (puVar4 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
          }
          else {
            puVar5 = (undefined8 *)FUN_001f59e0(param_1);
            if (puVar5 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
            puVar4 = puVar5;
            if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
              lVar6 = FUN_001ecac4(param_1,0);
              if (lVar6 == 0) {
                return (undefined8 *)0x0;
              }
              pvVar9 = (void *)param_1[0x266];
              lVar7 = *(long *)((long)pvVar9 + 8);
              puVar8 = (undefined8 *)pvVar9;
              if (0xfef < lVar7 + 0x20U) {
                puVar8 = (undefined8 *)malloc(0x1000);
                if (puVar8 == (undefined8 *)0x0) goto LAB_001f59dc;
                lVar7 = 0;
                *puVar8 = pvVar9;
                puVar8[1] = 0;
                param_1[0x266] = (long)puVar8;
              }
              *(long *)((long)puVar8 + 8) = lVar7 + 0x20;
              puVar4 = (undefined8 *)((long)puVar8 + lVar7 + 0x10);
              *puVar4 = &PTR_FUN_0020dd08;
              *(undefined8 **)((long)puVar8 + lVar7 + 0x20) = puVar5;
              *(long *)((long)puVar8 + lVar7 + 0x28) = lVar6;
              *(undefined4 *)((long)puVar8 + lVar7 + 0x18) = 0x1010125;
            }
          }
          pvVar9 = (void *)param_1[0x266];
          lVar6 = *(long *)((long)pvVar9 + 8);
          puVar5 = (undefined8 *)pvVar9;
          if (lVar6 + 0x20U < 0xff0) {
LAB_001f5828:
            *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
            puVar8 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
            *puVar8 = &PTR_FUN_0020d218;
            *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x101012b;
            *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar4;
            return puVar8;
          }
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 != (undefined8 *)0x0) {
            lVar6 = 0;
            *puVar5 = pvVar9;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
            goto LAB_001f5828;
          }
          goto LAB_001f59dc;
        }
        bVar3 = *pbVar1;
      }
      if ((bVar3 == 0x6f) && (pbVar1[1] == 0x6e)) {
        *param_1 = (long)(pbVar1 + 2);
      }
    }
    puVar4 = (undefined8 *)FUN_001f5cf0(param_1,0);
  }
  else {
    puVar4 = (undefined8 *)FUN_001f59e0(param_1);
  }
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((char *)param_1[1] == (char *)*param_1) {
    return puVar4;
  }
  if (*(char *)*param_1 != 'I') {
    return puVar4;
  }
  lVar6 = FUN_001ecac4(param_1,0);
  if (lVar6 == 0) {
    return (undefined8 *)0x0;
  }
  pvVar9 = (void *)param_1[0x266];
  lVar7 = *(long *)((long)pvVar9 + 8);
  puVar5 = (undefined8 *)pvVar9;
  if (0xfef < lVar7 + 0x20U) {
    puVar5 = (undefined8 *)malloc(0x1000);
    if (puVar5 == (undefined8 *)0x0) {
LAB_001f59dc:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar7 = 0;
    *puVar5 = pvVar9;
    puVar5[1] = 0;
    param_1[0x266] = (long)puVar5;
  }
  *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
  puVar8 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
  *puVar8 = &PTR_FUN_0020dd08;
  *(undefined8 **)((long)puVar5 + lVar7 + 0x20) = puVar4;
  *(long *)((long)puVar5 + lVar7 + 0x28) = lVar6;
  *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x1010125;
  return puVar8;
}


// ===== 001f59e0  FUN_001f59e0 =====

undefined8 * FUN_001f59e0(long *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *pvVar8;
  
  pbVar7 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if ((pbVar1 != pbVar7) && (*pbVar7 - 0x30 < 10)) {
    if (pbVar7 == pbVar1) {
      uVar5 = 0xffffffffffffffd0;
    }
    else {
      lVar4 = 0;
      do {
        pbVar6 = pbVar7;
        pbVar7 = pbVar6 + 1;
        *param_1 = (long)pbVar7;
        uVar5 = (lVar4 + (ulong)*pbVar6) - 0x30;
        if ((pbVar1 == pbVar7) || (9 < *pbVar7 - 0x30)) goto LAB_001f5a74;
        lVar4 = uVar5 * 10;
      } while (pbVar1 != pbVar7);
      pbVar7 = pbVar6 + 1;
      uVar5 = lVar4 - 0x30;
    }
LAB_001f5a74:
    if (uVar5 - 1 < (ulong)((long)pbVar1 - (long)pbVar7)) {
      *param_1 = (long)(pbVar7 + uVar5);
      if ((((((9 < uVar5) && (*pbVar7 == 0x5f)) && (pbVar7[1] == 0x47)) &&
           ((pbVar7[2] == 0x4c && (pbVar7[3] == 0x4f)))) &&
          ((pbVar7[4] == 0x42 && ((pbVar7[5] == 0x41 && (pbVar7[6] == 0x4c)))))) &&
         ((pbVar7[7] == 0x5f && ((pbVar7[8] == 0x5f && (pbVar7[9] == 0x4e)))))) {
        pvVar8 = (void *)param_1[0x266];
        lVar4 = *(long *)((long)pvVar8 + 8);
        puVar2 = (undefined8 *)pvVar8;
        if (0xfef < lVar4 + 0x20U) {
          puVar2 = (undefined8 *)malloc(0x1000);
          if (puVar2 == (undefined8 *)0x0) {
LAB_001f5be4:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar4 = 0;
          *puVar2 = pvVar8;
          puVar2[1] = 0;
          param_1[0x266] = (long)puVar2;
        }
        *(long *)((long)puVar2 + 8) = lVar4 + 0x20;
        puVar3 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
        *puVar3 = &PTR_FUN_0020c5d8;
        *(undefined4 *)((long)puVar2 + lVar4 + 0x18) = 0x1010107;
        *(char **)((long)puVar2 + lVar4 + 0x20) = "(anonymous namespace)";
        *(char **)((long)puVar2 + lVar4 + 0x28) = "";
        return puVar3;
      }
      pvVar8 = (void *)param_1[0x266];
      lVar4 = *(long *)((long)pvVar8 + 8);
      puVar2 = (undefined8 *)pvVar8;
      if (0xfef < lVar4 + 0x20U) {
        puVar2 = (undefined8 *)malloc(0x1000);
        if (puVar2 == (undefined8 *)0x0) goto LAB_001f5be4;
        lVar4 = 0;
        *puVar2 = pvVar8;
        puVar2[1] = 0;
        param_1[0x266] = (long)puVar2;
      }
      *(long *)((long)puVar2 + 8) = lVar4 + 0x20;
      puVar3 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
      *puVar3 = &PTR_FUN_0020c5d8;
      *(undefined4 *)((long)puVar2 + lVar4 + 0x18) = 0x1010107;
      *(byte **)((long)puVar2 + lVar4 + 0x20) = pbVar7;
      *(byte **)((long)puVar2 + lVar4 + 0x28) = pbVar7 + uVar5;
      return puVar3;
    }
  }
  return (undefined8 *)0x0;
}


// ===== 001f5be8  FUN_001f5be8 =====

void FUN_001f5be8(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  if (*(char *)((long)plVar4 + 9) != '\x01') {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  lVar3 = param_2[1];
  __size = lVar3 + 2;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((long)pvVar1 + lVar3) = 0x3a3a;
  param_2[1] = param_2[1] + 2;
  plVar4 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f5cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 001f5cdc  FUN_001f5cdc =====

void FUN_001f5cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001f5ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}


// ===== 001f5cec  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f5cf0  FUN_001f5cf0 =====

undefined8 * FUN_001f5cf0(long *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  void *pvVar12;
  undefined8 *puVar13;
  
  puVar1 = (undefined1 *)*param_1;
  uVar3 = param_1[1] - (long)puVar1;
  if ((undefined1 *)param_1[1] == puVar1) goto LAB_001f650c;
  puVar4 = (undefined8 *)0x0;
  switch(*puVar1) {
  case 0x61:
    if (uVar3 < 2) break;
    switch(puVar1[1]) {
    case 0x4e:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator&=";
      break;
    default:
      return (undefined8 *)0x0;
    case 0x53:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator=";
      goto LAB_001f6f40;
    case 0x61:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator&&";
      break;
    case 100:
    case 0x6e:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator&";
LAB_001f6f40:
      puVar4[1] = lVar6;
      puVar4 = (undefined8 *)(lVar5 + 0x10);
      *puVar4 = &PTR_FUN_0020c5d8;
      pcVar9 = pcVar11 + 9;
      goto LAB_001f713c;
    }
LAB_001f7130:
    puVar4[1] = lVar6;
    puVar4 = (undefined8 *)(lVar5 + 0x10);
    *puVar4 = &PTR_FUN_0020c5d8;
    pcVar9 = pcVar11 + 10;
LAB_001f713c:
    *(undefined4 *)(puVar4 + 1) = 0x1010107;
    puVar4[2] = pcVar11;
    puVar4[3] = pcVar9;
    return puVar4;
  default:
    goto switchD_001f5d3c_caseD_62;
  case 99:
    if (uVar3 < 2) break;
    puVar4 = (undefined8 *)0x0;
    switch(puVar1[1]) {
    case 0x6c:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator()";
      goto LAB_001f7130;
    case 0x6d:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator,";
      break;
    default:
      goto switchD_001f5d3c_caseD_62;
    case 0x6f:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator~";
      break;
    case 0x76:
      cVar2 = *(char *)((long)param_1 + 0x309);
      lVar5 = param_1[0x61];
      *param_1 = (long)(puVar1 + 2);
      *(undefined1 *)(param_1 + 0x61) = 0;
      *(bool *)((long)param_1 + 0x309) = param_2 != (undefined1 *)0x0 || cVar2 != '\0';
                    /* try { // try from 001f6994 to 001f699b has its CatchHandler @ 001f716c */
      lVar6 = FUN_001e9ce4(param_1);
      if (lVar6 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        pvVar12 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar12 + 8);
        puVar13 = (undefined8 *)pvVar12;
        if (0xfef < lVar7 + 0x20U) {
          puVar13 = (undefined8 *)malloc(0x1000);
          if (puVar13 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar7 = 0;
          *puVar13 = pvVar12;
          puVar13[1] = 0;
          param_1[0x266] = (long)puVar13;
        }
        *(long *)((long)puVar13 + 8) = lVar7 + 0x20;
        puVar4 = (undefined8 *)((long)puVar13 + lVar7 + 0x10);
        *puVar4 = &PTR_FUN_0020d288;
        *(undefined4 *)((long)puVar13 + lVar7 + 0x18) = 0x1010104;
        *(long *)((long)puVar13 + lVar7 + 0x20) = lVar6;
      }
      *(char *)((long)param_1 + 0x309) = cVar2;
      *(char *)(param_1 + 0x61) = (char)lVar5;
      goto switchD_001f5d3c_caseD_62;
    }
    goto LAB_001f6f40;
  case 100:
    if (uVar3 < 2) break;
    puVar4 = (undefined8 *)0x0;
    switch(puVar1[1]) {
    case 0x56:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator/=";
      goto LAB_001f7130;
    default:
      goto switchD_001f5d3c_caseD_62;
    case 0x61:
      pvVar12 = (void *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = *(long *)((long)pvVar12 + 8);
      puVar4 = (undefined8 *)pvVar12;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar5 = 0;
        *puVar4 = pvVar12;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      pcVar11 = "operator delete[]";
      *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
      puVar4 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
      *puVar4 = &PTR_FUN_0020c5d8;
      pcVar9 = "";
      goto LAB_001f713c;
    case 0x65:
switchD_001f6220_caseD_6c:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) {
LAB_001f7168:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator*";
      break;
    case 0x6c:
      pvVar12 = (void *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = *(long *)((long)pvVar12 + 8);
      puVar4 = (undefined8 *)pvVar12;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar5 = 0;
        *puVar4 = pvVar12;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      pcVar11 = "operator delete";
      *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
      puVar4 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
      *puVar4 = &PTR_FUN_0020c5d8;
      pcVar9 = "";
      goto LAB_001f713c;
    case 0x76:
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator/";
    }
    goto LAB_001f6f40;
  case 0x65:
    if (1 < uVar3) {
      cVar2 = puVar1[1];
      if (cVar2 == 'O') {
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator^=";
      }
      else {
        if (cVar2 != 'q') {
          if (cVar2 == 'o') {
            puVar13 = (undefined8 *)param_1[0x266];
            *param_1 = (long)(puVar1 + 2);
            lVar5 = puVar13[1];
            puVar4 = puVar13;
            if (0xfef < lVar5 + 0x20U) {
              puVar4 = (undefined8 *)malloc(0x1000);
              if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
              lVar5 = 0;
              *puVar4 = puVar13;
              puVar4[1] = 0;
              param_1[0x266] = (long)puVar4;
            }
            lVar6 = lVar5 + 0x20;
            lVar5 = (long)puVar4 + lVar5;
            pcVar11 = "operator^";
            goto LAB_001f6f40;
          }
          break;
        }
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator==";
      }
      goto LAB_001f7130;
    }
    break;
  case 0x67:
    if (1 < uVar3) {
      if (puVar1[1] == 't') {
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator>";
        goto LAB_001f6f40;
      }
      if (puVar1[1] == 'e') {
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator>=";
        goto LAB_001f7130;
      }
    }
    break;
  case 0x69:
    if ((1 < uVar3) && (puVar1[1] == 'x')) {
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator[]";
      goto LAB_001f7130;
    }
    break;
  case 0x6c:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x53:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator<<=";
        goto LAB_001f70c8;
      default:
        goto switchD_001f5d3c_caseD_62;
      case 0x65:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator<=";
        break;
      case 0x69:
        *param_1 = (long)(puVar1 + 2);
        lVar5 = FUN_001f59e0(param_1);
        if (lVar5 == 0) {
          return (undefined8 *)0x0;
        }
        puVar13 = (undefined8 *)param_1[0x266];
        lVar6 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar6 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar6 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar7 = (long)puVar4 + lVar6;
        uVar10 = 0x113;
        ppuVar8 = &PTR_FUN_0020d2f8;
        goto LAB_001f6c4c;
      case 0x73:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator<<";
        break;
      case 0x74:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator<";
        goto LAB_001f6f40;
      }
      goto LAB_001f7130;
    }
    break;
  case 0x6d:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x49:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator-=";
        break;
      default:
        goto switchD_001f5d3c_caseD_62;
      case 0x4c:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator*=";
        break;
      case 0x69:
switchD_001f64a0_caseD_67:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator-";
        goto LAB_001f6f40;
      case 0x6c:
        goto switchD_001f6220_caseD_6c;
      case 0x6d:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator--";
      }
      goto LAB_001f7130;
    }
    break;
  case 0x6e:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x61:
        pvVar12 = (void *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = *(long *)((long)pvVar12 + 8);
        puVar4 = (undefined8 *)pvVar12;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = pvVar12;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        pcVar11 = "operator new[]";
        *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
        puVar4 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
        *puVar4 = &PTR_FUN_0020c5d8;
        pcVar9 = "";
        break;
      default:
        goto switchD_001f5d3c_caseD_62;
      case 0x65:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator!=";
        goto LAB_001f7130;
      case 0x67:
        goto switchD_001f64a0_caseD_67;
      case 0x74:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator!";
        goto LAB_001f6f40;
      case 0x77:
        pvVar12 = (void *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = *(long *)((long)pvVar12 + 8);
        puVar4 = (undefined8 *)pvVar12;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = pvVar12;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        pcVar11 = "operator new";
        *(long *)((long)puVar4 + 8) = lVar5 + 0x20;
        puVar4 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
        *puVar4 = &PTR_FUN_0020c5d8;
        pcVar9 = "";
      }
      goto LAB_001f713c;
    }
    break;
  case 0x6f:
    if (1 < uVar3) {
      cVar2 = puVar1[1];
      if (cVar2 == 'R') {
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator|=";
      }
      else {
        if (cVar2 == 'r') {
          puVar13 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(puVar1 + 2);
          lVar5 = puVar13[1];
          puVar4 = puVar13;
          if (0xfef < lVar5 + 0x20U) {
            puVar4 = (undefined8 *)malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
            lVar5 = 0;
            *puVar4 = puVar13;
            puVar4[1] = 0;
            param_1[0x266] = (long)puVar4;
          }
          lVar6 = lVar5 + 0x20;
          lVar5 = (long)puVar4 + lVar5;
          pcVar11 = "operator|";
          goto LAB_001f6f40;
        }
        if (cVar2 != 'o') break;
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator||";
      }
      goto LAB_001f7130;
    }
    break;
  case 0x70:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x4c:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator+=";
        break;
      default:
        goto switchD_001f5d3c_caseD_62;
      case 0x6c:
      case 0x73:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator+";
        goto LAB_001f6f40;
      case 0x6d:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator->*";
        goto LAB_001f70c8;
      case 0x70:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator++";
        break;
      case 0x74:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator->";
      }
      goto LAB_001f7130;
    }
    break;
  case 0x71:
    if ((1 < uVar3) && (puVar1[1] == 'u')) {
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator?";
      goto LAB_001f6f40;
    }
    break;
  case 0x72:
    if (1 < uVar3) {
      puVar4 = (undefined8 *)0x0;
      switch(puVar1[1]) {
      case 0x4d:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator%=";
        break;
      default:
        goto switchD_001f5d3c_caseD_62;
      case 0x53:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator>>=";
        goto LAB_001f70c8;
      case 0x6d:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator%";
        goto LAB_001f6f40;
      case 0x73:
        puVar13 = (undefined8 *)param_1[0x266];
        *param_1 = (long)(puVar1 + 2);
        lVar5 = puVar13[1];
        puVar4 = puVar13;
        if (0xfef < lVar5 + 0x20U) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
          lVar5 = 0;
          *puVar4 = puVar13;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = lVar5 + 0x20;
        lVar5 = (long)puVar4 + lVar5;
        pcVar11 = "operator>>";
      }
      goto LAB_001f7130;
    }
    break;
  case 0x73:
    if ((1 < uVar3) && (puVar1[1] == 's')) {
      puVar13 = (undefined8 *)param_1[0x266];
      *param_1 = (long)(puVar1 + 2);
      lVar5 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar5 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar5 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar6 = lVar5 + 0x20;
      lVar5 = (long)puVar4 + lVar5;
      pcVar11 = "operator<=>";
LAB_001f70c8:
      puVar4[1] = lVar6;
      puVar4 = (undefined8 *)(lVar5 + 0x10);
      *puVar4 = &PTR_FUN_0020c5d8;
      pcVar9 = pcVar11 + 0xb;
      goto LAB_001f713c;
    }
    break;
  case 0x76:
    if ((1 < uVar3) && ((byte)puVar1[1] - 0x30 < 10)) {
      *param_1 = (long)(puVar1 + 2);
      lVar5 = FUN_001f59e0(param_1);
      if (lVar5 == 0) {
        return (undefined8 *)0x0;
      }
      puVar13 = (undefined8 *)param_1[0x266];
      lVar6 = puVar13[1];
      puVar4 = puVar13;
      if (0xfef < lVar6 + 0x20U) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_001f7168;
        lVar6 = 0;
        *puVar4 = puVar13;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      lVar7 = (long)puVar4 + lVar6;
      uVar10 = 0x104;
      ppuVar8 = &PTR_FUN_0020d288;
LAB_001f6c4c:
      puVar4[1] = lVar6 + 0x20;
      *(undefined8 *)(lVar7 + 0x10) = ppuVar8;
      *(uint *)(lVar7 + 0x18) = uVar10 | 0x1010000;
      *(long *)(lVar7 + 0x20) = lVar5;
      return (undefined8 *)(lVar7 + 0x10);
    }
  }
LAB_001f650c:
  puVar4 = (undefined8 *)0x0;
switchD_001f5d3c_caseD_62:
  return puVar4;
}


// ===== 001f7178  FUN_001f7178 =====

void FUN_001f7178(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = param_2[1];
  __size = lVar3 + 1;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x7e;
  param_2[1] = param_2[1] + 1;
                    /* WARNING: Could not recover jumptable at 0x001f71f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))(*(long **)(param_1 + 0x10),param_2);
  return;
}


// ===== 001f71fc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f7200  FUN_001f7200 =====

void FUN_001f7200(long param_1,undefined8 *param_2)

{
  ulong __size;
  undefined8 uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  __size = lVar4 + 9;
  if (__size < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (__size <= uVar3) {
      __size = uVar3;
    }
    param_2[2] = __size;
    pvVar2 = realloc((void *)*param_2,__size);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  uVar1 = s_operator_00145e56._0_8_;
  ((char *)((long)pvVar2 + lVar4))[8] = ' ';
  *(undefined8 *)((long)pvVar2 + lVar4) = uVar1;
  param_2[1] = param_2[1] + 9;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f72c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  return;
}


// ===== 001f72c8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f72cc  FUN_001f72cc =====

void FUN_001f72cc(long param_1,undefined8 *param_2)

{
  ulong __size;
  char *pcVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  __size = lVar4 + 0xb;
  if (__size < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (__size <= uVar3) {
      __size = uVar3;
    }
    param_2[2] = __size;
    pvVar2 = realloc((void *)*param_2,__size);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  pcVar1 = (char *)((long)pvVar2 + lVar4);
  *(undefined8 *)pcVar1 = s_operator___00144d42._0_8_;
  pcVar1[7] = 'r';
  pcVar1[8] = '\"';
  pcVar1[9] = '\"';
  pcVar1[10] = ' ';
  param_2[1] = param_2[1] + 0xb;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f7390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  return;
}


// ===== 001f7398  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f739c  FUN_001f739c =====

void FUN_001f739c(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_2[1];
  __size = lVar3 + 2;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((long)pvVar1 + lVar3) = 0x3a3a;
  param_2[1] = param_2[1] + 2;
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f7448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 001f7450  FUN_001f7450 =====

void FUN_001f7450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001f745c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 001f7460  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f7464  FUN_001f7464 =====

void FUN_001f7464(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *__src;
  size_t __n;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  if (*(char *)((long)plVar4 + 9) != '\x01') {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  __src = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)__src;
  if (__n != 0) {
    lVar3 = param_2[1];
    __size = lVar3 + __n;
    if (__size < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (__size <= uVar2) {
        __size = uVar2;
      }
      param_2[2] = __size;
      pvVar1 = realloc((void *)*param_2,__size);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    memmove((void *)((long)pvVar1 + lVar3),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f7564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 001f756c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f7570  FUN_001f7570 =====

void FUN_001f7570(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f76f8;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 2;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f76f8;
    lVar4 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar4) = 0x5b29;
  param_2[1] = param_2[1] + 2;
  plVar5 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001f76f8:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001f76fc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f7700  FUN_001f7700 =====

void FUN_001f7700(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = lVar3 + 1;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (uVar2 <= uVar4) {
      if (uVar4 <= uVar2 << 1) {
        uVar4 = uVar2 << 1;
      }
      param_2[2] = uVar4;
      pvVar1 = realloc((void *)*param_2,uVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_001f7930;
      lVar3 = param_2[1];
      uVar4 = lVar3 + 1;
    }
    else {
      pvVar1 = (void *)*param_2;
    }
    param_2[1] = uVar4;
    *(undefined1 *)((long)pvVar1 + lVar3) = 0x2e;
    plVar5 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
    if (*(char *)((long)plVar5 + 9) != '\x01') {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    }
  }
  else {
    if (uVar2 <= uVar4) {
      if (uVar4 <= uVar2 << 1) {
        uVar4 = uVar2 << 1;
      }
      param_2[2] = uVar4;
      pvVar1 = realloc((void *)*param_2,uVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_001f7930;
      lVar3 = param_2[1];
      uVar4 = lVar3 + 1;
    }
    else {
      pvVar1 = (void *)*param_2;
    }
    param_2[1] = uVar4;
    *(undefined1 *)((long)pvVar1 + lVar3) = 0x5b;
    plVar5 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
    if (*(char *)((long)plVar5 + 9) != '\x01') {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    }
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
    if (uVar4 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (uVar4 <= uVar2) {
        uVar4 = uVar2;
      }
      param_2[2] = uVar4;
      pvVar1 = realloc((void *)*param_2,uVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_001f7930;
      lVar3 = param_2[1];
      uVar4 = lVar3 + 1;
    }
    param_2[1] = uVar4;
    *(undefined1 *)((long)pvVar1 + lVar3) = 0x5d;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (1 < *(byte *)(plVar5 + 1) - 0x49) {
    lVar3 = param_2[1];
    uVar4 = lVar3 + 3;
    if (uVar4 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (uVar4 <= uVar2) {
        uVar4 = uVar2;
      }
      param_2[2] = uVar4;
      pvVar1 = realloc((void *)*param_2,uVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
LAB_001f7930:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar3) + 1) = 0x20;
    *(undefined2 *)((long)pvVar1 + lVar3) = 0x3d20;
    param_2[1] = param_2[1] + 3;
    plVar5 = *(long **)(param_1 + 0x18);
  }
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f792c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  return;
}


// ===== 001f7934  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f7938  FUN_001f7938 =====

void FUN_001f7938(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_001f7b7c;
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x5b;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  uVar4 = lVar3 + 5;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_001f7b7c;
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar1 + lVar3) + 1) = 0x20;
  *(undefined4 *)((long)pvVar1 + lVar3) = 0x2e2e2e20;
  param_2[1] = param_2[1] + 5;
  plVar5 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_001f7b7c;
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x5d;
  plVar5 = *(long **)(param_1 + 0x20);
  if (1 < *(byte *)(plVar5 + 1) - 0x49) {
    lVar3 = param_2[1];
    uVar4 = lVar3 + 3;
    if (uVar4 < (ulong)param_2[2]) {
      pvVar1 = (void *)*param_2;
    }
    else {
      uVar2 = param_2[2] << 1;
      if (uVar4 <= uVar2) {
        uVar4 = uVar2;
      }
      param_2[2] = uVar4;
      pvVar1 = realloc((void *)*param_2,uVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
LAB_001f7b7c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar3) + 1) = 0x20;
    *(undefined2 *)((long)pvVar1 + lVar3) = 0x3d20;
    param_2[1] = param_2[1] + 3;
    plVar5 = *(long **)(param_1 + 0x20);
  }
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f7b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  return;
}


// ===== 001f7b80  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f7b84  FUN_001f7b84 =====

void FUN_001f7b84(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if ((plVar5 != (long *)0x0) &&
     ((**(code **)(*plVar5 + 0x20))(plVar5,param_2), *(char *)((long)plVar5 + 9) != '\x01')) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_001f7c8c;
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x7b;
  FUN_001f3a54(param_1 + 0x18,param_2);
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
LAB_001f7c8c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x7d;
  return;
}


// ===== 001f7c90  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f7c94  FUN_001f7c94 =====

void FUN_001f7c94(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f7df8;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f7df8;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x29;
  lVar5 = param_2[1] + 1;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_001f7df8:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 001f7dfc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f7e00  FUN_001f7e00 =====

void FUN_001f7e00(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar3 = param_2[1];
  if (*(char *)(param_1 + 0x38) != '\0') {
    uVar6 = lVar3 + 0xb;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f813c;
      lVar3 = param_2[1];
    }
    pcVar1 = (char *)((long)pvVar2 + lVar3);
    *(undefined8 *)pcVar1 = s___operator_00145dc3._0_8_;
    pcVar1[7] = 't';
    pcVar1[8] = 'o';
    pcVar1[9] = 'r';
    pcVar1[10] = ' ';
    lVar3 = param_2[1] + 0xb;
    param_2[1] = lVar3;
  }
  uVar6 = lVar3 + 3;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    param_2[2] = uVar6;
    pvVar2 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f813c;
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar3) + 1) = 0x77;
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x656e;
  lVar5 = param_2[1];
  lVar3 = lVar5 + 3;
  param_2[1] = lVar3;
  if (*(char *)(param_1 + 0x39) != '\0') {
    uVar6 = lVar5 + 5;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f813c;
      lVar3 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x5d5b;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  uVar6 = lVar3 + 1;
  if (uVar6 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    param_2[2] = uVar6;
    pvVar2 = realloc((void *)*param_2,uVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f813c;
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f813c;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    param_2[1] = param_2[1] + 1;
    FUN_001f3a54(param_1 + 0x10,param_2);
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f813c;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  plVar7 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if (*(char *)((long)plVar7 + 9) != '\x01') {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f813c;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    param_2[1] = param_2[1] + 1;
    FUN_001f3a54(param_1 + 0x28,param_2);
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
    if (uVar6 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
      param_2[2] = uVar6;
      pvVar2 = realloc((void *)*param_2,uVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_001f813c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  return;
}


// ===== 001f8140  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f8144  FUN_001f8144 =====

void FUN_001f8144(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  pvVar2 = *(void **)(param_1 + 0x10);
  sVar3 = *(long *)(param_1 + 0x18) - (long)pvVar2;
  if (sVar3 != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + sVar3;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_001f826c;
      lVar6 = param_2[1];
    }
    memmove((void *)((long)pvVar4 + lVar6),pvVar2,sVar3);
    param_2[1] = param_2[1] + sVar3;
  }
  plVar7 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if (*(char *)((long)plVar7 + 9) != '\x01') {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  pvVar2 = *(void **)(param_1 + 0x28);
  sVar3 = *(long *)(param_1 + 0x30) - (long)pvVar2;
  if (sVar3 != 0) {
    lVar6 = param_2[1];
    uVar1 = lVar6 + sVar3;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
LAB_001f826c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar6 = param_2[1];
    }
    memmove((void *)((long)pvVar4 + lVar6),pvVar2,sVar3);
    param_2[1] = param_2[1] + sVar3;
  }
  return;
}


// ===== 001f8270  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f8274  FUN_001f8274 =====

void FUN_001f8274(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f84a4;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x28;
  param_2[1] = param_2[1] + 1;
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 5;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f84a4;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar2 + lVar4) + 1) = 0x28;
  *(undefined4 *)((long)pvVar2 + lVar4) = 0x203f2029;
  param_2[1] = param_2[1] + 5;
  plVar5 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 5;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f84a4;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar2 + lVar4) + 1) = 0x28;
  *(undefined4 *)((long)pvVar2 + lVar4) = 0x203a2029;
  param_2[1] = param_2[1] + 5;
  plVar5 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar4 = param_2[1];
  uVar1 = lVar4 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001f84a4:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar4) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001f84a8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f84ac  FUN_001f84ac =====

void FUN_001f84ac(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  undefined **local_50;
  undefined4 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar7 = param_2[1];
  uVar1 = lVar7 + 10;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar5 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar5 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) goto LAB_001f85d8;
    lVar7 = param_2[1];
  }
  uVar4 = s_sizeof_____00145310._0_8_;
  pcVar2 = (char *)((long)pvVar5 + lVar7);
  pcVar2[8] = '.';
  pcVar2[9] = '(';
  *(undefined8 *)pcVar2 = uVar4;
  param_2[1] = param_2[1] + 10;
  local_40 = *(undefined8 *)(param_1 + 0x10);
  local_48 = 0x1010122;
  local_50 = &PTR_FUN_0020ce98;
  FUN_001f4988(&local_50,param_2);
  lVar7 = param_2[1];
  uVar1 = lVar7 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar5 = (void *)*param_2;
  }
  else {
    uVar6 = param_2[2] << 1;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    param_2[2] = uVar1;
    pvVar5 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
LAB_001f85d8:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar7 = param_2[1];
  }
  *(undefined1 *)((long)pvVar5 + lVar7) = 0x29;
  param_2[1] = param_2[1] + 1;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001f85e0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f85e4  FUN_001f85e4 =====

void FUN_001f85e4(long param_1)

{
  FUN_001f3a54(param_1 + 0x10);
  return;
}


// ===== 001f85ec  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f85f0  FUN_001f85f0 =====

void FUN_001f85f0(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_2[1];
  __size = lVar3 + 6;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((undefined4 *)((long)pvVar1 + lVar3) + 1) = 0x2077;
  *(undefined4 *)((long)pvVar1 + lVar3) = 0x6f726874;
  param_2[1] = param_2[1] + 6;
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f86ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 001f86b4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f86b8  FUN_001f86b8 =====

void FUN_001f86b8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_2[1];
  uVar1 = lVar5 + 9;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_001f87c4;
    lVar5 = param_2[1];
  }
  uVar2 = s___uuidof__00145f87._0_8_;
  ((char *)((long)pvVar3 + lVar5))[8] = '(';
  *(undefined8 *)((long)pvVar3 + lVar5) = uVar2;
  param_2[1] = param_2[1] + 9;
  plVar6 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if (*(char *)((long)plVar6 + 9) != '\x01') {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_001f87c4:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001f87c8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f87cc  FUN_001f87cc =====

void FUN_001f87cc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0xe;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
LAB_001f8a88:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    uVar9 = CONCAT26(s_std__allocator_00145f91._6_2_,s_std__allocator_00145f91._0_6_);
    *(ulong *)((long)pvVar4 + lVar5 + 6) =
         CONCAT62(s_std__allocator_00145f91._8_6_,s_std__allocator_00145f91._6_2_);
    *(undefined8 *)((long)pvVar4 + lVar5) = uVar9;
    lVar5 = 0xe;
    break;
  case 1:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x11;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_001f8a88;
      lVar5 = param_2[1];
    }
    uVar10 = s_std__basic_string_00144d4e._8_8_;
    uVar9 = s_std__basic_string_00144d4e._0_8_;
    pcVar8 = (char *)((long)pvVar4 + lVar5);
    pcVar8[0x10] = 'g';
    *(undefined8 *)(pcVar8 + 8) = uVar10;
    *(undefined8 *)pcVar8 = uVar9;
    lVar5 = 0x11;
    break;
  case 2:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x46;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_001f8a88;
      lVar5 = param_2[1];
    }
    uVar3 = s_std__basic_string<char,_std::cha_00145014._48_8_;
    uVar2 = s_std__basic_string<char,_std::cha_00145014._40_8_;
    uVar14 = s_std__basic_string<char,_std::cha_00145014._32_8_;
    uVar13 = s_std__basic_string<char,_std::cha_00145014._24_8_;
    uVar12 = s_std__basic_string<char,_std::cha_00145014._16_8_;
    uVar11 = s_std__basic_string<char,_std::cha_00145014._8_8_;
    uVar10 = s_std__basic_string<char,_std::cha_00145014._0_8_;
    uVar9 = CONCAT26(s_std__basic_string<char,_std::cha_00145014._62_2_,
                     s_std__basic_string<char,_std::cha_00145014._56_6_);
    pcVar8 = (char *)((long)pvVar4 + lVar5);
    *(ulong *)(pcVar8 + 0x3e) =
         CONCAT62(s_std__basic_string<char,_std::cha_00145014._64_6_,
                  s_std__basic_string<char,_std::cha_00145014._62_2_);
    *(undefined8 *)(pcVar8 + 0x28) = uVar2;
    *(undefined8 *)(pcVar8 + 0x20) = uVar14;
    *(undefined8 *)(pcVar8 + 0x38) = uVar9;
    *(undefined8 *)(pcVar8 + 0x30) = uVar3;
    *(undefined8 *)(pcVar8 + 8) = uVar11;
    *(undefined8 *)pcVar8 = uVar10;
    *(undefined8 *)(pcVar8 + 0x18) = uVar13;
    *(undefined8 *)(pcVar8 + 0x10) = uVar12;
    lVar5 = 0x46;
    break;
  case 3:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x31;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_001f8a88;
      lVar5 = param_2[1];
    }
    puVar6 = (undefined8 *)((long)pvVar4 + lVar5);
    pcVar8 = "std::basic_istream<char, std::char_traits<char> >";
    goto LAB_001f8974;
  case 4:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x31;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_001f8a88;
      lVar5 = param_2[1];
    }
    puVar6 = (undefined8 *)((long)pvVar4 + lVar5);
    pcVar8 = "std::basic_ostream<char, std::char_traits<char> >";
LAB_001f8974:
    uVar14 = *(undefined8 *)(pcVar8 + 0x18);
    uVar13 = *(undefined8 *)(pcVar8 + 0x10);
    uVar10 = *(undefined8 *)(pcVar8 + 0x28);
    uVar9 = *(undefined8 *)(pcVar8 + 0x20);
    uVar12 = *(undefined8 *)(pcVar8 + 8);
    uVar11 = *(undefined8 *)pcVar8;
    *(undefined1 *)(puVar6 + 6) = 0x3e;
    puVar6[3] = uVar14;
    puVar6[2] = uVar13;
    puVar6[5] = uVar10;
    puVar6[4] = uVar9;
    puVar6[1] = uVar12;
    *puVar6 = uVar11;
    lVar5 = 0x31;
    break;
  case 5:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x32;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar4 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      param_2[2] = uVar1;
      pvVar4 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_001f8a88;
      lVar5 = param_2[1];
    }
    uVar14 = s_std__basic_iostream<char,_std::c_00145bd3._40_8_;
    uVar13 = s_std__basic_iostream<char,_std::c_00145bd3._32_8_;
    uVar12 = s_std__basic_iostream<char,_std::c_00145bd3._24_8_;
    uVar11 = s_std__basic_iostream<char,_std::c_00145bd3._16_8_;
    uVar10 = s_std__basic_iostream<char,_std::c_00145bd3._8_8_;
    uVar9 = s_std__basic_iostream<char,_std::c_00145bd3._0_8_;
    pcVar8 = (char *)((long)pvVar4 + lVar5);
    pcVar8[0x30] = ' ';
    pcVar8[0x31] = '>';
    *(undefined8 *)(pcVar8 + 0x18) = uVar12;
    *(undefined8 *)(pcVar8 + 0x10) = uVar11;
    *(undefined8 *)(pcVar8 + 0x28) = uVar14;
    *(undefined8 *)(pcVar8 + 0x20) = uVar13;
    *(undefined8 *)(pcVar8 + 8) = uVar10;
    *(undefined8 *)pcVar8 = uVar9;
    lVar5 = 0x32;
    break;
  default:
    goto switchD_001f87fc_default;
  }
  param_2[1] = param_2[1] + lVar5;
switchD_001f87fc_default:
  return;
}


// ===== 001f8a8c  FUN_001f8a8c =====

void FUN_001f8a8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001f8ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_001f8ab4 + (ulong)(byte)(&DAT_00149e68)[*(uint *)(param_1 + 0xc)] * 4))
            ("allocator","");
  return;
}


// ===== 001f8af4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f8af8  FUN_001f8af8 =====

void FUN_001f8af8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    lVar4 = param_2[1];
    uVar1 = lVar4 + 1;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar1 <= uVar3) {
        uVar1 = uVar3;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f8bec;
      lVar4 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar4) = 0x7e;
    param_2[1] = param_2[1] + 1;
  }
  auVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  __n = auVar5._8_8_ - (long)auVar5._0_8_;
  if (__n != 0) {
    lVar4 = param_2[1];
    uVar1 = lVar4 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar1 <= uVar3) {
        uVar1 = uVar3;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_001f8bec:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = param_2[1];
    }
    memmove((void *)((long)pvVar2 + lVar4),auVar5._0_8_,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 001f8bf0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f8bf4  FUN_001f8bf4 =====

void FUN_001f8bf4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  lVar5 = param_2[1];
  uVar1 = lVar5 + 5;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f8d40;
    lVar5 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar2 + lVar5) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar2 + lVar5) = 0x6962615b;
  lVar5 = param_2[1] + 5;
  param_2[1] = lVar5;
  pvVar2 = *(void **)(param_1 + 0x18);
  __n = *(long *)(param_1 + 0x20) - (long)pvVar2;
  if (__n != 0) {
    uVar1 = lVar5 + __n;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f8d40;
      lVar5 = param_2[1];
    }
    memmove((void *)((long)pvVar3 + lVar5),pvVar2,__n);
    lVar5 = param_2[1] + __n;
    param_2[1] = lVar5;
  }
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001f8d40:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar5) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001f8d44  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f8d48  FUN_001f8d48 =====

void FUN_001f8d48(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) goto LAB_001f8e0c;
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x5b;
  FUN_001f3a54(param_1 + 0x10,param_2);
  lVar3 = param_2[1];
  uVar4 = lVar3 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[2] = uVar4;
    pvVar1 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
LAB_001f8e0c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
    uVar4 = lVar3 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x5d;
  return;
}


// ===== 001f8e10  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f8e14  FUN_001f8e14 =====

void FUN_001f8e14(long param_1,undefined8 *param_2)

{
  ulong __size;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  if (*(char *)((long)plVar4 + 9) != '\x01') {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  lVar3 = param_2[1];
  __size = lVar3 + 2;
  if (__size < (ulong)param_2[2]) {
    pvVar1 = (void *)*param_2;
  }
  else {
    uVar2 = param_2[2] << 1;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    param_2[2] = __size;
    pvVar1 = realloc((void *)*param_2,__size);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((long)pvVar1 + lVar3) = 0x3a3a;
  param_2[1] = param_2[1] + 2;
  plVar4 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if (*(char *)((long)plVar4 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f8f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 001f8f08  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f8f0c  FUN_001f8f0c =====

void FUN_001f8f0c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xe;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
LAB_001f91b4:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = param_2[1];
    }
    uVar6 = CONCAT26(s_std__allocator_00145f91._6_2_,s_std__allocator_00145f91._0_6_);
    *(ulong *)((long)pvVar3 + lVar4 + 6) =
         CONCAT62(s_std__allocator_00145f91._8_6_,s_std__allocator_00145f91._6_2_);
    *(undefined8 *)((long)pvVar3 + lVar4) = uVar6;
    lVar4 = 0xe;
    break;
  case 1:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0x11;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f91b4;
      lVar4 = param_2[1];
    }
    uVar2 = s_std__basic_string_00144d4e._8_8_;
    uVar6 = s_std__basic_string_00144d4e._0_8_;
    pcVar7 = (char *)((long)pvVar3 + lVar4);
    pcVar7[0x10] = 'g';
    *(undefined8 *)(pcVar7 + 8) = uVar2;
    *(undefined8 *)pcVar7 = uVar6;
    lVar4 = 0x11;
    break;
  case 2:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xb;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f91b4;
      lVar4 = param_2[1];
    }
    pcVar7 = (char *)((long)pvVar3 + lVar4);
    *(undefined8 *)pcVar7 = s_std__string_001450f6._0_8_;
    pcVar7[7] = 'r';
    pcVar7[8] = 'i';
    pcVar7[9] = 'n';
    pcVar7[10] = 'g';
    lVar4 = 0xb;
    break;
  case 3:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xc;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f91b4;
      lVar4 = param_2[1];
    }
    pcVar7 = "std::istream";
    goto LAB_001f90a8;
  case 4:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xc;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f91b4;
      lVar4 = param_2[1];
    }
    pcVar7 = "std::ostream";
LAB_001f90a8:
    uVar6 = *(undefined8 *)pcVar7;
    *(undefined4 *)((undefined8 *)((long)pvVar3 + lVar4) + 1) = 0x6d616572;
    *(undefined8 *)((long)pvVar3 + lVar4) = uVar6;
    lVar4 = 0xc;
    break;
  case 5:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xd;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar3 = (void *)*param_2;
    }
    else {
      uVar5 = param_2[2] << 1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      param_2[2] = uVar1;
      pvVar3 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) goto LAB_001f91b4;
      lVar4 = param_2[1];
    }
    uVar6 = CONCAT35(s_std__iostream_00145336._5_3_,s_std__iostream_00145336._0_5_);
    *(ulong *)((long)pvVar3 + lVar4 + 5) =
         CONCAT53(s_std__iostream_00145336._8_5_,s_std__iostream_00145336._5_3_);
    *(undefined8 *)((long)pvVar3 + lVar4) = uVar6;
    lVar4 = 0xd;
    break;
  default:
    goto switchD_001f8f3c_default;
  }
  param_2[1] = param_2[1] + lVar4;
switchD_001f8f3c_default:
  return;
}


// ===== 001f91b8  FUN_001f91b8 =====

void FUN_001f91b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001f91dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_001f91e0 + (ulong)(byte)(&DAT_00149e74)[*(uint *)(param_1 + 0xc)] * 4))
            ("allocator","");
  return;
}


// ===== 001f9230  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f9234  FUN_001f9234 =====

ulong FUN_001f9234(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x10) + uVar3 * 8);
  cVar1 = *(char *)((long)puVar2 + 9);
  if (cVar1 != '\x02') {
    return (ulong)(cVar1 == '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x001f926c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)*puVar2)();
  return uVar3;
}


// ===== 001f9298  FUN_001f9298 =====

ulong FUN_001f9298(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x10) + uVar3 * 8);
  cVar1 = *(char *)((long)plVar2 + 10);
  if (cVar1 != '\x02') {
    return (ulong)(cVar1 == '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x001f92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 8))();
  return uVar3;
}


// ===== 001f92fc  FUN_001f92fc =====

ulong FUN_001f92fc(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x10) + uVar3 * 8);
  cVar1 = *(char *)((long)plVar2 + 0xb);
  if (cVar1 != '\x02') {
    return (ulong)(cVar1 == '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x001f9334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x10))();
  return uVar3;
}


// ===== 001f9360  FUN_001f9360 =====

void FUN_001f9360(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001f938c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x18))();
  return;
}


// ===== 001f93a8  FUN_001f93a8 =====

void FUN_001f93a8(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001f93d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x20))();
  return;
}


// ===== 001f93f0  FUN_001f93f0 =====

void FUN_001f93f0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x1c) == -1) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = (int)lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (ulong)*(uint *)(param_2 + 0x18);
    if (*(ulong *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001f941c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar1 * 8) + 0x28))();
  return;
}


// ===== 001f9438  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f943c  FUN_001f943c =====

void FUN_001f943c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_2[1];
  uVar1 = lVar3 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001f9568;
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x3c;
  param_2[1] = param_2[1] + 1;
  FUN_001f3a54(param_1 + 0x10,param_2);
  lVar3 = param_2[1];
  if ((lVar3 != 0) && (pvVar2 = (void *)*param_2, *(char *)((long)pvVar2 + lVar3 + -1) == '>')) {
    uVar1 = lVar3 + 1;
    if ((ulong)param_2[2] <= uVar1) {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc(pvVar2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_001f9568;
      lVar3 = param_2[1];
    }
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
    lVar3 = param_2[1] + 1;
    param_2[1] = lVar3;
  }
  uVar1 = lVar3 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar2 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001f9568:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x3e;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 001f956c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


// ===== 001f9570  FUN_001f9570 =====

void FUN_001f9570(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if (*(char *)((long)plVar1 + 9) != '\x01') {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if (*(char *)((long)plVar1 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f960c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 001f9610  FUN_001f9610 =====

void FUN_001f9610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001f961c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}


// ===== 001f9620  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0020fd38)();
  return;
}


