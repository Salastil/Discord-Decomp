package rq;

import cp.d0;
import fo.u;
import ip.q0;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import yq.u0;
import yq.w0;

/* loaded from: classes3.dex */
public final class t implements o {

    /* renamed from: b, reason: collision with root package name */
    public final o f17565b;

    /* renamed from: c, reason: collision with root package name */
    public final w0 f17566c;

    /* renamed from: d, reason: collision with root package name */
    public HashMap f17567d;

    /* renamed from: e, reason: collision with root package name */
    public final u f17568e;

    public t(o workerScope, w0 givenSubstitutor) {
        Intrinsics.checkNotNullParameter(workerScope, "workerScope");
        Intrinsics.checkNotNullParameter(givenSubstitutor, "givenSubstitutor");
        this.f17565b = workerScope;
        fo.l.a(new d0(18, givenSubstitutor));
        u0 g6 = givenSubstitutor.g();
        Intrinsics.checkNotNullExpressionValue(g6, "getSubstitution(...)");
        this.f17566c = nt.a.L(g6).c();
        this.f17568e = fo.l.a(new d0(19, this));
    }

    @Override // rq.q
    public final ip.i a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        ip.i a = this.f17565b.a(name, location);
        if (a != null) {
            return (ip.i) h(a);
        }
        return null;
    }

    @Override // rq.o
    public final Set b() {
        return this.f17565b.b();
    }

    @Override // rq.o
    public final Collection c(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return i(this.f17565b.c(name, location));
    }

    @Override // rq.o
    public final Set d() {
        return this.f17565b.d();
    }

    @Override // rq.q
    public final Collection e(f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        return (Collection) this.f17568e.getValue();
    }

    @Override // rq.o
    public final Collection f(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return i(this.f17565b.f(name, location));
    }

    @Override // rq.o
    public final Set g() {
        return this.f17565b.g();
    }

    public final ip.l h(ip.l lVar) {
        w0 w0Var = this.f17566c;
        if (w0Var.a.f()) {
            return lVar;
        }
        if (this.f17567d == null) {
            this.f17567d = new HashMap();
        }
        HashMap hashMap = this.f17567d;
        Intrinsics.checkNotNull(hashMap);
        Object obj = hashMap.get(lVar);
        if (obj == null) {
            if (!(lVar instanceof q0)) {
                throw new IllegalStateException(("Unknown descriptor in scope: " + lVar).toString());
            }
            obj = ((q0) lVar).c(w0Var);
            if (obj == null) {
                throw new AssertionError("We expect that no conflict should happen while substitution is guaranteed to generate invariant projection, but " + lVar + " substitution fails");
            }
            hashMap.put(lVar, obj);
        }
        ip.l lVar2 = (ip.l) obj;
        Intrinsics.checkNotNull(lVar2, "null cannot be cast to non-null type D of org.jetbrains.kotlin.resolve.scopes.SubstitutingScope.substitute");
        return lVar2;
    }

    public final Collection i(Collection collection) {
        if (this.f17566c.a.f()) {
            return collection;
        }
        if (collection.isEmpty()) {
            return collection;
        }
        int size = collection.size();
        LinkedHashSet linkedHashSet = new LinkedHashSet(size >= 3 ? (size / 3) + size + 1 : 3);
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            linkedHashSet.add(h((ip.l) it.next()));
        }
        return linkedHashSet;
    }
}
