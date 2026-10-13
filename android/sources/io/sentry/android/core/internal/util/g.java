package io.sentry.android.core.internal.util;

import android.os.SystemClock;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicLong;

/* loaded from: classes3.dex */
public final class g {
    public final long a;

    /* renamed from: d, reason: collision with root package name */
    public final int f11227d;

    /* renamed from: c, reason: collision with root package name */
    public final AtomicInteger f11226c = new AtomicInteger(0);

    /* renamed from: e, reason: collision with root package name */
    public final AtomicLong f11228e = new AtomicLong(0);

    /* renamed from: b, reason: collision with root package name */
    public final d f11225b = d.f11221d;

    public g(long j, int i5) {
        this.a = j;
        this.f11227d = i5 <= 0 ? 1 : i5;
    }

    public final boolean a() {
        this.f11225b.getClass();
        long uptimeMillis = SystemClock.uptimeMillis();
        AtomicLong atomicLong = this.f11228e;
        long j = atomicLong.get();
        AtomicInteger atomicInteger = this.f11226c;
        if (j == 0 || atomicLong.get() + this.a <= uptimeMillis) {
            atomicInteger.set(0);
            atomicLong.set(uptimeMillis);
            return false;
        }
        if (atomicInteger.incrementAndGet() < this.f11227d) {
            return false;
        }
        atomicInteger.set(0);
        return true;
    }
}
