package androidx.recyclerview.widget;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.view.View;
import android.view.ViewPropertyAnimator;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class n extends AnimatorListenerAdapter {
    public final /* synthetic */ RecyclerView.ViewHolder a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f2426b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ View f2427c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2428d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ViewPropertyAnimator f2429e;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ r f2430f;

    public n(r rVar, RecyclerView.ViewHolder viewHolder, int i5, View view, int i6, ViewPropertyAnimator viewPropertyAnimator) {
        this.f2430f = rVar;
        this.a = viewHolder;
        this.f2426b = i5;
        this.f2427c = view;
        this.f2428d = i6;
        this.f2429e = viewPropertyAnimator;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationCancel(Animator animator) {
        int i5 = this.f2426b;
        View view = this.f2427c;
        if (i5 != 0) {
            view.setTranslationX(0.0f);
        }
        if (this.f2428d != 0) {
            view.setTranslationY(0.0f);
        }
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
        this.f2429e.setListener(null);
        r rVar = this.f2430f;
        RecyclerView.ViewHolder viewHolder = this.a;
        rVar.dispatchMoveFinished(viewHolder);
        rVar.mMoveAnimations.remove(viewHolder);
        rVar.dispatchFinishedWhenDone();
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animator) {
        this.f2430f.dispatchMoveStarting(this.a);
    }
}
