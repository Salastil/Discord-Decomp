package androidx.core.view;

import android.graphics.Insets;
import android.view.WindowInsetsAnimation;
import android.view.animation.Interpolator;

/* loaded from: classes.dex */
public abstract /* synthetic */ class i1 {
    public static /* synthetic */ WindowInsetsAnimation.Bounds a(Insets insets, Insets insets2) {
        return new WindowInsetsAnimation.Bounds(insets, insets2);
    }

    public static /* synthetic */ WindowInsetsAnimation b(int i5, Interpolator interpolator, long j) {
        return new WindowInsetsAnimation(i5, interpolator, j);
    }

    public static /* synthetic */ void c() {
    }
}
