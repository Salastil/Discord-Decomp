package com.discord.chat.presentation.list;

import android.animation.ValueAnimator;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final /* synthetic */ class f implements ValueAnimator.AnimatorUpdateListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ SwipeHelper f3897b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ RecyclerView f3898c;

    public /* synthetic */ f(SwipeHelper swipeHelper, RecyclerView recyclerView, int i5) {
        this.a = i5;
        this.f3897b = swipeHelper;
        this.f3898c = recyclerView;
    }

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public final void onAnimationUpdate(ValueAnimator valueAnimator) {
        switch (this.a) {
            case 0:
                SwipeHelper.easterEggStartAnimation$lambda$6$lambda$5(this.f3897b, this.f3898c, valueAnimator);
                break;
            case 1:
                SwipeHelper.easterEggStartAnimation$lambda$9$lambda$7(this.f3897b, this.f3898c, valueAnimator);
                break;
            case 2:
                SwipeHelper.triggerEditExitTransition$lambda$2$lambda$0(this.f3897b, this.f3898c, valueAnimator);
                break;
            default:
                SwipeHelper.triggerEditEntranceTransition$lambda$4$lambda$3(this.f3897b, this.f3898c, valueAnimator);
                break;
        }
    }
}
