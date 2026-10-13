package mq;

import java.util.Collection;
import java.util.LinkedHashSet;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import yq.k0;
import yq.p0;

/* loaded from: classes3.dex */
public final class o implements p0 {
    public final LinkedHashSet a;

    /* renamed from: b, reason: collision with root package name */
    public final fo.u f14581b;

    public o(LinkedHashSet linkedHashSet) {
        k0.f21045e.getClass();
        k0 attributes = k0.f21046i;
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        Intrinsics.checkNotNullParameter(this, "constructor");
        yq.c.v(m0.f13512d, ar.l.a(ar.h.f2669i, true, "unknown integer literal type"), attributes, this, false);
        this.f14581b = fo.l.a(new l());
        this.a = linkedHashSet;
    }

    @Override // yq.p0
    public final ip.i a() {
        return null;
    }

    @Override // yq.p0
    public final Collection b() {
        return (List) this.f14581b.getValue();
    }

    @Override // yq.p0
    public final boolean c() {
        return false;
    }

    @Override // yq.p0
    public final fp.i g() {
        throw null;
    }

    @Override // yq.p0
    public final List getParameters() {
        return m0.f13512d;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("IntegerLiteralType");
        sb2.append("[" + CollectionsKt.O(this.a, ",", null, null, m.f14579d, 30) + ']');
        return sb2.toString();
    }
}
