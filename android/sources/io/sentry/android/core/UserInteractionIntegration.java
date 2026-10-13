package io.sentry.android.core;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import android.view.Window;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.l1;
import io.sentry.l6;
import io.sentry.v3;
import io.sentry.v5;
import java.io.Closeable;
import java.lang.ref.WeakReference;

/* loaded from: classes3.dex */
public final class UserInteractionIntegration implements l1, Closeable, Application.ActivityLifecycleCallbacks {

    /* renamed from: d, reason: collision with root package name */
    public final Application f11079d;

    /* renamed from: e, reason: collision with root package name */
    public v3 f11080e;

    /* renamed from: i, reason: collision with root package name */
    public SentryAndroidOptions f11081i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f11082v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f11083w;

    public UserInteractionIntegration(Application application, io.sentry.util.f fVar) {
        d9.a.L(application, "Application is required");
        this.f11079d = application;
        this.f11082v = io.sentry.util.f.a(this.f11081i, "androidx.core.view.GestureDetectorCompat");
        this.f11083w = io.sentry.util.f.a(this.f11081i, "androidx.lifecycle.Lifecycle");
    }

    public final void c(Activity activity) {
        Window window = activity.getWindow();
        if (window == null) {
            SentryAndroidOptions sentryAndroidOptions = this.f11081i;
            if (sentryAndroidOptions != null) {
                sentryAndroidOptions.getLogger().u(SentryLevel.INFO, "Window was null in startTracking", new Object[0]);
                return;
            }
            return;
        }
        if (this.f11080e == null || this.f11081i == null) {
            return;
        }
        Window.Callback callback = window.getCallback();
        if (callback == null) {
            callback = new io.sentry.android.core.internal.gestures.b();
        }
        if (callback instanceof io.sentry.android.core.internal.gestures.g) {
            return;
        }
        window.setCallback(new io.sentry.android.core.internal.gestures.g(callback, activity, new io.sentry.android.core.internal.gestures.f(activity, this.f11080e, this.f11081i), this.f11081i));
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f11079d.unregisterActivityLifecycleCallbacks(this);
        SentryAndroidOptions sentryAndroidOptions = this.f11081i;
        if (sentryAndroidOptions != null) {
            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "UserInteractionIntegration removed.", new Object[0]);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        Window window = activity.getWindow();
        if (window == null) {
            SentryAndroidOptions sentryAndroidOptions = this.f11081i;
            if (sentryAndroidOptions != null) {
                sentryAndroidOptions.getLogger().u(SentryLevel.INFO, "Window was null in stopTracking", new Object[0]);
                return;
            }
            return;
        }
        Window.Callback callback = window.getCallback();
        if (callback instanceof io.sentry.android.core.internal.gestures.g) {
            io.sentry.android.core.internal.gestures.g gVar = (io.sentry.android.core.internal.gestures.g) callback;
            gVar.f11180i.d(l6.CANCELLED);
            Window.Callback callback2 = gVar.f11179e;
            if (callback2 instanceof io.sentry.android.core.internal.gestures.b) {
                window.setCallback(null);
            } else {
                window.setCallback(callback2);
            }
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        c(activity);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
    }

    @Override // io.sentry.l1
    public final void register(io.sentry.x0 x0Var, v5 v5Var) {
        SentryAndroidOptions sentryAndroidOptions = v5Var instanceof SentryAndroidOptions ? (SentryAndroidOptions) v5Var : null;
        d9.a.L(sentryAndroidOptions, "SentryAndroidOptions is required");
        this.f11081i = sentryAndroidOptions;
        this.f11080e = v3.a;
        boolean z5 = sentryAndroidOptions.isEnableUserInteractionBreadcrumbs() || this.f11081i.isEnableUserInteractionTracing();
        ILogger logger = this.f11081i.getLogger();
        SentryLevel sentryLevel = SentryLevel.DEBUG;
        logger.u(sentryLevel, "UserInteractionIntegration enabled: %s", Boolean.valueOf(z5));
        if (z5) {
            if (!this.f11082v) {
                v5Var.getLogger().u(SentryLevel.INFO, "androidx.core is not available, UserInteractionIntegration won't be installed", new Object[0]);
                return;
            }
            this.f11079d.registerActivityLifecycleCallbacks(this);
            this.f11081i.getLogger().u(sentryLevel, "UserInteractionIntegration installed.", new Object[0]);
            com.facebook.imagepipeline.nativecode.b.a("UserInteraction");
            if (this.f11083w) {
                WeakReference weakReference = (WeakReference) l0.f11265e.f11266d;
                Activity activity = weakReference != null ? (Activity) weakReference.get() : null;
                if ((activity instanceof LifecycleOwner) && ((LifecycleOwner) activity).getLifecycle().b() == Lifecycle.State.f2141w) {
                    c(activity);
                }
            }
        }
    }
}
