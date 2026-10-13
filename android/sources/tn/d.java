package tn;

import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import com.facebook.react.views.view.ReactViewGroup;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d extends ReactViewGroup implements ViewTreeObserver.OnPreDrawListener {

    /* renamed from: d, reason: collision with root package name */
    public Function3 f18662d;

    /* renamed from: e, reason: collision with root package name */
    public a f18663e;

    /* renamed from: i, reason: collision with root package name */
    public b f18664i;

    public final void c() {
        a c6;
        Function3 function3 = this.f18662d;
        if (function3 == null || (c6 = z0.d.c(this)) == null) {
            return;
        }
        View rootView = getRootView();
        Intrinsics.checkNotNull(rootView, "null cannot be cast to non-null type android.view.ViewGroup");
        b b10 = z0.d.b(this, (ViewGroup) rootView);
        if (b10 == null) {
            return;
        }
        if (Intrinsics.areEqual(this.f18663e, c6) && Intrinsics.areEqual(this.f18664i, b10)) {
            return;
        }
        function3.invoke(this, c6, b10);
        this.f18663e = c6;
        this.f18664i = b10;
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        getViewTreeObserver().addOnPreDrawListener(this);
        c();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        getViewTreeObserver().removeOnPreDrawListener(this);
    }

    @Override // android.view.ViewTreeObserver.OnPreDrawListener
    public final boolean onPreDraw() {
        c();
        return true;
    }

    public final void setOnInsetsChangeHandler(Function3 function3) {
        this.f18662d = function3;
        c();
    }
}
