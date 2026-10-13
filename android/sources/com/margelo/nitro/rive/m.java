package com.margelo.nitro.rive;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m extends p {
    public final String a;

    public m(String path) {
        Intrinsics.checkNotNullParameter(path, "path");
        this.a = path;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof m) && Intrinsics.areEqual(this.a, ((m) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return s4.h.f("File(path=", this.a, ")");
    }
}
