package io.sentry.android.core.performance;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.android.core.j0;
import io.sentry.android.core.k0;
import io.sentry.android.core.l0;
import io.sentry.android.core.u;
import io.sentry.j2;
import io.sentry.r;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes3.dex */
public final class f extends a {
    public static volatile f M;
    public static long L = SystemClock.uptimeMillis();
    public static final io.sentry.util.a N = new io.sentry.util.a();

    /* renamed from: d, reason: collision with root package name */
    public e f11289d = e.UNKNOWN;
    public u E = null;
    public io.sentry.android.core.g F = null;
    public f9.b G = null;
    public boolean H = false;
    public boolean I = true;
    public final AtomicInteger J = new AtomicInteger();
    public final AtomicBoolean K = new AtomicBoolean(false);

    /* renamed from: i, reason: collision with root package name */
    public final g f11291i = new g();

    /* renamed from: v, reason: collision with root package name */
    public final g f11292v = new g();

    /* renamed from: w, reason: collision with root package name */
    public final g f11293w = new g();

    /* renamed from: x, reason: collision with root package name */
    public final HashMap f11294x = new HashMap();

    /* renamed from: y, reason: collision with root package name */
    public final ArrayList f11295y = new ArrayList();

    /* renamed from: e, reason: collision with root package name */
    public boolean f11290e = k0.i();

    public static f b() {
        if (M == null) {
            r a = N.a();
            try {
                if (M == null) {
                    M = new f();
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
        return M;
    }

    public final g a(SentryAndroidOptions sentryAndroidOptions) {
        if (this.f11289d != e.UNKNOWN && this.f11290e) {
            if (sentryAndroidOptions.isEnablePerformanceV2()) {
                g gVar = this.f11291i;
                if (gVar.c() && gVar.a() <= TimeUnit.MINUTES.toMillis(1L)) {
                    return gVar;
                }
            }
            g gVar2 = this.f11292v;
            if (gVar2.c() && gVar2.a() <= TimeUnit.MINUTES.toMillis(1L)) {
                return gVar2;
            }
        }
        return new g();
    }

    public final synchronized void c() {
        if (!this.K.getAndSet(true)) {
            f b10 = b();
            g gVar = b10.f11292v;
            gVar.getClass();
            gVar.f11299v = SystemClock.uptimeMillis();
            g gVar2 = b10.f11291i;
            gVar2.getClass();
            gVar2.f11299v = SystemClock.uptimeMillis();
        }
    }

    public final void d(Application application) {
        if (this.H) {
            return;
        }
        boolean z5 = true;
        this.H = true;
        if (!this.f11290e && !k0.i()) {
            z5 = false;
        }
        this.f11290e = z5;
        application.registerActivityLifecycleCallbacks(M);
        new Handler(Looper.getMainLooper()).post(new d(this, 0));
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        l0.f11265e.a(activity);
        if (this.J.incrementAndGet() == 1 && !this.K.get()) {
            long uptimeMillis = SystemClock.uptimeMillis();
            g gVar = this.f11291i;
            long j = uptimeMillis - gVar.f11298i;
            if (!this.f11290e || j > TimeUnit.MINUTES.toMillis(1L)) {
                this.f11289d = e.WARM;
                this.I = true;
                gVar.f11296d = null;
                gVar.f11298i = 0L;
                gVar.f11299v = 0L;
                gVar.f11297e = 0L;
                gVar.f11298i = SystemClock.uptimeMillis();
                gVar.f11297e = System.currentTimeMillis();
                gVar.d(uptimeMillis);
                L = uptimeMillis;
                this.f11294x.clear();
                g gVar2 = this.f11293w;
                gVar2.f11296d = null;
                gVar2.f11298i = 0L;
                gVar2.f11299v = 0L;
                gVar2.f11297e = 0L;
            } else {
                this.f11289d = bundle == null ? e.COLD : e.WARM;
            }
        }
        this.f11290e = true;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        l0 l0Var = l0.f11265e;
        WeakReference weakReference = (WeakReference) l0Var.f11266d;
        if (weakReference == null || weakReference.get() == activity) {
            l0Var.f11266d = null;
        }
        if (this.J.decrementAndGet() != 0 || activity.isChangingConfigurations()) {
            return;
        }
        this.f11290e = false;
        this.I = true;
        this.K.set(false);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        l0 l0Var = l0.f11265e;
        WeakReference weakReference = (WeakReference) l0Var.f11266d;
        if (weakReference == null || weakReference.get() == activity) {
            l0Var.f11266d = null;
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        l0.f11265e.a(activity);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
        l0.f11265e.a(activity);
        if (this.K.get()) {
            return;
        }
        if (activity.getWindow() != null) {
            io.sentry.android.core.internal.util.h.a(activity, new d(this, 1), new j0(j2.f11638d));
        } else {
            new Handler(Looper.getMainLooper()).post(new d(this, 2));
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
        l0 l0Var = l0.f11265e;
        WeakReference weakReference = (WeakReference) l0Var.f11266d;
        if (weakReference == null || weakReference.get() == activity) {
            l0Var.f11266d = null;
        }
    }
}
