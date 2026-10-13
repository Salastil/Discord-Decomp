package zp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h {
    public final g a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f21356b;

    public h(g qualifier, boolean z5) {
        Intrinsics.checkNotNullParameter(qualifier, "qualifier");
        this.a = qualifier;
        this.f21356b = z5;
    }

    public static h a(h hVar, g qualifier, boolean z5, int i5) {
        if ((i5 & 1) != 0) {
            qualifier = hVar.a;
        }
        if ((i5 & 2) != 0) {
            z5 = hVar.f21356b;
        }
        hVar.getClass();
        Intrinsics.checkNotNullParameter(qualifier, "qualifier");
        return new h(qualifier, z5);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof h)) {
            return false;
        }
        h hVar = (h) obj;
        return this.a == hVar.a && this.f21356b == hVar.f21356b;
    }

    public final int hashCode() {
        return Boolean.hashCode(this.f21356b) + (this.a.hashCode() * 31);
    }

    public final String toString() {
        return "NullabilityQualifierWithMigrationStatus(qualifier=" + this.a + ", isForWarningOnly=" + this.f21356b + ')';
    }
}
