package bn;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g implements h {
    public final n a;

    /* renamed from: b, reason: collision with root package name */
    public final e f3059b;

    /* renamed from: c, reason: collision with root package name */
    public final String f3060c;

    public g(n item, e menu, String str) {
        Intrinsics.checkNotNullParameter(item, "item");
        Intrinsics.checkNotNullParameter(menu, "menu");
        this.a = item;
        this.f3059b = menu;
        this.f3060c = str;
    }

    public static g a(g gVar, n item, e menu, int i5) {
        if ((i5 & 1) != 0) {
            item = gVar.a;
        }
        if ((i5 & 2) != 0) {
            menu = gVar.f3059b;
        }
        String str = gVar.f3060c;
        Intrinsics.checkNotNullParameter(item, "item");
        Intrinsics.checkNotNullParameter(menu, "menu");
        return new g(item, menu, str);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof g)) {
            return false;
        }
        g gVar = (g) obj;
        return Intrinsics.areEqual(this.a, gVar.a) && Intrinsics.areEqual(this.f3059b, gVar.f3059b) && Intrinsics.areEqual(this.f3060c, gVar.f3060c);
    }

    @Override // bn.h
    public final n getItem() {
        return this.a;
    }

    public final int hashCode() {
        int hashCode = (this.f3059b.hashCode() + (this.a.hashCode() * 31)) * 31;
        String str = this.f3060c;
        return hashCode + (str == null ? 0 : str.hashCode());
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Submenu(item=");
        sb2.append(this.a);
        sb2.append(", menu=");
        sb2.append(this.f3059b);
        sb2.append(", menuTitle=");
        return com.discord.chat.bridge.botuikit.a.j(sb2, this.f3060c, ")");
    }
}
