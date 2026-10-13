package zn;

import java.lang.ref.WeakReference;

/* loaded from: classes3.dex */
public final class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final WeakReference f21309d;

    /* renamed from: v, reason: collision with root package name */
    public final float f21312v;

    /* renamed from: w, reason: collision with root package name */
    public final float f21313w;

    /* renamed from: x, reason: collision with root package name */
    public final float f21314x;

    /* renamed from: y, reason: collision with root package name */
    public final float f21315y;

    /* renamed from: i, reason: collision with root package name */
    public final long f21311i = System.currentTimeMillis();

    /* renamed from: e, reason: collision with root package name */
    public final long f21310e = 200;

    public b(c cVar, float f2, float f10, float f11, float f12) {
        this.f21309d = new WeakReference(cVar);
        this.f21312v = f2;
        this.f21313w = f10;
        this.f21314x = f11;
        this.f21315y = f12;
    }

    @Override // java.lang.Runnable
    public final void run() {
        c cVar = (c) this.f21309d.get();
        if (cVar == null) {
            return;
        }
        long currentTimeMillis = System.currentTimeMillis() - this.f21311i;
        long j = this.f21310e;
        float min = Math.min(j, currentTimeMillis);
        float f2 = j;
        float h6 = jb.a.h(min, this.f21313w, f2);
        if (min >= f2) {
            cVar.setImageToWrapCropBounds(true);
        } else {
            cVar.i(this.f21312v + h6, this.f21314x, this.f21315y);
            cVar.post(this);
        }
    }
}
