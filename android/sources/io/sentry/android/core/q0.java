package io.sentry.android.core;

import io.sentry.ILogger;
import io.sentry.SentryLevel;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class q0 implements io.sentry.hints.d, io.sentry.hints.h, io.sentry.hints.k, io.sentry.hints.f {

    /* renamed from: v, reason: collision with root package name */
    public final long f11309v;

    /* renamed from: w, reason: collision with root package name */
    public final ILogger f11310w;

    /* renamed from: i, reason: collision with root package name */
    public CountDownLatch f11308i = new CountDownLatch(1);

    /* renamed from: d, reason: collision with root package name */
    public boolean f11306d = false;

    /* renamed from: e, reason: collision with root package name */
    public boolean f11307e = false;

    public q0(long j, ILogger iLogger) {
        this.f11309v = j;
        d9.a.L(iLogger, "ILogger is required.");
        this.f11310w = iLogger;
    }

    @Override // io.sentry.hints.h
    public final boolean a() {
        return this.f11306d;
    }

    @Override // io.sentry.hints.k
    public final void b(boolean z5) {
        this.f11307e = z5;
        this.f11308i.countDown();
    }

    @Override // io.sentry.hints.h
    public final void c(boolean z5) {
        this.f11306d = z5;
    }

    @Override // io.sentry.hints.f
    public final boolean d() {
        try {
            return this.f11308i.await(this.f11309v, TimeUnit.MILLISECONDS);
        } catch (InterruptedException e9) {
            Thread.currentThread().interrupt();
            this.f11310w.k(SentryLevel.ERROR, "Exception while awaiting on lock.", e9);
            return false;
        }
    }

    @Override // io.sentry.hints.k
    public final boolean e() {
        return this.f11307e;
    }
}
