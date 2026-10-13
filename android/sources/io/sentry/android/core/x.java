package io.sentry.android.core;

/* loaded from: classes3.dex */
public final class x implements io.sentry.hints.a, io.sentry.hints.l {

    /* renamed from: d, reason: collision with root package name */
    public final boolean f11354d;

    public x(boolean z5) {
        this.f11354d = z5;
    }

    @Override // io.sentry.hints.a
    public final Long a() {
        return null;
    }

    @Override // io.sentry.hints.a
    public final boolean b() {
        return true;
    }

    @Override // io.sentry.hints.a
    public final String c() {
        return this.f11354d ? "anr_background" : "anr_foreground";
    }
}
