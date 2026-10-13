package hp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c {
    public final hq.b a;

    /* renamed from: b, reason: collision with root package name */
    public final hq.b f10146b;

    /* renamed from: c, reason: collision with root package name */
    public final hq.b f10147c;

    public c(hq.b javaClass, hq.b kotlinReadOnly, hq.b kotlinMutable) {
        Intrinsics.checkNotNullParameter(javaClass, "javaClass");
        Intrinsics.checkNotNullParameter(kotlinReadOnly, "kotlinReadOnly");
        Intrinsics.checkNotNullParameter(kotlinMutable, "kotlinMutable");
        this.a = javaClass;
        this.f10146b = kotlinReadOnly;
        this.f10147c = kotlinMutable;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof c)) {
            return false;
        }
        c cVar = (c) obj;
        return Intrinsics.areEqual(this.a, cVar.a) && Intrinsics.areEqual(this.f10146b, cVar.f10146b) && Intrinsics.areEqual(this.f10147c, cVar.f10147c);
    }

    public final int hashCode() {
        return this.f10147c.hashCode() + ((this.f10146b.hashCode() + (this.a.hashCode() * 31)) * 31);
    }

    public final String toString() {
        return "PlatformMutabilityMapping(javaClass=" + this.a + ", kotlinReadOnly=" + this.f10146b + ", kotlinMutable=" + this.f10147c + ')';
    }
}
