// ===== 00607818  FUN_00607818 =====

undefined8
FUN_00607818(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined1 *param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  
  *param_2 = *(undefined4 *)(param_1 + 0x48);
  *param_3 = *(undefined4 *)(param_1 + 0x4c);
  *param_4 = 0;
  if ((param_5 != (undefined1 *)0x0) && (param_6 != 0)) {
    uVar3 = *(uint *)(param_1 + 0x4c);
    if (uVar3 != 0) {
      uVar2 = param_6 - 1U;
      if ((ulong)(uVar3 - 1) <= param_6 - 1U) {
        uVar2 = (ulong)(uVar3 - 1);
      }
      uVar6 = (undefined1)(0x202020202020102 >> (((ulong)uVar3 & 7) << 3));
      if (7 < uVar3) {
        uVar6 = 2;
      }
      *param_5 = uVar6;
      if (uVar2 != 0) {
        uVar6 = (undefined1)(0x3030303030301 >> (((ulong)(uVar3 - 1) & 7) << 3));
        if (6 < uVar3 - 1) {
          uVar6 = 3;
        }
        param_5[1] = uVar6;
        if (uVar2 != 1) {
          lVar5 = 0;
          uVar7 = 0x10;
          do {
            uVar1 = lVar5 + 2;
            if ((int)uVar3 < 4) {
              if (uVar3 == 1) {
                cVar4 = '\x01';
              }
              else if (uVar3 == 2) {
LAB_006079a4:
                cVar4 = '\0';
              }
              else {
                if (uVar3 != 3) goto LAB_0060797c;
                cVar4 = (char)uVar1 + '\x02';
              }
            }
            else if ((int)uVar3 < 6) {
              if (uVar3 == 4) {
                cVar4 = (char)(0xa040302 >> (ulong)((uint)uVar7 & 0x1f));
              }
              else if (uVar3 == 5) {
                cVar4 = (char)(0x706040302 >> (uVar7 & 0x3f));
              }
              else {
LAB_0060797c:
                if (uVar1 < 8) {
                  cVar4 = (char)(0xc0b070605040302 >> (uVar7 & 0x3f));
                }
                else {
                  if (0x1f < uVar1) goto LAB_006079a4;
                  cVar4 = (char)uVar1 + '\f';
                }
              }
            }
            else if (uVar3 == 6) {
              cVar4 = (char)(0xc0b05040302 >> (uVar7 & 0x3f));
            }
            else {
              if (uVar3 != 7) goto LAB_0060797c;
              cVar4 = (char)(0xc0b0a05040302 >> (uVar7 & 0x3f));
            }
            param_5[lVar5 + 2] = cVar4;
            lVar5 = lVar5 + 1;
            uVar7 = uVar7 + 8;
          } while (uVar2 - 1 != lVar5);
        }
      }
    }
  }
  return 0;
}


// ===== 006079ac  ma_noise_read_pcm_frames =====

void ma_noise_read_pcm_frames(long param_1,float *param_2,long param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  float *pfVar12;
  uint uVar13;
  undefined2 uVar14;
  uint uVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  undefined2 *puVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  undefined8 uVar26;
  float local_8c;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  dVar23 = DAT_0024e7e8;
  uVar7 = 0xfffffffe;
  if ((param_1 == 0) || (param_3 == 0)) goto LAB_00608a84;
  if (param_2 != (float *)0x0) {
    iVar8 = *(int *)(param_1 + 0x50);
    if (iVar8 == 2) {
      uVar15 = *(uint *)(param_1 + 0x48);
      uVar1 = *(uint *)(param_1 + 0x4c);
      uVar2 = (ulong)uVar1;
      if (uVar15 == 2) {
        iVar8 = *(int *)(param_1 + 0x68);
        if (*(int *)(param_1 + 0x60) == 0) {
          lVar9 = 0;
          do {
            uVar11 = 0;
            do {
              iVar8 = iVar8 * 0xbc8f;
              iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                              -0x7fffffff;
              dVar25 = (*(double *)(*(long *)(param_1 + 0x70) + uVar11 * 8) +
                       (double)iVar8 / 2147483647.0) / dVar23;
              *(double *)(*(long *)(param_1 + 0x70) + uVar11 * 8) = dVar25;
              *(short *)((long)param_2 + uVar11 * 2) =
                   (short)(int)((float)(*(double *)(param_1 + 0x58) * (dVar25 / 20.0)) * 32767.0);
              uVar11 = uVar11 + 1;
            } while (uVar2 != uVar11);
            lVar9 = lVar9 + 1;
            param_2 = (float *)((long)param_2 + uVar2 * 2);
          } while (lVar9 != param_3);
        }
        else {
          lVar9 = 0;
          uVar11 = uVar2 & 0xfffffff0;
          pfVar12 = param_2 + 4;
          do {
            iVar8 = iVar8 * 0xbc8f;
            iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                            -0x7fffffff;
            dVar25 = (**(double **)(param_1 + 0x70) + (double)iVar8 / 2147483647.0) / dVar23;
            **(double **)(param_1 + 0x70) = dVar25;
            uVar14 = (undefined2)
                     (int)((float)(*(double *)(param_1 + 0x58) * (dVar25 / 20.0)) * 32767.0);
            if (uVar1 < 0x10) {
              uVar18 = 0;
LAB_006080b4:
              lVar17 = uVar2 - uVar18;
              puVar19 = (undefined2 *)((long)param_2 + uVar18 * 2);
              do {
                lVar17 = lVar17 + -1;
                *puVar19 = uVar14;
                puVar19 = puVar19 + 1;
              } while (lVar17 != 0);
            }
            else {
              uVar7 = CONCAT26(uVar14,CONCAT24(uVar14,CONCAT22(uVar14,uVar14)));
              uVar26 = CONCAT26(uVar14,CONCAT24(uVar14,CONCAT22(uVar14,uVar14)));
              pfVar16 = pfVar12;
              uVar18 = uVar11;
              do {
                *(undefined8 *)(pfVar16 + -2) = uVar26;
                *(undefined8 *)(pfVar16 + -4) = uVar7;
                *(undefined8 *)(pfVar16 + 2) = uVar26;
                *(undefined8 *)pfVar16 = uVar7;
                uVar18 = uVar18 - 0x10;
                pfVar16 = pfVar16 + 8;
              } while (uVar18 != 0);
              uVar18 = uVar11;
              if (uVar11 != uVar2) goto LAB_006080b4;
            }
            lVar9 = lVar9 + 1;
            pfVar12 = (float *)((long)pfVar12 + uVar2 * 2);
            param_2 = (float *)((long)param_2 + uVar2 * 2);
          } while (lVar9 != param_3);
        }
      }
      else {
        if (uVar15 != 5) {
          iVar8 = *(int *)(&DAT_00281c10 + (ulong)uVar15 * 4);
          if (*(int *)(param_1 + 0x60) == 0) {
            lVar9 = 0;
            do {
              uVar15 = 0;
              lVar17 = 0;
              do {
                iVar3 = *(int *)(param_1 + 0x68) * 0xbc8f;
                iVar3 = iVar3 + ((int)((long)iVar3 * 0x40000001 >> 0x3d) - (iVar3 >> 0x1f)) *
                                -0x7fffffff;
                *(int *)(param_1 + 0x68) = iVar3;
                dVar25 = (*(double *)(*(long *)(param_1 + 0x70) + lVar17) +
                         (double)iVar3 / 2147483647.0) / dVar23;
                *(double *)(*(long *)(param_1 + 0x70) + lVar17) = dVar25;
                local_8c = (float)(*(double *)(param_1 + 0x58) * (dVar25 / 20.0));
                ma_pcm_convert((long)param_2 + (ulong)uVar15 + lVar9 * (ulong)(iVar8 * uVar1),
                               *(undefined4 *)(param_1 + 0x48),&local_8c,5,1,0);
                lVar17 = lVar17 + 8;
                uVar15 = uVar15 + iVar8;
              } while (uVar2 * 8 - lVar17 != 0);
              lVar9 = lVar9 + 1;
            } while (lVar9 != param_3);
          }
          else {
            lVar9 = 0;
            do {
              uVar15 = 0;
              iVar3 = *(int *)(param_1 + 0x68) * 0xbc8f;
              iVar3 = iVar3 + ((int)((long)iVar3 * 0x40000001 >> 0x3d) - (iVar3 >> 0x1f)) *
                              -0x7fffffff;
              *(int *)(param_1 + 0x68) = iVar3;
              dVar25 = (**(double **)(param_1 + 0x70) + (double)iVar3 / 2147483647.0) / dVar23;
              **(double **)(param_1 + 0x70) = dVar25;
              local_8c = (float)(*(double *)(param_1 + 0x58) * (dVar25 / 20.0));
              uVar11 = uVar2;
              do {
                ma_pcm_convert((long)param_2 + (ulong)uVar15 + lVar9 * (ulong)(iVar8 * uVar1),
                               *(undefined4 *)(param_1 + 0x48),&local_8c,5,1,0);
                uVar11 = uVar11 - 1;
                uVar15 = uVar15 + iVar8;
              } while (uVar11 != 0);
              lVar9 = lVar9 + 1;
            } while (lVar9 != param_3);
          }
          goto LAB_00608a64;
        }
        iVar8 = *(int *)(param_1 + 0x68);
        if (*(int *)(param_1 + 0x60) == 0) {
          lVar9 = 0;
          do {
            uVar11 = 0;
            do {
              iVar8 = iVar8 * 0xbc8f;
              iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                              -0x7fffffff;
              dVar25 = (*(double *)(*(long *)(param_1 + 0x70) + uVar11 * 8) +
                       (double)iVar8 / 2147483647.0) / dVar23;
              *(double *)(*(long *)(param_1 + 0x70) + uVar11 * 8) = dVar25;
              param_2[uVar11] = (float)(*(double *)(param_1 + 0x58) * (dVar25 / 20.0));
              uVar11 = uVar11 + 1;
            } while (uVar2 != uVar11);
            lVar9 = lVar9 + 1;
            param_2 = param_2 + uVar2;
          } while (lVar9 != param_3);
        }
        else {
          lVar9 = 0;
          uVar11 = uVar2 & 0xfffffff8;
          pfVar12 = param_2 + 4;
          do {
            iVar8 = iVar8 * 0xbc8f;
            iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                            -0x7fffffff;
            dVar25 = (**(double **)(param_1 + 0x70) + (double)iVar8 / 2147483647.0) / dVar23;
            **(double **)(param_1 + 0x70) = dVar25;
            fVar24 = (float)(*(double *)(param_1 + 0x58) * (dVar25 / 20.0));
            if (uVar1 < 8) {
              uVar18 = 0;
LAB_00607dcc:
              lVar17 = uVar2 - uVar18;
              pfVar16 = param_2 + uVar18;
              do {
                lVar17 = lVar17 + -1;
                *pfVar16 = fVar24;
                pfVar16 = pfVar16 + 1;
              } while (lVar17 != 0);
            }
            else {
              pfVar16 = pfVar12;
              uVar18 = uVar11;
              do {
                *(ulong *)(pfVar16 + -2) = CONCAT44(fVar24,fVar24);
                *(ulong *)(pfVar16 + -4) = CONCAT44(fVar24,fVar24);
                *(ulong *)(pfVar16 + 2) = CONCAT44(fVar24,fVar24);
                *(ulong *)pfVar16 = CONCAT44(fVar24,fVar24);
                uVar18 = uVar18 - 8;
                pfVar16 = pfVar16 + 8;
              } while (uVar18 != 0);
              uVar18 = uVar11;
              if (uVar11 != uVar2) goto LAB_00607dcc;
            }
            lVar9 = lVar9 + 1;
            pfVar12 = pfVar12 + uVar2;
            param_2 = param_2 + uVar2;
          } while (lVar9 != param_3);
        }
      }
    }
    else {
      if (iVar8 == 1) {
        uVar15 = *(uint *)(param_1 + 0x48);
        uVar1 = *(uint *)(param_1 + 0x4c);
        uVar2 = (ulong)uVar1;
        if (uVar15 == 2) {
          if (*(int *)(param_1 + 0x60) == 0) {
            lVar9 = 0;
            do {
              uVar11 = 0;
              do {
                uVar15 = *(uint *)(*(long *)(param_1 + 0x80) + uVar11 * 4);
                if ((uVar15 & 1) == 0) {
                  if (uVar15 == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar10 = 0x11;
                    uVar1 = uVar15 >> 0x10;
                    if ((uVar15 & 0xfffe) != 0) {
                      uVar10 = 1;
                      uVar1 = uVar15;
                    }
                    bVar6 = (uVar1 & 0xff) != 0;
                    uVar15 = uVar1 >> 8;
                    if (bVar6) {
                      uVar15 = uVar1;
                    }
                    uVar1 = uVar10 | 8;
                    if (bVar6) {
                      uVar1 = uVar10;
                    }
                    uVar10 = uVar1 | 4;
                    uVar13 = uVar15 >> 4;
                    if ((uVar15 & 0xf) != 0) {
                      uVar10 = uVar1;
                      uVar13 = uVar15;
                    }
                    uVar1 = uVar13 >> 2;
                    uVar15 = uVar10 | 2;
                    if ((uVar13 & 3) != 0) {
                      uVar1 = uVar13;
                      uVar15 = uVar10;
                    }
                    uVar15 = uVar15 - (uVar1 & 1);
                  }
                }
                else {
                  uVar15 = 0;
                }
                lVar17 = (ulong)(uVar15 & 0xf) * 8;
                iVar8 = *(int *)(param_1 + 0x68) * 0xbc8f;
                lVar21 = uVar11 * 8;
                iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                                -0x7fffffff;
                lVar20 = *(long *)(*(long *)(param_1 + 0x70) + lVar21);
                dVar25 = *(double *)(lVar20 + lVar17);
                *(int *)(param_1 + 0x68) = iVar8;
                dVar23 = (double)iVar8 / 2147483647.0;
                *(double *)(lVar20 + lVar17) = dVar23;
                *(double *)(*(long *)(param_1 + 0x78) + lVar21) =
                     *(double *)(*(long *)(param_1 + 0x78) + lVar21) + (dVar23 - dVar25);
                *(int *)(*(long *)(param_1 + 0x80) + uVar11 * 4) =
                     *(int *)(*(long *)(param_1 + 0x80) + uVar11 * 4) + 1;
                iVar8 = *(int *)(param_1 + 0x68) * 0xbc8f;
                iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                                -0x7fffffff;
                *(int *)(param_1 + 0x68) = iVar8;
                *(short *)((long)param_2 + uVar11 * 2) =
                     (short)(int)((float)(*(double *)(param_1 + 0x58) *
                                         ((*(double *)(*(long *)(param_1 + 0x78) + lVar21) +
                                          (double)iVar8 / 2147483647.0) / 10.0)) * 32767.0);
                uVar11 = uVar11 + 1;
              } while (uVar2 != uVar11);
              lVar9 = lVar9 + 1;
              param_2 = (float *)((long)param_2 + uVar2 * 2);
            } while (lVar9 != param_3);
          }
          else {
            lVar9 = 0;
            uVar11 = uVar2 & 0xfffffff0;
            pfVar12 = param_2 + 4;
            do {
              uVar15 = **(uint **)(param_1 + 0x80);
              if ((uVar15 & 1) == 0) {
                if (uVar15 == 0) {
                  uVar15 = 0;
                }
                else {
                  uVar13 = 0x11;
                  uVar10 = uVar15 >> 0x10;
                  if ((uVar15 & 0xfffe) != 0) {
                    uVar13 = 1;
                    uVar10 = uVar15;
                  }
                  bVar6 = (uVar10 & 0xff) != 0;
                  uVar15 = uVar10 >> 8;
                  if (bVar6) {
                    uVar15 = uVar10;
                  }
                  uVar10 = uVar13 | 8;
                  if (bVar6) {
                    uVar10 = uVar13;
                  }
                  uVar13 = uVar10 | 4;
                  uVar22 = uVar15 >> 4;
                  if ((uVar15 & 0xf) != 0) {
                    uVar13 = uVar10;
                    uVar22 = uVar15;
                  }
                  uVar10 = uVar22 >> 2;
                  uVar15 = uVar13 | 2;
                  if ((uVar22 & 3) != 0) {
                    uVar10 = uVar22;
                    uVar15 = uVar13;
                  }
                  uVar15 = uVar15 - (uVar10 & 1);
                }
              }
              else {
                uVar15 = 0;
              }
              lVar17 = (ulong)(uVar15 & 0xf) * 8;
              iVar8 = *(int *)(param_1 + 0x68) * 0xbc8f;
              iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                              -0x7fffffff;
              lVar20 = **(long **)(param_1 + 0x70);
              dVar25 = *(double *)(lVar20 + lVar17);
              *(int *)(param_1 + 0x68) = iVar8;
              dVar23 = (double)iVar8 / 2147483647.0;
              *(double *)(lVar20 + lVar17) = dVar23;
              **(double **)(param_1 + 0x78) = **(double **)(param_1 + 0x78) + (dVar23 - dVar25);
              **(int **)(param_1 + 0x80) = **(int **)(param_1 + 0x80) + 1;
              iVar8 = *(int *)(param_1 + 0x68) * 0xbc8f;
              iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                              -0x7fffffff;
              *(int *)(param_1 + 0x68) = iVar8;
              uVar14 = (undefined2)
                       (int)((float)(*(double *)(param_1 + 0x58) *
                                    ((**(double **)(param_1 + 0x78) + (double)iVar8 / 2147483647.0)
                                    / 10.0)) * 32767.0);
              if (uVar1 < 0x10) {
                uVar18 = 0;
LAB_00607fb0:
                lVar17 = uVar2 - uVar18;
                puVar19 = (undefined2 *)((long)param_2 + uVar18 * 2);
                do {
                  lVar17 = lVar17 + -1;
                  *puVar19 = uVar14;
                  puVar19 = puVar19 + 1;
                } while (lVar17 != 0);
              }
              else {
                uVar7 = CONCAT26(uVar14,CONCAT24(uVar14,CONCAT22(uVar14,uVar14)));
                uVar26 = CONCAT26(uVar14,CONCAT24(uVar14,CONCAT22(uVar14,uVar14)));
                pfVar16 = pfVar12;
                uVar18 = uVar11;
                do {
                  *(undefined8 *)(pfVar16 + -2) = uVar26;
                  *(undefined8 *)(pfVar16 + -4) = uVar7;
                  *(undefined8 *)(pfVar16 + 2) = uVar26;
                  *(undefined8 *)pfVar16 = uVar7;
                  uVar18 = uVar18 - 0x10;
                  pfVar16 = pfVar16 + 8;
                } while (uVar18 != 0);
                uVar18 = uVar11;
                if (uVar11 != uVar2) goto LAB_00607fb0;
              }
              lVar9 = lVar9 + 1;
              pfVar12 = (float *)((long)pfVar12 + uVar2 * 2);
              param_2 = (float *)((long)param_2 + uVar2 * 2);
            } while (lVar9 != param_3);
          }
        }
        else if (uVar15 == 5) {
          if (*(int *)(param_1 + 0x60) == 0) {
            lVar9 = 0;
            do {
              uVar11 = 0;
              do {
                uVar15 = *(uint *)(*(long *)(param_1 + 0x80) + uVar11 * 4);
                if ((uVar15 & 1) == 0) {
                  if (uVar15 == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar10 = 0x11;
                    uVar1 = uVar15 >> 0x10;
                    if ((uVar15 & 0xfffe) != 0) {
                      uVar10 = 1;
                      uVar1 = uVar15;
                    }
                    bVar6 = (uVar1 & 0xff) != 0;
                    uVar15 = uVar1 >> 8;
                    if (bVar6) {
                      uVar15 = uVar1;
                    }
                    uVar1 = uVar10 | 8;
                    if (bVar6) {
                      uVar1 = uVar10;
                    }
                    uVar10 = uVar1 | 4;
                    uVar13 = uVar15 >> 4;
                    if ((uVar15 & 0xf) != 0) {
                      uVar10 = uVar1;
                      uVar13 = uVar15;
                    }
                    uVar1 = uVar13 >> 2;
                    uVar15 = uVar10 | 2;
                    if ((uVar13 & 3) != 0) {
                      uVar1 = uVar13;
                      uVar15 = uVar10;
                    }
                    uVar15 = uVar15 - (uVar1 & 1);
                  }
                }
                else {
                  uVar15 = 0;
                }
                lVar17 = (ulong)(uVar15 & 0xf) * 8;
                iVar8 = *(int *)(param_1 + 0x68) * 0xbc8f;
                lVar21 = uVar11 * 8;
                iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                                -0x7fffffff;
                lVar20 = *(long *)(*(long *)(param_1 + 0x70) + lVar21);
                dVar25 = *(double *)(lVar20 + lVar17);
                *(int *)(param_1 + 0x68) = iVar8;
                dVar23 = (double)iVar8 / 2147483647.0;
                uVar18 = uVar11 + 1;
                *(double *)(lVar20 + lVar17) = dVar23;
                *(double *)(*(long *)(param_1 + 0x78) + lVar21) =
                     *(double *)(*(long *)(param_1 + 0x78) + lVar21) + (dVar23 - dVar25);
                *(int *)(*(long *)(param_1 + 0x80) + uVar11 * 4) =
                     *(int *)(*(long *)(param_1 + 0x80) + uVar11 * 4) + 1;
                iVar8 = *(int *)(param_1 + 0x68) * 0xbc8f;
                iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                                -0x7fffffff;
                *(int *)(param_1 + 0x68) = iVar8;
                param_2[uVar11] =
                     (float)(*(double *)(param_1 + 0x58) *
                            ((*(double *)(*(long *)(param_1 + 0x78) + lVar21) +
                             (double)iVar8 / 2147483647.0) / 10.0));
                uVar11 = uVar18;
              } while (uVar2 != uVar18);
              lVar9 = lVar9 + 1;
              param_2 = param_2 + uVar2;
            } while (lVar9 != param_3);
          }
          else {
            lVar9 = 0;
            uVar11 = uVar2 & 0xfffffff8;
            pfVar12 = param_2 + 4;
            do {
              uVar15 = **(uint **)(param_1 + 0x80);
              if ((uVar15 & 1) == 0) {
                if (uVar15 == 0) {
                  uVar15 = 0;
                }
                else {
                  uVar13 = 0x11;
                  uVar10 = uVar15 >> 0x10;
                  if ((uVar15 & 0xfffe) != 0) {
                    uVar13 = 1;
                    uVar10 = uVar15;
                  }
                  bVar6 = (uVar10 & 0xff) != 0;
                  uVar15 = uVar10 >> 8;
                  if (bVar6) {
                    uVar15 = uVar10;
                  }
                  uVar10 = uVar13 | 8;
                  if (bVar6) {
                    uVar10 = uVar13;
                  }
                  uVar13 = uVar10 | 4;
                  uVar22 = uVar15 >> 4;
                  if ((uVar15 & 0xf) != 0) {
                    uVar13 = uVar10;
                    uVar22 = uVar15;
                  }
                  uVar10 = uVar22 >> 2;
                  uVar15 = uVar13 | 2;
                  if ((uVar22 & 3) != 0) {
                    uVar10 = uVar22;
                    uVar15 = uVar13;
                  }
                  uVar15 = uVar15 - (uVar10 & 1);
                }
              }
              else {
                uVar15 = 0;
              }
              lVar17 = (ulong)(uVar15 & 0xf) * 8;
              iVar8 = *(int *)(param_1 + 0x68) * 0xbc8f;
              iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                              -0x7fffffff;
              lVar20 = **(long **)(param_1 + 0x70);
              dVar25 = *(double *)(lVar20 + lVar17);
              *(int *)(param_1 + 0x68) = iVar8;
              dVar23 = (double)iVar8 / 2147483647.0;
              *(double *)(lVar20 + lVar17) = dVar23;
              **(double **)(param_1 + 0x78) = **(double **)(param_1 + 0x78) + (dVar23 - dVar25);
              **(int **)(param_1 + 0x80) = **(int **)(param_1 + 0x80) + 1;
              iVar8 = *(int *)(param_1 + 0x68) * 0xbc8f;
              iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                              -0x7fffffff;
              *(int *)(param_1 + 0x68) = iVar8;
              fVar24 = (float)(*(double *)(param_1 + 0x58) *
                              ((**(double **)(param_1 + 0x78) + (double)iVar8 / 2147483647.0) / 10.0
                              ));
              if (uVar1 < 8) {
                uVar18 = 0;
LAB_00607cc8:
                lVar17 = uVar2 - uVar18;
                pfVar16 = param_2 + uVar18;
                do {
                  lVar17 = lVar17 + -1;
                  *pfVar16 = fVar24;
                  pfVar16 = pfVar16 + 1;
                } while (lVar17 != 0);
              }
              else {
                pfVar16 = pfVar12;
                uVar18 = uVar11;
                do {
                  *(ulong *)(pfVar16 + -2) = CONCAT44(fVar24,fVar24);
                  *(ulong *)(pfVar16 + -4) = CONCAT44(fVar24,fVar24);
                  *(ulong *)(pfVar16 + 2) = CONCAT44(fVar24,fVar24);
                  *(ulong *)pfVar16 = CONCAT44(fVar24,fVar24);
                  uVar18 = uVar18 - 8;
                  pfVar16 = pfVar16 + 8;
                } while (uVar18 != 0);
                uVar18 = uVar11;
                if (uVar11 != uVar2) goto LAB_00607cc8;
              }
              lVar9 = lVar9 + 1;
              pfVar12 = pfVar12 + uVar2;
              param_2 = param_2 + uVar2;
            } while (lVar9 != param_3);
          }
        }
        else {
          iVar8 = *(int *)(&DAT_00281c10 + (ulong)uVar15 * 4);
          if (*(int *)(param_1 + 0x60) == 0) {
            lVar9 = 0;
            do {
              uVar15 = 0;
              uVar11 = 0;
              do {
                uVar10 = *(uint *)(*(long *)(param_1 + 0x80) + uVar11 * 4);
                if ((uVar10 & 1) == 0) {
                  if (uVar10 == 0) {
                    uVar10 = 0;
                  }
                  else {
                    uVar22 = 0x11;
                    uVar13 = uVar10 >> 0x10;
                    if ((uVar10 & 0xfffe) != 0) {
                      uVar22 = 1;
                      uVar13 = uVar10;
                    }
                    bVar6 = (uVar13 & 0xff) != 0;
                    uVar10 = uVar13 >> 8;
                    if (bVar6) {
                      uVar10 = uVar13;
                    }
                    uVar13 = uVar22 | 8;
                    if (bVar6) {
                      uVar13 = uVar22;
                    }
                    uVar22 = uVar13 | 4;
                    uVar5 = uVar10 >> 4;
                    if ((uVar10 & 0xf) != 0) {
                      uVar22 = uVar13;
                      uVar5 = uVar10;
                    }
                    uVar13 = uVar5 >> 2;
                    uVar10 = uVar22 | 2;
                    if ((uVar5 & 3) != 0) {
                      uVar13 = uVar5;
                      uVar10 = uVar22;
                    }
                    uVar10 = uVar10 - (uVar13 & 1);
                  }
                }
                else {
                  uVar10 = 0;
                }
                lVar17 = (ulong)(uVar10 & 0xf) * 8;
                iVar3 = *(int *)(param_1 + 0x68) * 0xbc8f;
                lVar21 = uVar11 * 8;
                iVar3 = iVar3 + ((int)((long)iVar3 * 0x40000001 >> 0x3d) - (iVar3 >> 0x1f)) *
                                -0x7fffffff;
                lVar20 = *(long *)(*(long *)(param_1 + 0x70) + lVar21);
                dVar25 = *(double *)(lVar20 + lVar17);
                *(int *)(param_1 + 0x68) = iVar3;
                dVar23 = (double)iVar3 / 2147483647.0;
                *(double *)(lVar20 + lVar17) = dVar23;
                *(double *)(*(long *)(param_1 + 0x78) + lVar21) =
                     *(double *)(*(long *)(param_1 + 0x78) + lVar21) + (dVar23 - dVar25);
                *(int *)(*(long *)(param_1 + 0x80) + uVar11 * 4) =
                     *(int *)(*(long *)(param_1 + 0x80) + uVar11 * 4) + 1;
                iVar3 = *(int *)(param_1 + 0x68) * 0xbc8f;
                iVar3 = iVar3 + ((int)((long)iVar3 * 0x40000001 >> 0x3d) - (iVar3 >> 0x1f)) *
                                -0x7fffffff;
                *(int *)(param_1 + 0x68) = iVar3;
                local_8c = (float)(*(double *)(param_1 + 0x58) *
                                  ((*(double *)(*(long *)(param_1 + 0x78) + lVar21) +
                                   (double)iVar3 / 2147483647.0) / 10.0));
                ma_pcm_convert((long)param_2 + (ulong)uVar15 + lVar9 * (ulong)(iVar8 * uVar1),
                               *(undefined4 *)(param_1 + 0x48),&local_8c,5,1,0);
                uVar11 = uVar11 + 1;
                uVar15 = uVar15 + iVar8;
              } while (uVar2 != uVar11);
              lVar9 = lVar9 + 1;
            } while (lVar9 != param_3);
          }
          else {
            lVar9 = 0;
            do {
              uVar15 = **(uint **)(param_1 + 0x80);
              if ((uVar15 & 1) == 0) {
                if (uVar15 == 0) {
                  uVar15 = 0;
                }
                else {
                  uVar13 = 0x11;
                  uVar10 = uVar15 >> 0x10;
                  if ((uVar15 & 0xfffe) != 0) {
                    uVar13 = 1;
                    uVar10 = uVar15;
                  }
                  bVar6 = (uVar10 & 0xff) != 0;
                  uVar15 = uVar10 >> 8;
                  if (bVar6) {
                    uVar15 = uVar10;
                  }
                  uVar10 = uVar13 | 8;
                  if (bVar6) {
                    uVar10 = uVar13;
                  }
                  uVar13 = uVar10 | 4;
                  uVar22 = uVar15 >> 4;
                  if ((uVar15 & 0xf) != 0) {
                    uVar13 = uVar10;
                    uVar22 = uVar15;
                  }
                  uVar10 = uVar22 >> 2;
                  uVar15 = uVar13 | 2;
                  if ((uVar22 & 3) != 0) {
                    uVar10 = uVar22;
                    uVar15 = uVar13;
                  }
                  uVar15 = uVar15 - (uVar10 & 1);
                }
              }
              else {
                uVar15 = 0;
              }
              uVar10 = 0;
              lVar17 = (ulong)(uVar15 & 0xf) * 8;
              iVar3 = *(int *)(param_1 + 0x68) * 0xbc8f;
              iVar3 = iVar3 + ((int)((long)iVar3 * 0x40000001 >> 0x3d) - (iVar3 >> 0x1f)) *
                              -0x7fffffff;
              lVar20 = **(long **)(param_1 + 0x70);
              dVar25 = *(double *)(lVar20 + lVar17);
              *(int *)(param_1 + 0x68) = iVar3;
              dVar23 = (double)iVar3 / 2147483647.0;
              *(double *)(lVar20 + lVar17) = dVar23;
              **(double **)(param_1 + 0x78) = **(double **)(param_1 + 0x78) + (dVar23 - dVar25);
              **(int **)(param_1 + 0x80) = **(int **)(param_1 + 0x80) + 1;
              iVar3 = *(int *)(param_1 + 0x68) * 0xbc8f;
              iVar3 = iVar3 + ((int)((long)iVar3 * 0x40000001 >> 0x3d) - (iVar3 >> 0x1f)) *
                              -0x7fffffff;
              *(int *)(param_1 + 0x68) = iVar3;
              local_8c = (float)(*(double *)(param_1 + 0x58) *
                                ((**(double **)(param_1 + 0x78) + (double)iVar3 / 2147483647.0) /
                                10.0));
              uVar11 = uVar2;
              do {
                ma_pcm_convert((long)param_2 + (ulong)uVar10 + lVar9 * (ulong)(iVar8 * uVar1),
                               *(undefined4 *)(param_1 + 0x48),&local_8c,5,1,0);
                uVar11 = uVar11 - 1;
                uVar10 = uVar10 + iVar8;
              } while (uVar11 != 0);
              lVar9 = lVar9 + 1;
            } while (lVar9 != param_3);
          }
        }
        goto LAB_00608a64;
      }
      if (iVar8 != 0) {
        uVar7 = 0xfffffffd;
        goto LAB_00608a84;
      }
      uVar15 = *(uint *)(param_1 + 0x48);
      uVar1 = *(uint *)(param_1 + 0x4c);
      uVar2 = (ulong)uVar1;
      if (uVar15 == 2) {
        dVar23 = *(double *)(param_1 + 0x58);
        iVar8 = *(int *)(param_1 + 0x68);
        if (*(int *)(param_1 + 0x60) == 0) {
          lVar9 = 0;
          uVar11 = uVar2;
          pfVar12 = param_2;
          do {
            do {
              iVar8 = iVar8 * 0xbc8f;
              uVar11 = uVar11 - 1;
              iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                              -0x7fffffff;
              *(short *)param_2 =
                   (short)(int)((float)(dVar23 * ((double)iVar8 / 2147483647.0)) * 32767.0);
              param_2 = (float *)((long)param_2 + 2);
            } while (uVar11 != 0);
            lVar9 = lVar9 + 1;
            param_2 = (float *)((long)pfVar12 + uVar2 * 2);
            uVar11 = uVar2;
            pfVar12 = param_2;
          } while (lVar9 != param_3);
        }
        else {
          lVar9 = 0;
          uVar11 = uVar2 & 0xfffffff0;
          pfVar12 = param_2 + 4;
          do {
            iVar8 = iVar8 * 0xbc8f;
            iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                            -0x7fffffff;
            uVar14 = (undefined2)(int)((float)(dVar23 * ((double)iVar8 / 2147483647.0)) * 32767.0);
            if (uVar1 < 0x10) {
              uVar18 = 0;
LAB_00608194:
              lVar17 = uVar2 - uVar18;
              puVar19 = (undefined2 *)((long)param_2 + uVar18 * 2);
              do {
                lVar17 = lVar17 + -1;
                *puVar19 = uVar14;
                puVar19 = puVar19 + 1;
              } while (lVar17 != 0);
            }
            else {
              uVar7 = CONCAT26(uVar14,CONCAT24(uVar14,CONCAT22(uVar14,uVar14)));
              uVar26 = CONCAT26(uVar14,CONCAT24(uVar14,CONCAT22(uVar14,uVar14)));
              pfVar16 = pfVar12;
              uVar18 = uVar11;
              do {
                *(undefined8 *)(pfVar16 + -2) = uVar26;
                *(undefined8 *)(pfVar16 + -4) = uVar7;
                *(undefined8 *)(pfVar16 + 2) = uVar26;
                *(undefined8 *)pfVar16 = uVar7;
                uVar18 = uVar18 - 0x10;
                pfVar16 = pfVar16 + 8;
              } while (uVar18 != 0);
              uVar18 = uVar11;
              if (uVar11 != uVar2) goto LAB_00608194;
            }
            lVar9 = lVar9 + 1;
            pfVar12 = (float *)((long)pfVar12 + uVar2 * 2);
            param_2 = (float *)((long)param_2 + uVar2 * 2);
          } while (lVar9 != param_3);
        }
      }
      else {
        if (uVar15 != 5) {
          iVar8 = *(int *)(&DAT_00281c10 + (ulong)uVar15 * 4);
          if (*(int *)(param_1 + 0x60) == 0) {
            lVar9 = 0;
            do {
              uVar15 = 0;
              uVar11 = uVar2;
              do {
                iVar3 = *(int *)(param_1 + 0x68) * 0xbc8f;
                iVar3 = iVar3 + ((int)((long)iVar3 * 0x40000001 >> 0x3d) - (iVar3 >> 0x1f)) *
                                -0x7fffffff;
                *(int *)(param_1 + 0x68) = iVar3;
                local_8c = (float)(*(double *)(param_1 + 0x58) * ((double)iVar3 / 2147483647.0));
                ma_pcm_convert((long)param_2 + (ulong)uVar15 + lVar9 * (ulong)(iVar8 * uVar1),
                               *(undefined4 *)(param_1 + 0x48),&local_8c,5,1,0);
                uVar11 = uVar11 - 1;
                uVar15 = uVar15 + iVar8;
              } while (uVar11 != 0);
              lVar9 = lVar9 + 1;
            } while (lVar9 != param_3);
          }
          else {
            lVar9 = 0;
            do {
              uVar15 = 0;
              iVar3 = *(int *)(param_1 + 0x68) * 0xbc8f;
              iVar3 = iVar3 + ((int)((long)iVar3 * 0x40000001 >> 0x3d) - (iVar3 >> 0x1f)) *
                              -0x7fffffff;
              *(int *)(param_1 + 0x68) = iVar3;
              local_8c = (float)(*(double *)(param_1 + 0x58) * ((double)iVar3 / 2147483647.0));
              uVar11 = uVar2;
              do {
                ma_pcm_convert((long)param_2 + (ulong)uVar15 + lVar9 * (ulong)(iVar8 * uVar1),
                               *(undefined4 *)(param_1 + 0x48),&local_8c,5,1,0);
                uVar11 = uVar11 - 1;
                uVar15 = uVar15 + iVar8;
              } while (uVar11 != 0);
              lVar9 = lVar9 + 1;
            } while (lVar9 != param_3);
          }
          goto LAB_00608a64;
        }
        dVar23 = *(double *)(param_1 + 0x58);
        iVar8 = *(int *)(param_1 + 0x68);
        if (*(int *)(param_1 + 0x60) == 0) {
          lVar9 = 0;
          uVar11 = uVar2;
          pfVar12 = param_2;
          do {
            do {
              iVar8 = iVar8 * 0xbc8f;
              uVar11 = uVar11 - 1;
              iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                              -0x7fffffff;
              *param_2 = (float)(dVar23 * ((double)iVar8 / 2147483647.0));
              param_2 = param_2 + 1;
            } while (uVar11 != 0);
            lVar9 = lVar9 + 1;
            param_2 = pfVar12 + uVar2;
            uVar11 = uVar2;
            pfVar12 = param_2;
          } while (lVar9 != param_3);
        }
        else {
          lVar9 = 0;
          uVar11 = uVar2 & 0xfffffff8;
          pfVar12 = param_2 + 4;
          do {
            iVar8 = iVar8 * 0xbc8f;
            iVar8 = iVar8 + ((int)((long)iVar8 * 0x40000001 >> 0x3d) - (iVar8 >> 0x1f)) *
                            -0x7fffffff;
            fVar24 = (float)(dVar23 * ((double)iVar8 / 2147483647.0));
            if (uVar1 < 8) {
              uVar18 = 0;
LAB_00607aec:
              lVar17 = uVar2 - uVar18;
              pfVar16 = param_2 + uVar18;
              do {
                lVar17 = lVar17 + -1;
                *pfVar16 = fVar24;
                pfVar16 = pfVar16 + 1;
              } while (lVar17 != 0);
            }
            else {
              pfVar16 = pfVar12;
              uVar18 = uVar11;
              do {
                *(ulong *)(pfVar16 + -2) = CONCAT44(fVar24,fVar24);
                *(ulong *)(pfVar16 + -4) = CONCAT44(fVar24,fVar24);
                *(ulong *)(pfVar16 + 2) = CONCAT44(fVar24,fVar24);
                *(ulong *)pfVar16 = CONCAT44(fVar24,fVar24);
                uVar18 = uVar18 - 8;
                pfVar16 = pfVar16 + 8;
              } while (uVar18 != 0);
              uVar18 = uVar11;
              if (uVar11 != uVar2) goto LAB_00607aec;
            }
            lVar9 = lVar9 + 1;
            pfVar12 = pfVar12 + uVar2;
            param_2 = param_2 + uVar2;
          } while (lVar9 != param_3);
        }
      }
    }
    *(int *)(param_1 + 0x68) = iVar8;
  }
LAB_00608a64:
  if (param_4 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    *param_4 = param_3;
  }
LAB_00608a84:
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


// ===== 00608dcc  ma_noise_init =====

ulong ma_noise_init(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  void *__ptr;
  ulong uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 8) == 2) {
    lVar3 = (ulong)uVar1 << 3;
LAB_00608e20:
    uVar2 = lVar3 + 7U & 0x1fffffffff8;
    if (uVar2 != 0) {
      if (param_2 == (undefined8 *)0x0) {
        __ptr = malloc(uVar2);
      }
      else {
        if ((code *)param_2[1] == (code *)0x0) {
          return 0xfffffffc;
        }
        __ptr = (void *)(*(code *)param_2[1])(uVar2,*param_2);
      }
      if (__ptr == (void *)0x0) {
        return 0xfffffffc;
      }
      goto LAB_00608e84;
    }
  }
  else if (*(int *)(param_1 + 8) == 1) {
    lVar3 = (ulong)uVar1 * 0x94;
    goto LAB_00608e20;
  }
  __ptr = (void *)0x0;
LAB_00608e84:
  uVar2 = ma_noise_init_preallocated(param_1,__ptr);
  if ((int)uVar2 == 0) {
    *(undefined4 *)(param_3 + 0x90) = 1;
    return uVar2;
  }
  if (__ptr == (void *)0x0) {
    return uVar2;
  }
  if (param_2 == (undefined8 *)0x0) {
    free(__ptr);
    return uVar2 & 0xffffffff;
  }
  if ((code *)param_2[3] != (code *)0x0) {
    (*(code *)param_2[3])(__ptr,*param_2);
    return uVar2 & 0xffffffff;
  }
  return uVar2;
}


// ===== 00608ee4  ma_noise_uninit =====

void ma_noise_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x90) != 0)) &&
     (__ptr = *(void **)(param_1 + 0x88), __ptr != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(__ptr);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00608f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(__ptr,*param_2);
      return;
    }
  }
  return;
}


// ===== 00608f14  ma_noise_set_amplitude =====

undefined8 ma_noise_set_amplitude(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x58) = param_1;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 00608f30  ma_noise_set_seed =====

undefined8 ma_noise_set_seed(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = param_2;
    return 0;
  }
  return 0xfffffffe;
}


// ===== 00608f4c  ma_noise_set_type =====

undefined4 ma_noise_set_type(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffd;
  if (param_1 == 0) {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}


// ===== 00608f5c  ma_debug_fill_pcm_frames_with_sine_wave =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_debug_fill_pcm_frames_with_sine_wave
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               uint param_5)

{
  long lVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  undefined8 local_30;
  long local_28;
  
  local_78 = (undefined1 *)&local_a0;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_a0 = &PTR_ma_waveform_read_pcm_frames_00686900;
  uStack_4c = 0;
  local_30 = 0;
  local_38 = 1.0 / ((double)param_5 / 400.0);
  uStack_40 = _UNK_0024e328;
  local_48 = _DAT_0024e320;
  local_98 = 0;
  local_88 = 0;
  uStack_60 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  uStack_70 = 0;
  local_68 = 0;
  local_58 = param_3;
  uStack_54 = param_4;
  local_50 = param_5;
  ma_waveform_read_pcm_frames(&local_a0,param_1,param_2,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0060901c  ma_node_graph_config_init =====

undefined4 ma_node_graph_config_init(undefined4 param_1)

{
  return param_1;
}


// ===== 00609028  ma_node_graph_init =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_node_graph_init(int *param_1,undefined8 *param_2,void *param_3)

{
  size_t __size;
  long lVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int *local_80;
  int *piStack_78;
  undefined **local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  int *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 == (void *)0x0) {
    uVar3 = 0xfffffffe;
    goto LAB_00609104;
  }
  memset(param_3,0,0x2f0);
  *(int *)((long)param_3 + 0x2dc) = param_1[1];
  local_5c = 0;
  local_54 = 0;
  local_60 = 0xff;
  local_68 = 0xff00000000;
  local_70 = &PTR_FUN_00686970;
  local_50 = param_1;
  uVar3 = ma_node_init(param_3,&local_70,param_2,param_3);
  if ((int)uVar3 != 0) goto LAB_00609104;
  local_98 = &PTR_FUN_00686988;
  uStack_88 = _UNK_0024e4c8;
  local_90 = _DAT_0024e4c0;
  local_80 = param_1;
  piStack_78 = param_1;
  uVar2 = ma_node_init(param_3,&local_98,param_2,(long)param_3 + 0x168);
  if (uVar2 != 0) {
    uVar3 = (ulong)uVar2;
    ma_node_uninit(param_3,param_2);
    goto LAB_00609104;
  }
  if (param_1[1] != 0) {
    __size = (ulong)(uint)(*param_1 * param_1[1]) << 2;
    if (param_2 == (undefined8 *)0x0) {
      pvVar4 = malloc(__size);
LAB_0060915c:
      *(void **)((long)param_3 + 0x2d0) = pvVar4;
      if (pvVar4 != (void *)0x0) goto LAB_00609164;
    }
    else {
      if ((code *)param_2[1] != (code *)0x0) {
        pvVar4 = (void *)(*(code *)param_2[1])(__size,*param_2);
        goto LAB_0060915c;
      }
      *(undefined8 *)((long)param_3 + 0x2d0) = 0;
    }
    ma_node_uninit((long)param_3 + 0x168,param_2);
    ma_node_uninit(param_3,param_2);
    uVar3 = 0xfffffffc;
    goto LAB_00609104;
  }
LAB_00609164:
  uVar6 = *(ulong *)(param_1 + 2);
  if (uVar6 == 0) {
    uVar6 = (ulong)(uint)(*param_1 << 0x13);
    if (*param_1 << 0x13 != 0) goto LAB_00609178;
  }
  else {
LAB_00609178:
    if (param_2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)malloc(uVar6 + 0x17);
    }
    else {
      if ((code *)param_2[1] == (code *)0x0) goto LAB_006091b4;
      puVar5 = (undefined8 *)(*(code *)param_2[1])(uVar6 + 0x17,*param_2);
    }
    if (puVar5 != (undefined8 *)0x0) {
      uVar3 = 0;
      *puVar5 = 0;
      puVar5[1] = uVar6;
      *(undefined8 **)((long)param_3 + 0x2e8) = puVar5;
      goto LAB_00609104;
    }
  }
LAB_006091b4:
  *(undefined8 *)((long)param_3 + 0x2e8) = 0;
  ma_node_uninit((long)param_3 + 0x168,param_2);
  ma_node_uninit(param_3,param_2);
  pvVar4 = *(void **)((long)param_3 + 0x2d0);
  if (pvVar4 != (void *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      free(pvVar4);
    }
    else if ((code *)param_2[3] != (code *)0x0) {
      (*(code *)param_2[3])(pvVar4,*param_2);
    }
  }
  uVar3 = 0xfffffffc;
LAB_00609104:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00609224  ma_node_init =====

void ma_node_init(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  void *__ptr;
  size_t local_70 [5];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_006095dc(param_1,param_2,local_70);
  if ((int)uVar2 != 0) goto LAB_00609264;
  if (local_70[0] == 0) {
    uVar2 = ma_node_init_preallocated(param_1,param_2,0,param_4);
    if ((int)uVar2 != 0) goto LAB_00609264;
LAB_00609304:
    uVar2 = 0;
    *(undefined4 *)(param_4 + 0x160) = 1;
  }
  else {
    if (param_3 == (undefined8 *)0x0) {
      __ptr = malloc(local_70[0]);
joined_r0x0060931c:
      if (__ptr != (void *)0x0) {
        uVar2 = ma_node_init_preallocated(param_1,param_2,__ptr,param_4);
        if ((int)uVar2 != 0) {
          if (param_3 == (undefined8 *)0x0) {
            uVar2 = uVar2 & 0xffffffff;
            free(__ptr);
          }
          else if ((code *)param_3[3] != (code *)0x0) {
            uVar2 = uVar2 & 0xffffffff;
            (*(code *)param_3[3])(__ptr,*param_3);
          }
          goto LAB_00609264;
        }
        goto LAB_00609304;
      }
    }
    else if ((code *)param_3[1] != (code *)0x0) {
      __ptr = (void *)(*(code *)param_3[1])(local_70[0],*param_3);
      goto joined_r0x0060931c;
    }
    uVar2 = 0xfffffffc;
  }
LAB_00609264:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 00609340  ma_node_uninit =====

void ma_node_uninit(long param_1,undefined8 *param_2)

{
  long *plVar1;
  void *__ptr;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar3 = 0;
      do {
        ma_node_detach_output_bus(param_1,uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x14));
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar4 = 0;
      do {
        plVar1 = (long *)(*(long *)(param_1 + 0x18) + uVar4 * 0x48 + 0x20);
        puVar2 = (undefined8 *)*plVar1;
        while (puVar2 != (undefined8 *)0x0) {
          ma_node_detach_output_bus(*puVar2,*(undefined1 *)(puVar2 + 1));
          puVar2 = (undefined8 *)*plVar1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x10));
    }
    if ((*(int *)(param_1 + 0x160) != 0) &&
       (__ptr = *(void **)(param_1 + 0x158), __ptr != (void *)0x0)) {
      if (param_2 == (undefined8 *)0x0) {
        free(__ptr);
        return;
      }
      if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0060940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_2[3])(__ptr,*param_2);
        return;
      }
    }
  }
  return;
}


// ===== 00609438  ma_node_detach_output_bus =====

undefined8 ma_node_detach_output_bus(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  byte *pbVar13;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (param_2 < *(uint *)(param_1 + 0x14)) {
    uVar9 = (ulong)param_2;
    lVar6 = *(long *)(param_1 + 0x20) + (ulong)param_2 * 0x38;
    while (iVar4 = FUN_00341150(1,lVar6 + 0x18), iVar4 != 0) {
      do {
      } while (*(int *)(lVar6 + 0x18) == 1);
    }
    lVar10 = *(long *)(param_1 + 0x20);
    plVar11 = (long *)(lVar10 + uVar9 * 0x38 + 0x30);
    lVar6 = *plVar11;
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x18);
      lVar12 = lVar10 + uVar9 * 0x38;
      pbVar13 = (byte *)(lVar12 + 10);
      uVar7 = (ulong)*pbVar13;
      FUN_003410a0(0,lVar12 + 0x14);
      piVar1 = (int *)(lVar6 + uVar7 * 0x48 + 0x3c);
      while (iVar4 = FUN_00341150(1,piVar1), iVar4 != 0) {
        do {
        } while (*piVar1 == 1);
      }
      lVar12 = lVar10 + uVar9 * 0x38;
      plVar2 = (long *)(lVar12 + 0x28);
      plVar3 = (long *)(lVar12 + 0x20);
      lVar12 = *plVar2;
      lVar8 = *plVar3;
      if (lVar12 != 0) {
        FUN_00341070(lVar8,lVar12 + 0x20);
      }
      if (lVar8 != 0) {
        FUN_00341070(lVar12,lVar8 + 0x28);
      }
      *piVar1 = 0;
      FUN_00341070(0,plVar3);
      FUN_00341070(0,plVar2);
      *plVar11 = 0;
      *pbVar13 = 0;
      do {
      } while ((int)*(undefined8 *)(lVar6 + uVar7 * 0x48 + 0x38) != 0);
      do {
      } while ((int)*(undefined8 *)(lVar10 + uVar9 * 0x38 + 0x10) != 0);
      lVar10 = *(long *)(param_1 + 0x20);
    }
    uVar5 = 0;
    *(undefined4 *)(lVar10 + uVar9 * 0x38 + 0x18) = 0;
  }
  else {
    uVar5 = 0xfffffffe;
  }
  return uVar5;
}


// ===== 006095d8  FUN_006095d8 =====

void FUN_006095d8(void)

{
  return;
}


// ===== 006095dc  FUN_006095dc =====

undefined4 FUN_006095dc(long param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  
  if (param_3 != (long *)0x0) {
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
  }
  if (((param_2 == (undefined8 *)0x0) || (plVar9 = (long *)*param_2, plVar9 == (long *)0x0)) ||
     (*plVar9 == 0)) {
    return 0xfffffffe;
  }
  bVar3 = *(byte *)(plVar9 + 2);
  uVar10 = (uint)bVar3;
  if (bVar3 == 0xff) {
    uVar8 = *(uint *)((long)param_2 + 0xc);
  }
  else {
    uVar8 = (uint)bVar3;
    if ((*(uint *)((long)param_2 + 0xc) != 0xff) &&
       (uVar8 = uVar10, *(uint *)((long)param_2 + 0xc) != uVar10)) {
      return 0xfffffffe;
    }
  }
  uVar14 = (uint)*(byte *)((long)plVar9 + 0x11);
  uVar15 = (uint)*(byte *)((long)plVar9 + 0x11);
  if (uVar14 == 0xff) {
    uVar14 = *(uint *)(param_2 + 2);
  }
  else if ((*(uint *)(param_2 + 2) != 0xff) && (uVar14 = uVar15, *(uint *)(param_2 + 2) != uVar15))
  {
    return 0xfffffffe;
  }
  if (0xfe < uVar8) {
    return 0xfffffffe;
  }
  if (0xfe < uVar14) {
    return 0xfffffffe;
  }
  if ((uVar8 != 0) && (param_2[3] == 0)) {
    return 0xfffffffe;
  }
  if ((uVar14 != 0) && (param_2[4] == 0)) {
    return 0xfffffffe;
  }
  if ((*(byte *)((long)plVar9 + 0x14) & 1) != 0) {
    if (1 < uVar10) {
      return 0xfffffffe;
    }
    if (uVar15 != 1) {
      return 0xfffffffe;
    }
    if (*(int *)param_2[3] != *(int *)param_2[4]) {
      return 0xfffffffe;
    }
  }
  uVar11 = (ulong)uVar8;
  lVar7 = (uVar11 + (ulong)uVar8 * 8) * 8;
  if (uVar8 < 3) {
    lVar7 = 0;
  }
  lVar16 = 0;
  if (uVar8 < 3) {
    lVar16 = 0xffffffff;
  }
  param_3[1] = lVar16;
  if (uVar14 < 3) {
    param_3[2] = 0xffffffff;
    if ((uVar8 == 0) && (uVar14 == 1)) {
      param_3[3] = 0xffffffff;
      goto LAB_00609898;
    }
  }
  else {
    param_3[2] = lVar7;
    lVar7 = lVar7 + (ulong)uVar14 * 0x38;
  }
  uVar15 = *(uint *)(param_1 + 0x2dc);
  uVar10 = uVar15;
  if (0xfffe < uVar15) {
    uVar10 = 0xffff;
  }
  uVar2 = 0x1e0;
  if (uVar15 != 0) {
    uVar2 = uVar10;
  }
  iVar4 = uVar2 * 4;
  if (uVar8 == 0) {
    lVar16 = 0;
  }
  else {
    if (uVar8 < 8) {
      uVar18 = 0;
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      lVar12 = 0;
      lVar20 = 0;
      lVar21 = 0;
      uVar18 = uVar11 & 0x7ffffff8;
      lVar22 = 0;
      lVar23 = 0;
      lVar24 = 0;
      lVar25 = 0;
      puVar17 = (undefined8 *)(param_2[3] + 0x10);
      uVar19 = uVar18;
      do {
        puVar1 = puVar17 + -2;
        puVar5 = puVar17 + -1;
        puVar6 = puVar17 + 1;
        uVar26 = *puVar17;
        uVar19 = uVar19 - 8;
        puVar17 = puVar17 + 4;
        lVar20 = lVar20 + (ulong)(uint)(iVar4 * (int)*puVar5);
        lVar21 = lVar21 + (ulong)(uint)(iVar4 * (int)((ulong)*puVar5 >> 0x20));
        lVar16 = lVar16 + (ulong)(uint)(iVar4 * (int)*puVar1);
        lVar12 = lVar12 + (ulong)(uint)(iVar4 * (int)((ulong)*puVar1 >> 0x20));
        lVar24 = lVar24 + (ulong)(uint)(iVar4 * (int)*puVar6);
        lVar25 = lVar25 + (ulong)(uint)(iVar4 * (int)((ulong)*puVar6 >> 0x20));
        lVar22 = lVar22 + (ulong)(uint)(iVar4 * (int)uVar26);
        lVar23 = lVar23 + (ulong)(uint)(iVar4 * (int)((ulong)uVar26 >> 0x20));
      } while (uVar19 != 0);
      lVar16 = lVar22 + lVar16 + lVar24 + lVar20 + lVar23 + lVar12 + lVar25 + lVar21;
      if (uVar18 == uVar11) goto LAB_006097e8;
    }
    lVar12 = uVar11 - uVar18;
    piVar13 = (int *)(param_2[3] + uVar18 * 4);
    do {
      lVar12 = lVar12 + -1;
      lVar16 = lVar16 + (ulong)(uint)(iVar4 * *piVar13);
      piVar13 = piVar13 + 1;
    } while (lVar12 != 0);
  }
LAB_006097e8:
  if (uVar14 != 0) {
    uVar11 = (ulong)uVar14;
    if (uVar14 < 8) {
      uVar18 = 0;
    }
    else {
      lVar12 = 0;
      lVar20 = 0;
      lVar21 = 0;
      uVar18 = uVar11 & 0x7ffffff8;
      lVar22 = 0;
      lVar23 = 0;
      lVar24 = 0;
      lVar25 = 0;
      puVar17 = (undefined8 *)(param_2[4] + 0x10);
      uVar19 = uVar18;
      do {
        puVar1 = puVar17 + -2;
        puVar5 = puVar17 + -1;
        puVar6 = puVar17 + 1;
        uVar26 = *puVar17;
        uVar19 = uVar19 - 8;
        puVar17 = puVar17 + 4;
        lVar20 = lVar20 + (ulong)(uint)(iVar4 * (int)*puVar5);
        lVar21 = lVar21 + (ulong)(uint)(iVar4 * (int)((ulong)*puVar5 >> 0x20));
        lVar16 = lVar16 + (ulong)(uint)(iVar4 * (int)*puVar1);
        lVar12 = lVar12 + (ulong)(uint)(iVar4 * (int)((ulong)*puVar1 >> 0x20));
        lVar24 = lVar24 + (ulong)(uint)(iVar4 * (int)*puVar6);
        lVar25 = lVar25 + (ulong)(uint)(iVar4 * (int)((ulong)*puVar6 >> 0x20));
        lVar22 = lVar22 + (ulong)(uint)(iVar4 * (int)uVar26);
        lVar23 = lVar23 + (ulong)(uint)(iVar4 * (int)((ulong)uVar26 >> 0x20));
      } while (uVar19 != 0);
      lVar16 = lVar22 + lVar16 + lVar24 + lVar20 + lVar23 + lVar12 + lVar25 + lVar21;
      if (uVar18 == uVar11) goto LAB_00609888;
    }
    lVar12 = uVar11 - uVar18;
    piVar13 = (int *)(param_2[4] + uVar18 * 4);
    do {
      lVar12 = lVar12 + -1;
      lVar16 = lVar16 + (ulong)(uint)(iVar4 * *piVar13);
      piVar13 = piVar13 + 1;
    } while (lVar12 != 0);
  }
LAB_00609888:
  param_3[3] = lVar7;
  lVar7 = lVar7 + (lVar16 + 7U & 0xfffffffffffffff8);
LAB_00609898:
  *(uint *)(param_3 + 4) = uVar8;
  *(uint *)((long)param_3 + 0x24) = uVar14;
  *param_3 = lVar7;
  return 0;
}


// ===== 006098b4  ma_node_init_preallocated =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_node_init_preallocated(long param_1,long *param_2,void *param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  long *plVar3;
  long *plVar4;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  void *pvVar19;
  ulong uVar20;
  size_t local_80;
  long local_78;
  long lStack_70;
  long local_68;
  int local_60;
  int iStack_5c;
  long local_58;
  
  lVar9 = tpidr_el0;
  local_58 = *(long *)(lVar9 + 0x28);
  if (param_4 == (long *)0x0) {
LAB_00609b44:
    uVar11 = 0xfffffffe;
    goto LAB_00609b48;
  }
  param_4[0x2c] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  param_4[7] = 0;
  param_4[6] = 0;
  param_4[9] = 0;
  param_4[8] = 0;
  param_4[0xb] = 0;
  param_4[10] = 0;
  param_4[0xd] = 0;
  param_4[0xc] = 0;
  param_4[0xf] = 0;
  param_4[0xe] = 0;
  param_4[0x11] = 0;
  param_4[0x10] = 0;
  param_4[0x13] = 0;
  param_4[0x12] = 0;
  param_4[0x15] = 0;
  param_4[0x14] = 0;
  param_4[0x17] = 0;
  param_4[0x16] = 0;
  param_4[0x19] = 0;
  param_4[0x18] = 0;
  param_4[0x1b] = 0;
  param_4[0x1a] = 0;
  param_4[0x1d] = 0;
  param_4[0x1c] = 0;
  param_4[0x1f] = 0;
  param_4[0x1e] = 0;
  param_4[0x21] = 0;
  param_4[0x20] = 0;
  param_4[0x23] = 0;
  param_4[0x22] = 0;
  param_4[0x25] = 0;
  param_4[0x24] = 0;
  param_4[0x27] = 0;
  param_4[0x26] = 0;
  param_4[0x29] = 0;
  param_4[0x28] = 0;
  param_4[0x2b] = 0;
  param_4[0x2a] = 0;
  uVar11 = FUN_006095dc(param_1,param_2,&local_80);
  if ((int)uVar11 != 0) goto LAB_00609b48;
  param_4[0x2b] = (long)param_3;
  if ((param_3 != (void *)0x0) && (local_80 != 0)) {
    memset(param_3,0,local_80);
  }
  lVar10 = _UNK_0024ded8;
  lVar17 = _DAT_0024ded0;
  lVar12 = *param_2;
  lVar13 = param_2[1];
  *param_4 = param_1;
  param_4[1] = lVar12;
  *(int *)(param_4 + 7) = (int)lVar13;
  plVar3 = param_4 + 0xb;
  if (local_78 != 0xffffffff) {
    plVar3 = (long *)((long)param_3 + local_78);
  }
  param_4[9] = lVar10;
  param_4[8] = lVar17;
  plVar4 = param_4 + 0x1d;
  if (lStack_70 != 0xffffffff) {
    plVar4 = (long *)((long)param_3 + lStack_70);
  }
  *(int *)(param_4 + 2) = local_60;
  *(int *)((long)param_4 + 0x14) = iStack_5c;
  param_4[3] = (long)plVar3;
  param_4[4] = (long)plVar4;
  if (local_68 == 0xffffffff) {
    param_4[5] = 0;
    if (local_60 == 0) goto LAB_00609a3c;
LAB_006099b4:
    lVar13 = 0;
    uVar15 = 0;
    do {
      lVar17 = param_4[3];
      iVar8 = *(int *)(param_2[3] + uVar15 * 4);
      if (lVar17 != 0) {
        puVar1 = (undefined8 *)(lVar17 + lVar13);
        puVar1[8] = 0;
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar1[5] = 0;
        puVar1[4] = 0;
        puVar1[7] = 0;
        puVar1[6] = 0;
      }
      if (iVar8 == 0) goto LAB_00609b44;
      uVar6 = *(uint *)(param_4 + 2);
      uVar15 = uVar15 + 1;
      lVar17 = lVar17 + lVar13;
      lVar13 = lVar13 + 0x48;
      *(char *)(lVar17 + 0x40) = (char)iVar8;
    } while (uVar15 < uVar6);
    if (*(int *)((long)param_4 + 0x14) != 0) goto LAB_00609a40;
LAB_00609a08:
    uVar14 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x2dc);
    uVar6 = uVar7;
    if (0xfffe < uVar7) {
      uVar6 = 0xffff;
    }
    uVar2 = 0x1e0;
    if (uVar7 != 0) {
      uVar2 = (short)uVar6;
    }
    *(undefined2 *)(param_4 + 6) = uVar2;
    param_4[5] = (long)param_3 + local_68;
    if (local_60 != 0) goto LAB_006099b4;
LAB_00609a3c:
    if (iStack_5c == 0) goto LAB_00609a08;
LAB_00609a40:
    lVar13 = 0;
    uVar15 = 0;
    do {
      lVar17 = param_4[4];
      iVar8 = *(int *)(param_2[4] + uVar15 * 4);
      if (lVar17 != 0) {
        puVar1 = (undefined8 *)(lVar17 + lVar13);
        puVar1[6] = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar1[5] = 0;
        puVar1[4] = 0;
        puVar1[1] = 0;
        *puVar1 = 0;
      }
      if (iVar8 == 0) goto LAB_00609b44;
      puVar1 = (undefined8 *)(lVar17 + lVar13);
      uVar14 = (ulong)*(uint *)((long)param_4 + 0x14);
      lVar13 = lVar13 + 0x38;
      *(char *)(puVar1 + 1) = (char)uVar15;
      uVar15 = uVar15 + 1;
      *puVar1 = param_4;
      *(char *)((long)puVar1 + 9) = (char)iVar8;
      *(undefined4 *)((long)puVar1 + 0xc) = 1;
      *(undefined4 *)((long)puVar1 + 0x1c) = 0x3f800000;
    } while (uVar15 < uVar14);
  }
  if (param_4[5] != 0) {
    uVar15 = (ulong)*(uint *)(param_4 + 2);
    if (*(uint *)(param_4 + 2) != 0) {
      uVar14 = 0;
      do {
        pvVar19 = (void *)param_4[5];
        if (uVar14 != 0) {
          pbVar18 = (byte *)(param_4[3] + 0x40);
          uVar20 = uVar14;
          do {
            uVar20 = uVar20 - 1;
            pvVar19 = (void *)((long)pvVar19 + (ulong)*pbVar18 * (ulong)*(ushort *)(param_4 + 6) * 4
                              );
            pbVar18 = pbVar18 + 0x48;
          } while (uVar20 != 0);
        }
        lVar13 = (ulong)*(byte *)(param_4[3] + uVar14 * 0x48 + 0x40) *
                 (ulong)*(ushort *)(param_4 + 6);
        uVar20 = lVar13 * 4;
        if (lVar13 != 0) {
          do {
            sVar5 = uVar20;
            if (0xfffffffe < uVar20) {
              sVar5 = 0xffffffff;
            }
            if (pvVar19 != (void *)0x0) {
              memset(pvVar19,0,sVar5);
            }
            uVar20 = uVar20 - sVar5;
            pvVar19 = (void *)((long)pvVar19 + sVar5);
          } while (uVar20 != 0);
          uVar15 = (ulong)*(uint *)(param_4 + 2);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar15);
      uVar14 = (ulong)*(uint *)((long)param_4 + 0x14);
    }
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        uVar20 = (ulong)*(uint *)(param_4 + 2);
        pvVar19 = (void *)param_4[5];
        uVar16 = (ulong)*(ushort *)(param_4 + 6);
        if (*(uint *)(param_4 + 2) != 0) {
          pbVar18 = (byte *)(param_4[3] + 0x40);
          do {
            uVar20 = uVar20 - 1;
            pvVar19 = (void *)((long)pvVar19 + *pbVar18 * uVar16 * 4);
            pbVar18 = pbVar18 + 0x48;
          } while (uVar20 != 0);
        }
        if (uVar15 != 0) {
          pbVar18 = (byte *)(param_4[4] + 9);
          uVar20 = uVar15;
          do {
            uVar20 = uVar20 - 1;
            pvVar19 = (void *)((long)pvVar19 + uVar16 * *pbVar18 * 4);
            pbVar18 = pbVar18 + 0x38;
          } while (uVar20 != 0);
        }
        lVar13 = *(byte *)(param_4[4] + uVar15 * 0x38 + 9) * uVar16;
        uVar20 = lVar13 * 4;
        if (lVar13 != 0) {
          do {
            sVar5 = uVar20;
            if (0xfffffffe < uVar20) {
              sVar5 = 0xffffffff;
            }
            if (pvVar19 != (void *)0x0) {
              memset(pvVar19,0,sVar5);
            }
            uVar20 = uVar20 - sVar5;
            pvVar19 = (void *)((long)pvVar19 + sVar5);
          } while (uVar20 != 0);
          uVar14 = (ulong)*(uint *)((long)param_4 + 0x14);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar14);
    }
  }
  uVar11 = 0;
LAB_00609b48:
  if (*(long *)(lVar9 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


// ===== 00609c3c  FUN_00609c3c =====

void FUN_00609c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  ma_node_graph_read_pcm_frames(param_1,*param_4,*param_5,local_30);
  *param_5 = local_30[0];
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00609c98  ma_node_graph_read_pcm_frames =====

int ma_node_graph_read_pcm_frames(long param_1,long param_2,ulong param_3,ulong *param_4)

{
  size_t sVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_4 != (ulong *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
    iVar4 = -2;
  }
  else {
    if (*(int *)(param_1 + 0x17c) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint)*(byte *)(*(long *)(param_1 + 0x188) + 9);
    }
    uVar10 = (ulong)(uVar11 << 2);
    uVar9 = 0;
    do {
      while( true ) {
        uVar5 = param_3 - uVar9;
        if (param_3 < uVar9 || uVar5 == 0) goto LAB_00609df8;
        pvVar8 = (void *)(param_2 + uVar9 * uVar10);
        uVar2 = *(uint *)(param_1 + 0x2d8);
        uVar7 = uVar5;
        if (0xfffffffe < uVar5) {
          uVar7 = 0xffffffff;
        }
        if (uVar2 == 0) break;
        if ((uint)uVar7 <= uVar2) {
          uVar2 = (uint)uVar7;
        }
        sVar1 = (ulong)(uVar2 * uVar11) * 4;
        memcpy(pvVar8,*(void **)(param_1 + 0x2d0),sVar1);
        memmove(*(void **)(param_1 + 0x2d0),(void *)((long)*(void **)(param_1 + 0x2d0) + sVar1),
                (ulong)((*(int *)(param_1 + 0x2d8) - uVar2) * uVar11) << 2);
        uVar9 = uVar9 + uVar2;
        *(uint *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) - uVar2;
      }
      uVar6 = (ulong)*(uint *)(param_1 + 0x2dc);
      if ((*(uint *)(param_1 + 0x2dc) != 0) && (uVar7 = uVar6, uVar5 < uVar6)) {
        pvVar8 = *(void **)(param_1 + 0x2d0);
      }
      FUN_003410a0(1,param_1 + 0x2e0);
      iVar4 = FUN_00609e88(param_1 + 0x168,0,pvVar8,uVar7 & 0xffffffff,&local_6c,
                           *(undefined8 *)(param_1 + 0x1b8));
      FUN_003410a0(0,param_1 + 0x2e0);
      if (pvVar8 == *(void **)(param_1 + 0x2d0)) {
        *(uint *)(param_1 + 0x2d8) = local_6c;
      }
      else {
        uVar9 = uVar9 + local_6c;
      }
      if (iVar4 != 0) goto LAB_00609dfc;
    } while (local_6c != 0);
LAB_00609df8:
    iVar4 = 0;
LAB_00609dfc:
    if ((uVar9 <= param_3 && param_3 - uVar9 != 0) &&
       (uVar5 = (param_3 - uVar9) * uVar10, uVar5 != 0)) {
      pvVar8 = (void *)(param_2 + uVar9 * uVar10);
      do {
        sVar1 = uVar5;
        if (0xfffffffe < uVar5) {
          sVar1 = 0xffffffff;
        }
        if (pvVar8 != (void *)0x0) {
          memset(pvVar8,0,sVar1);
        }
        uVar5 = uVar5 - sVar1;
        pvVar8 = (void *)((long)pvVar8 + sVar1);
      } while (uVar5 != 0);
    }
    if (param_4 != (ulong *)0x0) {
      *param_4 = uVar9;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00609e88  FUN_00609e88 =====

int FUN_00609e88(long param_1,uint param_2,void *param_3,uint param_4,int *param_5,ulong param_6)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  uint uVar18;
  byte *pbVar19;
  float *pfVar20;
  uint uVar21;
  long lVar22;
  short sVar23;
  uint uVar24;
  ulong uVar25;
  void *__dest;
  uint local_1064;
  uint local_1060;
  uint local_105c;
  uint local_1058;
  uint local_1054;
  void *local_1050 [254];
  void *local_860 [254];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  local_1054 = 0;
  if (((param_5 == (int *)0x0) || (*param_5 = 0, param_1 == 0)) ||
     (*(uint *)(param_1 + 0x14) <= param_2)) {
    iVar8 = -2;
    goto LAB_00609f8c;
  }
  if (((int)*(undefined8 *)(param_1 + 0x38) != 1) && (*(ulong *)(param_1 + 0x40) <= param_6)) {
    uVar11 = param_6 + param_4;
    if (uVar11 < *(ulong *)(param_1 + 0x48)) {
      uVar15 = *(ulong *)(param_1 + 0x48);
      uVar18 = *(uint *)(param_1 + 0x14);
      uVar6 = (int)uVar11 - (int)*(ulong *)(param_1 + 0x40);
      iVar8 = (int)uVar15 - (int)uVar11;
      if (*(ulong *)(param_1 + 0x40) <= param_6) {
        uVar6 = 0;
      }
      if (uVar11 <= uVar15) {
        iVar8 = 0;
      }
      if (uVar6 != 0) {
        if ((param_2 < uVar18) &&
           (uVar11 = (ulong)*(byte *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 0x38 + 9),
           uVar11 != 0)) {
          uVar11 = uVar6 * uVar11 * 4;
          pvVar9 = param_3;
          do {
            sVar2 = uVar11;
            if (0xfffffffe < uVar11) {
              sVar2 = 0xffffffff;
            }
            if (pvVar9 != (void *)0x0) {
              memset(pvVar9,0,sVar2);
            }
            uVar11 = uVar11 - sVar2;
            pvVar9 = (void *)((long)pvVar9 + sVar2);
          } while (uVar11 != 0);
          uVar18 = *(uint *)(param_1 + 0x14);
        }
        if (param_2 < uVar18) {
          uVar10 = (uint)*(byte *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 0x38 + 9);
        }
        else {
          uVar10 = 0;
        }
        param_4 = param_4 - uVar6;
        param_3 = (void *)((long)param_3 + (ulong)(uVar10 * uVar6) * 4);
      }
      uVar10 = *(uint *)(param_1 + 0x10);
      param_4 = param_4 + iVar8;
      if ((uVar10 == 0) && (uVar18 == 1)) {
        puVar12 = *(undefined8 **)(param_1 + 8);
        local_1058 = 0;
        local_105c = param_4;
        local_1050[0] = param_3;
        if ((*(byte *)((long)puVar12 + 0x14) & 1) != 0) {
          if (param_2 == 0) {
            lVar13 = (ulong)*(byte *)(*(long *)(param_1 + 0x20) + 9) << 2;
          }
          else {
            lVar13 = 0;
          }
          uVar11 = lVar13 * (ulong)param_4;
          pvVar9 = param_3;
          if (uVar11 != 0) {
            do {
              sVar2 = uVar11;
              if (0xfffffffe < uVar11) {
                sVar2 = 0xffffffff;
              }
              if (pvVar9 != (void *)0x0) {
                memset(pvVar9,0,sVar2);
              }
              uVar11 = uVar11 - sVar2;
              pvVar9 = (void *)((long)pvVar9 + sVar2);
            } while (uVar11 != 0);
            puVar12 = *(undefined8 **)(param_1 + 8);
          }
        }
        if ((code *)*puVar12 != (code *)0x0) {
          (*(code *)*puVar12)(param_1,0,&local_1058,local_1050,&local_105c);
          param_4 = local_105c;
        }
        iVar8 = 0;
        local_1054 = param_4;
      }
      else if ((*(byte *)(*(long *)(param_1 + 8) + 0x14) & 1) == 0) {
        uVar5 = *(ushort *)(param_1 + 0x30);
        pcVar16 = *(code **)(*(long *)(param_1 + 8) + 8);
        uVar1 = param_4;
        if (uVar5 <= param_4) {
          uVar1 = (uint)uVar5;
        }
        local_1060 = param_4;
        if (pcVar16 != (code *)0x0) {
          (*pcVar16)(param_1,uVar1,&local_1060);
          uVar5 = *(ushort *)(param_1 + 0x30);
        }
        if (uVar5 < local_1060) {
          local_1060 = (uint)uVar5;
        }
        uVar11 = (ulong)param_2;
        if ((*(ulong *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 0x38 + 0xc) & 1) == 0) {
          if (param_3 != (void *)0x0) {
            pvVar9 = (void *)FUN_0060abfc(param_1,param_2);
            if (param_2 < *(uint *)(param_1 + 0x14)) {
              lVar13 = (ulong)*(byte *)(*(long *)(param_1 + 0x20) + uVar11 * 0x38 + 9) << 2;
            }
            else {
              lVar13 = 0;
            }
            iVar8 = 0;
            if ((param_3 == pvVar9) ||
               (uVar15 = lVar13 * (ulong)*(ushort *)(param_1 + 0x32), __dest = param_3, uVar15 == 0)
               ) goto LAB_0060a684;
            do {
              sVar2 = uVar15;
              if (0xfffffffe < uVar15) {
                sVar2 = 0xffffffff;
              }
              memcpy(__dest,pvVar9,sVar2);
              uVar15 = uVar15 - sVar2;
              pvVar9 = (void *)((long)pvVar9 + sVar2);
              __dest = (void *)((long)__dest + sVar2);
            } while (uVar15 != 0);
          }
          iVar8 = 0;
        }
        else {
          iVar8 = 0;
          *(undefined2 *)(param_1 + 0x32) = 0;
          do {
            local_105c = 0;
            if (uVar18 != 0) {
              uVar15 = 0;
              do {
                FUN_003411c0(1,*(long *)(param_1 + 0x20) + uVar15 * 0x38 + 0xc);
                uVar17 = (ulong)*(uint *)(param_1 + 0x10);
                pvVar9 = *(void **)(param_1 + 0x28);
                if (*(uint *)(param_1 + 0x10) != 0) {
                  pbVar19 = (byte *)(*(long *)(param_1 + 0x18) + 0x40);
                  do {
                    uVar17 = uVar17 - 1;
                    pvVar9 = (void *)((long)pvVar9 +
                                     (ulong)*pbVar19 * (ulong)*(ushort *)(param_1 + 0x30) * 4);
                    pbVar19 = pbVar19 + 0x48;
                  } while (uVar17 != 0);
                }
                if (uVar15 != 0) {
                  pbVar19 = (byte *)(*(long *)(param_1 + 0x20) + 9);
                  uVar17 = uVar15;
                  do {
                    uVar17 = uVar17 - 1;
                    pvVar9 = (void *)((long)pvVar9 +
                                     (ulong)*pbVar19 * (ulong)*(ushort *)(param_1 + 0x30) * 4);
                    pbVar19 = pbVar19 + 0x38;
                  } while (uVar17 != 0);
                }
                local_1050[uVar15] = pvVar9;
                uVar15 = uVar15 + 1;
              } while (uVar15 != uVar18);
            }
            uVar24 = (uint)*(ushort *)(param_1 + 0x34);
            if (*(ushort *)(param_1 + 0x34) == 0) {
              if (uVar10 == 0) {
                uVar24 = 0;
              }
              else {
                uVar15 = 0;
                uVar24 = 0;
                do {
                  pvVar9 = *(void **)(param_1 + 0x28);
                  lVar13 = *(long *)(param_1 + 0x18);
                  if (uVar15 != 0) {
                    pbVar19 = (byte *)(lVar13 + 0x40);
                    uVar17 = uVar15;
                    do {
                      uVar17 = uVar17 - 1;
                      pvVar9 = (void *)((long)pvVar9 +
                                       (ulong)*pbVar19 * (ulong)*(ushort *)(param_1 + 0x30) * 4);
                      pbVar19 = pbVar19 + 0x48;
                    } while (uVar17 != 0);
                  }
                  local_860[uVar15] = pvVar9;
                  iVar8 = FUN_0060a790(param_1,lVar13 + uVar15 * 0x48,pvVar9,local_1060,&local_1064,
                                       param_6);
                  uVar3 = local_1064;
                  if (iVar8 != 0) {
                    uVar3 = 0;
                  }
                  if (uVar3 <= local_1060 && local_1060 - uVar3 != 0) {
                    pvVar9 = local_860[uVar15];
                    if (uVar15 < *(uint *)(param_1 + 0x10)) {
                      bVar4 = *(byte *)(*(long *)(param_1 + 0x18) + uVar15 * 0x48 + 0x40);
                      uVar17 = (ulong)bVar4;
                      pvVar9 = (void *)((long)pvVar9 + (ulong)(uVar3 * bVar4) * 4);
                    }
                    else {
                      uVar17 = 0;
                    }
                    uVar17 = uVar17 * (local_1060 - uVar3);
                    uVar25 = uVar17 * 4;
                    while (uVar17 != 0) {
                      sVar2 = uVar25;
                      if (0xfffffffe < uVar25) {
                        sVar2 = 0xffffffff;
                      }
                      if (pvVar9 != (void *)0x0) {
                        memset(pvVar9,0,sVar2);
                      }
                      pvVar9 = (void *)((long)pvVar9 + sVar2);
                      uVar25 = uVar25 - sVar2;
                      uVar17 = uVar25;
                    }
                  }
                  uVar15 = uVar15 + 1;
                  if (uVar24 <= uVar3) {
                    uVar24 = uVar3;
                  }
                } while (uVar15 != uVar10);
              }
              *(undefined2 *)(param_1 + 0x36) = 0;
              *(short *)(param_1 + 0x34) = (short)uVar24;
            }
            else if (uVar10 != 0) {
              lVar13 = *(long *)(param_1 + 0x28);
              uVar5 = *(ushort *)(param_1 + 0x36);
              uVar15 = 0;
              uVar3 = *(uint *)(param_1 + 0x10);
              do {
                lVar22 = lVar13;
                if (uVar15 != 0) {
                  pbVar19 = (byte *)(*(long *)(param_1 + 0x18) + 0x40);
                  uVar17 = uVar15;
                  do {
                    uVar17 = uVar17 - 1;
                    lVar22 = lVar22 + (ulong)*pbVar19 * (ulong)*(ushort *)(param_1 + 0x30) * 4;
                    pbVar19 = pbVar19 + 0x48;
                  } while (uVar17 != 0);
                }
                if (uVar15 < uVar3) {
                  uVar17 = (ulong)*(byte *)(*(long *)(param_1 + 0x18) + uVar15 * 0x48 + 0x40);
                }
                else {
                  uVar17 = 0;
                }
                local_860[uVar15] = (void *)(lVar22 + uVar17 * uVar5 * 4);
                uVar15 = uVar15 + 1;
              } while (uVar15 != uVar10);
            }
            sVar23 = (short)uVar24;
            uVar5 = *(ushort *)(param_1 + 0x32);
            if (param_3 != (void *)0x0) {
              if (param_2 < *(uint *)(param_1 + 0x14)) {
                uVar15 = (ulong)*(byte *)(*(long *)(param_1 + 0x20) + uVar11 * 0x38 + 9);
              }
              else {
                uVar15 = 0;
              }
              local_1050[uVar11] = (void *)((long)param_3 + uVar5 * uVar15 * 4);
            }
            puVar12 = *(undefined8 **)(param_1 + 8);
            uVar3 = *(uint *)((long)puVar12 + 0x14);
            local_105c = uVar1 - uVar5;
            if ((uVar3 >> 1 & 1) == 0) {
              local_1058 = uVar24 & 0xffff;
LAB_0060a498:
              if (local_1058 == 0 && (uVar3 & 8) == 0) {
                uVar24 = 0;
                local_105c = 0;
              }
              else {
                uVar24 = local_1058;
                if ((code *)*puVar12 != (code *)0x0) {
                  (*(code *)*puVar12)(param_1,local_860,&local_1058,local_1050,&local_105c);
                  sVar23 = *(short *)(param_1 + 0x34);
                  uVar24 = local_1058;
                }
              }
              *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)uVar24;
              *(short *)(param_1 + 0x34) = sVar23 - (short)uVar24;
            }
            else {
              local_1058 = local_1060;
              if (((uVar3 >> 2 & 1) == 0) ||
                 (uVar21 = (uint)*(ushort *)(param_1 + 0x36) | uVar24 & 0xffff, uVar21 != 0)) {
                uVar21 = 1;
              }
              if ((uVar24 & 0xffff) < (local_1060 & 0xffff)) {
                *(short *)(param_1 + 0x34) = (short)local_1060;
                uVar24 = local_1060;
              }
              sVar23 = (short)uVar24;
              if ((uVar21 & 1) != 0) goto LAB_0060a498;
              if ((code *)*puVar12 != (code *)0x0) {
                (*(code *)*puVar12)(param_1,0,&local_1058,local_1050,&local_105c);
              }
            }
            uVar24 = *(ushort *)(param_1 + 0x32) + local_105c;
            *(short *)(param_1 + 0x32) = (short)uVar24;
          } while ((uVar1 != (uVar24 & 0xffff)) && (local_105c != 0 || local_1058 != 0));
        }
LAB_0060a684:
        local_1054 = (uint)*(ushort *)(param_1 + 0x32);
        FUN_003411f0(1,*(long *)(param_1 + 0x20) + uVar11 * 0x38 + 0xc);
        param_4 = local_1054;
      }
      else {
        local_1050[0] = param_3;
        local_860[0] = param_3;
        iVar8 = FUN_0060a790(param_1,*(undefined8 *)(param_1 + 0x18),param_3,param_4,&local_1054,
                             param_6);
        param_4 = local_1054;
        if (iVar8 == 0) {
          local_105c = local_1054;
          local_1058 = local_1054;
          if ((local_1054 != 0) && ((code *)**(undefined8 **)(param_1 + 8) != (code *)0x0)) {
            (*(code *)**(undefined8 **)(param_1 + 8))
                      (param_1,local_860,&local_1058,local_1050,&local_105c);
          }
          iVar8 = 0;
        }
      }
      if (param_2 < *(uint *)(param_1 + 0x14)) {
        uVar18 = (uint)*(byte *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 0x38 + 9);
      }
      else {
        uVar18 = 0;
      }
      uVar18 = uVar18 * param_4;
      uVar11 = (ulong)uVar18;
      if (((uVar18 != 0) && (param_3 != (void *)0x0)) &&
         (fVar14 = (float)*(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 0x38 + 0x1c),
         fVar14 != 1.0)) {
        if (uVar18 < 8) {
          uVar17 = 0;
        }
        else {
          uVar17 = uVar11 & 0xfffffff8;
          puVar12 = (undefined8 *)((long)param_3 + 0x10);
          uVar15 = uVar17;
          do {
            uVar15 = uVar15 - 8;
            puVar12[-1] = CONCAT44((float)((ulong)puVar12[-1] >> 0x20) * fVar14,
                                   (float)puVar12[-1] * fVar14);
            puVar12[-2] = CONCAT44((float)((ulong)puVar12[-2] >> 0x20) * fVar14,
                                   (float)puVar12[-2] * fVar14);
            puVar12[1] = CONCAT44((float)((ulong)puVar12[1] >> 0x20) * fVar14,
                                  (float)puVar12[1] * fVar14);
            *puVar12 = CONCAT44((float)((ulong)*puVar12 >> 0x20) * fVar14,(float)*puVar12 * fVar14);
            puVar12 = puVar12 + 4;
          } while (uVar15 != 0);
          if (uVar17 == uVar11) goto LAB_0060a76c;
        }
        lVar13 = uVar11 - uVar17;
        pfVar20 = (float *)((long)param_3 + uVar17 * 4);
        do {
          lVar13 = lVar13 + -1;
          *pfVar20 = *pfVar20 * fVar14;
          pfVar20 = pfVar20 + 1;
        } while (lVar13 != 0);
      }
LAB_0060a76c:
      FUN_00341040(local_1054,param_1 + 0x50);
      *param_5 = local_1054 + uVar6;
      goto LAB_00609f8c;
    }
  }
  iVar8 = 0;
LAB_00609f8c:
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0060a790  FUN_0060a790 =====

void FUN_0060a790(long *param_1,long *param_2,void *param_3,uint param_4,uint *param_5,long param_6)

{
  void *pvVar1;
  size_t sVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  undefined8 *puVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  float *pfVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  ulong *puVar23;
  long *plVar24;
  int iVar25;
  ulong *puVar26;
  long *plVar27;
  void *pvVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint local_70;
  uint local_6c;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  bVar5 = *(byte *)(param_2 + 8);
  uVar14 = (ulong)bVar5;
  *param_5 = 0;
  FUN_00340fe0(1,param_2 + 7);
  plVar24 = param_2;
  do {
    plVar24 = (long *)plVar24[4];
    if (plVar24 == (long *)0x0) {
      FUN_00340fe0(0xffffffff,param_2 + 2);
      FUN_00340fe0(0xffffffff,param_2 + 7);
      iVar25 = 0;
LAB_0060abc8:
      if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(iVar25);
      }
      return;
    }
  } while ((int)*(undefined8 *)((long)plVar24 + 0x14) == 0);
  FUN_00340fe0(1,plVar24 + 2);
  FUN_00340fe0(0xffffffff,param_2 + 2);
  FUN_00340fe0(0xffffffff,param_2 + 7);
  iVar25 = 0;
  bVar9 = false;
  lVar21 = (ulong)bVar5 * 4;
  plVar22 = plVar24;
  do {
    local_6c = 0;
    if (param_3 == (void *)0x0) {
      FUN_00609e88(*plVar22,(char)plVar22[1],0,param_4,&local_6c,param_6);
    }
    else {
      uVar4 = *(uint *)(*(long *)(*plVar22 + 8) + 0x14);
      while (uVar10 = local_6c, uVar13 = param_4 - local_6c, iVar11 = iVar25,
            local_6c <= param_4 && uVar13 != 0) {
        pvVar28 = (void *)((long)param_3 + lVar21 * (ulong)local_6c);
        uVar29 = (ulong)local_6c;
        local_70 = 0;
        if (bVar9) {
          uVar6 = *(ushort *)(param_1 + 6);
          puVar23 = *(ulong **)(*param_1 + 0x2e8);
          uVar3 = *puVar23;
          uVar16 = (ulong)((int)lVar21 * (uint)uVar6 + 7) & 0x7fffff8;
          uVar15 = uVar3 + uVar16 + 8;
          if (uVar15 <= puVar23[1]) {
            *puVar23 = uVar15;
            if (uVar6 <= uVar13) {
              uVar13 = (uint)uVar6;
            }
            lVar12 = *plVar22;
            puVar26 = (ulong *)((long)puVar23 + uVar3 + 0x10);
            *puVar26 = uVar16;
            pvVar1 = (void *)((long)puVar23 + uVar3 + 0x18);
            iVar11 = FUN_00609e88(lVar12,(char)plVar22[1],pvVar1,uVar13,&local_70,uVar29 + param_6);
            if ((((iVar11 == -0x11 || iVar11 == 0) && ((uVar4 >> 4 & 1) == 0)) && (bVar5 != 0)) &&
               (local_70 != 0)) {
              uVar15 = local_70 * uVar14;
              if ((uVar15 < 0xc) ||
                 ((pvVar28 < (void *)((long)puVar23 + uVar14 * 4 * (ulong)local_70 + uVar3 + 0x18)
                  && (pvVar1 < (void *)((long)param_3 + (uVar29 + local_70) * uVar14 * 4))))) {
                uVar29 = 0;
              }
              else {
                uVar29 = uVar15 & 0xfffffffff8;
                puVar20 = (undefined8 *)((long)puVar23 + uVar3 + 0x28);
                puVar19 = (undefined8 *)((long)param_3 + lVar21 * (ulong)uVar10 + 0x10);
                uVar16 = uVar29;
                do {
                  puVar8 = puVar20 + -1;
                  uVar30 = puVar20[-2];
                  uVar32 = puVar20[1];
                  uVar31 = *puVar20;
                  uVar16 = uVar16 - 8;
                  puVar20 = puVar20 + 4;
                  puVar19[-1] = CONCAT44((float)((ulong)*puVar8 >> 0x20) +
                                         (float)((ulong)puVar19[-1] >> 0x20),
                                         (float)*puVar8 + (float)puVar19[-1]);
                  puVar19[-2] = CONCAT44((float)((ulong)uVar30 >> 0x20) +
                                         (float)((ulong)puVar19[-2] >> 0x20),
                                         (float)uVar30 + (float)puVar19[-2]);
                  puVar19[1] = CONCAT44((float)((ulong)uVar32 >> 0x20) +
                                        (float)((ulong)puVar19[1] >> 0x20),
                                        (float)uVar32 + (float)puVar19[1]);
                  *puVar19 = CONCAT44((float)((ulong)uVar31 >> 0x20) +
                                      (float)((ulong)*puVar19 >> 0x20),
                                      (float)uVar31 + (float)*puVar19);
                  puVar19 = puVar19 + 4;
                } while (uVar16 != 0);
                if (uVar15 - uVar29 == 0) goto LAB_0060a9a4;
              }
              lVar12 = uVar15 - uVar29;
              pfVar17 = (float *)((long)param_3 + lVar21 * (ulong)uVar10 + uVar29 * 4);
              pfVar18 = (float *)((long)puVar23 + uVar29 * 4 + uVar3 + 0x18);
              do {
                lVar12 = lVar12 + -1;
                *pfVar17 = *pfVar18 + *pfVar17;
                pfVar17 = pfVar17 + 1;
                pfVar18 = pfVar18 + 1;
              } while (lVar12 != 0);
            }
LAB_0060a9a4:
            **(long **)(*param_1 + 0x2e8) = (**(long **)(*param_1 + 0x2e8) - *puVar26) + -8;
          }
        }
        else {
          iVar11 = FUN_00609e88(*plVar22,(char)plVar22[1],pvVar28,uVar13,&local_70,uVar29 + param_6)
          ;
        }
        local_6c = local_6c + local_70;
        if ((iVar11 != 0) || (iVar25 = 0, local_70 == 0)) break;
      }
      if ((plVar22 == plVar24) &&
         ((local_6c <= param_4 && param_4 - local_6c != 0 &&
          (uVar29 = lVar21 * (ulong)(param_4 - local_6c), uVar29 != 0)))) {
        pvVar28 = (void *)((long)param_3 + lVar21 * (ulong)local_6c);
        do {
          sVar2 = uVar29;
          if (0xfffffffe < uVar29) {
            sVar2 = 0xffffffff;
          }
          memset(pvVar28,0,sVar2);
          uVar29 = uVar29 - sVar2;
          pvVar28 = (void *)((long)pvVar28 + sVar2);
        } while (uVar29 != 0);
      }
      iVar25 = iVar11;
      if ((uVar4 >> 4 & 1) == 0) {
        bVar9 = true;
      }
    }
    FUN_00340fe0(1,param_2 + 7);
    plVar27 = plVar22;
    do {
      plVar27 = (long *)plVar27[4];
      if (plVar27 == (long *)0x0) {
        FUN_00340fe0(0xffffffff,plVar22 + 2);
        FUN_00340fe0(0xffffffff,param_2 + 7);
        if ((param_3 != (void *)0x0) && (!bVar9)) {
          for (uVar14 = lVar21 * (ulong)param_4; uVar14 != 0; uVar14 = uVar14 - sVar2) {
            sVar2 = uVar14;
            if (0xfffffffe < uVar14) {
              sVar2 = 0xffffffff;
            }
            memset(param_3,0,sVar2);
            param_3 = (void *)((long)param_3 + sVar2);
          }
        }
        *param_5 = param_4;
        goto LAB_0060abc8;
      }
    } while ((int)*(undefined8 *)((long)plVar27 + 0x14) == 0);
    FUN_00340fe0(1,plVar27 + 2);
    FUN_00340fe0(0xffffffff,plVar22 + 2);
    FUN_00340fe0(0xffffffff,param_2 + 7);
    plVar22 = plVar27;
  } while( true );
}


// ===== 0060abfc  FUN_0060abfc =====

long FUN_0060abfc(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x10) != 0) {
    pbVar3 = (byte *)(*(long *)(param_1 + 0x18) + 0x40);
    do {
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + (ulong)*pbVar3 * (ulong)*(ushort *)(param_1 + 0x30) * 4;
      pbVar3 = pbVar3 + 0x48;
    } while (uVar2 != 0);
  }
  if (param_2 != 0) {
    uVar2 = (ulong)param_2;
    pbVar3 = (byte *)(*(long *)(param_1 + 0x20) + 9);
    do {
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + (ulong)*pbVar3 * (ulong)*(ushort *)(param_1 + 0x30) * 4;
      pbVar3 = pbVar3 + 0x38;
    } while (uVar2 != 0);
  }
  return lVar1;
}


// ===== 0060ac58  ma_node_config_init =====

void ma_node_config_init(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0xff;
  param_1[1] = 0xff00000000;
  return;
}


// ===== 0060ac7c  ma_node_graph_uninit =====

void ma_node_graph_uninit(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    ma_node_uninit(param_1 + 0x168);
    ma_node_uninit(param_1,param_2);
    pvVar1 = *(void **)(param_1 + 0x2d0);
    if (pvVar1 != (void *)0x0) {
      if (param_2 == (undefined8 *)0x0) {
        free(pvVar1);
      }
      else if ((code *)param_2[3] != (code *)0x0) {
        (*(code *)param_2[3])(pvVar1,*param_2);
      }
      *(undefined8 *)(param_1 + 0x2d0) = 0;
    }
    pvVar1 = *(void **)(param_1 + 0x2e8);
    if (pvVar1 != (void *)0x0) {
      if (param_2 == (undefined8 *)0x0) {
        free(pvVar1);
      }
      else if ((code *)param_2[3] != (code *)0x0) {
        (*(code *)param_2[3])(pvVar1,*param_2);
      }
      *(undefined8 *)(param_1 + 0x2e8) = 0;
    }
  }
  return;
}


// ===== 0060ad04  ma_node_graph_get_endpoint =====

long ma_node_graph_get_endpoint(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x168;
  }
  return lVar1;
}


// ===== 0060ad14  ma_node_get_output_channels =====

ulong ma_node_get_output_channels(ulong param_1,uint param_2)

{
  if (param_1 != 0) {
    if (param_2 < *(uint *)(param_1 + 0x14)) {
      return (ulong)*(byte *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 0x38 + 9);
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 0060ad44  ma_node_get_time =====

long ma_node_get_time(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x50);
  }
  return param_1;
}


// ===== 0060ad54  ma_node_graph_get_channels =====

ulong ma_node_graph_get_channels(ulong param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x17c) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + 0x188) + 9);
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 0060ad74  ma_node_graph_get_time =====

long ma_node_graph_get_time(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x1b8);
  }
  return param_1;
}


// ===== 0060ad84  ma_node_graph_set_time =====

undefined8 ma_node_graph_set_time(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_00341070(param_2,param_1 + 0x1b8);
    return 0;
  }
  return 0xfffffffe;
}


// ===== 0060adb4  ma_node_set_time =====

undefined8 ma_node_set_time(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_00341070(param_2,param_1 + 0x50);
    return 0;
  }
  return 0xfffffffe;
}


// ===== 0060ade4  ma_node_get_heap_size =====

void ma_node_get_heap_size(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50 [5];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 == (undefined8 *)0x0) {
    uVar2 = 0xfffffffe;
  }
  else {
    *param_3 = 0;
    uVar2 = FUN_006095dc(param_1,param_2,local_50);
    if ((int)uVar2 == 0) {
      *param_3 = local_50[0];
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0060ae4c  ma_node_get_input_bus_count =====

ulong ma_node_get_input_bus_count(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x10);
  }
  return param_1;
}


// ===== 0060ae58  ma_node_get_output_bus_count =====

ulong ma_node_get_output_bus_count(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x14);
  }
  return param_1;
}


// ===== 0060ae64  ma_node_get_node_graph =====

long * ma_node_get_node_graph(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 0060ae70  ma_node_get_input_channels =====

ulong ma_node_get_input_channels(ulong param_1,uint param_2)

{
  if (param_1 != 0) {
    if (param_2 < *(uint *)(param_1 + 0x10)) {
      return (ulong)*(byte *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 0x48 + 0x40);
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 0060aea0  ma_node_detach_all_output_buses =====

undefined8 ma_node_detach_all_output_buses(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar1 = 0;
      do {
        ma_node_detach_output_bus(param_1,uVar1);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x14));
    }
    return 0;
  }
  return 0xfffffffe;
}


// ===== 0060aef4  ma_node_attach_output_bus =====

undefined8 ma_node_attach_output_bus(long param_1,uint param_2,long param_3,uint param_4)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  uVar7 = 0xfffffffe;
  if ((param_1 != 0) && (param_3 != 0)) {
    if ((param_1 != param_3) &&
       ((param_2 < *(uint *)(param_1 + 0x14) && (param_4 < *(uint *)(param_3 + 0x10))))) {
      lVar14 = *(long *)(param_1 + 0x20);
      lVar9 = *(long *)(param_3 + 0x18);
      if (*(char *)(lVar14 + (ulong)param_2 * 0x38 + 9) ==
          *(char *)(lVar9 + (ulong)param_4 * 0x48 + 0x40)) {
        uVar15 = (ulong)param_2;
        uVar10 = (ulong)param_4;
        lVar11 = lVar14 + uVar15 * 0x38;
        piVar1 = (int *)(lVar11 + 0x18);
        while (iVar6 = FUN_00341150(1,piVar1), iVar6 != 0) {
          do {
          } while (*piVar1 == 1);
        }
        lVar12 = lVar9 + uVar10 * 0x48;
        plVar2 = (long *)(lVar14 + uVar15 * 0x38 + 0x30);
        if (*plVar2 != 0) {
          FUN_003410a0(0,lVar14 + uVar15 * 0x38 + 0x14);
          piVar3 = (int *)(lVar9 + uVar10 * 0x48 + 0x3c);
          while (iVar6 = FUN_00341150(1,piVar3), iVar6 != 0) {
            do {
            } while (*piVar3 == 1);
          }
          lVar8 = lVar14 + uVar15 * 0x38;
          plVar4 = (long *)(lVar8 + 0x28);
          plVar5 = (long *)(lVar8 + 0x20);
          lVar8 = *plVar4;
          lVar13 = *plVar5;
          if (lVar8 != 0) {
            FUN_00341070(lVar13,lVar8 + 0x20);
          }
          if (lVar13 != 0) {
            FUN_00341070(lVar8,lVar13 + 0x28);
          }
          *piVar3 = 0;
          FUN_00341070(0,plVar5);
          FUN_00341070(0,plVar4);
          *plVar2 = 0;
          *(undefined1 *)(lVar14 + uVar15 * 0x38 + 10) = 0;
          do {
          } while ((int)*(undefined8 *)(lVar9 + uVar10 * 0x48 + 0x38) != 0);
          do {
          } while ((int)*(undefined8 *)(lVar14 + uVar15 * 0x38 + 0x10) != 0);
        }
        *plVar2 = param_3;
        piVar3 = (int *)(lVar9 + uVar10 * 0x48 + 0x3c);
        *(char *)(lVar14 + uVar15 * 0x38 + 10) = (char)param_4;
        while (iVar6 = FUN_00341150(1,piVar3), iVar6 != 0) {
          do {
          } while (*piVar3 == 1);
        }
        plVar2 = (long *)(lVar12 + 0x20);
        lVar9 = lVar14 + uVar15 * 0x38;
        lVar8 = *plVar2;
        FUN_00341070(lVar12,lVar9 + 0x28);
        FUN_00341070(lVar8,lVar9 + 0x20);
        FUN_00341070(lVar11,plVar2);
        if (lVar8 != 0) {
          FUN_00341070(lVar11,lVar8 + 0x28);
        }
        *piVar3 = 0;
        FUN_003410a0(1,lVar14 + uVar15 * 0x38 + 0x14);
        uVar7 = 0;
        *piVar1 = 0;
      }
      else {
        uVar7 = 0xfffffffd;
      }
      return uVar7;
    }
    uVar7 = 0xfffffffd;
  }
  return uVar7;
}


// ===== 0060b19c  ma_node_set_output_bus_volume =====

undefined8 ma_node_set_output_bus_volume(float param_1,long param_2,uint param_3)

{
  float fVar1;
  
  if ((param_2 != 0) && (param_3 < *(uint *)(param_2 + 0x14))) {
    fVar1 = 0.0;
    if (0.0 <= param_1) {
      fVar1 = param_1;
    }
    FUN_003410a0(fVar1,*(long *)(param_2 + 0x20) + (ulong)param_3 * 0x38 + 0x1c);
    return 0;
  }
  return 0xfffffffe;
}


// ===== 0060b1f0  ma_node_get_output_bus_volume =====

undefined1  [16] ma_node_get_output_bus_volume(long param_1,uint param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 < *(uint *)(param_1 + 0x14))) {
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 0x38 + 0x1c) & 0xffffffff;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}


// ===== 0060b224  ma_node_set_state =====

undefined8 ma_node_set_state(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_003410a0(param_2,param_1 + 0x38);
    return 0;
  }
  return 0xfffffffe;
}


// ===== 0060b254  ma_node_get_state =====

undefined8 ma_node_get_state(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x38);
  }
  return 1;
}


// ===== 0060b26c  ma_node_set_state_time =====

undefined8 ma_node_set_state_time(long param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffe;
  if ((param_1 != 0) && (param_2 < 2)) {
    FUN_00341070(param_3,param_1 + (ulong)param_2 * 8 + 0x40);
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0060b2a4  ma_node_get_state_time =====

undefined8 ma_node_get_state_time(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 < 2)) {
    uVar1 = *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x40);
  }
  return uVar1;
}


// ===== 0060b2c8  ma_node_get_state_by_time =====

bool ma_node_get_state_by_time(long param_1,ulong param_2)

{
  if (((param_1 != 0) && ((int)*(undefined8 *)(param_1 + 0x38) != 1)) &&
     (*(ulong *)(param_1 + 0x40) <= param_2)) {
    return *(ulong *)(param_1 + 0x48) <= param_2;
  }
  return true;
}


// ===== 0060b308  ma_node_get_state_by_time_range =====

bool ma_node_get_state_by_time_range(long param_1,ulong param_2,ulong param_3)

{
  if (((param_1 != 0) && ((int)*(undefined8 *)(param_1 + 0x38) != 1)) &&
     (*(ulong *)(param_1 + 0x40) <= param_2)) {
    return *(ulong *)(param_1 + 0x48) <= param_3;
  }
  return true;
}


// ===== 0060b348  ma_data_source_node_config_init =====

void ma_data_source_node_config_init(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0xff;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  param_1[1] = 0xff00000000;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  return;
}


// ===== 0060b370  ma_data_source_node_init =====

void ma_data_source_node_init
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined **local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 *local_60;
  undefined4 local_54;
  undefined1 auStack_50 [4];
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined8 *)0x0) {
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    param_4[7] = 0;
    param_4[6] = 0;
    param_4[9] = 0;
    param_4[8] = 0;
    param_4[0xb] = 0;
    param_4[10] = 0;
    param_4[0xd] = 0;
    param_4[0xc] = 0;
    param_4[0xf] = 0;
    param_4[0xe] = 0;
    param_4[0x11] = 0;
    param_4[0x10] = 0;
    param_4[0x13] = 0;
    param_4[0x12] = 0;
    param_4[0x15] = 0;
    param_4[0x14] = 0;
    param_4[0x17] = 0;
    param_4[0x16] = 0;
    param_4[0x19] = 0;
    param_4[0x18] = 0;
    param_4[0x1b] = 0;
    param_4[0x1a] = 0;
    param_4[0x1d] = 0;
    param_4[0x1c] = 0;
    param_4[0x1f] = 0;
    param_4[0x1e] = 0;
    param_4[0x21] = 0;
    param_4[0x20] = 0;
    param_4[0x23] = 0;
    param_4[0x22] = 0;
    param_4[0x25] = 0;
    param_4[0x24] = 0;
    param_4[0x27] = 0;
    param_4[0x26] = 0;
    param_4[0x29] = 0;
    param_4[0x28] = 0;
    param_4[0x2b] = 0;
    param_4[0x2a] = 0;
    param_4[0x2d] = 0;
    param_4[0x2c] = 0;
    param_4[1] = 0;
    *param_4 = 0;
    if ((param_2 != 0) && (plVar3 = *(long **)(param_2 + 0x28), plVar3 != (long *)0x0)) {
      if (*(code **)(*plVar3 + 0x10) == (code *)0x0) {
        uVar2 = 0xffffffe3;
        goto LAB_0060b450;
      }
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,&local_80,&local_4c,auStack_50,0,0);
      if ((int)uVar2 != 0) goto LAB_0060b450;
      local_54 = local_4c;
      if ((int)local_80 == 5) {
        uStack_78 = *(undefined8 *)(param_2 + 8);
        uStack_68 = *(undefined8 *)(param_2 + 0x18);
        uStack_70 = *(undefined8 *)(param_2 + 0x10);
        local_60 = *(undefined4 **)(param_2 + 0x20);
        local_80 = &PTR_FUN_006869a0;
        if (local_60 == (undefined4 *)0x0) {
          local_60 = &local_54;
          uVar2 = ma_node_init(param_1,&local_80,param_3,param_4);
          if ((int)uVar2 == 0) {
            param_4[0x2d] = *(undefined8 *)(param_2 + 0x28);
          }
          goto LAB_0060b450;
        }
      }
    }
  }
  uVar2 = 0xfffffffe;
LAB_0060b450:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0060b4b0  FUN_0060b4b0 =====

void FUN_0060b4b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 local_60;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x168);
  local_60 = 0;
  if ((plVar3 != (long *)0x0) && (*(code **)(*plVar3 + 0x10) != (code *)0x0)) {
    uVar4 = *param_5;
    iVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,auStack_4c,auStack_50,auStack_54,0,0);
    if (iVar2 == 0) {
      ma_data_source_read_pcm_frames(*(undefined8 *)(param_1 + 0x168),*param_4,uVar4,&local_60);
      uVar4 = (undefined4)local_60;
      goto LAB_0060b51c;
    }
  }
  uVar4 = 0;
LAB_0060b51c:
  *param_5 = uVar4;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0060b568  ma_data_source_node_uninit =====

void ma_data_source_node_uninit(void)

{
  (*(code *)PTR_ma_node_uninit_00681cc8)();
  return;
}


// ===== 0060b56c  ma_data_source_node_set_looping =====

undefined8 ma_data_source_node_set_looping(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if ((param_1 == 0) || (plVar2 = *(long **)(param_1 + 0x168), plVar2 == (long *)0x0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    FUN_003410a0(param_2,plVar2 + 8);
    if (*(code **)(*plVar2 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0060b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0060b5cc  ma_data_source_node_is_looping =====

long ma_data_source_node_is_looping(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x168) != 0) {
      return *(long *)(*(long *)(param_1 + 0x168) + 0x40);
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 0060b5ec  ma_splitter_node_config_init =====

void ma_splitter_node_config_init(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0xff;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  param_1[1] = 0xff00000000;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = param_2;
  *(undefined4 *)((long)param_1 + 0x2c) = 2;
  return;
}


// ===== 0060b618  ma_splitter_node_init =====

void ma_splitter_node_init(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined **local_450;
  undefined8 uStack_448;
  uint local_440;
  undefined4 uStack_43c;
  undefined4 *puStack_438;
  undefined8 *local_430;
  undefined4 local_424;
  undefined8 local_420 [127];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_4 != (undefined8 *)0x0) {
    param_4[0x2c] = 0;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    param_4[7] = 0;
    param_4[6] = 0;
    param_4[9] = 0;
    param_4[8] = 0;
    param_4[0xb] = 0;
    param_4[10] = 0;
    param_4[0xd] = 0;
    param_4[0xc] = 0;
    param_4[0xf] = 0;
    param_4[0xe] = 0;
    param_4[0x11] = 0;
    param_4[0x10] = 0;
    param_4[0x13] = 0;
    param_4[0x12] = 0;
    param_4[0x15] = 0;
    param_4[0x14] = 0;
    param_4[0x17] = 0;
    param_4[0x16] = 0;
    param_4[0x19] = 0;
    param_4[0x18] = 0;
    param_4[0x1b] = 0;
    param_4[0x1a] = 0;
    param_4[0x1d] = 0;
    param_4[0x1c] = 0;
    param_4[0x1f] = 0;
    param_4[0x1e] = 0;
    param_4[0x21] = 0;
    param_4[0x20] = 0;
    param_4[0x23] = 0;
    param_4[0x22] = 0;
    param_4[0x25] = 0;
    param_4[0x24] = 0;
    param_4[0x27] = 0;
    param_4[0x26] = 0;
    param_4[0x29] = 0;
    param_4[0x28] = 0;
    param_4[0x2b] = 0;
    param_4[0x2a] = 0;
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_2 + 0x2c);
      uVar4 = (ulong)uVar1;
      if (uVar1 < 0xff) {
        local_424 = *(undefined4 *)(param_2 + 0x28);
        if (uVar1 != 0) {
          if (uVar1 < 8) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar4 & 0xf8;
            puVar7 = local_420 + 2;
            uVar9 = uVar5;
            do {
              puVar7[-1] = CONCAT44(local_424,local_424);
              puVar7[-2] = CONCAT44(local_424,local_424);
              puVar7[1] = CONCAT44(local_424,local_424);
              *puVar7 = CONCAT44(local_424,local_424);
              uVar9 = uVar9 - 8;
              puVar7 = puVar7 + 4;
            } while (uVar9 != 0);
            if (uVar5 == uVar4) goto LAB_0060b700;
          }
          lVar6 = uVar4 - uVar5;
          puVar8 = (undefined4 *)((long)local_420 + uVar5 * 4);
          do {
            lVar6 = lVar6 + -1;
            *puVar8 = local_424;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
LAB_0060b700:
        uStack_448 = *(undefined8 *)(param_2 + 8);
        puStack_438 = &local_424;
        local_450 = &PTR_FUN_006869b8;
        local_430 = local_420;
        _local_440 = CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20),uVar1);
        uVar3 = ma_node_init(param_1,&local_450);
        goto LAB_0060b680;
      }
    }
  }
  uVar3 = 0xfffffffe;
LAB_0060b680:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0060b73c  FUN_0060b73c =====

void FUN_0060b73c(long param_1,undefined8 *param_2,undefined8 param_3,long param_4,uint *param_5)

{
  size_t __n;
  ulong uVar1;
  void *__dest;
  void *__src;
  long lVar2;
  ulong uVar3;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = (ulong)*(byte *)(*(long *)(param_1 + 0x18) + 0x40) << 2;
  }
  for (uVar3 = 0; (param_1 != 0 && (uVar3 < *(uint *)(param_1 + 0x14))); uVar3 = uVar3 + 1) {
    __dest = *(void **)(param_4 + uVar3 * 8);
    __src = (void *)*param_2;
    if (__dest != __src) {
      for (uVar1 = lVar2 * (ulong)*param_5; uVar1 != 0; uVar1 = uVar1 - __n) {
        __n = uVar1;
        if (0xfffffffe < uVar1) {
          __n = 0xffffffff;
        }
        memcpy(__dest,__src,__n);
        __dest = (void *)((long)__dest + __n);
        __src = (void *)((long)__src + __n);
      }
    }
  }
  return;
}


// ===== 0060b828  ma_splitter_node_uninit =====

void ma_splitter_node_uninit(void)

{
  (*(code *)PTR_ma_node_uninit_00681cc8)();
  return;
}


// ===== 0060b82c  ma_biquad_node_config_init =====

void ma_biquad_node_config_init
               (undefined8 *param_1,float param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,undefined4 param_8)

{
  *(undefined4 *)(param_1 + 2) = 0xff;
  *param_1 = 0;
  param_1[6] = (double)param_2;
  param_1[7] = (double)param_3;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  param_1[1] = 0xff00000000;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x500000000;
  *(undefined4 *)((long)param_1 + 0x2c) = param_8;
  param_1[8] = (double)param_4;
  param_1[9] = (double)param_5;
  param_1[10] = (double)param_6;
  param_1[0xb] = (double)param_7;
  return;
}


// ===== 0060b87c  ma_biquad_node_init =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_biquad_node_init(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined8 *)0x0) {
    param_4[0x34] = 0;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    param_4[7] = 0;
    param_4[6] = 0;
    param_4[9] = 0;
    param_4[8] = 0;
    param_4[0xb] = 0;
    param_4[10] = 0;
    param_4[0xd] = 0;
    param_4[0xc] = 0;
    param_4[0xf] = 0;
    param_4[0xe] = 0;
    param_4[0x11] = 0;
    param_4[0x10] = 0;
    param_4[0x13] = 0;
    param_4[0x12] = 0;
    param_4[0x15] = 0;
    param_4[0x14] = 0;
    param_4[0x17] = 0;
    param_4[0x16] = 0;
    param_4[0x19] = 0;
    param_4[0x18] = 0;
    param_4[0x1b] = 0;
    param_4[0x1a] = 0;
    param_4[0x1d] = 0;
    param_4[0x1c] = 0;
    param_4[0x1f] = 0;
    param_4[0x1e] = 0;
    param_4[0x21] = 0;
    param_4[0x20] = 0;
    param_4[0x23] = 0;
    param_4[0x22] = 0;
    param_4[0x25] = 0;
    param_4[0x24] = 0;
    param_4[0x27] = 0;
    param_4[0x26] = 0;
    param_4[0x29] = 0;
    param_4[0x28] = 0;
    param_4[0x2b] = 0;
    param_4[0x2a] = 0;
    param_4[0x2d] = 0;
    param_4[0x2c] = 0;
    param_4[0x2f] = 0;
    param_4[0x2e] = 0;
    param_4[0x31] = 0;
    param_4[0x30] = 0;
    param_4[0x33] = 0;
    param_4[0x32] = 0;
    if ((param_2 != 0) && (*(int *)(param_2 + 0x28) == 5)) {
      uVar2 = ma_biquad_init((int *)(param_2 + 0x28),param_3,param_4 + 0x2d);
      if ((int)uVar2 == 0) {
        local_70 = &PTR_FUN_006869d0;
        local_58 = param_2 + 0x2c;
        uStack_60 = _UNK_0024e4c8;
        local_68 = _DAT_0024e4c0;
        lStack_50 = local_58;
        uVar2 = ma_node_init(param_1,&local_70,param_3,param_4);
      }
      goto LAB_0060b954;
    }
  }
  uVar2 = 0xfffffffe;
LAB_0060b954:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0060b980  FUN_0060b980 =====

void FUN_0060b980(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  ma_biquad_process_pcm_frames(param_1 + 0x168,*param_4,*param_2,*param_5);
  return;
}


// ===== 0060b998  ma_biquad_node_reinit =====

void ma_biquad_node_reinit(undefined8 param_1,long param_2)

{
  ma_biquad_reinit(param_1,param_2 + 0x168);
  return;
}


// ===== 0060b9a0  ma_biquad_node_uninit =====

void ma_biquad_node_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (param_1 != 0) {
    ma_node_uninit();
    if ((*(int *)(param_1 + 0x1a0) != 0) &&
       (__ptr = *(void **)(param_1 + 0x198), __ptr != (void *)0x0)) {
      if (param_2 == (undefined8 *)0x0) {
        free(__ptr);
        return;
      }
      if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0060b9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_2[3])(__ptr,*param_2);
        return;
      }
    }
  }
  return;
}


// ===== 0060ba00  ma_lpf_node_config_init =====

void ma_lpf_node_config_init
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               uint param_5)

{
  *(undefined4 *)(param_1 + 2) = 0xff;
  *(undefined8 *)((long)param_1 + 0x24) = 0x500000000;
  if (7 < param_5) {
    param_5 = 8;
  }
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  param_1[1] = 0xff00000000;
  *(undefined4 *)((long)param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 6) = param_4;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  param_1[7] = param_2;
  *(uint *)(param_1 + 8) = param_5;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  return;
}


// ===== 0060ba44  ma_lpf_node_init =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_lpf_node_init(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined8 *)0x0) {
    param_4[1] = 0;
    *param_4 = 0;
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    param_4[7] = 0;
    param_4[6] = 0;
    param_4[9] = 0;
    param_4[8] = 0;
    param_4[0xb] = 0;
    param_4[10] = 0;
    param_4[0xd] = 0;
    param_4[0xc] = 0;
    param_4[0xf] = 0;
    param_4[0xe] = 0;
    param_4[0x11] = 0;
    param_4[0x10] = 0;
    param_4[0x13] = 0;
    param_4[0x12] = 0;
    param_4[0x15] = 0;
    param_4[0x14] = 0;
    param_4[0x17] = 0;
    param_4[0x16] = 0;
    param_4[0x19] = 0;
    param_4[0x18] = 0;
    param_4[0x1b] = 0;
    param_4[0x1a] = 0;
    param_4[0x1d] = 0;
    param_4[0x1c] = 0;
    param_4[0x1f] = 0;
    param_4[0x1e] = 0;
    param_4[0x21] = 0;
    param_4[0x20] = 0;
    param_4[0x23] = 0;
    param_4[0x22] = 0;
    param_4[0x25] = 0;
    param_4[0x24] = 0;
    param_4[0x27] = 0;
    param_4[0x26] = 0;
    param_4[0x29] = 0;
    param_4[0x28] = 0;
    param_4[0x2b] = 0;
    param_4[0x2a] = 0;
    param_4[0x2d] = 0;
    param_4[0x2c] = 0;
    param_4[0x2f] = 0;
    param_4[0x2e] = 0;
    param_4[0x31] = 0;
    param_4[0x30] = 0;
    param_4[0x33] = 0;
    param_4[0x32] = 0;
    if ((param_2 != 0) && (*(int *)(param_2 + 0x28) == 5)) {
      uVar2 = ma_lpf_init((int *)(param_2 + 0x28),param_3,param_4 + 0x2d);
      if ((int)uVar2 == 0) {
        local_70 = &PTR_FUN_006869e8;
        local_58 = param_2 + 0x2c;
        uStack_60 = _UNK_0024e4c8;
        local_68 = _DAT_0024e4c0;
        lStack_50 = local_58;
        uVar2 = ma_node_init(param_1,&local_70,param_3,param_4);
      }
      goto LAB_0060bb18;
    }
  }
  uVar2 = 0xfffffffe;
LAB_0060bb18:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0060bb44  FUN_0060bb44 =====

void FUN_0060bb44(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  ma_lpf_process_pcm_frames(param_1 + 0x168,*param_4,*param_2,*param_5);
  return;
}


// ===== 0060bb5c  ma_lpf_node_reinit =====

undefined8 ma_lpf_node_reinit(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_005b4524(param_1,0,param_2 + 0x168,0);
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 0060bb78  ma_lpf_node_uninit =====

void ma_lpf_node_uninit(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    ma_node_uninit();
    ma_lpf_uninit(param_1 + 0x168,param_2);
    return;
  }
  return;
}


// ===== 0060bbac  ma_hpf_node_config_init =====

void ma_hpf_node_config_init
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               uint param_5)

{
  *(undefined4 *)(param_1 + 2) = 0xff;
  *(undefined8 *)((long)param_1 + 0x24) = 0x500000000;
  if (7 < param_5) {
    param_5 = 8;
  }
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  param_1[1] = 0xff00000000;
  *(undefined4 *)((long)param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 6) = param_4;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  param_1[7] = param_2;
  *(uint *)(param_1 + 8) = param_5;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  return;
}


// ===== 0060bbf0  ma_hpf_node_init =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_hpf_node_init(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined8 *)0x0) {
    param_4[1] = 0;
    *param_4 = 0;
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    param_4[7] = 0;
    param_4[6] = 0;
    param_4[9] = 0;
    param_4[8] = 0;
    param_4[0xb] = 0;
    param_4[10] = 0;
    param_4[0xd] = 0;
    param_4[0xc] = 0;
    param_4[0xf] = 0;
    param_4[0xe] = 0;
    param_4[0x11] = 0;
    param_4[0x10] = 0;
    param_4[0x13] = 0;
    param_4[0x12] = 0;
    param_4[0x15] = 0;
    param_4[0x14] = 0;
    param_4[0x17] = 0;
    param_4[0x16] = 0;
    param_4[0x19] = 0;
    param_4[0x18] = 0;
    param_4[0x1b] = 0;
    param_4[0x1a] = 0;
    param_4[0x1d] = 0;
    param_4[0x1c] = 0;
    param_4[0x1f] = 0;
    param_4[0x1e] = 0;
    param_4[0x21] = 0;
    param_4[0x20] = 0;
    param_4[0x23] = 0;
    param_4[0x22] = 0;
    param_4[0x25] = 0;
    param_4[0x24] = 0;
    param_4[0x27] = 0;
    param_4[0x26] = 0;
    param_4[0x29] = 0;
    param_4[0x28] = 0;
    param_4[0x2b] = 0;
    param_4[0x2a] = 0;
    param_4[0x2d] = 0;
    param_4[0x2c] = 0;
    param_4[0x2f] = 0;
    param_4[0x2e] = 0;
    param_4[0x31] = 0;
    param_4[0x30] = 0;
    param_4[0x33] = 0;
    param_4[0x32] = 0;
    if ((param_2 != 0) && (*(int *)(param_2 + 0x28) == 5)) {
      uVar2 = ma_hpf_init((int *)(param_2 + 0x28),param_3,param_4 + 0x2d);
      if ((int)uVar2 == 0) {
        local_70 = &PTR_FUN_00686a00;
        local_58 = param_2 + 0x2c;
        uStack_60 = _UNK_0024e4c8;
        local_68 = _DAT_0024e4c0;
        lStack_50 = local_58;
        uVar2 = ma_node_init(param_1,&local_70,param_3,param_4);
      }
      goto LAB_0060bcc4;
    }
  }
  uVar2 = 0xfffffffe;
LAB_0060bcc4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0060bcf0  FUN_0060bcf0 =====

void FUN_0060bcf0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  ma_hpf_process_pcm_frames(param_1 + 0x168,*param_4,*param_2,*param_5);
  return;
}


// ===== 0060bd08  ma_hpf_node_reinit =====

undefined8 ma_hpf_node_reinit(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_005cd34c(param_1,0,param_2 + 0x168,0);
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 0060bd24  ma_hpf_node_uninit =====

void ma_hpf_node_uninit(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    ma_node_uninit();
    ma_hpf_uninit(param_1 + 0x168,param_2);
    return;
  }
  return;
}


// ===== 0060bd58  ma_bpf_node_config_init =====

void ma_bpf_node_config_init
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               uint param_5)

{
  *(undefined4 *)(param_1 + 2) = 0xff;
  *(undefined8 *)((long)param_1 + 0x24) = 0x500000000;
  if (7 < param_5) {
    param_5 = 8;
  }
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  param_1[1] = 0xff00000000;
  *(undefined4 *)((long)param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 6) = param_4;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  param_1[7] = param_2;
  *(uint *)(param_1 + 8) = param_5;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  return;
}


// ===== 0060bd9c  ma_bpf_node_init =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_bpf_node_init(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined8 *)0x0) {
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    param_4[7] = 0;
    param_4[6] = 0;
    param_4[9] = 0;
    param_4[8] = 0;
    param_4[0xb] = 0;
    param_4[10] = 0;
    param_4[0xd] = 0;
    param_4[0xc] = 0;
    param_4[0xf] = 0;
    param_4[0xe] = 0;
    param_4[0x11] = 0;
    param_4[0x10] = 0;
    param_4[0x13] = 0;
    param_4[0x12] = 0;
    param_4[0x15] = 0;
    param_4[0x14] = 0;
    param_4[0x17] = 0;
    param_4[0x16] = 0;
    param_4[0x19] = 0;
    param_4[0x18] = 0;
    param_4[0x1b] = 0;
    param_4[0x1a] = 0;
    param_4[0x1d] = 0;
    param_4[0x1c] = 0;
    param_4[0x1f] = 0;
    param_4[0x1e] = 0;
    param_4[0x21] = 0;
    param_4[0x20] = 0;
    param_4[0x23] = 0;
    param_4[0x22] = 0;
    param_4[0x25] = 0;
    param_4[0x24] = 0;
    param_4[0x27] = 0;
    param_4[0x26] = 0;
    param_4[0x29] = 0;
    param_4[0x28] = 0;
    param_4[0x2b] = 0;
    param_4[0x2a] = 0;
    param_4[0x2d] = 0;
    param_4[0x2c] = 0;
    param_4[0x2f] = 0;
    param_4[0x2e] = 0;
    param_4[0x31] = 0;
    param_4[0x30] = 0;
    param_4[1] = 0;
    *param_4 = 0;
    if ((param_2 != 0) && (*(int *)(param_2 + 0x28) == 5)) {
      uVar2 = ma_bpf_init((int *)(param_2 + 0x28),param_3,param_4 + 0x2d);
      if ((int)uVar2 == 0) {
        local_70 = &PTR_FUN_00686a18;
        local_58 = param_2 + 0x2c;
        uStack_60 = _UNK_0024e4c8;
        local_68 = _DAT_0024e4c0;
        lStack_50 = local_58;
        uVar2 = ma_node_init(param_1,&local_70,param_3,param_4);
      }
      goto LAB_0060be70;
    }
  }
  uVar2 = 0xfffffffe;
LAB_0060be70:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0060be9c  FUN_0060be9c =====

void FUN_0060be9c(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  ma_bpf_process_pcm_frames(param_1 + 0x168,*param_4,*param_2,*param_5);
  return;
}


// ===== 0060beb4  ma_bpf_node_reinit =====

undefined8 ma_bpf_node_reinit(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_005ce5a0(param_1,0,param_2 + 0x168,0);
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 0060bed0  ma_bpf_node_uninit =====

void ma_bpf_node_uninit(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    ma_node_uninit();
    ma_bpf_uninit(param_1 + 0x168,param_2);
    return;
  }
  return;
}


// ===== 0060bf04  ma_notch_node_config_init =====

void ma_notch_node_config_init
               (undefined8 *param_1,double param_2,undefined8 param_3,undefined4 param_4,
               uint param_5)

{
  double dVar1;
  
  *(undefined4 *)(param_1 + 2) = 0xff;
  dVar1 = DAT_0024e8c0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x500000000;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  param_1[6] = (ulong)param_5;
  param_1[1] = 0xff00000000;
  param_1[7] = dVar1;
  param_1[8] = param_3;
  return;
}


// ===== 0060bf4c  ma_notch_node_init =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_notch_node_init(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined8 *)0x0) {
    param_4[0x34] = 0;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    param_4[7] = 0;
    param_4[6] = 0;
    param_4[9] = 0;
    param_4[8] = 0;
    param_4[0xb] = 0;
    param_4[10] = 0;
    param_4[0xd] = 0;
    param_4[0xc] = 0;
    param_4[0xf] = 0;
    param_4[0xe] = 0;
    param_4[0x11] = 0;
    param_4[0x10] = 0;
    param_4[0x13] = 0;
    param_4[0x12] = 0;
    param_4[0x15] = 0;
    param_4[0x14] = 0;
    param_4[0x17] = 0;
    param_4[0x16] = 0;
    param_4[0x19] = 0;
    param_4[0x18] = 0;
    param_4[0x1b] = 0;
    param_4[0x1a] = 0;
    param_4[0x1d] = 0;
    param_4[0x1c] = 0;
    param_4[0x1f] = 0;
    param_4[0x1e] = 0;
    param_4[0x21] = 0;
    param_4[0x20] = 0;
    param_4[0x23] = 0;
    param_4[0x22] = 0;
    param_4[0x25] = 0;
    param_4[0x24] = 0;
    param_4[0x27] = 0;
    param_4[0x26] = 0;
    param_4[0x29] = 0;
    param_4[0x28] = 0;
    param_4[0x2b] = 0;
    param_4[0x2a] = 0;
    param_4[0x2d] = 0;
    param_4[0x2c] = 0;
    param_4[0x2f] = 0;
    param_4[0x2e] = 0;
    param_4[0x31] = 0;
    param_4[0x30] = 0;
    param_4[0x33] = 0;
    param_4[0x32] = 0;
    if ((param_2 != 0) && (*(int *)(param_2 + 0x28) == 5)) {
      uVar2 = ma_notch2_init((int *)(param_2 + 0x28),param_3,param_4 + 0x2d);
      if ((int)uVar2 == 0) {
        local_70 = &PTR_FUN_00686a30;
        local_58 = param_2 + 0x2c;
        uStack_60 = _UNK_0024e4c8;
        local_68 = _DAT_0024e4c0;
        lStack_50 = local_58;
        uVar2 = ma_node_init(param_1,&local_70,param_3,param_4);
      }
      goto LAB_0060c024;
    }
  }
  uVar2 = 0xfffffffe;
LAB_0060c024:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0060c050  FUN_0060c050 =====

void FUN_0060c050(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  ma_biquad_process_pcm_frames(param_1 + 0x168,*param_4,*param_2,*param_5);
  return;
}


// ===== 0060c068  ma_notch_node_reinit =====

void ma_notch_node_reinit(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  double dStack_58;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_2 == 0) || (param_1 == (undefined8 *)0x0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    dVar5 = (double)param_1[2];
    dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 1));
    dVar4 = ((double)param_1[3] * DAT_0024e878) / dVar4;
    dVar3 = sin(dVar4);
    local_70 = sin(DAT_0024e8b8 - dVar4);
    local_80 = *param_1;
    local_70 = local_70 * -2.0;
    local_78 = 0x3ff0000000000000;
    dVar3 = dVar3 / (dVar5 + dVar5);
    local_68 = 0x3ff0000000000000;
    local_60 = dVar3 + 1.0;
    local_50 = 1.0 - dVar3;
    dStack_58 = local_70;
    uVar2 = ma_biquad_reinit(&local_80,param_2 + 0x168);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0060c154  ma_notch_node_uninit =====

void ma_notch_node_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (param_1 != 0) {
    ma_node_uninit();
    if ((*(int *)(param_1 + 0x1a0) != 0) &&
       (__ptr = *(void **)(param_1 + 0x198), __ptr != (void *)0x0)) {
      if (param_2 == (undefined8 *)0x0) {
        free(__ptr);
        return;
      }
      if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0060c198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_2[3])(__ptr,*param_2);
        return;
      }
    }
  }
  return;
}


// ===== 0060c1b4  ma_peak_node_config_init =====

void ma_peak_node_config_init
               (undefined8 *param_1,undefined8 param_2,double param_3,undefined8 param_4,
               undefined4 param_5,uint param_6)

{
  double dVar1;
  
  *(undefined4 *)(param_1 + 2) = 0xff;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  param_1[1] = 0xff00000000;
  dVar1 = DAT_0024e8c0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x500000000;
  if (param_3 != 0.0) {
    dVar1 = param_3;
  }
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = param_5;
  param_1[6] = (ulong)param_6;
  param_1[9] = param_4;
  param_1[7] = param_2;
  param_1[8] = dVar1;
  return;
}


// ===== 0060c200  ma_peak_node_init =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_peak_node_init(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  void *__s;
  ulong uVar5;
  size_t __size;
  uint *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined **local_b0;
  undefined8 local_a8;
  double dStack_a0;
  uint *local_98;
  uint *puStack_90;
  double local_88;
  double dStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (param_4 != (undefined8 *)0x0) {
    param_4[0x34] = 0;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    param_4[7] = 0;
    param_4[6] = 0;
    param_4[9] = 0;
    param_4[8] = 0;
    param_4[0xb] = 0;
    param_4[10] = 0;
    param_4[0xd] = 0;
    param_4[0xc] = 0;
    param_4[0xf] = 0;
    param_4[0xe] = 0;
    param_4[0x11] = 0;
    param_4[0x10] = 0;
    param_4[0x13] = 0;
    param_4[0x12] = 0;
    param_4[0x15] = 0;
    param_4[0x14] = 0;
    param_4[0x17] = 0;
    param_4[0x16] = 0;
    param_4[0x19] = 0;
    param_4[0x18] = 0;
    param_4[0x1b] = 0;
    param_4[0x1a] = 0;
    param_4[0x1d] = 0;
    param_4[0x1c] = 0;
    param_4[0x1f] = 0;
    param_4[0x1e] = 0;
    param_4[0x21] = 0;
    param_4[0x20] = 0;
    param_4[0x23] = 0;
    param_4[0x22] = 0;
    param_4[0x25] = 0;
    param_4[0x24] = 0;
    param_4[0x27] = 0;
    param_4[0x26] = 0;
    param_4[0x29] = 0;
    param_4[0x28] = 0;
    param_4[0x2b] = 0;
    param_4[0x2a] = 0;
    param_4[0x2d] = 0;
    param_4[0x2c] = 0;
    param_4[0x2f] = 0;
    param_4[0x2e] = 0;
    param_4[0x31] = 0;
    param_4[0x30] = 0;
    param_4[0x33] = 0;
    param_4[0x32] = 0;
    if ((param_2 != 0) && (*(int *)(param_2 + 0x28) == 5)) {
      puVar6 = (uint *)(param_2 + 0x2c);
      if (*puVar6 == 0) {
        uVar5 = 0xfffffffe;
      }
      else {
        __size = (ulong)*puVar6 << 3;
        if (param_3 == (undefined8 *)0x0) {
          __s = malloc(__size);
        }
        else {
          if ((code *)param_3[1] == (code *)0x0) {
            uVar5 = 0xfffffffc;
            goto LAB_0060c49c;
          }
          __s = (void *)(*(code *)param_3[1])(__size,*param_3);
        }
        dVar7 = DAT_0024e878;
        if (__s == (void *)0x0) {
          uVar5 = 0xfffffffc;
        }
        else {
          puVar1 = param_4 + 0x2d;
          param_4[0x2e] = 0;
          *puVar1 = 0;
          param_4[0x30] = 0;
          param_4[0x2f] = 0;
          param_4[0x32] = 0;
          param_4[0x31] = 0;
          param_4[0x34] = 0;
          param_4[0x33] = 0;
          dVar9 = *(double *)(param_2 + 0x40);
          dVar8 = (double)NEON_ucvtf((ulong)*(uint *)(param_2 + 0x30));
          dVar8 = (*(double *)(param_2 + 0x48) * dVar7) / dVar8;
          dVar7 = sin(dVar8);
          dVar8 = sin(DAT_0024e8b8 - dVar8);
          dVar7 = dVar7 / (dVar9 + dVar9);
          dVar9 = pow(10.0,*(double *)(param_2 + 0x38) / 40.0);
          uVar4 = *(uint *)(param_2 + 0x2c);
          local_b0 = *(undefined ***)(param_2 + 0x28);
          local_a8 = NEON_fmadd(dVar7,dVar9,0x3ff0000000000000);
          local_98 = (uint *)NEON_fmsub(dVar7,dVar9,0x3ff0000000000000);
          param_4[0x2e] = 0;
          *puVar1 = 0;
          param_4[0x30] = 0;
          param_4[0x2f] = 0;
          dStack_a0 = dVar8 * -2.0;
          param_4[0x32] = 0;
          param_4[0x31] = 0;
          param_4[0x34] = 0;
          param_4[0x33] = 0;
          puStack_90 = (uint *)(dVar7 / dVar9 + 1.0);
          dStack_80 = 1.0 - dVar7 / dVar9;
          local_88 = dStack_a0;
          if (uVar4 == 0) {
            uVar4 = 0xfffffffe;
          }
          else {
            param_4[0x33] = __s;
            memset(__s,0,(ulong)uVar4 << 3);
            param_4[0x31] = __s;
            param_4[0x32] = (void *)((long)__s + (ulong)uVar4 * 4);
            uVar4 = ma_biquad_reinit(&local_b0,puVar1);
            dVar7 = _UNK_0024e4c8;
            uVar3 = _DAT_0024e4c0;
            if (uVar4 == 0) {
              local_b0 = &PTR_FUN_00686a48;
              *(undefined4 *)(param_4 + 0x34) = 1;
              dStack_a0 = dVar7;
              local_a8 = uVar3;
              local_98 = puVar6;
              puStack_90 = puVar6;
              uVar5 = ma_node_init(param_1,&local_b0,param_3,param_4);
              goto LAB_0060c2c0;
            }
          }
          uVar5 = (ulong)uVar4;
          if (param_3 == (undefined8 *)0x0) {
            free(__s);
          }
          else if ((code *)param_3[3] != (code *)0x0) {
            (*(code *)param_3[3])(__s,*param_3);
          }
        }
      }
LAB_0060c49c:
      ma_node_uninit(param_4,param_3);
      goto LAB_0060c2c0;
    }
  }
  uVar5 = 0xfffffffe;
LAB_0060c2c0:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


// ===== 0060c4b4  FUN_0060c4b4 =====

void FUN_0060c4b4(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  ma_biquad_process_pcm_frames(param_1 + 0x168,*param_4,*param_2,*param_5);
  return;
}


// ===== 0060c4cc  ma_peak_node_reinit =====

void ma_peak_node_reinit(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_70;
  undefined8 uStack_68;
  double local_60;
  double dStack_58;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_2 == 0) || (param_1 == (undefined8 *)0x0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    dVar5 = (double)param_1[3];
    dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 1));
    dVar4 = ((double)param_1[4] * DAT_0024e878) / dVar4;
    dVar3 = sin(dVar4);
    dVar4 = sin(DAT_0024e8b8 - dVar4);
    dVar3 = dVar3 / (dVar5 + dVar5);
    dVar5 = pow(10.0,(double)param_1[2] / 40.0);
    local_80 = *param_1;
    uStack_78 = NEON_fmadd(dVar3,dVar5,0x3ff0000000000000);
    local_70 = dVar4 * -2.0;
    uStack_68 = NEON_fmsub(dVar3,dVar5,0x3ff0000000000000);
    local_60 = dVar3 / dVar5 + 1.0;
    local_50 = 1.0 - dVar3 / dVar5;
    dStack_58 = local_70;
    uVar2 = ma_biquad_reinit(&local_80,param_2 + 0x168);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0060c5d4  ma_peak_node_uninit =====

void ma_peak_node_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (param_1 != 0) {
    ma_node_uninit();
    if ((*(int *)(param_1 + 0x1a0) != 0) &&
       (__ptr = *(void **)(param_1 + 0x198), __ptr != (void *)0x0)) {
      if (param_2 == (undefined8 *)0x0) {
        free(__ptr);
        return;
      }
      if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0060c618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_2[3])(__ptr,*param_2);
        return;
      }
    }
  }
  return;
}


// ===== 0060c634  ma_loshelf_node_config_init =====

void ma_loshelf_node_config_init
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,uint param_6)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0xff;
  *(undefined8 *)((long)param_1 + 0x24) = 0x500000000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  param_1[1] = 0xff00000000;
  *(undefined4 *)((long)param_1 + 0x2c) = param_5;
  param_1[6] = (ulong)param_6;
  param_1[7] = param_2;
  param_1[8] = param_3;
  param_1[9] = param_4;
  return;
}


// ===== 0060c670  ma_loshelf_node_init =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_loshelf_node_init(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *__ptr;
  ulong uVar4;
  uint *puVar5;
  size_t __size;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint *local_68;
  uint *puStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined8 *)0x0) {
    param_4[0x34] = 0;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    param_4[7] = 0;
    param_4[6] = 0;
    param_4[9] = 0;
    param_4[8] = 0;
    param_4[0xb] = 0;
    param_4[10] = 0;
    param_4[0xd] = 0;
    param_4[0xc] = 0;
    param_4[0xf] = 0;
    param_4[0xe] = 0;
    param_4[0x11] = 0;
    param_4[0x10] = 0;
    param_4[0x13] = 0;
    param_4[0x12] = 0;
    param_4[0x15] = 0;
    param_4[0x14] = 0;
    param_4[0x17] = 0;
    param_4[0x16] = 0;
    param_4[0x19] = 0;
    param_4[0x18] = 0;
    param_4[0x1b] = 0;
    param_4[0x1a] = 0;
    param_4[0x1d] = 0;
    param_4[0x1c] = 0;
    param_4[0x1f] = 0;
    param_4[0x1e] = 0;
    param_4[0x21] = 0;
    param_4[0x20] = 0;
    param_4[0x23] = 0;
    param_4[0x22] = 0;
    param_4[0x25] = 0;
    param_4[0x24] = 0;
    param_4[0x27] = 0;
    param_4[0x26] = 0;
    param_4[0x29] = 0;
    param_4[0x28] = 0;
    param_4[0x2b] = 0;
    param_4[0x2a] = 0;
    param_4[0x2d] = 0;
    param_4[0x2c] = 0;
    param_4[0x2f] = 0;
    param_4[0x2e] = 0;
    param_4[0x31] = 0;
    param_4[0x30] = 0;
    param_4[0x33] = 0;
    param_4[0x32] = 0;
    if ((param_2 != 0) && (*(int *)(param_2 + 0x28) == 5)) {
      puVar5 = (uint *)(param_2 + 0x2c);
      if (*puVar5 != 0) {
        __size = (ulong)*puVar5 << 3;
        if (param_3 == (undefined8 *)0x0) {
          __ptr = malloc(__size);
joined_r0x0060c7a8:
          if (__ptr != (void *)0x0) {
            uVar4 = ma_loshelf2_init_preallocated((int *)(param_2 + 0x28),__ptr,param_4 + 0x2d);
            uVar3 = _UNK_0024e4c8;
            uVar2 = _DAT_0024e4c0;
            if ((int)uVar4 == 0) {
              local_80 = &PTR_FUN_00686a60;
              *(undefined4 *)(param_4 + 0x34) = 1;
              uStack_70 = uVar3;
              local_78 = uVar2;
              local_68 = puVar5;
              puStack_60 = puVar5;
              uVar4 = ma_node_init(param_1,&local_80,param_3,param_4);
            }
            else {
              if (param_3 == (undefined8 *)0x0) {
                free(__ptr);
              }
              else {
                if ((code *)param_3[3] == (code *)0x0) goto LAB_0060c760;
                (*(code *)param_3[3])(__ptr,*param_3);
              }
              uVar4 = uVar4 & 0xffffffff;
            }
            goto LAB_0060c760;
          }
        }
        else if ((code *)param_3[1] != (code *)0x0) {
          __ptr = (void *)(*(code *)param_3[1])(__size,*param_3);
          goto joined_r0x0060c7a8;
        }
        uVar4 = 0xfffffffc;
        goto LAB_0060c760;
      }
    }
  }
  uVar4 = 0xfffffffe;
LAB_0060c760:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 0060c808  FUN_0060c808 =====

void FUN_0060c808(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  ma_biquad_process_pcm_frames(param_1 + 0x168,*param_4,*param_2,*param_5);
  return;
}


// ===== 0060c820  ma_loshelf_node_reinit =====

undefined8 ma_loshelf_node_reinit(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = ma_loshelf2_reinit(param_1,param_2 + 0x168);
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 0060c834  ma_loshelf_node_uninit =====

void ma_loshelf_node_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (param_1 != 0) {
    ma_node_uninit();
    if ((*(int *)(param_1 + 0x1a0) != 0) &&
       (__ptr = *(void **)(param_1 + 0x198), __ptr != (void *)0x0)) {
      if (param_2 == (undefined8 *)0x0) {
        free(__ptr);
        return;
      }
      if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0060c878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_2[3])(__ptr,*param_2);
        return;
      }
    }
  }
  return;
}


// ===== 0060c894  ma_hishelf_node_config_init =====

void ma_hishelf_node_config_init
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,uint param_6)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0xff;
  *(undefined8 *)((long)param_1 + 0x24) = 0x500000000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  param_1[1] = 0xff00000000;
  *(undefined4 *)((long)param_1 + 0x2c) = param_5;
  param_1[6] = (ulong)param_6;
  param_1[7] = param_2;
  param_1[8] = param_3;
  param_1[9] = param_4;
  return;
}


// ===== 0060c8d0  ma_hishelf_node_init =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_hishelf_node_init(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *__ptr;
  ulong uVar4;
  uint *puVar5;
  size_t __size;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint *local_68;
  uint *puStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined8 *)0x0) {
    param_4[0x34] = 0;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    param_4[7] = 0;
    param_4[6] = 0;
    param_4[9] = 0;
    param_4[8] = 0;
    param_4[0xb] = 0;
    param_4[10] = 0;
    param_4[0xd] = 0;
    param_4[0xc] = 0;
    param_4[0xf] = 0;
    param_4[0xe] = 0;
    param_4[0x11] = 0;
    param_4[0x10] = 0;
    param_4[0x13] = 0;
    param_4[0x12] = 0;
    param_4[0x15] = 0;
    param_4[0x14] = 0;
    param_4[0x17] = 0;
    param_4[0x16] = 0;
    param_4[0x19] = 0;
    param_4[0x18] = 0;
    param_4[0x1b] = 0;
    param_4[0x1a] = 0;
    param_4[0x1d] = 0;
    param_4[0x1c] = 0;
    param_4[0x1f] = 0;
    param_4[0x1e] = 0;
    param_4[0x21] = 0;
    param_4[0x20] = 0;
    param_4[0x23] = 0;
    param_4[0x22] = 0;
    param_4[0x25] = 0;
    param_4[0x24] = 0;
    param_4[0x27] = 0;
    param_4[0x26] = 0;
    param_4[0x29] = 0;
    param_4[0x28] = 0;
    param_4[0x2b] = 0;
    param_4[0x2a] = 0;
    param_4[0x2d] = 0;
    param_4[0x2c] = 0;
    param_4[0x2f] = 0;
    param_4[0x2e] = 0;
    param_4[0x31] = 0;
    param_4[0x30] = 0;
    param_4[0x33] = 0;
    param_4[0x32] = 0;
    if ((param_2 != 0) && (*(int *)(param_2 + 0x28) == 5)) {
      puVar5 = (uint *)(param_2 + 0x2c);
      if (*puVar5 != 0) {
        __size = (ulong)*puVar5 << 3;
        if (param_3 == (undefined8 *)0x0) {
          __ptr = malloc(__size);
joined_r0x0060ca08:
          if (__ptr != (void *)0x0) {
            uVar4 = ma_hishelf2_init_preallocated((int *)(param_2 + 0x28),__ptr,param_4 + 0x2d);
            uVar3 = _UNK_0024e4c8;
            uVar2 = _DAT_0024e4c0;
            if ((int)uVar4 == 0) {
              local_80 = &PTR_FUN_00686a78;
              *(undefined4 *)(param_4 + 0x34) = 1;
              uStack_70 = uVar3;
              local_78 = uVar2;
              local_68 = puVar5;
              puStack_60 = puVar5;
              uVar4 = ma_node_init(param_1,&local_80,param_3,param_4);
            }
            else {
              if (param_3 == (undefined8 *)0x0) {
                free(__ptr);
              }
              else {
                if ((code *)param_3[3] == (code *)0x0) goto LAB_0060c9c0;
                (*(code *)param_3[3])(__ptr,*param_3);
              }
              uVar4 = uVar4 & 0xffffffff;
            }
            goto LAB_0060c9c0;
          }
        }
        else if ((code *)param_3[1] != (code *)0x0) {
          __ptr = (void *)(*(code *)param_3[1])(__size,*param_3);
          goto joined_r0x0060ca08;
        }
        uVar4 = 0xfffffffc;
        goto LAB_0060c9c0;
      }
    }
  }
  uVar4 = 0xfffffffe;
LAB_0060c9c0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 0060ca68  FUN_0060ca68 =====

void FUN_0060ca68(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  ma_biquad_process_pcm_frames(param_1 + 0x168,*param_4,*param_2,*param_5);
  return;
}


// ===== 0060ca80  ma_hishelf_node_reinit =====

undefined8 ma_hishelf_node_reinit(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = ma_hishelf2_reinit(param_1,param_2 + 0x168);
    return uVar1;
  }
  return 0xfffffffe;
}


// ===== 0060ca94  ma_hishelf_node_uninit =====

void ma_hishelf_node_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (param_1 != 0) {
    ma_node_uninit();
    if ((*(int *)(param_1 + 0x1a0) != 0) &&
       (__ptr = *(void **)(param_1 + 0x198), __ptr != (void *)0x0)) {
      if (param_2 == (undefined8 *)0x0) {
        free(__ptr);
        return;
      }
      if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0060cad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_2[3])(__ptr,*param_2);
        return;
      }
    }
  }
  return;
}


// ===== 0060caf4  ma_delay_node_config_init =====

void ma_delay_node_config_init
               (undefined8 *param_1,float param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 2) = 0xff;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  param_1[1] = 0xff00000000;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = param_3;
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  *(uint *)((long)param_1 + 0x34) = (uint)(param_2 == 0.0);
  param_1[7] = uVar1;
  *(float *)(param_1 + 8) = param_2;
  return;
}


// ===== 0060cb34  ma_delay_node_init =====

int ma_delay_node_init(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  size_t __n;
  int iVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  int *piStack_78;
  int *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_4 == (undefined8 *)0x0) {
    iVar4 = -2;
  }
  else {
    param_4[0x32] = 0;
    iVar4 = -2;
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    param_4[7] = 0;
    param_4[6] = 0;
    param_4[9] = 0;
    param_4[8] = 0;
    param_4[0xb] = 0;
    param_4[10] = 0;
    param_4[0xd] = 0;
    param_4[0xc] = 0;
    param_4[0xf] = 0;
    param_4[0xe] = 0;
    param_4[0x11] = 0;
    param_4[0x10] = 0;
    param_4[0x13] = 0;
    param_4[0x12] = 0;
    param_4[0x15] = 0;
    param_4[0x14] = 0;
    param_4[0x17] = 0;
    param_4[0x16] = 0;
    param_4[0x19] = 0;
    param_4[0x18] = 0;
    param_4[0x1b] = 0;
    param_4[0x1a] = 0;
    param_4[0x1d] = 0;
    param_4[0x1c] = 0;
    param_4[0x1f] = 0;
    param_4[0x1e] = 0;
    param_4[0x21] = 0;
    param_4[0x20] = 0;
    param_4[0x23] = 0;
    param_4[0x22] = 0;
    param_4[0x25] = 0;
    param_4[0x24] = 0;
    param_4[0x27] = 0;
    param_4[0x26] = 0;
    param_4[0x29] = 0;
    param_4[0x28] = 0;
    param_4[0x2b] = 0;
    param_4[0x2a] = 0;
    param_4[0x2d] = 0;
    param_4[0x2c] = 0;
    param_4[0x2f] = 0;
    param_4[0x2e] = 0;
    param_4[0x31] = 0;
    param_4[0x30] = 0;
    param_4[1] = 0;
    *param_4 = 0;
    fVar7 = *(float *)(param_2 + 0x40);
    if ((0.0 <= fVar7) && (fVar7 == 1.0 || fVar7 < 1.0 != NAN(fVar7))) {
      piVar1 = (int *)(param_2 + 0x28);
      uVar9 = *(undefined8 *)(param_2 + 0x3c);
      uVar8 = *(undefined8 *)(param_2 + 0x34);
      uVar11 = *(undefined8 *)(param_2 + 0x30);
      uVar10 = *(undefined8 *)piVar1;
      *(undefined4 *)((long)param_4 + 0x184) = 0;
      *(undefined8 *)((long)param_4 + 0x17c) = uVar9;
      *(undefined8 *)((long)param_4 + 0x174) = uVar8;
      param_4[0x2e] = uVar11;
      param_4[0x2d] = uVar10;
      iVar4 = *(int *)(param_2 + 0x30);
      iVar2 = *(int *)(param_2 + 0x28);
      *(int *)(param_4 + 0x31) = iVar4;
      uVar6 = (ulong)(uint)(iVar4 * iVar2 * 4);
      if (param_3 == (undefined8 *)0x0) {
        pvVar5 = malloc(uVar6);
      }
      else {
        if ((code *)param_3[1] == (code *)0x0) {
          param_4[0x32] = 0;
          iVar4 = -4;
          goto LAB_0060cc1c;
        }
        pvVar5 = (void *)(*(code *)param_3[1])(uVar6,*param_3);
      }
      param_4[0x32] = pvVar5;
      if (pvVar5 == (void *)0x0) {
        iVar4 = -4;
      }
      else {
        for (uVar6 = (ulong)*(uint *)(param_4 + 0x31) * (ulong)(uint)(*piVar1 << 2); uVar6 != 0;
            uVar6 = uVar6 - __n) {
          __n = uVar6;
          if (0xfffffffe < uVar6) {
            __n = 0xffffffff;
          }
          memset(pvVar5,0,__n);
          pvVar5 = (void *)((long)pvVar5 + __n);
        }
        uStack_88 = *(undefined8 *)(param_2 + 8);
        local_80 = *(undefined8 *)(param_2 + 0x10);
        local_90 = &PTR_FUN_00686a90;
        piStack_78 = piVar1;
        local_70 = piVar1;
        iVar4 = ma_node_init(param_1,&local_90,param_3,param_4);
        if ((iVar4 != 0) && (pvVar5 = (void *)param_4[0x32], pvVar5 != (void *)0x0)) {
          if (param_3 == (undefined8 *)0x0) {
            free(pvVar5);
          }
          else if ((code *)param_3[3] != (code *)0x0) {
            (*(code *)param_3[3])(pvVar5,*param_3);
          }
        }
      }
    }
  }
LAB_0060cc1c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0060cd28  FUN_0060cd28 =====

void FUN_0060cd28(long param_1,long *param_2,undefined8 param_3,long *param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  float fVar15;
  undefined4 uVar16;
  
  lVar10 = *param_4;
  if (((lVar10 != 0) && (lVar11 = *param_2, lVar11 != 0)) && (iVar1 = *param_5, iVar1 != 0)) {
    uVar2 = *(uint *)(param_1 + 0x168);
    uVar3 = *(uint *)(param_1 + 0x188);
    iVar14 = 0;
    iVar12 = *(int *)(param_1 + 0x184);
    lVar13 = (ulong)uVar2 * 4;
    do {
      if (uVar2 != 0) {
        iVar4 = *(int *)(param_1 + 0x174);
        lVar6 = *(long *)(param_1 + 400);
        uVar7 = 0;
        do {
          uVar8 = (ulong)(iVar12 * uVar2 + (int)uVar7);
          lVar9 = uVar7 * 4;
          fVar15 = *(float *)(lVar6 + uVar8 * 4);
          if (iVar4 == 0) {
            fVar15 = (float)NEON_fmadd(fVar15,*(undefined4 *)(param_1 + 0x180),
                                       *(float *)(lVar11 + lVar9) * *(float *)(param_1 + 0x17c));
            *(float *)(lVar6 + uVar8 * 4) = fVar15;
            *(float *)(lVar10 + lVar9) = fVar15 * *(float *)(param_1 + 0x178);
          }
          else {
            *(float *)(lVar10 + lVar9) = fVar15 * *(float *)(param_1 + 0x178);
            uVar16 = NEON_fmadd(*(undefined4 *)(lVar6 + uVar8 * 4),*(undefined4 *)(param_1 + 0x180),
                                *(float *)(lVar11 + lVar9) * *(float *)(param_1 + 0x17c));
            *(undefined4 *)(lVar6 + uVar8 * 4) = uVar16;
          }
          uVar7 = uVar7 + 1;
        } while (uVar2 != uVar7);
      }
      iVar14 = iVar14 + 1;
      lVar10 = lVar10 + lVar13;
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = (iVar12 + 1U) / uVar3;
      }
      lVar11 = lVar11 + lVar13;
      iVar12 = (iVar12 + 1U) - uVar5 * uVar3;
    } while (iVar14 != iVar1);
    *(int *)(param_1 + 0x184) = iVar12;
  }
  return;
}


// ===== 0060ce08  ma_delay_node_uninit =====

void ma_delay_node_uninit(long param_1,undefined8 *param_2)

{
  void *__ptr;
  
  if (param_1 != 0) {
    ma_node_uninit();
    __ptr = *(void **)(param_1 + 400);
    if (__ptr != (void *)0x0) {
      if (param_2 == (undefined8 *)0x0) {
        free(__ptr);
        return;
      }
      if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0060ce44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_2[3])(__ptr,*param_2);
        return;
      }
    }
  }
  return;
}


// ===== 0060ce60  ma_delay_node_set_wet =====

void ma_delay_node_set_wet(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x178) = param_1;
  }
  return;
}


// ===== 0060ce6c  ma_delay_node_get_wet =====

undefined4 ma_delay_node_get_wet(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x178);
  }
  return 0;
}


// ===== 0060ce80  ma_delay_node_set_dry =====

void ma_delay_node_set_dry(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x17c) = param_1;
  }
  return;
}


// ===== 0060ce8c  ma_delay_node_get_dry =====

undefined4 ma_delay_node_get_dry(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x17c);
  }
  return 0;
}


// ===== 0060cea0  ma_delay_node_set_decay =====

void ma_delay_node_set_decay(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x180) = param_1;
  }
  return;
}


// ===== 0060ceac  ma_delay_node_get_decay =====

undefined4 ma_delay_node_get_decay(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x180);
  }
  return 0;
}


// ===== 0060cec0  ma_engine_node_config_init =====

void ma_engine_node_config_init(long *param_1,long param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (param_1 != (long *)0x0) {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x504);
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(byte *)(param_1 + 4) = (byte)(param_4 >> 0xd) & 1;
  *(byte *)((long)param_1 + 0x21) = (byte)(param_4 >> 0xe) & 1;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
  return;
}


// ===== 0060cef4  ma_engine_node_get_heap_size =====

void ma_engine_node_get_heap_size(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50 [5];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == (undefined8 *)0x0) {
    uVar2 = 0xfffffffe;
  }
  else {
    *param_2 = 0;
    uVar2 = FUN_0060cf5c(param_1,local_50);
    if ((int)uVar2 == 0) {
      *param_2 = local_50[0];
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0060cf5c  FUN_0060cf5c =====

void FUN_0060cf5c(long *param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int local_a0;
  int local_9c;
  undefined **local_98;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  int *local_80;
  undefined1 *puStack_78;
  long local_70 [5];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2 != (ulong *)0x0) {
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  if ((param_1 != (long *)0x0) && (lVar4 = *param_1, lVar4 != 0)) {
    uVar1 = *(uint *)((long)param_1 + 0xc);
    uVar8 = (ulong)uVar1;
    *param_2 = 0;
    if (uVar1 == 0) {
      if (*(int *)(lVar4 + 0x17c) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ulong)*(byte *)(*(long *)(lVar4 + 0x188) + 9);
      }
    }
    uVar9 = (ulong)*(uint *)(param_1 + 2);
    iVar7 = (int)uVar8;
    if (*(uint *)(param_1 + 2) == 0) {
      if (*(int *)(lVar4 + 0x17c) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (ulong)*(byte *)(*(long *)(lVar4 + 0x188) + 9);
      }
    }
    bVar3 = (int)param_1[1] == 0;
    local_98 = (undefined **)0x686be0;
    if (!bVar3) {
      local_98 = &PTR_FUN_00686bf8;
    }
    local_80 = &local_9c;
    local_90 = (uint)bVar3;
    local_84 = 0;
    local_8c = 0xff000000ff;
    local_a0 = (int)uVar9;
    local_9c = iVar7;
    puStack_78 = (undefined1 *)&local_a0;
    uVar5 = FUN_006095dc(lVar4,&local_98,local_70);
    if ((int)uVar5 != 0) goto LAB_0060d0b8;
    uVar6 = local_70[0] + 7U & 0xfffffffffffffff8;
    *param_2 = uVar6;
    param_2[1] = 0;
    if (iVar7 != 0) {
      param_2[2] = uVar6;
      uVar6 = uVar6 + uVar8 * 8;
      *param_2 = uVar6;
      if ((int)uVar9 != 0) {
        param_2[3] = uVar6;
        uVar5 = 0;
        lVar4 = param_1[3];
        uVar6 = uVar9 * 8 + (ulong)(iVar7 == 2) * 8 + (uVar9 * 4 + 7 & 0x7fffffff8) + uVar6;
        *param_2 = uVar6;
        if ((int)lVar4 != 0) {
          param_2[4] = uVar6;
          *param_2 = uVar6 + uVar8 * 8;
        }
        goto LAB_0060d0b8;
      }
    }
  }
  uVar5 = 0xfffffffe;
LAB_0060d0b8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 0060d0e4  FUN_0060d0e4 =====

void FUN_0060d0e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_1 + 0x340);
  fVar1 = (float)*(undefined8 *)(param_1 + 0x33c);
  if (fVar4 == fVar1) {
    fVar5 = *(float *)(param_1 + 0x2a8);
    if (*(float *)(param_1 + 0x344) == *(float *)(param_1 + 0x2a8)) goto LAB_0060d184;
LAB_0060d130:
    fVar3 = fVar5;
    *(float *)(param_1 + 0x344) = fVar3;
    fVar1 = fVar4;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x344);
    *(float *)(param_1 + 0x340) = fVar1;
    fVar4 = fVar1;
    fVar5 = *(float *)(param_1 + 0x2a8);
    if (fVar3 != *(float *)(param_1 + 0x2a8)) goto LAB_0060d130;
  }
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
  if (*(long *)(param_1 + 0x168) == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x168) + 0x300));
  }
  fVar3 = fVar3 * fVar1 * (fVar4 / fVar5);
  iVar2 = (int)(fVar3 * 1e+06);
  if (0.0 < fVar3 && iVar2 != 0) {
    FUN_005b43cc(param_1 + 0x1a8,0,0,iVar2,1000000,1);
    FUN_0060d34c(param_1,param_2,param_3,param_4,param_5);
    return;
  }
LAB_0060d184:
  FUN_0060d34c();
  return;
}


// ===== 0060d1f8  FUN_0060d1f8 =====

undefined8 FUN_0060d1f8(long param_1,uint param_2,undefined4 *param_3)

{
  ulong uVar1;
  int iVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)(param_1 + 0x340);
  fVar3 = (float)*(undefined8 *)(param_1 + 0x33c);
  if (fVar6 == fVar3) {
    fVar7 = *(float *)(param_1 + 0x2a8);
    if (*(float *)(param_1 + 0x344) == *(float *)(param_1 + 0x2a8)) goto LAB_0060d2dc;
LAB_0060d254:
    fVar5 = fVar7;
    *(float *)(param_1 + 0x344) = fVar5;
    fVar3 = fVar6;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x344);
    *(float *)(param_1 + 0x340) = fVar3;
    fVar6 = fVar3;
    fVar7 = *(float *)(param_1 + 0x2a8);
    if (fVar5 != *(float *)(param_1 + 0x2a8)) goto LAB_0060d254;
  }
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
  if (*(long *)(param_1 + 0x168) == 0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x168) + 0x300));
  }
  fVar5 = fVar5 * fVar3 * (fVar6 / fVar7);
  iVar2 = (int)(fVar5 * 1e+06);
  if (0.0 < fVar5 && iVar2 != 0) {
    FUN_005b43cc(param_1 + 0x1a8,0,0,iVar2,1000000,1);
  }
LAB_0060d2dc:
  uVar4 = (ulong)param_2;
  if ((int)*(undefined8 *)(param_1 + 0x348) == 0) {
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar1 = 0;
      if ((ulong)*(uint *)(param_1 + 0x1b4) != 0) {
        uVar1 = ((ulong)*(uint *)(param_1 + 0x1d4) + (uVar4 - 1) * (ulong)*(uint *)(param_1 + 0x1cc)
                ) / (ulong)*(uint *)(param_1 + 0x1b4);
      }
      uVar4 = (ulong)*(uint *)(param_1 + 0x1d0) + (uVar4 - 1) * (ulong)*(uint *)(param_1 + 0x1c8) +
              uVar1;
    }
  }
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  *param_3 = (int)uVar4;
  return 0;
}


// ===== 0060d34c  FUN_0060d34c =====

void FUN_0060d34c(long param_1,long *param_2,uint *param_3,long *param_4,uint *param_5)

{
  bool bVar1;
  int *piVar2;
  undefined1 *puVar3;
  size_t __n;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  float fVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 *puVar23;
  float *pfVar24;
  undefined8 uVar25;
  undefined4 *puVar26;
  undefined8 *puVar27;
  float *pfVar28;
  undefined8 *puVar29;
  long lVar30;
  undefined1 *puVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 *__src;
  float fVar40;
  undefined4 uVar41;
  undefined8 uVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  ulong local_10b0;
  ulong local_10a8;
  undefined1 local_10a0 [4096];
  long local_a0;
  
  lVar10 = tpidr_el0;
  local_a0 = *(long *)(lVar10 + 0x28);
  uVar4 = *param_3;
  uVar5 = *param_5;
  uVar6 = *(uint *)(param_1 + 0x230);
  uVar7 = *(uint *)(param_1 + 0x234);
  uVar17 = *(ulong *)(param_1 + 0x360);
  if (uVar17 != 0xffffffffffffffff) {
    fVar47 = (float)*(undefined8 *)(param_1 + 0x358);
    if (*(long *)(param_1 + 0x368) == -1) {
      lVar30 = 0;
    }
    else {
      lVar30 = *(long *)(param_1 + 0x168);
      if (lVar30 != 0) {
        lVar30 = *(long *)(lVar30 + 0x1b8);
      }
      lVar30 = *(long *)(param_1 + 0x368) - lVar30;
    }
    if (fVar47 < 0.0) {
      uVar39 = *(ulong *)(param_1 + 0x1a0);
      if ((long)uVar39 < 0) {
        fVar47 = 1.0;
      }
      else if (uVar39 == 0) {
        fVar47 = *(float *)(param_1 + 0x18c);
      }
      else if (uVar39 < *(ulong *)(param_1 + 0x198)) {
        fVar47 = *(float *)(param_1 + 0x18c) +
                 ((float)(uVar39 & 0xffffffff) / (float)(*(ulong *)(param_1 + 0x198) & 0xffffffff))
                 * (*(float *)(param_1 + 400) - *(float *)(param_1 + 0x18c));
      }
      else {
        fVar47 = *(float *)(param_1 + 400);
      }
    }
    *(int *)(param_1 + 400) = (int)*(undefined8 *)(param_1 + 0x35c);
    *(float *)(param_1 + 0x18c) = fVar47;
    if (0xfffffffe < uVar17) {
      uVar17 = 0xffffffff;
    }
    if (0x7ffffffe < lVar30) {
      lVar30 = 0x7fffffff;
    }
    *(ulong *)(param_1 + 0x198) = uVar17;
    *(long *)(param_1 + 0x1a0) = -lVar30;
    *(undefined8 *)(param_1 + 0x360) = 0xffffffffffffffff;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x348);
  if (*(float *)(param_1 + 0x18c) == 1.0) {
    bVar13 = *(float *)(param_1 + 400) != 1.0;
  }
  else {
    bVar13 = true;
  }
  uVar25 = *(undefined8 *)(param_1 + 0x34c);
  uVar9 = 0;
  if (uVar6 != 0) {
    uVar9 = 0x400 / uVar6;
  }
  uVar33 = 0;
  uVar37 = 0;
  bVar14 = true;
  if ((uVar7 != 1) && (bVar14 = false, !NAN(*(float *)(param_1 + 0x304)))) {
    bVar14 = *(float *)(param_1 + 0x304) == 0.0;
  }
  iVar8 = *(int *)(param_1 + 0x174);
  uVar17 = (ulong)(uVar7 << 2);
  do {
    uVar38 = uVar5 - uVar33;
    if (uVar5 < uVar33 || uVar38 == 0) break;
    lVar30 = *param_4;
    puVar31 = (undefined1 *)(lVar30 + uVar17 * uVar33);
    __src = (undefined1 *)(*param_2 + (ulong)(uVar6 << 2) * (ulong)uVar37);
    uVar34 = uVar38;
    if (uVar9 <= uVar38) {
      uVar34 = uVar9;
    }
    if (uVar6 != uVar7) {
      uVar38 = uVar34;
    }
    puVar3 = puVar31;
    if (uVar6 != uVar7) {
      puVar3 = local_10a0;
    }
    uVar34 = uVar4 - uVar37;
    if ((int)uVar18 == 0) {
      local_10b0 = (ulong)uVar38;
      local_10a8 = (ulong)uVar34;
      ma_linear_resampler_process_pcm_frames(param_1 + 0x1a8,__src,&local_10a8,puVar3,&local_10b0);
      uVar39 = local_10b0;
      uVar34 = (uint)local_10a8;
      if (bVar13) {
        ma_fader_process_pcm_frames(param_1 + 0x180,puVar3,puVar3,local_10b0 & 0xffffffff);
      }
LAB_0060d600:
      __src = puVar3;
      uVar38 = (uint)uVar39;
    }
    else {
      if (uVar38 <= uVar34) {
        uVar34 = uVar38;
      }
      uVar39 = (ulong)uVar34;
      uVar38 = uVar34;
      if (bVar13) {
        ma_fader_process_pcm_frames(param_1 + 0x180,puVar3,__src,uVar39);
        goto LAB_0060d600;
      }
    }
    if (iVar8 != 0) {
      uVar38 = (uint)uVar39;
      ma_gainer_process_pcm_frames(param_1 + 0x308,puVar3,__src,uVar39 & 0xffffffff);
      __src = puVar3;
    }
    if ((int)uVar25 == 0) {
      uVar36 = *(uint *)(param_1 + 0x350);
      if (((uVar36 == 0xff) || (lVar30 = *(long *)(param_1 + 0x168), lVar30 == 0)) ||
         (*(uint *)(lVar30 + 0x304) <= uVar36)) {
        iVar16 = FUN_00341150(1,(undefined4 *)(param_1 + 0x284));
        while (iVar16 != 0) {
          do {
          } while (*(int *)(param_1 + 0x284) == 1);
          iVar16 = FUN_00341150(1,param_1 + 0x284);
        }
        fVar47 = *(float *)(param_1 + 0x278);
        fVar48 = *(float *)(param_1 + 0x27c);
        fVar49 = *(float *)(param_1 + 0x280);
        *(undefined4 *)(param_1 + 0x284) = 0;
        lVar30 = *(long *)(param_1 + 0x168);
        if (lVar30 == 0) {
          uVar36 = 0;
        }
        else {
          uVar39 = (ulong)*(uint *)(lVar30 + 0x304);
          if (*(uint *)(lVar30 + 0x304) < 2) {
            uVar36 = 0;
          }
          else {
            uVar22 = 0;
            fVar20 = 3.4028235e+38;
            uVar35 = 0;
            do {
              uVar36 = uVar35;
              if (*(int *)(lVar30 + uVar22 * 0x70 + 0x368) != 0) {
                lVar32 = lVar30 + uVar22 * 0x70;
                piVar2 = (int *)(lVar32 + 0x344);
                while (iVar16 = FUN_00341150(1,piVar2), iVar16 != 0) {
                  do {
                  } while (*piVar2 == 1);
                }
                lVar19 = lVar30 + uVar22 * 0x70;
                fVar43 = *(float *)(lVar32 + 0x338) - fVar47;
                fVar40 = *(float *)(lVar19 + 0x33c);
                fVar46 = *(float *)(lVar19 + 0x340);
                *piVar2 = 0;
                uVar39 = (ulong)*(uint *)(lVar30 + 0x304);
                fVar40 = fVar40 - fVar48;
                fVar46 = fVar46 - fVar49;
                uVar41 = NEON_fmadd(fVar43,fVar43,fVar40 * fVar40);
                fVar43 = (float)NEON_fmadd(fVar46,fVar46,uVar41);
                bVar1 = NAN(fVar20);
                bVar15 = fVar20 == fVar43;
                bVar12 = fVar20 < fVar43;
                fVar40 = fVar43;
                if (bVar15 || bVar12 != (bVar1 || NAN(fVar43))) {
                  fVar40 = fVar20;
                }
                fVar20 = fVar40;
                uVar36 = (uint)uVar22;
                if (bVar15 || bVar12 != (bVar1 || NAN(fVar43))) {
                  uVar36 = uVar35;
                }
              }
              uVar22 = uVar22 + 1;
              uVar35 = uVar36;
            } while (uVar22 < uVar39);
            lVar30 = *(long *)(param_1 + 0x168);
          }
        }
      }
      ma_spatializer_process_pcm_frames
                (param_1 + 0x230,lVar30 + (ulong)uVar36 * 0x70 + 0x308,puVar31,__src,uVar38);
    }
    else {
      lVar32 = uVar17 * uVar33;
      fVar47 = (float)*(undefined8 *)(param_1 + 0x338);
      if (uVar6 == uVar7) {
        uVar36 = uVar38 * uVar6;
        uVar39 = (ulong)uVar36;
        if (iVar8 == 0) {
          if ((lVar30 != 0) && (__src != (undefined1 *)0x0)) {
            if (fVar47 == 1.0) {
              if ((uVar36 != 0) && (puVar31 != __src)) {
                if ((uVar36 < 8) || ((ulong)((lVar32 + lVar30) - (long)__src) < 0x20)) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = uVar39 & 0xfffffff8;
                  puVar27 = (undefined8 *)(__src + 0x10);
                  puVar29 = (undefined8 *)(lVar30 + lVar32 + 0x10);
                  uVar21 = uVar22;
                  do {
                    puVar11 = puVar27 + -1;
                    uVar42 = puVar27[-2];
                    uVar45 = puVar27[1];
                    uVar44 = *puVar27;
                    uVar21 = uVar21 - 8;
                    puVar27 = puVar27 + 4;
                    puVar29[-1] = *puVar11;
                    puVar29[-2] = uVar42;
                    puVar29[1] = uVar45;
                    *puVar29 = uVar44;
                    puVar29 = puVar29 + 4;
                  } while (uVar21 != 0);
                  if (uVar22 == uVar39) goto LAB_0060d8d0;
                }
                lVar19 = uVar39 - uVar22;
                puVar23 = (undefined4 *)(lVar30 + lVar32 + uVar22 * 4);
                puVar26 = (undefined4 *)(__src + uVar22 * 4);
                do {
                  lVar19 = lVar19 + -1;
                  *puVar23 = *puVar26;
                  puVar23 = puVar23 + 1;
                  puVar26 = puVar26 + 1;
                } while (lVar19 != 0);
              }
            }
            else if (uVar36 != 0) {
              if ((uVar36 < 8) || ((ulong)((lVar32 + lVar30) - (long)__src) < 0x20)) {
                uVar22 = 0;
              }
              else {
                uVar22 = uVar39 & 0xfffffff8;
                puVar27 = (undefined8 *)(__src + 0x10);
                puVar29 = (undefined8 *)(lVar30 + lVar32 + 0x10);
                uVar21 = uVar22;
                do {
                  puVar11 = puVar27 + -1;
                  uVar42 = puVar27[-2];
                  uVar45 = puVar27[1];
                  uVar44 = *puVar27;
                  uVar21 = uVar21 - 8;
                  puVar27 = puVar27 + 4;
                  puVar29[-1] = CONCAT44((float)((ulong)*puVar11 >> 0x20) * fVar47,
                                         (float)*puVar11 * fVar47);
                  puVar29[-2] = CONCAT44((float)((ulong)uVar42 >> 0x20) * fVar47,
                                         (float)uVar42 * fVar47);
                  puVar29[1] = CONCAT44((float)((ulong)uVar45 >> 0x20) * fVar47,
                                        (float)uVar45 * fVar47);
                  *puVar29 = CONCAT44((float)((ulong)uVar44 >> 0x20) * fVar47,(float)uVar44 * fVar47
                                     );
                  puVar29 = puVar29 + 4;
                } while (uVar21 != 0);
                if (uVar22 == uVar39) goto LAB_0060d8d0;
              }
              lVar19 = uVar39 - uVar22;
              pfVar24 = (float *)(lVar30 + lVar32 + uVar22 * 4);
              pfVar28 = (float *)(__src + uVar22 * 4);
              do {
                lVar19 = lVar19 + -1;
                *pfVar24 = *pfVar28 * fVar47;
                pfVar24 = pfVar24 + 1;
                pfVar28 = pfVar28 + 1;
              } while (lVar19 != 0);
            }
          }
        }
        else if (puVar31 != __src) {
          puVar3 = puVar31;
          for (uVar39 = uVar39 * uVar17; uVar39 != 0; uVar39 = uVar39 - __n) {
            __n = uVar39;
            if (0xfffffffe < uVar39) {
              __n = 0xffffffff;
            }
            memcpy(puVar3,__src,__n);
            puVar3 = puVar3 + __n;
            __src = __src + __n;
          }
        }
      }
      else {
        FUN_005d3758(puVar31,0,uVar7,__src,0,uVar6,uVar38,1,*(undefined4 *)(param_1 + 0x178));
        if (iVar8 == 0) {
          uVar36 = uVar38 * uVar7;
          uVar39 = (ulong)uVar36;
          if (((uVar36 != 0) && (lVar30 != 0)) && (fVar47 != 1.0)) {
            if (uVar36 < 8) {
              uVar21 = 0;
            }
            else {
              uVar21 = uVar39 & 0xfffffff8;
              puVar27 = (undefined8 *)(lVar30 + lVar32 + 0x10);
              uVar22 = uVar21;
              do {
                uVar22 = uVar22 - 8;
                puVar27[-1] = CONCAT44((float)((ulong)puVar27[-1] >> 0x20) * fVar47,
                                       (float)puVar27[-1] * fVar47);
                puVar27[-2] = CONCAT44((float)((ulong)puVar27[-2] >> 0x20) * fVar47,
                                       (float)puVar27[-2] * fVar47);
                puVar27[1] = CONCAT44((float)((ulong)puVar27[1] >> 0x20) * fVar47,
                                      (float)puVar27[1] * fVar47);
                *puVar27 = CONCAT44((float)((ulong)*puVar27 >> 0x20) * fVar47,
                                    (float)*puVar27 * fVar47);
                puVar27 = puVar27 + 4;
              } while (uVar22 != 0);
              if (uVar21 == uVar39) goto LAB_0060d8d0;
            }
            lVar19 = uVar39 - uVar21;
            pfVar24 = (float *)(lVar30 + lVar32 + uVar21 * 4);
            do {
              lVar19 = lVar19 + -1;
              *pfVar24 = *pfVar24 * fVar47;
              pfVar24 = pfVar24 + 1;
            } while (lVar19 != 0);
          }
        }
      }
    }
LAB_0060d8d0:
    if (!bVar14) {
      ma_panner_process_pcm_frames(param_1 + 0x2f8,puVar31,puVar31,uVar38);
    }
    uVar33 = uVar38 + uVar33;
    uVar37 = uVar34 + uVar37;
  } while (uVar38 != 0);
  *param_3 = uVar37;
  *param_5 = uVar33;
  if (*(long *)(lVar10 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0060da60  FUN_0060da60 =====

void FUN_0060da60(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  long *plVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long local_5090;
  uint *local_5088;
  uint local_5080;
  undefined4 uStack_507c;
  long local_5078;
  uint local_5070 [4096];
  uint local_1070 [1024];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar2 = *param_5;
  if (((param_1 == 0) || (*(long *)(param_1 + 0x380) == 0)) ||
     ((int)*(undefined8 *)(param_1 + 0x390) == 0)) {
    uVar6 = *(ulong *)(param_1 + 0x388);
    if (uVar6 != 0xffffffffffffffff) {
      plVar10 = *(long **)(param_1 + 0x380);
      if (((plVar10 != (long *)0x0) && (*(code **)(*plVar10 + 8) != (code *)0x0)) &&
         (uVar6 <= (ulong)plVar10[2])) {
        (**(code **)(*plVar10 + 8))(plVar10,plVar10[1] + uVar6);
      }
      FUN_00341070(uVar6,param_1 + 0x50);
      FUN_00341070(0xffffffffffffffff,param_1 + 0x388);
    }
    fVar13 = *(float *)(param_1 + 0x340);
    fVar8 = (float)*(undefined8 *)(param_1 + 0x33c);
    if (fVar13 == fVar8) {
      fVar14 = *(float *)(param_1 + 0x2a8);
      if (*(float *)(param_1 + 0x344) != *(float *)(param_1 + 0x2a8)) {
LAB_0060db70:
        fVar12 = fVar14;
        *(float *)(param_1 + 0x344) = fVar12;
        fVar8 = fVar13;
        goto LAB_0060db78;
      }
LAB_0060dbc4:
      plVar10 = *(long **)(param_1 + 0x380);
    }
    else {
      fVar12 = *(float *)(param_1 + 0x344);
      *(float *)(param_1 + 0x340) = fVar8;
      fVar13 = fVar8;
      fVar14 = *(float *)(param_1 + 0x2a8);
      if (fVar12 != *(float *)(param_1 + 0x2a8)) goto LAB_0060db70;
LAB_0060db78:
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
      if (*(long *)(param_1 + 0x168) == 0) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x168) + 0x300));
      }
      fVar12 = fVar12 * fVar8 * (fVar13 / fVar14);
      iVar7 = (int)(fVar12 * 1e+06);
      if (fVar12 <= 0.0 || iVar7 == 0) goto LAB_0060dbc4;
      FUN_005b43cc(param_1 + 0x1a8,0,0,iVar7,1000000,1);
      plVar10 = *(long **)(param_1 + 0x380);
    }
    if (((plVar10 != (long *)0x0) && (*(code **)(*plVar10 + 0x10) != (code *)0x0)) &&
       (iVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,local_5070,local_1070,&local_5078,0,0),
       iVar7 == 0)) {
      uVar11 = 0;
      if (uVar2 != 0) {
        uVar4 = 0;
        if (*(int *)(&DAT_00281c10 + (ulong)local_5070[0] * 4) * local_1070[0] != 0) {
          uVar4 = 0x1000 / (*(int *)(&DAT_00281c10 + (ulong)local_5070[0] * 4) * local_1070[0]);
        }
        do {
          uVar3 = uVar2 - uVar11;
          uVar9 = uVar3;
          if ((int)*(undefined8 *)(param_1 + 0x348) == 0) {
            iVar7 = 0;
            if ((ulong)*(uint *)(param_1 + 0x1b4) != 0) {
              iVar7 = (int)(((ulong)*(uint *)(param_1 + 0x1d4) +
                            ((ulong)uVar3 - 1) * (ulong)*(uint *)(param_1 + 0x1cc)) /
                           (ulong)*(uint *)(param_1 + 0x1b4));
            }
            uVar9 = *(int *)(param_1 + 0x1d0) + (int)((ulong)uVar3 - 1) * *(int *)(param_1 + 0x1c8)
                    + iVar7;
          }
          uVar1 = uVar4;
          if (uVar9 <= uVar4) {
            uVar1 = uVar9;
          }
          iVar7 = ma_data_source_read_pcm_frames
                            (*(undefined8 *)(param_1 + 0x380),local_1070,uVar1,&local_5078);
          if (iVar7 == -0x11) {
            FUN_003410a0(1,param_1 + 0x390);
            if (*(code **)(param_1 + 0x398) != (code *)0x0) {
              (**(code **)(param_1 + 0x398))(*(undefined8 *)(param_1 + 0x3a0),param_1);
            }
          }
          if (*(int *)(param_1 + 0x14) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulong)*(byte *)(*(long *)(param_1 + 0x20) + 9);
          }
          uStack_507c = (undefined4)local_5078;
          local_5090 = *param_4 + uVar11 * uVar6 * 4;
          local_5080 = uVar3;
          if (local_5070[0] == 5) {
            local_5088 = local_1070;
          }
          else {
            ma_pcm_convert(local_5070,5,local_1070,local_5070[0],local_5078 * (ulong)local_1070[0],0
                          );
            local_5088 = local_5070;
          }
          FUN_0060d34c(param_1,&local_5088,&uStack_507c,&local_5090,&local_5080);
          uVar11 = local_5080 + uVar11;
        } while ((iVar7 == 0) &&
                (((*(long *)(param_1 + 0x380) == 0 || ((int)*(undefined8 *)(param_1 + 0x390) == 0))
                 && (uVar11 < uVar2))));
      }
      goto LAB_0060dd9c;
    }
  }
  else {
    FUN_003410a0(1,param_1 + 0x38);
  }
  uVar11 = 0;
LAB_0060dd9c:
  *param_5 = uVar11;
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0060ddd8  ma_engine_node_init_preallocated =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_engine_node_init_preallocated(ulong *param_1,void *param_2,void *param_3)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint local_130;
  uint local_12c;
  undefined8 local_128;
  uint local_120;
  undefined4 uStack_11c;
  undefined2 *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  ulong local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined **local_b0;
  uint local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  uint *local_98;
  undefined4 *local_90;
  size_t local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined2 local_5c [2];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_5c[0] = 0xc0b;
  if (param_3 != (void *)0x0) {
    memset(param_3,0,0x380);
    uVar5 = FUN_0060cf5c(param_1,&local_88);
    if ((int)uVar5 != 0) goto LAB_0060de94;
    bVar1 = *(byte *)((long)param_1 + 0x22);
    if ((bVar1 == 0xff) ||
       ((*param_1 != 0 && (uVar4 = *(uint *)(*param_1 + 0x304), bVar1 <= uVar4 && uVar4 != bVar1))))
    {
      *(void **)((long)param_3 + 0x378) = param_2;
      if ((param_2 != (void *)0x0) && (local_88 != 0)) {
        memset(param_2,0,local_88);
      }
      uVar5 = *param_1;
      iVar6 = *(int *)((long)param_1 + 0x14);
      *(ulong *)((long)param_3 + 0x168) = uVar5;
      if (iVar6 == 0) {
        if (uVar5 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(uVar5 + 0x300);
        }
      }
      *(int *)((long)param_3 + 0x170) = iVar6;
      uVar10 = NEON_fmov(0x3f800000,4);
      *(ulong *)((long)param_3 + 0x174) = param_1[3];
      *(undefined4 *)((long)param_3 + 0x338) = 0x3f800000;
      uVar8 = param_1[4];
      *(undefined4 *)((long)param_3 + 0x33c) = 0x3f800000;
      *(undefined8 *)((long)param_3 + 0x340) = uVar10;
      *(uint *)((long)param_3 + 0x348) = (uint)(byte)uVar8;
      *(uint *)((long)param_3 + 0x34c) = (uint)*(byte *)((long)param_1 + 0x21);
      *(uint *)((long)param_3 + 0x350) = (uint)*(byte *)((long)param_1 + 0x22);
      *(undefined4 *)((long)param_3 + 0x358) = 0x3f800000;
      *(undefined4 *)((long)param_3 + 0x35c) = 0x3f800000;
      *(undefined8 *)((long)param_3 + 0x360) = 0xffffffffffffffff;
      *(undefined8 *)((long)param_3 + 0x368) = 0xffffffffffffffff;
      uVar8 = (ulong)*(uint *)((long)param_1 + 0xc);
      if ((*(uint *)((long)param_1 + 0xc) == 0) && (uVar8 = *param_1, uVar8 != 0)) {
        if (*(int *)(uVar8 + 0x17c) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)*(byte *)(*(long *)(uVar8 + 0x188) + 9);
        }
      }
      local_130 = (uint)param_1[2];
      local_12c = (uint)uVar8;
      if (local_130 == 0) {
        uVar8 = *param_1;
        if (uVar8 == 0) {
          local_130 = 0;
        }
        else {
          local_130 = *(uint *)(uVar8 + 0x17c);
          if (local_130 != 0) {
            local_130 = (uint)*(byte *)(*(long *)(uVar8 + 0x188) + 9);
          }
        }
      }
      if (uVar5 != 0) {
        uVar5 = (ulong)*(uint *)(uVar5 + 0x300);
      }
      if (iVar6 != (int)uVar5) {
        *(undefined4 *)((long)param_3 + 0x348) = 0;
      }
      bVar3 = (int)param_1[1] == 0;
      local_b0 = (undefined **)0x686be0;
      if (!bVar3) {
        local_b0 = &PTR_FUN_00686bf8;
      }
      local_98 = &local_12c;
      local_a8 = (uint)bVar3;
      local_9c = 0;
      local_a4 = 0xff000000ff;
      local_90 = &local_130;
      uVar5 = ma_node_init_preallocated(*param_1,&local_b0,(long)param_2 + local_80,param_3);
      if ((int)uVar5 != 0) goto LAB_0060de94;
      uVar5 = *(ulong *)((long)param_3 + 0x168);
      local_c8 = *(undefined4 *)((long)param_3 + 0x170);
      uStack_cc = *local_98;
      if (uVar5 != 0) {
        uVar5 = (ulong)*(uint *)(uVar5 + 0x300);
      }
      uStack_c4 = (undefined4)uVar5;
      local_d0 = 5;
      local_c0 = 0;
      uStack_b8 = 0x3ff0000000000000;
      uVar4 = ma_linear_resampler_init_preallocated
                        (&local_d0,(long)param_2 + local_78,(long)param_3 + 0x1a8);
      uVar5 = (ulong)uVar4;
      if (uVar4 == 0) {
        lVar7 = *(long *)((long)param_3 + 0x168);
        uVar4 = *local_98;
        if (lVar7 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)(lVar7 + 0x300);
        }
        *(undefined4 *)((long)param_3 + 0x188) = uVar9;
        *(undefined4 *)((long)param_3 + 0x194) = 0;
        *(undefined8 *)((long)param_3 + 0x18c) = 0x3f8000003f800000;
        *(ulong *)((long)param_3 + 0x180) = (ulong)uVar4 << 0x20 | 5;
        local_110 = DAT_0024e700;
        *(undefined8 *)((long)param_3 + 0x198) = 0;
        *(undefined8 *)((long)param_3 + 0x1a0) = 0;
        local_120 = *local_98;
        uStack_11c = *local_90;
        local_118 = (undefined2 *)0x0;
        local_108 = 0;
        uStack_fc = _UNK_0024e018;
        local_104 = _DAT_0024e010;
        local_dc = 0x3e4ccccd;
        uStack_ec = _UNK_0024e388;
        local_f4 = _DAT_0024e380;
        local_d8 = (ulong)*(uint *)(lVar7 + 0x4fc);
        if (local_120 == 2) {
          local_118 = local_5c;
        }
        local_e4 = uVar10;
        uVar5 = ma_spatializer_init_preallocated
                          (&local_120,(long)param_2 + local_70,(long)param_3 + 0x230);
        if ((int)uVar5 == 0) {
          uVar9 = *local_90;
          *(undefined8 *)((long)param_3 + 0x300) = 0;
          uVar5 = param_1[3];
          *(undefined4 *)((long)param_3 + 0x2f8) = 5;
          *(undefined4 *)((long)param_3 + 0x2fc) = uVar9;
          if ((int)uVar5 == 0) {
            uVar5 = 0;
            goto LAB_0060de94;
          }
          local_128 = CONCAT44((int)uVar5,local_12c);
          uVar5 = ma_gainer_init_preallocated
                            (&local_128,(long)param_2 + local_68,(long)param_3 + 0x308);
          if ((int)uVar5 == 0) goto LAB_0060de94;
          uVar5 = uVar5 & 0xffffffff;
          ma_spatializer_uninit((long)param_3 + 0x230,0);
        }
        uVar5 = uVar5 & 0xffffffff;
        ma_lpf_uninit((long)param_3 + 0x1e8,0);
        if ((*(int *)((long)param_3 + 0x228) != 0) &&
           (*(void **)((long)param_3 + 0x220) != (void *)0x0)) {
          free(*(void **)((long)param_3 + 0x220));
        }
      }
      ma_node_uninit(param_3,0);
      goto LAB_0060de94;
    }
  }
  uVar5 = 0xfffffffe;
LAB_0060de94:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 0060e1a8  ma_engine_get_listener_count =====

ulong ma_engine_get_listener_count(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x304);
  }
  return param_1;
}


// ===== 0060e1b4  ma_engine_get_sample_rate =====

ulong ma_engine_get_sample_rate(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x300);
  }
  return param_1;
}


// ===== 0060e1c0  ma_engine_get_channels =====

ulong ma_engine_get_channels(ulong param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x17c) != 0) {
      return (ulong)*(byte *)(*(long *)(param_1 + 0x188) + 9);
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 0060e1e0  ma_engine_node_init =====

void ma_engine_node_init(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  void *__ptr;
  size_t local_70 [5];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0060cf5c(param_1,local_70);
  if ((int)uVar2 != 0) goto LAB_0060e21c;
  if (local_70[0] == 0) {
    uVar2 = ma_engine_node_init_preallocated(param_1,0,param_3);
    if ((int)uVar2 != 0) goto LAB_0060e21c;
LAB_0060e2b4:
    uVar2 = 0;
    *(undefined1 *)(param_3 + 0x370) = 1;
  }
  else {
    if (param_2 == (undefined8 *)0x0) {
      __ptr = malloc(local_70[0]);
joined_r0x0060e2cc:
      if (__ptr != (void *)0x0) {
        uVar2 = ma_engine_node_init_preallocated(param_1,__ptr,param_3);
        if ((int)uVar2 != 0) {
          if (param_2 == (undefined8 *)0x0) {
            uVar2 = uVar2 & 0xffffffff;
            free(__ptr);
          }
          else if ((code *)param_2[3] != (code *)0x0) {
            uVar2 = uVar2 & 0xffffffff;
            (*(code *)param_2[3])(__ptr,*param_2);
          }
          goto LAB_0060e21c;
        }
        goto LAB_0060e2b4;
      }
    }
    else if ((code *)param_2[1] != (code *)0x0) {
      __ptr = (void *)(*(code *)param_2[1])(local_70[0],*param_2);
      goto joined_r0x0060e2cc;
    }
    uVar2 = 0xfffffffc;
  }
LAB_0060e21c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 0060e2f0  ma_engine_node_uninit =====

void ma_engine_node_uninit(long param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  
  ma_node_uninit();
  if (((*(int *)(param_1 + 0x174) == 0) || (*(int *)(param_1 + 0x330) == 0)) ||
     (pvVar3 = *(void **)(param_1 + 0x328), pvVar3 == (void *)0x0)) {
LAB_0060e334:
    iVar1 = *(int *)(param_1 + 0x2d8);
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      if ((code *)param_2[3] != (code *)0x0) {
        (*(code *)param_2[3])(pvVar3,*param_2);
      }
      goto LAB_0060e334;
    }
    free(pvVar3);
    iVar1 = *(int *)(param_1 + 0x2d8);
  }
  if ((iVar1 != 0) && (pvVar3 = *(void **)(param_1 + 0x2d0), pvVar3 != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(pvVar3);
    }
    else if ((code *)param_2[3] != (code *)0x0) {
      (*(code *)param_2[3])(pvVar3,*param_2);
    }
  }
  if ((*(int *)(param_1 + 0x2f0) != 0) &&
     (pvVar3 = *(void **)(param_1 + 0x2e8), pvVar3 != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(pvVar3);
    }
    else if ((code *)param_2[3] != (code *)0x0) {
      (*(code *)param_2[3])(pvVar3,*param_2);
    }
  }
  ma_lpf_uninit(param_1 + 0x1e8,param_2);
  if ((*(int *)(param_1 + 0x228) != 0) &&
     (pvVar3 = *(void **)(param_1 + 0x220), pvVar3 != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(pvVar3);
      cVar2 = *(char *)(param_1 + 0x370);
      goto joined_r0x0060e3f0;
    }
    if ((code *)param_2[3] != (code *)0x0) {
      (*(code *)param_2[3])(pvVar3,*param_2);
    }
  }
  cVar2 = *(char *)(param_1 + 0x370);
joined_r0x0060e3f0:
  if ((cVar2 != '\0') && (pvVar3 = *(void **)(param_1 + 0x378), pvVar3 != (void *)0x0)) {
    if (param_2 == (undefined8 *)0x0) {
      free(pvVar3);
      return;
    }
    if ((code *)param_2[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0060e3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[3])(pvVar3,*param_2);
      return;
    }
  }
  return;
}


// ===== 0060e41c  ma_sound_config_init =====

void ma_sound_config_init(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[9] = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  return;
}


// ===== 0060e448  ma_sound_config_init_2 =====

void ma_sound_config_init_2(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x504);
  }
  *(undefined4 *)((long)param_1 + 0x2c) = uVar1;
  param_1[9] = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  return;
}


// ===== 0060e484  ma_sound_group_config_init =====

void ma_sound_group_config_init(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}


// ===== 0060e4a4  ma_sound_group_config_init_2 =====

void ma_sound_group_config_init_2(undefined8 *param_1,long param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
  }
  if (param_2 != 0) {
    *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x504);
    return;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}


// ===== 0060e4d4  ma_engine_config_init =====

void ma_engine_config_init(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 6) = 1;
  return;
}


// ===== 0060e500  ma_engine_init =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_engine_init(long *param_1,void *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  code *pcVar13;
  int iVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulong *puVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  ulong uVar26;
  code *pcVar27;
  ulong uVar28;
  long lVar29;
  int iVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  int local_2cc;
  int local_2c4;
  int local_2b8;
  int iStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined2 uStack_2a0;
  undefined2 uStack_29e;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 local_294;
  uint uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 local_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined4 local_254;
  undefined8 local_250;
  long local_248;
  undefined4 local_240;
  int iStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  ulong uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_98;
  
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  if (param_2 == (void *)0x0) {
    uVar8 = 0xfffffffe;
    goto LAB_0060ec08;
  }
  memset(param_2,0,0x518);
  iVar7 = iStack_2b0;
  if (param_1 == (long *)0x0) {
    uVar15 = 0;
    local_2cc = 0;
    iVar30 = 0;
    local_2c4 = 0;
    iVar31 = 0;
    lVar29 = 0;
    lVar24 = 0;
    pcVar27 = (code *)0x0;
    lVar9 = 0;
    plVar11 = (long *)0x0;
    lVar23 = 0;
    uVar21 = 0;
    lVar10 = 0;
    pcVar13 = (code *)0x0;
    lVar16 = 0;
    lVar17 = 0;
    iVar19 = 0;
    iVar14 = 0;
    uVar18 = 0;
    uVar34 = 0;
    lVar32 = 0;
    lVar33 = 0;
    uVar20 = 1;
  }
  else {
    local_2c4 = *(int *)((long)param_1 + 0x44);
    local_2cc = (int)param_1[9];
    lVar23 = *param_1;
    plVar11 = (long *)param_1[1];
    iVar30 = (int)param_1[7];
    lVar9 = param_1[2];
    pcVar27 = (code *)param_1[3];
    uVar34 = *(undefined8 *)((long)param_1 + 0x3c);
    uVar18 = (undefined4)param_1[0x10];
    lVar33 = param_1[0x13];
    lVar32 = param_1[0x12];
    lVar24 = param_1[4];
    lVar29 = param_1[5];
    uVar20 = *(uint *)(param_1 + 6);
    iVar31 = *(int *)((long)param_1 + 0x34);
    uVar15 = *(undefined4 *)((long)param_1 + 0x4c);
    uVar21 = *(uint *)(param_1 + 10);
    lVar10 = param_1[0xb];
    pcVar13 = (code *)param_1[0xc];
    lVar16 = param_1[0xd];
    lVar17 = param_1[0xe];
    iVar19 = (int)param_1[0xf];
    iVar14 = *(int *)((long)param_1 + 0x7c);
  }
  *(undefined4 *)((long)param_2 + 0x504) = uVar18;
  puVar1 = (undefined8 *)((long)param_2 + 0x4c8);
  *(undefined4 *)((long)param_2 + 0x500) = uVar15;
  *(long *)((long)param_2 + 0x510) = lVar33;
  *(long *)((long)param_2 + 0x508) = lVar32;
  iStack_2b0 = (int)uVar34;
  iVar12 = iStack_2b0;
  iStack_2b0 = iVar7;
  if (lVar10 == 0) {
    if (lVar17 != 0) goto LAB_0060e620;
    if (pcVar13 != (code *)0x0 || lVar16 != 0) goto LAB_0060e628;
    *(code **)((long)param_2 + 0x4d0) = malloc;
    *(code **)((long)param_2 + 0x4d8) = realloc;
    *(undefined8 *)((long)param_2 + 0x4c8) = 0;
    *(code **)((long)param_2 + 0x4e0) = free;
    *(long **)((long)param_2 + 0x2f0) = plVar11;
    if ((plVar11 == (long *)0x0) && (iVar14 == 0)) {
      lVar10 = 0;
      pcVar13 = malloc;
      goto LAB_0060e658;
    }
  }
  else {
    if (lVar17 == 0) {
LAB_0060e628:
      lVar10 = 0;
      pcVar13 = (code *)0x0;
    }
    else {
LAB_0060e620:
      if (pcVar13 == (code *)0x0 && lVar16 == 0) goto LAB_0060e628;
      *(long *)((long)param_2 + 0x4c8) = lVar10;
      *(code **)((long)param_2 + 0x4d0) = pcVar13;
      *(long *)((long)param_2 + 0x4d8) = lVar16;
      *(long *)((long)param_2 + 0x4e0) = lVar17;
    }
    *(long **)((long)param_2 + 0x2f0) = plVar11;
    if ((plVar11 == (long *)0x0) && (iVar14 == 0)) {
      if (pcVar13 == (code *)0x0) {
        uVar8 = 0xfffffffc;
        *(undefined8 *)((long)param_2 + 0x2f0) = 0;
        goto LAB_0060ec08;
      }
LAB_0060e658:
      plVar11 = (long *)((long)param_2 + 0x2f0);
      lVar10 = (*pcVar13)(0xeb0,lVar10);
      *plVar11 = lVar10;
      if (lVar10 == 0) {
        uVar8 = 0xfffffffc;
        goto LAB_0060ec08;
      }
      local_134 = 0;
      uStack_130 = 0;
      local_198 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      local_154 = 0;
      uStack_150 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      local_144 = 0;
      uStack_140 = 0;
      uStack_26c = 0;
      local_274 = 0;
      uStack_25c = 0;
      local_264 = 0;
      uStack_15c = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_178 = 0;
      local_180 = 0;
      uStack_168 = 0;
      local_164 = 0;
      uStack_170 = 0;
      uStack_1e0 = 0;
      local_1e8 = 0;
      uStack_1d0 = 0;
      local_1d8 = 0;
      uStack_188 = 0;
      local_190 = 0;
      uStack_1c0 = 0;
      local_1c8 = 0;
      uStack_278 = 0;
      local_284 = 0;
      uStack_288 = 0;
      uStack_1b0 = 0;
      local_1b8 = 0;
      uStack_1a0 = 0;
      local_1a8 = 0;
      uStack_29c = 0;
      uStack_2a4 = 0;
      uStack_29e = 0;
      local_254 = 0;
      local_240 = 5;
      local_250 = DAT_0024e8e0;
      pcVar13 = FUN_0060ec44;
      if (pcVar27 != (code *)0x0) {
        pcVar13 = pcVar27;
      }
      uStack_298 = SUB84(pcVar13,0);
      local_294 = (undefined4)((ulong)pcVar13 >> 0x20);
      uStack_290 = (uint)lVar24;
      uStack_28c = (undefined4)((ulong)lVar24 >> 0x20);
      uStack_230 = 0;
      local_238 = 0;
      uStack_220 = 0;
      local_228 = 0;
      uStack_210 = 0;
      local_218 = 0;
      uStack_200 = 0;
      local_208 = 0;
      uStack_1f0 = 0;
      local_1f8 = 0;
      uStack_2a8 = 0;
      local_2b8 = 1;
      uStack_280 = SUB84(param_2,0);
      uStack_27c = (undefined4)((ulong)param_2 >> 0x20);
      uStack_2ac = (undefined4)((ulong)uVar34 >> 0x20);
      uStack_2a0 = 0x101;
      iStack_2b4 = iVar30;
      iStack_2b0 = iVar12;
      local_248 = lVar9;
      iStack_23c = iVar31;
      if (lVar23 == 0) {
        uStack_178 = 0;
        uStack_150 = 0;
        uStack_14c = 0;
        uStack_b0 = 0;
        local_b8 = 0;
        uStack_c0 = 0;
        local_c8 = 0;
        uStack_d0 = 0;
        local_d8 = 0;
        uStack_e0 = 0;
        local_e8 = 0;
        uStack_f0 = 0;
        local_f8 = 0;
        uStack_100 = 0;
        local_108 = 0;
        uStack_110 = 0;
        local_118 = 0;
        uStack_120 = 0;
        local_128 = 0;
        uStack_130 = 0;
        uStack_12c = 0;
        uStack_138 = 0;
        local_134 = 0;
        uStack_140 = 0;
        uStack_13c = 0;
        uStack_148 = 0;
        local_144 = 0;
        local_180 = 0;
        uStack_188 = 0;
        uStack_170 = *puVar1;
        local_a8 = 0;
        uStack_168 = (undefined4)*(undefined8 *)((long)param_2 + 0x4d0);
        local_164 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x4d0) >> 0x20);
        uStack_158 = (undefined4)*(undefined8 *)((long)param_2 + 0x4e0);
        local_154 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x4e0) >> 0x20);
        uStack_160 = (undefined4)*(undefined8 *)((long)param_2 + 0x4d8);
        uStack_15c = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x4d8) >> 0x20);
        local_190 = lVar29;
        uVar8 = ma_device_init_ex(0,0,&local_190,&local_2b8);
        iVar7 = (int)uVar8;
      }
      else {
        uVar8 = ma_device_init(lVar23,&local_2b8,lVar10);
        iVar7 = (int)uVar8;
      }
      if (iVar7 != 0) {
        if ((*plVar11 != 0) && (*(code **)((long)param_2 + 0x4e0) != (code *)0x0)) {
          uVar8 = uVar8 & 0xffffffff;
          (**(code **)((long)param_2 + 0x4e0))(*plVar11,*puVar1);
        }
        *plVar11 = 0;
        goto LAB_0060ec08;
      }
      plVar11 = *(long **)((long)param_2 + 0x2f0);
      *(undefined1 *)((long)param_2 + 0x4e9) = 1;
    }
  }
  puVar22 = (ulong *)((long)param_2 + 0x2f0);
  if (plVar11 != (long *)0x0) {
    iVar12 = (int)plVar11[0xf7];
    iVar31 = (int)plVar11[0x8b];
    iVar30 = *(int *)((long)plVar11 + 0xc);
    if (iVar12 == 0) {
      iVar12 = (int)plVar11[0xcd];
    }
  }
  uVar8 = 0xfffffffe;
  if ((iVar31 != 0) && (iVar30 != 0)) {
    *(int *)((long)param_2 + 0x300) = iVar30;
    if ((lVar29 == 0) && (plVar11 != (long *)0x0)) {
      if (*plVar11 == 0) {
        lVar29 = 0;
      }
      else {
        lVar29 = *(long *)(*plVar11 + 0x70);
      }
    }
    uStack_188 = (ulong)uVar21;
    *(long *)((long)param_2 + 0x2f8) = lVar29;
    local_190 = CONCAT44(iVar12,iVar31);
    uVar8 = ma_node_graph_init(&local_190,puVar1,param_2);
    uVar6 = DAT_0024e658;
    uVar34 = _UNK_0024e288;
    lVar23 = _DAT_0024e280;
    if ((int)uVar8 == 0) {
      if (uVar20 < 5) {
        if (uVar20 < 2) {
          uVar20 = 1;
        }
        uVar28 = 0;
        do {
          if (*(int *)((long)param_2 + 0x17c) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = (ulong)*(byte *)(*(long *)((long)param_2 + 0x188) + 9);
          }
          local_2b8 = (int)uVar8;
          iStack_2b4 = 0;
          iStack_2b0 = 0;
          uStack_2ac = 0;
          uStack_2a8 = 0;
          uStack_29c = (undefined4)uVar34;
          uStack_298 = (undefined4)((ulong)uVar34 >> 0x20);
          uStack_2a4 = (undefined4)lVar23;
          uStack_2a0 = (undefined2)((ulong)lVar23 >> 0x20);
          uStack_29e = (undefined2)((ulong)lVar23 >> 0x30);
          local_294 = (undefined4)uVar6;
          uStack_290 = (uint)((ulong)uVar6 >> 0x20);
          uStack_28c = 0;
          if (uVar8 == 0) {
            uVar8 = 0xfffffffe;
            goto LAB_0060eb28;
          }
          puVar2 = (ulong *)((long)param_2 + uVar28 * 0x70 + 0x308);
          if ((local_2b8 + 7U & 0x1f8) == 0) {
            *(undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x310) = 0;
            *puVar2 = uVar8;
            *(ulong *)((long)param_2 + uVar28 * 0x70 + 800) =
                 CONCAT44(uStack_29c,(int)((ulong)lVar23 >> 0x20));
            *(long *)((long)param_2 + uVar28 * 0x70 + 0x318) = lVar23 << 0x20;
            *(undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x340) = 0;
            *(undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x338) = 0;
            *(undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x350) = 0;
            *(undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x348) = 0;
            *(undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x360) = 0;
            *(undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x358) = 0;
            *(undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x370) = 0;
            *(undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x368) = 0;
            *(undefined4 *)((long)param_2 + uVar28 * 0x70 + 0x350) = 0xbf800000;
            iVar7 = *(int *)((long)param_2 + uVar28 * 0x70 + 0x318);
            *(ulong *)((long)param_2 + uVar28 * 0x70 + 0x330) = (ulong)uStack_290;
            *(ulong *)((long)param_2 + uVar28 * 0x70 + 0x328) = CONCAT44(local_294,uStack_298);
            *(undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x340) = 0;
            *(undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x338) = 0;
            *(undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x348) = 0;
            piVar25 = (int *)((long)param_2 + uVar28 * 0x70 + 0x354);
            piVar25[0] = 0;
            piVar25[1] = 0;
            *(undefined4 *)((long)param_2 + uVar28 * 0x70 + 0x364) = 0;
            *(undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x35c) = 0;
            *(undefined4 *)((long)param_2 + uVar28 * 0x70 + 0x368) = 1;
            if (iVar7 == 1) {
              while (iVar7 = FUN_00341150(1,piVar25), iVar7 != 0) {
                do {
                } while (*piVar25 == 1);
              }
              puVar3 = (undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x348);
              pfVar4 = (float *)((long)param_2 + uVar28 * 0x70 + 0x350);
              uVar35 = *puVar3;
              fVar36 = *pfVar4;
              *piVar25 = 0;
              while (iVar7 = FUN_00341150(1,piVar25), iVar7 != 0) {
                do {
                } while (*piVar25 == 1);
              }
              *puVar3 = CONCAT44(-(float)((ulong)uVar35 >> 0x20),-(float)uVar35);
              *pfVar4 = -fVar36;
              *piVar25 = 0;
            }
            *(undefined8 *)((long)param_2 + uVar28 * 0x70 + 0x310) = 0;
          }
          else {
            if ((*(code **)((long)param_2 + 0x4d0) == (code *)0x0) ||
               (lVar9 = (**(code **)((long)param_2 + 0x4d0))(local_2b8 + 7U & 0x1f8,*puVar1),
               lVar9 == 0)) {
              uVar8 = 0xfffffffc;
              goto LAB_0060eb28;
            }
            uVar8 = ma_spatializer_listener_init_preallocated(&local_2b8,lVar9,puVar2);
            if ((int)uVar8 != 0) {
              if (*(code **)((long)param_2 + 0x4e0) != (code *)0x0) {
                uVar8 = uVar8 & 0xffffffff;
                (**(code **)((long)param_2 + 0x4e0))(lVar9,*puVar1);
              }
              goto LAB_0060eb28;
            }
          }
          lVar9 = uVar28 * 0x70;
          uVar28 = uVar28 + 1;
          *(int *)((long)param_2 + 0x304) = *(int *)((long)param_2 + 0x304) + 1;
          *(undefined4 *)((long)param_2 + lVar9 + 0x36c) = 1;
        } while (uVar28 != uVar20);
        *(int *)((long)param_2 + 0x4fc) = local_2c4;
        if (local_2c4 == 0) {
          iVar7 = 8;
          if (local_2cc != 0) {
            iVar7 = local_2cc;
          }
          *(uint *)((long)param_2 + 0x4fc) = (uint)(*(int *)((long)param_2 + 0x300) * iVar7) / 1000;
        }
        uVar8 = 0;
        *(undefined4 *)((long)param_2 + 0x4ec) = 0;
        *(undefined8 *)((long)param_2 + 0x4f0) = 0;
        if (((iVar19 != 0) || (uVar8 = *puVar22, uVar8 == 0)) ||
           (uVar8 = ma_device_start(), (int)uVar8 == 0)) goto LAB_0060ec08;
LAB_0060eb28:
        uVar28 = (ulong)*(uint *)((long)param_2 + 0x304);
        uVar8 = uVar8 & 0xffffffff;
        if (*(uint *)((long)param_2 + 0x304) != 0) {
          uVar26 = 0;
          plVar11 = (long *)((long)param_2 + 0x370);
          do {
            if (((*(int *)((long)plVar11 + -4) != 0) && (*plVar11 != 0)) &&
               (*(code **)((long)param_2 + 0x4e0) != (code *)0x0)) {
              (**(code **)((long)param_2 + 0x4e0))(*plVar11,*(undefined8 *)((long)param_2 + 0x4c8));
              uVar28 = (ulong)*(uint *)((long)param_2 + 0x304);
            }
            uVar26 = uVar26 + 1;
            plVar11 = plVar11 + 0xe;
          } while (uVar26 < uVar28);
        }
        ma_node_uninit((long)param_2 + 0x168,puVar1);
        ma_node_uninit(param_2,puVar1);
        if (*(long *)((long)param_2 + 0x2d0) != 0) {
          if (*(code **)((long)param_2 + 0x4e0) != (code *)0x0) {
            (**(code **)((long)param_2 + 0x4e0))(*(long *)((long)param_2 + 0x2d0),*puVar1);
          }
          *(undefined8 *)((long)param_2 + 0x2d0) = 0;
        }
        if (*(long *)((long)param_2 + 0x2e8) != 0) {
          if (*(code **)((long)param_2 + 0x4e0) != (code *)0x0) {
            (**(code **)((long)param_2 + 0x4e0))(*(long *)((long)param_2 + 0x2e8),*puVar1);
          }
          *(undefined8 *)((long)param_2 + 0x2e8) = 0;
        }
      }
      else {
        uVar8 = 0xfffffffe;
      }
    }
    if (*(char *)((long)param_2 + 0x4e9) != '\0') {
      uVar8 = uVar8 & 0xffffffff;
      ma_device_uninit(*puVar22);
      if ((*puVar22 != 0) && (*(code **)((long)param_2 + 0x4e0) != (code *)0x0)) {
        (**(code **)((long)param_2 + 0x4e0))(*puVar22,*puVar1);
      }
    }
  }
LAB_0060ec08:
  if (*(long *)(lVar5 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


// ===== 0060ec44  FUN_0060ec44 =====

void FUN_0060ec44(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  local_40 = 0;
  iVar2 = ma_node_graph_read_pcm_frames(lVar3,param_2,param_4,&local_40);
  if ((iVar2 == 0) && (*(code **)(lVar3 + 0x508) != (code *)0x0)) {
    (**(code **)(lVar3 + 0x508))(*(undefined8 *)(lVar3 + 0x510),param_2,local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0060ecc4  ma_engine_start =====

undefined8 ma_engine_start(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(long *)(param_1 + 0x2f0) != 0) {
    uVar1 = ma_device_start();
    return uVar1;
  }
  return 0xfffffffd;
}


// ===== 0060ece4  ma_engine_uninit =====

void ma_engine_uninit(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x4e9) == '\0') {
      if (*(long *)(param_1 + 0x2f0) != 0) {
        ma_device_stop();
      }
    }
    else {
      ma_device_uninit();
      if ((*(long *)(param_1 + 0x2f0) != 0) && (*(code **)(param_1 + 0x4e0) != (code *)0x0)) {
        (**(code **)(param_1 + 0x4e0))(*(long *)(param_1 + 0x2f0),*(undefined8 *)(param_1 + 0x4c8));
      }
    }
    while (iVar2 = FUN_00341150(1,param_1 + 0x4ec), iVar2 != 0) {
      do {
      } while (*(int *)(param_1 + 0x4ec) == 1);
    }
    while (lVar5 = *(long *)(param_1 + 0x4f0), lVar5 != 0) {
      lVar4 = *(long *)(lVar5 + 0x168);
      *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(lVar5 + 0x3b0);
      ma_engine_node_uninit(lVar5,lVar4 + 0x4c8);
      if (*(code **)(param_1 + 0x4e0) != (code *)0x0) {
        (**(code **)(param_1 + 0x4e0))(lVar5,*(undefined8 *)(param_1 + 0x4c8));
      }
    }
    *(undefined4 *)(param_1 + 0x4ec) = 0;
    uVar3 = (ulong)*(uint *)(param_1 + 0x304);
    if (*(uint *)(param_1 + 0x304) != 0) {
      uVar6 = 0;
      plVar7 = (long *)(param_1 + 0x370);
      do {
        if (((*(int *)((long)plVar7 + -4) != 0) && (*plVar7 != 0)) &&
           (*(code **)(param_1 + 0x4e0) != (code *)0x0)) {
          (**(code **)(param_1 + 0x4e0))(*plVar7,*(undefined8 *)(param_1 + 0x4c8));
          uVar3 = (ulong)*(uint *)(param_1 + 0x304);
        }
        uVar6 = uVar6 + 1;
        plVar7 = plVar7 + 0xe;
      } while (uVar6 < uVar3);
    }
    puVar1 = (undefined8 *)(param_1 + 0x4c8);
    ma_node_uninit(param_1 + 0x168,puVar1);
    ma_node_uninit(param_1,puVar1);
    if (*(long *)(param_1 + 0x2d0) != 0) {
      if (*(code **)(param_1 + 0x4e0) != (code *)0x0) {
        (**(code **)(param_1 + 0x4e0))(*(long *)(param_1 + 0x2d0),*puVar1);
      }
      *(undefined8 *)(param_1 + 0x2d0) = 0;
    }
    if (*(long *)(param_1 + 0x2e8) != 0) {
      if (*(code **)(param_1 + 0x4e0) != (code *)0x0) {
        (**(code **)(param_1 + 0x4e0))(*(long *)(param_1 + 0x2e8),*puVar1);
      }
      *(undefined8 *)(param_1 + 0x2e8) = 0;
    }
  }
  return;
}


// ===== 0060ee40  ma_sound_uninit =====

void ma_sound_uninit(long param_1)

{
  if (param_1 != 0) {
    ma_engine_node_uninit(param_1,*(long *)(param_1 + 0x168) + 0x4c8);
    return;
  }
  return;
}


// ===== 0060ee54  ma_engine_read_pcm_frames =====

void ma_engine_read_pcm_frames
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  if (param_4 == (undefined8 *)0x0) {
    uVar2 = ma_node_graph_read_pcm_frames(param_1,param_2,param_3,&local_40);
    if ((int)uVar2 != 0) goto LAB_0060eedc;
  }
  else {
    *param_4 = 0;
    uVar2 = ma_node_graph_read_pcm_frames(param_1,param_2,param_3,&local_40);
    if ((int)uVar2 != 0) goto LAB_0060eedc;
    *param_4 = local_40;
  }
  if (*(code **)(param_1 + 0x508) != (code *)0x0) {
    (**(code **)(param_1 + 0x508))(*(undefined8 *)(param_1 + 0x510),param_2,local_40);
  }
  uVar2 = 0;
LAB_0060eedc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0060ef04  ma_engine_get_node_graph =====

void ma_engine_get_node_graph(void)

{
  return;
}


// ===== 0060ef08  ma_engine_get_device =====

long ma_engine_get_device(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x2f0);
  }
  return param_1;
}


// ===== 0060ef14  ma_engine_get_log =====

long ma_engine_get_log(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x2f8), lVar1 != 0)) {
    return lVar1;
  }
  if ((*(long **)(param_1 + 0x2f0) != (long *)0x0) &&
     (lVar1 = **(long **)(param_1 + 0x2f0), lVar1 != 0)) {
    return *(long *)(lVar1 + 0x70);
  }
  return 0;
}


// ===== 0060ef48  ma_engine_get_endpoint =====

long ma_engine_get_endpoint(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x168;
  }
  return lVar1;
}


// ===== 0060ef58  ma_engine_get_time_in_pcm_frames =====

long ma_engine_get_time_in_pcm_frames(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x1b8);
  }
  return param_1;
}


// ===== 0060ef68  ma_engine_get_time_in_milliseconds =====

ulong ma_engine_get_time_in_milliseconds(long param_1)

{
  ulong uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if ((ulong)*(uint *)(param_1 + 0x300) != 0) {
      uVar1 = (ulong)(*(long *)(param_1 + 0x1b8) * 1000) / (ulong)*(uint *)(param_1 + 0x300);
    }
    return uVar1;
  }
  return 0;
}


// ===== 0060ef8c  ma_engine_set_time_in_pcm_frames =====

undefined8 ma_engine_set_time_in_pcm_frames(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_00341070(param_2,param_1 + 0x1b8);
    return 0;
  }
  return 0xfffffffe;
}


// ===== 0060efbc  ma_engine_set_time_in_milliseconds =====

undefined8 ma_engine_set_time_in_milliseconds(long param_1,long param_2)

{
  if (param_1 != 0) {
    FUN_00341070(((ulong)*(uint *)(param_1 + 0x300) * param_2) / 1000,param_1 + 0x1b8);
    return 0;
  }
  return 0xfffffffe;
}


// ===== 0060f00c  ma_engine_get_time =====

long ma_engine_get_time(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x1b8);
  }
  return param_1;
}


// ===== 0060f01c  ma_engine_set_time =====

undefined8 ma_engine_set_time(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_00341070(param_2,param_1 + 0x1b8);
    return 0;
  }
  return 0xfffffffe;
}


// ===== 0060f04c  ma_engine_stop =====

undefined8 ma_engine_stop(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(long *)(param_1 + 0x2f0) != 0) {
    uVar1 = ma_device_stop();
    return uVar1;
  }
  return 0xfffffffd;
}


// ===== 0060f06c  ma_engine_set_volume =====

undefined8 ma_engine_set_volume(float param_1,long param_2)

{
  float fVar1;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x17c) != 0)) {
    fVar1 = 0.0;
    if (0.0 <= param_1) {
      fVar1 = param_1;
    }
    FUN_003410a0(fVar1,*(long *)(param_2 + 0x188) + 0x1c);
    return 0;
  }
  return 0xfffffffe;
}


// ===== 0060f0b0  ma_engine_get_volume =====

undefined1  [16] ma_engine_get_volume(long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x17c) != 0)) {
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x188) + 0x1c) & 0xffffffff;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}


// ===== 0060f0d4  ma_engine_set_gain_db =====

undefined8 ma_engine_set_gain_db(float param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  
  dVar3 = pow(10.0,(double)(param_1 / 20.0));
  if ((param_2 == 0) || (*(int *)(param_2 + 0x17c) == 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    fVar2 = 0.0;
    if (0.0 <= (float)dVar3) {
      fVar2 = (float)dVar3;
    }
    FUN_003410a0(fVar2,*(long *)(param_2 + 0x188) + 0x1c);
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0060f13c  ma_engine_get_gain_db =====

float ma_engine_get_gain_db(long param_1)

{
  double dVar1;
  
  dVar1 = 0.0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x17c) != 0)) {
    dVar1 = (double)(float)*(undefined8 *)(*(long *)(param_1 + 0x188) + 0x1c);
  }
  dVar1 = log(dVar1);
  return (float)(dVar1 * DAT_0024e6e0) * 20.0;
}


// ===== 0060f18c  ma_engine_find_closest_listener =====

undefined4 ma_engine_find_closest_listener(float param_1,float param_2,float param_3,long param_4)

{
  bool bVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  
  if ((param_4 == 0) || (uVar6 = (ulong)*(uint *)(param_4 + 0x304), *(uint *)(param_4 + 0x304) < 2))
  {
    uVar13 = 0;
  }
  else {
    fVar8 = 3.4028235e+38;
    uVar10 = 0;
    uVar9 = 0;
    do {
      uVar13 = uVar9;
      if (*(int *)(param_4 + uVar10 * 0x70 + 0x368) != 0) {
        lVar11 = param_4 + uVar10 * 0x70;
        piVar2 = (int *)(lVar11 + 0x344);
        while (iVar5 = FUN_00341150(1,piVar2), iVar5 != 0) {
          do {
          } while (*piVar2 == 1);
        }
        lVar7 = param_4 + uVar10 * 0x70;
        fVar14 = *(float *)(lVar11 + 0x338) - param_1;
        fVar12 = *(float *)(lVar7 + 0x33c);
        fVar15 = *(float *)(lVar7 + 0x340);
        *piVar2 = 0;
        uVar6 = (ulong)*(uint *)(param_4 + 0x304);
        fVar12 = fVar12 - param_2;
        fVar15 = fVar15 - param_3;
        uVar13 = NEON_fmadd(fVar14,fVar14,fVar12 * fVar12);
        fVar14 = (float)NEON_fmadd(fVar15,fVar15,uVar13);
        bVar1 = NAN(fVar8);
        bVar4 = fVar8 == fVar14;
        bVar3 = fVar8 < fVar14;
        fVar12 = fVar14;
        if (bVar4 || bVar3 != (bVar1 || NAN(fVar14))) {
          fVar12 = fVar8;
        }
        fVar8 = fVar12;
        uVar13 = (int)uVar10;
        if (bVar4 || bVar3 != (bVar1 || NAN(fVar14))) {
          uVar13 = uVar9;
        }
      }
      uVar10 = uVar10 + 1;
      uVar9 = uVar13;
    } while (uVar10 < uVar6);
  }
  return uVar13;
}


// ===== 0060f284  ma_engine_listener_is_enabled =====

ulong ma_engine_listener_is_enabled(ulong param_1,uint param_2)

{
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x304) <= param_2) {
      return 0;
    }
    param_1 = (ulong)*(uint *)(param_1 + (ulong)param_2 * 0x70 + 0x368);
  }
  return param_1;
}


// ===== 0060f2ac  ma_engine_listener_set_position =====

void ma_engine_listener_set_position
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  
  if ((param_4 != 0) && (param_5 < *(uint *)(param_4 + 0x304))) {
    lVar3 = param_4 + (ulong)param_5 * 0x70;
    piVar1 = (int *)(lVar3 + 0x344);
    while (iVar2 = FUN_00341150(1,piVar1), iVar2 != 0) {
      do {
      } while (*piVar1 == 1);
    }
    *(undefined4 *)(lVar3 + 0x338) = param_1;
    param_4 = param_4 + (ulong)param_5 * 0x70;
    *(undefined4 *)(param_4 + 0x33c) = param_2;
    *(undefined4 *)(param_4 + 0x340) = param_3;
    *piVar1 = 0;
  }
  return;
}


// ===== 0060f34c  ma_engine_listener_get_position =====

undefined4 ma_engine_listener_get_position(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_2 < *(uint *)(param_1 + 0x304))) {
    param_1 = param_1 + (ulong)param_2 * 0x70;
    piVar1 = (int *)(param_1 + 0x344);
    while (iVar2 = FUN_00341150(1,piVar1), iVar2 != 0) {
      do {
      } while (*piVar1 == 1);
    }
    *piVar1 = 0;
    return *(undefined4 *)(param_1 + 0x338);
  }
  return 0;
}


// ===== 0060f3e0  ma_engine_listener_set_direction =====

void ma_engine_listener_set_direction
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  
  if ((param_4 != 0) && (param_5 < *(uint *)(param_4 + 0x304))) {
    lVar3 = param_4 + (ulong)param_5 * 0x70;
    piVar1 = (int *)(lVar3 + 0x354);
    while (iVar2 = FUN_00341150(1,piVar1), iVar2 != 0) {
      do {
      } while (*piVar1 == 1);
    }
    *(undefined4 *)(lVar3 + 0x348) = param_1;
    param_4 = param_4 + (ulong)param_5 * 0x70;
    *(undefined4 *)(param_4 + 0x34c) = param_2;
    *(undefined4 *)(param_4 + 0x350) = param_3;
    *piVar1 = 0;
  }
  return;
}


// ===== 0060f480  ma_engine_listener_get_direction =====

undefined1  [16] ma_engine_listener_get_direction(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  ulong extraout_d0;
  undefined1 auVar4 [16];
  
  if (param_1 == 0) {
    return ZEXT816(0);
  }
  uVar3 = 0;
  if (param_2 < *(uint *)(param_1 + 0x304)) {
    param_1 = param_1 + (ulong)param_2 * 0x70;
    piVar1 = (int *)(param_1 + 0x354);
    while (iVar2 = FUN_00341150(uVar3,1,piVar1), iVar2 != 0) {
      do {
        uVar3 = extraout_d0;
      } while (*piVar1 == 1);
    }
    uVar3 = (ulong)*(uint *)(param_1 + 0x348);
    *piVar1 = 0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar3;
  return auVar4;
}


// ===== 0060f51c  ma_engine_listener_set_velocity =====

void ma_engine_listener_set_velocity
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  
  if ((param_4 != 0) && (param_5 < *(uint *)(param_4 + 0x304))) {
    lVar3 = param_4 + (ulong)param_5 * 0x70;
    piVar1 = (int *)(lVar3 + 0x364);
    while (iVar2 = FUN_00341150(1,piVar1), iVar2 != 0) {
      do {
      } while (*piVar1 == 1);
    }
    *(undefined4 *)(lVar3 + 0x358) = param_1;
    param_4 = param_4 + (ulong)param_5 * 0x70;
    *(undefined4 *)(param_4 + 0x35c) = param_2;
    *(undefined4 *)(param_4 + 0x360) = param_3;
    *piVar1 = 0;
  }
  return;
}


// ===== 0060f5bc  ma_engine_listener_get_velocity =====

undefined4 ma_engine_listener_get_velocity(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_2 < *(uint *)(param_1 + 0x304))) {
    param_1 = param_1 + (ulong)param_2 * 0x70;
    piVar1 = (int *)(param_1 + 0x364);
    while (iVar2 = FUN_00341150(1,piVar1), iVar2 != 0) {
      do {
      } while (*piVar1 == 1);
    }
    *piVar1 = 0;
    return *(undefined4 *)(param_1 + 0x358);
  }
  return 0;
}


// ===== 0060f650  ma_engine_listener_set_cone =====

void ma_engine_listener_set_cone
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,uint param_5)

{
  if ((param_4 != 0) && (param_5 < *(uint *)(param_4 + 0x304))) {
    param_4 = param_4 + (ulong)param_5 * 0x70;
    *(undefined4 *)(param_4 + 0x31c) = param_1;
    *(undefined4 *)(param_4 + 800) = param_2;
    *(undefined4 *)(param_4 + 0x324) = param_3;
  }
  return;
}


// ===== 0060f678  ma_engine_listener_get_cone =====

void ma_engine_listener_get_cone
               (long param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if ((param_1 != 0) && (param_2 < *(uint *)(param_1 + 0x304))) {
    param_1 = param_1 + (ulong)param_2 * 0x70;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0x31c);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_1 + 800);
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(param_1 + 0x324);
    }
  }
  return;
}


// ===== 0060f6d4  ma_engine_listener_set_world_up =====

void ma_engine_listener_set_world_up
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,uint param_5)

{
  if ((param_4 != 0) && (param_5 < *(uint *)(param_4 + 0x304))) {
    param_4 = param_4 + (ulong)param_5 * 0x70;
    *(undefined4 *)(param_4 + 0x32c) = param_1;
    *(undefined4 *)(param_4 + 0x330) = param_2;
    *(undefined4 *)(param_4 + 0x334) = param_3;
  }
  return;
}


// ===== 0060f6fc  ma_engine_listener_get_world_up =====

undefined4 ma_engine_listener_get_world_up(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (param_2 < *(uint *)(param_1 + 0x304)) {
      uVar1 = *(undefined4 *)(param_1 + (ulong)param_2 * 0x70 + 0x32c);
    }
    return uVar1;
  }
  return 0;
}


// ===== 0060f73c  ma_engine_listener_set_enabled =====

void ma_engine_listener_set_enabled(long param_1,uint param_2,undefined4 param_3)

{
  if ((param_1 != 0) && (param_2 < *(uint *)(param_1 + 0x304))) {
    *(undefined4 *)(param_1 + (ulong)param_2 * 0x70 + 0x368) = param_3;
  }
  return;
}


// ===== 0060f75c  ma_sound_init_from_data_source =====

void ma_sound_init_from_data_source
               (long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_a8 = 0;
  local_b0 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x504);
  }
  lStack_88 = (ulong)uVar2 << 0x20;
  uStack_80 = (ulong)param_3;
  uStack_68 = 0xffffffffffffffff;
  local_58 = 0xffffffffffffffff;
  local_a0 = param_2;
  uStack_98 = param_4;
  ma_sound_init_ex(param_1,&local_b0,param_5);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0060f7e0  ma_sound_init_ex =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_sound_init_ex(long param_1,long param_2,void *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long local_a0;
  uint local_98;
  undefined8 local_94;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  byte local_80;
  byte local_7f;
  undefined4 local_7e;
  undefined2 local_7a;
  undefined4 local_78;
  int iStack_74;
  ulong local_70 [5];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_3 == (void *)0x0) {
    uVar7 = 0xfffffffe;
    goto LAB_0060f89c;
  }
  memset(param_3,0,0x3b0);
  uVar7 = 0xfffffffe;
  *(undefined8 *)((long)param_3 + 0x388) = 0xffffffffffffffff;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_0060f89c;
  uVar14 = *(undefined8 *)(param_2 + 0x60);
  local_7e = 0;
  local_7a = 0;
  *(undefined8 *)((long)param_3 + 0x3a0) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)((long)param_3 + 0x398) = uVar14;
  plVar8 = *(long **)(param_2 + 0x10);
  *(long **)((long)param_3 + 0x380) = plVar8;
  local_84 = *(undefined4 *)(param_2 + 0x2c);
  local_94 = *(ulong *)(param_2 + 0x24);
  local_98 = (uint)(plVar8 == (long *)0x0);
  local_80 = (byte)(*(uint *)(param_2 + 0x30) >> 0xd) & 1;
  local_7f = (byte)(*(uint *)(param_2 + 0x30) >> 0xe) & 1;
  local_88 = *(int *)(param_2 + 0x34);
  local_8c = 0;
  if (local_88 == 0) {
    local_88 = *(int *)(param_1 + 0x500);
  }
  local_a0 = param_1;
  if (plVar8 != (long *)0x0) {
    local_94 = local_94 & 0xffffffff00000000;
    local_8c = 0;
    if (*(code **)(*plVar8 + 0x10) == (code *)0x0) {
      uVar7 = 0xffffffe3;
      goto LAB_0060f89c;
    }
    uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,local_70,&iStack_74,&local_78,0,0);
    if ((int)uVar7 != 0) goto LAB_0060f89c;
    local_8c = local_78;
    local_94 = CONCAT44(local_94._4_4_,iStack_74);
    if (iStack_74 == 0) {
      uVar7 = 0xfffffffd;
      goto LAB_0060f89c;
    }
    if (local_94._4_4_ == -1) {
      local_94 = CONCAT44(iStack_74,iStack_74);
    }
  }
  uVar7 = FUN_0060cf5c(&local_a0,local_70);
  if ((int)uVar7 != 0) goto LAB_0060f89c;
  puVar1 = (undefined8 *)(param_1 + 0x4c8);
  if (local_70[0] == 0) {
    uVar7 = ma_engine_node_init_preallocated(&local_a0,0,param_3);
    if ((int)uVar7 != 0) goto LAB_0060f89c;
  }
  else {
    if ((*(code **)(param_1 + 0x4d0) == (code *)0x0) ||
       (lVar9 = (**(code **)(param_1 + 0x4d0))(local_70[0],*puVar1), lVar9 == 0)) {
      uVar7 = 0xfffffffc;
      goto LAB_0060f89c;
    }
    uVar7 = ma_engine_node_init_preallocated(&local_a0,lVar9,param_3);
    if ((int)uVar7 != 0) {
      if (*(code **)(param_1 + 0x4e0) != (code *)0x0) {
        uVar7 = uVar7 & 0xffffffff;
        (**(code **)(param_1 + 0x4e0))(lVar9,*puVar1);
      }
      goto LAB_0060f89c;
    }
  }
  *(undefined1 *)((long)param_3 + 0x370) = 1;
  lVar9 = *(long *)(param_2 + 0x18);
  if (lVar9 == 0) {
    if ((*(byte *)(param_2 + 0x31) >> 4 & 1) == 0) {
      lVar9 = param_1 + 0x168;
      uVar10 = 0;
      goto LAB_0060f9ec;
    }
  }
  else {
    uVar10 = *(undefined4 *)(param_2 + 0x20);
LAB_0060f9ec:
    uVar5 = ma_node_attach_output_bus(param_3,0,lVar9,uVar10);
    if (uVar5 != 0) {
      uVar7 = (ulong)uVar5;
      ma_engine_node_uninit(param_3,puVar1);
      goto LAB_0060f89c;
    }
  }
  uVar7 = *(ulong *)(param_2 + 0x40);
  uVar2 = *(ulong *)(param_2 + 0x48);
  if ((((uVar7 != 0) || (uVar2 != 0xffffffffffffffff)) && (uVar7 <= uVar2)) &&
     (plVar8 = *(long **)((long)param_3 + 0x380), plVar8 != (long *)0x0)) {
    if ((*(code **)(*plVar8 + 0x18) == (code *)0x0) ||
       (iVar6 = (**(code **)(*plVar8 + 0x18))(plVar8,local_70), lVar4 = _UNK_0024ded8,
       lVar9 = _DAT_0024ded0, iVar6 != 0)) {
      plVar8[1] = uVar7;
      plVar8[2] = uVar2;
      lVar9 = _DAT_0024ded0;
      plVar8[4] = _UNK_0024ded8;
      plVar8[3] = lVar9;
    }
    else {
      uVar12 = plVar8[1];
      plVar8[1] = uVar7;
      plVar8[2] = uVar2;
      uVar13 = local_70[0];
      if (local_70[0] <= uVar12) {
        uVar13 = uVar12;
      }
      plVar8[4] = lVar4;
      plVar8[3] = lVar9;
      if (uVar13 < uVar7) {
        pcVar11 = *(code **)(*plVar8 + 8);
      }
      else {
        if (uVar13 <= uVar2) goto LAB_0060fa58;
        pcVar11 = *(code **)(*plVar8 + 8);
        uVar7 = uVar2;
      }
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(plVar8,uVar7);
      }
    }
  }
LAB_0060fa58:
  uVar7 = *(ulong *)(param_2 + 0x50);
  uVar2 = *(ulong *)(param_2 + 0x58);
  if (((uVar7 != 0) || (uVar2 != 0xffffffffffffffff)) &&
     ((uVar7 <= uVar2 && (plVar8 = *(long **)((long)param_3 + 0x380), plVar8 != (long *)0x0)))) {
    if ((*(code **)(*plVar8 + 0x18) == (code *)0x0) ||
       (iVar6 = (**(code **)(*plVar8 + 0x18))(plVar8,local_70), lVar4 = _UNK_0024ded8,
       lVar9 = _DAT_0024ded0, iVar6 != 0)) {
      plVar8[1] = uVar7;
      plVar8[2] = uVar2;
      lVar9 = _DAT_0024ded0;
      plVar8[4] = _UNK_0024ded8;
      plVar8[3] = lVar9;
    }
    else {
      uVar13 = plVar8[1];
      plVar8[1] = uVar7;
      plVar8[2] = uVar2;
      if (local_70[0] <= uVar13) {
        local_70[0] = uVar13;
      }
      plVar8[4] = lVar4;
      plVar8[3] = lVar9;
      if (local_70[0] < uVar7) {
        pcVar11 = *(code **)(*plVar8 + 8);
      }
      else {
        if (local_70[0] <= uVar2) goto LAB_0060faa4;
        pcVar11 = *(code **)(*plVar8 + 8);
        uVar7 = uVar2;
      }
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(plVar8,uVar7);
      }
    }
  }
LAB_0060faa4:
  if (*(int *)(param_2 + 0x78) == 0) {
    uVar5 = *(uint *)(param_2 + 0x30) >> 5 & 1;
  }
  else {
    uVar5 = 1;
  }
  plVar8 = *(long **)((long)param_3 + 0x380);
  if (plVar8 != (long *)0x0) {
    FUN_003410a0(uVar5,plVar8 + 8);
    if (*(code **)(*plVar8 + 0x28) != (code *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8,uVar5);
    }
  }
  uVar7 = 0;
LAB_0060f89c:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


// ===== 0060fbbc  ma_sound_get_engine =====

long ma_sound_get_engine(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x168);
  }
  return param_1;
}


// ===== 0060fbc8  ma_sound_get_data_source =====

long ma_sound_get_data_source(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x380);
  }
  return param_1;
}


// ===== 0060fbd4  ma_sound_start =====

int ma_sound_start(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  if (param_1 == 0) {
LAB_0060fc8c:
    iVar1 = -2;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x168);
    if (uVar2 != 0) {
      uVar2 = *(ulong *)(uVar2 + 0x1b8);
    }
    if ((((int)*(undefined8 *)(param_1 + 0x38) == 1) || (uVar2 < *(ulong *)(param_1 + 0x40))) ||
       (*(ulong *)(param_1 + 0x48) <= uVar2)) {
      if ((*(long *)(param_1 + 0x380) != 0) && ((int)*(undefined8 *)(param_1 + 0x390) != 0)) {
        plVar3 = *(long **)(param_1 + 0x380);
        if (plVar3 == (long *)0x0) goto LAB_0060fc8c;
        if (*(code **)(*plVar3 + 8) == (code *)0x0) {
          FUN_003410a0(0,param_1 + 0x390);
        }
        else {
          iVar1 = (**(code **)(*plVar3 + 8))(plVar3,plVar3[1]);
          if ((iVar1 != 0) && (iVar1 != -0x1d)) {
            return iVar1;
          }
          FUN_003410a0(0,param_1 + 0x390);
          if ((iVar1 != 0) && (iVar1 != -0x1d)) {
            return iVar1;
          }
        }
      }
      FUN_003410a0(0,param_1 + 0x38);
    }
    iVar1 = 0;
  }
  return iVar1;
}


// ===== 0060fcc8  ma_sound_is_playing =====

ulong ma_sound_is_playing(ulong param_1)

{
  ulong uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x168);
    if (uVar1 != 0) {
      uVar1 = *(ulong *)(uVar1 + 0x1b8);
    }
    if ((int)*(undefined8 *)(param_1 + 0x38) == 1) {
      return 0;
    }
    if (uVar1 < *(ulong *)(param_1 + 0x40)) {
      return 0;
    }
    param_1 = (ulong)(uVar1 < *(ulong *)(param_1 + 0x48));
  }
  return param_1;
}


// ===== 0060fd20  ma_sound_at_end =====

long ma_sound_at_end(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x380) != 0) {
      return *(long *)(param_1 + 0x390);
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 0060fd40  ma_sound_stop =====

undefined8 ma_sound_stop(long param_1)

{
  if (param_1 != 0) {
    FUN_003410a0(1,param_1 + 0x38);
    return 0;
  }
  return 0xfffffffe;
}


// ===== 0060fd6c  ma_sound_stop_with_fade_in_pcm_frames =====

undefined8 ma_sound_stop_with_fade_in_pcm_frames(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x168);
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0x1b8);
    }
    uVar1 = lVar2 + param_2;
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x358) = 0xbf800000;
      if (uVar1 <= param_2) {
        param_2 = uVar1;
      }
      *(undefined4 *)(param_1 + 0x35c) = 0;
      *(ulong *)(param_1 + 0x360) = param_2;
      *(ulong *)(param_1 + 0x368) = uVar1 - param_2;
    }
    FUN_00341070(uVar1,param_1 + 0x48);
    return 0;
  }
  return 0xfffffffe;
}


// ===== 0060fde0  ma_sound_set_stop_time_with_fade_in_pcm_frames =====

void ma_sound_set_stop_time_with_fade_in_pcm_frames(long param_1,ulong param_2,ulong param_3)

{
  if (param_1 != 0) {
    if (param_3 != 0) {
      *(undefined4 *)(param_1 + 0x358) = 0xbf800000;
      if (param_2 <= param_3) {
        param_3 = param_2;
      }
      *(undefined4 *)(param_1 + 0x35c) = 0;
      *(ulong *)(param_1 + 0x360) = param_3;
      *(ulong *)(param_1 + 0x368) = param_2 - param_3;
    }
    FUN_00341070(param_2,param_1 + 0x48);
  }
  return;
}


// ===== 0060fe38  ma_sound_stop_with_fade_in_milliseconds =====

undefined8 ma_sound_stop_with_fade_in_milliseconds(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x168);
    if (uVar1 != 0) {
      uVar3 = (ulong)*(uint *)(uVar1 + 0x300) * param_2;
      uVar2 = uVar3 / 1000;
      uVar1 = *(long *)(uVar1 + 0x1b8) + uVar2;
      if (999 < uVar3) {
        *(undefined4 *)(param_1 + 0x358) = 0xbf800000;
        if (uVar1 <= uVar2) {
          uVar2 = uVar1;
        }
        *(undefined4 *)(param_1 + 0x35c) = 0;
        *(ulong *)(param_1 + 0x360) = uVar2;
        *(ulong *)(param_1 + 0x368) = uVar1 - uVar2;
      }
    }
    FUN_00341070(uVar1,param_1 + 0x48);
    return 0;
  }
  return 0xfffffffe;
}


// ===== 0060fed4  ma_sound_set_volume =====

void ma_sound_set_volume(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  if (param_2 == 0) {
    return;
  }
  *(float *)(param_2 + 0x338) = param_1;
  if (*(int *)(param_2 + 0x174) == 0) {
    *(float *)(param_2 + 700) = param_1;
    return;
  }
  uVar1 = *(uint *)(param_2 + 0x308);
  uVar4 = (ulong)uVar1;
  uVar2 = *(uint *)(param_2 + 0x310);
  if (uVar1 != 0) {
    uVar6 = *(ulong *)(param_2 + 0x318);
    uVar8 = *(ulong *)(param_2 + 800);
    fVar14 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x30c));
    fVar14 = (float)uVar2 / fVar14;
    if ((uVar1 < 8) || ((uVar6 < uVar8 + uVar4 * 4 && (uVar8 < uVar6 + uVar4 * 4)))) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar4 & 0xfffffff8;
      puVar12 = (undefined8 *)(uVar6 + 0x10);
      puVar11 = (undefined8 *)(uVar8 + 0x10);
      uVar13 = uVar10;
      do {
        uVar19 = puVar12[-1];
        uVar16 = puVar12[-2];
        uVar27 = puVar12[1];
        uVar24 = *puVar12;
        uVar13 = uVar13 - 8;
        uVar22 = puVar11[-1];
        uVar21 = puVar11[-2];
        uVar30 = puVar11[1];
        uVar29 = *puVar11;
        puVar11[-1] = CONCAT44(param_1,param_1);
        puVar11[-2] = CONCAT44(param_1,param_1);
        puVar11[1] = CONCAT44(param_1,param_1);
        *puVar11 = CONCAT44(param_1,param_1);
        fVar15 = (float)uVar16;
        fVar17 = (float)((ulong)uVar16 >> 0x20);
        fVar18 = (float)uVar19;
        fVar20 = (float)((ulong)uVar19 >> 0x20);
        fVar23 = (float)uVar24;
        fVar25 = (float)((ulong)uVar24 >> 0x20);
        fVar26 = (float)uVar27;
        fVar28 = (float)((ulong)uVar27 >> 0x20);
        puVar12[-1] = CONCAT44(fVar20 + ((float)((ulong)uVar22 >> 0x20) - fVar20) * fVar14,
                               fVar18 + ((float)uVar22 - fVar18) * fVar14);
        puVar12[-2] = CONCAT44(fVar17 + ((float)((ulong)uVar21 >> 0x20) - fVar17) * fVar14,
                               fVar15 + ((float)uVar21 - fVar15) * fVar14);
        puVar12[1] = CONCAT44(fVar28 + ((float)((ulong)uVar30 >> 0x20) - fVar28) * fVar14,
                              fVar26 + ((float)uVar30 - fVar26) * fVar14);
        *puVar12 = CONCAT44(fVar25 + ((float)((ulong)uVar29 >> 0x20) - fVar25) * fVar14,
                            fVar23 + ((float)uVar29 - fVar23) * fVar14);
        puVar12 = puVar12 + 4;
        puVar11 = puVar11 + 4;
      } while (uVar13 != 0);
      if (uVar10 == uVar4) goto LAB_0060ff6c;
    }
    lVar5 = uVar4 - uVar10;
    pfVar7 = (float *)(uVar6 + uVar10 * 4);
    pfVar9 = (float *)(uVar8 + uVar10 * 4);
    do {
      lVar5 = lVar5 + -1;
      *pfVar7 = *pfVar7 + fVar14 * (*pfVar9 - *pfVar7);
      *pfVar9 = param_1;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (lVar5 != 0);
  }
LAB_0060ff6c:
  if (uVar2 == 0xffffffff) {
    uVar3 = *(undefined4 *)(param_2 + 0x30c);
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(param_2 + 0x310) = uVar3;
  return;
}


// ===== 0060ffe8  ma_sound_get_volume =====

undefined4 ma_sound_get_volume(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x338);
  }
  return 0;
}


// ===== 00610004  ma_sound_set_pan =====

void ma_sound_set_pan(undefined4 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_2 != 0) {
    fVar1 = (float)NEON_fminnm(param_1,0x3f800000);
    fVar2 = -1.0;
    if (-1.0 <= fVar1) {
      fVar2 = fVar1;
    }
    *(float *)(param_2 + 0x304) = fVar2;
  }
  return;
}


// ===== 00610024  ma_sound_get_pan =====

undefined4 ma_sound_get_pan(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x304);
  }
  return 0;
}


// ===== 00610038  ma_sound_set_pan_mode =====

void ma_sound_set_pan_mode(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x300) = param_2;
  }
  return;
}


// ===== 00610044  ma_sound_get_pan_mode =====

ulong ma_sound_get_pan_mode(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x300);
  }
  return param_1;
}


// ===== 00610050  ma_sound_set_pitch =====

void ma_sound_set_pitch(float param_1,long param_2)

{
  if ((param_2 != 0) && (0.0 < param_1)) {
    FUN_00341220(param_1,param_2 + 0x33c);
  }
  return;
}


// ===== 0061007c  ma_sound_get_pitch =====

undefined4 ma_sound_get_pitch(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x33c);
  }
  return 0;
}


// ===== 00610098  ma_sound_set_spatialization_enabled =====

void ma_sound_set_spatialization_enabled(long param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_00341220(param_2 == 0,param_1 + 0x34c);
  }
  return;
}


// ===== 006100c0  ma_sound_is_spatialization_enabled =====

ulong ma_sound_is_spatialization_enabled(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)((int)*(undefined8 *)(param_1 + 0x34c) == 0);
  }
  return param_1;
}


// ===== 006100d8  ma_sound_set_pinned_listener_index =====

void ma_sound_set_pinned_listener_index(long param_1,uint param_2)

{
  if (((param_1 != 0) && (*(long *)(param_1 + 0x168) != 0)) &&
     (param_2 < *(uint *)(*(long *)(param_1 + 0x168) + 0x304))) {
    FUN_00341220(param_2,param_1 + 0x350);
  }
  return;
}


// ===== 00610110  ma_sound_get_pinned_listener_index =====

undefined8 ma_sound_get_pinned_listener_index(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x350);
  }
  return 0xff;
}


// ===== 00610128  ma_sound_get_listener_index =====

ulong ma_sound_get_listener_index(long param_1)

{
  bool bVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (param_1 != 0) {
    uVar10 = *(ulong *)(param_1 + 0x350);
    if ((int)uVar10 != 0xff) goto LAB_006101b4;
    iVar5 = FUN_00341150(1,(undefined4 *)(param_1 + 0x284));
    while (iVar5 != 0) {
      do {
      } while (*(int *)(param_1 + 0x284) == 1);
      iVar5 = FUN_00341150(1,param_1 + 0x284);
    }
    fVar18 = *(float *)(param_1 + 0x278);
    fVar19 = *(float *)(param_1 + 0x27c);
    fVar20 = *(float *)(param_1 + 0x280);
    *(undefined4 *)(param_1 + 0x284) = 0;
    lVar11 = *(long *)(param_1 + 0x168);
    if ((lVar11 != 0) && (uVar6 = (ulong)*(uint *)(lVar11 + 0x304), 1 < *(uint *)(lVar11 + 0x304)))
    {
      uVar12 = 0;
      uVar10 = 0;
      fVar8 = 3.4028235e+38;
      do {
        if (*(int *)(lVar11 + uVar12 * 0x70 + 0x368) != 0) {
          lVar13 = lVar11 + uVar12 * 0x70;
          piVar2 = (int *)(lVar13 + 0x344);
          while (iVar5 = FUN_00341150(1,piVar2), iVar5 != 0) {
            do {
            } while (*piVar2 == 1);
          }
          lVar7 = lVar11 + uVar12 * 0x70;
          fVar16 = *(float *)(lVar13 + 0x338) - fVar18;
          fVar14 = *(float *)(lVar7 + 0x33c);
          fVar17 = *(float *)(lVar7 + 0x340);
          *piVar2 = 0;
          uVar6 = (ulong)*(uint *)(lVar11 + 0x304);
          fVar14 = fVar14 - fVar19;
          fVar17 = fVar17 - fVar20;
          uVar15 = NEON_fmadd(fVar16,fVar16,fVar14 * fVar14);
          fVar16 = (float)NEON_fmadd(fVar17,fVar17,uVar15);
          bVar1 = NAN(fVar8);
          bVar4 = fVar8 == fVar16;
          bVar3 = fVar8 < fVar16;
          fVar14 = fVar16;
          if (bVar4 || bVar3 != (bVar1 || NAN(fVar16))) {
            fVar14 = fVar8;
          }
          fVar8 = fVar14;
          uVar9 = (uint)uVar12;
          if (bVar4 || bVar3 != (bVar1 || NAN(fVar16))) {
            uVar9 = (uint)uVar10;
          }
          uVar10 = (ulong)uVar9;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar6);
      goto LAB_006101b4;
    }
  }
  uVar10 = 0;
LAB_006101b4:
  return uVar10 & 0xffffffff;
}


// ===== 0061026c  ma_sound_get_position =====

undefined4 ma_sound_get_position(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 0x284));
  while (iVar1 != 0) {
    do {
    } while (*(int *)(param_1 + 0x284) == 1);
    iVar1 = FUN_00341150(1,param_1 + 0x284);
  }
  *(undefined4 *)(param_1 + 0x284) = 0;
  return *(undefined4 *)(param_1 + 0x278);
}


// ===== 006102dc  ma_sound_get_direction_to_listener =====

void ma_sound_get_direction_to_listener(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_44;
  float fStack_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  fVar7 = -1.0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_3 == 0) || (lVar3 = *(long *)(param_3 + 0x168), lVar3 == 0)) {
    fVar5 = 0.0;
    fVar6 = 0.0;
  }
  else {
    uVar2 = ma_sound_get_listener_index(param_1,param_2,0xbf800000);
    ma_spatializer_get_relative_position_and_direction
              (param_3 + 0x230,lVar3 + (uVar2 & 0xffffffff) * 0x70 + 0x308,&local_44,0);
    fVar6 = 0.0;
    fVar7 = 0.0;
    uVar4 = NEON_fmadd(local_44,local_44,fStack_40 * fStack_40);
    fVar8 = (float)NEON_fmadd(local_3c,local_3c,uVar4);
    fVar5 = 0.0;
    if (fVar8 != 0.0) {
      fVar7 = 1.0 / SQRT(fVar8);
      fVar5 = -(local_44 * fVar7);
      fVar6 = -(fStack_40 * fVar7);
      fVar7 = -(local_3c * fVar7);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar5,fVar6,fVar7);
}


// ===== 006103a4  ma_sound_set_position =====

void ma_sound_set_position(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = FUN_00341150(1,(undefined4 *)(param_4 + 0x284));
    while (iVar1 != 0) {
      do {
      } while (*(int *)(param_4 + 0x284) == 1);
      iVar1 = FUN_00341150(1,param_4 + 0x284);
    }
    *(undefined4 *)(param_4 + 0x278) = param_1;
    *(undefined4 *)(param_4 + 0x27c) = param_2;
    *(undefined4 *)(param_4 + 0x280) = param_3;
    *(undefined4 *)(param_4 + 0x284) = 0;
  }
  return;
}


// ===== 00610420  ma_sound_set_direction =====

void ma_sound_set_direction(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = FUN_00341150(1,(undefined4 *)(param_4 + 0x294));
    while (iVar1 != 0) {
      do {
      } while (*(int *)(param_4 + 0x294) == 1);
      iVar1 = FUN_00341150(1,param_4 + 0x294);
    }
    *(undefined4 *)(param_4 + 0x288) = param_1;
    *(undefined4 *)(param_4 + 0x28c) = param_2;
    *(undefined4 *)(param_4 + 0x290) = param_3;
    *(undefined4 *)(param_4 + 0x294) = 0;
  }
  return;
}


// ===== 0061049c  ma_sound_get_direction =====

undefined4 ma_sound_get_direction(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 0x294));
  while (iVar1 != 0) {
    do {
    } while (*(int *)(param_1 + 0x294) == 1);
    iVar1 = FUN_00341150(1,param_1 + 0x294);
  }
  *(undefined4 *)(param_1 + 0x294) = 0;
  return *(undefined4 *)(param_1 + 0x288);
}


// ===== 0061050c  ma_sound_set_velocity =====

void ma_sound_set_velocity(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = FUN_00341150(1,(undefined4 *)(param_4 + 0x2a4));
    while (iVar1 != 0) {
      do {
      } while (*(int *)(param_4 + 0x2a4) == 1);
      iVar1 = FUN_00341150(1,param_4 + 0x2a4);
    }
    *(undefined4 *)(param_4 + 0x298) = param_1;
    *(undefined4 *)(param_4 + 0x29c) = param_2;
    *(undefined4 *)(param_4 + 0x2a0) = param_3;
    *(undefined4 *)(param_4 + 0x2a4) = 0;
  }
  return;
}


// ===== 00610588  ma_sound_get_velocity =====

undefined4 ma_sound_get_velocity(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 0x2a4));
  while (iVar1 != 0) {
    do {
    } while (*(int *)(param_1 + 0x2a4) == 1);
    iVar1 = FUN_00341150(1,param_1 + 0x2a4);
  }
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  return *(undefined4 *)(param_1 + 0x298);
}


// ===== 006105f8  ma_sound_set_attenuation_model =====

void ma_sound_set_attenuation_model(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_003410a0(param_2,param_1 + 0x240);
  }
  return;
}


// ===== 0061061c  ma_sound_get_attenuation_model =====

long ma_sound_get_attenuation_model(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x240);
  }
  return param_1;
}


// ===== 0061062c  ma_sound_set_positioning =====

void ma_sound_set_positioning(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_003410a0(param_2,param_1 + 0x244);
  }
  return;
}


// ===== 00610650  ma_sound_get_positioning =====

long ma_sound_get_positioning(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x244);
  }
  return param_1;
}


// ===== 00610660  ma_sound_set_rolloff =====

void ma_sound_set_rolloff(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x25c);
  }
  return;
}


// ===== 00610684  ma_sound_get_rolloff =====

undefined4 ma_sound_get_rolloff(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x25c);
  }
  return 0;
}


// ===== 006106a0  ma_sound_set_min_gain =====

void ma_sound_set_min_gain(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x24c);
  }
  return;
}


// ===== 006106c4  ma_sound_get_min_gain =====

undefined4 ma_sound_get_min_gain(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x24c);
  }
  return 0;
}


// ===== 006106e0  ma_sound_set_max_gain =====

void ma_sound_set_max_gain(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x250);
  }
  return;
}


// ===== 00610704  ma_sound_get_max_gain =====

undefined4 ma_sound_get_max_gain(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x250);
  }
  return 0;
}


// ===== 00610720  ma_sound_set_min_distance =====

void ma_sound_set_min_distance(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x254);
  }
  return;
}


// ===== 00610744  ma_sound_get_min_distance =====

undefined4 ma_sound_get_min_distance(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x254);
  }
  return 0;
}


// ===== 00610760  ma_sound_set_max_distance =====

void ma_sound_set_max_distance(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 600);
  }
  return;
}


// ===== 00610784  ma_sound_get_max_distance =====

undefined4 ma_sound_get_max_distance(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 600);
  }
  return 0;
}


// ===== 006107a0  ma_sound_set_cone =====

void ma_sound_set_cone(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  if (param_4 != 0) {
    FUN_003410a0(param_1,param_4 + 0x260);
    FUN_003410a0(param_2,param_4 + 0x264);
    FUN_003410a0(param_3,param_4 + 0x268);
  }
  return;
}


// ===== 006107f8  ma_sound_get_cone =====

void ma_sound_get_cone(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_1 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = (int)*(undefined8 *)(param_1 + 0x260);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = (int)*(undefined8 *)(param_1 + 0x264);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (int)*(undefined8 *)(param_1 + 0x268);
    }
  }
  return;
}


// ===== 00610848  ma_sound_set_doppler_factor =====

void ma_sound_set_doppler_factor(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x26c);
  }
  return;
}


// ===== 0061086c  ma_sound_get_doppler_factor =====

undefined4 ma_sound_get_doppler_factor(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x26c);
  }
  return 0;
}


// ===== 00610888  ma_sound_set_directional_attenuation_factor =====

void ma_sound_set_directional_attenuation_factor(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x270);
  }
  return;
}


// ===== 006108ac  ma_sound_get_directional_attenuation_factor =====

undefined1  [16] ma_sound_get_directional_attenuation_factor(long param_1)

{
  undefined1 auVar1 [16];
  
  if (param_1 != 0) {
    auVar1._0_8_ = *(ulong *)(param_1 + 0x270) & 0xffffffff;
    auVar1._8_8_ = 0;
    return auVar1;
  }
  return ZEXT816(0x3f800000);
}


// ===== 006108c8  ma_sound_set_fade_in_pcm_frames =====

void ma_sound_set_fade_in_pcm_frames
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    *(undefined4 *)(param_3 + 0x358) = param_1;
    *(undefined4 *)(param_3 + 0x35c) = param_2;
    *(undefined8 *)(param_3 + 0x360) = param_4;
    *(undefined8 *)(param_3 + 0x368) = 0xffffffffffffffff;
  }
  return;
}


// ===== 006108fc  ma_sound_set_fade_start_in_pcm_frames =====

void ma_sound_set_fade_start_in_pcm_frames
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
               undefined8 param_5)

{
  if (param_3 != 0) {
    *(undefined4 *)(param_3 + 0x358) = param_1;
    *(undefined4 *)(param_3 + 0x35c) = param_2;
    *(undefined8 *)(param_3 + 0x360) = param_4;
    *(undefined8 *)(param_3 + 0x368) = param_5;
  }
  return;
}


// ===== 0061092c  ma_sound_set_fade_in_milliseconds =====

void ma_sound_set_fade_in_milliseconds
               (undefined4 param_1,undefined4 param_2,long param_3,long param_4)

{
  if (param_3 != 0) {
    *(undefined4 *)(param_3 + 0x358) = param_1;
    *(undefined4 *)(param_3 + 0x35c) = param_2;
    *(ulong *)(param_3 + 0x360) = ((ulong)*(uint *)(param_3 + 0x188) * param_4) / 1000;
    *(undefined8 *)(param_3 + 0x368) = 0xffffffffffffffff;
  }
  return;
}


// ===== 00610984  ma_sound_set_fade_start_in_milliseconds =====

void ma_sound_set_fade_start_in_milliseconds
               (undefined4 param_1,undefined4 param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_3 + 0x168);
    if (uVar1 != 0) {
      uVar1 = (ulong)*(uint *)(uVar1 + 0x300);
    }
    *(undefined4 *)(param_3 + 0x358) = param_1;
    *(undefined4 *)(param_3 + 0x35c) = param_2;
    *(ulong *)(param_3 + 0x360) = (uVar1 * param_4) / 1000;
    *(ulong *)(param_3 + 0x368) = (uVar1 * param_5) / 1000;
  }
  return;
}


// ===== 006109f0  ma_sound_get_current_fade_volume =====

float ma_sound_get_current_fade_volume(long param_1)

{
  ulong uVar1;
  
  if (param_1 == 0) {
    return -2.0;
  }
  uVar1 = *(ulong *)(param_1 + 0x1a0);
  if ((long)uVar1 < 0) {
    return 1.0;
  }
  if (uVar1 == 0) {
    return *(float *)(param_1 + 0x18c);
  }
  if (uVar1 < *(ulong *)(param_1 + 0x198)) {
    return *(float *)(param_1 + 0x18c) +
           ((float)(uVar1 & 0xffffffff) / (float)(*(ulong *)(param_1 + 0x198) & 0xffffffff)) *
           (*(float *)(param_1 + 400) - *(float *)(param_1 + 0x18c));
  }
  return *(float *)(param_1 + 400);
}


// ===== 00610a50  ma_sound_set_start_time_in_pcm_frames =====

void ma_sound_set_start_time_in_pcm_frames(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_00341070(param_2,param_1 + 0x40);
  }
  return;
}


// ===== 00610a74  ma_sound_set_start_time_in_milliseconds =====

void ma_sound_set_start_time_in_milliseconds(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x168);
    if (uVar1 != 0) {
      uVar1 = (ulong)*(uint *)(uVar1 + 0x300);
    }
    FUN_00341070((uVar1 * param_2) / 1000,param_1 + 0x40);
  }
  return;
}


// ===== 00610ac0  ma_sound_set_stop_time_in_pcm_frames =====

void ma_sound_set_stop_time_in_pcm_frames(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_00341070(param_2,param_1 + 0x48);
  }
  return;
}


// ===== 00610ae4  ma_sound_set_stop_time_in_milliseconds =====

void ma_sound_set_stop_time_in_milliseconds(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x168);
    if (uVar1 != 0) {
      uVar1 = (ulong)*(uint *)(uVar1 + 0x300);
    }
    FUN_00341070((uVar1 * param_2) / 1000,param_1 + 0x48);
  }
  return;
}


// ===== 00610b30  ma_sound_set_stop_time_with_fade_in_milliseconds =====

void ma_sound_set_stop_time_with_fade_in_milliseconds(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x168);
    if (uVar1 != 0) {
      uVar1 = (ulong)*(uint *)(uVar1 + 0x300);
    }
    uVar2 = (uVar1 * param_2) / 1000;
    if (999 < uVar1 * param_3) {
      *(undefined4 *)(param_1 + 0x358) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x35c) = 0;
      uVar1 = (uVar1 * param_3) / 1000;
      if (uVar2 <= uVar1) {
        uVar1 = uVar2;
      }
      *(ulong *)(param_1 + 0x360) = uVar1;
      *(ulong *)(param_1 + 0x368) = uVar2 - uVar1;
    }
    FUN_00341070(uVar2,param_1 + 0x48);
  }
  return;
}


// ===== 00610bc4  ma_sound_get_time_in_pcm_frames =====

long ma_sound_get_time_in_pcm_frames(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x50);
  }
  return param_1;
}


// ===== 00610bd4  ma_sound_get_time_in_milliseconds =====

ulong ma_sound_get_time_in_milliseconds(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = *(long *)(param_1 + 0x50) * 1000;
    uVar3 = *(ulong *)(param_1 + 0x168);
    if (uVar3 != 0) {
      uVar1 = 0;
      if ((ulong)*(uint *)(uVar3 + 0x300) != 0) {
        uVar1 = uVar2 / *(uint *)(uVar3 + 0x300);
      }
      return uVar1;
    }
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = uVar2 / uVar3;
  }
  return uVar1;
}


// ===== 00610c0c  ma_sound_set_looping =====

void ma_sound_set_looping(long param_1,undefined4 param_2)

{
  long *plVar1;
  
  if ((param_1 != 0) && (plVar1 = *(long **)(param_1 + 0x380), plVar1 != (long *)0x0)) {
    FUN_003410a0(param_2,plVar1 + 8);
    if (*(code **)(*plVar1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00610c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
      return;
    }
  }
  return;
}


// ===== 00610c60  ma_sound_is_looping =====

long ma_sound_is_looping(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x380) != 0) {
      return *(long *)(*(long *)(param_1 + 0x380) + 0x40);
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 00610c80  ma_sound_seek_to_pcm_frame =====

undefined8 ma_sound_seek_to_pcm_frame(long param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(long *)(param_1 + 0x380) != 0) {
    FUN_00341070(param_2,param_1 + 0x388);
    return 0;
  }
  return 0xfffffffd;
}


// ===== 00610cc0  ma_sound_seek_to_second =====

void ma_sound_seek_to_second(float param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    uVar3 = 0xfffffffe;
    goto LAB_00610d5c;
  }
  plVar2 = *(long **)(param_2 + 0x380);
  if (plVar2 != (long *)0x0) {
    if (*(code **)(*plVar2 + 0x10) == (code *)0x0) {
      uVar3 = 0xffffffe3;
      goto LAB_00610d5c;
    }
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,auStack_3c,auStack_40,&local_44,0,0);
    if ((int)uVar3 != 0) goto LAB_00610d5c;
    if (*(long *)(param_2 + 0x380) != 0) {
      FUN_00341070((long)((float)local_44 * param_1),param_2 + 0x388);
      uVar3 = 0;
      goto LAB_00610d5c;
    }
  }
  uVar3 = 0xfffffffd;
LAB_00610d5c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00610d84  ma_sound_get_data_format =====

void ma_sound_get_data_format
               (long param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4,
               undefined1 *param_5,size_t param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_1 == 0) {
    uVar4 = 0xfffffffe;
  }
  else {
    plVar10 = *(long **)(param_1 + 0x380);
    if (plVar10 == (long *)0x0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 5;
      }
      uVar6 = *(uint *)(param_1 + 0x10);
      if (uVar6 != 0) {
        uVar6 = (uint)*(byte *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      if (param_3 != (uint *)0x0) {
        *param_3 = uVar6;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(param_1 + 0x1b0);
      }
      uVar4 = 0;
      if (((param_5 != (undefined1 *)0x0) && (param_6 != 0)) && (uVar6 != 0)) {
        uVar7 = (ulong)(uVar6 << 3);
        uVar2 = param_6 - 1;
        if ((ulong)(uVar6 - 1) <= param_6 - 1) {
          uVar2 = (ulong)(uVar6 - 1);
        }
        uVar9 = (undefined1)(0x202020202020102 >> (uVar7 & 0x3f));
        if (7 < uVar6) {
          uVar9 = 2;
        }
        *param_5 = uVar9;
        if (uVar2 != 0) {
          uVar9 = (undefined1)(0x303030303030103 >> (uVar7 & 0x3f));
          if (7 < uVar6) {
            uVar9 = 3;
          }
          param_5[1] = uVar9;
          if (uVar2 != 1) {
            uVar9 = (undefined1)(0x404040404000104 >> (uVar7 & 0x3f));
            if (7 < uVar6) {
              uVar9 = 4;
            }
            param_5[2] = uVar9;
            if (uVar2 != 2) {
              uVar9 = (undefined1)(0x505060a00000105 >> (uVar7 & 0x3f));
              if (7 < uVar6) {
                uVar9 = 5;
              }
              param_5[3] = uVar9;
              if (uVar2 != 3) {
                lVar8 = 0;
                uVar7 = 0x20;
                do {
                  uVar1 = lVar8 + 4;
                  if ((int)uVar6 < 4) {
                    cVar5 = (char)uVar6;
                    if (uVar6 == 1) goto LAB_00610fe8;
                    if ((uVar6 != 2) && (uVar6 != 3)) goto LAB_00611074;
                    goto LAB_00610fe4;
                  }
                  if (5 < (int)uVar6) {
                    if (uVar6 == 6) {
                      if (5 < uVar1) goto LAB_00610fe4;
                      cVar5 = (char)(0xc0b05040302 >> (uVar7 & 0x3f));
                    }
                    else {
                      if (uVar6 != 7) goto LAB_00611074;
                      if (6 < uVar1) goto LAB_00610fe4;
                      cVar5 = (char)(0xc0b0a05040302 >> (uVar7 & 0x3f));
                    }
                    goto LAB_00610fe8;
                  }
                  if (uVar6 == 4) {
LAB_00610fe4:
                    cVar5 = '\0';
                  }
                  else {
                    if (uVar6 == 5) {
                      if (uVar1 < 5) {
                        cVar5 = (char)(0x706040302 >> (uVar7 & 0x3f));
                        goto LAB_00610fe8;
                      }
                      goto LAB_00610fe4;
                    }
LAB_00611074:
                    if (uVar1 < 8) {
                      cVar5 = (char)(0xc0b070605040302 >> (uVar7 & 0x3f));
                    }
                    else {
                      if (0x1f < uVar1) goto LAB_00610fe4;
                      cVar5 = (char)uVar1 + '\f';
                    }
                  }
LAB_00610fe8:
                  param_5[lVar8 + 4] = cVar5;
                  lVar8 = lVar8 + 1;
                  uVar4 = 0;
                  uVar7 = uVar7 + 8;
                } while (uVar2 - 3 != lVar8);
                goto LAB_00610f6c;
              }
            }
          }
        }
        uVar4 = 0;
      }
    }
    else {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
      if (param_3 != (uint *)0x0) {
        *param_3 = 0;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
      if ((param_5 != (undefined1 *)0x0) && (param_6 != 0)) {
        memset(param_5,0,param_6);
      }
      if (*(code **)(*plVar10 + 0x10) == (code *)0x0) {
        uVar4 = 0xffffffe3;
      }
      else {
        uVar4 = (**(code **)(*plVar10 + 0x10))
                          (plVar10,&local_5c,&local_60,&local_64,param_5,param_6);
        if ((int)uVar4 == 0) {
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = local_5c;
          }
          if (param_3 != (uint *)0x0) {
            *param_3 = local_60;
          }
          uVar4 = 0;
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = local_64;
          }
        }
      }
    }
  }
LAB_00610f6c:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 006110b0  ma_sound_get_cursor_in_pcm_frames =====

void ma_sound_get_cursor_in_pcm_frames(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x380) == 0) {
      uVar3 = 0xfffffffd;
      goto LAB_0061114c;
    }
    if (*(long *)(param_1 + 0x388) != -1) {
      uVar3 = 0;
      *param_2 = *(long *)(param_1 + 0x388);
      goto LAB_0061114c;
    }
    if (param_2 != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x380);
      *param_2 = 0;
      if (plVar4 == (long *)0x0) {
        uVar3 = 0;
      }
      else if (*(code **)(*plVar4 + 0x18) == (code *)0x0) {
        uVar3 = 0xffffffe3;
      }
      else {
        uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
        if ((int)uVar3 == 0) {
          lVar1 = 0;
          if ((ulong)plVar4[1] <= local_40) {
            lVar1 = local_40 - plVar4[1];
          }
          *param_2 = lVar1;
        }
      }
      goto LAB_0061114c;
    }
  }
  uVar3 = 0xfffffffe;
LAB_0061114c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00611184  ma_sound_get_length_in_pcm_frames =====

undefined8 ma_sound_get_length_in_pcm_frames(long param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 0x380);
    if (plVar2 == (long *)0x0) {
      return 0xfffffffd;
    }
    if (param_2 != (long *)0x0) {
      *param_2 = 0;
      if (plVar2[2] != -1) {
        *param_2 = plVar2[2] - plVar2[1];
        return 0;
      }
      if (*(code **)(*plVar2 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006111d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
        return uVar1;
      }
      return 0xffffffe3;
    }
  }
  return 0xfffffffe;
}


// ===== 006111e4  ma_sound_get_cursor_in_seconds =====

void ma_sound_get_cursor_in_seconds(long param_1,float *param_2)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong local_48;
  uint local_40;
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 != (float *)0x0) {
    *param_2 = 0.0;
  }
  if (param_1 == 0) {
    uVar3 = 0xfffffffe;
    goto LAB_006112e8;
  }
  if (*(long *)(param_1 + 0x380) == 0) {
    uVar3 = 0xfffffffd;
    goto LAB_006112e8;
  }
  plVar4 = *(long **)(param_1 + 0x380);
  lVar5 = *(long *)(param_1 + 0x388);
  if (*(long *)(param_1 + 0x388) == -1) {
    if (plVar4 == (long *)0x0) {
      lVar5 = 0;
      goto LAB_0061122c;
    }
    if (*(code **)(*plVar4 + 0x18) != (code *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
      if ((int)uVar3 != 0) goto LAB_006112e8;
      puVar1 = (ulong *)(plVar4 + 1);
      plVar4 = *(long **)(param_1 + 0x380);
      lVar5 = 0;
      if (*puVar1 <= local_48) {
        lVar5 = local_48 - *puVar1;
      }
      goto LAB_0061122c;
    }
LAB_006112e4:
    uVar3 = 0xffffffe3;
  }
  else {
LAB_0061122c:
    if (plVar4 == (long *)0x0) {
      local_40 = *(uint *)(param_1 + 0x1b0);
    }
    else {
      if (*(code **)(*plVar4 + 0x10) == (code *)0x0) goto LAB_006112e4;
      uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_48,auStack_3c,&local_40,0,0);
      if ((int)uVar3 != 0) goto LAB_006112e8;
    }
    uVar3 = 0;
    *param_2 = (float)lVar5 / (float)local_40;
  }
LAB_006112e8:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


// ===== 00611318  ma_sound_get_length_in_seconds =====

void ma_sound_get_length_in_seconds(long param_1,float *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  long local_50;
  undefined4 local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
LAB_006113b4:
    uVar2 = 0xfffffffe;
    goto LAB_006113f0;
  }
  plVar4 = *(long **)(param_1 + 0x380);
  if (plVar4 == (long *)0x0) {
    uVar2 = 0xfffffffd;
    goto LAB_006113f0;
  }
  if (param_2 == (float *)0x0) goto LAB_006113b4;
  lVar3 = plVar4[2];
  *param_2 = 0.0;
  local_50 = 0;
  if (lVar3 == -1) {
    if (*(code **)(*plVar4 + 0x20) != (code *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,&local_50);
      if ((int)uVar2 != 0) goto LAB_006113f0;
      goto LAB_00611368;
    }
  }
  else {
    local_50 = lVar3 - plVar4[1];
LAB_00611368:
    if (*(code **)(*plVar4 + 0x10) != (code *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,auStack_3c,auStack_40,&local_44,0,0);
      if ((int)uVar2 == 0) {
        fVar5 = (float)NEON_ucvtf(local_44);
        *param_2 = (float)local_50 / fVar5;
      }
      goto LAB_006113f0;
    }
  }
  uVar2 = 0xffffffe3;
LAB_006113f0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 00611418  ma_sound_set_end_callback =====

undefined8 ma_sound_set_end_callback(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(long *)(param_1 + 0x380) != 0) {
    *(undefined8 *)(param_1 + 0x398) = param_2;
    *(undefined8 *)(param_1 + 0x3a0) = param_3;
    return 0;
  }
  return 0xfffffffd;
}


// ===== 00611448  ma_sound_group_init =====

void ma_sound_group_init(long param_1,uint param_2,undefined8 param_3,void *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x504);
  }
  if (param_4 == (void *)0x0) {
    uVar2 = 0xfffffffe;
  }
  else {
    memset(param_4,0,0x3b0);
    local_98 = param_2 | 0x4000;
    uStack_a8 = 0;
    local_a0 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    uStack_8c = 0;
    local_94 = 0;
    uStack_7c = 0;
    local_84 = 0;
    uStack_6c = 0;
    local_74 = 0;
    uStack_5c = 0;
    local_64 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    local_c8 = 0;
    local_b0 = param_3;
    uStack_9c = uVar3;
    uVar2 = ma_sound_init_ex(param_1,&local_c8,param_4);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


// ===== 00611514  ma_sound_group_init_ex =====

void ma_sound_group_init_ex(undefined8 param_1,long param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_3 == (void *)0x0) || (memset(param_3,0,0x3b0), param_2 == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    uStack_88 = *(undefined8 *)(param_2 + 0x38);
    uStack_78 = *(undefined8 *)(param_2 + 0x48);
    uStack_80 = *(undefined8 *)(param_2 + 0x40);
    local_c0 = 0;
    uStack_b8 = 0;
    uStack_68 = *(undefined8 *)(param_2 + 0x58);
    local_70 = *(undefined8 *)(param_2 + 0x50);
    uStack_58 = *(undefined8 *)(param_2 + 0x68);
    uStack_60 = *(undefined8 *)(param_2 + 0x60);
    uStack_48 = *(undefined8 *)(param_2 + 0x78);
    local_50 = *(undefined8 *)(param_2 + 0x70);
    uStack_a8 = *(undefined8 *)(param_2 + 0x18);
    uStack_98 = *(undefined8 *)(param_2 + 0x28);
    uStack_a0 = *(undefined8 *)(param_2 + 0x20);
    local_90 = *(ulong *)(param_2 + 0x30) | 0x4000;
    local_b0 = 0;
    uVar2 = ma_sound_init_ex(param_1,&local_c0,param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 006115cc  ma_sound_group_uninit =====

void ma_sound_group_uninit(long param_1)

{
  if (param_1 != 0) {
    ma_engine_node_uninit(param_1,*(long *)(param_1 + 0x168) + 0x4c8);
    return;
  }
  return;
}


// ===== 006115e0  ma_sound_group_get_engine =====

long ma_sound_group_get_engine(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x168);
  }
  return param_1;
}


// ===== 006115ec  ma_sound_group_start =====

int ma_sound_group_start(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  if (param_1 == 0) {
LAB_006116a4:
    iVar1 = -2;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x168);
    if (uVar2 != 0) {
      uVar2 = *(ulong *)(uVar2 + 0x1b8);
    }
    if ((((int)*(undefined8 *)(param_1 + 0x38) == 1) || (uVar2 < *(ulong *)(param_1 + 0x40))) ||
       (*(ulong *)(param_1 + 0x48) <= uVar2)) {
      if ((*(long *)(param_1 + 0x380) != 0) && ((int)*(undefined8 *)(param_1 + 0x390) != 0)) {
        plVar3 = *(long **)(param_1 + 0x380);
        if (plVar3 == (long *)0x0) goto LAB_006116a4;
        if (*(code **)(*plVar3 + 8) == (code *)0x0) {
          FUN_003410a0(0,param_1 + 0x390);
        }
        else {
          iVar1 = (**(code **)(*plVar3 + 8))(plVar3,plVar3[1]);
          if ((iVar1 != 0) && (iVar1 != -0x1d)) {
            return iVar1;
          }
          FUN_003410a0(0,param_1 + 0x390);
          if ((iVar1 != 0) && (iVar1 != -0x1d)) {
            return iVar1;
          }
        }
      }
      FUN_003410a0(0,param_1 + 0x38);
    }
    iVar1 = 0;
  }
  return iVar1;
}


// ===== 006116e0  ma_sound_group_stop =====

undefined8 ma_sound_group_stop(long param_1)

{
  if (param_1 != 0) {
    FUN_003410a0(1,param_1 + 0x38);
    return 0;
  }
  return 0xfffffffe;
}


// ===== 0061170c  ma_sound_group_set_volume =====

void ma_sound_group_set_volume(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  if (param_2 == 0) {
    return;
  }
  *(float *)(param_2 + 0x338) = param_1;
  if (*(int *)(param_2 + 0x174) == 0) {
    *(float *)(param_2 + 700) = param_1;
    return;
  }
  uVar1 = *(uint *)(param_2 + 0x308);
  uVar4 = (ulong)uVar1;
  uVar2 = *(uint *)(param_2 + 0x310);
  if (uVar1 != 0) {
    uVar6 = *(ulong *)(param_2 + 0x318);
    uVar8 = *(ulong *)(param_2 + 800);
    fVar14 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x30c));
    fVar14 = (float)uVar2 / fVar14;
    if ((uVar1 < 8) || ((uVar6 < uVar8 + uVar4 * 4 && (uVar8 < uVar6 + uVar4 * 4)))) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar4 & 0xfffffff8;
      puVar12 = (undefined8 *)(uVar6 + 0x10);
      puVar11 = (undefined8 *)(uVar8 + 0x10);
      uVar13 = uVar10;
      do {
        uVar19 = puVar12[-1];
        uVar16 = puVar12[-2];
        uVar27 = puVar12[1];
        uVar24 = *puVar12;
        uVar13 = uVar13 - 8;
        uVar22 = puVar11[-1];
        uVar21 = puVar11[-2];
        uVar30 = puVar11[1];
        uVar29 = *puVar11;
        puVar11[-1] = CONCAT44(param_1,param_1);
        puVar11[-2] = CONCAT44(param_1,param_1);
        puVar11[1] = CONCAT44(param_1,param_1);
        *puVar11 = CONCAT44(param_1,param_1);
        fVar15 = (float)uVar16;
        fVar17 = (float)((ulong)uVar16 >> 0x20);
        fVar18 = (float)uVar19;
        fVar20 = (float)((ulong)uVar19 >> 0x20);
        fVar23 = (float)uVar24;
        fVar25 = (float)((ulong)uVar24 >> 0x20);
        fVar26 = (float)uVar27;
        fVar28 = (float)((ulong)uVar27 >> 0x20);
        puVar12[-1] = CONCAT44(fVar20 + ((float)((ulong)uVar22 >> 0x20) - fVar20) * fVar14,
                               fVar18 + ((float)uVar22 - fVar18) * fVar14);
        puVar12[-2] = CONCAT44(fVar17 + ((float)((ulong)uVar21 >> 0x20) - fVar17) * fVar14,
                               fVar15 + ((float)uVar21 - fVar15) * fVar14);
        puVar12[1] = CONCAT44(fVar28 + ((float)((ulong)uVar30 >> 0x20) - fVar28) * fVar14,
                              fVar26 + ((float)uVar30 - fVar26) * fVar14);
        *puVar12 = CONCAT44(fVar25 + ((float)((ulong)uVar29 >> 0x20) - fVar25) * fVar14,
                            fVar23 + ((float)uVar29 - fVar23) * fVar14);
        puVar12 = puVar12 + 4;
        puVar11 = puVar11 + 4;
      } while (uVar13 != 0);
      if (uVar10 == uVar4) goto LAB_006117a4;
    }
    lVar5 = uVar4 - uVar10;
    pfVar7 = (float *)(uVar6 + uVar10 * 4);
    pfVar9 = (float *)(uVar8 + uVar10 * 4);
    do {
      lVar5 = lVar5 + -1;
      *pfVar7 = *pfVar7 + fVar14 * (*pfVar9 - *pfVar7);
      *pfVar9 = param_1;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (lVar5 != 0);
  }
LAB_006117a4:
  if (uVar2 == 0xffffffff) {
    uVar3 = *(undefined4 *)(param_2 + 0x30c);
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(param_2 + 0x310) = uVar3;
  return;
}


// ===== 00611820  ma_sound_group_get_volume =====

undefined4 ma_sound_group_get_volume(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x338);
  }
  return 0;
}


// ===== 0061183c  ma_sound_group_set_pan =====

void ma_sound_group_set_pan(undefined4 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_2 != 0) {
    fVar1 = (float)NEON_fminnm(param_1,0x3f800000);
    fVar2 = -1.0;
    if (-1.0 <= fVar1) {
      fVar2 = fVar1;
    }
    *(float *)(param_2 + 0x304) = fVar2;
  }
  return;
}


// ===== 0061185c  ma_sound_group_get_pan =====

undefined4 ma_sound_group_get_pan(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x304);
  }
  return 0;
}


// ===== 00611870  ma_sound_group_set_pan_mode =====

void ma_sound_group_set_pan_mode(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x300) = param_2;
  }
  return;
}


// ===== 0061187c  ma_sound_group_get_pan_mode =====

ulong ma_sound_group_get_pan_mode(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(param_1 + 0x300);
  }
  return param_1;
}


// ===== 00611888  ma_sound_group_set_pitch =====

void ma_sound_group_set_pitch(float param_1,long param_2)

{
  if ((param_2 != 0) && (0.0 < param_1)) {
    FUN_00341220(param_1,param_2 + 0x33c);
  }
  return;
}


// ===== 006118b4  ma_sound_group_get_pitch =====

undefined4 ma_sound_group_get_pitch(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x33c);
  }
  return 0;
}


// ===== 006118d0  ma_sound_group_set_spatialization_enabled =====

void ma_sound_group_set_spatialization_enabled(long param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_00341220(param_2 == 0,param_1 + 0x34c);
  }
  return;
}


// ===== 006118f8  ma_sound_group_is_spatialization_enabled =====

ulong ma_sound_group_is_spatialization_enabled(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)((int)*(undefined8 *)(param_1 + 0x34c) == 0);
  }
  return param_1;
}


// ===== 00611910  ma_sound_group_set_pinned_listener_index =====

void ma_sound_group_set_pinned_listener_index(long param_1,uint param_2)

{
  if (((param_1 != 0) && (*(long *)(param_1 + 0x168) != 0)) &&
     (param_2 < *(uint *)(*(long *)(param_1 + 0x168) + 0x304))) {
    FUN_00341220(param_2,param_1 + 0x350);
  }
  return;
}


// ===== 00611948  ma_sound_group_get_pinned_listener_index =====

undefined8 ma_sound_group_get_pinned_listener_index(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x350);
  }
  return 0xff;
}


// ===== 00611960  ma_sound_group_get_listener_index =====

void ma_sound_group_get_listener_index(void)

{
  (*(code *)PTR_ma_sound_get_listener_index_00681d08)();
  return;
}


// ===== 00611964  ma_sound_group_get_direction_to_listener =====

void ma_sound_group_get_direction_to_listener(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_44;
  float fStack_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  fVar7 = -1.0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_3 == 0) || (lVar3 = *(long *)(param_3 + 0x168), lVar3 == 0)) {
    fVar5 = 0.0;
    fVar6 = 0.0;
  }
  else {
    uVar2 = ma_sound_get_listener_index(param_1,param_2,0xbf800000);
    ma_spatializer_get_relative_position_and_direction
              (param_3 + 0x230,lVar3 + (uVar2 & 0xffffffff) * 0x70 + 0x308,&local_44,0);
    fVar6 = 0.0;
    fVar7 = 0.0;
    uVar4 = NEON_fmadd(local_44,local_44,fStack_40 * fStack_40);
    fVar8 = (float)NEON_fmadd(local_3c,local_3c,uVar4);
    fVar5 = 0.0;
    if (fVar8 != 0.0) {
      fVar7 = 1.0 / SQRT(fVar8);
      fVar5 = -(local_44 * fVar7);
      fVar6 = -(fStack_40 * fVar7);
      fVar7 = -(local_3c * fVar7);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar5,fVar6,fVar7);
}


// ===== 00611a2c  ma_sound_group_set_position =====

void ma_sound_group_set_position
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = FUN_00341150(1,(undefined4 *)(param_4 + 0x284));
    while (iVar1 != 0) {
      do {
      } while (*(int *)(param_4 + 0x284) == 1);
      iVar1 = FUN_00341150(1,param_4 + 0x284);
    }
    *(undefined4 *)(param_4 + 0x278) = param_1;
    *(undefined4 *)(param_4 + 0x27c) = param_2;
    *(undefined4 *)(param_4 + 0x280) = param_3;
    *(undefined4 *)(param_4 + 0x284) = 0;
  }
  return;
}


// ===== 00611aa8  ma_sound_group_get_position =====

undefined4 ma_sound_group_get_position(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 0x284));
  while (iVar1 != 0) {
    do {
    } while (*(int *)(param_1 + 0x284) == 1);
    iVar1 = FUN_00341150(1,param_1 + 0x284);
  }
  *(undefined4 *)(param_1 + 0x284) = 0;
  return *(undefined4 *)(param_1 + 0x278);
}


// ===== 00611b18  ma_sound_group_set_direction =====

void ma_sound_group_set_direction
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = FUN_00341150(1,(undefined4 *)(param_4 + 0x294));
    while (iVar1 != 0) {
      do {
      } while (*(int *)(param_4 + 0x294) == 1);
      iVar1 = FUN_00341150(1,param_4 + 0x294);
    }
    *(undefined4 *)(param_4 + 0x288) = param_1;
    *(undefined4 *)(param_4 + 0x28c) = param_2;
    *(undefined4 *)(param_4 + 0x290) = param_3;
    *(undefined4 *)(param_4 + 0x294) = 0;
  }
  return;
}


// ===== 00611b94  ma_sound_group_get_direction =====

undefined4 ma_sound_group_get_direction(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 0x294));
  while (iVar1 != 0) {
    do {
    } while (*(int *)(param_1 + 0x294) == 1);
    iVar1 = FUN_00341150(1,param_1 + 0x294);
  }
  *(undefined4 *)(param_1 + 0x294) = 0;
  return *(undefined4 *)(param_1 + 0x288);
}


// ===== 00611c04  ma_sound_group_set_velocity =====

void ma_sound_group_set_velocity
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = FUN_00341150(1,(undefined4 *)(param_4 + 0x2a4));
    while (iVar1 != 0) {
      do {
      } while (*(int *)(param_4 + 0x2a4) == 1);
      iVar1 = FUN_00341150(1,param_4 + 0x2a4);
    }
    *(undefined4 *)(param_4 + 0x298) = param_1;
    *(undefined4 *)(param_4 + 0x29c) = param_2;
    *(undefined4 *)(param_4 + 0x2a0) = param_3;
    *(undefined4 *)(param_4 + 0x2a4) = 0;
  }
  return;
}


// ===== 00611c80  ma_sound_group_get_velocity =====

undefined4 ma_sound_group_get_velocity(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00341150(1,(undefined4 *)(param_1 + 0x2a4));
  while (iVar1 != 0) {
    do {
    } while (*(int *)(param_1 + 0x2a4) == 1);
    iVar1 = FUN_00341150(1,param_1 + 0x2a4);
  }
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  return *(undefined4 *)(param_1 + 0x298);
}


// ===== 00611cf0  ma_sound_group_set_attenuation_model =====

void ma_sound_group_set_attenuation_model(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_003410a0(param_2,param_1 + 0x240);
  }
  return;
}


// ===== 00611d14  ma_sound_group_get_attenuation_model =====

long ma_sound_group_get_attenuation_model(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x240);
  }
  return param_1;
}


// ===== 00611d24  ma_sound_group_set_positioning =====

void ma_sound_group_set_positioning(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_003410a0(param_2,param_1 + 0x244);
  }
  return;
}


// ===== 00611d48  ma_sound_group_get_positioning =====

long ma_sound_group_get_positioning(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x244);
  }
  return param_1;
}


// ===== 00611d58  ma_sound_group_set_rolloff =====

void ma_sound_group_set_rolloff(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x25c);
  }
  return;
}


// ===== 00611d7c  ma_sound_group_get_rolloff =====

undefined4 ma_sound_group_get_rolloff(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x25c);
  }
  return 0;
}


// ===== 00611d98  ma_sound_group_set_min_gain =====

void ma_sound_group_set_min_gain(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x24c);
  }
  return;
}


// ===== 00611dbc  ma_sound_group_get_min_gain =====

undefined4 ma_sound_group_get_min_gain(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x24c);
  }
  return 0;
}


// ===== 00611dd8  ma_sound_group_set_max_gain =====

void ma_sound_group_set_max_gain(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x250);
  }
  return;
}


// ===== 00611dfc  ma_sound_group_get_max_gain =====

undefined4 ma_sound_group_get_max_gain(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x250);
  }
  return 0;
}


// ===== 00611e18  ma_sound_group_set_min_distance =====

void ma_sound_group_set_min_distance(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x254);
  }
  return;
}


// ===== 00611e3c  ma_sound_group_get_min_distance =====

undefined4 ma_sound_group_get_min_distance(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x254);
  }
  return 0;
}


// ===== 00611e58  ma_sound_group_set_max_distance =====

void ma_sound_group_set_max_distance(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 600);
  }
  return;
}


// ===== 00611e7c  ma_sound_group_get_max_distance =====

undefined4 ma_sound_group_get_max_distance(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 600);
  }
  return 0;
}


// ===== 00611e98  ma_sound_group_set_cone =====

void ma_sound_group_set_cone(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  if (param_4 != 0) {
    FUN_003410a0(param_1,param_4 + 0x260);
    FUN_003410a0(param_2,param_4 + 0x264);
    FUN_003410a0(param_3,param_4 + 0x268);
  }
  return;
}


// ===== 00611ef0  ma_sound_group_get_cone =====

void ma_sound_group_get_cone
               (long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_1 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = (int)*(undefined8 *)(param_1 + 0x260);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = (int)*(undefined8 *)(param_1 + 0x264);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (int)*(undefined8 *)(param_1 + 0x268);
    }
  }
  return;
}


// ===== 00611f40  ma_sound_group_set_doppler_factor =====

void ma_sound_group_set_doppler_factor(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x26c);
  }
  return;
}


// ===== 00611f64  ma_sound_group_get_doppler_factor =====

undefined4 ma_sound_group_get_doppler_factor(long param_1)

{
  if (param_1 != 0) {
    return (int)*(undefined8 *)(param_1 + 0x26c);
  }
  return 0;
}


// ===== 00611f80  ma_sound_group_set_directional_attenuation_factor =====

void ma_sound_group_set_directional_attenuation_factor(undefined4 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_003410a0(param_1,param_2 + 0x270);
  }
  return;
}


// ===== 00611fa4  ma_sound_group_get_directional_attenuation_factor =====

undefined1  [16] ma_sound_group_get_directional_attenuation_factor(long param_1)

{
  undefined1 auVar1 [16];
  
  if (param_1 != 0) {
    auVar1._0_8_ = *(ulong *)(param_1 + 0x270) & 0xffffffff;
    auVar1._8_8_ = 0;
    return auVar1;
  }
  return ZEXT816(0x3f800000);
}


// ===== 00611fc0  ma_sound_group_set_fade_in_pcm_frames =====

void ma_sound_group_set_fade_in_pcm_frames
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    *(undefined4 *)(param_3 + 0x358) = param_1;
    *(undefined4 *)(param_3 + 0x35c) = param_2;
    *(undefined8 *)(param_3 + 0x360) = param_4;
    *(undefined8 *)(param_3 + 0x368) = 0xffffffffffffffff;
  }
  return;
}


// ===== 00611ff4  ma_sound_group_set_fade_in_milliseconds =====

void ma_sound_group_set_fade_in_milliseconds
               (undefined4 param_1,undefined4 param_2,long param_3,long param_4)

{
  if (param_3 != 0) {
    *(undefined4 *)(param_3 + 0x358) = param_1;
    *(undefined4 *)(param_3 + 0x35c) = param_2;
    *(ulong *)(param_3 + 0x360) = ((ulong)*(uint *)(param_3 + 0x188) * param_4) / 1000;
    *(undefined8 *)(param_3 + 0x368) = 0xffffffffffffffff;
  }
  return;
}


// ===== 0061204c  ma_sound_group_get_current_fade_volume =====

float ma_sound_group_get_current_fade_volume(long param_1)

{
  ulong uVar1;
  
  if (param_1 == 0) {
    return -2.0;
  }
  uVar1 = *(ulong *)(param_1 + 0x1a0);
  if ((long)uVar1 < 0) {
    return 1.0;
  }
  if (uVar1 == 0) {
    return *(float *)(param_1 + 0x18c);
  }
  if (uVar1 < *(ulong *)(param_1 + 0x198)) {
    return *(float *)(param_1 + 0x18c) +
           ((float)(uVar1 & 0xffffffff) / (float)(*(ulong *)(param_1 + 0x198) & 0xffffffff)) *
           (*(float *)(param_1 + 400) - *(float *)(param_1 + 0x18c));
  }
  return *(float *)(param_1 + 400);
}


// ===== 006120ac  ma_sound_group_set_start_time_in_pcm_frames =====

void ma_sound_group_set_start_time_in_pcm_frames(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_00341070(param_2,param_1 + 0x40);
  }
  return;
}


// ===== 006120d0  ma_sound_group_set_start_time_in_milliseconds =====

void ma_sound_group_set_start_time_in_milliseconds(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x168);
    if (uVar1 != 0) {
      uVar1 = (ulong)*(uint *)(uVar1 + 0x300);
    }
    FUN_00341070((uVar1 * param_2) / 1000,param_1 + 0x40);
  }
  return;
}


// ===== 0061211c  ma_sound_group_set_stop_time_in_pcm_frames =====

void ma_sound_group_set_stop_time_in_pcm_frames(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_00341070(param_2,param_1 + 0x48);
  }
  return;
}


// ===== 00612140  ma_sound_group_set_stop_time_in_milliseconds =====

void ma_sound_group_set_stop_time_in_milliseconds(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x168);
    if (uVar1 != 0) {
      uVar1 = (ulong)*(uint *)(uVar1 + 0x300);
    }
    FUN_00341070((uVar1 * param_2) / 1000,param_1 + 0x48);
  }
  return;
}


// ===== 0061218c  ma_sound_group_is_playing =====

ulong ma_sound_group_is_playing(ulong param_1)

{
  ulong uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x168);
    if (uVar1 != 0) {
      uVar1 = *(ulong *)(uVar1 + 0x1b8);
    }
    if ((int)*(undefined8 *)(param_1 + 0x38) == 1) {
      return 0;
    }
    if (uVar1 < *(ulong *)(param_1 + 0x40)) {
      return 0;
    }
    param_1 = (ulong)(uVar1 < *(ulong *)(param_1 + 0x48));
  }
  return param_1;
}


// ===== 006121e4  ma_sound_group_get_time_in_pcm_frames =====

long ma_sound_group_get_time_in_pcm_frames(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x50);
  }
  return param_1;
}


// ===== 006121f4  ma_dr_wav_version =====

void ma_dr_wav_version(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0xd;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0x12;
  }
  return;
}


// ===== 00612218  ma_dr_wav_version_string =====

char * ma_dr_wav_version_string(void)

{
  return "0.13.18";
}


// ===== 00612224  ma_dr_wav_fmt_get_format =====

ushort * ma_dr_wav_fmt_get_format(ushort *param_1)

{
  ushort *puVar1;
  
  puVar1 = param_1;
  if ((param_1 != (ushort *)0x0) && (puVar1 = (ushort *)(ulong)*param_1, *param_1 == 0xfffe)) {
    puVar1 = (ushort *)(ulong)param_1[0xc];
  }
  return puVar1;
}


// ===== 00612244  ma_dr_wav_bytes_to_u16 =====

undefined2 ma_dr_wav_bytes_to_u16(undefined2 *param_1)

{
  return *param_1;
}


// ===== 0061224c  ma_dr_wav_init_ex =====

undefined8
ma_dr_wav_init_ex(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                 undefined8 param_6,undefined4 param_7,long *param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (((param_1 == (long *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    return 0;
  }
  param_1[0x31] = 0;
  *param_1 = param_2;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[2] = param_3;
  param_1[3] = param_5;
  if (param_8 == (long *)0x0) {
    param_1[5] = (long)malloc;
    param_1[6] = (long)realloc;
    param_1[7] = (long)free;
  }
  else {
    lVar2 = param_8[1];
    lVar1 = param_8[2];
    lVar3 = param_8[3];
    param_1[4] = *param_8;
    param_1[5] = lVar2;
    param_1[6] = lVar1;
    param_1[7] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    if (lVar2 == 0 && lVar1 == 0) {
      return 0;
    }
  }
  uVar4 = FUN_005dcfc4(param_1,param_4,param_6,param_7);
  return uVar4;
}


// ===== 00612314  ma_dr_wav_init_with_metadata =====

undefined8
ma_dr_wav_init_with_metadata
          (long *param_1,long param_2,long param_3,long param_4,uint param_5,long *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (((param_1 == (long *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    return 0;
  }
  param_1[0x31] = 0;
  *param_1 = param_2;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[2] = param_3;
  param_1[3] = param_4;
  if (param_6 == (long *)0x0) {
    param_1[5] = (long)malloc;
    param_1[6] = (long)realloc;
    param_1[7] = (long)free;
  }
  else {
    lVar2 = param_6[1];
    lVar1 = param_6[2];
    lVar3 = param_6[3];
    param_1[4] = *param_6;
    param_1[5] = lVar2;
    param_1[6] = lVar1;
    param_1[7] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    if (lVar2 == 0 && lVar1 == 0) {
      return 0;
    }
  }
  uVar4 = FUN_005dcfc4(param_1,0,0,param_5 | 2);
  return uVar4;
}


// ===== 006123dc  ma_dr_wav_take_ownership_of_metadata =====

undefined8 ma_dr_wav_take_ownership_of_metadata(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return uVar1;
}


// ===== 006123f0  ma_dr_wav_init_write =====

undefined8
ma_dr_wav_init_write
          (undefined8 *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  
  if ((((param_1 == (undefined8 *)0x0) || (param_3 == 0)) || (param_4 == 0)) ||
     (((iVar7 = *(int *)(param_2 + 4), iVar7 == 2 || (iVar7 == 0x11)) || (iVar7 == 0xfffe)))) {
    return 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  if (param_6 == (undefined8 *)0x0) {
    param_1[5] = malloc;
    param_1[6] = realloc;
    param_1[7] = free;
  }
  else {
    lVar5 = param_6[1];
    lVar4 = param_6[2];
    lVar6 = param_6[3];
    param_1[4] = *param_6;
    param_1[5] = lVar5;
    param_1[6] = lVar4;
    param_1[7] = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    if (lVar5 == 0 && lVar4 == 0) {
      return 0;
    }
  }
  uVar1 = *(undefined4 *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8);
  iVar7 = *(int *)(param_2 + 0xc);
  iVar3 = *(int *)(param_2 + 0x10);
  *(undefined2 *)((long)param_1 + 0x54) = 0;
  *(short *)((long)param_1 + 0x46) = (short)iVar2;
  uVar8 = iVar3 * iVar2;
  *(short *)((long)param_1 + 0x44) = (short)uVar1;
  *(short *)((long)param_1 + 0x52) = (short)iVar3;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(short *)(param_1 + 10) = (short)(uVar8 >> 3);
  *(int *)(param_1 + 9) = iVar7;
  *(uint *)((long)param_1 + 0x4c) = uVar8 * iVar7 >> 3;
  uVar9 = FUN_00605a0c(param_1,param_2,0);
  return uVar9;
}


// ===== 006124e4  ma_dr_wav_init_write_sequential =====

undefined8
ma_dr_wav_init_write_sequential
          (undefined8 *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
          undefined8 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  
  if ((((param_1 == (undefined8 *)0x0) || (param_4 == 0)) ||
      (iVar7 = *(int *)(param_2 + 4), iVar7 == 2)) || ((iVar7 == 0x11 || (iVar7 == 0xfffe)))) {
    return 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = param_4;
  param_1[3] = param_5;
  if (param_6 == (undefined8 *)0x0) {
    param_1[5] = malloc;
    param_1[6] = realloc;
    param_1[7] = free;
  }
  else {
    lVar5 = param_6[1];
    lVar4 = param_6[2];
    lVar6 = param_6[3];
    param_1[4] = *param_6;
    param_1[5] = lVar5;
    param_1[6] = lVar4;
    param_1[7] = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    if (lVar5 == 0 && lVar4 == 0) {
      return 0;
    }
  }
  uVar1 = *(undefined4 *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8);
  iVar7 = *(int *)(param_2 + 0xc);
  iVar3 = *(int *)(param_2 + 0x10);
  *(undefined2 *)((long)param_1 + 0x54) = 0;
  *(short *)((long)param_1 + 0x46) = (short)iVar2;
  uVar8 = iVar3 * iVar2;
  *(short *)((long)param_1 + 0x52) = (short)iVar3;
  *(short *)((long)param_1 + 0x44) = (short)uVar1;
  *(short *)(param_1 + 10) = (short)(uVar8 >> 3);
  *(undefined4 *)(param_1 + 0x15) = 1;
  *(int *)(param_1 + 9) = iVar7;
  *(uint *)((long)param_1 + 0x4c) = uVar8 * iVar7 >> 3;
  uVar9 = FUN_00605a0c();
  return uVar9;
}


// ===== 006125d4  ma_dr_wav_init_write_sequential_pcm_frames =====

undefined8 ma_dr_wav_init_write_sequential_pcm_frames(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = ma_dr_wav_init_write_sequential(param_1,param_2,(ulong)*(uint *)(param_2 + 8) * param_3)
    ;
    return uVar1;
  }
  return 0;
}


// ===== 006125ec  ma_dr_wav_init_write_with_metadata =====

undefined8
ma_dr_wav_init_write_with_metadata
          (undefined8 *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 *param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  
  if ((((param_1 == (undefined8 *)0x0) || (param_3 == 0)) || (param_4 == 0)) ||
     (((iVar5 = *(int *)(param_2 + 4), iVar5 == 2 || (iVar5 == 0x11)) || (iVar5 == 0xfffe)))) {
    return 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  if (param_6 == (undefined8 *)0x0) {
    param_1[5] = malloc;
    param_1[6] = realloc;
    param_1[7] = free;
  }
  else {
    lVar3 = param_6[1];
    lVar2 = param_6[2];
    lVar4 = param_6[3];
    param_1[4] = *param_6;
    param_1[5] = lVar3;
    param_1[6] = lVar2;
    param_1[7] = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
    if (lVar3 == 0 && lVar2 == 0) {
      return 0;
    }
  }
  uVar1 = *(undefined4 *)(param_2 + 4);
  iVar5 = *(int *)(param_2 + 8);
  iVar6 = *(int *)(param_2 + 0x10);
  iVar7 = *(int *)(param_2 + 0xc);
  param_1[0x16] = param_7;
  uVar8 = iVar6 * iVar5;
  *(short *)((long)param_1 + 0x46) = (short)iVar5;
  *(short *)((long)param_1 + 0x52) = (short)iVar6;
  *(short *)((long)param_1 + 0x44) = (short)uVar1;
  *(undefined2 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(short *)(param_1 + 10) = (short)(uVar8 >> 3);
  *(undefined4 *)(param_1 + 0x17) = param_8;
  *(int *)(param_1 + 9) = iVar7;
  *(uint *)((long)param_1 + 0x4c) = uVar8 * iVar7 >> 3;
  uVar9 = FUN_00605a0c(param_1,param_2,0);
  return uVar9;
}


// ===== 006126ec  ma_dr_wav_target_write_size_bytes =====

long ma_dr_wav_target_write_size_bytes
               (int *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  iVar1 = *param_1;
  uVar3 = (ulong)((double)(long)((ulong)(uint)param_1[2] * param_2 * (ulong)(uint)param_1[4]) / 8.0)
  ;
  if (iVar1 == 3) {
    lVar2 = FUN_005e498c(0,param_3,param_4);
    uVar3 = uVar3 + lVar2 + (uVar3 & 1) + 0x48;
  }
  else {
    if (iVar1 == 2) {
      return uVar3 + (uVar3 & 7) + 0x68;
    }
    if (iVar1 != 0) {
      return 0;
    }
    lVar2 = FUN_005e498c(0,param_3,param_4);
    uVar3 = uVar3 + lVar2 + (uVar3 & 1) + 0x24;
  }
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  return uVar3 + 8;
}


// ===== 00612798  ma_dr_wav_init_file_ex =====

undefined8
ma_dr_wav_init_file_ex
          (undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  FILE *__stream;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  __stream = fopen(param_2,"rb");
  if (__stream == (FILE *)0x0) {
    return 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    param_1[0x31] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[0x22] = 0;
    param_1[0x21] = 0;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
    param_1[0x26] = 0;
    param_1[0x25] = 0;
    param_1[0x28] = 0;
    param_1[0x27] = 0;
    param_1[0x2a] = 0;
    param_1[0x29] = 0;
    param_1[0x2c] = 0;
    param_1[0x2b] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    *param_1 = FUN_005e3f24;
    param_1[0x20] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = FUN_005e3f34;
    param_1[3] = __stream;
    if (param_6 == (undefined8 *)0x0) {
      param_1[5] = malloc;
      param_1[6] = realloc;
      param_1[7] = free;
    }
    else {
      lVar2 = param_6[1];
      lVar1 = param_6[2];
      lVar3 = param_6[3];
      param_1[4] = *param_6;
      param_1[5] = lVar2;
      param_1[6] = lVar1;
      param_1[7] = lVar3;
      if ((lVar3 == 0) || (lVar2 == 0 && lVar1 == 0)) goto LAB_006128cc;
    }
    iVar4 = FUN_005dcfc4(param_1,param_3,param_4,param_5);
    if (iVar4 != 0) {
      return 1;
    }
  }
LAB_006128cc:
  fclose(__stream);
  return 0;
}


// ===== 006128e8  ma_dr_wav_init_file_with_metadata =====

undefined8
ma_dr_wav_init_file_with_metadata
          (undefined8 *param_1,char *param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  FILE *__stream;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  __stream = fopen(param_2,"rb");
  if (__stream == (FILE *)0x0) {
    return 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    param_1[0x31] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[0x22] = 0;
    param_1[0x21] = 0;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
    param_1[0x26] = 0;
    param_1[0x25] = 0;
    param_1[0x28] = 0;
    param_1[0x27] = 0;
    param_1[0x2a] = 0;
    param_1[0x29] = 0;
    param_1[0x2c] = 0;
    param_1[0x2b] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    *param_1 = FUN_005e3f24;
    param_1[0x20] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = FUN_005e3f34;
    param_1[3] = __stream;
    if (param_4 == (undefined8 *)0x0) {
      param_1[5] = malloc;
      param_1[6] = realloc;
      param_1[7] = free;
    }
    else {
      lVar2 = param_4[1];
      lVar1 = param_4[2];
      lVar3 = param_4[3];
      param_1[4] = *param_4;
      param_1[5] = lVar2;
      param_1[6] = lVar1;
      param_1[7] = lVar3;
      if ((lVar3 == 0) || (lVar2 == 0 && lVar1 == 0)) goto LAB_00612a10;
    }
    iVar4 = FUN_005dcfc4(param_1,0,0,param_3 | 2);
    if (iVar4 != 0) {
      return 1;
    }
  }
LAB_00612a10:
  fclose(__stream);
  return 0;
}


// ===== 00612a28  ma_dr_wav_init_file_with_metadata_w =====

void ma_dr_wav_init_file_with_metadata_w
               (undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  FILE *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  iVar5 = ma_wfopen(&local_50,param_2,&DAT_0025401c);
  if (iVar5 == 0) {
    if (param_1 != (undefined8 *)0x0) {
      param_1[0x31] = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[0x22] = 0;
      param_1[0x21] = 0;
      param_1[0x24] = 0;
      param_1[0x23] = 0;
      param_1[0x26] = 0;
      param_1[0x25] = 0;
      param_1[0x28] = 0;
      param_1[0x27] = 0;
      param_1[0x2a] = 0;
      param_1[0x29] = 0;
      param_1[0x2c] = 0;
      param_1[0x2b] = 0;
      param_1[0x2e] = 0;
      param_1[0x2d] = 0;
      param_1[0x30] = 0;
      param_1[0x2f] = 0;
      *param_1 = FUN_005e3f24;
      param_1[0x20] = 0;
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x13] = 0;
      param_1[0x12] = 0;
      param_1[0x11] = 0;
      param_1[0x10] = 0;
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[3] = 0;
      param_1[2] = FUN_005e3f34;
      param_1[3] = local_50;
      if (param_4 == (undefined8 *)0x0) {
        param_1[5] = malloc;
        param_1[6] = realloc;
        param_1[7] = free;
      }
      else {
        lVar2 = param_4[1];
        lVar1 = param_4[2];
        lVar3 = param_4[3];
        param_1[4] = *param_4;
        param_1[5] = lVar2;
        param_1[6] = lVar1;
        param_1[7] = lVar3;
        if ((lVar3 == 0) || (lVar2 == 0 && lVar1 == 0)) goto LAB_00612b4c;
      }
      iVar5 = FUN_005dcfc4(param_1,0,0,param_3 | 2);
      if (iVar5 != 0) {
        uVar6 = 1;
        goto LAB_00612b58;
      }
    }
LAB_00612b4c:
    fclose(local_50);
  }
  uVar6 = 0;
LAB_00612b58:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


// ===== 00612b84  ma_dr_wav_init_file_write =====

undefined8
ma_dr_wav_init_file_write(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FILE *pFVar1;
  undefined8 uVar2;
  
  if ((param_2 != (char *)0x0) && (pFVar1 = fopen(param_2,"wb"), pFVar1 != (FILE *)0x0)) {
    uVar2 = FUN_00612bf8(param_1,pFVar1,param_3,0,0,param_4);
    return uVar2;
  }
  return 0;
}


// ===== 00612bf8  FUN_00612bf8 =====

undefined8
FUN_00612bf8(undefined8 *param_1,FILE *param_2,long param_3,undefined8 param_4,undefined4 param_5,
            undefined8 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  
  if ((((param_1 != (undefined8 *)0x0) && (iVar8 = *(int *)(param_3 + 4), iVar8 != 2)) &&
      (iVar8 != 0x11)) && (iVar8 != 0xfffe)) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x20] = 0;
    param_1[0x23] = 0;
    param_1[0x22] = 0;
    param_1[0x25] = 0;
    param_1[0x24] = 0;
    param_1[0x27] = 0;
    param_1[0x26] = 0;
    param_1[0x29] = 0;
    param_1[0x28] = 0;
    param_1[0x2b] = 0;
    param_1[0x2a] = 0;
    param_1[0x2d] = 0;
    param_1[0x2c] = 0;
    param_1[0x2f] = 0;
    param_1[0x2e] = 0;
    param_1[0x31] = 0;
    param_1[0x30] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[1] = FUN_005e5ec8;
    param_1[2] = FUN_005e3f34;
    param_1[3] = param_2;
    if (param_6 == (undefined8 *)0x0) {
      param_1[5] = malloc;
      param_1[6] = realloc;
      param_1[7] = free;
    }
    else {
      lVar5 = param_6[1];
      lVar4 = param_6[2];
      lVar6 = param_6[3];
      param_1[4] = *param_6;
      param_1[5] = lVar5;
      param_1[6] = lVar4;
      param_1[7] = lVar6;
      if ((lVar6 == 0) || (lVar5 == 0 && lVar4 == 0)) goto LAB_00612c28;
    }
    uVar1 = *(undefined4 *)(param_3 + 4);
    iVar2 = *(int *)(param_3 + 8);
    iVar8 = *(int *)(param_3 + 0xc);
    iVar3 = *(int *)(param_3 + 0x10);
    *(short *)((long)param_1 + 0x46) = (short)iVar2;
    uVar7 = iVar3 * iVar2;
    *(short *)((long)param_1 + 0x52) = (short)iVar3;
    *(short *)((long)param_1 + 0x44) = (short)uVar1;
    *(undefined2 *)((long)param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x15) = param_5;
    *(short *)(param_1 + 10) = (short)(uVar7 >> 3);
    *(int *)(param_1 + 9) = iVar8;
    *(uint *)((long)param_1 + 0x4c) = uVar7 * iVar8 >> 3;
    iVar8 = FUN_00605a0c(param_1,param_3,param_4);
    if (iVar8 != 0) {
      return 1;
    }
  }
LAB_00612c28:
  fclose(param_2);
  return 0;
}


// ===== 00612d28  ma_dr_wav_init_file_write_sequential =====

undefined8
ma_dr_wav_init_file_write_sequential
          (undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          )

{
  FILE *pFVar1;
  undefined8 uVar2;
  
  if ((param_2 != (char *)0x0) && (pFVar1 = fopen(param_2,"wb"), pFVar1 != (FILE *)0x0)) {
    uVar2 = FUN_00612bf8(param_1,pFVar1,param_3,param_4,1,param_5);
    return uVar2;
  }
  return 0;
}


// ===== 00612da0  ma_dr_wav_init_file_write_sequential_pcm_frames =====

undefined8
ma_dr_wav_init_file_write_sequential_pcm_frames
          (undefined8 param_1,char *param_2,long param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  FILE *pFVar2;
  undefined8 uVar3;
  
  if ((param_3 != 0) && (param_2 != (char *)0x0)) {
    uVar1 = *(uint *)(param_3 + 8);
    pFVar2 = fopen(param_2,"wb");
    if (pFVar2 != (FILE *)0x0) {
      uVar3 = FUN_00612bf8(param_1,pFVar2,param_3,(ulong)uVar1 * param_4,1,param_5);
      return uVar3;
    }
  }
  return 0;
}


// ===== 00612e2c  ma_dr_wav_init_file_write_w =====

void ma_dr_wav_init_file_write_w
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = ma_wfopen(&local_40,param_2,&DAT_00254058);
  if (iVar2 == 0) {
    uVar3 = FUN_00612bf8(param_1,local_40,param_3,0,0,param_4);
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00612eb8  ma_dr_wav_init_file_write_sequential_w =====

void ma_dr_wav_init_file_write_sequential_w
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = ma_wfopen(&local_50,param_2,&DAT_00254058,param_5);
  if (iVar2 == 0) {
    uVar3 = FUN_00612bf8(param_1,local_50,param_3,param_4,1,param_5);
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00612f54  ma_dr_wav_init_file_write_sequential_pcm_frames_w =====

void ma_dr_wav_init_file_write_sequential_pcm_frames_w
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 8);
    iVar3 = ma_wfopen(&local_50,param_2,&DAT_00254058,param_5);
    if (iVar3 == 0) {
      uVar4 = FUN_00612bf8(param_1,local_50,param_3,(ulong)uVar1 * param_4,1,param_5);
      goto LAB_00612fcc;
    }
  }
  uVar4 = 0;
LAB_00612fcc:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 00612ff8  ma_dr_wav_init_memory_ex =====

undefined8
ma_dr_wav_init_memory_ex
          (undefined8 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined4 param_6,undefined8 *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (((param_1 == (undefined8 *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    return 0;
  }
  param_1[0x31] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  *param_1 = FUN_005e451c;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = FUN_005e4574;
  param_1[3] = param_1;
  if (param_7 == (undefined8 *)0x0) {
    param_1[5] = malloc;
    param_1[6] = realloc;
    param_1[7] = free;
  }
  else {
    lVar2 = param_7[1];
    lVar1 = param_7[2];
    lVar3 = param_7[3];
    param_1[4] = *param_7;
    param_1[5] = lVar2;
    param_1[6] = lVar1;
    param_1[7] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    if (lVar2 == 0 && lVar1 == 0) {
      return 0;
    }
  }
  param_1[0x18] = param_2;
  param_1[0x19] = param_3;
  param_1[0x1a] = 0;
  uVar4 = FUN_005dcfc4(param_1,param_4,param_5,param_6);
  return uVar4;
}


// ===== 006130d8  ma_dr_wav_init_memory_with_metadata =====

undefined8
ma_dr_wav_init_memory_with_metadata
          (undefined8 *param_1,long param_2,long param_3,uint param_4,undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (((param_1 == (undefined8 *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    return 0;
  }
  param_1[0x31] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  *param_1 = FUN_005e451c;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = FUN_005e4574;
  param_1[3] = param_1;
  if (param_5 == (undefined8 *)0x0) {
    param_1[5] = malloc;
    param_1[6] = realloc;
    param_1[7] = free;
  }
  else {
    lVar2 = param_5[1];
    lVar1 = param_5[2];
    lVar3 = param_5[3];
    param_1[4] = *param_5;
    param_1[5] = lVar2;
    param_1[6] = lVar1;
    param_1[7] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    if (lVar2 == 0 && lVar1 == 0) {
      return 0;
    }
  }
  param_1[0x18] = param_2;
  param_1[0x19] = param_3;
  param_1[0x1a] = 0;
  uVar4 = FUN_005dcfc4(param_1,0,0,param_4 | 2);
  return uVar4;
}


// ===== 006131c0  ma_dr_wav_init_memory_write =====

void ma_dr_wav_init_memory_write(void)

{
  FUN_006131d0();
  return;
}


// ===== 006131d0  FUN_006131d0 =====

undefined8
FUN_006131d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
            undefined8 param_5,undefined4 param_6,undefined8 *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  
  if ((param_2 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
    *param_2 = 0;
    *param_3 = 0;
    if ((param_1 != (undefined8 *)0x0) &&
       (((iVar4 = *(int *)(param_4 + 4), iVar4 != 2 && (iVar4 != 0x11)) && (iVar4 != 0xfffe)))) {
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[0xf] = 0;
      param_1[0xe] = 0;
      param_1[0x11] = 0;
      param_1[0x10] = 0;
      param_1[0x13] = 0;
      param_1[0x12] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      param_1[0x21] = 0;
      param_1[0x20] = 0;
      param_1[0x23] = 0;
      param_1[0x22] = 0;
      param_1[0x25] = 0;
      param_1[0x24] = 0;
      param_1[0x27] = 0;
      param_1[0x26] = 0;
      param_1[0x29] = 0;
      param_1[0x28] = 0;
      param_1[0x2b] = 0;
      param_1[0x2a] = 0;
      param_1[0x2d] = 0;
      param_1[0x2c] = 0;
      param_1[0x2f] = 0;
      param_1[0x2e] = 0;
      param_1[0x31] = 0;
      param_1[0x30] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[1] = FUN_006132f4;
      param_1[2] = FUN_00613434;
      param_1[3] = param_1;
      if (param_7 == (undefined8 *)0x0) {
        param_1[5] = malloc;
        param_1[6] = realloc;
        param_1[7] = free;
      }
      else {
        lVar2 = param_7[1];
        lVar1 = param_7[2];
        lVar3 = param_7[3];
        param_1[4] = *param_7;
        param_1[5] = lVar2;
        param_1[6] = lVar1;
        param_1[7] = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        if (lVar2 == 0 && lVar1 == 0) {
          return 0;
        }
      }
      iVar4 = *(int *)(param_4 + 8);
      iVar5 = *(int *)(param_4 + 0x10);
      uVar6 = *(undefined4 *)(param_4 + 4);
      iVar7 = *(int *)(param_4 + 0xc);
      param_1[0x1b] = param_2;
      uVar8 = iVar5 * iVar4;
      *(short *)((long)param_1 + 0x44) = (short)uVar6;
      *(short *)((long)param_1 + 0x46) = (short)iVar4;
      param_1[0x1c] = param_3;
      param_1[0x1d] = 0;
      *(undefined2 *)((long)param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x15) = param_6;
      *(short *)(param_1 + 10) = (short)(uVar8 >> 3);
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      *(short *)((long)param_1 + 0x52) = (short)iVar5;
      *(int *)(param_1 + 9) = iVar7;
      *(uint *)((long)param_1 + 0x4c) = uVar8 * iVar7 >> 3;
      uVar9 = FUN_00605a0c(param_1,param_4,param_5);
      return uVar9;
    }
  }
  return 0;
}


// ===== 006132f4  FUN_006132f4 =====

ulong FUN_006132f4(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  size_t __n;
  void *__src;
  void *__dest;
  long lVar4;
  ulong uVar5;
  
  __n = *(size_t *)(param_1 + 0xf0);
  lVar4 = *(long *)(param_1 + 0xf8);
  if (__n - lVar4 < param_3) {
    lVar2 = 0x100;
    if (__n != 0) {
      lVar2 = __n << 1;
    }
    __src = (void *)**(undefined8 **)(param_1 + 0xd8);
    lVar3 = lVar4 + param_3;
    if (param_3 <= (ulong)(lVar2 - lVar4)) {
      lVar3 = lVar2;
    }
    if (*(code **)(param_1 + 0x30) == (code *)0x0) {
      if (*(code **)(param_1 + 0x28) == (code *)0x0) {
        return 0;
      }
      if (*(long *)(param_1 + 0x38) == 0) {
        return 0;
      }
      __dest = (void *)(**(code **)(param_1 + 0x28))(lVar3,*(undefined8 *)(param_1 + 0x20));
      if (__dest == (void *)0x0) {
        return 0;
      }
      if (__src != (void *)0x0) {
        memcpy(__dest,__src,__n);
        (**(code **)(param_1 + 0x38))(__src,*(undefined8 *)(param_1 + 0x20));
      }
    }
    else {
      __dest = (void *)(**(code **)(param_1 + 0x30))(__src,lVar3,*(undefined8 *)(param_1 + 0x20));
      if (__dest == (void *)0x0) {
        return 0;
      }
    }
    lVar4 = *(long *)(param_1 + 0xf8);
    *(long *)(param_1 + 0xf0) = lVar3;
    **(long **)(param_1 + 0xd8) = (long)__dest;
  }
  memcpy((void *)(**(long **)(param_1 + 0xd8) + lVar4),param_2,param_3);
  uVar1 = *(long *)(param_1 + 0xf8) + param_3;
  *(ulong *)(param_1 + 0xf8) = uVar1;
  uVar5 = *(ulong *)(param_1 + 0xe8);
  if (*(ulong *)(param_1 + 0xe8) < uVar1) {
    *(ulong *)(param_1 + 0xe8) = uVar1;
    uVar5 = uVar1;
  }
  **(ulong **)(param_1 + 0xe0) = uVar5;
  return param_3;
}


// ===== 00613434  FUN_00613434 =====

undefined8 FUN_00613434(long param_1,uint param_2,int param_3)

{
  ulong uVar1;
  
  if (param_3 == 1) {
    uVar1 = *(ulong *)(param_1 + 0xf8);
    if ((int)param_2 < 1) {
      if (uVar1 < -param_2) {
        param_2 = -(int)uVar1;
      }
    }
    else if (*(ulong *)(param_1 + 0xe8) < uVar1 + param_2) {
      param_2 = (int)*(ulong *)(param_1 + 0xe8) - (int)uVar1;
    }
    uVar1 = uVar1 + (long)(int)param_2;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0xe8);
    if (param_2 <= uVar1) {
      uVar1 = (ulong)(int)param_2;
    }
  }
  *(ulong *)(param_1 + 0xf8) = uVar1;
  return 1;
}


// ===== 00613490  ma_dr_wav_init_memory_write_sequential =====

void ma_dr_wav_init_memory_write_sequential(void)

{
  FUN_006131d0();
  return;
}


// ===== 0061349c  ma_dr_wav_init_memory_write_sequential_pcm_frames =====

undefined8 ma_dr_wav_init_memory_write_sequential_pcm_frames(void)

{
  undefined8 uVar1;
  long in_x3;
  
  if (in_x3 != 0) {
    uVar1 = FUN_006131d0();
    return uVar1;
  }
  return 0;
}


// ===== 006134bc  ma_dr_wav_free =====

void ma_dr_wav_free(void *param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    free(param_1);
    return;
  }
  if ((param_1 != (void *)0x0) && ((code *)param_2[3] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x006134d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2[3])(param_1,*param_2);
    return;
  }
  return;
}


// ===== 006134dc  ma_dr_wav_read_pcm_frames_le =====

ulong ma_dr_wav_read_pcm_frames_le(long param_1,ulong param_2)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (uVar1 = *(ushort *)(param_1 + 0x74), uVar1 == 2)) ||
     (uVar1 == 0x11)) {
    return 0;
  }
  uVar4 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x98);
  if (param_2 <= uVar4) {
    uVar4 = param_2;
  }
  if ((*(ushort *)(param_1 + 0x72) & 7) == 0) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x46) * (uint)*(ushort *)(param_1 + 0x72) >> 3;
  }
  else {
    uVar5 = (uint)*(ushort *)(param_1 + 0x50);
  }
  if ((uVar1 & 0xfffe) == 6) {
    if (uVar5 == 0) {
      return 0;
    }
    if (uVar5 != *(ushort *)(param_1 + 0x46)) {
      return 0;
    }
  }
  else if (uVar5 == 0) {
    return 0;
  }
  uVar6 = (ulong)uVar5;
  uVar4 = uVar4 * uVar6;
  if (uVar4 >> 0x20 == 0) {
    if (uVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = 0xffffffff / uVar5;
    }
    uVar4 = (ulong)(uVar2 * uVar5);
  }
  uVar3 = ma_dr_wav_read_raw(param_1,uVar4);
  uVar4 = 0;
  if (uVar6 != 0) {
    uVar4 = uVar3 / uVar6;
  }
  return uVar4;
}


// ===== 006135c0  ma_dr_wav_write_raw =====

long ma_dr_wav_write_raw(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar1 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x18),param_3,param_2);
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + lVar1;
  }
  return lVar1;
}


// ===== 00613614  ma_dr_wav_write_pcm_frames_le =====

ulong ma_dr_wav_write_pcm_frames_le(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar4 = (ulong)*(ushort *)(param_1 + 0x70);
    uVar5 = (ulong)*(ushort *)(param_1 + 0x72);
    uVar2 = uVar4 * param_2 * uVar5;
    if (uVar2 >> 0x23 == 0) {
      if (uVar2 < 8) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 >> 3;
        lVar6 = 0;
        do {
          lVar3 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x18),param_3,uVar2);
          *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + lVar3;
          if (lVar3 == 0) break;
          uVar2 = uVar2 - lVar3;
          lVar6 = lVar3 + lVar6;
          param_3 = param_3 + lVar3;
        } while (uVar2 != 0);
        uVar5 = (ulong)*(ushort *)(param_1 + 0x72);
        uVar4 = (ulong)*(ushort *)(param_1 + 0x70);
        uVar2 = lVar6 << 3;
      }
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar2 / uVar5;
      }
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar1 / uVar4;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ===== 006136cc  ma_dr_wav_write_pcm_frames_be =====

void ma_dr_wav_write_pcm_frames_be(long param_1,long param_2,void *param_3)

{
  ulong uVar1;
  size_t __n;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 local_1070;
  undefined1 auStack_1060 [4080];
  long local_70;
  
  lVar8 = tpidr_el0;
  uVar9 = 0;
  local_70 = *(long *)(lVar8 + 0x28);
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (void *)0x0)) {
    uVar2 = *(ushort *)(param_1 + 0x70);
    uVar3 = *(ushort *)(param_1 + 0x72);
    uVar9 = (ulong)uVar2 * param_2 * (ulong)uVar3;
    if (uVar9 >> 0x23 == 0) {
      if ((uVar3 & 7) == 0) {
        uVar17 = (uint)*(ushort *)(param_1 + 0x46) * (uint)uVar3 >> 3;
      }
      else {
        uVar17 = (uint)*(ushort *)(param_1 + 0x50);
      }
      if (((*(ushort *)(param_1 + 0x74) & 0xfffe) == 6) && (uVar17 != *(ushort *)(param_1 + 0x46)))
      {
        uVar17 = 0;
      }
      if (uVar2 <= uVar17) {
        if (uVar9 < 8) {
LAB_00613780:
          lVar18 = 0;
        }
        else {
          uVar6 = 0;
          if (uVar2 != 0) {
            uVar6 = uVar17 / uVar2;
          }
          uVar9 = uVar9 >> 3;
          lVar18 = 0;
          uVar17 = 0;
          if (uVar6 != 0) {
            uVar17 = 0x1000 / uVar6;
          }
          uVar19 = (ulong)uVar17;
          uVar7 = uVar19;
          if (uVar19 < 2) {
            uVar7 = 1;
          }
          uVar14 = uVar7 & 0x1ff8;
          uVar15 = uVar7 & 0x1ff0;
          uVar11 = uVar7 & 0x1ffc;
          do {
            __n = uVar9;
            if (uVar19 * uVar6 <= uVar9) {
              __n = uVar19 * uVar6;
            }
            memcpy(&local_1070,param_3,__n);
            if (uVar6 < 4) {
              pauVar13 = (undefined1 (*) [16])auStack_1060;
              uVar12 = uVar15;
              if (uVar6 == 2) {
                do {
                  uVar12 = uVar12 - 0x10;
                  auVar20 = NEON_rev16(pauVar13[-1],1);
                  auVar21 = NEON_rev16(*pauVar13,1);
                  *(long *)(pauVar13[-1] + 8) = auVar20._8_8_;
                  *(long *)pauVar13[-1] = auVar20._0_8_;
                  *(long *)(*pauVar13 + 8) = auVar21._8_8_;
                  *(long *)*pauVar13 = auVar21._0_8_;
                  pauVar13 = pauVar13 + 2;
                } while (uVar12 != 0);
                uVar12 = uVar15;
                if (uVar7 != uVar15) {
                  do {
                    lVar10 = uVar12 * 2;
                    uVar12 = uVar12 + 1;
                    uVar2 = *(ushort *)((long)&local_1070 + lVar10);
                    *(ushort *)((long)&local_1070 + lVar10) =
                         uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
                  } while (uVar12 < uVar19);
                }
              }
              else if (uVar6 == 3) {
                uVar12 = 0;
                puVar16 = (undefined1 *)((long)&local_1070 + 2);
                do {
                  uVar4 = puVar16[-2];
                  uVar12 = uVar12 + 1;
                  puVar16[-2] = *puVar16;
                  *puVar16 = uVar4;
                  puVar16 = puVar16 + 3;
                } while (uVar12 < uVar19);
              }
            }
            else {
              pauVar13 = (undefined1 (*) [16])auStack_1060;
              uVar12 = uVar11;
              if (uVar6 == 8) {
                do {
                  uVar12 = uVar12 - 4;
                  auVar20 = NEON_rev64(pauVar13[-1],1);
                  auVar21 = NEON_rev64(*pauVar13,1);
                  *(long *)(pauVar13[-1] + 8) = auVar20._8_8_;
                  *(long *)pauVar13[-1] = auVar20._0_8_;
                  *(long *)(*pauVar13 + 8) = auVar21._8_8_;
                  *(long *)*pauVar13 = auVar21._0_8_;
                  pauVar13 = pauVar13 + 2;
                } while (uVar12 != 0);
                uVar12 = uVar11;
                if (uVar7 != uVar11) {
                  do {
                    uVar1 = uVar12 + 1;
                    uVar5 = ((&local_1070)[uVar12] & 0xff00ff00ff00ff00) >> 8 |
                            ((&local_1070)[uVar12] & 0xff00ff00ff00ff) << 8;
                    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                    (&local_1070)[uVar12] = uVar5 >> 0x20 | uVar5 << 0x20;
                    uVar12 = uVar1;
                  } while (uVar1 < uVar19);
                }
              }
              else {
                uVar12 = uVar14;
                if (uVar6 == 4) {
                  do {
                    uVar12 = uVar12 - 8;
                    auVar20 = NEON_rev32(pauVar13[-1],1);
                    auVar21 = NEON_rev32(*pauVar13,1);
                    *(long *)(pauVar13[-1] + 8) = auVar20._8_8_;
                    *(long *)pauVar13[-1] = auVar20._0_8_;
                    *(long *)(*pauVar13 + 8) = auVar21._8_8_;
                    *(long *)*pauVar13 = auVar21._0_8_;
                    pauVar13 = pauVar13 + 2;
                  } while (uVar12 != 0);
                  uVar12 = uVar14;
                  if (uVar7 != uVar14) {
                    do {
                      lVar10 = uVar12 * 4;
                      uVar12 = uVar12 + 1;
                      uVar17 = *(uint *)((long)&local_1070 + lVar10);
                      uVar17 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
                      *(uint *)((long)&local_1070 + lVar10) = uVar17 >> 0x10 | uVar17 << 0x10;
                    } while (uVar12 < uVar19);
                  }
                }
              }
            }
            if (0x1000 < uVar6) goto LAB_00613780;
            lVar10 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x18),&local_1070,__n);
            *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + lVar10;
            if (lVar10 == 0) break;
            uVar9 = uVar9 - lVar10;
            lVar18 = lVar10 + lVar18;
            param_3 = (void *)((long)param_3 + lVar10);
          } while (uVar9 != 0);
        }
        uVar7 = 0;
        if ((ulong)*(ushort *)(param_1 + 0x72) != 0) {
          uVar7 = (ulong)(lVar18 << 3) / (ulong)*(ushort *)(param_1 + 0x72);
        }
        uVar9 = 0;
        if ((ulong)*(ushort *)(param_1 + 0x70) != 0) {
          uVar9 = uVar7 / *(ushort *)(param_1 + 0x70);
        }
        goto LAB_00613798;
      }
    }
    uVar9 = 0;
  }
LAB_00613798:
  if (*(long *)(lVar8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


// ===== 006139bc  ma_dr_wav_write_pcm_frames =====

ulong ma_dr_wav_write_pcm_frames(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar4 = (ulong)*(ushort *)(param_1 + 0x70);
    uVar5 = (ulong)*(ushort *)(param_1 + 0x72);
    uVar2 = uVar4 * param_2 * uVar5;
    if (uVar2 >> 0x23 == 0) {
      if (uVar2 < 8) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 >> 3;
        lVar6 = 0;
        do {
          lVar3 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x18),param_3,uVar2);
          *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + lVar3;
          if (lVar3 == 0) break;
          uVar2 = uVar2 - lVar3;
          lVar6 = lVar3 + lVar6;
          param_3 = param_3 + lVar3;
        } while (uVar2 != 0);
        uVar5 = (ulong)*(ushort *)(param_1 + 0x72);
        uVar4 = (ulong)*(ushort *)(param_1 + 0x70);
        uVar2 = lVar6 << 3;
      }
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar2 / uVar5;
      }
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar1 / uVar4;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ===== 00613a74  ma_dr_wav_read_pcm_frames_s16le =====

void ma_dr_wav_read_pcm_frames_s16le(void)

{
  (*(code *)PTR_ma_dr_wav_read_pcm_frames_s16_00681c00)();
  return;
}


// ===== 00613a78  ma_dr_wav_read_pcm_frames_s16be =====

void ma_dr_wav_read_pcm_frames_s16be(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 (*pauVar4) [16];
  ushort *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  lVar1 = ma_dr_wav_read_pcm_frames_s16();
  if ((param_3 != 0) && (uVar2 = lVar1 * (ulong)*(ushort *)(param_1 + 0x70), uVar2 != 0)) {
    if (uVar2 < 0x10) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2 & 0xfffffffffffffff0;
      pauVar4 = (undefined1 (*) [16])(param_3 + 0x10);
      uVar6 = uVar3;
      do {
        uVar6 = uVar6 - 0x10;
        auVar7 = NEON_rev16(pauVar4[-1],1);
        auVar8 = NEON_rev16(*pauVar4,1);
        *(long *)(pauVar4[-1] + 8) = auVar7._8_8_;
        *(long *)pauVar4[-1] = auVar7._0_8_;
        *(long *)(*pauVar4 + 8) = auVar8._8_8_;
        *(long *)*pauVar4 = auVar8._0_8_;
        pauVar4 = pauVar4 + 2;
      } while (uVar6 != 0);
      if (uVar2 - uVar3 == 0) {
        return;
      }
    }
    lVar1 = uVar2 - uVar3;
    puVar5 = (ushort *)(param_3 + uVar3 * 2);
    do {
      lVar1 = lVar1 + -1;
      *puVar5 = *puVar5 >> 8 | (ushort)((*puVar5 & 0xff00ff) << 8);
      puVar5 = puVar5 + 1;
    } while (lVar1 != 0);
  }
  return;
}


// ===== 00613b0c  ma_dr_wav_u8_to_s16 =====

void ma_dr_wav_u8_to_s16(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  ushort *puVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_3 == 0) {
    return;
  }
  if ((param_3 < 8) || ((param_1 < param_2 + param_3 && (param_2 < param_1 + param_3 * 2)))) {
    uVar1 = 0;
  }
  else {
    if (param_3 < 0x20) {
      uVar3 = 0;
    }
    else {
      uVar1 = param_3 & 0xffffffffffffffe0;
      puVar7 = (undefined8 *)(param_2 + 0x10);
      puVar5 = (ulong *)(param_1 + 0x20);
      uVar3 = uVar1;
      do {
        uVar9 = puVar7[-1];
        uVar8 = puVar7[-2];
        uVar11 = puVar7[1];
        uVar10 = *puVar7;
        uVar3 = uVar3 - 0x20;
        puVar7 = puVar7 + 4;
        puVar5[-3] = CONCAT17((char)((ulong)uVar8 >> 0x38),
                              (uint7)(CONCAT15((char)((ulong)uVar8 >> 0x30),
                                               (uint5)(CONCAT13((char)((ulong)uVar8 >> 0x28),
                                                                (uint3)(byte)((byte)((ulong)uVar8 >>
                                                                                    0x20) ^ 0x80) <<
                                                                8) ^ 0x80000000)) ^ 0x800000000000))
                     ^ 0x8000000000000000;
        puVar5[-4] = CONCAT17((char)((ulong)uVar8 >> 0x18),
                              (uint7)(CONCAT15((char)((ulong)uVar8 >> 0x10),
                                               (uint5)(CONCAT13((char)((ulong)uVar8 >> 8),
                                                                (uint3)(byte)((byte)uVar8 ^ 0x80) <<
                                                                8) ^ 0x80000000)) ^ 0x800000000000))
                     ^ 0x8000000000000000;
        puVar5[-1] = CONCAT17((char)((ulong)uVar9 >> 0x38),
                              (uint7)(CONCAT15((char)((ulong)uVar9 >> 0x30),
                                               (uint5)(CONCAT13((char)((ulong)uVar9 >> 0x28),
                                                                (uint3)(byte)((byte)((ulong)uVar9 >>
                                                                                    0x20) ^ 0x80) <<
                                                                8) ^ 0x80000000)) ^ 0x800000000000))
                     ^ 0x8000000000000000;
        puVar5[-2] = CONCAT17((char)((ulong)uVar9 >> 0x18),
                              (uint7)(CONCAT15((char)((ulong)uVar9 >> 0x10),
                                               (uint5)(CONCAT13((char)((ulong)uVar9 >> 8),
                                                                (uint3)(byte)((byte)uVar9 ^ 0x80) <<
                                                                8) ^ 0x80000000)) ^ 0x800000000000))
                     ^ 0x8000000000000000;
        puVar5[1] = CONCAT17((char)((ulong)uVar10 >> 0x38),
                             (uint7)(CONCAT15((char)((ulong)uVar10 >> 0x30),
                                              (uint5)(CONCAT13((char)((ulong)uVar10 >> 0x28),
                                                               (uint3)(byte)((byte)((ulong)uVar10 >>
                                                                                   0x20) ^ 0x80) <<
                                                               8) ^ 0x80000000)) ^ 0x800000000000))
                    ^ 0x8000000000000000;
        *puVar5 = CONCAT17((char)((ulong)uVar10 >> 0x18),
                           (uint7)(CONCAT15((char)((ulong)uVar10 >> 0x10),
                                            (uint5)(CONCAT13((char)((ulong)uVar10 >> 8),
                                                             (uint3)(byte)((byte)uVar10 ^ 0x80) << 8
                                                            ) ^ 0x80000000)) ^ 0x800000000000)) ^
                  0x8000000000000000;
        puVar5[3] = CONCAT17((char)((ulong)uVar11 >> 0x38),
                             (uint7)(CONCAT15((char)((ulong)uVar11 >> 0x30),
                                              (uint5)(CONCAT13((char)((ulong)uVar11 >> 0x28),
                                                               (uint3)(byte)((byte)((ulong)uVar11 >>
                                                                                   0x20) ^ 0x80) <<
                                                               8) ^ 0x80000000)) ^ 0x800000000000))
                    ^ 0x8000000000000000;
        puVar5[2] = CONCAT17((char)((ulong)uVar11 >> 0x18),
                             (uint7)(CONCAT15((char)((ulong)uVar11 >> 0x10),
                                              (uint5)(CONCAT13((char)((ulong)uVar11 >> 8),
                                                               (uint3)(byte)((byte)uVar11 ^ 0x80) <<
                                                               8) ^ 0x80000000)) ^ 0x800000000000))
                    ^ 0x8000000000000000;
        puVar5 = puVar5 + 8;
      } while (uVar3 != 0);
      if (uVar1 == param_3) {
        return;
      }
      uVar3 = uVar1;
      if ((param_3 & 0x18) == 0) goto LAB_00613b34;
    }
    uVar1 = param_3 & 0xfffffffffffffff8;
    lVar6 = uVar3 - uVar1;
    puVar5 = (ulong *)(param_1 + uVar3 * 2);
    puVar7 = (undefined8 *)(param_2 + uVar3);
    do {
      uVar8 = *puVar7;
      lVar6 = lVar6 + 8;
      puVar5[1] = CONCAT17((char)((ulong)uVar8 >> 0x38),
                           (uint7)(CONCAT15((char)((ulong)uVar8 >> 0x30),
                                            (uint5)(CONCAT13((char)((ulong)uVar8 >> 0x28),
                                                             (uint3)(byte)((byte)((ulong)uVar8 >>
                                                                                 0x20) ^ 0x80) << 8)
                                                   ^ 0x80000000)) ^ 0x800000000000)) ^
                  0x8000000000000000;
      *puVar5 = CONCAT17((char)((ulong)uVar8 >> 0x18),
                         (uint7)(CONCAT15((char)((ulong)uVar8 >> 0x10),
                                          (uint5)(CONCAT13((char)((ulong)uVar8 >> 8),
                                                           (uint3)(byte)((byte)uVar8 ^ 0x80) << 8) ^
                                                 0x80000000)) ^ 0x800000000000)) ^
                0x8000000000000000;
      puVar5 = puVar5 + 2;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
    if (uVar1 == param_3) {
      return;
    }
  }
LAB_00613b34:
  lVar6 = param_3 - uVar1;
  pbVar2 = (byte *)(param_2 + uVar1);
  puVar4 = (ushort *)(param_1 + uVar1 * 2);
  do {
    lVar6 = lVar6 + -1;
    *puVar4 = (ushort)*pbVar2 << 8 ^ 0x8000;
    pbVar2 = pbVar2 + 1;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0);
  return;
}


// ===== 00613c04  ma_dr_wav_s24_to_s16 =====

void ma_dr_wav_s24_to_s16(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 uVar8;
  ulong uVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  
  if (param_3 != 0) {
    if ((param_3 < 8) ||
       ((param_1 < (undefined8 *)(param_2 + param_3 * 3) &&
        (param_2 + 1U < (long)param_1 + param_3 * 2)))) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_3 & 0xfffffffffffffff8;
      puVar12 = (undefined1 *)(param_2 + 0xb);
      puVar14 = param_1;
      uVar15 = uVar9;
      do {
        uVar8 = *(undefined2 *)(puVar12 + -10);
        uVar15 = uVar15 - 8;
        uVar16 = puVar12[-7];
        uVar19 = puVar12[-6];
        uVar17 = puVar12[-4];
        uVar20 = puVar12[-3];
        uVar18 = puVar12[-1];
        uVar21 = *puVar12;
        puVar11 = (undefined2 *)(puVar12 + 2);
        puVar2 = puVar12 + 5;
        puVar3 = puVar12 + 6;
        puVar4 = puVar12 + 8;
        puVar5 = puVar12 + 9;
        puVar6 = puVar12 + 0xb;
        puVar7 = puVar12 + 0xc;
        puVar12 = puVar12 + 0x18;
        puVar14[1] = CONCAT17(*puVar7,CONCAT16(*puVar6,CONCAT15(*puVar5,CONCAT14(*puVar4,CONCAT13(*
                                                  puVar3,CONCAT12(*puVar2,*puVar11))))));
        *puVar14 = CONCAT17(uVar21,CONCAT16(uVar18,CONCAT15(uVar20,CONCAT14(uVar17,CONCAT13(uVar19,
                                                  CONCAT12(uVar16,uVar8))))));
        puVar14 = puVar14 + 2;
      } while (uVar15 != 0);
      if (uVar9 == param_3) {
        return;
      }
    }
    lVar10 = param_3 - uVar9;
    lVar13 = uVar9 * 3 + param_2 + 2;
    puVar11 = (undefined2 *)((long)param_1 + uVar9 * 2);
    do {
      puVar1 = (undefined2 *)(lVar13 + -1);
      lVar10 = lVar10 + -1;
      lVar13 = lVar13 + 3;
      *puVar11 = *puVar1;
      puVar11 = puVar11 + 1;
    } while (lVar10 != 0);
  }
  return;
}


// ===== 00613d1c  ma_dr_wav_s32_to_s16 =====

void ma_dr_wav_s32_to_s16(long param_1,long param_2,ulong param_3)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_3 != 0) {
    if (param_3 < 0x10) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_3 & 0xfffffffffffffff0;
      puVar6 = (undefined8 *)(param_1 + 0x10);
      puVar8 = (undefined8 *)(param_2 + 0x20);
      uVar9 = uVar4;
      do {
        uVar3 = puVar8[-3];
        uVar2 = puVar8[-4];
        uVar9 = uVar9 - 0x10;
        uVar13 = puVar8[1];
        uVar12 = *puVar8;
        uVar11 = puVar8[3];
        uVar10 = puVar8[2];
        puVar6[-1] = CONCAT26((short)((ulong)puVar8[-1] >> 0x30),
                              CONCAT24((short)((ulong)puVar8[-1] >> 0x10),
                                       CONCAT22((short)((ulong)puVar8[-2] >> 0x30),
                                                (short)((ulong)puVar8[-2] >> 0x10))));
        puVar6[-2] = CONCAT26((short)((ulong)uVar3 >> 0x30),
                              CONCAT24((short)((ulong)uVar3 >> 0x10),
                                       CONCAT22((short)((ulong)uVar2 >> 0x30),
                                                (short)((ulong)uVar2 >> 0x10))));
        puVar6[1] = CONCAT26((short)((ulong)uVar11 >> 0x30),
                             CONCAT24((short)((ulong)uVar11 >> 0x10),
                                      CONCAT22((short)((ulong)uVar10 >> 0x30),
                                               (short)((ulong)uVar10 >> 0x10))));
        *puVar6 = CONCAT26((short)((ulong)uVar13 >> 0x30),
                           CONCAT24((short)((ulong)uVar13 >> 0x10),
                                    CONCAT22((short)((ulong)uVar12 >> 0x30),
                                             (short)((ulong)uVar12 >> 0x10))));
        puVar6 = puVar6 + 4;
        puVar8 = puVar8 + 8;
      } while (uVar9 != 0);
      if (uVar4 == param_3) {
        return;
      }
    }
    param_2 = param_2 + uVar4 * 4;
    lVar5 = param_3 - uVar4;
    puVar7 = (undefined2 *)(param_1 + uVar4 * 2);
    do {
      puVar1 = (undefined2 *)(param_2 + 2);
      lVar5 = lVar5 + -1;
      param_2 = param_2 + 4;
      *puVar7 = *puVar1;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
  return;
}


// ===== 00613d8c  ma_dr_wav_f32_to_s16 =====

void ma_dr_wav_f32_to_s16(ulong *param_1,undefined1 (*param_2) [16],ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  ushort *puVar4;
  ulong *puVar5;
  float *pfVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [12];
  int iVar14;
  undefined1 auVar12 [16];
  int iVar15;
  int iVar17;
  undefined1 auVar16 [12];
  float fVar18;
  float fVar20;
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar27;
  undefined1 auVar13 [16];
  
  if (param_3 != 0) {
    if (param_3 < 8) {
      uVar1 = 0;
    }
    else {
      auVar8 = NEON_fmov(0xbf800000,4);
      auVar9 = NEON_fmov(0x3f800000,4);
      uVar1 = param_3 & 0xfffffffffffffff8;
      pauVar3 = param_2;
      puVar5 = param_1;
      uVar7 = uVar1;
      do {
        auVar12 = *pauVar3;
        auVar13 = pauVar3[1];
        uVar7 = uVar7 - 8;
        auVar19 = NEON_fcmgt(auVar12,auVar9,4);
        auVar23 = NEON_fcmgt(auVar13,auVar9,4);
        auVar24 = NEON_bsl(auVar23,auVar9,auVar13,1);
        auVar23 = NEON_bsl(auVar19,auVar9,auVar12,1);
        auVar19 = NEON_fcmgt(auVar8,auVar13,4);
        auVar12 = NEON_fcmgt(auVar8,auVar12,4);
        fVar22 = (auVar24._0_4_ + auVar9._0_4_) * 32767.5;
        fVar25 = (auVar24._4_4_ + auVar9._4_4_) * 32767.5;
        fVar26 = (auVar24._8_4_ + auVar9._8_4_) * 32767.5;
        fVar27 = (auVar24._12_4_ + auVar9._12_4_) * 32767.5;
        fVar18 = (auVar23._0_4_ + auVar9._0_4_) * 32767.5;
        fVar10 = (auVar23._4_4_ + auVar9._4_4_) * 32767.5;
        fVar20 = (auVar23._8_4_ + auVar9._8_4_) * 32767.5;
        fVar21 = (auVar23._12_4_ + auVar9._12_4_) * 32767.5;
        fVar18 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~auVar12[3],
                                 CONCAT12((byte)((uint)fVar18 >> 0x10) & ~auVar12[2],
                                          CONCAT11((byte)((uint)fVar18 >> 8) & ~auVar12[1],
                                                   SUB41(fVar18,0) & ~auVar12[0])));
        auVar11._0_8_ =
             CONCAT17((byte)((uint)fVar10 >> 0x18) & ~auVar12[7],
                      CONCAT16((byte)((uint)fVar10 >> 0x10) & ~auVar12[6],
                               CONCAT15((byte)((uint)fVar10 >> 8) & ~auVar12[5],
                                        CONCAT14(SUB41(fVar10,0) & ~auVar12[4],fVar18))));
        auVar11[8] = SUB41(fVar20,0) & ~auVar12[8];
        auVar11[9] = (byte)((uint)fVar20 >> 8) & ~auVar12[9];
        auVar11[10] = (byte)((uint)fVar20 >> 0x10) & ~auVar12[10];
        auVar11[0xb] = (byte)((uint)fVar20 >> 0x18) & ~auVar12[0xb];
        auVar13[0xc] = SUB41(fVar21,0) & ~auVar12[0xc];
        auVar13._0_12_ = auVar11;
        auVar13[0xd] = (byte)((uint)fVar21 >> 8) & ~auVar12[0xd];
        auVar13[0xe] = (byte)((uint)fVar21 >> 0x10) & ~auVar12[0xe];
        auVar13[0xf] = (byte)((uint)fVar21 >> 0x18) & ~auVar12[0xf];
        fVar10 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~auVar19[3],
                                 CONCAT12((byte)((uint)fVar22 >> 0x10) & ~auVar19[2],
                                          CONCAT11((byte)((uint)fVar22 >> 8) & ~auVar19[1],
                                                   SUB41(fVar22,0) & ~auVar19[0])));
        auVar16._0_8_ =
             CONCAT17((byte)((uint)fVar25 >> 0x18) & ~auVar19[7],
                      CONCAT16((byte)((uint)fVar25 >> 0x10) & ~auVar19[6],
                               CONCAT15((byte)((uint)fVar25 >> 8) & ~auVar19[5],
                                        CONCAT14(SUB41(fVar25,0) & ~auVar19[4],fVar10))));
        auVar16[8] = SUB41(fVar26,0) & ~auVar19[8];
        auVar16[9] = (byte)((uint)fVar26 >> 8) & ~auVar19[9];
        auVar16[10] = (byte)((uint)fVar26 >> 0x10) & ~auVar19[10];
        auVar16[0xb] = (byte)((uint)fVar26 >> 0x18) & ~auVar19[0xb];
        auVar23[0xc] = SUB41(fVar27,0) & ~auVar19[0xc];
        auVar23._0_12_ = auVar16;
        auVar23[0xd] = (byte)((uint)fVar27 >> 8) & ~auVar19[0xd];
        auVar23[0xe] = (byte)((uint)fVar27 >> 0x10) & ~auVar19[0xe];
        auVar23[0xf] = (byte)((uint)fVar27 >> 0x18) & ~auVar19[0xf];
        iVar15 = (int)fVar10;
        iVar17 = (int)(float)((ulong)auVar16._0_8_ >> 0x20);
        iVar14 = (int)(float)((ulong)auVar11._0_8_ >> 0x20);
        auVar12._0_8_ =
             CONCAT17((char)((uint)(int)auVar13._12_4_ >> 8),
                      CONCAT16((char)(int)auVar13._12_4_,
                               CONCAT15((char)((uint)(int)auVar11._8_4_ >> 8),
                                        CONCAT14((char)(int)auVar11._8_4_,
                                                 CONCAT13((char)((uint)iVar14 >> 8),
                                                          CONCAT12((char)iVar14,(short)(int)fVar18))
                                                )))) ^ 0x8000800080008000;
        auVar12[8] = (undefined1)iVar15;
        auVar12[9] = (byte)((uint)iVar15 >> 8) ^ 0x80;
        auVar12[10] = (undefined1)iVar17;
        auVar12[0xb] = (byte)((uint)iVar17 >> 8) ^ 0x80;
        auVar12[0xc] = (undefined1)(int)auVar16._8_4_;
        auVar12[0xd] = (byte)((uint)(int)auVar16._8_4_ >> 8) ^ 0x80;
        auVar12[0xe] = (undefined1)(int)auVar23._12_4_;
        auVar12[0xf] = (byte)((uint)(int)auVar23._12_4_ >> 8) ^ 0x80;
        puVar5[1] = auVar12._8_8_;
        *puVar5 = auVar12._0_8_;
        pauVar3 = pauVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar7 != 0);
      if (uVar1 == param_3) {
        return;
      }
    }
    lVar2 = param_3 - uVar1;
    puVar4 = (ushort *)((long)param_1 + uVar1 * 2);
    pfVar6 = (float *)(*param_2 + uVar1 * 4);
    do {
      fVar10 = *pfVar6;
      fVar18 = 1.0;
      if (fVar10 == 1.0 || fVar10 < 1.0 != NAN(fVar10)) {
        fVar18 = fVar10;
      }
      fVar20 = 0.0;
      if (-1.0 <= fVar10) {
        fVar20 = (fVar18 + 1.0) * 32767.5;
      }
      lVar2 = lVar2 + -1;
      *puVar4 = (ushort)(int)fVar20 ^ 0x8000;
      puVar4 = puVar4 + 1;
      pfVar6 = pfVar6 + 1;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 00613e78  ma_dr_wav_f64_to_s16 =====

void ma_dr_wav_f64_to_s16(ulong *param_1,undefined1 (*param_2) [16],ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  ushort *puVar4;
  ulong *puVar5;
  double *pdVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar10;
  
  if (param_3 != 0) {
    if (param_3 < 8) {
      uVar1 = 0;
    }
    else {
      auVar8 = NEON_fmov(0xbff0000000000000,8);
      auVar9 = NEON_fmov(0x3ff0000000000000,8);
      dVar10 = auVar9._8_8_;
      uVar1 = param_3 & 0xfffffffffffffff8;
      pauVar3 = param_2;
      puVar5 = param_1;
      uVar7 = uVar1;
      do {
        auVar13 = pauVar3[2];
        auVar12 = pauVar3[3];
        uVar7 = uVar7 - 8;
        auVar14 = *pauVar3;
        auVar15 = pauVar3[1];
        auVar17 = NEON_fcmgt(auVar12,auVar9,8);
        auVar26 = NEON_fcmgt(auVar13,auVar9,8);
        auVar20 = NEON_fcmgt(auVar14,auVar9,8);
        auVar23 = NEON_fcmgt(auVar15,auVar9,8);
        auVar18 = NEON_bsl(auVar17,auVar9,auVar12,1);
        auVar27 = NEON_bsl(auVar26,auVar9,auVar13,1);
        auVar12 = NEON_fcmgt(auVar8,auVar12,8);
        auVar26 = NEON_bsl(auVar23,auVar9,auVar15,1);
        auVar23 = NEON_bsl(auVar20,auVar9,auVar14,1);
        auVar17 = NEON_fcmgt(auVar8,auVar13,8);
        auVar20 = NEON_fcmgt(auVar8,auVar15,8);
        auVar15 = NEON_fcmgt(auVar8,auVar14,8);
        dVar11 = auVar9._0_8_;
        dVar16 = (auVar18._0_8_ + dVar11) * 32767.5;
        dVar19 = (auVar18._8_8_ + dVar10) * 32767.5;
        dVar25 = (auVar27._0_8_ + dVar11) * 32767.5;
        dVar28 = (auVar27._8_8_ + dVar10) * 32767.5;
        dVar22 = (auVar26._0_8_ + dVar11) * 32767.5;
        dVar24 = (auVar26._8_8_ + dVar10) * 32767.5;
        dVar11 = (auVar23._0_8_ + dVar11) * 32767.5;
        dVar21 = (auVar23._8_8_ + dVar10) * 32767.5;
        auVar13._0_8_ =
             (double)CONCAT17((byte)((ulong)dVar16 >> 0x38) & ~auVar12[7],
                              CONCAT16((byte)((ulong)dVar16 >> 0x30) & ~auVar12[6],
                                       CONCAT15((byte)((ulong)dVar16 >> 0x28) & ~auVar12[5],
                                                CONCAT14((byte)((ulong)dVar16 >> 0x20) & ~auVar12[4]
                                                         ,CONCAT13((byte)((ulong)dVar16 >> 0x18) &
                                                                   ~auVar12[3],
                                                                   CONCAT12((byte)((ulong)dVar16 >>
                                                                                  0x10) &
                                                                            ~auVar12[2],
                                                                            CONCAT11((byte)((ulong)
                                                  dVar16 >> 8) & ~auVar12[1],
                                                  SUB81(dVar16,0) & ~auVar12[0])))))));
        auVar13[8] = SUB81(dVar19,0) & ~auVar12[8];
        auVar13[9] = (byte)((ulong)dVar19 >> 8) & ~auVar12[9];
        auVar13[10] = (byte)((ulong)dVar19 >> 0x10) & ~auVar12[10];
        auVar13[0xb] = (byte)((ulong)dVar19 >> 0x18) & ~auVar12[0xb];
        auVar13[0xc] = (byte)((ulong)dVar19 >> 0x20) & ~auVar12[0xc];
        auVar13[0xd] = (byte)((ulong)dVar19 >> 0x28) & ~auVar12[0xd];
        auVar13[0xe] = (byte)((ulong)dVar19 >> 0x30) & ~auVar12[0xe];
        auVar13[0xf] = (byte)((ulong)dVar19 >> 0x38) & ~auVar12[0xf];
        auVar14._0_8_ =
             (double)CONCAT17((byte)((ulong)dVar25 >> 0x38) & ~auVar17[7],
                              CONCAT16((byte)((ulong)dVar25 >> 0x30) & ~auVar17[6],
                                       CONCAT15((byte)((ulong)dVar25 >> 0x28) & ~auVar17[5],
                                                CONCAT14((byte)((ulong)dVar25 >> 0x20) & ~auVar17[4]
                                                         ,CONCAT13((byte)((ulong)dVar25 >> 0x18) &
                                                                   ~auVar17[3],
                                                                   CONCAT12((byte)((ulong)dVar25 >>
                                                                                  0x10) &
                                                                            ~auVar17[2],
                                                                            CONCAT11((byte)((ulong)
                                                  dVar25 >> 8) & ~auVar17[1],
                                                  SUB81(dVar25,0) & ~auVar17[0])))))));
        auVar14[8] = SUB81(dVar28,0) & ~auVar17[8];
        auVar14[9] = (byte)((ulong)dVar28 >> 8) & ~auVar17[9];
        auVar14[10] = (byte)((ulong)dVar28 >> 0x10) & ~auVar17[10];
        auVar14[0xb] = (byte)((ulong)dVar28 >> 0x18) & ~auVar17[0xb];
        auVar14[0xc] = (byte)((ulong)dVar28 >> 0x20) & ~auVar17[0xc];
        auVar14[0xd] = (byte)((ulong)dVar28 >> 0x28) & ~auVar17[0xd];
        auVar14[0xe] = (byte)((ulong)dVar28 >> 0x30) & ~auVar17[0xe];
        auVar14[0xf] = (byte)((ulong)dVar28 >> 0x38) & ~auVar17[0xf];
        auVar17._0_8_ =
             (double)CONCAT17((byte)((ulong)dVar11 >> 0x38) & ~auVar15[7],
                              CONCAT16((byte)((ulong)dVar11 >> 0x30) & ~auVar15[6],
                                       CONCAT15((byte)((ulong)dVar11 >> 0x28) & ~auVar15[5],
                                                CONCAT14((byte)((ulong)dVar11 >> 0x20) & ~auVar15[4]
                                                         ,CONCAT13((byte)((ulong)dVar11 >> 0x18) &
                                                                   ~auVar15[3],
                                                                   CONCAT12((byte)((ulong)dVar11 >>
                                                                                  0x10) &
                                                                            ~auVar15[2],
                                                                            CONCAT11((byte)((ulong)
                                                  dVar11 >> 8) & ~auVar15[1],
                                                  SUB81(dVar11,0) & ~auVar15[0])))))));
        auVar17[8] = SUB81(dVar21,0) & ~auVar15[8];
        auVar17[9] = (byte)((ulong)dVar21 >> 8) & ~auVar15[9];
        auVar17[10] = (byte)((ulong)dVar21 >> 0x10) & ~auVar15[10];
        auVar17[0xb] = (byte)((ulong)dVar21 >> 0x18) & ~auVar15[0xb];
        auVar17[0xc] = (byte)((ulong)dVar21 >> 0x20) & ~auVar15[0xc];
        auVar17[0xd] = (byte)((ulong)dVar21 >> 0x28) & ~auVar15[0xd];
        auVar17[0xe] = (byte)((ulong)dVar21 >> 0x30) & ~auVar15[0xe];
        auVar17[0xf] = (byte)((ulong)dVar21 >> 0x38) & ~auVar15[0xf];
        auVar15._0_8_ =
             (double)CONCAT17((byte)((ulong)dVar22 >> 0x38) & ~auVar20[7],
                              CONCAT16((byte)((ulong)dVar22 >> 0x30) & ~auVar20[6],
                                       CONCAT15((byte)((ulong)dVar22 >> 0x28) & ~auVar20[5],
                                                CONCAT14((byte)((ulong)dVar22 >> 0x20) & ~auVar20[4]
                                                         ,CONCAT13((byte)((ulong)dVar22 >> 0x18) &
                                                                   ~auVar20[3],
                                                                   CONCAT12((byte)((ulong)dVar22 >>
                                                                                  0x10) &
                                                                            ~auVar20[2],
                                                                            CONCAT11((byte)((ulong)
                                                  dVar22 >> 8) & ~auVar20[1],
                                                  SUB81(dVar22,0) & ~auVar20[0])))))));
        auVar15[8] = SUB81(dVar24,0) & ~auVar20[8];
        auVar15[9] = (byte)((ulong)dVar24 >> 8) & ~auVar20[9];
        auVar15[10] = (byte)((ulong)dVar24 >> 0x10) & ~auVar20[10];
        auVar15[0xb] = (byte)((ulong)dVar24 >> 0x18) & ~auVar20[0xb];
        auVar15[0xc] = (byte)((ulong)dVar24 >> 0x20) & ~auVar20[0xc];
        auVar15[0xd] = (byte)((ulong)dVar24 >> 0x28) & ~auVar20[0xd];
        auVar15[0xe] = (byte)((ulong)dVar24 >> 0x30) & ~auVar20[0xe];
        auVar15[0xf] = (byte)((ulong)dVar24 >> 0x38) & ~auVar20[0xf];
        auVar12._0_8_ =
             CONCAT17((char)((ulong)(long)auVar15._8_8_ >> 8),
                      CONCAT16((char)(long)auVar15._8_8_,
                               CONCAT15((char)((ulong)(long)auVar15._0_8_ >> 8),
                                        CONCAT14((char)(long)auVar15._0_8_,
                                                 CONCAT13((char)((ulong)(long)auVar17._8_8_ >> 8),
                                                          CONCAT12((char)(long)auVar17._8_8_,
                                                                   (short)(long)auVar17._0_8_))))))
             ^ 0x8000800080008000;
        auVar12[8] = (undefined1)(long)auVar14._0_8_;
        auVar12[9] = (byte)((ulong)(long)auVar14._0_8_ >> 8) ^ 0x80;
        auVar12[10] = (undefined1)(long)auVar14._8_8_;
        auVar12[0xb] = (byte)((ulong)(long)auVar14._8_8_ >> 8) ^ 0x80;
        auVar12[0xc] = (undefined1)(long)auVar13._0_8_;
        auVar12[0xd] = (byte)((ulong)(long)auVar13._0_8_ >> 8) ^ 0x80;
        auVar12[0xe] = (undefined1)(long)auVar13._8_8_;
        auVar12[0xf] = (byte)((ulong)(long)auVar13._8_8_ >> 8) ^ 0x80;
        puVar5[1] = auVar12._8_8_;
        *puVar5 = auVar12._0_8_;
        pauVar3 = pauVar3 + 4;
        puVar5 = puVar5 + 2;
      } while (uVar7 != 0);
      if (uVar1 == param_3) {
        return;
      }
    }
    lVar2 = param_3 - uVar1;
    puVar4 = (ushort *)((long)param_1 + uVar1 * 2);
    pdVar6 = (double *)(*param_2 + uVar1 * 8);
    do {
      dVar11 = *pdVar6;
      dVar10 = 1.0;
      if (dVar11 == 1.0 || dVar11 < 1.0 != NAN(dVar11)) {
        dVar10 = dVar11;
      }
      dVar16 = 0.0;
      if (-1.0 <= dVar11) {
        dVar16 = (dVar10 + 1.0) * 32767.5;
      }
      lVar2 = lVar2 + -1;
      *puVar4 = (ushort)(int)dVar16 ^ 0x8000;
      puVar4 = puVar4 + 1;
      pdVar6 = pdVar6 + 1;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 00613fa8  ma_dr_wav_alaw_to_s16 =====

void ma_dr_wav_alaw_to_s16(undefined2 *param_1,byte *param_2,long param_3)

{
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      *param_1 = *(undefined2 *)(&DAT_0028261c + (ulong)*param_2 * 2);
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 00613fcc  ma_dr_wav_mulaw_to_s16 =====

void ma_dr_wav_mulaw_to_s16(undefined2 *param_1,byte *param_2,long param_3)

{
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      *param_1 = *(undefined2 *)(&DAT_0028281c + (ulong)*param_2 * 2);
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 00613ff0  ma_dr_wav_read_pcm_frames_f32le =====

void ma_dr_wav_read_pcm_frames_f32le(void)

{
  (*(code *)PTR_ma_dr_wav_read_pcm_frames_f32_00681bf8)();
  return;
}


// ===== 00613ff4  ma_dr_wav_read_pcm_frames_f32be =====

void ma_dr_wav_read_pcm_frames_f32be(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  uint *puVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar2 = ma_dr_wav_read_pcm_frames_f32();
  if ((param_3 != 0) && (uVar3 = lVar2 * (ulong)*(ushort *)(param_1 + 0x70), uVar3 != 0)) {
    if (uVar3 < 8) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar3 & 0xfffffffffffffff8;
      pauVar5 = (undefined1 (*) [16])(param_3 + 0x10);
      uVar7 = uVar4;
      do {
        uVar7 = uVar7 - 8;
        auVar8 = NEON_rev32(pauVar5[-1],1);
        auVar9 = NEON_rev32(*pauVar5,1);
        *(long *)(pauVar5[-1] + 8) = auVar8._8_8_;
        *(long *)pauVar5[-1] = auVar8._0_8_;
        *(long *)(*pauVar5 + 8) = auVar9._8_8_;
        *(long *)*pauVar5 = auVar9._0_8_;
        pauVar5 = pauVar5 + 2;
      } while (uVar7 != 0);
      if (uVar3 - uVar4 == 0) {
        return;
      }
    }
    lVar2 = uVar3 - uVar4;
    puVar6 = (uint *)(param_3 + uVar4 * 4);
    do {
      lVar2 = lVar2 + -1;
      uVar1 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
      *puVar6 = uVar1 >> 0x10 | uVar1 << 0x10;
      puVar6 = puVar6 + 1;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 00614084  ma_dr_wav_u8_to_f32 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_dr_wav_u8_to_f32(float *param_1,undefined1 (*param_2) [16],ulong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [16];
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar3 = _DAT_0024e3a0;
  auVar1 = _DAT_0024e210;
  uVar2 = _UNK_0024de8c;
  if (param_1 == (float *)0x0) {
    return;
  }
  if (param_2 == (undefined1 (*) [16])0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if ((param_3 < 8) ||
     ((param_1 < *param_2 + param_3 && (param_2 < (undefined1 (*) [16])(param_1 + param_3))))) {
    uVar4 = 0;
  }
  else {
    auVar12 = NEON_fmov(0xbf800000,4);
    fVar11 = auVar12._0_4_;
    fVar13 = auVar12._4_4_;
    fVar14 = auVar12._8_4_;
    fVar15 = auVar12._12_4_;
    if (param_3 < 0x10) {
      uVar6 = 0;
    }
    else {
      uVar4 = param_3 & 0xfffffffffffffff0;
      auVar12._8_4_ = _UNK_0024de88;
      auVar12._0_8_ = _DAT_0024de80;
      auVar16._8_4_ = _UNK_0024e4f8;
      auVar16._0_8_ = _DAT_0024e4f0;
      auVar16._12_4_ = _UNK_0024e4fc;
      pfVar9 = param_1;
      pauVar10 = param_2;
      uVar6 = uVar4;
      do {
        auVar17 = *pauVar10;
        uVar6 = uVar6 - 0x10;
        auVar12._12_4_ = uVar2;
        auVar18 = a64_TBL(ZEXT816(0),auVar17,auVar12);
        auVar19 = a64_TBL(ZEXT816(0),auVar17,auVar3);
        auVar20 = a64_TBL(ZEXT816(0),auVar17,auVar16);
        auVar17 = a64_TBL(ZEXT816(0),auVar17,auVar1);
        auVar18 = NEON_ucvtf(auVar18,4);
        auVar19 = NEON_ucvtf(auVar19,4);
        auVar20 = NEON_ucvtf(auVar20,4);
        auVar17 = NEON_ucvtf(auVar17,4);
        pfVar9[0xc] = auVar19._8_4_ * 0.007843138 + fVar14;
        pfVar9[0xd] = auVar19._12_4_ * 0.007843138 + fVar15;
        pfVar9[8] = auVar19._0_4_ * 0.007843138 + fVar11;
        pfVar9[9] = auVar19._4_4_ * 0.007843138 + fVar13;
        pfVar9[0x10] = auVar18._8_4_ * 0.007843138 + fVar14;
        pfVar9[0x11] = auVar18._12_4_ * 0.007843138 + fVar15;
        pfVar9[0xc] = auVar18._0_4_ * 0.007843138 + fVar11;
        pfVar9[0xd] = auVar18._4_4_ * 0.007843138 + fVar13;
        pfVar9[4] = auVar17._8_4_ * 0.007843138 + fVar14;
        pfVar9[5] = auVar17._12_4_ * 0.007843138 + fVar15;
        *pfVar9 = auVar17._0_4_ * 0.007843138 + fVar11;
        pfVar9[1] = auVar17._4_4_ * 0.007843138 + fVar13;
        pfVar9[8] = auVar20._8_4_ * 0.007843138 + fVar14;
        pfVar9[9] = auVar20._12_4_ * 0.007843138 + fVar15;
        pfVar9[4] = auVar20._0_4_ * 0.007843138 + fVar11;
        pfVar9[5] = auVar20._4_4_ * 0.007843138 + fVar13;
        pfVar9 = pfVar9 + 0x10;
        pauVar10 = pauVar10 + 1;
      } while (uVar6 != 0);
      if (uVar4 == param_3) {
        return;
      }
      uVar6 = uVar4;
      if (((uint)param_3 >> 3 & 1) == 0) {
        param_1 = param_1 + uVar4;
        goto LAB_006140b4;
      }
    }
    uVar2 = _UNK_0024e4fc;
    auVar3 = _DAT_0024e210;
    uVar4 = param_3 & 0xfffffffffffffff8;
    auVar1._8_4_ = _UNK_0024e4f8;
    auVar1._0_8_ = _DAT_0024e4f0;
    lVar7 = uVar6 - uVar4;
    puVar8 = (ulong *)(*param_2 + uVar6);
    pfVar9 = param_1 + uVar6;
    do {
      auVar17._0_8_ = *puVar8;
      auVar17._8_8_ = 0;
      lVar7 = lVar7 + 8;
      auVar1._12_4_ = uVar2;
      auVar16 = a64_TBL(ZEXT816(0),auVar17,auVar1);
      auVar12 = a64_TBL(ZEXT816(0),auVar17,auVar3);
      auVar16 = NEON_ucvtf(auVar16,4);
      auVar12 = NEON_ucvtf(auVar12,4);
      pfVar9[4] = auVar12._8_4_ * 0.007843138 + fVar14;
      pfVar9[5] = auVar12._12_4_ * 0.007843138 + fVar15;
      *pfVar9 = auVar12._0_4_ * 0.007843138 + fVar11;
      pfVar9[1] = auVar12._4_4_ * 0.007843138 + fVar13;
      pfVar9[8] = auVar16._8_4_ * 0.007843138 + fVar14;
      pfVar9[9] = auVar16._12_4_ * 0.007843138 + fVar15;
      pfVar9[4] = auVar16._0_4_ * 0.007843138 + fVar11;
      pfVar9[5] = auVar16._4_4_ * 0.007843138 + fVar13;
      puVar8 = puVar8 + 1;
      pfVar9 = pfVar9 + 8;
    } while (lVar7 != 0);
    if (uVar4 == param_3) {
      return;
    }
    param_1 = param_1 + uVar4;
  }
LAB_006140b4:
  lVar7 = param_3 - uVar4;
  pbVar5 = *param_2 + uVar4;
  do {
    lVar7 = lVar7 + -1;
    *param_1 = (float)*pbVar5 * 0.007843138 + -1.0;
    param_1 = param_1 + 1;
    pbVar5 = pbVar5 + 1;
  } while (lVar7 != 0);
  return;
}


// ===== 0061420c  ma_dr_wav_s16_to_f32 =====

void ma_dr_wav_s16_to_f32(float *param_1,long param_2,ulong param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short sVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  ulong uVar17;
  long lVar18;
  short *psVar19;
  float *pfVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  if (((param_1 != (float *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    if (param_3 < 0x10) {
      uVar17 = 0;
    }
    else {
      uVar17 = param_3 & 0xfffffffffffffff0;
      psVar19 = (short *)(param_2 + 0x10);
      pfVar20 = param_1 + 8;
      uVar21 = uVar17;
      do {
        psVar1 = psVar19 + -8;
        psVar2 = psVar19 + -7;
        psVar3 = psVar19 + -6;
        psVar4 = psVar19 + -5;
        psVar5 = psVar19 + -4;
        psVar6 = psVar19 + -3;
        psVar7 = psVar19 + -2;
        psVar8 = psVar19 + -1;
        sVar9 = *psVar19;
        psVar10 = psVar19 + 1;
        psVar11 = psVar19 + 2;
        psVar12 = psVar19 + 3;
        psVar13 = psVar19 + 4;
        psVar14 = psVar19 + 5;
        psVar15 = psVar19 + 6;
        psVar16 = psVar19 + 7;
        uVar21 = uVar21 - 0x10;
        psVar19 = psVar19 + 0x10;
        auVar24._0_4_ = (int)*psVar5;
        auVar24._4_4_ = (int)*psVar6;
        auVar24._8_4_ = (int)*psVar7;
        auVar24._12_4_ = (int)*psVar8;
        auVar22._0_4_ = (int)*psVar1;
        auVar22._4_4_ = (int)*psVar2;
        auVar22._8_4_ = (int)*psVar3;
        auVar22._12_4_ = (int)*psVar4;
        auVar25._0_4_ = (int)*psVar13;
        auVar25._4_4_ = (int)*psVar14;
        auVar25._8_4_ = (int)*psVar15;
        auVar25._12_4_ = (int)*psVar16;
        auVar23._0_4_ = (int)sVar9;
        auVar23._4_4_ = (int)*psVar10;
        auVar23._8_4_ = (int)*psVar11;
        auVar23._12_4_ = (int)*psVar12;
        auVar24 = NEON_scvtf(auVar24,4);
        auVar22 = NEON_scvtf(auVar22,4);
        auVar25 = NEON_scvtf(auVar25,4);
        auVar23 = NEON_scvtf(auVar23,4);
        pfVar20[-4] = auVar22._8_4_ * 3.0517578e-05;
        pfVar20[-3] = auVar22._12_4_ * 3.0517578e-05;
        pfVar20[-8] = auVar22._0_4_ * 3.0517578e-05;
        pfVar20[-7] = auVar22._4_4_ * 3.0517578e-05;
        *pfVar20 = auVar24._8_4_ * 3.0517578e-05;
        pfVar20[1] = auVar24._12_4_ * 3.0517578e-05;
        pfVar20[-4] = auVar24._0_4_ * 3.0517578e-05;
        pfVar20[-3] = auVar24._4_4_ * 3.0517578e-05;
        pfVar20[4] = auVar23._8_4_ * 3.0517578e-05;
        pfVar20[5] = auVar23._12_4_ * 3.0517578e-05;
        *pfVar20 = auVar23._0_4_ * 3.0517578e-05;
        pfVar20[1] = auVar23._4_4_ * 3.0517578e-05;
        pfVar20[8] = auVar25._8_4_ * 3.0517578e-05;
        pfVar20[9] = auVar25._12_4_ * 3.0517578e-05;
        pfVar20[4] = auVar25._0_4_ * 3.0517578e-05;
        pfVar20[5] = auVar25._4_4_ * 3.0517578e-05;
        pfVar20 = pfVar20 + 0x10;
      } while (uVar21 != 0);
      if (uVar17 == param_3) {
        return;
      }
      param_1 = param_1 + uVar17;
    }
    lVar18 = param_3 - uVar17;
    psVar19 = (short *)(param_2 + uVar17 * 2);
    do {
      lVar18 = lVar18 + -1;
      *param_1 = (float)(int)*psVar19 / 32768.0;
      param_1 = param_1 + 1;
      psVar19 = psVar19 + 1;
    } while (lVar18 != 0);
  }
  return;
}


// ===== 006142b4  ma_dr_wav_s24_to_f32 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_dr_wav_s24_to_f32(float *param_1,float *param_2,ulong param_3)

{
  uint3 uVar1;
  uint3 uVar2;
  uint3 uVar3;
  uint3 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  float *pfVar12;
  float *pfVar13;
  undefined1 auVar14 [12];
  undefined1 in_q3 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 in_q4 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  double in_d5;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar18 [16];
  undefined1 auVar30 [16];
  
  auVar24 = _DAT_0024e4f0;
  auVar6 = _DAT_0024e3a0;
  auVar15 = _DAT_0024e210;
  auVar5 = _DAT_0024de80;
  if (param_1 == (float *)0x0) {
    return;
  }
  if (param_2 == (float *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if ((param_3 < 8) ||
     ((param_1 < (float *)((long)param_2 + param_3 * 3) && (param_2 < param_1 + param_3)))) {
    uVar8 = 0;
  }
  else {
    if (param_3 < 0x10) {
      uVar10 = 0;
      auVar24 = in_q3;
      auVar15 = in_q4;
    }
    else {
      uVar8 = param_3 & 0xfffffffffffffff0;
      pfVar12 = param_1;
      pfVar13 = param_2;
      uVar10 = uVar8;
      do {
        auVar27[0] = *(undefined1 *)pfVar13;
        auVar35[0] = *(undefined1 *)((long)pfVar13 + 1);
        auVar37[0] = *(undefined1 *)((long)pfVar13 + 2);
        auVar27[1] = *(undefined1 *)((long)pfVar13 + 3);
        auVar35[1] = *(undefined1 *)(pfVar13 + 1);
        auVar37[1] = *(undefined1 *)((long)pfVar13 + 5);
        auVar27[2] = *(undefined1 *)((long)pfVar13 + 6);
        auVar35[2] = *(undefined1 *)((long)pfVar13 + 7);
        auVar37[2] = *(undefined1 *)(pfVar13 + 2);
        auVar27[3] = *(undefined1 *)((long)pfVar13 + 9);
        auVar35[3] = *(undefined1 *)((long)pfVar13 + 10);
        auVar37[3] = *(undefined1 *)((long)pfVar13 + 0xb);
        auVar27[4] = *(undefined1 *)(pfVar13 + 3);
        auVar35[4] = *(undefined1 *)((long)pfVar13 + 0xd);
        auVar37[4] = *(undefined1 *)((long)pfVar13 + 0xe);
        auVar27[5] = *(undefined1 *)((long)pfVar13 + 0xf);
        auVar35[5] = *(undefined1 *)(pfVar13 + 4);
        auVar37[5] = *(undefined1 *)((long)pfVar13 + 0x11);
        auVar27[6] = *(undefined1 *)((long)pfVar13 + 0x12);
        auVar35[6] = *(undefined1 *)((long)pfVar13 + 0x13);
        auVar37[6] = *(undefined1 *)(pfVar13 + 5);
        auVar27[7] = *(undefined1 *)((long)pfVar13 + 0x15);
        auVar35[7] = *(undefined1 *)((long)pfVar13 + 0x16);
        auVar37[7] = *(undefined1 *)((long)pfVar13 + 0x17);
        auVar27[8] = *(undefined1 *)(pfVar13 + 6);
        auVar35[8] = *(undefined1 *)((long)pfVar13 + 0x19);
        auVar37[8] = *(undefined1 *)((long)pfVar13 + 0x1a);
        auVar27[9] = *(undefined1 *)((long)pfVar13 + 0x1b);
        auVar35[9] = *(undefined1 *)(pfVar13 + 7);
        auVar37[9] = *(undefined1 *)((long)pfVar13 + 0x1d);
        auVar27[10] = *(undefined1 *)((long)pfVar13 + 0x1e);
        auVar35[10] = *(undefined1 *)((long)pfVar13 + 0x1f);
        auVar37[10] = *(undefined1 *)(pfVar13 + 8);
        auVar27[0xb] = *(undefined1 *)((long)pfVar13 + 0x21);
        auVar35[0xb] = *(undefined1 *)((long)pfVar13 + 0x22);
        auVar37[0xb] = *(undefined1 *)((long)pfVar13 + 0x23);
        auVar27[0xc] = *(undefined1 *)(pfVar13 + 9);
        auVar35[0xc] = *(undefined1 *)((long)pfVar13 + 0x25);
        auVar37[0xc] = *(undefined1 *)((long)pfVar13 + 0x26);
        auVar27[0xd] = *(undefined1 *)((long)pfVar13 + 0x27);
        auVar35[0xd] = *(undefined1 *)(pfVar13 + 10);
        auVar37[0xd] = *(undefined1 *)((long)pfVar13 + 0x29);
        auVar27[0xe] = *(undefined1 *)((long)pfVar13 + 0x2a);
        auVar35[0xe] = *(undefined1 *)((long)pfVar13 + 0x2b);
        auVar37[0xe] = *(undefined1 *)(pfVar13 + 0xb);
        auVar27[0xf] = *(undefined1 *)((long)pfVar13 + 0x2d);
        auVar35[0xf] = *(undefined1 *)((long)pfVar13 + 0x2e);
        auVar37[0xf] = *(undefined1 *)((long)pfVar13 + 0x2f);
        pfVar13 = pfVar13 + 0xc;
        uVar10 = uVar10 - 0x10;
        auVar31 = a64_TBL(ZEXT816(0),auVar27,auVar5);
        auVar32 = a64_TBL(ZEXT816(0),auVar35,auVar5);
        auVar36 = a64_TBL(ZEXT816(0),auVar27,auVar6);
        auVar38 = a64_TBL(ZEXT816(0),auVar35,auVar6);
        auVar39 = a64_TBL(ZEXT816(0),auVar27,auVar24);
        auVar41 = a64_TBL(ZEXT816(0),auVar27,auVar15);
        auVar42 = a64_TBL(ZEXT816(0),auVar35,auVar24);
        auVar35 = a64_TBL(ZEXT816(0),auVar35,auVar15);
        auVar43 = a64_TBL(ZEXT816(0),auVar37,auVar15);
        auVar44 = a64_TBL(ZEXT816(0),auVar37,auVar5);
        auVar45 = a64_TBL(ZEXT816(0),auVar37,auVar6);
        auVar27 = a64_TBL(ZEXT816(0),auVar37,auVar24);
        auVar28[9] = auVar31[8];
        auVar28[10] = auVar32[8] | auVar31[9];
        auVar30[0xd] = auVar31[0xc];
        auVar30[0xe] = auVar32[0xc] | auVar31[0xd];
        auVar23[9] = auVar36[8];
        auVar23[10] = auVar38[8] | auVar36[9];
        auVar34[0xd] = auVar36[0xc];
        auVar34[0xe] = auVar38[0xc] | auVar36[0xd];
        uVar1 = CONCAT12(auVar32[5] | auVar31[6] | auVar44[4],
                         CONCAT11(auVar32[4] | auVar31[5],auVar31[4]));
        auVar28._0_9_ = (unkuint9)uVar1 << 0x28;
        auVar28[0xb] = auVar32[9] | auVar31[10] | auVar44[8];
        auVar30[0xc] = 0;
        auVar30._0_12_ = auVar28;
        auVar30[0xf] = auVar32[0xd] | auVar31[0xe] | auVar44[0xc];
        uVar2 = CONCAT12(auVar38[5] | auVar36[6] | auVar45[4],
                         CONCAT11(auVar38[4] | auVar36[5],auVar36[4]));
        auVar23._0_9_ = (unkuint9)uVar2 << 0x28;
        auVar23[0xb] = auVar38[9] | auVar36[10] | auVar45[8];
        auVar34[0xc] = 0;
        auVar34._0_12_ = auVar23;
        auVar34[0xf] = auVar38[0xd] | auVar36[0xe] | auVar45[0xc];
        uVar3 = CONCAT12(auVar42[5] | auVar39[6] | auVar27[4],
                         CONCAT11(auVar42[4] | auVar39[5],auVar39[4]));
        auVar20._0_9_ = (unkuint9)uVar3 << 0x28;
        auVar20[9] = auVar39[8];
        auVar20[10] = auVar42[8] | auVar39[9];
        auVar20[0xb] = auVar42[9] | auVar39[10] | auVar27[8];
        auVar29[0xc] = 0;
        auVar29._0_12_ = auVar20;
        auVar29[0xd] = auVar39[0xc];
        auVar29[0xe] = auVar42[0xc] | auVar39[0xd];
        auVar29[0xf] = auVar42[0xd] | auVar39[0xe] | auVar27[0xc];
        uVar4 = CONCAT12(auVar35[5] | auVar41[6] | auVar43[4],
                         CONCAT11(auVar35[4] | auVar41[5],auVar41[4]));
        auVar26._0_9_ = (unkuint9)uVar4 << 0x28;
        auVar26[9] = auVar41[8];
        auVar26[10] = auVar35[8] | auVar41[9];
        auVar26[0xb] = auVar35[9] | auVar41[10] | auVar43[8];
        auVar40[0xc] = 0;
        auVar40._0_12_ = auVar26;
        auVar40[0xd] = auVar41[0xc];
        auVar40[0xe] = auVar35[0xc] | auVar41[0xd];
        auVar40[0xf] = auVar35[0xd] | auVar41[0xe] | auVar43[0xc];
        auVar33._0_8_ =
             (long)(int)CONCAT12(auVar32[1] | auVar31[2] | auVar44[0],
                                 CONCAT11(auVar32[0] | auVar31[1],auVar31[0]));
        auVar33._8_8_ = (long)(int)((long)((ulong)uVar1 << 0x28) >> 0x28);
        auVar44._0_8_ = (long)(auVar28._8_4_ >> 8);
        auVar44._8_8_ = (long)(auVar30._12_4_ >> 8);
        auVar38._0_8_ =
             (long)(int)CONCAT12(auVar38[1] | auVar36[2] | auVar45[0],
                                 CONCAT11(auVar38[0] | auVar36[1],auVar36[0]));
        auVar38._8_8_ = (long)(int)((long)((ulong)uVar2 << 0x28) >> 0x28);
        auVar32._0_8_ = (long)(auVar23._8_4_ >> 8);
        auVar32._8_8_ = (long)(auVar34._12_4_ >> 8);
        auVar39._0_8_ =
             (long)(int)CONCAT12(auVar42[1] | auVar39[2] | auVar27[0],
                                 CONCAT11(auVar42[0] | auVar39[1],auVar39[0]));
        auVar39._8_8_ = (long)(int)((long)((ulong)uVar3 << 0x28) >> 0x28);
        auVar41._0_8_ =
             (long)(int)CONCAT12(auVar35[1] | auVar41[2] | auVar43[0],
                                 CONCAT11(auVar35[0] | auVar41[1],auVar41[0]));
        auVar41._8_8_ = (long)(int)((long)((ulong)uVar4 << 0x28) >> 0x28);
        auVar31._0_8_ = (long)(auVar20._8_4_ >> 8);
        auVar31._8_8_ = (long)(auVar29._12_4_ >> 8);
        auVar34 = NEON_scvtf(auVar33,8);
        auVar36._0_8_ = (long)(auVar26._8_4_ >> 8);
        auVar36._8_8_ = (long)(auVar40._12_4_ >> 8);
        auVar35 = NEON_scvtf(auVar44,8);
        auVar37 = NEON_scvtf(auVar38,8);
        auVar29 = NEON_scvtf(auVar32,8);
        auVar32 = NEON_scvtf(auVar39,8);
        auVar40 = NEON_scvtf(auVar41,8);
        auVar27 = NEON_scvtf(auVar31,8);
        auVar31 = NEON_scvtf(auVar36,8);
        in_d5 = auVar27._8_8_ * 1.1920928955078125e-07;
        *(ulong *)(pfVar12 + 10) =
             CONCAT44((float)(auVar29._8_8_ * 1.1920928955078125e-07),
                      (float)(auVar29._0_8_ * 1.1920928955078125e-07));
        *(ulong *)(pfVar12 + 8) =
             CONCAT44((float)(auVar37._8_8_ * 1.1920928955078125e-07),
                      (float)(auVar37._0_8_ * 1.1920928955078125e-07));
        *(ulong *)(pfVar12 + 0xe) =
             CONCAT44((float)(auVar35._8_8_ * 1.1920928955078125e-07),
                      (float)(auVar35._0_8_ * 1.1920928955078125e-07));
        *(ulong *)(pfVar12 + 0xc) =
             CONCAT44((float)(auVar34._8_8_ * 1.1920928955078125e-07),
                      (float)(auVar34._0_8_ * 1.1920928955078125e-07));
        *(ulong *)(pfVar12 + 2) =
             CONCAT44((float)(auVar31._8_8_ * 1.1920928955078125e-07),
                      (float)(auVar31._0_8_ * 1.1920928955078125e-07));
        *(ulong *)pfVar12 =
             CONCAT44((float)(auVar40._8_8_ * 1.1920928955078125e-07),
                      (float)(auVar40._0_8_ * 1.1920928955078125e-07));
        *(ulong *)(pfVar12 + 6) =
             CONCAT44((float)in_d5,(float)(auVar27._0_8_ * 1.1920928955078125e-07));
        *(ulong *)(pfVar12 + 4) =
             CONCAT44((float)(auVar32._8_8_ * 1.1920928955078125e-07),
                      (float)(auVar32._0_8_ * 1.1920928955078125e-07));
        pfVar12 = pfVar12 + 0x10;
      } while (uVar10 != 0);
      if (uVar8 == param_3) {
        return;
      }
      uVar10 = uVar8;
      if (((uint)param_3 >> 3 & 1) == 0) {
        param_1 = param_1 + uVar8;
        goto LAB_006142e8;
      }
    }
    auVar6 = _DAT_0024e4f0;
    auVar5 = _DAT_0024e210;
    uVar8 = param_3 & 0xfffffffffffffff8;
    lVar9 = uVar10 - uVar8;
    puVar7 = (undefined1 *)((long)param_2 + uVar10 * 3);
    pfVar12 = param_1 + uVar10;
    do {
      auVar42[0] = *puVar7;
      auVar17[0] = puVar7[1];
      auVar21[0] = puVar7[2];
      auVar42[1] = puVar7[3];
      auVar17[1] = puVar7[4];
      auVar21[1] = puVar7[5];
      auVar42[2] = puVar7[6];
      auVar17[2] = puVar7[7];
      auVar21[2] = puVar7[8];
      auVar42[3] = puVar7[9];
      auVar17[3] = puVar7[10];
      auVar21[3] = puVar7[0xb];
      auVar42[4] = puVar7[0xc];
      auVar17[4] = puVar7[0xd];
      auVar21[4] = puVar7[0xe];
      auVar42[5] = puVar7[0xf];
      auVar17[5] = puVar7[0x10];
      auVar21[5] = puVar7[0x11];
      auVar42[6] = puVar7[0x12];
      auVar17[6] = puVar7[0x13];
      auVar21[6] = puVar7[0x14];
      auVar42._8_8_ = auVar24._8_8_;
      auVar42[7] = puVar7[0x15];
      auVar17._8_8_ = auVar15._8_8_;
      auVar17[7] = puVar7[0x16];
      auVar21[7] = puVar7[0x17];
      auVar21._8_8_ = in_d5;
      puVar7 = puVar7 + 0x18;
      lVar9 = lVar9 + 8;
      auVar24 = a64_TBL(ZEXT816(0),auVar42,auVar6);
      auVar27 = a64_TBL(ZEXT816(0),auVar17,auVar6);
      auVar29 = a64_TBL(ZEXT816(0),auVar42,auVar5);
      auVar31 = a64_TBL(ZEXT816(0),auVar17,auVar5);
      auVar35 = a64_TBL(ZEXT816(0),auVar21,auVar6);
      auVar15 = a64_TBL(ZEXT816(0),auVar21,auVar5);
      auVar16[9] = auVar24[8];
      auVar16[10] = auVar27[8] | auVar24[9];
      auVar18[0xd] = auVar24[0xc];
      auVar18[0xe] = auVar27[0xc] | auVar24[0xd];
      uVar1 = CONCAT12(auVar27[5] | auVar24[6] | auVar35[4],
                       CONCAT11(auVar27[4] | auVar24[5],auVar24[4]));
      auVar16._0_9_ = (unkuint9)uVar1 << 0x28;
      auVar16[0xb] = auVar27[9] | auVar24[10] | auVar35[8];
      auVar18[0xc] = 0;
      auVar18._0_12_ = auVar16;
      auVar18[0xf] = auVar27[0xd] | auVar24[0xe] | auVar35[0xc];
      uVar2 = CONCAT12(auVar31[5] | auVar29[6] | auVar15[4],
                       CONCAT11(auVar31[4] | auVar29[5],auVar29[4]));
      auVar14._0_9_ = (unkuint9)uVar2 << 0x28;
      auVar14[9] = auVar29[8];
      auVar14[10] = auVar31[8] | auVar29[9];
      auVar14[0xb] = auVar31[9] | auVar29[10] | auVar15[8];
      auVar43[0xc] = 0;
      auVar43._0_12_ = auVar14;
      auVar43[0xd] = auVar29[0xc];
      auVar43[0xe] = auVar31[0xc] | auVar29[0xd];
      auVar43[0xf] = auVar31[0xd] | auVar29[0xe] | auVar15[0xc];
      auVar22._0_8_ =
           (long)(int)CONCAT12(auVar27[1] | auVar24[2] | auVar35[0],
                               CONCAT11(auVar27[0] | auVar24[1],auVar24[0]));
      auVar22._8_8_ = (long)(int)((long)((ulong)uVar1 << 0x28) >> 0x28);
      auVar19._0_8_ = (long)(auVar16._8_4_ >> 8);
      auVar19._8_8_ = (long)(auVar18._12_4_ >> 8);
      auVar25._0_8_ =
           (long)(int)CONCAT12(auVar31[1] | auVar29[2] | auVar15[0],
                               CONCAT11(auVar31[0] | auVar29[1],auVar29[0]));
      auVar25._8_8_ = (long)(int)((long)((ulong)uVar2 << 0x28) >> 0x28);
      auVar45._0_8_ = (long)(auVar14._8_4_ >> 8);
      auVar45._8_8_ = (long)(auVar43._12_4_ >> 8);
      auVar29 = NEON_scvtf(auVar22,8);
      auVar24 = NEON_scvtf(auVar19,8);
      auVar31 = NEON_scvtf(auVar25,8);
      auVar27 = NEON_scvtf(auVar45,8);
      auVar15._0_8_ = auVar24._0_8_ * 1.1920928955078125e-07;
      auVar15._8_8_ = auVar24._8_8_ * 1.1920928955078125e-07;
      auVar24._0_8_ = auVar27._0_8_ * 1.1920928955078125e-07;
      auVar24._8_8_ = auVar27._8_8_ * 1.1920928955078125e-07;
      in_d5 = (double)CONCAT44((float)auVar15._8_8_,(float)auVar15._0_8_);
      *(ulong *)(pfVar12 + 2) = CONCAT44((float)auVar24._8_8_,(float)auVar24._0_8_);
      *(ulong *)pfVar12 =
           CONCAT44((float)(auVar31._8_8_ * 1.1920928955078125e-07),
                    (float)(auVar31._0_8_ * 1.1920928955078125e-07));
      *(double *)(pfVar12 + 6) = in_d5;
      *(ulong *)(pfVar12 + 4) =
           CONCAT44((float)(auVar29._8_8_ * 1.1920928955078125e-07),
                    (float)(auVar29._0_8_ * 1.1920928955078125e-07));
      pfVar12 = pfVar12 + 8;
    } while (lVar9 != 0);
    if (uVar8 == param_3) {
      return;
    }
    param_1 = param_1 + uVar8;
  }
LAB_006142e8:
  lVar9 = param_3 - uVar8;
  pbVar11 = (byte *)((long)param_2 + uVar8 * 3 + 2);
  do {
    lVar9 = lVar9 + -1;
    *param_1 = (float)((int)((uint)pbVar11[-2] << 8 | (uint)pbVar11[-1] << 0x10 |
                            (uint)*pbVar11 << 0x18) >> 8) / 8388608.0;
    param_1 = param_1 + 1;
    pbVar11 = pbVar11 + 3;
  } while (lVar9 != 0);
  return;
}


// ===== 0061457c  ma_dr_wav_s32_to_f32 =====

void ma_dr_wav_s32_to_f32(float *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  float *pfVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (((param_1 != (float *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    if (param_3 < 8) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_3 & 0xfffffffffffffff8;
      piVar11 = (int *)(param_2 + 0x10);
      pfVar12 = param_1 + 4;
      uVar13 = uVar9;
      do {
        piVar1 = piVar11 + -4;
        piVar2 = piVar11 + -3;
        piVar3 = piVar11 + -2;
        piVar4 = piVar11 + -1;
        iVar5 = *piVar11;
        piVar6 = piVar11 + 1;
        piVar7 = piVar11 + 2;
        piVar8 = piVar11 + 3;
        uVar13 = uVar13 - 8;
        piVar11 = piVar11 + 8;
        auVar16._0_8_ = (long)*piVar1;
        auVar16._8_8_ = (long)*piVar2;
        auVar17._0_8_ = (long)iVar5;
        auVar17._8_8_ = (long)*piVar6;
        auVar14._0_8_ = (long)*piVar3;
        auVar14._8_8_ = (long)*piVar4;
        auVar15._0_8_ = (long)*piVar7;
        auVar15._8_8_ = (long)*piVar8;
        auVar16 = NEON_scvtf(auVar16,8);
        auVar17 = NEON_scvtf(auVar17,8);
        auVar14 = NEON_scvtf(auVar14,8);
        auVar15 = NEON_scvtf(auVar15,8);
        *(ulong *)(pfVar12 + -2) =
             CONCAT44((float)(auVar14._8_8_ * 4.656612873077393e-10),
                      (float)(auVar14._0_8_ * 4.656612873077393e-10));
        *(ulong *)(pfVar12 + -4) =
             CONCAT44((float)(auVar16._8_8_ * 4.656612873077393e-10),
                      (float)(auVar16._0_8_ * 4.656612873077393e-10));
        *(ulong *)(pfVar12 + 2) =
             CONCAT44((float)(auVar15._8_8_ * 4.656612873077393e-10),
                      (float)(auVar15._0_8_ * 4.656612873077393e-10));
        *(ulong *)pfVar12 =
             CONCAT44((float)(auVar17._8_8_ * 4.656612873077393e-10),
                      (float)(auVar17._0_8_ * 4.656612873077393e-10));
        pfVar12 = pfVar12 + 8;
      } while (uVar13 != 0);
      if (uVar9 == param_3) {
        return;
      }
      param_1 = param_1 + uVar9;
    }
    lVar10 = param_3 - uVar9;
    piVar11 = (int *)(param_2 + uVar9 * 4);
    do {
      lVar10 = lVar10 + -1;
      *param_1 = (float)*piVar11 / 2.1474836e+09;
      param_1 = param_1 + 1;
      piVar11 = piVar11 + 1;
    } while (lVar10 != 0);
  }
  return;
}


// ===== 0061463c  ma_dr_wav_f64_to_f32 =====

void ma_dr_wav_f64_to_f32(float *param_1,long param_2,ulong param_3)

{
  double dVar1;
  double dVar2;
  ulong uVar3;
  long lVar4;
  double *pdVar5;
  float *pfVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (((param_1 != (float *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    if (param_3 < 8) {
      uVar3 = 0;
    }
    else {
      uVar3 = param_3 & 0xfffffffffffffff8;
      pfVar6 = param_1 + 4;
      pdVar5 = (double *)(param_2 + 0x20);
      uVar7 = uVar3;
      do {
        dVar8 = pdVar5[-3];
        dVar1 = pdVar5[-4];
        uVar7 = uVar7 - 8;
        dVar9 = pdVar5[1];
        dVar2 = *pdVar5;
        dVar11 = pdVar5[3];
        dVar10 = pdVar5[2];
        *(ulong *)(pfVar6 + -2) = CONCAT44((float)pdVar5[-1],(float)pdVar5[-2]);
        *(ulong *)(pfVar6 + -4) = CONCAT44((float)dVar8,(float)dVar1);
        *(ulong *)(pfVar6 + 2) = CONCAT44((float)dVar11,(float)dVar10);
        *(ulong *)pfVar6 = CONCAT44((float)dVar9,(float)dVar2);
        pfVar6 = pfVar6 + 8;
        pdVar5 = pdVar5 + 8;
      } while (uVar7 != 0);
      if (uVar3 == param_3) {
        return;
      }
      param_1 = param_1 + uVar3;
    }
    lVar4 = param_3 - uVar3;
    pdVar5 = (double *)(param_2 + uVar3 * 8);
    do {
      lVar4 = lVar4 + -1;
      *param_1 = (float)*pdVar5;
      param_1 = param_1 + 1;
      pdVar5 = pdVar5 + 1;
    } while (lVar4 != 0);
  }
  return;
}


// ===== 006146c0  ma_dr_wav_alaw_to_f32 =====

void ma_dr_wav_alaw_to_f32(float *param_1,byte *param_2,long param_3)

{
  if (((param_1 != (float *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
    do {
      param_3 = param_3 + -1;
      *param_1 = (float)(int)*(short *)(&DAT_0028261c + (ulong)*param_2 * 2) / 32768.0;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 006146f0  ma_dr_wav_mulaw_to_f32 =====

void ma_dr_wav_mulaw_to_f32(float *param_1,byte *param_2,long param_3)

{
  if (((param_1 != (float *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
    do {
      param_3 = param_3 + -1;
      *param_1 = (float)(int)*(short *)(&DAT_0028281c + (ulong)*param_2 * 2) / 32768.0;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 00614720  ma_dr_wav_read_pcm_frames_s32le =====

void ma_dr_wav_read_pcm_frames_s32le(void)

{
  (*(code *)PTR_ma_dr_wav_read_pcm_frames_s32_00681c08)();
  return;
}


// ===== 00614724  ma_dr_wav_read_pcm_frames_s32be =====

void ma_dr_wav_read_pcm_frames_s32be(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  uint *puVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar2 = ma_dr_wav_read_pcm_frames_s32();
  if ((param_3 != 0) && (uVar3 = lVar2 * (ulong)*(ushort *)(param_1 + 0x70), uVar3 != 0)) {
    if (uVar3 < 8) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar3 & 0xfffffffffffffff8;
      pauVar5 = (undefined1 (*) [16])(param_3 + 0x10);
      uVar7 = uVar4;
      do {
        uVar7 = uVar7 - 8;
        auVar8 = NEON_rev32(pauVar5[-1],1);
        auVar9 = NEON_rev32(*pauVar5,1);
        *(long *)(pauVar5[-1] + 8) = auVar8._8_8_;
        *(long *)pauVar5[-1] = auVar8._0_8_;
        *(long *)(*pauVar5 + 8) = auVar9._8_8_;
        *(long *)*pauVar5 = auVar9._0_8_;
        pauVar5 = pauVar5 + 2;
      } while (uVar7 != 0);
      if (uVar3 - uVar4 == 0) {
        return;
      }
    }
    lVar2 = uVar3 - uVar4;
    puVar6 = (uint *)(param_3 + uVar4 * 4);
    do {
      lVar2 = lVar2 + -1;
      uVar1 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
      *puVar6 = uVar1 >> 0x10 | uVar1 << 0x10;
      puVar6 = puVar6 + 1;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 006147b4  ma_dr_wav_u8_to_s32 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_dr_wav_u8_to_s32(ulong *param_1,undefined1 (*param_2) [16],ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar11 = _DAT_0024e4f0;
  auVar10 = _DAT_0024e3a0;
  auVar2 = _DAT_0024e210;
  auVar1 = _DAT_0024de80;
  if (param_1 == (ulong *)0x0) {
    return;
  }
  if (param_2 == (undefined1 (*) [16])0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if ((param_3 < 8) ||
     ((param_1 < (ulong *)((long)*param_2 + param_3) &&
      (param_2 < (undefined1 (*) [16])((long)param_1 + param_3 * 4))))) {
    uVar3 = 0;
  }
  else {
    if (param_3 < 0x10) {
      uVar5 = 0;
    }
    else {
      uVar3 = param_3 & 0xfffffffffffffff0;
      puVar7 = param_1;
      pauVar9 = param_2;
      uVar5 = uVar3;
      do {
        auVar12 = *pauVar9;
        uVar5 = uVar5 - 0x10;
        auVar13 = a64_TBL(ZEXT816(0),auVar12,auVar1);
        auVar15 = a64_TBL(ZEXT816(0),auVar12,auVar10);
        auVar17 = a64_TBL(ZEXT816(0),auVar12,auVar11);
        auVar12 = a64_TBL(ZEXT816(0),auVar12,auVar2);
        auVar14._0_8_ =
             CONCAT17(auVar13[4],(uint7)(uint)(auVar13._0_4_ << 0x18)) ^ 0x8000000080000000;
        auVar14._8_3_ = 0;
        auVar14[0xb] = auVar13[8] ^ 0x80;
        auVar14._12_3_ = 0;
        auVar14[0xf] = auVar13[0xc] ^ 0x80;
        auVar16._0_8_ =
             CONCAT17(auVar15[4],(uint7)(uint)(auVar15._0_4_ << 0x18)) ^ 0x8000000080000000;
        auVar16._8_3_ = 0;
        auVar16[0xb] = auVar15[8] ^ 0x80;
        auVar16._12_3_ = 0;
        auVar16[0xf] = auVar15[0xc] ^ 0x80;
        auVar15._0_8_ =
             CONCAT17(auVar17[4],(uint7)(uint)(auVar17._0_4_ << 0x18)) ^ 0x8000000080000000;
        auVar15._8_3_ = 0;
        auVar15[0xb] = auVar17[8] ^ 0x80;
        auVar15._12_3_ = 0;
        auVar15[0xf] = auVar17[0xc] ^ 0x80;
        auVar13._0_8_ =
             CONCAT17(auVar12[4],(uint7)(uint)(auVar12._0_4_ << 0x18)) ^ 0x8000000080000000;
        auVar13._8_3_ = 0;
        auVar13[0xb] = auVar12[8] ^ 0x80;
        auVar13._12_3_ = 0;
        auVar13[0xf] = auVar12[0xc] ^ 0x80;
        puVar7[5] = auVar16._8_8_;
        puVar7[4] = auVar16._0_8_;
        puVar7[7] = auVar14._8_8_;
        puVar7[6] = auVar14._0_8_;
        puVar7[1] = auVar13._8_8_;
        *puVar7 = auVar13._0_8_;
        puVar7[3] = auVar15._8_8_;
        puVar7[2] = auVar15._0_8_;
        puVar7 = puVar7 + 8;
        pauVar9 = pauVar9 + 1;
      } while (uVar5 != 0);
      if (uVar3 == param_3) {
        return;
      }
      uVar5 = uVar3;
      if (((uint)param_3 >> 3 & 1) == 0) {
        param_1 = (ulong *)((long)param_1 + uVar3 * 4);
        goto LAB_006147e4;
      }
    }
    auVar2 = _DAT_0024e4f0;
    auVar1 = _DAT_0024e210;
    uVar3 = param_3 & 0xfffffffffffffff8;
    lVar6 = uVar5 - uVar3;
    puVar7 = (ulong *)((long)*param_2 + uVar5);
    puVar8 = (ulong *)((long)param_1 + uVar5 * 4);
    do {
      auVar10._0_8_ = *puVar7;
      auVar10._8_8_ = 0;
      lVar6 = lVar6 + 8;
      auVar11 = a64_TBL(ZEXT816(0),auVar10,auVar2);
      auVar10 = a64_TBL(ZEXT816(0),auVar10,auVar1);
      auVar12._0_8_ = CONCAT17(auVar11[4],(uint7)(uint)(auVar11._0_4_ << 0x18)) ^ 0x8000000080000000
      ;
      auVar12._8_3_ = 0;
      auVar12[0xb] = auVar11[8] ^ 0x80;
      auVar12._12_3_ = 0;
      auVar12[0xf] = auVar11[0xc] ^ 0x80;
      auVar11._0_8_ = CONCAT17(auVar10[4],(uint7)(uint)(auVar10._0_4_ << 0x18)) ^ 0x8000000080000000
      ;
      auVar11._8_3_ = 0;
      auVar11[0xb] = auVar10[8] ^ 0x80;
      auVar11._12_3_ = 0;
      auVar11[0xf] = auVar10[0xc] ^ 0x80;
      puVar8[1] = auVar11._8_8_;
      *puVar8 = auVar11._0_8_;
      puVar8[3] = auVar12._8_8_;
      puVar8[2] = auVar12._0_8_;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 4;
    } while (lVar6 != 0);
    if (uVar3 == param_3) {
      return;
    }
    param_1 = (ulong *)((long)param_1 + uVar3 * 4);
  }
LAB_006147e4:
  lVar6 = param_3 - uVar3;
  pbVar4 = (byte *)((long)*param_2 + uVar3);
  do {
    lVar6 = lVar6 + -1;
    *(uint *)param_1 = (uint)*pbVar4 << 0x18 ^ 0x80000000;
    param_1 = (ulong *)((long)param_1 + 4);
    pbVar4 = pbVar4 + 1;
  } while (lVar6 != 0);
  return;
}


// ===== 006148fc  ma_dr_wav_s16_to_s32 =====

void ma_dr_wav_s16_to_s32(int *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ushort *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    if (param_3 < 0x10) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_3 & 0xfffffffffffffff0;
      puVar4 = (undefined8 *)(param_2 + 0x10);
      piVar5 = param_1 + 8;
      uVar6 = uVar1;
      do {
        uVar8 = puVar4[-1];
        uVar7 = puVar4[-2];
        uVar10 = puVar4[1];
        uVar9 = *puVar4;
        uVar6 = uVar6 - 0x10;
        puVar4 = puVar4 + 4;
        *(ulong *)(piVar5 + -6) =
             CONCAT44((int)(short)((ulong)uVar7 >> 0x30) << 0x10,
                      (int)(short)((ulong)uVar7 >> 0x20) << 0x10);
        *(ulong *)(piVar5 + -8) =
             CONCAT44((int)(short)((ulong)uVar7 >> 0x10) << 0x10,(int)(short)uVar7 << 0x10);
        *(ulong *)(piVar5 + -2) =
             CONCAT44((int)(short)((ulong)uVar8 >> 0x30) << 0x10,
                      (int)(short)((ulong)uVar8 >> 0x20) << 0x10);
        *(ulong *)(piVar5 + -4) =
             CONCAT44((int)(short)((ulong)uVar8 >> 0x10) << 0x10,(int)(short)uVar8 << 0x10);
        *(ulong *)(piVar5 + 2) =
             CONCAT44((int)(short)((ulong)uVar9 >> 0x30) << 0x10,
                      (int)(short)((ulong)uVar9 >> 0x20) << 0x10);
        *(ulong *)piVar5 =
             CONCAT44((int)(short)((ulong)uVar9 >> 0x10) << 0x10,(int)(short)uVar9 << 0x10);
        *(ulong *)(piVar5 + 6) =
             CONCAT44((int)(short)((ulong)uVar10 >> 0x30) << 0x10,
                      (int)(short)((ulong)uVar10 >> 0x20) << 0x10);
        *(ulong *)(piVar5 + 4) =
             CONCAT44((int)(short)((ulong)uVar10 >> 0x10) << 0x10,(int)(short)uVar10 << 0x10);
        piVar5 = piVar5 + 0x10;
      } while (uVar6 != 0);
      if (uVar1 == param_3) {
        return;
      }
      param_1 = param_1 + uVar1;
    }
    lVar2 = param_3 - uVar1;
    puVar3 = (ushort *)(param_2 + uVar1 * 2);
    do {
      lVar2 = lVar2 + -1;
      *param_1 = (uint)*puVar3 << 0x10;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 00614980  ma_dr_wav_s24_to_s32 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ma_dr_wav_s24_to_s32
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],uint *param_6,uint *param_7,
               ulong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [13];
  undefined1 *puVar5;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  uint *puVar18;
  ulong *puVar19;
  uint *puVar20;
  undefined1 auVar21 [16];
  undefined1 uVar22;
  undefined1 uVar23;
  byte bVar24;
  byte bVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  
  auVar37 = _DAT_0024e4f0;
  auVar3 = _DAT_0024e3a0;
  uVar22 = UNK_0024e218;
  auVar2 = _DAT_0024de80;
  bVar29 = param_4[0xf];
  bVar28 = param_4[0xe];
  uVar27 = param_4[0xd];
  uVar26 = param_4[0xc];
  bVar25 = param_4[0xb];
  bVar24 = param_4[10];
  uVar23 = param_4[9];
  if (param_6 == (uint *)0x0) {
    return;
  }
  if (param_7 == (uint *)0x0) {
    return;
  }
  if (param_8 == 0) {
    return;
  }
  if ((param_8 < 8) ||
     ((param_6 < (uint *)((long)param_7 + param_8 * 3) && (param_7 < param_6 + param_8)))) {
    uVar14 = 0;
  }
  else {
    if (param_8 < 0x10) {
      uVar16 = 0;
      auVar37 = param_3;
      uVar22 = param_4[8];
    }
    else {
      uVar14 = param_8 & 0xfffffffffffffff0;
      uVar23 = (undefined1)_UNK_0024e219;
      bVar24 = (byte)((uint7)_UNK_0024e219 >> 8);
      bVar25 = (byte)((uint7)_UNK_0024e219 >> 0x10);
      uVar26 = (undefined1)((uint7)_UNK_0024e219 >> 0x18);
      uVar27 = (undefined1)((uint7)_UNK_0024e219 >> 0x20);
      bVar28 = (byte)((uint7)_UNK_0024e219 >> 0x28);
      bVar29 = (byte)((uint7)_UNK_0024e219 >> 0x30);
      auVar33[8] = UNK_0024e218;
      auVar33._0_8_ = _DAT_0024e210;
      auVar21[8] = UNK_0024e218;
      auVar21._0_8_ = _DAT_0024e210;
      auVar1[8] = UNK_0024e218;
      auVar1._0_8_ = _DAT_0024e210;
      puVar18 = param_6;
      puVar20 = param_7;
      uVar16 = uVar14;
      do {
        auVar34[0] = (undefined1)*puVar20;
        auVar35[0] = *(undefined1 *)((long)puVar20 + 1);
        auVar39[0] = *(undefined1 *)((long)puVar20 + 2);
        auVar34[1] = *(undefined1 *)((long)puVar20 + 3);
        auVar35[1] = (undefined1)puVar20[1];
        auVar39[1] = *(undefined1 *)((long)puVar20 + 5);
        auVar34[2] = *(undefined1 *)((long)puVar20 + 6);
        auVar35[2] = *(undefined1 *)((long)puVar20 + 7);
        auVar39[2] = (undefined1)puVar20[2];
        auVar34[3] = *(undefined1 *)((long)puVar20 + 9);
        auVar35[3] = *(undefined1 *)((long)puVar20 + 10);
        auVar39[3] = *(undefined1 *)((long)puVar20 + 0xb);
        auVar34[4] = (undefined1)puVar20[3];
        auVar35[4] = *(undefined1 *)((long)puVar20 + 0xd);
        auVar39[4] = *(undefined1 *)((long)puVar20 + 0xe);
        auVar34[5] = *(undefined1 *)((long)puVar20 + 0xf);
        auVar35[5] = (undefined1)puVar20[4];
        auVar39[5] = *(undefined1 *)((long)puVar20 + 0x11);
        auVar34[6] = *(undefined1 *)((long)puVar20 + 0x12);
        auVar35[6] = *(undefined1 *)((long)puVar20 + 0x13);
        auVar39[6] = (undefined1)puVar20[5];
        auVar34[7] = *(undefined1 *)((long)puVar20 + 0x15);
        auVar35[7] = *(undefined1 *)((long)puVar20 + 0x16);
        auVar39[7] = *(undefined1 *)((long)puVar20 + 0x17);
        auVar34[8] = (undefined1)puVar20[6];
        auVar35[8] = *(undefined1 *)((long)puVar20 + 0x19);
        auVar39[8] = *(undefined1 *)((long)puVar20 + 0x1a);
        auVar34[9] = *(undefined1 *)((long)puVar20 + 0x1b);
        auVar35[9] = (undefined1)puVar20[7];
        auVar39[9] = *(undefined1 *)((long)puVar20 + 0x1d);
        auVar34[10] = *(undefined1 *)((long)puVar20 + 0x1e);
        auVar35[10] = *(undefined1 *)((long)puVar20 + 0x1f);
        auVar39[10] = (undefined1)puVar20[8];
        auVar34[0xb] = *(undefined1 *)((long)puVar20 + 0x21);
        auVar35[0xb] = *(undefined1 *)((long)puVar20 + 0x22);
        auVar39[0xb] = *(undefined1 *)((long)puVar20 + 0x23);
        auVar34[0xc] = (undefined1)puVar20[9];
        auVar35[0xc] = *(undefined1 *)((long)puVar20 + 0x25);
        auVar39[0xc] = *(undefined1 *)((long)puVar20 + 0x26);
        auVar34[0xd] = *(undefined1 *)((long)puVar20 + 0x27);
        auVar35[0xd] = (undefined1)puVar20[10];
        auVar39[0xd] = *(undefined1 *)((long)puVar20 + 0x29);
        auVar34[0xe] = *(undefined1 *)((long)puVar20 + 0x2a);
        auVar35[0xe] = *(undefined1 *)((long)puVar20 + 0x2b);
        auVar39[0xe] = (undefined1)puVar20[0xb];
        auVar34[0xf] = *(undefined1 *)((long)puVar20 + 0x2d);
        auVar35[0xf] = *(undefined1 *)((long)puVar20 + 0x2e);
        auVar39[0xf] = *(undefined1 *)((long)puVar20 + 0x2f);
        puVar20 = puVar20 + 0xc;
        uVar16 = uVar16 - 0x10;
        auVar36 = a64_TBL(ZEXT816(0),auVar34,auVar2);
        auVar38 = a64_TBL(ZEXT816(0),auVar35,auVar2);
        auVar40 = a64_TBL(ZEXT816(0),auVar34,auVar3);
        auVar41 = a64_TBL(ZEXT816(0),auVar35,auVar3);
        auVar42 = a64_TBL(ZEXT816(0),auVar34,auVar37);
        auVar1[9] = uVar23;
        auVar1[10] = bVar24;
        auVar1[0xb] = bVar25;
        auVar1[0xc] = uVar26;
        auVar1[0xd] = uVar27;
        auVar1[0xe] = bVar28;
        auVar1[0xf] = bVar29;
        auVar43 = a64_TBL(ZEXT816(0),auVar34,auVar1);
        auVar44 = a64_TBL(ZEXT816(0),auVar35,auVar37);
        auVar21[9] = uVar23;
        auVar21[10] = bVar24;
        auVar21[0xb] = bVar25;
        auVar21[0xc] = uVar26;
        auVar21[0xd] = uVar27;
        auVar21[0xe] = bVar28;
        auVar21[0xf] = bVar29;
        auVar35 = a64_TBL(ZEXT816(0),auVar35,auVar21);
        auVar33[9] = uVar23;
        auVar33[10] = bVar24;
        auVar33[0xb] = bVar25;
        auVar33[0xc] = uVar26;
        auVar33[0xd] = uVar27;
        auVar33[0xe] = bVar28;
        auVar33[0xf] = bVar29;
        auVar45 = a64_TBL(ZEXT816(0),auVar39,auVar33);
        auVar46 = a64_TBL(ZEXT816(0),auVar39,auVar2);
        auVar47 = a64_TBL(ZEXT816(0),auVar39,auVar3);
        auVar34 = a64_TBL(ZEXT816(0),auVar39,auVar37);
        param_5._0_8_ =
             CONCAT17(auVar44[5] | auVar42[6] | auVar34[4],
                      CONCAT16(auVar44[4] | auVar42[5],
                               CONCAT15(auVar42[4],
                                        (uint5)CONCAT12(auVar44[1] | auVar42[2] | auVar34[0],
                                                        CONCAT11(auVar44[0] | auVar42[1],auVar42[0])
                                                       ) << 8)));
        param_5[8] = 0;
        param_5[9] = auVar42[8];
        param_5[10] = auVar44[8] | auVar42[9];
        param_5[0xb] = auVar44[9] | auVar42[10] | auVar34[8];
        param_5[0xc] = 0;
        param_5[0xd] = auVar42[0xc];
        param_5[0xe] = auVar44[0xc] | auVar42[0xd];
        param_5[0xf] = auVar44[0xd] | auVar42[0xe] | auVar34[0xc];
        *(undefined1 *)(puVar18 + 0xc) = 0;
        *(char *)((long)puVar18 + 0x31) = auVar40[8];
        *(byte *)((long)puVar18 + 0x32) = auVar41[8] | auVar40[9];
        *(byte *)((long)puVar18 + 0x33) = auVar41[9] | auVar40[10] | auVar47[8];
        *(undefined1 *)(puVar18 + 0xd) = 0;
        *(char *)((long)puVar18 + 0x35) = auVar40[0xc];
        *(byte *)((long)puVar18 + 0x36) = auVar41[0xc] | auVar40[0xd];
        *(byte *)((long)puVar18 + 0x37) = auVar41[0xd] | auVar40[0xe] | auVar47[0xc];
        *(undefined1 *)(puVar18 + 8) = 0;
        *(char *)((long)puVar18 + 0x21) = auVar40[0];
        *(byte *)((long)puVar18 + 0x22) = auVar41[0] | auVar40[1];
        *(byte *)((long)puVar18 + 0x23) = auVar41[1] | auVar40[2] | auVar47[0];
        *(undefined1 *)(puVar18 + 9) = 0;
        *(char *)((long)puVar18 + 0x25) = auVar40[4];
        *(byte *)((long)puVar18 + 0x26) = auVar41[4] | auVar40[5];
        *(byte *)((long)puVar18 + 0x27) = auVar41[5] | auVar40[6] | auVar47[4];
        *(undefined1 *)(puVar18 + 0x10) = 0;
        *(char *)((long)puVar18 + 0x41) = auVar36[8];
        *(byte *)((long)puVar18 + 0x42) = auVar38[8] | auVar36[9];
        *(byte *)((long)puVar18 + 0x43) = auVar38[9] | auVar36[10] | auVar46[8];
        *(undefined1 *)(puVar18 + 0x11) = 0;
        *(char *)((long)puVar18 + 0x45) = auVar36[0xc];
        *(byte *)((long)puVar18 + 0x46) = auVar38[0xc] | auVar36[0xd];
        *(byte *)((long)puVar18 + 0x47) = auVar38[0xd] | auVar36[0xe] | auVar46[0xc];
        *(undefined1 *)(puVar18 + 0xc) = 0;
        *(char *)((long)puVar18 + 0x31) = auVar36[0];
        *(byte *)((long)puVar18 + 0x32) = auVar38[0] | auVar36[1];
        *(byte *)((long)puVar18 + 0x33) = auVar38[1] | auVar36[2] | auVar46[0];
        *(undefined1 *)(puVar18 + 0xd) = 0;
        *(char *)((long)puVar18 + 0x35) = auVar36[4];
        *(byte *)((long)puVar18 + 0x36) = auVar38[4] | auVar36[5];
        *(byte *)((long)puVar18 + 0x37) = auVar38[5] | auVar36[6] | auVar46[4];
        *(undefined1 *)(puVar18 + 4) = 0;
        *(char *)((long)puVar18 + 0x11) = auVar43[8];
        *(byte *)((long)puVar18 + 0x12) = auVar35[8] | auVar43[9];
        *(byte *)((long)puVar18 + 0x13) = auVar35[9] | auVar43[10] | auVar45[8];
        *(undefined1 *)(puVar18 + 5) = 0;
        *(char *)((long)puVar18 + 0x15) = auVar43[0xc];
        *(byte *)((long)puVar18 + 0x16) = auVar35[0xc] | auVar43[0xd];
        *(byte *)((long)puVar18 + 0x17) = auVar35[0xd] | auVar43[0xe] | auVar45[0xc];
        *(undefined1 *)puVar18 = 0;
        *(char *)((long)puVar18 + 1) = auVar43[0];
        *(byte *)((long)puVar18 + 2) = auVar35[0] | auVar43[1];
        *(byte *)((long)puVar18 + 3) = auVar35[1] | auVar43[2] | auVar45[0];
        *(undefined1 *)(puVar18 + 1) = 0;
        *(char *)((long)puVar18 + 5) = auVar43[4];
        *(byte *)((long)puVar18 + 6) = auVar35[4] | auVar43[5];
        *(byte *)((long)puVar18 + 7) = auVar35[5] | auVar43[6] | auVar45[4];
        *(long *)(puVar18 + 6) = param_5._8_8_;
        *(ulong *)(puVar18 + 4) = param_5._0_8_;
        puVar18 = puVar18 + 0x10;
      } while (uVar16 != 0);
      if (uVar14 == param_8) {
        return;
      }
      uVar16 = uVar14;
      if (((uint)param_8 >> 3 & 1) == 0) {
        param_6 = param_6 + uVar14;
        goto LAB_006149b4;
      }
    }
    auVar1 = _DAT_0024e4f0;
    uVar14 = param_8 & 0xfffffffffffffff8;
    auVar36[8] = UNK_0024e218;
    auVar36._0_8_ = _DAT_0024e210;
    auVar36._9_7_ = _UNK_0024e219;
    auVar3[8] = UNK_0024e218;
    auVar3._0_8_ = _DAT_0024e210;
    auVar3._9_7_ = _UNK_0024e219;
    auVar2[8] = UNK_0024e218;
    auVar2._0_8_ = _DAT_0024e210;
    auVar2._9_7_ = _UNK_0024e219;
    lVar15 = uVar16 - uVar14;
    puVar13 = (undefined1 *)((long)param_7 + uVar16 * 3);
    puVar19 = (ulong *)(param_6 + uVar16);
    do {
      auVar41[0] = *puVar13;
      puVar5 = puVar13 + 1;
      auVar42[0] = puVar13[2];
      auVar41[1] = puVar13[3];
      puVar6 = puVar13 + 4;
      auVar42[1] = puVar13[5];
      auVar41[2] = puVar13[6];
      puVar7 = puVar13 + 7;
      auVar42[2] = puVar13[8];
      auVar41[3] = puVar13[9];
      puVar8 = puVar13 + 10;
      auVar42[3] = puVar13[0xb];
      auVar41[4] = puVar13[0xc];
      puVar9 = puVar13 + 0xd;
      auVar42[4] = puVar13[0xe];
      auVar41[5] = puVar13[0xf];
      puVar10 = puVar13 + 0x10;
      auVar42[5] = puVar13[0x11];
      auVar41[6] = puVar13[0x12];
      puVar11 = puVar13 + 0x13;
      auVar42[6] = puVar13[0x14];
      auVar41._8_8_ = auVar37._8_8_;
      auVar41[7] = puVar13[0x15];
      puVar12 = puVar13 + 0x16;
      auVar42._8_8_ = param_5._8_8_;
      auVar42[7] = puVar13[0x17];
      puVar13 = puVar13 + 0x18;
      lVar15 = lVar15 + 8;
      auVar33 = a64_TBL(ZEXT816(0),auVar41,auVar1);
      auVar38[1] = *puVar6;
      auVar38[0] = *puVar5;
      auVar38[2] = *puVar7;
      auVar38[3] = *puVar8;
      auVar38[4] = *puVar9;
      auVar38[5] = *puVar10;
      auVar38[6] = *puVar11;
      auVar38[7] = *puVar12;
      auVar38[8] = uVar22;
      auVar38[9] = uVar23;
      auVar38[10] = bVar24;
      auVar38[0xb] = bVar25;
      auVar38[0xc] = uVar26;
      auVar38[0xd] = uVar27;
      auVar38[0xe] = bVar28;
      auVar38[0xf] = bVar29;
      auVar34 = a64_TBL(ZEXT816(0),auVar38,auVar1);
      auVar35 = a64_TBL(ZEXT816(0),auVar41,auVar2);
      auVar40[1] = *puVar6;
      auVar40[0] = *puVar5;
      auVar40[2] = *puVar7;
      auVar40[3] = *puVar8;
      auVar40[4] = *puVar9;
      auVar40[5] = *puVar10;
      auVar40[6] = *puVar11;
      auVar40[7] = *puVar12;
      auVar40[8] = uVar22;
      auVar40[9] = uVar23;
      auVar40[10] = bVar24;
      auVar40[0xb] = bVar25;
      auVar40[0xc] = uVar26;
      auVar40[0xd] = uVar27;
      auVar40[0xe] = bVar28;
      auVar40[0xf] = bVar29;
      auVar37 = a64_TBL(ZEXT816(0),auVar40,auVar3);
      auVar39 = a64_TBL(ZEXT816(0),auVar42,auVar1);
      auVar21 = a64_TBL(ZEXT816(0),auVar42,auVar36);
      uVar23 = auVar33[8];
      uVar27 = auVar33[0xc];
      bVar24 = auVar34[8] | auVar33[9];
      bVar28 = auVar34[0xc] | auVar33[0xd];
      bVar30 = auVar37[5] | auVar35[6];
      auVar4[1] = 0;
      auVar4[0] = bVar30;
      auVar4[2] = auVar35[8];
      bVar31 = auVar37[8] | auVar35[9];
      auVar4[3] = bVar31;
      bVar32 = auVar37[9] | auVar35[10];
      auVar4[4] = bVar32;
      auVar4._5_8_ = 0;
      param_5._0_13_ = auVar4 << 0x38;
      param_5[0xd] = auVar35[0xc];
      param_5[0xe] = auVar37[0xc] | auVar35[0xd];
      param_5[0xf] = auVar37[0xd] | auVar35[0xe];
      uVar22 = 0;
      bVar25 = auVar34[9] | auVar33[10] | auVar39[8];
      uVar26 = 0;
      bVar29 = auVar34[0xd] | auVar33[0xe] | auVar39[0xc];
      auVar37._0_8_ =
           CONCAT17(bVar30 | auVar21[4],
                    CONCAT16(auVar37[4] | auVar35[5],
                             CONCAT15(auVar35[4],
                                      (uint5)CONCAT12(auVar37[1] | auVar35[2] | auVar21[0],
                                                      CONCAT11(auVar37[0] | auVar35[1],auVar35[0]))
                                      << 8)));
      auVar37[8] = 0;
      auVar37[9] = auVar35[8];
      auVar37[10] = bVar31;
      auVar37[0xb] = bVar32 | auVar21[8];
      auVar37[0xc] = 0;
      auVar37[0xd] = auVar35[0xc];
      auVar37[0xe] = param_5[0xe];
      auVar37[0xf] = param_5[0xf] | auVar21[0xc];
      puVar19[1] = auVar37._8_8_;
      *puVar19 = auVar37._0_8_;
      puVar19[3] = CONCAT17(bVar29,CONCAT16(bVar28,CONCAT15(uVar27,(uint5)CONCAT12(bVar25,CONCAT11(
                                                  bVar24,uVar23)) << 8)));
      puVar19[2] = CONCAT17(auVar34[5] | auVar33[6] | auVar39[4],
                            CONCAT16(auVar34[4] | auVar33[5],
                                     CONCAT15(auVar33[4],
                                              (uint5)CONCAT12(auVar34[1] | auVar33[2] | auVar39[0],
                                                              CONCAT11(auVar34[0] | auVar33[1],
                                                                       auVar33[0])) << 8)));
      puVar19 = puVar19 + 4;
    } while (lVar15 != 0);
    if (uVar14 == param_8) {
      return;
    }
    param_6 = param_6 + uVar14;
  }
LAB_006149b4:
  lVar15 = param_8 - uVar14;
  pbVar17 = (byte *)((long)param_7 + uVar14 * 3 + 2);
  do {
    lVar15 = lVar15 + -1;
    *param_6 = (uint)pbVar17[-2] << 8 | (uint)pbVar17[-1] << 0x10 | (uint)*pbVar17 << 0x18;
    param_6 = param_6 + 1;
    pbVar17 = pbVar17 + 3;
  } while (lVar15 != 0);
  return;
}


// ===== 00614b54  ma_dr_wav_f32_to_s32 =====

void ma_dr_wav_f32_to_s32(int *param_1,long param_2,ulong param_3)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  long lVar3;
  float *pfVar4;
  undefined1 (*pauVar5) [16];
  int *piVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    if (param_3 < 8) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_3 & 0xfffffffffffffff8;
      pauVar5 = (undefined1 (*) [16])(param_2 + 0x10);
      piVar6 = param_1 + 4;
      uVar7 = uVar2;
      do {
        pauVar1 = pauVar5 + -1;
        auVar9 = *pauVar5;
        uVar7 = uVar7 - 8;
        pauVar5 = pauVar5 + 2;
        auVar8 = NEON_fcvtzs(*pauVar1,0x1f,4);
        auVar9 = NEON_fcvtzs(auVar9,0x1f,4);
        *(long *)(piVar6 + -2) = auVar8._8_8_;
        *(long *)(piVar6 + -4) = auVar8._0_8_;
        *(long *)(piVar6 + 2) = auVar9._8_8_;
        *(long *)piVar6 = auVar9._0_8_;
        piVar6 = piVar6 + 8;
      } while (uVar7 != 0);
      if (uVar2 == param_3) {
        return;
      }
      param_1 = param_1 + uVar2;
    }
    lVar3 = param_3 - uVar2;
    pfVar4 = (float *)(param_2 + uVar2 * 4);
    do {
      lVar3 = lVar3 + -1;
      *param_1 = (int)(*pfVar4 * 2.1474836e+09);
      param_1 = param_1 + 1;
      pfVar4 = pfVar4 + 1;
    } while (lVar3 != 0);
  }
  return;
}


// ===== 00614bd0  ma_dr_wav_f64_to_s32 =====

void ma_dr_wav_f64_to_s32(int *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  int *piVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    if (param_3 < 8) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_3 & 0xfffffffffffffff8;
      piVar5 = param_1 + 4;
      pauVar4 = (undefined1 (*) [16])(param_2 + 0x20);
      uVar6 = uVar1;
      do {
        uVar6 = uVar6 - 8;
        auVar8 = NEON_fcvtzs(pauVar4[-1],0x1f,8);
        auVar7 = NEON_fcvtzs(pauVar4[-2],0x1f,8);
        auVar10 = NEON_fcvtzs(pauVar4[1],0x1f,8);
        auVar9 = NEON_fcvtzs(*pauVar4,0x1f,8);
        *piVar5 = auVar8._0_4_;
        piVar5[1] = auVar8._8_4_;
        piVar5[-4] = auVar7._0_4_;
        piVar5[-3] = auVar7._8_4_;
        piVar5[4] = auVar10._0_4_;
        piVar5[5] = auVar10._8_4_;
        *piVar5 = auVar9._0_4_;
        piVar5[1] = auVar9._8_4_;
        piVar5 = piVar5 + 8;
        pauVar4 = pauVar4 + 4;
      } while (uVar6 != 0);
      if (uVar1 == param_3) {
        return;
      }
      param_1 = param_1 + uVar1;
    }
    lVar2 = param_3 - uVar1;
    pdVar3 = (double *)(param_2 + uVar1 * 8);
    do {
      lVar2 = lVar2 + -1;
      *param_1 = (int)(*pdVar3 * 2147483648.0);
      param_1 = param_1 + 1;
      pdVar3 = pdVar3 + 1;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 00614c5c  ma_dr_wav_alaw_to_s32 =====

void ma_dr_wav_alaw_to_s32(int *param_1,byte *param_2,long param_3)

{
  if (((param_1 != (int *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
    do {
      param_3 = param_3 + -1;
      *param_1 = (uint)*(ushort *)(&DAT_0028261c + (ulong)*param_2 * 2) << 0x10;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 00614c8c  ma_dr_wav_mulaw_to_s32 =====

void ma_dr_wav_mulaw_to_s32(int *param_1,byte *param_2,long param_3)

{
  if (((param_1 != (int *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
    do {
      param_3 = param_3 + -1;
      *param_1 = (uint)*(ushort *)(&DAT_0028281c + (ulong)*param_2 * 2) << 0x10;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 00614cbc  ma_dr_wav_open_and_read_pcm_frames_s16 =====

undefined8
ma_dr_wav_open_and_read_pcm_frames_s16
          (long param_1,long param_2,undefined8 param_3,undefined4 *param_4,undefined4 *param_5,
          undefined8 *param_6,undefined8 *param_7)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_1d8 [3];
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  code *local_1b0;
  code *pcStack_1a8;
  code *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  uVar3 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_00614de8;
  local_50 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_1d8[1] = 0;
  local_1b8 = 0;
  uStack_198 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  local_1d8[0] = param_1;
  local_1d8[2] = param_2;
  uStack_1c0 = param_3;
  if (param_7 == (undefined8 *)0x0) {
    local_1b0 = malloc;
    pcStack_1a8 = realloc;
    local_1a0 = free;
LAB_00614da4:
    iVar2 = FUN_005dcfc4(local_1d8,0,0,0);
    if (iVar2 != 0) {
      uVar3 = FUN_00614e18(local_1d8,param_4,param_5,param_6);
      goto LAB_00614de8;
    }
  }
  else {
    local_1b8 = *param_7;
    local_1b0 = (code *)param_7[1];
    pcStack_1a8 = (code *)param_7[2];
    local_1a0 = (code *)param_7[3];
    if ((local_1a0 != (code *)0x0) && (local_1b0 != (code *)0x0 || pcStack_1a8 != (code *)0x0))
    goto LAB_00614da4;
  }
  uVar3 = 0;
LAB_00614de8:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


// ===== 00614e18  FUN_00614e18 =====

long FUN_00614e18(long param_1,uint *param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(long *)(param_1 + 0x78) * (ulong)*(ushort *)(param_1 + 0x70);
  if ((uVar2 >> 0x1f & 0xffffffff) == 0) {
    lVar3 = uVar2 * 2;
    if (*(code **)(param_1 + 0x28) == (code *)0x0) {
      if (*(code **)(param_1 + 0x30) == (code *)0x0) goto LAB_00614ef4;
      lVar3 = (**(code **)(param_1 + 0x30))(0,lVar3,*(undefined8 *)(param_1 + 0x20));
    }
    else {
      lVar3 = (**(code **)(param_1 + 0x28))(lVar3,*(undefined8 *)(param_1 + 0x20));
    }
    if (lVar3 != 0) {
      lVar1 = ma_dr_wav_read_pcm_frames_s16(param_1,*(undefined8 *)(param_1 + 0x78));
      if (lVar1 == *(long *)(param_1 + 0x78)) {
        ma_dr_wav_uninit(param_1);
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = *(undefined4 *)(param_1 + 0x6c);
        }
        if (param_2 != (uint *)0x0) {
          *param_2 = (uint)*(ushort *)(param_1 + 0x70);
        }
        if (param_4 == (undefined8 *)0x0) {
          return lVar3;
        }
        *param_4 = *(undefined8 *)(param_1 + 0x78);
        return lVar3;
      }
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(lVar3,*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
LAB_00614ef4:
  ma_dr_wav_uninit(param_1);
  return 0;
}


// ===== 00614f14  ma_dr_wav_open_and_read_pcm_frames_f32 =====

undefined8
ma_dr_wav_open_and_read_pcm_frames_f32
          (long param_1,long param_2,undefined8 param_3,undefined4 *param_4,undefined4 *param_5,
          undefined8 *param_6,undefined8 *param_7)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_1d8 [3];
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  code *local_1b0;
  code *pcStack_1a8;
  code *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  uVar3 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_00615040;
  local_50 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_1d8[1] = 0;
  local_1b8 = 0;
  uStack_198 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  local_1d8[0] = param_1;
  local_1d8[2] = param_2;
  uStack_1c0 = param_3;
  if (param_7 == (undefined8 *)0x0) {
    local_1b0 = malloc;
    pcStack_1a8 = realloc;
    local_1a0 = free;
LAB_00614ffc:
    iVar2 = FUN_005dcfc4(local_1d8,0,0,0);
    if (iVar2 != 0) {
      uVar3 = FUN_00615070(local_1d8,param_4,param_5,param_6);
      goto LAB_00615040;
    }
  }
  else {
    local_1b8 = *param_7;
    local_1b0 = (code *)param_7[1];
    pcStack_1a8 = (code *)param_7[2];
    local_1a0 = (code *)param_7[3];
    if ((local_1a0 != (code *)0x0) && (local_1b0 != (code *)0x0 || pcStack_1a8 != (code *)0x0))
    goto LAB_00614ffc;
  }
  uVar3 = 0;
LAB_00615040:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


// ===== 00615070  FUN_00615070 =====

long FUN_00615070(long param_1,uint *param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(long *)(param_1 + 0x78) * (ulong)*(ushort *)(param_1 + 0x70);
  if ((uVar2 >> 0x1e & 0xffffffff) == 0) {
    lVar3 = uVar2 * 4;
    if (*(code **)(param_1 + 0x28) == (code *)0x0) {
      if (*(code **)(param_1 + 0x30) == (code *)0x0) goto LAB_0061514c;
      lVar3 = (**(code **)(param_1 + 0x30))(0,lVar3,*(undefined8 *)(param_1 + 0x20));
    }
    else {
      lVar3 = (**(code **)(param_1 + 0x28))(lVar3,*(undefined8 *)(param_1 + 0x20));
    }
    if (lVar3 != 0) {
      lVar1 = ma_dr_wav_read_pcm_frames_f32(param_1,*(undefined8 *)(param_1 + 0x78));
      if (lVar1 == *(long *)(param_1 + 0x78)) {
        ma_dr_wav_uninit(param_1);
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = *(undefined4 *)(param_1 + 0x6c);
        }
        if (param_2 != (uint *)0x0) {
          *param_2 = (uint)*(ushort *)(param_1 + 0x70);
        }
        if (param_4 == (undefined8 *)0x0) {
          return lVar3;
        }
        *param_4 = *(undefined8 *)(param_1 + 0x78);
        return lVar3;
      }
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(lVar3,*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
LAB_0061514c:
  ma_dr_wav_uninit(param_1);
  return 0;
}


// ===== 0061516c  ma_dr_wav_open_and_read_pcm_frames_s32 =====

undefined8
ma_dr_wav_open_and_read_pcm_frames_s32
          (long param_1,long param_2,undefined8 param_3,undefined4 *param_4,undefined4 *param_5,
          undefined8 *param_6,undefined8 *param_7)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_1d8 [3];
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  code *local_1b0;
  code *pcStack_1a8;
  code *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  uVar3 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_00615298;
  local_50 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_1d8[1] = 0;
  local_1b8 = 0;
  uStack_198 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  local_1d8[0] = param_1;
  local_1d8[2] = param_2;
  uStack_1c0 = param_3;
  if (param_7 == (undefined8 *)0x0) {
    local_1b0 = malloc;
    pcStack_1a8 = realloc;
    local_1a0 = free;
LAB_00615254:
    iVar2 = FUN_005dcfc4(local_1d8,0,0,0);
    if (iVar2 != 0) {
      uVar3 = FUN_006152c8(local_1d8,param_4,param_5,param_6);
      goto LAB_00615298;
    }
  }
  else {
    local_1b8 = *param_7;
    local_1b0 = (code *)param_7[1];
    pcStack_1a8 = (code *)param_7[2];
    local_1a0 = (code *)param_7[3];
    if ((local_1a0 != (code *)0x0) && (local_1b0 != (code *)0x0 || pcStack_1a8 != (code *)0x0))
    goto LAB_00615254;
  }
  uVar3 = 0;
LAB_00615298:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


// ===== 006152c8  FUN_006152c8 =====

long FUN_006152c8(long param_1,uint *param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(long *)(param_1 + 0x78) * (ulong)*(ushort *)(param_1 + 0x70);
  if ((uVar2 >> 0x1e & 0xffffffff) == 0) {
    lVar3 = uVar2 * 4;
    if (*(code **)(param_1 + 0x28) == (code *)0x0) {
      if (*(code **)(param_1 + 0x30) == (code *)0x0) goto LAB_006153a4;
      lVar3 = (**(code **)(param_1 + 0x30))(0,lVar3,*(undefined8 *)(param_1 + 0x20));
    }
    else {
      lVar3 = (**(code **)(param_1 + 0x28))(lVar3,*(undefined8 *)(param_1 + 0x20));
    }
    if (lVar3 != 0) {
      lVar1 = ma_dr_wav_read_pcm_frames_s32(param_1,*(undefined8 *)(param_1 + 0x78));
      if (lVar1 == *(long *)(param_1 + 0x78)) {
        ma_dr_wav_uninit(param_1);
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = *(undefined4 *)(param_1 + 0x6c);
        }
        if (param_2 != (uint *)0x0) {
          *param_2 = (uint)*(ushort *)(param_1 + 0x70);
        }
        if (param_4 == (undefined8 *)0x0) {
          return lVar3;
        }
        *param_4 = *(undefined8 *)(param_1 + 0x78);
        return lVar3;
      }
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(lVar3,*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
LAB_006153a4:
  ma_dr_wav_uninit(param_1);
  return 0;
}


// ===== 006153c4  ma_dr_wav_open_file_and_read_pcm_frames_s16 =====

void ma_dr_wav_open_file_and_read_pcm_frames_s16
               (undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
               undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_1d8 [400];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  iVar2 = ma_dr_wav_init_file(auStack_1d8,param_1,param_5);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00614e18(auStack_1d8,param_2,param_3,param_4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00615468  ma_dr_wav_open_file_and_read_pcm_frames_f32 =====

void ma_dr_wav_open_file_and_read_pcm_frames_f32
               (undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
               undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_1d8 [400];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  iVar2 = ma_dr_wav_init_file(auStack_1d8,param_1,param_5);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00615070(auStack_1d8,param_2,param_3,param_4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0061550c  ma_dr_wav_open_file_and_read_pcm_frames_s32 =====

void ma_dr_wav_open_file_and_read_pcm_frames_s32
               (undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
               undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_1d8 [400];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  iVar2 = ma_dr_wav_init_file(auStack_1d8,param_1,param_5);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_006152c8(auStack_1d8,param_2,param_3,param_4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 006155b0  ma_dr_wav_open_file_and_read_pcm_frames_s16_w =====

void ma_dr_wav_open_file_and_read_pcm_frames_s16_w
               (undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  FILE *local_1f0;
  code *local_1e8;
  undefined8 local_1e0;
  code *pcStack_1d8;
  FILE *pFStack_1d0;
  undefined8 local_1c8;
  code *local_1c0;
  code *pcStack_1b8;
  code *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  iVar2 = ma_wfopen(&local_1f0,param_1,&DAT_0025401c,param_5);
  if (iVar2 == 0) {
    local_60 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
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
    uStack_168 = 0;
    local_170 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_1e8 = FUN_005e3f24;
    local_1e0 = 0;
    local_1c8 = 0;
    uStack_1a8 = 0;
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    local_180 = 0;
    pcStack_1d8 = FUN_005e3f34;
    pFStack_1d0 = local_1f0;
    if (param_5 == (undefined8 *)0x0) {
      local_1c0 = malloc;
      pcStack_1b8 = realloc;
      local_1b0 = free;
LAB_006156d4:
      iVar2 = FUN_005dcfc4(&local_1e8,0,0,0);
      if (iVar2 != 0) {
        uVar3 = FUN_00614e18(&local_1e8,param_2,param_3,param_4);
        goto LAB_00615710;
      }
    }
    else {
      local_1c8 = *param_5;
      local_1c0 = (code *)param_5[1];
      pcStack_1b8 = (code *)param_5[2];
      local_1b0 = (code *)param_5[3];
      if ((local_1b0 != (code *)0x0) && (local_1c0 != (code *)0x0 || pcStack_1b8 != (code *)0x0))
      goto LAB_006156d4;
    }
    fclose(local_1f0);
  }
  uVar3 = 0;
LAB_00615710:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


// ===== 00615740  ma_dr_wav_open_file_and_read_pcm_frames_f32_w =====

void ma_dr_wav_open_file_and_read_pcm_frames_f32_w
               (undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  FILE *local_1f0;
  code *local_1e8;
  undefined8 local_1e0;
  code *pcStack_1d8;
  FILE *pFStack_1d0;
  undefined8 local_1c8;
  code *local_1c0;
  code *pcStack_1b8;
  code *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  iVar2 = ma_wfopen(&local_1f0,param_1,&DAT_0025401c,param_5);
  if (iVar2 == 0) {
    local_60 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
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
    uStack_168 = 0;
    local_170 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_1e8 = FUN_005e3f24;
    local_1e0 = 0;
    local_1c8 = 0;
    uStack_1a8 = 0;
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    local_180 = 0;
    pcStack_1d8 = FUN_005e3f34;
    pFStack_1d0 = local_1f0;
    if (param_5 == (undefined8 *)0x0) {
      local_1c0 = malloc;
      pcStack_1b8 = realloc;
      local_1b0 = free;
LAB_00615864:
      iVar2 = FUN_005dcfc4(&local_1e8,0,0,0);
      if (iVar2 != 0) {
        uVar3 = FUN_00615070(&local_1e8,param_2,param_3,param_4);
        goto LAB_006158a0;
      }
    }
    else {
      local_1c8 = *param_5;
      local_1c0 = (code *)param_5[1];
      pcStack_1b8 = (code *)param_5[2];
      local_1b0 = (code *)param_5[3];
      if ((local_1b0 != (code *)0x0) && (local_1c0 != (code *)0x0 || pcStack_1b8 != (code *)0x0))
      goto LAB_00615864;
    }
    fclose(local_1f0);
  }
  uVar3 = 0;
LAB_006158a0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


// ===== 006158d0  ma_dr_wav_open_file_and_read_pcm_frames_s32_w =====

void ma_dr_wav_open_file_and_read_pcm_frames_s32_w
               (undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  FILE *local_1f0;
  code *local_1e8;
  undefined8 local_1e0;
  code *pcStack_1d8;
  FILE *pFStack_1d0;
  undefined8 local_1c8;
  code *local_1c0;
  code *pcStack_1b8;
  code *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  iVar2 = ma_wfopen(&local_1f0,param_1,&DAT_0025401c,param_5);
  if (iVar2 == 0) {
    local_60 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
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
    uStack_168 = 0;
    local_170 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_1e8 = FUN_005e3f24;
    local_1e0 = 0;
    local_1c8 = 0;
    uStack_1a8 = 0;
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    local_180 = 0;
    pcStack_1d8 = FUN_005e3f34;
    pFStack_1d0 = local_1f0;
    if (param_5 == (undefined8 *)0x0) {
      local_1c0 = malloc;
      pcStack_1b8 = realloc;
      local_1b0 = free;
LAB_006159f4:
      iVar2 = FUN_005dcfc4(&local_1e8,0,0,0);
      if (iVar2 != 0) {
        uVar3 = FUN_006152c8(&local_1e8,param_2,param_3,param_4);
        goto LAB_00615a30;
      }
    }
    else {
      local_1c8 = *param_5;
      local_1c0 = (code *)param_5[1];
      pcStack_1b8 = (code *)param_5[2];
      local_1b0 = (code *)param_5[3];
      if ((local_1b0 != (code *)0x0) && (local_1c0 != (code *)0x0 || pcStack_1b8 != (code *)0x0))
      goto LAB_006159f4;
    }
    fclose(local_1f0);
  }
  uVar3 = 0;
LAB_00615a30:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


// ===== 00615a60  ma_dr_wav_open_memory_and_read_pcm_frames_s16 =====

undefined8
ma_dr_wav_open_memory_and_read_pcm_frames_s16
          (long param_1,long param_2,undefined4 *param_3,undefined4 *param_4,undefined8 *param_5,
          undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  code *local_1d8;
  undefined8 local_1d0;
  code *pcStack_1c8;
  code **ppcStack_1c0;
  undefined8 local_1b8;
  code *local_1b0;
  code *pcStack_1a8;
  code *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long lStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  uVar3 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_00615ba4;
  ppcStack_1c0 = &local_1d8;
  local_50 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = 0;
  lStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_1d8 = FUN_005e451c;
  local_1d0 = 0;
  local_1b8 = 0;
  uStack_198 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  pcStack_1c8 = FUN_005e4574;
  if (param_6 == (undefined8 *)0x0) {
    local_1b0 = malloc;
    pcStack_1a8 = realloc;
    local_1a0 = free;
LAB_00615b58:
    uStack_108 = 0;
    lStack_118 = param_1;
    local_110 = param_2;
    iVar2 = FUN_005dcfc4(&local_1d8,0,0,0);
    if (iVar2 != 0) {
      uVar3 = FUN_00614e18(&local_1d8,param_3,param_4,param_5);
      goto LAB_00615ba4;
    }
  }
  else {
    local_1b8 = *param_6;
    local_1b0 = (code *)param_6[1];
    pcStack_1a8 = (code *)param_6[2];
    local_1a0 = (code *)param_6[3];
    if ((local_1a0 != (code *)0x0) && (local_1b0 != (code *)0x0 || pcStack_1a8 != (code *)0x0))
    goto LAB_00615b58;
  }
  uVar3 = 0;
LAB_00615ba4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


// ===== 00615bd4  ma_dr_wav_open_memory_and_read_pcm_frames_f32 =====

undefined8
ma_dr_wav_open_memory_and_read_pcm_frames_f32
          (long param_1,long param_2,undefined4 *param_3,undefined4 *param_4,undefined8 *param_5,
          undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  code *local_1d8;
  undefined8 local_1d0;
  code *pcStack_1c8;
  code **ppcStack_1c0;
  undefined8 local_1b8;
  code *local_1b0;
  code *pcStack_1a8;
  code *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long lStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  uVar3 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_00615d18;
  ppcStack_1c0 = &local_1d8;
  local_50 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = 0;
  lStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_1d8 = FUN_005e451c;
  local_1d0 = 0;
  local_1b8 = 0;
  uStack_198 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  pcStack_1c8 = FUN_005e4574;
  if (param_6 == (undefined8 *)0x0) {
    local_1b0 = malloc;
    pcStack_1a8 = realloc;
    local_1a0 = free;
LAB_00615ccc:
    uStack_108 = 0;
    lStack_118 = param_1;
    local_110 = param_2;
    iVar2 = FUN_005dcfc4(&local_1d8,0,0,0);
    if (iVar2 != 0) {
      uVar3 = FUN_00615070(&local_1d8,param_3,param_4,param_5);
      goto LAB_00615d18;
    }
  }
  else {
    local_1b8 = *param_6;
    local_1b0 = (code *)param_6[1];
    pcStack_1a8 = (code *)param_6[2];
    local_1a0 = (code *)param_6[3];
    if ((local_1a0 != (code *)0x0) && (local_1b0 != (code *)0x0 || pcStack_1a8 != (code *)0x0))
    goto LAB_00615ccc;
  }
  uVar3 = 0;
LAB_00615d18:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


// ===== 00615d48  ma_dr_wav_open_memory_and_read_pcm_frames_s32 =====

undefined8
ma_dr_wav_open_memory_and_read_pcm_frames_s32
          (long param_1,long param_2,undefined4 *param_3,undefined4 *param_4,undefined8 *param_5,
          undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  code *local_1d8;
  undefined8 local_1d0;
  code *pcStack_1c8;
  code **ppcStack_1c0;
  undefined8 local_1b8;
  code *local_1b0;
  code *pcStack_1a8;
  code *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long lStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  uVar3 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_00615e8c;
  ppcStack_1c0 = &local_1d8;
  local_50 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = 0;
  lStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_1d8 = FUN_005e451c;
  local_1d0 = 0;
  local_1b8 = 0;
  uStack_198 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  pcStack_1c8 = FUN_005e4574;
  if (param_6 == (undefined8 *)0x0) {
    local_1b0 = malloc;
    pcStack_1a8 = realloc;
    local_1a0 = free;
LAB_00615e40:
    uStack_108 = 0;
    lStack_118 = param_1;
    local_110 = param_2;
    iVar2 = FUN_005dcfc4(&local_1d8,0,0,0);
    if (iVar2 != 0) {
      uVar3 = FUN_006152c8(&local_1d8,param_3,param_4,param_5);
      goto LAB_00615e8c;
    }
  }
  else {
    local_1b8 = *param_6;
    local_1b0 = (code *)param_6[1];
    pcStack_1a8 = (code *)param_6[2];
    local_1a0 = (code *)param_6[3];
    if ((local_1a0 != (code *)0x0) && (local_1b0 != (code *)0x0 || pcStack_1a8 != (code *)0x0))
    goto LAB_00615e40;
  }
  uVar3 = 0;
LAB_00615e8c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


// ===== 00615ebc  ma_dr_wav_bytes_to_s16 =====

undefined2 ma_dr_wav_bytes_to_s16(undefined2 *param_1)

{
  return *param_1;
}


// ===== 00615ec4  ma_dr_wav_bytes_to_u32 =====

undefined4 ma_dr_wav_bytes_to_u32(undefined4 *param_1)

{
  return *param_1;
}


// ===== 00615ecc  ma_dr_wav_bytes_to_f32 =====

undefined4 ma_dr_wav_bytes_to_f32(undefined4 *param_1)

{
  return *param_1;
}


// ===== 00615ed4  ma_dr_wav_bytes_to_s32 =====

undefined4 ma_dr_wav_bytes_to_s32(undefined4 *param_1)

{
  return *param_1;
}


// ===== 00615edc  ma_dr_wav_bytes_to_u64 =====

undefined8 ma_dr_wav_bytes_to_u64(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00615ee4  ma_dr_wav_bytes_to_s64 =====

undefined8 ma_dr_wav_bytes_to_s64(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00615eec  ma_dr_wav_fourcc_equal =====

bool ma_dr_wav_fourcc_equal(char *param_1,char *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return param_1[3] == param_2[3];
  }
  return false;
}


// ===== 00615f38  ma_dr_flac_version =====

void ma_dr_flac_version(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0xc;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0x2b;
  }
  return;
}


// ===== 00615f5c  ma_dr_flac_version_string =====

char * ma_dr_flac_version_string(void)

{
  return "0.12.43";
}


// ===== 00615f68  ma_dr_flac_open_file_with_metadata =====

FILE * ma_dr_flac_open_file_with_metadata
                 (FILE *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FILE *__stream;
  
  if (((param_1 != (FILE *)0x0) &&
      (__stream = fopen((char *)param_1,"rb"), param_1 = __stream, __stream != (FILE *)0x0)) &&
     (param_1 = (FILE *)FUN_005e633c(FUN_005f8a04,FUN_005f8a14,param_2,2,__stream,param_3,param_4),
     param_1 == (FILE *)0x0)) {
    fclose(__stream);
    param_1 = (FILE *)0x0;
  }
  return param_1;
}


// ===== 00615fe4  ma_dr_flac_open_file_with_metadata_w =====

void ma_dr_flac_open_file_with_metadata_w
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  FILE *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = ma_wfopen(&local_40,param_1,&DAT_0025401c);
  if (iVar2 == 0) {
    lVar3 = FUN_005e633c(FUN_005f8a04,FUN_005f8a14,param_2,2,local_40,param_3,param_4);
    if (lVar3 != 0) goto LAB_0061605c;
    fclose(local_40);
  }
  lVar3 = 0;
LAB_0061605c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


// ===== 00616090  ma_dr_flac_open_memory_with_metadata =====

void ma_dr_flac_open_memory_with_metadata
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  local_40 = param_1;
  uStack_38 = param_2;
  lVar2 = FUN_005e633c(FUN_005f8dc8,FUN_005f8e20,param_3,2,&local_40,param_4,param_5);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x100) = uStack_38;
    *(undefined8 *)(lVar2 + 0xf8) = local_40;
    *(undefined8 *)(lVar2 + 0x108) = local_30;
    if (*(int *)(lVar2 + 0x40) == 1) {
      plVar3 = (long *)(*(long *)(lVar2 + 0x120) + 0x10);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x140);
    }
    *plVar3 = lVar2 + 0xf8;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00616134  ma_dr_flac_open_relaxed =====

void ma_dr_flac_open_relaxed
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  FUN_005e633c(param_1,param_2,0,param_3,param_4,param_4,param_5);
  return;
}


// ===== 0061614c  ma_dr_flac_open_with_metadata =====

void ma_dr_flac_open_with_metadata(void)

{
  FUN_005e633c();
  return;
}


// ===== 00616160  ma_dr_flac_open_with_metadata_relaxed =====

void ma_dr_flac_open_with_metadata_relaxed(void)

{
  FUN_005e633c();
  return;
}


// ===== 0061616c  ma_dr_flac_open_and_read_pcm_frames_s32 =====

void ma_dr_flac_open_and_read_pcm_frames_s32
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
               undefined4 *param_5,undefined8 *param_6)

{
  long lVar1;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  lVar1 = FUN_005e633c(param_1,param_2,0,2,param_3,param_3);
  if (lVar1 != 0) {
    FUN_006161e4(lVar1,param_4,param_5,param_6);
    return;
  }
  return;
}


// ===== 006161e4  FUN_006161e4 =====

void * FUN_006161e4(void *param_1,uint *param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  void *__src;
  void *__dest;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  void *pvVar7;
  ulong uVar8;
  undefined1 auStack_4070 [16384];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pvVar3 = param_1;
  if (*(long *)((long)param_1 + 0x38) == 0) {
    if (*(code **)((long)param_1 + 0x18) == (code *)0x0) {
      if ((*(code **)((long)param_1 + 0x20) != (code *)0x0) &&
         (pvVar3 = (void *)(**(code **)((long)param_1 + 0x20))
                                     (0,0x4000,*(undefined8 *)((long)param_1 + 0x10)),
         __src = pvVar3, pvVar3 != (void *)0x0)) goto LAB_006162a8;
    }
    else {
      __src = (void *)(**(code **)((long)param_1 + 0x18))
                                (0x4000,*(undefined8 *)((long)param_1 + 0x10));
      if (__src != (void *)0x0) {
LAB_006162a8:
        uVar4 = 0x4000;
        pvVar7 = (void *)0x0;
        do {
          uVar2 = 0;
          if (*(byte *)((long)param_1 + 0x34) != 0) {
            uVar2 = 0x1000 / *(byte *)((long)param_1 + 0x34);
          }
          pvVar3 = (void *)ma_dr_flac_read_pcm_frames_s32(param_1,uVar2,auStack_4070);
          if (pvVar3 == (void *)0x0) {
            lVar5 = (long)pvVar7 * (ulong)*(byte *)((long)param_1 + 0x34);
            pvVar3 = memset((void *)((long)__src + lVar5 * 4),0,uVar4 + lVar5 * -4);
            goto joined_r0x00616448;
          }
          __dest = __src;
          if (uVar4 < ((long)pvVar3 + (long)pvVar7) * (ulong)*(byte *)((long)param_1 + 0x34) * 4) {
            uVar8 = uVar4 << 1;
            if (*(code **)((long)param_1 + 0x20) == (code *)0x0) {
              __dest = pvVar3;
              if (*(code **)((long)param_1 + 0x18) == (code *)0x0) goto LAB_00616450;
              if (*(long *)((long)param_1 + 0x28) == 0) goto LAB_00616464;
              __dest = (void *)(**(code **)((long)param_1 + 0x18))
                                         (uVar8,*(undefined8 *)((long)param_1 + 0x10));
              if (__dest == (void *)0x0) goto LAB_00616450;
              memcpy(__dest,__src,uVar4);
              (**(code **)((long)param_1 + 0x28))(__src,*(undefined8 *)((long)param_1 + 0x10));
              uVar4 = uVar8;
            }
            else {
              __dest = (void *)(**(code **)((long)param_1 + 0x20))
                                         (__src,uVar8,*(undefined8 *)((long)param_1 + 0x10));
              uVar4 = uVar8;
              if (__dest == (void *)0x0) goto code_r0x0061633c;
            }
          }
          __src = __dest;
          memcpy((void *)((long)__src + (long)pvVar7 * (ulong)*(byte *)((long)param_1 + 0x34) * 4),
                 auStack_4070,(long)pvVar3 * (ulong)*(byte *)((long)param_1 + 0x34) * 4);
          pvVar7 = (void *)((long)pvVar3 + (long)pvVar7);
        } while( true );
      }
      pvVar3 = (void *)0x0;
    }
  }
  else {
    uVar4 = *(long *)((long)param_1 + 0x38) * (ulong)*(byte *)((long)param_1 + 0x34);
    if ((uVar4 >> 0x1e & 0xffffffff) == 0) {
      lVar5 = uVar4 * 4;
      if (*(code **)((long)param_1 + 0x18) == (code *)0x0) {
        if ((*(code **)((long)param_1 + 0x20) != (code *)0x0) &&
           (__src = (void *)(**(code **)((long)param_1 + 0x20))
                                      (0,lVar5,*(undefined8 *)((long)param_1 + 0x10)),
           pvVar3 = __src, __src != (void *)0x0)) goto LAB_006163a4;
      }
      else {
        __src = (void *)(**(code **)((long)param_1 + 0x18))
                                  (lVar5,*(undefined8 *)((long)param_1 + 0x10));
        if (__src != (void *)0x0) {
LAB_006163a4:
          pvVar3 = (void *)ma_dr_flac_read_pcm_frames_s32
                                     (param_1,*(undefined8 *)((long)param_1 + 0x38),__src);
          pvVar7 = pvVar3;
joined_r0x00616448:
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)((long)param_1 + 0x30);
          }
          if (param_2 != (uint *)0x0) {
            *param_2 = (uint)*(byte *)((long)param_1 + 0x34);
          }
          if (param_4 != (long *)0x0) {
            *param_4 = (long)pvVar7;
          }
          if (*(code **)((long)param_1 + 0x130) == FUN_005f8a04) {
            uVar2 = fclose(*(FILE **)((long)param_1 + 0x140));
            pvVar3 = (void *)(ulong)uVar2;
          }
          if ((*(int *)((long)param_1 + 0x40) == 1) &&
             ((code *)**(undefined8 **)((long)param_1 + 0x120) == FUN_005f8a04)) {
            uVar2 = fclose((FILE *)(*(undefined8 **)((long)param_1 + 0x120))[2]);
            pvVar3 = (void *)(ulong)uVar2;
          }
          pcVar6 = *(code **)((long)param_1 + 0x28);
          goto joined_r0x006164ac;
        }
        pvVar3 = (void *)0x0;
      }
    }
  }
  goto LAB_00616464;
code_r0x0061633c:
  __dest = (void *)0x0;
LAB_00616450:
  pvVar3 = __dest;
  if (*(code **)((long)param_1 + 0x28) != (code *)0x0) {
    pvVar3 = (void *)(**(code **)((long)param_1 + 0x28))
                               (__src,*(undefined8 *)((long)param_1 + 0x10));
  }
LAB_00616464:
  if (*(code **)((long)param_1 + 0x130) == FUN_005f8a04) {
    uVar2 = fclose(*(FILE **)((long)param_1 + 0x140));
    pvVar3 = (void *)(ulong)uVar2;
  }
  if ((*(int *)((long)param_1 + 0x40) == 1) &&
     ((code *)**(undefined8 **)((long)param_1 + 0x120) == FUN_005f8a04)) {
    uVar2 = fclose((FILE *)(*(undefined8 **)((long)param_1 + 0x120))[2]);
    pvVar3 = (void *)(ulong)uVar2;
  }
  pcVar6 = *(code **)((long)param_1 + 0x28);
  __src = (void *)0x0;
joined_r0x006164ac:
  if (pcVar6 != (code *)0x0) {
    pvVar3 = (void *)(*pcVar6)(param_1,*(undefined8 *)((long)param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar3);
  }
  return __src;
}


// ===== 006164f8  ma_dr_flac_open_and_read_pcm_frames_s16 =====

void ma_dr_flac_open_and_read_pcm_frames_s16
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
               undefined4 *param_5,undefined8 *param_6)

{
  long lVar1;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  lVar1 = FUN_005e633c(param_1,param_2,0,2,param_3,param_3);
  if (lVar1 != 0) {
    FUN_00616570(lVar1,param_4,param_5,param_6);
    return;
  }
  return;
}


// ===== 00616570  FUN_00616570 =====

void * FUN_00616570(void *param_1,uint *param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  void *__src;
  void *__dest;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  void *pvVar7;
  ulong uVar8;
  undefined1 auStack_2070 [8192];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pvVar3 = param_1;
  if (*(long *)((long)param_1 + 0x38) == 0) {
    if (*(code **)((long)param_1 + 0x18) == (code *)0x0) {
      if ((*(code **)((long)param_1 + 0x20) != (code *)0x0) &&
         (pvVar3 = (void *)(**(code **)((long)param_1 + 0x20))
                                     (0,0x2000,*(undefined8 *)((long)param_1 + 0x10)),
         __src = pvVar3, pvVar3 != (void *)0x0)) goto LAB_00616634;
    }
    else {
      __src = (void *)(**(code **)((long)param_1 + 0x18))
                                (0x2000,*(undefined8 *)((long)param_1 + 0x10));
      if (__src != (void *)0x0) {
LAB_00616634:
        uVar4 = 0x2000;
        pvVar7 = (void *)0x0;
        do {
          uVar2 = 0;
          if (*(byte *)((long)param_1 + 0x34) != 0) {
            uVar2 = 0x1000 / *(byte *)((long)param_1 + 0x34);
          }
          pvVar3 = (void *)ma_dr_flac_read_pcm_frames_s16(param_1,uVar2,auStack_2070);
          if (pvVar3 == (void *)0x0) {
            lVar5 = (long)pvVar7 * (ulong)*(byte *)((long)param_1 + 0x34);
            pvVar3 = memset((void *)((long)__src + lVar5 * 2),0,uVar4 + lVar5 * -2);
            goto joined_r0x006167d4;
          }
          __dest = __src;
          if (uVar4 < ((long)pvVar3 + (long)pvVar7) * (ulong)*(byte *)((long)param_1 + 0x34) * 2) {
            uVar8 = uVar4 << 1;
            if (*(code **)((long)param_1 + 0x20) == (code *)0x0) {
              __dest = pvVar3;
              if (*(code **)((long)param_1 + 0x18) == (code *)0x0) goto LAB_006167dc;
              if (*(long *)((long)param_1 + 0x28) == 0) goto LAB_006167f0;
              __dest = (void *)(**(code **)((long)param_1 + 0x18))
                                         (uVar8,*(undefined8 *)((long)param_1 + 0x10));
              if (__dest == (void *)0x0) goto LAB_006167dc;
              memcpy(__dest,__src,uVar4);
              (**(code **)((long)param_1 + 0x28))(__src,*(undefined8 *)((long)param_1 + 0x10));
              uVar4 = uVar8;
            }
            else {
              __dest = (void *)(**(code **)((long)param_1 + 0x20))
                                         (__src,uVar8,*(undefined8 *)((long)param_1 + 0x10));
              uVar4 = uVar8;
              if (__dest == (void *)0x0) goto code_r0x006166c8;
            }
          }
          __src = __dest;
          memcpy((void *)((long)__src + (long)pvVar7 * (ulong)*(byte *)((long)param_1 + 0x34) * 2),
                 auStack_2070,(long)pvVar3 * (ulong)*(byte *)((long)param_1 + 0x34) * 2);
          pvVar7 = (void *)((long)pvVar3 + (long)pvVar7);
        } while( true );
      }
      pvVar3 = (void *)0x0;
    }
  }
  else {
    uVar4 = *(long *)((long)param_1 + 0x38) * (ulong)*(byte *)((long)param_1 + 0x34);
    if ((uVar4 >> 0x1f & 0xffffffff) == 0) {
      lVar5 = uVar4 * 2;
      if (*(code **)((long)param_1 + 0x18) == (code *)0x0) {
        if ((*(code **)((long)param_1 + 0x20) != (code *)0x0) &&
           (__src = (void *)(**(code **)((long)param_1 + 0x20))
                                      (0,lVar5,*(undefined8 *)((long)param_1 + 0x10)),
           pvVar3 = __src, __src != (void *)0x0)) goto LAB_00616730;
      }
      else {
        __src = (void *)(**(code **)((long)param_1 + 0x18))
                                  (lVar5,*(undefined8 *)((long)param_1 + 0x10));
        if (__src != (void *)0x0) {
LAB_00616730:
          pvVar3 = (void *)ma_dr_flac_read_pcm_frames_s16
                                     (param_1,*(undefined8 *)((long)param_1 + 0x38),__src);
          pvVar7 = pvVar3;
joined_r0x006167d4:
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)((long)param_1 + 0x30);
          }
          if (param_2 != (uint *)0x0) {
            *param_2 = (uint)*(byte *)((long)param_1 + 0x34);
          }
          if (param_4 != (long *)0x0) {
            *param_4 = (long)pvVar7;
          }
          if (*(code **)((long)param_1 + 0x130) == FUN_005f8a04) {
            uVar2 = fclose(*(FILE **)((long)param_1 + 0x140));
            pvVar3 = (void *)(ulong)uVar2;
          }
          if ((*(int *)((long)param_1 + 0x40) == 1) &&
             ((code *)**(undefined8 **)((long)param_1 + 0x120) == FUN_005f8a04)) {
            uVar2 = fclose((FILE *)(*(undefined8 **)((long)param_1 + 0x120))[2]);
            pvVar3 = (void *)(ulong)uVar2;
          }
          pcVar6 = *(code **)((long)param_1 + 0x28);
          goto joined_r0x00616838;
        }
        pvVar3 = (void *)0x0;
      }
    }
  }
  goto LAB_006167f0;
code_r0x006166c8:
  __dest = (void *)0x0;
LAB_006167dc:
  pvVar3 = __dest;
  if (*(code **)((long)param_1 + 0x28) != (code *)0x0) {
    pvVar3 = (void *)(**(code **)((long)param_1 + 0x28))
                               (__src,*(undefined8 *)((long)param_1 + 0x10));
  }
LAB_006167f0:
  if (*(code **)((long)param_1 + 0x130) == FUN_005f8a04) {
    uVar2 = fclose(*(FILE **)((long)param_1 + 0x140));
    pvVar3 = (void *)(ulong)uVar2;
  }
  if ((*(int *)((long)param_1 + 0x40) == 1) &&
     ((code *)**(undefined8 **)((long)param_1 + 0x120) == FUN_005f8a04)) {
    uVar2 = fclose((FILE *)(*(undefined8 **)((long)param_1 + 0x120))[2]);
    pvVar3 = (void *)(ulong)uVar2;
  }
  pcVar6 = *(code **)((long)param_1 + 0x28);
  __src = (void *)0x0;
joined_r0x00616838:
  if (pcVar6 != (code *)0x0) {
    pvVar3 = (void *)(*pcVar6)(param_1,*(undefined8 *)((long)param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar3);
  }
  return __src;
}


// ===== 00616884  ma_dr_flac_open_and_read_pcm_frames_f32 =====

void ma_dr_flac_open_and_read_pcm_frames_f32
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
               undefined4 *param_5,undefined8 *param_6)

{
  long lVar1;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  lVar1 = FUN_005e633c(param_1,param_2,0,2,param_3,param_3);
  if (lVar1 != 0) {
    FUN_006168fc(lVar1,param_4,param_5,param_6);
    return;
  }
  return;
}


// ===== 006168fc  FUN_006168fc =====

void * FUN_006168fc(void *param_1,uint *param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  void *__src;
  void *__dest;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  void *pvVar7;
  ulong uVar8;
  undefined1 auStack_4070 [16384];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  pvVar3 = param_1;
  if (*(long *)((long)param_1 + 0x38) == 0) {
    if (*(code **)((long)param_1 + 0x18) == (code *)0x0) {
      if ((*(code **)((long)param_1 + 0x20) != (code *)0x0) &&
         (pvVar3 = (void *)(**(code **)((long)param_1 + 0x20))
                                     (0,0x4000,*(undefined8 *)((long)param_1 + 0x10)),
         __src = pvVar3, pvVar3 != (void *)0x0)) goto LAB_006169c0;
    }
    else {
      __src = (void *)(**(code **)((long)param_1 + 0x18))
                                (0x4000,*(undefined8 *)((long)param_1 + 0x10));
      if (__src != (void *)0x0) {
LAB_006169c0:
        uVar4 = 0x4000;
        pvVar7 = (void *)0x0;
        do {
          uVar2 = 0;
          if (*(byte *)((long)param_1 + 0x34) != 0) {
            uVar2 = 0x1000 / *(byte *)((long)param_1 + 0x34);
          }
          pvVar3 = (void *)ma_dr_flac_read_pcm_frames_f32(param_1,uVar2,auStack_4070);
          if (pvVar3 == (void *)0x0) {
            lVar5 = (long)pvVar7 * (ulong)*(byte *)((long)param_1 + 0x34);
            pvVar3 = memset((void *)((long)__src + lVar5 * 4),0,uVar4 + lVar5 * -4);
            goto joined_r0x00616b60;
          }
          __dest = __src;
          if (uVar4 < ((long)pvVar3 + (long)pvVar7) * (ulong)*(byte *)((long)param_1 + 0x34) * 4) {
            uVar8 = uVar4 << 1;
            if (*(code **)((long)param_1 + 0x20) == (code *)0x0) {
              __dest = pvVar3;
              if (*(code **)((long)param_1 + 0x18) == (code *)0x0) goto LAB_00616b68;
              if (*(long *)((long)param_1 + 0x28) == 0) goto LAB_00616b7c;
              __dest = (void *)(**(code **)((long)param_1 + 0x18))
                                         (uVar8,*(undefined8 *)((long)param_1 + 0x10));
              if (__dest == (void *)0x0) goto LAB_00616b68;
              memcpy(__dest,__src,uVar4);
              (**(code **)((long)param_1 + 0x28))(__src,*(undefined8 *)((long)param_1 + 0x10));
              uVar4 = uVar8;
            }
            else {
              __dest = (void *)(**(code **)((long)param_1 + 0x20))
                                         (__src,uVar8,*(undefined8 *)((long)param_1 + 0x10));
              uVar4 = uVar8;
              if (__dest == (void *)0x0) goto code_r0x00616a54;
            }
          }
          __src = __dest;
          memcpy((void *)((long)__src + (long)pvVar7 * (ulong)*(byte *)((long)param_1 + 0x34) * 4),
                 auStack_4070,(long)pvVar3 * (ulong)*(byte *)((long)param_1 + 0x34) * 4);
          pvVar7 = (void *)((long)pvVar3 + (long)pvVar7);
        } while( true );
      }
      pvVar3 = (void *)0x0;
    }
  }
  else {
    uVar4 = *(long *)((long)param_1 + 0x38) * (ulong)*(byte *)((long)param_1 + 0x34);
    if ((uVar4 >> 0x1e & 0xffffffff) == 0) {
      lVar5 = uVar4 * 4;
      if (*(code **)((long)param_1 + 0x18) == (code *)0x0) {
        if ((*(code **)((long)param_1 + 0x20) != (code *)0x0) &&
           (__src = (void *)(**(code **)((long)param_1 + 0x20))
                                      (0,lVar5,*(undefined8 *)((long)param_1 + 0x10)),
           pvVar3 = __src, __src != (void *)0x0)) goto LAB_00616abc;
      }
      else {
        __src = (void *)(**(code **)((long)param_1 + 0x18))
                                  (lVar5,*(undefined8 *)((long)param_1 + 0x10));
        if (__src != (void *)0x0) {
LAB_00616abc:
          pvVar3 = (void *)ma_dr_flac_read_pcm_frames_f32
                                     (param_1,*(undefined8 *)((long)param_1 + 0x38),__src);
          pvVar7 = pvVar3;
joined_r0x00616b60:
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)((long)param_1 + 0x30);
          }
          if (param_2 != (uint *)0x0) {
            *param_2 = (uint)*(byte *)((long)param_1 + 0x34);
          }
          if (param_4 != (long *)0x0) {
            *param_4 = (long)pvVar7;
          }
          if (*(code **)((long)param_1 + 0x130) == FUN_005f8a04) {
            uVar2 = fclose(*(FILE **)((long)param_1 + 0x140));
            pvVar3 = (void *)(ulong)uVar2;
          }
          if ((*(int *)((long)param_1 + 0x40) == 1) &&
             ((code *)**(undefined8 **)((long)param_1 + 0x120) == FUN_005f8a04)) {
            uVar2 = fclose((FILE *)(*(undefined8 **)((long)param_1 + 0x120))[2]);
            pvVar3 = (void *)(ulong)uVar2;
          }
          pcVar6 = *(code **)((long)param_1 + 0x28);
          goto joined_r0x00616bc4;
        }
        pvVar3 = (void *)0x0;
      }
    }
  }
  goto LAB_00616b7c;
code_r0x00616a54:
  __dest = (void *)0x0;
LAB_00616b68:
  pvVar3 = __dest;
  if (*(code **)((long)param_1 + 0x28) != (code *)0x0) {
    pvVar3 = (void *)(**(code **)((long)param_1 + 0x28))
                               (__src,*(undefined8 *)((long)param_1 + 0x10));
  }
LAB_00616b7c:
  if (*(code **)((long)param_1 + 0x130) == FUN_005f8a04) {
    uVar2 = fclose(*(FILE **)((long)param_1 + 0x140));
    pvVar3 = (void *)(ulong)uVar2;
  }
  if ((*(int *)((long)param_1 + 0x40) == 1) &&
     ((code *)**(undefined8 **)((long)param_1 + 0x120) == FUN_005f8a04)) {
    uVar2 = fclose((FILE *)(*(undefined8 **)((long)param_1 + 0x120))[2]);
    pvVar3 = (void *)(ulong)uVar2;
  }
  pcVar6 = *(code **)((long)param_1 + 0x28);
  __src = (void *)0x0;
joined_r0x00616bc4:
  if (pcVar6 != (code *)0x0) {
    pvVar3 = (void *)(*pcVar6)(param_1,*(undefined8 *)((long)param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar3);
  }
  return __src;
}


// ===== 00616c10  ma_dr_flac_open_file_and_read_pcm_frames_s32 =====

undefined8
ma_dr_flac_open_file_and_read_pcm_frames_s32
          (char *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
          undefined8 param_5)

{
  FILE *__stream;
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if ((param_1 != (char *)0x0) && (__stream = fopen(param_1,"rb"), __stream != (FILE *)0x0)) {
    lVar1 = FUN_005e633c(FUN_005f8a04,FUN_005f8a14,0,2,__stream,__stream,param_5);
    if (lVar1 != 0) {
      uVar2 = FUN_006161e4(lVar1,param_2,param_3,param_4);
      return uVar2;
    }
    fclose(__stream);
  }
  return 0;
}


// ===== 00616cd0  ma_dr_flac_open_file_and_read_pcm_frames_s16 =====

undefined8
ma_dr_flac_open_file_and_read_pcm_frames_s16
          (char *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
          undefined8 param_5)

{
  FILE *__stream;
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if ((param_1 != (char *)0x0) && (__stream = fopen(param_1,"rb"), __stream != (FILE *)0x0)) {
    lVar1 = FUN_005e633c(FUN_005f8a04,FUN_005f8a14,0,2,__stream,__stream,param_5);
    if (lVar1 != 0) {
      uVar2 = FUN_00616570(lVar1,param_2,param_3,param_4);
      return uVar2;
    }
    fclose(__stream);
  }
  return 0;
}


// ===== 00616d90  ma_dr_flac_open_file_and_read_pcm_frames_f32 =====

undefined8
ma_dr_flac_open_file_and_read_pcm_frames_f32
          (char *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
          undefined8 param_5)

{
  FILE *__stream;
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if ((param_1 != (char *)0x0) && (__stream = fopen(param_1,"rb"), __stream != (FILE *)0x0)) {
    lVar1 = FUN_005e633c(FUN_005f8a04,FUN_005f8a14,0,2,__stream,__stream,param_5);
    if (lVar1 != 0) {
      uVar2 = FUN_006168fc(lVar1,param_2,param_3,param_4);
      return uVar2;
    }
    fclose(__stream);
  }
  return 0;
}


// ===== 00616e50  ma_dr_flac_open_memory_and_read_pcm_frames_s32 =====

void ma_dr_flac_open_memory_and_read_pcm_frames_s32
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
               undefined8 *param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  local_40 = 0;
  local_50 = param_1;
  uStack_48 = param_2;
  lVar2 = FUN_005e633c(FUN_005f8dc8,FUN_005f8e20,0,2,&local_50,&local_50,param_6);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x100) = uStack_48;
    *(undefined8 *)(lVar2 + 0xf8) = local_50;
    *(undefined8 *)(lVar2 + 0x108) = local_40;
    if (*(int *)(lVar2 + 0x40) == 1) {
      plVar3 = (long *)(*(long *)(lVar2 + 0x120) + 0x10);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x140);
    }
    *plVar3 = lVar2 + 0xf8;
    FUN_006161e4(lVar2,param_3,param_4,param_5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00616f34  ma_dr_flac_open_memory_and_read_pcm_frames_s16 =====

void ma_dr_flac_open_memory_and_read_pcm_frames_s16
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
               undefined8 *param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  local_40 = 0;
  local_50 = param_1;
  uStack_48 = param_2;
  lVar2 = FUN_005e633c(FUN_005f8dc8,FUN_005f8e20,0,2,&local_50,&local_50,param_6);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x100) = uStack_48;
    *(undefined8 *)(lVar2 + 0xf8) = local_50;
    *(undefined8 *)(lVar2 + 0x108) = local_40;
    if (*(int *)(lVar2 + 0x40) == 1) {
      plVar3 = (long *)(*(long *)(lVar2 + 0x120) + 0x10);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x140);
    }
    *plVar3 = lVar2 + 0xf8;
    FUN_00616570(lVar2,param_3,param_4,param_5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00617018  ma_dr_flac_open_memory_and_read_pcm_frames_f32 =====

void ma_dr_flac_open_memory_and_read_pcm_frames_f32
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
               undefined8 *param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  local_40 = 0;
  local_50 = param_1;
  uStack_48 = param_2;
  lVar2 = FUN_005e633c(FUN_005f8dc8,FUN_005f8e20,0,2,&local_50,&local_50,param_6);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x100) = uStack_48;
    *(undefined8 *)(lVar2 + 0xf8) = local_50;
    *(undefined8 *)(lVar2 + 0x108) = local_40;
    if (*(int *)(lVar2 + 0x40) == 1) {
      plVar3 = (long *)(*(long *)(lVar2 + 0x120) + 0x10);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x140);
    }
    *plVar3 = lVar2 + 0xf8;
    FUN_006168fc(lVar2,param_3,param_4,param_5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006170fc  ma_dr_flac_free =====

void ma_dr_flac_free(void *param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    free(param_1);
    return;
  }
  if ((param_1 != (void *)0x0) && ((code *)param_2[3] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00617110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2[3])(param_1,*param_2);
    return;
  }
  return;
}


// ===== 0061711c  ma_dr_flac_init_vorbis_comment_iterator =====

void ma_dr_flac_init_vorbis_comment_iterator
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    *(undefined8 *)(param_1 + 2) = param_3;
  }
  return;
}


// ===== 0061712c  ma_dr_flac_next_vorbis_comment =====

int * ma_dr_flac_next_vorbis_comment(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  piVar3 = param_1;
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar2 = *(int **)(param_1 + 2);
      piVar3 = piVar2;
      if (piVar2 != (int *)0x0) {
        piVar3 = piVar2 + 1;
        iVar1 = *piVar2;
        *param_1 = *param_1 + -1;
        *(long *)(param_1 + 2) = (long)piVar3 + (long)iVar1;
        if (param_2 != (int *)0x0) {
          *param_2 = iVar1;
          return piVar3;
        }
      }
    }
  }
  return piVar3;
}


// ===== 00617174  ma_dr_flac_init_cuesheet_track_iterator =====

void ma_dr_flac_init_cuesheet_track_iterator
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    *(undefined8 *)(param_1 + 2) = param_3;
  }
  return;
}


// ===== 00617184  ma_dr_flac_next_cuesheet_track =====

void ma_dr_flac_next_cuesheet_track(int *param_1,ulong *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) || (puVar7 = *(ulong **)(param_1 + 2), puVar7 == (ulong *)0x0)) {
      param_1 = (int *)0x0;
    }
    else {
      uVar8 = *(undefined8 *)((long)puVar7 + 9);
      bVar2 = *(byte *)((long)puVar7 + 0x23);
      uVar1 = *(undefined4 *)((long)puVar7 + 0x11);
      uVar9 = *puVar7;
      uVar5 = puVar7[1];
      bVar3 = *(byte *)((long)puVar7 + 0x15);
      *(ulong *)(param_1 + 2) = (long)puVar7 + 0x24U + (ulong)bVar2 * 0x10;
      *param_1 = *param_1 + -1;
      if (param_2 == (ulong *)0x0) {
        param_1 = (int *)0x1;
      }
      else {
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        *(char *)(param_2 + 1) = (char)uVar5;
        *param_2 = uVar9 >> 0x20 | uVar9 << 0x20;
        param_1 = (int *)0x1;
        *(undefined8 *)((long)param_2 + 9) = uVar8;
        *(undefined4 *)((long)param_2 + 0x11) = uVar1;
        *(byte *)((long)param_2 + 0x15) = bVar3 >> 7;
        *(byte *)((long)param_2 + 0x16) = bVar3 >> 6 & 1;
        *(byte *)((long)param_2 + 0x17) = bVar2;
        param_2[3] = (long)puVar7 + 0x24U;
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00617250  ma_dr_mp3_version =====

void ma_dr_mp3_version(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 6;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0x28;
  }
  return;
}


// ===== 00617274  ma_dr_mp3_version_string =====

char * ma_dr_mp3_version_string(void)

{
  return "0.6.40";
}


// ===== 00617280  ma_dr_mp3dec_init =====

void ma_dr_mp3dec_init(long param_1)

{
  *(undefined1 *)(param_1 + 0x1808) = 0;
  return;
}


// ===== 0061728c  ma_dr_mp3dec_f32_to_s16 =====

void ma_dr_mp3dec_f32_to_s16(long param_1,undefined8 *param_2,ulong param_3)

{
  float *pfVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  short *psVar14;
  ulong uVar15;
  float *pfVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  ulong uVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ulong uVar33;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  undefined1 auVar34 [16];
  ushort uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  short sVar41;
  short sVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  uVar12 = 0;
  if ((param_3 & 0xfffffffffffffff8) != 0) {
    pfVar16 = (float *)(param_1 + 0x10);
    puVar17 = param_2;
    do {
      pfVar1 = pfVar16 + -4;
      pfVar6 = pfVar16 + -3;
      pfVar7 = pfVar16 + -2;
      pfVar8 = pfVar16 + -1;
      fVar29 = *pfVar16;
      pfVar9 = pfVar16 + 1;
      pfVar10 = pfVar16 + 2;
      pfVar11 = pfVar16 + 3;
      uVar12 = uVar12 + 8;
      pfVar16 = pfVar16 + 8;
      auVar31._0_4_ = *pfVar1 * 32768.0 + 0.5;
      auVar31._4_4_ = *pfVar6 * 32768.0 + 0.5;
      auVar31._8_4_ = *pfVar7 * 32768.0 + 0.5;
      auVar31._12_4_ = *pfVar8 * 32768.0 + 0.5;
      auVar30._0_4_ = fVar29 * 32768.0 + 0.5;
      auVar30._4_4_ = *pfVar9 * 32768.0 + 0.5;
      auVar30._8_4_ = *pfVar10 * 32768.0 + 0.5;
      auVar30._12_4_ = *pfVar11 * 32768.0 + 0.5;
      auVar26 = NEON_fcmlt(auVar31,0,4);
      auVar27._4_4_ = (int)auVar31._4_4_;
      auVar27._0_4_ = (int)auVar31._0_4_;
      auVar27._8_4_ = (int)auVar31._8_4_;
      auVar27._12_4_ = (int)auVar31._12_4_;
      auVar27 = NEON_sqadd(auVar27,auVar26,4);
      auVar31 = NEON_fcmlt(auVar30,0,4);
      auVar44._8_8_ = auVar27._8_8_;
      auVar44._0_8_ = NEON_sqxtn(auVar27._0_8_,auVar27,4);
      auVar26._4_4_ = (int)auVar30._4_4_;
      auVar26._0_4_ = (int)auVar30._0_4_;
      auVar26._8_4_ = (int)auVar30._8_4_;
      auVar26._12_4_ = (int)auVar30._12_4_;
      auVar27 = NEON_sqadd(auVar26,auVar31,4);
      auVar27 = NEON_sqxtn2(auVar44,auVar27,4);
      puVar17[1] = auVar27._8_8_;
      *puVar17 = auVar27._0_8_;
      puVar17 = puVar17 + 2;
    } while (uVar12 < (param_3 & 0xfffffffffffffff8));
  }
  uVar2 = param_3 - uVar12;
  if (uVar12 <= param_3 && uVar2 != 0) {
    if (7 < uVar2) {
      auVar28._8_2_ = 0x8000;
      auVar28._0_8_ = 0x8000800080008000;
      auVar28._10_2_ = 0x8000;
      auVar28._12_2_ = 0x8000;
      auVar28._14_2_ = 0x8000;
      auVar32._8_4_ = 0x46fffd00;
      auVar32._0_8_ = 0x46fffd0046fffd00;
      auVar32._12_4_ = 0x46fffd00;
      uVar15 = uVar2 & 0xfffffffffffffff8;
      pbVar18 = (byte *)((long)param_2 + uVar12 * 2);
      pfVar16 = (float *)(param_1 + uVar12 * 4);
      uVar19 = uVar15;
      do {
        uVar19 = uVar19 - 8;
        auVar39._0_4_ = *pfVar16 * 32768.0;
        auVar39._4_4_ = pfVar16[1] * 32768.0;
        auVar39._8_4_ = pfVar16[2] * 32768.0;
        auVar39._12_4_ = pfVar16[3] * 32768.0;
        auVar34._0_4_ = pfVar16[4] * 32768.0;
        auVar34._4_4_ = pfVar16[5] * 32768.0;
        auVar34._8_4_ = pfVar16[6] * 32768.0;
        auVar34._12_4_ = pfVar16[7] * 32768.0;
        auVar3._8_4_ = 0xc6ffff00;
        auVar3._0_8_ = 0xc6ffff00c6ffff00;
        auVar3._12_4_ = 0xc6ffff00;
        auVar44 = NEON_fcmge(auVar3,auVar39,4);
        auVar26 = NEON_fcmge(auVar39,auVar32,4);
        sVar41 = (short)(int)(auVar39._8_4_ + 0.5);
        sVar42 = (short)(int)(auVar39._12_4_ + 0.5);
        uVar33 = (ulong)CONCAT24((short)(int)(auVar39._4_4_ + 0.5),(int)(auVar39._0_4_ + 0.5)) &
                 0xffffffff0000ffff;
        sVar20 = (short)uVar33;
        sVar21 = (short)(uVar33 >> 0x20);
        sVar22 = (short)(int)(auVar34._0_4_ + 0.5);
        sVar23 = (short)(int)(auVar34._4_4_ + 0.5);
        sVar24 = (short)(int)(auVar34._8_4_ + 0.5);
        sVar25 = (short)(int)(auVar34._12_4_ + 0.5);
        auVar4._8_4_ = 0xc6ffff00;
        auVar4._0_8_ = 0xc6ffff00c6ffff00;
        auVar4._12_4_ = 0xc6ffff00;
        auVar31 = NEON_fcmge(auVar4,auVar34,4);
        auVar27 = NEON_fcmge(auVar34,auVar32,4);
        auVar43._0_8_ =
             CONCAT26(auVar44._12_2_,CONCAT24(auVar44._8_2_,CONCAT22(auVar44._4_2_,auVar44._0_2_)));
        auVar43._8_2_ = auVar31._0_2_;
        auVar43._10_2_ = auVar31._4_2_;
        auVar43._12_2_ = auVar31._8_2_;
        auVar43._14_2_ = auVar31._12_2_;
        auVar40._8_8_ = auVar43._8_8_;
        auVar40._0_8_ = auVar43._0_8_;
        auVar5._2_2_ = sVar21 + (sVar21 >> 0xf);
        auVar5._0_2_ = sVar20 + (sVar20 >> 0xf);
        auVar5._4_2_ = sVar41 + (sVar41 >> 0xf);
        auVar5._6_2_ = sVar42 + (sVar42 >> 0xf);
        auVar5._8_2_ = sVar22 + (sVar22 >> 0xf);
        auVar5._10_2_ = sVar23 + (sVar23 >> 0xf);
        auVar5._12_2_ = sVar24 + (sVar24 >> 0xf);
        auVar5._14_2_ = sVar25 + (sVar25 >> 0xf);
        auVar31 = NEON_bsl(auVar40,auVar28,auVar5,1);
        uVar33 = CONCAT26(auVar26._12_2_,
                          CONCAT24(auVar26._8_2_,CONCAT22(auVar26._4_2_,auVar26._0_2_))) &
                 0x7fff7fff7fff7fff;
        uVar35 = auVar27._0_2_ & 0x7fff;
        uVar36 = auVar27._4_2_ & 0x7fff;
        uVar37 = auVar27._8_2_ & 0x7fff;
        uVar38 = auVar27._12_2_ & 0x7fff;
        pbVar18[0x10] = auVar31[8] & ~auVar27[0] | (byte)uVar35;
        pbVar18[0x11] = auVar31[9] & ~auVar27[1] | (byte)(uVar35 >> 8);
        pbVar18[0x12] = auVar31[10] & ~auVar27[4] | (byte)uVar36;
        pbVar18[0x13] = auVar31[0xb] & ~auVar27[5] | (byte)(uVar36 >> 8);
        pbVar18[0x14] = auVar31[0xc] & ~auVar27[8] | (byte)uVar37;
        pbVar18[0x15] = auVar31[0xd] & ~auVar27[9] | (byte)(uVar37 >> 8);
        pbVar18[0x16] = auVar31[0xe] & ~auVar27[0xc] | (byte)uVar38;
        pbVar18[0x17] = auVar31[0xf] & ~auVar27[0xd] | (byte)(uVar38 >> 8);
        *pbVar18 = auVar31[0] & ~auVar26[0] | (byte)uVar33;
        pbVar18[1] = auVar31[1] & ~auVar26[1] | (byte)(uVar33 >> 8);
        pbVar18[2] = auVar31[2] & ~auVar26[4] | (byte)(uVar33 >> 0x10);
        pbVar18[3] = auVar31[3] & ~auVar26[5] | (byte)(uVar33 >> 0x18);
        pbVar18[4] = auVar31[4] & ~auVar26[8] | (byte)(uVar33 >> 0x20);
        pbVar18[5] = auVar31[5] & ~auVar26[9] | (byte)(uVar33 >> 0x28);
        pbVar18[6] = auVar31[6] & ~auVar26[0xc] | (byte)(uVar33 >> 0x30);
        pbVar18[7] = auVar31[7] & ~auVar26[0xd] | (byte)(uVar33 >> 0x38);
        pbVar18 = pbVar18 + 0x10;
        pfVar16 = pfVar16 + 8;
      } while (uVar19 != 0);
      if (uVar2 == uVar15) {
        return;
      }
      uVar12 = uVar12 + uVar15;
    }
    pfVar16 = (float *)(param_1 + uVar12 * 4);
    lVar13 = param_3 - uVar12;
    psVar14 = (short *)((long)param_2 + uVar12 * 2);
    do {
      fVar29 = *pfVar16 * 32768.0;
      if (fVar29 < 32766.5 == NAN(fVar29)) {
        sVar20 = 0x7fff;
      }
      else if (fVar29 <= -32767.5) {
        sVar20 = -0x8000;
      }
      else {
        sVar20 = (short)(int)(fVar29 + 0.5) + (short)((int)(fVar29 + 0.5) >> 0xf);
      }
      lVar13 = lVar13 + -1;
      pfVar16 = pfVar16 + 1;
      *psVar14 = sVar20;
      psVar14 = psVar14 + 1;
    } while (lVar13 != 0);
  }
  return;
}


// ===== 00617414  ma_dr_mp3_get_mp3_frame_count =====

void ma_dr_mp3_get_mp3_frame_count(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar3 = ma_dr_mp3_get_mp3_and_pcm_frame_count(param_1,&local_30,0);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = local_30;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


