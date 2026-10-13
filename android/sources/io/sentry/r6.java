package io.sentry;

import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes3.dex */
public final class r6 extends io.sentry.hints.c implements io.sentry.hints.i, io.sentry.hints.l {

    /* renamed from: v, reason: collision with root package name */
    public final AtomicReference f11931v;

    public r6(long j, ILogger iLogger) {
        super(j, iLogger);
        this.f11931v = new AtomicReference();
    }

    @Override // io.sentry.hints.c
    public final boolean e(io.sentry.protocol.v vVar) {
        io.sentry.protocol.v vVar2 = (io.sentry.protocol.v) this.f11931v.get();
        return vVar2 != null && vVar2.equals(vVar);
    }

    @Override // io.sentry.hints.c
    public final void f(io.sentry.protocol.v vVar) {
        this.f11931v.set(vVar);
    }
}
