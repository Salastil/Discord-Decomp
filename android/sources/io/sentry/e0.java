package io.sentry;

import java.util.Objects;
import java.util.regex.Pattern;

/* loaded from: classes3.dex */
public final class e0 {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Pattern f11529b;

    public e0(String str) {
        Pattern pattern;
        this.a = str;
        try {
            pattern = Pattern.compile(str);
        } catch (Throwable unused) {
            c4.f().l().getLogger().u(SentryLevel.DEBUG, "Only using filter string for String comparison as it could not be parsed as regex: %s", str);
            pattern = null;
        }
        this.f11529b = pattern;
    }

    public final boolean equals(Object obj) {
        if (obj == null || e0.class != obj.getClass()) {
            return false;
        }
        return Objects.equals(this.a, ((e0) obj).a);
    }

    public final int hashCode() {
        return Objects.hash(this.a);
    }
}
