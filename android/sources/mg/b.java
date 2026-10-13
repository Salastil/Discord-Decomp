package mg;

import android.animation.TypeEvaluator;

/* loaded from: classes3.dex */
public abstract class b implements TypeEvaluator {
    public static Integer a(float f2, Integer num, Integer num2) {
        int intValue = num.intValue();
        float f10 = ((intValue >> 24) & 255) / 255.0f;
        int intValue2 = num2.intValue();
        float f11 = ((intValue2 >> 24) & 255) / 255.0f;
        float pow = (float) Math.pow(((intValue >> 16) & 255) / 255.0f, 2.2d);
        float pow2 = (float) Math.pow(((intValue >> 8) & 255) / 255.0f, 2.2d);
        float pow3 = (float) Math.pow((intValue & 255) / 255.0f, 2.2d);
        float pow4 = (float) Math.pow(((intValue2 >> 16) & 255) / 255.0f, 2.2d);
        float pow5 = (float) Math.pow(((intValue2 >> 8) & 255) / 255.0f, 2.2d);
        float pow6 = (float) Math.pow((intValue2 & 255) / 255.0f, 2.2d);
        float c6 = k0.d.c(f11, f10, f2, f10);
        float c8 = k0.d.c(pow4, pow, f2, pow);
        float c10 = k0.d.c(pow5, pow2, f2, pow2);
        float c11 = k0.d.c(pow6, pow3, f2, pow3);
        float pow7 = ((float) Math.pow(c8, 0.45454545454545453d)) * 255.0f;
        float pow8 = ((float) Math.pow(c10, 0.45454545454545453d)) * 255.0f;
        return Integer.valueOf(Math.round(((float) Math.pow(c11, 0.45454545454545453d)) * 255.0f) | (Math.round(pow7) << 16) | (Math.round(c6 * 255.0f) << 24) | (Math.round(pow8) << 8));
    }
}
