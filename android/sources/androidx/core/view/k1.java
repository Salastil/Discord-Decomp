package androidx.core.view;

import android.view.View;
import android.view.WindowInsetsAnimation;
import androidx.core.graphics.Insets;

/* loaded from: classes.dex */
public final class k1 extends l1 {

    /* renamed from: e, reason: collision with root package name */
    public final WindowInsetsAnimation f1607e;

    public k1(WindowInsetsAnimation windowInsetsAnimation) {
        super(0, null, 0L);
        this.f1607e = windowInsetsAnimation;
    }

    public static Insets e(WindowInsetsAnimation.Bounds bounds) {
        return Insets.c(bounds.getUpperBound());
    }

    public static Insets f(WindowInsetsAnimation.Bounds bounds) {
        return Insets.c(bounds.getLowerBound());
    }

    public static void g(View view, d1 d1Var) {
        view.setWindowInsetsAnimationCallback(d1Var != null ? new j1(d1Var) : null);
    }

    @Override // androidx.core.view.l1
    public final long a() {
        return this.f1607e.getDurationMillis();
    }

    @Override // androidx.core.view.l1
    public final float b() {
        return this.f1607e.getInterpolatedFraction();
    }

    @Override // androidx.core.view.l1
    public final int c() {
        return this.f1607e.getTypeMask();
    }

    @Override // androidx.core.view.l1
    public final void d(float f2) {
        this.f1607e.setFraction(f2);
    }
}
