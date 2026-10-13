package io.sentry.android.core.internal.gestures;

import android.app.Activity;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.View;
import android.view.Window;
import com.discord.jank_stats.JankScreenContext;
import com.facebook.react.uimanager.ViewProps;
import io.sentry.Breadcrumb;
import io.sentry.Hint;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.android.core.w;
import io.sentry.f1;
import io.sentry.l6;
import io.sentry.p6;
import io.sentry.protocol.g0;
import io.sentry.q6;
import io.sentry.util.m;
import io.sentry.v3;
import io.sentry.x0;
import java.lang.ref.WeakReference;
import java.util.Collections;
import java.util.Map;

/* loaded from: classes3.dex */
public final class f implements GestureDetector.OnGestureListener {

    /* renamed from: d, reason: collision with root package name */
    public final WeakReference f11172d;

    /* renamed from: e, reason: collision with root package name */
    public final x0 f11173e;

    /* renamed from: i, reason: collision with root package name */
    public final SentryAndroidOptions f11174i;

    /* renamed from: v, reason: collision with root package name */
    public io.sentry.internal.gestures.b f11175v = null;

    /* renamed from: w, reason: collision with root package name */
    public f1 f11176w = null;

    /* renamed from: x, reason: collision with root package name */
    public d f11177x;

    /* renamed from: y, reason: collision with root package name */
    public final e f11178y;

    public f(Activity activity, v3 v3Var, SentryAndroidOptions sentryAndroidOptions) {
        d dVar = d.Unknown;
        this.f11177x = dVar;
        e eVar = new e();
        eVar.f11170c = dVar;
        eVar.a = 0.0f;
        eVar.f11169b = 0.0f;
        this.f11178y = eVar;
        this.f11172d = new WeakReference(activity);
        this.f11173e = v3Var;
        this.f11174i = sentryAndroidOptions;
    }

    public final void a(io.sentry.internal.gestures.b bVar, d dVar, Map map, MotionEvent motionEvent) {
        if (this.f11174i.isEnableUserInteractionBreadcrumbs()) {
            int i5 = c.a[dVar.ordinal()];
            String str = i5 != 1 ? i5 != 2 ? i5 != 3 ? JankScreenContext.UNKNOWN_SCREEN : "swipe" : ViewProps.SCROLL : "click";
            Hint hint = new Hint();
            hint.d(motionEvent, "android:motionEvent");
            hint.d(bVar.a.get(), "android:view");
            String str2 = bVar.f11625c;
            String str3 = bVar.f11624b;
            Breadcrumb breadcrumb = new Breadcrumb();
            breadcrumb.f10976w = "user";
            breadcrumb.f10978y = "ui.".concat(str);
            if (str2 != null) {
                breadcrumb.c(str2, "view.id");
            }
            if (str3 != null) {
                breadcrumb.c(str3, "view.class");
            }
            for (Map.Entry entry : map.entrySet()) {
                breadcrumb.f10977x.put((String) entry.getKey(), entry.getValue());
            }
            breadcrumb.F = SentryLevel.INFO;
            this.f11173e.g(breadcrumb, hint);
        }
    }

