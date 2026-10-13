package m3;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.view.View;
import androidx.transition.Transition;
import com.discord.R;

/* loaded from: classes.dex */
public final class e extends AnimatorListenerAdapter implements s {
    public final View a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f14344b = false;

    public e(View view) {
        this.a = view;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationCancel(Animator animator) {
        d0.a.V(this.a, 1.0f);
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
        onAnimationEnd(animator, false);
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animator) {
        View view = this.a;
        if (view.hasOverlappingRendering() && view.getLayerType() == 0) {
            this.f14344b = true;
            view.setLayerType(2, null);
        }
    }

    @Override // m3.s
    public final void onTransitionPause(Transition transition) {
        View view = this.a;
        view.setTag(R.id.transition_pause_alpha, Float.valueOf(view.getVisibility() == 0 ? d0.a.H(view) : 0.0f));
    }

    @Override // m3.s
    public final void onTransitionResume(Transition transition) {
        this.a.setTag(R.id.transition_pause_alpha, null);
    }

    @Override // m3.s
    public final void onTransitionStart(Transition transition) {
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator, boolean z5) {
        boolean z6 = this.f14344b;
        View view = this.a;
        if (z6) {
            view.setLayerType(0, null);
        }
        if (z5) {
            return;
        }
        e0 e0Var = d0.a;
        e0Var.V(view, 1.0f);
        e0Var.getClass();
    }

    @Override // m3.s
    public final void onTransitionStart(Transition transition, boolean z5) {
    }

    @Override // m3.s
    public final void onTransitionCancel(Transition transition) {
    }

    @Override // m3.s
    public final void onTransitionEnd(Transition transition) {
    }
}
