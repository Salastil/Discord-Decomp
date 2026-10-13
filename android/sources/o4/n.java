package o4;

import android.graphics.Path;
import android.graphics.PointF;
import java.util.ArrayList;
import java.util.List;

/* loaded from: classes.dex */
public final class n extends e {

    /* renamed from: i, reason: collision with root package name */
    public final s4.l f15769i;
    public final Path j;
    public Path k;

    /* renamed from: l, reason: collision with root package name */
    public Path f15770l;

    /* renamed from: m, reason: collision with root package name */
    public ArrayList f15771m;

    public n(List list) {
        super(list);
        this.f15769i = new s4.l();
        this.j = new Path();
    }

    @Override // o4.e
    public final Object f(y4.a aVar, float f2) {
        s4.l lVar;
        s4.l lVar2;
        int i5;
        int i6;
        ArrayList arrayList;
        PointF pointF;
        s4.l lVar3;
        s4.l lVar4;
        s4.l lVar5;
        s4.l lVar6;
        s4.l lVar7 = (s4.l) aVar.f20651b;
        s4.l lVar8 = (s4.l) aVar.f20652c;
        s4.l lVar9 = lVar8 == null ? lVar7 : lVar8;
        s4.l lVar10 = this.f15769i;
        ArrayList arrayList2 = lVar10.a;
        if (lVar10.f17788b == null) {
            lVar10.f17788b = new PointF();
        }
        boolean z5 = lVar7.f17789c;
        ArrayList arrayList3 = lVar7.a;
        boolean z6 = true;
        lVar10.f17789c = z5 || lVar9.f17789c;
        int size = arrayList3.size();
        ArrayList arrayList4 = lVar9.a;
        if (size != arrayList4.size()) {
            x4.c.b("Curves must have the same number of control points. Shape 1: " + arrayList3.size() + "\tShape 2: " + arrayList4.size());
        }
        int min = Math.min(arrayList3.size(), arrayList4.size());
        if (arrayList2.size() < min) {
            for (int size2 = arrayList2.size(); size2 < min; size2++) {
                arrayList2.add(new q4.a());
            }
        } else if (arrayList2.size() > min) {
            for (int size3 = arrayList2.size() - 1; size3 >= min; size3--) {
                arrayList2.remove(arrayList2.size() - 1);
            }
        }
        PointF pointF2 = lVar7.f17788b;
        PointF pointF3 = lVar9.f17788b;
        lVar10.a(x4.g.e(pointF2.x, pointF3.x, f2), x4.g.e(pointF2.y, pointF3.y, f2));
        int size4 = arrayList2.size() - 1;
        while (size4 >= 0) {
            q4.a aVar2 = (q4.a) arrayList3.get(size4);
            q4.a aVar3 = (q4.a) arrayList4.get(size4);
            PointF pointF4 = aVar2.a;
            PointF pointF5 = aVar2.f16661b;
            PointF pointF6 = aVar2.f16662c;
            boolean z7 = z6;
            PointF pointF7 = aVar3.a;
            PointF pointF8 = aVar3.f16661b;
            PointF pointF9 = aVar3.f16662c;
            ((q4.a) arrayList2.get(size4)).a.set(x4.g.e(pointF4.x, pointF7.x, f2), x4.g.e(pointF4.y, pointF7.y, f2));
            ((q4.a) arrayList2.get(size4)).f16661b.set(x4.g.e(pointF5.x, pointF8.x, f2), x4.g.e(pointF5.y, pointF8.y, f2));
            ((q4.a) arrayList2.get(size4)).f16662c.set(x4.g.e(pointF6.x, pointF9.x, f2), x4.g.e(pointF6.y, pointF9.y, f2));
            size4--;
            z6 = z7;
            arrayList3 = arrayList3;
            lVar10 = lVar10;
            arrayList4 = arrayList4;
        }
        s4.l lVar11 = lVar10;
        boolean z8 = z6;
        ArrayList arrayList5 = this.f15771m;
        if (arrayList5 != null) {
            int size5 = arrayList5.size() - 1;
            lVar = lVar11;
            while (true) {
                ArrayList arrayList6 = lVar.a;
                if (size5 < 0) {
                    break;
                }
                n4.q qVar = (n4.q) this.f15771m.get(size5);
                qVar.getClass();
                if (arrayList6.size() > 2) {
                    float floatValue = ((Float) qVar.f14940b.e()).floatValue();
                    if (floatValue != 0.0f) {
                        boolean z10 = lVar.f17789c;
                        int size6 = arrayList6.size() - 1;
                        int i10 = 0;
                        while (size6 >= 0) {
                            q4.a aVar4 = (q4.a) arrayList6.get(size6);
                            q4.a aVar5 = (q4.a) arrayList6.get(n4.q.c(size6 - 1, arrayList6.size()));
                            PointF pointF10 = (size6 != 0 || z10) ? aVar5.f16662c : lVar.f17788b;
                            int i11 = size5;
                            i10 = (((size6 != 0 || z10) ? aVar5.f16661b : pointF10).equals(pointF10) && aVar4.a.equals(pointF10) && !((lVar.f17789c || (size6 != 0 && size6 != arrayList6.size() + (-1))) ? false : z8)) ? i10 + 2 : i10 + 1;
                            size6--;
                            size5 = i11;
                        }
                        i5 = size5;
                        s4.l lVar12 = qVar.f14941c;
                        if (lVar12 == null || lVar12.a.size() != i10) {
                            ArrayList arrayList7 = new ArrayList(i10);
                            for (int i12 = 0; i12 < i10; i12++) {
                                arrayList7.add(new q4.a());
                            }
                            i6 = 0;
                            qVar.f14941c = new s4.l(new PointF(0.0f, 0.0f), false, arrayList7);
                        } else {
                            i6 = 0;
                        }
                        s4.l lVar13 = qVar.f14941c;
                        lVar13.f17789c = z10;
                        PointF pointF11 = lVar.f17788b;
                        lVar13.a(pointF11.x, pointF11.y);
                        ArrayList arrayList8 = lVar13.a;
                        boolean z11 = lVar.f17789c;
                        int i13 = i6;
                        int i14 = i13;
                        while (i13 < arrayList6.size()) {
                            q4.a aVar6 = (q4.a) arrayList6.get(i13);
                            q4.a aVar7 = (q4.a) arrayList6.get(n4.q.c(i13 - 1, arrayList6.size()));
                            q4.a aVar8 = (q4.a) arrayList6.get(n4.q.c(i13 - 2, arrayList6.size()));
                            PointF pointF12 = (i13 != 0 || z11) ? aVar7.f16662c : lVar.f17788b;
                            if (i13 != 0 || z11) {
                                arrayList = arrayList6;
                                pointF = aVar7.f16661b;
                            } else {
                                arrayList = arrayList6;
                                pointF = pointF12;
                            }
                            float f10 = floatValue;
                            PointF pointF13 = aVar6.a;
                            PointF pointF14 = aVar8.f16662c;
                            boolean z12 = z11;
                            PointF pointF15 = aVar6.f16662c;
                            boolean z13 = (lVar.f17789c || !(i13 == 0 || i13 == arrayList.size() + (-1))) ? false : z8;
                            if (pointF.equals(pointF12) && pointF13.equals(pointF12) && !z13) {
                                float f11 = pointF12.x;
                                float f12 = f11 - pointF14.x;
                                float f13 = pointF12.y;
                                float f14 = f13 - pointF14.y;
                                float f15 = pointF15.x - f11;
                                float f16 = pointF15.y - f13;
                                lVar3 = lVar7;
                                lVar4 = lVar8;
                                double d6 = f12;
                                s4.l lVar14 = lVar13;
                                s4.l lVar15 = lVar;
                                float hypot = (float) Math.hypot(d6, f14);
                                float hypot2 = (float) Math.hypot(f15, f16);
                                float min2 = Math.min(f10 / hypot, 0.5f);
                                float min3 = Math.min(f10 / hypot2, 0.5f);
                                float f17 = pointF12.x;
                                float c6 = k0.d.c(pointF14.x, f17, min2, f17);
                                float f18 = pointF12.y;
                                float c8 = k0.d.c(pointF14.y, f18, min2, f18);
                                float c10 = k0.d.c(pointF15.x, f17, min3, f17);
                                float c11 = k0.d.c(pointF15.y, f18, min3, f18);
                                float f19 = c6 - ((c6 - f17) * 0.5519f);
                                float f20 = c8 - ((c8 - f18) * 0.5519f);
                                float f21 = c10 - ((c10 - f17) * 0.5519f);
                                float f22 = c11 - ((c11 - f18) * 0.5519f);
                                q4.a aVar9 = (q4.a) arrayList8.get(n4.q.c(i14 - 1, arrayList8.size()));
                                q4.a aVar10 = (q4.a) arrayList8.get(i14);
                                lVar6 = lVar15;
                                aVar9.f16661b.set(c6, c8);
                                aVar9.f16662c.set(c6, c8);
                                lVar5 = lVar14;
                                if (i13 == 0) {
                                    lVar5.a(c6, c8);
                                }
                                aVar10.a.set(f19, f20);
                                q4.a aVar11 = (q4.a) arrayList8.get(i14 + 1);
                                aVar10.f16661b.set(f21, f22);
                                aVar10.f16662c.set(c10, c11);
                                aVar11.a.set(c10, c11);
                                i14 += 2;
                            } else {
                                lVar3 = lVar7;
                                lVar4 = lVar8;
                                lVar5 = lVar13;
                                lVar6 = lVar;
                                q4.a aVar12 = (q4.a) arrayList8.get(n4.q.c(i14 - 1, arrayList8.size()));
                                q4.a aVar13 = (q4.a) arrayList8.get(i14);
                                PointF pointF16 = aVar7.f16661b;
                                aVar12.f16661b.set(pointF16.x, pointF16.y);
                                PointF pointF17 = aVar7.f16662c;
                                aVar12.f16662c.set(pointF17.x, pointF17.y);
                                PointF pointF18 = aVar6.a;
                                aVar13.a.set(pointF18.x, pointF18.y);
                                i14++;
                            }
                            i13++;
                            lVar13 = lVar5;
                            lVar7 = lVar3;
                            arrayList6 = arrayList;
                            floatValue = f10;
                            z11 = z12;
                            lVar8 = lVar4;
                            lVar = lVar6;
                        }
                        lVar = lVar13;
                        size5 = i5 - 1;
                        lVar7 = lVar7;
                        lVar8 = lVar8;
                    }
                }
                i5 = size5;
                size5 = i5 - 1;
                lVar7 = lVar7;
                lVar8 = lVar8;
            }
        } else {
            lVar = lVar11;
        }
        s4.l lVar16 = lVar7;
        s4.l lVar17 = lVar8;
        Path path = this.j;
        x4.g.d(lVar, path);
        if (this.f15748e == null) {
            return path;
        }
        if (this.k == null) {
            this.k = new Path();
            this.f15770l = new Path();
        }
        x4.g.d(lVar16, this.k);
        if (lVar17 != null) {
            lVar2 = lVar17;
            x4.g.d(lVar2, this.f15770l);
        } else {
            lVar2 = lVar17;
        }
        e4.e eVar = this.f15748e;
        float f23 = aVar.f20656g;
        float floatValue2 = aVar.f20657h.floatValue();
        s4.l lVar18 = lVar2;
        Path path2 = this.k;
        return (Path) eVar.t(f23, floatValue2, path2, lVar18 == null ? path2 : this.f15770l, f2, d(), this.f15747d);
    }
}
