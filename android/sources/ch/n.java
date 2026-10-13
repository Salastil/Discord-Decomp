package ch;

import android.animation.ValueAnimator;
import android.widget.TextView;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import com.google.android.material.textfield.TextInputLayout;

/* loaded from: classes3.dex */
public final class n implements ValueAnimator.AnimatorUpdateListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f3560b;

    public /* synthetic */ n(int i5, Object obj) {
        this.a = i5;
        this.f3560b = obj;
    }

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public final void onAnimationUpdate(ValueAnimator valueAnimator) {
        switch (this.a) {
            case 0:
                float floatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                TextView textView = (TextView) this.f3560b;
                textView.setScaleX(floatValue);
                textView.setScaleY(floatValue);
                break;
            case 1:
                ((ng.k) this.f3560b).setScrimAlpha(((Integer) valueAnimator.getAnimatedValue()).intValue());
                break;
            case 2:
                ((TextInputLayout) this.f3560b).T0.A(((Float) valueAnimator.getAnimatedValue()).floatValue());
                break;
            default:
                float floatValue2 = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                lh.i iVar = ((BottomSheetBehavior) this.f3560b).f5966i;
                if (iVar != null) {
                    iVar.r(floatValue2);
                    break;
                }
                break;
        }
    }
}
