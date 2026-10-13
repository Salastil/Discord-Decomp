package m3;

import android.animation.ObjectAnimator;
import android.view.View;
import android.view.ViewGroup;
import com.discord.R;

/* loaded from: classes.dex */
public final class f extends androidx.transition.c {
    public f(int i5) {
        if ((i5 & (-4)) != 0) {
            throw new IllegalArgumentException("Only MODE_IN and MODE_OUT flags are allowed");
        }
        this.f2558d0 = i5;
    }

    public static float V(b0 b0Var, float f2) {
        Float f10;
        return (b0Var == null || (f10 = (Float) b0Var.a.get("android:fade:transitionAlpha")) == null) ? f2 : f10.floatValue();
    }

    @Override // androidx.transition.c
    public final ObjectAnimator S(ViewGroup viewGroup, View view, b0 b0Var, b0 b0Var2) {
        d0.a.getClass();
        return U(V(b0Var, 0.0f), 1.0f, view);
    }

    @Override // androidx.transition.c
    public final ObjectAnimator T(ViewGroup viewGroup, View view, b0 b0Var, b0 b0Var2) {
        e0 e0Var = d0.a;
        e0Var.getClass();
        ObjectAnimator U = U(V(b0Var, 1.0f), 0.0f, view);
        if (U == null) {
            e0Var.V(view, V(b0Var2, 1.0f));
        }
        return U;
    }

    public final ObjectAnimator U(float f2, float f10, View view) {
        if (f2 == f10) {
            return null;
        }
        d0.a.V(view, f2);
        ObjectAnimator ofFloat = ObjectAnimator.ofFloat(view, d0.f14343b, f10);
        e eVar = new e(view);
        ofFloat.addListener(eVar);
        q().a(eVar);
        return ofFloat;
    }

    @Override // androidx.transition.Transition
    public final void g(b0 b0Var) {
        androidx.transition.c.Q(b0Var);
        View view = b0Var.f14327b;
        Float f2 = (Float) view.getTag(R.id.transition_pause_alpha);
        if (f2 == null) {
            f2 = view.getVisibility() == 0 ? Float.valueOf(d0.a.H(view)) : Float.valueOf(0.0f);
        }
        b0Var.a.put("android:fade:transitionAlpha", f2);
    }

    @Override // androidx.transition.Transition
    public final boolean v() {
        return true;
    }
}
