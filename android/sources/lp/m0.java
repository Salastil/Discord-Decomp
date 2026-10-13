package lp;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.Set;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m0 extends rq.p {

    /* renamed from: b, reason: collision with root package name */
    public final ip.a0 f14161b;

    /* renamed from: c, reason: collision with root package name */
    public final hq.c f14162c;

    public m0(ip.a0 moduleDescriptor, hq.c fqName) {
        Intrinsics.checkNotNullParameter(moduleDescriptor, "moduleDescriptor");
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        this.f14161b = moduleDescriptor;
        this.f14162c = fqName;
    }

    @Override // rq.p, rq.o
    public final Set d() {
        return kotlin.collections.o0.f13515d;
    }

    @Override // rq.p, rq.q
    public final Collection e(rq.f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        if (!kindFilter.a(rq.f.f17531h)) {
            return kotlin.collections.m0.f13512d;
        }
        hq.c cVar = this.f14162c;
        if (cVar.a.c() && kindFilter.a.contains(rq.c.a)) {
            return kotlin.collections.m0.f13512d;
        }
        ip.a0 a0Var = this.f14161b;
        Collection f2 = a0Var.f(cVar, nameFilter);
        ArrayList arrayList = new ArrayList(f2.size());
        Iterator it = f2.iterator();
        while (it.hasNext()) {
            hq.e name = ((hq.c) it.next()).a.f();
            if (((Boolean) nameFilter.invoke(name)).booleanValue()) {
                Intrinsics.checkNotNullParameter(name, "name");
                w wVar = null;
                if (!name.f10210e) {
                    w wVar2 = (w) a0Var.D(cVar.a(name));
                    if (!((Boolean) ys.d.O(wVar2.f14196y, w.F[1])).booleanValue()) {
                        wVar = wVar2;
                    }
                }
                ir.n.b(arrayList, wVar);
            }
        }
        return arrayList;
    }

    public final String toString() {
        return "subpackages of " + this.f14162c + " from " + this.f14161b;
    }
}
