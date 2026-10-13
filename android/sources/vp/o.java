package vp;

import ip.m0;
import ip.p0;
import java.lang.annotation.Annotation;
import java.util.AbstractCollection;
import java.util.AbstractSet;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.collections.e1;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lp.j0;
import lp.k0;
import lp.l0;
import lp.r0;
import nr.y0;
import rp.h0;
import yq.b1;
import yq.s0;
import yq.x0;
import yq.z0;

/* loaded from: classes3.dex */
public final class o extends a0 {

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ int f19511v = 0;

    /* renamed from: n, reason: collision with root package name */
    public final ip.f f19512n;

    /* renamed from: o, reason: collision with root package name */
    public final op.n f19513o;

    /* renamed from: p, reason: collision with root package name */
    public final boolean f19514p;

    /* renamed from: q, reason: collision with root package name */
    public final xq.i f19515q;

    /* renamed from: r, reason: collision with root package name */
    public final xq.i f19516r;

    /* renamed from: s, reason: collision with root package name */
    public final xq.i f19517s;

    /* renamed from: t, reason: collision with root package name */
    public final xq.i f19518t;

    /* renamed from: u, reason: collision with root package name */
    public final xq.j f19519u;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public o(e4.i c6, ip.f ownerDescriptor, op.n jClass, boolean z5, o oVar) {
        super(c6, oVar);
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(ownerDescriptor, "ownerDescriptor");
        Intrinsics.checkNotNullParameter(jClass, "jClass");
        this.f19512n = ownerDescriptor;
        this.f19513o = jClass;
        this.f19514p = z5;
        xq.o oVar2 = ((up.a) c6.f7952d).a;
        k kVar = new k(this, c6);
        xq.l lVar = (xq.l) oVar2;
        lVar.getClass();
        this.f19515q = new xq.i(lVar, kVar);
        l lVar2 = new l(this, 0);
        xq.l lVar3 = (xq.l) oVar2;
        lVar3.getClass();
        this.f19516r = new xq.i(lVar3, lVar2);
        k kVar2 = new k(c6, this);
        xq.l lVar4 = (xq.l) oVar2;
        lVar4.getClass();
        this.f19517s = new xq.i(lVar4, kVar2);
        l lVar5 = new l(this, 1);
        xq.l lVar6 = (xq.l) oVar2;
        lVar6.getClass();
        this.f19518t = new xq.i(lVar6, lVar5);
        this.f19519u = ((xq.l) oVar2).d(new kq.k(1, this, c6));
    }

