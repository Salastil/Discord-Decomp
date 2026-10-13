package io.sentry.android.core;

import android.app.Activity;
import android.graphics.Bitmap;
import io.sentry.Hint;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import java.lang.ref.WeakReference;

/* loaded from: classes3.dex */
public final class ScreenshotEventProcessor implements io.sentry.b0 {

    /* renamed from: d, reason: collision with root package name */
    public final SentryAndroidOptions f11055d;

    /* renamed from: e, reason: collision with root package name */
    public final j0 f11056e;

    /* renamed from: i, reason: collision with root package name */
    public final io.sentry.android.core.internal.util.g f11057i;

    public ScreenshotEventProcessor(SentryAndroidOptions sentryAndroidOptions, j0 j0Var) {
        d9.a.L(sentryAndroidOptions, "SentryAndroidOptions is required");
        this.f11055d = sentryAndroidOptions;
        this.f11056e = j0Var;
        this.f11057i = new io.sentry.android.core.internal.util.g(2000L, 3);
        if (sentryAndroidOptions.isAttachScreenshot()) {
            com.facebook.imagepipeline.nativecode.b.a("Screenshot");
        }
    }

    @Override // io.sentry.b0
    public final SentryEvent f(SentryEvent sentryEvent, Hint hint) {
        Bitmap a;
        if (sentryEvent.f()) {
            SentryAndroidOptions sentryAndroidOptions = this.f11055d;
            if (!sentryAndroidOptions.isAttachScreenshot()) {
                sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "attachScreenshot is disabled.", new Object[0]);
                return sentryEvent;
            }
            WeakReference weakReference = (WeakReference) l0.f11265e.f11266d;
            Activity activity = weakReference != null ? (Activity) weakReference.get() : null;
            if (activity != null && !a5.k0.D(hint)) {
                boolean a10 = this.f11057i.a();
                sentryAndroidOptions.getBeforeScreenshotCaptureCallback();
                if (!a10 && (a = jf.a.a(activity, sentryAndroidOptions.getThreadChecker(), sentryAndroidOptions.getLogger(), this.f11056e)) != null) {
                    hint.f10982d = new io.sentry.a(new com.facebook.react.runtime.o(9, this, a));
                    hint.d(activity, "android:activity");
                }
            }
        }
        return sentryEvent;
    }

    @Override // io.sentry.b0
    public final io.sentry.protocol.d0 g(io.sentry.protocol.d0 d0Var, Hint hint) {
        return d0Var;
    }
}
