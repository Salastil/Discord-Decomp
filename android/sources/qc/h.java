package qc;

import ad.a0;
import fi.c0;
import fi.e0;
import fi.r0;
import java.util.ArrayList;
import java.util.Collections;
import ke.b0;

/* loaded from: classes3.dex */
public final class h {

    /* renamed from: b, reason: collision with root package name */
    public static final int[] f16777b = {5, 4, 12, 8, 3, 10, 9, 11, 6, 2, 0, 1, 7, 16, 15, 14};

    /* renamed from: c, reason: collision with root package name */
    public static final e4.e f16778c = new e4.e(new n1.k(23));

    /* renamed from: d, reason: collision with root package name */
    public static final e4.e f16779d = new e4.e(new n1.k(24));
    public r0 a;

    public final void a(int i5, ArrayList arrayList) {
        switch (i5) {
            case 0:
                arrayList.add(new ad.a());
                break;
            case 1:
                arrayList.add(new ad.c());
                break;
            case 2:
                arrayList.add(new ad.d(0));
                break;
            case 3:
                arrayList.add(new rc.a());
                break;
            case 4:
                j o6 = f16778c.o(0);
                if (o6 == null) {
                    arrayList.add(new tc.b());
                    break;
                } else {
                    arrayList.add(o6);
                    break;
                }
            case 5:
                arrayList.add(new uc.b());
                break;
            case 6:
                arrayList.add(new wc.d(0));
                break;
            case 7:
                arrayList.add(new xc.d(0));
                break;
            case 8:
                arrayList.add(new yc.i(0, null, null, Collections.EMPTY_LIST, null));
                arrayList.add(new yc.l(0));
                break;
            case 9:
                arrayList.add(new zc.d());
                break;
            case 10:
                arrayList.add(new a0());
                break;
            case 11:
                if (this.a == null) {
                    c0 c0Var = e0.f8656e;
                    this.a = r0.f8704w;
                }
                arrayList.add(new ad.e0(1, new b0(0L), new ad.f(0, this.a)));
                break;
            case 12:
                bd.d dVar = new bd.d();
                dVar.f2796c = 0;
                dVar.f2797d = -1L;
                dVar.f2799f = -1;
                dVar.f2800g = -1L;
                arrayList.add(dVar);
                break;
            case 14:
                arrayList.add(new vc.a());
                break;
            case 15:
                j o7 = f16779d.o(new Object[0]);
                if (o7 != null) {
                    arrayList.add(o7);
                    break;
                }
                break;
            case 16:
                arrayList.add(new sc.b());
                break;
        }
    }
}
