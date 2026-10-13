package io.sentry;

import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.Timer;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes3.dex */
public final class d6 implements f1 {

    /* renamed from: b, reason: collision with root package name */
    public final h6 f11510b;

    /* renamed from: d, reason: collision with root package name */
    public final u3 f11512d;

    /* renamed from: e, reason: collision with root package name */
    public final String f11513e;

    /* renamed from: g, reason: collision with root package name */
    public volatile b6 f11515g;

    /* renamed from: h, reason: collision with root package name */
    public volatile b6 f11516h;

    /* renamed from: i, reason: collision with root package name */
    public volatile Timer f11517i;
    public final io.sentry.util.a j;
    public final io.sentry.util.a k;

    /* renamed from: l, reason: collision with root package name */
    public final AtomicBoolean f11518l;

    /* renamed from: m, reason: collision with root package name */
    public final AtomicBoolean f11519m;

    /* renamed from: n, reason: collision with root package name */
    public final io.sentry.protocol.g0 f11520n;

    /* renamed from: o, reason: collision with root package name */
    public final k1 f11521o;

    /* renamed from: p, reason: collision with root package name */
    public final io.sentry.protocol.c f11522p;

    /* renamed from: q, reason: collision with root package name */
    public final k f11523q;

    /* renamed from: r, reason: collision with root package name */
    public final q6 f11524r;
    public final io.sentry.protocol.v a = new io.sentry.protocol.v();

    /* renamed from: c, reason: collision with root package name */
    public final CopyOnWriteArrayList f11511c = new CopyOnWriteArrayList();

    /* renamed from: f, reason: collision with root package name */
    public c6 f11514f = c6.f11429c;

    public d6(p6 p6Var, u3 u3Var, q6 q6Var, k kVar) {
        this.f11517i = null;
        io.sentry.util.a aVar = new io.sentry.util.a();
        this.j = aVar;
        this.k = new io.sentry.util.a();
        this.f11518l = new AtomicBoolean(false);
        AtomicBoolean atomicBoolean = new AtomicBoolean(false);
        this.f11519m = atomicBoolean;
        io.sentry.protocol.c cVar = new io.sentry.protocol.c();
        this.f11522p = cVar;
        h6 h6Var = new h6(p6Var, this, u3Var, q6Var);
        this.f11510b = h6Var;
        this.f11513e = p6Var.M;
        this.f11521o = p6Var.I;
        this.f11512d = u3Var;
        Boolean bool = Boolean.TRUE;
        kVar = bool.equals(h6Var.t()) ? kVar : null;
        this.f11523q = kVar;
        this.f11520n = p6Var.N;
        this.f11524r = q6Var;
        y(h6Var);
        io.sentry.protocol.v x5 = x();
        if (!x5.equals(io.sentry.protocol.v.f11895e) && bool.equals(h6Var.t())) {
            cVar.k(new e3(x5), "profile");
        }
        if (kVar != null) {
            kVar.e(this);
        }
        if (q6Var.f11921g == null && q6Var.f11922h == null) {
            return;
        }
        boolean z5 = true;
        this.f11517i = new Timer(true);
        Long l6 = q6Var.f11922h;
        if (l6 != null) {
            r a = aVar.a();
            try {
                if (this.f11517i != null) {
                    t();
                    atomicBoolean.set(true);
                    this.f11516h = new b6(this, 1);
                    try {
                        this.f11517i.schedule(this.f11516h, l6.longValue());
                    } catch (Throwable th2) {
                        this.f11512d.l().getLogger().k(SentryLevel.WARNING, "Failed to schedule finish timer", th2);
                        l6 a10 = a();
                        if (a10 == null) {
                            a10 = l6.DEADLINE_EXCEEDED;
                        }
                        if (this.f11524r.f11921g == null) {
                            z5 = false;
                        }
                        d(a10, z5, null);
                        this.f11519m.set(false);
                    }
                }
                a.close();
            } catch (Throwable th3) {
                try {
                    a.close();
                } catch (Throwable th4) {
                    th3.addSuppressed(th4);
                }
                throw th3;
            }
        }
        m();
    }

    @Override // io.sentry.ISpan
    public final l6 a() {
        return this.f11510b.f11590c.f11616y;
    }

