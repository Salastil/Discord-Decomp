package q2;

import android.view.animation.Interpolator;
import k0.d;

/* loaded from: classes.dex */
public abstract class b implements Interpolator {
    public final float[] a;

    /* renamed from: b, reason: collision with root package name */
    public final float f16655b;

    public b(float[] fArr) {
        this.a = fArr;
        this.f16655b = 1.0f / (fArr.length - 1);
    }

    @Override // android.animation.TimeInterpolator
    public final float getInterpolation(float f2) {
        if (f2 >= 1.0f) {
            return 1.0f;
        }
        if (f2 <= 0.0f) {
            return 0.0f;
        }
        float[] fArr = this.a;
        int min = Math.min((int) ((fArr.length - 1) * f2), fArr.length - 2);
        float f10 = this.f16655b;
        float f11 = (f2 - (min * f10)) / f10;
        float f12 = fArr[min];
        return d.c(fArr[min + 1], f12, f11, f12);
    }
}