    public static l0 A(l0 l0Var, ip.v vVar, AbstractCollection abstractCollection) {
        if (abstractCollection.isEmpty()) {
            return l0Var;
        }
        Iterator it = abstractCollection.iterator();
        while (it.hasNext()) {
            l0 l0Var2 = (l0) it.next();
            if (!Intrinsics.areEqual(l0Var, l0Var2) && l0Var2.Z == null && D(l0Var2, vVar)) {
                ip.v build = l0Var.m0().F().build();
                Intrinsics.checkNotNull(build);
                return (l0) build;
            }
        }
        return l0Var;
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0042  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x0046  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static l0 B(l0 l0Var) {
        hq.c cVar;
        hq.d h6;
        List P = l0Var.P();
        Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
        r0 r0Var = (r0) CollectionsKt.S(P);
        if (r0Var != null) {
            ip.i a = r0Var.getType().r0().a();
            if (a != null && (h6 = oq.e.h(a)) != null) {
                if (!h6.d()) {
                    h6 = null;
                }
                if (h6 != null) {
                    cVar = h6.g();
                    if (!Intrinsics.areEqual(cVar, fp.p.f8912g)) {
                        r0Var = null;
                    }
                    if (r0Var != null) {
                        ip.u m02 = l0Var.m0();
                        List P2 = l0Var.P();
                        Intrinsics.checkNotNullExpressionValue(P2, "getValueParameters(...)");
                        l0 l0Var2 = (l0) m02.d(CollectionsKt.G(P2)).o(((s0) r0Var.getType().l0().get(0)).b()).build();
                        if (l0Var2 != null) {
                            l0Var2.S = true;
                        }
                        return l0Var2;
                    }
                }
            }
            cVar = null;
            if (!Intrinsics.areEqual(cVar, fp.p.f8912g)) {
            }
            if (r0Var != null) {
            }
        }
        return null;
    }

    public static boolean D(ip.v vVar, ip.v vVar2) {
        kq.l b10 = kq.n.f13633c.n(vVar2, vVar, true).b();
        Intrinsics.checkNotNullExpressionValue(b10, "getResult(...)");
        return b10 == kq.l.f13626d && !tn.g.i(vVar2, vVar);
    }

    public static boolean E(l0 l0Var, l0 l0Var2) {
        int i5 = rp.c.f17430l;
        Intrinsics.checkNotNullParameter(l0Var, "<this>");
        if (Intrinsics.areEqual(l0Var.getName().b(), "removeAt") && Intrinsics.areEqual(ks.n.h(l0Var), h0.f17466g.f17446e)) {
            l0Var2 = l0Var2.a();
        }
        Intrinsics.checkNotNull(l0Var2);
        return D(l0Var2, l0Var);
    }

    public static l0 F(m0 m0Var, String str, Function1 function1) {
        l0 l0Var;
        hq.e e9 = hq.e.e(str);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        Iterator it = ((Iterable) function1.invoke(e9)).iterator();
        do {
            l0Var = null;
            if (!it.hasNext()) {
                break;
            }
            l0 l0Var2 = (l0) it.next();
            if (l0Var2.P().size() == 0) {
                zq.m mVar = zq.d.a;
                yq.y yVar = l0Var2.E;
                if (yVar == null ? false : mVar.b(yVar, m0Var.getType())) {
                    l0Var = l0Var2;
                }
            }
        } while (l0Var == null);
        return l0Var;
    }

    public static l0 H(m0 m0Var, Function1 function1) {
        l0 l0Var;
        yq.y yVar;
        String b10 = m0Var.getName().b();
        Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
        hq.e e9 = hq.e.e(rp.x.b(b10));
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        Iterator it = ((Iterable) function1.invoke(e9)).iterator();
        do {
            l0Var = null;
            if (!it.hasNext()) {
                break;
            }
            l0 l0Var2 = (l0) it.next();
            if (l0Var2.P().size() == 1 && (yVar = l0Var2.E) != null) {
                hq.e eVar = fp.i.f8859e;
                if (fp.i.E(yVar, fp.o.f8882d)) {
                    zq.m mVar = zq.d.a;
                    List P = l0Var2.P();
                    Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                    if (mVar.a(((r0) CollectionsKt.Z(P)).getType(), m0Var.getType())) {
                        l0Var = l0Var2;
                    }
                }
            }
        } while (l0Var == null);
        return l0Var;
    }

    public static boolean K(l0 l0Var, ip.v vVar) {
        String g6 = ks.n.g(l0Var, 2);
        ip.v a = vVar.a();
        Intrinsics.checkNotNullExpressionValue(a, "getOriginal(...)");
        return Intrinsics.areEqual(g6, ks.n.g(a, 2)) && !D(l0Var, vVar);
    }

    public final boolean C(m0 m0Var, Function1 function1) {
        if (android.support.v4.media.session.b.r(m0Var)) {
            return false;
        }
        l0 G = G(m0Var, function1);
        l0 H = H(m0Var, function1);
        if (G == null) {
            return false;
        }
        if (m0Var.V()) {
            return H != null && H.e() == G.e();
        }
        return true;
    }

    /* JADX WARN: Type inference failed for: r3v1, types: [java.lang.Object, java.util.Map] */
    public final l0 G(m0 m0Var, Function1 function1) {
        hq.e eVar;
        j0 getter = m0Var.getGetter();
        String str = null;
        j0 j0Var = getter != null ? (j0) ys.d.M(getter) : null;
        if (j0Var != null) {
            Intrinsics.checkNotNullParameter(j0Var, "<this>");
            fp.i.A(j0Var);
            ip.d b10 = oq.e.b(oq.e.k(j0Var), rp.d.f17438v);
            if (b10 != null && (eVar = (hq.e) rp.f.a.get(oq.e.g(b10))) != null) {
                str = eVar.b();
            }
        }
        if (str != null && !ys.d.P(this.f19512n, j0Var)) {
            return F(m0Var, str, function1);
        }
        String b11 = m0Var.getName().b();
        Intrinsics.checkNotNullExpressionValue(b11, "asString(...)");
        return F(m0Var, rp.x.a(b11), function1);
    }

    public final LinkedHashSet I(hq.e eVar) {
        Collection z5 = z();
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        Iterator it = z5.iterator();
        while (it.hasNext()) {
            kotlin.collections.h0.o(linkedHashSet, ((yq.y) it.next()).N().f(eVar, qp.c.f16941w));
        }
        return linkedHashSet;
    }

    public final Set J(hq.e eVar) {
        Collection z5 = z();
        ArrayList arrayList = new ArrayList();
        Iterator it = z5.iterator();
        while (it.hasNext()) {
            Collection c6 = ((yq.y) it.next()).N().c(eVar, qp.c.f16941w);
            ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(c6, 10));
            Iterator it2 = c6.iterator();
            while (it2.hasNext()) {
                arrayList2.add((m0) it2.next());
            }
            kotlin.collections.h0.o(arrayList, arrayList2);
        }
        return CollectionsKt.l0(arrayList);
    }

