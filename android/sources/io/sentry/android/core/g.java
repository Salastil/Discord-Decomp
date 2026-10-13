package io.sentry.android.core;

import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.c3;
import io.sentry.c4;
import io.sentry.d5;
import io.sentry.f3;
import io.sentry.i4;
import io.sentry.n2;
import io.sentry.o6;
import io.sentry.v5;
import java.io.File;
import java.util.ArrayList;
import java.util.Map;
import java.util.concurrent.Future;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public final class g implements io.sentry.n0, io.sentry.transport.o {
    public io.sentry.x0 G;
    public Future H;
    public io.sentry.k I;
    public io.sentry.protocol.v K;
    public io.sentry.protocol.v L;
    public final AtomicBoolean M;
    public i4 N;
    public volatile boolean O;
    public boolean P;
    public boolean Q;
    public int R;
    public final io.sentry.util.a S;
    public final io.sentry.util.a T;

    /* renamed from: d, reason: collision with root package name */
    public final ILogger f11131d;

    /* renamed from: e, reason: collision with root package name */
    public final String f11132e;

    /* renamed from: i, reason: collision with root package name */
    public final int f11133i;

    /* renamed from: v, reason: collision with root package name */
    public final io.sentry.a1 f11134v;

    /* renamed from: w, reason: collision with root package name */
    public final j0 f11135w;

    /* renamed from: y, reason: collision with root package name */
    public final io.sentry.android.core.internal.util.o f11137y;

    /* renamed from: x, reason: collision with root package name */
    public boolean f11136x = false;
    public s E = null;
    public boolean F = false;
    public final ArrayList J = new ArrayList();

    public g(j0 j0Var, io.sentry.android.core.internal.util.o oVar, ILogger iLogger, String str, int i5, io.sentry.a1 a1Var) {
        io.sentry.protocol.v vVar = io.sentry.protocol.v.f11895e;
        this.K = vVar;
        this.L = vVar;
        this.M = new AtomicBoolean(false);
        this.N = new d5();
        this.O = true;
        this.P = false;
        this.Q = false;
        this.R = 0;
        this.S = new io.sentry.util.a();
        this.T = new io.sentry.util.a();
        this.f11131d = iLogger;
        this.f11137y = oVar;
        this.f11135w = j0Var;
        this.f11132e = str;
        this.f11133i = i5;
        this.f11134v = a1Var;
    }

    @Override // io.sentry.n0
    public final void a(boolean z5) {
        io.sentry.r a = this.S.a();
        try {
            this.R = 0;
            this.P = true;
            if (z5) {
                h(false);
                this.M.set(true);
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

    @Override // io.sentry.n0
    public final void b(f3 f3Var) {
        io.sentry.r a = this.S.a();
        try {
            int i5 = f.a[f3Var.ordinal()];
            if (i5 == 1) {
                int i6 = this.R - 1;
                this.R = i6;
                if (i6 > 0) {
                    a.close();
                    return;
                } else {
                    if (i6 < 0) {
                        this.R = 0;
                    }
                    this.P = true;
                }
            } else if (i5 == 2) {
                this.P = true;
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

    @Override // io.sentry.n0
    public final void c(f3 f3Var, o6 o6Var) {
        io.sentry.r a = this.S.a();
        try {
            if (this.O) {
                double c6 = io.sentry.util.j.a().c();
                Double profileSessionSampleRate = o6Var.a.getProfileSessionSampleRate();
                this.Q = profileSessionSampleRate != null && profileSessionSampleRate.doubleValue() >= c6;
                this.O = false;
            }
            if (!this.Q) {
                this.f11131d.u(SentryLevel.DEBUG, "Profiler was not started due to sampling decision.", new Object[0]);
                a.close();
                return;
            }
            int i5 = f.a[f3Var.ordinal()];
            if (i5 == 1) {
                if (this.R < 0) {
                    this.R = 0;
                }
                this.R++;
            } else if (i5 == 2 && this.F) {
                this.f11131d.u(SentryLevel.DEBUG, "Profiler is already running.", new Object[0]);
                a.close();
                return;
            }
            if (!this.F) {
                this.f11131d.u(SentryLevel.DEBUG, "Started Profiler.", new Object[0]);
                g();
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

    @Override // io.sentry.n0
    public final void d() {
        this.O = true;
    }

    @Override // io.sentry.n0
    public final io.sentry.protocol.v e() {
        return this.K;
    }

    public final void f() {
        io.sentry.x0 x0Var = this.G;
        if ((x0Var == null || x0Var == n2.f11682b) && c4.f() != n2.f11682b) {
            this.G = c4.f();
            this.I = c4.f().l().getCompositePerformanceCollector();
            io.sentry.transport.p d6 = this.G.d();
            if (d6 != null) {
                d6.f12015v.add(this);
            }
        }
    }

    public final void g() {
        f();
        this.f11135w.getClass();
        boolean z5 = this.f11136x;
        ILogger iLogger = this.f11131d;
        if (!z5) {
            this.f11136x = true;
            String str = this.f11132e;
            if (str == null) {
                iLogger.u(SentryLevel.WARNING, "Disabling profiling because no profiling traces dir path is defined in options.", new Object[0]);
            } else {
                int i5 = this.f11133i;
                if (i5 <= 0) {
                    iLogger.u(SentryLevel.WARNING, "Disabling profiling because trace rate is set to %d", Integer.valueOf(i5));
                } else {
                    this.E = new s(str, ((int) TimeUnit.SECONDS.toMicros(1L)) / i5, this.f11137y, null, this.f11131d);
                }
            }
        }
        if (this.E == null) {
            return;
        }
        io.sentry.x0 x0Var = this.G;
        if (x0Var != null) {
            io.sentry.transport.p d6 = x0Var.d();
            if (d6 != null && (d6.f(io.sentry.l.All) || d6.f(io.sentry.l.ProfileChunkUi))) {
                iLogger.u(SentryLevel.WARNING, "SDK is rate limited. Stopping profiler.", new Object[0]);
                h(false);
                return;
            } else {
                if (this.G.l().getConnectionStatusProvider().I() == io.sentry.k0.DISCONNECTED) {
                    iLogger.u(SentryLevel.WARNING, "Device is offline. Stopping profiler.", new Object[0]);
                    h(false);
                    return;
                }
                this.N = this.G.l().getDateProvider().now();
            }
        } else {
            this.N = new d5();
        }
        if (this.E.c() == null) {
            return;
        }
        this.F = true;
        io.sentry.protocol.v vVar = this.K;
        io.sentry.protocol.v vVar2 = io.sentry.protocol.v.f11895e;
        if (vVar.equals(vVar2)) {
            this.K = new io.sentry.protocol.v();
        }
        if (this.L.equals(vVar2)) {
            this.L = new io.sentry.protocol.v();
        }
        io.sentry.k kVar = this.I;
        if (kVar != null) {
            kVar.a(this.L.toString());
        }
        try {
            this.H = this.f11134v.l(new com.google.firebase.messaging.s(27, this), LogThrottleSingleton.RATE_LIMIT_ONE_MINUTE);
        } catch (RejectedExecutionException e9) {
            iLogger.k(SentryLevel.ERROR, "Failed to schedule profiling chunk finish. Did you call Sentry.close()?", e9);
            this.P = true;
        }
    }

    public final void h(boolean z5) {
        f();
        io.sentry.r a = this.S.a();
        try {
            Future future = this.H;
            if (future != null) {
                future.cancel(true);
            }
            if (this.E != null && this.F) {
                this.f11135w.getClass();
                io.sentry.k kVar = this.I;
                q a10 = this.E.a(kVar != null ? kVar.c(this.L.toString()) : null, false);
                ILogger iLogger = this.f11131d;
                if (a10 == null) {
                    iLogger.u(SentryLevel.ERROR, "An error occurred while collecting a profile chunk, and it won't be sent.", new Object[0]);
                } else {
                    io.sentry.r a11 = this.T.a();
                    try {
                        this.J.add(new c3(this.K, this.L, (Map) a10.f11305w, (File) a10.f11304v, this.N));
                        a11.close();
                    } finally {
                    }
                }
                this.F = false;
                this.L = io.sentry.protocol.v.f11895e;
                io.sentry.x0 x0Var = this.G;
                if (x0Var != null) {
                    v5 l6 = x0Var.l();
                    try {
                        l6.getExecutorService().submit(new b1(this, l6, x0Var, 2));
                    } catch (Throwable th2) {
                        l6.getLogger().k(SentryLevel.DEBUG, "Failed to send profile chunks.", th2);
                    }
                }
                if (!z5 || this.P) {
                    this.K = io.sentry.protocol.v.f11895e;
                    iLogger.u(SentryLevel.DEBUG, "Profile chunk finished.", new Object[0]);
                } else {
                    iLogger.u(SentryLevel.DEBUG, "Profile chunk finished. Starting a new one.", new Object[0]);
                    g();
                }
                a.close();
                return;
            }
            io.sentry.protocol.v vVar = io.sentry.protocol.v.f11895e;
            this.K = vVar;
            this.L = vVar;
            a.close();
        } finally {
        }
    }

    @Override // io.sentry.transport.o
    public final void onRateLimitChanged(io.sentry.transport.p pVar) {
        if (pVar.f(io.sentry.l.All) || pVar.f(io.sentry.l.ProfileChunkUi)) {
            this.f11131d.u(SentryLevel.WARNING, "SDK is rate limited. Stopping profiler.", new Object[0]);
            h(false);
        }
    }
}
