package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.view.View;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class AppCompatBackgroundHelper {
    public final View a;

    /* renamed from: d, reason: collision with root package name */
    public m3 f850d;

    /* renamed from: e, reason: collision with root package name */
    public m3 f851e;

    /* renamed from: f, reason: collision with root package name */
    public m3 f852f;

    /* renamed from: c, reason: collision with root package name */
    public int f849c = -1;

    /* renamed from: b, reason: collision with root package name */
    public final x f848b = x.a();

    public AppCompatBackgroundHelper(View view) {
        this.a = view;
    }

    public final void a() {
        View view = this.a;
        Drawable background = view.getBackground();
        if (background != null) {
            if (this.f850d != null) {
                if (this.f852f == null) {
                    this.f852f = new m3();
                }
                m3 m3Var = this.f852f;
                m3Var.f1037c = null;
                m3Var.f1036b = false;
                m3Var.f1038d = null;
                m3Var.a = false;
                WeakHashMap weakHashMap = androidx.core.view.s0.a;
                ColorStateList c6 = androidx.core.view.j0.c(view);
                if (c6 != null) {
                    m3Var.f1036b = true;
                    m3Var.f1037c = c6;
                }
                PorterDuff.Mode d6 = androidx.core.view.j0.d(view);
                if (d6 != null) {
                    m3Var.a = true;
                    m3Var.f1038d = d6;
                }
                if (m3Var.f1036b || m3Var.a) {
                    x.e(background, m3Var, view.getDrawableState());
                    return;
                }
            }
            m3 m3Var2 = this.f851e;
            if (m3Var2 != null) {
                x.e(background, m3Var2, view.getDrawableState());
                return;
            }
            m3 m3Var3 = this.f850d;
            if (m3Var3 != null) {
                x.e(background, m3Var3, view.getDrawableState());
            }
        }
    }

    public final ColorStateList b() {
        m3 m3Var = this.f851e;
        if (m3Var != null) {
            return (ColorStateList) m3Var.f1037c;
        }
        return null;
    }

    public final PorterDuff.Mode c() {
        m3 m3Var = this.f851e;
        if (m3Var != null) {
            return (PorterDuff.Mode) m3Var.f1038d;
        }
        return null;
    }

    public final void d(AttributeSet attributeSet, int i5) {
        ColorStateList f2;
        View view = this.a;
        Context context = view.getContext();
        int[] iArr = h.a.A;
        e4.m b02 = e4.m.b0(context, attributeSet, iArr, i5);
        TypedArray typedArray = (TypedArray) b02.f7964i;
        View view2 = this.a;
        androidx.core.view.s0.o(view2, view2.getContext(), iArr, attributeSet, (TypedArray) b02.f7964i, i5, 0);
        try {
            if (typedArray.hasValue(0)) {
                this.f849c = typedArray.getResourceId(0, -1);
                x xVar = this.f848b;
                Context context2 = view.getContext();
                int i6 = this.f849c;
                synchronized (xVar) {
                    f2 = xVar.a.f(context2, i6);
                }
                if (f2 != null) {
                    g(f2);
                }
            }
            if (typedArray.hasValue(1)) {
                androidx.core.view.j0.i(view, b02.T(1));
            }
            if (typedArray.hasValue(2)) {
                androidx.core.view.j0.j(view, n1.c(typedArray.getInt(2, -1), null));
            }
            b02.e0();
        } catch (Throwable th2) {
            b02.e0();
            throw th2;
        }
    }

    public final void e() {
        this.f849c = -1;
        g(null);
        a();
    }

    public final void f(int i5) {
        ColorStateList colorStateList;
        this.f849c = i5;
        x xVar = this.f848b;
        if (xVar != null) {
            Context context = this.a.getContext();
            synchronized (xVar) {
                colorStateList = xVar.a.f(context, i5);
            }
        } else {
            colorStateList = null;
        }
        g(colorStateList);
        a();
    }

    public final void g(ColorStateList colorStateList) {
        if (colorStateList != null) {
            if (this.f850d == null) {
                this.f850d = new m3();
            }
            m3 m3Var = this.f850d;
            m3Var.f1037c = colorStateList;
            m3Var.f1036b = true;
        } else {
            this.f850d = null;
        }
        a();
    }

    public final void h(ColorStateList colorStateList) {
        if (this.f851e == null) {
            this.f851e = new m3();
        }
        m3 m3Var = this.f851e;
        m3Var.f1037c = colorStateList;
        m3Var.f1036b = true;
        a();
    }

    public final void i(PorterDuff.Mode mode) {
        if (this.f851e == null) {
            this.f851e = new m3();
        }
        m3 m3Var = this.f851e;
        m3Var.f1038d = mode;
        m3Var.a = true;
        a();
    }
}
