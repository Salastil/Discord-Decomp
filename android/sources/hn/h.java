package hn;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h {

    /* renamed from: c, reason: collision with root package name */
    public static final h f10131c = new h("", Integer.MIN_VALUE);
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final int f10132b;

    public h(String selectedScreenKey, int i5) {
        Intrinsics.checkNotNullParameter(selectedScreenKey, "selectedScreenKey");
        this.a = selectedScreenKey;
        this.f10132b = i5;
    }

    public final boolean a() {
        return this == f10131c;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof h)) {
            return false;
        }
        h hVar = (h) obj;
        return Intrinsics.areEqual(this.a, hVar.a) && this.f10132b == hVar.f10132b;
    }

    public final int hashCode() {
        return Integer.hashCode(this.f10132b) + (this.a.hashCode() * 31);
    }

    public final String toString() {
        return "TabsNavigationState(selectedScreenKey=" + this.a + ", provenance=" + this.f10132b + ")";
    }
}
