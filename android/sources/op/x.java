package op;

import java.util.Collection;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class x extends r implements yp.b {
    public final hq.c a;

    public x(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        this.a = fqName;
    }

    @Override // yp.b
    public final d a(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        return null;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof x) {
            return Intrinsics.areEqual(this.a, ((x) obj).a);
        }
        return false;
    }

    @Override // yp.b
    public final Collection getAnnotations() {
        return m0.f13512d;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        a3.e.v(x.class, sb2, ": ");
        sb2.append(this.a);
        return sb2.toString();
    }
}