    @Override // io.sentry.ISpan
    public final n6 b() {
        u3 u3Var = this.f11512d;
        if (u3Var.l().isTraceSampling()) {
            h6 h6Var = this.f11510b;
            i6 i6Var = h6Var.f11590c;
            i6 i6Var2 = h6Var.f11590c;
            c cVar = i6Var.J;
            if (cVar != null) {
                r a = this.k.a();
                try {
                    if (cVar.f11415e) {
                        AtomicReference atomicReference = new AtomicReference();
                        if (u3Var.isEnabled()) {
                            try {
                                atomicReference.set(u3Var.f12032e.b(null).y());
                            } catch (Throwable th2) {
                                u3Var.l().getLogger().k(SentryLevel.ERROR, "Error in the 'configureScope' callback.", th2);
                            }
                        } else {
                            u3Var.l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'configureScope' call is a no-op.", new Object[0]);
                        }
                        cVar.c(i6Var2.f11610d, (io.sentry.protocol.v) atomicReference.get(), u3Var.l(), i6Var2.f11613v, this.f11513e, this.f11520n);
                        cVar.f11415e = false;
                    }
                    a.close();
                    return cVar.d();
                } finally {
                }
            }
        }
        return null;
    }

    @Override // io.sentry.ISpan
    public final ISpan c(String str, i4 i4Var, k1 k1Var) {
        return r("activity.load", str, i4Var, k1Var, new a3.f(5, false));
    }

    @Override // io.sentry.f1
    public final void d(l6 l6Var, boolean z5, Hint hint) {
        if (this.f11510b.f11593f) {
            return;
        }
        i4 now = this.f11512d.l().getDateProvider().now();
        CopyOnWriteArrayList copyOnWriteArrayList = new CopyOnWriteArrayList(this.f11511c);
        ListIterator listIterator = copyOnWriteArrayList.listIterator(copyOnWriteArrayList.size());
        while (listIterator.hasPrevious()) {
            h6 h6Var = (h6) listIterator.previous();
            h6Var.f11596i = null;
            h6Var.q(l6Var, now);
        }
        w(l6Var, now, z5, hint);
    }

    @Override // io.sentry.ISpan
    public final void e(Number number, String str) {
        this.f11510b.e(number, str);
    }

    @Override // io.sentry.ISpan
    public final void f(l6 l6Var) {
        q(l6Var, null);
    }

    @Override // io.sentry.ISpan
    public final void g() {
        q(a(), null);
    }

    @Override // io.sentry.ISpan
    public final String getDescription() {
        return this.f11510b.f11590c.f11615x;
    }

    @Override // io.sentry.f1
    public final String getName() {
        return this.f11513e;
    }

    @Override // io.sentry.ISpan
    public final void h(Object obj, String str) {
        h6 h6Var = this.f11510b;
        if (h6Var.f11593f) {
            this.f11512d.l().getLogger().u(SentryLevel.DEBUG, "The transaction is already finished. Data %s cannot be set", str);
        } else {
            h6Var.h(obj, str);
        }
    }

    @Override // io.sentry.f1
    public final ISpan i() {
        CopyOnWriteArrayList copyOnWriteArrayList = new CopyOnWriteArrayList(this.f11511c);
        ListIterator listIterator = copyOnWriteArrayList.listIterator(copyOnWriteArrayList.size());
        while (listIterator.hasPrevious()) {
            h6 h6Var = (h6) listIterator.previous();
            if (!h6Var.f11593f) {
                return h6Var;
            }
        }
        return null;
    }

    @Override // io.sentry.ISpan
    public final boolean isFinished() {
        return this.f11510b.f11593f;
    }

    @Override // io.sentry.ISpan
    public final void j(String str) {
        h6 h6Var = this.f11510b;
        if (h6Var.f11593f) {
            this.f11512d.l().getLogger().u(SentryLevel.DEBUG, "The transaction is already finished. Description %s cannot be set", str);
        } else {
            h6Var.f11590c.f11615x = str;
        }
    }

    @Override // io.sentry.f1
    public final io.sentry.protocol.v k() {
        return this.a;
    }

    @Override // io.sentry.ISpan
    public final ISpan l(String str) {
        return r(str, null, null, k1.SENTRY, new a3.f(5, false));
    }

    @Override // io.sentry.f1
    public final void m() {
        Long l6;
        r a = this.j.a();
        try {
            if (this.f11517i != null && (l6 = this.f11524r.f11921g) != null) {
                u();
                this.f11518l.set(true);
                this.f11515g = new b6(this, 0);
                try {
                    this.f11517i.schedule(this.f11515g, l6.longValue());
                } catch (Throwable th2) {
                    this.f11512d.l().getLogger().k(SentryLevel.WARNING, "Failed to schedule finish timer", th2);
                    l6 a10 = a();
                    if (a10 == null) {
                        a10 = l6.OK;
                    }
                    q(a10, null);
                    this.f11518l.set(false);
                }
            }
            a.close();
        } catch (Throwable th3) {
            try {
                a.close();
            } catch (Throwable th4) {
                th3.addSuppressed(th4);
            }
            throw th3;
        }
    }

