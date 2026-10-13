package yq;

import java.util.AbstractCollection;
import java.util.Collection;
import java.util.LinkedHashSet;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class x implements p0, cr.h {
    public y a;

    /* renamed from: b, reason: collision with root package name */
    public final LinkedHashSet f21078b;

    /* renamed from: c, reason: collision with root package name */
    public final int f21079c;

    public x(AbstractCollection typesToIntersect) {
        Intrinsics.checkNotNullParameter(typesToIntersect, "typesToIntersect");
        typesToIntersect.isEmpty();
        LinkedHashSet linkedHashSet = new LinkedHashSet(typesToIntersect);
        this.f21078b = linkedHashSet;
        this.f21079c = linkedHashSet.hashCode();
    }

    @Override // yq.p0
    public final ip.i a() {
        return null;
    }

    @Override // yq.p0
    public final Collection b() {
        return this.f21078b;
    }

    @Override // yq.p0
    public final boolean c() {
        return false;
    }

    public final c0 e() {
        k0.f21045e.getClass();
        return c.w(k0.f21046i, this, kotlin.collections.m0.f13512d, false, a5.k0.p("member scope for intersection type", this.f21078b), new aq.a(24, this));
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof x)) {
            return false;
        }
        return Intrinsics.areEqual(this.f21078b, ((x) obj).f21078b);
    }

    public final String f(Function1 getProperTypeRelatedToStringify) {
        Intrinsics.checkNotNullParameter(getProperTypeRelatedToStringify, "getProperTypeRelatedToStringify");
        return CollectionsKt.O(CollectionsKt.e0(this.f21078b, new ks.o(1, getProperTypeRelatedToStringify)), " & ", "{", "}", new aq.a(23, getProperTypeRelatedToStringify), 24);
    }

    @Override // yq.p0
    public final fp.i g() {
        fp.i g6 = ((y) this.f21078b.iterator().next()).r0().g();
        Intrinsics.checkNotNullExpressionValue(g6, "getBuiltIns(...)");
        return g6;
    }

    @Override // yq.p0
    public final List getParameters() {
        return kotlin.collections.m0.f13512d;
    }

    public final int hashCode() {
        return this.f21079c;
    }

    public final String toString() {
        return f(w.f21075e);
    }
}
