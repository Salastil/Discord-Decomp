package hn;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final int f10140b;

    /* renamed from: c, reason: collision with root package name */
    public final b f10141c;

    public l(String selectedScreenKey, int i5, b actionOrigin) {
        Intrinsics.checkNotNullParameter(selectedScreenKey, "selectedScreenKey");
        Intrinsics.checkNotNullParameter(actionOrigin, "actionOrigin");
        this.a = selectedScreenKey;
        this.f10140b = i5;
        this.f10141c = actionOrigin;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof l)) {
            return false;
        }
        l lVar = (l) obj;
        return Intrinsics.areEqual(this.a, lVar.a) && this.f10140b == lVar.f10140b && this.f10141c == lVar.f10141c;
    }

    public final int hashCode() {
        return this.f10141c.hashCode() + com.discord.chat.bridge.botuikit.a.u(this.f10140b, this.a.hashCode() * 31, 31);
    }

    public final String toString() {
        StringBuilder s2 = a3.e.s("TabsNavigationStateUpdateRequest(selectedScreenKey=", this.a, ", baseProvenance=", this.f10140b, ", actionOrigin=");
        s2.append(this.f10141c);
        s2.append(")");
        return s2.toString();
    }
}
