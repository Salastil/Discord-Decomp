package ch;

import android.animation.Animator;
import android.animation.ValueAnimator;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.transition.Transition;
import java.util.HashMap;
import m3.b0;

/* loaded from: classes3.dex */
public final class o extends Transition {
    @Override // androidx.transition.Transition
    public final void d(b0 b0Var) {
        View view = b0Var.f14327b;
        if (view instanceof TextView) {
            b0Var.a.put("android:textscale:scale", Float.valueOf(((TextView) view).getScaleX()));
        }
    }

    @Override // androidx.transition.Transition
    public final void g(b0 b0Var) {
        View view = b0Var.f14327b;
        if (view instanceof TextView) {
            b0Var.a.put("android:textscale:scale", Float.valueOf(((TextView) view).getScaleX()));
        }
    }

    @Override // androidx.transition.Transition
    public final Animator l(ViewGroup viewGroup, b0 b0Var, b0 b0Var2) {
        if (b0Var == null || b0Var2 == null || !(b0Var.f14327b instanceof TextView)) {
            return null;
        }
        View view = b0Var2.f14327b;
        if (!(view instanceof TextView)) {
            return null;
        }
        TextView textView = (TextView) view;
        HashMap hashMap = b0Var.a;
        HashMap hashMap2 = b0Var2.a;
        float floatValue = hashMap.get("android:textscale:scale") != null ? ((Float) hashMap.get("android:textscale:scale")).floatValue() : 1.0f;
        float floatValue2 = hashMap2.get("android:textscale:scale") != null ? ((Float) hashMap2.get("android:textscale:scale")).floatValue() : 1.0f;
        if (floatValue == floatValue2) {
            return null;
        }
        ValueAnimator ofFloat = ValueAnimator.ofFloat(floatValue, floatValue2);
        ofFloat.addUpdateListener(new n(0, textView));
        return ofFloat;
    }
}
