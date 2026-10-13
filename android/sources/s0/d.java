package s0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class d extends p {
    public final ArrayList k;

    /* renamed from: l, reason: collision with root package name */
    public int f17702l;

    public d(ConstraintWidget constraintWidget, int i5) {
        super(constraintWidget);
        ConstraintWidget constraintWidget2;
        ArrayList arrayList = new ArrayList();
        this.k = arrayList;
        this.f17731f = i5;
        ConstraintWidget constraintWidget3 = this.f17727b;
        ConstraintWidget m5 = constraintWidget3.m(i5);
        while (true) {
            constraintWidget2 = constraintWidget3;
            constraintWidget3 = m5;
            if (constraintWidget3 == null) {
                break;
            } else {
                m5 = constraintWidget3.m(this.f17731f);
            }
        }
        this.f17727b = constraintWidget2;
        int i6 = this.f17731f;
        arrayList.add(i6 == 0 ? constraintWidget2.f1225d : i6 == 1 ? constraintWidget2.f1227e : null);
        ConstraintWidget l6 = constraintWidget2.l(this.f17731f);
        while (l6 != null) {
            int i10 = this.f17731f;
            arrayList.add(i10 == 0 ? l6.f1225d : i10 == 1 ? l6.f1227e : null);
            l6 = l6.l(this.f17731f);
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            p pVar = (p) it.next();
            int i11 = this.f17731f;
            if (i11 == 0) {
                pVar.f17727b.f1221b = this;
            } else if (i11 == 1) {
                pVar.f17727b.f1223c = this;
            }
        }
        if (this.f17731f == 0 && ((ConstraintWidgetContainer) this.f17727b.S).f1262u0 && arrayList.size() > 1) {
            this.f17727b = ((p) k0.d.f(1, arrayList)).f17727b;
        }
        this.f17702l = this.f17731f == 0 ? this.f17727b.h0 : this.f17727b.f1235i0;
    }

    /* JADX WARN: Code restructure failed: missing block: B:288:0x0392, code lost:
    
        r2 = r2 - r13;
     */
    /* JADX WARN: Removed duplicated region for block: B:56:0x00ce  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x00dd  */
    @Override // s0.e
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(e eVar) {
        int i5;
        int i6;
        boolean z5;
        float f2;
        int i10;
        int i11;
        int i12;
        int i13;
        float f10;
        int i14;
        int i15;
        int i16;
        int i17;
        int i18;
        int i19;
        boolean z6;
        int i20;
        g gVar = this.f17733h;
        if (gVar.j) {
            g gVar2 = this.f17734i;
            if (gVar2.j) {
                ConstraintWidget constraintWidget = this.f17727b.S;
                boolean z7 = constraintWidget instanceof ConstraintWidgetContainer ? ((ConstraintWidgetContainer) constraintWidget).f1262u0 : false;
                int i21 = gVar2.f17715g - gVar.f17715g;
                ArrayList arrayList = this.k;
                int size = arrayList.size();
                int i22 = 0;
                while (true) {
                    i5 = -1;
                    i6 = 8;
                    if (i22 >= size) {
                        i22 = -1;
                        break;
                    } else if (((p) arrayList.get(i22)).f17727b.f1230f0 != 8) {
                        break;
                    } else {
                        i22++;
                    }
                }
                int i23 = size - 1;
                int i24 = i23;
                while (true) {
                    if (i24 < 0) {
                        break;
                    }
                    if (((p) arrayList.get(i24)).f17727b.f1230f0 != 8) {
                        i5 = i24;
                        break;
                    }
                    i24--;
                }
                int i25 = 0;
                while (i25 < 2) {
                    f2 = 0.0f;
                    int i26 = 0;
                    i12 = 0;
                    int i27 = 0;
                    int i28 = 0;
                    while (i26 < size) {
                        p pVar = (p) arrayList.get(i26);
                        ConstraintWidget constraintWidget2 = pVar.f17727b;
                        boolean z8 = z7;
                        if (constraintWidget2.f1230f0 == i6) {
                            i19 = i25;
                        } else {
                            i28++;
                            if (i26 > 0 && i26 >= i22) {
                                i12 += pVar.f17733h.f17714f;
                            }
                            h hVar = pVar.f17730e;
                            int i29 = hVar.f17715g;
                            i19 = i25;
                            boolean z10 = pVar.f17729d != 3;
                            if (z10) {
                                int i30 = this.f17731f;
                                if (i30 == 0 && !constraintWidget2.f1225d.f17730e.j) {
                                    return;
                                }
                                if (i30 == 1 && !constraintWidget2.f1227e.f17730e.j) {
                                    return;
                                } else {
                                    z6 = z10;
                                }
                            } else {
                                z6 = z10;
                                if (pVar.a == 1 && i19 == 0) {
                                    i20 = hVar.f17719m;
                                    i27++;
                                } else if (hVar.j) {
                                    i20 = i29;
                                }
                                z6 = true;
                                if (z6) {
                                    i27++;
                                    float f11 = constraintWidget2.f1236j0[this.f17731f];
                                    if (f11 >= 0.0f) {
                                        f2 += f11;
                                    }
                                } else {
                                    i12 += i20;
                                }
                                if (i26 < i23 && i26 < i5) {
                                    i12 += -pVar.f17734i.f17714f;
                                }
                            }
                            i20 = i29;
                            if (z6) {
                            }
                            if (i26 < i23) {
                                i12 += -pVar.f17734i.f17714f;
                            }
                        }
                        i26++;
                        z7 = z8;
                        i25 = i19;
                        i6 = 8;
                    }
                    z5 = z7;
                    int i31 = i25;
                    if (i12 < i21 || i27 == 0) {
                        i10 = i27;
                        i11 = i28;
                        break;
                    } else {
                        i25 = i31 + 1;
                        z7 = z5;
                        i6 = 8;
                    }
                }
                z5 = z7;
                f2 = 0.0f;
                i10 = 0;
                i11 = 0;
                i12 = 0;
                int i32 = gVar.f17715g;
                if (z5) {
                    i32 = gVar2.f17715g;
                }
                float f12 = 0.5f;
                if (i12 > i21) {
                    i32 = z5 ? i32 + ((int) (((i12 - i21) / 2.0f) + 0.5f)) : i32 - ((int) (((i12 - i21) / 2.0f) + 0.5f));
                }
                if (i10 > 0) {
                    float f13 = i21 - i12;
                    int i33 = (int) ((f13 / i10) + 0.5f);
                    int i34 = 0;
                    int i35 = 0;
                    while (i34 < size) {
                        float f14 = f12;
                        p pVar2 = (p) arrayList.get(i34);
                        int i36 = i32;
                        ConstraintWidget constraintWidget3 = pVar2.f17727b;
                        int i37 = i10;
                        h hVar2 = pVar2.f17730e;
                        float f15 = f13;
                        int i38 = i33;
                        if (constraintWidget3.f1230f0 == 8 || pVar2.f17729d != 3 || hVar2.j) {
                            i18 = i34;
                        } else {
                            int i39 = f2 > 0.0f ? (int) (((constraintWidget3.f1236j0[this.f17731f] * f15) / f2) + f14) : i38;
                            if (this.f17731f == 0) {
                                i16 = constraintWidget3.f1251u;
                                i17 = constraintWidget3.f1250t;
                            } else {
                                i16 = constraintWidget3.f1254x;
                                i17 = constraintWidget3.f1253w;
                            }
                            i18 = i34;
                            int max = Math.max(i17, pVar2.a == 1 ? Math.min(i39, hVar2.f17719m) : i39);
                            if (i16 > 0) {
                                max = Math.min(i16, max);
                            }
                            if (max != i39) {
                                i35++;
                                i39 = max;
                            }
                            hVar2.d(i39);
                        }
                        i34 = i18 + 1;
                        i32 = i36;
                        f12 = f14;
                        i10 = i37;
                        f13 = f15;
                        i33 = i38;
                    }
                    i13 = i32;
                    f10 = f12;
                    int i40 = i10;
                    if (i35 > 0) {
                        i10 = i40 - i35;
                        i12 = 0;
                        for (int i41 = 0; i41 < size; i41++) {
                            p pVar3 = (p) arrayList.get(i41);
                            if (pVar3.f17727b.f1230f0 != 8) {
                                if (i41 > 0 && i41 >= i22) {
                                    i12 += pVar3.f17733h.f17714f;
                                }
                                i12 += pVar3.f17730e.f17715g;
                                if (i41 < i23 && i41 < i5) {
                                    i12 += -pVar3.f17734i.f17714f;
                                }
                            }
                        }
                    } else {
                        i10 = i40;
                    }
                    i15 = 2;
                    if (this.f17702l == 2 && i35 == 0) {
                        i14 = 0;
                        this.f17702l = 0;
                    } else {
                        i14 = 0;
                    }
                } else {
                    i13 = i32;
                    f10 = 0.5f;
                    i14 = 0;
                    i15 = 2;
                }
                if (i12 > i21) {
                    this.f17702l = i15;
                }
                if (i11 > 0 && i10 == 0 && i22 == i5) {
                    this.f17702l = i15;
                }
                int i42 = this.f17702l;
                if (i42 == 1) {
                    int i43 = i11 > 1 ? (i21 - i12) / (i11 - 1) : i11 == 1 ? (i21 - i12) / 2 : i14;
                    if (i10 > 0) {
                        i43 = i14;
                    }
                    int i44 = i13;
                    for (int i45 = i14; i45 < size; i45++) {
                        p pVar4 = (p) arrayList.get(z5 ? size - (i45 + 1) : i45);
                        ConstraintWidget constraintWidget4 = pVar4.f17727b;
                        g gVar3 = pVar4.f17734i;
                        g gVar4 = pVar4.f17733h;
                        if (constraintWidget4.f1230f0 == 8) {
                            gVar4.d(i44);
                            gVar3.d(i44);
                        } else {
                            if (i45 > 0) {
                                i44 = z5 ? i44 - i43 : i44 + i43;
                            }
                            if (i45 > 0 && i45 >= i22) {
                                i44 = z5 ? i44 - gVar4.f17714f : i44 + gVar4.f17714f;
                            }
                            if (z5) {
                                gVar3.d(i44);
                            } else {
                                gVar4.d(i44);
                            }
                            h hVar3 = pVar4.f17730e;
                            int i46 = hVar3.f17715g;
                            if (pVar4.f17729d == 3 && pVar4.a == 1) {
                                i46 = hVar3.f17719m;
                            }
                            i44 = z5 ? i44 - i46 : i44 + i46;
                            if (z5) {
                                gVar4.d(i44);
                            } else {
                                gVar3.d(i44);
                            }
                            pVar4.f17732g = true;
                            if (i45 < i23 && i45 < i5) {
                                i44 = z5 ? i44 - (-gVar3.f17714f) : i44 + (-gVar3.f17714f);
                            }
                        }
                    }
                    return;
                }
                if (i42 == 0) {
                    int i47 = (i21 - i12) / (i11 + 1);
                    if (i10 > 0) {
                        i47 = i14;
                    }
                    int i48 = i13;
                    for (int i49 = i14; i49 < size; i49++) {
                        p pVar5 = (p) arrayList.get(z5 ? size - (i49 + 1) : i49);
                        ConstraintWidget constraintWidget5 = pVar5.f17727b;
                        g gVar5 = pVar5.f17734i;
                        g gVar6 = pVar5.f17733h;
                        if (constraintWidget5.f1230f0 == 8) {
                            gVar6.d(i48);
                            gVar5.d(i48);
                        } else {
                            int i50 = z5 ? i48 - i47 : i48 + i47;
                            if (i49 > 0 && i49 >= i22) {
                                i50 = z5 ? i50 - gVar6.f17714f : i50 + gVar6.f17714f;
                            }
                            if (z5) {
                                gVar5.d(i50);
                            } else {
                                gVar6.d(i50);
                            }
                            h hVar4 = pVar5.f17730e;
                            int i51 = hVar4.f17715g;
                            if (pVar5.f17729d == 3 && pVar5.a == 1) {
                                i51 = Math.min(i51, hVar4.f17719m);
                            }
                            i48 = z5 ? i50 - i51 : i50 + i51;
                            if (z5) {
                                gVar6.d(i48);
                            } else {
                                gVar5.d(i48);
                            }
                            if (i49 < i23 && i49 < i5) {
                                i48 = z5 ? i48 - (-gVar5.f17714f) : i48 + (-gVar5.f17714f);
                            }
                        }
                    }
                    return;
                }
                if (i42 == 2) {
                    float f16 = this.f17731f == 0 ? this.f17727b.f1224c0 : this.f17727b.f1226d0;
                    if (z5) {
                        f16 = 1.0f - f16;
                    }
                    int i52 = (int) (((i21 - i12) * f16) + f10);
                    if (i52 < 0 || i10 > 0) {
                        i52 = i14;
                    }
                    int i53 = z5 ? i13 - i52 : i13 + i52;
                    for (int i54 = i14; i54 < size; i54++) {
                        p pVar6 = (p) arrayList.get(z5 ? size - (i54 + 1) : i54);
                        ConstraintWidget constraintWidget6 = pVar6.f17727b;
                        g gVar7 = pVar6.f17734i;
                        g gVar8 = pVar6.f17733h;
                        if (constraintWidget6.f1230f0 == 8) {
                            gVar8.d(i53);
                            gVar7.d(i53);
                        } else {
                            if (i54 > 0 && i54 >= i22) {
                                i53 = z5 ? i53 - gVar8.f17714f : i53 + gVar8.f17714f;
                            }
                            if (z5) {
                                gVar7.d(i53);
                            } else {
                                gVar8.d(i53);
                            }
                            h hVar5 = pVar6.f17730e;
                            int i55 = hVar5.f17715g;
                            if (pVar6.f17729d == 3 && pVar6.a == 1) {
                                i55 = hVar5.f17719m;
                            }
                            i53 += i55;
                            if (z5) {
                                gVar8.d(i53);
                            } else {
                                gVar7.d(i53);
                            }
                            if (i54 < i23 && i54 < i5) {
                                i53 = z5 ? i53 - (-gVar7.f17714f) : i53 + (-gVar7.f17714f);
                            }
                        }
                    }
                }
            }
        }
    }

    @Override // s0.p
    public final void d() {
        ArrayList arrayList = this.k;
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((p) it.next()).d();
        }
        int size = arrayList.size();
        if (size < 1) {
            return;
        }
        ConstraintWidget constraintWidget = ((p) arrayList.get(0)).f17727b;
        ConstraintWidget constraintWidget2 = ((p) arrayList.get(size - 1)).f17727b;
        int i5 = this.f17731f;
        g gVar = this.f17734i;
        g gVar2 = this.f17733h;
        if (i5 == 0) {
            r0.c cVar = constraintWidget.H;
            r0.c cVar2 = constraintWidget2.J;
            g i6 = p.i(cVar, 0);
            int e9 = cVar.e();
            ConstraintWidget m5 = m();
            if (m5 != null) {
                e9 = m5.H.e();
            }
            if (i6 != null) {
                p.b(gVar2, i6, e9);
            }
            g i10 = p.i(cVar2, 0);
            int e10 = cVar2.e();
            ConstraintWidget n6 = n();
            if (n6 != null) {
                e10 = n6.J.e();
            }
            if (i10 != null) {
                p.b(gVar, i10, -e10);
            }
        } else {
            r0.c cVar3 = constraintWidget.I;
            r0.c cVar4 = constraintWidget2.K;
            g i11 = p.i(cVar3, 1);
            int e11 = cVar3.e();
            ConstraintWidget m6 = m();
            if (m6 != null) {
                e11 = m6.I.e();
            }
            if (i11 != null) {
                p.b(gVar2, i11, e11);
            }
            g i12 = p.i(cVar4, 1);
            int e12 = cVar4.e();
            ConstraintWidget n10 = n();
            if (n10 != null) {
                e12 = n10.K.e();
            }
            if (i12 != null) {
                p.b(gVar, i12, -e12);
            }
        }
        gVar2.a = this;
        gVar.a = this;
    }

    @Override // s0.p
    public final void e() {
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.k;
            if (i5 >= arrayList.size()) {
                return;
            }
            ((p) arrayList.get(i5)).e();
            i5++;
        }
    }

    @Override // s0.p
    public final void f() {
        this.f17728c = null;
        Iterator it = this.k.iterator();
        while (it.hasNext()) {
            ((p) it.next()).f();
        }
    }

    @Override // s0.p
    public final long j() {
        ArrayList arrayList = this.k;
        int size = arrayList.size();
        long j = 0;
        for (int i5 = 0; i5 < size; i5++) {
            j = r5.f17734i.f17714f + ((p) arrayList.get(i5)).j() + j + r5.f17733h.f17714f;
        }
        return j;
    }

    @Override // s0.p
    public final boolean k() {
        ArrayList arrayList = this.k;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            if (!((p) arrayList.get(i5)).k()) {
                return false;
            }
        }
        return true;
    }

    public final ConstraintWidget m() {
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.k;
            if (i5 >= arrayList.size()) {
                return null;
            }
            ConstraintWidget constraintWidget = ((p) arrayList.get(i5)).f17727b;
            if (constraintWidget.f1230f0 != 8) {
                return constraintWidget;
            }
            i5++;
        }
    }

    public final ConstraintWidget n() {
        ArrayList arrayList = this.k;
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            ConstraintWidget constraintWidget = ((p) arrayList.get(size)).f17727b;
            if (constraintWidget.f1230f0 != 8) {
                return constraintWidget;
            }
        }
        return null;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("ChainRun ");
        sb2.append(this.f17731f == 0 ? "horizontal : " : "vertical : ");
        Iterator it = this.k.iterator();
        while (it.hasNext()) {
            p pVar = (p) it.next();
            sb2.append("<");
            sb2.append(pVar);
            sb2.append("> ");
        }
        return sb2.toString();
    }
}
