package androidx.core.view;

import android.os.Build;
import android.view.View;
import androidx.core.graphics.Insets;
import java.util.Objects;

/* loaded from: classes.dex */
public class c2 {

    /* renamed from: b, reason: collision with root package name */
    public static final WindowInsetsCompat f1573b;
    public final WindowInsetsCompat a;

    static {
        int i5 = Build.VERSION.SDK_INT;
        f1573b = (i5 >= 34 ? new t1() : i5 >= 31 ? new s1() : i5 >= 30 ? new r1() : i5 >= 29 ? new q1() : new o1()).b().a.a().a.b().a.c();
    }

    public c2(WindowInsetsCompat windowInsetsCompat) {
        this.a = windowInsetsCompat;
    }

    public WindowInsetsCompat a() {
        return this.a;
    }

    public WindowInsetsCompat b() {
        return this.a;
    }

    public WindowInsetsCompat c() {
        return this.a;
    }

    public void d(View view) {
    }

    public i e() {
        return null;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof c2)) {
            return false;
        }
        c2 c2Var = (c2) obj;
        return o() == c2Var.o() && n() == c2Var.n() && Objects.equals(k(), c2Var.k()) && Objects.equals(i(), c2Var.i()) && Objects.equals(e(), c2Var.e());
    }

    public Insets f(int i5) {
        return Insets.f1511e;
    }

    public Insets g(int i5) {
        if ((i5 & 8) == 0) {
            return Insets.f1511e;
        }
        throw new IllegalArgumentException("Unable to query the maximum insets for IME");
    }

    public Insets h() {
        return k();
    }

    public int hashCode() {
        return Objects.hash(Boolean.valueOf(o()), Boolean.valueOf(n()), k(), i(), e());
    }

    public Insets i() {
        return Insets.f1511e;
    }

    public Insets j() {
        return k();
    }

    public Insets k() {
        return Insets.f1511e;
    }

    public Insets l() {
        return k();
    }

    public WindowInsetsCompat m(int i5, int i6, int i10, int i11) {
        return f1573b;
    }

    public boolean n() {
        return false;
    }

    public boolean o() {
        return false;
    }

    public boolean p(int i5) {
        return true;
    }

    public void q(Insets[] insetsArr) {
    }

    public void r(WindowInsetsCompat windowInsetsCompat) {
    }

    public void s(Insets insets) {
    }

    public void t(int i5) {
    }
}
