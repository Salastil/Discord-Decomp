package s0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;

/* loaded from: classes.dex */
public abstract class i {
    public static final b a = new b();

    public static boolean a(ConstraintWidget constraintWidget) {
        int[] iArr = constraintWidget.f1245o0;
        int i5 = iArr[0];
        int i6 = iArr[1];
        ConstraintWidget constraintWidget2 = constraintWidget.S;
        ConstraintWidgetContainer constraintWidgetContainer = constraintWidget2 != null ? (ConstraintWidgetContainer) constraintWidget2 : null;
        if (constraintWidgetContainer != null) {
            int i10 = constraintWidgetContainer.f1245o0[0];
        }
        if (constraintWidgetContainer != null) {
            int i11 = constraintWidgetContainer.f1245o0[1];
        }
        boolean z5 = i5 == 1 || constraintWidget.x() || i5 == 2 || (i5 == 3 && constraintWidget.f1247q == 0 && constraintWidget.V == 0.0f && constraintWidget.q(0)) || (i5 == 3 && constraintWidget.f1247q == 1 && constraintWidget.r(0, constraintWidget.n()));
        boolean z6 = i6 == 1 || constraintWidget.y() || i6 == 2 || (i6 == 3 && constraintWidget.f1248r == 0 && constraintWidget.V == 0.0f && constraintWidget.q(1)) || (i5 == 3 && constraintWidget.f1248r == 1 && constraintWidget.r(1, constraintWidget.k()));
        return (constraintWidget.V > 0.0f && (z5 || z6)) || (z5 && z6);
    }

    public static o b(ConstraintWidget constraintWidget, int i5, ArrayList arrayList, o oVar) {
        int i6;
        int i10 = i5 == 0 ? constraintWidget.f1241m0 : constraintWidget.f1243n0;
        if (i10 != -1 && (oVar == null || i10 != oVar.f17723b)) {
            int i11 = 0;
            while (true) {
                if (i11 >= arrayList.size()) {
                    break;
                }
                o oVar2 = (o) arrayList.get(i11);
                if (oVar2.f17723b == i10) {
                    if (oVar != null) {
                        oVar.c(i5, oVar2);
                        arrayList.remove(oVar);
                    }
                    oVar = oVar2;
                } else {
                    i11++;
                }
            }
        } else if (i10 != -1) {
            return oVar;
        }
        if (oVar == null) {
            if (constraintWidget instanceof r0.g) {
                r0.g gVar = (r0.g) constraintWidget;
                int i12 = 0;
                while (true) {
                    if (i12 >= gVar.f17117q0) {
                        i6 = -1;
                        break;
                    }
                    ConstraintWidget constraintWidget2 = gVar.f17116p0[i12];
                    if ((i5 == 0 && (i6 = constraintWidget2.f1241m0) != -1) || (i5 == 1 && (i6 = constraintWidget2.f1243n0) != -1)) {
                        break;
                    }
                    i12++;
                }
                if (i6 != -1) {
                    int i13 = 0;
                    while (true) {
                        if (i13 >= arrayList.size()) {
                            break;
                        }
                        o oVar3 = (o) arrayList.get(i13);
                        if (oVar3.f17723b == i6) {
                            oVar = oVar3;
                            break;
                        }
                        i13++;
                    }
                }
            }
            if (oVar == null) {
                oVar = new o();
                oVar.a = new ArrayList();
                oVar.f17725d = null;
                oVar.f17726e = -1;
                int i14 = o.f17722f;
                o.f17722f = i14 + 1;
                oVar.f17723b = i14;
                oVar.f17724c = i5;
            }
            arrayList.add(oVar);
        }
        int i15 = oVar.f17723b;
        ArrayList arrayList2 = oVar.a;
        if (arrayList2.contains(constraintWidget)) {
            return oVar;
        }
        arrayList2.add(constraintWidget);
        if (constraintWidget instanceof r0.f) {
            r0.f fVar = (r0.f) constraintWidget;
            fVar.f17113s0.c(fVar.f17114t0 == 0 ? 1 : 0, arrayList, oVar);
        }
        if (i5 == 0) {
            constraintWidget.f1241m0 = i15;
            constraintWidget.H.c(i5, arrayList, oVar);
            constraintWidget.J.c(i5, arrayList, oVar);
        } else {
            constraintWidget.f1243n0 = i15;
            constraintWidget.I.c(i5, arrayList, oVar);
            constraintWidget.L.c(i5, arrayList, oVar);
            constraintWidget.K.c(i5, arrayList, oVar);
        }
        constraintWidget.O.c(i5, arrayList, oVar);
        return oVar;
    }

