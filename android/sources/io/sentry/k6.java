package io.sentry;

import java.util.Objects;

/* loaded from: classes3.dex */
public final class k6 implements y1 {

    /* renamed from: e, reason: collision with root package name */
    public static final k6 f11645e = new k6("00000000-0000-0000-0000-000000000000".replace("-", "").substring(0, 16));

    /* renamed from: d, reason: collision with root package name */
    public final io.sentry.util.e f11646d;

    public k6(String str) {
        Objects.requireNonNull(str, "value is required");
        this.f11646d = new io.sentry.util.e(new app.rive.runtime.kotlin.b(str, 2));
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || k6.class != obj.getClass()) {
            return false;
        }
        return ((String) this.f11646d.a()).equals(((k6) obj).f11646d.a());
    }

    public final int hashCode() {
        return ((String) this.f11646d.a()).hashCode();
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.s((String) this.f11646d.a());
    }

    public final String toString() {
        return (String) this.f11646d.a();
    }

    public k6() {
        this.f11646d = new io.sentry.util.e(new i7.a(13));
    }
}
