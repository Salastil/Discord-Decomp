package io.sentry;

import io.sentry.android.core.SentryAndroidOptions;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Timer;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public final class q implements k {

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f11913d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f11914e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f11915f;

    /* renamed from: g, reason: collision with root package name */
    public final v5 f11916g;
    public final io.sentry.util.a a = new io.sentry.util.a();

    /* renamed from: b, reason: collision with root package name */
    public volatile Timer f11911b = null;

    /* renamed from: c, reason: collision with root package name */
    public final ConcurrentHashMap f11912c = new ConcurrentHashMap();

    /* renamed from: h, reason: collision with root package name */
    public final AtomicBoolean f11917h = new AtomicBoolean(false);

    /* renamed from: i, reason: collision with root package name */
    public long f11918i = 0;

    public q(SentryAndroidOptions sentryAndroidOptions) {
        boolean z5 = false;
        d9.a.L(sentryAndroidOptions, "The options object is required.");
        this.f11916g = sentryAndroidOptions;
        this.f11913d = new ArrayList();
        this.f11914e = new ArrayList();
        for (s0 s0Var : sentryAndroidOptions.getPerformanceCollectors()) {
            if (s0Var instanceof u0) {
                this.f11913d.add((u0) s0Var);
            }
            if (s0Var instanceof t0) {
                this.f11914e.add((t0) s0Var);
            }
        }
        if (this.f11913d.isEmpty() && this.f11914e.isEmpty()) {
            z5 = true;
        }
        this.f11915f = z5;
    }

    @Override // io.sentry.k
    public final void a(String str) {
        if (this.f11915f) {
            this.f11916g.getLogger().u(SentryLevel.INFO, "No collector found. Performance stats will not be captured during transactions.", new Object[0]);
            return;
        }
        if (!this.f11912c.containsKey(str)) {
            this.f11912c.put(str, new p(this, null));
        }
        if (this.f11917h.getAndSet(true)) {
            return;
        }
        r a = this.a.a();
        try {
            if (this.f11911b == null) {
                this.f11911b = new Timer(true);
            }
            this.f11911b.schedule(new n(0, this), 0L);
            this.f11911b.scheduleAtFixedRate(new o(this, new ArrayList()), 100L, 100L);
            a.close();
        } finally {
        }
    }

    @Override // io.sentry.k
    public final void b(h6 h6Var) {
        Iterator it = this.f11914e.iterator();
        while (it.hasNext()) {
            ((io.sentry.android.core.g1) ((t0) it.next())).e(h6Var);
        }
    }

    @Override // io.sentry.k
    public final List c(String str) {
        ConcurrentHashMap concurrentHashMap = this.f11912c;
        p pVar = (p) concurrentHashMap.remove(str);
        this.f11916g.getLogger().u(SentryLevel.DEBUG, a3.e.k("stop collecting performance info for ", str), new Object[0]);
        if (concurrentHashMap.isEmpty()) {
            close();
        }
        if (pVar != null) {
            return pVar.a;
        }
        return null;
    }

    @Override // io.sentry.k
    public final void close() {
        this.f11916g.getLogger().u(SentryLevel.DEBUG, "stop collecting all performance info for transactions", new Object[0]);
        this.f11912c.clear();
        Iterator it = this.f11914e.iterator();
        while (it.hasNext()) {
            ((io.sentry.android.core.g1) ((t0) it.next())).d();
        }
        if (this.f11917h.getAndSet(false)) {
            r a = this.a.a();
            try {
                if (this.f11911b != null) {
                    this.f11911b.cancel();
                    this.f11911b = null;
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
    }

    @Override // io.sentry.k
    public final void d(h6 h6Var) {
        Iterator it = this.f11914e.iterator();
        while (it.hasNext()) {
            ((io.sentry.android.core.g1) ((t0) it.next())).f(h6Var);
        }
    }

    @Override // io.sentry.k
    public final void e(d6 d6Var) {
        if (this.f11915f) {
            this.f11916g.getLogger().u(SentryLevel.INFO, "No collector found. Performance stats will not be captured during transactions.", new Object[0]);
            return;
        }
        Iterator it = this.f11914e.iterator();
        while (it.hasNext()) {
            ((io.sentry.android.core.g1) ((t0) it.next())).f(d6Var);
        }
        String vVar = d6Var.a.toString();
        ConcurrentHashMap concurrentHashMap = this.f11912c;
        if (!concurrentHashMap.containsKey(vVar)) {
            concurrentHashMap.put(vVar, new p(this, d6Var));
        }
        a(vVar);
    }

    @Override // io.sentry.k
    public final List f(f1 f1Var) {
        this.f11916g.getLogger().u(SentryLevel.DEBUG, "stop collecting performance info for transactions %s (%s)", f1Var.getName(), f1Var.o().f11610d.toString());
        Iterator it = this.f11914e.iterator();
        while (it.hasNext()) {
            ((io.sentry.android.core.g1) ((t0) it.next())).e(f1Var);
        }
        return c(f1Var.k().toString());
    }
}
