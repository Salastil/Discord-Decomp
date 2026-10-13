package m3;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.view.View;
import androidx.transition.Transition;
import com.discord.R;

/* loaded from: classes.dex */
public final class c0 extends AnimatorListenerAdapter implements s {
    public final View a;

    /* renamed from: b, reason: collision with root package name */
    public final View f14330b;

    /* renamed from: c, reason: collision with root package name */
    public int[] f14331c;

    /* renamed from: d, reason: collision with root package name */
    public float f14332d;

    /* renamed from: e, reason: collision with root package name */
    public float f14333e;

    /* renamed from: f, reason: collision with root package name */
    public final float f14334f;

    /* renamed from: g, reason: collision with root package name */
    public final float f14335g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f14336h;

    public c0(View view, View view2, float f2, float f10) {
        this.f14330b = view;
        this.a = view2;
        this.f14334f = f2;
        this.f14335g = f10;
        int[] iArr = (int[]) view2.getTag(R.id.transition_position);
        this.f14331c = iArr;
        if (iArr != null) {
            view2.setTag(R.id.transition_position, null);
        }
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationCancel(Animator animator) {
        this.f14336h = true;
        float f2 = this.f14334f;
        View view = this.f14330b;
        view.setTranslationX(f2);
        view.setTranslationY(this.f14335g);
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator, boolean z5) {
        if (z5) {
            return;
        }
        float f2 = this.f14334f;
        View view = this.f14330b;
        view.setTranslationX(f2);
        view.setTranslationY(this.f14335g);
    }

    @Override // m3.s
    public final void onTransitionCancel(Transition transition) {
        this.f14336h = true;
        float f2 = this.f14334f;
        View view = this.f14330b;
        view.setTranslationX(f2);
        view.setTranslationY(this.f14335g);
    }

    @Override // m3.s
    public final void onTransitionEnd(Transition transition, boolean z5) {
        if (this.f14336h) {
            return;
        }
        this.a.setTag(R.id.transition_position, null);
    }

    @Override // m3.s
    public final void onTransitionPause(Transition transition) {
        if (this.f14331c == null) {
            this.f14331c = new int[2];
        }
        int[] iArr = this.f14331c;
        View view = this.f14330b;
        view.getLocationOnScreen(iArr);
        this.a.setTag(R.id.transition_position, this.f14331c);
        this.f14332d = view.getTranslationX();
        this.f14333e = view.getTranslationY();
        view.setTranslationX(this.f14334f);
        view.setTranslationY(this.f14335g);
    }

    @Override // m3.s
    public final void onTransitionResume(Transition transition) {
        float f2 = this.f14332d;
        View view = this.f14330b;
        view.setTranslationX(f2);
        view.setTranslationY(this.f14333e);
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
        onAnimationEnd(animator, false);
    }

    @Override // m3.s
    public final void onTransitionEnd(Transition transition) {
        onTransitionEnd(transition, false);
    }

    @Override // m3.s
    public final void onTransitionStart(Transition transition) {
    }
}
