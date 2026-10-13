package mg;

import android.view.animation.DecelerateInterpolator;
import android.view.animation.LinearInterpolator;

/* loaded from: classes3.dex */
public abstract class a {
    public static final LinearInterpolator a = new LinearInterpolator();

    /* renamed from: b, reason: collision with root package name */
    public static final q2.a f14493b = new q2.a(1);

    /* renamed from: c, reason: collision with root package name */
    public static final q2.a f14494c = new q2.a(0);

    /* renamed from: d, reason: collision with root package name */
    public static final q2.a f14495d = new q2.a(q2.a.f16654e);

    /* renamed from: e, reason: collision with root package name */
    public static final DecelerateInterpolator f14496e = new DecelerateInterpolator();

    public static float a(float f2, float f10, float f11) {
        return k0.d.c(f10, f2, f11, f2);
    }

    public static float b(float f2, float f10, float f11, float f12, float f13) {
        return f13 <= f11 ? f2 : f13 >= f12 ? f10 : a(f2, f10, (f13 - f11) / (f12 - f11));
    }

    public static int c(int i5, int i6, float f2) {
        return Math.round(f2 * (i6 - i5)) + i5;
    }
}
