package r0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import java.util.ArrayList;

/* loaded from: classes.dex */
public abstract class h {
    public static final boolean[] a = new boolean[3];

    /* JADX WARN: Code restructure failed: missing block: B:163:0x0290, code lost:
    
        if (r7.f17079d == r6) goto L189;
     */
    /* JADX WARN: Code restructure failed: missing block: B:38:0x0112, code lost:
    
        if (r4.f17079d == r12) goto L76;
     */
    /* JADX WARN: Removed duplicated region for block: B:265:0x06a7  */
    /* JADX WARN: Removed duplicated region for block: B:268:0x06b2  */
    /* JADX WARN: Removed duplicated region for block: B:271:0x06bb  */
    /* JADX WARN: Removed duplicated region for block: B:273:0x06c2  */
    /* JADX WARN: Removed duplicated region for block: B:278:0x06d2  */
    /* JADX WARN: Removed duplicated region for block: B:285:0x06be  */
    /* JADX WARN: Removed duplicated region for block: B:286:0x06b5  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00fa  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0106  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x0119  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x011c A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void a(ConstraintWidgetContainer constraintWidgetContainer, p0.c cVar, ArrayList arrayList, int i5) {
        int i6;
        b[] bVarArr;
        int i10;
        int i11;
        c[] cVarArr;
        boolean z5;
        ConstraintWidget constraintWidget;
        float f2;
        boolean z6;
        boolean z7;
        int i12;
        ConstraintWidget constraintWidget2;
        p0.c cVar2;
        ConstraintWidget constraintWidget3;
        p0.e eVar;
        c cVar3;
        p0.e eVar2;
        ConstraintWidget constraintWidget4;
        int i13;
        c cVar4;
        p0.e eVar3;
        ConstraintWidget constraintWidget5;
        c[] cVarArr2;
        ConstraintWidget constraintWidget6;
        int i14;
        c cVar5;
        c[] cVarArr3;
        int i15;
        c cVar6;
        p0.e eVar4;
        p0.e eVar5;
        int size;
        ArrayList arrayList2;
        int i16;
        ConstraintWidget constraintWidget7;
        int i17;
        float f10;
        int i18;
        float f11;
        ConstraintWidget constraintWidget8;
        int i19;
        boolean z8;
        int i20;
        int i21;
        ConstraintWidget constraintWidget9;
        c cVar7;
        ConstraintWidget constraintWidget10;
        ConstraintWidgetContainer constraintWidgetContainer2 = constraintWidgetContainer;
        p0.c cVar8 = cVar;
        ArrayList arrayList3 = arrayList;
        if (i5 == 0) {
            i6 = constraintWidgetContainer2.f1266y0;
            bVarArr = constraintWidgetContainer2.B0;
            i10 = 0;
        } else {
            i6 = constraintWidgetContainer2.f1267z0;
            bVarArr = constraintWidgetContainer2.A0;
            i10 = 2;
        }
        int i22 = i6;
        b[] bVarArr2 = bVarArr;
        int i23 = 0;
        while (i23 < i22) {
            b bVar = bVarArr2[i23];
            boolean z10 = bVar.f17076q;
            ConstraintWidget constraintWidget11 = bVar.a;
            c[] cVarArr4 = constraintWidget11.P;
            int i24 = 3;
            int i25 = 8;
            float f12 = 0.0f;
            if (z10) {
                i11 = i23;
            } else {
                int i26 = bVar.f17071l;
                int i27 = i26 * 2;
                ConstraintWidget constraintWidget12 = constraintWidget11;
                ConstraintWidget constraintWidget13 = constraintWidget12;
                boolean z11 = false;
                while (!z11) {
                    bVar.f17070i++;
                    ConstraintWidget[] constraintWidgetArr = constraintWidget12.f1239l0;
                    c[] cVarArr5 = constraintWidget12.P;
                    constraintWidgetArr[i26] = null;
                    constraintWidget12.f1237k0[i26] = null;
                    if (constraintWidget12.f1230f0 != i25) {
                        constraintWidget12.j(i26);
                        cVarArr5[i27].e();
                        int i28 = i27 + 1;
                        cVarArr5[i28].e();
                        cVarArr5[i27].e();
                        cVarArr5[i28].e();
                        if (bVar.f17063b == null) {
                            bVar.f17063b = constraintWidget12;
                        }
                        bVar.f17065d = constraintWidget12;
                        int i29 = constraintWidget12.f1245o0[i26];
                        if (i29 == i24) {
                            int i30 = constraintWidget12.f1249s[i26];
                            if (i30 == 0 || i30 == i24 || i30 == 2) {
                                bVar.j++;
                                float f13 = constraintWidget12.f1236j0[i26];
                                if (f13 > 0.0f) {
                                    i20 = i23;
                                    bVar.k += f13;
                                } else {
                                    i20 = i23;
                                }
                                i21 = i26;
                                if (constraintWidget12.f1230f0 != 8 && i29 == 3 && (i30 == 0 || i30 == 3)) {
                                    if (f13 < 0.0f) {
                                        bVar.f17073n = true;
                                    } else {
                                        bVar.f17074o = true;
                                    }
                                    if (bVar.f17069h == null) {
                                        bVar.f17069h = new ArrayList();
                                    }
                                    bVar.f17069h.add(constraintWidget12);
                                }
                                if (bVar.f17067f == null) {
                                    bVar.f17067f = constraintWidget12;
                                }
                                ConstraintWidget constraintWidget14 = bVar.f17068g;
                                if (constraintWidget14 != null) {
                                    constraintWidget14.f1237k0[i21] = constraintWidget12;
                                }
                                bVar.f17068g = constraintWidget12;
                            } else {
                                i20 = i23;
                                i21 = i26;
                            }
                            if (i21 == 0) {
                                if (constraintWidget12.f1247q == 0 && constraintWidget12.f1250t == 0) {
                                    int i31 = constraintWidget12.f1251u;
                                }
                            } else if (constraintWidget12.f1248r == 0 && constraintWidget12.f1253w == 0) {
                                int i32 = constraintWidget12.f1254x;
                            }
                            constraintWidget9 = constraintWidget13;
                            if (constraintWidget9 != constraintWidget12) {
                                constraintWidget9.f1239l0[i21] = constraintWidget12;
                            }
                            cVar7 = cVarArr5[i27 + 1].f17081f;
                            if (cVar7 != null) {
                                constraintWidget10 = cVar7.f17079d;
                                c cVar9 = constraintWidget10.P[i27].f17081f;
                                if (cVar9 != null) {
                                }
                            }
                            constraintWidget10 = null;
                            if (constraintWidget10 != null) {
                                constraintWidget10 = constraintWidget12;
                                z11 = true;
                            }
                            constraintWidget13 = constraintWidget12;
                            i26 = i21;
                            i24 = 3;
                            i25 = 8;
                            constraintWidget12 = constraintWidget10;
                            i23 = i20;
                        }
                    }
                    i20 = i23;
                    i21 = i26;
                    constraintWidget9 = constraintWidget13;
                    if (constraintWidget9 != constraintWidget12) {
                    }
                    cVar7 = cVarArr5[i27 + 1].f17081f;
                    if (cVar7 != null) {
                    }
                    constraintWidget10 = null;
                    if (constraintWidget10 != null) {
                    }
                    constraintWidget13 = constraintWidget12;
                    i26 = i21;
                    i24 = 3;
                    i25 = 8;
                    constraintWidget12 = constraintWidget10;
                    i23 = i20;
                }
                i11 = i23;
                int i33 = i26;
                ConstraintWidget constraintWidget15 = bVar.f17063b;
                if (constraintWidget15 != null) {
                    constraintWidget15.P[i27].e();
                }
                ConstraintWidget constraintWidget16 = bVar.f17065d;
                if (constraintWidget16 != null) {
                    constraintWidget16.P[i27 + 1].e();
                }
                bVar.f17064c = constraintWidget12;
                if (i33 == 0 && bVar.f17072m) {
                    bVar.f17066e = constraintWidget12;
                } else {
                    bVar.f17066e = constraintWidget11;
                }
                bVar.f17075p = bVar.f17074o && bVar.f17073n;
            }
            bVar.f17076q = true;
            if (arrayList3 == null || arrayList3.contains(constraintWidget11)) {
                ConstraintWidget constraintWidget17 = bVar.f17064c;
                ConstraintWidget constraintWidget18 = bVar.f17063b;
                ConstraintWidget constraintWidget19 = bVar.f17065d;
                ConstraintWidget constraintWidget20 = bVar.f17066e;
                float f14 = bVar.k;
                int[] iArr = constraintWidgetContainer2.f1245o0;
                c[] cVarArr6 = constraintWidgetContainer2.P;
                boolean z12 = iArr[i5] == 2;
                if (i5 == 0) {
                    int i34 = constraintWidget20.h0;
                    boolean z13 = i34 == 0;
                    cVarArr = cVarArr4;
                    boolean z14 = i34 == 1;
                    z5 = i34 == 2;
                    constraintWidget = constraintWidget11;
                    f2 = f14;
                    z7 = z14;
                    z6 = z13;
                } else {
                    cVarArr = cVarArr4;
                    int i35 = constraintWidget20.f1235i0;
                    boolean z15 = i35 == 0;
                    boolean z16 = i35 == 1;
                    z5 = i35 == 2;
                    constraintWidget = constraintWidget11;
                    f2 = f14;
                    z6 = z15;
                    z7 = z16;
                }
                boolean z17 = false;
                while (!z17) {
                    c[] cVarArr7 = constraintWidget.P;
                    int[] iArr2 = constraintWidget.f1245o0;
                    c cVar10 = cVarArr7[i10];
                    int i36 = z5 ? 1 : 4;
                    int e9 = cVar10.e();
                    boolean z18 = z12;
                    boolean z19 = z5;
                    boolean z20 = iArr2[i5] == 3 && constraintWidget.f1249s[i5] == 0;
                    c cVar11 = cVar10.f17081f;
                    if (cVar11 != null && constraintWidget != constraintWidget11) {
                        e9 = cVar11.e() + e9;
                    }
                    int i37 = e9;
                    if (z19 && constraintWidget != constraintWidget11 && constraintWidget != constraintWidget18) {
                        i36 = 8;
                    }
                    ConstraintWidget constraintWidget21 = constraintWidget11;
                    c cVar12 = cVar10.f17081f;
                    if (cVar12 != null) {
                        if (constraintWidget == constraintWidget18) {
                            z8 = z20;
                            cVar8.f(cVar10.f17084i, cVar12.f17084i, i37, 6);
                        } else {
                            z8 = z20;
                            cVar8.f(cVar10.f17084i, cVar12.f17084i, i37, 8);
                        }
                        if (z8 && !z19) {
                            i36 = 5;
                        }
                        cVar8.e(cVar10.f17084i, cVar10.f17081f.f17084i, i37, (constraintWidget == constraintWidget18 && z19 && constraintWidget.R[i5]) ? 5 : i36);
                    }
                    if (z18) {
                        if (constraintWidget.f1230f0 == 8 || iArr2[i5] != 3) {
                            i19 = 0;
                        } else {
                            i19 = 0;
                            cVar8.f(cVarArr7[i10 + 1].f17084i, cVarArr7[i10].f17084i, 0, 5);
                        }
                        cVar8.f(cVarArr7[i10].f17084i, cVarArr6[i10].f17084i, i19, 8);
                    }
                    c cVar13 = cVarArr7[i10 + 1].f17081f;
                    if (cVar13 != null) {
                        constraintWidget8 = cVar13.f17079d;
                        c cVar14 = constraintWidget8.P[i10].f17081f;
                        if (cVar14 != null) {
                        }
                    }
                    constraintWidget8 = null;
                    if (constraintWidget8 != null) {
                        constraintWidget = constraintWidget8;
                    } else {
                        z17 = true;
                    }
                    constraintWidget11 = constraintWidget21;
                    z12 = z18;
                    z5 = z19;
                }
                boolean z21 = z12;
                boolean z22 = z5;
                if (constraintWidget19 != null) {
                    int i38 = i10 + 1;
                    if (constraintWidget17.P[i38].f17081f != null) {
                        c cVar15 = constraintWidget19.P[i38];
                        if (constraintWidget19.f1245o0[i5] == 3 && constraintWidget19.f1249s[i5] == 0 && !z22) {
                            c cVar16 = cVar15.f17081f;
                            if (cVar16.f17079d == constraintWidgetContainer2) {
                                cVar8.e(cVar15.f17084i, cVar16.f17084i, -cVar15.e(), 5);
                                cVar8.g(cVar15.f17084i, constraintWidget17.P[i38].f17081f.f17084i, -cVar15.e(), 6);
                            }
                        }
                        if (z22) {
                            c cVar17 = cVar15.f17081f;
                            if (cVar17.f17079d == constraintWidgetContainer2) {
                                cVar8.e(cVar15.f17084i, cVar17.f17084i, -cVar15.e(), 4);
                            }
                        }
                        cVar8.g(cVar15.f17084i, constraintWidget17.P[i38].f17081f.f17084i, -cVar15.e(), 6);
                    }
                }
                if (z21) {
                    int i39 = i10 + 1;
                    p0.e eVar6 = cVarArr6[i39].f17084i;
                    c cVar18 = constraintWidget17.P[i39];
                    cVar8.f(eVar6, cVar18.f17084i, cVar18.e(), 8);
                }
                ArrayList arrayList4 = bVar.f17069h;
                if (arrayList4 != null && (size = arrayList4.size()) > 1) {
                    if (bVar.f17073n && !bVar.f17075p) {
                        f2 = bVar.j;
                    }
                    ConstraintWidget constraintWidget22 = null;
                    float f15 = 0.0f;
                    int i40 = 0;
                    while (i40 < size) {
                        ConstraintWidget constraintWidget23 = (ConstraintWidget) arrayList4.get(i40);
                        float[] fArr = constraintWidget23.f1236j0;
                        c[] cVarArr8 = constraintWidget23.P;
                        float f16 = fArr[i5];
                        if (f16 < f12) {
                            if (bVar.f17075p) {
                                arrayList2 = arrayList4;
                                i16 = size;
                                cVar8.e(cVarArr8[i10 + 1].f17084i, cVarArr8[i10].f17084i, 0, 4);
                                f11 = f15;
                                i17 = i40;
                                f10 = f12;
                                f15 = f11;
                                i18 = i22;
                                i40 = i17 + 1;
                                i22 = i18;
                                arrayList4 = arrayList2;
                                size = i16;
                                f12 = f10;
                            } else {
                                f16 = 1.0f;
                            }
                        }
                        arrayList2 = arrayList4;
                        i16 = size;
                        if (f16 == f12) {
                            f11 = f15;
                            cVar8.e(cVarArr8[i10 + 1].f17084i, cVarArr8[i10].f17084i, 0, 8);
                            i17 = i40;
                            f10 = f12;
                            f15 = f11;
                            i18 = i22;
                            i40 = i17 + 1;
                            i22 = i18;
                            arrayList4 = arrayList2;
                            size = i16;
                            f12 = f10;
                        } else {
                            float f17 = f15;
                            if (constraintWidget22 != null) {
                                c[] cVarArr9 = constraintWidget22.P;
                                p0.e eVar7 = cVarArr9[i10].f17084i;
                                int i41 = i10 + 1;
                                p0.e eVar8 = cVarArr9[i41].f17084i;
                                p0.e eVar9 = cVarArr8[i10].f17084i;
                                p0.e eVar10 = cVarArr8[i41].f17084i;
                                p0.b l6 = cVar8.l();
                                constraintWidget7 = constraintWidget23;
                                float f18 = f12;
                                l6.f16268b = f18;
                                f10 = f18;
                                if (f2 == f18 || f17 == f16) {
                                    i17 = i40;
                                    i18 = i22;
                                    l6.f16270d.g(eVar7, 1.0f);
                                    l6.f16270d.g(eVar8, -1.0f);
                                    l6.f16270d.g(eVar10, 1.0f);
                                    l6.f16270d.g(eVar9, -1.0f);
                                } else {
                                    if (f17 == f10) {
                                        l6.f16270d.g(eVar7, 1.0f);
                                        l6.f16270d.g(eVar8, -1.0f);
                                    } else if (f16 == f12) {
                                        l6.f16270d.g(eVar9, 1.0f);
                                        l6.f16270d.g(eVar10, -1.0f);
                                    } else {
                                        i17 = i40;
                                        float f19 = (f17 / f2) / (f16 / f2);
                                        i18 = i22;
                                        l6.f16270d.g(eVar7, 1.0f);
                                        l6.f16270d.g(eVar8, -1.0f);
                                        l6.f16270d.g(eVar10, f19);
                                        l6.f16270d.g(eVar9, -f19);
                                    }
                                    i17 = i40;
                                    i18 = i22;
                                }
                                cVar8.c(l6);
                            } else {
                                constraintWidget7 = constraintWidget23;
                                i17 = i40;
                                f10 = f12;
                                i18 = i22;
                            }
                            f15 = f16;
                            constraintWidget22 = constraintWidget7;
                            i40 = i17 + 1;
                            i22 = i18;
                            arrayList4 = arrayList2;
                            size = i16;
                            f12 = f10;
                        }
                    }
                }
                i12 = i22;
                if (constraintWidget18 == null || !(constraintWidget18 == constraintWidget19 || z22)) {
                    constraintWidget2 = constraintWidget19;
                    if (!z6 || constraintWidget18 == null) {
                        c[] cVarArr10 = cVarArr;
                        int i42 = 8;
                        if (z7 && constraintWidget18 != null) {
                            int i43 = bVar.j;
                            boolean z23 = i43 > 0 && bVar.f17070i == i43;
                            ConstraintWidget constraintWidget24 = constraintWidget18;
                            ConstraintWidget constraintWidget25 = constraintWidget24;
                            while (constraintWidget25 != null) {
                                c[] cVarArr11 = constraintWidget25.P;
                                ConstraintWidget constraintWidget26 = constraintWidget25.f1239l0[i5];
                                while (constraintWidget26 != null && constraintWidget26.f1230f0 == i42) {
                                    constraintWidget26 = constraintWidget26.f1239l0[i5];
                                }
                                if (constraintWidget25 == constraintWidget18 || constraintWidget25 == constraintWidget2 || constraintWidget26 == null) {
                                    constraintWidget3 = constraintWidget24;
                                } else {
                                    if (constraintWidget26 == constraintWidget2) {
                                        constraintWidget26 = null;
                                    }
                                    c cVar19 = cVarArr11[i10];
                                    p0.e eVar11 = cVar19.f17084i;
                                    int i44 = i10 + 1;
                                    p0.e eVar12 = constraintWidget24.P[i44].f17084i;
                                    int e10 = cVar19.e();
                                    int e11 = cVarArr11[i44].e();
                                    if (constraintWidget26 != null) {
                                        cVar3 = constraintWidget26.P[i10];
                                        eVar2 = cVar3.f17084i;
                                        c cVar20 = cVar3.f17081f;
                                        eVar = cVar20 != null ? cVar20.f17084i : null;
                                    } else {
                                        c cVar21 = constraintWidget2.P[i10];
                                        p0.e eVar13 = cVar21 != null ? cVar21.f17084i : null;
                                        eVar = cVarArr11[i44].f17084i;
                                        cVar3 = cVar21;
                                        eVar2 = eVar13;
                                    }
                                    if (cVar3 != null) {
                                        e11 += cVar3.e();
                                    }
                                    int e12 = e10 + constraintWidget24.P[i44].e();
                                    ConstraintWidget constraintWidget27 = constraintWidget26;
                                    p0.e eVar14 = eVar2;
                                    int i45 = z23 ? 8 : 4;
                                    if (eVar11 == null || eVar12 == null || eVar14 == null || eVar == null) {
                                        constraintWidget3 = constraintWidget24;
                                        constraintWidget4 = constraintWidget27;
                                    } else {
                                        constraintWidget4 = constraintWidget27;
                                        p0.e eVar15 = eVar;
                                        constraintWidget3 = constraintWidget24;
                                        cVar.b(eVar11, eVar12, e12, 0.5f, eVar14, eVar15, e11, i45);
                                    }
                                    constraintWidget26 = constraintWidget4;
                                }
                                if (constraintWidget25.f1230f0 != 8) {
                                    constraintWidget3 = constraintWidget25;
                                }
                                constraintWidget25 = constraintWidget26;
                                constraintWidget24 = constraintWidget3;
                                i42 = 8;
                            }
                            cVar2 = cVar;
                            c cVar22 = constraintWidget18.P[i10];
                            c cVar23 = cVarArr10[i10].f17081f;
                            int i46 = i10 + 1;
                            c cVar24 = constraintWidget2.P[i46];
                            c cVar25 = constraintWidget17.P[i46].f17081f;
                            if (cVar23 != null) {
                                if (constraintWidget18 != constraintWidget2) {
                                    cVar2.e(cVar22.f17084i, cVar23.f17084i, cVar22.e(), 5);
                                } else if (cVar25 != null) {
                                    cVar2.b(cVar22.f17084i, cVar23.f17084i, cVar22.e(), 0.5f, cVar24.f17084i, cVar25.f17084i, cVar24.e(), 5);
                                }
                            }
                            if (cVar25 != null && constraintWidget18 != constraintWidget2) {
                                cVar2.e(cVar24.f17084i, cVar25.f17084i, -cVar24.e(), 5);
                            }
                            if ((!z6 || z7) && constraintWidget18 != null && constraintWidget18 != constraintWidget2) {
                                c[] cVarArr12 = constraintWidget18.P;
                                cVar5 = cVarArr12[i10];
                                if (constraintWidget2 == null) {
                                    constraintWidget2 = constraintWidget18;
                                }
                                cVarArr3 = constraintWidget2.P;
                                i15 = i10 + 1;
                                cVar6 = cVarArr3[i15];
                                c cVar26 = cVar5.f17081f;
                                eVar4 = cVar26 == null ? cVar26.f17084i : null;
                                c cVar27 = cVar6.f17081f;
                                eVar5 = cVar27 == null ? cVar27.f17084i : null;
                                if (constraintWidget17 != constraintWidget2) {
                                    c cVar28 = constraintWidget17.P[i15].f17081f;
                                    eVar5 = cVar28 != null ? cVar28.f17084i : null;
                                }
                                if (constraintWidget18 == constraintWidget2) {
                                    cVar6 = cVarArr12[i15];
                                }
                                if (eVar4 != null && eVar5 != null) {
                                    cVar2.b(cVar5.f17084i, eVar4, cVar5.e(), 0.5f, eVar5, cVar6.f17084i, cVarArr3[i15].e(), 5);
                                }
                            }
                        }
                    } else {
                        int i47 = bVar.j;
                        boolean z24 = i47 > 0 && bVar.f17070i == i47;
                        ConstraintWidget constraintWidget28 = constraintWidget18;
                        ConstraintWidget constraintWidget29 = constraintWidget28;
                        while (constraintWidget28 != null) {
                            c[] cVarArr13 = constraintWidget28.P;
                            ConstraintWidget constraintWidget30 = constraintWidget28.f1239l0[i5];
                            while (true) {
                                if (constraintWidget30 == null) {
                                    i13 = 8;
                                    break;
                                }
                                i13 = 8;
                                if (constraintWidget30.f1230f0 != 8) {
                                    break;
                                } else {
                                    constraintWidget30 = constraintWidget30.f1239l0[i5];
                                }
                            }
                            if (constraintWidget30 != null || constraintWidget28 == constraintWidget2) {
                                c cVar29 = cVarArr13[i10];
                                p0.e eVar16 = cVar29.f17084i;
                                c cVar30 = cVar29.f17081f;
                                p0.e eVar17 = cVar30 != null ? cVar30.f17084i : null;
                                if (constraintWidget29 != constraintWidget28) {
                                    eVar17 = constraintWidget29.P[i10 + 1].f17084i;
                                } else if (constraintWidget28 == constraintWidget18) {
                                    c cVar31 = cVarArr[i10].f17081f;
                                    eVar17 = cVar31 != null ? cVar31.f17084i : null;
                                }
                                int e13 = cVar29.e();
                                int i48 = i10 + 1;
                                int e14 = cVarArr13[i48].e();
                                if (constraintWidget30 != null) {
                                    cVar4 = constraintWidget30.P[i10];
                                    eVar3 = cVar4.f17084i;
                                } else {
                                    cVar4 = constraintWidget17.P[i48].f17081f;
                                    eVar3 = cVar4 != null ? cVar4.f17084i : null;
                                }
                                p0.e eVar18 = cVarArr13[i48].f17084i;
                                if (cVar4 != null) {
                                    e14 += cVar4.e();
                                }
                                int e15 = constraintWidget29.P[i48].e() + e13;
                                if (eVar16 == null || eVar17 == null || eVar3 == null || eVar18 == null) {
                                    constraintWidget5 = constraintWidget30;
                                    cVarArr2 = cVarArr;
                                    constraintWidget6 = constraintWidget29;
                                    i14 = 8;
                                } else {
                                    if (constraintWidget28 == constraintWidget18) {
                                        e15 = constraintWidget18.P[i10].e();
                                    }
                                    if (constraintWidget28 == constraintWidget2) {
                                        e14 = constraintWidget2.P[i48].e();
                                    }
                                    constraintWidget5 = constraintWidget30;
                                    cVarArr2 = cVarArr;
                                    constraintWidget6 = constraintWidget29;
                                    i14 = 8;
                                    cVar.b(eVar16, eVar17, e15, 0.5f, eVar3, eVar18, e14, z24 ? 8 : 5);
                                }
                            } else {
                                constraintWidget5 = constraintWidget30;
                                cVarArr2 = cVarArr;
                                constraintWidget6 = constraintWidget29;
                                i14 = i13;
                            }
                            if (constraintWidget28.f1230f0 != i14) {
                                constraintWidget6 = constraintWidget28;
                            }
                            constraintWidget28 = constraintWidget5;
                            constraintWidget29 = constraintWidget6;
                            cVarArr = cVarArr2;
                        }
                    }
                } else {
                    c cVar32 = cVarArr[i10];
                    int i49 = i10 + 1;
                    c cVar33 = constraintWidget17.P[i49];
                    c cVar34 = cVar32.f17081f;
                    p0.e eVar19 = cVar34 != null ? cVar34.f17084i : null;
                    c cVar35 = cVar33.f17081f;
                    p0.e eVar20 = cVar35 != null ? cVar35.f17084i : null;
                    c cVar36 = constraintWidget18.P[i10];
                    if (constraintWidget19 != null) {
                        cVar33 = constraintWidget19.P[i49];
                    }
                    if (eVar19 == null || eVar20 == null) {
                        constraintWidget2 = constraintWidget19;
                    } else {
                        float f20 = i5 == 0 ? constraintWidget20.f1224c0 : constraintWidget20.f1226d0;
                        int e16 = cVar36.e();
                        int e17 = cVar33.e();
                        p0.e eVar21 = cVar36.f17084i;
                        p0.e eVar22 = cVar33.f17084i;
                        p0.e eVar23 = eVar19;
                        constraintWidget2 = constraintWidget19;
                        cVar8.b(eVar21, eVar23, e16, f20, eVar20, eVar22, e17, 7);
                    }
                }
                cVar2 = cVar;
                if (!z6) {
                }
                c[] cVarArr122 = constraintWidget18.P;
                cVar5 = cVarArr122[i10];
                if (constraintWidget2 == null) {
                }
                cVarArr3 = constraintWidget2.P;
                i15 = i10 + 1;
                cVar6 = cVarArr3[i15];
                c cVar262 = cVar5.f17081f;
                if (cVar262 == null) {
                }
                c cVar272 = cVar6.f17081f;
                if (cVar272 == null) {
                }
                if (constraintWidget17 != constraintWidget2) {
                }
                if (constraintWidget18 == constraintWidget2) {
                }
                if (eVar4 != null) {
                    cVar2.b(cVar5.f17084i, eVar4, cVar5.e(), 0.5f, eVar5, cVar6.f17084i, cVarArr3[i15].e(), 5);
                }
            } else {
                i12 = i22;
            }
            i23 = i11 + 1;
            constraintWidgetContainer2 = constraintWidgetContainer;
            cVar8 = cVar;
            arrayList3 = arrayList;
            i22 = i12;
        }
    }

    public static void b(ConstraintWidgetContainer constraintWidgetContainer, p0.c cVar, ConstraintWidget constraintWidget) {
        constraintWidget.f1242n = -1;
        c cVar2 = constraintWidget.L;
        int[] iArr = constraintWidget.f1245o0;
        c cVar3 = constraintWidget.K;
        c cVar4 = constraintWidget.I;
        c cVar5 = constraintWidget.J;
        c cVar6 = constraintWidget.H;
        constraintWidget.f1244o = -1;
        int[] iArr2 = constraintWidgetContainer.f1245o0;
        if (iArr2[0] != 2 && iArr[0] == 4) {
            int i5 = cVar6.f17082g;
            int n6 = constraintWidgetContainer.n() - cVar5.f17082g;
            cVar6.f17084i = cVar.k(cVar6);
            cVar5.f17084i = cVar.k(cVar5);
            cVar.d(cVar6.f17084i, i5);
            cVar.d(cVar5.f17084i, n6);
            constraintWidget.f1242n = 2;
            constraintWidget.X = i5;
            int i6 = n6 - i5;
            constraintWidget.T = i6;
            int i10 = constraintWidget.a0;
            if (i6 < i10) {
                constraintWidget.T = i10;
            }
        }
        if (iArr2[1] == 2 || iArr[1] != 4) {
            return;
        }
        int i11 = cVar4.f17082g;
        int k = constraintWidgetContainer.k() - cVar3.f17082g;
        cVar4.f17084i = cVar.k(cVar4);
        cVar3.f17084i = cVar.k(cVar3);
        cVar.d(cVar4.f17084i, i11);
        cVar.d(cVar3.f17084i, k);
        if (constraintWidget.Z > 0 || constraintWidget.f1230f0 == 8) {
            p0.e k5 = cVar.k(cVar2);
            cVar2.f17084i = k5;
            cVar.d(k5, constraintWidget.Z + i11);
        }
        constraintWidget.f1244o = 2;
        constraintWidget.Y = i11;
        int i12 = k - i11;
        constraintWidget.U = i12;
        int i13 = constraintWidget.f1222b0;
        if (i12 < i13) {
            constraintWidget.U = i13;
        }
    }

    public static final boolean c(int i5, int i6) {
        return (i5 & i6) == i6;
    }
}