    public static void c(int i5, ConstraintWidget constraintWidget, c cVar, boolean z5) {
        r0.c cVar2;
        r0.c cVar3;
        char c6;
        r0.c cVar4;
        r0.c cVar5;
        r0.c cVar6;
        if (constraintWidget.f1238l) {
            return;
        }
        if (!(constraintWidget instanceof ConstraintWidgetContainer) && constraintWidget.w() && a(constraintWidget)) {
            ConstraintWidgetContainer.Q(constraintWidget, cVar, new b());
        }
        r0.c i6 = constraintWidget.i(2);
        r0.c i10 = constraintWidget.i(4);
        int d6 = i6.d();
        int d7 = i10.d();
        HashSet hashSet = i6.a;
        if (hashSet != null && i6.f17078c) {
            Iterator it = hashSet.iterator();
            while (it.hasNext()) {
                r0.c cVar7 = (r0.c) it.next();
                ConstraintWidget constraintWidget2 = cVar7.f17079d;
                int i11 = i5 + 1;
                boolean a10 = a(constraintWidget2);
                r0.c cVar8 = constraintWidget2.H;
                r0.c cVar9 = constraintWidget2.J;
                if (constraintWidget2.w() && a10) {
                    c6 = 0;
                    ConstraintWidgetContainer.Q(constraintWidget2, cVar, new b());
                } else {
                    c6 = 0;
                }
                int i12 = constraintWidget2.f1245o0[c6];
                if (i12 != 3 || a10) {
                    if (!constraintWidget2.w()) {
                        if (cVar7 == cVar8 && cVar9.f17081f == null) {
                            int e9 = cVar8.e() + d6;
                            constraintWidget2.E(e9, constraintWidget2.n() + e9);
                            c(i11, constraintWidget2, cVar, z5);
                        } else if (cVar7 == cVar9 && cVar8.f17081f == null) {
                            int e10 = d6 - cVar9.e();
                            constraintWidget2.E(e10 - constraintWidget2.n(), e10);
                            c(i11, constraintWidget2, cVar, z5);
                        } else if (cVar7 == cVar8 && (cVar4 = cVar9.f17081f) != null && cVar4.f17078c && !constraintWidget2.u()) {
                            d(i11, constraintWidget2, cVar, z5);
                        }
                    }
                } else if (i12 == 3 && constraintWidget2.f1251u >= 0 && constraintWidget2.f1250t >= 0 && (constraintWidget2.f1230f0 == 8 || (constraintWidget2.f1247q == 0 && constraintWidget2.V == 0.0f))) {
                    if (!constraintWidget2.u() && !constraintWidget2.E && ((cVar7 == cVar8 && (cVar6 = cVar9.f17081f) != null && cVar6.f17078c) || (cVar7 == cVar9 && (cVar5 = cVar8.f17081f) != null && cVar5.f17078c))) {
                        if (!constraintWidget2.u()) {
                            e(i11, constraintWidget, cVar, constraintWidget2, z5);
                        }
                    }
                }
            }
        }
        if (constraintWidget instanceof r0.f) {
            return;
        }
        HashSet hashSet2 = i10.a;
        if (hashSet2 != null && i10.f17078c) {
            Iterator it2 = hashSet2.iterator();
            while (it2.hasNext()) {
                r0.c cVar10 = (r0.c) it2.next();
                ConstraintWidget constraintWidget3 = cVar10.f17079d;
                int i13 = i5 + 1;
                boolean a11 = a(constraintWidget3);
                r0.c cVar11 = constraintWidget3.H;
                r0.c cVar12 = constraintWidget3.J;
                if (constraintWidget3.w() && a11) {
                    ConstraintWidgetContainer.Q(constraintWidget3, cVar, new b());
                }
                boolean z6 = (cVar10 == cVar11 && (cVar3 = cVar12.f17081f) != null && cVar3.f17078c) || (cVar10 == cVar12 && (cVar2 = cVar11.f17081f) != null && cVar2.f17078c);
                int i14 = constraintWidget3.f1245o0[0];
                if (i14 != 3 || a11) {
                    if (!constraintWidget3.w()) {
                        if (cVar10 == cVar11 && cVar12.f17081f == null) {
                            int e11 = cVar11.e() + d7;
                            constraintWidget3.E(e11, constraintWidget3.n() + e11);
                            c(i13, constraintWidget3, cVar, z5);
                        } else if (cVar10 == cVar12 && cVar11.f17081f == null) {
                            int e12 = d7 - cVar12.e();
                            constraintWidget3.E(e12 - constraintWidget3.n(), e12);
                            c(i13, constraintWidget3, cVar, z5);
                        } else if (z6 && !constraintWidget3.u()) {
                            d(i13, constraintWidget3, cVar, z5);
                        }
                    }
                } else if (i14 == 3 && constraintWidget3.f1251u >= 0 && constraintWidget3.f1250t >= 0 && (constraintWidget3.f1230f0 == 8 || (constraintWidget3.f1247q == 0 && constraintWidget3.V == 0.0f))) {
                    if (!constraintWidget3.u() && !constraintWidget3.E && z6 && !constraintWidget3.u()) {
                        e(i13, constraintWidget, cVar, constraintWidget3, z5);
                    }
                }
            }
        }
        constraintWidget.f1238l = true;
    }

