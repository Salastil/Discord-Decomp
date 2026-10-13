package io.sentry.cache.tape;

/* loaded from: classes3.dex */
public final class g {

    /* renamed from: c, reason: collision with root package name */
    public static final g f11449c = new g(0, 0);
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final int f11450b;

    public g(long j, int i5) {
        this.a = j;
        this.f11450b = i5;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(g.class.getSimpleName());
        sb2.append("[position=");
        sb2.append(this.a);
        sb2.append(", length=");
        return k0.d.m(sb2, this.f11450b, "]");
    }
}
