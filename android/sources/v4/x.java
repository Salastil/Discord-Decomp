package v4;

import android.graphics.PointF;
import java.util.ArrayList;
import java.util.Collections;

/* loaded from: classes.dex */
public final class x implements d0 {

    /* renamed from: d, reason: collision with root package name */
    public static final x f19262d = new x();

    /* renamed from: e, reason: collision with root package name */
    public static final e4.e f19263e = e4.e.x("c", "v", "i", "o");

    @Override // v4.d0
    public final Object g(w4.a aVar, float f2) {
        if (aVar.A() == 1) {
            aVar.c();
        }
        aVar.f();
        ArrayList arrayList = null;
        ArrayList arrayList2 = null;
        ArrayList arrayList3 = null;
        boolean z5 = false;
        while (aVar.o()) {
            int P = aVar.P(f19263e);
            if (P == 0) {
                z5 = aVar.q();
            } else if (P == 1) {
                arrayList = n.c(aVar, f2);
            } else if (P == 2) {
                arrayList2 = n.c(aVar, f2);
            } else if (P != 3) {
                aVar.Q();
                aVar.R();
            } else {
                arrayList3 = n.c(aVar, f2);
            }
        }
        aVar.i();
        if (aVar.A() == 2) {
            aVar.g();
        }
        if (arrayList == null || arrayList2 == null || arrayList3 == null) {
            throw new IllegalArgumentException("Shape data was missing information.");
        }
        if (arrayList.isEmpty()) {
            return new s4.l(new PointF(), false, Collections.EMPTY_LIST);
        }
        int size = arrayList.size();
        PointF pointF = (PointF) arrayList.get(0);
        ArrayList arrayList4 = new ArrayList(size);
        for (int i5 = 1; i5 < size; i5++) {
            PointF pointF2 = (PointF) arrayList.get(i5);
            int i6 = i5 - 1;
            arrayList4.add(new q4.a(x4.g.a((PointF) arrayList.get(i6), (PointF) arrayList3.get(i6)), x4.g.a(pointF2, (PointF) arrayList2.get(i5)), pointF2));
        }
        if (z5) {
            PointF pointF3 = (PointF) arrayList.get(0);
            int i10 = size - 1;
            arrayList4.add(new q4.a(x4.g.a((PointF) arrayList.get(i10), (PointF) arrayList3.get(i10)), x4.g.a(pointF3, (PointF) arrayList2.get(0)), pointF3));
        }
        return new s4.l(pointF, z5, arrayList4);
    }
}
