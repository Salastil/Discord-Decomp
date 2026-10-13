package wm;

import android.animation.Animator;
import android.view.View;

/* loaded from: classes3.dex */
public final class b implements Animator.AnimatorListener {
    public final /* synthetic */ View a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ float f19896b;

    public b(View view, float f2) {
        this.a = view;
        this.f19896b = f2;
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animator) {
        this.a.setTranslationY(this.f19896b);
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationCancel(Animator animator) {
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationRepeat(Animator animator) {
    }
}
