package m3;

import android.view.ViewGroup;
import androidx.transition.Transition;

/* loaded from: classes.dex */
public final class c extends u {
    public boolean a = false;

    /* renamed from: b, reason: collision with root package name */
    public final ViewGroup f14329b;

    public c(ViewGroup viewGroup) {
        this.f14329b = viewGroup;
    }

    @Override // m3.u, m3.s
    public final void onTransitionCancel(Transition transition) {
        com.facebook.imagepipeline.nativecode.b.K(this.f14329b, false);
        this.a = true;
    }

    @Override // m3.u, m3.s
    public final void onTransitionEnd(Transition transition) {
        if (!this.a) {
            com.facebook.imagepipeline.nativecode.b.K(this.f14329b, false);
        }
        transition.D(this);
    }

    @Override // m3.u, m3.s
    public final void onTransitionPause(Transition transition) {
        com.facebook.imagepipeline.nativecode.b.K(this.f14329b, false);
    }

    @Override // m3.u, m3.s
    public final void onTransitionResume(Transition transition) {
        com.facebook.imagepipeline.nativecode.b.K(this.f14329b, true);
    }
}
