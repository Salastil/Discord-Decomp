package androidx.recyclerview.widget;

import android.animation.ValueAnimator;

/* loaded from: classes.dex */
public final class b0 implements ValueAnimator.AnimatorUpdateListener {
    public final /* synthetic */ c0 a;

    public b0(c0 c0Var) {
        this.a = c0Var;
    }

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public final void onAnimationUpdate(ValueAnimator valueAnimator) {
        int floatValue = (int) (((Float) valueAnimator.getAnimatedValue()).floatValue() * 255.0f);
        c0 c0Var = this.a;
        c0Var.f2362c.setAlpha(floatValue);
        c0Var.f2363d.setAlpha(floatValue);
        c0Var.f2376s.invalidate();
    }
}
