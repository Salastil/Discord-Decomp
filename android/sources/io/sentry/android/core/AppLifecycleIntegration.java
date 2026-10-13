package io.sentry.android.core;

import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.l1;
import io.sentry.v5;
import java.io.Closeable;

/* loaded from: classes3.dex */
public final class AppLifecycleIntegration implements l1, Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final io.sentry.util.a f11041d = new io.sentry.util.a();

    /* renamed from: e, reason: collision with root package name */
    public volatile w0 f11042e;

    /* renamed from: i, reason: collision with root package name */
    public SentryAndroidOptions f11043i;

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        io.sentry.r a = this.f11041d.a();
        try {
            w0 w0Var = this.f11042e;
            this.f11042e = null;
            a.close();
            if (w0Var != null) {
                e0.f11119w.i(w0Var);
                SentryAndroidOptions sentryAndroidOptions = this.f11043i;
                if (sentryAndroidOptions != null) {
                    sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "AppLifecycleIntegration removed.", new Object[0]);
                }
            }
            e0.f11119w.l();
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
    public final void register(io.sentry.x0 x0Var, v5 v5Var) {
        SentryAndroidOptions sentryAndroidOptions = v5Var instanceof SentryAndroidOptions ? (SentryAndroidOptions) v5Var : null;
        d9.a.L(sentryAndroidOptions, "SentryAndroidOptions is required");
        this.f11043i = sentryAndroidOptions;
        ILogger logger = sentryAndroidOptions.getLogger();
        SentryLevel sentryLevel = SentryLevel.DEBUG;
        logger.u(sentryLevel, "enableSessionTracking enabled: %s", Boolean.valueOf(this.f11043i.isEnableAutoSessionTracking()));
        this.f11043i.getLogger().u(sentryLevel, "enableAppLifecycleBreadcrumbs enabled: %s", Boolean.valueOf(this.f11043i.isEnableAppLifecycleBreadcrumbs()));
        if (this.f11043i.isEnableAutoSessionTracking() || this.f11043i.isEnableAppLifecycleBreadcrumbs()) {
            io.sentry.r a = this.f11041d.a();
            try {
                if (this.f11042e != null) {
                    a.close();
                    return;
                }
                this.f11042e = new w0(this.f11043i.getSessionTrackingIntervalMillis(), this.f11043i.isEnableAutoSessionTracking(), this.f11043i.isEnableAppLifecycleBreadcrumbs());
                e0.f11119w.c(this.f11042e);
                a.close();
                v5Var.getLogger().u(sentryLevel, "AppLifecycleIntegration installed.", new Object[0]);
                com.facebook.imagepipeline.nativecode.b.a("AppLifecycle");
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
}
