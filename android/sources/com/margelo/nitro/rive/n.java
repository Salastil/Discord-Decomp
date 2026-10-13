package com.margelo.nitro.rive;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class n extends p {
    public final String a;

    public n(String url) {
        Intrinsics.checkNotNullParameter(url, "url");
        this.a = url;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof n) && Intrinsics.areEqual(this.a, ((n) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return s4.h.f("Http(url=", this.a, ")");
    }
}
