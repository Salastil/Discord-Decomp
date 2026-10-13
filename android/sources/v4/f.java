package v4;

import android.graphics.Color;
import android.graphics.PointF;

/* loaded from: classes.dex */
public final class f implements d0 {

    /* renamed from: e, reason: collision with root package name */
    public static final f f19236e = new f(0);

    /* renamed from: i, reason: collision with root package name */
    public static final f f19237i = new f(1);

    /* renamed from: v, reason: collision with root package name */
    public static final f f19238v = new f(2);

    /* renamed from: w, reason: collision with root package name */
    public static final f f19239w = new f(3);

    /* renamed from: x, reason: collision with root package name */
    public static final f f19240x = new f(4);

    /* renamed from: y, reason: collision with root package name */
    public static final f f19241y = new f(5);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19242d;

    public /* synthetic */ f(int i5) {
        this.f19242d = i5;
    }

    @Override // v4.d0
    public final Object g(w4.a aVar, float f2) {
        switch (this.f19242d) {
            case 0:
                boolean z5 = aVar.A() == 1;
                if (z5) {
                    aVar.c();
                }
                double r5 = aVar.r();
                double r7 = aVar.r();
                double r10 = aVar.r();
                double r11 = aVar.A() == 7 ? aVar.r() : 1.0d;
                if (z5) {
                    aVar.g();
                }
                if (r5 <= 1.0d && r7 <= 1.0d && r10 <= 1.0d) {
                    r5 *= 255.0d;
                    r7 *= 255.0d;
                    r10 *= 255.0d;
                    if (r11 <= 1.0d) {
                        r11 *= 255.0d;
                    }
                }
                return Integer.valueOf(Color.argb((int) r11, (int) r5, (int) r7, (int) r10));
            case 1:
                return Float.valueOf(n.d(aVar) * f2);
            case 2:
                return Integer.valueOf(Math.round(n.d(aVar) * f2));
            case 3:
                return n.b(aVar, f2);
            case 4:
                int A = aVar.A();
                if (A == 1) {
                    return n.b(aVar, f2);
                }
                if (A == 3) {
                    return n.b(aVar, f2);
                }
                if (A != 7) {
                    throw new IllegalArgumentException("Cannot convert json to point. Next token is ".concat(s4.h.n(A)));
                }
                PointF pointF = new PointF(((float) aVar.r()) * f2, ((float) aVar.r()) * f2);
                while (aVar.o()) {
                    aVar.R();
                }
                return pointF;
            default:
                boolean z6 = aVar.A() == 1;
                if (z6) {
                    aVar.c();
                }
                float r12 = (float) aVar.r();
                float r13 = (float) aVar.r();
                while (aVar.o()) {
                    aVar.R();
                }
                if (z6) {
                    aVar.g();
                }
                return new y4.b((r12 / 100.0f) * f2, (r13 / 100.0f) * f2);
        }
    }
}
