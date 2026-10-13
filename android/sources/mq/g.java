package mq;

import ip.a0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class g {
    public final Object a;

    public g(Object obj) {
        this.a = obj;
    }

    public abstract yq.y a(a0 a0Var);

    public Object b() {
        return this.a;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        Object b10 = b();
        g gVar = obj instanceof g ? (g) obj : null;
        return Intrinsics.areEqual(b10, gVar != null ? gVar.b() : null);
    }

    public final int hashCode() {
        Object b10 = b();
        if (b10 != null) {
            return b10.hashCode();
        }
        return 0;
    }

    public String toString() {
        return String.valueOf(b());
    }
}
