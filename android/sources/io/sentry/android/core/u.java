package io.sentry.android.core;

import android.content.Context;
import android.os.Build;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.c4;
import io.sentry.d6;
import io.sentry.g3;
import io.sentry.h3;
import io.sentry.v5;
import java.io.File;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Future;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public final class u implements io.sentry.g1 {
    public final io.sentry.android.core.internal.util.o G;
    public volatile h3 H;
    public long J;
    public long K;
    public Date L;

    /* renamed from: d, reason: collision with root package name */
    public final Context f11332d;

    /* renamed from: e, reason: collision with root package name */
    public final ILogger f11333e;

    /* renamed from: i, reason: collision with root package name */
    public final String f11334i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f11335v;

    /* renamed from: w, reason: collision with root package name */
    public final int f11336w;

    /* renamed from: x, reason: collision with root package name */
    public final io.sentry.a1 f11337x;

    /* renamed from: y, reason: collision with root package name */
    public final j0 f11338y;
    public boolean E = false;
    public final AtomicBoolean F = new AtomicBoolean(false);
    public volatile s I = null;
    public final io.sentry.util.a M = new io.sentry.util.a();

    public u(Context context, j0 j0Var, io.sentry.android.core.internal.util.o oVar, ILogger iLogger, String str, boolean z5, int i5, io.sentry.a1 a1Var) {
        Context applicationContext = context.getApplicationContext();
        this.f11332d = applicationContext != null ? applicationContext : context;
        d9.a.L(iLogger, "ILogger is required");
        this.f11333e = iLogger;
        this.G = oVar;
        d9.a.L(j0Var, "The BuildInfoProvider is required.");
        this.f11338y = j0Var;
        this.f11334i = str;
        this.f11335v = z5;
        this.f11336w = i5;
        d9.a.L(a1Var, "The ISentryExecutorService is required.");
        this.f11337x = a1Var;
        this.L = ki.b.r();
    }

    public final g3 a(String str, String str2, String str3, boolean z5, List list, v5 v5Var) {
        this.f11338y.getClass();
        int i5 = Build.VERSION.SDK_INT;
        if (this.I != null) {
            io.sentry.r a = this.M.a();
            try {
                h3 h3Var = this.H;
                if (h3Var == null || !h3Var.f11579d.equals(str2)) {
                    this.f11333e.u(SentryLevel.INFO, "Transaction %s (%s) finished, but was not currently being profiled. Skipping", str, str3);
                    a.close();
                    return null;
                }
                this.H = null;
                a.close();
                this.f11333e.u(SentryLevel.DEBUG, "Transaction %s (%s) finished.", str, str3);
                q a10 = this.I.a(list, false);
                this.F.set(false);
                if (a10 != null) {
                    long j = a10.f11302e - this.J;
                    ArrayList arrayList = new ArrayList(1);
                    arrayList.add(h3Var);
                    long j5 = a10.f11302e;
                    long j7 = this.J;
                    long j10 = a10.f11303i;
                    long j11 = this.K;
                    if (h3Var.f11583w == null) {
                        h3Var.f11583w = Long.valueOf(j5 - j7);
                        h3Var.f11582v = Long.valueOf(h3Var.f11582v.longValue() - j7);
                        h3Var.f11585y = Long.valueOf(j10 - j11);
                        h3Var.f11584x = Long.valueOf(h3Var.f11584x.longValue() - j11);
                    }
                    Long l6 = v5Var instanceof SentryAndroidOptions ? o0.c(this.f11332d, (SentryAndroidOptions) v5Var).f11278h : null;
                    String l7 = l6 != null ? Long.toString(l6.longValue()) : "0";
                    String[] strArr = Build.SUPPORTED_ABIS;
                    File file = (File) a10.f11304v;
                    Date date = this.L;
                    String l10 = Long.toString(j);
                    this.f11338y.getClass();
                    String str4 = (strArr == null || strArr.length <= 0) ? "" : strArr[0];
                    io.sentry.g0 g0Var = new io.sentry.g0(3);
                    this.f11338y.getClass();
                    String str5 = Build.MANUFACTURER;
                    this.f11338y.getClass();
                    String str6 = Build.MODEL;
                    this.f11338y.getClass();
                    return new g3(file, date, arrayList, str, str2, str3, l10, i5, str4, g0Var, str5, str6, Build.VERSION.RELEASE, this.f11338y.a(), l7, v5Var.getProguardUuid(), v5Var.getRelease(), v5Var.getEnvironment(), (a10.f11301d || z5) ? "timeout" : "normal", (Map) a10.f11305w);
                }
            } finally {
            }
        }
        return null;
    }

    @Override // io.sentry.g1
    public final void b(io.sentry.f1 f1Var) {
        if (this.F.get() && this.H == null) {
            io.sentry.r a = this.M.a();
            try {
                if (this.F.get() && this.H == null) {
                    this.H = new h3(f1Var, Long.valueOf(this.J), Long.valueOf(this.K));
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

    @Override // io.sentry.g1
    public final g3 c(d6 d6Var, List list, v5 v5Var) {
        return a(d6Var.f11513e, d6Var.a.toString(), d6Var.f11510b.f11590c.f11610d.toString(), false, list, v5Var);
    }

    @Override // io.sentry.g1
    public final void close() {
        u uVar;
        h3 h3Var = this.H;
        if (h3Var != null) {
            uVar = this;
            uVar.a(h3Var.f11581i, h3Var.f11579d, h3Var.f11580e, true, null, c4.f().l());
        } else {
            uVar = this;
        }
        uVar.F.set(false);
        if (uVar.I == null) {
            return;
        }
        s sVar = uVar.I;
        io.sentry.r a = sVar.f11327o.a();
        try {
            Future future = sVar.f11318d;
            if (future != null) {
                future.cancel(true);
                sVar.f11318d = null;
            }
            if (sVar.f11326n) {
                sVar.a(null, true);
            }
            a.close();
        } finally {
        }
    }

    @Override // io.sentry.g1
    public final boolean isRunning() {
        return this.F.get();
    }

    @Override // io.sentry.g1
    public final void start() {
        r c6;
        this.f11338y.getClass();
        if (this.F.getAndSet(true)) {
            return;
        }
        if (!this.E) {
            this.E = true;
            if (this.f11335v) {
                String str = this.f11334i;
                if (str == null) {
                    this.f11333e.u(SentryLevel.WARNING, "Disabling profiling because no profiling traces dir path is defined in options.", new Object[0]);
                } else {
                    int i5 = this.f11336w;
                    if (i5 <= 0) {
                        this.f11333e.u(SentryLevel.WARNING, "Disabling profiling because trace rate is set to %d", Integer.valueOf(i5));
                    } else {
                        this.I = new s(str, ((int) TimeUnit.SECONDS.toMicros(1L)) / this.f11336w, this.G, this.f11337x, this.f11333e);
                    }
                }
            } else {
                this.f11333e.u(SentryLevel.INFO, "Profiling is disabled in options.", new Object[0]);
            }
        }
        if (this.I != null && (c6 = this.I.c()) != null) {
            this.J = c6.a;
            this.K = c6.f11311b;
            this.L = c6.f11312c;
            this.f11333e.u(SentryLevel.DEBUG, "Profiler started.", new Object[0]);
            return;
        }
        if (this.I != null && this.I.f11326n) {
            this.f11333e.u(SentryLevel.WARNING, "A profile is already running. This profile will be ignored.", new Object[0]);
            return;
        }
        io.sentry.r a = this.M.a();
        try {
            this.H = null;
            a.close();
            this.F.set(false);
        } finally {
        }
    }
}