    public static void d(int i5, ConstraintWidget constraintWidget, c cVar, boolean z5) {
        float f2 = constraintWidget.f1224c0;
        r0.c cVar2 = constraintWidget.H;
        int d6 = cVar2.f17081f.d();
        r0.c cVar3 = constraintWidget.J;
        int d7 = cVar3.f17081f.d();
        int e9 = cVar2.e() + d6;
        int e10 = d7 - cVar3.e();
        if (d6 == d7) {
            f2 = 0.5f;
        } else {
            d6 = e9;
            d7 = e10;
        }
        int n6 = constraintWidget.n();
        int i6 = (d7 - d6) - n6;
        if (d6 > d7) {
            i6 = (d6 - d7) - n6;
        }
        int i10 = ((int) (i6 > 0 ? (f2 * i6) + 0.5f : f2 * i6)) + d6;
        int i11 = i10 + n6;
        if (d6 > d7) {
            i11 = i10 - n6;
        }
        constraintWidget.E(i10, i11);
        c(i5 + 1, constraintWidget, cVar, z5);
    }

    public static void e(int i5, ConstraintWidget constraintWidget, c cVar, ConstraintWidget constraintWidget2, boolean z5) {
        float f2 = constraintWidget2.f1224c0;
        r0.c cVar2 = constraintWidget2.H;
        int e9 = cVar2.e() + cVar2.f17081f.d();
        r0.c cVar3 = constraintWidget2.J;
        int d6 = cVar3.f17081f.d() - cVar3.e();
        if (d6 >= e9) {
            int n6 = constraintWidget2.n();
            if (constraintWidget2.f1230f0 != 8) {
                int i6 = constraintWidget2.f1247q;
                if (i6 == 2) {
                    n6 = (int) (constraintWidget2.f1224c0 * 0.5f * (constraintWidget instanceof ConstraintWidgetContainer ? constraintWidget.n() : constraintWidget.S.n()));
                } else if (i6 == 0) {
                    n6 = d6 - e9;
                }
                n6 = Math.max(constraintWidget2.f1250t, n6);
                int i10 = constraintWidget2.f1251u;
                if (i10 > 0) {
                    n6 = Math.min(i10, n6);
                }
            }
            int i11 = e9 + ((int) ((f2 * ((d6 - e9) - n6)) + 0.5f));
            constraintWidget2.E(i11, n6 + i11);
            c(i5 + 1, constraintWidget2, cVar, z5);
        }
    }

