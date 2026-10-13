package io.sentry.android.core;

import android.content.Context;
import io.sentry.SentryLevel;
import io.sentry.l1;
import io.sentry.v5;
import java.io.Closeable;

/* loaded from: classes3.dex */
public class TombstoneIntegration implements l1, Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final Context f11076d;

    /* renamed from: e, reason: collision with root package name */
    public final io.sentry.transport.d f11077e;

    /* renamed from: i, reason: collision with root package name */
    public SentryAndroidOptions f11078i;

    public TombstoneIntegration(Context context) {
        Context applicationContext = context.getApplicationContext();
        this.f11076d = applicationContext != null ? applicationContext : context;
        this.f11077e = io.sentry.transport.d.f11998d;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        SentryAndroidOptions sentryAndroidOptions = this.f11078i;
        if (sentryAndroidOptions != null) {
            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "TombstoneIntegration removed.", new Object[0]);
        }
    }

    @Override // io.sentry.l1
    public final void register(io.sentry.x0 x0Var, v5 v5Var) {
        SentryAndroidOptions sentryAndroidOptions = v5Var instanceof SentryAndroidOptions ? (SentryAndroidOptions) v5Var : null;
        d9.a.L(sentryAndroidOptions, "SentryAndroidOptions is required");
        this.f11078i = sentryAndroidOptions;
        sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "TombstoneIntegration enabled: %s", Boolean.valueOf(this.f11078i.isTombstoneEnabled()));
        if (this.f11078i.isTombstoneEnabled()) {
            if (this.f11078i.getCacheDirPath() == null) {
                this.f11078i.getLogger().u(SentryLevel.INFO, "Cache dir is not set, unable to process Tombstones", new Object[0]);
                return;
            }
            try {
                io.sentry.a1 executorService = v5Var.getExecutorService();
                Context context = this.f11076d;
                SentryAndroidOptions sentryAndroidOptions2 = this.f11078i;
                executorService.submit(new i0(context, sentryAndroidOptions2, this.f11077e, new z(sentryAndroidOptions2, 1)));
            } catch (Throwable th2) {
                v5Var.getLogger().k(SentryLevel.DEBUG, "Failed to start tombstone processor.", th2);
            }
            v5Var.getLogger().u(SentryLevel.DEBUG, "TombstoneIntegration installed.", new Object[0]);
            com.facebook.imagepipeline.nativecode.b.a("Tombstone");
        }
    }
}
