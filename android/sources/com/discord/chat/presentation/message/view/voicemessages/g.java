package com.discord.chat.presentation.message.view.voicemessages;

import android.animation.ValueAnimator;
import com.discord.chat.databinding.AudioPlayerViewBinding;

/* loaded from: classes.dex */
public final /* synthetic */ class g implements ValueAnimator.AnimatorUpdateListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ AudioPlayerViewBinding f4064b;

    public /* synthetic */ g(AudioPlayerViewBinding audioPlayerViewBinding, int i5) {
        this.a = i5;
        this.f4064b = audioPlayerViewBinding;
    }

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public final void onAnimationUpdate(ValueAnimator valueAnimator) {
        switch (this.a) {
            case 0:
                AudioPlayerWipeAnimatorManager.progressColorAnimator_delegate$lambda$17$lambda$16$lambda$15(this.f4064b, valueAnimator);
                break;
            case 1:
                AudioPlayerWipeAnimatorManager.buttonIconColorAnimator_delegate$lambda$13$lambda$12$lambda$11(this.f4064b, valueAnimator);
                break;
            default:
                AudioPlayerWipeAnimatorManager.textColorAnimator_delegate$lambda$9$lambda$8$lambda$7(this.f4064b, valueAnimator);
                break;
        }
    }
}