    @Override // io.sentry.ISpan
    public final void makeCurrent() {
        u3 u3Var = this.f11512d;
        if (!u3Var.isEnabled()) {
            u3Var.l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'configureScope' call is a no-op.", new Object[0]);
            return;
        }
        try {
            u3Var.f12032e.b(null).O(this);
        } catch (Throwable th2) {
            u3Var.l().getLogger().k(SentryLevel.ERROR, "Error in the 'configureScope' callback.", th2);
        }
    }

    @Override // io.sentry.ISpan
    public final void n(String str, Long l6, c2 c2Var) {
        this.f11510b.n(str, l6, c2Var);
    }

    @Override // io.sentry.ISpan
    public final i6 o() {
        return this.f11510b.f11590c;
    }

    @Override // io.sentry.ISpan
    public final i4 p() {
        return this.f11510b.f11589b;
    }

    @Override // io.sentry.ISpan
    public final void q(l6 l6Var, i4 i4Var) {
        w(l6Var, i4Var, true, null);
    }

    @Override // io.sentry.ISpan
    public final ISpan r(String str, String str2, i4 i4Var, k1 k1Var, a3.f fVar) {
        boolean z5 = this.f11510b.f11593f;
        t2 t2Var = t2.a;
        if (z5 || !this.f11521o.equals(k1Var)) {
            return t2Var;
        }
        int size = this.f11511c.size();
        u3 u3Var = this.f11512d;
        if (size < u3Var.l().getMaxSpans()) {
            return this.f11510b.r(str, str2, i4Var, k1Var, fVar);
        }
        u3Var.l().getLogger().u(SentryLevel.WARNING, "Span operation: %s, description: %s dropped due to limit reached. Returning NoOpSpan.", str, str2);
        return t2Var;
    }

    @Override // io.sentry.ISpan
    public final i4 s() {
        return this.f11510b.a;
    }

