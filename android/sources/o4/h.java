package o4;

import android.graphics.Color;
import android.graphics.Matrix;

/* loaded from: classes.dex */
public final class h implements a {
    public final t4.b a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f15754b;

    /* renamed from: c, reason: collision with root package name */
    public final f f15755c;

    /* renamed from: d, reason: collision with root package name */
    public final i f15756d;

    /* renamed from: e, reason: collision with root package name */
    public final i f15757e;

    /* renamed from: f, reason: collision with root package name */
    public final i f15758f;

    /* renamed from: g, reason: collision with root package name */
    public final i f15759g;

    /* renamed from: h, reason: collision with root package name */
    public float f15760h = Float.NaN;

    /* renamed from: i, reason: collision with root package name */
    public float f15761i = Float.NaN;
    public float j = Float.NaN;
    public int k = 0;

    /* renamed from: l, reason: collision with root package name */
    public final float[] f15762l = new float[9];

    public h(a aVar, t4.b bVar, am.f fVar) {
        this.f15754b = aVar;
        this.a = bVar;
        e l02 = ((r4.a) fVar.f675d).l0();
        this.f15755c = (f) l02;
        l02.a(this);
        bVar.f(l02);
        i l03 = ((r4.b) fVar.f676e).l0();
        this.f15756d = l03;
        l03.a(this);
        bVar.f(l03);
        i l04 = ((r4.b) fVar.f677i).l0();
        this.f15757e = l04;
        l04.a(this);
        bVar.f(l04);
        i l05 = ((r4.b) fVar.f678v).l0();
        this.f15758f = l05;
        l05.a(this);
        bVar.f(l05);
        i l06 = ((r4.b) fVar.f679w).l0();
        this.f15759g = l06;
        l06.a(this);
        bVar.f(l06);
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, o4.a] */
    @Override // o4.a
    public final void a() {
        this.f15754b.a();
    }

    public final void b(m4.a aVar, Matrix matrix, int i5) {
        float k = this.f15757e.k() * 0.017453292f;
        float floatValue = ((Float) this.f15758f.e()).floatValue();
        double d6 = k;
        float sin = ((float) Math.sin(d6)) * floatValue;
        float cos = ((float) Math.cos(d6 + 3.141592653589793d)) * floatValue;
        Matrix e9 = this.a.f18190w.e();
        float[] fArr = this.f15762l;
        e9.getValues(fArr);
        float f2 = fArr[0];
        float f10 = fArr[4];
        matrix.getValues(fArr);
        float f11 = fArr[0] / f2;
        float f12 = sin * f11;
        float f13 = cos * (fArr[4] / f10);
        int intValue = ((Integer) this.f15755c.e()).intValue();
        int argb = Color.argb(Math.round((((Float) this.f15756d.e()).floatValue() * i5) / 255.0f), Color.red(intValue), Color.green(intValue), Color.blue(intValue));
        float max = Math.max(((Float) this.f15759g.e()).floatValue() * f11 * 0.33f, Float.MIN_VALUE);
        if (this.f15760h == max && this.f15761i == f12 && this.j == f13 && this.k == argb) {
            return;
        }
        this.f15760h = max;
        this.f15761i = f12;
        this.j = f13;
        this.k = argb;
        aVar.setShadowLayer(max, f12, f13, argb);
    }

    public final void c(e4.e eVar) {
        this.f15756d.j(new g(eVar));
    }
}
