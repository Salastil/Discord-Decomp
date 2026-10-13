package io.sentry;

import java.io.Closeable;
import java.io.File;
import java.util.ArrayList;
import java.util.concurrent.RejectedExecutionException;

/* loaded from: classes3.dex */
public final class u3 implements x0 {
    public final IScope a;

    /* renamed from: b, reason: collision with root package name */
    public final IScope f12029b;

    /* renamed from: c, reason: collision with root package name */
    public final IScope f12030c;

    /* renamed from: d, reason: collision with root package name */
    public final k f12031d;

    /* renamed from: e, reason: collision with root package name */
    public final j f12032e;

    public u3(IScope iScope, IScope iScope2, IScope iScope3) {
        this.f12032e = new j(iScope3, iScope2, iScope);
        this.a = iScope;
        this.f12029b = iScope2;
        this.f12030c = iScope3;
        v5 l6 = l();
        d9.a.L(l6, "SentryOptions is required.");
        if (l6.getDsn() == null || l6.getDsn().isEmpty()) {
            throw new IllegalArgumentException("Scopes requires a DSN to be instantiated. Considering using the NoOpScopes if no DSN is available.");
        }
        this.f12031d = l6.getCompositePerformanceCollector();
    }

    @Override // io.sentry.x0
    public final void a(boolean z5) {
        if (!isEnabled()) {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'close' call is a no-op.", new Object[0]);
            return;
        }
        try {
            for (l1 l1Var : l().getIntegrations()) {
                if (l1Var instanceof Closeable) {
                    try {
                        ((Closeable) l1Var).close();
                    } catch (Throwable th2) {
                        l().getLogger().u(SentryLevel.WARNING, "Failed to close the integration {}.", l1Var, th2);
                    }
                }
            }
            boolean isEnabled = isEnabled();
            j jVar = this.f12032e;
            if (isEnabled) {
                try {
                    jVar.b(null).clear();
                } catch (Throwable th3) {
                    l().getLogger().k(SentryLevel.ERROR, "Error in the 'configureScope' callback.", th3);
                }
            } else {
                l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'configureScope' call is a no-op.", new Object[0]);
            }
            t3 t3Var = t3.ISOLATION;
            if (isEnabled()) {
                try {
                    jVar.b(t3Var).clear();
                } catch (Throwable th4) {
                    l().getLogger().k(SentryLevel.ERROR, "Error in the 'configureScope' callback.", th4);
                }
            } else {
                l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'configureScope' call is a no-op.", new Object[0]);
            }
            l().getBackpressureMonitor().close();
            l().getTransactionProfiler().close();
            l().getContinuousProfiler().a(true);
            l().getCompositePerformanceCollector().close();
            l().getConnectionStatusProvider().close();
            a1 executorService = l().getExecutorService();
            if (z5) {
                try {
                    executorService.submit(new com.mkuczera.haptic.a(9, this, executorService));
                } catch (RejectedExecutionException e9) {
                    l().getLogger().k(SentryLevel.WARNING, "Failed to submit executor service shutdown task during restart. Shutting down synchronously.", e9);
                    executorService.a(l().getShutdownTimeoutMillis());
                }
            } else {
                executorService.a(l().getShutdownTimeoutMillis());
            }
            t3 t3Var2 = t3.CURRENT;
            if (isEnabled()) {
                try {
                    jVar.b(t3Var2).C().a(z5);
                } catch (Throwable th5) {
                    l().getLogger().k(SentryLevel.ERROR, "Error in the 'configureScope' callback.", th5);
                }
            } else {
                l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'configureScope' call is a no-op.", new Object[0]);
            }
            t3 t3Var3 = t3.ISOLATION;
            if (isEnabled()) {
                try {
                    jVar.b(t3Var3).C().a(z5);
                } catch (Throwable th6) {
                    l().getLogger().k(SentryLevel.ERROR, "Error in the 'configureScope' callback.", th6);
                }
            } else {
                l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'configureScope' call is a no-op.", new Object[0]);
            }
            t3 t3Var4 = t3.GLOBAL;
            if (!isEnabled()) {
                l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'configureScope' call is a no-op.", new Object[0]);
                return;
            }
            try {
                jVar.b(t3Var4).C().a(z5);
            } catch (Throwable th7) {
                l().getLogger().k(SentryLevel.ERROR, "Error in the 'configureScope' callback.", th7);
            }
        } catch (Throwable th8) {
            l().getLogger().k(SentryLevel.ERROR, "Error while closing the Scopes.", th8);
        }
    }

