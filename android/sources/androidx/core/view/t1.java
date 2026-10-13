package androidx.core.view;

import androidx.core.graphics.Insets;

/* loaded from: classes.dex */
public final class t1 extends s1 {
    public t1() {
    }

    @Override // androidx.core.view.r1, androidx.core.view.u1
    public void c(int i5, Insets insets) {
        this.f1625c.setInsets(e2.a(i5), insets.d());
    }

    public t1(WindowInsetsCompat windowInsetsCompat) {
        super(windowInsetsCompat);
    }
}
