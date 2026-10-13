package io.sentry.android.core;

import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.l1;
import io.sentry.v3;
import io.sentry.v5;
import io.sentry.x3;
import io.sentry.y3;
import java.io.Closeable;
import java.util.concurrent.Future;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
final class SendCachedEnvelopeIntegration implements l1, io.sentry.l0, Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final y3 f11058d;

    /* renamed from: e, reason: collision with root package name */
    public final io.sentry.util.e f11059e;

    /* renamed from: v, reason: collision with root package name */
    public io.sentry.m0 f11061v;

    /* renamed from: w, reason: collision with root package name */
    public v3 f11062w;

    /* renamed from: x, reason: collision with root package name */
    public SentryAndroidOptions f11063x;

    /* renamed from: y, reason: collision with root package name */
    public x3 f11064y;

    /* renamed from: i, reason: collision with root package name */
    public final AtomicBoolean f11060i = new AtomicBoolean(false);
    public final AtomicBoolean E = new AtomicBoolean(false);
    public final AtomicBoolean F = new AtomicBoolean(false);
    public final io.sentry.util.a G = new io.sentry.util.a();

    public SendCachedEnvelopeIntegration(y3 y3Var, io.sentry.util.e eVar) {
        this.f11058d = y3Var;
        this.f11059e = eVar;
    }

    public final void c(v3 v3Var, SentryAndroidOptions sentryAndroidOptions) {
        try {
            io.sentry.r a = this.G.a();
            try {
                Future submit = sentryAndroidOptions.getExecutorService().submit(new b1(this, sentryAndroidOptions, v3Var, 0));
                if (((Boolean) this.f11059e.a()).booleanValue() && this.f11060i.compareAndSet(false, true)) {
                    sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "Startup Crash marker exists, blocking flush.", new Object[0]);
                    try {
                        submit.get(sentryAndroidOptions.getStartupCrashFlushTimeoutMillis(), TimeUnit.MILLISECONDS);
                    } catch (TimeoutException unused) {
                        sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "Synchronous send timed out, continuing in the background.", new Object[0]);
                    }
                }
                sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "SendCachedEnvelopeIntegration installed.", new Object[0]);
                a.close();
            } finally {
            }
        } catch (RejectedExecutionException e9) {
            sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Failed to call the executor. Cached events will not be sent. Did you call Sentry.close()?", e9);
        } catch (Throwable th2) {
            sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Failed to call the executor. Cached events will not be sent", th2);
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.F.set(true);
        io.sentry.m0 m0Var = this.f11061v;
        if (m0Var != null) {
            m0Var.Z(this);
        }
    }

    @Override // io.sentry.l0
    public final void onConnectionStatusChanged(io.sentry.k0 k0Var) {
        SentryAndroidOptions sentryAndroidOptions;
        v3 v3Var = this.f11062w;
        if (v3Var == null || (sentryAndroidOptions = this.f11063x) == null || k0Var == io.sentry.k0.DISCONNECTED) {
            return;
        }
        c(v3Var, sentryAndroidOptions);
    }

    @Override // io.sentry.l1
    public final void register(io.sentry.x0 x0Var, v5 v5Var) {
        v3 v3Var = v3.a;
        this.f11062w = v3Var;
        SentryAndroidOptions sentryAndroidOptions = v5Var instanceof SentryAndroidOptions ? (SentryAndroidOptions) v5Var : null;
        d9.a.L(sentryAndroidOptions, "SentryAndroidOptions is required");
        this.f11063x = sentryAndroidOptions;
        String cacheDirPath = v5Var.getCacheDirPath();
        ILogger logger = v5Var.getLogger();
        this.f11058d.getClass();
        if (!y3.y(cacheDirPath, logger)) {
            v5Var.getLogger().u(SentryLevel.ERROR, "No cache dir path is defined in options.", new Object[0]);
        } else {
            com.facebook.imagepipeline.nativecode.b.a("SendCachedEnvelope");
            c(v3Var, this.f11063x);
        }
    }
}
