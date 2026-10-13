package io.sentry.exception;

import io.sentry.protocol.m;

/* loaded from: classes3.dex */
public final class a extends RuntimeException {

    /* renamed from: d, reason: collision with root package name */
    public final m f11532d;

    /* renamed from: e, reason: collision with root package name */
    public final Throwable f11533e;

    /* renamed from: i, reason: collision with root package name */
    public final Thread f11534i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f11535v;

    public a(m mVar, Throwable th2, Thread thread, boolean z5) {
        this.f11532d = mVar;
        d9.a.L(th2, "Throwable is required.");
        this.f11533e = th2;
        d9.a.L(thread, "Thread is required.");
        this.f11534i = thread;
        this.f11535v = z5;
    }
}
