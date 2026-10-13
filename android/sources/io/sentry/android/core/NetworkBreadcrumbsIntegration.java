package io.sentry.android.core;

import android.content.Context;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.l1;
import io.sentry.v5;
import java.io.Closeable;

/* loaded from: classes3.dex */
public final class NetworkBreadcrumbsIntegration implements l1, Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final Context f11051d;

    /* renamed from: e, reason: collision with root package name */
    public final j0 f11052e;

    /* renamed from: i, reason: collision with root package name */
    public final io.sentry.util.a f11053i = new io.sentry.util.a();

    /* renamed from: v, reason: collision with root package name */
    public volatile z0 f11054v;

    public NetworkBreadcrumbsIntegration(Context context, j0 j0Var) {
        Context applicationContext = context.getApplicationContext();
        this.f11051d = applicationContext != null ? applicationContext : context;
        this.f11052e = j0Var;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        io.sentry.r a = this.f11053i.a();
        try {
            z0 z0Var = this.f11054v;
            this.f11054v = null;
            a.close();
            if (z0Var != null) {
                io.sentry.r a10 = io.sentry.android.core.internal.util.c.K.a();
                try {
                    io.sentry.android.core.internal.util.c.L.remove(z0Var);
                    a10.close();
                } catch (Throwable th2) {
                    try {
                        a10.close();
                    } catch (Throwable th3) {
                        th2.addSuppressed(th3);
                    }
                    throw th2;
                }
            }
        } catch (Throwable th4) {
            try {
                a.close();
            } catch (Throwable th5) {
                th4.addSuppressed(th5);
            }
            throw th4;
        }
    }

    @Override // io.sentry.l1
    public final void register(io.sentry.x0 x0Var, v5 v5Var) {
        SentryAndroidOptions sentryAndroidOptions = v5Var instanceof SentryAndroidOptions ? (SentryAndroidOptions) v5Var : null;
        d9.a.L(sentryAndroidOptions, "SentryAndroidOptions is required");
        ILogger logger = v5Var.getLogger();
        SentryLevel sentryLevel = SentryLevel.DEBUG;
        logger.u(sentryLevel, "NetworkBreadcrumbsIntegration enabled: %s", Boolean.valueOf(sentryAndroidOptions.isEnableNetworkEventBreadcrumbs()));
        if (sentryAndroidOptions.isEnableNetworkEventBreadcrumbs()) {
            this.f11052e.getClass();
            io.sentry.r a = this.f11053i.a();
            try {
                this.f11054v = new z0(this.f11052e, v5Var.getDateProvider());
                if (io.sentry.android.core.internal.util.c.g(this.f11051d, v5Var.getLogger(), this.f11052e, this.f11054v)) {
                    v5Var.getLogger().u(sentryLevel, "NetworkBreadcrumbsIntegration installed.", new Object[0]);
                    com.facebook.imagepipeline.nativecode.b.a("NetworkBreadcrumbs");
                } else {
                    v5Var.getLogger().u(sentryLevel, "NetworkBreadcrumbsIntegration not installed.", new Object[0]);
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
}
