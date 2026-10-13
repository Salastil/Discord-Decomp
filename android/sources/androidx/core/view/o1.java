package androidx.core.view;

import android.graphics.Rect;
import android.util.Log;
import android.view.WindowInsets;
import androidx.core.graphics.Insets;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;

/* loaded from: classes.dex */
public final class o1 extends u1 {

    /* renamed from: e, reason: collision with root package name */
    public static Field f1619e = null;

    /* renamed from: f, reason: collision with root package name */
    public static boolean f1620f = false;

    /* renamed from: g, reason: collision with root package name */
    public static Constructor f1621g = null;

    /* renamed from: h, reason: collision with root package name */
    public static boolean f1622h = false;

    /* renamed from: c, reason: collision with root package name */
    public WindowInsets f1623c;

    /* renamed from: d, reason: collision with root package name */
    public Insets f1624d;

    public o1() {
        this.f1623c = i();
    }

    private static WindowInsets i() {
        if (!f1620f) {
            try {
                f1619e = WindowInsets.class.getDeclaredField("CONSUMED");
            } catch (ReflectiveOperationException e9) {
                Log.i("WindowInsetsCompat", "Could not retrieve WindowInsets.CONSUMED field", e9);
            }
            f1620f = true;
        }
        Field field = f1619e;
        if (field != null) {
            try {
                WindowInsets windowInsets = (WindowInsets) field.get(null);
                if (windowInsets != null) {
                    return new WindowInsets(windowInsets);
                }
            } catch (ReflectiveOperationException e10) {
                Log.i("WindowInsetsCompat", "Could not get value from WindowInsets.CONSUMED field", e10);
            }
        }
        if (!f1622h) {
            try {
                f1621g = WindowInsets.class.getConstructor(Rect.class);
            } catch (ReflectiveOperationException e11) {
                Log.i("WindowInsetsCompat", "Could not retrieve WindowInsets(Rect) constructor", e11);
            }
            f1622h = true;
        }
        Constructor constructor = f1621g;
        if (constructor != null) {
            try {
                return (WindowInsets) constructor.newInstance(new Rect());
            } catch (ReflectiveOperationException e12) {
                Log.i("WindowInsetsCompat", "Could not invoke WindowInsets(Rect) constructor", e12);
            }
        }
        return null;
    }

    @Override // androidx.core.view.u1
    public WindowInsetsCompat b() {
        a();
        WindowInsetsCompat g6 = WindowInsetsCompat.g(null, this.f1623c);
        Insets[] insetsArr = this.f1637b;
        c2 c2Var = g6.a;
        c2Var.q(insetsArr);
        c2Var.s(this.f1624d);
        return g6;
    }

    @Override // androidx.core.view.u1
    public void e(Insets insets) {
        this.f1624d = insets;
    }

    @Override // androidx.core.view.u1
    public void g(Insets insets) {
        WindowInsets windowInsets = this.f1623c;
        if (windowInsets != null) {
            this.f1623c = windowInsets.replaceSystemWindowInsets(insets.a, insets.f1512b, insets.f1513c, insets.f1514d);
        }
    }

    public o1(WindowInsetsCompat windowInsetsCompat) {
        super(windowInsetsCompat);
        this.f1623c = windowInsetsCompat.f();
    }
}
