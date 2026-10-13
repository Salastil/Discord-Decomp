package uq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g {
    public final hq.b a;

    /* renamed from: b, reason: collision with root package name */
    public final e f19013b;

    public g(hq.b classId, e eVar) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        this.a = classId;
        this.f19013b = eVar;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof g) {
            return Intrinsics.areEqual(this.a, ((g) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }
}