    public static void f(int i5, ConstraintWidget constraintWidget, c cVar) {
        float f2 = constraintWidget.f1226d0;
        r0.c cVar2 = constraintWidget.I;
        int d6 = cVar2.f17081f.d();
        r0.c cVar3 = constraintWidget.K;
        int d7 = cVar3.f17081f.d();
        int e9 = cVar2.e() + d6;
        int e10 = d7 - cVar3.e();
        if (d6 == d7) {
            f2 = 0.5f;
        } else {
            d6 = e9;
            d7 = e10;
        }
        int k = constraintWidget.k();
        int i6 = (d7 - d6) - k;
        if (d6 > d7) {
            i6 = (d6 - d7) - k;
        }
        int i10 = (int) (i6 > 0 ? (f2 * i6) + 0.5f : f2 * i6);
        int i11 = d6 + i10;
        int i12 = i11 + k;
        if (d6 > d7) {
            i11 = d6 - i10;
            i12 = i11 - k;
        }
        constraintWidget.F(i11, i12);
        i(i5 + 1, constraintWidget, cVar);
    }

    public static void g(int i5, ConstraintWidget constraintWidget, c cVar, ConstraintWidget constraintWidget2) {
        float f2 = constraintWidget2.f1226d0;
        r0.c cVar2 = constraintWidget2.I;
        int e9 = cVar2.e() + cVar2.f17081f.d();
        r0.c cVar3 = constraintWidget2.K;
        int d6 = cVar3.f17081f.d() - cVar3.e();
        if (d6 >= e9) {
            int k = constraintWidget2.k();
            if (constraintWidget2.f1230f0 != 8) {
                int i6 = constraintWidget2.f1248r;
                if (i6 == 2) {
                    k = (int) (f2 * 0.5f * (constraintWidget instanceof ConstraintWidgetContainer ? constraintWidget.k() : constraintWidget.S.k()));
                } else if (i6 == 0) {
                    k = d6 - e9;
                }
                k = Math.max(constraintWidget2.f1253w, k);
                int i10 = constraintWidget2.f1254x;
                if (i10 > 0) {
                    k = Math.min(i10, k);
                }
            }
            int i11 = e9 + ((int) ((f2 * ((d6 - e9) - k)) + 0.5f));
            constraintWidget2.F(i11, k + i11);
            i(i5 + 1, constraintWidget2, cVar);
        }
    }

    public static boolean h(int i5, int i6, int i10, int i11) {
        return (i10 == 1 || i10 == 2 || (i10 == 4 && i5 != 2)) || (i11 == 1 || i11 == 2 || (i11 == 4 && i6 != 2));
    }

