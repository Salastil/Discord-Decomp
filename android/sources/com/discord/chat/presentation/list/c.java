package com.discord.chat.presentation.list;

import android.animation.ValueAnimator;
import android.view.View;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements ValueAnimator.AnimatorUpdateListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ View f3881b;

    public /* synthetic */ c(int i5, View view) {
        this.a = i5;
        this.f3881b = view;
    }

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public final void onAnimationUpdate(ValueAnimator animation) {
        switch (this.a) {
            case 0:
                ChatListHighlightItemAtPositionKt.animateBackgroundColor$anim$lambda$2$lambda$1(this.f3881b, animation);
                break;
            case 1:
                Intrinsics.checkNotNullParameter(animation, "animation");
                Object animatedValue = animation.getAnimatedValue();
                Intrinsics.checkNotNull(animatedValue, "null cannot be cast to non-null type kotlin.Float");
                this.f3881b.setTranslationY(((Float) animatedValue).floatValue());
                break;
            default:
                Intrinsics.checkNotNullParameter(animation, "animation");
                Object animatedValue2 = animation.getAnimatedValue();
                Intrinsics.checkNotNull(animatedValue2, "null cannot be cast to non-null type kotlin.Float");
                this.f3881b.setTranslationY(((Float) animatedValue2).floatValue());
                break;
        }
    }
}
