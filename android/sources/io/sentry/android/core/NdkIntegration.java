package io.sentry.android.core;

import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.l1;
import io.sentry.v5;
import java.io.Closeable;

/* loaded from: classes3.dex */
public final class NdkIntegration implements l1, Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final Class f11049d;

    /* renamed from: e, reason: collision with root package name */
    public SentryAndroidOptions f11050e;

    public NdkIntegration(Class cls) {
        this.f11049d = cls;
    }

    public static void c(SentryAndroidOptions sentryAndroidOptions) {
        sentryAndroidOptions.setEnableNdk(false);
        sentryAndroidOptions.setEnableScopeSync(false);
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        SentryAndroidOptions sentryAndroidOptions = this.f11050e;
        if (sentryAndroidOptions == null || !sentryAndroidOptions.isEnableNdk()) {
            return;
        }
        Class cls = this.f11049d;
        try {
            if (cls != null) {
                try {
                    try {
                        cls.getMethod("close", null).invoke(null, null);
                        this.f11050e.getLogger().u(SentryLevel.DEBUG, "NdkIntegration removed.", new Object[0]);
                        c(this.f11050e);
                    } catch (NoSuchMethodException e9) {
                        this.f11050e.getLogger().k(SentryLevel.ERROR, "Failed to invoke the SentryNdk.close method.", e9);
                        c(this.f11050e);
                    }
                } catch (Throwable th2) {
                    this.f11050e.getLogger().k(SentryLevel.ERROR, "Failed to close SentryNdk.", th2);
                    c(this.f11050e);
                }
            }
        } catch (Throwable th3) {
            c(this.f11050e);
            throw th3;
        }
    }

    @Override // io.sentry.l1
    public final void register(io.sentry.x0 x0Var, v5 v5Var) {
        Class cls;
        SentryAndroidOptions sentryAndroidOptions = v5Var instanceof SentryAndroidOptions ? (SentryAndroidOptions) v5Var : null;
        d9.a.L(sentryAndroidOptions, "SentryAndroidOptions is required");
        this.f11050e = sentryAndroidOptions;
        boolean isEnableNdk = sentryAndroidOptions.isEnableNdk();
        ILogger logger = this.f11050e.getLogger();
        SentryLevel sentryLevel = SentryLevel.DEBUG;
        logger.u(sentryLevel, "NdkIntegration enabled: %s", Boolean.valueOf(isEnableNdk));
        if (!isEnableNdk || (cls = this.f11049d) == null) {
            c(this.f11050e);
            return;
        }
        if (this.f11050e.getCacheDirPath() == null) {
            this.f11050e.getLogger().u(SentryLevel.ERROR, "No cache dir path is defined in options.", new Object[0]);
            c(this.f11050e);
            return;
        }
        try {
            cls.getMethod("init", SentryAndroidOptions.class).invoke(null, this.f11050e);
            this.f11050e.getLogger().u(sentryLevel, "NdkIntegration installed.", new Object[0]);
            com.facebook.imagepipeline.nativecode.b.a("Ndk");
        } catch (NoSuchMethodException e9) {
            c(this.f11050e);
            this.f11050e.getLogger().k(SentryLevel.ERROR, "Failed to invoke the SentryNdk.init method.", e9);
        } catch (Throwable th2) {
            c(this.f11050e);
            this.f11050e.getLogger().k(SentryLevel.ERROR, "Failed to initialize SentryNdk.", th2);
        }
    }
}
