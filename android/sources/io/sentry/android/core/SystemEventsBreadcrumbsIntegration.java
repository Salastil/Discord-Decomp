package io.sentry.android.core;

import android.content.Context;
import android.content.IntentFilter;
import android.os.HandlerThread;
import io.sentry.SentryLevel;
import io.sentry.l1;
import io.sentry.v3;
import io.sentry.v5;
import java.io.Closeable;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public final class SystemEventsBreadcrumbsIntegration implements l1, Closeable, b0 {
    public i1 I;

    /* renamed from: d, reason: collision with root package name */
    public final Context f11069d;

    /* renamed from: e, reason: collision with root package name */
    public volatile j1 f11070e;

    /* renamed from: i, reason: collision with root package name */
    public SentryAndroidOptions f11071i;

    /* renamed from: v, reason: collision with root package name */
    public v3 f11072v;

    /* renamed from: w, reason: collision with root package name */
    public final String[] f11073w;

    /* renamed from: x, reason: collision with root package name */
    public volatile boolean f11074x = false;

    /* renamed from: y, reason: collision with root package name */
    public volatile boolean f11075y = false;
    public volatile IntentFilter E = null;
    public volatile HandlerThread F = null;
    public final AtomicBoolean G = new AtomicBoolean(false);
    public final io.sentry.util.a H = new io.sentry.util.a();

    public SystemEventsBreadcrumbsIntegration(Context context) {
        String[] strArr = {"android.intent.action.ACTION_SHUTDOWN", "android.intent.action.AIRPLANE_MODE", "android.intent.action.BATTERY_CHANGED", "android.intent.action.CAMERA_BUTTON", "android.intent.action.CONFIGURATION_CHANGED", "android.intent.action.DATE_CHANGED", "android.intent.action.DEVICE_STORAGE_LOW", "android.intent.action.DEVICE_STORAGE_OK", "android.intent.action.DOCK_EVENT", "android.intent.action.DREAMING_STARTED", "android.intent.action.DREAMING_STOPPED", "android.intent.action.INPUT_METHOD_CHANGED", "android.intent.action.LOCALE_CHANGED", "android.intent.action.SCREEN_OFF", "android.intent.action.SCREEN_ON", "android.intent.action.TIMEZONE_CHANGED", "android.intent.action.TIME_SET", "android.os.action.DEVICE_IDLE_MODE_CHANGED", "android.os.action.POWER_SAVE_MODE_CHANGED"};
        Context applicationContext = context.getApplicationContext();
        this.f11069d = applicationContext == null ? context : applicationContext;
        this.f11073w = strArr;
    }

    @Override // io.sentry.android.core.b0
    public final void c() {
        if (this.f11072v == null || this.f11071i == null) {
            return;
        }
        this.f11075y = false;
        g(this.f11072v, this.f11071i);
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        io.sentry.r a = this.H.a();
        try {
            this.f11074x = true;
            this.E = null;
            if (this.F != null) {
                this.F.quit();
            }
            this.F = null;
            a.close();
            e0.f11119w.i(this);
            SentryAndroidOptions sentryAndroidOptions = this.f11071i;
            if (sentryAndroidOptions != null) {
                try {
                    sentryAndroidOptions.getExecutorService().submit(new h1(0, this));
                } catch (RejectedExecutionException unused) {
                    i();
                }
            }
            SentryAndroidOptions sentryAndroidOptions2 = this.f11071i;
            if (sentryAndroidOptions2 != null) {
                sentryAndroidOptions2.getLogger().u(SentryLevel.DEBUG, "SystemEventsBreadcrumbsIntegration removed.", new Object[0]);
            }
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // io.sentry.android.core.b0
    public final void f() {
        SentryAndroidOptions sentryAndroidOptions = this.f11071i;
        if (sentryAndroidOptions == null) {
            return;
        }
        try {
            sentryAndroidOptions.getExecutorService().submit(new h1(0, this));
        } catch (RejectedExecutionException unused) {
            i();
        }
    }

    public final void g(v3 v3Var, SentryAndroidOptions sentryAndroidOptions) {
        if (sentryAndroidOptions.isEnableSystemEventBreadcrumbs() && !this.f11074x && !this.f11075y && this.f11070e == null) {
            try {
                sentryAndroidOptions.getExecutorService().submit(new b1(this, v3Var, sentryAndroidOptions));
            } catch (Throwable unused) {
                sentryAndroidOptions.getLogger().u(SentryLevel.WARNING, "Failed to start SystemEventsBreadcrumbsIntegration on executor thread.", new Object[0]);
            }
        }
    }

    public final void i() {
        io.sentry.r a = this.H.a();
        try {
            this.f11075y = true;
            j1 j1Var = this.f11070e;
            this.f11070e = null;
            a.close();
            if (j1Var != null) {
                this.f11069d.unregisterReceiver(j1Var);
            }
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
        this.f11071i = sentryAndroidOptions;
        this.f11072v = v3.a;
        sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "SystemEventsBreadcrumbsIntegration enabled: %s", Boolean.valueOf(this.f11071i.isEnableSystemEventBreadcrumbs()));
        if (this.f11071i.isEnableSystemEventBreadcrumbs()) {
            e0.f11119w.c(this);
            if (k0.i()) {
                g(this.f11072v, this.f11071i);
            }
        }
    }
}
