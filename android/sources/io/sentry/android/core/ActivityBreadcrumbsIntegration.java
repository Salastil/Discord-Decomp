package io.sentry.android.core;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import io.sentry.Breadcrumb;
import io.sentry.Hint;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.l1;
import io.sentry.v3;
import io.sentry.v5;
import java.io.Closeable;

/* loaded from: classes3.dex */
public final class ActivityBreadcrumbsIntegration implements l1, Closeable, Application.ActivityLifecycleCallbacks {

    /* renamed from: d, reason: collision with root package name */
    public final Application f11016d;

    /* renamed from: e, reason: collision with root package name */
    public v3 f11017e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f11018i;

    /* renamed from: v, reason: collision with root package name */
    public final io.sentry.util.a f11019v = new io.sentry.util.a();

    public ActivityBreadcrumbsIntegration(Application application) {
        d9.a.L(application, "Application is required");
        this.f11016d = application;
    }

    public final void c(Activity activity, String str) {
        if (this.f11017e == null) {
            return;
        }
        Breadcrumb breadcrumb = new Breadcrumb();
        breadcrumb.f10976w = "navigation";
        breadcrumb.c(str, "state");
        breadcrumb.c(activity.getClass().getSimpleName(), "screen");
        breadcrumb.f10978y = "ui.lifecycle";
        breadcrumb.F = SentryLevel.INFO;
        Hint hint = new Hint();
        hint.d(activity, "android:activity");
        this.f11017e.g(breadcrumb, hint);
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        if (this.f11018i) {
            this.f11016d.unregisterActivityLifecycleCallbacks(this);
            v3 v3Var = this.f11017e;
            if (v3Var != null) {
                v3Var.l().getLogger().u(SentryLevel.DEBUG, "ActivityBreadcrumbsIntegration removed.", new Object[0]);
            }
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        io.sentry.r a = this.f11019v.a();
        try {
            c(activity, "created");
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

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        io.sentry.r a = this.f11019v.a();
        try {
            c(activity, "destroyed");
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

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        io.sentry.r a = this.f11019v.a();
        try {
            c(activity, "paused");
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

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        io.sentry.r a = this.f11019v.a();
        try {
            c(activity, "resumed");
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

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
        io.sentry.r a = this.f11019v.a();
        try {
            c(activity, "saveInstanceState");
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

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
        io.sentry.r a = this.f11019v.a();
        try {
            c(activity, "started");
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

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
        io.sentry.r a = this.f11019v.a();
        try {
            c(activity, "stopped");
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
    public final void register(io.sentry.x0 x0Var, v5 v5Var) {
        SentryAndroidOptions sentryAndroidOptions = v5Var instanceof SentryAndroidOptions ? (SentryAndroidOptions) v5Var : null;
        d9.a.L(sentryAndroidOptions, "SentryAndroidOptions is required");
        this.f11017e = v3.a;
        this.f11018i = sentryAndroidOptions.isEnableActivityLifecycleBreadcrumbs();
        ILogger logger = v5Var.getLogger();
        SentryLevel sentryLevel = SentryLevel.DEBUG;
        logger.u(sentryLevel, "ActivityBreadcrumbsIntegration enabled: %s", Boolean.valueOf(this.f11018i));
        if (this.f11018i) {
            this.f11016d.registerActivityLifecycleCallbacks(this);
            v5Var.getLogger().u(sentryLevel, "ActivityBreadcrumbIntegration installed.", new Object[0]);
            com.facebook.imagepipeline.nativecode.b.a("ActivityBreadcrumbs");
        }
    }
}
