package androidx.core.view;

import android.view.WindowInsets;
import androidx.core.graphics.Insets;

/* loaded from: classes.dex */
public final class b2 extends a2 {

    /* renamed from: s, reason: collision with root package name */
    public static final WindowInsetsCompat f1567s;

    static {
        WindowInsets windowInsets;
        windowInsets = WindowInsets.CONSUMED;
        f1567s = WindowInsetsCompat.g(null, windowInsets);
    }

    public b2(WindowInsetsCompat windowInsetsCompat, WindowInsets windowInsets) {
        super(windowInsetsCompat, windowInsets);
    }

    @Override // androidx.core.view.z1, androidx.core.view.v1, androidx.core.view.c2
    public Insets f(int i5) {
        return Insets.c(this.f1642c.getInsets(e2.a(i5)));
    }

    @Override // androidx.core.view.z1, androidx.core.view.v1, androidx.core.view.c2
    public Insets g(int i5) {
        return Insets.c(this.f1642c.getInsetsIgnoringVisibility(e2.a(i5)));
    }

    @Override // androidx.core.view.z1, androidx.core.view.v1, androidx.core.view.c2
    public boolean p(int i5) {
        return this.f1642c.isVisible(e2.a(i5));
    }
}
