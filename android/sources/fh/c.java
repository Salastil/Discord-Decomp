package fh;

import android.animation.ValueAnimator;

/* loaded from: classes3.dex */
public final class c implements ValueAnimator.AnimatorUpdateListener {
    public final /* synthetic */ float a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ e f8547b;

    public c(e eVar, float f2) {
        this.f8547b = eVar;
        this.a = f2;
    }

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public final void onAnimationUpdate(ValueAnimator valueAnimator) {
        this.f8547b.d(((Float) valueAnimator.getAnimatedValue()).floatValue(), this.a);
    }
}
