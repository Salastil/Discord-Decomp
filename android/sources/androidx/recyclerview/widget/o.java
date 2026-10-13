package androidx.recyclerview.widget;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.view.View;
import android.view.ViewPropertyAnimator;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class o extends AnimatorListenerAdapter {
    public final /* synthetic */ DefaultItemAnimator$ChangeInfo a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ViewPropertyAnimator f2432b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ View f2433c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ r f2434d;

    public o(r rVar, DefaultItemAnimator$ChangeInfo defaultItemAnimator$ChangeInfo, ViewPropertyAnimator viewPropertyAnimator, View view) {
        this.f2434d = rVar;
        this.a = defaultItemAnimator$ChangeInfo;
        this.f2432b = viewPropertyAnimator;
        this.f2433c = view;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
        this.f2432b.setListener(null);
        View view = this.f2433c;
        view.setAlpha(1.0f);
        view.setTranslationX(0.0f);
        view.setTranslationY(0.0f);
        DefaultItemAnimator$ChangeInfo defaultItemAnimator$ChangeInfo = this.a;
        RecyclerView.ViewHolder viewHolder = defaultItemAnimator$ChangeInfo.a;
        r rVar = this.f2434d;
        rVar.dispatchChangeFinished(viewHolder, true);
        rVar.mChangeAnimations.remove(defaultItemAnimator$ChangeInfo.a);
        rVar.dispatchFinishedWhenDone();
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animator) {
        this.f2434d.dispatchChangeStarting(this.a.a, true);
    }
}
