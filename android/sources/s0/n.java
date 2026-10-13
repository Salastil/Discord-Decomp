package s0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class n extends p {
    public g k;

    /* renamed from: l, reason: collision with root package name */
    public a f17721l;

    @Override // s0.e
    public final void a(e eVar) {
        float f2;
        float f10;
        float f11;
        int i5;
        if (f0.e.b(this.j) == 3) {
            ConstraintWidget constraintWidget = this.f17727b;
            l(constraintWidget.I, constraintWidget.K, 1);
            return;
        }
        h hVar = this.f17730e;
        if (hVar.f17711c && !hVar.j && this.f17729d == 3) {
            ConstraintWidget constraintWidget2 = this.f17727b;
            int i6 = constraintWidget2.f1248r;
            if (i6 == 2) {
                ConstraintWidget constraintWidget3 = constraintWidget2.S;
                if (constraintWidget3 != null) {
                    if (constraintWidget3.f1227e.f17730e.j) {
                        hVar.d((int) ((r5.f17715g * constraintWidget2.f1255y) + 0.5f));
                    }
                }
            } else if (i6 == 3) {
                h hVar2 = constraintWidget2.f1225d.f17730e;
                if (hVar2.j) {
                    int i10 = constraintWidget2.W;
                    if (i10 == -1) {
                        f2 = hVar2.f17715g;
                        f10 = constraintWidget2.V;
                    } else if (i10 == 0) {
                        f11 = hVar2.f17715g * constraintWidget2.V;
                        i5 = (int) (f11 + 0.5f);
                        hVar.d(i5);
                    } else if (i10 != 1) {
                        i5 = 0;
                        hVar.d(i5);
                    } else {
                        f2 = hVar2.f17715g;
                        f10 = constraintWidget2.V;
                    }
                    f11 = f2 / f10;
                    i5 = (int) (f11 + 0.5f);
                    hVar.d(i5);
                }
            }
        }
        g gVar = this.f17733h;
        boolean z5 = gVar.f17711c;
        ArrayList arrayList = gVar.f17718l;
        if (z5) {
            g gVar2 = this.f17734i;
            boolean z6 = gVar2.f17711c;
            ArrayList arrayList2 = gVar2.f17718l;
            if (z6) {
                if (gVar.j && gVar2.j && hVar.j) {
                    return;
                }
                if (!hVar.j && this.f17729d == 3) {
                    ConstraintWidget constraintWidget4 = this.f17727b;
                    if (constraintWidget4.f1247q == 0 && !constraintWidget4.v()) {
                        g gVar3 = (g) arrayList.get(0);
                        g gVar4 = (g) arrayList2.get(0);
                        int i11 = gVar3.f17715g + gVar.f17714f;
                        int i12 = gVar4.f17715g + gVar2.f17714f;
                        gVar.d(i11);
                        gVar2.d(i12);
                        hVar.d(i12 - i11);
                        return;
                    }
                }
                if (!hVar.j && this.f17729d == 3 && this.a == 1 && arrayList.size() > 0 && arrayList2.size() > 0) {
                    g gVar5 = (g) arrayList.get(0);
                    int i13 = (((g) arrayList2.get(0)).f17715g + gVar2.f17714f) - (gVar5.f17715g + gVar.f17714f);
                    int i14 = hVar.f17719m;
                    if (i13 < i14) {
                        hVar.d(i13);
                    } else {
                        hVar.d(i14);
                    }
                }
                if (hVar.j && arrayList.size() > 0 && arrayList2.size() > 0) {
                    g gVar6 = (g) arrayList.get(0);
                    g gVar7 = (g) arrayList2.get(0);
                    int i15 = gVar6.f17715g;
                    int i16 = gVar.f17714f + i15;
                    int i17 = gVar7.f17715g;
                    int i18 = gVar2.f17714f + i17;
                    float f12 = this.f17727b.f1226d0;
                    if (gVar6 == gVar7) {
                        f12 = 0.5f;
                    } else {
                        i15 = i16;
                        i17 = i18;
                    }
                    gVar.d((int) ((((i17 - i15) - hVar.f17715g) * f12) + i15 + 0.5f));
                    gVar2.d(gVar.f17715g + hVar.f17715g);
                }
            }
        }
    }

    @Override // s0.p
    public final void d() {
        ConstraintWidget constraintWidget;
        ConstraintWidget constraintWidget2;
        ConstraintWidget constraintWidget3;
        ConstraintWidget constraintWidget4;
        g gVar = this.k;
        ConstraintWidget constraintWidget5 = this.f17727b;
        boolean z5 = constraintWidget5.a;
        h hVar = this.f17730e;
        if (z5) {
            hVar.d(constraintWidget5.k());
        }
        boolean z6 = hVar.j;
        ArrayList arrayList = hVar.k;
        ArrayList arrayList2 = hVar.f17718l;
        g gVar2 = this.f17734i;
        g gVar3 = this.f17733h;
        if (!z6) {
            ConstraintWidget constraintWidget6 = this.f17727b;
            this.f17729d = constraintWidget6.f1245o0[1];
            if (constraintWidget6.D) {
                this.f17721l = new a(this);
            }
            int i5 = this.f17729d;
            if (i5 != 3) {
                if (i5 == 4 && (constraintWidget4 = this.f17727b.S) != null && constraintWidget4.f1245o0[1] == 1) {
                    int k = (constraintWidget4.k() - this.f17727b.I.e()) - this.f17727b.K.e();
                    p.b(gVar3, constraintWidget4.f1227e.f17733h, this.f17727b.I.e());
                    p.b(gVar2, constraintWidget4.f1227e.f17734i, -this.f17727b.K.e());
                    hVar.d(k);
                    return;
                }
                if (i5 == 1) {
                    hVar.d(this.f17727b.k());
                }
            }
        } else if (this.f17729d == 4 && (constraintWidget2 = (constraintWidget = this.f17727b).S) != null && constraintWidget2.f1245o0[1] == 1) {
            p.b(gVar3, constraintWidget2.f1227e.f17733h, constraintWidget.I.e());
            p.b(gVar2, constraintWidget2.f1227e.f17734i, -this.f17727b.K.e());
            return;
        }
        boolean z7 = hVar.j;
        if (z7) {
            ConstraintWidget constraintWidget7 = this.f17727b;
            if (constraintWidget7.a) {
                r0.c[] cVarArr = constraintWidget7.P;
                r0.c cVar = cVarArr[2];
                r0.c cVar2 = cVar.f17081f;
                if (cVar2 != null && cVarArr[3].f17081f != null) {
                    if (constraintWidget7.v()) {
                        gVar3.f17714f = this.f17727b.P[2].e();
                        gVar2.f17714f = -this.f17727b.P[3].e();
                    } else {
                        g h6 = p.h(this.f17727b.P[2]);
                        if (h6 != null) {
                            p.b(gVar3, h6, this.f17727b.P[2].e());
                        }
                        g h7 = p.h(this.f17727b.P[3]);
                        if (h7 != null) {
                            p.b(gVar2, h7, -this.f17727b.P[3].e());
                        }
                        gVar3.f17710b = true;
                        gVar2.f17710b = true;
                    }
                    ConstraintWidget constraintWidget8 = this.f17727b;
                    if (constraintWidget8.D) {
                        p.b(gVar, gVar3, constraintWidget8.Z);
                        return;
                    }
                    return;
                }
                if (cVar2 != null) {
                    g h10 = p.h(cVar);
                    if (h10 != null) {
                        p.b(gVar3, h10, this.f17727b.P[2].e());
                        p.b(gVar2, gVar3, hVar.f17715g);
                        ConstraintWidget constraintWidget9 = this.f17727b;
                        if (constraintWidget9.D) {
                            p.b(gVar, gVar3, constraintWidget9.Z);
                            return;
                        }
                        return;
                    }
                    return;
                }
                r0.c cVar3 = cVarArr[3];
                if (cVar3.f17081f != null) {
                    g h11 = p.h(cVar3);
                    if (h11 != null) {
                        p.b(gVar2, h11, -this.f17727b.P[3].e());
                        p.b(gVar3, gVar2, -hVar.f17715g);
                    }
                    ConstraintWidget constraintWidget10 = this.f17727b;
                    if (constraintWidget10.D) {
                        p.b(gVar, gVar3, constraintWidget10.Z);
                        return;
                    }
                    return;
                }
                r0.c cVar4 = cVarArr[4];
                if (cVar4.f17081f != null) {
                    g h12 = p.h(cVar4);
                    if (h12 != null) {
                        p.b(gVar, h12, 0);
                        p.b(gVar3, gVar, -this.f17727b.Z);
                        p.b(gVar2, gVar3, hVar.f17715g);
                        return;
                    }
                    return;
                }
                if ((constraintWidget7 instanceof r0.g) || constraintWidget7.S == null || constraintWidget7.i(7).f17081f != null) {
                    return;
                }
                ConstraintWidget constraintWidget11 = this.f17727b;
                p.b(gVar3, constraintWidget11.S.f1227e.f17733h, constraintWidget11.p());
                p.b(gVar2, gVar3, hVar.f17715g);
                ConstraintWidget constraintWidget12 = this.f17727b;
                if (constraintWidget12.D) {
                    p.b(gVar, gVar3, constraintWidget12.Z);
                    return;
                }
                return;
            }
        }
        if (z7 || this.f17729d != 3) {
            hVar.b(this);
        } else {
            ConstraintWidget constraintWidget13 = this.f17727b;
            int i6 = constraintWidget13.f1248r;
            if (i6 == 2) {
                ConstraintWidget constraintWidget14 = constraintWidget13.S;
                if (constraintWidget14 != null) {
                    h hVar2 = constraintWidget14.f1227e.f17730e;
                    arrayList2.add(hVar2);
                    hVar2.k.add(hVar);
                    hVar.f17710b = true;
                    arrayList.add(gVar3);
                    arrayList.add(gVar2);
                }
            } else if (i6 == 3 && !constraintWidget13.v()) {
                ConstraintWidget constraintWidget15 = this.f17727b;
                if (constraintWidget15.f1247q != 3) {
                    h hVar3 = constraintWidget15.f1225d.f17730e;
                    arrayList2.add(hVar3);
                    hVar3.k.add(hVar);
                    hVar.f17710b = true;
                    arrayList.add(gVar3);
                    arrayList.add(gVar2);
                }
            }
        }
        ConstraintWidget constraintWidget16 = this.f17727b;
        r0.c[] cVarArr2 = constraintWidget16.P;
        r0.c cVar5 = cVarArr2[2];
        r0.c cVar6 = cVar5.f17081f;
        if (cVar6 != null && cVarArr2[3].f17081f != null) {
            if (constraintWidget16.v()) {
                gVar3.f17714f = this.f17727b.P[2].e();
                gVar2.f17714f = -this.f17727b.P[3].e();
            } else {
                g h13 = p.h(this.f17727b.P[2]);
                g h14 = p.h(this.f17727b.P[3]);
                if (h13 != null) {
                    h13.b(this);
                }
                if (h14 != null) {
                    h14.b(this);
                }
                this.j = 4;
            }
            if (this.f17727b.D) {
                c(gVar, gVar3, 1, this.f17721l);
            }
        } else if (cVar6 != null) {
            g h15 = p.h(cVar5);
            if (h15 != null) {
                p.b(gVar3, h15, this.f17727b.P[2].e());
                c(gVar2, gVar3, 1, hVar);
                if (this.f17727b.D) {
                    c(gVar, gVar3, 1, this.f17721l);
                }
                if (this.f17729d == 3) {
                    ConstraintWidget constraintWidget17 = this.f17727b;
                    if (constraintWidget17.V > 0.0f) {
                        l lVar = constraintWidget17.f1225d;
                        if (lVar.f17729d == 3) {
                            lVar.f17730e.k.add(hVar);
                            arrayList2.add(this.f17727b.f1225d.f17730e);
                            hVar.a = this;
                        }
                    }
                }
            }
        } else {
            r0.c cVar7 = cVarArr2[3];
            if (cVar7.f17081f != null) {
                g h16 = p.h(cVar7);
                if (h16 != null) {
                    p.b(gVar2, h16, -this.f17727b.P[3].e());
                    c(gVar3, gVar2, -1, hVar);
                    if (this.f17727b.D) {
                        c(gVar, gVar3, 1, this.f17721l);
                    }
                }
            } else {
                r0.c cVar8 = cVarArr2[4];
                if (cVar8.f17081f != null) {
                    g h17 = p.h(cVar8);
                    if (h17 != null) {
                        p.b(gVar, h17, 0);
                        c(gVar3, gVar, -1, this.f17721l);
                        c(gVar2, gVar3, 1, hVar);
                    }
                } else if (!(constraintWidget16 instanceof r0.g) && (constraintWidget3 = constraintWidget16.S) != null) {
                    p.b(gVar3, constraintWidget3.f1227e.f17733h, constraintWidget16.p());
                    c(gVar2, gVar3, 1, hVar);
                    if (this.f17727b.D) {
                        c(gVar, gVar3, 1, this.f17721l);
                    }
                    if (this.f17729d == 3) {
                        ConstraintWidget constraintWidget18 = this.f17727b;
                        if (constraintWidget18.V > 0.0f) {
                            l lVar2 = constraintWidget18.f1225d;
                            if (lVar2.f17729d == 3) {
                                lVar2.f17730e.k.add(hVar);
                                arrayList2.add(this.f17727b.f1225d.f17730e);
                                hVar.a = this;
                            }
                        }
                    }
                }
            }
        }
        if (arrayList2.size() == 0) {
            hVar.f17711c = true;
        }
    }

    @Override // s0.p
    public final void e() {
        g gVar = this.f17733h;
        if (gVar.j) {
            this.f17727b.Y = gVar.f17715g;
        }
    }

    @Override // s0.p
    public final void f() {
        this.f17728c = null;
        this.f17733h.c();
        this.f17734i.c();
        this.k.c();
        this.f17730e.c();
        this.f17732g = false;
    }

    @Override // s0.p
    public final boolean k() {
        return this.f17729d != 3 || this.f17727b.f1248r == 0;
    }

    public final void m() {
        this.f17732g = false;
        g gVar = this.f17733h;
        gVar.c();
        gVar.j = false;
        g gVar2 = this.f17734i;
        gVar2.c();
        gVar2.j = false;
        g gVar3 = this.k;
        gVar3.c();
        gVar3.j = false;
        this.f17730e.j = false;
    }

    public final String toString() {
        return "VerticalRun " + this.f17727b.f1232g0;
    }
}
