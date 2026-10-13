package io.sentry.android.core;

import android.content.Context;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.l1;
import io.sentry.v5;
import java.io.Closeable;

/* loaded from: classes3.dex */
public final class AnrIntegration implements l1, Closeable {

    /* renamed from: w, reason: collision with root package name */
    public static a f11027w;

    /* renamed from: x, reason: collision with root package name */
    public static final io.sentry.util.a f11028x = new io.sentry.util.a();

    /* renamed from: d, reason: collision with root package name */
    public final Context f11029d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f11030e = false;

    /* renamed from: i, reason: collision with root package name */
    public final io.sentry.util.a f11031i = new io.sentry.util.a();

    /* renamed from: v, reason: collision with root package name */
    public v5 f11032v;

    public AnrIntegration(Context context) {
        Context applicationContext = context.getApplicationContext();
        this.f11029d = applicationContext != null ? applicationContext : context;
    }

    public final void c(SentryAndroidOptions sentryAndroidOptions) {
        io.sentry.r a = f11028x.a();
        try {
            if (f11027w == null) {
                ILogger logger = sentryAndroidOptions.getLogger();
                SentryLevel sentryLevel = SentryLevel.DEBUG;
                logger.u(sentryLevel, "ANR timeout in milliseconds: %d", Long.valueOf(sentryAndroidOptions.getAnrTimeoutIntervalMillis()));
                a aVar = new a(sentryAndroidOptions.getAnrTimeoutIntervalMillis(), sentryAndroidOptions.isAnrReportInDebug(), new w(0, this, sentryAndroidOptions), sentryAndroidOptions.getLogger(), this.f11029d);
                f11027w = aVar;
                aVar.start();
                sentryAndroidOptions.getLogger().u(sentryLevel, "AnrIntegration installed.", new Object[0]);
            }
            a.close();
        } finally {
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        io.sentry.r a = this.f11031i.a();
        try {
            this.f11030e = true;
            a.close();
            a = f11028x.a();
            try {
                a aVar = f11027w;
                if (aVar != null) {
                    aVar.interrupt();
                    f11027w = null;
                    v5 v5Var = this.f11032v;
                    if (v5Var != null) {
                        v5Var.getLogger().u(SentryLevel.DEBUG, "AnrIntegration removed.", new Object[0]);
                    }
                }
                a.close();
            } finally {
                try {
                    a.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
            }
        } catch (Throwable th3) {
            throw th3;
        }
    }

    @Override // io.sentry.l1
    public final void register(io.sentry.x0 x0Var, v5 v5Var) {
        this.f11032v = v5Var;
        SentryAndroidOptions sentryAndroidOptions = (SentryAndroidOptions) v5Var;
        sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "AnrIntegration enabled: %s", Boolean.valueOf(sentryAndroidOptions.isAnrEnabled()));
        if (sentryAndroidOptions.isAnrEnabled()) {
            com.facebook.imagepipeline.nativecode.b.a("Anr");
            try {
                sentryAndroidOptions.getExecutorService().submit(new com.mkuczera.haptic.a(12, this, sentryAndroidOptions));
            } catch (Throwable th2) {
                sentryAndroidOptions.getLogger().k(SentryLevel.DEBUG, "Failed to start AnrIntegration on executor thread.", th2);
            }
        }
    }
}
