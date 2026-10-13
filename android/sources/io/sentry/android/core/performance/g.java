package io.sentry.android.core.performance;

import android.os.SystemClock;
import io.sentry.a5;

/* loaded from: classes3.dex */
public final class g implements Comparable {

    /* renamed from: d, reason: collision with root package name */
    public String f11296d;

    /* renamed from: e, reason: collision with root package name */
    public long f11297e;

    /* renamed from: i, reason: collision with root package name */
    public long f11298i;

    /* renamed from: v, reason: collision with root package name */
    public long f11299v;

    public final long a() {
        long j = this.f11299v;
        if (j != 0) {
            return j - this.f11298i;
        }
        return 0L;
    }

    public final a5 b() {
        if (c()) {
            return new a5(this.f11297e * 1000000);
        }
        return null;
    }

    public final boolean c() {
        return this.f11298i != 0;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return Long.compare(this.f11297e, ((g) obj).f11297e);
    }

    public final void d(long j) {
        this.f11298i = j;
        this.f11297e = System.currentTimeMillis() - (SystemClock.uptimeMillis() - this.f11298i);
    }
}
