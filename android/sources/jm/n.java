package jm;

import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;
import com.facebook.react.views.textinput.ReactEditText;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class n implements o {

    /* renamed from: d, reason: collision with root package name */
    public final q f12919d;

    /* renamed from: e, reason: collision with root package name */
    public final ReactEditText f12920e;

    /* renamed from: i, reason: collision with root package name */
    public float f12921i;

    /* renamed from: v, reason: collision with root package name */
    public float f12922v;

    /* renamed from: w, reason: collision with root package name */
    public final int f12923w;

    public n(q handler, ReactEditText editText) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        Intrinsics.checkNotNullParameter(editText, "editText");
        this.f12919d = handler;
        this.f12920e = editText;
        ViewConfiguration viewConfiguration = ViewConfiguration.get(editText.getContext());
        this.f12923w = viewConfiguration.getScaledTouchSlop() * viewConfiguration.getScaledTouchSlop();
    }

    @Override // jm.o
    public final boolean a() {
        return true;
    }

    @Override // jm.o
    public final Boolean b(f handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        if (handler instanceof q) {
            return null;
        }
        return Boolean.valueOf(!(handler instanceof km.l));
    }

    @Override // jm.o
    public final boolean c(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        return true;
    }

    @Override // jm.o
    public final boolean d() {
        return true;
    }

    @Override // jm.o
    public final boolean e(View view) {
        return io.sentry.config.a.h(view);
    }

    @Override // jm.o
    public final void f(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        this.f12919d.a(false);
        this.f12920e.onTouchEvent(event);
        this.f12921i = event.getX();
        this.f12922v = event.getY();
    }

    @Override // jm.o
    public final Boolean g(View view, MotionEvent motionEvent) {
        return io.sentry.config.a.I(view, motionEvent);
    }

    @Override // jm.o
    public final void h(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        if (k0.d.c(event.getY(), this.f12922v, event.getY() - this.f12922v, (event.getX() - this.f12921i) * (event.getX() - this.f12921i)) < this.f12923w) {
            this.f12920e.requestFocusFromJS();
        }
    }

    @Override // jm.o
    public final boolean i(List list, q qVar) {
        io.sentry.config.a.K(list, qVar);
        return true;
    }
}
