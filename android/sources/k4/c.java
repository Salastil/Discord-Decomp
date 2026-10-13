package k4;

import android.animation.Animator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class c implements Animator.AnimatorListener {
    public final /* synthetic */ l4.h a;

    public c(l4.h hVar) {
        this.a = hVar;
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationCancel(Animator animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        g.a(this.a, true);
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        g.a(this.a, false);
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationRepeat(Animator animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
    }
}
