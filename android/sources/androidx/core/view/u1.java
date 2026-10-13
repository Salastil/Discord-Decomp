package androidx.core.view;

import androidx.core.graphics.Insets;

/* loaded from: classes.dex */
public abstract class u1 {
    public final WindowInsetsCompat a;

    /* renamed from: b, reason: collision with root package name */
    public Insets[] f1637b;

    public u1() {
        this(new WindowInsetsCompat());
    }

    public final void a() {
        Insets[] insetsArr = this.f1637b;
        if (insetsArr != null) {
            Insets insets = insetsArr[0];
            Insets insets2 = insetsArr[1];
            WindowInsetsCompat windowInsetsCompat = this.a;
            if (insets2 == null) {
                insets2 = windowInsetsCompat.a.f(2);
            }
            if (insets == null) {
                insets = windowInsetsCompat.a.f(1);
            }
            g(Insets.a(insets, insets2));
            Insets insets3 = this.f1637b[ys.l.m(16)];
            if (insets3 != null) {
                f(insets3);
            }
            Insets insets4 = this.f1637b[ys.l.m(32)];
            if (insets4 != null) {
                d(insets4);
            }
            Insets insets5 = this.f1637b[ys.l.m(64)];
            if (insets5 != null) {
                h(insets5);
            }
        }
    }

    public abstract WindowInsetsCompat b();

    public void c(int i5, Insets insets) {
        if (this.f1637b == null) {
            this.f1637b = new Insets[10];
        }
        for (int i6 = 1; i6 <= 512; i6 <<= 1) {
            if ((i5 & i6) != 0) {
                this.f1637b[ys.l.m(i6)] = insets;
            }
        }
    }

    public void d(Insets insets) {
    }

    public abstract void e(Insets insets);

    public void f(Insets insets) {
    }

    public abstract void g(Insets insets);

    public void h(Insets insets) {
    }

    public u1(WindowInsetsCompat windowInsetsCompat) {
        this.a = windowInsetsCompat;
    }
}
