package androidx.fragment.app;

import android.view.View;
import android.view.ViewGroup;

/* loaded from: classes.dex */
public final class n0 implements View.OnAttachStateChangeListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ k1 f2059d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ o0 f2060e;

    public n0(o0 o0Var, k1 k1Var) {
        this.f2060e = o0Var;
        this.f2059d = k1Var;
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewAttachedToWindow(View view) {
        k1 k1Var = this.f2059d;
        Fragment fragment = k1Var.f2036c;
        k1Var.k();
        c2.j((ViewGroup) fragment.mView.getParent(), this.f2060e.f2066d).i();
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewDetachedFromWindow(View view) {
    }
}
