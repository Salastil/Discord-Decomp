package io.sentry.android.core;

import io.sentry.ILogger;

/* loaded from: classes3.dex */
public final class k1 extends io.sentry.hints.c implements io.sentry.hints.b, io.sentry.hints.g {

    /* renamed from: v, reason: collision with root package name */
    public final long f11263v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f11264w;

    public k1(long j, ILogger iLogger, long j5, boolean z5) {
        super(j, iLogger);
        this.f11263v = j5;
        this.f11264w = z5;
    }

    @Override // io.sentry.hints.c
    public final boolean e(io.sentry.protocol.v vVar) {
        return true;
    }

    @Override // io.sentry.hints.c
    public final void f(io.sentry.protocol.v vVar) {
    }

    @Override // io.sentry.hints.b
    public final boolean shouldEnrich() {
        return this.f11264w;
    }
}
