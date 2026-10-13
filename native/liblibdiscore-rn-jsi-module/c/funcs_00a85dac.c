// ===== 00a85dac  FUN_00a85dac =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00a85dac(long *param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  byte local_40;
  char local_3f;
  long local_38;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
LAB_00a85e40:
    if (param_1[4] != 0) {
      auVar9._8_8_ = 1;
      auVar9._0_8_ = &DAT_0038e4b2;
      goto LAB_00a85e54;
    }
LAB_00a862a8:
    uVar7 = 0;
  }
  else {
    uVar2 = param_1[2];
    if (((uVar2 < (ulong)param_1[1]) && (*(char *)(lVar8 + uVar2) == 'w')) &&
       (param_1[2] = uVar2 + 1, param_1[4] != 0)) {
      uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e57e,9);
      if ((uVar2 & 1) == 0) {
        lVar8 = *param_1;
        if (lVar8 == 0) goto LAB_00a85e40;
        goto LAB_00a85e10;
      }
    }
    else {
LAB_00a85e10:
      uVar2 = param_1[2];
      if (uVar2 < (ulong)param_1[1]) {
        bVar1 = *(byte *)(lVar8 + uVar2);
        param_1[2] = uVar2 + 1;
        auVar9 = FUN_00a87200(bVar1);
        if (auVar9._0_8_ != 0) {
          if (param_1[4] != 0) {
LAB_00a85e54:
            uVar2 = <str_as_core::fmt::Display>::fmt(auVar9._0_8_,auVar9._8_8_);
            return uVar2;
          }
          goto LAB_00a862a8;
        }
        uVar7 = (int)param_1[3] + 1;
        *(uint *)(param_1 + 3) = uVar7;
        if (uVar7 < 0x1f5) {
          uVar6 = (uint)bVar1;
          if (bVar1 < 0x51) {
            if (bVar1 < 0x46) {
              if (bVar1 != 0x41) {
                if (bVar1 == 0x42) {
                  uVar2 = FUN_00a83324(param_1);
                  goto joined_r0x00a86208;
                }
                if (uVar6 != 0x44) goto LAB_00a86210;
                if (((param_1[4] != 0) &&
                    (uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_002bd264,4), (uVar2 & 1) != 0))
                   || (uVar2 = FUN_00a83eb8(param_1), (uVar2 & 1) != 0)) goto LAB_00a85f8c;
                if (((*param_1 == 0) || (uVar2 = param_1[2], (ulong)param_1[1] <= uVar2)) ||
                   (*(char *)(*param_1 + uVar2) != 'L')) goto LAB_00a85f70;
                param_1[2] = uVar2 + 1;
                FUN_00a85274(&local_40,param_1);
                if ((local_40 & 1) == 0) {
                  if (local_38 == 0) goto LAB_00a8628c;
                  if ((param_1[4] == 0) ||
                     (uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e52b,3), (uVar2 & 1) == 0))
                  {
                    uVar2 = FUN_00a86c6c(param_1,local_38);
                    goto joined_r0x00a86208;
                  }
                  goto LAB_00a85f8c;
                }
LAB_00a86014:
                if (param_1[4] != 0) {
                  uVar5 = 0x19;
                  if (local_3f == '\0') {
                    uVar5 = 0x10;
                  }
                  puVar3 = &DAT_0038e499;
                  if (local_3f == '\0') {
                    puVar3 = &DAT_0029fc30;
                  }
                  uVar2 = <str_as_core::fmt::Display>::fmt(puVar3,uVar5);
                  if ((uVar2 & 1) != 0) goto LAB_00a85f8c;
                }
                uVar7 = 0;
                *param_1 = 0;
                *(char *)(param_1 + 1) = local_3f;
                goto LAB_00a862ac;
              }
LAB_00a860f8:
              if (param_1[4] != 0) {
                uVar7 = 1;
                uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e56c,1);
                if ((uVar2 & 1) != 0) goto LAB_00a862ac;
              }
              uVar2 = FUN_00a85dac(param_1);
              if ((uVar2 & 1) == 0) {
                if (uVar6 == 0x41) {
                  if ((param_1[4] != 0) &&
                     (uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e590,2), (uVar2 & 1) != 0))
                  goto LAB_00a85f8c;
                  uVar7 = 1;
                  uVar2 = FUN_00a862c4(param_1,1);
                  if ((uVar2 & 1) != 0) goto LAB_00a862ac;
                }
                if (param_1[4] != 0) {
                  puVar3 = &DAT_0038e56d;
                  goto LAB_00a861ec;
                }
                goto LAB_00a8628c;
              }
            }
            else {
              if (1 < uVar6 - 0x4f) {
                if (bVar1 != 0x46) goto LAB_00a86210;
                uVar2 = FUN_00a83d10(param_1);
                goto joined_r0x00a86208;
              }
              if (param_1[4] != 0) {
                uVar7 = 1;
                uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e589,1);
                if ((uVar2 & 1) != 0) goto LAB_00a862ac;
              }
              if (bVar1 == 0x50) {
                if (param_1[4] == 0) goto LAB_00a86280;
                pcVar4 = &DAT_0038e58a;
                uVar5 = 6;
              }
              else {
LAB_00a86264:
                if (param_1[4] == 0) goto LAB_00a86280;
                pcVar4 = "mut ";
                uVar5 = 4;
              }
              uVar2 = <str_as_core::fmt::Display>::fmt(pcVar4,uVar5);
              if ((uVar2 & 1) == 0) goto LAB_00a86280;
            }
          }
          else if (bVar1 < 0x54) {
            if (1 < uVar6 - 0x51) {
              if (uVar6 == 0x53) goto LAB_00a860f8;
LAB_00a86210:
              param_1[2] = uVar2;
              uVar2 = FUN_00a85748(param_1,0);
              goto joined_r0x00a86208;
            }
            if (param_1[4] == 0) {
LAB_00a85fe0:
              uVar2 = param_1[2];
              if ((uVar2 < (ulong)param_1[1]) && (*(char *)(lVar8 + uVar2) == 'L')) {
                param_1[2] = uVar2 + 1;
                FUN_00a85274(&local_40,param_1);
                if ((local_40 & 1) != 0) goto LAB_00a86014;
                if (local_38 != 0) {
                  uVar2 = FUN_00a86c6c(param_1);
                  if ((uVar2 & 1) != 0) goto LAB_00a85f8c;
                  if (param_1[4] != 0) {
                    uVar7 = 1;
                    uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e588,1);
                    if ((uVar2 & 1) != 0) goto LAB_00a862ac;
                  }
                }
              }
            }
            else {
              uVar7 = 1;
              uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e587,1);
              if ((uVar2 & 1) != 0) goto LAB_00a862ac;
              lVar8 = *param_1;
              if (lVar8 != 0) goto LAB_00a85fe0;
            }
            if (bVar1 != 0x52) goto LAB_00a86264;
LAB_00a86280:
            uVar2 = FUN_00a85dac(param_1);
joined_r0x00a86208:
            if ((uVar2 & 1) == 0) {
LAB_00a8628c:
              if (*param_1 != 0) {
                uVar7 = 0;
                *(int *)(param_1 + 3) = (int)param_1[3] + -1;
                goto LAB_00a862ac;
              }
              goto LAB_00a862a8;
            }
          }
          else if (uVar6 == 0x54) {
            if (param_1[4] != 0) {
              uVar7 = 1;
              uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e592,1);
              if ((uVar2 & 1) != 0) goto LAB_00a862ac;
            }
            auVar9 = FUN_00a8372c(param_1);
            if ((auVar9 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
              if (auVar9._8_8_ == 1) {
                if (param_1[4] == 0) goto LAB_00a8628c;
                uVar7 = 1;
                uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e593,1);
                if ((uVar2 & 1) != 0) goto LAB_00a862ac;
              }
              if (param_1[4] == 0) goto LAB_00a8628c;
              puVar3 = &DAT_0038e52a;
LAB_00a861ec:
              uVar7 = 1;
              uVar2 = <str_as_core::fmt::Display>::fmt(puVar3,1);
              if ((uVar2 & 1) != 0) goto LAB_00a862ac;
              goto LAB_00a8628c;
            }
          }
          else {
            if (uVar6 != 0x57) goto LAB_00a86210;
            uVar2 = FUN_00a85dac(param_1);
            if (((uVar2 & 1) == 0) &&
               ((param_1[4] == 0 ||
                (uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_002bd1f0,4), (uVar2 & 1) == 0)))) {
              uVar2 = FUN_00a86ed0(param_1);
              goto joined_r0x00a86208;
            }
          }
        }
        else if ((param_1[4] == 0) ||
                (uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e499,0x19), (uVar2 & 1) == 0)) {
          uVar7 = 0;
          *param_1 = 0;
          *(undefined1 *)(param_1 + 1) = 1;
          goto LAB_00a862ac;
        }
      }
      else {
LAB_00a85f70:
        if ((param_1[4] == 0) ||
           (uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0029fc30,0x10), (uVar2 & 1) == 0)) {
          uVar7 = 0;
          *param_1 = 0;
          *(undefined1 *)(param_1 + 1) = 0;
          goto LAB_00a862ac;
        }
      }
    }
LAB_00a85f8c:
    uVar7 = 1;
  }
LAB_00a862ac:
  return (ulong)uVar7;
}


// ===== 00a862c4  FUN_00a862c4 =====

ulong FUN_00a862c4(long *param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  byte local_54 [4];
  long local_50 [2];
  long local_40;
  char local_38;
  
  lVar8 = *param_1;
  local_54[0] = param_2;
  if (lVar8 == 0) {
LAB_00a86698:
    if (param_1[4] != 0) {
      uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4b2,1);
      return uVar4;
    }
    goto LAB_00a866d0;
  }
  uVar4 = param_1[1];
  uVar2 = param_1[2];
  if (uVar4 <= uVar2) goto switchD_00a86368_caseD_53;
  cVar3 = *(char *)(lVar8 + uVar2);
  uVar1 = uVar2 + 1;
  param_1[2] = uVar1;
  uVar9 = (int)param_1[3] + 1;
  *(uint *)(param_1 + 3) = uVar9;
  if (500 < uVar9) {
    if ((param_1[4] == 0) ||
       (uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e499,0x19), (uVar4 & 1) == 0)) {
      uVar9 = 0;
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_00a866d4;
    }
    goto LAB_00a86690;
  }
  switch(cVar3) {
  case 'Q':
switchD_00a86368_caseD_51:
    if (((param_2 & 1) == 0) && (param_1[4] != 0)) {
      uVar9 = 1;
      uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e59a,1);
      if ((uVar4 & 1) != 0) goto LAB_00a866d4;
    }
    if (param_1[4] != 0) {
      uVar9 = 1;
      uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e587,1);
      if ((uVar4 & 1) != 0) goto LAB_00a866d4;
    }
    if (((cVar3 != 'R') && (param_1[4] != 0)) &&
       (uVar4 = <str_as_core::fmt::Display>::fmt("mut ",4), (uVar4 & 1) != 0)) goto LAB_00a86690;
    uVar4 = FUN_00a862c4(param_1,1);
    goto joined_r0x00a867ac;
  case 'R':
    if ((uVar4 <= uVar1) || (*(char *)(lVar8 + uVar1) != 'e')) goto switchD_00a86368_caseD_51;
    param_1[2] = uVar2 + 2;
    uVar4 = FUN_00a86a4c(param_1);
    goto joined_r0x00a8686c;
  case 'S':
  case 'U':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'd':
  case 'f':
  case 'g':
  case 'k':
  case 'q':
  case 'r':
  case 'u':
  case 'v':
  case 'w':
    break;
  case 'T':
    if (((param_2 & 1) == 0) && (param_1[4] != 0)) {
      uVar9 = 1;
      uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e59a,1);
      if ((uVar4 & 1) != 0) goto LAB_00a866d4;
    }
    if (param_1[4] != 0) {
      uVar9 = 1;
      uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e592,1);
      if ((uVar4 & 1) != 0) goto LAB_00a866d4;
    }
    auVar10 = FUN_00a834a8(param_1);
    if ((auVar10 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto LAB_00a86690;
    if (auVar10._8_8_ == 1) {
      if (param_1[4] == 0) goto LAB_00a863b8;
      uVar9 = 1;
      uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e593,1);
      if ((uVar4 & 1) != 0) goto LAB_00a866d4;
    }
LAB_00a865f0:
    if (param_1[4] == 0) goto LAB_00a863b8;
    puVar5 = &DAT_0038e52a;
LAB_00a867a0:
    uVar4 = <str_as_core::fmt::Display>::fmt(puVar5,1);
joined_r0x00a867ac:
    uVar9 = 1;
    if ((uVar4 & 1) == 0) {
LAB_00a867b0:
      if (((param_2 & 1) == 0) && (param_1[4] != 0)) {
        uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e539,1);
joined_r0x00a86464:
        uVar9 = 1;
        if ((uVar4 & 1) != 0) goto LAB_00a866d4;
      }
LAB_00a863b8:
      if (*param_1 == 0) {
LAB_00a866d0:
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      }
    }
    goto LAB_00a866d4;
  case 'V':
    if (((param_2 & 1) == 0) && (param_1[4] != 0)) {
      uVar9 = 1;
      uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e59a,1);
      if ((uVar4 & 1) != 0) goto LAB_00a866d4;
    }
    uVar9 = 1;
    uVar4 = FUN_00a85748(param_1,1);
    if ((uVar4 & 1) != 0) goto LAB_00a866d4;
    if (*param_1 == 0) goto LAB_00a86698;
    uVar4 = param_1[2];
    if (uVar4 < (ulong)param_1[1]) {
      cVar3 = *(char *)(*param_1 + uVar4);
      param_1[2] = uVar4 + 1;
      if (cVar3 == 'S') {
        if (((param_1[4] == 0) ||
            (uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e59b,3), (uVar4 & 1) == 0)) &&
           (uVar4 = FUN_00a83558(param_1), (uVar4 & 1) == 0)) {
          if (param_1[4] == 0) goto LAB_00a863b8;
          uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e59e,2);
          goto joined_r0x00a86738;
        }
      }
      else {
        if (cVar3 != 'T') {
          if (cVar3 == 'U') goto LAB_00a867b0;
          break;
        }
        if (param_1[4] != 0) {
          uVar9 = 1;
          uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e592,1);
          if ((uVar4 & 1) != 0) goto LAB_00a866d4;
        }
        uVar4 = FUN_00a83404(param_1);
        if ((uVar4 & 1) == 0) goto LAB_00a865f0;
      }
      goto LAB_00a86690;
    }
    break;
  case 'a':
  case 'i':
  case 'l':
  case 'n':
  case 's':
  case 'x':
    if (((uVar1 < uVar4) && (*(char *)(lVar8 + uVar1) == 'n')) &&
       (param_1[2] = uVar2 + 2, param_1[4] != 0)) {
      uVar9 = 1;
      uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e526,1);
      if ((uVar4 & 1) != 0) goto LAB_00a866d4;
    }
  case 'h':
  case 'j':
  case 'm':
  case 'o':
  case 't':
  case 'y':
    uVar4 = FUN_00a868ec(param_1,cVar3);
joined_r0x00a8686c:
    if ((uVar4 & 1) != 0) goto LAB_00a86690;
    goto LAB_00a863b8;
  case 'b':
    FUN_00a8534c(&local_40,param_1);
    if (local_40 == 0) {
      if (param_1[4] != 0) {
        puVar5 = &DAT_0038e499;
        if (local_38 == '\0') {
          puVar5 = &DAT_0029fc30;
        }
        uVar7 = 0x19;
        cVar3 = local_38;
        if (local_38 == '\0') {
          uVar7 = 0x10;
        }
LAB_00a8683c:
        uVar4 = <str_as_core::fmt::Display>::fmt(puVar5,uVar7);
        local_38 = cVar3;
        if ((uVar4 & 1) != 0) goto LAB_00a86690;
      }
LAB_00a86844:
      uVar9 = 0;
      *param_1 = 0;
      *(char *)(param_1 + 1) = local_38;
      goto LAB_00a866d4;
    }
    local_50[0] = local_40;
    auVar10 = FUN_00a85170(local_50);
    if (auVar10._0_8_ != 1) break;
    if (auVar10._8_8_ == 0) {
      if (param_1[4] != 0) {
        pcVar6 = &DAT_0038e595;
        uVar7 = 5;
LAB_00a86868:
        uVar4 = <str_as_core::fmt::Display>::fmt(pcVar6,uVar7);
        goto joined_r0x00a8686c;
      }
    }
    else {
      if (auVar10._8_8_ != 1) break;
      if (param_1[4] != 0) {
        pcVar6 = "true";
        uVar7 = 4;
        goto LAB_00a86868;
      }
    }
    goto LAB_00a863b8;
  case 'c':
    FUN_00a8534c(&local_40,param_1);
    if (local_40 == 0) {
      if (param_1[4] != 0) {
        uVar7 = 0x19;
        if (local_38 == '\0') {
          uVar7 = 0x10;
        }
        puVar5 = &DAT_0038e499;
        cVar3 = local_38;
        if (local_38 == '\0') {
          puVar5 = &DAT_0029fc30;
        }
        goto LAB_00a8683c;
      }
      goto LAB_00a86844;
    }
    local_50[0] = local_40;
    auVar10 = FUN_00a85170(local_50);
    if (((auVar10._0_8_ == 1) && (auVar10._8_8_ >> 0x20 == 0)) &&
       (0xffef07ff < (auVar10._8_4_ ^ 0xd800) - 0x110000)) {
      uVar4 = FUN_00a83c18(param_1);
      goto joined_r0x00a8686c;
    }
    break;
  case 'e':
    if (((param_2 & 1) == 0) && (param_1[4] != 0)) {
      uVar9 = 1;
      uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e59a,1);
      if ((uVar4 & 1) != 0) goto LAB_00a866d4;
    }
    if (param_1[4] != 0) {
      uVar9 = 1;
      uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e589,1);
      if ((uVar4 & 1) != 0) goto LAB_00a866d4;
    }
    uVar4 = FUN_00a86a4c(param_1);
joined_r0x00a86738:
    if ((uVar4 & 1) != 0) goto LAB_00a86690;
    goto LAB_00a867b0;
  case 'p':
    if (param_1[4] == 0) goto LAB_00a863b8;
    uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e594,1);
    goto joined_r0x00a86464;
  default:
    if (cVar3 == 'A') {
      if (((param_2 & 1) == 0) && (param_1[4] != 0)) {
        uVar9 = 1;
        uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e59a,1);
        if ((uVar4 & 1) != 0) goto LAB_00a866d4;
      }
      if (param_1[4] != 0) {
        uVar9 = 1;
        uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e56c,1);
        if ((uVar4 & 1) != 0) goto LAB_00a866d4;
      }
      uVar4 = FUN_00a83404(param_1);
      if ((uVar4 & 1) == 0) {
        if (param_1[4] == 0) goto LAB_00a863b8;
        puVar5 = &DAT_0038e56d;
        goto LAB_00a867a0;
      }
      goto LAB_00a86690;
    }
    if (cVar3 == 'B') {
      uVar4 = FUN_00a8323c(param_1,local_54);
      goto joined_r0x00a8686c;
    }
  }
switchD_00a86368_caseD_53:
  if ((param_1[4] == 0) ||
     (uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0029fc30,0x10), (uVar4 & 1) == 0)) {
    uVar9 = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
LAB_00a86690:
    uVar9 = 1;
  }
LAB_00a866d4:
  return (ulong)uVar9;
}


// ===== 00a868ec  FUN_00a868ec =====

undefined8 FUN_00a868ec(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long local_50 [2];
  long local_40;
  char local_38;
  undefined7 uStack_37;
  
  if (*param_1 == 0) {
    if (param_1[4] == 0) {
      return 0;
    }
    uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4b2,1);
    return uVar4;
  }
  FUN_00a8534c(&local_40,param_1);
  lVar2 = local_40;
  if (local_40 == 0) {
    if (param_1[4] != 0) {
      puVar1 = &DAT_0038e499;
      if (local_38 == '\0') {
        puVar1 = &DAT_0029fc30;
      }
      uVar4 = 0x19;
      if (local_38 == '\0') {
        uVar4 = 0x10;
      }
      uVar3 = <str_as_core::fmt::Display>::fmt(puVar1,uVar4);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
    *param_1 = 0;
    *(char *)(param_1 + 1) = local_38;
  }
  else {
    local_50[0] = local_40;
    auVar6 = FUN_00a85170(local_50);
    if (auVar6._0_8_ == 1) {
      lVar5 = param_1[4];
      if (lVar5 == 0) {
        return 0;
      }
      local_40 = auVar6._8_8_;
      uVar3 = <usize_as_core::fmt::Display>::fmt(&local_40,lVar5);
    }
    else {
      lVar5 = param_1[4];
      if (lVar5 == 0) {
        return 0;
      }
      uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0038e5a3,2,lVar5);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      uVar3 = <str_as_core::fmt::Display>::fmt(lVar2,CONCAT71(uStack_37,local_38),lVar5);
    }
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    if (-1 < *(char *)(lVar5 + 0x12)) {
      auVar6 = FUN_00a87200(param_2);
      if (auVar6._0_8_ != 0) {
        uVar4 = <str_as_core::fmt::Display>::fmt(auVar6._0_8_,auVar6._8_8_,lVar5);
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__rust_deps_rustc_demangle_0_1_28_00afea40);
    }
  }
  return 0;
}


// ===== 00a86a4c  FUN_00a86a4c =====

undefined8 FUN_00a86a4c(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long local_80;
  ulong local_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint local_54 [3];
  byte local_48;
  byte local_47;
  undefined1 uStack_41;
  
  if (*param_1 == 0) {
    if (param_1[4] == 0) {
      return 0;
    }
    uVar6 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4b2,1);
    return uVar6;
  }
  FUN_00a8534c(&local_80,param_1);
  if (local_80 == 0) {
    if (param_1[4] != 0) {
      puVar2 = &DAT_0038e499;
      if ((char)local_78 == '\0') {
        puVar2 = &DAT_0029fc30;
      }
      uVar6 = 0x19;
      if ((char)local_78 == '\0') {
        uVar6 = 0x10;
      }
      uVar10 = <str_as_core::fmt::Display>::fmt(puVar2,uVar6);
      if ((uVar10 & 1) != 0) goto LAB_00a86b74;
    }
    uVar6 = 0;
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)local_78;
  }
  else {
    if ((local_78 & 1) == 0) {
      uVar10 = local_78 & 0x7ffffffffffffffe;
      uStack_68 = 0;
      local_60 = 2;
      local_78 = uVar10;
      local_70 = local_80 + uVar10;
      do {
        iVar4 = FUN_00a87e90(&local_80);
        if (iVar4 == -2) {
          lVar8 = param_1[4];
          if (lVar8 == 0) {
            return 0;
          }
          uVar5 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(lVar8,0x22);
          if ((uVar5 & 1) == 0) {
            uStack_68 = 0;
            local_60 = 2;
            local_78 = uVar10;
            local_70 = local_80 + uVar10;
            do {
              while( true ) {
                iVar4 = FUN_00a87e90(&local_80);
                if (iVar4 == -2) {
                  uVar6 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(lVar8,0x22);
                  return uVar6;
                }
                if (iVar4 == 0x27) break;
                if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
                  core::result::unwrap_failed
                            (&DAT_0038e540,0x2b,&uStack_41,&DAT_00afe948,
                             &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afed48);
                }
                FUN_00a84eec(local_54);
                uVar3 = local_54[0];
                uVar10 = (ulong)local_48;
                uVar9 = (uint)local_47;
                uVar1 = (uint)local_48;
                if (local_48 <= local_47) {
                  uVar1 = uVar9;
                }
                while (uVar1 != uVar10) {
                  uVar7 = uVar3;
                  if (uVar9 < 0x81) {
                    uVar7 = (uint)*(byte *)((long)local_54 + uVar10);
                  }
                  uVar5 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(lVar8,uVar7);
                  uVar10 = uVar10 + 1;
                  if ((uVar5 & 1) != 0) goto LAB_00a86b74;
                }
              }
              iVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(lVar8,0x27);
            } while (iVar4 == 0);
          }
          goto LAB_00a86b74;
        }
      } while (iVar4 != -1);
    }
    if ((param_1[4] == 0) ||
       (uVar10 = <str_as_core::fmt::Display>::fmt(&DAT_0029fc30,0x10), (uVar10 & 1) == 0)) {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      return 0;
    }
LAB_00a86b74:
    uVar6 = 1;
  }
  return uVar6;
}


// ===== 00a86c6c  FUN_00a86c6c =====

ulong FUN_00a86c6c(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int local_3c;
  ulong local_38;
  
  lVar4 = param_1[4];
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e5a5,1,lVar4);
    if ((uVar2 & 1) == 0) {
      if (param_2 == 0) {
        uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e594,1,lVar4);
        return uVar2;
      }
      uVar2 = *(uint *)(param_1 + 5) - param_2;
      if (*(uint *)(param_1 + 5) < param_2) {
        uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0029fc30,0x10,lVar4);
        if ((uVar2 & 1) == 0) {
          uVar1 = 0;
          *param_1 = 0;
          *(undefined1 *)(param_1 + 1) = 0;
        }
        else {
          uVar1 = 1;
        }
      }
      else if (uVar2 < 0x1a) {
        local_3c = (int)uVar2 + 0x61;
        uVar1 = <char_as_core::fmt::Display>::fmt(&local_3c,lVar4);
      }
      else {
        uVar1 = 1;
        uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0038e594,1,lVar4);
        if ((uVar3 & 1) == 0) {
          local_38 = uVar2;
          uVar1 = <usize_as_core::fmt::Display>::fmt(&local_38,lVar4);
        }
      }
    }
  }
  return (ulong)uVar1;
}


// ===== 00a86d80  FUN_00a86d80 =====

undefined1 FUN_00a86d80(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long local_60;
  char cStack_58;
  undefined7 uStack_57;
  long lStack_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lVar6 = *param_1;
  if ((lVar6 != 0) && (uVar5 = param_1[2], uVar5 < (ulong)param_1[1])) {
    if (*(char *)(lVar6 + uVar5) == 'B') {
      param_1[2] = uVar5 + 1;
      FUN_00a856b0(&local_60,param_1);
      if (local_60 == 0) {
        if (param_1[4] != 0) {
          puVar1 = &DAT_0038e499;
          if (cStack_58 == '\0') {
            puVar1 = &DAT_0029fc30;
          }
          uVar2 = 0x19;
          if (cStack_58 == '\0') {
            uVar2 = 0x10;
          }
          iVar4 = <str_as_core::fmt::Display>::fmt(puVar1,uVar2);
          if (iVar4 != 0) {
            return 2;
          }
        }
        param_1[1] = CONCAT71(uStack_57,cStack_58);
        *param_1 = local_60;
        param_1[3] = lStack_48;
        param_1[2] = lStack_50;
      }
      else if (param_1[4] != 0) {
        lStack_38 = param_1[1];
        local_40 = *param_1;
        lStack_28 = param_1[3];
        lStack_30 = param_1[2];
        param_1[1] = CONCAT71(uStack_57,cStack_58);
        *param_1 = local_60;
        param_1[3] = lStack_48;
        param_1[2] = lStack_50;
        uVar3 = FUN_00a86d80(param_1);
        param_1[1] = lStack_38;
        *param_1 = local_40;
        param_1[3] = lStack_28;
        param_1[2] = lStack_30;
        return uVar3;
      }
      return 0;
    }
    if (*(char *)(lVar6 + uVar5) == 'I') {
      param_1[2] = uVar5 + 1;
      uVar5 = FUN_00a85748(param_1,0);
      if (((uVar5 & 1) == 0) &&
         ((param_1[4] == 0 ||
          (uVar5 = <str_as_core::fmt::Display>::fmt(&DAT_0038e57c,1), (uVar5 & 1) == 0)))) {
        uVar5 = FUN_00a83a48(param_1);
        if ((uVar5 & 1) != 0) {
          return 2;
        }
        return 1;
      }
      return 2;
    }
  }
  iVar4 = FUN_00a85748(param_1,0);
  uVar3 = 2;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00a86ed0  FUN_00a86ed0 =====

undefined8 FUN_00a86ed0(long *param_1)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4b2,1);
      return uVar4;
    }
    return 0;
  }
  uVar3 = param_1[2];
  if (uVar3 < (ulong)param_1[1]) {
    cVar2 = *(char *)(*param_1 + uVar3);
    param_1[2] = uVar3 + 1;
    if (cVar2 == 'N') {
      if (param_1[4] == 0) {
        return 0;
      }
      uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0038e5ac,5);
joined_r0x00a86fd4:
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      return 0;
    }
    if (cVar2 == 'O') {
      uVar1 = (int)param_1[3] + 1;
      *(uint *)(param_1 + 3) = uVar1;
      if (500 < uVar1) {
        if ((param_1[4] != 0) &&
           (uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0038e499,0x19), (uVar3 & 1) != 0)) {
          return 1;
        }
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 1;
        return 0;
      }
      uVar3 = FUN_00a86ed0(param_1);
      while( true ) {
        if ((uVar3 & 1) != 0) {
          return 1;
        }
        if (*param_1 == 0) break;
        uVar3 = param_1[2];
        if ((uVar3 < (ulong)param_1[1]) && (*(char *)(*param_1 + uVar3) == 'E')) {
          param_1[2] = uVar3 + 1;
          *(int *)(param_1 + 3) = (int)param_1[3] + -1;
          return 0;
        }
        if ((param_1[4] != 0) &&
           (uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0038e5a9,3), (uVar3 & 1) != 0)) {
          return 1;
        }
        uVar3 = FUN_00a86ed0(param_1);
      }
    }
    else if (cVar2 == 'R') {
      uVar3 = FUN_00a862c4(param_1,0);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      if ((param_1[4] != 0) &&
         (uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0038e5a6,3), (uVar3 & 1) != 0)) {
        return 1;
      }
      uVar3 = FUN_00a862c4(param_1,0);
      goto joined_r0x00a86fd4;
    }
  }
  if ((param_1[4] != 0) &&
     (uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0029fc30,0x10), (uVar3 & 1) != 0)) {
    return 1;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return 0;
}


// ===== 00a87090  FUN_00a87090 =====

undefined1  [16] FUN_00a87090(ulong *param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong __n;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((*(byte *)((long)param_1 + 0x41) & 1) == 0) {
    uVar1 = param_1[2];
    uVar8 = param_1[3];
    uVar9 = param_1[5];
    if ((uVar9 <= uVar8) && (uVar10 = param_1[4], uVar10 <= uVar9)) {
      uVar4 = param_1[7];
      __n = (ulong)(byte)uVar4;
      cVar2 = *(char *)((long)param_1 + __n + 0x2f);
      do {
        if (uVar9 - uVar10 < 0x10) {
          uVar7 = 0;
          if (uVar9 == uVar10) {
            auVar11 = ZEXT816(0);
          }
          else {
            do {
              if (*(char *)(uVar1 + uVar10 + uVar7) == cVar2) {
                auVar11._8_8_ = uVar7;
                auVar11._0_8_ = 1;
                goto LAB_00a87144;
              }
              uVar7 = uVar7 + 1;
            } while (uVar9 - uVar10 != uVar7);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar9 - uVar10;
            auVar11 = auVar3 << 0x40;
          }
        }
        else {
          auVar11 = core::slice::memchr::memchr_aligned(cVar2,uVar1 + uVar10,uVar9 - uVar10);
        }
LAB_00a87144:
        if (auVar11._0_8_ != 1) {
          param_1[4] = uVar9;
          break;
        }
        uVar10 = uVar10 + auVar11._8_8_ + 1;
        param_1[4] = uVar10;
        if ((__n <= uVar10) && (uVar10 <= uVar8)) {
          if (4 < (byte)uVar4) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (0,__n,4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afed18);
          }
          iVar5 = memcmp((void *)(uVar1 + (uVar10 - __n)),param_1 + 6,__n);
          if (iVar5 == 0) {
            uVar8 = *param_1;
            *param_1 = uVar10;
            param_2 = (uVar10 - __n) - uVar8;
            lVar6 = uVar1 + uVar8;
            goto LAB_00a871bc;
          }
        }
      } while (uVar10 <= uVar9);
    }
    param_2 = param_1[1] - *param_1;
    lVar6 = uVar1 + *param_1;
    *(undefined1 *)((long)param_1 + 0x41) = 1;
    if ((param_1[8] & 1) == 0 && param_2 == 0) {
      lVar6 = 0;
    }
  }
  else {
    lVar6 = 0;
  }
LAB_00a871bc:
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = lVar6;
  return auVar12;
}


// ===== 00a87200  FUN_00a87200 =====

undefined1  [16] FUN_00a87200(char param_1,ulong param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  bVar1 = param_1 + 0x9f;
  if (bVar1 < 0x1a) {
    auVar3._8_8_ = *(undefined8 *)(&DAT_0038e690 + (ulong)bVar1 * 8);
    auVar3._0_8_ = (&PTR_DAT_00afed60)[bVar1];
    return auVar3;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}


// ===== 00a87238  FUN_00a87238 =====

byte FUN_00a87238(ulong param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_1 >> 8) & 0xffffff;
  if (uVar3 < 0x20) {
    if ((param_1 & 0xffffff00) == 0) {
      bVar1 = PTR_WHITESPACE_MAP_00b00d70[param_1 & 0xff];
      goto LAB_00a872a0;
    }
    bVar1 = (int)param_1 == 0x1680;
    bVar2 = uVar3 == 0x16;
  }
  else {
    if (uVar3 == 0x20) {
      bVar1 = (byte)PTR_WHITESPACE_MAP_00b00d70[param_1 & 0xff] >> 1 & 1;
      goto LAB_00a872a0;
    }
    bVar1 = (int)param_1 == 0x3000;
    bVar2 = uVar3 == 0x30;
  }
  if (!bVar2) {
    bVar1 = 0;
  }
LAB_00a872a0:
  return bVar1 & 1;
}


// ===== 00a872a8  <rustc_demangle::v0::Demangle_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustc_demangle::v0::Demangle as core::fmt::Display>::fmt */

void __rustcall
<rustc_demangle::v0::Demangle_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_40 = *param_1;
  local_38 = param_1[1];
  local_28 = 0;
  uStack_30 = 0;
  local_18 = 0;
  local_20 = param_2;
  FUN_00a85748(&local_40,1);
  return;
}


// ===== 00a872e4  <rustc_demangle::legacy::Demangle_as_core::fmt::Display>::fmt =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <rustc_demangle::legacy::Demangle as core::fmt::Display>::fmt */

bool __rustcall
<rustc_demangle::legacy::Demangle_as_core::fmt::Display>::fmt(undefined8 *param_1,long param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined **ppuVar13;
  int iVar14;
  long lVar15;
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  byte *pbVar19;
  uint uVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  byte *pbVar25;
  undefined1 auVar26 [16];
  long local_70;
  uint local_68;
  undefined1 local_64 [4];
  
  pbVar19 = (byte *)param_1[1];
  lVar24 = param_1[2];
  local_70 = 0;
  pbVar12 = (byte *)*param_1;
LAB_00a8732c:
  bVar4 = local_70 != lVar24;
  if (!bVar4) {
    return bVar4;
  }
  if (pbVar19 == (byte *)0x0) {
code_r0x00a87d58:
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__rust_deps_rustc_demangle_0_1_28_00afeb30);
  }
  bVar1 = *pbVar12;
  lVar15 = 0;
  pbVar25 = (byte *)0x0;
  pbVar16 = pbVar19;
  while( true ) {
    uVar17 = (uint)bVar1;
    uVar20 = uVar17;
    if ((char)bVar1 < '\0') {
      uVar20 = (pbVar12 + (long)pbVar25)[1] & 0x3f;
      if (uVar17 < 0xe0) {
        uVar20 = uVar20 | (uVar17 & 0x1f) << 6;
      }
      else {
        uVar20 = (pbVar12 + (long)pbVar25)[2] & 0x3f | uVar20 << 6;
        if (uVar17 < 0xf0) {
          uVar20 = uVar20 | (uVar17 & 0x1f) << 0xc;
        }
        else {
          uVar20 = (pbVar12 + (long)pbVar25)[3] & 0x3f | uVar20 << 6 | (uVar17 & 7) << 0x12;
        }
      }
    }
    if (9 < uVar20 - 0x30) break;
    if (pbVar19 + -1 == pbVar25) goto code_r0x00a87d58;
    pbVar6 = pbVar12 + (long)pbVar25;
    bVar1 = pbVar6[1];
    iVar14 = (int)(char)bVar1;
    if (iVar14 == -0x41 || iVar14 + 0x41 < 0 != SCARRY4(iVar14,0x41)) {
      pbVar8 = pbVar19 + -(long)pbVar25;
      ppuVar13 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afec98;
      goto LAB_00a87d6c;
    }
    pbVar16 = pbVar16 + -1;
    pbVar25 = pbVar25 + 1;
    lVar15 = lVar15 + -1;
  }
  if (pbVar25 == (byte *)0x0) {
    local_64[0] = 0;
    goto LAB_00a87d10;
  }
  iVar14 = (int)(char)pbVar12[(long)pbVar25];
  if (iVar14 == -0x41 || iVar14 + 0x41 < 0 != SCARRY4(iVar14,0x41)) {
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail
              (pbVar12,pbVar19,0,pbVar25,&PTR_s__rust_deps_rustc_demangle_0_1_28_00afeb48);
  }
  bVar1 = *pbVar12;
  if ((pbVar25 == &DAT_00000001) && ((local_64[0] = 1, bVar1 == 0x2b || (bVar1 == 0x2d))))
  goto LAB_00a87d10;
  pbVar8 = pbVar19 + -(long)pbVar25;
  pbVar5 = pbVar12 + (long)pbVar25;
  pbVar21 = pbVar12;
  if (bVar1 == 0x2b) {
    pbVar21 = pbVar12 + 1;
  }
  uVar18 = (long)pbVar25 - (ulong)(bVar1 == 0x2b);
  if (uVar18 < 0x11) {
    if (uVar18 == 0) {
      pbVar21 = pbVar12 + (long)pbVar25;
      pbVar7 = (byte *)0x0;
      pbVar19 = pbVar8;
      goto joined_r0x00a8760c;
    }
    pbVar11 = (byte *)0x0;
    do {
      if (9 < *pbVar21 - 0x30) goto LAB_00a87d78;
      uVar18 = uVar18 - 1;
      pbVar11 = (byte *)((long)pbVar11 * 10 + (ulong)(*pbVar21 - 0x30));
      pbVar21 = pbVar21 + 1;
    } while (uVar18 != 0);
  }
  else {
    pbVar11 = (byte *)0x0;
    while (uVar18 != 0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = pbVar11;
      if (SUB168(auVar2 * ZEXT816(10),8) != 0) {
        local_64[0] = 1;
        if (*pbVar21 - 0x30 < 10) {
          local_64[0] = 2;
        }
        goto LAB_00a87d10;
      }
      uVar20 = *pbVar21 - 0x30;
      if (9 < uVar20) goto LAB_00a87d78;
      uVar18 = uVar18 - 1;
      uVar23 = (long)pbVar11 * 10;
      pbVar11 = (byte *)(uVar23 + uVar20);
      pbVar21 = pbVar21 + 1;
      if (CARRY8(uVar23,(ulong)uVar20)) {
        local_64[0] = 2;
        goto LAB_00a87d10;
      }
    }
  }
  pbVar19 = pbVar19 + -(long)pbVar11;
  if (pbVar11 == (byte *)0x0) {
    pbVar19 = pbVar19 + -(long)pbVar25;
    pbVar21 = pbVar12 + (long)pbVar25;
    pbVar7 = (byte *)0x0;
    goto joined_r0x00a8760c;
  }
  if (pbVar11 < pbVar8) {
    iVar14 = (int)(char)(pbVar12 + (long)pbVar11)[(long)pbVar25];
    if (iVar14 != -0x41 && iVar14 + 0x41 < 0 == SCARRY4(iVar14,0x41)) {
LAB_00a874ec:
      pbVar21 = pbVar12 + (long)pbVar11 + (long)pbVar25;
      if (pbVar11 < pbVar8) {
        iVar14 = (int)(char)*pbVar21;
        if (iVar14 == -0x41 || iVar14 + 0x41 < 0 != SCARRY4(iVar14,0x41)) {
code_r0x00a87dbc:
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (pbVar12 + (long)pbVar25,pbVar8,0,pbVar11,
                     &PTR_s__rust_deps_rustc_demangle_0_1_28_00afeb90);
        }
        pbVar19 = pbVar19 + -(long)pbVar25;
        pbVar8 = pbVar11;
      }
      else {
        if (pbVar19 != pbVar25) goto code_r0x00a87dbc;
        pbVar19 = (byte *)0x0;
      }
      pbVar7 = pbVar8;
      if (((-1 < *(char *)(param_2 + 0x12)) || (local_70 + 1 != lVar24)) || (uVar17 != 0x68)) {
joined_r0x00a8760c:
        if ((local_70 != 0) &&
           (uVar18 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0038e56e,2),
           (uVar18 & 1) != 0)) {
          return bVar4;
        }
        local_70 = local_70 + 1;
        if ((&DAT_00000001 < pbVar7) && (*(short *)pbVar5 == 0x245f)) {
          pbVar5 = pbVar12 + (long)pbVar25;
          iVar14 = (int)(char)pbVar5[1];
          if (iVar14 + 0x40 < 0 != SCARRY4(iVar14,0x40)) {
            ppuVar13 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afeba8;
            uVar10 = 1;
            pbVar12 = pbVar7;
LAB_00a87cc8:
                    /* WARNING: Subroutine does not return */
            core::str::slice_error_fail(pbVar5,pbVar7,uVar10,pbVar12,ppuVar13);
          }
          pbVar5 = pbVar5 + 1;
          pbVar7 = pbVar7 + -1;
        }
LAB_00a87674:
        if (pbVar7 == (byte *)0x0) {
LAB_00a876b8:
          pbVar25 = pbVar5;
          pbVar16 = (byte *)0x0;
          do {
            pbVar12 = pbVar16;
            if (pbVar25 == pbVar5 + (long)pbVar7) goto LAB_00a87c8c;
            pbVar16 = pbVar25 + 1;
            uVar20 = (uint)*pbVar25;
            if ((char)*pbVar25 < '\0') {
              if (uVar20 < 0xe0) {
                uVar20 = pbVar25[1] & 0x3f | (uVar20 & 0x1f) << 6;
                pbVar16 = pbVar25 + 2;
              }
              else {
                uVar17 = pbVar25[2] & 0x3f | (pbVar25[1] & 0x3f) << 6;
                if (uVar20 < 0xf0) {
                  uVar20 = uVar17 | (uVar20 & 0x1f) << 0xc;
                  pbVar16 = pbVar25 + 3;
                }
                else {
                  uVar20 = pbVar25[3] & 0x3f | uVar17 << 6 | (uVar20 & 7) << 0x12;
                  pbVar16 = pbVar25 + 4;
                }
              }
            }
          } while ((uVar20 != 0x24) &&
                  (lVar15 = (long)pbVar12 - (long)pbVar25, pbVar25 = pbVar16,
                  pbVar16 = pbVar16 + lVar15, uVar20 != 0x2e));
          if (pbVar12 == (byte *)0x0) {
            uVar18 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pbVar5,0);
            if ((uVar18 & 1) != 0) {
              return true;
            }
            pbVar25 = (byte *)0x0;
            goto LAB_00a878c4;
          }
          if (pbVar12 < pbVar7) {
            iVar14 = (int)(char)pbVar5[(long)pbVar12];
            if (iVar14 != -0x41 && iVar14 + 0x41 < 0 == SCARRY4(iVar14,0x41)) {
LAB_00a87838:
              uVar18 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pbVar5,pbVar12);
              if ((uVar18 & 1) != 0) {
                return true;
              }
              if (pbVar12 < pbVar7) {
                pbVar25 = pbVar12;
                if ((char)pbVar5[(long)pbVar12] + 0x40 < 0 !=
                    SCARRY4((int)(char)pbVar5[(long)pbVar12],0x40)) {
code_r0x00a87dd0:
                  ppuVar13 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afebd8;
                  goto LAB_00a87e30;
                }
              }
              else {
                pbVar25 = pbVar7;
                if (pbVar12 != pbVar7) goto code_r0x00a87dd0;
              }
LAB_00a878c4:
              pbVar5 = pbVar5 + (long)pbVar25;
              pbVar7 = pbVar7 + -(long)pbVar25;
              goto LAB_00a87674;
            }
          }
          else if (pbVar12 == pbVar7) goto LAB_00a87838;
          ppuVar13 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afebc0;
          uVar10 = 0;
          goto LAB_00a87cc8;
        }
        if (*pbVar5 == 0x24) {
          pbVar12 = pbVar7 + -1;
          if ((pbVar12 == (byte *)0x0) ||
             (iVar14 = (int)(char)pbVar5[1],
             iVar14 != -0x41 && iVar14 + 0x41 < 0 == SCARRY4(iVar14,0x41))) {
            pbVar8 = (byte *)0x0;
            pbVar6 = pbVar5 + 1;
            do {
              if ((ulong)((long)pbVar12 - (long)pbVar8) < 0x10) {
                uVar18 = 0;
                if (pbVar12 == pbVar8) {
                  auVar26 = ZEXT816(0);
                }
                else {
                  do {
                    if ((pbVar6 + (long)pbVar8)[uVar18] == 0x24) {
                      auVar26._8_8_ = uVar18;
                      auVar26._0_8_ = 1;
                      goto LAB_00a877e8;
                    }
                    uVar18 = uVar18 + 1;
                  } while ((long)pbVar12 - (long)pbVar8 != uVar18);
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = (long)pbVar12 - (long)pbVar8;
                  auVar26 = auVar3 << 0x40;
                }
              }
              else {
                auVar26 = core::slice::memchr::memchr_aligned
                                    (0x24,pbVar6 + (long)pbVar8,(long)pbVar12 - (long)pbVar8);
              }
LAB_00a877e8:
              if (auVar26._0_8_ != 1) goto LAB_00a87c8c;
              pbVar8 = pbVar8 + auVar26._8_8_;
              if ((pbVar8 < pbVar12) && (pbVar6[(long)pbVar8] == 0x24)) goto LAB_00a878d0;
              pbVar8 = pbVar8 + 1;
              if (pbVar12 < pbVar8) goto LAB_00a87c8c;
            } while( true );
          }
          ppuVar13 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afebf0;
        }
        else {
          if (*pbVar5 != 0x2e) goto LAB_00a876b8;
          if (pbVar7 + -1 == (byte *)0x0) {
            uVar18 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0038e5e1,1);
            if ((uVar18 & 1) != 0) {
              return true;
            }
LAB_00a87b58:
            pbVar5 = pbVar5 + 1;
            pbVar7 = pbVar7 + -1;
            goto LAB_00a87674;
          }
          iVar14 = (int)(char)pbVar5[1];
          if (iVar14 == -0x41 || iVar14 + 0x41 < 0 != SCARRY4(iVar14,0x41)) {
            ppuVar13 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afec50;
          }
          else {
            uVar20 = (uint)pbVar5[1];
            if ((char)pbVar5[1] < '\0') {
              if (uVar20 < 0xe0) {
                uVar20 = pbVar5[2] & 0x3f | (uVar20 & 0x1f) << 6;
              }
              else {
                uVar17 = pbVar5[3] & 0x3f | (pbVar5[2] & 0x3f) << 6;
                if (uVar20 < 0xf0) {
                  uVar20 = uVar17 | (uVar20 & 0x1f) << 0xc;
                }
                else {
                  uVar20 = pbVar5[4] & 0x3f | uVar17 << 6 | (uVar20 & 7) << 0x12;
                }
              }
            }
            if (uVar20 == 0x2e) {
              uVar18 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0038e56e,2);
              if ((uVar18 & 1) != 0) {
                return true;
              }
              if (((byte *)0x2 < pbVar7) &&
                 ((char)pbVar5[2] + 0x40 < 0 != SCARRY4((int)(char)pbVar5[2],0x40))) {
                ppuVar13 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afec68;
                pbVar12 = (byte *)0x2;
                goto LAB_00a87e30;
              }
              pbVar5 = pbVar5 + 2;
              pbVar7 = pbVar7 + -2;
              goto LAB_00a87674;
            }
            uVar18 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0038e5e1,1);
            if ((uVar18 & 1) != 0) {
              return true;
            }
            if ((char)pbVar5[1] + 0x40 < 0 == SCARRY4((int)(char)pbVar5[1],0x40)) goto LAB_00a87b58;
            ppuVar13 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afec80;
          }
        }
        pbVar12 = &DAT_00000001;
        goto LAB_00a87e30;
      }
      if ((pbVar8 == &DAT_00000001) ||
         (pbVar6 = pbVar12 + (long)pbVar25,
         (char)pbVar6[1] + 0x40 < 0 == SCARRY4((int)(char)pbVar6[1],0x40))) {
        if (pbVar16 <= pbVar11) {
          pbVar11 = pbVar16;
        }
        pbVar16 = pbVar12 + (long)pbVar25 + 1;
        do {
          if (pbVar12 + (long)pbVar11 + -lVar15 == pbVar16) {
            return false;
          }
          pbVar8 = pbVar16 + 1;
          uVar20 = (uint)*pbVar16;
          if ((char)*pbVar16 < '\0') {
            if (uVar20 < 0xe0) {
              uVar20 = pbVar16[1] & 0x3f | (uVar20 & 0x1f) << 6;
              pbVar8 = pbVar16 + 2;
            }
            else {
              uVar17 = pbVar16[2] & 0x3f | (pbVar16[1] & 0x3f) << 6;
              if (uVar20 < 0xf0) {
                uVar20 = uVar17 | (uVar20 & 0x1f) << 0xc;
                pbVar8 = pbVar16 + 3;
              }
              else {
                pbVar8 = pbVar16 + 4;
                uVar20 = pbVar16[3] & 0x3f | uVar17 << 6 | (uVar20 & 7) << 0x12;
              }
            }
          }
          uVar17 = (uVar20 - 0x41 & 0xffffffde) + 10;
          if (uVar20 < 0x3a) {
            uVar17 = uVar20 - 0x30;
          }
          pbVar16 = pbVar8;
        } while (uVar17 < 0x10);
        goto joined_r0x00a8760c;
      }
      ppuVar13 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afead0;
LAB_00a87d6c:
      pbVar11 = &DAT_00000001;
      goto LAB_00a87d70;
    }
  }
  else if (pbVar19 == pbVar25) goto LAB_00a874ec;
  ppuVar13 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afeb78;
  pbVar6 = pbVar12 + (long)pbVar25;
LAB_00a87d70:
                    /* WARNING: Subroutine does not return */
  core::str::slice_error_fail(pbVar6,pbVar8,pbVar11,pbVar8,ppuVar13);
LAB_00a878d0:
  bVar1 = *pbVar6;
  if ((char)bVar1 + 0x40 < 0 != SCARRY4((int)(char)bVar1,0x40)) {
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail
              (pbVar5,pbVar7,1,pbVar8 + 1,&PTR_s__rust_deps_rustc_demangle_0_1_28_00afec08);
  }
  pbVar12 = pbVar8 + 2;
  pbVar25 = pbVar7 + -(long)pbVar12;
  if (pbVar7 < pbVar12 || pbVar25 == (byte *)0x0) {
    if (pbVar25 != (byte *)0x0) goto code_r0x00a87e3c;
  }
  else if ((char)pbVar5[(long)pbVar12] + 0x40 < 0 != SCARRY4((int)(char)pbVar5[(long)pbVar12],0x40))
  {
code_r0x00a87e3c:
    ppuVar13 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afec20;
LAB_00a87e30:
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail(pbVar5,pbVar7,pbVar12,pbVar7,ppuVar13);
  }
  if (pbVar8 + -1 == (byte *)0x0) {
    puVar9 = &DAT_0038e593;
    if (*pbVar6 == 0x43) goto LAB_00a87c4c;
    if (bVar1 != 0x75) goto LAB_00a87c8c;
  }
  else {
    if (pbVar8 == (byte *)0x2) {
      if (*(short *)pbVar6 == 0x5053) {
        puVar9 = &DAT_0038e5e0;
      }
      else if (*(short *)pbVar6 == 0x5042) {
        puVar9 = &DAT_0038e589;
      }
      else if (*(short *)pbVar6 == 0x4652) {
        puVar9 = &DAT_0038e587;
      }
      else if (*(short *)pbVar6 == 0x544c) {
        puVar9 = &DAT_0038e57c;
      }
      else if (*(short *)pbVar6 == 0x5447) {
        puVar9 = &DAT_0038e57d;
      }
      else if (*(short *)pbVar6 == 0x504c) {
        puVar9 = &DAT_0038e592;
      }
      else {
        if (*(short *)pbVar6 != 0x5052) {
          if (bVar1 != 0x75) goto LAB_00a87c8c;
          goto LAB_00a87928;
        }
        puVar9 = &DAT_0038e52a;
      }
LAB_00a87c4c:
      uVar18 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,puVar9,1);
      goto joined_r0x00a87c5c;
    }
    if ((pbVar8 == (byte *)0x0) || (bVar1 != 0x75)) goto LAB_00a87c8c;
    if (&DAT_00000001 < pbVar8) {
LAB_00a87928:
      if ((char)pbVar5[2] + 0x40 < 0 != SCARRY4((int)(char)pbVar5[2],0x40)) {
        ppuVar13 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afec38;
        goto LAB_00a87d6c;
      }
    }
  }
  pbVar16 = pbVar5 + 2;
  pbVar11 = pbVar5 + 2;
  do {
    pbVar22 = pbVar11;
    if (pbVar22 == pbVar6 + (long)pbVar8) break;
    pbVar11 = pbVar22 + 1;
    uVar20 = (uint)*pbVar22;
    if ((char)*pbVar22 < '\0') {
      if (uVar20 < 0xe0) {
        uVar20 = pbVar22[1] & 0x3f | (uVar20 & 0x1f) << 6;
        pbVar11 = pbVar22 + 2;
      }
      else {
        uVar17 = pbVar22[2] & 0x3f | (pbVar22[1] & 0x3f) << 6;
        if (uVar20 < 0xf0) {
          uVar20 = uVar17 | (uVar20 & 0x1f) << 0xc;
          pbVar11 = pbVar22 + 3;
        }
        else {
          uVar20 = pbVar22[3] & 0x3f | uVar17 << 6 | (uVar20 & 7) << 0x12;
          pbVar11 = pbVar22 + 4;
        }
      }
    }
  } while ((0xfffffff5 < uVar20 - 0x3a) || (0xfffffff9 < uVar20 - 0x67));
  if (pbVar8 == (byte *)0x2) {
    bVar1 = *pbVar16;
    if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) goto LAB_00a87c8c;
  }
  else {
    if (pbVar8 == &DAT_00000001) goto LAB_00a87c8c;
    bVar1 = *pbVar16;
  }
  if (bVar1 == 0x2b) {
    pbVar16 = pbVar5 + 3;
  }
  uVar18 = (long)(pbVar8 + -1) - (ulong)(bVar1 == 0x2b);
  if (uVar18 < 9) {
    uVar20 = 0;
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
      bVar1 = *pbVar16;
      uVar17 = (bVar1 - 0x41 & 0xffffffdf) + 10;
      if (bVar1 < 0x3a) {
        uVar17 = bVar1 - 0x30;
      }
      if (0xf < uVar17) goto LAB_00a87c8c;
      uVar20 = uVar17 | uVar20 << 4;
      pbVar16 = pbVar16 + 1;
    }
  }
  else {
    uVar20 = 0;
    do {
      bVar1 = *pbVar16;
      if (uVar20 >> 0x1c != 0) goto LAB_00a87c8c;
      uVar17 = (bVar1 - 0x41 & 0xffffffdf) + 10;
      if (bVar1 < 0x3a) {
        uVar17 = bVar1 - 0x30;
      }
      if (0xf < uVar17) goto LAB_00a87c8c;
      uVar20 = uVar17 | uVar20 << 4;
      uVar18 = uVar18 - 1;
      pbVar16 = pbVar16 + 1;
    } while (uVar18 != 0);
  }
  if ((((uVar20 ^ 0xd800) - 0x110000 < 0xffef0800 || pbVar22 != pbVar6 + (long)pbVar8) ||
      (local_68 = uVar20, ((ulong)uVar20 << 0x20) >> 0x25 == 0)) ||
     (((ulong)uVar20 << 0x20) - 0x7f00000000 >> 0x20 < 0x21)) goto LAB_00a87c8c;
  uVar18 = <char_as_core::fmt::Display>::fmt(&local_68,param_2);
joined_r0x00a87c5c:
  pbVar5 = pbVar5 + (long)pbVar12;
  pbVar7 = pbVar25;
  if ((uVar18 & 1) != 0) {
    return true;
  }
  goto LAB_00a87674;
LAB_00a87c8c:
  uVar18 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pbVar5,pbVar7);
  pbVar12 = pbVar21;
  if ((uVar18 & 1) != 0) {
    return bVar4;
  }
  goto LAB_00a8732c;
LAB_00a87d78:
  local_64[0] = 1;
LAB_00a87d10:
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_0038e540,0x2b,local_64,&DAT_00afe968,
             &PTR_s__rust_deps_rustc_demangle_0_1_28_00afeb60);
}


// ===== 00a87e74  <&mut_core::fmt::Formatter_as_core::fmt::Write>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut core::fmt::Formatter as core::fmt::Write>::write_str */

void __rustcall <&mut_core::fmt::Formatter_as_core::fmt::Write>::write_str(undefined8 *param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(*param_1);
  return;
}


// ===== 00a87e7c  FUN_00a87e7c =====

void FUN_00a87e7c(long param_1,long param_2)

{
  if ((ulong)(param_2 - param_1) < 0x20) {
    core::str::count::char_count_general_case();
    return;
  }
  core::str::count::do_count_chars();
  return;
}


// ===== 00a87e90  FUN_00a87e90 =====

uint FUN_00a87e90(long *param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  undefined1 *local_70;
  long lStack_68;
  undefined1 local_5c;
  undefined2 local_5b;
  undefined1 local_59;
  byte *local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined1 *local_40;
  byte *local_38;
  byte **local_30;
  undefined *puStack_28;
  undefined8 *local_20;
  undefined *puStack_18;
  
  uVar5 = param_1[4];
  lVar3 = param_1[1] - uVar5;
  if ((ulong)param_1[1] < uVar5) {
    return 0xfffffffe;
  }
  pbVar6 = (byte *)*param_1;
  *param_1 = (long)(pbVar6 + uVar5);
  param_1[1] = lVar3;
  if (uVar5 != 2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0038e4f4,0x28,&PTR_s__rust_deps_rustc_demangle_0_1_28_00afe8d0);
  }
  bVar1 = *pbVar6;
  uVar4 = (bVar1 - 0x41 & 0xffffffdf) + 10;
  if (bVar1 < 0x3a) {
    uVar4 = bVar1 - 0x30;
  }
  if (uVar4 < 0x10) {
    bVar1 = pbVar6[1];
    uVar2 = (bVar1 - 0x41 & 0xffffffdf) + 10;
    if (bVar1 < 0x3a) {
      uVar2 = bVar1 - 0x30;
    }
    if (uVar2 < 0x10) {
      uVar2 = uVar2 | uVar4 << 4;
      local_5c = (undefined1)uVar2;
      if ((uVar2 >> 7 & 1) == 0) {
        lStack_68 = 1;
      }
      else {
        if (uVar2 < 0xc0) {
          return 0xffffffff;
        }
        if (uVar2 < 0xe0) {
          lStack_68 = 2;
        }
        else if (uVar2 < 0xf0) {
          lStack_68 = 3;
        }
        else {
          if (0xf7 < uVar2) {
            return 0xffffffff;
          }
          lStack_68 = 4;
        }
        local_70 = &local_5c;
        lVar7 = 0;
        local_5b = 0;
        local_59 = 0;
        pbVar8 = (byte *)((ulong)local_70 | 1);
        pbVar6 = pbVar6 + 2;
        do {
          uVar5 = lVar3 + lVar7;
          if (uVar5 < 2) {
            return 0xffffffff;
          }
          bVar1 = *pbVar6;
          *param_1 = (long)(pbVar6 + 2);
          param_1[1] = uVar5 - 2;
          uVar4 = (bVar1 - 0x41 & 0xffffffdf) + 10;
          if (bVar1 < 0x3a) {
            uVar4 = bVar1 - 0x30;
          }
          if (0xf < uVar4) goto code_r0x00a880b4;
          bVar1 = pbVar6[1];
          uVar2 = (bVar1 - 0x41 & 0xffffffdf) + 10;
          if (bVar1 < 0x3a) {
            uVar2 = bVar1 - 0x30;
          }
          if (0xf < uVar2) goto code_r0x00a880b4;
          lVar7 = lVar7 + -2;
          *pbVar8 = (byte)uVar2 | (byte)(uVar4 << 4);
          pbVar8 = pbVar8 + 1;
          pbVar6 = pbVar6 + 2;
        } while (lStack_68 * 2 + -2 + lVar7 != 0);
      }
      local_59 = 0;
      local_5b = 0;
      local_70 = &local_5c;
      core::str::converts::from_utf8(&local_40,local_70);
      if (((uint)local_40 & 1) != 0) {
        return 0xffffffff;
      }
      local_58 = local_38;
      uStack_50 = (ulong)local_30;
      if (local_30 != (byte **)0x0) {
        pbVar6 = local_38 + 1;
        uVar4 = (uint)*local_38;
        if ((char)*local_38 < '\0') {
          if (uVar4 < 0xe0) {
            uVar4 = local_38[1] & 0x3f | (uVar4 & 0x1f) << 6;
            pbVar6 = local_38 + 2;
          }
          else {
            uVar2 = local_38[2] & 0x3f | (local_38[1] & 0x3f) << 6;
            if (uVar4 < 0xf0) {
              uVar4 = uVar2 | (uVar4 & 0x1f) << 0xc;
              pbVar6 = local_38 + 3;
            }
            else {
              uVar4 = local_38[3] & 0x3f | uVar2 << 6 | (uVar4 & 7) << 0x12;
              pbVar6 = local_38 + 4;
            }
          }
        }
        if (pbVar6 == local_38 + (long)local_30) {
          return uVar4;
        }
        bVar1 = *pbVar6;
        local_30 = (byte **)(long)(char)bVar1;
        if ((char)bVar1 < '\0') {
          local_30 = (byte **)(ulong)bVar1;
        }
      }
      local_48 = FUN_00a87e7c(local_30);
      local_30 = &local_58;
      local_38 = PTR_fmt_00b013b0;
      puStack_28 = PTR_fmt_00b013b8;
      local_20 = &local_48;
      puStack_18 = PTR_fmt_00b00c10;
      local_40 = (undefined1 *)&local_70;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002b1ed8,&local_40,&PTR_s__rust_deps_rustc_demangle_0_1_28_00afe8b8);
    }
  }
code_r0x00a880b4:
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rust_deps_rustc_demangle_0_1_28_00afe8e8);
}


// ===== 00a88134  <rustc_demangle::SizeLimitedFmtAdapter<&mut_core::fmt::Formatter>as{backref_21}::Write>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustc_demangle::SizeLimitedFmtAdapter<&mut core::fmt::Formatter> as {backref
   21}::Write>::write_str */

undefined8 __rustcall
<rustc_demangle::SizeLimitedFmtAdapter<&mut_core::fmt::Formatter>as{backref_21}::Write>::write_str
          (ulong *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)*param_1;
  if (param_1[1] < param_3) {
    uVar1 = 1;
  }
  *param_1 = (ulong)uVar1;
  param_1[1] = param_1[1] - param_3;
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1[2]);
  return uVar2;
}


// ===== 00a8815c  <rustc_demangle::v0::Ident_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustc_demangle::v0::Ident as core::fmt::Display>::fmt */

ulong __rustcall
<rustc_demangle::v0::Ident_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  char *pcVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  byte *pbVar26;
  uint *puVar27;
  uint *puVar28;
  byte *pbVar29;
  long lVar30;
  long lVar31;
  byte *pbVar32;
  ulong uVar33;
  ulong uVar34;
  uint local_26c [128];
  uint local_6c [3];
  
  memset(local_26c,0,0x200);
  lVar31 = param_1[3];
  if (lVar31 == 0) {
    puVar17 = (undefined *)*param_1;
    uVar19 = param_1[1];
LAB_00a88254:
    uVar16 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,puVar17,uVar19);
    return uVar16;
  }
  lVar3 = param_1[1];
  pcVar4 = (char *)param_1[2];
  pbVar32 = (byte *)*param_1;
  cVar6 = *pcVar4;
  if (lVar3 == 0) {
    uVar16 = 0;
  }
  else {
    uVar15 = 0;
    pbVar26 = pbVar32;
    do {
      pbVar29 = pbVar26 + 1;
      uVar14 = (uint)*pbVar26;
      if ((char)*pbVar26 < '\0') {
        if (uVar14 < 0xe0) {
          uVar14 = pbVar26[1] & 0x3f | (uVar14 & 0x1f) << 6;
          pbVar29 = pbVar26 + 2;
        }
        else {
          uVar8 = pbVar26[2] & 0x3f | (pbVar26[1] & 0x3f) << 6;
          if (uVar14 < 0xf0) {
            uVar14 = uVar8 | (uVar14 & 0x1f) << 0xc;
            pbVar29 = pbVar26 + 3;
          }
          else {
            pbVar29 = pbVar26 + 4;
            uVar14 = pbVar26[3] & 0x3f | uVar8 << 6 | (uVar14 & 7) << 0x12;
          }
        }
      }
      if (uVar15 == 0x80) goto LAB_00a88460;
      uVar16 = uVar15 + 1;
      local_26c[uVar15] = uVar14;
      uVar15 = uVar16;
      pbVar26 = pbVar29;
    } while (pbVar29 != pbVar32 + lVar3);
  }
  lVar30 = uVar16 * 4;
  uVar25 = 0x80;
  puVar27 = local_26c + uVar16;
  uVar15 = 0;
  uVar1 = uVar16;
  if (uVar16 < 0x81) {
    uVar1 = 0x80;
  }
  uVar22 = 700;
  uVar24 = 0x48;
  pcVar20 = pcVar4;
  while( true ) {
    lVar30 = lVar30 + 4;
    bVar13 = false;
    uVar23 = 0;
    pcVar20 = pcVar20 + 1;
    uVar18 = 0x24;
    uVar33 = 1;
    while( true ) {
      uVar2 = 0;
      if (uVar24 <= uVar18) {
        uVar2 = uVar18 - uVar24;
      }
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      if (0x19 < uVar2) {
        uVar2 = 0x1a;
      }
      cVar5 = cVar6;
      if (bVar13) {
        if (pcVar20 == pcVar4 + lVar31) goto LAB_00a88460;
        cVar5 = *pcVar20;
        pcVar20 = pcVar20 + 1;
      }
      bVar7 = cVar5 + 0x9f;
      if (0x19 < (byte)(cVar5 + 0x9fU)) {
        if (9 < (byte)(cVar5 - 0x30U)) goto LAB_00a88460;
        bVar7 = cVar5 - 0x16;
      }
      uVar34 = CONCAT71(0,bVar7);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar34;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar33;
      if ((SUB168(auVar9 * auVar11,8) != 0) ||
         (bVar13 = CARRY8(uVar34 * uVar33,uVar23), uVar23 = uVar34 * uVar33 + uVar23, bVar13))
      goto LAB_00a88460;
      if (uVar34 < uVar2) break;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar33;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = 0x24 - uVar2;
      if (SUB168(auVar10 * auVar12,8) != 0) goto LAB_00a88460;
      uVar33 = uVar33 * (0x24 - uVar2);
      uVar18 = uVar18 + 0x24;
      bVar13 = true;
    }
    if (CARRY8(uVar23,uVar15)) break;
    uVar18 = uVar16 + 1;
    uVar24 = 0;
    if (uVar18 != 0) {
      uVar24 = (uVar23 + uVar15) / uVar18;
    }
    bVar13 = CARRY8(uVar24,uVar25);
    uVar25 = uVar24 + uVar25;
    if (((bVar13) || (uVar25 >> 0x20 != 0)) ||
       (((uint)uVar25 ^ 0xd800) - 0x110000 < 0xffef0800 || uVar16 == uVar1)) break;
    uVar15 = (uVar23 + uVar15) - uVar24 * uVar18;
    uVar24 = uVar16;
    puVar28 = puVar27;
    if (uVar15 < uVar16) {
      do {
        uVar24 = uVar24 - 1;
        *puVar28 = puVar28[-1];
        puVar28 = puVar28 + -1;
      } while (uVar15 < uVar24);
    }
    else if (0x7f < uVar15) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar15,0x80,&PTR_s__rust_deps_rustc_demangle_0_1_28_00afe8a0);
    }
    local_26c[uVar15] = (uint)uVar25;
    if (pcVar20 == pcVar4 + lVar31) {
      if (0x7f < uVar16) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar18,0x80,&PTR_s__rust_deps_rustc_demangle_0_1_28_00afe870);
      }
      puVar27 = local_26c;
      do {
        local_6c[0] = *puVar27;
        uVar14 = <char_as_core::fmt::Display>::fmt(local_6c,param_2);
        if (uVar14 != 0) {
          return (ulong)uVar14;
        }
        lVar30 = lVar30 + -4;
        puVar27 = puVar27 + 1;
      } while (lVar30 != 0);
      return (ulong)uVar14;
    }
    uVar16 = 0;
    if (uVar22 != 0) {
      uVar16 = uVar23 / uVar22;
    }
    uVar24 = 0;
    if (uVar18 != 0) {
      uVar24 = uVar16 / uVar18;
    }
    uVar24 = uVar24 + uVar16;
    if (uVar24 < 0x1c8) {
      lVar21 = 0;
    }
    else {
      lVar21 = 0;
      do {
        uVar16 = uVar24 >> 3;
        lVar21 = lVar21 + 0x24;
        uVar24 = uVar24 / 0x23;
      } while (0x7ca < uVar16);
    }
    uVar15 = uVar15 + 1;
    uVar14 = (int)uVar24 + 0x26U & 0xffff;
    puVar27 = puVar27 + 1;
    uVar8 = 0;
    if (uVar14 != 0) {
      uVar8 = (((int)uVar24 * 9 & 0x3fffU) << 2) / uVar14;
    }
    cVar6 = *pcVar20;
    uVar24 = lVar21 + (ulong)uVar8;
    uVar22 = 2;
    uVar16 = uVar18;
  }
LAB_00a88460:
  uVar16 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0038e530,9);
  if ((uVar16 & 1) == 0) {
    if (lVar3 != 0) {
      uVar16 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pbVar32,lVar3);
      if ((uVar16 & 1) != 0) {
        return 1;
      }
      uVar16 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0038e526,1);
      if ((uVar16 & 1) != 0) {
        return 1;
      }
    }
    uVar16 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pcVar4,lVar31);
    if ((uVar16 & 1) == 0) {
      puVar17 = &DAT_0038e539;
      uVar19 = 1;
      goto LAB_00a88254;
    }
  }
  return 1;
}


// ===== 00a88554  <rustc_demangle::Demangle_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustc_demangle::Demangle as core::fmt::Display>::fmt */

undefined8 __rustcall
<rustc_demangle::Demangle_as_core::fmt::Display>::fmt(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long *local_58;
  ulong local_50 [3];
  long **local_38;
  undefined *puStack_30;
  undefined1 uStack_21;
  
  if (*param_1 == 1) {
    local_58 = param_1 + 1;
    local_50[0] = 0;
    local_50[1] = 1000000;
    if ((*(uint *)(param_2 + 0x10) >> 0x17 & 1) == 0) {
      puVar4 = &DAT_002ab692;
    }
    else {
      puVar4 = &DAT_0038e5e2;
    }
    puStack_30 = PTR_fmt_00b013c0;
    local_38 = &local_58;
    local_50[2] = param_2;
    uVar1 = core::fmt::write(local_50,&DAT_00afecb0,puVar4,&local_38);
    if ((uVar1 == 0) || ((local_50[0] & 1) == 0)) {
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      if ((int)local_50[0] != 0) {
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  (&DAT_0038e5fc,0x37,&uStack_21,&DAT_00afe988,
                   &PTR_s__rust_deps_rustc_demangle_0_1_28_00afece0);
      }
      goto LAB_00a88624;
    }
    puVar4 = &DAT_0038e5e8;
    lVar5 = 0x14;
  }
  else {
    puVar4 = (undefined *)param_1[4];
    lVar5 = param_1[5];
  }
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,puVar4,lVar5);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
LAB_00a88624:
  uVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,param_1[6],param_1[7]);
  return uVar3;
}


// ===== 00a88664  <core::iter::adapters::copied::Copied<core::slice::iter::Iter<u8>>as_core::iter::traits::exact_size::ExactSizeIterator>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::iter::adapters::copied::Copied<core::slice::iter::Iter<u8>> as
   core::iter::traits::exact_size::ExactSizeIterator>::len */

long __rustcall
<core::iter::adapters::copied::Copied<core::slice::iter::Iter<u8>>as_core::iter::traits::exact_size::ExactSizeIterator>
::len(long *param_1)

{
  return param_1[1] - *param_1;
}


// ===== 00a88670  <&core::num::error::IntErrorKind_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&core::num::error::IntErrorKind as core::fmt::Debug>::fmt */

void __rustcall
<&core::num::error::IntErrorKind_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_0038e790 + *(int *)(&DAT_0038e790 + (ulong)*(byte *)*param_1 * 4),
             *(undefined8 *)(&DAT_0038e760 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 00a8869c  <&str_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&str as core::fmt::Debug>::fmt */

void __rustcall <&str_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a886b0  <&u8_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&u8 as core::fmt::Debug>::fmt */

void __rustcall <&u8_as_core::fmt::Debug>::fmt(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u8_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u8_as_core::fmt::Display>::fmt();
    return;
  }
  <u8_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a886cc  <&mut[u8]as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut [u8] as core::fmt::Debug>::fmt */

void __rustcall <&mut[u8]as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  <[u8]as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a886e0  <&rustc_demangle::DemangleStyle_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&rustc_demangle::DemangleStyle as core::fmt::Display>::fmt */

void __rustcall <&rustc_demangle::DemangleStyle_as_core::fmt::Display>::fmt(undefined8 *param_1)

{
  <rustc_demangle::DemangleStyle_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 00a886e8  <&str_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&str as core::fmt::Display>::fmt */

void __rustcall <&str_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a886fc  <rustc_demangle::Demangle_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustc_demangle::Demangle as core::fmt::Debug>::fmt */

void __rustcall <rustc_demangle::Demangle_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b07870)();
  return;
}


// ===== 00a88700  FUN_00a88700 =====

void FUN_00a88700(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0038e633,0x12);
  return;
}


// ===== 00a88714  FUN_00a88714 =====

void FUN_00a88714(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0038e645,5);
  return;
}


// ===== 00a88728  <rustc_demangle::DemangleStyle_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustc_demangle::DemangleStyle as core::fmt::Display>::fmt */

void __rustcall
<rustc_demangle::DemangleStyle_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  long local_40;
  long local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*param_1 != 0) {
    <rustc_demangle::legacy::Demangle_as_core::fmt::Display>::fmt();
    return;
  }
  local_40 = param_1[1];
  local_38 = param_1[2];
  local_28 = 0;
  uStack_30 = 0;
  local_18 = 0;
  local_20 = param_2;
  FUN_00a85748(&local_40,1);
  return;
}


// ===== 00a88770  FUN_00a88770 =====

void FUN_00a88770(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
            (param_2,&DAT_0038e64a,0xd,"kind",4,&local_18,&DAT_00afecf8);
  return;
}


// ===== 00a887bc  <[u8]as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <[u8] as core::fmt::Debug>::fmt */

void __rustcall <[u8]as_core::fmt::Debug>::fmt(long param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  long local_18;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_3);
  if (param_2 != 0) {
    do {
      local_18 = param_1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00afe850);
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00a8882c  FUN_00a8882c =====

void FUN_00a8882c(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_0038e5b4,2);
  return;
}


// ===== 00a88840  FUN_00a88840 =====

void FUN_00a88840(undefined8 *param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  char *pcVar22;
  long lVar23;
  long lVar24;
  
  if (*param_2 == 1) {
    uVar15 = param_2[5];
    uVar16 = param_2[10];
    if (uVar15 != uVar16) {
      uVar10 = param_2[0xc];
      lVar17 = param_2[9];
      uVar18 = uVar15 + (uVar10 - 1);
      uVar13 = uVar16;
      if (uVar18 < uVar16) {
        lVar2 = uVar15 + uVar10;
        uVar20 = param_2[1];
        uVar21 = param_2[7];
        uVar3 = param_2[3] + uVar15;
        uVar11 = uVar21;
        uVar12 = uVar15;
LAB_00a888b8:
        uVar13 = uVar12;
        if (uVar15 == uVar12) {
          if (((ulong)param_2[4] >> ((ulong)*(byte *)(lVar17 + uVar18) & 0x3f) & 1) != 0) {
            uVar18 = uVar11;
            if (uVar11 <= uVar20) {
              uVar18 = uVar20;
            }
            uVar13 = uVar20;
            if (uVar21 != 0xffffffffffffffff) {
              uVar13 = uVar18;
            }
            uVar12 = (uVar15 - uVar20) + uVar13;
            pcVar22 = (char *)(param_2[0xb] + uVar13);
            lVar23 = uVar15 + uVar13;
            lVar24 = 0;
            if (uVar13 <= uVar10) {
              lVar24 = uVar10 - uVar13;
            }
            do {
              if (lVar24 == 0) {
                uVar13 = uVar20;
                uVar18 = 0;
                if (uVar21 != 0xffffffffffffffff) {
                  uVar18 = uVar11;
                }
                goto LAB_00a8894c;
              }
              cVar6 = *pcVar22;
              pcVar1 = (char *)(lVar17 + lVar23);
              uVar12 = uVar12 + 1;
              lVar23 = lVar23 + 1;
              pcVar22 = pcVar22 + 1;
              lVar24 = lVar24 + -1;
            } while (cVar6 == *pcVar1);
            param_2[5] = uVar12;
            if (uVar21 == 0xffffffffffffffff) goto LAB_00a88990;
            uVar18 = 0;
            goto LAB_00a88988;
          }
          uVar12 = uVar15 + uVar10;
          param_2[5] = lVar2;
          if (uVar21 != 0xffffffffffffffff) {
            uVar12 = uVar15 + uVar10;
            uVar18 = 0;
            goto LAB_00a88988;
          }
          goto LAB_00a88990;
        }
      }
LAB_00a889a0:
      uVar18 = uVar13;
      if (uVar13 != 0) {
        do {
          if (uVar18 < uVar16) {
            iVar19 = (int)*(char *)(lVar17 + uVar18);
            uVar10 = uVar18;
            if (iVar19 != -0x41 && iVar19 + 0x41 < 0 == SCARRY4(iVar19,0x41)) goto LAB_00a889d4;
          }
          else {
            uVar10 = uVar16;
            if (uVar16 == uVar18) goto LAB_00a889d4;
          }
          bVar9 = uVar18 != 0xffffffffffffffff;
          uVar18 = uVar18 + 1;
        } while (bVar9);
      }
      uVar10 = 0;
LAB_00a889d4:
      param_1[1] = uVar15;
      param_1[2] = uVar10;
      if (uVar13 <= uVar10) {
        uVar13 = uVar10;
      }
      param_2[5] = uVar13;
      uVar14 = 1;
      goto LAB_00a889f8;
    }
  }
  else if ((*(byte *)((long)param_2 + 0x1a) & 1) == 0) {
    bVar7 = *(byte *)(param_2 + 3);
    lVar17 = param_2[9];
    uVar15 = param_2[10];
    uVar16 = param_2[1];
    *(byte *)(param_2 + 3) = bVar7 ^ 1;
    if (uVar16 != 0) {
      if (uVar16 < uVar15) {
        if (*(char *)(lVar17 + uVar16) + 0x40 < 0 != SCARRY4((int)*(char *)(lVar17 + uVar16),0x40))
        {
code_r0x00a88a40:
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (lVar17,uVar15,uVar16,uVar15,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afed30);
        }
      }
      else if (uVar16 != uVar15) goto code_r0x00a88a40;
    }
    if (uVar16 == uVar15) {
      if ((bVar7 & 1) == 0) {
        *(undefined1 *)((long)param_2 + 0x1a) = 1;
        goto LAB_00a889f4;
      }
    }
    else {
      pbVar4 = (byte *)(lVar17 + uVar16);
      uVar5 = (uint)*pbVar4;
      if ((char)*pbVar4 < '\0') {
        if (uVar5 < 0xe0) {
          uVar5 = pbVar4[1] & 0x3f | (uVar5 & 0x1f) << 6;
        }
        else {
          uVar8 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
          if (uVar5 < 0xf0) {
            uVar5 = uVar8 | (uVar5 & 0x1f) << 0xc;
          }
          else {
            uVar5 = pbVar4[3] & 0x3f | uVar8 << 6 | (uVar5 & 7) << 0x12;
          }
        }
      }
      if ((bVar7 & 1) == 0) {
        if (uVar5 < 0x80) {
          lVar17 = 1;
        }
        else if (uVar5 < 0x800) {
          lVar17 = 2;
        }
        else {
          lVar17 = 3;
          if (0xffff < uVar5) {
            lVar17 = 4;
          }
        }
        uVar14 = 1;
        param_1[1] = uVar16;
        param_1[2] = lVar17 + uVar16;
        param_2[1] = lVar17 + uVar16;
        goto LAB_00a889f8;
      }
    }
    uVar14 = 0;
    param_1[1] = uVar16;
    param_1[2] = uVar16;
    goto LAB_00a889f8;
  }
LAB_00a889f4:
  uVar14 = 2;
LAB_00a889f8:
  *param_1 = uVar14;
  return;
  while( true ) {
    if (uVar10 <= uVar12) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar12,uVar10,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afe888);
    }
    uVar13 = uVar12;
    if (*(char *)(param_2[0xb] + uVar12) != *(char *)(lVar17 + uVar15 + uVar12)) break;
LAB_00a8894c:
    uVar12 = uVar13 - 1;
    if (uVar13 <= uVar18) {
      param_2[5] = lVar2;
      if (uVar21 != 0xffffffffffffffff) {
        param_2[7] = 0;
      }
      uVar14 = 0;
      param_1[1] = uVar15;
      param_1[2] = lVar2;
      goto LAB_00a889f8;
    }
  }
  param_2[5] = uVar3;
  uVar12 = uVar3;
  uVar18 = uVar10 - param_2[3];
  if (uVar21 != 0xffffffffffffffff) {
LAB_00a88988:
    uVar11 = uVar18;
    param_2[7] = uVar11;
  }
LAB_00a88990:
  uVar18 = uVar12 + (uVar10 - 1);
  uVar13 = uVar16;
  if (uVar16 <= uVar18) goto LAB_00a889a0;
  goto LAB_00a888b8;
}


// ===== 00a88b50  <rustc_demangle[99d3400d5e5960e3]::SizeLimitedFmtAdapter<&mut_core[bcece726f298455b]::fmt::Formatter>as_core[bcece726f298455b]::fmt::Write>::write_char =====

/* <rustc_demangle[99d3400d5e5960e3]::SizeLimitedFmtAdapter<&mut
   core[bcece726f298455b]::fmt::Formatter> as core[bcece726f298455b]::fmt::Write>::write_char */

void <rustc_demangle[99d3400d5e5960e3]::SizeLimitedFmtAdapter<&mut_core[bcece726f298455b]::fmt::Formatter>as_core[bcece726f298455b]::fmt::Write>
     ::write_char(undefined8 param_1,uint param_2)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  uint local_14;
  
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    uVar2 = 1;
  }
  else {
    bVar3 = (byte)param_2;
    if (param_2 < 0x800) {
      local_14 = (uint)(bVar3 & 0x3f | 0x80) << 8;
      uVar2 = 2;
      bVar3 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar1 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 != 0) {
        uVar2 = 4;
        local_14 = CONCAT31(CONCAT21(CONCAT11(bVar3,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        goto LAB_00a88be8;
      }
      local_14._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
      uVar2 = 3;
      local_14 = CONCAT12(bVar3,(short)local_14) & 0xff3fffff | 0x800000;
      bVar3 = (byte)(param_2 >> 0xc) | 0xe0;
    }
    local_14 = CONCAT31(local_14._1_3_,bVar3);
  }
LAB_00a88be8:
  <rustc_demangle::SizeLimitedFmtAdapter<&mut_core::fmt::Formatter>as{backref_21}::Write>::write_str
            (param_1,&local_14,uVar2);
  return;
}


// ===== 00a88bfc  <rustc_demangle[99d3400d5e5960e3]::SizeLimitedFmtAdapter<&mut_core[bcece726f298455b]::fmt::Formatter>as_core[bcece726f298455b]::fmt::Write>::write_fmt =====

/* <rustc_demangle[99d3400d5e5960e3]::SizeLimitedFmtAdapter<&mut
   core[bcece726f298455b]::fmt::Formatter> as core[bcece726f298455b]::fmt::Write>::write_fmt */

void <rustc_demangle[99d3400d5e5960e3]::SizeLimitedFmtAdapter<&mut_core[bcece726f298455b]::fmt::Formatter>as_core[bcece726f298455b]::fmt::Write>
     ::write_fmt(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_00afecb0,param_2,param_3);
  return;
}


// ===== 00a88c10  <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow */

undefined8 __rustcall <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("Hash table capacity overflow",0x39,&PTR_s__rust_deps_hashbrown_0_17_1_src__00afee30);
}


// ===== 00a88c3c  <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err */

void __rustcall
<hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err
          (int param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(param_2,param_3);
}


// ===== 00a88c60  <hashbrown::raw::[S]::hashbrown::raw::RawIterHashIndices>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hashbrown::raw::[S]::hashbrown::raw::RawIterHashIndices>::new */

void __rustcall
<hashbrown::raw::[S]::hashbrown::raw::RawIterHashIndices>::new
          (long *param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_2;
  uVar3 = param_2[1];
  bVar1 = (byte)(param_3 >> 0x38);
  bVar2 = bVar1 >> 1;
  *(byte *)(param_1 + 6) = bVar1 >> 1;
  param_3 = uVar3 & param_3;
  *param_1 = lVar4;
  param_1[1] = uVar3;
  lVar4 = *(long *)(lVar4 + param_3);
  param_1[2] = param_3;
  param_1[3] = 0;
  uVar3 = NEON_cmeq(lVar4,CONCAT17(bVar2,CONCAT16(bVar2,CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2
                                                  ,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))))),1);
  param_1[4] = lVar4;
  param_1[5] = uVar3 & 0x8080808080808080;
  return;
}


// ===== 00a88c98  <hashbrown::raw::RawIterHashIndices_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hashbrown::raw::RawIterHashIndices as core::default::Default>::default */

void __rustcall
<hashbrown::raw::RawIterHashIndices_as_core::default::Default>::default(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_002a1570;
  param_1[3] = 0;
  param_1[4] = 0xffffffffffffffff;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


// ===== 00a88cc8  <hashbrown::raw::RawIterHashIndices_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hashbrown::raw::RawIterHashIndices as core::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<hashbrown::raw::RawIterHashIndices_as_core::iter::traits::iterator::Iterator>::next
          (long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  uVar7 = param_1[5];
  if (uVar7 == 0) {
    lVar9 = param_1[4];
    uVar5 = param_1[2];
    lVar6 = param_1[3];
    uVar2 = (undefined1)param_1[6];
    uVar4 = param_1[1];
    do {
      lVar6 = lVar6 + 8;
      uVar10 = NEON_cmeq(lVar9,0xffffffffffffffff,1);
      bVar8 = NEON_umaxv(uVar10,1);
      if ((bVar8 & 1) != 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = param_2;
        return auVar3 << 0x40;
      }
      uVar5 = uVar5 + lVar6 & uVar4;
      lVar9 = *(long *)(*param_1 + uVar5);
      param_1[2] = uVar5;
      param_1[3] = lVar6;
      uVar7 = NEON_cmeq(lVar9,CONCAT17(uVar2,CONCAT16(uVar2,CONCAT15(uVar2,CONCAT14(uVar2,CONCAT13(
                                                  uVar2,CONCAT12(uVar2,CONCAT11(uVar2,uVar2))))))),1
                       );
      param_1[4] = lVar9;
      uVar7 = uVar7 & 0x8080808080808080;
      param_1[5] = uVar7;
    } while (uVar7 == 0);
  }
  else {
    uVar4 = param_1[1];
    uVar5 = param_1[2];
  }
  uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  param_1[5] = uVar7 - 1 & uVar7;
  auVar11._8_8_ = uVar5 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar4;
  auVar11._0_8_ = 1;
  return auVar11;
}


// ===== 00a88d5c  FUN_00a88d5c =====

void FUN_00a88d5c(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u8_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u8_as_core::fmt::Display>::fmt();
    return;
  }
  <u8_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a88d74  <hashbrown::TryReserveError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hashbrown::TryReserveError as core::fmt::Display>::fmt */

undefined8 __rustcall
<hashbrown::TryReserveError_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str
                    (param_2,
                     "memory allocation failed because the computed capacity exceeded the collection\'s maximum"
                     ,0x18);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar3 = 0x40;
  if (*param_1 != 0) {
    uVar3 = 0x2f;
  }
  pcVar1 = " because the computed capacity exceeded the collection\'s maximum";
  if (*param_1 != 0) {
    pcVar1 = " because the memory allocator returned an error";
  }
  uVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pcVar1,uVar3);
  return uVar3;
}


// ===== 00a88de8  <hashbrown::control::tag::Tag_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hashbrown::control::tag::Tag as core::fmt::Debug>::fmt */

void __rustcall
<hashbrown::control::tag::Tag_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 auStack_38 [24];
  byte local_4 [4];
  
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,&DAT_002bd08c,4);
    local_4[0] = bVar1;
    <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
              (auStack_38,local_4,&DAT_00afee48);
    <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
    return;
  }
  if ((bVar1 & 1) == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"DELETED",7);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"EMPTY",5);
  return;
}


// ===== 00a88e90  <hashbrown::raw::FullBucketsIndices_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <hashbrown::raw::FullBucketsIndices as core::default::Default>::default */

void __rustcall
<hashbrown::raw::FullBucketsIndices_as_core::default::Default>::default(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_002a1570;
  param_1[1] = 0;
  return;
}


// ===== 00a88ea4  <core[bcece726f298455b]::option::Option<&core[bcece726f298455b]::cell::Cell<u8>>>::zip::<&core[bcece726f298455b]::cell::Cell<u8>> =====

/* <core[bcece726f298455b]::option::Option<&core[bcece726f298455b]::cell::Cell<u8>>>::zip::<&core[bcece726f298455b]::cell::Cell<u8>>
    */

undefined8
<core[bcece726f298455b]::option::Option<&core[bcece726f298455b]::cell::Cell<u8>>>::zip::
<&core[bcece726f298455b]::cell::Cell<u8>>(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_1;
  }
  return uVar1;
}


// ===== 00a88eb0  <core[bcece726f298455b]::option::Option<(&core[bcece726f298455b]::cell::Cell<u8>,&core[bcece726f298455b]::cell::Cell<u8>)>>::zip::<&core[bcece726f298455b]::cell::Cell<u8>> =====

/* <core[bcece726f298455b]::option::Option<(&core[bcece726f298455b]::cell::Cell<u8>,
   &core[bcece726f298455b]::cell::Cell<u8>)>>::zip::<&core[bcece726f298455b]::cell::Cell<u8>> */

void <core[bcece726f298455b]::option::Option<(&core[bcece726f298455b]::cell::Cell<u8>,&core[bcece726f298455b]::cell::Cell<u8>)>>
     ::zip::<&core[bcece726f298455b]::cell::Cell<u8>>
               (long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  if ((param_2 != 0) && (param_4 != 0)) {
    param_1[1] = param_3;
    param_1[2] = param_4;
    lVar1 = param_2;
  }
  *param_1 = lVar1;
  return;
}


// ===== 00a88ecc  core::slice::copy_from_slice_impl<u8> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::copy_from_slice_impl<u8> */

void __rustcall
core::slice::copy_from_slice_impl<u8>
          (void *param_1,size_t param_2,void *param_3,size_t param_4,undefined8 param_5)

{
  if (param_2 == param_4) {
    memcpy(param_1,param_3,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  copy_from_slice_impl::len_mismatch_fail(param_2,param_4,param_5);
}


// ===== 00a88efc  core::slice::index::range<core::ops::range::RangeInclusive<usize>> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::index::range<core::ops::range::RangeInclusive<usize>> */

void __rustcall
core::slice::index::range<core::ops::range::RangeInclusive<usize>>(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  
  uVar2 = *param_1;
  lVar1 = 0;
  if ((byte)param_1[2] == 0) {
    lVar1 = 8;
  }
  uVar4 = *(ulong *)((long)param_1 + lVar1);
  if (((byte)param_1[2] & 1) == 0) {
    if (uVar4 < param_2) {
      uVar4 = uVar4 + 1;
      goto LAB_00a88f44;
    }
    ppuVar3 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff168;
  }
  else {
    if (uVar4 <= param_2) {
LAB_00a88f44:
      if (uVar2 <= uVar4) {
        return;
      }
      ppuVar3 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff198;
      goto LAB_00a88f70;
    }
    ppuVar3 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff180;
  }
  uVar2 = 0;
LAB_00a88f70:
                    /* WARNING: Subroutine does not return */
  slice_index_fail(uVar2,uVar4,param_2,ppuVar3);
}


// ===== 00a88f78  <core[bcece726f298455b]::iter::adapters::zip::Zip<core[bcece726f298455b]::slice::iter::Iter<u16>,core[bcece726f298455b]::slice::iter::IterMut<u32>>>::super_nth =====

/* <core[bcece726f298455b]::iter::adapters::zip::Zip<core[bcece726f298455b]::slice::iter::Iter<u16>,
   core[bcece726f298455b]::slice::iter::IterMut<u32>>>::super_nth */

undefined1  [16]
<core[bcece726f298455b]::iter::adapters::zip::Zip<core[bcece726f298455b]::slice::iter::Iter<u16>,core[bcece726f298455b]::slice::iter::IterMut<u32>>>
::super_nth(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  uVar2 = param_1[4];
  uVar1 = param_1[5];
  if (uVar2 < uVar1) {
    lVar3 = uVar2 * -2;
    lVar4 = uVar2 * -4;
    do {
      uVar2 = uVar2 + 1;
      if (param_2 == 0) {
        param_1[4] = uVar2;
        lVar3 = *param_1 - lVar3;
        param_2 = param_1[2] - lVar4;
        goto LAB_00a88fd0;
      }
      param_2 = param_2 + -1;
      lVar3 = lVar3 + -2;
      lVar4 = lVar4 + -4;
    } while (uVar1 != uVar2);
    param_1[4] = uVar1;
  }
  lVar3 = 0;
LAB_00a88fd0:
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = lVar3;
  return auVar5;
}


// ===== 00a88fd8  miniz_oxide::shared::update_adler32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* miniz_oxide::shared::update_adler32 */

undefined4 __rustcall miniz_oxide::shared::update_adler32(undefined4 param_1)

{
  undefined4 local_14;
  
  local_14 = param_1;
  <adler2::adler2::Adler32>::write_slice(&local_14);
  return local_14;
}


// ===== 00a89000  miniz_oxide::inflate::core::decompress =====

/* WARNING: Unknown calling convention: __rustcall */
/* miniz_oxide::inflate::core::decompress */

void __rustcall miniz_oxide::inflate::core::decompress(void)

{
  decompress_with_limit();
  return;
}


// ===== 00a8900c  FUN_00a8900c =====

void FUN_00a8900c(long param_1,ulong param_2,ulong param_3,long param_4,long param_5,ulong param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_6 & param_3 - param_4;
  if (param_5 == 3) {
    if ((((param_3 < 0xfffffffffffffffd) && (param_3 + 3 <= param_2)) &&
        (uVar3 = uVar2 + 2 & param_6, uVar3 < param_2)) &&
       ((uVar2 < param_2 && (param_6 = uVar2 + 1 & param_6, param_6 < param_2)))) {
      puVar1 = (undefined1 *)(param_1 + param_3);
      *puVar1 = *(undefined1 *)(param_1 + uVar2);
      puVar1[1] = *(undefined1 *)(param_1 + param_6);
      puVar1[2] = *(undefined1 *)(param_1 + uVar3);
    }
    return;
  }
  FUN_00a8ac1c();
  return;
}


// ===== 00a89084  FUN_00a89084 =====

undefined1  [16]
FUN_00a89084(long param_1,undefined8 *param_2,long *param_3,uint param_4,ulong *param_5,
            ulong param_6)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  short sVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  byte bVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  
  uVar16 = param_3[2];
  lVar3 = param_3[3];
  uVar25 = (uint)param_5[1];
  uVar10 = (ulong)uVar25;
  uVar19 = (ulong)*(uint *)((long)param_5 + 0xc);
  uVar26 = *param_5;
  uVar23 = (uint)param_5[2];
  bVar17 = *(byte *)((long)param_5 + 0x14);
  uVar18 = (ulong)bVar17;
  uVar7 = 0;
  uVar9 = 0xc;
  if ((lVar3 - uVar16 < 0x103) || (uVar24 = param_2[1], uVar24 < 0xe)) {
LAB_00a89488:
    *param_5 = uVar26;
    *(uint *)(param_5 + 1) = uVar25;
    *(int *)((long)param_5 + 0xc) = (int)uVar19;
    *(uint *)(param_5 + 2) = uVar23;
    *(byte *)((long)param_5 + 0x14) = bVar17;
    auVar27._8_8_ = uVar9;
    auVar27._0_8_ = uVar7;
    return auVar27;
  }
  lVar2 = *param_3;
  uVar4 = param_3[1];
  puVar20 = (uint *)*param_2;
LAB_00a89118:
  bVar17 = (byte)uVar18;
  do {
    uVar15 = (uint)uVar10;
    puVar21 = puVar20;
    if (uVar15 < 0x1e) {
      puVar21 = puVar20 + 1;
      uVar23 = *puVar20;
      uVar24 = uVar24 - 4;
      *param_2 = puVar21;
      param_2[1] = uVar24;
      uVar15 = uVar15 | 0x20;
      uVar26 = (ulong)uVar23 << (uVar10 & 0x3f) | uVar26;
    }
    uVar23 = (uint)*(short *)(param_1 + 0x200 + (uVar26 & 0x3ff) * 2);
    if ((int)uVar23 < 0) {
      uVar10 = 10;
      do {
        uVar23 = ((uint)(uVar26 >> (uVar10 & 0x3f)) & 1) + ~uVar23;
        iVar12 = (int)uVar10;
        if (0x23f < uVar23) {
          uVar23 = 0x7fff;
          break;
        }
        uVar23 = (uint)*(short *)(param_1 + 0xa00 + (ulong)uVar23 * 2);
        uVar10 = (ulong)(iVar12 + 1);
      } while ((int)uVar23 < 0);
      uVar6 = iVar12 + 1U & 0xff;
    }
    else {
      uVar6 = uVar23 >> 9;
    }
    uVar26 = uVar26 >> ((ulong)uVar6 & 0x3f);
    uVar10 = (ulong)(uVar15 - uVar6);
    uVar8 = uVar16;
    uVar13 = uVar23;
    if ((uVar23 >> 8 & 1) != 0) break;
    sVar5 = *(short *)(param_1 + 0x200 + (uVar26 & 0x3ff) * 2);
    uVar13 = (uint)sVar5;
    if (sVar5 < 0) {
      uVar10 = 10;
      do {
        uVar25 = ((uint)(uVar26 >> (uVar10 & 0x3f)) & 1) + ~uVar13;
        iVar12 = (int)uVar10;
        if (0x23f < uVar25) {
          uVar13 = 0x7fff;
          break;
        }
        uVar13 = (uint)*(short *)(param_1 + 0xa00 + (ulong)uVar25 * 2);
        uVar10 = (ulong)(iVar12 + 1);
      } while ((int)uVar13 < 0);
      uVar25 = iVar12 + 1U & 0xff;
    }
    else {
      uVar25 = (uint)(int)sVar5 >> 9;
    }
    if (uVar4 <= uVar16) {
LAB_00a89500:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar8,uVar4,&PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afeeb0);
    }
    uVar26 = uVar26 >> ((ulong)uVar25 & 0x3f);
    uVar8 = uVar16 + 1;
    uVar25 = (uVar15 - uVar6) - uVar25;
    uVar10 = (ulong)uVar25;
    *(char *)(lVar2 + uVar16) = (char)uVar23;
    param_3[2] = uVar8;
    if ((uVar13 >> 8 & 1) != 0) break;
    if (uVar4 <= uVar8) goto LAB_00a89500;
    uVar16 = uVar16 + 2;
    uVar9 = 0xc;
    *(char *)(lVar2 + uVar8) = (char)uVar13;
    param_3[2] = uVar16;
    if ((lVar3 - uVar16 < 0x103) || (puVar20 = puVar21, uVar24 < 0xe)) {
      uVar7 = 0;
      goto LAB_00a89488;
    }
  } while( true );
  uVar25 = (uint)uVar10;
  uVar23 = uVar13 & 0x1ff;
  if (uVar23 == 0x100) {
    uVar7 = 0;
    uVar23 = 0x100;
    uVar9 = 0x14;
    goto LAB_00a89488;
  }
  if (0x11d < uVar23) {
    uVar9 = 0x21;
    uVar7 = 0xff;
    goto LAB_00a89488;
  }
  puVar22 = puVar21;
  if (uVar25 < 0x1e) {
    puVar22 = puVar21 + 1;
    uVar23 = *puVar21;
    uVar24 = uVar24 - 4;
    *param_2 = puVar22;
    param_2[1] = uVar24;
    uVar25 = uVar25 | 0x20;
    uVar26 = (ulong)uVar23 << (uVar10 & 0x3f) | uVar26;
  }
  uVar16 = (ulong)(uVar13 - 1) & 0x1f;
  bVar17 = ""[uVar16];
  uVar23 = (uint)*(ushort *)(&DAT_0038e8f6 + uVar16 * 2);
  if (0xffffffeb < (int)uVar16 - 0x1cU) {
    uVar25 = uVar25 - bVar17;
    uVar15 = (uint)uVar26;
    uVar26 = uVar26 >> ((ulong)bVar17 & 0x3f);
    uVar23 = (uVar15 & ((uint)(-1L << ((ulong)bVar17 & 0x3f)) ^ 0xffffffff)) + uVar23;
  }
  sVar5 = *(short *)(param_1 + 0xe80 + (uVar26 & 0x3ff) * 2);
  uVar15 = (uint)sVar5;
  if (sVar5 < 0) {
    uVar16 = 10;
    do {
      uVar15 = ((uint)(uVar26 >> (uVar16 & 0x3f)) & 1) + ~uVar15;
      iVar12 = (int)uVar16;
      if (0x23f < uVar15) {
        uVar15 = 0x7fff;
        break;
      }
      uVar15 = (uint)*(short *)(param_1 + 0x1680 + (ulong)uVar15 * 2);
      uVar16 = (ulong)(iVar12 + 1);
    } while ((int)uVar15 < 0);
    uVar6 = iVar12 + 1U & 0xff;
  }
  else {
    uVar6 = (uint)(int)sVar5 >> 9;
  }
  uVar26 = uVar26 >> ((ulong)uVar6 & 0x3f);
  uVar25 = uVar25 - uVar6;
  uVar10 = (ulong)uVar25;
  if (0x1d < (uVar15 & 0x1ff)) {
    uVar9 = 0x22;
    uVar7 = 0xff;
    goto LAB_00a89488;
  }
  uVar6 = uVar15 >> 1 & 0x7f;
  uVar19 = (ulong)*(ushort *)(&DAT_0038e8ba + (ulong)(uVar15 & 0x1ff) * 2);
  uVar6 = uVar6 - (uVar6 != 0);
  bVar17 = (byte)uVar6;
  uVar18 = (ulong)uVar6;
  puVar20 = puVar22;
  if (3 < (uVar15 & 0xff)) {
    if (uVar25 < 0x1e) {
      puVar20 = puVar22 + 1;
      uVar15 = *puVar22;
      uVar24 = uVar24 - 4;
      *param_2 = puVar20;
      param_2[1] = uVar24;
      uVar25 = uVar25 | 0x20;
      uVar26 = (ulong)uVar15 << (uVar10 & 0x3f) | uVar26;
    }
    uVar10 = (ulong)(uVar25 - (uVar6 & 0xff));
    uVar25 = (uint)uVar26;
    uVar26 = uVar26 >> (uVar18 & 0x3f);
    uVar19 = (uVar25 & ((uint)(-1L << (uVar18 & 0x3f)) ^ 0xffffffff)) + uVar19;
  }
  uVar25 = (uint)uVar10;
  uVar9 = 0x1e;
  uVar7 = 0xff;
  if ((((uint)(uVar8 < uVar19) & param_4 >> 2) != 0) || (uVar4 < uVar19)) goto LAB_00a89488;
  uVar16 = uVar8 - uVar19 & param_6;
  if (uVar23 == 3) {
    if ((((uVar8 < 0xfffffffffffffffd) && (uVar8 + 3 <= uVar4)) &&
        (uVar11 = uVar16 + 2 & param_6, uVar11 < uVar4)) &&
       ((uVar16 < uVar4 && (uVar14 = uVar16 + 1 & param_6, uVar14 < uVar4)))) {
      puVar1 = (undefined1 *)(lVar2 + uVar8);
      *puVar1 = *(undefined1 *)(lVar2 + uVar16);
      puVar1[1] = *(undefined1 *)(lVar2 + uVar14);
      puVar1[2] = *(undefined1 *)(lVar2 + uVar11);
    }
  }
  else {
    FUN_00a8ac1c(lVar2,uVar4,uVar16,uVar8,(ulong)uVar23);
  }
  uVar16 = uVar8 + uVar23;
  uVar7 = 0;
  uVar9 = 0xc;
  param_3[2] = uVar16;
  if ((lVar3 - uVar16 < 0x103) || (uVar24 < 0xe)) goto LAB_00a89488;
  goto LAB_00a89118;
}


// ===== 00a89508  miniz_oxide::inflate::core::decompress_with_limit =====

/* WARNING: Unknown calling convention: __rustcall */
/* miniz_oxide::inflate::core::decompress_with_limit */

void __rustcall
miniz_oxide::inflate::core::decompress_with_limit
          (long *param_1,void *param_2,uint *param_3,ulong param_4,long param_5,ulong param_6,
          ulong param_7,ulong param_8,uint param_9)

{
  bool bVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  bool bVar7;
  char cVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uVar11;
  uint uVar12;
  ulong uVar13;
  ulong extraout_x1;
  undefined **ppuVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  uint uVar18;
  ulong uVar19;
  uint *puVar20;
  undefined1 *puVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  int iVar28;
  undefined1 uVar29;
  undefined1 auVar30 [16];
  uint *local_c8;
  ulong local_c0;
  long local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  uint local_90;
  uint local_8c;
  uint uStack_88;
  byte bStack_84;
  uint local_80 [8];
  
  uVar16 = param_6 - (param_6 != 0);
  if ((param_9 & 4) != 0) {
    uVar16 = 0xffffffffffffffff;
  }
  if ((param_6 < param_7) || ((uVar16 + 1 & uVar16) != 0)) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0xfd;
    param_1[2] = 0;
    return;
  }
  local_a0 = param_7 + param_8;
  local_98 = *(ulong *)((long)param_2 + 0x28c0);
  if (CARRY8(param_7,param_8)) {
    local_a0 = 0xffffffffffffffff;
  }
  local_90 = *(uint *)((long)param_2 + 0x28c8);
  local_8c = *(uint *)((long)param_2 + 0x28dc);
  if (param_6 <= local_a0) {
    local_a0 = param_6;
  }
  bStack_84 = *(byte *)((long)param_2 + 0x28f0);
  uVar12 = 0xfffffffc;
  if ((param_9 & 2) != 0) {
    uVar12 = 1;
  }
  uVar13 = (ulong)*(byte *)((long)param_2 + 0x2904);
  uVar2 = (long)param_2 + 0x2300;
  uVar15 = 3;
  local_c8 = param_3;
  local_c0 = param_4;
  local_b8 = param_5;
  local_b0 = param_6;
  local_a8 = param_7;
  uVar25 = *(uint *)((long)param_2 + 0x28e0);
  if ((param_9 & 1) != 0) {
    uVar15 = 1;
  }
LAB_00a89650:
  uStack_88 = uVar25;
  uVar25 = uStack_88;
  uVar22 = local_a0;
  uVar19 = local_b0;
  lVar23 = local_b8;
  uVar10 = local_c0;
  puVar17 = local_c8;
  uVar11 = (undefined1)uVar13;
  uVar9 = 0;
  uVar26 = local_a8;
  uVar18 = uVar12;
  switch(uVar13 & 0xff) {
  case 0:
    uVar13 = (ulong)uVar15;
    uStack_88 = 0;
    bStack_84 = 0;
    *(undefined8 *)((long)param_2 + 0x28cc) = 0;
    local_98 = 0;
    local_90 = 0;
    local_8c = 0;
    *(undefined8 *)((long)param_2 + 0x28d4) = 0x100000001;
    uVar25 = uStack_88;
    goto LAB_00a89650;
  case 1:
    if (local_c0 == 0) {
      uVar27 = 1;
      goto LAB_00a8a954;
    }
    local_c0 = local_c0 - 1;
    uVar13 = 2;
    *(uint *)((long)param_2 + 0x28cc) = (uint)(byte)*local_c8;
    local_c8 = (uint *)((long)local_c8 + 1);
    goto LAB_00a89650;
  case 2:
    if (local_c0 == 0) {
      uVar27 = 2;
      goto LAB_00a8a954;
    }
    uVar18 = *(uint *)((long)param_2 + 0x28cc);
    local_c0 = local_c0 - 1;
    bVar4 = (byte)*local_c8;
    uVar27 = (uint)bVar4 | uVar18 << 8;
    *(uint *)((long)param_2 + 0x28d0) = (uint)bVar4;
    uVar13 = (ulong)uVar27 * 0x8421085;
    uVar24 = (uVar18 >> 4) + 8 & 0x3f;
    bVar7 = (uVar18 & 0xf) != 8 ||
            (uVar27 + (int)(((ulong)uVar27 - (uVar13 >> 0x20) >> 1 & 0x7fffffff) + (uVar13 >> 0x20)
                           >> 4) * -0x1f != 0 || (bVar4 & 0x20) != 0);
    if ((param_9 & 4) == 0) {
      bVar7 = uVar16 + 1 >> uVar24 == 0 || bVar7;
    }
    if (0xf < uVar24) {
      bVar7 = true;
    }
    uVar18 = 0x1d;
    if (!bVar7) {
      uVar18 = 3;
    }
    uVar13 = (ulong)uVar18;
    local_c8 = (uint *)((long)local_c8 + 1);
    goto LAB_00a89650;
  case 3:
    uVar26 = local_c0;
    do {
      uVar13 = (ulong)local_90;
      puVar20 = puVar17;
      if (local_90 < 3) {
        if (uVar26 == 0) goto LAB_00a8ab28;
        puVar20 = (uint *)((long)puVar17 + 1);
        uVar26 = uVar26 - 1;
        local_90 = local_90 | 8;
        local_98 = (ulong)(byte)*puVar17 << (uVar13 & 0x3f) | local_98;
        local_c8 = puVar20;
        local_c0 = uVar26;
      }
      local_90 = local_90 - 3;
      uVar25 = (uint)local_98 >> 1 & 3;
      uVar13 = local_98 >> 3;
      *(byte *)((long)param_2 + 0x28ee) = (byte)local_98 & 1;
      *(char *)((long)param_2 + 0x28ef) = (char)uVar25;
      local_98 = uVar13;
      if (1 < uVar25) {
        if (uVar25 == 2) {
          uStack_88 = 0;
          uVar13 = 8;
          uVar25 = uStack_88;
        }
        else {
          uVar13 = 0x19;
          uVar25 = uStack_88;
        }
        goto LAB_00a89650;
      }
      if (uVar25 == 0) {
        uVar13 = 4;
        uVar25 = uStack_88;
        goto LAB_00a89650;
      }
      *(undefined4 *)((long)param_2 + 0x28e8) = 0x200120;
      memset((void *)((long)param_2 + 0x2780),8,0x90);
      *(undefined8 *)((long)param_2 + 0x2818) = 0x909090909090909;
      *(undefined8 *)((long)param_2 + 0x2810) = 0x909090909090909;
      *(undefined8 *)((long)param_2 + 0x2828) = 0x909090909090909;
      *(undefined8 *)((long)param_2 + 0x2820) = 0x909090909090909;
      *(undefined8 *)((long)param_2 + 0x2838) = 0x909090909090909;
      *(undefined8 *)((long)param_2 + 0x2830) = 0x909090909090909;
      *(undefined8 *)((long)param_2 + 0x2848) = 0x909090909090909;
      *(undefined8 *)((long)param_2 + 0x2840) = 0x909090909090909;
      *(undefined8 *)((long)param_2 + 0x2858) = 0x909090909090909;
      *(undefined8 *)((long)param_2 + 0x2850) = 0x909090909090909;
      *(undefined8 *)((long)param_2 + 0x2868) = 0x909090909090909;
      *(undefined8 *)((long)param_2 + 0x2860) = 0x909090909090909;
      *(undefined8 *)((long)param_2 + 0x2878) = 0x909090909090909;
      *(undefined8 *)((long)param_2 + 0x2870) = 0x909090909090909;
      *(undefined8 *)((long)param_2 + 0x2880) = 0x707070707070707;
      *(undefined8 *)((long)param_2 + 0x2888) = 0x707070707070707;
      *(undefined8 *)((long)param_2 + 0x2890) = 0x707070707070707;
      *(undefined8 *)((long)param_2 + 0x2898) = 0x808080808080808;
      *(undefined8 *)((long)param_2 + 0x28a8) = 0x505050505050505;
      *(undefined8 *)((long)param_2 + 0x28a0) = 0x505050505050505;
      *(undefined8 *)((long)param_2 + 0x28b8) = 0x505050505050505;
      *(undefined8 *)((long)param_2 + 0x28b0) = 0x505050505050505;
      auVar30 = FUN_00a8b054(param_2,&local_98);
      uVar13 = auVar30._8_8_;
      uVar9 = auVar30._0_8_;
      uVar18 = auVar30._0_4_ & 0xff;
      puVar17 = puVar20;
    } while ((auVar30 & (undefined1  [16])0xff) == (undefined1  [16])0x0);
    uVar25 = uStack_88;
    if (uVar18 != 1) {
      if (uVar18 != 2) {
        uVar11 = 3;
        goto switchD_00a89674_caseD_18;
      }
      uVar12 = auVar30._8_4_;
LAB_00a8ab28:
      uVar27 = 3;
      uVar18 = uVar12;
LAB_00a8a954:
      uVar11 = (undefined1)uVar27;
      if ((uVar18 & 0xff) == 1) {
        bVar7 = true;
        uVar16 = 0;
        if (local_a0 == local_a8) {
          uVar18 = 1;
          if ((uVar27 & 0xff) != 0x17) {
            uVar18 = 2;
          }
        }
        else {
          uVar18 = 1;
        }
      }
      else if ((uVar18 & 0xff) == 0xfc) {
        uVar16 = 0;
        bVar7 = true;
      }
      else {
        uVar9 = (ulong)uVar18;
switchD_00a89674_caseD_18:
        uVar18 = (uint)uVar9;
        uVar12 = (int)param_4 - (int)local_c0;
        if (local_90 >> 3 <= uVar12) {
          uVar12 = local_90 >> 3;
        }
        uVar16 = (ulong)uVar12;
        bVar7 = (uVar9 & 0xff) != 0;
        local_90 = local_90 + uVar12 * -8;
      }
      uVar29 = (undefined1)uVar18;
      *(undefined1 *)((long)param_2 + 0x2904) = uVar11;
      *(uint *)((long)param_2 + 0x28c8) = local_90;
      *(uint *)((long)param_2 + 0x28dc) = local_8c;
      *(uint *)((long)param_2 + 0x28e0) = uStack_88;
      *(byte *)((long)param_2 + 0x28f0) = bStack_84;
      *(ulong *)((long)param_2 + 0x28c0) =
           local_98 & (-1L << ((ulong)local_90 & 0x3f) ^ 0xffffffffffffffffU);
      if ((((param_9 >> 6 & 1) == 0) && ((param_9 & 9) != 0)) && ((uVar18 >> 7 & 1) == 0)) {
        if ((local_a8 < param_7) || (local_b0 < local_a8)) {
                    /* WARNING: Subroutine does not return */
          ::core::slice::index::slice_index_fail
                    (param_7,local_a8,local_b0,&PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afef40);
        }
        local_80[0] = *(undefined4 *)((long)param_2 + 0x28d8);
        <adler2::adler2::Adler32>::write_slice(local_80,local_b8 + param_7,local_a8 - param_7);
        if ((param_9 & 1) == 0) {
          bVar7 = true;
        }
        *(uint *)((long)param_2 + 0x28d8) = local_80[0];
        if (local_80[0] == *(uint *)((long)param_2 + 0x28d4)) {
          bVar7 = true;
        }
        if (!bVar7) {
          uVar29 = 0xfe;
        }
      }
      *(undefined1 *)(param_1 + 1) = uVar29;
      param_1[2] = local_a8 - param_7;
      *param_1 = (param_4 - local_c0) - uVar16;
      return;
    }
    goto LAB_00a89650;
  case 4:
    uVar13 = 5;
    uStack_88 = 0;
    uVar25 = local_90 & 7;
    local_90 = local_90 & 0xfffffff8;
    local_98 = local_98 >> uVar25;
    uVar25 = uStack_88;
    goto LAB_00a89650;
  case 5:
    uVar13 = (ulong)local_90;
    uVar27 = local_90;
    if (uStack_88 < 4) {
      uVar25 = uStack_88 - 1;
      puVar21 = (undefined1 *)((long)param_2 + (ulong)uStack_88 + 0x28e4);
      uVar26 = local_c0;
      uVar10 = local_98;
      do {
        uVar27 = (uint)uVar13;
        if (uVar27 == 0) {
          if (uVar26 == 0) {
LAB_00a8a950:
            uVar27 = 5;
            goto LAB_00a8a954;
          }
          puVar20 = (uint *)((long)puVar17 + 1);
          uVar13 = 0;
          uVar26 = uVar26 - 1;
          *puVar21 = (char)*puVar17;
          local_c8 = puVar20;
          local_c0 = uVar26;
        }
        else {
          puVar20 = puVar17;
          if (uVar27 < 8) {
            if (uVar26 == 0) goto LAB_00a8a950;
            puVar20 = (uint *)((long)puVar17 + 1);
            uVar26 = uVar26 - 1;
            uVar27 = uVar27 | 8;
            uVar10 = (ulong)(byte)*puVar17 << (uVar13 & 0x3f) | uVar10;
            local_c8 = puVar20;
            local_c0 = uVar26;
          }
          local_98 = uVar10 >> 8;
          local_90 = uVar27 - 8;
          uVar13 = (ulong)local_90;
          *puVar21 = (char)uVar10;
          uVar10 = local_98;
        }
        uVar27 = (uint)uVar13;
        uStack_88 = uVar25 + 2;
        uVar25 = uVar25 + 1;
        puVar21 = puVar21 + 1;
        puVar17 = puVar20;
      } while (uVar25 < 3);
    }
    uVar5 = *(ushort *)((long)param_2 + 0x28e4);
    uVar13 = 0x1f;
    uVar25 = (uint)uVar5;
    if (((*(ushort *)((long)param_2 + 0x28e6) ^ uVar5) == 0xffff) && (uVar13 = 0x14, uVar5 != 0)) {
      uVar18 = 6;
      if (uVar27 != 0) {
        uVar18 = 0x11;
      }
      uVar13 = (ulong)uVar18;
    }
    goto LAB_00a89650;
  case 6:
    uVar13 = 0x14;
    if ((uStack_88 == 0) || (uVar13 = 7, local_a0 != local_a8)) goto LAB_00a89650;
    break;
  case 7:
    if (local_c0 == 0) {
      uVar27 = 7;
      goto LAB_00a8a954;
    }
    uVar13 = local_c0;
    if (local_a0 - local_a8 <= local_c0) {
      uVar13 = local_a0 - local_a8;
    }
    uVar26 = (ulong)uStack_88;
    if (uVar13 <= uStack_88) {
      uVar26 = uVar13;
    }
    uVar19 = uVar26 + local_a8;
    if ((CARRY8(uVar26,local_a8)) || (local_b0 < uVar19)) {
                    /* WARNING: Subroutine does not return */
      ::core::slice::index::slice_index_fail
                (local_a8,uVar19,local_b0,&PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afeec8);
    }
    memcpy((void *)(local_b8 + local_a8),local_c8,uVar26);
    local_c8 = (uint *)((long)puVar17 + uVar26);
    local_c0 = uVar10 - uVar26;
    uVar13 = 6;
    local_a8 = uVar19;
    uVar25 = uVar25 - (int)uVar26;
    goto LAB_00a89650;
  case 8:
    uVar13 = (ulong)uStack_88;
    uVar26 = local_c0;
    if (uStack_88 < 3) {
      do {
        local_80[2] = 4;
        local_80[0] = 5;
        local_80[1] = 5;
        uVar25 = local_80[uVar13];
        if (local_90 < uVar25) {
          uVar10 = 0;
          lVar23 = -1;
          do {
            uVar19 = (ulong)local_90;
            if (uVar26 == uVar10) {
              uVar27 = 8;
              goto LAB_00a8a954;
            }
            pbVar3 = (byte *)((long)puVar17 + uVar10);
            local_c0 = uVar26 + lVar23;
            uVar10 = uVar10 + 1;
            local_c8 = (uint *)(pbVar3 + 1);
            lVar23 = lVar23 + -1;
            local_90 = local_90 + 8;
            local_98 = (ulong)*pbVar3 << (uVar19 & 0x3f) | local_98;
          } while (local_90 < uVar25);
          uVar26 = uVar26 - uVar10;
          puVar17 = (uint *)((long)puVar17 + uVar10);
        }
        local_90 = local_90 - uVar25;
        uVar5 = (ushort)local_98;
        local_98 = local_98 >> ((ulong)uVar25 & 0x3f);
        *(ushort *)((long)param_2 + uVar13 * 2 + 0x28e8) =
             *(short *)(&DAT_0038e8a0 + uVar13 * 2) +
             (uVar5 & ((ushort)(-1L << ((ulong)uVar25 & 0x3f)) ^ 0xffff));
        uVar13 = uVar13 + 1;
        uStack_88 = (uint)uVar13;
      } while (uStack_88 != 3);
    }
    uStack_88 = 0;
    *(undefined8 *)((long)param_2 + 0x28f1) = 0;
    *(undefined8 *)((long)param_2 + 0x28f9) = 0;
    *(undefined4 *)((long)param_2 + 0x2900) = 0;
    uVar25 = 9;
    if (0x1e < *(ushort *)((long)param_2 + 0x28ea) || 0x11e < *(ushort *)((long)param_2 + 0x28e8)) {
      uVar25 = 0x1b;
    }
    uVar13 = (ulong)uVar25;
    uVar25 = uStack_88;
    goto LAB_00a89650;
  case 9:
    do {
      uVar13 = (ulong)uStack_88;
      if (uStack_88 < *(ushort *)((long)param_2 + 0x28ec)) {
        uVar26 = (ulong)local_90;
        if (local_90 < 3) {
          if (local_c0 != 0) {
            local_c0 = local_c0 - 1;
            local_90 = local_90 | 8;
            local_98 = (ulong)(byte)*local_c8 << (uVar26 & 0x3f) | local_98;
            local_c8 = (uint *)((long)local_c8 + 1);
            goto LAB_00a896e0;
          }
          cVar8 = '\x02';
        }
        else {
LAB_00a896e0:
          local_90 = local_90 - 3;
          if (0x12 < uStack_88) {
            local_98 = local_98 >> 3;
                    /* WARNING: Subroutine does not return */
            ::core::panicking::panic_bounds_check
                      (uVar13,0x13,&PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afee80);
          }
          cVar8 = '\0';
          uStack_88 = uStack_88 + 1;
          *(byte *)((long)param_2 + 0x28f1 + (ulong)(byte)(&DAT_0038e8a6)[uVar13]) =
               (byte)local_98 & 7;
          local_98 = local_98 >> 3;
        }
        uVar13 = (ulong)uVar12;
      }
      else {
        *(undefined2 *)((long)param_2 + 0x28ec) = 0x13;
        cVar8 = FUN_00a8b054(param_2,&local_98);
        uVar9 = 0xff;
        uVar13 = extraout_x1;
        if (cVar8 == -1) {
          uVar11 = 9;
          goto switchD_00a89674_caseD_18;
        }
      }
    } while (cVar8 == '\0');
    uVar25 = uStack_88;
    if (cVar8 != '\x01') {
      uVar27 = 9;
      uVar18 = (uint)uVar13;
      goto LAB_00a8a954;
    }
    goto LAB_00a89650;
  case 10:
    do {
      uVar5 = *(ushort *)((long)param_2 + 0x28e8);
      uVar26 = (ulong)uStack_88;
      uVar25 = (uint)*(ushort *)((long)param_2 + 0x28ea) + (uint)uVar5;
      if (uStack_88 < uVar25) {
        uVar10 = (ulong)local_90;
        if (local_90 < 0xf) {
          if (local_c0 < 2) {
            bVar7 = local_c0 == 0;
            uVar19 = uVar10;
            uVar25 = local_90;
            do {
              local_90 = uVar25;
              sVar6 = *(short *)((long)param_2 + (local_98 & 0x3ff) * 2 + 0x1b00);
              uVar25 = (uint)sVar6;
              if (sVar6 < 0) {
                if (10 < uVar19) {
                  uVar18 = 0xc;
                  do {
                    uVar25 = ((uint)(local_98 >> ((ulong)(uVar18 - 2) & 0x3f)) & 1) + ~uVar25;
                    uVar13 = (ulong)uVar25;
                    if (0x23f < uVar25) goto code_r0x00a8abdc;
                    uVar25 = (uint)*(short *)(uVar2 + uVar13 * 2);
                    if (-1 < (int)uVar25) goto LAB_00a898e8;
                    uVar13 = (ulong)uVar18;
                    uVar18 = uVar18 + 1;
                  } while (uVar13 <= uVar19);
                }
              }
              else if (((uint)(int)sVar6 >> 9) - 1 < uVar19) {
LAB_00a898e8:
                local_90 = (uint)uVar19;
                break;
              }
              if (bVar7) {
                uVar10 = 2;
                uVar13 = (ulong)uVar12;
                goto LAB_00a899a8;
              }
              puVar17 = (uint *)((long)local_c8 + 1);
              local_90 = (int)uVar10 + 8;
              uVar10 = (ulong)local_90;
              local_c0 = 0;
              uVar13 = uVar19 + 8;
              local_98 = (ulong)(byte)*local_c8 << (uVar19 & 0x3f) | local_98;
              bVar7 = true;
              bVar1 = uVar19 < 7;
              uVar19 = uVar13;
              local_c8 = puVar17;
              uVar25 = (uint)uVar13;
            } while (bVar1);
          }
          else {
            local_c0 = local_c0 - 2;
            local_90 = local_90 | 0x10;
            local_98 = local_98 | (ulong)(ushort)*local_c8 << (uVar10 & 0x3f);
            local_c8 = (uint *)((long)local_c8 + 2);
          }
        }
        sVar6 = *(short *)((long)param_2 + (local_98 & 0x3ff) * 2 + 0x1b00);
        uVar19 = (ulong)sVar6;
        if (sVar6 < 0) {
          uVar13 = 10;
          do {
            uVar25 = ((uint)(local_98 >> (uVar13 & 0x3f)) & 1) + ~(uint)uVar19;
            iVar28 = (int)uVar13;
            if (0x23f < uVar25) {
              uVar19 = 0x7fff;
              break;
            }
            sVar6 = *(short *)(uVar2 + (ulong)uVar25 * 2);
            uVar19 = (ulong)sVar6;
            uVar13 = (ulong)(iVar28 + 1);
          } while (sVar6 < 0);
          uVar25 = iVar28 + 1U & 0xff;
        }
        else {
          uVar25 = (uint)(int)sVar6 >> 9;
          uVar19 = (ulong)((int)sVar6 & 0x1ff);
        }
        local_98 = local_98 >> ((ulong)uVar25 & 0x3f);
        local_90 = local_90 - uVar25;
        local_8c = (uint)uVar19;
        if (local_8c < 0x10) {
          uStack_88 = uStack_88 + 1;
          uVar10 = 0;
          *(char *)((long)param_2 + (uVar26 & 0x1ff)) = (char)uVar19;
          uVar13 = uVar2;
        }
        else if ((uStack_88 == 0) && (local_8c == 0x10)) {
          uVar10 = 1;
          uVar13 = 0x20;
        }
        else {
          uVar13 = 0xb;
          local_80[0] = 0x70302;
          bStack_84 = *(byte *)((ulong)local_80 | uVar19 & 3);
          uVar10 = 1;
        }
      }
      else {
        if (uStack_88 != uVar25) {
          uVar13 = 0x1a;
          uVar25 = uStack_88;
          goto LAB_00a89650;
        }
        if (0x120 < uVar5) {
                    /* WARNING: Subroutine does not return */
          ::core::slice::index::slice_index_fail
                    (0,(ulong)uVar5,0x120,&PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afef10);
        }
        memcpy((void *)((long)param_2 + 0x2780),param_2,(ulong)uVar5);
        uVar26 = (ulong)*(ushort *)((long)param_2 + 0x28e8) & 0x1ff;
        uVar25 = (uint)*(ushort *)((long)param_2 + 0x28ea) +
                 (uint)*(ushort *)((long)param_2 + 0x28e8) & 0x1ff;
        uVar13 = (ulong)uVar25;
        if (uVar25 < (uint)uVar26) {
          ppuVar14 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afeef8;
          goto LAB_00a8ab74;
        }
        uVar10 = (ulong)*(ushort *)((long)param_2 + 0x28ea) & 0x1f;
        if (uVar13 - uVar26 != uVar10) {
                    /* WARNING: Subroutine does not return */
          ::core::slice::copy_from_slice_impl::len_mismatch_fail
                    (uVar10,uVar13 - uVar26,&PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afeee0);
        }
        memcpy((undefined8 *)((long)param_2 + 0x28a0),(void *)((long)param_2 + uVar26),uVar10);
        *(char *)((long)param_2 + 0x28ef) = *(char *)((long)param_2 + 0x28ef) + -1;
        auVar30 = FUN_00a8b054(param_2,&local_98);
        uVar13 = auVar30._8_8_;
        uVar10 = auVar30._0_8_ & 0xffffffff;
        uVar9 = 0xff;
        if (((auVar30._0_4_ ^ 0xffffffff) & 0xff) == 0) {
          uVar11 = 10;
          goto switchD_00a89674_caseD_18;
        }
      }
LAB_00a899a8:
    } while ((uVar10 & 0xff) == 0);
    uVar25 = uStack_88;
    if (((uint)uVar10 & 0xff) == 2) {
      uVar27 = 10;
      uVar18 = (uint)uVar13;
      goto LAB_00a8a954;
    }
    goto LAB_00a89650;
  case 0xb:
    uVar13 = local_98;
    for (; local_90 < bStack_84; local_90 = local_90 + 8) {
      if (local_c0 - 1 == 0xffffffffffffffff) {
        uVar27 = 0xb;
        local_98 = uVar13;
        goto LAB_00a8a954;
      }
      uVar13 = (ulong)(byte)*local_c8 << ((ulong)local_90 & 0x3f) | uVar13;
      local_c8 = (uint *)((long)local_c8 + 1);
      local_c0 = local_c0 - 1;
    }
    local_90 = local_90 - bStack_84;
    local_98 = uVar13 >> ((ulong)bStack_84 & 0x3f);
    local_80[0] = 3;
    local_80[1] = 0;
    local_80[2] = 3;
    local_80[3] = 0;
    local_80[4] = 0xb;
    local_80[5] = 0;
    if (local_8c == 0x10) {
      uVar18 = (uint)*(byte *)((long)param_2 + ((ulong)(uStack_88 - 1) & 0x1ff));
    }
    else {
      uVar18 = 0;
    }
    uVar26 = (ulong)uStack_88 & 0x1ff;
    iVar28 = (int)*(undefined8 *)(local_80 + ((ulong)local_8c & 2) * 2) +
             ((uint)uVar13 & ((uint)(-1L << ((ulong)bStack_84 & 0x3f)) ^ 0xffffffff));
    uVar13 = (ulong)(iVar28 + uStack_88) & 0x1ff;
    if (uVar13 < uVar26) {
      ppuVar14 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afee98;
LAB_00a8ab74:
                    /* WARNING: Subroutine does not return */
      ::core::slice::index::slice_index_fail(uVar26,uVar13,0x200,ppuVar14);
    }
    memset((void *)((long)param_2 + uVar26),uVar18,uVar13 - uVar26);
    uVar13 = 10;
    uVar25 = uVar25 + iVar28;
    goto LAB_00a89650;
  case 0xc:
    goto switchD_00a89674_caseD_c;
  case 0xd:
    uVar13 = 0x15;
    if (0xff < uStack_88) goto LAB_00a89650;
    if (local_a0 != local_a8) {
      if (local_b0 <= local_a8) {
code_r0x00a8ac00:
                    /* WARNING: Subroutine does not return */
        ::core::panicking::panic_bounds_check
                  (uVar26,local_b0,&PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afeeb0);
      }
      uVar13 = 0xc;
      *(char *)(local_b8 + local_a8) = (char)uStack_88;
      local_a8 = local_a8 + 1;
      goto LAB_00a89650;
    }
    break;
  case 0xe:
    for (; local_90 < bStack_84; local_90 = local_90 + 8) {
      if (local_c0 == 0) {
        uVar27 = 0xe;
        local_c0 = 0;
        goto LAB_00a8a954;
      }
      local_c0 = local_c0 - 1;
      local_98 = (ulong)(byte)*local_c8 << ((ulong)local_90 & 0x3f) | local_98;
      local_c8 = (uint *)((long)local_c8 + 1);
    }
    local_90 = local_90 - bStack_84;
    uVar13 = 0xf;
    uVar25 = (uint)local_98;
    local_98 = local_98 >> ((ulong)bStack_84 & 0x3f);
    uVar25 = uStack_88 + (uVar25 & ((uint)(-1L << ((ulong)bStack_84 & 0x3f)) ^ 0xffffffff));
    goto LAB_00a89650;
  case 0xf:
    uVar13 = (ulong)local_90;
    uVar26 = local_c0;
    if (local_90 < 0xf) {
      if (local_c0 < 2) {
        bVar7 = local_c0 == 0;
        uVar10 = uVar13;
        uVar19 = local_c0;
        uVar22 = uVar13;
        do {
          sVar6 = *(short *)((long)param_2 + (local_98 & 0x3ff) * 2 + 0xe80);
          uVar27 = (uint)sVar6;
          uVar26 = uVar19;
          if (sVar6 < 0) {
            if (10 < uVar10) {
              uVar24 = 0xc;
              do {
                uVar27 = ((uint)(local_98 >> ((ulong)(uVar24 - 2) & 0x3f)) & 1) + ~uVar27;
                uVar13 = (ulong)uVar27;
                if (0x23f < uVar27) goto code_r0x00a8abdc;
                uVar27 = (uint)*(short *)((long)param_2 + uVar13 * 2 + 0x1680);
                uVar13 = uVar10;
                if (-1 < (int)uVar27) goto LAB_00a8a818;
                uVar13 = (ulong)uVar24;
                uVar24 = uVar24 + 1;
              } while (uVar13 <= uVar10);
            }
          }
          else if (((uint)(int)sVar6 >> 9) - 1 < uVar10) {
            uVar13 = uVar10 & 0xffffffff;
            break;
          }
          if (bVar7) {
            uVar27 = 0xf;
            local_c0 = uVar19;
            goto LAB_00a8a954;
          }
          puVar20 = (uint *)((long)puVar17 + 1);
          uVar19 = 0;
          uVar13 = (ulong)((int)uVar22 + 8);
          local_90 = (uint)(uVar10 + 8);
          local_98 = (ulong)(byte)*puVar17 << (uVar10 & 0x3f) | local_98;
          bVar7 = true;
          bVar1 = uVar10 < 7;
          uVar10 = uVar10 + 8;
          puVar17 = puVar20;
          uVar22 = uVar13;
          uVar26 = 0;
        } while (bVar1);
      }
      else {
        local_98 = local_98 | (ulong)(ushort)*local_c8 << (uVar13 & 0x3f);
        uVar13 = (ulong)(local_90 | 0x10);
        puVar17 = (uint *)((long)local_c8 + 2);
        uVar26 = local_c0 - 2;
      }
    }
LAB_00a8a818:
    local_c0 = uVar26;
    local_c8 = puVar17;
    sVar6 = *(short *)((long)param_2 + (local_98 & 0x3ff) * 2 + 0xe80);
    uVar18 = (uint)sVar6;
    if (sVar6 < 0) {
      uVar26 = 10;
      do {
        uVar18 = ((uint)(local_98 >> (uVar26 & 0x3f)) & 1) + ~uVar18;
        iVar28 = (int)uVar26;
        if (0x23f < uVar18) {
          uVar18 = 0x7fff;
          break;
        }
        uVar18 = (uint)*(short *)((long)param_2 + (ulong)uVar18 * 2 + 0x1680);
        uVar26 = (ulong)(iVar28 + 1);
      } while ((int)uVar18 < 0);
      local_90 = iVar28 + 1U & 0xff;
    }
    else {
      local_90 = (uint)(int)sVar6 >> 9;
      uVar18 = uVar18 & 0x1ff;
    }
    local_98 = local_98 >> ((ulong)local_90 & 0x3f);
    local_90 = (int)uVar13 - local_90;
    uVar13 = 0x22;
    if (uVar18 < 0x1e) {
      uVar27 = uVar18 >> 1 & 0x7f;
      local_8c = (uint)*(ushort *)(&DAT_0038e8ba + (ulong)uVar18 * 2);
      bStack_84 = (char)uVar27 - (uVar27 != 0);
      uVar27 = 0x16;
      if (3 < uVar18) {
        uVar27 = 0x10;
      }
      uVar13 = (ulong)uVar27;
    }
    goto LAB_00a89650;
  case 0x10:
    if (local_90 < bStack_84) {
      if (local_c0 == 0) {
LAB_00a8a930:
        local_c0 = 0;
        uVar27 = 0x10;
        goto LAB_00a8a954;
      }
      lVar23 = 1 - local_c0;
      while( true ) {
        uVar13 = (ulong)local_90;
        local_90 = local_90 + 8;
        local_98 = (ulong)(byte)*puVar17 << (uVar13 & 0x3f) | local_98;
        if (bStack_84 <= local_90) break;
        lVar23 = lVar23 + 1;
        puVar17 = (uint *)((long)puVar17 + 1);
        if (lVar23 == 1) goto LAB_00a8a930;
      }
      local_c0 = -lVar23;
      local_c8 = (uint *)((long)puVar17 + 1);
    }
    local_90 = local_90 - bStack_84;
    uVar13 = 0x16;
    local_8c = local_8c + ((uint)local_98 & ((uint)(-1L << ((ulong)bStack_84 & 0x3f)) ^ 0xffffffff))
    ;
    local_98 = local_98 >> ((ulong)bStack_84 & 0x3f);
    goto LAB_00a89650;
  case 0x11:
    uVar13 = (ulong)local_90;
    if (local_90 < 8) {
      if (local_c0 == 0) {
        uVar27 = 0x11;
        goto LAB_00a8a954;
      }
      local_c0 = local_c0 - 1;
      local_90 = local_90 | 8;
      local_98 = (ulong)(byte)*local_c8 << (uVar13 & 0x3f) | local_98;
      local_c8 = (uint *)((long)local_c8 + 1);
    }
    local_90 = local_90 - 8;
    local_8c = (uint)local_98 & 0xff;
    uVar13 = 0x12;
    local_98 = local_98 >> 8;
    goto LAB_00a89650;
  case 0x12:
    if (local_a0 != local_a8) {
      if (local_b0 <= local_a8) goto code_r0x00a8ac00;
      *(char *)(local_b8 + local_a8) = (char)local_8c;
      uVar25 = 6;
      if (local_90 != 0 && uStack_88 - 1 != 0) {
        uVar25 = 0x11;
      }
      uVar13 = (ulong)uVar25;
      local_a8 = local_a8 + 1;
      uVar25 = uStack_88 - 1;
      goto LAB_00a89650;
    }
    break;
  case 0x13:
    uVar13 = (ulong)local_8c;
    do {
      uVar25 = uStack_88;
      uVar10 = uVar22 - uVar26;
      if (uVar10 == 0) {
        uVar11 = 0x13;
        local_a8 = uVar22;
        uVar9 = 2;
        goto switchD_00a89674_caseD_18;
      }
      uVar9 = (ulong)uStack_88;
      if (uVar10 <= uStack_88) {
        uVar9 = uVar10;
      }
      FUN_00a8ac1c(lVar23,uVar19,uVar26 - uVar13 & uVar16,uVar26,uVar9);
      uStack_88 = uVar25 - (int)uVar9;
      uVar26 = uVar9 + uVar26;
    } while (uStack_88 != 0);
    uVar13 = 0xc;
    local_a8 = uVar26;
    uVar25 = uStack_88;
    goto LAB_00a89650;
  case 0x14:
    uVar13 = 3;
    if (*(char *)((long)param_2 + 0x28ee) != '\0') {
      uVar26 = (ulong)local_90;
      uVar18 = (uint)(param_4 - local_c0);
      if (local_90 >> 3 <= uVar18) {
        uVar18 = local_90 >> 3;
      }
      local_90 = (local_90 & 0xfffffff8) + uVar18 * -8;
      uVar10 = (param_4 - local_c0) - (ulong)uVar18;
      if (param_4 < uVar10) {
                    /* WARNING: Subroutine does not return */
        ::core::slice::index::slice_index_fail
                  (uVar10,param_4,param_4,&PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afef28);
      }
      uVar13 = 0x18;
      local_98 = local_98 >> (uVar26 & 7) & (-1L << (local_90 & 0x38) ^ 0xffffffffffffffffU);
      local_c8 = (uint *)((long)param_3 + uVar10);
      local_c0 = param_4 - uVar10;
      if ((param_9 & 1) != 0) {
        uStack_88 = 0;
        uVar13 = 0x17;
        uVar25 = uStack_88;
      }
    }
    goto LAB_00a89650;
  case 0x15:
    uVar13 = 0x14;
    uVar25 = uStack_88 & 0x1ff;
    if ((uVar25 != 0x100) && (uVar13 = 0x21, uVar25 < 0x11e)) {
      uVar26 = (ulong)(uStack_88 - 1) & 0x1f;
      bStack_84 = ""[uVar26];
      uVar25 = 0xe;
      if ((int)uVar26 - 0x1cU < 0xffffffec) {
        uVar25 = 0xf;
      }
      uVar13 = (ulong)uVar25;
      uVar25 = (uint)*(ushort *)(&DAT_0038e8f6 + uVar26 * 2);
    }
    goto LAB_00a89650;
  case 0x16:
    uVar26 = (ulong)local_8c;
    if ((((param_9 >> 2 & 1) == 0) || (uVar13 = 0x1e, uVar26 <= local_a8)) &&
       (uVar13 = 0x1e, uVar26 <= local_b0)) {
      uVar10 = local_a8 + uStack_88;
      if ((local_a0 - local_a8 < uVar10) ||
         ((uVar13 = local_a8 - uVar26 & uVar16, local_a8 <= uVar13 &&
          (uVar13 - local_a8 < (ulong)uStack_88)))) {
        uVar18 = 0xc;
        if (uStack_88 != 0) {
          uVar18 = 0x13;
        }
        uVar13 = (ulong)uVar18;
      }
      else {
        FUN_00a8900c(local_b8,local_b0);
        uVar13 = 0xc;
        local_a8 = uVar10;
        uVar25 = uStack_88;
      }
    }
    goto LAB_00a89650;
  case 0x17:
    if (uStack_88 < 4) {
      uVar27 = *(uint *)((long)param_2 + 0x28d4);
      uVar25 = uStack_88 - 1;
      uVar26 = (ulong)local_90;
      puVar20 = local_c8;
      uVar13 = local_98;
      do {
        uVar24 = (uint)uVar26;
        if (uVar24 == 0) {
          if (local_c0 == 0) {
LAB_00a8a944:
            local_c0 = 0;
            uVar27 = 0x17;
            goto LAB_00a8a954;
          }
          puVar17 = (uint *)((long)puVar20 + 1);
          uVar26 = 0;
          local_c0 = local_c0 - 1;
          uVar27 = (uint)(byte)*puVar20 | uVar27 << 8;
        }
        else {
          puVar17 = puVar20;
          if (uVar24 < 8) {
            if (local_c0 == 0) goto LAB_00a8a944;
            puVar17 = (uint *)((long)puVar20 + 1);
            local_c0 = local_c0 - 1;
            uVar24 = uVar24 | 8;
            uVar13 = (ulong)(byte)*puVar20 << (uVar26 & 0x3f) | uVar13;
          }
          local_98 = uVar13 >> 8;
          uVar27 = (uint)uVar13 & 0xff | uVar27 << 8;
          local_90 = uVar24 - 8;
          uVar26 = (ulong)local_90;
          uVar13 = local_98;
        }
        uStack_88 = uVar25 + 2;
        uVar25 = uVar25 + 1;
        *(uint *)((long)param_2 + 0x28d4) = uVar27;
        puVar20 = puVar17;
      } while (uVar25 < 3);
    }
    uVar13 = 0x18;
    local_c8 = puVar17;
    uVar25 = uStack_88;
    goto LAB_00a89650;
  case 0x18:
    goto switchD_00a89674_caseD_18;
  default:
    uVar9 = 0xff;
    goto switchD_00a89674_caseD_18;
  }
  uVar9 = 2;
  goto switchD_00a89674_caseD_18;
switchD_00a89674_caseD_c:
  uVar13 = local_c0;
  for (; (3 < uVar13 && (1 < local_a0 - uVar26)); uVar26 = uVar26 + 2) {
    if ((0xd < uVar13) && (0x102 < local_a0 - uVar26)) {
      local_a8 = uVar26;
      auVar30 = FUN_00a89084(param_2,&local_c8,&local_b8,param_9,&local_98,uVar16);
      uVar13 = auVar30._8_8_;
      uVar27 = auVar30._8_4_;
      uVar18 = auVar30._0_4_;
      uVar25 = uStack_88;
      if ((auVar30 & (undefined1  [16])0xff) == (undefined1  [16])0x0) goto LAB_00a89650;
      goto LAB_00a8a954;
    }
    uVar10 = (ulong)local_90;
    puVar17 = local_c8;
    if (local_90 < 0x1e) {
      puVar17 = local_c8 + 1;
      uVar13 = uVar13 - 4;
      local_90 = local_90 | 0x20;
      local_98 = local_98 | (ulong)*local_c8 << (uVar10 & 0x3f);
      local_c0 = uVar13;
    }
    sVar6 = *(short *)((long)param_2 + (local_98 & 0x3ff) * 2 + 0x200);
    uStack_88 = (uint)sVar6;
    if (sVar6 < 0) {
      uVar10 = 10;
      do {
        uVar25 = ((uint)(local_98 >> (uVar10 & 0x3f)) & 1) + ~uStack_88;
        iVar28 = (int)uVar10;
        if (0x23f < uVar25) {
          uStack_88 = 0x7fff;
          break;
        }
        sVar6 = *(short *)((long)param_2 + (ulong)uVar25 * 2 + 0xa00);
        uStack_88 = (uint)sVar6;
        uVar10 = (ulong)(iVar28 + 1);
      } while (sVar6 < 0);
      uVar25 = iVar28 + 1U & 0xff;
    }
    else {
      uVar25 = (uint)(int)sVar6 >> 9;
    }
    local_98 = local_98 >> ((ulong)uVar25 & 0x3f);
    local_90 = local_90 - uVar25;
    local_c8 = puVar17;
    if ((uStack_88 >> 8 & 1) != 0) {
      uVar13 = 0x15;
      local_a8 = uVar26;
      uVar25 = uStack_88;
      goto LAB_00a89650;
    }
    sVar6 = *(short *)((long)param_2 + (local_98 & 0x3ff) * 2 + 0x200);
    uVar25 = (uint)sVar6;
    if (sVar6 < 0) {
      uVar10 = 10;
      do {
        uVar25 = ((uint)(local_98 >> (uVar10 & 0x3f)) & 1) + ~uVar25;
        iVar28 = (int)uVar10;
        if (0x23f < uVar25) {
          uVar25 = 0x7fff;
          break;
        }
        uVar25 = (uint)*(short *)((long)param_2 + (ulong)uVar25 * 2 + 0xa00);
        uVar10 = (ulong)(iVar28 + 1);
      } while ((int)uVar25 < 0);
      uVar27 = iVar28 + 1U & 0xff;
    }
    else {
      uVar27 = (uint)(int)sVar6 >> 9;
    }
    local_98 = local_98 >> ((ulong)uVar27 & 0x3f);
    local_90 = local_90 - uVar27;
    if (local_b0 <= uVar26) goto code_r0x00a8ac00;
    *(char *)(local_b8 + uVar26) = (char)uStack_88;
    uVar10 = uVar26 + 1;
    if ((uVar25 >> 8 & 1) != 0) {
      uVar13 = 0x15;
      local_a8 = uVar10;
      goto LAB_00a89650;
    }
    if (local_b0 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      ::core::panicking::panic_bounds_check
                (uVar10,local_b0,&PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afeeb0);
    }
    *(char *)(local_b8 + uVar10) = (char)uVar25;
  }
  uVar10 = (ulong)local_90;
  if (local_90 < 0xf) {
    if (uVar13 < 2) {
      bVar7 = uVar13 == 0;
      uVar19 = uVar10;
      uVar25 = local_90;
      do {
        local_90 = uVar25;
        sVar6 = *(short *)((long)param_2 + (local_98 & 0x3ff) * 2 + 0x200);
        uVar25 = (uint)sVar6;
        if (sVar6 < 0) {
          if (10 < uVar19) {
            uVar27 = 0xc;
            do {
              uVar25 = ((uint)(local_98 >> ((ulong)(uVar27 - 2) & 0x3f)) & 1) + ~uVar25;
              uVar13 = (ulong)uVar25;
              local_a8 = uVar26;
              if (0x23f < uVar25) {
code_r0x00a8abdc:
                    /* WARNING: Subroutine does not return */
                ::core::panicking::panic_bounds_check
                          (uVar13,0x240,&PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afee68);
              }
              uVar25 = (uint)*(short *)((long)param_2 + uVar13 * 2 + 0xa00);
              if (-1 < (int)uVar25) goto LAB_00a8a728;
              uVar13 = (ulong)uVar27;
              uVar27 = uVar27 + 1;
            } while (uVar13 <= uVar19);
          }
        }
        else if (((uint)(int)sVar6 >> 9) - 1 < uVar19) {
LAB_00a8a728:
          local_90 = (uint)uVar19;
          break;
        }
        if (bVar7) {
          uVar27 = 0xc;
          local_a8 = uVar26;
          goto LAB_00a8a954;
        }
        puVar17 = (uint *)((long)local_c8 + 1);
        local_90 = (int)uVar10 + 8;
        uVar10 = (ulong)local_90;
        local_c0 = 0;
        uVar13 = uVar19 + 8;
        local_98 = (ulong)(byte)*local_c8 << (uVar19 & 0x3f) | local_98;
        bVar7 = true;
        bVar1 = uVar19 < 7;
        uVar19 = uVar13;
        local_c8 = puVar17;
        uVar25 = (uint)uVar13;
      } while (bVar1);
    }
    else {
      local_c0 = uVar13 - 2;
      local_90 = local_90 | 0x10;
      local_98 = local_98 | (ulong)(ushort)*local_c8 << (uVar10 & 0x3f);
      local_c8 = (uint *)((long)local_c8 + 2);
    }
  }
  sVar6 = *(short *)((long)param_2 + (local_98 & 0x3ff) * 2 + 0x200);
  uVar25 = (uint)sVar6;
  if (sVar6 < 0) {
    uVar13 = 10;
    do {
      uVar25 = ((uint)(local_98 >> (uVar13 & 0x3f)) & 1) + ~uVar25;
      iVar28 = (int)uVar13;
      if (0x23f < uVar25) {
        uVar25 = 0x7fff;
        break;
      }
      uVar25 = (uint)*(short *)((long)param_2 + (ulong)uVar25 * 2 + 0xa00);
      uVar13 = (ulong)(iVar28 + 1);
    } while ((int)uVar25 < 0);
    uVar18 = iVar28 + 1U & 0xff;
  }
  else {
    uVar18 = (uint)(int)sVar6 >> 9;
    uVar25 = uVar25 & 0x1ff;
  }
  local_90 = local_90 - uVar18;
  uVar13 = 0xd;
  local_a8 = uVar26;
  local_98 = local_98 >> ((ulong)uVar18 & 0x3f);
  goto LAB_00a89650;
}


// ===== 00a8ac1c  FUN_00a8ac1c =====

void FUN_00a8ac1c(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6
                 )

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  size_t __n;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  ulong local_68;
  long lStack_60;
  undefined1 local_58;
  
  lVar8 = param_3 - param_4;
  lVar1 = -lVar8;
  if (param_4 <= param_3 && lVar8 != 0) {
    lVar1 = lVar8;
  }
  bVar3 = param_2 <= (param_3 + param_5) - 3;
  uVar10 = (param_5 & 0xfffffffffffffffc) + param_4;
  if (((param_4 <= param_3) || (param_6 != 0xffffffffffffffff && bVar3)) || (lVar1 != 1)) {
    uVar5 = 0;
    if (2 < param_2) {
      uVar5 = param_2 - 3;
    }
    if (uVar10 <= uVar5) {
      uVar5 = uVar10;
    }
    uVar4 = param_4;
    if ((param_4 <= param_3 || param_6 != 0xffffffffffffffff && bVar3) || (param_4 - param_3 < 4)) {
      if (param_4 < uVar5) {
        lVar8 = 0;
        lVar1 = param_4 + param_1 + 1;
        do {
          if (param_2 <= param_4 + lVar8 + 3) {
            pcVar6 = "assertion failed: out_pos + 3 < out_slice.len()";
            ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afef88;
            goto LAB_00a8af2c;
          }
          uVar10 = param_3 + lVar8 + 3 & param_6;
          if (param_2 <= uVar10) {
            pcVar6 = "assertion failed: (source_pos + 3) & out_buf_size_mask < out_slice.len()";
            ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afefa0;
            goto LAB_00a8af44;
          }
          uVar4 = param_3 + lVar8 & param_6;
          if (param_2 <= uVar4) {
            ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afefb8;
            goto LAB_00a8b04c;
          }
          uVar9 = param_3 + lVar8 + 1 & param_6;
          *(undefined1 *)(lVar1 + lVar8 + -1) = *(undefined1 *)(param_1 + uVar4);
          if (param_2 <= uVar9) {
            ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afefd0;
            uVar4 = uVar9;
            goto LAB_00a8b04c;
          }
          uVar4 = param_4 + lVar8 + 1;
          if (param_2 <= uVar4) {
            ppuVar7 = (undefined **)&UNK_00afefe8;
            goto LAB_00a8b04c;
          }
          *(undefined1 *)(lVar1 + lVar8) = *(undefined1 *)(param_1 + uVar9);
          uVar4 = param_3 + lVar8 + 2 & param_6;
          if (param_2 <= uVar4) {
            ppuVar7 = (undefined **)&UNK_00aff000;
            goto LAB_00a8b04c;
          }
          uVar9 = param_4 + lVar8 + 2;
          if (param_2 <= uVar9) {
            ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00aff018;
            uVar4 = uVar9;
            goto LAB_00a8b04c;
          }
          lVar2 = lVar1 + lVar8;
          lVar8 = lVar8 + 4;
          *(undefined1 *)(lVar2 + 1) = *(undefined1 *)(param_1 + uVar4);
          *(undefined1 *)(lVar2 + 2) = *(undefined1 *)(param_1 + uVar10);
        } while (param_4 + lVar8 < uVar5);
        param_3 = param_3 + lVar8;
        uVar4 = param_4 + lVar8;
      }
    }
    else if (param_4 < uVar5) {
      do {
        uVar10 = param_3;
        lStack_60 = uVar10 + 3;
        local_58 = 0;
        local_68 = uVar10;
        auVar11 = core::slice::index::range<core::ops::range::RangeInclusive<usize>>
                            (&local_68,param_2);
        __n = auVar11._8_8_ - auVar11._0_8_;
        if (param_2 - __n < param_4) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    ("dest is out of bounds",0x2b,&PTR_s__rust_deps_miniz_oxide_0_9_1_src_00aff150);
        }
        memmove((void *)(param_1 + param_4),(void *)(param_1 + auVar11._0_8_),__n);
        param_4 = param_4 + 4;
        param_3 = uVar10 + 4;
      } while (param_4 < uVar5);
      param_3 = uVar10 + 4;
      uVar4 = param_4;
    }
  }
  else {
    uVar4 = param_4 - 1;
    if (param_2 <= uVar4) {
      ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afef58;
      goto LAB_00a8b04c;
    }
    if ((uVar10 < param_4) || (param_2 < uVar10)) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (param_4,uVar10,param_2,&PTR_s__rust_deps_miniz_oxide_0_9_1_src_00afef70);
    }
    memset((void *)(param_1 + param_4),(uint)*(byte *)(param_1 + uVar4),param_5 & 0xfffffffffffffffc
          );
    param_3 = uVar10 - 1;
    uVar4 = uVar10;
  }
  param_5 = param_5 & 3;
  if (param_5 < 2) {
    if (param_5 == 0) {
      return;
    }
    uVar5 = param_3 & param_6;
    if (uVar5 < param_2) {
      uVar10 = uVar4;
      if (uVar4 < param_2) goto LAB_00a8aee0;
      ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00aff048;
    }
    else {
      ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00aff030;
      uVar4 = uVar5;
    }
LAB_00a8b04c:
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar4,param_2,ppuVar7);
  }
  if (param_5 == 2) {
    uVar10 = uVar4 + 1;
    if (param_2 <= uVar10) {
      pcVar6 = "assertion failed: out_pos + 1 < out_slice.len()";
      ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00aff060;
LAB_00a8af2c:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(pcVar6,0x2f,ppuVar7);
    }
    uVar5 = param_3 + 1 & param_6;
    if (param_2 <= uVar5) {
      pcVar6 = "assertion failed: (source_pos + 1) & out_buf_size_mask < out_slice.len()";
      ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00aff078;
LAB_00a8af44:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(pcVar6,0x48,ppuVar7);
    }
    param_3 = param_3 & param_6;
    if (param_2 <= param_3) {
      ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00aff090;
      uVar4 = param_3;
      goto LAB_00a8b04c;
    }
    if (param_2 <= uVar4) {
      ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00aff0a8;
      goto LAB_00a8b04c;
    }
  }
  else {
    uVar10 = uVar4 + 2;
    if (param_2 <= uVar10) {
      pcVar6 = "assertion failed: out_pos + 2 < out_slice.len()";
      ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00aff0c0;
      goto LAB_00a8af2c;
    }
    uVar5 = param_3 + 2 & param_6;
    if (param_2 <= uVar5) {
      pcVar6 = "assertion failed: (source_pos + 2) & out_buf_size_mask < out_slice.len()";
      ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00aff0d8;
      goto LAB_00a8af44;
    }
    uVar9 = param_3 & param_6;
    if (param_2 <= uVar9) {
      ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00aff0f0;
      uVar4 = uVar9;
      goto LAB_00a8b04c;
    }
    if (param_2 <= uVar4) {
      ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00aff108;
      goto LAB_00a8b04c;
    }
    param_3 = param_3 + 1 & param_6;
    *(undefined1 *)(param_1 + uVar4) = *(undefined1 *)(param_1 + uVar9);
    if (param_2 <= param_3) {
      ppuVar7 = (undefined **)&UNK_00aff120;
      uVar4 = param_3;
      goto LAB_00a8b04c;
    }
    uVar4 = uVar4 + 1;
    if (param_2 <= uVar4) {
      ppuVar7 = &PTR_s__rust_deps_miniz_oxide_0_9_1_src_00aff138;
      goto LAB_00a8b04c;
    }
  }
  *(undefined1 *)(param_1 + uVar4) = *(undefined1 *)(param_1 + param_3);
LAB_00a8aee0:
  *(undefined1 *)(param_1 + uVar10) = *(undefined1 *)(param_1 + uVar5);
  return;
}


// ===== 00a8b054  FUN_00a8b054 =====

/* WARNING: Removing unreachable block (ram,0x00a8b208) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00a8b054(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  int iVar23;
  short local_130 [16];
  int local_110;
  undefined1 auStack_10c [4];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined1 auStack_cc [12];
  short *local_c0;
  int *piStack_b8;
  long local_b0;
  undefined1 *puStack_a8;
  ulong local_a0;
  ulong uStack_98;
  long local_90;
  long local_88;
  long local_80;
  ushort *local_78;
  int *local_70;
  
  bVar6 = *(byte *)(param_1 + 0x28ef);
LAB_00a8b0dc:
  if (bVar6 == 0) {
    uVar18 = 0x120;
    pbVar21 = (byte *)(param_1 + 0x2780);
  }
  else {
    if (bVar6 == 2) {
      lVar20 = 0;
      local_d0 = 0;
      local_130[4] = 0;
      local_130[5] = 0;
      local_130[6] = 0;
      local_130[7] = 0;
      local_130[0] = 0;
      local_130[1] = 0;
      local_130[2] = 0;
      local_130[3] = 0;
      local_130[0xc] = 0;
      local_130[0xd] = 0;
      local_130[0xe] = 0;
      local_130[0xf] = 0;
      local_130[8] = 0;
      local_130[9] = 0;
      local_130[10] = 0;
      local_130[0xb] = 0;
      uStack_108 = 0;
      _local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      do {
        *(undefined2 *)(param_1 + 0x1b00 + lVar20) = 0x31e;
        lVar20 = lVar20 + 2;
      } while (lVar20 != 0x800);
      uVar18 = 0x13;
      lVar20 = param_1 + 0x1b00;
      pbVar21 = (byte *)(param_1 + 0x28f1);
      goto LAB_00a8b1a8;
    }
    if (bVar6 != 1) {
      return 0xff;
    }
    uVar18 = 0x20;
    pbVar21 = (byte *)(param_1 + 0x28a0);
  }
  lVar20 = param_1 + 0x200 + (ulong)bVar6 * 0xc80;
  local_d0 = 0;
  local_130[4] = 0;
  local_130[5] = 0;
  local_130[6] = 0;
  local_130[7] = 0;
  local_130[0] = 0;
  local_130[1] = 0;
  local_130[2] = 0;
  local_130[3] = 0;
  local_130[0xc] = 0;
  local_130[0xd] = 0;
  local_130[0xe] = 0;
  local_130[0xf] = 0;
  local_130[8] = 0;
  local_130[9] = 0;
  local_130[10] = 0;
  local_130[0xb] = 0;
  uStack_108 = 0;
  _local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar7 = 0;
  do {
    lVar1 = lVar7 + 2;
    *(undefined2 *)(lVar20 + lVar7) = 0x31e;
    lVar7 = lVar1;
  } while (lVar1 != 0x800);
  memset((void *)(lVar20 + 0x800),0,0x480);
LAB_00a8b1a8:
  piStack_b8 = &local_110;
  uVar4 = *(ushort *)(param_1 + 0x28e8 + (ulong)bVar6 * 2);
  uVar22 = (ulong)uVar4;
  if (uVar18 < uVar22) {
    return 0xff;
  }
  uVar18 = uVar22;
  pbVar9 = pbVar21;
  if (uVar4 != 0) {
    do {
      uVar10 = (ulong)*pbVar9;
      if (0xf < uVar10) {
        return 0xff;
      }
      uVar18 = uVar18 - 1;
      local_130[uVar10] = local_130[uVar10] + 1;
      pbVar9 = pbVar9 + 1;
    } while (uVar18 != 0);
  }
  uVar8 = 0;
  iVar19 = 0;
  iVar23 = 1;
  local_a0 = 0;
  uStack_98 = 0x10;
  local_90 = 0;
  local_c0 = local_130;
  local_b0 = (long)auStack_10c;
  puStack_a8 = auStack_cc;
  do {
    local_88 = 0;
    FUN_00a8b4f4(&local_80,&local_c0);
    lVar7 = local_80;
    while( true ) {
      local_80 = lVar7;
      if (local_78 == (ushort *)0x0) {
        if (iVar19 != 0x10000) {
          if (bVar6 == 2) {
            return 1;
          }
          if (1 < uVar8) {
            return 1;
          }
        }
        if (uVar4 == 0) goto LAB_00a8b42c;
        lVar7 = lVar20 + 0x800;
        uVar8 = 0xffff;
        uVar11 = 0xffff;
        uVar18 = 0;
        goto LAB_00a8b300;
      }
      uVar3 = *local_78;
      iVar23 = iVar23 * 2 - (uint)uVar3;
      iVar19 = (iVar19 + (uint)uVar3) * 2;
      *local_70 = iVar19;
      uVar18 = local_a0;
      if (iVar23 < 0) {
        return 1;
      }
      if (uVar3 != 0) {
        uVar8 = (uint)lVar7;
      }
      if (local_88 != 0) break;
      if (local_a0 < uStack_98) {
        local_a0 = local_a0 + 1;
        local_78 = (ushort *)(local_c0 + uVar18);
        local_80 = local_90;
        local_90 = local_90 + 1;
        local_70 = (int *)(local_b0 + uVar18 * 4);
      }
      else {
        local_78 = (ushort *)0x0;
      }
      local_88 = 0;
      lVar7 = local_80;
    }
  } while( true );
  while( true ) {
    iVar19 = (&local_110)[uVar13];
    (&local_110)[uVar13] = iVar19 + 1;
    uVar14 = (uint)(iVar19 << (ulong)(-uVar12 & 0x1f)) >> (ulong)(-uVar12 & 0x1f);
    uVar14 = (uVar14 & 0xaaaaaaaa) >> 1 | (uVar14 & 0x55555555) << 1;
    uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
    uVar14 = (((uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8) & 0xffff) >>
             (ulong)(0x10 - uVar12 & 0x1f);
    uVar15 = (ulong)uVar14;
    if (uVar12 < 0xb) {
      if (uVar14 < 0x400) {
        do {
          *(ushort *)(lVar20 + uVar15 * 2) = (ushort)uVar18 | (ushort)(uVar12 << 9);
          uVar15 = uVar15 + (uint)(1 << uVar13);
        } while (uVar15 < 0x400);
      }
      goto LAB_00a8b364;
    }
    uVar4 = *(ushort *)(lVar20 + (uVar15 & 0x3ff) * 2);
    uVar16 = (uint)uVar4;
    if (uVar4 == 0x31e) {
      *(short *)(lVar20 + (uVar15 & 0x3ff) * 2) = (short)uVar11;
      uVar8 = uVar11 - 2;
      uVar16 = uVar11;
      uVar11 = uVar8;
    }
    uVar14 = uVar14 >> 9;
    if (uVar12 != 0xb) {
      uVar17 = 0xb;
      do {
        uVar5 = uVar14 >> 1 & 1;
        if (0x23f < ((uVar16 - uVar5 ^ 0xffffffff) & 0xffff)) {
          return 0xff;
        }
        uVar13 = (ulong)(uVar5 + ~uVar16) & 0xffff;
        uVar16 = (uint)*(ushort *)(lVar7 + uVar13 * 2);
        if (uVar16 == 0) {
          *(short *)(lVar7 + uVar13 * 2) = (short)uVar11;
          uVar11 = uVar11 - 2;
          uVar16 = uVar8;
        }
        uVar17 = uVar17 + 1;
        uVar14 = uVar14 >> 1 & 0x7fff;
        uVar8 = uVar11;
      } while (uVar17 < uVar12);
    }
    uVar12 = uVar14 >> 1 & 1;
    if (0x23f < ((uVar16 - uVar12 ^ 0xffffffff) & 0xffff)) {
      return 0xff;
    }
    *(ushort *)(lVar7 + ((ulong)(uVar12 + ~uVar16) & 0xffff) * 2) = (ushort)uVar18;
    uVar18 = uVar10;
    if (uVar22 <= uVar10) break;
LAB_00a8b300:
    uVar13 = (ulong)pbVar21[uVar18] & 0xf;
    uVar10 = uVar18 + 1;
    uVar12 = (uint)uVar13;
    if (uVar12 == 0) {
LAB_00a8b364:
      uVar18 = uVar10;
      if (uVar10 == uVar22) break;
      goto LAB_00a8b300;
    }
  }
LAB_00a8b42c:
  cVar2 = *(char *)(param_1 + 0x28ef);
  if ((cVar2 == '\0') || (cVar2 == '\x02')) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    return 1;
  }
  bVar6 = cVar2 - 1;
  *(byte *)(param_1 + 0x28ef) = bVar6;
  goto LAB_00a8b0dc;
}


// ===== 00a8b4bc  <[u8;4usize]as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <[u8; 4usize] as core::default::Default>::default */

undefined8 __rustcall <[u8;4usize]as_core::default::Default>::default(void)

{
  return 0;
}


// ===== 00a8b4c4  <[u8;2usize]as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <[u8; 2usize] as core::default::Default>::default */

undefined8 __rustcall <[u8;2usize]as_core::default::Default>::default(void)

{
  return 0;
}


// ===== 00a8b4cc  <core[bcece726f298455b]::iter::adapters::zip::Zip<core[bcece726f298455b]::slice::iter::Iter<u16>,core[bcece726f298455b]::slice::iter::IterMut<u32>>as_core[bcece726f298455b]::iter::adapters::zip::ZipImpl<core[bcece726f298455b]::slice::iter::Iter<u16>,core[bcece726f298455b]::slice::iter::IterMut<u32>>>::new =====

/* <core[bcece726f298455b]::iter::adapters::zip::Zip<core[bcece726f298455b]::slice::iter::Iter<u16>,
   core[bcece726f298455b]::slice::iter::IterMut<u32>> as
   core[bcece726f298455b]::iter::adapters::zip::ZipImpl<core[bcece726f298455b]::slice::iter::Iter<u16>,
   core[bcece726f298455b]::slice::iter::IterMut<u32>>>::new */

void <core[bcece726f298455b]::iter::adapters::zip::Zip<core[bcece726f298455b]::slice::iter::Iter<u16>,core[bcece726f298455b]::slice::iter::IterMut<u32>>as_core[bcece726f298455b]::iter::adapters::zip::ZipImpl<core[bcece726f298455b]::slice::iter::Iter<u16>,core[bcece726f298455b]::slice::iter::IterMut<u32>>>
     ::new(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = (ulong)(param_5 - param_4) >> 2;
  param_1[2] = param_4;
  param_1[3] = param_5;
  if ((ulong)(param_3 - param_2) >> 1 <= uVar1) {
    uVar1 = (ulong)(param_3 - param_2) >> 1;
  }
  param_1[4] = 0;
  param_1[5] = uVar1;
  return;
}


// ===== 00a8b4f4  FUN_00a8b4f4 =====

void FUN_00a8b4f4(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar4 = param_2[4];
  uVar3 = param_2[5];
  uVar2 = uVar3 - uVar4;
  if (param_3 <= uVar3 - uVar4) {
    uVar2 = param_3;
  }
  uVar1 = uVar2 + uVar4;
  if (uVar4 < uVar1) {
    param_2[4] = uVar1;
    uVar4 = uVar1;
  }
  if (uVar4 < uVar3) {
    lVar6 = uVar4 * -4;
    lVar7 = uVar4 * -2;
    lVar8 = uVar2 - param_3;
    do {
      uVar4 = uVar4 + 1;
      if (lVar8 == 0) {
        lVar5 = param_2[6];
        lVar9 = *param_2;
        param_2[4] = uVar4;
        lVar8 = param_2[2];
        *param_1 = lVar5 + param_3;
        param_1[1] = lVar9 - lVar7;
        lVar8 = lVar8 - lVar6;
        lVar6 = 0x10;
        param_2[6] = lVar5 + param_3 + 1;
        goto LAB_00a8b58c;
      }
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + -4;
      lVar7 = lVar7 + -2;
    } while (uVar3 != uVar4);
    param_2[4] = uVar3;
  }
  lVar8 = 0;
  lVar6 = 8;
LAB_00a8b58c:
  *(long *)((long)param_1 + lVar6) = lVar8;
  return;
}


// ===== 00a8b594  <core::slice::iter::Iter<u16>as_core::iter::adapters::zip::TrustedRandomAccessNoCoerce>::size =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::iter::Iter<u16> as core::iter::adapters::zip::TrustedRandomAccessNoCoerce>::size */

ulong __rustcall
<core::slice::iter::Iter<u16>as_core::iter::adapters::zip::TrustedRandomAccessNoCoerce>::size
          (long *param_1)

{
  return (ulong)(param_1[1] - *param_1) >> 1;
}


// ===== 00a8b5a4  <core::slice::iter::IterMut<u32>as_core::iter::adapters::zip::TrustedRandomAccessNoCoerce>::size =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::iter::IterMut<u32> as core::iter::adapters::zip::TrustedRandomAccessNoCoerce>::size
    */

ulong __rustcall
<core::slice::iter::IterMut<u32>as_core::iter::adapters::zip::TrustedRandomAccessNoCoerce>::size
          (long *param_1)

{
  return (ulong)(param_1[1] - *param_1) >> 2;
}


// ===== 00a8b5b4  adler2::adler32_slice =====

/* WARNING: Unknown calling convention: __rustcall */
/* adler2::adler32_slice */

undefined4 __rustcall adler2::adler32_slice(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_14;
  
  local_14 = 1;
  <adler2::adler2::Adler32>::write_slice(&local_14,param_1,param_2);
  return local_14;
}


// ===== 00a8b5e8  <adler2::adler2::Adler32>::write_slice =====

/* WARNING: Unknown calling convention: __rustcall */
/* <adler2::adler2::Adler32>::write_slice */

void __rustcall <adler2::adler2::Adler32>::write_slice(ushort *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint3 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  int iVar24;
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  uVar7 = param_3 & 0x7ffffffffffffffc;
  uVar9 = (uint)param_1[1];
  uVar10 = (uVar7 / 0x56c0) * 0x56c0;
  param_3 = param_3 & 3;
  uVar8 = (uint)*param_1;
  if (uVar10 >> 6 < 0x15b) {
    uVar14 = 0;
    uVar17 = 0;
    auVar23 = ZEXT816(0);
    uVar20 = 0;
  }
  else {
    uVar14 = 0;
    uVar17 = 0;
    auVar23 = ZEXT816(0);
    uVar20 = 0;
    uVar5 = uVar10;
    lVar11 = param_2;
    do {
      lVar6 = 0;
      do {
        pbVar12 = (byte *)(lVar11 + lVar6);
        lVar6 = lVar6 + 4;
        uVar4 = CONCAT12((char)((ushort)*(undefined2 *)(pbVar12 + 1) >> 8),
                         *(undefined2 *)(pbVar12 + 1)) & 0xff00ff;
        iVar22 = auVar23._0_4_ + (uint)(ushort)uVar4;
        iVar24 = auVar23._4_4_ + (uint)(byte)(uVar4 >> 0x10);
        auVar25._0_8_ = CONCAT44(iVar24,iVar22);
        auVar25._8_4_ = auVar23._8_4_;
        auVar25._12_4_ = auVar23._12_4_;
        iVar19 = iVar22 + (int)uVar20;
        iVar21 = iVar24 + (int)((ulong)uVar20 >> 0x20);
        uVar20 = CONCAT44(iVar21,iVar19);
        iVar13 = (int)uVar14 + (uint)*pbVar12;
        iVar15 = (int)((ulong)uVar14 >> 0x20) + (uint)pbVar12[3];
        uVar14 = CONCAT44(iVar15,iVar13);
        iVar16 = iVar13 + (int)uVar17;
        iVar18 = iVar15 + (int)((ulong)uVar17 >> 0x20);
        uVar17 = CONCAT44(iVar18,iVar16);
        auVar23 = auVar25;
      } while (lVar6 != 0x56c0);
      auVar23 = NEON_umull(uVar14,0x8007807180078071,4);
      auVar25 = NEON_umull(auVar25._0_8_,0x8007807180078071,4);
      auVar27 = NEON_umull(uVar17,0x8007807180078071,4);
      auVar28 = NEON_umull(uVar20,0x8007807180078071,4);
      uVar5 = uVar5 - 0x56c0;
      lVar11 = lVar11 + 0x56c0;
      uVar9 = (uVar9 + uVar8 * 0x56c0) % 0xfff1;
      uVar14 = CONCAT44(iVar15 + (auVar23._12_4_ >> 0xf) * -0xfff1,
                        iVar13 + (auVar23._4_4_ >> 0xf) * -0xfff1);
      auVar23._0_4_ = iVar22 + (auVar25._4_4_ >> 0xf) * -0xfff1;
      auVar23._4_4_ = iVar24 + (auVar25._12_4_ >> 0xf) * -0xfff1;
      auVar23._8_8_ = 0;
      uVar17 = CONCAT44(iVar18 + (auVar27._12_4_ >> 0xf) * -0xfff1,
                        iVar16 + (auVar27._4_4_ >> 0xf) * -0xfff1);
      uVar20 = CONCAT44(iVar21 + (auVar28._12_4_ >> 0xf) * -0xfff1,
                        iVar19 + (auVar28._4_4_ >> 0xf) * -0xfff1);
    } while (0x15a < uVar5 >> 6);
  }
  if (uVar7 % 0x56c0 == 0) {
    iVar13 = auVar23._4_4_;
    iVar15 = auVar23._0_4_;
  }
  else {
    pbVar12 = (byte *)(param_2 + uVar10);
    lVar11 = uVar10 - uVar7;
    do {
      bVar3 = *pbVar12;
      pbVar1 = pbVar12 + 3;
      lVar11 = lVar11 + 4;
      pbVar2 = pbVar12 + 1;
      pbVar12 = pbVar12 + 4;
      auVar27._0_4_ = auVar23._0_4_ + (uint)(byte)*(undefined2 *)pbVar2;
      auVar27._4_4_ = auVar23._4_4_ + (uint)(byte)((ushort)*(undefined2 *)pbVar2 >> 8);
      auVar27._8_4_ = auVar23._8_4_;
      auVar27._12_4_ = auVar23._12_4_;
      iVar13 = (int)uVar14 + (uint)bVar3;
      iVar15 = (int)((ulong)uVar14 >> 0x20) + (uint)*pbVar1;
      uVar14 = CONCAT44(iVar15,iVar13);
      iVar19 = auVar27._0_4_ + (int)uVar20;
      iVar21 = auVar27._4_4_ + (int)((ulong)uVar20 >> 0x20);
      uVar20 = CONCAT44(iVar21,iVar19);
      iVar16 = iVar13 + (int)uVar17;
      iVar18 = iVar15 + (int)((ulong)uVar17 >> 0x20);
      uVar17 = CONCAT44(iVar18,iVar16);
      auVar23 = auVar27;
    } while (lVar11 != 0);
    auVar28._8_4_ = 0x80078071;
    auVar28._0_8_ = 0x8007807180078071;
    auVar28._12_4_ = 0x80078071;
    auVar26 = NEON_umull(uVar20,0x8007807180078071,4);
    lVar11 = (ulong)auVar27._4_4_ * (auVar28._8_8_ & 0xffffffff);
    lVar6 = (ulong)auVar27._0_4_ * (auVar28._8_8_ >> 0x20);
    auVar25 = NEON_umull(uVar14,0x8007807180078071,4);
    auVar23 = NEON_umull(uVar17,0x8007807180078071,4);
    uVar14 = CONCAT44(iVar15 + CONCAT22(auVar25._14_2_ >> 0xf,(short)(auVar25._12_4_ >> 0xf)) *
                               -0xfff1,
                      iVar13 + CONCAT22(auVar25._6_2_ >> 0xf,(short)(auVar25._4_4_ >> 0xf)) *
                               -0xfff1);
    iVar13 = auVar27._4_4_ +
             CONCAT22((ushort)((ulong)lVar11 >> 0x3f),(short)(uint)((ulong)lVar11 >> 0x2f)) *
             -0xfff1;
    iVar15 = auVar27._0_4_ +
             CONCAT22((ushort)((ulong)lVar6 >> 0x3f),(short)(uint)((ulong)lVar6 >> 0x2f)) * -0xfff1;
    uVar20 = CONCAT44(iVar21 + (auVar26._12_4_ >> 0xf) * -0xfff1,
                      iVar19 + (auVar26._4_4_ >> 0xf) * -0xfff1);
    uVar17 = CONCAT44(iVar18 + (auVar23._12_4_ >> 0xf) * -0xfff1,
                      iVar16 + (auVar23._4_4_ >> 0xf) * -0xfff1);
  }
  iVar16 = (int)((ulong)uVar14 >> 0x20);
  uVar9 = (((uVar9 + uVar8 * (int)(uVar7 % 0x56c0)) % 0xfff1 +
            ((int)uVar20 + (int)((ulong)uVar20 >> 0x20)) * 4 + (0xfff1 - iVar16) * 3) -
          (iVar15 + iVar13 * 2)) + ((int)uVar17 + (int)((ulong)uVar17 >> 0x20)) * 4 + 0x2ffd3;
  uVar8 = (int)uVar14 + iVar16 + iVar13 + iVar15 + uVar8;
  if (param_3 != 0) {
    pbVar12 = (byte *)(param_2 + uVar7);
    uVar8 = uVar8 + *pbVar12;
    uVar9 = uVar8 + uVar9;
    if (param_3 != 1) {
      uVar8 = uVar8 + pbVar12[1];
      uVar9 = uVar8 + uVar9;
      if (param_3 != 2) {
        uVar8 = uVar8 + pbVar12[2];
        uVar9 = uVar8 + uVar9;
      }
    }
  }
  *param_1 = (short)uVar8 + (short)(uVar8 / 0xfff1) * 0xf;
  param_1[1] = (short)uVar9 + (short)(uVar9 / 0xfff1) * 0xf;
  return;
}


// ===== 00a8b884  <adler2::Adler32_as_core::hash::Hasher>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <adler2::Adler32 as core::hash::Hasher>::write */

void __rustcall <adler2::Adler32_as_core::hash::Hasher>::write(void)

{
  (*(code *)PTR_write_slice_00b07af0)();
  return;
}


// ===== 00a8b888  FUN_00a8b888 =====

void FUN_00a8b888(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00a8b8a0  FUN_00a8b8a0 =====

void FUN_00a8b8a0(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00a8b8b8  FUN_00a8b8b8 =====

void FUN_00a8b8b8(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  if (CARRY8(param_3,param_2)) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(0);
  }
  uVar2 = *param_1 * 2;
  uVar1 = param_3 + param_2;
  if (param_3 + param_2 <= uVar2) {
    uVar1 = uVar2;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  FUN_00a903fc(&local_38,*param_1,param_1[1],uVar1);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00a8b930  FUN_00a8b930 =====

void FUN_00a8b930(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00a8b950 to 00a8b957 has its CatchHandler @ 00a8b988 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00a8b9a8  FUN_00a8b9a8 =====

void FUN_00a8b9a8(void *param_1)

{
                    /* try { // try from 00a8b9b8 to 00a8b9bb has its CatchHandler @ 00a8b9d4 */
  <core::io::error::Custom_as_core::ops::drop::Drop>::drop();
  free(param_1);
  return;
}


// ===== 00a8b9f0  FUN_00a8b9f0 =====

void FUN_00a8b9f0(long *param_1,long *param_2)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  ushort *puVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *puVar12;
  ushort *puVar13;
  uint uVar14;
  ushort uVar15;
  long local_78;
  long lStack_70;
  long local_68;
  
  puVar12 = (ushort *)*param_2;
  puVar4 = (ushort *)param_2[1];
  uVar14 = (uint)*(ushort *)((long)param_2 + 0x12);
  uVar15 = *(ushort *)(param_2 + 2);
  local_78 = 0;
  uVar11 = (long)puVar4 - (long)puVar12;
  uVar10 = (ulong)(uVar11 == 0);
  if ((*(ushort *)((long)param_2 + 0x12) & 0xf800) != 0xd800) {
    uVar10 = 1;
  }
  uVar3 = 0;
  if ((uVar15 & 1) != 0) {
    uVar3 = uVar10;
  }
  lStack_70 = 1;
  local_68 = 0;
  lVar1 = (uVar11 >> 1 & 1) + (uVar11 >> 2) + uVar3;
  if (lVar1 != 0) {
                    /* try { // try from 00a8bc10 to 00a8bc1b has its CatchHandler @ 00a8bc20 */
    FUN_00a8b8b8(&local_78,0,lVar1);
  }
  do {
    lVar1 = local_68;
    if ((uVar15 & 1) == 0) {
      if (puVar12 == puVar4) {
        param_1[1] = lStack_70;
        *param_1 = local_78;
        param_1[2] = local_68;
        return;
      }
      puVar13 = puVar12 + 1;
      uVar8 = (uint)*puVar12;
      puVar12 = puVar13;
      if ((uVar8 & 0xf800) != 0xd800) goto LAB_00a8bad4;
LAB_00a8ba80:
      bVar7 = uVar8 >> 10 < 0x37;
      uVar15 = (ushort)(bVar7 && puVar12 != puVar4);
      puVar13 = puVar12;
      uVar9 = uVar14;
      if (bVar7 && puVar12 != puVar4) {
        puVar13 = puVar12 + 1;
        uVar9 = (uint)*puVar12;
        if (0xfffffbff < uVar9 - 0xe000) {
          uVar10 = (ulong)*puVar12 & 0x3ff |
                   (ulong)(uVar8 & 0x3ff) * 0x4000000 + 0x100000000 >> 0x10;
          uVar8 = (uint)uVar10;
          if (0x7f < uVar10) goto LAB_00a8bb14;
LAB_00a8bae4:
          uVar15 = 0;
          bVar7 = true;
          uVar11 = 1;
          goto LAB_00a8bb3c;
        }
      }
      bVar7 = false;
      uVar8 = 0xfffd;
      uVar11 = 3;
      uVar14 = uVar9;
    }
    else {
      puVar13 = puVar12;
      uVar8 = uVar14;
      if ((uVar14 & 0xf800) == 0xd800) goto LAB_00a8ba80;
LAB_00a8bad4:
      uVar10 = (ulong)uVar8;
      if (uVar10 < 0x80) goto LAB_00a8bae4;
LAB_00a8bb14:
      uVar8 = (uint)uVar10;
      if (uVar10 < 0x800) {
        bVar7 = false;
        uVar15 = 0;
        uVar11 = 2;
      }
      else {
        bVar7 = false;
        uVar15 = 0;
        uVar11 = 3;
        if (0xffff < uVar10) {
          uVar11 = 4;
        }
      }
    }
LAB_00a8bb3c:
    if ((ulong)(local_78 - local_68) < uVar11) {
                    /* try { // try from 00a8bbc8 to 00a8bbd7 has its CatchHandler @ 00a8bc24 */
      FUN_00a8b8b8(&local_78,local_68,uVar11);
    }
    pbVar2 = (byte *)(lStack_70 + lVar1);
    if (bVar7) {
      *pbVar2 = (byte)uVar8;
    }
    else {
      bVar5 = (byte)uVar8 & 0x3f | 0x80;
      if (uVar8 < 0x800) {
        pbVar2[1] = bVar5;
        *pbVar2 = (byte)(uVar8 >> 6) | 0xc0;
      }
      else {
        bVar6 = (byte)(uVar8 >> 6) & 0x3f | 0x80;
        if (uVar8 >> 0x10 == 0) {
          pbVar2[1] = bVar6;
          pbVar2[2] = bVar5;
          *pbVar2 = (byte)(uVar8 >> 0xc) | 0xe0;
        }
        else {
          pbVar2[2] = bVar6;
          pbVar2[3] = bVar5;
          *pbVar2 = (byte)(uVar8 >> 0x12) | 0xf0;
          pbVar2[1] = (byte)(uVar8 >> 0xc) & 0x3f | 0x80;
        }
      }
    }
    local_68 = uVar11 + lVar1;
    puVar12 = puVar13;
  } while( true );
}


// ===== 00a8bc44  __rustc::__rdl_alloc_error_handler =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rdl_alloc_error_handler */

void __rustcall __rustc::__rdl_alloc_error_handler(undefined8 param_1)

{
  undefined8 local_28;
  undefined8 *puStack_20;
  undefined *local_18;
  
  puStack_20 = &local_28;
  local_18 = PTR_fmt_00b00c10;
  local_28 = param_1;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_nounwind_fmt
            (&DAT_002b2c99,&puStack_20,0,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff1b0);
}


// ===== 00a8bc80  <alloc::string::alloc::string::String>::from_utf16 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::alloc::string::String>::from_utf16 */

void __rustcall
<alloc::string::alloc::string::String>::from_utf16(long *param_1,ushort *param_2,long param_3)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  ushort *puVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long local_78;
  undefined1 *puStack_70;
  long local_68;
  
  local_78 = param_3;
  if (param_3 == 0) {
    local_68 = 0;
    puStack_70 = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar6 = (undefined1 *)FUN_004b25a4(param_3,1);
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    local_68 = 0;
    puVar9 = param_2;
    puStack_70 = puVar6;
    do {
      lVar5 = local_68;
      puVar8 = puVar9 + 1;
      uVar1 = *puVar9;
      uVar11 = (ulong)uVar1;
      if ((uVar1 & 0xf800) == 0xd800) {
        if (((0x36 < uVar1 >> 10) || (puVar8 == param_2 + param_3)) ||
           (*puVar8 - 0xe000 < 0xfffffc00)) {
          *(undefined1 *)(param_1 + 1) = 0;
          *param_1 = -1;
          if (local_78 == 0) {
            return;
          }
          free(puStack_70);
          return;
        }
        uVar12 = (((ulong)*puVar8 & 0x3ff) << 0x10 | (uVar11 & 0x3ff) << 0x1a) + 0x100000000;
        puVar8 = puVar9 + 2;
        uVar11 = uVar12 >> 0x10;
LAB_00a8bd7c:
        bVar4 = false;
        uVar10 = 3;
        if (uVar12 >> 0x20 != 0) {
          uVar10 = 4;
        }
      }
      else {
        uVar12 = uVar11 << 0x10;
        if (uVar1 < 0x80) {
          bVar4 = true;
          uVar10 = 1;
        }
        else {
          if (0x7ff < uVar1) goto LAB_00a8bd7c;
          bVar4 = false;
          uVar10 = 2;
        }
      }
      if ((ulong)(local_78 - local_68) < uVar10) {
                    /* try { // try from 00a8be18 to 00a8be27 has its CatchHandler @ 00a8bec0 */
        FUN_00a8b8b8(&local_78,local_68,uVar10);
        pbVar7 = puStack_70 + lVar5;
        puVar6 = puStack_70;
        if (bVar4) goto LAB_00a8bce4;
LAB_00a8bda8:
        bVar2 = (byte)uVar11 & 0x3f | 0x80;
        if (uVar12 >> 0x1b == 0) {
          pbVar7[1] = bVar2;
          *pbVar7 = (byte)(uVar12 >> 0x16) | 0xc0;
        }
        else {
          bVar3 = (byte)((uint)uVar12 >> 0x16) & 0x3f | 0x80;
          if (uVar12 >> 0x20 == 0) {
            pbVar7[1] = bVar3;
            pbVar7[2] = bVar2;
            *pbVar7 = (byte)(uVar12 >> 0x1c) | 0xe0;
          }
          else {
            pbVar7[2] = bVar3;
            pbVar7[3] = bVar2;
            *pbVar7 = (byte)(uint)(uVar12 >> 0x22) | 0xf0;
            pbVar7[1] = (byte)(uVar12 >> 0x1c) & 0x3f | 0x80;
          }
        }
      }
      else {
        pbVar7 = puVar6 + local_68;
        if (!bVar4) goto LAB_00a8bda8;
LAB_00a8bce4:
        *pbVar7 = (byte)uVar11;
      }
      local_68 = uVar10 + lVar5;
      puVar9 = puVar8;
    } while (puVar8 != param_2 + param_3);
  }
  param_1[1] = (long)puStack_70;
  *param_1 = local_78;
  param_1[2] = local_68;
  return;
}


// ===== 00a8bee0  <alloc::string::alloc::string::String>::try_reserve =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::alloc::string::String>::try_reserve */

undefined1  [16] __rustcall
<alloc::string::alloc::string::String>::try_reserve(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 extraout_x1;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar4 = param_1[2];
  auVar5._8_8_ = *param_1;
  if (param_2 <= auVar5._8_8_ - uVar4) {
    auVar5._0_8_ = 0xffffffffffffffff;
    return auVar5;
  }
  if (CARRY8(uVar4,param_2)) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar5._8_8_;
    return auVar2 << 0x40;
  }
  uVar1 = uVar4 + param_2;
  if (uVar4 + param_2 <= auVar5._8_8_ * 2) {
    uVar1 = auVar5._8_8_ * 2;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  FUN_00a903fc(&local_38,auVar5._8_8_,param_1[1],uVar1);
  if (local_38 == 1) {
    auVar3._8_8_ = uStack_28;
    auVar3._0_8_ = local_30;
    return auVar3;
  }
  *param_1 = uVar1;
  param_1[1] = local_30;
  auVar6._8_8_ = extraout_x1;
  auVar6._0_8_ = 0xffffffffffffffff;
  return auVar6;
}


// ===== 00a8bf88  <alloc::string::alloc::string::String>::from_utf16be =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::alloc::string::String>::from_utf16be */

void __rustcall
<alloc::string::alloc::string::String>::from_utf16be(long *param_1,ushort *param_2,ulong param_3)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  byte *pbVar6;
  byte *pbVar7;
  ushort *puVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  uint uVar12;
  ulong uVar13;
  long local_78;
  byte *local_70;
  long local_68;
  
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = -1;
    return;
  }
  pbVar6 = &DAT_00000001;
  param_3 = param_3 & 0x7ffffffffffffffe;
  local_68 = 0;
  local_78 = 0;
  local_70 = &DAT_00000001;
  if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    puVar11 = param_2 + 1;
    uVar1 = *param_2;
    uVar2 = (uVar1 & 0xff00ff) << 8;
    uVar12 = uVar1 >> 8 | uVar2;
    if ((uVar1 >> 3 & 0x1f) == 0x1b) {
      if ((0x36 < uVar2 >> 10) || (param_3 == 2)) goto LAB_00a8c2dc;
      uVar1 = *puVar11;
      if ((((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) + 0x2000 >> 10 & 0x3f) < 0x3f)
      goto LAB_00a8c2dc;
      puVar11 = param_2 + 2;
      uVar13 = (((ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) & 0x3ff) << 0x10 |
               ((ulong)uVar12 & 0x3ff) << 0x1a) + 0x100000000;
      uVar12 = (uint)(uVar13 >> 0x10);
LAB_00a8c080:
      bVar5 = false;
      lVar9 = 3;
      if (uVar13 >> 0x20 != 0) {
        lVar9 = 4;
      }
    }
    else {
      uVar13 = (ulong)uVar12 << 0x10;
      if (uVar12 < 0x80) {
        bVar5 = true;
        lVar9 = 1;
      }
      else {
        if (0x7ff < uVar12) goto LAB_00a8c080;
        bVar5 = false;
        lVar9 = 2;
      }
    }
                    /* try { // try from 00a8c094 to 00a8c0a3 has its CatchHandler @ 00a8c30c */
    FUN_00a8b8b8(&local_78,0,lVar9);
    pbVar7 = local_70;
    pbVar6 = local_70;
    if (bVar5) {
      *local_70 = (byte)uVar12;
    }
    else {
      bVar3 = (byte)uVar12 & 0x3f | 0x80;
      if (uVar13 >> 0x1b == 0) {
        local_70[1] = bVar3;
        *local_70 = (byte)(uVar13 >> 0x16) | 0xc0;
      }
      else {
        bVar4 = (byte)((uint)uVar13 >> 0x16) & 0x3f | 0x80;
        if (uVar13 >> 0x20 == 0) {
          local_70[1] = bVar4;
          local_70[2] = bVar3;
          *local_70 = (byte)(uVar13 >> 0x1c) | 0xe0;
        }
        else {
          local_70[2] = bVar4;
          local_70[3] = bVar3;
          *local_70 = (byte)(uint)(uVar13 >> 0x22) | 0xf0;
          local_70[1] = (byte)(uVar13 >> 0x1c) & 0x3f | 0x80;
        }
      }
    }
    while (puVar11 != (ushort *)((long)param_2 + param_3)) {
      puVar8 = puVar11 + 1;
      uVar1 = *puVar11;
      uVar2 = (uVar1 & 0xff00ff) << 8;
      uVar12 = uVar1 >> 8 | uVar2;
      local_70 = pbVar6;
      local_68 = lVar9;
      if ((uVar1 >> 3 & 0x1f) == 0x1b) {
        if (uVar2 >> 10 < 0x37 && puVar8 != (ushort *)((long)param_2 + param_3)) {
          uVar1 = *puVar8;
          if (0x3e < (((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) + 0x2000 >> 10 & 0x3f)) {
            uVar13 = (((ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) & 0x3ff) << 0x10 |
                     ((ulong)uVar12 & 0x3ff) << 0x1a) + 0x100000000;
            puVar8 = puVar11 + 2;
            uVar12 = (uint)(uVar13 >> 0x10);
            goto LAB_00a8c1ec;
          }
        }
        if (local_78 != 0) {
          free(pbVar6);
        }
        goto LAB_00a8c2dc;
      }
      uVar13 = (ulong)uVar12 << 0x10;
      if (uVar12 < 0x80) {
        bVar5 = true;
        uVar10 = 1;
      }
      else if (uVar12 < 0x800) {
        bVar5 = false;
        uVar10 = 2;
      }
      else {
LAB_00a8c1ec:
        bVar5 = false;
        uVar10 = 3;
        if (uVar13 >> 0x20 != 0) {
          uVar10 = 4;
        }
      }
      if ((ulong)(local_78 - lVar9) < uVar10) {
                    /* try { // try from 00a8c288 to 00a8c297 has its CatchHandler @ 00a8c308 */
        FUN_00a8b8b8(&local_78,lVar9,uVar10);
        pbVar6 = local_70 + lVar9;
        pbVar7 = local_70;
        if (bVar5) goto LAB_00a8c13c;
LAB_00a8c218:
        bVar3 = (byte)uVar12 & 0x3f | 0x80;
        if (uVar13 >> 0x1b == 0) {
          pbVar6[1] = bVar3;
          *pbVar6 = (byte)(uVar13 >> 0x16) | 0xc0;
        }
        else {
          bVar4 = (byte)((uint)uVar13 >> 0x16) & 0x3f | 0x80;
          if (uVar13 >> 0x20 == 0) {
            pbVar6[1] = bVar4;
            pbVar6[2] = bVar3;
            *pbVar6 = (byte)(uVar13 >> 0x1c) | 0xe0;
          }
          else {
            pbVar6[2] = bVar4;
            pbVar6[3] = bVar3;
            *pbVar6 = (byte)(uint)(uVar13 >> 0x22) | 0xf0;
            pbVar6[1] = (byte)(uVar13 >> 0x1c) & 0x3f | 0x80;
          }
        }
      }
      else {
        pbVar6 = pbVar7 + lVar9;
        if (!bVar5) goto LAB_00a8c218;
LAB_00a8c13c:
        *pbVar6 = (byte)uVar12;
      }
      lVar9 = uVar10 + lVar9;
      puVar11 = puVar8;
      pbVar6 = local_70;
    }
  }
  if (local_78 != -1) {
    *param_1 = local_78;
    param_1[1] = (long)pbVar6;
    param_1[2] = lVar9;
    return;
  }
LAB_00a8c2dc:
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = -1;
  return;
}


// ===== 00a8c32c  <alloc::string::alloc::string::String>::from_utf16le =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::alloc::string::String>::from_utf16le */

void __rustcall
<alloc::string::alloc::string::String>::from_utf16le(long *param_1,ushort *param_2,ulong param_3)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ushort *puVar10;
  ulong uVar11;
  ushort *puVar12;
  long local_78;
  byte *local_70;
  long local_68;
  
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = -1;
    return;
  }
  uVar7 = ((long)param_2 + 1U & 0xfffffffffffffffe) - (long)param_2;
  if (param_3 < uVar7) {
    uVar6 = 0;
    lVar5 = 2;
LAB_00a8c428:
    from_utf16(param_1,lVar5,uVar6);
    return;
  }
  if ((param_3 - uVar7 & 1) == 0 && uVar7 == 0) {
    uVar6 = param_3 - uVar7 >> 1;
    lVar5 = (long)param_2 + uVar7;
    goto LAB_00a8c428;
  }
  pbVar8 = &DAT_00000001;
  param_3 = param_3 & 0x7ffffffffffffffe;
  local_68 = 0;
  local_78 = 0;
  local_70 = &DAT_00000001;
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    puVar12 = param_2 + 1;
    uVar1 = *param_2;
    uVar7 = (ulong)uVar1;
    if ((uVar1 & 0xf800) == 0xd800) {
      if (((0x36 < uVar1 >> 10) || (param_3 == 2)) ||
         (uVar1 = *puVar12, uVar1 - 0xe000 < 0xfffffc00)) goto LAB_00a8c6c8;
      puVar12 = param_2 + 2;
      uVar6 = (((ulong)uVar1 & 0x3ff) << 0x10 | (uVar7 & 0x3ff) << 0x1a) + 0x100000000;
      uVar7 = uVar6 >> 0x10;
LAB_00a8c480:
      bVar4 = false;
      lVar5 = 3;
      if (uVar6 >> 0x20 != 0) {
        lVar5 = 4;
      }
    }
    else {
      uVar6 = uVar7 << 0x10;
      if (uVar1 < 0x80) {
        bVar4 = true;
        lVar5 = 1;
      }
      else {
        if (0x7ff < uVar1) goto LAB_00a8c480;
        bVar4 = false;
        lVar5 = 2;
      }
    }
                    /* try { // try from 00a8c494 to 00a8c4a3 has its CatchHandler @ 00a8c6dc */
    FUN_00a8b8b8(&local_78,0,lVar5);
    pbVar9 = local_70;
    pbVar8 = local_70;
    if (bVar4) {
      *local_70 = (byte)uVar7;
    }
    else {
      bVar2 = (byte)uVar7 & 0x3f | 0x80;
      if (uVar6 >> 0x1b == 0) {
        local_70[1] = bVar2;
        *local_70 = (byte)(uVar6 >> 0x16) | 0xc0;
      }
      else {
        bVar3 = (byte)((uint)uVar6 >> 0x16) & 0x3f | 0x80;
        if (uVar6 >> 0x20 == 0) {
          local_70[1] = bVar3;
          local_70[2] = bVar2;
          *local_70 = (byte)(uVar6 >> 0x1c) | 0xe0;
        }
        else {
          local_70[2] = bVar3;
          local_70[3] = bVar2;
          *local_70 = (byte)(uint)(uVar6 >> 0x22) | 0xf0;
          local_70[1] = (byte)(uVar6 >> 0x1c) & 0x3f | 0x80;
        }
      }
    }
    while (puVar12 != (ushort *)((long)param_2 + param_3)) {
      puVar10 = puVar12 + 1;
      uVar1 = *puVar12;
      uVar7 = (ulong)uVar1;
      local_70 = pbVar8;
      local_68 = lVar5;
      if ((uVar1 & 0xf800) == 0xd800) {
        if (((0x36 < uVar1 >> 10) || (puVar10 == (ushort *)((long)param_2 + param_3))) ||
           (*puVar10 - 0xe000 < 0xfffffc00)) {
          if (local_78 != 0) {
            free(pbVar8);
          }
          goto LAB_00a8c6c8;
        }
        uVar6 = (((ulong)*puVar10 & 0x3ff) << 0x10 | (uVar7 & 0x3ff) << 0x1a) + 0x100000000;
        puVar10 = puVar12 + 2;
        uVar7 = uVar6 >> 0x10;
LAB_00a8c5d8:
        bVar4 = false;
        uVar11 = 3;
        if (uVar6 >> 0x20 != 0) {
          uVar11 = 4;
        }
      }
      else {
        uVar6 = uVar7 << 0x10;
        if (uVar1 < 0x80) {
          bVar4 = true;
          uVar11 = 1;
        }
        else {
          if (0x7ff < uVar1) goto LAB_00a8c5d8;
          bVar4 = false;
          uVar11 = 2;
        }
      }
      if ((ulong)(local_78 - lVar5) < uVar11) {
                    /* try { // try from 00a8c674 to 00a8c683 has its CatchHandler @ 00a8c6d8 */
        FUN_00a8b8b8(&local_78,lVar5,uVar11);
        pbVar8 = local_70 + lVar5;
        pbVar9 = local_70;
        if (bVar4) goto LAB_00a8c53c;
LAB_00a8c604:
        bVar2 = (byte)uVar7 & 0x3f | 0x80;
        if (uVar6 >> 0x1b == 0) {
          pbVar8[1] = bVar2;
          *pbVar8 = (byte)(uVar6 >> 0x16) | 0xc0;
        }
        else {
          bVar3 = (byte)((uint)uVar6 >> 0x16) & 0x3f | 0x80;
          if (uVar6 >> 0x20 == 0) {
            pbVar8[1] = bVar3;
            pbVar8[2] = bVar2;
            *pbVar8 = (byte)(uVar6 >> 0x1c) | 0xe0;
          }
          else {
            pbVar8[2] = bVar3;
            pbVar8[3] = bVar2;
            *pbVar8 = (byte)(uint)(uVar6 >> 0x22) | 0xf0;
            pbVar8[1] = (byte)(uVar6 >> 0x1c) & 0x3f | 0x80;
          }
        }
      }
      else {
        pbVar8 = pbVar9 + lVar5;
        if (!bVar4) goto LAB_00a8c604;
LAB_00a8c53c:
        *pbVar8 = (byte)uVar7;
      }
      lVar5 = uVar11 + lVar5;
      puVar12 = puVar10;
      pbVar8 = local_70;
    }
  }
  if (local_78 != -1) {
    *param_1 = local_78;
    param_1[1] = (long)pbVar8;
    param_1[2] = lVar5;
    return;
  }
LAB_00a8c6c8:
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = -1;
  return;
}


// ===== 00a8c6fc  <alloc::string::alloc::string::String>::from_utf8_lossy =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::alloc::string::String>::from_utf8_lossy */

void __rustcall
<alloc::string::alloc::string::String>::from_utf8_lossy
          (ulong *param_1,undefined8 param_2,ulong param_3)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined1 *local_70;
  ulong local_68;
  long local_58;
  
  local_a8 = param_2;
  uStack_a0 = param_3;
  <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
            (&local_70,&local_a8);
  uVar5 = local_68;
  puVar2 = local_70;
  if (local_70 == (undefined1 *)0x0) {
    local_68 = 0;
    local_70 = &DAT_00000001;
LAB_00a8c890:
    param_1[1] = (ulong)local_70;
    param_1[2] = local_68;
    *param_1 = 0xffffffffffffffff;
    return;
  }
  if (local_58 == 0) goto LAB_00a8c890;
  local_98 = param_3;
  if (param_3 == 0) {
    uStack_90 = 1;
    if (local_68 == 0) goto LAB_00a8c770;
LAB_00a8c8cc:
                    /* try { // try from 00a8c8cc to 00a8c8f3 has its CatchHandler @ 00a8c908 */
    local_88 = 0;
    FUN_00a8b8b8(&local_98,0,uVar5);
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uStack_90 = FUN_004b25a4(param_3,1);
    if (uStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    if (param_3 < uVar5) goto LAB_00a8c8cc;
LAB_00a8c770:
    local_88 = 0;
    uVar4 = 0;
    uVar6 = uStack_90;
    if (uVar5 == 0) goto LAB_00a8c790;
  }
  uVar4 = local_88;
  uVar6 = uStack_90;
  param_3 = local_98;
  memcpy((void *)(uStack_90 + local_88),puVar2,uVar5);
LAB_00a8c790:
  local_88 = uVar4 + uVar5;
  if (param_3 - local_88 < 3) {
    FUN_00a8b8b8(&local_98,local_88,3);
    uVar6 = uStack_90;
  }
  puVar1 = (undefined2 *)(uVar6 + local_88);
  *(undefined1 *)(puVar1 + 1) = 0xbd;
  local_88 = local_88 + 3;
  *puVar1 = 0xbfef;
  uStack_80 = local_a8;
  local_78 = uStack_a0;
  do {
                    /* try { // try from 00a8c7c8 to 00a8c7d3 has its CatchHandler @ 00a8c90c */
    uVar5 = local_88;
    <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
              (&local_70,&uStack_80);
    lVar3 = local_58;
    uVar6 = local_68;
    puVar2 = local_70;
    if (local_70 == (undefined1 *)0x0) {
      param_1[1] = uStack_90;
      *param_1 = local_98;
      param_1[2] = local_88;
      return;
    }
    if (local_98 - uVar5 < local_68) {
                    /* try { // try from 00a8c844 to 00a8c86b has its CatchHandler @ 00a8c90c */
      FUN_00a8b8b8(&local_98,uVar5,local_68);
      uVar5 = local_88;
LAB_00a8c7f8:
      memcpy((void *)(uStack_90 + uVar5),puVar2,uVar6);
    }
    else if (local_68 != 0) goto LAB_00a8c7f8;
    local_88 = uVar5 + uVar6;
    if (lVar3 != 0) {
      if (local_98 - local_88 < 3) {
        FUN_00a8b8b8(&local_98,local_88,3);
      }
      puVar1 = (undefined2 *)(uStack_90 + local_88);
      local_88 = local_88 + 3;
      *puVar1 = 0xbfef;
      *(undefined1 *)(puVar1 + 1) = 0xbd;
    }
  } while( true );
}


// ===== 00a8c92c  <alloc::string::alloc::string::String>::try_reserve_exact =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::alloc::string::String>::try_reserve_exact */

undefined1  [16] __rustcall
<alloc::string::alloc::string::String>::try_reserve_exact(ulong *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 extraout_x1;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar3 = param_1[2];
  auVar4._8_8_ = *param_1;
  if (param_2 <= auVar4._8_8_ - uVar3) {
    auVar4._0_8_ = 0xffffffffffffffff;
    return auVar4;
  }
  if (CARRY8(uVar3,param_2)) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar4._8_8_;
    return auVar1 << 0x40;
  }
  FUN_00a903fc(&local_38,auVar4._8_8_,param_1[1],uVar3 + param_2);
  if (local_38 == 1) {
    auVar2._8_8_ = uStack_28;
    auVar2._0_8_ = local_30;
    return auVar2;
  }
  *param_1 = uVar3 + param_2;
  param_1[1] = local_30;
  auVar5._8_8_ = extraout_x1;
  auVar5._0_8_ = 0xffffffffffffffff;
  return auVar5;
}


// ===== 00a8c9c8  <alloc::string::alloc::string::String>::from_utf16be_lossy =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::alloc::string::String>::from_utf16be_lossy */

void __rustcall
<alloc::string::alloc::string::String>::from_utf16be_lossy
          (long *param_1,ushort *param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  ushort *puVar3;
  byte *pbVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ushort *puVar12;
  ulong uVar13;
  ulong unaff_x27;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  local_68 = 0;
  lVar2 = (param_3 >> 1 & 1) + (param_3 >> 2);
  local_78 = 0;
  lStack_70 = 1;
  if (lVar2 != 0) {
                    /* try { // try from 00a8cc34 to 00a8cc3f has its CatchHandler @ 00a8cc6c */
    FUN_00a8b8b8(&local_78,0,lVar2);
  }
  bVar1 = false;
  puVar3 = (ushort *)((long)param_2 + (param_3 & 0xfffffffffffffffe));
  do {
    lVar2 = local_68;
    if (bVar1) {
      uVar9 = unaff_x27 & 0xffffffff;
      puVar12 = param_2;
      if (((uint)unaff_x27 >> 0xb & 0x1f) == 0x1b) goto LAB_00a8ca48;
LAB_00a8cab0:
      uVar9 = uVar9 & 0xffff;
      uVar11 = (uint)uVar9;
      if (uVar9 < 0x80) goto LAB_00a8cac0;
LAB_00a8caec:
      uVar11 = (uint)uVar9;
      if (uVar9 < 0x800) {
        bVar8 = false;
        bVar1 = false;
        uVar13 = 2;
      }
      else {
        bVar8 = false;
        bVar1 = false;
        uVar13 = 3;
        if (0xffff < uVar9) {
          uVar13 = 4;
        }
      }
    }
    else {
      if (param_2 == puVar3) {
        local_80 = local_68;
        lStack_88 = lStack_70;
        local_90 = local_78;
        if ((param_3 & 1) != 0) {
          if ((ulong)(local_78 - local_68) < 3) {
                    /* try { // try from 00a8cc44 to 00a8cc4f has its CatchHandler @ 00a8cc58 */
            FUN_00a8b8b8(&local_90,local_68,3);
            local_68 = local_80;
          }
          *(undefined2 *)(lStack_88 + local_68) = 0xbfef;
          local_80 = local_68 + 3;
          *(undefined1 *)((undefined2 *)(lStack_88 + local_68) + 1) = 0xbd;
        }
        param_1[1] = lStack_88;
        *param_1 = local_90;
        param_1[2] = local_80;
        return;
      }
      puVar12 = param_2 + 1;
      uVar11 = (*param_2 & 0xff00ff) << 8;
      uVar9 = (ulong)(*param_2 >> 8 | uVar11);
      param_2 = puVar12;
      if (uVar11 >> 0xb != 0x1b) goto LAB_00a8cab0;
LAB_00a8ca48:
      bVar8 = ((uint)uVar9 >> 10 & 0x3f) < 0x37;
      bVar1 = bVar8 && param_2 != puVar3;
      puVar12 = param_2;
      uVar10 = unaff_x27;
      if (bVar8 && param_2 != puVar3) {
        puVar12 = param_2 + 1;
        uVar5 = *param_2;
        uVar10 = (ulong)((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8);
        if (0x3e < (((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) + 0x2000 >> 10 & 0x3f)) {
          uVar9 = uVar10 & 0x3ff | (uVar9 & 0x3ff) * 0x4000000 + 0x100000000 >> 0x10;
          uVar11 = (uint)uVar9;
          if (0x7f < uVar9) goto LAB_00a8caec;
LAB_00a8cac0:
          bVar1 = false;
          bVar8 = true;
          uVar13 = 1;
          goto LAB_00a8cb14;
        }
      }
      bVar8 = false;
      uVar11 = 0xfffd;
      uVar13 = 3;
      unaff_x27 = uVar10;
    }
LAB_00a8cb14:
    if ((ulong)(local_78 - local_68) < uVar13) {
                    /* try { // try from 00a8cba0 to 00a8cbaf has its CatchHandler @ 00a8cc70 */
      FUN_00a8b8b8(&local_78,local_68,uVar13);
    }
    pbVar4 = (byte *)(lStack_70 + lVar2);
    if (bVar8) {
      *pbVar4 = (byte)uVar11;
    }
    else {
      bVar6 = (byte)uVar11 & 0x3f | 0x80;
      if (uVar11 < 0x800) {
        pbVar4[1] = bVar6;
        *pbVar4 = (byte)(uVar11 >> 6) | 0xc0;
      }
      else {
        bVar7 = (byte)(uVar11 >> 6) & 0x3f | 0x80;
        if (uVar11 >> 0x10 == 0) {
          pbVar4[1] = bVar7;
          pbVar4[2] = bVar6;
          *pbVar4 = (byte)(uVar11 >> 0xc) | 0xe0;
        }
        else {
          pbVar4[2] = bVar7;
          pbVar4[3] = bVar6;
          *pbVar4 = (byte)(uVar11 >> 0x12) | 0xf0;
          pbVar4[1] = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
        }
      }
    }
    local_68 = uVar13 + lVar2;
    param_2 = puVar12;
  } while( true );
}


// ===== 00a8cc90  <alloc::string::alloc::string::String>::from_utf16le_lossy =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::alloc::string::String>::from_utf16le_lossy */

void __rustcall
<alloc::string::alloc::string::String>::from_utf16le_lossy
          (long *param_1,ushort *param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  puVar10 = (ushort *)((long)param_2 + 1U & 0xfffffffffffffffe);
  uVar9 = (long)puVar10 - (long)param_2;
  if (param_3 < uVar9) {
    uVar7 = 0;
    local_78 = 2;
  }
  else {
    if (puVar10 != param_2) {
      lVar2 = (param_3 >> 1 & 1) + (param_3 >> 2);
      local_78 = 0;
      lStack_70 = 1;
      local_68 = 0;
      if (lVar2 != 0) {
                    /* try { // try from 00a8cf90 to 00a8cf9b has its CatchHandler @ 00a8cfe0 */
        FUN_00a8b8b8(&local_78,0,lVar2);
      }
      uVar12 = 0;
      bVar1 = false;
      puVar10 = (ushort *)((long)param_2 + (param_3 & 0xfffffffffffffffe));
      do {
        lVar2 = local_68;
        if (bVar1) {
          uVar9 = (ulong)uVar12;
          puVar11 = param_2;
          if ((uVar12 & 0xf800) == 0xd800) goto LAB_00a8cdb4;
LAB_00a8ce08:
          uVar13 = (uint)uVar9;
          param_2 = puVar11;
joined_r0x00a8ce44:
          if (uVar9 < 0x80) {
            bVar1 = false;
            bVar6 = true;
            uVar7 = 1;
          }
          else {
            uVar13 = (uint)uVar9;
            if (uVar9 < 0x800) {
              bVar6 = false;
              bVar1 = false;
              uVar7 = 2;
            }
            else {
              bVar6 = false;
              bVar1 = false;
              uVar7 = 3;
              if (0xffff < uVar9) {
                uVar7 = 4;
              }
            }
          }
        }
        else {
          if (param_2 == puVar10) {
            lStack_88 = lStack_70;
            local_90 = local_78;
            local_80 = local_68;
            if ((param_3 & 1) != 0) {
              if ((ulong)(local_78 - local_68) < 3) {
                    /* try { // try from 00a8cfb4 to 00a8cfbf has its CatchHandler @ 00a8cfc8 */
                FUN_00a8b8b8(&local_90,local_68,3);
                local_68 = local_80;
              }
              *(undefined2 *)(lStack_88 + local_68) = 0xbfef;
              local_80 = local_68 + 3;
              *(undefined1 *)((undefined2 *)(lStack_88 + local_68) + 1) = 0xbd;
            }
            param_1[1] = lStack_88;
            *param_1 = local_90;
            param_1[2] = local_80;
            return;
          }
          puVar11 = param_2 + 1;
          uVar9 = (ulong)*param_2;
          if ((*param_2 & 0xf800) != 0xd800) goto LAB_00a8ce08;
LAB_00a8cdb4:
          bVar6 = (uint)(uVar9 >> 10) < 0x37;
          bVar1 = bVar6 && puVar11 != puVar10;
          param_2 = puVar11;
          uVar8 = uVar12;
          if (bVar6 && puVar11 != puVar10) {
            param_2 = puVar11 + 1;
            uVar8 = (uint)*puVar11;
            if (0xfffffbff < uVar8 - 0xe000) {
              uVar9 = (ulong)*puVar11 & 0x3ff |
                      (ulong)((uint)uVar9 & 0x3ff) * 0x4000000 + 0x100000000 >> 0x10;
              uVar13 = (uint)uVar9;
              goto joined_r0x00a8ce44;
            }
          }
          bVar6 = false;
          uVar13 = 0xfffd;
          uVar7 = 3;
          uVar12 = uVar8;
        }
        if ((ulong)(local_78 - local_68) < uVar7) {
                    /* try { // try from 00a8cf00 to 00a8cf0f has its CatchHandler @ 00a8cfe4 */
          FUN_00a8b8b8(&local_78,local_68,uVar7);
        }
        pbVar3 = (byte *)(lStack_70 + lVar2);
        if (bVar6) {
          *pbVar3 = (byte)uVar13;
        }
        else {
          bVar4 = (byte)uVar13 & 0x3f | 0x80;
          if (uVar13 < 0x800) {
            pbVar3[1] = bVar4;
            *pbVar3 = (byte)(uVar13 >> 6) | 0xc0;
          }
          else {
            bVar5 = (byte)(uVar13 >> 6) & 0x3f | 0x80;
            if (uVar13 >> 0x10 == 0) {
              pbVar3[1] = bVar5;
              pbVar3[2] = bVar4;
              *pbVar3 = (byte)(uVar13 >> 0xc) | 0xe0;
            }
            else {
              pbVar3[2] = bVar5;
              pbVar3[3] = bVar4;
              *pbVar3 = (byte)(uVar13 >> 0x12) | 0xf0;
              pbVar3[1] = (byte)(uVar13 >> 0xc) & 0x3f | 0x80;
            }
          }
        }
        local_68 = uVar7 + lVar2;
      } while( true );
    }
    uVar7 = param_3 - uVar9 >> 1;
    local_78 = (long)param_2 + uVar9;
    if ((param_3 - uVar9 & 1) != 0) {
      lStack_70 = local_78 + uVar7 * 2;
      local_68 = (ulong)local_68._2_6_ << 0x10;
      FUN_00a8b9f0(&local_90,&local_78);
      if ((ulong)(local_90 - local_80) < 3) {
                    /* try { // try from 00a8cfa0 to 00a8cfab has its CatchHandler @ 00a8cfcc */
        FUN_00a8b8b8(&local_90,local_80,3);
      }
      param_1[1] = lStack_88;
      *param_1 = local_90;
      *(undefined2 *)(lStack_88 + local_80) = 0xbfef;
      *(undefined1 *)((undefined2 *)(lStack_88 + local_80) + 1) = 0xbd;
      param_1[2] = local_80 + 3;
      return;
    }
  }
  lStack_70 = local_78 + uVar7 * 2;
  local_68 = (ulong)local_68._2_6_ << 0x10;
  FUN_00a8b9f0(param_1,&local_78);
  return;
}


// ===== 00a8d004  <alloc::string::alloc::string::String>::from_utf8_lossy_owned =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::alloc::string::String>::from_utf8_lossy_owned */

void __rustcall
<alloc::string::alloc::string::String>::from_utf8_lossy_owned(long *param_1,long *param_2)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  long local_48;
  long lStack_40;
  long local_38;
  
  __ptr = (void *)param_2[1];
                    /* try { // try from 00a8d024 to 00a8d02f has its CatchHandler @ 00a8d0a8 */
  from_utf8_lossy(&local_48,__ptr,param_2[2]);
  if (local_48 == -1) {
    lVar2 = *param_2;
    lVar1 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar2;
    param_1[2] = lVar1;
    return;
  }
  lVar1 = *param_2;
  param_1[1] = lStack_40;
  *param_1 = local_48;
  param_1[2] = local_38;
  if (lVar1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00a8d0c8  <alloc::io::buffered::bufreader::buffer::alloc::io::buffered::bufreader::buffer::Buffer>::backshift =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::buffered::bufreader::buffer::alloc::io::buffered::bufreader::buffer::Buffer>::backshift
    */

void __rustcall
<alloc::io::buffered::bufreader::buffer::alloc::io::buffered::bufreader::buffer::Buffer>::backshift
          (undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1[3];
  if ((ulong)param_1[1] < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar2,param_1[1],&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff308);
  }
  uVar1 = param_1[2];
  if (uVar1 <= uVar2) {
    memmove((void *)*param_1,(void *)((long)*param_1 + uVar1),uVar2 - uVar1);
    param_1[2] = 0;
    param_1[3] = uVar2 - uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 00a8d134  <<alloc::io::buffered::bufwriter::alloc::io::buffered::bufwriter::BufWriter<_>>::flush_buf::<alloc::io::buffered::bufwriter::alloc::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard>::remaining =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<alloc::io::buffered::bufwriter::alloc::io::buffered::bufwriter::BufWriter<_>>::flush_buf::<alloc::io::buffered::bufwriter::alloc::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard>::remaining
    */

undefined1  [16] __rustcall
<<alloc::io::buffered::bufwriter::alloc::io::buffered::bufwriter::BufWriter<_>>::flush_buf::<alloc::io::buffered::bufwriter::alloc::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard>
::remaining(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1[1];
  uVar2 = *(ulong *)(*param_1 + 0x10);
  if (uVar1 <= uVar2) {
    auVar3._8_8_ = uVar2 - uVar1;
    auVar3._0_8_ = *(long *)(*param_1 + 8) + uVar1;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar1,uVar2,uVar2,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff1e8);
}


// ===== 00a8d16c  <alloc::string::[19]::alloc::string::Drain>::as_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::[19]::alloc::string::Drain>::as_str */

undefined1  [16] __rustcall <alloc::string::[19]::alloc::string::Drain>::as_str(long *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_1[1] - *param_1;
  auVar1._0_8_ = *param_1;
  return auVar1;
}


// ===== 00a8d17c  <alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::into_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::into_string */

void __rustcall
<alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::into_string(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (((*(byte *)(param_2 + 3) & 1) == 0) && (param_2[2] != 0)) {
    pbVar1 = (byte *)param_2[1] + param_2[2];
    pbVar5 = (byte *)param_2[1];
    do {
      pbVar4 = pbVar5 + 1;
      bVar2 = *pbVar5;
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xe0) {
          if (pbVar4 != pbVar1) {
            pbVar4 = pbVar5 + 2;
          }
        }
        else if (bVar2 == 0xed) {
          if ((pbVar4 == pbVar1) || (pbVar5 + 2 == pbVar1)) break;
          if (0x9f < pbVar5[1]) {
            uVar3 = *param_2;
            uVar7 = param_2[3];
            uVar6 = param_2[2];
            param_1[1] = param_2[1];
            *param_1 = uVar3;
            param_1[3] = uVar7;
            param_1[2] = uVar6;
            return;
          }
          pbVar4 = pbVar5 + 3;
        }
        else {
          if (pbVar4 != pbVar1) {
            pbVar4 = pbVar5 + 2;
          }
          if (pbVar4 != pbVar1) {
            pbVar4 = pbVar4 + 1;
          }
          if ((0xef < bVar2) && (pbVar4 != pbVar1)) {
            pbVar4 = pbVar4 + 1;
          }
        }
      }
      pbVar5 = pbVar4;
    } while (pbVar4 != pbVar1);
  }
  uVar7 = param_2[1];
  uVar6 = *param_2;
  uVar3 = param_2[2];
  *param_1 = 0xffffffffffffffff;
  param_1[2] = uVar7;
  param_1[1] = uVar6;
  param_1[3] = uVar3;
  return;
}


// ===== 00a8d248  <alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::into_string_lossy =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::into_string_lossy */

void __rustcall
<alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::into_string_lossy(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  if (((*(byte *)(param_2 + 3) & 1) != 0) || (uVar6 = param_2[2], uVar6 == 0)) {
LAB_00a8d358:
    uVar12 = *param_2;
    uVar7 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar12;
    param_1[2] = uVar7;
    return;
  }
  lVar11 = param_2[1];
  pbVar3 = (byte *)(lVar11 + uVar6);
  uVar5 = 0;
LAB_00a8d27c:
  pbVar8 = (byte *)(lVar11 + uVar5);
  do {
    pbVar9 = pbVar8 + 1;
    bVar4 = *pbVar8;
    if ((char)bVar4 < '\0') {
      if (bVar4 < 0xe0) {
        pbVar1 = pbVar8 + 2;
        lVar10 = 2;
        pbVar8 = pbVar9;
        if (pbVar9 != pbVar3) {
          pbVar8 = pbVar1;
        }
      }
      else if (bVar4 == 0xed) {
        if ((pbVar9 == pbVar3) || (pbVar8 + 2 == pbVar3)) goto LAB_00a8d358;
        if (0x9f < pbVar8[1]) break;
        lVar10 = 3;
        pbVar8 = pbVar8 + 3;
      }
      else {
        if (pbVar9 != pbVar3) {
          pbVar9 = pbVar8 + 2;
        }
        if (pbVar9 != pbVar3) {
          pbVar9 = pbVar9 + 1;
        }
        pbVar8 = pbVar9;
        if (bVar4 < 0xf0) {
          lVar10 = 3;
        }
        else {
          lVar10 = 4;
          if (pbVar9 != pbVar3) {
            pbVar8 = pbVar9 + 1;
          }
        }
      }
    }
    else {
      lVar10 = 1;
      pbVar8 = pbVar9;
    }
    uVar5 = lVar10 + uVar5;
    if (pbVar8 == pbVar3) goto LAB_00a8d358;
  } while( true );
  uVar2 = uVar5 + 3;
  if ((0xfffffffffffffffc < uVar5) || (uVar6 < uVar2)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail();
  }
  *(undefined1 *)((undefined2 *)(lVar11 + uVar5) + 1) = 0xbd;
  *(undefined2 *)(lVar11 + uVar5) = 0xbfef;
  uVar5 = uVar2;
  if (uVar2 == uVar6) goto LAB_00a8d358;
  goto LAB_00a8d27c;
}


// ===== 00a8d3a4  <alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::push_code_point_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::push_code_point_unchecked */

void __rustcall
<alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::push_code_point_unchecked(long *param_1,uint param_2)

{
  undefined1 uVar1;
  byte bVar2;
  ulong __n;
  long lVar3;
  uint local_14;
  
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    __n = 1;
  }
  else if (param_2 < 0x800) {
    __n = 2;
    local_14 = CONCAT11(uVar1,(char)(param_2 >> 6)) & 0xffff3fff | 0x80c0;
  }
  else {
    bVar2 = (byte)(param_2 >> 6);
    if (param_2 >> 0x10 == 0) {
      local_14._0_2_ = (bVar2 & 0xff3f | 0x80) << 8;
      __n = 3;
      local_14 = CONCAT31(CONCAT12(uVar1,(short)local_14) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff |
                 0x8000e0;
    }
    else {
      __n = 4;
      local_14 = CONCAT31(CONCAT21(CONCAT11(uVar1,bVar2),(char)(param_2 >> 0xc)),
                          (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
    }
  }
  lVar3 = param_1[2];
  if ((ulong)(*param_1 - lVar3) < __n) {
    FUN_00a8b8b8(param_1,lVar3,__n);
    lVar3 = param_1[2];
  }
  memcpy((void *)(param_1[1] + lVar3),&local_14,__n);
  param_1[2] = lVar3 + __n;
  return;
}


// ===== 00a8d4a0  <alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::from_box =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::from_box */

void __rustcall
<alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::from_box
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


// ===== 00a8d4b0  <alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::from_wide =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::from_wide */

void __rustcall
<alloc::wtf8::[2]::alloc::wtf8::Wtf8Buf>::from_wide(long *param_1,ushort *param_2,long param_3)

{
  ushort *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ushort *puVar12;
  long lVar13;
  uint uVar14;
  size_t __n;
  uint uVar15;
  long local_88;
  long lStack_80;
  long local_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  uint local_64;
  
  if (param_3 == 0) {
    lStack_80 = 1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lStack_80 = FUN_004b25a4(param_3,1);
    if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
  }
  puVar1 = param_2 + param_3;
  uVar15 = 0;
  local_78 = 0;
  uStack_70 = 1;
  local_88 = param_3;
LAB_00a8d524:
  if (param_2 == puVar1) {
LAB_00a8d868:
    param_1[1] = lStack_80;
    *param_1 = local_88;
    param_1[3] = CONCAT71(uStack_6f,uStack_70);
    param_1[2] = local_78;
    return;
  }
  puVar12 = param_2 + 1;
  uVar3 = *param_2;
  uVar10 = (ulong)uVar3;
  param_2 = puVar12;
  if ((uVar3 & 0xf800) == 0xd800) goto LAB_00a8d5b4;
LAB_00a8d53c:
  bVar8 = (byte)uVar10;
  if (0x7f < (uint)uVar10) {
    uVar10 = uVar10 << 0x10;
    goto joined_r0x00a8d578;
  }
  local_64 = (uint)bVar8;
  __n = 1;
  lVar13 = lStack_80;
  if (local_88 != local_78) goto LAB_00a8d6cc;
  do {
                    /* try { // try from 00a8d69c to 00a8d6ab has its CatchHandler @ 00a8d8a4 */
    FUN_00a8b8b8(&local_88,local_78,__n);
    lVar13 = lStack_80;
LAB_00a8d6cc:
    do {
      while( true ) {
        lVar7 = local_78;
        memcpy((void *)(lVar13 + local_78),&local_64,__n);
        local_78 = lVar7 + __n;
        if (param_2 == puVar1) goto LAB_00a8d868;
        puVar12 = param_2 + 1;
        uVar3 = *param_2;
        if ((uVar3 & 0xf800) == 0xd800) break;
        bVar8 = (byte)uVar3;
        if (uVar3 < 0x80) {
          local_64 = (uint)bVar8;
          __n = 1;
        }
        else {
          uVar10 = (ulong)uVar3 << 0x10;
joined_r0x00a8d740:
          if (uVar10 >> 0x1b == 0) {
            local_64 = (uint)(bVar8 & 0x3f | 0x80) << 8;
            __n = 2;
            bVar8 = (byte)(uVar10 >> 0x16) | 0xc0;
          }
          else {
            bVar5 = (byte)((uint)uVar10 >> 0x16);
            if (uVar10 >> 0x20 != 0) {
              __n = 4;
              local_64 = CONCAT22(CONCAT11(bVar8,bVar5),
                                  CONCAT11((char)(uVar10 >> 0x1c),(char)(uint)(uVar10 >> 0x22))) &
                         0x3f3f3fff | 0x808080f0;
              goto LAB_00a8d6bc;
            }
            local_64._0_2_ = (bVar5 & 0xff3f | 0x80) << 8;
            __n = 3;
            local_64._0_3_ = CONCAT12(bVar8,(short)local_64) & 0x3fffff | 0x800000;
            local_64 = (uint)(uint3)local_64;
            bVar8 = (byte)(uVar10 >> 0x1c) | 0xe0;
          }
          local_64 = CONCAT31(local_64._1_3_,bVar8);
        }
LAB_00a8d6bc:
        param_2 = puVar12;
        if ((ulong)(local_88 - local_78) < __n) {
                    /* try { // try from 00a8d83c to 00a8d84b has its CatchHandler @ 00a8d8ac */
          FUN_00a8b8b8(&local_88,local_78,__n);
          lVar13 = lStack_80;
        }
      }
      if (uVar3 >> 10 < 0x37) {
        if (puVar12 == puVar1) {
          bVar6 = false;
          puVar12 = puVar1;
        }
        else {
          uVar4 = *puVar12;
          puVar12 = param_2 + 2;
          if (0xfffffbff < uVar4 - 0xe000) {
            uVar10 = (((ulong)uVar4 & 0x3ff) << 0x10 | ((ulong)uVar3 & 0x3ff) << 0x1a) + 0x100000000
            ;
            bVar8 = (byte)(uVar10 >> 0x10);
            goto joined_r0x00a8d740;
          }
          bVar6 = true;
          uVar15 = (uint)uVar4;
        }
      }
      else {
        bVar6 = false;
      }
      uVar14 = uVar3 >> 6 & 0xff;
      uVar11 = uVar3 & 0xff;
      param_2 = puVar12;
      while( true ) {
        while( true ) {
          while( true ) {
            uStack_70 = 0;
            if ((ulong)(local_88 - local_78) < 3) {
                    /* try { // try from 00a8d850 to 00a8d85f has its CatchHandler @ 00a8d8a8 */
              FUN_00a8b8b8(&local_88,local_78,3);
            }
            puVar2 = (undefined1 *)(lStack_80 + local_78);
            local_78 = local_78 + 3;
            *puVar2 = 0xed;
            puVar2[1] = (byte)uVar14 & 0x3f | 0x80;
            puVar2[2] = (byte)uVar11 & 0x3f | 0x80;
            if (!bVar6) goto LAB_00a8d524;
            uVar10 = (ulong)uVar15;
            if ((uVar15 & 0xf800) != 0xd800) goto LAB_00a8d53c;
LAB_00a8d5b4:
            uVar9 = (uint)uVar10;
            uVar14 = uVar9 >> 6 & 0xff;
            uVar11 = uVar9 & 0xff;
            if ((uint)(uVar10 >> 10) < 0x37) break;
            bVar6 = false;
          }
          if (param_2 != puVar1) break;
          bVar6 = false;
          param_2 = puVar1;
        }
        uVar3 = *param_2;
        if (0xfffffbff < uVar3 - 0xe000) break;
        uVar11 = uVar9 & 0xff;
        bVar6 = true;
        param_2 = param_2 + 1;
        uVar15 = (uint)uVar3;
      }
      uVar10 = (((ulong)uVar3 & 0x3ff) << 0x10 | (ulong)(uVar9 & 0x3ff) << 0x1a) + 0x100000000;
      bVar8 = (byte)(uVar10 >> 0x10);
      param_2 = param_2 + 1;
joined_r0x00a8d578:
      lVar13 = lStack_80;
      if (uVar10 >> 0x1b != 0) {
        bVar5 = (byte)((uint)uVar10 >> 0x16);
        if (uVar10 >> 0x20 == 0) {
          local_64._0_2_ = (bVar5 & 0xff3f | 0x80) << 8;
          __n = 3;
          local_64._0_3_ = CONCAT12(bVar8,(short)local_64) & 0x3fffff | 0x800000;
          local_64 = CONCAT31((uint3)local_64 >> 8,(char)(uVar10 >> 0x1c)) | 0xe0;
          if ((ulong)(local_88 - local_78) < 3) break;
        }
        else {
          __n = 4;
          local_64 = CONCAT22(CONCAT11(bVar8,bVar5),
                              CONCAT11((char)(uVar10 >> 0x1c),(char)(uint)(uVar10 >> 0x22))) &
                     0x3f3f3fff | 0x808080f0;
          if ((ulong)(local_88 - local_78) < 4) break;
        }
        goto LAB_00a8d6cc;
      }
      __n = 2;
      local_64 = (CONCAT11(bVar8,(char)(uVar10 >> 0x16)) & 0x3fff | 0x8000) | 0xc0;
    } while (1 < (ulong)(local_88 - local_78));
  } while( true );
}


// ===== 00a8d8cc  <alloc::str::[3]::str>::to_lowercase =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::str::[3]::str>::to_lowercase */

void __rustcall <alloc::str::[3]::str>::to_lowercase(ulong *param_1,byte *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulong local_88;
  byte *pbStack_80;
  ulong local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  if ((long)param_3 < 0) {
    uVar14 = 0;
LAB_00a8e098:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar14,param_3);
  }
  local_88 = param_3;
  if (param_3 == 0) {
    local_78 = 0;
    pbStack_80 = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar14 = 1;
    pbVar6 = (byte *)FUN_004b25a4(param_3,1);
    if (pbVar6 == (byte *)0x0) goto LAB_00a8e098;
    uVar10 = param_3;
    pbStack_80 = pbVar6;
    if (param_3 < 0x10) {
      uVar11 = 0;
      pbVar7 = param_2;
      pbVar9 = pbVar6;
    }
    else {
      uVar11 = 0;
      local_78 = param_3 & 0x7ffffffffffffff0;
      do {
        pbVar7 = param_2 + uVar11;
        uVar2 = *(undefined8 *)(pbVar7 + 8);
        bVar25 = (byte)((ulong)uVar2 >> 8);
        bVar26 = (byte)((ulong)uVar2 >> 0x10);
        bVar27 = (byte)((ulong)uVar2 >> 0x18);
        bVar28 = (byte)((ulong)uVar2 >> 0x20);
        bVar29 = (byte)((ulong)uVar2 >> 0x28);
        bVar30 = (byte)((ulong)uVar2 >> 0x30);
        bVar31 = (byte)((ulong)uVar2 >> 0x38);
        uVar14 = *(undefined8 *)pbVar7;
        bVar4 = (byte)((ulong)uVar14 >> 8);
        bVar19 = (byte)((ulong)uVar14 >> 0x10);
        bVar20 = (byte)((ulong)uVar14 >> 0x18);
        bVar21 = (byte)((ulong)uVar14 >> 0x20);
        bVar22 = (byte)((ulong)uVar14 >> 0x28);
        bVar23 = (byte)((ulong)uVar14 >> 0x30);
        bVar24 = (byte)((ulong)uVar14 >> 0x38);
        auVar33[9] = bVar25;
        auVar33._0_9_ = *(unkbyte9 *)pbVar7;
        auVar33[10] = bVar26;
        auVar33[0xb] = bVar27;
        auVar33[0xc] = bVar28;
        auVar33[0xd] = bVar29;
        auVar33[0xe] = bVar30;
        auVar33[0xf] = bVar31;
        auVar33 = NEON_cmlt(auVar33,0,1);
        bVar32 = NEON_umaxv(auVar33,1);
        if ((bVar32 & 1) != 0) {
          pbVar7 = param_2 + uVar11;
          pbVar9 = pbVar6 + uVar11;
          goto LAB_00a8d9b0;
        }
        auVar34[0] = (byte)uVar14 + 0xbf;
        auVar34[1] = bVar4 + 0xbf;
        auVar34[2] = bVar19 + 0xbf;
        auVar34[3] = bVar20 + 0xbf;
        auVar34[4] = bVar21 + 0xbf;
        auVar34[5] = bVar22 + 0xbf;
        auVar34[6] = bVar23 + 0xbf;
        auVar34[7] = bVar24 + 0xbf;
        auVar34[8] = (byte)uVar2 + 0xbf;
        auVar34[9] = bVar25 + 0xbf;
        auVar34[10] = bVar26 + 0xbf;
        auVar34[0xb] = bVar27 + 0xbf;
        auVar34[0xc] = bVar28 + 0xbf;
        auVar34[0xd] = bVar29 + 0xbf;
        auVar34[0xe] = bVar30 + 0xbf;
        auVar34[0xf] = bVar31 + 0xbf;
        uVar10 = uVar10 - 0x10;
        auVar1[8] = 0x1a;
        auVar1._0_8_ = 0x1a1a1a1a1a1a1a1a;
        auVar1[9] = 0x1a;
        auVar1[10] = 0x1a;
        auVar1[0xb] = 0x1a;
        auVar1[0xc] = 0x1a;
        auVar1[0xd] = 0x1a;
        auVar1[0xe] = 0x1a;
        auVar1[0xf] = 0x1a;
        auVar33 = NEON_cmhi(auVar1,auVar34,1);
        uVar16 = auVar33._0_8_ & 0x2020202020202020;
        *(ulong *)(pbVar6 + uVar11 + 8) =
             CONCAT17(auVar33[0xf] & 0x20 | bVar31,
                      CONCAT16(auVar33[0xe] & 0x20 | bVar30,
                               CONCAT15(auVar33[0xd] & 0x20 | bVar29,
                                        CONCAT14(auVar33[0xc] & 0x20 | bVar28,
                                                 CONCAT13(auVar33[0xb] & 0x20 | bVar27,
                                                          CONCAT12(auVar33[10] & 0x20 | bVar26,
                                                                   CONCAT11(auVar33[9] & 0x20 |
                                                                            bVar25,auVar33[8] & 0x20
                                                                                   | (byte)uVar2))))
                                       )));
        *(ulong *)(pbVar6 + uVar11) =
             CONCAT17((byte)(uVar16 >> 0x38) | bVar24,
                      CONCAT16((byte)(uVar16 >> 0x30) | bVar23,
                               CONCAT15((byte)(uVar16 >> 0x28) | bVar22,
                                        CONCAT14((byte)(uVar16 >> 0x20) | bVar21,
                                                 CONCAT13((byte)(uVar16 >> 0x18) | bVar20,
                                                          CONCAT12((byte)(uVar16 >> 0x10) | bVar19,
                                                                   CONCAT11((byte)(uVar16 >> 8) |
                                                                            bVar4,(byte)uVar16 |
                                                                                  (byte)uVar14))))))
                     );
        uVar11 = uVar11 + 0x10;
      } while (0xf < uVar10);
      if (uVar10 == 0) goto LAB_00a8d9f4;
      pbVar9 = pbVar6 + uVar11;
      pbVar7 = param_2 + uVar11;
      uVar11 = local_78;
    }
LAB_00a8d9b0:
    lVar12 = -uVar11;
    local_78 = uVar10 + uVar11;
    do {
      bVar4 = *pbVar7;
      if ((char)bVar4 < '\0') {
        uVar11 = -lVar12;
        local_78 = uVar11;
        if (uVar10 != 0) {
          pbVar9 = (byte *)0x0;
          pbVar8 = pbVar7;
          goto LAB_00a8da74;
        }
        break;
      }
      uVar10 = uVar10 - 1;
      pbVar7 = pbVar7 + 1;
      lVar12 = lVar12 + -1;
      bVar19 = 0x20;
      if (0x19 < bVar4 - 0x41) {
        bVar19 = 0;
      }
      *pbVar9 = bVar19 | bVar4;
      pbVar9 = pbVar9 + 1;
    } while (uVar10 != 0);
  }
  goto LAB_00a8d9f4;
LAB_00a8da74:
  do {
    pbVar18 = pbVar8 + 1;
    uVar5 = (uint)*pbVar8;
    local_78 = uVar11;
    if ((char)*pbVar8 < '\0') {
      if (uVar5 < 0xe0) {
        uVar5 = pbVar8[1] & 0x3f | (uVar5 & 0x1f) << 6;
        pbVar18 = pbVar8 + 2;
        pbVar8 = pbVar18 + ((long)pbVar9 - (long)pbVar8);
      }
      else {
        uVar13 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
        if (uVar5 < 0xf0) {
          uVar5 = uVar13 | (uVar5 & 0x1f) << 0xc;
          pbVar18 = pbVar8 + 3;
          pbVar8 = pbVar18 + ((long)pbVar9 - (long)pbVar8);
        }
        else {
          pbVar18 = pbVar8 + 4;
          uVar5 = pbVar8[3] & 0x3f | uVar13 << 6 | (uVar5 & 7) << 0x12;
          pbVar8 = pbVar18 + ((long)pbVar9 - (long)pbVar8);
        }
      }
      if (uVar5 != 0x3a3) goto LAB_00a8da8c;
      bVar4 = FUN_00a90bbc(param_2,param_3,(long)pbVar9 - lVar12);
      if (local_88 - uVar11 < 2) {
        FUN_00a8b8b8(&local_88,uVar11,2);
      }
      pbVar6 = pbStack_80 + uVar11;
      uVar11 = uVar11 + 2;
      *pbVar6 = 0xcf;
      pbVar6[1] = bVar4 & 0x83;
      pbVar6 = pbStack_80;
      pbVar9 = pbVar8;
    }
    else {
      pbVar8 = pbVar18 + ((long)pbVar9 - (long)pbVar8);
LAB_00a8da8c:
                    /* try { // try from 00a8da8c to 00a8e08f has its CatchHandler @ 00a8e0a4 */
      core::unicode::unicode_data::conversions::to_lower(&local_6c,uVar5);
      uVar3 = local_64;
      uVar5 = local_68;
      uVar13 = local_6c;
      pbVar9 = pbVar8;
      if (local_68 == 0) {
        if (local_6c < 0x80) {
          uVar16 = 1;
        }
        else if (local_6c < 0x800) {
          uVar16 = 2;
        }
        else {
          uVar16 = 3;
          if (0xffff < local_6c) {
            uVar16 = 4;
          }
        }
        if (uVar16 <= local_88 - uVar11) goto LAB_00a8de00;
        FUN_00a8b8b8(&local_88,uVar11,uVar16);
LAB_00a8dedc:
        pbVar8 = pbStack_80 + uVar11;
        pbVar6 = pbStack_80;
        if (0x7f < uVar13) goto LAB_00a8de0c;
LAB_00a8da54:
        *pbVar8 = (byte)uVar13;
LAB_00a8da58:
        uVar11 = uVar16 + uVar11;
      }
      else {
        bVar19 = (byte)local_6c;
        bVar4 = (byte)local_68;
        if (local_64 == 0) {
          if (0x7f < local_6c) {
            if (local_6c < 0x800) {
              uVar17 = 2;
            }
            else {
              uVar17 = 3;
              if (0xffff < local_6c) {
                uVar17 = 4;
              }
            }
          }
          else {
            uVar17 = 1;
          }
          if (local_88 - uVar11 < uVar17) {
            FUN_00a8b8b8(&local_88,uVar11,uVar17);
            pbVar6 = pbStack_80 + uVar11;
            if (0x7f < uVar13) goto LAB_00a8df10;
LAB_00a8dc70:
            *pbVar6 = bVar19;
joined_r0x00a8df3c:
            if (uVar5 < 0x80) goto LAB_00a8dc84;
LAB_00a8df40:
            if (uVar5 < 0x800) {
              uVar16 = 2;
            }
            else {
              uVar16 = 3;
              if (0xffff < uVar5) {
                uVar16 = 4;
              }
            }
          }
          else {
            pbVar6 = pbVar6 + uVar11;
            if (local_6c < 0x80) goto LAB_00a8dc70;
LAB_00a8df10:
            bVar19 = bVar19 & 0x3f | 0x80;
            if (uVar13 < 0x800) {
              pbVar6[1] = bVar19;
              *pbVar6 = (byte)(uVar13 >> 6) | 0xc0;
              goto joined_r0x00a8df3c;
            }
            bVar20 = (byte)(uVar13 >> 6) & 0x3f | 0x80;
            if (uVar13 >> 0x10 == 0) {
              pbVar6[1] = bVar20;
              pbVar6[2] = bVar19;
              *pbVar6 = (byte)(uVar13 >> 0xc) | 0xe0;
              goto joined_r0x00a8df3c;
            }
            pbVar6[2] = bVar20;
            pbVar6[3] = bVar19;
            *pbVar6 = (byte)(uVar13 >> 0x12) | 0xf0;
            pbVar6[1] = (byte)(uVar13 >> 0xc) & 0x3f | 0x80;
            if (0x7f < uVar5) goto LAB_00a8df40;
LAB_00a8dc84:
            uVar16 = 1;
          }
          uVar11 = uVar17 + uVar11;
          if (local_88 - uVar11 < uVar16) {
            local_78 = uVar11;
            FUN_00a8b8b8(&local_88,uVar11,uVar16);
          }
          pbVar8 = pbStack_80 + uVar11;
          pbVar6 = pbStack_80;
          if (uVar5 < 0x80) {
            *pbVar8 = bVar4;
            goto LAB_00a8da58;
          }
          bVar4 = bVar4 & 0x3f | 0x80;
          if (uVar5 < 0x800) {
LAB_00a8dfd0:
            pbVar8[1] = bVar4;
            uVar11 = uVar16 + uVar11;
            *pbVar8 = (byte)(uVar5 >> 6) | 0xc0;
          }
          else {
            bVar19 = (byte)(uVar5 >> 6) & 0x3f | 0x80;
            if (uVar5 >> 0x10 == 0) goto LAB_00a8dff8;
            pbVar8[2] = bVar19;
            bVar19 = (byte)(uVar5 >> 0xc);
LAB_00a8e054:
            pbVar8[1] = bVar19 & 0x3f | 0x80;
            uVar11 = uVar16 + uVar11;
            *pbVar8 = (byte)(uVar5 >> 0x12) | 0xf0;
            pbVar8[3] = bVar4;
          }
        }
        else {
          if (0x7f < local_6c) {
            if (local_6c < 0x800) {
              uVar16 = 2;
            }
            else {
              uVar16 = 3;
              if (0xffff < local_6c) {
                uVar16 = 4;
              }
            }
          }
          else {
            uVar16 = 1;
          }
          if (local_88 - uVar11 < uVar16) {
            FUN_00a8b8b8(&local_88,uVar11,uVar16);
            pbVar6 = pbStack_80 + uVar11;
            if (0x7f < uVar13) goto LAB_00a8dcac;
LAB_00a8dbfc:
            *pbVar6 = bVar19;
joined_r0x00a8dc0c:
            if (uVar5 < 0x80) goto LAB_00a8dc10;
LAB_00a8dcdc:
            if (uVar5 < 0x800) {
              uVar17 = 2;
            }
            else {
              uVar17 = 3;
              if (0xffff < uVar5) {
                uVar17 = 4;
              }
            }
          }
          else {
            pbVar6 = pbVar6 + uVar11;
            if (local_6c < 0x80) goto LAB_00a8dbfc;
LAB_00a8dcac:
            bVar19 = bVar19 & 0x3f | 0x80;
            if (uVar13 < 0x800) {
              pbVar6[1] = bVar19;
              *pbVar6 = (byte)(uVar13 >> 6) | 0xc0;
              goto joined_r0x00a8dc0c;
            }
            bVar20 = (byte)(uVar13 >> 6) & 0x3f | 0x80;
            if (uVar13 >> 0x10 == 0) {
              pbVar6[1] = bVar20;
              pbVar6[2] = bVar19;
              *pbVar6 = (byte)(uVar13 >> 0xc) | 0xe0;
              goto joined_r0x00a8dc0c;
            }
            pbVar6[2] = bVar20;
            pbVar6[3] = bVar19;
            *pbVar6 = (byte)(uVar13 >> 0x12) | 0xf0;
            pbVar6[1] = (byte)(uVar13 >> 0xc) & 0x3f | 0x80;
            if (0x7f < uVar5) goto LAB_00a8dcdc;
LAB_00a8dc10:
            uVar17 = 1;
          }
          lVar15 = uVar16 + uVar11;
          if (local_88 - lVar15 < uVar17) {
            local_78 = lVar15;
            FUN_00a8b8b8(&local_88,lVar15,uVar17);
          }
          pbVar6 = pbStack_80 + lVar15;
          if (uVar5 < 0x80) {
            *pbVar6 = bVar4;
joined_r0x00a8deb0:
            if (0x7f < uVar3) goto LAB_00a8dd9c;
LAB_00a8dd64:
            uVar16 = 1;
          }
          else {
            bVar4 = bVar4 & 0x3f | 0x80;
            if (uVar5 < 0x800) {
              pbVar6[1] = bVar4;
              *pbVar6 = (byte)(uVar5 >> 6) | 0xc0;
              goto joined_r0x00a8deb0;
            }
            bVar19 = (byte)(uVar5 >> 6) & 0x3f | 0x80;
            if (uVar5 >> 0x10 != 0) {
              pbVar6[2] = bVar19;
              pbVar6[3] = bVar4;
              *pbVar6 = (byte)(uVar5 >> 0x12) | 0xf0;
              pbVar6[1] = (byte)(uVar5 >> 0xc) & 0x3f | 0x80;
              goto joined_r0x00a8deb0;
            }
            pbVar6[1] = bVar19;
            pbVar6[2] = bVar4;
            *pbVar6 = (byte)(uVar5 >> 0xc) | 0xe0;
            if (uVar3 < 0x80) goto LAB_00a8dd64;
LAB_00a8dd9c:
            if (uVar3 < 0x800) {
              uVar16 = 2;
            }
            else {
              uVar16 = 3;
              if (0xffff < uVar3) {
                uVar16 = 4;
              }
            }
          }
          uVar11 = uVar17 + lVar15;
          pbVar6 = pbStack_80;
          uVar13 = uVar3;
          if (local_88 - uVar11 < uVar16) {
            local_78 = uVar11;
            FUN_00a8b8b8(&local_88,uVar11,uVar16);
            goto LAB_00a8dedc;
          }
LAB_00a8de00:
          pbVar8 = pbVar6 + uVar11;
          if (uVar13 < 0x80) goto LAB_00a8da54;
LAB_00a8de0c:
          bVar4 = (byte)uVar13 & 0x3f | 0x80;
          uVar5 = uVar13;
          if (uVar13 < 0x800) goto LAB_00a8dfd0;
          bVar19 = (byte)(uVar13 >> 6) & 0x3f | 0x80;
          if (uVar13 >> 0x10 != 0) {
            pbVar8[2] = bVar19;
            bVar19 = (byte)(uVar13 >> 0xc);
            goto LAB_00a8e054;
          }
LAB_00a8dff8:
          pbVar8[1] = bVar19;
          uVar11 = uVar16 + uVar11;
          *pbVar8 = (byte)(uVar5 >> 0xc) | 0xe0;
          pbVar8[2] = bVar4;
        }
      }
    }
    pbVar8 = pbVar18;
    local_78 = uVar11;
  } while (pbVar18 != pbVar7 + uVar10);
LAB_00a8d9f4:
  param_1[1] = (ulong)pbStack_80;
  *param_1 = local_88;
  param_1[2] = local_78;
  return;
}


// ===== 00a8e0c4  <alloc::str::[3]::str>::to_uppercase =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::str::[3]::str>::to_uppercase */

void __rustcall <alloc::str::[3]::str>::to_uppercase(ulong *param_1,byte *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulong local_88;
  byte *pbStack_80;
  ulong local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  if ((long)param_3 < 0) {
    uVar8 = 0;
LAB_00a8e7c8:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar8,param_3);
  }
  local_88 = param_3;
  if (param_3 == 0) {
    local_78 = 0;
    pbStack_80 = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar8 = 1;
    pbVar4 = (byte *)FUN_004b25a4(param_3,1);
    if (pbVar4 == (byte *)0x0) goto LAB_00a8e7c8;
    pbStack_80 = pbVar4;
    if (param_3 < 0x10) {
      uVar7 = 0;
      pbVar6 = pbVar4;
    }
    else {
      uVar7 = 0;
      local_78 = param_3 & 0x7ffffffffffffff0;
      do {
        pbVar6 = param_2 + uVar7;
        uVar2 = *(undefined8 *)(pbVar6 + 8);
        bVar21 = (byte)((ulong)uVar2 >> 8);
        bVar22 = (byte)((ulong)uVar2 >> 0x10);
        bVar23 = (byte)((ulong)uVar2 >> 0x18);
        bVar24 = (byte)((ulong)uVar2 >> 0x20);
        bVar25 = (byte)((ulong)uVar2 >> 0x28);
        bVar26 = (byte)((ulong)uVar2 >> 0x30);
        bVar27 = (byte)((ulong)uVar2 >> 0x38);
        uVar8 = *(undefined8 *)pbVar6;
        bVar14 = (byte)((ulong)uVar8 >> 8);
        bVar15 = (byte)((ulong)uVar8 >> 0x10);
        bVar16 = (byte)((ulong)uVar8 >> 0x18);
        bVar17 = (byte)((ulong)uVar8 >> 0x20);
        bVar18 = (byte)((ulong)uVar8 >> 0x28);
        bVar19 = (byte)((ulong)uVar8 >> 0x30);
        bVar20 = (byte)((ulong)uVar8 >> 0x38);
        auVar29[9] = bVar21;
        auVar29._0_9_ = *(unkbyte9 *)pbVar6;
        auVar29[10] = bVar22;
        auVar29[0xb] = bVar23;
        auVar29[0xc] = bVar24;
        auVar29[0xd] = bVar25;
        auVar29[0xe] = bVar26;
        auVar29[0xf] = bVar27;
        auVar29 = NEON_cmlt(auVar29,0,1);
        bVar28 = NEON_umaxv(auVar29,1);
        if ((bVar28 & 1) != 0) {
          param_2 = param_2 + uVar7;
          pbVar6 = pbVar4 + uVar7;
          goto LAB_00a8e1a4;
        }
        auVar30[0] = (byte)uVar8 + 0x9f;
        auVar30[1] = bVar14 + 0x9f;
        auVar30[2] = bVar15 + 0x9f;
        auVar30[3] = bVar16 + 0x9f;
        auVar30[4] = bVar17 + 0x9f;
        auVar30[5] = bVar18 + 0x9f;
        auVar30[6] = bVar19 + 0x9f;
        auVar30[7] = bVar20 + 0x9f;
        auVar30[8] = (byte)uVar2 + 0x9f;
        auVar30[9] = bVar21 + 0x9f;
        auVar30[10] = bVar22 + 0x9f;
        auVar30[0xb] = bVar23 + 0x9f;
        auVar30[0xc] = bVar24 + 0x9f;
        auVar30[0xd] = bVar25 + 0x9f;
        auVar30[0xe] = bVar26 + 0x9f;
        auVar30[0xf] = bVar27 + 0x9f;
        param_3 = param_3 - 0x10;
        auVar1[8] = 0x1a;
        auVar1._0_8_ = 0x1a1a1a1a1a1a1a1a;
        auVar1[9] = 0x1a;
        auVar1[10] = 0x1a;
        auVar1[0xb] = 0x1a;
        auVar1[0xc] = 0x1a;
        auVar1[0xd] = 0x1a;
        auVar1[0xe] = 0x1a;
        auVar1[0xf] = 0x1a;
        auVar29 = NEON_cmhi(auVar1,auVar30,1);
        uVar10 = auVar29._0_8_ & 0x2020202020202020;
        *(ulong *)(pbVar4 + uVar7 + 8) =
             CONCAT17(auVar29[0xf] & 0x20 ^ bVar27,
                      CONCAT16(auVar29[0xe] & 0x20 ^ bVar26,
                               CONCAT15(auVar29[0xd] & 0x20 ^ bVar25,
                                        CONCAT14(auVar29[0xc] & 0x20 ^ bVar24,
                                                 CONCAT13(auVar29[0xb] & 0x20 ^ bVar23,
                                                          CONCAT12(auVar29[10] & 0x20 ^ bVar22,
                                                                   CONCAT11(auVar29[9] & 0x20 ^
                                                                            bVar21,auVar29[8] & 0x20
                                                                                   ^ (byte)uVar2))))
                                       )));
        *(ulong *)(pbVar4 + uVar7) =
             CONCAT17((byte)(uVar10 >> 0x38) ^ bVar20,
                      CONCAT16((byte)(uVar10 >> 0x30) ^ bVar19,
                               CONCAT15((byte)(uVar10 >> 0x28) ^ bVar18,
                                        CONCAT14((byte)(uVar10 >> 0x20) ^ bVar17,
                                                 CONCAT13((byte)(uVar10 >> 0x18) ^ bVar16,
                                                          CONCAT12((byte)(uVar10 >> 0x10) ^ bVar15,
                                                                   CONCAT11((byte)(uVar10 >> 8) ^
                                                                            bVar14,(byte)uVar10 ^
                                                                                   (byte)uVar8))))))
                     );
        uVar7 = uVar7 + 0x10;
      } while (0xf < param_3);
      if (param_3 == 0) goto LAB_00a8e1e8;
      pbVar6 = pbVar4 + uVar7;
      param_2 = param_2 + uVar7;
      uVar7 = local_78;
    }
LAB_00a8e1a4:
    local_78 = param_3 + uVar7;
    do {
      bVar14 = *param_2;
      if ((char)bVar14 < '\0') {
        local_78 = uVar7;
        if (param_3 != 0) {
          pbVar6 = param_2;
          goto LAB_00a8e244;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      param_2 = param_2 + 1;
      bVar15 = 0x20;
      if (0x19 < bVar14 - 0x61) {
        bVar15 = 0;
      }
      param_3 = param_3 - 1;
      *pbVar6 = bVar15 ^ bVar14;
      pbVar6 = pbVar6 + 1;
    } while (param_3 != 0);
  }
  goto LAB_00a8e1e8;
LAB_00a8e244:
  do {
    pbVar5 = pbVar6 + 1;
    uVar13 = (uint)*pbVar6;
    if ((char)*pbVar6 < '\0') {
      if (uVar13 < 0xe0) {
        uVar13 = pbVar6[1] & 0x3f | (uVar13 & 0x1f) << 6;
        pbVar5 = pbVar6 + 2;
      }
      else {
        uVar12 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
        if (uVar13 < 0xf0) {
          uVar13 = uVar12 | (uVar13 & 0x1f) << 0xc;
          pbVar5 = pbVar6 + 3;
        }
        else {
          pbVar5 = pbVar6 + 4;
          uVar13 = pbVar6[3] & 0x3f | uVar12 << 6 | (uVar13 & 7) << 0x12;
        }
      }
    }
                    /* try { // try from 00a8e2b4 to 00a8e7bf has its CatchHandler @ 00a8e7d4 */
    local_78 = uVar7;
    core::unicode::unicode_data::conversions::to_upper(&local_6c,uVar13);
    uVar13 = local_64;
    uVar3 = local_68;
    uVar12 = local_6c;
    if (local_68 == 0) {
      if (local_6c < 0x80) {
        uVar10 = 1;
      }
      else if (local_6c < 0x800) {
        uVar10 = 2;
      }
      else {
        uVar10 = 3;
        if (0xffff < local_6c) {
          uVar10 = 4;
        }
      }
      if (local_88 - uVar7 < uVar10) {
        FUN_00a8b8b8(&local_88,uVar7,uVar10);
        goto LAB_00a8e730;
      }
      pbVar6 = pbVar4 + uVar7;
      uVar13 = local_6c;
      if (0x7f < local_6c) goto LAB_00a8e740;
LAB_00a8e230:
      *pbVar6 = (byte)uVar12;
    }
    else {
      bVar14 = (byte)local_6c;
      if (local_64 == 0) {
        if (0x7f < local_6c) {
          if (local_6c < 0x800) {
            uVar11 = 2;
          }
          else {
            uVar11 = 3;
            if (0xffff < local_6c) {
              uVar11 = 4;
            }
          }
        }
        else {
          uVar11 = 1;
        }
        if (local_88 - uVar7 < uVar11) {
          FUN_00a8b8b8(&local_88,uVar7,uVar11);
          pbVar4 = pbStack_80 + uVar7;
          if (uVar12 < 0x80) goto LAB_00a8e3b8;
LAB_00a8e668:
          bVar14 = bVar14 & 0x3f | 0x80;
          if (uVar12 < 0x800) {
            pbVar4[1] = bVar14;
            *pbVar4 = (byte)(uVar12 >> 6) | 0xc0;
          }
          else {
            bVar15 = (byte)(uVar12 >> 6) & 0x3f | 0x80;
            if (uVar12 >> 0x10 == 0) {
              pbVar4[1] = bVar15;
              pbVar4[2] = bVar14;
              *pbVar4 = (byte)(uVar12 >> 0xc) | 0xe0;
            }
            else {
              pbVar4[2] = bVar15;
              pbVar4[3] = bVar14;
              *pbVar4 = (byte)(uVar12 >> 0x12) | 0xf0;
              pbVar4[1] = (byte)(uVar12 >> 0xc) & 0x3f | 0x80;
            }
          }
          if (0x7f < uVar3) goto LAB_00a8e6d0;
LAB_00a8e71c:
          uVar10 = 1;
        }
        else {
          pbVar4 = pbVar4 + uVar7;
          if (0x7f < local_6c) goto LAB_00a8e668;
LAB_00a8e3b8:
          *pbVar4 = bVar14;
          if (uVar3 < 0x80) goto LAB_00a8e71c;
LAB_00a8e6d0:
          if (uVar3 < 0x800) {
            uVar10 = 2;
          }
          else {
            uVar10 = 3;
            if (0xffff < uVar3) {
              uVar10 = 4;
            }
          }
        }
        uVar7 = uVar11 + uVar7;
        uVar12 = uVar3;
        if (local_88 - uVar7 < uVar10) {
          local_78 = uVar7;
          FUN_00a8b8b8(&local_88,uVar7,uVar10);
        }
LAB_00a8e730:
        pbVar6 = pbStack_80 + uVar7;
        pbVar4 = pbStack_80;
        uVar13 = uVar12;
        if (uVar12 < 0x80) goto LAB_00a8e230;
LAB_00a8e740:
        bVar14 = (byte)uVar13 & 0x3f | 0x80;
        if (uVar13 < 0x800) goto LAB_00a8e754;
        bVar15 = (byte)(uVar13 >> 6) & 0x3f | 0x80;
        if (uVar13 >> 0x10 != 0) {
          pbVar6[2] = bVar15;
          bVar15 = (byte)(uVar13 >> 0xc);
          goto LAB_00a8e79c;
        }
LAB_00a8e778:
        pbVar6[1] = bVar15;
        *pbVar6 = (byte)(uVar13 >> 0xc) | 0xe0;
        pbVar6[2] = bVar14;
      }
      else {
        if (0x7f < local_6c) {
          if (local_6c < 0x800) {
            uVar10 = 2;
          }
          else {
            uVar10 = 3;
            if (0xffff < local_6c) {
              uVar10 = 4;
            }
          }
        }
        else {
          uVar10 = 1;
        }
        if (local_88 - uVar7 < uVar10) {
          FUN_00a8b8b8(&local_88,uVar7,uVar10);
          pbVar4 = pbStack_80 + uVar7;
          if (uVar12 < 0x80) goto LAB_00a8e354;
LAB_00a8e3f0:
          bVar14 = bVar14 & 0x3f | 0x80;
          if (uVar12 < 0x800) {
            pbVar4[1] = bVar14;
            *pbVar4 = (byte)(uVar12 >> 6) | 0xc0;
          }
          else {
            bVar15 = (byte)(uVar12 >> 6) & 0x3f | 0x80;
            if (uVar12 >> 0x10 == 0) {
              pbVar4[1] = bVar15;
              pbVar4[2] = bVar14;
              *pbVar4 = (byte)(uVar12 >> 0xc) | 0xe0;
            }
            else {
              pbVar4[2] = bVar15;
              pbVar4[3] = bVar14;
              *pbVar4 = (byte)(uVar12 >> 0x12) | 0xf0;
              pbVar4[1] = (byte)(uVar12 >> 0xc) & 0x3f | 0x80;
            }
          }
          if (0x7f < uVar3) goto LAB_00a8e458;
LAB_00a8e4a4:
          uVar11 = 1;
        }
        else {
          pbVar4 = pbVar4 + uVar7;
          if (0x7f < local_6c) goto LAB_00a8e3f0;
LAB_00a8e354:
          *pbVar4 = bVar14;
          if (uVar3 < 0x80) goto LAB_00a8e4a4;
LAB_00a8e458:
          if (uVar3 < 0x800) {
            uVar11 = 2;
          }
          else {
            uVar11 = 3;
            if (0xffff < uVar3) {
              uVar11 = 4;
            }
          }
        }
        lVar9 = uVar10 + uVar7;
        if (local_88 - lVar9 < uVar11) {
          local_78 = lVar9;
          FUN_00a8b8b8(&local_88,lVar9,uVar11);
        }
        pbVar4 = pbStack_80 + lVar9;
        if (uVar3 < 0x80) {
          *pbVar4 = (byte)uVar3;
joined_r0x00a8e544:
          if (uVar13 < 0x80) goto LAB_00a8e594;
LAB_00a8e548:
          if (uVar13 < 0x800) {
            uVar10 = 2;
          }
          else {
            uVar10 = 3;
            if (0xffff < uVar13) {
              uVar10 = 4;
            }
          }
        }
        else {
          bVar14 = (byte)uVar3 & 0x3f | 0x80;
          if (uVar3 < 0x800) {
            pbVar4[1] = bVar14;
            *pbVar4 = (byte)(uVar3 >> 6) | 0xc0;
            goto joined_r0x00a8e544;
          }
          bVar15 = (byte)(uVar3 >> 6) & 0x3f | 0x80;
          if (uVar3 >> 0x10 == 0) {
            pbVar4[1] = bVar15;
            pbVar4[2] = bVar14;
            *pbVar4 = (byte)(uVar3 >> 0xc) | 0xe0;
            goto joined_r0x00a8e544;
          }
          pbVar4[2] = bVar15;
          pbVar4[3] = bVar14;
          *pbVar4 = (byte)(uVar3 >> 0x12) | 0xf0;
          pbVar4[1] = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
          if (0x7f < uVar13) goto LAB_00a8e548;
LAB_00a8e594:
          uVar10 = 1;
        }
        uVar7 = uVar11 + lVar9;
        pbVar4 = pbStack_80;
        if (local_88 - uVar7 < uVar10) {
          local_78 = uVar7;
          FUN_00a8b8b8(&local_88,uVar7,uVar10);
          pbVar4 = pbStack_80;
        }
        pbVar6 = pbVar4 + uVar7;
        pbStack_80 = pbVar4;
        if (uVar13 < 0x80) {
          *pbVar6 = (byte)uVar13;
        }
        else {
          bVar14 = (byte)uVar13 & 0x3f | 0x80;
          if (uVar13 < 0x800) {
LAB_00a8e754:
            pbVar6[1] = bVar14;
            *pbVar6 = (byte)(uVar13 >> 6) | 0xc0;
          }
          else {
            bVar15 = (byte)(uVar13 >> 6) & 0x3f | 0x80;
            if (uVar13 >> 0x10 == 0) goto LAB_00a8e778;
            pbVar6[2] = bVar15;
            bVar15 = (byte)(uVar13 >> 0xc);
LAB_00a8e79c:
            pbVar6[1] = bVar15 & 0x3f | 0x80;
            *pbVar6 = (byte)(uVar13 >> 0x12) | 0xf0;
            pbVar6[3] = bVar14;
          }
        }
      }
    }
    uVar7 = uVar10 + uVar7;
    pbVar6 = pbVar5;
    local_78 = uVar7;
  } while (pbVar5 != param_2 + param_3);
LAB_00a8e1e8:
  param_1[1] = (ulong)pbStack_80;
  *param_1 = local_88;
  param_1[2] = local_78;
  return;
}


// ===== 00a8e7f4  <alloc::str::[3]::str>::word_to_titlecase =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::str::[3]::str>::word_to_titlecase */

void __rustcall <alloc::str::[3]::str>::word_to_titlecase(long *param_1,byte *param_2,long param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  ulong __n;
  ulong uVar24;
  byte *pbVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined8 local_90;
  uint uStack_88;
  undefined4 uStack_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_3 < 0) {
    uVar19 = 0;
LAB_00a8f578:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar19,param_3);
  }
  pbVar25 = param_2;
  local_a8 = param_3;
  if (param_3 == 0) {
    local_98 = 0;
    lStack_a0 = 1;
    pbVar10 = param_2;
LAB_00a8ebb0:
    uVar21 = (long)pbVar10 - (long)pbVar25;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar19 = 1;
    lVar9 = FUN_004b25a4(param_3,1);
    if (lVar9 == 0) goto LAB_00a8f578;
    pbVar10 = param_2 + param_3;
    local_98 = 0;
    lStack_a0 = lVar9;
    do {
      lVar20 = local_98;
      uVar22 = (uint)*pbVar25;
      if ((char)*pbVar25 < '\0') {
        pbVar11 = pbVar25 + 1;
        uVar16 = *pbVar11 & 0x3f;
        if (uVar22 < 0xe0) {
          uVar2 = (uVar22 & 0x1f) << 6;
          uVar22 = uVar16 | uVar2;
          pbVar25 = pbVar25 + 2;
          uVar2 = *pbVar11 & 0x1f | uVar2;
        }
        else {
          pbVar11 = pbVar25 + 2;
          uVar16 = uVar16 << 6;
          uVar7 = *pbVar11 & 0x3f | uVar16;
          if (uVar22 < 0xf0) {
            uVar2 = (uVar22 & 0x1f) << 0xc;
            uVar22 = uVar7 | uVar2;
            pbVar25 = pbVar25 + 3;
            uVar2 = *pbVar11 & 0x1f | uVar16 | uVar2;
            goto joined_r0x00a8e89c;
          }
          pbVar11 = pbVar25 + 3;
          pbVar25 = pbVar25 + 4;
          uVar7 = uVar7 << 6;
          uVar2 = (uVar22 & 7) << 0x12;
          uVar22 = *pbVar11 & 0x3f | uVar7 | uVar2;
          uVar2 = *pbVar11 & 0x1f | uVar7 | uVar2;
        }
        if (0x19 < uVar2 - 0x41) goto LAB_00a8e92c;
LAB_00a8ea54:
                    /* try { // try from 00a8ea54 to 00a8ea5f has its CatchHandler @ 00a8f58c */
        core::unicode::unicode_data::conversions::to_title(&local_80,uVar22);
        local_90 = CONCAT44(uStack_7c,local_80);
        uVar21 = 1;
        if (uStack_7c != 0) {
          uVar21 = 2;
        }
        uStack_88 = local_78;
        if (local_78 != 0) {
          uVar21 = 3;
        }
        if ((ulong)(local_a8 - lVar20) < uVar21) {
                    /* try { // try from 00a8f55c to 00a8f56b has its CatchHandler @ 00a8f58c */
          FUN_00a8b8b8(&local_a8,lVar20,uVar21);
          lVar20 = local_98;
        }
        auVar27._8_4_ = uStack_88;
        auVar27._0_8_ = local_90;
        auVar27._12_4_ = uStack_84;
        uVar17 = 0;
        uStack_68 = auVar27._8_8_;
        local_70 = local_90;
        do {
          uVar22 = *(uint *)((long)&local_70 + uVar17 * 4);
          if (uVar22 < 0x80) {
            uVar23 = 1;
          }
          else if (uVar22 < 0x800) {
            uVar23 = 2;
          }
          else {
            uVar23 = 3;
            if (0xffff < uVar22) {
              uVar23 = 4;
            }
          }
          if ((ulong)(local_a8 - lVar20) < uVar23) {
                    /* try { // try from 00a8eb88 to 00a8eb97 has its CatchHandler @ 00a8f588 */
            FUN_00a8b8b8(&local_a8,lVar20,uVar23);
          }
          pbVar11 = (byte *)(lStack_a0 + lVar20);
          if (uVar22 < 0x80) {
            *pbVar11 = (byte)uVar22;
          }
          else {
            bVar26 = (byte)uVar22 & 0x3f | 0x80;
            if (uVar22 < 0x800) {
              pbVar11[1] = bVar26;
              *pbVar11 = (byte)(uVar22 >> 6) | 0xc0;
            }
            else {
              bVar13 = (byte)(uVar22 >> 6) & 0x3f | 0x80;
              if (uVar22 >> 0x10 == 0) {
                pbVar11[1] = bVar13;
                pbVar11[2] = bVar26;
                *pbVar11 = (byte)(uVar22 >> 0xc) | 0xe0;
              }
              else {
                pbVar11[2] = bVar13;
                pbVar11[3] = bVar26;
                *pbVar11 = (byte)(uVar22 >> 0x12) | 0xf0;
                pbVar11[1] = (byte)(uVar22 >> 0xc) & 0x3f | 0x80;
              }
            }
          }
          uVar17 = uVar17 + 1;
          lVar20 = uVar23 + lVar20;
          local_98 = lVar20;
        } while (uVar21 != uVar17);
        goto LAB_00a8ebb0;
      }
      uVar2 = uVar22 & 0xffffffdf;
      pbVar25 = pbVar25 + 1;
joined_r0x00a8e89c:
      if (uVar2 - 0x41 < 0x1a) goto LAB_00a8ea54;
LAB_00a8e92c:
      if (uVar22 < 0xaa) {
        bVar8 = uVar22 < 0x80;
        uVar21 = 1;
        if (!bVar8) {
          uVar21 = 2;
        }
        if ((ulong)(local_a8 - local_98) < uVar21) goto LAB_00a8e9c8;
LAB_00a8e950:
        pbVar11 = (byte *)(lVar9 + lVar20);
        if (!bVar8) goto LAB_00a8e958;
LAB_00a8e868:
        *pbVar11 = (byte)uVar22;
      }
      else {
                    /* try { // try from 00a8e97c to 00a8e9d7 has its CatchHandler @ 00a8f590 */
        uVar21 = core::unicode::unicode_data::lowercase::lookup(uVar22);
        if (((uVar21 & 1) != 0) ||
           (uVar21 = core::unicode::unicode_data::uppercase::lookup(uVar22), (uVar21 & 1) != 0))
        goto LAB_00a8ea54;
        if (0x1c4 < uVar22) {
          uVar21 = core::unicode::unicode_data::lt::lookup_slow(uVar22);
          if ((uVar21 & 1) != 0) goto LAB_00a8ea54;
          if (0x7ff < uVar22) {
            bVar8 = false;
            uVar21 = 3;
            if (0xffff < uVar22) {
              uVar21 = 4;
            }
            if (uVar21 <= (ulong)(local_a8 - lVar20)) goto LAB_00a8e950;
            goto LAB_00a8e9c8;
          }
        }
        bVar8 = false;
        uVar21 = 2;
        if (1 < (ulong)(local_a8 - lVar20)) goto LAB_00a8e950;
LAB_00a8e9c8:
        FUN_00a8b8b8(&local_a8,lVar20,uVar21);
        pbVar11 = (byte *)(lStack_a0 + lVar20);
        lVar9 = lStack_a0;
        if (bVar8) goto LAB_00a8e868;
LAB_00a8e958:
        bVar26 = (byte)uVar22 & 0x3f | 0x80;
        if (uVar22 < 0x800) {
          pbVar11[1] = bVar26;
          *pbVar11 = (byte)(uVar22 >> 6) | 0xc0;
        }
        else {
          bVar13 = (byte)(uVar22 >> 6) & 0x3f | 0x80;
          if (uVar22 >> 0x10 == 0) {
            pbVar11[1] = bVar13;
            pbVar11[2] = bVar26;
            *pbVar11 = (byte)(uVar22 >> 0xc) | 0xe0;
          }
          else {
            pbVar11[2] = bVar13;
            pbVar11[3] = bVar26;
            *pbVar11 = (byte)(uVar22 >> 0x12) | 0xf0;
            pbVar11[1] = (byte)(uVar22 >> 0xc) & 0x3f | 0x80;
          }
        }
      }
      local_98 = uVar21 + lVar20;
    } while (pbVar25 != pbVar10);
    pbVar25 = param_2 + param_3;
    uVar21 = (long)pbVar10 - (long)pbVar25;
  }
  if ((long)uVar21 < 0) {
    uVar19 = 0;
LAB_00a8ee08:
                    /* try { // try from 00a8ee08 to 00a8ee13 has its CatchHandler @ 00a8f58c */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar19,uVar21);
  }
  if (uVar21 == 0) {
    param_1[1] = lStack_a0;
    *param_1 = local_a8;
    param_1[2] = local_98;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  uVar19 = 1;
  pbVar10 = (byte *)FUN_004b25a4(uVar21,1);
  if (pbVar10 == (byte *)0x0) goto LAB_00a8ee08;
  uVar17 = uVar21;
  if (uVar21 < 0x10) {
    uVar23 = 0;
    pbVar11 = pbVar10;
LAB_00a8ee2c:
    uVar24 = uVar17 + uVar23;
    do {
      bVar26 = *pbVar25;
      __n = uVar23;
      if ((char)bVar26 < '\0') break;
      uVar23 = uVar23 + 1;
      pbVar25 = pbVar25 + 1;
      bVar13 = 0x20;
      if (0x19 < bVar26 - 0x41) {
        bVar13 = 0;
      }
      uVar17 = uVar17 - 1;
      *pbVar11 = bVar13 | bVar26;
      pbVar11 = pbVar11 + 1;
      __n = uVar24;
    } while (uVar17 != 0);
  }
  else {
    uVar23 = 0;
    do {
      auVar27 = NEON_cmlt(*(undefined1 (*) [16])(pbVar25 + uVar23),0,1);
      bVar26 = NEON_umaxv(auVar27,1);
      if ((bVar26 & 1) != 0) {
        pbVar25 = pbVar25 + uVar23;
        pbVar11 = pbVar10 + uVar23;
        goto LAB_00a8ee2c;
      }
      pbVar11 = pbVar25 + uVar23;
      pbVar12 = pbVar10 + uVar23;
      uVar17 = uVar17 - 0x10;
      bVar3 = pbVar11[1];
      bVar15 = pbVar11[2];
      uVar23 = uVar23 + 0x10;
      bVar4 = pbVar11[3];
      bVar13 = 0x20;
      bVar26 = bVar13;
      if (0x19 < *pbVar11 - 0x41) {
        bVar26 = 0;
      }
      if (0x19 < bVar3 - 0x41) {
        bVar13 = 0;
      }
      bVar5 = pbVar11[4];
      *pbVar12 = bVar26 | *pbVar11;
      bVar14 = 0x20;
      bVar26 = bVar14;
      if (0x19 < bVar15 - 0x41) {
        bVar26 = 0;
      }
      bVar6 = pbVar11[5];
      pbVar12[1] = bVar13 | bVar3;
      bVar13 = bVar14;
      if (0x19 < bVar4 - 0x41) {
        bVar13 = 0;
      }
      bVar3 = pbVar11[6];
      pbVar12[2] = bVar26 | bVar15;
      bVar26 = bVar14;
      if (0x19 < bVar5 - 0x41) {
        bVar26 = 0;
      }
      pbVar12[3] = bVar13 | bVar4;
      bVar13 = pbVar11[7];
      if (0x19 < bVar6 - 0x41) {
        bVar14 = 0;
      }
      pbVar12[4] = bVar26 | bVar5;
      bVar15 = 0x20;
      bVar26 = bVar15;
      if (0x19 < bVar3 - 0x41) {
        bVar26 = 0;
      }
      bVar5 = pbVar11[8];
      pbVar12[5] = bVar14 | bVar6;
      bVar14 = pbVar11[9];
      bVar4 = bVar15;
      if (0x19 < bVar13 - 0x41) {
        bVar4 = 0;
      }
      pbVar12[6] = bVar26 | bVar3;
      bVar3 = pbVar11[10];
      bVar26 = bVar15;
      if (0x19 < bVar5 - 0x41) {
        bVar26 = 0;
      }
      pbVar12[7] = bVar4 | bVar13;
      bVar13 = bVar15;
      if (0x19 < bVar14 - 0x41) {
        bVar13 = 0;
      }
      bVar4 = pbVar11[0xb];
      pbVar12[8] = bVar26 | bVar5;
      pbVar12[9] = bVar13 | bVar14;
      bVar26 = bVar15;
      if (0x19 < bVar3 - 0x41) {
        bVar26 = 0;
      }
      bVar13 = pbVar11[0xc];
      pbVar12[10] = bVar26 | bVar3;
      bVar26 = bVar15;
      if (0x19 < bVar4 - 0x41) {
        bVar26 = 0;
      }
      bVar3 = pbVar11[0xe];
      bVar14 = pbVar11[0xd];
      pbVar12[0xb] = bVar26 | bVar4;
      bVar4 = pbVar11[0xf];
      bVar26 = bVar15;
      if (0x19 < bVar13 - 0x41) {
        bVar26 = 0;
      }
      pbVar12[0xc] = bVar26 | bVar13;
      if (0x19 < bVar14 - 0x41) {
        bVar15 = 0;
      }
      pbVar12[0xd] = bVar15 | bVar14;
      bVar13 = 0x20;
      bVar26 = bVar13;
      if (0x19 < bVar3 - 0x41) {
        bVar26 = 0;
      }
      if (0x19 < bVar4 - 0x41) {
        bVar13 = 0;
      }
      pbVar12[0xe] = bVar26 | bVar3;
      pbVar12[0xf] = bVar13 | bVar4;
    } while (0xf < uVar17);
    pbVar25 = pbVar25 + uVar23;
    if (uVar21 != uVar23) {
      pbVar11 = pbVar10 + uVar23;
      uVar23 = uVar21 & 0x7ffffffffffffff0;
      goto LAB_00a8ee2c;
    }
    uVar17 = 0;
    __n = uVar21 & 0x7ffffffffffffff0;
  }
  if ((ulong)(local_a8 - local_98) < __n) {
                    /* try { // try from 00a8f544 to 00a8f553 has its CatchHandler @ 00a8f584 */
    FUN_00a8b8b8(&local_a8,local_98,__n);
  }
  else {
    lVar9 = local_98;
    if (__n == 0) goto LAB_00a8ee9c;
  }
  lVar9 = local_98;
  memcpy((void *)(lStack_a0 + local_98),pbVar10,__n);
LAB_00a8ee9c:
  lVar9 = lVar9 + __n;
  local_98 = lVar9;
  if (uVar17 != 0) {
    pbVar11 = (byte *)0x0;
    pbVar12 = pbVar25;
    do {
      pbVar18 = pbVar12 + 1;
      uVar22 = (uint)*pbVar12;
      local_98 = lVar9;
      if ((char)*pbVar12 < '\0') {
        if (uVar22 < 0xe0) {
          uVar22 = pbVar12[1] & 0x3f | (uVar22 & 0x1f) << 6;
          pbVar18 = pbVar12 + 2;
          pbVar12 = pbVar18 + ((long)pbVar11 - (long)pbVar12);
        }
        else {
          uVar16 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
          if (uVar22 < 0xf0) {
            uVar22 = uVar16 | (uVar22 & 0x1f) << 0xc;
            pbVar18 = pbVar12 + 3;
            pbVar12 = pbVar18 + ((long)pbVar11 - (long)pbVar12);
          }
          else {
            pbVar18 = pbVar12 + 4;
            uVar22 = pbVar12[3] & 0x3f | uVar16 << 6 | (uVar22 & 7) << 0x12;
            pbVar12 = pbVar18 + ((long)pbVar11 - (long)pbVar12);
          }
        }
        if (uVar22 != 0x3a3) goto LAB_00a8eefc;
        bVar26 = FUN_00a90bbc(param_2,param_3,pbVar11 + (param_3 - uVar21) + __n);
        if ((ulong)(local_a8 - lVar9) < 2) {
          FUN_00a8b8b8(&local_a8,lVar9,2);
        }
        puVar1 = (undefined1 *)(lStack_a0 + lVar9);
        lVar9 = lVar9 + 2;
        *puVar1 = 0xcf;
        puVar1[1] = bVar26 & 0x83;
        pbVar11 = pbVar12;
      }
      else {
        pbVar12 = pbVar18 + ((long)pbVar11 - (long)pbVar12);
LAB_00a8eefc:
                    /* try { // try from 00a8eefc to 00a8f4ff has its CatchHandler @ 00a8f598 */
        core::unicode::unicode_data::conversions::to_lower(&local_80,uVar22);
        uVar2 = local_78;
        uVar22 = uStack_7c;
        uVar16 = local_80;
        pbVar11 = pbVar12;
        if (uStack_7c == 0) {
          if (local_80 < 0x80) {
            uVar23 = 1;
          }
          else if (local_80 < 0x800) {
            uVar23 = 2;
          }
          else {
            uVar23 = 3;
            if (0xffff < local_80) {
              uVar23 = 4;
            }
          }
          if ((ulong)(local_a8 - lVar9) < uVar23) {
            FUN_00a8b8b8(&local_a8,lVar9,uVar23);
          }
LAB_00a8f160:
          pbVar12 = (byte *)(lStack_a0 + lVar9);
          uVar22 = uVar16;
joined_r0x00a8f16c:
          if (uVar22 < 0x80) {
            *pbVar12 = (byte)uVar22;
LAB_00a8eecc:
            lVar9 = uVar23 + lVar9;
          }
          else {
            bVar26 = (byte)uVar22 & 0x3f | 0x80;
            if (uVar22 < 0x800) {
LAB_00a8f488:
              pbVar12[1] = bVar26;
              lVar9 = uVar23 + lVar9;
              *pbVar12 = (byte)(uVar22 >> 6) | 0xc0;
            }
            else {
              bVar13 = (byte)(uVar22 >> 6) & 0x3f | 0x80;
              if (uVar22 >> 0x10 == 0) goto LAB_00a8f4b0;
              pbVar12[2] = bVar13;
              bVar13 = (byte)(uVar22 >> 0xc);
LAB_00a8f4d8:
              pbVar12[1] = bVar13 & 0x3f | 0x80;
              lVar9 = uVar23 + lVar9;
              *pbVar12 = (byte)(uVar22 >> 0x12) | 0xf0;
              pbVar12[3] = bVar26;
            }
          }
        }
        else {
          bVar26 = (byte)local_80;
          bVar13 = (byte)uStack_7c;
          if (local_78 != 0) {
            if (0x7f < local_80) {
              if (local_80 < 0x800) {
                uVar23 = 2;
              }
              else {
                uVar23 = 3;
                if (0xffff < local_80) {
                  uVar23 = 4;
                }
              }
            }
            else {
              uVar23 = 1;
            }
            if ((ulong)(local_a8 - lVar9) < uVar23) {
              FUN_00a8b8b8(&local_a8,lVar9,uVar23);
            }
            pbVar12 = (byte *)(lStack_a0 + lVar9);
            if (uVar16 < 0x80) {
              *pbVar12 = bVar26;
joined_r0x00a8f290:
              if (0x7f < uVar22) goto LAB_00a8f0b8;
LAB_00a8f080:
              uVar24 = 1;
            }
            else {
              bVar26 = bVar26 & 0x3f | 0x80;
              if (uVar16 < 0x800) {
                pbVar12[1] = bVar26;
                *pbVar12 = (byte)(uVar16 >> 6) | 0xc0;
                goto joined_r0x00a8f290;
              }
              bVar3 = (byte)(uVar16 >> 6) & 0x3f | 0x80;
              if (uVar16 >> 0x10 != 0) {
                pbVar12[2] = bVar3;
                pbVar12[3] = bVar26;
                *pbVar12 = (byte)(uVar16 >> 0x12) | 0xf0;
                pbVar12[1] = (byte)(uVar16 >> 0xc) & 0x3f | 0x80;
                goto joined_r0x00a8f290;
              }
              pbVar12[1] = bVar3;
              pbVar12[2] = bVar26;
              *pbVar12 = (byte)(uVar16 >> 0xc) | 0xe0;
              if (uVar22 < 0x80) goto LAB_00a8f080;
LAB_00a8f0b8:
              if (uVar22 < 0x800) {
                uVar24 = 2;
              }
              else {
                uVar24 = 3;
                if (0xffff < uVar22) {
                  uVar24 = 4;
                }
              }
            }
            lVar9 = uVar23 + lVar9;
            if ((ulong)(local_a8 - lVar9) < uVar24) {
              local_98 = lVar9;
              FUN_00a8b8b8(&local_a8,lVar9,uVar24);
              pbVar12 = (byte *)(lStack_a0 + lVar9);
              if (0x7f < uVar22) goto LAB_00a8f300;
LAB_00a8f128:
              *pbVar12 = bVar13;
joined_r0x00a8f138:
              if (uVar2 < 0x80) goto LAB_00a8f13c;
LAB_00a8f330:
              if (uVar2 < 0x800) {
                uVar23 = 2;
              }
              else {
                uVar23 = 3;
                if (0xffff < uVar2) {
                  uVar23 = 4;
                }
              }
            }
            else {
              pbVar12 = (byte *)(lStack_a0 + lVar9);
              if (uVar22 < 0x80) goto LAB_00a8f128;
LAB_00a8f300:
              bVar26 = bVar13 & 0x3f | 0x80;
              if (uVar22 < 0x800) {
                pbVar12[1] = bVar26;
                *pbVar12 = (byte)(uVar22 >> 6) | 0xc0;
                goto joined_r0x00a8f138;
              }
              bVar13 = (byte)(uVar22 >> 6) & 0x3f | 0x80;
              if (uVar22 >> 0x10 == 0) {
                pbVar12[1] = bVar13;
                pbVar12[2] = bVar26;
                *pbVar12 = (byte)(uVar22 >> 0xc) | 0xe0;
                goto joined_r0x00a8f138;
              }
              pbVar12[2] = bVar13;
              pbVar12[3] = bVar26;
              *pbVar12 = (byte)(uVar22 >> 0x12) | 0xf0;
              pbVar12[1] = (byte)(uVar22 >> 0xc) & 0x3f | 0x80;
              if (0x7f < uVar2) goto LAB_00a8f330;
LAB_00a8f13c:
              uVar23 = 1;
            }
            lVar9 = uVar24 + lVar9;
            if ((ulong)(local_a8 - lVar9) < uVar23) {
              local_98 = lVar9;
              FUN_00a8b8b8(&local_a8,lVar9,uVar23);
              uVar16 = uVar2;
              goto LAB_00a8f160;
            }
            pbVar12 = (byte *)(lStack_a0 + lVar9);
            uVar22 = uVar2;
            goto joined_r0x00a8f16c;
          }
          if (0x7f < local_80) {
            if (local_80 < 0x800) {
              uVar24 = 2;
            }
            else {
              uVar24 = 3;
              if (0xffff < local_80) {
                uVar24 = 4;
              }
            }
          }
          else {
            uVar24 = 1;
          }
          if ((ulong)(local_a8 - lVar9) < uVar24) {
            FUN_00a8b8b8(&local_a8,lVar9,uVar24);
          }
          pbVar12 = (byte *)(lStack_a0 + lVar9);
          if (uVar16 < 0x80) {
            *pbVar12 = bVar26;
joined_r0x00a8f2c4:
            if (0x7f < uVar22) goto LAB_00a8f1ec;
LAB_00a8f1b4:
            uVar23 = 1;
          }
          else {
            bVar26 = bVar26 & 0x3f | 0x80;
            if (uVar16 < 0x800) {
              pbVar12[1] = bVar26;
              *pbVar12 = (byte)(uVar16 >> 6) | 0xc0;
              goto joined_r0x00a8f2c4;
            }
            bVar3 = (byte)(uVar16 >> 6) & 0x3f | 0x80;
            if (uVar16 >> 0x10 != 0) {
              pbVar12[2] = bVar3;
              pbVar12[3] = bVar26;
              *pbVar12 = (byte)(uVar16 >> 0x12) | 0xf0;
              pbVar12[1] = (byte)(uVar16 >> 0xc) & 0x3f | 0x80;
              goto joined_r0x00a8f2c4;
            }
            pbVar12[1] = bVar3;
            pbVar12[2] = bVar26;
            *pbVar12 = (byte)(uVar16 >> 0xc) | 0xe0;
            if (uVar22 < 0x80) goto LAB_00a8f1b4;
LAB_00a8f1ec:
            if (uVar22 < 0x800) {
              uVar23 = 2;
            }
            else {
              uVar23 = 3;
              if (0xffff < uVar22) {
                uVar23 = 4;
              }
            }
          }
          lVar9 = uVar24 + lVar9;
          if ((ulong)(local_a8 - lVar9) < uVar23) {
            local_98 = lVar9;
            FUN_00a8b8b8(&local_a8,lVar9,uVar23);
          }
          pbVar12 = (byte *)(lStack_a0 + lVar9);
          if (uVar22 < 0x80) {
            *pbVar12 = bVar13;
            goto LAB_00a8eecc;
          }
          bVar26 = bVar13 & 0x3f | 0x80;
          if (uVar22 < 0x800) goto LAB_00a8f488;
          bVar13 = (byte)(uVar22 >> 6) & 0x3f | 0x80;
          if (uVar22 >> 0x10 != 0) {
            pbVar12[2] = bVar13;
            bVar13 = (byte)(uVar22 >> 0xc);
            goto LAB_00a8f4d8;
          }
LAB_00a8f4b0:
          pbVar12[1] = bVar13;
          lVar9 = uVar23 + lVar9;
          *pbVar12 = (byte)(uVar22 >> 0xc) | 0xe0;
          pbVar12[2] = bVar26;
        }
      }
      pbVar12 = pbVar18;
      local_98 = lVar9;
    } while (pbVar18 != pbVar25 + uVar17);
  }
  param_1[1] = lStack_a0;
  *param_1 = local_a8;
  param_1[2] = local_98;
  free(pbVar10);
  return;
}


// ===== 00a8f5c8  <alloc::str::[3]::str>::to_casefold_unnormalized =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::str::[3]::str>::to_casefold_unnormalized */

void __rustcall
<alloc::str::[3]::str>::to_casefold_unnormalized(ulong *param_1,byte *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulong local_88;
  byte *pbStack_80;
  ulong local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  if ((long)param_3 < 0) {
    uVar8 = 0;
LAB_00a8fccc:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar8,param_3);
  }
  local_88 = param_3;
  if (param_3 == 0) {
    local_78 = 0;
    pbStack_80 = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar8 = 1;
    pbVar4 = (byte *)FUN_004b25a4(param_3,1);
    if (pbVar4 == (byte *)0x0) goto LAB_00a8fccc;
    pbStack_80 = pbVar4;
    if (param_3 < 0x10) {
      uVar7 = 0;
      pbVar6 = pbVar4;
    }
    else {
      uVar7 = 0;
      local_78 = param_3 & 0x7ffffffffffffff0;
      do {
        pbVar6 = param_2 + uVar7;
        uVar2 = *(undefined8 *)(pbVar6 + 8);
        bVar21 = (byte)((ulong)uVar2 >> 8);
        bVar22 = (byte)((ulong)uVar2 >> 0x10);
        bVar23 = (byte)((ulong)uVar2 >> 0x18);
        bVar24 = (byte)((ulong)uVar2 >> 0x20);
        bVar25 = (byte)((ulong)uVar2 >> 0x28);
        bVar26 = (byte)((ulong)uVar2 >> 0x30);
        bVar27 = (byte)((ulong)uVar2 >> 0x38);
        uVar8 = *(undefined8 *)pbVar6;
        bVar14 = (byte)((ulong)uVar8 >> 8);
        bVar15 = (byte)((ulong)uVar8 >> 0x10);
        bVar16 = (byte)((ulong)uVar8 >> 0x18);
        bVar17 = (byte)((ulong)uVar8 >> 0x20);
        bVar18 = (byte)((ulong)uVar8 >> 0x28);
        bVar19 = (byte)((ulong)uVar8 >> 0x30);
        bVar20 = (byte)((ulong)uVar8 >> 0x38);
        auVar29[9] = bVar21;
        auVar29._0_9_ = *(unkbyte9 *)pbVar6;
        auVar29[10] = bVar22;
        auVar29[0xb] = bVar23;
        auVar29[0xc] = bVar24;
        auVar29[0xd] = bVar25;
        auVar29[0xe] = bVar26;
        auVar29[0xf] = bVar27;
        auVar29 = NEON_cmlt(auVar29,0,1);
        bVar28 = NEON_umaxv(auVar29,1);
        if ((bVar28 & 1) != 0) {
          param_2 = param_2 + uVar7;
          pbVar6 = pbVar4 + uVar7;
          goto LAB_00a8f6a8;
        }
        auVar30[0] = (byte)uVar8 + 0xbf;
        auVar30[1] = bVar14 + 0xbf;
        auVar30[2] = bVar15 + 0xbf;
        auVar30[3] = bVar16 + 0xbf;
        auVar30[4] = bVar17 + 0xbf;
        auVar30[5] = bVar18 + 0xbf;
        auVar30[6] = bVar19 + 0xbf;
        auVar30[7] = bVar20 + 0xbf;
        auVar30[8] = (byte)uVar2 + 0xbf;
        auVar30[9] = bVar21 + 0xbf;
        auVar30[10] = bVar22 + 0xbf;
        auVar30[0xb] = bVar23 + 0xbf;
        auVar30[0xc] = bVar24 + 0xbf;
        auVar30[0xd] = bVar25 + 0xbf;
        auVar30[0xe] = bVar26 + 0xbf;
        auVar30[0xf] = bVar27 + 0xbf;
        param_3 = param_3 - 0x10;
        auVar1[8] = 0x1a;
        auVar1._0_8_ = 0x1a1a1a1a1a1a1a1a;
        auVar1[9] = 0x1a;
        auVar1[10] = 0x1a;
        auVar1[0xb] = 0x1a;
        auVar1[0xc] = 0x1a;
        auVar1[0xd] = 0x1a;
        auVar1[0xe] = 0x1a;
        auVar1[0xf] = 0x1a;
        auVar29 = NEON_cmhi(auVar1,auVar30,1);
        uVar10 = auVar29._0_8_ & 0x2020202020202020;
        *(ulong *)(pbVar4 + uVar7 + 8) =
             CONCAT17(auVar29[0xf] & 0x20 | bVar27,
                      CONCAT16(auVar29[0xe] & 0x20 | bVar26,
                               CONCAT15(auVar29[0xd] & 0x20 | bVar25,
                                        CONCAT14(auVar29[0xc] & 0x20 | bVar24,
                                                 CONCAT13(auVar29[0xb] & 0x20 | bVar23,
                                                          CONCAT12(auVar29[10] & 0x20 | bVar22,
                                                                   CONCAT11(auVar29[9] & 0x20 |
                                                                            bVar21,auVar29[8] & 0x20
                                                                                   | (byte)uVar2))))
                                       )));
        *(ulong *)(pbVar4 + uVar7) =
             CONCAT17((byte)(uVar10 >> 0x38) | bVar20,
                      CONCAT16((byte)(uVar10 >> 0x30) | bVar19,
                               CONCAT15((byte)(uVar10 >> 0x28) | bVar18,
                                        CONCAT14((byte)(uVar10 >> 0x20) | bVar17,
                                                 CONCAT13((byte)(uVar10 >> 0x18) | bVar16,
                                                          CONCAT12((byte)(uVar10 >> 0x10) | bVar15,
                                                                   CONCAT11((byte)(uVar10 >> 8) |
                                                                            bVar14,(byte)uVar10 |
                                                                                   (byte)uVar8))))))
                     );
        uVar7 = uVar7 + 0x10;
      } while (0xf < param_3);
      if (param_3 == 0) goto LAB_00a8f6ec;
      pbVar6 = pbVar4 + uVar7;
      param_2 = param_2 + uVar7;
      uVar7 = local_78;
    }
LAB_00a8f6a8:
    local_78 = param_3 + uVar7;
    do {
      bVar14 = *param_2;
      if ((char)bVar14 < '\0') {
        local_78 = uVar7;
        if (param_3 != 0) {
          pbVar6 = param_2;
          goto LAB_00a8f748;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      param_2 = param_2 + 1;
      bVar15 = 0x20;
      if (0x19 < bVar14 - 0x41) {
        bVar15 = 0;
      }
      param_3 = param_3 - 1;
      *pbVar6 = bVar15 | bVar14;
      pbVar6 = pbVar6 + 1;
    } while (param_3 != 0);
  }
  goto LAB_00a8f6ec;
LAB_00a8f748:
  do {
    pbVar5 = pbVar6 + 1;
    uVar13 = (uint)*pbVar6;
    if ((char)*pbVar6 < '\0') {
      if (uVar13 < 0xe0) {
        uVar13 = pbVar6[1] & 0x3f | (uVar13 & 0x1f) << 6;
        pbVar5 = pbVar6 + 2;
      }
      else {
        uVar12 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
        if (uVar13 < 0xf0) {
          uVar13 = uVar12 | (uVar13 & 0x1f) << 0xc;
          pbVar5 = pbVar6 + 3;
        }
        else {
          pbVar5 = pbVar6 + 4;
          uVar13 = pbVar6[3] & 0x3f | uVar12 << 6 | (uVar13 & 7) << 0x12;
        }
      }
    }
                    /* try { // try from 00a8f7b8 to 00a8fcc3 has its CatchHandler @ 00a8fcd8 */
    local_78 = uVar7;
    core::unicode::unicode_data::conversions::to_casefold(&local_6c,uVar13);
    uVar13 = local_64;
    uVar3 = local_68;
    uVar12 = local_6c;
    if (local_68 == 0) {
      if (local_6c < 0x80) {
        uVar10 = 1;
      }
      else if (local_6c < 0x800) {
        uVar10 = 2;
      }
      else {
        uVar10 = 3;
        if (0xffff < local_6c) {
          uVar10 = 4;
        }
      }
      if (local_88 - uVar7 < uVar10) {
        FUN_00a8b8b8(&local_88,uVar7,uVar10);
        goto LAB_00a8fc34;
      }
      pbVar6 = pbVar4 + uVar7;
      uVar13 = local_6c;
      if (0x7f < local_6c) goto LAB_00a8fc44;
LAB_00a8f734:
      *pbVar6 = (byte)uVar12;
    }
    else {
      bVar14 = (byte)local_6c;
      if (local_64 == 0) {
        if (0x7f < local_6c) {
          if (local_6c < 0x800) {
            uVar11 = 2;
          }
          else {
            uVar11 = 3;
            if (0xffff < local_6c) {
              uVar11 = 4;
            }
          }
        }
        else {
          uVar11 = 1;
        }
        if (local_88 - uVar7 < uVar11) {
          FUN_00a8b8b8(&local_88,uVar7,uVar11);
          pbVar4 = pbStack_80 + uVar7;
          if (uVar12 < 0x80) goto LAB_00a8f8bc;
LAB_00a8fb6c:
          bVar14 = bVar14 & 0x3f | 0x80;
          if (uVar12 < 0x800) {
            pbVar4[1] = bVar14;
            *pbVar4 = (byte)(uVar12 >> 6) | 0xc0;
          }
          else {
            bVar15 = (byte)(uVar12 >> 6) & 0x3f | 0x80;
            if (uVar12 >> 0x10 == 0) {
              pbVar4[1] = bVar15;
              pbVar4[2] = bVar14;
              *pbVar4 = (byte)(uVar12 >> 0xc) | 0xe0;
            }
            else {
              pbVar4[2] = bVar15;
              pbVar4[3] = bVar14;
              *pbVar4 = (byte)(uVar12 >> 0x12) | 0xf0;
              pbVar4[1] = (byte)(uVar12 >> 0xc) & 0x3f | 0x80;
            }
          }
          if (0x7f < uVar3) goto LAB_00a8fbd4;
LAB_00a8fc20:
          uVar10 = 1;
        }
        else {
          pbVar4 = pbVar4 + uVar7;
          if (0x7f < local_6c) goto LAB_00a8fb6c;
LAB_00a8f8bc:
          *pbVar4 = bVar14;
          if (uVar3 < 0x80) goto LAB_00a8fc20;
LAB_00a8fbd4:
          if (uVar3 < 0x800) {
            uVar10 = 2;
          }
          else {
            uVar10 = 3;
            if (0xffff < uVar3) {
              uVar10 = 4;
            }
          }
        }
        uVar7 = uVar11 + uVar7;
        uVar12 = uVar3;
        if (local_88 - uVar7 < uVar10) {
          local_78 = uVar7;
          FUN_00a8b8b8(&local_88,uVar7,uVar10);
        }
LAB_00a8fc34:
        pbVar6 = pbStack_80 + uVar7;
        pbVar4 = pbStack_80;
        uVar13 = uVar12;
        if (uVar12 < 0x80) goto LAB_00a8f734;
LAB_00a8fc44:
        bVar14 = (byte)uVar13 & 0x3f | 0x80;
        if (uVar13 < 0x800) goto LAB_00a8fc58;
        bVar15 = (byte)(uVar13 >> 6) & 0x3f | 0x80;
        if (uVar13 >> 0x10 != 0) {
          pbVar6[2] = bVar15;
          bVar15 = (byte)(uVar13 >> 0xc);
          goto LAB_00a8fca0;
        }
LAB_00a8fc7c:
        pbVar6[1] = bVar15;
        *pbVar6 = (byte)(uVar13 >> 0xc) | 0xe0;
        pbVar6[2] = bVar14;
      }
      else {
        if (0x7f < local_6c) {
          if (local_6c < 0x800) {
            uVar10 = 2;
          }
          else {
            uVar10 = 3;
            if (0xffff < local_6c) {
              uVar10 = 4;
            }
          }
        }
        else {
          uVar10 = 1;
        }
        if (local_88 - uVar7 < uVar10) {
          FUN_00a8b8b8(&local_88,uVar7,uVar10);
          pbVar4 = pbStack_80 + uVar7;
          if (uVar12 < 0x80) goto LAB_00a8f858;
LAB_00a8f8f4:
          bVar14 = bVar14 & 0x3f | 0x80;
          if (uVar12 < 0x800) {
            pbVar4[1] = bVar14;
            *pbVar4 = (byte)(uVar12 >> 6) | 0xc0;
          }
          else {
            bVar15 = (byte)(uVar12 >> 6) & 0x3f | 0x80;
            if (uVar12 >> 0x10 == 0) {
              pbVar4[1] = bVar15;
              pbVar4[2] = bVar14;
              *pbVar4 = (byte)(uVar12 >> 0xc) | 0xe0;
            }
            else {
              pbVar4[2] = bVar15;
              pbVar4[3] = bVar14;
              *pbVar4 = (byte)(uVar12 >> 0x12) | 0xf0;
              pbVar4[1] = (byte)(uVar12 >> 0xc) & 0x3f | 0x80;
            }
          }
          if (0x7f < uVar3) goto LAB_00a8f95c;
LAB_00a8f9a8:
          uVar11 = 1;
        }
        else {
          pbVar4 = pbVar4 + uVar7;
          if (0x7f < local_6c) goto LAB_00a8f8f4;
LAB_00a8f858:
          *pbVar4 = bVar14;
          if (uVar3 < 0x80) goto LAB_00a8f9a8;
LAB_00a8f95c:
          if (uVar3 < 0x800) {
            uVar11 = 2;
          }
          else {
            uVar11 = 3;
            if (0xffff < uVar3) {
              uVar11 = 4;
            }
          }
        }
        lVar9 = uVar10 + uVar7;
        if (local_88 - lVar9 < uVar11) {
          local_78 = lVar9;
          FUN_00a8b8b8(&local_88,lVar9,uVar11);
        }
        pbVar4 = pbStack_80 + lVar9;
        if (uVar3 < 0x80) {
          *pbVar4 = (byte)uVar3;
joined_r0x00a8fa48:
          if (uVar13 < 0x80) goto LAB_00a8fa98;
LAB_00a8fa4c:
          if (uVar13 < 0x800) {
            uVar10 = 2;
          }
          else {
            uVar10 = 3;
            if (0xffff < uVar13) {
              uVar10 = 4;
            }
          }
        }
        else {
          bVar14 = (byte)uVar3 & 0x3f | 0x80;
          if (uVar3 < 0x800) {
            pbVar4[1] = bVar14;
            *pbVar4 = (byte)(uVar3 >> 6) | 0xc0;
            goto joined_r0x00a8fa48;
          }
          bVar15 = (byte)(uVar3 >> 6) & 0x3f | 0x80;
          if (uVar3 >> 0x10 == 0) {
            pbVar4[1] = bVar15;
            pbVar4[2] = bVar14;
            *pbVar4 = (byte)(uVar3 >> 0xc) | 0xe0;
            goto joined_r0x00a8fa48;
          }
          pbVar4[2] = bVar15;
          pbVar4[3] = bVar14;
          *pbVar4 = (byte)(uVar3 >> 0x12) | 0xf0;
          pbVar4[1] = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
          if (0x7f < uVar13) goto LAB_00a8fa4c;
LAB_00a8fa98:
          uVar10 = 1;
        }
        uVar7 = uVar11 + lVar9;
        pbVar4 = pbStack_80;
        if (local_88 - uVar7 < uVar10) {
          local_78 = uVar7;
          FUN_00a8b8b8(&local_88,uVar7,uVar10);
          pbVar4 = pbStack_80;
        }
        pbVar6 = pbVar4 + uVar7;
        pbStack_80 = pbVar4;
        if (uVar13 < 0x80) {
          *pbVar6 = (byte)uVar13;
        }
        else {
          bVar14 = (byte)uVar13 & 0x3f | 0x80;
          if (uVar13 < 0x800) {
LAB_00a8fc58:
            pbVar6[1] = bVar14;
            *pbVar6 = (byte)(uVar13 >> 6) | 0xc0;
          }
          else {
            bVar15 = (byte)(uVar13 >> 6) & 0x3f | 0x80;
            if (uVar13 >> 0x10 == 0) goto LAB_00a8fc7c;
            pbVar6[2] = bVar15;
            bVar15 = (byte)(uVar13 >> 0xc);
LAB_00a8fca0:
            pbVar6[1] = bVar15 & 0x3f | 0x80;
            *pbVar6 = (byte)(uVar13 >> 0x12) | 0xf0;
            pbVar6[3] = bVar14;
          }
        }
      }
    }
    uVar7 = uVar10 + uVar7;
    pbVar6 = pbVar5;
    local_78 = uVar7;
  } while (pbVar5 != param_2 + param_3);
LAB_00a8f6ec:
  param_1[1] = (ulong)pbStack_80;
  *param_1 = local_88;
  param_1[2] = local_78;
  return;
}


// ===== 00a8fcf8  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one */

void __rustcall <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  FUN_00a903fc(&local_38,*param_1,param_1[1],uVar1);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00a8fd58  <alloc::wtf8::[5]::core::wtf8::Wtf8>::clone_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::wtf8::[5]::core::wtf8::Wtf8>::clone_into */

void __rustcall
<alloc::wtf8::[5]::core::wtf8::Wtf8>::clone_into(void *param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_3 + 3) = 0;
  param_3[2] = 0;
  if (*param_3 < param_2) {
    FUN_00a8b8b8(param_3,0,param_2);
    uVar1 = param_3[2];
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
    if (param_2 == 0) goto LAB_00a8fdac;
  }
  uVar2 = uVar1;
  memcpy((void *)(param_3[1] + uVar2),param_1,param_2);
LAB_00a8fdac:
  param_3[2] = uVar2 + param_2;
  return;
}


// ===== 00a8fddc  <alloc::wtf8::[5]::core::wtf8::Wtf8>::to_string_lossy =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::wtf8::[5]::core::wtf8::Wtf8>::to_string_lossy */

void __rustcall
<alloc::wtf8::[5]::core::wtf8::Wtf8>::to_string_lossy(ulong *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  void *__dest;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **local_80;
  ulong local_78;
  void *pvStack_70;
  ulong local_68;
  
  if (param_3 != 0) {
    uVar8 = 0;
    pbVar2 = param_2 + param_3;
    pbVar4 = param_2;
    do {
      pbVar5 = pbVar4 + 1;
      bVar3 = *pbVar4;
      if ((char)bVar3 < '\0') {
        if (bVar3 < 0xe0) {
          pbVar1 = pbVar4 + 2;
          lVar7 = 2;
          pbVar4 = pbVar5;
          if (pbVar5 != pbVar2) {
            pbVar4 = pbVar1;
          }
        }
        else if (bVar3 == 0xed) {
          if ((pbVar5 == pbVar2) || (pbVar4 + 2 == pbVar2)) break;
          if (0x9f < pbVar4[1]) {
            if ((long)param_3 < 0) {
              uVar9 = 0;
            }
            else {
              __rustc::__rust_no_alloc_shim_is_unstable_v2();
              uVar9 = 1;
              __dest = (void *)FUN_004b25a4(param_3,1);
              if (__dest != (void *)0x0) {
                local_78 = param_3;
                pvStack_70 = __dest;
                if (param_3 < uVar8) {
                  uVar12 = 0;
                  local_80 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff2d8;
                  goto LAB_00a9015c;
                }
                if (uVar8 != 0) {
                  memcpy(__dest,param_2,uVar8);
                }
                local_68 = uVar8;
                if (param_3 - uVar8 < 3) {
                  FUN_00a8b8b8(&local_78,uVar8,3);
                  __dest = pvStack_70;
                }
                *(undefined1 *)((undefined2 *)((long)__dest + local_68) + 1) = 0xbd;
                *(undefined2 *)((long)__dest + local_68) = 0xbfef;
                uVar6 = local_78;
                goto joined_r0x00a8ff64;
              }
            }
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(uVar9,param_3);
          }
          lVar7 = 3;
          pbVar4 = pbVar4 + 3;
        }
        else {
          if (pbVar5 != pbVar2) {
            pbVar5 = pbVar4 + 2;
          }
          if (pbVar5 != pbVar2) {
            pbVar5 = pbVar5 + 1;
          }
          pbVar4 = pbVar5;
          if (bVar3 < 0xf0) {
            lVar7 = 3;
          }
          else {
            lVar7 = 4;
            if (pbVar5 != pbVar2) {
              pbVar4 = pbVar5 + 1;
            }
          }
        }
      }
      else {
        lVar7 = 1;
        pbVar4 = pbVar5;
      }
      uVar8 = lVar7 + uVar8;
    } while (pbVar4 != pbVar2);
  }
  param_1[1] = (ulong)param_2;
  param_1[2] = param_3;
  *param_1 = 0xffffffffffffffff;
  return;
LAB_00a90030:
  uVar11 = uVar8 - uVar12;
  local_80 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff2c0;
  if ((uVar8 < uVar12) || (param_3 < uVar8)) {
LAB_00a9015c:
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail(uVar12,uVar8,param_3,local_80);
  }
  if (uVar6 - uVar10 < uVar11) {
                    /* try { // try from 00a900bc to 00a900e3 has its CatchHandler @ 00a901b4 */
    FUN_00a8b8b8(&local_78,uVar10,uVar11);
    __dest = pvStack_70;
  }
  else if (uVar8 == uVar12) goto LAB_00a90074;
  uVar10 = local_68;
  uVar6 = local_78;
  memcpy((void *)((long)__dest + local_68),param_2 + uVar12,uVar11);
LAB_00a90074:
  local_68 = uVar10 + uVar11;
  if (uVar6 - local_68 < 3) {
    FUN_00a8b8b8(&local_78,local_68,3);
    __dest = pvStack_70;
  }
  *(undefined1 *)((undefined2 *)((long)__dest + local_68) + 1) = 0xbd;
  *(undefined2 *)((long)__dest + local_68) = 0xbfef;
  uVar6 = local_78;
joined_r0x00a8ff64:
  uVar12 = uVar8 + 3;
  uVar10 = local_68 + 3;
  local_68 = uVar10;
  local_78 = uVar6;
  if (param_3 < uVar12) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar12,param_3,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff230);
  }
  uVar11 = param_3;
  if (uVar12 != param_3) {
    pbVar4 = param_2 + uVar12;
    uVar8 = uVar12;
    do {
      pbVar5 = pbVar4 + 1;
      bVar3 = *pbVar4;
      uVar11 = uVar12;
      if ((char)bVar3 < '\0') {
        if (bVar3 < 0xe0) {
          pbVar1 = pbVar4 + 2;
          lVar7 = 2;
          pbVar4 = pbVar5;
          if (pbVar5 != pbVar2) {
            pbVar4 = pbVar1;
          }
        }
        else if (bVar3 == 0xed) {
          if ((pbVar5 == pbVar2) || (pbVar4 + 2 == pbVar2)) break;
          if (0x9f < pbVar4[1]) goto LAB_00a90030;
          lVar7 = 3;
          pbVar4 = pbVar4 + 3;
        }
        else {
          if (pbVar5 != pbVar2) {
            pbVar5 = pbVar4 + 2;
          }
          if (pbVar5 != pbVar2) {
            pbVar5 = pbVar5 + 1;
          }
          pbVar4 = pbVar5;
          if (bVar3 < 0xf0) {
            lVar7 = 3;
          }
          else {
            lVar7 = 4;
            if (pbVar5 != pbVar2) {
              pbVar4 = pbVar5 + 1;
            }
          }
        }
      }
      else {
        lVar7 = 1;
        pbVar4 = pbVar5;
      }
      uVar8 = lVar7 + uVar8;
      if (pbVar4 == pbVar2) break;
    } while( true );
  }
  uVar8 = param_3 - uVar11;
  if (uVar6 - uVar10 < uVar8) {
    FUN_00a8b8b8(&local_78,uVar10,uVar8);
    __dest = pvStack_70;
  }
  else if (param_3 == uVar11) goto LAB_00a9011c;
  uVar10 = local_68;
  memcpy((void *)((long)__dest + local_68),param_2 + uVar11,uVar8);
LAB_00a9011c:
  param_1[2] = uVar10 + uVar8;
  param_1[1] = (ulong)pvStack_70;
  *param_1 = local_78;
  return;
}


// ===== 00a901dc  <alloc::wtf8::[5]::core::wtf8::Wtf8>::into_rc =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::wtf8::[5]::core::wtf8::Wtf8>::into_rc */

undefined1  [16] __rustcall
<alloc::wtf8::[5]::core::wtf8::Wtf8>::into_rc(void *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  if (0x7fffffffffffffe8 < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("capacity overflow",0x23,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff260);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar1._0_8_ = (undefined8 *)FUN_004b25a4(param_2 + 0x17 & 0x7ffffffffffffff8,8);
  if (auVar1._0_8_ != (undefined8 *)0x0) {
    auVar1._0_8_[1] = 1;
    *auVar1._0_8_ = 1;
    memcpy(auVar1._0_8_ + 2,param_1,param_2);
    auVar1._8_8_ = param_2;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,param_2 + 0x17 & 0x7ffffffffffffff8);
}


// ===== 00a9027c  <alloc::wtf8::[5]::core::wtf8::Wtf8>::into_arc =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::wtf8::[5]::core::wtf8::Wtf8>::into_arc */

undefined1  [16] __rustcall
<alloc::wtf8::[5]::core::wtf8::Wtf8>::into_arc(void *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  if (0x7fffffffffffffe8 < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              ("capacity overflow",0x23,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff2a8);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar1._0_8_ = (undefined8 *)FUN_004b25a4(param_2 + 0x17 & 0x7ffffffffffffff8,8);
  if (auVar1._0_8_ != (undefined8 *)0x0) {
    auVar1._0_8_[1] = 1;
    *auVar1._0_8_ = 1;
    memcpy(auVar1._0_8_ + 2,param_1,param_2);
    auVar1._8_8_ = param_2;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,param_2 + 0x17 & 0x7ffffffffffffff8);
}


// ===== 00a9031c  <core::ffi::c_str::CStr_as_alloc::borrow::ToOwned>::to_owned =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::CStr as alloc::borrow::ToOwned>::to_owned */

undefined1  [16] __rustcall
<core::ffi::c_str::CStr_as_alloc::borrow::ToOwned>::to_owned(void *param_1,size_t param_2)

{
  undefined1 *__dest;
  undefined1 auVar1 [16];
  
  if (param_2 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(param_2,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(1,param_2);
    }
  }
  memcpy(__dest,param_1,param_2);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = __dest;
  return auVar1;
}


// ===== 00a90388  <alloc::wtf8::[5]::core::wtf8::Wtf8>::to_owned =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::wtf8::[5]::core::wtf8::Wtf8>::to_owned */

void __rustcall
<alloc::wtf8::[5]::core::wtf8::Wtf8>::to_owned(size_t *param_1,void *param_2,size_t param_3)

{
  undefined1 *__dest;
  
  if (param_3 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(param_3,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_3);
    }
    memcpy(__dest,param_2,param_3);
  }
  *param_1 = param_3;
  param_1[1] = (size_t)__dest;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


// ===== 00a903fc  FUN_00a903fc =====

void FUN_00a903fc(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 < 0) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_2 == 0) {
    if (param_4 == 0) {
      lVar1 = 1;
      goto LAB_00a90488;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar1 = FUN_004b25a4(param_4,1);
  }
  else {
    lVar1 = FUN_004b2600(param_3,param_2,1,param_4);
  }
  if (lVar1 == 0) {
    param_1[1] = 1;
    param_1[2] = param_4;
    *param_1 = 1;
    return;
  }
LAB_00a90488:
  param_1[1] = lVar1;
  param_1[2] = param_4;
  *param_1 = 0;
  return;
}


// ===== 00a904a4  <alloc::ffi::c_str::alloc::ffi::c_str::CString>::into_boxed_c_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::alloc::ffi::c_str::CString>::into_boxed_c_str */

void __rustcall <alloc::ffi::c_str::alloc::ffi::c_str::CString>::into_boxed_c_str(void)

{
  return;
}


// ===== 00a904a8  <alloc::ffi::c_str::[D]::core::ffi::c_str::CStr>::to_string_lossy =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::[D]::core::ffi::c_str::CStr>::to_string_lossy */

void __rustcall
<alloc::ffi::c_str::[D]::core::ffi::c_str::CStr>::to_string_lossy(undefined8 param_1,long param_2)

{
  <alloc::string::alloc::string::String>::from_utf8_lossy(param_1,param_2 + -1);
  return;
}


// ===== 00a904b0  <alloc::string::alloc::string::FromUtf8Error>::into_utf8_lossy =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::alloc::string::FromUtf8Error>::into_utf8_lossy */

void __rustcall
<alloc::string::alloc::string::FromUtf8Error>::into_utf8_lossy(ulong *param_1,long *param_2)

{
  undefined2 *puVar1;
  void *__src;
  undefined1 *__dest;
  long lVar2;
  void *__src_00;
  size_t sVar3;
  ulong uVar4;
  ulong local_a8;
  undefined1 *puStack_a0;
  size_t local_98;
  long lStack_90;
  long local_88;
  void *local_80;
  ulong local_78;
  long local_68;
  
  uVar4 = param_2[2];
  if (uVar4 == 0) {
    __dest = &DAT_00000001;
    local_98 = param_2[3];
    if (local_98 != 0) goto code_r0x00a90634;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(uVar4,1);
    if (__dest == (undefined1 *)0x0) {
                    /* try { // try from 00a9064c to 00a90657 has its CatchHandler @ 00a9065c */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,uVar4);
    }
    local_98 = param_2[3];
    if (uVar4 < local_98) {
code_r0x00a90634:
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_98,uVar4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff248);
    }
  }
  __src_00 = (void *)param_2[1];
  local_a8 = uVar4;
  puStack_a0 = __dest;
  lStack_90 = (long)__src_00 + local_98;
  local_88 = uVar4 - local_98;
  if (local_98 != 0) {
    memcpy(__dest,__src_00,local_98);
  }
  do {
                    /* try { // try from 00a90534 to 00a9053f has its CatchHandler @ 00a90664 */
    sVar3 = local_98;
    <core::str::lossy::Utf8Chunks_as_core::iter::traits::iterator::Iterator>::next
              (&local_80,&lStack_90);
    lVar2 = local_68;
    uVar4 = local_78;
    __src = local_80;
    if (local_80 == (void *)0x0) {
      lVar2 = *param_2;
      param_1[1] = (ulong)puStack_a0;
      *param_1 = local_a8;
      param_1[2] = local_98;
      if (lVar2 != 0) {
        free(__src_00);
      }
      return;
    }
    if (local_a8 - sVar3 < local_78) {
                    /* try { // try from 00a905ac to 00a905d3 has its CatchHandler @ 00a90664 */
      FUN_00a8b8b8(&local_a8,sVar3,local_78);
      __dest = puStack_a0;
      sVar3 = local_98;
LAB_00a90564:
      memcpy(__dest + sVar3,__src,uVar4);
    }
    else if (local_78 != 0) goto LAB_00a90564;
    local_98 = sVar3 + uVar4;
    if (lVar2 != 0) {
      if (local_a8 - local_98 < 3) {
        FUN_00a8b8b8(&local_a8,local_98,3);
      }
      puVar1 = (undefined2 *)(puStack_a0 + local_98);
      local_98 = local_98 + 3;
      *puVar1 = 0xbfef;
      *(undefined1 *)(puVar1 + 1) = 0xbd;
      __dest = puStack_a0;
    }
  } while( true );
}


// ===== 00a906ac  <alloc::ffi::c_str::alloc::ffi::c_str::CString>::into_bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::alloc::ffi::c_str::CString>::into_bytes */

void __rustcall
<alloc::ffi::c_str::alloc::ffi::c_str::CString>::into_bytes(long *param_1,long param_2,long param_3)

{
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = param_3 - (ulong)(param_3 != 0);
  return;
}


// ===== 00a906c4  <alloc::ffi::c_str::alloc::ffi::c_str::CString>::into_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::alloc::ffi::c_str::CString>::into_string */

void __rustcall
<alloc::ffi::c_str::alloc::ffi::c_str::CString>::into_string
          (undefined1 (*param_1) [16],undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 auVar5 [16];
  long local_68;
  long local_60;
  undefined8 local_58;
  
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_3;
  lVar3 = param_3 - (ulong)(param_3 != 0);
                    /* try { // try from 00a906f8 to 00a90703 has its CatchHandler @ 00a90778 */
  core::str::converts::from_utf8(&local_68,param_2,lVar3);
  lVar1 = local_60;
  if (((uint)local_68 & 1) == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = (undefined1)local_58;
    uVar2 = local_58._1_1_;
    *(undefined4 *)(param_1[1] + 10) = local_58._2_4_;
    *(undefined2 *)(param_1[1] + 0xe) = local_58._6_2_;
    local_68 = param_3;
    local_60 = param_2;
    local_58 = lVar3;
    auVar5 = _from_vec_unchecked(&local_68);
    param_1[1][9] = uVar2;
    lVar3 = lVar1;
  }
  *param_1 = auVar5;
  *(long *)param_1[1] = lVar3;
  param_1[1][8] = uVar4;
  return;
}


// ===== 00a90798  <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_vec_with_nul =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_vec_with_nul */

void __rustcall
<alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_vec_with_nul
          (undefined8 *param_1,ulong *param_2)

{
  undefined1 *__ptr;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  __ptr = (undefined1 *)param_2[1];
  uVar2 = param_2[2];
  if (uVar2 < 0x10) {
    uVar1 = 0;
    if (uVar2 != 0) {
      do {
        auVar4._8_8_ = uVar1;
        auVar4._0_8_ = 1;
        if (__ptr[uVar1] == '\0') goto LAB_00a90804;
        uVar1 = uVar1 + 1;
      } while (uVar2 != uVar1);
    }
  }
  else {
                    /* try { // try from 00a907f4 to 00a90803 has its CatchHandler @ 00a908f8 */
    auVar4 = core::slice::memchr::memchr_aligned(0,__ptr,uVar2);
LAB_00a90804:
    if (auVar4._0_8_ == 1) {
      if (auVar4._8_8_ + 1U != uVar2) {
        uVar3 = param_2[1];
        uVar1 = *param_2;
        uVar2 = param_2[2];
        *param_1 = 0;
        param_1[1] = auVar4._8_8_;
        param_1[3] = uVar3;
        param_1[2] = uVar1;
        param_1[4] = uVar2;
        return;
      }
      if (uVar2 < *param_2) {
        if (uVar2 == 0) {
          free(__ptr);
          __ptr = &DAT_00000001;
        }
        else {
          __ptr = (undefined1 *)FUN_004b2600(__ptr,*param_2,1,uVar2);
          if (__ptr == (undefined1 *)0x0) {
                    /* try { // try from 00a90844 to 00a9084f has its CatchHandler @ 00a908f0 */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(1,uVar2);
          }
        }
      }
      param_1[1] = __ptr;
      param_1[2] = uVar2;
      *param_1 = 2;
      return;
    }
  }
  uVar3 = param_2[1];
  uVar1 = *param_2;
  uVar2 = param_2[2];
  *param_1 = 1;
  param_1[3] = uVar3;
  param_1[2] = uVar1;
  param_1[4] = uVar2;
  return;
}


// ===== 00a9091c  <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_vec_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_vec_unchecked */

void __rustcall <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_vec_unchecked(void)

{
  (*(code *)PTR__from_vec_unchecked_00b021c0)();
  return;
}


// ===== 00a90920  <alloc::ffi::c_str::alloc::ffi::c_str::CString>::_from_vec_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::alloc::ffi::c_str::CString>::_from_vec_unchecked */

undefined1  [16] __rustcall
<alloc::ffi::c_str::alloc::ffi::c_str::CString>::_from_vec_unchecked(ulong *param_1)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long local_48;
  ulong local_40;
  undefined8 uStack_38;
  
  uVar3 = param_1[2];
  uVar1 = *param_1;
  if (uVar1 == uVar3) {
    FUN_00a903fc(&local_48,uVar3,param_1[1],uVar3 + 1);
    if (local_48 == 1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a90a2c to 00a90a2f has its CatchHandler @ 00a90a34 */
      alloc::raw_vec::handle_error(local_40,uStack_38);
    }
    param_1[1] = local_40;
    __ptr = (void *)param_1[1];
    *(undefined1 *)((long)__ptr + uVar3) = 0;
  }
  else {
    __ptr = (void *)param_1[1];
    *(undefined1 *)((long)__ptr + uVar3) = 0;
    if (uVar3 + 1 < uVar1) {
      lVar2 = uVar3 + 1;
      if (lVar2 == 0) {
        free(__ptr);
        return ZEXT816(1);
      }
      auVar4._0_8_ = FUN_004b2600(__ptr,uVar1,1,lVar2);
      if (auVar4._0_8_ == 0) {
                    /* try { // try from 00a90a18 to 00a90a23 has its CatchHandler @ 00a90a48 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,lVar2);
      }
      auVar4._8_8_ = lVar2;
      return auVar4;
    }
  }
  auVar5._8_8_ = uVar3 + 1;
  auVar5._0_8_ = __ptr;
  return auVar5;
}


// ===== 00a90a64  <alloc::ffi::c_str::alloc::ffi::c_str::CString>::into_bytes_with_nul =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::alloc::ffi::c_str::CString>::into_bytes_with_nul */

void __rustcall
<alloc::ffi::c_str::alloc::ffi::c_str::CString>::into_bytes_with_nul
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}


// ===== 00a90a70  <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_vec_with_nul_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_vec_with_nul_unchecked */

undefined1  [16] __rustcall
<alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_vec_with_nul_unchecked(ulong *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = param_1[2];
  if (*param_1 <= uVar1) {
    auVar3._0_8_ = param_1[1];
    auVar3._8_8_ = uVar1;
    return auVar3;
  }
  if (uVar1 != 0) {
    auVar2._0_8_ = FUN_004b2600((void *)param_1[1],*param_1,1,uVar1);
    if (auVar2._0_8_ != 0) {
      auVar2._8_8_ = uVar1;
      return auVar2;
    }
                    /* try { // try from 00a90b04 to 00a90b0f has its CatchHandler @ 00a90b14 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,uVar1);
  }
  free((void *)param_1[1]);
  return ZEXT816(1);
}


// ===== 00a90b30  <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_raw */

undefined1  [16] __rustcall <alloc::ffi::c_str::alloc::ffi::c_str::CString>::from_raw(char *param_1)

{
  size_t sVar1;
  undefined1 auVar2 [16];
  
  sVar1 = strlen(param_1);
  auVar2._8_8_ = sVar1 + 1;
  auVar2._0_8_ = param_1;
  return auVar2;
}


// ===== 00a90b5c  alloc::rc::rc_inner_layout_for_value_layout =====

/* WARNING: Unknown calling convention: __rustcall */
/* alloc::rc::rc_inner_layout_for_value_layout */

void __rustcall alloc::rc::rc_inner_layout_for_value_layout(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0xf;
  uVar2 = -param_1;
  if (param_1 < 9) {
    param_1 = 8;
  }
  if ((uVar1 & uVar2) + param_2 <= 0x8000000000000000 - param_1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("capacity overflow",0x23,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff260);
}


// ===== 00a90bbc  FUN_00a90bbc =====

undefined8 FUN_00a90bbc(byte *param_1,ulong param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  
  if (param_3 != 0) {
    if (param_3 < param_2) {
      if ((char)param_1[param_3] + 0x40 < 0 != SCARRY4((int)(char)param_1[param_3],0x40)) {
code_r0x00a90bfc:
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (param_1,param_2,0,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff278);
      }
    }
    else if (param_3 != param_2) goto code_r0x00a90bfc;
    pbVar8 = param_1 + param_3;
    do {
      pbVar5 = pbVar8 + -1;
      uVar7 = (uint)(char)*pbVar5;
      if ((int)uVar7 < 0) {
        pbVar5 = pbVar8 + -2;
        bVar1 = *pbVar5;
        if ((char)bVar1 + 0x40 < 0 == SCARRY4((int)(char)bVar1,0x40)) {
          uVar6 = (int)(char)bVar1 & 0x1f;
          uVar7 = uVar7 & 0x3f | uVar6 << 6;
        }
        else {
          pbVar5 = pbVar8 + -3;
          bVar2 = *pbVar5;
          iVar3 = (int)(char)bVar2;
          if (iVar3 == -0x41 || iVar3 + 0x41 < 0 != SCARRY4(iVar3,0x41)) {
            pbVar5 = pbVar8 + -4;
            uVar6 = bVar2 & 0x3f | (*pbVar5 & 7) << 6;
          }
          else {
            uVar6 = (int)(char)bVar2 & 0xf;
          }
          uVar6 = bVar1 & 0x3f | uVar6 << 6;
          uVar7 = uVar7 & 0x3f | uVar6 << 6;
        }
        if (uVar6 < 2) goto LAB_00a90c34;
        if ((uVar7 < 0xa8) ||
           (iVar3 = core::unicode::unicode_data::case_ignorable::lookup_slow(uVar7), iVar3 == 0))
        goto LAB_00a90ce8;
      }
      else {
LAB_00a90c34:
        if (0x39 < uVar7 - 0x27 || (1L << ((ulong)(uVar7 - 0x27) & 0x3f) & 0x280000000080081U) == 0)
        {
LAB_00a90ce8:
          if (0x19 < (uVar7 & 0x1fffdf) - 0x41) {
            if (uVar7 < 0xaa) {
              return 0x3c3;
            }
            uVar4 = core::unicode::unicode_data::lowercase::lookup(uVar7);
            if (((uVar4 & 1) == 0) &&
               (uVar4 = core::unicode::unicode_data::uppercase::lookup(uVar7), (uVar4 & 1) == 0)) {
              if (uVar7 < 0x1c5) {
                return 0x3c3;
              }
              uVar4 = core::unicode::unicode_data::lt::lookup_slow(uVar7);
              if ((uVar4 & 1) == 0) {
                return 0x3c3;
              }
            }
          }
          param_3 = param_3 + 2;
          if (param_3 != 0) {
            if (param_3 < param_2) {
              if ((char)param_1[param_3] + 0x40 < 0 != SCARRY4((int)(char)param_1[param_3],0x40)) {
code_r0x00a90d20:
                    /* WARNING: Subroutine does not return */
                core::str::slice_error_fail
                          (param_1,param_2,param_3,param_2,
                           &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff290);
              }
            }
            else if (param_3 != param_2) goto code_r0x00a90d20;
          }
          if (param_3 == param_2) {
            return 0x3c2;
          }
          pbVar8 = param_1 + param_3;
          goto LAB_00a90de4;
        }
      }
      pbVar8 = pbVar5;
    } while (param_1 != pbVar5);
  }
  return 0x3c3;
LAB_00a90de4:
  pbVar5 = pbVar8 + 1;
  uVar7 = (uint)*pbVar8;
  if ((char)*pbVar8 < '\0') {
    if (uVar7 < 0xe0) {
      uVar7 = pbVar8[1] & 0x3f | (uVar7 & 0x1f) << 6;
      pbVar5 = pbVar8 + 2;
    }
    else {
      uVar6 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
      if (uVar7 < 0xf0) {
        uVar7 = uVar6 | (uVar7 & 0x1f) << 0xc;
        pbVar5 = pbVar8 + 3;
      }
      else {
        pbVar5 = pbVar8 + 4;
        uVar7 = pbVar8[3] & 0x3f | uVar6 << 6 | (uVar7 & 7) << 0x12;
      }
    }
    if (uVar7 < 0x80) goto LAB_00a90dc4;
    if ((uVar7 < 0xa8) ||
       (iVar3 = core::unicode::unicode_data::case_ignorable::lookup_slow(uVar7), iVar3 == 0))
    goto LAB_00a90e78;
  }
  else {
LAB_00a90dc4:
    if (0x39 < uVar7 - 0x27 || (1L << ((ulong)(uVar7 - 0x27) & 0x3f) & 0x280000000080081U) == 0) {
LAB_00a90e78:
      if ((uVar7 & 0x1fffdf) - 0x41 < 0x1a) {
        return 0x3c3;
      }
      if (uVar7 < 0xaa) {
        return 0x3c2;
      }
      uVar4 = core::unicode::unicode_data::lowercase::lookup(uVar7);
      if ((uVar4 & 1) != 0) {
        return 0x3c3;
      }
      uVar4 = core::unicode::unicode_data::uppercase::lookup(uVar7);
      if ((uVar4 & 1) == 0) {
        if (uVar7 < 0x1c5) {
          return 0x3c2;
        }
        iVar3 = core::unicode::unicode_data::lt::lookup_slow(uVar7);
        if (iVar3 == 0) {
          return 0x3c2;
        }
        return 0x3c3;
      }
      return 0x3c3;
    }
  }
  pbVar8 = pbVar5;
  if (pbVar5 == param_1 + param_2) {
    return 0x3c2;
  }
  goto LAB_00a90de4;
}


// ===== 00a90ec0  alloc::sync::arcinner_layout_for_value_layout =====

/* WARNING: Unknown calling convention: __rustcall */
/* alloc::sync::arcinner_layout_for_value_layout */

void __rustcall alloc::sync::arcinner_layout_for_value_layout(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0xf;
  uVar2 = -param_1;
  if (param_1 < 9) {
    param_1 = 8;
  }
  if ((uVar1 & uVar2) + param_2 <= 0x8000000000000000 - param_1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("capacity overflow",0x23,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff2a8);
}


// ===== 00a90f20  alloc::alloc::handle_alloc_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* alloc::alloc::handle_alloc_error */

void __rustcall alloc::alloc::handle_alloc_error(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = __rustc::__rust_alloc_error_handler(param_2,param_1);
  if (lVar1 == 0) {
    raw_vec::capacity_overflow();
  }
                    /* WARNING: Subroutine does not return */
  handle_alloc_error();
}


// ===== 00a90f38  alloc::raw_vec::handle_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* alloc::raw_vec::handle_error */

void __rustcall alloc::raw_vec::handle_error(long param_1)

{
  if (param_1 == 0) {
    capacity_overflow();
  }
                    /* WARNING: Subroutine does not return */
  alloc::handle_alloc_error();
}


// ===== 00a90f4c  alloc::raw_vec::capacity_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* alloc::raw_vec::capacity_overflow */

void __rustcall alloc::raw_vec::capacity_overflow(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("capacity overflow",0x23,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff2f0);
}


// ===== 00a90f6c  alloc::io::error::custom_owner_from_box =====

/* WARNING: Unknown calling convention: __rustcall */
/* alloc::io::error::custom_owner_from_box */

void __rustcall
alloc::io::error::custom_owner_from_box(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined7 uStack_27;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x28,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_3;
    *puVar1 = param_2;
    puVar1[3] = FUN_00a8b9a8;
    puVar1[2] = FUN_00a8b930;
    puVar1[4] = CONCAT71(uStack_27,param_1);
    return;
  }
                    /* try { // try from 00a90fd0 to 00a90fdb has its CatchHandler @ 00a90fe0 */
                    /* WARNING: Subroutine does not return */
  alloc::handle_alloc_error(8,0x28);
}


// ===== 00a90ff8  <alloc::vec::alloc::vec::Vec<_,_>>::insert_mut::assert_failed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::vec::alloc::vec::Vec<_, _>>::insert_mut::assert_failed */

void __rustcall
<alloc::vec::alloc::vec::Vec<_,_>>::insert_mut::assert_failed(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_00a92ba4(&local_40,&DAT_002a5b72);
}


// ===== 00a91020  <alloc::vec::alloc::vec::Vec<_,_>>::swap_remove::assert_failed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::vec::alloc::vec::Vec<_, _>>::swap_remove::assert_failed */

void __rustcall
<alloc::vec::alloc::vec::Vec<_,_>>::swap_remove::assert_failed
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_00a92ba4(&local_40,&DAT_002b107d,param_2,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff338);
}


// ===== 00a91050  <alloc::vec::alloc::vec::Vec<_,_>>::remove::assert_failed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::vec::alloc::vec::Vec<_, _>>::remove::assert_failed */

void __rustcall
<alloc::vec::alloc::vec::Vec<_,_>>::remove::assert_failed(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_00a92ba4(&local_40,&DAT_002ab4ed);
}


// ===== 00a91078  <alloc::vec::alloc::vec::Vec<_,_>>::split_off::assert_failed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::vec::alloc::vec::Vec<_, _>>::split_off::assert_failed */

void __rustcall
<alloc::vec::alloc::vec::Vec<_,_>>::split_off::assert_failed(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_00a92ba4(&local_40,&DAT_002a6fe7);
}


// ===== 00a910a0  alloc::fmt::format::format_inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* alloc::fmt::format::format_inner */

void __rustcall alloc::fmt::format::format_inner(ulong *param_1,byte *param_2,ulong param_3)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  undefined1 uStack_21;
  
  if ((param_3 & 1) == 0) {
    bVar2 = *param_2;
    if (bVar2 != 0) {
      bVar3 = 0;
      uVar5 = 0;
      pbVar6 = param_2;
      do {
        puVar1 = (ushort *)(pbVar6 + 1);
        if ((char)bVar2 < '\0') {
          if (bVar2 == 0x80) {
            uVar5 = uVar5 + *puVar1;
            pbVar6 = (byte *)((long)puVar1 + (ulong)*puVar1 + 2);
          }
          else {
            bVar3 = uVar5 == 0 | bVar3;
            pbVar6 = (byte *)((long)puVar1 +
                             (ulong)((((bVar2 & 3) >> 1 | (bVar2 & 1) << 1) << 0x1e) >> 0x1d) +
                             (ulong)(bVar2 >> 2 & 2) + (ulong)(bVar2 >> 1 & 2));
          }
        }
        else {
          uVar5 = uVar5 + bVar2;
          pbVar6 = (byte *)((long)puVar1 + (ulong)bVar2);
        }
        bVar2 = *pbVar6;
      } while (bVar2 != 0);
      if ((bool)(bVar3 & uVar5 < 0x10)) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 << 1;
        if ((long)uVar5 < 0) {
          uVar7 = 0;
          goto LAB_00a91220;
        }
      }
      goto LAB_00a91184;
    }
    uVar5 = 0;
  }
  else {
    uVar5 = param_3 >> 1;
LAB_00a91184:
    if (uVar5 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar7 = 1;
      uStack_50 = FUN_004b25a4(uVar5,1);
      if (uStack_50 == 0) {
LAB_00a91220:
                    /* WARNING: Subroutine does not return */
        raw_vec::handle_error(uVar7,uVar5);
      }
      goto LAB_00a911a8;
    }
  }
  uStack_50 = 1;
LAB_00a911a8:
  local_48 = 0;
                    /* try { // try from 00a911b0 to 00a91217 has its CatchHandler @ 00a9122c */
  local_58 = uVar5;
  iVar4 = core::fmt::write(&local_58,&PTR_FUN_00aff350,param_2,param_3);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("a formatting trait implementation returned an error when the underlying stream did not"
               ,0x56,&uStack_21,&DAT_00aff1c8,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff380);
  }
  param_1[1] = uStack_50;
  *param_1 = local_58;
  param_1[2] = local_48;
  return;
}


// ===== 00a91250  alloc::alloc::handle_alloc_error::ct_error =====

/* WARNING: Unknown calling convention: __rustcall */
/* alloc::alloc::handle_alloc_error::ct_error */

void __rustcall alloc::alloc::handle_alloc_error::ct_error(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            ("allocation failed",0x23,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff398);
}


// ===== 00a91270  <<alloc::string::alloc::string::String>::retain::SetLenOnDrop_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<alloc::string::alloc::string::String>::retain::SetLenOnDrop as core::ops::drop::Drop>::drop */

void __rustcall
<<alloc::string::alloc::string::String>::retain::SetLenOnDrop_as_core::ops::drop::Drop>::drop
          (long *param_1)

{
  *(long *)(*param_1 + 0x10) = param_1[1] - param_1[2];
  return;
}


// ===== 00a91284  <alloc::string::FromUtf8Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::FromUtf8Error as core::fmt::Display>::fmt */

void __rustcall <alloc::string::FromUtf8Error_as_core::fmt::Display>::fmt(long param_1)

{
  <core::str::error::Utf8Error_as_core::fmt::Display>::fmt(param_1 + 0x18);
  return;
}


// ===== 00a9128c  <alloc::collections::vec_deque::index::WrappedIndex_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::vec_deque::index::WrappedIndex as core::fmt::Display>::fmt */

void __rustcall
<alloc::collections::vec_deque::index::WrappedIndex_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b01800)();
  return;
}


// ===== 00a91290  <&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&str as <alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl */

void __rustcall
<&str_as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
          (long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_58;
  void *pvStack_50;
  ulong local_48;
  
  lVar1 = param_3 + 1;
  if (lVar1 < 0) {
    uVar4 = 0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar4 = 1;
    __dest = (void *)FUN_004b25a4(lVar1,1);
    if (__dest != (void *)0x0) {
      if (param_3 == 0) {
        uVar3 = 0;
        lVar2 = 0;
      }
      else {
        memcpy(__dest,param_2,param_3);
        if (param_3 < 0x10) {
          uVar3 = 0;
          lVar2 = 1;
          do {
            if (*(char *)((long)param_2 + uVar3) == '\0') goto LAB_00a91338;
            uVar3 = uVar3 + 1;
          } while (param_3 != uVar3);
          lVar2 = 0;
          uVar3 = param_3;
        }
        else {
                    /* try { // try from 00a91328 to 00a91337 has its CatchHandler @ 00a913a4 */
          auVar5 = core::slice::memchr::memchr_aligned(0,param_2,param_3);
          uVar3 = auVar5._8_8_;
          lVar2 = auVar5._0_8_;
        }
      }
LAB_00a91338:
      if (lVar2 == 1) {
        *param_1 = lVar1;
        param_1[1] = (long)__dest;
        param_1[2] = param_3;
        param_1[3] = uVar3;
        return;
      }
      local_58 = lVar1;
      pvStack_50 = __dest;
      local_48 = param_3;
      auVar5 = <alloc::ffi::c_str::alloc::ffi::c_str::CString>::_from_vec_unchecked(&local_58);
      *(undefined1 (*) [16])(param_1 + 1) = auVar5;
      *param_1 = -1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar4,lVar1);
}


// ===== 00a913c0  <<alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::error::Error+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>as_core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::string::String>>::from::StringError_as_core[bcece726f298455b]::fmt::Debug>::fmt =====

/* <<alloc[c1f8e832b0d782c7]::boxed::Box<dyn core[bcece726f298455b]::error::Error +
   core[bcece726f298455b]::marker::Sync + core[bcece726f298455b]::marker::Send> as
   core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::string::String>>::from::StringError
   as core[bcece726f298455b]::fmt::Debug>::fmt */

void <<alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::error::Error+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>as_core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::string::String>>::from::StringError_as_core[bcece726f298455b]::fmt::Debug>
     ::fmt(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00a913d4  <alloc::string::IntoChars_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::IntoChars as core::fmt::Debug>::fmt */

void __rustcall <alloc::string::IntoChars_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  long local_30;
  long lStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_48,param_2,"IntoChars",9);
  local_30 = *(long *)(param_1 + 8);
  lStack_28 = *(long *)(param_1 + 0x18) - local_30;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_48,&local_30,&DAT_00aff3b0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 00a9143c  <alloc::string::Drain_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::Drain as core::fmt::Debug>::fmt */

void __rustcall <alloc::string::Drain_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  long local_30;
  long lStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple
            (auStack_48,param_2,
             "Drainkey is not properly ordered relative to neighborsinvalid utf-16: lone surrogate foundinvalid utf-16: odd number of bytes"
             ,5);
  local_30 = *param_1;
  lStack_28 = param_1[1] - local_30;
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
            (auStack_48,&local_30,&DAT_00aff3b0);
  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 00a914a0  <alloc::string::Drain_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::Drain as core::ops::drop::Drop>::drop */

void __rustcall <alloc::string::Drain_as_core::ops::drop::Drop>::drop(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = *(ulong *)(param_1 + 0x20);
  if (uVar1 <= uVar2) {
    lVar4 = *(long *)(param_1 + 0x10);
    uVar3 = *(ulong *)(lVar4 + 0x10);
    if (uVar2 <= uVar3) {
      *(ulong *)(lVar4 + 0x10) = uVar1;
      if (uVar2 == uVar1) {
        if (uVar3 != uVar2) {
LAB_00a9150c:
          *(ulong *)(lVar4 + 0x10) = (uVar3 - uVar2) + uVar1;
          return;
        }
      }
      else if (uVar3 != uVar2) {
        memmove((void *)(*(long *)(lVar4 + 8) + uVar1),(void *)(*(long *)(lVar4 + 8) + uVar2),
                uVar3 - uVar2);
        goto LAB_00a9150c;
      }
    }
  }
  return;
}


// ===== 00a91524  <alloc::collections::btree::map::UnorderedKeyError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::btree::map::UnorderedKeyError as core::fmt::Display>::fmt */

void __rustcall
<alloc::collections::btree::map::UnorderedKeyError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00a9153c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,
             "key is not properly ordered relative to neighborsinvalid utf-16: lone surrogate foundinvalid utf-16: odd number of bytes"
             ,0x31);
  return;
}


// ===== 00a91540  <alloc::wtf8::Wtf8Buf_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::wtf8::Wtf8Buf as core::fmt::Display>::fmt */

void __rustcall <alloc::wtf8::Wtf8Buf_as_core::fmt::Display>::fmt(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    <str_as_core::fmt::Display>::fmt();
    return;
  }
  <core::wtf8::Wtf8_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00a91564  <alloc::string::FromUtf16Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::FromUtf16Error as core::fmt::Display>::fmt */

void __rustcall
<alloc::string::FromUtf16Error_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = 0x23;
  if (*param_1 == '\0') {
    uVar1 = 0x24;
  }
  pcVar2 = "invalid utf-16: odd number of bytes";
  if (*param_1 == '\0') {
    pcVar2 = "invalid utf-16: lone surrogate foundinvalid utf-16: odd number of bytes";
  }
  <str_as_core::fmt::Display>::fmt(pcVar2,uVar1,param_2);
  return;
}


// ===== 00a91590  <&mut[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&mut [u8] as <alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
    */

void __rustcall
<&mut[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
          (long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_58;
  void *pvStack_50;
  ulong local_48;
  
  lVar1 = param_3 + 1;
  if (lVar1 < 0) {
    uVar4 = 0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar4 = 1;
    __dest = (void *)FUN_004b25a4(lVar1,1);
    if (__dest != (void *)0x0) {
      if (param_3 == 0) {
        uVar3 = 0;
        lVar2 = 0;
      }
      else {
        memcpy(__dest,param_2,param_3);
        if (param_3 < 0x10) {
          uVar3 = 0;
          lVar2 = 1;
          do {
            if (*(char *)((long)param_2 + uVar3) == '\0') goto LAB_00a91638;
            uVar3 = uVar3 + 1;
          } while (param_3 != uVar3);
          lVar2 = 0;
          uVar3 = param_3;
        }
        else {
                    /* try { // try from 00a91628 to 00a91637 has its CatchHandler @ 00a916a4 */
          auVar5 = core::slice::memchr::memchr_aligned(0,param_2,param_3);
          uVar3 = auVar5._8_8_;
          lVar2 = auVar5._0_8_;
        }
      }
LAB_00a91638:
      if (lVar2 == 1) {
        *param_1 = lVar1;
        param_1[1] = (long)__dest;
        param_1[2] = param_3;
        param_1[3] = uVar3;
        return;
      }
      local_58 = lVar1;
      pvStack_50 = __dest;
      local_48 = param_3;
      auVar5 = <alloc::ffi::c_str::alloc::ffi::c_str::CString>::_from_vec_unchecked(&local_58);
      *(undefined1 (*) [16])(param_1 + 1) = auVar5;
      *param_1 = -1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar4,lVar1);
}


// ===== 00a916c0  <alloc::string::Drain_as_core::convert::AsRef<[u8]>>::as_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::Drain as core::convert::AsRef<[u8]>>::as_ref */

undefined1  [16] __rustcall
<alloc::string::Drain_as_core::convert::AsRef<[u8]>>::as_ref(long *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_1[1] - *param_1;
  auVar1._0_8_ = *param_1;
  return auVar1;
}


// ===== 00a916d0  <alloc::string::Drain_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::Drain as core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<alloc::string::Drain_as_core::iter::traits::iterator::Iterator>::size_hint
          (ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1] - *param_2;
  uVar2 = uVar1 >> 2;
  param_1[2] = uVar1;
  if ((uVar1 & 3) != 0) {
    uVar2 = uVar2 + 1;
  }
  *param_1 = uVar2;
  param_1[1] = 1;
  return;
}


// ===== 00a916f4  FUN_00a916f4 =====

void FUN_00a916f4(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a91708  <alloc::collections::TryReserveError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::TryReserveError as core::fmt::Display>::fmt */

undefined8 __rustcall
<alloc::collections::TryReserveError_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str
                    (param_2,
                     "memory allocation failed because the computed capacity exceeded the collection\'s maximum"
                     ,0x18);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar3 = 0x40;
  if (*param_1 != 0) {
    uVar3 = 0x2f;
  }
  pcVar1 = " because the computed capacity exceeded the collection\'s maximum";
  if (*param_1 != 0) {
    pcVar1 = " because the memory allocator returned an error";
  }
  uVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pcVar1,uVar3);
  return uVar3;
}


// ===== 00a9177c  <alloc::ffi::c_str::CString_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::CString as core::fmt::Debug>::fmt */

void __rustcall
<alloc::ffi::c_str::CString_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  <core::ffi::c_str::CStr_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00a91790  <alloc::io::buffered::bufwriter::WriterPanicked_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::buffered::bufwriter::WriterPanicked as core::fmt::Display>::fmt */

void __rustcall
<alloc::io::buffered::bufwriter::WriterPanicked_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            ("BufWriter inner writer panicked, what data remains unwritten is not known",0x49,
             param_2);
  return;
}


// ===== 00a917a4  <alloc::io::buffered::bufwriter::WriterPanicked_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::io::buffered::bufwriter::WriterPanicked as core::fmt::Debug>::fmt */

void __rustcall
<alloc::io::buffered::bufwriter::WriterPanicked_as_core::fmt::Debug>::fmt
          (undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [16];
  undefined *local_58;
  undefined8 **ppuStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined *puStack_38;
  undefined8 *local_30;
  undefined *puStack_28;
  undefined8 local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_68,param_2,"WriterPanicked",0xe);
  local_48 = param_1[2];
  local_8 = *param_1;
  local_40 = &local_48;
  puStack_38 = PTR_fmt_00b00c10;
  local_30 = &local_8;
  puStack_28 = PTR_fmt_00b00c10;
  ppuStack_50 = &local_40;
  local_58 = &DAT_002aafa7;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_68,"buffer",6,&local_58,&DAT_00aff3d0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a91840  <alloc::string::String_as_core::clone::Clone>::clone_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as core::clone::Clone>::clone_from */

void __rustcall
<alloc::string::String_as_core::clone::Clone>::clone_from(ulong *param_1,long param_2)

{
  void *__src;
  ulong __n;
  ulong uVar1;
  ulong uVar2;
  
  __src = *(void **)(param_2 + 8);
  __n = *(ulong *)(param_2 + 0x10);
  param_1[2] = 0;
  if (*param_1 < __n) {
    FUN_00a8b8b8(param_1,0,__n);
    uVar1 = param_1[2];
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
    if (__n == 0) goto LAB_00a91888;
  }
  uVar2 = uVar1;
  memcpy((void *)(param_1[1] + uVar2),__src,__n);
LAB_00a91888:
  param_1[2] = uVar2 + __n;
  return;
}


// ===== 00a918c0  <alloc::string::String_as_core::clone::Clone>::clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as core::clone::Clone>::clone */

void __rustcall <alloc::string::String_as_core::clone::Clone>::clone(size_t *param_1,long param_2)

{
  void *__dest;
  size_t __n;
  void *__src;
  
  __n = *(size_t *)(param_2 + 0x10);
  if (__n == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  __src = *(void **)(param_2 + 8);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(__n,1);
  if (__dest != (void *)0x0) {
    memcpy(__dest,__src,__n);
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,__n);
}


// ===== 00a91944  <alloc::ffi::c_str::CString_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::CString as core::default::Default>::default */

void __rustcall <alloc::ffi::c_str::CString_as_core::default::Default>::default(void)

{
  undefined1 *puVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined1 *)FUN_004b25a4(1,1);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(1,1);
}


// ===== 00a9197c  <alloc[c1f8e832b0d782c7]::boxed::Box<core[bcece726f298455b]::ffi::c_str::CStr>as_core[bcece726f298455b]::convert::From<&core[bcece726f298455b]::ffi::c_str::CStr>>::from =====

/* <alloc[c1f8e832b0d782c7]::boxed::Box<core[bcece726f298455b]::ffi::c_str::CStr> as
   core[bcece726f298455b]::convert::From<&core[bcece726f298455b]::ffi::c_str::CStr>>::from */

undefined1  [16]
<alloc[c1f8e832b0d782c7]::boxed::Box<core[bcece726f298455b]::ffi::c_str::CStr>as_core[bcece726f298455b]::convert::From<&core[bcece726f298455b]::ffi::c_str::CStr>>
::from(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == 0) {
    lVar1 = 1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar1 = FUN_004b25a4(param_2,1);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(1,param_2);
    }
  }
                    /* try { // try from 00a919cc to 00a919d7 has its CatchHandler @ 00a919f0 */
  <core::ffi::c_str::CStr_as_core::clone::CloneToUninit>::clone_to_uninit(param_1,param_2,lVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar1;
  return auVar2;
}


// ===== 00a91a10  <alloc[c1f8e832b0d782c7]::boxed::Box<core[bcece726f298455b]::ffi::c_str::CStr>as_core[bcece726f298455b]::convert::From<&mut_core[bcece726f298455b]::ffi::c_str::CStr>>::from =====

/* <alloc[c1f8e832b0d782c7]::boxed::Box<core[bcece726f298455b]::ffi::c_str::CStr> as
   core[bcece726f298455b]::convert::From<&mut core[bcece726f298455b]::ffi::c_str::CStr>>::from */

undefined1  [16]
<alloc[c1f8e832b0d782c7]::boxed::Box<core[bcece726f298455b]::ffi::c_str::CStr>as_core[bcece726f298455b]::convert::From<&mut_core[bcece726f298455b]::ffi::c_str::CStr>>
::from(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == 0) {
    lVar1 = 1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar1 = FUN_004b25a4(param_2,1);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(1,param_2);
    }
  }
                    /* try { // try from 00a91a60 to 00a91a6b has its CatchHandler @ 00a91a84 */
  <core::ffi::c_str::CStr_as_core::clone::CloneToUninit>::clone_to_uninit(param_1,param_2,lVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar1;
  return auVar2;
}


// ===== 00a91aa4  <alloc::vec::Vec<u8>as_core::convert::From<&str>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::vec::Vec<u8> as core::convert::From<&str>>::from */

void __rustcall
<alloc::vec::Vec<u8>as_core::convert::From<&str>>::from
          (size_t *param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  if (param_3 == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 1;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __dest = (void *)FUN_004b25a4(param_3,1);
  if (__dest != (void *)0x0) {
    *param_1 = param_3;
    param_1[1] = (size_t)__dest;
    memcpy(__dest,param_2,param_3);
    param_1[2] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(1,param_3);
}


// ===== 00a91b24  FUN_00a91b24 =====

void FUN_00a91b24(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Error",5);
  return;
}


// ===== 00a91b38  <alloc::boxed::Box<str>as_core::convert::From<alloc::string::String>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::boxed::Box<str> as core::convert::From<alloc::string::String>>::from */

undefined1  [16] __rustcall
<alloc::boxed::Box<str>as_core::convert::From<alloc::string::String>>::from(ulong *param_1)

{
  void *__ptr;
  ulong uVar1;
  undefined1 auVar2 [16];
  
  __ptr = *(void **)*(undefined1 (*) [16])(param_1 + 1);
  uVar1 = param_1[2];
  if (*param_1 <= uVar1) {
    return *(undefined1 (*) [16])(param_1 + 1);
  }
  if (uVar1 != 0) {
    auVar2._0_8_ = FUN_004b2600(__ptr,*param_1,1,uVar1);
    if (auVar2._0_8_ != 0) {
      auVar2._8_8_ = uVar1;
      return auVar2;
    }
                    /* try { // try from 00a91bc8 to 00a91bd3 has its CatchHandler @ 00a91bd8 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,uVar1);
  }
  free(__ptr);
  return ZEXT816(1);
}


// ===== 00a91bf4  <alloc::string::String_as_core::convert::From<alloc::borrow::Cow<str>>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as core::convert::From<alloc::borrow::Cow<str>>>::from */

void __rustcall
<alloc::string::String_as_core::convert::From<alloc::borrow::Cow<str>>>::from
          (size_t *param_1,size_t *param_2)

{
  void *__dest;
  size_t sVar1;
  void *__src;
  size_t sVar2;
  
  if (*param_2 != 0xffffffffffffffff) {
    sVar2 = *param_2;
    sVar1 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = sVar2;
    param_1[2] = sVar1;
    return;
  }
  sVar1 = param_2[2];
  if (sVar1 != 0) {
    __src = (void *)param_2[1];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)FUN_004b25a4(sVar1,1);
    if (__dest != (void *)0x0) {
      memcpy(__dest,__src,sVar1);
      *param_1 = sVar1;
      param_1[1] = (size_t)__dest;
      param_1[2] = sVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,sVar1);
  }
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  return;
}


// ===== 00a91ca4  <alloc::string::String_as_core::convert::TryFrom<alloc::vec::Vec<u8>>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as core::convert::TryFrom<alloc::vec::Vec<u8>>>::try_from */

void __rustcall
<alloc::string::String_as_core::convert::TryFrom<alloc::vec::Vec<u8>>>::try_from
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
                    /* try { // try from 00a91cc4 to 00a91ccf has its CatchHandler @ 00a91d40 */
  core::str::converts::from_utf8(&local_78,param_2[1],param_2[2]);
  if (local_78 == 1) {
    uVar1 = param_2[2];
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[4] = uStack_68;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[3] = local_70;
    param_1[2] = uVar1;
    return;
  }
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar1 = param_2[2];
  *param_1 = 0xffffffffffffffff;
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  param_1[3] = uVar1;
  return;
}


// ===== 00a91d60  FUN_00a91d60 =====

undefined8 FUN_00a91d60(long *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_1[2];
  if (param_2 < 0x80) {
    uVar6 = 1;
  }
  else if (param_2 < 0x800) {
    uVar6 = 2;
  }
  else {
    uVar6 = 3;
    if (0xffff < param_2) {
      uVar6 = 4;
    }
  }
  if ((ulong)(*param_1 - lVar5) < uVar6) {
    FUN_00a8b8b8(param_1,lVar5,uVar6);
    lVar4 = param_1[1];
  }
  else {
    lVar4 = param_1[1];
  }
  pbVar3 = (byte *)(lVar4 + lVar5);
  if (param_2 < 0x80) {
    *pbVar3 = (byte)param_2;
  }
  else {
    bVar1 = (byte)param_2 & 0x3f | 0x80;
    if (param_2 < 0x800) {
      pbVar3[1] = bVar1;
      *pbVar3 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar2 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      if (param_2 >> 0x10 == 0) {
        pbVar3[1] = bVar2;
        pbVar3[2] = bVar1;
        *pbVar3 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        pbVar3[2] = bVar2;
        pbVar3[3] = bVar1;
        pbVar3[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        *pbVar3 = (byte)(param_2 >> 0x12) | 0xf0;
      }
    }
  }
  param_1[2] = uVar6 + lVar5;
  return 0;
}


// ===== 00a91e7c  FUN_00a91e7c =====

undefined8 FUN_00a91e7c(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_00a8b8b8(param_1,lVar1,param_3);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00a91ebc;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_00a91ebc:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 00a91ef8  <core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::ffi::c_str::NulError>>::from =====

/* <core[bcece726f298455b]::io::error::Error as
   core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::ffi::c_str::NulError>>::from */

undefined **
<core[bcece726f298455b]::io::error::Error_as_core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::ffi::c_str::NulError>>
::from(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  return &PTR_s_data_provided_contains_a_nul_byt_00aff3f0;
}


// ===== 00a91f24  <&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&[u8] as <alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl */

void __rustcall
<&[u8]as<alloc::ffi::c_str::alloc::ffi::c_str::CString>::new::SpecNewImpl>::spec_new_impl
          (long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_58;
  void *pvStack_50;
  ulong local_48;
  
  lVar1 = param_3 + 1;
  if (lVar1 < 0) {
    uVar4 = 0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar4 = 1;
    __dest = (void *)FUN_004b25a4(lVar1,1);
    if (__dest != (void *)0x0) {
      if (param_3 == 0) {
        uVar3 = 0;
        lVar2 = 0;
      }
      else {
        memcpy(__dest,param_2,param_3);
        if (param_3 < 0x10) {
          uVar3 = 0;
          lVar2 = 1;
          do {
            if (*(char *)((long)param_2 + uVar3) == '\0') goto LAB_00a91fcc;
            uVar3 = uVar3 + 1;
          } while (param_3 != uVar3);
          lVar2 = 0;
          uVar3 = param_3;
        }
        else {
                    /* try { // try from 00a91fbc to 00a91fcb has its CatchHandler @ 00a92038 */
          auVar5 = core::slice::memchr::memchr_aligned(0,param_2,param_3);
          uVar3 = auVar5._8_8_;
          lVar2 = auVar5._0_8_;
        }
      }
LAB_00a91fcc:
      if (lVar2 == 1) {
        *param_1 = lVar1;
        param_1[1] = (long)__dest;
        param_1[2] = param_3;
        param_1[3] = uVar3;
        return;
      }
      local_58 = lVar1;
      pvStack_50 = __dest;
      local_48 = param_3;
      auVar5 = <alloc::ffi::c_str::alloc::ffi::c_str::CString>::_from_vec_unchecked(&local_58);
      *(undefined1 (*) [16])(param_1 + 1) = auVar5;
      *param_1 = -1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar4,lVar1);
}


// ===== 00a92054  <<alloc::io::buffered::bufwriter::alloc::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<alloc::io::buffered::bufwriter::alloc::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard
   as core::ops::drop::Drop>::drop */

void __rustcall
<<alloc::io::buffered::bufwriter::alloc::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard_as_core::ops::drop::Drop>
::drop(long *param_1)

{
  ulong __n;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    lVar3 = *param_1;
    uVar2 = *(ulong *)(lVar3 + 0x10);
    __n = uVar2 - uVar1;
    if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar1,uVar2,uVar2,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff320);
    }
    memmove(*(void **)(lVar3 + 8),(void *)((long)*(void **)(lVar3 + 8) + uVar1),__n);
    if (__n <= *(ulong *)(lVar3 + 0x10)) {
      *(ulong *)(lVar3 + 0x10) = __n;
    }
  }
  return;
}


// ===== 00a920bc  <<alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::error::Error+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>as_core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::string::String>>::from::StringError_as_core[bcece726f298455b]::fmt::Display>::fmt =====

/* <<alloc[c1f8e832b0d782c7]::boxed::Box<dyn core[bcece726f298455b]::error::Error +
   core[bcece726f298455b]::marker::Sync + core[bcece726f298455b]::marker::Send> as
   core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::string::String>>::from::StringError
   as core[bcece726f298455b]::fmt::Display>::fmt */

void <<alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::error::Error+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>as_core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::string::String>>::from::StringError_as_core[bcece726f298455b]::fmt::Display>
     ::fmt(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00a920d0  <alloc::boxed::Box<str>as_core::clone::Clone>::clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::boxed::Box<str> as core::clone::Clone>::clone */

undefined1  [16] __rustcall
<alloc::boxed::Box<str>as_core::clone::Clone>::clone(undefined8 *param_1)

{
  void *__src;
  size_t __n;
  undefined1 *__dest;
  undefined1 auVar1 [16];
  
  __src = (void *)*param_1;
  __n = param_1[1];
  if (__n == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(__n,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(1,__n);
    }
  }
  memcpy(__dest,__src,__n);
  auVar1._8_8_ = __n;
  auVar1._0_8_ = __dest;
  return auVar1;
}


// ===== 00a92138  <alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::error::Error>as_core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::string::String>>::from =====

/* <alloc[c1f8e832b0d782c7]::boxed::Box<dyn core[bcece726f298455b]::error::Error> as
   core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::string::String>>::from */

void <alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::error::Error>as_core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::string::String>>
     ::from(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar4;
    return;
  }
                    /* try { // try from 00a92184 to 00a9218f has its CatchHandler @ 00a92194 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 00a921b4  <alloc::borrow::Cow<str>as_core::ops::arith::AddAssign<&str>>::add_assign =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::borrow::Cow<str> as core::ops::arith::AddAssign<&str>>::add_assign */

void __rustcall
<alloc::borrow::Cow<str>as_core::ops::arith::AddAssign<&str>>::add_assign
          (ulong *param_1,void *param_2,ulong param_3)

{
  size_t sVar1;
  ulong uVar2;
  size_t __n;
  void *pvVar3;
  void *__src;
  undefined8 uVar4;
  ulong local_68;
  ulong uStack_60;
  size_t local_58;
  
  __n = param_1[2];
  if (__n == 0) {
    if (0 < (long)*param_1) {
      free((void *)param_1[1]);
    }
    *param_1 = 0xffffffffffffffff;
    param_1[1] = (ulong)param_2;
    goto LAB_00a92334;
  }
  if (param_3 == 0) {
    return;
  }
  uVar2 = *param_1;
  if (*param_1 == 0xffffffffffffffff) {
    uVar2 = __n + param_3;
    if ((long)uVar2 < 0) {
      uVar4 = 0;
LAB_00a92370:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar4,uVar2);
    }
    pvVar3 = (void *)param_1[1];
    local_68 = uVar2;
    if (uVar2 == 0) {
      uStack_60 = 1;
      if (__n == 0) goto LAB_00a9222c;
LAB_00a922ec:
                    /* try { // try from 00a922ec to 00a922fb has its CatchHandler @ 00a92388 */
      local_58 = 0;
      FUN_00a8b8b8(&local_68,0,__n);
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar4 = 1;
      uStack_60 = FUN_004b25a4(uVar2,1);
      if (uStack_60 == 0) goto LAB_00a92370;
      if (uVar2 < __n) goto LAB_00a922ec;
LAB_00a9222c:
      local_58 = 0;
    }
    sVar1 = local_58;
    memcpy((void *)(uStack_60 + local_58),pvVar3,__n);
    __n = sVar1 + __n;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[2] = __n;
    uVar2 = *param_1;
    local_58 = __n;
    if (*param_1 == 0xffffffffffffffff) {
      if (__n == 0) {
        uVar2 = 0;
        *param_1 = 0;
        param_1[1] = 1;
      }
      else {
        __src = (void *)param_1[1];
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        pvVar3 = (void *)FUN_004b25a4(__n,1);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(1,__n);
        }
        memcpy(pvVar3,__src,__n);
        *param_1 = __n;
        param_1[1] = (ulong)pvVar3;
        uVar2 = __n;
        if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("internal error: entered unreachable code",0x28,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff200);
        }
      }
    }
  }
  if (uVar2 - __n < param_3) {
    FUN_00a8b8b8(param_1,__n,param_3);
    __n = param_1[2];
  }
  memcpy((void *)(param_1[1] + __n),param_2,param_3);
  param_3 = __n + param_3;
LAB_00a92334:
  param_1[2] = param_3;
  return;
}


// ===== 00a923a8  <[&str]as_alloc::string::SpecExtendStr>::spec_extend_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <[&str] as alloc::string::SpecExtendStr>::spec_extend_into */

void __rustcall
<[&str]as_alloc::string::SpecExtendStr>::spec_extend_into
          (undefined8 *param_1,long param_2,long *param_3)

{
  size_t __n;
  long lVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar7;
  void *__dest;
  undefined8 *puVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
    lVar7 = param_3[2];
  }
  else {
    lVar1 = param_2 * 2;
    uVar4 = 0;
    puVar3 = param_1 + 1;
    do {
      bVar2 = CARRY8(uVar4,*puVar3);
      uVar4 = uVar4 + *puVar3;
      if (bVar2) {
        uVar4 = 0xffffffffffffffff;
      }
      param_2 = param_2 + -1;
      puVar3 = puVar3 + 2;
    } while (param_2 != 0);
    lVar7 = param_3[2];
    if ((ulong)(*param_3 - lVar7) < uVar4) {
      FUN_00a8b8b8(param_3,lVar7,uVar4);
      lVar7 = param_3[2];
    }
    __dest = (void *)(param_3[1] + lVar7);
    puVar5 = param_1;
    do {
      puVar6 = puVar5 + 2;
      __n = puVar5[1];
      memcpy(__dest,(void *)*puVar5,__n);
      __dest = (void *)((long)__dest + __n);
      puVar5 = puVar6;
    } while (puVar6 != param_1 + lVar1);
  }
  param_3[2] = uVar4 + lVar7;
  return;
}


// ===== 00a92474  <alloc::borrow::Cow<str>as_core::ops::arith::AddAssign>::add_assign =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::borrow::Cow<str> as core::ops::arith::AddAssign>::add_assign */

void __rustcall
<alloc::borrow::Cow<str>as_core::ops::arith::AddAssign>::add_assign(ulong *param_1,ulong *param_2)

{
  size_t sVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  size_t __n;
  void *__src;
  void *pvVar5;
  undefined8 uVar6;
  ulong local_68;
  ulong uStack_60;
  size_t local_58;
  
  __n = param_1[2];
  if (__n == 0) {
    if (0 < (long)*param_1) {
      free((void *)param_1[1]);
    }
    uVar3 = *param_2;
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[2] = uVar4;
    return;
  }
  uVar4 = param_2[2];
  if (uVar4 == 0) goto LAB_00a92614;
  uVar3 = *param_1;
  if (uVar3 == 0xffffffffffffffff) {
    uVar3 = uVar4 + __n;
    if ((long)uVar3 < 0) {
      uVar6 = 0;
      goto LAB_00a9267c;
    }
    pvVar5 = (void *)param_1[1];
    if (uVar3 == 0) {
      uStack_60 = 1;
      if (__n == 0) goto LAB_00a92520;
LAB_00a925c4:
                    /* try { // try from 00a925c4 to 00a925d3 has its CatchHandler @ 00a9268c */
      local_58 = 0;
      local_68 = uVar3;
      FUN_00a8b8b8(&local_68,0,__n);
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar6 = 1;
      uVar2 = FUN_004b25a4(uVar3,1);
      if (uVar2 == 0) goto LAB_00a9267c;
      uStack_60 = uVar2;
      if (uVar3 < __n) goto LAB_00a925c4;
LAB_00a92520:
      local_58 = 0;
      local_68 = uVar3;
    }
    sVar1 = local_58;
    memcpy((void *)(uStack_60 + local_58),pvVar5,__n);
    __n = sVar1 + __n;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[2] = __n;
    uVar3 = *param_1;
    local_58 = __n;
    if (*param_1 == 0xffffffffffffffff) {
      if (__n == 0) {
        uVar3 = 0;
        *param_1 = 0;
        param_1[1] = 1;
      }
      else {
        __src = (void *)param_1[1];
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar6 = 1;
        pvVar5 = (void *)FUN_004b25a4(__n,1);
        uVar3 = __n;
        if (pvVar5 == (void *)0x0) {
LAB_00a9267c:
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar6,uVar3);
        }
        memcpy(pvVar5,__src,__n);
        *param_1 = __n;
        param_1[1] = (ulong)pvVar5;
        if (__n == 0xffffffffffffffff) {
                    /* try { // try from 00a92594 to 00a925ab has its CatchHandler @ 00a926c8 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("internal error: entered unreachable code",0x28,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff200);
        }
      }
    }
  }
  pvVar5 = (void *)param_2[1];
  if (uVar3 - __n < uVar4) {
                    /* try { // try from 00a92660 to 00a92687 has its CatchHandler @ 00a926c8 */
    FUN_00a8b8b8(param_1,__n,uVar4);
    __n = param_1[2];
  }
  memcpy((void *)(param_1[1] + __n),pvVar5,uVar4);
  param_1[2] = __n + uVar4;
LAB_00a92614:
  if ((long)*param_2 < 1) {
    return;
  }
  free((void *)param_2[1]);
  return;
}


// ===== 00a926ec  <alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::error::Error>as_core[bcece726f298455b]::convert::From<&str>>::from =====

/* <alloc[c1f8e832b0d782c7]::boxed::Box<dyn core[bcece726f298455b]::error::Error> as
   core[bcece726f298455b]::convert::From<&str>>::from */

void <alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::error::Error>as_core[bcece726f298455b]::convert::From<&str>>
     ::from(void *param_1,size_t param_2)

{
  undefined1 *__dest;
  size_t *psVar1;
  
  if (param_2 == 0) {
    __dest = &DAT_00000001;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    psVar1 = (size_t *)FUN_004b25a4(0x18,8);
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(param_2,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,param_2);
    }
    memcpy(__dest,param_1,param_2);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    psVar1 = (size_t *)FUN_004b25a4(0x18,8);
  }
  if (psVar1 != (size_t *)0x0) {
    *psVar1 = param_2;
    psVar1[1] = (size_t)__dest;
    psVar1[2] = param_2;
    return;
  }
                    /* try { // try from 00a92778 to 00a92783 has its CatchHandler @ 00a92794 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 00a927b4  <alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::error::Error+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>as_core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::borrow::Cow<str>>>::from =====

/* <alloc[c1f8e832b0d782c7]::boxed::Box<dyn core[bcece726f298455b]::error::Error +
   core[bcece726f298455b]::marker::Sync + core[bcece726f298455b]::marker::Send> as
   core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::borrow::Cow<str>>>::from */

void <alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::error::Error+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>as_core[bcece726f298455b]::convert::From<alloc[c1f8e832b0d782c7]::borrow::Cow<str>>>
     ::from(size_t *param_1)

{
  undefined1 *__src;
  undefined1 *__dest;
  size_t *psVar1;
  size_t __n;
  size_t sVar2;
  
  __src = (undefined1 *)param_1[1];
  __n = param_1[2];
  __dest = __src;
  sVar2 = *param_1;
  if (*param_1 == 0xffffffffffffffff) {
    if (__n == 0) {
      sVar2 = 0;
      __dest = &DAT_00000001;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
      goto joined_r0x00a92850;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(__n,1);
    if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,__n);
    }
    memcpy(__dest,__src,__n);
    sVar2 = __n;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  psVar1 = (size_t *)FUN_004b25a4(0x18,8);
joined_r0x00a92850:
  if (psVar1 != (size_t *)0x0) {
    *psVar1 = sVar2;
    psVar1[1] = (size_t)__dest;
    psVar1[2] = __n;
    return;
  }
                    /* try { // try from 00a92854 to 00a9285f has its CatchHandler @ 00a92870 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 00a92890  <&alloc::string::String_as_core::str::pattern::Pattern>::into_searcher =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&alloc::string::String as core::str::pattern::Pattern>::into_searcher */

void __rustcall
<&alloc::string::String_as_core::str::pattern::Pattern>::into_searcher
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  <core::str::pattern::[u]::core::str::pattern::StrSearcher>::new
            (param_2,param_3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 00a928a4  <alloc::boxed::Box<core::ffi::c_str::CStr>as{backref_17}::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::boxed::Box<core::ffi::c_str::CStr> as {backref 17}::default::Default>::default */

undefined1  [16] __rustcall
<alloc::boxed::Box<core::ffi::c_str::CStr>as{backref_17}::default::Default>::default(void)

{
  undefined1 auVar1 [16];
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar1._0_8_ = FUN_004b25a4(1,1);
  if (auVar1._0_8_ != 0) {
                    /* try { // try from 00a928c4 to 00a928db has its CatchHandler @ 00a928fc */
    <core::ffi::c_str::CStr_as_core::clone::CloneToUninit>::clone_to_uninit
              (&DAT_002a8138,1,auVar1._0_8_);
    auVar1._8_8_ = 1;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(1,1);
}


// ===== 00a92918  <alloc::ffi::c_str::NulError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::NulError as core::fmt::Display>::fmt */

void __rustcall
<alloc::ffi::c_str::NulError_as_core::fmt::Display>::fmt(long param_1,undefined8 *param_2)

{
  long local_20;
  undefined *puStack_18;
  
  local_20 = param_1 + 0x18;
  puStack_18 = PTR_fmt_00b00c10;
  core::fmt::write(*param_2,param_2[1],&DAT_002b9b63,&local_20);
  return;
}


// ===== 00a92954  <alloc::ffi::c_str::FromVecWithNulError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::FromVecWithNulError as core::fmt::Display>::fmt */

void __rustcall
<alloc::ffi::c_str::FromVecWithNulError_as_core::fmt::Display>::fmt
          (uint *param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined8 *puStack_20;
  undefined *local_18;
  
  if ((*param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a92970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,"data provided is not nul terminated",0x23);
    return;
  }
  local_28 = *(undefined8 *)(param_1 + 2);
  puStack_20 = &local_28;
  local_18 = PTR_fmt_00b00c10;
  core::fmt::write(*param_2,param_2[1],&DAT_002b2d08,&puStack_20);
  return;
}


// ===== 00a929b8  <alloc::ffi::c_str::IntoStringError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::ffi::c_str::IntoStringError as core::fmt::Display>::fmt */

void __rustcall
<alloc::ffi::c_str::IntoStringError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt("C string contained non-utf8 bytes",0x21,param_2);
  return;
}


// ===== 00a929cc  <core::ffi::c_str::CStr_as_alloc::borrow::ToOwned>::clone_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::CStr as alloc::borrow::ToOwned>::clone_into */

void __rustcall
<core::ffi::c_str::CStr_as_alloc::borrow::ToOwned>::clone_into
          (void *param_1,size_t param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined1 *__ptr;
  long lVar2;
  ulong uVar3;
  undefined1 *__ptr_00;
  ulong local_68;
  undefined1 *local_60;
  long local_58;
  
  uVar3 = param_3[1];
  if (uVar3 == param_2) {
    memcpy((void *)*param_3,param_1,param_2);
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __ptr = (undefined1 *)FUN_004b25a4(1,1);
  if (__ptr == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(1,1);
  }
  __ptr_00 = (undefined1 *)*param_3;
  *__ptr = 0;
  *param_3 = __ptr;
  param_3[1] = 1;
  local_58 = 0;
  local_68 = uVar3;
  local_60 = __ptr_00;
  if (uVar3 < param_2) {
                    /* try { // try from 00a92b14 to 00a92b23 has its CatchHandler @ 00a92b30 */
    FUN_00a8b8b8(&local_68,0,param_2);
  }
  else {
    lVar2 = 0;
    if (param_2 == 0) goto LAB_00a92a80;
  }
  lVar2 = local_58;
  __ptr_00 = local_60;
  uVar3 = local_68;
  memcpy(local_60 + local_58,param_1,param_2);
LAB_00a92a80:
  uVar1 = lVar2 + param_2;
  if (uVar1 < uVar3) {
    if (uVar1 == 0) {
      free(__ptr_00);
      __ptr_00 = &DAT_00000001;
    }
    else {
      __ptr_00 = (undefined1 *)FUN_004b2600(__ptr_00,uVar3,1,uVar1);
      if (__ptr_00 == (undefined1 *)0x0) {
                    /* try { // try from 00a92aac to 00a92ab7 has its CatchHandler @ 00a92b44 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,uVar1);
      }
    }
  }
  free(__ptr);
  *param_3 = __ptr_00;
  param_3[1] = uVar1;
  return;
}


// ===== 00a92b60  FUN_00a92b60 =====

void FUN_00a92b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00aff350,param_2,param_3);
  return;
}


// ===== 00a92b74  FUN_00a92b74 =====

undefined1  [16] FUN_00a92b74(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 00a92b84  FUN_00a92b84 =====

undefined8 FUN_00a92b84(void)

{
  return 0;
}


// ===== 00a92b8c  FUN_00a92b8c =====

void FUN_00a92b8c(void)

{
  return;
}


// ===== 00a92b90  FUN_00a92b90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a92b90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0db0;
  param_1[1] = _UNK_002a0db8;
  *param_1 = uVar1;
  return;
}


// ===== 00a92ba4  FUN_00a92ba4 =====

void FUN_00a92ba4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000010;
  undefined1 *puStack0000000000000020;
  
  puStack0000000000000020 = &stack0x00000008;
  uStack0000000000000010 = param_1;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(param_2,&stack0x00000010);
}


// ===== 00a92bb8  core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<usize>,core[bcece726f298455b]::option::Option<usize>> =====

/* core[bcece726f298455b]::panicking::assert_failed::<core[bcece726f298455b]::option::Option<usize>,
   core[bcece726f298455b]::option::Option<usize>> */

void core[bcece726f298455b]::panicking::assert_failed::
     <core[bcece726f298455b]::option::Option<usize>,core[bcece726f298455b]::option::Option<usize>>
               (undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_00ab18a0(param_1,param_2,&DAT_00aff4a0);
}


// ===== 00a92bd4  core::panicking::assert_failed<usize,usize> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::assert_failed<usize, usize> */

void __rustcall core::panicking::assert_failed<usize,usize>(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_00ab18a0(param_1,param_2,&DAT_00aff4c0);
}


// ===== 00a92bf0  core::panicking::assert_failed<u64,u64> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::assert_failed<u64, u64> */

void __rustcall core::panicking::assert_failed<u64,u64>(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_00ab18a0(param_1,param_2,&DAT_00aff4e0);
}


// ===== 00a92c0c  FUN_00a92c0c =====

void FUN_00a92c0c(uint param_1,undefined8 param_2,int param_3,ushort param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  bool bVar5;
  ulong uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 local_4f0 [128];
  undefined2 local_f0;
  undefined6 uStack_ee;
  char *pcStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  ulong local_d0;
  char *local_90;
  char *pcStack_88;
  undefined1 local_80 [16];
  ulong local_70;
  undefined8 uStack_68;
  ulong local_60;
  short local_58;
  undefined1 local_56;
  
  uVar9 = 2;
  uVar12 = (ulong)param_4;
  local_4f0[0] = 0;
  bVar5 = (param_1 & 0x3ff) == 0;
  uVar8 = 2;
  if (!bVar5) {
    uVar8 = 3;
  }
  uVar10 = param_1 >> 10 & 0x1f;
  uVar1 = (param_1 & 0x3ff) << 1;
  if (uVar10 != 0) {
    uVar1 = param_1 & 0x3ff | 0x400;
  }
  local_70 = (ulong)uVar1;
  if ((param_1 & 0x7c00) != 0) {
    uVar8 = 4;
  }
  uVar2 = (uint)bVar5;
  if ((param_1 & 0x7c00) != 0x7c00) {
    uVar2 = uVar8;
  }
  local_60 = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar9 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar9 = 4;
  }
  else if (uVar2 == 3) {
    uVar10 = uVar10 - 0x19;
    uVar9 = uVar1 & 1 ^ 1;
    local_60 = 1;
  }
  else {
    uVar6 = local_70 << 1;
    bVar5 = uVar1 != 0x400;
    uVar9 = uVar1 & 1 ^ 1;
    local_70 = 0x1000;
    if (bVar5) {
      local_70 = uVar6;
    }
    iVar11 = -0x1b;
    if (bVar5) {
      iVar11 = -0x1a;
    }
    local_60 = 1;
    if (!bVar5) {
      local_60 = 2;
    }
    uVar10 = iVar11 + uVar10;
  }
  uVar8 = (uint)(short)param_1;
  uStack_68 = 1;
  local_58 = (short)uVar10;
  local_56 = (undefined1)uVar9;
  if (uVar9 < 2) {
    pcVar13 = "-+";
    uVar6 = (ulong)(uVar8 >> 0xf & 1);
    pcVar4 = pcVar13;
    if (-1 < (int)uVar8) {
      pcVar13 = (char *)0x1;
      pcVar4 = "+";
    }
    if (param_3 != 0) {
      uVar6 = 1;
      pcVar13 = pcVar4;
    }
    lVar3 = -0xc;
    if ((uVar10 & 0x8000) == 0) {
      lVar3 = 5;
    }
    if (0xfa < (ulong)(lVar3 * local_58) >> 6) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf.len() >= maxlen",0x25,
                 &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff5a8);
    }
    iVar11 = (int)(short)param_4;
    uVar14 = (ulong)(lVar3 * local_58) >> 4;
    sVar7 = -0x8000;
    if (iVar11 != -1 && iVar11 + 1 < 0 == SCARRY4(iVar11,1)) {
      sVar7 = -param_4;
    }
    core::num::imp::flt2dec::strategy::grisu::format_exact_opt
              (&local_f0,&local_70,local_4f0,uVar14 + 0x15);
    if (CONCAT62(uStack_ee,local_f0) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_exact
                (&local_90,&local_70,local_4f0,uVar14 + 0x15,(int)sVar7);
    }
    else {
      local_90 = (char *)CONCAT62(uStack_ee,local_f0);
      local_80._0_2_ = (undefined2)local_e0;
      pcStack_88 = pcStack_e8;
    }
    if ((int)sVar7 < (int)(short)local_80._0_2_) {
      local_80 = core::num::imp::flt2dec::digits_to_dec_str
                           (local_90,pcStack_88,(long)(short)local_80._0_2_,uVar12,&local_f0,4);
    }
    else {
      local_f0 = 2;
      if (param_4 == 0) {
        pcStack_e8 = "0";
        local_e0 = 1;
        local_80._8_8_ = 1;
        local_80._0_8_ = &local_f0;
      }
      else {
        pcStack_e8 = "0.";
        local_e0 = 2;
        local_80._8_8_ = 2;
        local_80._0_8_ = &local_f0;
        local_d8 = 0;
        local_d0 = uVar12;
      }
    }
  }
  else if ((uVar9 - 2 & 0xff) == 0) {
    local_f0 = 2;
    uVar6 = 0;
    pcStack_e8 = "NaN";
    local_e0 = 3;
    pcVar13 = (char *)0x1;
    local_80._8_8_ = 1;
    local_80._0_8_ = &local_f0;
  }
  else {
    pcVar13 = "-+";
    uVar6 = (ulong)(uVar8 >> 0xf & 1);
    pcVar4 = pcVar13;
    if (-1 < (int)uVar8) {
      pcVar13 = (char *)0x1;
      pcVar4 = "+";
    }
    if (param_3 != 0) {
      uVar6 = 1;
      pcVar13 = pcVar4;
    }
    if ((uVar9 - 2 & 0xff) == 2) {
      local_f0 = 2;
      if (param_4 == 0) {
        pcStack_e8 = "0";
        local_e0 = 1;
        local_80._8_8_ = 1;
        local_80._0_8_ = &local_f0;
      }
      else {
        pcStack_e8 = "0.";
        local_e0 = 2;
        local_80._8_8_ = 2;
        local_80._0_8_ = &local_f0;
        local_d8 = 0;
        local_d0 = uVar12;
      }
    }
    else {
      local_f0 = 2;
      pcStack_e8 = "inf";
      local_e0 = 3;
      local_80._8_8_ = 1;
      local_80._0_8_ = &local_f0;
    }
  }
  local_90 = pcVar13;
  pcStack_88 = (char *)uVar6;
  FUN_00a9a57c(param_2,&local_90);
  return;
}


// ===== 00a92f50  FUN_00a92f50 =====

void FUN_00a92f50(ulong param_1,undefined8 param_2,int param_3,ushort param_4)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  ulong uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 local_4f0 [128];
  undefined2 local_f0;
  undefined6 uStack_ee;
  char *pcStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  ulong local_d0;
  char *local_90;
  char *pcStack_88;
  undefined1 local_80 [16];
  ulong local_70;
  undefined8 uStack_68;
  ulong local_60;
  short local_58;
  undefined1 local_56;
  
  uVar8 = 2;
  local_4f0[0] = 0;
  uVar11 = (ulong)param_4;
  uVar5 = param_1 & 0xfffffffffffff;
  uVar7 = 2;
  if (uVar5 != 0) {
    uVar7 = 3;
  }
  uVar9 = (uint)(param_1 >> 0x34) & 0x7ff;
  local_70 = (param_1 & 0xfffffffffffff) << 1;
  if ((param_1 >> 0x34 & 0x7ff) != 0) {
    local_70 = uVar5 | 0x10000000000000;
  }
  if ((param_1 & 0x7ff0000000000000) != 0) {
    uVar7 = 4;
  }
  uVar1 = (uint)(uVar5 == 0);
  if ((param_1 & 0x7ff0000000000000) != 0x7ff0000000000000) {
    uVar1 = uVar7;
  }
  local_60 = (ulong)uVar1;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      uVar8 = 3;
    }
  }
  else if (uVar1 == 2) {
    uVar8 = 4;
  }
  else {
    uVar8 = (uint)local_70 & 1;
    if (uVar1 == 3) {
      uVar9 = uVar9 - 0x433;
      uVar8 = uVar8 ^ 1;
      local_60 = 1;
    }
    else {
      uVar5 = local_70 << 1;
      uVar8 = uVar8 ^ 1;
      bVar4 = local_70 != 0x10000000000000;
      local_70 = 0x40000000000000;
      if (bVar4) {
        local_70 = uVar5;
      }
      iVar10 = -0x435;
      if (bVar4) {
        iVar10 = -0x434;
      }
      local_60 = 1;
      if (!bVar4) {
        local_60 = 2;
      }
      uVar9 = iVar10 + uVar9;
    }
  }
  uStack_68 = 1;
  local_58 = (short)uVar9;
  local_56 = (undefined1)uVar8;
  if (uVar8 < 2) {
    pcVar12 = "-+";
    uVar5 = param_1 >> 0x3f;
    pcVar3 = pcVar12;
    if (-1 < (long)param_1) {
      pcVar12 = (char *)0x1;
      pcVar3 = "+";
    }
    if (param_3 != 0) {
      uVar5 = 1;
      pcVar12 = pcVar3;
    }
    lVar2 = -0xc;
    if ((uVar9 & 0x8000) == 0) {
      lVar2 = 5;
    }
    if (0xfa < (ulong)(lVar2 * local_58) >> 6) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf.len() >= maxlen",0x25,
                 &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff5a8);
    }
    iVar10 = (int)(short)param_4;
    uVar13 = (ulong)(lVar2 * local_58) >> 4;
    sVar6 = -0x8000;
    if (iVar10 != -1 && iVar10 + 1 < 0 == SCARRY4(iVar10,1)) {
      sVar6 = -param_4;
    }
    core::num::imp::flt2dec::strategy::grisu::format_exact_opt
              (&local_f0,&local_70,local_4f0,uVar13 + 0x15);
    if (CONCAT62(uStack_ee,local_f0) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_exact
                (&local_90,&local_70,local_4f0,uVar13 + 0x15,(int)sVar6);
    }
    else {
      local_90 = (char *)CONCAT62(uStack_ee,local_f0);
      local_80._0_2_ = (undefined2)local_e0;
      pcStack_88 = pcStack_e8;
    }
    if ((int)sVar6 < (int)(short)local_80._0_2_) {
      local_80 = core::num::imp::flt2dec::digits_to_dec_str
                           (local_90,pcStack_88,(long)(short)local_80._0_2_,uVar11,&local_f0,4);
    }
    else {
      local_f0 = 2;
      if (param_4 == 0) {
        pcStack_e8 = "0";
        local_e0 = 1;
        local_80._8_8_ = 1;
        local_80._0_8_ = &local_f0;
      }
      else {
        pcStack_e8 = "0.";
        local_e0 = 2;
        local_80._8_8_ = 2;
        local_80._0_8_ = &local_f0;
        local_d8 = 0;
        local_d0 = uVar11;
      }
    }
  }
  else if ((uVar8 - 2 & 0xff) == 0) {
    local_f0 = 2;
    uVar5 = 0;
    pcStack_e8 = "NaN";
    local_e0 = 3;
    pcVar12 = (char *)0x1;
    local_80._8_8_ = 1;
    local_80._0_8_ = &local_f0;
  }
  else {
    pcVar12 = "-+";
    uVar5 = param_1 >> 0x3f;
    pcVar3 = pcVar12;
    if (-1 < (long)param_1) {
      pcVar12 = (char *)0x1;
      pcVar3 = "+";
    }
    if (param_3 != 0) {
      uVar5 = 1;
      pcVar12 = pcVar3;
    }
    if ((uVar8 - 2 & 0xff) == 2) {
      local_f0 = 2;
      if (param_4 == 0) {
        pcStack_e8 = "0";
        local_e0 = 1;
        local_80._8_8_ = 1;
        local_80._0_8_ = &local_f0;
      }
      else {
        pcStack_e8 = "0.";
        local_e0 = 2;
        local_80._8_8_ = 2;
        local_80._0_8_ = &local_f0;
        local_d8 = 0;
        local_d0 = uVar11;
      }
    }
    else {
      local_f0 = 2;
      pcStack_e8 = "inf";
      local_e0 = 3;
      local_80._8_8_ = 1;
      local_80._0_8_ = &local_f0;
    }
  }
  local_90 = pcVar12;
  pcStack_88 = (char *)uVar5;
  FUN_00a9a57c(param_2,&local_90);
  return;
}


// ===== 00a93290  FUN_00a93290 =====

void FUN_00a93290(uint param_1,undefined8 param_2,int param_3,ushort param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  bool bVar5;
  ulong uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 local_4f0 [128];
  undefined2 local_f0;
  undefined6 uStack_ee;
  char *pcStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  ulong local_d0;
  char *local_90;
  char *pcStack_88;
  undefined1 local_80 [16];
  ulong local_70;
  undefined8 uStack_68;
  ulong local_60;
  short local_58;
  undefined1 local_56;
  
  uVar9 = 2;
  uVar12 = (ulong)param_4;
  local_4f0[0] = 0;
  bVar5 = (param_1 & 0x7fffff) == 0;
  uVar8 = 2;
  if (!bVar5) {
    uVar8 = 3;
  }
  uVar10 = param_1 >> 0x17 & 0xff;
  uVar1 = (param_1 & 0x7fffff) << 1;
  if (uVar10 != 0) {
    uVar1 = param_1 & 0x7fffff | 0x800000;
  }
  local_70 = (ulong)uVar1;
  if ((param_1 & 0x7f800000) != 0) {
    uVar8 = 4;
  }
  uVar2 = (uint)bVar5;
  if ((param_1 & 0x7f800000) != 0x7f800000) {
    uVar2 = uVar8;
  }
  local_60 = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar9 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar9 = 4;
  }
  else if (uVar2 == 3) {
    uVar10 = uVar10 - 0x96;
    uVar9 = uVar1 & 1 ^ 1;
    local_60 = 1;
  }
  else {
    uVar6 = local_70 << 1;
    bVar5 = uVar1 != 0x800000;
    iVar11 = -0x98;
    if (bVar5) {
      iVar11 = -0x97;
    }
    local_70 = 0x2000000;
    if (bVar5) {
      local_70 = uVar6;
    }
    local_60 = 1;
    if (!bVar5) {
      local_60 = 2;
    }
    uVar10 = iVar11 + uVar10;
    uVar9 = uVar1 & 1 ^ 1;
  }
  uStack_68 = 1;
  local_58 = (short)uVar10;
  local_56 = (undefined1)uVar9;
  if (uVar9 < 2) {
    pcVar13 = "-+";
    uVar6 = (ulong)(param_1 >> 0x1f);
    pcVar4 = pcVar13;
    if (-1 < (int)param_1) {
      pcVar13 = (char *)0x1;
      pcVar4 = "+";
    }
    if (param_3 != 0) {
      uVar6 = 1;
      pcVar13 = pcVar4;
    }
    lVar3 = -0xc;
    if ((uVar10 & 0x8000) == 0) {
      lVar3 = 5;
    }
    if (0xfa < (ulong)(lVar3 * local_58) >> 6) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf.len() >= maxlen",0x25,
                 &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff5a8);
    }
    iVar11 = (int)(short)param_4;
    uVar14 = (ulong)(lVar3 * local_58) >> 4;
    sVar7 = -0x8000;
    if (iVar11 != -1 && iVar11 + 1 < 0 == SCARRY4(iVar11,1)) {
      sVar7 = -param_4;
    }
    core::num::imp::flt2dec::strategy::grisu::format_exact_opt
              (&local_f0,&local_70,local_4f0,uVar14 + 0x15);
    if (CONCAT62(uStack_ee,local_f0) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_exact
                (&local_90,&local_70,local_4f0,uVar14 + 0x15,(int)sVar7);
    }
    else {
      local_90 = (char *)CONCAT62(uStack_ee,local_f0);
      local_80._0_2_ = (undefined2)local_e0;
      pcStack_88 = pcStack_e8;
    }
    if ((int)sVar7 < (int)(short)local_80._0_2_) {
      local_80 = core::num::imp::flt2dec::digits_to_dec_str
                           (local_90,pcStack_88,(long)(short)local_80._0_2_,uVar12,&local_f0,4);
    }
    else {
      local_f0 = 2;
      if (param_4 == 0) {
        pcStack_e8 = "0";
        local_e0 = 1;
        local_80._8_8_ = 1;
        local_80._0_8_ = &local_f0;
      }
      else {
        pcStack_e8 = "0.";
        local_e0 = 2;
        local_80._8_8_ = 2;
        local_80._0_8_ = &local_f0;
        local_d8 = 0;
        local_d0 = uVar12;
      }
    }
  }
  else if ((uVar9 - 2 & 0xff) == 0) {
    local_f0 = 2;
    uVar6 = 0;
    pcStack_e8 = "NaN";
    local_e0 = 3;
    pcVar13 = (char *)0x1;
    local_80._8_8_ = 1;
    local_80._0_8_ = &local_f0;
  }
  else {
    pcVar13 = "-+";
    uVar6 = (ulong)(param_1 >> 0x1f);
    pcVar4 = pcVar13;
    if (-1 < (int)param_1) {
      pcVar13 = (char *)0x1;
      pcVar4 = "+";
    }
    if (param_3 != 0) {
      uVar6 = 1;
      pcVar13 = pcVar4;
    }
    if ((uVar9 - 2 & 0xff) == 2) {
      local_f0 = 2;
      if (param_4 == 0) {
        pcStack_e8 = "0";
        local_e0 = 1;
        local_80._8_8_ = 1;
        local_80._0_8_ = &local_f0;
      }
      else {
        pcStack_e8 = "0.";
        local_e0 = 2;
        local_80._8_8_ = 2;
        local_80._0_8_ = &local_f0;
        local_d8 = 0;
        local_d0 = uVar12;
      }
    }
    else {
      local_f0 = 2;
      pcStack_e8 = "inf";
      local_e0 = 3;
      local_80._8_8_ = 1;
      local_80._0_8_ = &local_f0;
    }
  }
  local_90 = pcVar13;
  pcStack_88 = (char *)uVar6;
  FUN_00a9a57c(param_2,&local_90);
  return;
}


// ===== 00a935cc  FUN_00a935cc =====

void FUN_00a935cc(uint param_1,undefined8 param_2,int param_3,short param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  char *pcVar9;
  undefined1 auStack_f1 [17];
  undefined2 local_e0;
  undefined6 uStack_de;
  char *pcStack_d8;
  ulong local_d0;
  undefined2 local_c8;
  undefined8 local_c0;
  char *local_80;
  char *pcStack_78;
  undefined1 local_70 [16];
  ulong local_60 [3];
  short local_48;
  undefined1 local_46;
  
  uVar7 = 2;
  bVar4 = (param_1 & 0x3ff) == 0;
  uVar6 = 2;
  if (!bVar4) {
    uVar6 = 3;
  }
  uVar2 = param_1 >> 10 & 0x1f;
  local_48 = (short)uVar2;
  uVar3 = (param_1 & 0x3ff) << 1;
  if (uVar2 != 0) {
    uVar3 = param_1 & 0x3ff | 0x400;
  }
  local_60[0] = (ulong)uVar3;
  if ((param_1 & 0x7c00) != 0) {
    uVar6 = 4;
  }
  uVar2 = (uint)bVar4;
  if ((param_1 & 0x7c00) != 0x7c00) {
    uVar2 = uVar6;
  }
  local_60[2] = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar7 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar7 = 4;
  }
  else if (uVar2 == 3) {
    local_48 = local_48 + -0x19;
    uVar7 = uVar3 & 1 ^ 1;
    local_60[2] = 1;
  }
  else {
    uVar5 = local_60[0] << 1;
    bVar4 = uVar3 != 0x400;
    uVar7 = uVar3 & 1 ^ 1;
    local_60[0] = 0x1000;
    if (bVar4) {
      local_60[0] = uVar5;
    }
    sVar8 = -0x1b;
    if (bVar4) {
      sVar8 = -0x1a;
    }
    local_60[2] = 1;
    if (!bVar4) {
      local_60[2] = 2;
    }
    local_48 = sVar8 + local_48;
  }
  uVar6 = (uint)(short)param_1;
  local_60[1] = 1;
  local_46 = (undefined1)uVar7;
  if (uVar7 < 2) {
    pcVar1 = "-+";
    uVar5 = (ulong)(uVar6 >> 0xf & 1);
    pcVar9 = pcVar1;
    if (-1 < (int)uVar6) {
      pcVar1 = (char *)0x1;
      pcVar9 = "+";
    }
    if (param_3 != 0) {
      uVar5 = 1;
    }
    if (param_3 == 0) {
      pcVar9 = pcVar1;
    }
    core::num::imp::flt2dec::strategy::grisu::format_shortest_opt
              (&local_e0,local_60,auStack_f1,0x11);
    if (CONCAT62(uStack_de,local_e0) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_shortest(&local_80,local_60,auStack_f1,0x11)
      ;
    }
    else {
      local_80 = (char *)CONCAT62(uStack_de,local_e0);
      pcStack_78 = pcStack_d8;
      local_70._0_8_ = local_d0;
    }
    local_70 = core::num::imp::flt2dec::digits_to_dec_str
                         (local_80,pcStack_78,local_70._0_8_ & 0xffff,param_4,&local_e0,4);
  }
  else if ((uVar7 - 2 & 0xff) == 0) {
    local_e0 = 2;
    uVar5 = 0;
    pcStack_d8 = "NaN";
    local_d0 = 3;
    pcVar9 = (char *)0x1;
    local_70._8_8_ = 1;
    local_70._0_8_ = &local_e0;
  }
  else {
    pcVar9 = "-+";
    uVar5 = (ulong)(uVar6 >> 0xf & 1);
    pcVar1 = pcVar9;
    if (-1 < (int)uVar6) {
      pcVar9 = (char *)0x1;
      pcVar1 = "+";
    }
    if (param_3 != 0) {
      uVar5 = 1;
      pcVar9 = pcVar1;
    }
    if ((uVar7 - 2 & 0xff) == 2) {
      local_e0 = 2;
      if (param_4 != 0) {
        pcStack_d8 = "0.";
        local_d0 = 2;
        local_70._8_8_ = 2;
        local_70._0_8_ = &local_e0;
        local_c8 = 0;
        local_c0 = 1;
        goto LAB_00a9382c;
      }
      pcStack_d8 = "0";
      local_d0 = 1;
    }
    else {
      pcStack_d8 = "inf";
      local_d0 = 3;
    }
    local_e0 = 2;
    local_70._8_8_ = 1;
    local_70._0_8_ = &local_e0;
  }
LAB_00a9382c:
  local_80 = pcVar9;
  pcStack_78 = (char *)uVar5;
  FUN_00a9a57c(param_2,&local_80);
  return;
}


// ===== 00a93854  FUN_00a93854 =====

void FUN_00a93854(ulong param_1,undefined8 param_2,int param_3,short param_4)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  char *pcVar8;
  undefined1 auStack_f1 [17];
  undefined2 local_e0;
  undefined6 uStack_de;
  char *pcStack_d8;
  ulong local_d0;
  undefined2 local_c8;
  undefined8 local_c0;
  char *local_80;
  char *pcStack_78;
  undefined1 local_70 [16];
  ulong local_60 [3];
  ushort local_48;
  undefined1 local_46;
  
  uVar6 = 2;
  uVar4 = param_1 & 0xfffffffffffff;
  uVar5 = 2;
  if (uVar4 != 0) {
    uVar5 = 3;
  }
  local_48 = (ushort)(param_1 >> 0x34) & 0x7ff;
  local_60[0] = (param_1 & 0xfffffffffffff) << 1;
  if ((param_1 >> 0x34 & 0x7ff) != 0) {
    local_60[0] = uVar4 | 0x10000000000000;
  }
  if ((param_1 & 0x7ff0000000000000) != 0) {
    uVar5 = 4;
  }
  uVar2 = (uint)(uVar4 == 0);
  if ((param_1 & 0x7ff0000000000000) != 0x7ff0000000000000) {
    uVar2 = uVar5;
  }
  local_60[2] = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar6 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar6 = 4;
  }
  else {
    uVar6 = (uint)local_60[0] & 1;
    if (uVar2 == 3) {
      local_48 = local_48 - 0x433;
      uVar6 = uVar6 ^ 1;
      local_60[2] = 1;
    }
    else {
      uVar4 = local_60[0] << 1;
      uVar6 = uVar6 ^ 1;
      bVar3 = local_60[0] != 0x10000000000000;
      local_60[0] = 0x40000000000000;
      if (bVar3) {
        local_60[0] = uVar4;
      }
      sVar7 = -0x435;
      if (bVar3) {
        sVar7 = -0x434;
      }
      local_60[2] = 1;
      if (!bVar3) {
        local_60[2] = 2;
      }
      local_48 = sVar7 + local_48;
    }
  }
  local_60[1] = 1;
  local_46 = (undefined1)uVar6;
  if (uVar6 < 2) {
    pcVar1 = "-+";
    uVar4 = param_1 >> 0x3f;
    pcVar8 = pcVar1;
    if (-1 < (long)param_1) {
      pcVar1 = (char *)0x1;
      pcVar8 = "+";
    }
    if (param_3 != 0) {
      uVar4 = 1;
    }
    if (param_3 == 0) {
      pcVar8 = pcVar1;
    }
    core::num::imp::flt2dec::strategy::grisu::format_shortest_opt
              (&local_e0,local_60,auStack_f1,0x11);
    if (CONCAT62(uStack_de,local_e0) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_shortest(&local_80,local_60,auStack_f1,0x11)
      ;
    }
    else {
      local_80 = (char *)CONCAT62(uStack_de,local_e0);
      pcStack_78 = pcStack_d8;
      local_70._0_8_ = local_d0;
    }
    local_70 = core::num::imp::flt2dec::digits_to_dec_str
                         (local_80,pcStack_78,local_70._0_8_ & 0xffff,param_4,&local_e0,4);
  }
  else if ((uVar6 - 2 & 0xff) == 0) {
    local_e0 = 2;
    uVar4 = 0;
    pcStack_d8 = "NaN";
    local_d0 = 3;
    pcVar8 = (char *)0x1;
    local_70._8_8_ = 1;
    local_70._0_8_ = &local_e0;
  }
  else {
    pcVar8 = "-+";
    uVar4 = param_1 >> 0x3f;
    pcVar1 = pcVar8;
    if (-1 < (long)param_1) {
      pcVar8 = (char *)0x1;
      pcVar1 = "+";
    }
    if (param_3 != 0) {
      uVar4 = 1;
      pcVar8 = pcVar1;
    }
    if ((uVar6 - 2 & 0xff) == 2) {
      local_e0 = 2;
      if (param_4 != 0) {
        pcStack_d8 = "0.";
        local_d0 = 2;
        local_70._8_8_ = 2;
        local_70._0_8_ = &local_e0;
        local_c8 = 0;
        local_c0 = 1;
        goto LAB_00a93ab0;
      }
      pcStack_d8 = "0";
      local_d0 = 1;
    }
    else {
      pcStack_d8 = "inf";
      local_d0 = 3;
    }
    local_e0 = 2;
    local_70._8_8_ = 1;
    local_70._0_8_ = &local_e0;
  }
LAB_00a93ab0:
  local_80 = pcVar8;
  pcStack_78 = (char *)uVar4;
  FUN_00a9a57c(param_2,&local_80);
  return;
}


// ===== 00a93ad8  FUN_00a93ad8 =====

void FUN_00a93ad8(uint param_1,undefined8 param_2,int param_3,short param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  char *pcVar9;
  undefined1 auStack_f1 [17];
  undefined2 local_e0;
  undefined6 uStack_de;
  char *pcStack_d8;
  ulong local_d0;
  undefined2 local_c8;
  undefined8 local_c0;
  char *local_80;
  char *pcStack_78;
  undefined1 local_70 [16];
  ulong local_60 [3];
  short local_48;
  undefined1 local_46;
  
  uVar7 = 2;
  bVar4 = (param_1 & 0x7fffff) == 0;
  uVar6 = 2;
  if (!bVar4) {
    uVar6 = 3;
  }
  uVar2 = param_1 >> 0x17 & 0xff;
  local_48 = (short)uVar2;
  uVar3 = (param_1 & 0x7fffff) << 1;
  if (uVar2 != 0) {
    uVar3 = param_1 & 0x7fffff | 0x800000;
  }
  local_60[0] = (ulong)uVar3;
  if ((param_1 & 0x7f800000) != 0) {
    uVar6 = 4;
  }
  uVar2 = (uint)bVar4;
  if ((param_1 & 0x7f800000) != 0x7f800000) {
    uVar2 = uVar6;
  }
  local_60[2] = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar7 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar7 = 4;
  }
  else if (uVar2 == 3) {
    local_48 = local_48 + -0x96;
    uVar7 = uVar3 & 1 ^ 1;
    local_60[2] = 1;
  }
  else {
    uVar5 = local_60[0] << 1;
    bVar4 = uVar3 != 0x800000;
    sVar8 = -0x98;
    if (bVar4) {
      sVar8 = -0x97;
    }
    local_60[0] = 0x2000000;
    if (bVar4) {
      local_60[0] = uVar5;
    }
    local_60[2] = 1;
    if (!bVar4) {
      local_60[2] = 2;
    }
    local_48 = sVar8 + local_48;
    uVar7 = uVar3 & 1 ^ 1;
  }
  local_60[1] = 1;
  local_46 = (undefined1)uVar7;
  if (uVar7 < 2) {
    pcVar1 = "-+";
    uVar5 = (ulong)(param_1 >> 0x1f);
    pcVar9 = pcVar1;
    if (-1 < (int)param_1) {
      pcVar1 = (char *)0x1;
      pcVar9 = "+";
    }
    if (param_3 != 0) {
      uVar5 = 1;
    }
    if (param_3 == 0) {
      pcVar9 = pcVar1;
    }
    core::num::imp::flt2dec::strategy::grisu::format_shortest_opt
              (&local_e0,local_60,auStack_f1,0x11);
    if (CONCAT62(uStack_de,local_e0) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_shortest(&local_80,local_60,auStack_f1,0x11)
      ;
    }
    else {
      local_80 = (char *)CONCAT62(uStack_de,local_e0);
      pcStack_78 = pcStack_d8;
      local_70._0_8_ = local_d0;
    }
    local_70 = core::num::imp::flt2dec::digits_to_dec_str
                         (local_80,pcStack_78,local_70._0_8_ & 0xffff,param_4,&local_e0,4);
  }
  else if ((uVar7 - 2 & 0xff) == 0) {
    local_e0 = 2;
    uVar5 = 0;
    pcStack_d8 = "NaN";
    local_d0 = 3;
    pcVar9 = (char *)0x1;
    local_70._8_8_ = 1;
    local_70._0_8_ = &local_e0;
  }
  else {
    pcVar9 = "-+";
    uVar5 = (ulong)(param_1 >> 0x1f);
    pcVar1 = pcVar9;
    if (-1 < (int)param_1) {
      pcVar9 = (char *)0x1;
      pcVar1 = "+";
    }
    if (param_3 != 0) {
      uVar5 = 1;
      pcVar9 = pcVar1;
    }
    if ((uVar7 - 2 & 0xff) == 2) {
      local_e0 = 2;
      if (param_4 != 0) {
        pcStack_d8 = "0.";
        local_d0 = 2;
        local_70._8_8_ = 2;
        local_70._0_8_ = &local_e0;
        local_c8 = 0;
        local_c0 = 1;
        goto LAB_00a93d30;
      }
      pcStack_d8 = "0";
      local_d0 = 1;
    }
    else {
      pcStack_d8 = "inf";
      local_d0 = 3;
    }
    local_e0 = 2;
    local_70._8_8_ = 1;
    local_70._0_8_ = &local_e0;
  }
LAB_00a93d30:
  local_80 = pcVar9;
  pcStack_78 = (char *)uVar5;
  FUN_00a9a57c(param_2,&local_80);
  return;
}


// ===== 00a93d58  FUN_00a93d58 =====

void FUN_00a93d58(uint param_1,undefined8 param_2,int param_3,ushort param_4,int param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 local_520 [128];
  undefined2 local_120;
  undefined6 uStack_11e;
  char *pcStack_118;
  ulong local_110;
  undefined2 local_108;
  ulong local_100;
  undefined2 local_f0;
  char *local_e8;
  undefined8 uStack_e0;
  char *local_90;
  char *pcStack_88;
  undefined1 local_80 [16];
  ulong local_70 [3];
  short local_58;
  undefined1 local_56;
  
  uVar9 = 2;
  uVar12 = (ulong)param_4;
  local_520[0] = 0;
  bVar6 = (param_1 & 0x3ff) == 0;
  uVar8 = 2;
  if (!bVar6) {
    uVar8 = 3;
  }
  uVar10 = param_1 >> 10 & 0x1f;
  uVar2 = (param_1 & 0x3ff) << 1;
  if (uVar10 != 0) {
    uVar2 = param_1 & 0x3ff | 0x400;
  }
  local_70[0] = (ulong)uVar2;
  if ((param_1 & 0x7c00) != 0) {
    uVar8 = 4;
  }
  uVar3 = (uint)bVar6;
  if ((param_1 & 0x7c00) != 0x7c00) {
    uVar3 = uVar8;
  }
  local_70[2] = (ulong)uVar3;
  if (uVar3 < 2) {
    if (uVar3 != 0) {
      uVar9 = 3;
    }
  }
  else if (uVar3 == 2) {
    uVar9 = 4;
  }
  else if (uVar3 == 3) {
    uVar10 = uVar10 - 0x19;
    uVar9 = uVar2 & 1 ^ 1;
    local_70[2] = 1;
  }
  else {
    uVar7 = local_70[0] << 1;
    bVar6 = uVar2 != 0x400;
    uVar9 = uVar2 & 1 ^ 1;
    local_70[0] = 0x1000;
    if (bVar6) {
      local_70[0] = uVar7;
    }
    iVar11 = -0x1b;
    if (bVar6) {
      iVar11 = -0x1a;
    }
    local_70[2] = 1;
    if (!bVar6) {
      local_70[2] = 2;
    }
    uVar10 = iVar11 + uVar10;
  }
  uVar8 = (uint)(short)param_1;
  local_70[1] = 1;
  local_58 = (short)uVar10;
  local_56 = (undefined1)uVar9;
  if (uVar9 < 2) {
    pcVar13 = "-+";
    uVar7 = (ulong)(uVar8 >> 0xf & 1);
    pcVar5 = pcVar13;
    if (-1 < (int)uVar8) {
      pcVar13 = (char *)0x1;
      pcVar5 = "+";
    }
    if (param_3 != 0) {
      uVar7 = 1;
      pcVar13 = pcVar5;
    }
    lVar4 = -0xc;
    if ((uVar10 & 0x8000) == 0) {
      lVar4 = 5;
    }
    uVar1 = ((ulong)(lVar4 * local_58) >> 4) + 0x15;
    if (uVar12 < uVar1) {
      uVar1 = uVar12 + 1;
    }
    if (0x400 < uVar1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf.len() >= sig_digits",0x29,
                 &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff590);
    }
    core::num::imp::flt2dec::strategy::grisu::format_exact_opt
              (&local_120,local_70,local_520,uVar1,0x8000);
    if (CONCAT62(uStack_11e,local_120) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_exact
                (&local_90,local_70,local_520,uVar1,0x8000);
    }
    else {
      local_90 = (char *)CONCAT62(uStack_11e,local_120);
      pcStack_88 = pcStack_118;
      local_80._0_8_ = local_110;
    }
    local_80 = core::num::imp::flt2dec::digits_to_exp_str
                         (local_90,pcStack_88,local_80._0_8_ & 0xffff,uVar12,param_5,&local_120,6);
    goto LAB_00a94034;
  }
  if ((uVar9 - 2 & 0xff) == 0) {
    uVar7 = 0;
    pcStack_118 = "NaN";
    pcVar13 = (char *)0x1;
  }
  else {
    pcVar13 = "-+";
    uVar7 = (ulong)(uVar8 >> 0xf & 1);
    pcVar5 = pcVar13;
    if (-1 < (int)uVar8) {
      pcVar13 = (char *)0x1;
      pcVar5 = "+";
    }
    if (param_3 != 0) {
      uVar7 = 1;
      pcVar13 = pcVar5;
    }
    if ((uVar9 - 2 & 0xff) != 2) {
      local_120 = 2;
      pcStack_118 = "inf";
      local_110 = 3;
      local_80._8_8_ = 1;
      local_80._0_8_ = &local_120;
      goto LAB_00a94034;
    }
    if (param_4 != 0) {
      pcStack_118 = "0.";
      local_110 = 2;
      local_e8 = "E0";
      if (param_5 == 0) {
        local_e8 = "e0E0";
      }
      local_120 = 2;
      local_108 = 0;
      local_f0 = 2;
      uStack_e0 = 2;
      local_80._8_8_ = 3;
      local_80._0_8_ = &local_120;
      local_100 = uVar12;
      goto LAB_00a94034;
    }
    pcStack_118 = "0E0e0E0";
    if (param_5 == 0) {
      pcStack_118 = "0e00E0e0E0";
    }
  }
  local_110 = 3;
  local_120 = 2;
  local_80._8_8_ = 1;
  local_80._0_8_ = &local_120;
LAB_00a94034:
  local_90 = pcVar13;
  pcStack_88 = (char *)uVar7;
  FUN_00a9a57c(param_2,&local_90);
  return;
}


// ===== 00a94078  FUN_00a94078 =====

void FUN_00a94078(ulong param_1,undefined8 param_2,int param_3,ushort param_4,int param_5)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 local_520 [128];
  undefined2 local_120;
  undefined6 uStack_11e;
  char *pcStack_118;
  ulong local_110;
  undefined2 local_108;
  ulong local_100;
  undefined2 local_f0;
  char *local_e8;
  undefined8 uStack_e0;
  char *local_90;
  char *pcStack_88;
  undefined1 local_80 [16];
  ulong local_70 [3];
  short local_58;
  undefined1 local_56;
  
  uVar8 = 2;
  uVar11 = (ulong)param_4;
  local_520[0] = 0;
  uVar6 = param_1 & 0xfffffffffffff;
  uVar7 = 2;
  if (uVar6 != 0) {
    uVar7 = 3;
  }
  uVar9 = (uint)(param_1 >> 0x34) & 0x7ff;
  local_70[0] = (param_1 & 0xfffffffffffff) << 1;
  if ((param_1 >> 0x34 & 0x7ff) != 0) {
    local_70[0] = uVar6 | 0x10000000000000;
  }
  if ((param_1 & 0x7ff0000000000000) != 0) {
    uVar7 = 4;
  }
  uVar2 = (uint)(uVar6 == 0);
  if ((param_1 & 0x7ff0000000000000) != 0x7ff0000000000000) {
    uVar2 = uVar7;
  }
  local_70[2] = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar8 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar8 = 4;
  }
  else {
    uVar8 = (uint)local_70[0] & 1;
    if (uVar2 == 3) {
      uVar9 = uVar9 - 0x433;
      uVar8 = uVar8 ^ 1;
      local_70[2] = 1;
    }
    else {
      uVar6 = local_70[0] << 1;
      uVar8 = uVar8 ^ 1;
      bVar5 = local_70[0] != 0x10000000000000;
      local_70[0] = 0x40000000000000;
      if (bVar5) {
        local_70[0] = uVar6;
      }
      iVar10 = -0x435;
      if (bVar5) {
        iVar10 = -0x434;
      }
      local_70[2] = 1;
      if (!bVar5) {
        local_70[2] = 2;
      }
      uVar9 = iVar10 + uVar9;
    }
  }
  local_70[1] = 1;
  local_58 = (short)uVar9;
  local_56 = (undefined1)uVar8;
  if (uVar8 < 2) {
    pcVar12 = "-+";
    uVar6 = param_1 >> 0x3f;
    pcVar4 = pcVar12;
    if (-1 < (long)param_1) {
      pcVar12 = (char *)0x1;
      pcVar4 = "+";
    }
    if (param_3 != 0) {
      uVar6 = 1;
      pcVar12 = pcVar4;
    }
    lVar3 = -0xc;
    if ((uVar9 & 0x8000) == 0) {
      lVar3 = 5;
    }
    uVar1 = ((ulong)(lVar3 * local_58) >> 4) + 0x15;
    if (uVar11 < uVar1) {
      uVar1 = uVar11 + 1;
    }
    if (0x400 < uVar1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf.len() >= sig_digits",0x29,
                 &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff590);
    }
    core::num::imp::flt2dec::strategy::grisu::format_exact_opt
              (&local_120,local_70,local_520,uVar1,0x8000);
    if (CONCAT62(uStack_11e,local_120) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_exact
                (&local_90,local_70,local_520,uVar1,0x8000);
    }
    else {
      local_90 = (char *)CONCAT62(uStack_11e,local_120);
      pcStack_88 = pcStack_118;
      local_80._0_8_ = local_110;
    }
    local_80 = core::num::imp::flt2dec::digits_to_exp_str
                         (local_90,pcStack_88,local_80._0_8_ & 0xffff,uVar11,param_5,&local_120,6);
    goto LAB_00a94350;
  }
  if ((uVar8 - 2 & 0xff) == 0) {
    uVar6 = 0;
    pcStack_118 = "NaN";
    pcVar12 = (char *)0x1;
  }
  else {
    pcVar12 = "-+";
    uVar6 = param_1 >> 0x3f;
    pcVar4 = pcVar12;
    if (-1 < (long)param_1) {
      pcVar12 = (char *)0x1;
      pcVar4 = "+";
    }
    if (param_3 != 0) {
      uVar6 = 1;
      pcVar12 = pcVar4;
    }
    if ((uVar8 - 2 & 0xff) != 2) {
      local_120 = 2;
      pcStack_118 = "inf";
      local_110 = 3;
      local_80._8_8_ = 1;
      local_80._0_8_ = &local_120;
      goto LAB_00a94350;
    }
    if (param_4 != 0) {
      pcStack_118 = "0.";
      local_110 = 2;
      local_e8 = "E0";
      if (param_5 == 0) {
        local_e8 = "e0E0";
      }
      local_120 = 2;
      local_108 = 0;
      local_f0 = 2;
      uStack_e0 = 2;
      local_80._8_8_ = 3;
      local_80._0_8_ = &local_120;
      local_100 = uVar11;
      goto LAB_00a94350;
    }
    pcStack_118 = "0E0e0E0";
    if (param_5 == 0) {
      pcStack_118 = "0e00E0e0E0";
    }
  }
  local_110 = 3;
  local_120 = 2;
  local_80._8_8_ = 1;
  local_80._0_8_ = &local_120;
LAB_00a94350:
  local_90 = pcVar12;
  pcStack_88 = (char *)uVar6;
  FUN_00a9a57c(param_2,&local_90);
  return;
}


// ===== 00a94394  FUN_00a94394 =====

void FUN_00a94394(uint param_1,undefined8 param_2,int param_3,ushort param_4,int param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 local_520 [128];
  undefined2 local_120;
  undefined6 uStack_11e;
  char *pcStack_118;
  ulong local_110;
  undefined2 local_108;
  ulong local_100;
  undefined2 local_f0;
  char *local_e8;
  undefined8 uStack_e0;
  char *local_90;
  char *pcStack_88;
  undefined1 local_80 [16];
  ulong local_70 [3];
  short local_58;
  undefined1 local_56;
  
  uVar9 = 2;
  uVar12 = (ulong)param_4;
  local_520[0] = 0;
  bVar6 = (param_1 & 0x7fffff) == 0;
  uVar8 = 2;
  if (!bVar6) {
    uVar8 = 3;
  }
  uVar10 = param_1 >> 0x17 & 0xff;
  uVar2 = (param_1 & 0x7fffff) << 1;
  if (uVar10 != 0) {
    uVar2 = param_1 & 0x7fffff | 0x800000;
  }
  local_70[0] = (ulong)uVar2;
  if ((param_1 & 0x7f800000) != 0) {
    uVar8 = 4;
  }
  uVar3 = (uint)bVar6;
  if ((param_1 & 0x7f800000) != 0x7f800000) {
    uVar3 = uVar8;
  }
  local_70[2] = (ulong)uVar3;
  if (uVar3 < 2) {
    if (uVar3 != 0) {
      uVar9 = 3;
    }
  }
  else if (uVar3 == 2) {
    uVar9 = 4;
  }
  else if (uVar3 == 3) {
    uVar10 = uVar10 - 0x96;
    uVar9 = uVar2 & 1 ^ 1;
    local_70[2] = 1;
  }
  else {
    uVar7 = local_70[0] << 1;
    bVar6 = uVar2 != 0x800000;
    iVar11 = -0x98;
    if (bVar6) {
      iVar11 = -0x97;
    }
    local_70[0] = 0x2000000;
    if (bVar6) {
      local_70[0] = uVar7;
    }
    local_70[2] = 1;
    if (!bVar6) {
      local_70[2] = 2;
    }
    uVar10 = iVar11 + uVar10;
    uVar9 = uVar2 & 1 ^ 1;
  }
  local_70[1] = 1;
  local_58 = (short)uVar10;
  local_56 = (undefined1)uVar9;
  if (uVar9 < 2) {
    pcVar13 = "-+";
    uVar7 = (ulong)(param_1 >> 0x1f);
    pcVar5 = pcVar13;
    if (-1 < (int)param_1) {
      pcVar13 = (char *)0x1;
      pcVar5 = "+";
    }
    if (param_3 != 0) {
      uVar7 = 1;
      pcVar13 = pcVar5;
    }
    lVar4 = -0xc;
    if ((uVar10 & 0x8000) == 0) {
      lVar4 = 5;
    }
    uVar1 = ((ulong)(lVar4 * local_58) >> 4) + 0x15;
    if (uVar12 < uVar1) {
      uVar1 = uVar12 + 1;
    }
    if (0x400 < uVar1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: buf.len() >= sig_digits",0x29,
                 &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff590);
    }
    core::num::imp::flt2dec::strategy::grisu::format_exact_opt
              (&local_120,local_70,local_520,uVar1,0x8000);
    if (CONCAT62(uStack_11e,local_120) == 0) {
      core::num::imp::flt2dec::strategy::dragon::format_exact
                (&local_90,local_70,local_520,uVar1,0x8000);
    }
    else {
      local_90 = (char *)CONCAT62(uStack_11e,local_120);
      pcStack_88 = pcStack_118;
      local_80._0_8_ = local_110;
    }
    local_80 = core::num::imp::flt2dec::digits_to_exp_str
                         (local_90,pcStack_88,local_80._0_8_ & 0xffff,uVar12,param_5,&local_120,6);
    goto LAB_00a94668;
  }
  if ((uVar9 - 2 & 0xff) == 0) {
    uVar7 = 0;
    pcStack_118 = "NaN";
    pcVar13 = (char *)0x1;
  }
  else {
    pcVar13 = "-+";
    uVar7 = (ulong)(param_1 >> 0x1f);
    pcVar5 = pcVar13;
    if (-1 < (int)param_1) {
      pcVar13 = (char *)0x1;
      pcVar5 = "+";
    }
    if (param_3 != 0) {
      uVar7 = 1;
      pcVar13 = pcVar5;
    }
    if ((uVar9 - 2 & 0xff) != 2) {
      local_120 = 2;
      pcStack_118 = "inf";
      local_110 = 3;
      local_80._8_8_ = 1;
      local_80._0_8_ = &local_120;
      goto LAB_00a94668;
    }
    if (param_4 != 0) {
      pcStack_118 = "0.";
      local_110 = 2;
      local_e8 = "E0";
      if (param_5 == 0) {
        local_e8 = "e0E0";
      }
      local_120 = 2;
      local_108 = 0;
      local_f0 = 2;
      uStack_e0 = 2;
      local_80._8_8_ = 3;
      local_80._0_8_ = &local_120;
      local_100 = uVar12;
      goto LAB_00a94668;
    }
    pcStack_118 = "0E0e0E0";
    if (param_5 == 0) {
      pcStack_118 = "0e00E0e0E0";
    }
  }
  local_110 = 3;
  local_120 = 2;
  local_80._8_8_ = 1;
  local_80._0_8_ = &local_120;
LAB_00a94668:
  local_90 = pcVar13;
  pcStack_88 = (char *)uVar7;
  FUN_00a9a57c(param_2,&local_90);
  return;
}


// ===== 00a946ac  FUN_00a946ac =====

void FUN_00a946ac(uint param_1,undefined8 param_2,int param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  short sVar14;
  byte *pbVar15;
  undefined1 auStack_141 [17];
  undefined2 local_130 [4];
  byte *local_128;
  undefined8 uStack_120;
  undefined2 local_118 [4];
  undefined *local_110;
  undefined8 uStack_108;
  undefined2 local_100;
  byte *local_f8;
  long lStack_f0;
  undefined2 local_e8 [36];
  byte *local_a0;
  ulong uStack_98;
  undefined2 *local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  ulong local_70;
  short local_68;
  undefined1 local_66;
  byte *local_60;
  long lStack_58;
  short local_50;
  
  uVar11 = 2;
  bVar8 = (param_1 & 0x3ff) == 0;
  uVar10 = 2;
  if (!bVar8) {
    uVar10 = 3;
  }
  uVar2 = param_1 >> 10 & 0x1f;
  local_68 = (short)uVar2;
  uVar4 = (param_1 & 0x3ff) << 1;
  if (uVar2 != 0) {
    uVar4 = param_1 & 0x3ff | 0x400;
  }
  local_80 = (ulong)uVar4;
  if ((param_1 & 0x7c00) != 0) {
    uVar10 = 4;
  }
  uVar2 = (uint)bVar8;
  if ((param_1 & 0x7c00) != 0x7c00) {
    uVar2 = uVar10;
  }
  local_70 = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar11 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar11 = 4;
  }
  else if (uVar2 == 3) {
    local_68 = local_68 + -0x19;
    uVar11 = uVar4 & 1 ^ 1;
    local_70 = 1;
  }
  else {
    uVar9 = local_80 << 1;
    bVar8 = uVar4 != 0x400;
    uVar11 = uVar4 & 1 ^ 1;
    local_80 = 0x1000;
    if (bVar8) {
      local_80 = uVar9;
    }
    sVar14 = -0x1b;
    if (bVar8) {
      sVar14 = -0x1a;
    }
    local_70 = 1;
    if (!bVar8) {
      local_70 = 2;
    }
    local_68 = sVar14 + local_68;
  }
  uVar10 = (uint)(short)param_1;
  uStack_78 = 1;
  local_66 = (undefined1)uVar11;
  if (uVar11 < 2) {
    pbVar1 = (byte *)0x3904ef;
    uVar9 = (ulong)(uVar10 >> 0xf & 1);
    pbVar15 = pbVar1;
    if (-1 < (int)uVar10) {
      pbVar1 = (byte *)0x1;
      pbVar15 = (byte *)0x3904f0;
    }
    if (param_3 != 0) {
      uVar9 = 1;
    }
    if (param_3 == 0) {
      pbVar15 = pbVar1;
    }
    core::num::imp::flt2dec::strategy::grisu::format_shortest_opt
              (&local_a0,&local_80,auStack_141,0x11);
    local_128 = local_a0;
    if (local_a0 == (byte *)0x0) {
      core::num::imp::flt2dec::strategy::dragon::format_shortest
                (&local_60,&local_80,auStack_141,0x11);
      local_128 = local_60;
      uStack_98 = lStack_58;
      local_90._0_2_ = local_50;
    }
    if (uStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_00391126,0x21,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affab0);
    }
    if (*local_128 < 0x31) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_00391147,0x1f,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affac8);
    }
    uStack_120 = 1;
    if (uStack_98 + -1 == 0) {
      puVar13 = local_118;
      uStack_88 = 3;
    }
    else {
      local_f8 = local_128 + 1;
      local_118[0] = 2;
      puVar13 = local_e8;
      local_110 = &DAT_00390c6f;
      uStack_108 = 1;
      local_100 = 2;
      uStack_88 = 5;
      lStack_f0 = uStack_98 + -1;
    }
    puVar6 = &UNK_00391167;
    puVar7 = &UNK_0039116a;
    if (param_4 == 0) {
      puVar6 = &UNK_00391166;
      puVar7 = &UNK_00391168;
    }
    iVar12 = (int)(short)local_90;
    if (0 < iVar12) {
      puVar7 = puVar6;
    }
    *puVar13 = 2;
    uVar3 = 1;
    if (iVar12 < 1) {
      uVar3 = 2;
    }
    *(undefined **)(puVar13 + 4) = puVar7;
    *(undefined8 *)(puVar13 + 8) = uVar3;
    iVar5 = iVar12 + -1;
    if (iVar12 + -1 < 0) {
      iVar5 = 1 - (short)local_90;
    }
    puVar13[0xc] = 1;
    puVar13[0xd] = (short)iVar5;
  }
  else {
    if ((uVar11 - 2 & 0xff) == 0) {
      uVar9 = 0;
      local_128 = (byte *)0x3904f1;
      pbVar15 = (byte *)0x1;
    }
    else {
      pbVar15 = (byte *)0x3904ef;
      uVar9 = (ulong)(uVar10 >> 0xf & 1);
      pbVar1 = pbVar15;
      if (-1 < (int)uVar10) {
        pbVar15 = (byte *)0x1;
        pbVar1 = (byte *)0x3904f0;
      }
      if (param_3 != 0) {
        uVar9 = 1;
        pbVar15 = pbVar1;
      }
      if ((uVar11 - 2 & 0xff) != 2) {
        uStack_88 = 1;
        local_128 = (byte *)0x3904f4;
        uStack_120 = 3;
        goto LAB_00a949a4;
      }
      local_128 = (byte *)0x39051f;
      if (param_4 == 0) {
        local_128 = (byte *)0x39051c;
      }
    }
    uStack_120 = 3;
    uStack_88 = 1;
  }
LAB_00a949a4:
  local_130[0] = 2;
  local_90 = local_130;
  local_a0 = pbVar15;
  uStack_98 = uVar9;
  FUN_00a9a57c(param_2,&local_a0);
  return;
}


// ===== 00a949e8  FUN_00a949e8 =====

void FUN_00a949e8(ulong param_1,undefined8 param_2,int param_3,int param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined2 *puVar12;
  short sVar13;
  byte *pbVar14;
  undefined1 auStack_141 [17];
  undefined2 local_130 [4];
  byte *local_128;
  undefined8 uStack_120;
  undefined2 local_118 [4];
  undefined *local_110;
  undefined8 uStack_108;
  undefined2 local_100;
  byte *local_f8;
  long lStack_f0;
  undefined2 local_e8 [36];
  byte *local_a0;
  ulong uStack_98;
  undefined2 *local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  ulong local_70;
  ushort local_68;
  undefined1 local_66;
  byte *local_60;
  long lStack_58;
  short local_50;
  
  uVar10 = 2;
  uVar8 = param_1 & 0xfffffffffffff;
  uVar9 = 2;
  if (uVar8 != 0) {
    uVar9 = 3;
  }
  local_68 = (ushort)(param_1 >> 0x34) & 0x7ff;
  local_80 = (param_1 & 0xfffffffffffff) << 1;
  if ((param_1 >> 0x34 & 0x7ff) != 0) {
    local_80 = uVar8 | 0x10000000000000;
  }
  if ((param_1 & 0x7ff0000000000000) != 0) {
    uVar9 = 4;
  }
  uVar3 = (uint)(uVar8 == 0);
  if ((param_1 & 0x7ff0000000000000) != 0x7ff0000000000000) {
    uVar3 = uVar9;
  }
  local_70 = (ulong)uVar3;
  if (uVar3 < 2) {
    if (uVar3 != 0) {
      uVar10 = 3;
    }
  }
  else if (uVar3 == 2) {
    uVar10 = 4;
  }
  else {
    uVar10 = (uint)local_80 & 1;
    if (uVar3 == 3) {
      local_68 = local_68 - 0x433;
      uVar10 = uVar10 ^ 1;
      local_70 = 1;
    }
    else {
      uVar8 = local_80 << 1;
      uVar10 = uVar10 ^ 1;
      bVar7 = local_80 != 0x10000000000000;
      local_80 = 0x40000000000000;
      if (bVar7) {
        local_80 = uVar8;
      }
      sVar13 = -0x435;
      if (bVar7) {
        sVar13 = -0x434;
      }
      local_70 = 1;
      if (!bVar7) {
        local_70 = 2;
      }
      local_68 = sVar13 + local_68;
    }
  }
  uStack_78 = 1;
  local_66 = (undefined1)uVar10;
  if (uVar10 < 2) {
    pbVar1 = (byte *)0x3904ef;
    uVar8 = param_1 >> 0x3f;
    pbVar14 = pbVar1;
    if (-1 < (long)param_1) {
      pbVar1 = (byte *)0x1;
      pbVar14 = (byte *)0x3904f0;
    }
    if (param_3 != 0) {
      uVar8 = 1;
    }
    if (param_3 == 0) {
      pbVar14 = pbVar1;
    }
    core::num::imp::flt2dec::strategy::grisu::format_shortest_opt
              (&local_a0,&local_80,auStack_141,0x11);
    local_128 = local_a0;
    if (local_a0 == (byte *)0x0) {
      core::num::imp::flt2dec::strategy::dragon::format_shortest
                (&local_60,&local_80,auStack_141,0x11);
      local_128 = local_60;
      uStack_98 = lStack_58;
      local_90._0_2_ = local_50;
    }
    if (uStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_00391126,0x21,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affab0);
    }
    if (*local_128 < 0x31) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_00391147,0x1f,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affac8);
    }
    uStack_120 = 1;
    if (uStack_98 + -1 == 0) {
      puVar12 = local_118;
      uStack_88 = 3;
    }
    else {
      local_f8 = local_128 + 1;
      local_118[0] = 2;
      puVar12 = local_e8;
      local_110 = &DAT_00390c6f;
      uStack_108 = 1;
      local_100 = 2;
      uStack_88 = 5;
      lStack_f0 = uStack_98 + -1;
    }
    puVar5 = &UNK_00391167;
    puVar6 = &UNK_0039116a;
    if (param_4 == 0) {
      puVar5 = &UNK_00391166;
      puVar6 = &UNK_00391168;
    }
    iVar11 = (int)(short)local_90;
    if (0 < iVar11) {
      puVar6 = puVar5;
    }
    *puVar12 = 2;
    uVar2 = 1;
    if (iVar11 < 1) {
      uVar2 = 2;
    }
    *(undefined **)(puVar12 + 4) = puVar6;
    *(undefined8 *)(puVar12 + 8) = uVar2;
    iVar4 = iVar11 + -1;
    if (iVar11 + -1 < 0) {
      iVar4 = 1 - (short)local_90;
    }
    puVar12[0xc] = 1;
    puVar12[0xd] = (short)iVar4;
  }
  else {
    if ((uVar10 - 2 & 0xff) == 0) {
      uVar8 = 0;
      local_128 = (byte *)0x3904f1;
      pbVar14 = (byte *)0x1;
    }
    else {
      pbVar14 = (byte *)0x3904ef;
      uVar8 = param_1 >> 0x3f;
      pbVar1 = pbVar14;
      if (-1 < (long)param_1) {
        pbVar14 = (byte *)0x1;
        pbVar1 = (byte *)0x3904f0;
      }
      if (param_3 != 0) {
        uVar8 = 1;
        pbVar14 = pbVar1;
      }
      if ((uVar10 - 2 & 0xff) != 2) {
        uStack_88 = 1;
        local_128 = (byte *)0x3904f4;
        uStack_120 = 3;
        goto LAB_00a94cdc;
      }
      local_128 = (byte *)0x39051f;
      if (param_4 == 0) {
        local_128 = (byte *)0x39051c;
      }
    }
    uStack_120 = 3;
    uStack_88 = 1;
  }
LAB_00a94cdc:
  local_130[0] = 2;
  local_90 = local_130;
  local_a0 = pbVar14;
  uStack_98 = uVar8;
  FUN_00a9a57c(param_2,&local_a0);
  return;
}


// ===== 00a94d20  FUN_00a94d20 =====

void FUN_00a94d20(uint param_1,undefined8 param_2,int param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  short sVar14;
  byte *pbVar15;
  undefined1 auStack_141 [17];
  undefined2 local_130 [4];
  byte *local_128;
  undefined8 uStack_120;
  undefined2 local_118 [4];
  undefined *local_110;
  undefined8 uStack_108;
  undefined2 local_100;
  byte *local_f8;
  long lStack_f0;
  undefined2 local_e8 [36];
  byte *local_a0;
  ulong uStack_98;
  undefined2 *local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  ulong local_70;
  short local_68;
  undefined1 local_66;
  byte *local_60;
  long lStack_58;
  short local_50;
  
  uVar11 = 2;
  bVar8 = (param_1 & 0x7fffff) == 0;
  uVar10 = 2;
  if (!bVar8) {
    uVar10 = 3;
  }
  uVar2 = param_1 >> 0x17 & 0xff;
  local_68 = (short)uVar2;
  uVar4 = (param_1 & 0x7fffff) << 1;
  if (uVar2 != 0) {
    uVar4 = param_1 & 0x7fffff | 0x800000;
  }
  local_80 = (ulong)uVar4;
  if ((param_1 & 0x7f800000) != 0) {
    uVar10 = 4;
  }
  uVar2 = (uint)bVar8;
  if ((param_1 & 0x7f800000) != 0x7f800000) {
    uVar2 = uVar10;
  }
  local_70 = (ulong)uVar2;
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      uVar11 = 3;
    }
  }
  else if (uVar2 == 2) {
    uVar11 = 4;
  }
  else if (uVar2 == 3) {
    local_68 = local_68 + -0x96;
    uVar11 = uVar4 & 1 ^ 1;
    local_70 = 1;
  }
  else {
    uVar9 = local_80 << 1;
    bVar8 = uVar4 != 0x800000;
    sVar14 = -0x98;
    if (bVar8) {
      sVar14 = -0x97;
    }
    local_80 = 0x2000000;
    if (bVar8) {
      local_80 = uVar9;
    }
    local_70 = 1;
    if (!bVar8) {
      local_70 = 2;
    }
    local_68 = sVar14 + local_68;
    uVar11 = uVar4 & 1 ^ 1;
  }
  uStack_78 = 1;
  local_66 = (undefined1)uVar11;
  if (uVar11 < 2) {
    pbVar1 = (byte *)0x3904ef;
    uVar9 = (ulong)(param_1 >> 0x1f);
    pbVar15 = pbVar1;
    if (-1 < (int)param_1) {
      pbVar1 = (byte *)0x1;
      pbVar15 = (byte *)0x3904f0;
    }
    if (param_3 != 0) {
      uVar9 = 1;
    }
    if (param_3 == 0) {
      pbVar15 = pbVar1;
    }
    core::num::imp::flt2dec::strategy::grisu::format_shortest_opt
              (&local_a0,&local_80,auStack_141,0x11);
    local_128 = local_a0;
    if (local_a0 == (byte *)0x0) {
      core::num::imp::flt2dec::strategy::dragon::format_shortest
                (&local_60,&local_80,auStack_141,0x11);
      local_128 = local_60;
      uStack_98 = lStack_58;
      local_90._0_2_ = local_50;
    }
    if (uStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_00391126,0x21,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affab0);
    }
    if (*local_128 < 0x31) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_00391147,0x1f,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affac8);
    }
    uStack_120 = 1;
    if (uStack_98 + -1 == 0) {
      puVar13 = local_118;
      uStack_88 = 3;
    }
    else {
      local_f8 = local_128 + 1;
      local_118[0] = 2;
      puVar13 = local_e8;
      local_110 = &DAT_00390c6f;
      uStack_108 = 1;
      local_100 = 2;
      uStack_88 = 5;
      lStack_f0 = uStack_98 + -1;
    }
    puVar6 = &UNK_00391167;
    puVar7 = &UNK_0039116a;
    if (param_4 == 0) {
      puVar6 = &UNK_00391166;
      puVar7 = &UNK_00391168;
    }
    iVar12 = (int)(short)local_90;
    if (0 < iVar12) {
      puVar7 = puVar6;
    }
    *puVar13 = 2;
    uVar3 = 1;
    if (iVar12 < 1) {
      uVar3 = 2;
    }
    *(undefined **)(puVar13 + 4) = puVar7;
    *(undefined8 *)(puVar13 + 8) = uVar3;
    iVar5 = iVar12 + -1;
    if (iVar12 + -1 < 0) {
      iVar5 = 1 - (short)local_90;
    }
    puVar13[0xc] = 1;
    puVar13[0xd] = (short)iVar5;
  }
  else {
    if ((uVar11 - 2 & 0xff) == 0) {
      uVar9 = 0;
      local_128 = (byte *)0x3904f1;
      pbVar15 = (byte *)0x1;
    }
    else {
      pbVar15 = (byte *)0x3904ef;
      uVar9 = (ulong)(param_1 >> 0x1f);
      pbVar1 = pbVar15;
      if (-1 < (int)param_1) {
        pbVar15 = (byte *)0x1;
        pbVar1 = (byte *)0x3904f0;
      }
      if (param_3 != 0) {
        uVar9 = 1;
        pbVar15 = pbVar1;
      }
      if ((uVar11 - 2 & 0xff) != 2) {
        uStack_88 = 1;
        local_128 = (byte *)0x3904f4;
        uStack_120 = 3;
        goto LAB_00a95010;
      }
      local_128 = (byte *)0x39051f;
      if (param_4 == 0) {
        local_128 = (byte *)0x39051c;
      }
    }
    uStack_120 = 3;
    uStack_88 = 1;
  }
LAB_00a95010:
  local_130[0] = 2;
  local_90 = local_130;
  local_a0 = pbVar15;
  uStack_98 = uVar9;
  FUN_00a9a57c(param_2,&local_a0);
  return;
}


// ===== 00a95054  FUN_00a95054 =====

undefined1  [16] FUN_00a95054(long param_1,long param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((param_1 + 0x1b < 0 != SCARRY8(param_1,0x1b)) || (param_2 == 0)) {
LAB_00a950f8:
    return ZEXT816(0);
  }
  if (param_1 < 5) {
    uVar12 = param_2 << (LZCOUNT(param_2) & 0x3fU);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulong *)(PTR_POWER_OF_FIVE_128_00b013c8 + param_1 * 0x10 + 0x1560);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar12;
    uVar10 = SUB168(auVar2 * auVar4,8);
    uVar8 = *(ulong *)(PTR_POWER_OF_FIVE_128_00b013c8 + param_1 * 0x10 + 0x1560) * uVar12;
    if ((((uVar10 ^ 0xffffffffffffffff) & 0x7ffffffffffff) == 0) &&
       (auVar3._8_8_ = 0,
       auVar3._0_8_ = *(ulong *)(PTR_POWER_OF_FIVE_128_00b013c8 + param_1 * 0x10 + 0x1568),
       auVar5._8_8_ = 0, auVar5._0_8_ = uVar12, uVar12 = SUB168(auVar3 * auVar5,8),
       bVar6 = CARRY8(uVar12,uVar8), uVar8 = uVar12 + uVar8, bVar6)) {
      uVar10 = uVar10 + 1;
    }
    uVar12 = -((long)uVar10 >> 0x3f) + 0x33;
    iVar9 = ((int)-((long)uVar10 >> 0x3f) - (int)LZCOUNT(param_2)) +
            ((int)param_1 * 0x3526a >> 0x10);
    uVar11 = uVar10 >> (uVar12 & 0x3f);
    uVar1 = iVar9 + 0x3f;
    if (iVar9 + 0x4d < 0 != SCARRY4(uVar1,0xe)) {
      if (0xffffffb2 < uVar1) {
        uVar11 = uVar11 >> ((ulong)(-uVar1 - 0xe) & 0x3f);
        auVar14._4_4_ = 0;
        auVar14._0_4_ = (uint)((int)(uVar11 & 1) + (int)uVar11) >> 1;
        auVar14[8] = 0x7ff < (uVar11 & 1) + uVar11;
        auVar14._9_7_ = 0;
        return auVar14;
      }
      goto LAB_00a950f8;
    }
    bVar6 = uVar11 << (uVar12 & 0x3f) == uVar10;
    bVar7 = (uVar11 & 3) == 1;
    uVar10 = uVar11 & 0xfffc;
    if ((((!bVar6 || !bVar7) || uVar8 >= 2) || param_1 == -0x17) ||
        ((bVar6 && bVar7) && uVar8 < 2) && param_1 + 0x17 < 0 != SCARRY8(param_1,0x17)) {
      uVar10 = uVar11;
    }
    uVar10 = (uVar10 & 1) + uVar10;
    iVar9 = 0xf;
    if (0xfff < uVar10) {
      iVar9 = 0x10;
    }
    if (iVar9 + uVar1 < 0x1f) {
      uVar8 = 0;
      if (uVar10 < 0x1000) {
        uVar8 = uVar10 >> 1 & 0xfffffffffffffbff;
      }
      auVar13._8_4_ = iVar9 + uVar1;
      auVar13._0_8_ = uVar8;
      auVar13._12_4_ = 0;
      return auVar13;
    }
  }
  return ZEXT816(0x1f) << 0x40;
}


// ===== 00a95180  FUN_00a95180 =====

undefined1  [16] FUN_00a95180(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((param_1 + 0x156 < 0 != SCARRY8(param_1,0x156)) || (param_2 == 0)) {
LAB_00a95244:
    return ZEXT816(0);
  }
  if (param_1 < 0x135) {
    uVar12 = param_2 << (LZCOUNT(param_2) & 0x3fU);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulong *)(PTR_POWER_OF_FIVE_128_00b013c8 + param_1 * 0x10 + 0x1560);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    uVar10 = SUB168(auVar4 * auVar6,8);
    uVar9 = *(ulong *)(PTR_POWER_OF_FIVE_128_00b013c8 + param_1 * 0x10 + 0x1560) * uVar12;
    if (((~SUB164(auVar4 * auVar6,8) & 0x1ff) == 0) &&
       (auVar5._8_8_ = 0,
       auVar5._0_8_ = *(ulong *)(PTR_POWER_OF_FIVE_128_00b013c8 + param_1 * 0x10 + 0x1568),
       auVar7._8_8_ = 0, auVar7._0_8_ = uVar12, uVar12 = SUB168(auVar5 * auVar7,8),
       bVar8 = CARRY8(uVar12,uVar9), uVar9 = uVar12 + uVar9, bVar8)) {
      uVar10 = uVar10 + 1;
    }
    if ((0x52 < param_1 + 0x1bU) && (uVar9 == 0xffffffffffffffff)) {
      return ZEXT816(0xffffffff) << 0x40;
    }
    lVar2 = -((long)uVar10 >> 0x3f) + 9;
    iVar11 = ((int)-((long)uVar10 >> 0x3f) - (int)LZCOUNT(param_2)) +
             ((int)param_1 * 0x3526a >> 0x10);
    uVar12 = uVar10 >> lVar2;
    uVar1 = iVar11 + 0x3f;
    if (iVar11 + 0x43d < 0 != SCARRY4(uVar1,0x3fe)) {
      if (0xfffffbc2 < uVar1) {
        uVar12 = uVar12 >> ((ulong)(-uVar1 - 0x3fe) & 0x3f);
        uVar12 = (uVar12 & 1) + uVar12;
        auVar14._0_8_ = uVar12 >> 1;
        auVar14[8] = (uVar12 & 0x1e0000000000000) != 0;
        auVar14._9_7_ = 0;
        return auVar14;
      }
      goto LAB_00a95244;
    }
    uVar3 = uVar12 & 0xfffffffffffffc;
    if (((uVar12 << lVar2 != uVar10 || (uVar12 & 3) != 1) || 1 < uVar9) || 0x1b < param_1 + 4U) {
      uVar3 = uVar12;
    }
    uVar3 = (uVar3 & 1) + uVar3;
    uVar9 = uVar3 >> 0x36;
    iVar11 = 0x3ff;
    if (uVar9 != 0) {
      iVar11 = 0x400;
    }
    if (iVar11 + uVar1 < 0x7ff) {
      uVar10 = 0;
      if (uVar9 == 0) {
        uVar10 = uVar3 >> 1 & 0xffefffffffffffff;
      }
      auVar13._8_4_ = iVar11 + uVar1;
      auVar13._0_8_ = uVar10;
      auVar13._12_4_ = 0;
      return auVar13;
    }
  }
  return ZEXT816(0x7ff) << 0x40;
}


// ===== 00a952cc  FUN_00a952cc =====

undefined1  [16] FUN_00a952cc(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((param_1 + 0x41 < 0 != SCARRY8(param_1,0x41)) || (param_2 == 0)) {
LAB_00a95390:
    return ZEXT816(0);
  }
  if (param_1 < 0x27) {
    uVar11 = param_2 << (LZCOUNT(param_2) & 0x3fU);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulong *)(PTR_POWER_OF_FIVE_128_00b013c8 + param_1 * 0x10 + 0x1560);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar11;
    uVar9 = SUB168(auVar2 * auVar4,8);
    uVar8 = *(ulong *)(PTR_POWER_OF_FIVE_128_00b013c8 + param_1 * 0x10 + 0x1560) * uVar11;
    if ((((uVar9 ^ 0xffffffffffffffff) & 0x3fffffffff) == 0) &&
       (auVar3._8_8_ = 0,
       auVar3._0_8_ = *(ulong *)(PTR_POWER_OF_FIVE_128_00b013c8 + param_1 * 0x10 + 0x1568),
       auVar5._8_8_ = 0, auVar5._0_8_ = uVar11, uVar11 = SUB168(auVar3 * auVar5,8),
       bVar6 = CARRY8(uVar11,uVar8), uVar8 = uVar11 + uVar8, bVar6)) {
      uVar9 = uVar9 + 1;
    }
    if ((param_1 == -0x1c || param_1 + 0x1c < 0 != SCARRY8(param_1,0x1c)) &&
       (uVar8 == 0xffffffffffffffff)) {
      return ZEXT816(0xffffffff) << 0x40;
    }
    uVar12 = uVar9 >> 0x3f | 0x26;
    iVar10 = (-(int)LZCOUNT(param_2) - (int)((long)uVar9 >> 0x3f)) +
             ((int)param_1 * 0x3526a >> 0x10);
    uVar11 = uVar9 >> uVar12;
    uVar7 = iVar10 + 0x3f;
    if (iVar10 + 0xbd < 0 != SCARRY4(uVar7,0x7e)) {
      if (0xffffff42 < uVar7) {
        uVar7 = (uint)(uVar11 >> ((ulong)(-uVar7 - 0x7e) & 0x3f));
        uVar7 = (uVar7 & 1) + uVar7;
        auVar14._4_4_ = 0;
        auVar14._0_4_ = uVar7 >> 1;
        auVar14[8] = (uVar7 & 0x7000000) != 0;
        auVar14._9_7_ = 0;
        return auVar14;
      }
      goto LAB_00a95390;
    }
    uVar1 = uVar11 & 0x3fffffc;
    if (((uVar11 << uVar12 != uVar9 || (uVar11 & 3) != 1) || 1 < uVar8) || 0x1b < param_1 + 0x11U) {
      uVar1 = uVar11;
    }
    uVar1 = (uVar1 & 1) + uVar1;
    uVar8 = uVar1 >> 0x19;
    iVar10 = 0x7f;
    if (uVar8 != 0) {
      iVar10 = 0x80;
    }
    if (iVar10 + uVar7 < 0xff) {
      uVar9 = 0;
      if (uVar8 == 0) {
        uVar9 = uVar1 >> 1 & 0x37fffff;
      }
      auVar13._8_4_ = iVar10 + uVar7;
      auVar13._0_8_ = uVar9;
      auVar13._12_4_ = 0;
      return auVar13;
    }
  }
  return ZEXT816(0xff) << 0x40;
}


// ===== 00a9541c  FUN_00a9541c =====

undefined8 FUN_00a9541c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long local_60;
  ulong uStack_58;
  undefined1 *local_50;
  code *pcStack_48;
  undefined1 *local_40;
  undefined *local_38;
  
  if (*(long *)*param_1 == 1) {
    local_60 = ((long *)*param_1)[1];
    local_50 = (undefined1 *)param_1[1];
    pcStack_48 = FUN_00aa767c;
    uVar3 = *param_2;
    uVar1 = param_2[1];
    local_38 = PTR_fmt_00b00c60;
    local_40 = (undefined1 *)&local_60;
    uVar2 = core::fmt::write(uVar3,uVar1,&DAT_002a4675,&local_50);
    uVar4 = uStack_58;
  }
  else {
    local_50 = (undefined1 *)param_1[1];
    uVar3 = *param_2;
    uVar1 = param_2[1];
    pcStack_48 = FUN_00aa767c;
    uVar2 = core::fmt::write(uVar3,uVar1,&DAT_002a50db,&local_50);
    uVar4 = uStack_58;
  }
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uStack_58 = *(ulong *)param_1[2];
  if (uStack_58 != 0) {
    if (9 < uStack_58) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uStack_58,9,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff680);
    }
    local_60 = param_1[3];
    if ((*(byte *)((long)param_2 + 0x13) >> 4 & 1) == 0) {
      uVar4 = *(ulong *)param_1[4];
      if (uVar4 >> 0x10 != 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("Formatting argument out of range",0x41,
                   &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff668);
      }
    }
    else {
      uVar4 = (ulong)*(ushort *)((long)param_2 + 0x16);
    }
    pcStack_48 = FUN_00aa767c;
    local_40 = (undefined1 *)0x0;
    uVar2 = (ulong)local_38 >> 0x10;
    local_38 = (undefined *)CONCAT62((int6)uVar2,(short)uVar4);
    local_50 = (undefined1 *)&local_60;
    uVar2 = core::fmt::write(uVar3,uVar1,&DAT_00390662,&local_50);
    uVar4 = uStack_58;
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  uStack_58 = uVar4;
  local_50 = (undefined1 *)param_1[5];
  pcStack_48 = FUN_00aa767c;
  uVar3 = core::fmt::write(uVar3,uVar1,&DAT_002ab692,&local_50);
  return uVar3;
}


// ===== 00a955b0  <core::str::str>::escape_debug =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::str>::escape_debug */

void __rustcall <core::str::str>::escape_debug(long *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    uVar3 = 0;
    pbVar4 = param_2;
  }
  else {
    pbVar4 = param_2 + 1;
    uVar2 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      if (uVar2 < 0xe0) {
        uVar2 = param_2[1] & 0x3f | (uVar2 & 0x1f) << 6;
        pbVar4 = param_2 + 2;
      }
      else {
        uVar1 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (uVar2 < 0xf0) {
          uVar2 = uVar1 | (uVar2 & 0x1f) << 0xc;
          pbVar4 = param_2 + 3;
        }
        else {
          pbVar4 = param_2 + 4;
          uVar2 = param_2[3] & 0x3f | uVar1 << 6 | (uVar2 & 7) << 0x12;
        }
      }
    }
    FUN_00a95e3c(&local_40,uVar2,0x10101);
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (long)pbVar4;
  param_1[1] = (long)(param_2 + param_3);
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined8 *)((long)param_1 + 0x6c) = uStack_38;
  *(undefined8 *)((long)param_1 + 100) = local_40;
  return;
}


// ===== 00a95694  <core::str::str>::substr_range =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::str>::substr_range */

void __rustcall
<core::str::str>::substr_range
          (undefined8 *param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = param_4 - param_2;
  uVar1 = 0;
  if ((uVar2 <= param_3) && (uVar2 + param_5 <= param_3)) {
    uVar1 = 1;
    param_1[1] = uVar2;
    param_1[2] = uVar2 + param_5;
  }
  *param_1 = uVar1;
  return;
}


// ===== 00a956c0  <core::str::str>::from_utf8_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::str>::from_utf8_mut */

void __rustcall <core::str::str>::from_utf8_mut(void)

{
  (*(code *)PTR_from_utf8_mut_00b07ba0)();
  return;
}


// ===== 00a956c4  <core::str::str>::split_at_mut_unchecked =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::str>::split_at_mut_unchecked */

void __rustcall
<core::str::str>::split_at_mut_unchecked(long *param_1,long param_2,long param_3,long param_4)

{
  *param_1 = param_2;
  param_1[1] = param_4;
  param_1[2] = param_2 + param_4;
  param_1[3] = param_3 - param_4;
  return;
}


// ===== 00a956d8  <core::str::str>::from_utf8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::str>::from_utf8 */

void __rustcall <core::str::str>::from_utf8(void)

{
  (*(code *)PTR_from_utf8_00b01bc0)();
  return;
}


// ===== 00a956dc  FUN_00a956dc =====

/* WARNING: Removing unreachable block (ram,0x00a95760) */

ulong FUN_00a956dc(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong in_x17;
  
  pbVar1 = (byte *)*param_1;
  lVar2 = param_1[1];
  if (lVar2 == 0) goto LAB_00a95a40;
  pbVar9 = pbVar1 + 1;
  uVar6 = *pbVar1 - 0x30;
  if ((9 < uVar6) || (lVar10 = lVar2 + -1, lVar10 == 0)) goto LAB_00a95a40;
  if (pbVar1[1] - 0x30 < 10) {
    uVar7 = (pbVar1[1] - 0x30) + uVar6 * 10;
    lVar10 = lVar2 + -2;
    if (lVar10 == 0) {
LAB_00a95764:
      lVar10 = 0;
      pbVar9 = pbVar1 + lVar2;
    }
    else if (pbVar1[2] - 0x30 < 10) {
      uVar7 = (pbVar1[2] - 0x30) + uVar7 * 10;
      lVar10 = lVar2 + -3;
      if (lVar10 == 0) goto LAB_00a95764;
      pbVar9 = pbVar1 + 3;
      if (*pbVar9 - 0x30 < 10) goto LAB_00a95a40;
    }
    else {
      pbVar9 = pbVar1 + 2;
    }
    if ((uVar6 == 0) || (uVar6 = uVar7, 0xff < uVar7)) goto LAB_00a95a40;
  }
  if (lVar10 == 0) goto LAB_00a95a40;
  uVar7 = (uint)*pbVar9;
  if (*pbVar9 != 0x2e) goto LAB_00a95a40;
  uVar12 = lVar10 - 1;
  if ((uVar12 == 0) || (uVar7 = pbVar9[1] - 0x30, 9 < uVar7)) {
LAB_00a95868:
    bVar4 = false;
    pbVar11 = pbVar9 + 1;
    uVar13 = uVar12;
    uVar8 = uVar7;
  }
  else {
    if (lVar10 - 2U == 0) goto LAB_00a95a40;
    uVar8 = pbVar9[2] - 0x30;
    in_x17 = (ulong)uVar8;
    if (uVar8 < 10) {
      uVar8 = uVar8 + uVar7 * 10;
      in_x17 = lVar10 - 3;
      if (in_x17 == 0) {
LAB_00a9583c:
        in_x17 = 0;
        pbVar11 = pbVar9 + lVar10;
      }
      else if (pbVar9[3] - 0x30 < 10) {
        uVar8 = (pbVar9[3] - 0x30) + uVar8 * 10;
        in_x17 = lVar10 - 4;
        if (in_x17 == 0) goto LAB_00a9583c;
        pbVar11 = pbVar9 + 4;
        if (*pbVar11 - 0x30 < 10) goto LAB_00a95868;
      }
      else {
        pbVar11 = pbVar9 + 3;
      }
      if (uVar7 == 0) goto LAB_00a95868;
      bVar4 = uVar8 < 0x100;
      uVar13 = in_x17;
      if (!bVar4) {
        pbVar11 = pbVar9 + 1;
        uVar13 = uVar12;
      }
    }
    else {
      bVar4 = true;
      pbVar11 = pbVar9 + 2;
      uVar13 = lVar10 - 2U;
      uVar8 = uVar7;
    }
  }
  if ((!bVar4) || (uVar13 == 0)) goto LAB_00a95a40;
  uVar7 = (uint)*pbVar11;
  if (*pbVar11 != 0x2e) goto LAB_00a95a40;
  uVar12 = uVar13 - 1;
  if ((uVar12 == 0) || (uVar7 = pbVar11[1] - 0x30, 9 < uVar7)) {
LAB_00a95938:
    bVar4 = false;
    pbVar9 = pbVar11 + 1;
    uVar5 = uVar12;
  }
  else {
    in_x17 = uVar13 - 2;
    if (in_x17 == 0) goto LAB_00a95a40;
    if (pbVar11[2] - 0x30 < 10) {
      uVar14 = (pbVar11[2] - 0x30) + uVar7 * 10;
      in_x17 = (ulong)uVar14;
      uVar5 = uVar13 - 3;
      if (uVar5 == 0) {
LAB_00a9590c:
        uVar5 = 0;
        pbVar9 = pbVar11 + uVar13;
      }
      else if (pbVar11[3] - 0x30 < 10) {
        in_x17 = (ulong)((pbVar11[3] - 0x30) + uVar14 * 10);
        uVar5 = uVar13 - 4;
        if (uVar5 == 0) goto LAB_00a9590c;
        pbVar9 = pbVar11 + 4;
        if (*pbVar9 - 0x30 < 10) goto LAB_00a95938;
      }
      else {
        pbVar9 = pbVar11 + 3;
      }
      if (uVar7 == 0) goto LAB_00a95938;
      uVar7 = (uint)in_x17;
      bVar4 = uVar7 < 0x100;
      if (!bVar4) {
        pbVar9 = pbVar11 + 1;
        uVar5 = uVar12;
      }
    }
    else {
      bVar4 = true;
      pbVar9 = pbVar11 + 2;
      uVar5 = in_x17;
    }
  }
  uVar14 = (uint)in_x17;
  if (((!bVar4) || (uVar5 == 0)) || (*pbVar9 != 0x2e)) goto LAB_00a95a40;
  if (uVar5 - 1 == 0) {
LAB_00a95a14:
    bVar4 = false;
LAB_00a95a18:
    *param_1 = (long)(pbVar9 + 1);
    param_1[1] = uVar5 - 1;
  }
  else {
    uVar14 = (uint)pbVar9[1];
    uVar3 = pbVar9[1] - 0x30;
    if (9 < uVar3) goto LAB_00a95a14;
    uVar14 = uVar3;
    if (uVar5 - 2 != 0) {
      if (9 < pbVar9[2] - 0x30) {
        *param_1 = (long)(pbVar9 + 2);
        param_1[1] = uVar5 - 2;
        bVar4 = true;
        goto LAB_00a95a1c;
      }
      lVar10 = uVar5 - 3;
      uVar14 = (pbVar9[2] - 0x30) + uVar3 * 10;
      if (lVar10 == 0) {
LAB_00a959ec:
        lVar10 = 0;
        pbVar11 = pbVar9 + uVar5;
      }
      else if (pbVar9[3] - 0x30 < 10) {
        uVar14 = (pbVar9[3] - 0x30) + uVar14 * 10;
        lVar10 = uVar5 - 4;
        if (lVar10 == 0) goto LAB_00a959ec;
        pbVar11 = pbVar9 + 4;
        if (*pbVar11 - 0x30 < 10) goto LAB_00a95a14;
      }
      else {
        pbVar11 = pbVar9 + 3;
      }
      *param_1 = (long)pbVar11;
      param_1[1] = lVar10;
      if (uVar3 == 0) goto LAB_00a95a14;
      bVar4 = uVar14 < 0x100;
      if (bVar4) goto LAB_00a95a1c;
      goto LAB_00a95a18;
    }
    *param_1 = (long)(pbVar9 + 2);
    param_1[1] = 0;
    bVar4 = true;
  }
LAB_00a95a1c:
  if (bVar4) {
    return (ulong)((uVar7 & 0xff) << 0x10 | uVar14 << 0x18 | (uVar8 & 0xff) << 8 | uVar6 & 0xff) <<
           8 | 1;
  }
LAB_00a95a40:
  *param_1 = (long)pbVar1;
  param_1[1] = lVar2;
  return (long)pbVar1 << 8;
}


// ===== 00a95a50  FUN_00a95a50 =====

void FUN_00a95a50(undefined1 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined6 uStack_40;
  undefined2 local_3a;
  undefined6 uStack_38;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  local_50 = 0;
  uStack_48 = 0;
  auVar7 = FUN_00aa3f30(param_2,&local_50,8);
  if (auVar7._0_8_ == 8) {
LAB_00a95a8c:
    auVar7._8_8_ = uStack_48;
    auVar7._0_8_ = local_50;
    *param_1 = 1;
    auVar7 = NEON_rev16(auVar7,1);
    *(long *)(param_1 + 9) = auVar7._8_8_;
    *(long *)(param_1 + 1) = auVar7._0_8_;
    return;
  }
  if (((((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
       (lVar5 = param_2[1], lVar5 != 0)) && (pcVar6 = (char *)*param_2, *pcVar6 == ':')) &&
     (lVar5 != 1)) {
    cVar3 = pcVar6[1];
    *param_2 = (long)(pcVar6 + 2);
    param_2[1] = lVar5 + -2;
    if (cVar3 == ':') {
      uStack_38 = 0;
      uVar4 = 7 - auVar7._0_8_;
      uStack_40 = 0;
      local_3a = 0;
      if (7 < uVar4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar4,7,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff5f0);
      }
      uVar4 = FUN_00aa3f30(param_2,&uStack_40);
      if (8 < uVar4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (8 - uVar4,8,8,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff5d8);
      }
      if (uVar4 == 8) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail(0,8,7,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff5c0)
        ;
      }
      memcpy((void *)((long)&local_50 + (8 - uVar4) * 2),&uStack_40,uVar4 << 1);
      goto LAB_00a95a8c;
    }
  }
  *param_1 = 0;
  *param_2 = lVar1;
  param_2[1] = lVar2;
  return;
}


// ===== 00a95ba4  FUN_00a95ba4 =====

void FUN_00a95ba4(undefined4 *param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  char *pcVar12;
  char cVar13;
  undefined2 uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  char local_54;
  undefined8 local_53;
  undefined8 uStack_4b;
  
  pcVar1 = (char *)*param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    cVar13 = *pcVar1;
    *param_2 = (long)(pcVar1 + 1);
    param_2[1] = lVar2 + -1;
    if (((cVar13 != '[') || (FUN_00a95a50(&local_54), local_54 != '\x01')) ||
       (lVar9 = param_2[1], lVar9 == 0)) goto LAB_00a95c8c;
    pcVar12 = (char *)*param_2;
    uVar7 = 0;
    cVar13 = *pcVar12;
    lVar10 = lVar9;
    if ((lVar9 + -1 != 0) && (cVar13 == '%')) {
      uVar7 = (byte)pcVar12[1] - 0x30;
      if (9 < uVar7) {
        *param_2 = (long)(pcVar12 + 1);
        param_2[1] = lVar9 + -1;
        goto LAB_00a95c8c;
      }
      lVar16 = 2;
      do {
        lVar10 = lVar9 - lVar16;
        lVar4 = lVar9;
        if ((lVar10 == 0) || (uVar15 = (byte)pcVar12[lVar16] - 0x30, lVar4 = lVar16, 9 < uVar15)) {
          pcVar12 = pcVar12 + lVar4;
          bVar5 = true;
          goto LAB_00a95cc4;
        }
        uVar17 = (ulong)uVar7;
        uVar8 = (uint)(uVar17 * 10);
        uVar7 = uVar15 + uVar8;
      } while (((uVar17 * 10 & 0xffffffff00000000) == 0) &&
              (lVar16 = lVar16 + 1, !CARRY4(uVar15,uVar8)));
      bVar5 = false;
      lVar10 = lVar9;
LAB_00a95cc4:
      if (lVar10 == 0) goto LAB_00a95c8c;
      cVar13 = *pcVar12;
      if (!bVar5) {
        uVar7 = 0;
      }
    }
    uVar17 = lVar10 - 1;
    *param_2 = (long)(pcVar12 + 1);
    param_2[1] = uVar17;
    if (cVar13 != ']') goto LAB_00a95c8c;
    uVar15 = 0x5d;
    if (uVar17 != 0) {
      bVar6 = uVar17 != 1;
      uVar17 = 0;
      bVar5 = false;
      if (bVar6) {
        uVar15 = (uint)(byte)pcVar12[1];
        if (uVar15 == 0x3a) {
          uVar15 = (byte)pcVar12[2] - 0x30;
          if (9 < uVar15) goto LAB_00a95c8c;
          lVar9 = lVar10 + -3;
          pbVar18 = (byte *)(pcVar12 + 3);
          do {
            pbVar11 = (byte *)(pcVar12 + lVar10);
            if ((lVar9 == 0) || (bVar3 = *pbVar18, pbVar11 = pbVar18, 9 < bVar3 - 0x30)) {
              *param_2 = (long)pbVar11;
              param_2[1] = lVar9;
              bVar5 = true;
              break;
            }
            uVar17 = 0;
            bVar5 = false;
            uVar15 = ((uVar15 & 0xffff) + (uVar15 & 0xffff) * 4) * 2;
            if ((uVar15 & 0xf0000) != 0) goto LAB_00a95d68;
            lVar9 = lVar9 + -1;
            pbVar18 = pbVar18 + 1;
            uVar15 = (uVar15 & 0xfffe) + (bVar3 - 0x30 & 0xffff);
          } while (uVar15 >> 0x10 == 0);
        }
        uVar14 = (undefined2)uVar15;
        if (!bVar5) goto LAB_00a95c8c;
        goto LAB_00a95d84;
      }
    }
LAB_00a95d68:
    uVar14 = (undefined2)uVar15;
    if ((uVar17 & 1) != 0) {
LAB_00a95d84:
      param_1[5] = 0;
      param_1[6] = uVar7;
      *(undefined2 *)(param_1 + 7) = uVar14;
      *(undefined8 *)(param_1 + 3) = uStack_4b;
      *(undefined8 *)(param_1 + 1) = local_53;
      *param_1 = 1;
      return;
    }
  }
LAB_00a95c8c:
  *param_1 = 0;
  *param_2 = (long)pcVar1;
  param_2[1] = lVar2;
  return;
}


// ===== 00a95db0  FUN_00a95db0 =====

uint FUN_00a95db0(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0x378) {
    return 1;
  }
  if (param_1 < 0x3fffe) {
    uVar1 = core::unicode::unicode_data::cn_planes_0_3::lookup_slow(param_1);
    return uVar1 ^ 1;
  }
  uVar1 = 1;
  if ((((param_1 != 0xe0001) && (0x5f < param_1 - 0xe0020)) && (0xef < param_1 - 0xe0100)) &&
     (0xfffd < param_1 - 0xf0000)) {
    uVar1 = (uint)(param_1 - 0x100000 < 0xfffe);
  }
  return uVar1;
}


// ===== 00a95e3c  FUN_00a95e3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a95e3c(uint *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_3e [2];
  undefined2 local_3c;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined2 local_34;
  
  uVar1 = (uint)param_2;
  if ((int)uVar1 < 0xd) {
    if (uVar1 == 0) {
      *(undefined2 *)param_1 = 0x305c;
      *(undefined8 *)((long)param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      *(undefined1 *)((long)param_1 + 0xd) = 2;
      return;
    }
    if (uVar1 == 9) {
      *(undefined2 *)param_1 = 0x745c;
      *(undefined8 *)((long)param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      *(undefined1 *)((long)param_1 + 0xd) = 2;
      return;
    }
    if (uVar1 == 10) {
      *(undefined2 *)param_1 = 0x6e5c;
      *(undefined8 *)((long)param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      *(undefined1 *)((long)param_1 + 0xd) = 2;
      return;
    }
  }
  else if ((int)uVar1 < 0x27) {
    if (uVar1 == 0xd) {
      *(undefined2 *)param_1 = 0x725c;
      *(undefined8 *)((long)param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      *(undefined1 *)((long)param_1 + 0xd) = 2;
      return;
    }
    if (uVar1 == 0x22) {
      if (0xffff < (param_3 & 0xffffff)) {
        *(undefined2 *)param_1 = 0x225c;
        *(undefined8 *)((long)param_1 + 2) = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        *(undefined1 *)((long)param_1 + 0xd) = 2;
        return;
      }
      goto LAB_00a9604c;
    }
  }
  else {
    if (uVar1 == 0x27) {
      if ((param_3 >> 8 & 1) != 0) {
        *(undefined2 *)param_1 = 0x275c;
        *(undefined8 *)((long)param_1 + 2) = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        *(undefined1 *)((long)param_1 + 0xd) = 2;
        return;
      }
      goto LAB_00a9604c;
    }
    if (uVar1 == 0x5c) {
      *(undefined2 *)param_1 = 0x5c5c;
      *(undefined8 *)((long)param_1 + 2) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      *(undefined1 *)((long)param_1 + 0xd) = 2;
      return;
    }
  }
  if ((uVar1 - 0x20 < 0x5f) || ((uVar1 & 0x1ffffe) == 0xff9e)) {
LAB_00a9604c:
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 3) = 0x80;
    *(undefined1 *)((long)param_1 + 0xd) = 0x81;
    return;
  }
  auVar6._0_4_ = uVar1 + (int)_DAT_002a0a10;
  auVar6._4_4_ = uVar1 + (int)((ulong)_DAT_002a0a10 >> 0x20);
  auVar6._8_4_ = uVar1 + (int)_UNK_002a0a18;
  auVar6._12_4_ = uVar1 + (int)((ulong)_UNK_002a0a18 >> 0x20);
  auVar7._8_4_ = _UNK_0029f9c8;
  auVar7._0_8_ = _DAT_0029f9c0;
  auVar7._12_4_ = _UNK_0029f9cc;
  auVar7 = NEON_cmhi(auVar7,auVar6,4);
  uVar5 = NEON_umaxv(auVar7,4);
  if ((((uVar5 & 1) == 0) && (uVar1 != 0x20)) && (0xfffd < uVar1 - 0x100000)) {
    if (uVar1 < 0x85) {
LAB_00a960c4:
      uVar4 = FUN_00a95db0(param_2 & 0xffffffff);
      if ((uVar4 & 1) != 0) {
        *param_1 = uVar1;
        uVar3 = 0x81;
        cVar2 = -0x80;
        goto LAB_00a9600c;
      }
    }
    else {
      uVar4 = FUN_00aa0af4(param_2 & 0xffffffff);
      if ((uVar4 & 1) == 0) {
        if ((uVar1 < 0x300) || ((param_3 & 1) == 0)) {
          if (uVar1 < 0xad) goto LAB_00a960c4;
        }
        else {
          uVar4 = core::unicode::unicode_data::grapheme_extend::lookup_slow(param_2 & 0xffffffff);
          if ((uVar4 & 1) != 0) goto LAB_00a95f64;
        }
        uVar4 = core::unicode::unicode_data::default_ignorable_code_point::lookup_slow
                          (param_2 & 0xffffffff);
        if (((uVar4 & 1) == 0) &&
           (uVar4 = core::unicode::unicode_data::cf::lookup_slow(param_2 & 0xffffffff),
           (uVar4 & 1) == 0)) goto LAB_00a960c4;
      }
    }
  }
LAB_00a95f64:
  uStack_3a = 0;
  uStack_39 = (&DAT_002a0ca0)[(param_2 & 0xffffffff) >> 0x14];
  uStack_38 = (&DAT_002a0ca0)[param_2 >> 0x10 & 0xf];
  uStack_37 = (&DAT_002a0ca0)[param_2 >> 0xc & 0xf];
  local_3c = 0;
  uStack_36 = (&DAT_002a0ca0)[param_2 >> 8 & 0xf];
  uVar4 = (ulong)LZCOUNT(uVar1 | 1) >> 2;
  uStack_35 = (&DAT_002a0ca0)[param_2 >> 4 & 0xf];
  local_34._0_1_ = (&DAT_002a0ca0)[param_2 & 0xf];
  cVar2 = (char)uVar4 + -2;
  auStack_3e[uVar4] = 0x5c;
  auStack_3e[uVar4 + 1] = 0x75;
  *(undefined1 *)((long)&local_3c + uVar4) = 0x7b;
  local_34 = CONCAT11(0x7d,(undefined1)local_34);
  *(ulong *)param_1 =
       CONCAT17(uStack_35,
                CONCAT16(uStack_36,
                         CONCAT15(uStack_37,
                                  CONCAT14(uStack_38,
                                           CONCAT13(uStack_39,CONCAT12(uStack_3a,local_3c))))));
  uVar3 = 10;
  *(undefined2 *)(param_1 + 2) = local_34;
LAB_00a9600c:
  *(char *)(param_1 + 3) = cVar2;
  *(undefined1 *)((long)param_1 + 0xd) = uVar3;
  return;
}


// ===== 00a9617c  <core::num::imp::fmt::core::num::imp::fmt::Part>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::fmt::core::num::imp::fmt::Part>::len */

ulong __rustcall <core::num::imp::fmt::core::num::imp::fmt::Part>::len(short *param_1)

{
  ushort uVar1;
  uint uVar2;
  
  if (*param_1 == 0) {
    return *(ulong *)(param_1 + 4);
  }
  if (*param_1 == 1) {
    uVar1 = param_1[1];
    if (uVar1 != 0) {
      uVar2 = (uint)uVar1;
      return (ulong)(((uVar1 + 0x5fff6 & uVar2 + 0x7ff9c ^ uVar2 + 0xdfc18 & uVar2 + 0x7d8f0) >>
                     0x11) + 1);
    }
    return 1;
  }
  return *(ulong *)(param_1 + 8);
}


// ===== 00a961e4  <core::num::imp::fmt::core::num::imp::fmt::Part>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::fmt::core::num::imp::fmt::Part>::write */

undefined1  [16] __rustcall
<core::num::imp::fmt::core::num::imp::fmt::Part>::write(short *param_1,void *param_2,ulong param_3)

{
  short sVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  sVar1 = *param_1;
  if (sVar1 == 0) {
    uVar4 = *(ulong *)(param_1 + 4);
joined_r0x00a96254:
    if (param_3 < uVar4) {
LAB_00a96258:
      uVar3 = 0;
      goto LAB_00a9625c;
    }
  }
  else {
    if (sVar1 != 1) {
      uVar4 = *(ulong *)(param_1 + 8);
      goto joined_r0x00a96254;
    }
    uVar2 = param_1[1];
    if (uVar2 != 0) {
      uVar6 = (uint)uVar2;
      uVar4 = (ulong)(((uVar2 + 0x5fff6 & uVar6 + 0x7ff9c ^ uVar6 + 0xdfc18 & uVar6 + 0x7d8f0) >>
                      0x11) + 1);
      goto joined_r0x00a96254;
    }
    uVar4 = 1;
    if (param_3 == 0) goto LAB_00a96258;
  }
  if (sVar1 == 0) {
    uVar5 = *(ulong *)(param_1 + 4);
    if (param_3 < uVar5) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar5,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff6b8);
    }
    if (uVar5 != 0) {
      memset(param_2,0x30,uVar5);
      auVar8._8_8_ = uVar4;
      auVar8._0_8_ = 1;
      return auVar8;
    }
  }
  else if (sVar1 == 1) {
    if (uVar4 != 0) {
      uVar3 = 1;
      uVar5 = uVar4;
      uVar6 = (uint)(ushort)param_1[1];
      do {
        *(byte *)((long)param_2 + (uVar5 - 1)) = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
        uVar5 = uVar5 - 1;
        uVar6 = uVar6 / 10;
      } while (uVar5 != 0);
LAB_00a9625c:
      auVar7._8_8_ = uVar4;
      auVar7._0_8_ = uVar3;
      return auVar7;
    }
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    if (param_3 < uVar5) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar5,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff6d0);
    }
    memcpy(param_2,*(void **)(param_1 + 4),uVar5);
  }
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = 1;
  return auVar9;
}


// ===== 00a9636c  <core::num::imp::diy_float::core::num::imp::diy_float::Fp>::normalize_to =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::diy_float::core::num::imp::diy_float::Fp>::normalize_to */

undefined1  [16] __rustcall
<core::num::imp::diy_float::core::num::imp::diy_float::Fp>::normalize_to
          (ulong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  byte *pbVar1;
  long lVar2;
  undefined1 *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  long lVar10;
  ulong *puVar11;
  byte *pbVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined2 uStack_44;
  byte abStack_42 [2];
  undefined1 *puStack_40;
  code *pcStack_38;
  ulong local_28;
  undefined2 local_20;
  ulong local_18;
  
  local_20 = (undefined2)param_2;
  local_28 = param_1;
  if (((uint)(param_2 - param_3) >> 0xf & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_00390697,0x1d,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff6e8);
  }
  uVar17 = (ulong)(uint)(int)(short)(param_2 - param_3);
  uVar15 = param_1 << (uVar17 & 0x3f);
  local_18 = uVar15 >> (uVar17 & 0x3f);
  if (local_18 == param_1) {
    auVar23._8_4_ = param_3;
    auVar23._0_8_ = uVar15;
    auVar23._12_4_ = 0;
    return auVar23;
  }
  puVar13 = &local_28;
  puVar11 = (ulong *)core::panicking::assert_failed<u64,u64>
                               (0,&local_18,puVar13,0,param_5,
                                &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff700);
  pcStack_38 = <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::bit_length;
  auVar22._8_8_ = *puVar11;
  puStack_40 = &stack0xfffffffffffffff0;
  if (3 < auVar22._8_8_) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,auVar22._8_8_,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
  }
  if (auVar22._8_8_ == 0) {
LAB_00a96440:
    auVar9._8_8_ = 0;
    auVar9._0_8_ = auVar22._8_8_;
    return auVar9 << 0x40;
  }
  if (*(char *)((long)puVar11 + auVar22._8_8_ + 7) == '\0') {
    if (auVar22._8_8_ + 7 == 8) goto LAB_00a96440;
    if (*(char *)((long)puVar11 + auVar22._8_8_ + 6) == '\0') {
      if (auVar22._8_8_ + 6 == 8) goto LAB_00a96440;
      if (*(char *)((long)puVar11 + auVar22._8_8_ + 5) == '\0') {
        if (auVar22._8_8_ + 5 == 8) goto LAB_00a96440;
        uVar15 = auVar22._8_8_ | 0xfffffffffffffffc;
      }
      else {
        uVar15 = auVar22._8_8_ - 3;
      }
    }
    else {
      uVar15 = auVar22._8_8_ - 2;
    }
  }
  else {
    uVar15 = auVar22._8_8_ - 1;
  }
  bVar7 = *(byte *)((long)puVar11 + uVar15 + 8);
  if (bVar7 != 0) {
    auVar22._0_8_ = (ulong)((uint)LZCOUNT((uint)bVar7 << 0x18) ^ 7) + uVar15 * 8 + 1;
    return auVar22;
  }
  auVar23 = core::num::imp::int_log10::panic_for_nonpositive_argument
                      (&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
  pbVar12 = auVar23._8_8_;
  auVar24._0_8_ = auVar23._0_8_;
  puVar11 = (ulong *)*auVar24._0_8_;
  abStack_42[0] = 0;
  uStack_44 = 0;
  if (puVar11 < puVar13) {
    if (puVar11 < &DAT_00000004) {
      puVar18 = auVar24._0_8_ + 1;
      pbVar1 = (byte *)((long)puVar18 + (long)puVar11);
      puVar19 = (undefined1 *)0x0;
      lVar20 = 0;
      while( true ) {
        lVar21 = 0;
        do {
          if ((byte *)((long)puVar18 + lVar21) == pbVar1) goto LAB_00a9671c;
          bVar7 = *(byte *)((long)puVar18 + lVar21);
          lVar21 = lVar21 + 1;
        } while (bVar7 == 0);
        lVar2 = lVar20 + lVar21;
        uVar15 = lVar2 - 1;
        if (2 < uVar15) break;
        lVar10 = lVar21 + lVar20 + -0x44;
        uVar8 = (uint)abStack_42[lVar10 + 0x41] + (uint)*pbVar12 * (uint)bVar7;
        uVar14 = uVar8 >> 8 & 0xff;
        abStack_42[lVar10 + 0x41] = (byte)uVar8;
        if (puVar13 != (ulong *)&DAT_00000001) {
          if (lVar2 == 3) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (lVar20 + lVar21,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
          }
          uVar8 = uVar14 + abStack_42[lVar21 + lVar20 + -0x44 + 0x42] +
                  (uint)pbVar12[1] * (uint)bVar7;
          abStack_42[lVar21 + lVar20 + -0x44 + 0x42] = (byte)uVar8;
          uVar14 = uVar8 >> 8 & 0xff;
          if (puVar13 != (ulong *)0x2) {
            if (uVar15 != 0) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (lVar20 + lVar21 + 1,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
            }
            lVar10 = lVar21 + lVar20 + -0x44;
            uVar8 = uVar14 + abStack_42[lVar10 + 0x43] + (uint)pbVar12[2] * (uint)bVar7;
            abStack_42[lVar10 + 0x43] = (byte)uVar8;
            if (puVar13 != (ulong *)0x3) {
              uVar15 = 3;
              break;
            }
            uVar14 = uVar8 >> 8 & 0xff;
          }
        }
        puVar11 = puVar13;
        if (uVar14 != 0) {
          if ((undefined1 *)0x2 < (undefined1 *)((long)puVar13 + lVar21 + lVar20 + -1)) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      ((undefined1 *)((long)puVar13 + lVar21 + lVar20 + -1),3,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
          }
          *(byte *)((long)puVar13 + (long)(abStack_42 + lVar21 + lVar20 + -3)) = (byte)uVar14;
          puVar11 = (ulong *)((long)puVar13 + 1);
        }
        puVar18 = (undefined8 *)((long)puVar18 + lVar21);
        puVar16 = (undefined1 *)((long)puVar11 + lVar21 + lVar20 + -1);
        lVar20 = lVar2;
        if (puVar19 <= puVar16) {
          puVar19 = puVar16;
        }
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(uVar15,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718)
      ;
    }
  }
  else if (puVar11 < &DAT_00000004) {
    pbVar1 = pbVar12 + (long)puVar13;
    if (puVar11 == (ulong *)0x0) {
      puVar16 = (undefined1 *)0x0;
      puVar19 = (undefined1 *)0x0;
      while (pbVar12 != pbVar1) {
        puVar3 = puVar19;
        if (puVar19 <= puVar16) {
          puVar3 = puVar16;
        }
        if (*pbVar12 == 0) {
          puVar3 = puVar19;
        }
        puVar16 = puVar16 + 1;
        puVar19 = puVar3;
        pbVar12 = pbVar12 + 1;
      }
LAB_00a9671c:
      *(undefined2 *)(auVar24._0_8_ + 1) = uStack_44;
      *(byte *)((long)auVar24._0_8_ + 10) = abStack_42[0];
      *auVar24._0_8_ = puVar19;
      auVar24._8_8_ = pbVar12;
      return auVar24;
    }
    bVar7 = *(byte *)(auVar24._0_8_ + 1);
    bVar4 = *(byte *)((long)auVar24._0_8_ + 9);
    bVar5 = *(byte *)((long)auVar24._0_8_ + 10);
    puVar19 = (undefined1 *)0x0;
    lVar20 = 0;
    while( true ) {
      lVar21 = 0;
      do {
        if (pbVar12 + lVar21 == pbVar1) goto LAB_00a9671c;
        bVar6 = pbVar12[lVar21];
        lVar21 = lVar21 + 1;
      } while (bVar6 == 0);
      lVar2 = lVar20 + lVar21;
      uVar15 = lVar2 - 1;
      if (2 < uVar15) break;
      lVar10 = lVar21 + lVar20 + -0x44;
      uVar8 = (uint)abStack_42[lVar10 + 0x41] + (uint)bVar7 * (uint)bVar6;
      uVar14 = uVar8 >> 8 & 0xff;
      abStack_42[lVar10 + 0x41] = (byte)uVar8;
      if (puVar11 != (ulong *)&DAT_00000001) {
        if (lVar2 == 3) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (lVar20 + lVar21,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
        }
        uVar8 = uVar14 + abStack_42[lVar21 + lVar20 + -0x44 + 0x42] + (uint)bVar4 * (uint)bVar6;
        abStack_42[lVar21 + lVar20 + -0x44 + 0x42] = (byte)uVar8;
        uVar14 = uVar8 >> 8 & 0xff;
        if (puVar11 != (ulong *)0x2) {
          if (uVar15 != 0) {
            uVar15 = lVar20 + lVar21 + 1;
            break;
          }
          lVar10 = lVar21 + lVar20 + -0x44;
          uVar8 = uVar14 + abStack_42[lVar10 + 0x43] + (uint)bVar5 * (uint)bVar6;
          uVar14 = uVar8 >> 8 & 0xff;
          abStack_42[lVar10 + 0x43] = (byte)uVar8;
        }
      }
      puVar13 = puVar11;
      if (uVar14 != 0) {
        if ((undefined1 *)0x2 < (undefined1 *)((long)puVar11 + lVar21 + lVar20 + -1)) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    ((undefined1 *)((long)puVar11 + lVar21 + lVar20 + -1),3,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
        }
        *(byte *)((long)puVar11 + (long)(abStack_42 + lVar21 + lVar20 + -3)) = (byte)uVar14;
        puVar13 = (ulong *)((long)puVar11 + 1);
      }
      pbVar12 = pbVar12 + lVar21;
      puVar16 = (undefined1 *)((long)puVar13 + lVar21 + lVar20 + -1);
      lVar20 = lVar2;
      if (puVar19 <= puVar16) {
        puVar19 = puVar16;
      }
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar15,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,puVar11,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718)
  ;
}


// ===== 00a963e8  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::bit_length =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::bit_length */

ulong * __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::bit_length
          (ulong *param_1,undefined8 param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined2 uStack_14;
  byte abStack_12 [2];
  
  uVar10 = *param_1;
  if (3 < uVar10) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar10,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
  }
  if (uVar10 == 0) {
    return (ulong *)0x0;
  }
  if (*(char *)((long)param_1 + uVar10 + 7) == '\0') {
    if (uVar10 + 7 == 8) {
      return (ulong *)0x0;
    }
    if (*(char *)((long)param_1 + uVar10 + 6) == '\0') {
      if (uVar10 + 6 == 8) {
        return (ulong *)0x0;
      }
      if (*(char *)((long)param_1 + uVar10 + 5) == '\0') {
        if (uVar10 + 5 == 8) {
          return (ulong *)0x0;
        }
        uVar10 = uVar10 | 0xfffffffffffffffc;
      }
      else {
        uVar10 = uVar10 - 3;
      }
    }
    else {
      uVar10 = uVar10 - 2;
    }
  }
  else {
    uVar10 = uVar10 - 1;
  }
  bVar5 = *(byte *)((long)param_1 + uVar10 + 8);
  if (bVar5 != 0) {
    return (ulong *)((ulong)((uint)LZCOUNT((uint)bVar5 << 0x18) ^ 7) + uVar10 * 8 + 1);
  }
  auVar18 = core::num::imp::int_log10::panic_for_nonpositive_argument
                      (&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
  pbVar11 = auVar18._8_8_;
  puVar9 = auVar18._0_8_;
  uVar10 = *puVar9;
  abStack_12[0] = 0;
  uStack_14 = 0;
  if (uVar10 < param_3) {
    if (uVar10 < 4) {
      puVar13 = puVar9 + 1;
      pbVar1 = (byte *)((long)puVar13 + uVar10);
      uVar15 = 0;
      lVar16 = 0;
      while( true ) {
        lVar17 = 0;
        do {
          if ((byte *)((long)puVar13 + lVar17) == pbVar1) goto LAB_00a9671c;
          bVar5 = *(byte *)((long)puVar13 + lVar17);
          lVar17 = lVar17 + 1;
        } while (bVar5 == 0);
        lVar2 = lVar16 + lVar17;
        uVar10 = lVar2 - 1;
        if (2 < uVar10) break;
        lVar7 = lVar17 + lVar16 + -0x14;
        uVar6 = (uint)abStack_12[lVar7 + 0x11] + (uint)*pbVar11 * (uint)bVar5;
        uVar12 = uVar6 >> 8 & 0xff;
        abStack_12[lVar7 + 0x11] = (byte)uVar6;
        if (param_3 != 1) {
          if (lVar2 == 3) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (lVar16 + lVar17,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
          }
          uVar6 = uVar12 + abStack_12[lVar17 + lVar16 + -0x14 + 0x12] +
                  (uint)pbVar11[1] * (uint)bVar5;
          abStack_12[lVar17 + lVar16 + -0x14 + 0x12] = (byte)uVar6;
          uVar12 = uVar6 >> 8 & 0xff;
          if (param_3 != 2) {
            if (uVar10 != 0) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (lVar16 + lVar17 + 1,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
            }
            lVar7 = lVar17 + lVar16 + -0x14;
            uVar6 = uVar12 + abStack_12[lVar7 + 0x13] + (uint)pbVar11[2] * (uint)bVar5;
            abStack_12[lVar7 + 0x13] = (byte)uVar6;
            if (param_3 != 3) {
              uVar10 = 3;
              break;
            }
            uVar12 = uVar6 >> 8 & 0xff;
          }
        }
        uVar10 = param_3;
        if (uVar12 != 0) {
          if (2 < (param_3 - 1) + lVar16 + lVar17) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (param_3 + lVar16 + lVar17 + -1,3,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
          }
          abStack_12[lVar17 + lVar16 + param_3 + -3] = (byte)uVar12;
          uVar10 = param_3 + 1;
        }
        puVar13 = (ulong *)((long)puVar13 + lVar17);
        uVar10 = (lVar16 + uVar10 + lVar17) - 1;
        lVar16 = lVar2;
        if (uVar15 <= uVar10) {
          uVar15 = uVar10;
        }
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(uVar10,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718)
      ;
    }
  }
  else if (uVar10 < 4) {
    pbVar1 = pbVar11 + param_3;
    if (uVar10 == 0) {
      uVar10 = 0;
      uVar15 = 0;
      while (pbVar11 != pbVar1) {
        uVar8 = uVar15;
        if (uVar15 <= uVar10) {
          uVar8 = uVar10;
        }
        if (*pbVar11 == 0) {
          uVar8 = uVar15;
        }
        uVar10 = uVar10 + 1;
        uVar15 = uVar8;
        pbVar11 = pbVar11 + 1;
      }
LAB_00a9671c:
      *(undefined2 *)(puVar9 + 1) = uStack_14;
      *(byte *)((long)puVar9 + 10) = abStack_12[0];
      *puVar9 = uVar15;
      return puVar9;
    }
    uVar8 = puVar9[1];
    bVar5 = *(byte *)((long)puVar9 + 9);
    bVar3 = *(byte *)((long)puVar9 + 10);
    uVar15 = 0;
    lVar16 = 0;
    while( true ) {
      lVar17 = 0;
      do {
        if (pbVar11 + lVar17 == pbVar1) goto LAB_00a9671c;
        bVar4 = pbVar11[lVar17];
        lVar17 = lVar17 + 1;
      } while (bVar4 == 0);
      lVar2 = lVar16 + lVar17;
      uVar14 = lVar2 - 1;
      if (2 < uVar14) break;
      lVar7 = lVar17 + lVar16 + -0x14;
      uVar6 = (uint)abStack_12[lVar7 + 0x11] + (uint)(byte)uVar8 * (uint)bVar4;
      uVar12 = uVar6 >> 8 & 0xff;
      abStack_12[lVar7 + 0x11] = (byte)uVar6;
      if (uVar10 != 1) {
        if (lVar2 == 3) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (lVar16 + lVar17,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
        }
        uVar6 = uVar12 + abStack_12[lVar17 + lVar16 + -0x14 + 0x12] + (uint)bVar5 * (uint)bVar4;
        abStack_12[lVar17 + lVar16 + -0x14 + 0x12] = (byte)uVar6;
        uVar12 = uVar6 >> 8 & 0xff;
        if (uVar10 != 2) {
          if (uVar14 != 0) {
            uVar14 = lVar16 + lVar17 + 1;
            break;
          }
          lVar7 = lVar17 + lVar16 + -0x14;
          uVar6 = uVar12 + abStack_12[lVar7 + 0x13] + (uint)bVar3 * (uint)bVar4;
          uVar12 = uVar6 >> 8 & 0xff;
          abStack_12[lVar7 + 0x13] = (byte)uVar6;
        }
      }
      uVar14 = uVar10;
      if (uVar12 != 0) {
        if (2 < (uVar10 - 1) + lVar16 + lVar17) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar10 + lVar16 + lVar17 + -1,3,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
        }
        abStack_12[lVar17 + lVar16 + uVar10 + -3] = (byte)uVar12;
        uVar14 = uVar10 + 1;
      }
      pbVar11 = pbVar11 + lVar17;
      uVar14 = (lVar16 + uVar14 + lVar17) - 1;
      lVar16 = lVar2;
      if (uVar15 <= uVar14) {
        uVar15 = uVar14;
      }
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar14,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar10,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
}


// ===== 00a964ac  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_digits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_digits */

void __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_digits
          (ulong *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined2 local_4;
  byte local_2 [2];
  
  uVar11 = *param_1;
  local_2[0] = 0;
  local_4 = 0;
  if (uVar11 < param_3) {
    if (uVar11 < 4) {
      puVar12 = param_1 + 1;
      pbVar1 = (byte *)((long)puVar12 + uVar11);
      uVar14 = 0;
      lVar15 = 0;
      while( true ) {
        lVar16 = 0;
        do {
          if ((byte *)((long)puVar12 + lVar16) == pbVar1) goto LAB_00a9671c;
          bVar3 = *(byte *)((long)puVar12 + lVar16);
          lVar16 = lVar16 + 1;
        } while (bVar3 == 0);
        lVar2 = lVar15 + lVar16;
        uVar11 = lVar2 - 1;
        if (2 < uVar11) break;
        lVar7 = lVar16 + lVar15 + -4;
        uVar6 = (uint)local_2[lVar7 + 1] + (uint)*param_2 * (uint)bVar3;
        uVar10 = uVar6 >> 8 & 0xff;
        local_2[lVar7 + 1] = (byte)uVar6;
        if (param_3 != 1) {
          if (lVar2 == 3) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (lVar15 + lVar16,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
          }
          uVar6 = uVar10 + local_2[lVar16 + lVar15 + -4 + 2] + (uint)param_2[1] * (uint)bVar3;
          local_2[lVar16 + lVar15 + -4 + 2] = (byte)uVar6;
          uVar10 = uVar6 >> 8 & 0xff;
          if (param_3 != 2) {
            if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (lVar15 + lVar16 + 1,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
            }
            lVar7 = lVar16 + lVar15 + -4;
            uVar6 = uVar10 + local_2[lVar7 + 3] + (uint)param_2[2] * (uint)bVar3;
            local_2[lVar7 + 3] = (byte)uVar6;
            if (param_3 != 3) {
              uVar11 = 3;
              break;
            }
            uVar10 = uVar6 >> 8 & 0xff;
          }
        }
        uVar11 = param_3;
        if (uVar10 != 0) {
          if (2 < (param_3 - 1) + lVar15 + lVar16) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (param_3 + lVar15 + lVar16 + -1,3,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
          }
          local_2[lVar16 + lVar15 + param_3 + -3] = (byte)uVar10;
          uVar11 = param_3 + 1;
        }
        puVar12 = (ulong *)((long)puVar12 + lVar16);
        uVar11 = (lVar15 + uVar11 + lVar16) - 1;
        lVar15 = lVar2;
        if (uVar14 <= uVar11) {
          uVar14 = uVar11;
        }
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(uVar11,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718)
      ;
    }
  }
  else if (uVar11 < 4) {
    pbVar1 = param_2 + param_3;
    if (uVar11 == 0) {
      uVar14 = 0;
      uVar11 = 0;
      if (param_2 != pbVar1) {
        do {
          pbVar9 = param_2 + 1;
          uVar8 = uVar14;
          if (uVar14 <= uVar11) {
            uVar8 = uVar11;
          }
          if (*param_2 == 0) {
            uVar8 = uVar14;
          }
          uVar14 = uVar8;
          uVar11 = uVar11 + 1;
          param_2 = pbVar9;
        } while (pbVar9 != pbVar1);
      }
LAB_00a9671c:
      *(undefined2 *)(param_1 + 1) = local_4;
      *(byte *)((long)param_1 + 10) = local_2[0];
      *param_1 = uVar14;
      return;
    }
    uVar8 = param_1[1];
    bVar3 = *(byte *)((long)param_1 + 9);
    bVar4 = *(byte *)((long)param_1 + 10);
    uVar14 = 0;
    lVar15 = 0;
    while( true ) {
      lVar16 = 0;
      do {
        if (param_2 + lVar16 == pbVar1) goto LAB_00a9671c;
        bVar5 = param_2[lVar16];
        lVar16 = lVar16 + 1;
      } while (bVar5 == 0);
      lVar2 = lVar15 + lVar16;
      uVar13 = lVar2 - 1;
      if (2 < uVar13) break;
      lVar7 = lVar16 + lVar15 + -4;
      uVar6 = (uint)local_2[lVar7 + 1] + (uint)(byte)uVar8 * (uint)bVar5;
      uVar10 = uVar6 >> 8 & 0xff;
      local_2[lVar7 + 1] = (byte)uVar6;
      if (uVar11 != 1) {
        if (lVar2 == 3) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (lVar15 + lVar16,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
        }
        uVar6 = uVar10 + local_2[lVar16 + lVar15 + -4 + 2] + (uint)bVar3 * (uint)bVar5;
        local_2[lVar16 + lVar15 + -4 + 2] = (byte)uVar6;
        uVar10 = uVar6 >> 8 & 0xff;
        if (uVar11 != 2) {
          if (uVar13 != 0) {
            uVar13 = lVar15 + lVar16 + 1;
            break;
          }
          lVar7 = lVar16 + lVar15 + -4;
          uVar6 = uVar10 + local_2[lVar7 + 3] + (uint)bVar4 * (uint)bVar5;
          uVar10 = uVar6 >> 8 & 0xff;
          local_2[lVar7 + 3] = (byte)uVar6;
        }
      }
      uVar13 = uVar11;
      if (uVar10 != 0) {
        if (2 < (uVar11 - 1) + lVar15 + lVar16) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar11 + lVar15 + lVar16 + -1,3,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
        }
        local_2[lVar16 + lVar15 + uVar11 + -3] = (byte)uVar10;
        uVar13 = uVar11 + 1;
      }
      param_2 = param_2 + lVar16;
      uVar13 = (lVar15 + uVar13 + lVar16) - 1;
      lVar15 = lVar2;
      if (uVar14 <= uVar13) {
        uVar14 = uVar13;
      }
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar13,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar11,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
}


// ===== 00a9680c  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::div_rem_small =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::div_rem_small */

void __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::div_rem_small
          (ulong *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  if ((param_2 & 0xff) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_003906b4,0x1b,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
  }
  uVar8 = *param_1;
  if (uVar8 < 4) {
    if (uVar8 != 0) {
      lVar1 = uVar8 + 7;
      uVar2 = param_2 & 0xff;
      bVar3 = *(byte *)((long)param_1 + lVar1);
      uVar6 = 0;
      if ((param_2 & 0xff) != 0) {
        uVar6 = bVar3 / uVar2;
      }
      *(char *)((long)param_1 + lVar1) = (char)uVar6;
      if (lVar1 != 8) {
        lVar1 = uVar8 + 6;
        bVar4 = *(byte *)((long)param_1 + lVar1);
        uVar6 = ((uint)bVar3 - uVar6 * param_2) * 0x100;
        uVar7 = 0;
        if ((param_2 & 0xff) != 0) {
          uVar7 = ((uint)bVar4 | uVar6 & 0xffff) / uVar2;
        }
        *(char *)((long)param_1 + lVar1) = (char)uVar7;
        if (lVar1 != 8) {
          uVar5 = 0;
          if ((param_2 & 0xff) != 0) {
            uVar5 = (undefined1)
                    (((uint)*(byte *)((long)param_1 + uVar8 + 5) |
                     ((bVar4 | uVar6) - uVar7 * uVar2) * 0x100 & 0xffff) / uVar2);
          }
          *(undefined1 *)((long)param_1 + uVar8 + 5) = uVar5;
        }
      }
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar8,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
}


// ===== 00a968d8  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::add =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::add */

void __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::add
          (ulong *param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  
  uVar4 = *param_2;
  if (*param_2 <= *param_1) {
    uVar4 = *param_1;
  }
  if (uVar4 < 4) {
    if (uVar4 != 0) {
      uVar6 = 0;
      puVar5 = param_2 + 1;
      puVar7 = param_1 + 1;
      uVar8 = uVar4;
      do {
        uVar1 = (uint)(byte)*puVar5 + (uint)(byte)*puVar7;
        uVar3 = uVar1 & 0xff;
        uVar2 = uVar3 + uVar6;
        uVar6 = uVar2 >> 8;
        *(char *)puVar7 = (char)uVar2;
        if (uVar3 != uVar1) {
          uVar6 = 1;
        }
        uVar8 = uVar8 - 1;
        puVar5 = (ulong *)((long)puVar5 + 1);
        puVar7 = (ulong *)((long)puVar7 + 1);
      } while (uVar8 != 0);
      if (uVar6 != 0) {
        if (uVar4 == 3) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(3,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
        }
        *(undefined1 *)((long)(param_1 + 1) + uVar4) = 1;
        uVar4 = uVar4 + 1;
      }
    }
    *param_1 = uVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar4,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
}


// ===== 00a9698c  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::sub */

void __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::sub
          (ulong *param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar4 = *param_2;
  if (*param_2 <= *param_1) {
    uVar4 = *param_1;
  }
  if (3 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail(0,uVar4,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718)
    ;
  }
  if (uVar4 != 0) {
    uVar7 = 1;
    puVar5 = param_2 + 1;
    puVar6 = param_1 + 1;
    uVar8 = uVar4;
    do {
      uVar1 = (uint)(byte)*puVar6 + ((byte)*puVar5 ^ 0xff);
      uVar3 = uVar1 & 0xff;
      uVar2 = uVar3 + uVar7;
      uVar7 = uVar2 >> 8;
      *(char *)puVar6 = (char)uVar2;
      if (uVar3 != uVar1) {
        uVar7 = 1;
      }
      uVar8 = uVar8 - 1;
      puVar5 = (ulong *)((long)puVar5 + 1);
      puVar6 = (ulong *)((long)puVar6 + 1);
    } while (uVar8 != 0);
    if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_003906cf,0x1a,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
    }
  }
  *param_1 = uVar4;
  return;
}


// ===== 00a96a34  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::digits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::digits */

ulong * __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::digits(ulong *param_1)

{
  if (*param_1 < 4) {
    return param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,*param_1,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
}


// ===== 00a96a60  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::is_zero =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::is_zero */

byte __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::is_zero(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail(0,uVar1,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718)
    ;
  }
  if (uVar1 == 0) {
    return 1;
  }
  if ((char)param_1[1] == '\0') {
    if (uVar1 == 1) {
      return 1;
    }
    if (*(char *)((long)param_1 + 9) == '\0') {
      if (uVar1 == 2) {
        return 1;
      }
      if (*(char *)((long)param_1 + 10) == '\0') {
        return -(uVar1 == 3) & 1;
      }
    }
  }
  return 0;
}


// ===== 00a96ad8  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_pow2 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_pow2 */

ulong * __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_pow2
          (ulong *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  ulong __n;
  undefined1 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  if (0x17 < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_003906e9,0x1c,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
  }
  uVar13 = *param_1;
  __n = param_2 >> 3;
  if (uVar13 != 0) {
    uVar4 = uVar13 - 1;
    do {
      if (3 < uVar13) goto code_r0x00a96d10;
      uVar3 = __n + uVar4;
      if (2 < uVar3) goto code_r0x00a96cfc;
      uVar3 = uVar4 - 1;
      *(undefined1 *)((long)param_1 + uVar4 + __n + 8) = *(undefined1 *)((long)param_1 + uVar4 + 8);
      uVar4 = uVar3;
    } while (uVar3 != 0xffffffffffffffff);
  }
  param_2 = param_2 & 7;
  if (__n != 0) {
    memset(param_1 + 1,0,__n);
  }
  uVar4 = uVar13 + __n;
  if (param_2 == 0) {
    *param_1 = uVar4;
    return param_1;
  }
  uVar3 = uVar4 - 1;
  if (2 < uVar3) {
code_r0x00a96cfc:
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar3,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
  }
  uVar1 = 8 - (int)param_2;
  bVar2 = *(byte *)((long)param_1 + uVar4 + 7) >> (ulong)(uVar1 & 0x1f);
  uVar3 = uVar13 + __n;
  if (bVar2 != 0) {
    if (2 < uVar4) {
code_r0x00a96d10:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(uVar4,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
    }
    *(byte *)((long)param_1 + uVar4 + 8) = bVar2;
    uVar3 = uVar4 + 1;
  }
  if (uVar4 <= __n + 1) goto LAB_00a96cb4;
  uVar6 = uVar13 - 1;
  if (7 < uVar6) {
    uVar12 = (undefined1)param_2;
    uVar5 = (undefined1)uVar1;
    if (uVar6 < 0x20) {
      uVar7 = 0;
    }
    else {
      auVar15[1] = uVar5;
      auVar15[0] = uVar5;
      auVar15[2] = uVar5;
      auVar15[3] = uVar5;
      auVar15[4] = uVar5;
      auVar15[5] = uVar5;
      auVar15[6] = uVar5;
      auVar15[7] = uVar5;
      auVar15[8] = uVar5;
      auVar15[9] = uVar5;
      auVar15[10] = uVar5;
      auVar15[0xb] = uVar5;
      auVar15[0xc] = uVar5;
      auVar15[0xd] = uVar5;
      auVar15[0xe] = uVar5;
      auVar15[0xf] = uVar5;
      uVar7 = uVar6 & 0xffffffffffffffe0;
      pauVar10 = (undefined1 (*) [16])((long)param_1 + uVar13 + __n + -9);
      uVar9 = uVar6 & 0xffffffffffffffe0;
      auVar15 = NEON_neg(auVar15,1);
      do {
        uVar9 = uVar9 - 0x20;
        auVar19 = NEON_ushl(*pauVar10,auVar15,1);
        auVar17[1] = uVar12;
        auVar17[0] = uVar12;
        auVar17[2] = uVar12;
        auVar17[3] = uVar12;
        auVar17[4] = uVar12;
        auVar17[5] = uVar12;
        auVar17[6] = uVar12;
        auVar17[7] = uVar12;
        auVar17[8] = uVar12;
        auVar17[9] = uVar12;
        auVar17[10] = uVar12;
        auVar17[0xb] = uVar12;
        auVar17[0xc] = uVar12;
        auVar17[0xd] = uVar12;
        auVar17[0xe] = uVar12;
        auVar17[0xf] = uVar12;
        auVar17 = NEON_ushl(*(undefined1 (*) [16])(*pauVar10 + 1),auVar17,1);
        auVar21 = NEON_ushl(pauVar10[-1],auVar15,1);
        auVar20[1] = uVar12;
        auVar20[0] = uVar12;
        auVar20[2] = uVar12;
        auVar20[3] = uVar12;
        auVar20[4] = uVar12;
        auVar20[5] = uVar12;
        auVar20[6] = uVar12;
        auVar20[7] = uVar12;
        auVar20[8] = uVar12;
        auVar20[9] = uVar12;
        auVar20[10] = uVar12;
        auVar20[0xb] = uVar12;
        auVar20[0xc] = uVar12;
        auVar20[0xd] = uVar12;
        auVar20[0xe] = uVar12;
        auVar20[0xf] = uVar12;
        auVar20 = NEON_ushl(*(undefined1 (*) [16])(pauVar10[-1] + 1),auVar20,1);
        pauVar10[1][1] = auVar19[8] | auVar17[8];
        pauVar10[1][2] = auVar19[9] | auVar17[9];
        pauVar10[1][3] = auVar19[10] | auVar17[10];
        pauVar10[1][4] = auVar19[0xb] | auVar17[0xb];
        pauVar10[1][5] = auVar19[0xc] | auVar17[0xc];
        pauVar10[1][6] = auVar19[0xd] | auVar17[0xd];
        pauVar10[1][7] = auVar19[0xe] | auVar17[0xe];
        pauVar10[1][8] = auVar19[0xf] | auVar17[0xf];
        (*pauVar10)[1] = auVar19[0] | auVar17[0];
        (*pauVar10)[2] = auVar19[1] | auVar17[1];
        (*pauVar10)[3] = auVar19[2] | auVar17[2];
        (*pauVar10)[4] = auVar19[3] | auVar17[3];
        (*pauVar10)[5] = auVar19[4] | auVar17[4];
        (*pauVar10)[6] = auVar19[5] | auVar17[5];
        (*pauVar10)[7] = auVar19[6] | auVar17[6];
        (*pauVar10)[8] = auVar19[7] | auVar17[7];
        (*pauVar10)[1] = auVar21[8] | auVar20[8];
        (*pauVar10)[2] = auVar21[9] | auVar20[9];
        (*pauVar10)[3] = auVar21[10] | auVar20[10];
        (*pauVar10)[4] = auVar21[0xb] | auVar20[0xb];
        (*pauVar10)[5] = auVar21[0xc] | auVar20[0xc];
        (*pauVar10)[6] = auVar21[0xd] | auVar20[0xd];
        (*pauVar10)[7] = auVar21[0xe] | auVar20[0xe];
        (*pauVar10)[8] = auVar21[0xf] | auVar20[0xf];
        pauVar10[-1][1] = auVar21[0] | auVar20[0];
        pauVar10[-1][2] = auVar21[1] | auVar20[1];
        pauVar10[-1][3] = auVar21[2] | auVar20[2];
        pauVar10[-1][4] = auVar21[3] | auVar20[3];
        pauVar10[-1][5] = auVar21[4] | auVar20[4];
        pauVar10[-1][6] = auVar21[5] | auVar20[5];
        pauVar10[-1][7] = auVar21[6] | auVar20[6];
        pauVar10[-1][8] = auVar21[7] | auVar20[7];
        pauVar10 = pauVar10 + -2;
      } while (uVar9 != 0);
      if (uVar6 == uVar7) goto LAB_00a96cb4;
      if ((uVar6 & 0x18) == 0) {
        uVar4 = uVar4 - uVar7;
        goto LAB_00a96c8c;
      }
    }
    uVar9 = uVar6 & 0xfffffffffffffff8;
    lVar8 = uVar7 - uVar9;
    uVar14 = NEON_neg(CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(uVar5,
                                                  CONCAT12(uVar5,CONCAT11(uVar5,uVar5))))))),1);
    puVar11 = (undefined8 *)((long)param_1 + ((uVar13 + __n) - uVar7));
    do {
      lVar8 = lVar8 + 8;
      uVar18 = NEON_ushl(*(undefined8 *)((long)puVar11 + -1),uVar14,1);
      uVar16 = NEON_ushl(*puVar11,CONCAT17(uVar12,CONCAT16(uVar12,CONCAT15(uVar12,CONCAT14(uVar12,
                                                  CONCAT13(uVar12,CONCAT12(uVar12,CONCAT11(uVar12,
                                                  uVar12))))))),1);
      *puVar11 = CONCAT17((byte)((ulong)uVar18 >> 0x38) | (byte)((ulong)uVar16 >> 0x38),
                          CONCAT16((byte)((ulong)uVar18 >> 0x30) | (byte)((ulong)uVar16 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar18 >> 0x28) |
                                            (byte)((ulong)uVar16 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar18 >> 0x20) |
                                                     (byte)((ulong)uVar16 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar18 >> 0x18) |
                                                              (byte)((ulong)uVar16 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar18 >> 0x10)
                                                                       | (byte)((ulong)uVar16 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar18
                                                                                      >> 8) |
                                                                                (byte)((ulong)uVar16
                                                                                      >> 8),
                                                                                (byte)uVar18 |
                                                                                (byte)uVar16)))))));
      puVar11 = puVar11 + -1;
    } while (lVar8 != 0);
    uVar4 = uVar4 - uVar9;
    if (uVar6 == uVar9) goto LAB_00a96cb4;
  }
LAB_00a96c8c:
  do {
    uVar13 = uVar4 - 1;
    *(byte *)((long)param_1 + uVar4 + 7) =
         *(byte *)((long)param_1 + uVar4 + 6) >> (ulong)(uVar1 & 0x1f) |
         *(char *)((long)param_1 + uVar4 + 7) << param_2;
    uVar4 = uVar13;
  } while (__n + 1 < uVar13);
LAB_00a96cb4:
  *(char *)((long)param_1 + __n + 8) = *(char *)((long)param_1 + __n + 8) << param_2;
  *param_1 = uVar3;
  return param_1;
}


// ===== 00a96d1c  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_pow5 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_pow5 */

void __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_pow5
          (ulong *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if (2 < param_2) {
    puVar3 = param_1 + 1;
    uVar2 = *param_1;
    do {
      if (3 < uVar2) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar2,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
      }
      if (uVar2 != 0) {
        uVar1 = (uint)(byte)*puVar3 * 0x7d;
        uVar5 = uVar1 >> 8;
        *(byte *)puVar3 = (byte)uVar1;
        if (uVar2 != 1) {
          uVar1 = uVar5 + (uint)*(byte *)((long)param_1 + 9) * 0x7d;
          uVar5 = uVar1 >> 8;
          *(char *)((long)param_1 + 9) = (char)uVar1;
          if (uVar2 != 2) {
            uVar1 = uVar5 + (uint)*(byte *)((long)param_1 + 10) * 0x7d;
            uVar5 = uVar1 >> 8;
            *(char *)((long)param_1 + 10) = (char)uVar1;
          }
        }
        if (uVar5 != 0) {
          if (uVar2 == 3) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (3,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
          }
          *(byte *)((long)puVar3 + uVar2) = (byte)uVar5;
          uVar2 = uVar2 + 1;
        }
      }
      param_2 = param_2 - 3;
      *param_1 = uVar2;
    } while (2 < param_2);
  }
  if (param_2 == 0) {
    iVar4 = 1;
    uVar2 = *param_1;
  }
  else {
    auVar7._8_8_ = param_2 - 1;
    auVar7._0_8_ = param_2 - 1;
    auVar7 = NEON_cmhi(_DAT_0029fa70,auVar7,8);
    uVar6 = NEON_bsl(CONCAT44(auVar7._8_4_,auVar7._0_4_),0x100000001,0x500000005,1);
    iVar4 = (int)uVar6 * (int)((ulong)uVar6 >> 0x20);
    uVar2 = *param_1;
  }
  if (uVar2 < 4) {
    if (uVar2 != 0) {
      puVar3 = param_1 + 1;
      uVar1 = (uint)(byte)*puVar3 * iVar4;
      uVar5 = uVar1 >> 8;
      *(byte *)puVar3 = (byte)uVar1;
      if (uVar2 != 1) {
        uVar1 = uVar5 + (uint)*(byte *)((long)param_1 + 9) * iVar4;
        uVar5 = uVar1 >> 8;
        *(char *)((long)param_1 + 9) = (char)uVar1;
        if (uVar2 != 2) {
          uVar1 = uVar5 + (uint)*(byte *)((long)param_1 + 10) * iVar4;
          uVar5 = uVar1 >> 8;
          *(char *)((long)param_1 + 10) = (char)uVar1;
        }
      }
      if (uVar5 != 0) {
        if (uVar2 == 3) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(3,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
        }
        *(byte *)((long)puVar3 + uVar2) = (byte)uVar5;
        uVar2 = uVar2 + 1;
      }
    }
    *param_1 = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar2,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
}


// ===== 00a96eb8  <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_small =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_small */

void __rustcall
<core::num::imp::bignum::tests::core::num::imp::bignum::tests::Big8x3>::mul_small
          (ulong *param_1,uint param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  if (3 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail(0,uVar4,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718)
    ;
  }
  if (uVar4 != 0) {
    puVar1 = param_1 + 1;
    param_2 = param_2 & 0xff;
    uVar3 = (byte)*puVar1 * param_2;
    uVar2 = uVar3 >> 8;
    *(byte *)puVar1 = (byte)uVar3;
    uVar3 = uVar2;
    if (uVar4 != 1) {
      uVar2 = uVar2 + *(byte *)((long)param_1 + 9) * param_2;
      uVar3 = uVar2 >> 8;
      *(char *)((long)param_1 + 9) = (char)uVar2;
      if (uVar4 != 2) {
        uVar2 = uVar3 + *(byte *)((long)param_1 + 10) * param_2;
        uVar3 = uVar2 >> 8;
        *(char *)((long)param_1 + 10) = (char)uVar2;
      }
      uVar2 = uVar2 >> 8 & 0xff;
    }
    if (uVar3 != 0) {
      if (uVar4 != 3) {
        *(byte *)((long)puVar1 + uVar4) = (byte)uVar2;
        *param_1 = uVar4 + 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(3,3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff718);
    }
  }
  *param_1 = uVar4;
  return;
}


// ===== 00a96f88  FUN_00a96f88 =====

long FUN_00a96f88(ulong param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  long lVar19;
  undefined1 uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  
  if (param_1 == 0 && param_2 == 0) {
    lVar19 = param_4 - 1;
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(lVar19,0,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff730)
      ;
    }
    uVar20 = 0x30;
    goto LAB_00a97298;
  }
  if (param_2 != 0 || CARRY8(param_2 - 1,(ulong)(9999999999999999 < param_1))) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_1;
    uVar25 = SUB168(auVar8 * ZEXT816(0xd30baf9a1e626a6d),8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_2;
    uVar23 = SUB168(auVar9 * ZEXT816(0xd30baf9a1e626a6d),8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_1;
    uVar26 = SUB168(auVar10 * ZEXT816(0x39a5652fb1137856),8);
    if (CARRY8(param_2 * -0x2cf45065e19d9593,uVar25)) {
      uVar23 = uVar23 + 1;
    }
    bVar18 = CARRY8(param_1 * 0x39a5652fb1137856,param_2 * -0x2cf45065e19d9593 + uVar25);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_2;
    uVar25 = uVar23 + uVar26 + (ulong)bVar18;
    uVar23 = SUB168(auVar11 * ZEXT816(0x39a5652fb1137856),8) +
             (ulong)(CARRY8(uVar23,uVar26) || CARRY8(uVar23 + uVar26,(ulong)bVar18)) +
             (ulong)CARRY8(param_2 * 0x39a5652fb1137856,uVar25);
    if (param_4 < 0x24) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (0x23,param_4,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff518);
    }
    uVar25 = param_2 * 0x39a5652fb1137856 + uVar25 >> 0x33 | uVar23 * 0x2000;
    param_1 = param_1 + uVar25 * -10000000000000000;
    iVar24 = (int)(param_1 / 10000);
    uVar21 = (int)param_1 + iVar24 * -10000;
    uVar4 = (uVar21 >> 2 & 0x3fff) / 0x19;
    lVar19 = (ulong)uVar4 * 2;
    *(undefined *)(param_3 + 0x23) = (&DAT_00390ba7)[lVar19];
    if (param_4 == 0x24) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (0x24,0x24,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff530);
    }
    *(undefined *)(param_3 + 0x24) = (&DAT_00390ba8)[lVar19];
    if (param_4 < 0x26) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (0x25,0x25,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff548);
    }
    lVar19 = (ulong)(ushort)((short)uVar21 + (short)uVar4 * -100) * 2;
    *(undefined *)(param_3 + 0x25) = (&DAT_00390ba7)[lVar19];
    if (param_4 == 0x26) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (0x26,0x26,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff560);
    }
    *(undefined *)(param_3 + 0x26) = (&DAT_00390ba8)[lVar19];
    auVar12._8_8_ = 0;
    auVar12._0_8_ = param_1 / 100000000;
    iVar24 = iVar24 + ((uint)((param_1 / 10000) / 10000) & 0x7fffffff) * -10000;
    uVar5 = (int)(param_1 / 100000000) + SUB164(auVar12 * ZEXT816(0x68db8bac710cc),8) * -10000;
    uVar4 = (uint)(iVar24 * 0x147b) >> 0x13;
    uVar21 = (uVar5 >> 2 & 0x3fff) / 0x19;
    *(undefined2 *)(param_3 + 0x1f) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar4 * 2);
    uVar2 = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar21 * 2);
    *(undefined2 *)(param_3 + 0x21) =
         *(undefined2 *)(&DAT_00390ba7 + ((ulong)(iVar24 + uVar4 * -100) & 0xffff) * 2);
    *(undefined2 *)(param_3 + 0x1b) = uVar2;
    uVar26 = param_1 / 50000000000000 & 0x7fffe;
    *(undefined2 *)(param_3 + 0x1d) =
         *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar5 + uVar21 * -100) & 0xffff) * 2);
    if (9999999999999999 < param_1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar26,200,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff500);
    }
    uVar23 = uVar23 >> 0x33;
    *(undefined2 *)(param_3 + 0x17) = *(undefined2 *)(&DAT_00390ba7 + uVar26);
    *(undefined2 *)(param_3 + 0x19) =
         *(undefined2 *)
          (&DAT_00390ba7 +
          ((ulong)((int)(param_1 / 1000000000000) +
                  (((uint)(param_1 / 4000000000000) & 0x3fff) / 0x19) * -100) & 0xffff) * 2);
    if (uVar23 != 0 || CARRY8(uVar23 - 1,(ulong)(9999999999999999 < uVar25))) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar23;
      lVar19 = SUB168(auVar13 * ZEXT816(0xd30baf9a1e626a6d),8);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar25;
      uVar26 = SUB168(auVar14 * ZEXT816(0xd30baf9a1e626a6d),8);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar25;
      if (CARRY8(uVar23 * -0x2cf45065e19d9593,uVar26)) {
        lVar19 = lVar19 + 1;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar23;
      lVar22 = SUB168(auVar16 * ZEXT816(0x39a5652fb1137856),8);
      uVar26 = lVar19 + SUB168(auVar15 * ZEXT816(0x39a5652fb1137856),8) +
               (ulong)CARRY8(uVar25 * 0x39a5652fb1137856,uVar23 * -0x2cf45065e19d9593 + uVar26);
      if (CARRY8(uVar23 * 0x39a5652fb1137856,uVar26)) {
        lVar22 = lVar22 + 1;
      }
      param_1 = uVar23 * 0x39a5652fb1137856 + uVar26 >> 0x33 | lVar22 << 0xd;
      uVar25 = param_1 * -10000000000000000 + uVar25;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar25 / 100000000;
      iVar24 = (int)(uVar25 / 10000);
      uVar6 = (int)uVar25 + iVar24 * -10000;
      uVar7 = (int)(uVar25 / 100000000) + SUB164(auVar17 * ZEXT816(0x68db8bac710cc),8) * -10000;
      iVar24 = iVar24 + ((uint)((uVar25 / 10000) / 10000) & 0x7fffffff) * -10000;
      uVar4 = (uVar6 >> 2 & 0x3fff) / 0x19;
      uVar21 = (uint)(iVar24 * 0x147b) >> 0x13;
      uVar5 = (uVar7 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)(param_3 + 0x13) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar4 * 2);
      uVar2 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar6 + uVar4 * -100) & 0xffff) * 2);
      uVar3 = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar5 * 2);
      *(undefined2 *)(param_3 + 0xf) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar21 * 2);
      *(undefined2 *)(param_3 + 0x15) = uVar2;
      uVar2 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)(iVar24 + uVar21 * -100) & 0xffff) * 2);
      *(undefined2 *)(param_3 + 0xb) = uVar3;
      uVar3 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar7 + uVar5 * -100) & 0xffff) * 2);
      uVar23 = uVar25 / 50000000000000 & 0x7fffe;
      *(undefined2 *)(param_3 + 0x11) = uVar2;
      *(undefined2 *)(param_3 + 0xd) = uVar3;
      if (9999999999999999 < uVar25) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar23,200,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff500);
      }
      *(undefined2 *)(param_3 + 7) = *(undefined2 *)(&DAT_00390ba7 + uVar23);
      lVar19 = 7;
      *(undefined2 *)(param_3 + 9) =
           *(undefined2 *)
            (&DAT_00390ba7 +
            ((ulong)((int)(uVar25 / 1000000000000) +
                    (((uint)(uVar25 / 4000000000000) & 0x3fff) / 0x19) * -100) & 0xffff) * 2);
    }
    else {
      lVar19 = 0x17;
      param_1 = uVar25;
    }
    if (999 < param_1) goto LAB_00a971e8;
  }
  else {
    lVar19 = 0x27;
    if (999 < param_1) {
LAB_00a971e8:
      uVar23 = param_1;
      do {
        puVar1 = (undefined2 *)(param_3 + -2 + lVar19);
        lVar19 = lVar19 + -4;
        param_1 = uVar23 / 10000;
        uVar21 = (int)uVar23 + (int)param_1 * -10000;
        uVar4 = (uVar21 >> 2 & 0x3fff) / 0x19;
        puVar1[-1] = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar4 * 2);
        *puVar1 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar21 + uVar4 * -100) & 0xffff) * 2);
        bVar18 = 9999999 < uVar23;
        uVar23 = param_1;
      } while (bVar18);
    }
  }
  if (9 < param_1) {
    uVar21 = (uint)param_1;
    lVar19 = lVar19 + -2;
    uVar4 = (uVar21 >> 2 & 0x3fff) / 0x19;
    param_1 = (ulong)uVar4;
    *(undefined2 *)(param_3 + lVar19) =
         *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar21 + uVar4 * -100) & 0xffff) * 2);
  }
  if (param_1 == 0) {
    return lVar19;
  }
  lVar19 = lVar19 + -1;
  uVar20 = (&DAT_00390ba8)[param_1 * 2];
LAB_00a97298:
  *(undefined1 *)(param_3 + lVar19) = uVar20;
  return lVar19;
}


// ===== 00a97470  <core::fmt::num::[0]::u128>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::[0]::u128>::format_into */

undefined1  [16] __rustcall
<core::fmt::num::[0]::u128>::format_into(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_00a96f88();
  auVar2._8_8_ = 0x27 - lVar1;
  auVar2._0_8_ = param_3 + lVar1;
  return auVar2;
}


// ===== 00a974a0  <core::fmt::num::[0]::u128>::_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::[0]::u128>::_fmt */

undefined1  [16] __rustcall
<core::fmt::num::[0]::u128>::_fmt(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_00a96f88();
  auVar2._8_8_ = param_4 - lVar1;
  auVar2._0_8_ = param_3 + lVar1;
  return auVar2;
}


// ===== 00a974cc  <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom */

long __rustcall <core::io::error::repr::[0]::core::io::error::repr::Repr>::new_custom(long param_1)

{
  return param_1 + 1;
}


// ===== 00a974d4  <core::fmt::num::imp::[0]::u8>::_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[0]::u8>::_fmt */

undefined1  [16] __rustcall
<core::fmt::num::imp::[0]::u8>::_fmt(uint param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar3 = (ulong)param_1;
  lVar2 = param_3;
  if (9 < (param_1 & 0xff)) {
    uVar1 = (param_1 & 0xff) * 0x29 >> 0xc;
    uVar3 = (ulong)uVar1;
    lVar2 = param_3 + -2;
    *(undefined2 *)(param_2 + lVar2) =
         *(undefined2 *)(&DAT_00390ba7 + ((ulong)(param_1 + uVar1 * -100) & 0xff) * 2);
  }
  if (((param_1 & 0xff) != 0) && ((uVar3 & 0xff) == 0)) {
    auVar4._8_8_ = param_3 - lVar2;
    auVar4._0_8_ = param_2 + lVar2;
    return auVar4;
  }
  lVar2 = lVar2 + -1;
  *(undefined *)(param_2 + lVar2) = (&DAT_00390ba8)[(uVar3 & 0x7f) * 2];
  auVar5._8_8_ = param_3 - lVar2;
  auVar5._0_8_ = param_2 + lVar2;
  return auVar5;
}


// ===== 00a97558  <core::io::io_slice::[7]::core::io::io_slice::IoSlice>::as_slice =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::io::io_slice::[7]::core::io::io_slice::IoSlice>::as_slice */

void __rustcall <core::io::io_slice::[7]::core::io::io_slice::IoSlice>::as_slice(void)

{
  return;
}


// ===== 00a9755c  <core::fmt::num::[1]::i128>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::[1]::i128>::format_into */

undefined1  [16] __rustcall
<core::fmt::num::[1]::i128>::format_into(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar2 = (long)param_2 >> 0x3f;
  lVar1 = FUN_00a96f88((param_1 ^ uVar2) - uVar2,
                       (param_2 ^ uVar2) - (uVar2 + ((param_1 ^ uVar2) < uVar2)),param_3 + 1,0x27);
  if (-1 < (long)param_2) {
    auVar3._8_8_ = 0x28 - (lVar1 + 1);
    auVar3._0_8_ = param_3 + lVar1 + 1;
    return auVar3;
  }
  *(undefined1 *)(param_3 + lVar1) = 0x2d;
  auVar4._8_8_ = 0x28 - lVar1;
  auVar4._0_8_ = param_3 + lVar1;
  return auVar4;
}


// ===== 00a975d0  <core::net::parser::[1]::core::net::ip_addr::Ipv4Addr>::parse_ascii =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::parser::[1]::core::net::ip_addr::Ipv4Addr>::parse_ascii */

ulong __rustcall
<core::net::parser::[1]::core::net::ip_addr::Ipv4Addr>::parse_ascii
          (undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  long in_x10;
  undefined8 local_20;
  ulong local_18;
  
  if (0xf < param_2) {
    return in_x10 << 0x10 | 0x101;
  }
  local_20 = param_1;
  local_18 = param_2;
  uVar2 = FUN_00a956dc(&local_20);
  uVar1 = (uint)(local_18 == 0) & (uint)uVar2;
  if (uVar1 == 0) {
    uVar2 = 0x100;
  }
  return (uVar2 >> 0x10 & 0xffffff) << 0x10 | (uVar2 >> 8 & 0xff) << 8 | (ulong)(uVar1 ^ 1);
}


// ===== 00a97644  <core::fmt::num::imp::[1]::i8>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[1]::i8>::format_into */

undefined1  [16] __rustcall <core::fmt::num::imp::[1]::i8>::format_into(uint param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((param_1 >> 7 & 1) == 0) {
    uVar1 = param_1 & 0xff;
    if (uVar1 < 10) {
      lVar3 = 4;
      uVar4 = (ulong)param_1;
    }
    else {
      uVar4 = (ulong)(99 < uVar1);
      uVar2 = param_1 * 2;
      if (99 < uVar1) {
        uVar2 = param_1 * 2 + 0x38;
      }
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(&DAT_00390ba7 + ((ulong)uVar2 & 0xfe));
      lVar3 = 2;
    }
    if (((param_1 & 0xff) != 0) && ((uVar4 & 0xff) == 0)) {
      auVar5._8_8_ = 4 - lVar3;
      auVar5._0_8_ = param_2 + lVar3;
      return auVar5;
    }
    lVar3 = lVar3 + -1;
    *(undefined *)(param_2 + lVar3) = (&DAT_00390ba8)[(uVar4 & 0x7f) * 2];
    auVar6._8_8_ = 4 - lVar3;
    auVar6._0_8_ = param_2 + lVar3;
    return auVar6;
  }
  uVar2 = -param_1;
  uVar4 = (ulong)uVar2;
  uVar1 = uVar2 & 0xff;
  if (uVar1 < 10) {
    lVar3 = 3;
  }
  else {
    if (99 < uVar1) {
      uVar2 = -param_1 - 100;
    }
    lVar3 = 1;
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)(&DAT_00390ba7 + ((ulong)uVar2 & 0xff) * 2);
    uVar4 = 1;
    if (99 >= uVar1) goto LAB_00a97748;
  }
  *(undefined *)(param_2 + lVar3) = (&DAT_00390ba8)[(uVar4 & 0x7f) * 2];
  lVar3 = lVar3 + -1;
LAB_00a97748:
  *(undefined1 *)(param_2 + lVar3) = 0x2d;
  auVar7._8_8_ = 4 - lVar3;
  auVar7._0_8_ = param_2 + lVar3;
  return auVar7;
}


// ===== 00a97764  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive */

void __rustcall
<core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive
          (undefined8 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
LAB_00a97780:
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  puVar7 = (undefined8 *)*param_1;
  if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_00390587;
    uVar5 = 7;
  }
  else if (*(char *)((long)puVar7 + 0x12) < '\0') {
    uStack_38 = puVar7[1];
    local_40 = *puVar7;
    local_24[0] = 1;
    local_30 = local_24;
    iVar2 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                      (&local_40,&DAT_00390594,3);
    if (iVar2 != 0) goto LAB_00a97780;
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_00390597;
    uVar5 = 1;
  }
  else {
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_0039058e;
    uVar5 = 6;
  }
  uVar1 = (**(code **)(lVar6 + 0x18))(uVar3,puVar4,uVar5);
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// ===== 00a97830  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field */

undefined8 * __rustcall
<core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
          )

{
  undefined8 uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined1 local_34 [4];
  
  uVar4 = 1;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar6 = (undefined8 *)*param_1;
    bVar3 = *(byte *)((long)param_1 + 9);
    if (*(char *)((long)puVar6 + 0x12) < '\0') {
      if (((bVar3 & 1) != 0) ||
         (uVar5 = (**(code **)(puVar6[1] + 0x18))(*puVar6,&DAT_0039059f,3), (uVar5 & 1) == 0)) {
        uStack_78 = puVar6[1];
        local_80 = *puVar6;
        local_70 = local_34;
        uStack_58 = puVar6[2];
        local_34[0] = 1;
        local_60 = &DAT_00aff790;
        local_68 = (undefined1 *)&local_80;
        uVar5 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                          (&local_80,param_2,param_3);
        if (((uVar5 & 1) == 0) &&
           ((uVar5 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                               (&local_80,&DAT_0039059d,2), (uVar5 & 1) == 0 &&
            (uVar5 = (**(code **)(param_5 + 0x18))(param_4,&local_68), (uVar5 & 1) == 0)))) {
          uVar4 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
          goto LAB_00a97994;
        }
      }
    }
    else {
      uVar1 = 2;
      if (bVar3 == 0) {
        uVar1 = 3;
      }
      puVar2 = &DAT_0039059b;
      if (bVar3 == 0) {
        puVar2 = &UNK_00390598;
      }
      uVar5 = (**(code **)(puVar6[1] + 0x18))(*puVar6,puVar2,uVar1);
      if ((((uVar5 & 1) == 0) &&
          (uVar5 = (**(code **)(puVar6[1] + 0x18))(*puVar6,param_2,param_3), (uVar5 & 1) == 0)) &&
         (uVar5 = (**(code **)(puVar6[1] + 0x18))(*puVar6,&DAT_0039059d,2), (uVar5 & 1) == 0)) {
        uVar4 = (**(code **)(param_5 + 0x18))(param_4,puVar6);
        goto LAB_00a97994;
      }
    }
    uVar4 = 1;
  }
LAB_00a97994:
  *(undefined1 *)(param_1 + 1) = uVar4;
  *(undefined1 *)((long)param_1 + 9) = 1;
  return param_1;
}


// ===== 00a979d8  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish */

void __rustcall
<core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((*(byte *)((long)param_1 + 9) & 1) != 0) {
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      puVar5 = (undefined8 *)*param_1;
      if (*(char *)((long)puVar5 + 0x12) < '\0') {
        uVar2 = *puVar5;
        lVar6 = puVar5[1];
        puVar3 = &DAT_00390597;
        uVar4 = 1;
      }
      else {
        uVar2 = *puVar5;
        lVar6 = puVar5[1];
        puVar3 = &DAT_00390705;
        uVar4 = 2;
      }
      uVar1 = (**(code **)(lVar6 + 0x18))(uVar2,puVar3,uVar4);
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 1) = uVar1;
  }
  return;
}


// ===== 00a97a50  <core::fmt::num::imp::[2]::u8>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[2]::u8>::format_into */

undefined1  [16] __rustcall <core::fmt::num::imp::[2]::u8>::format_into(uint param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((param_1 & 0xff) < 10) {
    lVar2 = 3;
    uVar3 = (ulong)param_1;
  }
  else {
    uVar1 = (param_1 & 0xff) * 0x29 >> 0xc;
    uVar3 = (ulong)uVar1;
    *(undefined2 *)(param_2 + 1) =
         *(undefined2 *)(&DAT_00390ba7 + ((ulong)(param_1 + uVar1 * -100) & 0xff) * 2);
    lVar2 = 1;
  }
  if (((param_1 & 0xff) != 0) && ((uVar3 & 0xff) == 0)) {
    auVar4._8_8_ = 3 - lVar2;
    auVar4._0_8_ = param_2 + lVar2;
    return auVar4;
  }
  lVar2 = lVar2 + -1;
  *(undefined *)(param_2 + lVar2) = (&DAT_00390ba8)[(uVar3 & 0x7f) * 2];
  auVar5._8_8_ = 3 - lVar2;
  auVar5._0_8_ = param_2 + lVar2;
  return auVar5;
}


// ===== 00a97ae8  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::bit_length =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::bit_length */

undefined8 * __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::bit_length
          (long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  int *piVar17;
  undefined1 auVar18 [16];
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  uVar4 = *(ulong *)(param_1 + 0xa0);
  if (0x28 < uVar4) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar4,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
  }
  uVar9 = ~(uVar4 << 5);
  piVar11 = (int *)(param_1 + uVar4 * 4);
  lVar13 = uVar4 * -4;
  do {
    if (lVar13 == 0) {
      return (undefined8 *)0x0;
    }
    piVar11 = piVar11 + -1;
    lVar13 = lVar13 + 4;
    uVar9 = uVar9 + 0x20;
  } while (*piVar11 == 0);
  if (*piVar11 != 0) {
    return (undefined8 *)(((uint)LZCOUNT(*piVar11) ^ 0x1f) - uVar9);
  }
  auVar18 = core::num::imp::int_log10::panic_for_nonpositive_argument
                      (&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
  piVar11 = auVar18._8_8_;
  puVar3 = auVar18._0_8_;
  puStack_30 = &stack0xfffffffffffffff0;
  pcStack_28 = mul_digits;
  uVar4 = puVar3[0x14];
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (uVar4 < param_3) {
    if (uVar4 < 0x29) {
      uVar12 = 0;
      uVar9 = 0;
      puVar14 = puVar3;
      do {
        puVar5 = &uStack_d4 + uVar12;
        lVar13 = 0;
        uVar1 = uVar12;
        puVar15 = puVar14;
        do {
          uVar10 = uVar1;
          if (puVar15 == (undefined8 *)((long)puVar3 + uVar4 * 4)) goto LAB_00a97d94;
          uVar2 = *(uint *)((long)puVar14 + lVar13 * 4);
          puVar15 = (undefined8 *)((long)puVar15 + 4);
          lVar13 = lVar13 + 1;
          puVar5 = puVar5 + 1;
          uVar1 = uVar10 + 1;
        } while (uVar2 == 0);
        lVar8 = 0;
        uVar6 = 0;
        uVar1 = uVar12 + lVar13;
        do {
          if (0x27 < uVar10) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar10,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
          }
          uVar10 = uVar10 + 1;
          uVar7 = uVar6 + *(uint *)((long)puVar5 + lVar8) +
                  (ulong)*(uint *)((long)piVar11 + lVar8) * (ulong)uVar2;
          *(int *)((long)puVar5 + lVar8) = (int)uVar7;
          lVar8 = lVar8 + 4;
          uVar6 = uVar7 >> 0x20;
        } while (param_3 * 4 - lVar8 != 0);
        uVar10 = param_3;
        if (uVar6 != 0) {
          if (0x27 < (param_3 - 1) + uVar12 + lVar13) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (param_3 + uVar12 + lVar13 + -1,0x28,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
          }
          (&uStack_d4)[param_3 + uVar12 + lVar13] = (int)(uVar7 >> 0x20);
          uVar10 = param_3 + 1;
        }
        uVar10 = (uVar12 + uVar10 + lVar13) - 1;
        uVar12 = uVar1;
        puVar14 = puVar15;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
      } while( true );
    }
  }
  else if (uVar4 < 0x29) {
    if (uVar4 != 0) {
      uVar9 = 0;
      uVar12 = 0;
      piVar16 = piVar11;
      do {
        puVar5 = &uStack_d4 + uVar12;
        lVar13 = 0;
        uVar1 = uVar12;
        piVar17 = piVar16;
        do {
          uVar10 = uVar1;
          if (piVar17 == piVar11 + param_3) goto LAB_00a97d94;
          uVar2 = piVar16[lVar13];
          piVar17 = piVar17 + 1;
          lVar13 = lVar13 + 1;
          puVar5 = puVar5 + 1;
          uVar1 = uVar10 + 1;
        } while (uVar2 == 0);
        lVar8 = 0;
        uVar6 = 0;
        uVar1 = uVar12 + lVar13;
        do {
          if (0x27 < uVar10) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar10,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
          }
          uVar10 = uVar10 + 1;
          uVar7 = uVar6 + *(uint *)((long)puVar5 + lVar8) +
                  (ulong)*(uint *)((long)puVar3 + lVar8) * (ulong)uVar2;
          *(int *)((long)puVar5 + lVar8) = (int)uVar7;
          lVar8 = lVar8 + 4;
          uVar6 = uVar7 >> 0x20;
        } while (uVar4 * 4 - lVar8 != 0);
        uVar10 = uVar4;
        if (uVar6 != 0) {
          if (0x27 < (uVar4 - 1) + uVar12 + lVar13) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar4 + uVar12 + lVar13 + -1,0x28,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
          }
          (&uStack_d4)[uVar4 + uVar12 + lVar13] = (int)(uVar7 >> 0x20);
          uVar10 = uVar4 + 1;
        }
        uVar10 = (uVar12 + uVar10 + lVar13) - 1;
        uVar12 = uVar1;
        piVar16 = piVar17;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
      } while( true );
    }
    uVar4 = 0;
    uVar9 = 0;
    piVar16 = piVar11;
    while (piVar16 != piVar11 + param_3) {
      uVar12 = uVar9;
      if (uVar9 <= uVar4) {
        uVar12 = uVar4;
      }
      if (*piVar16 == 0) {
        uVar12 = uVar9;
      }
      uVar4 = uVar4 + 1;
      uVar9 = uVar12;
      piVar16 = piVar16 + 1;
    }
LAB_00a97d94:
    puVar3[0xd] = uStack_68;
    puVar3[0xc] = uStack_70;
    puVar3[0xf] = uStack_58;
    puVar3[0xe] = uStack_60;
    puVar3[0x11] = uStack_48;
    puVar3[0x10] = uStack_50;
    puVar3[0x13] = uStack_38;
    puVar3[0x12] = uStack_40;
    puVar3[5] = uStack_a8;
    puVar3[4] = uStack_b0;
    puVar3[7] = uStack_98;
    puVar3[6] = uStack_a0;
    puVar3[9] = uStack_88;
    puVar3[8] = uStack_90;
    puVar3[0xb] = uStack_78;
    puVar3[10] = uStack_80;
    puVar3[1] = uStack_c8;
    *puVar3 = uStack_d0;
    puVar3[3] = uStack_b8;
    puVar3[2] = uStack_c0;
    puVar3[0x14] = uVar9;
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar4,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
}


// ===== 00a97b68  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits */

void __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_digits
          (undefined8 *param_1,int *param_2,ulong param_3)

{
  ulong uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar8 = param_1[0x14];
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  if (uVar8 < param_3) {
    if (uVar8 < 0x29) {
      uVar10 = 0;
      uVar11 = 0;
      puVar12 = param_1;
      do {
        puVar4 = &uStack_c4 + uVar10;
        lVar14 = 0;
        uVar1 = uVar10;
        puVar13 = puVar12;
        do {
          uVar9 = uVar1;
          if (puVar13 == (undefined8 *)((long)param_1 + uVar8 * 4)) goto LAB_00a97d94;
          uVar3 = *(uint *)((long)puVar12 + lVar14 * 4);
          puVar13 = (undefined8 *)((long)puVar13 + 4);
          lVar14 = lVar14 + 1;
          puVar4 = puVar4 + 1;
          uVar1 = uVar9 + 1;
        } while (uVar3 == 0);
        lVar7 = 0;
        uVar5 = 0;
        uVar1 = uVar10 + lVar14;
        do {
          if (0x27 < uVar9) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar9,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
          }
          uVar9 = uVar9 + 1;
          uVar6 = uVar5 + *(uint *)((long)puVar4 + lVar7) +
                  (ulong)*(uint *)((long)param_2 + lVar7) * (ulong)uVar3;
          *(int *)((long)puVar4 + lVar7) = (int)uVar6;
          lVar7 = lVar7 + 4;
          uVar5 = uVar6 >> 0x20;
        } while (param_3 * 4 - lVar7 != 0);
        uVar9 = param_3;
        if (uVar5 != 0) {
          if (0x27 < (param_3 - 1) + uVar10 + lVar14) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (param_3 + uVar10 + lVar14 + -1,0x28,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
          }
          (&uStack_c4)[param_3 + uVar10 + lVar14] = (int)(uVar6 >> 0x20);
          uVar9 = param_3 + 1;
        }
        uVar9 = (uVar10 + uVar9 + lVar14) - 1;
        uVar10 = uVar1;
        puVar12 = puVar13;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
      } while( true );
    }
  }
  else if (uVar8 < 0x29) {
    piVar2 = param_2 + param_3;
    if (uVar8 != 0) {
      uVar11 = 0;
      uVar10 = 0;
      do {
        puVar4 = &uStack_c4 + uVar10;
        lVar14 = 0;
        uVar1 = uVar10;
        piVar15 = param_2;
        do {
          uVar9 = uVar1;
          if (piVar15 == piVar2) goto LAB_00a97d94;
          uVar3 = param_2[lVar14];
          piVar15 = piVar15 + 1;
          lVar14 = lVar14 + 1;
          puVar4 = puVar4 + 1;
          uVar1 = uVar9 + 1;
        } while (uVar3 == 0);
        lVar7 = 0;
        uVar5 = 0;
        uVar1 = uVar10 + lVar14;
        do {
          if (0x27 < uVar9) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar9,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
          }
          uVar9 = uVar9 + 1;
          uVar6 = uVar5 + *(uint *)((long)puVar4 + lVar7) +
                  (ulong)*(uint *)((long)param_1 + lVar7) * (ulong)uVar3;
          *(int *)((long)puVar4 + lVar7) = (int)uVar6;
          lVar7 = lVar7 + 4;
          uVar5 = uVar6 >> 0x20;
        } while (uVar8 * 4 - lVar7 != 0);
        uVar9 = uVar8;
        if (uVar5 != 0) {
          if (0x27 < (uVar8 - 1) + uVar10 + lVar14) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar8 + uVar10 + lVar14 + -1,0x28,
                       &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
          }
          (&uStack_c4)[uVar8 + uVar10 + lVar14] = (int)(uVar6 >> 0x20);
          uVar9 = uVar8 + 1;
        }
        uVar9 = (uVar10 + uVar9 + lVar14) - 1;
        uVar10 = uVar1;
        param_2 = piVar15;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
      } while( true );
    }
    uVar11 = 0;
    uVar8 = 0;
    if (param_2 != piVar2) {
      do {
        piVar15 = param_2 + 1;
        uVar10 = uVar11;
        if (uVar11 <= uVar8) {
          uVar10 = uVar8;
        }
        if (*param_2 == 0) {
          uVar10 = uVar11;
        }
        uVar11 = uVar10;
        uVar8 = uVar8 + 1;
        param_2 = piVar15;
      } while (piVar15 != piVar2);
    }
LAB_00a97d94:
    param_1[0xd] = uStack_58;
    param_1[0xc] = local_60;
    param_1[0xf] = uStack_48;
    param_1[0xe] = uStack_50;
    param_1[0x11] = uStack_38;
    param_1[0x10] = local_40;
    param_1[0x13] = uStack_28;
    param_1[0x12] = uStack_30;
    param_1[5] = uStack_98;
    param_1[4] = local_a0;
    param_1[7] = uStack_88;
    param_1[6] = uStack_90;
    param_1[9] = uStack_78;
    param_1[8] = local_80;
    param_1[0xb] = uStack_68;
    param_1[10] = uStack_70;
    param_1[1] = uStack_b8;
    *param_1 = local_c0;
    param_1[3] = uStack_a8;
    param_1[2] = uStack_b0;
    param_1[0x14] = uVar11;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar8,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
}


// ===== 00a97e48  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::div_rem_small =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::div_rem_small */

void __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::div_rem_small
          (long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_003906b4,0x1b,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
  }
  uVar2 = *(ulong *)(param_1 + 0xa0);
  if (uVar2 < 0x29) {
    if (uVar2 != 0) {
      uVar4 = (ulong)param_2;
      lVar3 = uVar2 << 2;
      lVar1 = 0;
      do {
        uVar5 = (ulong)*(uint *)(param_1 + -4 + lVar3) | lVar1 << 0x20;
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar5 / uVar4;
        }
        *(int *)(param_1 + -4 + lVar3) = (int)uVar2;
        lVar3 = lVar3 + -4;
        lVar1 = uVar5 - uVar2 * uVar4;
      } while (lVar3 != 0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar2,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
}


// ===== 00a97ed8  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::add =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::add */

void __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::add(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  
  uVar5 = *(ulong *)(param_2 + 0x28);
  if (*(ulong *)(param_2 + 0x28) <= *(ulong *)(param_1 + 0x28)) {
    uVar5 = *(ulong *)(param_1 + 0x28);
  }
  if (uVar5 < 0x29) {
    if (uVar5 != 0) {
      puVar6 = param_1;
      uVar7 = uVar5;
      bVar4 = false;
      do {
        uVar2 = *puVar6;
        uVar3 = *param_2;
        bVar1 = CARRY4(uVar3 + uVar2,(uint)bVar4);
        uVar7 = uVar7 - 1;
        *puVar6 = uVar2 + uVar3 + (uint)bVar4;
        param_2 = param_2 + 1;
        puVar6 = puVar6 + 1;
        bVar4 = CARRY4(uVar3,uVar2) || bVar1;
      } while (uVar7 != 0);
      if (CARRY4(uVar3,uVar2) || bVar1) {
        if (uVar5 == 0x28) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (0x28,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
        }
        param_1[uVar5] = 1;
        uVar5 = uVar5 + 1;
      }
    }
    *(ulong *)(param_1 + 0x28) = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar5,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
}


// ===== 00a97f78  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::sub */

void __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::sub(uint *param_1,uint *param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint *puVar6;
  ulong uVar7;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  if (*(ulong *)(param_2 + 0x28) <= *(ulong *)(param_1 + 0x28)) {
    uVar2 = *(ulong *)(param_1 + 0x28);
  }
  if (0x28 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar2,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
  }
  if (uVar2 != 0) {
    puVar6 = param_1;
    uVar7 = uVar2;
    bVar5 = true;
    do {
      uVar3 = *puVar6;
      uVar4 = ~*param_2;
      bVar1 = CARRY4(uVar3 + uVar4,(uint)bVar5);
      uVar7 = uVar7 - 1;
      *puVar6 = uVar4 + uVar3 + (uint)bVar5;
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 1;
      bVar5 = CARRY4(uVar3,uVar4) || bVar1;
    } while (uVar7 != 0);
    if (!CARRY4(uVar3,uVar4) && !bVar1) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_003906cf,0x1a,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
    }
  }
  *(ulong *)(param_1 + 0x28) = uVar2;
  return;
}


// ===== 00a98010  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::digits =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::digits */

void __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::digits(long param_1)

{
  if (*(ulong *)(param_1 + 0xa0) < 0x29) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,*(ulong *)(param_1 + 0xa0),0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
}


// ===== 00a9803c  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::is_zero =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::is_zero */

bool __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::is_zero(int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (0x28 < uVar3) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar3,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
  }
  lVar2 = uVar3 << 2;
  do {
    lVar4 = lVar2;
    if (lVar4 == 0) break;
    iVar1 = *param_1;
    param_1 = param_1 + 1;
    lVar2 = lVar4 + -4;
  } while (iVar1 == 0);
  return lVar4 == 0;
}


// ===== 00a9808c  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2 */

void * __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow2
          (void *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (0x4ff < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_00390707,0x1d,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
  }
  uVar3 = *(ulong *)((long)param_1 + 0xa0);
  uVar9 = param_2 >> 5;
  if (uVar3 != 0) {
    uVar8 = uVar3;
    do {
      uVar2 = uVar8 - 1;
      if (0x28 < uVar3) goto code_r0x00a9825c;
      if (0x27 < (uVar9 - 1) + uVar8) {
        uVar2 = (uVar9 + uVar8) - 1;
        goto code_r0x00a9825c;
      }
      *(undefined4 *)((long)param_1 + uVar8 * 4 + uVar9 * 4 + -4) =
           *(undefined4 *)((long)param_1 + uVar8 * 4 + -4);
      uVar8 = uVar2;
    } while (uVar2 != 0);
  }
  param_2 = param_2 & 0x1f;
  if (uVar9 != 0) {
    memset(param_1,0,uVar9 << 2);
  }
  lVar5 = *(long *)((long)param_1 + 0xa0);
  uVar2 = lVar5 + uVar9;
  if (param_2 == 0) {
    *(ulong *)((long)param_1 + 0xa0) = uVar2;
    return param_1;
  }
  uVar3 = uVar2 - 1;
  if (0x27 < uVar3) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar3,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760)
    ;
  }
  iVar10 = (int)param_2;
  uVar1 = *(uint *)((long)param_1 + uVar3 * 4) >> (ulong)(-iVar10 & 0x1f);
  lVar4 = lVar5 + uVar9;
  if (uVar1 != 0) {
    if (0x27 < uVar2) {
code_r0x00a9825c:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar2,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
    }
    *(uint *)((long)param_1 + uVar2 * 4) = uVar1;
    lVar4 = uVar2 + 1;
  }
  if (uVar9 + 1 < uVar2) {
    uVar3 = lVar5 - 1;
    uVar1 = 0x20 - iVar10;
    if (7 < uVar3) {
      auVar11._4_4_ = uVar1;
      auVar11._0_4_ = uVar1;
      auVar11._8_4_ = uVar1;
      auVar11._12_4_ = uVar1;
      lVar5 = uVar2 * 4;
      uVar8 = uVar3 & 0xfffffffffffffff8;
      uVar2 = uVar2 - (uVar3 & 0xfffffffffffffff8);
      pauVar7 = (undefined1 (*) [16])((long)param_1 + lVar5 + -0x10);
      auVar11 = NEON_neg(auVar11,4);
      do {
        uVar8 = uVar8 - 8;
        auVar13 = NEON_ushl(*(undefined1 (*) [16])(pauVar7[-1] + 0xc),auVar11,4);
        auVar12._4_4_ = iVar10;
        auVar12._0_4_ = iVar10;
        auVar12._8_4_ = iVar10;
        auVar12._12_4_ = iVar10;
        auVar12 = NEON_ushl(*pauVar7,auVar12,4);
        auVar15 = NEON_ushl(*(undefined1 (*) [16])(pauVar7[-2] + 0xc),auVar11,4);
        auVar14._4_4_ = iVar10;
        auVar14._0_4_ = iVar10;
        auVar14._8_4_ = iVar10;
        auVar14._12_4_ = iVar10;
        auVar14 = NEON_ushl(pauVar7[-1],auVar14,4);
        (*pauVar7)[0] = auVar15[8] | auVar14[8];
        (*pauVar7)[1] = auVar15[9] | auVar14[9];
        (*pauVar7)[2] = auVar15[10] | auVar14[10];
        (*pauVar7)[3] = auVar15[0xb] | auVar14[0xb];
        (*pauVar7)[4] = auVar15[0xc] | auVar14[0xc];
        (*pauVar7)[5] = auVar15[0xd] | auVar14[0xd];
        (*pauVar7)[6] = auVar15[0xe] | auVar14[0xe];
        (*pauVar7)[7] = auVar15[0xf] | auVar14[0xf];
        pauVar7[-1][0] = auVar15[0] | auVar14[0];
        pauVar7[-1][1] = auVar15[1] | auVar14[1];
        pauVar7[-1][2] = auVar15[2] | auVar14[2];
        pauVar7[-1][3] = auVar15[3] | auVar14[3];
        pauVar7[-1][4] = auVar15[4] | auVar14[4];
        pauVar7[-1][5] = auVar15[5] | auVar14[5];
        pauVar7[-1][6] = auVar15[6] | auVar14[6];
        pauVar7[-1][7] = auVar15[7] | auVar14[7];
        pauVar7[1][0] = auVar13[8] | auVar12[8];
        pauVar7[1][1] = auVar13[9] | auVar12[9];
        pauVar7[1][2] = auVar13[10] | auVar12[10];
        pauVar7[1][3] = auVar13[0xb] | auVar12[0xb];
        pauVar7[1][4] = auVar13[0xc] | auVar12[0xc];
        pauVar7[1][5] = auVar13[0xd] | auVar12[0xd];
        pauVar7[1][6] = auVar13[0xe] | auVar12[0xe];
        pauVar7[1][7] = auVar13[0xf] | auVar12[0xf];
        (*pauVar7)[0] = auVar13[0] | auVar12[0];
        (*pauVar7)[1] = auVar13[1] | auVar12[1];
        (*pauVar7)[2] = auVar13[2] | auVar12[2];
        (*pauVar7)[3] = auVar13[3] | auVar12[3];
        (*pauVar7)[4] = auVar13[4] | auVar12[4];
        (*pauVar7)[5] = auVar13[5] | auVar12[5];
        (*pauVar7)[6] = auVar13[6] | auVar12[6];
        (*pauVar7)[7] = auVar13[7] | auVar12[7];
        pauVar7 = pauVar7 + -2;
      } while (uVar8 != 0);
      if (uVar3 == (uVar3 & 0xfffffffffffffff8)) goto LAB_00a981f8;
    }
    lVar5 = uVar2 - 2;
    puVar6 = (uint *)((long)param_1 + uVar2 * 4 + -4);
    do {
      uVar3 = lVar5 + 1;
      lVar5 = lVar5 + -1;
      *puVar6 = puVar6[-1] >> (ulong)(uVar1 & 0x1f) | *puVar6 << param_2;
      puVar6 = puVar6 + -1;
    } while (uVar9 + 1 < uVar3);
  }
LAB_00a981f8:
  *(int *)((long)param_1 + uVar9 * 4) = *(int *)((long)param_1 + uVar9 * 4) << param_2;
  *(long *)((long)param_1 + 0xa0) = lVar4;
  return param_1;
}


// ===== 00a9827c  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow5 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow5 */

void __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_pow5
          (uint *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if (0xc < param_2) {
    uVar4 = *(ulong *)(param_1 + 0x28);
    do {
      if (0x28 < uVar4) {
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar4,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
      }
      if (uVar4 != 0) {
        lVar6 = uVar4 << 2;
        uVar5 = 0;
        puVar7 = param_1;
        do {
          lVar6 = lVar6 + -4;
          uVar9 = uVar5 + (ulong)*puVar7 * 0x48c27395;
          uVar5 = uVar9 >> 0x20;
          *puVar7 = (uint)uVar9;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
        if (uVar5 != 0) {
          if (uVar4 == 0x28) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (0x28,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
          }
          param_1[uVar4] = (uint)(uVar9 >> 0x20);
          uVar4 = uVar4 + 1;
        }
      }
      param_2 = param_2 - 0xd;
      *(ulong *)(param_1 + 0x28) = uVar4;
    } while (0xc < param_2);
  }
  if (param_2 == 0) {
    uVar4 = 1;
  }
  else {
    auVar10._8_8_ = param_2 - 1;
    auVar10._0_8_ = param_2 - 1;
    uVar3 = (int)param_2 + 3U & 0x1c;
    if (uVar3 == 4) {
      auVar12._8_4_ = 5;
      auVar12._0_8_ = 0x500000005;
      auVar12._12_4_ = 5;
      uVar13 = 1;
      uVar14 = 1;
      uVar15 = 1;
      uVar16 = 1;
      bVar2 = 0;
    }
    else if (uVar3 == 8) {
      auVar12._8_4_ = 0x19;
      auVar12._0_8_ = 0x1900000019;
      auVar12._12_4_ = 0x19;
      uVar13 = 5;
      uVar14 = 5;
      uVar15 = 5;
      uVar16 = 5;
      bVar2 = 4;
    }
    else {
      auVar12._8_4_ = 0x7d;
      auVar12._0_8_ = 0x7d0000007d;
      auVar12._12_4_ = 0x7d;
      uVar13 = 0x19;
      uVar14 = 0x19;
      uVar15 = 0x19;
      uVar16 = 0x19;
      bVar2 = 8;
    }
    auVar17[0] = bVar2 | (byte)_DAT_002a05e0;
    auVar17[1] = (char)((ulong)_DAT_002a05e0 >> 8);
    auVar17[2] = (char)((ulong)_DAT_002a05e0 >> 0x10);
    auVar17[3] = (char)((ulong)_DAT_002a05e0 >> 0x18);
    auVar17[4] = (char)((ulong)_DAT_002a05e0 >> 0x20);
    auVar17[5] = (char)((ulong)_DAT_002a05e0 >> 0x28);
    auVar17[6] = (char)((ulong)_DAT_002a05e0 >> 0x30);
    auVar17[7] = (char)((ulong)_DAT_002a05e0 >> 0x38);
    auVar17[8] = bVar2 | (byte)_UNK_002a05e8;
    auVar17[9] = (char)((ulong)_UNK_002a05e8 >> 8);
    auVar17[10] = (char)((ulong)_UNK_002a05e8 >> 0x10);
    auVar17[0xb] = (char)((ulong)_UNK_002a05e8 >> 0x18);
    auVar17[0xc] = (char)((ulong)_UNK_002a05e8 >> 0x20);
    auVar17[0xd] = (char)((ulong)_UNK_002a05e8 >> 0x28);
    auVar17[0xe] = (char)((ulong)_UNK_002a05e8 >> 0x30);
    auVar17[0xf] = (char)((ulong)_UNK_002a05e8 >> 0x38);
    auVar18 = NEON_cmhi(auVar17,auVar10,8);
    auVar1[1] = (char)((ulong)_DAT_0029fa70 >> 8);
    auVar1[0] = bVar2 | (byte)_DAT_0029fa70;
    auVar1[2] = (char)((ulong)_DAT_0029fa70 >> 0x10);
    auVar1[3] = (char)((ulong)_DAT_0029fa70 >> 0x18);
    auVar1[4] = (char)((ulong)_DAT_0029fa70 >> 0x20);
    auVar1[5] = (char)((ulong)_DAT_0029fa70 >> 0x28);
    auVar1[6] = (char)((ulong)_DAT_0029fa70 >> 0x30);
    auVar1[7] = (char)((ulong)_DAT_0029fa70 >> 0x38);
    auVar1[8] = bVar2 | (byte)_UNK_0029fa78;
    auVar1[9] = (char)((ulong)_UNK_0029fa78 >> 8);
    auVar1[10] = (char)((ulong)_UNK_0029fa78 >> 0x10);
    auVar1[0xb] = (char)((ulong)_UNK_0029fa78 >> 0x18);
    auVar1[0xc] = (char)((ulong)_UNK_0029fa78 >> 0x20);
    auVar1[0xd] = (char)((ulong)_UNK_0029fa78 >> 0x28);
    auVar1[0xe] = (char)((ulong)_UNK_0029fa78 >> 0x30);
    auVar1[0xf] = (char)((ulong)_UNK_0029fa78 >> 0x38);
    auVar10 = NEON_cmhi(auVar1,auVar10,8);
    auVar11._0_4_ = auVar10._0_4_;
    auVar11._4_4_ = auVar10._8_4_;
    auVar11._8_4_ = auVar18._0_4_;
    auVar11._12_4_ = auVar18._8_4_;
    auVar18._4_4_ = uVar14;
    auVar18._0_4_ = uVar13;
    auVar18._8_4_ = uVar15;
    auVar18._12_4_ = uVar16;
    auVar10 = NEON_bsl(auVar11,auVar18,auVar12,1);
    auVar12 = NEON_ext(auVar10,auVar10,8,1);
    uVar4 = (ulong)(uint)(auVar10._0_4_ * auVar12._0_4_ * auVar10._4_4_ * auVar12._4_4_);
  }
  uVar5 = *(ulong *)(param_1 + 0x28);
  if (uVar5 < 0x29) {
    if (uVar5 != 0) {
      lVar6 = uVar5 << 2;
      uVar9 = 0;
      puVar7 = param_1;
      do {
        lVar6 = lVar6 + -4;
        uVar8 = uVar9 + uVar4 * *puVar7;
        uVar9 = uVar8 >> 0x20;
        *puVar7 = (uint)uVar8;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
      if (uVar9 != 0) {
        if (uVar5 == 0x28) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (0x28,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
        }
        param_1[uVar5] = (uint)(uVar8 >> 0x20);
        uVar5 = uVar5 + 1;
      }
    }
    *(ulong *)(param_1 + 0x28) = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar5,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
}


// ===== 00a98430  <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_small =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_small */

void __rustcall
<core::num::imp::bignum::[2]::core::num::imp::bignum::Big32x40>::mul_small
          (uint *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (0x28 < uVar1) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar1,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
  }
  if (uVar1 != 0) {
    lVar3 = uVar1 << 2;
    uVar2 = 0;
    puVar4 = param_1;
    do {
      lVar3 = lVar3 + -4;
      uVar5 = uVar2 + (ulong)*puVar4 * (ulong)param_2;
      uVar2 = uVar5 >> 0x20;
      *puVar4 = (uint)uVar5;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
    if (uVar2 != 0) {
      if (uVar1 == 0x28) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (0x28,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff760);
      }
      param_1[uVar1] = (uint)(uVar5 >> 0x20);
      uVar1 = uVar1 + 1;
    }
  }
  *(ulong *)(param_1 + 0x28) = uVar1;
  return;
}


// ===== 00a984bc  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul */

void __rustcall
<core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_with_nul
          (undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        if (*(char *)(param_2 + uVar3) == '\0') goto LAB_00a98584;
        uVar3 = uVar3 + 1;
      } while (param_3 != uVar3);
    }
    goto LAB_00a98574;
  }
  uVar2 = (param_2 + 7U & 0xfffffffffffffff8) - param_2;
  if (uVar2 == 0) {
LAB_00a984f8:
    do {
      uVar3 = *(ulong *)(param_2 + uVar2);
      uVar1 = ((ulong *)(param_2 + uVar2))[1];
      if ((((0x101010101010100 - uVar3 | uVar3) & (0x101010101010100 - uVar1 | uVar1) ^
           0xffffffffffffffff) & 0x8080808080808080) != 0) break;
      uVar2 = uVar2 + 0x10;
    } while (uVar2 <= param_3 - 0x10);
  }
  else {
    uVar3 = 0;
    do {
      if (*(char *)(param_2 + uVar3) == '\0') goto LAB_00a98584;
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
    if (uVar2 <= param_3 - 0x10) goto LAB_00a984f8;
  }
  for (; param_3 != uVar2; uVar2 = uVar2 + 1) {
    uVar3 = uVar2;
    if (*(char *)(param_2 + uVar2) == '\0') {
LAB_00a98584:
      if (uVar3 + 1 != param_3) {
        param_1[1] = 0;
        param_1[2] = uVar3;
        *param_1 = 1;
        return;
      }
      param_1[1] = param_2;
      param_1[2] = param_3;
      *param_1 = 0;
      return;
    }
  }
LAB_00a98574:
  *param_1 = 1;
  param_1[1] = 1;
  return;
}


// ===== 00a985ac  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_until_nul =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_until_nul */

undefined1  [16] __rustcall
<core::ffi::c_str::[3]::core::ffi::c_str::CStr>::from_bytes_until_nul(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 < 0x10) {
    if (param_2 != 0) {
      uVar4 = 0;
      do {
        if (*(char *)(param_1 + uVar4) == '\0') goto LAB_00a98678;
        uVar4 = uVar4 + 1;
      } while (param_2 != uVar4);
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2 + 1;
    return auVar2 << 0x40;
  }
  uVar4 = (param_1 + 7U & 0xfffffffffffffff8) - param_1;
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      if (*(char *)(param_1 + uVar5) == '\0') {
        auVar7._8_8_ = uVar5 + 1;
        auVar7._0_8_ = param_1;
        return auVar7;
      }
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
    if (param_2 - 0x10 < uVar4) goto LAB_00a98664;
  }
  do {
    uVar5 = *(ulong *)(param_1 + uVar4);
    uVar1 = ((ulong *)(param_1 + uVar4))[1];
    if ((((0x101010101010100 - uVar5 | uVar5) & (0x101010101010100 - uVar1 | uVar1) ^
         0xffffffffffffffff) & 0x8080808080808080) != 0) break;
    uVar4 = uVar4 + 0x10;
  } while (uVar4 <= param_2 - 0x10);
LAB_00a98664:
  while( true ) {
    if (param_2 == uVar4) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2 + 1;
      return auVar3 << 0x40;
    }
    if (*(char *)(param_1 + uVar4) == '\0') break;
    uVar4 = uVar4 + 1;
  }
LAB_00a98678:
  auVar6._8_8_ = uVar4 + 1;
  auVar6._0_8_ = param_1;
  return auVar6;
}


// ===== 00a98688  <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str */

void __rustcall
<core::ffi::c_str::[3]::core::ffi::c_str::CStr>::to_str(undefined8 param_1,long param_2)

{
  core::str::converts::from_utf8(param_1,param_2 + -1);
  return;
}


// ===== 00a98690  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish_non_exhaustive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish_non_exhaustive */

void __rustcall
<core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish_non_exhaustive(long *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
LAB_00a986ac:
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  puVar1 = (undefined8 *)param_1[1];
  if (*param_1 == 0) {
    uVar4 = *puVar1;
    lVar7 = puVar1[1];
    puVar5 = &DAT_002bd220;
    uVar6 = 4;
  }
  else if (*(char *)((long)puVar1 + 0x12) < '\0') {
    uStack_38 = puVar1[1];
    local_40 = *puVar1;
    local_24[0] = 1;
    local_30 = local_24;
    iVar3 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                      (&local_40,&DAT_00390594,3);
    if (iVar3 != 0) goto LAB_00a986ac;
    uVar4 = *puVar1;
    lVar7 = puVar1[1];
    puVar5 = &DAT_003905a9;
    uVar6 = 1;
  }
  else {
    uVar4 = *puVar1;
    lVar7 = puVar1[1];
    puVar5 = &DAT_003905a4;
    uVar6 = 5;
  }
  uVar2 = (**(code **)(lVar7 + 0x18))(uVar4,puVar5,uVar6);
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}


// ===== 00a98758  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field */

long * __rustcall
<core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::field
          (long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 local_5c [4];
  undefined1 *local_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  lVar7 = *param_1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    puVar6 = (undefined8 *)param_1[1];
    if (-1 < *(char *)((long)puVar6 + 0x12)) {
      uVar3 = 1;
      uVar1 = 1;
      puVar2 = &DAT_003905aa;
      if (lVar7 != 0) {
        uVar1 = 2;
        puVar2 = &DAT_0039059b;
      }
      uVar5 = (**(code **)(puVar6[1] + 0x18))(*puVar6,puVar2,uVar1);
      if ((uVar5 & 1) == 0) {
        uVar3 = (**(code **)(param_3 + 0x18))(param_2,puVar6);
      }
      goto LAB_00a98868;
    }
    if ((lVar7 != 0) ||
       (uVar5 = (**(code **)(puVar6[1] + 0x18))(*puVar6,&DAT_003905ab,2), (uVar5 & 1) == 0)) {
      uStack_78 = puVar6[1];
      local_80 = *puVar6;
      local_70 = local_5c;
      uStack_48 = puVar6[2];
      local_5c[0] = 1;
      local_50 = &DAT_00aff790;
      local_58 = (undefined1 *)&local_80;
      iVar4 = (**(code **)(param_3 + 0x18))(param_2,&local_58);
      if (iVar4 == 0) {
        uVar3 = (**(code **)(local_50 + 0x18))(local_58,&DAT_003905a2,2);
        goto LAB_00a98868;
      }
    }
  }
  uVar3 = 1;
LAB_00a98868:
  *(undefined1 *)(param_1 + 2) = uVar3;
  *param_1 = lVar7 + 1;
  return param_1;
}


// ===== 00a98890  <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish */

uint __rustcall <core::fmt::builders::[3]::core::fmt::builders::DebugTuple>::finish(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (*param_1 == 0) {
    return (uint)*(byte *)(param_1 + 2);
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    puVar3 = (undefined8 *)param_1[1];
    if (((*param_1 == 1) && ((*(byte *)((long)param_1 + 0x11) & 1) != 0)) &&
       (-1 < *(char *)((long)puVar3 + 0x12))) {
      uVar2 = 1;
      iVar1 = (**(code **)(puVar3[1] + 0x18))(*puVar3,&DAT_003905ad,1);
      if (iVar1 != 0) goto LAB_00a9892c;
    }
    uVar2 = (**(code **)(puVar3[1] + 0x18))(*puVar3,&DAT_003905a9,1);
  }
  else {
    uVar2 = 1;
  }
LAB_00a9892c:
  *(char *)(param_1 + 2) = (char)uVar2;
  return uVar2;
}


// ===== 00a98944  <core::net::parser::[3]::core::net::ip_addr::Ipv6Addr>::parse_ascii =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::parser::[3]::core::net::ip_addr::Ipv6Addr>::parse_ascii */

void __rustcall
<core::net::parser::[3]::core::net::ip_addr::Ipv6Addr>::parse_ascii
          (undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 local_48;
  long local_40;
  byte local_34;
  undefined8 local_33;
  undefined8 uStack_2b;
  
  local_48 = param_2;
  local_40 = param_3;
  FUN_00a95a50(&local_34,&local_48);
  if ((local_40 == 0) && ((local_34 & 1) != 0)) {
    *(undefined8 *)(param_1 + 9) = uStack_2b;
    *(undefined8 *)(param_1 + 1) = local_33;
    *param_1 = 0;
    return;
  }
  param_1[1] = 2;
  *param_1 = 1;
  return;
}


// ===== 00a989b4  <core::fmt::builders::[4]::core::fmt::builders::DebugInner>::entry =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[4]::core::fmt::builders::DebugInner>::entry */

void __rustcall
<core::fmt::builders::[4]::core::fmt::builders::DebugInner>::entry
          (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 local_5c [4];
  undefined1 *local_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  uVar1 = 1;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar4 = (undefined8 *)*param_1;
    if (*(char *)((long)puVar4 + 0x12) < '\0') {
      if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
        uVar1 = 1;
        uVar3 = (**(code **)(puVar4[1] + 0x18))(*puVar4,&DAT_003905ae,1);
        if ((uVar3 & 1) != 0) goto LAB_00a98ac4;
      }
      uStack_78 = puVar4[1];
      local_80 = *puVar4;
      local_70 = local_5c;
      uStack_48 = puVar4[2];
      local_5c[0] = 1;
      local_50 = &DAT_00aff790;
      local_58 = (undefined1 *)&local_80;
      iVar2 = (**(code **)(param_3 + 0x18))(param_2,&local_58);
      if (iVar2 == 0) {
        uVar1 = (**(code **)(local_50 + 0x18))(local_58,&DAT_003905a2,2);
        goto LAB_00a98ac4;
      }
    }
    else if (((*(byte *)((long)param_1 + 9) & 1) == 0) ||
            (uVar3 = (**(code **)(puVar4[1] + 0x18))(*puVar4,&DAT_0039059b,2), (uVar3 & 1) == 0)) {
      uVar1 = (**(code **)(param_3 + 0x18))(param_2,puVar4);
      goto LAB_00a98ac4;
    }
    uVar1 = 1;
  }
LAB_00a98ac4:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = 1;
  return;
}


// ===== 00a98ae4  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::finish_non_exhaustive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::finish_non_exhaustive */

void __rustcall
<core::fmt::builders::[5]::core::fmt::builders::DebugSet>::finish_non_exhaustive
          (undefined8 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
LAB_00a98b00:
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  puVar7 = (undefined8 *)*param_1;
  if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_003905af;
    uVar5 = 3;
  }
  else if (*(char *)((long)puVar7 + 0x12) < '\0') {
    uStack_38 = puVar7[1];
    local_40 = *puVar7;
    local_24[0] = 1;
    local_30 = local_24;
    iVar2 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                      (&local_40,&DAT_00390594,3);
    if (iVar2 != 0) goto LAB_00a98b00;
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_00390597;
    uVar5 = 1;
  }
  else {
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_003905b2;
    uVar5 = 5;
  }
  uVar1 = (**(code **)(lVar6 + 0x18))(uVar3,puVar4,uVar5);
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// ===== 00a98bb0  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry */

undefined8 * __rustcall
<core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
          (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 local_5c [4];
  undefined1 *local_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  uVar1 = 1;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    puVar4 = (undefined8 *)*param_1;
    if (*(char *)((long)puVar4 + 0x12) < '\0') {
      if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
        uVar1 = 1;
        uVar3 = (**(code **)(puVar4[1] + 0x18))(*puVar4,&DAT_003905ae,1);
        if ((uVar3 & 1) != 0) goto LAB_00a98cc0;
      }
      uStack_78 = puVar4[1];
      local_80 = *puVar4;
      local_70 = local_5c;
      uStack_48 = puVar4[2];
      local_5c[0] = 1;
      local_50 = &DAT_00aff790;
      local_58 = (undefined1 *)&local_80;
      iVar2 = (**(code **)(param_3 + 0x18))(param_2,&local_58);
      if (iVar2 == 0) {
        uVar1 = (**(code **)(local_50 + 0x18))(local_58,&DAT_003905a2,2);
        goto LAB_00a98cc0;
      }
    }
    else if (((*(byte *)((long)param_1 + 9) & 1) == 0) ||
            (uVar3 = (**(code **)(puVar4[1] + 0x18))(*puVar4,&DAT_0039059b,2), (uVar3 & 1) == 0)) {
      uVar1 = (**(code **)(param_3 + 0x18))(param_2,puVar4);
      goto LAB_00a98cc0;
    }
    uVar1 = 1;
  }
LAB_00a98cc0:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = 1;
  return param_1;
}


// ===== 00a98ce4  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::finish */

void __rustcall
<core::fmt::builders::[5]::core::fmt::builders::DebugSet>::finish(undefined8 *param_1)

{
  undefined1 uVar1;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  uVar1 = (**(code **)(((undefined8 *)*param_1)[1] + 0x18))(*(undefined8 *)*param_1,&DAT_00390597,1)
  ;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// ===== 00a98d3c  <core::net::parser::[5]::core::net::socket_addr::SocketAddrV4>::parse_ascii =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::parser::[5]::core::net::socket_addr::SocketAddrV4>::parse_ascii */

ulong __rustcall
<core::net::parser::[5]::core::net::socket_addr::SocketAddrV4>::parse_ascii
          (byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong extraout_x10;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte *local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_2;
  uVar4 = FUN_00a956dc(&local_30);
  if ((uVar4 & 1) == 0) {
    bVar3 = false;
    uVar6 = 0;
    goto LAB_00a98e10;
  }
  uVar5 = extraout_x10;
  if (local_28 == 0) {
LAB_00a98ddc:
    bVar3 = false;
  }
  else {
    bVar3 = false;
    if ((local_28 != 1) && (uVar5 = (ulong)*local_30, *local_30 == 0x3a)) {
      uVar5 = (ulong)(local_30[1] - 0x30);
      if (local_30[1] - 0x30 < 10) {
        lVar7 = 2;
        do {
          if ((local_28 - lVar7 == 0) || (pbVar1 = local_30 + lVar7, 9 < *pbVar1 - 0x30)) {
            bVar3 = true;
            local_28 = local_28 - lVar7;
            goto LAB_00a98df8;
          }
          uVar2 = (((uint)uVar5 & 0xffff) + (uint)(ushort)uVar5 * 4) * 2;
          uVar5 = (ulong)uVar2;
          if ((uVar2 & 0xf0000) != 0) break;
          lVar7 = lVar7 + 1;
          uVar2 = (uVar2 & 0xfffe) + (*pbVar1 - 0x30 & 0xffff);
          uVar5 = (ulong)uVar2;
        } while ((uVar2 & 0xffff0000) == 0);
      }
      goto LAB_00a98ddc;
    }
  }
LAB_00a98df8:
  if (bVar3) {
    param_2 = local_28;
  }
  uVar6 = 0;
  if (bVar3) {
    uVar6 = (uVar4 >> 8 & 0xffffffff) << 0x10 | uVar5 << 0x30;
  }
LAB_00a98e10:
  uVar6 = uVar6 | 0x400;
  if (!(bool)(param_2 == 0 & bVar3)) {
    uVar6 = 0x401;
  }
  return uVar6;
}


// ===== 00a98e3c  <core::fmt::num::imp::[5]::u16>::_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[5]::u16>::_fmt */

undefined1  [16] __rustcall
<core::fmt::num::imp::[5]::u16>::_fmt(uint param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((param_1 & 0xffff) < 1000) {
    lVar4 = param_3;
    uVar3 = param_1;
    if ((param_1 & 0xffff) < 10) goto LAB_00a98eec;
    uVar3 = (param_1 >> 2 & 0x3fff) / 0x19;
    puVar5 = &DAT_00390ba7 + (ulong)(ushort)((short)param_1 + (short)uVar3 * -100) * 2;
    lVar4 = param_3 + -2;
    *(undefined *)(param_2 + lVar4) = *puVar5;
  }
  else {
    uVar3 = (param_1 >> 4 & 0xfff) / 0x271;
    uVar2 = param_1 + uVar3 * -10000;
    uVar1 = (uVar2 >> 2 & 0x3fff) / 0x19;
    puVar5 = &DAT_00390ba7 + (ulong)(ushort)((short)uVar2 + (short)uVar1 * -100) * 2;
    lVar4 = param_3 + -4;
    *(undefined2 *)(param_2 + lVar4) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar1 * 2);
    *(undefined *)(param_2 + param_3 + -2) = *puVar5;
  }
  *(undefined *)(param_2 + param_3 + -1) = puVar5[1];
LAB_00a98eec:
  if (((param_1 & 0xffff) != 0) && ((uVar3 & 0xffff) == 0)) {
    auVar6._8_8_ = param_3 - lVar4;
    auVar6._0_8_ = param_2 + lVar4;
    return auVar6;
  }
  lVar4 = lVar4 + -1;
  *(undefined *)(param_2 + lVar4) = (&DAT_00390ba8)[(uVar3 & 0xf) << 1];
  auVar7._8_8_ = param_3 - lVar4;
  auVar7._0_8_ = param_2 + lVar4;
  return auVar7;
}


// ===== 00a98f38  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish_non_exhaustive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish_non_exhaustive */

undefined8 __rustcall
<core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish_non_exhaustive
          (undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined1 local_4 [4];
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    return 1;
  }
  puVar3 = (undefined8 *)*param_1;
  if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a98fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(puVar3[1] + 0x18))(*puVar3,&UNK_003905b7,3);
    return uVar2;
  }
  if (-1 < *(char *)((long)puVar3 + 0x12)) {
                    /* WARNING: Could not recover jumptable at 0x00a98f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(puVar3[1] + 0x18))(*puVar3,&UNK_003905ba,5);
    return uVar2;
  }
  uStack_38 = puVar3[1];
  local_40 = *puVar3;
  local_4[0] = 1;
  local_30 = local_4;
  iVar1 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                    (&local_40,&DAT_00390594,3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = (**(code **)(puVar3[1] + 0x18))(*puVar3,&DAT_003905bf,1);
  return uVar2;
}


// ===== 00a9902c  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish */

void __rustcall
<core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(undefined8 *param_1)

{
  undefined1 uVar1;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  uVar1 = (**(code **)(((undefined8 *)*param_1)[1] + 0x18))(*(undefined8 *)*param_1,&DAT_003905bf,1)
  ;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// ===== 00a99084  <core::fmt::num::imp::[6]::i16>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[6]::i16>::format_into */

undefined1  [16] __rustcall <core::fmt::num::imp::[6]::i16>::format_into(uint param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((param_1 >> 0xf & 1) == 0) {
    if ((param_1 & 0xffff) < 1000) {
      if ((param_1 & 0xffff) < 10) {
        lVar4 = 6;
        uVar1 = param_1;
      }
      else {
        uVar1 = (param_1 >> 2 & 0x3fff) / 0x19;
        lVar4 = 4;
        *(undefined2 *)(param_2 + 4) =
             *(undefined2 *)(&DAT_00390ba7 + ((ulong)(param_1 + uVar1 * -100) & 0xffff) * 2);
      }
    }
    else {
      uVar1 = (param_1 >> 4 & 0xfff) / 0x271;
      uVar3 = param_1 + uVar1 * -10000;
      uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar2 * 2);
      lVar4 = 2;
      *(undefined2 *)(param_2 + 4) =
           *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
    }
    if (((param_1 & 0xffff) != 0) && ((uVar1 & 0xffff) == 0)) {
      auVar5._8_8_ = 6 - lVar4;
      auVar5._0_8_ = param_2 + lVar4;
      return auVar5;
    }
    lVar4 = lVar4 + -1;
    *(undefined *)(param_2 + lVar4) = (&DAT_00390ba8)[(uVar1 & 0xf) << 1];
    auVar6._8_8_ = 6 - lVar4;
    auVar6._0_8_ = param_2 + lVar4;
    return auVar6;
  }
  param_1 = -param_1;
  if ((param_1 & 0xffff) < 1000) {
    if (9 < (param_1 & 0xffff)) {
      uVar1 = (param_1 >> 2 & 0x3fff) / 0x19;
      lVar4 = 4;
      *(undefined2 *)(param_2 + 4) =
           *(undefined2 *)(&DAT_00390ba7 + ((ulong)(param_1 + uVar1 * -100) & 0xffff) * 2);
      param_1 = uVar1;
      goto joined_r0x00a991d4;
    }
    lVar4 = 6;
  }
  else {
    uVar1 = (param_1 >> 4 & 0xfff) / 0x271;
    param_1 = param_1 + uVar1 * -10000;
    uVar2 = (param_1 >> 2 & 0x3fff) / 0x19;
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar2 * 2);
    lVar4 = 2;
    *(undefined2 *)(param_2 + 4) =
         *(undefined2 *)(&DAT_00390ba7 + ((ulong)(param_1 + uVar2 * -100) & 0xffff) * 2);
    param_1 = uVar1;
joined_r0x00a991d4:
    if (param_1 == 0) goto LAB_00a99254;
  }
  lVar4 = lVar4 + -1;
  *(undefined *)(param_2 + lVar4) = (&DAT_00390ba8)[(param_1 & 0xf) << 1];
LAB_00a99254:
  lVar4 = lVar4 + -1;
  *(undefined1 *)(param_2 + lVar4) = 0x2d;
  auVar7._8_8_ = 6 - lVar4;
  auVar7._0_8_ = param_2 + lVar4;
  return auVar7;
}


// ===== 00a99274  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish_non_exhaustive =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish_non_exhaustive */

void __rustcall
<core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish_non_exhaustive
          (undefined8 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
LAB_00a99290:
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_003905c0,0x5d,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff608);
  }
  puVar7 = (undefined8 *)*param_1;
  if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_003905af;
    uVar5 = 3;
  }
  else if (*(char *)((long)puVar7 + 0x12) < '\0') {
    uStack_38 = puVar7[1];
    local_40 = *puVar7;
    local_24[0] = 1;
    local_30 = local_24;
    iVar2 = <core::fmt::builders::PadAdapter_as_core::fmt::Write>::write_str
                      (&local_40,&DAT_00390594,3);
    if (iVar2 != 0) goto LAB_00a99290;
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_00390597;
    uVar5 = 1;
  }
  else {
    uVar3 = *puVar7;
    lVar6 = puVar7[1];
    puVar4 = &DAT_003905b2;
    uVar5 = 5;
  }
  uVar1 = (**(code **)(lVar6 + 0x18))(uVar3,puVar4,uVar5);
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// ===== 00a99360  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::key =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::key */

undefined8 * __rustcall
<core::fmt::builders::[7]::core::fmt::builders::DebugMap>::key
          (undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_003905ee,0x8d,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff620);
    }
    puVar2 = (undefined8 *)*param_1;
    if (*(char *)((long)puVar2 + 0x12) < '\0') {
      if ((*(byte *)((long)param_1 + 9) & 1) == 0) {
        uVar3 = 1;
        uVar1 = (**(code **)(puVar2[1] + 0x18))(*puVar2,&DAT_003905ae,1);
        if ((uVar1 & 1) != 0) goto LAB_00a99388;
      }
      local_60 = (undefined1 *)((long)param_1 + 0xb);
      *local_60 = 1;
      uStack_48 = puVar2[2];
      uStack_68 = puVar2[1];
      local_70 = *puVar2;
      local_50 = &DAT_00aff790;
      local_58 = (undefined1 *)&local_70;
      uVar1 = (**(code **)(param_3 + 0x18))(param_2,&local_58);
      if ((uVar1 & 1) == 0) {
        uVar1 = (**(code **)(local_50 + 0x18))(local_58,&DAT_0039059d,2);
        goto joined_r0x00a994b4;
      }
    }
    else if ((((*(byte *)((long)param_1 + 9) & 1) == 0) ||
             (uVar1 = (**(code **)(puVar2[1] + 0x18))(*puVar2,&DAT_0039059b,2), (uVar1 & 1) == 0))
            && (uVar1 = (**(code **)(param_3 + 0x18))(param_2,puVar2), (uVar1 & 1) == 0)) {
      uVar1 = (**(code **)(puVar2[1] + 0x18))(*puVar2,&DAT_0039059d,2);
joined_r0x00a994b4:
      if ((uVar1 & 1) == 0) {
        uVar3 = 0;
        *(undefined1 *)((long)param_1 + 10) = 1;
        goto LAB_00a99388;
      }
    }
  }
  uVar3 = 1;
LAB_00a99388:
  *(undefined1 *)(param_1 + 1) = uVar3;
  return param_1;
}


// ===== 00a994e0  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry */

long * __rustcall
<core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined1 *local_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  lVar1 = key();
  uVar4 = 1;
  if ((*(byte *)(lVar1 + 8) & 1) != 0) goto LAB_00a995a0;
  if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00390634,0x5d,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff638);
  }
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((long)puVar3 + 0x12) < '\0') {
    uStack_38 = puVar3[2];
    uStack_58 = puVar3[1];
    local_60 = *puVar3;
    local_50 = (long)param_1 + 0xb;
    local_40 = &DAT_00aff790;
    local_48 = (undefined1 *)&local_60;
    uVar2 = (**(code **)(param_5 + 0x18))(param_4,&local_48);
    if ((uVar2 & 1) == 0) {
      uVar2 = (**(code **)(local_40 + 0x18))(local_48,&DAT_003905a2,2);
      goto joined_r0x00a9958c;
    }
  }
  else {
    uVar2 = (**(code **)(param_5 + 0x18))(param_4);
joined_r0x00a9958c:
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      *(undefined1 *)((long)param_1 + 10) = 0;
      goto LAB_00a995a0;
    }
  }
  uVar4 = 1;
LAB_00a995a0:
  *(undefined1 *)(param_1 + 1) = uVar4;
  *(undefined1 *)((long)param_1 + 9) = 1;
  return param_1;
}


// ===== 00a995d8  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::value =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::value */

long * __rustcall
<core::fmt::builders::[7]::core::fmt::builders::DebugMap>::value
          (long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  undefined1 *local_38;
  undefined *local_30;
  undefined8 uStack_28;
  
  local_38 = (undefined1 *)&local_50;
  uVar2 = 1;
  if ((*(byte *)(param_1 + 1) & 1) != 0) goto LAB_00a9968c;
  if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00390634,0x5d,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff638);
  }
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((long)puVar3 + 0x12) < '\0') {
    uStack_48 = puVar3[1];
    local_50 = *puVar3;
    uStack_28 = puVar3[2];
    local_40 = (long)param_1 + 0xb;
    local_30 = &DAT_00aff790;
    uVar1 = (**(code **)(param_3 + 0x18))(param_2,&local_38);
    if ((uVar1 & 1) == 0) {
      uVar1 = (**(code **)(local_30 + 0x18))(local_38,&DAT_003905a2,2);
      goto joined_r0x00a99678;
    }
  }
  else {
    uVar1 = (**(code **)(param_3 + 0x18))(param_2,puVar3);
joined_r0x00a99678:
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      *(undefined1 *)((long)param_1 + 10) = 0;
      goto LAB_00a9968c;
    }
  }
  uVar2 = 1;
LAB_00a9968c:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *(undefined1 *)((long)param_1 + 9) = 1;
  return param_1;
}


// ===== 00a996c0  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish */

void __rustcall
<core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish(undefined8 *param_1)

{
  undefined1 uVar1;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (*(char *)((long)param_1 + 10) != '\x01') {
    uVar1 = (**(code **)(((undefined8 *)*param_1)[1] + 0x18))
                      (*(undefined8 *)*param_1,&DAT_00390597,1);
    *(undefined1 *)(param_1 + 1) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_003905c0,0x5d,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff650);
}


// ===== 00a9973c  <core::net::parser::[7]::core::net::socket_addr::SocketAddrV6>::parse_ascii =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::parser::[7]::core::net::socket_addr::SocketAddrV6>::parse_ascii */

void __rustcall
<core::net::parser::[7]::core::net::socket_addr::SocketAddrV6>::parse_ascii
          (undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 local_50;
  long local_48;
  uint local_40;
  undefined8 local_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  local_50 = param_2;
  local_48 = param_3;
  FUN_00a95ba4(&local_40,&local_50);
  if ((local_48 == 0) && ((local_40 & 1) != 0)) {
    *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_30,uStack_34);
    *(undefined8 *)(param_1 + 4) = local_3c;
    *(undefined8 *)(param_1 + 0x18) = uStack_28;
    *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_2c,uStack_30);
    *param_1 = 0;
    return;
  }
  param_1[1] = 5;
  *param_1 = 1;
  return;
}


// ===== 00a997b4  <core::fmt::num::imp::[7]::u16>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[7]::u16>::format_into */

undefined1  [16] __rustcall <core::fmt::num::imp::[7]::u16>::format_into(uint param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((param_1 & 0xffff) < 1000) {
    if ((param_1 & 0xffff) < 10) {
      lVar4 = 5;
      uVar1 = param_1;
    }
    else {
      uVar1 = (param_1 >> 2 & 0x3fff) / 0x19;
      lVar4 = 3;
      *(undefined2 *)(param_2 + 3) =
           *(undefined2 *)(&DAT_00390ba7 + ((ulong)(param_1 + uVar1 * -100) & 0xffff) * 2);
    }
  }
  else {
    uVar1 = (param_1 >> 4 & 0xfff) / 0x271;
    uVar3 = param_1 + uVar1 * -10000;
    uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar2 * 2);
    lVar4 = 1;
    *(undefined2 *)(param_2 + 3) =
         *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2);
  }
  if (((param_1 & 0xffff) != 0) && ((uVar1 & 0xffff) == 0)) {
    auVar5._8_8_ = 5 - lVar4;
    auVar5._0_8_ = param_2 + lVar4;
    return auVar5;
  }
  lVar4 = lVar4 + -1;
  *(undefined *)(param_2 + lVar4) = (&DAT_00390ba8)[(uVar1 & 0xf) << 1];
  auVar6._8_8_ = 5 - lVar4;
  auVar6._0_8_ = param_2 + lVar4;
  return auVar6;
}


// ===== 00a998ac  <core::net::parser::[9]::core::net::socket_addr::SocketAddr>::parse_ascii =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::parser::[9]::core::net::socket_addr::SocketAddr>::parse_ascii */

void __rustcall
<core::net::parser::[9]::core::net::socket_addr::SocketAddr>::parse_ascii
          (undefined2 *param_1,char *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined2 uVar3;
  uint uVar4;
  byte *pbVar5;
  char *local_80;
  long local_78;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  ulong local_38;
  
  local_80 = param_2;
  local_78 = param_3;
  uVar2 = FUN_00a956dc(&local_80);
  if (((((uVar2 & 1) != 0) && (local_78 != 0)) && (local_78 != 1)) &&
     ((*local_80 == ':' && (uVar4 = (byte)local_80[1] - 0x30, uVar4 < 10)))) {
    local_78 = local_78 + -2;
    pbVar5 = (byte *)(local_80 + 2);
    do {
      if (local_78 == 0) {
LAB_00a99980:
        if (local_78 != 0) goto LAB_00a99a28;
        uVar2 = uVar2 >> 8 & 0xffffffff | (ulong)(uVar4 & 0xffff) << 0x20;
        uVar3 = 0;
        goto LAB_00a999f0;
      }
      if (9 < *pbVar5 - 0x30) goto LAB_00a99980;
      uVar4 = ((uVar4 & 0xffff) + (uVar4 & 0xffff) * 4) * 2;
      if ((uVar4 & 0xf0000) != 0) break;
      local_78 = local_78 + -1;
      uVar4 = (uVar4 & 0xfffe) + (*pbVar5 - 0x30 & 0xffff);
      pbVar5 = pbVar5 + 1;
    } while ((uVar4 & 0xffff0000) == 0);
  }
  local_80 = param_2;
  local_78 = param_3;
  FUN_00a95ba4(&local_50,&local_80);
  uVar1 = uStack_48;
  if (((int)local_50 != 1) || (local_78 != 0)) {
LAB_00a99a28:
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = 2;
    return;
  }
  uVar2 = (local_50 >> 0x20) << 0x10;
  uStack_48 = local_40;
  local_50 = uVar1;
  local_40 = local_38;
  uVar3 = 1;
LAB_00a999f0:
  *param_1 = uVar3;
  *(int *)(param_1 + 1) = (int)uVar2;
  *(ulong *)(param_1 + 8) = uStack_48;
  *(ulong *)(param_1 + 4) = local_50;
  *(ulong *)(param_1 + 0xc) = local_40;
  param_1[3] = (short)(uVar2 >> 0x20);
  return;
}


// ===== 00a99a4c  <core::fmt::core::fmt::FormattingOptions>::get_fill =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::core::fmt::FormattingOptions>::get_fill */

uint __rustcall <core::fmt::core::fmt::FormattingOptions>::get_fill(uint *param_1)

{
  return *param_1 & 0x1fffff;
}


// ===== 00a99a58  <core::net::parser::core::net::ip_addr::IpAddr>::parse_ascii =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::net::parser::core::net::ip_addr::IpAddr>::parse_ascii */

void __rustcall
<core::net::parser::core::net::ip_addr::IpAddr>::parse_ascii
          (undefined2 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 local_58;
  long local_50;
  char local_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  undefined4 local_30;
  undefined1 uStack_2c;
  undefined4 local_2b;
  
  local_58 = param_2;
  local_50 = param_3;
  uVar1 = FUN_00a956dc(&local_58);
  if ((uVar1 & 1) == 0) {
    FUN_00a95a50(&local_38,&local_58);
    uVar2 = uStack_37;
    if (local_38 == '\x01') {
      if (local_50 == 0) {
        local_38 = (char)uStack_33;
        uStack_37 = (undefined4)(CONCAT43(local_30,uStack_33) >> 8);
        uStack_33 = (undefined3)(CONCAT17(uStack_2c,CONCAT43(local_30,uStack_33)) >> 0x28);
        uVar3 = 1;
        local_30 = local_2b;
        goto LAB_00a99ad8;
      }
    }
  }
  else if (local_50 == 0) {
    uVar2 = (undefined4)(uVar1 >> 8);
    uVar3 = 0;
LAB_00a99ad8:
    *(undefined1 *)param_1 = uVar3;
    *(undefined4 *)((long)param_1 + 1) = uVar2;
    *(ulong *)((long)param_1 + 5) = CONCAT35(uStack_33,CONCAT41(uStack_37,local_38));
    *(undefined4 *)((long)param_1 + 0xd) = local_30;
    return;
  }
  *param_1 = 2;
  return;
}


// ===== 00a99b1c  <core::num::imp::fmt::core::num::imp::fmt::Formatted>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::fmt::core::num::imp::fmt::Formatted>::len */

void __rustcall <core::num::imp::fmt::core::num::imp::fmt::Formatted>::len(long param_1)

{
  ushort uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar4 = *(long *)(param_1 + 0x18);
  uVar3 = *(ulong *)(param_1 + 8);
  if (lVar4 != 0) {
    puVar5 = (ulong *)(*(long *)(param_1 + 0x10) + 8);
    do {
      if ((short)puVar5[-1] == 0) {
        uVar7 = *puVar5;
      }
      else if ((short)puVar5[-1] == 1) {
        uVar1 = *(ushort *)((long)puVar5 + -6);
        if (uVar1 == 0) {
          uVar7 = 1;
        }
        else {
          uVar6 = (uint)uVar1;
          uVar7 = (ulong)(((uVar1 + 0x5fff6 & uVar6 + 0x7ff9c ^ uVar6 + 0xdfc18 & uVar6 + 0x7d8f0)
                          >> 0x11) + 1);
        }
      }
      else {
        uVar7 = puVar5[1];
      }
      bVar2 = CARRY8(uVar3,uVar7);
      uVar3 = uVar3 + uVar7;
      puVar5 = puVar5 + 3;
      if (bVar2) {
        uVar3 = 0xffffffffffffffff;
      }
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}


// ===== 00a99bc4  <core::num::imp::fmt::core::num::imp::fmt::Formatted>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::fmt::core::num::imp::fmt::Formatted>::write */

undefined1  [16] __rustcall
<core::num::imp::fmt::core::num::imp::fmt::Formatted>::write
          (undefined8 *param_1,void *param_2,ulong param_3)

{
  ulong __n;
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  __n = param_1[1];
  if (param_3 < __n) {
LAB_00a99be4:
    uVar1 = 0;
  }
  else {
    memcpy(param_2,(void *)*param_1,__n);
    if (param_1[3] == 0) {
      uVar1 = 1;
    }
    else {
      lVar2 = param_1[2];
      uVar1 = 1;
      lVar3 = param_1[3] * 0x18;
      do {
        if (param_3 < __n) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (__n,param_3,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff7c0);
        }
        auVar4 = <core::num::imp::fmt::core::num::imp::fmt::Part>::write
                           (lVar2,(long)param_2 + __n,param_3 - __n);
        if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_00a99be4;
        lVar3 = lVar3 + -0x18;
        lVar2 = lVar2 + 0x18;
        __n = auVar4._8_8_ + __n;
      } while (lVar3 != 0);
    }
  }
  auVar4._8_8_ = __n;
  auVar4._0_8_ = uVar1;
  return auVar4;
}


// ===== 00a99c84  <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::left_shift =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::left_shift
    */

void __rustcall
<core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::left_shift
          (ulong *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    lVar5 = (param_2 & 0x3f) * 2;
    uVar8 = (ulong)*(ushort *)(&DAT_00392900 + lVar5) & 0x7ff;
    uVar6 = (ulong)(*(ushort *)(&DAT_00392900 + lVar5) >> 0xb);
    lVar9 = -0x51c;
    do {
      if (((uVar8 - ((ulong)*(ushort *)(&DAT_00392902 + lVar5) & 0x7ff)) + lVar9 == -0x51c) ||
         (-lVar9 == uVar8)) goto LAB_00a99d28;
      if (lVar9 - uVar4 == -0x51c) {
        uVar6 = uVar6 - 1;
        goto LAB_00a99d28;
      }
      if (lVar9 == -0x21c) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (0x300,0x300,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affc28);
      }
      lVar1 = uVar8 + lVar9;
      bVar2 = *(byte *)((long)param_1 + lVar9 + 0x524);
      lVar9 = lVar9 + 1;
    } while (bVar2 == (&UNK_00392e9e)[lVar1]);
    uVar6 = uVar6 - (bVar2 < (byte)(&UNK_00392e9e)[lVar1]);
LAB_00a99d28:
    uVar8 = 0;
    lVar5 = uVar4 - 1;
    do {
      if (0x300 < lVar5 + 1U) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (lVar5,0x300,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff7f0);
      }
      uVar4 = ((ulong)*(byte *)((long)param_1 + lVar5 + 8) << (param_2 & 0x3f)) + uVar8;
      uVar8 = uVar4 / 10;
      if (uVar6 + lVar5 < 0x300) {
        *(char *)((long)param_1 + lVar5 + uVar6 + 8) = (char)(uVar4 % 10);
      }
      else if (uVar4 % 10 != 0) {
        *(undefined1 *)((long)param_1 + 0x30c) = 1;
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != -1);
    if (9 < uVar4) {
      puVar7 = (undefined1 *)((long)param_1 + uVar6 + 7);
      uVar4 = uVar6;
      do {
        uVar4 = uVar4 - 1;
        if (uVar4 < 0x300) {
          *puVar7 = (char)(uVar8 % 10);
        }
        else if (uVar8 % 10 != 0) {
          *(undefined1 *)((long)param_1 + 0x30c) = 1;
        }
        bVar3 = 9 < uVar8;
        puVar7 = puVar7 + -1;
        uVar8 = uVar8 / 10;
      } while (bVar3);
    }
    uVar4 = *param_1 + uVar6;
    *(int *)(param_1 + 0x61) = (int)param_1[0x61] + (int)uVar6;
    uVar6 = uVar4;
    if (0x2ff < uVar4) {
      uVar6 = 0x300;
    }
    *param_1 = uVar6;
    while (uVar4 != 0) {
      uVar4 = uVar6 - 1;
      if (0x300 < uVar6) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar4,0x300,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff7d8);
      }
      if (*(char *)((long)param_1 + uVar6 + 7) != '\0') {
        return;
      }
      *param_1 = uVar4;
      uVar6 = uVar4;
    }
  }
  return;
}


// ===== 00a99e90  <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::right_shift =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::right_shift
    */

void __rustcall
<core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::
right_shift(ulong *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar6 = 0;
  uVar8 = *param_1;
  param_2 = param_2 & 0x3f;
  uVar7 = 0;
  while (uVar8 != uVar7) {
    if (uVar7 == 0x300) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (0x300,0x300,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff808);
    }
    uVar5 = uVar7 + 1;
    uVar6 = (ulong)*(byte *)((long)param_1 + uVar7 + 8) + uVar6 * 10;
    uVar7 = uVar5;
    if (uVar6 >> param_2 != 0) goto LAB_00a99f00;
  }
  uVar5 = uVar8;
  if (uVar6 == 0) {
    return;
  }
  for (; uVar6 >> param_2 == 0; uVar6 = uVar6 * 10) {
    uVar5 = uVar5 + 1;
  }
LAB_00a99f00:
  iVar3 = (int)param_1[0x61] - (int)uVar5;
  iVar1 = iVar3 + 1;
  *(int *)(param_1 + 0x61) = iVar1;
  if (iVar3 + 0x800 < 0 != SCARRY4(iVar1,0x7ff)) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0x61) = 0;
    *(undefined1 *)((long)param_1 + 0x30c) = 0;
    return;
  }
  uVar7 = uVar8 - uVar5;
  if (uVar8 < uVar5 || uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    lVar10 = -uVar5;
    lVar2 = uVar5 + 8;
    if (0x2ff < uVar5) {
      uVar5 = 0x300;
    }
    lVar9 = uVar5 - 0x300;
    puVar4 = param_1;
    do {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (-lVar10,0x300,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff820);
      }
      uVar5 = uVar6 >> param_2;
      uVar6 = (ulong)*(byte *)((long)puVar4 + lVar2) + (uVar6 & ~(-1L << param_2)) * 10;
      lVar10 = lVar10 + -1;
      lVar9 = lVar9 + 1;
      *(char *)(puVar4 + 1) = (char)uVar5;
      puVar4 = (ulong *)((long)puVar4 + 1);
    } while (-lVar10 != uVar8);
  }
  for (; uVar8 = uVar7, uVar6 != 0; uVar6 = (uVar6 & ~(-1L << param_2)) * 10) {
    if (uVar7 < 0x300) {
      *(char *)((long)param_1 + uVar7 + 8) = (char)(uVar6 >> param_2);
      uVar7 = uVar7 + 1;
    }
    else if ((uVar6 >> param_2 & 0xff) != 0) {
      *(undefined1 *)((long)param_1 + 0x30c) = 1;
    }
  }
  while( true ) {
    *param_1 = uVar8;
    if (uVar8 == 0) {
      return;
    }
    if (0x300 < uVar7) break;
    lVar2 = uVar8 + 7;
    uVar8 = uVar8 - 1;
    if (*(char *)((long)param_1 + lVar2) != '\0') {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar8 - 1,0x300,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff7d8);
}


// ===== 00a9a044  <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::round =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::round
    */

long __rustcall
<core::num::imp::dec2flt::decimal_seq::core::num::imp::dec2flt::decimal_seq::DecimalSeq>::round
          (ulong *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *param_1;
  if (uVar5 != 0) {
    uVar1 = (uint)param_1[0x61];
    uVar4 = (ulong)uVar1;
    if (-1 < (int)uVar1) {
      if (0x12 < uVar1) {
        return -1;
      }
      lVar3 = 0;
      if (uVar1 != 0) {
        uVar6 = 0;
        do {
          lVar3 = lVar3 * 10;
          if (uVar6 < uVar5) {
            lVar3 = lVar3 + (ulong)*(byte *)((long)param_1 + uVar6 + 8);
          }
          uVar6 = uVar6 + 1;
        } while (uVar4 != uVar6);
      }
      if (uVar4 < uVar5) {
        bVar2 = *(byte *)((long)param_1 + uVar4 + 8);
        if ((uVar4 + 1 == uVar5) && (bVar2 == 5)) {
          if ((*(byte *)((long)param_1 + 0x30c) & 1) == 0) {
            if (uVar1 == 0) {
              return lVar3;
            }
            if ((*(byte *)((long)param_1 + uVar4 + 7) & 1) == 0) {
              return lVar3;
            }
          }
        }
        else if (bVar2 < 5) {
          return lVar3;
        }
        lVar3 = lVar3 + 1;
      }
      return lVar3;
    }
  }
  return 0;
}


// ===== 00a9a0f8  <core::fmt::[a]::core::fmt::Formatter>::debug_list =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_list */

void __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_list(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_00390c71,1);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}


// ===== 00a9a13c  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_tuple */

void __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_tuple
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2);
  *param_1 = 0;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = uVar1;
  *(bool *)((long)param_1 + 0x11) = param_4 == 0;
  return;
}


// ===== 00a9a188  <core::fmt::[a]::core::fmt::Formatter>::debug_struct =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_struct */

void __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_struct(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}


// ===== 00a9a1c0  <core::fmt::[a]::core::fmt::Formatter>::pad_integral =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::pad_integral */

ulong __rustcall
<core::fmt::[a]::core::fmt::Formatter>::pad_integral
          (undefined8 *param_1,ulong param_2,undefined8 *param_3,ulong param_4,undefined8 param_5,
          long param_6)

{
  uint uVar1;
  uint3 uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  if ((param_2 & 1) == 0) {
    uVar15 = *(uint *)(param_1 + 2);
    uVar6 = param_6 + 1;
    uVar9 = 0x2d;
    if ((uVar15 >> 0x17 & 1) != 0) goto LAB_00a9a214;
LAB_00a9a244:
    param_3 = (undefined8 *)0x0;
    uVar7 = (ulong)*(ushort *)((long)param_1 + 0x14);
    if (uVar6 < uVar7) goto LAB_00a9a3f4;
LAB_00a9a254:
    uVar17 = *param_1;
    lVar4 = param_1[1];
    uVar6 = FUN_00aa4314(uVar17,lVar4,uVar9,param_3,param_4);
    if ((uVar6 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a9a2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(lVar4 + 0x18))(uVar17,param_5,param_6);
      return uVar6;
    }
  }
  else {
    uVar15 = *(uint *)(param_1 + 2);
    uVar6 = param_6 + (((ulong)uVar15 & 0x200000) >> 0x15);
    uVar9 = 0x2b;
    if ((int)((ulong)uVar15 & 0x200000) == 0) {
      uVar9 = 0xffffffff;
    }
    if ((uVar15 >> 0x17 & 1) == 0) goto LAB_00a9a244;
LAB_00a9a214:
    if (param_4 < 0x20) {
      if (param_4 == 0) {
        lVar4 = 0;
      }
      else {
        if (param_4 < 8) {
          uVar7 = 0;
          lVar4 = 0;
        }
        else {
          uVar7 = param_4 & 0x18;
          uVar17 = NEON_cmgt(*param_3,0xbfbfbfbfbfbfbfbf,1);
          uVar2 = CONCAT12((char)((ulong)uVar17 >> 8),(short)uVar17) & 0xff00ff;
          uVar5 = (ulong)((byte)((ulong)uVar17 >> 0x30) & 1);
          uVar18 = (ulong)((byte)((ulong)uVar17 >> 0x38) & 1);
          uVar21 = (ulong)((byte)((ulong)uVar17 >> 0x20) & 1);
          uVar22 = (ulong)((byte)((ulong)uVar17 >> 0x28) & 1);
          uVar19 = (ulong)((byte)((ulong)uVar17 >> 0x10) & 1);
          uVar20 = (ulong)((byte)((ulong)uVar17 >> 0x18) & 1);
          uVar23 = (ulong)((byte)uVar2 & 1);
          uVar24 = (ulong)((byte)(uVar2 >> 0x10) & 1);
          if (uVar7 != 8) {
            uVar17 = NEON_cmgt(param_3[1],0xbfbfbfbfbfbfbfbf,1);
            uVar2 = CONCAT12((char)((ulong)uVar17 >> 8),(short)uVar17) & 0xff00ff;
            uVar5 = uVar5 + ((byte)((ulong)uVar17 >> 0x30) & 1);
            uVar18 = uVar18 + ((byte)((ulong)uVar17 >> 0x38) & 1);
            uVar19 = uVar19 + ((byte)((ulong)uVar17 >> 0x10) & 1);
            uVar20 = uVar20 + ((byte)((ulong)uVar17 >> 0x18) & 1);
            uVar23 = uVar23 + ((byte)uVar2 & 1);
            uVar24 = uVar24 + ((byte)(uVar2 >> 0x10) & 1);
            uVar21 = uVar21 + ((byte)((ulong)uVar17 >> 0x20) & 1);
            uVar22 = uVar22 + ((byte)((ulong)uVar17 >> 0x28) & 1);
            if (uVar7 != 0x10) {
              uVar17 = NEON_cmgt(param_3[2],0xbfbfbfbfbfbfbfbf,1);
              uVar2 = CONCAT12((char)((ulong)uVar17 >> 8),(short)uVar17) & 0xff00ff;
              uVar5 = uVar5 + ((byte)((ulong)uVar17 >> 0x30) & 1);
              uVar18 = uVar18 + ((byte)((ulong)uVar17 >> 0x38) & 1);
              uVar19 = uVar19 + ((byte)((ulong)uVar17 >> 0x10) & 1);
              uVar20 = uVar20 + ((byte)((ulong)uVar17 >> 0x18) & 1);
              uVar23 = uVar23 + ((byte)uVar2 & 1);
              uVar24 = uVar24 + ((byte)(uVar2 >> 0x10) & 1);
              uVar21 = uVar21 + ((byte)((ulong)uVar17 >> 0x20) & 1);
              uVar22 = uVar22 + ((byte)((ulong)uVar17 >> 0x28) & 1);
            }
          }
          lVar4 = uVar23 + uVar21 + uVar19 + uVar5 + uVar24 + uVar22 + uVar20 + uVar18;
          if (param_4 == uVar7) goto LAB_00a9a3e4;
        }
        lVar10 = param_4 - uVar7;
        pcVar8 = (char *)((long)param_3 + uVar7);
        do {
          iVar11 = (int)*pcVar8;
          if (iVar11 != -0x41 && iVar11 + 0x41 < 0 == SCARRY4(iVar11,0x41)) {
            lVar4 = lVar4 + 1;
          }
          lVar10 = lVar10 + -1;
          pcVar8 = pcVar8 + 1;
        } while (lVar10 != 0);
      }
    }
    else {
      lVar4 = core::str::count::do_count_chars(param_3,param_4);
    }
LAB_00a9a3e4:
    uVar6 = lVar4 + uVar6;
    uVar7 = (ulong)*(ushort *)((long)param_1 + 0x14);
    if (uVar7 <= uVar6) goto LAB_00a9a254;
LAB_00a9a3f4:
    if ((uVar15 >> 0x18 & 1) == 0) {
      uVar12 = uVar15 >> 0x1d & 3;
      uVar1 = (int)uVar7 - (int)uVar6;
      uVar16 = uVar1;
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          uVar16 = 0;
        }
      }
      else if (uVar12 == 2) {
        uVar16 = uVar1 >> 1 & 0x7fff;
      }
      uVar17 = *param_1;
      lVar4 = param_1[1];
      uVar12 = 0;
      do {
        if ((uVar16 & 0xffff) <= (uVar12 & 0xffff)) {
          uVar6 = FUN_00aa4314(uVar17,lVar4,uVar9,param_3,param_4);
          if (((uVar6 & 1) == 0) &&
             (uVar6 = (**(code **)(lVar4 + 0x18))(uVar17,param_5,param_6), (uVar6 & 1) == 0)) {
            uVar13 = 0;
            goto LAB_00a9a550;
          }
          break;
        }
        uVar12 = uVar12 + 1;
        uVar6 = (**(code **)(lVar4 + 0x20))(uVar17,uVar15 & 0x1fffff);
      } while ((uVar6 & 1) == 0);
    }
    else {
      lVar4 = param_1[1];
      uVar17 = param_1[2];
      uVar14 = *param_1;
      *(uint *)(param_1 + 2) = (uint)uVar17 & 0x9fe00000 | 0x20000030;
      uVar5 = FUN_00aa4314(uVar14,lVar4,uVar9,param_3,param_4);
      if ((uVar5 & 1) == 0) {
        uVar15 = 0;
        do {
          if (((int)uVar7 - (int)uVar6 & 0xffffU) <= (uVar15 & 0xffff)) {
            uVar6 = (**(code **)(lVar4 + 0x18))(uVar14,param_5,param_6);
            if ((uVar6 & 1) == 0) {
              uVar12 = 0;
              param_1[2] = uVar17;
              goto LAB_00a9a524;
            }
            break;
          }
          uVar15 = uVar15 + 1;
          uVar5 = (**(code **)(lVar4 + 0x20))(uVar14,0x30);
        } while ((uVar5 & 1) == 0);
      }
    }
  }
  uVar12 = 1;
LAB_00a9a524:
  return (ulong)uVar12;
  while( true ) {
    uVar13 = uVar13 + 1;
    uVar6 = (**(code **)(lVar4 + 0x20))(uVar17,uVar15 & 0x1fffff);
    if ((uVar6 & 1) != 0) break;
LAB_00a9a550:
    bVar3 = (uVar1 - uVar16 & 0xffff) <= (uVar13 & 0xffff);
    uVar12 = (uint)!bVar3;
    if (bVar3) break;
  }
  goto LAB_00a9a524;
}


// ===== 00a9a57c  FUN_00a9a57c =====

ulong FUN_00a9a57c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 local_70;
  ulong uStack_68;
  long local_60;
  long lStack_58;
  
  uVar3 = *(ushort *)((long)param_1 + 0x14);
  uVar10 = (uint)uVar3;
  if (uVar3 == 0) {
    uVar6 = FUN_00a9a7ac(*param_1,param_1[1]);
    return uVar6;
  }
  local_70 = *param_2;
  uVar6 = param_2[1];
  uVar13 = param_1[2];
  lVar1 = param_2[2];
  lVar11 = param_2[3];
  uVar12 = (uint)uVar13;
  uStack_68 = uVar6;
  local_60 = lVar1;
  lStack_58 = lVar11;
  if ((uVar12 >> 0x18 & 1) != 0) {
    uVar9 = (**(code **)(param_1[1] + 0x18))(*param_1,local_70,uVar6);
    if ((uVar9 & 1) != 0) {
      return 1;
    }
    local_70 = 1;
    uVar10 = 0;
    if ((uint)(ushort)uVar6 <= (uint)uVar3) {
      uVar10 = (uint)uVar3 - (uint)(ushort)uVar6;
    }
    uVar12 = uVar12 & 0x9fe00000 | 0x20000030;
    *(uint *)(param_1 + 2) = uVar12;
    uStack_68 = 0;
  }
  uVar6 = uStack_68;
  if (lVar11 != 0) {
    puVar7 = (ulong *)(lVar1 + 8);
    do {
      if ((short)puVar7[-1] == 0) {
        uVar9 = *puVar7;
      }
      else if ((short)puVar7[-1] == 1) {
        uVar3 = *(ushort *)((long)puVar7 + -6);
        if (uVar3 == 0) {
          uVar9 = 1;
        }
        else {
          uVar8 = (uint)uVar3;
          uVar9 = (ulong)(((uVar3 + 0x5fff6 & uVar8 + 0x7ff9c ^ uVar8 + 0xdfc18 & uVar8 + 0x7d8f0)
                          >> 0x11) + 1);
        }
      }
      else {
        uVar9 = puVar7[1];
      }
      bVar4 = CARRY8(uVar6,uVar9);
      uVar6 = uVar6 + uVar9;
      puVar7 = puVar7 + 3;
      if (bVar4) {
        uVar6 = 0xffffffffffffffff;
      }
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if (uVar6 < (ushort)uVar10) {
    uVar8 = uVar12 >> 0x1d & 3;
    uVar10 = uVar10 - (int)uVar6;
    uVar14 = uVar10;
    if (uVar8 < 2) {
      if (uVar8 == 0) {
        uVar14 = 0;
      }
    }
    else if (uVar8 == 2) {
      uVar14 = uVar10 >> 1 & 0x7fff;
    }
    uVar2 = *param_1;
    lVar1 = param_1[1];
    uVar8 = 0;
    while ((uVar8 & 0xffff) < (uVar14 & 0xffff)) {
      uVar8 = uVar8 + 1;
      uVar6 = (**(code **)(lVar1 + 0x20))(uVar2,uVar12 & 0x1fffff);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
    }
    uVar6 = FUN_00a9a7ac(uVar2,lVar1,&local_70);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    uVar8 = 0;
    do {
      bVar4 = (uVar10 - uVar14 & 0xffff) <= (uVar8 & 0xffff);
      uVar6 = (ulong)!bVar4;
      if (bVar4) break;
      uVar8 = uVar8 + 1;
      iVar5 = (**(code **)(lVar1 + 0x20))(uVar2,uVar12 & 0x1fffff);
    } while (iVar5 == 0);
  }
  else {
    uVar6 = FUN_00a9a7ac(*param_1,param_1[1],&local_70);
    uVar6 = uVar6 & 0xffffffff;
  }
  param_1[2] = uVar13;
  return uVar6;
}


// ===== 00a9a7ac  FUN_00a9a7ac =====

undefined8 FUN_00a9a7ac(undefined8 param_1,long param_2,undefined8 *param_3)

{
  ushort uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  short *psVar7;
  long lVar8;
  short *psVar9;
  code *pcVar11;
  byte abStack_70 [8];
  undefined4 local_68;
  undefined1 local_64;
  short *psVar10;
  
  if ((param_3[1] == 0) ||
     (uVar3 = (**(code **)(param_2 + 0x18))(param_1,*param_3), (uVar3 & 1) == 0)) {
    lVar8 = param_3[3];
    if (lVar8 != 0) {
      psVar7 = (short *)param_3[2];
      psVar9 = psVar7;
      do {
        psVar10 = psVar9 + 0xc;
        if (*psVar9 == 0) {
          uVar3 = *(ulong *)(psVar9 + 4);
          if (0x40 < uVar3) {
            pcVar11 = *(code **)(param_2 + 0x18);
            do {
              uVar5 = (*pcVar11)(param_1,&DAT_00390724,0x40);
              if ((uVar5 & 1) != 0) goto LAB_00a9a7f4;
              uVar3 = uVar3 - 0x40;
            } while (0x40 < uVar3);
LAB_00a9a9e0:
            uVar3 = (**(code **)(param_2 + 0x18))(param_1,&DAT_00390724,uVar3);
            goto joined_r0x00a9a9d4;
          }
          if (uVar3 != 0) goto LAB_00a9a9e0;
        }
        else {
          if (*psVar9 == 1) {
            uVar1 = psVar9[1];
            uVar6 = (uint)uVar1;
            local_64 = 0;
            local_68 = 0;
            uVar3 = (ulong)(((uVar1 + 0x5fff6 & uVar1 + 0x7ff9c ^ uVar6 + 0xdfc18 & uVar6 + 0x7d8f0)
                            >> 0x11) + 1);
            if (uVar6 == 0) {
              uVar3 = 1;
            }
            cVar2 = (char)(uVar6 / 10);
            abStack_70[uVar3 + 7] = (char)uVar1 + cVar2 * -10 | 0x30;
            if ((((uVar3 != 1) &&
                 (abStack_70[uVar3 + 6] = cVar2 + (char)((uVar6 / 10) / 10) * -10 | 0x30, uVar3 != 2
                 )) && (uVar6 = (uVar1 >> 2) / 0x19,
                       abStack_70[uVar3 + 5] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30,
                       uVar3 != 3)) &&
               (((uVar6 = (uVar1 >> 3) / 0x7d,
                 abStack_70[uVar3 + 4] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30, uVar3 != 4
                 && (abStack_70[uVar3 + 3] = (byte)((uVar1 >> 4) / 0x271) | 0x30, uVar3 != 5)) &&
                ((abStack_70[uVar3 + 2] = 0x30, uVar3 != 6 &&
                 (abStack_70[uVar3 + 1] = 0x30, uVar3 != 7)))))) {
              abStack_70[uVar3] = 0x30;
            }
            uVar3 = (**(code **)(param_2 + 0x18))(param_1,&local_68);
          }
          else {
            uVar3 = (**(code **)(param_2 + 0x18))
                              (param_1,*(undefined8 *)(psVar9 + 4),*(undefined8 *)(psVar9 + 8));
          }
joined_r0x00a9a9d4:
          if ((uVar3 & 1) != 0) goto LAB_00a9a7f4;
        }
        psVar9 = psVar10;
      } while (psVar10 != psVar7 + lVar8 * 0xc);
    }
    uVar4 = 0;
  }
  else {
LAB_00a9a7f4:
    uVar4 = 1;
  }
  return uVar4;
}


// ===== 00a9aa20  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish */

undefined8 __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
          (undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_80;
  long lStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined1 local_34 [4];
  
  uVar4 = *param_1;
  lVar1 = param_1[1];
  pcVar5 = *(code **)(lVar1 + 0x18);
  uVar3 = (*pcVar5)(uVar4);
  if ((uVar3 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x12) < '\0') {
      uVar3 = (*pcVar5)(uVar4,&DAT_003905ab,2);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      local_70 = local_34;
      uStack_58 = param_1[2];
      local_34[0] = 1;
      local_60 = &DAT_00aff790;
      local_80 = uVar4;
      lStack_78 = lVar1;
      local_68 = (undefined1 *)&local_80;
      iVar2 = (**(code **)(param_5 + 0x18))(param_4,&local_68);
      if (iVar2 != 0) {
        return 1;
      }
      uVar3 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
    }
    else {
      uVar3 = (*pcVar5)(uVar4,&DAT_003905aa,1);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      uVar3 = (**(code **)(param_5 + 0x18))(param_4,param_1);
    }
    if ((uVar3 & 1) == 0) {
      if (((param_3 == 0) && (-1 < *(char *)((long)param_1 + 0x12))) &&
         (iVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_003905ad,1), iVar2 != 0)) {
        return 1;
      }
      uVar4 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_003905a9,1);
      return uVar4;
    }
  }
  return 1;
}


// ===== 00a9ab88  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish */

undefined8 __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field2_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
          ,undefined8 param_6,long param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined1 local_34 [4];
  
  uVar3 = *param_1;
  pcVar4 = *(code **)(param_1[1] + 0x18);
  uVar2 = (*pcVar4)(uVar3);
  if ((uVar2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x12) < '\0') {
      uVar2 = (*pcVar4)(uVar3,&DAT_003905ab,2);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uStack_78 = param_1[1];
      local_80 = *param_1;
      local_70 = local_34;
      uStack_58 = param_1[2];
      local_34[0] = 1;
      local_60 = &DAT_00aff790;
      local_68 = (undefined1 *)&local_80;
      iVar1 = (**(code **)(param_5 + 0x18))(param_4,&local_68);
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
    }
    else {
      uVar2 = (*pcVar4)(uVar3,&DAT_003905aa,1);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uVar2 = (**(code **)(param_5 + 0x18))(param_4,param_1);
    }
    if ((uVar2 & 1) == 0) {
      if (*(char *)((long)param_1 + 0x12) < '\0') {
        uStack_78 = param_1[1];
        local_80 = *param_1;
        local_70 = local_34;
        uStack_58 = param_1[2];
        local_34[0] = 1;
        local_60 = &DAT_00aff790;
        local_68 = (undefined1 *)&local_80;
        iVar1 = (**(code **)(param_7 + 0x18))(param_6,&local_68);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
      }
      else {
        uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_0039059b,2);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        uVar2 = (**(code **)(param_7 + 0x18))(param_6,param_1);
      }
      if ((uVar2 & 1) == 0) {
        uVar3 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_003905a9,1);
        return uVar3;
      }
    }
  }
  return 1;
}


// ===== 00a9ad60  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field3_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field3_finish */

undefined8 __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field3_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
          ,undefined8 param_6,long param_7,undefined8 param_8,long param_9)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 local_6c [4];
  undefined1 *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  uVar3 = *param_1;
  pcVar4 = *(code **)(param_1[1] + 0x18);
  uVar2 = (*pcVar4)(uVar3);
  if ((uVar2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x12) < '\0') {
      uVar2 = (*pcVar4)(uVar3,&DAT_003905ab,2);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uStack_88 = param_1[1];
      local_90 = *param_1;
      local_80 = local_6c;
      uStack_58 = param_1[2];
      local_6c[0] = 1;
      local_60 = &DAT_00aff790;
      local_68 = (undefined1 *)&local_90;
      iVar1 = (**(code **)(param_5 + 0x18))(param_4,&local_68);
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
    }
    else {
      uVar2 = (*pcVar4)(uVar3,&DAT_003905aa,1);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uVar2 = (**(code **)(param_5 + 0x18))(param_4,param_1);
    }
    if ((uVar2 & 1) == 0) {
      if (*(char *)((long)param_1 + 0x12) < '\0') {
        uStack_88 = param_1[1];
        local_90 = *param_1;
        local_80 = local_6c;
        uStack_58 = param_1[2];
        local_6c[0] = 1;
        local_60 = &DAT_00aff790;
        local_68 = (undefined1 *)&local_90;
        iVar1 = (**(code **)(param_7 + 0x18))(param_6,&local_68);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
      }
      else {
        uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_0039059b,2);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        uVar2 = (**(code **)(param_7 + 0x18))(param_6,param_1);
      }
      if ((uVar2 & 1) == 0) {
        if (*(char *)((long)param_1 + 0x12) < '\0') {
          uStack_88 = param_1[1];
          local_90 = *param_1;
          local_80 = local_6c;
          uStack_58 = param_1[2];
          local_6c[0] = 1;
          local_60 = &DAT_00aff790;
          local_68 = (undefined1 *)&local_90;
          iVar1 = (**(code **)(param_9 + 0x18))(param_8,&local_68);
          if (iVar1 != 0) {
            return 1;
          }
          uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
        }
        else {
          uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_0039059b,2);
          if ((uVar2 & 1) != 0) {
            return 1;
          }
          uVar2 = (**(code **)(param_9 + 0x18))(param_8,param_1);
        }
        if ((uVar2 & 1) == 0) {
          uVar3 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_003905a9,1);
          return uVar3;
        }
      }
    }
  }
  return 1;
}


// ===== 00a9afdc  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field4_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field4_finish */

undefined8 __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field4_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
          ,undefined8 param_6,long param_7,undefined8 param_8,long param_9,undefined8 param_10,
          long param_11)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 local_6c [4];
  undefined1 *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  uVar3 = *param_1;
  pcVar4 = *(code **)(param_1[1] + 0x18);
  uVar2 = (*pcVar4)(uVar3);
  if ((uVar2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x12) < '\0') {
      uVar2 = (*pcVar4)(uVar3,&DAT_003905ab,2);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uStack_88 = param_1[1];
      local_90 = *param_1;
      local_80 = local_6c;
      uStack_58 = param_1[2];
      local_6c[0] = 1;
      local_60 = &DAT_00aff790;
      local_68 = (undefined1 *)&local_90;
      iVar1 = (**(code **)(param_5 + 0x18))(param_4,&local_68);
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
    }
    else {
      uVar2 = (*pcVar4)(uVar3,&DAT_003905aa,1);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uVar2 = (**(code **)(param_5 + 0x18))(param_4,param_1);
    }
    if ((uVar2 & 1) == 0) {
      if (*(char *)((long)param_1 + 0x12) < '\0') {
        uStack_88 = param_1[1];
        local_90 = *param_1;
        local_80 = local_6c;
        uStack_58 = param_1[2];
        local_6c[0] = 1;
        local_60 = &DAT_00aff790;
        local_68 = (undefined1 *)&local_90;
        iVar1 = (**(code **)(param_7 + 0x18))(param_6,&local_68);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
      }
      else {
        uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_0039059b,2);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        uVar2 = (**(code **)(param_7 + 0x18))(param_6,param_1);
      }
      if ((uVar2 & 1) == 0) {
        if (*(char *)((long)param_1 + 0x12) < '\0') {
          uStack_88 = param_1[1];
          local_90 = *param_1;
          local_80 = local_6c;
          uStack_58 = param_1[2];
          local_6c[0] = 1;
          local_60 = &DAT_00aff790;
          local_68 = (undefined1 *)&local_90;
          iVar1 = (**(code **)(param_9 + 0x18))(param_8,&local_68);
          if (iVar1 != 0) {
            return 1;
          }
          uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
        }
        else {
          uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_0039059b,2);
          if ((uVar2 & 1) != 0) {
            return 1;
          }
          uVar2 = (**(code **)(param_9 + 0x18))(param_8,param_1);
        }
        if ((uVar2 & 1) == 0) {
          if (*(char *)((long)param_1 + 0x12) < '\0') {
            uStack_88 = param_1[1];
            local_90 = *param_1;
            local_80 = local_6c;
            uStack_58 = param_1[2];
            local_6c[0] = 1;
            local_60 = &DAT_00aff790;
            local_68 = (undefined1 *)&local_90;
            iVar1 = (**(code **)(param_11 + 0x18))(param_10,&local_68);
            if (iVar1 != 0) {
              return 1;
            }
            uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
          }
          else {
            uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_0039059b,2);
            if ((uVar2 & 1) != 0) {
              return 1;
            }
            uVar2 = (**(code **)(param_11 + 0x18))(param_10,param_1);
          }
          if ((uVar2 & 1) == 0) {
            uVar3 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_003905a9,1);
            return uVar3;
          }
        }
      }
    }
  }
  return 1;
}


// ===== 00a9b2f8  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field5_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field5_finish */

undefined8 __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field5_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
          ,undefined8 param_6,long param_7,undefined8 param_8,long param_9,undefined8 param_10,
          long param_11,undefined8 param_12,long param_13)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 local_6c [4];
  undefined1 *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  uVar3 = *param_1;
  pcVar4 = *(code **)(param_1[1] + 0x18);
  uVar2 = (*pcVar4)(uVar3);
  if ((uVar2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x12) < '\0') {
      uVar2 = (*pcVar4)(uVar3,&DAT_003905ab,2);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uStack_88 = param_1[1];
      local_90 = *param_1;
      local_80 = local_6c;
      uStack_58 = param_1[2];
      local_6c[0] = 1;
      local_60 = &DAT_00aff790;
      local_68 = (undefined1 *)&local_90;
      iVar1 = (**(code **)(param_5 + 0x18))(param_4,&local_68);
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
    }
    else {
      uVar2 = (*pcVar4)(uVar3,&DAT_003905aa,1);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uVar2 = (**(code **)(param_5 + 0x18))(param_4,param_1);
    }
    if ((uVar2 & 1) == 0) {
      if (*(char *)((long)param_1 + 0x12) < '\0') {
        uStack_88 = param_1[1];
        local_90 = *param_1;
        local_80 = local_6c;
        uStack_58 = param_1[2];
        local_6c[0] = 1;
        local_60 = &DAT_00aff790;
        local_68 = (undefined1 *)&local_90;
        iVar1 = (**(code **)(param_7 + 0x18))(param_6,&local_68);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
      }
      else {
        uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_0039059b,2);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        uVar2 = (**(code **)(param_7 + 0x18))(param_6,param_1);
      }
      if ((uVar2 & 1) == 0) {
        if (*(char *)((long)param_1 + 0x12) < '\0') {
          uStack_88 = param_1[1];
          local_90 = *param_1;
          local_80 = local_6c;
          uStack_58 = param_1[2];
          local_6c[0] = 1;
          local_60 = &DAT_00aff790;
          local_68 = (undefined1 *)&local_90;
          iVar1 = (**(code **)(param_9 + 0x18))(param_8,&local_68);
          if (iVar1 != 0) {
            return 1;
          }
          uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
        }
        else {
          uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_0039059b,2);
          if ((uVar2 & 1) != 0) {
            return 1;
          }
          uVar2 = (**(code **)(param_9 + 0x18))(param_8,param_1);
        }
        if ((uVar2 & 1) == 0) {
          if (*(char *)((long)param_1 + 0x12) < '\0') {
            uStack_88 = param_1[1];
            local_90 = *param_1;
            local_80 = local_6c;
            uStack_58 = param_1[2];
            local_6c[0] = 1;
            local_60 = &DAT_00aff790;
            local_68 = (undefined1 *)&local_90;
            iVar1 = (**(code **)(param_11 + 0x18))(param_10,&local_68);
            if (iVar1 != 0) {
              return 1;
            }
            uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
          }
          else {
            uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_0039059b,2);
            if ((uVar2 & 1) != 0) {
              return 1;
            }
            uVar2 = (**(code **)(param_11 + 0x18))(param_10,param_1);
          }
          if ((uVar2 & 1) == 0) {
            if (*(char *)((long)param_1 + 0x12) < '\0') {
              uStack_88 = param_1[1];
              local_90 = *param_1;
              local_80 = local_6c;
              uStack_58 = param_1[2];
              local_6c[0] = 1;
              local_60 = &DAT_00aff790;
              local_68 = (undefined1 *)&local_90;
              iVar1 = (**(code **)(param_13 + 0x18))(param_12,&local_68);
              if (iVar1 != 0) {
                return 1;
              }
              uVar2 = (**(code **)(local_60 + 0x18))(local_68,&DAT_003905a2,2);
            }
            else {
              uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_0039059b,2);
              if ((uVar2 & 1) != 0) {
                return 1;
              }
              uVar2 = (**(code **)(param_13 + 0x18))(param_12,param_1);
            }
            if ((uVar2 & 1) == 0) {
              uVar3 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_003905a9,1);
              return uVar3;
            }
          }
        }
      }
    }
  }
  return 1;
}


// ===== 00a9b6b4  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_fields_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_fields_finish */

ulong __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_tuple_fields_finish
          (undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,long param_5)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 local_7c [4];
  undefined1 *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  uVar1 = *param_1;
  pcVar5 = *(code **)(param_1[1] + 0x18);
  uVar3 = (*pcVar5)(uVar1);
  if (param_5 == 0) {
    return uVar3;
  }
  if ((uVar3 & 1) == 0) {
    if (-1 < *(char *)((long)param_1 + 0x12)) {
      uVar4 = (*pcVar5)(uVar1,&DAT_003905aa,1);
      uVar3 = 1;
      if ((uVar4 & 1) == 0) {
        uVar3 = (**(code **)(param_4[1] + 0x18))(*param_4,param_1);
      }
      goto LAB_00a9b7b8;
    }
    uVar4 = (*pcVar5)(uVar1,&DAT_003905ab,2);
    uVar3 = 1;
    if ((uVar4 & 1) != 0) goto LAB_00a9b7b8;
    local_90 = local_7c;
    local_7c[0] = 1;
    uStack_98 = param_1[1];
    local_a0 = *param_1;
    uStack_68 = param_1[2];
    local_70 = &DAT_00aff790;
    local_78 = (undefined1 *)&local_a0;
    uVar3 = (**(code **)(param_4[1] + 0x18))(*param_4,&local_78);
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(local_70 + 0x18))(local_78,&DAT_003905a2,2);
      goto LAB_00a9b7b8;
    }
  }
  uVar3 = 1;
LAB_00a9b7b8:
  if (param_5 != 1) {
    plVar6 = param_4 + 3;
    lVar7 = param_5 * 0x10 + -0x10;
    do {
      while ((uVar3 & 1) != 0) {
LAB_00a9b7f8:
        uVar3 = 1;
joined_r0x00a9b804:
        plVar6 = plVar6 + 2;
        lVar7 = lVar7 + -0x10;
        if (lVar7 == 0) goto LAB_00a9b7c0;
      }
      if (*(char *)((long)param_1 + 0x12) < '\0') {
        uStack_68 = param_1[2];
        uStack_98 = param_1[1];
        local_a0 = *param_1;
        local_7c[0] = 1;
        local_70 = &DAT_00aff790;
        local_90 = local_7c;
        local_78 = (undefined1 *)&local_a0;
        iVar2 = (**(code **)(*plVar6 + 0x18))(plVar6[-1],&local_78);
        if (iVar2 != 0) goto LAB_00a9b7f8;
        uVar3 = (**(code **)(local_70 + 0x18))(local_78,&DAT_003905a2,2);
        goto joined_r0x00a9b804;
      }
      uVar3 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_0039059b,2);
      if ((uVar3 & 1) != 0) goto LAB_00a9b7f8;
      uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6[-1],param_1);
      lVar7 = lVar7 + -0x10;
      plVar6 = plVar6 + 2;
    } while (lVar7 != 0);
  }
LAB_00a9b7c0:
  if ((uVar3 & 1) == 0) {
    if ((((param_3 == 0) && (param_5 == 1)) && (-1 < *(char *)((long)param_1 + 0x12))) &&
       (iVar2 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_003905ad,1), iVar2 != 0)) {
      return 1;
    }
    uVar3 = (**(code **)(param_1[1] + 0x18))(*param_1,&DAT_003905a9,1);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 00a9b914  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish */

byte __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_50;
  byte local_48;
  byte local_47;
  
  local_48 = (**(code **)(param_1[1] + 0x18))(*param_1);
  local_47 = 0;
  local_50 = param_1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_50,param_4,param_5,param_6,param_7);
  bVar1 = local_47 | local_48;
  if ((local_47 == 1) && ((local_48 & 1) == 0)) {
    if (*(char *)((long)local_50 + 0x12) < '\0') {
      uVar2 = *local_50;
      lVar5 = local_50[1];
      puVar3 = &DAT_00390597;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_50;
      lVar5 = local_50[1];
      puVar3 = &DAT_00390705;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 00a9b9dc  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish */

byte __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_70;
  byte local_68;
  byte local_67;
  
  local_68 = (**(code **)(param_1[1] + 0x18))(*param_1);
  local_67 = 0;
  local_70 = param_1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_70,param_4,param_5,param_6,param_7);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_70,param_8,param_9,param_10,param_11);
  bVar1 = local_67 | local_68;
  if ((local_67 == 1) && ((local_68 & 1) == 0)) {
    if (*(char *)((long)local_70 + 0x12) < '\0') {
      uVar2 = *local_70;
      lVar5 = local_70[1];
      puVar3 = &DAT_00390597;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_70;
      lVar5 = local_70[1];
      puVar3 = &DAT_00390705;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 00a9bad8  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish */

byte __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_70;
  byte local_68;
  byte local_67;
  
  local_68 = (**(code **)(param_1[1] + 0x18))(*param_1);
  local_67 = 0;
  local_70 = param_1;
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (&local_70,param_4,param_5,param_6,param_7);
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar2,param_8,param_9,param_10,param_11);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar2,param_12,param_13,param_14,param_15);
  bVar1 = local_67 | local_68;
  if ((local_67 == 1) && ((local_68 & 1) == 0)) {
    if (*(char *)((long)local_70 + 0x12) < '\0') {
      uVar2 = *local_70;
      lVar5 = local_70[1];
      puVar3 = &DAT_00390597;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_70;
      lVar5 = local_70[1];
      puVar3 = &DAT_00390705;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 00a9bbf8  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field4_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field4_finish */

byte __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_struct_field4_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
          undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_70;
  byte local_68;
  byte local_67;
  
  local_68 = (**(code **)(param_1[1] + 0x18))(*param_1);
  local_67 = 0;
  local_70 = param_1;
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (&local_70,param_4,param_5,param_6,param_7);
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar2,param_8,param_9,param_10,param_11);
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar2,param_12,param_13,param_14,param_15);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar2,param_16,param_17,param_18,param_19);
  bVar1 = local_67 | local_68;
  if ((local_67 == 1) && ((local_68 & 1) == 0)) {
    if (*(char *)((long)local_70 + 0x12) < '\0') {
      uVar2 = *local_70;
      lVar5 = local_70[1];
      puVar3 = &DAT_00390597;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_70;
      lVar5 = local_70[1];
      puVar3 = &DAT_00390705;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 00a9bd38  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field5_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field5_finish */

byte __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_struct_field5_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
          undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
          undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_78;
  byte local_70;
  byte local_6f;
  
  local_70 = (**(code **)(param_1[1] + 0x18))(*param_1);
  local_6f = 0;
  local_78 = param_1;
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (&local_78,param_4,param_5,param_6,param_7);
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar2,param_8,param_9,param_10,param_11);
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar2,param_12,param_13,param_14,param_15);
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar2,param_16,param_17,param_18,param_19);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar2,param_20,param_21,param_22,param_23);
  bVar1 = local_6f | local_70;
  if ((local_6f == 1) && ((local_70 & 1) == 0)) {
    if (*(char *)((long)local_78 + 0x12) < '\0') {
      uVar2 = *local_78;
      lVar5 = local_78[1];
      puVar3 = &DAT_00390597;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_78;
      lVar5 = local_78[1];
      puVar3 = &DAT_00390705;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 00a9be9c  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_fields_finish =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_struct_fields_finish */

byte __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_struct_fields_finish
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
          undefined8 *param_5,long param_6,undefined8 *param_7)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_48;
  undefined8 *local_40;
  byte local_38;
  byte local_37;
  
  local_48 = param_5;
  local_40 = param_7;
  if (param_5 == param_7) {
    local_38 = (**(code **)(param_1[1] + 0x18))(*param_1);
    local_37 = 0;
    bVar1 = local_38;
    if (param_5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)(param_4 + 8);
      local_40 = param_1;
      do {
        <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                  (&local_40,puVar6[-1],*puVar6,param_6,&DAT_00aff838);
        param_5 = (undefined8 *)((long)param_5 + -1);
        puVar6 = puVar6 + 2;
        param_6 = param_6 + 0x10;
      } while (param_5 != (undefined8 *)0x0);
      bVar1 = local_37 | local_38;
      if ((local_37 == 1) && ((local_38 & 1) == 0)) {
        if (*(char *)((long)local_40 + 0x12) < '\0') {
          uVar2 = *local_40;
          lVar5 = local_40[1];
          puVar3 = &DAT_00390597;
          uVar4 = 1;
        }
        else {
          uVar2 = *local_40;
          lVar5 = local_40[1];
          puVar3 = &DAT_00390705;
          uVar4 = 2;
        }
        bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
      }
    }
    return bVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::assert_failed<usize,usize>
            (0,&local_48,&local_40,0,param_5,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff858);
}


// ===== 00a9bf9c  <core::fmt::[a]::core::fmt::Formatter>::pad =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::pad */

ulong __rustcall
<core::fmt::[a]::core::fmt::Formatter>::pad(undefined8 *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint3 uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 0x18000000) == 0) goto LAB_00a9c1e0;
  if ((uVar1 >> 0x1c & 1) == 0) {
    if (param_3 < (byte *)0x20) {
      if (param_3 == (byte *)0x0) {
        uVar7 = 0;
      }
      else {
        if (param_3 < (byte *)0x8) {
          pbVar8 = (byte *)0x0;
          uVar7 = 0;
        }
        else {
          pbVar8 = (byte *)((ulong)param_3 & 0x18);
          uVar15 = NEON_cmgt(*(undefined8 *)param_2,0xbfbfbfbfbfbfbfbf,1);
          uVar4 = CONCAT12((char)((ulong)uVar15 >> 8),(short)uVar15) & 0xff00ff;
          uVar7 = (ulong)((byte)((ulong)uVar15 >> 0x30) & 1);
          uVar6 = (ulong)((byte)((ulong)uVar15 >> 0x38) & 1);
          uVar18 = (ulong)((byte)((ulong)uVar15 >> 0x20) & 1);
          uVar19 = (ulong)((byte)((ulong)uVar15 >> 0x28) & 1);
          uVar16 = (ulong)((byte)((ulong)uVar15 >> 0x10) & 1);
          uVar17 = (ulong)((byte)((ulong)uVar15 >> 0x18) & 1);
          uVar20 = (ulong)((byte)uVar4 & 1);
          uVar21 = (ulong)((byte)(uVar4 >> 0x10) & 1);
          if (pbVar8 != (byte *)0x8) {
            uVar15 = NEON_cmgt(*(undefined8 *)(param_2 + 8),0xbfbfbfbfbfbfbfbf,1);
            uVar4 = CONCAT12((char)((ulong)uVar15 >> 8),(short)uVar15) & 0xff00ff;
            uVar7 = uVar7 + ((byte)((ulong)uVar15 >> 0x30) & 1);
            uVar6 = uVar6 + ((byte)((ulong)uVar15 >> 0x38) & 1);
            uVar16 = uVar16 + ((byte)((ulong)uVar15 >> 0x10) & 1);
            uVar17 = uVar17 + ((byte)((ulong)uVar15 >> 0x18) & 1);
            uVar20 = uVar20 + ((byte)uVar4 & 1);
            uVar21 = uVar21 + ((byte)(uVar4 >> 0x10) & 1);
            uVar18 = uVar18 + ((byte)((ulong)uVar15 >> 0x20) & 1);
            uVar19 = uVar19 + ((byte)((ulong)uVar15 >> 0x28) & 1);
            if (pbVar8 != (byte *)0x10) {
              uVar15 = NEON_cmgt(*(undefined8 *)(param_2 + 0x10),0xbfbfbfbfbfbfbfbf,1);
              uVar4 = CONCAT12((char)((ulong)uVar15 >> 8),(short)uVar15) & 0xff00ff;
              uVar7 = uVar7 + ((byte)((ulong)uVar15 >> 0x30) & 1);
              uVar6 = uVar6 + ((byte)((ulong)uVar15 >> 0x38) & 1);
              uVar16 = uVar16 + ((byte)((ulong)uVar15 >> 0x10) & 1);
              uVar17 = uVar17 + ((byte)((ulong)uVar15 >> 0x18) & 1);
              uVar20 = uVar20 + ((byte)uVar4 & 1);
              uVar21 = uVar21 + ((byte)(uVar4 >> 0x10) & 1);
              uVar18 = uVar18 + ((byte)((ulong)uVar15 >> 0x20) & 1);
              uVar19 = uVar19 + ((byte)((ulong)uVar15 >> 0x28) & 1);
            }
          }
          uVar7 = uVar20 + uVar18 + uVar16 + uVar7 + uVar21 + uVar19 + uVar17 + uVar6;
          if (param_3 == pbVar8) goto LAB_00a9c1b4;
        }
        lVar9 = (long)param_3 - (long)pbVar8;
        pbVar8 = param_2 + (long)pbVar8;
        do {
          iVar10 = (int)(char)*pbVar8;
          if (iVar10 != -0x41 && iVar10 + 0x41 < 0 == SCARRY4(iVar10,0x41)) {
            uVar7 = uVar7 + 1;
          }
          lVar9 = lVar9 + -1;
          pbVar8 = pbVar8 + 1;
        } while (lVar9 != 0);
      }
    }
    else {
      uVar7 = core::str::count::do_count_chars(param_2,param_3);
    }
  }
  else {
    uVar7 = (ulong)*(ushort *)((long)param_1 + 0x16);
    if (uVar7 == 0) {
      param_3 = (byte *)0x0;
      uVar7 = 0;
    }
    else {
      pbVar8 = param_2 + (long)param_3;
      param_3 = (byte *)0x0;
      uVar6 = uVar7;
      pbVar11 = param_2;
      do {
        if (pbVar11 == pbVar8) break;
        pbVar12 = pbVar11 + 1;
        bVar2 = *pbVar11;
        if ((char)bVar2 < '\0') {
          if (bVar2 < 0xe0) {
            pbVar12 = pbVar11 + 2;
          }
          else {
            lVar9 = 3;
            if (0xef < bVar2) {
              lVar9 = 4;
            }
            pbVar12 = pbVar11 + lVar9;
          }
        }
        uVar6 = uVar6 - 1;
        param_3 = pbVar12 + ((long)param_3 - (long)pbVar11);
        pbVar11 = pbVar12;
      } while (uVar6 != 0);
      uVar7 = uVar7 - uVar6;
    }
  }
LAB_00a9c1b4:
  if (uVar7 < *(ushort *)((long)param_1 + 0x14)) {
    uVar14 = uVar1 >> 0x1d & 3;
    uVar13 = 0;
    uVar3 = (uint)*(ushort *)((long)param_1 + 0x14) - (int)uVar7;
    if (uVar14 < 2) {
      if (uVar14 != 0) {
        uVar13 = uVar3;
      }
    }
    else if (uVar14 == 2) {
      uVar13 = uVar3 >> 1 & 0x7fff;
    }
    uVar15 = *param_1;
    lVar9 = param_1[1];
    uVar14 = 0;
    do {
      if ((uVar13 & 0xffff) <= (uVar14 & 0xffff)) {
        uVar7 = (**(code **)(lVar9 + 0x18))(uVar15,param_2,param_3);
        if ((uVar7 & 1) != 0) {
          return 1;
        }
        uVar14 = 0;
        do {
          bVar5 = (uVar3 - uVar13 & 0xffff) <= (uVar14 & 0xffff);
          uVar7 = (ulong)!bVar5;
          if (bVar5) {
            return uVar7;
          }
          uVar14 = uVar14 + 1;
          uVar6 = (**(code **)(lVar9 + 0x20))(uVar15,uVar1 & 0x1fffff);
        } while ((uVar6 & 1) == 0);
        return uVar7;
      }
      uVar14 = uVar14 + 1;
      uVar7 = (**(code **)(lVar9 + 0x20))(uVar15,uVar1 & 0x1fffff);
    } while ((uVar7 & 1) == 0);
    return 1;
  }
LAB_00a9c1e0:
                    /* WARNING: Could not recover jumptable at 0x00a9c204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1[1] + 0x18))(*param_1,param_2,param_3);
  return uVar7;
}


// ===== 00a9c2b0  <core::fmt::[a]::core::fmt::Formatter>::fill =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::fill */

uint __rustcall <core::fmt::[a]::core::fmt::Formatter>::fill(long param_1)

{
  return *(uint *)(param_1 + 0x10) & 0x1fffff;
}


// ===== 00a9c2bc  <core::fmt::[a]::core::fmt::Formatter>::debug_map =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_map */

void __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_map(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_00390c70,1);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined2 *)((long)param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0xb) = 1;
  return;
}


// ===== 00a9c310  <core::fmt::[a]::core::fmt::Formatter>::debug_set =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::debug_set */

void __rustcall
<core::fmt::[a]::core::fmt::Formatter>::debug_set(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_00390c70,1);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}


// ===== 00a9c354  <core::fmt::[a]::core::fmt::Formatter>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::[a]::core::fmt::Formatter>::write_str */

void __rustcall <core::fmt::[a]::core::fmt::Formatter>::write_str(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a9c35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 00a9c360  <core::fmt::num::imp::[a]::u32>::_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[a]::u32>::_fmt */

undefined1  [16] __rustcall
<core::fmt::num::imp::[a]::u32>::_fmt(uint param_1,long param_2,long param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar3 = param_3;
  uVar4 = param_1;
  if (999 < param_1) {
    uVar6 = (ulong)param_1;
    do {
      puVar1 = (undefined2 *)(param_2 + -2 + lVar3);
      uVar7 = (uint)uVar6;
      lVar3 = lVar3 + -4;
      uVar4 = (uint)(uVar6 / 10000);
      uVar2 = uVar7 + (int)(uVar6 / 10000) * -10000;
      uVar5 = (uVar2 >> 2 & 0x3fff) / 0x19;
      puVar1[-1] = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar5 * 2);
      *puVar1 = *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar2 + uVar5 * -100) & 0xffff) * 2);
      uVar6 = uVar6 / 10000;
    } while (9999999 < uVar7);
  }
  uVar5 = uVar4;
  if (9 < uVar4) {
    lVar3 = lVar3 + -2;
    uVar5 = (uVar4 >> 2 & 0x3fff) / 0x19;
    *(undefined2 *)(param_2 + lVar3) =
         *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar4 + uVar5 * -100) & 0xffff) * 2);
  }
  if ((param_1 != 0) && (uVar5 == 0)) {
    auVar8._8_8_ = param_3 - lVar3;
    auVar8._0_8_ = param_2 + lVar3;
    return auVar8;
  }
  lVar3 = lVar3 + -1;
  *(undefined *)(param_2 + lVar3) = (&DAT_00390ba8)[(uVar5 & 0xf) << 1];
  auVar9._8_8_ = param_3 - lVar3;
  auVar9._0_8_ = param_2 + lVar3;
  return auVar9;
}


// ===== 00a9c454  <core::fmt::num::imp::[b]::i32>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[b]::i32>::format_into */

undefined1  [16] __rustcall <core::fmt::num::imp::[b]::i32>::format_into(uint param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((int)param_1 < 0) {
    param_1 = -param_1;
    if (param_1 < 1000) {
      lVar4 = 0xb;
      if (param_1 < 10) goto LAB_00a9c628;
    }
    else {
      uVar5 = (ulong)param_1;
      lVar1 = 0;
      do {
        lVar4 = lVar1;
        uVar3 = uVar5;
        param_1 = (uint)(uVar3 / 10000);
        uVar2 = (uint)(uVar3 / 10000);
        uVar8 = (uint)uVar3 + uVar2 * -10000;
        uVar6 = (uVar8 >> 2 & 0x3fff) / 0x19;
        *(undefined2 *)(param_2 + lVar4 + 7) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar6 * 2);
        *(undefined2 *)(param_2 + lVar4 + 9) =
             *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar8 + uVar6 * -100) & 0xffff) * 2);
        uVar5 = uVar3 / 10000;
        lVar1 = lVar4 + -4;
      } while (9999999 < (uint)uVar3);
      lVar4 = lVar4 + 7;
      if (uVar2 < 9 || (int)(uVar3 / 10000) == 9) goto LAB_00a9c628;
    }
    lVar4 = lVar4 + -2;
    uVar6 = (param_1 >> 2 & 0x3fff) / 0x19;
    *(undefined2 *)(param_2 + lVar4) =
         *(undefined2 *)(&DAT_00390ba7 + ((ulong)(param_1 + uVar6 * -100) & 0xffff) * 2);
    param_1 = uVar6;
LAB_00a9c628:
    if (param_1 != 0) {
      lVar4 = lVar4 + -1;
      *(undefined *)(param_2 + lVar4) = (&DAT_00390ba8)[(param_1 & 0xf) << 1];
    }
    uVar5 = lVar4 - 1;
    if (10 < uVar5) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar5,0xb,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff748);
    }
    *(undefined1 *)(param_2 + uVar5) = 0x2d;
    auVar11._8_8_ = 0xb - uVar5;
    auVar11._0_8_ = param_2 + uVar5;
    return auVar11;
  }
  if (param_1 < 1000) {
    lVar4 = 0xb;
    uVar8 = param_1;
    uVar6 = param_1;
    if (param_1 < 10) goto LAB_00a9c5a4;
  }
  else {
    lVar1 = 0;
    uVar5 = (ulong)param_1;
    do {
      uVar3 = uVar5;
      lVar4 = lVar1;
      uVar6 = (uint)(uVar3 / 10000);
      uVar7 = (uint)(uVar3 / 10000);
      uVar2 = (uint)uVar3 + uVar7 * -10000;
      uVar8 = (uVar2 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)(param_2 + lVar4 + 7) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar8 * 2);
      *(undefined2 *)(param_2 + lVar4 + 9) =
           *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar2 + uVar8 * -100) & 0xffff) * 2);
      lVar1 = lVar4 + -4;
      uVar5 = uVar3 / 10000;
    } while (9999999 < (uint)uVar3);
    lVar4 = lVar4 + 7;
    uVar8 = (uint)(uVar3 / 10000);
    if (uVar7 < 9 || (int)(uVar3 / 10000) == 9) goto LAB_00a9c5a4;
  }
  lVar4 = lVar4 + -2;
  uVar6 = (uVar8 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)(param_2 + lVar4) =
       *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar8 + uVar6 * -100) & 0xffff) * 2);
LAB_00a9c5a4:
  if ((param_1 != 0) && (uVar6 == 0)) {
    auVar9._8_8_ = 0xb - lVar4;
    auVar9._0_8_ = param_2 + lVar4;
    return auVar9;
  }
  lVar4 = lVar4 + -1;
  *(undefined *)(param_2 + lVar4) = (&DAT_00390ba8)[(uVar6 & 0xf) << 1];
  auVar10._8_8_ = 0xb - lVar4;
  auVar10._0_8_ = param_2 + lVar4;
  return auVar10;
}


// ===== 00a9c68c  <core::fmt::num::imp::[c]::u32>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[c]::u32>::format_into */

undefined1  [16] __rustcall <core::fmt::num::imp::[c]::u32>::format_into(uint param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_1 < 1000) {
    lVar8 = 10;
    uVar6 = param_1;
    uVar4 = param_1;
    if (param_1 < 10) goto LAB_00a9c750;
  }
  else {
    uVar2 = (ulong)param_1;
    lVar3 = 0;
    do {
      lVar8 = lVar3;
      uVar7 = uVar2;
      uVar4 = (uint)(uVar7 / 10000);
      uVar5 = (uint)(uVar7 / 10000);
      uVar1 = (uint)uVar7 + uVar5 * -10000;
      uVar6 = (uVar1 >> 2 & 0x3fff) / 0x19;
      *(undefined2 *)(param_2 + lVar8 + 6) = *(undefined2 *)(&DAT_00390ba7 + (ulong)uVar6 * 2);
      *(undefined2 *)(param_2 + lVar8 + 8) =
           *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar1 + uVar6 * -100) & 0xffff) * 2);
      uVar2 = uVar7 / 10000;
      lVar3 = lVar8 + -4;
    } while (9999999 < (uint)uVar7);
    lVar8 = lVar8 + 6;
    uVar6 = (uint)(uVar7 / 10000);
    if (uVar5 < 9 || (int)(uVar7 / 10000) == 9) goto LAB_00a9c750;
  }
  lVar8 = lVar8 + -2;
  uVar4 = (uVar6 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)(param_2 + lVar8) =
       *(undefined2 *)(&DAT_00390ba7 + ((ulong)(uVar6 + uVar4 * -100) & 0xffff) * 2);
LAB_00a9c750:
  if ((param_1 != 0) && (uVar4 == 0)) {
    auVar9._8_8_ = 10 - lVar8;
    auVar9._0_8_ = param_2 + lVar8;
    return auVar9;
  }
  lVar8 = lVar8 + -1;
  *(undefined *)(param_2 + lVar8) = (&DAT_00390ba8)[(uVar4 & 0xf) << 1];
  auVar10._8_8_ = 10 - lVar8;
  auVar10._0_8_ = param_2 + lVar8;
  return auVar10;
}


// ===== 00a9c794  FUN_00a9c794 =====

ulong FUN_00a9c794(ulong param_1,long param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 < 1000) {
    uVar8 = param_1;
    if (param_1 < 10) goto LAB_00a9c8c0;
  }
  else {
    lVar9 = 0;
    lVar10 = param_2 + -2;
    uVar6 = param_1;
    do {
      uVar7 = (param_3 + lVar9) - 4;
      if (param_3 <= uVar7) {
code_r0x00a9c900:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar7,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff748);
      }
      uVar8 = uVar6 / 10000;
      uVar5 = (int)uVar6 + (int)uVar8 * -10000;
      uVar4 = (uVar5 >> 2 & 0x3fff) / 0x19;
      lVar2 = (ulong)uVar4 * 2;
      *(undefined *)(lVar10 + param_3 + -2) = (&DAT_00390ba7)[lVar2];
      if (param_3 <= (param_3 + lVar9) - 3) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (param_3 + lVar9 + -3,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff748);
      }
      uVar7 = (param_3 + lVar9) - 2;
      *(undefined *)(lVar10 + param_3 + -1) = (&DAT_00390ba8)[lVar2];
      if (param_3 <= uVar7) goto code_r0x00a9c900;
      lVar2 = (ulong)(ushort)((short)uVar5 + (short)uVar4 * -100) * 2;
      *(undefined *)(lVar10 + param_3) = (&DAT_00390ba7)[lVar2];
      if (param_3 <= (param_3 + lVar9) - 1) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (param_3 + lVar9 + -1,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff748);
      }
      lVar3 = lVar10 + param_3;
      lVar9 = lVar9 + -4;
      lVar10 = lVar10 + -4;
      *(undefined *)(lVar3 + 1) = (&DAT_00390ba8)[lVar2];
      bVar1 = 9999999 < uVar6;
      uVar6 = uVar8;
    } while (bVar1);
    param_3 = param_3 + lVar9;
    if (uVar8 < 10) goto LAB_00a9c8c0;
  }
  param_3 = param_3 - 2;
  uVar4 = ((uint)uVar8 >> 2 & 0x3fff) / 0x19;
  *(undefined2 *)(param_2 + param_3) =
       *(undefined2 *)(&DAT_00390ba7 + ((ulong)((uint)uVar8 + uVar4 * -100) & 0xffff) * 2);
  uVar8 = (ulong)uVar4;
LAB_00a9c8c0:
  if ((param_1 != 0) && (uVar8 == 0)) {
    return param_3;
  }
  *(undefined *)(param_2 + (param_3 - 1)) = (&DAT_00390ba8)[(uVar8 & 0xf) * 2];
  return param_3 - 1;
}


// ===== 00a9c94c  <core::fmt::num::imp::[k]::usize>::_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[k]::usize>::_fmt */

undefined1  [16] __rustcall
<core::fmt::num::imp::[k]::usize>::_fmt(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_00a9c794();
  auVar2._8_8_ = param_3 - lVar1;
  auVar2._0_8_ = param_2 + lVar1;
  return auVar2;
}


// ===== 00a9c978  <core::fmt::num::imp::[l]::isize>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[l]::isize>::format_into */

undefined1  [16] __rustcall
<core::fmt::num::imp::[l]::isize>::format_into(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (-1 < param_1) {
    lVar1 = FUN_00a9c794(param_1,param_2,0x14);
    auVar3._8_8_ = 0x14 - lVar1;
    auVar3._0_8_ = param_2 + lVar1;
    return auVar3;
  }
  lVar1 = FUN_00a9c794(-param_1,param_2,0x14);
  uVar2 = lVar1 - 1;
  if (uVar2 < 0x14) {
    *(undefined1 *)(param_2 + uVar2) = 0x2d;
    auVar4._8_8_ = 0x14 - uVar2;
    auVar4._0_8_ = param_2 + uVar2;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(uVar2,0x14,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff748);
}


// ===== 00a9c9fc  <core::fmt::num::imp::[m]::usize>::format_into =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::num::imp::[m]::usize>::format_into */

undefined1  [16] __rustcall
<core::fmt::num::imp::[m]::usize>::format_into(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_00a9c794(param_1,param_2,0x14);
  auVar2._8_8_ = 0x14 - lVar1;
  auVar2._0_8_ = param_2 + lVar1;
  return auVar2;
}


// ===== 00a9ca2c  <core::str::pattern::[u]::core::str::pattern::StrSearcher>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::pattern::[u]::core::str::pattern::StrSearcher>::new */

void __rustcall
<core::str::pattern::[u]::core::str::pattern::StrSearcher>::new
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,void *param_4,ulong param_5)

{
  byte *pbVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [13];
  undefined1 auVar39 [13];
  undefined1 auVar40 [13];
  undefined1 auVar41 [13];
  undefined1 auVar42 [13];
  undefined1 auVar43 [13];
  undefined1 auVar44 [13];
  undefined1 auVar45 [13];
  undefined1 auVar46 [13];
  undefined1 auVar47 [13];
  undefined1 auVar48 [13];
  undefined1 auVar49 [13];
  undefined1 auVar50 [13];
  undefined1 auVar51 [13];
  undefined1 auVar52 [13];
  undefined1 auVar53 [13];
  byte *pbVar54;
  byte *pbVar55;
  byte *pbVar56;
  byte *pbVar57;
  byte *pbVar58;
  byte *pbVar59;
  byte *pbVar60;
  byte *pbVar61;
  byte *pbVar62;
  byte *pbVar63;
  byte *pbVar64;
  byte *pbVar65;
  byte *pbVar66;
  byte *pbVar67;
  byte *pbVar68;
  byte *pbVar69;
  byte *pbVar70;
  byte *pbVar71;
  byte *pbVar72;
  byte *pbVar73;
  byte *pbVar74;
  byte *pbVar75;
  byte *pbVar76;
  byte *pbVar77;
  byte *pbVar78;
  byte *pbVar79;
  bool bVar80;
  int iVar81;
  ulong uVar82;
  ulong __n;
  byte *pbVar83;
  ulong uVar84;
  long lVar85;
  undefined8 uVar86;
  ulong uVar87;
  long lVar88;
  long lVar89;
  undefined4 *puVar90;
  ulong uVar91;
  ulong uVar92;
  ulong uVar93;
  ulong uVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  undefined8 uVar136;
  byte bVar143;
  byte bVar144;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  undefined4 uVar145;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  byte bVar164;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  byte bVar176;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  byte bVar181;
  byte bVar182;
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  byte bVar183;
  byte bVar185;
  byte bVar186;
  byte bVar187;
  byte bVar188;
  byte bVar189;
  byte bVar190;
  undefined8 uVar184;
  byte bVar191;
  byte bVar192;
  byte bVar194;
  byte bVar195;
  byte bVar196;
  byte bVar197;
  byte bVar198;
  byte bVar199;
  undefined8 uVar193;
  byte bVar200;
  byte bVar201;
  byte bVar203;
  byte bVar204;
  byte bVar205;
  byte bVar206;
  byte bVar207;
  byte bVar208;
  undefined8 uVar202;
  byte bVar209;
  byte bVar210;
  byte bVar212;
  byte bVar213;
  byte bVar214;
  byte bVar215;
  byte bVar216;
  byte bVar217;
  undefined8 uVar211;
  byte bVar218;
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  byte bVar229;
  byte bVar231;
  byte bVar232;
  byte bVar233;
  byte bVar234;
  byte bVar235;
  byte bVar236;
  undefined8 uVar230;
  byte bVar237;
  byte bVar238;
  byte bVar240;
  byte bVar241;
  byte bVar242;
  byte bVar243;
  byte bVar244;
  byte bVar245;
  undefined8 uVar239;
  byte bVar246;
  byte bVar247;
  byte bVar249;
  byte bVar250;
  byte bVar251;
  byte bVar252;
  byte bVar253;
  byte bVar254;
  undefined8 uVar248;
  byte bVar255;
  byte bVar256;
  byte bVar258;
  byte bVar259;
  byte bVar260;
  byte bVar261;
  byte bVar262;
  byte bVar263;
  undefined8 uVar257;
  byte bVar264;
  byte bVar265;
  byte bVar267;
  byte bVar268;
  byte bVar269;
  byte bVar270;
  byte bVar271;
  byte bVar272;
  undefined8 uVar266;
  byte bVar273;
  byte bVar274;
  byte bVar276;
  byte bVar277;
  byte bVar278;
  byte bVar279;
  byte bVar280;
  byte bVar281;
  undefined8 uVar275;
  byte bVar282;
  byte bVar283;
  byte bVar285;
  byte bVar286;
  byte bVar287;
  byte bVar288;
  byte bVar289;
  byte bVar290;
  undefined8 uVar284;
  byte bVar291;
  byte bVar292;
  byte bVar294;
  byte bVar295;
  byte bVar296;
  byte bVar297;
  byte bVar298;
  byte bVar299;
  undefined8 uVar293;
  byte bVar300;
  byte bVar301;
  byte bVar303;
  byte bVar304;
  byte bVar305;
  byte bVar306;
  byte bVar307;
  byte bVar308;
  undefined8 uVar302;
  byte bVar309;
  byte bVar310;
  byte bVar312;
  byte bVar313;
  byte bVar314;
  byte bVar315;
  byte bVar316;
  byte bVar317;
  undefined8 uVar311;
  byte bVar318;
  byte bVar319;
  byte bVar321;
  byte bVar322;
  byte bVar323;
  byte bVar324;
  byte bVar325;
  byte bVar326;
  undefined8 uVar320;
  byte bVar327;
  byte bVar328;
  byte bVar330;
  byte bVar331;
  byte bVar332;
  byte bVar333;
  byte bVar334;
  byte bVar335;
  undefined8 uVar329;
  byte bVar336;
  byte bVar337;
  byte bVar339;
  byte bVar340;
  byte bVar341;
  byte bVar342;
  byte bVar343;
  byte bVar344;
  undefined8 uVar338;
  byte bVar345;
  byte bVar346;
  byte bVar348;
  byte bVar349;
  byte bVar350;
  byte bVar351;
  byte bVar352;
  byte bVar353;
  undefined8 uVar347;
  byte bVar354;
  byte bVar355;
  byte bVar357;
  byte bVar358;
  byte bVar359;
  byte bVar360;
  byte bVar361;
  byte bVar362;
  undefined8 uVar356;
  byte bVar363;
  byte bVar364;
  byte bVar366;
  byte bVar367;
  byte bVar368;
  byte bVar369;
  byte bVar370;
  byte bVar371;
  undefined8 uVar365;
  byte bVar372;
  byte bVar373;
  byte bVar375;
  byte bVar376;
  byte bVar377;
  byte bVar378;
  byte bVar379;
  byte bVar380;
  undefined8 uVar374;
  byte bVar381;
  byte bVar382;
  byte bVar384;
  byte bVar385;
  byte bVar386;
  byte bVar387;
  byte bVar388;
  byte bVar389;
  undefined8 uVar383;
  byte bVar390;
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  ulong uVar393;
  undefined1 auVar394 [16];
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 auVar406 [16];
  undefined1 auVar407 [16];
  undefined1 auVar408 [16];
  ulong uVar409;
  undefined1 auVar410 [16];
  undefined1 auVar411 [16];
  undefined1 auVar412 [16];
  undefined1 auVar413 [16];
  undefined1 auVar414 [16];
  undefined1 auVar415 [16];
  undefined1 auVar416 [16];
  undefined1 auVar417 [16];
  undefined1 auVar418 [16];
  undefined1 auVar419 [16];
  undefined1 auVar420 [16];
  undefined1 auVar421 [16];
  
  if (param_5 == 0) {
    param_1[9] = param_2;
    param_1[10] = param_3;
    param_1[0xb] = param_4;
    param_1[0xc] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = param_3;
    *(undefined2 *)(param_1 + 3) = 0x101;
    *(undefined1 *)((long)param_1 + 0x1a) = 0;
    return;
  }
  lVar85 = param_5 - 1;
  if (lVar85 == 0) {
    __n = 0;
    uVar87 = 0;
    uVar84 = 1;
    uVar92 = 1;
  }
  else {
    __n = 0;
    uVar91 = 1;
    uVar84 = 1;
    lVar88 = 0;
    uVar87 = 1;
    do {
      uVar93 = __n + lVar88;
      if (param_5 <= uVar93) goto code_r0x00a9d2d8;
      if (*(byte *)((long)param_4 + uVar91) < *(byte *)((long)param_4 + uVar93)) {
        lVar89 = 0;
        uVar93 = uVar87 + lVar88 + 1;
        uVar84 = uVar93 - __n;
      }
      else if (*(byte *)((long)param_4 + uVar91) == *(byte *)((long)param_4 + uVar93)) {
        bVar80 = lVar88 + 1U == uVar84;
        lVar2 = 0;
        if (bVar80) {
          lVar2 = lVar88 + 1;
        }
        lVar89 = 0;
        if (!bVar80) {
          lVar89 = lVar88 + 1;
        }
        uVar93 = lVar2 + uVar87;
      }
      else {
        uVar93 = uVar87 + 1;
        lVar89 = 0;
        uVar84 = 1;
        __n = uVar87;
      }
      uVar91 = uVar93 + lVar89;
      lVar88 = lVar89;
      uVar87 = uVar93;
    } while (uVar91 < param_5);
    uVar87 = 0;
    uVar91 = 1;
    uVar92 = 1;
    lVar88 = 0;
    uVar82 = 1;
    do {
      uVar93 = uVar87 + lVar88;
      if (param_5 <= uVar93) {
code_r0x00a9d2d8:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar93,param_5,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff870);
      }
      if (*(byte *)((long)param_4 + uVar93) < *(byte *)((long)param_4 + uVar91)) {
        lVar89 = 0;
        uVar93 = uVar82 + lVar88 + 1;
        uVar92 = uVar93 - uVar87;
      }
      else if (*(byte *)((long)param_4 + uVar91) == *(byte *)((long)param_4 + uVar93)) {
        bVar80 = lVar88 + 1U == uVar92;
        lVar2 = 0;
        if (bVar80) {
          lVar2 = lVar88 + 1;
        }
        lVar89 = 0;
        if (!bVar80) {
          lVar89 = lVar88 + 1;
        }
        uVar93 = lVar2 + uVar82;
      }
      else {
        uVar93 = uVar82 + 1;
        lVar89 = 0;
        uVar92 = 1;
        uVar87 = uVar82;
      }
      uVar91 = uVar93 + lVar89;
      lVar88 = lVar89;
      uVar82 = uVar93;
    } while (uVar91 < param_5);
  }
  if (__n <= uVar87) {
    uVar84 = uVar92;
    __n = uVar87;
  }
  if (param_5 < __n) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,__n,param_5,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff8d0);
  }
  if ((CARRY8(uVar84,__n)) || (param_5 < uVar84 + __n)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar84,uVar84 + __n,param_5,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff8b8);
  }
  iVar81 = memcmp(param_4,(void *)((long)param_4 + uVar84),__n);
  if (iVar81 == 0) {
    uVar91 = 0;
    uVar93 = 1;
    lVar88 = 0;
    uVar87 = 1;
    do {
      if (param_5 <= uVar87 + lVar88) break;
      uVar82 = (param_5 - lVar88) + ~uVar87;
      if (param_5 <= uVar82) goto code_r0x00a9d2e8;
      uVar92 = lVar85 - (lVar88 + uVar91);
      if (param_5 <= uVar92) goto code_r0x00a9d2f8;
      if (*(byte *)((long)param_4 + uVar82) < *(byte *)((long)param_4 + uVar92)) {
        lVar89 = 0;
        uVar82 = lVar88 + uVar87 + 1;
        uVar93 = uVar82 - uVar91;
      }
      else if (*(byte *)((long)param_4 + uVar82) == *(byte *)((long)param_4 + uVar92)) {
        bVar80 = lVar88 + 1U == uVar93;
        lVar2 = 0;
        if (bVar80) {
          lVar2 = lVar88 + 1;
        }
        lVar89 = 0;
        if (!bVar80) {
          lVar89 = lVar88 + 1;
        }
        uVar82 = lVar2 + uVar87;
      }
      else {
        lVar89 = 0;
        uVar82 = uVar87 + 1;
        uVar93 = 1;
        uVar91 = uVar87;
      }
      lVar88 = lVar89;
      uVar87 = uVar82;
    } while (uVar93 != uVar84);
    uVar87 = 0;
    uVar94 = 1;
    lVar88 = 0;
    uVar93 = 1;
    do {
      if (param_5 <= uVar93 + lVar88) break;
      uVar82 = (param_5 - lVar88) + ~uVar93;
      if (param_5 <= uVar82) {
code_r0x00a9d2e8:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar82,param_5,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff888);
      }
      uVar92 = lVar85 - (lVar88 + uVar87);
      if (param_5 <= uVar92) {
code_r0x00a9d2f8:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar92,param_5,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff8a0);
      }
      if (*(byte *)((long)param_4 + uVar92) < *(byte *)((long)param_4 + uVar82)) {
        lVar89 = 0;
        uVar82 = lVar88 + uVar93 + 1;
        uVar94 = uVar82 - uVar87;
      }
      else if (*(byte *)((long)param_4 + uVar82) == *(byte *)((long)param_4 + uVar92)) {
        bVar80 = lVar88 + 1U == uVar94;
        lVar2 = 0;
        if (bVar80) {
          lVar2 = lVar88 + 1;
        }
        lVar89 = 0;
        if (!bVar80) {
          lVar89 = lVar88 + 1;
        }
        uVar82 = lVar2 + uVar93;
      }
      else {
        lVar89 = 0;
        uVar82 = uVar93 + 1;
        uVar94 = 1;
        uVar87 = uVar93;
      }
      lVar88 = lVar89;
      uVar93 = uVar82;
    } while (uVar94 != uVar84);
    if (uVar87 <= uVar91) {
      uVar87 = uVar91;
    }
    uVar87 = param_5 - uVar87;
    if (uVar84 == 0) {
      uVar91 = 0;
    }
    else {
      if (uVar84 < 4) {
        uVar93 = 0;
        uVar91 = 0;
      }
      else {
        if (uVar84 < 0x20) {
          uVar91 = 0;
          uVar82 = 0;
        }
        else {
          bVar95 = 0;
          bVar96 = 0;
          bVar97 = 0;
          bVar98 = 0;
          bVar99 = 0;
          bVar100 = 0;
          bVar101 = 0;
          bVar102 = 0;
          bVar103 = 0;
          bVar104 = 0;
          bVar105 = 0;
          bVar106 = 0;
          bVar107 = 0;
          bVar108 = 0;
          bVar109 = 0;
          bVar110 = 0;
          uVar86 = 0;
          uVar136 = 0;
          uVar202 = 0;
          uVar211 = 0;
          bVar111 = 0;
          bVar112 = 0;
          bVar113 = 0;
          bVar114 = 0;
          bVar115 = 0;
          bVar116 = 0;
          bVar117 = 0;
          bVar118 = 0;
          bVar119 = 0;
          bVar120 = 0;
          bVar121 = 0;
          bVar122 = 0;
          bVar123 = 0;
          bVar124 = 0;
          bVar125 = 0;
          bVar126 = 0;
          uVar266 = 0;
          uVar275 = 0;
          pbVar83 = (byte *)((long)param_4 + 0x10);
          bVar164 = 0;
          bVar168 = 0;
          bVar169 = 0;
          bVar170 = 0;
          bVar171 = 0;
          bVar172 = 0;
          bVar173 = 0;
          bVar174 = 0;
          bVar175 = 0;
          bVar176 = 0;
          bVar177 = 0;
          bVar178 = 0;
          bVar179 = 0;
          bVar180 = 0;
          bVar181 = 0;
          bVar182 = 0;
          uVar184 = 0;
          uVar193 = 0;
          uVar91 = uVar84 & 0xffffffffffffffe0;
          bVar144 = 0;
          bVar149 = 0;
          bVar150 = 0;
          bVar151 = 0;
          bVar152 = 0;
          bVar153 = 0;
          bVar154 = 0;
          bVar155 = 0;
          bVar156 = 0;
          bVar157 = 0;
          bVar158 = 0;
          bVar159 = 0;
          bVar160 = 0;
          bVar161 = 0;
          bVar162 = 0;
          bVar163 = 0;
          uVar338 = 0;
          uVar347 = 0;
          uVar248 = 0;
          uVar257 = 0;
          uVar230 = 0;
          uVar239 = 0;
          uVar356 = 0;
          uVar365 = 0;
          uVar302 = 0;
          uVar311 = 0;
          uVar320 = 0;
          uVar329 = 0;
          uVar284 = 0;
          uVar293 = 0;
          uVar374 = 0;
          uVar383 = 0;
          uVar93 = uVar84 & 0xffffffffffffffe0;
          do {
            pbVar1 = pbVar83 + -0x10;
            bVar127 = pbVar83[-0xf];
            pbVar54 = pbVar83 + -0xe;
            pbVar55 = pbVar83 + -0xd;
            pbVar56 = pbVar83 + -0xc;
            pbVar57 = pbVar83 + -0xb;
            pbVar58 = pbVar83 + -10;
            pbVar59 = pbVar83 + -9;
            pbVar60 = pbVar83 + -8;
            bVar128 = pbVar83[-7];
            pbVar61 = pbVar83 + -6;
            pbVar62 = pbVar83 + -5;
            pbVar63 = pbVar83 + -4;
            pbVar64 = pbVar83 + -3;
            pbVar65 = pbVar83 + -2;
            pbVar66 = pbVar83 + -1;
            bVar129 = *pbVar83;
            bVar130 = pbVar83[1];
            pbVar67 = pbVar83 + 2;
            pbVar68 = pbVar83 + 3;
            pbVar69 = pbVar83 + 4;
            pbVar70 = pbVar83 + 5;
            pbVar71 = pbVar83 + 6;
            pbVar72 = pbVar83 + 7;
            pbVar73 = pbVar83 + 8;
            bVar131 = pbVar83[9];
            pbVar74 = pbVar83 + 10;
            pbVar75 = pbVar83 + 0xb;
            pbVar76 = pbVar83 + 0xc;
            pbVar77 = pbVar83 + 0xd;
            pbVar78 = pbVar83 + 0xe;
            pbVar79 = pbVar83 + 0xf;
            uVar91 = uVar91 - 0x20;
            pbVar83 = pbVar83 + 0x20;
            uVar92 = CONCAT35(0,CONCAT14(*pbVar64,(uint)(*pbVar63 & 0x3f)) & 0x3fffffffff);
            auVar42[8] = *pbVar65 & 0x3f;
            auVar42._0_8_ = uVar92;
            auVar42._9_3_ = 0;
            auVar42[0xc] = *pbVar66 & 0x3f;
            uVar82 = CONCAT26(0,(uint6)(CONCAT14(bVar128,(uint)(CONCAT12(bVar128,(ushort)(*pbVar60 &
                                                                                         0x3f)) &
                                                               0x3fffff)) & 0x3fffffffff) &
                                0xffff0000ffff);
            auVar50[8] = *pbVar61 & 0x3f;
            auVar50._0_8_ = uVar82;
            auVar50._9_3_ = 0;
            auVar50[0xc] = *pbVar62 & 0x3f;
            uVar393 = CONCAT35(0,CONCAT14(*pbVar57,(uint)(*pbVar56 & 0x3f)) & 0x3fffffffff);
            auVar43[8] = *pbVar58 & 0x3f;
            auVar43._0_8_ = uVar393;
            auVar43._9_3_ = 0;
            auVar43[0xc] = *pbVar59 & 0x3f;
            uVar94 = CONCAT26(0,(uint6)(CONCAT14(bVar127,(uint)(CONCAT12(bVar127,(ushort)(*pbVar1 &
                                                                                         0x3f)) &
                                                               0x3fffff)) & 0x3fffffffff) &
                                0xffff0000ffff);
            auVar51[8] = *pbVar54 & 0x3f;
            auVar51._0_8_ = uVar94;
            auVar51._9_3_ = 0;
            auVar51[0xc] = *pbVar55 & 0x3f;
            auVar414._0_8_ = (ulong)auVar42._8_5_ & 0xffffffff;
            auVar414._8_5_ = auVar42._8_5_ >> 0x20;
            auVar414._13_3_ = 0;
            auVar406._0_8_ = uVar92 & 0xffffffff;
            auVar406[8] = *pbVar64 & 0x3f;
            auVar406._9_7_ = 0;
            auVar221._0_8_ = (ulong)auVar50._8_5_ & 0xffffffff;
            auVar221._8_5_ = auVar50._8_5_ >> 0x20;
            auVar221._13_3_ = 0;
            auVar227._0_8_ = (ulong)auVar43._8_5_ & 0xffffffff;
            auVar227._8_5_ = auVar43._8_5_ >> 0x20;
            auVar227._13_3_ = 0;
            auVar399._0_8_ = uVar82 & 0xffffffff;
            auVar399[8] = bVar128 & 0x3f;
            auVar399._9_7_ = 0;
            auVar420._0_8_ = uVar393 & 0xffffffff;
            auVar420[8] = *pbVar57 & 0x3f;
            auVar420._9_7_ = 0;
            auVar147._8_8_ = 1;
            auVar147._0_8_ = 1;
            auVar405 = NEON_ushl(auVar147,auVar406,8);
            auVar166._8_8_ = 1;
            auVar166._0_8_ = 1;
            auVar413 = NEON_ushl(auVar166,auVar414,8);
            auVar397._8_8_ = 1;
            auVar397._0_8_ = 1;
            auVar147 = NEON_ushl(auVar397,auVar221,8);
            auVar402._8_8_ = 1;
            auVar402._0_8_ = 1;
            auVar166 = NEON_ushl(auVar402,auVar227,8);
            auVar411._8_8_ = 1;
            auVar411._0_8_ = 1;
            auVar402 = NEON_ushl(auVar411,auVar420,8);
            auVar417._8_8_ = 1;
            auVar417._0_8_ = 1;
            auVar397 = NEON_ushl(auVar417,auVar399,8);
            bVar144 = auVar405[0] | bVar144;
            bVar149 = auVar405[1] | bVar149;
            bVar150 = auVar405[2] | bVar150;
            bVar151 = auVar405[3] | bVar151;
            bVar152 = auVar405[4] | bVar152;
            bVar153 = auVar405[5] | bVar153;
            bVar154 = auVar405[6] | bVar154;
            bVar155 = auVar405[7] | bVar155;
            bVar156 = auVar405[8] | bVar156;
            bVar157 = auVar405[9] | bVar157;
            bVar158 = auVar405[10] | bVar158;
            bVar159 = auVar405[0xb] | bVar159;
            bVar160 = auVar405[0xc] | bVar160;
            bVar161 = auVar405[0xd] | bVar161;
            bVar162 = auVar405[0xe] | bVar162;
            bVar163 = auVar405[0xf] | bVar163;
            auVar407._0_8_ = (ulong)auVar51._8_5_ & 0xffffffff;
            auVar407._8_5_ = auVar51._8_5_ >> 0x20;
            auVar407._13_3_ = 0;
            bVar337 = auVar413[0] | (byte)uVar338;
            bVar339 = auVar413[1] | (byte)((ulong)uVar338 >> 8);
            bVar340 = auVar413[2] | (byte)((ulong)uVar338 >> 0x10);
            bVar341 = auVar413[3] | (byte)((ulong)uVar338 >> 0x18);
            bVar342 = auVar413[4] | (byte)((ulong)uVar338 >> 0x20);
            bVar343 = auVar413[5] | (byte)((ulong)uVar338 >> 0x28);
            bVar344 = auVar413[6] | (byte)((ulong)uVar338 >> 0x30);
            bVar345 = auVar413[7] | (byte)((ulong)uVar338 >> 0x38);
            uVar338 = CONCAT17(bVar345,CONCAT16(bVar344,CONCAT15(bVar343,CONCAT14(bVar342,CONCAT13(
                                                  bVar341,CONCAT12(bVar340,CONCAT11(bVar339,bVar337)
                                                                  ))))));
            bVar346 = auVar413[8] | (byte)uVar347;
            bVar348 = auVar413[9] | (byte)((ulong)uVar347 >> 8);
            bVar349 = auVar413[10] | (byte)((ulong)uVar347 >> 0x10);
            bVar350 = auVar413[0xb] | (byte)((ulong)uVar347 >> 0x18);
            bVar351 = auVar413[0xc] | (byte)((ulong)uVar347 >> 0x20);
            bVar352 = auVar413[0xd] | (byte)((ulong)uVar347 >> 0x28);
            bVar353 = auVar413[0xe] | (byte)((ulong)uVar347 >> 0x30);
            bVar354 = auVar413[0xf] | (byte)((ulong)uVar347 >> 0x38);
            uVar347 = CONCAT17(bVar354,CONCAT16(bVar353,CONCAT15(bVar352,CONCAT14(bVar351,CONCAT13(
                                                  bVar350,CONCAT12(bVar349,CONCAT11(bVar348,bVar346)
                                                                  ))))));
            uVar409 = CONCAT35(0,CONCAT14(*pbVar77,(uint)(*pbVar76 & 0x3f)) & 0x3fffffffff);
            auVar44[8] = *pbVar78 & 0x3f;
            auVar44._0_8_ = uVar409;
            auVar44._9_3_ = 0;
            auVar44[0xc] = *pbVar79 & 0x3f;
            uVar92 = CONCAT26(0,(uint6)(CONCAT14(bVar131,(uint)(CONCAT12(bVar131,(ushort)(*pbVar73 &
                                                                                         0x3f)) &
                                                               0x3fffff)) & 0x3fffffffff) &
                                0xffff0000ffff);
            auVar52[8] = *pbVar74 & 0x3f;
            auVar52._0_8_ = uVar92;
            auVar52._9_3_ = 0;
            auVar52[0xc] = *pbVar75 & 0x3f;
            bVar183 = auVar147[0] | (byte)uVar184;
            bVar185 = auVar147[1] | (byte)((ulong)uVar184 >> 8);
            bVar186 = auVar147[2] | (byte)((ulong)uVar184 >> 0x10);
            bVar187 = auVar147[3] | (byte)((ulong)uVar184 >> 0x18);
            bVar188 = auVar147[4] | (byte)((ulong)uVar184 >> 0x20);
            bVar189 = auVar147[5] | (byte)((ulong)uVar184 >> 0x28);
            bVar190 = auVar147[6] | (byte)((ulong)uVar184 >> 0x30);
            bVar191 = auVar147[7] | (byte)((ulong)uVar184 >> 0x38);
            uVar184 = CONCAT17(bVar191,CONCAT16(bVar190,CONCAT15(bVar189,CONCAT14(bVar188,CONCAT13(
                                                  bVar187,CONCAT12(bVar186,CONCAT11(bVar185,bVar183)
                                                                  ))))));
            bVar192 = auVar147[8] | (byte)uVar193;
            bVar194 = auVar147[9] | (byte)((ulong)uVar193 >> 8);
            bVar195 = auVar147[10] | (byte)((ulong)uVar193 >> 0x10);
            bVar196 = auVar147[0xb] | (byte)((ulong)uVar193 >> 0x18);
            bVar197 = auVar147[0xc] | (byte)((ulong)uVar193 >> 0x20);
            bVar198 = auVar147[0xd] | (byte)((ulong)uVar193 >> 0x28);
            bVar199 = auVar147[0xe] | (byte)((ulong)uVar193 >> 0x30);
            bVar200 = auVar147[0xf] | (byte)((ulong)uVar193 >> 0x38);
            uVar193 = CONCAT17(bVar200,CONCAT16(bVar199,CONCAT15(bVar198,CONCAT14(bVar197,CONCAT13(
                                                  bVar196,CONCAT12(bVar195,CONCAT11(bVar194,bVar192)
                                                                  ))))));
            uVar82 = CONCAT35(0,CONCAT14(*pbVar70,(uint)(*pbVar69 & 0x3f)) & 0x3fffffffff);
            auVar45[8] = *pbVar71 & 0x3f;
            auVar45._0_8_ = uVar82;
            auVar45._9_3_ = 0;
            auVar45[0xc] = *pbVar72 & 0x3f;
            uVar393 = CONCAT26(0,(uint6)(CONCAT14(bVar130,(uint)(CONCAT12(bVar130,(ushort)(bVar129 &
                                                                                          0x3f)) &
                                                                0x3fffff)) & 0x3fffffffff) &
                                 0xffff0000ffff);
            auVar53[8] = *pbVar67 & 0x3f;
            auVar53._0_8_ = uVar393;
            auVar53._9_3_ = 0;
            auVar53[0xc] = *pbVar68 & 0x3f;
            auVar392._0_8_ = uVar94 & 0xffffffff;
            auVar392[8] = bVar127 & 0x3f;
            auVar392._9_7_ = 0;
            auVar405._8_8_ = 1;
            auVar405._0_8_ = 1;
            auVar147 = NEON_ushl(auVar405,auVar407,8);
            bVar265 = auVar166[0] | (byte)uVar266;
            bVar267 = auVar166[1] | (byte)((ulong)uVar266 >> 8);
            bVar268 = auVar166[2] | (byte)((ulong)uVar266 >> 0x10);
            bVar269 = auVar166[3] | (byte)((ulong)uVar266 >> 0x18);
            bVar270 = auVar166[4] | (byte)((ulong)uVar266 >> 0x20);
            bVar271 = auVar166[5] | (byte)((ulong)uVar266 >> 0x28);
            bVar272 = auVar166[6] | (byte)((ulong)uVar266 >> 0x30);
            bVar273 = auVar166[7] | (byte)((ulong)uVar266 >> 0x38);
            uVar266 = CONCAT17(bVar273,CONCAT16(bVar272,CONCAT15(bVar271,CONCAT14(bVar270,CONCAT13(
                                                  bVar269,CONCAT12(bVar268,CONCAT11(bVar267,bVar265)
                                                                  ))))));
            bVar274 = auVar166[8] | (byte)uVar275;
            bVar276 = auVar166[9] | (byte)((ulong)uVar275 >> 8);
            bVar277 = auVar166[10] | (byte)((ulong)uVar275 >> 0x10);
            bVar278 = auVar166[0xb] | (byte)((ulong)uVar275 >> 0x18);
            bVar279 = auVar166[0xc] | (byte)((ulong)uVar275 >> 0x20);
            bVar280 = auVar166[0xd] | (byte)((ulong)uVar275 >> 0x28);
            bVar281 = auVar166[0xe] | (byte)((ulong)uVar275 >> 0x30);
            bVar282 = auVar166[0xf] | (byte)((ulong)uVar275 >> 0x38);
            uVar275 = CONCAT17(bVar282,CONCAT16(bVar281,CONCAT15(bVar280,CONCAT14(bVar279,CONCAT13(
                                                  bVar278,CONCAT12(bVar277,CONCAT11(bVar276,bVar274)
                                                                  ))))));
            bVar164 = auVar397[0] | bVar164;
            bVar168 = auVar397[1] | bVar168;
            bVar169 = auVar397[2] | bVar169;
            bVar170 = auVar397[3] | bVar170;
            bVar171 = auVar397[4] | bVar171;
            bVar172 = auVar397[5] | bVar172;
            bVar173 = auVar397[6] | bVar173;
            bVar174 = auVar397[7] | bVar174;
            bVar175 = auVar397[8] | bVar175;
            bVar176 = auVar397[9] | bVar176;
            bVar177 = auVar397[10] | bVar177;
            bVar178 = auVar397[0xb] | bVar178;
            bVar179 = auVar397[0xc] | bVar179;
            bVar180 = auVar397[0xd] | bVar180;
            bVar181 = auVar397[0xe] | bVar181;
            bVar182 = auVar397[0xf] | bVar182;
            auVar228._0_8_ = (ulong)auVar44._8_5_ & 0xffffffff;
            auVar228._8_5_ = auVar44._8_5_ >> 0x20;
            auVar228._13_3_ = 0;
            auVar415._0_8_ = uVar409 & 0xffffffff;
            auVar415[8] = *pbVar77 & 0x3f;
            auVar415._9_7_ = 0;
            auVar400._0_8_ = (ulong)auVar52._8_5_ & 0xffffffff;
            auVar400._8_5_ = auVar52._8_5_ >> 0x20;
            auVar400._13_3_ = 0;
            bVar111 = auVar402[0] | bVar111;
            bVar112 = auVar402[1] | bVar112;
            bVar113 = auVar402[2] | bVar113;
            bVar114 = auVar402[3] | bVar114;
            bVar115 = auVar402[4] | bVar115;
            bVar116 = auVar402[5] | bVar116;
            bVar117 = auVar402[6] | bVar117;
            bVar118 = auVar402[7] | bVar118;
            bVar119 = auVar402[8] | bVar119;
            bVar120 = auVar402[9] | bVar120;
            bVar121 = auVar402[10] | bVar121;
            bVar122 = auVar402[0xb] | bVar122;
            bVar123 = auVar402[0xc] | bVar123;
            bVar124 = auVar402[0xd] | bVar124;
            bVar125 = auVar402[0xe] | bVar125;
            bVar126 = auVar402[0xf] | bVar126;
            auVar421._0_8_ = (ulong)auVar45._8_5_ & 0xffffffff;
            auVar421._8_5_ = auVar45._8_5_ >> 0x20;
            auVar421._13_3_ = 0;
            auVar224._0_8_ = uVar92 & 0xffffffff;
            auVar224[8] = bVar131 & 0x3f;
            auVar224._9_7_ = 0;
            auVar222._0_8_ = uVar82 & 0xffffffff;
            auVar222[8] = *pbVar70 & 0x3f;
            auVar222._9_7_ = 0;
            bVar201 = auVar147[0] | (byte)uVar202;
            bVar203 = auVar147[1] | (byte)((ulong)uVar202 >> 8);
            bVar204 = auVar147[2] | (byte)((ulong)uVar202 >> 0x10);
            bVar205 = auVar147[3] | (byte)((ulong)uVar202 >> 0x18);
            bVar206 = auVar147[4] | (byte)((ulong)uVar202 >> 0x20);
            bVar207 = auVar147[5] | (byte)((ulong)uVar202 >> 0x28);
            bVar208 = auVar147[6] | (byte)((ulong)uVar202 >> 0x30);
            bVar209 = auVar147[7] | (byte)((ulong)uVar202 >> 0x38);
            uVar202 = CONCAT17(bVar209,CONCAT16(bVar208,CONCAT15(bVar207,CONCAT14(bVar206,CONCAT13(
                                                  bVar205,CONCAT12(bVar204,CONCAT11(bVar203,bVar201)
                                                                  ))))));
            bVar210 = auVar147[8] | (byte)uVar211;
            bVar212 = auVar147[9] | (byte)((ulong)uVar211 >> 8);
            bVar213 = auVar147[10] | (byte)((ulong)uVar211 >> 0x10);
            bVar214 = auVar147[0xb] | (byte)((ulong)uVar211 >> 0x18);
            bVar215 = auVar147[0xc] | (byte)((ulong)uVar211 >> 0x20);
            bVar216 = auVar147[0xd] | (byte)((ulong)uVar211 >> 0x28);
            bVar217 = auVar147[0xe] | (byte)((ulong)uVar211 >> 0x30);
            bVar218 = auVar147[0xf] | (byte)((ulong)uVar211 >> 0x38);
            uVar211 = CONCAT17(bVar218,CONCAT16(bVar217,CONCAT15(bVar216,CONCAT14(bVar215,CONCAT13(
                                                  bVar214,CONCAT12(bVar213,CONCAT11(bVar212,bVar210)
                                                                  ))))));
            auVar408._0_8_ = (ulong)auVar53._8_5_ & 0xffffffff;
            auVar408._8_5_ = auVar53._8_5_ >> 0x20;
            auVar408._13_3_ = 0;
            auVar395._0_8_ = uVar393 & 0xffffffff;
            auVar395[8] = bVar130 & 0x3f;
            auVar395._9_7_ = 0;
            auVar413._8_8_ = 1;
            auVar413._0_8_ = 1;
            auVar402 = NEON_ushl(auVar413,auVar392,8);
            auVar419._8_8_ = 1;
            auVar419._0_8_ = 1;
            auVar413 = NEON_ushl(auVar419,auVar415,8);
            auVar31._8_8_ = 1;
            auVar31._0_8_ = 1;
            auVar397 = NEON_ushl(auVar31,auVar228,8);
            auVar32._8_8_ = 1;
            auVar32._0_8_ = 1;
            auVar166 = NEON_ushl(auVar32,auVar224,8);
            auVar33._8_8_ = 1;
            auVar33._0_8_ = 1;
            auVar419 = NEON_ushl(auVar33,auVar421,8);
            auVar34._8_8_ = 1;
            auVar34._0_8_ = 1;
            auVar417 = NEON_ushl(auVar34,auVar400,8);
            auVar35._8_8_ = 1;
            auVar35._0_8_ = 1;
            auVar405 = NEON_ushl(auVar35,auVar408,8);
            auVar36._8_8_ = 1;
            auVar36._0_8_ = 1;
            auVar147 = NEON_ushl(auVar36,auVar222,8);
            auVar37._8_8_ = 1;
            auVar37._0_8_ = 1;
            auVar411 = NEON_ushl(auVar37,auVar395,8);
            bVar127 = auVar402[0] | (byte)uVar86;
            bVar128 = auVar402[1] | (byte)((ulong)uVar86 >> 8);
            bVar129 = auVar402[2] | (byte)((ulong)uVar86 >> 0x10);
            bVar130 = auVar402[3] | (byte)((ulong)uVar86 >> 0x18);
            bVar131 = auVar402[4] | (byte)((ulong)uVar86 >> 0x20);
            bVar132 = auVar402[5] | (byte)((ulong)uVar86 >> 0x28);
            bVar133 = auVar402[6] | (byte)((ulong)uVar86 >> 0x30);
            bVar134 = auVar402[7] | (byte)((ulong)uVar86 >> 0x38);
            uVar86 = CONCAT17(bVar134,CONCAT16(bVar133,CONCAT15(bVar132,CONCAT14(bVar131,CONCAT13(
                                                  bVar130,CONCAT12(bVar129,CONCAT11(bVar128,bVar127)
                                                                  ))))));
            bVar135 = auVar402[8] | (byte)uVar136;
            bVar137 = auVar402[9] | (byte)((ulong)uVar136 >> 8);
            bVar138 = auVar402[10] | (byte)((ulong)uVar136 >> 0x10);
            bVar139 = auVar402[0xb] | (byte)((ulong)uVar136 >> 0x18);
            bVar140 = auVar402[0xc] | (byte)((ulong)uVar136 >> 0x20);
            bVar141 = auVar402[0xd] | (byte)((ulong)uVar136 >> 0x28);
            bVar142 = auVar402[0xe] | (byte)((ulong)uVar136 >> 0x30);
            bVar143 = auVar402[0xf] | (byte)((ulong)uVar136 >> 0x38);
            uVar136 = CONCAT17(bVar143,CONCAT16(bVar142,CONCAT15(bVar141,CONCAT14(bVar140,CONCAT13(
                                                  bVar139,CONCAT12(bVar138,CONCAT11(bVar137,bVar135)
                                                                  ))))));
            bVar283 = auVar413[0] | (byte)uVar284;
            bVar285 = auVar413[1] | (byte)((ulong)uVar284 >> 8);
            bVar286 = auVar413[2] | (byte)((ulong)uVar284 >> 0x10);
            bVar287 = auVar413[3] | (byte)((ulong)uVar284 >> 0x18);
            bVar288 = auVar413[4] | (byte)((ulong)uVar284 >> 0x20);
            bVar289 = auVar413[5] | (byte)((ulong)uVar284 >> 0x28);
            bVar290 = auVar413[6] | (byte)((ulong)uVar284 >> 0x30);
            bVar291 = auVar413[7] | (byte)((ulong)uVar284 >> 0x38);
            uVar284 = CONCAT17(bVar291,CONCAT16(bVar290,CONCAT15(bVar289,CONCAT14(bVar288,CONCAT13(
                                                  bVar287,CONCAT12(bVar286,CONCAT11(bVar285,bVar283)
                                                                  ))))));
            bVar292 = auVar413[8] | (byte)uVar293;
            bVar294 = auVar413[9] | (byte)((ulong)uVar293 >> 8);
            bVar295 = auVar413[10] | (byte)((ulong)uVar293 >> 0x10);
            bVar296 = auVar413[0xb] | (byte)((ulong)uVar293 >> 0x18);
            bVar297 = auVar413[0xc] | (byte)((ulong)uVar293 >> 0x20);
            bVar298 = auVar413[0xd] | (byte)((ulong)uVar293 >> 0x28);
            bVar299 = auVar413[0xe] | (byte)((ulong)uVar293 >> 0x30);
            bVar300 = auVar413[0xf] | (byte)((ulong)uVar293 >> 0x38);
            uVar293 = CONCAT17(bVar300,CONCAT16(bVar299,CONCAT15(bVar298,CONCAT14(bVar297,CONCAT13(
                                                  bVar296,CONCAT12(bVar295,CONCAT11(bVar294,bVar292)
                                                                  ))))));
            bVar373 = auVar397[0] | (byte)uVar374;
            bVar375 = auVar397[1] | (byte)((ulong)uVar374 >> 8);
            bVar376 = auVar397[2] | (byte)((ulong)uVar374 >> 0x10);
            bVar377 = auVar397[3] | (byte)((ulong)uVar374 >> 0x18);
            bVar378 = auVar397[4] | (byte)((ulong)uVar374 >> 0x20);
            bVar379 = auVar397[5] | (byte)((ulong)uVar374 >> 0x28);
            bVar380 = auVar397[6] | (byte)((ulong)uVar374 >> 0x30);
            bVar381 = auVar397[7] | (byte)((ulong)uVar374 >> 0x38);
            uVar374 = CONCAT17(bVar381,CONCAT16(bVar380,CONCAT15(bVar379,CONCAT14(bVar378,CONCAT13(
                                                  bVar377,CONCAT12(bVar376,CONCAT11(bVar375,bVar373)
                                                                  ))))));
            bVar382 = auVar397[8] | (byte)uVar383;
            bVar384 = auVar397[9] | (byte)((ulong)uVar383 >> 8);
            bVar385 = auVar397[10] | (byte)((ulong)uVar383 >> 0x10);
            bVar386 = auVar397[0xb] | (byte)((ulong)uVar383 >> 0x18);
            bVar387 = auVar397[0xc] | (byte)((ulong)uVar383 >> 0x20);
            bVar388 = auVar397[0xd] | (byte)((ulong)uVar383 >> 0x28);
            bVar389 = auVar397[0xe] | (byte)((ulong)uVar383 >> 0x30);
            bVar390 = auVar397[0xf] | (byte)((ulong)uVar383 >> 0x38);
            uVar383 = CONCAT17(bVar390,CONCAT16(bVar389,CONCAT15(bVar388,CONCAT14(bVar387,CONCAT13(
                                                  bVar386,CONCAT12(bVar385,CONCAT11(bVar384,bVar382)
                                                                  ))))));
            bVar355 = auVar419[0] | (byte)uVar356;
            bVar357 = auVar419[1] | (byte)((ulong)uVar356 >> 8);
            bVar358 = auVar419[2] | (byte)((ulong)uVar356 >> 0x10);
            bVar359 = auVar419[3] | (byte)((ulong)uVar356 >> 0x18);
            bVar360 = auVar419[4] | (byte)((ulong)uVar356 >> 0x20);
            bVar361 = auVar419[5] | (byte)((ulong)uVar356 >> 0x28);
            bVar362 = auVar419[6] | (byte)((ulong)uVar356 >> 0x30);
            bVar363 = auVar419[7] | (byte)((ulong)uVar356 >> 0x38);
            uVar356 = CONCAT17(bVar363,CONCAT16(bVar362,CONCAT15(bVar361,CONCAT14(bVar360,CONCAT13(
                                                  bVar359,CONCAT12(bVar358,CONCAT11(bVar357,bVar355)
                                                                  ))))));
            bVar364 = auVar419[8] | (byte)uVar365;
            bVar366 = auVar419[9] | (byte)((ulong)uVar365 >> 8);
            bVar367 = auVar419[10] | (byte)((ulong)uVar365 >> 0x10);
            bVar368 = auVar419[0xb] | (byte)((ulong)uVar365 >> 0x18);
            bVar369 = auVar419[0xc] | (byte)((ulong)uVar365 >> 0x20);
            bVar370 = auVar419[0xd] | (byte)((ulong)uVar365 >> 0x28);
            bVar371 = auVar419[0xe] | (byte)((ulong)uVar365 >> 0x30);
            bVar372 = auVar419[0xf] | (byte)((ulong)uVar365 >> 0x38);
            uVar365 = CONCAT17(bVar372,CONCAT16(bVar371,CONCAT15(bVar370,CONCAT14(bVar369,CONCAT13(
                                                  bVar368,CONCAT12(bVar367,CONCAT11(bVar366,bVar364)
                                                                  ))))));
            bVar301 = auVar166[0] | (byte)uVar302;
            bVar303 = auVar166[1] | (byte)((ulong)uVar302 >> 8);
            bVar304 = auVar166[2] | (byte)((ulong)uVar302 >> 0x10);
            bVar305 = auVar166[3] | (byte)((ulong)uVar302 >> 0x18);
            bVar306 = auVar166[4] | (byte)((ulong)uVar302 >> 0x20);
            bVar307 = auVar166[5] | (byte)((ulong)uVar302 >> 0x28);
            bVar308 = auVar166[6] | (byte)((ulong)uVar302 >> 0x30);
            bVar309 = auVar166[7] | (byte)((ulong)uVar302 >> 0x38);
            uVar302 = CONCAT17(bVar309,CONCAT16(bVar308,CONCAT15(bVar307,CONCAT14(bVar306,CONCAT13(
                                                  bVar305,CONCAT12(bVar304,CONCAT11(bVar303,bVar301)
                                                                  ))))));
            bVar310 = auVar166[8] | (byte)uVar311;
            bVar312 = auVar166[9] | (byte)((ulong)uVar311 >> 8);
            bVar313 = auVar166[10] | (byte)((ulong)uVar311 >> 0x10);
            bVar314 = auVar166[0xb] | (byte)((ulong)uVar311 >> 0x18);
            bVar315 = auVar166[0xc] | (byte)((ulong)uVar311 >> 0x20);
            bVar316 = auVar166[0xd] | (byte)((ulong)uVar311 >> 0x28);
            bVar317 = auVar166[0xe] | (byte)((ulong)uVar311 >> 0x30);
            bVar318 = auVar166[0xf] | (byte)((ulong)uVar311 >> 0x38);
            uVar311 = CONCAT17(bVar318,CONCAT16(bVar317,CONCAT15(bVar316,CONCAT14(bVar315,CONCAT13(
                                                  bVar314,CONCAT12(bVar313,CONCAT11(bVar312,bVar310)
                                                                  ))))));
            bVar319 = auVar417[0] | (byte)uVar320;
            bVar321 = auVar417[1] | (byte)((ulong)uVar320 >> 8);
            bVar322 = auVar417[2] | (byte)((ulong)uVar320 >> 0x10);
            bVar323 = auVar417[3] | (byte)((ulong)uVar320 >> 0x18);
            bVar324 = auVar417[4] | (byte)((ulong)uVar320 >> 0x20);
            bVar325 = auVar417[5] | (byte)((ulong)uVar320 >> 0x28);
            bVar326 = auVar417[6] | (byte)((ulong)uVar320 >> 0x30);
            bVar327 = auVar417[7] | (byte)((ulong)uVar320 >> 0x38);
            uVar320 = CONCAT17(bVar327,CONCAT16(bVar326,CONCAT15(bVar325,CONCAT14(bVar324,CONCAT13(
                                                  bVar323,CONCAT12(bVar322,CONCAT11(bVar321,bVar319)
                                                                  ))))));
            bVar328 = auVar417[8] | (byte)uVar329;
            bVar330 = auVar417[9] | (byte)((ulong)uVar329 >> 8);
            bVar331 = auVar417[10] | (byte)((ulong)uVar329 >> 0x10);
            bVar332 = auVar417[0xb] | (byte)((ulong)uVar329 >> 0x18);
            bVar333 = auVar417[0xc] | (byte)((ulong)uVar329 >> 0x20);
            bVar334 = auVar417[0xd] | (byte)((ulong)uVar329 >> 0x28);
            bVar335 = auVar417[0xe] | (byte)((ulong)uVar329 >> 0x30);
            bVar336 = auVar417[0xf] | (byte)((ulong)uVar329 >> 0x38);
            uVar329 = CONCAT17(bVar336,CONCAT16(bVar335,CONCAT15(bVar334,CONCAT14(bVar333,CONCAT13(
                                                  bVar332,CONCAT12(bVar331,CONCAT11(bVar330,bVar328)
                                                                  ))))));
            bVar229 = auVar147[0] | (byte)uVar230;
            bVar231 = auVar147[1] | (byte)((ulong)uVar230 >> 8);
            bVar232 = auVar147[2] | (byte)((ulong)uVar230 >> 0x10);
            bVar233 = auVar147[3] | (byte)((ulong)uVar230 >> 0x18);
            bVar234 = auVar147[4] | (byte)((ulong)uVar230 >> 0x20);
            bVar235 = auVar147[5] | (byte)((ulong)uVar230 >> 0x28);
            bVar236 = auVar147[6] | (byte)((ulong)uVar230 >> 0x30);
            bVar237 = auVar147[7] | (byte)((ulong)uVar230 >> 0x38);
            uVar230 = CONCAT17(bVar237,CONCAT16(bVar236,CONCAT15(bVar235,CONCAT14(bVar234,CONCAT13(
                                                  bVar233,CONCAT12(bVar232,CONCAT11(bVar231,bVar229)
                                                                  ))))));
            bVar238 = auVar147[8] | (byte)uVar239;
            bVar240 = auVar147[9] | (byte)((ulong)uVar239 >> 8);
            bVar241 = auVar147[10] | (byte)((ulong)uVar239 >> 0x10);
            bVar242 = auVar147[0xb] | (byte)((ulong)uVar239 >> 0x18);
            bVar243 = auVar147[0xc] | (byte)((ulong)uVar239 >> 0x20);
            bVar244 = auVar147[0xd] | (byte)((ulong)uVar239 >> 0x28);
            bVar245 = auVar147[0xe] | (byte)((ulong)uVar239 >> 0x30);
            bVar246 = auVar147[0xf] | (byte)((ulong)uVar239 >> 0x38);
            uVar239 = CONCAT17(bVar246,CONCAT16(bVar245,CONCAT15(bVar244,CONCAT14(bVar243,CONCAT13(
                                                  bVar242,CONCAT12(bVar241,CONCAT11(bVar240,bVar238)
                                                                  ))))));
            bVar95 = auVar405[0] | bVar95;
            bVar96 = auVar405[1] | bVar96;
            bVar97 = auVar405[2] | bVar97;
            bVar98 = auVar405[3] | bVar98;
            bVar99 = auVar405[4] | bVar99;
            bVar100 = auVar405[5] | bVar100;
            bVar101 = auVar405[6] | bVar101;
            bVar102 = auVar405[7] | bVar102;
            bVar103 = auVar405[8] | bVar103;
            bVar104 = auVar405[9] | bVar104;
            bVar105 = auVar405[10] | bVar105;
            bVar106 = auVar405[0xb] | bVar106;
            bVar107 = auVar405[0xc] | bVar107;
            bVar108 = auVar405[0xd] | bVar108;
            bVar109 = auVar405[0xe] | bVar109;
            bVar110 = auVar405[0xf] | bVar110;
            bVar247 = auVar411[0] | (byte)uVar248;
            bVar249 = auVar411[1] | (byte)((ulong)uVar248 >> 8);
            bVar250 = auVar411[2] | (byte)((ulong)uVar248 >> 0x10);
            bVar251 = auVar411[3] | (byte)((ulong)uVar248 >> 0x18);
            bVar252 = auVar411[4] | (byte)((ulong)uVar248 >> 0x20);
            bVar253 = auVar411[5] | (byte)((ulong)uVar248 >> 0x28);
            bVar254 = auVar411[6] | (byte)((ulong)uVar248 >> 0x30);
            bVar255 = auVar411[7] | (byte)((ulong)uVar248 >> 0x38);
            uVar248 = CONCAT17(bVar255,CONCAT16(bVar254,CONCAT15(bVar253,CONCAT14(bVar252,CONCAT13(
                                                  bVar251,CONCAT12(bVar250,CONCAT11(bVar249,bVar247)
                                                                  ))))));
            bVar256 = auVar411[8] | (byte)uVar257;
            bVar258 = auVar411[9] | (byte)((ulong)uVar257 >> 8);
            bVar259 = auVar411[10] | (byte)((ulong)uVar257 >> 0x10);
            bVar260 = auVar411[0xb] | (byte)((ulong)uVar257 >> 0x18);
            bVar261 = auVar411[0xc] | (byte)((ulong)uVar257 >> 0x20);
            bVar262 = auVar411[0xd] | (byte)((ulong)uVar257 >> 0x28);
            bVar263 = auVar411[0xe] | (byte)((ulong)uVar257 >> 0x30);
            bVar264 = auVar411[0xf] | (byte)((ulong)uVar257 >> 0x38);
            uVar257 = CONCAT17(bVar264,CONCAT16(bVar263,CONCAT15(bVar262,CONCAT14(bVar261,CONCAT13(
                                                  bVar260,CONCAT12(bVar259,CONCAT11(bVar258,bVar256)
                                                                  ))))));
          } while (uVar91 != 0);
          bVar95 = bVar247 | bVar127 | bVar301 | bVar164 | bVar229 | bVar111 | bVar283 | bVar144 |
                   bVar95 | bVar201 | bVar319 | bVar183 | bVar355 | bVar265 | bVar373 | bVar337;
          bVar96 = bVar249 | bVar128 | bVar303 | bVar168 | bVar231 | bVar112 | bVar285 | bVar149 |
                   bVar96 | bVar203 | bVar321 | bVar185 | bVar357 | bVar267 | bVar375 | bVar339;
          bVar97 = bVar250 | bVar129 | bVar304 | bVar169 | bVar232 | bVar113 | bVar286 | bVar150 |
                   bVar97 | bVar204 | bVar322 | bVar186 | bVar358 | bVar268 | bVar376 | bVar340;
          bVar98 = bVar251 | bVar130 | bVar305 | bVar170 | bVar233 | bVar114 | bVar287 | bVar151 |
                   bVar98 | bVar205 | bVar323 | bVar187 | bVar359 | bVar269 | bVar377 | bVar341;
          bVar99 = bVar252 | bVar131 | bVar306 | bVar171 | bVar234 | bVar115 | bVar288 | bVar152 |
                   bVar99 | bVar206 | bVar324 | bVar188 | bVar360 | bVar270 | bVar378 | bVar342;
          bVar100 = bVar253 | bVar132 | bVar307 | bVar172 | bVar235 | bVar116 | bVar289 | bVar153 |
                    bVar100 | bVar207 | bVar325 | bVar189 | bVar361 | bVar271 | bVar379 | bVar343;
          bVar101 = bVar254 | bVar133 | bVar308 | bVar173 | bVar236 | bVar117 | bVar290 | bVar154 |
                    bVar101 | bVar208 | bVar326 | bVar190 | bVar362 | bVar272 | bVar380 | bVar344;
          bVar102 = bVar255 | bVar134 | bVar309 | bVar174 | bVar237 | bVar118 | bVar291 | bVar155 |
                    bVar102 | bVar209 | bVar327 | bVar191 | bVar363 | bVar273 | bVar381 | bVar345;
          bVar103 = bVar256 | bVar135 | bVar310 | bVar175 | bVar238 | bVar119 | bVar292 | bVar156 |
                    bVar103 | bVar210 | bVar328 | bVar192 | bVar364 | bVar274 | bVar382 | bVar346;
          bVar104 = bVar258 | bVar137 | bVar312 | bVar176 | bVar240 | bVar120 | bVar294 | bVar157 |
                    bVar104 | bVar212 | bVar330 | bVar194 | bVar366 | bVar276 | bVar384 | bVar348;
          bVar105 = bVar259 | bVar138 | bVar313 | bVar177 | bVar241 | bVar121 | bVar295 | bVar158 |
                    bVar105 | bVar213 | bVar331 | bVar195 | bVar367 | bVar277 | bVar385 | bVar349;
          bVar106 = bVar260 | bVar139 | bVar314 | bVar178 | bVar242 | bVar122 | bVar296 | bVar159 |
                    bVar106 | bVar214 | bVar332 | bVar196 | bVar368 | bVar278 | bVar386 | bVar350;
          bVar107 = bVar261 | bVar140 | bVar315 | bVar179 | bVar243 | bVar123 | bVar297 | bVar160 |
                    bVar107 | bVar215 | bVar333 | bVar197 | bVar369 | bVar279 | bVar387 | bVar351;
          bVar108 = bVar262 | bVar141 | bVar316 | bVar180 | bVar244 | bVar124 | bVar298 | bVar161 |
                    bVar108 | bVar216 | bVar334 | bVar198 | bVar370 | bVar280 | bVar388 | bVar352;
          bVar109 = bVar263 | bVar142 | bVar317 | bVar181 | bVar245 | bVar125 | bVar299 | bVar162 |
                    bVar109 | bVar217 | bVar335 | bVar199 | bVar371 | bVar281 | bVar389 | bVar353;
          bVar110 = bVar264 | bVar143 | bVar318 | bVar182 | bVar246 | bVar126 | bVar300 | bVar163 |
                    bVar110 | bVar218 | bVar336 | bVar200 | bVar372 | bVar282 | bVar390 | bVar354;
          auVar9[1] = bVar96;
          auVar9[0] = bVar95;
          auVar9[2] = bVar97;
          auVar9[3] = bVar98;
          auVar9[4] = bVar99;
          auVar9[5] = bVar100;
          auVar9[6] = bVar101;
          auVar9[7] = bVar102;
          auVar9[8] = bVar103;
          auVar9[9] = bVar104;
          auVar9[10] = bVar105;
          auVar9[0xb] = bVar106;
          auVar9[0xc] = bVar107;
          auVar9[0xd] = bVar108;
          auVar9[0xe] = bVar109;
          auVar9[0xf] = bVar110;
          auVar10[1] = bVar96;
          auVar10[0] = bVar95;
          auVar10[2] = bVar97;
          auVar10[3] = bVar98;
          auVar10[4] = bVar99;
          auVar10[5] = bVar100;
          auVar10[6] = bVar101;
          auVar10[7] = bVar102;
          auVar10[8] = bVar103;
          auVar10[9] = bVar104;
          auVar10[10] = bVar105;
          auVar10[0xb] = bVar106;
          auVar10[0xc] = bVar107;
          auVar10[0xd] = bVar108;
          auVar10[0xe] = bVar109;
          auVar10[0xf] = bVar110;
          auVar147 = NEON_ext(auVar9,auVar10,8,1);
          uVar91 = CONCAT17(bVar102 | auVar147[7],
                            CONCAT16(bVar101 | auVar147[6],
                                     CONCAT15(bVar100 | auVar147[5],
                                              CONCAT14(bVar99 | auVar147[4],
                                                       CONCAT13(bVar98 | auVar147[3],
                                                                CONCAT12(bVar97 | auVar147[2],
                                                                         CONCAT11(bVar96 | auVar147[
                                                  1],bVar95 | auVar147[0])))))));
          if (uVar84 == uVar93) goto LAB_00a9d260;
          uVar82 = uVar93;
          if ((uVar84 & 0x1c) == 0) goto LAB_00a9d244;
        }
        bVar103 = 0;
        bVar104 = 0;
        bVar105 = 0;
        bVar106 = 0;
        bVar107 = 0;
        bVar108 = 0;
        bVar109 = 0;
        bVar110 = 0;
        bVar111 = 0;
        bVar112 = 0;
        bVar113 = 0;
        bVar114 = 0;
        bVar115 = 0;
        bVar116 = 0;
        bVar117 = 0;
        bVar118 = 0;
        bVar119 = 0;
        bVar120 = 0;
        bVar121 = 0;
        bVar122 = 0;
        bVar123 = 0;
        bVar124 = 0;
        bVar125 = 0;
        bVar126 = 0;
        bVar95 = (byte)uVar91;
        bVar96 = (byte)(uVar91 >> 8);
        bVar97 = (byte)(uVar91 >> 0x10);
        bVar98 = (byte)(uVar91 >> 0x18);
        bVar99 = (byte)(uVar91 >> 0x20);
        bVar100 = (byte)(uVar91 >> 0x28);
        bVar101 = (byte)(uVar91 >> 0x30);
        bVar102 = (byte)(uVar91 >> 0x38);
        uVar93 = uVar84 & 0xfffffffffffffffc;
        lVar85 = uVar82 - uVar93;
        puVar90 = (undefined4 *)((long)param_4 + uVar82);
        do {
          uVar145 = *puVar90;
          lVar85 = lVar85 + 4;
          uVar91 = (ulong)CONCAT16((char)((uint)uVar145 >> 0x18),
                                   (uint6)CONCAT14((char)((uint)uVar145 >> 0x10),
                                                   (uint)CONCAT12((char)((uint)uVar145 >> 8),
                                                                  (ushort)(byte)uVar145)));
          uVar82 = uVar91 & 0xff3fff3fff3fff3f;
          auVar148._0_8_ = uVar91 & 0xff3f;
          auVar167._0_8_ = uVar82 >> 0x20 & 0xff;
          auVar167[8] = (char)(uVar82 >> 0x30);
          auVar167._9_7_ = 0;
          auVar148[8] = (char)(uVar82 >> 0x10);
          auVar148._9_7_ = 0;
          auVar13[8] = 1;
          auVar13._0_8_ = 1;
          auVar13._9_7_ = 0;
          auVar147 = NEON_ushl(auVar13,auVar148,8);
          auVar14[8] = 1;
          auVar14._0_8_ = 1;
          auVar14._9_7_ = 0;
          auVar166 = NEON_ushl(auVar14,auVar167,8);
          bVar111 = auVar166[0] | bVar111;
          bVar112 = auVar166[1] | bVar112;
          bVar113 = auVar166[2] | bVar113;
          bVar114 = auVar166[3] | bVar114;
          bVar115 = auVar166[4] | bVar115;
          bVar116 = auVar166[5] | bVar116;
          bVar117 = auVar166[6] | bVar117;
          bVar118 = auVar166[7] | bVar118;
          bVar119 = auVar166[8] | bVar119;
          bVar120 = auVar166[9] | bVar120;
          bVar121 = auVar166[10] | bVar121;
          bVar122 = auVar166[0xb] | bVar122;
          bVar123 = auVar166[0xc] | bVar123;
          bVar124 = auVar166[0xd] | bVar124;
          bVar125 = auVar166[0xe] | bVar125;
          bVar126 = auVar166[0xf] | bVar126;
          bVar95 = auVar147[0] | bVar95;
          bVar96 = auVar147[1] | bVar96;
          bVar97 = auVar147[2] | bVar97;
          bVar98 = auVar147[3] | bVar98;
          bVar99 = auVar147[4] | bVar99;
          bVar100 = auVar147[5] | bVar100;
          bVar101 = auVar147[6] | bVar101;
          bVar102 = auVar147[7] | bVar102;
          bVar103 = auVar147[8] | bVar103;
          bVar104 = auVar147[9] | bVar104;
          bVar105 = auVar147[10] | bVar105;
          bVar106 = auVar147[0xb] | bVar106;
          bVar107 = auVar147[0xc] | bVar107;
          bVar108 = auVar147[0xd] | bVar108;
          bVar109 = auVar147[0xe] | bVar109;
          bVar110 = auVar147[0xf] | bVar110;
          puVar90 = puVar90 + 1;
        } while (lVar85 != 0);
        bVar95 = bVar95 | bVar111;
        bVar96 = bVar96 | bVar112;
        bVar97 = bVar97 | bVar113;
        bVar98 = bVar98 | bVar114;
        bVar99 = bVar99 | bVar115;
        bVar100 = bVar100 | bVar116;
        bVar101 = bVar101 | bVar117;
        bVar102 = bVar102 | bVar118;
        auVar7[1] = bVar96;
        auVar7[0] = bVar95;
        auVar7[2] = bVar97;
        auVar7[3] = bVar98;
        auVar7[4] = bVar99;
        auVar7[5] = bVar100;
        auVar7[6] = bVar101;
        auVar7[7] = bVar102;
        auVar7[8] = bVar103 | bVar119;
        auVar7[9] = bVar104 | bVar120;
        auVar7[10] = bVar105 | bVar121;
        auVar7[0xb] = bVar106 | bVar122;
        auVar7[0xc] = bVar107 | bVar123;
        auVar7[0xd] = bVar108 | bVar124;
        auVar7[0xe] = bVar109 | bVar125;
        auVar7[0xf] = bVar110 | bVar126;
        auVar8[1] = bVar96;
        auVar8[0] = bVar95;
        auVar8[2] = bVar97;
        auVar8[3] = bVar98;
        auVar8[4] = bVar99;
        auVar8[5] = bVar100;
        auVar8[6] = bVar101;
        auVar8[7] = bVar102;
        auVar8[8] = bVar103 | bVar119;
        auVar8[9] = bVar104 | bVar120;
        auVar8[10] = bVar105 | bVar121;
        auVar8[0xb] = bVar106 | bVar122;
        auVar8[0xc] = bVar107 | bVar123;
        auVar8[0xd] = bVar108 | bVar124;
        auVar8[0xe] = bVar109 | bVar125;
        auVar8[0xf] = bVar110 | bVar126;
        auVar147 = NEON_ext(auVar7,auVar8,8,1);
        uVar91 = CONCAT17(bVar102 | auVar147[7],
                          CONCAT16(bVar101 | auVar147[6],
                                   CONCAT15(bVar100 | auVar147[5],
                                            CONCAT14(bVar99 | auVar147[4],
                                                     CONCAT13(bVar98 | auVar147[3],
                                                              CONCAT12(bVar97 | auVar147[2],
                                                                       CONCAT11(bVar96 | auVar147[1]
                                                                                ,bVar95 | auVar147[0
                                                  ])))))));
        if (uVar84 == uVar93) goto LAB_00a9d260;
      }
LAB_00a9d244:
      do {
        pbVar83 = (byte *)((long)param_4 + uVar93);
        uVar93 = uVar93 + 1;
        uVar91 = 1L << ((ulong)*pbVar83 & 0x3f) | uVar91;
      } while (uVar84 != uVar93);
    }
LAB_00a9d260:
    uVar86 = 0;
    uVar93 = param_5;
    goto LAB_00a9d264;
  }
  if (param_5 < 4) {
    uVar87 = 0;
    uVar91 = 0;
LAB_00a9cfb4:
    lVar85 = param_5 - uVar87;
    pbVar83 = (byte *)((long)param_4 + uVar87);
    do {
      lVar85 = lVar85 + -1;
      uVar91 = 1L << ((ulong)*pbVar83 & 0x3f) | uVar91;
      pbVar83 = pbVar83 + 1;
    } while (lVar85 != 0);
  }
  else if (param_5 < 0x20) {
    uVar91 = 0;
    uVar84 = 0;
LAB_00a9cf3c:
    bVar103 = 0;
    bVar104 = 0;
    bVar105 = 0;
    bVar106 = 0;
    bVar107 = 0;
    bVar108 = 0;
    bVar109 = 0;
    bVar110 = 0;
    bVar111 = 0;
    bVar112 = 0;
    bVar113 = 0;
    bVar114 = 0;
    bVar115 = 0;
    bVar116 = 0;
    bVar117 = 0;
    bVar118 = 0;
    bVar119 = 0;
    bVar120 = 0;
    bVar121 = 0;
    bVar122 = 0;
    bVar123 = 0;
    bVar124 = 0;
    bVar125 = 0;
    bVar126 = 0;
    uVar87 = param_5 & 0xfffffffffffffffc;
    lVar85 = uVar84 - uVar87;
    bVar95 = (byte)uVar91;
    bVar96 = (byte)(uVar91 >> 8);
    bVar97 = (byte)(uVar91 >> 0x10);
    bVar98 = (byte)(uVar91 >> 0x18);
    bVar99 = (byte)(uVar91 >> 0x20);
    bVar100 = (byte)(uVar91 >> 0x28);
    bVar101 = (byte)(uVar91 >> 0x30);
    bVar102 = (byte)(uVar91 >> 0x38);
    puVar90 = (undefined4 *)((long)param_4 + uVar84);
    do {
      uVar145 = *puVar90;
      lVar85 = lVar85 + 4;
      uVar84 = (ulong)CONCAT16((char)((uint)uVar145 >> 0x18),
                               (uint6)CONCAT14((char)((uint)uVar145 >> 0x10),
                                               (uint)CONCAT12((char)((uint)uVar145 >> 8),
                                                              (ushort)(byte)uVar145)));
      uVar91 = uVar84 & 0xff3fff3fff3fff3f;
      auVar146._0_8_ = uVar84 & 0xff3f;
      auVar165._0_8_ = uVar91 >> 0x20 & 0xff;
      auVar165[8] = (char)(uVar91 >> 0x30);
      auVar165._9_7_ = 0;
      auVar146[8] = (char)(uVar91 >> 0x10);
      auVar146._9_7_ = 0;
      auVar11[8] = 1;
      auVar11._0_8_ = 1;
      auVar11._9_7_ = 0;
      auVar147 = NEON_ushl(auVar11,auVar146,8);
      auVar12[8] = 1;
      auVar12._0_8_ = 1;
      auVar12._9_7_ = 0;
      auVar166 = NEON_ushl(auVar12,auVar165,8);
      bVar111 = auVar166[0] | bVar111;
      bVar112 = auVar166[1] | bVar112;
      bVar113 = auVar166[2] | bVar113;
      bVar114 = auVar166[3] | bVar114;
      bVar115 = auVar166[4] | bVar115;
      bVar116 = auVar166[5] | bVar116;
      bVar117 = auVar166[6] | bVar117;
      bVar118 = auVar166[7] | bVar118;
      bVar119 = auVar166[8] | bVar119;
      bVar120 = auVar166[9] | bVar120;
      bVar121 = auVar166[10] | bVar121;
      bVar122 = auVar166[0xb] | bVar122;
      bVar123 = auVar166[0xc] | bVar123;
      bVar124 = auVar166[0xd] | bVar124;
      bVar125 = auVar166[0xe] | bVar125;
      bVar126 = auVar166[0xf] | bVar126;
      bVar95 = auVar147[0] | bVar95;
      bVar96 = auVar147[1] | bVar96;
      bVar97 = auVar147[2] | bVar97;
      bVar98 = auVar147[3] | bVar98;
      bVar99 = auVar147[4] | bVar99;
      bVar100 = auVar147[5] | bVar100;
      bVar101 = auVar147[6] | bVar101;
      bVar102 = auVar147[7] | bVar102;
      bVar103 = auVar147[8] | bVar103;
      bVar104 = auVar147[9] | bVar104;
      bVar105 = auVar147[10] | bVar105;
      bVar106 = auVar147[0xb] | bVar106;
      bVar107 = auVar147[0xc] | bVar107;
      bVar108 = auVar147[0xd] | bVar108;
      bVar109 = auVar147[0xe] | bVar109;
      bVar110 = auVar147[0xf] | bVar110;
      puVar90 = puVar90 + 1;
    } while (lVar85 != 0);
    bVar95 = bVar95 | bVar111;
    bVar96 = bVar96 | bVar112;
    bVar97 = bVar97 | bVar113;
    bVar98 = bVar98 | bVar114;
    bVar99 = bVar99 | bVar115;
    bVar100 = bVar100 | bVar116;
    bVar101 = bVar101 | bVar117;
    bVar102 = bVar102 | bVar118;
    auVar3[1] = bVar96;
    auVar3[0] = bVar95;
    auVar3[2] = bVar97;
    auVar3[3] = bVar98;
    auVar3[4] = bVar99;
    auVar3[5] = bVar100;
    auVar3[6] = bVar101;
    auVar3[7] = bVar102;
    auVar3[8] = bVar103 | bVar119;
    auVar3[9] = bVar104 | bVar120;
    auVar3[10] = bVar105 | bVar121;
    auVar3[0xb] = bVar106 | bVar122;
    auVar3[0xc] = bVar107 | bVar123;
    auVar3[0xd] = bVar108 | bVar124;
    auVar3[0xe] = bVar109 | bVar125;
    auVar3[0xf] = bVar110 | bVar126;
    auVar4[1] = bVar96;
    auVar4[0] = bVar95;
    auVar4[2] = bVar97;
    auVar4[3] = bVar98;
    auVar4[4] = bVar99;
    auVar4[5] = bVar100;
    auVar4[6] = bVar101;
    auVar4[7] = bVar102;
    auVar4[8] = bVar103 | bVar119;
    auVar4[9] = bVar104 | bVar120;
    auVar4[10] = bVar105 | bVar121;
    auVar4[0xb] = bVar106 | bVar122;
    auVar4[0xc] = bVar107 | bVar123;
    auVar4[0xd] = bVar108 | bVar124;
    auVar4[0xe] = bVar109 | bVar125;
    auVar4[0xf] = bVar110 | bVar126;
    auVar147 = NEON_ext(auVar3,auVar4,8,1);
    uVar91 = CONCAT17(bVar102 | auVar147[7],
                      CONCAT16(bVar101 | auVar147[6],
                               CONCAT15(bVar100 | auVar147[5],
                                        CONCAT14(bVar99 | auVar147[4],
                                                 CONCAT13(bVar98 | auVar147[3],
                                                          CONCAT12(bVar97 | auVar147[2],
                                                                   CONCAT11(bVar96 | auVar147[1],
                                                                            bVar95 | auVar147[0]))))
                                       )));
    if (param_5 != uVar87) goto LAB_00a9cfb4;
  }
  else {
    bVar95 = 0;
    bVar96 = 0;
    bVar97 = 0;
    bVar98 = 0;
    bVar99 = 0;
    bVar100 = 0;
    bVar101 = 0;
    bVar102 = 0;
    bVar103 = 0;
    bVar104 = 0;
    bVar105 = 0;
    bVar106 = 0;
    bVar107 = 0;
    bVar108 = 0;
    bVar109 = 0;
    bVar110 = 0;
    uVar86 = 0;
    uVar136 = 0;
    uVar202 = 0;
    uVar211 = 0;
    bVar111 = 0;
    bVar112 = 0;
    bVar113 = 0;
    bVar114 = 0;
    bVar115 = 0;
    bVar116 = 0;
    bVar117 = 0;
    bVar118 = 0;
    bVar119 = 0;
    bVar120 = 0;
    bVar121 = 0;
    bVar122 = 0;
    bVar123 = 0;
    bVar124 = 0;
    bVar125 = 0;
    bVar126 = 0;
    uVar266 = 0;
    uVar275 = 0;
    pbVar83 = (byte *)((long)param_4 + 0x10);
    bVar164 = 0;
    bVar168 = 0;
    bVar169 = 0;
    bVar170 = 0;
    bVar171 = 0;
    bVar172 = 0;
    bVar173 = 0;
    bVar174 = 0;
    bVar175 = 0;
    bVar176 = 0;
    bVar177 = 0;
    bVar178 = 0;
    bVar179 = 0;
    bVar180 = 0;
    bVar181 = 0;
    bVar182 = 0;
    uVar184 = 0;
    uVar193 = 0;
    uVar84 = param_5 & 0xffffffffffffffe0;
    bVar144 = 0;
    bVar149 = 0;
    bVar150 = 0;
    bVar151 = 0;
    bVar152 = 0;
    bVar153 = 0;
    bVar154 = 0;
    bVar155 = 0;
    bVar156 = 0;
    bVar157 = 0;
    bVar158 = 0;
    bVar159 = 0;
    bVar160 = 0;
    bVar161 = 0;
    bVar162 = 0;
    bVar163 = 0;
    uVar338 = 0;
    uVar347 = 0;
    uVar248 = 0;
    uVar257 = 0;
    uVar230 = 0;
    uVar239 = 0;
    uVar356 = 0;
    uVar365 = 0;
    uVar302 = 0;
    uVar311 = 0;
    uVar320 = 0;
    uVar329 = 0;
    uVar284 = 0;
    uVar293 = 0;
    uVar374 = 0;
    uVar383 = 0;
    uVar87 = param_5 & 0xffffffffffffffe0;
    do {
      pbVar1 = pbVar83 + -0x10;
      bVar127 = pbVar83[-0xf];
      pbVar54 = pbVar83 + -0xe;
      pbVar55 = pbVar83 + -0xd;
      pbVar56 = pbVar83 + -0xc;
      pbVar57 = pbVar83 + -0xb;
      pbVar58 = pbVar83 + -10;
      pbVar59 = pbVar83 + -9;
      pbVar60 = pbVar83 + -8;
      bVar128 = pbVar83[-7];
      pbVar61 = pbVar83 + -6;
      pbVar62 = pbVar83 + -5;
      pbVar63 = pbVar83 + -4;
      pbVar64 = pbVar83 + -3;
      pbVar65 = pbVar83 + -2;
      pbVar66 = pbVar83 + -1;
      bVar129 = *pbVar83;
      bVar130 = pbVar83[1];
      pbVar67 = pbVar83 + 2;
      pbVar68 = pbVar83 + 3;
      pbVar69 = pbVar83 + 4;
      pbVar70 = pbVar83 + 5;
      pbVar71 = pbVar83 + 6;
      pbVar72 = pbVar83 + 7;
      pbVar73 = pbVar83 + 8;
      bVar131 = pbVar83[9];
      pbVar74 = pbVar83 + 10;
      pbVar75 = pbVar83 + 0xb;
      pbVar76 = pbVar83 + 0xc;
      pbVar77 = pbVar83 + 0xd;
      pbVar78 = pbVar83 + 0xe;
      pbVar79 = pbVar83 + 0xf;
      uVar84 = uVar84 - 0x20;
      pbVar83 = pbVar83 + 0x20;
      uVar93 = CONCAT35(0,CONCAT14(*pbVar64,(uint)(*pbVar63 & 0x3f)) & 0x3fffffffff);
      auVar38[8] = *pbVar65 & 0x3f;
      auVar38._0_8_ = uVar93;
      auVar38._9_3_ = 0;
      auVar38[0xc] = *pbVar66 & 0x3f;
      uVar91 = CONCAT26(0,(uint6)(CONCAT14(bVar128,(uint)(CONCAT12(bVar128,(ushort)(*pbVar60 & 0x3f)
                                                                  ) & 0x3fffff)) & 0x3fffffffff) &
                          0xffff0000ffff);
      auVar46[8] = *pbVar61 & 0x3f;
      auVar46._0_8_ = uVar91;
      auVar46._9_3_ = 0;
      auVar46[0xc] = *pbVar62 & 0x3f;
      uVar92 = CONCAT35(0,CONCAT14(*pbVar57,(uint)(*pbVar56 & 0x3f)) & 0x3fffffffff);
      auVar39[8] = *pbVar58 & 0x3f;
      auVar39._0_8_ = uVar92;
      auVar39._9_3_ = 0;
      auVar39[0xc] = *pbVar59 & 0x3f;
      uVar82 = CONCAT26(0,(uint6)(CONCAT14(bVar127,(uint)(CONCAT12(bVar127,(ushort)(*pbVar1 & 0x3f))
                                                         & 0x3fffff)) & 0x3fffffffff) &
                          0xffff0000ffff);
      auVar47[8] = *pbVar54 & 0x3f;
      auVar47._0_8_ = uVar82;
      auVar47._9_3_ = 0;
      auVar47[0xc] = *pbVar55 & 0x3f;
      auVar410._0_8_ = (ulong)auVar38._8_5_ & 0xffffffff;
      auVar410._8_5_ = auVar38._8_5_ >> 0x20;
      auVar410._13_3_ = 0;
      auVar401._0_8_ = uVar93 & 0xffffffff;
      auVar401[8] = *pbVar64 & 0x3f;
      auVar401._9_7_ = 0;
      auVar219._0_8_ = (ulong)auVar46._8_5_ & 0xffffffff;
      auVar219._8_5_ = auVar46._8_5_ >> 0x20;
      auVar219._13_3_ = 0;
      auVar225._0_8_ = (ulong)auVar39._8_5_ & 0xffffffff;
      auVar225._8_5_ = auVar39._8_5_ >> 0x20;
      auVar225._13_3_ = 0;
      auVar396._0_8_ = uVar91 & 0xffffffff;
      auVar396[8] = bVar128 & 0x3f;
      auVar396._9_7_ = 0;
      auVar416._0_8_ = uVar92 & 0xffffffff;
      auVar416[8] = *pbVar57 & 0x3f;
      auVar416._9_7_ = 0;
      auVar15._8_8_ = 1;
      auVar15._0_8_ = 1;
      auVar402 = NEON_ushl(auVar15,auVar401,8);
      auVar16._8_8_ = 1;
      auVar16._0_8_ = 1;
      auVar411 = NEON_ushl(auVar16,auVar410,8);
      auVar17._8_8_ = 1;
      auVar17._0_8_ = 1;
      auVar147 = NEON_ushl(auVar17,auVar219,8);
      auVar18._8_8_ = 1;
      auVar18._0_8_ = 1;
      auVar166 = NEON_ushl(auVar18,auVar225,8);
      auVar19._8_8_ = 1;
      auVar19._0_8_ = 1;
      auVar417 = NEON_ushl(auVar19,auVar416,8);
      auVar20._8_8_ = 1;
      auVar20._0_8_ = 1;
      auVar397 = NEON_ushl(auVar20,auVar396,8);
      bVar144 = auVar402[0] | bVar144;
      bVar149 = auVar402[1] | bVar149;
      bVar150 = auVar402[2] | bVar150;
      bVar151 = auVar402[3] | bVar151;
      bVar152 = auVar402[4] | bVar152;
      bVar153 = auVar402[5] | bVar153;
      bVar154 = auVar402[6] | bVar154;
      bVar155 = auVar402[7] | bVar155;
      bVar156 = auVar402[8] | bVar156;
      bVar157 = auVar402[9] | bVar157;
      bVar158 = auVar402[10] | bVar158;
      bVar159 = auVar402[0xb] | bVar159;
      bVar160 = auVar402[0xc] | bVar160;
      bVar161 = auVar402[0xd] | bVar161;
      bVar162 = auVar402[0xe] | bVar162;
      bVar163 = auVar402[0xf] | bVar163;
      auVar403._0_8_ = (ulong)auVar47._8_5_ & 0xffffffff;
      auVar403._8_5_ = auVar47._8_5_ >> 0x20;
      auVar403._13_3_ = 0;
      bVar337 = auVar411[0] | (byte)uVar338;
      bVar339 = auVar411[1] | (byte)((ulong)uVar338 >> 8);
      bVar340 = auVar411[2] | (byte)((ulong)uVar338 >> 0x10);
      bVar341 = auVar411[3] | (byte)((ulong)uVar338 >> 0x18);
      bVar342 = auVar411[4] | (byte)((ulong)uVar338 >> 0x20);
      bVar343 = auVar411[5] | (byte)((ulong)uVar338 >> 0x28);
      bVar344 = auVar411[6] | (byte)((ulong)uVar338 >> 0x30);
      bVar345 = auVar411[7] | (byte)((ulong)uVar338 >> 0x38);
      uVar338 = CONCAT17(bVar345,CONCAT16(bVar344,CONCAT15(bVar343,CONCAT14(bVar342,CONCAT13(bVar341
                                                  ,CONCAT12(bVar340,CONCAT11(bVar339,bVar337)))))));
      bVar346 = auVar411[8] | (byte)uVar347;
      bVar348 = auVar411[9] | (byte)((ulong)uVar347 >> 8);
      bVar349 = auVar411[10] | (byte)((ulong)uVar347 >> 0x10);
      bVar350 = auVar411[0xb] | (byte)((ulong)uVar347 >> 0x18);
      bVar351 = auVar411[0xc] | (byte)((ulong)uVar347 >> 0x20);
      bVar352 = auVar411[0xd] | (byte)((ulong)uVar347 >> 0x28);
      bVar353 = auVar411[0xe] | (byte)((ulong)uVar347 >> 0x30);
      bVar354 = auVar411[0xf] | (byte)((ulong)uVar347 >> 0x38);
      uVar347 = CONCAT17(bVar354,CONCAT16(bVar353,CONCAT15(bVar352,CONCAT14(bVar351,CONCAT13(bVar350
                                                  ,CONCAT12(bVar349,CONCAT11(bVar348,bVar346)))))));
      uVar94 = CONCAT35(0,CONCAT14(*pbVar77,(uint)(*pbVar76 & 0x3f)) & 0x3fffffffff);
      auVar40[8] = *pbVar78 & 0x3f;
      auVar40._0_8_ = uVar94;
      auVar40._9_3_ = 0;
      auVar40[0xc] = *pbVar79 & 0x3f;
      uVar93 = CONCAT26(0,(uint6)(CONCAT14(bVar131,(uint)(CONCAT12(bVar131,(ushort)(*pbVar73 & 0x3f)
                                                                  ) & 0x3fffff)) & 0x3fffffffff) &
                          0xffff0000ffff);
      auVar48[8] = *pbVar74 & 0x3f;
      auVar48._0_8_ = uVar93;
      auVar48._9_3_ = 0;
      auVar48[0xc] = *pbVar75 & 0x3f;
      bVar183 = auVar147[0] | (byte)uVar184;
      bVar185 = auVar147[1] | (byte)((ulong)uVar184 >> 8);
      bVar186 = auVar147[2] | (byte)((ulong)uVar184 >> 0x10);
      bVar187 = auVar147[3] | (byte)((ulong)uVar184 >> 0x18);
      bVar188 = auVar147[4] | (byte)((ulong)uVar184 >> 0x20);
      bVar189 = auVar147[5] | (byte)((ulong)uVar184 >> 0x28);
      bVar190 = auVar147[6] | (byte)((ulong)uVar184 >> 0x30);
      bVar191 = auVar147[7] | (byte)((ulong)uVar184 >> 0x38);
      uVar184 = CONCAT17(bVar191,CONCAT16(bVar190,CONCAT15(bVar189,CONCAT14(bVar188,CONCAT13(bVar187
                                                  ,CONCAT12(bVar186,CONCAT11(bVar185,bVar183)))))));
      bVar192 = auVar147[8] | (byte)uVar193;
      bVar194 = auVar147[9] | (byte)((ulong)uVar193 >> 8);
      bVar195 = auVar147[10] | (byte)((ulong)uVar193 >> 0x10);
      bVar196 = auVar147[0xb] | (byte)((ulong)uVar193 >> 0x18);
      bVar197 = auVar147[0xc] | (byte)((ulong)uVar193 >> 0x20);
      bVar198 = auVar147[0xd] | (byte)((ulong)uVar193 >> 0x28);
      bVar199 = auVar147[0xe] | (byte)((ulong)uVar193 >> 0x30);
      bVar200 = auVar147[0xf] | (byte)((ulong)uVar193 >> 0x38);
      uVar193 = CONCAT17(bVar200,CONCAT16(bVar199,CONCAT15(bVar198,CONCAT14(bVar197,CONCAT13(bVar196
                                                  ,CONCAT12(bVar195,CONCAT11(bVar194,bVar192)))))));
      uVar91 = CONCAT35(0,CONCAT14(*pbVar70,(uint)(*pbVar69 & 0x3f)) & 0x3fffffffff);
      auVar41[8] = *pbVar71 & 0x3f;
      auVar41._0_8_ = uVar91;
      auVar41._9_3_ = 0;
      auVar41[0xc] = *pbVar72 & 0x3f;
      uVar92 = CONCAT26(0,(uint6)(CONCAT14(bVar130,(uint)(CONCAT12(bVar130,(ushort)(bVar129 & 0x3f))
                                                         & 0x3fffff)) & 0x3fffffffff) &
                          0xffff0000ffff);
      auVar49[8] = *pbVar67 & 0x3f;
      auVar49._0_8_ = uVar92;
      auVar49._9_3_ = 0;
      auVar49[0xc] = *pbVar68 & 0x3f;
      auVar391._0_8_ = uVar82 & 0xffffffff;
      auVar391[8] = bVar127 & 0x3f;
      auVar391._9_7_ = 0;
      auVar21._8_8_ = 1;
      auVar21._0_8_ = 1;
      auVar147 = NEON_ushl(auVar21,auVar403,8);
      bVar265 = auVar166[0] | (byte)uVar266;
      bVar267 = auVar166[1] | (byte)((ulong)uVar266 >> 8);
      bVar268 = auVar166[2] | (byte)((ulong)uVar266 >> 0x10);
      bVar269 = auVar166[3] | (byte)((ulong)uVar266 >> 0x18);
      bVar270 = auVar166[4] | (byte)((ulong)uVar266 >> 0x20);
      bVar271 = auVar166[5] | (byte)((ulong)uVar266 >> 0x28);
      bVar272 = auVar166[6] | (byte)((ulong)uVar266 >> 0x30);
      bVar273 = auVar166[7] | (byte)((ulong)uVar266 >> 0x38);
      uVar266 = CONCAT17(bVar273,CONCAT16(bVar272,CONCAT15(bVar271,CONCAT14(bVar270,CONCAT13(bVar269
                                                  ,CONCAT12(bVar268,CONCAT11(bVar267,bVar265)))))));
      bVar274 = auVar166[8] | (byte)uVar275;
      bVar276 = auVar166[9] | (byte)((ulong)uVar275 >> 8);
      bVar277 = auVar166[10] | (byte)((ulong)uVar275 >> 0x10);
      bVar278 = auVar166[0xb] | (byte)((ulong)uVar275 >> 0x18);
      bVar279 = auVar166[0xc] | (byte)((ulong)uVar275 >> 0x20);
      bVar280 = auVar166[0xd] | (byte)((ulong)uVar275 >> 0x28);
      bVar281 = auVar166[0xe] | (byte)((ulong)uVar275 >> 0x30);
      bVar282 = auVar166[0xf] | (byte)((ulong)uVar275 >> 0x38);
      uVar275 = CONCAT17(bVar282,CONCAT16(bVar281,CONCAT15(bVar280,CONCAT14(bVar279,CONCAT13(bVar278
                                                  ,CONCAT12(bVar277,CONCAT11(bVar276,bVar274)))))));
      bVar164 = auVar397[0] | bVar164;
      bVar168 = auVar397[1] | bVar168;
      bVar169 = auVar397[2] | bVar169;
      bVar170 = auVar397[3] | bVar170;
      bVar171 = auVar397[4] | bVar171;
      bVar172 = auVar397[5] | bVar172;
      bVar173 = auVar397[6] | bVar173;
      bVar174 = auVar397[7] | bVar174;
      bVar175 = auVar397[8] | bVar175;
      bVar176 = auVar397[9] | bVar176;
      bVar177 = auVar397[10] | bVar177;
      bVar178 = auVar397[0xb] | bVar178;
      bVar179 = auVar397[0xc] | bVar179;
      bVar180 = auVar397[0xd] | bVar180;
      bVar181 = auVar397[0xe] | bVar181;
      bVar182 = auVar397[0xf] | bVar182;
      auVar226._0_8_ = (ulong)auVar40._8_5_ & 0xffffffff;
      auVar226._8_5_ = auVar40._8_5_ >> 0x20;
      auVar226._13_3_ = 0;
      auVar412._0_8_ = uVar94 & 0xffffffff;
      auVar412[8] = *pbVar77 & 0x3f;
      auVar412._9_7_ = 0;
      auVar398._0_8_ = (ulong)auVar48._8_5_ & 0xffffffff;
      auVar398._8_5_ = auVar48._8_5_ >> 0x20;
      auVar398._13_3_ = 0;
      bVar111 = auVar417[0] | bVar111;
      bVar112 = auVar417[1] | bVar112;
      bVar113 = auVar417[2] | bVar113;
      bVar114 = auVar417[3] | bVar114;
      bVar115 = auVar417[4] | bVar115;
      bVar116 = auVar417[5] | bVar116;
      bVar117 = auVar417[6] | bVar117;
      bVar118 = auVar417[7] | bVar118;
      bVar119 = auVar417[8] | bVar119;
      bVar120 = auVar417[9] | bVar120;
      bVar121 = auVar417[10] | bVar121;
      bVar122 = auVar417[0xb] | bVar122;
      bVar123 = auVar417[0xc] | bVar123;
      bVar124 = auVar417[0xd] | bVar124;
      bVar125 = auVar417[0xe] | bVar125;
      bVar126 = auVar417[0xf] | bVar126;
      auVar418._0_8_ = (ulong)auVar41._8_5_ & 0xffffffff;
      auVar418._8_5_ = auVar41._8_5_ >> 0x20;
      auVar418._13_3_ = 0;
      auVar223._0_8_ = uVar93 & 0xffffffff;
      auVar223[8] = bVar131 & 0x3f;
      auVar223._9_7_ = 0;
      auVar220._0_8_ = uVar91 & 0xffffffff;
      auVar220[8] = *pbVar70 & 0x3f;
      auVar220._9_7_ = 0;
      bVar201 = auVar147[0] | (byte)uVar202;
      bVar203 = auVar147[1] | (byte)((ulong)uVar202 >> 8);
      bVar204 = auVar147[2] | (byte)((ulong)uVar202 >> 0x10);
      bVar205 = auVar147[3] | (byte)((ulong)uVar202 >> 0x18);
      bVar206 = auVar147[4] | (byte)((ulong)uVar202 >> 0x20);
      bVar207 = auVar147[5] | (byte)((ulong)uVar202 >> 0x28);
      bVar208 = auVar147[6] | (byte)((ulong)uVar202 >> 0x30);
      bVar209 = auVar147[7] | (byte)((ulong)uVar202 >> 0x38);
      uVar202 = CONCAT17(bVar209,CONCAT16(bVar208,CONCAT15(bVar207,CONCAT14(bVar206,CONCAT13(bVar205
                                                  ,CONCAT12(bVar204,CONCAT11(bVar203,bVar201)))))));
      bVar210 = auVar147[8] | (byte)uVar211;
      bVar212 = auVar147[9] | (byte)((ulong)uVar211 >> 8);
      bVar213 = auVar147[10] | (byte)((ulong)uVar211 >> 0x10);
      bVar214 = auVar147[0xb] | (byte)((ulong)uVar211 >> 0x18);
      bVar215 = auVar147[0xc] | (byte)((ulong)uVar211 >> 0x20);
      bVar216 = auVar147[0xd] | (byte)((ulong)uVar211 >> 0x28);
      bVar217 = auVar147[0xe] | (byte)((ulong)uVar211 >> 0x30);
      bVar218 = auVar147[0xf] | (byte)((ulong)uVar211 >> 0x38);
      uVar211 = CONCAT17(bVar218,CONCAT16(bVar217,CONCAT15(bVar216,CONCAT14(bVar215,CONCAT13(bVar214
                                                  ,CONCAT12(bVar213,CONCAT11(bVar212,bVar210)))))));
      auVar404._0_8_ = (ulong)auVar49._8_5_ & 0xffffffff;
      auVar404._8_5_ = auVar49._8_5_ >> 0x20;
      auVar404._13_3_ = 0;
      auVar394._0_8_ = uVar92 & 0xffffffff;
      auVar394[8] = bVar130 & 0x3f;
      auVar394._9_7_ = 0;
      auVar22._8_8_ = 1;
      auVar22._0_8_ = 1;
      auVar402 = NEON_ushl(auVar22,auVar391,8);
      auVar23._8_8_ = 1;
      auVar23._0_8_ = 1;
      auVar413 = NEON_ushl(auVar23,auVar412,8);
      auVar24._8_8_ = 1;
      auVar24._0_8_ = 1;
      auVar397 = NEON_ushl(auVar24,auVar226,8);
      auVar25._8_8_ = 1;
      auVar25._0_8_ = 1;
      auVar166 = NEON_ushl(auVar25,auVar223,8);
      auVar26._8_8_ = 1;
      auVar26._0_8_ = 1;
      auVar419 = NEON_ushl(auVar26,auVar418,8);
      auVar27._8_8_ = 1;
      auVar27._0_8_ = 1;
      auVar417 = NEON_ushl(auVar27,auVar398,8);
      auVar28._8_8_ = 1;
      auVar28._0_8_ = 1;
      auVar405 = NEON_ushl(auVar28,auVar404,8);
      auVar29._8_8_ = 1;
      auVar29._0_8_ = 1;
      auVar147 = NEON_ushl(auVar29,auVar220,8);
      auVar30._8_8_ = 1;
      auVar30._0_8_ = 1;
      auVar411 = NEON_ushl(auVar30,auVar394,8);
      bVar127 = auVar402[0] | (byte)uVar86;
      bVar128 = auVar402[1] | (byte)((ulong)uVar86 >> 8);
      bVar129 = auVar402[2] | (byte)((ulong)uVar86 >> 0x10);
      bVar130 = auVar402[3] | (byte)((ulong)uVar86 >> 0x18);
      bVar131 = auVar402[4] | (byte)((ulong)uVar86 >> 0x20);
      bVar132 = auVar402[5] | (byte)((ulong)uVar86 >> 0x28);
      bVar133 = auVar402[6] | (byte)((ulong)uVar86 >> 0x30);
      bVar134 = auVar402[7] | (byte)((ulong)uVar86 >> 0x38);
      uVar86 = CONCAT17(bVar134,CONCAT16(bVar133,CONCAT15(bVar132,CONCAT14(bVar131,CONCAT13(bVar130,
                                                  CONCAT12(bVar129,CONCAT11(bVar128,bVar127)))))));
      bVar135 = auVar402[8] | (byte)uVar136;
      bVar137 = auVar402[9] | (byte)((ulong)uVar136 >> 8);
      bVar138 = auVar402[10] | (byte)((ulong)uVar136 >> 0x10);
      bVar139 = auVar402[0xb] | (byte)((ulong)uVar136 >> 0x18);
      bVar140 = auVar402[0xc] | (byte)((ulong)uVar136 >> 0x20);
      bVar141 = auVar402[0xd] | (byte)((ulong)uVar136 >> 0x28);
      bVar142 = auVar402[0xe] | (byte)((ulong)uVar136 >> 0x30);
      bVar143 = auVar402[0xf] | (byte)((ulong)uVar136 >> 0x38);
      uVar136 = CONCAT17(bVar143,CONCAT16(bVar142,CONCAT15(bVar141,CONCAT14(bVar140,CONCAT13(bVar139
                                                  ,CONCAT12(bVar138,CONCAT11(bVar137,bVar135)))))));
      bVar283 = auVar413[0] | (byte)uVar284;
      bVar285 = auVar413[1] | (byte)((ulong)uVar284 >> 8);
      bVar286 = auVar413[2] | (byte)((ulong)uVar284 >> 0x10);
      bVar287 = auVar413[3] | (byte)((ulong)uVar284 >> 0x18);
      bVar288 = auVar413[4] | (byte)((ulong)uVar284 >> 0x20);
      bVar289 = auVar413[5] | (byte)((ulong)uVar284 >> 0x28);
      bVar290 = auVar413[6] | (byte)((ulong)uVar284 >> 0x30);
      bVar291 = auVar413[7] | (byte)((ulong)uVar284 >> 0x38);
      uVar284 = CONCAT17(bVar291,CONCAT16(bVar290,CONCAT15(bVar289,CONCAT14(bVar288,CONCAT13(bVar287
                                                  ,CONCAT12(bVar286,CONCAT11(bVar285,bVar283)))))));
      bVar292 = auVar413[8] | (byte)uVar293;
      bVar294 = auVar413[9] | (byte)((ulong)uVar293 >> 8);
      bVar295 = auVar413[10] | (byte)((ulong)uVar293 >> 0x10);
      bVar296 = auVar413[0xb] | (byte)((ulong)uVar293 >> 0x18);
      bVar297 = auVar413[0xc] | (byte)((ulong)uVar293 >> 0x20);
      bVar298 = auVar413[0xd] | (byte)((ulong)uVar293 >> 0x28);
      bVar299 = auVar413[0xe] | (byte)((ulong)uVar293 >> 0x30);
      bVar300 = auVar413[0xf] | (byte)((ulong)uVar293 >> 0x38);
      uVar293 = CONCAT17(bVar300,CONCAT16(bVar299,CONCAT15(bVar298,CONCAT14(bVar297,CONCAT13(bVar296
                                                  ,CONCAT12(bVar295,CONCAT11(bVar294,bVar292)))))));
      bVar373 = auVar397[0] | (byte)uVar374;
      bVar375 = auVar397[1] | (byte)((ulong)uVar374 >> 8);
      bVar376 = auVar397[2] | (byte)((ulong)uVar374 >> 0x10);
      bVar377 = auVar397[3] | (byte)((ulong)uVar374 >> 0x18);
      bVar378 = auVar397[4] | (byte)((ulong)uVar374 >> 0x20);
      bVar379 = auVar397[5] | (byte)((ulong)uVar374 >> 0x28);
      bVar380 = auVar397[6] | (byte)((ulong)uVar374 >> 0x30);
      bVar381 = auVar397[7] | (byte)((ulong)uVar374 >> 0x38);
      uVar374 = CONCAT17(bVar381,CONCAT16(bVar380,CONCAT15(bVar379,CONCAT14(bVar378,CONCAT13(bVar377
                                                  ,CONCAT12(bVar376,CONCAT11(bVar375,bVar373)))))));
      bVar382 = auVar397[8] | (byte)uVar383;
      bVar384 = auVar397[9] | (byte)((ulong)uVar383 >> 8);
      bVar385 = auVar397[10] | (byte)((ulong)uVar383 >> 0x10);
      bVar386 = auVar397[0xb] | (byte)((ulong)uVar383 >> 0x18);
      bVar387 = auVar397[0xc] | (byte)((ulong)uVar383 >> 0x20);
      bVar388 = auVar397[0xd] | (byte)((ulong)uVar383 >> 0x28);
      bVar389 = auVar397[0xe] | (byte)((ulong)uVar383 >> 0x30);
      bVar390 = auVar397[0xf] | (byte)((ulong)uVar383 >> 0x38);
      uVar383 = CONCAT17(bVar390,CONCAT16(bVar389,CONCAT15(bVar388,CONCAT14(bVar387,CONCAT13(bVar386
                                                  ,CONCAT12(bVar385,CONCAT11(bVar384,bVar382)))))));
      bVar355 = auVar419[0] | (byte)uVar356;
      bVar357 = auVar419[1] | (byte)((ulong)uVar356 >> 8);
      bVar358 = auVar419[2] | (byte)((ulong)uVar356 >> 0x10);
      bVar359 = auVar419[3] | (byte)((ulong)uVar356 >> 0x18);
      bVar360 = auVar419[4] | (byte)((ulong)uVar356 >> 0x20);
      bVar361 = auVar419[5] | (byte)((ulong)uVar356 >> 0x28);
      bVar362 = auVar419[6] | (byte)((ulong)uVar356 >> 0x30);
      bVar363 = auVar419[7] | (byte)((ulong)uVar356 >> 0x38);
      uVar356 = CONCAT17(bVar363,CONCAT16(bVar362,CONCAT15(bVar361,CONCAT14(bVar360,CONCAT13(bVar359
                                                  ,CONCAT12(bVar358,CONCAT11(bVar357,bVar355)))))));
      bVar364 = auVar419[8] | (byte)uVar365;
      bVar366 = auVar419[9] | (byte)((ulong)uVar365 >> 8);
      bVar367 = auVar419[10] | (byte)((ulong)uVar365 >> 0x10);
      bVar368 = auVar419[0xb] | (byte)((ulong)uVar365 >> 0x18);
      bVar369 = auVar419[0xc] | (byte)((ulong)uVar365 >> 0x20);
      bVar370 = auVar419[0xd] | (byte)((ulong)uVar365 >> 0x28);
      bVar371 = auVar419[0xe] | (byte)((ulong)uVar365 >> 0x30);
      bVar372 = auVar419[0xf] | (byte)((ulong)uVar365 >> 0x38);
      uVar365 = CONCAT17(bVar372,CONCAT16(bVar371,CONCAT15(bVar370,CONCAT14(bVar369,CONCAT13(bVar368
                                                  ,CONCAT12(bVar367,CONCAT11(bVar366,bVar364)))))));
      bVar301 = auVar166[0] | (byte)uVar302;
      bVar303 = auVar166[1] | (byte)((ulong)uVar302 >> 8);
      bVar304 = auVar166[2] | (byte)((ulong)uVar302 >> 0x10);
      bVar305 = auVar166[3] | (byte)((ulong)uVar302 >> 0x18);
      bVar306 = auVar166[4] | (byte)((ulong)uVar302 >> 0x20);
      bVar307 = auVar166[5] | (byte)((ulong)uVar302 >> 0x28);
      bVar308 = auVar166[6] | (byte)((ulong)uVar302 >> 0x30);
      bVar309 = auVar166[7] | (byte)((ulong)uVar302 >> 0x38);
      uVar302 = CONCAT17(bVar309,CONCAT16(bVar308,CONCAT15(bVar307,CONCAT14(bVar306,CONCAT13(bVar305
                                                  ,CONCAT12(bVar304,CONCAT11(bVar303,bVar301)))))));
      bVar310 = auVar166[8] | (byte)uVar311;
      bVar312 = auVar166[9] | (byte)((ulong)uVar311 >> 8);
      bVar313 = auVar166[10] | (byte)((ulong)uVar311 >> 0x10);
      bVar314 = auVar166[0xb] | (byte)((ulong)uVar311 >> 0x18);
      bVar315 = auVar166[0xc] | (byte)((ulong)uVar311 >> 0x20);
      bVar316 = auVar166[0xd] | (byte)((ulong)uVar311 >> 0x28);
      bVar317 = auVar166[0xe] | (byte)((ulong)uVar311 >> 0x30);
      bVar318 = auVar166[0xf] | (byte)((ulong)uVar311 >> 0x38);
      uVar311 = CONCAT17(bVar318,CONCAT16(bVar317,CONCAT15(bVar316,CONCAT14(bVar315,CONCAT13(bVar314
                                                  ,CONCAT12(bVar313,CONCAT11(bVar312,bVar310)))))));
      bVar319 = auVar417[0] | (byte)uVar320;
      bVar321 = auVar417[1] | (byte)((ulong)uVar320 >> 8);
      bVar322 = auVar417[2] | (byte)((ulong)uVar320 >> 0x10);
      bVar323 = auVar417[3] | (byte)((ulong)uVar320 >> 0x18);
      bVar324 = auVar417[4] | (byte)((ulong)uVar320 >> 0x20);
      bVar325 = auVar417[5] | (byte)((ulong)uVar320 >> 0x28);
      bVar326 = auVar417[6] | (byte)((ulong)uVar320 >> 0x30);
      bVar327 = auVar417[7] | (byte)((ulong)uVar320 >> 0x38);
      uVar320 = CONCAT17(bVar327,CONCAT16(bVar326,CONCAT15(bVar325,CONCAT14(bVar324,CONCAT13(bVar323
                                                  ,CONCAT12(bVar322,CONCAT11(bVar321,bVar319)))))));
      bVar328 = auVar417[8] | (byte)uVar329;
      bVar330 = auVar417[9] | (byte)((ulong)uVar329 >> 8);
      bVar331 = auVar417[10] | (byte)((ulong)uVar329 >> 0x10);
      bVar332 = auVar417[0xb] | (byte)((ulong)uVar329 >> 0x18);
      bVar333 = auVar417[0xc] | (byte)((ulong)uVar329 >> 0x20);
      bVar334 = auVar417[0xd] | (byte)((ulong)uVar329 >> 0x28);
      bVar335 = auVar417[0xe] | (byte)((ulong)uVar329 >> 0x30);
      bVar336 = auVar417[0xf] | (byte)((ulong)uVar329 >> 0x38);
      uVar329 = CONCAT17(bVar336,CONCAT16(bVar335,CONCAT15(bVar334,CONCAT14(bVar333,CONCAT13(bVar332
                                                  ,CONCAT12(bVar331,CONCAT11(bVar330,bVar328)))))));
      bVar229 = auVar147[0] | (byte)uVar230;
      bVar231 = auVar147[1] | (byte)((ulong)uVar230 >> 8);
      bVar232 = auVar147[2] | (byte)((ulong)uVar230 >> 0x10);
      bVar233 = auVar147[3] | (byte)((ulong)uVar230 >> 0x18);
      bVar234 = auVar147[4] | (byte)((ulong)uVar230 >> 0x20);
      bVar235 = auVar147[5] | (byte)((ulong)uVar230 >> 0x28);
      bVar236 = auVar147[6] | (byte)((ulong)uVar230 >> 0x30);
      bVar237 = auVar147[7] | (byte)((ulong)uVar230 >> 0x38);
      uVar230 = CONCAT17(bVar237,CONCAT16(bVar236,CONCAT15(bVar235,CONCAT14(bVar234,CONCAT13(bVar233
                                                  ,CONCAT12(bVar232,CONCAT11(bVar231,bVar229)))))));
      bVar238 = auVar147[8] | (byte)uVar239;
      bVar240 = auVar147[9] | (byte)((ulong)uVar239 >> 8);
      bVar241 = auVar147[10] | (byte)((ulong)uVar239 >> 0x10);
      bVar242 = auVar147[0xb] | (byte)((ulong)uVar239 >> 0x18);
      bVar243 = auVar147[0xc] | (byte)((ulong)uVar239 >> 0x20);
      bVar244 = auVar147[0xd] | (byte)((ulong)uVar239 >> 0x28);
      bVar245 = auVar147[0xe] | (byte)((ulong)uVar239 >> 0x30);
      bVar246 = auVar147[0xf] | (byte)((ulong)uVar239 >> 0x38);
      uVar239 = CONCAT17(bVar246,CONCAT16(bVar245,CONCAT15(bVar244,CONCAT14(bVar243,CONCAT13(bVar242
                                                  ,CONCAT12(bVar241,CONCAT11(bVar240,bVar238)))))));
      bVar95 = auVar405[0] | bVar95;
      bVar96 = auVar405[1] | bVar96;
      bVar97 = auVar405[2] | bVar97;
      bVar98 = auVar405[3] | bVar98;
      bVar99 = auVar405[4] | bVar99;
      bVar100 = auVar405[5] | bVar100;
      bVar101 = auVar405[6] | bVar101;
      bVar102 = auVar405[7] | bVar102;
      bVar103 = auVar405[8] | bVar103;
      bVar104 = auVar405[9] | bVar104;
      bVar105 = auVar405[10] | bVar105;
      bVar106 = auVar405[0xb] | bVar106;
      bVar107 = auVar405[0xc] | bVar107;
      bVar108 = auVar405[0xd] | bVar108;
      bVar109 = auVar405[0xe] | bVar109;
      bVar110 = auVar405[0xf] | bVar110;
      bVar247 = auVar411[0] | (byte)uVar248;
      bVar249 = auVar411[1] | (byte)((ulong)uVar248 >> 8);
      bVar250 = auVar411[2] | (byte)((ulong)uVar248 >> 0x10);
      bVar251 = auVar411[3] | (byte)((ulong)uVar248 >> 0x18);
      bVar252 = auVar411[4] | (byte)((ulong)uVar248 >> 0x20);
      bVar253 = auVar411[5] | (byte)((ulong)uVar248 >> 0x28);
      bVar254 = auVar411[6] | (byte)((ulong)uVar248 >> 0x30);
      bVar255 = auVar411[7] | (byte)((ulong)uVar248 >> 0x38);
      uVar248 = CONCAT17(bVar255,CONCAT16(bVar254,CONCAT15(bVar253,CONCAT14(bVar252,CONCAT13(bVar251
                                                  ,CONCAT12(bVar250,CONCAT11(bVar249,bVar247)))))));
      bVar256 = auVar411[8] | (byte)uVar257;
      bVar258 = auVar411[9] | (byte)((ulong)uVar257 >> 8);
      bVar259 = auVar411[10] | (byte)((ulong)uVar257 >> 0x10);
      bVar260 = auVar411[0xb] | (byte)((ulong)uVar257 >> 0x18);
      bVar261 = auVar411[0xc] | (byte)((ulong)uVar257 >> 0x20);
      bVar262 = auVar411[0xd] | (byte)((ulong)uVar257 >> 0x28);
      bVar263 = auVar411[0xe] | (byte)((ulong)uVar257 >> 0x30);
      bVar264 = auVar411[0xf] | (byte)((ulong)uVar257 >> 0x38);
      uVar257 = CONCAT17(bVar264,CONCAT16(bVar263,CONCAT15(bVar262,CONCAT14(bVar261,CONCAT13(bVar260
                                                  ,CONCAT12(bVar259,CONCAT11(bVar258,bVar256)))))));
    } while (uVar84 != 0);
    bVar95 = bVar247 | bVar127 | bVar301 | bVar164 | bVar229 | bVar111 | bVar283 | bVar144 |
             bVar95 | bVar201 | bVar319 | bVar183 | bVar355 | bVar265 | bVar373 | bVar337;
    bVar96 = bVar249 | bVar128 | bVar303 | bVar168 | bVar231 | bVar112 | bVar285 | bVar149 |
             bVar96 | bVar203 | bVar321 | bVar185 | bVar357 | bVar267 | bVar375 | bVar339;
    bVar97 = bVar250 | bVar129 | bVar304 | bVar169 | bVar232 | bVar113 | bVar286 | bVar150 |
             bVar97 | bVar204 | bVar322 | bVar186 | bVar358 | bVar268 | bVar376 | bVar340;
    bVar98 = bVar251 | bVar130 | bVar305 | bVar170 | bVar233 | bVar114 | bVar287 | bVar151 |
             bVar98 | bVar205 | bVar323 | bVar187 | bVar359 | bVar269 | bVar377 | bVar341;
    bVar99 = bVar252 | bVar131 | bVar306 | bVar171 | bVar234 | bVar115 | bVar288 | bVar152 |
             bVar99 | bVar206 | bVar324 | bVar188 | bVar360 | bVar270 | bVar378 | bVar342;
    bVar100 = bVar253 | bVar132 | bVar307 | bVar172 | bVar235 | bVar116 | bVar289 | bVar153 |
              bVar100 | bVar207 | bVar325 | bVar189 | bVar361 | bVar271 | bVar379 | bVar343;
    bVar101 = bVar254 | bVar133 | bVar308 | bVar173 | bVar236 | bVar117 | bVar290 | bVar154 |
              bVar101 | bVar208 | bVar326 | bVar190 | bVar362 | bVar272 | bVar380 | bVar344;
    bVar102 = bVar255 | bVar134 | bVar309 | bVar174 | bVar237 | bVar118 | bVar291 | bVar155 |
              bVar102 | bVar209 | bVar327 | bVar191 | bVar363 | bVar273 | bVar381 | bVar345;
    bVar103 = bVar256 | bVar135 | bVar310 | bVar175 | bVar238 | bVar119 | bVar292 | bVar156 |
              bVar103 | bVar210 | bVar328 | bVar192 | bVar364 | bVar274 | bVar382 | bVar346;
    bVar104 = bVar258 | bVar137 | bVar312 | bVar176 | bVar240 | bVar120 | bVar294 | bVar157 |
              bVar104 | bVar212 | bVar330 | bVar194 | bVar366 | bVar276 | bVar384 | bVar348;
    bVar105 = bVar259 | bVar138 | bVar313 | bVar177 | bVar241 | bVar121 | bVar295 | bVar158 |
              bVar105 | bVar213 | bVar331 | bVar195 | bVar367 | bVar277 | bVar385 | bVar349;
    bVar106 = bVar260 | bVar139 | bVar314 | bVar178 | bVar242 | bVar122 | bVar296 | bVar159 |
              bVar106 | bVar214 | bVar332 | bVar196 | bVar368 | bVar278 | bVar386 | bVar350;
    bVar107 = bVar261 | bVar140 | bVar315 | bVar179 | bVar243 | bVar123 | bVar297 | bVar160 |
              bVar107 | bVar215 | bVar333 | bVar197 | bVar369 | bVar279 | bVar387 | bVar351;
    bVar108 = bVar262 | bVar141 | bVar316 | bVar180 | bVar244 | bVar124 | bVar298 | bVar161 |
              bVar108 | bVar216 | bVar334 | bVar198 | bVar370 | bVar280 | bVar388 | bVar352;
    bVar109 = bVar263 | bVar142 | bVar317 | bVar181 | bVar245 | bVar125 | bVar299 | bVar162 |
              bVar109 | bVar217 | bVar335 | bVar199 | bVar371 | bVar281 | bVar389 | bVar353;
    bVar110 = bVar264 | bVar143 | bVar318 | bVar182 | bVar246 | bVar126 | bVar300 | bVar163 |
              bVar110 | bVar218 | bVar336 | bVar200 | bVar372 | bVar282 | bVar390 | bVar354;
    auVar5[1] = bVar96;
    auVar5[0] = bVar95;
    auVar5[2] = bVar97;
    auVar5[3] = bVar98;
    auVar5[4] = bVar99;
    auVar5[5] = bVar100;
    auVar5[6] = bVar101;
    auVar5[7] = bVar102;
    auVar5[8] = bVar103;
    auVar5[9] = bVar104;
    auVar5[10] = bVar105;
    auVar5[0xb] = bVar106;
    auVar5[0xc] = bVar107;
    auVar5[0xd] = bVar108;
    auVar5[0xe] = bVar109;
    auVar5[0xf] = bVar110;
    auVar6[1] = bVar96;
    auVar6[0] = bVar95;
    auVar6[2] = bVar97;
    auVar6[3] = bVar98;
    auVar6[4] = bVar99;
    auVar6[5] = bVar100;
    auVar6[6] = bVar101;
    auVar6[7] = bVar102;
    auVar6[8] = bVar103;
    auVar6[9] = bVar104;
    auVar6[10] = bVar105;
    auVar6[0xb] = bVar106;
    auVar6[0xc] = bVar107;
    auVar6[0xd] = bVar108;
    auVar6[0xe] = bVar109;
    auVar6[0xf] = bVar110;
    auVar147 = NEON_ext(auVar5,auVar6,8,1);
    uVar91 = CONCAT17(bVar102 | auVar147[7],
                      CONCAT16(bVar101 | auVar147[6],
                               CONCAT15(bVar100 | auVar147[5],
                                        CONCAT14(bVar99 | auVar147[4],
                                                 CONCAT13(bVar98 | auVar147[3],
                                                          CONCAT12(bVar97 | auVar147[2],
                                                                   CONCAT11(bVar96 | auVar147[1],
                                                                            bVar95 | auVar147[0]))))
                                       )));
    if (param_5 != uVar87) {
      uVar84 = uVar87;
      if ((param_5 & 0x1c) == 0) goto LAB_00a9cfb4;
      goto LAB_00a9cf3c;
    }
  }
  uVar86 = 0xffffffffffffffff;
  uVar84 = param_5 - __n;
  if (param_5 - __n <= __n) {
    uVar84 = __n;
  }
  uVar84 = uVar84 + 1;
  uVar87 = __n;
  uVar93 = 0xffffffffffffffff;
LAB_00a9d264:
  param_1[10] = param_3;
  param_1[0xb] = param_4;
  param_1[0xc] = param_5;
  *param_1 = 1;
  param_1[1] = __n;
  param_1[2] = uVar87;
  param_1[3] = uVar84;
  param_1[4] = uVar91;
  param_1[5] = 0;
  param_1[6] = param_3;
  param_1[7] = uVar86;
  param_1[8] = uVar93;
  param_1[9] = param_2;
  return;
}


// ===== 00a9d308  core::fmt::pointer_fmt_inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::fmt::pointer_fmt_inner */

void __rustcall core::fmt::pointer_fmt_inner(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 local_21;
  
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = (uint)uVar5;
  if ((uVar4 >> 0x17 & 1) != 0) {
    if ((uVar4 >> 0x1b & 1) == 0) {
      uVar4 = uVar4 | 0x9000000;
      *(undefined2 *)(param_2 + 0x14) = 0x12;
    }
    else {
      uVar4 = uVar4 | 0x1000000;
    }
  }
  *(uint *)(param_2 + 0x10) = uVar4 | 0x800000;
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    uVar3 = param_1 & 0xf;
    param_1 = param_1 >> 4;
    (&local_21)[lVar2] = (&DAT_002a0ca0)[uVar3];
    lVar1 = lVar2 + -1;
  } while (param_1 != 0);
  <core::fmt::[a]::core::fmt::Formatter>::pad_integral
            (param_2,1,"0x",2,&local_21 + lVar2,-(lVar2 + -1));
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  return;
}


// ===== 00a9d3b8  core::fmt::wide_pointer_fmt_inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::fmt::wide_pointer_fmt_inner */

byte __rustcall
core::fmt::wide_pointer_fmt_inner
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *local_50;
  byte local_48;
  byte local_47;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_48 = (**(code **)(param_4[1] + 0x18))(*param_4,&DAT_00390a1e,7);
  local_47 = 0;
  local_40 = 1;
  local_50 = param_4;
  uStack_38 = param_1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_50,&DAT_002bcff4,4,&local_40,&DAT_00aff480);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (&local_50,&DAT_002a13f0,8,param_2,param_3);
  bVar1 = local_47 | local_48;
  if ((local_47 == 1) && ((local_48 & 1) == 0)) {
    if (*(char *)((long)local_50 + 0x12) < '\0') {
      uVar2 = *local_50;
      lVar5 = local_50[1];
      puVar3 = &DAT_00390597;
      uVar4 = 1;
    }
    else {
      uVar2 = *local_50;
      lVar5 = local_50[1];
      puVar3 = &DAT_00390705;
      uVar4 = 2;
    }
    bVar1 = (**(code **)(lVar5 + 0x18))(uVar2,puVar3,uVar4);
  }
  return bVar1 & 1;
}


// ===== 00a9d4b0  core::fmt::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::fmt::write */

undefined8 __rustcall
core::fmt::write(undefined8 param_1,long param_2,ushort *param_3,ulong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ushort *puVar8;
  ushort *puVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  
  if ((param_4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a9d638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(param_2 + 0x18))(param_1,param_3,param_4 >> 1);
    return uVar5;
  }
  bVar2 = (byte)*param_3;
  if (bVar2 != 0) {
    pcVar10 = *(code **)(param_2 + 0x18);
    uVar11 = 0;
    do {
      puVar9 = (ushort *)((long)param_3 + 1);
      if ((char)bVar2 < '\0') {
        if (bVar2 == 0x80) {
          uVar3 = *(ushort *)((long)param_3 + 1);
          uVar4 = (*pcVar10)(param_1,(byte *)((long)param_3 + 3),(ulong)uVar3);
          if ((uVar4 & 1) != 0) {
            return 1;
          }
          param_3 = (ushort *)((byte *)((long)param_3 + 3) + uVar3);
        }
        else {
          local_68 = param_1;
          local_60 = param_2;
          if (bVar2 == 0xc0) {
            puVar1 = (undefined8 *)(param_4 + uVar11 * 0x10);
            local_58 = 0x60000020;
            uVar4 = (*(code *)puVar1[1])(*puVar1,&local_68);
            param_3 = puVar9;
          }
          else {
            if ((bVar2 & 1) == 0) {
              uVar6 = 0x60000020;
              if ((bVar2 >> 1 & 1) == 0) goto LAB_00a9d5b0;
LAB_00a9d56c:
              puVar8 = puVar9 + 1;
              uVar4 = (ulong)*puVar9;
              puVar9 = puVar8;
              if ((bVar2 >> 2 & 1) == 0) goto LAB_00a9d5b8;
LAB_00a9d574:
              param_3 = puVar9 + 1;
              uVar7 = (ulong)*puVar9;
            }
            else {
              uVar6 = *(undefined4 *)((long)param_3 + 1);
              puVar9 = (ushort *)((long)param_3 + 5);
              if ((bVar2 >> 1 & 1) != 0) goto LAB_00a9d56c;
LAB_00a9d5b0:
              uVar4 = 0;
              if ((bVar2 >> 2 & 1) != 0) goto LAB_00a9d574;
LAB_00a9d5b8:
              uVar7 = 0;
              param_3 = puVar9;
            }
            if ((bVar2 >> 3 & 1) != 0) {
              uVar11 = (ulong)*param_3;
              param_3 = param_3 + 1;
            }
            if ((bVar2 >> 4 & 1) != 0) {
              uVar4 = (ulong)*(ushort *)(param_4 + uVar4 * 0x10 + 8);
            }
            if ((bVar2 >> 5 & 1) != 0) {
              uVar7 = (ulong)*(ushort *)(param_4 + uVar7 * 0x10 + 8);
            }
            puVar1 = (undefined8 *)(param_4 + uVar11 * 0x10);
            local_58 = CONCAT26((short)uVar7,CONCAT24((short)uVar4,uVar6));
            uVar4 = (*(code *)puVar1[1])(*puVar1,&local_68);
          }
          if ((uVar4 & 1) != 0) {
            return 1;
          }
          uVar11 = uVar11 + 1;
        }
      }
      else {
        uVar4 = (*pcVar10)(param_1,puVar9,(ulong)bVar2);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        param_3 = (ushort *)((long)puVar9 + (ulong)bVar2);
      }
      bVar2 = (byte)*param_3;
    } while (bVar2 != 0);
  }
  return 0;
}


// ===== 00a9d664  core::num::from_ascii_bytes_radix_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::from_ascii_bytes_radix_panic */

void __rustcall core::num::from_ascii_bytes_radix_panic(undefined4 param_1,undefined8 param_2)

{
  undefined4 local_24;
  undefined4 *local_20;
  undefined *puStack_18;
  
  local_20 = &local_24;
  puStack_18 = PTR_fmt_00b00c40;
  local_24 = param_1;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_002ba763,&local_20,param_2);
}


// ===== 00a9d698  core::str::slice_error_fail =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::str::slice_error_fail */

void __rustcall core::str::slice_error_fail(void)

{
  undefined8 in_x4;
  
  slice_error_fail_rt();
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00390a25,0x2d,in_x4);
}


// ===== 00a9d6a4  core::str::slice_error_fail_ct =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::str::slice_error_fail_ct */

void __rustcall core::str::slice_error_fail_ct(void)

{
  undefined8 in_x4;
  
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00390a25,0x2d,in_x4);
}


// ===== 00a9d6c0  core::str::slice_error_fail_rt =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::str::slice_error_fail_rt */

void __rustcall
core::str::slice_error_fail_rt
          (long param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  ulong *puVar7;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  ulong local_58;
  ulong uStack_50;
  uint local_44;
  ulong *local_40;
  undefined *local_38;
  ulong *local_30;
  undefined *local_28;
  ulong *puStack_20;
  code *local_18;
  
  local_40 = &local_70;
  puVar7 = &local_70;
  local_70 = param_3;
  uStack_68 = param_4;
  local_60 = param_2;
  if (param_2 < param_3) {
    puVar5 = &DAT_002b668c;
  }
  else {
    if (param_4 <= param_2) {
      if (param_4 < param_3) {
        local_38 = PTR_fmt_00b00c60;
        local_30 = &uStack_68;
        local_28 = PTR_fmt_00b00c60;
                    /* WARNING: Subroutine does not return */
        panicking::panic_fmt(&DAT_002aa69a,&local_40,param_5);
      }
      if (((param_3 != 0) && (param_3 < param_2)) &&
         (iVar6 = (int)*(char *)(param_1 + param_3),
         iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))) {
        iVar6 = (int)*(char *)(param_1 + (param_3 - 1));
        local_58 = param_3 - 1;
        if (iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) {
          iVar6 = (int)*(char *)(param_1 + (param_3 - 2));
          local_58 = param_3 - 2;
          if (iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) {
            local_58 = param_3 - 3;
          }
        }
        uVar2 = param_3;
        if (param_3 <= param_2) {
          uVar2 = param_2;
        }
        uVar3 = param_2;
        if (param_2 <= param_3 + 1) {
          uVar3 = param_3 + 1;
        }
        do {
          if (uVar2 == param_3) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (uVar2,param_2,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff8e8);
          }
          iVar6 = (int)*(char *)(param_1 + param_3);
          uStack_50 = param_3;
        } while ((iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) &&
                (param_3 = param_3 + 1, uStack_50 = uVar3, param_3 < param_2));
        if (((uStack_50 < local_58) || (param_2 < uStack_50)) ||
           ((local_58 != param_2 &&
            (((local_58 != 0 &&
              (iVar6 = (int)*(char *)(param_1 + local_58),
              iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))) ||
             ((uStack_50 != param_2 &&
              (iVar6 = (int)*(char *)(param_1 + uStack_50),
              iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))))))))) {
                    /* WARNING: Subroutine does not return */
          slice_error_fail(param_1,param_2,local_58,uStack_50);
        }
        if (local_58 != uStack_50) {
          pbVar1 = (byte *)(param_1 + local_58);
          local_44 = (uint)*pbVar1;
          if ((char)*pbVar1 < '\0') {
            if (local_44 < 0xe0) {
              local_44 = pbVar1[1] & 0x3f | (local_44 & 0x1f) << 6;
            }
            else {
              uVar4 = pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
              if (local_44 < 0xf0) {
                local_44 = uVar4 | (local_44 & 0x1f) << 0xc;
              }
              else {
                local_44 = pbVar1[3] & 0x3f | uVar4 << 6 | (local_44 & 7) << 0x12;
              }
            }
          }
          local_30 = (ulong *)&local_44;
          puStack_20 = &local_58;
          local_38 = PTR_fmt_00b00c60;
          local_28 = PTR_fmt_00b00df8;
          local_18 = FUN_00aae364;
          local_40 = &local_70;
                    /* WARNING: Subroutine does not return */
          panicking::panic_fmt(&DAT_002a5ec4,&local_40,param_5);
        }
LAB_00a9d8dc:
                    /* WARNING: Subroutine does not return */
        option::unwrap_failed(param_5);
      }
      if (((param_4 != 0) && (param_4 < param_2)) &&
         (iVar6 = (int)*(char *)(param_1 + param_4),
         iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))) {
        iVar6 = (int)*(char *)(param_1 + (param_4 - 1));
        local_58 = param_4 - 1;
        if (iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) {
          iVar6 = (int)*(char *)(param_1 + (param_4 - 2));
          local_58 = param_4 - 2;
          if (iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) {
            local_58 = param_4 - 3;
          }
        }
        uVar2 = param_4;
        if (param_4 <= param_2) {
          uVar2 = param_2;
        }
        uVar3 = param_2;
        if (param_2 <= param_4 + 1) {
          uVar3 = param_4 + 1;
        }
        do {
          if (uVar2 == param_4) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_bounds_check
                      (uVar2,param_2,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff8e8);
          }
          iVar6 = (int)*(char *)(param_1 + param_4);
          uStack_50 = param_4;
        } while ((iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) &&
                (param_4 = param_4 + 1, uStack_50 = uVar3, param_4 < param_2));
        if (((uStack_50 < local_58) || (param_2 < uStack_50)) ||
           ((local_58 != param_2 &&
            (((local_58 != 0 &&
              (iVar6 = (int)*(char *)(param_1 + local_58),
              iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))) ||
             ((uStack_50 != param_2 &&
              (iVar6 = (int)*(char *)(param_1 + uStack_50),
              iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41))))))))) {
                    /* WARNING: Subroutine does not return */
          slice_error_fail();
        }
        if (local_58 != uStack_50) {
          pbVar1 = (byte *)(param_1 + local_58);
          local_44 = (uint)*pbVar1;
          if ((char)*pbVar1 < '\0') {
            if (local_44 < 0xe0) {
              local_44 = pbVar1[1] & 0x3f | (local_44 & 0x1f) << 6;
            }
            else {
              uVar4 = pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
              if (local_44 < 0xf0) {
                local_44 = uVar4 | (local_44 & 0x1f) << 0xc;
              }
              else {
                local_44 = pbVar1[3] & 0x3f | uVar4 << 6 | (local_44 & 7) << 0x12;
              }
            }
          }
          local_40 = &uStack_68;
          local_30 = (ulong *)&local_44;
          puStack_20 = &local_58;
          local_38 = PTR_fmt_00b00c60;
          local_28 = PTR_fmt_00b00df8;
          local_18 = FUN_00aae364;
                    /* WARNING: Subroutine does not return */
          panicking::panic_fmt(&DAT_002a5f16,&local_40,param_5);
        }
        goto LAB_00a9d8dc;
      }
    }
    puVar7 = &uStack_68;
    puVar5 = &DAT_002bb438;
  }
  local_38 = PTR_fmt_00b00c60;
  local_30 = &local_60;
  local_28 = PTR_fmt_00b00c60;
  local_40 = puVar7;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(puVar5,&local_40,param_5);
}


// ===== 00a9da58  core::cell::panic_already_borrowed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::cell::panic_already_borrowed */

void __rustcall core::cell::panic_already_borrowed(undefined8 param_1)

{
  undefined1 *local_28;
  undefined *puStack_20;
  undefined1 uStack_11;
  
  local_28 = &uStack_11;
  puStack_20 = PTR_fmt_00b013d0;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_002ab692,&local_28,param_1);
}


// ===== 00a9da88  core::cell::panic_already_mutably_borrowed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::cell::panic_already_mutably_borrowed */

void __rustcall core::cell::panic_already_mutably_borrowed(undefined8 param_1)

{
  undefined1 *local_28;
  undefined *puStack_20;
  undefined1 uStack_11;
  
  local_28 = &uStack_11;
  puStack_20 = PTR_fmt_00b013d8;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_002ab692,&local_28,param_1);
}


// ===== 00a9dab8  core::wtf8::slice_error_fail =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::wtf8::slice_error_fail */

void __rustcall core::wtf8::slice_error_fail(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  ulong *local_30;
  undefined *puStack_28;
  ulong *local_20;
  undefined *puStack_18;
  
  local_48 = param_3;
  uStack_40 = param_4;
  local_38 = param_2;
  if (param_2 < param_3) {
    local_30 = &local_48;
    puStack_28 = PTR_fmt_00b00c60;
    local_20 = &local_38;
    puStack_18 = PTR_fmt_00b00c60;
                    /* WARNING: Subroutine does not return */
    panicking::panic_fmt(&DAT_002b668c,&local_30,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff960);
  }
  if (param_2 < param_4) {
    local_30 = &uStack_40;
    puStack_28 = PTR_fmt_00b00c60;
    local_20 = &local_38;
    puStack_18 = PTR_fmt_00b00c60;
                    /* WARNING: Subroutine does not return */
    panicking::panic_fmt(&DAT_002bb438,&local_30,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff948);
  }
  if (param_4 < param_3) {
    local_30 = &local_48;
    puStack_28 = PTR_fmt_00b00c60;
    local_20 = &uStack_40;
    puStack_18 = PTR_fmt_00b00c60;
                    /* WARNING: Subroutine does not return */
    panicking::panic_fmt(&DAT_002aa69a,&local_30,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff930);
  }
  if (((param_3 != 0) && (param_3 < param_2)) &&
     (iVar1 = (int)*(char *)(param_1 + param_3),
     iVar1 == -0x41 || iVar1 + 0x41 < 0 != SCARRY4(iVar1,0x41))) {
    local_30 = &local_48;
    puStack_28 = PTR_fmt_00b00c60;
                    /* WARNING: Subroutine does not return */
    panicking::panic_fmt(&DAT_002a7f2a,&local_30,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff900);
  }
  local_30 = &uStack_40;
  puStack_28 = PTR_fmt_00b00c60;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_002a7f2a,&local_30,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff918);
}


// ===== 00a9dbdc  core::ascii::escape_default =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::ascii::escape_default */

ulong __rustcall core::ascii::escape_default(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)(byte)(&DAT_00390378)[param_1 & 0xff] & 0x7f;
  if (-1 < (char)(&DAT_00390378)[param_1 & 0xff]) {
    return uVar1 | 0x10000000000;
  }
  if ((int)uVar1 != 0) {
    return uVar1 << 8 | 0x2000000005c;
  }
  return (ulong)(byte)(&DAT_002a0ca0)[param_1 & 0xf] << 0x18 |
         (ulong)(byte)(&DAT_002a0ca0)[param_1 >> 4 & 0xf] << 0x10 | 0x4000000785c;
}


// ===== 00a9dc50  core::option::expect_failed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::option::expect_failed */

void __rustcall core::option::expect_failed(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_20 = (undefined1 *)&local_30;
  pcStack_18 = FUN_00aa767c;
  local_30 = param_1;
  uStack_28 = param_2;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_002ab692,&local_20);
}


// ===== 00a9dc80  core::option::unwrap_failed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::option::unwrap_failed */

void __rustcall core::option::unwrap_failed(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic(&DAT_00390a3b,0x2b,param_1);
}


// ===== 00a9dc9c  core::random::empty_range =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::random::empty_range */

void __rustcall core::random::empty_range(void)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00390a66,0x51,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff978);
}


// ===== 00a9dcbc  core::result::unwrap_failed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::result::unwrap_failed */

void __rustcall
core::result::unwrap_failed
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 *puStack_30;
  code *local_28;
  undefined8 *puStack_20;
  code *local_18;
  
  puStack_30 = (undefined1 *)&local_50;
  puStack_20 = &uStack_40;
  local_28 = FUN_00aa767c;
  local_18 = FUN_00aa73f8;
  local_50 = param_1;
  local_48 = param_2;
  uStack_40 = param_3;
  local_38 = param_4;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_002a1bbc,&puStack_30,param_5);
}


// ===== 00a9dd08  core::panicking::panic_nounwind =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_nounwind */

void __rustcall core::panicking::panic_nounwind(undefined8 param_1,long param_2)

{
                    /* WARNING: Subroutine does not return */
  panic_nounwind_fmt(param_1,param_2 << 1 | 1,0,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff990);
}


// ===== 00a9dd28  core::panicking::const_panic_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::const_panic_fmt */

void __rustcall core::panicking::const_panic_fmt(undefined8 param_1,ulong param_2)

{
  undefined8 local_30;
  ulong uStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_20 = (undefined1 *)&local_30;
  uStack_28 = param_2 >> 1;
  pcStack_18 = FUN_00aa767c;
  local_30 = param_1;
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_002ab692,&local_20,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff9a8);
}


// ===== 00a9dd64  core::panicking::panic_in_cleanup =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_in_cleanup */

void __rustcall core::panicking::panic_in_cleanup(void)

{
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  auStack_50 = panic_nounwind_nobacktrace(&DAT_00390a8e,0x24);
  puStack_30 = auStack_50;
  pcStack_18 = panic_bounds_check;
  puStack_40 = (undefined8 *)(auStack_50 + 8);
  puStack_38 = PTR_fmt_00b00c60;
  puStack_28 = PTR_fmt_00b00c60;
  puStack_20 = &stack0xfffffffffffffff0;
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_002af89a,&puStack_40);
}


// ===== 00a9dd7c  core::panicking::panic_bounds_check =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_bounds_check */

void __rustcall core::panicking::panic_bounds_check(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined *puStack_28;
  undefined1 *local_20;
  undefined *puStack_18;
  
  local_20 = (undefined1 *)&local_40;
  local_30 = &uStack_38;
  puStack_28 = PTR_fmt_00b00c60;
  puStack_18 = PTR_fmt_00b00c60;
  local_40 = param_1;
  uStack_38 = param_2;
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_002af89a,&local_30);
}


// ===== 00a9ddb4  core::panicking::panic_nounwind_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_nounwind_fmt */

void __rustcall
core::panicking::panic_nounwind_fmt
          (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined1 local_17;
  
  local_28 = &local_38;
  local_18 = 0;
                    /* try { // try from 00a9ddd4 to 00a9dddb has its CatchHandler @ 00a9dde0 */
  local_38 = param_1;
  uStack_30 = param_2;
  uStack_20 = param_4;
  local_17 = param_3;
  __rustc::rust_begin_unwind(&local_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xa9dde0);
  (*pcVar1)();
}


// ===== 00a9dde4  core::panicking::assert_failed_inner =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::assert_failed_inner */

void __rustcall
core::panicking::assert_failed_inner
          (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined **local_50;
  code *pcStack_48;
  long *local_40;
  code *pcStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_40 = &local_90;
  local_30 = &local_90;
  local_70 = &DAT_003967c0 + *(int *)(&DAT_003967c0 + (param_1 & 0xff) * 4);
  uStack_68 = *(undefined8 *)(&DAT_003967d0 + (param_1 & 0xff) * 8);
  if (param_6 == 0) {
    puVar1 = &DAT_002a513e;
    pcStack_38 = FUN_00aa73f8;
    local_30 = &local_80;
  }
  else {
    puVar1 = &DAT_002a3504;
    local_40 = &local_60;
    pcStack_38 = (code *)PTR_fmt_00b00c70;
    local_20 = &local_80;
    pcStack_18 = FUN_00aa73f8;
    local_60 = param_6;
    uStack_58 = param_7;
  }
  local_50 = &local_70;
  pcStack_28 = FUN_00aa73f8;
  pcStack_48 = FUN_00aa767c;
  local_90 = param_2;
  uStack_88 = param_3;
  local_80 = param_4;
  uStack_78 = param_5;
                    /* WARNING: Subroutine does not return */
  panic_fmt(puVar1,&local_50,param_8);
}


// ===== 00a9dea4  core::panicking::panic_cannot_unwind =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_cannot_unwind */

void __rustcall core::panicking::panic_cannot_unwind(void)

{
  undefined1 auVar1 [16];
  
  auVar1 = panic_nounwind(&DAT_00390abd,0x26);
                    /* WARNING: Subroutine does not return */
  panic_nounwind_fmt(auVar1._0_8_,auVar1._8_8_ << 1 | 1,1,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff9c0);
}


// ===== 00a9debc  core::panicking::panic_nounwind_nobacktrace =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_nounwind_nobacktrace */

void __rustcall core::panicking::panic_nounwind_nobacktrace(undefined8 param_1,long param_2)

{
                    /* WARNING: Subroutine does not return */
  panic_nounwind_fmt(param_1,param_2 << 1 | 1,1,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff9c0);
}


// ===== 00a9dedc  core::panicking::panic_null_pointer_dereference =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_null_pointer_dereference */

void __rustcall core::panicking::panic_null_pointer_dereference(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_nounwind_fmt(&DAT_00390ae3,0x43,0,param_1);
}


// ===== 00a9defc  core::panicking::panic_invalid_enum_construction =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_invalid_enum_construction */

void __rustcall
core::panicking::panic_invalid_enum_construction
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  undefined *puStack_18;
  
  local_20 = (undefined1 *)&local_30;
  puStack_18 = PTR_fmt_00b01098;
  local_30 = param_1;
  uStack_28 = param_2;
                    /* WARNING: Subroutine does not return */
  panic_nounwind_fmt(&DAT_00390b04,&local_20,0,param_3);
}


// ===== 00a9df34  core::panicking::panic_null_reference_constructed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_null_reference_constructed */

void __rustcall core::panicking::panic_null_reference_constructed(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_nounwind_fmt(&DAT_00390b3d,0x2f,0,param_1);
}


// ===== 00a9df54  core::panicking::panic_misaligned_pointer_dereference =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_misaligned_pointer_dereference */

void __rustcall
core::panicking::panic_misaligned_pointer_dereference
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  undefined *puStack_28;
  undefined8 *local_20;
  undefined *puStack_18;
  
  local_30 = (undefined1 *)&local_40;
  puStack_28 = PTR_fmt_00b00c30;
  local_20 = &uStack_38;
  puStack_18 = PTR_fmt_00b00c30;
  local_40 = param_1;
  uStack_38 = param_2;
                    /* WARNING: Subroutine does not return */
  panic_nounwind_fmt(&DAT_00390b54,&local_30,0,param_3);
}


// ===== 00a9df94  core::panicking::panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic */

void __rustcall core::panicking::panic(undefined8 param_1,long param_2)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(param_1,param_2 << 1 | 1);
}


// ===== 00a9dfa8  core::panicking::panic_fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_fmt */

void __rustcall
core::panicking::panic_fmt
          (undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
          undefined4 param_6)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  undefined4 uStack_140;
  char acStack_13c [44];
  undefined2 auStack_110 [4];
  char *pcStack_108;
  long lStack_100;
  undefined2 uStack_f8;
  long lStack_f0;
  undefined2 uStack_e0;
  char *pcStack_d8;
  long lStack_d0;
  char *pcStack_c8;
  ulong uStack_c0;
  undefined2 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  ulong uStack_20;
  undefined2 local_18;
  
  local_28 = &local_38;
  local_18 = 1;
  local_38 = param_1;
  uStack_30 = param_2;
  uStack_20 = param_3;
  lVar11 = __rustc::rust_begin_unwind(&local_28);
  auVar27._8_8_ = param_4;
  auVar27._0_8_ = param_3;
  pcStack_98 = FUN_00a9dfd0;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (param_3 == 0 && param_4 == 0) {
    uVar12 = 0;
    uVar10 = *(uint *)(lVar11 + 0x10);
joined_r0x00a9e0d0:
    uVar26 = (ulong)uVar10;
    if ((uVar10 >> 0x1c & 1) != 0) goto LAB_00a9e28c;
LAB_00a9e0d4:
    uVar14 = param_3 >> 1 | param_4 << 0x3f;
    lVar24 = 0;
    uVar25 = uVar14 + (param_4 >> 1);
    if (CARRY8(uVar14,param_4 >> 1)) {
      uVar25 = uVar25 + 1;
    }
    if ((uVar12 == 0) || (uVar14 = uVar12, (param_3 & 1) != 0 || uVar25 % 5 != 0))
    goto LAB_00a9e3b4;
    do {
      uVar20 = param_3 >> 1 | param_4 << 0x3f;
      param_4 = param_4 >> 1;
      uVar25 = uVar20 + param_4;
      if (CARRY8(uVar20,param_4)) {
        uVar25 = uVar25 + 1;
      }
      uVar21 = uVar20 - uVar25 % 5;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar21;
      param_3 = uVar21 * -0x3333333333333333;
      uVar20 = SUB168(auVar4 * ZEXT816(0xcccccccccccccccd),8) + uVar21 * -0x3333333333333334 +
               (param_4 - (uVar20 < uVar25 % 5)) * -0x3333333333333333;
      uVar21 = param_3 >> 1 | uVar20 << 0x3f;
      uVar25 = uVar21 + (uVar20 >> 1);
      if (CARRY8(uVar21,uVar20 >> 1)) {
        uVar25 = uVar25 + 1;
      }
      uVar14 = uVar14 - 1;
    } while ((uVar14 != 0) && (param_4 = uVar20, (param_3 & 1) == 0 && uVar25 % 5 == 0));
LAB_00a9e184:
    auVar27._8_8_ = uVar20;
    auVar27._0_8_ = param_3;
    uVar21 = uVar12;
joined_r0x00a9e828:
    uVar12 = uVar14;
    lVar24 = 0;
    if (uVar12 == 0) {
LAB_00a9e3c0:
      acStack_13c[0] = (char)param_3;
      lVar15 = 1;
      goto LAB_00a9e3c4;
    }
  }
  else {
    if (0xfffffb11d292bea4 < ~param_4 ||
        CARRY8(~param_4 + 0x4ee2d6d415b,(ulong)(param_3 < 0x85acef8100000000))) {
      uVar12 = FUN_00ab1c88(param_3,param_4,10000000000000000,0);
      bVar1 = CARRY8(~(param_4 + (param_3 >= 10000000000000000)),
                     (ulong)(param_3 < 10000000000000000));
      if (bVar1) {
        uVar12 = param_3;
      }
      iVar18 = 0x10;
      if (bVar1) {
        iVar18 = 0;
      }
      uVar26 = uVar12 / 10000000000;
      if (uVar12 < 10000000000) {
        uVar26 = uVar12;
      }
      uVar10 = 10;
      if (uVar12 < 10000000000) {
        uVar10 = 0;
      }
      if (0xc34 < uVar26 >> 5) {
        uVar10 = uVar10 | 5;
        uVar26 = (uVar26 >> 5) / 0xc35;
      }
      iVar19 = (int)uVar26;
      uVar12 = (ulong)(uVar10 + iVar18 +
                      ((iVar19 + 0x5fff6U & iVar19 + 0x7ff9cU ^
                       iVar19 + 0xdfc18U & iVar19 + 0x7d8f0U) >> 0x11));
      uVar10 = *(uint *)(lVar11 + 0x10);
      goto joined_r0x00a9e0d0;
    }
    uVar12 = FUN_00ab1c88(param_3,param_4,0x85acef8100000000,0x4ee2d6d415b);
    uVar17 = (uint)(uVar12 >> 5) & 0x7ffffff;
    uVar10 = (uint)(uVar12 * 0x53e2d7 >> 0x27);
    if (uVar17 < 0xc35) {
      uVar10 = (uint)uVar12;
    }
    iVar18 = 0x25;
    if (uVar17 < 0xc35) {
      iVar18 = 0x20;
    }
    uVar12 = (ulong)(iVar18 + ((uVar10 + 0x5fff6 & uVar10 + 0x7ff9c ^
                               uVar10 + 0xdfc18 & uVar10 + 0x7d8f0) >> 0x11));
    uVar26 = (ulong)*(uint *)(lVar11 + 0x10);
    if ((*(uint *)(lVar11 + 0x10) >> 0x1c & 1) == 0) goto LAB_00a9e0d4;
LAB_00a9e28c:
    uVar3 = *(ushort *)(lVar11 + 0x16);
    uVar14 = (ulong)uVar3;
    uVar25 = uVar12 - uVar14;
    if (uVar14 <= uVar12 && uVar25 != 0) {
      uVar10 = (uint)uVar25;
      if ((uVar25 & 1) == 0) {
        uVar23 = 1;
LAB_00a9e4d0:
        if ((uVar10 >> 1 & 1) != 0) {
          uVar21 = 0;
          uVar23 = uVar23 * 100;
          if ((uVar10 & 0xfffe) == 2) goto LAB_00a9e580;
        }
        if ((uVar10 >> 2 & 1) != 0) {
          uVar21 = 0;
          uVar23 = uVar23 * 10000;
          if ((uVar10 & 0xfffc) == 4) goto LAB_00a9e580;
        }
        if ((uVar10 >> 3 & 1) != 0) {
          uVar21 = 0;
          uVar23 = uVar23 * 100000000;
          if ((uVar10 & 0xfff8) == 8) goto LAB_00a9e580;
        }
        uVar21 = 0;
        if ((uVar10 >> 4 & 1) != 0) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar23;
          uVar21 = SUB168(auVar5 * ZEXT816(10000000000000000),8);
          uVar23 = uVar23 * 10000000000000000;
          if ((uVar10 & 0xfff0) == 0x10) goto LAB_00a9e580;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar23;
        lVar24 = uVar23 * 0x4ee2d6d415b;
        uVar23 = uVar23 * -0x7a53107f00000000;
        uVar21 = SUB168(auVar6 * ZEXT816(0x85acef8100000000),8) + lVar24 +
                 uVar21 * -0x7a53107f00000000;
      }
      else {
        uVar21 = 0;
        uVar23 = 10;
        if (uVar25 != 1) goto LAB_00a9e4d0;
      }
LAB_00a9e580:
      auVar27 = FUN_00ab1c88(param_3,param_4,uVar23,uVar21);
      uVar20 = auVar27._8_8_;
      uVar13 = auVar27._0_8_;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar13;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar23;
      uVar22 = uVar21 >> 1;
      uVar16 = uVar23 >> 1 | uVar21 << 0x3f;
      uVar25 = param_3 - uVar13 * uVar23;
      param_4 = param_4 - (SUB168(auVar7 * auVar9,8) + uVar13 * uVar21 + uVar20 * uVar23 +
                          (ulong)(param_3 < uVar13 * uVar23));
      uVar21 = uVar12;
      param_3 = uVar13;
      if (CARRY8(param_4,~uVar22) || CARRY8(param_4 + ~uVar22,(ulong)(uVar16 <= uVar25))) {
        if (CARRY8(uVar22,~param_4) || CARRY8(uVar22 + ~param_4,(ulong)(uVar25 <= uVar16))) {
          param_3 = (uVar13 & 1) + uVar13;
          if (CARRY8(uVar13 & 1,uVar13)) {
            uVar20 = uVar20 + 1;
          }
          if ((auVar27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_00a9e184;
        }
        else {
          param_3 = uVar13 + 1;
          if (uVar13 == 0xffffffffffffffff) {
            uVar20 = uVar20 + 1;
          }
        }
        auVar27._8_8_ = uVar20;
        auVar27._0_8_ = param_3;
        if (param_3 == 0 && uVar20 == 0) {
          param_3 = 0;
          auVar27 = ZEXT816(0);
        }
        else if (0xfffffb11d292bea4 < ~uVar20 ||
                 CARRY8(~uVar20 + 0x4ee2d6d415b,(ulong)(param_3 < 0x85acef8100000000))) {
          uVar25 = FUN_00ab1c88(param_3,uVar20,10000000000000000,0);
          bVar1 = CARRY8(~(uVar20 + (param_3 >= 10000000000000000)),
                         (ulong)(param_3 < 10000000000000000));
          if (bVar1) {
            uVar25 = param_3;
          }
          iVar18 = 0x10;
          if (bVar1) {
            iVar18 = 0;
          }
          uVar23 = uVar25 / 10000000000;
          if (uVar25 < 10000000000) {
            uVar23 = uVar25;
          }
          uVar10 = 10;
          if (uVar25 < 10000000000) {
            uVar10 = 0;
          }
          if (0xc34 < uVar23 >> 5) {
            uVar10 = uVar10 | 5;
            uVar23 = (uVar23 >> 5) / 0xc35;
          }
          iVar19 = (int)uVar23;
          if ((uint)uVar3 <
              uVar10 + iVar18 +
              ((iVar19 + 0x5fff6U & iVar19 + 0x7ff9cU ^ iVar19 + 0xdfc18U & iVar19 + 0x7d8f0U) >>
              0x11)) goto LAB_00a9e7d8;
        }
        else {
          uVar25 = FUN_00ab1c88(param_3,uVar20,0x85acef8100000000,0x4ee2d6d415b);
          uVar17 = (uint)(uVar25 >> 5) & 0x7ffffff;
          uVar10 = (uint)(uVar25 * 0x53e2d7 >> 0x27);
          if (uVar17 < 0xc35) {
            uVar10 = (uint)uVar25;
          }
          iVar18 = 0x25;
          if (uVar17 < 0xc35) {
            iVar18 = 0x20;
          }
          if ((uint)uVar3 <
              iVar18 + ((uVar10 + 0x5fff6 & uVar10 + 0x7ff9c ^ uVar10 + 0xdfc18 & uVar10 + 0x7d8f0)
                       >> 0x11)) {
LAB_00a9e7d8:
            uVar21 = param_3 >> 1 | uVar20 << 0x3f;
            uVar20 = uVar20 >> 1;
            uVar25 = uVar21 + uVar20;
            if (CARRY8(uVar21,uVar20)) {
              uVar25 = uVar25 + 1;
            }
            uVar23 = uVar21 - uVar25 % 5;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar23;
            auVar27._8_8_ =
                 SUB168(auVar8 * ZEXT816(0xcccccccccccccccd),8) + uVar23 * -0x3333333333333334 +
                 (uVar20 - (uVar21 < uVar25 % 5)) * -0x3333333333333333;
            auVar27._0_8_ = uVar23 * -0x3333333333333333;
            uVar21 = uVar12 + 1;
            param_3 = uVar23 * -0x3333333333333333;
          }
        }
      }
      goto joined_r0x00a9e828;
    }
    lVar24 = uVar14 - uVar12;
LAB_00a9e3b4:
    uVar21 = uVar12;
    if (uVar12 == 0 && lVar24 == 0) goto LAB_00a9e3c0;
  }
  lVar15 = auVar27._0_8_;
  acStack_13c[1] = 0x2e;
  if (1 < uVar12) {
    uStack_140 = param_6;
    auVar27 = FUN_00ab1c88(lVar15,auVar27._8_8_,100,0);
    uVar25 = uVar12;
    if (0x2a < uVar12) {
code_r0x00a9e838:
                    /* WARNING: Subroutine does not return */
      panic_bounds_check(uVar25,0x2b,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff9d8);
    }
    lVar15 = (lVar15 + auVar27._0_8_ * -100) * 2;
    acStack_13c[uVar12] = (&DAT_00390ba7)[lVar15];
    if (uVar12 == 0x2a) {
                    /* WARNING: Subroutine does not return */
      panic_bounds_check(uVar12 + 1,0x2b,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff9d8);
    }
    acStack_13c[uVar12 + 1] = (&DAT_00390ba8)[lVar15];
    uVar14 = uVar12;
    lVar15 = auVar27._0_8_;
    param_6 = uStack_140;
    if (3 < uVar12) {
      do {
        lVar15 = auVar27._0_8_;
        uVar25 = uVar14 - 2;
        if (0x2a < uVar25) goto code_r0x00a9e838;
        auVar27 = FUN_00ab1c88(lVar15,auVar27._8_8_,100,0);
        uVar20 = uVar14 - 1;
        *(undefined2 *)(acStack_13c + (uVar14 - 2)) =
             *(undefined2 *)(&DAT_00390ba7 + (lVar15 + auVar27._0_8_ * -100) * 2);
        uVar14 = uVar25;
        lVar15 = auVar27._0_8_;
        param_6 = uStack_140;
      } while (4 < uVar20);
    }
  }
  acStack_13c[0] = (char)lVar15;
  if ((uVar12 & 1) != 0) {
    uVar20 = SUB168(auVar27 >> 1,0);
    uVar25 = SUB168(auVar27 >> 1,8);
    uVar14 = uVar20 + uVar25;
    if (CARRY8(uVar20,uVar25)) {
      uVar14 = uVar14 + 1;
    }
    cVar2 = ((char)(uVar14 / 5) * '\x05' - (char)uVar14) + (char)(auVar27._0_8_ >> 1);
    acStack_13c[0] = cVar2 * -0x33;
    acStack_13c[2] = auVar27[0] + cVar2 * -2 | 0x30;
  }
  lVar15 = uVar12 + 2;
  uStack_140 = param_6;
LAB_00a9e3c4:
  acStack_13c[0] = acStack_13c[0] + '0';
  acStack_13c[lVar15] = (char)param_6;
  if (uVar21 < 10) {
    acStack_13c[lVar15 + 1] = (byte)uVar21 | 0x30;
    lStack_d0 = 2;
  }
  else {
    cVar2 = (&DAT_00390ba7)[uVar21 * 2];
    acStack_13c[lVar15 + 2] = (&DAT_00390ba8)[uVar21 * 2];
    acStack_13c[lVar15 + 1] = cVar2;
    lStack_d0 = 3;
  }
  if (lVar24 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad_integral
              (lVar11,param_5 & 0xffffffff,1,0,acStack_13c,lVar15 + lStack_d0);
  }
  else {
    pcStack_108 = acStack_13c;
    uStack_c0 = uVar26 >> 0x15 & 1;
    auStack_110[0] = 2;
    uStack_e0 = 2;
    pcStack_c8 = "+";
    if ((uVar26 & 0x200000) == 0) {
      pcStack_c8 = (char *)0x1;
    }
    uStack_f8 = 0;
    if ((int)param_5 == 0) {
      uStack_c0 = 1;
      pcStack_c8 = "-+";
    }
    puStack_b8 = auStack_110;
    uStack_b0 = 3;
    lStack_100 = lVar15;
    lStack_f0 = lVar24;
    pcStack_d8 = acStack_13c + lVar15;
    FUN_00a9a57c(lVar11,&pcStack_c8);
  }
  return;
}


// ===== 00a9dfd0  FUN_00a9dfd0 =====

void FUN_00a9dfd0(long param_1,undefined8 param_2,ulong param_3,ulong param_4,int param_5,
                 undefined4 param_6)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 auVar26 [16];
  undefined4 local_100;
  char local_fc [44];
  undefined2 local_d0 [4];
  char *local_c8;
  long lStack_c0;
  undefined2 local_b8;
  long local_b0;
  undefined2 local_a0;
  char *local_98;
  long lStack_90;
  char *local_88;
  ulong uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  
  auVar26._8_8_ = param_4;
  auVar26._0_8_ = param_3;
  if (param_3 == 0 && param_4 == 0) {
    uVar11 = 0;
    uVar10 = *(uint *)(param_1 + 0x10);
joined_r0x00a9e0d0:
    uVar25 = (ulong)uVar10;
    if ((uVar10 >> 0x1c & 1) != 0) goto LAB_00a9e28c;
LAB_00a9e0d4:
    uVar13 = param_3 >> 1 | param_4 << 0x3f;
    lVar23 = 0;
    uVar24 = uVar13 + (param_4 >> 1);
    if (CARRY8(uVar13,param_4 >> 1)) {
      uVar24 = uVar24 + 1;
    }
    if ((uVar11 == 0) || (uVar13 = uVar11, (param_3 & 1) != 0 || uVar24 % 5 != 0))
    goto LAB_00a9e3b4;
    do {
      uVar19 = param_3 >> 1 | param_4 << 0x3f;
      param_4 = param_4 >> 1;
      uVar24 = uVar19 + param_4;
      if (CARRY8(uVar19,param_4)) {
        uVar24 = uVar24 + 1;
      }
      uVar20 = uVar19 - uVar24 % 5;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar20;
      param_3 = uVar20 * -0x3333333333333333;
      uVar19 = SUB168(auVar4 * ZEXT816(0xcccccccccccccccd),8) + uVar20 * -0x3333333333333334 +
               (param_4 - (uVar19 < uVar24 % 5)) * -0x3333333333333333;
      uVar20 = param_3 >> 1 | uVar19 << 0x3f;
      uVar24 = uVar20 + (uVar19 >> 1);
      if (CARRY8(uVar20,uVar19 >> 1)) {
        uVar24 = uVar24 + 1;
      }
      uVar13 = uVar13 - 1;
    } while ((uVar13 != 0) && (param_4 = uVar19, (param_3 & 1) == 0 && uVar24 % 5 == 0));
LAB_00a9e184:
    auVar26._8_8_ = uVar19;
    auVar26._0_8_ = param_3;
    uVar20 = uVar11;
joined_r0x00a9e828:
    uVar11 = uVar13;
    lVar23 = 0;
    if (uVar11 == 0) {
LAB_00a9e3c0:
      local_fc[0] = (char)param_3;
      lVar14 = 1;
      goto LAB_00a9e3c4;
    }
  }
  else {
    if (0xfffffb11d292bea4 < ~param_4 ||
        CARRY8(~param_4 + 0x4ee2d6d415b,(ulong)(param_3 < 0x85acef8100000000))) {
      uVar11 = FUN_00ab1c88(param_3,param_4,10000000000000000,0);
      bVar1 = CARRY8(~(param_4 + (param_3 >= 10000000000000000)),
                     (ulong)(param_3 < 10000000000000000));
      if (bVar1) {
        uVar11 = param_3;
      }
      iVar17 = 0x10;
      if (bVar1) {
        iVar17 = 0;
      }
      uVar25 = uVar11 / 10000000000;
      if (uVar11 < 10000000000) {
        uVar25 = uVar11;
      }
      uVar10 = 10;
      if (uVar11 < 10000000000) {
        uVar10 = 0;
      }
      if (0xc34 < uVar25 >> 5) {
        uVar10 = uVar10 | 5;
        uVar25 = (uVar25 >> 5) / 0xc35;
      }
      iVar18 = (int)uVar25;
      uVar11 = (ulong)(uVar10 + iVar17 +
                      ((iVar18 + 0x5fff6U & iVar18 + 0x7ff9cU ^
                       iVar18 + 0xdfc18U & iVar18 + 0x7d8f0U) >> 0x11));
      uVar10 = *(uint *)(param_1 + 0x10);
      goto joined_r0x00a9e0d0;
    }
    uVar11 = FUN_00ab1c88(param_3,param_4,0x85acef8100000000,0x4ee2d6d415b);
    uVar16 = (uint)(uVar11 >> 5) & 0x7ffffff;
    uVar10 = (uint)(uVar11 * 0x53e2d7 >> 0x27);
    if (uVar16 < 0xc35) {
      uVar10 = (uint)uVar11;
    }
    iVar17 = 0x25;
    if (uVar16 < 0xc35) {
      iVar17 = 0x20;
    }
    uVar11 = (ulong)(iVar17 + ((uVar10 + 0x5fff6 & uVar10 + 0x7ff9c ^
                               uVar10 + 0xdfc18 & uVar10 + 0x7d8f0) >> 0x11));
    uVar25 = (ulong)*(uint *)(param_1 + 0x10);
    if ((*(uint *)(param_1 + 0x10) >> 0x1c & 1) == 0) goto LAB_00a9e0d4;
LAB_00a9e28c:
    uVar3 = *(ushort *)(param_1 + 0x16);
    uVar13 = (ulong)uVar3;
    uVar24 = uVar11 - uVar13;
    if (uVar13 <= uVar11 && uVar24 != 0) {
      uVar10 = (uint)uVar24;
      if ((uVar24 & 1) == 0) {
        uVar22 = 1;
LAB_00a9e4d0:
        if ((uVar10 >> 1 & 1) != 0) {
          uVar20 = 0;
          uVar22 = uVar22 * 100;
          if ((uVar10 & 0xfffe) == 2) goto LAB_00a9e580;
        }
        if ((uVar10 >> 2 & 1) != 0) {
          uVar20 = 0;
          uVar22 = uVar22 * 10000;
          if ((uVar10 & 0xfffc) == 4) goto LAB_00a9e580;
        }
        if ((uVar10 >> 3 & 1) != 0) {
          uVar20 = 0;
          uVar22 = uVar22 * 100000000;
          if ((uVar10 & 0xfff8) == 8) goto LAB_00a9e580;
        }
        uVar20 = 0;
        if ((uVar10 >> 4 & 1) != 0) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar22;
          uVar20 = SUB168(auVar5 * ZEXT816(10000000000000000),8);
          uVar22 = uVar22 * 10000000000000000;
          if ((uVar10 & 0xfff0) == 0x10) goto LAB_00a9e580;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar22;
        lVar23 = uVar22 * 0x4ee2d6d415b;
        uVar22 = uVar22 * -0x7a53107f00000000;
        uVar20 = SUB168(auVar6 * ZEXT816(0x85acef8100000000),8) + lVar23 +
                 uVar20 * -0x7a53107f00000000;
      }
      else {
        uVar20 = 0;
        uVar22 = 10;
        if (uVar24 != 1) goto LAB_00a9e4d0;
      }
LAB_00a9e580:
      auVar26 = FUN_00ab1c88(param_3,param_4,uVar22,uVar20);
      uVar19 = auVar26._8_8_;
      uVar12 = auVar26._0_8_;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar12;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar22;
      uVar21 = uVar20 >> 1;
      uVar15 = uVar22 >> 1 | uVar20 << 0x3f;
      uVar24 = param_3 - uVar12 * uVar22;
      param_4 = param_4 - (SUB168(auVar7 * auVar9,8) + uVar12 * uVar20 + uVar19 * uVar22 +
                          (ulong)(param_3 < uVar12 * uVar22));
      uVar20 = uVar11;
      param_3 = uVar12;
      if (CARRY8(param_4,~uVar21) || CARRY8(param_4 + ~uVar21,(ulong)(uVar15 <= uVar24))) {
        if (CARRY8(uVar21,~param_4) || CARRY8(uVar21 + ~param_4,(ulong)(uVar24 <= uVar15))) {
          param_3 = (uVar12 & 1) + uVar12;
          if (CARRY8(uVar12 & 1,uVar12)) {
            uVar19 = uVar19 + 1;
          }
          if ((auVar26 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_00a9e184;
        }
        else {
          param_3 = uVar12 + 1;
          if (uVar12 == 0xffffffffffffffff) {
            uVar19 = uVar19 + 1;
          }
        }
        auVar26._8_8_ = uVar19;
        auVar26._0_8_ = param_3;
        if (param_3 == 0 && uVar19 == 0) {
          param_3 = 0;
          auVar26 = ZEXT816(0);
        }
        else if (0xfffffb11d292bea4 < ~uVar19 ||
                 CARRY8(~uVar19 + 0x4ee2d6d415b,(ulong)(param_3 < 0x85acef8100000000))) {
          uVar24 = FUN_00ab1c88(param_3,uVar19,10000000000000000,0);
          bVar1 = CARRY8(~(uVar19 + (param_3 >= 10000000000000000)),
                         (ulong)(param_3 < 10000000000000000));
          if (bVar1) {
            uVar24 = param_3;
          }
          iVar17 = 0x10;
          if (bVar1) {
            iVar17 = 0;
          }
          uVar22 = uVar24 / 10000000000;
          if (uVar24 < 10000000000) {
            uVar22 = uVar24;
          }
          uVar10 = 10;
          if (uVar24 < 10000000000) {
            uVar10 = 0;
          }
          if (0xc34 < uVar22 >> 5) {
            uVar10 = uVar10 | 5;
            uVar22 = (uVar22 >> 5) / 0xc35;
          }
          iVar18 = (int)uVar22;
          if ((uint)uVar3 <
              uVar10 + iVar17 +
              ((iVar18 + 0x5fff6U & iVar18 + 0x7ff9cU ^ iVar18 + 0xdfc18U & iVar18 + 0x7d8f0U) >>
              0x11)) goto LAB_00a9e7d8;
        }
        else {
          uVar24 = FUN_00ab1c88(param_3,uVar19,0x85acef8100000000,0x4ee2d6d415b);
          uVar16 = (uint)(uVar24 >> 5) & 0x7ffffff;
          uVar10 = (uint)(uVar24 * 0x53e2d7 >> 0x27);
          if (uVar16 < 0xc35) {
            uVar10 = (uint)uVar24;
          }
          iVar17 = 0x25;
          if (uVar16 < 0xc35) {
            iVar17 = 0x20;
          }
          if ((uint)uVar3 <
              iVar17 + ((uVar10 + 0x5fff6 & uVar10 + 0x7ff9c ^ uVar10 + 0xdfc18 & uVar10 + 0x7d8f0)
                       >> 0x11)) {
LAB_00a9e7d8:
            uVar20 = param_3 >> 1 | uVar19 << 0x3f;
            uVar19 = uVar19 >> 1;
            uVar24 = uVar20 + uVar19;
            if (CARRY8(uVar20,uVar19)) {
              uVar24 = uVar24 + 1;
            }
            uVar22 = uVar20 - uVar24 % 5;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar22;
            auVar26._8_8_ =
                 SUB168(auVar8 * ZEXT816(0xcccccccccccccccd),8) + uVar22 * -0x3333333333333334 +
                 (uVar19 - (uVar20 < uVar24 % 5)) * -0x3333333333333333;
            auVar26._0_8_ = uVar22 * -0x3333333333333333;
            uVar20 = uVar11 + 1;
            param_3 = uVar22 * -0x3333333333333333;
          }
        }
      }
      goto joined_r0x00a9e828;
    }
    lVar23 = uVar13 - uVar11;
LAB_00a9e3b4:
    uVar20 = uVar11;
    if (uVar11 == 0 && lVar23 == 0) goto LAB_00a9e3c0;
  }
  lVar14 = auVar26._0_8_;
  local_fc[1] = 0x2e;
  if (1 < uVar11) {
    local_100 = param_6;
    auVar26 = FUN_00ab1c88(lVar14,auVar26._8_8_,100,0);
    uVar24 = uVar11;
    if (0x2a < uVar11) {
code_r0x00a9e838:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar24,0x2b,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff9d8);
    }
    lVar14 = (lVar14 + auVar26._0_8_ * -100) * 2;
    local_fc[uVar11] = (&DAT_00390ba7)[lVar14];
    if (uVar11 == 0x2a) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar11 + 1,0x2b,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff9d8);
    }
    local_fc[uVar11 + 1] = (&DAT_00390ba8)[lVar14];
    uVar13 = uVar11;
    lVar14 = auVar26._0_8_;
    param_6 = local_100;
    if (3 < uVar11) {
      do {
        lVar14 = auVar26._0_8_;
        uVar24 = uVar13 - 2;
        if (0x2a < uVar24) goto code_r0x00a9e838;
        auVar26 = FUN_00ab1c88(lVar14,auVar26._8_8_,100,0);
        uVar19 = uVar13 - 1;
        *(undefined2 *)(local_fc + (uVar13 - 2)) =
             *(undefined2 *)(&DAT_00390ba7 + (lVar14 + auVar26._0_8_ * -100) * 2);
        uVar13 = uVar24;
        lVar14 = auVar26._0_8_;
        param_6 = local_100;
      } while (4 < uVar19);
    }
  }
  local_fc[0] = (char)lVar14;
  if ((uVar11 & 1) != 0) {
    uVar19 = SUB168(auVar26 >> 1,0);
    uVar24 = SUB168(auVar26 >> 1,8);
    uVar13 = uVar19 + uVar24;
    if (CARRY8(uVar19,uVar24)) {
      uVar13 = uVar13 + 1;
    }
    cVar2 = ((char)(uVar13 / 5) * '\x05' - (char)uVar13) + (char)(auVar26._0_8_ >> 1);
    local_fc[0] = cVar2 * -0x33;
    local_fc[2] = auVar26[0] + cVar2 * -2 | 0x30;
  }
  lVar14 = uVar11 + 2;
  local_100 = param_6;
LAB_00a9e3c4:
  local_fc[0] = local_fc[0] + '0';
  local_fc[lVar14] = (char)param_6;
  if (uVar20 < 10) {
    local_fc[lVar14 + 1] = (byte)uVar20 | 0x30;
    lStack_90 = 2;
  }
  else {
    cVar2 = (&DAT_00390ba7)[uVar20 * 2];
    local_fc[lVar14 + 2] = (&DAT_00390ba8)[uVar20 * 2];
    local_fc[lVar14 + 1] = cVar2;
    lStack_90 = 3;
  }
  if (lVar23 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad_integral
              (param_1,param_5,1,0,local_fc,lVar14 + lStack_90);
  }
  else {
    local_c8 = local_fc;
    uStack_80 = uVar25 >> 0x15 & 1;
    local_d0[0] = 2;
    local_a0 = 2;
    local_88 = "+";
    if ((uVar25 & 0x200000) == 0) {
      local_88 = (char *)0x1;
    }
    local_b8 = 0;
    if (param_5 == 0) {
      uStack_80 = 1;
      local_88 = "-+";
    }
    local_78 = local_d0;
    uStack_70 = 3;
    lStack_c0 = lVar14;
    local_b0 = lVar23;
    local_98 = local_fc + lVar14;
    FUN_00a9a57c(param_1,&local_88);
  }
  return;
}


// ===== 00a9e858  core::str::count::do_count_chars =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::str::count::do_count_chars */

long __rustcall core::str::count::do_count_chars(char *param_1,ulong param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  uint3 uVar5;
  uint3 uVar6;
  bool bVar7;
  ulong *puVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  char *pcVar17;
  ulong *puVar18;
  ulong *puVar19;
  long lVar20;
  ulong uVar21;
  byte bVar23;
  long lVar22;
  byte bVar25;
  long lVar24;
  byte bVar26;
  byte bVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  byte bVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  ulong uVar46;
  byte bVar49;
  ulong uVar47;
  long lVar48;
  ulong uVar50;
  byte bVar54;
  ulong uVar51;
  long lVar52;
  long lVar53;
  ulong uVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  undefined8 uVar59;
  ulong uVar60;
  long lVar61;
  ulong uVar62;
  long lVar63;
  ulong uVar65;
  long lVar66;
  ulong uVar68;
  byte bVar70;
  long lVar69;
  ulong uVar71;
  byte bVar73;
  long lVar72;
  ulong uVar74;
  byte bVar76;
  byte bVar77;
  long lVar75;
  ulong uVar78;
  byte bVar80;
  byte bVar81;
  long lVar79;
  ulong uVar82;
  byte bVar84;
  long lVar83;
  ulong uVar85;
  byte bVar87;
  long lVar86;
  ulong uVar88;
  byte bVar90;
  long lVar89;
  ulong uVar91;
  byte bVar93;
  long lVar92;
  long lVar94;
  long lVar95;
  byte bVar97;
  long lVar96;
  byte bVar99;
  long lVar98;
  byte bVar102;
  ulong uVar100;
  long lVar101;
  byte bVar105;
  ulong uVar103;
  long lVar104;
  byte bVar108;
  ulong uVar106;
  long lVar107;
  byte bVar111;
  ulong uVar109;
  long lVar110;
  byte bVar114;
  ulong uVar112;
  long lVar113;
  byte bVar117;
  ulong uVar115;
  long lVar116;
  ulong uVar118;
  ulong uVar119;
  byte bVar121;
  undefined1 auVar120 [16];
  undefined1 auVar122 [16];
  ulong uVar123;
  ulong uVar124;
  ulong uVar125;
  ulong uVar126;
  ulong uVar127;
  ulong uVar128;
  ulong uVar129;
  ulong uVar131;
  byte bVar64;
  byte bVar67;
  byte bVar130;
  byte bVar132;
  
  pcVar17 = (char *)((ulong)(param_1 + 7) & 0xfffffffffffffff8);
  uVar16 = (long)pcVar17 - (long)param_1;
  uVar15 = param_2 - uVar16;
  if ((uVar16 <= param_2) && (uVar11 = uVar15 >> 3, uVar11 != 0)) {
    uVar13 = uVar15 & 7;
    lVar9 = 0;
    if (pcVar17 != param_1) {
      lVar14 = (long)param_1 - (long)pcVar17;
      pcVar17 = param_1;
      do {
        iVar12 = (int)*pcVar17;
        if (iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
          lVar9 = lVar9 + 1;
        }
        bVar7 = lVar14 != -1;
        lVar14 = lVar14 + 1;
        pcVar17 = pcVar17 + 1;
      } while (bVar7);
    }
    if (uVar13 == 0) {
      uVar15 = 0;
    }
    else {
      pcVar17 = (char *)((long)(param_1 + uVar16) + (uVar15 & 0x7ffffffffffffff8));
      iVar12 = (int)*pcVar17;
      uVar15 = (ulong)(iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41));
      if (uVar13 != 1) {
        iVar12 = (int)pcVar17[1];
        if (iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
          uVar15 = uVar15 + 1;
        }
        if (uVar13 != 2) {
          iVar12 = (int)pcVar17[2];
          if (iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
            uVar15 = uVar15 + 1;
          }
          if (uVar13 != 3) {
            iVar12 = (int)pcVar17[3];
            if (iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
              uVar15 = uVar15 + 1;
            }
            if (uVar13 != 4) {
              iVar12 = (int)pcVar17[4];
              if (iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
                uVar15 = uVar15 + 1;
              }
              if (uVar13 != 5) {
                iVar12 = (int)pcVar17[5];
                if (iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
                  uVar15 = uVar15 + 1;
                }
                if ((uVar13 != 6) &&
                   (iVar12 = (int)pcVar17[6],
                   iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41))) {
                  uVar15 = uVar15 + 1;
                }
              }
            }
          }
        }
      }
    }
    lVar9 = uVar15 + lVar9;
    puVar19 = (ulong *)(param_1 + uVar16);
    do {
      puVar18 = puVar19;
      if (uVar11 == 0) {
        return lVar9;
      }
      uVar15 = uVar11;
      if (0xbf < uVar11) {
        uVar15 = 0xc0;
      }
      uVar16 = uVar15 * 8 & 0x7e0;
      if (uVar16 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar15 * 8 - 0x20;
        if (uVar13 < 0x60) {
          uVar13 = 0;
          puVar19 = puVar18;
        }
        else {
          lVar14 = 0;
          lVar20 = 0;
          lVar22 = 0;
          lVar24 = 0;
          uVar3 = (uVar13 >> 5) + 1;
          uVar13 = uVar3 & 0xffffffffffffffc;
          puVar19 = puVar18 + (uVar3 & 0xffffffffffffffc) * 4;
          puVar8 = puVar18 + 8;
          do {
            uVar68 = *puVar8;
            uVar74 = puVar8[1];
            uVar82 = puVar8[2];
            uVar88 = puVar8[3];
            uVar71 = puVar8[4];
            uVar78 = puVar8[5];
            uVar85 = puVar8[6];
            uVar91 = puVar8[7];
            uVar13 = uVar13 - 4;
            uVar4 = puVar8[-8];
            bVar23 = (byte)(uVar4 >> 0x38);
            uVar46 = puVar8[-7];
            uVar55 = puVar8[-6];
            uVar51 = puVar8[-5];
            uVar21 = puVar8[-4];
            bVar25 = (byte)(uVar21 >> 0x38);
            uVar50 = puVar8[-3];
            uVar47 = puVar8[-2];
            uVar60 = puVar8[-1];
            bVar70 = (byte)(uVar68 >> 0x38);
            bVar64 = ~bVar70;
            uVar62 = CONCAT17(bVar64,CONCAT16(~(byte)(uVar68 >> 0x30),
                                              CONCAT15(~(byte)(uVar68 >> 0x28),
                                                       CONCAT14(~(byte)(uVar68 >> 0x20),
                                                                CONCAT13(~(byte)(uVar68 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar68 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar68 >> 8),~(byte)uVar68)))))));
            bVar73 = (byte)(uVar71 >> 0x38);
            bVar67 = ~bVar73;
            uVar65 = CONCAT17(bVar67,CONCAT16(~(byte)(uVar71 >> 0x30),
                                              CONCAT15(~(byte)(uVar71 >> 0x28),
                                                       CONCAT14(~(byte)(uVar71 >> 0x20),
                                                                CONCAT13(~(byte)(uVar71 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar71 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar71 >> 8),~(byte)uVar71)))))));
            bVar76 = (byte)(uVar74 >> 0x38);
            bVar97 = ~bVar76;
            bVar80 = (byte)(uVar78 >> 0x38);
            bVar99 = ~bVar80;
            bVar84 = (byte)(uVar82 >> 0x38);
            bVar121 = ~bVar84;
            auVar122._0_8_ =
                 CONCAT17(bVar121,CONCAT16(~(byte)(uVar82 >> 0x30),
                                           CONCAT15(~(byte)(uVar82 >> 0x28),
                                                    CONCAT14(~(byte)(uVar82 >> 0x20),
                                                             CONCAT13(~(byte)(uVar82 >> 0x18),
                                                                      CONCAT12(~(byte)(uVar82 >>
                                                                                      0x10),
                                                                               CONCAT11(~(byte)(
                                                  uVar82 >> 8),~(byte)uVar82)))))));
            auVar122[8] = ~(byte)uVar85;
            auVar122[9] = ~(byte)(uVar85 >> 8);
            auVar122[10] = ~(byte)(uVar85 >> 0x10);
            auVar122[0xb] = ~(byte)(uVar85 >> 0x18);
            auVar122[0xc] = ~(byte)(uVar85 >> 0x20);
            auVar122[0xd] = ~(byte)(uVar85 >> 0x28);
            auVar122[0xe] = ~(byte)(uVar85 >> 0x30);
            bVar87 = (byte)(uVar85 >> 0x38);
            auVar122[0xf] = ~bVar87;
            bVar102 = ~bVar23;
            bVar105 = ~bVar25;
            bVar26 = (byte)(uVar46 >> 0x38);
            bVar108 = ~bVar26;
            bVar27 = (byte)(uVar50 >> 0x38);
            bVar111 = ~bVar27;
            bVar35 = (byte)(uVar55 >> 0x38);
            bVar114 = ~bVar35;
            bVar44 = (byte)(uVar47 >> 0x38);
            bVar117 = ~bVar44;
            uVar68 = uVar68 >> 6;
            uVar71 = uVar71 >> 6;
            uVar118 = uVar74 >> 6;
            uVar119 = uVar78 >> 6;
            uVar82 = uVar82 >> 6;
            uVar85 = uVar85 >> 6;
            uVar123 = uVar4 >> 6;
            uVar124 = uVar21 >> 6;
            uVar125 = uVar46 >> 6;
            uVar126 = uVar50 >> 6;
            uVar127 = uVar55 >> 6;
            uVar128 = uVar47 >> 6;
            uVar100 = CONCAT17(bVar102,CONCAT16(~(byte)(uVar4 >> 0x30),
                                                CONCAT15(~(byte)(uVar4 >> 0x28),
                                                         CONCAT14(~(byte)(uVar4 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar4 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar4 >>
                                                                                           0x10),
                                                                                    CONCAT11(~(byte)
                                                  (uVar4 >> 8),~(byte)uVar4))))))) >> 7;
            uVar103 = CONCAT17(bVar105,CONCAT16(~(byte)(uVar21 >> 0x30),
                                                CONCAT15(~(byte)(uVar21 >> 0x28),
                                                         CONCAT14(~(byte)(uVar21 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar21 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar21 
                                                  >> 0x10),CONCAT11(~(byte)(uVar21 >> 8),
                                                                    ~(byte)uVar21))))))) >> 7;
            uVar106 = CONCAT17(bVar108,CONCAT16(~(byte)(uVar46 >> 0x30),
                                                CONCAT15(~(byte)(uVar46 >> 0x28),
                                                         CONCAT14(~(byte)(uVar46 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar46 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar46 
                                                  >> 0x10),CONCAT11(~(byte)(uVar46 >> 8),
                                                                    ~(byte)uVar46))))))) >> 7;
            uVar109 = CONCAT17(bVar111,CONCAT16(~(byte)(uVar50 >> 0x30),
                                                CONCAT15(~(byte)(uVar50 >> 0x28),
                                                         CONCAT14(~(byte)(uVar50 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar50 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar50 
                                                  >> 0x10),CONCAT11(~(byte)(uVar50 >> 8),
                                                                    ~(byte)uVar50))))))) >> 7;
            uVar112 = CONCAT17(bVar114,CONCAT16(~(byte)(uVar55 >> 0x30),
                                                CONCAT15(~(byte)(uVar55 >> 0x28),
                                                         CONCAT14(~(byte)(uVar55 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar55 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar55 
                                                  >> 0x10),CONCAT11(~(byte)(uVar55 >> 8),
                                                                    ~(byte)uVar55))))))) >> 7;
            uVar115 = CONCAT17(bVar117,CONCAT16(~(byte)(uVar47 >> 0x30),
                                                CONCAT15(~(byte)(uVar47 >> 0x28),
                                                         CONCAT14(~(byte)(uVar47 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar47 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar47 
                                                  >> 0x10),CONCAT11(~(byte)(uVar47 >> 8),
                                                                    ~(byte)uVar47))))))) >> 7;
            uVar55 = CONCAT17(bVar97,CONCAT16(~(byte)(uVar74 >> 0x30),
                                              CONCAT15(~(byte)(uVar74 >> 0x28),
                                                       CONCAT14(~(byte)(uVar74 >> 0x20),
                                                                CONCAT13(~(byte)(uVar74 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar74 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar74 >> 8),~(byte)uVar74))))))) >> 7;
            uVar47 = CONCAT17(bVar99,CONCAT16(~(byte)(uVar78 >> 0x30),
                                              CONCAT15(~(byte)(uVar78 >> 0x28),
                                                       CONCAT14(~(byte)(uVar78 >> 0x20),
                                                                CONCAT13(~(byte)(uVar78 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar78 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar78 >> 8),~(byte)uVar78))))))) >> 7;
            uVar74 = auVar122._0_8_ >> 7;
            uVar78 = auVar122._8_8_ >> 7;
            bVar90 = (byte)(uVar88 >> 0x38);
            bVar130 = ~bVar90;
            uVar129 = CONCAT17(bVar130,CONCAT16(~(byte)(uVar88 >> 0x30),
                                                CONCAT15(~(byte)(uVar88 >> 0x28),
                                                         CONCAT14(~(byte)(uVar88 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar88 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar88 
                                                  >> 0x10),CONCAT11(~(byte)(uVar88 >> 8),
                                                                    ~(byte)uVar88)))))));
            bVar93 = (byte)(uVar91 >> 0x38);
            bVar132 = ~bVar93;
            uVar131 = CONCAT17(bVar132,CONCAT16(~(byte)(uVar91 >> 0x30),
                                                CONCAT15(~(byte)(uVar91 >> 0x28),
                                                         CONCAT14(~(byte)(uVar91 >> 0x20),
                                                                  CONCAT13(~(byte)(uVar91 >> 0x18),
                                                                           CONCAT12(~(byte)(uVar91 
                                                  >> 0x10),CONCAT11(~(byte)(uVar91 >> 8),
                                                                    ~(byte)uVar91)))))));
            uVar88 = uVar88 >> 6;
            uVar91 = uVar91 >> 6;
            bVar49 = (byte)(uVar51 >> 0x38);
            bVar77 = ~bVar49;
            bVar54 = (byte)(uVar60 >> 0x38);
            bVar81 = ~bVar54;
            uVar4 = uVar51 >> 6;
            uVar21 = uVar60 >> 6;
            uVar46 = CONCAT17(bVar77,CONCAT16(~(byte)(uVar51 >> 0x30),
                                              CONCAT15(~(byte)(uVar51 >> 0x28),
                                                       CONCAT14(~(byte)(uVar51 >> 0x20),
                                                                CONCAT13(~(byte)(uVar51 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar51 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar51 >> 8),~(byte)uVar51))))))) >> 7;
            uVar50 = CONCAT17(bVar81,CONCAT16(~(byte)(uVar60 >> 0x30),
                                              CONCAT15(~(byte)(uVar60 >> 0x28),
                                                       CONCAT14(~(byte)(uVar60 >> 0x20),
                                                                CONCAT13(~(byte)(uVar60 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar60 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar60 >> 8),~(byte)uVar60))))))) >> 7;
            lVar14 = (CONCAT17(bVar77 >> 7 | bVar49 >> 6,
                               CONCAT16((byte)(uVar46 >> 0x30) | (byte)(uVar4 >> 0x30),
                                        CONCAT15((byte)(uVar46 >> 0x28) | (byte)(uVar4 >> 0x28),
                                                 CONCAT14((byte)(uVar46 >> 0x20) |
                                                          (byte)(uVar4 >> 0x20),
                                                          CONCAT13((byte)(uVar46 >> 0x18) |
                                                                   (byte)(uVar4 >> 0x18),
                                                                   CONCAT12((byte)(uVar46 >> 0x10) |
                                                                            (byte)(uVar4 >> 0x10),
                                                                            CONCAT11((byte)(uVar46 
                                                  >> 8) | (byte)(uVar4 >> 8),
                                                  (byte)uVar46 | (byte)uVar4))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar114 >> 7 | bVar35 >> 6,
                               CONCAT16((byte)(uVar112 >> 0x30) | (byte)(uVar127 >> 0x30),
                                        CONCAT15((byte)(uVar112 >> 0x28) | (byte)(uVar127 >> 0x28),
                                                 CONCAT14((byte)(uVar112 >> 0x20) |
                                                          (byte)(uVar127 >> 0x20),
                                                          CONCAT13((byte)(uVar112 >> 0x18) |
                                                                   (byte)(uVar127 >> 0x18),
                                                                   CONCAT12((byte)(uVar112 >> 0x10)
                                                                            | (byte)(uVar127 >> 0x10
                                                                                    ),
                                                                            CONCAT11((byte)(uVar112 
                                                  >> 8) | (byte)(uVar127 >> 8),
                                                  (byte)uVar112 | (byte)uVar127))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar108 >> 7 | bVar26 >> 6,
                               CONCAT16((byte)(uVar106 >> 0x30) | (byte)(uVar125 >> 0x30),
                                        CONCAT15((byte)(uVar106 >> 0x28) | (byte)(uVar125 >> 0x28),
                                                 CONCAT14((byte)(uVar106 >> 0x20) |
                                                          (byte)(uVar125 >> 0x20),
                                                          CONCAT13((byte)(uVar106 >> 0x18) |
                                                                   (byte)(uVar125 >> 0x18),
                                                                   CONCAT12((byte)(uVar106 >> 0x10)
                                                                            | (byte)(uVar125 >> 0x10
                                                                                    ),
                                                                            CONCAT11((byte)(uVar106 
                                                  >> 8) | (byte)(uVar125 >> 8),
                                                  (byte)uVar106 | (byte)uVar125))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar102 >> 7 | bVar23 >> 6,
                               CONCAT16((byte)(uVar100 >> 0x30) | (byte)(uVar123 >> 0x30),
                                        CONCAT15((byte)(uVar100 >> 0x28) | (byte)(uVar123 >> 0x28),
                                                 CONCAT14((byte)(uVar100 >> 0x20) |
                                                          (byte)(uVar123 >> 0x20),
                                                          CONCAT13((byte)(uVar100 >> 0x18) |
                                                                   (byte)(uVar123 >> 0x18),
                                                                   CONCAT12((byte)(uVar100 >> 0x10)
                                                                            | (byte)(uVar123 >> 0x10
                                                                                    ),
                                                                            CONCAT11((byte)(uVar100 
                                                  >> 8) | (byte)(uVar123 >> 8),
                                                  (byte)uVar100 | (byte)uVar123))))))) &
                     0x101010101010101) + lVar14;
            lVar20 = (CONCAT17(bVar81 >> 7 | bVar54 >> 6,
                               CONCAT16((byte)(uVar50 >> 0x30) | (byte)(uVar21 >> 0x30),
                                        CONCAT15((byte)(uVar50 >> 0x28) | (byte)(uVar21 >> 0x28),
                                                 CONCAT14((byte)(uVar50 >> 0x20) |
                                                          (byte)(uVar21 >> 0x20),
                                                          CONCAT13((byte)(uVar50 >> 0x18) |
                                                                   (byte)(uVar21 >> 0x18),
                                                                   CONCAT12((byte)(uVar50 >> 0x10) |
                                                                            (byte)(uVar21 >> 0x10),
                                                                            CONCAT11((byte)(uVar50 
                                                  >> 8) | (byte)(uVar21 >> 8),
                                                  (byte)uVar50 | (byte)uVar21))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar117 >> 7 | bVar44 >> 6,
                               CONCAT16((byte)(uVar115 >> 0x30) | (byte)(uVar128 >> 0x30),
                                        CONCAT15((byte)(uVar115 >> 0x28) | (byte)(uVar128 >> 0x28),
                                                 CONCAT14((byte)(uVar115 >> 0x20) |
                                                          (byte)(uVar128 >> 0x20),
                                                          CONCAT13((byte)(uVar115 >> 0x18) |
                                                                   (byte)(uVar128 >> 0x18),
                                                                   CONCAT12((byte)(uVar115 >> 0x10)
                                                                            | (byte)(uVar128 >> 0x10
                                                                                    ),
                                                                            CONCAT11((byte)(uVar115 
                                                  >> 8) | (byte)(uVar128 >> 8),
                                                  (byte)uVar115 | (byte)uVar128))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar111 >> 7 | bVar27 >> 6,
                               CONCAT16((byte)(uVar109 >> 0x30) | (byte)(uVar126 >> 0x30),
                                        CONCAT15((byte)(uVar109 >> 0x28) | (byte)(uVar126 >> 0x28),
                                                 CONCAT14((byte)(uVar109 >> 0x20) |
                                                          (byte)(uVar126 >> 0x20),
                                                          CONCAT13((byte)(uVar109 >> 0x18) |
                                                                   (byte)(uVar126 >> 0x18),
                                                                   CONCAT12((byte)(uVar109 >> 0x10)
                                                                            | (byte)(uVar126 >> 0x10
                                                                                    ),
                                                                            CONCAT11((byte)(uVar109 
                                                  >> 8) | (byte)(uVar126 >> 8),
                                                  (byte)uVar109 | (byte)uVar126))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar105 >> 7 | bVar25 >> 6,
                               CONCAT16((byte)(uVar103 >> 0x30) | (byte)(uVar124 >> 0x30),
                                        CONCAT15((byte)(uVar103 >> 0x28) | (byte)(uVar124 >> 0x28),
                                                 CONCAT14((byte)(uVar103 >> 0x20) |
                                                          (byte)(uVar124 >> 0x20),
                                                          CONCAT13((byte)(uVar103 >> 0x18) |
                                                                   (byte)(uVar124 >> 0x18),
                                                                   CONCAT12((byte)(uVar103 >> 0x10)
                                                                            | (byte)(uVar124 >> 0x10
                                                                                    ),
                                                                            CONCAT11((byte)(uVar103 
                                                  >> 8) | (byte)(uVar124 >> 8),
                                                  (byte)uVar103 | (byte)uVar124))))))) &
                     0x101010101010101) + lVar20;
            lVar22 = (CONCAT17(bVar130 >> 7 | bVar90 >> 6,
                               CONCAT16((byte)(ushort)(uVar129 >> 0x37) | (byte)(uVar88 >> 0x30),
                                        CONCAT15((byte)(uint3)(uVar129 >> 0x2f) |
                                                 (byte)(uVar88 >> 0x28),
                                                 CONCAT14((byte)(uint)(uVar129 >> 0x27) |
                                                          (byte)(uVar88 >> 0x20),
                                                          CONCAT13((byte)(uint5)(uVar129 >> 0x1f) |
                                                                   (byte)(uVar88 >> 0x18),
                                                                   CONCAT12((byte)(uint6)(uVar129 >>
                                                                                         0x17) |
                                                                            (byte)(uVar88 >> 0x10),
                                                                            CONCAT11((byte)(uint7)(
                                                  uVar129 >> 0xf) | (byte)(uVar88 >> 8),
                                                  (byte)(uVar129 >> 7) | (byte)uVar88))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar121 >> 7 | bVar84 >> 6,
                               CONCAT16((byte)(uVar74 >> 0x30) | (byte)(uVar82 >> 0x30),
                                        CONCAT15((byte)(uVar74 >> 0x28) | (byte)(uVar82 >> 0x28),
                                                 CONCAT14((byte)(uVar74 >> 0x20) |
                                                          (byte)(uVar82 >> 0x20),
                                                          CONCAT13((byte)(uVar74 >> 0x18) |
                                                                   (byte)(uVar82 >> 0x18),
                                                                   CONCAT12((byte)(uVar74 >> 0x10) |
                                                                            (byte)(uVar82 >> 0x10),
                                                                            CONCAT11((byte)(uVar74 
                                                  >> 8) | (byte)(uVar82 >> 8),
                                                  (byte)uVar74 | (byte)uVar82))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar97 >> 7 | bVar76 >> 6,
                               CONCAT16((byte)(uVar55 >> 0x30) | (byte)(uVar118 >> 0x30),
                                        CONCAT15((byte)(uVar55 >> 0x28) | (byte)(uVar118 >> 0x28),
                                                 CONCAT14((byte)(uVar55 >> 0x20) |
                                                          (byte)(uVar118 >> 0x20),
                                                          CONCAT13((byte)(uVar55 >> 0x18) |
                                                                   (byte)(uVar118 >> 0x18),
                                                                   CONCAT12((byte)(uVar55 >> 0x10) |
                                                                            (byte)(uVar118 >> 0x10),
                                                                            CONCAT11((byte)(uVar55 
                                                  >> 8) | (byte)(uVar118 >> 8),
                                                  (byte)uVar55 | (byte)uVar118))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar64 >> 7 | bVar70 >> 6,
                               CONCAT16((byte)(ushort)(uVar62 >> 0x37) | (byte)(uVar68 >> 0x30),
                                        CONCAT15((byte)(uint3)(uVar62 >> 0x2f) |
                                                 (byte)(uVar68 >> 0x28),
                                                 CONCAT14((byte)(uint)(uVar62 >> 0x27) |
                                                          (byte)(uVar68 >> 0x20),
                                                          CONCAT13((byte)(uint5)(uVar62 >> 0x1f) |
                                                                   (byte)(uVar68 >> 0x18),
                                                                   CONCAT12((byte)(uint6)(uVar62 >>
                                                                                         0x17) |
                                                                            (byte)(uVar68 >> 0x10),
                                                                            CONCAT11((byte)(uint7)(
                                                  uVar62 >> 0xf) | (byte)(uVar68 >> 8),
                                                  (byte)(uVar62 >> 7) | (byte)uVar68))))))) &
                     0x101010101010101) + lVar22;
            lVar24 = (CONCAT17(bVar132 >> 7 | bVar93 >> 6,
                               CONCAT16((byte)(ushort)(uVar131 >> 0x37) | (byte)(uVar91 >> 0x30),
                                        CONCAT15((byte)(uint3)(uVar131 >> 0x2f) |
                                                 (byte)(uVar91 >> 0x28),
                                                 CONCAT14((byte)(uint)(uVar131 >> 0x27) |
                                                          (byte)(uVar91 >> 0x20),
                                                          CONCAT13((byte)(uint5)(uVar131 >> 0x1f) |
                                                                   (byte)(uVar91 >> 0x18),
                                                                   CONCAT12((byte)(uint6)(uVar131 >>
                                                                                         0x17) |
                                                                            (byte)(uVar91 >> 0x10),
                                                                            CONCAT11((byte)(uint7)(
                                                  uVar131 >> 0xf) | (byte)(uVar91 >> 8),
                                                  (byte)(uVar131 >> 7) | (byte)uVar91))))))) &
                     0x101010101010101) +
                     (CONCAT17(auVar122[0xf] >> 7 | bVar87 >> 6,
                               CONCAT16((byte)(uVar78 >> 0x30) | (byte)(uVar85 >> 0x30),
                                        CONCAT15((byte)(uVar78 >> 0x28) | (byte)(uVar85 >> 0x28),
                                                 CONCAT14((byte)(uVar78 >> 0x20) |
                                                          (byte)(uVar85 >> 0x20),
                                                          CONCAT13((byte)(uVar78 >> 0x18) |
                                                                   (byte)(uVar85 >> 0x18),
                                                                   CONCAT12((byte)(uVar78 >> 0x10) |
                                                                            (byte)(uVar85 >> 0x10),
                                                                            CONCAT11((byte)(uVar78 
                                                  >> 8) | (byte)(uVar85 >> 8),
                                                  (byte)uVar78 | (byte)uVar85))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar99 >> 7 | bVar80 >> 6,
                               CONCAT16((byte)(uVar47 >> 0x30) | (byte)(uVar119 >> 0x30),
                                        CONCAT15((byte)(uVar47 >> 0x28) | (byte)(uVar119 >> 0x28),
                                                 CONCAT14((byte)(uVar47 >> 0x20) |
                                                          (byte)(uVar119 >> 0x20),
                                                          CONCAT13((byte)(uVar47 >> 0x18) |
                                                                   (byte)(uVar119 >> 0x18),
                                                                   CONCAT12((byte)(uVar47 >> 0x10) |
                                                                            (byte)(uVar119 >> 0x10),
                                                                            CONCAT11((byte)(uVar47 
                                                  >> 8) | (byte)(uVar119 >> 8),
                                                  (byte)uVar47 | (byte)uVar119))))))) &
                     0x101010101010101) +
                     (CONCAT17(bVar67 >> 7 | bVar73 >> 6,
                               CONCAT16((byte)(ushort)(uVar65 >> 0x37) | (byte)(uVar71 >> 0x30),
                                        CONCAT15((byte)(uint3)(uVar65 >> 0x2f) |
                                                 (byte)(uVar71 >> 0x28),
                                                 CONCAT14((byte)(uint)(uVar65 >> 0x27) |
                                                          (byte)(uVar71 >> 0x20),
                                                          CONCAT13((byte)(uint5)(uVar65 >> 0x1f) |
                                                                   (byte)(uVar71 >> 0x18),
                                                                   CONCAT12((byte)(uint6)(uVar65 >>
                                                                                         0x17) |
                                                                            (byte)(uVar71 >> 0x10),
                                                                            CONCAT11((byte)(uint7)(
                                                  uVar65 >> 0xf) | (byte)(uVar71 >> 8),
                                                  (byte)(uVar65 >> 7) | (byte)uVar71))))))) &
                     0x101010101010101) + lVar24;
            puVar8 = puVar8 + 0x10;
          } while (uVar13 != 0);
          uVar13 = lVar22 + lVar14 + lVar24 + lVar20;
          if (uVar3 == (uVar3 & 0xffffffffffffffc)) goto LAB_00a9e988;
        }
        do {
          puVar8 = puVar19 + 4;
          uVar55 = puVar19[1];
          uVar50 = *puVar19;
          uVar46 = puVar19[3];
          uVar21 = puVar19[2];
          bVar23 = (byte)(uVar21 >> 0x38);
          bVar35 = ~bVar23;
          bVar25 = (byte)(uVar46 >> 0x38);
          bVar44 = ~bVar25;
          bVar26 = (byte)(uVar50 >> 0x38);
          bVar49 = ~bVar26;
          bVar27 = (byte)(uVar55 >> 0x38);
          bVar54 = ~bVar27;
          uVar3 = CONCAT17(bVar35,CONCAT16(~(byte)(uVar21 >> 0x30),
                                           CONCAT15(~(byte)(uVar21 >> 0x28),
                                                    CONCAT14(~(byte)(uVar21 >> 0x20),
                                                             CONCAT13(~(byte)(uVar21 >> 0x18),
                                                                      CONCAT12(~(byte)(uVar21 >>
                                                                                      0x10),
                                                                               CONCAT11(~(byte)(
                                                  uVar21 >> 8),~(byte)uVar21))))))) >> 7;
          uVar4 = CONCAT17(bVar44,CONCAT16(~(byte)(uVar46 >> 0x30),
                                           CONCAT15(~(byte)(uVar46 >> 0x28),
                                                    CONCAT14(~(byte)(uVar46 >> 0x20),
                                                             CONCAT13(~(byte)(uVar46 >> 0x18),
                                                                      CONCAT12(~(byte)(uVar46 >>
                                                                                      0x10),
                                                                               CONCAT11(~(byte)(
                                                  uVar46 >> 8),~(byte)uVar46))))))) >> 7;
          uVar47 = CONCAT17(bVar49,CONCAT16(~(byte)(uVar50 >> 0x30),
                                            CONCAT15(~(byte)(uVar50 >> 0x28),
                                                     CONCAT14(~(byte)(uVar50 >> 0x20),
                                                              CONCAT13(~(byte)(uVar50 >> 0x18),
                                                                       CONCAT12(~(byte)(uVar50 >>
                                                                                       0x10),
                                                                                CONCAT11(~(byte)(
                                                  uVar50 >> 8),~(byte)uVar50))))))) >> 7;
          uVar51 = CONCAT17(bVar54,CONCAT16(~(byte)(uVar55 >> 0x30),
                                            CONCAT15(~(byte)(uVar55 >> 0x28),
                                                     CONCAT14(~(byte)(uVar55 >> 0x20),
                                                              CONCAT13(~(byte)(uVar55 >> 0x18),
                                                                       CONCAT12(~(byte)(uVar55 >>
                                                                                       0x10),
                                                                                CONCAT11(~(byte)(
                                                  uVar55 >> 8),~(byte)uVar55))))))) >> 7;
          uVar13 = (CONCAT17(bVar49 >> 7 | bVar26 >> 6,
                             CONCAT16((byte)(uVar47 >> 0x30) | (byte)(ushort)(uVar50 >> 0x36),
                                      CONCAT15((byte)(uVar47 >> 0x28) |
                                               (byte)(uint3)(uVar50 >> 0x2e),
                                               CONCAT14((byte)(uVar47 >> 0x20) |
                                                        (byte)(uint)(uVar50 >> 0x26),
                                                        CONCAT13((byte)(uVar47 >> 0x18) |
                                                                 (byte)(uint5)(uVar50 >> 0x1e),
                                                                 CONCAT12((byte)(uVar47 >> 0x10) |
                                                                          (byte)(uint6)(uVar50 >>
                                                                                       0x16),
                                                                          CONCAT11((byte)(uVar47 >>
                                                                                         8) |
                                                                                   (byte)(uint7)(
                                                  uVar50 >> 0xe),(byte)uVar47 | (byte)(uVar50 >> 6))
                                                  )))))) & 0x101010101010101) +
                   (CONCAT17(bVar35 >> 7 | bVar23 >> 6,
                             CONCAT16((byte)(uVar3 >> 0x30) | (byte)(ushort)(uVar21 >> 0x36),
                                      CONCAT15((byte)(uVar3 >> 0x28) | (byte)(uint3)(uVar21 >> 0x2e)
                                               ,CONCAT14((byte)(uVar3 >> 0x20) |
                                                         (byte)(uint)(uVar21 >> 0x26),
                                                         CONCAT13((byte)(uVar3 >> 0x18) |
                                                                  (byte)(uint5)(uVar21 >> 0x1e),
                                                                  CONCAT12((byte)(uVar3 >> 0x10) |
                                                                           (byte)(uint6)(uVar21 >>
                                                                                        0x16),
                                                                           CONCAT11((byte)(uVar3 >> 
                                                  8) | (byte)(uint7)(uVar21 >> 0xe),
                                                  (byte)uVar3 | (byte)(uVar21 >> 6)))))))) &
                   0x101010101010101) +
                   (CONCAT17(bVar54 >> 7 | bVar27 >> 6,
                             CONCAT16((byte)(uVar51 >> 0x30) | (byte)(ushort)(uVar55 >> 0x36),
                                      CONCAT15((byte)(uVar51 >> 0x28) |
                                               (byte)(uint3)(uVar55 >> 0x2e),
                                               CONCAT14((byte)(uVar51 >> 0x20) |
                                                        (byte)(uint)(uVar55 >> 0x26),
                                                        CONCAT13((byte)(uVar51 >> 0x18) |
                                                                 (byte)(uint5)(uVar55 >> 0x1e),
                                                                 CONCAT12((byte)(uVar51 >> 0x10) |
                                                                          (byte)(uint6)(uVar55 >>
                                                                                       0x16),
                                                                          CONCAT11((byte)(uVar51 >>
                                                                                         8) |
                                                                                   (byte)(uint7)(
                                                  uVar55 >> 0xe),(byte)uVar51 | (byte)(uVar55 >> 6))
                                                  )))))) & 0x101010101010101) +
                   (CONCAT17(bVar44 >> 7 | bVar25 >> 6,
                             CONCAT16((byte)(uVar4 >> 0x30) | (byte)(ushort)(uVar46 >> 0x36),
                                      CONCAT15((byte)(uVar4 >> 0x28) | (byte)(uint3)(uVar46 >> 0x2e)
                                               ,CONCAT14((byte)(uVar4 >> 0x20) |
                                                         (byte)(uint)(uVar46 >> 0x26),
                                                         CONCAT13((byte)(uVar4 >> 0x18) |
                                                                  (byte)(uint5)(uVar46 >> 0x1e),
                                                                  CONCAT12((byte)(uVar4 >> 0x10) |
                                                                           (byte)(uint6)(uVar46 >>
                                                                                        0x16),
                                                                           CONCAT11((byte)(uVar4 >> 
                                                  8) | (byte)(uint7)(uVar46 >> 0xe),
                                                  (byte)uVar4 | (byte)(uVar46 >> 6)))))))) &
                   0x101010101010101) + uVar13;
          puVar19 = puVar8;
        } while (puVar8 != (ulong *)((long)puVar18 + uVar16));
      }
LAB_00a9e988:
      uVar11 = uVar11 - uVar15;
      uVar16 = uVar15 & 3;
      lVar9 = lVar9 + (((uVar13 >> 8 & 0xff00ff00ff00ff) + (uVar13 & 0xff00ff00ff00ff)) *
                       0x1000100010001 >> 0x30);
      puVar19 = puVar18 + uVar15;
      if (uVar16 != 0) {
        puVar18 = puVar18 + (uVar15 & 0xfc);
        uVar15 = (~*puVar18 >> 7 | *puVar18 >> 6) & 0x101010101010101;
        if ((uVar16 != 1) &&
           (uVar15 = ((~puVar18[1] >> 7 | puVar18[1] >> 6) & 0x101010101010101) + uVar15,
           uVar16 != 2)) {
          uVar15 = ((~puVar18[2] >> 7 | puVar18[2] >> 6) & 0x101010101010101) + uVar15;
        }
        return lVar9 + (((uVar15 >> 8 & 0xff00ff00ff00ff) + (uVar15 & 0xff00ff00ff00ff)) *
                        0x1000100010001 >> 0x30);
      }
    } while( true );
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 8) {
    uVar16 = 0;
    lVar9 = 0;
  }
  else {
    if (param_2 < 0x20) {
      lVar9 = 0;
      uVar15 = 0;
    }
    else {
      lVar9 = 0;
      lVar14 = 0;
      lVar24 = 0;
      lVar48 = 0;
      lVar63 = 0;
      lVar66 = 0;
      lVar20 = 0;
      lVar22 = 0;
      lVar83 = 0;
      lVar86 = 0;
      uVar16 = param_2 & 0xffffffffffffffe0;
      lVar56 = 0;
      lVar57 = 0;
      lVar58 = 0;
      lVar61 = 0;
      uVar15 = param_2 & 0xffffffffffffffe0;
      lVar53 = 0;
      lVar52 = 0;
      lVar101 = 0;
      lVar104 = 0;
      lVar75 = 0;
      lVar79 = 0;
      lVar69 = 0;
      lVar72 = 0;
      lVar107 = 0;
      lVar110 = 0;
      lVar94 = 0;
      lVar95 = 0;
      lVar96 = 0;
      lVar98 = 0;
      lVar89 = 0;
      lVar92 = 0;
      lVar113 = 0;
      lVar116 = 0;
      pauVar10 = (undefined1 (*) [16])(param_1 + 0x10);
      do {
        pauVar1 = pauVar10 + -1;
        auVar122 = *pauVar10;
        uVar15 = uVar15 - 0x20;
        pauVar10 = pauVar10 + 2;
        auVar120[8] = 0xbf;
        auVar120._0_8_ = 0xbfbfbfbfbfbfbfbf;
        auVar120[9] = 0xbf;
        auVar120[10] = 0xbf;
        auVar120[0xb] = 0xbf;
        auVar120[0xc] = 0xbf;
        auVar120[0xd] = 0xbf;
        auVar120[0xe] = 0xbf;
        auVar120[0xf] = 0xbf;
        auVar120 = NEON_cmgt(*pauVar1,auVar120,1);
        auVar2[8] = 0xbf;
        auVar2._0_8_ = 0xbfbfbfbfbfbfbfbf;
        auVar2[9] = 0xbf;
        auVar2[10] = 0xbf;
        auVar2[0xb] = 0xbf;
        auVar2[0xc] = 0xbf;
        auVar2[0xd] = 0xbf;
        auVar2[0xe] = 0xbf;
        auVar2[0xf] = 0xbf;
        auVar122 = NEON_cmgt(auVar122,auVar2,1);
        uVar5 = CONCAT12(auVar120[9],auVar120._8_2_) & 0xff00ff;
        uVar6 = CONCAT12(auVar122[9],auVar122._8_2_) & 0xff00ff;
        lVar53 = lVar53 + (ulong)(auVar120[0xc] & 1);
        lVar52 = lVar52 + (ulong)(auVar120[0xd] & 1);
        lVar101 = lVar101 + (ulong)(auVar120[0xe] & 1);
        lVar104 = lVar104 + (ulong)(auVar120[0xf] & 1);
        lVar58 = lVar58 + (ulong)(auVar120[10] & 1);
        lVar61 = lVar61 + (ulong)(auVar120[0xb] & 1);
        lVar83 = lVar83 + (ulong)(auVar120[6] & 1);
        lVar86 = lVar86 + (ulong)(auVar120[7] & 1);
        lVar56 = lVar56 + (ulong)((byte)uVar5 & 1);
        lVar57 = lVar57 + (ulong)((byte)(uVar5 >> 0x10) & 1);
        lVar20 = lVar20 + (ulong)(auVar120[4] & 1);
        lVar22 = lVar22 + (ulong)(auVar120[5] & 1);
        lVar63 = lVar63 + (ulong)(auVar120[2] & 1);
        lVar66 = lVar66 + (ulong)(auVar120[3] & 1);
        lVar24 = lVar24 + (ulong)(auVar120[0] & 1);
        lVar48 = lVar48 + (ulong)(auVar120[1] & 1);
        lVar94 = lVar94 + (ulong)((byte)uVar6 & 1);
        lVar95 = lVar95 + (ulong)((byte)(uVar6 >> 0x10) & 1);
        lVar113 = lVar113 + (ulong)(auVar122[0xe] & 1);
        lVar116 = lVar116 + (ulong)(auVar122[0xf] & 1);
        lVar89 = lVar89 + (ulong)(auVar122[0xc] & 1);
        lVar92 = lVar92 + (ulong)(auVar122[0xd] & 1);
        lVar107 = lVar107 + (ulong)(auVar122[6] & 1);
        lVar110 = lVar110 + (ulong)(auVar122[7] & 1);
        lVar96 = lVar96 + (ulong)(auVar122[10] & 1);
        lVar98 = lVar98 + (ulong)(auVar122[0xb] & 1);
        lVar9 = lVar9 + (ulong)(auVar122[2] & 1);
        lVar14 = lVar14 + (ulong)(auVar122[3] & 1);
        lVar75 = lVar75 + (ulong)(auVar122[0] & 1);
        lVar79 = lVar79 + (ulong)(auVar122[1] & 1);
        lVar69 = lVar69 + (ulong)(auVar122[4] & 1);
        lVar72 = lVar72 + (ulong)(auVar122[5] & 1);
      } while (uVar15 != 0);
      lVar9 = lVar75 + lVar24 + lVar94 + lVar56 + lVar69 + lVar20 + lVar89 + lVar53 +
              lVar9 + lVar63 + lVar96 + lVar58 + lVar107 + lVar83 + lVar113 + lVar101 +
              lVar79 + lVar48 + lVar95 + lVar57 + lVar72 + lVar22 + lVar92 + lVar52 +
              lVar14 + lVar66 + lVar98 + lVar61 + lVar110 + lVar86 + lVar116 + lVar104;
      if (param_2 == uVar16) {
        return lVar9;
      }
      uVar15 = uVar16;
      if ((param_2 & 0x18) == 0) goto LAB_00a9ee24;
    }
    lVar20 = 0;
    lVar22 = 0;
    lVar24 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0;
    uVar45 = 0;
    uVar16 = param_2 & 0xfffffffffffffff8;
    lVar48 = 0;
    lVar53 = 0;
    lVar14 = uVar15 - uVar16;
    pcVar17 = param_1 + uVar15;
    do {
      lVar14 = lVar14 + 8;
      uVar59 = NEON_cmgt(*(undefined8 *)pcVar17,0xbfbfbfbfbfbfbfbf,1);
      uVar5 = CONCAT12((char)((ulong)uVar59 >> 8),(short)uVar59) & 0xff00ff;
      lVar48 = lVar48 + (ulong)((byte)((ulong)uVar59 >> 0x30) & 1);
      lVar53 = lVar53 + (ulong)((byte)((ulong)uVar59 >> 0x38) & 1);
      lVar52 = CONCAT17(uVar36,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,CONCAT13(uVar31,
                                                  CONCAT12(uVar30,CONCAT11(uVar29,uVar28))))))) +
               (ulong)((byte)((ulong)uVar59 >> 0x10) & 1);
      uVar28 = (undefined1)lVar52;
      uVar29 = (undefined1)((ulong)lVar52 >> 8);
      uVar30 = (undefined1)((ulong)lVar52 >> 0x10);
      uVar31 = (undefined1)((ulong)lVar52 >> 0x18);
      uVar32 = (undefined1)((ulong)lVar52 >> 0x20);
      uVar33 = (undefined1)((ulong)lVar52 >> 0x28);
      uVar34 = (undefined1)((ulong)lVar52 >> 0x30);
      uVar36 = (undefined1)((ulong)lVar52 >> 0x38);
      lVar56 = CONCAT17(uVar45,CONCAT16(uVar43,CONCAT15(uVar42,CONCAT14(uVar41,CONCAT13(uVar40,
                                                  CONCAT12(uVar39,CONCAT11(uVar38,uVar37))))))) +
               (ulong)((byte)((ulong)uVar59 >> 0x18) & 1);
      uVar37 = (undefined1)lVar56;
      uVar38 = (undefined1)((ulong)lVar56 >> 8);
      uVar39 = (undefined1)((ulong)lVar56 >> 0x10);
      uVar40 = (undefined1)((ulong)lVar56 >> 0x18);
      uVar41 = (undefined1)((ulong)lVar56 >> 0x20);
      uVar42 = (undefined1)((ulong)lVar56 >> 0x28);
      uVar43 = (undefined1)((ulong)lVar56 >> 0x30);
      uVar45 = (undefined1)((ulong)lVar56 >> 0x38);
      lVar9 = lVar9 + (ulong)((byte)uVar5 & 1);
      lVar20 = lVar20 + (ulong)((byte)(uVar5 >> 0x10) & 1);
      lVar22 = lVar22 + (ulong)((byte)((ulong)uVar59 >> 0x20) & 1);
      lVar24 = lVar24 + (ulong)((byte)((ulong)uVar59 >> 0x28) & 1);
      pcVar17 = pcVar17 + 8;
    } while (lVar14 != 0);
    lVar9 = lVar9 + lVar22 + lVar52 + lVar48 + lVar20 + lVar24 + lVar56 + lVar53;
    if (param_2 == uVar16) {
      return lVar9;
    }
  }
LAB_00a9ee24:
  lVar14 = param_2 - uVar16;
  pcVar17 = param_1 + uVar16;
  do {
    iVar12 = (int)*pcVar17;
    if (iVar12 != -0x41 && iVar12 + 0x41 < 0 == SCARRY4(iVar12,0x41)) {
      lVar9 = lVar9 + 1;
    }
    lVar14 = lVar14 + -1;
    pcVar17 = pcVar17 + 1;
  } while (lVar14 != 0);
  return lVar9;
}


// ===== 00a9ee44  core::str::count::char_count_general_case =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::str::count::char_count_general_case */

long __rustcall core::str::count::char_count_general_case(long param_1,ulong param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  uint3 uVar3;
  uint3 uVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  undefined8 uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 8) {
    uVar7 = 0;
    lVar5 = 0;
  }
  else {
    if (param_2 < 0x20) {
      lVar5 = 0;
      uVar12 = 0;
    }
    else {
      lVar5 = 0;
      lVar10 = 0;
      lVar15 = 0;
      lVar32 = 0;
      lVar40 = 0;
      lVar41 = 0;
      lVar13 = 0;
      lVar14 = 0;
      lVar46 = 0;
      lVar47 = 0;
      uVar7 = param_2 & 0x7fffffffffffffe0;
      lVar35 = 0;
      lVar36 = 0;
      lVar37 = 0;
      lVar39 = 0;
      uVar12 = param_2 & 0x7fffffffffffffe0;
      lVar34 = 0;
      lVar33 = 0;
      lVar54 = 0;
      lVar55 = 0;
      lVar44 = 0;
      lVar45 = 0;
      lVar42 = 0;
      lVar43 = 0;
      lVar56 = 0;
      lVar57 = 0;
      lVar50 = 0;
      lVar51 = 0;
      lVar52 = 0;
      lVar53 = 0;
      lVar48 = 0;
      lVar49 = 0;
      lVar58 = 0;
      lVar59 = 0;
      pauVar6 = (undefined1 (*) [16])(param_1 + 0x10);
      do {
        pauVar1 = pauVar6 + -1;
        auVar2 = *pauVar6;
        uVar12 = uVar12 - 0x20;
        pauVar6 = pauVar6 + 2;
        auVar60[8] = 0xbf;
        auVar60._0_8_ = 0xbfbfbfbfbfbfbfbf;
        auVar60[9] = 0xbf;
        auVar60[10] = 0xbf;
        auVar60[0xb] = 0xbf;
        auVar60[0xc] = 0xbf;
        auVar60[0xd] = 0xbf;
        auVar60[0xe] = 0xbf;
        auVar60[0xf] = 0xbf;
        auVar60 = NEON_cmgt(*pauVar1,auVar60,1);
        auVar61[8] = 0xbf;
        auVar61._0_8_ = 0xbfbfbfbfbfbfbfbf;
        auVar61[9] = 0xbf;
        auVar61[10] = 0xbf;
        auVar61[0xb] = 0xbf;
        auVar61[0xc] = 0xbf;
        auVar61[0xd] = 0xbf;
        auVar61[0xe] = 0xbf;
        auVar61[0xf] = 0xbf;
        auVar61 = NEON_cmgt(auVar2,auVar61,1);
        uVar3 = CONCAT12(auVar60[9],auVar60._8_2_) & 0xff00ff;
        uVar4 = CONCAT12(auVar61[9],auVar61._8_2_) & 0xff00ff;
        lVar34 = lVar34 + (ulong)(auVar60[0xc] & 1);
        lVar33 = lVar33 + (ulong)(auVar60[0xd] & 1);
        lVar54 = lVar54 + (ulong)(auVar60[0xe] & 1);
        lVar55 = lVar55 + (ulong)(auVar60[0xf] & 1);
        lVar37 = lVar37 + (ulong)(auVar60[10] & 1);
        lVar39 = lVar39 + (ulong)(auVar60[0xb] & 1);
        lVar46 = lVar46 + (ulong)(auVar60[6] & 1);
        lVar47 = lVar47 + (ulong)(auVar60[7] & 1);
        lVar35 = lVar35 + (ulong)((byte)uVar3 & 1);
        lVar36 = lVar36 + (ulong)((byte)(uVar3 >> 0x10) & 1);
        lVar13 = lVar13 + (ulong)(auVar60[4] & 1);
        lVar14 = lVar14 + (ulong)(auVar60[5] & 1);
        lVar40 = lVar40 + (ulong)(auVar60[2] & 1);
        lVar41 = lVar41 + (ulong)(auVar60[3] & 1);
        lVar15 = lVar15 + (ulong)(auVar60[0] & 1);
        lVar32 = lVar32 + (ulong)(auVar60[1] & 1);
        lVar50 = lVar50 + (ulong)((byte)uVar4 & 1);
        lVar51 = lVar51 + (ulong)((byte)(uVar4 >> 0x10) & 1);
        lVar58 = lVar58 + (ulong)(auVar61[0xe] & 1);
        lVar59 = lVar59 + (ulong)(auVar61[0xf] & 1);
        lVar48 = lVar48 + (ulong)(auVar61[0xc] & 1);
        lVar49 = lVar49 + (ulong)(auVar61[0xd] & 1);
        lVar56 = lVar56 + (ulong)(auVar61[6] & 1);
        lVar57 = lVar57 + (ulong)(auVar61[7] & 1);
        lVar52 = lVar52 + (ulong)(auVar61[10] & 1);
        lVar53 = lVar53 + (ulong)(auVar61[0xb] & 1);
        lVar5 = lVar5 + (ulong)(auVar61[2] & 1);
        lVar10 = lVar10 + (ulong)(auVar61[3] & 1);
        lVar44 = lVar44 + (ulong)(auVar61[0] & 1);
        lVar45 = lVar45 + (ulong)(auVar61[1] & 1);
        lVar42 = lVar42 + (ulong)(auVar61[4] & 1);
        lVar43 = lVar43 + (ulong)(auVar61[5] & 1);
      } while (uVar12 != 0);
      lVar5 = lVar44 + lVar15 + lVar50 + lVar35 + lVar42 + lVar13 + lVar48 + lVar34 +
              lVar5 + lVar40 + lVar52 + lVar37 + lVar56 + lVar46 + lVar58 + lVar54 +
              lVar45 + lVar32 + lVar51 + lVar36 + lVar43 + lVar14 + lVar49 + lVar33 +
              lVar10 + lVar41 + lVar53 + lVar39 + lVar57 + lVar47 + lVar59 + lVar55;
      if (param_2 == uVar7) {
        return lVar5;
      }
      uVar12 = uVar7;
      if ((param_2 & 0x18) == 0) goto LAB_00a9f0cc;
    }
    lVar13 = 0;
    lVar14 = 0;
    lVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar7 = param_2 & 0x7ffffffffffffff8;
    lVar32 = 0;
    lVar34 = 0;
    lVar10 = uVar12 - uVar7;
    puVar9 = (undefined8 *)(param_1 + uVar12);
    do {
      lVar10 = lVar10 + 8;
      uVar38 = NEON_cmgt(*puVar9,0xbfbfbfbfbfbfbfbf,1);
      uVar3 = CONCAT12((char)((ulong)uVar38 >> 8),(short)uVar38) & 0xff00ff;
      lVar32 = lVar32 + (ulong)((byte)((ulong)uVar38 >> 0x30) & 1);
      lVar34 = lVar34 + (ulong)((byte)((ulong)uVar38 >> 0x38) & 1);
      lVar33 = CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(uVar19,
                                                  CONCAT12(uVar18,CONCAT11(uVar17,uVar16))))))) +
               (ulong)((byte)((ulong)uVar38 >> 0x10) & 1);
      uVar16 = (undefined1)lVar33;
      uVar17 = (undefined1)((ulong)lVar33 >> 8);
      uVar18 = (undefined1)((ulong)lVar33 >> 0x10);
      uVar19 = (undefined1)((ulong)lVar33 >> 0x18);
      uVar20 = (undefined1)((ulong)lVar33 >> 0x20);
      uVar21 = (undefined1)((ulong)lVar33 >> 0x28);
      uVar22 = (undefined1)((ulong)lVar33 >> 0x30);
      uVar23 = (undefined1)((ulong)lVar33 >> 0x38);
      lVar35 = CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(uVar28,CONCAT13(uVar27,
                                                  CONCAT12(uVar26,CONCAT11(uVar25,uVar24))))))) +
               (ulong)((byte)((ulong)uVar38 >> 0x18) & 1);
      uVar24 = (undefined1)lVar35;
      uVar25 = (undefined1)((ulong)lVar35 >> 8);
      uVar26 = (undefined1)((ulong)lVar35 >> 0x10);
      uVar27 = (undefined1)((ulong)lVar35 >> 0x18);
      uVar28 = (undefined1)((ulong)lVar35 >> 0x20);
      uVar29 = (undefined1)((ulong)lVar35 >> 0x28);
      uVar30 = (undefined1)((ulong)lVar35 >> 0x30);
      uVar31 = (undefined1)((ulong)lVar35 >> 0x38);
      lVar5 = lVar5 + (ulong)((byte)uVar3 & 1);
      lVar13 = lVar13 + (ulong)((byte)(uVar3 >> 0x10) & 1);
      lVar14 = lVar14 + (ulong)((byte)((ulong)uVar38 >> 0x20) & 1);
      lVar15 = lVar15 + (ulong)((byte)((ulong)uVar38 >> 0x28) & 1);
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
    lVar5 = lVar5 + lVar14 + lVar33 + lVar32 + lVar13 + lVar15 + lVar35 + lVar34;
    if (param_2 == uVar7) {
      return lVar5;
    }
  }
LAB_00a9f0cc:
  lVar10 = param_2 - uVar7;
  pcVar8 = (char *)(param_1 + uVar7);
  do {
    iVar11 = (int)*pcVar8;
    if (iVar11 != -0x41 && iVar11 + 0x41 < 0 == SCARRY4(iVar11,0x41)) {
      lVar5 = lVar5 + 1;
    }
    lVar10 = lVar10 + -1;
    pcVar8 = pcVar8 + 1;
  } while (lVar10 != 0);
  return lVar5;
}


// ===== 00a9f0f8  core::str::converts::from_utf8_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::str::converts::from_utf8_mut */

void __rustcall core::str::converts::from_utf8_mut(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  
  uVar1 = 0;
  if (0xe < param_3) {
    uVar1 = param_3 - 0xf;
  }
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      bVar3 = *(byte *)(param_2 + uVar4);
      if ((char)bVar3 < '\0') {
        uVar8 = (ulong)bVar3;
        cVar2 = (&DAT_00390c72)[bVar3];
        uVar6 = (uint)bVar3;
        if (cVar2 == '\x04') {
          if (param_3 <= uVar4 + 1) {
LAB_00a9f310:
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 0;
            *(char *)((long)param_1 + 0x11) = (char)uVar8;
            *param_1 = 1;
            return;
          }
          bVar3 = *(byte *)(param_2 + uVar4 + 1);
          if (uVar6 == 0xf0) {
            if (0x2f < bVar3 - 0x90) goto LAB_00a9f32c;
          }
          else {
            iVar7 = (int)(char)bVar3;
            if (uVar6 == 0xf4) {
              if (iVar7 != -0x71 && iVar7 + 0x71 < 0 == SCARRY4(iVar7,0x71)) goto LAB_00a9f32c;
            }
            else {
              uVar5 = 1;
              if (2 < uVar6 - 0xf1) goto LAB_00a9f32c;
              if (iVar7 + 0x40 < 0 == SCARRY4(iVar7,0x40)) goto LAB_00a9f2ec;
            }
          }
          uVar8 = uVar4 + 2;
          if (param_3 <= uVar8) goto LAB_00a9f310;
          iVar7 = (int)*(char *)(param_2 + uVar8);
          if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) goto LAB_00a9f2e4;
          uVar8 = uVar4 + 3;
          if (param_3 <= uVar8) goto LAB_00a9f310;
          if (*(char *)(param_2 + uVar8) + 0x40 < 0 == SCARRY4((int)*(char *)(param_2 + uVar8),0x40)
             ) {
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 1;
            *(undefined1 *)((long)param_1 + 0x11) = 3;
            *param_1 = 1;
            return;
          }
        }
        else if (cVar2 == '\x03') {
          if (param_3 <= uVar4 + 1) goto LAB_00a9f310;
          bVar3 = *(byte *)(param_2 + uVar4 + 1);
          if (uVar6 == 0xe0) {
            if ((bVar3 & 0xe0) != 0xa0) goto LAB_00a9f32c;
          }
          else {
            iVar7 = (int)(char)bVar3;
            if (uVar6 == 0xed) {
              if (iVar7 != -0x61 && iVar7 + 0x61 < 0 == SCARRY4(iVar7,0x61)) goto LAB_00a9f32c;
            }
            else if (uVar6 - 0xe1 < 0xc) {
              if (iVar7 + 0x40 < 0 == SCARRY4(iVar7,0x40)) goto LAB_00a9f32c;
            }
            else {
              uVar5 = 1;
              if ((uVar6 & 0xfe) != 0xee) goto LAB_00a9f32c;
              if (iVar7 + 0x40 < 0 == SCARRY4(iVar7,0x40)) goto LAB_00a9f2ec;
            }
          }
          uVar8 = uVar4 + 2;
          if (param_3 <= uVar8) goto LAB_00a9f310;
          iVar7 = (int)*(char *)(param_2 + uVar8);
          if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) {
LAB_00a9f2e4:
            uVar5 = 2;
LAB_00a9f2ec:
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 1;
            *(undefined1 *)((long)param_1 + 0x11) = uVar5;
            *param_1 = 1;
            return;
          }
        }
        else {
          if (cVar2 != '\x02') {
LAB_00a9f32c:
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 1;
            *(undefined1 *)((long)param_1 + 0x11) = 1;
            *param_1 = 1;
            return;
          }
          uVar8 = uVar4 + 1;
          if (param_3 <= uVar8) goto LAB_00a9f310;
          iVar7 = (int)*(char *)(param_2 + uVar8);
          if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) goto LAB_00a9f32c;
        }
        uVar4 = uVar8 + 1;
      }
      else if ((-(int)uVar4 - (int)param_2 & 7U) == 0) {
        while ((uVar4 < uVar1 &&
               (((((ulong *)(param_2 + uVar4))[1] | *(ulong *)(param_2 + uVar4)) &
                0x8080808080808080) == 0))) {
          uVar4 = uVar4 + 0x10;
        }
        if (uVar4 < param_3) {
          while (-1 < *(char *)(param_2 + uVar4)) {
            uVar4 = uVar4 + 1;
            if (param_3 == uVar4) goto LAB_00a9f304;
          }
        }
      }
      else {
        uVar4 = uVar4 + 1;
      }
    } while (uVar4 < param_3);
  }
LAB_00a9f304:
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = 0;
  return;
}


// ===== 00a9f368  core::str::converts::from_utf8 =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::str::converts::from_utf8 */

void __rustcall core::str::converts::from_utf8(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  
  uVar1 = 0;
  if (0xe < param_3) {
    uVar1 = param_3 - 0xf;
  }
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      bVar3 = *(byte *)(param_2 + uVar4);
      if ((char)bVar3 < '\0') {
        uVar8 = (ulong)bVar3;
        cVar2 = (&DAT_00390c72)[bVar3];
        uVar6 = (uint)bVar3;
        if (cVar2 == '\x04') {
          if (param_3 <= uVar4 + 1) {
LAB_00a9f580:
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 0;
            *(char *)((long)param_1 + 0x11) = (char)uVar8;
            *param_1 = 1;
            return;
          }
          bVar3 = *(byte *)(param_2 + uVar4 + 1);
          if (uVar6 == 0xf0) {
            if (0x2f < bVar3 - 0x90) goto LAB_00a9f59c;
          }
          else {
            iVar7 = (int)(char)bVar3;
            if (uVar6 == 0xf4) {
              if (iVar7 != -0x71 && iVar7 + 0x71 < 0 == SCARRY4(iVar7,0x71)) goto LAB_00a9f59c;
            }
            else {
              uVar5 = 1;
              if (2 < uVar6 - 0xf1) goto LAB_00a9f59c;
              if (iVar7 + 0x40 < 0 == SCARRY4(iVar7,0x40)) goto LAB_00a9f55c;
            }
          }
          uVar8 = uVar4 + 2;
          if (param_3 <= uVar8) goto LAB_00a9f580;
          iVar7 = (int)*(char *)(param_2 + uVar8);
          if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) goto LAB_00a9f554;
          uVar8 = uVar4 + 3;
          if (param_3 <= uVar8) goto LAB_00a9f580;
          if (*(char *)(param_2 + uVar8) + 0x40 < 0 == SCARRY4((int)*(char *)(param_2 + uVar8),0x40)
             ) {
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 1;
            *(undefined1 *)((long)param_1 + 0x11) = 3;
            *param_1 = 1;
            return;
          }
        }
        else if (cVar2 == '\x03') {
          if (param_3 <= uVar4 + 1) goto LAB_00a9f580;
          bVar3 = *(byte *)(param_2 + uVar4 + 1);
          if (uVar6 == 0xe0) {
            if ((bVar3 & 0xe0) != 0xa0) goto LAB_00a9f59c;
          }
          else {
            iVar7 = (int)(char)bVar3;
            if (uVar6 == 0xed) {
              if (iVar7 != -0x61 && iVar7 + 0x61 < 0 == SCARRY4(iVar7,0x61)) goto LAB_00a9f59c;
            }
            else if (uVar6 - 0xe1 < 0xc) {
              if (iVar7 + 0x40 < 0 == SCARRY4(iVar7,0x40)) goto LAB_00a9f59c;
            }
            else {
              uVar5 = 1;
              if ((uVar6 & 0xfe) != 0xee) goto LAB_00a9f59c;
              if (iVar7 + 0x40 < 0 == SCARRY4(iVar7,0x40)) goto LAB_00a9f55c;
            }
          }
          uVar8 = uVar4 + 2;
          if (param_3 <= uVar8) goto LAB_00a9f580;
          iVar7 = (int)*(char *)(param_2 + uVar8);
          if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) {
LAB_00a9f554:
            uVar5 = 2;
LAB_00a9f55c:
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 1;
            *(undefined1 *)((long)param_1 + 0x11) = uVar5;
            *param_1 = 1;
            return;
          }
        }
        else {
          if (cVar2 != '\x02') {
LAB_00a9f59c:
            param_1[1] = uVar4;
            *(undefined1 *)(param_1 + 2) = 1;
            *(undefined1 *)((long)param_1 + 0x11) = 1;
            *param_1 = 1;
            return;
          }
          uVar8 = uVar4 + 1;
          if (param_3 <= uVar8) goto LAB_00a9f580;
          iVar7 = (int)*(char *)(param_2 + uVar8);
          if (iVar7 != -0x41 && iVar7 + 0x41 < 0 == SCARRY4(iVar7,0x41)) goto LAB_00a9f59c;
        }
        uVar4 = uVar8 + 1;
      }
      else if ((-(int)uVar4 - (int)param_2 & 7U) == 0) {
        while ((uVar4 < uVar1 &&
               (((((ulong *)(param_2 + uVar4))[1] | *(ulong *)(param_2 + uVar4)) &
                0x8080808080808080) == 0))) {
          uVar4 = uVar4 + 0x10;
        }
        if (uVar4 < param_3) {
          while (-1 < *(char *)(param_2 + uVar4)) {
            uVar4 = uVar4 + 1;
            if (param_3 == uVar4) goto LAB_00a9f574;
          }
        }
      }
      else {
        uVar4 = uVar4 + 1;
      }
    } while (uVar4 < param_3);
  }
LAB_00a9f574:
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = 0;
  return;
}


// ===== 00a9f5d8  core::cell::lazy::panic_poisoned =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::cell::lazy::panic_poisoned */

void __rustcall core::cell::lazy::panic_poisoned(void)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00390d72,0x5d,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff9f0);
}


// ===== 00a9f5f8  core::slice::index::slice_index_fail =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::index::slice_index_fail */

void __rustcall
core::slice::index::slice_index_fail(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong local_40;
  ulong uStack_38;
  undefined1 *local_30;
  undefined *puStack_28;
  ulong *local_20;
  undefined *puStack_18;
  
  local_30 = (undefined1 *)&local_40;
  local_40 = param_1;
  uStack_38 = param_3;
  if (param_3 < param_1) {
    puStack_28 = PTR_fmt_00b00c60;
    local_20 = &uStack_38;
    puStack_18 = PTR_fmt_00b00c60;
    local_30 = (undefined1 *)&local_40;
                    /* WARNING: Subroutine does not return */
    panicking::panic_fmt(&DAT_002b66c9,&local_30,param_4);
  }
  if ((param_2 <= param_3) && (param_2 < param_1)) {
    puStack_28 = PTR_fmt_00b00c60;
    local_20 = &uStack_38;
    puStack_18 = PTR_fmt_00b00c60;
    uStack_38 = param_2;
    local_30 = (undefined1 *)&local_40;
                    /* WARNING: Subroutine does not return */
    panicking::panic_fmt(&DAT_002add02,&local_30,param_4);
  }
  puStack_28 = PTR_fmt_00b00c60;
  local_20 = &uStack_38;
  puStack_18 = PTR_fmt_00b00c60;
  local_40 = param_2;
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_002b4b51,&local_30,param_4);
}


// ===== 00a9f6ac  core::slice::memchr::memchr_aligned =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::memchr::memchr_aligned */

undefined1  [16] __rustcall
core::slice::memchr::memchr_aligned(uint param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  param_1 = param_1 & 0xff;
  uVar2 = (param_2 + 7U & 0xfffffffffffffff8) - param_2;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_3;
    if (uVar2 <= param_3) {
      uVar3 = uVar2;
    }
    if (param_3 != 0) {
      uVar2 = 0;
      uVar1 = 1;
      do {
        if (*(byte *)(param_2 + uVar2) == param_1) goto LAB_00a9f780;
        uVar2 = uVar2 + 1;
      } while (uVar3 != uVar2);
    }
    uVar2 = uVar3;
    if (param_3 - 0x10 < uVar3) goto LAB_00a9f758;
  }
  do {
    uVar5 = *(ulong *)(param_2 + uVar3) ^ (ulong)param_1 * 0x101010101010101;
    uVar4 = ((ulong *)(param_2 + uVar3))[1] ^ (ulong)param_1 * 0x101010101010101;
    uVar2 = uVar3;
    if ((((0x101010101010100 - uVar5 | uVar5) & (0x101010101010100 - uVar4 | uVar4) ^
         0xffffffffffffffff) & 0x8080808080808080) != 0) break;
    uVar3 = uVar3 + 0x10;
    uVar2 = uVar3;
  } while (uVar3 <= param_3 - 0x10);
LAB_00a9f758:
  if (param_3 != uVar2) {
    uVar1 = 1;
    do {
      if (*(byte *)(param_2 + uVar2) == param_1) goto LAB_00a9f780;
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
  uVar1 = 0;
LAB_00a9f780:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar1;
  return auVar6;
}


// ===== 00a9f788  core::slice::memchr::memrchr =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::memchr::memrchr */

undefined1  [16] __rustcall core::slice::memchr::memrchr(uint param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  iVar3 = (int)param_3;
  auVar10._8_8_ = (param_2 + 7 & 0xfffffffffffffff8) - param_2;
  uVar2 = param_3;
  uVar5 = param_3;
  if ((auVar10._8_8_ <= param_3) &&
     (uVar4 = (ulong)(uint)(iVar3 - (int)auVar10._8_8_) & 0xf, uVar2 = param_3 - uVar4,
     uVar5 = auVar10._8_8_, param_3 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    index::slice_index_fail(uVar2,param_3,iVar3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affa20);
  }
  pbVar7 = (byte *)(param_3 + param_2);
  lVar6 = 0;
  param_1 = param_1 & 0xff;
  while (pbVar7 = pbVar7 + -1, param_3 - uVar2 != lVar6) {
    lVar6 = lVar6 + 1;
    if (*pbVar7 == param_1) {
      auVar9._8_8_ = param_3 - lVar6;
      auVar9._0_8_ = 1;
      return auVar9;
    }
  }
  do {
    auVar10._8_8_ = uVar2;
    if (auVar10._8_8_ <= uVar5) break;
    uVar8 = *(ulong *)(param_2 + auVar10._8_8_ + -0x10) ^ (ulong)param_1 * 0x101010101010101;
    uVar4 = *(ulong *)(param_2 + auVar10._8_8_ + -8) ^ (ulong)param_1 * 0x101010101010101;
    uVar2 = auVar10._8_8_ - 0x10;
  } while ((((0x101010101010100 - uVar8 | uVar8) & (0x101010101010100 - uVar4 | uVar4) ^
            0xffffffffffffffff) & 0x8080808080808080) == 0);
  if (param_3 < auVar10._8_8_) {
                    /* WARNING: Subroutine does not return */
    index::slice_index_fail(0,auVar10._8_8_,iVar3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affa08);
  }
  lVar6 = param_2 - 1;
  do {
    if (auVar10._8_8_ == 0) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_2;
      return auVar1 << 0x40;
    }
    pbVar7 = (byte *)(lVar6 + auVar10._8_8_);
    auVar10._8_8_ = auVar10._8_8_ - 1;
    param_2 = auVar10._8_8_;
  } while (*pbVar7 != param_1);
  auVar10._0_8_ = 1;
  return auVar10;
}


// ===== 00a9f8b0  core::panicking::panic_const::panic_const_div_by_zero =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_div_by_zero */

void __rustcall core::panicking::panic_const::panic_const_div_by_zero(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390da0,0x33,param_1);
}


// ===== 00a9f8cc  core::panicking::panic_const::panic_const_gen_fn_none =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_gen_fn_none */

void __rustcall core::panicking::panic_const::panic_const_gen_fn_none(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390db9,0x77,param_1);
}


// ===== 00a9f8e8  core::panicking::panic_const::panic_const_rem_by_zero =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_rem_by_zero */

void __rustcall core::panicking::panic_const::panic_const_rem_by_zero(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390df4,0x73,param_1);
}


// ===== 00a9f904  core::panicking::panic_const::panic_const_add_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_add_overflow */

void __rustcall core::panicking::panic_const::panic_const_add_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390e2d,0x39,param_1);
}


// ===== 00a9f920  core::panicking::panic_const::panic_const_div_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_div_overflow */

void __rustcall core::panicking::panic_const::panic_const_div_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390e49,0x3f,param_1);
}


// ===== 00a9f93c  core::panicking::panic_const::panic_const_mul_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_mul_overflow */

void __rustcall core::panicking::panic_const::panic_const_mul_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390e68,0x43,param_1);
}


// ===== 00a9f958  core::panicking::panic_const::panic_const_neg_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_neg_overflow */

void __rustcall core::panicking::panic_const::panic_const_neg_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390e89,0x3f,param_1);
}


// ===== 00a9f974  core::panicking::panic_const::panic_const_rem_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_rem_overflow */

void __rustcall core::panicking::panic_const::panic_const_rem_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390ea8,0x61,param_1);
}


// ===== 00a9f990  core::panicking::panic_const::panic_const_shl_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_shl_overflow */

void __rustcall core::panicking::panic_const::panic_const_shl_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390ed8,0x47,param_1);
}


// ===== 00a9f9ac  core::panicking::panic_const::panic_const_shr_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_shr_overflow */

void __rustcall core::panicking::panic_const::panic_const_shr_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390efb,0x49,param_1);
}


// ===== 00a9f9c8  core::panicking::panic_const::panic_const_sub_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_sub_overflow */

void __rustcall core::panicking::panic_const::panic_const_sub_overflow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390f1f,0x43,param_1);
}


// ===== 00a9f9e4  core::panicking::panic_const::panic_const_async_fn_resumed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_async_fn_resumed */

void __rustcall core::panicking::panic_const::panic_const_async_fn_resumed(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390f40,0x47,param_1);
}


// ===== 00a9fa00  core::panicking::panic_const::panic_const_gen_fn_none_drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_gen_fn_none_drop */

void __rustcall core::panicking::panic_const::panic_const_gen_fn_none_drop(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390f63,0x43,param_1);
}


// ===== 00a9fa1c  core::panicking::panic_const::panic_const_coroutine_resumed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_coroutine_resumed */

void __rustcall core::panicking::panic_const::panic_const_coroutine_resumed(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390f84,0x45,param_1);
}


// ===== 00a9fa38  core::panicking::panic_const::panic_const_gen_fn_none_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_gen_fn_none_panic */

void __rustcall core::panicking::panic_const::panic_const_gen_fn_none_panic(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390fa6,0x75,param_1);
}


// ===== 00a9fa54  core::panicking::panic_const::panic_const_async_gen_fn_resumed =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_async_gen_fn_resumed */

void __rustcall core::panicking::panic_const::panic_const_async_gen_fn_resumed(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00390fe0,0x4f,param_1);
}


// ===== 00a9fa70  core::panicking::panic_const::panic_const_async_fn_resumed_drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_async_fn_resumed_drop */

void __rustcall core::panicking::panic_const::panic_const_async_fn_resumed_drop(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_00391007,0x47,param_1);
}


// ===== 00a9fa8c  core::panicking::panic_const::panic_const_async_fn_resumed_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_async_fn_resumed_panic */

void __rustcall core::panicking::panic_const::panic_const_async_fn_resumed_panic(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_0039102a,0x45,param_1);
}


// ===== 00a9faa8  core::panicking::panic_const::panic_const_coroutine_resumed_drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_coroutine_resumed_drop */

void __rustcall core::panicking::panic_const::panic_const_coroutine_resumed_drop(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_0039104c,0x45,param_1);
}


// ===== 00a9fac4  core::panicking::panic_const::panic_const_coroutine_resumed_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_coroutine_resumed_panic */

void __rustcall
core::panicking::panic_const::panic_const_coroutine_resumed_panic(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_0039106e,0x43,param_1);
}


// ===== 00a9fae0  core::panicking::panic_const::panic_const_async_gen_fn_resumed_drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_async_gen_fn_resumed_drop */

void __rustcall
core::panicking::panic_const::panic_const_async_gen_fn_resumed_drop(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_0039108f,0x4f,param_1);
}


// ===== 00a9fafc  core::panicking::panic_const::panic_const_async_gen_fn_resumed_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::panicking::panic_const::panic_const_async_gen_fn_resumed_panic */

void __rustcall
core::panicking::panic_const::panic_const_async_gen_fn_resumed_panic(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panic_fmt(&DAT_003910b6,0x4d,param_1);
}


// ===== 00a9fb18  core::io::error::os_functions::get_os_functions =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::io::error::os_functions::get_os_functions */

undefined8 __rustcall core::io::error::os_functions::get_os_functions(void)

{
  return *(undefined8 *)PTR_PTR_00b01168;
}


// ===== 00a9fb28  FUN_00a9fb28 =====

void FUN_00a9fb28(long param_1,ulong param_2,int param_3,char param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  undefined2 uStack_92;
  char local_90 [24];
  undefined2 local_78 [4];
  char *local_70;
  long lStack_68;
  undefined2 local_60;
  long local_58;
  undefined2 local_48;
  char *local_40;
  long lStack_38;
  char *local_30;
  ulong uStack_28;
  undefined2 *local_20;
  undefined8 uStack_18;
  
  if (param_2 == 0) {
    uVar5 = 0;
    uVar7 = (ulong)*(uint *)(param_1 + 0x10);
    if ((*(uint *)(param_1 + 0x10) >> 0x1c & 1) == 0) goto LAB_00a9fbd0;
LAB_00a9fc38:
    uVar14 = (ulong)*(ushort *)(param_1 + 0x16);
    uVar8 = uVar5 - uVar14;
    if (uVar14 <= uVar5 && uVar8 != 0) {
      uVar3 = (uint)uVar8;
      if ((uVar8 & 1) == 0) {
        uVar13 = 1;
LAB_00a9fc74:
        if (((((uVar3 >> 1 & 1) == 0) || (uVar13 = uVar13 * 100, (uVar3 & 0xfffe) != 2)) &&
            (((uVar3 >> 2 & 1) == 0 || (uVar13 = uVar13 * 10000, (uVar3 & 0xfffc) != 4)))) &&
           (((uVar3 >> 3 & 1) == 0 || (uVar13 = uVar13 * 100000000, (uVar3 & 0xfff8) != 8)))) {
          uVar13 = uVar13 * 10000000000000000;
        }
      }
      else {
        uVar13 = 10;
        if (uVar8 != 1) goto LAB_00a9fc74;
      }
      uVar1 = 0;
      if (uVar13 != 0) {
        uVar1 = param_2 / uVar13;
      }
      uVar11 = param_2 - uVar1 * uVar13;
      uVar8 = uVar5;
      param_2 = uVar1;
      if (uVar13 >> 1 <= uVar11) {
        if (uVar13 >> 1 < uVar11) {
          param_2 = uVar1 + 1;
        }
        else {
          param_2 = (uVar1 & 1) + uVar1;
          if ((uVar1 & 1) == 0) goto joined_r0x00a9fdc8;
        }
        if (param_2 != 0) {
          uVar13 = param_2 / 10000000000;
          if (param_2 < 10000000000) {
            uVar13 = param_2;
          }
          uVar3 = 10;
          if (param_2 < 10000000000) {
            uVar3 = 0;
          }
          if (0xc34 < uVar13 >> 5) {
            uVar3 = uVar3 | 5;
            uVar13 = (uVar13 >> 5) / 0xc35;
          }
          iVar4 = (int)uVar13;
          if ((uint)*(ushort *)(param_1 + 0x16) <
              uVar3 + ((iVar4 + 0x5fff6U & iVar4 + 0x7ff9cU ^ iVar4 + 0xdfc18U & iVar4 + 0x7d8f0U)
                      >> 0x11)) {
            param_2 = param_2 / 10;
            uVar8 = uVar5 + 1;
          }
        }
      }
      goto joined_r0x00a9fdc8;
    }
    lVar10 = uVar14 - uVar5;
LAB_00a9fc54:
    uVar8 = uVar5;
    if (uVar5 == 0 && lVar10 == 0) goto LAB_00a9fc60;
  }
  else {
    uVar5 = param_2 / 10000000000;
    if (param_2 < 10000000000) {
      uVar5 = param_2;
    }
    uVar3 = 10;
    if (param_2 < 10000000000) {
      uVar3 = 0;
    }
    if (0xc34 < uVar5 >> 5) {
      uVar3 = uVar3 | 5;
      uVar5 = (uVar5 >> 5) / 0xc35;
    }
    iVar4 = (int)uVar5;
    uVar5 = (ulong)(uVar3 + ((iVar4 + 0x5fff6U & iVar4 + 0x7ff9cU ^
                             iVar4 + 0xdfc18U & iVar4 + 0x7d8f0U) >> 0x11));
    uVar7 = (ulong)*(uint *)(param_1 + 0x10);
    if ((*(uint *)(param_1 + 0x10) >> 0x1c & 1) != 0) goto LAB_00a9fc38;
LAB_00a9fbd0:
    lVar10 = 0;
    if ((uVar5 == 0) || (uVar14 = uVar5, param_2 % 10 != 0)) goto LAB_00a9fc54;
    do {
      uVar14 = uVar14 - 1;
      param_2 = param_2 / 10;
      uVar8 = uVar5;
      if (uVar14 == 0) break;
    } while (param_2 % 10 == 0);
joined_r0x00a9fdc8:
    uVar5 = uVar14;
    lVar10 = 0;
    if (uVar5 == 0) {
LAB_00a9fc60:
      lVar6 = 1;
      goto LAB_00a9feb8;
    }
  }
  local_90[1] = 0x2e;
  uVar14 = param_2;
  if (1 < uVar5) {
    uVar13 = uVar5;
    if (0x17 < uVar5) {
code_r0x00a9ffd0:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar13,0x18,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affa50);
    }
    uVar14 = param_2 / 100;
    lVar6 = (param_2 % 100) * 2;
    local_90[uVar5] = (&DAT_00390ba7)[lVar6];
    if (uVar5 == 0x17) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar5 + 1,0x18,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affa50);
    }
    local_90[uVar5 + 1] = (&DAT_00390ba8)[lVar6];
    uVar1 = uVar5;
    if (3 < uVar5) {
      do {
        uVar13 = uVar1 - 2;
        if (0x17 < uVar13) goto code_r0x00a9ffd0;
        uVar11 = uVar1 - 1;
        uVar2 = uVar14 / 100;
        *(undefined2 *)((long)&uStack_92 + uVar1) =
             *(undefined2 *)(&DAT_00390ba7 + (uVar14 % 100) * 2);
        uVar14 = uVar2;
        uVar1 = uVar13;
      } while (4 < uVar11);
    }
  }
  lVar6 = uVar5 + 2;
  param_2 = uVar14;
  if ((uVar5 & 1) != 0) {
    lVar6 = uVar5 + 2;
    param_2 = uVar14 / 10;
    local_90[2] = (char)uVar14 + (char)param_2 * -10 | 0x30;
  }
LAB_00a9feb8:
  local_90[0] = (char)param_2 + '0';
  local_90[lVar6] = param_4;
  if (uVar8 < 10) {
    bVar12 = (byte)uVar8 | 0x30;
    lVar9 = 2;
  }
  else {
    bVar12 = (&DAT_00390ba7)[uVar8 * 2];
    lVar9 = 3;
    local_90[lVar6 + 2] = (&DAT_00390ba8)[uVar8 * 2];
  }
  local_90[lVar6 + 1] = bVar12;
  if (0x18 < (ulong)(lVar6 + lVar9)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,lVar6 + lVar9,0x18,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affa50);
  }
  if (lVar10 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad_integral(param_1,param_3,1,0,local_90);
    return;
  }
  local_30 = "+";
  if ((uVar7 & 0x200000) == 0) {
    local_30 = (char *)0x1;
  }
  uStack_28 = uVar7 >> 0x15 & 1;
  local_78[0] = 2;
  if (param_3 == 0) {
    uStack_28 = 1;
    local_30 = "-+";
  }
  local_60 = 0;
  local_20 = local_78;
  local_48 = 2;
  uStack_18 = 3;
  local_70 = local_90;
  lStack_68 = lVar6;
  local_58 = lVar10;
  local_40 = local_90 + lVar6;
  lStack_38 = lVar9;
  FUN_00a9a57c(param_1,&local_30);
  return;
}


// ===== 00a9fff4  core::num::imp::overflow_panic::cast_integer =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::cast_integer */

void __rustcall core::num::imp::overflow_panic::cast_integer(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_003910dc,0x4b,param_1);
}


// ===== 00aa0010  core::num::imp::overflow_panic::add =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::add */

void __rustcall core::num::imp::overflow_panic::add(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00390e2d,0x39,param_1);
}


// ===== 00aa002c  core::num::imp::overflow_panic::mul =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::mul */

void __rustcall core::num::imp::overflow_panic::mul(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00390e68,0x43,param_1);
}


// ===== 00aa0048  core::num::imp::overflow_panic::neg =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::neg */

void __rustcall core::num::imp::overflow_panic::neg(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00390e89,0x3f,param_1);
}


// ===== 00aa0064  core::num::imp::overflow_panic::pow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::pow */

void __rustcall core::num::imp::overflow_panic::pow(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00391101,0x4b,param_1);
}


// ===== 00aa0080  core::num::imp::overflow_panic::rem =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::rem */

void __rustcall core::num::imp::overflow_panic::rem(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00390ea8,0x61,param_1);
}


// ===== 00aa009c  core::num::imp::overflow_panic::shl =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::shl */

void __rustcall core::num::imp::overflow_panic::shl(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00390ed8,0x47,param_1);
}


// ===== 00aa00b8  core::num::imp::overflow_panic::shr =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::shr */

void __rustcall core::num::imp::overflow_panic::shr(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00390efb,0x49,param_1);
}


// ===== 00aa00d4  core::num::imp::overflow_panic::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::overflow_panic::sub */

void __rustcall core::num::imp::overflow_panic::sub(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_00390f1f,0x43,param_1);
}


// ===== 00aa00f0  core::num::imp::flt2dec::digits_to_dec_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::digits_to_dec_str */

undefined1  [16] __rustcall
core::num::imp::flt2dec::digits_to_dec_str
          (byte *param_1,ulong param_2,ushort param_3,ulong param_4,undefined2 *param_5,
          ulong param_6)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic(&DAT_00391126,0x21,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affa68);
  }
  if (*param_1 < 0x31) {
                    /* WARNING: Subroutine does not return */
    panicking::panic(&DAT_00391147,0x1f,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affa80);
  }
  if (param_6 < 4) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: parts.len() >= 4",0x22,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affa98);
  }
  *param_5 = 2;
  if ((short)param_3 < 1) {
    param_5[0x18] = 2;
    *(char **)(param_5 + 4) = "0.";
    *(undefined8 *)(param_5 + 8) = 2;
    uVar1 = param_4 - param_2;
    param_5[0xc] = 0;
    uVar4 = -(long)(short)param_3;
    *(byte **)(param_5 + 0x1c) = param_1;
    *(ulong *)(param_5 + 0x20) = param_2;
    *(ulong *)(param_5 + 0x10) = uVar4;
    if ((param_2 <= param_4 && uVar1 != 0) && (uVar4 < uVar1)) {
      param_5[0x24] = 0;
      *(ulong *)(param_5 + 0x28) = uVar1 + (long)(short)param_3;
      auVar5._8_8_ = 4;
      auVar5._0_8_ = param_5;
      return auVar5;
    }
  }
  else {
    uVar4 = (ulong)param_3;
    *(byte **)(param_5 + 4) = param_1;
    uVar1 = param_2 - uVar4;
    if (param_2 < uVar4 || uVar1 == 0) {
      *(ulong *)(param_5 + 8) = param_2;
      uVar3 = 2;
      param_5[0xc] = 0;
      *(ulong *)(param_5 + 0x10) = uVar4 - param_2;
      if (param_4 != 0) {
        param_5[0x18] = 2;
        *(undefined **)(param_5 + 0x1c) = &DAT_00390c6f;
        *(undefined8 *)(param_5 + 0x20) = 1;
        goto LAB_00aa01f4;
      }
      goto LAB_00aa01bc;
    }
    *(ulong *)(param_5 + 8) = uVar4;
    bVar2 = uVar1 <= param_4;
    param_4 = param_4 - uVar1;
    param_5[0xc] = 2;
    *(undefined **)(param_5 + 0x10) = &DAT_00390c6f;
    *(undefined8 *)(param_5 + 0x14) = 1;
    param_5[0x18] = 2;
    *(byte **)(param_5 + 0x1c) = param_1 + uVar4;
    *(ulong *)(param_5 + 0x20) = uVar1;
    if (bVar2 && param_4 != 0) {
LAB_00aa01f4:
      param_5[0x24] = 0;
      *(ulong *)(param_5 + 0x28) = param_4;
      auVar7._8_8_ = 4;
      auVar7._0_8_ = param_5;
      return auVar7;
    }
  }
  uVar3 = 3;
LAB_00aa01bc:
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_5;
  return auVar6;
}


// ===== 00aa0254  core::num::imp::flt2dec::digits_to_exp_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::digits_to_exp_str */

undefined1  [16] __rustcall
core::num::imp::flt2dec::digits_to_exp_str
          (byte *param_1,long param_2,short param_3,ulong param_4,int param_5,undefined2 *param_6,
          ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined1 auVar6 [16];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    panicking::panic(&DAT_00391126,0x21,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affab0);
  }
  if (*param_1 < 0x31) {
                    /* WARNING: Subroutine does not return */
    panicking::panic(&DAT_00391147,0x1f,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affac8);
  }
  if (param_7 < 6) {
                    /* WARNING: Subroutine does not return */
    panicking::panic("assertion failed: parts.len() >= 60e00E0e0E0",0x22,
                     &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affae0);
  }
  uVar2 = param_2 - 1;
  *param_6 = 2;
  *(byte **)(param_6 + 4) = param_1;
  *(undefined8 *)(param_6 + 8) = 1;
  if (uVar2 == 0) {
    lVar4 = 1;
    if (param_4 == 0) goto LAB_00aa0324;
    lVar4 = 2;
    param_6[0xc] = 2;
    *(undefined **)(param_6 + 0x10) = &DAT_00390c6f;
    *(undefined8 *)(param_6 + 0x14) = 1;
    if (param_4 == 0) goto LAB_00aa0324;
  }
  else {
    param_6[0xc] = 2;
    lVar4 = 3;
    *(undefined **)(param_6 + 0x10) = &DAT_00390c6f;
    *(undefined8 *)(param_6 + 0x14) = 1;
    bVar3 = param_4 < uVar2;
    param_4 = param_4 - uVar2;
    param_6[0x18] = 2;
    *(byte **)(param_6 + 0x1c) = param_1 + 1;
    *(ulong *)(param_6 + 0x20) = uVar2;
    if (bVar3 || param_4 == 0) goto LAB_00aa0324;
  }
  param_6[lVar4 * 0xc] = 0;
  *(ulong *)(param_6 + lVar4 * 0xc + 4) = param_4;
  lVar4 = lVar4 + 1;
LAB_00aa0324:
  if (param_3 < 1) {
    puVar5 = param_6 + lVar4 * 0xc;
    puVar1 = &UNK_0039116a;
    if (param_5 == 0) {
      puVar1 = &UNK_00391168;
    }
    *puVar5 = 2;
    *(undefined **)(puVar5 + 4) = puVar1;
    *(undefined8 *)(puVar5 + 8) = 2;
    param_3 = 1 - param_3;
  }
  else {
    puVar5 = param_6 + lVar4 * 0xc;
    puVar1 = &UNK_00391167;
    if (param_5 == 0) {
      puVar1 = &UNK_00391166;
    }
    *puVar5 = 2;
    *(undefined **)(puVar5 + 4) = puVar1;
    *(undefined8 *)(puVar5 + 8) = 1;
    param_3 = param_3 + -1;
  }
  param_6[lVar4 * 0xc + 0xc] = 1;
  param_6[lVar4 * 0xc + 0xd] = param_3;
  auVar6._8_8_ = lVar4 + 2;
  auVar6._0_8_ = param_6;
  return auVar6;
}


// ===== 00aa0408  core::num::imp::flt2dec::round_up =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::flt2dec::round_up */

bool __rustcall core::num::imp::flt2dec::round_up(undefined1 *param_1,long param_2)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  do {
    lVar1 = param_2 + uVar2;
    if (lVar1 == 0) {
      if (param_2 == 0) {
        return true;
      }
      *param_1 = 0x31;
      __n = param_2 - 1;
      lVar3 = 1;
      goto LAB_00aa046c;
    }
    lVar3 = uVar2 + param_2;
    uVar2 = uVar2 - 1;
  } while (param_1[lVar3 + -1] == '9');
  param_2 = param_2 + uVar2;
  __n = ~uVar2;
  lVar3 = param_2 + 1;
  param_1[param_2] = param_1[param_2] + '\x01';
LAB_00aa046c:
  memset(param_1 + lVar3,0x30,__n);
  return lVar1 == 0;
}


// ===== 00aa04a8  core::num::imp::int_sqrt::panic_for_negative_argument =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::int_sqrt::panic_for_negative_argument */

void __rustcall core::num::imp::int_sqrt::panic_for_negative_argument(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_0039116c,0x65,param_1);
}


// ===== 00aa04c4  core::num::imp::int_log10::panic_for_nonpositive_argument =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::int_log10::panic_for_nonpositive_argument */

void __rustcall core::num::imp::int_log10::panic_for_nonpositive_argument(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  panicking::panic_fmt(&DAT_0039119e,0x5d,param_1);
}


// ===== 00aa04e0  core::unicode::unicode_data::alphabetic::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::alphabetic::lookup_slow */

uint __rustcall core::unicode::unicode_data::alphabetic::lookup_slow(uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = param_1 * 0x800;
  lVar1 = 0;
  if (0x16a38 < param_1) {
    lVar1 = 0x19;
  }
  if ((uint)(*(int *)(&DAT_003911cc + (lVar1 + 0xd) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 0xd;
  }
  if ((uint)(*(int *)(&DAT_003911cc + (lVar1 + 6) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 6;
  }
  if ((uint)(*(int *)(&DAT_003911cc + (lVar1 + 3) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 3;
  }
  if ((uint)(*(int *)(&DAT_003911cc + (lVar1 + 2) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 2;
  }
  if ((uint)(*(int *)(&DAT_003911cc + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  uVar4 = (ulong)(*(int *)(&DAT_003911cc + lVar1 * 4) << 0xb == uVar2);
  if ((uint)(*(int *)(&DAT_003911cc + lVar1 * 4) << 0xb) < uVar2) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 + lVar1;
  lVar1 = uVar4 * 4;
  uVar3 = (ulong)(*(uint *)(&DAT_003911cc + lVar1) >> 0x15);
  if (uVar4 < 0x32) {
    uVar5 = (ulong)(*(uint *)(&DAT_003911d0 + lVar1) >> 0x15);
    if (uVar4 == 0) {
      lVar1 = uVar5 + ~uVar3;
      uVar2 = 0;
      goto joined_r0x00aa05ac;
    }
  }
  else {
    uVar5 = 0x5ef;
  }
  uVar2 = *(uint *)(&DAT_003911c8 + lVar1) & 0x1fffff;
  lVar1 = uVar5 + ~uVar3;
joined_r0x00aa05ac:
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + (byte)(&DAT_0038ed3c)[uVar3];
      if (param_1 - uVar2 < uVar6) break;
      uVar3 = uVar3 + 1;
    } while (uVar5 - 1 != uVar3);
  }
  return (uint)uVar3 & 1;
}


// ===== 00aa05e8  core::unicode::unicode_data::conversions::to_casefold =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::conversions::to_casefold */

void __rustcall core::unicode::unicode_data::conversions::to_casefold(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int local_58;
  undefined4 uStack_54;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  
  if (param_2 < 0xb5) {
    param_1[1] = 0;
    param_1[2] = 0;
    uVar4 = param_2 | 0x20;
    if (0x19 < param_2 - 0x41) {
      uVar4 = param_2;
    }
    *param_1 = uVar4;
  }
  else {
    FUN_00aa07b8(&local_58,param_2,&PTR_DAT_00affaf8);
    if (local_58 != -1) {
      *(ulong *)param_1 = CONCAT44(uStack_54,local_58);
      param_1[2] = local_50;
      return;
    }
    FUN_00aa07b8(&local_4c,param_2,&PTR_DAT_00affbb8);
    uVar6 = local_44;
    uVar4 = uStack_48;
    bVar5 = local_4c != 0xffffffff;
    if (bVar5) {
      param_2 = local_4c;
    }
    uVar1 = 0;
    if (bVar5) {
      uVar1 = local_44;
    }
    uVar2 = 0;
    if (bVar5) {
      uVar2 = uStack_48;
    }
    if (param_2 < 0xc0) {
      param_1[1] = 0;
      param_1[2] = 0;
      uVar3 = param_2 | 0x20;
      if (0x19 < param_2 - 0x41) {
        uVar3 = param_2;
      }
      *param_1 = uVar3;
    }
    else {
      FUN_00aa07b8(&local_4c,param_2,&PTR_DAT_00affb38);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = param_2;
      if (local_4c != 0xffffffff) {
        *(ulong *)param_1 = CONCAT44(uStack_48,local_4c);
        param_1[2] = local_44;
      }
    }
    if (uVar2 != 0) {
      if (uVar2 < 0xc0) {
        uVar4 = uVar2 | 0x20;
        if (0x19 < uVar2 - 0x41) {
          uVar4 = uVar2;
        }
        param_1[1] = uVar4;
      }
      else {
        FUN_00aa07b8(&local_4c,uVar2,&PTR_DAT_00affb38);
        if (local_4c != 0xffffffff) {
          uVar4 = local_4c;
        }
        param_1[1] = uVar4;
      }
      if (uVar1 != 0) {
        if (uVar1 < 0xc0) {
          uVar6 = uVar1 | 0x20;
          if (0x19 < uVar1 - 0x41) {
            uVar6 = uVar1;
          }
        }
        else {
          FUN_00aa07b8(&local_4c,uVar1,&PTR_DAT_00affb38);
          if (local_4c != 0xffffffff) {
            uVar6 = local_4c;
          }
        }
        param_1[2] = uVar6;
        return;
      }
    }
  }
  return;
}


// ===== 00aa07b8  FUN_00aa07b8 =====

void FUN_00aa07b8(uint *param_1,uint param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  ushort *puVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_2 < 0x20000) {
    plVar1 = (long *)(param_3 + (ulong)(param_2 >> 0x10) * 0x20);
    uVar6 = plVar1[1];
    if (uVar6 != 0) {
      if (uVar6 == 1) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        do {
          lVar2 = (uVar6 >> 1) + lVar7;
          if ((uint)*(ushort *)(*plVar1 + lVar2 * 6) <= (param_2 & 0xffff)) {
            lVar7 = lVar2;
          }
          uVar6 = uVar6 - (uVar6 >> 1);
        } while (1 < uVar6);
      }
      puVar5 = (ushort *)(*plVar1 + lVar7 * 6);
      uVar4 = *puVar5;
      if ((((uint)uVar4 <= (param_2 & 0xffff)) &&
          ((param_2 & 0xffff) <= ((uint)uVar4 + (uint)(byte)puVar5[1] & 0xffff))) &&
         (((uVar4 ^ param_2) & (uint)*(byte *)((long)puVar5 + 3) & 1) == 0)) {
        uVar4 = puVar5[2];
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = param_2 & 0x10000 | uVar4 + param_2 & 0xffff;
        return;
      }
    }
    uVar6 = plVar1[3];
    if (uVar6 != 0) {
      if (uVar6 == 1) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        do {
          lVar2 = (uVar6 >> 1) + lVar7;
          uVar6 = uVar6 - (uVar6 >> 1);
          if ((uint)*(ushort *)(plVar1[2] + lVar2 * 8) <= (param_2 & 0xffff)) {
            lVar7 = lVar2;
          }
        } while (1 < uVar6);
      }
      puVar5 = (ushort *)(plVar1[2] + lVar7 * 8);
      if ((uint)*puVar5 == (param_2 & 0xffff)) {
        uVar3 = *(uint *)(puVar5 + 1);
        param_2 = param_2 & 0x10000;
        param_1[2] = param_2 | puVar5[3];
        *param_1 = param_2 | uVar3 & 0xffff;
        param_1[1] = param_2 | uVar3 >> 0x10;
        return;
      }
    }
  }
  *param_1 = 0xffffffff;
  return;
}


// ===== 00aa08f4  core::unicode::unicode_data::conversions::to_lower =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::conversions::to_lower */

void __rustcall core::unicode::unicode_data::conversions::to_lower(uint *param_1,uint param_2)

{
  uint uVar1;
  int local_2c;
  undefined4 uStack_28;
  uint local_24;
  
  if (param_2 < 0xc0) {
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = param_2 | 0x20;
    if (0x19 < param_2 - 0x41) {
      uVar1 = param_2;
    }
    *param_1 = uVar1;
  }
  else {
    FUN_00aa07b8(&local_2c,param_2,&PTR_DAT_00affb38);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = param_2;
    if (local_2c != -1) {
      *(ulong *)param_1 = CONCAT44(uStack_28,local_2c);
      param_1[2] = local_24;
      return;
    }
  }
  return;
}


// ===== 00aa0984  core::unicode::unicode_data::conversions::to_title =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::conversions::to_title */

void __rustcall core::unicode::unicode_data::conversions::to_title(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined8 local_38;
  uint local_30;
  int local_2c;
  undefined4 uStack_28;
  uint local_24;
  
  if (param_2 < 0xb5) {
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = param_2 & 0x5f;
    if (0x19 < param_2 - 0x61) {
      uVar1 = param_2;
    }
    *param_1 = uVar1;
  }
  else {
    FUN_00aa07b8(&local_2c,param_2,&PTR_DAT_00affb78);
    if (local_2c == -1) {
      FUN_00aa07b8(&local_38,param_2,&PTR_DAT_00affbb8);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = param_2;
      local_2c = (int)local_38;
    }
    else {
      local_38 = CONCAT44(uStack_28,local_2c);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = param_2;
      local_30 = local_24;
    }
    if (local_2c != -1) {
      *(undefined8 *)param_1 = local_38;
      param_1[2] = local_30;
      return;
    }
  }
  return;
}


// ===== 00aa0a60  core::unicode::unicode_data::conversions::to_upper =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::conversions::to_upper */

void __rustcall core::unicode::unicode_data::conversions::to_upper(uint *param_1,uint param_2)

{
  uint uVar1;
  int local_2c;
  undefined4 uStack_28;
  uint local_24;
  
  if (param_2 < 0xb5) {
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = param_2 & 0x5f;
    if (0x19 < param_2 - 0x61) {
      uVar1 = param_2;
    }
    *param_1 = uVar1;
  }
  else {
    FUN_00aa07b8(&local_2c,param_2,&PTR_DAT_00affbb8);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = param_2;
    if (local_2c != -1) {
      *(ulong *)param_1 = CONCAT44(uStack_28,local_2c);
      param_1[2] = local_24;
      return;
    }
  }
  return;
}


// ===== 00aa0af4  FUN_00aa0af4 =====

bool FUN_00aa0af4(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_1 >> 8) & 0xffffff;
  uVar2 = (uint)param_1;
  if (uVar3 < 0x20) {
    bVar1 = (uVar2 & 0xff) == 0x85 || (uVar2 & 0xff) == 0xa0;
    if ((param_1 & 0xffffff00) != 0) {
      bVar1 = uVar3 == 0x16 && uVar2 == 0x1680;
    }
    return bVar1;
  }
  if (uVar3 != 0x20) {
    if (uVar3 == 0x30) {
      return uVar2 == 0x3000;
    }
    return false;
  }
  return (bool)((byte)PTR_WHITESPACE_MAP_00b00d70[param_1 & 0xff] >> 1 & 1);
}


// ===== 00aa0b70  core::unicode::unicode_data::cn_planes_0_3::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::cn_planes_0_3::lookup_slow */

uint __rustcall core::unicode::unicode_data::cn_planes_0_3::lookup_slow(uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = param_1 * 0x800;
  lVar1 = 0;
  if (0x1b2fb < param_1) {
    lVar1 = 0x1b;
  }
  if ((uint)(*(int *)(&DAT_00392024 + (lVar1 + 0xd) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 0xd;
  }
  if ((uint)(*(int *)(&DAT_00392024 + (lVar1 + 7) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 7;
  }
  if ((uint)(*(int *)(&DAT_00392024 + (lVar1 + 3) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 3;
  }
  if ((uint)(*(int *)(&DAT_00392024 + (lVar1 + 2) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 2;
  }
  if ((uint)(*(int *)(&DAT_00392024 + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  uVar4 = (ulong)(*(int *)(&DAT_00392024 + lVar1 * 4) << 0xb == uVar2);
  if ((uint)(*(int *)(&DAT_00392024 + lVar1 * 4) << 0xb) < uVar2) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 + lVar1;
  lVar1 = uVar4 * 4;
  uVar3 = (ulong)(*(uint *)(&DAT_00392024 + lVar1) >> 0x15);
  if (uVar4 < 0x35) {
    uVar5 = (ulong)(*(uint *)(&DAT_00392028 + lVar1) >> 0x15);
    if (uVar4 == 0) {
      lVar1 = uVar5 + ~uVar3;
      uVar2 = 0;
      goto joined_r0x00aa0c3c;
    }
  }
  else {
    uVar5 = 0x5b5;
  }
  uVar2 = *(uint *)(&DAT_00392020 + lVar1) & 0x1fffff;
  lVar1 = uVar5 + ~uVar3;
joined_r0x00aa0c3c:
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + (byte)(&DAT_0038f42b)[uVar3];
      if (param_1 - uVar2 < uVar6) break;
      uVar3 = uVar3 + 1;
    } while (uVar5 - 1 != uVar3);
  }
  return (uint)uVar3 & 1;
}


// ===== 00aa0c78  core::unicode::unicode_data::case_ignorable::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::case_ignorable::lookup_slow */

uint __rustcall core::unicode::unicode_data::case_ignorable::lookup_slow(uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = param_1 * 0x800;
  uVar3 = 0;
  if (0x11ef2 < param_1) {
    uVar3 = 0x12;
  }
  if ((uint)(*(int *)(&DAT_003920fc + (uVar3 | 9) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 | 9;
  }
  if ((uint)(*(int *)(&DAT_003920fc + (uVar3 | 4) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 | 4;
  }
  if ((uint)(*(int *)(&DAT_003920fc + (uVar3 + 2) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 + 2;
  }
  if ((uint)(*(int *)(&DAT_003920fc + (uVar3 + 1) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 + 1;
  }
  if ((uint)(*(int *)(&DAT_003920fc + (uVar3 + 1) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = (ulong)(*(int *)(&DAT_003920fc + uVar3 * 4) << 0xb == uVar2);
  if ((uint)(*(int *)(&DAT_003920fc + uVar3 * 4) << 0xb) < uVar2) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 + uVar3;
  lVar1 = uVar4 * 4;
  uVar3 = (ulong)(*(uint *)(&DAT_003920fc + lVar1) >> 0x15);
  if (uVar4 < 0x23) {
    uVar5 = (ulong)(*(uint *)(&DAT_00392100 + lVar1) >> 0x15);
    if (uVar4 == 0) {
      lVar1 = uVar5 + ~uVar3;
      uVar2 = 0;
      goto joined_r0x00aa0d48;
    }
  }
  else {
    uVar5 = 0x397;
  }
  uVar2 = *(uint *)(&DAT_003920f8 + lVar1) & 0x1fffff;
  lVar1 = uVar5 + ~uVar3;
joined_r0x00aa0d48:
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + (byte)(&DAT_0038f9e0)[uVar3];
      if (param_1 - uVar2 < uVar6) break;
      uVar3 = uVar3 + 1;
    } while (uVar5 - 1 != uVar3);
  }
  return (uint)uVar3 & 1;
}


// ===== 00aa0d84  core::unicode::unicode_data::grapheme_extend::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::grapheme_extend::lookup_slow */

uint __rustcall core::unicode::unicode_data::grapheme_extend::lookup_slow(uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = param_1 * 0x800;
  uVar3 = 0;
  if (0x10eaa < param_1) {
    uVar3 = 0x10;
  }
  if ((uint)(*(int *)(&DAT_0039218c + (uVar3 | 8) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 | 8;
  }
  if ((uint)(*(int *)(&DAT_0039218c + (uVar3 | 4) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 | 4;
  }
  if ((uint)(*(int *)(&DAT_0039218c + (uVar3 | 2) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 | 2;
  }
  if ((uint)(*(int *)(&DAT_0039218c + (uVar3 + 1) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 + 1;
  }
  if ((uint)(*(int *)(&DAT_0039218c + (uVar3 + 1) * 4) << 0xb) <= uVar2) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = (ulong)(*(int *)(&DAT_0039218c + uVar3 * 4) << 0xb == uVar2);
  if ((uint)(*(int *)(&DAT_0039218c + uVar3 * 4) << 0xb) < uVar2) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 + uVar3;
  lVar1 = uVar4 * 4;
  uVar3 = (ulong)(*(uint *)(&DAT_0039218c + lVar1) >> 0x15);
  if (uVar4 < 0x20) {
    uVar5 = (ulong)(*(uint *)(&DAT_00392190 + lVar1) >> 0x15);
    if (uVar4 == 0) {
      lVar1 = uVar5 + ~uVar3;
      uVar2 = 0;
      goto joined_r0x00aa0e50;
    }
  }
  else {
    uVar5 = 0x2ff;
  }
  uVar2 = *(uint *)(&DAT_00392188 + lVar1) & 0x1fffff;
  lVar1 = uVar5 + ~uVar3;
joined_r0x00aa0e50:
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + (byte)(&DAT_0038fd77)[uVar3];
      if (param_1 - uVar2 < uVar6) break;
      uVar3 = uVar3 + 1;
    } while (uVar5 - 1 != uVar3);
  }
  return (uint)uVar3 & 1;
}


// ===== 00aa0e8c  core::unicode::unicode_data::n::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::n::lookup_slow */

uint __rustcall core::unicode::unicode_data::n::lookup_slow(uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = param_1 * 0x800;
  lVar1 = 0;
  if (0x1144f < param_1) {
    lVar1 = 0x15;
  }
  if ((uint)(*(int *)(&DAT_00392210 + (lVar1 + 0xb) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 0xb;
  }
  if ((uint)(*(int *)(&DAT_00392210 + (lVar1 + 5) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 5;
  }
  if ((uint)(*(int *)(&DAT_00392210 + (lVar1 + 3) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 3;
  }
  if ((uint)(*(int *)(&DAT_00392210 + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  if ((uint)(*(int *)(&DAT_00392210 + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  uVar4 = (ulong)(*(int *)(&DAT_00392210 + lVar1 * 4) << 0xb == uVar2);
  if ((uint)(*(int *)(&DAT_00392210 + lVar1 * 4) << 0xb) < uVar2) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 + lVar1;
  lVar1 = uVar4 * 4;
  uVar3 = (ulong)(*(uint *)(&DAT_00392210 + lVar1) >> 0x15);
  if (uVar4 < 0x2a) {
    uVar5 = (ulong)(*(uint *)(&DAT_00392214 + lVar1) >> 0x15);
    if (uVar4 == 0) {
      lVar1 = uVar5 + ~uVar3;
      uVar2 = 0;
      goto joined_r0x00aa0f58;
    }
  }
  else {
    uVar5 = 0x123;
  }
  uVar2 = *(uint *)(&DAT_0039220c + lVar1) & 0x1fffff;
  lVar1 = uVar5 + ~uVar3;
joined_r0x00aa0f58:
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + (byte)(&DAT_00390076)[uVar3];
      if (param_1 - uVar2 < uVar6) break;
      uVar3 = uVar3 + 1;
    } while (uVar5 - 1 != uVar3);
  }
  return (uint)uVar3 & 1;
}


// ===== 00aa0f94  core::unicode::unicode_data::default_ignorable_code_point::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::default_ignorable_code_point::lookup_slow */

uint __rustcall
core::unicode::unicode_data::default_ignorable_code_point::lookup_slow(ulong param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = (int)param_1 * 0x800;
  lVar1 = 0;
  if (0x7e < ((uint)(param_1 >> 9) & 0x7fffff)) {
    lVar1 = 6;
  }
  if ((uint)(*(int *)(&DAT_003922bc + (lVar1 + 3) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 3;
  }
  if ((uint)(*(int *)(&DAT_003922bc + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  if ((uint)(*(int *)(&DAT_003922bc + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  uVar4 = (ulong)(*(int *)(&DAT_003922bc + lVar1 * 4) << 0xb == uVar2);
  if ((uint)(*(int *)(&DAT_003922bc + lVar1 * 4) << 0xb) < uVar2) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 + lVar1;
  lVar1 = uVar4 * 4;
  uVar3 = (ulong)(*(uint *)(&DAT_003922bc + lVar1) >> 0x15);
  if (uVar4 < 0xb) {
    uVar5 = (ulong)(*(uint *)(&DAT_003922c0 + lVar1) >> 0x15);
    if (uVar4 == 0) {
      lVar1 = uVar5 + ~uVar3;
      uVar2 = 0;
      goto joined_r0x00aa103c;
    }
  }
  else {
    uVar5 = 0x23;
  }
  uVar2 = *(uint *)(&DAT_003922b8 + lVar1) & 0x1fffff;
  lVar1 = uVar5 + ~uVar3;
joined_r0x00aa103c:
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + (byte)(&DAT_00390199)[uVar3];
      if ((int)param_1 - uVar2 < uVar6) break;
      uVar3 = uVar3 + 1;
    } while (uVar5 - 1 != uVar3);
  }
  return (uint)uVar3 & 1;
}


// ===== 00aa1078  core::unicode::unicode_data::cf::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::cf::lookup_slow */

uint __rustcall core::unicode::unicode_data::cf::lookup_slow(uint param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = param_1 * 0x800;
  lVar1 = 0;
  if (0x110bc < param_1) {
    lVar1 = 5;
  }
  if ((uint)(*(int *)(&DAT_003922ec + (lVar1 + 3) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 3;
  }
  if ((uint)(*(int *)(&DAT_003922ec + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  if ((uint)(*(int *)(&DAT_003922ec + (lVar1 + 1) * 4) << 0xb) <= uVar2) {
    lVar1 = lVar1 + 1;
  }
  uVar4 = (ulong)(*(int *)(&DAT_003922ec + lVar1 * 4) << 0xb == uVar2);
  if ((uint)(*(int *)(&DAT_003922ec + lVar1 * 4) << 0xb) < uVar2) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 + lVar1;
  lVar1 = uVar4 * 4;
  uVar3 = (ulong)(*(uint *)(&DAT_003922ec + lVar1) >> 0x15);
  if (uVar4 < 10) {
    uVar5 = (ulong)(*(uint *)(&DAT_003922f0 + lVar1) >> 0x15);
    if (uVar4 == 0) {
      lVar1 = uVar5 + ~uVar3;
      uVar2 = 0;
      goto joined_r0x00aa1124;
    }
  }
  else {
    uVar5 = 0x2b;
  }
  uVar2 = *(uint *)(&DAT_003922e8 + lVar1) & 0x1fffff;
  lVar1 = uVar5 + ~uVar3;
joined_r0x00aa1124:
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + (byte)(&DAT_003901bc)[uVar3];
      if (param_1 - uVar2 < uVar6) break;
      uVar3 = uVar3 + 1;
    } while (uVar5 - 1 != uVar3);
  }
  return (uint)uVar3 & 1;
}


// ===== 00aa1160  core::unicode::unicode_data::lt::lookup_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::lt::lookup_slow */

uint __rustcall core::unicode::unicode_data::lt::lookup_slow(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar5 = (uint)(param_1 >> 3) & 0x1fffffff;
  uVar3 = (int)param_1 * 0x800;
  uVar4 = 1;
  if (0x3f0 < uVar5) {
    uVar4 = 2;
  }
  uVar2 = (ulong)(0x3f0 < uVar5);
  if ((uint)(*(int *)(&DAT_00392318 + uVar4 * 4) << 0xb) <= uVar3) {
    uVar2 = uVar4;
  }
  lVar1 = uVar2 * 4;
  if ((uint)(*(int *)(&DAT_00392318 + lVar1) << 0xb) < uVar3) {
    uVar2 = uVar2 + 1;
  }
  if (*(int *)(&DAT_00392318 + lVar1) << 0xb == uVar3) {
    uVar2 = uVar2 + 1;
  }
  lVar1 = uVar2 * 4;
  uVar4 = (ulong)(*(uint *)(&DAT_00392318 + lVar1) >> 0x15);
  if (uVar2 < 2) {
    uVar6 = (ulong)(*(uint *)(&DAT_0039231c + lVar1) >> 0x15);
    if (uVar2 == 0) {
      lVar1 = uVar6 + ~uVar4;
      uVar3 = 0;
      goto joined_r0x00aa11e4;
    }
  }
  else {
    uVar6 = 0x15;
  }
  uVar3 = *(uint *)(&DAT_00392314 + lVar1) & 0x1fffff;
  lVar1 = uVar6 + ~uVar4;
joined_r0x00aa11e4:
  if (lVar1 != 0) {
    uVar5 = 0;
    do {
      uVar5 = uVar5 + (byte)(&DAT_003901e7)[uVar4];
      if ((int)param_1 - uVar3 < uVar5) break;
      uVar4 = uVar4 + 1;
    } while (uVar6 - 1 != uVar4);
  }
  return (uint)uVar4 & 1;
}


// ===== 00aa1220  core::unicode::unicode_data::lowercase::lookup =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::lowercase::lookup */

uint __rustcall core::unicode::unicode_data::lowercase::lookup(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = (uint)param_1;
  if (0x1eb55 < uVar2 - 0xaa) {
    return 0;
  }
  bVar1 = PTR_BITSET_INDEX_CHUNKS_00b013e8
          [((ulong)(uVar2 >> 6) & 0xf) +
           (ulong)(byte)PTR_BITSET_CHUNKS_MAP_00b013e0[uVar2 >> 10] * 0x10];
  if (bVar1 < 0x39) {
    return (uint)(*(ulong *)(PTR_BITSET_CANONICAL_00b013f0 + (ulong)bVar1 * 8) >> (param_1 & 0x3f))
           & 1;
  }
  uVar3 = (ulong)bVar1 - 0x39;
  if (0x4e < bVar1) {
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check(uVar3,0x16,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff578);
  }
  uVar4 = 1L << (uVar3 & 0x3f);
  bVar1 = (PTR_BITSET_MAPPING_00b013f8 + uVar3 * 2)[1];
  uVar3 = *(ulong *)(PTR_BITSET_CANONICAL_00b013f0 +
                    (ulong)(byte)PTR_BITSET_MAPPING_00b013f8[uVar3 * 2] * 8);
  if ((uVar4 & 0x1f3ffe) == 0) {
    uVar3 = ~uVar3;
  }
  if ((uVar4 & 0x2cc001) != 0) {
    uVar4 = (ulong)-(uint)bVar1 & 0x3f;
    return (uint)((uVar3 >> uVar4 | uVar3 << 0x40 - uVar4) >> (param_1 & 0x3f)) & 1;
  }
  return (uint)((uVar3 >> ((ulong)bVar1 & 0x3f)) >> (param_1 & 0x3f)) & 1;
}


// ===== 00aa1318  core::unicode::unicode_data::uppercase::lookup =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::unicode::unicode_data::uppercase::lookup */

uint __rustcall core::unicode::unicode_data::uppercase::lookup(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = (uint)param_1;
  if (0x7cc < uVar2 - 0xc0 >> 6) {
    return 0;
  }
  bVar1 = PTR_BITSET_INDEX_CHUNKS_00b01408
          [((ulong)(uVar2 >> 6) & 0xf) +
           (ulong)(byte)PTR_BITSET_CHUNKS_MAP_00b01400[uVar2 >> 10] * 0x10];
  if (bVar1 < 0x2c) {
    return (uint)(*(ulong *)(PTR_BITSET_CANONICAL_00b01410 + (ulong)bVar1 * 8) >> (param_1 & 0x3f))
           & 1;
  }
  uVar3 = (ulong)bVar1 - 0x2c;
  if (0x44 < bVar1) {
                    /* WARNING: Subroutine does not return */
    panicking::panic_bounds_check(uVar3,0x19,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00aff578);
  }
  uVar4 = 1L << (uVar3 & 0x3f);
  bVar1 = (PTR_BITSET_MAPPING_00b01418 + uVar3 * 2)[1];
  uVar3 = *(ulong *)(PTR_BITSET_CANONICAL_00b01410 +
                    (ulong)(byte)PTR_BITSET_MAPPING_00b01418[uVar3 * 2] * 8);
  if ((uVar4 & 0x1ffc3fd) == 0) {
    uVar3 = ~uVar3;
  }
  if ((uVar4 & 0x40fc02) != 0) {
    uVar4 = (ulong)-(uint)bVar1 & 0x3f;
    return (uint)((uVar3 >> uVar4 | uVar3 << 0x40 - uVar4) >> (param_1 & 0x3f)) & 1;
  }
  return (uint)((uVar3 >> ((ulong)bVar1 & 0x3f)) >> (param_1 & 0x3f)) & 1;
}


// ===== 00aa1410  core::num::imp::dec2flt::decimal_seq::parse_decimal_seq =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::dec2flt::decimal_seq::parse_decimal_seq */

void __rustcall
core::num::imp::dec2flt::decimal_seq::parse_decimal_seq(void *param_1,long param_2,ulong param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong local_350;
  ulong local_348 [96];
  int local_48;
  undefined1 local_44;
  
  memset(&local_350,0,0x30d);
  uVar8 = 0;
  uVar9 = param_3;
  if (param_3 != 0) {
    do {
      uVar10 = *(byte *)(param_2 + uVar8) - 0x30;
      if (uVar10 != 0) {
        if (uVar10 < 10) {
          local_350 = 0;
          goto LAB_00aa1490;
        }
        pbVar12 = (byte *)(param_2 + uVar8);
        uVar7 = param_3 - uVar8;
        local_350 = 0;
        uVar9 = local_350;
        if (*(byte *)(param_2 + uVar8) != 0x2e) goto joined_r0x00aa15b4;
        uVar9 = ~uVar8 + param_3;
        pbVar14 = (byte *)(param_2 + uVar8 + 1);
        goto LAB_00aa151c;
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (param_3 != uVar8);
    uVar8 = 0;
  }
  goto LAB_00aa179c;
  while( true ) {
    local_350 = uVar5 + 1;
    uVar15 = (uint)*(byte *)(param_2 + uVar5 + uVar8 + 1);
    uVar10 = uVar15 - 0x30;
    if (9 < uVar10) break;
LAB_00aa1490:
    uVar5 = local_350;
    if (uVar5 < 0x300) {
      *(char *)((long)local_348 + uVar5) = (char)uVar10;
    }
    if (~uVar8 + param_3 == uVar5) {
      uVar7 = 0;
      pbVar12 = (byte *)(uVar5 + 1 + param_2 + uVar8);
      goto LAB_00aa1560;
    }
  }
  uVar7 = uVar9 - local_350;
  pbVar12 = (byte *)(param_2 + uVar8 + local_350);
  if (uVar15 == 0x2e) {
    uVar9 = ~local_350 + uVar9;
    pbVar14 = pbVar12 + 1;
    uVar5 = local_350;
    uVar8 = uVar9;
    if (local_350 != 0) {
joined_r0x00aa1600:
      do {
        uVar7 = uVar8;
        if (uVar7 < 8) goto LAB_00aa1668;
        uVar13 = uVar5 + 8;
        if ((0x2ff < uVar13) ||
           (uVar8 = *(long *)pbVar14 + 0xcfcfcfcfcfcfcfd0,
           ((*(long *)pbVar14 + 0x4646464646464646U | uVar8) & 0x8080808080808080) != 0))
        goto LAB_00aa166c;
        if (0x300 < uVar5) {
                    /* WARNING: Subroutine does not return */
          slice::index::slice_index_fail
                    (uVar5,0x300,0x300,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affbf8);
        }
        *(ulong *)((long)local_348 + uVar5) = uVar8;
        pbVar14 = pbVar14 + 8;
        uVar5 = uVar13;
        uVar8 = uVar7 - 8;
        local_350 = uVar13;
      } while( true );
    }
LAB_00aa151c:
    if (uVar9 == 0) {
      uVar5 = 0;
      uVar7 = 0;
    }
    else {
      pbVar12 = pbVar12 + uVar7;
      uVar7 = uVar9;
      do {
        if (*pbVar14 != 0x30) {
          uVar5 = 0;
          uVar8 = uVar7;
          goto joined_r0x00aa1600;
        }
        uVar7 = uVar7 - 1;
        pbVar14 = pbVar14 + 1;
      } while (uVar7 != 0);
      uVar5 = 0;
      pbVar14 = pbVar12;
    }
    goto LAB_00aa16e4;
  }
LAB_00aa1560:
  uVar5 = uVar5 + 1;
  local_350 = uVar5;
  if (uVar5 == 0) goto LAB_00aa16f4;
LAB_00aa1564:
  lVar17 = param_3 - uVar7;
  if (param_3 < uVar7) {
                    /* WARNING: Subroutine does not return */
    slice::index::slice_index_fail
              (0,lVar17,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affc10);
  }
  if (param_3 == uVar7) {
    lVar16 = 0;
  }
  else {
    lVar16 = 0;
    do {
      cVar3 = *(char *)(param_2 + -1 + lVar17);
      if (cVar3 != '.') {
        if (cVar3 != '0') break;
        lVar16 = lVar16 + 1;
      }
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  local_350 = uVar5 - lVar16;
  local_48 = local_48 + (int)lVar16 + (int)local_350;
  uVar9 = local_350;
  if (0x300 < local_350) {
    local_44 = 1;
    local_350 = 0x300;
    uVar9 = 0x300;
  }
  goto joined_r0x00aa15b4;
LAB_00aa1668:
  if (uVar7 != 0) {
LAB_00aa166c:
    uVar10 = *pbVar14 - 0x30;
    local_350 = uVar5;
    if (uVar10 < 10) {
      lVar16 = uVar7 - 1;
      lVar17 = 0;
      do {
        lVar18 = lVar17;
        if (uVar5 + lVar18 < 0x300) {
          *(char *)((long)local_348 + lVar18 + uVar5) = (char)uVar10;
        }
        if (lVar16 == lVar18) {
          uVar7 = 0;
          break;
        }
        uVar7 = uVar7 - 1;
        uVar10 = pbVar14[lVar18 + 1] - 0x30;
        lVar17 = lVar18 + 1;
      } while (uVar10 < 10);
      uVar5 = uVar5 + lVar18 + 1;
      pbVar14 = pbVar14 + lVar18 + 1;
      local_350 = uVar5;
    }
  }
LAB_00aa16e4:
  local_48 = (int)uVar7 - (int)uVar9;
  pbVar12 = pbVar14;
  if (uVar5 != 0) goto LAB_00aa1564;
LAB_00aa16f4:
  uVar9 = 0;
joined_r0x00aa15b4:
  uVar8 = uVar9;
  if ((uVar7 != 0) && (pbVar14 = pbVar12 + 1, (*pbVar12 | 0x20) == 0x65)) {
    lVar17 = uVar7 - 1;
    if (lVar17 == 0) {
      iVar11 = 0;
    }
    else {
      bVar2 = *pbVar14;
      if ((bVar2 == 0x2d) || (bVar2 == 0x2b)) {
        lVar17 = uVar7 - 2;
        if (lVar17 != 0) {
          pbVar14 = pbVar12 + 2;
          goto LAB_00aa1738;
        }
        iVar6 = 0;
      }
      else {
LAB_00aa1738:
        iVar6 = 0;
        iVar11 = 0;
        do {
          if (9 < *pbVar14 - 0x30) break;
          lVar17 = lVar17 + -1;
          iVar1 = iVar11 * 10 + (*pbVar14 - 0x30 & 0xff);
          iVar4 = iVar1;
          if (0xffff < iVar11) {
            iVar1 = iVar11;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          pbVar14 = pbVar14 + 1;
          iVar11 = iVar1;
        } while (lVar17 != 0);
      }
      iVar11 = -iVar6;
      if (bVar2 != 0x2d) {
        iVar11 = iVar6;
      }
    }
    local_48 = local_48 + iVar11;
  }
  if (uVar8 < 0x13) {
LAB_00aa179c:
    memset((void *)((long)local_348 + uVar8),0,0x13 - uVar8);
  }
  memcpy(param_1,&local_350,0x310);
  return;
}


// ===== 00aa1804  core::num::imp::dec2flt::parse::parse_number =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::num::imp::dec2flt::parse::parse_number */

void __rustcall
core::num::imp::dec2flt::parse::parse_number(long *param_1,byte *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  
  pbVar19 = param_2;
  uVar11 = param_3;
  if (param_3 < 8) {
    uVar9 = 0;
    if (param_3 != 0) goto LAB_00aa18b4;
  }
  else {
    uVar9 = 0;
    do {
      uVar13 = *(long *)pbVar19 + 0xcfcfcfcfcfcfcfd0;
      if (((*(long *)pbVar19 + 0x4646464646464646U | uVar13) & 0x8080808080808080) != 0)
      goto LAB_00aa18b4;
      uVar11 = uVar11 - 8;
      pbVar19 = pbVar19 + 8;
      uVar13 = uVar13 * 10 + (uVar13 >> 8);
      uVar9 = uVar9 * 100000000 +
              ((uVar13 & 0xff000000ff) * 0xf424000000064 +
               (uVar13 >> 0x10 & 0xff000000ff) * 0x271000000001 >> 0x20);
    } while (7 < uVar11);
    if (uVar11 != 0) {
LAB_00aa18b4:
      uVar13 = 0;
      do {
        uVar5 = pbVar19[uVar13] - 0x30;
        if (9 < uVar5) {
          pbVar17 = pbVar19 + uVar13;
          lVar10 = uVar11 - uVar13;
          if (pbVar19[uVar13] != 0x2e) {
            lVar12 = 0;
            uVar18 = uVar11 - uVar13;
            uVar13 = uVar13 + (param_3 - uVar11);
            goto joined_r0x00aa1aa0;
          }
          pbVar19 = pbVar17 + 1;
          uVar18 = ~uVar13 + uVar11;
          if (lVar10 < 9) goto LAB_00aa19ac;
          goto LAB_00aa1960;
        }
        uVar13 = uVar13 + 1;
        uVar9 = uVar9 * 10 + (ulong)(byte)uVar5;
      } while (uVar11 != uVar13);
    }
  }
  if (param_3 == 0) {
LAB_00aa1bc8:
    *(undefined1 *)((long)param_1 + 0x11) = 2;
    return;
  }
  lVar10 = 0;
  lVar14 = 0;
  lVar12 = 0;
  bVar7 = true;
  uVar13 = param_3;
  goto LAB_00aa18f8;
  while( true ) {
    uVar18 = uVar18 - 8;
    pbVar19 = pbVar19 + 8;
    uVar2 = uVar2 * 10 + (uVar2 >> 8);
    uVar9 = uVar9 * 100000000 +
            ((uVar2 & 0xff000000ff) * 0xf424000000064 +
             (uVar2 >> 0x10 & 0xff000000ff) * 0x271000000001 >> 0x20);
    if (uVar18 < 8) break;
LAB_00aa1960:
    uVar2 = *(long *)pbVar19 + 0xcfcfcfcfcfcfcfd0;
    if (((*(long *)pbVar19 + 0x4646464646464646U | uVar2) & 0x8080808080808080) != 0)
    goto LAB_00aa19b0;
  }
LAB_00aa19ac:
  pbVar17 = pbVar19;
  if (uVar18 != 0) {
LAB_00aa19b0:
    pbVar3 = pbVar19 + uVar18;
    do {
      bVar4 = *pbVar19;
      pbVar17 = pbVar19;
      if (9 < bVar4 - 0x30) break;
      uVar18 = uVar18 - 1;
      pbVar19 = pbVar19 + 1;
      uVar9 = uVar9 * 10 + (ulong)(byte)(bVar4 - 0x30);
      pbVar17 = pbVar3;
    } while (uVar18 != 0);
  }
  lVar12 = (uVar18 - uVar11) + uVar13 + 1;
  uVar13 = (~uVar13 - uVar18) + uVar13 + param_3;
joined_r0x00aa1aa0:
  if (uVar13 == 0) goto LAB_00aa1bc8;
  if (uVar18 == 0) {
    lVar14 = 0;
    bVar7 = true;
  }
  else if ((*pbVar17 | 0x20) == 0x65) {
    lVar15 = uVar18 - 1;
    if (lVar15 == 0) goto LAB_00aa1c28;
    pbVar19 = pbVar17 + 1;
    bVar4 = *pbVar19;
    if ((bVar4 == 0x2d) || (uVar5 = (uint)bVar4, bVar4 == 0x2b)) {
      lVar15 = uVar18 - 2;
      if (lVar15 == 0) goto LAB_00aa1c28;
      pbVar19 = pbVar17 + 2;
      uVar5 = (uint)*pbVar19;
    }
    if (9 < uVar5 - 0x30) {
      *(undefined1 *)((long)param_1 + 0x11) = 2;
      return;
    }
    lVar16 = 0;
    lVar14 = 0;
    do {
      if (9 < *pbVar19 - 0x30) break;
      lVar15 = lVar15 + -1;
      lVar1 = lVar14 * 10 + (ulong)(byte)(*pbVar19 - 0x30);
      lVar6 = lVar1;
      if (0xffff < lVar14) {
        lVar1 = lVar14;
        lVar6 = lVar16;
      }
      lVar16 = lVar6;
      lVar14 = lVar1;
      pbVar19 = pbVar19 + 1;
    } while (lVar15 != 0);
    lVar14 = -lVar16;
    if (bVar4 != 0x2d) {
      lVar14 = lVar16;
    }
    bVar7 = lVar15 == 0;
    lVar12 = lVar14 + lVar12;
  }
  else {
    bVar7 = false;
    lVar14 = 0;
  }
LAB_00aa18f8:
  if ((long)uVar13 < 0x14) {
    bVar8 = false;
  }
  else {
    if (param_3 == 0) {
code_r0x00aa1c58:
                    /* WARNING: Subroutine does not return */
      slice::index::slice_index_fail(1,0,0,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00affc40);
    }
    lVar15 = uVar13 - 0x13;
    uVar11 = param_3;
    pbVar19 = param_2;
    do {
      bVar4 = *pbVar19;
      if ((bVar4 != 0x2e) && (bVar4 != 0x30)) break;
      uVar11 = uVar11 - 1;
      pbVar19 = pbVar19 + 1;
      uVar5 = 0;
      if (0x2e < bVar4) {
        uVar5 = bVar4 - 0x2f;
      }
      lVar15 = lVar15 - (ulong)uVar5;
    } while (uVar11 != 0);
    if (0 < lVar15) {
      uVar9 = 0;
      lVar12 = -param_3;
      do {
        lVar16 = lVar12;
        bVar4 = *param_2;
        lVar12 = lVar16;
        if (9 < bVar4 - 0x30) goto joined_r0x00aa1b4c;
        lVar12 = lVar16 + 1;
        param_2 = param_2 + 1;
        uVar9 = uVar9 * 10 + (ulong)(byte)(bVar4 - 0x30);
      } while (uVar9 < 1000000000000000000 && lVar16 != -1);
      if (uVar9 < 1000000000000000000) {
        if (lVar16 == -1) goto code_r0x00aa1c58;
joined_r0x00aa1b4c:
        lVar12 = -1 - lVar12;
        lVar16 = lVar12;
        if (lVar12 == 0) {
          lVar10 = 0;
        }
        else {
          do {
            param_2 = param_2 + 1;
            if (9 < *param_2 - 0x30) {
              lVar10 = lVar16 - lVar12;
              goto LAB_00aa1c04;
            }
            uVar9 = uVar9 * 10 + (ulong)(byte)(*param_2 - 0x30);
            lVar10 = lVar16 + -1;
            bVar8 = lVar16 != 1;
            lVar16 = lVar10;
          } while (uVar9 < 1000000000000000000 && bVar8);
          lVar10 = lVar10 - lVar12;
        }
      }
      else {
        lVar10 = -lVar12 - lVar10;
      }
LAB_00aa1c04:
      lVar12 = lVar10 + lVar14;
    }
    bVar8 = 0 < lVar15;
  }
  if (bVar7) {
    *param_1 = lVar12;
    param_1[1] = uVar9;
    *(undefined1 *)(param_1 + 2) = 0;
    *(bool *)((long)param_1 + 0x11) = bVar8;
    return;
  }
LAB_00aa1c28:
  *(undefined1 *)((long)param_1 + 0x11) = 2;
  return;
}


