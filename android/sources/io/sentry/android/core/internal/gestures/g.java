package io.sentry.android.core.internal.gestures;

import android.app.Activity;
import android.os.Handler;
import android.os.Looper;
import android.view.MotionEvent;
import android.view.View;
import android.view.Window;
import androidx.core.view.GestureDetectorCompat;
import com.facebook.react.uimanager.ViewProps;
import io.sentry.SentryLevel;
import io.sentry.v5;
import java.util.Collections;

/* loaded from: classes3.dex */
public final class g extends i {

    /* renamed from: e, reason: collision with root package name */
    public final Window.Callback f11179e;

    /* renamed from: i, reason: collision with root package name */
    public final f f11180i;

    /* renamed from: v, reason: collision with root package name */
    public final GestureDetectorCompat f11181v;

    /* renamed from: w, reason: collision with root package name */
    public final v5 f11182w;

    /* renamed from: x, reason: collision with root package name */
    public final lh.f f11183x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(Window.Callback callback, Activity activity, f fVar, v5 v5Var) {
        super(callback);
        GestureDetectorCompat gestureDetectorCompat = new GestureDetectorCompat(activity, fVar, new Handler(Looper.getMainLooper()));
        lh.f fVar2 = new lh.f(9);
        this.f11179e = callback;
        this.f11180i = fVar;
        this.f11182w = v5Var;
        this.f11181v = gestureDetectorCompat;
        this.f11183x = fVar2;
    }

    public final void a(MotionEvent motionEvent) {
        this.f11181v.a.onTouchEvent(motionEvent);
        if (motionEvent.getActionMasked() == 1) {
            f fVar = this.f11180i;
            View b10 = fVar.b("onUp");
            e eVar = fVar.f11178y;
            io.sentry.internal.gestures.b bVar = (io.sentry.internal.gestures.b) eVar.f11171d;
            if (b10 == null || bVar == null) {
                return;
            }
            d dVar = (d) eVar.f11170c;
            d dVar2 = d.Unknown;
            if (dVar == dVar2) {
                fVar.f11174i.getLogger().u(SentryLevel.DEBUG, "Unable to define scroll type. No breadcrumb captured.", new Object[0]);
                return;
            }
            float x5 = motionEvent.getX() - eVar.a;
            float y5 = motionEvent.getY() - eVar.f11169b;
            fVar.a(bVar, (d) eVar.f11170c, Collections.singletonMap("direction", Math.abs(x5) > Math.abs(y5) ? x5 > 0.0f ? ViewProps.RIGHT : ViewProps.LEFT : y5 > 0.0f ? "down" : "up"), motionEvent);
            fVar.c(bVar, (d) eVar.f11170c);
            eVar.f11171d = null;
            eVar.f11170c = dVar2;
            eVar.a = 0.0f;
            eVar.f11169b = 0.0f;
        }
    }

    @Override // io.sentry.android.core.internal.gestures.i, android.view.Window.Callback
    public final boolean dispatchTouchEvent(MotionEvent motionEvent) {
        v5 v5Var;
        if (motionEvent != null) {
            this.f11183x.getClass();
            try {
                a(MotionEvent.obtain(motionEvent));
            } finally {
                if (v5Var != null) {
                    try {
                    } finally {
                    }
                }
            }
        }
        return this.f11184d.dispatchTouchEvent(motionEvent);
    }
}
