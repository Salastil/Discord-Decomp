package rq;

import java.util.Collection;
import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lp.l0;

/* loaded from: classes3.dex */
public abstract class p implements o {
    @Override // rq.q
    public ip.i a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return null;
    }

    @Override // rq.o
    public Set b() {
        Collection e9 = e(f.f17537p, ir.d.f12258d);
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        for (Object obj : e9) {
            if (obj instanceof l0) {
                hq.e name = ((l0) obj).getName();
                Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                linkedHashSet.add(name);
            }
        }
        return linkedHashSet;
    }

    @Override // rq.o
    public Collection c(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return m0.f13512d;
    }

    @Override // rq.o
    public Set d() {
        return null;
    }

    @Override // rq.q
    public Collection e(f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        return m0.f13512d;
    }

    @Override // rq.o
    public Collection f(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return m0.f13512d;
    }

    @Override // rq.o
    public Set g() {
        Collection e9 = e(f.f17538q, ir.d.f12258d);
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        for (Object obj : e9) {
            if (obj instanceof l0) {
                hq.e name = ((l0) obj).getName();
                Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                linkedHashSet.add(name);
            }
        }
        return linkedHashSet;
    }
}