    public final boolean L(l0 l0Var) {
        Collection h6;
        hq.e methodName = l0Var.getName();
        Intrinsics.checkNotNullExpressionValue(methodName, "getName(...)");
        Intrinsics.checkNotNullParameter(methodName, "name");
        String name = methodName.b();
        Intrinsics.checkNotNullExpressionValue(name, "asString(...)");
        hq.c cVar = rp.x.a;
        Intrinsics.checkNotNullParameter(name, "name");
        if (kotlin.text.x.o(name, "get", false) || kotlin.text.x.o(name, "is", false)) {
            Intrinsics.checkNotNullParameter(methodName, "methodName");
            hq.e v5 = w3.q.v(methodName, "get", null, 12);
            if (v5 == null) {
                v5 = w3.q.v(methodName, "is", null, 8);
            }
            h6 = kotlin.collections.c0.h(v5);
        } else {
            Intrinsics.checkNotNullParameter(name, "name");
            if (kotlin.text.x.o(name, "set", false)) {
                Intrinsics.checkNotNullParameter(methodName, "methodName");
                Intrinsics.checkNotNullParameter(methodName, "methodName");
                hq.e v6 = w3.q.v(methodName, "set", null, 4);
                Intrinsics.checkNotNullParameter(methodName, "methodName");
                hq.e[] elements = {v6, w3.q.v(methodName, "set", "is", 4)};
                Intrinsics.checkNotNullParameter(elements, "elements");
                h6 = kotlin.collections.x.r(elements);
            } else {
                Object obj = rp.f.a;
                Intrinsics.checkNotNullParameter(methodName, "name1");
                h6 = (List) rp.f.f17452b.get(methodName);
                if (h6 == null) {
                    h6 = kotlin.collections.m0.f13512d;
                }
            }
        }
        if (h6 == null || !h6.isEmpty()) {
            Iterator it = h6.iterator();
            loop5: while (it.hasNext()) {
                Set<m0> J = J((hq.e) it.next());
                if (!(J instanceof Collection) || !J.isEmpty()) {
                    for (m0 m0Var : J) {
                        if (C(m0Var, new kq.k(2, l0Var, this))) {
                            if (m0Var.V()) {
                                break loop5;
                            }
                            String name2 = l0Var.getName().b();
                            Intrinsics.checkNotNullExpressionValue(name2, "asString(...)");
                            Intrinsics.checkNotNullParameter(name2, "name");
                            if (!kotlin.text.x.o(name2, "set", false)) {
                                break loop5;
                            }
                        }
                    }
                }
            }
        }
        ArrayList arrayList = h0.a;
        hq.e name3 = l0Var.getName();
        Intrinsics.checkNotNullExpressionValue(name3, "getName(...)");
        Intrinsics.checkNotNullParameter(name3, "name");
        hq.e eVar = (hq.e) h0.k.get(name3);
        if (eVar != null) {
            LinkedHashSet I = I(eVar);
            ArrayList arrayList2 = new ArrayList();
            for (Object obj2 : I) {
                l0 l0Var2 = (l0) obj2;
                Intrinsics.checkNotNullParameter(l0Var2, "<this>");
                if (ys.d.M(l0Var2) != null) {
                    arrayList2.add(obj2);
                }
            }
            if (!arrayList2.isEmpty()) {
                ip.u m02 = l0Var.m0();
                m02.f(eVar);
                m02.L();
                m02.i();
                ip.v build = m02.build();
                Intrinsics.checkNotNull(build);
                l0 l0Var3 = (l0) build;
                if (!arrayList2.isEmpty()) {
                    Iterator it2 = arrayList2.iterator();
                    while (it2.hasNext()) {
                        if (E((l0) it2.next(), l0Var3)) {
                            break;
                        }
                    }
                }
            }
        }
        int i5 = rp.e.f17447l;
        hq.e name4 = l0Var.getName();
        Intrinsics.checkNotNullExpressionValue(name4, "getName(...)");
        if (rp.e.b(name4)) {
            hq.e name5 = l0Var.getName();
            Intrinsics.checkNotNullExpressionValue(name5, "getName(...)");
            LinkedHashSet I2 = I(name5);
            ArrayList arrayList3 = new ArrayList();
            Iterator it3 = I2.iterator();
            while (it3.hasNext()) {
                ip.v a = rp.e.a((l0) it3.next());
                if (a != null) {
                    arrayList3.add(a);
                }
            }
            if (!arrayList3.isEmpty()) {
                Iterator it4 = arrayList3.iterator();
                while (it4.hasNext()) {
                    if (K(l0Var, (ip.v) it4.next())) {
                        break;
                    }
                }
            }
        }
        l0 B = B(l0Var);
        if (B == null) {
            return true;
        }
        hq.e name6 = l0Var.getName();
        Intrinsics.checkNotNullExpressionValue(name6, "getName(...)");
        LinkedHashSet<l0> I3 = I(name6);
        if (I3.isEmpty()) {
            return true;
        }
        for (l0 l0Var4 : I3) {
            if (l0Var4.isSuspend() && D(B, l0Var4)) {
                return false;
            }
        }
        return true;
    }

