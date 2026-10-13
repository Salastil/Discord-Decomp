package androidx.core.view;

import android.animation.ValueAnimator;
import android.os.Build;
import android.view.View;
import android.view.WindowInsets;
import androidx.core.graphics.Insets;
import java.util.Objects;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class g1 implements View.OnApplyWindowInsetsListener {
    public final d1 a;

    /* renamed from: b, reason: collision with root package name */
    public WindowInsetsCompat f1595b;

    public g1(View view, d1 d1Var) {
        WindowInsetsCompat windowInsetsCompat;
        this.a = d1Var;
        WeakHashMap weakHashMap = s0.a;
        WindowInsetsCompat a = k0.a(view);
        if (a != null) {
            int i5 = Build.VERSION.SDK_INT;
            windowInsetsCompat = (i5 >= 34 ? new t1(a) : i5 >= 31 ? new s1(a) : i5 >= 30 ? new r1(a) : i5 >= 29 ? new q1(a) : new o1(a)).b();
        } else {
            windowInsetsCompat = null;
        }
        this.f1595b = windowInsetsCompat;
    }

    @Override // android.view.View.OnApplyWindowInsetsListener
    public final WindowInsets onApplyWindowInsets(View view, WindowInsets windowInsets) {
        int[] iArr;
        boolean z5;
        if (!view.isLaidOut()) {
            this.f1595b = WindowInsetsCompat.g(view, windowInsets);
            return h1.i(view, windowInsets);
        }
        WindowInsetsCompat g6 = WindowInsetsCompat.g(view, windowInsets);
        c2 c2Var = g6.a;
        if (this.f1595b == null) {
            WeakHashMap weakHashMap = s0.a;
            this.f1595b = k0.a(view);
        }
        if (this.f1595b == null) {
            this.f1595b = g6;
            return h1.i(view, windowInsets);
        }
        d1 j = h1.j(view);
        if (j != null && Objects.equals(j.mDispachedInsets, g6)) {
            return h1.i(view, windowInsets);
        }
        int[] iArr2 = new int[1];
        int[] iArr3 = new int[1];
        WindowInsetsCompat windowInsetsCompat = this.f1595b;
        int i5 = 1;
        while (i5 <= 512) {
            Insets f2 = c2Var.f(i5);
            Insets f10 = windowInsetsCompat.a.f(i5);
            int i6 = f2.a;
            int i10 = f2.f1514d;
            int i11 = f2.f1513c;
            int i12 = f2.f1512b;
            int i13 = f10.a;
            int i14 = f10.f1514d;
            int i15 = f10.f1513c;
            int i16 = f10.f1512b;
            if (i6 > i13 || i12 > i16 || i11 > i15 || i10 > i14) {
                iArr = iArr2;
                z5 = true;
            } else {
                iArr = iArr2;
                z5 = false;
            }
            if (z5 != (i6 < i13 || i12 < i16 || i11 < i15 || i10 < i14)) {
                if (z5) {
                    iArr[0] = iArr[0] | i5;
                } else {
                    iArr3[0] = iArr3[0] | i5;
                }
            }
            i5 <<= 1;
            iArr2 = iArr;
        }
        int i17 = iArr2[0];
        int i18 = iArr3[0];
        int i19 = i17 | i18;
        if (i19 == 0) {
            this.f1595b = g6;
            return h1.i(view, windowInsets);
        }
        WindowInsetsCompat windowInsetsCompat2 = this.f1595b;
        m1 m1Var = new m1(i19, (i17 & 8) != 0 ? h1.f1596e : (i18 & 8) != 0 ? h1.f1597f : (i17 & 519) != 0 ? h1.f1598g : (i18 & 519) != 0 ? h1.f1599h : null, (i19 & 8) != 0 ? 160L : 250L);
        m1Var.a.d(0.0f);
        ValueAnimator duration = ValueAnimator.ofFloat(0.0f, 1.0f).setDuration(m1Var.a.a());
        Insets f11 = c2Var.f(i19);
        Insets f12 = windowInsetsCompat2.a.f(i19);
        int min = Math.min(f11.a, f12.a);
        int i20 = f11.f1512b;
        int i21 = f12.f1512b;
        int min2 = Math.min(i20, i21);
        int i22 = f11.f1513c;
        int i23 = f12.f1513c;
        int min3 = Math.min(i22, i23);
        int i24 = f11.f1514d;
        int i25 = f12.f1514d;
        c1 c1Var = new c1(Insets.b(min, min2, min3, Math.min(i24, i25)), Insets.b(Math.max(f11.a, f12.a), Math.max(i20, i21), Math.max(i22, i23), Math.max(i24, i25)));
        h1.f(view, m1Var, g6, false);
        duration.addUpdateListener(new e1(m1Var, g6, windowInsetsCompat2, i19, view));
        duration.addListener(new z0(m1Var, view, 1));
        u.a(view, new f1(view, m1Var, c1Var, duration));
        this.f1595b = g6;
        return h1.i(view, windowInsets);
    }
}
