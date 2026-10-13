package wq;

import cp.d0;
import ip.r0;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Set;
import kotlin.collections.g0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public abstract class p extends rq.p {

    /* renamed from: f, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f20027f = {com.discord.chat.bridge.botuikit.a.o(p.class, "classNames", "getClassNames$deserialization()Ljava/util/Set;", 0), com.discord.chat.bridge.botuikit.a.o(p.class, "classifierNamesLazy", "getClassifierNamesLazy()Ljava/util/Set;", 0)};

    /* renamed from: b, reason: collision with root package name */
    public final cc.k f20028b;

    /* renamed from: c, reason: collision with root package name */
    public final o f20029c;

    /* renamed from: d, reason: collision with root package name */
    public final xq.i f20030d;

    /* renamed from: e, reason: collision with root package name */
    public final xq.h f20031e;

    public p(cc.k c6, List functionList, List propertyList, List typeAliasList, Function0 classNames) {
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(functionList, "functionList");
        Intrinsics.checkNotNullParameter(propertyList, "propertyList");
        Intrinsics.checkNotNullParameter(typeAliasList, "typeAliasList");
        Intrinsics.checkNotNullParameter(classNames, "classNames");
        this.f20028b = c6;
        ((uq.j) c6.f3398e).f19017c.getClass();
        this.f20029c = new o(this, functionList, propertyList, typeAliasList);
        uq.j jVar = (uq.j) c6.f3398e;
        xq.l lVar = jVar.a;
        rq.j jVar2 = new rq.j(1, classNames);
        lVar.getClass();
        this.f20030d = new xq.i(lVar, jVar2);
        xq.l lVar2 = jVar.a;
        d0 d0Var = new d0(25, this);
        lVar2.getClass();
        this.f20031e = new xq.h(lVar2, d0Var);
    }

    @Override // rq.p, rq.q
    public ip.i a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        if (q(name)) {
            return ((uq.j) this.f20028b.f3398e).b(l(name));
        }
        o oVar = this.f20029c;
        if (!oVar.f20020c.keySet().contains(name)) {
            return null;
        }
        oVar.getClass();
        Intrinsics.checkNotNullParameter(name, "name");
        return (r0) oVar.f20023f.invoke(name);
    }

    @Override // rq.p, rq.o
    public final Set b() {
        return (Set) ys.d.O(this.f20029c.f20024g, o.j[0]);
    }

    @Override // rq.p, rq.o
    public Collection c(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return this.f20029c.b(name, location);
    }

    @Override // rq.p, rq.o
    public final Set d() {
        KProperty p3 = f20027f[1];
        xq.h hVar = this.f20031e;
        Intrinsics.checkNotNullParameter(hVar, "<this>");
        Intrinsics.checkNotNullParameter(p3, "p");
        return (Set) hVar.invoke();
    }

    @Override // rq.p, rq.o
    public Collection f(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return this.f20029c.a(name, location);
    }

    @Override // rq.p, rq.o
    public final Set g() {
        return (Set) ys.d.O(this.f20029c.f20025h, o.j[1]);
    }

    public abstract void h(ArrayList arrayList, Function1 function1);

    public final List i(rq.f kindFilter, Function1 nameFilter) {
        qp.c location = qp.c.f16940v;
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        Intrinsics.checkNotNullParameter(location, "location");
        ArrayList result = new ArrayList(0);
        if (kindFilter.a(rq.f.f17529f)) {
            h(result, nameFilter);
        }
        o oVar = this.f20029c;
        oVar.getClass();
        Intrinsics.checkNotNullParameter(result, "result");
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        Intrinsics.checkNotNullParameter(location, "location");
        boolean a = kindFilter.a(rq.f.j);
        kq.h INSTANCE = kq.h.f13618e;
        if (a) {
            Set<hq.e> set = (Set) ys.d.O(oVar.f20025h, o.j[1]);
            ArrayList arrayList = new ArrayList();
            for (hq.e eVar : set) {
                if (((Boolean) nameFilter.invoke(eVar)).booleanValue()) {
                    arrayList.addAll(oVar.b(eVar, location));
                }
            }
            Intrinsics.checkNotNullExpressionValue(INSTANCE, "INSTANCE");
            g0.n(arrayList, INSTANCE);
            result.addAll(arrayList);
        }
        if (kindFilter.a(rq.f.f17532i)) {
            Set<hq.e> set2 = (Set) ys.d.O(oVar.f20024g, o.j[0]);
            ArrayList arrayList2 = new ArrayList();
            for (hq.e eVar2 : set2) {
                if (((Boolean) nameFilter.invoke(eVar2)).booleanValue()) {
                    arrayList2.addAll(oVar.a(eVar2, location));
                }
            }
            Intrinsics.checkNotNullExpressionValue(INSTANCE, "INSTANCE");
            g0.n(arrayList2, INSTANCE);
            result.addAll(arrayList2);
        }
        if (kindFilter.a(rq.f.f17533l)) {
            for (hq.e eVar3 : m()) {
                if (((Boolean) nameFilter.invoke(eVar3)).booleanValue()) {
                    ir.n.b(result, ((uq.j) this.f20028b.f3398e).b(l(eVar3)));
                }
            }
        }
        if (kindFilter.a(rq.f.f17530g)) {
            for (Object name : oVar.f20020c.keySet()) {
                if (((Boolean) nameFilter.invoke(name)).booleanValue()) {
                    oVar.getClass();
                    Intrinsics.checkNotNullParameter(name, "name");
                    ir.n.b(result, (r0) oVar.f20023f.invoke(name));
                }
            }
        }
        return ir.n.e(result);
    }

    public void j(hq.e name, ArrayList functions) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(functions, "functions");
    }

    public void k(hq.e name, ArrayList descriptors) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(descriptors, "descriptors");
    }

    public abstract hq.b l(hq.e eVar);

    public final Set m() {
        return (Set) ys.d.O(this.f20030d, f20027f[0]);
    }

    public abstract Set n();

    public abstract Set o();

    public abstract Set p();

    public boolean q(hq.e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return m().contains(name);
    }

    public boolean r(s function) {
        Intrinsics.checkNotNullParameter(function, "function");
        return true;
    }
}
