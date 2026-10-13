package androidx.fragment.app;

import android.view.View;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class j1 implements View.OnAttachStateChangeListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ View f2033d;

    public j1(View view) {
        this.f2033d = view;
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewAttachedToWindow(View view) {
        View view2 = this.f2033d;
        view2.removeOnAttachStateChangeListener(this);
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        androidx.core.view.h0.c(view2);
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewDetachedFromWindow(View view) {
    }
}
