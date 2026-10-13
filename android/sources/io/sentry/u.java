package io.sentry;

import java.util.Queue;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class u implements io.sentry.hints.d, io.sentry.hints.h, io.sentry.hints.k, io.sentry.hints.f {

    /* renamed from: d, reason: collision with root package name */
    public boolean f12021d = false;

    /* renamed from: e, reason: collision with root package name */
    public boolean f12022e = false;

    /* renamed from: i, reason: collision with root package name */
    public final CountDownLatch f12023i = new CountDownLatch(1);

    /* renamed from: v, reason: collision with root package name */
    public final long f12024v;

    /* renamed from: w, reason: collision with root package name */
    public final ILogger f12025w;

    /* renamed from: x, reason: collision with root package name */
    public final String f12026x;

    /* renamed from: y, reason: collision with root package name */
    public final Queue f12027y;

    public u(long j, ILogger iLogger, String str, m6 m6Var) {
        this.f12024v = j;
        this.f12026x = str;
        this.f12027y = m6Var;
        this.f12025w = iLogger;
    }

    @Override // io.sentry.hints.h
    public final boolean a() {
        return this.f12021d;
    }

    @Override // io.sentry.hints.k
    public final void b(boolean z5) {
        this.f12022e = z5;
        this.f12023i.countDown();
    }

    @Override // io.sentry.hints.h
    public final void c(boolean z5) {
        this.f12021d = z5;
    }

    @Override // io.sentry.hints.f
    public final boolean d() {
        try {
            return this.f12023i.await(this.f12024v, TimeUnit.MILLISECONDS);
        } catch (InterruptedException e9) {
            Thread.currentThread().interrupt();
            this.f12025w.k(SentryLevel.ERROR, "Exception while awaiting on lock.", e9);
            return false;
        }
    }

    @Override // io.sentry.hints.k
    public final boolean e() {
        return this.f12022e;
    }
}
