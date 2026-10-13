package androidx.core.view;

import android.view.View;
import android.view.WindowInsets;
import androidx.core.graphics.Insets;

/* loaded from: classes.dex */
public class z1 extends y1 {

    /* renamed from: r, reason: collision with root package name */
    public static final WindowInsetsCompat f1665r;

    static {
        WindowInsets windowInsets;
        windowInsets = WindowInsets.CONSUMED;
        f1665r = WindowInsetsCompat.g(null, windowInsets);
    }

    public z1(WindowInsetsCompat windowInsetsCompat, WindowInsets windowInsets) {
        super(windowInsetsCompat, windowInsets);
    }

    @Override // androidx.core.view.v1, androidx.core.view.c2
    public final void d(View view) {
    }

    @Override // androidx.core.view.v1, androidx.core.view.c2
    public Insets f(int i5) {
        return Insets.c(this.f1642c.getInsets(d2.a(i5)));
    }

    @Override // androidx.core.view.v1, androidx.core.view.c2
    public Insets g(int i5) {
        return Insets.c(this.f1642c.getInsetsIgnoringVisibility(d2.a(i5)));
    }

    @Override // androidx.core.view.v1, androidx.core.view.c2
    public boolean p(int i5) {
        return this.f1642c.isVisible(d2.a(i5));
    }
}
