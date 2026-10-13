package bn;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final i f3072b;

    /* renamed from: c, reason: collision with root package name */
    public final p f3073c;

    public j(String id2, i options, p pVar) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(options, "options");
        this.a = id2;
        this.f3072b = options;
        this.f3073c = pVar;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof j)) {
            return false;
        }
        j jVar = (j) obj;
        return Intrinsics.areEqual(this.a, jVar.a) && Intrinsics.areEqual(this.f3072b, jVar.f3072b) && Intrinsics.areEqual(this.f3073c, jVar.f3073c);
    }

    public final int hashCode() {
        int hashCode = (this.f3072b.hashCode() + (this.a.hashCode() * 31)) * 31;
        p pVar = this.f3073c;
        return hashCode + (pVar == null ? 0 : pVar.hashCode());
    }

    public final String toString() {
        return "StackHeaderToolbarMenuElementRawUpdate(id=" + this.a + ", options=" + this.f3072b + ", iconSource=" + this.f3073c + ")";
    }
}
