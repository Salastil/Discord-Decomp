package androidx.core.view;

import android.view.DisplayCutout;
import android.view.WindowInsets;
import java.util.Objects;

/* loaded from: classes.dex */
public class x1 extends w1 {
    public x1(WindowInsetsCompat windowInsetsCompat, WindowInsets windowInsets) {
        super(windowInsetsCompat, windowInsets);
    }

    @Override // androidx.core.view.c2
    public WindowInsetsCompat a() {
        return WindowInsetsCompat.g(null, this.f1642c.consumeDisplayCutout());
    }

    @Override // androidx.core.view.c2
    public i e() {
        DisplayCutout displayCutout = this.f1642c.getDisplayCutout();
        if (displayCutout == null) {
            return null;
        }
        return new i(displayCutout);
    }

    @Override // androidx.core.view.v1, androidx.core.view.c2
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof x1)) {
            return false;
        }
        x1 x1Var = (x1) obj;
        return Objects.equals(this.f1642c, x1Var.f1642c) && Objects.equals(this.f1646g, x1Var.f1646g) && v1.B(this.f1647h, x1Var.f1647h);
    }

    @Override // androidx.core.view.c2
    public int hashCode() {
        return this.f1642c.hashCode();
    }
}
