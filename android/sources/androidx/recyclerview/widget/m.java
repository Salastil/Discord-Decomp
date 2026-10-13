package androidx.recyclerview.widget;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.view.View;
import android.view.ViewPropertyAnimator;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class m extends AnimatorListenerAdapter {
    public final /* synthetic */ RecyclerView.ViewHolder a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ View f2422b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ ViewPropertyAnimator f2423c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ r f2424d;

    public m(View view, ViewPropertyAnimator viewPropertyAnimator, r rVar, RecyclerView.ViewHolder viewHolder) {
        this.f2424d = rVar;
        this.a = viewHolder;
        this.f2422b = view;
        this.f2423c = viewPropertyAnimator;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationCancel(Animator animator) {
        this.f2422b.setAlpha(1.0f);
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
        this.f2423c.setListener(null);
        r rVar = this.f2424d;
        RecyclerView.ViewHolder viewHolder = this.a;
        rVar.dispatchAddFinished(viewHolder);
        rVar.mAddAnimations.remove(viewHolder);
        rVar.dispatchFinishedWhenDone();
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animator) {
        this.f2424d.dispatchAddStarting(this.a);
    }
}
