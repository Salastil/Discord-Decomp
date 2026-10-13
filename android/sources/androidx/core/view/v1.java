package androidx.core.view;

import android.annotation.SuppressLint;
import android.graphics.Rect;
import android.os.Build;
import android.util.Log;
import android.view.View;
import android.view.WindowInsets;
import androidx.core.graphics.Insets;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.util.Objects;

/* loaded from: classes.dex */
public abstract class v1 extends c2 {

    /* renamed from: i, reason: collision with root package name */
    public static boolean f1639i = false;
    public static Method j;
    public static Class k;

    /* renamed from: l, reason: collision with root package name */
    public static Field f1640l;

    /* renamed from: m, reason: collision with root package name */
    public static Field f1641m;

    /* renamed from: c, reason: collision with root package name */
    public final WindowInsets f1642c;

    /* renamed from: d, reason: collision with root package name */
    public Insets[] f1643d;

    /* renamed from: e, reason: collision with root package name */
    public Insets f1644e;

    /* renamed from: f, reason: collision with root package name */
    public WindowInsetsCompat f1645f;

    /* renamed from: g, reason: collision with root package name */
    public Insets f1646g;

    /* renamed from: h, reason: collision with root package name */
    public int f1647h;

    public v1(WindowInsetsCompat windowInsetsCompat, WindowInsets windowInsets) {
        super(windowInsetsCompat);
        this.f1644e = null;
        this.f1642c = windowInsets;
    }

    public static boolean B(int i5, int i6) {
        return (i5 & 6) == (i6 & 6);
    }

    @SuppressLint({"WrongConstant"})
    private Insets u(int i5, boolean z5) {
        Insets insets = Insets.f1511e;
        for (int i6 = 1; i6 <= 512; i6 <<= 1) {
            if ((i5 & i6) != 0) {
                insets = Insets.a(insets, v(i6, z5));
            }
        }
        return insets;
    }

    private Insets w() {
        WindowInsetsCompat windowInsetsCompat = this.f1645f;
        return windowInsetsCompat != null ? windowInsetsCompat.a.i() : Insets.f1511e;
    }

    private Insets x(View view) {
        if (Build.VERSION.SDK_INT >= 30) {
            throw new UnsupportedOperationException("getVisibleInsets() should not be called on API >= 30. Use WindowInsets.isVisible() instead.");
        }
        if (!f1639i) {
            z();
        }
        Method method = j;
        if (method != null && k != null && f1640l != null) {
            try {
                Object invoke = method.invoke(view, null);
                if (invoke == null) {
                    Log.w("WindowInsetsCompat", "Failed to get visible insets. getViewRootImpl() returned null from the provided view. This means that the view is either not attached or the method has been overridden", new NullPointerException());
                    return null;
                }
                Rect rect = (Rect) f1640l.get(f1641m.get(invoke));
                if (rect != null) {
                    return Insets.b(rect.left, rect.top, rect.right, rect.bottom);
                }
            } catch (ReflectiveOperationException e9) {
                Log.e("WindowInsetsCompat", "Failed to get visible insets. (Reflection error). " + e9.getMessage(), e9);
            }
        }
        return null;
    }

    @SuppressLint({"PrivateApi"})
    private static void z() {
        try {
            j = View.class.getDeclaredMethod("getViewRootImpl", null);
            Class<?> cls = Class.forName("android.view.View$AttachInfo");
            k = cls;
            f1640l = cls.getDeclaredField("mVisibleInsets");
            f1641m = Class.forName("android.view.ViewRootImpl").getDeclaredField("mAttachInfo");
            f1640l.setAccessible(true);
            f1641m.setAccessible(true);
        } catch (ReflectiveOperationException e9) {
            Log.e("WindowInsetsCompat", "Failed to get visible insets. (Reflection error). " + e9.getMessage(), e9);
        }
        f1639i = true;
    }

    public void A(Insets insets) {
        this.f1646g = insets;
    }

    @Override // androidx.core.view.c2
    public void d(View view) {
        Insets x5 = x(view);
        if (x5 == null) {
            x5 = Insets.f1511e;
        }
        A(x5);
    }

    @Override // androidx.core.view.c2
    public boolean equals(Object obj) {
        if (!super.equals(obj)) {
            return false;
        }
        v1 v1Var = (v1) obj;
        return Objects.equals(this.f1646g, v1Var.f1646g) && B(this.f1647h, v1Var.f1647h);
    }

    @Override // androidx.core.view.c2
    public Insets f(int i5) {
        return u(i5, false);
    }

    @Override // androidx.core.view.c2
    public Insets g(int i5) {
        return u(i5, true);
    }