    public final View b(String str) {
        Activity activity = (Activity) this.f11172d.get();
        SentryAndroidOptions sentryAndroidOptions = this.f11174i;
        if (activity == null) {
            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, s4.h.f("Activity is null in ", str, ". No breadcrumb captured."), new Object[0]);
            return null;
        }
        Window window = activity.getWindow();
        if (window == null) {
            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, s4.h.f("Window is null in ", str, ". No breadcrumb captured."), new Object[0]);
            return null;
        }
        View decorView = window.getDecorView();
        if (decorView != null) {
            return decorView;
        }
        sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, s4.h.f("DecorView is null in ", str, ". No breadcrumb captured."), new Object[0]);
        return null;
    }

    public final void c(io.sentry.internal.gestures.b bVar, d dVar) {
        boolean z5 = dVar == d.Click || !(dVar == this.f11177x && bVar.equals(this.f11175v));
        SentryAndroidOptions sentryAndroidOptions = this.f11174i;
        boolean isTracingEnabled = sentryAndroidOptions.isTracingEnabled();
        x0 x0Var = this.f11173e;
        if (!isTracingEnabled || !sentryAndroidOptions.isEnableUserInteractionTracing()) {
            if (z5) {
                if (sentryAndroidOptions.isEnableAutoTraceIdGeneration()) {
                    x0Var.q(null, new m(0));
                }
                this.f11175v = bVar;
                this.f11177x = dVar;
                return;
            }
            return;
        }
        Activity activity = (Activity) this.f11172d.get();
        if (activity == null) {
            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "Activity is null, no transaction captured.", new Object[0]);
            return;
        }
        String str = bVar.f11625c;
        if (str == null) {
            d9.a.L(null, "UiElement.tag can't be null");
            str = null;
        }
        f1 f1Var = this.f11176w;
        if (f1Var != null) {
            if (!z5 && !f1Var.isFinished()) {
                sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, s4.h.f("The view with id: ", str, " already has an ongoing transaction assigned. Rescheduling finish"), new Object[0]);
                if (sentryAndroidOptions.getIdleTimeout() != null) {
                    this.f11176w.m();
                    return;
                }
                return;
            }
            d(l6.OK);
        }
        String str2 = activity.getClass().getSimpleName() + "." + str;
        int i5 = c.a[dVar.ordinal()];
        String concat = "ui.action.".concat(i5 != 1 ? i5 != 2 ? i5 != 3 ? JankScreenContext.UNKNOWN_SCREEN : "swipe" : ViewProps.SCROLL : "click");
        q6 q6Var = new q6();
        q6Var.f11920f = true;
        long deadlineTimeout = sentryAndroidOptions.getDeadlineTimeout();
        q6Var.f11922h = deadlineTimeout <= 0 ? null : Long.valueOf(deadlineTimeout);
        q6Var.f11921g = sentryAndroidOptions.getIdleTimeout();
        q6Var.a = true;
        q6Var.f58d = "auto.ui.gesture_listener." + bVar.f11626d;
        f1 j = x0Var.j(new p6(str2, g0.COMPONENT, concat, null), q6Var);
        x0Var.q(null, new w(1, this, j));
        this.f11176w = j;
        this.f11175v = bVar;
        this.f11177x = dVar;
    }

    public final void d(l6 l6Var) {
        f1 f1Var = this.f11176w;
        if (f1Var != null) {
            if (f1Var.a() == null) {
                this.f11176w.f(l6Var);
            } else {
                this.f11176w.g();
            }
        }
        this.f11173e.q(null, new hc.m(17, this));
        this.f11176w = null;
        if (this.f11175v != null) {
            this.f11175v = null;
        }
        this.f11177x = d.Unknown;
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final boolean onDown(MotionEvent motionEvent) {
        if (motionEvent == null) {
            return false;
        }
        e eVar = this.f11178y;
        eVar.f11171d = null;
        eVar.f11170c = d.Unknown;
        eVar.a = 0.0f;
        eVar.f11169b = 0.0f;
        eVar.a = motionEvent.getX();
        eVar.f11169b = motionEvent.getY();
        return false;
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final boolean onFling(MotionEvent motionEvent, MotionEvent motionEvent2, float f2, float f10) {
        this.f11178y.f11170c = d.Swipe;
        return false;
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final void onLongPress(MotionEvent motionEvent) {
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final boolean onScroll(MotionEvent motionEvent, MotionEvent motionEvent2, float f2, float f10) {
        View b10 = b("onScroll");
        if (b10 != null && motionEvent != null) {
            e eVar = this.f11178y;
            if (((d) eVar.f11170c) == d.Unknown) {
                float x5 = motionEvent.getX();
                float y5 = motionEvent.getY();
                io.sentry.internal.gestures.a aVar = io.sentry.internal.gestures.a.SCROLLABLE;
                SentryAndroidOptions sentryAndroidOptions = this.f11174i;
                io.sentry.internal.gestures.b a = h.a(sentryAndroidOptions, b10, x5, y5, aVar);
                if (a == null) {
                    sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "Unable to find scroll target. No breadcrumb captured.", new Object[0]);
                    eVar.f11170c = d.Scroll;
                    return false;
                }
                ILogger logger = sentryAndroidOptions.getLogger();
                SentryLevel sentryLevel = SentryLevel.DEBUG;
                StringBuilder sb2 = new StringBuilder("Scroll target found: ");
                String str = a.f11625c;
                if (str == null) {
                    d9.a.L(null, "UiElement.tag can't be null");
                    str = null;
                }
                sb2.append(str);
                logger.u(sentryLevel, sb2.toString(), new Object[0]);
                eVar.f11171d = a;
                eVar.f11170c = d.Scroll;
            }
        }
        return false;
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final void onShowPress(MotionEvent motionEvent) {
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final boolean onSingleTapUp(MotionEvent motionEvent) {
        View b10 = b("onSingleTapUp");
        if (b10 != null && motionEvent != null) {
            float x5 = motionEvent.getX();
            float y5 = motionEvent.getY();
            io.sentry.internal.gestures.a aVar = io.sentry.internal.gestures.a.CLICKABLE;
            SentryAndroidOptions sentryAndroidOptions = this.f11174i;
            io.sentry.internal.gestures.b a = h.a(sentryAndroidOptions, b10, x5, y5, aVar);
            if (a == null) {
                sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "Unable to find click target. No breadcrumb captured.", new Object[0]);
                return false;
            }
            d dVar = d.Click;
            a(a, dVar, Collections.EMPTY_MAP, motionEvent);
            c(a, dVar);
        }
        return false;
    }
}
