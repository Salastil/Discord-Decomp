package androidx.core.view;

import android.view.WindowInsets;
import androidx.core.graphics.Insets;

/* loaded from: classes.dex */
public class q1 extends u1 {

    /* renamed from: c, reason: collision with root package name */
    public final WindowInsets.Builder f1625c;

    public q1() {
        this.f1625c = p1.d();
    }

    @Override // androidx.core.view.u1
    public WindowInsetsCompat b() {
        a();
        WindowInsetsCompat g6 = WindowInsetsCompat.g(null, this.f1625c.build());
        g6.a.q(this.f1637b);
        return g6;
    }

    @Override // androidx.core.view.u1
    public void d(Insets insets) {
        this.f1625c.setMandatorySystemGestureInsets(insets.d());
    }

    @Override // androidx.core.view.u1
    public void e(Insets insets) {
        this.f1625c.setStableInsets(insets.d());
    }

    @Override // androidx.core.view.u1
    public void f(Insets insets) {
        this.f1625c.setSystemGestureInsets(insets.d());
    }

    @Override // androidx.core.view.u1
    public void g(Insets insets) {
        this.f1625c.setSystemWindowInsets(insets.d());
    }

    @Override // androidx.core.view.u1
    public void h(Insets insets) {
        this.f1625c.setTappableElementInsets(insets.d());
    }

    public q1(WindowInsetsCompat windowInsetsCompat) {
        super(windowInsetsCompat);
        WindowInsets.Builder d6;
        WindowInsets f2 = windowInsetsCompat.f();
        if (f2 != null) {
            d6 = p1.e(f2);
        } else {
            d6 = p1.d();
        }
        this.f1625c = d6;
    }
}
