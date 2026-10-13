package androidx.recyclerview.widget;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.view.View;
import android.view.ViewPropertyAnimator;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class p extends AnimatorListenerAdapter {
    public final /* synthetic */ DefaultItemAnimator$ChangeInfo a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ViewPropertyAnimator f2441b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ View f2442c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ r f2443d;

    public p(r rVar, DefaultItemAnimator$ChangeInfo defaultItemAnimator$ChangeInfo, ViewPropertyAnimator viewPropertyAnimator, View view) {
        this.f2443d = rVar;
        this.a = defaultItemAnimator$ChangeInfo;
        this.f2441b = viewPropertyAnimator;
        this.f2442c = view;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
        this.f2441b.setListener(null);
        View view = this.f2442c;
        view.setAlpha(1.0f);
        view.setTranslationX(0.0f);
        view.setTranslationY(0.0f);
        DefaultItemAnimator$ChangeInfo defaultItemAnimator$ChangeInfo = this.a;
        RecyclerView.ViewHolder viewHolder = defaultItemAnimator$ChangeInfo.f2267b;
        r rVar = this.f2443d;
        rVar.dispatchChangeFinished(viewHolder, false);
        rVar.mChangeAnimations.remove(defaultItemAnimator$ChangeInfo.f2267b);
        rVar.dispatchFinishedWhenDone();
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animator) {
        this.f2443d.dispatchChangeStarting(this.a.f2267b, false);
    }
}
