package androidx.recyclerview.widget;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;

/* loaded from: classes.dex */
public final class a0 extends AnimatorListenerAdapter {
    public boolean a = false;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ c0 f2358b;

    public a0(c0 c0Var) {
        this.f2358b = c0Var;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationCancel(Animator animator) {
        this.a = true;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
        if (this.a) {
            this.a = false;
            return;
        }
        c0 c0Var = this.f2358b;
        if (((Float) c0Var.f2383z.getAnimatedValue()).floatValue() == 0.0f) {
            c0Var.A = 0;
            c0Var.d(0);
        } else {
            c0Var.A = 2;
            c0Var.f2376s.invalidate();
        }
    }
}
