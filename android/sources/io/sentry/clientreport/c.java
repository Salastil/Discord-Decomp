package io.sentry.clientreport;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class c {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f11465b;

    public c(String str, String str2) {
        this.a = str;
        this.f11465b = str2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof c)) {
            return false;
        }
        c cVar = (c) obj;
        return d9.a.k(this.a, cVar.a) && d9.a.k(this.f11465b, cVar.f11465b);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.a, this.f11465b});
    }
}