    public final void M(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        ys.d.Z(((up.a) this.f19462b.f7952d).f18978n, location, this.f19512n, name);
    }

    public final ArrayList N(hq.e eVar) {
        Collection d6 = ((c) this.f19465e.invoke()).d(eVar);
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(d6, 10));
        Iterator it = d6.iterator();
        while (it.hasNext()) {
            arrayList.add(t((op.w) it.next()));
        }
        return arrayList;
    }

    public final ArrayList O(hq.e eVar) {
        LinkedHashSet I = I(eVar);
        ArrayList arrayList = new ArrayList();
        for (Object obj : I) {
            l0 l0Var = (l0) obj;
            Intrinsics.checkNotNullParameter(l0Var, "<this>");
            if (ys.d.M(l0Var) == null && rp.e.a(l0Var) == null) {
                arrayList.add(obj);
            }
        }
        return arrayList;
    }

    @Override // rq.p, rq.q
    public final ip.i a(hq.e name, qp.a location) {
        xq.j jVar;
        ip.f fVar;
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        M(name, location);
        o oVar = (o) this.f19463c;
        return (oVar == null || (jVar = oVar.f19519u) == null || (fVar = (ip.f) jVar.invoke(name)) == null) ? (ip.i) this.f19519u.invoke(name) : fVar;
    }

    @Override // vp.a0, rq.p, rq.o
    public final Collection c(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        M(name, location);
        return super.c(name, location);
    }

    @Override // vp.a0, rq.p, rq.o
    public final Collection f(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        M(name, location);
        return super.f(name, location);
    }

    @Override // vp.a0
    public final Set h(rq.f kindFilter, Function1 function1) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        return e1.d((Set) this.f19516r.invoke(), ((Map) this.f19518t.invoke()).keySet());
    }

    @Override // vp.a0
    public final Set i(rq.f kindFilter, rq.l lVar) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        ip.f fVar = this.f19512n;
        Collection b10 = fVar.n().b();
        Intrinsics.checkNotNullExpressionValue(b10, "getSupertypes(...)");
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        Iterator it = b10.iterator();
        while (it.hasNext()) {
            kotlin.collections.h0.o(linkedHashSet, ((yq.y) it.next()).N().b());
        }
        xq.i iVar = this.f19465e;
        linkedHashSet.addAll(((c) iVar.invoke()).a());
        linkedHashSet.addAll(((c) iVar.invoke()).e());
        linkedHashSet.addAll(h(kindFilter, lVar));
        e4.i iVar2 = this.f19462b;
        linkedHashSet.addAll(((pq.a) ((up.a) iVar2.f7952d).f18988x).e(fVar, iVar2));
        return linkedHashSet;
    }

    @Override // vp.a0
    public final void j(hq.e name, ArrayList result) {
        Intrinsics.checkNotNullParameter(result, "result");
        Intrinsics.checkNotNullParameter(name, "name");
        boolean g6 = this.f19513o.g();
        ip.f fVar = this.f19512n;
        e4.i iVar = this.f19462b;
        if (g6) {
            xq.i iVar2 = this.f19465e;
            if (((c) iVar2.invoke()).c(name) != null) {
                if (!result.isEmpty()) {
                    Iterator it = result.iterator();
                    while (it.hasNext()) {
                        if (((l0) it.next()).P().isEmpty()) {
                            break;
                        }
                    }
                }
                op.z c6 = ((c) iVar2.invoke()).c(name);
                Intrinsics.checkNotNull(c6);
                up.c y5 = nf.e.y(iVar, c6);
                up.a aVar = (up.a) iVar.f7952d;
                tp.e Q0 = tp.e.Q0(fVar, y5, c6.c(), aVar.j.b(c6), true);
                Intrinsics.checkNotNullExpressionValue(Q0, "createJavaMethod(...)");
                yq.y O = ((k2.r) iVar.f7955v).O(c6.f(), nf.e.D(x0.f21081e, false, null, 6));
                lp.u p3 = p();
                kotlin.collections.m0 m0Var = kotlin.collections.m0.f13512d;
                ip.z.f12179d.getClass();
                Q0.P0(null, p3, m0Var, m0Var, m0Var, O, ip.z.f12182v, ip.q.f12159e, null);
                Q0.f18690b0 = 1;
                aVar.f18973g.getClass();
                result.add(Q0);
            }
        }
        ((pq.a) ((up.a) iVar.f7952d).f18988x).b(fVar, name, result, iVar);
    }

    @Override // vp.a0
    public final c k() {
        return new a(this.f19513o, m.f19503e);
    }

    @Override // vp.a0
    public final void m(LinkedHashSet result, hq.e name) {
        Intrinsics.checkNotNullParameter(result, "result");
        Intrinsics.checkNotNullParameter(name, "name");
        LinkedHashSet I = I(name);
        ArrayList arrayList = h0.a;
        Intrinsics.checkNotNullParameter(name, "<this>");
        if (!h0.j.contains(name) && !rp.e.b(name)) {
            if (!I.isEmpty()) {
                Iterator it = I.iterator();
                while (it.hasNext()) {
                    if (((ip.v) it.next()).isSuspend()) {
                    }
                }
            }
            ArrayList arrayList2 = new ArrayList();
            for (Object obj : I) {
                if (L((l0) obj)) {
                    arrayList2.add(obj);
                }
            }
            w(result, name, arrayList2, false);
            return;
        }
        int i5 = ir.k.f12269i;
        ir.k f2 = ir.n.f();
        LinkedHashSet N = d9.a.N(name, I, kotlin.collections.m0.f13512d, this.f19512n, uq.m.a, ((zq.m) ((up.a) this.f19462b.f7952d).f18985u).f21397c);
        Intrinsics.checkNotNullExpressionValue(N, "resolveOverridesForNonStaticMembers(...)");
        x(name, result, N, result, new y0(1, this, o.class, "searchMethodsByNameWithoutBuiltinMagic", "searchMethodsByNameWithoutBuiltinMagic(Lorg/jetbrains/kotlin/name/Name;)Ljava/util/Collection;", 0, 1));
        x(name, result, N, f2, new y0(1, this, o.class, "searchMethodsInSupertypesWithoutBuiltinMagic", "searchMethodsInSupertypesWithoutBuiltinMagic(Lorg/jetbrains/kotlin/name/Name;)Ljava/util/Collection;", 0, 2));
        ArrayList arrayList3 = new ArrayList();
        for (Object obj2 : I) {
            if (L((l0) obj2)) {
                arrayList3.add(obj2);
            }
        }
        w(result, name, CollectionsKt.V(arrayList3, f2), true);
    }

    /* JADX WARN: Type inference failed for: r8v6, types: [java.lang.Object, kotlin.Lazy] */
    @Override // vp.a0
    public final void n(hq.e name, ArrayList result) {
        op.w typeParameterOwner;
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(result, "result");
        boolean isAnnotation = this.f19513o.a.isAnnotation();
        e4.i iVar = this.f19462b;
        if (isAnnotation && (typeParameterOwner = (op.w) CollectionsKt.a0(((c) this.f19465e.invoke()).d(name))) != null) {
            p0 p0Var = ip.z.f12179d;
            tp.f containingDeclaration = tp.f.J0(this.f19512n, nf.e.y(iVar, typeParameterOwner), ys.l.y(typeParameterOwner.e()), false, typeParameterOwner.c(), ((up.a) iVar.f7952d).j.b(typeParameterOwner), false);
            Intrinsics.checkNotNullExpressionValue(containingDeclaration, "create(...)");
            j0 x5 = m3.n.x(containingDeclaration, jp.g.a);
            Intrinsics.checkNotNullExpressionValue(x5, "createDefaultGetter(...)");
            containingDeclaration.F0(x5, null, null, null);
            Intrinsics.checkNotNullParameter(iVar, "<this>");
            Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
            Intrinsics.checkNotNullParameter(typeParameterOwner, "typeParameterOwner");
            yq.y l6 = a0.l(typeParameterOwner, new e4.i((up.a) iVar.f7952d, new ad.d0(iVar, containingDeclaration, typeParameterOwner, 0), iVar.f7954i));
            kotlin.collections.m0 m0Var = kotlin.collections.m0.f13512d;
            containingDeclaration.I0(l6, m0Var, p(), null, m0Var);
            x5.K = l6;
            result.add(containingDeclaration);
        }
        Set J = J(name);
        if (J.isEmpty()) {
            return;
        }
        int i5 = ir.k.f12269i;
        ir.k f2 = ir.n.f();
        ir.k f10 = ir.n.f();
        y(J, result, f2, new n(this, 0));
        y(e1.c(J, f2), f10, null, new n(this, 1));
        LinkedHashSet d6 = e1.d(J, f10);
        up.a aVar = (up.a) iVar.f7952d;
        LinkedHashSet N = d9.a.N(name, d6, result, this.f19512n, aVar.f18972f, ((zq.m) aVar.f18985u).f21397c);
        Intrinsics.checkNotNullExpressionValue(N, "resolveOverridesForNonStaticMembers(...)");
        result.addAll(N);
    }

    @Override // vp.a0
    public final Set o(rq.f kindFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        if (this.f19513o.a.isAnnotation()) {
            return b();
        }
        LinkedHashSet linkedHashSet = new LinkedHashSet(((c) this.f19465e.invoke()).f());
        Collection b10 = this.f19512n.n().b();
        Intrinsics.checkNotNullExpressionValue(b10, "getSupertypes(...)");
        Iterator it = b10.iterator();
        while (it.hasNext()) {
            kotlin.collections.h0.o(linkedHashSet, ((yq.y) it.next()).N().g());
        }
        return linkedHashSet;
    }

    @Override // vp.a0
    public final lp.u p() {
        ip.f fVar = this.f19512n;
        if (fVar != null) {
            int i5 = kq.e.a;
            return fVar.u0();
        }
        kq.e.a(0);
        throw null;
    }

    @Override // vp.a0
    public final ip.l q() {
        return this.f19512n;
    }

    @Override // vp.a0
    public final boolean r(tp.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        if (this.f19513o.a.isAnnotation()) {
            return false;
        }
        return L(eVar);
    }

    @Override // vp.a0
    public final z s(op.w method, ArrayList methodTypeParameters, yq.y returnType, List valueParameters) {
        Intrinsics.checkNotNullParameter(method, "method");
        Intrinsics.checkNotNullParameter(methodTypeParameters, "methodTypeParameters");
        Intrinsics.checkNotNullParameter(returnType, "returnType");
        Intrinsics.checkNotNullParameter(valueParameters, "valueParameters");
        ((up.a) this.f19462b.f7952d).f18971e.getClass();
        if (method == null) {
            sp.h.a(0);
            throw null;
        }
        if (this.f19512n == null) {
            sp.h.a(1);
            throw null;
        }
        if (returnType == null) {
            sp.h.a(2);
            throw null;
        }
        if (valueParameters == null) {
            sp.h.a(3);
            throw null;
        }
        List list = Collections.EMPTY_LIST;
        Intrinsics.checkNotNullExpressionValue(new e4.l(returnType, valueParameters, methodTypeParameters), "resolvePropagatedSignature(...)");
        Intrinsics.checkNotNullExpressionValue(returnType, "getReturnType(...)");
        Intrinsics.checkNotNullExpressionValue(valueParameters, "getValueParameters(...)");
        Intrinsics.checkNotNullExpressionValue(methodTypeParameters, "getTypeParameters(...)");
        if (list != null) {
            Intrinsics.checkNotNullExpressionValue(list, "getErrors(...)");
            return new z(returnType, valueParameters, methodTypeParameters, list);
        }
        e4.l.m(7);
        throw null;
    }

    @Override // vp.a0
    public final String toString() {
        return "Lazy Java member scope for " + this.f19513o.c();
    }

    public final void v(ArrayList arrayList, tp.b bVar, int i5, op.w wVar, yq.y yVar, yq.y yVar2) {
        yp.a aVar;
        hq.e c6 = wVar.c();
        if (yVar == null) {
            z0.a(2);
            throw null;
        }
        b1 g6 = z0.g(yVar, false);
        Intrinsics.checkNotNullExpressionValue(g6, "makeNotNullable(...)");
        Object value = wVar.a.getDefaultValue();
        if (value != null) {
            Intrinsics.checkNotNullParameter(value, "value");
            aVar = op.c.e(value.getClass()) ? new op.s(null, (Enum) value) : value instanceof Annotation ? new op.f(null, (Annotation) value) : value instanceof Object[] ? new op.g(null, (Object[]) value) : value instanceof Class ? new op.o(null, (Class) value) : new op.u(null, value);
        } else {
            aVar = null;
        }
        arrayList.add(new r0(bVar, null, i5, jp.g.a, c6, g6, aVar != null, false, false, yVar2 != null ? z0.g(yVar2, false) : null, ((up.a) this.f19462b.f7952d).j.b(wVar)));
    }

    public final void w(LinkedHashSet linkedHashSet, hq.e eVar, ArrayList arrayList, boolean z5) {
        up.a aVar = (up.a) this.f19462b.f7952d;
        LinkedHashSet<l0> N = d9.a.N(eVar, arrayList, linkedHashSet, this.f19512n, aVar.f18972f, ((zq.m) aVar.f18985u).f21397c);
        Intrinsics.checkNotNullExpressionValue(N, "resolveOverridesForNonStaticMembers(...)");
        if (!z5) {
            linkedHashSet.addAll(N);
            return;
        }
        ArrayList V = CollectionsKt.V(linkedHashSet, N);
        ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(N, 10));
        for (l0 l0Var : N) {
            l0 l0Var2 = (l0) ys.d.N(l0Var);
            if (l0Var2 == null) {
                Intrinsics.checkNotNull(l0Var);
            } else {
                Intrinsics.checkNotNull(l0Var);
                l0Var = A(l0Var, l0Var2, V);
            }
            arrayList2.add(l0Var);
        }
        linkedHashSet.addAll(arrayList2);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:12:0x0107  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0135 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void x(hq.e eVar, LinkedHashSet linkedHashSet, LinkedHashSet linkedHashSet2, AbstractSet abstractSet, Function1 function1) {
        l0 A;
        Object obj;
        l0 l0Var;
        l0 A2;
        Iterator it = linkedHashSet2.iterator();
        while (it.hasNext()) {
            l0 l0Var2 = (l0) it.next();
            l0 l0Var3 = (l0) ys.d.M(l0Var2);
            l0 l0Var4 = null;
            if (l0Var3 != null) {
                String L = ys.d.L(l0Var3);
                Intrinsics.checkNotNull(L);
                hq.e e9 = hq.e.e(L);
                Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
                Iterator it2 = ((Collection) function1.invoke(e9)).iterator();
                while (it2.hasNext()) {
                    ip.u m02 = ((l0) it2.next()).m0();
                    m02.f(eVar);
                    m02.L();
                    m02.i();
                    ip.v build = m02.build();
                    Intrinsics.checkNotNull(build);
                    l0 l0Var5 = (l0) build;
                    if (E(l0Var3, l0Var5)) {
                        A = A(l0Var5, l0Var3, linkedHashSet);
                        break;
                    }
                }
            }
            A = null;
            ir.n.b(abstractSet, A);
            ip.v a = rp.e.a(l0Var2);
            if (a != 0) {
                hq.e name = ((lp.l) a).getName();
                Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
                Iterator it3 = ((Iterable) function1.invoke(name)).iterator();
                while (true) {
                    if (!it3.hasNext()) {
                        obj = null;
                        break;
                    } else {
                        obj = it3.next();
                        if (K((l0) obj, a)) {
                            break;
                        }
                    }
                }
                l0 l0Var6 = (l0) obj;
                if (l0Var6 != null) {
                    ip.u m03 = l0Var6.m0();
                    List P = a.P();
                    Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                    ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(P, 10));
                    Iterator it4 = P.iterator();
                    while (it4.hasNext()) {
                        arrayList.add(((r0) it4.next()).getType());
                    }
                    List P2 = l0Var6.P();
                    Intrinsics.checkNotNullExpressionValue(P2, "getValueParameters(...)");
                    m03.d(ki.b.g(arrayList, P2, a));
                    m03.L();
                    m03.i();
                    m03.r();
                    l0Var = (l0) m03.build();
                } else {
                    l0Var = null;
                }
                if (l0Var != null) {
                    if (!L(l0Var)) {
                        l0Var = null;
                    }
                    if (l0Var != null) {
                        A2 = A(l0Var, a, linkedHashSet);
                        ir.n.b(abstractSet, A2);
                        if (!l0Var2.isSuspend()) {
                            hq.e name2 = l0Var2.getName();
                            Intrinsics.checkNotNullExpressionValue(name2, "getName(...)");
                            Iterator it5 = ((Iterable) function1.invoke(name2)).iterator();
                            while (true) {
                                if (!it5.hasNext()) {
                                    break;
                                }
                                l0 B = B((l0) it5.next());
                                if (B == null || !D(B, l0Var2)) {
                                    B = null;
                                }
                                if (B != null) {
                                    l0Var4 = B;
                                    break;
                                }
                            }
                        }
                        ir.n.b(abstractSet, l0Var4);
                    }
                }
            }
            A2 = null;
            ir.n.b(abstractSet, A2);
            if (!l0Var2.isSuspend()) {
            }
            ir.n.b(abstractSet, l0Var4);
        }
    }

    public final void y(Set set, AbstractCollection abstractCollection, ir.k kVar, Function1 function1) {
        l0 l0Var;
        k0 k0Var;
        tp.d dVar;
        Iterator it = set.iterator();
        while (it.hasNext()) {
            m0 overriddenProperty = (m0) it.next();
            if (C(overriddenProperty, function1)) {
                l0 getterMethod = G(overriddenProperty, function1);
                Intrinsics.checkNotNull(getterMethod);
                if (overriddenProperty.V()) {
                    l0Var = H(overriddenProperty, function1);
                    Intrinsics.checkNotNull(l0Var);
                } else {
                    l0Var = null;
                }
                if (l0Var != null) {
                    l0Var.e();
                    getterMethod.e();
                }
                ip.f ownerDescriptor = this.f19512n;
                Intrinsics.checkNotNullParameter(ownerDescriptor, "ownerDescriptor");
                Intrinsics.checkNotNullParameter(getterMethod, "getterMethod");
                Intrinsics.checkNotNullParameter(overriddenProperty, "overriddenProperty");
                tp.d dVar2 = new tp.d(ownerDescriptor, jp.g.a, getterMethod.e(), getterMethod.getVisibility(), l0Var != null, overriddenProperty.getName(), getterMethod.d(), null, ip.c.f12123d, false, null);
                yq.y yVar = getterMethod.E;
                Intrinsics.checkNotNull(yVar);
                kotlin.collections.m0 m0Var = kotlin.collections.m0.f13512d;
                dVar2.I0(yVar, m0Var, p(), null, m0Var);
                j0 E = m3.n.E(dVar2, getterMethod.getAnnotations(), false, getterMethod.d());
                E.J = getterMethod;
                E.E0(dVar2.getType());
                Intrinsics.checkNotNullExpressionValue(E, "apply(...)");
                if (l0Var != null) {
                    List P = l0Var.P();
                    Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                    r0 r0Var = (r0) CollectionsKt.firstOrNull(P);
                    if (r0Var == null) {
                        throw new AssertionError("No parameter found for " + l0Var);
                    }
                    k0Var = m3.n.F(dVar2, l0Var.getAnnotations(), r0Var.getAnnotations(), false, l0Var.getVisibility(), l0Var.d());
                    k0Var.J = l0Var;
                } else {
                    k0Var = null;
                }
                dVar2.F0(E, k0Var, null, null);
                dVar = dVar2;
            } else {
                dVar = null;
            }
            if (dVar != null) {
                abstractCollection.add(dVar);
                if (kVar != null) {
                    kVar.add(overriddenProperty);
                    return;
                }
                return;
            }
        }
    }

    public final Collection z() {
        boolean z5 = this.f19514p;
        ip.f classDescriptor = this.f19512n;
        if (z5) {
            Collection b10 = classDescriptor.n().b();
            Intrinsics.checkNotNullExpressionValue(b10, "getSupertypes(...)");
            return b10;
        }
        ((zq.m) ((up.a) this.f19462b.f7952d).f18985u).getClass();
        Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
        Collection b11 = classDescriptor.n().b();
        Intrinsics.checkNotNullExpressionValue(b11, "getSupertypes(...)");
        return b11;
    }
}
