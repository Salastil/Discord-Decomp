package m3;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.view.View;
import android.view.ViewGroup;
import androidx.core.view.s0;
import androidx.transition.Transition;
import com.discord.R;

/* loaded from: classes.dex */
public final class h0 extends AnimatorListenerAdapter implements s {
    public final ViewGroup a;

    /* renamed from: b, reason: collision with root package name */
    public final View f14357b;

    /* renamed from: c, reason: collision with root package name */
    public final View f14358c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f14359d = true;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ androidx.transition.c f14360e;

    public h0(androidx.transition.c cVar, ViewGroup viewGroup, View view, View view2) {
        this.f14360e = cVar;
        this.a = viewGroup;
        this.f14357b = view;
        this.f14358c = view2;
    }

    public final void a() {
        this.f14358c.setTag(R.id.save_overlay_view, null);
        this.a.getOverlay().remove(this.f14357b);
        this.f14359d = false;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
        a();
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorPauseListener
    public final void onAnimationPause(Animator animator) {
        this.a.getOverlay().remove(this.f14357b);
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorPauseListener
    public final void onAnimationResume(Animator animator) {
        View view = this.f14357b;
        if (view.getParent() == null) {
            s0.a(view, this.a);
        } else {
            this.f14360e.cancel();
        }
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animator, boolean z5) {
        if (z5) {
            View view = this.f14358c;
            View view2 = this.f14357b;
            view.setTag(R.id.save_overlay_view, view2);
            s0.a(view2, this.a);
            this.f14359d = true;
        }
    }

    @Override // m3.s
    public final void onTransitionCancel(Transition transition) {
        if (this.f14359d) {
            a();
        }
    }

    @Override // m3.s
    public final void onTransitionEnd(Transition transition) {
        transition.D(this);
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator, boolean z5) {
        if (z5) {
            return;
        }
        a();
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
