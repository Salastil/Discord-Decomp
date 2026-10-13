package v4;

import android.graphics.PointF;

/* loaded from: classes.dex */
public final class h implements d0 {

    /* renamed from: d, reason: collision with root package name */
    public static final h f19243d = new h();

    /* renamed from: e, reason: collision with root package name */
    public static final e4.e f19244e = e4.e.x("t", "f", "s", "j", "tr", "lh", "ls", "fc", "sc", "sw", "of", "ps", "sz");

    @Override // v4.d0
    public final Object g(w4.a aVar, float f2) {
        PointF pointF;
        PointF pointF2;
        aVar.f();
        String str = null;
        float f10 = 0.0f;
        float f11 = 0.0f;
        float f12 = 0.0f;
        float f13 = 0.0f;
        int i5 = 0;
        int i6 = 0;
        int i10 = 0;
        boolean z5 = true;
        int i11 = 3;
        String str2 = null;
        PointF pointF3 = null;
        PointF pointF4 = null;
        while (aVar.o()) {
            switch (aVar.P(f19244e)) {
                case 0:
                    str = aVar.x();
                    break;
                case 1:
                    str2 = aVar.x();
                    break;
                case 2:
                    pointF = pointF3;
                    f10 = (float) aVar.r();
                    pointF3 = pointF;
                    break;
                case 3:
                    PointF pointF5 = pointF3;
                    pointF2 = pointF4;
                    int t5 = aVar.t();
                    i11 = (t5 > 2 || t5 < 0) ? 3 : f0.e.c(3)[t5];
                    pointF3 = pointF5;
                    pointF4 = pointF2;
                    break;
                case 4:
                    i5 = aVar.t();
                    break;
                case 5:
                    pointF = pointF3;
                    f11 = (float) aVar.r();
                    pointF3 = pointF;
                    break;
                case 6:
                    pointF = pointF3;
                    f12 = (float) aVar.r();
                    pointF3 = pointF;
                    break;
                case 7:
                    i6 = n.a(aVar);
                    break;
                case 8:
                    i10 = n.a(aVar);
                    break;
                case 9:
                    pointF = pointF3;
                    f13 = (float) aVar.r();
                    pointF3 = pointF;
                    break;
                case 10:
                    z5 = aVar.q();
                    break;
                case 11:
                    aVar.c();
                    pointF2 = pointF4;
                    PointF pointF6 = new PointF(((float) aVar.r()) * f2, ((float) aVar.r()) * f2);
                    aVar.g();
                    pointF3 = pointF6;
                    pointF4 = pointF2;
                    break;
                case 12:
                    aVar.c();
                    pointF = pointF3;
                    pointF4 = new PointF(((float) aVar.r()) * f2, ((float) aVar.r()) * f2);
                    aVar.g();
                    pointF3 = pointF;
                    break;
                default:
                    aVar.Q();
                    aVar.R();
                    break;
            }
        }
        aVar.i();
        q4.b bVar = new q4.b();
        bVar.a = str;
        bVar.f16663b = str2;
        bVar.f16664c = f10;
        bVar.f16665d = i11;
        bVar.f16666e = i5;
        bVar.f16667f = f11;
        bVar.f16668g = f12;
        bVar.f16669h = i6;
        bVar.f16670i = i10;
        bVar.j = f13;
        bVar.k = z5;
        bVar.f16671l = pointF3;
        bVar.f16672m = pointF4;
        return bVar;
    }
}