    public static void i(int i5, ConstraintWidget constraintWidget, c cVar) {
        r0.c cVar2;
        r0.c cVar3;
        float f2;
        r0.c cVar4;
        r0.c cVar5;
        r0.c cVar6;
        if (constraintWidget.f1240m) {
            return;
        }
        if (!(constraintWidget instanceof ConstraintWidgetContainer) && constraintWidget.w() && a(constraintWidget)) {
            ConstraintWidgetContainer.Q(constraintWidget, cVar, new b());
        }
        r0.c i6 = constraintWidget.i(3);
        r0.c i10 = constraintWidget.i(5);
        int d6 = i6.d();
        int d7 = i10.d();
        HashSet hashSet = i6.a;
        if (hashSet != null && i6.f17078c) {
            Iterator it = hashSet.iterator();
            while (it.hasNext()) {
                r0.c cVar7 = (r0.c) it.next();
                ConstraintWidget constraintWidget2 = cVar7.f17079d;
                int i11 = i5 + 1;
                boolean a10 = a(constraintWidget2);
                r0.c cVar8 = constraintWidget2.I;
                r0.c cVar9 = constraintWidget2.K;
                if (constraintWidget2.w() && a10) {
                    f2 = 0.0f;
                    ConstraintWidgetContainer.Q(constraintWidget2, cVar, new b());
                } else {
                    f2 = 0.0f;
                }
                int i12 = constraintWidget2.f1245o0[1];
                if (i12 != 3 || a10) {
                    if (!constraintWidget2.w()) {
                        if (cVar7 == cVar8 && cVar9.f17081f == null) {
                            int e9 = cVar8.e() + d6;
                            constraintWidget2.F(e9, constraintWidget2.k() + e9);
                            i(i11, constraintWidget2, cVar);
                        } else if (cVar7 == cVar9 && cVar9.f17081f == null) {
                            int e10 = d6 - cVar9.e();
                            constraintWidget2.F(e10 - constraintWidget2.k(), e10);
                            i(i11, constraintWidget2, cVar);
                        } else if (cVar7 == cVar8 && (cVar4 = cVar9.f17081f) != null && cVar4.f17078c) {
                            f(i11, constraintWidget2, cVar);
                        }
                    }
                } else if (i12 == 3 && constraintWidget2.f1254x >= 0 && constraintWidget2.f1253w >= 0 && (constraintWidget2.f1230f0 == 8 || (constraintWidget2.f1248r == 0 && constraintWidget2.V == f2))) {
                    if (!constraintWidget2.v() && !constraintWidget2.E && ((cVar7 == cVar8 && (cVar6 = cVar9.f17081f) != null && cVar6.f17078c) || (cVar7 == cVar9 && (cVar5 = cVar8.f17081f) != null && cVar5.f17078c))) {
                        if (!constraintWidget2.v()) {
                            g(i11, constraintWidget, cVar, constraintWidget2);
                        }
                    }
                }
            }
        }
        if (constraintWidget instanceof r0.f) {
            return;
        }
        HashSet hashSet2 = i10.a;
        if (hashSet2 != null && i10.f17078c) {
            Iterator it2 = hashSet2.iterator();
            while (it2.hasNext()) {
                r0.c cVar10 = (r0.c) it2.next();
                ConstraintWidget constraintWidget3 = cVar10.f17079d;
                int i13 = i5 + 1;
                boolean a11 = a(constraintWidget3);
                r0.c cVar11 = constraintWidget3.I;
                r0.c cVar12 = constraintWidget3.K;
                if (constraintWidget3.w() && a11) {
                    ConstraintWidgetContainer.Q(constraintWidget3, cVar, new b());
                }
                boolean z5 = (cVar10 == cVar11 && (cVar3 = cVar12.f17081f) != null && cVar3.f17078c) || (cVar10 == cVar12 && (cVar2 = cVar11.f17081f) != null && cVar2.f17078c);
                int i14 = constraintWidget3.f1245o0[1];
                if (i14 != 3 || a11) {
                    if (!constraintWidget3.w()) {
                        if (cVar10 == cVar11 && cVar12.f17081f == null) {
                            int e11 = cVar11.e() + d7;
                            constraintWidget3.F(e11, constraintWidget3.k() + e11);
                            i(i13, constraintWidget3, cVar);
                        } else if (cVar10 == cVar12 && cVar11.f17081f == null) {
                            int e12 = d7 - cVar12.e();
                            constraintWidget3.F(e12 - constraintWidget3.k(), e12);
                            i(i13, constraintWidget3, cVar);
                        } else if (z5 && !constraintWidget3.v()) {
                            f(i13, constraintWidget3, cVar);
                        }
                    }
                } else if (i14 == 3 && constraintWidget3.f1254x >= 0 && constraintWidget3.f1253w >= 0 && (constraintWidget3.f1230f0 == 8 || (constraintWidget3.f1248r == 0 && constraintWidget3.V == 0.0f))) {
                    if (!constraintWidget3.v() && !constraintWidget3.E && z5 && !constraintWidget3.v()) {
                        g(i13, constraintWidget, cVar, constraintWidget3);
                    }
                }
            }
        }
        r0.c i15 = constraintWidget.i(6);
        if (i15.a != null && i15.f17078c) {
            int d8 = i15.d();
            Iterator it3 = i15.a.iterator();
            while (it3.hasNext()) {
                r0.c cVar13 = (r0.c) it3.next();
                ConstraintWidget constraintWidget4 = cVar13.f17079d;
                int i16 = i5 + 1;
                boolean a12 = a(constraintWidget4);
                r0.c cVar14 = constraintWidget4.L;
                if (constraintWidget4.w() && a12) {
                    ConstraintWidgetContainer.Q(constraintWidget4, cVar, new b());
                }
                if (constraintWidget4.f1245o0[1] != 3 || a12) {
                    if (!constraintWidget4.w() && cVar13 == cVar14) {
                        int e13 = cVar13.e() + d8;
                        if (constraintWidget4.D) {
                            int i17 = e13 - constraintWidget4.Z;
                            int i18 = constraintWidget4.U + i17;
                            constraintWidget4.Y = i17;
                            constraintWidget4.I.l(i17);
                            constraintWidget4.K.l(i18);
                            cVar14.l(e13);
                            constraintWidget4.k = true;
                        }
                        i(i16, constraintWidget4, cVar);
                    }
                }
            }
        }
        constraintWidget.f1240m = true;
    }
}
