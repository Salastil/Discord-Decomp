package io.sentry.android.core.internal.util;

import android.app.Activity;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import android.view.ViewTreeObserver;
import android.view.Window;
import com.appsflyer.internal.p;
import io.sentry.android.core.j0;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes3.dex */
public final class h implements ViewTreeObserver.OnDrawListener {

    /* renamed from: d, reason: collision with root package name */
    public final Handler f11229d = new Handler(Looper.getMainLooper());

    /* renamed from: e, reason: collision with root package name */
    public final AtomicReference f11230e;

    /* renamed from: i, reason: collision with root package name */
    public final Runnable f11231i;

    public h(View view, Runnable runnable) {
        this.f11230e = new AtomicReference(view);
        this.f11231i = runnable;
    }

    public static void a(Activity activity, Runnable runnable, j0 j0Var) {
        Window window = activity.getWindow();
        if (window != null) {
            View peekDecorView = window.peekDecorView();
            if (peekDecorView != null) {
                b(peekDecorView, runnable, j0Var);
            } else {
                Window.Callback callback = window.getCallback();
                window.setCallback(new io.sentry.android.core.performance.h(callback != null ? callback : new io.sentry.android.core.internal.gestures.b(), new p(6, window, callback, runnable, j0Var)));
            }
        }
    }

    public static void b(View view, Runnable runnable, j0 j0Var) {
        h hVar = new h(view, runnable);
        j0Var.getClass();
        if (Build.VERSION.SDK_INT >= 26 || (view.getViewTreeObserver().isAlive() && view.isAttachedToWindow())) {
            view.getViewTreeObserver().addOnDrawListener(hVar);
        } else {
            view.addOnAttachStateChangeListener(new el.i(1, hVar));
        }
    }

    @Override // android.view.ViewTreeObserver.OnDrawListener
    public final void onDraw() {
        View view = (View) this.f11230e.getAndSet(null);
        if (view == null) {
            return;
        }
        view.getViewTreeObserver().addOnGlobalLayoutListener(new com.discord.tti_measurement_view.a(this, view, 1));
        this.f11229d.postAtFrontOfQueue(this.f11231i);
    }
}
