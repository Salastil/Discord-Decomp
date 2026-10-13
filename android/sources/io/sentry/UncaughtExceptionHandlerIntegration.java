package io.sentry;

import java.io.Closeable;
import java.lang.Thread;
import java.util.HashSet;

/* loaded from: classes3.dex */
public final class UncaughtExceptionHandlerIntegration implements l1, Thread.UncaughtExceptionHandler, Closeable {

    /* renamed from: w, reason: collision with root package name */
    public static final io.sentry.util.a f10991w = new io.sentry.util.a();

    /* renamed from: d, reason: collision with root package name */
    public Thread.UncaughtExceptionHandler f10992d;

    /* renamed from: e, reason: collision with root package name */
    public v3 f10993e;

    /* renamed from: i, reason: collision with root package name */
    public v5 f10994i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f10995v = false;

    public final void c(Thread.UncaughtExceptionHandler uncaughtExceptionHandler, HashSet hashSet) {
        if (uncaughtExceptionHandler == null) {
            v5 v5Var = this.f10994i;
            if (v5Var != null) {
                v5Var.getLogger().u(SentryLevel.DEBUG, "Found no UncaughtExceptionHandler to remove.", new Object[0]);
                return;
            }
            return;
        }
        if (!hashSet.add(uncaughtExceptionHandler)) {
            v5 v5Var2 = this.f10994i;
            if (v5Var2 != null) {
                v5Var2.getLogger().u(SentryLevel.WARNING, "Cycle detected in UncaughtExceptionHandler chain while removing handler.", new Object[0]);
                return;
            }
            return;
        }
        if (uncaughtExceptionHandler instanceof UncaughtExceptionHandlerIntegration) {
            UncaughtExceptionHandlerIntegration uncaughtExceptionHandlerIntegration = (UncaughtExceptionHandlerIntegration) uncaughtExceptionHandler;
            Thread.UncaughtExceptionHandler uncaughtExceptionHandler2 = uncaughtExceptionHandlerIntegration.f10992d;
            if (this != uncaughtExceptionHandler2) {
                c(uncaughtExceptionHandler2, hashSet);
                return;
            }
            uncaughtExceptionHandlerIntegration.f10992d = this.f10992d;
            v5 v5Var3 = this.f10994i;
            if (v5Var3 != null) {
                v5Var3.getLogger().u(SentryLevel.DEBUG, "UncaughtExceptionHandlerIntegration removed.", new Object[0]);
            }
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        r a = f10991w.a();
        try {
            if (this == Thread.getDefaultUncaughtExceptionHandler()) {
                Thread.setDefaultUncaughtExceptionHandler(this.f10992d);
                v5 v5Var = this.f10994i;
                if (v5Var != null) {
                    v5Var.getLogger().u(SentryLevel.DEBUG, "UncaughtExceptionHandlerIntegration removed.", new Object[0]);
                }
            } else {
                c(Thread.getDefaultUncaughtExceptionHandler(), new HashSet());
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

    @Override // io.sentry.l1
    public final void register(x0 x0Var, v5 v5Var) {
        v3 v3Var = v3.a;
        if (this.f10995v) {
            v5Var.getLogger().u(SentryLevel.ERROR, "Attempt to register a UncaughtExceptionHandlerIntegration twice.", new Object[0]);
            return;
        }
        this.f10995v = true;
        this.f10993e = v3Var;
        this.f10994i = v5Var;
        ILogger logger = v5Var.getLogger();
        SentryLevel sentryLevel = SentryLevel.DEBUG;
        logger.u(sentryLevel, "UncaughtExceptionHandlerIntegration enabled: %s", Boolean.valueOf(this.f10994i.isEnableUncaughtExceptionHandler()));
        if (this.f10994i.isEnableUncaughtExceptionHandler()) {
            r a = f10991w.a();
            try {
                Thread.UncaughtExceptionHandler defaultUncaughtExceptionHandler = Thread.getDefaultUncaughtExceptionHandler();
                if (defaultUncaughtExceptionHandler != null) {
                    this.f10994i.getLogger().u(sentryLevel, "default UncaughtExceptionHandler class='" + defaultUncaughtExceptionHandler.getClass().getName() + "'", new Object[0]);
                    if (defaultUncaughtExceptionHandler instanceof UncaughtExceptionHandlerIntegration) {
                        UncaughtExceptionHandlerIntegration uncaughtExceptionHandlerIntegration = (UncaughtExceptionHandlerIntegration) defaultUncaughtExceptionHandler;
                        v3 v3Var2 = uncaughtExceptionHandlerIntegration.f10993e;
                        if (v3Var2 != null) {
                            y0 y0Var = c4.a;
                            v3Var2.getClass();
                            this.f10992d = uncaughtExceptionHandlerIntegration.f10992d;
                        } else {
                            this.f10992d = defaultUncaughtExceptionHandler;
                        }
                    } else {
                        this.f10992d = defaultUncaughtExceptionHandler;
                    }
                }
                Thread.setDefaultUncaughtExceptionHandler(this);
                a.close();
                this.f10994i.getLogger().u(sentryLevel, "UncaughtExceptionHandlerIntegration installed.", new Object[0]);
                com.facebook.imagepipeline.nativecode.b.a("UncaughtExceptionHandler");
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

    @Override // java.lang.Thread.UncaughtExceptionHandler
    public final void uncaughtException(Thread thread, Throwable th2) {
        io.sentry.protocol.v vVar;
        v5 v5Var = this.f10994i;
        if (v5Var == null || this.f10993e == null) {
            return;
        }
        v5Var.getLogger().u(SentryLevel.INFO, "Uncaught exception received.", new Object[0]);
        try {
            r6 r6Var = new r6(this.f10994i.getFlushTimeoutMillis(), this.f10994i.getLogger());
            io.sentry.protocol.m mVar = new io.sentry.protocol.m();
            mVar.f11838v = Boolean.FALSE;
            mVar.f11835d = "UncaughtExceptionHandler";
            SentryEvent sentryEvent = new SentryEvent(new io.sentry.exception.a(mVar, th2, thread, false));
            sentryEvent.R = SentryLevel.FATAL;
            if (this.f10993e.n() == null && (vVar = sentryEvent.f11543d) != null) {
                r6Var.f(vVar);
            }
            Hint q5 = a5.k0.q(r6Var);
            boolean equals = this.f10993e.x(sentryEvent, q5).equals(io.sentry.protocol.v.f11895e);
            io.sentry.hints.e eVar = (io.sentry.hints.e) q5.c(io.sentry.hints.e.class, "sentry:eventDropReason");
            if ((!equals || io.sentry.hints.e.MULTITHREADED_DEDUPLICATION.equals(eVar)) && !r6Var.d()) {
                this.f10994i.getLogger().u(SentryLevel.WARNING, "Timed out waiting to flush event to disk before crashing. Event: %s", sentryEvent.f11543d);
            }
        } catch (Throwable th3) {
            this.f10994i.getLogger().k(SentryLevel.ERROR, "Error sending uncaught exception to Sentry.", th3);
        }
        if (this.f10992d != null) {
            this.f10994i.getLogger().u(SentryLevel.INFO, "Invoking inner uncaught exception handler.", new Object[0]);
            this.f10992d.uncaughtException(thread, th2);
        } else if (this.f10994i.isPrintUncaughtStackTrace()) {
            th2.printStackTrace();
        }
    }
}