    @Override // androidx.core.view.c2
    public final Insets k() {
        if (this.f1644e == null) {
            WindowInsets windowInsets = this.f1642c;
            this.f1644e = Insets.b(windowInsets.getSystemWindowInsetLeft(), windowInsets.getSystemWindowInsetTop(), windowInsets.getSystemWindowInsetRight(), windowInsets.getSystemWindowInsetBottom());
        }
        return this.f1644e;
    }

    @Override // androidx.core.view.c2
    public WindowInsetsCompat m(int i5, int i6, int i10, int i11) {
        WindowInsetsCompat g6 = WindowInsetsCompat.g(null, this.f1642c);
        int i12 = Build.VERSION.SDK_INT;
        u1 t1Var = i12 >= 34 ? new t1(g6) : i12 >= 31 ? new s1(g6) : i12 >= 30 ? new r1(g6) : i12 >= 29 ? new q1(g6) : new o1(g6);
        t1Var.g(WindowInsetsCompat.e(k(), i5, i6, i10, i11));
        t1Var.e(WindowInsetsCompat.e(i(), i5, i6, i10, i11));
        return t1Var.b();
    }

    @Override // androidx.core.view.c2
    public boolean o() {
        return this.f1642c.isRound();
    }

    @Override // androidx.core.view.c2
    @SuppressLint({"WrongConstant"})
    public boolean p(int i5) {
        for (int i6 = 1; i6 <= 512; i6 <<= 1) {
            if ((i5 & i6) != 0 && !y(i6)) {
                return false;
            }
        }
        return true;
    }

    @Override // androidx.core.view.c2
    public void q(Insets[] insetsArr) {
        this.f1643d = insetsArr;
    }

    @Override // androidx.core.view.c2
    public void r(WindowInsetsCompat windowInsetsCompat) {
        this.f1645f = windowInsetsCompat;
    }

    @Override // androidx.core.view.c2
    public void t(int i5) {
        this.f1647h = i5;
    }

    public Insets v(int i5, boolean z5) {
        Insets i6;
        int i10;
        Insets insets = Insets.f1511e;
        if (i5 != 1) {
            if (i5 != 2) {
                if (i5 == 8) {
                    Insets[] insetsArr = this.f1643d;
                    i6 = insetsArr != null ? insetsArr[ys.l.m(8)] : null;
                    if (i6 != null) {
                        return i6;
                    }
                    Insets k5 = k();
                    Insets w5 = w();
                    int i11 = k5.f1514d;
                    if (i11 > w5.f1514d) {
                        return Insets.b(0, 0, 0, i11);
                    }
                    Insets insets2 = this.f1646g;
                    if (insets2 != null && !insets2.equals(insets) && (i10 = this.f1646g.f1514d) > w5.f1514d) {
                        return Insets.b(0, 0, 0, i10);
                    }
                } else {
                    if (i5 == 16) {
                        return j();
                    }
                    if (i5 == 32) {
                        return h();
                    }
                    if (i5 == 64) {
                        return l();
                    }
                    if (i5 == 128) {
                        WindowInsetsCompat windowInsetsCompat = this.f1645f;
                        i e9 = windowInsetsCompat != null ? windowInsetsCompat.a.e() : e();
                        if (e9 != null) {
                            int i12 = Build.VERSION.SDK_INT;
                            return Insets.b(i12 >= 28 ? h.j(e9.a) : 0, i12 >= 28 ? h.l(e9.a) : 0, i12 >= 28 ? h.k(e9.a) : 0, i12 >= 28 ? h.i(e9.a) : 0);
                        }
                    }
                }
            } else {
                if (z5) {
                    Insets w6 = w();
                    Insets i13 = i();
                    return Insets.b(Math.max(w6.a, i13.a), 0, Math.max(w6.f1513c, i13.f1513c), Math.max(w6.f1514d, i13.f1514d));
                }
                if ((this.f1647h & 2) == 0) {
                    Insets k7 = k();
                    WindowInsetsCompat windowInsetsCompat2 = this.f1645f;
                    i6 = windowInsetsCompat2 != null ? windowInsetsCompat2.a.i() : null;
                    int i14 = k7.f1514d;
                    if (i6 != null) {
                        i14 = Math.min(i14, i6.f1514d);
                    }
                    return Insets.b(k7.a, 0, k7.f1513c, i14);
                }
            }
        } else {
            if (z5) {
                return Insets.b(0, Math.max(w().f1512b, k().f1512b), 0, 0);
            }
            if ((this.f1647h & 4) == 0) {
                return Insets.b(0, k().f1512b, 0, 0);
            }
        }
        return insets;
    }

    public boolean y(int i5) {
        if (i5 != 1 && i5 != 2) {
            if (i5 == 4) {
                return false;
            }
            if (i5 != 8 && i5 != 128) {
                return true;
            }
        }
        return !v(i5, false).equals(Insets.f1511e);
    }
}
