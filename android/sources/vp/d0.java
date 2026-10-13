package vp;

import ip.m0;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.collections.h0;
import kotlin.collections.o0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lp.l0;

/* loaded from: classes3.dex */
public final class d0 extends e0 {

    /* renamed from: p, reason: collision with root package name */
    public static final /* synthetic */ int f19480p = 0;

    /* renamed from: n, reason: collision with root package name */
    public final op.n f19481n;

    /* renamed from: o, reason: collision with root package name */
    public final j f19482o;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d0(e4.i c6, op.n jClass, j ownerDescriptor) {
        super(c6);
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(jClass, "jClass");
        Intrinsics.checkNotNullParameter(ownerDescriptor, "ownerDescriptor");
        this.f19481n = jClass;
        this.f19482o = ownerDescriptor;
    }

    public static m0 v(m0 m0Var) {
        ip.c b10 = m0Var.b();
        b10.getClass();
        if (b10 != ip.c.f12124e) {
            return m0Var;
        }
        Collection i5 = m0Var.i();
        Intrinsics.checkNotNullExpressionValue(i5, "getOverriddenDescriptors(...)");
        Collection<m0> collection = i5;
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(collection, 10));
        for (m0 m0Var2 : collection) {
            Intrinsics.checkNotNull(m0Var2);
            arrayList.add(v(m0Var2));
        }
        Intrinsics.checkNotNullParameter(arrayList, "<this>");
        return (m0) CollectionsKt.Z(CollectionsKt.i0(CollectionsKt.k0(arrayList)));
    }

    @Override // rq.p, rq.q
    public final ip.i a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return null;
    }

    @Override // vp.a0
    public final Set h(rq.f kindFilter, Function1 function1) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        return o0.f13515d;
    }

    @Override // vp.a0
    public final Set i(rq.f kindFilter, rq.l lVar) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        LinkedHashSet k02 = CollectionsKt.k0(((c) this.f19465e.invoke()).a());
        j jVar = this.f19482o;
        d0 B = ki.b.B(jVar);
        Set b10 = B != null ? B.b() : null;
        if (b10 == null) {
            b10 = o0.f13515d;
        }
        k02.addAll(b10);
        if (this.f19481n.a.isEnum()) {
            k02.addAll(kotlin.collections.c0.g(fp.p.f8908c, fp.p.a));
        }
        e4.i iVar = this.f19462b;
        k02.addAll(((pq.a) ((up.a) iVar.f7952d).f18988x).g(jVar, iVar));
        return k02;
    }

    @Override // vp.a0
    public final void j(hq.e name, ArrayList result) {
        Intrinsics.checkNotNullParameter(result, "result");
        Intrinsics.checkNotNullParameter(name, "name");
        e4.i iVar = this.f19462b;
        ((pq.a) ((up.a) iVar.f7952d).f18988x).d(this.f19482o, name, result, iVar);
    }

    @Override // vp.a0
    public final c k() {
        return new a(this.f19481n, m.f19505v);
    }

    @Override // vp.a0
    public final void m(LinkedHashSet result, hq.e name) {
        Intrinsics.checkNotNullParameter(result, "result");
        Intrinsics.checkNotNullParameter(name, "name");
        j jVar = this.f19482o;
        d0 B = ki.b.B(jVar);
        Collection l02 = B == null ? o0.f13515d : CollectionsKt.l0(B.f(name, qp.c.f16941w));
        up.a aVar = (up.a) this.f19462b.f7952d;
        LinkedHashSet O = d9.a.O(name, l02, result, this.f19482o, aVar.f18972f, ((zq.m) aVar.f18985u).f21397c);
        Intrinsics.checkNotNullExpressionValue(O, "resolveOverridesForStaticMembers(...)");
        result.addAll(O);
        if (this.f19481n.a.isEnum()) {
            if (Intrinsics.areEqual(name, fp.p.f8908c)) {
                l0 A = m3.n.A(jVar);
                Intrinsics.checkNotNullExpressionValue(A, "createEnumValueOfMethod(...)");
                result.add(A);
            } else if (Intrinsics.areEqual(name, fp.p.a)) {
                l0 B2 = m3.n.B(jVar);
                Intrinsics.checkNotNullExpressionValue(B2, "createEnumValuesMethod(...)");
                result.add(B2);
            }
        }
    }

    @Override // vp.e0, vp.a0
    public final void n(hq.e name, ArrayList result) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(result, "result");
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        aq.a aVar = new aq.a(22, name);
        j jVar = this.f19482o;
        ir.n.g(kotlin.collections.b0.c(jVar), b0.f19471d, new c0(jVar, linkedHashSet, aVar));
        boolean isEmpty = result.isEmpty();
        e4.i iVar = this.f19462b;
        if (isEmpty) {
            LinkedHashMap linkedHashMap = new LinkedHashMap();
            for (Object obj : linkedHashSet) {
                m0 v5 = v((m0) obj);
                Object obj2 = linkedHashMap.get(v5);
                if (obj2 == null) {
                    obj2 = new ArrayList();
                    linkedHashMap.put(v5, obj2);
                }
                ((List) obj2).add(obj);
            }
            ArrayList arrayList = new ArrayList();
            Iterator it = linkedHashMap.entrySet().iterator();
            while (it.hasNext()) {
                Collection collection = (Collection) ((Map.Entry) it.next()).getValue();
                up.a aVar2 = (up.a) iVar.f7952d;
                LinkedHashSet O = d9.a.O(name, collection, result, this.f19482o, aVar2.f18972f, ((zq.m) aVar2.f18985u).f21397c);
                Intrinsics.checkNotNullExpressionValue(O, "resolveOverridesForStaticMembers(...)");
                h0.o(arrayList, O);
            }
            result.addAll(arrayList);
        } else {
            up.a aVar3 = (up.a) iVar.f7952d;
            LinkedHashSet O2 = d9.a.O(name, linkedHashSet, result, this.f19482o, aVar3.f18972f, ((zq.m) aVar3.f18985u).f21397c);
            Intrinsics.checkNotNullExpressionValue(O2, "resolveOverridesForStaticMembers(...)");
            result.addAll(O2);
        }
        if (this.f19481n.a.isEnum() && Intrinsics.areEqual(name, fp.p.f8907b)) {
            ir.n.b(result, m3.n.z(jVar));
        }
    }

    @Override // vp.a0
    public final Set o(rq.f kindFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        LinkedHashSet k02 = CollectionsKt.k0(((c) this.f19465e.invoke()).f());
        m mVar = m.f19506w;
        j jVar = this.f19482o;
        ir.n.g(kotlin.collections.b0.c(jVar), b0.f19471d, new c0(jVar, k02, mVar));
        if (this.f19481n.a.isEnum()) {
            k02.add(fp.p.f8907b);
        }
        return k02;
    }

    @Override // vp.a0
    public final ip.l q() {
        return this.f19482o;
    }
}
