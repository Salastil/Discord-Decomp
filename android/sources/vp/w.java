package vp;

import java.util.LinkedHashSet;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class w implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19530d;

    /* renamed from: e, reason: collision with root package name */
    public final a0 f19531e;

    public /* synthetic */ w(a0 a0Var, int i5) {
        this.f19530d = i5;
        this.f19531e = a0Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f19530d) {
            case 0:
                rq.f kindFilter = rq.f.f17534m;
                rq.o.a.getClass();
                rq.l nameFilter = rq.l.f17552e;
                Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
                Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
                qp.c cVar = qp.c.f16940v;
                LinkedHashSet linkedHashSet = new LinkedHashSet();
                boolean a = kindFilter.a(rq.f.f17533l);
                List list = kindFilter.a;
                a0 a0Var = this.f19531e;
                if (a) {
                    for (hq.e eVar : a0Var.h(kindFilter, nameFilter)) {
                        nameFilter.invoke(eVar);
                        ir.n.b(linkedHashSet, a0Var.a(eVar, cVar));
                    }
                }
                if (kindFilter.a(rq.f.f17532i) && !list.contains(rq.b.a)) {
                    for (hq.e eVar2 : a0Var.i(kindFilter, nameFilter)) {
                        nameFilter.invoke(eVar2);
                        linkedHashSet.addAll(a0Var.f(eVar2, cVar));
                    }
                }
                if (kindFilter.a(rq.f.j) && !list.contains(rq.b.a)) {
                    for (hq.e eVar3 : a0Var.o(kindFilter)) {
                        nameFilter.invoke(eVar3);
                        linkedHashSet.addAll(a0Var.c(eVar3, cVar));
                    }
                }
                return CollectionsKt.i0(linkedHashSet);
            case 1:
                return this.f19531e.k();
            case 2:
                return this.f19531e.i(rq.f.f17537p, null);
            case 3:
                return this.f19531e.o(rq.f.f17538q);
            default:
                return this.f19531e.h(rq.f.f17536o, null);
        }
    }
}
