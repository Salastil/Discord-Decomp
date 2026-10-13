package e4;

import kotlin.jvm.internal.Intrinsics;
import v3.y;

/* loaded from: classes.dex */
public final class n {
    public String a;

    /* renamed from: b, reason: collision with root package name */
    public y f7966b;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof n)) {
            return false;
        }
        n nVar = (n) obj;
        return Intrinsics.areEqual(this.a, nVar.a) && this.f7966b == nVar.f7966b;
    }

    public final int hashCode() {
        return this.f7966b.hashCode() + (this.a.hashCode() * 31);
    }

    public final String toString() {
        return "IdAndState(id=" + this.a + ", state=" + this.f7966b + ')';
    }
}