    @Override // io.sentry.x0
    public final void b(long j) {
        if (!isEnabled()) {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'flush' call is a no-op.", new Object[0]);
            return;
        }
        try {
            this.f12032e.C().b(j);
        } catch (Throwable th2) {
            l().getLogger().k(SentryLevel.ERROR, "Error in the 'client.flush'.", th2);
        }
    }

    @Override // io.sentry.x0
    public final void c(Breadcrumb breadcrumb) {
        g(breadcrumb, new Hint());
    }

    @Override // io.sentry.x0
    public final io.sentry.transport.p d() {
        return this.f12032e.C().d();
    }

    @Override // io.sentry.x0
    public final boolean e() {
        return this.f12032e.C().e();
    }

    @Override // io.sentry.x0
    public final void f(String str, String str2) {
        if (!isEnabled()) {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'setTag' call is a no-op.", new Object[0]);
        } else if (str == null || str2 == null) {
            l().getLogger().u(SentryLevel.WARNING, "setTag called with null parameter.", new Object[0]);
        } else {
            this.f12032e.f(str, str2);
        }
    }

    @Override // io.sentry.x0
    public final void g(Breadcrumb breadcrumb, Hint hint) {
        if (isEnabled()) {
            this.f12032e.g(breadcrumb, hint);
        } else {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'addBreadcrumb' call is a no-op.", new Object[0]);
        }
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v h(io.sentry.internal.debugmeta.c cVar, Hint hint) {
        io.sentry.protocol.v vVar = io.sentry.protocol.v.f11895e;
        if (!isEnabled()) {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'captureEnvelope' call is a no-op.", new Object[0]);
            return vVar;
        }
        try {
            io.sentry.protocol.v h6 = this.f12032e.C().h(cVar, hint);
            return h6 != null ? h6 : vVar;
        } catch (Throwable th2) {
            l().getLogger().k(SentryLevel.ERROR, "Error while capturing envelope.", th2);
            return vVar;
        }
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v i(d3 d3Var) {
        d9.a.L(d3Var, "profilingContinuousData is required");
        io.sentry.protocol.v vVar = io.sentry.protocol.v.f11895e;
        if (!isEnabled()) {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'captureTransaction' call is a no-op.", new Object[0]);
            return vVar;
        }
        try {
            return this.f12032e.C().i(d3Var);
        } catch (Throwable th2) {
            l().getLogger().k(SentryLevel.ERROR, "Error while capturing profile chunk with id: " + d3Var.f11496i, th2);
            return vVar;
        }
    }

    @Override // io.sentry.x0
    public final boolean isEnabled() {
        return this.f12032e.C().isEnabled();
    }

    @Override // io.sentry.x0
    public final f1 j(p6 p6Var, q6 q6Var) {
        Double valueOf;
        p6Var.F = (String) q6Var.f58d;
        boolean isEnabled = isEnabled();
        f1 f1Var = v2.a;
        if (!isEnabled) {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'startTransaction' returns a no-op.", new Object[0]);
        } else if (io.sentry.util.k.a(p6Var.F, l().getIgnoredSpanOrigins())) {
            l().getLogger().u(SentryLevel.DEBUG, "Returning no-op for span origin %s as the SDK has been configured to ignore it", p6Var.F);
        } else if (!l().getInstrumenter().equals(p6Var.I)) {
            l().getLogger().u(SentryLevel.DEBUG, "Returning no-op for instrumenter %s as the SDK has been configured to use instrumenter %s", p6Var.I, l().getInstrumenter());
        } else if (l().isTracingEnabled()) {
            c cVar = p6Var.J;
            if (cVar == null || (valueOf = cVar.f11414d) == null) {
                Double d6 = ((c) this.f12032e.z().f7965v).f11414d;
                valueOf = Double.valueOf(d6 == null ? 0.0d : d6.doubleValue());
            }
            f9.b a = l().getInternalTracesSampler().a(new e4.l(p6Var, valueOf));
            Boolean bool = (Boolean) a.f8472d;
            p6Var.a(a);
            e1 spanFactory = l().getSpanFactory();
            if (bool.booleanValue() && l().isContinuousProfilingEnabled()) {
                f3 profileLifecycle = l().getProfileLifecycle();
                f3 f3Var = f3.TRACE;
                if (profileLifecycle == f3Var && p6Var.L.equals(io.sentry.protocol.v.f11895e)) {
                    l().getContinuousProfiler().c(f3Var, l().getInternalTracesSampler());
                }
            }
            f1Var = spanFactory.a(p6Var, this, q6Var, this.f12031d);
            if (bool.booleanValue() && ((Boolean) a.f8475v).booleanValue()) {
                g1 transactionProfiler = l().getTransactionProfiler();
                if (!transactionProfiler.isRunning()) {
                    transactionProfiler.start();
                    transactionProfiler.b(f1Var);
                } else if (q6Var.f11919e) {
                    transactionProfiler.b(f1Var);
                }
            }
        } else {
            l().getLogger().u(SentryLevel.INFO, "Tracing is disabled and this 'startTransaction' returns a no-op.", new Object[0]);
        }
        if (q3.ON == ((q3) q6Var.f57c)) {
            f1Var.makeCurrent();
        }
        return f1Var;
    }

    @Override // io.sentry.x0
    public final Boolean k() {
        h4 h4Var = h4.f11586d;
        String cacheDirPath = l().getCacheDirPath();
        boolean isEnableAutoSessionTracking = l().isEnableAutoSessionTracking();
        r a = h4Var.f11588c.a();
        try {
            if (h4Var.a) {
                Boolean bool = h4Var.f11587b;
                a.close();
                return bool;
            }
            if (cacheDirPath == null) {
                a.close();
                return null;
            }
            boolean z5 = true;
            h4Var.a = true;
            File file = new File(cacheDirPath, "last_crash");
            File file2 = new File(cacheDirPath, ".sentry-native/last_crash");
            if (!file.exists()) {
                if (file2.exists()) {
                    if (!isEnableAutoSessionTracking) {
                        file2.delete();
                    }
                    h4Var.f11587b = Boolean.valueOf(z5);
                    a.close();
                    return h4Var.f11587b;
                }
                z5 = false;
                h4Var.f11587b = Boolean.valueOf(z5);
                a.close();
                return h4Var.f11587b;
            }
            file.delete();
            h4Var.f11587b = Boolean.valueOf(z5);
            a.close();
            return h4Var.f11587b;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // io.sentry.x0
    public final v5 l() {
        return this.f12032e.a.l();
    }

    @Override // io.sentry.x0
    public final f1 n() {
        if (isEnabled()) {
            return this.f12032e.n();
        }
        l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'getTransaction' call is a no-op.", new Object[0]);
        return null;
    }

    @Override // io.sentry.x0
    public final void o() {
        if (!isEnabled()) {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'endSession' call is a no-op.", new Object[0]);
            return;
        }
        j jVar = this.f12032e;
        g6 o6 = jVar.o();
        if (o6 != null) {
            jVar.C().c(o6, a5.k0.q(new r8.c(9)));
        }
    }

    @Override // io.sentry.x0
    public final void p() {
        if (!isEnabled()) {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'startSession' call is a no-op.", new Object[0]);
            return;
        }
        j jVar = this.f12032e;
        e4.r p3 = jVar.p();
        if (p3 == null) {
            l().getLogger().u(SentryLevel.WARNING, "Session could not be started.", new Object[0]);
            return;
        }
        g6 g6Var = (g6) p3.f8000e;
        if (g6Var != null) {
            jVar.C().c(g6Var, a5.k0.q(new r8.c(9)));
        }
        jVar.C().c((g6) p3.f8001i, a5.k0.q(new io.sentry.hints.j(0)));
    }

    @Override // io.sentry.x0
    public final void q(t3 t3Var, r3 r3Var) {
        if (!isEnabled()) {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'configureScope' call is a no-op.", new Object[0]);
            return;
        }
        try {
            r3Var.h(this.f12032e.b(t3Var));
        } catch (Throwable th2) {
            l().getLogger().k(SentryLevel.ERROR, "Error in the 'configureScope' callback.", th2);
        }
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v r(x5 x5Var, Hint hint) {
        IScope iScope = this.f12032e;
        io.sentry.protocol.v vVar = io.sentry.protocol.v.f11895e;
        if (!isEnabled()) {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'captureReplay' call is a no-op.", new Object[0]);
            return vVar;
        }
        try {
            return iScope.C().g(x5Var, iScope, hint);
        } catch (Throwable th2) {
            l().getLogger().k(SentryLevel.ERROR, "Error while capturing replay", th2);
            return vVar;
        }
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v s(Throwable th2, Hint hint) {
        io.sentry.protocol.v vVar = io.sentry.protocol.v.f11895e;
        boolean isEnabled = isEnabled();
        IScope iScope = this.f12032e;
        if (!isEnabled) {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'captureException' call is a no-op.", new Object[0]);
        } else if (th2 == null) {
            l().getLogger().u(SentryLevel.WARNING, "captureException called with null parameter.", new Object[0]);
        } else {
            try {
                SentryEvent sentryEvent = new SentryEvent(th2);
                iScope.I(sentryEvent);
                vVar = iScope.C().k(sentryEvent, iScope, hint);
            } catch (Throwable th3) {
                l().getLogger().k(SentryLevel.ERROR, "Error while capturing exception: " + th2.getMessage(), th3);
            }
        }
        iScope.N(vVar);
        return vVar;
    }

    @Override // io.sentry.x0
    public final void t(bc.a aVar) {
        if (!isEnabled()) {
            try {
                aVar.h(m2.f11667b);
                return;
            } catch (Throwable th2) {
                l().getLogger().k(SentryLevel.ERROR, "Error in the 'withScope' callback.", th2);
                return;
            }
        }
        IScope m1294clone = this.a.m1294clone();
        try {
            b1 a = c4.a.a(new u3(m1294clone, this.f12029b, this.f12030c));
            try {
                aVar.h(m1294clone);
                a.close();
            } finally {
            }
        } catch (Throwable th3) {
            l().getLogger().k(SentryLevel.ERROR, "Error in the 'withScope' callback.", th3);
        }
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v u(String str, SentryLevel sentryLevel) {
        io.sentry.protocol.v vVar = io.sentry.protocol.v.f11895e;
        boolean isEnabled = isEnabled();
        IScope iScope = this.f12032e;
        if (!isEnabled) {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'captureMessage' call is a no-op.", new Object[0]);
        } else if (str == null) {
            l().getLogger().u(SentryLevel.WARNING, "captureMessage called with null parameter.", new Object[0]);
        } else {
            try {
                z0 C = iScope.C();
                C.getClass();
                SentryEvent sentryEvent = new SentryEvent();
                io.sentry.protocol.n nVar = new io.sentry.protocol.n();
                nVar.f11842d = str;
                sentryEvent.N = nVar;
                sentryEvent.R = sentryLevel;
                vVar = C.k(sentryEvent, iScope, null);
            } catch (Throwable th2) {
                l().getLogger().k(SentryLevel.ERROR, "Error while capturing message: ".concat(str), th2);
            }
        }
        iScope.N(vVar);
        return vVar;
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v v(io.sentry.protocol.d0 d0Var, n6 n6Var, Hint hint, g3 g3Var) {
        io.sentry.protocol.d0 d0Var2;
        IScope iScope = this.f12032e;
        ArrayList arrayList = d0Var.P;
        io.sentry.protocol.v vVar = io.sentry.protocol.v.f11895e;
        if (!isEnabled()) {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'captureTransaction' call is a no-op.", new Object[0]);
            return vVar;
        }
        if (d0Var.O == null) {
            l().getLogger().u(SentryLevel.WARNING, "Transaction: %s is not finished and this 'captureTransaction' call is a no-op.", d0Var.f11543d);
            return vVar;
        }
        Boolean bool = Boolean.TRUE;
        i6 i5 = d0Var.f11544e.i();
        f9.b bVar = i5 == null ? null : i5.f11613v;
        if (bool.equals(Boolean.valueOf(bVar != null ? ((Boolean) bVar.f8472d).booleanValue() : false))) {
            try {
                d0Var2 = d0Var;
            } catch (Throwable th2) {
                th = th2;
                d0Var2 = d0Var;
            }
            try {
                return iScope.C().j(d0Var2, n6Var, iScope, hint, g3Var);
            } catch (Throwable th3) {
                th = th3;
                Throwable th4 = th;
                l().getLogger().k(SentryLevel.ERROR, "Error while capturing transaction with id: " + d0Var2.f11543d, th4);
                return vVar;
            }
        }
        l().getLogger().u(SentryLevel.DEBUG, "Transaction %s was dropped due to sampling decision.", d0Var.f11543d);
        if (l().getBackpressureMonitor().a() > 0) {
            io.sentry.clientreport.f clientReportRecorder = l().getClientReportRecorder();
            io.sentry.clientreport.d dVar = io.sentry.clientreport.d.BACKPRESSURE;
            clientReportRecorder.f(dVar, l.Transaction);
            l().getClientReportRecorder().n(dVar, l.Span, arrayList.size() + 1);
            return vVar;
        }
        io.sentry.clientreport.f clientReportRecorder2 = l().getClientReportRecorder();
        io.sentry.clientreport.d dVar2 = io.sentry.clientreport.d.SAMPLE_RATE;
        clientReportRecorder2.f(dVar2, l.Transaction);
        l().getClientReportRecorder().n(dVar2, l.Span, arrayList.size() + 1);
        return vVar;
    }

    @Override // io.sentry.x0
    public final x0 w(String str) {
        return new u3(this.a.m1294clone(), this.f12029b.m1294clone(), this.f12030c);
    }

    @Override // io.sentry.x0
    public final io.sentry.protocol.v x(SentryEvent sentryEvent, Hint hint) {
        IScope iScope = this.f12032e;
        io.sentry.protocol.v vVar = io.sentry.protocol.v.f11895e;
        if (!isEnabled()) {
            l().getLogger().u(SentryLevel.WARNING, "Instance is disabled and this 'captureEvent' call is a no-op.", new Object[0]);
            return vVar;
        }
        try {
            iScope.I(sentryEvent);
            vVar = iScope.C().k(sentryEvent, iScope, hint);
            iScope.N(vVar);
            return vVar;
        } catch (Throwable th2) {
            l().getLogger().k(SentryLevel.ERROR, "Error while capturing event with id: " + sentryEvent.f11543d, th2);
            return vVar;
        }
    }

    @Override // io.sentry.x0
    /* renamed from: clone, reason: merged with bridge method [inline-methods] */
    public final q0 m1299clone() {
        if (!isEnabled()) {
            l().getLogger().u(SentryLevel.WARNING, "Disabled Scopes cloned.", new Object[0]);
        }
        return new j0((u3) w("scopes clone"));
    }
}
