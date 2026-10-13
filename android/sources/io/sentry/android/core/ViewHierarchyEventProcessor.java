package io.sentry.android.core;

import android.app.Activity;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import com.facebook.react.uimanager.ViewProps;
import io.sentry.Hint;
import io.sentry.ILogger;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes3.dex */
public final class ViewHierarchyEventProcessor implements io.sentry.b0 {

    /* renamed from: d, reason: collision with root package name */
    public final SentryAndroidOptions f11084d;

    /* renamed from: e, reason: collision with root package name */
    public final io.sentry.android.core.internal.util.g f11085e;

    public ViewHierarchyEventProcessor(SentryAndroidOptions sentryAndroidOptions) {
        d9.a.L(sentryAndroidOptions, "SentryAndroidOptions is required");
        this.f11084d = sentryAndroidOptions;
        this.f11085e = new io.sentry.android.core.internal.util.g(2000L, 3);
        if (sentryAndroidOptions.isAttachViewHierarchy()) {
            com.facebook.imagepipeline.nativecode.b.a("ViewHierarchy");
        }
    }

    public static void a(View view, io.sentry.protocol.j0 j0Var, List list) {
        if (view instanceof ViewGroup) {
            Iterator it = list.iterator();
            if (it.hasNext()) {
                throw s4.h.b(it);
            }
            ViewGroup viewGroup = (ViewGroup) view;
            int childCount = viewGroup.getChildCount();
            if (childCount == 0) {
                return;
            }
            ArrayList arrayList = new ArrayList(childCount);
            for (int i5 = 0; i5 < childCount; i5++) {
                View childAt = viewGroup.getChildAt(i5);
                if (childAt != null) {
                    io.sentry.protocol.j0 d6 = d(childAt);
                    arrayList.add(d6);
                    a(childAt, d6, list);
                }
            }
            j0Var.H = arrayList;
        }
    }

    public static io.sentry.protocol.i0 b(Activity activity, List list, io.sentry.util.thread.a aVar, ILogger iLogger) {
        ILogger iLogger2;
        Throwable th2;
        if (activity == null) {
            iLogger.u(SentryLevel.INFO, "Missing activity for view hierarchy snapshot.", new Object[0]);
            return null;
        }
        Window window = activity.getWindow();
        if (window == null) {
            iLogger.u(SentryLevel.INFO, "Missing window for view hierarchy snapshot.", new Object[0]);
            return null;
        }
        View peekDecorView = window.peekDecorView();
        if (peekDecorView == null) {
            iLogger.u(SentryLevel.INFO, "Missing decor view for view hierarchy snapshot.", new Object[0]);
            return null;
        }
        try {
            if (aVar.c()) {
                try {
                    ArrayList arrayList = new ArrayList(1);
                    io.sentry.protocol.i0 i0Var = new io.sentry.protocol.i0("android_view_system", arrayList);
                    io.sentry.protocol.j0 d6 = d(peekDecorView);
                    arrayList.add(d6);
                    a(peekDecorView, d6, list);
                    return i0Var;
                } catch (Throwable th3) {
                    th2 = th3;
                    iLogger2 = iLogger;
                    iLogger2.k(SentryLevel.ERROR, "Failed to process view hierarchy.", th2);
                    return null;
                }
            }
            CountDownLatch countDownLatch = new CountDownLatch(1);
            AtomicReference atomicReference = new AtomicReference(null);
            iLogger2 = iLogger;
            try {
                activity.runOnUiThread(new com.facebook.react.devsupport.h(atomicReference, peekDecorView, list, countDownLatch, iLogger2, 3));
                if (countDownLatch.await(1000L, TimeUnit.MILLISECONDS)) {
                    return (io.sentry.protocol.i0) atomicReference.get();
                }
                return null;
            } catch (Throwable th4) {
                th = th4;
                th2 = th;
                iLogger2.k(SentryLevel.ERROR, "Failed to process view hierarchy.", th2);
                return null;
            }
        } catch (Throwable th5) {
            th = th5;
            iLogger2 = iLogger;
        }
    }

    public static io.sentry.protocol.j0 d(View view) {
        io.sentry.protocol.j0 j0Var = new io.sentry.protocol.j0();
        j0Var.f11818e = ta.a.w(view);
        try {
            j0Var.f11819i = io.sentry.android.core.internal.gestures.h.b(view);
        } catch (Throwable unused) {
        }
        j0Var.f11823y = Double.valueOf(view.getX());
        j0Var.E = Double.valueOf(view.getY());
        j0Var.f11821w = Double.valueOf(view.getWidth());
        j0Var.f11822x = Double.valueOf(view.getHeight());
        j0Var.G = Double.valueOf(view.getAlpha());
        int visibility = view.getVisibility();
        if (visibility == 0) {
            j0Var.F = ViewProps.VISIBLE;
        } else if (visibility == 4) {
            j0Var.F = "invisible";
        } else if (visibility == 8) {
            j0Var.F = "gone";
        }
        return j0Var;
    }

    @Override // io.sentry.b0
    public final SentryEvent f(SentryEvent sentryEvent, Hint hint) {
        if (sentryEvent.f()) {
            SentryAndroidOptions sentryAndroidOptions = this.f11084d;
            if (!sentryAndroidOptions.isAttachViewHierarchy()) {
                sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "attachViewHierarchy is disabled.", new Object[0]);
                return sentryEvent;
            }
            if (!a5.k0.D(hint)) {
                boolean a = this.f11085e.a();
                sentryAndroidOptions.getBeforeViewHierarchyCaptureCallback();
                if (!a) {
                    WeakReference weakReference = (WeakReference) l0.f11265e.f11266d;
                    io.sentry.protocol.i0 b10 = b(weakReference != null ? (Activity) weakReference.get() : null, sentryAndroidOptions.getViewHierarchyExporters(), sentryAndroidOptions.getThreadChecker(), sentryAndroidOptions.getLogger());
                    if (b10 != null) {
                        hint.f10983e = new io.sentry.a(b10);
                    }
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
