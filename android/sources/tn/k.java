package tn;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k {
    public final a a;

    /* renamed from: b, reason: collision with root package name */
    public final m f18678b;

    /* renamed from: c, reason: collision with root package name */
    public final j f18679c;

    public k(a insets, m mode, j edges) {
        Intrinsics.checkNotNullParameter(insets, "insets");
        Intrinsics.checkNotNullParameter(mode, "mode");
        Intrinsics.checkNotNullParameter(edges, "edges");
        this.a = insets;
        this.f18678b = mode;
        this.f18679c = edges;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof k)) {
            return false;
        }
        k kVar = (k) obj;
        return Intrinsics.areEqual(this.a, kVar.a) && this.f18678b == kVar.f18678b && Intrinsics.areEqual(this.f18679c, kVar.f18679c);
    }

    public final int hashCode() {
        return this.f18679c.hashCode() + ((this.f18678b.hashCode() + (this.a.hashCode() * 31)) * 31);
    }

    public final String toString() {
        return "SafeAreaViewLocalData(insets=" + this.a + ", mode=" + this.f18678b + ", edges=" + this.f18679c + ")";
    }
}
