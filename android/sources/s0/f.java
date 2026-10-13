package s0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class f {
    public ConstraintWidgetContainer a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f17703b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f17704c;

    /* renamed from: d, reason: collision with root package name */
    public ConstraintWidgetContainer f17705d;

    /* renamed from: e, reason: collision with root package name */
    public ArrayList f17706e;

    /* renamed from: f, reason: collision with root package name */
    public c f17707f;

    /* renamed from: g, reason: collision with root package name */
    public b f17708g;

    /* renamed from: h, reason: collision with root package name */
    public ArrayList f17709h;

    public final void a(g gVar, int i5, ArrayList arrayList, m mVar) {
        p pVar = gVar.f17712d;
        m mVar2 = pVar.f17728c;
        g gVar2 = pVar.f17734i;
        g gVar3 = pVar.f17733h;
        if (mVar2 == null) {
            ConstraintWidgetContainer constraintWidgetContainer = this.a;
            if (pVar == constraintWidgetContainer.f1225d || pVar == constraintWidgetContainer.f1227e) {
                return;
            }
            if (mVar == null) {
                mVar = new m();
                mVar.a = null;
                mVar.f17720b = new ArrayList();
                mVar.a = pVar;
                arrayList.add(mVar);
            }
            pVar.f17728c = mVar;
            mVar.f17720b.add(pVar);
            Iterator it = gVar3.k.iterator();
            while (it.hasNext()) {
                e eVar = (e) it.next();
                if (eVar instanceof g) {
                    a((g) eVar, i5, arrayList, mVar);
                }
            }
            Iterator it2 = gVar2.k.iterator();
            while (it2.hasNext()) {
                e eVar2 = (e) it2.next();
                if (eVar2 instanceof g) {
                    a((g) eVar2, i5, arrayList, mVar);
                }
            }
            if (i5 == 1 && (pVar instanceof n)) {
                Iterator it3 = ((n) pVar).k.k.iterator();
                while (it3.hasNext()) {
                    e eVar3 = (e) it3.next();
                    if (eVar3 instanceof g) {
                        a((g) eVar3, i5, arrayList, mVar);
                    }
                }
            }
            Iterator it4 = gVar3.f17718l.iterator();
            while (it4.hasNext()) {
                a((g) it4.next(), i5, arrayList, mVar);
            }
            Iterator it5 = gVar2.f17718l.iterator();
            while (it5.hasNext()) {
                a((g) it5.next(), i5, arrayList, mVar);
            }
            if (i5 == 1 && (pVar instanceof n)) {
                Iterator it6 = ((n) pVar).k.f17718l.iterator();
                while (it6.hasNext()) {
                    a((g) it6.next(), i5, arrayList, mVar);
                }
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:143:0x028c A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:182:0x019d A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:194:0x0303  */
    /* JADX WARN: Removed duplicated region for block: B:197:0x0315  */
    /* JADX WARN: Removed duplicated region for block: B:200:0x0328  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x00c7  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x01a2  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x0293 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:99:0x000a A[ADDED_TO_REGION, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void b(ConstraintWidgetContainer constraintWidgetContainer) {
        int i5;
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        int i14;
        f fVar;
        int i15;
        int i16;
        int i17;
        int i18;
        int i19;
        int i20;
        int i21;
        int i22;
        int i23;
        int i24;
        ArrayList arrayList = constraintWidgetContainer.f1257p0;
        int[] iArr = constraintWidgetContainer.f1245o0;
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ConstraintWidget constraintWidget = (ConstraintWidget) it.next();
            int[] iArr2 = constraintWidget.f1245o0;
            r0.c[] cVarArr = constraintWidget.P;
            r0.c cVar = constraintWidget.K;
            r0.c cVar2 = constraintWidget.I;
            r0.c cVar3 = constraintWidget.J;
            r0.c cVar4 = constraintWidget.H;
            int i25 = iArr2[0];
            int i26 = iArr2[1];
            if (constraintWidget.f1230f0 == 8) {
                constraintWidget.a = true;
            } else {
                float f2 = constraintWidget.f1252v;
                if (f2 < 1.0f && i25 == 3) {
                    constraintWidget.f1247q = 2;
                }
                float f10 = constraintWidget.f1255y;
                if (f10 < 1.0f && i26 == 3) {
                    constraintWidget.f1248r = 2;
                }
                if (constraintWidget.V > 0.0f) {
                    if (i25 == 3 && (i26 == 2 || i26 == 1)) {
                        constraintWidget.f1247q = 3;
                    } else if (i26 == 3 && (i25 == 2 || i25 == 1)) {
                        constraintWidget.f1248r = 3;
                    } else if (i25 == 3 && i26 == 3) {
                        if (constraintWidget.f1247q == 0) {
                            constraintWidget.f1247q = 3;
                        }
                        if (constraintWidget.f1248r == 0) {
                            constraintWidget.f1248r = 3;
                        }
                    }
                }
                if (i25 == 3 && constraintWidget.f1247q == 1 && (cVar4.f17081f == null || cVar3.f17081f == null)) {
                    i25 = 2;
                }
                if (i26 == 3 && constraintWidget.f1248r == 1 && (cVar2.f17081f == null || cVar.f17081f == null)) {
                    i26 = 2;
                }
                l lVar = constraintWidget.f1225d;
                lVar.f17729d = i25;
                int i27 = constraintWidget.f1247q;
                lVar.a = i27;
                n nVar = constraintWidget.f1227e;
                nVar.f17729d = i26;
                int i28 = constraintWidget.f1248r;
                nVar.a = i28;
                if (i25 != 4 && i25 != 1) {
                    i15 = 2;
                    if (i25 != 2) {
                        if (i25 == 3) {
                            i16 = i26;
                            i17 = 1;
                        } else if (i26 != i15 && i26 != 1) {
                            i16 = i26;
                            i18 = 3;
                            i17 = 1;
                            if (i16 == i18) {
                            }
                            i23 = 3;
                            if (i22 != i23) {
                            }
                        } else if (i27 == 3) {
                            if (i26 == i15) {
                                f(i15, 0, i15, 0, constraintWidget);
                            }
                            int k = constraintWidget.k();
                            f(1, (int) ((k * constraintWidget.V) + 0.5f), 1, k, constraintWidget);
                            constraintWidget.f1225d.f17730e.d(constraintWidget.n());
                            constraintWidget.f1227e.f17730e.d(constraintWidget.k());
                            constraintWidget.a = true;
                        } else {
                            int i29 = i15;
                            if (i27 == 1) {
                                f(i29, 0, i26, 0, constraintWidget);
                                constraintWidget.f1225d.f17730e.f17719m = constraintWidget.n();
                            } else {
                                i15 = i29;
                                if (i27 == 2) {
                                    int i30 = iArr[0];
                                    if (i30 == 1 || i30 == 4) {
                                        f(1, (int) ((f2 * constraintWidgetContainer.n()) + 0.5f), i26, constraintWidget.k(), constraintWidget);
                                        constraintWidget.f1225d.f17730e.d(constraintWidget.n());
                                        constraintWidget.f1227e.f17730e.d(constraintWidget.k());
                                        constraintWidget.a = true;
                                    } else {
                                        i17 = 1;
                                        i16 = i26;
                                    }
                                } else {
                                    i17 = 1;
                                    i16 = i26;
                                    if (cVarArr[0].f17081f == null || cVarArr[1].f17081f == null) {
                                        f(i15, 0, i16, 0, constraintWidget);
                                        constraintWidget.f1225d.f17730e.d(constraintWidget.n());
                                        constraintWidget.f1227e.f17730e.d(constraintWidget.k());
                                        constraintWidget.a = true;
                                    }
                                }
                                if (i16 == i18) {
                                    i19 = i16;
                                    i20 = i15;
                                    i21 = 1;
                                    i22 = i25;
                                } else if (i25 != i15 && i25 != i17) {
                                    i23 = i18;
                                    i19 = i16;
                                    i20 = i15;
                                    i21 = 1;
                                    i22 = i25;
                                    if (i22 != i23 && i19 == i23) {
                                        if (i27 != i21 || i28 == i21) {
                                            f(i20, 0, i20, 0, constraintWidget);
                                            constraintWidget.f1225d.f17730e.f17719m = constraintWidget.n();
                                            constraintWidget.f1227e.f17730e.f17719m = constraintWidget.k();
                                        } else if (i28 == 2 && i27 == 2 && iArr[0] == i17 && iArr[i21] == i17) {
                                            f(i17, (int) ((f2 * constraintWidgetContainer.n()) + 0.5f), i17, (int) ((f10 * constraintWidgetContainer.k()) + 0.5f), constraintWidget);
                                            constraintWidget.f1225d.f17730e.d(constraintWidget.n());
                                            constraintWidget.f1227e.f17730e.d(constraintWidget.k());
                                            constraintWidget.a = true;
                                        }
                                    }
                                } else if (i28 == i18) {
                                    if (i25 == i15) {
                                        i24 = i17;
                                        f(i15, 0, i15, 0, constraintWidget);
                                    } else {
                                        i24 = i17;
                                    }
                                    int n6 = constraintWidget.n();
                                    float f11 = constraintWidget.V;
                                    if (constraintWidget.W == -1) {
                                        f11 = 1.0f / f11;
                                    }
                                    f(i24, n6, i24, (int) ((n6 * f11) + 0.5f), constraintWidget);
                                    constraintWidget.f1225d.f17730e.d(constraintWidget.n());
                                    constraintWidget.f1227e.f17730e.d(constraintWidget.k());
                                    constraintWidget.a = true;
                                } else {
                                    int i31 = i16;
                                    int i32 = i17;
                                    int i33 = i15;
                                    if (i28 == 1) {
                                        f(i25, 0, i33, 0, constraintWidget);
                                        constraintWidget.f1227e.f17730e.f17719m = constraintWidget.k();
                                    } else {
                                        int i34 = i25;
                                        if (i28 == 2) {
                                            int i35 = iArr[1];
                                            if (i35 == i32 || i35 == 4) {
                                                f(i34, constraintWidget.n(), i32, (int) ((f10 * constraintWidgetContainer.k()) + 0.5f), constraintWidget);
                                                constraintWidget.f1225d.f17730e.d(constraintWidget.n());
                                                constraintWidget.f1227e.f17730e.d(constraintWidget.k());
                                                constraintWidget.a = true;
                                            } else {
                                                i19 = i31;
                                                i22 = i34;
                                                i17 = i32;
                                                i20 = i33;
                                                i21 = 1;
                                            }
                                        } else {
                                            i22 = i34;
                                            i17 = i32;
                                            if (cVarArr[2].f17081f == null || cVarArr[3].f17081f == null) {
                                                f(i33, 0, i31, 0, constraintWidget);
                                                constraintWidget.f1225d.f17730e.d(constraintWidget.n());
                                                constraintWidget.f1227e.f17730e.d(constraintWidget.k());
                                                constraintWidget.a = true;
                                            } else {
                                                i19 = i31;
                                                i20 = i33;
                                                i21 = 1;
                                            }
                                        }
                                    }
                                }
                                i23 = 3;
                                if (i22 != i23) {
                                    if (i27 != i21) {
                                    }
                                    f(i20, 0, i20, 0, constraintWidget);
                                    constraintWidget.f1225d.f17730e.f17719m = constraintWidget.n();
                                    constraintWidget.f1227e.f17730e.f17719m = constraintWidget.k();
                                }
                            }
                        }
                        i18 = 3;
                        if (i16 == i18) {
                        }
                        i23 = 3;
                        if (i22 != i23) {
                        }
                    }
                }
                if (i26 != 4) {
                    if (i26 != 1) {
                        i15 = 2;
                        if (i26 != 2) {
                            if (i25 == 3) {
                            }
                            i18 = 3;
                            if (i16 == i18) {
                            }
                            i23 = 3;
                            if (i22 != i23) {
                            }
                        }
                    } else {
                        i10 = i26;
                        i5 = 1;
                        i6 = i25;
                        int n10 = constraintWidget.n();
                        if (i6 == 4) {
                            n10 = (constraintWidgetContainer.n() - cVar4.f17082g) - cVar3.f17082g;
                            i6 = i5;
                        }
                        int k5 = constraintWidget.k();
                        if (i10 != 4) {
                            i11 = (constraintWidgetContainer.k() - cVar2.f17082g) - cVar.f17082g;
                            i12 = i5;
                            fVar = this;
                            i13 = n10;
                            i14 = i6;
                        } else {
                            i11 = k5;
                            i12 = i10;
                            i13 = n10;
                            i14 = i6;
                            fVar = this;
                        }
                        fVar.f(i14, i13, i12, i11, constraintWidget);
                        constraintWidget.f1225d.f17730e.d(constraintWidget.n());
                        constraintWidget.f1227e.f17730e.d(constraintWidget.k());
                        constraintWidget.a = true;
                    }
                }
                i10 = i26;
                i6 = i25;
                i5 = 1;
                int n102 = constraintWidget.n();
                if (i6 == 4) {
                }
                int k52 = constraintWidget.k();
                if (i10 != 4) {
                }
                fVar.f(i14, i13, i12, i11, constraintWidget);
                constraintWidget.f1225d.f17730e.d(constraintWidget.n());
                constraintWidget.f1227e.f17730e.d(constraintWidget.k());
                constraintWidget.a = true;
            }
        }
    }

    public final void c() {
        ConstraintWidgetContainer constraintWidgetContainer = this.a;
        ArrayList arrayList = this.f17709h;
        ArrayList arrayList2 = this.f17706e;
        arrayList2.clear();
        ConstraintWidgetContainer constraintWidgetContainer2 = this.f17705d;
        constraintWidgetContainer2.f1225d.f();
        constraintWidgetContainer2.f1227e.f();
        arrayList2.add(constraintWidgetContainer2.f1225d);
        arrayList2.add(constraintWidgetContainer2.f1227e);
        Iterator it = constraintWidgetContainer2.f1257p0.iterator();
        HashSet hashSet = null;
        while (it.hasNext()) {
            ConstraintWidget constraintWidget = (ConstraintWidget) it.next();
            if (constraintWidget instanceof r0.f) {
                j jVar = new j(constraintWidget);
                constraintWidget.f1225d.f();
                constraintWidget.f1227e.f();
                jVar.f17731f = ((r0.f) constraintWidget).f17114t0;
                arrayList2.add(jVar);
            } else {
                if (constraintWidget.u()) {
                    if (constraintWidget.f1221b == null) {
                        constraintWidget.f1221b = new d(constraintWidget, 0);
                    }
                    if (hashSet == null) {
                        hashSet = new HashSet();
                    }
                    hashSet.add(constraintWidget.f1221b);
                } else {
                    arrayList2.add(constraintWidget.f1225d);
                }
                if (constraintWidget.v()) {
                    if (constraintWidget.f1223c == null) {
                        constraintWidget.f1223c = new d(constraintWidget, 1);
                    }
                    if (hashSet == null) {
                        hashSet = new HashSet();
                    }
                    hashSet.add(constraintWidget.f1223c);
                } else {
                    arrayList2.add(constraintWidget.f1227e);
                }
                if (constraintWidget instanceof r0.g) {
                    arrayList2.add(new k(constraintWidget));
                }
            }
        }
        if (hashSet != null) {
            arrayList2.addAll(hashSet);
        }
        Iterator it2 = arrayList2.iterator();
        while (it2.hasNext()) {
            ((p) it2.next()).f();
        }
        Iterator it3 = arrayList2.iterator();
        while (it3.hasNext()) {
            p pVar = (p) it3.next();
            if (pVar.f17727b != constraintWidgetContainer2) {
                pVar.d();
            }
        }
        arrayList.clear();
        e(constraintWidgetContainer.f1225d, 0, arrayList);
        e(constraintWidgetContainer.f1227e, 1, arrayList);
        this.f17703b = false;
    }

    public final int d(ConstraintWidgetContainer constraintWidgetContainer, int i5) {
        ArrayList arrayList;
        int i6;
        long max;
        float f2;
        ConstraintWidgetContainer constraintWidgetContainer2 = constraintWidgetContainer;
        ArrayList arrayList2 = this.f17709h;
        int size = arrayList2.size();
        long j = 0;
        int i10 = 0;
        long j5 = 0;
        while (i10 < size) {
            p pVar = ((m) arrayList2.get(i10)).a;
            if (!(pVar instanceof d) ? !(i5 != 0 ? (pVar instanceof n) : (pVar instanceof l)) : ((d) pVar).f17731f != i5) {
                g gVar = (i5 == 0 ? constraintWidgetContainer2.f1225d : constraintWidgetContainer2.f1227e).f17733h;
                g gVar2 = (i5 == 0 ? constraintWidgetContainer2.f1225d : constraintWidgetContainer2.f1227e).f17734i;
                g gVar3 = pVar.f17733h;
                g gVar4 = pVar.f17734i;
                boolean contains = gVar3.f17718l.contains(gVar);
                boolean contains2 = gVar4.f17718l.contains(gVar2);
                long j7 = pVar.j();
                if (contains && contains2) {
                    long b10 = m.b(gVar3, j);
                    long a = m.a(gVar4, j);
                    long j10 = b10 - j7;
                    int i11 = gVar4.f17714f;
                    arrayList = arrayList2;
                    i6 = size;
                    if (j10 >= (-i11)) {
                        j10 += i11;
                    }
                    long j11 = gVar3.f17714f;
                    long j12 = ((-a) - j7) - j11;
                    if (j12 >= j11) {
                        j12 -= j11;
                    }
                    ConstraintWidget constraintWidget = pVar.f17727b;
                    if (i5 == 0) {
                        f2 = constraintWidget.f1224c0;
                    } else if (i5 == 1) {
                        f2 = constraintWidget.f1226d0;
                    } else {
                        constraintWidget.getClass();
                        f2 = -1.0f;
                    }
                    float f10 = f2 > 0.0f ? (long) ((j10 / (1.0f - f2)) + (j12 / f2)) : 0L;
                    max = (gVar3.f17714f + ((((long) ((f10 * f2) + 0.5f)) + j7) + ((long) k0.d.c(1.0f, f2, f10, 0.5f)))) - gVar4.f17714f;
                } else {
                    arrayList = arrayList2;
                    i6 = size;
                    max = contains ? Math.max(m.b(gVar3, gVar3.f17714f), gVar3.f17714f + j7) : contains2 ? Math.max(-m.a(gVar4, gVar4.f17714f), (-gVar4.f17714f) + j7) : (pVar.j() + gVar3.f17714f) - gVar4.f17714f;
                }
            } else {
                arrayList = arrayList2;
                i6 = size;
                max = j;
            }
            j5 = Math.max(j5, max);
            i10++;
            constraintWidgetContainer2 = constraintWidgetContainer;
            arrayList2 = arrayList;
            size = i6;
            j = 0;
        }
        return (int) j5;
    }

    public final void e(p pVar, int i5, ArrayList arrayList) {
        g gVar = pVar.f17733h;
        g gVar2 = pVar.f17734i;
        Iterator it = gVar.k.iterator();
        while (it.hasNext()) {
            e eVar = (e) it.next();
            if (eVar instanceof g) {
                a((g) eVar, i5, arrayList, null);
            } else if (eVar instanceof p) {
                a(((p) eVar).f17733h, i5, arrayList, null);
            }
        }
        Iterator it2 = gVar2.k.iterator();
        while (it2.hasNext()) {
            e eVar2 = (e) it2.next();
            if (eVar2 instanceof g) {
                a((g) eVar2, i5, arrayList, null);
            } else if (eVar2 instanceof p) {
                a(((p) eVar2).f17734i, i5, arrayList, null);
            }
        }
        if (i5 == 1) {
            Iterator it3 = ((n) pVar).k.k.iterator();
            while (it3.hasNext()) {
                e eVar3 = (e) it3.next();
                if (eVar3 instanceof g) {
                    a((g) eVar3, i5, arrayList, null);
                }
            }
        }
    }

    public final void f(int i5, int i6, int i10, int i11, ConstraintWidget constraintWidget) {
        b bVar = this.f17708g;
        bVar.a = i5;
        bVar.f17694b = i10;
        bVar.f17695c = i6;
        bVar.f17696d = i11;
        ((ConstraintLayout.Measurer) this.f17707f).b(constraintWidget, bVar);
        constraintWidget.J(bVar.f17697e);
        constraintWidget.G(bVar.f17698f);
        constraintWidget.D = bVar.f17700h;
        constraintWidget.D(bVar.f17699g);
    }

    public final void g() {
        a aVar;
        Iterator it = this.a.f1257p0.iterator();
        while (it.hasNext()) {
            ConstraintWidget constraintWidget = (ConstraintWidget) it.next();
            if (!constraintWidget.a) {
                int[] iArr = constraintWidget.f1245o0;
                boolean z5 = false;
                int i5 = iArr[0];
                int i6 = iArr[1];
                int i10 = constraintWidget.f1247q;
                int i11 = constraintWidget.f1248r;
                boolean z6 = i5 == 2 || (i5 == 3 && i10 == 1);
                if (i6 == 2 || (i6 == 3 && i11 == 1)) {
                    z5 = true;
                }
                h hVar = constraintWidget.f1225d.f17730e;
                boolean z7 = hVar.j;
                h hVar2 = constraintWidget.f1227e.f17730e;
                boolean z8 = hVar2.j;
                boolean z10 = z6;
                if (z7 && z8) {
                    f(1, hVar.f17715g, 1, hVar2.f17715g, constraintWidget);
                    constraintWidget.a = true;
                } else if (z7 && z5) {
                    f(1, hVar.f17715g, 2, hVar2.f17715g, constraintWidget);
                    if (i6 == 3) {
                        constraintWidget.f1227e.f17730e.f17719m = constraintWidget.k();
                    } else {
                        constraintWidget.f1227e.f17730e.d(constraintWidget.k());
                        constraintWidget.a = true;
                    }
                } else if (z8 && z10) {
                    f(2, hVar.f17715g, 1, hVar2.f17715g, constraintWidget);
                    if (i5 == 3) {
                        constraintWidget.f1225d.f17730e.f17719m = constraintWidget.n();
                    } else {
                        constraintWidget.f1225d.f17730e.d(constraintWidget.n());
                        constraintWidget.a = true;
                    }
                }
                if (constraintWidget.a && (aVar = constraintWidget.f1227e.f17721l) != null) {
                    aVar.d(constraintWidget.Z);
                }
            }
        }
    }
}
