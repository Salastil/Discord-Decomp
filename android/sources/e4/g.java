package e4;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class g {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final int f7949b;

    /* renamed from: c, reason: collision with root package name */
    public final int f7950c;

    public g(String workSpecId, int i5, int i6) {
        Intrinsics.checkNotNullParameter(workSpecId, "workSpecId");
        this.a = workSpecId;
        this.f7949b = i5;
        this.f7950c = i6;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof g)) {
            return false;
        }
        g gVar = (g) obj;
        return Intrinsics.areEqual(this.a, gVar.a) && this.f7949b == gVar.f7949b && this.f7950c == gVar.f7950c;
    }

    public final int hashCode() {
        return Integer.hashCode(this.f7950c) + com.discord.chat.bridge.botuikit.a.u(this.f7949b, this.a.hashCode() * 31, 31);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("SystemIdInfo(workSpecId=");
        sb2.append(this.a);
        sb2.append(", generation=");
        sb2.append(this.f7949b);
        sb2.append(", systemId=");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.f7950c, ')');
    }
}
