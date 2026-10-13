package m3;

import androidx.transition.Transition;

/* loaded from: classes.dex */
public final class j implements s {
    public final /* synthetic */ Runnable a;

    public j(Runnable runnable) {
        this.a = runnable;
    }

    @Override // m3.s
    public final void onTransitionEnd(Transition transition) {
        this.a.run();
    }

    @Override // m3.s
    public final void onTransitionCancel(Transition transition) {
    }

    @Override // m3.s
    public final void onTransitionPause(Transition transition) {
    }

    @Override // m3.s
    public final void onTransitionResume(Transition transition) {
    }

    @Override // m3.s
    public final void onTransitionStart(Transition transition) {
    }
}
