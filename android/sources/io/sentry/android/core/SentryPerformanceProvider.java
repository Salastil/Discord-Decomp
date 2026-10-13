package io.sentry.android.core;

import android.app.Application;
import android.content.Context;
import android.content.pm.ProviderInfo;
import android.net.Uri;
import android.os.Process;
import android.os.StrictMode;
import android.os.SystemClock;
import io.sentry.SentryLevel;
import io.sentry.d4;
import io.sentry.o6;
import io.sentry.v5;
import io.sentry.z1;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStreamReader;

/* loaded from: classes3.dex */
public final class SentryPerformanceProvider extends p0 {

    /* renamed from: w, reason: collision with root package name */
    public static final long f11065w = SystemClock.uptimeMillis();

    /* renamed from: e, reason: collision with root package name */
    public Application f11066e;

    /* renamed from: i, reason: collision with root package name */
    public final l0 f11067i;

    /* renamed from: v, reason: collision with root package name */
    public final j0 f11068v;

    public SentryPerformanceProvider() {
        new io.sentry.util.a();
        l0 l0Var = new l0(1);
        this.f11067i = l0Var;
        this.f11068v = new j0(l0Var);
    }

    public final void a(Context context, d4 d4Var, io.sentry.android.core.performance.f fVar) {
        boolean z5 = d4Var.F;
        l0 l0Var = this.f11067i;
        if (!z5) {
            l0Var.u(SentryLevel.DEBUG, "App start profiling was not sampled. It will not start.", new Object[0]);
            return;
        }
        g gVar = new g(this.f11068v, new io.sentry.android.core.internal.util.o(context.getApplicationContext(), l0Var, this.f11068v), l0Var, d4Var.f11505w, d4Var.E, new e4.i(6));
        fVar.E = null;
        fVar.F = gVar;
        l0Var.u(SentryLevel.DEBUG, "App start continuous profiling started.", new Object[0]);
        v5 empty = v5.empty();
        empty.setProfileSessionSampleRate(Double.valueOf(d4Var.F ? 1.0d : 0.0d));
        gVar.c(d4Var.I, new o6(empty));
    }

    @Override // android.content.ContentProvider
    public final void attachInfo(Context context, ProviderInfo providerInfo) {
        if (SentryPerformanceProvider.class.getName().equals(providerInfo.authority)) {
            throw new IllegalStateException("An applicationId is required to fulfill the manifest placeholder.");
        }
        super.attachInfo(context, providerInfo);
    }

    public final void b(Context context, d4 d4Var, io.sentry.android.core.performance.f fVar) {
        boolean z5 = d4Var.f11503i;
        f9.b bVar = new f9.b(Boolean.valueOf(z5), d4Var.f11504v, (Double) null, Boolean.valueOf(d4Var.f11501d), d4Var.f11502e);
        fVar.G = bVar;
        boolean booleanValue = ((Boolean) bVar.f8475v).booleanValue();
        l0 l0Var = this.f11067i;
        if (!booleanValue || !z5) {
            l0Var.u(SentryLevel.DEBUG, "App start profiling was not sampled. It will not start.", new Object[0]);
            return;
        }
        u uVar = new u(context, this.f11068v, new io.sentry.android.core.internal.util.o(context, l0Var, this.f11068v), l0Var, d4Var.f11505w, d4Var.f11506x, d4Var.E, new e4.i(6));
        fVar.F = null;
        fVar.E = uVar;
        l0Var.u(SentryLevel.DEBUG, "App start profiling started.", new Object[0]);
        uVar.start();
    }

    @Override // android.content.ContentProvider
    public final String getType(Uri uri) {
        return null;
    }

    @Override // android.content.ContentProvider
    public final boolean onCreate() {
        io.sentry.android.core.performance.f b10 = io.sentry.android.core.performance.f.b();
        Context context = getContext();
        b10.f11292v.d(f11065w);
        this.f11068v.getClass();
        b10.f11291i.d(Process.getStartUptimeMillis());
        if (context instanceof Application) {
            this.f11066e = (Application) context;
        }
        Application application = this.f11066e;
        if (application != null) {
            b10.d(application);
        }
        Context context2 = getContext();
        l0 l0Var = this.f11067i;
        if (context2 == null) {
            l0Var.u(SentryLevel.FATAL, "App. Context from ContentProvider is null", new Object[0]);
            return true;
        }
        StrictMode.ThreadPolicy threadPolicy = StrictMode.getThreadPolicy();
        StrictMode.VmPolicy vmPolicy = StrictMode.getVmPolicy();
        StrictMode.setThreadPolicy(StrictMode.ThreadPolicy.LAX);
        StrictMode.setVmPolicy(StrictMode.VmPolicy.LAX);
        try {
            File file = new File(context2.getCacheDir(), "sentry");
            StrictMode.setThreadPolicy(threadPolicy);
            StrictMode.setVmPolicy(vmPolicy);
            File file2 = new File(file, "app_start_profiling_config");
            if (!file2.exists() || !file2.canRead()) {
                return true;
            }
            try {
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(file2)));
                try {
                    d4 d4Var = (d4) new z1(v5.empty()).c(bufferedReader, d4.class);
                    if (d4Var == null) {
                        l0Var.u(SentryLevel.WARNING, "Unable to deserialize the SentryAppStartProfilingOptions. App start profiling will not start.", new Object[0]);
                    } else if (d4Var.f11507y && d4Var.H) {
                        a(context2, d4Var, b10);
                    } else if (!d4Var.f11506x) {
                        l0Var.u(SentryLevel.INFO, "Profiling is not enabled. App start profiling will not start.", new Object[0]);
                    } else if (d4Var.G) {
                        b(context2, d4Var, b10);
                    }
                    bufferedReader.close();
                    return true;
                } finally {
                }
            } catch (FileNotFoundException e9) {
                l0Var.k(SentryLevel.ERROR, "App start profiling config file not found. ", e9);
                return true;
            } catch (Throwable th2) {
                l0Var.k(SentryLevel.ERROR, "Error reading app start profiling config file. ", th2);
                return true;
            }
        } catch (Throwable th3) {
            StrictMode.setThreadPolicy(threadPolicy);
            StrictMode.setVmPolicy(vmPolicy);
            throw th3;
        }
    }

    @Override // android.content.ContentProvider
    public final void shutdown() {
        io.sentry.r a = io.sentry.android.core.performance.f.N.a();
        try {
            u uVar = io.sentry.android.core.performance.f.b().E;
            if (uVar != null) {
                uVar.close();
            }
            g gVar = io.sentry.android.core.performance.f.b().F;
            if (gVar != null) {
                gVar.a(true);
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
}
