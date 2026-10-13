package io.sentry;

import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.WeakHashMap;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

/* loaded from: classes3.dex */
public final class p3 implements IScope {
    public f1 a;

    /* renamed from: b, reason: collision with root package name */
    public final WeakReference f11708b;

    /* renamed from: c, reason: collision with root package name */
    public io.sentry.protocol.h0 f11709c;

    /* renamed from: d, reason: collision with root package name */
    public String f11710d;

    /* renamed from: e, reason: collision with root package name */
    public io.sentry.protocol.p f11711e;

    /* renamed from: f, reason: collision with root package name */
    public ArrayList f11712f;

    /* renamed from: g, reason: collision with root package name */
    public volatile Object f11713g;

    /* renamed from: h, reason: collision with root package name */
    public final ConcurrentHashMap f11714h;

    /* renamed from: i, reason: collision with root package name */
    public final ConcurrentHashMap f11715i;
    public final CopyOnWriteArrayList j;
    public volatile v5 k;

    /* renamed from: l, reason: collision with root package name */
    public volatile g6 f11716l;

    /* renamed from: m, reason: collision with root package name */
    public final io.sentry.util.a f11717m;

    /* renamed from: n, reason: collision with root package name */
    public final io.sentry.util.a f11718n;

    /* renamed from: o, reason: collision with root package name */
    public final io.sentry.util.a f11719o;

    /* renamed from: p, reason: collision with root package name */
    public final io.sentry.protocol.c f11720p;

    /* renamed from: q, reason: collision with root package name */
    public final CopyOnWriteArrayList f11721q;

    /* renamed from: r, reason: collision with root package name */
    public e4.m f11722r;

    /* renamed from: s, reason: collision with root package name */
    public io.sentry.protocol.v f11723s;

    /* renamed from: t, reason: collision with root package name */
    public z0 f11724t;

    /* renamed from: u, reason: collision with root package name */
    public final Map f11725u;

    /* renamed from: v, reason: collision with root package name */
    public final io.sentry.featureflags.b f11726v;

    /* JADX WARN: Multi-variable type inference failed */
    public p3(v5 v5Var) {
        io.sentry.featureflags.c cVar;
        this.f11708b = new WeakReference(null);
        this.f11712f = new ArrayList();
        this.f11714h = new ConcurrentHashMap();
        this.f11715i = new ConcurrentHashMap();
        this.j = new CopyOnWriteArrayList();
        this.f11717m = new io.sentry.util.a();
        this.f11718n = new io.sentry.util.a();
        this.f11719o = new io.sentry.util.a();
        this.f11720p = new io.sentry.protocol.c();
        this.f11721q = new CopyOnWriteArrayList();
        this.f11723s = io.sentry.protocol.v.f11895e;
        this.f11724t = q2.a;
        this.f11725u = Collections.synchronizedMap(new WeakHashMap());
        d9.a.L(v5Var, "SentryOptions is required.");
        this.k = v5Var;
        this.f11713g = b(this.k.getMaxBreadcrumbs());
        if (v5Var.getMaxFeatureFlags() > 0) {
            io.sentry.featureflags.a aVar = new io.sentry.featureflags.a();
            new io.sentry.util.a();
            aVar.f11552d = new CopyOnWriteArrayList();
            cVar = aVar;
        } else {
            cVar = io.sentry.featureflags.c.f11553d;
        }
        this.f11726v = cVar;
        this.f11722r = new e4.m(25);
    }

    public static Queue b(int i5) {
        return i5 > 0 ? new m6(new f(i5)) : new x();
    }

