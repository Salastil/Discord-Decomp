package wq;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;
import kotlin.collections.d0;
import kotlin.collections.h0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import yq.y;

/* loaded from: classes3.dex */
public final class g extends p {

    /* renamed from: g, reason: collision with root package name */
    public final zq.f f20005g;

    /* renamed from: h, reason: collision with root package name */
    public final xq.i f20006h;

    /* renamed from: i, reason: collision with root package name */
    public final xq.i f20007i;
    public final /* synthetic */ i j;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public g(i iVar, zq.f kotlinTypeRefiner) {
        super(r2, r3, r4, r5, new e(0, r1));
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        this.j = iVar;
        cc.k kVar = iVar.I;
        cq.k kVar2 = iVar.f20008w;
        List list = kVar2.N;
        Intrinsics.checkNotNullExpressionValue(list, "getFunctionList(...)");
        List list2 = kVar2.O;
        Intrinsics.checkNotNullExpressionValue(list2, "getPropertyList(...)");
        List list3 = kVar2.P;
        Intrinsics.checkNotNullExpressionValue(list3, "getTypeAliasList(...)");
        List list4 = kVar2.H;
        Intrinsics.checkNotNullExpressionValue(list4, "getNestedClassNameList(...)");
        eq.g gVar = (eq.g) iVar.I.f3399i;
        ArrayList arrayList = new ArrayList(d0.l(list4, 10));
        Iterator it = list4.iterator();
        while (it.hasNext()) {
            arrayList.add(nt.a.u(gVar, ((Number) it.next()).intValue()));
        }
        uq.j jVar = (uq.j) kVar.f3398e;
        this.f20005g = kotlinTypeRefiner;
        xq.l lVar = jVar.a;
        f fVar = new f(this, 0);
        lVar.getClass();
        this.f20006h = new xq.i(lVar, fVar);
        xq.l lVar2 = jVar.a;
        f fVar2 = new f(this, 1);
        lVar2.getClass();
        this.f20007i = new xq.i(lVar2, fVar2);
    }

    @Override // wq.p, rq.p, rq.q
    public final ip.i a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        s(name, location);
        e4.i iVar = this.j.M;
        if (iVar != null) {
            Intrinsics.checkNotNullParameter(name, "name");
            ip.f fVar = (ip.f) ((xq.j) iVar.f7953e).invoke(name);
            if (fVar != null) {
                return fVar;
            }
        }
        return super.a(name, location);
    }

    @Override // wq.p, rq.p, rq.o
    public final Collection c(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        s(name, location);
        return super.c(name, location);
    }

    @Override // rq.p, rq.q
    public final Collection e(rq.f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        return (Collection) this.f20006h.invoke();
    }

    @Override // wq.p, rq.p, rq.o
    public final Collection f(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        s(name, location);
        return super.f(name, location);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v0 */
    /* JADX WARN: Type inference failed for: r1v1 */
    /* JADX WARN: Type inference failed for: r1v2, types: [java.util.Collection] */
    /* JADX WARN: Type inference failed for: r1v3, types: [kotlin.collections.m0] */
    /* JADX WARN: Type inference failed for: r1v4, types: [java.util.ArrayList] */
    @Override // wq.p
    public final void h(ArrayList result, Function1 nameFilter) {
        ?? r12;
        Intrinsics.checkNotNullParameter(result, "result");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        e4.i iVar = this.j.M;
        if (iVar != null) {
            Set<hq.e> keySet = ((LinkedHashMap) iVar.f7952d).keySet();
            r12 = new ArrayList();
            for (hq.e name : keySet) {
                Intrinsics.checkNotNullParameter(name, "name");
                ip.f fVar = (ip.f) ((xq.j) iVar.f7953e).invoke(name);
                if (fVar != null) {
                    r12.add(fVar);
                }
            }
        } else {
            r12 = 0;
        }
        if (r12 == 0) {
            r12 = m0.f13512d;
        }
        result.addAll(r12);
    }

    @Override // wq.p
    public final void j(hq.e name, ArrayList functions) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(functions, "functions");
        ArrayList arrayList = new ArrayList();
        Iterator it = ((Collection) this.f20007i.invoke()).iterator();
        while (it.hasNext()) {
            arrayList.addAll(((y) it.next()).N().f(name, qp.c.f16939i));
        }
        cc.k kVar = this.f20028b;
        functions.addAll(((uq.j) kVar.f3398e).f19026n.e(name, this.j));
        ArrayList arrayList2 = new ArrayList(functions);
        ((zq.m) ((uq.j) kVar.f3398e).f19029q).f21397c.h(name, arrayList, arrayList2, this.j, new lp.o(functions, 1));
    }

    @Override // wq.p
    public final void k(hq.e name, ArrayList descriptors) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(descriptors, "descriptors");
        ArrayList arrayList = new ArrayList();
        Iterator it = ((Collection) this.f20007i.invoke()).iterator();
        while (it.hasNext()) {
            arrayList.addAll(((y) it.next()).N().c(name, qp.c.f16939i));
        }
        ArrayList arrayList2 = new ArrayList(descriptors);
        ((zq.m) ((uq.j) this.f20028b.f3398e).f19029q).f21397c.h(name, arrayList, arrayList2, this.j, new lp.o(descriptors, 1));
    }

    @Override // wq.p
    public final hq.b l(hq.e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return this.j.E.d(name);
    }

    @Override // wq.p
    public final Set n() {
        List b10 = this.j.K.b();
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        Iterator it = b10.iterator();
        while (it.hasNext()) {
            Set d6 = ((y) it.next()).N().d();
            if (d6 == null) {
                return null;
            }
            h0.o(linkedHashSet, d6);
        }
        return linkedHashSet;
    }

    @Override // wq.p
    public final Set o() {
        i iVar = this.j;
        List b10 = iVar.K.b();
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        Iterator it = b10.iterator();
        while (it.hasNext()) {
            h0.o(linkedHashSet, ((y) it.next()).N().b());
        }
        linkedHashSet.addAll(((uq.j) this.f20028b.f3398e).f19026n.b(iVar));
        return linkedHashSet;
    }

    @Override // wq.p
    public final Set p() {
        List b10 = this.j.K.b();
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        Iterator it = b10.iterator();
        while (it.hasNext()) {
            h0.o(linkedHashSet, ((y) it.next()).N().g());
        }
        return linkedHashSet;
    }

    @Override // wq.p
    public final boolean r(s function) {
        Intrinsics.checkNotNullParameter(function, "function");
        return ((uq.j) this.f20028b.f3398e).f19027o.c(this.j, function);
    }

    public final void s(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        ys.d.Z(((uq.j) this.f20028b.f3398e).f19023i, location, this.j, name);
    }
}
