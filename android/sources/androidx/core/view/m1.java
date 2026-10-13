package androidx.core.view;

import android.os.Build;
import android.view.animation.Interpolator;

/* loaded from: classes.dex */
public final class m1 {
    public l1 a;

    public m1(int i5, Interpolator interpolator, long j) {
        if (Build.VERSION.SDK_INT >= 30) {
            this.a = new k1(i1.b(i5, interpolator, j));
        } else {
            this.a = new h1(i5, interpolator, j);
        }
    }
}
