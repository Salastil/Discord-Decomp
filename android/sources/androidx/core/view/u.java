package androidx.core.view;

import android.view.View;
import android.view.ViewTreeObserver;

/* loaded from: classes.dex */
public final class u implements ViewTreeObserver.OnPreDrawListener, View.OnAttachStateChangeListener {

    /* renamed from: d, reason: collision with root package name */
    private final View f1634d;

    /* renamed from: e, reason: collision with root package name */
    public ViewTreeObserver f1635e;

    /* renamed from: i, reason: collision with root package name */
    private final Runnable f1636i;

    public u(View view, Runnable runnable) {
        this.f1634d = view;
        this.f1635e = view.getViewTreeObserver();
        this.f1636i = runnable;
    }

    public static void a(View view, Runnable runnable) {
        if (view == null) {
            throw new NullPointerException("view == null");
        }
        u uVar = new u(view, runnable);
        view.getViewTreeObserver().addOnPreDrawListener(uVar);
        view.addOnAttachStateChangeListener(uVar);
    }

    @Override // android.view.ViewTreeObserver.OnPreDrawListener
    public final boolean onPreDraw() {
        if (this.f1635e.isAlive()) {
            this.f1635e.removeOnPreDrawListener(this);
        } else {
            this.f1634d.getViewTreeObserver().removeOnPreDrawListener(this);
        }
        this.f1634d.removeOnAttachStateChangeListener(this);
        this.f1636i.run();
        return true;
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewAttachedToWindow(View view) {
        this.f1635e = view.getViewTreeObserver();
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewDetachedFromWindow(View view) {
        if (this.f1635e.isAlive()) {
            this.f1635e.removeOnPreDrawListener(this);
        } else {
            this.f1634d.getViewTreeObserver().removeOnPreDrawListener(this);
        }
        this.f1634d.removeOnAttachStateChangeListener(this);
    }
}
