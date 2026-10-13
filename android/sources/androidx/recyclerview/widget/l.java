package androidx.recyclerview.widget;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.view.View;
import android.view.ViewPropertyAnimator;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class l extends AnimatorListenerAdapter {
    public final /* synthetic */ RecyclerView.ViewHolder a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ViewPropertyAnimator f2419b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ View f2420c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ r f2421d;

    public l(View view, ViewPropertyAnimator viewPropertyAnimator, r rVar, RecyclerView.ViewHolder viewHolder) {
        this.f2421d = rVar;
        this.a = viewHolder;
        this.f2419b = viewPropertyAnimator;
        this.f2420c = view;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
        this.f2419b.setListener(null);
        this.f2420c.setAlpha(1.0f);
        r rVar = this.f2421d;
        RecyclerView.ViewHolder viewHolder = this.a;
        rVar.dispatchRemoveFinished(viewHolder);
        rVar.mRemoveAnimations.remove(viewHolder);
        rVar.dispatchFinishedWhenDone();
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animator) {
        this.f2421d.dispatchRemoveStarting(this.a);
    }
}