    @Override // io.sentry.IScope
    public final g6 A(n3 n3Var) {
        r a = this.f11717m.a();
        try {
            n3Var.a(this.f11716l);
            g6 clone = this.f11716l != null ? this.f11716l.clone() : null;
            a.close();
            return clone;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // io.sentry.IScope
    public final void B(String str) {
        this.f11710d = str;
        io.sentry.protocol.c cVar = this.f11720p;
        io.sentry.protocol.a d6 = cVar.d();
        if (d6 == null) {
            d6 = new io.sentry.protocol.a();
            cVar.n(d6);
        }
        if (str == null) {
            d6.F = null;
        } else {
            ArrayList arrayList = new ArrayList(1);
            arrayList.add(str);
            d6.F = arrayList;
        }
        Iterator<w0> it = this.k.getScopeObservers().iterator();
        while (it.hasNext()) {
            it.next().g(cVar);
        }
    }

    @Override // io.sentry.IScope
    public final z0 C() {
        return this.f11724t;
    }

    @Override // io.sentry.IScope
    public final Map D() {
        return ys.l.r(this.f11714h);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, java.util.Collection] */
    /* JADX WARN: Type inference failed for: r2v0, types: [java.lang.Object, java.util.Collection] */
    @Override // io.sentry.IScope
    public final void E() {
        this.f11713g.clear();
        Iterator<w0> it = this.k.getScopeObservers().iterator();
        while (it.hasNext()) {
            it.next().a(this.f11713g);
        }
    }

    @Override // io.sentry.IScope
    public final List F() {
        return this.j;
    }

    @Override // io.sentry.IScope
    public final void G(Object obj, String str) {
        if (str == null) {
            return;
        }
        this.f11720p.k(obj, str);
        Iterator<w0> it = this.k.getScopeObservers().iterator();
        while (it.hasNext()) {
            it.next().g(this.f11720p);
        }
    }

    @Override // io.sentry.IScope
    public final List H() {
        return new CopyOnWriteArrayList(this.f11721q);
    }

    @Override // io.sentry.IScope
    public final void I(SentryEvent sentryEvent) {
        if (!this.k.isTracingEnabled() || sentryEvent.a() == null) {
            return;
        }
        Map map = this.f11725u;
        Throwable a = sentryEvent.a();
        d9.a.L(a, "throwable cannot be null");
        while (a.getCause() != null && a.getCause() != a) {
            a = a.getCause();
        }
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.c J() {
        return this.f11720p;
    }

    @Override // io.sentry.IScope
    public final void K() {
        this.f11716l = null;
    }

    @Override // io.sentry.IScope
    public final e4.m L(m3 m3Var) {
        r a = this.f11719o.a();
        try {
            m3Var.d(this.f11722r);
            e4.m mVar = new e4.m(this.f11722r);
            a.close();
            return mVar;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // io.sentry.IScope
    public final void M(o3 o3Var) {
        r a = this.f11718n.a();
        try {
            o3Var.b(this.a);
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // io.sentry.IScope
    public final void N(io.sentry.protocol.v vVar) {
    }

    @Override // io.sentry.IScope
    public final void O(f1 f1Var) {
        r a = this.f11718n.a();
        try {
            this.a = f1Var;
            for (w0 w0Var : this.k.getScopeObservers()) {
                if (f1Var != null) {
                    w0Var.l(f1Var.getName());
                    w0Var.e(f1Var.o(), this);
                } else {
                    w0Var.l(null);
                    w0Var.e(null, this);
                }
            }
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // io.sentry.IScope
    public final List P() {
        return this.f11712f;
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.h0 Q() {
        return this.f11709c;
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.p R() {
        return this.f11711e;
    }

    @Override // io.sentry.IScope
    public final List S() {
        return zk.a.M(this.j);
    }

    @Override // io.sentry.IScope
    public final String T() {
        f1 f1Var = this.a;
        if (f1Var != null) {
            return f1Var.getName();
        }
        return null;
    }

    @Override // io.sentry.IScope
    public final String a() {
        return this.f11710d;
    }

    @Override // io.sentry.IScope
    public final void c(Breadcrumb breadcrumb) {
        g(breadcrumb, null);
    }

    @Override // io.sentry.IScope
    public final void clear() {
        this.f11709c = null;
        this.f11711e = null;
        this.f11710d = null;
        this.f11712f.clear();
        E();
        this.f11714h.clear();
        this.f11715i.clear();
        this.j.clear();
        r();
        this.f11721q.clear();
    }

    @Override // io.sentry.IScope
    /* renamed from: clone */
    public final IScope m1294clone() {
        return new p3(this);
    }

    @Override // io.sentry.IScope
    public final void f(String str, String str2) {
        if (str == null) {
            return;
        }
        if (str2 == null) {
            this.f11714h.remove(str);
            for (w0 w0Var : this.k.getScopeObservers()) {
                w0Var.n(str);
                w0Var.d(this.f11714h);
            }
            return;
        }
        this.f11714h.put(str, str2);
        for (w0 w0Var2 : this.k.getScopeObservers()) {
            w0Var2.f(str, str2);
            w0Var2.d(this.f11714h);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v2, types: [java.lang.Object, java.util.Collection] */
    /* JADX WARN: Type inference failed for: r5v5, types: [java.lang.Object, java.util.Queue] */
    @Override // io.sentry.IScope
    public final void g(Breadcrumb breadcrumb, Hint hint) {
        if (breadcrumb == null || (this.f11713g instanceof x)) {
            return;
        }
        if (hint == null) {
            hint = new Hint();
        }
        g5 beforeBreadcrumb = this.k.getBeforeBreadcrumb();
        if (beforeBreadcrumb != null) {
            try {
                breadcrumb = beforeBreadcrumb.execute(breadcrumb, hint);
            } catch (Throwable th2) {
                this.k.getLogger().k(SentryLevel.ERROR, "The BeforeBreadcrumbCallback callback threw an exception. Exception details will be added to the breadcrumb.", th2);
                if (th2.getMessage() != null) {
                    breadcrumb.c(th2.getMessage(), "sentry:message");
                }
            }
        }
        if (breadcrumb == null) {
            this.k.getLogger().u(SentryLevel.INFO, "Breadcrumb was dropped by beforeBreadcrumb", new Object[0]);
            return;
        }
        this.f11713g.add(breadcrumb);
        for (w0 w0Var : this.k.getScopeObservers()) {
            w0Var.c(breadcrumb);
            w0Var.a(this.f11713g);
        }
    }

    @Override // io.sentry.IScope
    public final Map getExtras() {
        return this.f11715i;
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.h h() {
        return this.f11726v.h();
    }

    @Override // io.sentry.IScope
    public final void i(List list) {
        if (list == null) {
            return;
        }
        this.f11712f = new ArrayList(list);
        Iterator<w0> it = this.k.getScopeObservers().iterator();
        while (it.hasNext()) {
            it.next().i(list);
        }
    }

    @Override // io.sentry.IScope
    public final void j(String str, String str2) {
        if (str == null) {
            return;
        }
        if (str2 == null) {
            this.f11715i.remove(str);
            for (w0 w0Var : this.k.getScopeObservers()) {
                w0Var.b(str);
                w0Var.h(this.f11715i);
            }
            return;
        }
        this.f11715i.put(str, str2);
        for (w0 w0Var2 : this.k.getScopeObservers()) {
            w0Var2.j(str, str2);
            w0Var2.h(this.f11715i);
        }
    }

    @Override // io.sentry.IScope
    public final void k(io.sentry.protocol.v vVar) {
        this.f11723s = vVar;
        Iterator<w0> it = this.k.getScopeObservers().iterator();
        while (it.hasNext()) {
            it.next().k(vVar);
        }
    }

    @Override // io.sentry.IScope
    public final v5 l() {
        return this.k;
    }

    @Override // io.sentry.IScope
    public final void m(io.sentry.protocol.h0 h0Var) {
        this.f11709c = h0Var;
        Iterator<w0> it = this.k.getScopeObservers().iterator();
        while (it.hasNext()) {
            it.next().m(h0Var);
        }
    }

    @Override // io.sentry.IScope
    public final f1 n() {
        return this.a;
    }

    @Override // io.sentry.IScope
    public final g6 o() {
        r a = this.f11717m.a();
        try {
            g6 g6Var = null;
            if (this.f11716l != null) {
                g6 g6Var2 = this.f11716l;
                g6Var2.getClass();
                g6Var2.b(ki.b.r());
                this.k.getContinuousProfiler().d();
                g6 clone = this.f11716l.clone();
                this.f11716l = null;
                g6Var = clone;
            }
            a.close();
            return g6Var;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // io.sentry.IScope
    public final e4.r p() {
        r a = this.f11717m.a();
        try {
            if (this.f11716l != null) {
                g6 g6Var = this.f11716l;
                g6Var.getClass();
                g6Var.b(ki.b.r());
                this.k.getContinuousProfiler().d();
            }
            g6 g6Var2 = this.f11716l;
            e4.r rVar = null;
            if (this.k.getRelease() != null) {
                String distinctId = this.k.getDistinctId();
                io.sentry.protocol.h0 h0Var = this.f11709c;
                this.f11716l = new g6(f6.Ok, ki.b.r(), ki.b.r(), 0, distinctId, nt.a.q(), Boolean.TRUE, null, null, h0Var != null ? h0Var.f11799v : null, null, this.k.getEnvironment(), this.k.getRelease(), null);
                rVar = new e4.r(this.f11716l.clone(), g6Var2 != null ? g6Var2.clone() : null);
            } else {
                this.k.getLogger().u(SentryLevel.WARNING, "Release is not set on SentryOptions. Session could not be started", new Object[0]);
            }
            a.close();
            return rVar;
        } catch (Throwable th2) {
            try {
                a.close();
                throw th2;
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
                throw th2;
            }
        }
    }

    @Override // io.sentry.IScope
    public final void q(e4.m mVar) {
        this.f11722r = mVar;
        i6 i6Var = new i6((io.sentry.protocol.v) mVar.f7963e, (k6) mVar.f7964i, "default", null);
        i6Var.F = "auto";
        Iterator<w0> it = this.k.getScopeObservers().iterator();
        while (it.hasNext()) {
            it.next().e(i6Var, this);
        }
    }

    @Override // io.sentry.IScope
    public final void r() {
        r a = this.f11718n.a();
        try {
            this.a = null;
            a.close();
            for (w0 w0Var : this.k.getScopeObservers()) {
                w0Var.l(null);
                w0Var.e(null, this);
            }
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // io.sentry.IScope
    public final io.sentry.featureflags.b s() {
        return this.f11726v;
    }

    @Override // io.sentry.IScope
    public final ISpan t() {
        ISpan i5;
        ISpan iSpan = (ISpan) this.f11708b.get();
        if (iSpan != null) {
            return iSpan;
        }
        f1 f1Var = this.a;
        return (f1Var == null || (i5 = f1Var.i()) == null) ? f1Var : i5;
    }

    @Override // io.sentry.IScope
    public final void u(String str) {
        if (str == null) {
            return;
        }
        this.f11720p.m(str);
    }

    @Override // io.sentry.IScope
    public final g6 v() {
        return this.f11716l;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, java.util.Queue] */
    @Override // io.sentry.IScope
    public final Queue w() {
        return this.f11713g;
    }

    @Override // io.sentry.IScope
    public final SentryLevel x() {
        return null;
    }

    @Override // io.sentry.IScope
    public final io.sentry.protocol.v y() {
        return this.f11723s;
    }

    @Override // io.sentry.IScope
    public final e4.m z() {
        return this.f11722r;
    }

    /* renamed from: clone, reason: collision with other method in class */
    public final Object m1298clone() {
        return new p3(this);
    }

    /* JADX WARN: Type inference failed for: r0v25, types: [java.lang.Object, java.util.Collection] */
    public p3(p3 p3Var) {
        io.sentry.protocol.h0 h0Var;
        io.sentry.protocol.p pVar = null;
        this.f11708b = new WeakReference(null);
        this.f11712f = new ArrayList();
        this.f11714h = new ConcurrentHashMap();
        this.f11715i = new ConcurrentHashMap();
        this.j = new CopyOnWriteArrayList();
        this.f11717m = new io.sentry.util.a();
        this.f11718n = new io.sentry.util.a();
        this.f11719o = new io.sentry.util.a();
        this.f11720p = new io.sentry.protocol.c();
        this.f11721q = new CopyOnWriteArrayList();
        this.f11723s = io.sentry.protocol.v.f11895e;
        this.f11724t = q2.a;
        this.f11725u = Collections.synchronizedMap(new WeakHashMap());
        this.a = p3Var.a;
        this.f11708b = p3Var.f11708b;
        this.f11716l = p3Var.f11716l;
        this.k = p3Var.k;
        this.f11724t = p3Var.f11724t;
        io.sentry.protocol.h0 h0Var2 = p3Var.f11709c;
        if (h0Var2 != null) {
            h0Var = new io.sentry.protocol.h0();
            h0Var.f11796d = h0Var2.f11796d;
            h0Var.f11798i = h0Var2.f11798i;
            h0Var.f11797e = h0Var2.f11797e;
            h0Var.f11799v = h0Var2.f11799v;
            h0Var.f11800w = h0Var2.f11800w;
            h0Var.f11801x = h0Var2.f11801x;
            h0Var.f11802y = ys.l.r(h0Var2.f11802y);
            h0Var.E = ys.l.r(h0Var2.E);
        } else {
            h0Var = null;
        }
        this.f11709c = h0Var;
        this.f11710d = p3Var.f11710d;
        this.f11723s = p3Var.f11723s;
        io.sentry.protocol.p pVar2 = p3Var.f11711e;
        if (pVar2 != null) {
            pVar = new io.sentry.protocol.p();
            pVar.f11853d = pVar2.f11853d;
            pVar.f11857w = pVar2.f11857w;
            pVar.f11854e = pVar2.f11854e;
            pVar.f11855i = pVar2.f11855i;
            pVar.f11858x = ys.l.r(pVar2.f11858x);
            pVar.f11859y = ys.l.r(pVar2.f11859y);
            pVar.F = ys.l.r(pVar2.F);
            pVar.I = ys.l.r(pVar2.I);
            pVar.f11856v = pVar2.f11856v;
            pVar.G = pVar2.G;
            pVar.E = pVar2.E;
            pVar.H = pVar2.H;
        }
        this.f11711e = pVar;
        this.f11712f = new ArrayList(p3Var.f11712f);
        this.j = new CopyOnWriteArrayList(p3Var.j);
        Breadcrumb[] breadcrumbArr = (Breadcrumb[]) p3Var.f11713g.toArray(new Breadcrumb[0]);
        Queue b10 = b(p3Var.k.getMaxBreadcrumbs());
        for (Breadcrumb breadcrumb : breadcrumbArr) {
            b10.add(new Breadcrumb(breadcrumb));
        }
        this.f11713g = b10;
        ConcurrentHashMap concurrentHashMap = p3Var.f11714h;
        ConcurrentHashMap concurrentHashMap2 = new ConcurrentHashMap();
        for (Map.Entry entry : concurrentHashMap.entrySet()) {
            if (entry != null) {
                concurrentHashMap2.put((String) entry.getKey(), (String) entry.getValue());
            }
        }
        this.f11714h = concurrentHashMap2;
        ConcurrentHashMap concurrentHashMap3 = p3Var.f11715i;
        ConcurrentHashMap concurrentHashMap4 = new ConcurrentHashMap();
        for (Map.Entry entry2 : concurrentHashMap3.entrySet()) {
            if (entry2 != null) {
                concurrentHashMap4.put((String) entry2.getKey(), entry2.getValue());
            }
        }
        this.f11715i = concurrentHashMap4;
        this.f11720p = new io.sentry.protocol.c(p3Var.f11720p);
        this.f11721q = new CopyOnWriteArrayList(p3Var.f11721q);
        this.f11726v = p3Var.f11726v.m1291clone();
        this.f11722r = new e4.m(p3Var.f11722r);
    }
}
