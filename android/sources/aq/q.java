package aq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class q {
    public final String a;

    public q(String str) {
        this.a = str;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof q) && Intrinsics.areEqual(this.a, ((q) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return s4.h.h(new StringBuilder("MemberSignature(signature="), this.a, ')');
    }
}
