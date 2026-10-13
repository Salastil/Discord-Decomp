package io.sentry.android.core;

import android.app.Activity;
import android.app.Application;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.util.SparseIntArray;
import androidx.appcompat.widget.b4;
import androidx.core.app.FrameMetricsAggregator;
import io.sentry.ISpan;
import io.sentry.SentryLevel;
import io.sentry.a5;
import io.sentry.b2;
import io.sentry.c4;
import io.sentry.d5;
import io.sentry.i4;
import io.sentry.l1;
import io.sentry.l6;
import io.sentry.p6;
import io.sentry.q6;
import io.sentry.v2;
import io.sentry.v3;
import io.sentry.v5;
import java.io.Closeable;
import java.lang.ref.WeakReference;
import java.util.Date;
import java.util.Iterator;
import java.util.Map;
import java.util.WeakHashMap;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.Future;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class ActivityLifecycleIntegration implements l1, Closeable, Application.ActivityLifecycleCallbacks {
    public ISpan G;
    public final b4 N;

    /* renamed from: d, reason: collision with root package name */
    public final Application f11020d;

    /* renamed from: e, reason: collision with root package name */
    public final j0 f11021e;

    /* renamed from: i, reason: collision with root package name */
    public v3 f11022i;

    /* renamed from: v, reason: collision with root package name */
    public SentryAndroidOptions f11023v;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f11026y;

    /* renamed from: w, reason: collision with root package name */
    public boolean f11024w = false;

    /* renamed from: x, reason: collision with root package name */
    public boolean f11025x = false;
    public boolean E = false;
    public io.sentry.f0 F = null;
    public final WeakHashMap H = new WeakHashMap();
    public final WeakHashMap I = new WeakHashMap();
    public final WeakHashMap J = new WeakHashMap();
    public i4 K = new d5(new Date(0), 0);
    public Future L = null;
    public final WeakHashMap M = new WeakHashMap();
    public final io.sentry.util.a O = new io.sentry.util.a();
    public final io.sentry.util.a P = new io.sentry.util.a();

    public ActivityLifecycleIntegration(Application application, j0 j0Var, b4 b4Var) {
        d9.a.L(application, "Application is required");
        this.f11020d = application;
        this.f11021e = j0Var;
        this.N = b4Var;
        if (Build.VERSION.SDK_INT >= 29) {
            this.f11026y = true;
        }
    }

    public static void f(ISpan iSpan, ISpan iSpan2) {
        if (iSpan == null || iSpan.isFinished()) {
            return;
        }
        String description = iSpan.getDescription();
        if (description == null || !description.endsWith(" - Deadline Exceeded")) {
            description = iSpan.getDescription() + " - Deadline Exceeded";
        }
        iSpan.j(description);
        i4 p3 = iSpan2 != null ? iSpan2.p() : null;
        if (p3 == null) {
            p3 = iSpan.s();
        }
        g(iSpan, p3, l6.DEADLINE_EXCEEDED);
    }

    public static void g(ISpan iSpan, i4 i4Var, l6 l6Var) {
        if (iSpan == null || iSpan.isFinished()) {
            return;
        }
        if (l6Var == null) {
            l6Var = iSpan.a() != null ? iSpan.a() : l6.OK;
        }
        iSpan.q(l6Var, i4Var);
    }

    public final void c() {
        a5 a5Var;
        io.sentry.android.core.performance.g a = io.sentry.android.core.performance.f.b().a(this.f11023v);
        if (a.f11299v != 0) {
            a5Var = new a5((a.c() ? a.f11297e + a.a() : 0L) * 1000000);
        } else {
            a5Var = null;
        }
        if (!this.f11024w || a5Var == null) {
            return;
        }
        g(this.G, a5Var, null);
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f11020d.unregisterActivityLifecycleCallbacks(this);
        SentryAndroidOptions sentryAndroidOptions = this.f11023v;
        if (sentryAndroidOptions != null) {
            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "ActivityLifecycleIntegration removed.", new Object[0]);
        }
        b4 b4Var = this.N;
        io.sentry.r a = ((io.sentry.util.a) b4Var.f932x).a();
        try {
            if (b4Var.d()) {
                b4Var.e("FrameMetricsAggregator.stop", new com.google.firebase.messaging.s(26, b4Var));
                ke.u uVar = ((FrameMetricsAggregator) ((io.sentry.util.e) b4Var.f927d).a()).a;
                Object obj = uVar.f13353c;
                uVar.f13353c = new SparseIntArray[9];
            }
            ((ConcurrentHashMap) b4Var.f929i).clear();
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

    public final void i(io.sentry.f1 f1Var, ISpan iSpan, ISpan iSpan2) {
        if (f1Var == null || f1Var.isFinished()) {
            return;
        }
        l6 l6Var = l6.DEADLINE_EXCEEDED;
        if (iSpan != null && !iSpan.isFinished()) {
            iSpan.f(l6Var);
        }
        f(iSpan2, iSpan);
        Future future = this.L;
        if (future != null) {
            future.cancel(false);
            this.L = null;
        }
        l6 a = f1Var.a();
        if (a == null) {
            a = l6.OK;
        }
        f1Var.f(a);
        if (this.f11022i != null) {
            c4.d(null, new hc.m(10, this, f1Var));
        }
    }

    public final void l(ISpan iSpan, ISpan iSpan2) {
        io.sentry.android.core.performance.f b10 = io.sentry.android.core.performance.f.b();
        io.sentry.android.core.performance.g gVar = b10.f11291i;
        io.sentry.android.core.performance.g gVar2 = b10.f11292v;
        if (gVar.c() && gVar.f11299v == 0) {
            gVar.f11299v = SystemClock.uptimeMillis();
        }
        if (gVar2.c() && gVar2.f11299v == 0) {
            gVar2.f11299v = SystemClock.uptimeMillis();
        }
        c();
        io.sentry.r a = this.P.a();
        try {
            SentryAndroidOptions sentryAndroidOptions = this.f11023v;
            if (sentryAndroidOptions != null && iSpan2 != null) {
                i4 now = sentryAndroidOptions.getDateProvider().now();
                iSpan2.n("time_to_initial_display", Long.valueOf(TimeUnit.NANOSECONDS.toMillis(now.b(iSpan2.s()))), b2.MILLISECOND);
                g(iSpan2, now, null);
            } else if (iSpan2 != null && !iSpan2.isFinished()) {
                iSpan2.g();
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

    public final void o(Activity activity) {
        WeakHashMap weakHashMap;
        WeakHashMap weakHashMap2;
        Boolean bool;
        a5 a5Var;
        i4 i4Var;
        f9.b bVar;
        a3.f fVar;
        io.sentry.f1 f1Var;
        WeakReference weakReference = new WeakReference(activity);
        if (this.f11022i != null) {
            WeakHashMap weakHashMap3 = this.M;
            if (weakHashMap3.containsKey(activity)) {
                return;
            }
            if (!this.f11024w) {
                weakHashMap3.put(activity, v2.a);
                if (this.f11023v.isEnableAutoTraceIdGeneration()) {
                    this.f11022i.q(null, new io.sentry.util.m(0));
                    return;
                }
                return;
            }
            Iterator it = weakHashMap3.entrySet().iterator();
            while (true) {
                boolean hasNext = it.hasNext();
                weakHashMap = this.I;
                weakHashMap2 = this.H;
                if (!hasNext) {
                    break;
                }
                Map.Entry entry = (Map.Entry) it.next();
                i((io.sentry.f1) entry.getValue(), (ISpan) weakHashMap2.get(entry.getKey()), (ISpan) weakHashMap.get(entry.getKey()));
            }
            String simpleName = activity.getClass().getSimpleName();
            io.sentry.android.core.performance.g a = io.sentry.android.core.performance.f.b().a(this.f11023v);
            if (k0.i() && a.c()) {
                a5 b10 = a.b();
                bool = Boolean.valueOf(io.sentry.android.core.performance.f.b().f11289d == io.sentry.android.core.performance.e.COLD);
                a5Var = b10;
            } else {
                bool = null;
                a5Var = null;
            }
            q6 q6Var = new q6();
            long deadlineTimeout = this.f11023v.getDeadlineTimeout();
            q6Var.f11922h = deadlineTimeout <= 0 ? null : Long.valueOf(deadlineTimeout);
            if (this.f11023v.isEnableActivityLifecycleTracingAutoFinish()) {
                q6Var.f11921g = this.f11023v.getIdleTimeout();
                q6Var.a = true;
            }
            q6Var.f11920f = true;
            q6Var.f11923i = new e(this, weakReference, simpleName);
            if (this.E || a5Var == null || bool == null) {
                i4Var = this.K;
                bVar = null;
            } else {
                f9.b bVar2 = io.sentry.android.core.performance.f.b().G;
                io.sentry.android.core.performance.f.b().G = null;
                bVar = bVar2;
                i4Var = a5Var;
            }
            q6Var.f56b = i4Var;
            q6Var.f11919e = bVar != null;
            q6Var.f58d = "auto.ui.activity";
            io.sentry.f1 j = this.f11022i.j(new p6(simpleName, io.sentry.protocol.g0.COMPONENT, "ui.load", bVar), q6Var);
            a3.f fVar2 = new a3.f(5, false);
            fVar2.f58d = "auto.ui.activity";
            if (this.E || a5Var == null || bool == null) {
                fVar = fVar2;
            } else {
                ISpan r5 = j.r(bool.booleanValue() ? "app.start.cold" : "app.start.warm", bool.booleanValue() ? "Cold Start" : "Warm Start", a5Var, io.sentry.k1.SENTRY, fVar2);
                j = j;
                fVar = fVar2;
                this.G = r5;
                c();
            }
            String concat = simpleName.concat(" initial display");
            io.sentry.k1 k1Var = io.sentry.k1.SENTRY;
            i4 i4Var2 = i4Var;
            ISpan r7 = j.r("ui.load.initial_display", concat, i4Var2, k1Var, fVar);
            weakHashMap2.put(activity, r7);
            if (!this.f11025x || this.F == null || this.f11023v == null) {
                f1Var = j;
            } else {
                ISpan r10 = j.r("ui.load.full_display", simpleName.concat(" full display"), i4Var2, k1Var, fVar);
                f1Var = j;
                try {
                    weakHashMap.put(activity, r10);
                    this.L = this.f11023v.getExecutorService().l(new com.mkuczera.haptic.a(this, r10, r7), 25000L);
                } catch (RejectedExecutionException e9) {
                    this.f11023v.getLogger().k(SentryLevel.ERROR, "Failed to call the executor. Time to full display span will not be finished automatically. Did you call Sentry.close()?", e9);
                }
            }
            v3 v3Var = this.f11022i;
            cc.i iVar = new cc.i(29, this, f1Var);
            v3Var.getClass();
            c4.d(null, iVar);
            weakHashMap3.put(activity, f1Var);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
        io.sentry.f0 f0Var;
        SentryAndroidOptions sentryAndroidOptions;
        if (!this.f11026y) {
            onActivityPreCreated(activity, bundle);
        }
        io.sentry.r a = this.O.a();
        try {
            if (this.f11022i != null && (sentryAndroidOptions = this.f11023v) != null && sentryAndroidOptions.isEnableScreenTracking()) {
                String w5 = ta.a.w(activity);
                v3 v3Var = this.f11022i;
                app.rive.runtime.kotlin.b bVar = new app.rive.runtime.kotlin.b(w5, 3);
                v3Var.getClass();
                c4.d(null, bVar);
            }
            o(activity);
            ISpan iSpan = (ISpan) this.H.get(activity);
            ISpan iSpan2 = (ISpan) this.I.get(activity);
            this.E = true;
            if (this.f11024w && iSpan != null && iSpan2 != null && (f0Var = this.F) != null) {
                f0Var.a.add(new cc.i(27, iSpan, iSpan2));
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

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
        WeakHashMap weakHashMap = this.I;
        WeakHashMap weakHashMap2 = this.H;
        WeakHashMap weakHashMap3 = this.J;
        io.sentry.r a = this.O.a();
        try {
            io.sentry.android.core.performance.b bVar = (io.sentry.android.core.performance.b) weakHashMap3.remove(activity);
            if (bVar != null) {
                ISpan iSpan = bVar.f11283d;
                if (iSpan != null && !iSpan.isFinished()) {
                    bVar.f11283d.f(l6.CANCELLED);
                }
                bVar.f11283d = null;
                ISpan iSpan2 = bVar.f11284e;
                if (iSpan2 != null && !iSpan2.isFinished()) {
                    bVar.f11284e.f(l6.CANCELLED);
                }
                bVar.f11284e = null;
            }
            boolean z5 = this.f11024w;
            WeakHashMap weakHashMap4 = this.M;
            if (z5) {
                ISpan iSpan3 = this.G;
                l6 l6Var = l6.CANCELLED;
                if (iSpan3 != null && !iSpan3.isFinished()) {
                    iSpan3.f(l6Var);
                }
                ISpan iSpan4 = (ISpan) weakHashMap2.get(activity);
                ISpan iSpan5 = (ISpan) weakHashMap.get(activity);
                l6 l6Var2 = l6.DEADLINE_EXCEEDED;
                if (iSpan4 != null && !iSpan4.isFinished()) {
                    iSpan4.f(l6Var2);
                }
                f(iSpan5, iSpan4);
                Future future = this.L;
                if (future != null) {
                    future.cancel(false);
                    this.L = null;
                }
                if (this.f11024w) {
                    i((io.sentry.f1) weakHashMap4.get(activity), null, null);
                }
                this.G = null;
                weakHashMap2.remove(activity);
                weakHashMap.remove(activity);
            }
            weakHashMap4.remove(activity);
            if (weakHashMap4.isEmpty() && !activity.isChangingConfigurations()) {
                this.E = false;
                this.K = new d5(new Date(0L), 0L);
                weakHashMap3.clear();
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

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
        io.sentry.r a = this.O.a();
        try {
            if (!this.f11026y) {
                onActivityPrePaused(activity);
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

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPostCreated(Activity activity, Bundle bundle) {
        io.sentry.android.core.performance.b bVar = (io.sentry.android.core.performance.b) this.J.get(activity);
        if (bVar != null) {
            ISpan iSpan = this.G;
            if (iSpan == null) {
                iSpan = (ISpan) this.M.get(activity);
            }
            if (bVar.f11281b == null || iSpan == null) {
                return;
            }
            ISpan a = io.sentry.android.core.performance.b.a(iSpan, bVar.a.concat(".onCreate"), bVar.f11281b);
            bVar.f11283d = a;
            a.g();
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPostResumed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPostStarted(Activity activity) {
        io.sentry.android.core.performance.b bVar = (io.sentry.android.core.performance.b) this.J.get(activity);
        if (bVar != null) {
            ISpan iSpan = this.G;
            if (iSpan == null) {
                iSpan = (ISpan) this.M.get(activity);
            }
            if (bVar.f11282c != null && iSpan != null) {
                ISpan a = io.sentry.android.core.performance.b.a(iSpan, bVar.a.concat(".onStart"), bVar.f11282c);
                bVar.f11284e = a;
                a.g();
            }
            ISpan iSpan2 = bVar.f11283d;
            if (iSpan2 == null || bVar.f11284e == null) {
                return;
            }
            i4 p3 = iSpan2.p();
            i4 p5 = bVar.f11284e.p();
            if (p3 == null || p5 == null) {
                return;
            }
            long uptimeMillis = SystemClock.uptimeMillis();
            i.a.getClass();
            d5 d5Var = new d5();
            TimeUnit timeUnit = TimeUnit.NANOSECONDS;
            long millis = timeUnit.toMillis(d5Var.b(bVar.f11283d.s()));
            long millis2 = timeUnit.toMillis(d5Var.b(p3));
            long millis3 = timeUnit.toMillis(d5Var.b(bVar.f11284e.s()));
            long millis4 = timeUnit.toMillis(d5Var.b(p5));
            io.sentry.android.core.performance.c cVar = new io.sentry.android.core.performance.c();
            String description = bVar.f11283d.getDescription();
            long millis5 = timeUnit.toMillis(bVar.f11283d.s().d());
            io.sentry.android.core.performance.g gVar = cVar.f11285d;
            gVar.f11296d = description;
            gVar.f11297e = millis5;
            gVar.f11298i = uptimeMillis - millis;
            gVar.f11299v = uptimeMillis - millis2;
            String description2 = bVar.f11284e.getDescription();
            long millis6 = timeUnit.toMillis(bVar.f11284e.s().d());
            io.sentry.android.core.performance.g gVar2 = cVar.f11286e;
            gVar2.f11296d = description2;
            gVar2.f11297e = millis6;
            gVar2.f11298i = uptimeMillis - millis3;
            gVar2.f11299v = uptimeMillis - millis4;
            io.sentry.android.core.performance.f.b().f11295y.add(cVar);
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPreCreated(Activity activity, Bundle bundle) {
        i4 d5Var;
        io.sentry.android.core.performance.b bVar = new io.sentry.android.core.performance.b(activity.getClass().getName());
        this.J.put(activity, bVar);
        if (this.E) {
            return;
        }
        v3 v3Var = this.f11022i;
        if (v3Var != null) {
            d5Var = v3Var.l().getDateProvider().now();
        } else {
            i.a.getClass();
            d5Var = new d5();
        }
        this.K = d5Var;
        bVar.f11281b = d5Var;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPrePaused(Activity activity) {
        i4 d5Var;
        this.E = true;
        v3 v3Var = this.f11022i;
        if (v3Var != null) {
            d5Var = v3Var.l().getDateProvider().now();
        } else {
            i.a.getClass();
            d5Var = new d5();
        }
        this.K = d5Var;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPreStarted(Activity activity) {
        i4 d5Var;
        io.sentry.android.core.performance.b bVar = (io.sentry.android.core.performance.b) this.J.get(activity);
        if (bVar != null) {
            SentryAndroidOptions sentryAndroidOptions = this.f11023v;
            if (sentryAndroidOptions != null) {
                d5Var = sentryAndroidOptions.getDateProvider().now();
            } else {
                i.a.getClass();
                d5Var = new d5();
            }
            bVar.f11282c = d5Var;
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
        io.sentry.r a = this.O.a();
        try {
            if (!this.f11026y) {
                onActivityPostStarted(activity);
            }
            if (this.f11024w) {
                final ISpan iSpan = (ISpan) this.H.get(activity);
                final ISpan iSpan2 = (ISpan) this.I.get(activity);
                if (activity.getWindow() != null) {
                    final int i5 = 0;
                    io.sentry.android.core.internal.util.h.a(activity, new Runnable(this) { // from class: io.sentry.android.core.d

                        /* renamed from: e, reason: collision with root package name */
                        public final /* synthetic */ ActivityLifecycleIntegration f11111e;

                        {
                            this.f11111e = this;
                        }

                        @Override // java.lang.Runnable
                        public final void run() {
                            switch (i5) {
                                case 0:
                                    this.f11111e.l(iSpan2, iSpan);
                                    break;
                                default:
                                    this.f11111e.l(iSpan2, iSpan);
                                    break;
                            }
                        }
                    }, this.f11021e);
                } else {
                    final int i6 = 1;
                    new Handler(Looper.getMainLooper()).post(new Runnable(this) { // from class: io.sentry.android.core.d

                        /* renamed from: e, reason: collision with root package name */
                        public final /* synthetic */ ActivityLifecycleIntegration f11111e;

                        {
                            this.f11111e = this;
                        }

                        @Override // java.lang.Runnable
                        public final void run() {
                            switch (i6) {
                                case 0:
                                    this.f11111e.l(iSpan2, iSpan);
                                    break;
                                default:
                                    this.f11111e.l(iSpan2, iSpan);
                                    break;
                            }
                        }
                    });
                }
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

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
        io.sentry.r a = this.O.a();
        try {
            if (!this.f11026y) {
                onActivityPostCreated(activity, null);
                onActivityPreStarted(activity);
            }
            if (this.f11024w) {
                this.N.b(activity);
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

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
    }

    @Override // io.sentry.l1
    public final void register(io.sentry.x0 x0Var, v5 v5Var) {
        SentryAndroidOptions sentryAndroidOptions = v5Var instanceof SentryAndroidOptions ? (SentryAndroidOptions) v5Var : null;
        d9.a.L(sentryAndroidOptions, "SentryAndroidOptions is required");
        this.f11023v = sentryAndroidOptions;
        this.f11022i = v3.a;
        this.f11024w = sentryAndroidOptions.isTracingEnabled() && sentryAndroidOptions.isEnableAutoActivityLifecycleTracing();
        this.F = this.f11023v.getFullyDisplayedReporter();
        this.f11025x = this.f11023v.isEnableTimeToFullDisplayTracing();
        this.f11020d.registerActivityLifecycleCallbacks(this);
        this.f11023v.getLogger().u(SentryLevel.DEBUG, "ActivityLifecycleIntegration installed.", new Object[0]);
        com.facebook.imagepipeline.nativecode.b.a("ActivityLifecycle");
    }
}
