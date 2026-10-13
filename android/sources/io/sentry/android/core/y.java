package io.sentry.android.core;

import io.sentry.ILogger;

/* loaded from: classes3.dex */
public final class y extends io.sentry.hints.c implements io.sentry.hints.b, io.sentry.hints.a {

    /* renamed from: v, reason: collision with root package name */
    public final long f11355v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f11356w;

    /* renamed from: x, reason: collision with root package name */
    public final boolean f11357x;

    public y(long j, ILogger iLogger, long j5, boolean z5, boolean z6) {
        super(j, iLogger);
        this.f11355v = j5;
        this.f11356w = z5;
        this.f11357x = z6;
    }

    @Override // io.sentry.hints.a
    public final Long a() {
        return Long.valueOf(this.f11355v);
    }

    @Override // io.sentry.hints.a
    public final boolean b() {
        return false;
    }

    @Override // io.sentry.hints.a
    public final String c() {
        return this.f11357x ? "anr_background" : "anr_foreground";
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
        return this.f11356w;
    }
}
