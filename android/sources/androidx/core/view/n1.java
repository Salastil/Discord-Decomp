package androidx.core.view;

import android.view.WindowInsetsAnimationController;
import androidx.core.graphics.Insets;

/* loaded from: classes.dex */
public final class n1 extends ys.d {

    /* renamed from: d, reason: collision with root package name */
    public final WindowInsetsAnimationController f1618d;

    public n1(WindowInsetsAnimationController windowInsetsAnimationController) {
        this.f1618d = windowInsetsAnimationController;
    }

    public final void l0(boolean z5) {
        this.f1618d.finish(z5);
    }

    public final float m0() {
        return this.f1618d.getCurrentFraction();
    }

    public final Insets n0() {
        return Insets.c(this.f1618d.getCurrentInsets());
    }

    public final Insets o0() {
        return Insets.c(this.f1618d.getHiddenStateInsets());
    }

    public final Insets p0() {
        return Insets.c(this.f1618d.getShownStateInsets());
    }

    public final void q0(Insets insets, float f2) {
        this.f1618d.setInsetsAndAlpha(insets.d(), 1.0f, f2);
    }
}
