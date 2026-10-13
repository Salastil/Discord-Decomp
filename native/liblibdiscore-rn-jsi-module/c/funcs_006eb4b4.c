// ===== 006eb4b4  FUN_006eb4b4 =====

undefined8 FUN_006eb4b4(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x28) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  sqlite3_blob_close(uVar2);
  *(undefined1 *)(param_1 + 0x28) = uVar1;
  return 0;
}


// ===== 006eb4ec  FUN_006eb4ec =====

undefined1 * FUN_006eb4ec(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  
  if (param_1 == (byte *)0x0) {
    return (undefined1 *)0x0;
  }
  pbVar2 = &DAT_002bc818;
  pbVar4 = param_1;
  do {
    uVar5 = (uint)*pbVar4;
    if (uVar5 == *pbVar2) {
      if (uVar5 == 0) goto LAB_006eb5ac;
    }
    else if ((&DAT_002c78ae)[uVar5] != (&DAT_002c78ae)[(uint)*pbVar2]) break;
    pbVar4 = pbVar4 + 1;
    pbVar2 = pbVar2 + 1;
  } while( true );
  pcVar3 = "p";
  pbVar2 = param_1;
  do {
    uVar5 = (uint)*pbVar2;
    if (uVar5 == (byte)*pcVar3) {
      if (uVar5 == 0) goto LAB_006eb5ac;
    }
    else if ((&DAT_002c78ae)[uVar5] != (&DAT_002c78ae)[(uint)(byte)*pcVar3]) {
      pcVar3 = "r";
      do {
        bVar1 = *param_1;
        if (bVar1 == *pcVar3) {
          if (bVar1 == 0) {
LAB_006eb5ac:
            return &DAT_00000001;
          }
        }
        else if ((&DAT_002c78ae)[bVar1] != (&DAT_002c78ae)[(byte)*pcVar3]) {
          return (undefined1 *)0x0;
        }
        param_1 = param_1 + 1;
        pcVar3 = (char *)((byte *)pcVar3 + 1);
      } while( true );
    }
    pbVar2 = pbVar2 + 1;
    pcVar3 = (char *)((byte *)pcVar3 + 1);
  } while( true );
}


// ===== 006eb5b8  FUN_006eb5b8 =====

ulong FUN_006eb5b8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *in_x4;
  uint uVar3;
  
  uVar1 = FUN_006e84cc(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),
                       *(undefined8 *)(param_1 + 0x38),in_x4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (*in_x4 != 0) {
    lVar2 = sqlite3_mprintf("In RTree %s.%s:\n%z",*(undefined8 *)(param_1 + 0x30),
                            *(undefined8 *)(param_1 + 0x38));
    *in_x4 = lVar2;
    uVar3 = 7;
    if (lVar2 != 0) {
      uVar3 = 0;
    }
    return (ulong)uVar3;
  }
  return 0;
}


// ===== 006eb630  FUN_006eb630 =====

/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint FUN_006eb630(long param_1,long param_2,uint param_3,long param_4,undefined8 *param_5,
                 undefined8 *param_6,int param_7)

{
  uint uVar1;
  void *__dest;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  size_t sVar11;
  size_t sVar12;
  undefined8 *__s;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  code **ppcVar16;
  ulong uVar17;
  char *pcVar18;
  ulong uVar19;
  code **local_90;
  undefined8 local_68;
  
  if (param_3 - 0x68 < 0xffffff9e) {
    lVar15 = 0x18;
    if ((int)param_3 < 6) {
      lVar15 = 0x10;
    }
    uVar10 = sqlite3_mprintf(&DAT_002ad0ce,*(undefined8 *)(&DAT_00ad4818 + lVar15));
    *param_6 = uVar10;
    return 1;
  }
  uVar19 = (ulong)param_3;
  sqlite3_vtab_config(param_1,1,1);
  sqlite3_vtab_config(param_1,2);
  sVar11 = strlen(*(char **)(param_4 + 8));
  sVar12 = strlen(*(char **)(param_4 + 0x10));
  iVar7 = sqlite3_initialize();
  if (iVar7 != 0) {
    return 7;
  }
  iVar7 = (int)sVar12;
  lVar15 = (long)(int)sVar11 + (long)(iVar7 << 1);
  __s = (undefined8 *)FUN_005827b0(lVar15 + 0x3d0);
  if (__s == (undefined8 *)0x0) {
    return 7;
  }
  memset(__s,0,lVar15 + 0x3d0);
  puVar14 = __s + 0x79;
  puVar13 = (undefined8 *)&DAT_00b0d538;
  __dest = (void *)((long)puVar14 + ((long)((sVar11 << 0x20) + 0x100000000) >> 0x20));
  *(undefined4 *)(__s + 9) = 1;
  *(bool *)((long)__s + 0x26) = param_2 != 0;
  *__s = &DAT_00b0d630;
  __s[6] = puVar14;
  __s[7] = __dest;
  __s[8] = (long)__dest + (long)(iVar7 + 1);
  memcpy(puVar14,*(void **)(param_4 + 8),(long)(int)sVar11);
  sVar11 = (size_t)iVar7;
  memcpy(__dest,*(void **)(param_4 + 0x10),sVar11);
  memcpy((void *)__s[8],*(void **)(param_4 + 0x10),sVar11);
  lVar15 = __s[8];
  *(undefined4 *)(lVar15 + sVar11) = 0x646f6e5f;
  *(undefined2 *)((undefined4 *)(lVar15 + sVar11) + 1) = 0x65;
  iVar7 = sqlite3_initialize();
  if (iVar7 == 0) {
    puVar13 = (undefined8 *)FUN_005827b0(0x20);
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)&DAT_00b0d538;
    }
    else {
      if (param_1 == 0) {
        uVar8 = 1000000000;
      }
      else {
        uVar8 = *(undefined4 *)(param_1 + 0x88);
      }
      *puVar13 = 0;
      puVar13[1] = 0;
      *(undefined4 *)(puVar13 + 2) = 0;
      *(undefined4 *)((long)puVar13 + 0x14) = uVar8;
      *(undefined4 *)(puVar13 + 3) = 0;
      *(undefined2 *)((long)puVar13 + 0x1c) = 0;
    }
  }
  uVar10 = *(undefined8 *)(param_4 + 0x18);
  uVar8 = FUN_0059a0fc(uVar10,&local_68);
  sqlite3_str_appendf(puVar13,"CREATE TABLE x(%.*s INT",uVar8,uVar10);
  bVar6 = true;
  uVar17 = 4;
  do {
    while( true ) {
      pcVar18 = *(char **)(param_4 + uVar17 * 8);
      if (*pcVar18 == '+') break;
      if (*(char *)((long)__s + 0x29) != '\0') goto LAB_006eb8ec;
      *(char *)((long)__s + 0x25) = *(char *)((long)__s + 0x25) + '\x01';
      iVar7 = *(int *)(&DAT_002cf204 + (ulong)(param_2 != 0) * 4);
      uVar8 = FUN_0059a0fc(pcVar18,&local_68);
      sqlite3_str_appendf(puVar13,&DAT_002cf204 + iVar7,uVar8,pcVar18);
      uVar17 = uVar17 + 1;
      bVar6 = uVar17 < uVar19;
      if (uVar19 == uVar17) goto LAB_006eb8ec;
    }
    *(char *)((long)__s + 0x29) = *(char *)((long)__s + 0x29) + '\x01';
    uVar8 = FUN_0059a0fc(pcVar18 + 1,&local_68);
    sqlite3_str_appendf(puVar13,",%.*s",uVar8,pcVar18 + 1);
    uVar17 = uVar17 + 1;
    bVar6 = uVar17 < uVar19;
  } while (uVar19 != uVar17);
LAB_006eb8ec:
  sqlite3_str_appendf(puVar13,&DAT_002b87bc);
  if (puVar13 != (undefined8 *)&DAT_00b0d538) {
    if (((puVar13[1] == 0) ||
        (*(undefined1 *)(puVar13[1] + (ulong)*(uint *)(puVar13 + 3)) = 0,
        *(int *)((long)puVar13 + 0x14) == 0)) || ((*(byte *)((long)puVar13 + 0x1d) >> 2 & 1) != 0))
    {
      puVar14 = (undefined8 *)puVar13[1];
    }
    else {
      puVar14 = (undefined8 *)FUN_005a7ad8(puVar13);
    }
    ppcVar16 = &DAT_00b0da18;
    if (DAT_00b0d9f0 == 0) {
LAB_006eb9bc:
      (**ppcVar16)(puVar13);
    }
    else {
      if (DAT_00b103d8 != (undefined8 *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar7 = (*DAT_00b0da28)(puVar13);
      DAT_00b105b8 = DAT_00b105b8 - iVar7;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(puVar13);
      if (DAT_00b103d8 != (undefined8 *)0x0) {
        ppcVar16 = (code **)&DAT_00b0da80;
        puVar13 = DAT_00b103d8;
        goto LAB_006eb9bc;
      }
    }
    if (puVar14 != (undefined8 *)0x0) {
      if (bVar6) {
        uVar10 = sqlite3_mprintf(&DAT_002ad0ce,"Auxiliary rtree columns must be last");
        uVar9 = 1;
LAB_006eba20:
        *param_6 = uVar10;
        ppcVar16 = &DAT_00b0da18;
        if (DAT_00b0d9f0 == 0) goto LAB_006eba8c;
LAB_006eba38:
        if (DAT_00b103d8 != (undefined8 *)0x0) {
          (*DAT_00b0da70)();
        }
        iVar7 = (*DAT_00b0da28)(puVar14);
        DAT_00b105b8 = DAT_00b105b8 - iVar7;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(puVar14);
        if (DAT_00b103d8 != (undefined8 *)0x0) {
          ppcVar16 = (code **)&DAT_00b0da80;
          puVar14 = DAT_00b103d8;
          goto LAB_006eba8c;
        }
      }
      else {
        uVar9 = sqlite3_declare_vtab(param_1,puVar14);
        if (uVar9 != 0) {
          uVar10 = sqlite3_errmsg(param_1);
          uVar10 = sqlite3_mprintf(&DAT_002ad0ce,uVar10);
          goto LAB_006eba20;
        }
        ppcVar16 = &DAT_00b0da18;
        if (DAT_00b0d9f0 != 0) goto LAB_006eba38;
LAB_006eba8c:
        (**ppcVar16)(puVar14);
      }
      if (uVar9 != 0) goto LAB_006ebb84;
      bVar4 = *(byte *)((long)__s + 0x25);
      *(byte *)((long)__s + 0x24) = bVar4 >> 1;
      if (bVar4 < 2) {
        lVar15 = 2;
LAB_006ebb64:
        uVar10 = sqlite3_mprintf(&DAT_002ad0ce,*(undefined8 *)(&DAT_00ad4818 + lVar15 * 8));
        uVar9 = 0;
      }
      else {
        if (10 < bVar4) {
          lVar15 = 3;
          goto LAB_006ebb64;
        }
        if ((bVar4 & 1) != 0) {
          lVar15 = 1;
          goto LAB_006ebb64;
        }
        *(byte *)((long)__s + 0x27) = bVar4 * '\x04' + '\b';
        if (param_7 == 0) {
          puVar14 = (undefined8 *)
                    sqlite3_mprintf("SELECT length(data) FROM \'%q\'.\'%q_node\' WHERE nodeno = 1",
                                    __s[6],__s[7]);
          if (puVar14 != (undefined8 *)0x0) {
            local_68 = 0;
            uVar9 = FUN_00598a9c(param_1,puVar14,0xffffffff,0x80,0,&local_68,0);
            if (uVar9 == 0) {
              iVar7 = sqlite3_step(local_68);
              if (iVar7 == 100) {
                uVar8 = sqlite3_column_int(local_68,0);
                *(undefined4 *)(__s + 4) = uVar8;
              }
              uVar9 = sqlite3_finalize(local_68);
              if (uVar9 == 0) {
                if (*(int *)(__s + 4) < 0x1c0) {
                  uVar10 = sqlite3_mprintf("undersize RTree blobs in \"%q_node\"",__s[7]);
                  uVar9 = 0x10b;
                  *param_6 = uVar10;
                }
                else {
                  uVar9 = 0;
                }
                goto LAB_006ebc50;
              }
            }
            goto LAB_006ebc30;
          }
LAB_006ebc2c:
          uVar9 = 7;
LAB_006ebc30:
          uVar10 = sqlite3_errmsg(param_1);
          uVar10 = sqlite3_mprintf(&DAT_002ad0ce,uVar10);
          *param_6 = uVar10;
          if (puVar14 == (undefined8 *)0x0) goto LAB_006ebb84;
        }
        else {
          puVar14 = (undefined8 *)sqlite3_mprintf("PRAGMA %Q.page_size",__s[6]);
          if (puVar14 == (undefined8 *)0x0) goto LAB_006ebc2c;
          local_68 = 0;
          uVar9 = FUN_00598a9c(param_1,puVar14,0xffffffff,0x80,0,&local_68,0);
          if (uVar9 != 0) goto LAB_006ebc30;
          iVar7 = sqlite3_step(local_68);
          if (iVar7 == 100) {
            iVar7 = sqlite3_column_int(local_68,0);
            iVar7 = iVar7 + -0x40;
          }
          else {
            iVar7 = -0x40;
          }
          uVar9 = sqlite3_finalize(local_68);
          if (uVar9 != 0) goto LAB_006ebc30;
          iVar5 = (uint)*(byte *)((long)__s + 0x27) * 0x33 + 4;
          if (iVar7 <= iVar5) {
            iVar5 = iVar7;
          }
          *(int *)(__s + 4) = iVar5;
        }
LAB_006ebc50:
        ppcVar16 = &DAT_00b0da18;
        if (DAT_00b0d9f0 == 0) {
LAB_006ebcb0:
          (**ppcVar16)(puVar14);
        }
        else {
          if (DAT_00b103d8 != (undefined8 *)0x0) {
            (*DAT_00b0da70)();
          }
          iVar7 = (*DAT_00b0da28)(puVar14);
          DAT_00b105b8 = DAT_00b105b8 - iVar7;
          DAT_00b10600 = DAT_00b10600 + -1;
          (*DAT_00b0da18)(puVar14);
          if (DAT_00b103d8 != (undefined8 *)0x0) {
            ppcVar16 = (code **)&DAT_00b0da80;
            puVar14 = DAT_00b103d8;
            goto LAB_006ebcb0;
          }
        }
        if (uVar9 != 0) goto LAB_006ebb84;
        uVar10 = *(undefined8 *)(param_4 + 8);
        uVar2 = *(undefined8 *)(param_4 + 0x10);
        __s[3] = param_1;
        if (param_7 != 0) {
          iVar7 = sqlite3_initialize();
          puVar14 = (undefined8 *)&DAT_00b0d538;
          if (iVar7 == 0) {
            puVar14 = (undefined8 *)FUN_005827b0(0x20);
            if (puVar14 == (undefined8 *)0x0) {
              puVar14 = (undefined8 *)&DAT_00b0d538;
            }
            else {
              if (param_1 == 0) {
                uVar8 = 1000000000;
              }
              else {
                uVar8 = *(undefined4 *)(param_1 + 0x88);
              }
              *puVar14 = 0;
              puVar14[1] = 0;
              *(undefined4 *)(puVar14 + 2) = 0;
              *(undefined4 *)((long)puVar14 + 0x14) = uVar8;
              *(undefined4 *)(puVar14 + 3) = 0;
              *(undefined2 *)((long)puVar14 + 0x1c) = 0;
            }
          }
          sqlite3_str_appendf(puVar14,
                              "CREATE TABLE \"%w\".\"%w_rowid\"(rowid INTEGER PRIMARY KEY,nodeno",
                              uVar10,uVar2);
          if (*(char *)((long)__s + 0x29) != '\0') {
            uVar9 = 0;
            do {
              sqlite3_str_appendf(puVar14,&DAT_002bba6f,uVar9);
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(byte *)((long)__s + 0x29));
          }
          sqlite3_str_appendf(puVar14,
                              ");CREATE TABLE \"%w\".\"%w_node\"(nodeno INTEGER PRIMARY KEY,data);",
                              uVar10,uVar2);
          sqlite3_str_appendf(puVar14,
                              "CREATE TABLE \"%w\".\"%w_parent\"(nodeno INTEGER PRIMARY KEY,parentnode);"
                              ,uVar10,uVar2);
          sqlite3_str_appendf(puVar14,"INSERT INTO \"%w\".\"%w_node\"VALUES(1,zeroblob(%d))",uVar10,
                              uVar2,*(undefined4 *)(__s + 4));
          if (puVar14 != (undefined8 *)&DAT_00b0d538) {
            if (((puVar14[1] == 0) ||
                (*(undefined1 *)(puVar14[1] + (ulong)*(uint *)(puVar14 + 3)) = 0,
                *(int *)((long)puVar14 + 0x14) == 0)) ||
               ((*(byte *)((long)puVar14 + 0x1d) >> 2 & 1) != 0)) {
              puVar13 = (undefined8 *)puVar14[1];
            }
            else {
              puVar13 = (undefined8 *)FUN_005a7ad8(puVar14);
            }
            ppcVar16 = &DAT_00b0da18;
            if (DAT_00b0d9f0 == 0) {
LAB_006ebee0:
              (**ppcVar16)(puVar14);
            }
            else {
              if (DAT_00b103d8 != (undefined8 *)0x0) {
                (*DAT_00b0da70)();
              }
              iVar7 = (*DAT_00b0da28)(puVar14);
              DAT_00b105b8 = DAT_00b105b8 - iVar7;
              DAT_00b10600 = DAT_00b10600 + -1;
              (*DAT_00b0da18)(puVar14);
              if (DAT_00b103d8 != (undefined8 *)0x0) {
                ppcVar16 = (code **)&DAT_00b0da80;
                puVar14 = DAT_00b103d8;
                goto LAB_006ebee0;
              }
            }
            if (puVar13 != (undefined8 *)0x0) {
              uVar9 = sqlite3_exec(param_1,puVar13,0,0,0);
              ppcVar16 = &DAT_00b0da18;
              if (DAT_00b0d9f0 == 0) {
LAB_006ebf6c:
                (**ppcVar16)(puVar13);
              }
              else {
                if (DAT_00b103d8 != (undefined8 *)0x0) {
                  (*DAT_00b0da70)();
                }
                iVar7 = (*DAT_00b0da28)(puVar13);
                DAT_00b105b8 = DAT_00b105b8 - iVar7;
                DAT_00b10600 = DAT_00b10600 + -1;
                (*DAT_00b0da18)(puVar13);
                if (DAT_00b103d8 != (undefined8 *)0x0) {
                  ppcVar16 = (code **)&DAT_00b0da80;
                  puVar13 = DAT_00b103d8;
                  goto LAB_006ebf6c;
                }
              }
              if (uVar9 == 0) goto LAB_006ebf7c;
              goto LAB_006ec9c8;
            }
          }
          goto LAB_006ec9c4;
        }
LAB_006ebf7c:
        uVar9 = sqlite3_table_column_metadata(param_1,__s[6],"s",0,0,0,0,0,0);
        if (uVar9 == 0) {
          puVar14 = (undefined8 *)
                    sqlite3_mprintf("SELECT stat FROM %Q.sqlite_stat1 WHERE tbl = \'%q_rowid\'",
                                    __s[6],__s[7]);
          if (puVar14 != (undefined8 *)0x0) {
            uVar9 = FUN_00598a9c(param_1,puVar14,0xffffffff,0x80,0,&local_68,0);
            if (uVar9 == 0) {
              iVar7 = sqlite3_step(local_68);
              if (iVar7 == 100) {
                lVar15 = sqlite3_column_int64(local_68,0);
              }
              else {
                lVar15 = 100;
              }
              uVar9 = sqlite3_finalize(local_68);
            }
            else {
              lVar15 = 100;
            }
            ppcVar16 = &DAT_00b0da18;
            if (DAT_00b0d9f0 == 0) {
LAB_006ec0c0:
              (**ppcVar16)(puVar14);
            }
            else {
              if (DAT_00b103d8 != (undefined8 *)0x0) {
                (*DAT_00b0da70)();
              }
              iVar7 = (*DAT_00b0da28)(puVar14);
              DAT_00b105b8 = DAT_00b105b8 - iVar7;
              DAT_00b10600 = DAT_00b10600 + -1;
              (*DAT_00b0da18)(puVar14);
              if (DAT_00b103d8 != (undefined8 *)0x0) {
                ppcVar16 = (code **)&DAT_00b0da80;
                puVar14 = DAT_00b103d8;
                goto LAB_006ec0c0;
              }
            }
            if (lVar15 < 0x65) {
              lVar15 = 100;
            }
            __s[10] = lVar15;
            if (uVar9 == 0) goto LAB_006ec0ec;
            goto LAB_006ec1ac;
          }
          uVar9 = 7;
          __s[10] = 100;
        }
        else {
          __s[10] = 0x100000;
          if (uVar9 == 1) {
LAB_006ec0ec:
            puVar14 = (undefined8 *)
                      sqlite3_mprintf("INSERT OR REPLACE INTO \'%q\'.\'%q_node\' VALUES(?1, ?2)",
                                      uVar10,uVar2);
            if (puVar14 == (undefined8 *)0x0) goto LAB_006ec9c4;
            uVar9 = FUN_00598a9c(param_1,puVar14,0xffffffff,0x85,0,__s + 0xf,0);
            ppcVar16 = &DAT_00b0da18;
            if (DAT_00b0d9f0 == 0) {
LAB_006ec194:
              (**ppcVar16)(puVar14);
            }
            else {
              if (DAT_00b103d8 != (undefined8 *)0x0) {
                (*DAT_00b0da70)();
              }
              iVar7 = (*DAT_00b0da28)(puVar14);
              DAT_00b105b8 = DAT_00b105b8 - iVar7;
              DAT_00b10600 = DAT_00b10600 + -1;
              (*DAT_00b0da18)(puVar14);
              if (DAT_00b103d8 != (undefined8 *)0x0) {
                ppcVar16 = (code **)&DAT_00b0da80;
                puVar14 = DAT_00b103d8;
                goto LAB_006ec194;
              }
            }
            if (uVar9 == 0) {
              puVar14 = (undefined8 *)
                        sqlite3_mprintf("DELETE FROM \'%q\'.\'%q_node\' WHERE nodeno = ?1",uVar10,
                                        uVar2);
              if (puVar14 == (undefined8 *)0x0) goto LAB_006ec9c4;
              uVar9 = FUN_00598a9c(param_1,puVar14,0xffffffff,0x85,0,__s + 0x10,0);
              ppcVar16 = &DAT_00b0da18;
              if (DAT_00b0d9f0 == 0) {
LAB_006ec2bc:
                (**ppcVar16)(puVar14);
              }
              else {
                if (DAT_00b103d8 != (undefined8 *)0x0) {
                  (*DAT_00b0da70)();
                }
                iVar7 = (*DAT_00b0da28)(puVar14);
                DAT_00b105b8 = DAT_00b105b8 - iVar7;
                DAT_00b10600 = DAT_00b10600 + -1;
                (*DAT_00b0da18)(puVar14);
                if (DAT_00b103d8 != (undefined8 *)0x0) {
                  ppcVar16 = (code **)&DAT_00b0da80;
                  puVar14 = DAT_00b103d8;
                  goto LAB_006ec2bc;
                }
              }
              if (uVar9 == 0) {
                puVar14 = (undefined8 *)
                          sqlite3_mprintf("SELECT nodeno FROM \'%q\'.\'%q_rowid\' WHERE rowid = ?1",
                                          uVar10,uVar2);
                if (puVar14 == (undefined8 *)0x0) goto LAB_006ec9c4;
                uVar9 = FUN_00598a9c(param_1,puVar14,0xffffffff,0x85,0,__s + 0x11,0);
                ppcVar16 = &DAT_00b0da18;
                if (DAT_00b0d9f0 == 0) {
LAB_006ec37c:
                  (**ppcVar16)(puVar14);
                }
                else {
                  if (DAT_00b103d8 != (undefined8 *)0x0) {
                    (*DAT_00b0da70)();
                  }
                  iVar7 = (*DAT_00b0da28)(puVar14);
                  DAT_00b105b8 = DAT_00b105b8 - iVar7;
                  DAT_00b10600 = DAT_00b10600 + -1;
                  (*DAT_00b0da18)(puVar14);
                  if (DAT_00b103d8 != (undefined8 *)0x0) {
                    ppcVar16 = (code **)&DAT_00b0da80;
                    puVar14 = DAT_00b103d8;
                    goto LAB_006ec37c;
                  }
                }
                if (uVar9 == 0) {
                  pcVar18 = "INSERT OR REPLACE INTO \'%q\'.\'%q_rowid\' VALUES(?1, ?2)";
                  if (*(char *)((long)__s + 0x29) != '\0') {
                    pcVar18 = 
                    "INSERT INTO\"%w\".\"%w_rowid\"(rowid,nodeno)VALUES(?1,?2)ON CONFLICT(rowid)DO UPDATE SET nodeno=excluded.nodeno"
                    ;
                  }
                  puVar14 = (undefined8 *)sqlite3_mprintf(pcVar18,uVar10,uVar2);
                  if (puVar14 == (undefined8 *)0x0) goto LAB_006ec9c4;
                  uVar9 = FUN_00598a9c(param_1,puVar14,0xffffffff,0x85,0,__s + 0x12,0);
                  ppcVar16 = &DAT_00b0da18;
                  if (DAT_00b0d9f0 == 0) {
LAB_006ec450:
                    (**ppcVar16)(puVar14);
                  }
                  else {
                    if (DAT_00b103d8 != (undefined8 *)0x0) {
                      (*DAT_00b0da70)();
                    }
                    iVar7 = (*DAT_00b0da28)(puVar14);
                    DAT_00b105b8 = DAT_00b105b8 - iVar7;
                    DAT_00b10600 = DAT_00b10600 + -1;
                    (*DAT_00b0da18)(puVar14);
                    if (DAT_00b103d8 != (undefined8 *)0x0) {
                      ppcVar16 = (code **)&DAT_00b0da80;
                      puVar14 = DAT_00b103d8;
                      goto LAB_006ec450;
                    }
                  }
                  if (uVar9 == 0) {
                    puVar14 = (undefined8 *)
                              sqlite3_mprintf("DELETE FROM \'%q\'.\'%q_rowid\' WHERE rowid = ?1",
                                              uVar10,uVar2);
                    if (puVar14 == (undefined8 *)0x0) goto LAB_006ec9c4;
                    uVar9 = FUN_00598a9c(param_1,puVar14,0xffffffff,0x85,0,__s + 0x13,0);
                    ppcVar16 = &DAT_00b0da18;
                    if (DAT_00b0d9f0 == 0) {
LAB_006ec510:
                      (**ppcVar16)(puVar14);
                    }
                    else {
                      if (DAT_00b103d8 != (undefined8 *)0x0) {
                        (*DAT_00b0da70)();
                      }
                      iVar7 = (*DAT_00b0da28)(puVar14);
                      DAT_00b105b8 = DAT_00b105b8 - iVar7;
                      DAT_00b10600 = DAT_00b10600 + -1;
                      (*DAT_00b0da18)(puVar14);
                      if (DAT_00b103d8 != (undefined8 *)0x0) {
                        ppcVar16 = (code **)&DAT_00b0da80;
                        puVar14 = DAT_00b103d8;
                        goto LAB_006ec510;
                      }
                    }
                    if (uVar9 == 0) {
                      puVar14 = (undefined8 *)
                                sqlite3_mprintf("SELECT parentnode FROM \'%q\'.\'%q_parent\' WHERE nodeno = ?1"
                                                ,uVar10,uVar2);
                      if (puVar14 == (undefined8 *)0x0) goto LAB_006ec9c4;
                      uVar9 = FUN_00598a9c(param_1,puVar14,0xffffffff,0x85,0,__s + 0x14,0);
                      ppcVar16 = &DAT_00b0da18;
                      if (DAT_00b0d9f0 == 0) {
LAB_006ec5d0:
                        (**ppcVar16)(puVar14);
                      }
                      else {
                        if (DAT_00b103d8 != (undefined8 *)0x0) {
                          (*DAT_00b0da70)();
                        }
                        iVar7 = (*DAT_00b0da28)(puVar14);
                        DAT_00b105b8 = DAT_00b105b8 - iVar7;
                        DAT_00b10600 = DAT_00b10600 + -1;
                        (*DAT_00b0da18)(puVar14);
                        if (DAT_00b103d8 != (undefined8 *)0x0) {
                          ppcVar16 = (code **)&DAT_00b0da80;
                          puVar14 = DAT_00b103d8;
                          goto LAB_006ec5d0;
                        }
                      }
                      if (uVar9 == 0) {
                        puVar14 = (undefined8 *)
                                  sqlite3_mprintf("INSERT OR REPLACE INTO \'%q\'.\'%q_parent\' VALUES(?1, ?2)"
                                                  ,uVar10,uVar2);
                        if (puVar14 == (undefined8 *)0x0) goto LAB_006ec9c4;
                        uVar9 = FUN_00598a9c(param_1,puVar14,0xffffffff,0x85,0,__s + 0x15,0);
                        ppcVar16 = &DAT_00b0da18;
                        if (DAT_00b0d9f0 == 0) {
LAB_006ec690:
                          (**ppcVar16)(puVar14);
                        }
                        else {
                          if (DAT_00b103d8 != (undefined8 *)0x0) {
                            (*DAT_00b0da70)();
                          }
                          iVar7 = (*DAT_00b0da28)(puVar14);
                          DAT_00b105b8 = DAT_00b105b8 - iVar7;
                          DAT_00b10600 = DAT_00b10600 + -1;
                          (*DAT_00b0da18)(puVar14);
                          if (DAT_00b103d8 != (undefined8 *)0x0) {
                            ppcVar16 = (code **)&DAT_00b0da80;
                            puVar14 = DAT_00b103d8;
                            goto LAB_006ec690;
                          }
                        }
                        if (uVar9 == 0) {
                          puVar14 = (undefined8 *)
                                    sqlite3_mprintf(
                                                  "DELETE FROM \'%q\'.\'%q_parent\' WHERE nodeno = ?1"
                                                  ,uVar10,uVar2);
                          if (puVar14 == (undefined8 *)0x0) goto LAB_006ec9c4;
                          uVar9 = FUN_00598a9c(param_1,puVar14,0xffffffff,0x85,0,__s + 0x16,0);
                          ppcVar16 = &DAT_00b0da18;
                          if (DAT_00b0d9f0 != 0) {
                            if (DAT_00b103d8 != (undefined8 *)0x0) {
                              (*DAT_00b0da70)();
                            }
                            iVar7 = (*DAT_00b0da28)(puVar14);
                            DAT_00b105b8 = DAT_00b105b8 - iVar7;
                            DAT_00b10600 = DAT_00b10600 + -1;
                            (*DAT_00b0da18)(puVar14);
                            if (DAT_00b103d8 == (undefined8 *)0x0) goto LAB_006ec1ac;
                            ppcVar16 = (code **)&DAT_00b0da80;
                            puVar14 = DAT_00b103d8;
                          }
                          (**ppcVar16)(puVar14);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_006ec1ac:
          if ((*(char *)((long)__s + 0x29) == '\0') || (uVar9 == 7)) {
LAB_006ec9ac:
            if (uVar9 == 0) {
              *param_5 = __s;
              return 0;
            }
          }
          else {
            lVar15 = sqlite3_mprintf("SELECT * FROM \"%w\".\"%w_rowid\" WHERE rowid=?1",uVar10,uVar2
                                    );
            __s[0xc] = lVar15;
            if (lVar15 != 0) {
              iVar7 = sqlite3_initialize();
              puVar14 = (undefined8 *)&DAT_00b0d538;
              if (iVar7 == 0) {
                puVar14 = (undefined8 *)FUN_005827b0(0x20);
                if (puVar14 == (undefined8 *)0x0) {
                  puVar14 = (undefined8 *)&DAT_00b0d538;
                }
                else {
                  if (param_1 == 0) {
                    uVar8 = 1000000000;
                  }
                  else {
                    uVar8 = *(undefined4 *)(param_1 + 0x88);
                  }
                  *puVar14 = 0;
                  puVar14[1] = 0;
                  *(undefined4 *)(puVar14 + 2) = 0;
                  *(undefined4 *)((long)puVar14 + 0x14) = uVar8;
                  *(undefined4 *)(puVar14 + 3) = 0;
                  *(undefined2 *)((long)puVar14 + 0x1c) = 0;
                }
              }
              sqlite3_str_appendf(puVar14,"UPDATE \"%w\".\"%w_rowid\"SET ",uVar10,uVar2);
              if ((*(char *)((long)__s + 0x29) != '\0') &&
                 (sqlite3_str_appendf(puVar14,"a%d=?%d",0,2), 1 < *(byte *)((long)__s + 0x29))) {
                uVar9 = 1;
                do {
                  uVar3 = *(uint *)(puVar14 + 3);
                  uVar1 = uVar3 + 1;
                  if (uVar1 < *(uint *)(puVar14 + 2)) {
                    *(uint *)(puVar14 + 3) = uVar1;
                    *(undefined1 *)(puVar14[1] + (ulong)uVar3) = 0x2c;
                  }
                  else {
                    FUN_00586adc(puVar14,&DAT_002aaac4,1);
                  }
                  sqlite3_str_appendf(puVar14,"a%d=?%d",uVar9,uVar9 + 2);
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *(byte *)((long)__s + 0x29));
              }
              sqlite3_str_appendf(puVar14," WHERE rowid=?1");
              if (puVar14 != (undefined8 *)&DAT_00b0d538) {
                if (((puVar14[1] == 0) ||
                    (*(undefined1 *)(puVar14[1] + (ulong)*(uint *)(puVar14 + 3)) = 0,
                    *(int *)((long)puVar14 + 0x14) == 0)) ||
                   ((*(byte *)((long)puVar14 + 0x1d) >> 2 & 1) != 0)) {
                  puVar13 = (undefined8 *)puVar14[1];
                }
                else {
                  puVar13 = (undefined8 *)FUN_005a7ad8(puVar14);
                }
                ppcVar16 = &DAT_00b0da18;
                if (DAT_00b0d9f0 == 0) {
LAB_006ec8f8:
                  (**ppcVar16)(puVar14);
                }
                else {
                  if (DAT_00b103d8 != (undefined8 *)0x0) {
                    (*DAT_00b0da70)();
                  }
                  iVar7 = (*DAT_00b0da28)(puVar14);
                  DAT_00b105b8 = DAT_00b105b8 - iVar7;
                  DAT_00b10600 = DAT_00b10600 + -1;
                  (*DAT_00b0da18)(puVar14);
                  if (DAT_00b103d8 != (undefined8 *)0x0) {
                    ppcVar16 = (code **)&DAT_00b0da80;
                    puVar14 = DAT_00b103d8;
                    goto LAB_006ec8f8;
                  }
                }
                if (puVar13 != (undefined8 *)0x0) {
                  uVar9 = FUN_00598a9c(param_1,puVar13,0xffffffff,0x85,0,__s + 0x17,0);
                  local_90 = &DAT_00b0da18;
                  if (DAT_00b0d9f0 != 0) {
                    if (DAT_00b103d8 != (undefined8 *)0x0) {
                      (*DAT_00b0da70)();
                    }
                    iVar7 = (*DAT_00b0da28)(puVar13);
                    DAT_00b105b8 = DAT_00b105b8 - iVar7;
                    DAT_00b10600 = DAT_00b10600 + -1;
                    (*DAT_00b0da18)(puVar13);
                    if (DAT_00b103d8 == (undefined8 *)0x0) goto LAB_006ec9ac;
                    local_90 = (code **)&DAT_00b0da80;
                    puVar13 = DAT_00b103d8;
                  }
                  (**local_90)(puVar13);
                  goto LAB_006ec9ac;
                }
              }
            }
LAB_006ec9c4:
            uVar9 = 7;
          }
        }
LAB_006ec9c8:
        uVar10 = sqlite3_errmsg(param_1);
        uVar10 = sqlite3_mprintf(&DAT_002ad0ce,uVar10);
      }
      *param_6 = uVar10;
      goto LAB_006ebb84;
    }
  }
  uVar9 = 7;
LAB_006ebb84:
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  FUN_006ec9e4(__s);
  return uVar9;
}


// ===== 006ec9e4  FUN_006ec9e4 =====

void FUN_006ec9e4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x48) + -1;
  *(int *)(param_1 + 0x48) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  sqlite3_blob_close(uVar2);
  sqlite3_finalize(*(undefined8 *)(param_1 + 0x78));
  sqlite3_finalize(*(undefined8 *)(param_1 + 0x80));
  sqlite3_finalize(*(undefined8 *)(param_1 + 0x88));
  sqlite3_finalize(*(undefined8 *)(param_1 + 0x90));
  sqlite3_finalize(*(undefined8 *)(param_1 + 0x98));
  sqlite3_finalize(*(undefined8 *)(param_1 + 0xa0));
  sqlite3_finalize(*(undefined8 *)(param_1 + 0xa8));
  sqlite3_finalize(*(undefined8 *)(param_1 + 0xb0));
  sqlite3_finalize(*(undefined8 *)(param_1 + 0xb8));
  lVar4 = *(long *)(param_1 + 0x60);
  if (lVar4 != 0) {
    puVar3 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != 0) {
        (*DAT_00b0da70)();
      }
      iVar1 = (*DAT_00b0da28)(lVar4);
      DAT_00b105b8 = DAT_00b105b8 - iVar1;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(lVar4);
      if (DAT_00b103d8 == 0) goto LAB_006ecb04;
      puVar3 = &DAT_00b0da80;
      lVar4 = DAT_00b103d8;
    }
    (*(code *)*puVar3)(lVar4);
  }
LAB_006ecb04:
  puVar3 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != 0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(param_1);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_1);
    if (DAT_00b103d8 == 0) {
      return;
    }
    puVar3 = &DAT_00b0da80;
    param_1 = DAT_00b103d8;
  }
                    /* WARNING: Could not recover jumptable at 0x006ecb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_1);
  return;
}


// ===== 006ecb78  FUN_006ecb78 =====

void FUN_006ecb78(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = param_1[3];
  uVar4 = *param_1;
  if (lVar5 != 0) {
    if (*(int *)(param_1 + 2) < 1) {
LAB_006ecc7c:
      puVar2 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != 0) {
          (*DAT_00b0da70)();
        }
        iVar1 = (*DAT_00b0da28)(lVar5);
        DAT_00b105b8 = DAT_00b105b8 - iVar1;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(lVar5);
        if (DAT_00b103d8 == 0) goto LAB_006ecce4;
        puVar2 = &DAT_00b0da80;
        lVar5 = DAT_00b103d8;
      }
      (*(code *)*puVar2)(lVar5);
    }
    else {
      lVar5 = 0;
      lVar7 = 0x10;
      do {
        lVar6 = *(long *)(param_1[3] + lVar7);
        if (lVar6 != 0) {
          if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
            (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x18));
          }
          puVar2 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != 0) {
              (*DAT_00b0da70)();
            }
            iVar1 = (*DAT_00b0da28)(lVar6);
            DAT_00b105b8 = DAT_00b105b8 - iVar1;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(lVar6);
            if (DAT_00b103d8 == 0) goto LAB_006ecbe8;
            puVar2 = &DAT_00b0da80;
            lVar6 = DAT_00b103d8;
          }
          (*(code *)*puVar2)(lVar6);
        }
LAB_006ecbe8:
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 0x18;
      } while (lVar5 < *(int *)(param_1 + 2));
      lVar5 = param_1[3];
      if (lVar5 != 0) goto LAB_006ecc7c;
    }
LAB_006ecce4:
    param_1[3] = 0;
  }
  FUN_006ece04(uVar4,param_1[0xb]);
  FUN_006ece04(uVar4,param_1[0xc]);
  FUN_006ece04(uVar4,param_1[0xd]);
  FUN_006ece04(uVar4,param_1[0xe]);
  FUN_006ece04(uVar4,param_1[0xf]);
  lVar5 = param_1[6];
  if (lVar5 != 0) {
    puVar2 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != 0) {
        (*DAT_00b0da70)();
      }
      iVar1 = (*DAT_00b0da28)(lVar5);
      DAT_00b105b8 = DAT_00b105b8 - iVar1;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(lVar5);
      if (DAT_00b103d8 == 0) goto LAB_006ecd90;
      puVar2 = &DAT_00b0da80;
      lVar5 = DAT_00b103d8;
    }
    (*(code *)*puVar2)(lVar5);
  }
LAB_006ecd90:
  uVar3 = param_1[7];
  *param_1 = uVar4;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[7] = uVar3;
  return;
}


// ===== 006ece04  FUN_006ece04 =====

int FUN_006ece04(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  iVar2 = (int)param_2[2] + -1;
  *(int *)(param_2 + 2) = iVar2;
  if (iVar2 == 0) {
    lVar8 = param_2[1];
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
    if (lVar8 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    }
    if ((*param_2 == 0) || (iVar2 = FUN_006ece04(param_1), iVar2 == 0)) {
      iVar2 = FUN_006ecf84(param_1,param_2);
    }
    uVar5 = param_2[1];
    if (uVar5 != 0) {
      iVar3 = (int)((uVar5 & 0xffffffff) * 0x51d07eaf >> 0x20);
      plVar1 = (long *)(param_1 + (ulong)((int)uVar5 +
                                         (iVar3 + ((uint)((int)uVar5 - iVar3) >> 1) >> 6) * -0x61) *
                                  8 + 0xc0);
      do {
        plVar6 = plVar1;
        plVar7 = (long *)*plVar6;
        plVar1 = plVar7 + 4;
      } while (plVar7 != param_2);
      *plVar6 = param_2[4];
      param_2[4] = 0;
    }
    puVar4 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (long *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar3 = (*DAT_00b0da28)(param_2);
      DAT_00b105b8 = DAT_00b105b8 - iVar3;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(param_2);
      if (DAT_00b103d8 == (long *)0x0) {
        return iVar2;
      }
      puVar4 = &DAT_00b0da80;
      param_2 = DAT_00b103d8;
    }
    (*(code *)*puVar4)(param_2);
    return iVar2;
  }
  return 0;
}


// ===== 006ecf84  FUN_006ecf84 =====

int FUN_006ecf84(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    return 0;
  }
  plVar8 = *(long **)(param_1 + 0x78);
  lVar9 = *(long *)(param_2 + 8);
  iVar2 = FUN_00592fec(plVar8,0);
  if (lVar9 == 0) {
    if (iVar2 == 0) {
      lVar9 = *(long *)(*plVar8 + 0x18);
      goto joined_r0x006ed234;
    }
  }
  else if (iVar2 == 0) {
    plVar4 = (long *)plVar8[0x10];
    if ((*(ushort *)((long)plVar4 + 0x14) & 0x9000) == 0) {
      *plVar4 = lVar9;
      *(undefined2 *)((long)plVar4 + 0x14) = 4;
      lVar9 = *(long *)(*plVar8 + 0x18);
    }
    else {
      FUN_005c2a94(plVar4,lVar9);
      lVar9 = *(long *)(*plVar8 + 0x18);
    }
joined_r0x006ed234:
    if (lVar9 != 0) {
      (*DAT_00b0da80)();
    }
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 < 0) {
    sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x16bfe,
                "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
    sqlite3_step(plVar8);
    *(undefined4 *)(param_2 + 0x14) = 0;
    if (plVar8 != (long *)0x0) goto LAB_006ed054;
LAB_006ed134:
    iVar2 = 0;
    iVar3 = FUN_00592fec(plVar8,1);
  }
  else {
    lVar9 = *(long *)(param_2 + 0x18);
    iVar3 = FUN_00592fec(plVar8,1);
    if (iVar3 == 0) {
      if ((lVar9 != 0) && (iVar2 = FUN_00590724(plVar8[0x10] + 0x38,lVar9,iVar2,0,0), iVar2 != 0)) {
        lVar9 = *plVar8;
        *(int *)(lVar9 + 0x50) = iVar2;
        FUN_005ac5c0(lVar9,iVar2);
        FUN_005c1188(*plVar8,iVar2);
      }
      if (*(long *)(*plVar8 + 0x18) != 0) {
        (*DAT_00b0da80)();
      }
      sqlite3_step(plVar8);
      *(undefined4 *)(param_2 + 0x14) = 0;
      lVar9 = *plVar8;
      lVar5 = *(long *)(lVar9 + 0x18);
    }
    else {
      sqlite3_step(plVar8);
      *(undefined4 *)(param_2 + 0x14) = 0;
      if (plVar8 == (long *)0x0) goto LAB_006ed134;
LAB_006ed054:
      lVar9 = *plVar8;
      lVar5 = *(long *)(lVar9 + 0x18);
    }
    if (lVar5 != 0) {
      (*DAT_00b0da70)();
    }
    if (0 < plVar8[0x17]) {
      FUN_0058f57c(lVar9,plVar8);
    }
    iVar3 = FUN_0058f640(plVar8);
    plVar8[7] = 0;
    *(undefined1 *)((long)plVar8 + 199) = 1;
    *(undefined2 *)((long)plVar8 + 0xc4) = 0xff02;
    *(undefined4 *)((long)plVar8 + 0x2c) = 1;
    plVar8[6] = 0xffffffff;
    *(undefined4 *)(plVar8 + 8) = 0;
    plVar8[10] = 0;
    if ((iVar3 != 0) || (iVar2 = 0, *(char *)(lVar9 + 0x67) != '\0')) {
      iVar2 = FUN_005c1188(lVar9,iVar3);
    }
    if (*(long *)(lVar9 + 0x18) != 0) {
      (*DAT_00b0da80)();
    }
    iVar3 = FUN_00592fec(plVar8,1);
  }
  if ((iVar3 == 0) && (*(long *)(*plVar8 + 0x18) != 0)) {
    (*DAT_00b0da80)();
  }
  if ((*(long *)(param_2 + 8) != 0) || (iVar2 != 0)) {
    return iVar2;
  }
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 == 0) {
    pcVar6 = "NULL";
  }
  else {
    cVar1 = *(char *)(lVar9 + 0x71);
    if (cVar1 != -0x46) {
      if (cVar1 == 'v') {
        uVar7 = *(ulong *)(lVar9 + 0x38);
        goto LAB_006ed288;
      }
      if (cVar1 != 'm') {
        pcVar6 = "invalid";
        goto LAB_006ed24c;
      }
    }
    pcVar6 = "unopened";
  }
LAB_006ed24c:
  sqlite3_log(0x15,"API call with %s database connection pointer",pcVar6);
  sqlite3_log(0x15,"%s at line %d of [%.10s]","misuse",0x2cd9c,
              "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
  uVar7 = 0;
LAB_006ed288:
  *(ulong *)(param_2 + 8) = uVar7;
  iVar2 = (int)((uVar7 & 0xffffffff) * 0x51d07eaf >> 0x20);
  param_1 = param_1 + (ulong)((int)uVar7 + (iVar2 + ((uint)((int)uVar7 - iVar2) >> 1) >> 6) * -0x61)
                      * 8;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xc0);
  *(long *)(param_1 + 0xc0) = param_2;
  return 0;
}


// ===== 006ed2e0  FUN_006ed2e0 =====

undefined4 FUN_006ed2e0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  *param_3 = 0;
  plVar6 = *(long **)(param_1 + 0x88);
  iVar1 = FUN_00592fec(plVar6,0);
  if (iVar1 == 0) {
    puVar3 = (undefined8 *)plVar6[0x10];
    if ((*(ushort *)((long)puVar3 + 0x14) & 0x9000) == 0) {
      *puVar3 = param_2;
      *(undefined2 *)((long)puVar3 + 0x14) = 4;
      lVar4 = *(long *)(*plVar6 + 0x18);
    }
    else {
      FUN_005c2a94(puVar3,param_2);
      lVar4 = *(long *)(*plVar6 + 0x18);
    }
    if (lVar4 != 0) {
      (*DAT_00b0da80)();
    }
  }
  iVar1 = sqlite3_step(*(undefined8 *)(param_1 + 0x88));
  plVar6 = *(long **)(param_1 + 0x88);
  if (iVar1 == 100) {
    uVar5 = sqlite3_column_int64(plVar6,0);
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = uVar5;
    }
    uVar2 = FUN_006ed648(param_1,uVar5,0,param_3);
    plVar6 = *(long **)(param_1 + 0x88);
    if (plVar6 == (long *)0x0) {
      return uVar2;
    }
    lVar4 = *plVar6;
    if (*(long *)(lVar4 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if (0 < plVar6[0x17]) {
      FUN_0058f57c(lVar4,plVar6);
    }
    iVar1 = FUN_0058f640(plVar6);
    plVar6[7] = 0;
    *(undefined1 *)((long)plVar6 + 199) = 1;
    *(undefined2 *)((long)plVar6 + 0xc4) = 0xff02;
    *(undefined4 *)((long)plVar6 + 0x2c) = 1;
    plVar6[6] = 0xffffffff;
    *(undefined4 *)(plVar6 + 8) = 0;
    plVar6[10] = 0;
    if ((iVar1 != 0) || (*(char *)(lVar4 + 0x67) != '\0')) {
      FUN_005c1188(lVar4,iVar1);
    }
  }
  else {
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    lVar4 = *plVar6;
    if (*(long *)(lVar4 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if (0 < plVar6[0x17]) {
      FUN_0058f57c(lVar4,plVar6);
    }
    iVar1 = FUN_0058f640(plVar6);
    plVar6[7] = 0;
    *(undefined1 *)((long)plVar6 + 199) = 1;
    *(undefined2 *)((long)plVar6 + 0xc4) = 0xff02;
    *(undefined4 *)((long)plVar6 + 0x2c) = 1;
    plVar6[6] = 0xffffffff;
    *(undefined4 *)(plVar6 + 8) = 0;
    plVar6[10] = 0;
    if ((iVar1 != 0) || (uVar2 = 0, *(char *)(lVar4 + 0x67) != '\0')) {
      uVar2 = FUN_005c1188(lVar4,iVar1);
    }
  }
  if (*(long *)(lVar4 + 0x18) != 0) {
    (*DAT_00b0da80)();
  }
  return uVar2;
}


// ===== 006ed4fc  FUN_006ed4fc =====

void FUN_006ed4fc(double param_1,undefined8 *param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  double *pdVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  cVar2 = *(char *)((long)param_2 + 9);
  bVar1 = (byte)param_3;
  if (cVar2 == '\0') {
    if (*(int *)((long)param_2 + 0x24) == 0) {
      *(int *)((long)param_2 + (ulong)bVar1 * 4 + 0x80) =
           *(int *)((long)param_2 + (ulong)bVar1 * 4 + 0x80) + 1;
      goto LAB_006ed624;
    }
    pdVar5 = (double *)param_2[6];
    *(int *)((long)param_2 + (ulong)bVar1 * 4 + 0x80) =
         *(int *)((long)param_2 + (ulong)bVar1 * 4 + 0x80) + 1;
    if (pdVar5 == (double *)0x0) goto LAB_006ed624;
  }
  else {
    pdVar5 = (double *)(param_2 + 8);
    *(int *)((long)param_2 + (ulong)bVar1 * 4 + 0x80) =
         *(int *)((long)param_2 + (ulong)bVar1 * 4 + 0x80) + 1;
  }
  dVar6 = *pdVar5;
  if ((dVar6 == param_1 || dVar6 < param_1 != (NAN(dVar6) || NAN(param_1))) &&
     ((dVar6 != param_1 || ((uint)*(byte *)(pdVar5 + 2) <= (param_3 & 0xff))))) {
    FUN_006ee0bc(param_2,param_3);
    return;
  }
  if (cVar2 != '\0') {
    puVar3 = (undefined8 *)FUN_006ee0bc(param_2,param_3);
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    lVar4 = ((long)puVar3 - param_2[6] >> 3) * -0x5555555555555555;
    if ((int)lVar4 < 4) {
      *(undefined8 *)((long)(param_2 + 0xb) + ((lVar4 << 0x20) + 0x100000000 >> 0x1d)) =
           param_2[0xb];
    }
    else {
      FUN_006ece04(*param_2,param_2[0xb]);
    }
    uVar8 = param_2[9];
    uVar7 = param_2[8];
    param_2[0xb] = 0;
    puVar3[2] = param_2[10];
    puVar3[1] = uVar8;
    *puVar3 = uVar7;
  }
LAB_006ed624:
  param_2[8] = param_1;
  *(byte *)(param_2 + 10) = bVar1;
  *(undefined1 *)((long)param_2 + 9) = 1;
  return;
}


// ===== 006ed648  FUN_006ed648 =====

int FUN_006ed648(long param_1,ulong param_2,long param_3,long *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint *puVar10;
  long *plVar11;
  
  iVar4 = (int)((param_2 & 0xffffffff) * 0x51d07eaf >> 0x20);
  for (plVar9 = *(long **)(param_1 + (ulong)((int)param_2 +
                                            (iVar4 + ((uint)((int)param_2 - iVar4) >> 1) >> 6) *
                                            -0x61) * 8 + 0xc0); plVar9 != (long *)0x0;
      plVar9 = (long *)plVar9[4]) {
    if (plVar9[1] == param_2) {
      if ((param_3 != 0) && (*plVar9 != param_3)) {
        return 0x10b;
      }
      iVar4 = 0;
      *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
      goto LAB_006ed848;
    }
  }
  plVar11 = (long *)(param_1 + 0x70);
  puVar10 = (uint *)*plVar11;
  if (puVar10 == (uint *)0x0) {
LAB_006ed73c:
    iVar3 = sqlite3_blob_open(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30),
                              *(undefined8 *)(param_1 + 0x40),&DAT_002b877c,param_2,0,plVar11);
    if (iVar3 == 0) {
      puVar10 = *(uint **)(param_1 + 0x70);
      iVar4 = *(int *)(param_1 + 0x20);
      if (puVar10 != (uint *)0x0) goto LAB_006ed784;
      uVar7 = 0;
      if (iVar4 == 0) goto LAB_006ed798;
LAB_006ed840:
      plVar9 = (long *)0x0;
      iVar4 = 0x10b;
      goto LAB_006ed848;
    }
LAB_006ed764:
    *param_4 = 0;
    iVar4 = 0x10b;
    if (iVar3 != 1) {
      iVar4 = iVar3;
    }
  }
  else {
    *plVar11 = 0;
    iVar3 = sqlite3_blob_reopen(puVar10,param_2);
    *plVar11 = (long)puVar10;
    if (iVar3 != 0) {
      *plVar11 = 0;
      sqlite3_blob_close(puVar10);
      if (iVar3 == 7) {
        return 7;
      }
      if (*plVar11 == 0) goto LAB_006ed73c;
      goto LAB_006ed764;
    }
    iVar4 = *(int *)(param_1 + 0x20);
LAB_006ed784:
    uVar7 = *(ulong *)(puVar10 + 6);
    if (uVar7 != 0) {
      uVar7 = (ulong)*puVar10;
    }
    if (iVar4 != (int)uVar7) goto LAB_006ed840;
LAB_006ed798:
    iVar3 = sqlite3_initialize(uVar7);
    if ((iVar3 == 0) &&
       (plVar9 = (long *)FUN_005827b0((long)iVar4 + 0x28), lVar5 = DAT_002a14c8,
       plVar9 != (long *)0x0)) {
      iVar4 = *(int *)(param_1 + 0x5c);
      *plVar9 = param_3;
      plVar9[1] = param_2;
      *(int *)(param_1 + 0x5c) = iVar4 + 1;
      plVar9[2] = lVar5;
      uVar6 = *(undefined8 *)(param_1 + 0x70);
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      plVar9[3] = (long)(plVar9 + 5);
      plVar9[4] = 0;
      iVar4 = FUN_00596f38(uVar6,plVar9 + 5,uVar1,0,FUN_00597114);
      if ((param_2 == 1) && (iVar4 == 0)) {
        uVar2 = (uint)(*(ushort *)plVar9[3] >> 8) | (*(ushort *)plVar9[3] & 0xff00ff) << 8;
        *(uint *)(param_1 + 0x2c) = uVar2;
        if (uVar2 < 0x29) {
LAB_006ed86c:
          iVar4 = 0;
          if (*(byte *)(param_1 + 0x27) != 0) {
            iVar4 = (*(int *)(param_1 + 0x20) + -4) / (int)(uint)*(byte *)(param_1 + 0x27);
          }
          if ((int)((uint)(*(ushort *)(plVar9[3] + 2) >> 8) |
                   (*(ushort *)(plVar9[3] + 2) & 0xff00ff) << 8) <= iVar4) {
            if (param_3 != 0) {
              *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
            }
            iVar4 = 0;
            param_1 = param_1 + (ulong)(*(uint *)(plVar9 + 1) % 0x61) * 8;
            plVar9[4] = *(long *)(param_1 + 0xc0);
            *(long **)(param_1 + 0xc0) = plVar9;
            goto LAB_006ed848;
          }
        }
        iVar4 = 0x10b;
      }
      else if (iVar4 == 0) goto LAB_006ed86c;
      uVar6 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      sqlite3_blob_close(uVar6);
      iVar3 = DAT_00b0d9f0;
      puVar8 = &DAT_00b0da18;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      if (iVar3 != 0) {
        if (DAT_00b103d8 != (long *)0x0) {
          (*DAT_00b0da70)();
        }
        iVar3 = (*DAT_00b0da28)(plVar9);
        DAT_00b105b8 = DAT_00b105b8 - iVar3;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(plVar9);
        plVar9 = DAT_00b103d8;
        if (DAT_00b103d8 == (long *)0x0) goto LAB_006ed848;
        puVar8 = &DAT_00b0da80;
      }
      (*(code *)*puVar8)(plVar9);
      plVar9 = (long *)0x0;
      goto LAB_006ed848;
    }
    iVar4 = 7;
  }
  lVar5 = *plVar11;
  *plVar11 = 0;
  sqlite3_blob_close(lVar5);
  plVar9 = (long *)0x0;
LAB_006ed848:
  *param_4 = (long)plVar9;
  return iVar4;
}


// ===== 006ed984  FUN_006ed984 =====

undefined8 FUN_006ed984(long *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  byte *pbVar19;
  uint uVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  int local_c4;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar22 = *param_1;
  cVar3 = *(char *)(lVar22 + 0x26);
  do {
    bVar4 = *(byte *)((long)param_1 + 9);
    plVar21 = param_1 + 8;
    if ((bVar4 == 0) &&
       ((*(int *)((long)param_1 + 0x24) == 0 ||
        (plVar21 = (long *)param_1[6], plVar21 == (long *)0x0)))) {
      uVar12 = 1;
LAB_006ee088:
      *(undefined1 *)(param_1 + 1) = uVar12;
      return 0;
    }
    if ((char)plVar21[2] == '\0') {
      uVar12 = 0;
      goto LAB_006ee088;
    }
    plVar17 = param_1 + (0xc - (ulong)bVar4);
    if (*plVar17 == 0) {
      plVar14 = param_1 + 9;
      if (bVar4 != 1) {
        plVar14 = (long *)(param_1[6] + 8);
      }
      uVar11 = FUN_006ed648(*param_1,*plVar14,0,plVar17);
      if ((int)uVar11 != 0) {
        return uVar11;
      }
      lVar13 = *(long *)(*plVar17 + 0x18);
      bVar4 = *(byte *)((long)plVar21 + 0x12);
      uVar20 = (uint)bVar4;
      uVar23 = (uint)(*(ushort *)(lVar13 + 2) >> 8) | (*(ushort *)(lVar13 + 2) & 0xff00ff) << 8;
      if (bVar4 < uVar23) goto LAB_006eda74;
    }
    else {
      lVar13 = *(long *)(*plVar17 + 0x18);
      bVar4 = *(byte *)((long)plVar21 + 0x12);
      uVar20 = (uint)bVar4;
      uVar23 = (uint)(*(ushort *)(lVar13 + 2) >> 8) | (*(ushort *)(lVar13 + 2) & 0xff00ff) << 8;
      if (bVar4 < uVar23) {
LAB_006eda74:
        pbVar19 = (byte *)(lVar13 + (ulong)bVar4 * (ulong)*(byte *)(lVar22 + 0x27) + 4);
        if ((int)uVar1 < 1) {
          dVar28 = -1.0;
          iVar24 = 2;
          bVar6 = *(byte *)(plVar21 + 2);
          bVar5 = bVar4 + 1;
          *(byte *)((long)plVar21 + 0x12) = bVar5;
joined_r0x006ee060:
          if ((bVar6 - 1 & 0xff) == 0) {
            uVar20 = (uint)bVar4;
            lVar13 = plVar21[1];
          }
          else {
            uVar16 = (ulong)*(uint *)((long)param_1 + 0x24);
            lVar13 = ((ulong)*pbVar19 << 0x38 | (ulong)pbVar19[1] << 0x30 |
                      (ulong)pbVar19[2] << 0x28 | (ulong)pbVar19[3] << 0x20 |
                      (ulong)pbVar19[4] << 0x18 | (ulong)pbVar19[5] << 0x10 | (ulong)pbVar19[6] << 8
                     ) + (ulong)pbVar19[7];
            if (0 < (int)*(uint *)((long)param_1 + 0x24)) {
              plVar21 = (long *)(param_1[6] + 8);
              do {
                if (*plVar21 == lVar13) {
                  return 0x10b;
                }
                uVar16 = uVar16 - 1;
                plVar21 = plVar21 + 3;
              } while (uVar16 != 0);
            }
            uVar20 = 0;
          }
          if (uVar23 <= bVar5) {
            FUN_006ee24c(param_1);
          }
          dVar26 = 0.0;
          if (0.0 <= dVar28) {
            dVar26 = dVar28;
          }
          lVar15 = FUN_006ed4fc(dVar26,param_1,bVar6 - 1);
          if (lVar15 == 0) {
            return 7;
          }
          *(char *)(lVar15 + 0x11) = (char)iVar24;
          *(long *)(lVar15 + 8) = lVar13;
          *(char *)(lVar15 + 0x12) = (char)uVar20;
        }
        else {
          do {
            dVar28 = -1.0;
            lVar13 = 0;
            iVar24 = 2;
LAB_006edae4:
            lVar15 = param_1[3];
            iVar2 = *(int *)(lVar15 + lVar13 + 4);
            if (0x45 < iVar2) {
              lVar18 = *(long *)(lVar15 + lVar13 + 0x10);
              if ((iVar2 == 0x47) && ((char)plVar21[2] == '\x01')) {
                *(ulong *)(lVar18 + 0x48) =
                     ((ulong)*pbVar19 << 0x38 | (ulong)pbVar19[1] << 0x30 |
                      (ulong)pbVar19[2] << 0x28 | (ulong)pbVar19[3] << 0x20 |
                      (ulong)pbVar19[4] << 0x18 | (ulong)pbVar19[5] << 0x10 | (ulong)pbVar19[6] << 8
                     ) + (ulong)pbVar19[7];
              }
              iVar10 = *(int *)(lVar18 + 0x38);
              if (cVar3 == '\x01') {
                if (iVar10 < 8) {
                  if (iVar10 == 4) goto LAB_006edce0;
                  if (iVar10 == 6) goto LAB_006edcc0;
                }
                else {
                  if (iVar10 != 8) {
                    if (iVar10 != 10) goto LAB_006edd00;
                    uVar20 = (*(uint *)(pbVar19 + 0x2c) & 0xff00ff00) >> 8 |
                             (*(uint *)(pbVar19 + 0x2c) & 0xff00ff) << 8;
                    local_78 = (double)(int)(uVar20 >> 0x10 | uVar20 << 0x10);
                    uVar20 = (*(uint *)(pbVar19 + 0x28) & 0xff00ff00) >> 8 |
                             (*(uint *)(pbVar19 + 0x28) & 0xff00ff) << 8;
                    local_80 = (double)(int)(uVar20 >> 0x10 | uVar20 << 0x10);
                  }
                  uVar20 = (*(uint *)(pbVar19 + 0x24) & 0xff00ff00) >> 8 |
                           (*(uint *)(pbVar19 + 0x24) & 0xff00ff) << 8;
                  local_88 = (double)(int)(uVar20 >> 0x10 | uVar20 << 0x10);
                  uVar20 = (*(uint *)(pbVar19 + 0x20) & 0xff00ff00) >> 8 |
                           (*(uint *)(pbVar19 + 0x20) & 0xff00ff) << 8;
                  local_90 = (double)(int)(uVar20 >> 0x10 | uVar20 << 0x10);
LAB_006edcc0:
                  uVar20 = (*(uint *)(pbVar19 + 0x1c) & 0xff00ff00) >> 8 |
                           (*(uint *)(pbVar19 + 0x1c) & 0xff00ff) << 8;
                  local_98 = (double)(int)(uVar20 >> 0x10 | uVar20 << 0x10);
                  uVar20 = (*(uint *)(pbVar19 + 0x18) & 0xff00ff00) >> 8 |
                           (*(uint *)(pbVar19 + 0x18) & 0xff00ff) << 8;
                  local_a0 = (double)(int)(uVar20 >> 0x10 | uVar20 << 0x10);
LAB_006edce0:
                  uVar20 = (*(uint *)(pbVar19 + 0x14) & 0xff00ff00) >> 8 |
                           (*(uint *)(pbVar19 + 0x14) & 0xff00ff) << 8;
                  local_a8 = (double)(int)(uVar20 >> 0x10 | uVar20 << 0x10);
                  uVar20 = (*(uint *)(pbVar19 + 0x10) & 0xff00ff00) >> 8 |
                           (*(uint *)(pbVar19 + 0x10) & 0xff00ff) << 8;
                  local_b0 = (double)(int)(uVar20 >> 0x10 | uVar20 << 0x10);
                }
LAB_006edd00:
                uVar20 = (*(uint *)(pbVar19 + 0xc) & 0xff00ff00) >> 8 |
                         (*(uint *)(pbVar19 + 0xc) & 0xff00ff) << 8;
                local_b8 = (double)(int)(uVar20 >> 0x10 | uVar20 << 0x10);
                uVar20 = (*(uint *)(pbVar19 + 8) & 0xff00ff00) >> 8 |
                         (*(uint *)(pbVar19 + 8) & 0xff00ff) << 8;
                local_c0 = (double)(int)(uVar20 >> 0x10 | uVar20 << 0x10);
                if (iVar2 != 0x46) goto LAB_006ede0c;
LAB_006edaa4:
                local_c4 = 0;
                uVar11 = (**(code **)(lVar15 + lVar13 + 8))(lVar18,iVar10,&local_c0,&local_c4);
                iVar2 = 0;
                if (local_c4 != 0) {
                  iVar2 = iVar24;
                }
                iVar10 = (int)uVar11;
                dVar28 = 0.0;
                iVar24 = iVar2;
              }
              else {
                if (iVar10 < 8) {
                  if (iVar10 == 4) goto LAB_006eddb4;
                  if (iVar10 == 6) goto LAB_006edd8c;
                }
                else {
                  if (iVar10 != 8) {
                    if (iVar10 != 10) goto LAB_006edddc;
                    uVar20 = (*(uint *)(pbVar19 + 0x2c) & 0xff00ff00) >> 8 |
                             (*(uint *)(pbVar19 + 0x2c) & 0xff00ff) << 8;
                    local_78 = (double)(float)(uVar20 >> 0x10 | uVar20 << 0x10);
                    uVar20 = (*(uint *)(pbVar19 + 0x28) & 0xff00ff00) >> 8 |
                             (*(uint *)(pbVar19 + 0x28) & 0xff00ff) << 8;
                    local_80 = (double)(float)(uVar20 >> 0x10 | uVar20 << 0x10);
                  }
                  uVar20 = (*(uint *)(pbVar19 + 0x24) & 0xff00ff00) >> 8 |
                           (*(uint *)(pbVar19 + 0x24) & 0xff00ff) << 8;
                  local_88 = (double)(float)(uVar20 >> 0x10 | uVar20 << 0x10);
                  uVar20 = (*(uint *)(pbVar19 + 0x20) & 0xff00ff00) >> 8 |
                           (*(uint *)(pbVar19 + 0x20) & 0xff00ff) << 8;
                  local_90 = (double)(float)(uVar20 >> 0x10 | uVar20 << 0x10);
LAB_006edd8c:
                  uVar20 = (*(uint *)(pbVar19 + 0x1c) & 0xff00ff00) >> 8 |
                           (*(uint *)(pbVar19 + 0x1c) & 0xff00ff) << 8;
                  local_98 = (double)(float)(uVar20 >> 0x10 | uVar20 << 0x10);
                  uVar20 = (*(uint *)(pbVar19 + 0x18) & 0xff00ff00) >> 8 |
                           (*(uint *)(pbVar19 + 0x18) & 0xff00ff) << 8;
                  local_a0 = (double)(float)(uVar20 >> 0x10 | uVar20 << 0x10);
LAB_006eddb4:
                  uVar20 = (*(uint *)(pbVar19 + 0x14) & 0xff00ff00) >> 8 |
                           (*(uint *)(pbVar19 + 0x14) & 0xff00ff) << 8;
                  local_a8 = (double)(float)(uVar20 >> 0x10 | uVar20 << 0x10);
                  uVar20 = (*(uint *)(pbVar19 + 0x10) & 0xff00ff00) >> 8 |
                           (*(uint *)(pbVar19 + 0x10) & 0xff00ff) << 8;
                  local_b0 = (double)(float)(uVar20 >> 0x10 | uVar20 << 0x10);
                }
LAB_006edddc:
                uVar20 = (*(uint *)(pbVar19 + 0xc) & 0xff00ff00) >> 8 |
                         (*(uint *)(pbVar19 + 0xc) & 0xff00ff) << 8;
                local_b8 = (double)(float)(uVar20 >> 0x10 | uVar20 << 0x10);
                uVar20 = (*(uint *)(pbVar19 + 8) & 0xff00ff00) >> 8 |
                         (*(uint *)(pbVar19 + 8) & 0xff00ff) << 8;
                local_c0 = (double)(float)(uVar20 >> 0x10 | uVar20 << 0x10);
                if (iVar2 == 0x46) goto LAB_006edaa4;
LAB_006ede0c:
                lVar25 = *plVar21;
                bVar4 = *(byte *)((long)plVar21 + 0x11);
                *(double **)(lVar18 + 0x28) = &local_c0;
                bVar5 = *(byte *)(plVar21 + 2);
                *(long *)(lVar18 + 0x50) = lVar25;
                *(long *)(lVar18 + 0x60) = lVar25;
                *(uint *)(lVar18 + 0x3c) = bVar5 - 1;
                *(uint *)(lVar18 + 0x58) = (uint)bVar4;
                *(uint *)(lVar18 + 0x5c) = (uint)bVar4;
                uVar11 = (**(code **)(lVar15 + lVar13 + 8))(lVar18);
                iVar2 = *(int *)(lVar18 + 0x5c);
                if (iVar24 <= *(int *)(lVar18 + 0x5c)) {
                  iVar2 = iVar24;
                }
                bVar9 = true;
                if ((dVar28 <= *(double *)(lVar18 + 0x60)) && (bVar9 = false, !NAN(dVar28))) {
                  bVar9 = dVar28 < 0.0;
                }
                dVar26 = *(double *)(lVar18 + 0x60);
                if (!bVar9) {
                  dVar26 = dVar28;
                }
                iVar10 = (int)uVar11;
                dVar28 = dVar26;
                iVar24 = iVar2;
              }
              if (iVar10 != 0) {
                return uVar11;
              }
              if (iVar24 == 0) goto LAB_006edf40;
LAB_006edad8:
              lVar13 = lVar13 + 0x18;
              if ((ulong)uVar1 * 0x18 - lVar13 == 0) {
                bVar4 = *(byte *)((long)plVar21 + 0x12);
                bVar6 = *(byte *)(plVar21 + 2);
                bVar5 = bVar4 + 1;
                *(byte *)((long)plVar21 + 0x12) = bVar5;
                goto joined_r0x006ee060;
              }
              goto LAB_006edae4;
            }
            uVar20 = *(int *)(lVar15 + lVar13) << 2;
            if ((char)plVar21[2] == '\x01') {
              uVar20 = (*(uint *)(pbVar19 + (long)(int)uVar20 + 8) & 0xff00ff00) >> 8 |
                       (*(uint *)(pbVar19 + (long)(int)uVar20 + 8) & 0xff00ff) << 8;
              fVar7 = (float)(uVar20 >> 0x10 | uVar20 << 0x10);
              dVar26 = (double)(int)fVar7;
              if (cVar3 != '\x01') {
                dVar26 = (double)fVar7;
              }
              if (iVar2 < 0x43) {
                if (iVar2 != 0x3f) {
                  if (iVar2 == 0x42) {
                    if (*(double *)(lVar15 + lVar13 + 8) < dVar26) goto LAB_006edf40;
                  }
                  else {
                    if (iVar2 == 0x40) goto LAB_006edf40;
LAB_006edf30:
                    if (dVar26 != *(double *)(lVar15 + lVar13 + 8)) goto LAB_006edf40;
                  }
                }
              }
              else if (iVar2 == 0x43) {
                if (*(double *)(lVar15 + lVar13 + 8) <= dVar26) goto LAB_006edf40;
              }
              else if (iVar2 == 0x44) {
                dVar27 = *(double *)(lVar15 + lVar13 + 8);
                if (dVar26 < dVar27 != (NAN(dVar26) || NAN(dVar27))) goto LAB_006edf40;
              }
              else {
                if (iVar2 != 0x45) goto LAB_006edf30;
                dVar27 = *(double *)(lVar15 + lVar13 + 8);
                if (dVar26 == dVar27 || dVar26 < dVar27 != (NAN(dVar26) || NAN(dVar27)))
                goto LAB_006edf40;
              }
              goto LAB_006edad8;
            }
            uVar20 = uVar20 & 0x3f8;
            if (0x41 < iVar2) {
              if (iVar2 - 0x42U < 2) {
                uVar20 = (*(uint *)(pbVar19 + (ulong)uVar20 + 8) & 0xff00ff00) >> 8 |
                         (*(uint *)(pbVar19 + (ulong)uVar20 + 8) & 0xff00ff) << 8;
                fVar7 = (float)(uVar20 >> 0x10 | uVar20 << 0x10);
                dVar26 = (double)(int)fVar7;
                if (cVar3 != '\x01') {
                  dVar26 = (double)fVar7;
                }
                dVar27 = *(double *)(lVar15 + lVar13 + 8);
                if (dVar27 < dVar26 != (NAN(dVar27) || NAN(dVar26))) goto LAB_006edf40;
              }
              else {
LAB_006edef8:
                uVar20 = (*(uint *)(pbVar19 + (ulong)uVar20 + 0xc) & 0xff00ff00) >> 8 |
                         (*(uint *)(pbVar19 + (ulong)uVar20 + 0xc) & 0xff00ff) << 8;
                fVar7 = (float)(uVar20 >> 0x10 | uVar20 << 0x10);
                dVar26 = (double)(int)fVar7;
                if (cVar3 != '\x01') {
                  dVar26 = (double)fVar7;
                }
                if (dVar26 < *(double *)(lVar15 + lVar13 + 8)) goto LAB_006edf40;
              }
              goto LAB_006edad8;
            }
            if (iVar2 == 0x3f) goto LAB_006edad8;
            if (iVar2 == 0x41) {
              uVar8 = (*(uint *)(pbVar19 + (ulong)uVar20 + 8) & 0xff00ff00) >> 8 |
                      (*(uint *)(pbVar19 + (ulong)uVar20 + 8) & 0xff00ff) << 8;
              fVar7 = (float)(uVar8 >> 0x10 | uVar8 << 0x10);
              dVar26 = (double)(int)fVar7;
              if (cVar3 != '\x01') {
                dVar26 = (double)fVar7;
              }
              dVar27 = *(double *)(lVar15 + lVar13 + 8);
              if (dVar27 < dVar26 != (NAN(dVar27) || NAN(dVar26))) goto LAB_006edf40;
              uVar20 = (*(uint *)(pbVar19 + (ulong)uVar20 + 0xc) & 0xff00ff00) >> 8 |
                       (*(uint *)(pbVar19 + (ulong)uVar20 + 0xc) & 0xff00ff) << 8;
              fVar7 = (float)(uVar20 >> 0x10 | uVar20 << 0x10);
              dVar26 = (double)(int)fVar7;
              if (cVar3 != '\x01') {
                dVar26 = (double)fVar7;
              }
              if (dVar26 < dVar27) goto LAB_006edf40;
              goto LAB_006edad8;
            }
            if (iVar2 != 0x40) goto LAB_006edef8;
LAB_006edf40:
            bVar4 = *(char *)((long)plVar21 + 0x12) + 1;
            bVar5 = *(byte *)(lVar22 + 0x27);
            uVar20 = (uint)bVar4;
            *(byte *)((long)plVar21 + 0x12) = bVar4;
            pbVar19 = pbVar19 + bVar5;
          } while (bVar4 < uVar23);
        }
      }
    }
    if (uVar23 <= uVar20) {
      FUN_006ee24c(param_1);
    }
  } while( true );
}


// ===== 006ee0bc  FUN_006ee0bc =====

double * FUN_006ee0bc(double param_1,undefined8 *param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  double *pdVar8;
  undefined8 uVar9;
  double *pdVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = *(uint *)((long)param_2 + 0x24);
  if ((int)uVar2 < iVar1) {
    lVar4 = param_2[6];
LAB_006ee0f0:
    pdVar10 = (double *)(lVar4 + (long)(int)uVar2 * 0x18);
    *(uint *)((long)param_2 + 0x24) = uVar2 + 1;
    *pdVar10 = param_1;
    *(undefined1 *)(pdVar10 + 2) = param_3;
    uVar6 = (ulong)uVar2;
    pdVar8 = pdVar10;
    if (0 < (int)uVar2) {
      do {
        uVar5 = (uint)uVar6;
        lVar7 = param_2[6];
        dVar12 = *pdVar8;
        uVar2 = uVar5 - 1 >> 1;
        uVar11 = (ulong)uVar2;
        pdVar10 = (double *)(lVar7 + uVar11 * 0x18);
        dVar14 = *pdVar10;
        if (dVar12 >= dVar14) {
          if (dVar12 != dVar14 && dVar12 < dVar14 == (NAN(dVar12) || NAN(dVar14))) {
            return pdVar8;
          }
          if (*(byte *)(lVar7 + uVar11 * 0x18 + 0x10) <= *(byte *)(pdVar8 + 2)) {
            return pdVar8;
          }
        }
        pdVar8 = (double *)(lVar7 + uVar6 * 0x18);
        dVar16 = pdVar10[1];
        dVar15 = *pdVar10;
        dVar13 = *pdVar8;
        dVar12 = pdVar8[2];
        dVar14 = pdVar10[2];
        pdVar10[1] = pdVar8[1];
        *pdVar10 = dVar13;
        pdVar10[2] = dVar12;
        pdVar8 = (double *)(param_2[6] + uVar6 * 0x18);
        pdVar8[1] = dVar16;
        *pdVar8 = dVar15;
        pdVar8[2] = dVar14;
        if (uVar5 < 9) {
          uVar6 = (ulong)(uVar2 + 1);
          if (uVar5 < 4) {
            uVar9 = param_2[uVar6 + 0xb];
            param_2[uVar6 + 0xb] = param_2[(ulong)(uVar5 + 1) + 0xb];
            param_2[(ulong)(uVar5 + 1) + 0xb] = uVar9;
          }
          else {
            FUN_006ece04(*param_2,param_2[uVar6 + 0xb]);
            param_2[uVar6 + 0xb] = 0;
          }
        }
        uVar6 = uVar11;
        pdVar8 = pdVar10;
      } while (1 < uVar5 - 1);
    }
  }
  else {
    uVar9 = param_2[6];
    iVar3 = sqlite3_initialize();
    if (iVar3 == 0) {
      lVar7 = (long)iVar1 * 2 + 8;
      lVar4 = FUN_00582b2c(uVar9,lVar7 * 0x18);
      if (lVar4 != 0) {
        uVar2 = *(uint *)((long)param_2 + 0x24);
        param_2[6] = lVar4;
        *(int *)(param_2 + 4) = (int)lVar7;
        goto LAB_006ee0f0;
      }
    }
    pdVar10 = (double *)0x0;
  }
  return pdVar10;
}


// ===== 006ee24c  FUN_006ee24c =====

void FUN_006ee24c(undefined8 *param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  double *pdVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  double *pdVar15;
  uint uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  uVar6 = (ulong)*(byte *)((long)param_1 + 9);
  if (param_1[0xc - uVar6] != 0) {
    FUN_006ece04(*param_1);
    param_1[0xc - uVar6] = 0;
    uVar6 = (ulong)*(byte *)((long)param_1 + 9);
  }
  if ((int)uVar6 == 0) {
    iVar10 = *(int *)((long)param_1 + 0x24);
    if (iVar10 != 0) {
      puVar7 = (undefined8 *)param_1[6];
      iVar4 = iVar10 + -1;
      puVar13 = puVar7 + (long)iVar4 * 3;
      bVar3 = *(byte *)(puVar7 + 2);
      *(int *)((long)param_1 + 0x24) = iVar4;
      *(int *)((long)param_1 + (ulong)bVar3 * 4 + 0x80) =
           *(int *)((long)param_1 + (ulong)bVar3 * 4 + 0x80) + -1;
      uVar17 = *puVar13;
      uVar11 = puVar13[2];
      puVar7[1] = puVar13[1];
      *puVar7 = uVar17;
      puVar7[2] = uVar11;
      if (iVar10 < 5) {
        param_1[0xc] = param_1[(long)iVar10 + 0xb];
        param_1[(long)iVar10 + 0xb] = 0;
        if (iVar10 < 3) {
          return;
        }
      }
      iVar10 = 0;
      uVar5 = 0;
      uVar16 = 1;
      do {
        lVar12 = param_1[6];
        pdVar9 = (double *)(lVar12 + (long)(int)uVar5 * 0x18);
        uVar2 = iVar10 + 2;
        if ((int)uVar2 < iVar4) {
          pdVar15 = (double *)(lVar12 + (long)(int)uVar2 * 0x18);
          dVar20 = *pdVar15;
          dVar18 = *(double *)(lVar12 + (long)(int)uVar16 * 0x18);
          if ((dVar20 >= dVar18) &&
             ((dVar20 != dVar18 && dVar20 < dVar18 == (NAN(dVar20) || NAN(dVar18)) ||
              (*(byte *)(lVar12 + (long)(int)uVar16 * 0x18 + 0x10) <=
               *(byte *)(lVar12 + (long)(int)uVar2 * 0x18 + 0x10))))) goto LAB_006ee444;
          dVar18 = *pdVar9;
          lVar14 = (long)(int)uVar5;
          if (dVar20 >= dVar18) {
            if (dVar20 != dVar18 && dVar20 < dVar18 == (NAN(dVar20) || NAN(dVar18))) {
              return;
            }
            if (*(byte *)(lVar12 + (long)(int)uVar5 * 0x18 + 0x10) <=
                *(byte *)(lVar12 + (long)(int)uVar2 * 0x18 + 0x10)) {
              return;
            }
          }
          dVar19 = *pdVar15;
          dVar18 = pdVar15[2];
          dVar22 = pdVar9[1];
          dVar21 = *pdVar9;
          dVar20 = pdVar9[2];
          pdVar9[1] = pdVar15[1];
          *pdVar9 = dVar19;
          pdVar9[2] = dVar18;
          pdVar9 = (double *)(param_1[6] + (long)(int)uVar2 * 0x18);
          pdVar9[1] = dVar22;
          *pdVar9 = dVar21;
          pdVar9[2] = dVar20;
          bVar1 = (int)uVar5 < 4;
          uVar5 = uVar2;
          if (bVar1) {
            if ((int)uVar2 < 4) {
              uVar8 = -(ulong)(iVar10 + 3U >> 0x1f) & 0xfffffff800000000 | (ulong)(iVar10 + 3U) << 3
              ;
              uVar6 = -(lVar14 + 1U >> 0x1f & 1) & 0xfffffff800000000 |
                      (lVar14 + 1U & 0xffffffff) << 3;
              uVar11 = *(undefined8 *)((long)param_1 + uVar6 + 0x58);
              *(undefined8 *)((long)param_1 + uVar6 + 0x58) =
                   *(undefined8 *)((long)param_1 + uVar8 + 0x58);
              *(undefined8 *)((long)param_1 + uVar8 + 0x58) = uVar11;
            }
            else {
              FUN_006ece04(*param_1,param_1[lVar14 + 0xc]);
              param_1[lVar14 + 0xc] = 0;
            }
          }
        }
        else {
          dVar18 = *(double *)(lVar12 + (long)(int)uVar16 * 0x18);
LAB_006ee444:
          dVar20 = *pdVar9;
          lVar14 = (long)(int)uVar5;
          if (dVar18 >= dVar20) {
            if (dVar18 != dVar20 && dVar18 < dVar20 == (NAN(dVar18) || NAN(dVar20))) {
              return;
            }
            if (*(byte *)(lVar12 + (long)(int)uVar5 * 0x18 + 0x10) <=
                *(byte *)(lVar12 + (long)(int)uVar16 * 0x18 + 0x10)) {
              return;
            }
          }
          pdVar15 = (double *)(lVar12 + (long)(int)uVar16 * 0x18);
          dVar22 = pdVar9[1];
          dVar21 = *pdVar9;
          dVar20 = pdVar9[2];
          dVar19 = *pdVar15;
          dVar18 = pdVar15[2];
          pdVar9[1] = pdVar15[1];
          *pdVar9 = dVar19;
          pdVar9[2] = dVar18;
          pdVar9 = (double *)(param_1[6] + (long)(int)uVar16 * 0x18);
          pdVar9[1] = dVar22;
          *pdVar9 = dVar21;
          pdVar9[2] = dVar20;
          bVar1 = (int)uVar5 < 4;
          uVar5 = uVar16;
          if (bVar1) {
            if ((int)uVar16 < 4) {
              uVar8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
              uVar6 = -(lVar14 + 1U >> 0x1f & 1) & 0xfffffff800000000 |
                      (lVar14 + 1U & 0xffffffff) << 3;
              uVar11 = *(undefined8 *)((long)param_1 + uVar6 + 0x58);
              *(undefined8 *)((long)param_1 + uVar6 + 0x58) =
                   *(undefined8 *)((long)param_1 + uVar8 + 0x58);
              *(undefined8 *)((long)param_1 + uVar8 + 0x58) = uVar11;
            }
            else {
              FUN_006ece04(*param_1,param_1[lVar14 + 0xc]);
              param_1[lVar14 + 0xc] = 0;
            }
          }
        }
        uVar16 = uVar5 << 1 | 1;
        iVar10 = uVar5 << 1;
      } while ((int)uVar16 < iVar4);
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 9) = 0;
    *(int *)((long)param_1 + (ulong)*(byte *)(param_1 + 10) * 4 + 0x80) =
         *(int *)((long)param_1 + (ulong)*(byte *)(param_1 + 10) * 4 + 0x80) + -1;
  }
  return;
}


// ===== 006ee518  FUN_006ee518 =====

int FUN_006ee518(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_48;
  
  local_48 = 0;
  lVar3 = sqlite3_mprintf("SELECT * FROM %Q.%Q",*(undefined8 *)(param_1 + 0x30),
                          *(undefined8 *)(param_1 + 0x38));
  if (lVar3 == 0) {
    iVar1 = 7;
    goto LAB_006ee680;
  }
  iVar1 = FUN_00598a9c(*(undefined8 *)(param_1 + 0x18),lVar3,0xffffffff,0x80,0,&local_48,0);
  puVar6 = &DAT_00b0da18;
  if (DAT_00b0d9f0 == 0) {
LAB_006ee5ec:
    (*(code *)*puVar6)(lVar3);
  }
  else {
    if (DAT_00b103d8 != 0) {
      (*DAT_00b0da70)();
    }
    iVar2 = (*DAT_00b0da28)(lVar3);
    DAT_00b105b8 = DAT_00b105b8 - iVar2;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(lVar3);
    if (DAT_00b103d8 != 0) {
      puVar6 = &DAT_00b0da80;
      lVar3 = DAT_00b103d8;
      goto LAB_006ee5ec;
    }
  }
  if (iVar1 == 0) {
    if (param_2 == 0) {
      uVar4 = FUN_00592a98(local_48,0,0,0);
      uVar4 = sqlite3_mprintf("UNIQUE constraint failed: %s.%s",*(undefined8 *)(param_1 + 0x38),
                              uVar4);
    }
    else {
      uVar4 = FUN_00592a98(local_48,param_2,0,0);
      uVar5 = FUN_00592a98(local_48,param_2 + 1,0,0);
      uVar4 = sqlite3_mprintf("rtree constraint failed: %s.(%s<=%s)",*(undefined8 *)(param_1 + 0x38)
                              ,uVar4,uVar5);
    }
    iVar1 = 0x13;
    *(undefined8 *)(param_1 + 0x10) = uVar4;
  }
LAB_006ee680:
  sqlite3_finalize(local_48);
  return iVar1;
}


// ===== 006ee6a4  FUN_006ee6a4 =====

int FUN_006ee6a4(long param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint *puVar14;
  byte *pbVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  long local_a8;
  long local_a0;
  long local_98;
  uint local_90 [10];
  undefined8 local_68;
  
  local_a8 = 0;
  local_a0 = 0;
  iVar8 = FUN_006ed648(param_1,1,0,&local_a8);
  if (iVar8 == 0) {
    iVar8 = FUN_006ed2e0(param_1,param_2,&local_a0,0);
    lVar16 = local_a0;
    if ((iVar8 == 0) && (local_a0 != 0)) {
      uVar3 = *(ushort *)(*(long *)(local_a0 + 0x18) + 2);
      uVar6 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
      if (uVar6 != 0) {
        uVar11 = 0;
        pbVar15 = (byte *)(*(long *)(local_a0 + 0x18) + 5);
        do {
          if (((ulong)pbVar15[-1] << 0x38 | (ulong)*pbVar15 << 0x30 | (ulong)pbVar15[1] << 0x28 |
               (ulong)pbVar15[2] << 0x20 | (ulong)pbVar15[3] << 0x18 | (ulong)pbVar15[4] << 0x10 |
              (ulong)pbVar15[5] << 8) + (ulong)pbVar15[6] == param_2) {
            iVar9 = FUN_006f0a44(param_1,local_a0,uVar11,0);
            iVar8 = FUN_006ece04(param_1,lVar16);
            if (iVar9 != 0) {
              iVar8 = iVar9;
            }
            goto LAB_006ee9a4;
          }
          uVar11 = uVar11 + 1;
          pbVar15 = pbVar15 + *(byte *)(param_1 + 0x27);
        } while (uVar6 != uVar11);
      }
      FUN_006ece04(param_1);
      iVar8 = 0x10b;
    }
    else {
LAB_006ee9a4:
      if (iVar8 == 0) {
        plVar17 = *(long **)(param_1 + 0x98);
        iVar8 = FUN_00592fec(plVar17,0);
        if (iVar8 == 0) {
          plVar10 = (long *)plVar17[0x10];
          if ((*(ushort *)((long)plVar10 + 0x14) & 0x9000) == 0) {
            *plVar10 = param_2;
            *(undefined2 *)((long)plVar10 + 0x14) = 4;
          }
          else {
            FUN_005c2a94(plVar10,param_2);
          }
          if (*(long *)(*plVar17 + 0x18) != 0) {
            (*DAT_00b0da80)();
          }
        }
        sqlite3_step(*(undefined8 *)(param_1 + 0x98));
        plVar17 = *(long **)(param_1 + 0x98);
        if (plVar17 != (long *)0x0) {
          lVar16 = *plVar17;
          if (*(long *)(lVar16 + 0x18) != 0) {
            (*DAT_00b0da70)();
          }
          if (0 < plVar17[0x17]) {
            FUN_0058f57c(lVar16,plVar17);
          }
          iVar9 = FUN_0058f640(plVar17);
          plVar17[7] = 0;
          *(undefined1 *)((long)plVar17 + 199) = 1;
          *(undefined2 *)((long)plVar17 + 0xc4) = 0xff02;
          *(undefined4 *)((long)plVar17 + 0x2c) = 1;
          plVar17[6] = 0xffffffff;
          *(undefined4 *)(plVar17 + 8) = 0;
          plVar17[10] = 0;
          if ((iVar9 != 0) || (iVar8 = 0, *(char *)(lVar16 + 0x67) != '\0')) {
            iVar8 = FUN_005c1188(lVar16,iVar9);
          }
          if (*(long *)(lVar16 + 0x18) != 0) {
            (*DAT_00b0da80)(*(long *)(lVar16 + 0x18));
          }
          if (iVar8 != 0) goto LAB_006ee6e4;
        }
        lVar16 = local_a8;
        if ((*(int *)(param_1 + 0x2c) < 1) ||
           (lVar13 = *(long *)(local_a8 + 0x18),
           ((uint)(*(ushort *)(lVar13 + 2) >> 8) | (*(ushort *)(lVar13 + 2) & 0xff00ff) << 8) != 1))
        {
          iVar8 = 0;
        }
        else {
          local_98 = 0;
          iVar9 = FUN_006ed648(param_1,((ulong)*(byte *)(lVar13 + 4) << 0x38 |
                                        (ulong)*(byte *)(lVar13 + 5) << 0x30 |
                                        (ulong)*(byte *)(lVar13 + 6) << 0x28 |
                                        (ulong)*(byte *)(lVar13 + 7) << 0x20 |
                                        (ulong)*(byte *)(lVar13 + 8) << 0x18 |
                                        (ulong)*(byte *)(lVar13 + 9) << 0x10 |
                                       (ulong)*(byte *)(lVar13 + 10) << 8) +
                                       (ulong)*(byte *)(lVar13 + 0xb),local_a8,&local_98);
          lVar13 = local_98;
          if (iVar9 == 0) {
            iVar9 = FUN_006f0d18(param_1,local_98,*(int *)(param_1 + 0x2c) + -1);
          }
          iVar8 = FUN_006ece04(param_1,lVar13);
          if (iVar9 != 0) {
            iVar8 = iVar9;
          }
          if (iVar8 == 0) {
            uVar6 = *(int *)(param_1 + 0x2c) - 1;
            *(uint *)(param_1 + 0x2c) = uVar6;
            **(ushort **)(lVar16 + 0x18) =
                 (ushort)(uVar6 >> 8) & 0xff | (ushort)((uVar6 & 0xff00ff) << 8);
            *(undefined4 *)(lVar16 + 0x14) = 1;
          }
        }
      }
    }
  }
LAB_006ee6e4:
  lVar16 = *(long *)(param_1 + 0x68);
  do {
    if (lVar16 == 0) {
      iVar9 = FUN_006ece04(param_1,local_a8);
      if (iVar8 != 0) {
        iVar9 = iVar8;
      }
      return iVar9;
    }
    if (iVar8 == 0) {
      uVar3 = *(ushort *)(*(long *)(lVar16 + 0x18) + 2);
      uVar6 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
      if (uVar6 == 0) {
        iVar8 = 0;
      }
      else {
        uVar18 = 0;
        while( true ) {
          lVar13 = *(long *)(lVar16 + 0x18) + (ulong)*(byte *)(param_1 + 0x27) * (ulong)uVar18;
          local_98 = ((ulong)*(byte *)(lVar13 + 4) << 0x38 | (ulong)*(byte *)(lVar13 + 5) << 0x30 |
                      (ulong)*(byte *)(lVar13 + 6) << 0x28 | (ulong)*(byte *)(lVar13 + 7) << 0x20 |
                      (ulong)*(byte *)(lVar13 + 8) << 0x18 | (ulong)*(byte *)(lVar13 + 9) << 0x10 |
                     (ulong)*(byte *)(lVar13 + 10) << 8) + (ulong)*(byte *)(lVar13 + 0xb);
          bVar2 = *(byte *)(param_1 + 0x25);
          uVar11 = 0;
          puVar14 = (uint *)(lVar13 + 0xc);
          do {
            uVar1 = uVar11 + 2;
            uVar4 = (*puVar14 & 0xff00ff00) >> 8 | (*puVar14 & 0xff00ff) << 8;
            uVar5 = (puVar14[1] & 0xff00ff00) >> 8 | (puVar14[1] & 0xff00ff) << 8;
            local_90[uVar11] = uVar4 >> 0x10 | uVar4 << 0x10;
            local_90[uVar11 + 1] = uVar5 >> 0x10 | uVar5 << 0x10;
            uVar11 = uVar1;
            puVar14 = puVar14 + 2;
          } while (uVar1 < bVar2);
          iVar8 = FUN_006eeb90(param_1,&local_98,*(undefined4 *)(lVar16 + 8),&local_68);
          uVar7 = local_68;
          if (iVar8 != 0) break;
          iVar9 = FUN_006ef2f0(param_1,local_68,&local_98,*(undefined4 *)(lVar16 + 8));
          iVar8 = FUN_006ece04(param_1,uVar7);
          if (iVar9 != 0) {
            iVar8 = iVar9;
          }
          if ((iVar8 != 0) || (uVar18 = uVar18 + 1, uVar6 <= uVar18)) break;
        }
      }
    }
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar16 + 0x20);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
    puVar12 = &DAT_00b0da18;
    if (DAT_00b0d9f0 == 0) {
LAB_006ee714:
      (*(code *)*puVar12)(lVar16);
    }
    else {
      if (DAT_00b103d8 != 0) {
        (*DAT_00b0da70)();
      }
      iVar9 = (*DAT_00b0da28)(lVar16);
      DAT_00b105b8 = DAT_00b105b8 - iVar9;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(lVar16);
      if (DAT_00b103d8 != 0) {
        puVar12 = &DAT_00b0da80;
        lVar16 = DAT_00b103d8;
        goto LAB_006ee714;
      }
    }
    lVar16 = *(long *)(param_1 + 0x68);
  } while( true );
}


// ===== 006eeb90  FUN_006eeb90 =====

ulong FUN_006eeb90(long param_1,long param_2,int param_3,long *param_4)

{
  uint *puVar1;
  float *pfVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  bool bVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  uint *puVar25;
  undefined1 (*pauVar26) [12];
  float *pfVar27;
  undefined1 (*pauVar28) [16];
  float *pfVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  byte bVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  int iVar37;
  double dVar38;
  float fVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float local_98 [10];
  long local_70;
  long local_68;
  
  local_68 = 0;
  uVar22 = FUN_006ed648(param_1,1,0,&local_68);
  lVar36 = local_68;
  if ((int)uVar22 == 0) {
    iVar37 = 0;
    do {
      if (*(int *)(param_1 + 0x2c) - param_3 <= iVar37) {
        uVar22 = 0;
        break;
      }
      lVar30 = *(long *)(lVar36 + 0x18);
      local_70 = 0;
      uVar21 = (uint)(*(ushort *)(lVar30 + 2) >> 8) | (*(ushort *)(lVar30 + 2) & 0xff00ff) << 8;
      if (uVar21 == 0) {
        lVar24 = 0;
      }
      else {
        dVar38 = 0.0;
        bVar4 = *(byte *)(param_1 + 0x27);
        bVar5 = *(byte *)(param_1 + 0x25);
        uVar31 = (ulong)bVar5;
        cVar6 = *(char *)(param_1 + 0x26);
        uVar22 = 0;
        lVar24 = 0;
        bVar20 = false;
        do {
          lVar35 = lVar30 + uVar22 * bVar4;
          bVar7 = *(byte *)(lVar35 + 4);
          bVar8 = *(byte *)(lVar35 + 5);
          bVar9 = *(byte *)(lVar35 + 6);
          bVar10 = *(byte *)(lVar35 + 7);
          bVar11 = *(byte *)(lVar35 + 8);
          bVar12 = *(byte *)(lVar35 + 9);
          bVar13 = *(byte *)(lVar35 + 10);
          bVar14 = *(byte *)(lVar35 + 0xb);
          puVar25 = (uint *)(lVar35 + 0xc);
          uVar34 = 0;
          do {
            uVar32 = uVar34 + 2;
            uVar15 = (*puVar25 & 0xff00ff00) >> 8 | (*puVar25 & 0xff00ff) << 8;
            local_98[uVar34] = (float)(uVar15 >> 0x10 | uVar15 << 0x10);
            puVar1 = puVar25 + 1;
            puVar25 = puVar25 + 2;
            uVar15 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
            local_98[uVar34 + 1] = (float)(uVar15 >> 0x10 | uVar15 << 0x10);
            uVar34 = uVar32;
          } while (uVar32 < uVar31);
          if (cVar6 == '\x01') {
            if (bVar5 != 0) {
              uVar34 = 0;
              do {
                lVar35 = param_2 + uVar34 * 4;
                if ((*(int *)(lVar35 + 8) < (int)local_98[uVar34]) ||
                   ((int)local_98[uVar34 + 1] < *(int *)(lVar35 + 0xc))) goto LAB_006eecd4;
                uVar34 = uVar34 + 2;
              } while (uVar34 < uVar31);
              goto LAB_006eede8;
            }
            bVar33 = *(byte *)(param_1 + 0x24);
            if (3 < bVar33) goto LAB_006eee20;
LAB_006eedfc:
            dVar40 = 1.0;
            if (bVar33 != 2) {
              if (bVar33 != 3) goto LAB_006eecac;
              goto LAB_006eec8c;
            }
LAB_006eec9c:
            dVar40 = dVar40 * (double)((long)(int)local_98[4] - (long)(int)local_98[2]);
LAB_006eecac:
            dVar41 = (double)((long)(int)local_98[2] - (long)(int)local_98[0]);
          }
          else {
            if (bVar5 != 0) {
              uVar34 = 0;
              do {
                lVar35 = param_2 + uVar34 * 4;
                if (*(float *)(lVar35 + 8) < local_98[uVar34]) goto LAB_006eecd4;
                fVar39 = *(float *)(lVar35 + 0xc);
                fVar47 = local_98[uVar34 + 1];
                if (fVar39 != fVar47 && fVar39 < fVar47 == (NAN(fVar39) || NAN(fVar47)))
                goto LAB_006eecd4;
                uVar34 = uVar34 + 2;
              } while (uVar34 < uVar31);
            }
LAB_006eede8:
            bVar33 = *(byte *)(param_1 + 0x24);
            if (cVar6 != '\0') {
              if (bVar33 < 4) goto LAB_006eedfc;
LAB_006eee20:
              dVar40 = 1.0;
              if (bVar33 == 4) {
LAB_006eec7c:
                dVar40 = dVar40 * (double)((long)(int)local_98[8] - (long)(int)local_98[6]);
LAB_006eec8c:
                dVar40 = dVar40 * (double)((long)(int)local_98[6] - (long)(int)local_98[4]);
                goto LAB_006eec9c;
              }
              if (bVar33 == 5) {
                dVar40 = (double)((long)(int)local_70 - (long)(int)local_98[8]);
                goto LAB_006eec7c;
              }
              goto LAB_006eecac;
            }
            dVar40 = 1.0;
            if (bVar33 < 4) {
              if (bVar33 == 2) goto LAB_006eee9c;
              if (bVar33 == 3) goto LAB_006eee8c;
            }
            else {
              if (bVar33 != 4) {
                if (bVar33 != 5) goto LAB_006eeeac;
                dVar40 = (double)(local_98[9] - local_98[8]);
              }
              dVar40 = dVar40 * (double)(local_98[7] - local_98[6]);
LAB_006eee8c:
              dVar40 = dVar40 * (double)(local_98[5] - local_98[4]);
LAB_006eee9c:
              dVar40 = dVar40 * (double)(local_98[3] - local_98[2]);
            }
LAB_006eeeac:
            dVar41 = (double)(local_98[1] - local_98[0]);
          }
          lVar35 = ((ulong)bVar7 << 0x38 | (ulong)bVar8 << 0x30 | (ulong)bVar9 << 0x28 |
                    (ulong)bVar10 << 0x20 | (ulong)bVar11 << 0x18 | (ulong)bVar12 << 0x10 |
                   (ulong)bVar13 << 8) + (ulong)bVar14;
          dVar42 = dVar40 * dVar41;
          if (dVar38 <= dVar40 * dVar41 && bVar20) {
            lVar35 = lVar24;
            dVar42 = dVar38;
          }
          dVar38 = dVar42;
          bVar20 = true;
          lVar24 = lVar35;
LAB_006eecd4:
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar21);
        if (!bVar20) {
          bVar4 = *(byte *)(param_1 + 0x25);
          uVar34 = (ulong)bVar4;
          bVar5 = *(byte *)(param_1 + 0x27);
          cVar6 = *(char *)(param_1 + 0x26);
          bVar7 = *(byte *)(param_1 + 0x24);
          uVar22 = 0;
          uVar31 = uVar34;
          if (uVar34 < 3) {
            uVar31 = 2;
          }
          uVar31 = (uVar31 - 1 >> 1) + 1;
          uVar32 = uVar31 & 0x7ffffffffffffffc;
          lVar35 = lVar24;
          dVar40 = 0.0;
          do {
            lVar24 = lVar30 + uVar22 * bVar5;
            puVar25 = (uint *)(lVar24 + 0xc);
            lVar24 = ((ulong)*(byte *)(lVar24 + 4) << 0x38 | (ulong)*(byte *)(lVar24 + 5) << 0x30 |
                      (ulong)*(byte *)(lVar24 + 6) << 0x28 | (ulong)*(byte *)(lVar24 + 7) << 0x20 |
                      (ulong)*(byte *)(lVar24 + 8) << 0x18 | (ulong)*(byte *)(lVar24 + 9) << 0x10 |
                     (ulong)*(byte *)(lVar24 + 10) << 8) + (ulong)*(byte *)(lVar24 + 0xb);
            uVar23 = 0;
            do {
              uVar3 = uVar23 + 2;
              uVar15 = (*puVar25 & 0xff00ff00) >> 8 | (*puVar25 & 0xff00ff) << 8;
              local_98[uVar23] = (float)(uVar15 >> 0x10 | uVar15 << 0x10);
              puVar1 = puVar25 + 1;
              puVar25 = puVar25 + 2;
              uVar15 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
              local_98[uVar23 + 1] = (float)(uVar15 >> 0x10 | uVar15 << 0x10);
              uVar23 = uVar3;
            } while (uVar3 < uVar34);
            dVar41 = 1.0;
            if (cVar6 == '\0') {
              if (bVar7 < 4) {
                if (bVar7 == 2) goto LAB_006ef0f8;
                if (bVar7 == 3) goto LAB_006ef0e8;
              }
              else {
                if (bVar7 != 4) {
                  if (bVar7 != 5) goto LAB_006ef108;
                  dVar41 = (double)(local_98[9] - local_98[8]);
                }
                dVar41 = dVar41 * (double)(local_98[7] - local_98[6]);
LAB_006ef0e8:
                dVar41 = dVar41 * (double)(local_98[5] - local_98[4]);
LAB_006ef0f8:
                dVar41 = dVar41 * (double)(local_98[3] - local_98[2]);
              }
LAB_006ef108:
              dVar41 = dVar41 * (double)(local_98[1] - local_98[0]);
              uVar23 = uVar32;
              pauVar26 = (undefined1 (*) [12])(param_2 + 8);
              pauVar28 = (undefined1 (*) [16])local_98;
              if (bVar4 < 7) {
                uVar23 = 0;
LAB_006ef16c:
                pfVar27 = (float *)(param_2 + 0xc + uVar23 * 4);
                pfVar29 = local_98 + uVar23 + 1;
                do {
                  fVar47 = *pfVar29;
                  uVar23 = uVar23 + 2;
                  pfVar2 = pfVar27 + -1;
                  fVar49 = *pfVar27;
                  pfVar27 = pfVar27 + 2;
                  fVar39 = pfVar29[-1];
                  if (*pfVar2 <= pfVar29[-1]) {
                    fVar39 = *pfVar2;
                  }
                  if (fVar47 == fVar49 || fVar47 < fVar49 != (NAN(fVar47) || NAN(fVar49))) {
                    fVar47 = fVar49;
                  }
                  pfVar29[-1] = fVar39;
                  *pfVar29 = fVar47;
                  pfVar29 = pfVar29 + 2;
                } while (uVar23 < uVar34);
              }
              else {
                do {
                  auVar44._0_4_ = *(undefined4 *)*pauVar28;
                  auVar46._0_4_ = *(undefined4 *)(*pauVar28 + 4);
                  auVar44._4_4_ = *(undefined4 *)(*pauVar28 + 8);
                  auVar46._4_4_ = *(undefined4 *)(*pauVar28 + 0xc);
                  auVar44._8_4_ = *(undefined4 *)pauVar28[1];
                  auVar46._8_4_ = *(undefined4 *)(pauVar28[1] + 4);
                  auVar44._12_4_ = *(undefined4 *)(pauVar28[1] + 8);
                  auVar46._12_4_ = *(undefined4 *)(pauVar28[1] + 0xc);
                  uVar23 = uVar23 - 4;
                  auVar43._4_4_ = *(undefined4 *)(*pauVar26 + 8);
                  auVar43._0_4_ = *(undefined4 *)*pauVar26;
                  auVar43._8_4_ = *(undefined4 *)(pauVar26[1] + 4);
                  auVar43._12_4_ = *(undefined4 *)pauVar26[2];
                  auVar43 = NEON_fcmgt(auVar43,auVar44,4);
                  auVar51._4_4_ = *(undefined4 *)pauVar26[1];
                  auVar51._0_4_ = *(undefined4 *)(*pauVar26 + 4);
                  auVar51._8_4_ = *(undefined4 *)(pauVar26[1] + 8);
                  auVar51._12_4_ = *(undefined4 *)(pauVar26[2] + 4);
                  auVar51 = NEON_fcmgt(auVar46,auVar51,4);
                  auVar45._4_4_ = *(undefined4 *)(*pauVar26 + 8);
                  auVar45._0_4_ = *(undefined4 *)*pauVar26;
                  auVar45._8_4_ = *(undefined4 *)(pauVar26[1] + 4);
                  auVar45._12_4_ = *(undefined4 *)pauVar26[2];
                  auVar43 = NEON_bsl(auVar43,auVar44,auVar45,1);
                  auVar52._4_4_ = *(undefined4 *)pauVar26[1];
                  auVar52._0_4_ = *(undefined4 *)(*pauVar26 + 4);
                  auVar52._8_4_ = *(undefined4 *)(pauVar26[1] + 8);
                  auVar52._12_4_ = *(undefined4 *)(pauVar26[2] + 4);
                  auVar45 = NEON_bsl(auVar51,auVar46,auVar52,1);
                  *(int *)*pauVar28 = auVar43._0_4_;
                  *(int *)(*pauVar28 + 4) = auVar45._0_4_;
                  *(int *)(*pauVar28 + 8) = auVar43._4_4_;
                  *(int *)(*pauVar28 + 0xc) = auVar45._4_4_;
                  *(int *)pauVar28[1] = auVar43._8_4_;
                  *(int *)(pauVar28[1] + 4) = auVar45._8_4_;
                  *(int *)(pauVar28[1] + 8) = auVar43._12_4_;
                  *(int *)(pauVar28[1] + 0xc) = auVar45._12_4_;
                  pauVar26 = (undefined1 (*) [12])(pauVar26[2] + 8);
                  pauVar28 = pauVar28 + 2;
                } while (uVar23 != 0);
                uVar23 = uVar32 << 1;
                if (uVar31 != uVar32) goto LAB_006ef16c;
              }
            }
            else {
              if (bVar7 < 4) {
                if (bVar7 == 2) goto LAB_006ef008;
                if (bVar7 == 3) goto LAB_006eeff8;
              }
              else {
                if (bVar7 != 4) {
                  if (bVar7 != 5) goto LAB_006ef018;
                  dVar41 = (double)((long)(int)local_70 - (long)(int)local_98[8]);
                }
                dVar41 = dVar41 * (double)((long)(int)local_98[8] - (long)(int)local_98[6]);
LAB_006eeff8:
                dVar41 = dVar41 * (double)((long)(int)local_98[6] - (long)(int)local_98[4]);
LAB_006ef008:
                dVar41 = dVar41 * (double)((long)(int)local_98[4] - (long)(int)local_98[2]);
              }
LAB_006ef018:
              dVar41 = dVar41 * (double)((long)(int)local_98[2] - (long)(int)local_98[0]);
              uVar23 = uVar32;
              pauVar26 = (undefined1 (*) [12])(param_2 + 8);
              pauVar28 = (undefined1 (*) [16])local_98;
              if (bVar4 < 7) {
                uVar23 = 0;
              }
              else {
                do {
                  uVar23 = uVar23 - 4;
                  uVar48 = (undefined4)((ulong)*(undefined8 *)(*pauVar26 + 8) >> 0x20);
                  uVar50 = (undefined4)((ulong)*(undefined8 *)pauVar26[2] >> 0x20);
                  auVar18._12_4_ = uVar50;
                  auVar18._0_12_ = *(undefined1 (*) [12])(pauVar26[1] + 4);
                  auVar51 = NEON_smin(pauVar28[1],auVar18,4);
                  auVar16._12_4_ = uVar48;
                  auVar16._0_12_ = *pauVar26;
                  auVar52 = NEON_smin(*pauVar28,auVar16,4);
                  auVar19._12_4_ = uVar50;
                  auVar19._0_12_ = *(undefined1 (*) [12])(pauVar26[1] + 4);
                  auVar45 = NEON_smax(pauVar28[1],auVar19,4);
                  auVar17._12_4_ = uVar48;
                  auVar17._0_12_ = *pauVar26;
                  auVar43 = NEON_smax(*pauVar28,auVar17,4);
                  *(int *)*pauVar28 = auVar52._0_4_;
                  *(int *)(*pauVar28 + 4) = auVar43._4_4_;
                  *(int *)(*pauVar28 + 8) = auVar52._8_4_;
                  *(int *)(*pauVar28 + 0xc) = auVar43._12_4_;
                  *(int *)pauVar28[1] = auVar51._0_4_;
                  *(int *)(pauVar28[1] + 4) = auVar45._4_4_;
                  *(int *)(pauVar28[1] + 8) = auVar51._8_4_;
                  *(int *)(pauVar28[1] + 0xc) = auVar45._12_4_;
                  pauVar26 = (undefined1 (*) [12])(pauVar26[2] + 8);
                  pauVar28 = pauVar28 + 2;
                } while (uVar23 != 0);
                uVar23 = uVar32 << 1;
                if (uVar31 == uVar32) goto LAB_006ef1a8;
              }
              pfVar27 = (float *)(param_2 + 0xc + uVar23 * 4);
              pfVar29 = local_98 + uVar23 + 1;
              do {
                pfVar2 = pfVar27 + -1;
                fVar47 = *pfVar27;
                uVar23 = uVar23 + 2;
                pfVar27 = pfVar27 + 2;
                fVar39 = pfVar29[-1];
                if ((int)*pfVar2 <= (int)pfVar29[-1]) {
                  fVar39 = *pfVar2;
                }
                pfVar29[-1] = fVar39;
                fVar39 = *pfVar29;
                if ((int)*pfVar29 <= (int)fVar47) {
                  fVar39 = fVar47;
                }
                *pfVar29 = fVar39;
                pfVar29 = pfVar29 + 2;
              } while (uVar23 < uVar34);
            }
LAB_006ef1a8:
            dVar42 = 1.0;
            if (cVar6 == '\0') {
              if (bVar7 < 4) {
                if (bVar7 == 2) goto LAB_006ef288;
                if (bVar7 == 3) goto LAB_006ef278;
              }
              else {
                if (bVar7 != 4) {
                  if (bVar7 != 5) goto LAB_006ef298;
                  dVar42 = (double)(local_98[9] - local_98[8]);
                }
                dVar42 = dVar42 * (double)(local_98[7] - local_98[6]);
LAB_006ef278:
                dVar42 = dVar42 * (double)(local_98[5] - local_98[4]);
LAB_006ef288:
                dVar42 = dVar42 * (double)(local_98[3] - local_98[2]);
              }
LAB_006ef298:
              dVar42 = dVar42 * (double)(local_98[1] - local_98[0]);
            }
            else {
              if (bVar7 < 4) {
                if (bVar7 == 2) goto LAB_006ef220;
                if (bVar7 == 3) goto LAB_006ef210;
              }
              else {
                if (bVar7 != 4) {
                  if (bVar7 != 5) goto LAB_006ef230;
                  dVar42 = (double)((long)(int)local_70 - (long)(int)local_98[8]);
                }
                dVar42 = dVar42 * (double)((long)(int)local_98[8] - (long)(int)local_98[6]);
LAB_006ef210:
                dVar42 = dVar42 * (double)((long)(int)local_98[6] - (long)(int)local_98[4]);
LAB_006ef220:
                dVar42 = dVar42 * (double)((long)(int)local_98[4] - (long)(int)local_98[2]);
              }
LAB_006ef230:
              dVar42 = dVar42 * (double)((long)(int)local_98[2] - (long)(int)local_98[0]);
            }
            dVar42 = dVar42 - dVar41;
            if ((uVar22 != 0) && (dVar40 <= dVar42)) {
              bVar20 = false;
              if ((dVar42 == dVar40) && (bVar20 = false, !NAN(dVar41) && !NAN(dVar38))) {
                bVar20 = dVar41 < dVar38;
              }
              if (!bVar20) {
                lVar24 = lVar35;
                dVar41 = dVar38;
                dVar42 = dVar40;
              }
            }
            uVar22 = uVar22 + 1;
            lVar35 = lVar24;
            dVar38 = dVar41;
            dVar40 = dVar42;
          } while (uVar22 != uVar21);
        }
      }
      uVar21 = FUN_006ed648(param_1,lVar24,lVar36,&local_70);
      uVar22 = (ulong)uVar21;
      FUN_006ece04(param_1,lVar36);
      iVar37 = iVar37 + 1;
      lVar36 = local_70;
    } while (uVar21 == 0);
  }
  *param_4 = lVar36;
  return uVar22;
}


// ===== 006ef2f0  FUN_006ef2f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_006ef2f0(long param_1,long *param_2,ulong *param_3,int param_4)

{
  uint *puVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined4 *puVar20;
  int iVar26;
  int iVar27;
  uint uVar28;
  void *pvVar29;
  undefined8 uVar30;
  float *pfVar31;
  ulong uVar32;
  undefined8 *puVar33;
  undefined1 (*pauVar34) [16];
  float *pfVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  uint *puVar39;
  undefined1 (*pauVar40) [12];
  int *piVar41;
  undefined4 *puVar42;
  ulong uVar43;
  uint uVar44;
  ulong uVar46;
  ulong uVar47;
  ulong *puVar48;
  long *plVar49;
  ulong uVar50;
  long lVar51;
  ulong uVar52;
  long lVar53;
  undefined1 (*pauVar54) [16];
  int *piVar55;
  char cVar56;
  undefined4 *puVar57;
  long *plVar58;
  undefined8 *puVar59;
  ulong uVar60;
  undefined1 (*pauVar61) [16];
  void *pvVar62;
  void *pvVar63;
  ulong uVar64;
  size_t __n;
  ulong uVar65;
  ulong uVar66;
  int *piVar67;
  size_t __n_00;
  ulong uVar68;
  float fVar69;
  int iVar72;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar73;
  double dVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined4 uVar77;
  undefined4 uVar78;
  double dVar79;
  undefined1 auVar80 [16];
  double dVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  double dVar100;
  undefined8 uVar101;
  ulong uVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  double dVar109;
  undefined8 uVar110;
  undefined1 auVar111 [16];
  long *local_150;
  long *local_148;
  int local_11c;
  undefined8 auStack_e8 [2];
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0 [2];
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  int iStack_70;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  uint uVar45;
  
  if (0 < param_4) {
    uVar46 = *param_3;
    iVar26 = (int)((uVar46 & 0xffffffff) * 0x51d07eaf >> 0x20);
    for (puVar59 = *(undefined8 **)
                    (param_1 + (ulong)((int)uVar46 +
                                      (iVar26 + ((uint)((int)uVar46 - iVar26) >> 1) >> 6) * -0x61) *
                               8 + 0xc0); puVar59 != (undefined8 *)0x0;
        puVar59 = (undefined8 *)puVar59[4]) {
      if (puVar59[1] == uVar46) {
        FUN_006ece04(param_1,*puVar59);
        if (param_2 != (long *)0x0) {
          *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        }
        *puVar59 = param_2;
        break;
      }
    }
  }
  bVar3 = *(byte *)(param_1 + 0x27);
  uVar6 = *(ushort *)(param_2[3] + 2);
  uVar28 = 0;
  if (bVar3 != 0) {
    uVar28 = (*(int *)(param_1 + 0x20) + -4) / (int)(uint)bVar3;
  }
  uVar45 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
  if ((int)uVar45 < (int)uVar28) {
    lVar53 = param_2[3] + (ulong)uVar45 * (ulong)bVar3;
    uVar46 = (*param_3 & 0xff00ff00ff00ff00) >> 8 | (*param_3 & 0xff00ff00ff00ff) << 8;
    uVar46 = (uVar46 & 0xffff0000ffff0000) >> 0x10 | (uVar46 & 0xffff0000ffff) << 0x10;
    *(ulong *)(lVar53 + 4) = uVar46 >> 0x20 | uVar46 << 0x20;
    if (*(char *)(param_1 + 0x25) != '\0') {
      uVar46 = 0;
      puVar39 = (uint *)(lVar53 + 0xc);
      do {
        uVar44 = *(uint *)((long)param_3 + uVar46 * 4 + 8);
        uVar46 = uVar46 + 1;
        uVar44 = (uVar44 & 0xff00ff00) >> 8 | (uVar44 & 0xff00ff) << 8;
        *puVar39 = uVar44 >> 0x10 | uVar44 << 0x10;
        puVar39 = puVar39 + 1;
      } while (uVar46 < *(byte *)(param_1 + 0x25));
    }
    *(ushort *)(param_2[3] + 2) =
         (ushort)(uVar45 + 1 >> 8) & 0xff | (ushort)((uVar45 + 1 & 0xff00ff) << 8);
    *(undefined4 *)((long)param_2 + 0x14) = 1;
  }
  if (uVar45 != uVar28) {
    uVar46 = FUN_006f155c(param_1,param_2,param_3);
    if ((int)uVar46 != 0) {
      return uVar46;
    }
    if (param_4 != 0) {
      uVar46 = FUN_006f1aa8();
      return uVar46;
    }
    uVar46 = FUN_006f18f4(param_1,*param_3,param_2[1]);
    return uVar46;
  }
  uVar6 = *(ushort *)(param_2[3] + 2);
  iVar26 = sqlite3_initialize();
  if (iVar26 == 0) {
    uVar28 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
    uVar64 = (ulong)uVar28;
    uVar46 = uVar64 + 1;
    pvVar63 = (void *)FUN_005827b0(uVar46 * 0x34);
    if (pvVar63 != (void *)0x0) {
      __n_00 = uVar46 * 4;
      memset((void *)((long)pvVar63 + uVar46 * 0x30),0,__n_00);
      if (uVar28 == 0) {
        uVar64 = 0;
      }
      else {
        uVar47 = 0;
        pvVar29 = pvVar63;
        do {
          lVar53 = param_2[3] + uVar47 * *(byte *)(param_1 + 0x27);
          puVar39 = (uint *)(lVar53 + 0xc);
          *(ulong *)((long)pvVar63 + uVar47 * 0x30) =
               ((ulong)*(byte *)(lVar53 + 4) << 0x38 | (ulong)*(byte *)(lVar53 + 5) << 0x30 |
                (ulong)*(byte *)(lVar53 + 6) << 0x28 | (ulong)*(byte *)(lVar53 + 7) << 0x20 |
                (ulong)*(byte *)(lVar53 + 8) << 0x18 | (ulong)*(byte *)(lVar53 + 9) << 0x10 |
               (ulong)*(byte *)(lVar53 + 10) << 8) + (ulong)*(byte *)(lVar53 + 0xb);
          uVar66 = 0;
          do {
            uVar60 = uVar66 + 2;
            uVar45 = (*puVar39 & 0xff00ff00) >> 8 | (*puVar39 & 0xff00ff) << 8;
            *(uint *)((long)pvVar29 + uVar66 * 4 + 8) = uVar45 >> 0x10 | uVar45 << 0x10;
            puVar1 = puVar39 + 1;
            puVar39 = puVar39 + 2;
            uVar45 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
            *(uint *)((long)pvVar29 + uVar66 * 4 + 0xc) = uVar45 >> 0x10 | uVar45 << 0x10;
            uVar66 = uVar60;
          } while (uVar60 < *(byte *)(param_1 + 0x25));
          uVar47 = uVar47 + 1;
          pvVar29 = (void *)((long)pvVar29 + 0x30);
        } while (uVar47 != uVar64);
      }
      memset((void *)(param_2[3] + 2),0,(long)*(int *)(param_1 + 0x20) - 2);
      *(undefined4 *)((long)param_2 + 0x14) = 1;
      puVar48 = (ulong *)((long)pvVar63 + uVar64 * 0x30);
      auVar75 = *(undefined1 (*) [16])(param_3 + 2);
      auVar70 = *(undefined1 (*) [16])(param_3 + 4);
      uVar47 = *param_3;
      puVar48[1] = param_3[1];
      *puVar48 = uVar47;
      puVar48[3] = auVar75._8_8_;
      puVar48[2] = auVar75._0_8_;
      puVar48[5] = auVar70._8_8_;
      puVar48[4] = auVar70._0_8_;
      if (param_2[1] == 1) {
        iVar26 = *(int *)(param_1 + 0x20);
        iVar27 = sqlite3_initialize();
        if ((iVar27 == 0) &&
           (local_150 = (long *)FUN_005827b0((long)iVar26 + 0x28), local_150 != (long *)0x0)) {
          memset(local_150,0,(long)*(int *)(param_1 + 0x20) + 0x28);
          local_150[3] = (long)(local_150 + 5);
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
          *local_150 = (long)param_2;
          local_150[2] = 0x100000001;
          *(int *)(param_2 + 2) = (int)param_2[2] + 1;
          iVar26 = *(int *)(param_1 + 0x20);
          iVar27 = sqlite3_initialize();
          if (iVar27 != 0) goto LAB_006ef7a8;
LAB_006ef754:
          local_148 = (long *)FUN_005827b0((long)iVar26 + 0x28);
          if (local_148 == (long *)0x0) goto LAB_006ef7a8;
          memset(local_148,0,(long)*(int *)(param_1 + 0x20) + 0x28);
          local_148[3] = (long)(local_148 + 5);
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
          *local_148 = (long)param_2;
          local_148[2] = 0x100000001;
          *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        }
        else {
          local_150 = (long *)0x0;
          iVar26 = *(int *)(param_1 + 0x20);
          iVar27 = sqlite3_initialize();
          if (iVar27 == 0) goto LAB_006ef754;
LAB_006ef7a8:
          local_148 = (long *)0x0;
        }
        uVar45 = *(int *)(param_1 + 0x2c) + 1;
        *(uint *)(param_1 + 0x2c) = uVar45;
        *(undefined4 *)((long)param_2 + 0x14) = 1;
        *(ushort *)param_2[3] = (ushort)(uVar45 >> 8) & 0xff | (ushort)((uVar45 & 0xff00ff) << 8);
        if (local_148 != (long *)0x0) {
LAB_006ef7dc:
          bVar18 = false;
          if (local_150 == (long *)0x0) {
            uVar46 = 7;
            goto LAB_006ef444;
          }
          memset((void *)local_148[3],0,(long)*(int *)(param_1 + 0x20));
          memset((void *)local_150[3],0,(long)*(int *)(param_1 + 0x20));
          bVar3 = *(byte *)(param_1 + 0x24);
          iVar26 = sqlite3_initialize();
          if (iVar26 == 0) {
            __n = __n_00 + 8 + (__n_00 + 8) * (ulong)bVar3;
            pvVar29 = (void *)FUN_005827b0(__n);
            if (pvVar29 != (void *)0x0) {
              bVar3 = *(byte *)(param_1 + 0x24);
              memset(pvVar29,0,__n);
              uVar47 = (ulong)*(byte *)(param_1 + 0x24);
              if (*(byte *)(param_1 + 0x24) == 0) {
                lVar53 = 0;
                lVar51 = 0;
              }
              else {
                uVar66 = 0;
                uVar60 = uVar46 & 0x1fff8;
                auStack_e8[0] = SUB168(_DAT_0029f840,8);
                uVar30 = SUB168(_DAT_0029f840,0);
                pvVar62 = pvVar29;
                do {
                  lVar53 = (long)pvVar29 + uVar66 * uVar46 * 4 + uVar47 * 8;
                  *(long *)((long)pvVar29 + uVar66 * 8) = lVar53;
                  if (uVar28 < 7) {
                    uVar50 = 0;
LAB_006ef998:
                    do {
                      *(int *)((long)pvVar62 + uVar50 * 4 + uVar47 * 8) = (int)uVar50;
                      uVar50 = uVar50 + 1;
                    } while (uVar46 != uVar50);
                  }
                  else {
                    lVar51 = uVar47 << 3;
                    auVar70._8_8_ = auStack_e8[0];
                    auVar70._0_8_ = uVar30;
                    uVar50 = uVar60;
                    do {
                      iVar26 = auVar70._4_4_;
                      auVar75._0_8_ = CONCAT44(iVar26 + 4,auVar70._0_4_ + 4);
                      iVar27 = auVar70._8_4_;
                      auVar75._8_4_ = iVar27 + 4;
                      iVar72 = auVar70._12_4_;
                      auVar75._12_4_ = iVar72 + 4;
                      puVar59 = (undefined8 *)((long)pvVar62 + lVar51);
                      uVar50 = uVar50 - 8;
                      lVar51 = lVar51 + 0x20;
                      puVar59[1] = auVar70._8_8_;
                      *puVar59 = auVar70._0_8_;
                      puVar59[3] = auVar75._8_8_;
                      puVar59[2] = auVar75._0_8_;
                      auVar70._0_4_ = auVar70._0_4_ + 8;
                      auVar70._4_4_ = iVar26 + 8;
                      auVar70._8_4_ = iVar27 + 8;
                      auVar70._12_4_ = iVar72 + 8;
                    } while (uVar50 != 0);
                    uVar50 = uVar60;
                    if (uVar60 != uVar46) goto LAB_006ef998;
                  }
                  FUN_006f1d84(param_1,lVar53,uVar46,uVar66 & 0xffffffff,pvVar63,
                               (long)pvVar29 + bVar3 * uVar46 * 4 + (ulong)bVar3 * 8);
                  bVar4 = *(byte *)(param_1 + 0x24);
                  uVar47 = (ulong)bVar4;
                  uVar66 = uVar66 + 1;
                  pvVar62 = (void *)((long)pvVar62 + __n_00);
                } while (uVar66 < uVar47);
                if (bVar4 != 0) {
                  iVar26 = 0;
                  if (*(byte *)(param_1 + 0x27) != 0) {
                    iVar26 = (*(int *)(param_1 + 0x20) + -4) / (int)(uint)*(byte *)(param_1 + 0x27);
                  }
                  iVar27 = (int)((ulong)((long)iVar26 * 0x55555555) >> 0x20) - iVar26;
                  iVar27 = ((iVar27 >> 1) - (iVar27 >> 0x1f)) + (int)uVar46;
                  if (iVar26 / 3 <= iVar27) {
                    bVar3 = *(byte *)(param_1 + 0x25);
                    uVar60 = (ulong)bVar3;
                    lVar51 = (long)(iVar26 / 3);
                    lVar53 = uVar60 - 3;
                    uVar66 = uVar60;
                    if (uVar60 < 3) {
                      uVar66 = 2;
                      lVar53 = 0;
                    }
                    uVar50 = lVar53 + 1;
                    cVar5 = *(char *)(param_1 + 0x26);
                    uVar37 = (uVar50 >> 1) + 1;
                    uVar32 = 0;
                    uVar66 = (uVar66 - 1 >> 1) + 1;
                    uVar43 = uVar37 & 0xfffffffffffffffc;
                    uVar65 = uVar66 & 0x7ffffffffffffffc;
                    uVar52 = uVar60 + uVar43 * -2;
                    uVar68 = uVar65 << 1;
                    puVar42 = (undefined4 *)((long)&uStack_b8 + uVar60 * 4);
                    puVar20 = (undefined4 *)((long)auStack_e8 + uVar60 * 4);
                    dVar74 = 0.0;
                    cVar56 = cVar5;
                    iVar26 = 0;
                    iVar72 = 0;
                    do {
                      uVar77 = 0;
                      uVar78 = 0;
                      dVar79 = 0.0;
                      dVar12 = 0.0;
                      piVar55 = *(int **)((long)pvVar29 + uVar32 * 8);
                      local_11c = 0;
                      puVar59 = (undefined8 *)((long)pvVar63 + (long)*piVar55 * 0x30);
                      pauVar54 = (undefined1 (*) [16])((long)pvVar63 + (long)piVar55[uVar64] * 0x30)
                      ;
                      lVar53 = lVar51;
                      do {
                        uStack_98 = puVar59[1];
                        local_a0 = *puVar59;
                        uStack_88 = puVar59[3];
                        local_90 = puVar59[2];
                        local_78 = puVar59[5];
                        local_80 = puVar59[4];
                        uStack_c8 = SUB168(*pauVar54,8);
                        local_d0 = SUB168(*pauVar54,0);
                        uStack_b8 = SUB168(pauVar54[1],8);
                        uVar30 = SUB168(pauVar54[1],0);
                        local_c0[0] = (float)(int)uVar30;
                        local_c0[1] = (float)SUB84(uVar30,4);
                        local_a8 = SUB168(pauVar54[2],8);
                        local_b0 = SUB168(pauVar54[2],0);
                        if (1 < uVar28) {
                          uVar36 = 1;
                          do {
                            iVar7 = piVar55[uVar36];
                            if ((long)uVar36 < lVar53) {
                              if (cVar5 == '\0') {
                                if (6 < bVar3) {
                                  puVar57 = (undefined4 *)((long)pvVar63 + (long)iVar7 * 0x30 + 8);
                                  uVar102 = uVar65;
                                  pauVar34 = (undefined1 (*) [16])&uStack_98;
                                  do {
                                    auVar82._0_4_ = *(undefined4 *)*pauVar34;
                                    auVar84._0_4_ = *(undefined4 *)(*pauVar34 + 4);
                                    auVar82._4_4_ = *(undefined4 *)(*pauVar34 + 8);
                                    auVar84._4_4_ = *(undefined4 *)(*pauVar34 + 0xc);
                                    auVar82._8_4_ = *(undefined4 *)pauVar34[1];
                                    auVar84._8_4_ = *(undefined4 *)(pauVar34[1] + 4);
                                    auVar82._12_4_ = *(undefined4 *)(pauVar34[1] + 8);
                                    auVar84._12_4_ = *(undefined4 *)(pauVar34[1] + 0xc);
                                    uVar102 = uVar102 - 4;
                                    auVar94._0_4_ = *puVar57;
                                    auVar103._0_4_ = puVar57[1];
                                    auVar94._4_4_ = puVar57[2];
                                    auVar103._4_4_ = puVar57[3];
                                    auVar94._8_4_ = puVar57[4];
                                    auVar103._8_4_ = puVar57[5];
                                    auVar94._12_4_ = puVar57[6];
                                    auVar103._12_4_ = puVar57[7];
                                    puVar57 = puVar57 + 8;
                                    auVar70 = NEON_fcmgt(auVar94,auVar82,4);
                                    auVar75 = NEON_fcmgt(auVar84,auVar103,4);
                                    auVar70 = NEON_bsl(auVar70,auVar82,auVar94,1);
                                    auVar75 = NEON_bsl(auVar75,auVar84,auVar103,1);
                                    *(int *)*pauVar34 = auVar70._0_4_;
                                    *(int *)(*pauVar34 + 4) = auVar75._0_4_;
                                    *(int *)(*pauVar34 + 8) = auVar70._4_4_;
                                    *(int *)(*pauVar34 + 0xc) = auVar75._4_4_;
                                    *(int *)pauVar34[1] = auVar70._8_4_;
                                    *(int *)(pauVar34[1] + 4) = auVar75._8_4_;
                                    *(int *)(pauVar34[1] + 8) = auVar70._12_4_;
                                    *(int *)(pauVar34[1] + 0xc) = auVar75._12_4_;
                                    pauVar34 = pauVar34 + 2;
                                  } while (uVar102 != 0);
                                  uVar102 = uVar68;
                                  if (uVar66 == uVar65) goto LAB_006efbb0;
                                }
                                else {
                                  uVar102 = 0;
                                }
                                pfVar31 = (float *)((long)&uStack_98 + uVar102 * 4 + 4);
                                pfVar35 = (float *)((long)pvVar63 +
                                                   uVar102 * 4 + (long)iVar7 * 0x30 + 0xc);
                                do {
                                  uVar102 = uVar102 + 2;
                                  fVar69 = pfVar31[-1];
                                  if (pfVar35[-1] <= pfVar31[-1]) {
                                    fVar69 = pfVar35[-1];
                                  }
                                  pfVar31[-1] = fVar69;
                                  fVar69 = *pfVar31;
                                  fVar73 = *pfVar35;
                                  if (fVar69 == fVar73 ||
                                      fVar69 < fVar73 != (NAN(fVar69) || NAN(fVar73))) {
                                    fVar69 = fVar73;
                                  }
                                  *pfVar31 = fVar69;
                                  pfVar31 = pfVar31 + 2;
                                  pfVar35 = pfVar35 + 2;
                                } while (uVar102 < uVar60);
LAB_006efbb0:
                                cVar56 = '\0';
                              }
                              else {
                                if (6 < bVar3) {
                                  uVar102 = uVar65;
                                  pauVar34 = (undefined1 (*) [16])
                                             ((long)pvVar63 + (long)iVar7 * 0x30 + 8);
                                  pauVar61 = (undefined1 (*) [16])&uStack_98;
                                  do {
                                    uVar102 = uVar102 - 4;
                                    auVar80 = NEON_smin(pauVar61[1],pauVar34[1],4);
                                    auVar83 = NEON_smin(*pauVar61,*pauVar34,4);
                                    auVar75 = NEON_smax(pauVar61[1],pauVar34[1],4);
                                    auVar70 = NEON_smax(*pauVar61,*pauVar34,4);
                                    *(int *)*pauVar61 = auVar83._0_4_;
                                    *(int *)(*pauVar61 + 4) = auVar70._4_4_;
                                    *(int *)(*pauVar61 + 8) = auVar83._8_4_;
                                    *(int *)(*pauVar61 + 0xc) = auVar70._12_4_;
                                    *(int *)pauVar61[1] = auVar80._0_4_;
                                    *(int *)(pauVar61[1] + 4) = auVar75._4_4_;
                                    *(int *)(pauVar61[1] + 8) = auVar80._8_4_;
                                    *(int *)(pauVar61[1] + 0xc) = auVar75._12_4_;
                                    pauVar61 = pauVar61 + 2;
                                    pauVar34 = pauVar34 + 2;
                                  } while (uVar102 != 0);
                                  uVar102 = uVar68;
                                  cVar56 = cVar5;
                                  if (uVar66 == uVar65) goto LAB_006efbb4;
                                }
                                else {
                                  uVar102 = 0;
                                }
                                piVar41 = (int *)((long)&uStack_98 + uVar102 * 4 + 4);
                                piVar67 = (int *)((long)pvVar63 +
                                                 uVar102 * 4 + (long)iVar7 * 0x30 + 0xc);
                                do {
                                  uVar102 = uVar102 + 2;
                                  iVar7 = piVar41[-1];
                                  if (piVar67[-1] <= piVar41[-1]) {
                                    iVar7 = piVar67[-1];
                                  }
                                  piVar41[-1] = iVar7;
                                  iVar7 = *piVar41;
                                  if (*piVar41 <= *piVar67) {
                                    iVar7 = *piVar67;
                                  }
                                  *piVar41 = iVar7;
                                  piVar41 = piVar41 + 2;
                                  piVar67 = piVar67 + 2;
                                  cVar56 = cVar5;
                                } while (uVar102 < uVar60);
                              }
                            }
                            else {
                              if (cVar56 == '\0') {
                                if (6 < bVar3) {
                                  puVar57 = (undefined4 *)((long)pvVar63 + (long)iVar7 * 0x30 + 8);
                                  uVar102 = uVar65;
                                  pauVar34 = (undefined1 (*) [16])&uStack_c8;
                                  do {
                                    auVar80._0_4_ = *(undefined4 *)*pauVar34;
                                    auVar83._0_4_ = *(undefined4 *)(*pauVar34 + 4);
                                    auVar80._4_4_ = *(undefined4 *)(*pauVar34 + 8);
                                    auVar83._4_4_ = *(undefined4 *)(*pauVar34 + 0xc);
                                    auVar80._8_4_ = *(undefined4 *)pauVar34[1];
                                    auVar83._8_4_ = *(undefined4 *)(pauVar34[1] + 4);
                                    auVar80._12_4_ = *(undefined4 *)(pauVar34[1] + 8);
                                    auVar83._12_4_ = *(undefined4 *)(pauVar34[1] + 0xc);
                                    uVar102 = uVar102 - 4;
                                    auVar95._0_4_ = *puVar57;
                                    auVar104._0_4_ = puVar57[1];
                                    auVar95._4_4_ = puVar57[2];
                                    auVar104._4_4_ = puVar57[3];
                                    auVar95._8_4_ = puVar57[4];
                                    auVar104._8_4_ = puVar57[5];
                                    auVar95._12_4_ = puVar57[6];
                                    auVar104._12_4_ = puVar57[7];
                                    puVar57 = puVar57 + 8;
                                    auVar70 = NEON_fcmgt(auVar95,auVar80,4);
                                    auVar75 = NEON_fcmgt(auVar83,auVar104,4);
                                    auVar70 = NEON_bsl(auVar70,auVar80,auVar95,1);
                                    auVar75 = NEON_bsl(auVar75,auVar83,auVar104,1);
                                    *(int *)*pauVar34 = auVar70._0_4_;
                                    *(int *)(*pauVar34 + 4) = auVar75._0_4_;
                                    *(int *)(*pauVar34 + 8) = auVar70._4_4_;
                                    *(int *)(*pauVar34 + 0xc) = auVar75._4_4_;
                                    *(int *)pauVar34[1] = auVar70._8_4_;
                                    *(int *)(pauVar34[1] + 4) = auVar75._8_4_;
                                    *(int *)(pauVar34[1] + 8) = auVar70._12_4_;
                                    *(int *)(pauVar34[1] + 0xc) = auVar75._12_4_;
                                    pauVar34 = pauVar34 + 2;
                                  } while (uVar102 != 0);
                                  uVar102 = uVar68;
                                  if (uVar66 == uVar65) goto LAB_006efbb0;
                                }
                                else {
                                  uVar102 = 0;
                                }
                                pfVar31 = (float *)((long)&uStack_c8 + uVar102 * 4 + 4);
                                pfVar35 = (float *)((long)pvVar63 +
                                                   uVar102 * 4 + (long)iVar7 * 0x30 + 0xc);
                                do {
                                  uVar102 = uVar102 + 2;
                                  fVar69 = pfVar31[-1];
                                  if (pfVar35[-1] <= pfVar31[-1]) {
                                    fVar69 = pfVar35[-1];
                                  }
                                  pfVar31[-1] = fVar69;
                                  fVar69 = *pfVar31;
                                  fVar73 = *pfVar35;
                                  if (fVar69 == fVar73 ||
                                      fVar69 < fVar73 != (NAN(fVar69) || NAN(fVar73))) {
                                    fVar69 = fVar73;
                                  }
                                  *pfVar31 = fVar69;
                                  pfVar31 = pfVar31 + 2;
                                  pfVar35 = pfVar35 + 2;
                                } while (uVar102 < uVar60);
                                goto LAB_006efbb0;
                              }
                              if (6 < bVar3) {
                                pauVar34 = (undefined1 (*) [16])
                                           ((long)pvVar63 + (long)iVar7 * 0x30 + 8);
                                uVar102 = uVar65;
                                pauVar61 = (undefined1 (*) [16])&uStack_c8;
                                do {
                                  uVar102 = uVar102 - 4;
                                  auVar80 = NEON_smin(pauVar61[1],pauVar34[1],4);
                                  auVar83 = NEON_smin(*pauVar61,*pauVar34,4);
                                  auVar75 = NEON_smax(pauVar61[1],pauVar34[1],4);
                                  auVar70 = NEON_smax(*pauVar61,*pauVar34,4);
                                  *(int *)*pauVar61 = auVar83._0_4_;
                                  *(int *)(*pauVar61 + 4) = auVar70._4_4_;
                                  *(int *)(*pauVar61 + 8) = auVar83._8_4_;
                                  *(int *)(*pauVar61 + 0xc) = auVar70._12_4_;
                                  *(int *)pauVar61[1] = auVar80._0_4_;
                                  *(int *)(pauVar61[1] + 4) = auVar75._4_4_;
                                  *(int *)(pauVar61[1] + 8) = auVar80._8_4_;
                                  *(int *)(pauVar61[1] + 0xc) = auVar75._12_4_;
                                  pauVar61 = pauVar61 + 2;
                                  pauVar34 = pauVar34 + 2;
                                } while (uVar102 != 0);
                                uVar102 = uVar68;
                                if (uVar66 == uVar65) goto LAB_006efbb4;
                              }
                              else {
                                uVar102 = 0;
                              }
                              piVar41 = (int *)((long)pvVar63 +
                                               uVar102 * 4 + (long)iVar7 * 0x30 + 0xc);
                              piVar67 = (int *)((long)&uStack_c8 + uVar102 * 4 + 4);
                              do {
                                uVar102 = uVar102 + 2;
                                iVar7 = piVar67[-1];
                                if (piVar41[-1] <= piVar67[-1]) {
                                  iVar7 = piVar41[-1];
                                }
                                piVar67[-1] = iVar7;
                                iVar7 = *piVar67;
                                if (*piVar67 <= *piVar41) {
                                  iVar7 = *piVar41;
                                }
                                *piVar67 = iVar7;
                                piVar41 = piVar41 + 2;
                                piVar67 = piVar67 + 2;
                              } while (uVar102 < uVar60);
                            }
LAB_006efbb4:
                            uVar36 = uVar36 + 1;
                          } while (uVar36 != uVar64);
                        }
                        dVar81 = 0.0;
                        if (cVar5 == '\0') {
                          uVar36 = uVar43;
                          uVar102 = uVar60;
                          puVar57 = puVar42;
                          if (5 < uVar50) {
                            do {
                              auVar87._0_4_ = *puVar57;
                              auVar92._0_4_ = puVar57[1];
                              auVar87._4_4_ = puVar57[2];
                              auVar92._4_4_ = puVar57[3];
                              auVar87._8_4_ = puVar57[4];
                              auVar92._8_4_ = puVar57[5];
                              auVar87._12_4_ = puVar57[6];
                              auVar92._12_4_ = puVar57[7];
                              uVar36 = uVar36 - 4;
                              auVar75 = NEON_rev64(auVar87,4);
                              auVar70 = NEON_rev64(auVar92,4);
                              auVar75 = NEON_ext(auVar75,auVar75,8,1);
                              auVar70 = NEON_ext(auVar70,auVar70,8,1);
                              dVar81 = dVar81 + ((double)auVar70._0_4_ - (double)auVar75._0_4_) +
                                       ((double)auVar70._4_4_ - (double)auVar75._4_4_) +
                                       ((double)auVar70._8_4_ - (double)auVar75._8_4_) +
                                       ((double)auVar70._12_4_ - (double)auVar75._12_4_);
                              puVar57 = puVar57 + -8;
                            } while (uVar36 != 0);
                            uVar102 = uVar52;
                            if (uVar37 == uVar43) goto LAB_006eff94;
                          }
                          uVar36 = uVar102 + 2;
                          puVar33 = (undefined8 *)((long)&local_a0 + uVar102 * 4);
                          do {
                            uVar36 = uVar36 - 2;
                            dVar81 = dVar81 + ((double)(float)((ulong)*puVar33 >> 0x20) -
                                              (double)(float)*puVar33);
                            puVar33 = puVar33 + -1;
                          } while (3 < uVar36);
                        }
                        else {
                          uVar102 = uVar60;
                          puVar57 = puVar42;
                          uVar36 = uVar43;
                          if (5 < uVar50) {
                            do {
                              auVar85._0_4_ = *puVar57;
                              auVar90._0_4_ = puVar57[1];
                              auVar85._4_4_ = puVar57[2];
                              auVar90._4_4_ = puVar57[3];
                              auVar85._8_4_ = puVar57[4];
                              auVar90._8_4_ = puVar57[5];
                              auVar85._12_4_ = puVar57[6];
                              auVar90._12_4_ = puVar57[7];
                              uVar36 = uVar36 - 4;
                              auVar75 = NEON_rev64(auVar85,4);
                              auVar70 = NEON_rev64(auVar90,4);
                              auVar75 = NEON_ext(auVar75,auVar75,8,1);
                              auVar70 = NEON_ext(auVar70,auVar70,8,1);
                              auVar96._0_8_ = (long)auVar70._0_4_;
                              auVar96._8_8_ = (long)auVar70._4_4_;
                              auVar105._0_8_ = (long)auVar75._0_4_;
                              auVar105._8_8_ = (long)auVar75._4_4_;
                              auVar86._0_8_ = (long)auVar70._8_4_;
                              auVar86._8_8_ = (long)auVar70._12_4_;
                              auVar91._0_8_ = (long)auVar75._8_4_;
                              auVar91._8_8_ = (long)auVar75._12_4_;
                              auVar80 = NEON_scvtf(auVar96,8);
                              auVar83 = NEON_scvtf(auVar105,8);
                              auVar70 = NEON_scvtf(auVar86,8);
                              auVar75 = NEON_scvtf(auVar91,8);
                              dVar81 = dVar81 + (auVar80._0_8_ - auVar83._0_8_) +
                                       (auVar80._8_8_ - auVar83._8_8_) +
                                       (auVar70._0_8_ - auVar75._0_8_) +
                                       (auVar70._8_8_ - auVar75._8_8_);
                              puVar57 = puVar57 + -8;
                            } while (uVar36 != 0);
                            uVar102 = uVar52;
                            if (uVar37 == uVar43) goto LAB_006eff94;
                          }
                          do {
                            dVar81 = dVar81 + ((double)*(int *)((long)&local_a0 + uVar102 * 4 + 4) -
                                              (double)*(int *)((long)&local_a0 + uVar102 * 4));
                            bVar18 = 3 < uVar102;
                            uVar102 = uVar102 - 2;
                          } while (bVar18);
                        }
LAB_006eff94:
                        auVar88 = ZEXT816(0);
                        if (cVar5 == '\0') {
                          uVar36 = uVar43;
                          uVar102 = uVar60;
                          puVar57 = puVar20;
                          if (5 < uVar50) {
                            do {
                              auVar99._0_4_ = *puVar57;
                              auVar108._0_4_ = puVar57[1];
                              auVar99._4_4_ = puVar57[2];
                              auVar108._4_4_ = puVar57[3];
                              auVar99._8_4_ = puVar57[4];
                              auVar108._8_4_ = puVar57[5];
                              auVar99._12_4_ = puVar57[6];
                              auVar108._12_4_ = puVar57[7];
                              uVar36 = uVar36 - 4;
                              auVar70 = NEON_rev64(auVar99,4);
                              auVar75 = NEON_rev64(auVar108,4);
                              auVar70 = NEON_ext(auVar70,auVar70,8,1);
                              auVar75 = NEON_ext(auVar75,auVar75,8,1);
                              auVar88._0_8_ =
                                   auVar88._0_8_ + ((double)auVar75._0_4_ - (double)auVar70._0_4_) +
                                   ((double)auVar75._4_4_ - (double)auVar70._4_4_) +
                                   ((double)auVar75._8_4_ - (double)auVar70._8_4_) +
                                   ((double)auVar75._12_4_ - (double)auVar70._12_4_);
                              auVar88._8_8_ = 0;
                              puVar57 = puVar57 + -8;
                            } while (uVar36 != 0);
                            uVar102 = uVar52;
                            if (uVar37 == uVar43) goto LAB_006f00e4;
                          }
                          uVar36 = uVar102 + 2;
                          puVar33 = (undefined8 *)((long)&local_d0 + uVar102 * 4);
                          do {
                            uVar36 = uVar36 - 2;
                            auVar88._0_8_ =
                                 auVar88._0_8_ +
                                 ((double)(float)((ulong)*puVar33 >> 0x20) - (double)(float)*puVar33
                                 );
                            auVar88._8_8_ = 0;
                            puVar33 = puVar33 + -1;
                          } while (3 < uVar36);
                        }
                        else {
                          uVar102 = uVar60;
                          puVar57 = puVar20;
                          uVar36 = uVar43;
                          if (5 < uVar50) {
                            do {
                              auVar97._0_4_ = *puVar57;
                              auVar106._0_4_ = puVar57[1];
                              auVar97._4_4_ = puVar57[2];
                              auVar106._4_4_ = puVar57[3];
                              auVar97._8_4_ = puVar57[4];
                              auVar106._8_4_ = puVar57[5];
                              auVar97._12_4_ = puVar57[6];
                              auVar106._12_4_ = puVar57[7];
                              uVar36 = uVar36 - 4;
                              auVar70 = NEON_rev64(auVar97,4);
                              auVar75 = NEON_rev64(auVar106,4);
                              auVar70 = NEON_ext(auVar70,auVar70,8,1);
                              auVar75 = NEON_ext(auVar75,auVar75,8,1);
                              auVar107._0_8_ = (long)auVar75._0_4_;
                              auVar107._8_8_ = (long)auVar75._4_4_;
                              auVar111._0_8_ = (long)auVar70._0_4_;
                              auVar111._8_8_ = (long)auVar70._4_4_;
                              auVar98._0_8_ = (long)auVar75._8_4_;
                              auVar98._8_8_ = (long)auVar75._12_4_;
                              auVar93._0_8_ = (long)auVar70._8_4_;
                              auVar93._8_8_ = (long)auVar70._12_4_;
                              auVar80 = NEON_scvtf(auVar107,8);
                              auVar83 = NEON_scvtf(auVar111,8);
                              auVar75 = NEON_scvtf(auVar98,8);
                              auVar70 = NEON_scvtf(auVar93,8);
                              auVar88._0_8_ =
                                   auVar88._0_8_ + (auVar80._0_8_ - auVar83._0_8_) +
                                   (auVar80._8_8_ - auVar83._8_8_) + (auVar75._0_8_ - auVar70._0_8_)
                                   + (auVar75._8_8_ - auVar70._8_8_);
                              auVar88._8_8_ = 0;
                              puVar57 = puVar57 + -8;
                            } while (uVar36 != 0);
                            uVar102 = uVar52;
                            if (uVar37 == uVar43) goto LAB_006f00e4;
                          }
                          do {
                            auVar88._0_8_ =
                                 auVar88._0_8_ +
                                 ((double)*(int *)((long)&local_d0 + uVar102 * 4 + 4) -
                                 (double)*(int *)((long)&local_d0 + uVar102 * 4));
                            auVar88._8_8_ = 0;
                            bVar18 = 3 < uVar102;
                            uVar102 = uVar102 - 2;
                          } while (bVar18);
                        }
LAB_006f00e4:
                        uVar44 = (uint)bVar4;
                        uVar45 = (uint)bVar4;
                        if (bVar3 == 0) {
                          dVar89 = 1.0;
                          bVar17 = SBORROW4((uint)bVar4,3);
                          bVar18 = (int)(uVar44 - 3) < 0;
                          bVar19 = uVar44 == 3;
                          if (cVar5 == '\0') goto LAB_006f0154;
LAB_006f01e8:
                          dVar100 = 1.0;
                          if (bVar19 || bVar18 != bVar17) {
                            if (bVar4 == 2) goto LAB_006f023c;
                            if (bVar4 == 3) goto LAB_006f022c;
                          }
                          else {
                            if (bVar4 != 4) {
                              if (bVar4 != 5) goto LAB_006f024c;
                              dVar100 = (double)((long)iStack_70 - (long)(int)(float)local_78);
                            }
                            dVar100 = dVar100 * (double)((long)(int)(float)local_78 -
                                                        (long)(int)(float)local_80);
LAB_006f022c:
                            dVar100 = dVar100 * (double)((long)(int)(float)local_80 -
                                                        (long)(int)(float)uStack_88);
LAB_006f023c:
                            dVar100 = dVar100 * (double)((long)(int)(float)uStack_88 -
                                                        (long)(int)(float)local_90);
                          }
LAB_006f024c:
                          dVar109 = 1.0;
                          if (bVar4 < 4) {
                            if (bVar4 == 2) goto LAB_006f02a8;
                            if (uVar44 == 3) goto LAB_006f0298;
                          }
                          else {
                            if (bVar4 != 4) {
                              if (bVar4 != 5) goto LAB_006f02b8;
                              dVar109 = (double)((long)(int)local_a0 - (long)(int)(float)local_a8);
                            }
                            dVar109 = dVar109 * (double)((long)(int)(float)local_a8 -
                                                        (long)(int)(float)local_b0);
LAB_006f0298:
                            dVar109 = dVar109 * (double)((long)(int)(float)local_b0 -
                                                        (long)(int)(float)uStack_b8);
LAB_006f02a8:
                            dVar109 = dVar109 * (double)((long)(int)(float)uStack_b8 -
                                                        (long)(int)local_c0[0]);
                          }
LAB_006f02b8:
                          dVar100 = dVar100 * (double)((long)(int)(float)local_90 -
                                                      (long)(int)(float)uStack_98) +
                                    dVar109 * (double)((long)(int)local_c0[0] -
                                                      (long)(int)(float)uStack_c8);
                          if (lVar53 == lVar51) goto LAB_006efb54;
LAB_006f03d4:
                          if ((dVar89 < dVar79) ||
                             ((dVar89 == dVar79 && (dVar100 < (double)CONCAT44(uVar78,uVar77)))))
                          goto LAB_006efb54;
                        }
                        else {
                          if (cVar5 == '\0') {
                            dVar89 = 1.0;
                            uVar36 = 0;
                            pauVar34 = (undefined1 (*) [16])&uStack_c8;
                            pauVar61 = (undefined1 (*) [16])&uStack_98;
                            do {
                              uVar30 = *(undefined8 *)*pauVar61;
                              uVar101 = *(undefined8 *)*pauVar34;
                              uVar110 = NEON_fcmgt(CONCAT44((int)((ulong)uVar101 >> 0x20),
                                                            (int)uVar30),
                                                   CONCAT44((int)((ulong)uVar30 >> 0x20),
                                                            (int)uVar101),4);
                              uVar30 = NEON_bif(uVar30,uVar101,uVar110,1);
                              fVar69 = (float)((ulong)uVar30 >> 0x20);
                              uVar102 = NEON_fcmgt(uVar30,CONCAT44(fVar69,fVar69),4);
                              if ((uVar102 & 1) != 0) {
                                dVar89 = 0.0;
                                bVar17 = SBORROW4(uVar44,3);
                                bVar18 = (int)(uVar44 - 3) < 0;
                                bVar19 = uVar44 == 3;
                                goto LAB_006f0154;
                              }
                              uVar36 = uVar36 + 2;
                              pauVar34 = (undefined1 (*) [16])(*pauVar34 + 8);
                              pauVar61 = (undefined1 (*) [16])(*pauVar61 + 8);
                              dVar89 = dVar89 * ((double)fVar69 - (double)(float)uVar30);
                            } while (uVar36 < uVar60);
                          }
                          else {
                            dVar89 = 1.0;
                            uVar36 = 0;
                            do {
                              lVar38 = uVar36 * 4;
                              dVar100 = (double)*(int *)((long)&uStack_98 + lVar38 + 4);
                              dVar109 = (double)*(int *)((long)&uStack_c8 + lVar38 + 4);
                              iVar7 = *(int *)((long)&uStack_98 + lVar38);
                              if (*(int *)((long)&uStack_98 + lVar38) <=
                                  *(int *)((long)&uStack_c8 + lVar38)) {
                                iVar7 = *(int *)((long)&uStack_c8 + lVar38);
                              }
                              if (dVar109 <= dVar100) {
                                dVar100 = dVar109;
                              }
                              if (dVar100 < (double)iVar7) {
                                dVar89 = 0.0;
                                break;
                              }
                              uVar36 = uVar36 + 2;
                              dVar89 = dVar89 * (dVar100 - (double)iVar7);
                            } while (uVar36 < uVar60);
                          }
                          dVar89 = dVar89 + 0.0;
                          bVar17 = SBORROW4(uVar44,3);
                          bVar18 = (int)(uVar45 - 3) < 0;
                          bVar19 = uVar45 == 3;
                          if (cVar5 != '\0') goto LAB_006f01e8;
LAB_006f0154:
                          dVar100 = 1.0;
                          if (bVar19 || bVar18 != bVar17) {
                            if (uVar45 == 2) goto LAB_006f0328;
                            if (uVar45 == 3) goto LAB_006f0318;
                          }
                          else {
                            if (uVar45 != 4) {
                              if (uVar45 != 5) goto LAB_006f0338;
                              dVar100 = (double)(local_78._4_4_ - (float)local_78);
                            }
                            dVar100 = dVar100 * (double)(local_80._4_4_ - (float)local_80);
LAB_006f0318:
                            dVar100 = dVar100 * (double)(uStack_88._4_4_ - (float)uStack_88);
LAB_006f0328:
                            dVar100 = dVar100 * (double)(local_90._4_4_ - (float)local_90);
                          }
LAB_006f0338:
                          dVar109 = 1.0;
                          if (bVar4 < 4) {
                            if (uVar45 == 2) goto LAB_006f0394;
                            if (bVar4 == 3) goto LAB_006f0384;
                          }
                          else {
                            if (bVar4 != 4) {
                              if (uVar45 != 5) goto LAB_006f03a4;
                              dVar109 = (double)(local_a8._4_4_ - (float)local_a8);
                            }
                            dVar109 = dVar109 * (double)(local_b0._4_4_ - (float)local_b0);
LAB_006f0384:
                            dVar109 = dVar109 * (double)(uStack_b8._4_4_ - (float)uStack_b8);
LAB_006f0394:
                            dVar109 = dVar109 * (double)(local_c0[1] - local_c0[0]);
                          }
LAB_006f03a4:
                          dVar100 = dVar100 * (double)(uStack_98._4_4_ - (float)uStack_98) +
                                    dVar109 * (double)(uStack_c8._4_4_ - (float)uStack_c8);
                          if (lVar53 != lVar51) goto LAB_006f03d4;
LAB_006efb54:
                          dVar79 = dVar89;
                          uVar77 = SUB84(dVar100,0);
                          uVar78 = (undefined4)((ulong)dVar100 >> 0x20);
                          local_11c = (int)lVar53;
                        }
                        lVar53 = lVar53 + 1;
                        dVar12 = dVar12 + dVar81 + auVar88._0_8_;
                      } while (iVar27 + 1 != (int)lVar53);
                      bVar18 = dVar74 <= dVar12;
                      bVar19 = uVar32 != 0;
                      if (bVar18 && bVar19) {
                        dVar12 = dVar74;
                      }
                      iVar7 = (int)uVar32;
                      if (bVar18 && bVar19) {
                        iVar7 = iVar26;
                      }
                      uVar32 = uVar32 + 1;
                      if (bVar18 && bVar19) {
                        local_11c = iVar72;
                      }
                      dVar74 = dVar12;
                      iVar26 = iVar7;
                      iVar72 = local_11c;
                    } while (uVar32 != uVar47);
                    lVar51 = (long)iVar7;
                    lVar53 = (long)local_11c;
                    goto LAB_006f0420;
                  }
                }
                lVar53 = 0;
                lVar51 = 0;
              }
LAB_006f0420:
              piVar55 = *(int **)((long)pvVar29 + lVar51 * 8);
              uVar64 = 0;
              plVar58 = (long *)((long)pvVar63 + (long)*piVar55 * 0x30);
              uStack_98 = plVar58[1];
              local_a0 = *plVar58;
              uStack_88 = plVar58[3];
              local_90 = plVar58[2];
              local_78 = plVar58[5];
              local_80 = plVar58[4];
              plVar58 = (long *)((long)pvVar63 + (long)piVar55[lVar53] * 0x30);
              uStack_c8 = plVar58[1];
              local_d0 = *plVar58;
              uStack_b8 = SUB168(*(undefined1 (*) [16])(plVar58 + 2),8);
              uVar30 = SUB168(*(undefined1 (*) [16])(plVar58 + 2),0);
              local_c0[0] = (float)(int)uVar30;
              local_c0[1] = (float)SUB84(uVar30,4);
              local_a8 = SUB168(*(undefined1 (*) [16])(plVar58 + 4),8);
              local_b0 = SUB168(*(undefined1 (*) [16])(plVar58 + 4),0);
              do {
                bVar3 = *(byte *)(param_1 + 0x27);
                iVar26 = 0;
                if (bVar3 != 0) {
                  iVar26 = (*(int *)(param_1 + 0x20) + -4) / (int)(uint)bVar3;
                }
                plVar58 = local_148;
                if (lVar53 <= (long)uVar64) {
                  plVar58 = local_150;
                }
                iVar27 = *(int *)(*(long *)((long)pvVar29 + lVar51 * 8) + uVar64 * 4);
                uVar6 = *(ushort *)(plVar58[3] + 2);
                uVar28 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
                puVar59 = &local_a0;
                if (lVar53 <= (long)uVar64) {
                  puVar59 = &local_d0;
                }
                if ((int)uVar28 < iVar26) {
                  lVar38 = plVar58[3] + (ulong)uVar28 * (ulong)bVar3;
                  uVar47 = *(ulong *)((long)pvVar63 + (long)iVar27 * 0x30);
                  uVar47 = (uVar47 & 0xff00ff00ff00ff00) >> 8 | (uVar47 & 0xff00ff00ff00ff) << 8;
                  uVar47 = (uVar47 & 0xffff0000ffff0000) >> 0x10 | (uVar47 & 0xffff0000ffff) << 0x10
                  ;
                  *(ulong *)(lVar38 + 4) = uVar47 >> 0x20 | uVar47 << 0x20;
                  if (*(char *)(param_1 + 0x25) != '\0') {
                    uVar47 = 0;
                    puVar39 = (uint *)(lVar38 + 0xc);
                    do {
                      uVar45 = *(uint *)((long)pvVar63 + uVar47 * 4 + (long)iVar27 * 0x30 + 8);
                      uVar47 = uVar47 + 1;
                      uVar45 = (uVar45 & 0xff00ff00) >> 8 | (uVar45 & 0xff00ff) << 8;
                      *puVar39 = uVar45 >> 0x10 | uVar45 << 0x10;
                      puVar39 = puVar39 + 1;
                    } while (uVar47 < *(byte *)(param_1 + 0x25));
                  }
                  *(ushort *)(plVar58[3] + 2) =
                       (ushort)(uVar28 + 1 >> 8) & 0xff | (ushort)((uVar28 + 1 & 0xff00ff) << 8);
                  *(undefined4 *)((long)plVar58 + 0x14) = 1;
                }
                bVar3 = *(byte *)(param_1 + 0x25);
                uVar66 = (ulong)bVar3;
                uVar47 = uVar66;
                if (uVar66 < 3) {
                  uVar47 = 2;
                }
                uVar47 = (uVar47 - 1 >> 1) + 1;
                if (*(char *)(param_1 + 0x26) == '\0') {
                  if (6 < bVar3) {
                    uVar37 = uVar47 & 0x7ffffffffffffffc;
                    puVar42 = (undefined4 *)((long)pvVar63 + (long)iVar27 * 0x30 + 8);
                    puVar33 = puVar59 + 1;
                    uVar60 = uVar37 << 1;
                    uVar50 = uVar37;
                    do {
                      auVar71._0_4_ = *(undefined4 *)puVar33;
                      auVar76._0_4_ = *(undefined4 *)((long)puVar33 + 4);
                      auVar71._4_4_ = *(undefined4 *)(puVar33 + 1);
                      auVar76._4_4_ = *(undefined4 *)((long)puVar33 + 0xc);
                      auVar71._8_4_ = *(undefined4 *)(puVar33 + 2);
                      auVar76._8_4_ = *(undefined4 *)((long)puVar33 + 0x14);
                      auVar71._12_4_ = *(undefined4 *)(puVar33 + 3);
                      auVar76._12_4_ = *(undefined4 *)((long)puVar33 + 0x1c);
                      uVar50 = uVar50 - 4;
                      uVar77 = *puVar42;
                      puVar20 = puVar42 + 1;
                      puVar57 = puVar42 + 2;
                      puVar21 = puVar42 + 3;
                      puVar22 = puVar42 + 4;
                      puVar23 = puVar42 + 5;
                      puVar24 = puVar42 + 6;
                      puVar25 = puVar42 + 7;
                      puVar42 = puVar42 + 8;
                      auVar10._4_4_ = *puVar57;
                      auVar10._0_4_ = uVar77;
                      auVar10._8_4_ = *puVar22;
                      auVar10._12_4_ = *puVar24;
                      auVar70 = NEON_fcmgt(auVar10,auVar71,4);
                      auVar15._4_4_ = *puVar21;
                      auVar15._0_4_ = *puVar20;
                      auVar15._8_4_ = *puVar23;
                      auVar15._12_4_ = *puVar25;
                      auVar75 = NEON_fcmgt(auVar76,auVar15,4);
                      auVar11._4_4_ = *puVar57;
                      auVar11._0_4_ = uVar77;
                      auVar11._8_4_ = *puVar22;
                      auVar11._12_4_ = *puVar24;
                      auVar70 = NEON_bsl(auVar70,auVar71,auVar11,1);
                      auVar16._4_4_ = *puVar21;
                      auVar16._0_4_ = *puVar20;
                      auVar16._8_4_ = *puVar23;
                      auVar16._12_4_ = *puVar25;
                      auVar75 = NEON_bsl(auVar75,auVar76,auVar16,1);
                      *(int *)puVar33 = auVar70._0_4_;
                      *(int *)((long)puVar33 + 4) = auVar75._0_4_;
                      *(int *)(puVar33 + 1) = auVar70._4_4_;
                      *(int *)((long)puVar33 + 0xc) = auVar75._4_4_;
                      *(int *)(puVar33 + 2) = auVar70._8_4_;
                      *(int *)((long)puVar33 + 0x14) = auVar75._8_4_;
                      *(int *)(puVar33 + 3) = auVar70._12_4_;
                      *(int *)((long)puVar33 + 0x1c) = auVar75._12_4_;
                      puVar33 = puVar33 + 4;
                    } while (uVar50 != 0);
                    if (uVar47 == uVar37) goto LAB_006f047c;
                  }
                  else {
                    uVar60 = 0;
                  }
                  pfVar31 = (float *)((long)pvVar63 + uVar60 * 4 + (long)iVar27 * 0x30 + 0xc);
                  pfVar35 = (float *)((long)puVar59 + uVar60 * 4 + 0xc);
                  do {
                    uVar60 = uVar60 + 2;
                    fVar69 = pfVar35[-1];
                    if (pfVar31[-1] <= pfVar35[-1]) {
                      fVar69 = pfVar31[-1];
                    }
                    pfVar35[-1] = fVar69;
                    fVar69 = *pfVar35;
                    fVar73 = *pfVar31;
                    if (fVar69 == fVar73 || fVar69 < fVar73 != (NAN(fVar69) || NAN(fVar73))) {
                      fVar69 = fVar73;
                    }
                    *pfVar35 = fVar69;
                    pfVar31 = pfVar31 + 2;
                    pfVar35 = pfVar35 + 2;
                  } while (uVar60 < uVar66);
                }
                else {
                  if (6 < bVar3) {
                    uVar37 = uVar47 & 0x7ffffffffffffffc;
                    pauVar54 = (undefined1 (*) [16])(puVar59 + 1);
                    uVar60 = uVar37 << 1;
                    pauVar40 = (undefined1 (*) [12])((long)pvVar63 + (long)iVar27 * 0x30 + 8);
                    uVar50 = uVar37;
                    do {
                      uVar50 = uVar50 - 4;
                      uVar77 = (undefined4)((ulong)*(undefined8 *)(*pauVar40 + 8) >> 0x20);
                      uVar78 = (undefined4)((ulong)*(undefined8 *)pauVar40[2] >> 0x20);
                      auVar13._12_4_ = uVar78;
                      auVar13._0_12_ = *(undefined1 (*) [12])(pauVar40[1] + 4);
                      auVar80 = NEON_smin(pauVar54[1],auVar13,4);
                      auVar8._12_4_ = uVar77;
                      auVar8._0_12_ = *pauVar40;
                      auVar83 = NEON_smin(*pauVar54,auVar8,4);
                      auVar14._12_4_ = uVar78;
                      auVar14._0_12_ = *(undefined1 (*) [12])(pauVar40[1] + 4);
                      auVar75 = NEON_smax(pauVar54[1],auVar14,4);
                      auVar9._12_4_ = uVar77;
                      auVar9._0_12_ = *pauVar40;
                      auVar70 = NEON_smax(*pauVar54,auVar9,4);
                      *(int *)*pauVar54 = auVar83._0_4_;
                      *(int *)(*pauVar54 + 4) = auVar70._4_4_;
                      *(int *)(*pauVar54 + 8) = auVar83._8_4_;
                      *(int *)(*pauVar54 + 0xc) = auVar70._12_4_;
                      *(int *)pauVar54[1] = auVar80._0_4_;
                      *(int *)(pauVar54[1] + 4) = auVar75._4_4_;
                      *(int *)(pauVar54[1] + 8) = auVar80._8_4_;
                      *(int *)(pauVar54[1] + 0xc) = auVar75._12_4_;
                      pauVar54 = pauVar54 + 2;
                      pauVar40 = (undefined1 (*) [12])(pauVar40[2] + 8);
                    } while (uVar50 != 0);
                    if (uVar47 == uVar37) goto LAB_006f047c;
                  }
                  else {
                    uVar60 = 0;
                  }
                  piVar55 = (int *)((long)pvVar63 + uVar60 * 4 + (long)iVar27 * 0x30 + 0xc);
                  piVar41 = (int *)((long)puVar59 + uVar60 * 4 + 0xc);
                  do {
                    uVar60 = uVar60 + 2;
                    iVar26 = piVar41[-1];
                    if (piVar55[-1] <= piVar41[-1]) {
                      iVar26 = piVar55[-1];
                    }
                    piVar41[-1] = iVar26;
                    iVar26 = *piVar41;
                    if (*piVar41 <= *piVar55) {
                      iVar26 = *piVar55;
                    }
                    *piVar41 = iVar26;
                    piVar55 = piVar55 + 2;
                    piVar41 = piVar41 + 2;
                  } while (uVar60 < uVar66);
                }
LAB_006f047c:
                uVar64 = uVar64 + 1;
              } while (uVar64 != uVar46);
              puVar59 = &DAT_00b0da18;
              if (DAT_00b0d9f0 == 0) {
LAB_006f06fc:
                (*(code *)*puVar59)(pvVar29);
              }
              else {
                if (DAT_00b103d8 != (void *)0x0) {
                  (*DAT_00b0da70)();
                }
                iVar26 = (*DAT_00b0da28)(pvVar29);
                DAT_00b105b8 = DAT_00b105b8 - iVar26;
                DAT_00b10600 = DAT_00b10600 + -1;
                (*DAT_00b0da18)(pvVar29);
                if (DAT_00b103d8 != (void *)0x0) {
                  puVar59 = &DAT_00b0da80;
                  pvVar29 = DAT_00b103d8;
                  goto LAB_006f06fc;
                }
              }
              uVar28 = FUN_006ecf84(param_1,local_150);
              if (uVar28 != 0) {
LAB_006f0718:
                uVar46 = (ulong)uVar28;
                bVar18 = false;
                goto LAB_006ef444;
              }
              lVar53 = local_148[1];
              if (lVar53 == 0) {
                uVar28 = FUN_006ecf84(param_1,local_148);
                if (uVar28 != 0) goto LAB_006f0718;
                lVar53 = local_148[1];
              }
              local_d0 = local_150[1];
              lVar51 = *local_148;
              local_a0 = lVar53;
              if (param_2[1] != 1) {
                uVar28 = FUN_006f146c(param_1,local_148,&local_d4);
                if (uVar28 == 0) {
                  FUN_006f1504(param_1,lVar51,&local_a0,local_d4);
                  uVar28 = FUN_006f155c(param_1,lVar51,&local_a0);
                  if (uVar28 == 0) goto LAB_006f07e8;
                }
                uVar46 = (ulong)uVar28;
                bVar18 = false;
                goto LAB_006ef444;
              }
              uVar28 = FUN_006ef2f0(param_1,lVar51,&local_a0,param_4 + 1);
              if (uVar28 != 0) {
LAB_006f076c:
                uVar46 = (ulong)uVar28;
                bVar18 = false;
                goto LAB_006ef444;
              }
LAB_006f07e8:
              uVar28 = FUN_006ef2f0(param_1,*local_150,&local_d0,param_4 + 1);
              if (uVar28 == 0) {
                lVar53 = local_150[3];
                if (*(ushort *)(lVar53 + 2) >> 8 == 0 && (*(ushort *)(lVar53 + 2) & 0xff) == 0) {
                  if (param_2[1] == 1) goto LAB_006f099c;
LAB_006f09f0:
                  uVar28 = FUN_006f1c5c(param_1,*param_3,local_148,param_4);
                  if (uVar28 == 0) goto LAB_006f0a08;
                  goto LAB_006f0808;
                }
                uVar45 = 0;
                bVar18 = false;
                pcVar2 = FUN_006f18f4;
                if (param_4 != 0) {
                  pcVar2 = FUN_006f1aa8;
                }
                do {
                  lVar53 = lVar53 + (ulong)*(byte *)(param_1 + 0x27) * (ulong)uVar45;
                  uVar46 = ((ulong)*(byte *)(lVar53 + 4) << 0x38 |
                            (ulong)*(byte *)(lVar53 + 5) << 0x30 |
                            (ulong)*(byte *)(lVar53 + 6) << 0x28 |
                            (ulong)*(byte *)(lVar53 + 7) << 0x20 |
                            (ulong)*(byte *)(lVar53 + 8) << 0x18 |
                            (ulong)*(byte *)(lVar53 + 9) << 0x10 |
                           (ulong)*(byte *)(lVar53 + 10) << 8) + (ulong)*(byte *)(lVar53 + 0xb);
                  if (0 < param_4) {
                    iVar26 = (int)((uVar46 & 0xffffffff) * 0x51d07eaf >> 0x20);
                    for (plVar58 = *(long **)(param_1 + (ulong)((int)uVar46 +
                                                               (iVar26 + ((uint)((int)uVar46 -
                                                                                iVar26) >> 1) >> 6)
                                                               * -0x61) * 8 + 0xc0);
                        (plVar49 = local_150, plVar58 != (long *)0x0 && (plVar58[1] != uVar46));
                        plVar58 = (long *)plVar58[4]) {
                    }
                    do {
                      if (plVar49 == plVar58) {
                        uVar46 = 0x10b;
                        goto LAB_006ef81c;
                      }
                      plVar49 = (long *)*plVar49;
                    } while (plVar49 != (long *)0x0);
                    if (plVar58 != (long *)0x0) {
                      FUN_006ece04(param_1,*plVar58);
                      *(int *)(local_150 + 2) = (int)local_150[2] + 1;
                      *plVar58 = (long)local_150;
                    }
                  }
                  uVar28 = (*pcVar2)(param_1,uVar46,local_150[1]);
                  if (uVar28 != 0) goto LAB_006f076c;
                  lVar53 = local_150[3];
                  uVar45 = uVar45 + 1;
                  if (uVar46 == *param_3) {
                    bVar18 = true;
                  }
                } while (uVar45 < ((uint)(*(ushort *)(lVar53 + 2) >> 8) |
                                  (*(ushort *)(lVar53 + 2) & 0xff00ff) << 8));
                if (param_2[1] == 1) {
LAB_006f099c:
                  lVar53 = local_148[3];
                  if (*(ushort *)(lVar53 + 2) >> 8 != 0 || (*(ushort *)(lVar53 + 2) & 0xff) != 0) {
                    uVar45 = 0;
                    do {
                      uVar30 = FUN_006e847c(*(undefined1 *)(param_1 + 0x27),lVar53,uVar45);
                      uVar28 = FUN_006f1c5c(param_1,uVar30,local_148,param_4);
                      if (uVar28 != 0) goto LAB_006f0808;
                      lVar53 = local_148[3];
                      uVar45 = uVar45 + 1;
                    } while (uVar45 < ((uint)(*(ushort *)(lVar53 + 2) >> 8) |
                                      (*(ushort *)(lVar53 + 2) & 0xff00ff) << 8));
                  }
                }
                else if (!bVar18) goto LAB_006f09f0;
LAB_006f0a08:
                uVar28 = FUN_006ece04(param_1,local_150);
                if (uVar28 == 0) {
                  uVar46 = FUN_006ece04(param_1,local_148);
                  uVar46 = uVar46 & 0xffffffff;
                  local_148 = (long *)0x0;
                }
                else {
                  uVar46 = (ulong)uVar28;
                }
                local_150 = (long *)0x0;
              }
              else {
LAB_006f0808:
                uVar46 = (ulong)uVar28;
              }
              bVar18 = false;
              goto LAB_006ef444;
            }
          }
        }
      }
      else {
        lVar53 = *param_2;
        iVar26 = *(int *)(param_1 + 0x20);
        iVar27 = sqlite3_initialize();
        if ((iVar27 == 0) &&
           (local_150 = (long *)FUN_005827b0((long)iVar26 + 0x28), local_150 != (long *)0x0)) {
          memset(local_150,0,(long)*(int *)(param_1 + 0x20) + 0x28);
          local_150[3] = (long)(local_150 + 5);
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
          *local_150 = lVar53;
          local_150[2] = 0x100000001;
          if (lVar53 != 0) {
            *(int *)(lVar53 + 0x10) = *(int *)(lVar53 + 0x10) + 1;
          }
        }
        else {
          local_150 = (long *)0x0;
        }
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        local_148 = param_2;
        if (param_2 != (long *)0x0) goto LAB_006ef7dc;
      }
      uVar46 = 7;
LAB_006ef81c:
      bVar18 = false;
      goto LAB_006ef444;
    }
  }
  else {
    pvVar63 = (void *)0x0;
  }
  local_148 = (long *)0x0;
  local_150 = (long *)0x0;
  uVar46 = 7;
  bVar18 = true;
LAB_006ef444:
  FUN_006ece04(param_1,local_150);
  FUN_006ece04(param_1,local_148);
  if (!bVar18) {
    puVar59 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != (void *)0x0) {
        (*DAT_00b0da70)();
      }
      iVar26 = (*DAT_00b0da28)(pvVar63);
      DAT_00b105b8 = DAT_00b105b8 - iVar26;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(pvVar63);
      if (DAT_00b103d8 == (void *)0x0) {
        return uVar46;
      }
      puVar59 = &DAT_00b0da80;
      pvVar63 = DAT_00b103d8;
    }
    (*(code *)*puVar59)(pvVar63);
  }
  return uVar46;
}


// ===== 006f0a44  FUN_006f0a44 =====

ulong FUN_006f0a44(long param_1,long *param_2,uint param_3,undefined4 param_4)

{
  void *__dest;
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  plVar8 = param_2;
  do {
    lVar9 = plVar8[1];
    if ((lVar9 == 1) || (*plVar8 != 0)) {
      bVar1 = *(byte *)(param_1 + 0x27);
      uVar2 = *(ushort *)(param_2[3] + 2);
      __dest = (void *)(param_2[3] + (long)(int)(uint)bVar1 * (long)(int)param_3 + 4);
      memmove(__dest,(void *)((long)__dest + (ulong)bVar1),
              (long)(int)(uint)bVar1 *
              (long)(int)(~param_3 + ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)));
      lVar9 = param_2[3];
      uVar5 = CONCAT11(*(undefined1 *)(lVar9 + 2),*(undefined1 *)(lVar9 + 3)) - 1;
      *(ushort *)(lVar9 + 2) = (ushort)(uVar5 >> 8) & 0xff | (ushort)((uVar5 & 0xff00ff) << 8);
      *(undefined4 *)((long)param_2 + 0x14) = 1;
      if (*param_2 != 0) {
        iVar3 = 0;
        if (*(byte *)(param_1 + 0x27) != 0) {
          iVar3 = (*(int *)(param_1 + 0x20) + -4) / (int)(uint)*(byte *)(param_1 + 0x27);
        }
        if ((int)((uint)(*(ushort *)(param_2[3] + 2) >> 8) |
                 (*(ushort *)(param_2[3] + 2) & 0xff00ff) << 8) < iVar3 / 3) {
          uVar7 = FUN_006f0d18(param_1,param_2,param_4);
          return uVar7;
        }
        uVar7 = FUN_006f10b8(param_1,param_2);
        return uVar7;
      }
      uVar5 = 0;
      goto LAB_006f0cd4;
    }
    plVar10 = *(long **)(param_1 + 0xa0);
    iVar3 = FUN_00592fec(plVar10,0);
    if (iVar3 == 0) {
      plVar6 = (long *)plVar10[0x10];
      if ((*(ushort *)((long)plVar6 + 0x14) & 0x9000) == 0) {
        *plVar6 = lVar9;
        *(undefined2 *)((long)plVar6 + 0x14) = 4;
        lVar9 = *(long *)(*plVar10 + 0x18);
      }
      else {
        FUN_005c2a94(plVar6,lVar9);
        lVar9 = *(long *)(*plVar10 + 0x18);
      }
      if (lVar9 != 0) {
        (*DAT_00b0da80)();
      }
    }
    iVar3 = sqlite3_step(*(undefined8 *)(param_1 + 0xa0));
    if (iVar3 == 100) {
      lVar9 = sqlite3_column_int64(*(undefined8 *)(param_1 + 0xa0),0);
      plVar10 = param_2;
      if (param_2 != (long *)0x0) {
        do {
          if (plVar10[1] == lVar9) goto LAB_006f0b40;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      uVar4 = FUN_006ed648(param_1,lVar9,0,plVar8);
      plVar10 = *(long **)(param_1 + 0xa0);
    }
    else {
LAB_006f0b40:
      uVar4 = 0;
      plVar10 = *(long **)(param_1 + 0xa0);
    }
    if (plVar10 != (long *)0x0) {
      lVar9 = *plVar10;
      if (*(long *)(lVar9 + 0x18) != 0) {
        (*DAT_00b0da70)();
      }
      if (0 < plVar10[0x17]) {
        FUN_0058f57c(lVar9,plVar10);
      }
      iVar3 = FUN_0058f640(plVar10);
      *(undefined1 *)((long)plVar10 + 199) = 1;
      plVar10[6] = 0xffffffff;
      *(undefined2 *)((long)plVar10 + 0xc4) = 0xff02;
      plVar10[7] = 0;
      *(undefined4 *)((long)plVar10 + 0x2c) = 1;
      *(undefined4 *)(plVar10 + 8) = 0;
      plVar10[10] = 0;
      if ((iVar3 != 0) || (uVar5 = 0, *(char *)(lVar9 + 0x67) != '\0')) {
        uVar5 = FUN_005c1188(lVar9,iVar3);
      }
      if (*(long *)(lVar9 + 0x18) != 0) {
        (*DAT_00b0da80)();
      }
      if (uVar5 != 0) goto LAB_006f0cd4;
    }
    uVar5 = uVar4;
    if (uVar4 != 0) goto LAB_006f0cd4;
    plVar8 = (long *)*plVar8;
  } while (plVar8 != (long *)0x0);
  uVar5 = 0x10b;
LAB_006f0cd4:
  return (ulong)uVar5;
}


// ===== 006f0d18  FUN_006f0d18 =====

ulong FUN_006f0d18(long param_1,long *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  
  lVar10 = *param_2;
  if (lVar10 == 0) {
    uVar6 = 0xffffffff;
LAB_006f0de0:
    *param_2 = 0;
    uVar2 = FUN_006f0a44(param_1,lVar10,uVar6,param_3 + 1);
    uVar3 = FUN_006ece04(param_1,lVar10);
    if (uVar2 != 0) {
      uVar3 = uVar2;
    }
    uVar6 = (ulong)uVar3;
    if (uVar3 == 0) {
      plVar11 = *(long **)(param_1 + 0x80);
      lVar10 = param_2[1];
      iVar4 = FUN_00592fec(plVar11,0);
      if (iVar4 == 0) {
        plVar5 = (long *)plVar11[0x10];
        if ((*(ushort *)((long)plVar5 + 0x14) & 0x9000) == 0) {
          *plVar5 = lVar10;
          *(undefined2 *)((long)plVar5 + 0x14) = 4;
          lVar10 = *(long *)(*plVar11 + 0x18);
        }
        else {
          FUN_005c2a94(plVar5,lVar10);
          lVar10 = *(long *)(*plVar11 + 0x18);
        }
        if (lVar10 != 0) {
          (*DAT_00b0da80)();
        }
      }
      sqlite3_step(*(undefined8 *)(param_1 + 0x80));
      plVar11 = *(long **)(param_1 + 0x80);
      if (plVar11 != (long *)0x0) {
        lVar10 = *plVar11;
        if (*(long *)(lVar10 + 0x18) != 0) {
          (*DAT_00b0da70)();
        }
        if (0 < plVar11[0x17]) {
          FUN_0058f57c(lVar10,plVar11);
        }
        uVar6 = FUN_0058f640(plVar11);
        plVar11[7] = 0;
        *(undefined1 *)((long)plVar11 + 199) = 1;
        *(undefined2 *)((long)plVar11 + 0xc4) = 0xff02;
        *(undefined4 *)((long)plVar11 + 0x2c) = 1;
        plVar11[6] = 0xffffffff;
        *(undefined4 *)(plVar11 + 8) = 0;
        plVar11[10] = 0;
        if (((int)uVar6 != 0) || (*(char *)(lVar10 + 0x67) != '\0')) {
          uVar6 = FUN_005c1188(lVar10,uVar6 & 0xffffffff);
        }
        if (*(long *)(lVar10 + 0x18) != 0) {
          uVar6 = uVar6 & 0xffffffff;
          (*DAT_00b0da80)(*(long *)(lVar10 + 0x18));
        }
        if ((int)uVar6 != 0) {
          return uVar6;
        }
      }
      plVar11 = *(long **)(param_1 + 0xb0);
      lVar10 = param_2[1];
      iVar4 = FUN_00592fec(plVar11,0);
      if (iVar4 == 0) {
        plVar5 = (long *)plVar11[0x10];
        if ((*(ushort *)((long)plVar5 + 0x14) & 0x9000) == 0) {
          *plVar5 = lVar10;
          *(undefined2 *)((long)plVar5 + 0x14) = 4;
        }
        else {
          FUN_005c2a94(plVar5,lVar10);
        }
        if (*(long *)(*plVar11 + 0x18) != 0) {
          (*DAT_00b0da80)();
        }
      }
      sqlite3_step(*(undefined8 *)(param_1 + 0xb0));
      plVar11 = *(long **)(param_1 + 0xb0);
      if (plVar11 != (long *)0x0) {
        lVar10 = *plVar11;
        if (*(long *)(lVar10 + 0x18) != 0) {
          (*DAT_00b0da70)();
        }
        if (0 < plVar11[0x17]) {
          FUN_0058f57c(lVar10,plVar11);
        }
        uVar6 = FUN_0058f640(plVar11);
        plVar11[7] = 0;
        *(undefined1 *)((long)plVar11 + 199) = 1;
        *(undefined2 *)((long)plVar11 + 0xc4) = 0xff02;
        *(undefined4 *)((long)plVar11 + 0x2c) = 1;
        plVar11[6] = 0xffffffff;
        *(undefined4 *)(plVar11 + 8) = 0;
        plVar11[10] = 0;
        if (((int)uVar6 != 0) || (*(char *)(lVar10 + 0x67) != '\0')) {
          uVar6 = FUN_005c1188(lVar10,uVar6 & 0xffffffff);
        }
        if (*(long *)(lVar10 + 0x18) != 0) {
          uVar6 = uVar6 & 0xffffffff;
          (*DAT_00b0da80)(*(long *)(lVar10 + 0x18));
        }
        if ((int)uVar6 != 0) {
          return uVar6;
        }
      }
      uVar6 = param_2[1];
      if (uVar6 != 0) {
        iVar4 = (int)((uVar6 & 0xffffffff) * 0x51d07eaf >> 0x20);
        plVar11 = (long *)(param_1 + (ulong)((int)uVar6 +
                                            (iVar4 + ((uint)((int)uVar6 - iVar4) >> 1) >> 6) * -0x61
                                            ) * 8 + 0xc0);
        do {
          plVar5 = plVar11;
          plVar7 = (long *)*plVar5;
          plVar11 = plVar7 + 4;
        } while (plVar7 != param_2);
        *plVar5 = param_2[4];
      }
      lVar10 = param_2[2];
      lVar8 = *(long *)(param_1 + 0x68);
      *(long **)(param_1 + 0x68) = param_2;
      param_2[1] = (long)param_3;
      param_2[4] = lVar8;
      *(int *)(param_2 + 2) = (int)lVar10 + 1;
      return 0;
    }
  }
  else {
    uVar1 = *(ushort *)(*(long *)(lVar10 + 0x18) + 2);
    uVar3 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
    if (uVar3 != 0) {
      uVar6 = 0;
      pbVar9 = (byte *)(*(long *)(lVar10 + 0x18) + 5);
      do {
        if (((ulong)pbVar9[-1] << 0x38 | (ulong)*pbVar9 << 0x30 | (ulong)pbVar9[1] << 0x28 |
             (ulong)pbVar9[2] << 0x20 | (ulong)pbVar9[3] << 0x18 | (ulong)pbVar9[4] << 0x10 |
            (ulong)pbVar9[5] << 8) + (ulong)pbVar9[6] == param_2[1]) goto LAB_006f0de0;
        uVar6 = uVar6 + 1;
        pbVar9 = pbVar9 + *(byte *)(param_1 + 0x27);
      } while (uVar3 != uVar6);
    }
    FUN_006ece04(param_1,0);
    uVar6 = 0x10b;
  }
  return uVar6;
}


// ===== 006f10b8  FUN_006f10b8 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_006f10b8(long param_1,long *param_2)

{
  uint *puVar1;
  float *pfVar2;
  ulong uVar3;
  float fVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ushort uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  byte *pbVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [12];
  float *pfVar28;
  undefined1 (*pauVar29) [16];
  float *pfVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint local_98;
  float local_94;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  undefined8 uStack_80;
  long local_70;
  float local_68 [10];
  
  lVar16 = *param_2;
  if (lVar16 == 0) {
    return 0;
  }
  lVar21 = param_2[3];
  uVar5 = *(undefined1 *)(lVar21 + 2);
  uVar6 = *(undefined1 *)(lVar21 + 3);
  uVar19 = (ulong)*(byte *)(param_1 + 0x27);
  bVar7 = *(byte *)(param_1 + 0x25);
  uVar22 = (ulong)bVar7;
  local_70 = ((ulong)*(byte *)(lVar21 + 4) << 0x38 | (ulong)*(byte *)(lVar21 + 5) << 0x30 |
              (ulong)*(byte *)(lVar21 + 6) << 0x28 | (ulong)*(byte *)(lVar21 + 7) << 0x20 |
              (ulong)*(byte *)(lVar21 + 8) << 0x18 | (ulong)*(byte *)(lVar21 + 9) << 0x10 |
             (ulong)*(byte *)(lVar21 + 10) << 8) + (ulong)*(byte *)(lVar21 + 0xb);
  puVar20 = (uint *)(lVar21 + 0xc);
  uVar23 = 0;
  do {
    uVar17 = uVar23 + 2;
    uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
    local_68[uVar23] = (float)(uVar9 >> 0x10 | uVar9 << 0x10);
    puVar1 = puVar20 + 1;
    puVar20 = puVar20 + 2;
    uVar9 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
    local_68[uVar23 + 1] = (float)(uVar9 >> 0x10 | uVar9 << 0x10);
    uVar23 = uVar17;
  } while (uVar17 < uVar22);
  uVar14 = CONCAT11(uVar5,uVar6);
  if (1 < uVar14) {
    uVar23 = uVar22;
    if (uVar22 < 3) {
      uVar23 = 2;
    }
    cVar8 = *(char *)(param_1 + 0x26);
    uVar17 = 1;
    uVar23 = (uVar23 - 1 >> 1) + 1;
    uVar26 = uVar23 & 0x7ffffffffffffffc;
    do {
      puVar20 = (uint *)(lVar21 + uVar17 * uVar19 + 0xc);
      uVar18 = 0;
      do {
        uVar3 = uVar18 + 2;
        uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
        (&local_98)[uVar18] = uVar9 >> 0x10 | uVar9 << 0x10;
        puVar1 = puVar20 + 1;
        puVar20 = puVar20 + 2;
        uVar9 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
        (&local_94)[uVar18] = (float)(uVar9 >> 0x10 | uVar9 << 0x10);
        uVar18 = uVar3;
      } while (uVar3 < uVar22);
      if (cVar8 == '\0') {
        uVar18 = uVar26;
        pauVar27 = (undefined1 (*) [12])&local_98;
        pauVar29 = (undefined1 (*) [16])local_68;
        if (6 < bVar7) {
          do {
            auVar32._0_4_ = *(undefined4 *)*pauVar29;
            auVar34._0_4_ = *(undefined4 *)(*pauVar29 + 4);
            auVar32._4_4_ = *(undefined4 *)(*pauVar29 + 8);
            auVar34._4_4_ = *(undefined4 *)(*pauVar29 + 0xc);
            auVar32._8_4_ = *(undefined4 *)pauVar29[1];
            auVar34._8_4_ = *(undefined4 *)(pauVar29[1] + 4);
            auVar32._12_4_ = *(undefined4 *)(pauVar29[1] + 8);
            auVar34._12_4_ = *(undefined4 *)(pauVar29[1] + 0xc);
            uVar18 = uVar18 - 4;
            auVar31._4_4_ = *(undefined4 *)(*pauVar27 + 8);
            auVar31._0_4_ = *(undefined4 *)*pauVar27;
            auVar31._8_4_ = *(undefined4 *)(pauVar27[1] + 4);
            auVar31._12_4_ = *(undefined4 *)pauVar27[2];
            auVar31 = NEON_fcmgt(auVar31,auVar32,4);
            auVar39._4_4_ = *(undefined4 *)pauVar27[1];
            auVar39._0_4_ = *(undefined4 *)(*pauVar27 + 4);
            auVar39._8_4_ = *(undefined4 *)(pauVar27[1] + 8);
            auVar39._12_4_ = *(undefined4 *)(pauVar27[2] + 4);
            auVar39 = NEON_fcmgt(auVar34,auVar39,4);
            auVar33._4_4_ = *(undefined4 *)(*pauVar27 + 8);
            auVar33._0_4_ = *(undefined4 *)*pauVar27;
            auVar33._8_4_ = *(undefined4 *)(pauVar27[1] + 4);
            auVar33._12_4_ = *(undefined4 *)pauVar27[2];
            auVar31 = NEON_bsl(auVar31,auVar32,auVar33,1);
            auVar40._4_4_ = *(undefined4 *)pauVar27[1];
            auVar40._0_4_ = *(undefined4 *)(*pauVar27 + 4);
            auVar40._8_4_ = *(undefined4 *)(pauVar27[1] + 8);
            auVar40._12_4_ = *(undefined4 *)(pauVar27[2] + 4);
            auVar33 = NEON_bsl(auVar39,auVar34,auVar40,1);
            *(int *)*pauVar29 = auVar31._0_4_;
            *(int *)(*pauVar29 + 4) = auVar33._0_4_;
            *(int *)(*pauVar29 + 8) = auVar31._4_4_;
            *(int *)(*pauVar29 + 0xc) = auVar33._4_4_;
            *(int *)pauVar29[1] = auVar31._8_4_;
            *(int *)(pauVar29[1] + 4) = auVar33._8_4_;
            *(int *)(pauVar29[1] + 8) = auVar31._12_4_;
            *(int *)(pauVar29[1] + 0xc) = auVar33._12_4_;
            pauVar27 = (undefined1 (*) [12])(pauVar27[2] + 8);
            pauVar29 = pauVar29 + 2;
          } while (uVar18 != 0);
          uVar18 = uVar26 << 1;
          if (uVar23 == uVar26) goto LAB_006f11bc;
        }
        else {
          uVar18 = 0;
        }
        pfVar28 = &local_94 + uVar18;
        pfVar30 = local_68 + uVar18 + 1;
        do {
          fVar35 = *pfVar30;
          uVar18 = uVar18 + 2;
          pfVar2 = pfVar28 + -1;
          fVar37 = *pfVar28;
          pfVar28 = pfVar28 + 2;
          fVar4 = pfVar30[-1];
          if (*pfVar2 <= pfVar30[-1]) {
            fVar4 = *pfVar2;
          }
          if (fVar35 == fVar37 || fVar35 < fVar37 != (NAN(fVar35) || NAN(fVar37))) {
            fVar35 = fVar37;
          }
          pfVar30[-1] = fVar4;
          *pfVar30 = fVar35;
          pfVar30 = pfVar30 + 2;
        } while (uVar18 < uVar22);
      }
      else {
        uVar18 = uVar26;
        pauVar27 = (undefined1 (*) [12])&local_98;
        pauVar29 = (undefined1 (*) [16])local_68;
        if (6 < bVar7) {
          do {
            uVar18 = uVar18 - 4;
            uVar36 = (undefined4)((ulong)*(undefined8 *)(*pauVar27 + 8) >> 0x20);
            uVar38 = (undefined4)((ulong)*(undefined8 *)pauVar27[2] >> 0x20);
            auVar12._12_4_ = uVar38;
            auVar12._0_12_ = *(undefined1 (*) [12])(pauVar27[1] + 4);
            auVar39 = NEON_smin(pauVar29[1],auVar12,4);
            auVar10._12_4_ = uVar36;
            auVar10._0_12_ = *pauVar27;
            auVar40 = NEON_smin(*pauVar29,auVar10,4);
            auVar13._12_4_ = uVar38;
            auVar13._0_12_ = *(undefined1 (*) [12])(pauVar27[1] + 4);
            auVar33 = NEON_smax(pauVar29[1],auVar13,4);
            auVar11._12_4_ = uVar36;
            auVar11._0_12_ = *pauVar27;
            auVar31 = NEON_smax(*pauVar29,auVar11,4);
            *(int *)*pauVar29 = auVar40._0_4_;
            *(int *)(*pauVar29 + 4) = auVar31._4_4_;
            *(int *)(*pauVar29 + 8) = auVar40._8_4_;
            *(int *)(*pauVar29 + 0xc) = auVar31._12_4_;
            *(int *)pauVar29[1] = auVar39._0_4_;
            *(int *)(pauVar29[1] + 4) = auVar33._4_4_;
            *(int *)(pauVar29[1] + 8) = auVar39._8_4_;
            *(int *)(pauVar29[1] + 0xc) = auVar33._12_4_;
            pauVar27 = (undefined1 (*) [12])(pauVar27[2] + 8);
            pauVar29 = pauVar29 + 2;
          } while (uVar18 != 0);
          uVar18 = uVar26 << 1;
          if (uVar23 == uVar26) goto LAB_006f11bc;
        }
        else {
          uVar18 = 0;
        }
        pfVar28 = &local_94 + uVar18;
        pfVar30 = local_68 + uVar18 + 1;
        do {
          pfVar2 = pfVar28 + -1;
          fVar35 = *pfVar28;
          uVar18 = uVar18 + 2;
          pfVar28 = pfVar28 + 2;
          fVar4 = pfVar30[-1];
          if ((int)*pfVar2 <= (int)pfVar30[-1]) {
            fVar4 = *pfVar2;
          }
          pfVar30[-1] = fVar4;
          fVar4 = *pfVar30;
          if ((int)*pfVar30 <= (int)fVar35) {
            fVar4 = fVar35;
          }
          *pfVar30 = fVar4;
          pfVar30 = pfVar30 + 2;
        } while (uVar18 < uVar22);
      }
LAB_006f11bc:
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar14);
  }
  lVar21 = *(long *)(lVar16 + 0x18);
  uVar9 = (uint)(*(ushort *)(lVar21 + 2) >> 8) | (*(ushort *)(lVar21 + 2) & 0xff00ff) << 8;
  uVar23 = (ulong)uVar9;
  if (uVar9 != 0) {
    uVar22 = param_2[1];
    lVar24 = 0;
    pbVar25 = (byte *)(lVar21 + 5);
    do {
      if (((ulong)pbVar25[-1] << 0x38 | (ulong)*pbVar25 << 0x30 | (ulong)pbVar25[1] << 0x28 |
           (ulong)pbVar25[2] << 0x20 | (ulong)pbVar25[3] << 0x18 | (ulong)pbVar25[4] << 0x10 |
          (ulong)pbVar25[5] << 8) + (ulong)pbVar25[6] == uVar22) {
        lVar21 = lVar21 + (lVar24 >> 0x20);
        uVar23 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
        uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
        *(ulong *)(lVar21 + 4) = uVar23 >> 0x20 | uVar23 << 0x20;
        if (*(char *)(param_1 + 0x25) != '\0') {
          uVar23 = 0;
          puVar20 = (uint *)(lVar21 + 0xc);
          do {
            pfVar28 = local_68 + uVar23;
            uVar23 = uVar23 + 1;
            uVar9 = ((uint)*pfVar28 & 0xff00ff00) >> 8 | ((uint)*pfVar28 & 0xff00ff) << 8;
            *puVar20 = uVar9 >> 0x10 | uVar9 << 0x10;
            puVar20 = puVar20 + 1;
          } while (uVar23 < *(byte *)(param_1 + 0x25));
        }
        *(undefined4 *)(lVar16 + 0x14) = 1;
        uVar15 = FUN_006f10b8();
        return uVar15;
      }
      uVar23 = uVar23 - 1;
      pbVar25 = pbVar25 + uVar19;
      lVar24 = lVar24 + (uVar19 << 0x20);
    } while (uVar23 != 0);
  }
  return 0x10b;
}


// ===== 006f146c  FUN_006f146c =====

undefined8 FUN_006f146c(long param_1,long *param_2,undefined4 *param_3)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  
  if (*param_2 != 0) {
    lVar4 = *(long *)(*param_2 + 0x18);
    uVar1 = *(ushort *)(lVar4 + 2);
    uVar2 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
    if (uVar2 != 0) {
      uVar3 = 0;
      pbVar5 = (byte *)(lVar4 + 5);
      do {
        if (((ulong)pbVar5[-1] << 0x38 | (ulong)*pbVar5 << 0x30 | (ulong)pbVar5[1] << 0x28 |
             (ulong)pbVar5[2] << 0x20 | (ulong)pbVar5[3] << 0x18 | (ulong)pbVar5[4] << 0x10 |
            (ulong)pbVar5[5] << 8) + (ulong)pbVar5[6] == param_2[1]) goto LAB_006f14f8;
        uVar3 = uVar3 + 1;
        pbVar5 = pbVar5 + *(byte *)(param_1 + 0x27);
      } while (uVar2 != uVar3);
    }
    return 0x10b;
  }
  uVar3 = 0xffffffff;
LAB_006f14f8:
  *param_3 = (int)uVar3;
  return 0;
}


// ===== 006f1504  FUN_006f1504 =====

void FUN_006f1504(long param_1,long param_2,ulong *param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  
  lVar3 = *(long *)(param_2 + 0x18) + (long)(int)(uint)*(byte *)(param_1 + 0x27) * (long)param_4;
  uVar2 = (*param_3 & 0xff00ff00ff00ff00) >> 8 | (*param_3 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  *(ulong *)(lVar3 + 4) = uVar2 >> 0x20 | uVar2 << 0x20;
  if (*(char *)(param_1 + 0x25) != '\0') {
    uVar2 = 0;
    puVar4 = (uint *)(lVar3 + 0xc);
    do {
      uVar1 = *(uint *)((long)param_3 + uVar2 * 4 + 8);
      uVar2 = uVar2 + 1;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      *puVar4 = uVar1 >> 0x10 | uVar1 << 0x10;
      puVar4 = puVar4 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x25));
  }
  *(undefined4 *)(param_2 + 0x14) = 1;
  return;
}


// ===== 006f155c  FUN_006f155c =====

undefined8 FUN_006f155c(long param_1,long *param_2,long param_3)

{
  uint *puVar1;
  float *pfVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 (*pauVar12) [12];
  undefined1 (*pauVar13) [12];
  undefined1 (*pauVar14) [12];
  undefined1 (*pauVar15) [12];
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  float *pfVar20;
  uint *puVar21;
  ulong uVar22;
  ulong uVar23;
  float *pfVar24;
  byte *pbVar25;
  ulong uVar26;
  int iVar27;
  long *plVar28;
  long lVar29;
  long *plVar30;
  ulong uVar31;
  undefined1 (*pauVar32) [12];
  undefined1 (*pauVar33) [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float local_48 [10];
  undefined1 (*pauVar16) [12];
  
  if ((long *)*param_2 == (long *)0x0) {
    return 0;
  }
  iVar27 = 0;
  plVar28 = (long *)*param_2;
LAB_006f1590:
  if (iVar27 == 100) {
    return 0x10b;
  }
  lVar29 = plVar28[3];
  uVar4 = (uint)(*(ushort *)(lVar29 + 2) >> 8) | (*(ushort *)(lVar29 + 2) & 0xff00ff) << 8;
  uVar31 = (ulong)uVar4;
  if (uVar4 == 0) {
    return 0x10b;
  }
  lVar17 = 0;
  iVar27 = iVar27 + 1;
  pbVar25 = (byte *)(lVar29 + 5);
  while (((ulong)pbVar25[-1] << 0x38 | (ulong)*pbVar25 << 0x30 | (ulong)pbVar25[1] << 0x28 |
          (ulong)pbVar25[2] << 0x20 | (ulong)pbVar25[3] << 0x18 | (ulong)pbVar25[4] << 0x10 |
         (ulong)pbVar25[5] << 8) + (ulong)pbVar25[6] != param_2[1]) {
    uVar31 = uVar31 - 1;
    pbVar25 = pbVar25 + *(byte *)(param_1 + 0x27);
    lVar17 = lVar17 + ((ulong)*(byte *)(param_1 + 0x27) << 0x20);
    if (uVar31 == 0) {
      return 0x10b;
    }
  }
  lVar29 = lVar29 + (lVar17 >> 0x20);
  uVar31 = ((ulong)*(byte *)(lVar29 + 4) << 0x38 | (ulong)*(byte *)(lVar29 + 5) << 0x30 |
            (ulong)*(byte *)(lVar29 + 6) << 0x28 | (ulong)*(byte *)(lVar29 + 7) << 0x20 |
            (ulong)*(byte *)(lVar29 + 8) << 0x18 | (ulong)*(byte *)(lVar29 + 9) << 0x10 |
           (ulong)*(byte *)(lVar29 + 10) << 8) + (ulong)*(byte *)(lVar29 + 0xb);
  bVar3 = *(byte *)(param_1 + 0x25);
  uVar18 = (ulong)bVar3;
  uVar19 = 0;
  puVar21 = (uint *)(lVar29 + 0xc);
  do {
    uVar22 = uVar19 + 2;
    uVar4 = (*puVar21 & 0xff00ff00) >> 8 | (*puVar21 & 0xff00ff) << 8;
    local_48[uVar19] = (float)(uVar4 >> 0x10 | uVar4 << 0x10);
    puVar1 = puVar21 + 1;
    puVar21 = puVar21 + 2;
    uVar4 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
    local_48[uVar19 + 1] = (float)(uVar4 >> 0x10 | uVar4 << 0x10);
    uVar19 = uVar22;
  } while (uVar22 < uVar18);
  if (*(char *)(param_1 + 0x26) == '\x01') {
    if (bVar3 != 0) {
      uVar19 = 0;
      do {
        lVar17 = param_3 + uVar19 * 4;
        if ((*(int *)(lVar17 + 8) < (int)local_48[uVar19]) ||
           ((int)local_48[uVar19 + 1] < *(int *)(lVar17 + 0xc))) goto LAB_006f1744;
        uVar19 = uVar19 + 2;
      } while (uVar19 < uVar18);
    }
  }
  else if (bVar3 != 0) {
    uVar19 = 0;
    do {
      lVar17 = param_3 + uVar19 * 4;
      if (*(float *)(lVar17 + 8) < local_48[uVar19]) goto LAB_006f1744;
      fVar34 = *(float *)(lVar17 + 0xc);
      fVar39 = local_48[uVar19 + 1];
      if (fVar34 != fVar39 && fVar34 < fVar39 == (NAN(fVar34) || NAN(fVar39))) goto LAB_006f1744;
      uVar19 = uVar19 + 2;
    } while (uVar19 < uVar18);
  }
  plVar30 = (long *)*plVar28;
  goto joined_r0x006f18c0;
LAB_006f1744:
  uVar19 = uVar18;
  if (uVar18 < 3) {
    uVar19 = 2;
  }
  uVar19 = (uVar19 - 1 >> 1) + 1;
  if (*(char *)(param_1 + 0x26) == '\0') {
    if (6 < bVar3) {
      uVar23 = uVar19 & 0x7ffffffffffffffc;
      uVar22 = uVar23 << 1;
      uVar26 = uVar23;
      pauVar32 = (undefined1 (*) [12])(param_3 + 8);
      pauVar33 = (undefined1 (*) [16])local_48;
      do {
        auVar36._0_4_ = *(undefined4 *)*pauVar33;
        auVar38._0_4_ = *(undefined4 *)(*pauVar33 + 4);
        auVar36._4_4_ = *(undefined4 *)(*pauVar33 + 8);
        auVar38._4_4_ = *(undefined4 *)(*pauVar33 + 0xc);
        auVar36._8_4_ = *(undefined4 *)pauVar33[1];
        auVar38._8_4_ = *(undefined4 *)(pauVar33[1] + 4);
        auVar36._12_4_ = *(undefined4 *)(pauVar33[1] + 8);
        auVar38._12_4_ = *(undefined4 *)(pauVar33[1] + 0xc);
        uVar26 = uVar26 - 4;
        puVar9 = *pauVar32;
        puVar10 = *pauVar32;
        puVar11 = *pauVar32;
        pauVar15 = pauVar32 + 1;
        pauVar12 = pauVar32 + 1;
        pauVar13 = pauVar32 + 1;
        pauVar16 = pauVar32 + 2;
        pauVar14 = pauVar32 + 2;
        pauVar32 = (undefined1 (*) [12])(pauVar32[2] + 8);
        auVar35._4_4_ = *(undefined4 *)(puVar11 + 8);
        auVar35._0_4_ = *(undefined4 *)puVar9;
        auVar35._8_4_ = *(undefined4 *)(*pauVar12 + 4);
        auVar35._12_4_ = *(undefined4 *)*pauVar16;
        auVar35 = NEON_fcmgt(auVar35,auVar36,4);
        auVar43._4_4_ = *(undefined4 *)*pauVar15;
        auVar43._0_4_ = *(undefined4 *)(puVar10 + 4);
        auVar43._8_4_ = *(undefined4 *)(*pauVar13 + 8);
        auVar43._12_4_ = *(undefined4 *)(*pauVar14 + 4);
        auVar43 = NEON_fcmgt(auVar38,auVar43,4);
        auVar37._4_4_ = *(undefined4 *)(puVar11 + 8);
        auVar37._0_4_ = *(undefined4 *)puVar9;
        auVar37._8_4_ = *(undefined4 *)(*pauVar12 + 4);
        auVar37._12_4_ = *(undefined4 *)*pauVar16;
        auVar35 = NEON_bsl(auVar35,auVar36,auVar37,1);
        auVar44._4_4_ = *(undefined4 *)*pauVar15;
        auVar44._0_4_ = *(undefined4 *)(puVar10 + 4);
        auVar44._8_4_ = *(undefined4 *)(*pauVar13 + 8);
        auVar44._12_4_ = *(undefined4 *)(*pauVar14 + 4);
        auVar37 = NEON_bsl(auVar43,auVar38,auVar44,1);
        *(int *)*pauVar33 = auVar35._0_4_;
        *(int *)(*pauVar33 + 4) = auVar37._0_4_;
        *(int *)(*pauVar33 + 8) = auVar35._4_4_;
        *(int *)(*pauVar33 + 0xc) = auVar37._4_4_;
        *(int *)pauVar33[1] = auVar35._8_4_;
        *(int *)(pauVar33[1] + 4) = auVar37._8_4_;
        *(int *)(pauVar33[1] + 8) = auVar35._12_4_;
        *(int *)(pauVar33[1] + 0xc) = auVar37._12_4_;
        pauVar33 = pauVar33 + 2;
      } while (uVar26 != 0);
      if (uVar19 == uVar23) goto LAB_006f1884;
    }
    else {
      uVar22 = 0;
    }
    pfVar20 = (float *)(param_3 + 0xc + uVar22 * 4);
    pfVar24 = local_48 + uVar22 + 1;
    do {
      fVar39 = *pfVar24;
      uVar22 = uVar22 + 2;
      pfVar2 = pfVar20 + -1;
      fVar41 = *pfVar20;
      pfVar20 = pfVar20 + 2;
      fVar34 = pfVar24[-1];
      if (*pfVar2 <= pfVar24[-1]) {
        fVar34 = *pfVar2;
      }
      if (fVar39 == fVar41 || fVar39 < fVar41 != (NAN(fVar39) || NAN(fVar41))) {
        fVar39 = fVar41;
      }
      pfVar24[-1] = fVar34;
      *pfVar24 = fVar39;
      pfVar24 = pfVar24 + 2;
    } while (uVar22 < uVar18);
  }
  else {
    if (6 < bVar3) {
      uVar23 = uVar19 & 0x7ffffffffffffffc;
      uVar22 = uVar23 << 1;
      uVar26 = uVar23;
      pauVar32 = (undefined1 (*) [12])(param_3 + 8);
      pauVar33 = (undefined1 (*) [16])local_48;
      do {
        uVar26 = uVar26 - 4;
        uVar40 = (undefined4)((ulong)*(undefined8 *)(*pauVar32 + 8) >> 0x20);
        uVar42 = (undefined4)((ulong)*(undefined8 *)pauVar32[2] >> 0x20);
        auVar7._12_4_ = uVar42;
        auVar7._0_12_ = *(undefined1 (*) [12])(pauVar32[1] + 4);
        auVar43 = NEON_smin(pauVar33[1],auVar7,4);
        auVar5._12_4_ = uVar40;
        auVar5._0_12_ = *pauVar32;
        auVar44 = NEON_smin(*pauVar33,auVar5,4);
        auVar8._12_4_ = uVar42;
        auVar8._0_12_ = *(undefined1 (*) [12])(pauVar32[1] + 4);
        auVar37 = NEON_smax(pauVar33[1],auVar8,4);
        auVar6._12_4_ = uVar40;
        auVar6._0_12_ = *pauVar32;
        auVar35 = NEON_smax(*pauVar33,auVar6,4);
        *(int *)*pauVar33 = auVar44._0_4_;
        *(int *)(*pauVar33 + 4) = auVar35._4_4_;
        *(int *)(*pauVar33 + 8) = auVar44._8_4_;
        *(int *)(*pauVar33 + 0xc) = auVar35._12_4_;
        *(int *)pauVar33[1] = auVar43._0_4_;
        *(int *)(pauVar33[1] + 4) = auVar37._4_4_;
        *(int *)(pauVar33[1] + 8) = auVar43._8_4_;
        *(int *)(pauVar33[1] + 0xc) = auVar37._12_4_;
        pauVar33 = pauVar33 + 2;
        pauVar32 = (undefined1 (*) [12])(pauVar32[2] + 8);
      } while (uVar26 != 0);
      if (uVar19 == uVar23) goto LAB_006f1884;
    }
    else {
      uVar22 = 0;
    }
    pfVar20 = (float *)(param_3 + 0xc + uVar22 * 4);
    pfVar24 = local_48 + uVar22 + 1;
    do {
      pfVar2 = pfVar20 + -1;
      fVar39 = *pfVar20;
      uVar22 = uVar22 + 2;
      pfVar20 = pfVar20 + 2;
      fVar34 = pfVar24[-1];
      if ((int)*pfVar2 <= (int)pfVar24[-1]) {
        fVar34 = *pfVar2;
      }
      pfVar24[-1] = fVar34;
      fVar34 = *pfVar24;
      if ((int)*pfVar24 <= (int)fVar39) {
        fVar34 = fVar39;
      }
      *pfVar24 = fVar34;
      pfVar24 = pfVar24 + 2;
    } while (uVar22 < uVar18);
  }
LAB_006f1884:
  uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
  uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
  *(ulong *)(lVar29 + 4) = uVar31 >> 0x20 | uVar31 << 0x20;
  if (*(char *)(param_1 + 0x25) != '\0') {
    uVar31 = 0;
    puVar21 = (uint *)(lVar29 + 0xc);
    do {
      uVar4 = *(uint *)(*(undefined1 (*) [16])local_48 + uVar31 * 4);
      uVar31 = uVar31 + 1;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      *puVar21 = uVar4 >> 0x10 | uVar4 << 0x10;
      puVar21 = puVar21 + 1;
    } while (uVar31 < *(byte *)(param_1 + 0x25));
  }
  *(undefined4 *)((long)plVar28 + 0x14) = 1;
  plVar30 = (long *)*plVar28;
joined_r0x006f18c0:
  param_2 = plVar28;
  plVar28 = plVar30;
  if (plVar30 == (long *)0x0) {
    return 0;
  }
  goto LAB_006f1590;
}


// ===== 006f18f4  FUN_006f18f4 =====

ulong FUN_006f18f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x90);
  iVar1 = FUN_00592fec(plVar5,0);
  if (iVar1 == 0) {
    puVar2 = (undefined8 *)plVar5[0x10];
    if ((*(ushort *)((long)puVar2 + 0x14) & 0x9000) == 0) {
      *puVar2 = param_2;
      *(undefined2 *)((long)puVar2 + 0x14) = 4;
      lVar3 = *(long *)(*plVar5 + 0x18);
    }
    else {
      FUN_005c2a94(puVar2,param_2);
      lVar3 = *(long *)(*plVar5 + 0x18);
    }
    if (lVar3 != 0) {
      (*DAT_00b0da80)();
    }
  }
  plVar5 = *(long **)(param_1 + 0x90);
  iVar1 = FUN_00592fec(plVar5,1);
  if (iVar1 == 0) {
    lVar3 = plVar5[0x10];
    if ((*(ushort *)(lVar3 + 0x4c) & 0x9000) == 0) {
      *(undefined8 *)(lVar3 + 0x38) = param_3;
      *(undefined2 *)(lVar3 + 0x4c) = 4;
      lVar3 = *(long *)(*plVar5 + 0x18);
    }
    else {
      FUN_005c2a94(lVar3 + 0x38,param_3);
      lVar3 = *(long *)(*plVar5 + 0x18);
    }
    if (lVar3 != 0) {
      (*DAT_00b0da80)();
    }
  }
  sqlite3_step(*(undefined8 *)(param_1 + 0x90));
  plVar5 = *(long **)(param_1 + 0x90);
  if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    if (*(long *)(lVar3 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if (0 < plVar5[0x17]) {
      FUN_0058f57c(lVar3,plVar5);
    }
    uVar4 = FUN_0058f640(plVar5);
    plVar5[7] = 0;
    *(undefined1 *)((long)plVar5 + 199) = 1;
    *(undefined2 *)((long)plVar5 + 0xc4) = 0xff02;
    *(undefined4 *)((long)plVar5 + 0x2c) = 1;
    plVar5[6] = 0xffffffff;
    *(undefined4 *)(plVar5 + 8) = 0;
    plVar5[10] = 0;
    if (((int)uVar4 != 0) || (*(char *)(lVar3 + 0x67) != '\0')) {
      uVar4 = FUN_005c1188(lVar3,uVar4 & 0xffffffff);
    }
    if (*(long *)(lVar3 + 0x18) != 0) {
      uVar4 = uVar4 & 0xffffffff;
      (*DAT_00b0da80)(*(long *)(lVar3 + 0x18));
    }
    return uVar4;
  }
  return 0;
}


// ===== 006f1aa8  FUN_006f1aa8 =====

ulong FUN_006f1aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0xa8);
  iVar1 = FUN_00592fec(plVar5,0);
  if (iVar1 == 0) {
    puVar2 = (undefined8 *)plVar5[0x10];
    if ((*(ushort *)((long)puVar2 + 0x14) & 0x9000) == 0) {
      *puVar2 = param_2;
      *(undefined2 *)((long)puVar2 + 0x14) = 4;
      lVar3 = *(long *)(*plVar5 + 0x18);
    }
    else {
      FUN_005c2a94(puVar2,param_2);
      lVar3 = *(long *)(*plVar5 + 0x18);
    }
    if (lVar3 != 0) {
      (*DAT_00b0da80)();
    }
  }
  plVar5 = *(long **)(param_1 + 0xa8);
  iVar1 = FUN_00592fec(plVar5,1);
  if (iVar1 == 0) {
    lVar3 = plVar5[0x10];
    if ((*(ushort *)(lVar3 + 0x4c) & 0x9000) == 0) {
      *(undefined8 *)(lVar3 + 0x38) = param_3;
      *(undefined2 *)(lVar3 + 0x4c) = 4;
      lVar3 = *(long *)(*plVar5 + 0x18);
    }
    else {
      FUN_005c2a94(lVar3 + 0x38,param_3);
      lVar3 = *(long *)(*plVar5 + 0x18);
    }
    if (lVar3 != 0) {
      (*DAT_00b0da80)();
    }
  }
  sqlite3_step(*(undefined8 *)(param_1 + 0xa8));
  plVar5 = *(long **)(param_1 + 0xa8);
  if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    if (*(long *)(lVar3 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if (0 < plVar5[0x17]) {
      FUN_0058f57c(lVar3,plVar5);
    }
    uVar4 = FUN_0058f640(plVar5);
    plVar5[7] = 0;
    *(undefined1 *)((long)plVar5 + 199) = 1;
    *(undefined2 *)((long)plVar5 + 0xc4) = 0xff02;
    *(undefined4 *)((long)plVar5 + 0x2c) = 1;
    plVar5[6] = 0xffffffff;
    *(undefined4 *)(plVar5 + 8) = 0;
    plVar5[10] = 0;
    if (((int)uVar4 != 0) || (*(char *)(lVar3 + 0x67) != '\0')) {
      uVar4 = FUN_005c1188(lVar3,uVar4 & 0xffffffff);
    }
    if (*(long *)(lVar3 + 0x18) != 0) {
      uVar4 = uVar4 & 0xffffffff;
      (*DAT_00b0da80)(*(long *)(lVar3 + 0x18));
    }
    return uVar4;
  }
  return 0;
}


// ===== 006f1c5c  FUN_006f1c5c =====

undefined8 FUN_006f1c5c(long param_1,ulong param_2,undefined8 *param_3,int param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  UNRECOVERED_JUMPTABLE = FUN_006f18f4;
  if (param_4 != 0) {
    UNRECOVERED_JUMPTABLE = FUN_006f1aa8;
  }
  if (0 < param_4) {
    iVar2 = (int)((param_2 & 0xffffffff) * 0x51d07eaf >> 0x20);
    for (puVar4 = *(undefined8 **)
                   (param_1 + (ulong)((int)param_2 +
                                     (iVar2 + ((uint)((int)param_2 - iVar2) >> 1) >> 6) * -0x61) * 8
                   + 0xc0); (puVar4 != (undefined8 *)0x0 && (puVar4[1] != param_2));
        puVar4 = (undefined8 *)puVar4[4]) {
    }
    puVar3 = param_3;
    if (param_3 == (undefined8 *)0x0) {
      if (puVar4 == (undefined8 *)0x0) goto LAB_006f1d54;
      FUN_006ece04(param_1,*puVar4);
    }
    else {
      do {
        if (puVar3 == puVar4) {
          return 0x10b;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      if (puVar4 == (undefined8 *)0x0) goto LAB_006f1d54;
      FUN_006ece04(param_1,*puVar4);
      if (param_3 != (undefined8 *)0x0) {
        *(int *)(param_3 + 2) = *(int *)(param_3 + 2) + 1;
      }
    }
    *puVar4 = param_3;
  }
LAB_006f1d54:
                    /* WARNING: Could not recover jumptable at 0x006f1d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3[1]);
  return uVar1;
}


// ===== 006f1d84  FUN_006f1d84 =====

void FUN_006f1d84(long param_1,void *param_2,uint param_3,ulong param_4,long param_5,void *param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (1 < (int)param_3) {
    uVar8 = param_3 >> 1;
    param_4 = param_4 & 0xffffffff;
    iVar9 = param_3 - uVar8;
    pvVar4 = (void *)((long)param_2 + (ulong)uVar8 * 4);
    FUN_006f1d84(param_1,param_2,uVar8);
    FUN_006f1d84(param_1,pvVar4,iVar9,param_4,param_5,param_6);
    memcpy(param_6,param_2,(ulong)uVar8 * 4);
    uVar13 = -(param_4 >> 0x1f) & 0xfffffffe00000000 | param_4 << 1;
    uVar11 = (uint)*(byte *)(param_1 + 0x26);
    uVar15 = (long)(int)(param_4 << 1) | 1;
    if (*(byte *)(param_1 + 0x26) == 0) {
      lVar14 = uVar13 * 4;
      lVar16 = uVar15 * 4;
      iVar12 = 0;
      do {
        iVar7 = *(int *)((long)pvVar4 + (long)iVar12 * 4);
        if (uVar11 == uVar8) {
LAB_006f1ec8:
          iVar3 = uVar11 + iVar12;
          iVar12 = iVar12 + 1;
          *(int *)((long)param_2 + (long)iVar3 * 4) = iVar7;
        }
        else {
          iVar3 = *(int *)((long)param_6 + (long)(int)uVar11 * 4);
          if (iVar12 != iVar9) {
            lVar1 = param_5 + (long)iVar3 * 0x30 + 8;
            lVar2 = param_5 + (long)iVar7 * 0x30 + 8;
            fVar17 = *(float *)(lVar1 + lVar14);
            fVar19 = *(float *)(lVar2 + lVar14);
            if (fVar19 <= fVar17) {
              fVar18 = *(float *)(lVar1 + lVar16);
              fVar20 = *(float *)(lVar2 + lVar16);
              bVar10 = false;
              if ((fVar17 == fVar19) && (bVar10 = false, !NAN(fVar18) && !NAN(fVar20))) {
                bVar10 = fVar18 < fVar20;
              }
              if (!bVar10) goto LAB_006f1ec8;
            }
          }
          iVar7 = uVar11 + iVar12;
          uVar11 = uVar11 + 1;
          *(int *)((long)param_2 + (long)iVar7 * 4) = iVar3;
        }
      } while (((int)uVar11 < (int)uVar8) || (iVar12 < iVar9));
    }
    else {
      lVar14 = uVar13 * 4;
      lVar16 = uVar15 * 4;
      uVar11 = 0;
      iVar12 = 0;
      do {
        iVar7 = *(int *)((long)pvVar4 + (long)iVar12 * 4);
        if (uVar11 == uVar8) {
LAB_006f1e34:
          iVar3 = uVar11 + iVar12;
          iVar12 = iVar12 + 1;
          *(int *)((long)param_2 + (long)iVar3 * 4) = iVar7;
        }
        else {
          iVar3 = *(int *)((long)param_6 + (long)(int)uVar11 * 4);
          if (iVar12 != iVar9) {
            lVar1 = param_5 + (long)iVar3 * 0x30 + 8;
            lVar2 = param_5 + (long)iVar7 * 0x30 + 8;
            iVar5 = *(int *)(lVar1 + lVar14);
            iVar6 = *(int *)(lVar2 + lVar14);
            if ((iVar6 <= iVar5) &&
               ((iVar5 != iVar6 || (*(int *)(lVar2 + lVar16) <= *(int *)(lVar1 + lVar16)))))
            goto LAB_006f1e34;
          }
          iVar7 = uVar11 + iVar12;
          uVar11 = uVar11 + 1;
          *(int *)((long)param_2 + (long)iVar7 * 4) = iVar3;
        }
      } while (((int)uVar11 < (int)uVar8) || (iVar12 < iVar9));
    }
  }
  return;
}


// ===== 006f1f54  FUN_006f1f54 =====

undefined8
FUN_006f1f54(undefined8 param_1,undefined8 param_2,int param_3,long param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *local_50;
  uint local_48;
  
  if (param_3 < 4) {
    iVar1 = 0;
  }
  else {
    local_50 = *(char **)(param_4 + 0x18);
    if (local_50 == (char *)0x0) {
      local_48 = 0;
      iVar1 = FUN_0061c0c4(param_1,&local_50);
    }
    else {
      sVar3 = strlen(local_50);
      local_48 = (uint)sVar3 & 0x3fffffff;
      iVar1 = FUN_0061c0c4(param_1,&local_50);
    }
    if (iVar1 < 0) {
      uVar4 = sqlite3_mprintf("no such database: %s",*(undefined8 *)(param_4 + 0x18));
      *param_6 = uVar4;
      return 1;
    }
  }
  sqlite3_vtab_config(param_1,3);
  uVar4 = sqlite3_declare_vtab
                    (param_1,
                     "CREATE TABLE x( name       TEXT, path       TEXT, pageno     INTEGER, pagetype   TEXT, ncell      INTEGER, payload    INTEGER, unused     INTEGER, mx_payload INTEGER, pgoffset   INTEGER, pgsize     INTEGER, schema     TEXT HIDDEN, aggregate  BOOLEAN HIDDEN)"
                    );
  if ((int)uVar4 == 0) {
    iVar2 = sqlite3_initialize();
    if (iVar2 == 0) {
      puVar5 = (undefined8 *)FUN_005827b0(0x28);
      if (puVar5 != (undefined8 *)0x0) {
        uVar4 = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[3] = param_1;
        puVar5[4] = 0;
        *(int *)(puVar5 + 4) = iVar1;
        goto LAB_006f2060;
      }
    }
    else {
      puVar5 = (undefined8 *)0x0;
    }
    uVar4 = 7;
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
LAB_006f2060:
  *param_5 = puVar5;
  return uVar4;
}


// ===== 006f207c  FUN_006f207c =====

undefined8 FUN_006f207c(undefined8 param_1,uint *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  
  if (0 < (int)*param_2) {
    uVar10 = 0;
    uVar8 = 0xffffffff;
    uVar12 = 0xffffffff;
    pcVar11 = (char *)(*(long *)(param_2 + 2) + 5);
    uVar6 = 0xffffffff;
    do {
      if (pcVar11[-1] == '\x02') {
        if (*pcVar11 == '\0') {
          return 0x13;
        }
        iVar4 = *(int *)(pcVar11 + -5);
        if (iVar4 == 0xb) {
          uVar6 = uVar10 & 0xffffffff;
        }
        else if (iVar4 == 10) {
          uVar12 = uVar10 & 0xffffffff;
        }
        else if (iVar4 == 0) {
          uVar8 = uVar10 & 0xffffffff;
        }
      }
      uVar10 = uVar10 + 1;
      pcVar11 = pcVar11 + 0xc;
    } while (*param_2 != uVar10);
    bVar2 = -1 < (int)uVar12;
    if (bVar2) {
      puVar1 = (undefined4 *)(*(long *)(param_2 + 8) + uVar12 * 8);
      param_2[10] = param_2[10] | 1;
      *puVar1 = 1;
      *(undefined1 *)(puVar1 + 1) = 1;
    }
    uVar9 = (uint)bVar2;
    if (-1 < (int)uVar8) {
      uVar3 = param_2[10];
      uVar9 = uVar9 + 1;
      *(uint *)(*(long *)(param_2 + 8) + uVar8 * 8) = uVar9;
      param_2[10] = uVar3 | 2;
    }
    if (-1 < (int)uVar6) {
      uVar3 = param_2[10];
      *(uint *)(*(long *)(param_2 + 8) + uVar6 * 8) = uVar9 + 1;
      param_2[10] = uVar3 | 4;
    }
  }
  param_2[0x10] = 0;
  param_2[0x11] = 0x3ff00000;
  if (param_2[4] == 2) {
    piVar7 = *(int **)(param_2 + 6);
    if (((*piVar7 != 0) || ((char)piVar7[1] != '\0')) || (piVar7[2] != 1)) goto LAB_006f2180;
    cVar5 = (char)piVar7[3];
  }
  else {
    if ((param_2[4] != 1) || (**(int **)(param_2 + 6) != 0)) goto LAB_006f2180;
    cVar5 = (char)(*(int **)(param_2 + 6))[1];
  }
  if (cVar5 == '\0') {
    param_2[0xf] = 1;
    param_2[10] = param_2[10] | 8;
    param_2[0x14] = param_2[0x14] | 2;
    return 0;
  }
LAB_006f2180:
  param_2[0x14] = param_2[0x14] | 2;
  return 0;
}


// ===== 006f2204  FUN_006f2204 =====

undefined8 FUN_006f2204(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    puVar2 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != 0) {
        (*DAT_00b0da70)(DAT_00b103d8);
      }
      iVar1 = (*DAT_00b0da28)();
      DAT_00b105b8 = DAT_00b105b8 - iVar1;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(param_1);
      if (DAT_00b103d8 == 0) {
        return 0;
      }
      puVar2 = &DAT_00b0da80;
    }
    (*(code *)*puVar2)();
  }
  return 0;
}


// ===== 006f22b4  FUN_006f22b4 =====

undefined8 FUN_006f22b4(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  
  iVar2 = sqlite3_initialize();
  if ((iVar2 == 0) && (plVar3 = (long *)FUN_005827b0(0x868), plVar3 != (long *)0x0)) {
    memset(plVar3 + 1,0,0x860);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *plVar3 = param_1;
    *param_2 = plVar3;
    *(undefined4 *)((long)plVar3 + 0x14) = uVar1;
    return 0;
  }
  return 7;
}


// ===== 006f232c  FUN_006f232c =====

undefined8 FUN_006f232c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  FUN_006f39d4();
  sqlite3_finalize(*(undefined8 *)(param_1 + 8));
  puVar2 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != 0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(param_1);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_1);
    if (DAT_00b103d8 == 0) {
      return 0;
    }
    puVar2 = &DAT_00b0da80;
    param_1 = DAT_00b103d8;
  }
  (*(code *)*puVar2)(param_1);
  return 0;
}


// ===== 006f23e0  FUN_006f23e0 =====

ulong FUN_006f23e0(long *param_1,uint param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  
  lVar17 = *param_1;
  FUN_006f39d4();
  plVar15 = param_1 + 1;
  sqlite3_finalize(*plVar15);
  *plVar15 = 0;
  if ((param_2 & 1) != 0) {
    lVar16 = *param_5;
    if (lVar16 != 0) {
      if ((((*(ushort *)(lVar16 + 0x14) ^ 0xffff) & 0x202) == 0) &&
         (*(char *)(lVar16 + 0x16) == '\x01')) {
        pbVar7 = *(byte **)(lVar16 + 8);
      }
      else {
        if ((*(ushort *)(lVar16 + 0x14) & 1) != 0) goto LAB_006f25bc;
        pbVar7 = (byte *)FUN_005c17b0(lVar16,1);
      }
      if (pbVar7 != (byte *)0x0) {
        iVar4 = *(int *)(*(long *)(lVar17 + 0x18) + 0x28);
        uVar10 = (ulong)(iVar4 - 1);
        if (0 < iVar4) {
          puVar8 = (undefined8 *)(*(long *)(*(long *)(lVar17 + 0x18) + 0x20) + uVar10 * 0x20);
          do {
            pbVar13 = (byte *)*puVar8;
            iVar4 = (int)uVar10;
            pbVar14 = pbVar7;
            if (pbVar13 != (byte *)0x0) {
              do {
                bVar1 = *pbVar13;
                if (bVar1 == *pbVar14) {
                  if (bVar1 == 0) {
                    *(int *)((long)param_1 + 0x14) = iVar4;
                    if (iVar4 < 0) goto LAB_006f25bc;
                    uVar5 = 1;
                    goto joined_r0x006f2564;
                  }
                }
                else if ((&DAT_002c78ae)[bVar1] != (&DAT_002c78ae)[*pbVar14]) break;
                pbVar13 = pbVar13 + 1;
                pbVar14 = pbVar14 + 1;
              } while( true );
            }
            pbVar13 = pbVar7;
            pbVar14 = &DAT_002aeb89;
            if (iVar4 == 0) {
              do {
                bVar1 = *pbVar14;
                if (bVar1 == *pbVar13) {
                  if (bVar1 == 0) {
                    uVar5 = 1;
                    *(undefined4 *)((long)param_1 + 0x14) = 0;
                    goto joined_r0x006f2564;
                  }
                }
                else if ((&DAT_002c78ae)[bVar1] != (&DAT_002c78ae)[*pbVar13]) break;
                pbVar13 = pbVar13 + 1;
                pbVar14 = pbVar14 + 1;
              } while( true );
            }
            uVar10 = (ulong)(iVar4 - 1);
            puVar8 = puVar8 + -4;
          } while (0 < iVar4);
        }
      }
    }
LAB_006f25bc:
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    return 0;
  }
  uVar5 = 0;
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(lVar17 + 0x20);
joined_r0x006f2564:
  if ((param_2 >> 1 & 1) == 0) {
    lVar16 = 0;
    if ((param_2 >> 2 & 1) == 0) goto LAB_006f25f0;
LAB_006f243c:
    pdVar6 = (double *)param_5[uVar5];
    uVar2 = *(ushort *)((long)pdVar6 + 0x14);
    if ((uVar2 >> 3 & 1) == 0) {
      if ((uVar2 & 0x24) == 0) {
        if ((uVar2 & 0x12) == 0) {
          dVar19 = 0.0;
        }
        else {
          dVar19 = (double)FUN_005c1da8();
        }
      }
      else {
        dVar19 = (double)(long)*pdVar6;
      }
    }
    else {
      dVar19 = *pdVar6;
    }
    bVar3 = dVar19 != 0.0;
  }
  else {
    lVar16 = param_5[uVar5];
    uVar5 = uVar5 + 1;
    if (lVar16 == 0) {
LAB_006f25e4:
      lVar16 = 0;
    }
    else if ((((*(ushort *)(lVar16 + 0x14) ^ 0xffff) & 0x202) == 0) &&
            (*(char *)(lVar16 + 0x16) == '\x01')) {
      lVar16 = *(long *)(lVar16 + 8);
    }
    else {
      if ((*(ushort *)(lVar16 + 0x14) & 1) != 0) goto LAB_006f25e4;
      lVar16 = FUN_005c17b0(lVar16,1);
    }
    if ((param_2 >> 2 & 1) != 0) goto LAB_006f243c;
LAB_006f25f0:
    bVar3 = false;
  }
  lVar18 = *(long *)(lVar17 + 0x18);
  *(bool *)((long)param_1 + 0x11) = bVar3;
  iVar4 = sqlite3_initialize();
  puVar8 = (undefined8 *)&DAT_00b0d538;
  if (iVar4 == 0) {
    puVar8 = (undefined8 *)FUN_005827b0(0x20);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)&DAT_00b0d538;
    }
    else {
      if (lVar18 == 0) {
        uVar11 = 1000000000;
      }
      else {
        uVar11 = *(undefined4 *)(lVar18 + 0x88);
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined4 *)(puVar8 + 2) = 0;
      *(undefined4 *)((long)puVar8 + 0x14) = uVar11;
      *(undefined4 *)(puVar8 + 3) = 0;
      *(undefined2 *)((long)puVar8 + 0x1c) = 0;
    }
  }
  sqlite3_str_appendf(puVar8,
                      "SELECT * FROM (SELECT \'sqlite_schema\' AS name,1 AS rootpage,\'table\' AS type UNION ALL SELECT name,rootpage,type FROM \"%w\".sqlite_schema WHERE rootpage!=0)"
                      ,*(undefined8 *)
                        (*(long *)(*(long *)(lVar17 + 0x18) + 0x20) +
                        (long)*(int *)((long)param_1 + 0x14) * 0x20));
  if (lVar16 != 0) {
    sqlite3_str_appendf(puVar8,"WHERE name=%Q",lVar16);
  }
  if ((param_2 >> 3 & 1) != 0) {
    sqlite3_str_appendf(puVar8," ORDER BY name");
  }
  if (puVar8 == (undefined8 *)&DAT_00b0d538) {
    return 7;
  }
  if (((puVar8[1] == 0) ||
      (*(undefined1 *)(puVar8[1] + (ulong)*(uint *)(puVar8 + 3)) = 0,
      *(int *)((long)puVar8 + 0x14) == 0)) || ((*(byte *)((long)puVar8 + 0x1d) >> 2 & 1) != 0)) {
    puVar9 = (undefined8 *)puVar8[1];
  }
  else {
    puVar9 = (undefined8 *)FUN_005a7ad8(puVar8);
  }
  puVar12 = &DAT_00b0da18;
  if (DAT_00b0d9f0 == 0) {
LAB_006f2768:
    (*(code *)*puVar12)(puVar8);
  }
  else {
    if (DAT_00b103d8 != (undefined8 *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar4 = (*DAT_00b0da28)(puVar8);
    DAT_00b105b8 = DAT_00b105b8 - iVar4;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(puVar8);
    if (DAT_00b103d8 != (undefined8 *)0x0) {
      puVar12 = &DAT_00b0da80;
      puVar8 = DAT_00b103d8;
      goto LAB_006f2768;
    }
  }
  if (puVar9 == (undefined8 *)0x0) {
    return 7;
  }
  uVar5 = FUN_00598a9c(*(undefined8 *)(lVar17 + 0x18),puVar9,0xffffffff,0x80,0,plVar15,0);
  puVar8 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != (undefined8 *)0x0) {
      (*DAT_00b0da70)();
    }
    iVar4 = (*DAT_00b0da28)(puVar9);
    DAT_00b105b8 = DAT_00b105b8 - iVar4;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(puVar9);
    if (DAT_00b103d8 == (undefined8 *)0x0) goto LAB_006f2810;
    puVar8 = &DAT_00b0da80;
    puVar9 = DAT_00b103d8;
  }
  (*(code *)*puVar8)(puVar9);
LAB_006f2810:
  if (uVar5 == 0) {
    *(undefined4 *)(param_1 + 0x103) = 0xffffffff;
    uVar10 = FUN_006f2864(param_1);
    return uVar10;
  }
  return (ulong)uVar5;
}


// ===== 006f2864  FUN_006f2864 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_006f2864(long *param_1)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  void *__s;
  uint *puVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  long *plVar18;
  char *pcVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  uint *puVar28;
  int *piVar29;
  byte *pbVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  int *piVar34;
  int *piVar35;
  int *piVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int local_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int local_d0;
  uint local_cc;
  long local_c8;
  long *local_c0;
  byte *local_b8;
  uint *local_b0;
  uint local_a4;
  long local_a0;
  uint *local_98;
  long *local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 *puStack_78;
  ulong local_70;
  long lStack_68;
  
  lVar26 = param_1[0x105];
  lVar25 = *(long *)(*(long *)(*(long *)(*param_1 + 0x18) + 0x20) +
                     (long)*(int *)((long)param_1 + 0x14) * 0x20 + 8);
  local_a0 = **(long **)(lVar25 + 8);
  if (lVar26 != 0) {
    puVar17 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != 0) {
        (*DAT_00b0da70)();
      }
      iVar10 = (*DAT_00b0da28)(lVar26);
      DAT_00b105b8 = DAT_00b105b8 - iVar10;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(lVar26);
      if (DAT_00b103d8 == 0) goto LAB_006f293c;
      puVar17 = &DAT_00b0da80;
      lVar26 = DAT_00b103d8;
    }
    (*(code *)*puVar17)(lVar26);
  }
LAB_006f293c:
  puStack_78 = (undefined8 *)((long)param_1 + 0x83c);
  local_80 = param_1 + 0x109;
  param_1[0x105] = 0;
LAB_006f294c:
  while (uVar16 = *(uint *)(param_1 + 0x103), -1 < (int)uVar16) {
    if (*(char *)((long)param_1 + 0x11) == '\0') {
      param_1[0x10c] = 0;
      *(undefined4 *)(param_1 + 0x107) = 0;
      *puStack_78 = 0;
      *local_80 = 0;
      local_80[1] = 0;
    }
    plVar18 = param_1 + (ulong)uVar16 * 8 + 3;
    piVar34 = (int *)((long)param_1 + (ulong)uVar16 * 0x40 + 0x3c);
    plVar27 = param_1 + (ulong)uVar16 * 8 + 5;
    iVar10 = (int)*plVar27;
    if (iVar10 < *piVar34) {
LAB_006f2994:
      local_90 = plVar18;
      local_88 = param_1[(ulong)uVar16 * 8 + 9] + (long)iVar10 * 0x20;
      piVar35 = (int *)(local_88 + 0x1c);
      iVar10 = *piVar35;
      piVar29 = (int *)(local_88 + 0x18);
      piVar36 = (int *)(local_88 + 8);
      iVar11 = *piVar36;
LAB_006f29e8:
      do {
        if (iVar11 <= iVar10) goto LAB_006f2b38;
        if (*(char *)(lVar25 + 0x11) == '\0') {
          iVar10 = *(int *)(*(long *)(lVar25 + 8) + 0x38);
        }
        else {
          *(int *)(lVar25 + 0x14) = *(int *)(lVar25 + 0x14) + 1;
          if (*(char *)(lVar25 + 0x12) == '\0') {
            FUN_005ac65c(lVar25);
            iVar10 = *(int *)(*(long *)(lVar25 + 8) + 0x38);
            if (*(char *)(lVar25 + 0x11) == '\0') goto LAB_006f2a54;
          }
          else {
            iVar10 = *(int *)(*(long *)(lVar25 + 8) + 0x38);
          }
          iVar11 = *(int *)(lVar25 + 0x14) + -1;
          *(int *)(lVar25 + 0x14) = iVar11;
          if (iVar11 == 0) {
            FUN_005ac750(lVar25);
          }
        }
LAB_006f2a54:
        *(int *)(param_1 + 0x107) = (int)param_1[0x107] + 1;
        uVar15 = *(uint *)((long)param_1 + 0x81c);
        local_70 = (ulong)uVar15;
        lVar32 = *(long *)(*(long *)(*(long *)(*param_1 + 0x18) + 0x20) +
                           (long)*(int *)(*param_1 + 0x20) * 0x20 + 8);
        plVar18 = *(long **)(lVar32 + 8);
        lVar26 = **(long **)(*plVar18 + 0x48);
        if (lVar26 != 0) {
          iVar11 = (**(code **)(lVar26 + 0x50))(*(long **)(*plVar18 + 0x48),0x38428,&local_70);
          if (iVar11 != 0) {
            plVar18 = *(long **)(lVar32 + 8);
            uVar15 = *(uint *)((long)param_1 + 0x81c);
            goto LAB_006f2ab4;
          }
          param_1[0x10b] = local_70;
          param_1[0x10c] = param_1[0x10c] + lStack_68;
          iVar11 = *piVar36;
          uVar33 = (ulong)*piVar35;
          lVar26 = param_1[0x10a];
          if (iVar11 + -1 <= *piVar35) goto LAB_006f29b8;
LAB_006f2b18:
          param_1[0x10a] = lVar26 + (iVar10 + -4);
          iVar10 = (int)uVar33 + 1;
          *piVar35 = iVar10;
          if (*(char *)((long)param_1 + 0x11) == '\0') break;
          goto LAB_006f29e8;
        }
LAB_006f2ab4:
        lVar26 = param_1[0x10c] + (long)*(int *)((long)plVar18 + 0x34);
        param_1[0x10c] = lVar26;
        param_1[0x10b] = lVar26 * (ulong)(uVar15 - 1);
        iVar11 = *piVar36;
        uVar33 = (ulong)*piVar35;
        lVar26 = param_1[0x10a];
        if (*piVar35 < iVar11 + -1) goto LAB_006f2b18;
LAB_006f29b8:
        iVar37 = *piVar29;
        param_1[0x10a] = lVar26 + iVar37;
        param_1[0x109] = param_1[0x109] + (long)((iVar10 - iVar37) + -4);
        iVar10 = (int)uVar33 + 1;
        *piVar35 = iVar10;
      } while (*(char *)((long)param_1 + 0x11) != '\0');
      plVar18 = (long *)param_1[1];
      if (plVar18 != (long *)0x0) {
        if (*(long *)(*plVar18 + 0x18) != 0) {
          (*DAT_00b0da70)();
        }
        puVar17 = (undefined8 *)plVar18[0x14];
        if ((puVar17 != (undefined8 *)0x0) && ((short)plVar18[0x18] != 0)) {
          uVar7 = *(ushort *)((long)puVar17 + 0x14);
          goto joined_r0x006f356c;
        }
        lVar26 = *plVar18;
        *(undefined4 *)(lVar26 + 0x50) = 0x19;
        FUN_005ac5c0(lVar26,0x19);
      }
      puVar17 = &DAT_002c8608;
      uVar7 = DAT_002c861c;
joined_r0x006f356c:
      if ((((uVar7 ^ 0xffff) & 0x202) == 0) && (*(char *)((long)puVar17 + 0x16) == '\x01')) {
        lVar26 = puVar17[1];
      }
      else if ((uVar7 & 1) == 0) {
        lVar26 = FUN_005c17b0(puVar17,1);
      }
      else {
        lVar26 = 0;
      }
      if (plVar18 != (long *)0x0) {
        lVar25 = *plVar18;
        if ((*(int *)((long)plVar18 + 0x34) == 0) && (*(char *)(lVar25 + 0x67) == '\0')) {
          *(undefined4 *)((long)plVar18 + 0x34) = 0;
          lVar25 = *(long *)(lVar25 + 0x18);
        }
        else {
          uVar12 = FUN_005c1188(lVar25);
          *(undefined4 *)((long)plVar18 + 0x34) = uVar12;
          lVar25 = *(long *)(*plVar18 + 0x18);
        }
        if (lVar25 != 0) {
          (*DAT_00b0da80)();
        }
      }
      param_1[0x104] = lVar26;
      lVar26 = *plVar27;
      uVar12 = *(undefined4 *)(*(long *)(local_88 + 0x10) + uVar33 * 4);
      param_1[0x106] = (long)"overflow";
      lVar25 = param_1[(ulong)uVar16 * 8 + 6];
      *(undefined4 *)((long)param_1 + 0x81c) = uVar12;
      lVar26 = sqlite3_mprintf("%s%.3x+%.6x",lVar25,(int)lVar26,uVar33 & 0xffffffff);
      param_1[0x105] = lVar26;
      uVar16 = 7;
      if (lVar26 != 0) {
        uVar16 = 0;
      }
      return (ulong)uVar16;
    }
    iVar10 = (int)param_1[(ulong)uVar16 * 8 + 10];
    if (iVar10 != 0) {
      iVar37 = (int)*plVar27;
      iVar11 = *piVar34;
      if (iVar37 <= iVar11) {
LAB_006f2cf4:
        lVar26 = param_1[0x103];
        *(int *)(param_1 + 0x103) = (int)lVar26 + 1;
        if (0x1e < (int)lVar26) {
          FUN_006f39d4(param_1);
          sqlite3_log(0xb,"%s at line %d of [%.10s]","database corruption",0x3780b,
                      "2af157d77fb1304a74176eaee7fbc7c7e932d946bf25325e9c26c91db19e3079");
          return 0xb;
        }
        if (iVar37 != iVar11) {
          iVar10 = *(int *)(param_1[(ulong)uVar16 * 8 + 9] + (long)iVar37 * 0x20 + 4);
        }
        *(int *)(plVar18 + 8) = iVar10;
        uVar33 = FUN_006f3dc4(lVar25,iVar10,plVar18 + 8);
        lVar26 = param_1[0x107];
        cVar5 = *(char *)((long)param_1 + 0x11);
        *(int *)(plVar18 + 10) = 0;
        *(int *)(param_1 + 0x107) = (int)lVar26 + 1;
        if (cVar5 == '\0') {
          lVar26 = sqlite3_mprintf("%s%.3x/",param_1[(ulong)uVar16 * 8 + 6],(int)*plVar27);
          plVar18[0xb] = lVar26;
          uVar16 = 7;
          if (lVar26 != 0) {
            uVar16 = (uint)uVar33;
          }
          uVar33 = (ulong)uVar16;
        }
        *(int *)plVar27 = (int)*plVar27 + 1;
        if ((int)uVar33 != 0) {
          return uVar33;
        }
        goto LAB_006f2d88;
      }
    }
LAB_006f2c14:
    lVar32 = param_1[(ulong)uVar16 * 8 + 4];
    FUN_006f3c4c(plVar18);
    lVar26 = param_1[(ulong)uVar16 * 8 + 6];
    if (lVar26 != 0) {
      puVar17 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != 0) {
          (*DAT_00b0da70)();
        }
        iVar10 = (*DAT_00b0da28)(lVar26);
        DAT_00b105b8 = DAT_00b105b8 - iVar10;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(lVar26);
        if (DAT_00b103d8 == 0) goto LAB_006f2cb0;
        puVar17 = &DAT_00b0da80;
        lVar26 = DAT_00b103d8;
      }
      (*(code *)*puVar17)(lVar26);
    }
LAB_006f2cb0:
    cVar5 = *(char *)((long)param_1 + 0x11);
    plVar18[1] = 0;
    *plVar18 = 0;
    plVar18[3] = 0;
    plVar18[2] = 0;
    plVar18[5] = 0;
    plVar18[4] = 0;
    plVar18[7] = 0;
    plVar18[6] = 0;
    lVar26 = param_1[0x103];
    param_1[(ulong)uVar16 * 8 + 4] = lVar32;
    *(int *)(param_1 + 0x103) = (int)lVar26 + -1;
    if ((cVar5 != '\0') && ((int)lVar26 < 1)) {
      return 0;
    }
  }
  lVar26 = param_1[1];
  param_1[0x10c] = 0;
  *(undefined4 *)(param_1 + 0x107) = 0;
  *puStack_78 = 0;
  *local_80 = 0;
  local_80[1] = 0;
  iVar10 = sqlite3_step(lVar26);
  if ((iVar10 != 100) ||
     (uVar12 = sqlite3_column_int64(param_1[1],1), *(int *)(local_a0 + 0x20) == 0)) {
    plVar18 = (long *)param_1[1];
    *(undefined1 *)(param_1 + 2) = 1;
    if (plVar18 == (long *)0x0) {
      return 0;
    }
    lVar26 = *plVar18;
    if (*(long *)(lVar26 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if (0 < plVar18[0x17]) {
      FUN_0058f57c(lVar26,plVar18);
    }
    uVar33 = FUN_0058f640(plVar18);
    plVar18[7] = 0;
    *(undefined1 *)((long)plVar18 + 199) = 1;
    *(undefined2 *)((long)plVar18 + 0xc4) = 0xff02;
    *(undefined4 *)((long)plVar18 + 0x2c) = 1;
    plVar18[6] = 0xffffffff;
    *(undefined4 *)(plVar18 + 8) = 0;
    plVar18[10] = 0;
    if (((int)uVar33 != 0) || (*(char *)(lVar26 + 0x67) != '\0')) {
      uVar33 = FUN_005c1188(lVar26,uVar33 & 0xffffffff);
    }
    if (*(long *)(lVar26 + 0x18) == 0) {
      return uVar33;
    }
    (*DAT_00b0da80)(*(long *)(lVar26 + 0x18));
    return uVar33 & 0xffffffff;
  }
  uVar33 = FUN_006f3dc4(lVar25,uVar12,param_1 + 3);
  *(undefined4 *)(param_1 + 3) = uVar12;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(char *)((long)param_1 + 0x11) == '\0') {
    lVar26 = sqlite3_mprintf(&DAT_002a76c0);
    param_1[6] = lVar26;
    uVar16 = 7;
    if (lVar26 != 0) {
      uVar16 = (uint)uVar33;
    }
    uVar33 = (ulong)uVar16;
  }
  *(undefined4 *)(param_1 + 0x103) = 0;
  *(undefined4 *)(param_1 + 0x107) = 1;
  if ((int)uVar33 != 0) {
    return uVar33;
  }
LAB_006f2d88:
  iVar11 = (int)param_1[0x103];
  lVar26 = sqlite3_column_text(param_1[1],0);
  param_1[0x104] = lVar26;
  local_90 = param_1 + (long)iVar11 * 8 + 3;
  iVar10 = (int)*local_90;
  lVar32 = param_1[(long)iVar11 * 8 + 4];
  *(int *)((long)param_1 + 0x81c) = iVar10;
  lVar26 = 100;
  if (iVar10 != 1) {
    lVar26 = 0;
  }
  pbVar3 = (byte *)(lVar32 + lVar26);
  bVar14 = *pbVar3;
  pbVar30 = (byte *)(param_1 + (long)iVar11 * 8 + 7);
  *pbVar30 = bVar14;
  if (bVar14 < 10) {
    if ((bVar14 == 2) || (bVar14 == 5)) {
      uVar16 = 0xc;
      local_88 = CONCAT44(local_88._4_4_,1);
      goto LAB_006f2e18;
    }
  }
  else {
    uVar16 = 8;
    if (bVar14 == 10) {
      local_88 = (ulong)local_88._4_4_ << 0x20;
    }
    else {
      local_88 = (ulong)local_88._4_4_ << 0x20;
      if (bVar14 != 0xd) goto LAB_006f2ea8;
    }
LAB_006f2e18:
    uVar7 = *(ushort *)(pbVar3 + 3);
    local_b0 = (uint *)((long)param_1 + (long)iVar11 * 0x40 + 0x54);
    *local_b0 = 0;
    uVar15 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
    local_a4 = uVar16 + 100;
    if (iVar10 != 1) {
      local_a4 = uVar16;
    }
    local_98 = (uint *)((long)param_1 + (long)iVar11 * 0x40 + 0x3c);
    *local_98 = uVar15;
    lVar26 = *(long *)(lVar25 + 8);
    iVar37 = *(int *)(lVar26 + 0x34);
    iVar10 = ((uint)pbVar3[7] - (local_a4 + uVar15 * 2)) +
             ((uint)(*(ushort *)(pbVar3 + 5) >> 8) | (*(ushort *)(pbVar3 + 5) & 0xff00ff) << 8);
    uVar33 = (ulong)((uint)(*(ushort *)(pbVar3 + 1) >> 8) |
                    (*(ushort *)(pbVar3 + 1) & 0xff00ff) << 8);
    do {
      if (uVar33 == 0) {
        *(int *)(param_1 + (long)iVar11 * 8 + 8) = iVar10;
        if ((int)local_88 == 0) {
          *(undefined4 *)(param_1 + (long)iVar11 * 8 + 10) = 0;
        }
        else {
          uVar16 = (*(uint *)(pbVar3 + 8) & 0xff00ff00) >> 8 |
                   (*(uint *)(pbVar3 + 8) & 0xff00ff) << 8;
          *(uint *)(param_1 + (long)iVar11 * 8 + 10) = uVar16 >> 0x10 | uVar16 << 0x10;
        }
        if (uVar15 == 0) goto LAB_006f2eb4;
        if (*(char *)(lVar25 + 0x11) == '\0') {
          local_d0 = *(int *)(lVar26 + 0x38);
        }
        else {
          iVar10 = *(int *)(lVar25 + 0x14);
          *(int *)(lVar25 + 0x14) = iVar10 + 1;
          if (*(char *)(lVar25 + 0x12) == '\0') {
            FUN_005ac65c(lVar25);
            local_d0 = (*(int *)(*(long *)(lVar25 + 8) + 0x38) -
                       *(int *)(*(long *)(lVar25 + 8) + 0x34)) + iVar37;
            if (*(char *)(lVar25 + 0x11) == '\0') goto LAB_006f3190;
            iVar10 = *(int *)(lVar25 + 0x14) + -1;
            *(int *)(lVar25 + 0x14) = iVar10;
          }
          else {
            local_d0 = *(int *)(lVar26 + 0x38);
            *(int *)(lVar25 + 0x14) = iVar10;
          }
          if (iVar10 == 0) {
            FUN_005ac750(lVar25);
          }
        }
LAB_006f3190:
        uVar16 = *local_98;
        iVar10 = sqlite3_initialize();
        if (iVar10 != 0) {
          param_1[(long)iVar11 * 8 + 9] = 0;
          return 7;
        }
        __s = (void *)FUN_005827b0((long)(int)uVar16 * 0x20 + 0x20);
        puVar28 = local_98;
        local_c0 = param_1 + (long)iVar11 * 8 + 9;
        *local_c0 = (long)__s;
        if (__s == (void *)0x0) {
          return 7;
        }
        memset(__s,0,(long)(int)*local_98 * 0x20 + 0x20);
        if ((int)*puVar28 < 1) goto LAB_006f2eb4;
        lVar26 = 0;
        local_c8 = lVar32 + (ulong)local_a4;
        local_d8 = local_d0 * 0x20 + -0x180;
        iStack_d4 = (local_d0 + -0xc) * 0x20;
        local_e0 = local_d0 + -0x23;
        iStack_dc = ((local_d0 + -0xc) * 0x40) / 0xff + -0x17;
        local_cc = local_d0 - 4;
        iVar10 = local_d0 + -5;
        local_b8 = pbVar30;
        goto LAB_006f3264;
      }
      if (iVar37 <= (int)uVar33) break;
      uVar21 = uVar33 + 4;
      uVar7 = ((ushort *)(lVar32 + uVar33))[1];
      uVar6 = *(ushort *)(lVar32 + uVar33);
      uVar33 = (ulong)((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8);
      iVar10 = iVar10 + ((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
    } while ((uVar21 <= uVar33) || (uVar33 == 0));
  }
LAB_006f2ea8:
  *pbVar30 = 0;
  FUN_006f3c4c(local_90);
  goto LAB_006f2eb4;
LAB_006f2b38:
  iVar10 = (int)param_1[(ulong)uVar16 * 8 + 10];
  plVar18 = local_90;
  if (iVar10 != 0) {
    iVar37 = (int)*plVar27;
    iVar11 = *piVar34;
    if (iVar37 <= iVar11) goto LAB_006f2cf4;
    goto LAB_006f2c14;
  }
  iVar11 = *piVar34;
  iVar10 = (int)*plVar27 + 1;
  *(int *)plVar27 = iVar10;
  if (iVar11 <= iVar10) goto LAB_006f2c14;
  goto LAB_006f2994;
LAB_006f3264:
  do {
    uVar7 = *(ushort *)(local_c8 + lVar26 * 2);
    uVar16 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
    pbVar30 = local_b8;
    if (uVar16 < local_a4 || iVar37 <= (int)uVar16) goto LAB_006f2ea8;
    puVar28 = (uint *)(*local_c0 + lVar26 * 0x20);
    if ((int)local_88 != 0) {
      uVar33 = (ulong)uVar16;
      uVar16 = uVar16 + 4;
      uVar15 = (*(uint *)(lVar32 + uVar33) & 0xff00ff00) >> 8 |
               (*(uint *)(lVar32 + uVar33) & 0xff00ff) << 8;
      puVar28[1] = uVar15 >> 0x10 | uVar15 << 0x10;
    }
    bVar14 = *local_b8;
    if (bVar14 != 5) {
      pbVar3 = (byte *)(lVar32 + (ulong)uVar16);
      uVar15 = (uint)*pbVar3;
      if ((char)*pbVar3 < '\0') {
        bVar9 = pbVar3[1];
        if ((char)bVar9 < '\0') {
          if ((char)pbVar3[2] < '\0') {
            bVar9 = FUN_005b52c8(pbVar3,&local_70);
            uVar15 = (uint)local_70;
            if (local_70 >> 0x20 != 0) {
              uVar15 = 0xffffffff;
            }
            uVar16 = uVar16 + bVar9;
          }
          else {
            uVar15 = (uVar15 & 0x7f) << 0xe | (bVar9 & 0x7f) << 7 | (uint)pbVar3[2];
            uVar16 = uVar16 + 3;
          }
        }
        else {
          uVar15 = (uint)bVar9 | (uVar15 & 0x7f) << 7;
          uVar16 = uVar16 + 2;
        }
      }
      else {
        uVar16 = uVar16 + 1;
      }
      if (bVar14 == 0xd) {
        bVar9 = FUN_005b52c8(lVar32 + (ulong)uVar16,&local_70);
        uVar16 = uVar16 + bVar9;
      }
      if (*local_b0 < uVar15) {
        *local_b0 = uVar15;
      }
      piVar34 = &local_d8;
      if (bVar14 != 0xd) {
        piVar34 = &iStack_d4;
      }
      uVar8 = *piVar34 / 0xff - 0x17;
      iVar38 = 0;
      if (local_cc != 0) {
        iVar38 = (int)(uVar15 - uVar8) / (int)local_cc;
      }
      uVar2 = ((uVar15 - uVar8) - iVar38 * local_cc) + uVar8;
      piVar34 = &local_e0;
      if (bVar14 != 0xd) {
        piVar34 = &iStack_dc;
      }
      if ((int)uVar2 <= *piVar34) {
        uVar8 = uVar2;
      }
      pbVar30 = local_b8;
      if ((int)uVar8 < 0) goto LAB_006f2ea8;
      iVar38 = uVar15 - uVar8;
      *puVar28 = uVar8;
      if (uVar8 <= uVar15 && iVar38 != 0) {
        if (((int)uVar15 < 0) || (local_d0 < (int)((ulong)uVar8 + (ulong)uVar16) + 4))
        goto LAB_006f2ea8;
        uVar15 = 0;
        if (local_cc != 0) {
          uVar15 = (uint)(iVar10 + iVar38) / local_cc;
        }
        puVar28[2] = uVar15;
        puVar28[6] = iVar38 - (uVar15 - 1) * local_cc;
        iVar38 = sqlite3_initialize();
        if (iVar38 != 0) {
          puVar28[4] = 0;
          puVar28[5] = 0;
          return 7;
        }
        puVar13 = (uint *)FUN_005827b0(-(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 |
                                       (ulong)uVar15 << 2);
        puVar28 = puVar28 + 4;
        *(uint **)puVar28 = puVar13;
        if (puVar13 == (uint *)0x0) {
          return 7;
        }
        uVar16 = *(uint *)(lVar32 + (ulong)uVar8 + (ulong)uVar16);
        uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
        *puVar13 = uVar16 >> 0x10 | uVar16 << 0x10;
        if (1 < (int)uVar15) {
          lVar31 = 0;
          do {
            while( true ) {
              local_70 = 0;
              uVar33 = (**(code **)(**(long **)(lVar25 + 8) + 0x110))
                                 (**(long **)(lVar25 + 8),
                                  *(undefined4 *)(*(long *)puVar28 + lVar31 * 4),&local_70,0);
              if ((int)uVar33 != 0) {
                return uVar33;
              }
              uVar16 = (**(uint **)(local_70 + 8) & 0xff00ff00) >> 8 |
                       (**(uint **)(local_70 + 8) & 0xff00ff) << 8;
              *(uint *)(*(long *)puVar28 + lVar31 * 4 + 4) = uVar16 >> 0x10 | uVar16 << 0x10;
              if ((*(byte *)(local_70 + 0x34) >> 5 & 1) == 0) break;
              lVar20 = *(long *)(local_70 + 0x28);
              *(int *)(lVar20 + 0x98) = *(int *)(lVar20 + 0x98) + -1;
              *(undefined8 *)(local_70 + 0x20) = *(undefined8 *)(lVar20 + 0xa8);
              *(ulong *)(lVar20 + 0xa8) = local_70;
              (**(code **)(**(long **)(lVar20 + 0x48) + 0x90))
                        (*(long **)(lVar20 + 0x48),
                         *(long *)(lVar20 + 200) * (ulong)(*(int *)(local_70 + 0x30) - 1));
              lVar20 = lVar31 + 2;
              lVar31 = lVar31 + 1;
              if ((int)uVar15 <= lVar20) goto LAB_006f324c;
            }
            FUN_005ac2a8();
            lVar20 = lVar31 + 2;
            lVar31 = lVar31 + 1;
          } while (lVar20 < (int)uVar15);
        }
      }
    }
LAB_006f324c:
    lVar26 = lVar26 + 1;
    pbVar30 = local_b8;
  } while (lVar26 < (int)*local_98);
LAB_006f2eb4:
  uVar16 = *(uint *)((long)param_1 + 0x81c);
  local_70 = (ulong)uVar16;
  lVar32 = *(long *)(*(long *)(*(long *)(*param_1 + 0x18) + 0x20) +
                     (long)*(int *)(*param_1 + 0x20) * 0x20 + 8);
  plVar18 = *(long **)(lVar32 + 8);
  lVar26 = **(long **)(*plVar18 + 0x48);
  if (lVar26 == 0) {
LAB_006f2f08:
    lVar26 = param_1[0x10c] + (long)*(int *)((long)plVar18 + 0x34);
    param_1[0x10c] = lVar26;
    param_1[0x10b] = lVar26 * (ulong)(uVar16 - 1);
    bVar14 = *pbVar30;
    if (bVar14 < 10) goto LAB_006f2f30;
LAB_006f2f8c:
    if ((bVar14 == 0xd) || (bVar14 == 10)) {
      pcVar19 = "leaf";
      goto LAB_006f2fbc;
    }
  }
  else {
    iVar10 = (**(code **)(lVar26 + 0x50))(*(long **)(*plVar18 + 0x48),0x38428,&local_70);
    if (iVar10 != 0) {
      plVar18 = *(long **)(lVar32 + 8);
      uVar16 = *(uint *)((long)param_1 + 0x81c);
      goto LAB_006f2f08;
    }
    param_1[0x10b] = local_70;
    param_1[0x10c] = param_1[0x10c] + lStack_68;
    bVar14 = *pbVar30;
    if (9 < bVar14) goto LAB_006f2f8c;
LAB_006f2f30:
    if (bVar14 == 2) {
      pcVar19 = "internal";
      goto LAB_006f2fbc;
    }
    pcVar19 = "internal";
    if (bVar14 == 5) goto LAB_006f2fbc;
  }
  pcVar19 = "corrupted";
LAB_006f2fbc:
  puVar28 = (uint *)((long)param_1 + (long)iVar11 * 0x40 + 0x3c);
  uVar16 = *puVar28;
  lVar26 = param_1[(long)iVar11 * 8 + 8];
  iVar10 = *(int *)((long)param_1 + (long)iVar11 * 0x40 + 0x54);
  param_1[0x106] = (long)pcVar19;
  *(uint *)((long)param_1 + 0x83c) = *(int *)((long)param_1 + 0x83c) + uVar16;
  param_1[0x109] = param_1[0x109] + (long)(int)lVar26;
  if ((int)param_1[0x108] < iVar10) {
    *(int *)(param_1 + 0x108) = iVar10;
  }
  if (*(char *)((long)param_1 + 0x11) == '\0') {
    lVar26 = sqlite3_mprintf(&DAT_002ad0ce,param_1[(long)iVar11 * 8 + 6]);
    uVar16 = *puVar28;
    param_1[0x105] = lVar26;
    uVar15 = 7;
    if (lVar26 != 0) {
      uVar15 = 0;
    }
    uVar33 = (ulong)uVar15;
  }
  else {
    uVar33 = 0;
  }
  if ((int)uVar16 < 1) {
    iVar10 = 0;
  }
  else {
    uVar21 = (ulong)uVar16;
    if (uVar16 < 9) {
      lVar32 = 0;
      iVar10 = 0;
    }
    else {
      iVar10 = 0;
      iVar37 = 0;
      iVar38 = 0;
      iVar39 = 0;
      iVar40 = 0;
      iVar41 = 0;
      iVar42 = 0;
      iVar43 = 0;
      uVar4 = 8;
      if ((uVar16 & 7) != 0) {
        uVar4 = uVar21 & 7;
      }
      piVar34 = (int *)(param_1[(long)iVar11 * 8 + 9] + 0x80);
      lVar32 = uVar21 - uVar4;
      lVar26 = lVar32;
      do {
        piVar29 = piVar34 + -0x20;
        iVar44 = *piVar34;
        piVar24 = piVar34 + -0x18;
        piVar35 = piVar34 + 8;
        lVar26 = lVar26 + -8;
        piVar22 = piVar34 + -0x10;
        piVar36 = piVar34 + 0x10;
        piVar1 = piVar34 + 0x18;
        piVar23 = piVar34 + -8;
        piVar34 = piVar34 + 0x40;
        iVar40 = iVar44 + iVar40;
        iVar41 = *piVar35 + iVar41;
        iVar42 = *piVar36 + iVar42;
        iVar43 = *piVar1 + iVar43;
        iVar10 = *piVar29 + iVar10;
        iVar37 = *piVar24 + iVar37;
        iVar38 = *piVar22 + iVar38;
        iVar39 = *piVar23 + iVar39;
      } while (lVar26 != 0);
      iVar10 = iVar40 + iVar10 + iVar41 + iVar37 + iVar42 + iVar38 + iVar43 + iVar39;
    }
    lVar26 = uVar21 - lVar32;
    piVar34 = (int *)(param_1[(long)iVar11 * 8 + 9] + lVar32 * 0x20);
    do {
      lVar26 = lVar26 + -1;
      iVar10 = *piVar34 + iVar10;
      piVar34 = piVar34 + 8;
    } while (lVar26 != 0);
  }
  param_1[0x10a] = param_1[0x10a] + (long)iVar10;
  if (*(char *)((long)param_1 + 0x11) == '\0') {
    return uVar33;
  }
  goto LAB_006f294c;
}


// ===== 006f3760  FUN_006f3760 =====

undefined1 FUN_006f3760(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}


// ===== 006f3768  FUN_006f3768 =====

undefined8 FUN_006f3768(long param_1,long *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  
  if (param_3 < 5) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        if (param_2 == (long *)0x0) {
          return 0;
        }
        uVar5 = *(undefined8 *)(param_1 + 0x820);
LAB_006f3858:
        FUN_0059031c(param_2,uVar5,0xffffffff,1,0xffffffffffffffff);
        return 0;
      }
      if (param_3 == 1) {
        if (param_2 == (long *)0x0) {
          return 0;
        }
        if (*(char *)(param_1 + 0x11) != '\0') {
          return 0;
        }
        uVar5 = *(undefined8 *)(param_1 + 0x828);
        goto LAB_006f3858;
      }
    }
    else {
      if (param_3 == 2) {
        if (*(char *)(param_1 + 0x11) == '\0') {
          if (param_2 == (long *)0x0) {
            return 0;
          }
          puVar4 = (ulong *)*param_2;
          uVar3 = (ulong)*(uint *)(param_1 + 0x81c);
          uVar1 = *(ushort *)((long)puVar4 + 0x14);
        }
        else {
          if (param_2 == (long *)0x0) {
            return 0;
          }
          puVar4 = (ulong *)*param_2;
          uVar3 = (ulong)*(int *)(param_1 + 0x838);
          uVar1 = *(ushort *)((long)puVar4 + 0x14);
        }
        goto joined_r0x006f3910;
      }
      if (param_3 == 3) {
        if (param_2 == (long *)0x0) {
          return 0;
        }
        if (*(char *)(param_1 + 0x11) != '\0') {
          return 0;
        }
        uVar5 = *(undefined8 *)(param_1 + 0x830);
LAB_006f388c:
        FUN_0059031c(param_2,uVar5,0xffffffff,1,0);
        return 0;
      }
      if (param_3 == 4) {
        if (param_2 == (long *)0x0) {
          return 0;
        }
        puVar4 = (ulong *)*param_2;
        iVar2 = *(int *)(param_1 + 0x83c);
        uVar1 = *(ushort *)((long)puVar4 + 0x14);
        goto joined_r0x006f37f0;
      }
    }
  }
  else if (param_3 < 8) {
    if (param_3 == 5) {
      if (param_2 == (long *)0x0) {
        return 0;
      }
      puVar4 = (ulong *)*param_2;
      uVar3 = *(ulong *)(param_1 + 0x850);
      uVar1 = *(ushort *)((long)puVar4 + 0x14);
      goto joined_r0x006f3910;
    }
    if (param_3 == 6) {
      if (param_2 == (long *)0x0) {
        return 0;
      }
      puVar4 = (ulong *)*param_2;
      uVar3 = *(ulong *)(param_1 + 0x848);
      uVar1 = *(ushort *)((long)puVar4 + 0x14);
      goto joined_r0x006f3910;
    }
    if (param_3 == 7) {
      if (param_2 == (long *)0x0) {
        return 0;
      }
      puVar4 = (ulong *)*param_2;
      iVar2 = *(int *)(param_1 + 0x840);
      uVar1 = *(ushort *)((long)puVar4 + 0x14);
joined_r0x006f37f0:
      uVar3 = (ulong)iVar2;
      goto joined_r0x006f3910;
    }
  }
  else {
    if (param_3 == 8) {
      if (*(char *)(param_1 + 0x11) != '\0') {
        return 0;
      }
      if (param_2 == (long *)0x0) {
        return 0;
      }
      puVar4 = (ulong *)*param_2;
      uVar3 = *(ulong *)(param_1 + 0x858);
      uVar1 = *(ushort *)((long)puVar4 + 0x14);
      goto joined_r0x006f3910;
    }
    if (param_3 == 9) {
      if (param_2 == (long *)0x0) {
        return 0;
      }
      puVar4 = (ulong *)*param_2;
      uVar3 = *(ulong *)(param_1 + 0x860);
      uVar1 = *(ushort *)((long)puVar4 + 0x14);
      goto joined_r0x006f3910;
    }
    if (param_3 == 10) {
      if (param_2 == (long *)0x0) {
        return 0;
      }
      uVar5 = *(undefined8 *)
               (*(long *)(*(long *)(*param_2 + 0x18) + 0x20) + (long)*(int *)(param_1 + 0x14) * 0x20
               );
      goto LAB_006f388c;
    }
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  puVar4 = (ulong *)*param_2;
  uVar3 = (ulong)*(byte *)(param_1 + 0x11);
  uVar1 = *(ushort *)((long)puVar4 + 0x14);
joined_r0x006f3910:
  if ((uVar1 & 0x9000) != 0) {
    FUN_005c2a94(puVar4);
    return 0;
  }
  *puVar4 = uVar3;
  *(undefined2 *)((long)puVar4 + 0x14) = 4;
  return 0;
}


// ===== 006f39c4  FUN_006f39c4 =====

undefined8 FUN_006f39c4(long param_1,ulong *param_2)

{
  *param_2 = (ulong)*(uint *)(param_1 + 0x81c);
  return 0;
}


// ===== 006f39d4  FUN_006f39d4 =====

void FUN_006f39d4(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = 0;
  do {
    lVar1 = param_1 + lVar7;
    lVar4 = *(long *)(lVar1 + 0x20);
    FUN_006f3c4c(lVar1 + 0x18);
    lVar5 = *(long *)(lVar1 + 0x30);
    if (lVar5 != 0) {
      puVar3 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != 0) {
          (*DAT_00b0da70)();
        }
        iVar2 = (*DAT_00b0da28)(lVar5);
        DAT_00b105b8 = DAT_00b105b8 - iVar2;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(lVar5);
        if (DAT_00b103d8 == 0) goto LAB_006f3ab4;
        puVar3 = &DAT_00b0da80;
        lVar5 = DAT_00b103d8;
      }
      (*(code *)*puVar3)(lVar5);
    }
LAB_006f3ab4:
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(long *)(lVar1 + 0x20) = lVar4;
    if (lVar4 != 0) {
      puVar3 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != 0) {
          (*DAT_00b0da70)();
        }
        iVar2 = (*DAT_00b0da28)(lVar4);
        DAT_00b105b8 = DAT_00b105b8 - iVar2;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(lVar4);
        if (DAT_00b103d8 == 0) goto LAB_006f3a28;
        puVar3 = &DAT_00b0da80;
        lVar4 = DAT_00b103d8;
      }
      (*(code *)*puVar3)(lVar4);
    }
LAB_006f3a28:
    lVar7 = lVar7 + 0x40;
    *(undefined8 *)(lVar1 + 0x20) = 0;
  } while (lVar7 != 0x800);
  plVar6 = *(long **)(param_1 + 8);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    if (*(long *)(lVar7 + 0x18) != 0) {
      (*DAT_00b0da70)();
    }
    if (0 < plVar6[0x17]) {
      FUN_0058f57c(lVar7,plVar6);
    }
    iVar2 = FUN_0058f640(plVar6);
    plVar6[7] = 0;
    *(undefined1 *)((long)plVar6 + 199) = 1;
    *(undefined2 *)((long)plVar6 + 0xc4) = 0xff02;
    *(undefined4 *)((long)plVar6 + 0x2c) = 1;
    plVar6[6] = 0xffffffff;
    *(undefined4 *)(plVar6 + 8) = 0;
    plVar6[10] = 0;
    if ((iVar2 != 0) || (*(char *)(lVar7 + 0x67) != '\0')) {
      FUN_005c1188(lVar7,iVar2);
    }
    if (*(long *)(lVar7 + 0x18) != 0) {
      (*DAT_00b0da80)();
    }
  }
  lVar7 = *(long *)(param_1 + 0x828);
  *(undefined4 *)(param_1 + 0x818) = 0;
  if (lVar7 != 0) {
    puVar3 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != 0) {
        (*DAT_00b0da70)();
      }
      iVar2 = (*DAT_00b0da28)(lVar7);
      DAT_00b105b8 = DAT_00b105b8 - iVar2;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(lVar7);
      if (DAT_00b103d8 == 0) goto LAB_006f3c28;
      puVar3 = &DAT_00b0da80;
      lVar7 = DAT_00b103d8;
    }
    (*(code *)*puVar3)(lVar7);
  }
LAB_006f3c28:
  *(undefined8 *)(param_1 + 0x828) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}


// ===== 006f3c4c  FUN_006f3c4c =====

void FUN_006f3c4c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    if (0 < *(int *)(param_1 + 0x24)) {
      lVar3 = 0;
      lVar5 = 0x10;
      do {
        lVar4 = *(long *)(*(long *)(param_1 + 0x30) + lVar5);
        if (lVar4 != 0) {
          puVar2 = &DAT_00b0da18;
          if (DAT_00b0d9f0 != 0) {
            if (DAT_00b103d8 != 0) {
              (*DAT_00b0da70)();
            }
            iVar1 = (*DAT_00b0da28)(lVar4);
            DAT_00b105b8 = DAT_00b105b8 - iVar1;
            DAT_00b10600 = DAT_00b10600 + -1;
            (*DAT_00b0da18)(lVar4);
            if (DAT_00b103d8 == 0) goto LAB_006f3cb8;
            puVar2 = &DAT_00b0da80;
            lVar4 = DAT_00b103d8;
          }
          (*(code *)*puVar2)(lVar4);
        }
LAB_006f3cb8:
        lVar3 = lVar3 + 1;
        lVar5 = lVar5 + 0x20;
      } while (lVar3 < *(int *)(param_1 + 0x24));
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) goto LAB_006f3da0;
    }
    puVar2 = &DAT_00b0da18;
    if (DAT_00b0d9f0 != 0) {
      if (DAT_00b103d8 != 0) {
        (*DAT_00b0da70)();
      }
      iVar1 = (*DAT_00b0da28)(lVar3);
      DAT_00b105b8 = DAT_00b105b8 - iVar1;
      DAT_00b10600 = DAT_00b10600 + -1;
      (*DAT_00b0da18)(lVar3);
      if (DAT_00b103d8 == 0) goto LAB_006f3da0;
      puVar2 = &DAT_00b0da80;
      lVar3 = DAT_00b103d8;
    }
    (*(code *)*puVar2)(lVar3);
  }
LAB_006f3da0:
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}


// ===== 006f3dc4  FUN_006f3dc4 =====

long FUN_006f3dc4(long param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long local_38;
  
  local_38 = 0;
  iVar2 = *(int *)((long)*(long **)(param_1 + 8) + 0x34);
  if (*(long *)(param_3 + 8) == 0) {
    iVar3 = sqlite3_initialize();
    if ((iVar2 + 0xff < 0 != SCARRY4(iVar2,0xff)) || (iVar3 != 0)) {
      *(undefined8 *)(param_3 + 8) = 0;
      return 7;
    }
    lVar4 = FUN_005827b0(iVar2 + 0x100);
    *(long *)(param_3 + 8) = lVar4;
    if (lVar4 == 0) {
      return 7;
    }
    puVar1 = (undefined8 *)(lVar4 + iVar2);
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
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x1e] = 0;
    lVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x110))
                      (**(long **)(param_1 + 8),param_2 & 0xffffffff,&local_38,0);
    iVar3 = (int)lVar5;
    lVar4 = local_38;
  }
  else {
    lVar4 = **(long **)(param_1 + 8);
    lVar5 = (**(code **)(lVar4 + 0x110))(lVar4,param_2,&local_38,0);
    iVar3 = (int)lVar5;
    lVar4 = local_38;
  }
  local_38 = lVar5;
  if ((iVar3 == 0) &&
     (local_38 = lVar4, memcpy(*(void **)(param_3 + 8),*(void **)(lVar4 + 8),(long)iVar2),
     local_38 != 0)) {
    if ((*(ushort *)(local_38 + 0x34) >> 5 & 1) != 0) {
      lVar4 = *(long *)(local_38 + 0x28);
      iVar2 = *(int *)(local_38 + 0x30);
      uVar6 = *(undefined8 *)(local_38 + 8);
      lVar5 = *(long *)(lVar4 + 200);
      plVar7 = *(long **)(lVar4 + 0x48);
      lVar10 = *plVar7;
      uVar9 = *(undefined8 *)(lVar4 + 0xa8);
      *(int *)(lVar4 + 0x98) = *(int *)(lVar4 + 0x98) + -1;
      pcVar8 = *(code **)(lVar10 + 0x90);
      *(long *)(lVar4 + 0xa8) = local_38;
      *(undefined8 *)(local_38 + 0x20) = uVar9;
      (*pcVar8)(plVar7,lVar5 * (ulong)(iVar2 - 1),uVar6);
      return 0;
    }
    FUN_005ac2a8();
    return 0;
  }
  return local_38;
}


// ===== 006f3f5c  FUN_006f3f5c =====

undefined8 FUN_006f3f5c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *in_x4;
  
  uVar1 = sqlite3_declare_vtab
                    (param_1,
                     "CREATE TABLE x(key,value,type,atom,id,parent,fullkey,path,json HIDDEN,root HIDDEN)"
                    );
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (param_1 == 0) {
    puVar2 = (undefined8 *)FUN_005827b0(0x20);
  }
  else {
    puVar2 = (undefined8 *)FUN_005a76c8(param_1,0x20);
  }
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *in_x4 = puVar2;
    sqlite3_vtab_config(param_1,2);
    puVar2[3] = param_1;
    return 0;
  }
  *in_x4 = 0;
  return 7;
}


// ===== 006f3ff0  FUN_006f3ff0 =====

undefined8 FUN_006f3ff0(undefined8 param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  ulong local_8;
  
  iVar5 = *param_2;
  local_8 = 0xffffffffffffffff;
  if (iVar5 < 1) {
    uVar4 = 0;
    uVar7 = 0xffffffff;
    iVar5 = param_2[4];
  }
  else {
    iVar8 = 0;
    uVar7 = 0;
    uVar4 = 0;
    pcVar9 = (char *)(*(long *)(param_2 + 2) + 5);
    do {
      uVar3 = *(int *)(pcVar9 + -5) - 8;
      if (7 < *(int *)(pcVar9 + -5)) {
        uVar2 = 1 << (ulong)(uVar3 & 0x1f);
        if (*pcVar9 == '\0') {
          uVar4 = uVar2 | uVar4;
        }
        else if (pcVar9[-1] == '\x02') {
          uVar7 = uVar2 | uVar7;
          *(int *)((long)&local_8 + (ulong)uVar3 * 4) = iVar8;
        }
      }
      iVar8 = iVar8 + 1;
      pcVar9 = pcVar9 + 0xc;
    } while (iVar5 != iVar8);
    uVar7 = ~uVar7;
    iVar5 = param_2[4];
  }
  if (((0 < iVar5) && (**(int **)(param_2 + 6) < 0)) && ((char)(*(int **)(param_2 + 6))[1] == '\0'))
  {
    param_2[0xf] = 1;
  }
  if ((uVar4 & uVar7) != 0) {
    return 0x13;
  }
  if (-1 < (int)local_8) {
    lVar6 = *(long *)(param_2 + 8);
    param_2[0x10] = 0;
    param_2[0x11] = 0x3ff00000;
    puVar1 = (undefined4 *)(lVar6 + (local_8 & 0xffffffff) * 8);
    iVar5 = 1;
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 1;
    if (-1 < (long)local_8) {
      puVar1 = (undefined4 *)(lVar6 + (local_8 >> 0x20) * 8);
      *(undefined1 *)(puVar1 + 1) = 1;
      iVar5 = 3;
      *puVar1 = 2;
    }
    param_2[10] = iVar5;
    return 0;
  }
  param_2[10] = 0;
  return 0;
}


// ===== 006f412c  FUN_006f412c =====

undefined8 FUN_006f412c(long param_1)

{
  FUN_005869c8(*(undefined8 *)(param_1 + 0x18),param_1);
  return 0;
}


// ===== 006f414c  FUN_006f414c =====

undefined8 FUN_006f414c(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    puVar2 = (undefined8 *)FUN_005827b0(0x108);
  }
  else {
    if (0x107 < *(ushort *)(lVar3 + 0x19c)) {
      puVar2 = *(undefined8 **)(lVar3 + 0x1c0);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)(lVar3 + 0x1b8);
        if (puVar2 == (undefined8 *)0x0) {
          *(int *)(lVar3 + 0x1b0) = *(int *)(lVar3 + 0x1b0) + 1;
          puVar2 = (undefined8 *)FUN_005a7a28(lVar3,0x108);
          goto joined_r0x006f426c;
        }
        puVar4 = (undefined8 *)(lVar3 + 0x1b8);
      }
      else {
        puVar4 = (undefined8 *)(lVar3 + 0x1c0);
      }
      iVar1 = *(int *)(lVar3 + 0x1a8);
      *puVar4 = *puVar2;
      *(int *)(lVar3 + 0x1a8) = iVar1 + 1;
      goto LAB_006f41f8;
    }
    if (*(int *)(lVar3 + 0x198) == 0) {
      *(int *)(lVar3 + 0x1ac) = *(int *)(lVar3 + 0x1ac) + 1;
    }
    else if (*(char *)(lVar3 + 0x67) != '\0') {
      return 7;
    }
    puVar2 = (undefined8 *)FUN_005a7a28(lVar3,0x108);
  }
joined_r0x006f426c:
  if (puVar2 == (undefined8 *)0x0) {
    return 7;
  }
LAB_006f41f8:
  puVar2[0x20] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  puVar2[0x19] = 0;
  puVar2[0x18] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x1e] = 0;
  puVar2[6] = *(undefined8 *)(param_1 + 0x18);
  puVar2[8] = (long)puVar2 + 0x5a;
  puVar2[9] = 100;
  *(undefined1 *)(puVar2 + 0xb) = 1;
  *param_2 = puVar2;
  return 0;
}


// ===== 006f4274  FUN_006f4274 =====

undefined8 FUN_006f4274(long param_1)

{
  FUN_006f5008();
  FUN_005869c8(*(undefined8 *)(param_1 + 0x30),param_1);
  return 0;
}


// ===== 006f42a4  FUN_006f42a4 =====

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_006f42a4(long *param_1,int param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  size_t sVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  int *piVar11;
  long *plVar12;
  char *__s;
  ulong __n;
  int local_24;
  
  FUN_006f5008();
  if (param_2 == 0) {
    return 0;
  }
  plVar12 = param_1 + 0x18;
  param_1[0x19] = 0;
  *plVar12 = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = param_1[6];
  lVar6 = *param_5;
  *(undefined4 *)((long)param_1 + 0xe4) = 1;
  iVar3 = FUN_0067c008(lVar6,plVar12);
  if (iVar3 == 0) {
    lVar6 = *param_5;
    if (lVar6 == 0) {
LAB_006f44b0:
      lVar6 = 0;
      param_1[0x1a] = 0;
      piVar11 = (int *)*param_5;
      uVar2 = *(ushort *)(piVar11 + 5);
      uVar5 = (uint)uVar2;
      if ((uVar2 >> 1 & 1) != 0) goto LAB_006f44c4;
LAB_006f44f8:
      if ((uVar5 >> 4 & 1) == 0) {
        if ((uVar5 & 1) == 0) {
          uVar4 = FUN_005c1788(piVar11,1);
          lVar6 = param_1[0x1a];
          *(undefined4 *)(param_1 + 0x1c) = uVar4;
        }
        else {
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
      }
      else {
        iVar3 = piVar11[4];
        if ((uVar5 >> 10 & 1) != 0) {
          iVar3 = *piVar11 + iVar3;
        }
        *(int *)(param_1 + 0x1c) = iVar3;
      }
    }
    else {
      if ((((*(ushort *)(lVar6 + 0x14) ^ 0xffff) & 0x202) == 0) &&
         (*(char *)(lVar6 + 0x16) == '\x01')) {
        lVar6 = *(long *)(lVar6 + 8);
        param_1[0x1a] = lVar6;
        piVar11 = (int *)*param_5;
        uVar2 = *(ushort *)(piVar11 + 5);
      }
      else {
        if ((*(ushort *)(lVar6 + 0x14) & 1) != 0) goto LAB_006f44b0;
        lVar6 = FUN_005c17b0(lVar6,1);
        param_1[0x1a] = lVar6;
        piVar11 = (int *)*param_5;
        uVar2 = *(ushort *)(piVar11 + 5);
      }
      uVar5 = (uint)uVar2;
      if ((uVar2 >> 1 & 1) == 0) goto LAB_006f44f8;
LAB_006f44c4:
      uVar5 = (uint)uVar2;
      if (*(char *)((long)piVar11 + 0x16) != '\x01') goto LAB_006f44f8;
      *(int *)(param_1 + 0x1c) = piVar11[4];
    }
    if (lVar6 == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      return 0;
    }
    iVar3 = FUN_0067c22c(plVar12,0);
    if (iVar3 != 0) {
      if (*(char *)((long)param_1 + 0xef) != '\0') {
        return 7;
      }
      lVar6 = *(long *)(*param_1 + 0x10);
      if (lVar6 != 0) {
        puVar7 = &DAT_00b0da18;
        if (DAT_00b0d9f0 != 0) {
          if (DAT_00b103d8 != 0) {
            (*DAT_00b0da70)();
          }
          iVar3 = (*DAT_00b0da28)(lVar6);
          DAT_00b105b8 = DAT_00b105b8 - iVar3;
          DAT_00b10600 = DAT_00b10600 + -1;
          (*DAT_00b0da18)(lVar6);
          if (DAT_00b103d8 == 0) goto LAB_006f4698;
          puVar7 = &DAT_00b0da80;
          lVar6 = DAT_00b103d8;
        }
        (*(code *)*puVar7)(lVar6);
      }
LAB_006f4698:
      uVar9 = sqlite3_mprintf("malformed JSON");
      goto LAB_006f47a4;
    }
  }
  if (param_2 == 3) {
    lVar6 = param_5[1];
    if (lVar6 == 0) {
      return 0;
    }
    if ((((*(ushort *)(lVar6 + 0x14) ^ 0xffff) & 0x202) == 0) && (*(char *)(lVar6 + 0x16) == '\x01')
       ) {
      __s = *(char **)(lVar6 + 8);
    }
    else {
      if ((*(ushort *)(lVar6 + 0x14) & 1) != 0) {
        return 0;
      }
      __s = (char *)FUN_005c17b0(lVar6,1);
    }
    if (__s == (char *)0x0) {
      return 0;
    }
    if (*__s != '$') {
      lVar6 = *(long *)(*param_1 + 0x10);
      if (lVar6 != 0) {
        puVar7 = &DAT_00b0da18;
        if (DAT_00b0d9f0 != 0) {
          if (DAT_00b103d8 != 0) {
            (*DAT_00b0da70)();
          }
          iVar3 = (*DAT_00b0da28)(lVar6);
          DAT_00b105b8 = DAT_00b105b8 - iVar3;
          DAT_00b10600 = DAT_00b10600 + -1;
          (*DAT_00b0da18)(lVar6);
          if (DAT_00b103d8 == 0) goto LAB_006f4794;
          puVar7 = &DAT_00b0da80;
          lVar6 = DAT_00b103d8;
        }
        (*(code *)*puVar7)(lVar6);
      }
LAB_006f4794:
      uVar9 = sqlite3_mprintf("bad JSON path: %Q",__s);
LAB_006f47a4:
      *(undefined8 *)(*param_1 + 0x10) = uVar9;
      FUN_006f5008(param_1);
      uVar4 = 7;
      if (*(long *)(*param_1 + 0x10) != 0) {
        uVar4 = 1;
      }
      return uVar4;
    }
    sVar8 = strlen(__s);
    *(uint *)((long)param_1 + 0x14) = (uint)sVar8 & 0x3fffffff;
    if (__s[1] == '\0') {
      uVar5 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *(undefined1 *)(param_1 + 3) = 0;
    }
    else {
      uVar5 = FUN_0067b398(plVar12,0,__s + 1,0);
      if (0xfffffffc < uVar5) {
        if (uVar5 == 0xfffffffe) {
          *(undefined8 *)((long)param_1 + 0xc) = 0;
          *(undefined1 *)(param_1 + 3) = 0;
          return 0;
        }
        sqlite3_free(*(undefined8 *)(*param_1 + 0x10));
        goto LAB_006f4794;
      }
      if (*(int *)((long)param_1 + 0xfc) == 0) {
        uVar10 = 0xb;
        *(uint *)((long)param_1 + 0xc) = uVar5;
      }
      else {
        *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xfc);
        uVar10 = 0xc;
      }
      *(undefined1 *)(param_1 + 3) = uVar10;
    }
    uVar1 = *(uint *)((long)param_1 + 0x14);
    __n = (ulong)uVar1;
    if (uVar1 == 0) goto LAB_006f43d4;
    if ((ulong)param_1[9] <= param_1[10] + __n) {
      FUN_006813e0(param_1 + 7,__s,uVar1);
      goto LAB_006f43d4;
    }
    memcpy((void *)(param_1[8] + param_1[10]),__s,__n);
    lVar6 = param_1[10] + __n;
  }
  else {
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 1;
    if ((ulong)param_1[9] <= param_1[10] + 1U) {
      FUN_006813e0(param_1 + 7,&DAT_002ad3f1,1);
      uVar5 = 0;
      goto LAB_006f43d4;
    }
    uVar5 = 0;
    *(undefined1 *)(param_1[8] + param_1[10]) = 0x24;
    lVar6 = param_1[10] + 1;
  }
  param_1[10] = lVar6;
LAB_006f43d4:
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  iVar3 = FUN_0067c7c0(plVar12,uVar5,&local_24);
  *(uint *)(param_1 + 2) = iVar3 + uVar5 + local_24;
  if ((*(byte *)(param_1[0x18] + (ulong)uVar5) & 0xf) < 0xb) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0x19) != '\0') {
    return 0;
  }
  *(uint *)((long)param_1 + 0xc) = iVar3 + uVar5;
  *(byte *)(param_1 + 3) = *(byte *)(param_1[0x18] + (ulong)uVar5) & 0xf;
  if (param_1[6] == 0) {
    puVar7 = (undefined8 *)FUN_005827b0(0x18);
  }
  else {
    puVar7 = (undefined8 *)FUN_005a76c8(param_1[6],0x18);
  }
  if (puVar7 == (undefined8 *)0x0) {
    param_1[5] = 0;
    return 7;
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  uVar4 = *(undefined4 *)((long)param_1 + 0xc);
  lVar6 = param_1[2];
  param_1[5] = (long)puVar7;
  puVar7[2] = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x100000001;
  *(uint *)((long)puVar7 + 4) = uVar5;
  *(int *)(puVar7 + 1) = (int)lVar6;
  *(undefined4 *)puVar7 = uVar4;
  return 0;
}


// ===== 006f4834  FUN_006f4834 =====

undefined4 FUN_006f4834(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  uint *puVar11;
  long *plVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  int local_58;
  int local_54;
  
  if (*(char *)(param_1 + 0x19) == '\0') {
    cVar15 = *(char *)(param_1 + 0x18);
    local_58 = 0;
    if (cVar15 == '\f') {
      iVar4 = *(int *)(param_1 + 0xc);
      local_54 = 0;
      iVar3 = FUN_0067c7c0(param_1 + 0xc0,iVar4,&local_54);
      iVar3 = iVar3 + iVar4 + local_54;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xc);
    }
    iVar4 = FUN_0067c7c0(param_1 + 0xc0,iVar3,&local_58);
    uVar10 = 0;
    *(int *)(param_1 + 0xc) = iVar4 + iVar3 + local_58;
    goto joined_r0x006f4968;
  }
  cVar15 = *(char *)(param_1 + 0x18);
  local_58 = 0;
  if (cVar15 == '\f') {
    uVar14 = *(uint *)(param_1 + 0xc);
    local_54 = 0;
    iVar3 = FUN_0067c7c0(param_1 + 0xc0,uVar14,&local_54);
    uVar13 = iVar3 + uVar14 + local_54;
  }
  else {
    uVar13 = *(uint *)(param_1 + 0xc);
    uVar14 = uVar13;
  }
  plVar12 = (long *)(param_1 + 0xc0);
  bVar7 = *(byte *)(*plVar12 + (ulong)uVar13);
  iVar3 = FUN_0067c7c0(plVar12,uVar13,&local_58);
  uVar1 = (bVar7 & 0xf) - 0xd;
  if (uVar1 < 0xfffffffe) {
    uVar14 = *(uint *)(param_1 + 0x1c);
    uVar10 = 0;
    uVar13 = iVar3 + uVar13 + local_58;
    *(uint *)(param_1 + 0xc) = uVar13;
    if (uVar14 != 0) {
LAB_006f4a60:
      uVar2 = uVar14 - 1;
      lVar9 = *(long *)(param_1 + 0x28);
      if (*(uint *)(lVar9 + (ulong)uVar2 * 0x18 + 8) <= uVar13) {
        *(uint *)(param_1 + 0x1c) = uVar2;
        *(ulong *)(param_1 + 0x50) = (ulong)*(uint *)(lVar9 + (ulong)uVar2 * 0x18 + 0xc);
        for (uVar14 = uVar2; uVar14 != 0; uVar14 = uVar14 - 1) {
          uVar1 = uVar14 - 1;
          if (uVar13 < *(uint *)(lVar9 + (ulong)uVar1 * 0x18 + 8)) goto LAB_006f4ae0;
          *(uint *)(param_1 + 0x1c) = uVar1;
          *(ulong *)(param_1 + 0x50) = (ulong)*(uint *)(lVar9 + (ulong)uVar1 * 0x18 + 0xc);
        }
        goto LAB_006f4ad4;
      }
      if (uVar1 < 0xfffffffe) goto LAB_006f4b00;
LAB_006f4ae0:
      bVar7 = *(byte *)(*plVar12 + (ulong)*(uint *)(lVar9 + (ulong)(uVar14 - 1) * 0x18 + 4)) & 0xf;
      goto LAB_006f4afc;
    }
  }
  else {
    uVar8 = (ulong)*(uint *)(param_1 + 0x1c);
    if (*(uint *)(param_1 + 0x1c) < *(uint *)(param_1 + 0x20)) {
      uVar5 = *(ulong *)(param_1 + 0x28);
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x28);
      lVar9 = *(long *)(param_1 + 0x30);
      uVar2 = *(uint *)(param_1 + 0x20) * 2 + 3;
      uVar6 = (ulong)uVar2 * 0x18;
      if (uVar5 == 0) {
        uVar5 = FUN_005a76c8(lVar9,uVar6);
joined_r0x006f49c8:
        if (uVar5 == 0) {
          return 7;
        }
        uVar8 = (ulong)*(uint *)(param_1 + 0x1c);
        uVar14 = *(uint *)(param_1 + 0xc);
        cVar15 = *(char *)(param_1 + 0x18);
      }
      else {
        if (*(ulong *)(lVar9 + 0x1e8) <= uVar5) {
LAB_006f49dc:
          uVar5 = FUN_005a77a4();
          goto joined_r0x006f49c8;
        }
        if (uVar5 < *(ulong *)(lVar9 + 0x1d8)) {
          if ((uVar5 < *(ulong *)(lVar9 + 0x1e0)) ||
             (*(ushort *)(lVar9 + 0x19e) <= uVar6 && uVar6 - *(ushort *)(lVar9 + 0x19e) != 0))
          goto LAB_006f49dc;
        }
        else if (5 < uVar2) goto LAB_006f49dc;
      }
      *(uint *)(param_1 + 0x20) = uVar2;
      *(ulong *)(param_1 + 0x28) = uVar5;
    }
    uVar10 = 0;
    puVar11 = (uint *)(uVar5 + uVar8 * 0x18);
    *puVar11 = uVar14;
    puVar11[1] = uVar13;
    uVar13 = iVar3 + uVar13;
    puVar11[4] = 0xffffffff;
    puVar11[5] = 0xffffffff;
    puVar11[2] = local_58 + uVar13;
    puVar11[3] = (uint)*(undefined8 *)(param_1 + 0x50);
    if (((int)uVar8 != 0) && (cVar15 != '\0')) {
      FUN_006f51d4(param_1);
      uVar8 = (ulong)*(uint *)(param_1 + 0x1c);
      uVar10 = 0;
      if (*(char *)(param_1 + 0x59) != '\0') {
        uVar10 = 7;
      }
    }
    uVar14 = (int)uVar8 + 1;
    *(uint *)(param_1 + 0xc) = uVar13;
    *(uint *)(param_1 + 0x1c) = uVar14;
    if ((int)uVar8 != -1) goto LAB_006f4a60;
LAB_006f4ad4:
    bVar7 = 0;
LAB_006f4afc:
    *(byte *)(param_1 + 0x18) = bVar7;
  }
LAB_006f4b00:
  cVar15 = *(char *)(param_1 + 0x18);
joined_r0x006f4968:
  if ((cVar15 == '\v') && (*(int *)(param_1 + 0x1c) != 0)) {
    lVar9 = *(long *)(param_1 + 0x28) + (ulong)(*(int *)(param_1 + 0x1c) - 1) * 0x18;
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return uVar10;
}


// ===== 006f4b5c  FUN_006f4b5c =====

bool FUN_006f4b5c(long param_1)

{
  return *(uint *)(param_1 + 0x10) <= *(uint *)(param_1 + 0xc);
}


// ===== 006f4b6c  FUN_006f4b6c =====

undefined8 FUN_006f4b6c(long param_1,long *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int local_38;
  undefined4 uStack_34;
  
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        if (*(int *)(param_1 + 0x1c) != 0) {
          if (*(char *)(param_1 + 0x18) == '\f') {
            uVar13 = (ulong)*(uint *)(param_1 + 0xc);
            goto LAB_006f4e94;
          }
          if (param_2 == (long *)0x0) {
            return 0;
          }
          puVar8 = (ulong *)*param_2;
          uVar3 = *(ushort *)((long)puVar8 + 0x14);
          uVar13 = *(ulong *)(*(long *)(param_1 + 0x28) +
                              (ulong)(*(int *)(param_1 + 0x1c) - 1) * 0x18 + 0x10);
          goto joined_r0x006f4f78;
        }
        if (*(int *)(param_1 + 0x14) == 1) {
          return 0;
        }
        uVar7 = FUN_006f52cc(param_1);
        iVar6 = *(int *)(param_1 + 0x14) - uVar7;
        if (iVar6 == 0) {
          return 0;
        }
        lVar12 = *(long *)(param_1 + 0x40);
        if (*(char *)(lVar12 + (ulong)uVar7) == '[') {
          FUN_005c27e8(lVar12 + (ulong)(uVar7 + 1),&local_38,iVar6 + -1,1);
          sqlite3_result_int64(param_2,CONCAT44(uStack_34,local_38));
          return 0;
        }
        if (*(char *)(lVar12 + (ulong)(uVar7 + 1)) == '\"') {
          if (param_2 == (long *)0x0) {
            return 0;
          }
          iVar6 = iVar6 + -3;
          puVar9 = (undefined *)(lVar12 + (ulong)(uVar7 + 2));
        }
        else {
          if (param_2 == (long *)0x0) {
            return 0;
          }
          iVar6 = iVar6 + -1;
          puVar9 = (undefined *)(lVar12 + (ulong)(uVar7 + 1));
        }
        goto LAB_006f4bc8;
      }
      if (param_3 == 1) {
        if (*(char *)(param_1 + 0x18) == '\f') {
          iVar6 = *(int *)(param_1 + 0xc);
          local_38 = 0;
          iVar4 = FUN_0067c7c0(param_1 + 0xc0,iVar6,&local_38);
          uVar7 = iVar4 + iVar6 + local_38;
        }
        else {
          uVar7 = *(uint *)(param_1 + 0xc);
        }
        FUN_00681c34(param_1 + 0xc0,uVar7,param_2,1);
        if (param_2 == (long *)0x0) {
          return 0;
        }
        if ((*(byte *)(*(long *)(param_1 + 0xc0) + (ulong)uVar7) & 0xf) < 0xb) {
          return 0;
        }
        lVar12 = *param_2;
        *(undefined1 *)(lVar12 + 0x17) = 0x4a;
        *(ushort *)(lVar12 + 0x14) = *(ushort *)(lVar12 + 0x14) | 0x800;
        return 0;
      }
      goto LAB_006f4e18;
    }
    if (param_3 != 2) {
      if (param_3 == 3) {
        if (*(char *)(param_1 + 0x18) == '\f') {
          iVar6 = *(int *)(param_1 + 0xc);
          local_38 = 0;
          iVar4 = FUN_0067c7c0(param_1 + 0xc0,iVar6,&local_38);
          uVar13 = (ulong)(uint)(iVar4 + iVar6 + local_38);
          bVar1 = *(byte *)(*(long *)(param_1 + 0xc0) + uVar13);
        }
        else {
          uVar13 = (ulong)*(uint *)(param_1 + 0xc);
          bVar1 = *(byte *)(*(long *)(param_1 + 0xc0) + uVar13);
        }
        if (10 < (bVar1 & 0xf)) {
          return 0;
        }
LAB_006f4e94:
        FUN_00681c34(param_1 + 0xc0,uVar13,param_2,1);
        return 0;
      }
      goto LAB_006f4e18;
    }
    if (*(char *)(param_1 + 0x18) == '\f') {
      iVar6 = *(int *)(param_1 + 0xc);
      local_38 = 0;
      iVar4 = FUN_0067c7c0(param_1 + 0xc0,iVar6,&local_38);
      uVar7 = iVar4 + iVar6 + local_38;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0xc);
    }
    if (param_2 == (long *)0x0) {
      return 0;
    }
    iVar6 = -1;
    puVar9 = (&PTR_DAT_00ad3e10)[(ulong)*(byte *)(*(long *)(param_1 + 0xc0) + (ulong)uVar7) & 0xf];
  }
  else {
    if (param_3 < 6) {
      if (param_3 == 4) {
        if (param_2 == (long *)0x0) {
          return 0;
        }
        puVar8 = (ulong *)*param_2;
        uVar7 = *(uint *)(param_1 + 0xc);
        uVar3 = *(ushort *)((long)puVar8 + 0x14);
      }
      else {
        if (param_3 != 5) goto LAB_006f4e18;
        if (*(int *)(param_1 + 0x1c) == 0) {
          return 0;
        }
        if (*(char *)(param_1 + 0x19) == '\0') {
          return 0;
        }
        if (param_2 == (long *)0x0) {
          return 0;
        }
        puVar8 = (ulong *)*param_2;
        uVar3 = *(ushort *)((long)puVar8 + 0x14);
        uVar7 = *(uint *)(*(long *)(param_1 + 0x28) + (ulong)(*(int *)(param_1 + 0x1c) - 1) * 0x18);
      }
      uVar13 = (ulong)uVar7;
joined_r0x006f4f78:
      if ((uVar3 & 0x9000) == 0) {
        *puVar8 = uVar13;
        *(undefined2 *)((long)puVar8 + 0x14) = 4;
        return 0;
      }
      FUN_005c2a94();
      return 0;
    }
    if (param_3 == 6) {
      uVar11 = *(undefined8 *)(param_1 + 0x50);
      uVar10 = uVar11;
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_006f51d4(param_1,param_2,uVar11);
        uVar10 = *(undefined8 *)(param_1 + 0x50);
      }
      sqlite3_result_text64(param_2,*(undefined8 *)(param_1 + 0x40),uVar10,0xffffffffffffffff,1);
      *(undefined8 *)(param_1 + 0x50) = uVar11;
      return 0;
    }
    if (param_3 == 7) {
      uVar7 = *(uint *)(param_1 + 0x50);
      lVar12 = *(long *)(param_1 + 0x40);
      if (((*(int *)(param_1 + 8) == 0) && (*(char *)(param_1 + 0x19) != '\0')) &&
         ((uVar7 & 0xfffffffe) != 0)) {
        do {
          uVar7 = uVar7 - 1;
          uVar13 = (ulong)uVar7;
          cVar2 = *(char *)(lVar12 + uVar13);
          if ((cVar2 == '[') || (cVar2 == '.')) {
            *(undefined1 *)(lVar12 + uVar13) = 0;
            uVar5 = FUN_0067b398(param_1 + 0xc0,0,lVar12 + 1,0);
            *(char *)(lVar12 + uVar13) = cVar2;
            if ((uVar5 < 0xfffffffd) &&
               (iVar6 = FUN_0067c7c0(param_1 + 0xc0,uVar5,&local_38),
               iVar6 + uVar5 == *(int *)(param_1 + 0xc))) goto LAB_006f4f84;
          }
        } while ((uVar7 & 0xfffffffe) != 0);
        uVar7 = 1;
LAB_006f4f84:
        lVar12 = *(long *)(param_1 + 0x40);
      }
      sqlite3_result_text64(param_2,lVar12,uVar7,0xffffffffffffffff,1);
      return 0;
    }
    if (param_3 == 8) {
      puVar9 = *(undefined **)(param_1 + 0xd0);
      if (puVar9 == (undefined *)0x0) {
        sqlite3_result_blob(param_2,*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200),
                            0xffffffffffffffff);
        return 0;
      }
      if (param_2 == (long *)0x0) {
        return 0;
      }
      iVar6 = -1;
LAB_006f4bc8:
      uVar10 = 0xffffffffffffffff;
      goto LAB_006f4ed4;
    }
LAB_006f4e18:
    if (param_2 == (long *)0x0) {
      return 0;
    }
    iVar6 = *(int *)(param_1 + 0x14);
    puVar9 = *(undefined **)(param_1 + 0x40);
  }
  uVar10 = 0;
LAB_006f4ed4:
  FUN_0059031c(param_2,puVar9,iVar6,1,uVar10);
  return 0;
}


// ===== 006f4ff8  FUN_006f4ff8 =====

undefined8 FUN_006f4ff8(long param_1,ulong *param_2)

{
  *param_2 = (ulong)*(uint *)(param_1 + 8);
  return 0;
}


// ===== 006f5008  FUN_006f5008 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f5008(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  
  if (*(char *)(param_1 + 0xf0) != '\0') {
    puVar5 = (ulong *)(*(long *)(param_1 + 0xd0) + -8);
    if (*puVar5 < 2) {
      puVar4 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != (ulong *)0x0) {
          (*DAT_00b0da70)();
        }
        iVar3 = (*DAT_00b0da28)(puVar5);
        DAT_00b105b8 = DAT_00b105b8 - iVar3;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(puVar5);
        if (DAT_00b103d8 == (ulong *)0x0) goto LAB_006f50c0;
        puVar4 = &DAT_00b0da80;
        puVar5 = DAT_00b103d8;
      }
      (*(code *)*puVar4)(puVar5);
    }
    else {
      *puVar5 = *puVar5 - 1;
    }
LAB_006f50c0:
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_005869c8(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    puVar5 = (ulong *)(*(long *)(param_1 + 0x40) + -8);
    if (*puVar5 < 2) {
      puVar4 = &DAT_00b0da18;
      if (DAT_00b0d9f0 != 0) {
        if (DAT_00b103d8 != (ulong *)0x0) {
          (*DAT_00b0da70)();
        }
        iVar3 = (*DAT_00b0da28)(puVar5);
        DAT_00b105b8 = DAT_00b105b8 - iVar3;
        DAT_00b10600 = DAT_00b10600 + -1;
        (*DAT_00b0da18)(puVar5);
        if (DAT_00b103d8 == (ulong *)0x0) goto LAB_006f5188;
        puVar4 = &DAT_00b0da80;
        puVar5 = DAT_00b103d8;
      }
      (*(code *)*puVar4)(puVar5);
    }
    else {
      *puVar5 = *puVar5 - 1;
    }
  }
LAB_006f5188:
  uVar2 = _UNK_0029f4c8;
  uVar1 = _DAT_0029f4c0;
  *(long *)(param_1 + 0x40) = param_1 + 0x5a;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined1 *)(param_1 + 0x58) = 1;
  FUN_005869c8(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 006f51d4  FUN_006f51d4 =====

void FUN_006f51d4(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  uint local_24;
  
  if (*(char *)(param_1 + 0x18) == '\v') {
    FUN_00680c6c(0x1e,param_1 + 0x38,"[%lld]",
                 *(undefined8 *)
                  (*(long *)(param_1 + 0x28) + (ulong)(*(int *)(param_1 + 0x1c) - 1) * 0x18 + 0x10))
    ;
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  local_24 = 0;
  iVar2 = FUN_0067c7c0(param_1 + 0xc0,iVar1,&local_24);
  uVar3 = (ulong)local_24;
  pbVar4 = (byte *)(*(long *)(param_1 + 0xc0) + (ulong)(uint)(iVar2 + iVar1));
  if ((local_24 != 0) && (((byte)(&DAT_002c7a08)[*pbVar4] >> 1 & 1) != 0)) {
    while (((&DAT_002c7a08)[*pbVar4] & 6) != 0) {
      uVar3 = uVar3 - 1;
      pbVar4 = pbVar4 + 1;
      if (uVar3 == 0) {
        FUN_00680c6c(local_24 + 2,param_1 + 0x38,".%.*s");
        return;
      }
    }
  }
  FUN_00680c6c(local_24 + 4,param_1 + 0x38,".\"%.*s\"");
  return;
}


// ===== 006f52cc  FUN_006f52cc =====

uint FUN_006f52cc(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  undefined1 auStack_44 [4];
  
  uVar4 = *(uint *)(param_1 + 0x50);
  if (((*(int *)(param_1 + 8) == 0) && (*(char *)(param_1 + 0x19) != '\0')) && (1 < uVar4)) {
    lVar5 = *(long *)(param_1 + 0x40);
    pcVar6 = (char *)(lVar5 + (ulong)(uVar4 - 1));
    do {
      cVar1 = *pcVar6;
      if ((cVar1 == '[') || (cVar1 == '.')) {
        *pcVar6 = '\0';
        uVar2 = FUN_0067b398(param_1 + 0xc0,0,lVar5 + 1,0);
        *pcVar6 = cVar1;
        if ((uVar2 < 0xfffffffd) &&
           (iVar3 = FUN_0067c7c0(param_1 + 0xc0,uVar2,auStack_44),
           iVar3 + uVar2 == *(int *)(param_1 + 0xc))) {
          return uVar4 - 1;
        }
      }
      uVar4 = uVar4 - 1;
      pcVar6 = pcVar6 + -1;
    } while (1 < uVar4);
    uVar4 = 1;
  }
  return uVar4;
}


// ===== 006f53ac  FUN_006f53ac =====

void FUN_006f53ac(undefined8 param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = FUN_006f414c();
  if (iVar1 != 0) {
    return;
  }
  *(undefined1 *)(*param_2 + 0x19) = 1;
  return;
}


// ===== 006f53e8  FUN_006f53e8 =====

void FUN_006f53e8(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar3 = 0;
    do {
      FUN_005900cc(*(undefined8 *)(*(long *)(param_1 + 0x30) + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x28));
  }
  puVar2 = &DAT_00b0da18;
  if (DAT_00b0d9f0 != 0) {
    if (DAT_00b103d8 != 0) {
      (*DAT_00b0da70)();
    }
    iVar1 = (*DAT_00b0da28)(param_1);
    DAT_00b105b8 = DAT_00b105b8 - iVar1;
    DAT_00b10600 = DAT_00b10600 + -1;
    (*DAT_00b0da18)(param_1);
    if (DAT_00b103d8 == 0) {
      return;
    }
    puVar2 = &DAT_00b0da80;
    param_1 = DAT_00b103d8;
  }
                    /* WARNING: Could not recover jumptable at 0x006f54b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1);
  return;
}


// ===== 006f54c4  FUN_006f54c4 =====

void FUN_006f54c4(long param_1)

{
  long lVar1;
  
                    /* try { // try from 006f54d4 to 006f54db has its CatchHandler @ 006f554c */
  FUN_006f971c(param_1 + 0x18);
                    /* try { // try from 006f54dc to 006f54e3 has its CatchHandler @ 006f5544 */
  FUN_006f971c(param_1 + 0x38);
                    /* try { // try from 006f54e4 to 006f54eb has its CatchHandler @ 006f553c */
  FUN_006f971c(param_1 + 0x58);
                    /* try { // try from 006f54ec to 006f54f3 has its CatchHandler @ 006f5534 */
  FUN_006f971c(param_1 + 0x78);
  lVar1 = *(long *)(param_1 + 0xa0);
  if ((lVar1 != 0) && (lVar1 * 0x19 != -0x21)) {
    free((void *)(*(long *)(param_1 + 0x98) + lVar1 * -0x18 + -0x18));
  }
  FUN_006f971c(param_1 + 0xc0);
  return;
}


// ===== 006f5588  FUN_006f5588 =====

void FUN_006f5588(undefined8 *param_1)

{
                    /* try { // try from 006f559c to 006f559f has its CatchHandler @ 006f55f0 */
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(*param_1);
                    /* try { // try from 006f55a4 to 006f55a7 has its CatchHandler @ 006f55e8 */
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[1]);
                    /* try { // try from 006f55ac to 006f55af has its CatchHandler @ 006f55e0 */
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[2]);
                    /* try { // try from 006f55b4 to 006f55b7 has its CatchHandler @ 006f55d8 */
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[3]);
                    /* try { // try from 006f55bc to 006f55bf has its CatchHandler @ 006f55d0 */
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[4]);
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[5]);
  return;
}


// ===== 006f562c  FUN_006f562c =====

void FUN_006f562c(undefined8 *param_1)

{
                    /* try { // try from 006f5640 to 006f5643 has its CatchHandler @ 006f5654 */
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(*param_1);
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[1]);
  return;
}


// ===== 006f5670  FUN_006f5670 =====

void FUN_006f5670(undefined8 *param_1)

{
                    /* try { // try from 006f5684 to 006f5687 has its CatchHandler @ 006f56c8 */
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(*param_1);
                    /* try { // try from 006f568c to 006f568f has its CatchHandler @ 006f56c0 */
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[1]);
                    /* try { // try from 006f5694 to 006f5697 has its CatchHandler @ 006f56b8 */
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[2]);
                    /* try { // try from 006f569c to 006f569f has its CatchHandler @ 006f56b0 */
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[3]);
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[4]);
  return;
}


// ===== 006f56fc  FUN_006f56fc =====

void FUN_006f56fc(undefined8 *param_1)

{
                    /* try { // try from 006f5710 to 006f5713 has its CatchHandler @ 006f5734 */
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(*param_1);
                    /* try { // try from 006f5718 to 006f571b has its CatchHandler @ 006f572c */
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[1]);
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[2]);
  return;
}


// ===== 006f5758  FUN_006f5758 =====

undefined8 FUN_006f5758(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  byte bVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  lVar9 = *param_2;
  uVar2 = param_2[1];
  lVar6 = 0;
  uVar7 = uVar2 & 0xee1d58db8fead821;
  uVar11 = *(undefined8 *)(lVar9 + uVar7);
  uVar12 = NEON_cmeq(uVar11,0x7777777777777777,1);
  uVar12 = uVar12 & 0x8080808080808080;
  while( true ) {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar3 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar8 = (undefined8 *)
               (lVar9 + (uVar7 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                        -0x20);
      if (puVar8[-3] == 0x20ee4d7e1019005d && puVar8[-4] == -0x4d3b57d3966d85d) goto LAB_006f58fc;
    }
    uVar11 = NEON_cmeq(uVar11,0xffffffffffffffff,1);
    bVar10 = NEON_umaxv(uVar11,1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar7 = uVar7 + lVar6 & uVar2;
    uVar11 = *(undefined8 *)(lVar9 + uVar7);
    uVar12 = NEON_cmeq(uVar11,0x7777777777777777,1);
    uVar12 = uVar12 & 0x8080808080808080;
  }
  if (param_2[2] == 0) {
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (param_2,1,param_2 + 4,1);
  }
  uVar11 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(param_1,&DAT_002bd26c,4);
                    /* try { // try from 006f5850 to 006f5863 has its CatchHandler @ 006f598c */
  uVar4 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(param_1,&DAT_002cf456,9);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar5 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar5 == (undefined8 *)0x0) {
                    /* try { // try from 006f595c to 006f5967 has its CatchHandler @ 006f59a4 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x10);
  }
  puVar1 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  puVar5[1] = uVar4;
  *puVar5 = uVar11;
  uVar12 = uVar2 & 0xee1d58db8fead821;
  uVar7 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar12),0,1);
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar12 = uVar12 + lVar6;
      lVar6 = lVar6 + 8;
      uVar12 = uVar12 & uVar2;
      uVar7 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar12),0,1);
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  uVar12 = uVar12 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
  uVar7 = (ulong)*(char *)((long)puVar1 + uVar12);
  if (-1 < *(char *)((long)puVar1 + uVar12)) {
    uVar12 = NEON_cmlt(*puVar1,0,1);
    uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
    uVar7 = (ulong)*(byte *)((long)puVar1 + uVar12);
  }
  lVar9 = param_2[3];
  lVar6 = param_2[2];
  *(undefined1 *)((long)puVar1 + uVar12) = 0x77;
  puVar8 = puVar1 + uVar12 * -4;
  *(undefined1 *)((long)puVar1 + (uVar12 - 8 & uVar2) + 8) = 0x77;
  puVar8[-4] = 0xfb2c4a82c69927a3;
  puVar8[-3] = 0x20ee4d7e1019005d;
  puVar8[-2] = puVar5;
  puVar8[-1] = &PTR_FUN_00ad4a50;
  param_2[3] = lVar9 + 1;
  param_2[2] = lVar6 - (uVar7 & 1);
LAB_006f58fc:
  return puVar8[-2];
}


// ===== 006f59bc  <record_mapper::record::record_mapper::record::GlobalRecordId>::unique =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::record::record_mapper::record::GlobalRecordId>::unique */

long * __rustcall
<record_mapper::record::record_mapper::record::GlobalRecordId>::unique
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  
  do {
    plVar5 = DAT_00b0f198;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0xb0f198,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_00b0f198 = (long *)((long)DAT_00b0f198 + 1);
    }
  } while (cVar2 != '\0');
  if ((ulong)plVar5 >> 0x35 == 0) {
    return plVar5;
  }
  puVar6 = (undefined8 *)FUN_006f5ec0();
  plVar5 = (long *)*puVar6;
  uVar7 = plVar5[2];
  puVar1 = (ulong *)(plVar5 + 2);
  if (uVar7 < 0xfffffffffffffff0 && (uVar7 & 8) == 0) {
    if (*puVar1 == uVar7) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 + 0x10;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_006f5a44;
    }
    else {
      ClearExclusiveLocal();
    }
  }
  <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::lock_shared_slow
            (plVar5 + 2,0,param_3,0xffffffff);
LAB_006f5a44:
  do {
    lVar8 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (-1 < lVar8) {
    return plVar5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x6f5a6c);
  (*pcVar4)();
}


// ===== 006f59f0  <record_mapper::database::[0]::record_mapper::database::StateDatabase>::snapshot =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::[0]::record_mapper::database::StateDatabase>::snapshot */

long * __rustcall
<record_mapper::database::[0]::record_mapper::database::StateDatabase>::snapshot
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = (long *)*param_1;
  uVar5 = plVar7[2];
  puVar1 = (ulong *)(plVar7 + 2);
  if (uVar5 < 0xfffffffffffffff0 && (uVar5 & 8) == 0) {
    if (*puVar1 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 + 0x10;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_006f5a44;
    }
    else {
      ClearExclusiveLocal();
    }
  }
  <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::lock_shared_slow
            (plVar7 + 2,0,param_3,0xffffffff);
LAB_006f5a44:
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (-1 < lVar6) {
    return plVar7;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x6f5a6c);
  (*pcVar4)();
}


// ===== 006f5a74  <record_mapper::snowflake::[1]::record_mapper::snowflake::SnowflakeInner>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::snowflake::[1]::record_mapper::snowflake::SnowflakeInner>::new */

void __rustcall
<record_mapper::snowflake::[1]::record_mapper::snowflake::SnowflakeInner>::new(long param_1)

{
  if (param_1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("invariant: Snowflake ID cannot be zero",0x26,
             &PTR_s_mobile_jsi_record_mapper_src_sno_00ad4af0);
}


// ===== 006f5a9c  <record_mapper::database::[2]::record_mapper::database::Registry>::get_dyn_storage =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::[2]::record_mapper::database::Registry>::get_dyn_storage */

undefined1  [16] __rustcall
<record_mapper::database::[2]::record_mapper::database::Registry>::get_dyn_storage
          (long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined8 uVar9;
  ulong uVar10;
  long local_30;
  long lStack_28;
  long *local_20;
  code *pcStack_18;
  
  local_20 = &local_30;
  if (param_1[0x13] != 0) {
    lVar4 = 0;
    uVar5 = param_2[1] * 0x517cc1b727220a95;
    bVar8 = (byte)(uVar5 >> 0x39);
    uVar7 = CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(bVar8,CONCAT12(
                                                  bVar8,CONCAT11(bVar8,bVar8)))))));
    lVar1 = param_1[0x10];
    uVar2 = param_1[0x11];
    uVar5 = uVar5 & uVar2;
    uVar9 = *(undefined8 *)(lVar1 + uVar5);
    uVar10 = NEON_cmeq(uVar9,uVar7,1);
    while( true ) {
      for (uVar10 = uVar10 & 0x8080808080808080; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
        uVar3 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        lVar6 = lVar1 + (uVar5 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                        -0x18;
        if (param_2[1] == *(long *)(lVar6 + -0x10) && *param_2 == *(long *)(lVar6 + -0x18)) {
          if ((*(byte *)(lVar6 + -8) & 1) != 0) {
            lStack_28 = param_2[1];
            local_30 = *param_2;
            if (param_1[7] == 0) goto LAB_006f5cec;
            lVar4 = 0;
            bVar8 = (byte)((ulong)(lStack_28 * 0x517cc1b727220a95) >> 0x39);
            uVar7 = CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(bVar8,
                                                  CONCAT12(bVar8,CONCAT11(bVar8,bVar8)))))));
            lVar1 = param_1[4];
            uVar2 = param_1[5];
            uVar5 = lStack_28 * 0x517cc1b727220a95 & uVar2;
            uVar9 = *(undefined8 *)(lVar1 + uVar5);
            uVar10 = NEON_cmeq(uVar9,uVar7,1);
            uVar10 = uVar10 & 0x8080808080808080;
            goto joined_r0x006f5ba8;
          }
          lStack_28 = param_2[1];
          local_30 = *param_2;
          if (param_1[3] == 0) goto LAB_006f5d14;
          lVar4 = 0;
          bVar8 = (byte)((ulong)(lStack_28 * 0x517cc1b727220a95) >> 0x39);
          uVar7 = CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(bVar8,
                                                  CONCAT12(bVar8,CONCAT11(bVar8,bVar8)))))));
          lVar1 = *param_1;
          uVar2 = param_1[1];
          uVar5 = lStack_28 * 0x517cc1b727220a95 & uVar2;
          uVar9 = *(undefined8 *)(lVar1 + uVar5);
          uVar10 = NEON_cmeq(uVar9,uVar7,1);
          uVar10 = uVar10 & 0x8080808080808080;
          goto joined_r0x006f5c74;
        }
      }
      uVar9 = NEON_cmeq(uVar9,0xffffffffffffffff,1);
      bVar8 = NEON_umaxv(uVar9,1);
      if ((bVar8 & 1) != 0) break;
      lVar4 = lVar4 + 8;
      uVar5 = uVar5 + lVar4 & uVar2;
      uVar9 = *(undefined8 *)(lVar1 + uVar5);
      uVar10 = NEON_cmeq(uVar9,uVar7,1);
    }
  }
  pcStack_18 = FUN_006f85ac;
  local_20 = param_2;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002a3bef,&local_20,&PTR_s_mobile_jsi_record_mapper_src_dat_00ad4b08);
joined_r0x006f5c74:
  for (; uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
    uVar9 = NEON_cmeq(uVar9,0xffffffffffffffff,1);
    bVar8 = NEON_umaxv(uVar9,1);
    if ((bVar8 & 1) != 0) {
LAB_006f5d14:
      pcStack_18 = FUN_006f85ac;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002a2004,&local_20,&PTR_s_mobile_jsi_record_mapper_src_dat_00ad4b20);
    }
    lVar4 = lVar4 + 8;
    uVar5 = uVar5 + lVar4 & uVar2;
    uVar9 = *(undefined8 *)(lVar1 + uVar5);
    uVar10 = NEON_cmeq(uVar9,uVar7,1);
  }
  uVar3 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  lVar6 = lVar1 + (uVar5 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) * -0x20;
  if (lStack_28 == *(long *)(lVar6 + -0x18) && local_30 == *(long *)(lVar6 + -0x20))
  goto LAB_006f5cdc;
  uVar10 = uVar10 - 1 & uVar10;
  goto joined_r0x006f5c74;
joined_r0x006f5ba8:
  for (; uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
    uVar9 = NEON_cmeq(uVar9,0xffffffffffffffff,1);
    bVar8 = NEON_umaxv(uVar9,1);
    if ((bVar8 & 1) != 0) {
LAB_006f5cec:
      pcStack_18 = FUN_006f85ac;
      local_20 = &local_30;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002a2004,&local_20,&PTR_s_mobile_jsi_record_mapper_src_dat_00ad4b38);
    }
    lVar4 = lVar4 + 8;
    uVar5 = uVar5 + lVar4 & uVar2;
    uVar9 = *(undefined8 *)(lVar1 + uVar5);
    uVar10 = NEON_cmeq(uVar9,uVar7,1);
  }
  uVar3 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  lVar6 = lVar1 + (uVar5 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) * -0x20;
  if (lStack_28 == *(long *)(lVar6 + -0x18) && local_30 == *(long *)(lVar6 + -0x20)) {
LAB_006f5cdc:
    return *(undefined1 (*) [16])(lVar6 + -0x10);
  }
  uVar10 = uVar10 - 1 & uVar10;
  goto joined_r0x006f5ba8;
}


// ===== 006f5d3c  <record_mapper::database::[6]::record_mapper::database::PendingMutation>::has_pending_mutation_for =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::[6]::record_mapper::database::PendingMutation>::has_pending_mutation_for
    */

undefined8 __rustcall
<record_mapper::database::[6]::record_mapper::database::PendingMutation>::has_pending_mutation_for
          (long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  if (param_1[3] != 0) {
    lVar5 = 0;
    uVar6 = param_2[1] * 0x517cc1b727220a95;
    bVar4 = (byte)(uVar6 >> 0x39);
    lVar1 = *param_1;
    uVar2 = param_1[1];
    uVar6 = uVar6 & uVar2;
    uVar9 = *(undefined8 *)(lVar1 + uVar6);
    uVar10 = NEON_cmeq(uVar9,CONCAT17(bVar4,CONCAT16(bVar4,CONCAT15(bVar4,CONCAT14(bVar4,CONCAT13(
                                                  bVar4,CONCAT12(bVar4,CONCAT11(bVar4,bVar4))))))),1
                      );
    while( true ) {
      for (uVar10 = uVar10 & 0x8080808080808080; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
        uVar3 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        lVar7 = lVar1 + (uVar6 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                        -0x20;
        if (param_2[1] == *(long *)(lVar7 + -0x18) && *param_2 == *(long *)(lVar7 + -0x20)) {
          return 1;
        }
      }
      uVar9 = NEON_cmeq(uVar9,0xffffffffffffffff,1);
      bVar8 = NEON_umaxv(uVar9,1);
      if ((bVar8 & 1) != 0) break;
      lVar5 = lVar5 + 8;
      uVar6 = uVar6 + lVar5 & uVar2;
      uVar9 = *(undefined8 *)(lVar1 + uVar6);
      uVar10 = NEON_cmeq(uVar9,CONCAT17(bVar4,CONCAT16(bVar4,CONCAT15(bVar4,CONCAT14(bVar4,CONCAT13(
                                                  bVar4,CONCAT12(bVar4,CONCAT11(bVar4,bVar4))))))),1
                        );
    }
  }
  return 0;
}


// ===== 006f5dfc  <record_mapper::database::[6]::record_mapper::database::PendingMutation>::is_empty =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::[6]::record_mapper::database::PendingMutation>::is_empty */

bool __rustcall
<record_mapper::database::[6]::record_mapper::database::PendingMutation>::is_empty(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  puVar3 = (undefined8 *)*param_1;
  puVar4 = puVar3 + 1;
  uVar6 = NEON_cmge(*puVar3,0,1);
  uVar6 = uVar6 & 0x8080808080808080;
  lVar1 = param_1[3];
  do {
    lVar5 = lVar1;
    if (lVar5 == 0) break;
    for (; uVar6 == 0; uVar6 = uVar6 & 0x8080808080808080) {
      puVar3 = puVar3 + -0x20;
      uVar6 = NEON_cmge(*puVar4,0,1);
      puVar4 = puVar4 + 1;
    }
    uVar2 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78;
    uVar6 = uVar6 - 1 & uVar6;
    uVar2 = (**(code **)(*(long *)((long)puVar3 + uVar2 * -4 + -8) + 0x30))
                      (*(undefined8 *)((long)puVar3 + uVar2 * -4 + -0x10));
    lVar1 = lVar5 + -1;
  } while ((uVar2 & 1) != 0);
  return lVar5 == 0;
}


// ===== 006f5ea4  <record_mapper::database::[a]::record_mapper::database::Snapshot>::unwind_if_read_cancelled =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::[a]::record_mapper::database::Snapshot>::unwind_if_read_cancelled */

void __rustcall
<record_mapper::database::[a]::record_mapper::database::Snapshot>::unwind_if_read_cancelled(void)

{
  return;
}


// ===== 006f5eb4  <record_mapper::database::[b]::record_mapper::database::RevisionCancelled>::set =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::[b]::record_mapper::database::RevisionCancelled>::set */

void __rustcall
<record_mapper::database::[b]::record_mapper::database::RevisionCancelled>::set(undefined4 *param_1)

{
  *param_1 = 1;
  return;
}


// ===== 006f5ec0  FUN_006f5ec0 =====

void FUN_006f5ec0(undefined8 param_1)

{
  undefined8 local_38;
  undefined8 *puStack_30;
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  puStack_30 = &local_38;
  local_28 = PTR_fmt_00b00c60;
  puStack_20 = &DAT_002cf348;
  local_18 = PTR_fmt_00b00c60;
  local_38 = param_1;
  std::io::stdio::_eprint(&DAT_002aae9a,&puStack_30);
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 006f5f00  FUN_006f5f00 =====

void FUN_006f5f00(undefined8 param_1,undefined8 param_2)

{
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__typename(param_2);
  return;
}


// ===== 006f5f08  FUN_006f5f08 =====

void FUN_006f5f08(undefined8 param_1,undefined8 param_2)

{
  <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__typename(param_2);
  return;
}


// ===== 006f5f10  FUN_006f5f10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f5f10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fb80;
  param_1[1] = _UNK_0029fb88;
  *param_1 = uVar1;
  return;
}


// ===== 006f5f24  FUN_006f5f24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f5f24(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a07e0;
  param_1[1] = _UNK_002a07e8;
  *param_1 = uVar1;
  return;
}


// ===== 006f5f38  FUN_006f5f38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f5f38(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f5f0;
  param_1[1] = _UNK_0029f5f8;
  *param_1 = uVar1;
  return;
}


// ===== 006f5f4c  FUN_006f5f4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f5f4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fc90;
  param_1[1] = _UNK_0029fc98;
  *param_1 = uVar1;
  return;
}


// ===== 006f5f60  FUN_006f5f60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f5f60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a1030;
  param_1[1] = _UNK_002a1038;
  *param_1 = uVar1;
  return;
}


// ===== 006f5f74  FUN_006f5f74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f5f74(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f440;
  param_1[1] = _UNK_0029f448;
  *param_1 = uVar1;
  return;
}


// ===== 006f5f88  FUN_006f5f88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f5f88(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a02e0;
  param_1[1] = _UNK_002a02e8;
  *param_1 = uVar1;
  return;
}


// ===== 006f5f9c  <record_mapper::telemetry::RecordMapperTimingsKind_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::telemetry::RecordMapperTimingsKind as core::fmt::Display>::fmt */

void __rustcall
<record_mapper::telemetry::RecordMapperTimingsKind_as_core::fmt::Display>::fmt
          (long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *local_20;
  code *pcStack_18;
  
  lVar1 = *param_1;
  if (2 < lVar1) {
    if (lVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x006f6044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_002cf350,0x18);
      return;
    }
    if (lVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x006f6014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_002cf368,0x17);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x006f608c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_002cf37f,0x1d);
    return;
  }
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x006f602c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,&UNK_002a0da0,0x10);
    return;
  }
  if (lVar1 == 1) {
    local_20 = param_1 + 1;
    pcStack_18 = FUN_006f6ce4;
    core::fmt::write(*param_2,param_2[1],&DAT_002aaec4,&local_20);
    return;
  }
  local_20 = param_1 + 1;
  pcStack_18 = FUN_006f6ce4;
  core::fmt::write(*param_2,param_2[1],&DAT_002ae323,&local_20);
  return;
}


// ===== 006f6090  <record_mapper::database::kkv::test_record::TestRecordClusteringKey_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::test_record::TestRecordClusteringKey as core::fmt::Display>::fmt
    */

void __rustcall
<record_mapper::database::kkv::test_record::TestRecordClusteringKey_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_fmt_00b00c60;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&local_20);
  return;
}


// ===== 006f60cc  <record_mapper::database::partition::js::PartitionDerivedDataProperties_as_jsi::traits::NewWithRuntime>::with_runtime =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::partition::js::PartitionDerivedDataProperties as
   jsi::traits::NewWithRuntime>::with_runtime */

void __rustcall
<record_mapper::database::partition::js::PartitionDerivedDataProperties_as_jsi::traits::NewWithRuntime>
::with_runtime(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar2,&DAT_002cf39c,6);
                    /* try { // try from 006f60fc to 006f610f has its CatchHandler @ 006f6124 */
  uVar2 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar2,"memoized",8);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


// ===== 006f613c  <record_mapper::database::kkv::test_record::TestRecordMemoryStatisticsProperties_as_jsi::traits::NewWithRuntime>::with_runtime =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::test_record::TestRecordMemoryStatisticsProperties as
   jsi::traits::NewWithRuntime>::with_runtime */

void __rustcall
<record_mapper::database::kkv::test_record::TestRecordMemoryStatisticsProperties_as_jsi::traits::NewWithRuntime>
::with_runtime(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  uVar1 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar5,&DAT_002a1a78,8);
                    /* try { // try from 006f6170 to 006f6183 has its CatchHandler @ 006f621c */
  uVar2 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar5,&DAT_002cf3a2,0xd);
                    /* try { // try from 006f6184 to 006f619b has its CatchHandler @ 006f620c */
  uVar3 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar5,&DAT_002cf3af,0xe);
                    /* try { // try from 006f619c to 006f61b3 has its CatchHandler @ 006f61fc */
  uVar4 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar5,&DAT_002cf3bd,7);
                    /* try { // try from 006f61b4 to 006f61cb has its CatchHandler @ 006f61ec */
  uVar5 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar5,&DAT_002cf3c4,7);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  return;
}


// ===== 006f6234  <record_mapper::database::kkv::test_record::TestRecordMemoryStatistics_as_jsi::object::ToObject>::to_object =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::test_record::TestRecordMemoryStatistics as
   jsi::object::ToObject>::to_object */

undefined8 __rustcall
<record_mapper::database::kkv::test_record::TestRecordMemoryStatistics_as_jsi::object::ToObject>::
to_object(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  byte bVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 *local_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 uStack_51;
  
  auVar18 = <jsi::handle::jsi::handle::RuntimeHandle>::state(param_2);
  plVar10 = auVar18._8_8_;
  puVar6 = auVar18._0_8_;
  lVar9 = *plVar10;
  uVar2 = plVar10[1];
  lVar11 = 0;
  uVar12 = uVar2 & 0x77a47fc2f3529d6d;
  uVar16 = *(undefined8 *)(lVar9 + uVar12);
  uVar17 = NEON_cmeq(uVar16,0x3b3b3b3b3b3b3b3b,1);
  uVar17 = uVar17 & 0x8080808080808080;
  while( true ) {
    for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
      uVar3 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar13 = (undefined8 *)
                (lVar9 + (uVar12 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                         -0x20);
      if (puVar13[-3] == 0x2230680d69b2e979 && puVar13[-4] == -0x16a10f9ab255e1b5)
      goto LAB_006f63d0;
    }
    uVar16 = NEON_cmeq(uVar16,0xffffffffffffffff,1);
    bVar15 = NEON_umaxv(uVar16,1);
    if ((bVar15 & 1) != 0) break;
    lVar11 = lVar11 + 8;
    uVar12 = uVar12 + lVar11 & uVar2;
    uVar16 = *(undefined8 *)(lVar9 + uVar12);
    uVar17 = NEON_cmeq(uVar16,0x3b3b3b3b3b3b3b3b,1);
    uVar17 = uVar17 & 0x8080808080808080;
  }
  if (plVar10[2] == 0) {
                    /* try { // try from 006f66c0 to 006f66d3 has its CatchHandler @ 006f672c */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (plVar10,1,plVar10 + 4,1);
  }
                    /* try { // try from 006f632c to 006f63db has its CatchHandler @ 006f672c */
  <record_mapper::database::kkv::test_record::TestRecordMemoryStatisticsProperties_as_jsi::traits::NewWithRuntime>
  ::with_runtime(&local_80,param_2);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar7 = (undefined8 *)FUN_004b25a4(0x28,8);
  if (puVar7 == (undefined8 *)0x0) {
                    /* try { // try from 006f66fc to 006f6707 has its CatchHandler @ 006f673c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x28);
  }
  puVar7[4] = local_60;
  puVar7[1] = pcStack_78;
  *puVar7 = local_80;
  puVar7[3] = uStack_68;
  puVar7[2] = uStack_70;
  puVar1 = (undefined8 *)*plVar10;
  uVar2 = plVar10[1];
  uVar17 = uVar2 & 0x77a47fc2f3529d6d;
  uVar12 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar17),0,1);
  if (uVar12 == 0) {
    lVar11 = 8;
    do {
      uVar17 = uVar17 + lVar11;
      lVar11 = lVar11 + 8;
      uVar17 = uVar17 & uVar2;
      uVar12 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar17),0,1);
    } while (uVar12 == 0);
  }
  uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
  uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
  uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uVar12 = uVar17 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar2;
  uVar17 = (ulong)*(char *)((long)puVar1 + uVar12);
  if (-1 < *(char *)((long)puVar1 + uVar12)) {
    uVar17 = NEON_cmlt(*puVar1,0,1);
    uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
    uVar12 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
    uVar17 = (ulong)*(byte *)((long)puVar1 + uVar12);
  }
  *(undefined1 *)((long)puVar1 + uVar12) = 0x3b;
  puVar13 = puVar1 + uVar12 * -4;
  *(undefined1 *)((long)puVar1 + (uVar12 - 8 & uVar2) + 8) = 0x3b;
  puVar13[-4] = 0xe95ef0654daa1e4b;
  puVar13[-3] = 0x2230680d69b2e979;
  puVar13[-2] = puVar7;
  puVar13[-1] = &PTR_FUN_00ad4a90;
  plVar10[3] = plVar10[3] + 1;
  plVar10[2] = plVar10[2] - (uVar17 & 1);
LAB_006f63d0:
  puVar7 = (undefined8 *)puVar13[-2];
  uVar16 = <jsi::object::[1]::jsi::object::Object>::new(param_2);
                    /* try { // try from 006f63dc to 006f63f3 has its CatchHandler @ 006f6734 */
  uVar8 = <record_mapper::memory_size::MemoryStatistics_as_jsi::object::ToObject>::to_object
                    (param_1,param_2);
  uVar8 = <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar8,param_2);
  uVar14 = *param_2;
                    /* try { // try from 006f63fc to 006f6413 has its CatchHandler @ 006f67a0 */
  lVar11 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(uVar16);
  if (lVar11 == 0) {
    pcStack_78 = FUN_006f5f08;
  }
  else {
    lVar9 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*puVar7);
    if (lVar9 != 0) {
                    /* try { // try from 006f641c to 006f643f has its CatchHandler @ 006f6734 */
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar14,lVar11,lVar9,uVar8);
      uVar8 = <record_mapper::memory_size::MemoryStatistics_as_jsi::object::ToObject>::to_object
                        (param_1 + 0x50,param_2);
      uVar8 = <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar8,param_2);
      uVar14 = *param_2;
                    /* try { // try from 006f6448 to 006f645f has its CatchHandler @ 006f678c */
      lVar11 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                         (uVar16);
      if (lVar11 == 0) {
        pcStack_78 = FUN_006f5f08;
      }
      else {
        lVar9 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                          (puVar7[1]);
        if (lVar9 != 0) {
                    /* try { // try from 006f6468 to 006f648b has its CatchHandler @ 006f6734 */
          jsi_sys::ffi::base::ffi::Object_setProperty(uVar14,lVar11,lVar9,uVar8);
          uVar8 = <record_mapper::memory_size::MemoryStatistics_as_jsi::object::ToObject>::to_object
                            (param_1 + 0xa0,param_2);
          uVar8 = <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar8,param_2);
          uVar14 = *param_2;
                    /* try { // try from 006f6494 to 006f64ab has its CatchHandler @ 006f6778 */
          lVar11 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                             (uVar16);
          if (lVar11 == 0) {
            pcStack_78 = FUN_006f5f08;
          }
          else {
            lVar9 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::
                    __get(puVar7[2]);
            if (lVar9 != 0) {
                    /* try { // try from 006f64b4 to 006f64d7 has its CatchHandler @ 006f6734 */
              jsi_sys::ffi::base::ffi::Object_setProperty(uVar14,lVar11,lVar9,uVar8);
              uVar8 = <record_mapper::memory_size::MemoryStatistics_as_jsi::object::ToObject>::
                      to_object(param_1 + 0xf0,param_2);
              uVar8 = <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar8,param_2);
              uVar14 = *param_2;
                    /* try { // try from 006f64e0 to 006f64f7 has its CatchHandler @ 006f6764 */
              lVar11 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::
                       __get(uVar16);
              if (lVar11 == 0) {
                pcStack_78 = FUN_006f5f08;
              }
              else {
                lVar9 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>
                        ::__get(puVar7[3]);
                if (lVar9 != 0) {
                    /* try { // try from 006f6500 to 006f6523 has its CatchHandler @ 006f6734 */
                  jsi_sys::ffi::base::ffi::Object_setProperty(uVar14,lVar11,lVar9,uVar8);
                  uVar8 = <record_mapper::memory_size::MemoryStatistics_as_jsi::object::ToObject>::
                          to_object(param_1 + 0x140,param_2);
                  uVar8 = <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar8,param_2);
                  uVar14 = *param_2;
                    /* try { // try from 006f652c to 006f6543 has its CatchHandler @ 006f6750 */
                  lVar11 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>
                           ::__get(uVar16);
                  if (lVar11 == 0) {
                    pcStack_78 = FUN_006f5f08;
                  }
                  else {
                    lVar9 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>
                            ::__get(puVar7[4]);
                    if (lVar9 != 0) {
                    /* try { // try from 006f654c to 006f655b has its CatchHandler @ 006f6734 */
                      jsi_sys::ffi::base::ffi::Object_setProperty(uVar14,lVar11,lVar9,uVar8);
                      do {
                        uVar17 = *puVar6;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                        if (bVar5) {
                          *puVar6 = uVar17 - 0x10;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if ((uVar17 & 0xfffffffffffffff2) == 0x12) {
                        <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::
                        unlock_shared_slow(puVar6);
                      }
                      return uVar16;
                    }
                    pcStack_78 = FUN_006f5f00;
                  }
                  local_80 = &uStack_51;
                    /* try { // try from 006f669c to 006f66af has its CatchHandler @ 006f6750 */
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_fmt
                            (&DAT_002b2091,&local_80,
                             &PTR_s__root__cargo_registry_src_index__00ad4b50);
                }
                pcStack_78 = FUN_006f5f00;
              }
              local_80 = &uStack_51;
                    /* try { // try from 006f6664 to 006f6677 has its CatchHandler @ 006f6764 */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_fmt
                        (&DAT_002b2091,&local_80,&PTR_s__root__cargo_registry_src_index__00ad4b50);
            }
            pcStack_78 = FUN_006f5f00;
          }
          local_80 = &uStack_51;
                    /* try { // try from 006f662c to 006f663f has its CatchHandler @ 006f6778 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_002b2091,&local_80,&PTR_s__root__cargo_registry_src_index__00ad4b50);
        }
        pcStack_78 = FUN_006f5f00;
      }
      local_80 = &uStack_51;
                    /* try { // try from 006f65f4 to 006f6607 has its CatchHandler @ 006f678c */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002b2091,&local_80,&PTR_s__root__cargo_registry_src_index__00ad4b50);
    }
    pcStack_78 = FUN_006f5f00;
  }
  local_80 = &uStack_51;
                    /* try { // try from 006f65bc to 006f65cf has its CatchHandler @ 006f67a0 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_80,&PTR_s__root__cargo_registry_src_index__00ad4b50);
}


// ===== 006f67f4  <record_mapper::database::kkv::test_record::TestRecordMemoryStatistics_as_jsi::value::ToValue>::to_value =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::test_record::TestRecordMemoryStatistics as
   jsi::value::ToValue>::to_value */

void __rustcall
<record_mapper::database::kkv::test_record::TestRecordMemoryStatistics_as_jsi::value::ToValue>::
to_value(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = <record_mapper::database::kkv::test_record::TestRecordMemoryStatistics_as_jsi::object::ToObject>
          ::to_object();
  <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar1,param_2);
  return;
}


// ===== 006f6818  <record_mapper::database::kkv::js::KkvDerivedDataProperties_as_jsi::traits::NewWithRuntime>::with_runtime =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::js::KkvDerivedDataProperties as
   jsi::traits::NewWithRuntime>::with_runtime */

void __rustcall
<record_mapper::database::kkv::js::KkvDerivedDataProperties_as_jsi::traits::NewWithRuntime>::
with_runtime(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar3,&DAT_002cf39c,6);
                    /* try { // try from 006f6848 to 006f685b has its CatchHandler @ 006f689c */
  uVar2 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar3,&DAT_002cf3cb,0xd);
                    /* try { // try from 006f685c to 006f6873 has its CatchHandler @ 006f688c */
  uVar3 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar3,"memoized",8);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}


// ===== 006f68b4  <record_mapper::database::partition::js::PartitionDerivedData_as_jsi::object::ToObject>::to_object =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::partition::js::PartitionDerivedData as
   jsi::object::ToObject>::to_object */

undefined8 __rustcall
<record_mapper::database::partition::js::PartitionDerivedData_as_jsi::object::ToObject>::to_object
          (long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte bVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined1 *local_70;
  code *pcStack_68;
  undefined1 uStack_41;
  
  auVar21 = <jsi::handle::jsi::handle::RuntimeHandle>::state(param_2);
  plVar12 = auVar21._8_8_;
  puVar6 = auVar21._0_8_;
  lVar11 = *plVar12;
  uVar2 = plVar12[1];
  uVar16 = *param_2;
  lVar13 = 0;
  uVar14 = uVar2 & 0x1c78811c439d2a75;
  uVar19 = *(undefined8 *)(lVar11 + uVar14);
  uVar20 = NEON_cmeq(uVar19,0xe0e0e0e0e0e0e0e,1);
  uVar20 = uVar20 & 0x8080808080808080;
  while( true ) {
    for (; uVar20 != 0; uVar20 = uVar20 - 1 & uVar20) {
      uVar3 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar15 = (undefined8 *)
                (lVar11 + (uVar14 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                          -0x20);
      if (puVar15[-3] == -0x1f29263efc47779f && puVar15[-4] == 0x636424bac43b34bf)
      goto LAB_006f6a74;
    }
    uVar19 = NEON_cmeq(uVar19,0xffffffffffffffff,1);
    bVar18 = NEON_umaxv(uVar19,1);
    if ((bVar18 & 1) != 0) break;
    lVar13 = lVar13 + 8;
    uVar14 = uVar14 + lVar13 & uVar2;
    uVar19 = *(undefined8 *)(lVar11 + uVar14);
    uVar20 = NEON_cmeq(uVar19,0xe0e0e0e0e0e0e0e,1);
    uVar20 = uVar20 & 0x8080808080808080;
  }
  if (plVar12[2] == 0) {
                    /* try { // try from 006f6bd0 to 006f6be3 has its CatchHandler @ 006f6c50 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (plVar12,1,plVar12 + 4,1);
  }
                    /* try { // try from 006f69b4 to 006f69c7 has its CatchHandler @ 006f6c50 */
  puVar7 = (undefined1 *)jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar16,&DAT_002cf39c,6);
                    /* try { // try from 006f69c8 to 006f69df has its CatchHandler @ 006f6c3c */
  pcStack_68 = (code *)jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar16,"memoized",8);
  local_70 = puVar7;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar8 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 006f6c0c to 006f6c17 has its CatchHandler @ 006f6c60 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x10);
  }
  puVar8[1] = pcStack_68;
  *puVar8 = local_70;
  puVar1 = (undefined8 *)*plVar12;
  uVar2 = plVar12[1];
  uVar20 = uVar2 & 0x1c78811c439d2a75;
  uVar14 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar20),0,1);
  if (uVar14 == 0) {
    lVar13 = 8;
    do {
      uVar20 = uVar20 + lVar13;
      lVar13 = lVar13 + 8;
      uVar20 = uVar20 & uVar2;
      uVar14 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar20),0,1);
    } while (uVar14 == 0);
  }
  uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
  uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
  uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
  uVar14 = uVar20 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar2;
  uVar20 = (ulong)*(char *)((long)puVar1 + uVar14);
  if (-1 < *(char *)((long)puVar1 + uVar14)) {
    uVar20 = NEON_cmlt(*puVar1,0,1);
    uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
    uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar14 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
    uVar20 = (ulong)*(byte *)((long)puVar1 + uVar14);
  }
  *(undefined1 *)((long)puVar1 + uVar14) = 0xe;
  puVar15 = puVar1 + uVar14 * -4;
  *(undefined1 *)((long)puVar1 + (uVar14 - 8 & uVar2) + 8) = 0xe;
  puVar15[-4] = 0x636424bac43b34bf;
  puVar15[-3] = 0xe0d6d9c103b88861;
  puVar15[-2] = puVar8;
  puVar15[-1] = &PTR_FUN_00ad4ad0;
  plVar12[3] = plVar12[3] + 1;
  plVar12[2] = plVar12[2] - (uVar20 & 1);
LAB_006f6a74:
  uVar19 = *(undefined8 *)puVar15[-2];
  uVar16 = ((undefined8 *)puVar15[-2])[1];
                    /* try { // try from 006f6a7c to 006f6a83 has its CatchHandler @ 006f6c50 */
  uVar9 = <jsi::object::[1]::jsi::object::Object>::new(param_2);
                    /* try { // try from 006f6a84 to 006f6a93 has its CatchHandler @ 006f6c58 */
  uVar10 = <jsi::integer::Integer_as_jsi::value::ToValue>::to_value(param_1,param_2);
  uVar17 = *param_2;
                    /* try { // try from 006f6a9c to 006f6ab3 has its CatchHandler @ 006f6c88 */
  lVar13 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(uVar9);
  if (lVar13 == 0) {
    pcStack_68 = FUN_006f5f08;
  }
  else {
    lVar11 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                       (uVar19);
    if (lVar11 != 0) {
                    /* try { // try from 006f6abc to 006f6ad7 has its CatchHandler @ 006f6c58 */
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar17,lVar13,lVar11,uVar10);
      uVar19 = <jsi::object::Object_as_jsi::value::ToValue>::to_value(param_1 + 8,param_2);
      uVar10 = *param_2;
                    /* try { // try from 006f6ae0 to 006f6af7 has its CatchHandler @ 006f6c74 */
      lVar13 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                         (uVar9);
      if (lVar13 == 0) {
        pcStack_68 = FUN_006f5f08;
      }
      else {
        lVar11 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                           (uVar16);
        if (lVar11 != 0) {
                    /* try { // try from 006f6b00 to 006f6b0f has its CatchHandler @ 006f6c58 */
          jsi_sys::ffi::base::ffi::Object_setProperty(uVar10,lVar13,lVar11,uVar19);
          do {
            uVar20 = *puVar6;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar5) {
              *puVar6 = uVar20 - 0x10;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar20 & 0xfffffffffffffff2) == 0x12) {
            <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_shared_slow
                      (puVar6);
          }
          return uVar9;
        }
        pcStack_68 = FUN_006f5f00;
      }
      local_70 = &uStack_41;
                    /* try { // try from 006f6bac to 006f6bbf has its CatchHandler @ 006f6c74 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002b2091,&local_70,&PTR_s__root__cargo_registry_src_index__00ad4b50);
    }
    pcStack_68 = FUN_006f5f00;
  }
  local_70 = &uStack_41;
                    /* try { // try from 006f6b74 to 006f6b87 has its CatchHandler @ 006f6c88 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_70,&PTR_s__root__cargo_registry_src_index__00ad4b50);
}


// ===== 006f6cdc  FUN_006f6cdc =====

void FUN_006f6cdc(undefined8 *param_1)

{
  <core::any::TypeId_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 006f6ce4  FUN_006f6ce4 =====

void FUN_006f6ce4(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006f6cf8  <record_mapper::snowflake::SnowflakeInner_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::snowflake::SnowflakeInner as core::str::traits::FromStr>::from_str */

void __rustcall
<record_mapper::snowflake::SnowflakeInner_as_core::str::traits::FromStr>::from_str
          (undefined1 *param_1)

{
  char local_30;
  undefined1 local_2f;
  undefined8 local_28;
  
  <core::num::nonzero::NonZero<u64>as_core::str::traits::FromStr>::from_str(&local_30);
  if (local_30 == '\x01') {
    param_1[1] = local_2f;
    *param_1 = 1;
    return;
  }
  *(undefined8 *)(param_1 + 8) = local_28;
  *param_1 = 0;
  return;
}


// ===== 006f6d5c  <record_mapper::database::kkv::js::KkvDerivedData_as_jsi::object::ToObject>::to_object =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::js::KkvDerivedData as jsi::object::ToObject>::to_object */

undefined8 __rustcall
<record_mapper::database::kkv::js::KkvDerivedData_as_jsi::object::ToObject>::to_object
          (long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte bVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined1 *local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined1 uStack_61;
  
  auVar19 = <jsi::handle::jsi::handle::RuntimeHandle>::state(param_2);
  plVar10 = auVar19._8_8_;
  puVar6 = auVar19._0_8_;
  lVar9 = *plVar10;
  uVar2 = plVar10[1];
  uVar14 = *param_2;
  lVar11 = 0;
  uVar12 = uVar2 & 0x32e236eb3072dde3;
  uVar17 = *(undefined8 *)(lVar9 + uVar12);
  uVar18 = NEON_cmeq(uVar17,0x1919191919191919,1);
  uVar18 = uVar18 & 0x8080808080808080;
  while( true ) {
    for (; uVar18 != 0; uVar18 = uVar18 - 1 & uVar18) {
      uVar3 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar13 = (undefined8 *)
                (lVar9 + (uVar12 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                         -0x20);
      if (puVar13[-3] == 0x1a22dbf83adc2097 && puVar13[-4] == -0x3bdf2514fa341f3d)
      goto LAB_006f6f40;
    }
    uVar17 = NEON_cmeq(uVar17,0xffffffffffffffff,1);
    bVar16 = NEON_umaxv(uVar17,1);
    if ((bVar16 & 1) != 0) break;
    lVar11 = lVar11 + 8;
    uVar12 = uVar12 + lVar11 & uVar2;
    uVar17 = *(undefined8 *)(lVar9 + uVar12);
    uVar18 = NEON_cmeq(uVar17,0x1919191919191919,1);
    uVar18 = uVar18 & 0x8080808080808080;
  }
  if (plVar10[2] == 0) {
                    /* try { // try from 006f7114 to 006f7127 has its CatchHandler @ 006f71a4 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (plVar10,1,plVar10 + 4,1);
  }
                    /* try { // try from 006f6e5c to 006f6e6f has its CatchHandler @ 006f71a4 */
  puVar7 = (undefined1 *)jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar14,&DAT_002cf39c,6);
                    /* try { // try from 006f6e70 to 006f6e87 has its CatchHandler @ 006f7190 */
  uVar17 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar14,&DAT_002cf3cb,0xd);
                    /* try { // try from 006f6e88 to 006f6e9f has its CatchHandler @ 006f7180 */
  local_70 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar14,"memoized",8);
  local_80 = puVar7;
  pcStack_78 = (code *)uVar17;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar8 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 006f7150 to 006f715b has its CatchHandler @ 006f71b4 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  puVar8[1] = pcStack_78;
  *puVar8 = local_80;
  puVar8[2] = local_70;
  puVar1 = (undefined8 *)*plVar10;
  uVar2 = plVar10[1];
  uVar18 = uVar2 & 0x32e236eb3072dde3;
  uVar12 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar18),0,1);
  if (uVar12 == 0) {
    lVar11 = 8;
    do {
      uVar18 = uVar18 + lVar11;
      lVar11 = lVar11 + 8;
      uVar18 = uVar18 & uVar2;
      uVar12 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar18),0,1);
    } while (uVar12 == 0);
  }
  uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
  uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
  uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uVar12 = uVar18 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar2;
  uVar18 = (ulong)*(char *)((long)puVar1 + uVar12);
  if (-1 < *(char *)((long)puVar1 + uVar12)) {
    uVar18 = NEON_cmlt(*puVar1,0,1);
    uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar12 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
    uVar18 = (ulong)*(byte *)((long)puVar1 + uVar12);
  }
  *(undefined1 *)((long)puVar1 + uVar12) = 0x19;
  puVar13 = puVar1 + uVar12 * -4;
  *(undefined1 *)((long)puVar1 + (uVar12 - 8 & uVar2) + 8) = 0x19;
  puVar13[-4] = 0xc420daeb05cbe0c3;
  puVar13[-3] = 0x1a22dbf83adc2097;
  puVar13[-2] = puVar8;
  puVar13[-1] = &PTR_FUN_00ad4ab0;
  plVar10[3] = plVar10[3] + 1;
  plVar10[2] = plVar10[2] - (uVar18 & 1);
LAB_006f6f40:
  puVar8 = (undefined8 *)puVar13[-2];
                    /* try { // try from 006f6f44 to 006f6f4b has its CatchHandler @ 006f71a4 */
  uVar17 = <jsi::object::[1]::jsi::object::Object>::new(param_2);
                    /* try { // try from 006f6f4c to 006f6f5b has its CatchHandler @ 006f71ac */
  uVar14 = <jsi::integer::Integer_as_jsi::value::ToValue>::to_value(param_1,param_2);
  uVar15 = *param_2;
                    /* try { // try from 006f6f64 to 006f6f7b has its CatchHandler @ 006f71f0 */
  lVar11 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(uVar17);
  if (lVar11 == 0) {
    pcStack_78 = FUN_006f5f08;
  }
  else {
    lVar9 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*puVar8);
    if (lVar9 != 0) {
                    /* try { // try from 006f6f84 to 006f6f9f has its CatchHandler @ 006f71ac */
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar15,lVar11,lVar9,uVar14);
      uVar14 = <jsi::integer::Integer_as_jsi::value::ToValue>::to_value(param_1 + 8,param_2);
      uVar15 = *param_2;
                    /* try { // try from 006f6fa8 to 006f6fbf has its CatchHandler @ 006f71dc */
      lVar11 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                         (uVar17);
      if (lVar11 == 0) {
        pcStack_78 = FUN_006f5f08;
      }
      else {
        lVar9 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                          (puVar8[1]);
        if (lVar9 != 0) {
                    /* try { // try from 006f6fc8 to 006f6fe3 has its CatchHandler @ 006f71ac */
          jsi_sys::ffi::base::ffi::Object_setProperty(uVar15,lVar11,lVar9,uVar14);
          uVar14 = <jsi::object::Object_as_jsi::value::ToValue>::to_value(param_1 + 0x10,param_2);
          uVar15 = *param_2;
                    /* try { // try from 006f6fec to 006f7003 has its CatchHandler @ 006f71c8 */
          lVar11 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                             (uVar17);
          if (lVar11 == 0) {
            pcStack_78 = FUN_006f5f08;
          }
          else {
            lVar9 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::
                    __get(puVar8[2]);
            if (lVar9 != 0) {
                    /* try { // try from 006f700c to 006f701b has its CatchHandler @ 006f71ac */
              jsi_sys::ffi::base::ffi::Object_setProperty(uVar15,lVar11,lVar9,uVar14);
              do {
                uVar18 = *puVar6;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                if (bVar5) {
                  *puVar6 = uVar18 - 0x10;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar18 & 0xfffffffffffffff2) == 0x12) {
                <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::
                unlock_shared_slow(puVar6);
              }
              return uVar17;
            }
            pcStack_78 = FUN_006f5f00;
          }
          local_80 = &uStack_61;
                    /* try { // try from 006f70f0 to 006f7103 has its CatchHandler @ 006f71c8 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_002b2091,&local_80,&PTR_s__root__cargo_registry_src_index__00ad4b50);
        }
        pcStack_78 = FUN_006f5f00;
      }
      local_80 = &uStack_61;
                    /* try { // try from 006f70b8 to 006f70cb has its CatchHandler @ 006f71dc */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002b2091,&local_80,&PTR_s__root__cargo_registry_src_index__00ad4b50);
    }
    pcStack_78 = FUN_006f5f00;
  }
  local_80 = &uStack_61;
                    /* try { // try from 006f7080 to 006f7093 has its CatchHandler @ 006f71f0 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_80,&PTR_s__root__cargo_registry_src_index__00ad4b50);
}


// ===== 006f7244  <record_mapper::database::partition::js::PartitionDerivedData_as_jsi::value::ToValue>::to_value =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::partition::js::PartitionDerivedData as jsi::value::ToValue>::to_value
    */

void __rustcall
<record_mapper::database::partition::js::PartitionDerivedData_as_jsi::value::ToValue>::to_value
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = <record_mapper::database::partition::js::PartitionDerivedData_as_jsi::object::ToObject>::
          to_object();
  <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar1,param_2);
  return;
}


// ===== 006f7268  <record_mapper::database::kkv::js::KkvDerivedData_as_jsi::value::ToValue>::to_value =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::js::KkvDerivedData as jsi::value::ToValue>::to_value */

void __rustcall
<record_mapper::database::kkv::js::KkvDerivedData_as_jsi::value::ToValue>::to_value
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = <record_mapper::database::kkv::js::KkvDerivedData_as_jsi::object::ToObject>::to_object();
  <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar1,param_2);
  return;
}


// ===== 006f728c  <record_mapper::record::RecordTypeTagSymbol_as_jsi::traits::NewWithRuntime>::with_runtime =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::record::RecordTypeTagSymbol as jsi::traits::NewWithRuntime>::with_runtime */

void __rustcall
<record_mapper::record::RecordTypeTagSymbol_as_jsi::traits::NewWithRuntime>::with_runtime
          (undefined8 param_1)

{
  <jsi::symbol::jsi::symbol::Symbol>::for(param_1,&DAT_002cf3d8,0x13);
  return;
}


// ===== 006f729c  <record_mapper::database::kkv::test_record::StringKey_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::test_record::StringKey as core::fmt::Display>::fmt */

void __rustcall
<record_mapper::database::kkv::test_record::StringKey_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  code *pcStack_18;
  
  pcStack_18 = FUN_006f91f0;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002ab692,&local_20);
  return;
}


// ===== 006f72d8  <record_mapper::database::kkv::KkvGetRecordError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::KkvGetRecordError as core::fmt::Display>::fmt */

void __rustcall
<record_mapper::database::kkv::KkvGetRecordError_as_core::fmt::Display>::fmt
          (char *param_1,undefined8 param_2)

{
  if (*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002cf410,0x3d);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002cf3eb,0x25);
  return;
}


// ===== 006f7308  <record_mapper::memory_size::ApproximateHeapSizeProperties_as_jsi::traits::NewWithRuntime>::with_runtime =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::memory_size::ApproximateHeapSizeProperties as
   jsi::traits::NewWithRuntime>::with_runtime */

void __rustcall
<record_mapper::memory_size::ApproximateHeapSizeProperties_as_jsi::traits::NewWithRuntime>::
with_runtime(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar2,&DAT_002cf44d,9);
                    /* try { // try from 006f7338 to 006f734b has its CatchHandler @ 006f7360 */
  uVar2 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar2,&DAT_002a13b8,8);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


// ===== 006f7378  <record_mapper::memory_size::ApproximateHeapSize_as_jsi::object::ToObject>::to_object =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::memory_size::ApproximateHeapSize as jsi::object::ToObject>::to_object */

undefined8 __rustcall
<record_mapper::memory_size::ApproximateHeapSize_as_jsi::object::ToObject>::to_object
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte bVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined1 *local_70;
  code *pcStack_68;
  undefined1 uStack_41;
  
  auVar21 = <jsi::handle::jsi::handle::RuntimeHandle>::state(param_2);
  plVar12 = auVar21._8_8_;
  puVar6 = auVar21._0_8_;
  lVar11 = *plVar12;
  uVar2 = plVar12[1];
  uVar16 = *param_2;
  lVar13 = 0;
  uVar14 = uVar2 & 0x2bf5667be43ce3bc;
  uVar19 = *(undefined8 *)(lVar11 + uVar14);
  uVar20 = NEON_cmeq(uVar19,0x1515151515151515,1);
  uVar20 = uVar20 & 0x8080808080808080;
  while( true ) {
    for (; uVar20 != 0; uVar20 = uVar20 - 1 & uVar20) {
      uVar3 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar15 = (undefined8 *)
                (lVar11 + (uVar14 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                          -0x20);
      if (puVar15[-3] == 0x4fdcb202463261cc && puVar15[-4] == 0x4faadd165b18cfa2) goto LAB_006f7538;
    }
    uVar19 = NEON_cmeq(uVar19,0xffffffffffffffff,1);
    bVar18 = NEON_umaxv(uVar19,1);
    if ((bVar18 & 1) != 0) break;
    lVar13 = lVar13 + 8;
    uVar14 = uVar14 + lVar13 & uVar2;
    uVar19 = *(undefined8 *)(lVar11 + uVar14);
    uVar20 = NEON_cmeq(uVar19,0x1515151515151515,1);
    uVar20 = uVar20 & 0x8080808080808080;
  }
  if (plVar12[2] == 0) {
                    /* try { // try from 006f76a4 to 006f76b7 has its CatchHandler @ 006f7724 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (plVar12,1,plVar12 + 4,1);
  }
                    /* try { // try from 006f7478 to 006f748b has its CatchHandler @ 006f7724 */
  puVar7 = (undefined1 *)jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar16,&DAT_002cf44d,9);
                    /* try { // try from 006f748c to 006f74a3 has its CatchHandler @ 006f7710 */
  pcStack_68 = (code *)jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar16,&DAT_002a13b8,8);
  local_70 = puVar7;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar8 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 006f76e0 to 006f76eb has its CatchHandler @ 006f7734 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x10);
  }
  puVar8[1] = pcStack_68;
  *puVar8 = local_70;
  puVar1 = (undefined8 *)*plVar12;
  uVar2 = plVar12[1];
  uVar20 = uVar2 & 0x2bf5667be43ce3bc;
  uVar14 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar20),0,1);
  if (uVar14 == 0) {
    lVar13 = 8;
    do {
      uVar20 = uVar20 + lVar13;
      lVar13 = lVar13 + 8;
      uVar20 = uVar20 & uVar2;
      uVar14 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar20),0,1);
    } while (uVar14 == 0);
  }
  uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
  uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
  uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
  uVar14 = uVar20 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar2;
  uVar20 = (ulong)*(char *)((long)puVar1 + uVar14);
  if (-1 < *(char *)((long)puVar1 + uVar14)) {
    uVar20 = NEON_cmlt(*puVar1,0,1);
    uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
    uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar14 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
    uVar20 = (ulong)*(byte *)((long)puVar1 + uVar14);
  }
  *(undefined1 *)((long)puVar1 + uVar14) = 0x15;
  puVar15 = puVar1 + uVar14 * -4;
  *(undefined1 *)((long)puVar1 + (uVar14 - 8 & uVar2) + 8) = 0x15;
  puVar15[-4] = 0x4faadd165b18cfa2;
  puVar15[-3] = 0x4fdcb202463261cc;
  puVar15[-2] = puVar8;
  puVar15[-1] = &PTR_FUN_00ad4a30;
  plVar12[3] = plVar12[3] + 1;
  plVar12[2] = plVar12[2] - (uVar20 & 1);
LAB_006f7538:
  uVar19 = *(undefined8 *)puVar15[-2];
  uVar16 = ((undefined8 *)puVar15[-2])[1];
                    /* try { // try from 006f7540 to 006f7547 has its CatchHandler @ 006f7724 */
  uVar9 = <jsi::object::[1]::jsi::object::Object>::new(param_2);
                    /* try { // try from 006f7550 to 006f755f has its CatchHandler @ 006f772c */
  uVar10 = FUN_006f7844(*param_1,param_1[1],param_2);
  uVar10 = <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar10,param_2);
  uVar17 = *param_2;
                    /* try { // try from 006f7568 to 006f757f has its CatchHandler @ 006f775c */
  lVar13 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(uVar9);
  if (lVar13 == 0) {
    pcStack_68 = FUN_006f5f08;
  }
  else {
    lVar11 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                       (uVar19);
    if (lVar11 != 0) {
                    /* try { // try from 006f7588 to 006f75ab has its CatchHandler @ 006f772c */
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar17,lVar13,lVar11,uVar10);
      uVar19 = FUN_006f7844(param_1[2],param_1[3],param_2);
      uVar19 = <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar19,param_2);
      uVar10 = *param_2;
                    /* try { // try from 006f75b4 to 006f75cb has its CatchHandler @ 006f7748 */
      lVar13 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                         (uVar9);
      if (lVar13 == 0) {
        pcStack_68 = FUN_006f5f08;
      }
      else {
        lVar11 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                           (uVar16);
        if (lVar11 != 0) {
                    /* try { // try from 006f75d4 to 006f75e3 has its CatchHandler @ 006f772c */
          jsi_sys::ffi::base::ffi::Object_setProperty(uVar10,lVar13,lVar11,uVar19);
          do {
            uVar20 = *puVar6;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar5) {
              *puVar6 = uVar20 - 0x10;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar20 & 0xfffffffffffffff2) == 0x12) {
            <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_shared_slow
                      (puVar6);
          }
          return uVar9;
        }
        pcStack_68 = FUN_006f5f00;
      }
      local_70 = &uStack_41;
                    /* try { // try from 006f7680 to 006f7693 has its CatchHandler @ 006f7748 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002b2091,&local_70,&PTR_s__root__cargo_registry_src_index__00ad4b50);
    }
    pcStack_68 = FUN_006f5f00;
  }
  local_70 = &uStack_41;
                    /* try { // try from 006f7648 to 006f765b has its CatchHandler @ 006f775c */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_70,&PTR_s__root__cargo_registry_src_index__00ad4b50);
}


// ===== 006f77b0  <record_mapper::memory_size::ApproximateHeapSize_as_jsi::value::ToValue>::to_value =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::memory_size::ApproximateHeapSize as jsi::value::ToValue>::to_value */

void __rustcall
<record_mapper::memory_size::ApproximateHeapSize_as_jsi::value::ToValue>::to_value
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = <record_mapper::memory_size::ApproximateHeapSize_as_jsi::object::ToObject>::to_object();
  <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar1,param_2);
  return;
}


// ===== 006f77d4  <record_mapper::memory_size::ApproximateHeapUsageValuesProperties_as_jsi::traits::NewWithRuntime>::with_runtime =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::memory_size::ApproximateHeapUsageValuesProperties as
   jsi::traits::NewWithRuntime>::with_runtime */

void __rustcall
<record_mapper::memory_size::ApproximateHeapUsageValuesProperties_as_jsi::traits::NewWithRuntime>::
with_runtime(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar2,&DAT_002bd26c,4);
                    /* try { // try from 006f7804 to 006f7817 has its CatchHandler @ 006f782c */
  uVar2 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar2,&DAT_002cf456,9);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


// ===== 006f7844  FUN_006f7844 =====

undefined8 FUN_006f7844(ulong param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 *local_70;
  code *pcStack_68;
  undefined1 uStack_41;
  
  puVar4 = (ulong *)<jsi::handle::jsi::handle::RuntimeHandle>::state(param_3);
                    /* try { // try from 006f7880 to 006f788f has its CatchHandler @ 006f79d4 */
  puVar5 = (undefined8 *)FUN_006f5758(*param_3);
  uVar10 = *puVar5;
  uVar1 = puVar5[1];
  uVar6 = <jsi::object::[1]::jsi::object::Object>::new(param_3);
                    /* try { // try from 006f7898 to 006f789b has its CatchHandler @ 006f79dc */
  uVar7 = <jsi::value::[0]::jsi::value::Value>::double((double)param_1);
  uVar12 = *param_3;
                    /* try { // try from 006f78a4 to 006f78bb has its CatchHandler @ 006f79f8 */
  lVar8 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(uVar6);
  if (lVar8 == 0) {
    pcStack_68 = FUN_006f5f08;
  }
  else {
    lVar9 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (uVar10);
    if (lVar9 != 0) {
                    /* try { // try from 006f78c4 to 006f78db has its CatchHandler @ 006f79dc */
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar12,lVar8,lVar9,uVar7);
      uVar10 = <jsi::value::[0]::jsi::value::Value>::double((double)param_2);
      uVar7 = *param_3;
                    /* try { // try from 006f78e4 to 006f78fb has its CatchHandler @ 006f79e4 */
      lVar8 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(uVar6)
      ;
      if (lVar8 == 0) {
        pcStack_68 = FUN_006f5f08;
      }
      else {
        lVar9 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                          (uVar1);
        if (lVar9 != 0) {
                    /* try { // try from 006f7904 to 006f7913 has its CatchHandler @ 006f79dc */
          jsi_sys::ffi::base::ffi::Object_setProperty(uVar7,lVar8,lVar9,uVar10);
          do {
            uVar11 = *puVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar3) {
              *puVar4 = uVar11 - 0x10;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar11 & 0xfffffffffffffff2) == 0x12) {
            <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_shared_slow
                      (puVar4);
          }
          return uVar6;
        }
        pcStack_68 = FUN_006f5f00;
      }
      local_70 = &uStack_41;
                    /* try { // try from 006f79b0 to 006f79c3 has its CatchHandler @ 006f79e4 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002b2091,&local_70,&PTR_s__root__cargo_registry_src_index__00ad4b50);
    }
    pcStack_68 = FUN_006f5f00;
  }
  local_70 = &uStack_41;
                    /* try { // try from 006f7978 to 006f798b has its CatchHandler @ 006f79f8 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_70,&PTR_s__root__cargo_registry_src_index__00ad4b50);
}


// ===== 006f7a4c  <record_mapper::memory_size::MemoryStatisticsProperties_as_jsi::traits::NewWithRuntime>::with_runtime =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::memory_size::MemoryStatisticsProperties as
   jsi::traits::NewWithRuntime>::with_runtime */

void __rustcall
<record_mapper::memory_size::MemoryStatisticsProperties_as_jsi::traits::NewWithRuntime>::
with_runtime(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  uVar1 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar6,&DAT_002cf45f,5);
                    /* try { // try from 006f7a84 to 006f7a97 has its CatchHandler @ 006f7b5c */
  uVar2 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar6,&DAT_002cf464,0x17);
                    /* try { // try from 006f7a98 to 006f7aaf has its CatchHandler @ 006f7b4c */
  uVar3 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar6,&DAT_002cf47b,7);
                    /* try { // try from 006f7ab0 to 006f7ac7 has its CatchHandler @ 006f7b3c */
  uVar4 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar6,&DAT_002cf482,7);
                    /* try { // try from 006f7ac8 to 006f7adf has its CatchHandler @ 006f7b2c */
  uVar5 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar6,&DAT_002cf489,7);
                    /* try { // try from 006f7ae0 to 006f7af7 has its CatchHandler @ 006f7b1c */
  uVar6 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar6,&DAT_002cf490,7);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  return;
}


// ===== 006f7b74  <record_mapper::memory_size::MemoryStatistics_as_jsi::object::ToObject>::to_object =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::memory_size::MemoryStatistics as jsi::object::ToObject>::to_object */

undefined8 __rustcall
<record_mapper::memory_size::MemoryStatistics_as_jsi::object::ToObject>::to_object
          (undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte bVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 *local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  
  auVar23 = <jsi::handle::jsi::handle::RuntimeHandle>::state(param_2);
  plVar11 = auVar23._8_8_;
  puVar5 = auVar23._0_8_;
  lVar7 = *plVar11;
  uVar1 = plVar11[1];
  lVar12 = 0;
  uVar13 = uVar1 & 0xa16f9513c4da06e2;
  uVar19 = *(undefined8 *)(lVar7 + uVar13);
  uVar20 = NEON_cmeq(uVar19,0x5050505050505050,1);
  uVar20 = uVar20 & 0x8080808080808080;
  while( true ) {
    for (; uVar20 != 0; uVar20 = uVar20 - 1 & uVar20) {
      uVar2 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar14 = (undefined8 *)
                (lVar7 + (uVar13 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar1) *
                         -0x20);
      if (puVar14[-3] == 0x63057875e5ebf4da && puVar14[-4] == 0x3f4358011d94903e) goto LAB_006f7d1c;
    }
    uVar19 = NEON_cmeq(uVar19,0xffffffffffffffff,1);
    bVar18 = NEON_umaxv(uVar19,1);
    if ((bVar18 & 1) != 0) break;
    lVar12 = lVar12 + 8;
    uVar13 = uVar13 + lVar12 & uVar1;
    uVar19 = *(undefined8 *)(lVar7 + uVar13);
    uVar20 = NEON_cmeq(uVar19,0x5050505050505050,1);
    uVar20 = uVar20 & 0x8080808080808080;
  }
  if (plVar11[2] == 0) {
                    /* try { // try from 006f81c4 to 006f81d7 has its CatchHandler @ 006f8230 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (plVar11,1,plVar11 + 4,1);
  }
                    /* try { // try from 006f7c74 to 006f7d2b has its CatchHandler @ 006f8230 */
  <record_mapper::memory_size::MemoryStatisticsProperties_as_jsi::traits::NewWithRuntime>::
  with_runtime(&local_a8,param_2);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar6 = (undefined8 *)FUN_004b25a4(0x30,8);
  if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 006f8200 to 006f820b has its CatchHandler @ 006f8250 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
  puVar6[1] = pcStack_a0;
  *puVar6 = local_a8;
  puVar6[3] = uStack_90;
  puVar6[2] = local_98;
  puVar6[5] = uStack_80;
  puVar6[4] = local_88;
  puVar9 = (undefined8 *)*plVar11;
  uVar1 = plVar11[1];
  uVar20 = uVar1 & 0xa16f9513c4da06e2;
  uVar13 = NEON_cmlt(*(undefined8 *)((long)puVar9 + uVar20),0,1);
  if (uVar13 == 0) {
    lVar12 = 8;
    do {
      uVar20 = uVar20 + lVar12;
      lVar12 = lVar12 + 8;
      uVar20 = uVar20 & uVar1;
      uVar13 = NEON_cmlt(*(undefined8 *)((long)puVar9 + uVar20),0,1);
    } while (uVar13 == 0);
  }
  uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  uVar13 = uVar20 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar1;
  uVar20 = (ulong)*(char *)((long)puVar9 + uVar13);
  if (-1 < *(char *)((long)puVar9 + uVar13)) {
    uVar20 = NEON_cmlt(*puVar9,0,1);
    uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
    uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar13 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
    uVar20 = (ulong)*(byte *)((long)puVar9 + uVar13);
  }
  *(undefined1 *)((long)puVar9 + uVar13) = 0x50;
  puVar14 = puVar9 + uVar13 * -4;
  *(undefined1 *)((long)puVar9 + (uVar13 - 8 & uVar1) + 8) = 0x50;
  puVar14[-4] = 0x3f4358011d94903e;
  puVar14[-3] = 0x63057875e5ebf4da;
  puVar14[-2] = puVar6;
  puVar14[-1] = &PTR_FUN_00ad4a10;
  plVar11[3] = plVar11[3] + 1;
  plVar11[2] = plVar11[2] - (uVar20 & 1);
LAB_006f7d1c:
  puVar6 = (undefined8 *)puVar14[-2];
  uVar19 = <jsi::object::[1]::jsi::object::Object>::new(param_2);
  uVar17 = NEON_ucvtf(param_1[8]);
                    /* try { // try from 006f7d34 to 006f7d37 has its CatchHandler @ 006f8248 */
  uVar17 = <jsi::value::[0]::jsi::value::Value>::double(uVar17);
  uVar15 = *param_2;
                    /* try { // try from 006f7d40 to 006f7d57 has its CatchHandler @ 006f8328 */
  lVar12 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(uVar19);
  if (lVar12 == 0) {
    pcStack_a0 = FUN_006f5f08;
  }
  else {
    lVar7 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*puVar6);
    if (lVar7 != 0) {
                    /* try { // try from 006f7d60 to 006f7d7b has its CatchHandler @ 006f8248 */
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar15,lVar12,lVar7,uVar17);
      uVar17 = NEON_ucvtf(param_1[9]);
      uVar17 = <jsi::value::[0]::jsi::value::Value>::double(uVar17);
      uVar15 = *param_2;
                    /* try { // try from 006f7d84 to 006f7d9b has its CatchHandler @ 006f8314 */
      lVar12 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                         (uVar19);
      if (lVar12 == 0) {
        pcStack_a0 = FUN_006f5f08;
      }
      else {
        lVar7 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                          (puVar6[1]);
        if (lVar7 != 0) {
                    /* try { // try from 006f7da4 to 006f7dc7 has its CatchHandler @ 006f8248 */
          jsi_sys::ffi::base::ffi::Object_setProperty(uVar15,lVar12,lVar7,uVar17);
          uVar17 = FUN_006f7844(*param_1,param_1[1],param_2);
          uVar17 = <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar17,param_2);
          uVar15 = *param_2;
                    /* try { // try from 006f7dd0 to 006f7de7 has its CatchHandler @ 006f8300 */
          lVar12 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                             (uVar19);
          if (lVar12 == 0) {
            pcStack_a0 = FUN_006f5f08;
          }
          else {
            lVar7 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::
                    __get(puVar6[2]);
            if (lVar7 != 0) {
                    /* try { // try from 006f7df0 to 006f7e13 has its CatchHandler @ 006f8248 */
              jsi_sys::ffi::base::ffi::Object_setProperty(uVar15,lVar12,lVar7,uVar17);
              uVar17 = FUN_006f7844(param_1[2],param_1[3],param_2);
              uVar17 = <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar17,param_2);
              uVar15 = *param_2;
                    /* try { // try from 006f7e1c to 006f7e33 has its CatchHandler @ 006f82ec */
              lVar12 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::
                       __get(uVar19);
              if (lVar12 == 0) {
                pcStack_a0 = FUN_006f5f08;
              }
              else {
                lVar7 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>
                        ::__get(puVar6[3]);
                if (lVar7 != 0) {
                    /* try { // try from 006f7e3c to 006f7e5f has its CatchHandler @ 006f8248 */
                  jsi_sys::ffi::base::ffi::Object_setProperty(uVar15,lVar12,lVar7,uVar17);
                  uVar17 = FUN_006f7844(param_1[4],param_1[5],param_2);
                  uVar17 = <jsi::object::Object_as_jsi::value::IntoValue>::into_value
                                     (uVar17,param_2);
                  uVar15 = *param_2;
                    /* try { // try from 006f7e68 to 006f7e7f has its CatchHandler @ 006f82d8 */
                  lVar12 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>
                           ::__get(uVar19);
                  if (lVar12 == 0) {
                    pcStack_a0 = FUN_006f5f08;
                  }
                  else {
                    lVar7 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>
                            ::__get(puVar6[4]);
                    if (lVar7 != 0) {
                    /* try { // try from 006f7e88 to 006f7ea3 has its CatchHandler @ 006f8248 */
                      jsi_sys::ffi::base::ffi::Object_setProperty(uVar15,lVar12,lVar7,uVar17);
                      uVar22 = param_1[6];
                      uVar21 = param_1[7];
                      puVar8 = (ulong *)<jsi::handle::jsi::handle::RuntimeHandle>::state(param_2);
                    /* try { // try from 006f7eac to 006f7ebb has its CatchHandler @ 006f8238 */
                      puVar9 = (undefined8 *)FUN_006f5758(*param_2);
                      uVar17 = *puVar9;
                      uVar15 = puVar9[1];
                      uVar10 = <jsi::object::[1]::jsi::object::Object>::new(param_2);
                    /* try { // try from 006f7ebc to 006f7ec7 has its CatchHandler @ 006f8240 */
                      uVar22 = <jsi::value::[0]::jsi::value::Value>::double(uVar22);
                      uVar16 = *param_2;
                    /* try { // try from 006f7ed0 to 006f7ee7 has its CatchHandler @ 006f828c */
                      lVar12 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>
                               ::__get(uVar10);
                      if (lVar12 == 0) {
                        pcStack_a0 = FUN_006f5f08;
                      }
                      else {
                        lVar7 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>
                                ::__get(uVar17);
                        if (lVar7 != 0) {
                    /* try { // try from 006f7ef0 to 006f7f07 has its CatchHandler @ 006f8240 */
                          jsi_sys::ffi::base::ffi::Object_setProperty(uVar16,lVar12,lVar7,uVar22);
                          uVar17 = <jsi::value::[0]::jsi::value::Value>::double(uVar21);
                          uVar22 = *param_2;
                    /* try { // try from 006f7f10 to 006f7f27 has its CatchHandler @ 006f8278 */
                          lVar12 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>
                                   ::__get(uVar10);
                          if (lVar12 == 0) {
                            pcStack_a0 = FUN_006f5f08;
                          }
                          else {
                            lVar7 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>
                                    ::__get(uVar15);
                            if (lVar7 != 0) {
                    /* try { // try from 006f7f30 to 006f7f3f has its CatchHandler @ 006f8240 */
                              jsi_sys::ffi::base::ffi::Object_setProperty
                                        (uVar22,lVar12,lVar7,uVar17);
                              do {
                                uVar20 = *puVar8;
                                cVar3 = '\x01';
                                bVar4 = (bool)ExclusiveMonitorPass(puVar8,0x10);
                                if (bVar4) {
                                  *puVar8 = uVar20 - 0x10;
                                  cVar3 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar3 != '\0');
                              if ((uVar20 & 0xfffffffffffffff2) == 0x12) {
                    /* try { // try from 006f8174 to 006f817b has its CatchHandler @ 006f8248 */
                                <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::
                                unlock_shared_slow(puVar8);
                              }
                    /* try { // try from 006f7f60 to 006f7f6b has its CatchHandler @ 006f8248 */
                              uVar17 = <jsi::object::Object_as_jsi::value::IntoValue>::into_value
                                                 (uVar10,param_2);
                              uVar15 = *param_2;
                    /* try { // try from 006f7f74 to 006f7f8b has its CatchHandler @ 006f8264 */
                              lVar12 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>
                                       ::__get(uVar19);
                              if (lVar12 == 0) {
                                pcStack_a0 = FUN_006f5f08;
                              }
                              else {
                                lVar7 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>
                                        ::__get(puVar6[5]);
                                if (lVar7 != 0) {
                    /* try { // try from 006f7f94 to 006f7fa3 has its CatchHandler @ 006f8248 */
                                  jsi_sys::ffi::base::ffi::Object_setProperty
                                            (uVar15,lVar12,lVar7,uVar17);
                                  do {
                                    uVar20 = *puVar5;
                                    cVar3 = '\x01';
                                    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
                                    if (bVar4) {
                                      *puVar5 = uVar20 - 0x10;
                                      cVar3 = ExclusiveMonitorsStatus();
                                    }
                                  } while (cVar3 != '\0');
                                  if ((uVar20 & 0xfffffffffffffff2) == 0x12) {
                                    <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>
                                    ::unlock_shared_slow(puVar5);
                                  }
                                  return uVar19;
                                }
                                pcStack_a0 = FUN_006f5f00;
                              }
                              local_a8 = &uStack_71;
                    /* try { // try from 006f81a0 to 006f81b3 has its CatchHandler @ 006f8264 */
                    /* WARNING: Subroutine does not return */
                              core::panicking::panic_fmt
                                        (&DAT_002b2091,&local_a8,
                                         &PTR_s__root__cargo_registry_src_index__00ad4b50);
                            }
                            pcStack_a0 = FUN_006f5f00;
                          }
                          local_a8 = &uStack_71;
                    /* try { // try from 006f815c to 006f816f has its CatchHandler @ 006f8278 */
                    /* WARNING: Subroutine does not return */
                          core::panicking::panic_fmt
                                    (&DAT_002b2091,&local_a8,
                                     &PTR_s__root__cargo_registry_src_index__00ad4b50);
                        }
                        pcStack_a0 = FUN_006f5f00;
                      }
                      local_a8 = &uStack_71;
                    /* try { // try from 006f8124 to 006f8137 has its CatchHandler @ 006f828c */
                    /* WARNING: Subroutine does not return */
                      core::panicking::panic_fmt
                                (&DAT_002b2091,&local_a8,
                                 &PTR_s__root__cargo_registry_src_index__00ad4b50);
                    }
                    pcStack_a0 = FUN_006f5f00;
                  }
                  local_a8 = &uStack_71;
                    /* try { // try from 006f80ec to 006f80ff has its CatchHandler @ 006f82d8 */
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_fmt
                            (&DAT_002b2091,&local_a8,
                             &PTR_s__root__cargo_registry_src_index__00ad4b50);
                }
                pcStack_a0 = FUN_006f5f00;
              }
              local_a8 = &uStack_71;
                    /* try { // try from 006f80b4 to 006f80c7 has its CatchHandler @ 006f82ec */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_fmt
                        (&DAT_002b2091,&local_a8,&PTR_s__root__cargo_registry_src_index__00ad4b50);
            }
            pcStack_a0 = FUN_006f5f00;
          }
          local_a8 = &uStack_71;
                    /* try { // try from 006f807c to 006f808f has its CatchHandler @ 006f8300 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_002b2091,&local_a8,&PTR_s__root__cargo_registry_src_index__00ad4b50);
        }
        pcStack_a0 = FUN_006f5f00;
      }
      local_a8 = &uStack_71;
                    /* try { // try from 006f8044 to 006f8057 has its CatchHandler @ 006f8314 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002b2091,&local_a8,&PTR_s__root__cargo_registry_src_index__00ad4b50);
    }
    pcStack_a0 = FUN_006f5f00;
  }
  local_a8 = &uStack_71;
                    /* try { // try from 006f800c to 006f801f has its CatchHandler @ 006f8328 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_a8,&PTR_s__root__cargo_registry_src_index__00ad4b50);
}


// ===== 006f837c  <record_mapper::memory_size::MemoryStatistics_as_jsi::value::ToValue>::to_value =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::memory_size::MemoryStatistics as jsi::value::ToValue>::to_value */

void __rustcall
<record_mapper::memory_size::MemoryStatistics_as_jsi::value::ToValue>::to_value
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = <record_mapper::memory_size::MemoryStatistics_as_jsi::object::ToObject>::to_object();
  <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar1,param_2);
  return;
}


// ===== 006f83a0  <record_mapper::record_value::RecordTypeTag_as_jsi::value::ToValue>::to_value =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::record_value::RecordTypeTag as jsi::value::ToValue>::to_value */

undefined8 __rustcall
<record_mapper::record_value::RecordTypeTag_as_jsi::value::ToValue>::to_value
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  uVar1 = jsi_sys::ffi::base::ffi::String_fromUtf8(*param_2,*param_1,param_1[1]);
                    /* try { // try from 006f83c8 to 006f83d3 has its CatchHandler @ 006f83f4 */
  local_28 = uVar1;
  uVar2 = <jsi::string::String_as_jsi::value::ToValue>::to_value(&local_28,param_2);
  <jsi_sys::ffi::base::ffi::JsiString_as_cxx::unique_ptr::UniquePtrTarget>::__drop(uVar1);
  return uVar2;
}


// ===== 006f840c  <record_mapper::record::GlobalRecordId_as_jsi::value::ToValue>::to_value =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::record::GlobalRecordId as jsi::value::ToValue>::to_value */

void __rustcall
<record_mapper::record::GlobalRecordId_as_jsi::value::ToValue>::to_value(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_ucvtf(*param_1);
  <jsi::value::[0]::jsi::value::Value>::double(uVar1);
  return;
}


// ===== 006f8418  <record_mapper::database::StateDatabase_as_core::default::Default>::default =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::StateDatabase as core::default::Default>::default */

void __rustcall <record_mapper::database::StateDatabase_as_core::default::Default>::default(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint7 uStack_138;
  uint7 uStack_2f;
  
  uVar4 = _UNK_00ad4b80;
  uVar3 = _DAT_00ad4b78;
  uVar2 = _UNK_00ad4b70;
  puVar1 = PTR_DAT_00ad4b68;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar5 = (undefined8 *)FUN_004b25a4(0xe8,8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[0xf] = puVar1;
    puVar5[0xe] = uVar4;
    puVar5[0x19] = uVar2;
    puVar5[0x18] = puVar1;
    puVar5[0x1b] = uVar4;
    puVar5[0x1a] = uVar3;
    puVar5[0x1c] = (ulong)uStack_2f << 8;
    puVar5[0x11] = uVar3;
    puVar5[0x10] = uVar2;
    puVar5[0x13] = puVar1;
    puVar5[0x12] = uVar4;
    puVar5[0x15] = uVar3;
    puVar5[0x14] = uVar2;
    puVar5[0x17] = (ulong)uStack_138 << 8;
    puVar5[0x16] = uVar4;
    puVar5[7] = puVar1;
    puVar5[6] = uVar4;
    puVar5[9] = uVar3;
    puVar5[8] = uVar2;
    puVar5[0xb] = puVar1;
    puVar5[10] = uVar4;
    puVar5[0xd] = uVar3;
    puVar5[0xc] = uVar2;
    puVar5[1] = 1;
    *puVar5 = 1;
    puVar5[3] = puVar1;
    puVar5[2] = 0;
    puVar5[5] = uVar3;
    puVar5[4] = uVar2;
    return;
  }
                    /* try { // try from 006f8500 to 006f850b has its CatchHandler @ 006f8510 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0xe8);
}


// ===== 006f8528  <record_mapper::snowflake::SnowflakeVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::snowflake::SnowflakeVisitor as serde::de::Visitor>::expecting */

void __rustcall
<record_mapper::snowflake::SnowflakeVisitor_as_serde::de::Visitor>::expecting
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002cf497,0x4a);
  return;
}


// ===== 006f853c  <record_mapper::database::partition::js::PartitionProperties_as_jsi::traits::NewWithRuntime>::with_runtime =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::partition::js::PartitionProperties as
   jsi::traits::NewWithRuntime>::with_runtime */

void __rustcall
<record_mapper::database::partition::js::PartitionProperties_as_jsi::traits::NewWithRuntime>::
with_runtime(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar2,&DAT_002bd160,4);
                    /* try { // try from 006f856c to 006f857f has its CatchHandler @ 006f8594 */
  uVar2 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar2,&DAT_002cf4e1,7);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


// ===== 006f85ac  FUN_006f85ac =====

void FUN_006f85ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002cf4e8,0xc,&local_18,&DAT_00ad4b88);
  return;
}


// ===== 006f85ec  <record_mapper::database::kkv::test_record::TestRecordDelta_as_record_mapper::record_value::RecordValueDelta<record_mapper::database::kkv::test_record::TestRecord>>::merge_with =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::test_record::TestRecordDelta as
   record_mapper::record_value::RecordValueDelta<record_mapper::database::kkv::test_record::TestRecord>>::merge_with
    */

void __rustcall
<record_mapper::database::kkv::test_record::TestRecordDelta_as_record_mapper::record_value::RecordValueDelta<record_mapper::database::kkv::test_record::TestRecord>>
::merge_with(undefined8 *param_1,long *param_2,long param_3,long *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (*param_4 == 1) {
    lVar5 = param_4[1];
    if (lVar5 != *(long *)(param_3 + 0x10)) goto LAB_006f8664;
LAB_006f8628:
    uVar6 = 0;
    bVar3 = true;
    bVar2 = true;
    lVar7 = param_4[2];
  }
  else {
    lVar5 = *param_2;
    if ((lVar5 != 1) || (lVar5 = param_2[1], lVar5 == *(long *)(param_3 + 0x10))) goto LAB_006f8628;
LAB_006f8664:
    bVar3 = false;
    bVar2 = false;
    uVar6 = 1;
    lVar7 = param_4[2];
  }
  if (lVar7 == 1) {
    lVar7 = param_4[3];
    bVar4 = lVar7 == *(long *)(param_3 + 0x18);
    bVar1 = false;
    if (bVar4) {
      bVar1 = bVar2;
    }
  }
  else {
    lVar7 = param_2[2];
    if (lVar7 != 1) {
      if (!bVar3) {
        *param_1 = uVar6;
        param_1[1] = lVar5;
        param_1[2] = 0;
        param_1[3] = lVar7;
        return;
      }
      goto LAB_006f86a4;
    }
    lVar7 = param_2[3];
    bVar4 = lVar7 == *(long *)(param_3 + 0x18);
    bVar1 = false;
    if (bVar4) {
      bVar1 = bVar3;
    }
  }
  if (!bVar1) {
    *param_1 = uVar6;
    param_1[1] = lVar5;
    param_1[2] = (ulong)!bVar4;
    param_1[3] = lVar7;
    return;
  }
LAB_006f86a4:
  *param_1 = 2;
  return;
}


// ===== 006f86c0  <record_mapper::database::kkv::test_record::TestRecordDelta_as_record_mapper::record_value::RecordValueDelta<record_mapper::database::kkv::test_record::TestRecord>>::rebase_onto =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::test_record::TestRecordDelta as
   record_mapper::record_value::RecordValueDelta<record_mapper::database::kkv::test_record::TestRecord>>::rebase_onto
    */

void __rustcall
<record_mapper::database::kkv::test_record::TestRecordDelta_as_record_mapper::record_value::RecordValueDelta<record_mapper::database::kkv::test_record::TestRecord>>
::rebase_onto(ulong *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_2 + 6);
  uVar1 = 0;
  if (*(ulong *)(param_2 + 2) != *(ulong *)(param_3 + 0x10)) {
    uVar1 = *param_2;
  }
  uVar2 = 0;
  if (uVar3 != *(ulong *)(param_3 + 0x18)) {
    uVar2 = param_2[4];
  }
  if (((uVar2 & 1) == 0) && (uVar1 == 0)) {
    *param_1 = 2;
    return;
  }
  param_1[1] = *(ulong *)(param_2 + 2);
  param_1[2] = (ulong)uVar2;
  param_1[3] = uVar3;
  *param_1 = (ulong)uVar1;
  return;
}


// ===== 006f8708  <record_mapper::database::kkv::test_record::TestRecordDelta_as_record_mapper::record_value::RecordValueDelta<record_mapper::database::kkv::test_record::TestRecord>>::fields =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::test_record::TestRecordDelta as
   record_mapper::record_value::RecordValueDelta<record_mapper::database::kkv::test_record::TestRecord>>::fields
    */

uint __rustcall
<record_mapper::database::kkv::test_record::TestRecordDelta_as_record_mapper::record_value::RecordValueDelta<record_mapper::database::kkv::test_record::TestRecord>>
::fields(long *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = 2;
  }
  if (param_1[2] != 0) {
    uVar1 = uVar1 | 4;
  }
  return uVar1;
}


// ===== 006f872c  <record_mapper::database::kkv::test_record::TestRecord_as_record_mapper::record_value::RecordValue>::compute_delta =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::test_record::TestRecord as
   record_mapper::record_value::RecordValue>::compute_delta */

void __rustcall
<record_mapper::database::kkv::test_record::TestRecord_as_record_mapper::record_value::RecordValue>
::compute_delta(ulong *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(long *)(param_3 + 8) != *(long *)(param_2 + 8)) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_002cf4f4,0x91,&PTR_s_mobile_jsi_record_mapper_src_dat_00ad4ba8);
  }
  uVar1 = *(ulong *)(param_2 + 0x10);
  uVar3 = *(ulong *)(param_2 + 0x18);
  uVar2 = *(ulong *)(param_3 + 0x10);
  uVar4 = *(ulong *)(param_3 + 0x18);
  if ((uVar2 == uVar1) && (uVar4 == uVar3)) {
    *param_1 = 2;
    return;
  }
  param_1[3] = uVar4;
  param_1[1] = uVar2;
  param_1[2] = (ulong)(uVar4 != uVar3);
  *param_1 = (ulong)(uVar2 != uVar1);
  return;
}


// ===== 006f87a0  <record_mapper::database::kkv::test_record::TestRecord_as_record_mapper::record_value::RecordValue>::compute_delta_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::test_record::TestRecord as
   record_mapper::record_value::RecordValue>::compute_delta_ref */

void __rustcall
<record_mapper::database::kkv::test_record::TestRecord_as_record_mapper::record_value::RecordValue>
::compute_delta_ref(ulong *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(long *)(param_3 + 8) != *(long *)(param_2 + 8)) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_002cf4f4,0x91,&PTR_s_mobile_jsi_record_mapper_src_dat_00ad4bc0);
  }
  uVar1 = *(ulong *)(param_2 + 0x10);
  uVar3 = *(ulong *)(param_2 + 0x18);
  uVar2 = *(ulong *)(param_3 + 0x10);
  uVar4 = *(ulong *)(param_3 + 0x18);
  if ((uVar2 == uVar1) && (uVar4 == uVar3)) {
    *param_1 = 2;
    return;
  }
  param_1[3] = uVar4;
  param_1[1] = uVar2;
  param_1[2] = (ulong)(uVar4 != uVar3);
  *param_1 = (ulong)(uVar2 != uVar1);
  return;
}


// ===== 006f8814  <record_mapper::database::kkv::test_record::TestRecord_as_record_mapper::record_value::RecordValue>::create_full_object =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::test_record::TestRecord as
   record_mapper::record_value::RecordValue>::create_full_object */

void __rustcall
<record_mapper::database::kkv::test_record::TestRecord_as_record_mapper::record_value::RecordValue>
::create_full_object(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_002cf53c,0xf,&PTR_s_mobile_jsi_record_mapper_src_dat_00ad4bd8);
}


// ===== 006f8834  <record_mapper::database::kkv::test_record::TestRecord_as_record_mapper::record_value::RecordValue>::create_full_object_reusing_non_dirty_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::test_record::TestRecord as
   record_mapper::record_value::RecordValue>::create_full_object_reusing_non_dirty_from */

void __rustcall
<record_mapper::database::kkv::test_record::TestRecord_as_record_mapper::record_value::RecordValue>
::create_full_object_reusing_non_dirty_from(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_002cf53c,0xf,&PTR_s_mobile_jsi_record_mapper_src_dat_00ad4bf0);
}


// ===== 006f8854  <record_mapper::database::kkv::test_record::TestRecordMemoryStatisticsBuilder_as_record_mapper::record_value::RecordMemoryStatisticsBuilder>::push =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::test_record::TestRecordMemoryStatisticsBuilder as
   record_mapper::record_value::RecordMemoryStatisticsBuilder>::push */

void __rustcall
<record_mapper::database::kkv::test_record::TestRecordMemoryStatisticsBuilder_as_record_mapper::record_value::RecordMemoryStatisticsBuilder>
::push(long param_1)

{
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 1;
  *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
  return;
}


// ===== 006f8894  <record_mapper::database::kkv::test_record::TestRecordMemoryStatisticsBuilder_as_record_mapper::record_value::RecordMemoryStatisticsBuilder>::build =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::kkv::test_record::TestRecordMemoryStatisticsBuilder as
   record_mapper::record_value::RecordMemoryStatisticsBuilder>::build */

void __rustcall
<record_mapper::database::kkv::test_record::TestRecordMemoryStatisticsBuilder_as_record_mapper::record_value::RecordMemoryStatisticsBuilder>
::build(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  double dVar53;
  double dVar54;
  
  dVar27 = 0.0;
  dVar28 = 0.0;
  uVar23 = param_2[6];
  dVar29 = 0.0;
  if (param_2[4] != 0) {
    dVar29 = (double)param_2[4];
    dVar28 = (double)param_2[5] / dVar29;
    dVar29 = (double)uVar23 / dVar29;
  }
  dVar30 = 0.0;
  uVar8 = param_2[0xe];
  uVar22 = param_2[0xf];
  if (param_2[0xd] != 0) {
    dVar30 = (double)param_2[0xd];
    dVar27 = (double)uVar8 / dVar30;
    dVar30 = (double)uVar22 / dVar30;
  }
  dVar31 = 0.0;
  dVar32 = 0.0;
  uVar24 = param_2[0x18];
  dVar33 = 0.0;
  uVar9 = param_2[0x17];
  if (param_2[0x16] != 0) {
    dVar33 = (double)param_2[0x16];
    dVar32 = (double)uVar9 / dVar33;
    dVar33 = (double)uVar24 / dVar33;
  }
  dVar34 = 0.0;
  uVar10 = param_2[0x20];
  uVar26 = *param_2;
  uVar18 = param_2[9];
  uVar19 = param_2[0x12];
  uVar25 = param_2[0x21];
  uVar20 = param_2[0x1b];
  if (param_2[0x1f] != 0) {
    dVar34 = (double)param_2[0x1f];
    dVar31 = (double)uVar10 / dVar34;
    dVar34 = (double)uVar25 / dVar34;
  }
  uVar42 = param_2[4];
  uVar41 = param_2[3];
  uVar52 = param_2[8];
  uVar51 = param_2[7];
  uVar1 = param_2[1];
  uVar11 = param_2[2];
  uVar40 = param_2[0xd];
  uVar39 = param_2[0xc];
  uVar48 = param_2[0x11];
  uVar47 = param_2[0x10];
  uVar38 = param_2[0x16];
  uVar37 = param_2[0x15];
  uVar46 = param_2[0x1a];
  uVar45 = param_2[0x19];
  uVar36 = param_2[0x1f];
  uVar35 = param_2[0x1e];
  uVar44 = param_2[0x23];
  uVar43 = param_2[0x22];
  uVar21 = param_2[0x2a];
  uVar50 = param_2[0x2c];
  uVar49 = param_2[0x2b];
  uVar2 = param_2[10];
  uVar12 = param_2[0xb];
  uVar3 = param_2[0x13];
  uVar13 = param_2[0x14];
  uVar4 = param_2[0x1c];
  uVar14 = param_2[0x1d];
  uVar5 = param_2[0x28];
  uVar15 = param_2[0x29];
  uVar6 = param_2[0x26];
  uVar16 = param_2[0x27];
  uVar7 = param_2[0x24];
  uVar17 = param_2[0x25];
  if (uVar5 == 0) {
    dVar53 = 0.0;
    dVar54 = 0.0;
  }
  else {
    dVar53 = (double)uVar15 / (double)uVar5;
    dVar54 = (double)uVar21 / (double)uVar5;
  }
  *param_1 = param_2[5];
  param_1[1] = uVar23;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
    uVar17 = 0;
  }
  if ((uVar20 & 1) == 0) {
    uVar14 = 0;
    uVar4 = 0;
  }
  if ((uVar19 & 1) == 0) {
    uVar13 = 0;
    uVar3 = 0;
  }
  if ((uVar18 & 1) == 0) {
    uVar12 = 0;
    uVar2 = 0;
  }
  if ((uVar26 & 1) == 0) {
    uVar1 = 0;
    uVar11 = 0;
  }
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar12;
  param_1[2] = uVar1;
  param_1[3] = uVar11;
  param_1[0x16] = uVar3;
  param_1[0x17] = uVar13;
  param_1[5] = uVar52;
  param_1[4] = uVar51;
  param_1[6] = (ulong)dVar28;
  param_1[7] = (ulong)dVar29;
  param_1[9] = uVar42;
  param_1[8] = uVar41;
  param_1[10] = uVar8;
  param_1[0xb] = uVar22;
  param_1[0xf] = uVar48;
  param_1[0xe] = uVar47;
  param_1[0x10] = (ulong)dVar27;
  param_1[0x11] = (ulong)dVar30;
  param_1[0x13] = uVar40;
  param_1[0x12] = uVar39;
  param_1[0x14] = uVar9;
  param_1[0x15] = uVar24;
  param_1[0x19] = uVar46;
  param_1[0x18] = uVar45;
  param_1[0x1a] = (ulong)dVar32;
  param_1[0x1b] = (ulong)dVar33;
  param_1[0x1d] = uVar38;
  param_1[0x1c] = uVar37;
  param_1[0x1e] = uVar10;
  param_1[0x1f] = uVar25;
  param_1[0x20] = uVar4;
  param_1[0x21] = uVar14;
  param_1[0x23] = uVar44;
  param_1[0x22] = uVar43;
  param_1[0x24] = (ulong)dVar31;
  param_1[0x25] = (ulong)dVar34;
  param_1[0x27] = uVar36;
  param_1[0x26] = uVar35;
  param_1[0x28] = uVar15;
  param_1[0x29] = uVar21;
  param_1[0x2a] = uVar17;
  param_1[0x2b] = uVar6;
  param_1[0x2d] = uVar50;
  param_1[0x2c] = uVar49;
  param_1[0x2e] = (ulong)dVar53;
  param_1[0x2f] = (ulong)dVar54;
  param_1[0x30] = uVar16;
  param_1[0x31] = uVar5;
  return;
}


// ===== 006f8a7c  <record_mapper::database::MutationMetricsProperties_as_jsi::traits::NewWithRuntime>::with_runtime =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::MutationMetricsProperties as jsi::traits::NewWithRuntime>::with_runtime
    */

void __rustcall
<record_mapper::database::MutationMetricsProperties_as_jsi::traits::NewWithRuntime>::with_runtime
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  uVar1 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar6,&DAT_002a1790,8);
                    /* try { // try from 006f8ab4 to 006f8ac7 has its CatchHandler @ 006f8b8c */
  uVar2 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar6,&DAT_002cf54b,0xb);
                    /* try { // try from 006f8ac8 to 006f8adf has its CatchHandler @ 006f8b7c */
  uVar3 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar6,&DAT_002cf556,7);
                    /* try { // try from 006f8ae0 to 006f8af7 has its CatchHandler @ 006f8b6c */
  uVar4 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar6,&DAT_002cf55d,0xd);
                    /* try { // try from 006f8af8 to 006f8b0f has its CatchHandler @ 006f8b5c */
  uVar5 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar6,&DAT_002cf56a,7);
                    /* try { // try from 006f8b10 to 006f8b27 has its CatchHandler @ 006f8b4c */
  uVar6 = jsi_sys::ffi::base::ffi::PropNameID_forUtf8(uVar6,&DAT_002a12c8,8);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  return;
}


// ===== 006f8ba4  <record_mapper::database::MutationMetrics_as_jsi::object::ToObject>::to_object =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::MutationMetrics as jsi::object::ToObject>::to_object */

undefined8 __rustcall
<record_mapper::database::MutationMetrics_as_jsi::object::ToObject>::to_object
          (uint *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 *local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  
  auVar18 = <jsi::handle::jsi::handle::RuntimeHandle>::state(param_2);
  plVar9 = auVar18._8_8_;
  puVar6 = auVar18._0_8_;
  lVar8 = *plVar9;
  uVar2 = plVar9[1];
  lVar10 = 0;
  uVar11 = uVar2 & 0xfce4deb59789da8;
  uVar16 = *(undefined8 *)(lVar8 + uVar11);
  uVar17 = NEON_cmeq(uVar16,0x707070707070707,1);
  uVar17 = uVar17 & 0x8080808080808080;
  while( true ) {
    for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
      uVar3 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar12 = (undefined8 *)
                (lVar8 + (uVar11 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                         -0x20);
      if (puVar12[-3] == -0x47a541ede2121af8 && puVar12[-4] == -0x38b7f470737f70a3)
      goto LAB_006f8d44;
    }
    uVar16 = NEON_cmeq(uVar16,0xffffffffffffffff,1);
    bVar15 = NEON_umaxv(uVar16,1);
    if ((bVar15 & 1) != 0) break;
    lVar10 = lVar10 + 8;
    uVar11 = uVar11 + lVar10 & uVar2;
    uVar16 = *(undefined8 *)(lVar8 + uVar11);
    uVar17 = NEON_cmeq(uVar16,0x707070707070707,1);
    uVar17 = uVar17 & 0x8080808080808080;
  }
  if (plVar9[2] == 0) {
                    /* try { // try from 006f9084 to 006f9097 has its CatchHandler @ 006f90f0 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (plVar9,1,plVar9 + 4,1);
  }
                    /* try { // try from 006f8c9c to 006f8d4f has its CatchHandler @ 006f90f0 */
  <record_mapper::database::MutationMetricsProperties_as_jsi::traits::NewWithRuntime>::with_runtime
            (&local_88,param_2);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar7 = (undefined8 *)FUN_004b25a4(0x30,8);
  if (puVar7 == (undefined8 *)0x0) {
                    /* try { // try from 006f90c0 to 006f90cb has its CatchHandler @ 006f9100 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
  puVar7[1] = pcStack_80;
  *puVar7 = local_88;
  puVar7[3] = uStack_70;
  puVar7[2] = local_78;
  puVar7[5] = uStack_60;
  puVar7[4] = local_68;
  puVar1 = (undefined8 *)*plVar9;
  uVar2 = plVar9[1];
  uVar17 = uVar2 & 0xfce4deb59789da8;
  uVar11 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar17),0,1);
  if (uVar11 == 0) {
    lVar10 = 8;
    do {
      uVar17 = uVar17 + lVar10;
      lVar10 = lVar10 + 8;
      uVar17 = uVar17 & uVar2;
      uVar11 = NEON_cmlt(*(undefined8 *)((long)puVar1 + uVar17),0,1);
    } while (uVar11 == 0);
  }
  uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
  uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  uVar11 = uVar17 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar2;
  uVar17 = (ulong)*(char *)((long)puVar1 + uVar11);
  if (-1 < *(char *)((long)puVar1 + uVar11)) {
    uVar17 = NEON_cmlt(*puVar1,0,1);
    uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
    uVar11 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
    uVar17 = (ulong)*(byte *)((long)puVar1 + uVar11);
  }
  *(undefined1 *)((long)puVar1 + uVar11) = 7;
  puVar12 = puVar1 + uVar11 * -4;
  *(undefined1 *)((long)puVar1 + (uVar11 - 8 & uVar2) + 8) = 7;
  puVar12[-4] = 0xc7480b8f8c808f5d;
  puVar12[-3] = 0xb85abe121dede508;
  puVar12[-2] = puVar7;
  puVar12[-1] = &PTR_FUN_00ad4a70;
  plVar9[3] = plVar9[3] + 1;
  plVar9[2] = plVar9[2] - (uVar17 & 1);
LAB_006f8d44:
  puVar7 = (undefined8 *)puVar12[-2];
  uVar16 = <jsi::object::[1]::jsi::object::Object>::new(param_2);
  uVar14 = NEON_ucvtf((ulong)*param_1);
                    /* try { // try from 006f8d5c to 006f8d5f has its CatchHandler @ 006f90f8 */
  uVar14 = <jsi::value::[0]::jsi::value::Value>::double(uVar14);
  uVar13 = *param_2;
                    /* try { // try from 006f8d68 to 006f8d7f has its CatchHandler @ 006f9178 */
  lVar10 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get(uVar16);
  if (lVar10 == 0) {
    pcStack_80 = FUN_006f5f08;
  }
  else {
    lVar8 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                      (*puVar7);
    if (lVar8 != 0) {
                    /* try { // try from 006f8d88 to 006f8da3 has its CatchHandler @ 006f90f8 */
      jsi_sys::ffi::base::ffi::Object_setProperty(uVar13,lVar10,lVar8,uVar14);
      uVar14 = NEON_ucvtf((ulong)param_1[1]);
      uVar14 = <jsi::value::[0]::jsi::value::Value>::double(uVar14);
      uVar13 = *param_2;
                    /* try { // try from 006f8dac to 006f8dc3 has its CatchHandler @ 006f9164 */
      lVar10 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                         (uVar16);
      if (lVar10 == 0) {
        pcStack_80 = FUN_006f5f08;
      }
      else {
        lVar8 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                          (puVar7[1]);
        if (lVar8 != 0) {
                    /* try { // try from 006f8dcc to 006f8de7 has its CatchHandler @ 006f90f8 */
          jsi_sys::ffi::base::ffi::Object_setProperty(uVar13,lVar10,lVar8,uVar14);
          uVar14 = NEON_ucvtf((ulong)param_1[2]);
          uVar14 = <jsi::value::[0]::jsi::value::Value>::double(uVar14);
          uVar13 = *param_2;
                    /* try { // try from 006f8df0 to 006f8e07 has its CatchHandler @ 006f9150 */
          lVar10 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::__get
                             (uVar16);
          if (lVar10 == 0) {
            pcStack_80 = FUN_006f5f08;
          }
          else {
            lVar8 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::
                    __get(puVar7[2]);
            if (lVar8 != 0) {
                    /* try { // try from 006f8e10 to 006f8e2b has its CatchHandler @ 006f90f8 */
              jsi_sys::ffi::base::ffi::Object_setProperty(uVar13,lVar10,lVar8,uVar14);
              uVar14 = NEON_ucvtf((ulong)param_1[3]);
              uVar14 = <jsi::value::[0]::jsi::value::Value>::double(uVar14);
              uVar13 = *param_2;
                    /* try { // try from 006f8e34 to 006f8e4b has its CatchHandler @ 006f913c */
              lVar10 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>::
                       __get(uVar16);
              if (lVar10 == 0) {
                pcStack_80 = FUN_006f5f08;
              }
              else {
                lVar8 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>
                        ::__get(puVar7[3]);
                if (lVar8 != 0) {
                    /* try { // try from 006f8e54 to 006f8e6f has its CatchHandler @ 006f90f8 */
                  jsi_sys::ffi::base::ffi::Object_setProperty(uVar13,lVar10,lVar8,uVar14);
                  uVar14 = NEON_ucvtf((ulong)param_1[4]);
                  uVar14 = <jsi::value::[0]::jsi::value::Value>::double(uVar14);
                  uVar13 = *param_2;
                    /* try { // try from 006f8e78 to 006f8e8f has its CatchHandler @ 006f9128 */
                  lVar10 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>
                           ::__get(uVar16);
                  if (lVar10 == 0) {
                    pcStack_80 = FUN_006f5f08;
                  }
                  else {
                    lVar8 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>
                            ::__get(puVar7[4]);
                    if (lVar8 != 0) {
                    /* try { // try from 006f8e98 to 006f8eaf has its CatchHandler @ 006f90f8 */
                      jsi_sys::ffi::base::ffi::Object_setProperty(uVar13,lVar10,lVar8,uVar14);
                      uVar14 = <jsi::value::[0]::jsi::value::Value>::bool((char)param_1[5]);
                      uVar13 = *param_2;
                    /* try { // try from 006f8eb8 to 006f8ecf has its CatchHandler @ 006f9114 */
                      lVar10 = <jsi_sys::ffi::base::ffi::JsiObject_as_cxx::unique_ptr::UniquePtrTarget>
                               ::__get(uVar16);
                      if (lVar10 == 0) {
                        pcStack_80 = FUN_006f5f08;
                      }
                      else {
                        lVar8 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>
                                ::__get(puVar7[5]);
                        if (lVar8 != 0) {
                    /* try { // try from 006f8ed8 to 006f8ee7 has its CatchHandler @ 006f90f8 */
                          jsi_sys::ffi::base::ffi::Object_setProperty(uVar13,lVar10,lVar8,uVar14);
                          do {
                            uVar17 = *puVar6;
                            cVar4 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
                            if (bVar5) {
                              *puVar6 = uVar17 - 0x10;
                              cVar4 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar4 != '\0');
                          if ((uVar17 & 0xfffffffffffffff2) == 0x12) {
                            <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::
                            unlock_shared_slow(puVar6);
                          }
                          return uVar16;
                        }
                        pcStack_80 = FUN_006f5f00;
                      }
                      local_88 = &uStack_51;
                    /* try { // try from 006f9060 to 006f9073 has its CatchHandler @ 006f9114 */
                    /* WARNING: Subroutine does not return */
                      core::panicking::panic_fmt
                                (&DAT_002b2091,&local_88,
                                 &PTR_s__root__cargo_registry_src_index__00ad4b50);
                    }
                    pcStack_80 = FUN_006f5f00;
                  }
                  local_88 = &uStack_51;
                    /* try { // try from 006f9028 to 006f903b has its CatchHandler @ 006f9128 */
                    /* WARNING: Subroutine does not return */
                  core::panicking::panic_fmt
                            (&DAT_002b2091,&local_88,
                             &PTR_s__root__cargo_registry_src_index__00ad4b50);
                }
                pcStack_80 = FUN_006f5f00;
              }
              local_88 = &uStack_51;
                    /* try { // try from 006f8ff0 to 006f9003 has its CatchHandler @ 006f913c */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_fmt
                        (&DAT_002b2091,&local_88,&PTR_s__root__cargo_registry_src_index__00ad4b50);
            }
            pcStack_80 = FUN_006f5f00;
          }
          local_88 = &uStack_51;
                    /* try { // try from 006f8fb8 to 006f8fcb has its CatchHandler @ 006f9150 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_002b2091,&local_88,&PTR_s__root__cargo_registry_src_index__00ad4b50);
        }
        pcStack_80 = FUN_006f5f00;
      }
      local_88 = &uStack_51;
                    /* try { // try from 006f8f80 to 006f8f93 has its CatchHandler @ 006f9164 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002b2091,&local_88,&PTR_s__root__cargo_registry_src_index__00ad4b50);
    }
    pcStack_80 = FUN_006f5f00;
  }
  local_88 = &uStack_51;
                    /* try { // try from 006f8f48 to 006f8f5b has its CatchHandler @ 006f9178 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_88,&PTR_s__root__cargo_registry_src_index__00ad4b50);
}


// ===== 006f91cc  <record_mapper::database::MutationMetrics_as_jsi::value::ToValue>::to_value =====

/* WARNING: Unknown calling convention: __rustcall */
/* <record_mapper::database::MutationMetrics as jsi::value::ToValue>::to_value */

void __rustcall
<record_mapper::database::MutationMetrics_as_jsi::value::ToValue>::to_value
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = <record_mapper::database::MutationMetrics_as_jsi::object::ToObject>::to_object();
  <jsi::object::Object_as_jsi::value::IntoValue>::into_value(uVar1,param_2);
  return;
}


// ===== 006f91f0  FUN_006f91f0 =====

void FUN_006f91f0(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 006f9204  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,
   alloc[c1f8e832b0d782c7]::boxed::Box<dyn core[bcece726f298455b]::any::Any +
   core[bcece726f298455b]::marker::Send>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,
   alloc[c1f8e832b0d782c7]::boxed::Box<dyn core[bcece726f298455b]::any::Any +
   core[bcece726f298455b]::marker::Send>,
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>
::reserve_rehash::
<hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
          (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  ulong *puVar1;
  undefined8 *__s;
  long lVar2;
  char cVar3;
  byte bVar4;
  undefined8 *puVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *__src;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar17 = param_1[3];
  uVar11 = uVar17 + param_2;
  if (CARRY8(uVar17,param_2)) goto LAB_006f9678;
  uVar16 = param_1[1];
  uVar19 = uVar16 + 1;
  uVar13 = uVar19 >> 3;
  uVar18 = uVar16;
  if (7 < uVar16) {
    uVar18 = uVar13 * 7;
  }
  if (uVar18 >> 1 < uVar11) {
    if (uVar11 < uVar18 + 1) {
      uVar11 = uVar18 + 1;
    }
    if (uVar11 < 0xf) {
      uVar19 = 4;
      if (3 < uVar11) {
        uVar19 = (uVar11 & 8) + 8;
      }
      uVar18 = uVar19 * 0x20;
      uVar13 = uVar19 + 8 + uVar18;
      if (CARRY8(uVar19 + 8,uVar18)) goto LAB_006f9678;
    }
    else {
      if ((uVar11 >> 0x3d != 0) ||
         (uVar11 = 0xffffffffffffffff >> (LZCOUNT((uVar11 * 8) / 7 - 1) & 0x3fU),
         0x7fffffffffffffe < uVar11)) goto LAB_006f9678;
      uVar19 = uVar11 + 1;
      uVar18 = uVar19 * 0x20;
      uVar13 = uVar11 + 9 + uVar18;
      if (CARRY8(uVar11 + 9,uVar18)) goto LAB_006f9678;
    }
    if (0x7ffffffffffffff8 < uVar13) {
LAB_006f9678:
      uVar8 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
      return uVar8;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar7 = FUN_004b25a4(uVar13,8);
    if (lVar7 == 0) {
      uVar8 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(param_4,8,uVar13);
      return uVar8;
    }
    __s = (undefined8 *)(lVar7 + uVar18);
    memset(__s,0xff,uVar19 + 8);
    uVar13 = uVar19 - 1;
    uVar11 = uVar13;
    if (8 < uVar19) {
      uVar11 = (uVar19 >> 3) * 7;
    }
    if (uVar17 == 0) {
      puVar12 = (undefined8 *)*param_1;
    }
    else {
      puVar12 = (undefined8 *)*param_1;
      lVar7 = 0;
      uVar19 = NEON_cmge(*puVar12,0,1);
      uVar19 = uVar19 & 0x8080808080808080;
      puVar5 = puVar12;
      uVar18 = uVar17;
      do {
        for (; uVar19 == 0; uVar19 = uVar19 & 0x8080808080808080) {
          lVar7 = lVar7 + 8;
          uVar19 = NEON_cmge(puVar5[1],0,1);
          puVar5 = puVar5 + 1;
        }
        uVar9 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        lVar2 = lVar7 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
        uVar9 = puVar12[lVar2 * -4 + -3] * 0x517cc1b727220a95 & uVar13;
        uVar20 = NEON_cmlt(*(undefined8 *)((long)__s + uVar9),0,1);
        if (uVar20 == 0) {
          lVar10 = 8;
          do {
            uVar9 = uVar9 + lVar10;
            lVar10 = lVar10 + 8;
            uVar9 = uVar9 & uVar13;
            uVar20 = NEON_cmlt(*(undefined8 *)((long)__s + uVar9),0,1);
          } while (uVar20 == 0);
        }
        uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
        uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) & uVar13;
        if (-1 < *(char *)((long)__s + uVar9)) {
          uVar9 = NEON_cmlt(*__s,0,1);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
        }
        uVar18 = uVar18 - 1;
        bVar4 = (byte)((ulong)(puVar12[lVar2 * -4 + -3] * 0x517cc1b727220a95) >> 0x38);
        *(byte *)((long)__s + uVar9) = bVar4 >> 1;
        *(byte *)((long)__s + (uVar9 - 8 & uVar13) + 8) = bVar4 >> 1;
        uVar22 = puVar12[lVar2 * -4 + -4];
        uVar21 = puVar12[lVar2 * -4 + -1];
        uVar8 = puVar12[lVar2 * -4 + -2];
        uVar19 = uVar19 - 1 & uVar19;
        __s[uVar9 * -4 + -3] = puVar12[lVar2 * -4 + -3];
        __s[uVar9 * -4 + -4] = uVar22;
        __s[uVar9 * -4 + -1] = uVar21;
        __s[uVar9 * -4 + -2] = uVar8;
      } while (uVar18 != 0);
    }
    *param_1 = (long)__s;
    param_1[1] = uVar13;
    param_1[2] = uVar11 - uVar17;
    if ((uVar16 != 0) && (lVar7 = uVar16 * 0x20 + 0x20, uVar16 + lVar7 != -9)) {
      free((void *)((long)puVar12 - lVar7));
    }
  }
  else {
    if (uVar19 != 0) {
      __src = (ulong *)*param_1;
      puVar15 = __src;
      if ((uVar19 & 7) != 0) {
        uVar13 = uVar13 + 1;
      }
      do {
        uVar13 = uVar13 - 1;
        uVar11 = NEON_cmlt(*puVar15,0,1);
        *puVar15 = uVar11 | 0x8080808080808080;
        puVar15 = puVar15 + 1;
      } while (uVar13 != 0);
      if (uVar19 < 8) {
        memmove(__src + 1,__src,uVar16 + 1);
      }
      else {
        *(ulong *)((long)__src + uVar19) = *__src;
      }
      uVar11 = 0;
      do {
        puVar15 = __src;
        if (*(char *)((long)__src + uVar11) == -0x80) {
          puVar1 = __src + ~uVar11 * 4;
          while( true ) {
            uVar13 = __src[uVar11 * -4 + -3] * 0x517cc1b727220a95;
            uVar19 = param_1[1];
            uVar18 = uVar19 & uVar13;
            uVar17 = NEON_cmlt(*(undefined8 *)((long)__src + uVar18),0,1);
            if (uVar17 == 0) {
              lVar7 = 8;
              uVar9 = uVar19 & uVar13;
              do {
                uVar9 = uVar9 + lVar7;
                lVar7 = lVar7 + 8;
                uVar9 = uVar9 & uVar19;
                uVar17 = NEON_cmlt(*(undefined8 *)((long)__src + uVar9),0,1);
              } while (uVar17 == 0);
            }
            else {
              uVar9 = uVar19 & uVar13;
            }
            uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = uVar9 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar19;
            bVar4 = (byte)(uVar13 >> 0x38);
            if (*(char *)((long)__src + uVar17) < '\0') {
              uVar13 = uVar17 - uVar18 ^ uVar11 - uVar18;
            }
            else {
              uVar17 = NEON_cmlt(*__src,0,1);
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
              uVar13 = uVar17 - uVar18 ^ uVar11 - uVar18;
            }
            if ((uVar13 & uVar19) < 8) {
              *(byte *)((long)__src + uVar11) = bVar4 >> 1;
              puVar15 = (ulong *)*param_1;
              *(byte *)((long)puVar15 + (uVar19 & uVar11 - 8) + 8) = bVar4 >> 1;
              goto LAB_006f9428;
            }
            cVar3 = *(char *)((long)__src + uVar17);
            *(byte *)((long)__src + uVar17) = bVar4 >> 1;
            puVar15 = (ulong *)*param_1;
            puVar14 = __src + uVar17 * -4 + -4;
            *(byte *)((long)puVar15 + (uVar17 - 8 & uVar19) + 8) = bVar4 >> 1;
            if (cVar3 == -1) break;
            uVar19 = *puVar1;
            *puVar1 = *puVar14;
            *puVar14 = uVar19;
            uVar19 = puVar1[1];
            puVar1[1] = __src[uVar17 * -4 + -3];
            __src[uVar17 * -4 + -3] = uVar19;
            uVar19 = puVar1[2];
            puVar1[2] = __src[uVar17 * -4 + -2];
            __src[uVar17 * -4 + -2] = uVar19;
            uVar19 = puVar1[3];
            puVar1[3] = __src[uVar17 * -4 + -1];
            __src[uVar17 * -4 + -1] = uVar19;
            __src = (ulong *)*param_1;
          }
          uVar19 = param_1[1];
          *(undefined1 *)((long)puVar15 + uVar11) = 0xff;
          *(undefined1 *)((long)puVar15 + (uVar19 & uVar11 - 8) + 8) = 0xff;
          uVar18 = *puVar1;
          uVar13 = puVar1[3];
          uVar19 = puVar1[2];
          __src[uVar17 * -4 + -3] = puVar1[1];
          *puVar14 = uVar18;
          __src[uVar17 * -4 + -1] = uVar13;
          __src[uVar17 * -4 + -2] = uVar19;
        }
LAB_006f9428:
        bVar6 = uVar11 != uVar16;
        uVar11 = uVar11 + 1;
        __src = puVar15;
      } while (bVar6);
      uVar19 = param_1[1];
      uVar17 = param_1[3];
      if (7 < uVar19) {
        uVar19 = (uVar19 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar19 - uVar17;
  }
  return 0xffffffffffffffff;
}


// ===== 006f971c  FUN_006f971c =====

void FUN_006f971c(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    lVar5 = param_1[3];
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)*param_1;
      puVar7 = puVar6 + 1;
      uVar8 = NEON_cmge(*puVar6,0,1);
      uVar8 = uVar8 & 0x8080808080808080;
      do {
        for (; uVar8 == 0; uVar8 = uVar8 & 0x8080808080808080) {
          puVar6 = puVar6 + -0x20;
          uVar8 = NEON_cmge(*puVar7,0,1);
          puVar7 = puVar7 + 1;
        }
        uVar2 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78;
        __ptr = *(void **)((long)puVar6 + uVar2 * -4 + -0x10);
        puVar1 = *(undefined8 **)((long)puVar6 + uVar2 * -4 + -8);
        pcVar3 = (code *)*puVar1;
        if (pcVar3 != (code *)0x0) {
                    /* try { // try from 006f97b0 to 006f97b7 has its CatchHandler @ 006f9820 */
          (*pcVar3)(__ptr);
        }
        if (puVar1[1] != 0) {
          free(__ptr);
        }
        lVar5 = lVar5 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar5 != 0);
    }
    if (lVar4 * 0x21 != -0x29) {
      free((void *)(*param_1 + lVar4 * -0x20 + -0x20));
      return;
    }
  }
  return;
}


// ===== 006f9840  FUN_006f9840 =====

void FUN_006f9840(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if ((lVar1 != 0) && (lVar1 * 0x19 != -0x21)) {
    free((void *)(*param_1 + lVar1 * -0x18 + -0x18));
    return;
  }
  return;
}


// ===== 006f9874  FUN_006f9874 =====

void FUN_006f9874(undefined8 param_1)

{
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
                    /* try { // try from 006f9888 to 006f988f has its CatchHandler @ 006f98bc */
  <std::backtrace::[2]::std::backtrace::Backtrace>::capture(&local_50);
  uStack_78 = uStack_48;
  local_80 = local_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  local_60 = local_30;
  FUN_006f98dc(param_1,&local_80);
  return;
}


// ===== 006f98dc  FUN_006f98dc =====

void FUN_006f98dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = param_2[1];
  uVar3 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar2 = param_1[2];
  uVar6 = param_1[1];
  uVar4 = *param_1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x50,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar7;
    puVar1[2] = uVar5;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[7] = uVar4;
    puVar1[6] = uVar10;
    puVar1[9] = uVar2;
    puVar1[8] = uVar6;
    puVar1[1] = uVar3;
    *puVar1 = &PTR_FUN_00ad4c38;
    return;
  }
                    /* try { // try from 006f9958 to 006f9963 has its CatchHandler @ 006f9968 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x50);
}


// ===== 006f9980  FUN_006f9980 =====

void FUN_006f9980(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar7 = param_3[5];
  uVar6 = param_3[4];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x48,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[7] = param_1;
    puVar1[6] = uVar7;
    puVar1[8] = param_2;
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_00ad4c08;
    return;
  }
                    /* try { // try from 006f99f8 to 006f9a03 has its CatchHandler @ 006f9a08 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x48);
}


// ===== 006f9a20  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,
   alloc[c1f8e832b0d782c7]::boxed::Box<dyn core[bcece726f298455b]::any::Any +
   core[bcece726f298455b]::marker::Send>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,
   alloc[c1f8e832b0d782c7]::boxed::Box<dyn core[bcece726f298455b]::any::Any +
   core[bcece726f298455b]::marker::Send>,
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

undefined8
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>
::reserve_rehash::
<hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
          (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *__s;
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *__src;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar15 = param_1[3];
  uVar18 = uVar15 + param_2;
  if (CARRY8(uVar15,param_2)) goto LAB_006f9e5c;
  uVar16 = param_1[1];
  uVar13 = uVar16 + 1;
  uVar10 = uVar13 >> 3;
  uVar17 = uVar16;
  if (7 < uVar16) {
    uVar17 = uVar10 * 7;
  }
  if (uVar17 >> 1 < uVar18) {
    if (uVar18 < uVar17 + 1) {
      uVar18 = uVar17 + 1;
    }
    if (uVar18 < 0xf) {
      uVar13 = 4;
      if (3 < uVar18) {
        uVar13 = (uVar18 & 8) + 8;
      }
      uVar17 = uVar13 * 0x20;
      uVar18 = uVar13 + 8;
      uVar10 = uVar18 + uVar17;
      if (CARRY8(uVar18,uVar17)) goto LAB_006f9e5c;
    }
    else {
      if ((uVar18 >> 0x3d != 0) ||
         (uVar18 = 0xffffffffffffffff >> (LZCOUNT((uVar18 * 8) / 7 - 1) & 0x3fU),
         0x7fffffffffffffe < uVar18)) goto LAB_006f9e5c;
      uVar13 = uVar18 + 1;
      uVar17 = uVar13 * 0x20;
      uVar18 = uVar18 + 9;
      uVar10 = uVar18 + uVar17;
      if (CARRY8(uVar18,uVar17)) goto LAB_006f9e5c;
    }
    if (0x7ffffffffffffff8 < uVar10) {
LAB_006f9e5c:
      uVar8 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
      return uVar8;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar6 = FUN_004b25a4(uVar10,8);
    if (lVar6 == 0) {
      uVar8 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(param_4,8,uVar10);
      return uVar8;
    }
    __s = (undefined8 *)(lVar6 + uVar17);
    uVar17 = uVar13 - 1;
    uVar10 = uVar17;
    if (8 < uVar13) {
      uVar10 = (uVar13 >> 3) * 7;
    }
    memset(__s,0xff,uVar18);
    if (uVar15 == 0) {
      puVar9 = (undefined8 *)*param_1;
    }
    else {
      puVar9 = (undefined8 *)*param_1;
      lVar6 = 0;
      uVar18 = NEON_cmge(*puVar9,0,1);
      uVar18 = uVar18 & 0x8080808080808080;
      puVar4 = puVar9;
      uVar13 = uVar15;
      do {
        for (; uVar18 == 0; uVar18 = uVar18 & 0x8080808080808080) {
          lVar6 = lVar6 + 8;
          uVar18 = NEON_cmge(puVar4[1],0,1);
          puVar4 = puVar4 + 1;
        }
        uVar14 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        lVar1 = lVar6 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3);
        uVar14 = puVar9[lVar1 * -4 + -3] * 0x517cc1b727220a95 & uVar17;
        uVar19 = NEON_cmlt(*(undefined8 *)((long)__s + uVar14),0,1);
        if (uVar19 == 0) {
          lVar7 = 8;
          do {
            uVar14 = uVar14 + lVar7;
            lVar7 = lVar7 + 8;
            uVar14 = uVar14 & uVar17;
            uVar19 = NEON_cmlt(*(undefined8 *)((long)__s + uVar14),0,1);
          } while (uVar19 == 0);
        }
        uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
        uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar14 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) & uVar17;
        if (-1 < *(char *)((long)__s + uVar14)) {
          uVar14 = NEON_cmlt(*__s,0,1);
          uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
        }
        uVar13 = uVar13 - 1;
        bVar3 = (byte)((ulong)(puVar9[lVar1 * -4 + -3] * 0x517cc1b727220a95) >> 0x38);
        *(byte *)((long)__s + uVar14) = bVar3 >> 1;
        *(byte *)((long)__s + (uVar14 - 8 & uVar17) + 8) = bVar3 >> 1;
        uVar21 = puVar9[lVar1 * -4 + -4];
        uVar20 = puVar9[lVar1 * -4 + -1];
        uVar8 = puVar9[lVar1 * -4 + -2];
        uVar18 = uVar18 - 1 & uVar18;
        __s[uVar14 * -4 + -3] = puVar9[lVar1 * -4 + -3];
        __s[uVar14 * -4 + -4] = uVar21;
        __s[uVar14 * -4 + -1] = uVar20;
        __s[uVar14 * -4 + -2] = uVar8;
      } while (uVar13 != 0);
    }
    *param_1 = (long)__s;
    param_1[1] = uVar17;
    param_1[2] = uVar10 - uVar15;
    if ((uVar16 != 0) && (lVar6 = uVar16 * 0x20 + 0x20, uVar16 + lVar6 != -9)) {
      free((void *)((long)puVar9 - lVar6));
    }
  }
  else {
    if (uVar13 != 0) {
      __src = (ulong *)*param_1;
      puVar11 = __src;
      if ((uVar13 & 7) != 0) {
        uVar10 = uVar10 + 1;
      }
      do {
        uVar10 = uVar10 - 1;
        uVar18 = NEON_cmlt(*puVar11,0,1);
        *puVar11 = uVar18 | 0x8080808080808080;
        puVar11 = puVar11 + 1;
      } while (uVar10 != 0);
      if (uVar13 < 8) {
        memmove(__src + 1,__src,uVar16 + 1);
      }
      else {
        *(ulong *)((long)__src + uVar13) = *__src;
      }
      uVar18 = 0;
      do {
        if (*(char *)((long)__src + uVar18) == -0x80) {
          puVar11 = __src + ~uVar18 * 4;
          while( true ) {
            uVar13 = __src[uVar18 * -4 + -3] * 0x517cc1b727220a95;
            uVar10 = uVar13 & uVar16;
            uVar14 = NEON_cmlt(*(undefined8 *)((long)__src + uVar10),0,1);
            if (uVar14 == 0) {
              lVar6 = 8;
              uVar19 = uVar13 & uVar16;
              do {
                uVar19 = uVar19 + lVar6;
                lVar6 = lVar6 + 8;
                uVar19 = uVar19 & uVar16;
                uVar14 = NEON_cmlt(*(undefined8 *)((long)__src + uVar19),0,1);
              } while (uVar14 == 0);
            }
            else {
              uVar19 = uVar13 & uVar16;
            }
            uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
            uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
            uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar14 = uVar19 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar16;
            bVar3 = (byte)(uVar13 >> 0x38);
            if (*(char *)((long)__src + uVar14) < '\0') {
              uVar13 = uVar14 - uVar10 ^ uVar18 - uVar10;
            }
            else {
              uVar13 = NEON_cmlt(*__src,0,1);
              uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar14 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
              uVar13 = uVar14 - uVar10 ^ uVar18 - uVar10;
            }
            if ((uVar13 & uVar16) < 8) {
              *(byte *)((long)__src + uVar18) = bVar3 >> 1;
              *(byte *)((long)__src + (uVar18 - 8 & uVar16) + 8) = bVar3 >> 1;
              goto LAB_006f9c30;
            }
            cVar2 = *(char *)((long)__src + uVar14);
            *(byte *)((long)__src + uVar14) = bVar3 >> 1;
            puVar12 = __src + uVar14 * -4 + -4;
            *(byte *)((long)__src + (uVar14 - 8 & uVar16) + 8) = bVar3 >> 1;
            if (cVar2 == -1) break;
            uVar13 = *puVar11;
            *puVar11 = *puVar12;
            *puVar12 = uVar13;
            uVar13 = puVar11[1];
            puVar11[1] = __src[uVar14 * -4 + -3];
            __src[uVar14 * -4 + -3] = uVar13;
            uVar13 = puVar11[2];
            puVar11[2] = __src[uVar14 * -4 + -2];
            __src[uVar14 * -4 + -2] = uVar13;
            uVar13 = puVar11[3];
            puVar11[3] = __src[uVar14 * -4 + -1];
            __src[uVar14 * -4 + -1] = uVar13;
          }
          *(undefined1 *)((long)__src + uVar18) = 0xff;
          *(undefined1 *)((long)__src + (uVar18 - 8 & uVar16) + 8) = 0xff;
          uVar19 = *puVar11;
          uVar10 = puVar11[3];
          uVar13 = puVar11[2];
          __src[uVar14 * -4 + -3] = puVar11[1];
          *puVar12 = uVar19;
          __src[uVar14 * -4 + -1] = uVar10;
          __src[uVar14 * -4 + -2] = uVar13;
        }
LAB_006f9c30:
        bVar5 = uVar18 != uVar16;
        uVar18 = uVar18 + 1;
      } while (bVar5);
    }
    param_1[2] = uVar17 - uVar15;
  }
  return 0xffffffffffffffff;
}


// ===== 006f9f00  FUN_006f9f00 =====

undefined1  [16] FUN_006f9f00(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &PTR_FUN_00ad4cd0;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 006f9f10  FUN_006f9f10 =====

undefined1  [16] FUN_006f9f10(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &PTR_FUN_00ad4d48;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 006f9f20  FUN_006f9f20 =====

void FUN_006f9f20(void *param_1)

{
                    /* try { // try from 006f9f30 to 006f9f37 has its CatchHandler @ 006f9f64 */
  FUN_006fa2e8((long)param_1 + 8);
  if (*(long *)((long)param_1 + 0x38) != 0) {
    free(*(void **)((long)param_1 + 0x40));
  }
  free(param_1);
  return;
}


// ===== 006f9f94  FUN_006f9f94 =====

void FUN_006f9f94(void *param_1)

{
                    /* try { // try from 006f9fa4 to 006f9fab has its CatchHandler @ 006f9fd8 */
  FUN_006fa2e8((long)param_1 + 8);
  if (*(long *)((long)param_1 + 0x40) != 0) {
    free(*(void **)((long)param_1 + 0x38));
  }
  free(param_1);
  return;
}


// ===== 006fa008  FUN_006fa008 =====

void FUN_006fa008(void)

{
  return;
}


// ===== 006fa014  FUN_006fa014 =====

void FUN_006fa014(void)

{
  return;
}


// ===== 006fa020  FUN_006fa020 =====

long FUN_006fa020(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != 0x2f8db981bd62ccc5 || param_2[1] != -0x5f46c0e871985439) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 006fa060  FUN_006fa060 =====

long FUN_006fa060(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != -0x119351643378db84 || param_2[1] != 0x16fa802d90bf615b) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 006fa0a0  FUN_006fa0a0 =====

void FUN_006fa0a0(void *param_1)

{
                    /* try { // try from 006fa0b0 to 006fa0b7 has its CatchHandler @ 006fa0d0 */
  FUN_006fa2e8((long)param_1 + 8);
  free(param_1);
  return;
}


// ===== 006fa0ec  FUN_006fa0ec =====

void FUN_006fa0ec(void *param_1)

{
                    /* try { // try from 006fa0fc to 006fa103 has its CatchHandler @ 006fa11c */
  FUN_006fa2e8((long)param_1 + 8);
  free(param_1);
  return;
}


// ===== 006fa138  FUN_006fa138 =====

undefined1  [16] FUN_006fa138(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(undefined8 *)((long)param_1 + 0x38);
  uVar2 = *(undefined8 *)((long)param_1 + 0x40);
  uVar3 = *(undefined8 *)((long)param_1 + 0x48);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar4._0_8_ = (undefined8 *)FUN_004b25a4(0x18,8);
  if (auVar4._0_8_ != (undefined8 *)0x0) {
    *auVar4._0_8_ = uVar1;
    auVar4._0_8_[1] = uVar2;
    auVar4._0_8_[2] = uVar3;
                    /* try { // try from 006fa178 to 006fa17f has its CatchHandler @ 006fa1c0 */
    FUN_006fa2e8((long)param_1 + 8);
    free(param_1);
    auVar4._8_8_ = &PTR_FUN_00ad4cd0;
    return auVar4;
  }
                    /* try { // try from 006fa1b0 to 006fa1bb has its CatchHandler @ 006fa1dc */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 006fa218  FUN_006fa218 =====

undefined1  [16] FUN_006fa218(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = *(undefined8 *)((long)param_1 + 0x38);
  uVar2 = *(undefined8 *)((long)param_1 + 0x40);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  auVar3._0_8_ = (undefined8 *)FUN_004b25a4(0x10,8);
  if (auVar3._0_8_ != (undefined8 *)0x0) {
    *auVar3._0_8_ = uVar1;
    auVar3._0_8_[1] = uVar2;
                    /* try { // try from 006fa24c to 006fa253 has its CatchHandler @ 006fa290 */
    FUN_006fa2e8((long)param_1 + 8);
    free(param_1);
    auVar3._8_8_ = &PTR_FUN_00ad4d48;
    return auVar3;
  }
                    /* try { // try from 006fa280 to 006fa28b has its CatchHandler @ 006fa2ac */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 006fa2e8  FUN_006fa2e8 =====

void FUN_006fa2e8(ulong *param_1)

{
  void *__ptr;
  void *__ptr_00;
  ulong uVar1;
  int iVar2;
  void *__ptr_01;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if ((*param_1 != 0xffffffffffffffff) && (1 < *param_1)) {
    iVar2 = (int)param_1[5];
    if (iVar2 != 0) {
      if (iVar2 == 2) {
        return;
      }
      if (iVar2 != 3) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("internal error: entered unreachable code: invalid Once state",0x79,
                   &PTR_s__nix_store_8006w282fgsx3273c878b_00ad4fb0);
      }
    }
    __ptr = (void *)param_1[2];
    uVar1 = param_1[3];
    if (uVar1 != 0) {
      uVar3 = 0;
      do {
        __ptr_00 = *(void **)((long)__ptr + uVar3 * 0x38 + 0x28);
        lVar4 = *(long *)((long)__ptr + uVar3 * 0x38 + 0x30);
        if (lVar4 != 0) {
          plVar5 = (long *)((long)__ptr_00 + 0x20);
          do {
            if (0 < *plVar5) {
              free((void *)plVar5[1]);
            }
            if (plVar5[-4] != 2) {
              if (plVar5[-4] == 0) {
                if (plVar5[-3] != 0) {
                  __ptr_01 = (void *)plVar5[-2];
                  goto LAB_006fa368;
                }
              }
              else if (plVar5[-3] != 0) {
                __ptr_01 = (void *)plVar5[-2];
LAB_006fa368:
                free(__ptr_01);
              }
            }
            lVar4 = lVar4 + -1;
            plVar5 = plVar5 + 9;
          } while (lVar4 != 0);
        }
        if (*(long *)((long)__ptr + uVar3 * 0x38 + 0x20) != 0) {
          free(__ptr_00);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar1);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 006fa450  FUN_006fa450 =====

void FUN_006fa450(long *param_1)

{
  long lVar1;
  
  if (*param_1 != 0) {
    lVar1 = param_1[2];
                    /* try { // try from 006fa468 to 006fa46f has its CatchHandler @ 006fa48c */
    <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[1]);
    <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(lVar1);
    return;
  }
  return;
}


// ===== 006fa4a4  FUN_006fa4a4 =====

void FUN_006fa4a4(long param_1)

{
                    /* try { // try from 006fa4b4 to 006fa4bb has its CatchHandler @ 006fa4e4 */
  FUN_006fa2e8(param_1 + 8);
  if (*(long *)(param_1 + 0x38) != 0) {
    free(*(void **)(param_1 + 0x40));
    return;
  }
  return;
}


// ===== 006fa504  FUN_006fa504 =====

void FUN_006fa504(long param_1)

{
                    /* try { // try from 006fa514 to 006fa51b has its CatchHandler @ 006fa544 */
  FUN_006fa2e8(param_1 + 8);
  if (*(long *)(param_1 + 0x40) != 0) {
    free(*(void **)(param_1 + 0x38));
    return;
  }
  return;
}


// ===== 006fa564  FUN_006fa564 =====

void FUN_006fa564(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 006fa57c  FUN_006fa57c =====

void FUN_006fa57c(void *param_1)

{
  long lVar1;
  
  if ((param_1 != (void *)0xffffffffffffffff) &&
     (lVar1 = *(long *)((long)param_1 + 8) + -1, *(long *)((long)param_1 + 8) = lVar1, lVar1 == 0))
  {
    free(param_1);
    return;
  }
  return;
}


// ===== 006fa5a4  FUN_006fa5a4 =====

void FUN_006fa5a4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 006fa5bc to 006fa5c3 has its CatchHandler @ 006fa5e0 */
    <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop
              (*(undefined8 *)(param_1 + 0x20));
    <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(uVar1);
    return;
  }
  return;
}


// ===== 006fa5f8  FUN_006fa5f8 =====

void FUN_006fa5f8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1 + -1;
  *(long *)*param_1 = lVar1;
  if (lVar1 == 0) {
                    /* try { // try from 006fa61c to 006fa623 has its CatchHandler @ 006fa63c */
    <alloc[c1f8e832b0d782c7]::rc::Rc<core[bcece726f298455b]::cell::RefCell<core[bcece726f298455b]::option::Option<(jsi[bcce2507d20934e2]::function::Function,jsi[bcce2507d20934e2]::function::Function)>>>>
    ::drop_slow(param_1);
  }
  free(param_1);
  return;
}


// ===== 006fa658  FUN_006fa658 =====

void FUN_006fa658(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1 + -1;
  *(long *)*param_1 = lVar1;
  if (lVar1 != 0) {
    return;
  }
  <alloc[c1f8e832b0d782c7]::rc::Rc<core[bcece726f298455b]::cell::RefCell<core[bcece726f298455b]::option::Option<(jsi[bcce2507d20934e2]::function::Function,jsi[bcce2507d20934e2]::function::Function)>>>>
  ::drop_slow();
  return;
}


// ===== 006fa674  FUN_006fa674 =====

void FUN_006fa674(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[4];
                    /* try { // try from 006fa68c to 006fa68f has its CatchHandler @ 006fa6c8 */
  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[3]);
                    /* try { // try from 006fa690 to 006fa697 has its CatchHandler @ 006fa6c0 */
  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(lVar1);
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 006fa6f8  FUN_006fa6f8 =====

void FUN_006fa6f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
                    /* try { // try from 006fa708 to 006fa70f has its CatchHandler @ 006fa720 */
  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(*param_1);
  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(uVar1);
  return;
}


// ===== 006fa738  <anyhow::Error_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <anyhow::Error_as_core::ops::drop::Drop>::drop(void)

{
  (*(code *)PTR_drop_00b01a10)();
  return;
}


// ===== 006fa73c  FUN_006fa73c =====

void FUN_006fa73c(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 006fa754  cxxbridge1$shared_ptr$facebook$react$CallInvoker$drop =====

void cxxbridge1_shared_ptr_facebook_react_CallInvoker_drop(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_facebook_react_CallInvoker_drop_00b02ec0)();
  return;
}


// ===== 006fa758  FUN_006fa758 =====

void FUN_006fa758(long *param_1)

{
  long lVar1;
  long *local_40;
  undefined **ppuStack_38;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 1) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_40 = (long *)FUN_004b25a4(0x10,8);
    if (local_40 == (long *)0x0) {
                    /* try { // try from 006fa7ec to 006fa7f7 has its CatchHandler @ 006fa810 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x10);
    }
    lVar1 = param_1[1];
    ppuStack_38 = &PTR_FUN_00ad4f90;
    local_40[1] = param_1[2];
    *local_40 = lVar1;
    react_common_ffi_cxxbridge1_194_invoke_async(param_1 + 3,&local_40);
  }
  cxxbridge1_shared_ptr_facebook_react_CallInvoker_drop(param_1 + 3);
  if (*param_1 != 0) {
    lVar1 = param_1[2];
                    /* try { // try from 006fa7cc to 006fa7cf has its CatchHandler @ 006fa7fc */
    <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1[1]);
    <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(lVar1);
  }
  return;
}


// ===== 006fa83c  FUN_006fa83c =====

void FUN_006fa83c(undefined8 param_1,undefined8 param_2)

{
                    /* try { // try from 006fa84c to 006fa84f has its CatchHandler @ 006fa860 */
  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop();
  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_2);
  return;
}


// ===== 006fa878  FUN_006fa878 =====

void FUN_006fa878(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_5c [4];
  undefined1 auStack_58 [24];
  undefined8 local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined *local_20;
  code *pcStack_18;
  
  local_30 = local_5c;
  puStack_38 = PTR_fmt_00b00c40;
  pcStack_28 = FUN_006fb948;
  local_20 = &DAT_002cf5d8;
  pcStack_18 = FUN_006fb948;
  local_5c[0] = param_2;
  local_40 = param_1;
  alloc::fmt::format::format_inner(auStack_58,&DAT_002a27fe,&local_40);
  FUN_006f9874(auStack_58);
  return;
}


// ===== 006fa8d8  FUN_006fa8d8 =====

void FUN_006fa8d8(long *param_1,undefined8 param_2)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
                    /* try { // try from 006fa8f8 to 006fa903 has its CatchHandler @ 006fa92c */
  FUN_006fa96c(param_1[3],param_1[4],param_2,__ptr,param_1[2]);
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 006fa94c  FUN_006fa94c =====

void FUN_006fa94c(undefined8 *param_1,undefined8 param_2)

{
  FUN_006fa96c(*param_1,param_1[1],param_2,&DAT_002cf5a0,0x38);
  return;
}


// ===== 006fa96c  FUN_006fa96c =====

void FUN_006fa96c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined1 *local_50;
  code *pcStack_48;
  undefined1 uStack_21;
  
                    /* try { // try from 006fa990 to 006fa99f has its CatchHandler @ 006faac4 */
  local_58 = <jsi::error::jsi::error::Error>::new(param_3,param_4,param_5);
                    /* try { // try from 006fa9a4 to 006fa9af has its CatchHandler @ 006faabc */
  uVar1 = <jsi::error::Error_as_jsi::value::ToValue>::to_value(&local_58,param_3);
  uVar5 = *param_3;
                    /* try { // try from 006fa9b8 to 006fa9fb has its CatchHandler @ 006faae0 */
  lVar2 = <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__get(param_2)
  ;
  if (lVar2 == 0) {
    pcStack_48 = FUN_006fb2c8;
  }
  else {
    lVar3 = <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__get(uVar1);
    if (lVar3 != 0) {
      jsi_sys::ffi::base::ffi::Function_call1(&local_50,uVar5,lVar2,lVar3);
      pcVar4 = pcStack_48;
      if (local_50 != (undefined1 *)0x0) {
        pcVar4 = (code *)FUN_006fb970(local_50,pcStack_48);
      }
                    /* try { // try from 006faa00 to 006faa07 has its CatchHandler @ 006faabc */
      <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(uVar1);
                    /* try { // try from 006faa0c to 006faa1b has its CatchHandler @ 006faac4 */
      <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(local_58);
      if (local_50 == (undefined1 *)0x0) {
        <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(pcVar4);
                    /* try { // try from 006faa1c to 006faa23 has its CatchHandler @ 006faaa8 */
        <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_1);
        <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(param_2);
        return;
      }
                    /* try { // try from 006faa80 to 006faaa3 has its CatchHandler @ 006faacc */
      local_50 = pcVar4;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("invariant: failed to reject promise",0x23,&local_50,&PTR_drop_00ad4ed8,
                 &PTR_s_mobile_react_common_src_promise__00ad4ec0);
    }
    pcStack_48 = FUN_006fb2d8;
  }
  local_50 = &uStack_21;
                    /* try { // try from 006faa64 to 006faa77 has its CatchHandler @ 006faae0 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_50,&PTR_s__root__cargo_registry_src_index__00ad5000);
}


// ===== 006fab10  <react_common::promise::[1]::react_common::promise::Promise>::new =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <react_common::promise::[1]::react_common::promise::Promise>::new */

void __rustcall
<react_common::promise::[1]::react_common::promise::Promise>::new(long *param_1,undefined8 *param_2)

{
  undefined8 *****pppppuVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long *local_a8;
  long *local_a0;
  code *pcStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_68;
  undefined8 ****appppuStack_60 [2];
  
  local_90 = 0;
  lStack_88 = 0;
  pcStack_98 = (code *)0x1;
  local_a0 = (long *)&DAT_00000001;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar7 = (long *)FUN_004b25a4(0x30,8);
  if (plVar7 == (long *)0x0) {
                    /* try { // try from 006fad40 to 006fad4b has its CatchHandler @ 006faed4 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
  plVar7[1] = (long)pcStack_98;
  *plVar7 = (long)local_a0;
  plVar7[3] = lStack_88;
  plVar7[2] = local_90;
  lVar12 = *plVar7;
  plVar7[5] = lStack_78;
  plVar7[4] = local_80;
  *plVar7 = lVar12 + 1;
  local_a8 = plVar7;
  if (lVar12 != -1) {
    local_a0 = plVar7;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar8 = (undefined8 *)FUN_004b25a4(8,8);
    if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 006fad50 to 006fad5b has its CatchHandler @ 006faeb0 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,8);
    }
    *puVar8 = plVar7;
                    /* try { // try from 006faba0 to 006fabbb has its CatchHandler @ 006fae58 */
    <&str_as_jsi::prop_name_id::IntoPropNameInput>::into_input
              (&local_68,"promiseConsumer",0xf,param_2);
    uVar14 = *param_2;
    pppppuVar1 = (undefined8 *****)appppuStack_60[0];
    if ((int)local_68 == 0) {
      pppppuVar1 = appppuStack_60;
    }
                    /* try { // try from 006fabd8 to 006fabff has its CatchHandler @ 006faee8 */
    lVar12 = <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__get
                       (*pppppuVar1);
    if (lVar12 == 0) {
      local_a0 = (long *)((long)appppuStack_60 + 0xf);
      pcStack_98 = FUN_006fb2d0;
                    /* try { // try from 006fad70 to 006fad87 has its CatchHandler @ 006faee8 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002b2091,&local_a0,&PTR_s__root__cargo_registry_src_index__00ad5000);
    }
    lVar12 = jsi_sys::ffi::base::ffi::Function_createFromHostFunction
                       (uVar14,lVar12,2,puVar8,&PTR_FUN_00ad4c68);
    if (local_68 == 0) {
                    /* try { // try from 006fac08 to 006fac0f has its CatchHandler @ 006fae24 */
      <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                (appppuStack_60[0]);
    }
                    /* try { // try from 006fac10 to 006fac17 has its CatchHandler @ 006fae50 */
    auVar17 = <jsi::handle::jsi::handle::RuntimeHandle>::state(param_2);
    puVar9 = auVar17._0_8_;
                    /* try { // try from 006fac20 to 006fac2b has its CatchHandler @ 006fae60 */
    puVar8 = (undefined8 *)
             <jsi::famous_defs::jsi::famous_defs::FamousDefs>::Promise(auVar17._8_8_ + 0x20,param_2)
    ;
    uVar16 = *puVar8;
                    /* try { // try from 006fac34 to 006fac3f has its CatchHandler @ 006fae68 */
    local_68 = lVar12;
    uVar14 = <jsi::function::Function_as_jsi::value::ToValue>::to_value(&local_68,param_2);
    uVar15 = *param_2;
                    /* try { // try from 006fac48 to 006fac8b has its CatchHandler @ 006faf0c */
    lVar12 = <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__get
                       (uVar16);
    if (lVar12 == 0) {
      pcStack_98 = FUN_006fb2c8;
    }
    else {
      lVar10 = <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__get
                         (uVar14);
      if (lVar10 != 0) {
        jsi_sys::ffi::base::ffi::Function_callAsConstructor1(&local_a0,uVar15,lVar12,lVar10);
        plVar6 = local_a0;
        pcVar11 = pcStack_98;
        if (local_a0 != (long *)0x0) {
          pcVar11 = (code *)FUN_006fb970(local_a0,pcStack_98);
        }
                    /* try { // try from 006fac90 to 006fac97 has its CatchHandler @ 006fae68 */
        <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__drop(uVar14);
                    /* try { // try from 006fac9c to 006faca3 has its CatchHandler @ 006fae60 */
        <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(local_68)
        ;
        lVar12 = _DAT_002a0e50;
        if (plVar6 != (long *)0x0) {
                    /* try { // try from 006fadc8 to 006fadeb has its CatchHandler @ 006fae98 */
          local_a0 = (long *)pcVar11;
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    ("Promise() failed",0x10,&local_a0,&PTR_drop_00ad4ed8,
                     &PTR_s_mobile_react_common_src_promise__00ad4ef8);
        }
        if (plVar7[2] == 0) {
          lVar10 = plVar7[4];
          lVar2 = plVar7[5];
          uVar3 = *(uint *)(plVar7 + 3);
          plVar7[3] = _UNK_002a0e58;
          plVar7[2] = lVar12;
          if ((uVar3 & 1) != 0) {
            plVar7[2] = 0;
                    /* try { // try from 006faccc to 006facd7 has its CatchHandler @ 006fae2c */
            <jsi::handle::RuntimeHandle_as_react_common::runtime_executor::RuntimeHandleExt>::
            executor(&local_a0,param_2);
            param_1[2] = lVar10;
            param_1[3] = lVar2;
            *param_1 = (long)pcVar11;
            param_1[1] = 1;
            param_1[5] = (long)pcStack_98;
            param_1[4] = (long)local_a0;
            do {
              uVar13 = *puVar9;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar9,0x10);
              if (bVar5) {
                *puVar9 = uVar13 - 0x10;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar13 & 0xfffffffffffffff2) == 0x12) {
                    /* try { // try from 006fae10 to 006fae17 has its CatchHandler @ 006fae1c */
              <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_shared_slow
                        (puVar9);
            }
            lVar12 = *plVar7;
            *plVar7 = lVar12 + -1;
            if (lVar12 + -1 == 0) {
              <alloc[c1f8e832b0d782c7]::rc::Rc<core[bcece726f298455b]::cell::RefCell<core[bcece726f298455b]::option::Option<(jsi[bcce2507d20934e2]::function::Function,jsi[bcce2507d20934e2]::function::Function)>>>>
              ::drop_slow(&local_a8);
            }
            return;
          }
                    /* try { // try from 006fae00 to 006fae0b has its CatchHandler @ 006fae70 */
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s_mobile_react_common_src_promise__00ad4f10);
        }
                    /* try { // try from 006fadf0 to 006fadfb has its CatchHandler @ 006fae84 */
        core::cell::panic_already_borrowed(&PTR_s_mobile_react_common_src_promise__00ad4f28);
        goto LAB_006fae0c;
      }
      pcStack_98 = FUN_006fb2d8;
    }
    local_a0 = (long *)((long)appppuStack_60 + 0xf);
                    /* try { // try from 006fadac to 006fadbf has its CatchHandler @ 006faf0c */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt
              (&DAT_002b2091,&local_a0,&PTR_s__root__cargo_registry_src_index__00ad5000);
  }
LAB_006fae0c:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x6fae10);
  (*pcVar11)();
}


// ===== 006faf84  <alloc[c1f8e832b0d782c7]::rc::Rc<core[bcece726f298455b]::cell::RefCell<core[bcece726f298455b]::option::Option<(jsi[bcce2507d20934e2]::function::Function,jsi[bcce2507d20934e2]::function::Function)>>>>::drop_slow =====

/* <alloc[c1f8e832b0d782c7]::rc::Rc<core[bcece726f298455b]::cell::RefCell<core[bcece726f298455b]::option::Option<(jsi[bcce2507d20934e2]::function::Function,
   jsi[bcce2507d20934e2]::function::Function)>>>>::drop_slow */

void <alloc[c1f8e832b0d782c7]::rc::Rc<core[bcece726f298455b]::cell::RefCell<core[bcece726f298455b]::option::Option<(jsi[bcce2507d20934e2]::function::Function,jsi[bcce2507d20934e2]::function::Function)>>>>
     ::drop_slow(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (*(long *)((long)__ptr + 0x18) != 0) {
    uVar1 = *(undefined8 *)((long)__ptr + 0x28);
                    /* try { // try from 006fafa0 to 006fafa3 has its CatchHandler @ 006faffc */
    <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop
              (*(undefined8 *)((long)__ptr + 0x20));
                    /* try { // try from 006fafa4 to 006fafab has its CatchHandler @ 006fafe8 */
    <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(uVar1);
  }
  if ((__ptr != (void *)0xffffffffffffffff) &&
     (lVar2 = *(long *)((long)__ptr + 8) + -1, *(long *)((long)__ptr + 8) = lVar2, lVar2 == 0)) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 006fb020  <react_common::promise::react_common::promise::PromiseHandle>::reject_async =====

/* WARNING: Unknown calling convention: __rustcall */
/* <react_common::promise::react_common::promise::PromiseHandle>::reject_async */

void __rustcall
<react_common::promise::react_common::promise::PromiseHandle>::reject_async
          (long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long local_48;
  long lStack_40;
  undefined8 *local_30;
  undefined **ppuStack_28;
  
  lVar1 = *param_1;
  lVar3 = param_1[2];
  lVar2 = param_1[1];
  *param_1 = 0;
  local_80 = param_2;
  if (lVar1 != 1) {
                    /* try { // try from 006fb0e8 to 006fb0ff has its CatchHandler @ 006fb148 */
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("invariant: promise handle already dropped",0x29,
               &PTR_s_mobile_react_common_src_promise__00ad4f40);
  }
  local_60 = &local_80;
  puStack_58 = PTR_fmt_00b00dc8;
                    /* try { // try from 006fb060 to 006fb073 has its CatchHandler @ 006fb11c */
  alloc::fmt::format::format_inner(&local_78,&DAT_002ab692,&local_60);
  puStack_58 = (undefined *)uStack_70;
  local_60 = local_78;
  local_50 = local_68;
  local_48 = lVar2;
  lStack_40 = lVar3;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_30 = (undefined8 *)FUN_004b25a4(0x28,8);
  if (local_30 != (undefined8 *)0x0) {
    local_30[4] = lStack_40;
    local_30[1] = puStack_58;
    *local_30 = local_60;
    local_30[3] = local_48;
    local_30[2] = local_50;
    ppuStack_28 = &PTR_FUN_00ad4f58;
    react_common_ffi_cxxbridge1_194_invoke_async(param_1 + 3,&local_30);
                    /* try { // try from 006fb0c8 to 006fb0cf has its CatchHandler @ 006fb114 */
    <anyhow::Error_as_core::ops::drop::Drop>::drop(&local_80);
    FUN_006fa758(param_1);
    return;
  }
                    /* try { // try from 006fb104 to 006fb10f has its CatchHandler @ 006fb134 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x28);
}


// ===== 006fb168  <react_common::promise::react_common::promise::PromiseHandle>::reject =====

/* WARNING: Unknown calling convention: __rustcall */
/* <react_common::promise::react_common::promise::PromiseHandle>::reject */

void __rustcall
<react_common::promise::react_common::promise::PromiseHandle>::reject
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_70;
  long local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined *puStack_48;
  
  local_50 = (undefined1 *)&local_70;
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  *param_1 = 0;
  local_70 = param_3;
  if (lVar1 == 1) {
    puStack_48 = PTR_fmt_00b00dc8;
                    /* try { // try from 006fb1b0 to 006fb1c3 has its CatchHandler @ 006fb25c */
    alloc::fmt::format::format_inner(&local_68,&DAT_002ab692,&local_50);
                    /* try { // try from 006fb1cc to 006fb1df has its CatchHandler @ 006fb240 */
    FUN_006fa96c(lVar2,lVar3,param_2,pvStack_60,local_58);
    if (local_68 != 0) {
      free(pvStack_60);
    }
                    /* try { // try from 006fb1f4 to 006fb1fb has its CatchHandler @ 006fb238 */
    <anyhow::Error_as_core::ops::drop::Drop>::drop(&local_70);
    FUN_006fa758(param_1);
    return;
  }
                    /* try { // try from 006fb21c to 006fb233 has its CatchHandler @ 006fb270 */
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed
            ("invariant: promise handle already dropped",0x29,
             &PTR_s_mobile_react_common_src_promise__00ad4f78);
}


// ===== 006fb290  react_common::ffi::base::ffi::invoke_async =====

/* WARNING: Unknown calling convention: __rustcall */
/* react_common::ffi::base::ffi::invoke_async */

void __rustcall
react_common::ffi::base::ffi::invoke_async(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_2;
  uStack_18 = param_3;
  react_common_ffi_cxxbridge1_194_invoke_async(param_1,&local_20);
  return;
}


// ===== 006fb2b4  FUN_006fb2b4 =====

void FUN_006fb2b4(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 006fb2c8  FUN_006fb2c8 =====

void FUN_006fb2c8(undefined8 param_1,undefined8 param_2)

{
  <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__typename(param_2);
  return;
}


// ===== 006fb2d0  FUN_006fb2d0 =====

void FUN_006fb2d0(undefined8 param_1,undefined8 param_2)

{
  <jsi_sys::ffi::base::ffi::JsiPropNameID_as_cxx::unique_ptr::UniquePtrTarget>::__typename(param_2);
  return;
}


// ===== 006fb2d8  FUN_006fb2d8 =====

void FUN_006fb2d8(undefined8 param_1,undefined8 param_2)

{
  <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__typename(param_2);
  return;
}


// ===== 006fb2e0  FUN_006fb2e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fb2e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0c90;
  param_1[1] = _UNK_002a0c98;
  *param_1 = uVar1;
  return;
}


// ===== 006fb2f4  <react_common::promise::PromiseHandle_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <react_common::promise::PromiseHandle as core::ops::drop::Drop>::drop */

void __rustcall <react_common::promise::PromiseHandle_as_core::ops::drop::Drop>::drop(long *param_1)

{
  long lVar1;
  long *local_30;
  undefined **ppuStack_28;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 1) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_30 = (long *)FUN_004b25a4(0x10,8);
    if (local_30 == (long *)0x0) {
                    /* try { // try from 006fb360 to 006fb36b has its CatchHandler @ 006fb370 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x10);
    }
    lVar1 = param_1[1];
    ppuStack_28 = &PTR_FUN_00ad4f90;
    local_30[1] = param_1[2];
    *local_30 = lVar1;
    react_common_ffi_cxxbridge1_194_invoke_async(param_1 + 3,&local_30);
  }
  return;
}


// ===== 006fb388  FUN_006fb388 =====

void FUN_006fb388(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
            (param_2,"Exception",9,&DAT_002bd254,4,&local_18,&DAT_00ad4fc8);
  return;
}


// ===== 006fb3d4  <jsi::handle::RuntimeHandle_as_react_common::runtime_executor::RuntimeHandleExt>::register_call_invoker =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi::handle::RuntimeHandle as
   react_common::runtime_executor::RuntimeHandleExt>::register_call_invoker */

void __rustcall
<jsi::handle::RuntimeHandle_as_react_common::runtime_executor::RuntimeHandleExt>::
register_call_invoker(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
                    /* try { // try from 006fb3f8 to 006fb3fb has its CatchHandler @ 006fb664 */
  auVar16 = <jsi::handle::jsi::handle::RuntimeHandle>::state();
  plVar9 = auVar16._8_8_;
  puVar7 = auVar16._0_8_;
  uStack_48 = param_2[1];
  local_50 = *param_2;
  lVar1 = *plVar9;
  uVar3 = plVar9[1];
  lVar10 = 0;
  uVar11 = uVar3 & 0xd029c3e267e7c811;
  uVar14 = *(undefined8 *)(lVar1 + uVar11);
  uVar15 = NEON_cmeq(uVar14,0x6868686868686868,1);
  while( true ) {
    for (uVar15 = uVar15 & 0x8080808080808080; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar4 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      lVar12 = lVar1 + (uVar11 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar3) *
                       -0x20;
      if (*(long *)(lVar12 + -0x18) == -0x21525b68e1c0db73 &&
          *(long *)(lVar12 + -0x20) == -0x32417c45dbdf0850) {
        uStack_60 = param_2[1];
        uStack_68 = *param_2;
        local_70 = 1;
                    /* try { // try from 006fb4dc to 006fb4f3 has its CatchHandler @ 006fb684 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&local_70,
                   "invariant: runtime executor already registeredUndefinedNullBoolNumberBigIntStringSymbolObjectValue"
                   ,0x5d,&PTR_s_mobile_react_common_src_runtime__00ad4fe8);
      }
    }
    uVar14 = NEON_cmeq(uVar14,0xffffffffffffffff,1);
    bVar13 = NEON_umaxv(uVar14,1);
    if ((bVar13 & 1) != 0) break;
    lVar10 = lVar10 + 8;
    uVar11 = uVar11 + lVar10 & uVar3;
    uVar14 = *(undefined8 *)(lVar1 + uVar11);
    uVar15 = NEON_cmeq(uVar14,0x6868686868686868,1);
  }
  if (plVar9[2] == 0) {
                    /* try { // try from 006fb5f8 to 006fb607 has its CatchHandler @ 006fb658 */
    <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any+core[bcece726f298455b]::marker::Send>)>>
    ::reserve_rehash::
    <hashbrown[32fc5d502e7f9af5]::map::make_hasher<core[bcece726f298455b]::any::TypeId,alloc[c1f8e832b0d782c7]::boxed::Box<dyn_core[bcece726f298455b]::any::Any_core[bcece726f298455b]::marker::Send>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
              (plVar9,1);
  }
  uStack_68 = param_2[1];
  local_70 = *param_2;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar8 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 006fb60c to 006fb617 has its CatchHandler @ 006fb678 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x10);
  }
  uVar14 = *param_2;
  puVar8[1] = param_2[1];
  *puVar8 = uVar14;
  puVar2 = (undefined8 *)*plVar9;
  uVar3 = plVar9[1];
  uVar15 = uVar3 & 0xd029c3e267e7c811;
  uVar11 = NEON_cmlt(*(undefined8 *)((long)puVar2 + uVar15),0,1);
  if (uVar11 == 0) {
    lVar10 = 8;
    do {
      uVar15 = uVar15 + lVar10;
      lVar10 = lVar10 + 8;
      uVar15 = uVar15 & uVar3;
      uVar11 = NEON_cmlt(*(undefined8 *)((long)puVar2 + uVar15),0,1);
    } while (uVar11 == 0);
  }
  uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
  uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
  uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  uVar11 = uVar15 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar3;
  uVar15 = (ulong)*(char *)((long)puVar2 + uVar11);
  if (-1 < *(char *)((long)puVar2 + uVar11)) {
    uVar15 = NEON_cmlt(*puVar2,0,1);
    uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
    uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar11 = (ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3;
    uVar15 = (ulong)*(byte *)((long)puVar2 + uVar11);
  }
  *(undefined1 *)((long)puVar2 + uVar11) = 0x68;
  *(undefined1 *)((long)puVar2 + (uVar11 - 8 & uVar3) + 8) = 0x68;
  puVar2[uVar11 * -4 + -4] = 0xcdbe83ba2420f7b0;
  puVar2[uVar11 * -4 + -3] = 0xdeada4971e3f248d;
  puVar2[uVar11 * -4 + -2] = puVar8;
  puVar2[uVar11 * -4 + -1] = &PTR_cxxbridge1_shared_ptr_facebook_react_CallInvoker_drop_00ad4c90;
  plVar9[3] = plVar9[3] + 1;
  plVar9[2] = plVar9[2] - (uVar15 & 1);
  do {
    uVar15 = *puVar7;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar6) {
      *puVar7 = uVar15 - 0x10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar15 & 0xfffffffffffffff2) != 0x12) {
    return;
  }
  <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_shared_slow(puVar7);
  return;
}


// ===== 006fb6d0  <jsi::handle::RuntimeHandle_as_react_common::runtime_executor::RuntimeHandleExt>::executor =====

/* WARNING: Unknown calling convention: __rustcall */
/* <jsi::handle::RuntimeHandle as react_common::runtime_executor::RuntimeHandleExt>::executor */

void __rustcall
<jsi::handle::RuntimeHandle_as_react_common::runtime_executor::RuntimeHandleExt>::executor
          (undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined *local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  
  auVar14 = <jsi::handle::jsi::handle::RuntimeHandle>::state();
  plVar7 = auVar14._8_8_;
  puVar6 = auVar14._0_8_;
  if (plVar7[3] != 0) {
    lVar1 = *plVar7;
    uVar2 = plVar7[1];
    lVar8 = 0;
    uVar9 = uVar2 & 0xd029c3e267e7c811;
    uVar12 = *(undefined8 *)(lVar1 + uVar9);
    uVar13 = NEON_cmeq(uVar12,0x6868686868686868,1);
    while( true ) {
      for (uVar13 = uVar13 & 0x8080808080808080; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
        uVar3 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        lVar10 = lVar1 + (uVar9 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) *
                         -0x20;
        if (*(long *)(lVar10 + -0x18) == -0x21525b68e1c0db73 &&
            *(long *)(lVar10 + -0x20) == -0x32417c45dbdf0850) {
          cxxbridge1_shared_ptr_facebook_react_CallInvoker_clone
                    (*(undefined8 *)(lVar10 + -0x10),param_1);
          do {
            uVar13 = *puVar6;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar5) {
              *puVar6 = uVar13 - 0x10;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar13 & 0xfffffffffffffff2) != 0x12) {
            return;
          }
          <parking_lot::raw_rwlock::[8]::parking_lot::raw_rwlock::RawRwLock>::unlock_shared_slow
                    (puVar6);
          return;
        }
      }
      uVar12 = NEON_cmeq(uVar12,0xffffffffffffffff,1);
      bVar11 = NEON_umaxv(uVar12,1);
      if ((bVar11 & 1) != 0) break;
      lVar8 = lVar8 + 8;
      uVar9 = uVar9 + lVar8 & uVar2;
      uVar12 = *(undefined8 *)(lVar1 + uVar9);
      uVar13 = NEON_cmeq(uVar12,0x6868686868686868,1);
    }
  }
  local_40 = &DAT_002cf571;
  uStack_38 = 0x2f;
  pcStack_28 = FUN_006fb88c;
                    /* try { // try from 006fb80c to 006fb823 has its CatchHandler @ 006fb83c */
  local_30 = (undefined1 *)&local_40;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_002b34cb,&local_30,&PTR_s_mobile_jsi_src_registry_rs_00ad4e90);
}


// ===== 006fb878  FUN_006fb878 =====

void FUN_006fb878(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 006fb88c  FUN_006fb88c =====

void FUN_006fb88c(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006fb8a0  <react_common::promise::Promise_as_jsi::value::ToValue>::to_value =====

/* WARNING: Unknown calling convention: __rustcall */
/* <react_common::promise::Promise as jsi::value::ToValue>::to_value */

void __rustcall
<react_common::promise::Promise_as_jsi::value::ToValue>::to_value
          (undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *local_30;
  code *pcStack_28;
  undefined1 uStack_1;
  
  lVar1 = <jsi_sys::ffi::base::ffi::JsiValue_as_cxx::unique_ptr::UniquePtrTarget>::__get(*param_1);
  if (lVar1 != 0) {
    jsi_sys::ffi::base::ffi::Value_clone(*param_2,lVar1);
    return;
  }
  local_30 = &uStack_1;
  pcStack_28 = FUN_006fb2d8;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_002b2091,&local_30,&PTR_s__root__cargo_registry_src_index__00ad5000);
}


// ===== 006fb900  FUN_006fb900 =====

void FUN_006fb900(void)

{
  long extraout_x1;
  
  <anyhow::error::[6]::anyhow::error::ErrorImpl>::error();
                    /* WARNING: Could not recover jumptable at 0x006fb914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x1 + 0x30))();
  return;
}


// ===== 006fb918  <anyhow::error::[6]::anyhow::error::ErrorImpl>::provide =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <anyhow::error::[6]::anyhow::error::ErrorImpl>::provide(void)

{
  (*(code *)PTR_provide_00b018f8)();
  return;
}


// ===== 006fb91c  <anyhow::fmt::anyhow::error::ErrorImpl>::debug =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <anyhow::fmt::anyhow::error::ErrorImpl>::debug(void)

{
  (*(code *)PTR_debug_00b01908)();
  return;
}


// ===== 006fb920  FUN_006fb920 =====

void FUN_006fb920(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = <anyhow::error::[6]::anyhow::error::ErrorImpl>::error();
                    /* WARNING: Could not recover jumptable at 0x006fb944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(auVar1._8_8_ + 0x20))(auVar1._0_8_,param_2);
  return;
}


// ===== 006fb948  FUN_006fb948 =====

void FUN_006fb948(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002cf7f0 + *(int *)(&DAT_002cf7f0 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_002cf7a8 + (ulong)*param_1 * 8));
  return;
}


// ===== 006fb970  FUN_006fb970 =====

void FUN_006fb970(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_90 = param_1;
  uStack_88 = param_2;
                    /* try { // try from 006fb984 to 006fb99f has its CatchHandler @ 006fb9d8 */
  lVar1 = anyhow::nightly::request_ref_backtrace(&local_90,&PTR_FUN_00ad4d48);
  if (lVar1 == 0) {
    <std::backtrace::[2]::std::backtrace::Backtrace>::capture(&local_50);
    uStack_58 = uStack_28;
    local_60 = local_30;
    uStack_78 = uStack_48;
    local_80 = local_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
  }
  else {
    local_80 = 0xffffffffffffffff;
  }
  FUN_006f9980(local_90,uStack_88,&local_80);
  return;
}


// ===== 006fb9f8  FUN_006fb9f8 =====

void FUN_006fb9f8(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 006fba0c  <react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__typename =====

/* WARNING: Unknown calling convention: __rustcall */
/* <react_common::ffi::base::ffi::CallInvoker as cxx::shared_ptr::SharedPtrTarget>::__typename */

void __rustcall
<react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__typename
          (undefined8 param_1)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1,"CallInvoker",0xb);
  return;
}


// ===== 006fba1c  <react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <react_common::ffi::base::ffi::CallInvoker as cxx::shared_ptr::SharedPtrTarget>::__get */

void __rustcall
<react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__get(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_facebook_react_CallInvoker_get_00b02f10)();
  return;
}


// ===== 006fba20  <react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__raw =====

/* WARNING: Unknown calling convention: __rustcall */
/* <react_common::ffi::base::ffi::CallInvoker as cxx::shared_ptr::SharedPtrTarget>::__raw */

void __rustcall
<react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__raw
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = cxxbridge1_shared_ptr_facebook_react_CallInvoker_raw();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt("facebook::react::CallInvoker is not destructible",0x61,param_3);
}


// ===== 006fba58  <react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <react_common::ffi::base::ffi::CallInvoker as cxx::shared_ptr::SharedPtrTarget>::__drop */

void __rustcall
<react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__drop(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_facebook_react_CallInvoker_drop_00b02ec0)();
  return;
}


// ===== 006fba5c  <react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__null =====

/* WARNING: Unknown calling convention: __rustcall */
/* <react_common::ffi::base::ffi::CallInvoker as cxx::shared_ptr::SharedPtrTarget>::__null */

void __rustcall
<react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__null(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_facebook_react_CallInvoker_null_00b02f20)();
  return;
}


// ===== 006fba60  <react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <react_common::ffi::base::ffi::CallInvoker as cxx::shared_ptr::SharedPtrTarget>::__clone */

void __rustcall
<react_common::ffi::base::ffi::CallInvoker_as_cxx::shared_ptr::SharedPtrTarget>::__clone(void)

{
  (*(code *)PTR_cxxbridge1_shared_ptr_facebook_react_CallInvoker_clone_00b02f00)();
  return;
}


// ===== 006fba64  FUN_006fba64 =====

undefined8 FUN_006fba64(void)

{
  return 2;
}


// ===== 006fba6c  FUN_006fba6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fba6c(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_90;
  undefined4 local_84;
  undefined1 auStack_80 [28];
  undefined4 local_64;
  undefined8 local_60;
  undefined *local_58;
  undefined4 *local_50;
  undefined *puStack_48;
  
  iVar2 = *(int *)(param_4 + 0x18);
  lVar9 = *param_2;
  local_84 = 0;
  local_90 = param_3;
  if (iVar2 == 0) {
    local_64 = 0;
    local_60 = &local_84;
    local_58 = PTR_fmt_00b00c40;
    local_50 = &local_64;
    puStack_48 = PTR_fmt_00b00c40;
    alloc::fmt::format::format_inner(auStack_80,&DAT_002a1b18,&local_60);
    uVar6 = FUN_006f9874(auStack_80);
  }
  else {
    lVar7 = *(long *)(param_4 + 8);
    <jsi::function::Function_as_jsi::value::FromValueRef>::from_value_ref(&local_60,&local_90,lVar7)
    ;
    puVar4 = local_58;
    if ((char)local_60 != '\x01') {
      local_84 = 1;
      if (iVar2 == 1) {
        local_64 = 1;
        local_60 = &local_84;
        local_58 = PTR_fmt_00b00c40;
        local_50 = &local_64;
        puStack_48 = PTR_fmt_00b00c40;
                    /* try { // try from 006fbc0c to 006fbc27 has its CatchHandler @ 006fbc70 */
        alloc::fmt::format::format_inner(auStack_80,&DAT_002a1b18,&local_60);
        uVar6 = FUN_006f9874(auStack_80);
      }
      else {
                    /* try { // try from 006fbad8 to 006fbaff has its CatchHandler @ 006fbc70 */
        <jsi::function::Function_as_jsi::value::FromValueRef>::from_value_ref
                  (&local_60,&local_90,lVar7 + *(long *)(param_4 + 0x10));
        uVar3 = _UNK_0029f728;
        uVar6 = _DAT_0029f720;
        if ((char)local_60 != '\x01') {
          if (*(long *)(lVar9 + 0x10) == 0) {
            uVar8 = *(undefined8 *)(lVar9 + 0x28);
            lVar7 = *(long *)(lVar9 + 0x18);
            uVar1 = *(undefined8 *)(lVar9 + 0x20);
            *(undefined **)(lVar9 + 0x20) = puVar4;
            *(undefined **)(lVar9 + 0x28) = local_58;
            *(undefined8 *)(lVar9 + 0x18) = uVar3;
            *(undefined8 *)(lVar9 + 0x10) = uVar6;
            if (lVar7 != 0) {
                    /* try { // try from 006fbb50 to 006fbb53 has its CatchHandler @ 006fbc4c */
              <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                        (uVar1);
                    /* try { // try from 006fbb54 to 006fbb5b has its CatchHandler @ 006fbc3c */
              <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop
                        (uVar8);
              lVar7 = *(long *)(lVar9 + 0x10) + 1;
            }
            *(long *)(lVar9 + 0x10) = lVar7;
            uVar6 = <jsi::value::[0]::jsi::value::Value>::undefined();
            *param_1 = 0;
            param_1[1] = uVar6;
            return;
          }
                    /* try { // try from 006fbc2c to 006fbc37 has its CatchHandler @ 006fbc84 */
          core::cell::panic_already_borrowed(&PTR_s_mobile_react_common_src_promise__00ad4ea8);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x6fbc3c);
          (*pcVar5)();
        }
        uVar6 = FUN_006fa878(&local_84,local_60._1_1_);
      }
      *param_1 = 1;
      param_1[1] = uVar6;
      <jsi_sys::ffi::base::ffi::JsiFunction_as_cxx::unique_ptr::UniquePtrTarget>::__drop(puVar4);
      return;
    }
    uVar6 = FUN_006fa878(&local_84,local_60._1_1_);
  }
  *param_1 = 1;
  param_1[1] = uVar6;
  return;
}


// ===== 006fbca4  FUN_006fbca4 =====

undefined1  [16] FUN_006fbca4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 006fbcb4  FUN_006fbcb4 =====

void FUN_006fbcb4(void)

{
  long extraout_x1;
  
  <anyhow::error::[6]::anyhow::error::ErrorImpl>::error();
                    /* WARNING: Could not recover jumptable at 0x006fbcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x1 + 0x30))();
  return;
}


// ===== 006fbccc  FUN_006fbccc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fbccc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f5a0;
  param_1[1] = _UNK_0029f5a8;
  *param_1 = uVar1;
  return;
}


// ===== 006fbce0  FUN_006fbce0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fbce0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029fd70;
  param_1[1] = _UNK_0029fd78;
  *param_1 = uVar1;
  return;
}


// ===== 006fbcf4  FUN_006fbcf4 =====

undefined1  [16] FUN_006fbcf4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 006fbd04  FUN_006fbd04 =====

undefined8 FUN_006fbd04(void)

{
  return 0;
}


// ===== 006fbd0c  FUN_006fbd0c =====

void FUN_006fbd0c(void)

{
  return;
}


// ===== 006fbd10  FUN_006fbd10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fbd10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f2e0;
  param_1[1] = _UNK_0029f2e8;
  *param_1 = uVar1;
  return;
}


// ===== 006fbd24  FUN_006fbd24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fbd24(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f6e0;
  param_1[1] = _UNK_0029f6e8;
  *param_1 = uVar1;
  return;
}


// ===== 006fbd38  react_common$ffi$cxxbridge1$194$call_rust_task =====

void react_common_ffi_cxxbridge1_194_call_rust_task(undefined8 *param_1,undefined8 param_2)

{
  void *__ptr;
  long lVar1;
  undefined8 local_28;
  
  __ptr = (void *)*param_1;
  lVar1 = param_1[1];
                    /* try { // try from 006fbd64 to 006fbd6f has its CatchHandler @ 006fbd94 */
  local_28 = param_2;
  (**(code **)(lVar1 + 0x18))(__ptr,&local_28);
  if (*(long *)(lVar1 + 8) != 0) {
    free(__ptr);
  }
  return;
}


// ===== 006fbdb8  react_common$ffi$cxxbridge1$194$dyn_async_task_drop_in_place =====

void react_common_ffi_cxxbridge1_194_dyn_async_task_drop_in_place(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = *(void **)*param_1;
  puVar1 = (undefined8 *)((undefined8 *)*param_1)[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 006fbde8 to 006fbdef has its CatchHandler @ 006fbe20 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 006fbe44  react_common$ffi$cxxbridge1$194$invoke_async =====

void react_common_ffi_cxxbridge1_194_invoke_async(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2[1];
  local_20 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  react_common::ffi::invoke_async(param_1,&local_20);
  react_common::ffi::BoxDynAsyncTask::~BoxDynAsyncTask((BoxDynAsyncTask *)&local_20);
  return;
}


// ===== 006fbe78  react_common::ffi::call_rust_task =====

/* WARNING: Unknown calling convention: __rustcall */
/* react_common::ffi::call_rust_task */

void __rustcall react_common::ffi::call_rust_task(undefined8 *param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  local_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  react_common_ffi_cxxbridge1_194_call_rust_task(&local_20);
  return;
}


// ===== 006fbea4  react_common::ffi::dyn_async_task_drop_in_place =====

/* WARNING: Unknown calling convention: __rustcall */
/* react_common::ffi::dyn_async_task_drop_in_place */

void __rustcall react_common::ffi::dyn_async_task_drop_in_place(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1;
  react_common_ffi_cxxbridge1_194_dyn_async_task_drop_in_place(&local_18);
  return;
}


// ===== 006fbec8  cxxbridge1$shared_ptr$facebook$react$CallInvoker$null =====

void cxxbridge1_shared_ptr_facebook_react_CallInvoker_null(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 006fbed0  cxxbridge1$shared_ptr$facebook$react$CallInvoker$raw =====

undefined8 cxxbridge1_shared_ptr_facebook_react_CallInvoker_raw(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = param_2;
                    /* try { // try from 006fbee8 to 006fbeef has its CatchHandler @ 006fbf1c */
  plVar2 = (long *)operator_new(0x20);
  puVar1 = PTR_vtable_00b00dd0;
  plVar2[2] = 0;
  plVar2[3] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  param_1[1] = (long)plVar2;
  return 1;
}


// ===== 006fbf3c  cxxbridge1$shared_ptr$facebook$react$CallInvoker$clone =====

void cxxbridge1_shared_ptr_facebook_react_CallInvoker_clone(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00ab1cb0(1,lVar1 + 8);
  }
  return;
}


// ===== 006fbf64  cxxbridge1$shared_ptr$facebook$react$CallInvoker$get =====

undefined8 cxxbridge1_shared_ptr_facebook_react_CallInvoker_get(undefined8 *param_1)

{
  return *param_1;
}


// ===== 006fbf6c  cxxbridge1$shared_ptr$facebook$react$CallInvoker$drop =====

void cxxbridge1_shared_ptr_facebook_react_CallInvoker_drop(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00ab1ce0(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 006fbfbc  std::__ndk1::__shared_ptr_pointer<facebook::react::CallInvoker*,std::__ndk1::shared_ptr<facebook::react::CallInvoker>::__shared_ptr_default_delete<facebook::react::CallInvoker,facebook::react::CallInvoker>,std::__ndk1::allocator<facebook::react::CallInvoker>>::~__shared_ptr_pointer =====

/* std::__ndk1::__shared_ptr_pointer<facebook::react::CallInvoker*,
   std::__ndk1::shared_ptr<facebook::react::CallInvoker>::__shared_ptr_default_delete<facebook::react::CallInvoker,
   facebook::react::CallInvoker>, std::__ndk1::allocator<facebook::react::CallInvoker>
   >::~__shared_ptr_pointer() */

void __thiscall
std::__ndk1::
__shared_ptr_pointer<facebook::react::CallInvoker*,std::__ndk1::shared_ptr<facebook::react::CallInvoker>::__shared_ptr_default_delete<facebook::react::CallInvoker,facebook::react::CallInvoker>,std::__ndk1::allocator<facebook::react::CallInvoker>>
::~__shared_ptr_pointer
          (__shared_ptr_pointer<facebook::react::CallInvoker*,std::__ndk1::shared_ptr<facebook::react::CallInvoker>::__shared_ptr_default_delete<facebook::react::CallInvoker,facebook::react::CallInvoker>,std::__ndk1::allocator<facebook::react::CallInvoker>>
           *this)

{
  std::__ndk1::__shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  operator_delete(this);
  return;
}


// ===== 006fbfe0  FUN_006fbfe0 =====

void FUN_006fbfe0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006fbff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  return;
}


// ===== 006fbff8  FUN_006fbff8 =====

void FUN_006fbff8(undefined8 param_1,long param_2)

{
  FUN_00ab8e1c(*(undefined8 *)(param_2 + 8));
  return;
}


// ===== 006fc008  FUN_006fc008 =====

undefined8 FUN_006fc008(long param_1)

{
  long in_x9;
  undefined8 in_x10;
  
  if (param_1 != in_x9) {
    in_x10 = 0;
  }
  return in_x10;
}


// ===== 006fc014  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00b014c8)();
  return;
}


// ===== 006fc018  react_common::ffi::BoxDynAsyncTask::~BoxDynAsyncTask =====

/* react_common::ffi::BoxDynAsyncTask::~BoxDynAsyncTask() */

void __thiscall react_common::ffi::BoxDynAsyncTask::~BoxDynAsyncTask(BoxDynAsyncTask *this)

{
  if (*(long *)this != 0 || *(long *)(this + 8) != 0) {
    dyn_async_task_drop_in_place();
    return;
  }
  return;
}


// ===== 006fc034  react_common::ffi::invoke_async =====

/* WARNING: Unknown calling convention: __rustcall */
/* react_common::ffi::invoke_async */

void __rustcall react_common::ffi::invoke_async(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_60;
  long lStack_58;
  long local_50 [4];
  long *local_30;
  
  lStack_58 = param_2[1];
  local_60 = *param_2;
  param_1 = (undefined8 *)*param_1;
  *param_2 = 0;
  param_2[1] = 0;
                    /* try { // try from 006fc054 to 006fc05b has its CatchHandler @ 006fc0d8 */
  local_30 = (long *)operator_new(0x18);
  lVar2 = lStack_58;
  lVar4 = local_60;
  local_60 = 0;
  lStack_58 = 0;
  puVar1 = PTR_vtable_00b00de0 + 0x10;
  local_30[2] = lVar2;
  local_30[1] = lVar4;
  *local_30 = (long)puVar1;
  (**(code **)*param_1)(param_1,local_50);
  if (local_30 == local_50) {
    lVar4 = 4;
    plVar3 = local_50;
  }
  else {
    if (local_30 == (long *)0x0) goto LAB_006fc0c0;
    lVar4 = 5;
    plVar3 = local_30;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_006fc0c0:
  BoxDynAsyncTask::~BoxDynAsyncTask((BoxDynAsyncTask *)&local_60);
  return;
}


// ===== 006fc0dc  std::__ndk1::__function::__func<react_common::ffi::CrashOnCopy,std::__ndk1::allocator<react_common::ffi::CrashOnCopy>,void(facebook::jsi::Runtime&)>::~__func =====

/* std::__ndk1::__function::__func<react_common::ffi::CrashOnCopy,
   std::__ndk1::allocator<react_common::ffi::CrashOnCopy>, void
   (facebook::jsi::Runtime&)>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<react_common::ffi::CrashOnCopy,std::__ndk1::allocator<react_common::ffi::CrashOnCopy>,void(facebook::jsi::Runtime&)>
::~__func(__func<react_common::ffi::CrashOnCopy,std::__ndk1::allocator<react_common::ffi::CrashOnCopy>,void(facebook::jsi::Runtime&)>
          *this)

{
  *(undefined **)this = PTR_vtable_00b00de0 + 0x10;
  react_common::ffi::BoxDynAsyncTask::~BoxDynAsyncTask((BoxDynAsyncTask *)(this + 8));
  return;
}


// ===== 006fc0f0  std::__ndk1::__function::__func<react_common::ffi::CrashOnCopy,std::__ndk1::allocator<react_common::ffi::CrashOnCopy>,void(facebook::jsi::Runtime&)>::~__func =====

/* std::__ndk1::__function::__func<react_common::ffi::CrashOnCopy,
   std::__ndk1::allocator<react_common::ffi::CrashOnCopy>, void
   (facebook::jsi::Runtime&)>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<react_common::ffi::CrashOnCopy,std::__ndk1::allocator<react_common::ffi::CrashOnCopy>,void(facebook::jsi::Runtime&)>
::~__func(__func<react_common::ffi::CrashOnCopy,std::__ndk1::allocator<react_common::ffi::CrashOnCopy>,void(facebook::jsi::Runtime&)>
          *this)

{
  *(undefined **)this = PTR_vtable_00b00de0 + 0x10;
  react_common::ffi::BoxDynAsyncTask::~BoxDynAsyncTask((BoxDynAsyncTask *)(this + 8));
  operator_delete(this);
  return;
}


// ===== 006fc124  FUN_006fc124 =====

void FUN_006fc124(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x18);
  puVar1 = PTR_vtable_00b00de0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006fc15c to 006fc15f has its CatchHandler @ 006fc160 */
  abort();
}


// ===== 006fc17c  FUN_006fc17c =====

void FUN_006fc17c(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_00b00de0;
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = (long)(puVar1 + 0x10);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006fc1a4 to 006fc1a7 has its CatchHandler @ 006fc1a8 */
  abort();
}


// ===== 006fc1bc  FUN_006fc1bc =====

void FUN_006fc1bc(long param_1)

{
  react_common::ffi::BoxDynAsyncTask::~BoxDynAsyncTask((BoxDynAsyncTask *)(param_1 + 8));
  return;
}


// ===== 006fc1c4  FUN_006fc1c4 =====

void FUN_006fc1c4(void *param_1)

{
  react_common::ffi::BoxDynAsyncTask::~BoxDynAsyncTask((BoxDynAsyncTask *)((long)param_1 + 8));
  operator_delete(param_1);
  return;
}


// ===== 006fc1ec  FUN_006fc1ec =====

void FUN_006fc1ec(long param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  local_20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  react_common::ffi::call_rust_task(&local_20);
  react_common::ffi::BoxDynAsyncTask::~BoxDynAsyncTask((BoxDynAsyncTask *)&local_20);
  return;
}


// ===== 006fc220  FUN_006fc220 =====

long FUN_006fc220(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00b00de8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 006fc23c  FUN_006fc23c =====

undefined * FUN_006fc23c(void)

{
  return PTR_typeinfo_00b00df0;
}


// ===== 006fc248  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::actions::ActionTypes,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::actions::ActionTypes, =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::actions::ActionTypes,
   ())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::actions::ActionTypes,
   (), std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> */

ulong <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::actions::
      ActionTypes,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
      make_hasher<libdiscore_common[1cb84820f9455fa0]::actions::ActionTypes_(void)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  bool bVar5;
  long *in_x0;
  ulong uVar6;
  ulong in_x1;
  undefined8 in_x2;
  undefined4 in_w3;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong *__src;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *local_80;
  ulong uStack_78;
  long local_70;
  
  uVar12 = in_x0[3];
  uVar17 = uVar12 + in_x1;
  if (CARRY8(uVar12,in_x1)) {
    uVar17 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(in_w3);
  }
  else {
    uVar11 = in_x0[1];
    uVar13 = uVar11 + 1;
    uVar8 = uVar13 >> 3;
    uVar7 = uVar11;
    if (7 < uVar11) {
      uVar7 = uVar8 * 7;
    }
    if (uVar7 >> 1 < uVar17) {
      if (uVar17 < uVar7 + 1) {
        uVar17 = uVar7 + 1;
      }
      FUN_00700850(&local_80,1,uVar17);
      if (local_80 == (undefined8 *)0x0) {
        return uStack_78;
      }
      if (uVar12 == 0) {
        puVar15 = (undefined8 *)*in_x0;
        *in_x0 = (long)local_80;
        in_x0[1] = uStack_78;
        in_x0[2] = local_70;
      }
      else {
        puVar15 = (undefined8 *)*in_x0;
        lVar16 = 0;
        uVar17 = NEON_cmge(*puVar15,0,1);
        uVar17 = uVar17 & 0x8080808080808080;
        puVar4 = puVar15;
        uVar13 = uVar12;
        do {
          for (; uVar17 == 0; uVar17 = uVar17 & 0x8080808080808080) {
            lVar16 = lVar16 + 8;
            uVar17 = NEON_cmge(puVar4[1],0,1);
            puVar4 = puVar4 + 1;
          }
          uVar8 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = lVar16 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
          uVar6 = FUN_0076ae3c(in_x2,~uVar8 + (long)puVar15);
          uVar7 = uVar6 & uStack_78;
          uVar18 = NEON_cmlt(*(undefined8 *)((long)local_80 + uVar7),0,1);
          if (uVar18 == 0) {
            lVar9 = 8;
            do {
              uVar7 = uVar7 + lVar9;
              lVar9 = lVar9 + 8;
              uVar7 = uVar7 & uStack_78;
              uVar18 = NEON_cmlt(*(undefined8 *)((long)local_80 + uVar7),0,1);
            } while (uVar18 == 0);
          }
          uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
          uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
          uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
          uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uStack_78;
          if (-1 < *(char *)((long)local_80 + uVar7)) {
            uVar7 = NEON_cmlt(*local_80,0,1);
            uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
            uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
            uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
            uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
            uVar7 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
          }
          bVar3 = (byte)(uVar6 >> 0x38);
          *(byte *)((long)local_80 + uVar7) = bVar3 >> 1;
          uVar13 = uVar13 - 1;
          uVar17 = uVar17 - 1 & uVar17;
          *(byte *)((long)local_80 + (uVar7 - 8 & uStack_78) + 8) = bVar3 >> 1;
          *(undefined1 *)((long)local_80 + ~uVar7) = *(undefined1 *)((long)puVar15 + ~uVar8);
        } while (uVar13 != 0);
        *in_x0 = (long)local_80;
        in_x0[1] = uStack_78;
        in_x0[2] = local_70 - uVar12;
      }
      if ((uVar11 != 0) && (uVar17 = uVar11 + 8 & 0xfffffffffffffff8, uVar11 + uVar17 != -9)) {
        free((void *)((long)puVar15 - uVar17));
      }
    }
    else {
      if (uVar13 != 0) {
        __src = (ulong *)*in_x0;
        puVar10 = __src;
        if ((uVar13 & 7) != 0) {
          uVar8 = uVar8 + 1;
        }
        do {
          uVar8 = uVar8 - 1;
          uVar17 = NEON_cmlt(*puVar10,0,1);
          *puVar10 = uVar17 | 0x8080808080808080;
          puVar10 = puVar10 + 1;
        } while (uVar8 != 0);
        if (uVar13 < 8) {
          memmove(__src + 1,__src,uVar11 + 1);
        }
        else {
          *(ulong *)((long)__src + uVar13) = *__src;
        }
        uVar17 = 0;
        do {
          puVar10 = __src;
          if (*(char *)((long)__src + uVar17) == -0x80) {
            uVar12 = ~uVar17;
            puVar14 = __src;
            while( true ) {
              uVar13 = FUN_0076ae3c(in_x2,(long)puVar14 + (-1 - uVar17));
              uVar8 = in_x0[1];
              uVar7 = uVar8 & uVar13;
              uVar6 = NEON_cmlt(*(undefined8 *)((long)puVar14 + uVar7),0,1);
              if (uVar6 == 0) {
                lVar16 = 8;
                uVar18 = uVar8 & uVar13;
                do {
                  uVar18 = uVar18 + lVar16;
                  lVar16 = lVar16 + 8;
                  uVar18 = uVar18 & uVar8;
                  uVar6 = NEON_cmlt(*(undefined8 *)((long)puVar14 + uVar18),0,1);
                } while (uVar6 == 0);
              }
              else {
                uVar18 = uVar8 & uVar13;
              }
              uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
              uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
              uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
              uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
              uVar6 = uVar18 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar8;
              bVar3 = (byte)(uVar13 >> 0x38);
              if (*(char *)((long)puVar14 + uVar6) < '\0') {
                uVar13 = uVar6 - uVar7 ^ uVar17 - uVar7;
              }
              else {
                uVar13 = NEON_cmlt(*puVar14,0,1);
                uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
                uVar6 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
                uVar13 = uVar6 - uVar7 ^ uVar17 - uVar7;
              }
              if ((uVar13 & uVar8) < 8) {
                *(byte *)((long)puVar14 + uVar17) = bVar3 >> 1;
                puVar10 = (ulong *)*in_x0;
                *(byte *)((long)puVar10 + (uVar8 & uVar17 - 8) + 8) = bVar3 >> 1;
                goto LAB_006fc528;
              }
              cVar1 = *(char *)((long)puVar14 + uVar6);
              *(byte *)((long)puVar14 + uVar6) = bVar3 >> 1;
              puVar10 = (ulong *)*in_x0;
              uVar13 = ~uVar6;
              *(byte *)((long)puVar10 + (uVar6 - 8 & uVar8) + 8) = bVar3 >> 1;
              if (cVar1 == -1) break;
              uVar2 = *(undefined1 *)((long)__src + uVar12);
              *(undefined1 *)((long)__src + uVar12) = *(undefined1 *)((long)puVar14 + uVar13);
              *(undefined1 *)((long)puVar14 + uVar13) = uVar2;
              puVar14 = (ulong *)*in_x0;
            }
            uVar8 = in_x0[1];
            *(undefined1 *)((long)puVar10 + uVar17) = 0xff;
            *(undefined1 *)((long)puVar10 + (uVar8 & uVar17 - 8) + 8) = 0xff;
            *(undefined1 *)((long)puVar14 + uVar13) = *(undefined1 *)((long)__src + uVar12);
          }
LAB_006fc528:
          bVar5 = uVar17 != uVar11;
          uVar17 = uVar17 + 1;
          __src = puVar10;
        } while (bVar5);
        uVar13 = in_x0[1];
        uVar12 = in_x0[3];
        if (7 < uVar13) {
          uVar13 = (uVar13 + 1 >> 3) * 7;
        }
      }
      in_x0[2] = uVar13 - uVar12;
    }
    uVar17 = 0xffffffffffffffff;
  }
  return uVar17;
}


// ===== 006fc63c  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig,std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,
   libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,
   libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig,
   std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> */

undefined1  [16]
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(alloc[c1f8e832b0d782c7]::string::String,libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig)>>
::reserve_rehash::
<hashbrown[32fc5d502e7f9af5]::map::make_hasher<alloc[c1f8e832b0d782c7]::string::String,libdiscore_common[1cb84820f9455fa0]::core::experiment_cacher::CacheableExperimentConfig,std[17aff9129faa4dc5]::hash::random::RandomState>::_closure_0_>
          (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  ulong *__src;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong unaff_x22;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined8 *local_80;
  ulong uStack_78;
  ulong local_70;
  
  uVar8 = param_1[3];
  uVar17 = uVar8 + param_2;
  if (CARRY8(uVar8,param_2)) {
    auVar21 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
  }
  else {
    uVar13 = param_1[1];
    uVar7 = uVar13 + 1;
    uVar10 = uVar7 >> 3;
    uVar18 = uVar13;
    if (7 < uVar13) {
      uVar18 = uVar10 * 7;
    }
    if (uVar18 >> 1 < uVar17) {
      if (uVar17 < uVar18 + 1) {
        uVar17 = uVar18 + 1;
      }
      FUN_00700850(&local_80,0x20,uVar17);
      auVar5._8_8_ = local_70;
      auVar5._0_8_ = uStack_78;
      if (local_80 == (undefined8 *)0x0) {
        return auVar5;
      }
      lVar14 = param_1[3];
      if (lVar14 == 0) {
        lVar14 = *param_1;
        lVar15 = param_1[1];
        *param_1 = (long)local_80;
        param_1[1] = uStack_78;
        param_1[2] = local_70;
        param_1[3] = 0;
      }
      else {
        puVar16 = (undefined8 *)*param_1;
        lVar15 = 0;
        uVar17 = NEON_cmge(*puVar16,0,1);
        uVar17 = uVar17 & 0x8080808080808080;
        do {
          for (; uVar17 == 0; uVar17 = uVar17 & 0x8080808080808080) {
            puVar16 = puVar16 + 1;
            lVar15 = lVar15 + 8;
            uVar17 = NEON_cmge(*puVar16,0,1);
          }
          uVar8 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = lVar15 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
                    /* try { // try from 006fc72c to 006fc733 has its CatchHandler @ 006fcac8 */
          uVar10 = FUN_0076af58(param_3,*param_1 + uVar8 * -0x20 + -0x20);
          uVar7 = uVar10 & uStack_78;
          uVar18 = NEON_cmlt(*(undefined8 *)((long)local_80 + uVar7),0,1);
          if (uVar18 == 0) {
            lVar9 = 8;
            do {
              uVar7 = uVar7 + lVar9;
              lVar9 = lVar9 + 8;
              uVar7 = uVar7 & uStack_78;
              uVar18 = NEON_cmlt(*(undefined8 *)((long)local_80 + uVar7),0,1);
            } while (uVar18 == 0);
          }
          uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
          uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
          uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
          uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uStack_78;
          if (-1 < *(char *)((long)local_80 + uVar7)) {
            uVar7 = NEON_cmlt(*local_80,0,1);
            uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
            uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
            uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
            uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
            uVar7 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
          }
          lVar14 = lVar14 + -1;
          bVar4 = (byte)(uVar10 >> 0x38);
          *(byte *)((long)local_80 + uVar7) = bVar4 >> 1;
          puVar2 = local_80 + ~uVar7 * 4;
          *(byte *)((long)local_80 + (uVar7 - 8 & uStack_78) + 8) = bVar4 >> 1;
          puVar1 = (undefined8 *)(*param_1 + ~uVar8 * 0x20);
          uVar20 = *puVar1;
          uVar19 = puVar1[3];
          uVar12 = puVar1[2];
          uVar17 = uVar17 - 1 & uVar17;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar20;
          puVar2[3] = uVar19;
          puVar2[2] = uVar12;
        } while (lVar14 != 0);
        lVar14 = *param_1;
        lVar15 = param_1[1];
        *param_1 = (long)local_80;
        param_1[1] = uStack_78;
        param_1[2] = local_70 - param_1[3];
        param_1[3] = param_1[3];
      }
      if ((lVar15 != 0) && (lVar9 = lVar15 * 0x20 + 0x20, lVar15 + lVar9 != -9)) {
        free((void *)(lVar14 - lVar9));
      }
    }
    else {
      if (uVar7 != 0) {
        __src = (ulong *)*param_1;
        puVar11 = __src;
        if ((uVar7 & 7) != 0) {
          uVar10 = uVar10 + 1;
        }
        do {
          uVar10 = uVar10 - 1;
          uVar17 = NEON_cmlt(*puVar11,0,1);
          *puVar11 = uVar17 | 0x8080808080808080;
          puVar11 = puVar11 + 1;
        } while (uVar10 != 0);
        if (uVar7 < 8) {
          memmove(__src + 1,__src,uVar13 + 1);
        }
        else {
          *(ulong *)((long)__src + uVar7) = *__src;
        }
        unaff_x22 = 0;
        do {
          lVar14 = *param_1;
          if (*(char *)(lVar14 + unaff_x22) == -0x80) {
            puVar16 = (undefined8 *)(lVar14 + ~unaff_x22 * 0x20);
            while( true ) {
                    /* try { // try from 006fc850 to 006fc857 has its CatchHandler @ 006fcab4 */
              uVar8 = FUN_0076af58(param_3,lVar14 + unaff_x22 * -0x20 + -0x20);
              puVar2 = (undefined8 *)*param_1;
              uVar17 = param_1[1];
              uVar7 = uVar17 & uVar8;
              uVar10 = NEON_cmlt(*(undefined8 *)((long)puVar2 + uVar7),0,1);
              if (uVar10 == 0) {
                lVar14 = 8;
                uVar18 = uVar17 & uVar8;
                do {
                  uVar18 = uVar18 + lVar14;
                  lVar14 = lVar14 + 8;
                  uVar18 = uVar18 & uVar17;
                  uVar10 = NEON_cmlt(*(undefined8 *)((long)puVar2 + uVar18),0,1);
                } while (uVar10 == 0);
              }
              else {
                uVar18 = uVar17 & uVar8;
              }
              uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
              uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
              uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
              uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
              uVar10 = uVar18 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar17;
              bVar4 = (byte)(uVar8 >> 0x38);
              if (*(char *)((long)puVar2 + uVar10) < '\0') {
                uVar8 = uVar10 - uVar7 ^ unaff_x22 - uVar7;
              }
              else {
                uVar8 = NEON_cmlt(*puVar2,0,1);
                uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
                uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
                uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
                uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
                uVar10 = (ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3;
                uVar8 = uVar10 - uVar7 ^ unaff_x22 - uVar7;
              }
              if ((uVar8 & uVar17) < 8) {
                *(byte *)((long)puVar2 + unaff_x22) = bVar4 >> 1;
                *(byte *)(*param_1 + (uVar17 & unaff_x22 - 8) + 8) = bVar4 >> 1;
                goto LAB_006fc990;
              }
              cVar3 = *(char *)((long)puVar2 + uVar10);
              *(byte *)((long)puVar2 + uVar10) = bVar4 >> 1;
              puVar2 = puVar2 + ~uVar10 * 4;
              *(byte *)(*param_1 + (uVar10 - 8 & uVar17) + 8) = bVar4 >> 1;
              if (cVar3 == -1) break;
              uVar12 = *puVar16;
              *puVar16 = *puVar2;
              *puVar2 = uVar12;
              uVar12 = puVar16[1];
              puVar16[1] = puVar2[1];
              puVar2[1] = uVar12;
              uVar12 = puVar16[2];
              puVar16[2] = puVar2[2];
              puVar2[2] = uVar12;
              uVar12 = puVar16[3];
              puVar16[3] = puVar2[3];
              puVar2[3] = uVar12;
              lVar14 = *param_1;
            }
            uVar17 = param_1[1];
            *(undefined1 *)(*param_1 + unaff_x22) = 0xff;
            *(undefined1 *)(*param_1 + (uVar17 & unaff_x22 - 8) + 8) = 0xff;
            uVar20 = *puVar16;
            uVar19 = puVar16[3];
            uVar12 = puVar16[2];
            puVar2[1] = puVar16[1];
            *puVar2 = uVar20;
            puVar2[3] = uVar19;
            puVar2[2] = uVar12;
          }
LAB_006fc990:
          bVar6 = unaff_x22 != uVar13;
          unaff_x22 = unaff_x22 + 1;
        } while (bVar6);
        uVar7 = param_1[1];
        uVar8 = param_1[3];
        if (7 < uVar7) {
          uVar7 = (uVar7 + 1 >> 3) * 7;
        }
      }
      param_1[2] = uVar7 - uVar8;
      local_70 = unaff_x22;
    }
    auVar21._8_8_ = local_70;
    auVar21._0_8_ = 0xffffffffffffffff;
  }
  return auVar21;
}


// ===== 006fcadc  FUN_006fcadc =====

void FUN_006fcadc(undefined8 *param_1,long *param_2,ulong param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  lVar5 = 0;
  bVar12 = (byte)(param_3 >> 0x39);
  uVar8 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  lVar3 = *param_2;
  uVar4 = param_2[1];
  param_3 = param_3 & uVar4;
  uVar13 = *(undefined8 *)(lVar3 + param_3);
  uVar14 = NEON_cmeq(uVar13,uVar8,1);
  while( true ) {
    for (uVar14 = uVar14 & 0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = param_3 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4;
      lVar1 = lVar3 + uVar7 * -0xe8;
      if (*param_4 == *(long *)(lVar1 + -0xe8)) {
        lVar5 = ((long)(uVar7 * 0xe8) >> 3) * 0x34f72c234f72c235;
        uVar14 = NEON_cmeq(*(undefined8 *)(lVar3 + lVar5),0xffffffffffffffff,1);
        puVar2 = (undefined8 *)(lVar3 + (lVar5 - 8U & uVar4));
        uVar13 = NEON_cmeq(*puVar2,0xffffffffffffffff,1);
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar13) >> 3) <
            8) {
          param_2[2] = param_2[2] + 1;
          uVar6 = 0xff;
        }
        else {
          uVar6 = 0x80;
        }
        *(undefined1 *)(lVar3 + lVar5) = uVar6;
        lVar5 = param_2[3];
        *(undefined1 *)(puVar2 + 1) = uVar6;
        uVar9 = *(undefined8 *)(lVar1 + -0x20);
        uVar8 = *(undefined8 *)(lVar1 + -0x28);
        uVar11 = *(undefined8 *)(lVar1 + -0x10);
        uVar10 = *(undefined8 *)(lVar1 + -0x18);
        param_2[3] = lVar5 + -1;
        uVar13 = *(undefined8 *)(lVar1 + -8);
        param_1[0x19] = uVar9;
        param_1[0x18] = uVar8;
        param_1[0x1b] = uVar11;
        param_1[0x1a] = uVar10;
        uVar9 = *(undefined8 *)(lVar1 + -0x60);
        uVar8 = *(undefined8 *)(lVar1 + -0x68);
        uVar11 = *(undefined8 *)(lVar1 + -0x50);
        uVar10 = *(undefined8 *)(lVar1 + -0x58);
        param_1[0x1c] = uVar13;
        param_1[0x11] = uVar9;
        param_1[0x10] = uVar8;
        param_1[0x13] = uVar11;
        param_1[0x12] = uVar10;
        uVar13 = *(undefined8 *)(lVar1 + -0x48);
        uVar9 = *(undefined8 *)(lVar1 + -0x30);
        uVar8 = *(undefined8 *)(lVar1 + -0x38);
        param_1[0x15] = *(undefined8 *)(lVar1 + -0x40);
        param_1[0x14] = uVar13;
        param_1[0x17] = uVar9;
        param_1[0x16] = uVar8;
        uVar9 = *(undefined8 *)(lVar1 + -0xa8);
        uVar8 = *(undefined8 *)(lVar1 + -0x90);
        uVar13 = *(undefined8 *)(lVar1 + -0x98);
        param_1[9] = *(undefined8 *)(lVar1 + -0xa0);
        param_1[8] = uVar9;
        param_1[0xb] = uVar8;
        param_1[10] = uVar13;
        uVar13 = *(undefined8 *)(lVar1 + -0x88);
        uVar9 = *(undefined8 *)(lVar1 + -0x70);
        uVar8 = *(undefined8 *)(lVar1 + -0x78);
        param_1[0xd] = *(undefined8 *)(lVar1 + -0x80);
        param_1[0xc] = uVar13;
        param_1[0xf] = uVar9;
        param_1[0xe] = uVar8;
        uVar9 = *(undefined8 *)(lVar1 + -0xe8);
        uVar8 = *(undefined8 *)(lVar1 + -0xd0);
        uVar13 = *(undefined8 *)(lVar1 + -0xd8);
        param_1[1] = *(undefined8 *)(lVar1 + -0xe0);
        *param_1 = uVar9;
        param_1[3] = uVar8;
        param_1[2] = uVar13;
        uVar13 = *(undefined8 *)(lVar1 + -200);
        uVar9 = *(undefined8 *)(lVar1 + -0xb0);
        uVar8 = *(undefined8 *)(lVar1 + -0xb8);
        param_1[5] = *(undefined8 *)(lVar1 + -0xc0);
        param_1[4] = uVar13;
        param_1[7] = uVar9;
        param_1[6] = uVar8;
        return;
      }
    }
    uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
    bVar12 = NEON_umaxv(uVar13,1);
    if ((bVar12 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    param_3 = param_3 + lVar5 & uVar4;
    uVar13 = *(undefined8 *)(lVar3 + param_3);
    uVar14 = NEON_cmeq(uVar13,uVar8,1);
  }
  param_1[1] = 2;
  return;
}


// ===== 006fcc58  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,
   libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,
   libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole,
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

ulong <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole)>>
      ::reserve_rehash::
      <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildRoleId,libdiscore_common[1cb84820f9455fa0]::stores::guild_role::GuildRole,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
                (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *__src;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 *local_50;
  ulong uStack_48;
  long local_40;
  
  uVar16 = param_1[3];
  uVar17 = uVar16 + param_2;
  if (CARRY8(uVar16,param_2)) {
    uVar17 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
    return uVar17;
  }
  uVar15 = param_1[1];
  uVar12 = uVar15 + 1;
  uVar9 = uVar12 >> 3;
  uVar5 = uVar15;
  if (7 < uVar15) {
    uVar5 = uVar9 * 7;
  }
  if (uVar5 >> 1 < uVar17) {
    if (uVar17 < uVar5 + 1) {
      uVar17 = uVar5 + 1;
    }
    FUN_00700850(&local_50,0xe8,uVar17);
    if (local_50 == (undefined8 *)0x0) {
      return uStack_48;
    }
    if (uVar16 == 0) {
      puVar8 = (undefined8 *)*param_1;
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      lVar10 = 0;
      uVar17 = NEON_cmge(*puVar8,0,1);
      uVar17 = uVar17 & 0x8080808080808080;
      puVar3 = puVar8;
      uVar12 = uVar16;
      do {
        for (; uVar17 == 0; uVar17 = uVar17 & 0x8080808080808080) {
          lVar10 = lVar10 + 8;
          uVar17 = NEON_cmge(puVar3[1],0,1);
          puVar3 = puVar3 + 1;
        }
        uVar9 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = lVar10 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
        uVar5 = puVar8[uVar9 * -0x1d + -0x1d] * 0x517cc1b727220a95 & uStack_48;
        uVar18 = NEON_cmlt(*(undefined8 *)((long)local_50 + uVar5),0,1);
        if (uVar18 == 0) {
          lVar6 = 8;
          do {
            uVar5 = uVar5 + lVar6;
            lVar6 = lVar6 + 8;
            uVar5 = uVar5 & uStack_48;
            uVar18 = NEON_cmlt(*(undefined8 *)((long)local_50 + uVar5),0,1);
          } while (uVar18 == 0);
        }
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uStack_48;
        if (-1 < *(char *)((long)local_50 + uVar5)) {
          uVar5 = NEON_cmlt(*local_50,0,1);
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
        }
        puVar14 = puVar8 + ~uVar9 * 0x1d;
        bVar2 = (byte)((ulong)(puVar8[uVar9 * -0x1d + -0x1d] * 0x517cc1b727220a95) >> 0x38);
        *(byte *)((long)local_50 + uVar5) = bVar2 >> 1;
        uVar12 = uVar12 - 1;
        puVar7 = local_50 + ~uVar5 * 0x1d;
        *(byte *)((long)local_50 + (uVar5 - 8 & uStack_48) + 8) = bVar2 >> 1;
        uVar22 = puVar14[3];
        uVar21 = puVar14[2];
        uVar20 = puVar14[5];
        uVar19 = puVar14[4];
        uVar23 = *puVar14;
        puVar7[1] = puVar14[1];
        *puVar7 = uVar23;
        puVar7[3] = uVar22;
        puVar7[2] = uVar21;
        puVar7[5] = uVar20;
        puVar7[4] = uVar19;
        uVar21 = puVar14[10];
        uVar20 = puVar14[0xd];
        uVar19 = puVar14[0xc];
        uVar23 = puVar14[7];
        uVar22 = puVar14[6];
        uVar26 = puVar14[9];
        uVar24 = puVar14[8];
        puVar7[0xb] = puVar14[0xb];
        puVar7[10] = uVar21;
        puVar7[0xd] = uVar20;
        puVar7[0xc] = uVar19;
        puVar7[7] = uVar23;
        puVar7[6] = uVar22;
        puVar7[9] = uVar26;
        puVar7[8] = uVar24;
        uVar21 = puVar14[0x12];
        uVar20 = puVar14[0x15];
        uVar19 = puVar14[0x14];
        uVar23 = puVar14[0xf];
        uVar22 = puVar14[0xe];
        uVar26 = puVar14[0x11];
        uVar24 = puVar14[0x10];
        puVar7[0x13] = puVar14[0x13];
        puVar7[0x12] = uVar21;
        puVar7[0x15] = uVar20;
        puVar7[0x14] = uVar19;
        puVar7[0xf] = uVar23;
        puVar7[0xe] = uVar22;
        puVar7[0x11] = uVar26;
        puVar7[0x10] = uVar24;
        uVar24 = puVar14[0x19];
        uVar23 = puVar14[0x18];
        uVar20 = puVar14[0x1b];
        uVar19 = puVar14[0x1a];
        uVar22 = puVar14[0x17];
        uVar21 = puVar14[0x16];
        puVar7[0x1c] = puVar14[0x1c];
        uVar17 = uVar17 - 1 & uVar17;
        puVar7[0x19] = uVar24;
        puVar7[0x18] = uVar23;
        puVar7[0x1b] = uVar20;
        puVar7[0x1a] = uVar19;
        puVar7[0x17] = uVar22;
        puVar7[0x16] = uVar21;
      } while (uVar12 != 0);
    }
    *param_1 = (long)local_50;
    param_1[1] = uStack_48;
    param_1[2] = local_40 - uVar16;
    if ((uVar15 != 0) && (lVar10 = uVar15 * 0xe8 + 0xe8, uVar15 + lVar10 != -9)) {
      free((void *)((long)puVar8 - lVar10));
    }
  }
  else {
    if (uVar12 != 0) {
      __src = (ulong *)*param_1;
      puVar11 = __src;
      if ((uVar12 & 7) != 0) {
        uVar9 = uVar9 + 1;
      }
      do {
        uVar9 = uVar9 - 1;
        uVar17 = NEON_cmlt(*puVar11,0,1);
        *puVar11 = uVar17 | 0x8080808080808080;
        puVar11 = puVar11 + 1;
      } while (uVar9 != 0);
      if (uVar12 < 8) {
        memmove(__src + 1,__src,uVar15 + 1);
      }
      else {
        *(ulong *)((long)__src + uVar12) = *__src;
      }
      uVar17 = 0;
      do {
        if (*(char *)((long)__src + uVar17) == -0x80) {
          puVar11 = __src + ~uVar17 * 0x1d;
          while( true ) {
            uVar9 = param_1[1];
            uVar12 = __src[uVar17 * -0x1d + -0x1d] * 0x517cc1b727220a95;
            uVar5 = uVar9 & uVar12;
            uVar16 = NEON_cmlt(*(undefined8 *)((long)__src + uVar5),0,1);
            if (uVar16 == 0) {
              lVar10 = 8;
              uVar18 = uVar9 & uVar12;
              do {
                uVar18 = uVar18 + lVar10;
                lVar10 = lVar10 + 8;
                uVar18 = uVar18 & uVar9;
                uVar16 = NEON_cmlt(*(undefined8 *)((long)__src + uVar18),0,1);
              } while (uVar16 == 0);
            }
            else {
              uVar18 = uVar9 & uVar12;
            }
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar18 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar9;
            bVar2 = (byte)(uVar12 >> 0x38);
            if (*(char *)((long)__src + uVar16) < '\0') {
              uVar12 = uVar16 - uVar5 ^ uVar17 - uVar5;
            }
            else {
              uVar16 = NEON_cmlt(*__src,0,1);
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
              uVar12 = uVar16 - uVar5 ^ uVar17 - uVar5;
            }
            if ((uVar12 & uVar9) < 8) {
              *(byte *)((long)__src + uVar17) = bVar2 >> 1;
              __src = (ulong *)*param_1;
              *(byte *)((long)__src + (uVar9 & uVar17 - 8) + 8) = bVar2 >> 1;
              goto LAB_006fd158;
            }
            puVar13 = __src + ~uVar16 * 0x1d;
            cVar1 = *(char *)((long)__src + uVar16);
            *(byte *)((long)__src + uVar16) = bVar2 >> 1;
            __src = (ulong *)*param_1;
            *(byte *)((long)__src + (uVar16 - 8 & uVar9) + 8) = bVar2 >> 1;
            if (cVar1 == -1) break;
            uVar16 = *puVar11;
            *puVar11 = *puVar13;
            *puVar13 = uVar16;
            uVar16 = puVar11[1];
            puVar11[1] = puVar13[1];
            puVar13[1] = uVar16;
            uVar16 = puVar11[2];
            puVar11[2] = puVar13[2];
            puVar13[2] = uVar16;
            uVar16 = puVar11[3];
            puVar11[3] = puVar13[3];
            puVar13[3] = uVar16;
            uVar16 = puVar11[4];
            puVar11[4] = puVar13[4];
            puVar13[4] = uVar16;
            uVar16 = puVar11[5];
            puVar11[5] = puVar13[5];
            puVar13[5] = uVar16;
            uVar16 = puVar11[6];
            puVar11[6] = puVar13[6];
            puVar13[6] = uVar16;
            uVar16 = puVar11[7];
            puVar11[7] = puVar13[7];
            puVar13[7] = uVar16;
            uVar16 = puVar11[8];
            puVar11[8] = puVar13[8];
            puVar13[8] = uVar16;
            uVar16 = puVar11[9];
            puVar11[9] = puVar13[9];
            puVar13[9] = uVar16;
            uVar16 = puVar11[10];
            puVar11[10] = puVar13[10];
            puVar13[10] = uVar16;
            uVar16 = puVar11[0xb];
            puVar11[0xb] = puVar13[0xb];
            puVar13[0xb] = uVar16;
            uVar16 = puVar11[0xc];
            puVar11[0xc] = puVar13[0xc];
            puVar13[0xc] = uVar16;
            uVar16 = puVar11[0xd];
            puVar11[0xd] = puVar13[0xd];
            puVar13[0xd] = uVar16;
            uVar16 = puVar11[0xe];
            puVar11[0xe] = puVar13[0xe];
            puVar13[0xe] = uVar16;
            uVar16 = puVar11[0xf];
            puVar11[0xf] = puVar13[0xf];
            puVar13[0xf] = uVar16;
            uVar16 = puVar11[0x10];
            puVar11[0x10] = puVar13[0x10];
            puVar13[0x10] = uVar16;
            uVar16 = puVar11[0x11];
            puVar11[0x11] = puVar13[0x11];
            puVar13[0x11] = uVar16;
            uVar16 = puVar11[0x12];
            puVar11[0x12] = puVar13[0x12];
            puVar13[0x12] = uVar16;
            uVar16 = puVar11[0x13];
            puVar11[0x13] = puVar13[0x13];
            puVar13[0x13] = uVar16;
            uVar16 = puVar11[0x14];
            puVar11[0x14] = puVar13[0x14];
            puVar13[0x14] = uVar16;
            uVar16 = puVar11[0x15];
            puVar11[0x15] = puVar13[0x15];
            puVar13[0x15] = uVar16;
            uVar16 = puVar11[0x16];
            puVar11[0x16] = puVar13[0x16];
            puVar13[0x16] = uVar16;
            uVar16 = puVar11[0x17];
            puVar11[0x17] = puVar13[0x17];
            puVar13[0x17] = uVar16;
            uVar16 = puVar11[0x18];
            puVar11[0x18] = puVar13[0x18];
            puVar13[0x18] = uVar16;
            uVar16 = puVar11[0x19];
            puVar11[0x19] = puVar13[0x19];
            puVar13[0x19] = uVar16;
            uVar16 = puVar11[0x1a];
            puVar11[0x1a] = puVar13[0x1a];
            puVar13[0x1a] = uVar16;
            uVar16 = puVar11[0x1b];
            puVar11[0x1b] = puVar13[0x1b];
            puVar13[0x1b] = uVar16;
            uVar16 = puVar11[0x1c];
            puVar11[0x1c] = puVar13[0x1c];
            puVar13[0x1c] = uVar16;
            __src = (ulong *)*param_1;
          }
          uVar16 = param_1[1];
          *(undefined1 *)((long)__src + uVar17) = 0xff;
          *(undefined1 *)((long)__src + (uVar16 & uVar17 - 8) + 8) = 0xff;
          uVar9 = puVar11[10];
          uVar12 = puVar11[0xd];
          uVar16 = puVar11[0xc];
          uVar27 = puVar11[7];
          uVar25 = puVar11[6];
          uVar18 = puVar11[9];
          uVar5 = puVar11[8];
          puVar13[0xb] = puVar11[0xb];
          puVar13[10] = uVar9;
          puVar13[0xd] = uVar12;
          puVar13[0xc] = uVar16;
          puVar13[7] = uVar27;
          puVar13[6] = uVar25;
          puVar13[9] = uVar18;
          puVar13[8] = uVar5;
          uVar9 = puVar11[0x12];
          uVar12 = puVar11[0x15];
          uVar16 = puVar11[0x14];
          uVar27 = puVar11[0xf];
          uVar25 = puVar11[0xe];
          uVar18 = puVar11[0x11];
          uVar5 = puVar11[0x10];
          puVar13[0x13] = puVar11[0x13];
          puVar13[0x12] = uVar9;
          puVar13[0x15] = uVar12;
          puVar13[0x14] = uVar16;
          puVar13[0xf] = uVar27;
          puVar13[0xe] = uVar25;
          puVar13[0x11] = uVar18;
          puVar13[0x10] = uVar5;
          uVar5 = puVar11[0x19];
          uVar9 = puVar11[0x18];
          uVar12 = puVar11[0x1b];
          uVar16 = puVar11[0x1a];
          uVar25 = puVar11[0x17];
          uVar18 = puVar11[0x16];
          puVar13[0x1c] = puVar11[0x1c];
          puVar13[0x19] = uVar5;
          puVar13[0x18] = uVar9;
          puVar13[0x1b] = uVar12;
          puVar13[0x1a] = uVar16;
          puVar13[0x17] = uVar25;
          puVar13[0x16] = uVar18;
          uVar5 = puVar11[3];
          uVar9 = puVar11[2];
          uVar12 = puVar11[5];
          uVar16 = puVar11[4];
          uVar18 = *puVar11;
          puVar13[1] = puVar11[1];
          *puVar13 = uVar18;
          puVar13[3] = uVar5;
          puVar13[2] = uVar9;
          puVar13[5] = uVar12;
          puVar13[4] = uVar16;
        }
LAB_006fd158:
        bVar4 = uVar17 != uVar15;
        uVar17 = uVar17 + 1;
      } while (bVar4);
      uVar12 = param_1[1];
      uVar16 = param_1[3];
      if (7 < uVar12) {
        uVar12 = (uVar12 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar12 - uVar16;
  }
  return 0xffffffffffffffff;
}


// ===== 006fd29c  FUN_006fd29c =====

void FUN_006fd29c(undefined8 *param_1,long *param_2,ulong param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  lVar5 = 0;
  bVar12 = (byte)(param_3 >> 0x39);
  uVar8 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  lVar3 = *param_2;
  uVar4 = param_2[1];
  param_3 = param_3 & uVar4;
  uVar13 = *(undefined8 *)(lVar3 + param_3);
  uVar14 = NEON_cmeq(uVar13,uVar8,1);
  while( true ) {
    for (uVar14 = uVar14 & 0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = param_3 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4;
      lVar1 = lVar3 + uVar7 * -0x28;
      if (*param_4 == *(long *)(lVar1 + -0x28)) {
        lVar5 = ((long)(uVar7 * 0x28) >> 3) * -0x3333333333333333;
        uVar14 = NEON_cmeq(*(undefined8 *)(lVar3 + lVar5),0xffffffffffffffff,1);
        puVar2 = (undefined8 *)(lVar3 + (lVar5 - 8U & uVar4));
        uVar13 = NEON_cmeq(*puVar2,0xffffffffffffffff,1);
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar13) >> 3) <
            8) {
          param_2[2] = param_2[2] + 1;
          uVar6 = 0xff;
        }
        else {
          uVar6 = 0x80;
        }
        *(undefined1 *)(lVar3 + lVar5) = uVar6;
        lVar5 = param_2[3];
        *(undefined1 *)(puVar2 + 1) = uVar6;
        uVar9 = *(undefined8 *)(lVar1 + -0x20);
        uVar8 = *(undefined8 *)(lVar1 + -0x28);
        uVar11 = *(undefined8 *)(lVar1 + -0x10);
        uVar10 = *(undefined8 *)(lVar1 + -0x18);
        param_2[3] = lVar5 + -1;
        uVar13 = *(undefined8 *)(lVar1 + -8);
        param_1[1] = uVar9;
        *param_1 = uVar8;
        param_1[3] = uVar11;
        param_1[2] = uVar10;
        param_1[4] = uVar13;
        return;
      }
    }
    uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
    bVar12 = NEON_umaxv(uVar13,1);
    if ((bVar12 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    param_3 = param_3 + lVar5 & uVar4;
    uVar13 = *(undefined8 *)(lVar3 + param_3);
    uVar14 = NEON_cmeq(uVar13,uVar8,1);
  }
  *(undefined1 *)(param_1 + 4) = 2;
  return;
}


// ===== 006fd3dc  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,
   libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,
   libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote,
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

ulong <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote)>>
      ::reserve_rehash::
      <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::UserId,libdiscore_common[1cb84820f9455fa0]::stores::notes::UserNote,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
                (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *__src;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *local_50;
  ulong uStack_48;
  long local_40;
  
  uVar16 = param_1[3];
  uVar17 = uVar16 + param_2;
  if (CARRY8(uVar16,param_2)) {
    uVar17 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
    return uVar17;
  }
  uVar15 = param_1[1];
  uVar12 = uVar15 + 1;
  uVar9 = uVar12 >> 3;
  uVar5 = uVar15;
  if (7 < uVar15) {
    uVar5 = uVar9 * 7;
  }
  if (uVar5 >> 1 < uVar17) {
    if (uVar17 < uVar5 + 1) {
      uVar17 = uVar5 + 1;
    }
    FUN_00700850(&local_50,0x28,uVar17);
    if (local_50 == (undefined8 *)0x0) {
      return uStack_48;
    }
    if (uVar16 == 0) {
      puVar8 = (undefined8 *)*param_1;
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      lVar10 = 0;
      uVar17 = NEON_cmge(*puVar8,0,1);
      uVar17 = uVar17 & 0x8080808080808080;
      puVar3 = puVar8;
      uVar12 = uVar16;
      do {
        for (; uVar17 == 0; uVar17 = uVar17 & 0x8080808080808080) {
          lVar10 = lVar10 + 8;
          uVar17 = NEON_cmge(puVar3[1],0,1);
          puVar3 = puVar3 + 1;
        }
        uVar9 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = lVar10 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
        uVar5 = puVar8[uVar9 * -5 + -5] * 0x517cc1b727220a95 & uStack_48;
        uVar18 = NEON_cmlt(*(undefined8 *)((long)local_50 + uVar5),0,1);
        if (uVar18 == 0) {
          lVar6 = 8;
          do {
            uVar5 = uVar5 + lVar6;
            lVar6 = lVar6 + 8;
            uVar5 = uVar5 & uStack_48;
            uVar18 = NEON_cmlt(*(undefined8 *)((long)local_50 + uVar5),0,1);
          } while (uVar18 == 0);
        }
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uStack_48;
        if (-1 < *(char *)((long)local_50 + uVar5)) {
          uVar5 = NEON_cmlt(*local_50,0,1);
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
        }
        puVar14 = puVar8 + ~uVar9 * 5;
        bVar2 = (byte)((ulong)(puVar8[uVar9 * -5 + -5] * 0x517cc1b727220a95) >> 0x38);
        *(byte *)((long)local_50 + uVar5) = bVar2 >> 1;
        uVar12 = uVar12 - 1;
        puVar7 = local_50 + ~uVar5 * 5;
        *(byte *)((long)local_50 + (uVar5 - 8 & uStack_48) + 8) = bVar2 >> 1;
        uVar22 = puVar14[1];
        uVar21 = *puVar14;
        uVar20 = puVar14[3];
        uVar19 = puVar14[2];
        puVar7[4] = puVar14[4];
        uVar17 = uVar17 - 1 & uVar17;
        puVar7[1] = uVar22;
        *puVar7 = uVar21;
        puVar7[3] = uVar20;
        puVar7[2] = uVar19;
      } while (uVar12 != 0);
    }
    *param_1 = (long)local_50;
    param_1[1] = uStack_48;
    param_1[2] = local_40 - uVar16;
    if ((uVar15 != 0) && (lVar10 = uVar15 * 0x28 + 0x28, uVar15 + lVar10 != -9)) {
      free((void *)((long)puVar8 - lVar10));
    }
  }
  else {
    if (uVar12 == 0) {
      uVar17 = 0;
    }
    else {
      __src = (ulong *)*param_1;
      puVar11 = __src;
      if ((uVar12 & 7) != 0) {
        uVar9 = uVar9 + 1;
      }
      do {
        uVar9 = uVar9 - 1;
        uVar17 = NEON_cmlt(*puVar11,0,1);
        *puVar11 = uVar17 | 0x8080808080808080;
        puVar11 = puVar11 + 1;
      } while (uVar9 != 0);
      if (uVar12 < 8) {
        memmove(__src + 1,__src,uVar15 + 1);
      }
      else {
        *(ulong *)((long)__src + uVar12) = *__src;
      }
      uVar17 = 0;
      do {
        if (*(char *)((long)__src + uVar17) == -0x80) {
          puVar11 = __src + ~uVar17 * 5;
          while( true ) {
            uVar9 = __src[uVar17 * -5 + -5] * 0x517cc1b727220a95;
            uVar12 = param_1[1];
            uVar5 = uVar12 & uVar9;
            uVar16 = NEON_cmlt(*(undefined8 *)((long)__src + uVar5),0,1);
            if (uVar16 == 0) {
              lVar10 = 8;
              uVar18 = uVar12 & uVar9;
              do {
                uVar18 = uVar18 + lVar10;
                lVar10 = lVar10 + 8;
                uVar18 = uVar18 & uVar12;
                uVar16 = NEON_cmlt(*(undefined8 *)((long)__src + uVar18),0,1);
              } while (uVar16 == 0);
            }
            else {
              uVar18 = uVar12 & uVar9;
            }
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar18 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar12;
            bVar2 = (byte)(uVar9 >> 0x38);
            if (*(char *)((long)__src + uVar16) < '\0') {
              uVar9 = uVar16 - uVar5 ^ uVar17 - uVar5;
            }
            else {
              uVar16 = NEON_cmlt(*__src,0,1);
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
              uVar9 = uVar16 - uVar5 ^ uVar17 - uVar5;
            }
            if ((uVar9 & uVar12) < 8) {
              *(byte *)((long)__src + uVar17) = bVar2 >> 1;
              __src = (ulong *)*param_1;
              *(byte *)((long)__src + (uVar12 & uVar17 - 8) + 8) = bVar2 >> 1;
              goto LAB_006fd724;
            }
            puVar13 = __src + ~uVar16 * 5;
            cVar1 = *(char *)((long)__src + uVar16);
            *(byte *)((long)__src + uVar16) = bVar2 >> 1;
            __src = (ulong *)*param_1;
            *(byte *)((long)__src + (uVar16 - 8 & uVar12) + 8) = bVar2 >> 1;
            if (cVar1 == -1) break;
            uVar16 = *puVar11;
            *puVar11 = *puVar13;
            *puVar13 = uVar16;
            uVar16 = puVar11[1];
            puVar11[1] = puVar13[1];
            puVar13[1] = uVar16;
            uVar16 = puVar11[2];
            puVar11[2] = puVar13[2];
            puVar13[2] = uVar16;
            uVar16 = puVar11[3];
            puVar11[3] = puVar13[3];
            puVar13[3] = uVar16;
            uVar16 = puVar11[4];
            puVar11[4] = puVar13[4];
            puVar13[4] = uVar16;
            __src = (ulong *)*param_1;
          }
          uVar16 = param_1[1];
          *(undefined1 *)((long)__src + uVar17) = 0xff;
          *(undefined1 *)((long)__src + (uVar16 & uVar17 - 8) + 8) = 0xff;
          uVar5 = puVar11[1];
          uVar9 = *puVar11;
          uVar12 = puVar11[3];
          uVar16 = puVar11[2];
          puVar13[4] = puVar11[4];
          puVar13[1] = uVar5;
          *puVar13 = uVar9;
          puVar13[3] = uVar12;
          puVar13[2] = uVar16;
        }
LAB_006fd724:
        bVar4 = uVar17 != uVar15;
        uVar17 = uVar17 + 1;
      } while (bVar4);
      uVar17 = param_1[1];
      uVar16 = param_1[3];
      if (7 < uVar17) {
        uVar17 = (uVar17 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar17 - uVar16;
  }
  return 0xffffffffffffffff;
}


// ===== 006fd838  FUN_006fd838 =====

void FUN_006fd838(undefined8 *param_1,long *param_2,ulong param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  lVar5 = 0;
  bVar11 = (byte)(param_3 >> 0x39);
  uVar8 = CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,CONCAT12(
                                                  bVar11,CONCAT11(bVar11,bVar11)))))));
  lVar3 = *param_2;
  uVar4 = param_2[1];
  param_3 = param_3 & uVar4;
  uVar12 = *(undefined8 *)(lVar3 + param_3);
  uVar13 = NEON_cmeq(uVar12,uVar8,1);
  while( true ) {
    for (uVar13 = uVar13 & 0x8080808080808080; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar7 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = param_3 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4;
      lVar1 = lVar3 + uVar7 * -0x60;
      if (*param_4 == *(long *)(lVar1 + -0x60)) {
        lVar5 = ((long)(uVar7 * 0x60) >> 5) * -0x5555555555555555;
        uVar13 = NEON_cmeq(*(undefined8 *)(lVar3 + lVar5),0xffffffffffffffff,1);
        puVar2 = (undefined8 *)(lVar3 + (lVar5 - 8U & uVar4));
        uVar12 = NEON_cmeq(*puVar2,0xffffffffffffffff,1);
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar12) >> 3) <
            8) {
          param_2[2] = param_2[2] + 1;
          uVar6 = 0xff;
        }
        else {
          uVar6 = 0x80;
        }
        *(undefined1 *)(lVar3 + lVar5) = uVar6;
        lVar5 = param_2[3];
        *(undefined1 *)(puVar2 + 1) = uVar6;
        uVar8 = *(undefined8 *)(lVar1 + -0x38);
        uVar12 = *(undefined8 *)(lVar1 + -0x40);
        uVar10 = *(undefined8 *)(lVar1 + -0x28);
        uVar9 = *(undefined8 *)(lVar1 + -0x30);
        param_2[3] = lVar5 + -1;
        param_1[5] = uVar8;
        param_1[4] = uVar12;
        param_1[7] = uVar10;
        param_1[6] = uVar9;
        uVar9 = *(undefined8 *)(lVar1 + -0x20);
        uVar8 = *(undefined8 *)(lVar1 + -8);
        uVar12 = *(undefined8 *)(lVar1 + -0x10);
        param_1[9] = *(undefined8 *)(lVar1 + -0x18);
        param_1[8] = uVar9;
        param_1[0xb] = uVar8;
        param_1[10] = uVar12;
        uVar9 = *(undefined8 *)(lVar1 + -0x60);
        uVar8 = *(undefined8 *)(lVar1 + -0x48);
        uVar12 = *(undefined8 *)(lVar1 + -0x50);
        param_1[1] = *(undefined8 *)(lVar1 + -0x58);
        *param_1 = uVar9;
        param_1[3] = uVar8;
        param_1[2] = uVar12;
        return;
      }
    }
    uVar12 = NEON_cmeq(uVar12,0xffffffffffffffff,1);
    bVar11 = NEON_umaxv(uVar12,1);
    if ((bVar11 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    param_3 = param_3 + lVar5 & uVar4;
    uVar12 = *(undefined8 *)(lVar3 + param_3);
    uVar13 = NEON_cmeq(uVar12,uVar8,1);
  }
  param_1[1] = 2;
  return;
}


// ===== 006fd980  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,
   libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,
   libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji,
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

ulong <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji)>>
      ::reserve_rehash::
      <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
                (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong *__src;
  ulong uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 *local_50;
  ulong uStack_48;
  long local_40;
  
  uVar16 = param_1[3];
  uVar17 = uVar16 + param_2;
  if (CARRY8(uVar16,param_2)) {
    uVar17 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
    return uVar17;
  }
  uVar15 = param_1[1];
  uVar12 = uVar15 + 1;
  uVar9 = uVar12 >> 3;
  uVar5 = uVar15;
  if (7 < uVar15) {
    uVar5 = uVar9 * 7;
  }
  if (uVar5 >> 1 < uVar17) {
    if (uVar17 < uVar5 + 1) {
      uVar17 = uVar5 + 1;
    }
    FUN_00700850(&local_50,0x60,uVar17);
    if (local_50 == (undefined8 *)0x0) {
      return uStack_48;
    }
    if (uVar16 == 0) {
      puVar8 = (undefined8 *)*param_1;
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      lVar10 = 0;
      uVar17 = NEON_cmge(*puVar8,0,1);
      uVar17 = uVar17 & 0x8080808080808080;
      puVar3 = puVar8;
      uVar12 = uVar16;
      do {
        for (; uVar17 == 0; uVar17 = uVar17 & 0x8080808080808080) {
          lVar10 = lVar10 + 8;
          uVar17 = NEON_cmge(puVar3[1],0,1);
          puVar3 = puVar3 + 1;
        }
        uVar9 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = lVar10 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
        uVar5 = puVar8[uVar9 * -0xc + -0xc] * 0x517cc1b727220a95 & uStack_48;
        uVar18 = NEON_cmlt(*(undefined8 *)((long)local_50 + uVar5),0,1);
        if (uVar18 == 0) {
          lVar6 = 8;
          do {
            uVar5 = uVar5 + lVar6;
            lVar6 = lVar6 + 8;
            uVar5 = uVar5 & uStack_48;
            uVar18 = NEON_cmlt(*(undefined8 *)((long)local_50 + uVar5),0,1);
          } while (uVar18 == 0);
        }
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uStack_48;
        if (-1 < *(char *)((long)local_50 + uVar5)) {
          uVar5 = NEON_cmlt(*local_50,0,1);
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
        }
        puVar14 = puVar8 + ~uVar9 * 0xc;
        bVar2 = (byte)((ulong)(puVar8[uVar9 * -0xc + -0xc] * 0x517cc1b727220a95) >> 0x38);
        *(byte *)((long)local_50 + uVar5) = bVar2 >> 1;
        uVar12 = uVar12 - 1;
        puVar7 = local_50 + ~uVar5 * 0xc;
        *(byte *)((long)local_50 + (uVar5 - 8 & uStack_48) + 8) = bVar2 >> 1;
        uVar17 = uVar17 - 1 & uVar17;
        uVar21 = *puVar14;
        uVar20 = puVar14[3];
        uVar19 = puVar14[2];
        puVar7[1] = puVar14[1];
        *puVar7 = uVar21;
        puVar7[3] = uVar20;
        puVar7[2] = uVar19;
        uVar21 = puVar14[8];
        uVar20 = puVar14[0xb];
        uVar19 = puVar14[10];
        uVar23 = puVar14[5];
        uVar22 = puVar14[4];
        uVar26 = puVar14[7];
        uVar24 = puVar14[6];
        puVar7[9] = puVar14[9];
        puVar7[8] = uVar21;
        puVar7[0xb] = uVar20;
        puVar7[10] = uVar19;
        puVar7[5] = uVar23;
        puVar7[4] = uVar22;
        puVar7[7] = uVar26;
        puVar7[6] = uVar24;
      } while (uVar12 != 0);
    }
    *param_1 = (long)local_50;
    param_1[1] = uStack_48;
    param_1[2] = local_40 - uVar16;
    if ((uVar15 != 0) && (lVar10 = uVar15 * 0x60 + 0x60, uVar15 + lVar10 != -9)) {
      free((void *)((long)puVar8 - lVar10));
    }
  }
  else {
    if (uVar12 != 0) {
      __src = (ulong *)*param_1;
      puVar11 = __src;
      if ((uVar12 & 7) != 0) {
        uVar9 = uVar9 + 1;
      }
      do {
        uVar9 = uVar9 - 1;
        uVar17 = NEON_cmlt(*puVar11,0,1);
        *puVar11 = uVar17 | 0x8080808080808080;
        puVar11 = puVar11 + 1;
      } while (uVar9 != 0);
      if (uVar12 < 8) {
        memmove(__src + 1,__src,uVar15 + 1);
      }
      else {
        *(ulong *)((long)__src + uVar12) = *__src;
      }
      uVar17 = 0;
      do {
        if (*(char *)((long)__src + uVar17) == -0x80) {
          puVar11 = __src + ~uVar17 * 0xc;
          while( true ) {
            uVar9 = param_1[1];
            uVar12 = __src[uVar17 * -0xc + -0xc] * 0x517cc1b727220a95;
            uVar5 = uVar9 & uVar12;
            uVar16 = NEON_cmlt(*(undefined8 *)((long)__src + uVar5),0,1);
            if (uVar16 == 0) {
              lVar10 = 8;
              uVar18 = uVar9 & uVar12;
              do {
                uVar18 = uVar18 + lVar10;
                lVar10 = lVar10 + 8;
                uVar18 = uVar18 & uVar9;
                uVar16 = NEON_cmlt(*(undefined8 *)((long)__src + uVar18),0,1);
              } while (uVar16 == 0);
            }
            else {
              uVar18 = uVar9 & uVar12;
            }
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar18 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar9;
            bVar2 = (byte)(uVar12 >> 0x38);
            if (*(char *)((long)__src + uVar16) < '\0') {
              uVar12 = uVar16 - uVar5 ^ uVar17 - uVar5;
            }
            else {
              uVar16 = NEON_cmlt(*__src,0,1);
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
              uVar12 = uVar16 - uVar5 ^ uVar17 - uVar5;
            }
            if ((uVar12 & uVar9) < 8) {
              *(byte *)((long)__src + uVar17) = bVar2 >> 1;
              __src = (ulong *)*param_1;
              *(byte *)((long)__src + (uVar9 & uVar17 - 8) + 8) = bVar2 >> 1;
              goto LAB_006fdd40;
            }
            puVar13 = __src + ~uVar16 * 0xc;
            cVar1 = *(char *)((long)__src + uVar16);
            *(byte *)((long)__src + uVar16) = bVar2 >> 1;
            __src = (ulong *)*param_1;
            *(byte *)((long)__src + (uVar16 - 8 & uVar9) + 8) = bVar2 >> 1;
            if (cVar1 == -1) break;
            uVar16 = *puVar11;
            *puVar11 = *puVar13;
            *puVar13 = uVar16;
            uVar16 = puVar11[1];
            puVar11[1] = puVar13[1];
            puVar13[1] = uVar16;
            uVar16 = puVar11[2];
            puVar11[2] = puVar13[2];
            puVar13[2] = uVar16;
            uVar16 = puVar11[3];
            puVar11[3] = puVar13[3];
            puVar13[3] = uVar16;
            uVar16 = puVar11[4];
            puVar11[4] = puVar13[4];
            puVar13[4] = uVar16;
            uVar16 = puVar11[5];
            puVar11[5] = puVar13[5];
            puVar13[5] = uVar16;
            uVar16 = puVar11[6];
            puVar11[6] = puVar13[6];
            puVar13[6] = uVar16;
            uVar16 = puVar11[7];
            puVar11[7] = puVar13[7];
            puVar13[7] = uVar16;
            uVar16 = puVar11[8];
            puVar11[8] = puVar13[8];
            puVar13[8] = uVar16;
            uVar16 = puVar11[9];
            puVar11[9] = puVar13[9];
            puVar13[9] = uVar16;
            uVar16 = puVar11[10];
            puVar11[10] = puVar13[10];
            puVar13[10] = uVar16;
            uVar16 = puVar11[0xb];
            puVar11[0xb] = puVar13[0xb];
            puVar13[0xb] = uVar16;
            __src = (ulong *)*param_1;
          }
          uVar16 = param_1[1];
          *(undefined1 *)((long)__src + uVar17) = 0xff;
          *(undefined1 *)((long)__src + (uVar16 & uVar17 - 8) + 8) = 0xff;
          uVar9 = puVar11[8];
          uVar12 = puVar11[0xb];
          uVar16 = puVar11[10];
          uVar27 = puVar11[5];
          uVar25 = puVar11[4];
          uVar18 = puVar11[7];
          uVar5 = puVar11[6];
          puVar13[9] = puVar11[9];
          puVar13[8] = uVar9;
          puVar13[0xb] = uVar12;
          puVar13[10] = uVar16;
          puVar13[5] = uVar27;
          puVar13[4] = uVar25;
          puVar13[7] = uVar18;
          puVar13[6] = uVar5;
          uVar9 = *puVar11;
          uVar12 = puVar11[3];
          uVar16 = puVar11[2];
          puVar13[1] = puVar11[1];
          *puVar13 = uVar9;
          puVar13[3] = uVar12;
          puVar13[2] = uVar16;
        }
LAB_006fdd40:
        bVar4 = uVar17 != uVar15;
        uVar17 = uVar17 + 1;
      } while (bVar4);
      uVar12 = param_1[1];
      uVar16 = param_1[3];
      if (7 < uVar12) {
        uVar12 = (uVar12 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar12 - uVar16;
  }
  return 0xffffffffffffffff;
}


// ===== 006fde54  FUN_006fde54 =====

void FUN_006fde54(undefined8 *param_1,long *param_2,ulong param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  lVar5 = 0;
  bVar12 = (byte)(param_3 >> 0x39);
  uVar8 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  lVar3 = *param_2;
  uVar4 = param_2[1];
  param_3 = param_3 & uVar4;
  uVar13 = *(undefined8 *)(lVar3 + param_3);
  uVar14 = NEON_cmeq(uVar13,uVar8,1);
  while( true ) {
    for (uVar14 = uVar14 & 0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = param_3 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4;
      lVar1 = lVar3 + uVar7 * -0x28;
      if (*param_4 == *(long *)(lVar1 + -0x28)) {
        lVar5 = ((long)(uVar7 * 0x28) >> 3) * -0x3333333333333333;
        uVar14 = NEON_cmeq(*(undefined8 *)(lVar3 + lVar5),0xffffffffffffffff,1);
        puVar2 = (undefined8 *)(lVar3 + (lVar5 - 8U & uVar4));
        uVar13 = NEON_cmeq(*puVar2,0xffffffffffffffff,1);
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar13) >> 3) <
            8) {
          param_2[2] = param_2[2] + 1;
          uVar6 = 0xff;
        }
        else {
          uVar6 = 0x80;
        }
        *(undefined1 *)(lVar3 + lVar5) = uVar6;
        lVar5 = param_2[3];
        *(undefined1 *)(puVar2 + 1) = uVar6;
        uVar9 = *(undefined8 *)(lVar1 + -0x20);
        uVar8 = *(undefined8 *)(lVar1 + -0x28);
        uVar11 = *(undefined8 *)(lVar1 + -0x10);
        uVar10 = *(undefined8 *)(lVar1 + -0x18);
        param_2[3] = lVar5 + -1;
        uVar13 = *(undefined8 *)(lVar1 + -8);
        param_1[1] = uVar9;
        *param_1 = uVar8;
        param_1[3] = uVar11;
        param_1[2] = uVar10;
        param_1[4] = uVar13;
        return;
      }
    }
    uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
    bVar12 = NEON_umaxv(uVar13,1);
    if ((bVar12 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    param_3 = param_3 + lVar5 & uVar4;
    uVar13 = *(undefined8 *)(lVar3 + param_3);
    uVar14 = NEON_cmeq(uVar13,uVar8,1);
  }
  *param_1 = 0;
  return;
}


// ===== 006fdf90  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,
   libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,
   libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,
   libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,
   libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

ulong <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>)>>
      ::reserve_rehash::
      <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::EmojiId,libdiscore_common[1cb84820f9455fa0]::stores::guild_emoji::RawGuildEmoji>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
                (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *__src;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *local_50;
  ulong uStack_48;
  long local_40;
  
  uVar16 = param_1[3];
  uVar17 = uVar16 + param_2;
  if (CARRY8(uVar16,param_2)) {
    uVar17 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
    return uVar17;
  }
  uVar15 = param_1[1];
  uVar12 = uVar15 + 1;
  uVar9 = uVar12 >> 3;
  uVar5 = uVar15;
  if (7 < uVar15) {
    uVar5 = uVar9 * 7;
  }
  if (uVar5 >> 1 < uVar17) {
    if (uVar17 < uVar5 + 1) {
      uVar17 = uVar5 + 1;
    }
    FUN_00700850(&local_50,0x28,uVar17);
    if (local_50 == (undefined8 *)0x0) {
      return uStack_48;
    }
    if (uVar16 == 0) {
      puVar8 = (undefined8 *)*param_1;
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      lVar10 = 0;
      uVar17 = NEON_cmge(*puVar8,0,1);
      uVar17 = uVar17 & 0x8080808080808080;
      puVar3 = puVar8;
      uVar12 = uVar16;
      do {
        for (; uVar17 == 0; uVar17 = uVar17 & 0x8080808080808080) {
          lVar10 = lVar10 + 8;
          uVar17 = NEON_cmge(puVar3[1],0,1);
          puVar3 = puVar3 + 1;
        }
        uVar9 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = lVar10 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
        uVar5 = puVar8[uVar9 * -5 + -5] * 0x517cc1b727220a95 & uStack_48;
        uVar18 = NEON_cmlt(*(undefined8 *)((long)local_50 + uVar5),0,1);
        if (uVar18 == 0) {
          lVar6 = 8;
          do {
            uVar5 = uVar5 + lVar6;
            lVar6 = lVar6 + 8;
            uVar5 = uVar5 & uStack_48;
            uVar18 = NEON_cmlt(*(undefined8 *)((long)local_50 + uVar5),0,1);
          } while (uVar18 == 0);
        }
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uStack_48;
        if (-1 < *(char *)((long)local_50 + uVar5)) {
          uVar5 = NEON_cmlt(*local_50,0,1);
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
        }
        puVar14 = puVar8 + ~uVar9 * 5;
        bVar2 = (byte)((ulong)(puVar8[uVar9 * -5 + -5] * 0x517cc1b727220a95) >> 0x38);
        *(byte *)((long)local_50 + uVar5) = bVar2 >> 1;
        uVar12 = uVar12 - 1;
        puVar7 = local_50 + ~uVar5 * 5;
        *(byte *)((long)local_50 + (uVar5 - 8 & uStack_48) + 8) = bVar2 >> 1;
        uVar22 = puVar14[1];
        uVar21 = *puVar14;
        uVar20 = puVar14[3];
        uVar19 = puVar14[2];
        puVar7[4] = puVar14[4];
        uVar17 = uVar17 - 1 & uVar17;
        puVar7[1] = uVar22;
        *puVar7 = uVar21;
        puVar7[3] = uVar20;
        puVar7[2] = uVar19;
      } while (uVar12 != 0);
    }
    *param_1 = (long)local_50;
    param_1[1] = uStack_48;
    param_1[2] = local_40 - uVar16;
    if ((uVar15 != 0) && (lVar10 = uVar15 * 0x28 + 0x28, uVar15 + lVar10 != -9)) {
      free((void *)((long)puVar8 - lVar10));
    }
  }
  else {
    if (uVar12 == 0) {
      uVar17 = 0;
    }
    else {
      __src = (ulong *)*param_1;
      puVar11 = __src;
      if ((uVar12 & 7) != 0) {
        uVar9 = uVar9 + 1;
      }
      do {
        uVar9 = uVar9 - 1;
        uVar17 = NEON_cmlt(*puVar11,0,1);
        *puVar11 = uVar17 | 0x8080808080808080;
        puVar11 = puVar11 + 1;
      } while (uVar9 != 0);
      if (uVar12 < 8) {
        memmove(__src + 1,__src,uVar15 + 1);
      }
      else {
        *(ulong *)((long)__src + uVar12) = *__src;
      }
      uVar17 = 0;
      do {
        if (*(char *)((long)__src + uVar17) == -0x80) {
          puVar11 = __src + ~uVar17 * 5;
          while( true ) {
            uVar9 = __src[uVar17 * -5 + -5] * 0x517cc1b727220a95;
            uVar12 = param_1[1];
            uVar5 = uVar12 & uVar9;
            uVar16 = NEON_cmlt(*(undefined8 *)((long)__src + uVar5),0,1);
            if (uVar16 == 0) {
              lVar10 = 8;
              uVar18 = uVar12 & uVar9;
              do {
                uVar18 = uVar18 + lVar10;
                lVar10 = lVar10 + 8;
                uVar18 = uVar18 & uVar12;
                uVar16 = NEON_cmlt(*(undefined8 *)((long)__src + uVar18),0,1);
              } while (uVar16 == 0);
            }
            else {
              uVar18 = uVar12 & uVar9;
            }
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar18 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar12;
            bVar2 = (byte)(uVar9 >> 0x38);
            if (*(char *)((long)__src + uVar16) < '\0') {
              uVar9 = uVar16 - uVar5 ^ uVar17 - uVar5;
            }
            else {
              uVar16 = NEON_cmlt(*__src,0,1);
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
              uVar9 = uVar16 - uVar5 ^ uVar17 - uVar5;
            }
            if ((uVar9 & uVar12) < 8) {
              *(byte *)((long)__src + uVar17) = bVar2 >> 1;
              __src = (ulong *)*param_1;
              *(byte *)((long)__src + (uVar12 & uVar17 - 8) + 8) = bVar2 >> 1;
              goto LAB_006fe2d8;
            }
            puVar13 = __src + ~uVar16 * 5;
            cVar1 = *(char *)((long)__src + uVar16);
            *(byte *)((long)__src + uVar16) = bVar2 >> 1;
            __src = (ulong *)*param_1;
            *(byte *)((long)__src + (uVar16 - 8 & uVar12) + 8) = bVar2 >> 1;
            if (cVar1 == -1) break;
            uVar16 = *puVar11;
            *puVar11 = *puVar13;
            *puVar13 = uVar16;
            uVar16 = puVar11[1];
            puVar11[1] = puVar13[1];
            puVar13[1] = uVar16;
            uVar16 = puVar11[2];
            puVar11[2] = puVar13[2];
            puVar13[2] = uVar16;
            uVar16 = puVar11[3];
            puVar11[3] = puVar13[3];
            puVar13[3] = uVar16;
            uVar16 = puVar11[4];
            puVar11[4] = puVar13[4];
            puVar13[4] = uVar16;
            __src = (ulong *)*param_1;
          }
          uVar16 = param_1[1];
          *(undefined1 *)((long)__src + uVar17) = 0xff;
          *(undefined1 *)((long)__src + (uVar16 & uVar17 - 8) + 8) = 0xff;
          uVar5 = puVar11[1];
          uVar9 = *puVar11;
          uVar12 = puVar11[3];
          uVar16 = puVar11[2];
          puVar13[4] = puVar11[4];
          puVar13[1] = uVar5;
          *puVar13 = uVar9;
          puVar13[3] = uVar12;
          puVar13[2] = uVar16;
        }
LAB_006fe2d8:
        bVar4 = uVar17 != uVar15;
        uVar17 = uVar17 + 1;
      } while (bVar4);
      uVar17 = param_1[1];
      uVar16 = param_1[3];
      if (7 < uVar17) {
        uVar17 = (uVar17 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar17 - uVar16;
  }
  return 0xffffffffffffffff;
}


// ===== 006fe3ec  FUN_006fe3ec =====

void FUN_006fe3ec(void *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *__src;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  lVar4 = 0;
  bVar9 = (byte)(param_3 >> 0x39);
  uVar8 = CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9,
                                                  CONCAT11(bVar9,bVar9)))))));
  lVar2 = *param_2;
  uVar3 = param_2[1];
  param_3 = param_3 & uVar3;
  uVar10 = *(undefined8 *)(lVar2 + param_3);
  uVar11 = NEON_cmeq(uVar10,uVar8,1);
  while( true ) {
    for (uVar11 = uVar11 & 0x8080808080808080; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar7 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = param_3 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar3;
      __src = (long *)(lVar2 + uVar7 * -0x220 + -0x220);
      if (*param_4 == *__src) {
        lVar4 = ((long)(uVar7 * 0x220) >> 5) * -0xf0f0f0f0f0f0f0f;
        uVar11 = NEON_cmeq(*(undefined8 *)(lVar2 + lVar4),0xffffffffffffffff,1);
        puVar1 = (undefined8 *)(lVar2 + (lVar4 - 8U & uVar3));
        uVar10 = NEON_cmeq(*puVar1,0xffffffffffffffff,1);
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar10) >> 3) <
            8) {
          param_2[2] = param_2[2] + 1;
          uVar5 = 0xff;
        }
        else {
          uVar5 = 0x80;
        }
        lVar6 = param_2[3];
        *(undefined1 *)(lVar2 + lVar4) = uVar5;
        *(undefined1 *)(puVar1 + 1) = uVar5;
        param_2[3] = lVar6 + -1;
        memcpy(param_1,__src,0x220);
        return;
      }
    }
    uVar10 = NEON_cmeq(uVar10,0xffffffffffffffff,1);
    bVar9 = NEON_umaxv(uVar10,1);
    if ((bVar9 & 1) != 0) break;
    lVar4 = lVar4 + 8;
    param_3 = param_3 + lVar4 & uVar3;
    uVar10 = *(undefined8 *)(lVar2 + param_3);
    uVar11 = NEON_cmeq(uVar10,uVar8,1);
  }
  *(undefined8 *)((long)param_1 + 8) = 2;
  return;
}


// ===== 006fe528  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,
   libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,
   libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild,
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

ulong <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild)>>
      ::reserve_rehash::
      <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
                (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong *__dest;
  ulong *__src;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *__src_00;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *local_80;
  ulong uStack_78;
  long local_70;
  
  uVar12 = param_1[3];
  uVar16 = uVar12 + param_2;
  if (CARRY8(uVar12,param_2)) {
    uVar16 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
  }
  else {
    uVar11 = param_1[1];
    uVar13 = uVar11 + 1;
    uVar6 = uVar13 >> 3;
    uVar7 = uVar11;
    if (7 < uVar11) {
      uVar7 = uVar6 * 7;
    }
    if (uVar7 >> 1 < uVar16) {
      if (uVar16 < uVar7 + 1) {
        uVar16 = uVar7 + 1;
      }
      FUN_00700850(&local_80,0x220,uVar16);
      if (local_80 == (undefined8 *)0x0) {
        return uStack_78;
      }
      if (uVar12 == 0) {
        puVar10 = (undefined8 *)*param_1;
        *param_1 = (long)local_80;
        param_1[1] = uStack_78;
        param_1[2] = local_70;
      }
      else {
        puVar10 = (undefined8 *)*param_1;
        lVar15 = 0;
        uVar16 = NEON_cmge(*puVar10,0,1);
        uVar16 = uVar16 & 0x8080808080808080;
        puVar3 = puVar10;
        uVar13 = uVar12;
        do {
          for (; uVar16 == 0; uVar16 = uVar16 & 0x8080808080808080) {
            lVar15 = lVar15 + 8;
            uVar16 = NEON_cmge(puVar3[1],0,1);
            puVar3 = puVar3 + 1;
          }
          uVar6 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = lVar15 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3);
          uVar7 = puVar10[uVar6 * -0x44 + -0x44] * 0x517cc1b727220a95 & uStack_78;
          uVar17 = NEON_cmlt(*(undefined8 *)((long)local_80 + uVar7),0,1);
          if (uVar17 == 0) {
            lVar8 = 8;
            do {
              uVar7 = uVar7 + lVar8;
              lVar8 = lVar8 + 8;
              uVar7 = uVar7 & uStack_78;
              uVar17 = NEON_cmlt(*(undefined8 *)((long)local_80 + uVar7),0,1);
            } while (uVar17 == 0);
          }
          uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uStack_78;
          if (-1 < *(char *)((long)local_80 + uVar7)) {
            uVar7 = NEON_cmlt(*local_80,0,1);
            uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
            uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
            uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
            uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
            uVar7 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
          }
          bVar2 = (byte)((ulong)(puVar10[uVar6 * -0x44 + -0x44] * 0x517cc1b727220a95) >> 0x38);
          *(byte *)((long)local_80 + uVar7) = bVar2 >> 1;
          uVar16 = uVar16 - 1 & uVar16;
          uVar13 = uVar13 - 1;
          *(byte *)((long)local_80 + (uVar7 - 8 & uStack_78) + 8) = bVar2 >> 1;
          memcpy(local_80 + ~uVar7 * 0x44,puVar10 + ~uVar6 * 0x44,0x220);
        } while (uVar13 != 0);
        *param_1 = (long)local_80;
        param_1[1] = uStack_78;
        param_1[2] = local_70 - uVar12;
      }
      if ((uVar11 != 0) && (lVar15 = uVar11 * 0x220 + 0x220, uVar11 + lVar15 != -9)) {
        free((void *)((long)puVar10 - lVar15));
      }
    }
    else {
      if (uVar13 != 0) {
        __src_00 = (ulong *)*param_1;
        puVar14 = __src_00;
        if ((uVar13 & 7) != 0) {
          uVar6 = uVar6 + 1;
        }
        do {
          uVar6 = uVar6 - 1;
          uVar16 = NEON_cmlt(*puVar14,0,1);
          *puVar14 = uVar16 | 0x8080808080808080;
          puVar14 = puVar14 + 1;
        } while (uVar6 != 0);
        if (uVar13 < 8) {
          memmove(__src_00 + 1,__src_00,uVar11 + 1);
        }
        else {
          *(ulong *)((long)__src_00 + uVar13) = *__src_00;
        }
        lVar15 = 0;
        uVar16 = 0;
        do {
          puVar14 = __src_00;
          if (*(char *)((long)__src_00 + uVar16) == -0x80) {
            __src = __src_00 + ~uVar16 * 0x44;
            puVar9 = __src_00;
            while( true ) {
              uVar7 = puVar9[uVar16 * -0x44 + -0x44] * 0x517cc1b727220a95;
              uVar6 = param_1[1];
              uVar12 = uVar6 & uVar7;
              uVar13 = NEON_cmlt(*(undefined8 *)((long)puVar9 + uVar12),0,1);
              if (uVar13 == 0) {
                lVar8 = 8;
                uVar17 = uVar6 & uVar7;
                do {
                  uVar17 = uVar17 + lVar8;
                  lVar8 = lVar8 + 8;
                  uVar17 = uVar17 & uVar6;
                  uVar13 = NEON_cmlt(*(undefined8 *)((long)puVar9 + uVar17),0,1);
                } while (uVar13 == 0);
              }
              else {
                uVar17 = uVar6 & uVar7;
              }
              uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar13 = uVar17 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar6;
              bVar2 = (byte)(uVar7 >> 0x38);
              if (*(char *)((long)puVar9 + uVar13) < '\0') {
                uVar12 = uVar13 - uVar12 ^ uVar16 - uVar12;
              }
              else {
                uVar13 = NEON_cmlt(*puVar9,0,1);
                uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
                uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
                uVar12 = uVar13 - uVar12 ^ uVar16 - uVar12;
              }
              if ((uVar12 & uVar6) < 8) {
                *(byte *)((long)puVar9 + uVar16) = bVar2 >> 1;
                puVar14 = (ulong *)*param_1;
                *(byte *)((long)puVar14 + (uVar6 & uVar16 - 8) + 8) = bVar2 >> 1;
                goto LAB_006fe97c;
              }
              cVar1 = *(char *)((long)puVar9 + uVar13);
              __dest = puVar9 + ~uVar13 * 0x44;
              *(byte *)((long)puVar9 + uVar13) = bVar2 >> 1;
              puVar14 = (ulong *)*param_1;
              *(byte *)((long)puVar14 + (uVar13 - 8 & uVar6) + 8) = bVar2 >> 1;
              if (cVar1 == -1) break;
              if (__src < puVar9 + uVar13 * -0x44 && __dest < __src_00 + uVar16 * -0x44) {
                lVar8 = -0x220;
                do {
                  uVar5 = *(undefined8 *)((long)__src_00 + lVar8 + lVar15);
                  *(undefined8 *)((long)__src_00 + lVar8 + lVar15) =
                       *(undefined8 *)((long)puVar9 + lVar8 + uVar13 * -0x220);
                  *(undefined8 *)((long)puVar9 + lVar8 + uVar13 * -0x220) = uVar5;
                  lVar8 = lVar8 + 8;
                } while (lVar8 != 0);
              }
              else {
                uVar12 = *__dest;
                uVar6 = __dest[3];
                uVar13 = __dest[2];
                uVar17 = __src[1];
                uVar7 = *__src;
                uVar19 = __src[3];
                uVar18 = __src[2];
                __src[1] = __dest[1];
                *__src = uVar12;
                __src[3] = uVar6;
                __src[2] = uVar13;
                uVar12 = __dest[4];
                uVar6 = __dest[7];
                uVar13 = __dest[6];
                __dest[1] = uVar17;
                *__dest = uVar7;
                __dest[3] = uVar19;
                __dest[2] = uVar18;
                uVar17 = __src[5];
                uVar7 = __src[4];
                uVar19 = __src[7];
                uVar18 = __src[6];
                __src[5] = __dest[5];
                __src[4] = uVar12;
                __src[7] = uVar6;
                __src[6] = uVar13;
                uVar12 = __dest[8];
                uVar6 = __dest[0xb];
                uVar13 = __dest[10];
                __dest[5] = uVar17;
                __dest[4] = uVar7;
                __dest[7] = uVar19;
                __dest[6] = uVar18;
                uVar17 = __src[9];
                uVar7 = __src[8];
                uVar19 = __src[0xb];
                uVar18 = __src[10];
                __src[9] = __dest[9];
                __src[8] = uVar12;
                __src[0xb] = uVar6;
                __src[10] = uVar13;
                uVar12 = __dest[0xc];
                uVar6 = __dest[0xf];
                uVar13 = __dest[0xe];
                __dest[9] = uVar17;
                __dest[8] = uVar7;
                __dest[0xb] = uVar19;
                __dest[10] = uVar18;
                uVar17 = __src[0xd];
                uVar7 = __src[0xc];
                uVar19 = __src[0xf];
                uVar18 = __src[0xe];
                __src[0xd] = __dest[0xd];
                __src[0xc] = uVar12;
                __src[0xf] = uVar6;
                __src[0xe] = uVar13;
                uVar12 = __dest[0x10];
                uVar6 = __dest[0x13];
                uVar13 = __dest[0x12];
                __dest[0xd] = uVar17;
                __dest[0xc] = uVar7;
                __dest[0xf] = uVar19;
                __dest[0xe] = uVar18;
                uVar17 = __src[0x11];
                uVar7 = __src[0x10];
                uVar19 = __src[0x13];
                uVar18 = __src[0x12];
                __src[0x11] = __dest[0x11];
                __src[0x10] = uVar12;
                __src[0x13] = uVar6;
                __src[0x12] = uVar13;
                uVar12 = __dest[0x14];
                uVar6 = __dest[0x17];
                uVar13 = __dest[0x16];
                __dest[0x11] = uVar17;
                __dest[0x10] = uVar7;
                __dest[0x13] = uVar19;
                __dest[0x12] = uVar18;
                uVar17 = __src[0x15];
                uVar7 = __src[0x14];
                uVar19 = __src[0x17];
                uVar18 = __src[0x16];
                __src[0x15] = __dest[0x15];
                __src[0x14] = uVar12;
                __src[0x17] = uVar6;
                __src[0x16] = uVar13;
                uVar12 = __dest[0x18];
                uVar6 = __dest[0x1b];
                uVar13 = __dest[0x1a];
                __dest[0x15] = uVar17;
                __dest[0x14] = uVar7;
                __dest[0x17] = uVar19;
                __dest[0x16] = uVar18;
                uVar17 = __src[0x19];
                uVar7 = __src[0x18];
                uVar19 = __src[0x1b];
                uVar18 = __src[0x1a];
                __src[0x19] = __dest[0x19];
                __src[0x18] = uVar12;
                __src[0x1b] = uVar6;
                __src[0x1a] = uVar13;
                uVar12 = __dest[0x1c];
                uVar6 = __dest[0x1f];
                uVar13 = __dest[0x1e];
                __dest[0x19] = uVar17;
                __dest[0x18] = uVar7;
                __dest[0x1b] = uVar19;
                __dest[0x1a] = uVar18;
                uVar17 = __src[0x1d];
                uVar7 = __src[0x1c];
                uVar19 = __src[0x1f];
                uVar18 = __src[0x1e];
                __src[0x1d] = __dest[0x1d];
                __src[0x1c] = uVar12;
                __src[0x1f] = uVar6;
                __src[0x1e] = uVar13;
                uVar12 = __dest[0x20];
                uVar6 = __dest[0x23];
                uVar13 = __dest[0x22];
                __dest[0x1d] = uVar17;
                __dest[0x1c] = uVar7;
                __dest[0x1f] = uVar19;
                __dest[0x1e] = uVar18;
                uVar17 = __src[0x21];
                uVar7 = __src[0x20];
                uVar19 = __src[0x23];
                uVar18 = __src[0x22];
                __src[0x21] = __dest[0x21];
                __src[0x20] = uVar12;
                __src[0x23] = uVar6;
                __src[0x22] = uVar13;
                uVar12 = __dest[0x24];
                uVar6 = __dest[0x27];
                uVar13 = __dest[0x26];
                __dest[0x21] = uVar17;
                __dest[0x20] = uVar7;
                __dest[0x23] = uVar19;
                __dest[0x22] = uVar18;
                uVar17 = __src[0x25];
                uVar7 = __src[0x24];
                uVar19 = __src[0x27];
                uVar18 = __src[0x26];
                __src[0x25] = __dest[0x25];
                __src[0x24] = uVar12;
                __src[0x27] = uVar6;
                __src[0x26] = uVar13;
                uVar12 = __dest[0x28];
                uVar6 = __dest[0x2b];
                uVar13 = __dest[0x2a];
                __dest[0x25] = uVar17;
                __dest[0x24] = uVar7;
                __dest[0x27] = uVar19;
                __dest[0x26] = uVar18;
                uVar17 = __src[0x29];
                uVar7 = __src[0x28];
                uVar19 = __src[0x2b];
                uVar18 = __src[0x2a];
                __src[0x29] = __dest[0x29];
                __src[0x28] = uVar12;
                __src[0x2b] = uVar6;
                __src[0x2a] = uVar13;
                uVar12 = __dest[0x2c];
                uVar6 = __dest[0x2f];
                uVar13 = __dest[0x2e];
                __dest[0x29] = uVar17;
                __dest[0x28] = uVar7;
                __dest[0x2b] = uVar19;
                __dest[0x2a] = uVar18;
                uVar17 = __src[0x2d];
                uVar7 = __src[0x2c];
                uVar19 = __src[0x2f];
                uVar18 = __src[0x2e];
                __src[0x2d] = __dest[0x2d];
                __src[0x2c] = uVar12;
                __src[0x2f] = uVar6;
                __src[0x2e] = uVar13;
                uVar12 = __dest[0x30];
                uVar6 = __dest[0x33];
                uVar13 = __dest[0x32];
                __dest[0x2d] = uVar17;
                __dest[0x2c] = uVar7;
                __dest[0x2f] = uVar19;
                __dest[0x2e] = uVar18;
                uVar17 = __src[0x31];
                uVar7 = __src[0x30];
                uVar19 = __src[0x33];
                uVar18 = __src[0x32];
                __src[0x31] = __dest[0x31];
                __src[0x30] = uVar12;
                __src[0x33] = uVar6;
                __src[0x32] = uVar13;
                uVar12 = __dest[0x34];
                uVar6 = __dest[0x37];
                uVar13 = __dest[0x36];
                __dest[0x31] = uVar17;
                __dest[0x30] = uVar7;
                __dest[0x33] = uVar19;
                __dest[0x32] = uVar18;
                uVar17 = __src[0x35];
                uVar7 = __src[0x34];
                uVar19 = __src[0x37];
                uVar18 = __src[0x36];
                __src[0x35] = __dest[0x35];
                __src[0x34] = uVar12;
                __src[0x37] = uVar6;
                __src[0x36] = uVar13;
                uVar12 = __dest[0x38];
                uVar6 = __dest[0x3b];
                uVar13 = __dest[0x3a];
                __dest[0x35] = uVar17;
                __dest[0x34] = uVar7;
                __dest[0x37] = uVar19;
                __dest[0x36] = uVar18;
                uVar17 = __src[0x39];
                uVar7 = __src[0x38];
                uVar19 = __src[0x3b];
                uVar18 = __src[0x3a];
                __src[0x39] = __dest[0x39];
                __src[0x38] = uVar12;
                __src[0x3b] = uVar6;
                __src[0x3a] = uVar13;
                uVar12 = __dest[0x3c];
                uVar6 = __dest[0x3f];
                uVar13 = __dest[0x3e];
                __dest[0x39] = uVar17;
                __dest[0x38] = uVar7;
                __dest[0x3b] = uVar19;
                __dest[0x3a] = uVar18;
                uVar17 = __src[0x3d];
                uVar7 = __src[0x3c];
                uVar19 = __src[0x3f];
                uVar18 = __src[0x3e];
                __src[0x3d] = __dest[0x3d];
                __src[0x3c] = uVar12;
                __src[0x3f] = uVar6;
                __src[0x3e] = uVar13;
                uVar12 = __dest[0x40];
                uVar6 = __dest[0x43];
                uVar13 = __dest[0x42];
                __dest[0x3d] = uVar17;
                __dest[0x3c] = uVar7;
                __dest[0x3f] = uVar19;
                __dest[0x3e] = uVar18;
                uVar17 = __src[0x41];
                uVar7 = __src[0x40];
                uVar19 = __src[0x43];
                uVar18 = __src[0x42];
                __src[0x41] = __dest[0x41];
                __src[0x40] = uVar12;
                __src[0x43] = uVar6;
                __src[0x42] = uVar13;
                __dest[0x41] = uVar17;
                __dest[0x40] = uVar7;
                __dest[0x43] = uVar19;
                __dest[0x42] = uVar18;
              }
              puVar9 = (ulong *)*param_1;
            }
            uVar12 = param_1[1];
            *(undefined1 *)((long)puVar14 + uVar16) = 0xff;
            *(undefined1 *)((long)puVar14 + (uVar12 & uVar16 - 8) + 8) = 0xff;
            memcpy(__dest,__src,0x220);
          }
LAB_006fe97c:
          bVar4 = uVar16 != uVar11;
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + -0x220;
          __src_00 = puVar14;
        } while (bVar4);
        uVar13 = param_1[1];
        uVar12 = param_1[3];
        if (7 < uVar13) {
          uVar13 = (uVar13 + 1 >> 3) * 7;
        }
      }
      param_1[2] = uVar13 - uVar12;
    }
    uVar16 = 0xffffffffffffffff;
  }
  return uVar16;
}


// ===== 006feac0  FUN_006feac0 =====

undefined8 FUN_006feac0(long *param_1,ulong param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  lVar7 = 0;
  bVar9 = (byte)(param_2 >> 0x39);
  uVar8 = CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9,
                                                  CONCAT11(bVar9,bVar9)))))));
  lVar2 = *param_1;
  uVar3 = param_1[1];
  param_2 = param_2 & uVar3;
  uVar10 = *(undefined8 *)(lVar2 + param_2);
  uVar11 = NEON_cmeq(uVar10,uVar8,1);
  while( true ) {
    for (uVar11 = uVar11 & 0x8080808080808080; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar5 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = param_2 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar3;
      lVar4 = lVar2 + uVar5 * -8;
      if (*param_3 == *(long *)(lVar4 + -8)) {
        puVar1 = (undefined8 *)(lVar2 + (uVar5 - 8 & uVar3));
        uVar11 = NEON_cmeq(*(undefined8 *)(lVar2 + uVar5),0xffffffffffffffff,1);
        uVar10 = NEON_cmeq(*puVar1,0xffffffffffffffff,1);
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar10) >> 3) <
            8) {
          param_1[2] = param_1[2] + 1;
          uVar6 = 0xff;
        }
        else {
          uVar6 = 0x80;
        }
        *(undefined1 *)(lVar2 + uVar5) = uVar6;
        lVar7 = param_1[3];
        *(undefined1 *)(puVar1 + 1) = uVar6;
        uVar10 = *(undefined8 *)(lVar4 + -8);
        param_1[3] = lVar7 + -1;
        return uVar10;
      }
    }
    uVar10 = NEON_cmeq(uVar10,0xffffffffffffffff,1);
    bVar9 = NEON_umaxv(uVar10,1);
    if ((bVar9 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    param_2 = param_2 + lVar7 & uVar3;
    uVar10 = *(undefined8 *)(lVar2 + param_2);
    uVar11 = NEON_cmeq(uVar10,uVar8,1);
  }
  return 0;
}


// ===== 006febd4  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId, =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,
   ())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,
   (), std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> */

ulong <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::
      snowflake::GuildId,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
      make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId_(void)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  bool bVar4;
  long *in_x0;
  ulong uVar5;
  ulong in_x1;
  undefined8 in_x2;
  undefined4 in_w3;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *__src;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *local_80;
  ulong uStack_78;
  long local_70;
  
  uVar11 = in_x0[3];
  uVar16 = uVar11 + in_x1;
  if (CARRY8(uVar11,in_x1)) {
    uVar16 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(in_w3);
  }
  else {
    uVar10 = in_x0[1];
    uVar12 = uVar10 + 1;
    uVar7 = uVar12 >> 3;
    uVar6 = uVar10;
    if (7 < uVar10) {
      uVar6 = uVar7 * 7;
    }
    if (uVar6 >> 1 < uVar16) {
      if (uVar16 < uVar6 + 1) {
        uVar16 = uVar6 + 1;
      }
      FUN_00700850(&local_80,8,uVar16);
      if (local_80 == (undefined8 *)0x0) {
        return uStack_78;
      }
      if (uVar11 == 0) {
        puVar13 = (undefined8 *)*in_x0;
        *in_x0 = (long)local_80;
        in_x0[1] = uStack_78;
        in_x0[2] = local_70;
      }
      else {
        puVar13 = (undefined8 *)*in_x0;
        lVar15 = 0;
        uVar16 = NEON_cmge(*puVar13,0,1);
        uVar16 = uVar16 & 0x8080808080808080;
        puVar3 = puVar13;
        uVar12 = uVar11;
        do {
          for (; uVar16 == 0; uVar16 = uVar16 & 0x8080808080808080) {
            lVar15 = lVar15 + 8;
            uVar16 = NEON_cmge(puVar3[1],0,1);
            puVar3 = puVar3 + 1;
          }
          uVar7 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = lVar15 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3);
          uVar5 = FUN_0076b084(in_x2,puVar13 + (-1 - uVar7));
          uVar6 = uVar5 & uStack_78;
          uVar17 = NEON_cmlt(*(undefined8 *)((long)local_80 + uVar6),0,1);
          if (uVar17 == 0) {
            lVar8 = 8;
            do {
              uVar6 = uVar6 + lVar8;
              lVar8 = lVar8 + 8;
              uVar6 = uVar6 & uStack_78;
              uVar17 = NEON_cmlt(*(undefined8 *)((long)local_80 + uVar6),0,1);
            } while (uVar17 == 0);
          }
          uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uStack_78;
          if (-1 < *(char *)((long)local_80 + uVar6)) {
            uVar6 = NEON_cmlt(*local_80,0,1);
            uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
            uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
            uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            uVar6 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          }
          bVar2 = (byte)(uVar5 >> 0x38);
          *(byte *)((long)local_80 + uVar6) = bVar2 >> 1;
          uVar12 = uVar12 - 1;
          uVar16 = uVar16 - 1 & uVar16;
          *(byte *)((long)local_80 + (uVar6 - 8 & uStack_78) + 8) = bVar2 >> 1;
          local_80[~uVar6] = puVar13[~uVar7];
        } while (uVar12 != 0);
        *in_x0 = (long)local_80;
        in_x0[1] = uStack_78;
        in_x0[2] = local_70 - uVar11;
      }
      if ((uVar10 != 0) && (lVar15 = uVar10 * 8 + 8, uVar10 + lVar15 != -9)) {
        free((void *)((long)puVar13 - lVar15));
      }
    }
    else {
      if (uVar12 != 0) {
        __src = (ulong *)*in_x0;
        puVar9 = __src;
        if ((uVar12 & 7) != 0) {
          uVar7 = uVar7 + 1;
        }
        do {
          uVar7 = uVar7 - 1;
          uVar16 = NEON_cmlt(*puVar9,0,1);
          *puVar9 = uVar16 | 0x8080808080808080;
          puVar9 = puVar9 + 1;
        } while (uVar7 != 0);
        if (uVar12 < 8) {
          memmove(__src + 1,__src,uVar10 + 1);
        }
        else {
          *(ulong *)((long)__src + uVar12) = *__src;
        }
        uVar16 = 0;
        do {
          puVar9 = __src;
          if (*(char *)((long)__src + uVar16) == -0x80) {
            uVar11 = ~uVar16;
            puVar14 = __src;
            while( true ) {
              uVar12 = FUN_0076b084(in_x2,puVar14 + (-1 - uVar16));
              uVar7 = in_x0[1];
              uVar6 = uVar7 & uVar12;
              uVar5 = NEON_cmlt(*(undefined8 *)((long)puVar14 + uVar6),0,1);
              if (uVar5 == 0) {
                lVar15 = 8;
                uVar17 = uVar7 & uVar12;
                do {
                  uVar17 = uVar17 + lVar15;
                  lVar15 = lVar15 + 8;
                  uVar17 = uVar17 & uVar7;
                  uVar5 = NEON_cmlt(*(undefined8 *)((long)puVar14 + uVar17),0,1);
                } while (uVar5 == 0);
              }
              else {
                uVar17 = uVar7 & uVar12;
              }
              uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
              uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
              uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
              uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
              uVar5 = uVar17 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar7;
              bVar2 = (byte)(uVar12 >> 0x38);
              if (*(char *)((long)puVar14 + uVar5) < '\0') {
                uVar12 = uVar5 - uVar6 ^ uVar16 - uVar6;
              }
              else {
                uVar12 = NEON_cmlt(*puVar14,0,1);
                uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
                uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
                uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
                uVar5 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
                uVar12 = uVar5 - uVar6 ^ uVar16 - uVar6;
              }
              if ((uVar12 & uVar7) < 8) {
                *(byte *)((long)puVar14 + uVar16) = bVar2 >> 1;
                puVar9 = (ulong *)*in_x0;
                *(byte *)((long)puVar9 + (uVar7 & uVar16 - 8) + 8) = bVar2 >> 1;
                goto LAB_006feeb4;
              }
              cVar1 = *(char *)((long)puVar14 + uVar5);
              *(byte *)((long)puVar14 + uVar5) = bVar2 >> 1;
              puVar9 = (ulong *)*in_x0;
              uVar12 = ~uVar5;
              *(byte *)((long)puVar9 + (uVar5 - 8 & uVar7) + 8) = bVar2 >> 1;
              if (cVar1 == -1) break;
              uVar7 = __src[uVar11];
              __src[uVar11] = puVar14[uVar12];
              puVar14[uVar12] = uVar7;
              puVar14 = (ulong *)*in_x0;
            }
            uVar7 = in_x0[1];
            *(undefined1 *)((long)puVar9 + uVar16) = 0xff;
            *(undefined1 *)((long)puVar9 + (uVar7 & uVar16 - 8) + 8) = 0xff;
            puVar14[uVar12] = __src[uVar11];
          }
LAB_006feeb4:
          bVar4 = uVar16 != uVar10;
          uVar16 = uVar16 + 1;
          __src = puVar9;
        } while (bVar4);
        uVar12 = in_x0[1];
        uVar11 = in_x0[3];
        if (7 < uVar12) {
          uVar12 = (uVar12 + 1 >> 3) * 7;
        }
      }
      in_x0[2] = uVar12 - uVar11;
    }
    uVar16 = 0xffffffffffffffff;
  }
  return uVar16;
}


// ===== 006fefcc  FUN_006fefcc =====

void FUN_006fefcc(undefined8 *param_1,long *param_2,ulong param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  lVar5 = 0;
  bVar12 = (byte)(param_3 >> 0x39);
  uVar8 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  lVar3 = *param_2;
  uVar4 = param_2[1];
  param_3 = param_3 & uVar4;
  uVar13 = *(undefined8 *)(lVar3 + param_3);
  uVar14 = NEON_cmeq(uVar13,uVar8,1);
  while( true ) {
    for (uVar14 = uVar14 & 0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = param_3 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4;
      lVar1 = lVar3 + uVar7 * -0x78;
      if (*param_4 == *(long *)(lVar1 + -0x78)) {
        lVar5 = ((long)(uVar7 * 0x78) >> 3) * -0x1111111111111111;
        uVar14 = NEON_cmeq(*(undefined8 *)(lVar3 + lVar5),0xffffffffffffffff,1);
        puVar2 = (undefined8 *)(lVar3 + (lVar5 - 8U & uVar4));
        uVar13 = NEON_cmeq(*puVar2,0xffffffffffffffff,1);
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar13) >> 3) <
            8) {
          param_2[2] = param_2[2] + 1;
          uVar6 = 0xff;
        }
        else {
          uVar6 = 0x80;
        }
        *(undefined1 *)(lVar3 + lVar5) = uVar6;
        lVar5 = param_2[3];
        *(undefined1 *)(puVar2 + 1) = uVar6;
        uVar8 = *(undefined8 *)(lVar1 + -0x30);
        uVar13 = *(undefined8 *)(lVar1 + -0x38);
        uVar10 = *(undefined8 *)(lVar1 + -0x20);
        uVar9 = *(undefined8 *)(lVar1 + -0x28);
        uVar11 = *(undefined8 *)(lVar1 + -0x18);
        param_1[0xd] = *(undefined8 *)(lVar1 + -0x10);
        param_1[0xc] = uVar11;
        param_1[9] = uVar8;
        param_1[8] = uVar13;
        param_1[0xb] = uVar10;
        param_1[10] = uVar9;
        uVar9 = *(undefined8 *)(lVar1 + -0x70);
        uVar8 = *(undefined8 *)(lVar1 + -0x78);
        uVar11 = *(undefined8 *)(lVar1 + -0x60);
        uVar10 = *(undefined8 *)(lVar1 + -0x68);
        param_2[3] = lVar5 + -1;
        uVar13 = *(undefined8 *)(lVar1 + -8);
        param_1[1] = uVar9;
        *param_1 = uVar8;
        param_1[3] = uVar11;
        param_1[2] = uVar10;
        uVar11 = *(undefined8 *)(lVar1 + -0x50);
        uVar10 = *(undefined8 *)(lVar1 + -0x58);
        uVar9 = *(undefined8 *)(lVar1 + -0x40);
        uVar8 = *(undefined8 *)(lVar1 + -0x48);
        param_1[0xe] = uVar13;
        param_1[5] = uVar11;
        param_1[4] = uVar10;
        param_1[7] = uVar9;
        param_1[6] = uVar8;
        return;
      }
    }
    uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
    bVar12 = NEON_umaxv(uVar13,1);
    if ((bVar12 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    param_3 = param_3 + lVar5 & uVar4;
    uVar13 = *(undefined8 *)(lVar3 + param_3);
    uVar14 = NEON_cmeq(uVar13,uVar8,1);
  }
  param_1[1] = 2;
  return;
}


// ===== 006ff128  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,
   libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,
   libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker,
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

ulong <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker)>>
      ::reserve_rehash::
      <hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::core::snowflake::StickerId,libdiscore_common[1cb84820f9455fa0]::stores::guild_sticker::GuildSticker,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
                (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong *__src;
  ulong uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 *local_50;
  ulong uStack_48;
  long local_40;
  
  uVar16 = param_1[3];
  uVar17 = uVar16 + param_2;
  if (CARRY8(uVar16,param_2)) {
    uVar17 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
    return uVar17;
  }
  uVar15 = param_1[1];
  uVar12 = uVar15 + 1;
  uVar9 = uVar12 >> 3;
  uVar5 = uVar15;
  if (7 < uVar15) {
    uVar5 = uVar9 * 7;
  }
  if (uVar5 >> 1 < uVar17) {
    if (uVar17 < uVar5 + 1) {
      uVar17 = uVar5 + 1;
    }
    FUN_00700850(&local_50,0x78,uVar17);
    if (local_50 == (undefined8 *)0x0) {
      return uStack_48;
    }
    if (uVar16 == 0) {
      puVar8 = (undefined8 *)*param_1;
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      lVar10 = 0;
      uVar17 = NEON_cmge(*puVar8,0,1);
      uVar17 = uVar17 & 0x8080808080808080;
      puVar3 = puVar8;
      uVar12 = uVar16;
      do {
        for (; uVar17 == 0; uVar17 = uVar17 & 0x8080808080808080) {
          lVar10 = lVar10 + 8;
          uVar17 = NEON_cmge(puVar3[1],0,1);
          puVar3 = puVar3 + 1;
        }
        uVar9 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = lVar10 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
        uVar5 = puVar8[uVar9 * -0xf + -0xf] * 0x517cc1b727220a95 & uStack_48;
        uVar18 = NEON_cmlt(*(undefined8 *)((long)local_50 + uVar5),0,1);
        if (uVar18 == 0) {
          lVar6 = 8;
          do {
            uVar5 = uVar5 + lVar6;
            lVar6 = lVar6 + 8;
            uVar5 = uVar5 & uStack_48;
            uVar18 = NEON_cmlt(*(undefined8 *)((long)local_50 + uVar5),0,1);
          } while (uVar18 == 0);
        }
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uStack_48;
        if (-1 < *(char *)((long)local_50 + uVar5)) {
          uVar5 = NEON_cmlt(*local_50,0,1);
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
        }
        puVar14 = puVar8 + ~uVar9 * 0xf;
        bVar2 = (byte)((ulong)(puVar8[uVar9 * -0xf + -0xf] * 0x517cc1b727220a95) >> 0x38);
        *(byte *)((long)local_50 + uVar5) = bVar2 >> 1;
        uVar12 = uVar12 - 1;
        puVar7 = local_50 + ~uVar5 * 0xf;
        *(byte *)((long)local_50 + (uVar5 - 8 & uStack_48) + 8) = bVar2 >> 1;
        uVar21 = puVar14[4];
        uVar20 = puVar14[7];
        uVar19 = puVar14[6];
        uVar23 = puVar14[1];
        uVar22 = *puVar14;
        uVar26 = puVar14[3];
        uVar24 = puVar14[2];
        puVar7[5] = puVar14[5];
        puVar7[4] = uVar21;
        puVar7[7] = uVar20;
        puVar7[6] = uVar19;
        puVar7[1] = uVar23;
        *puVar7 = uVar22;
        puVar7[3] = uVar26;
        puVar7[2] = uVar24;
        uVar24 = puVar14[0xb];
        uVar23 = puVar14[10];
        uVar20 = puVar14[0xd];
        uVar19 = puVar14[0xc];
        uVar22 = puVar14[9];
        uVar21 = puVar14[8];
        puVar7[0xe] = puVar14[0xe];
        uVar17 = uVar17 - 1 & uVar17;
        puVar7[0xb] = uVar24;
        puVar7[10] = uVar23;
        puVar7[0xd] = uVar20;
        puVar7[0xc] = uVar19;
        puVar7[9] = uVar22;
        puVar7[8] = uVar21;
      } while (uVar12 != 0);
    }
    *param_1 = (long)local_50;
    param_1[1] = uStack_48;
    param_1[2] = local_40 - uVar16;
    if ((uVar15 != 0) && (lVar10 = uVar15 * 0x78 + 0x78, uVar15 + lVar10 != -9)) {
      free((void *)((long)puVar8 - lVar10));
    }
  }
  else {
    if (uVar12 != 0) {
      __src = (ulong *)*param_1;
      puVar11 = __src;
      if ((uVar12 & 7) != 0) {
        uVar9 = uVar9 + 1;
      }
      do {
        uVar9 = uVar9 - 1;
        uVar17 = NEON_cmlt(*puVar11,0,1);
        *puVar11 = uVar17 | 0x8080808080808080;
        puVar11 = puVar11 + 1;
      } while (uVar9 != 0);
      if (uVar12 < 8) {
        memmove(__src + 1,__src,uVar15 + 1);
      }
      else {
        *(ulong *)((long)__src + uVar12) = *__src;
      }
      uVar17 = 0;
      do {
        if (*(char *)((long)__src + uVar17) == -0x80) {
          puVar11 = __src + ~uVar17 * 0xf;
          while( true ) {
            uVar9 = param_1[1];
            uVar12 = __src[uVar17 * -0xf + -0xf] * 0x517cc1b727220a95;
            uVar5 = uVar9 & uVar12;
            uVar16 = NEON_cmlt(*(undefined8 *)((long)__src + uVar5),0,1);
            if (uVar16 == 0) {
              lVar10 = 8;
              uVar18 = uVar9 & uVar12;
              do {
                uVar18 = uVar18 + lVar10;
                lVar10 = lVar10 + 8;
                uVar18 = uVar18 & uVar9;
                uVar16 = NEON_cmlt(*(undefined8 *)((long)__src + uVar18),0,1);
              } while (uVar16 == 0);
            }
            else {
              uVar18 = uVar9 & uVar12;
            }
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar18 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar9;
            bVar2 = (byte)(uVar12 >> 0x38);
            if (*(char *)((long)__src + uVar16) < '\0') {
              uVar12 = uVar16 - uVar5 ^ uVar17 - uVar5;
            }
            else {
              uVar16 = NEON_cmlt(*__src,0,1);
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
              uVar12 = uVar16 - uVar5 ^ uVar17 - uVar5;
            }
            if ((uVar12 & uVar9) < 8) {
              *(byte *)((long)__src + uVar17) = bVar2 >> 1;
              __src = (ulong *)*param_1;
              *(byte *)((long)__src + (uVar9 & uVar17 - 8) + 8) = bVar2 >> 1;
              goto LAB_006ff528;
            }
            puVar13 = __src + ~uVar16 * 0xf;
            cVar1 = *(char *)((long)__src + uVar16);
            *(byte *)((long)__src + uVar16) = bVar2 >> 1;
            __src = (ulong *)*param_1;
            *(byte *)((long)__src + (uVar16 - 8 & uVar9) + 8) = bVar2 >> 1;
            if (cVar1 == -1) break;
            uVar16 = *puVar11;
            *puVar11 = *puVar13;
            *puVar13 = uVar16;
            uVar16 = puVar11[1];
            puVar11[1] = puVar13[1];
            puVar13[1] = uVar16;
            uVar16 = puVar11[2];
            puVar11[2] = puVar13[2];
            puVar13[2] = uVar16;
            uVar16 = puVar11[3];
            puVar11[3] = puVar13[3];
            puVar13[3] = uVar16;
            uVar16 = puVar11[4];
            puVar11[4] = puVar13[4];
            puVar13[4] = uVar16;
            uVar16 = puVar11[5];
            puVar11[5] = puVar13[5];
            puVar13[5] = uVar16;
            uVar16 = puVar11[6];
            puVar11[6] = puVar13[6];
            puVar13[6] = uVar16;
            uVar16 = puVar11[7];
            puVar11[7] = puVar13[7];
            puVar13[7] = uVar16;
            uVar16 = puVar11[8];
            puVar11[8] = puVar13[8];
            puVar13[8] = uVar16;
            uVar16 = puVar11[9];
            puVar11[9] = puVar13[9];
            puVar13[9] = uVar16;
            uVar16 = puVar11[10];
            puVar11[10] = puVar13[10];
            puVar13[10] = uVar16;
            uVar16 = puVar11[0xb];
            puVar11[0xb] = puVar13[0xb];
            puVar13[0xb] = uVar16;
            uVar16 = puVar11[0xc];
            puVar11[0xc] = puVar13[0xc];
            puVar13[0xc] = uVar16;
            uVar16 = puVar11[0xd];
            puVar11[0xd] = puVar13[0xd];
            puVar13[0xd] = uVar16;
            uVar16 = puVar11[0xe];
            puVar11[0xe] = puVar13[0xe];
            puVar13[0xe] = uVar16;
            __src = (ulong *)*param_1;
          }
          uVar16 = param_1[1];
          *(undefined1 *)((long)__src + uVar17) = 0xff;
          *(undefined1 *)((long)__src + (uVar16 & uVar17 - 8) + 8) = 0xff;
          uVar5 = puVar11[0xb];
          uVar9 = puVar11[10];
          uVar12 = puVar11[0xd];
          uVar16 = puVar11[0xc];
          uVar25 = puVar11[9];
          uVar18 = puVar11[8];
          puVar13[0xe] = puVar11[0xe];
          puVar13[0xb] = uVar5;
          puVar13[10] = uVar9;
          puVar13[0xd] = uVar12;
          puVar13[0xc] = uVar16;
          puVar13[9] = uVar25;
          puVar13[8] = uVar18;
          uVar9 = puVar11[4];
          uVar12 = puVar11[7];
          uVar16 = puVar11[6];
          uVar18 = puVar11[1];
          uVar5 = *puVar11;
          uVar27 = puVar11[3];
          uVar25 = puVar11[2];
          puVar13[5] = puVar11[5];
          puVar13[4] = uVar9;
          puVar13[7] = uVar12;
          puVar13[6] = uVar16;
          puVar13[1] = uVar18;
          *puVar13 = uVar5;
          puVar13[3] = uVar27;
          puVar13[2] = uVar25;
        }
LAB_006ff528:
        bVar4 = uVar17 != uVar15;
        uVar17 = uVar17 + 1;
      } while (bVar4);
      uVar12 = param_1[1];
      uVar16 = param_1[3];
      if (7 < uVar12) {
        uVar12 = (uVar12 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar12 - uVar16;
  }
  return 0xffffffffffffffff;
}


// ===== 006ff64c  FUN_006ff64c =====

void FUN_006ff64c(undefined1 *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  lVar7 = 0;
  bVar9 = (byte)(param_3 >> 0x39);
  uVar8 = CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9,
                                                  CONCAT11(bVar9,bVar9)))))));
  lVar2 = *param_2;
  uVar3 = param_2[1];
  param_3 = param_3 & uVar3;
  uVar10 = *(undefined8 *)(lVar2 + param_3);
  uVar11 = NEON_cmeq(uVar10,uVar8,1);
  while( true ) {
    for (uVar11 = uVar11 & 0x8080808080808080; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar5 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = param_3 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar3;
      lVar4 = lVar2 + uVar5 * -8;
      if (*param_4 == *(long *)(lVar4 + -8)) {
        puVar1 = (undefined8 *)(lVar2 + (uVar5 - 8 & uVar3));
        uVar11 = NEON_cmeq(*(undefined8 *)(lVar2 + uVar5),0xffffffffffffffff,1);
        uVar10 = NEON_cmeq(*puVar1,0xffffffffffffffff,1);
        uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar10) >> 3) <
            8) {
          param_2[2] = param_2[2] + 1;
          uVar6 = 0xff;
        }
        else {
          uVar6 = 0x80;
        }
        *(undefined1 *)(lVar2 + uVar5) = uVar6;
        lVar7 = param_2[3];
        *(undefined1 *)(puVar1 + 1) = uVar6;
        uVar10 = *(undefined8 *)(lVar4 + -8);
        param_2[3] = lVar7 + -1;
        *(undefined8 *)(param_1 + 1) = uVar10;
        *param_1 = 1;
        return;
      }
    }
    uVar10 = NEON_cmeq(uVar10,0xffffffffffffffff,1);
    bVar9 = NEON_umaxv(uVar10,1);
    if ((bVar9 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    param_3 = param_3 + lVar7 & uVar3;
    uVar10 = *(undefined8 *)(lVar2 + param_3);
    uVar11 = NEON_cmeq(uVar10,uVar8,1);
  }
  *param_1 = 0;
  return;
}


// ===== 006ff768  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DomainHash,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DomainHash, =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DomainHash,
   ())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DomainHash,
   (), std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> */

undefined1  [16]
<hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::stores::
blocked_domains::DomainHash,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
make_hasher<libdiscore_common[1cb84820f9455fa0]::stores::blocked_domains::DomainHash_(void)

{
  char cVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  long *in_x0;
  ulong uVar5;
  ulong in_x1;
  ulong *__src;
  undefined4 in_w3;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong unaff_x22;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined8 *local_80;
  ulong uStack_78;
  ulong local_70;
  
  uVar6 = in_x0[3];
  uVar16 = uVar6 + in_x1;
  if (CARRY8(uVar6,in_x1)) {
    auVar18 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(in_w3);
  }
  else {
    uVar12 = in_x0[1];
    uVar5 = uVar12 + 1;
    uVar8 = uVar5 >> 3;
    uVar17 = uVar12;
    if (7 < uVar12) {
      uVar17 = uVar8 * 7;
    }
    if (uVar17 >> 1 < uVar16) {
      if (uVar16 < uVar17 + 1) {
        uVar16 = uVar17 + 1;
      }
      FUN_00700850(&local_80,8,uVar16);
      auVar3._8_8_ = local_70;
      auVar3._0_8_ = uStack_78;
      if (local_80 == (undefined8 *)0x0) {
        return auVar3;
      }
      lVar13 = in_x0[3];
      if (lVar13 == 0) {
        lVar13 = *in_x0;
        lVar14 = in_x0[1];
        *in_x0 = (long)local_80;
        in_x0[1] = uStack_78;
        in_x0[2] = local_70;
        in_x0[3] = 0;
      }
      else {
        puVar15 = (undefined8 *)*in_x0;
        lVar14 = 0;
        uVar16 = NEON_cmge(*puVar15,0,1);
        uVar16 = uVar16 & 0x8080808080808080;
        do {
          for (; uVar16 == 0; uVar16 = uVar16 & 0x8080808080808080) {
            puVar15 = puVar15 + 1;
            lVar14 = lVar14 + 8;
            uVar16 = NEON_cmge(*puVar15,0,1);
          }
          uVar6 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 006ff858 to 006ff85f has its CatchHandler @ 006ffbb0 */
          uVar8 = FUN_0076b1a0();
          uVar6 = uVar8 & uStack_78;
          uVar17 = NEON_cmlt(*(undefined8 *)((long)local_80 + uVar6),0,1);
          if (uVar17 == 0) {
            lVar7 = 8;
            do {
              uVar6 = uVar6 + lVar7;
              lVar7 = lVar7 + 8;
              uVar6 = uVar6 & uStack_78;
              uVar17 = NEON_cmlt(*(undefined8 *)((long)local_80 + uVar6),0,1);
            } while (uVar17 == 0);
          }
          uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uStack_78;
          if (-1 < *(char *)((long)local_80 + uVar6)) {
            uVar6 = NEON_cmlt(*local_80,0,1);
            uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
            uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
            uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            uVar6 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          }
          bVar2 = (byte)(uVar8 >> 0x38);
          *(byte *)((long)local_80 + uVar6) = bVar2 >> 1;
          lVar13 = lVar13 + -1;
          *(byte *)((long)local_80 + (uVar6 - 8 & uStack_78) + 8) = bVar2 >> 1;
          uVar16 = uVar16 - 1 & uVar16;
          local_80[~uVar6] =
               *(undefined8 *)
                (*in_x0 + ~(lVar14 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3)) * 8);
        } while (lVar13 != 0);
        lVar13 = *in_x0;
        lVar14 = in_x0[1];
        *in_x0 = (long)local_80;
        in_x0[1] = uStack_78;
        in_x0[2] = local_70 - in_x0[3];
        in_x0[3] = in_x0[3];
      }
      if ((lVar14 != 0) && (lVar7 = lVar14 * 8 + 8, lVar14 + lVar7 != -9)) {
        free((void *)(lVar13 - lVar7));
      }
    }
    else {
      if (uVar5 != 0) {
        __src = (ulong *)*in_x0;
        puVar9 = __src;
        if ((uVar5 & 7) != 0) {
          uVar8 = uVar8 + 1;
        }
        do {
          uVar8 = uVar8 - 1;
          uVar16 = NEON_cmlt(*puVar9,0,1);
          *puVar9 = uVar16 | 0x8080808080808080;
          puVar9 = puVar9 + 1;
        } while (uVar8 != 0);
        if (uVar5 < 8) {
          memmove(__src + 1,__src,uVar12 + 1);
        }
        else {
          *(ulong *)((long)__src + uVar5) = *__src;
        }
        unaff_x22 = 0;
        do {
          lVar13 = *in_x0;
          if (*(char *)(lVar13 + unaff_x22) == -0x80) {
            uVar16 = ~unaff_x22;
            while( true ) {
                    /* try { // try from 006ff96c to 006ff973 has its CatchHandler @ 006ffb9c */
              uVar5 = FUN_0076b1a0();
              puVar15 = (undefined8 *)*in_x0;
              uVar6 = in_x0[1];
              uVar8 = uVar6 & uVar5;
              uVar17 = NEON_cmlt(*(undefined8 *)((long)puVar15 + uVar8),0,1);
              if (uVar17 == 0) {
                lVar14 = 8;
                uVar10 = uVar6 & uVar5;
                do {
                  uVar10 = uVar10 + lVar14;
                  lVar14 = lVar14 + 8;
                  uVar10 = uVar10 & uVar6;
                  uVar17 = NEON_cmlt(*(undefined8 *)((long)puVar15 + uVar10),0,1);
                } while (uVar17 == 0);
              }
              else {
                uVar10 = uVar6 & uVar5;
              }
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = uVar10 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar6;
              bVar2 = (byte)(uVar5 >> 0x38);
              if (*(char *)((long)puVar15 + uVar17) < '\0') {
                uVar5 = uVar17 - uVar8 ^ unaff_x22 - uVar8;
              }
              else {
                uVar5 = NEON_cmlt(*puVar15,0,1);
                uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
                uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                uVar17 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
                uVar5 = uVar17 - uVar8 ^ unaff_x22 - uVar8;
              }
              if ((uVar5 & uVar6) < 8) {
                *(byte *)((long)puVar15 + unaff_x22) = bVar2 >> 1;
                *(byte *)(*in_x0 + (uVar6 & unaff_x22 - 8) + 8) = bVar2 >> 1;
                goto LAB_006ffa78;
              }
              cVar1 = *(char *)((long)puVar15 + uVar17);
              *(byte *)((long)puVar15 + uVar17) = bVar2 >> 1;
              uVar5 = ~uVar17;
              *(byte *)(*in_x0 + (uVar17 - 8 & uVar6) + 8) = bVar2 >> 1;
              if (cVar1 == -1) break;
              uVar11 = *(undefined8 *)(lVar13 + uVar16 * 8);
              *(undefined8 *)(lVar13 + uVar16 * 8) = puVar15[uVar5];
              puVar15[uVar5] = uVar11;
            }
            uVar6 = in_x0[1];
            *(undefined1 *)(*in_x0 + unaff_x22) = 0xff;
            *(undefined1 *)(*in_x0 + (uVar6 & unaff_x22 - 8) + 8) = 0xff;
            puVar15[uVar5] = *(undefined8 *)(lVar13 + uVar16 * 8);
          }
LAB_006ffa78:
          bVar4 = unaff_x22 != uVar12;
          unaff_x22 = unaff_x22 + 1;
        } while (bVar4);
        uVar5 = in_x0[1];
        uVar6 = in_x0[3];
        if (7 < uVar5) {
          uVar5 = (uVar5 + 1 >> 3) * 7;
        }
      }
      in_x0[2] = uVar5 - uVar6;
      local_70 = unaff_x22;
    }
    auVar18._8_8_ = local_70;
    auVar18._0_8_ = 0xffffffffffffffff;
  }
  return auVar18;
}


// ===== 006ffbc4  FUN_006ffbc4 =====

void FUN_006ffbc4(undefined8 *param_1,long *param_2,ulong param_3,int *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  lVar5 = 0;
  bVar12 = (byte)(param_3 >> 0x39);
  uVar8 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  lVar3 = *param_2;
  uVar4 = param_2[1];
  param_3 = param_3 & uVar4;
  uVar13 = *(undefined8 *)(lVar3 + param_3);
  uVar14 = NEON_cmeq(uVar13,uVar8,1);
  while( true ) {
    for (uVar14 = uVar14 & 0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = param_3 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4;
      lVar1 = lVar3 + uVar7 * -0x98;
      if (*param_4 == *(int *)(lVar1 + -0x98)) {
        lVar5 = ((long)(uVar7 * 0x98) >> 3) * -0x79435e50d79435e5;
        uVar14 = NEON_cmeq(*(undefined8 *)(lVar3 + lVar5),0xffffffffffffffff,1);
        puVar2 = (undefined8 *)(lVar3 + (lVar5 - 8U & uVar4));
        uVar13 = NEON_cmeq(*puVar2,0xffffffffffffffff,1);
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar13) >> 3) <
            8) {
          param_2[2] = param_2[2] + 1;
          uVar6 = 0xff;
        }
        else {
          uVar6 = 0x80;
        }
        *(undefined1 *)(lVar3 + lVar5) = uVar6;
        lVar5 = param_2[3];
        *(undefined1 *)(puVar2 + 1) = uVar6;
        uVar8 = *(undefined8 *)(lVar1 + -0x30);
        uVar13 = *(undefined8 *)(lVar1 + -0x38);
        uVar10 = *(undefined8 *)(lVar1 + -0x20);
        uVar9 = *(undefined8 *)(lVar1 + -0x28);
        uVar11 = *(undefined8 *)(lVar1 + -0x18);
        param_1[0x11] = *(undefined8 *)(lVar1 + -0x10);
        param_1[0x10] = uVar11;
        param_1[0xd] = uVar8;
        param_1[0xc] = uVar13;
        param_1[0xf] = uVar10;
        param_1[0xe] = uVar9;
        uVar9 = *(undefined8 *)(lVar1 + -0x70);
        uVar8 = *(undefined8 *)(lVar1 + -0x78);
        uVar11 = *(undefined8 *)(lVar1 + -0x60);
        uVar10 = *(undefined8 *)(lVar1 + -0x68);
        param_2[3] = lVar5 + -1;
        uVar13 = *(undefined8 *)(lVar1 + -8);
        param_1[5] = uVar9;
        param_1[4] = uVar8;
        param_1[7] = uVar11;
        param_1[6] = uVar10;
        uVar11 = *(undefined8 *)(lVar1 + -0x50);
        uVar10 = *(undefined8 *)(lVar1 + -0x58);
        uVar9 = *(undefined8 *)(lVar1 + -0x40);
        uVar8 = *(undefined8 *)(lVar1 + -0x48);
        param_1[0x12] = uVar13;
        param_1[9] = uVar11;
        param_1[8] = uVar10;
        param_1[0xb] = uVar9;
        param_1[10] = uVar8;
        uVar9 = *(undefined8 *)(lVar1 + -0x98);
        uVar8 = *(undefined8 *)(lVar1 + -0x80);
        uVar13 = *(undefined8 *)(lVar1 + -0x88);
        param_1[1] = *(undefined8 *)(lVar1 + -0x90);
        *param_1 = uVar9;
        param_1[3] = uVar8;
        param_1[2] = uVar13;
        return;
      }
    }
    uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
    bVar12 = NEON_umaxv(uVar13,1);
    if ((bVar12 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    param_3 = param_3 + lVar5 & uVar4;
    uVar13 = *(undefined8 *)(lVar3 + param_3);
    uVar14 = NEON_cmeq(uVar13,uVar8,1);
  }
  param_1[1] = 0xffffffffffffffff;
  return;
}


// ===== 006ffd30  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest,std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u32,
   libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<u32,
   libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest,
   std[17aff9129faa4dc5]::hash::random::RandomState>::{closure#0}> */

ulong <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest)>>
      ::reserve_rehash::
      <hashbrown[32fc5d502e7f9af5]::map::make_hasher<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest,std[17aff9129faa4dc5]::hash::random::RandomState>::_closure_0_>
                (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong *__src;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 *local_80;
  ulong uStack_78;
  long local_70;
  
  uVar15 = param_1[3];
  uVar18 = uVar15 + param_2;
  if (CARRY8(uVar15,param_2)) {
    uVar18 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
  }
  else {
    uVar13 = param_1[1];
    uVar16 = uVar13 + 1;
    uVar8 = uVar16 >> 3;
    uVar6 = uVar13;
    if (7 < uVar13) {
      uVar6 = uVar8 * 7;
    }
    if (uVar6 >> 1 < uVar18) {
      if (uVar18 < uVar6 + 1) {
        uVar18 = uVar6 + 1;
      }
      FUN_00700850(&local_80,0x98,uVar18);
      if (local_80 == (undefined8 *)0x0) {
        return uStack_78;
      }
      if (uVar15 == 0) {
        puVar14 = (undefined8 *)*param_1;
        *param_1 = (long)local_80;
        param_1[1] = uStack_78;
        param_1[2] = local_70;
      }
      else {
        puVar14 = (undefined8 *)*param_1;
        lVar17 = 0;
        uVar18 = NEON_cmge(*puVar14,0,1);
        uVar18 = uVar18 & 0x8080808080808080;
        puVar3 = puVar14;
        uVar16 = uVar15;
        do {
          for (; uVar18 == 0; uVar18 = uVar18 & 0x8080808080808080) {
            lVar17 = lVar17 + 8;
            uVar18 = NEON_cmge(puVar3[1],0,1);
            puVar3 = puVar3 + 1;
          }
          uVar8 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = lVar17 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
          uVar5 = FUN_0076b3f4(param_3,puVar14 + uVar8 * -0x13 + -0x13);
          uVar6 = uVar5 & uStack_78;
          uVar19 = NEON_cmlt(*(undefined8 *)((long)local_80 + uVar6),0,1);
          if (uVar19 == 0) {
            lVar10 = 8;
            do {
              uVar6 = uVar6 + lVar10;
              lVar10 = lVar10 + 8;
              uVar6 = uVar6 & uStack_78;
              uVar19 = NEON_cmlt(*(undefined8 *)((long)local_80 + uVar6),0,1);
            } while (uVar19 == 0);
          }
          uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
          uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
          uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
          uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) & uStack_78;
          if (-1 < *(char *)((long)local_80 + uVar6)) {
            uVar6 = NEON_cmlt(*local_80,0,1);
            uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
            uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
            uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            uVar6 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          }
          puVar9 = puVar14 + ~uVar8 * 0x13;
          bVar2 = (byte)(uVar5 >> 0x38);
          *(byte *)((long)local_80 + uVar6) = bVar2 >> 1;
          uVar16 = uVar16 - 1;
          puVar12 = local_80 + ~uVar6 * 0x13;
          *(byte *)((long)local_80 + (uVar6 - 8 & uStack_78) + 8) = bVar2 >> 1;
          uVar22 = *puVar9;
          uVar21 = puVar9[3];
          uVar20 = puVar9[2];
          puVar12[1] = puVar9[1];
          *puVar12 = uVar22;
          puVar12[3] = uVar21;
          puVar12[2] = uVar20;
          uVar22 = puVar9[8];
          uVar21 = puVar9[0xb];
          uVar20 = puVar9[10];
          uVar24 = puVar9[5];
          uVar23 = puVar9[4];
          uVar26 = puVar9[7];
          uVar25 = puVar9[6];
          puVar12[9] = puVar9[9];
          puVar12[8] = uVar22;
          puVar12[0xb] = uVar21;
          puVar12[10] = uVar20;
          puVar12[5] = uVar24;
          puVar12[4] = uVar23;
          puVar12[7] = uVar26;
          puVar12[6] = uVar25;
          uVar25 = puVar9[0xf];
          uVar24 = puVar9[0xe];
          uVar21 = puVar9[0x11];
          uVar20 = puVar9[0x10];
          uVar23 = puVar9[0xd];
          uVar22 = puVar9[0xc];
          puVar12[0x12] = puVar9[0x12];
          uVar18 = uVar18 - 1 & uVar18;
          puVar12[0xf] = uVar25;
          puVar12[0xe] = uVar24;
          puVar12[0x11] = uVar21;
          puVar12[0x10] = uVar20;
          puVar12[0xd] = uVar23;
          puVar12[0xc] = uVar22;
        } while (uVar16 != 0);
        *param_1 = (long)local_80;
        param_1[1] = uStack_78;
        param_1[2] = local_70 - uVar15;
      }
      if ((uVar13 != 0) && (lVar17 = uVar13 * 0x98 + 0x98, uVar13 + lVar17 != -9)) {
        free((void *)((long)puVar14 - lVar17));
      }
    }
    else {
      if (uVar16 != 0) {
        __src = (ulong *)*param_1;
        puVar11 = __src;
        if ((uVar16 & 7) != 0) {
          uVar8 = uVar8 + 1;
        }
        do {
          uVar8 = uVar8 - 1;
          uVar18 = NEON_cmlt(*puVar11,0,1);
          *puVar11 = uVar18 | 0x8080808080808080;
          puVar11 = puVar11 + 1;
        } while (uVar8 != 0);
        if (uVar16 < 8) {
          memmove(__src + 1,__src,uVar13 + 1);
        }
        else {
          *(ulong *)((long)__src + uVar16) = *__src;
        }
        uVar18 = 0;
        do {
          if (*(char *)((long)__src + uVar18) == -0x80) {
            puVar11 = __src + ~uVar18 * 0x13;
            while( true ) {
              uVar15 = FUN_0076b3f4(param_3,__src + uVar18 * -0x13 + -0x13);
              uVar8 = param_1[1];
              uVar16 = uVar8 & uVar15;
              uVar6 = NEON_cmlt(*(undefined8 *)((long)__src + uVar16),0,1);
              if (uVar6 == 0) {
                lVar17 = 8;
                uVar5 = uVar8 & uVar15;
                do {
                  uVar5 = uVar5 + lVar17;
                  lVar17 = lVar17 + 8;
                  uVar5 = uVar5 & uVar8;
                  uVar6 = NEON_cmlt(*(undefined8 *)((long)__src + uVar5),0,1);
                } while (uVar6 == 0);
              }
              else {
                uVar5 = uVar8 & uVar15;
              }
              uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
              uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
              uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
              uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
              uVar6 = uVar5 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar8;
              bVar2 = (byte)(uVar15 >> 0x38);
              if (*(char *)((long)__src + uVar6) < '\0') {
                uVar15 = uVar6 - uVar16 ^ uVar18 - uVar16;
              }
              else {
                uVar15 = NEON_cmlt(*__src,0,1);
                uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
                uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                uVar6 = (ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3;
                uVar15 = uVar6 - uVar16 ^ uVar18 - uVar16;
              }
              if ((uVar15 & uVar8) < 8) {
                *(byte *)((long)__src + uVar18) = bVar2 >> 1;
                __src = (ulong *)*param_1;
                *(byte *)((long)__src + (uVar8 & uVar18 - 8) + 8) = bVar2 >> 1;
                goto LAB_00700174;
              }
              cVar1 = *(char *)((long)__src + uVar6);
              puVar7 = __src + ~uVar6 * 0x13;
              *(byte *)((long)__src + uVar6) = bVar2 >> 1;
              __src = (ulong *)*param_1;
              *(byte *)((long)__src + (uVar6 - 8 & uVar8) + 8) = bVar2 >> 1;
              if (cVar1 == -1) break;
              uVar15 = *puVar11;
              *puVar11 = *puVar7;
              *puVar7 = uVar15;
              uVar15 = puVar11[1];
              puVar11[1] = puVar7[1];
              puVar7[1] = uVar15;
              uVar15 = puVar11[2];
              puVar11[2] = puVar7[2];
              puVar7[2] = uVar15;
              uVar15 = puVar11[3];
              puVar11[3] = puVar7[3];
              puVar7[3] = uVar15;
              uVar15 = puVar11[4];
              puVar11[4] = puVar7[4];
              puVar7[4] = uVar15;
              uVar15 = puVar11[5];
              puVar11[5] = puVar7[5];
              puVar7[5] = uVar15;
              uVar15 = puVar11[6];
              puVar11[6] = puVar7[6];
              puVar7[6] = uVar15;
              uVar15 = puVar11[7];
              puVar11[7] = puVar7[7];
              puVar7[7] = uVar15;
              uVar15 = puVar11[8];
              puVar11[8] = puVar7[8];
              puVar7[8] = uVar15;
              uVar15 = puVar11[9];
              puVar11[9] = puVar7[9];
              puVar7[9] = uVar15;
              uVar15 = puVar11[10];
              puVar11[10] = puVar7[10];
              puVar7[10] = uVar15;
              uVar15 = puVar11[0xb];
              puVar11[0xb] = puVar7[0xb];
              puVar7[0xb] = uVar15;
              uVar15 = puVar11[0xc];
              puVar11[0xc] = puVar7[0xc];
              puVar7[0xc] = uVar15;
              uVar15 = puVar11[0xd];
              puVar11[0xd] = puVar7[0xd];
              puVar7[0xd] = uVar15;
              uVar15 = puVar11[0xe];
              puVar11[0xe] = puVar7[0xe];
              puVar7[0xe] = uVar15;
              uVar15 = puVar11[0xf];
              puVar11[0xf] = puVar7[0xf];
              puVar7[0xf] = uVar15;
              uVar15 = puVar11[0x10];
              puVar11[0x10] = puVar7[0x10];
              puVar7[0x10] = uVar15;
              uVar15 = puVar11[0x11];
              puVar11[0x11] = puVar7[0x11];
              puVar7[0x11] = uVar15;
              uVar15 = puVar11[0x12];
              puVar11[0x12] = puVar7[0x12];
              puVar7[0x12] = uVar15;
              __src = (ulong *)*param_1;
            }
            uVar15 = param_1[1];
            *(undefined1 *)((long)__src + uVar18) = 0xff;
            *(undefined1 *)((long)__src + (uVar15 & uVar18 - 8) + 8) = 0xff;
            uVar8 = puVar11[8];
            uVar16 = puVar11[0xb];
            uVar15 = puVar11[10];
            uVar27 = puVar11[5];
            uVar19 = puVar11[4];
            uVar5 = puVar11[7];
            uVar6 = puVar11[6];
            puVar7[9] = puVar11[9];
            puVar7[8] = uVar8;
            puVar7[0xb] = uVar16;
            puVar7[10] = uVar15;
            puVar7[5] = uVar27;
            puVar7[4] = uVar19;
            puVar7[7] = uVar5;
            puVar7[6] = uVar6;
            uVar6 = puVar11[0xf];
            uVar8 = puVar11[0xe];
            uVar16 = puVar11[0x11];
            uVar15 = puVar11[0x10];
            uVar19 = puVar11[0xd];
            uVar5 = puVar11[0xc];
            puVar7[0x12] = puVar11[0x12];
            puVar7[0xf] = uVar6;
            puVar7[0xe] = uVar8;
            puVar7[0x11] = uVar16;
            puVar7[0x10] = uVar15;
            puVar7[0xd] = uVar19;
            puVar7[0xc] = uVar5;
            uVar8 = *puVar11;
            uVar16 = puVar11[3];
            uVar15 = puVar11[2];
            puVar7[1] = puVar11[1];
            *puVar7 = uVar8;
            puVar7[3] = uVar16;
            puVar7[2] = uVar15;
          }
LAB_00700174:
          bVar4 = uVar18 != uVar13;
          uVar18 = uVar18 + 1;
        } while (bVar4);
        uVar16 = param_1[1];
        uVar15 = param_1[3];
        if (7 < uVar16) {
          uVar16 = (uVar16 + 1 >> 3) * 7;
        }
      }
      param_1[2] = uVar16 - uVar15;
    }
    uVar18 = 0xffffffffffffffff;
  }
  return uVar18;
}


// ===== 007002b8  FUN_007002b8 =====

void FUN_007002b8(undefined8 *param_1,long *param_2,ulong param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  lVar5 = 0;
  bVar12 = (byte)(param_3 >> 0x39);
  uVar8 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
  lVar3 = *param_2;
  uVar4 = param_2[1];
  param_3 = param_3 & uVar4;
  uVar13 = *(undefined8 *)(lVar3 + param_3);
  uVar14 = NEON_cmeq(uVar13,uVar8,1);
  while( true ) {
    for (uVar14 = uVar14 & 0x8080808080808080; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = param_3 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4;
      lVar1 = lVar3 + uVar7 * -0x28;
      if (*param_4 == *(long *)(lVar1 + -0x28)) {
        lVar5 = ((long)(uVar7 * 0x28) >> 3) * -0x3333333333333333;
        uVar14 = NEON_cmeq(*(undefined8 *)(lVar3 + lVar5),0xffffffffffffffff,1);
        puVar2 = (undefined8 *)(lVar3 + (lVar5 - 8U & uVar4));
        uVar13 = NEON_cmeq(*puVar2,0xffffffffffffffff,1);
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) + ((ulong)LZCOUNT(uVar13) >> 3) <
            8) {
          param_2[2] = param_2[2] + 1;
          uVar6 = 0xff;
        }
        else {
          uVar6 = 0x80;
        }
        *(undefined1 *)(lVar3 + lVar5) = uVar6;
        lVar5 = param_2[3];
        *(undefined1 *)(puVar2 + 1) = uVar6;
        uVar9 = *(undefined8 *)(lVar1 + -0x20);
        uVar8 = *(undefined8 *)(lVar1 + -0x28);
        uVar11 = *(undefined8 *)(lVar1 + -0x10);
        uVar10 = *(undefined8 *)(lVar1 + -0x18);
        param_2[3] = lVar5 + -1;
        uVar13 = *(undefined8 *)(lVar1 + -8);
        param_1[1] = uVar9;
        *param_1 = uVar8;
        param_1[3] = uVar11;
        param_1[2] = uVar10;
        param_1[4] = uVar13;
        return;
      }
    }
    uVar13 = NEON_cmeq(uVar13,0xffffffffffffffff,1);
    bVar12 = NEON_umaxv(uVar13,1);
    if ((bVar12 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    param_3 = param_3 + lVar5 & uVar4;
    uVar13 = *(undefined8 *)(lVar3 + param_3);
    uVar14 = NEON_cmeq(uVar13,uVar8,1);
  }
  param_1[1] = 0;
  return;
}


// ===== 007003f4  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}> =====

/* <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u64,
   libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,
   libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>)>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::make_hasher<u64,
   libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,
   libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>,
   core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::{closure#0}>
    */

ulong <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>)>>
      ::reserve_rehash::
      <hashbrown[32fc5d502e7f9af5]::map::make_hasher<u64,libdiscore_common[1cb84820f9455fa0]::stores::store_database::partition::Partition<libdiscore_common[1cb84820f9455fa0]::core::snowflake::GuildId,libdiscore_common[1cb84820f9455fa0]::stores::guilds::Guild>,core[bcece726f298455b]::hash::BuildHasherDefault<fxhash[1f38be453d3dbf22]::FxHasher>>::_closure_0_>
                (long *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *__src;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *local_50;
  ulong uStack_48;
  long local_40;
  
  uVar16 = param_1[3];
  uVar17 = uVar16 + param_2;
  if (CARRY8(uVar16,param_2)) {
    uVar17 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
    return uVar17;
  }
  uVar15 = param_1[1];
  uVar12 = uVar15 + 1;
  uVar9 = uVar12 >> 3;
  uVar5 = uVar15;
  if (7 < uVar15) {
    uVar5 = uVar9 * 7;
  }
  if (uVar5 >> 1 < uVar17) {
    if (uVar17 < uVar5 + 1) {
      uVar17 = uVar5 + 1;
    }
    FUN_00700850(&local_50,0x28,uVar17);
    if (local_50 == (undefined8 *)0x0) {
      return uStack_48;
    }
    if (uVar16 == 0) {
      puVar8 = (undefined8 *)*param_1;
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      lVar10 = 0;
      uVar17 = NEON_cmge(*puVar8,0,1);
      uVar17 = uVar17 & 0x8080808080808080;
      puVar3 = puVar8;
      uVar12 = uVar16;
      do {
        for (; uVar17 == 0; uVar17 = uVar17 & 0x8080808080808080) {
          lVar10 = lVar10 + 8;
          uVar17 = NEON_cmge(puVar3[1],0,1);
          puVar3 = puVar3 + 1;
        }
        uVar9 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = lVar10 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
        uVar5 = puVar8[uVar9 * -5 + -5] * 0x517cc1b727220a95 & uStack_48;
        uVar18 = NEON_cmlt(*(undefined8 *)((long)local_50 + uVar5),0,1);
        if (uVar18 == 0) {
          lVar6 = 8;
          do {
            uVar5 = uVar5 + lVar6;
            lVar6 = lVar6 + 8;
            uVar5 = uVar5 & uStack_48;
            uVar18 = NEON_cmlt(*(undefined8 *)((long)local_50 + uVar5),0,1);
          } while (uVar18 == 0);
        }
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uStack_48;
        if (-1 < *(char *)((long)local_50 + uVar5)) {
          uVar5 = NEON_cmlt(*local_50,0,1);
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = (ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3;
        }
        puVar14 = puVar8 + ~uVar9 * 5;
        bVar2 = (byte)((ulong)(puVar8[uVar9 * -5 + -5] * 0x517cc1b727220a95) >> 0x38);
        *(byte *)((long)local_50 + uVar5) = bVar2 >> 1;
        uVar12 = uVar12 - 1;
        puVar7 = local_50 + ~uVar5 * 5;
        *(byte *)((long)local_50 + (uVar5 - 8 & uStack_48) + 8) = bVar2 >> 1;
        uVar22 = puVar14[1];
        uVar21 = *puVar14;
        uVar20 = puVar14[3];
        uVar19 = puVar14[2];
        puVar7[4] = puVar14[4];
        uVar17 = uVar17 - 1 & uVar17;
        puVar7[1] = uVar22;
        *puVar7 = uVar21;
        puVar7[3] = uVar20;
        puVar7[2] = uVar19;
      } while (uVar12 != 0);
    }
    *param_1 = (long)local_50;
    param_1[1] = uStack_48;
    param_1[2] = local_40 - uVar16;
    if ((uVar15 != 0) && (lVar10 = uVar15 * 0x28 + 0x28, uVar15 + lVar10 != -9)) {
      free((void *)((long)puVar8 - lVar10));
    }
  }
  else {
    if (uVar12 == 0) {
      uVar17 = 0;
    }
    else {
      __src = (ulong *)*param_1;
      puVar11 = __src;
      if ((uVar12 & 7) != 0) {
        uVar9 = uVar9 + 1;
      }
      do {
        uVar9 = uVar9 - 1;
        uVar17 = NEON_cmlt(*puVar11,0,1);
        *puVar11 = uVar17 | 0x8080808080808080;
        puVar11 = puVar11 + 1;
      } while (uVar9 != 0);
      if (uVar12 < 8) {
        memmove(__src + 1,__src,uVar15 + 1);
      }
      else {
        *(ulong *)((long)__src + uVar12) = *__src;
      }
      uVar17 = 0;
      do {
        if (*(char *)((long)__src + uVar17) == -0x80) {
          puVar11 = __src + ~uVar17 * 5;
          while( true ) {
            uVar9 = __src[uVar17 * -5 + -5] * 0x517cc1b727220a95;
            uVar12 = param_1[1];
            uVar5 = uVar12 & uVar9;
            uVar16 = NEON_cmlt(*(undefined8 *)((long)__src + uVar5),0,1);
            if (uVar16 == 0) {
              lVar10 = 8;
              uVar18 = uVar12 & uVar9;
              do {
                uVar18 = uVar18 + lVar10;
                lVar10 = lVar10 + 8;
                uVar18 = uVar18 & uVar12;
                uVar16 = NEON_cmlt(*(undefined8 *)((long)__src + uVar18),0,1);
              } while (uVar16 == 0);
            }
            else {
              uVar18 = uVar12 & uVar9;
            }
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar18 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar12;
            bVar2 = (byte)(uVar9 >> 0x38);
            if (*(char *)((long)__src + uVar16) < '\0') {
              uVar9 = uVar16 - uVar5 ^ uVar17 - uVar5;
            }
            else {
              uVar16 = NEON_cmlt(*__src,0,1);
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
              uVar9 = uVar16 - uVar5 ^ uVar17 - uVar5;
            }
            if ((uVar9 & uVar12) < 8) {
              *(byte *)((long)__src + uVar17) = bVar2 >> 1;
              __src = (ulong *)*param_1;
              *(byte *)((long)__src + (uVar12 & uVar17 - 8) + 8) = bVar2 >> 1;
              goto LAB_0070073c;
            }
            puVar13 = __src + ~uVar16 * 5;
            cVar1 = *(char *)((long)__src + uVar16);
            *(byte *)((long)__src + uVar16) = bVar2 >> 1;
            __src = (ulong *)*param_1;
            *(byte *)((long)__src + (uVar16 - 8 & uVar12) + 8) = bVar2 >> 1;
            if (cVar1 == -1) break;
            uVar16 = *puVar11;
            *puVar11 = *puVar13;
            *puVar13 = uVar16;
            uVar16 = puVar11[1];
            puVar11[1] = puVar13[1];
            puVar13[1] = uVar16;
            uVar16 = puVar11[2];
            puVar11[2] = puVar13[2];
            puVar13[2] = uVar16;
            uVar16 = puVar11[3];
            puVar11[3] = puVar13[3];
            puVar13[3] = uVar16;
            uVar16 = puVar11[4];
            puVar11[4] = puVar13[4];
            puVar13[4] = uVar16;
            __src = (ulong *)*param_1;
          }
          uVar16 = param_1[1];
          *(undefined1 *)((long)__src + uVar17) = 0xff;
          *(undefined1 *)((long)__src + (uVar16 & uVar17 - 8) + 8) = 0xff;
          uVar5 = puVar11[1];
          uVar9 = *puVar11;
          uVar12 = puVar11[3];
          uVar16 = puVar11[2];
          puVar13[4] = puVar11[4];
          puVar13[1] = uVar5;
          *puVar13 = uVar9;
          puVar13[3] = uVar12;
          puVar13[2] = uVar16;
        }
LAB_0070073c:
        bVar4 = uVar17 != uVar15;
        uVar17 = uVar17 + 1;
      } while (bVar4);
      uVar17 = param_1[1];
      uVar16 = param_1[3];
      if (7 < uVar17) {
        uVar17 = (uVar17 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar17 - uVar16;
  }
  return 0xffffffffffffffff;
}


// ===== 00700850  FUN_00700850 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00700850(undefined8 *param_1,ulong param_2,ulong param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  uVar7 = _UNK_00ad5110;
  uVar6 = _DAT_00ad5108;
  puVar5 = PTR_DAT_00ad50f8;
  if (param_3 == 0) {
    param_1[1] = _UNK_00ad5100;
    *param_1 = puVar5;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    return;
  }
  if (param_3 < 0xf) {
    uVar2 = 7;
    if (1 < param_2) {
      uVar2 = 3;
    }
    if (uVar2 <= param_3) {
      uVar2 = param_3;
    }
    uVar9 = 4;
    if (3 < uVar2) {
      uVar9 = (param_3 & 8) + 8;
    }
  }
  else {
    if (param_3 >> 0x3d != 0) {
      auVar11 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 1) = auVar11;
      return;
    }
    uVar9 = (0xffffffffffffffffU >> (LZCOUNT((param_3 * 8) / 7 - 1) & 0x3fU)) + 1;
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar9;
  if ((SUB168(auVar11 * auVar4,8) == 0) && (param_2 * uVar9 < 0xfffffffffffffff9)) {
    uVar2 = uVar9 + 8;
    uVar10 = param_2 * uVar9 + 7 & 0xfffffffffffffff8;
    uVar1 = uVar10 + uVar2;
    if ((!CARRY8(uVar10,uVar2)) && (uVar1 < 0x7ffffffffffffff9)) {
      if (uVar1 == 0) {
        lVar8 = 8;
LAB_00700998:
        lVar3 = uVar9 - 1;
        if (8 < uVar9) {
          lVar3 = (uVar9 >> 3) * 7;
        }
        memset((void *)(lVar8 + uVar10),0xff,uVar2);
        *param_1 = (void *)(lVar8 + uVar10);
        param_1[1] = uVar9 - 1;
        param_1[2] = lVar3;
        param_1[3] = 0;
        return;
      }
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar8 = FUN_004b25a4(uVar1,8);
      if (lVar8 != 0) goto LAB_00700998;
      auVar11 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(param_4,8,uVar1);
      goto LAB_00700978;
    }
  }
  auVar11 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(param_4);
LAB_00700978:
  *(undefined1 (*) [16])(param_1 + 1) = auVar11;
  *param_1 = 0;
  return;
}


// ===== 00700a04  FUN_00700a04 =====

void FUN_00700a04(long *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  char cVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong in_x13;
  ulong extraout_x13;
  ulong extraout_x13_00;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  undefined1 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined4 local_248;
  undefined3 uStack_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  char local_1f0;
  undefined4 local_1ef;
  undefined3 uStack_1eb;
  long *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  long *local_1c8;
  ulong uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long *local_1a8;
  undefined8 uStack_1a0;
  long *local_198;
  ulong uStack_190;
  int local_188;
  undefined8 local_184;
  undefined8 uStack_17c;
  int local_174;
  long local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156;
  long local_150;
  undefined8 uStack_148;
  
  lVar23 = *param_1;
  uVar26 = param_1[1];
  puVar24 = (undefined8 *)param_1[2];
  uVar22 = *param_3;
  do {
    if (uVar26 == 0) {
      puVar25 = puVar24;
      if (param_2 == 0) {
        return;
      }
      do {
        puVar24 = puVar25 + 1;
        lVar23 = lVar23 + -0x740;
        uVar26 = NEON_cmge(*puVar25,0,1);
        uVar26 = uVar26 & 0x8080808080808080;
        puVar25 = puVar24;
      } while (uVar26 == 0);
      *param_1 = lVar23;
      param_1[2] = (long)puVar24;
    }
    uVar2 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar26 = uVar26 - 1 & uVar26;
    param_1[1] = uVar26;
    lVar13 = lVar23 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) * 0xe8;
    cVar1 = *(char *)(lVar13 + -0xa0);
    uVar8 = *(undefined8 *)(lVar13 + -0xe8);
    uVar28 = *(undefined8 *)(lVar13 + -0x80);
    uVar27 = *(undefined8 *)(lVar13 + -0x88);
    if (cVar1 == '\x19') {
      plVar14 = *(long **)(lVar13 + -0x98);
      do {
        lVar15 = *plVar14;
        bVar3 = 1;
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar15 + 1;
          bVar3 = ExclusiveMonitorsStatus();
        }
        in_x13 = (ulong)bVar3;
      } while (bVar3 != 0);
      if (lVar15 < 0) {
LAB_00700c84:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x700c88);
        (*pcVar6)();
      }
      plVar16 = *(long **)(lVar13 + -0x78);
      uVar17 = *(undefined8 *)(lVar13 + -0x90);
      if (plVar16 == (long *)0x0) goto LAB_00700ac4;
LAB_00700b24:
      do {
        lVar15 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 < 0) goto LAB_00700c84;
      in_x13 = *(ulong *)(lVar13 + -0x70);
      iVar19 = *(int *)(lVar13 + -0x38);
      uVar31 = *(undefined8 *)(lVar13 + -0x60);
      uVar30 = *(undefined8 *)(lVar13 + -0x68);
      uVar18 = *(undefined1 *)(lVar13 + -8);
      uVar29 = *(undefined8 *)(lVar13 + -0x10);
      if (iVar19 != 2) goto LAB_00700b54;
LAB_00700adc:
      iVar20 = *(int *)(lVar13 + -0x24);
      uVar10 = *(undefined4 *)(lVar13 + -0xd0);
      uVar11 = *(undefined4 *)(lVar13 + -0xcc);
      if (iVar20 == 2) goto LAB_00700aec;
LAB_00700b6c:
      uStack_148 = *(undefined8 *)(lVar13 + -0x18);
      local_150 = *(long *)(lVar13 + -0x20);
      plVar9 = *(long **)(lVar13 + -0x58);
      uVar21 = *(undefined1 *)(lVar13 + -7);
      uVar7 = *(undefined1 *)(lVar13 + -6);
      if (plVar9 != (long *)0x0) goto LAB_00700b84;
LAB_00700afc:
      plVar12 = *(long **)(lVar13 + -0x48);
    }
    else {
      local_248 = *(undefined4 *)(lVar13 + -0x9f);
      uStack_244 = (undefined3)((uint)*(undefined4 *)(lVar13 + -0x9c) >> 8);
      plVar14 = *(long **)(lVar13 + -0x98);
      uVar17 = *(undefined8 *)(lVar13 + -0x90);
      plVar16 = *(long **)(lVar13 + -0x78);
      if (plVar16 != (long *)0x0) goto LAB_00700b24;
LAB_00700ac4:
      iVar19 = *(int *)(lVar13 + -0x38);
      uVar31 = *(undefined8 *)(lVar13 + -0x60);
      uVar30 = *(undefined8 *)(lVar13 + -0x68);
      uVar18 = *(undefined1 *)(lVar13 + -8);
      uVar29 = *(undefined8 *)(lVar13 + -0x10);
      if (iVar19 == 2) goto LAB_00700adc;
LAB_00700b54:
      uStack_238 = *(undefined8 *)(lVar13 + -0x2c);
      local_240 = *(undefined8 *)(lVar13 + -0x34);
      iVar20 = *(int *)(lVar13 + -0x24);
      uVar10 = *(undefined4 *)(lVar13 + -0xd0);
      uVar11 = *(undefined4 *)(lVar13 + -0xcc);
      if (iVar20 != 2) goto LAB_00700b6c;
LAB_00700aec:
      plVar9 = *(long **)(lVar13 + -0x58);
      uVar21 = *(undefined1 *)(lVar13 + -7);
      uVar7 = *(undefined1 *)(lVar13 + -6);
      if (plVar9 == (long *)0x0) goto LAB_00700afc;
LAB_00700b84:
      do {
        lVar15 = *plVar9;
        bVar3 = 1;
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar15 + 1;
          bVar3 = ExclusiveMonitorsStatus();
        }
        param_8 = (ulong)bVar3;
      } while (bVar3 != 0);
      if (lVar15 < 0) goto LAB_00700c84;
      param_6 = *(undefined8 *)(lVar13 + -0x50);
      plVar12 = *(long **)(lVar13 + -0x48);
    }
    if (plVar12 != (long *)0x0) {
      do {
        lVar15 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = lVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 < 0) goto LAB_00700c84;
      param_8 = *(ulong *)(lVar13 + -0x40);
    }
    local_230 = *(undefined8 *)(lVar13 + -0xe0);
    uStack_228 = *(undefined8 *)(lVar13 + -0xd8);
    uStack_210 = *(undefined8 *)(lVar13 + -0xc0);
    local_218 = *(undefined8 *)(lVar13 + -200);
    uStack_200 = *(undefined8 *)(lVar13 + -0xb0);
    local_208 = *(undefined8 *)(lVar13 + -0xb8);
    local_1f8 = *(undefined4 *)(lVar13 + -0xa8);
    local_220 = uVar10;
    uStack_21c = uVar11;
    local_1f0 = cVar1;
    local_1ef = local_248;
    uStack_1eb = uStack_244;
    local_1e8 = plVar14;
    uStack_1e0 = uVar17;
    local_1d8 = uVar27;
    uStack_1d0 = uVar28;
    local_1c8 = plVar16;
    uStack_1c0 = in_x13;
    local_1b8 = uVar30;
    uStack_1b0 = uVar31;
    local_1a8 = plVar9;
    uStack_1a0 = param_6;
    local_198 = plVar12;
    uStack_190 = param_8;
    local_188 = iVar19;
    local_184 = local_240;
    uStack_17c = uStack_238;
    local_174 = iVar20;
    local_170 = local_150;
    uStack_168 = uStack_148;
    local_160 = uVar29;
    local_158 = uVar18;
    local_157 = uVar21;
    local_156 = uVar7;
    FUN_0075e770(&local_150,uVar22,uVar8,&local_230);
    in_x13 = extraout_x13;
    if (local_150 != 2) {
      FUN_00702244(&local_150);
      in_x13 = extraout_x13_00;
    }
    param_2 = param_2 + -1;
  } while( true );
}


// ===== 00700c88  FUN_00700c88 =====

void FUN_00700c88(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  ulong __n;
  ulong uVar8;
  code *pcVar9;
  undefined1 *__dest;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  void *__src;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 local_118;
  undefined8 uStack_110;
  ulong local_108;
  undefined1 *puStack_100;
  ulong local_f8;
  long local_f0;
  long *plStack_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  long local_c0;
  long *plStack_b8;
  long local_b0;
  void *local_a8;
  byte local_98;
  long *local_90 [6];
  
  lVar19 = *param_1;
  uVar20 = param_1[1];
  uVar12 = *param_3;
  puVar17 = (undefined8 *)param_1[2];
  while( true ) {
    if (uVar20 == 0) {
      puVar18 = puVar17;
      if (param_2 == 0) {
        return;
      }
      do {
        puVar17 = puVar18 + 1;
        lVar19 = lVar19 + -0x300;
        uVar20 = NEON_cmge(*puVar18,0,1);
        uVar20 = uVar20 & 0x8080808080808080;
        puVar18 = puVar17;
      } while (uVar20 == 0);
      *param_1 = lVar19;
      param_1[1] = uVar20;
      param_1[2] = (long)puVar17;
    }
    uVar15 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    lVar16 = lVar19 + (long)-(int)((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) * 0x60;
    uVar20 = uVar20 - 1 & uVar20;
    param_1[1] = uVar20;
    uVar11 = *(undefined8 *)(lVar16 + -0x60);
    uVar1 = *(undefined8 *)(lVar16 + -0x18);
    uVar2 = *(undefined8 *)(lVar16 + -0x10);
    uVar3 = *(undefined1 *)(lVar16 + -4);
    if (*(char *)(lVar16 + -0x30) == '\x19') {
      plVar13 = *(long **)(lVar16 + -0x28);
      do {
        lVar14 = *plVar13;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = lVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x700f00);
        (*pcVar9)();
      }
      local_b0 = *(long *)(lVar16 + -0x20);
      uVar15 = (ulong)local_c0 >> 8;
      local_c0 = CONCAT71((int7)uVar15,0x19);
      uVar15 = *(ulong *)(lVar16 + -0x38);
      plStack_b8 = plVar13;
    }
    else {
      local_b0 = *(long *)(lVar16 + -0x20);
      local_c0 = *(long *)(lVar16 + -0x30);
      uVar15 = *(ulong *)(lVar16 + -0x38);
      plStack_b8 = *(long **)(lVar16 + -0x28);
    }
    __n = uVar15 << 3;
    uVar10 = 0;
    if ((uVar15 >> 0x3d != 0) || (uVar10 = 0, 0x7ffffffffffffff8 < __n)) break;
    uVar4 = *(undefined1 *)(lVar16 + -3);
    uVar5 = *(undefined1 *)(lVar16 + -2);
    __src = *(void **)(lVar16 + -0x40);
    if (__n == 0) {
      __dest = &DAT_00000008;
      uVar8 = 0;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2(0);
      __dest = (undefined1 *)FUN_004b25a4(__n,8);
      uVar10 = 8;
      uVar8 = uVar15;
      if (__dest == (undefined1 *)0x0) break;
    }
    if (uVar15 != 0) {
      memcpy(__dest,__src,__n);
    }
    local_c1 = *(undefined1 *)(lVar16 + -1);
    local_118 = *(undefined8 *)(lVar16 + -0x58);
    uStack_110 = *(undefined8 *)(lVar16 + -0x50);
    local_c8 = *(undefined4 *)(lVar16 + -8);
    local_e0 = local_b0;
    plStack_e8 = plStack_b8;
    local_f0 = local_c0;
    local_108 = uVar8;
    puStack_100 = __dest;
    local_f8 = uVar15;
    local_d8 = uVar1;
    uStack_d0 = uVar2;
    local_c4 = uVar3;
    local_c3 = uVar4;
    local_c2 = uVar5;
    FUN_0075ebd0(&local_c0,uVar12,uVar11,&local_118);
    if (local_c0 != 2) {
      if (0x18 < local_98) {
        do {
          lVar16 = *local_90[0];
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(local_90[0],0x10);
          if (bVar7) {
            *local_90[0] = lVar16 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar16 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 00700eb0 to 00700ebb has its CatchHandler @ 00700f20 */
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(local_90);
        }
      }
      if (local_b0 != 0) {
        free(local_a8);
      }
    }
    param_2 = param_2 + -1;
  }
                    /* try { // try from 00700ef4 to 00700efb has its CatchHandler @ 00700f4c */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar10,__n);
}


// ===== 00700f90  FUN_00700f90 =====

void FUN_00700f90(long *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar3 = *param_1;
  uVar6 = param_1[1];
  param_3 = (undefined8 *)*param_3;
  puVar4 = (undefined8 *)param_1[2];
  do {
    if (uVar6 == 0) {
      puVar5 = puVar4;
      if (param_2 == 0) {
        return;
      }
      do {
        puVar4 = puVar5 + 1;
        lVar3 = lVar3 + -0x140;
        uVar6 = NEON_cmge(*puVar5,0,1);
        uVar6 = uVar6 & 0x8080808080808080;
        puVar5 = puVar4;
      } while (uVar6 == 0);
      *param_1 = lVar3;
      param_1[2] = (long)puVar4;
    }
    uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    uVar2 = *param_3;
    uVar6 = uVar6 - 1 & uVar6;
    param_1[1] = uVar6;
    FUN_0075f57c(uVar2,*(undefined8 *)
                        (lVar3 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) *
                                 0x28 + -0x28));
    param_2 = param_2 + -1;
  } while( true );
}


// ===== 00701034  FUN_00701034 =====

void FUN_00701034(long *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  char cVar12;
  char cVar13;
  byte bVar14;
  bool bVar15;
  undefined5 uVar16;
  long *plVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  long lVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  ulong uVar29;
  ulong *puVar30;
  long lVar31;
  ulong uVar32;
  code *pcVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  void *__src;
  ulong uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 in_x6;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  long *plVar42;
  undefined8 *puVar43;
  long lVar44;
  undefined8 uVar45;
  long lVar46;
  ulong uVar47;
  undefined8 uVar48;
  ulong *extraout_x9;
  ulong *puVar49;
  undefined8 *puVar50;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  ulong *puVar51;
  ulong *puVar52;
  ulong *extraout_x11;
  ulong *extraout_x11_00;
  ulong in_x12;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong extraout_x12_02;
  long *in_x13;
  long *extraout_x13;
  long *extraout_x13_00;
  long *extraout_x13_01;
  long *extraout_x13_02;
  ulong uVar53;
  ulong extraout_x14;
  ulong extraout_x14_00;
  long *plVar54;
  long *extraout_x15;
  long *extraout_x15_00;
  long extraout_x16;
  long extraout_x16_00;
  ulong uVar55;
  ulong extraout_x17;
  ulong extraout_x17_00;
  long *plVar56;
  long *plVar57;
  ulong uVar58;
  long *plVar59;
  long *plVar60;
  long *plVar61;
  long *plVar62;
  long *plVar63;
  undefined8 unaff_x30;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined1 *local_648;
  ulong local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined8 local_620;
  ulong local_618;
  undefined7 uStack_5a0;
  undefined1 local_599;
  undefined7 uStack_598;
  undefined1 uStack_591;
  undefined8 local_580;
  long *plStack_578;
  undefined8 local_570;
  undefined8 local_510;
  long *plStack_508;
  undefined8 local_500;
  char local_4e8;
  undefined7 uStack_4e7;
  long *plStack_4e0;
  undefined8 local_4d8;
  long *local_4d0;
  undefined8 local_4c8;
  long *local_4c0;
  undefined8 uStack_4b8;
  undefined2 local_4b0;
  undefined2 local_4ae;
  ushort local_4ac;
  ushort local_4aa;
  undefined2 local_4a8;
  ushort local_4a6;
  undefined4 uStack_4a4;
  ulong local_4a0;
  long *plStack_498;
  ulong uStack_490;
  ulong *puStack_488;
  ulong *local_480;
  long local_478;
  ulong local_470;
  ulong *local_468;
  undefined8 *local_460;
  ulong *local_458;
  ulong local_450;
  long *local_448;
  ulong local_440;
  long *local_438;
  long local_430;
  ulong local_428;
  undefined1 *local_420;
  ulong local_418;
  long *local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8;
  undefined8 local_3e7;
  undefined7 uStack_3df;
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  long *plStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  long *plStack_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  long *local_390;
  long *local_388;
  undefined8 local_380;
  undefined8 local_378;
  long *local_370;
  undefined8 local_368;
  long *local_360;
  undefined8 local_358;
  long *local_350;
  undefined8 local_348;
  long *local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  long *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  ulong *local_2b8;
  ulong *local_2b0;
  uint local_2a8;
  long local_2a4;
  undefined4 local_29c;
  undefined8 local_298;
  byte local_290;
  undefined1 local_28f;
  undefined1 local_28e;
  undefined1 local_28d;
  byte local_28c;
  undefined1 local_28b;
  undefined1 local_28a;
  undefined1 local_289;
  undefined8 local_288;
  long *plStack_280;
  ulong local_278;
  ulong *local_270;
  ulong *local_268;
  
  uVar58 = param_1[1];
  uVar40 = *param_3;
  do {
    if (uVar58 == 0) {
      if (param_2 == 0) {
        return;
      }
      lVar41 = *param_1;
      puVar43 = (undefined8 *)param_1[2];
      do {
        puVar50 = puVar43 + 1;
        lVar41 = lVar41 + -0x1100;
        uVar58 = NEON_cmge(*puVar43,0,1);
        uVar58 = uVar58 & 0x8080808080808080;
        puVar43 = puVar50;
      } while (uVar58 == 0);
      *param_1 = lVar41;
      param_1[1] = uVar58;
      param_1[2] = (long)puVar50;
    }
    else {
      lVar41 = *param_1;
    }
    uVar36 = (uVar58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar58 & 0x5555555555555555) << 1;
    uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
    uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
    uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
    lVar41 = lVar41 + (long)-(int)((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3) * 0x220;
    uVar58 = uVar58 - 1 & uVar58;
    param_1[1] = uVar58;
    uVar37 = *(undefined8 *)(lVar41 + -0x220);
    uVar38 = *(undefined8 *)(lVar41 + -0x110);
    uVar36 = local_4a0;
    plVar17 = plStack_498;
    uVar18 = uStack_490;
    puVar19 = puStack_488;
    puVar20 = local_480;
    lVar21 = local_478;
    puVar22 = local_468;
    puVar43 = local_460;
    puVar23 = local_458;
    uVar24 = local_450;
    plVar25 = local_448;
    uVar26 = local_440;
    plVar27 = local_438;
    lVar28 = local_430;
    uVar29 = local_428;
    if (*(char *)(lVar41 + -0x158) == '\x19') {
      plStack_578 = *(long **)(lVar41 + -0x150);
      do {
        lVar44 = *plStack_578;
        cVar12 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plStack_578,0x10);
        if (bVar15) {
          *plStack_578 = lVar44 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar44 < 0) {
LAB_007018f4:
        local_428 = uVar29;
        local_430 = lVar28;
        local_438 = plVar27;
        local_440 = uVar26;
        local_448 = plVar25;
        local_450 = uVar24;
        local_458 = puVar23;
        local_460 = puVar43;
        local_468 = puVar22;
        local_478 = lVar21;
        local_480 = puVar20;
        puStack_488 = puVar19;
        uStack_490 = uVar18;
        plStack_498 = plVar17;
        local_4a0 = uVar36;
                    /* WARNING: Does not return */
        pcVar33 = (code *)SoftwareBreakpoint(1,0x7018f8);
        (*pcVar33)();
      }
      local_570 = *(undefined8 *)(lVar41 + -0x148);
      local_580 = CONCAT71(local_580._1_7_,0x19);
      plVar60 = *(long **)(lVar41 + -0x100);
      if (plVar60 == (long *)0x0) goto LAB_00701190;
LAB_00701168:
      do {
        lVar44 = *plVar60;
        cVar12 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar60,0x10);
        if (bVar15) {
          *plVar60 = lVar44 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar44 < 0) goto LAB_007018f4;
      in_x6 = *(undefined8 *)(lVar41 + -0xf8);
      uVar39 = *(undefined8 *)(lVar41 + -0xf0);
      plVar56 = *(long **)(lVar41 + -0xe8);
      if (plVar56 != (long *)0x0) goto LAB_0070119c;
LAB_007011c4:
      plVar63 = *(long **)(lVar41 + -0xd8);
      if (plVar63 == (long *)0x0) goto LAB_007011fc;
LAB_007011d0:
      do {
        lVar44 = *plVar63;
        cVar12 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar63,0x10);
        if (bVar15) {
          *plVar63 = lVar44 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar44 < 0) goto LAB_007018f4;
      local_620 = *(undefined8 *)(lVar41 + -0xd0);
      plVar57 = *(long **)(lVar41 + -200);
      if (plVar57 != (long *)0x0) goto LAB_00701208;
LAB_00701234:
      plVar59 = *(long **)(lVar41 + -0xb8);
      if (plVar59 == (long *)0x0) goto LAB_007012a8;
LAB_00701240:
      do {
        lVar44 = *plVar59;
        cVar12 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar59,0x10);
        if (bVar15) {
          *plVar59 = lVar44 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar44 < 0) goto LAB_007018f4;
      local_630 = *(undefined8 *)(lVar41 + -0xb0);
      if (*(char *)(lVar41 + -0x140) != '\x19') goto LAB_007012bc;
LAB_00701270:
      plStack_508 = *(long **)(lVar41 + -0x138);
      do {
        lVar44 = *plStack_508;
        cVar12 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plStack_508,0x10);
        if (bVar15) {
          *plStack_508 = lVar44 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar44 < 0) goto LAB_007018f4;
      local_500 = *(undefined8 *)(lVar41 + -0x130);
      local_510 = CONCAT71(local_510._1_7_,0x19);
      uVar64 = unaff_x30;
    }
    else {
      local_570 = *(undefined8 *)(lVar41 + -0x148);
      plStack_578 = *(long **)(lVar41 + -0x150);
      local_580 = *(undefined8 *)(lVar41 + -0x158);
      plVar60 = *(long **)(lVar41 + -0x100);
      if (plVar60 != (long *)0x0) goto LAB_00701168;
LAB_00701190:
      uVar39 = *(undefined8 *)(lVar41 + -0xf0);
      plVar56 = *(long **)(lVar41 + -0xe8);
      if (plVar56 == (long *)0x0) goto LAB_007011c4;
LAB_0070119c:
      do {
        lVar44 = *plVar56;
        cVar12 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar56,0x10);
        if (bVar15) {
          *plVar56 = lVar44 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar44 < 0) goto LAB_007018f4;
      unaff_x30 = *(undefined8 *)(lVar41 + -0xe0);
      plVar63 = *(long **)(lVar41 + -0xd8);
      if (plVar63 != (long *)0x0) goto LAB_007011d0;
LAB_007011fc:
      plVar57 = *(long **)(lVar41 + -200);
      if (plVar57 == (long *)0x0) goto LAB_00701234;
LAB_00701208:
      do {
        lVar44 = *plVar57;
        cVar12 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar57,0x10);
        if (bVar15) {
          *plVar57 = lVar44 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar44 < 0) goto LAB_007018f4;
      local_628 = *(undefined8 *)(lVar41 + -0xc0);
      plVar59 = *(long **)(lVar41 + -0xb8);
      if (plVar59 != (long *)0x0) goto LAB_00701240;
LAB_007012a8:
      if (*(char *)(lVar41 + -0x140) == '\x19') goto LAB_00701270;
LAB_007012bc:
      local_500 = *(undefined8 *)(lVar41 + -0x130);
      plStack_508 = *(long **)(lVar41 + -0x138);
      local_510 = *(undefined8 *)(lVar41 + -0x140);
      uVar64 = unaff_x30;
    }
    plVar62 = *(long **)(lVar41 + -0x108);
    do {
      lVar44 = *plVar62;
      cVar12 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar62,0x10);
      if (bVar15) {
        *plVar62 = lVar44 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar44 < 0) goto LAB_007018f4;
    uVar68 = *(undefined8 *)(lVar41 + -0x90);
    uVar67 = *(undefined8 *)(lVar41 + -0x98);
    cVar12 = *(char *)(lVar41 + -0x128);
    uVar4 = *(undefined1 *)(lVar41 + -2);
    uVar1 = *(uint *)(lVar41 + -0x20);
    plVar54 = (long *)(ulong)uVar1;
    lVar44 = *(long *)(lVar41 + -0x1c);
    uVar66 = *(undefined8 *)(lVar41 + -0xa0);
    uVar65 = *(undefined8 *)(lVar41 + -0xa8);
    bVar5 = *(byte *)(lVar41 + -8);
    uVar55 = (ulong)bVar5;
    uVar35 = *(undefined8 *)(lVar41 + -0x88);
    uVar6 = *(undefined1 *)(lVar41 + -6);
    if (cVar12 != -1) {
      if (cVar12 == '\x19') {
        plVar61 = *(long **)(lVar41 + -0x120);
        do {
          lVar46 = *plVar61;
          cVar13 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar61,0x10);
          if (bVar15) {
            *plVar61 = lVar46 + 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        if (lVar46 < 0) goto LAB_007018f4;
      }
      else {
        uVar16 = CONCAT14(local_288._7_1_,*(undefined4 *)(lVar41 + -0x124));
        local_288 = CONCAT44((int)((uint5)uVar16 >> 8),*(undefined4 *)(lVar41 + -0x127));
        plVar61 = *(long **)(lVar41 + -0x120);
      }
      uVar2 = (undefined4)local_288;
      in_x12 = local_288 & 0xffffffff;
      in_x13 = (long *)(ulong)local_288._3_4_;
      local_4d8 = *(undefined8 *)(lVar41 + -0x118);
      *(undefined4 *)((ulong)&local_4e8 | 1) = uVar2;
      *(uint *)((long)((ulong)&local_4e8 | 1) + 3) = local_288._3_4_;
      plStack_4e0 = plVar61;
    }
    uVar7 = *(undefined1 *)(lVar41 + -5);
    uVar70 = *(undefined8 *)(lVar41 + -0x78);
    uVar69 = *(undefined8 *)(lVar41 + -0x80);
    uVar72 = *(undefined8 *)(lVar41 + -0x68);
    uVar71 = *(undefined8 *)(lVar41 + -0x70);
    plVar61 = *(long **)(lVar41 + -0x60);
    uVar8 = *(undefined1 *)(lVar41 + -7);
    uVar2 = *(undefined4 *)(lVar41 + -0x14);
    uVar45 = *(undefined8 *)(lVar41 + -0x10);
    local_4e8 = cVar12;
    if (plVar61 == (long *)0x0) {
      local_4d0 = (long *)0x0;
    }
    else {
      do {
        lVar46 = *plVar61;
        cVar12 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar61,0x10);
        if (bVar15) {
          *plVar61 = lVar46 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar46 < 0) goto LAB_007018f4;
      local_638 = *(undefined8 *)(lVar41 + -0x58);
      local_4d0 = plVar61;
      local_4c8 = local_638;
    }
    uVar74 = *(undefined8 *)(lVar41 + -0x48);
    uVar73 = *(undefined8 *)(lVar41 + -0x50);
    uVar76 = *(undefined8 *)(lVar41 + -0x38);
    uVar75 = *(undefined8 *)(lVar41 + -0x40);
    bVar9 = *(byte *)(lVar41 + -4);
    uVar47 = (ulong)bVar9;
    uVar10 = *(undefined1 *)(lVar41 + -3);
    puVar51 = *(ulong **)(lVar41 + -0x30);
    puVar52 = puVar51;
    if ((*(uint *)(lVar41 + -0x218) & 1) == 0) {
      local_288 = 0;
      uVar53 = (ulong)*(ushort *)(lVar41 + -0x170);
      if (*(ushort *)(lVar41 + -0x170) != 2) goto LAB_007014a4;
LAB_0070152c:
      local_4a8 = 2;
    }
    else {
      plVar42 = *(long **)(lVar41 + -0x210);
      if (plVar42 != (long *)0x0) {
        do {
          lVar46 = *plVar42;
          puVar52 = (ulong *)(lVar46 + 1);
          bVar14 = 1;
          bVar15 = (bool)ExclusiveMonitorPass(plVar42,0x10);
          if (bVar15) {
            *plVar42 = (long)puVar52;
            bVar14 = ExclusiveMonitorsStatus();
          }
          in_x12 = (ulong)bVar14;
        } while (bVar14 != 0);
        if (lVar46 < 0) goto LAB_007018f4;
        uVar47 = *(ulong *)(lVar41 + -0x208);
      }
      puVar49 = *(ulong **)(lVar41 + -0x200);
      if (puVar49 != (ulong *)0x0) {
        do {
          in_x12 = *puVar49;
          in_x13 = (long *)(in_x12 + 1);
          cVar12 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(puVar49,0x10);
          if (bVar15) {
            *puVar49 = (ulong)in_x13;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((long)in_x12 < 0) goto LAB_007018f4;
        puVar52 = *(ulong **)(lVar41 + -0x1f8);
      }
      local_288 = 1;
      uVar53 = (ulong)*(ushort *)(lVar41 + -0x170);
      plStack_280 = plVar42;
      local_278 = uVar47;
      local_270 = puVar49;
      local_268 = puVar52;
      if (*(ushort *)(lVar41 + -0x170) == 2) goto LAB_0070152c;
LAB_007014a4:
      plVar42 = *(long **)(lVar41 + -0x188);
      do {
        lVar46 = *plVar42;
        cVar12 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar42,0x10);
        if (bVar15) {
          *plVar42 = lVar46 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar46 < 0) goto LAB_007018f4;
      uStack_4b8 = *(undefined8 *)(lVar41 + -0x180);
      local_4b0 = *(undefined2 *)(lVar41 + -0x178);
      local_4ae = *(undefined2 *)(lVar41 + -0x176);
      local_4ac = *(ushort *)(lVar41 + -0x174);
      puVar52 = (ulong *)(ulong)local_4ac;
      local_4aa = *(ushort *)(lVar41 + -0x172);
      in_x12 = (ulong)local_4aa;
      local_4a6 = *(ushort *)(lVar41 + -0x16e);
      in_x13 = (long *)(ulong)local_4a6;
      local_4a8 = (undefined2)uVar53;
      local_4c0 = plVar42;
    }
    puVar50 = (undefined8 *)(lVar41 + -0x168);
    uVar3 = *(undefined1 *)(lVar41 + -0x160);
    uVar48 = *puVar50;
    uVar11 = *(undefined1 *)(lVar41 + -1);
    puVar49 = *(ulong **)(lVar41 + -0x28);
    lVar46 = lVar44;
    if (*(long *)(lVar41 + -0x1a0) == -1) {
      puVar30 = puVar49;
      lVar31 = *(long *)(lVar41 + -0x1f0);
      uVar32 = in_x12;
      plVar42 = in_x13;
      uVar47 = local_470;
      local_4a0 = local_288;
      plStack_498 = plStack_280;
      uStack_490 = local_278;
      puStack_488 = local_270;
      local_480 = local_268;
      local_428 = 0xffffffffffffffff;
    }
    else {
      uVar34 = 0;
      local_640 = *(ulong *)(lVar41 + -400);
      uVar36 = local_640 * 8;
      if ((local_640 >> 0x3d != 0) || (0x7ffffffffffffff8 < uVar36)) {
LAB_007018ec:
                    /* try { // try from 007018ec to 007018f3 has its CatchHandler @ 00701918 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar34,uVar36);
      }
      __src = *(void **)(lVar41 + -0x198);
      if (uVar36 == 0) {
        local_618 = 0;
        local_648 = &DAT_00000008;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2(0);
        local_648 = (undefined1 *)FUN_004b25a4(uVar36,8);
        uVar34 = 8;
        plVar54 = extraout_x15;
        lVar46 = extraout_x16;
        uVar55 = extraout_x17;
        puVar50 = extraout_x10;
        puVar52 = extraout_x11;
        in_x12 = extraout_x12;
        in_x13 = extraout_x13;
        uVar53 = extraout_x14;
        local_618 = local_640;
        if (local_648 == (undefined1 *)0x0) goto LAB_007018ec;
      }
      if (local_640 == 0) {
        local_640 = 0;
        puVar30 = (ulong *)0x0;
        lVar31 = *(long *)(lVar41 + -0x1f0);
        uVar32 = in_x12;
        plVar42 = in_x13;
        uVar36 = local_4a0;
        plVar17 = plStack_498;
        uVar18 = uStack_490;
        puVar19 = puStack_488;
        puVar20 = local_480;
        lVar21 = local_478;
        uVar47 = local_470;
        puVar22 = local_468;
        puVar43 = local_460;
        puVar23 = local_458;
        uVar24 = local_450;
        plVar25 = local_448;
        uVar26 = local_440;
        plVar27 = local_438;
        lVar28 = local_430;
        uVar29 = local_428;
        local_4a0 = local_288;
        plStack_498 = plStack_280;
        uStack_490 = local_278;
        puStack_488 = local_270;
        local_480 = local_268;
        local_428 = local_618;
      }
      else {
        memcpy(local_648,__src,uVar36);
        plVar54 = extraout_x15_00;
        lVar46 = extraout_x16_00;
        uVar55 = extraout_x17_00;
        puVar50 = extraout_x10_00;
        puVar30 = extraout_x9;
        lVar31 = *(long *)(lVar41 + -0x1f0);
        puVar52 = extraout_x11_00;
        uVar32 = extraout_x12_00;
        plVar42 = extraout_x13_00;
        uVar53 = extraout_x14_00;
        uVar36 = local_4a0;
        plVar17 = plStack_498;
        uVar18 = uStack_490;
        puVar19 = puStack_488;
        puVar20 = local_480;
        lVar21 = local_478;
        uVar47 = local_470;
        puVar22 = local_468;
        puVar43 = local_460;
        puVar23 = local_458;
        uVar24 = local_450;
        plVar25 = local_448;
        uVar26 = local_440;
        plVar27 = local_438;
        lVar28 = local_430;
        uVar29 = local_428;
        local_4a0 = local_288;
        plStack_498 = plStack_280;
        uStack_490 = local_278;
        puStack_488 = local_270;
        local_480 = local_268;
        local_428 = local_618;
      }
    }
    local_440 = uVar53;
    local_448 = plVar42;
    local_450 = uVar32;
    local_458 = puVar52;
    local_478 = lVar31;
    local_468 = puVar30;
    local_460 = puVar50;
    local_470 = uVar55;
    local_430 = lVar46;
    local_438 = plVar54;
    local_288 = local_4a0;
    plStack_280 = plStack_498;
    local_278 = uStack_490;
    local_270 = puStack_488;
    local_268 = local_480;
    if (local_478 != 2) {
      local_468 = *(ulong **)(lVar41 + -0x1e0);
      local_470 = uVar47;
      if (local_468 != (ulong *)0x0) {
        do {
          uVar55 = *local_468;
          local_450 = uVar55 + 1;
          cVar12 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(local_468,0x10);
          if (bVar15) {
            *local_468 = local_450;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((long)uVar55 < 0) goto LAB_007018f4;
        local_460 = *(undefined8 **)(lVar41 + -0x1d8);
      }
      local_458 = *(ulong **)(lVar41 + -0x1d0);
      if (local_458 != (ulong *)0x0) {
        do {
          uVar55 = *local_458;
          local_440 = uVar55 + 1;
          cVar12 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(local_458,0x10);
          if (bVar15) {
            *local_458 = local_440;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if ((long)uVar55 < 0) goto LAB_007018f4;
        local_450 = *(ulong *)(lVar41 + -0x1c8);
      }
      local_448 = *(long **)(lVar41 + -0x1c0);
      if (local_448 != (long *)0x0) {
        do {
          lVar46 = *local_448;
          local_430 = lVar46 + 1;
          cVar12 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(local_448,0x10);
          if (bVar15) {
            *local_448 = local_430;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar46 < 0) goto LAB_007018f4;
        local_440 = *(ulong *)(lVar41 + -0x1b8);
      }
      local_438 = *(long **)(lVar41 + -0x1b0);
      if (local_438 != (long *)0x0) {
        do {
          lVar46 = *local_438;
          cVar12 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(local_438,0x10);
          if (bVar15) {
            *local_438 = lVar46 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar46 < 0) goto LAB_007018f4;
        local_430 = *(long *)(lVar41 + -0x1a8);
      }
      local_470 = *(ulong *)(lVar41 + -0x1e8);
    }
    uStack_591 = SUB81(plStack_578,0);
    local_599 = (undefined1)local_580;
    uStack_598 = (undefined7)((ulong)local_580 >> 8);
    local_3b0 = CONCAT71(uStack_4e7,local_4e8);
    plStack_3c0 = plStack_508;
    local_3c8 = local_510;
    uStack_3f8 = CONCAT44(uStack_4a4,CONCAT22(local_4a6,local_4a8));
    uStack_400 = CONCAT26(local_4aa,CONCAT24(local_4ac,CONCAT22(local_4ae,local_4b0)));
    local_3b8 = local_500;
    local_3e7 = CONCAT17(local_599,uStack_5a0);
    uStack_3df = uStack_598;
    uStack_3d0 = local_570;
    uStack_3d7 = (undefined7)((ulong)plStack_578 >> 8);
    local_358 = local_620;
    local_348 = local_628;
    local_338 = local_630;
    local_2e0 = local_638;
    unaff_x30 = 0x7018d4;
    local_420 = local_648;
    local_418 = local_640;
    local_410 = local_4c0;
    uStack_408 = uStack_4b8;
    local_3f0 = uVar48;
    local_3e8 = uVar3;
    uStack_3d8 = uStack_591;
    plStack_3a8 = plStack_4e0;
    local_3a0 = local_4d8;
    local_398 = uVar38;
    local_390 = plVar62;
    local_388 = plVar60;
    local_380 = in_x6;
    local_378 = uVar39;
    local_370 = plVar56;
    local_368 = uVar64;
    local_360 = plVar63;
    local_350 = plVar57;
    local_340 = plVar59;
    local_310 = uVar35;
    local_2e8 = plVar61;
    local_2b8 = puVar51;
    local_2b0 = puVar49;
    local_2a8 = uVar1;
    local_29c = uVar2;
    local_298 = uVar45;
    local_290 = bVar5;
    local_28f = uVar8;
    local_28e = uVar6;
    local_28d = uVar7;
    local_28c = bVar9;
    local_28b = uVar10;
    local_28a = uVar4;
    local_289 = uVar11;
    local_330 = uVar65;
    uStack_328 = uVar66;
    uStack_320 = uVar67;
    uStack_318 = uVar68;
    local_308 = uVar69;
    uStack_300 = uVar70;
    local_2f8 = uVar71;
    uStack_2f0 = uVar72;
    local_2d8 = uVar73;
    uStack_2d0 = uVar74;
    local_2c8 = uVar75;
    uStack_2c0 = uVar76;
    local_2a4 = lVar44;
    FUN_0075f384(&local_288,uVar40,uVar37,&local_4a0);
    in_x12 = extraout_x12_01;
    in_x13 = extraout_x13_01;
    if (local_288 != 2) {
      unaff_x30 = 0x7018e8;
      FUN_007024a8(&local_288);
      in_x12 = extraout_x12_02;
      in_x13 = extraout_x13_02;
    }
    param_2 = param_2 + -1;
  } while( true );
}


// ===== 00701ae0  FUN_00701ae0 =====

void FUN_00701ae0(long *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar3 = *param_1;
  uVar6 = param_1[1];
  param_3 = (undefined8 *)*param_3;
  puVar4 = (undefined8 *)param_1[2];
  do {
    if (uVar6 == 0) {
      puVar5 = puVar4;
      if (param_2 == 0) {
        return;
      }
      do {
        puVar4 = puVar5 + 1;
        lVar3 = lVar3 + -0x1100;
        uVar6 = NEON_cmge(*puVar5,0,1);
        uVar6 = uVar6 & 0x8080808080808080;
        puVar5 = puVar4;
      } while (uVar6 == 0);
      *param_1 = lVar3;
      param_1[2] = (long)puVar4;
    }
    uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    uVar2 = *param_3;
    uVar6 = uVar6 - 1 & uVar6;
    param_1[1] = uVar6;
    FUN_0075f57c(uVar2,*(undefined8 *)
                        (lVar3 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) *
                                 0x220 + -0x220));
    param_2 = param_2 + -1;
  } while( true );
}


// ===== 00701b8c  FUN_00701b8c =====

void FUN_00701b8c(long *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined5 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  char cVar11;
  long lVar12;
  undefined8 uVar13;
  long *in_x13;
  long *extraout_x13;
  long *extraout_x13_00;
  undefined8 in_x14;
  undefined8 extraout_x14;
  undefined8 extraout_x14_00;
  long *plVar14;
  ulong in_x16;
  ulong extraout_x16;
  ulong extraout_x16_00;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined3 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  char local_130;
  undefined4 local_12f;
  undefined3 uStack_12b;
  long *local_128;
  undefined8 uStack_120;
  char local_118;
  undefined4 local_117;
  undefined3 uStack_113;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long *local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  
  lVar16 = *param_1;
  uVar19 = param_1[1];
  uVar15 = *param_3;
  puVar17 = (undefined8 *)param_1[2];
  do {
    if (uVar19 == 0) {
      puVar18 = puVar17;
      if (param_2 == 0) {
        return;
      }
      do {
        puVar17 = puVar18 + 1;
        lVar16 = lVar16 + -0x3c0;
        uVar19 = NEON_cmge(*puVar18,0,1);
        uVar19 = uVar19 & 0x8080808080808080;
        puVar18 = puVar17;
      } while (uVar19 == 0);
      *param_1 = lVar16;
      param_1[2] = (long)puVar17;
    }
    uVar2 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar19 = uVar19 - 1 & uVar19;
    param_1[1] = uVar19;
    lVar9 = lVar16 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) * 0x78;
    cVar1 = *(char *)(lVar9 + -0x60);
    uVar8 = *(undefined8 *)(lVar9 + -0x78);
    uVar21 = *(undefined8 *)(lVar9 + -0x28);
    uVar20 = *(undefined8 *)(lVar9 + -0x30);
    if (cVar1 == '\x19') {
      plVar10 = *(long **)(lVar9 + -0x58);
      do {
        lVar12 = *plVar10;
        bVar3 = 1;
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar12 + 1;
          bVar3 = ExclusiveMonitorsStatus();
        }
        in_x13 = (long *)(ulong)bVar3;
      } while (bVar3 != 0);
      if (lVar12 < 0) {
LAB_00701da0:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x701da4);
        (*pcVar7)();
      }
      cVar11 = *(char *)(lVar9 + -0x48);
      uVar13 = *(undefined8 *)(lVar9 + -0x50);
      if (cVar11 == -1) goto LAB_00701c54;
LAB_00701c80:
      if (cVar11 == '\x19') {
        in_x13 = *(long **)(lVar9 + -0x40);
        do {
          lVar12 = *in_x13;
          bVar3 = 1;
          bVar5 = (bool)ExclusiveMonitorPass(in_x13,0x10);
          if (bVar5) {
            *in_x13 = lVar12 + 1;
            bVar3 = ExclusiveMonitorsStatus();
          }
          in_x16 = (ulong)bVar3;
        } while (bVar3 != 0);
        if (lVar12 < 0) goto LAB_00701da0;
        in_x14 = *(undefined8 *)(lVar9 + -0x38);
        plVar14 = *(long **)(lVar9 + -0x20);
      }
      else {
        local_d0 = *(undefined4 *)(lVar9 + -0x47);
        uStack_cc._0_3_ = (undefined3)((uint)*(undefined4 *)(lVar9 + -0x44) >> 8);
        in_x13 = *(long **)(lVar9 + -0x40);
        in_x14 = *(undefined8 *)(lVar9 + -0x38);
        plVar14 = *(long **)(lVar9 + -0x20);
      }
    }
    else {
      uVar6 = CONCAT14(local_140._7_1_,*(undefined4 *)(lVar9 + -0x5c));
      local_140 = CONCAT44((int)((uint5)uVar6 >> 8),*(undefined4 *)(lVar9 + -0x5f));
      plVar10 = *(long **)(lVar9 + -0x58);
      uVar13 = *(undefined8 *)(lVar9 + -0x50);
      cVar11 = *(char *)(lVar9 + -0x48);
      if (cVar11 != -1) goto LAB_00701c80;
LAB_00701c54:
      plVar14 = *(long **)(lVar9 + -0x20);
    }
    if (plVar14 != (long *)0x0) {
      do {
        lVar12 = *plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 < 0) goto LAB_00701da0;
      in_x16 = *(ulong *)(lVar9 + -0x18);
    }
    local_d4 = *(undefined2 *)(lVar9 + -4);
    uStack_138 = *(undefined8 *)(lVar9 + -0x68);
    local_d8 = *(undefined4 *)(lVar9 + -8);
    local_e0 = *(undefined8 *)(lVar9 + -0x10);
    uStack_144 = (undefined3)((ulong)local_140 >> 0x20);
    uStack_12b = uStack_144;
    uStack_113 = (undefined3)uStack_cc;
    local_12f = (undefined4)local_140;
    local_140 = *(undefined8 *)(lVar9 + -0x70);
    local_130 = cVar1;
    local_128 = plVar10;
    uStack_120 = uVar13;
    local_118 = cVar11;
    local_117 = local_d0;
    local_110 = in_x13;
    uStack_108 = in_x14;
    local_100 = uVar20;
    uStack_f8 = uVar21;
    local_f0 = plVar14;
    uStack_e8 = in_x16;
    FUN_0075f710(&local_d0,uVar15,uVar8,&local_140);
    in_x13 = extraout_x13;
    in_x14 = extraout_x14;
    in_x16 = extraout_x16;
    if (CONCAT44(uStack_cc,local_d0) != 2) {
      FUN_007023ac(&local_d0);
      in_x13 = extraout_x13_00;
      in_x14 = extraout_x14_00;
      in_x16 = extraout_x16_00;
    }
    param_2 = param_2 + -1;
  } while( true );
}


// ===== 00701da4  FUN_00701da4 =====

void FUN_00701da4(byte *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*param_1 != 0xff) && (0x18 < *param_1)) {
    plVar3 = *(long **)(param_1 + 8);
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      return;
    }
  }
  return;
}


// ===== 00701ddc  FUN_00701ddc =====

void FUN_00701ddc(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    plVar3 = (long *)param_1[1];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
                    /* try { // try from 00701e14 to 00701e17 has its CatchHandler @ 00701e54 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[3];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 3);
        return;
      }
    }
  }
  return;
}


// ===== 00701e8c  FUN_00701e8c =====

void FUN_00701e8c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 2) {
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
                    /* try { // try from 00701ec8 to 00701ecb has its CatchHandler @ 00701f68 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[4];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
                    /* try { // try from 00701ef0 to 00701ef3 has its CatchHandler @ 00701f60 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[6];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
                    /* try { // try from 00701f18 to 00701f1b has its CatchHandler @ 00701f58 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[8];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 8);
        return;
      }
    }
  }
  return;
}


// ===== 00701ff4  FUN_00701ff4 =====

void FUN_00701ff4(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) &&
     (uVar2 = (*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8) + *(long *)(param_1 + 8) * lVar1)
              - 1U & -*(long *)(param_1 + 0x10), lVar1 + uVar2 != -9)) {
    free((void *)(*(long *)(param_1 + 0x18) - uVar2));
    return;
  }
  return;
}


// ===== 00702030  FUN_00702030 =====

void FUN_00702030(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar3 = (long *)*param_1;
  lVar1 = plVar3[1];
  if (lVar1 != -1) {
    pcVar4 = (code *)param_1[1];
    if (pcVar4 == (code *)0x0) {
      lVar5 = 0;
      do {
        if (*(char *)(*plVar3 + lVar5) == -0x80) {
          uVar2 = plVar3[1];
          *(undefined1 *)(*plVar3 + lVar5) = 0xff;
          *(undefined1 *)(*plVar3 + (uVar2 & lVar5 - 8U) + 8) = 0xff;
          plVar3[3] = plVar3[3] + -1;
        }
        lVar5 = lVar5 + 1;
      } while (lVar1 + 1 != lVar5);
    }
    else {
      lVar6 = param_1[2];
      lVar5 = 0;
      lVar7 = -lVar6;
      do {
        if (*(char *)(*plVar3 + lVar5) == -0x80) {
          uVar2 = plVar3[1];
          *(undefined1 *)(*plVar3 + lVar5) = 0xff;
          *(undefined1 *)(*plVar3 + (uVar2 & lVar5 - 8U) + 8) = 0xff;
          (*pcVar4)(*plVar3 + lVar7);
          plVar3[3] = plVar3[3] + -1;
        }
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 - lVar6;
      } while (lVar1 + 1 != lVar5);
    }
  }
  uVar2 = plVar3[1];
  if (7 < uVar2) {
    uVar2 = (uVar2 + 1 >> 3) * 7;
  }
  plVar3[2] = uVar2 - plVar3[3];
  return;
}


// ===== 00702168  FUN_00702168 =====

void FUN_00702168(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007021a4 to 007021a7 has its CatchHandler @ 007021f0 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00702244  FUN_00702244 =====

void FUN_00702244(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x40)) {
    plVar3 = *(long **)(param_1 + 0x48);
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 00702280 to 00702283 has its CatchHandler @ 00702310 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x68);
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 007022a8 to 007022ab has its CatchHandler @ 0070234c */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x88);
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 007022d0 to 007022d3 has its CatchHandler @ 00702344 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x98);
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x98));
      return;
    }
  }
  return;
}


// ===== 007023ac  FUN_007023ac =====

void FUN_007023ac(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x10)) {
    plVar3 = *(long **)(param_1 + 0x18);
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 007023e8 to 007023eb has its CatchHandler @ 00702468 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  if ((*(byte *)(param_1 + 0x28) != 0xff) && (0x18 < *(byte *)(param_1 + 0x28))) {
    plVar3 = *(long **)(param_1 + 0x30);
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 00702420 to 00702423 has its CatchHandler @ 00702460 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x50));
      return;
    }
  }
  return;
}


// ===== 007024a8  FUN_007024a8 =====

void FUN_007024a8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x18)) {
    plVar3 = (long *)param_1[0x19];
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 007024e4 to 007024e7 has its CatchHandler @ 00702774 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = (long *)param_1[0x23];
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 00702508 to 0070250f has its CatchHandler @ 007027cc */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x23);
    }
  }
  plVar3 = (long *)param_1[0x26];
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 00702530 to 00702537 has its CatchHandler @ 007027c4 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x26);
    }
  }
  plVar3 = (long *)param_1[0x28];
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 00702558 to 0070255f has its CatchHandler @ 007027bc */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x28);
    }
  }
  plVar3 = (long *)param_1[0x2a];
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 00702580 to 00702587 has its CatchHandler @ 007027b4 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x2a);
    }
  }
  plVar3 = (long *)param_1[0x2c];
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 007025a8 to 007025af has its CatchHandler @ 007027ac */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x2c);
    }
  }
  if (0x18 < *(byte *)(param_1 + 0x1b)) {
    plVar3 = (long *)param_1[0x1c];
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 007025dc to 007025df has its CatchHandler @ 0070276c */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = (long *)param_1[0x22];
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
    DataMemoryBarrier(2,1);
                    /* try { // try from 007025fc to 00702603 has its CatchHandler @ 007028c8 */
    <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::set::HashSet<smol_str::SmolStr>>>::
    drop_slow(param_1 + 0x22);
  }
  if ((*(byte *)(param_1 + 0x1e) != 0xff) && (0x18 < *(byte *)(param_1 + 0x1e))) {
    plVar3 = (long *)param_1[0x1f];
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 00702638 to 0070263b has its CatchHandler @ 0070271c */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = (long *)param_1[0x37];
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 0070265c to 00702663 has its CatchHandler @ 007027a4 */
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x37);
    }
  }
  if (*param_1 != 0) {
    plVar3 = (long *)param_1[1];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
                    /* try { // try from 00702690 to 00702693 has its CatchHandler @ 0070272c */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[3];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
                    /* try { // try from 007026b8 to 007026bb has its CatchHandler @ 00702724 */
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
  }
  if ((short)param_1[0x15] != 2) {
    plVar3 = (long *)param_1[0x12];
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
      DataMemoryBarrier(2,1);
                    /* try { // try from 007026e4 to 007026eb has its CatchHandler @ 00702764 */
      <alloc::sync::[n]::alloc::sync::Arc<[smol_str::SmolStr]>>::drop_slow(param_1 + 0x12);
    }
  }
  if ((param_1[0xf] != -1) && (param_1[0xf] != 0)) {
    free((void *)param_1[0x10]);
  }
  FUN_00701e8c(param_1 + 5);
  return;
}


// ===== 00702964  FUN_00702964 =====

void FUN_00702964(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 00702994 to 0070299b has its CatchHandler @ 00702a28 */
  FUN_00766164(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007029dc to 007029df has its CatchHandler @ 00702a58 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00702aac  FUN_00702aac =====

void FUN_00702aac(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  uVar3 = *(ulong *)(param_1 + 8);
  lVar5 = uVar3 - 3;
  if (uVar3 < 3) {
    lVar5 = 1;
  }
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      if (*(long *)(param_1 + 0x68) != 0) {
        free(*(void **)(param_1 + 0x70));
      }
                    /* try { // try from 00702af0 to 00702af7 has its CatchHandler @ 00702b4c */
      FUN_00702964((ulong *)(param_1 + 8));
    }
    else if (*(long *)(param_1 + 0x10) != 0) {
      free(*(void **)(param_1 + 0x18));
    }
  }
  plVar4 = *(long **)(param_1 + 0x88);
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
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow
                ((undefined8 *)(param_1 + 0x88));
      return;
    }
  }
  return;
}


// ===== 00702b84  FUN_00702b84 =====

void FUN_00702b84(long *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  lVar7 = param_1[3];
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)*param_1;
    puVar9 = puVar8 + 1;
    uVar10 = NEON_cmge(*puVar8,0,1);
    uVar10 = uVar10 & 0x8080808080808080;
    do {
      for (; uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
        puVar8 = puVar8 + -0x60;
        uVar10 = NEON_cmge(*puVar9,0,1);
        puVar9 = puVar9 + 1;
      }
      uVar1 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      iVar4 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
      if (0x18 < *(byte *)(puVar8 + (long)-iVar4 * 0xc + -6)) {
        plVar5 = (long *)puVar8[(long)-iVar4 * 0xc + -5];
        do {
          lVar6 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 00702c30 to 00702c33 has its CatchHandler @ 00702ca4 */
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      if (puVar8[(long)-iVar4 * 0xc + -9] != 0) {
        free((void *)puVar8[(long)-iVar4 * 0xc + -8]);
      }
      lVar7 = lVar7 + -1;
      uVar10 = uVar10 - 1 & uVar10;
    } while (lVar7 != 0);
    uVar10 = param_1[1];
    if (uVar10 == 0) {
      uVar10 = 0;
    }
    else {
      memset((void *)*param_1,0xff,uVar10 + 9);
      if (7 < uVar10) {
        uVar10 = (uVar10 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar10;
    param_1[3] = 0;
  }
  return;
}


// ===== 00702d08  FUN_00702d08 =====

void FUN_00702d08(long *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  
  lVar10 = param_1[3];
  if (lVar10 != 0) {
    puVar11 = (undefined8 *)*param_1;
    puVar12 = puVar11 + 1;
    uVar15 = NEON_cmge(*puVar11,0,1);
    uVar15 = uVar15 & 0x8080808080808080;
    do {
      for (; uVar15 == 0; uVar15 = uVar15 & 0x8080808080808080) {
        puVar11 = puVar11 + -0x28;
        uVar15 = NEON_cmge(*puVar12,0,1);
        puVar12 = puVar12 + 1;
      }
      uVar16 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      iVar4 = (int)((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
      lVar7 = puVar11[(long)-iVar4 * 5 + -3];
      if (lVar7 != 0) {
        lVar9 = puVar11[(long)-iVar4 * 5 + -1];
        if (lVar9 != 0) {
          puVar13 = (undefined8 *)puVar11[(long)-iVar4 * 5 + -4];
          puVar14 = puVar13 + 1;
          uVar16 = NEON_cmge(*puVar13,0,1);
          uVar16 = uVar16 & 0x8080808080808080;
          do {
            for (; uVar16 == 0; uVar16 = uVar16 & 0x8080808080808080) {
              puVar13 = puVar13 + -0xe8;
              uVar16 = NEON_cmge(*puVar14,0,1);
              puVar14 = puVar14 + 1;
            }
            uVar1 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
            iVar5 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
            if (0x18 < *(byte *)(puVar13 + (long)-iVar5 * 0x1d + -0x14)) {
              plVar6 = (long *)puVar13[(long)-iVar5 * 0x1d + -0x13];
              do {
                lVar8 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar8 + -1 == 0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 00702e34 to 00702e37 has its CatchHandler @ 00702f44 */
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
              }
            }
            plVar6 = (long *)puVar13[(long)-iVar5 * 0x1d + -0xf];
            if (plVar6 != (long *)0x0) {
              do {
                lVar8 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar8 + -1 == 0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 00702e5c to 00702e5f has its CatchHandler @ 00702f84 */
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
              }
            }
            plVar6 = (long *)puVar13[(long)-iVar5 * 0x1d + -0xb];
            if (plVar6 != (long *)0x0) {
              do {
                lVar8 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar8 + -1 == 0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 00702e84 to 00702e87 has its CatchHandler @ 00702fcc */
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
              }
            }
            plVar6 = (long *)puVar13[(long)-iVar5 * 0x1d + -9];
            if (plVar6 != (long *)0x0) {
              do {
                lVar8 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar8 + -1 == 0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 00702ea8 to 00702eaf has its CatchHandler @ 00702fc4 */
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow
                          (puVar13 + (long)-iVar5 * 0x1d + -9);
              }
            }
            lVar9 = lVar9 + -1;
            uVar16 = uVar16 - 1 & uVar16;
          } while (lVar9 != 0);
        }
        if (lVar7 * 0xe9 != -0xf1) {
          free((void *)(puVar11[(long)-iVar4 * 5 + -4] + lVar7 * -0xe8 + -0xe8));
        }
      }
      lVar10 = lVar10 + -1;
      uVar15 = uVar15 - 1 & uVar15;
    } while (lVar10 != 0);
    uVar15 = param_1[1];
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      memset((void *)*param_1,0xff,uVar15 + 9);
      if (7 < uVar15) {
        uVar15 = (uVar15 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar15;
    param_1[3] = 0;
  }
  return;
}


// ===== 00703054  FUN_00703054 =====

void FUN_00703054(long *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  lVar10 = param_1[3];
  if (lVar10 != 0) {
    puVar11 = (undefined8 *)*param_1;
    puVar12 = puVar11 + 1;
    uVar15 = NEON_cmge(*puVar11,0,1);
    uVar15 = uVar15 & 0x8080808080808080;
    do {
      for (; uVar15 == 0; uVar15 = uVar15 & 0x8080808080808080) {
        puVar11 = puVar11 + -0x28;
        uVar15 = NEON_cmge(*puVar12,0,1);
        puVar12 = puVar12 + 1;
      }
      uVar16 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      iVar4 = (int)((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
      lVar7 = puVar11[(long)-iVar4 * 5 + -3];
      if (lVar7 != 0) {
        lVar14 = puVar11[(long)-iVar4 * 5 + -1];
        if (lVar14 != 0) {
          puVar13 = (undefined8 *)puVar11[(long)-iVar4 * 5 + -4];
          puVar9 = puVar13 + 1;
          uVar16 = NEON_cmge(*puVar13,0,1);
          uVar16 = uVar16 & 0x8080808080808080;
          do {
            for (; uVar16 == 0; uVar16 = uVar16 & 0x8080808080808080) {
              puVar13 = puVar13 + -0x60;
              uVar16 = NEON_cmge(*puVar9,0,1);
              puVar9 = puVar9 + 1;
            }
            uVar1 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
            iVar5 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
            if (0x18 < *(byte *)(puVar13 + (long)-iVar5 * 0xc + -6)) {
              plVar6 = (long *)puVar13[(long)-iVar5 * 0xc + -5];
              do {
                lVar8 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar8 + -1 == 0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 00703180 to 00703183 has its CatchHandler @ 00703234 */
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
              }
            }
            if (puVar13[(long)-iVar5 * 0xc + -9] != 0) {
              free((void *)puVar13[(long)-iVar5 * 0xc + -8]);
            }
            lVar14 = lVar14 + -1;
            uVar16 = uVar16 - 1 & uVar16;
          } while (lVar14 != 0);
        }
        if (lVar7 * 0x61 != -0x69) {
          free((void *)(puVar11[(long)-iVar4 * 5 + -4] + lVar7 * -0x60 + -0x60));
        }
      }
      lVar10 = lVar10 + -1;
      uVar15 = uVar15 - 1 & uVar15;
    } while (lVar10 != 0);
    uVar15 = param_1[1];
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      memset((void *)*param_1,0xff,uVar15 + 9);
      if (7 < uVar15) {
        uVar15 = (uVar15 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar15;
    param_1[3] = 0;
  }
  return;
}


// ===== 007032a8  FUN_007032a8 =====

void FUN_007032a8(long *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  
  lVar10 = param_1[3];
  if (lVar10 != 0) {
    puVar11 = (undefined8 *)*param_1;
    puVar12 = puVar11 + 1;
    uVar15 = NEON_cmge(*puVar11,0,1);
    uVar15 = uVar15 & 0x8080808080808080;
    do {
      for (; uVar15 == 0; uVar15 = uVar15 & 0x8080808080808080) {
        puVar11 = puVar11 + -0x28;
        uVar15 = NEON_cmge(*puVar12,0,1);
        puVar12 = puVar12 + 1;
      }
      uVar16 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      iVar4 = (int)((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
      lVar7 = puVar11[(long)-iVar4 * 5 + -3];
      if (lVar7 != 0) {
        lVar9 = puVar11[(long)-iVar4 * 5 + -1];
        if (lVar9 != 0) {
          puVar13 = (undefined8 *)puVar11[(long)-iVar4 * 5 + -4];
          puVar14 = puVar13 + 1;
          uVar16 = NEON_cmge(*puVar13,0,1);
          uVar16 = uVar16 & 0x8080808080808080;
          do {
            for (; uVar16 == 0; uVar16 = uVar16 & 0x8080808080808080) {
              puVar13 = puVar13 + -0x78;
              uVar16 = NEON_cmge(*puVar14,0,1);
              puVar14 = puVar14 + 1;
            }
            uVar1 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
            iVar5 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
            if (0x18 < *(byte *)(puVar13 + (long)-iVar5 * 0xf + -0xc)) {
              plVar6 = (long *)puVar13[(long)-iVar5 * 0xf + -0xb];
              do {
                lVar8 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar8 + -1 == 0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 007033d4 to 007033d7 has its CatchHandler @ 007034d8 */
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
              }
            }
            if (*(byte *)(puVar13 + (long)-iVar5 * 0xf + -9) != 0xff &&
                0x18 < *(byte *)(puVar13 + (long)-iVar5 * 0xf + -9)) {
              plVar6 = (long *)puVar13[(long)-iVar5 * 0xf + -8];
              do {
                lVar8 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar8 + -1 == 0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 00703434 to 00703437 has its CatchHandler @ 007034d0 */
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
              }
            }
            plVar6 = (long *)puVar13[(long)-iVar5 * 0xf + -4];
            if (plVar6 != (long *)0x0) {
              do {
                lVar8 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar8 + -1 == 0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 00703408 to 0070340f has its CatchHandler @ 00703518 */
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow
                          (puVar13 + (long)-iVar5 * 0xf + -4);
              }
            }
            lVar9 = lVar9 + -1;
            uVar16 = uVar16 - 1 & uVar16;
          } while (lVar9 != 0);
        }
        if (lVar7 * 0x79 != -0x81) {
          free((void *)(puVar11[(long)-iVar4 * 5 + -4] + lVar7 * -0x78 + -0x78));
        }
      }
      lVar10 = lVar10 + -1;
      uVar15 = uVar15 - 1 & uVar15;
    } while (lVar10 != 0);
    uVar15 = param_1[1];
    if (uVar15 == 0) {
      uVar15 = 0;
    }
    else {
      memset((void *)*param_1,0xff,uVar15 + 9);
      if (7 < uVar15) {
        uVar15 = (uVar15 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar15;
    param_1[3] = 0;
  }
  return;
}


// ===== 00703568  FUN_00703568 =====

void FUN_00703568(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)*param_1;
    puVar4 = puVar3 + 1;
    uVar5 = NEON_cmge(*puVar3,0,1);
    uVar5 = uVar5 & 0x8080808080808080;
    do {
      for (; uVar5 == 0; uVar5 = uVar5 & 0x8080808080808080) {
        puVar3 = puVar3 + -0x78;
        uVar5 = NEON_cmge(*puVar4,0,1);
        puVar4 = puVar4 + 1;
      }
      uVar1 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 007035d4 to 007035d7 has its CatchHandler @ 00703638 */
      FUN_007023ac(puVar3 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 0xf +
                            -0xe);
      lVar2 = lVar2 + -1;
      uVar5 = uVar5 - 1 & uVar5;
    } while (lVar2 != 0);
    uVar5 = param_1[1];
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      memset((void *)*param_1,0xff,uVar5 + 9);
      if (7 < uVar5) {
        uVar5 = (uVar5 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar5;
    param_1[3] = 0;
  }
  return;
}


// ===== 00703684  FUN_00703684 =====

void FUN_00703684(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *__s;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    __s = (undefined8 *)*param_1;
    puVar4 = __s + 1;
    uVar5 = NEON_cmge(*__s,0,1);
    uVar5 = uVar5 & 0x8080808080808080;
    puVar2 = __s;
    do {
      for (; uVar5 == 0; uVar5 = uVar5 & 0x8080808080808080) {
        uVar5 = NEON_cmge(*puVar4,0,1);
        puVar4 = puVar4 + 1;
        puVar2 = puVar2 + -0x28;
      }
      uVar1 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 007036f8 to 007036fb has its CatchHandler @ 00703760 */
      FUN_007042ac(puVar2 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 5 +
                            -4);
      lVar3 = lVar3 + -1;
      uVar5 = uVar5 - 1 & uVar5;
    } while (lVar3 != 0);
    uVar5 = param_1[1];
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      memset(__s,0xff,uVar5 + 9);
      if (7 < uVar5) {
        uVar5 = (uVar5 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar5;
    param_1[3] = 0;
  }
  return;
}


// ===== 007037ac  FUN_007037ac =====

void FUN_007037ac(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar5 = param_1[3];
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)*param_1;
    puVar7 = puVar6 + 1;
    uVar10 = NEON_cmge(*puVar6,0,1);
    uVar10 = uVar10 & 0x8080808080808080;
    do {
      for (; uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
        puVar6 = puVar6 + -0x28;
        uVar10 = NEON_cmge(*puVar7,0,1);
        puVar7 = puVar7 + 1;
      }
      uVar11 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      iVar2 = (int)((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
      lVar3 = puVar6[(long)-iVar2 * 5 + -3];
      if (lVar3 != 0) {
        lVar4 = puVar6[(long)-iVar2 * 5 + -1];
        if (lVar4 != 0) {
          puVar9 = (undefined8 *)puVar6[(long)-iVar2 * 5 + -4];
          puVar8 = puVar9 + 1;
          uVar11 = NEON_cmge(*puVar9,0,1);
          uVar11 = uVar11 & 0x8080808080808080;
          do {
            for (; uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
              puVar9 = puVar9 + -0x220;
              uVar11 = NEON_cmge(*puVar8,0,1);
              puVar8 = puVar8 + 1;
            }
            uVar1 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 007038a0 to 007038a3 has its CatchHandler @ 00703948 */
            FUN_007024a8(puVar9 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) *
                                  0x44 + -0x43);
            lVar4 = lVar4 + -1;
            uVar11 = uVar11 - 1 & uVar11;
          } while (lVar4 != 0);
        }
        if (lVar3 * 0x221 != -0x229) {
          free((void *)(puVar6[(long)-iVar2 * 5 + -4] + lVar3 * -0x220 + -0x220));
        }
      }
      lVar5 = lVar5 + -1;
      uVar10 = uVar10 - 1 & uVar10;
    } while (lVar5 != 0);
    uVar10 = param_1[1];
    if (uVar10 == 0) {
      uVar10 = 0;
    }
    else {
      memset((void *)*param_1,0xff,uVar10 + 9);
      if (7 < uVar10) {
        uVar10 = (uVar10 + 1 >> 3) * 7;
      }
    }
    param_1[2] = uVar10;
    param_1[3] = 0;
  }
  return;
}


// ===== 00703998  FUN_00703998 =====

void FUN_00703998(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar3 = param_1[7];
  if (lVar3 != 0) {
    lVar4 = param_1[3];
    uVar7 = param_1[4];
    puVar5 = (undefined8 *)param_1[5];
    do {
      puVar6 = puVar5;
      if (uVar7 == 0) {
        do {
          puVar5 = puVar6 + 1;
          lVar4 = lVar4 + -0xc0;
          uVar7 = NEON_cmge(*puVar6,0,1);
          uVar7 = uVar7 & 0x8080808080808080;
          puVar6 = puVar5;
        } while (uVar7 == 0);
        param_1[5] = (long)puVar5;
        param_1[3] = lVar4;
      }
      uVar1 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar3 = lVar3 + -1;
      uVar7 = uVar7 - 1 & uVar7;
      param_1[7] = lVar3;
      param_1[4] = uVar7;
      lVar2 = lVar4 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 0x18;
      if (*(long *)(lVar2 + -0x18) != 0) {
        free(*(void **)(lVar2 + -0x10));
      }
    } while (lVar3 != 0);
  }
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    free((void *)param_1[2]);
    return;
  }
  return;
}


// ===== 00703a6c  FUN_00703a6c =====

void FUN_00703a6c(long *param_1)

{
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    free((void *)param_1[2]);
    return;
  }
  return;
}


// ===== 00703a88  FUN_00703a88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00703a88(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  void *__dest;
  void *__src;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = _UNK_00ad5110;
  uVar6 = _DAT_00ad5108;
  puVar1 = PTR_DAT_00ad50f8;
  uVar5 = param_2[1];
  if (uVar5 == 0) {
    param_1[1] = _UNK_00ad5100;
    *param_1 = puVar1;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    return;
  }
  if (uVar5 + 1 >> 0x3d == 0) {
    uVar4 = (uVar5 + 1) * 8;
    uVar3 = uVar4 + uVar5 + 9;
    if ((CARRY8(uVar4,uVar5 + 9)) || (0x7ffffffffffffff8 < uVar3)) goto LAB_00703b28;
    if (uVar3 == 0) {
      lVar2 = 8;
LAB_00703b44:
      __dest = (void *)(lVar2 + uVar4);
      uVar3 = uVar5;
      goto LAB_00703b4c;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    lVar2 = FUN_004b25a4(uVar3,8);
    if (lVar2 != 0) goto LAB_00703b44;
    uVar3 = <hashbrown::raw::hashbrown::raw::Fallibility>::alloc_err(1,8,uVar3);
  }
  else {
LAB_00703b28:
    uVar3 = <hashbrown::raw::hashbrown::raw::Fallibility>::capacity_overflow(1);
  }
  __dest = (void *)0x0;
LAB_00703b4c:
  __src = (void *)*param_2;
  memcpy(__dest,__src,uVar3 + 9);
  memcpy((void *)((long)__dest + ~uVar3 * 8),(void *)((long)__src + ~uVar5 * 8),uVar3 * 8 + 8);
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *param_1 = __dest;
  param_1[1] = uVar3;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  return;
}


// ===== 00703b98  FUN_00703b98 =====

void FUN_00703b98(long *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  lVar7 = param_1[1];
  if (lVar7 != 0) {
    lVar8 = param_1[3];
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)*param_1;
      puVar10 = puVar9 + 1;
      uVar11 = NEON_cmge(*puVar9,0,1);
      uVar11 = uVar11 & 0x8080808080808080;
      do {
        for (; uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
          puVar9 = puVar9 + -0x18;
          uVar11 = NEON_cmge(*puVar10,0,1);
          puVar10 = puVar10 + 1;
        }
        uVar1 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar4 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (0x18 < *(byte *)(puVar9 + (long)-iVar4 * 3 + -3)) {
          plVar5 = (long *)puVar9[(long)-iVar4 * 3 + -2];
          do {
            lVar6 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        lVar8 = lVar8 + -1;
        uVar11 = uVar11 - 1 & uVar11;
      } while (lVar8 != 0);
    }
    if (lVar7 * 0x19 != -0x21) {
      free((void *)(*param_1 + lVar7 * -0x18 + -0x18));
      return;
    }
  }
  return;
}


// ===== 00703ca4  FUN_00703ca4 =====

void FUN_00703ca4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)*param_1;
      puVar5 = puVar4 + 1;
      uVar6 = NEON_cmge(*puVar4,0,1);
      uVar6 = uVar6 & 0x8080808080808080;
      do {
        for (; uVar6 == 0; uVar6 = uVar6 & 0x8080808080808080) {
          puVar4 = puVar4 + -0x20;
          uVar6 = NEON_cmge(*puVar5,0,1);
          puVar5 = puVar5 + 1;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar1 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78;
        if (*(long *)((long)puVar4 + uVar1 * -4 + -0x18) != 0) {
          free(*(void **)((long)puVar4 + uVar1 * -4 + -0x10));
        }
        lVar3 = lVar3 + -1;
        uVar6 = uVar6 - 1 & uVar6;
      } while (lVar3 != 0);
    }
    if (lVar2 * 0x21 != -0x29) {
      free((void *)(*param_1 + lVar2 * -0x20 + -0x20));
      return;
    }
  }
  return;
}


// ===== 00703d8c  FUN_00703d8c =====

void FUN_00703d8c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  if ((lVar2 != 0) && (uVar1 = lVar2 + 8U & 0xfffffffffffffff8, lVar2 + uVar1 != -9)) {
    free((void *)(*param_1 - uVar1));
    return;
  }
  return;
}


// ===== 00703dbc  FUN_00703dbc =====

void FUN_00703dbc(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    lVar4 = param_1[3];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)*param_1;
      puVar6 = puVar5 + 1;
      uVar7 = NEON_cmge(*puVar5,0,1);
      uVar7 = uVar7 & 0x8080808080808080;
      do {
        for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
          puVar5 = puVar5 + -0x30;
          uVar7 = NEON_cmge(*puVar6,0,1);
          puVar6 = puVar6 + 1;
        }
        uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (puVar5[(long)-iVar2 * 6 + -6] != 0) {
          free((void *)puVar5[(long)-iVar2 * 6 + -5]);
        }
        if (puVar5[(long)-iVar2 * 6 + -3] != 0) {
          free((void *)puVar5[(long)-iVar2 * 6 + -2]);
        }
        lVar4 = lVar4 + -1;
        uVar7 = uVar7 - 1 & uVar7;
      } while (lVar4 != 0);
    }
    if (lVar3 * 0x31 != -0x39) {
      free((void *)(*param_1 + lVar3 * -0x30 + -0x30));
      return;
    }
  }
  return;
}


// ===== 00703ec8  FUN_00703ec8 =====

void FUN_00703ec8(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)*param_1;
      puVar5 = puVar4 + 1;
      uVar6 = NEON_cmge(*puVar4,0,1);
      uVar6 = uVar6 & 0x8080808080808080;
      do {
        for (; uVar6 == 0; uVar6 = uVar6 & 0x8080808080808080) {
          puVar4 = puVar4 + -0x20;
          uVar6 = NEON_cmge(*puVar5,0,1);
          puVar5 = puVar5 + 1;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar1 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78;
        if (*(long *)((long)puVar4 + uVar1 * -4 + -0x20) != 0) {
          free(*(void **)((long)puVar4 + uVar1 * -4 + -0x18));
        }
        lVar3 = lVar3 + -1;
        uVar6 = uVar6 - 1 & uVar6;
      } while (lVar3 != 0);
    }
    if (lVar2 * 0x21 != -0x29) {
      free((void *)(*param_1 + lVar2 * -0x20 + -0x20));
      return;
    }
  }
  return;
}


// ===== 00703fac  FUN_00703fac =====

void FUN_00703fac(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    lVar4 = param_1[3];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)*param_1;
      puVar6 = puVar5 + 1;
      uVar7 = NEON_cmge(*puVar5,0,1);
      uVar7 = uVar7 & 0x8080808080808080;
      do {
        for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
          puVar5 = puVar5 + -0x18;
          uVar7 = NEON_cmge(*puVar6,0,1);
          puVar6 = puVar6 + 1;
        }
        uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (puVar5[(long)-iVar2 * 3 + -3] != 0) {
          free((void *)puVar5[(long)-iVar2 * 3 + -2]);
        }
        lVar4 = lVar4 + -1;
        uVar7 = uVar7 - 1 & uVar7;
      } while (lVar4 != 0);
    }
    if (lVar3 * 0x19 != -0x21) {
      free((void *)(*param_1 + lVar3 * -0x18 + -0x18));
      return;
    }
  }
  return;
}


// ===== 007040a0  FUN_007040a0 =====

void FUN_007040a0(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    lVar5 = param_1[3];
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)*param_1;
      puVar7 = puVar6 + 1;
      uVar8 = NEON_cmge(*puVar6,0,1);
      uVar8 = uVar8 & 0x8080808080808080;
      do {
        for (; uVar8 == 0; uVar8 = uVar8 & 0x8080808080808080) {
          puVar6 = puVar6 + -0x20;
          uVar8 = NEON_cmge(*puVar7,0,1);
          puVar7 = puVar7 + 1;
        }
        uVar2 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78;
        __ptr = *(void **)((long)puVar6 + uVar2 * -4 + -0x10);
        puVar1 = *(undefined8 **)((long)puVar6 + uVar2 * -4 + -8);
        pcVar3 = (code *)*puVar1;
        if (pcVar3 != (code *)0x0) {
                    /* try { // try from 00704134 to 0070413b has its CatchHandler @ 007041a4 */
          (*pcVar3)(__ptr);
        }
        if (puVar1[1] != 0) {
          free(__ptr);
        }
        lVar5 = lVar5 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar5 != 0);
    }
    if (lVar4 * 0x21 != -0x29) {
      free((void *)(*param_1 + lVar4 * -0x20 + -0x20));
      return;
    }
  }
  return;
}


// ===== 007041c4  FUN_007041c4 =====

void FUN_007041c4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)*param_1;
      puVar5 = puVar4 + 1;
      uVar6 = NEON_cmge(*puVar4,0,1);
      uVar6 = uVar6 & 0x8080808080808080;
      do {
        for (; uVar6 == 0; uVar6 = uVar6 & 0x8080808080808080) {
          puVar4 = puVar4 + -0xe8;
          uVar6 = NEON_cmge(*puVar5,0,1);
          puVar5 = puVar5 + 1;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar3 = lVar3 + -1;
        uVar6 = uVar6 - 1 & uVar6;
        FUN_00702244(puVar4 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) *
                              0x1d + -0x1c);
      } while (lVar3 != 0);
    }
    if (lVar2 * 0xe9 != -0xf1) {
      free((void *)(*param_1 + lVar2 * -0xe8 + -0xe8));
      return;
    }
  }
  return;
}


// ===== 007042ac  FUN_007042ac =====

void FUN_007042ac(long *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  lVar6 = param_1[1];
  if (lVar6 != 0) {
    lVar7 = param_1[3];
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)*param_1;
      puVar9 = puVar8 + 1;
      uVar10 = NEON_cmge(*puVar8,0,1);
      uVar10 = uVar10 & 0x8080808080808080;
      do {
        for (; uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
          puVar8 = puVar8 + -0x28;
          uVar10 = NEON_cmge(*puVar9,0,1);
          puVar9 = puVar9 + 1;
        }
        uVar1 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        plVar4 = (long *)puVar8[(long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 5
                                + -3];
        if (plVar4 != (long *)0x0) {
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
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        lVar7 = lVar7 + -1;
        uVar10 = uVar10 - 1 & uVar10;
      } while (lVar7 != 0);
    }
    if (lVar6 * 0x29 != -0x31) {
      free((void *)(*param_1 + lVar6 * -0x28 + -0x28));
      return;
    }
  }
  return;
}


// ===== 007043b0  FUN_007043b0 =====

void FUN_007043b0(long *param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  lVar7 = param_1[1];
  if (lVar7 != 0) {
    lVar8 = param_1[3];
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)*param_1;
      puVar10 = puVar9 + 1;
      uVar11 = NEON_cmge(*puVar9,0,1);
      uVar11 = uVar11 & 0x8080808080808080;
      do {
        for (; uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
          puVar9 = puVar9 + -0x60;
          uVar11 = NEON_cmge(*puVar10,0,1);
          puVar10 = puVar10 + 1;
        }
        uVar1 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar4 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (0x18 < *(byte *)(puVar9 + (long)-iVar4 * 0xc + -6)) {
          plVar5 = (long *)puVar9[(long)-iVar4 * 0xc + -5];
          do {
            lVar6 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 + -1 == 0) {
            DataMemoryBarrier(2,1);
                    /* try { // try from 00704464 to 00704467 has its CatchHandler @ 007044d8 */
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        if (puVar9[(long)-iVar4 * 0xc + -9] != 0) {
          free((void *)puVar9[(long)-iVar4 * 0xc + -8]);
        }
        lVar8 = lVar8 + -1;
        uVar11 = uVar11 - 1 & uVar11;
      } while (lVar8 != 0);
    }
    if (lVar7 * 0x61 != -0x69) {
      free((void *)(*param_1 + lVar7 * -0x60 + -0x60));
      return;
    }
  }
  return;
}


// ===== 007044fc  FUN_007044fc =====

void FUN_007044fc(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)*param_1;
      puVar5 = puVar4 + 1;
      uVar6 = NEON_cmge(*puVar4,0,1);
      uVar6 = uVar6 & 0x8080808080808080;
      do {
        for (; uVar6 == 0; uVar6 = uVar6 & 0x8080808080808080) {
          puVar4 = puVar4 + -0x220;
          uVar6 = NEON_cmge(*puVar5,0,1);
          puVar5 = puVar5 + 1;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar3 = lVar3 + -1;
        uVar6 = uVar6 - 1 & uVar6;
        FUN_007024a8(puVar4 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) *
                              0x44 + -0x43);
      } while (lVar3 != 0);
    }
    if (lVar2 * 0x221 != -0x229) {
      free((void *)(*param_1 + lVar2 * -0x220 + -0x220));
      return;
    }
  }
  return;
}


// ===== 007045e8  FUN_007045e8 =====

void FUN_007045e8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if ((lVar1 != 0) && (lVar1 * 9 != -0x11)) {
    free((void *)(*param_1 + lVar1 * -8 + -8));
    return;
  }
  return;
}


// ===== 00704618  FUN_00704618 =====

void FUN_00704618(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)*param_1;
      puVar5 = puVar4 + 1;
      uVar6 = NEON_cmge(*puVar4,0,1);
      uVar6 = uVar6 & 0x8080808080808080;
      do {
        for (; uVar6 == 0; uVar6 = uVar6 & 0x8080808080808080) {
          puVar4 = puVar4 + -0x78;
          uVar6 = NEON_cmge(*puVar5,0,1);
          puVar5 = puVar5 + 1;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar3 = lVar3 + -1;
        uVar6 = uVar6 - 1 & uVar6;
        FUN_007023ac(puVar4 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) * 0xf
                              + -0xe);
      } while (lVar3 != 0);
    }
    if (lVar2 * 0x79 != -0x81) {
      free((void *)(*param_1 + lVar2 * -0x78 + -0x78));
      return;
    }
  }
  return;
}


// ===== 00704700  FUN_00704700 =====

void FUN_00704700(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    lVar6 = param_1[3];
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)*param_1;
      puVar8 = puVar7 + 1;
      uVar9 = NEON_cmge(*puVar7,0,1);
      uVar9 = uVar9 & 0x8080808080808080;
      do {
        for (; uVar9 == 0; uVar9 = uVar9 & 0x8080808080808080) {
          puVar7 = puVar7 + -0x18;
          uVar9 = NEON_cmge(*puVar8,0,1);
          puVar8 = puVar8 + 1;
        }
        uVar2 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        iVar3 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
        __ptr = (void *)puVar7[(long)-iVar3 * 3 + -2];
        puVar1 = (undefined8 *)puVar7[(long)-iVar3 * 3 + -1];
        pcVar4 = (code *)*puVar1;
        if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00704798 to 0070479f has its CatchHandler @ 00704814 */
          (*pcVar4)(__ptr);
        }
        if (puVar1[1] != 0) {
          free(__ptr);
        }
        lVar6 = lVar6 + -1;
        uVar9 = uVar9 - 1 & uVar9;
      } while (lVar6 != 0);
    }
    if (lVar5 * 0x19 != -0x21) {
      free((void *)(*param_1 + lVar5 * -0x18 + -0x18));
      return;
    }
  }
  return;
}


// ===== 00704834  FUN_00704834 =====

void FUN_00704834(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  if ((lVar2 != 0) && (uVar1 = lVar2 * 4 + 0xbU & 0xfffffffffffffff8, lVar2 + uVar1 != -9)) {
    free((void *)(*param_1 - uVar1));
    return;
  }
  return;
}


// ===== 00704868  FUN_00704868 =====

void FUN_00704868(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = param_1[3];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)*param_1;
      puVar5 = puVar4 + 1;
      uVar6 = NEON_cmge(*puVar4,0,1);
      uVar6 = uVar6 & 0x8080808080808080;
      do {
        for (; uVar6 == 0; uVar6 = uVar6 & 0x8080808080808080) {
          puVar4 = puVar4 + -0x98;
          uVar6 = NEON_cmge(*puVar5,0,1);
          puVar5 = puVar5 + 1;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar3 = lVar3 + -1;
        uVar6 = uVar6 - 1 & uVar6;
        FUN_00702aac(puVar4 + (long)-(int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) *
                              0x13 + -0x13);
      } while (lVar3 != 0);
    }
    if (lVar2 * 0x99 != -0xa1) {
      free((void *)(*param_1 + lVar2 * -0x98 + -0x98));
      return;
    }
  }
  return;
}


// ===== 00704950  FUN_00704950 =====

void FUN_00704950(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00704968  FUN_00704968 =====

void FUN_00704968(undefined8 param_1)

{
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
                    /* try { // try from 00704984 to 0070498b has its CatchHandler @ 007049bc */
  <std::backtrace::[2]::std::backtrace::Backtrace>::capture(&local_60);
  uStack_88 = uStack_58;
  local_90 = local_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  local_70 = local_40;
  FUN_00704c18(param_1,&local_90);
  return;
}


// ===== 007049dc  FUN_007049dc =====

void FUN_007049dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [48];
  
  <std::backtrace::[2]::std::backtrace::Backtrace>::capture(auStack_50);
  FUN_00704cbc(param_1,param_2,auStack_50);
  return;
}


// ===== 00704a1c  FUN_00704a1c =====

void FUN_00704a1c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar7 = param_3[5];
  uVar6 = param_3[4];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x48,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[7] = param_1;
    puVar1[6] = uVar7;
    puVar1[8] = param_2;
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_00ad5208;
    return;
  }
                    /* try { // try from 00704a8c to 00704a97 has its CatchHandler @ 00704a9c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x48);
}


// ===== 00704ac4  FUN_00704ac4 =====

void FUN_00704ac4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = param_2[1];
  uVar3 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar2 = param_1[2];
  uVar6 = param_1[1];
  uVar4 = *param_1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x50,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar7;
    puVar1[2] = uVar5;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[7] = uVar4;
    puVar1[6] = uVar10;
    puVar1[9] = uVar2;
    puVar1[8] = uVar6;
    puVar1[1] = uVar3;
    *puVar1 = &PTR_FUN_00ad5238;
    return;
  }
                    /* try { // try from 00704b38 to 00704b43 has its CatchHandler @ 00704b48 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x50);
}


// ===== 00704b70  FUN_00704b70 =====

void FUN_00704b70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar7 = param_3[5];
  uVar6 = param_3[4];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x48,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[7] = param_1;
    puVar1[6] = uVar7;
    puVar1[8] = param_2;
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_00ad5268;
    return;
  }
                    /* try { // try from 00704be0 to 00704beb has its CatchHandler @ 00704bf0 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x48);
}


// ===== 00704c18  FUN_00704c18 =====

void FUN_00704c18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = param_2[1];
  uVar3 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar2 = param_1[2];
  uVar6 = param_1[1];
  uVar4 = *param_1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x50,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar7;
    puVar1[2] = uVar5;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[7] = uVar4;
    puVar1[6] = uVar10;
    puVar1[9] = uVar2;
    puVar1[8] = uVar6;
    puVar1[1] = uVar3;
    *puVar1 = &PTR_FUN_00ad51a8;
    return;
  }
                    /* try { // try from 00704c94 to 00704c9f has its CatchHandler @ 00704ca4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x50);
}


// ===== 00704cbc  FUN_00704cbc =====

void FUN_00704cbc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar7 = param_3[5];
  uVar6 = param_3[4];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x48,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[7] = param_1;
    puVar1[6] = uVar7;
    puVar1[8] = param_2;
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_00ad51d8;
    return;
  }
                    /* try { // try from 00704d2c to 00704d37 has its CatchHandler @ 00704d3c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x48);
}


// ===== 00704d64  FUN_00704d64 =====

void FUN_00704d64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = param_2[1];
  uVar2 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  uVar9 = param_2[5];
  uVar8 = param_2[4];
  uVar5 = param_1[1];
  uVar3 = *param_1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x48,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar6;
    puVar1[2] = uVar4;
    puVar1[5] = uVar8;
    puVar1[4] = uVar7;
    puVar1[7] = uVar3;
    puVar1[6] = uVar9;
    puVar1[8] = uVar5;
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_00ad5118;
    return;
  }
                    /* try { // try from 00704dd4 to 00704ddf has its CatchHandler @ 00704de4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x48);
}


// ===== 00704e0c  FUN_00704e0c =====

void FUN_00704e0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = param_2[1];
  uVar3 = *param_2;
  uVar11 = param_2[3];
  uVar9 = param_2[2];
  uVar2 = param_1[4];
  uVar7 = param_2[5];
  uVar4 = param_2[4];
  uVar12 = param_1[1];
  uVar10 = *param_1;
  uVar8 = param_1[3];
  uVar5 = param_1[2];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x60,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = uVar4;
    puVar1[4] = uVar11;
    puVar1[7] = uVar10;
    puVar1[6] = uVar7;
    puVar1[9] = uVar5;
    puVar1[8] = uVar12;
    puVar1[0xb] = uVar2;
    puVar1[10] = uVar8;
    puVar1[1] = uVar3;
    *puVar1 = &PTR_FUN_00ad5148;
    puVar1[3] = uVar9;
    puVar1[2] = uVar6;
    return;
  }
                    /* try { // try from 00704e8c to 00704e97 has its CatchHandler @ 00704e9c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x60);
}


// ===== 00704eb4  FUN_00704eb4 =====

void FUN_00704eb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = param_2[1];
  uVar3 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar2 = param_1[2];
  uVar6 = param_1[1];
  uVar4 = *param_1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x50,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar7;
    puVar1[2] = uVar5;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[7] = uVar4;
    puVar1[6] = uVar10;
    puVar1[9] = uVar2;
    puVar1[8] = uVar6;
    puVar1[1] = uVar3;
    *puVar1 = &PTR_FUN_00ad5178;
    return;
  }
                    /* try { // try from 00704f30 to 00704f3b has its CatchHandler @ 00704f40 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x50);
}


// ===== 00704f58  FUN_00704f58 =====

void FUN_00704f58(undefined2 param_1,undefined2 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
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
  undefined4 uStack_44;
  
  lVar5 = *param_3;
  if (lVar5 == -3) {
    plVar3 = (long *)0x0;
  }
  else {
    lVar1 = param_3[1];
    lVar2 = param_3[2];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar3 = (long *)FUN_004b25a4(0x18,8);
    if (plVar3 == (long *)0x0) {
                    /* try { // try from 00705024 to 0070502f has its CatchHandler @ 00705034 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
    *plVar3 = lVar5;
    plVar3[1] = lVar1;
    plVar3[2] = lVar2;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar4 = (undefined8 *)FUN_004b25a4(0x70,8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[7] = uStack_78;
    puVar4[6] = local_80;
    puVar4[9] = uStack_68;
    puVar4[8] = uStack_70;
    puVar4[0xb] = plVar3;
    puVar4[10] = local_60;
    puVar4[0xd] = CONCAT44(uStack_44,CONCAT22(param_2,param_1));
    puVar4[0xc] = &PTR_FUN_00ad75f0;
    puVar4[1] = uStack_a8;
    *puVar4 = 0xffffffffffffffff;
    puVar4[3] = uStack_98;
    puVar4[2] = local_a0;
    puVar4[5] = uStack_88;
    puVar4[4] = uStack_90;
    return;
  }
                    /* try { // try from 00705014 to 0070501f has its CatchHandler @ 00705058 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 00705070  FUN_00705070 =====

void FUN_00705070(undefined2 param_1,undefined2 param_2,char param_3,char param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_34;
  
  if (param_3 == -1) {
    pcVar1 = (char *)0x0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    pcVar1 = (char *)FUN_004b25a4(2,1);
    if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(1,2);
    }
    *pcVar1 = param_3;
    pcVar1[1] = param_4;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x70,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[7] = uStack_68;
    puVar2[6] = local_70;
    puVar2[9] = uStack_58;
    puVar2[8] = uStack_60;
    puVar2[0xb] = pcVar1;
    puVar2[10] = local_50;
    puVar2[0xd] = CONCAT44(uStack_34,CONCAT22(param_2,param_1));
    puVar2[0xc] = &DAT_00ad7668;
    puVar2[1] = uStack_98;
    *puVar2 = 0xffffffffffffffff;
    puVar2[3] = uStack_88;
    puVar2[2] = local_90;
    puVar2[5] = uStack_78;
    puVar2[4] = uStack_80;
    return;
  }
                    /* try { // try from 00705128 to 00705133 has its CatchHandler @ 00705144 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 0070515c  FUN_0070515c =====

undefined1  [16] FUN_0070515c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &UNK_00ad5300;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 0070516c  FUN_0070516c =====

undefined1  [16] FUN_0070516c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &UNK_00ad5378;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 0070517c  FUN_0070517c =====

undefined1  [16] FUN_0070517c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &UNK_00ad53f0;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 0070518c  FUN_0070518c =====

undefined1  [16] FUN_0070518c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &PTR_FUN_00ad5468;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 0070519c  FUN_0070519c =====

undefined1  [16] FUN_0070519c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &UNK_00ad54e0;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 007051ac  FUN_007051ac =====

undefined1  [16] FUN_007051ac(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_00ad5558;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 007051bc  FUN_007051bc =====

undefined1  [16] FUN_007051bc(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &PTR_FUN_00ad55d0;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 007051cc  FUN_007051cc =====

undefined1  [16] FUN_007051cc(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &PTR_FUN_00ad5648;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 007051dc  FUN_007051dc =====

void FUN_007051dc(void)

{
  return;
}


// ===== 007051e8  FUN_007051e8 =====

void FUN_007051e8(void)

{
  return;
}


// ===== 007051f4  FUN_007051f4 =====

void FUN_007051f4(void)

{
  return;
}


// ===== 00705200  FUN_00705200 =====

void FUN_00705200(void)

{
  return;
}


// ===== 0070520c  FUN_0070520c =====

void FUN_0070520c(void)

{
  return;
}


// ===== 00705218  FUN_00705218 =====

void FUN_00705218(void)

{
  return;
}


// ===== 00705224  FUN_00705224 =====

void FUN_00705224(void)

{
  return;
}


// ===== 00705230  FUN_00705230 =====

void FUN_00705230(void)

{
  return;
}


// ===== 0070523c  FUN_0070523c =====

long FUN_0070523c(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != -0x59a0dc0524765b0a || param_2[1] != -0x4f7e472c59c3b367) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0070527c  FUN_0070527c =====

long FUN_0070527c(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != -0x119351643378db84 || param_2[1] != 0x16fa802d90bf615b) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007052bc  FUN_007052bc =====

long FUN_007052bc(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != -0x4201d6fb24b6e108 || param_2[1] != 0x13540c38b4cc45cf) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 007052fc  FUN_007052fc =====

long FUN_007052fc(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != 0x30915f23ce71e722 || param_2[1] != 0x6ff54c2bcf822e8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0070533c  FUN_0070533c =====

long FUN_0070533c(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != -0x4609fd23a01609a4 || param_2[1] != 0x24c161f26c70c1f1) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0070537c  FUN_0070537c =====

long FUN_0070537c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (param_2[1] == 0x24c161f26c70c1f1 && *param_2 == -0x4609fd23a01609a4) {
    lVar1 = param_1 + 0x38;
  }
  lVar2 = param_1 + 0x48;
  if (param_2[1] != -0x456af1fd114bf5de || *param_2 != -0x532835b2da60a2c2) {
    lVar2 = lVar1;
  }
  return lVar2;
}


// ===== 007053e4  FUN_007053e4 =====

long FUN_007053e4(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (param_2[1] == 0x24c161f26c70c1f1 && *param_2 == -0x4609fd23a01609a4) {
    lVar1 = param_1 + 0x38;
  }
  lVar2 = param_1 + 0x48;
  if (param_2[1] != -0x256b34bd2d5132e7 || *param_2 != -0x60b66802a91ca949) {
    lVar2 = lVar1;
  }
  return lVar2;
}


// ===== 0070544c  FUN_0070544c =====

void FUN_0070544c(byte *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*param_1 != 0xff) && (0x18 < *param_1)) {
    plVar3 = *(long **)(param_1 + 8);
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      return;
    }
  }
  return;
}


// ===== 00705484  FUN_00705484 =====

void FUN_00705484(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    plVar3 = (long *)param_1[1];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 1);
      }
    }
    plVar3 = (long *)param_1[3];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        return;
      }
    }
  }
  return;
}


// ===== 00705504  FUN_00705504 =====

void FUN_00705504(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 2) {
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[4];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[6];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[8];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 8);
        return;
      }
    }
  }
  return;
}


// ===== 007055d0  FUN_007055d0 =====

void FUN_007055d0(long param_1)

{
  if (*(long *)(param_1 + 8) == 2) {
    FUN_0071d624(param_1 + 0x10);
    return;
  }
  return;
}


// ===== 007055e8  FUN_007055e8 =====

void FUN_007055e8(long param_1)

{
  if (*(long *)(param_1 + 8) == 2) {
    FUN_0071d624(param_1 + 0x10);
    return;
  }
  return;
}


// ===== 00705600  FUN_00705600 =====

void FUN_00705600(long param_1)

{
  if (*(long *)(param_1 + 8) == 2) {
                    /* try { // try from 0070561c to 00705623 has its CatchHandler @ 0070564c */
    FUN_0071d624(param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    free(*(void **)(param_1 + 0x40));
    return;
  }
  return;
}


// ===== 0070566c  FUN_0070566c =====

void FUN_0070566c(long param_1)

{
  if (*(long *)(param_1 + 8) == 2) {
                    /* try { // try from 00705688 to 0070568f has its CatchHandler @ 007056a0 */
    FUN_0071d624(param_1 + 0x10);
  }
  FUN_00707298(param_1 + 0x38);
  return;
}


// ===== 007056b8  FUN_007056b8 =====

void FUN_007056b8(long param_1)

{
  ulong uVar1;
  long local_28;
  
  if (*(long *)(param_1 + 8) == 2) {
                    /* try { // try from 007056d8 to 007056df has its CatchHandler @ 0070574c */
    FUN_0071d624(param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x38) == -1) {
    uVar1 = *(ulong *)(param_1 + 0x40) & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_28 = *(ulong *)(param_1 + 0x40) - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    free(*(void **)(param_1 + 0x40));
    return;
  }
  return;
}


// ===== 00705764  FUN_00705764 =====

void FUN_00705764(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0070577c  FUN_0070577c =====

void FUN_0070577c(long *param_1)

{
  if (*param_1 != -1) {
    FUN_007077e0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0070579c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
  return;
}


// ===== 007057a0  FUN_007057a0 =====

void FUN_007057a0(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007057dc to 007057df has its CatchHandler @ 00705828 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0070587c  FUN_0070587c =====

void FUN_0070587c(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 0070589c to 007058a3 has its CatchHandler @ 007058c0 */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x007058bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 007058e4  FUN_007058e4 =====

void FUN_007058e4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = ((ulong)(param_2 - param_1) >> 5) + 1;
  while (lVar1 = lVar1 + -1, lVar1 != 0) {
                    /* try { // try from 0070590c to 0070590f has its CatchHandler @ 00705928 */
    FUN_00707018(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}


// ===== 00705954  FUN_00705954 =====

void FUN_00705954(undefined8 *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  __ptr = (void *)*param_1;
  lVar2 = param_1[2];
  lVar3 = param_1[1] + 1;
  pvVar1 = __ptr;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00705984 to 00705987 has its CatchHandler @ 007059cc */
    FUN_00707018(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x20);
  }
  if (lVar2 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00705a10  FUN_00705a10 =====

void FUN_00705a10(undefined8 *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  __ptr = (void *)*param_1;
  lVar2 = param_1[2];
  lVar3 = param_1[1] + 1;
  pvVar1 = __ptr;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00705a40 to 00705a43 has its CatchHandler @ 00705a88 */
    FUN_00707018(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x20);
  }
  if (lVar2 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00705acc  FUN_00705acc =====

void FUN_00705acc(undefined8 *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  __ptr = (void *)*param_1;
  lVar2 = param_1[2];
  lVar3 = param_1[1] + 1;
  pvVar1 = __ptr;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00705afc to 00705aff has its CatchHandler @ 00705b40 */
    FUN_00707018(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x20);
  }
  if (lVar2 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00705b80  FUN_00705b80 =====

void FUN_00705b80(undefined8 *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  __ptr = (void *)*param_1;
  lVar2 = param_1[2];
  lVar3 = param_1[1] + 1;
  pvVar1 = __ptr;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00705bb0 to 00705bb3 has its CatchHandler @ 00705bf8 */
    FUN_00707018(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x20);
  }
  if (lVar2 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00705c3c  FUN_00705c3c =====

void FUN_00705c3c(undefined8 *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  __ptr = (void *)*param_1;
  lVar2 = param_1[2];
  lVar3 = param_1[1] + 1;
  pvVar1 = __ptr;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00705c6c to 00705c6f has its CatchHandler @ 00705cb4 */
    FUN_00707018(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x20);
  }
  if (lVar2 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00705cf8  FUN_00705cf8 =====

void FUN_00705cf8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  lVar6 = param_1[1];
  uVar3 = param_1[3] - lVar6;
  if (uVar3 != 0) {
    uVar7 = 0;
    do {
      puVar5 = (ulong *)(lVar6 + uVar7 * 0xf0);
      lVar1 = 2;
      if (1 < *puVar5) {
        lVar1 = *puVar5 - 2;
      }
      if (lVar1 == 2) {
        FUN_00707408(puVar5);
      }
      else if ((lVar1 == 1) && (uVar4 = puVar5[3], uVar4 != 0)) {
        uVar9 = puVar5[5];
        if (uVar9 != 0) {
          puVar8 = (undefined8 *)puVar5[2];
          puVar10 = puVar8 + 1;
          uVar11 = NEON_cmge(*puVar8,0,1);
          uVar11 = uVar11 & 0x8080808080808080;
          do {
            for (; uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
              puVar8 = puVar8 + -0xe8;
              uVar11 = NEON_cmge(*puVar10,0,1);
              puVar10 = puVar10 + 1;
            }
            uVar2 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 00705df4 to 00705df7 has its CatchHandler @ 00705e9c */
            FUN_00702244(puVar8 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                                  0x1d + -0x1c);
            uVar9 = uVar9 - 1;
            uVar11 = uVar11 - 1 & uVar11;
          } while (uVar9 != 0);
        }
        if (uVar4 * 0xe9 != -0xf1) {
          free((void *)(puVar5[2] + uVar4 * -0xe8 + -0xe8));
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar3 / 0xf0);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00705eec  FUN_00705eec =====

void FUN_00705eec(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  
  lVar6 = param_1[1];
  uVar3 = param_1[3] - lVar6;
  if (uVar3 != 0) {
    uVar7 = 0;
    do {
      puVar8 = (ulong *)(lVar6 + uVar7 * 0x68);
      lVar5 = 2;
      if (1 < *puVar8) {
        lVar5 = *puVar8 - 2;
      }
      if (lVar5 == 2) {
        if (0x18 < (byte)puVar8[5]) {
          plVar4 = (long *)puVar8[6];
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
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        if (puVar8[2] != 0) {
          free((void *)puVar8[3]);
        }
      }
      else if (lVar5 == 1) {
                    /* try { // try from 00705f80 to 00705f87 has its CatchHandler @ 00706028 */
        FUN_007043b0(puVar8 + 2);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar3 / 0x68);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00706070  FUN_00706070 =====

void FUN_00706070(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = ((ulong)(param_1[3] - param_1[1]) >> 7) + 1;
  lVar1 = param_1[1];
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007060a8 to 007060ab has its CatchHandler @ 007060f0 */
    FUN_00706640(lVar1);
    lVar1 = lVar1 + 0x80;
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00706134  FUN_00706134 =====

void FUN_00706134(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = param_1[1];
  uVar4 = param_1[3] - lVar7;
  if (uVar4 != 0) {
    uVar8 = 0;
    do {
      lVar5 = lVar7 + uVar8 * 0x30;
      bVar1 = *(byte *)(lVar5 + 0x28);
      cVar2 = '\x02';
      if (1 < bVar1) {
        cVar2 = bVar1 - 2;
      }
      if (cVar2 == '\x02') {
        plVar6 = *(long **)(lVar5 + 0x18);
        if (plVar6 != (long *)0x0) {
          do {
            lVar5 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
      }
      else if (cVar2 == '\x01') {
                    /* try { // try from 007061c0 to 007061c3 has its CatchHandler @ 00706238 */
        FUN_007042ac();
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar4 / 0x30);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00706280  FUN_00706280 =====

void FUN_00706280(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar6 = param_1[1];
  uVar3 = param_1[3] - lVar6;
  if (uVar3 != 0) {
    uVar8 = 0;
    do {
      puVar5 = (ulong *)(lVar6 + uVar8 * 0x228);
      lVar1 = 2;
      if (1 < *puVar5) {
        lVar1 = *puVar5 - 2;
      }
      if (lVar1 == 2) {
                    /* try { // try from 007062f0 to 007062f7 has its CatchHandler @ 00706434 */
        FUN_007074d4(puVar5);
      }
      else if ((lVar1 == 1) && (uVar4 = puVar5[2], uVar4 != 0)) {
        uVar10 = puVar5[4];
        if (uVar10 != 0) {
          puVar7 = (undefined8 *)puVar5[1];
          puVar9 = puVar7 + 1;
          uVar11 = NEON_cmge(*puVar7,0,1);
          uVar11 = uVar11 & 0x8080808080808080;
          do {
            for (; uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
              puVar7 = puVar7 + -0x220;
              uVar11 = NEON_cmge(*puVar9,0,1);
              puVar9 = puVar9 + 1;
            }
            uVar2 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 00706388 to 0070638b has its CatchHandler @ 00706438 */
            FUN_007024a8(puVar7 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                                  0x44 + -0x43);
            uVar10 = uVar10 - 1;
            uVar11 = uVar11 - 1 & uVar11;
          } while (uVar10 != 0);
        }
        if (uVar4 * 0x221 != -0x229) {
          free((void *)(puVar5[1] + uVar4 * -0x220 + -0x220));
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar3 / 0x228);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00706488  FUN_00706488 =====

void FUN_00706488(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar1 = 2;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if (lVar1 == 1) {
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      uVar4 = param_1[5];
      if (uVar4 != 0) {
        puVar5 = (undefined8 *)param_1[2];
        puVar6 = puVar5 + 1;
        uVar7 = NEON_cmge(*puVar5,0,1);
        uVar7 = uVar7 & 0x8080808080808080;
        do {
          for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
            puVar5 = puVar5 + -0xe8;
            uVar7 = NEON_cmge(*puVar6,0,1);
            puVar6 = puVar6 + 1;
          }
          uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 - 1;
          uVar7 = uVar7 - 1 & uVar7;
          FUN_00702244(puVar5 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                                0x1d + -0x1c);
        } while (uVar4 != 0);
      }
      if (uVar3 * 0xe9 != -0xf1) {
        free((void *)(param_1[2] + uVar3 * -0xe8 + -0xe8));
        return;
      }
    }
  }
  else if (lVar1 == 2) {
    FUN_00707408(param_1);
    return;
  }
  return;
}


// ===== 007065ac  FUN_007065ac =====

void FUN_007065ac(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = 2;
  if (1 < *param_1) {
    lVar4 = *param_1 - 2;
  }
  if (lVar4 == 1) {
    FUN_007043b0(param_1 + 2);
    return;
  }
  if (lVar4 == 2) {
    if (0x18 < (byte)param_1[5]) {
      plVar3 = (long *)param_1[6];
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 6);
      }
    }
    if (param_1[2] != 0) {
      free((void *)param_1[3]);
      return;
    }
  }
  return;
}


// ===== 00706640  FUN_00706640 =====

void FUN_00706640(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = 2;
  if (1 < *param_1) {
    lVar4 = *param_1 - 2;
  }
  if (lVar4 == 1) {
    FUN_00704618(param_1 + 2);
    return;
  }
  if (lVar4 == 2) {
    if (0x18 < (byte)param_1[2]) {
      plVar3 = (long *)param_1[3];
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 3);
      }
    }
    if (((byte)param_1[5] != 0xff) && (0x18 < (byte)param_1[5])) {
      plVar3 = (long *)param_1[6];
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 6);
      }
    }
    plVar3 = (long *)param_1[10];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        return;
      }
    }
  }
  return;
}


// ===== 00706734  FUN_00706734 =====

void FUN_00706734(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  cVar1 = '\x02';
  if (1 < *(byte *)(param_1 + 0x28)) {
    cVar1 = *(byte *)(param_1 + 0x28) - 2;
  }
  if (cVar1 == '\x01') {
    FUN_007042ac();
    return;
  }
  if (cVar1 == '\x02') {
    plVar3 = *(long **)(param_1 + 0x18);
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        return;
      }
    }
  }
  return;
}


// ===== 00706784  FUN_00706784 =====

void FUN_00706784(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar1 = 2;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if (lVar1 == 1) {
    uVar3 = param_1[2];
    if (uVar3 != 0) {
      uVar4 = param_1[4];
      if (uVar4 != 0) {
        puVar5 = (undefined8 *)param_1[1];
        puVar6 = puVar5 + 1;
        uVar7 = NEON_cmge(*puVar5,0,1);
        uVar7 = uVar7 & 0x8080808080808080;
        do {
          for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
            puVar5 = puVar5 + -0x220;
            uVar7 = NEON_cmge(*puVar6,0,1);
            puVar6 = puVar6 + 1;
          }
          uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar4 = uVar4 - 1;
          uVar7 = uVar7 - 1 & uVar7;
          FUN_007024a8(puVar5 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                                0x44 + -0x43);
        } while (uVar4 != 0);
      }
      if (uVar3 * 0x221 != -0x229) {
        free((void *)(param_1[1] + uVar3 * -0x220 + -0x220));
        return;
      }
    }
  }
  else if (lVar1 == 2) {
    FUN_007074d4(param_1);
    return;
  }
  return;
}


// ===== 007068ac  FUN_007068ac =====

void FUN_007068ac(ulong *param_1)

{
  void *__ptr;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  if (uVar2 == (uVar2 != 0)) {
    FUN_00707408(param_1);
    return;
  }
  if (uVar2 - (uVar2 != 0) == 2) {
    __ptr = (void *)param_1[2];
    lVar3 = param_1[3] + 1;
    pvVar1 = __ptr;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 007068f8 to 007068fb has its CatchHandler @ 0070695c */
      FUN_0076276c(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0xe0);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007069a4  FUN_007069a4 =====

void FUN_007069a4(ulong *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = *param_1;
  if (uVar3 == (uVar3 != 0)) {
    if (0x18 < (byte)param_1[5]) {
      plVar4 = (long *)param_1[6];
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    if (param_1[2] != 0) {
      free((void *)param_1[3]);
      return;
    }
  }
  else if (uVar3 - (uVar3 != 0) == 2) {
    __ptr = (void *)param_1[2];
    uVar3 = param_1[3];
    if (uVar3 != 0) {
      uVar6 = 0;
      do {
        if (0x18 < *(byte *)((long)__ptr + uVar6 * 0x58 + 0x28)) {
          plVar4 = *(long **)((long)__ptr + uVar6 * 0x58 + 0x30);
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
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        if (*(long *)((long)__ptr + uVar6 * 0x58 + 0x10) != 0) {
          free(*(void **)((long)__ptr + uVar6 * 0x58 + 0x18));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar3);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00706ae0  FUN_00706ae0 =====

void FUN_00706ae0(ulong *param_1)

{
  void *__ptr;
  byte bVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  uVar4 = *param_1;
  if (uVar4 == (uVar4 != 0)) {
    if (0x18 < (byte)param_1[2]) {
      plVar5 = (long *)param_1[3];
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    if (((byte)param_1[5] != 0xff) && (0x18 < (byte)param_1[5])) {
      plVar5 = (long *)param_1[6];
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar5 = (long *)param_1[10];
    if (plVar5 != (long *)0x0) {
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 10);
        return;
      }
    }
  }
  else if (uVar4 - (uVar4 != 0) == 2) {
    __ptr = (void *)param_1[2];
    uVar4 = param_1[3];
    if (uVar4 != 0) {
      uVar8 = 0;
      do {
        if (0x18 < *(byte *)((long)__ptr + uVar8 * 0x70 + 0x10)) {
          plVar5 = *(long **)((long)__ptr + uVar8 * 0x70 + 0x18);
          do {
            lVar6 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        bVar1 = *(byte *)((long)__ptr + uVar8 * 0x70 + 0x28);
        if (bVar1 != 0xff && 0x18 < bVar1) {
          plVar5 = *(long **)((long)__ptr + uVar8 * 0x70 + 0x30);
          do {
            lVar6 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        puVar7 = (undefined8 *)((long)__ptr + uVar8 * 0x70 + 0x50);
        plVar5 = (long *)*puVar7;
        if (plVar5 != (long *)0x0) {
          do {
            lVar6 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(puVar7);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar4);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00706cac  FUN_00706cac =====

void FUN_00706cac(ulong *param_1)

{
  void *__ptr;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  if (uVar2 == (uVar2 != 0)) {
    FUN_007074d4(param_1);
    return;
  }
  if (uVar2 - (uVar2 != 0) == 2) {
    __ptr = (void *)param_1[2];
    lVar3 = param_1[3] + 1;
    pvVar1 = __ptr;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00706cf8 to 00706cfb has its CatchHandler @ 00706d5c */
      FUN_007628fc(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0x218);
    }
    if (param_1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00706da4  FUN_00706da4 =====

void FUN_00706da4(long *param_1)

{
  if (*param_1 == -2) {
    return;
  }
  if (*param_1 == -1) {
    FUN_00707298(param_1 + 1);
    return;
  }
                    /* try { // try from 00706de0 to 00706deb has its CatchHandler @ 00706dfc */
  FUN_00703fac(param_1 + 0xc);
  FUN_007077e0(param_1);
  return;
}


// ===== 00706e14  FUN_00706e14 =====

void FUN_00706e14(long *param_1)

{
  if (*param_1 == -2) {
    return;
  }
  if (*param_1 == -1) {
    FUN_00707298(param_1 + 1);
    return;
  }
  if (param_1[0xc] != 0) {
    free((void *)param_1[0xd]);
  }
  FUN_007077e0(param_1);
  return;
}


// ===== 00706e6c  FUN_00706e6c =====

void FUN_00706e6c(long *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*param_1 == -2) {
    return;
  }
  if (*param_1 == -1) {
    FUN_00707298(param_1 + 1);
    return;
  }
  pvVar1 = (void *)param_1[0xd];
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)((long)pvVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        free((void *)*puVar3);
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 3;
    } while (lVar2 != 0);
  }
  if (param_1[0xc] != 0) {
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x10];
  lVar2 = param_1[0x11];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)((long)pvVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        free((void *)*puVar3);
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 3;
    } while (lVar2 != 0);
  }
  if (param_1[0xf] != 0) {
    free(pvVar1);
  }
  FUN_007077e0(param_1);
  return;
}


// ===== 00706f6c  FUN_00706f6c =====

void FUN_00706f6c(undefined8 *param_1)

{
  ulong uVar1;
  long *__ptr;
  long local_28;
  
  __ptr = (long *)*param_1;
  if (*__ptr == 1) {
    uVar1 = __ptr[1] & 3;
    if (1 < uVar1 - 2 && uVar1 != 0) {
      local_28 = __ptr[1] - 1;
                    /* try { // try from 00706fd4 to 00706fdb has its CatchHandler @ 00706ffc */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if ((*__ptr == 0) && (__ptr[2] != 0)) {
    free((void *)__ptr[1]);
  }
  free(__ptr);
  return;
}


// ===== 00707018  FUN_00707018 =====

void FUN_00707018(byte *param_1)

{
  void *__ptr;
  byte bVar1;
  void *pvVar2;
  long lVar3;
  
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      if (*(long *)(param_1 + 8) != 0) {
        free(*(void **)(param_1 + 0x10));
        return;
      }
    }
    else {
      if (bVar1 != 4) {
        FUN_0074a9a8(param_1 + 8);
        return;
      }
      __ptr = *(void **)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18) + 1;
      pvVar2 = __ptr;
      while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 00707074 to 00707077 has its CatchHandler @ 007070e4 */
        FUN_00762098(pvVar2);
        pvVar2 = (void *)((long)pvVar2 + 0x20);
      }
      if (*(long *)(param_1 + 8) != 0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}


// ===== 00707128  FUN_00707128 =====

void FUN_00707128(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 00707138 to 0070713f has its CatchHandler @ 00707158 */
  FUN_00707174(__ptr);
  free(__ptr);
  return;
}


// ===== 00707174  FUN_00707174 =====

void FUN_00707174(long *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[0xb];
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[0xc];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0070719c to 007071a3 has its CatchHandler @ 007071f0 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00707230  FUN_00707230 =====

void FUN_00707230(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00707248  FUN_00707248 =====

void FUN_00707248(ulong *param_1)

{
  ulong uVar1;
  long local_18;
  
  uVar1 = *param_1 & 3;
  if (uVar1 - 2 < 2 || uVar1 == 0) {
    return;
  }
  local_18 = *param_1 - 1;
  <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  return;
}


// ===== 00707298  FUN_00707298 =====

void FUN_00707298(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *__ptr;
  long local_28;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 2;
  }
  if ((long)uVar2 < 2) {
    if (uVar2 == 0) {
      __ptr = (void *)param_1[1];
                    /* try { // try from 00707330 to 00707337 has its CatchHandler @ 00707380 */
      FUN_00707174(__ptr);
      free(__ptr);
      return;
    }
    if (uVar2 == 1) {
      FUN_00706f6c(param_1 + 1);
      return;
    }
  }
  else if (uVar2 == 2) {
    if (uVar1 != 0) {
      free((void *)param_1[1]);
      return;
    }
  }
  else if (uVar2 == 3) {
    uVar2 = param_1[1] & 3;
    if ((1 < uVar2 - 2) && (uVar2 != 0)) {
      local_28 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  return;
}


// ===== 0070739c  FUN_0070739c =====

void FUN_0070739c(long *param_1)

{
  ulong uVar1;
  long local_18;
  
  if (*param_1 == -1) {
    uVar1 = param_1[1] & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_18 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
      return;
    }
  }
  else if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00707408  FUN_00707408 =====

void FUN_00707408(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x40)) {
    plVar3 = *(long **)(param_1 + 0x48);
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x68);
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x88);
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = *(long **)(param_1 + 0x98);
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow((undefined8 *)(param_1 + 0x98));
      return;
    }
  }
  return;
}


// ===== 007074d4  FUN_007074d4 =====

void FUN_007074d4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (0x18 < *(byte *)(param_1 + 0x18)) {
    plVar3 = (long *)param_1[0x19];
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = (long *)param_1[0x23];
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x23);
    }
  }
  plVar3 = (long *)param_1[0x26];
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x26);
    }
  }
  plVar3 = (long *)param_1[0x28];
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x28);
    }
  }
  plVar3 = (long *)param_1[0x2a];
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x2a);
    }
  }
  plVar3 = (long *)param_1[0x2c];
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x2c);
    }
  }
  if (0x18 < *(byte *)(param_1 + 0x1b)) {
    plVar3 = (long *)param_1[0x1c];
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = (long *)param_1[0x22];
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
    DataMemoryBarrier(2,1);
                    /* try { // try from 00707628 to 0070762f has its CatchHandler @ 00707748 */
    <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::set::HashSet<smol_str::SmolStr>>>::
    drop_slow(param_1 + 0x22);
  }
  if ((*(byte *)(param_1 + 0x1e) != 0xff) && (0x18 < *(byte *)(param_1 + 0x1e))) {
    plVar3 = (long *)param_1[0x1f];
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
    }
  }
  plVar3 = (long *)param_1[0x37];
  if (plVar3 != (long *)0x0) {
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(param_1 + 0x37);
    }
  }
  if (*param_1 != 0) {
    plVar3 = (long *)param_1[1];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
    plVar3 = (long *)param_1[3];
    if (plVar3 != (long *)0x0) {
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
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
      }
    }
  }
  if ((short)param_1[0x15] != 2) {
    plVar3 = (long *)param_1[0x12];
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
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<[smol_str::SmolStr]>>::drop_slow(param_1 + 0x12);
    }
  }
  if ((param_1[0xf] != -1) && (param_1[0xf] != 0)) {
    free((void *)param_1[0x10]);
  }
  FUN_00705504(param_1 + 5);
  return;
}


// ===== 007077e0  FUN_007077e0 =====

void FUN_007077e0(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 00707810 to 00707817 has its CatchHandler @ 007078a4 */
  FUN_00766164(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00707858 to 0070785b has its CatchHandler @ 007078d4 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00707928  FUN_00707928 =====

void FUN_00707928(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  FUN_00707018(param_1 + 3);
  return;
}


// ===== 0070795c  FUN_0070795c =====

void FUN_0070795c(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *__ptr;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  char *local_1a0;
  ulong uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined8 uStack_99;
  char local_90 [8];
  undefined1 auStack_88 [40];
  
  puVar11 = (undefined8 *)param_2[1];
  lVar2 = param_2[2];
  puVar6 = (undefined8 *)param_2[3];
  __ptr = (char *)*param_2;
  pcVar8 = __ptr;
  if (puVar11 != puVar6) {
    puVar10 = (undefined8 *)((ulong)local_90 | 1);
    do {
      uStack_d8 = puVar11[0x19];
      local_e0 = puVar11[0x18];
      uStack_c8 = puVar11[0x1b];
      uStack_d0 = puVar11[0x1a];
      uStack_b8 = puVar11[0x1d];
      local_c0 = puVar11[0x1c];
      uStack_128 = puVar11[0xf];
      local_130 = puVar11[0xe];
      uStack_118 = puVar11[0x11];
      local_120 = puVar11[0x10];
      uStack_108 = puVar11[0x13];
      uStack_110 = puVar11[0x12];
      uStack_f8 = puVar11[0x15];
      local_100 = puVar11[0x14];
      uStack_e8 = puVar11[0x17];
      uStack_f0 = puVar11[0x16];
      uStack_168 = puVar11[7];
      local_170 = puVar11[6];
      uStack_158 = puVar11[9];
      uStack_160 = puVar11[8];
      uStack_148 = puVar11[0xb];
      local_150 = puVar11[10];
      uStack_138 = puVar11[0xd];
      uStack_140 = puVar11[0xc];
      uStack_188 = puVar11[3];
      lStack_190 = puVar11[2];
      uStack_178 = puVar11[5];
      local_180 = puVar11[4];
      puVar7 = puVar11 + 0x1e;
      uStack_198 = puVar11[1];
      local_1a0 = (char *)*puVar11;
      param_2[1] = puVar7;
                    /* try { // try from 00707a28 to 00707a47 has its CatchHandler @ 00707c30 */
      FUN_00744c54(local_90,&local_1a0);
      if (local_90[0] == -1) {
        FUN_00706f6c(auStack_88);
      }
      else {
        local_b0 = *puVar10;
        uStack_99 = *(undefined8 *)((long)puVar10 + 0x17);
        uVar15 = *(undefined8 *)((long)puVar10 + 0xf);
        uStack_a8 = (undefined7)puVar10[1];
        uStack_a1 = (undefined1)uVar15;
        uStack_a0 = (undefined7)((ulong)uVar15 >> 8);
        *pcVar8 = local_90[0];
        *(undefined8 *)(pcVar8 + 0x18) = uStack_99;
        *(undefined8 *)(pcVar8 + 0x10) = uVar15;
        *(ulong *)(pcVar8 + 9) = CONCAT17(uStack_a1,uStack_a8);
        *(undefined8 *)(pcVar8 + 1) = local_b0;
        pcVar8 = pcVar8 + 0x20;
      }
      puVar11 = puVar7;
    } while (puVar7 != puVar6);
    puVar11 = (undefined8 *)param_2[1];
    puVar6 = (undefined8 *)param_2[3];
  }
  uVar4 = (ulong)((long)pcVar8 - (long)__ptr) >> 5;
  *param_2 = 8;
  param_2[1] = 8;
  param_2[2] = 0;
  param_2[3] = 8;
  local_1a0 = __ptr;
  uStack_198 = uVar4;
  lStack_190 = lVar2;
  if ((long)puVar6 - (long)puVar11 != 0) {
    uVar13 = 0;
    do {
      puVar9 = puVar11 + uVar13 * 0x1e;
      lVar1 = 2;
      if (1 < *puVar9) {
        lVar1 = *puVar9 - 2;
      }
      if (lVar1 == 2) {
        FUN_00707408(puVar9);
      }
      else if ((lVar1 == 1) && (uVar5 = puVar9[3], uVar5 != 0)) {
        uVar12 = puVar9[5];
        if (uVar12 != 0) {
          puVar7 = (undefined8 *)puVar9[2];
          puVar10 = puVar7 + 1;
          uVar14 = NEON_cmge(*puVar7,0,1);
          uVar14 = uVar14 & 0x8080808080808080;
          do {
            for (; uVar14 == 0; uVar14 = uVar14 & 0x8080808080808080) {
              puVar7 = puVar7 + -0xe8;
              uVar14 = NEON_cmge(*puVar10,0,1);
              puVar10 = puVar10 + 1;
            }
            uVar3 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 00707b54 to 00707b57 has its CatchHandler @ 00707c48 */
            FUN_00702244(puVar7 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) *
                                  0x1d + -0x1c);
            uVar12 = uVar12 - 1;
            uVar14 = uVar14 - 1 & uVar14;
          } while (uVar12 != 0);
        }
        if (uVar5 * 0xe9 != -0xf1) {
          free((void *)(puVar9[2] + uVar5 * -0xe8 + -0xe8));
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != (ulong)((long)puVar6 - (long)puVar11) / 0xf0);
  }
  uVar13 = lVar2 * 0xf0;
  if (((uint)uVar13 >> 4 & 1) != 0) {
    uVar5 = uVar13 & 0xffffffffffffffe0;
    if (uVar5 == 0) {
      free(__ptr);
      __ptr = &DAT_00000008;
    }
    else {
      __ptr = (char *)FUN_004b2600(__ptr,uVar13,8,uVar5);
      if (__ptr == (char *)0x0) {
                    /* try { // try from 00707bd8 to 00707be3 has its CatchHandler @ 00707c74 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,uVar5);
      }
    }
  }
  *param_1 = uVar13 >> 5;
  param_1[1] = (ulong)__ptr;
  param_1[2] = uVar4;
  FUN_00705cf8(param_2);
  return;
}


// ===== 00707c94  FUN_00707c94 =====

void FUN_00707c94(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  char *__ptr;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  char *local_120;
  ulong uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined8 uStack_99;
  char local_88 [8];
  undefined1 auStack_80 [32];
  
  puVar11 = (undefined8 *)param_2[1];
  lVar2 = param_2[2];
  puVar13 = (undefined8 *)param_2[3];
  __ptr = (char *)*param_2;
  pcVar9 = __ptr;
  if (puVar11 != puVar13) {
    puVar8 = (undefined8 *)((ulong)local_88 | 1);
    do {
      uStack_e8 = puVar11[7];
      local_f0 = puVar11[6];
      uStack_d8 = puVar11[9];
      uStack_e0 = puVar11[8];
      uStack_c8 = puVar11[0xb];
      local_d0 = puVar11[10];
      local_c0 = puVar11[0xc];
      uStack_108 = puVar11[3];
      lStack_110 = puVar11[2];
      uStack_f8 = puVar11[5];
      local_100 = puVar11[4];
      puVar10 = puVar11 + 0xd;
      uStack_118 = puVar11[1];
      local_120 = (char *)*puVar11;
      param_2[1] = puVar10;
                    /* try { // try from 00707d3c to 00707d5b has its CatchHandler @ 00707f04 */
      FUN_00744d94(local_88,&local_120);
      if (local_88[0] == -1) {
        FUN_00706f6c(auStack_80);
      }
      else {
        local_b0 = *puVar8;
        uStack_99 = *(undefined8 *)((long)puVar8 + 0x17);
        uVar15 = *(undefined8 *)((long)puVar8 + 0xf);
        uStack_a8 = (undefined7)puVar8[1];
        uStack_a1 = (undefined1)uVar15;
        uStack_a0 = (undefined7)((ulong)uVar15 >> 8);
        *pcVar9 = local_88[0];
        *(undefined8 *)(pcVar9 + 0x18) = uStack_99;
        *(undefined8 *)(pcVar9 + 0x10) = uVar15;
        *(ulong *)(pcVar9 + 9) = CONCAT17(uStack_a1,uStack_a8);
        *(undefined8 *)(pcVar9 + 1) = local_b0;
        pcVar9 = pcVar9 + 0x20;
      }
      puVar11 = puVar10;
    } while (puVar10 != puVar13);
    puVar11 = (undefined8 *)param_2[1];
    puVar13 = (undefined8 *)param_2[3];
  }
  uVar5 = (ulong)((long)pcVar9 - (long)__ptr) >> 5;
  *param_2 = 8;
  param_2[1] = 8;
  param_2[2] = 0;
  param_2[3] = 8;
  local_120 = __ptr;
  uStack_118 = uVar5;
  lStack_110 = lVar2;
  if ((long)puVar13 - (long)puVar11 != 0) {
    uVar14 = 0;
    do {
      puVar12 = puVar11 + uVar14 * 0xd;
      lVar7 = 2;
      if (1 < *puVar12) {
        lVar7 = *puVar12 - 2;
      }
      if (lVar7 == 2) {
        if (0x18 < (byte)puVar12[5]) {
          plVar6 = (long *)puVar12[6];
          do {
            lVar7 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        if (puVar12[2] != 0) {
          free((void *)puVar12[3]);
        }
      }
      else if (lVar7 == 1) {
                    /* try { // try from 00707dfc to 00707e03 has its CatchHandler @ 00707ee0 */
        FUN_007043b0(puVar12 + 2);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != (ulong)((long)puVar13 - (long)puVar11) / 0x68);
  }
  uVar14 = lVar2 * 0x68;
  if ((uVar14 & 0x18) != 0) {
    uVar1 = uVar14 & 0xffffffffffffffe0;
    if (uVar1 == 0) {
      free(__ptr);
      __ptr = &DAT_00000008;
    }
    else {
      __ptr = (char *)FUN_004b2600(__ptr,uVar14,8,uVar1);
      if (__ptr == (char *)0x0) {
                    /* try { // try from 00707e8c to 00707e97 has its CatchHandler @ 00707f1c */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,uVar1);
      }
    }
  }
  *param_1 = uVar14 >> 5;
  param_1[1] = (ulong)__ptr;
  param_1[2] = uVar5;
  FUN_00705eec(param_2);
  return;
}


// ===== 00707f3c  FUN_00707f3c =====

void FUN_00707f3c(long *param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *local_130;
  ulong uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined8 uStack_99;
  char local_90 [8];
  undefined1 auStack_88 [40];
  
  puVar3 = (undefined8 *)param_2[1];
  lVar1 = param_2[2];
  puVar5 = (undefined8 *)param_2[3];
  pcVar2 = (char *)*param_2;
  pcVar4 = pcVar2;
  if (puVar3 != puVar5) {
    puVar8 = (undefined8 *)((ulong)local_90 | 1);
    do {
      uStack_e8 = puVar3[9];
      local_f0 = puVar3[8];
      uStack_d8 = puVar3[0xb];
      uStack_e0 = puVar3[10];
      uStack_c8 = puVar3[0xd];
      local_d0 = puVar3[0xc];
      uStack_b8 = puVar3[0xf];
      uStack_c0 = puVar3[0xe];
      uStack_128 = puVar3[1];
      local_130 = (char *)*puVar3;
      uStack_118 = puVar3[3];
      lStack_120 = puVar3[2];
      uStack_108 = puVar3[5];
      local_110 = puVar3[4];
      uStack_f8 = puVar3[7];
      uStack_100 = puVar3[6];
      puVar3 = puVar3 + 0x10;
      param_2[1] = (long)puVar3;
                    /* try { // try from 00707fe4 to 00708003 has its CatchHandler @ 00708094 */
      FUN_00744e4c(local_90,&local_130);
      if (local_90[0] == -1) {
        FUN_00706f6c(auStack_88);
      }
      else {
        local_b0 = *puVar8;
        uStack_99 = *(undefined8 *)((long)puVar8 + 0x17);
        uVar9 = *(undefined8 *)((long)puVar8 + 0xf);
        uStack_a8 = (undefined7)puVar8[1];
        uStack_a1 = (undefined1)uVar9;
        uStack_a0 = (undefined7)((ulong)uVar9 >> 8);
        *pcVar4 = local_90[0];
        *(undefined8 *)(pcVar4 + 0x18) = uStack_99;
        *(undefined8 *)(pcVar4 + 0x10) = uVar9;
        *(ulong *)(pcVar4 + 9) = CONCAT17(uStack_a1,uStack_a8);
        *(undefined8 *)(pcVar4 + 1) = local_b0;
        pcVar4 = pcVar4 + 0x20;
      }
    } while (puVar3 != puVar5);
    puVar3 = (undefined8 *)param_2[1];
    puVar5 = (undefined8 *)param_2[3];
  }
  uVar7 = (ulong)((long)pcVar4 - (long)pcVar2) >> 5;
  param_2[1] = 8;
  param_2[2] = 0;
  *param_2 = 8;
  lVar6 = ((ulong)((long)puVar5 - (long)puVar3) >> 7) + 1;
  param_2[3] = 8;
  local_130 = pcVar2;
  uStack_128 = uVar7;
  lStack_120 = lVar1;
  while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 00708050 to 00708057 has its CatchHandler @ 007080ac */
    FUN_00706640(puVar3);
    puVar3 = puVar3 + 0x10;
  }
  param_1[2] = uVar7;
  *param_1 = lVar1 << 2;
  param_1[1] = (long)pcVar2;
  FUN_00706070(param_2);
  return;
}


// ===== 007080ec  FUN_007080ec =====

void FUN_007080ec(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  char *__ptr;
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  char *local_d0;
  ulong uStack_c8;
  long local_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined8 uStack_89;
  char local_80 [8];
  undefined1 auStack_78 [24];
  
  puVar12 = (undefined8 *)param_2[1];
  lVar1 = param_2[2];
  puVar13 = (undefined8 *)param_2[3];
  __ptr = (char *)*param_2;
  pcVar10 = __ptr;
  if (puVar12 != puVar13) {
    puVar8 = (undefined8 *)((ulong)local_80 | 1);
    do {
      plStack_b8 = (long *)puVar12[3];
      local_c0 = puVar12[2];
      local_a8 = puVar12[5];
      uStack_b0 = puVar12[4];
      puVar11 = puVar12 + 6;
      uStack_c8 = puVar12[1];
      local_d0 = (char *)*puVar12;
      param_2[1] = puVar11;
                    /* try { // try from 00708194 to 0070819f has its CatchHandler @ 00708454 */
      FUN_0070e6d8(local_80,&local_d0);
      uVar15 = uStack_c8;
      cVar3 = '\x02';
      if (1 < (byte)local_a8) {
        cVar3 = (byte)local_a8 - 2;
      }
      if (cVar3 == '\x02') {
        if (plStack_b8 != (long *)0x0) {
          do {
            lVar7 = *plStack_b8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plStack_b8,0x10);
            if (bVar4) {
              *plStack_b8 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(&plStack_b8);
          }
        }
      }
      else if ((cVar3 == '\x01') && (uStack_c8 != 0)) {
        if (plStack_b8 != (long *)0x0) {
          pcVar14 = local_d0 + 8;
          uVar16 = NEON_cmge(*(undefined8 *)local_d0,0,1);
          uVar16 = uVar16 & 0x8080808080808080;
          pcVar5 = local_d0;
          plVar9 = plStack_b8;
          do {
            for (; uVar16 == 0; uVar16 = uVar16 & 0x8080808080808080) {
              uVar16 = NEON_cmge(*(undefined8 *)pcVar14,0,1);
              pcVar14 = pcVar14 + 8;
              pcVar5 = pcVar5 + -0x140;
            }
            uVar2 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            plVar6 = *(long **)(pcVar5 + ((long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20)
                                                      >> 3) * 5 + -3) * 8);
            if (plVar6 != (long *)0x0) {
              do {
                lVar7 = *plVar6;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar4) {
                  *plVar6 = lVar7 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar7 + -1 == 0) {
                DataMemoryBarrier(2,1);
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
              }
            }
            plVar9 = (long *)((long)plVar9 + -1);
            uVar16 = uVar16 - 1 & uVar16;
          } while (plVar9 != (long *)0x0);
        }
        if (uVar15 * 0x29 != -0x31) {
          free(local_d0 + (uVar15 * -5 + -5) * 8);
        }
      }
      if (local_80[0] == -1) {
                    /* try { // try from 00708254 to 0070825f has its CatchHandler @ 0070844c */
        FUN_00706f6c(auStack_78);
      }
      else {
        local_a0 = *puVar8;
        uStack_89 = *(undefined8 *)((long)puVar8 + 0x17);
        uVar17 = *(undefined8 *)((long)puVar8 + 0xf);
        uStack_98 = (undefined7)puVar8[1];
        uStack_91 = (undefined1)uVar17;
        uStack_90 = (undefined7)((ulong)uVar17 >> 8);
        *pcVar10 = local_80[0];
        *(undefined8 *)(pcVar10 + 0x18) = uStack_89;
        *(undefined8 *)(pcVar10 + 0x10) = uVar17;
        *(ulong *)(pcVar10 + 9) = CONCAT17(uStack_91,uStack_98);
        *(undefined8 *)(pcVar10 + 1) = local_a0;
        pcVar10 = pcVar10 + 0x20;
      }
      puVar12 = puVar11;
    } while (puVar11 != puVar13);
    puVar12 = (undefined8 *)param_2[1];
    puVar13 = (undefined8 *)param_2[3];
  }
  uVar15 = (ulong)((long)pcVar10 - (long)__ptr) >> 5;
  *param_2 = 8;
  param_2[1] = 8;
  param_2[2] = 0;
  param_2[3] = 8;
  local_d0 = __ptr;
  uStack_c8 = uVar15;
  local_c0 = lVar1;
  if ((long)puVar13 - (long)puVar12 != 0) {
    uVar16 = 0;
    do {
      cVar3 = '\x02';
      if (1 < *(byte *)(puVar12 + uVar16 * 6 + 5)) {
        cVar3 = *(byte *)(puVar12 + uVar16 * 6 + 5) - 2;
      }
      if (cVar3 == '\x02') {
        plVar9 = (long *)puVar12[uVar16 * 6 + 3];
        if (plVar9 != (long *)0x0) {
          do {
            lVar7 = *plVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
      }
      else if (cVar3 == '\x01') {
                    /* try { // try from 0070836c to 0070836f has its CatchHandler @ 00708420 */
        FUN_007042ac();
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != (ulong)((long)puVar13 - (long)puVar12) / 0x30);
  }
  uVar16 = lVar1 * 0x30;
  if (((uint)uVar16 >> 4 & 1) != 0) {
    uVar2 = uVar16 & 0xffffffffffffffe0;
    if (uVar2 == 0) {
      free(__ptr);
      __ptr = &DAT_00000008;
    }
    else {
      __ptr = (char *)FUN_004b2600(__ptr,uVar16,8,uVar2);
      if (__ptr == (char *)0x0) {
                    /* try { // try from 007083d0 to 007083db has its CatchHandler @ 0070847c */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,uVar2);
      }
    }
  }
  *param_1 = uVar16 >> 5;
  param_1[1] = (ulong)__ptr;
  param_1[2] = uVar15;
  FUN_00706134(param_2);
  return;
}


// ===== 0070849c  FUN_0070849c =====

void FUN_0070849c(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  void *__src;
  char *pcVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  char *__ptr;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  char *local_2d8;
  ulong local_2d0;
  long lStack_2c8;
  undefined8 local_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined8 uStack_99;
  char local_90 [8];
  undefined1 auStack_88 [40];
  
  __src = (void *)param_2[1];
  lVar2 = param_2[2];
  pvVar7 = (void *)param_2[3];
  __ptr = (char *)*param_2;
  pcVar8 = __ptr;
  if (__src != pvVar7) {
    puVar9 = (undefined8 *)((ulong)local_90 | 1);
    do {
      memcpy(&local_2d8,__src,0x228);
      __src = (void *)((long)__src + 0x228);
      param_2[1] = __src;
                    /* try { // try from 00708534 to 00708553 has its CatchHandler @ 00708754 */
      FUN_00744f4c(local_90,&local_2d8);
      if (local_90[0] == -1) {
        FUN_00706f6c(auStack_88);
      }
      else {
        local_b0 = *puVar9;
        uStack_99 = *(undefined8 *)((long)puVar9 + 0x17);
        uVar14 = *(undefined8 *)((long)puVar9 + 0xf);
        uStack_a8 = (undefined7)puVar9[1];
        uStack_a1 = (undefined1)uVar14;
        uStack_a0 = (undefined7)((ulong)uVar14 >> 8);
        *pcVar8 = local_90[0];
        *(undefined8 *)(pcVar8 + 0x18) = uStack_99;
        *(undefined8 *)(pcVar8 + 0x10) = uVar14;
        *(ulong *)(pcVar8 + 9) = CONCAT17(uStack_a1,uStack_a8);
        *(undefined8 *)(pcVar8 + 1) = local_b0;
        pcVar8 = pcVar8 + 0x20;
      }
    } while (__src != pvVar7);
    __src = (void *)param_2[1];
    pvVar7 = (void *)param_2[3];
  }
  uVar4 = (ulong)((long)pcVar8 - (long)__ptr) >> 5;
  *param_2 = 8;
  param_2[1] = 8;
  param_2[2] = 0;
  param_2[3] = 8;
  local_2d8 = __ptr;
  local_2d0 = uVar4;
  lStack_2c8 = lVar2;
  if ((long)pvVar7 - (long)__src != 0) {
    uVar12 = 0;
    do {
      puVar10 = (ulong *)((long)__src + uVar12 * 0x228);
      lVar1 = 2;
      if (1 < *puVar10) {
        lVar1 = *puVar10 - 2;
      }
      if (lVar1 == 2) {
                    /* try { // try from 007085d0 to 007085d7 has its CatchHandler @ 00708750 */
        FUN_007074d4(puVar10);
      }
      else if ((lVar1 == 1) && (uVar5 = puVar10[2], uVar5 != 0)) {
        uVar6 = puVar10[4];
        if (uVar6 != 0) {
          puVar9 = (undefined8 *)puVar10[1];
          puVar11 = puVar9 + 1;
          uVar13 = NEON_cmge(*puVar9,0,1);
          uVar13 = uVar13 & 0x8080808080808080;
          do {
            for (; uVar13 == 0; uVar13 = uVar13 & 0x8080808080808080) {
              puVar9 = puVar9 + -0x220;
              uVar13 = NEON_cmge(*puVar11,0,1);
              puVar11 = puVar11 + 1;
            }
            uVar3 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 0070866c to 0070866f has its CatchHandler @ 0070876c */
            FUN_007024a8(puVar9 + (long)-(int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) *
                                  0x44 + -0x43);
            uVar6 = uVar6 - 1;
            uVar13 = uVar13 - 1 & uVar13;
          } while (uVar6 != 0);
        }
        if (uVar5 * 0x221 != -0x229) {
          free((void *)(puVar10[1] + uVar5 * -0x220 + -0x220));
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != (ulong)((long)pvVar7 - (long)__src) / 0x228);
  }
  uVar12 = lVar2 * 0x228;
  if ((uVar12 & 0x18) != 0) {
    uVar5 = uVar12 & 0xffffffffffffffe0;
    if (uVar5 == 0) {
      free(__ptr);
      __ptr = &DAT_00000008;
    }
    else {
      __ptr = (char *)FUN_004b2600(__ptr,uVar12,8,uVar5);
      if (__ptr == (char *)0x0) {
                    /* try { // try from 007086f0 to 007086fb has its CatchHandler @ 00708798 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,uVar5);
      }
    }
  }
  *param_1 = uVar12 >> 5;
  param_1[1] = (ulong)__ptr;
  param_1[2] = uVar4;
  FUN_00706280(param_2);
  return;
}


// ===== 007087b8  <libdiscore_common::core::cache::native::libdiscore_common::core::cache::native::CacheManager>::delete_all_caches =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::cache::native::libdiscore_common::core::cache::native::CacheManager>::delete_all_caches
    */

void __rustcall
<libdiscore_common::core::cache::native::libdiscore_common::core::cache::native::CacheManager>::
delete_all_caches(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long local_c8;
  void *local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  ulong local_a8;
  ulong *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char *local_40;
  ulong **ppuStack_38;
  undefined1 uStack_11;
  
  <std::path::[16]::std::path::Path>::_join(&local_c8,param_1,param_2,"cache",5);
                    /* try { // try from 007087e4 to 007087eb has its CatchHandler @ 00708a10 */
  uVar2 = std::sys::fs::remove_dir_all(local_c0,uStack_b8);
  local_b0 = uVar2;
  if (uVar2 == 0) {
    if (2 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
      local_58 = "Cache";
      uStack_50 = 5;
      local_40 = "Deleted all caches";
      ppuStack_38 = (ulong **)0x25;
      uStack_78 = _UNK_002a01c8;
      local_80 = _DAT_002a01c0;
      local_90 = 0;
      local_88 = "libdiscore_common::core::cache::native";
      uStack_60 = _UNK_002a0b88;
      local_68 = _DAT_002a0b80;
      local_70 = "common/rust/src/core/cache.rs";
      local_48 = DAT_002a1800;
                    /* try { // try from 00708888 to 00708893 has its CatchHandler @ 00708a0c */
      <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_11,&local_90);
    }
    goto LAB_007089c0;
  }
  uVar4 = uVar2 & 3;
  if (uVar4 < 2) {
    if (uVar4 == 0) {
      cVar1 = *(char *)(uVar2 + 0x10);
    }
    else {
      cVar1 = *(char *)(uVar2 + 0x1f);
    }
joined_r0x007088c0:
    if (cVar1 != '\0') {
LAB_007088c4:
      local_a8 = uVar2;
      if (*(long *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78 != 0) {
        local_a0 = &local_a8;
        puStack_98 = PTR_fmt_00b00cb0;
        local_58 = "Cache";
        uStack_50 = 5;
        ppuStack_38 = &local_a0;
        local_40 = &DAT_002a9e7a;
        uStack_78 = _UNK_002a01c8;
        local_80 = _DAT_002a01c0;
        local_90 = 0;
        local_88 = "libdiscore_common::core::cache::native";
        uStack_60 = _UNK_0029fa68;
        local_68 = _DAT_0029fa60;
        local_70 = "common/rust/src/core/cache.rs";
        local_48 = DAT_002a1718;
                    /* try { // try from 00708944 to 0070894f has its CatchHandler @ 007089e8 */
        <log::__private_api::GlobalLogger_as_log::Log>::log(&uStack_11,&local_90);
      }
      if ((1 < (local_a8 & 3) - 2) && ((local_a8 & 3) != 0)) {
        local_88 = (char *)(local_a8 - 1);
        local_90 = CONCAT71(local_90._1_7_,3);
                    /* try { // try from 0070897c to 007089bf has its CatchHandler @ 00708a0c */
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_88);
      }
      goto LAB_007089c0;
    }
  }
  else {
    if (uVar4 == 2) {
                    /* try { // try from 007088a0 to 007088b3 has its CatchHandler @ 007089f8 */
      lVar3 = core::io::error::os_functions::get_os_functions();
      cVar1 = (**(code **)(lVar3 + 8))(uVar2 >> 0x20);
      goto joined_r0x007088c0;
    }
    if ((uVar2 >> 0x20 & 0xff) != 0) goto LAB_007088c4;
  }
  if ((1 < uVar4 - 2) && (uVar4 != 0)) {
    local_88 = (char *)(uVar2 - 1);
    local_90 = CONCAT71(local_90._1_7_,3);
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_88);
  }
LAB_007089c0:
  if (local_c8 != 0) {
    free(local_c0);
  }
  return;
}


// ===== 00708a30  FUN_00708a30 =====

void FUN_00708a30(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  void *pvVar7;
  bool bVar8;
  void *pvVar9;
  void *__dest;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  void *pvVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  void *pvVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  void *pvVar25;
  long lVar26;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  ulong local_198;
  ulong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  
  pvVar25 = (void *)param_2[4];
  if (pvVar25 == (void *)0x0) {
    plVar11 = (long *)param_2[3];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    pvVar9 = (void *)FUN_004b25a4(0x278,8);
    if (pvVar9 == (void *)0x0) {
                    /* try { // try from 007092d8 to 007092e3 has its CatchHandler @ 007093f8 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x278);
    }
    *(undefined8 *)((long)pvVar9 + 0x160) = 0;
    *(undefined2 *)((long)pvVar9 + 0x272) = 0;
    *plVar11 = (long)pvVar9;
    plVar11[1] = 0;
    uVar4 = *(ushort *)((long)pvVar9 + 0x272);
    local_198 = (ulong)uVar4;
    if (10 < uVar4) {
                    /* try { // try from 007092e8 to 00709303 has its CatchHandler @ 007093cc */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_002c02c8,0x20,&PTR_s__nix_store_8006w282fgsx3273c878b_00ad5aa8);
    }
    uVar30 = param_2[1];
    uVar12 = *param_2;
    *(ushort *)((long)pvVar9 + 0x272) = uVar4 + 1;
    uVar22 = 0;
    *(undefined8 *)((long)pvVar9 + local_198 * 0x18 + 0x178) = param_2[2];
    *(undefined8 *)((long)pvVar9 + local_198 * 0x18 + 0x170) = uVar30;
    *(undefined8 *)((long)pvVar9 + local_198 * 0x18 + 0x168) = uVar12;
    uVar12 = *param_3;
    uVar31 = param_3[3];
    uVar30 = param_3[2];
    puVar10 = (undefined8 *)((long)pvVar9 + local_198 * 0x20);
    puVar10[1] = param_3[1];
    *puVar10 = uVar12;
    puVar10[3] = uVar31;
    puVar10[2] = uVar30;
  }
  else {
    uVar4 = *(ushort *)((long)pvVar25 + 0x272);
    uVar22 = (ulong)uVar4;
    local_158 = param_2[5];
    local_198 = param_2[6];
    plVar11 = (long *)param_2[3];
    if (uVar4 < 0xb) {
      uVar23 = local_198 + 1;
      puVar28 = (undefined8 *)((long)pvVar25 + local_198 * 0x18 + 0x168);
      puVar10 = (undefined8 *)((long)pvVar25 + local_198 * 0x20);
      if (uVar22 < uVar23) {
        uVar30 = *param_2;
        uVar12 = param_2[2];
        puVar28[1] = param_2[1];
        *puVar28 = uVar30;
        uStack_108 = param_3[1];
        local_110 = *param_3;
        local_f8 = param_3[3];
        local_100 = param_3[2];
        puVar28[2] = uVar12;
      }
      else {
        memmove((void *)((long)pvVar25 + uVar23 * 0x18 + 0x168),puVar28,(uVar22 - local_198) * 0x18)
        ;
        uVar30 = *param_2;
        uVar12 = param_2[2];
        puVar28[1] = param_2[1];
        *puVar28 = uVar30;
        uStack_108 = param_3[1];
        local_110 = *param_3;
        local_f8 = param_3[3];
        local_100 = param_3[2];
        puVar28[2] = uVar12;
        memmove((void *)((long)pvVar25 + uVar23 * 0x20),puVar10,(uVar22 - local_198) * 0x20);
      }
      puVar10[1] = uStack_108;
      *puVar10 = local_110;
      puVar10[3] = local_f8;
      puVar10[2] = local_100;
      *(ushort *)((long)pvVar25 + 0x272) = uVar4 + 1;
      pvVar9 = pvVar25;
      uVar22 = local_158;
    }
    else {
      if (local_198 < 5) {
        bVar8 = false;
        uVar22 = 4;
      }
      else if (local_198 == 5) {
        bVar8 = false;
        uVar22 = 5;
      }
      else if (local_198 == 6) {
        bVar8 = true;
        uVar22 = 5;
        local_198 = 0;
      }
      else {
        local_198 = local_198 - 7;
        bVar8 = true;
        uVar22 = 6;
      }
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (void *)FUN_004b25a4(0x278,8);
      if (__dest == (void *)0x0) {
                    /* try { // try from 00709308 to 00709313 has its CatchHandler @ 007093c4 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x278);
      }
      *(undefined8 *)((long)__dest + 0x160) = 0;
      plVar16 = (long *)((long)pvVar25 + uVar22 * 0x18 + 0x168);
      puVar10 = (undefined8 *)((long)pvVar25 + uVar22 * 0x20);
      uVar23 = (ulong)*(ushort *)((long)pvVar25 + 0x272) + ~uVar22;
      *(short *)((long)__dest + 0x272) = (short)uVar23;
      lVar15 = *plVar16;
      lVar20 = plVar16[1];
      lVar17 = plVar16[2];
      if (0xb < uVar23) {
                    /* try { // try from 007092bc to 007092d3 has its CatchHandler @ 00709424 */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar23,0xb,&PTR_s__nix_store_8006w282fgsx3273c878b_00ad5a90);
      }
      memcpy((void *)((long)__dest + 0x168),(void *)((long)pvVar25 + (uVar22 + 1) * 0x18 + 0x168),
             uVar23 * 0x18);
      memcpy(__dest,(void *)((long)pvVar25 + (uVar22 + 1) * 0x20),uVar23 * 0x20);
      *(short *)((long)pvVar25 + 0x272) = (short)uVar22;
      uStack_148 = puVar10[1];
      local_150 = *puVar10;
      uStack_138 = puVar10[3];
      uStack_140 = puVar10[2];
      pvVar9 = __dest;
      if (!bVar8) {
        pvVar9 = pvVar25;
      }
      puVar28 = (undefined8 *)((long)pvVar9 + local_198 * 0x18 + 0x168);
      uVar4 = *(ushort *)((long)pvVar9 + 0x272);
      puVar10 = (undefined8 *)((long)pvVar9 + local_198 * 0x20);
      uVar22 = 0;
      if (!bVar8) {
        uVar22 = local_158;
      }
      lVar24 = uVar4 - local_198;
      if (uVar4 < local_198 || lVar24 == 0) {
        uVar30 = *param_2;
        uVar12 = param_2[2];
        puVar28[1] = param_2[1];
        *puVar28 = uVar30;
        uStack_108 = param_3[1];
        local_110 = *param_3;
        local_f8 = param_3[3];
        local_100 = param_3[2];
        puVar28[2] = uVar12;
      }
      else {
        memmove((void *)((long)pvVar9 + (local_198 + 1) * 0x18 + 0x168),puVar28,lVar24 * 0x18);
        uVar30 = *param_2;
        uVar12 = param_2[2];
        puVar28[1] = param_2[1];
        *puVar28 = uVar30;
        uStack_108 = param_3[1];
        local_110 = *param_3;
        local_f8 = param_3[3];
        local_100 = param_3[2];
        puVar28[2] = uVar12;
        memmove((void *)((long)pvVar9 + (local_198 + 1) * 0x20),puVar10,lVar24 * 0x20);
      }
      puVar10[1] = uStack_108;
      *puVar10 = local_110;
      puVar10[3] = local_f8;
      puVar10[2] = local_100;
      *(ushort *)((long)pvVar9 + 0x272) = uVar4 + 1;
      if (lVar15 != -1) {
        if (*(void **)((long)pvVar25 + 0x160) == (void *)0x0) {
          local_158 = 0;
        }
        else {
          bVar8 = local_158 == 0;
          pvVar7 = *(void **)((long)pvVar25 + 0x160);
          pvVar21 = __dest;
          lVar24 = lVar17;
          lVar19 = lVar15;
          lVar26 = lVar20;
          do {
            pvVar13 = pvVar7;
            if (!bVar8) {
                    /* try { // try from 00709270 to 00709287 has its CatchHandler @ 0070948c */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic
                        ("assertion failed: edge.height == self.node.height - 1",0x35,
                         &PTR_s__nix_store_8006w282fgsx3273c878b_00ad52b0);
            }
            uVar4 = *(ushort *)((long)pvVar13 + 0x272);
            uVar29 = (ulong)uVar4;
            uVar5 = *(ushort *)((long)pvVar25 + 0x270);
            uVar23 = (ulong)uVar5;
            if (uVar4 < 0xb) {
              plVar16 = (long *)((long)pvVar13 + uVar23 * 0x18 + 0x168);
              uVar27 = uVar23 + 1;
              if (uVar5 < uVar4) {
                lVar15 = uVar29 - uVar23;
                memmove((void *)((long)pvVar13 + uVar27 * 0x18 + 0x168),plVar16,lVar15 * 0x18);
                plVar16[2] = lVar24;
                *plVar16 = lVar19;
                plVar16[1] = lVar26;
                puVar10 = (undefined8 *)((long)pvVar13 + uVar23 * 0x20);
                memmove((void *)((long)pvVar13 + uVar27 * 0x20),puVar10,lVar15 * 0x20);
                puVar10[1] = uStack_148;
                *puVar10 = local_150;
                puVar10[3] = uStack_138;
                puVar10[2] = uStack_140;
                memmove((void *)((long)pvVar13 + uVar23 * 8 + 0x288),
                        (void *)((long)pvVar13 + uVar27 * 8 + 0x278),lVar15 * 8);
              }
              else {
                plVar16[2] = lVar24;
                *plVar16 = lVar19;
                plVar16[1] = lVar26;
                puVar10 = (undefined8 *)((long)pvVar13 + uVar23 * 0x20);
                puVar10[1] = uStack_148;
                *puVar10 = local_150;
                puVar10[3] = uStack_138;
                puVar10[2] = uStack_140;
              }
              *(ushort *)((long)pvVar13 + 0x272) = uVar4 + 1;
              *(void **)((long)pvVar13 + uVar27 * 8 + 0x278) = pvVar21;
              if (uVar27 < uVar29 + 2) {
                lVar15 = uVar23 + 0x50;
                do {
                  sVar6 = (short)lVar15;
                  lVar20 = *(long *)((long)pvVar13 + lVar15 * 8);
                  lVar15 = lVar15 + 1;
                  *(void **)(lVar20 + 0x160) = pvVar13;
                  *(short *)(lVar20 + 0x270) = sVar6 + -0x4f;
                } while (lVar15 - uVar29 != 0x51);
              }
              goto LAB_00709200;
            }
            if (uVar5 < 5) {
              bVar8 = false;
              uVar27 = 4;
            }
            else if (uVar5 == 5) {
              bVar8 = false;
              uVar27 = uVar23;
            }
            else if (uVar5 == 6) {
              uVar23 = 0;
              bVar8 = true;
              uVar27 = 5;
            }
            else {
              uVar23 = uVar23 - 7;
              bVar8 = true;
              uVar27 = 6;
            }
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            __dest = (void *)FUN_004b25a4(0x2d8,8);
            if (__dest == (void *)0x0) {
                    /* try { // try from 0070928c to 00709297 has its CatchHandler @ 00709480 */
                    /* WARNING: Subroutine does not return */
              alloc::alloc::handle_alloc_error(8,0x2d8);
            }
            *(undefined8 *)((long)__dest + 0x160) = 0;
            *(undefined2 *)((long)__dest + 0x272) = 0;
            plVar16 = (long *)((long)pvVar13 + uVar27 * 0x18 + 0x168);
            puVar10 = (undefined8 *)((long)pvVar13 + uVar27 * 0x20);
            uVar3 = (ulong)*(ushort *)((long)pvVar13 + 0x272) + ~uVar27;
            *(short *)((long)__dest + 0x272) = (short)uVar3;
            uVar30 = puVar10[1];
            uVar12 = *puVar10;
            uVar32 = puVar10[3];
            uVar31 = puVar10[2];
            lVar17 = plVar16[2];
            lVar15 = *plVar16;
            lVar20 = plVar16[1];
            if (0xb < uVar3) {
                    /* try { // try from 00709234 to 0070924b has its CatchHandler @ 00709494 */
                    /* WARNING: Subroutine does not return */
              core::slice::index::slice_index_fail
                        (0,uVar3,0xb,&PTR_s__nix_store_8006w282fgsx3273c878b_00ad5a90);
            }
            memcpy((void *)((long)__dest + 0x168),
                   (void *)((long)pvVar13 + (uVar27 + 1) * 0x18 + 0x168),uVar3 * 0x18);
            memcpy(__dest,(void *)((long)pvVar13 + (uVar27 + 1) * 0x20),uVar3 * 0x20);
            *(short *)((long)pvVar13 + 0x272) = (short)uVar27;
            lVar1 = (ulong)*(ushort *)((long)__dest + 0x272) + 1;
            if (0xb < (ulong)*(ushort *)((long)__dest + 0x272)) {
                    /* try { // try from 00709250 to 0070926b has its CatchHandler @ 007094c0 */
                    /* WARNING: Subroutine does not return */
              core::slice::index::slice_index_fail
                        (0,lVar1,0xc,&PTR_s__nix_store_8006w282fgsx3273c878b_00ad52c8);
            }
            if (uVar29 - uVar27 != lVar1) {
                    /* try { // try from 0070929c to 007092b7 has its CatchHandler @ 007094c0 */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic
                        ("assertion failed: src.len() == dst.len()",0x28,
                         &PTR_s__nix_store_8006w282fgsx3273c878b_00ad5a60);
            }
            local_158 = local_158 + 1;
            memcpy((void *)((long)__dest + 0x278),(void *)((long)pvVar13 + uVar27 * 8 + 0x280),
                   lVar1 * 8);
            lVar14 = 0;
            do {
              lVar2 = lVar14 + 1;
              lVar18 = *(long *)((long)__dest + lVar14 * 8 + 0x278);
              *(short *)(lVar18 + 0x270) = (short)lVar14;
              *(void **)(lVar18 + 0x160) = __dest;
              lVar14 = lVar2;
            } while (lVar1 != lVar2);
            pvVar25 = __dest;
            if (!bVar8) {
              pvVar25 = pvVar13;
            }
            uVar4 = *(ushort *)((long)pvVar25 + 0x272);
            uVar27 = (ulong)uVar4;
            plVar16 = (long *)((long)pvVar25 + (long)(int)uVar23 * 0x18 + 0x168);
            puVar10 = (undefined8 *)((long)pvVar25 + uVar23 * 0x20);
            uVar29 = uVar23 + 1;
            lVar1 = uVar27 - uVar23;
            if (uVar27 < uVar23 || lVar1 == 0) {
              *plVar16 = lVar19;
              plVar16[1] = lVar26;
              plVar16[2] = lVar24;
              puVar10[1] = uStack_148;
              *puVar10 = local_150;
              puVar10[3] = uStack_138;
              puVar10[2] = uStack_140;
            }
            else {
              memmove((void *)((long)pvVar25 + (long)(int)uVar29 * 0x18 + 0x168),plVar16,
                      lVar1 * 0x18);
              *plVar16 = lVar19;
              plVar16[1] = lVar26;
              plVar16[2] = lVar24;
              memmove((void *)((long)pvVar25 + uVar29 * 0x20),puVar10,lVar1 * 0x20);
              puVar10[1] = uStack_148;
              *puVar10 = local_150;
              puVar10[3] = uStack_138;
              puVar10[2] = uStack_140;
              memmove((void *)((long)pvVar25 + uVar23 * 8 + 0x288),
                      (void *)((long)pvVar25 + uVar29 * 8 + 0x278),lVar1 * 8);
            }
            *(ushort *)((long)pvVar25 + 0x272) = uVar4 + 1;
            *(void **)((long)pvVar25 + uVar29 * 8 + 0x278) = pvVar21;
            if (uVar29 < uVar27 + 2) {
              lVar24 = uVar23 + 0x50;
              do {
                sVar6 = (short)lVar24;
                lVar19 = *(long *)((long)pvVar25 + lVar24 * 8);
                lVar24 = lVar24 + 1;
                *(void **)(lVar19 + 0x160) = pvVar25;
                *(short *)(lVar19 + 0x270) = sVar6 + -0x4f;
              } while (lVar24 - uVar27 != 0x51);
            }
            if (lVar15 == -1) goto LAB_00709200;
            bVar8 = true;
            pvVar7 = *(void **)((long)pvVar13 + 0x160);
            pvVar25 = pvVar13;
            pvVar21 = __dest;
            lVar24 = lVar17;
            lVar19 = lVar15;
            lVar26 = lVar20;
            local_150 = uVar12;
            uStack_148 = uVar30;
            uStack_140 = uVar31;
            uStack_138 = uVar32;
          } while (*(void **)((long)pvVar13 + 0x160) != (void *)0x0);
        }
        lVar24 = *plVar11;
        if (lVar24 == 0) {
                    /* try { // try from 00709318 to 0070932b has its CatchHandler @ 0070939c */
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad5a78);
        }
        uVar23 = plVar11[1];
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar10 = (undefined8 *)FUN_004b25a4(0x2d8,8);
        if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 00709330 to 0070933b has its CatchHandler @ 00709398 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x2d8);
        }
        puVar10[0x2c] = 0;
        *(undefined2 *)((long)puVar10 + 0x272) = 0;
        puVar10[0x4f] = lVar24;
        if (0xfffffffffffffffe < uVar23) {
                    /* try { // try from 00709340 to 0070934b has its CatchHandler @ 00709384 */
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad5298);
        }
        *(undefined8 **)(lVar24 + 0x160) = puVar10;
        *(undefined2 *)(lVar24 + 0x270) = 0;
        *plVar11 = (long)puVar10;
        plVar11[1] = uVar23 + 1;
        if (local_158 != uVar23) {
                    /* try { // try from 00709350 to 0070936b has its CatchHandler @ 00709370 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    ("assertion failed: edge.height == self.height - 1",0x30,
                     &PTR_s__nix_store_8006w282fgsx3273c878b_00ad5ac0);
        }
        puVar10[0x50] = __dest;
        puVar10[0x2e] = lVar20;
        puVar10[0x2d] = lVar15;
        *(undefined2 *)((long)puVar10 + 0x272) = 1;
        puVar10[0x2f] = lVar17;
        puVar10[1] = uStack_148;
        *puVar10 = local_150;
        puVar10[3] = uStack_138;
        puVar10[2] = uStack_140;
        *(undefined8 **)((long)__dest + 0x160) = puVar10;
        *(undefined2 *)((long)__dest + 0x270) = 1;
      }
    }
  }
LAB_00709200:
  lVar15 = plVar11[2];
  *param_1 = (long)pvVar9;
  param_1[1] = uVar22;
  plVar11[2] = lVar15 + 1;
  param_1[2] = local_198;
  param_1[3] = (long)plVar11;
  return;
}


// ===== 00709514  <alloc[c1f8e832b0d782c7]::sync::Arc<libdiscore_common[1cb84820f9455fa0]::core::maybe_mutex::MaybeRwLock<std[17aff9129faa4dc5]::collections::hash::map::HashMap<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest>>>>::drop_slow =====

/* <alloc[c1f8e832b0d782c7]::sync::Arc<libdiscore_common[1cb84820f9455fa0]::core::maybe_mutex::MaybeRwLock<std[17aff9129faa4dc5]::collections::hash::map::HashMap<u32,
   libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest>>>>::drop_slow */

void <alloc[c1f8e832b0d782c7]::sync::Arc<libdiscore_common[1cb84820f9455fa0]::core::maybe_mutex::MaybeRwLock<std[17aff9129faa4dc5]::collections::hash::map::HashMap<u32,libdiscore_common[1cb84820f9455fa0]::core::http::ActiveRequest>>>>
     ::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  void *__ptr;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  __ptr = (void *)*param_1;
  lVar5 = *(long *)((long)__ptr + 0x28);
  if (lVar5 != 0) {
    lVar6 = *(long *)((long)__ptr + 0x38);
    if (lVar6 != 0) {
      puVar7 = *(undefined8 **)((long)__ptr + 0x20);
      puVar8 = puVar7 + 1;
      uVar9 = NEON_cmge(*puVar7,0,1);
      uVar9 = uVar9 & 0x8080808080808080;
      do {
        for (; uVar9 == 0; uVar9 = uVar9 & 0x8080808080808080) {
          puVar7 = puVar7 + -0x98;
          uVar9 = NEON_cmge(*puVar8,0,1);
          puVar8 = puVar8 + 1;
        }
        uVar2 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 0070958c to 0070958f has its CatchHandler @ 00709628 */
        FUN_00702aac(puVar7 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                              0x13 + -0x13);
        lVar6 = lVar6 + -1;
        uVar9 = uVar9 - 1 & uVar9;
      } while (lVar6 != 0);
    }
    if (lVar5 * 0x99 != -0xa1) {
      free((void *)(*(long *)((long)__ptr + 0x20) + lVar5 * -0x98 + -0x98));
    }
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00709668  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,
   {backref 37}::HttpError>>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<std::collections::hash::set::HashSet<alloc::string::String>>,{backref_37}::HttpError>>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  ulong uVar5;
  
  __ptr = (void *)*param_1;
  uVar5 = *(ulong *)((long)__ptr + 0x30);
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 00709680 to 00709693 has its CatchHandler @ 00709730 */
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task((long)__ptr + 0x20);
  }
  if (((uint)uVar5 >> 3 & 1) != 0) {
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task((long)__ptr + 0x10);
  }
  lVar4 = *(long *)((long)__ptr + 0x38);
  if (lVar4 != -2) {
    if (lVar4 == -1) {
                    /* try { // try from 007096ac to 007096b3 has its CatchHandler @ 00709728 */
      FUN_00707298((long)__ptr + 0x40);
    }
    else {
                    /* try { // try from 007096b8 to 007096bf has its CatchHandler @ 00709710 */
      FUN_00703fac((long)__ptr + 0x98);
                    /* try { // try from 007096c0 to 007096c7 has its CatchHandler @ 00709728 */
      FUN_007077e0((long *)((long)__ptr + 0x38));
    }
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0070977c  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,
   {backref 37}::HttpError>>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<alloc::string::String>,{backref_37}::HttpError>>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  ulong uVar5;
  
  __ptr = (void *)*param_1;
  uVar5 = *(ulong *)((long)__ptr + 0xb0);
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 00709794 to 007097a7 has its CatchHandler @ 00709834 */
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task((long)__ptr + 0xa0);
  }
  if (((uint)uVar5 >> 3 & 1) != 0) {
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task((long)__ptr + 0x90);
  }
  if (*(long *)((long)__ptr + 0x10) != -2) {
    if (*(long *)((long)__ptr + 0x10) == -1) {
                    /* try { // try from 007097bc to 007097e3 has its CatchHandler @ 0070982c */
      FUN_00707298((long)__ptr + 0x18);
    }
    else {
      if (*(long *)((long)__ptr + 0x70) != 0) {
        free(*(void **)((long)__ptr + 0x78));
      }
      FUN_007077e0((long)__ptr + 0x10);
    }
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00709880  <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref
   41}::stores::blocked_domains::DeltaResponse>, {backref 37}::HttpError>>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<tokio::sync::oneshot::Inner<core::result::Result<libdiscore_common::core::http::ParsedHttpResponse<{backref_41}::stores::blocked_domains::DeltaResponse>,{backref_37}::HttpError>>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  ulong uVar5;
  
  __ptr = (void *)*param_1;
  uVar5 = *(ulong *)((long)__ptr + 0x30);
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 00709898 to 007098ab has its CatchHandler @ 00709904 */
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task((long)__ptr + 0x20);
  }
  if (((uint)uVar5 >> 3 & 1) != 0) {
    <tokio::sync::oneshot::tokio::sync::oneshot::Task>::drop_task((long)__ptr + 0x10);
  }
                    /* try { // try from 007098ac to 007098b3 has its CatchHandler @ 007098fc */
  FUN_00706e6c((long)__ptr + 0x38);
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00709950  <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::set::HashSet<smol_str::SmolStr>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::set::HashSet<smol_str::SmolStr>>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::set::HashSet<smol_str::SmolStr>>>::
drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 00709960 to 00709967 has its CatchHandler @ 007099b0 */
  FUN_00703b98((long)__ptr + 0x10);
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 007099f0  <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn
   Trait<Assoc = X> + {backref
   26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)> + {backref
   26}::marker::Sync + {backref 71}::Send>>>>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<std::sync::poison::mutex::Mutex<core::option::Option<alloc::boxed::Box<dyn_Trait<Assoc=X>+{backref_26}::ops::function::Fn<(libdiscore_common::core::http::ProgressEvent)>+{backref_26}::marker::Sync+{backref_71}::Send>>>>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  void *__ptr;
  undefined8 *puVar6;
  void *__ptr_00;
  
  __ptr = (void *)*param_1;
  __ptr_00 = *(void **)((long)__ptr + 0x18);
  if (__ptr_00 != (void *)0x0) {
    puVar6 = *(undefined8 **)((long)__ptr + 0x20);
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00709a18 to 00709a1f has its CatchHandler @ 00709a84 */
      (*pcVar4)(__ptr_00);
    }
    if (puVar6[1] != 0) {
      free(__ptr_00);
    }
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00709adc  <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>::drop_slow =====

/* <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,
   tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>::drop_slow */

void <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
     ::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  long lVar4;
  void *__ptr_00;
  void *pvVar5;
  long local_100 [28];
  
  __ptr_00 = (void *)*param_1;
  while( true ) {
                    /* try { // try from 00709af0 to 00709b1b has its CatchHandler @ 00709ba8 */
    FUN_0073a38c(local_100,(long)__ptr_00 + 0x1a0,(long)__ptr_00 + 0x80);
    if ((local_100[0] == -1) || (local_100[0] == 2)) break;
    FUN_0074d748(local_100);
  }
  __ptr = *(void **)((long)__ptr_00 + 0x1a8);
  do {
    pvVar5 = *(void **)((long)__ptr + 0x1c08);
    free(__ptr);
    __ptr = pvVar5;
  } while (pvVar5 != (void *)0x0);
  if (*(long *)((long)__ptr_00 + 0x100) != 0) {
                    /* try { // try from 00709b4c to 00709b4f has its CatchHandler @ 00709ba0 */
    (**(code **)(*(long *)((long)__ptr_00 + 0x100) + 0x18))(*(undefined8 *)((long)__ptr_00 + 0x108))
    ;
  }
  if (__ptr_00 != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr_00 + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr_00);
      return;
    }
  }
  return;
}


// ===== 00709c00  <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<futures_util::abortable::AbortInner>>::drop_slow
          (undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (*(long *)((long)__ptr + 0x10) != 0) {
                    /* try { // try from 00709c20 to 00709c23 has its CatchHandler @ 00709c6c */
    (**(code **)(*(long *)((long)__ptr + 0x10) + 0x18))(*(undefined8 *)((long)__ptr + 0x18));
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00709cac  <alloc::sync::[n]::alloc::sync::Arc<libdiscore_common::stores::blocked_domains::BlockedDomainsStore>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<libdiscore_common::stores::blocked_domains::BlockedDomainsStore>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<libdiscore_common::stores::blocked_domains::BlockedDomainsStore>>
::drop_slow(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  long *plVar5;
  long lVar6;
  
  __ptr = (void *)*param_1;
  plVar5 = (long *)((long)__ptr + 0x28);
  lVar6 = *plVar5;
  plVar3 = (long *)(lVar6 + 0x1f0);
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
                    /* try { // try from 00709ce0 to 00709cef has its CatchHandler @ 00709dcc */
    FUN_0073a19c(lVar6 + 0x80);
    <tokio::sync::task::atomic_waker::[0]::tokio::sync::task::atomic_waker::AtomicWaker>::wake
              (lVar6 + 0x100);
  }
  plVar3 = (long *)*plVar5;
  do {
    lVar6 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00709d0c to 00709d13 has its CatchHandler @ 00709dc4 */
    <alloc[c1f8e832b0d782c7]::sync::Arc<tokio[8c8895dbfa691109]::sync::mpsc::chan::Chan<libdiscore_common[1cb84820f9455fa0]::core::http::BackendHttpRequest,tokio[8c8895dbfa691109]::sync::mpsc::bounded::Semaphore>>>
    ::drop_slow(plVar5);
  }
  if (*(long *)((long)__ptr + 0x10) != 0) {
    free(*(void **)((long)__ptr + 0x18));
  }
  if ((*(long *)((long)__ptr + 0x38) != -1) && (*(long *)((long)__ptr + 0x38) != 0)) {
    free(*(void **)((long)__ptr + 0x40));
  }
  if (((*(long *)((long)__ptr + 0x58) != 0) && (lVar6 = *(long *)((long)__ptr + 0x60), lVar6 != 0))
     && (lVar6 * 9 != -0x11)) {
    free((void *)(*(long *)((long)__ptr + 0x58) + lVar6 * -8 + -8));
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar3 = (long *)((long)__ptr + 8);
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00709e98  <alloc::sync::[n]::alloc::sync::Arc<[smol_str::SmolStr]>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<[smol_str::SmolStr]>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<[smol_str::SmolStr]>>::drop_slow(undefined8 *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  __ptr = (void *)*param_1;
  lVar6 = param_1[1];
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      pbVar3 = (byte *)((long)__ptr + lVar7 * 0x18 + 0x10);
      if (0x18 < *pbVar3) {
        plVar4 = *(long **)(pbVar3 + 8);
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
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar6);
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar4 = (long *)((long)__ptr + 8);
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00709f68  <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow */

void __rustcall <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  long lVar4;
  long lVar5;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0xffffffffffffffff) {
    lVar4 = param_1[1];
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 + -1 == 0) && (DataMemoryBarrier(2,1), (lVar4 + 0x17U & 0xfffffffffffffff8) != 0)) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00709fb0  libdiscore_common::core::cache::native::cache_dir_path =====

/* WARNING: Unknown calling convention: __rustcall */
/* libdiscore_common::core::cache::native::cache_dir_path */

void __rustcall libdiscore_common::core::cache::native::cache_dir_path(long param_1)

{
  <std::path::[16]::std::path::Path>::_join
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),"cache",5);
  return;
}


// ===== 00709fc8  FUN_00709fc8 =====

void FUN_00709fc8(undefined8 param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt("could not convert slice to array",0x20,param_2);
  return;
}


// ===== 00709fdc  FUN_00709fdc =====

void FUN_00709fdc(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"JSError",7,&local_18,&DAT_00ad5af8);
    return;
  }
  local_18 = param_1 + 1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Io",2,&local_18,&DAT_00ad5ad8);
  return;
}


