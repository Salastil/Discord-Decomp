package io.sentry.android.core;

import android.content.ComponentCallbacks2;
import android.content.Context;
import android.content.res.Configuration;
import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import io.sentry.Hint;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.l1;
import io.sentry.v3;
import io.sentry.v5;
import java.io.Closeable;

/* loaded from: classes3.dex */
public final class AppComponentsBreadcrumbsIntegration implements l1, Closeable, ComponentCallbacks2 {

    /* renamed from: w, reason: collision with root package name */
    public static final Hint f11036w = new Hint();

    /* renamed from: d, reason: collision with root package name */
    public final Context f11037d;

    /* renamed from: e, reason: collision with root package name */
    public v3 f11038e;

    /* renamed from: i, reason: collision with root package name */
    public SentryAndroidOptions f11039i;

    /* renamed from: v, reason: collision with root package name */
    public final io.sentry.android.core.internal.util.g f11040v = new io.sentry.android.core.internal.util.g(LogThrottleSingleton.RATE_LIMIT_ONE_MINUTE, 0);

    public AppComponentsBreadcrumbsIntegration(Context context) {
        Context applicationContext = context.getApplicationContext();
        this.f11037d = applicationContext != null ? applicationContext : context;
    }

    public final void c(Runnable runnable) {
        SentryAndroidOptions sentryAndroidOptions = this.f11039i;
        if (sentryAndroidOptions != null) {
            try {
                sentryAndroidOptions.getExecutorService().submit(runnable);
            } catch (Throwable th2) {
                this.f11039i.getLogger().i(SentryLevel.ERROR, th2, "Failed to submit app components breadcrumb task", new Object[0]);
            }
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        try {
            this.f11037d.unregisterComponentCallbacks(this);
        } catch (Throwable th2) {
            SentryAndroidOptions sentryAndroidOptions = this.f11039i;
            if (sentryAndroidOptions != null) {
                sentryAndroidOptions.getLogger().i(SentryLevel.DEBUG, th2, "It was not possible to unregisterComponentCallbacks", new Object[0]);
            }
        }
        SentryAndroidOptions sentryAndroidOptions2 = this.f11039i;
        if (sentryAndroidOptions2 != null) {
            sentryAndroidOptions2.getLogger().u(SentryLevel.DEBUG, "AppComponentsBreadcrumbsIntegration removed.", new Object[0]);
        }
    }

    @Override // android.content.ComponentCallbacks
    public final void onConfigurationChanged(Configuration configuration) {
        c(new app.rive.core.a(this, System.currentTimeMillis(), configuration, 2));
    }

    @Override // android.content.ComponentCallbacks
    public final void onLowMemory() {
    }

    @Override // android.content.ComponentCallbacks2
    public final void onTrimMemory(int i5) {
        if (i5 >= 40 && !this.f11040v.a()) {
            c(new le.u(this, System.currentTimeMillis(), i5, 2));
        }
    }

    @Override // io.sentry.l1
    public final void register(io.sentry.x0 x0Var, v5 v5Var) {
        this.f11038e = v3.a;
        SentryAndroidOptions sentryAndroidOptions = v5Var instanceof SentryAndroidOptions ? (SentryAndroidOptions) v5Var : null;
        d9.a.L(sentryAndroidOptions, "SentryAndroidOptions is required");
        this.f11039i = sentryAndroidOptions;
        ILogger logger = sentryAndroidOptions.getLogger();
        SentryLevel sentryLevel = SentryLevel.DEBUG;
        logger.u(sentryLevel, "AppComponentsBreadcrumbsIntegration enabled: %s", Boolean.valueOf(this.f11039i.isEnableAppComponentBreadcrumbs()));
        if (this.f11039i.isEnableAppComponentBreadcrumbs()) {
            try {
                this.f11037d.registerComponentCallbacks(this);
                v5Var.getLogger().u(sentryLevel, "AppComponentsBreadcrumbsIntegration installed.", new Object[0]);
                com.facebook.imagepipeline.nativecode.b.a("AppComponentsBreadcrumbs");
            } catch (Throwable th2) {
                this.f11039i.setEnableAppComponentBreadcrumbs(false);
                v5Var.getLogger().i(SentryLevel.INFO, th2, "ComponentCallbacks2 is not available.", new Object[0]);
            }
        }
    }
}
