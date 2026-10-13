package s0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class l extends p {
    public static final int[] k = new int[2];

    public static void m(int[] iArr, int i5, int i6, int i10, int i11, float f2, int i12) {
        int i13 = i6 - i5;
        int i14 = i11 - i10;
        if (i12 != -1) {
            if (i12 == 0) {
                iArr[0] = (int) ((i14 * f2) + 0.5f);
                iArr[1] = i14;
                return;
            } else {
                if (i12 != 1) {
                    return;
                }
                iArr[0] = i13;
                iArr[1] = (int) ((i13 * f2) + 0.5f);
                return;
            }
        }
        int i15 = (int) ((i14 * f2) + 0.5f);
        int i16 = (int) ((i13 / f2) + 0.5f);
        if (i15 <= i13) {
            iArr[0] = i15;
            iArr[1] = i14;
        } else if (i16 <= i14) {
            iArr[0] = i13;
            iArr[1] = i16;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:154:0x0243, code lost:
    
        if (r5 != 1) goto L125;
     */
    /* JADX WARN: Removed duplicated region for block: B:120:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:77:0x02aa  */
    @Override // s0.e
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(e eVar) {
        float f2;
        boolean z5;
        float f10;
        float f11;
        float f12;
        int i5;
        if (f0.e.b(this.j) == 3) {
            ConstraintWidget constraintWidget = this.f17727b;
            l(constraintWidget.H, constraintWidget.J, 0);
            return;
        }
        h hVar = this.f17730e;
        boolean z6 = hVar.j;
        g gVar = this.f17733h;
        g gVar2 = this.f17734i;
        if (!z6 && this.f17729d == 3) {
            ConstraintWidget constraintWidget2 = this.f17727b;
            int i6 = constraintWidget2.f1247q;
            if (i6 == 2) {
                f2 = 0.5f;
                ConstraintWidget constraintWidget3 = constraintWidget2.S;
                if (constraintWidget3 != null) {
                    if (constraintWidget3.f1225d.f17730e.j) {
                        hVar.d((int) ((r5.f17715g * constraintWidget2.f1252v) + 0.5f));
                    }
                }
            } else if (i6 == 3) {
                int i10 = constraintWidget2.f1248r;
                if (i10 == 0 || i10 == 3) {
                    n nVar = constraintWidget2.f1227e;
                    g gVar3 = nVar.f17733h;
                    g gVar4 = nVar.f17734i;
                    boolean z7 = constraintWidget2.H.f17081f != null;
                    boolean z8 = constraintWidget2.I.f17081f != null;
                    boolean z10 = constraintWidget2.J.f17081f != null;
                    boolean z11 = constraintWidget2.K.f17081f != null;
                    f2 = 0.5f;
                    int i11 = constraintWidget2.W;
                    if (z7 && z8 && z10 && z11) {
                        float f13 = constraintWidget2.V;
                        boolean z12 = gVar3.j;
                        ArrayList arrayList = gVar3.f17718l;
                        int[] iArr = k;
                        if (z12 && gVar4.j) {
                            if (gVar.f17711c && gVar2.f17711c) {
                                m(iArr, ((g) gVar.f17718l.get(0)).f17715g + gVar.f17714f, ((g) gVar2.f17718l.get(0)).f17715g - gVar2.f17714f, gVar3.f17715g + gVar3.f17714f, gVar4.f17715g - gVar4.f17714f, f13, i11);
                                hVar.d(iArr[0]);
                                this.f17727b.f1227e.f17730e.d(iArr[1]);
                                return;
                            }
                            return;
                        }
                        if (gVar.j && gVar2.j) {
                            if (!gVar3.f17711c || !gVar4.f17711c) {
                                return;
                            }
                            m(iArr, gVar.f17715g + gVar.f17714f, gVar2.f17715g - gVar2.f17714f, ((g) arrayList.get(0)).f17715g + gVar3.f17714f, ((g) gVar4.f17718l.get(0)).f17715g - gVar4.f17714f, f13, i11);
                            hVar.d(iArr[0]);
                            this.f17727b.f1227e.f17730e.d(iArr[1]);
                        }
                        if (!gVar.f17711c || !gVar2.f17711c || !gVar3.f17711c || !gVar4.f17711c) {
                            return;
                        }
                        m(iArr, ((g) gVar.f17718l.get(0)).f17715g + gVar.f17714f, ((g) gVar2.f17718l.get(0)).f17715g - gVar2.f17714f, ((g) arrayList.get(0)).f17715g + gVar3.f17714f, ((g) gVar4.f17718l.get(0)).f17715g - gVar4.f17714f, f13, i11);
                        hVar.d(iArr[0]);
                        this.f17727b.f1227e.f17730e.d(iArr[1]);
                    } else if (z7 && z10) {
                        if (!gVar.f17711c || !gVar2.f17711c) {
                            return;
                        }
                        float f14 = constraintWidget2.V;
                        int i12 = ((g) gVar.f17718l.get(0)).f17715g + gVar.f17714f;
                        int i13 = ((g) gVar2.f17718l.get(0)).f17715g - gVar2.f17714f;
                        if (i11 == -1 || i11 == 0) {
                            int g6 = g(i13 - i12, 0);
                            int i14 = (int) ((g6 * f14) + 0.5f);
                            int g10 = g(i14, 1);
                            if (i14 != g10) {
                                g6 = (int) ((g10 / f14) + 0.5f);
                            }
                            hVar.d(g6);
                            this.f17727b.f1227e.f17730e.d(g10);
                        } else if (i11 == 1) {
                            int g11 = g(i13 - i12, 0);
                            int i15 = (int) ((g11 / f14) + 0.5f);
                            int g12 = g(i15, 1);
                            if (i15 != g12) {
                                g11 = (int) ((g12 * f14) + 0.5f);
                            }
                            hVar.d(g11);
                            this.f17727b.f1227e.f17730e.d(g12);
                        }
                    } else if (z8 && z11) {
                        if (!gVar3.f17711c || !gVar4.f17711c) {
                            return;
                        }
                        float f15 = constraintWidget2.V;
                        int i16 = ((g) gVar3.f17718l.get(0)).f17715g + gVar3.f17714f;
                        int i17 = ((g) gVar4.f17718l.get(0)).f17715g - gVar4.f17714f;
                        if (i11 != -1) {
                            if (i11 == 0) {
                                int g13 = g(i17 - i16, 1);
                                int i18 = (int) ((g13 * f15) + 0.5f);
                                int g14 = g(i18, 0);
                                if (i18 != g14) {
                                    g13 = (int) ((g14 / f15) + 0.5f);
                                }
                                hVar.d(g14);
                                this.f17727b.f1227e.f17730e.d(g13);
                            }
                        }
                        int g15 = g(i17 - i16, 1);
                        int i19 = (int) ((g15 / f15) + 0.5f);
                        int g16 = g(i19, 0);
                        if (i19 != g16) {
                            g15 = (int) ((g16 * f15) + 0.5f);
                        }
                        hVar.d(g16);
                        this.f17727b.f1227e.f17730e.d(g15);
                    }
                } else {
                    int i20 = constraintWidget2.W;
                    if (i20 == -1) {
                        f10 = constraintWidget2.f1227e.f17730e.f17715g;
                        f11 = constraintWidget2.V;
                    } else if (i20 == 0) {
                        f12 = constraintWidget2.f1227e.f17730e.f17715g / constraintWidget2.V;
                        i5 = (int) (f12 + 0.5f);
                        hVar.d(i5);
                    } else if (i20 != 1) {
                        i5 = 0;
                        hVar.d(i5);
                    } else {
                        f10 = constraintWidget2.f1227e.f17730e.f17715g;
                        f11 = constraintWidget2.V;
                    }
                    f12 = f10 * f11;
                    i5 = (int) (f12 + 0.5f);
                    hVar.d(i5);
                }
            }
            z5 = gVar.f17711c;
            ArrayList arrayList2 = gVar.f17718l;
            if (z5) {
                return;
            }
            boolean z13 = gVar2.f17711c;
            ArrayList arrayList3 = gVar2.f17718l;
            if (z13) {
                if (gVar.j && gVar2.j && hVar.j) {
                    return;
                }
                if (!hVar.j && this.f17729d == 3) {
                    ConstraintWidget constraintWidget4 = this.f17727b;
                    if (constraintWidget4.f1247q == 0 && !constraintWidget4.u()) {
                        g gVar5 = (g) arrayList2.get(0);
                        g gVar6 = (g) arrayList3.get(0);
                        int i21 = gVar5.f17715g + gVar.f17714f;
                        int i22 = gVar6.f17715g + gVar2.f17714f;
                        gVar.d(i21);
                        gVar2.d(i22);
                        hVar.d(i22 - i21);
                        return;
                    }
                }
                if (!hVar.j && this.f17729d == 3 && this.a == 1 && arrayList2.size() > 0 && arrayList3.size() > 0) {
                    int min = Math.min((((g) arrayList3.get(0)).f17715g + gVar2.f17714f) - (((g) arrayList2.get(0)).f17715g + gVar.f17714f), hVar.f17719m);
                    ConstraintWidget constraintWidget5 = this.f17727b;
                    int i23 = constraintWidget5.f1251u;
                    int max = Math.max(constraintWidget5.f1250t, min);
                    if (i23 > 0) {
                        max = Math.min(i23, max);
                    }
                    hVar.d(max);
                }
                if (hVar.j) {
                    g gVar7 = (g) arrayList2.get(0);
                    g gVar8 = (g) arrayList3.get(0);
                    int i24 = gVar7.f17715g;
                    int i25 = gVar.f17714f + i24;
                    int i26 = gVar8.f17715g;
                    int i27 = gVar2.f17714f + i26;
                    float f16 = this.f17727b.f1224c0;
                    if (gVar7 == gVar8) {
                        f16 = f2;
                    } else {
                        i24 = i25;
                        i26 = i27;
                    }
                    gVar.d((int) ((((i26 - i24) - hVar.f17715g) * f16) + i24 + f2));
                    gVar2.d(gVar.f17715g + hVar.f17715g);
                    return;
                }
                return;
            }
            return;
        }
        f2 = 0.5f;
        z5 = gVar.f17711c;
        ArrayList arrayList22 = gVar.f17718l;
        if (z5) {
        }
    }

    @Override // s0.p
    public final void d() {
        ConstraintWidget constraintWidget;
        ConstraintWidget constraintWidget2;
        int i5;
        ConstraintWidget constraintWidget3;
        ConstraintWidget constraintWidget4;
        int i6;
        ConstraintWidget constraintWidget5 = this.f17727b;
        boolean z5 = constraintWidget5.a;
        h hVar = this.f17730e;
        if (z5) {
            hVar.d(constraintWidget5.n());
        }
        boolean z6 = hVar.j;
        ArrayList arrayList = hVar.k;
        ArrayList arrayList2 = hVar.f17718l;
        g gVar = this.f17734i;
        g gVar2 = this.f17733h;
        if (!z6) {
            ConstraintWidget constraintWidget6 = this.f17727b;
            int i10 = constraintWidget6.f1245o0[0];
            this.f17729d = i10;
            if (i10 != 3) {
                if (i10 == 4 && (constraintWidget4 = constraintWidget6.S) != null && ((i6 = constraintWidget4.f1245o0[0]) == 1 || i6 == 4)) {
                    int n6 = (constraintWidget4.n() - this.f17727b.H.e()) - this.f17727b.J.e();
                    p.b(gVar2, constraintWidget4.f1225d.f17733h, this.f17727b.H.e());
                    p.b(gVar, constraintWidget4.f1225d.f17734i, -this.f17727b.J.e());
                    hVar.d(n6);
                    return;
                }
                if (i10 == 1) {
                    hVar.d(constraintWidget6.n());
                }
            }
        } else if (this.f17729d == 4 && (constraintWidget2 = (constraintWidget = this.f17727b).S) != null && ((i5 = constraintWidget2.f1245o0[0]) == 1 || i5 == 4)) {
            p.b(gVar2, constraintWidget2.f1225d.f17733h, constraintWidget.H.e());
            p.b(gVar, constraintWidget2.f1225d.f17734i, -this.f17727b.J.e());
            return;
        }
        if (hVar.j) {
            ConstraintWidget constraintWidget7 = this.f17727b;
            if (constraintWidget7.a) {
                r0.c[] cVarArr = constraintWidget7.P;
                r0.c cVar = cVarArr[0];
                r0.c cVar2 = cVar.f17081f;
                if (cVar2 != null && cVarArr[1].f17081f != null) {
                    if (constraintWidget7.u()) {
                        gVar2.f17714f = this.f17727b.P[0].e();
                        gVar.f17714f = -this.f17727b.P[1].e();
                        return;
                    }
                    g h6 = p.h(this.f17727b.P[0]);
                    if (h6 != null) {
                        p.b(gVar2, h6, this.f17727b.P[0].e());
                    }
                    g h7 = p.h(this.f17727b.P[1]);
                    if (h7 != null) {
                        p.b(gVar, h7, -this.f17727b.P[1].e());
                    }
                    gVar2.f17710b = true;
                    gVar.f17710b = true;
                    return;
                }
                if (cVar2 != null) {
                    g h10 = p.h(cVar);
                    if (h10 != null) {
                        p.b(gVar2, h10, this.f17727b.P[0].e());
                        p.b(gVar, gVar2, hVar.f17715g);
                        return;
                    }
                    return;
                }
                r0.c cVar3 = cVarArr[1];
                if (cVar3.f17081f != null) {
                    g h11 = p.h(cVar3);
                    if (h11 != null) {
                        p.b(gVar, h11, -this.f17727b.P[1].e());
                        p.b(gVar2, gVar, -hVar.f17715g);
                        return;
                    }
                    return;
                }
                if ((constraintWidget7 instanceof r0.g) || constraintWidget7.S == null || constraintWidget7.i(7).f17081f != null) {
                    return;
                }
                ConstraintWidget constraintWidget8 = this.f17727b;
                p.b(gVar2, constraintWidget8.S.f1225d.f17733h, constraintWidget8.o());
                p.b(gVar, gVar2, hVar.f17715g);
                return;
            }
        }
        if (this.f17729d == 3) {
            ConstraintWidget constraintWidget9 = this.f17727b;
            int i11 = constraintWidget9.f1247q;
            if (i11 == 2) {
                ConstraintWidget constraintWidget10 = constraintWidget9.S;
                if (constraintWidget10 != null) {
                    h hVar2 = constraintWidget10.f1227e.f17730e;
                    arrayList2.add(hVar2);
                    hVar2.k.add(hVar);
                    hVar.f17710b = true;
                    arrayList.add(gVar2);
                    arrayList.add(gVar);
                }
            } else if (i11 == 3) {
                if (constraintWidget9.f1248r == 3) {
                    gVar2.a = this;
                    gVar.a = this;
                    n nVar = constraintWidget9.f1227e;
                    nVar.f17733h.a = this;
                    nVar.f17734i.a = this;
                    hVar.a = this;
                    if (constraintWidget9.v()) {
                        arrayList2.add(this.f17727b.f1227e.f17730e);
                        this.f17727b.f1227e.f17730e.k.add(hVar);
                        n nVar2 = this.f17727b.f1227e;
                        nVar2.f17730e.a = this;
                        arrayList2.add(nVar2.f17733h);
                        arrayList2.add(this.f17727b.f1227e.f17734i);
                        this.f17727b.f1227e.f17733h.k.add(hVar);
                        this.f17727b.f1227e.f17734i.k.add(hVar);
                    } else if (this.f17727b.u()) {
                        this.f17727b.f1227e.f17730e.f17718l.add(hVar);
                        arrayList.add(this.f17727b.f1227e.f17730e);
                    } else {
                        this.f17727b.f1227e.f17730e.f17718l.add(hVar);
                    }
                } else {
                    h hVar3 = constraintWidget9.f1227e.f17730e;
                    arrayList2.add(hVar3);
                    hVar3.k.add(hVar);
                    this.f17727b.f1227e.f17733h.k.add(hVar);
                    this.f17727b.f1227e.f17734i.k.add(hVar);
                    hVar.f17710b = true;
                    arrayList.add(gVar2);
                    arrayList.add(gVar);
                    gVar2.f17718l.add(hVar);
                    gVar.f17718l.add(hVar);
                }
            }
        }
        ConstraintWidget constraintWidget11 = this.f17727b;
        r0.c[] cVarArr2 = constraintWidget11.P;
        r0.c cVar4 = cVarArr2[0];
        r0.c cVar5 = cVar4.f17081f;
        if (cVar5 != null && cVarArr2[1].f17081f != null) {
            if (constraintWidget11.u()) {
                gVar2.f17714f = this.f17727b.P[0].e();
                gVar.f17714f = -this.f17727b.P[1].e();
                return;
            }
            g h12 = p.h(this.f17727b.P[0]);
            g h13 = p.h(this.f17727b.P[1]);
            if (h12 != null) {
                h12.b(this);
            }
            if (h13 != null) {
                h13.b(this);
            }
            this.j = 4;
            return;
        }
        if (cVar5 != null) {
            g h14 = p.h(cVar4);
            if (h14 != null) {
                p.b(gVar2, h14, this.f17727b.P[0].e());
                c(gVar, gVar2, 1, hVar);
                return;
            }
            return;
        }
        r0.c cVar6 = cVarArr2[1];
        if (cVar6.f17081f != null) {
            g h15 = p.h(cVar6);
            if (h15 != null) {
                p.b(gVar, h15, -this.f17727b.P[1].e());
                c(gVar2, gVar, -1, hVar);
                return;
            }
            return;
        }
        if ((constraintWidget11 instanceof r0.g) || (constraintWidget3 = constraintWidget11.S) == null) {
            return;
        }
        p.b(gVar2, constraintWidget3.f1225d.f17733h, constraintWidget11.o());
        c(gVar, gVar2, 1, hVar);
    }

    @Override // s0.p
    public final void e() {
        g gVar = this.f17733h;
        if (gVar.j) {
            this.f17727b.X = gVar.f17715g;
        }
    }

    @Override // s0.p
    public final void f() {
        this.f17728c = null;
        this.f17733h.c();
        this.f17734i.c();
        this.f17730e.c();
        this.f17732g = false;
    }

    @Override // s0.p
    public final boolean k() {
        return this.f17729d != 3 || this.f17727b.f1247q == 0;
    }

    public final void n() {
        this.f17732g = false;
        g gVar = this.f17733h;
        gVar.c();
        gVar.j = false;
        g gVar2 = this.f17734i;
        gVar2.c();
        gVar2.j = false;
        this.f17730e.j = false;
    }

    public final String toString() {
        return "HorizontalRun " + this.f17727b.f1232g0;
    }
}
