package androidx.fragment.app;

import android.view.View;
import androidx.lifecycle.LifecycleOwner;

/* loaded from: classes.dex */
public final class d0 implements androidx.lifecycle.t {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Fragment f1986d;

    public d0(Fragment fragment) {
        this.f1986d = fragment;
    }

    @Override // androidx.lifecycle.t
    public final void c(LifecycleOwner lifecycleOwner, androidx.lifecycle.n nVar) {
        View view;
        if (nVar != androidx.lifecycle.n.ON_STOP || (view = this.f1986d.mView) == null) {
            return;
        }
        view.cancelPendingInputEvents();
    }
}
