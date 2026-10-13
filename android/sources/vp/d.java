package vp;

import java.util.Collection;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;
import kotlin.collections.h0;
import kotlin.collections.m0;
import kotlin.collections.o0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class d implements rq.o {

    /* renamed from: f, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f19475f = {com.discord.chat.bridge.botuikit.a.o(d.class, "kotlinScopes", "getKotlinScopes()[Lorg/jetbrains/kotlin/resolve/scopes/MemberScope;", 0)};

    /* renamed from: b, reason: collision with root package name */
    public final e4.i f19476b;

    /* renamed from: c, reason: collision with root package name */
    public final q f19477c;

    /* renamed from: d, reason: collision with root package name */
    public final v f19478d;

    /* renamed from: e, reason: collision with root package name */
    public final xq.i f19479e;

    public d(e4.i c6, op.x jPackage, q packageFragment) {
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(jPackage, "jPackage");
        Intrinsics.checkNotNullParameter(packageFragment, "packageFragment");
        this.f19476b = c6;
        this.f19477c = packageFragment;
        this.f19478d = new v(c6, jPackage, packageFragment);
        xq.o oVar = ((up.a) c6.f7952d).a;
        cp.d0 d0Var = new cp.d0(23, this);
        xq.l lVar = (xq.l) oVar;
        lVar.getClass();
        this.f19479e = new xq.i(lVar, d0Var);
    }

    @Override // rq.q
    public final ip.i a(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        i(name, location);
        v vVar = this.f19478d;
        vVar.getClass();
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        ip.i iVar = null;
        ip.f v5 = vVar.v(name, null);
        if (v5 != null) {
            return v5;
        }
        for (rq.o oVar : h()) {
            ip.i a = oVar.a(name, location);
            if (a != null) {
                if (!(a instanceof ip.j) || !((ip.y) a).z()) {
                    return a;
                }
                if (iVar == null) {
                    iVar = a;
                }
            }
        }
        return iVar;
    }

    @Override // rq.o
    public final Set b() {
        rq.o[] h6 = h();
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        for (rq.o oVar : h6) {
            h0.o(linkedHashSet, oVar.b());
        }
        linkedHashSet.addAll(this.f19478d.b());
        return linkedHashSet;
    }

    @Override // rq.o
    public final Collection c(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        i(name, location);
        rq.o[] h6 = h();
        Collection c6 = this.f19478d.c(name, location);
        for (rq.o oVar : h6) {
            c6 = ys.l.e(c6, oVar.c(name, location));
        }
        return c6 == null ? o0.f13515d : c6;
    }

    @Override // rq.o
    public final Set d() {
        rq.o[] h6 = h();
        Intrinsics.checkNotNullParameter(h6, "<this>");
        HashSet u5 = zo.c0.u(h6.length == 0 ? m0.f13512d : new kotlin.collections.v(0, h6));
        if (u5 == null) {
            return null;
        }
        u5.addAll(this.f19478d.d());
        return u5;
    }

    @Override // rq.q
    public final Collection e(rq.f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        rq.o[] h6 = h();
        Collection e9 = this.f19478d.e(kindFilter, nameFilter);
        for (rq.o oVar : h6) {
            e9 = ys.l.e(e9, oVar.e(kindFilter, nameFilter));
        }
        return e9 == null ? o0.f13515d : e9;
    }

    @Override // rq.o
    public final Collection f(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        i(name, location);
        rq.o[] h6 = h();
        Collection f2 = this.f19478d.f(name, location);
        for (rq.o oVar : h6) {
            f2 = ys.l.e(f2, oVar.f(name, location));
        }
        return f2 == null ? o0.f13515d : f2;
    }

    @Override // rq.o
    public final Set g() {
        rq.o[] h6 = h();
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        for (rq.o oVar : h6) {
            h0.o(linkedHashSet, oVar.g());
        }
        linkedHashSet.addAll(this.f19478d.g());
        return linkedHashSet;
    }

    public final rq.o[] h() {
        return (rq.o[]) ys.d.O(this.f19479e, f19475f[0]);
    }

    public final void i(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        ys.d.a0(((up.a) this.f19476b.f7952d).f18978n, location, this.f19477c, name);
    }

    public final String toString() {
        return "scope for " + this.f19477c;
    }
}
