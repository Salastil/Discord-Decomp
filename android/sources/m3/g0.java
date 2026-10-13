package m3;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.view.View;
import android.view.ViewGroup;
import androidx.transition.Transition;

/* loaded from: classes.dex */
public final class g0 extends AnimatorListenerAdapter implements s {
    public final View a;

    /* renamed from: b, reason: collision with root package name */
    public final int f14351b;

    /* renamed from: c, reason: collision with root package name */
    public final ViewGroup f14352c;

    /* renamed from: e, reason: collision with root package name */
    public boolean f14354e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f14355f = false;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f14353d = true;

    public g0(int i5, View view) {
        this.a = view;
        this.f14351b = i5;
        this.f14352c = (ViewGroup) view.getParent();
        a(true);
    }

    public final void a(boolean z5) {
        ViewGroup viewGroup;
        if (!this.f14353d || this.f14354e == z5 || (viewGroup = this.f14352c) == null) {
            return;
        }
        this.f14354e = z5;
        com.facebook.imagepipeline.nativecode.b.K(viewGroup, z5);
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationCancel(Animator animator) {
        this.f14355f = true;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
        if (!this.f14355f) {
            d0.b(this.f14351b, this.a);
            ViewGroup viewGroup = this.f14352c;
            if (viewGroup != null) {
                viewGroup.invalidate();
            }
        }
        a(false);
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animator) {
    }

    @Override // m3.s
    public final void onTransitionEnd(Transition transition) {
        transition.D(this);
    }

    @Override // m3.s
    public final void onTransitionPause(Transition transition) {
        a(false);
        if (this.f14355f) {
            return;
        }
        d0.b(this.f14351b, this.a);
    }

    @Override // m3.s
    public final void onTransitionResume(Transition transition) {
        a(true);
        if (this.f14355f) {
            return;
        }
        d0.b(0, this.a);
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animator, boolean z5) {
        if (z5) {
            d0.b(0, this.a);
            ViewGroup viewGroup = this.f14352c;
            if (viewGroup != null) {
                viewGroup.invalidate();
            }
        }
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator, boolean z5) {
        if (z5) {
            return;
        }
        if (!this.f14355f) {
            d0.b(this.f14351b, this.a);
            ViewGroup viewGroup = this.f14352c;
            if (viewGroup != null) {
                viewGroup.invalidate();
            }
        }
        a(false);
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationRepeat(Animator animator) {
    }

    @Override // m3.s
    public final void onTransitionCancel(Transition transition) {
    }

    @Override // m3.s
    public final void onTransitionStart(Transition transition) {
    }
}
