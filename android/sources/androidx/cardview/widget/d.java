package androidx.cardview.widget;

import android.graphics.drawable.Drawable;

/* loaded from: classes.dex */
public abstract class d extends Drawable {
    public static final double a = Math.cos(Math.toRadians(45.0d));

    public static float a(float f2, float f10, boolean z5) {
        if (!z5) {
            return f2;
        }
        return (float) (((1.0d - a) * f10) + f2);
    }

    public static float b(float f2, float f10, boolean z5) {
        if (!z5) {
            return f2 * 1.5f;
        }
        return (float) (((1.0d - a) * f10) + (f2 * 1.5f));
    }
}
