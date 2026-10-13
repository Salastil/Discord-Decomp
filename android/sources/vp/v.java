package vp;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.collections.l0;
import kotlin.collections.m0;
import kotlin.collections.o0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class v extends e0 {

    /* renamed from: n, reason: collision with root package name */
    public final op.x f19526n;

    /* renamed from: o, reason: collision with root package name */
    public final q f19527o;

    /* renamed from: p, reason: collision with root package name */
    public final xq.h f19528p;

    /* renamed from: q, reason: collision with root package name */
    public final xq.j f19529q;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public v(e4.i c6, op.x jPackage, q ownerDescriptor) {
        super(c6);
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(jPackage, "jPackage");
        Intrinsics.checkNotNullParameter(ownerDescriptor, "ownerDescriptor");
        this.f19526n = jPackage;
        this.f19527o = ownerDescriptor;
        xq.o oVar = ((up.a) c6.f7952d).a;
        bs.q qVar = new bs.q(16, c6, this);
        xq.l lVar = (xq.l) oVar;
        lVar.getClass();
        this.f19528p = new xq.h(lVar, qVar);
        this.f19529q = ((xq.l) oVar).d(new kq.k(3, this, c6));
    }

    @Override // rq.p, rq.q
    public final ip.i a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return v(name, null);
    }

    @Override // vp.a0, rq.p, rq.o
    public final Collection c(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return m0.f13512d;
    }

    @Override // vp.a0, rq.p, rq.q
    public final Collection e(rq.f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        if (!kindFilter.a(rq.f.f17533l | rq.f.f17528e)) {
            return m0.f13512d;
        }
        Iterable iterable = (Iterable) this.f19464d.invoke();
        ArrayList arrayList = new ArrayList();
        for (Object obj : iterable) {
            ip.l lVar = (ip.l) obj;
            if (lVar instanceof ip.f) {
                hq.e name = ((ip.f) lVar).getName();
                Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                if (((Boolean) nameFilter.invoke(name)).booleanValue()) {
                    arrayList.add(obj);
                }
            }
        }
        return arrayList;
    }

    @Override // vp.a0
    public final Set h(rq.f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        if (!kindFilter.a(rq.f.f17528e)) {
            return o0.f13515d;
        }
        Set set = (Set) this.f19528p.invoke();
        if (set != null) {
            HashSet hashSet = new HashSet();
            Iterator it = set.iterator();
            while (it.hasNext()) {
                hashSet.add(hq.e.e((String) it.next()));
            }
            return hashSet;
        }
        if (nameFilter == null) {
            nameFilter = ir.d.f12258d;
        }
        this.f19526n.getClass();
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        m0 m0Var = m0.f13512d;
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        m0Var.getClass();
        l0.f13511d.getClass();
        return linkedHashSet;
    }

    @Override // vp.a0
    public final Set i(rq.f kindFilter, rq.l lVar) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        return o0.f13515d;
    }

    @Override // vp.a0
    public final c k() {
        return b.a;
    }

    @Override // vp.a0
    public final void m(LinkedHashSet result, hq.e name) {
        Intrinsics.checkNotNullParameter(result, "result");
        Intrinsics.checkNotNullParameter(name, "name");
    }

    @Override // vp.a0
    public final Set o(rq.f kindFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        return o0.f13515d;
    }

    @Override // vp.a0
    public final ip.l q() {
        return this.f19527o;
    }

    public final ip.f v(hq.e name, op.n nVar) {
        hq.e eVar = hq.g.a;
        Intrinsics.checkNotNullParameter(name, "name");
        String b10 = name.b();
        Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
        if (b10.length() <= 0 || name.f10210e) {
            return null;
        }
        Set set = (Set) this.f19528p.invoke();
        if (nVar == null && set != null && !set.contains(name.b())) {
            return null;
        }
        return (ip.f) this.f19529q.invoke(new r(name, nVar));
    }
}
