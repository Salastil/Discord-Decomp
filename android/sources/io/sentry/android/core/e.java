package io.sentry.android.core;

import android.app.Application;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.os.Process;
import io.sentry.IScope;
import io.sentry.SentryLevel;
import io.sentry.b4;
import io.sentry.e5;
import io.sentry.o3;
import io.sentry.t3;
import io.sentry.v5;
import java.util.WeakHashMap;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final /* synthetic */ class e implements o3, b4 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Object f11116d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f11117e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f11118i;

    public /* synthetic */ e(Object obj, Object obj2, Object obj3) {
        this.f11116d = obj;
        this.f11117e = obj2;
        this.f11118i = obj3;
    }

    @Override // io.sentry.o3
    public void b(io.sentry.f1 f1Var) {
        ActivityLifecycleIntegration activityLifecycleIntegration = (ActivityLifecycleIntegration) this.f11116d;
        IScope iScope = (IScope) this.f11117e;
        io.sentry.f1 f1Var2 = (io.sentry.f1) this.f11118i;
        if (f1Var == null) {
            iScope.O(f1Var2);
            return;
        }
        SentryAndroidOptions sentryAndroidOptions = activityLifecycleIntegration.f11023v;
        if (sentryAndroidOptions != null) {
            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "Transaction '%s' won't be bound to the Scope since there's one already in there.", f1Var2.getName());
        }
    }

    @Override // io.sentry.b4
    public void c(v5 v5Var) {
        boolean z5;
        l0 l0Var = (l0) this.f11116d;
        Context context = (Context) this.f11117e;
        b4 b4Var = (b4) this.f11118i;
        SentryAndroidOptions sentryAndroidOptions = (SentryAndroidOptions) v5Var;
        boolean a = io.sentry.util.f.a(sentryAndroidOptions, "timber.log.Timber");
        boolean z6 = true;
        if (io.sentry.util.f.a(sentryAndroidOptions, "androidx.fragment.app.FragmentManager$FragmentLifecycleCallbacks") && io.sentry.util.f.a(sentryAndroidOptions, "io.sentry.android.fragment.FragmentLifecycleIntegration")) {
            z5 = true;
        } else {
            z5 = true;
            z6 = false;
        }
        boolean z7 = (a && io.sentry.util.f.a(sentryAndroidOptions, "io.sentry.android.timber.SentryTimberIntegration")) ? z5 : false;
        boolean a10 = io.sentry.util.f.a(sentryAndroidOptions, "io.sentry.android.replay.ReplayIntegration");
        boolean a11 = io.sentry.util.f.a(sentryAndroidOptions, "io.sentry.android.distribution.DistributionIntegration");
        j0 j0Var = new j0(l0Var);
        io.sentry.util.f fVar = new io.sentry.util.f();
        l0 l0Var2 = new l0(3);
        androidx.appcompat.widget.b4 b4Var2 = new androidx.appcompat.widget.b4();
        b4Var2.f929i = new ConcurrentHashMap();
        b4Var2.f930v = new WeakHashMap();
        b4Var2.f932x = new io.sentry.util.a();
        b4Var2.f933y = new io.sentry.util.e(new hc.m(23, fVar, sentryAndroidOptions.getLogger()));
        b4Var2.f927d = new io.sentry.util.e(new i7.a(15));
        b4Var2.f928e = sentryAndroidOptions;
        b4Var2.f931w = l0Var2;
        d9.a.L(context, "The context is required.");
        Context applicationContext = context.getApplicationContext();
        if (applicationContext == null) {
            applicationContext = context;
        }
        sentryAndroidOptions.setLogger(l0Var);
        sentryAndroidOptions.setFatalLogger(new t());
        sentryAndroidOptions.setDefaultScopeType(t3.CURRENT);
        sentryAndroidOptions.setOpenTelemetryMode(e5.OFF);
        sentryAndroidOptions.setDateProvider(new d1());
        sentryAndroidOptions.setRuntimeManager(new io.sentry.android.core.internal.util.d());
        sentryAndroidOptions.getLogs().f11687b = new t();
        sentryAndroidOptions.getMetrics().f11704b = new t();
        sentryAndroidOptions.setFlushTimeoutMillis(4000L);
        sentryAndroidOptions.setFrameMetricsCollector(new io.sentry.android.core.internal.util.o(applicationContext, l0Var, j0Var));
        v0.b(applicationContext, j0Var, sentryAndroidOptions);
        sentryAndroidOptions.setCacheDirPath((String) sentryAndroidOptions.getRuntimeManager().i(new com.discord.chat.input.views.d(applicationContext, 5)));
        PackageInfo g6 = k0.g(applicationContext, j0Var);
        if (g6 != null) {
            if (sentryAndroidOptions.getRelease() == null) {
                sentryAndroidOptions.setRelease(g6.packageName + "@" + g6.versionName + "+" + k0.h(g6, j0Var));
            }
            String str = g6.packageName;
            if (str != null && !str.startsWith("android.")) {
                sentryAndroidOptions.addInAppInclude(str);
            }
        }
        if (sentryAndroidOptions.getDistinctId() == null) {
            try {
                sentryAndroidOptions.setDistinctId((String) sentryAndroidOptions.getRuntimeManager().i(new com.discord.chat.input.views.d(applicationContext, 6)));
            } catch (RuntimeException e9) {
                sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Could not generate distinct Id.", e9);
            }
        }
        e0 e0Var = e0.f11119w;
        if (e0Var.f11121e == null) {
            io.sentry.r a12 = e0Var.f11120d.a();
            try {
                e0Var.g(sentryAndroidOptions.getLogger());
                a12.close();
            } finally {
            }
        }
        o.b(context, sentryAndroidOptions, j0Var, fVar, b4Var2, z6, z7, a10, a11);
        boolean z8 = z6;
        try {
            b4Var.c(sentryAndroidOptions);
        } catch (Throwable th2) {
            sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error in the 'OptionsConfiguration.configure' callback.", th2);
        }
        io.sentry.android.core.performance.f b10 = io.sentry.android.core.performance.f.b();
        if (sentryAndroidOptions.isEnablePerformanceV2()) {
            io.sentry.android.core.performance.g gVar = b10.f11291i;
            if (gVar.f11298i == 0) {
                gVar.d(Process.getStartUptimeMillis());
            }
        }
        if (context.getApplicationContext() instanceof Application) {
            b10.d((Application) context.getApplicationContext());
        }
        io.sentry.android.core.performance.g gVar2 = b10.f11292v;
        if (gVar2.f11298i == 0) {
            gVar2.d(c1.a);
        }
        o.a(sentryAndroidOptions, context, j0Var, fVar, b4Var2, a10);
        c1.a(sentryAndroidOptions, z8, z7);
    }
}
