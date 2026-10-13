package np;

import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class b {
    public final Class a;

    /* renamed from: b, reason: collision with root package name */
    public final aj.a f15583b;

    public b(Class cls, aj.a aVar) {
        this.a = cls;
        this.f15583b = aVar;
    }

    public final String a() {
        StringBuilder sb2 = new StringBuilder();
        String name = this.a.getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        sb2.append(x.m(name, '.', '/'));
        sb2.append(".class");
        return sb2.toString();
    }

    public final boolean equals(Object obj) {
        if (obj instanceof b) {
            return Intrinsics.areEqual(this.a, ((b) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        a3.e.v(b.class, sb2, ": ");
        sb2.append(this.a);
        return sb2.toString();
    }
}
