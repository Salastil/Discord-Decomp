package com.margelo.nitro.rive;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class o extends p {
    public final String a;

    public o(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        this.a = name;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof o) && Intrinsics.areEqual(this.a, ((o) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return s4.h.f("Resource(name=", this.a, ")");
    }
}
