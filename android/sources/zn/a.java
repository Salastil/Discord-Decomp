package zn;

import android.graphics.RectF;
import java.lang.ref.WeakReference;

/* loaded from: classes3.dex */
public final class a implements Runnable {
    public final float E;
    public final float F;
    public final boolean G;

    /* renamed from: d, reason: collision with root package name */
    public final WeakReference f21302d;

    /* renamed from: e, reason: collision with root package name */
    public final long f21303e;

    /* renamed from: i, reason: collision with root package name */
    public final long f21304i = System.currentTimeMillis();

    /* renamed from: v, reason: collision with root package name */
    public final float f21305v;

    /* renamed from: w, reason: collision with root package name */
    public final float f21306w;

    /* renamed from: x, reason: collision with root package name */
    public final float f21307x;

    /* renamed from: y, reason: collision with root package name */
    public final float f21308y;

    public a(c cVar, long j, float f2, float f10, float f11, float f12, float f13, float f14, boolean z5) {
        this.f21302d = new WeakReference(cVar);
        this.f21303e = j;
        this.f21305v = f2;
        this.f21306w = f10;
        this.f21307x = f11;
        this.f21308y = f12;
        this.E = f13;
        this.F = f14;
        this.G = z5;
    }

    @Override // java.lang.Runnable
    public final void run() {
        c cVar = (c) this.f21302d.get();
        if (cVar == null) {
            return;
        }
        RectF rectF = cVar.M;
        long currentTimeMillis = System.currentTimeMillis() - this.f21304i;
        long j = this.f21303e;
        float min = Math.min(j, currentTimeMillis);
        float f2 = j;
        float f10 = (min / f2) - 1.0f;
        float f11 = (f10 * f10 * f10) + 1.0f;
        float f12 = (this.f21307x * f11) + 0.0f;
        float f13 = (f11 * this.f21308y) + 0.0f;
        float h6 = jb.a.h(min, this.F, f2);
        if (min < f2) {
            float[] fArr = cVar.f21317e;
            cVar.d(f12 - (fArr[0] - this.f21305v), f13 - (fArr[1] - this.f21306w));
            if (!this.G) {
                cVar.i(this.E + h6, rectF.centerX(), rectF.centerY());
            }
            if (cVar.g(cVar.f21316d)) {
                return;
            }
            cVar.post(this);
        }
    }
}
