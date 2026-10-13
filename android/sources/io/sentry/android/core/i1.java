package io.sentry.android.core;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class i1 {
    public final Integer a;

    /* renamed from: b, reason: collision with root package name */
    public final Boolean f11168b;

    public i1(Integer num, Boolean bool) {
        this.a = num;
        this.f11168b = bool;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof i1)) {
            return false;
        }
        i1 i1Var = (i1) obj;
        return d9.a.k(this.a, i1Var.a) && d9.a.k(this.f11168b, i1Var.f11168b);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.a, this.f11168b});
    }
}
