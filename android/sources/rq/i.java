package rq;

import ip.r0;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Set;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i extends p {

    /* renamed from: b, reason: collision with root package name */
    public final o f17547b;

    public i(o workerScope) {
        Intrinsics.checkNotNullParameter(workerScope, "workerScope");
        this.f17547b = workerScope;
    }

    @Override // rq.p, rq.q
    public final ip.i a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        ip.i a = this.f17547b.a(name, location);
        if (a != null) {
            ip.f fVar = a instanceof ip.f ? (ip.f) a : null;
            if (fVar != null) {
                return fVar;
            }
            if (a instanceof r0) {
                return (r0) a;
            }
        }
        return null;
    }

    @Override // rq.p, rq.o
    public final Set b() {
        return this.f17547b.b();
    }

    @Override // rq.p, rq.o
    public final Set d() {
        return this.f17547b.d();
    }

    @Override // rq.p, rq.q
    public final Collection e(f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        int i5 = f.f17533l & kindFilter.f17541b;
        f fVar = i5 == 0 ? null : new f(i5, kindFilter.a);
        if (fVar == null) {
            return m0.f13512d;
        }
        Collection e9 = this.f17547b.e(fVar, nameFilter);
        ArrayList arrayList = new ArrayList();
        for (Object obj : e9) {
            if (obj instanceof ip.j) {
                arrayList.add(obj);
            }
        }
        return arrayList;
    }

    @Override // rq.p, rq.o
    public final Set g() {
        return this.f17547b.g();
    }

    public final String toString() {
        return "Classes from " + this.f17547b;
    }
}
