package io.sentry.android.core;

import android.annotation.SuppressLint;
import android.content.Context;
import io.sentry.SentryLevel;
import io.sentry.l1;
import io.sentry.v5;
import java.io.Closeable;

@SuppressLint({"NewApi"})
/* loaded from: classes3.dex */
public class AnrV2Integration implements l1, Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final Context f11033d;

    /* renamed from: e, reason: collision with root package name */
    public final io.sentry.transport.d f11034e;

    /* renamed from: i, reason: collision with root package name */
    public SentryAndroidOptions f11035i;

    public AnrV2Integration(Context context) {
        Context applicationContext = context.getApplicationContext();
        this.f11033d = applicationContext != null ? applicationContext : context;
        this.f11034e = io.sentry.transport.d.f11998d;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        SentryAndroidOptions sentryAndroidOptions = this.f11035i;
        if (sentryAndroidOptions != null) {
            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "AnrV2Integration removed.", new Object[0]);
        }
    }

    @Override // io.sentry.l1
    public final void register(io.sentry.x0 x0Var, v5 v5Var) {
        SentryAndroidOptions sentryAndroidOptions = v5Var instanceof SentryAndroidOptions ? (SentryAndroidOptions) v5Var : null;
        d9.a.L(sentryAndroidOptions, "SentryAndroidOptions is required");
        this.f11035i = sentryAndroidOptions;
        sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "AnrIntegration enabled: %s", Boolean.valueOf(this.f11035i.isAnrEnabled()));
        if (this.f11035i.getCacheDirPath() == null) {
            this.f11035i.getLogger().u(SentryLevel.INFO, "Cache dir is not set, unable to process ANRs", new Object[0]);
            return;
        }
        if (this.f11035i.isAnrEnabled()) {
            try {
                io.sentry.a1 executorService = v5Var.getExecutorService();
                Context context = this.f11033d;
                SentryAndroidOptions sentryAndroidOptions2 = this.f11035i;
                executorService.submit(new i0(context, sentryAndroidOptions2, this.f11034e, new z(sentryAndroidOptions2, 0)));
            } catch (Throwable th2) {
                v5Var.getLogger().k(SentryLevel.DEBUG, "Failed to start ANR processor.", th2);
            }
            v5Var.getLogger().u(SentryLevel.DEBUG, "AnrV2Integration installed.", new Object[0]);
            com.facebook.imagepipeline.nativecode.b.a("AnrV2");
        }
    }
}
