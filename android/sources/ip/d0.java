package ip;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d0 {
    public final hq.b a;

    /* renamed from: b, reason: collision with root package name */
    public final List f12131b;

    public d0(hq.b classId, List typeParametersCount) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        Intrinsics.checkNotNullParameter(typeParametersCount, "typeParametersCount");
        this.a = classId;
        this.f12131b = typeParametersCount;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof d0)) {
            return false;
        }
        d0 d0Var = (d0) obj;
        return Intrinsics.areEqual(this.a, d0Var.a) && Intrinsics.areEqual(this.f12131b, d0Var.f12131b);
    }

    public final int hashCode() {
        return this.f12131b.hashCode() + (this.a.hashCode() * 31);
    }

    public final String toString() {
        return "ClassRequest(classId=" + this.a + ", typeParametersCount=" + this.f12131b + ')';
    }
}