    public final void t() {
        r a = this.j.a();
        try {
            if (this.f11516h != null) {
                this.f11516h.cancel();
                this.f11519m.set(false);
                this.f11516h = null;
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

    public final void u() {
        r a = this.j.a();
        try {
            if (this.f11515g != null) {
                this.f11515g.cancel();
                this.f11518l.set(false);
                this.f11515g = null;
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

    public final ISpan v(i6 i6Var, a3.f fVar) {
        boolean z5 = this.f11510b.f11593f;
        t2 t2Var = t2.a;
        if (!z5 && this.f11521o.equals(i6Var.I)) {
            u3 u3Var = this.f11512d;
            if (!io.sentry.util.k.a((String) fVar.f58d, u3Var.l().getIgnoredSpanOrigins())) {
                k6 k6Var = i6Var.f11612i;
                String str = i6Var.f11614w;
                String str2 = i6Var.f11615x;
                CopyOnWriteArrayList copyOnWriteArrayList = this.f11511c;
                if (copyOnWriteArrayList.size() >= u3Var.l().getMaxSpans()) {
                    u3Var.l().getLogger().u(SentryLevel.WARNING, "Span operation: %s, description: %s dropped due to limit reached. Returning NoOpSpan.", str, str2);
                    return t2Var;
                }
                d9.a.L(k6Var, "parentSpanId is required");
                d9.a.L(str, "operation is required");
                u();
                h6 h6Var = new h6(this, this.f11512d, i6Var, fVar, new hc.m(9, this));
                y(h6Var);
                copyOnWriteArrayList.add(h6Var);
                k kVar = this.f11523q;
                if (kVar != null) {
                    kVar.d(h6Var);
                }
                return h6Var;
            }
        }
        return t2Var;
    }

    /* JADX WARN: Removed duplicated region for block: B:40:0x00c3  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x00f2  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x0103  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x0140  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x0116 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void w(l6 l6Var, i4 i4Var, boolean z5, Hint hint) {
        g3 g3Var;
        u3 u3Var;
        i4 i4Var2 = this.f11510b.f11589b;
        if (i4Var == null) {
            i4Var = i4Var2;
        }
        if (i4Var == null) {
            i4Var = this.f11512d.l().getDateProvider().now();
        }
        Iterator it = this.f11511c.iterator();
        while (it.hasNext()) {
            ((h6) it.next()).f11595h.getClass();
        }
        this.f11514f = new c6(true, l6Var);
        if (this.f11510b.f11593f) {
            return;
        }
        if (this.f11524r.f11920f) {
            ListIterator listIterator = this.f11511c.listIterator();
            while (listIterator.hasNext()) {
                h6 h6Var = (h6) listIterator.next();
                if (!h6Var.f11593f && h6Var.f11589b == null) {
                    return;
                }
            }
        }
        AtomicReference atomicReference = new AtomicReference();
        h6 h6Var2 = this.f11510b;
        h6Var2.f11596i = new bc.a(this, h6Var2.f11596i, atomicReference, 8);
        h6Var2.q(this.f11514f.f11430b, i4Var);
        Boolean bool = Boolean.TRUE;
        if (bool.equals(this.f11510b.t())) {
            f9.b bVar = this.f11510b.f11590c.f11613v;
            if (bool.equals(bVar == null ? null : (Boolean) bVar.f8475v)) {
                g3Var = this.f11512d.l().getTransactionProfiler().c(this, (List) atomicReference.get(), this.f11512d.l());
                if (this.f11512d.l().isContinuousProfilingEnabled()) {
                    f3 profileLifecycle = this.f11512d.l().getProfileLifecycle();
                    f3 f3Var = f3.TRACE;
                    if (profileLifecycle == f3Var && this.f11510b.f11590c.L.equals(io.sentry.protocol.v.f11895e)) {
                        this.f11512d.l().getContinuousProfiler().b(f3Var);
                    }
                }
                if (atomicReference.get() != null) {
                    ((List) atomicReference.get()).clear();
                }
                u3Var = this.f11512d;
                if (u3Var.isEnabled()) {
                    u3Var.l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'configureScope' call is a no-op.", new Object[0]);
                } else {
                    try {
                        IScope b10 = u3Var.f12032e.b(null);
                        b10.M(new cc.i(26, this, b10));
                    } catch (Throwable th2) {
                        u3Var.l().getLogger().k(SentryLevel.ERROR, "Error in the 'configureScope' callback.", th2);
                    }
                }
                io.sentry.protocol.d0 d0Var = new io.sentry.protocol.d0(this);
                if (this.f11517i != null) {
                    r a = this.j.a();
                    try {
                        if (this.f11517i != null) {
                            u();
                            t();
                            this.f11517i.cancel();
                            this.f11517i = null;
                        }
                        a.close();
                    } catch (Throwable th3) {
                        try {
                            a.close();
                        } catch (Throwable th4) {
                            th3.addSuppressed(th4);
                        }
                        throw th3;
                    }
                }
                if (!z5 && this.f11511c.isEmpty() && this.f11524r.f11921g != null) {
                    this.f11512d.l().getLogger().u(SentryLevel.DEBUG, "Dropping idle transaction %s because it has no child spans", this.f11513e);
                    return;
                } else {
                    d0Var.Q.putAll(this.f11510b.k);
                    this.f11512d.v(d0Var, b(), hint, g3Var);
                }
            }
        }
        g3Var = null;
        if (this.f11512d.l().isContinuousProfilingEnabled()) {
        }
        if (atomicReference.get() != null) {
        }
        u3Var = this.f11512d;
        if (u3Var.isEnabled()) {
        }
        io.sentry.protocol.d0 d0Var2 = new io.sentry.protocol.d0(this);
        if (this.f11517i != null) {
        }
        if (!z5) {
        }
        d0Var2.Q.putAll(this.f11510b.k);
        this.f11512d.v(d0Var2, b(), hint, g3Var);
    }

    public final io.sentry.protocol.v x() {
        h6 h6Var = this.f11510b;
        return !h6Var.f11590c.L.equals(io.sentry.protocol.v.f11895e) ? h6Var.f11590c.L : this.f11512d.l().getContinuousProfiler().e();
    }

    public final void y(h6 h6Var) {
        io.sentry.util.thread.a threadChecker = this.f11512d.l().getThreadChecker();
        io.sentry.protocol.v x5 = x();
        if (!x5.equals(io.sentry.protocol.v.f11895e) && Boolean.TRUE.equals(h6Var.t())) {
            h6Var.h(x5.toString(), "profiler_id");
        }
        h6Var.h(String.valueOf(threadChecker.b()), "thread.id");
        h6Var.h(threadChecker.a(), "thread.name");
    }
}
