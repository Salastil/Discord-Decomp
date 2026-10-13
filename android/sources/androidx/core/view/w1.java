package androidx.core.view;

import android.view.WindowInsets;
import androidx.core.graphics.Insets;

/* loaded from: classes.dex */
public class w1 extends v1 {

    /* renamed from: n, reason: collision with root package name */
    public Insets f1650n;

    public w1(WindowInsetsCompat windowInsetsCompat, WindowInsets windowInsets) {
        super(windowInsetsCompat, windowInsets);
        this.f1650n = null;
    }

    @Override // androidx.core.view.c2
    public WindowInsetsCompat b() {
        return WindowInsetsCompat.g(null, this.f1642c.consumeStableInsets());
    }

    @Override // androidx.core.view.c2
    public WindowInsetsCompat c() {
        return WindowInsetsCompat.g(null, this.f1642c.consumeSystemWindowInsets());
    }

    @Override // androidx.core.view.c2
    public final Insets i() {
        if (this.f1650n == null) {
            WindowInsets windowInsets = this.f1642c;
            this.f1650n = Insets.b(windowInsets.getStableInsetLeft(), windowInsets.getStableInsetTop(), windowInsets.getStableInsetRight(), windowInsets.getStableInsetBottom());
        }
        return this.f1650n;
    }

    @Override // androidx.core.view.c2
    public boolean n() {
        return this.f1642c.isConsumed();
    }

    @Override // androidx.core.view.c2
    public void s(Insets insets) {
        this.f1650n = insets;
    }
}
