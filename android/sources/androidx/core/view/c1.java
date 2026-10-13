package androidx.core.view;

import android.view.WindowInsetsAnimation;
import androidx.core.graphics.Insets;

/* loaded from: classes.dex */
public final class c1 {
    public final Insets a;

    /* renamed from: b, reason: collision with root package name */
    public final Insets f1572b;

    public c1(Insets insets, Insets insets2) {
        this.a = insets;
        this.f1572b = insets2;
    }

    public final String toString() {
        return "Bounds{lower=" + this.a + " upper=" + this.f1572b + "}";
    }

    public c1(WindowInsetsAnimation.Bounds bounds) {
        this.a = k1.f(bounds);
        this.f1572b = k1.e(bounds);
    }
}
