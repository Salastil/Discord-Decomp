package io.sentry;

import j$.time.Instant;

/* loaded from: classes3.dex */
public final class s4 extends i4 {

    /* renamed from: d, reason: collision with root package name */
    public final Instant f11975d = Instant.now();

    @Override // io.sentry.i4
    public final long d() {
        return (this.f11975d.getEpochSecond() * 1000000000) + r0.getNano();
    }
}
