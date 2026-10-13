package io.sentry;

import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

/* loaded from: classes3.dex */
public final class j implements IScope {
    public final IScope a;

    /* renamed from: b, reason: collision with root package name */
    public final IScope f11636b;

    /* renamed from: c, reason: collision with root package name */
    public final IScope f11637c;

    public j(IScope iScope, IScope iScope2, IScope iScope3) {
        this.a = iScope;
        this.f11636b = iScope2;
        this.f11637c = iScope3;
    }

    @Override // io.sentry.IScope
    public final g6 A(n3 n3Var) {
        return b(null).A(n3Var);
    }

    @Override // io.sentry.IScope
    public final void B(String str) {
        b(null).B(str);
    }

    @Override // io.sentry.IScope
    public final z0 C() {
        z0 C = this.f11637c.C();
        if (!(C instanceof q2)) {
            return C;
        }
        z0 C2 = this.f11636b.C();
        return !(C2 instanceof q2) ? C2 : this.a.C();
    }

    @Override // io.sentry.IScope
    public final Map D() {
        ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap();
        concurrentHashMap.putAll(this.a.D());
        concurrentHashMap.putAll(this.f11636b.D());
        concurrentHashMap.putAll(this.f11637c.D());
        return concurrentHashMap;
    }

    @Override // io.sentry.IScope
    public final void E() {
        b(null).E();
    }

    @Override // io.sentry.IScope
    public final List F() {
        CopyOnWriteArrayList copyOnWriteArrayList = new CopyOnWriteArrayList();
        copyOnWriteArrayList.addAll(this.a.F());
        copyOnWriteArrayList.addAll(this.f11636b.F());
        copyOnWriteArrayList.addAll(this.f11637c.F());
        Collections.sort(copyOnWriteArrayList);
        return copyOnWriteArrayList;
    }

    @Override // io.sentry.IScope
    public final void G(Object obj, String str) {
        b(null).G(obj, str);
    }

    @Override // io.sentry.IScope
    public final List H() {
        CopyOnWriteArrayList copyOnWriteArrayList = new CopyOnWriteArrayList();
        copyOnWriteArrayList.addAll(this.a.H());
        copyOnWriteArrayList.addAll(this.f11636b.H());
        copyOnWriteArrayList.addAll(this.f11637c.H());
        return copyOnWriteArrayList;
    }

