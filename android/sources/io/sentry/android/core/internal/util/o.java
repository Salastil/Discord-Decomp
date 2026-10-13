package io.sentry.android.core.internal.util;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.view.Choreographer;
import android.view.FrameMetrics;
import android.view.Window;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.android.core.j0;
import java.lang.Thread;
import java.lang.ref.WeakReference;
import java.lang.reflect.Field;
import java.util.Iterator;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArraySet;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class o implements Application.ActivityLifecycleCallbacks {
    public static final long K = TimeUnit.SECONDS.toNanos(1);
    public static final long L = TimeUnit.MILLISECONDS.toNanos(700);
    public static final /* synthetic */ int M = 0;
    public final d E;
    public final m F;
    public Choreographer G;
    public final Field H;
    public long I;
    public long J;

    /* renamed from: d, reason: collision with root package name */
    public final j0 f11246d;

    /* renamed from: e, reason: collision with root package name */
    public final CopyOnWriteArraySet f11247e;

    /* renamed from: i, reason: collision with root package name */
    public final ILogger f11248i;

    /* renamed from: v, reason: collision with root package name */
    public final Handler f11249v;

    /* renamed from: w, reason: collision with root package name */
    public WeakReference f11250w;

    /* renamed from: x, reason: collision with root package name */
    public final ConcurrentHashMap f11251x;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f11252y;

    public o(Context context, final ILogger iLogger, j0 j0Var) {
        d dVar = new d();
        this.f11247e = new CopyOnWriteArraySet();
        this.f11251x = new ConcurrentHashMap();
        this.f11252y = false;
        this.I = 0L;
        this.J = 0L;
        Context applicationContext = context.getApplicationContext();
        context = applicationContext != null ? applicationContext : context;
        d9.a.L(iLogger, "Logger is required");
        this.f11248i = iLogger;
        d9.a.L(j0Var, "BuildInfoProvider is required");
        this.f11246d = j0Var;
        this.E = dVar;
        if (context instanceof Application) {
            this.f11252y = true;
            HandlerThread handlerThread = new HandlerThread("io.sentry.android.core.internal.util.SentryFrameMetricsCollector");
            handlerThread.setUncaughtExceptionHandler(new Thread.UncaughtExceptionHandler() { // from class: io.sentry.android.core.internal.util.l
                @Override // java.lang.Thread.UncaughtExceptionHandler
                public final void uncaughtException(Thread thread, Throwable th2) {
                    ILogger.this.k(SentryLevel.ERROR, "Error during frames measurements.", th2);
                }
            });
            handlerThread.start();
            this.f11249v = new Handler(handlerThread.getLooper());
            ((Application) context).registerActivityLifecycleCallbacks(this);
            new Handler(Looper.getMainLooper()).post(new com.mkuczera.haptic.a(14, this, iLogger));
            try {
                Field declaredField = Choreographer.class.getDeclaredField("mLastFrameTimeNanos");
                this.H = declaredField;
                declaredField.setAccessible(true);
            } catch (NoSuchFieldException e9) {
                iLogger.k(SentryLevel.ERROR, "Unable to get the frame timestamp from the choreographer: ", e9);
            }
            this.F = new m(0, this, j0Var);
        }
    }

    public static void a(o oVar, j0 j0Var, Window window, FrameMetrics frameMetrics) {
        long j;
        Field field;
        long nanoTime = System.nanoTime();
        j0Var.getClass();
        int i5 = Build.VERSION.SDK_INT;
        float refreshRate = i5 >= 30 ? window.getContext().getDisplay().getRefreshRate() : window.getWindowManager().getDefaultDisplay().getRefreshRate();
        float f2 = K;
        long metric = frameMetrics.getMetric(5) + frameMetrics.getMetric(4) + frameMetrics.getMetric(3) + frameMetrics.getMetric(2) + frameMetrics.getMetric(1) + frameMetrics.getMetric(0);
        long max = Math.max(0L, metric - ((long) (f2 / refreshRate)));
        oVar.f11246d.getClass();
        if (i5 >= 26) {
            j = frameMetrics.getMetric(10);
        } else {
            Choreographer choreographer = oVar.G;
            if (choreographer != null && (field = oVar.H) != null) {
                try {
                    Long l6 = (Long) field.get(choreographer);
                    if (l6 != null) {
                        j = l6.longValue();
                    }
                } catch (IllegalAccessException unused) {
                }
            }
            j = -1;
        }
        if (j < 0) {
            j = nanoTime - metric;
        }
        long max2 = Math.max(j, oVar.J);
        if (max2 == oVar.I) {
            return;
        }
        oVar.I = max2;
        oVar.J = max2 + metric;
        boolean z5 = metric > ((long) (f2 / (refreshRate - 1.0f)));
        boolean z6 = z5 && metric > L;
        Iterator it = oVar.f11251x.values().iterator();
        while (it.hasNext()) {
            long j5 = metric;
            long j7 = max;
            ((n) it.next()).b(max2, oVar.J, j5, j7, z5, z6, refreshRate);
            max = j7;
            metric = j5;
        }
    }

    public final void b(String str) {
        if (this.f11252y) {
            ConcurrentHashMap concurrentHashMap = this.f11251x;
            if (str != null) {
                concurrentHashMap.remove(str);
            }
            WeakReference weakReference = this.f11250w;
            Window window = weakReference != null ? (Window) weakReference.get() : null;
            if (window == null || !concurrentHashMap.isEmpty()) {
                return;
            }
            new Handler(Looper.getMainLooper()).post(new k(this, window, 1));
        }
    }

    public final void c() {
        WeakReference weakReference = this.f11250w;
        Window window = weakReference != null ? (Window) weakReference.get() : null;
        if (window == null || !this.f11252y || this.f11251x.isEmpty() || this.f11249v == null) {
            return;
        }
        new Handler(Looper.getMainLooper()).post(new k(this, window, 0));
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
        Window window = activity.getWindow();
        WeakReference weakReference = this.f11250w;
        if (weakReference == null || weakReference.get() != window) {
            this.f11250w = new WeakReference(window);
            c();
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
        new Handler(Looper.getMainLooper()).post(new k(this, activity.getWindow(), 1));
        WeakReference weakReference = this.f11250w;
        if (weakReference == null || weakReference.get() != activity.getWindow()) {
            return;
        }
        this.f11250w = null;
    }
}
