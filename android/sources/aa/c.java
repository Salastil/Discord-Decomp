package aa;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c {

    /* renamed from: c, reason: collision with root package name */
    public static final c f275c = new c("UNKNOWN", null);
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f276b;

    public c(String name, String str) {
        Intrinsics.checkNotNullParameter(name, "name");
        this.a = name;
        this.f276b = str;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof c)) {
            return false;
        }
        c cVar = (c) obj;
        return Intrinsics.areEqual(this.a, cVar.a) && Intrinsics.areEqual(this.f276b, cVar.f276b);
    }

    public final int hashCode() {
        int hashCode = this.a.hashCode() * 31;
        String str = this.f276b;
        return hashCode + (str == null ? 0 : str.hashCode());
    }

    public final String toString() {
        return this.a;
    }
}
