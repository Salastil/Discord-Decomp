package androidx.customview.widget;

import android.view.animation.Interpolator;

/* loaded from: classes.dex */
public final class c implements Interpolator {
    @Override // android.animation.TimeInterpolator
    public final float getInterpolation(float f2) {
        float f10 = f2 - 1.0f;
        return (f10 * f10 * f10 * f10 * f10) + 1.0f;
    }
}
