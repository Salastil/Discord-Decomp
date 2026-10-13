package androidx.core.view;

import android.view.WindowInsets;
import androidx.core.graphics.Insets;

/* loaded from: classes.dex */
public class y1 extends x1 {

    /* renamed from: o, reason: collision with root package name */
    public Insets f1658o;

    /* renamed from: p, reason: collision with root package name */
    public Insets f1659p;

    /* renamed from: q, reason: collision with root package name */
    public Insets f1660q;

    public y1(WindowInsetsCompat windowInsetsCompat, WindowInsets windowInsets) {
        super(windowInsetsCompat, windowInsets);
        this.f1658o = null;
        this.f1659p = null;
        this.f1660q = null;
    }

    @Override // androidx.core.view.c2
    public Insets h() {
        if (this.f1659p == null) {
            this.f1659p = Insets.c(this.f1642c.getMandatorySystemGestureInsets());
        }
        return this.f1659p;
    }

    @Override // androidx.core.view.c2
    public Insets j() {
        if (this.f1658o == null) {
            this.f1658o = Insets.c(this.f1642c.getSystemGestureInsets());
        }
        return this.f1658o;
    }

    @Override // androidx.core.view.c2
    public Insets l() {
        if (this.f1660q == null) {
            this.f1660q = Insets.c(this.f1642c.getTappableElementInsets());
        }
        return this.f1660q;
    }

    @Override // androidx.core.view.v1, androidx.core.view.c2
    public WindowInsetsCompat m(int i5, int i6, int i10, int i11) {
        return WindowInsetsCompat.g(null, this.f1642c.inset(i5, i6, i10, i11));
    }

    @Override // androidx.core.view.w1, androidx.core.view.c2
    public void s(Insets insets) {
    }
}
