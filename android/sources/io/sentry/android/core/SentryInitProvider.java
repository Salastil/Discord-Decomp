package io.sentry.android.core;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.ProviderInfo;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import io.sentry.SentryLevel;
import io.sentry.c4;
import io.sentry.u4;

/* loaded from: classes3.dex */
public final class SentryInitProvider extends p0 {
    @Override // android.content.ContentProvider
    public final void attachInfo(Context context, ProviderInfo providerInfo) {
        if (SentryInitProvider.class.getName().equals(providerInfo.authority)) {
            throw new IllegalStateException("An applicationId is required to fulfill the manifest placeholder.");
        }
        super.attachInfo(context, providerInfo);
    }

    @Override // android.content.ContentProvider
    public final String getType(Uri uri) {
        return null;
    }

    @Override // android.content.ContentProvider
    public final boolean onCreate() {
        boolean z5;
        Bundle bundle;
        l0 l0Var = new l0(1);
        Context context = getContext();
        if (context == null) {
            l0Var.u(SentryLevel.FATAL, "App. Context from ContentProvider is null", new Object[0]);
            return false;
        }
        try {
            ApplicationInfo applicationInfo = Build.VERSION.SDK_INT >= 33 ? (ApplicationInfo) k0.f11261d.a(context) : (ApplicationInfo) k0.f11262e.a(context);
            bundle = applicationInfo != null ? applicationInfo.metaData : null;
        } catch (Throwable th2) {
            l0Var.k(SentryLevel.ERROR, "Failed to read auto-init from android manifest metadata.", th2);
        }
        if (bundle != null) {
            z5 = v0.f(bundle, l0Var, "io.sentry.auto-init", true);
            if (z5 && !k0.c(context)) {
                c1.b(context, l0Var, new i7.a(23));
                u4.d().a("AutoInit");
            }
            return true;
        }
        z5 = true;
        if (z5) {
            c1.b(context, l0Var, new i7.a(23));
            u4.d().a("AutoInit");
        }
        return true;
    }

    @Override // android.content.ContentProvider
    public final void shutdown() {
        c4.c();
    }
}
