package io.sentry.rrweb;

import java.util.Arrays;

/* loaded from: classes3.dex */
public abstract class b {

    /* renamed from: d, reason: collision with root package name */
    public c f11942d;

    /* renamed from: e, reason: collision with root package name */
    public long f11943e = System.currentTimeMillis();

    public b(c cVar) {
        this.f11942d = cVar;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return this.f11943e == bVar.f11943e && this.f11942d == bVar.f11942d;
    }

    public int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11942d, Long.valueOf(this.f11943e)});
    }
}
