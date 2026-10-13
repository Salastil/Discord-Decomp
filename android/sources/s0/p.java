package s0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;

/* loaded from: classes.dex */
public abstract class p implements e {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public ConstraintWidget f17727b;

    /* renamed from: c, reason: collision with root package name */
    public m f17728c;

    /* renamed from: d, reason: collision with root package name */
    public int f17729d;

    /* renamed from: e, reason: collision with root package name */
    public final h f17730e = new h(this);

    /* renamed from: f, reason: collision with root package name */
    public int f17731f = 0;

    /* renamed from: g, reason: collision with root package name */
    public boolean f17732g = false;

    /* renamed from: h, reason: collision with root package name */
    public final g f17733h = new g(this);

    /* renamed from: i, reason: collision with root package name */
    public final g f17734i = new g(this);
    public int j = 1;

    public p(ConstraintWidget constraintWidget) {
        this.f17727b = constraintWidget;
    }

    public static void b(g gVar, g gVar2, int i5) {
        gVar.f17718l.add(gVar2);
        gVar.f17714f = i5;
        gVar2.k.add(gVar);
    }

    public static g h(r0.c cVar) {
        r0.c cVar2 = cVar.f17081f;
        if (cVar2 == null) {
            return null;
        }
        ConstraintWidget constraintWidget = cVar2.f17079d;
        int b10 = f0.e.b(cVar2.f17080e);
        if (b10 == 1) {
            return constraintWidget.f1225d.f17733h;
        }
        if (b10 == 2) {
            return constraintWidget.f1227e.f17733h;
        }
        if (b10 == 3) {
            return constraintWidget.f1225d.f17734i;
        }
        if (b10 == 4) {
            return constraintWidget.f1227e.f17734i;
        }
        if (b10 != 5) {
            return null;
        }
        return constraintWidget.f1227e.k;
    }

    public static g i(r0.c cVar, int i5) {
        r0.c cVar2 = cVar.f17081f;
        if (cVar2 == null) {
            return null;
        }
        ConstraintWidget constraintWidget = cVar2.f17079d;
        p pVar = i5 == 0 ? constraintWidget.f1225d : constraintWidget.f1227e;
        int b10 = f0.e.b(cVar2.f17080e);
        if (b10 == 1 || b10 == 2) {
            return pVar.f17733h;
        }
        if (b10 == 3 || b10 == 4) {
            return pVar.f17734i;
        }
        return null;
    }

    public final void c(g gVar, g gVar2, int i5, h hVar) {
        gVar.f17718l.add(gVar2);
        gVar.f17718l.add(this.f17730e);
        gVar.f17716h = i5;
        gVar.f17717i = hVar;
        gVar2.k.add(gVar);
        hVar.k.add(gVar);
    }

    public abstract void d();

    public abstract void e();

    public abstract void f();

    public final int g(int i5, int i6) {
        if (i6 == 0) {
            ConstraintWidget constraintWidget = this.f17727b;
            int i10 = constraintWidget.f1251u;
            int max = Math.max(constraintWidget.f1250t, i5);
            if (i10 > 0) {
                max = Math.min(i10, i5);
            }
            if (max != i5) {
                return max;
            }
        } else {
            ConstraintWidget constraintWidget2 = this.f17727b;
            int i11 = constraintWidget2.f1254x;
            int max2 = Math.max(constraintWidget2.f1253w, i5);
            if (i11 > 0) {
                max2 = Math.min(i11, i5);
            }
            if (max2 != i5) {
                return max2;
            }
        }
        return i5;
    }

    public long j() {
        if (this.f17730e.j) {
            return r0.f17715g;
        }
        return 0L;
    }

    public abstract boolean k();

    /* JADX WARN: Code restructure failed: missing block: B:23:0x0051, code lost:
    
        if (r9.a == 3) goto L50;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void l(r0.c cVar, r0.c cVar2, int i5) {
        g h6 = h(cVar);
        g h7 = h(cVar2);
        if (h6.j && h7.j) {
            int e9 = cVar.e() + h6.f17715g;
            int e10 = h7.f17715g - cVar2.e();
            int i6 = e10 - e9;
            h hVar = this.f17730e;
            if (!hVar.j && this.f17729d == 3) {
                int i10 = this.a;
                if (i10 == 0) {
                    hVar.d(g(i6, i5));
                } else if (i10 == 1) {
                    hVar.d(Math.min(g(hVar.f17719m, i5), i6));
                } else if (i10 == 2) {
                    ConstraintWidget constraintWidget = this.f17727b;
                    ConstraintWidget constraintWidget2 = constraintWidget.S;
                    if (constraintWidget2 != null) {
                        if ((i5 == 0 ? constraintWidget2.f1225d : constraintWidget2.f1227e).f17730e.j) {
                            hVar.d(g((int) ((r6.f17715g * (i5 == 0 ? constraintWidget.f1252v : constraintWidget.f1255y)) + 0.5f), i5));
                        }
                    }
                } else if (i10 == 3) {
                    ConstraintWidget constraintWidget3 = this.f17727b;
                    p pVar = constraintWidget3.f1225d;
                    if (pVar.f17729d == 3 && pVar.a == 3) {
                        n nVar = constraintWidget3.f1227e;
                        if (nVar.f17729d == 3) {
                        }
                    }
                    if (i5 == 0) {
                        pVar = constraintWidget3.f1227e;
                    }
                    if (pVar.f17730e.j) {
                        float f2 = constraintWidget3.V;
                        hVar.d(i5 == 1 ? (int) ((r6.f17715g / f2) + 0.5f) : (int) ((f2 * r6.f17715g) + 0.5f));
                    }
                }
            }
            if (hVar.j) {
                int i11 = hVar.f17715g;
                g gVar = this.f17734i;
                g gVar2 = this.f17733h;
                if (i11 == i6) {
                    gVar2.d(e9);
                    gVar.d(e10);
                    return;
                }
                ConstraintWidget constraintWidget4 = this.f17727b;
                float f10 = i5 == 0 ? constraintWidget4.f1224c0 : constraintWidget4.f1226d0;
                if (h6 == h7) {
                    e9 = h6.f17715g;
                    e10 = h7.f17715g;
                    f10 = 0.5f;
                }
                gVar2.d((int) ((((e10 - e9) - i11) * f10) + e9 + 0.5f));
                gVar.d(gVar2.f17715g + hVar.f17715g);
            }
        }
    }
}
