package hq;

import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class a {
    public final c a;

    /* renamed from: b, reason: collision with root package name */
    public final e f10200b;

    static {
        e eVar = g.f10216f;
        c cVar = c.f10203c;
        tn.g.C(eVar);
    }

    public a(c packageName, e callableName) {
        Intrinsics.checkNotNullParameter(packageName, "packageName");
        Intrinsics.checkNotNullParameter(callableName, "callableName");
        this.a = packageName;
        this.f10200b = callableName;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return Intrinsics.areEqual(this.a, aVar.a) && Intrinsics.areEqual((Object) null, (Object) null) && Intrinsics.areEqual(this.f10200b, aVar.f10200b);
    }

    public final int hashCode() {
        return this.f10200b.hashCode() + ((this.a.hashCode() + 527) * 961);
    }

    public final String toString() {
        return x.m(this.a.a.a, '.', '/') + "/" + this.f10200b;
    }
}
