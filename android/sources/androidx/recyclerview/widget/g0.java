package androidx.recyclerview.widget;

import android.view.animation.Interpolator;

/* loaded from: classes.dex */
public final class g0 implements Interpolator {
    public final /* synthetic */ int a;

    @Override // android.animation.TimeInterpolator
    public final float getInterpolation(float f2) {
        switch (this.a) {
            case 0:
                return f2 * f2 * f2 * f2 * f2;
            case 1:
            default:
                float f10 = f2 - 1.0f;
                return (f10 * f10 * f10 * f10 * f10) + 1.0f;
        }
    }
}