    @Override // io.sentry.IScope
    public final void I(SentryEvent sentryEvent) {
        this.a.I(sentryEvent);
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.c J() {
        IScope iScope = this.a;
        return new h(iScope.J(), this.f11636b.J(), this.f11637c.J(), iScope.l().getDefaultScopeType());
    }

    @Override // io.sentry.IScope
    public final void K() {
        b(null).K();
    }

    @Override // io.sentry.IScope
    public final e4.m L(m3 m3Var) {
        return b(null).L(m3Var);
    }

    @Override // io.sentry.IScope
    public final void M(o3 o3Var) {
        b(null).M(o3Var);
    }

    @Override // io.sentry.IScope
    public final void N(io.sentry.protocol.v vVar) {
        this.a.N(vVar);
        this.f11636b.N(vVar);
        this.f11637c.N(vVar);
    }

    @Override // io.sentry.IScope
    public final void O(f1 f1Var) {
        b(null).O(f1Var);
    }

    @Override // io.sentry.IScope
    public final List P() {
        List P = this.f11637c.P();
        if (!P.isEmpty()) {
            return P;
        }
        List P2 = this.f11636b.P();
        return !P2.isEmpty() ? P2 : this.a.P();
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.h0 Q() {
        io.sentry.protocol.h0 Q = this.f11637c.Q();
        if (Q != null) {
            return Q;
        }
        io.sentry.protocol.h0 Q2 = this.f11636b.Q();
        return Q2 != null ? Q2 : this.a.Q();
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.p R() {
        io.sentry.protocol.p R = this.f11637c.R();
        if (R != null) {
            return R;
        }
        io.sentry.protocol.p R2 = this.f11636b.R();
        return R2 != null ? R2 : this.a.R();
    }

    @Override // io.sentry.IScope
    public final List S() {
        return zk.a.M((CopyOnWriteArrayList) F());
    }

    @Override // io.sentry.IScope
    public final String T() {
        String T = this.f11637c.T();
        if (T != null) {
            return T;
        }
        String T2 = this.f11636b.T();
        return T2 != null ? T2 : this.a.T();
    }

    @Override // io.sentry.IScope
    public final String a() {
        String a = this.f11637c.a();
        if (a != null) {
            return a;
        }
        String a10 = this.f11636b.a();
        return a10 != null ? a10 : this.a.a();
    }

    public final IScope b(t3 t3Var) {
        IScope iScope = this.f11636b;
        IScope iScope2 = this.f11637c;
        IScope iScope3 = this.a;
        if (t3Var != null) {
            int i5 = i.a[t3Var.ordinal()];
            if (i5 == 1) {
                return iScope2;
            }
            if (i5 == 2) {
                return iScope;
            }
            if (i5 == 3) {
                return iScope3;
            }
            if (i5 == 4) {
                return this;
            }
        }
        int i6 = i.a[iScope3.l().getDefaultScopeType().ordinal()];
        return i6 != 1 ? i6 != 2 ? i6 != 3 ? iScope2 : iScope3 : iScope : iScope2;
    }

    @Override // io.sentry.IScope
    public final void c(Breadcrumb breadcrumb) {
        b(null).c(breadcrumb);
    }

    @Override // io.sentry.IScope
    public final void clear() {
        b(null).clear();
    }

    @Override // io.sentry.IScope
    public final void f(String str, String str2) {
        b(null).f(str, str2);
    }

    @Override // io.sentry.IScope
    public final void g(Breadcrumb breadcrumb, Hint hint) {
        b(null).g(breadcrumb, hint);
    }

    @Override // io.sentry.IScope
    public final Map getExtras() {
        ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap();
        concurrentHashMap.putAll(this.a.getExtras());
        concurrentHashMap.putAll(this.f11636b.getExtras());
        concurrentHashMap.putAll(this.f11637c.getExtras());
        return concurrentHashMap;
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.h h() {
        return s().h();
    }

    @Override // io.sentry.IScope
    public final void i(List list) {
        b(null).i(list);
    }

    @Override // io.sentry.IScope
    public final void j(String str, String str2) {
        b(null).j(str, str2);
    }

    @Override // io.sentry.IScope
    public final void k(io.sentry.protocol.v vVar) {
        b(null).k(vVar);
    }

    @Override // io.sentry.IScope
    public final v5 l() {
        return this.a.l();
    }

    @Override // io.sentry.IScope
    public final void m(io.sentry.protocol.h0 h0Var) {
        b(null).m(h0Var);
    }

    @Override // io.sentry.IScope
    public final f1 n() {
        f1 n6 = this.f11637c.n();
        if (n6 != null) {
            return n6;
        }
        f1 n10 = this.f11636b.n();
        return n10 != null ? n10 : this.a.n();
    }

    @Override // io.sentry.IScope
    public final g6 o() {
        return b(null).o();
    }

    @Override // io.sentry.IScope
    public final e4.r p() {
        return b(null).p();
    }

    @Override // io.sentry.IScope
    public final void q(e4.m mVar) {
        b(null).q(mVar);
    }

    @Override // io.sentry.IScope
    public final void r() {
        b(null).r();
    }

    @Override // io.sentry.IScope
    public final io.sentry.featureflags.b s() {
        v5 l6 = this.a.l();
        io.sentry.featureflags.b s2 = this.a.s();
        io.sentry.featureflags.b s5 = this.f11636b.s();
        io.sentry.featureflags.b s7 = this.f11637c.s();
        io.sentry.featureflags.c cVar = io.sentry.featureflags.c.f11553d;
        int maxFeatureFlags = l6.getMaxFeatureFlags();
        if (maxFeatureFlags > 0) {
            io.sentry.featureflags.a aVar = s2 instanceof io.sentry.featureflags.a ? (io.sentry.featureflags.a) s2 : null;
            io.sentry.featureflags.a aVar2 = s5 instanceof io.sentry.featureflags.a ? (io.sentry.featureflags.a) s5 : null;
            io.sentry.featureflags.a aVar3 = s7 instanceof io.sentry.featureflags.a ? (io.sentry.featureflags.a) s7 : null;
            CopyOnWriteArrayList copyOnWriteArrayList = aVar == null ? null : aVar.f11552d;
            CopyOnWriteArrayList copyOnWriteArrayList2 = aVar2 == null ? null : aVar2.f11552d;
            CopyOnWriteArrayList copyOnWriteArrayList3 = aVar3 != null ? aVar3.f11552d : null;
            int size = copyOnWriteArrayList == null ? 0 : copyOnWriteArrayList.size();
            int size2 = copyOnWriteArrayList2 == null ? 0 : copyOnWriteArrayList2.size();
            int size3 = copyOnWriteArrayList3 != null ? copyOnWriteArrayList3.size() : 0;
            if (size != 0 || size2 != 0 || size3 != 0) {
                int i5 = size - 1;
                int i6 = size2 - 1;
                int i10 = size3 - 1;
                if (copyOnWriteArrayList != null && i5 >= 0 && copyOnWriteArrayList.get(i5) != null) {
                    throw new ClassCastException();
                }
                if (copyOnWriteArrayList2 != null && i6 >= 0 && copyOnWriteArrayList2.get(i6) != null) {
                    throw new ClassCastException();
                }
                if (copyOnWriteArrayList3 != null && i10 >= 0 && copyOnWriteArrayList3.get(i10) != null) {
                    throw new ClassCastException();
                }
                LinkedHashMap linkedHashMap = new LinkedHashMap(maxFeatureFlags);
                linkedHashMap.size();
                ArrayList arrayList = new ArrayList(linkedHashMap.values());
                Collections.reverse(arrayList);
                CopyOnWriteArrayList copyOnWriteArrayList4 = new CopyOnWriteArrayList(arrayList);
                io.sentry.featureflags.a aVar4 = new io.sentry.featureflags.a();
                new io.sentry.util.a();
                aVar4.f11552d = copyOnWriteArrayList4;
                return aVar4;
            }
        }
        return cVar;
    }

    @Override // io.sentry.IScope
    public final ISpan t() {
        ISpan t5 = this.f11637c.t();
        if (t5 != null) {
            return t5;
        }
        ISpan t10 = this.f11636b.t();
        return t10 != null ? t10 : this.a.t();
    }

    @Override // io.sentry.IScope
    public final void u(String str) {
        b(null).u(str);
    }

    @Override // io.sentry.IScope
    public final g6 v() {
        g6 v5 = this.f11637c.v();
        if (v5 != null) {
            return v5;
        }
        g6 v6 = this.f11636b.v();
        return v6 != null ? v6 : this.a.v();
    }

    @Override // io.sentry.IScope
    public final Queue w() {
        ArrayList arrayList = new ArrayList();
        arrayList.addAll(this.a.w());
        arrayList.addAll(this.f11636b.w());
        IScope iScope = this.f11637c;
        arrayList.addAll(iScope.w());
        Collections.sort(arrayList);
        Queue b10 = p3.b(iScope.l().getMaxBreadcrumbs());
        b10.addAll(arrayList);
        return b10;
    }

    @Override // io.sentry.IScope
    public final SentryLevel x() {
        SentryLevel x5 = this.f11637c.x();
        if (x5 != null) {
            return x5;
        }
        SentryLevel x10 = this.f11636b.x();
        return x10 != null ? x10 : this.a.x();
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.v y() {
        io.sentry.protocol.v y5 = this.f11637c.y();
        io.sentry.protocol.v vVar = io.sentry.protocol.v.f11895e;
        if (!vVar.equals(y5)) {
            return y5;
        }
        io.sentry.protocol.v y6 = this.f11636b.y();
        return !vVar.equals(y6) ? y6 : this.a.y();
    }

    @Override // io.sentry.IScope
    public final e4.m z() {
        return b(null).z();
    }

    @Override // io.sentry.IScope
    /* renamed from: clone, reason: merged with bridge method [inline-methods] */
    public final IScope m1294clone() {
        return new j(this.a, this.f11636b.m1294clone(), this.f11637c.m1294clone());
    }
}
