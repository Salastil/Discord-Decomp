package gp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l {
    public final k a;

    /* renamed from: b, reason: collision with root package name */
    public final int f9433b;

    public l(k kind, int i5) {
        Intrinsics.checkNotNullParameter(kind, "kind");
        this.a = kind;
        this.f9433b = i5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof l)) {
            return false;
        }
        l lVar = (l) obj;
        return Intrinsics.areEqual(this.a, lVar.a) && this.f9433b == lVar.f9433b;
    }

    public final int hashCode() {
        return Integer.hashCode(this.f9433b) + (this.a.hashCode() * 31);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("KindWithArity(kind=");
        sb2.append(this.a);
        sb2.append(", arity=");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.f9433b, ')');
    }
}
