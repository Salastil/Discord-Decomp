package androidx.core.view;

import android.view.animation.Interpolator;

/* loaded from: classes.dex */
public abstract class l1 {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public float f1611b;

    /* renamed from: c, reason: collision with root package name */
    public final Interpolator f1612c;

    /* renamed from: d, reason: collision with root package name */
    public final long f1613d;

    public l1(int i5, Interpolator interpolator, long j) {
        this.a = i5;
        this.f1612c = interpolator;
        this.f1613d = j;
    }

    public long a() {
        return this.f1613d;
    }

    public float b() {
        Interpolator interpolator = this.f1612c;
        return interpolator != null ? interpolator.getInterpolation(this.f1611b) : this.f1611b;
    }

    public int c() {
        return this.a;
    }

    public void d(float f2) {
        this.f1611b = f2;
    }
}
