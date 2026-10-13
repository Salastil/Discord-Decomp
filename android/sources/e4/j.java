package e4;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class j {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final int f7956b;

    public j(String workSpecId, int i5) {
        Intrinsics.checkNotNullParameter(workSpecId, "workSpecId");
        this.a = workSpecId;
        this.f7956b = i5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof j)) {
            return false;
        }
        j jVar = (j) obj;
        return Intrinsics.areEqual(this.a, jVar.a) && this.f7956b == jVar.f7956b;
    }

    public final int hashCode() {
        return Integer.hashCode(this.f7956b) + (this.a.hashCode() * 31);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("WorkGenerationalId(workSpecId=");
        sb2.append(this.a);
        sb2.append(", generation=");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.f7956b, ')');
    }
}
