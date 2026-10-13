package androidx.core.view;

import android.os.Build;
import android.view.View;
import android.view.WindowInsets;
import androidx.core.graphics.Insets;
import java.util.Objects;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class WindowInsetsCompat {

    /* renamed from: b, reason: collision with root package name */
    public static final WindowInsetsCompat f1547b;
    public final c2 a;

    static {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 34) {
            f1547b = b2.f1567s;
        } else if (i5 >= 30) {
            f1547b = z1.f1665r;
        } else {
            f1547b = c2.f1573b;
        }
    }

    public WindowInsetsCompat(WindowInsets windowInsets) {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 34) {
            this.a = new b2(this, windowInsets);
            return;
        }
        if (i5 >= 31) {
            this.a = new a2(this, windowInsets);
            return;
        }
        if (i5 >= 30) {
            this.a = new z1(this, windowInsets);
            return;
        }
        if (i5 >= 29) {
            this.a = new y1(this, windowInsets);
        } else if (i5 >= 28) {
            this.a = new x1(this, windowInsets);
        } else {
            this.a = new w1(this, windowInsets);
        }
    }

    public static Insets e(Insets insets, int i5, int i6, int i10, int i11) {
        int max = Math.max(0, insets.a - i5);
        int max2 = Math.max(0, insets.f1512b - i6);
        int max3 = Math.max(0, insets.f1513c - i10);
        int max4 = Math.max(0, insets.f1514d - i11);
        return (max == i5 && max2 == i6 && max3 == i10 && max4 == i11) ? insets : Insets.b(max, max2, max3, max4);
    }

    public static WindowInsetsCompat g(View view, WindowInsets windowInsets) {
        windowInsets.getClass();
        WindowInsetsCompat windowInsetsCompat = new WindowInsetsCompat(windowInsets);
        if (view != null && view.isAttachedToWindow()) {
            WeakHashMap weakHashMap = s0.a;
            WindowInsetsCompat a = k0.a(view);
            c2 c2Var = windowInsetsCompat.a;
            c2Var.r(a);
            c2Var.d(view.getRootView());
            c2Var.t(view.getWindowSystemUiVisibility());
        }
        return windowInsetsCompat;
    }

    public final int a() {
        return this.a.k().f1514d;
    }

    public final int b() {
        return this.a.k().a;
    }

    public final int c() {
        return this.a.k().f1513c;
    }

    public final int d() {
        return this.a.k().f1512b;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof WindowInsetsCompat) {
            return Objects.equals(this.a, ((WindowInsetsCompat) obj).a);
        }
        return false;
    }

    public final WindowInsets f() {
        c2 c2Var = this.a;
        if (c2Var instanceof v1) {
            return ((v1) c2Var).f1642c;
        }
        return null;
    }

    public final int hashCode() {
        c2 c2Var = this.a;
        if (c2Var == null) {
            return 0;
        }
        return c2Var.hashCode();
    }

    public WindowInsetsCompat() {
        this.a = new c2(this);
    }
}
