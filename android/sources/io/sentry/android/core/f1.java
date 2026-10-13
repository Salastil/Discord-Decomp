package io.sentry.android.core;

/* loaded from: classes3.dex */
public final class f1 implements Comparable {

    /* renamed from: d, reason: collision with root package name */
    public final long f11124d;

    /* renamed from: e, reason: collision with root package name */
    public final long f11125e;

    /* renamed from: i, reason: collision with root package name */
    public final long f11126i;

    /* renamed from: v, reason: collision with root package name */
    public final long f11127v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f11128w;

    /* renamed from: x, reason: collision with root package name */
    public final boolean f11129x;

    /* renamed from: y, reason: collision with root package name */
    public final long f11130y;

    public f1(long j) {
        this(j, j, 0L, 0L, false, false, 0L);
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return Long.compare(this.f11125e, ((f1) obj).f11125e);
    }

    public f1(long j, long j5, long j7, long j10, boolean z5, boolean z6, long j11) {
        this.f11124d = j;
        this.f11125e = j5;
        this.f11126i = j7;
        this.f11127v = j10;
        this.f11128w = z5;
        this.f11129x = z6;
        this.f11130y = j11;
    }
}
