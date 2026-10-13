package io.sentry.hints;

import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.protocol.v;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public abstract class c implements f {

    /* renamed from: d, reason: collision with root package name */
    public final CountDownLatch f11597d = new CountDownLatch(1);

    /* renamed from: e, reason: collision with root package name */
    public final long f11598e;

    /* renamed from: i, reason: collision with root package name */
    public final ILogger f11599i;

    public c(long j, ILogger iLogger) {
        this.f11598e = j;
        this.f11599i = iLogger;
    }

    @Override // io.sentry.hints.f
    public final boolean d() {
        try {
            return this.f11597d.await(this.f11598e, TimeUnit.MILLISECONDS);
        } catch (InterruptedException e9) {
            Thread.currentThread().interrupt();
            this.f11599i.k(SentryLevel.ERROR, "Exception while awaiting for flush in BlockingFlushHint", e9);
            return false;
        }
    }

    public abstract boolean e(v vVar);

    public abstract void f(v vVar);
}
