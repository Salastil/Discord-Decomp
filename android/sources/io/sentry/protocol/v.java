package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;

/* loaded from: classes3.dex */
public final class v implements y1 {

    /* renamed from: e, reason: collision with root package name */
    public static final v f11895e = new v("00000000-0000-0000-0000-000000000000".replace("-", ""));

    /* renamed from: d, reason: collision with root package name */
    public final io.sentry.util.e f11896d;

    public v() {
        this.f11896d = new io.sentry.util.e(new i7.a(28));
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || v.class != obj.getClass()) {
            return false;
        }
        return ((String) this.f11896d.a()).equals(((v) obj).f11896d.a());
    }

    public final int hashCode() {
        return ((String) this.f11896d.a()).hashCode();
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.s(toString());
    }

    public final String toString() {
        return (String) this.f11896d.a();
    }

    public v(String str) {
        String str2 = str.equals("0000-0000") ? "00000000-0000-0000-0000-000000000000" : str;
        if (str2.length() != 32 && str2.length() != 36) {
            throw new IllegalArgumentException("String representation of SentryId has either 32 (UUID no dashes) or 36 characters long (completed UUID). Received: ".concat(str));
        }
        if (str2.length() == 36) {
            this.f11896d = new io.sentry.util.e(new app.rive.runtime.kotlin.b(this, str2));
        } else {
            this.f11896d = new io.sentry.util.e(new app.rive.runtime.kotlin.b(str2, 2));
        }
    }
}
