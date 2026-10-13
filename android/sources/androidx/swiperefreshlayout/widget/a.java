package androidx.swiperefreshlayout.widget;

import android.animation.ValueAnimator;

/* loaded from: classes.dex */
public final class a implements ValueAnimator.AnimatorUpdateListener {
    public final /* synthetic */ c a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ CircularProgressDrawable f2506b;

    public a(CircularProgressDrawable circularProgressDrawable, c cVar) {
        this.f2506b = circularProgressDrawable;
        this.a = cVar;
    }

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public final void onAnimationUpdate(ValueAnimator valueAnimator) {
        float floatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
        c cVar = this.a;
        CircularProgressDrawable.d(floatValue, cVar);
        CircularProgressDrawable circularProgressDrawable = this.f2506b;
        circularProgressDrawable.a(floatValue, cVar, false);
        circularProgressDrawable.invalidateSelf();
    }
}
