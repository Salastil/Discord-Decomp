package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import com.discord.R;

/* loaded from: classes.dex */
public final class h0 extends c0 {

    /* renamed from: d, reason: collision with root package name */
    public final g0 f1004d;

    /* renamed from: e, reason: collision with root package name */
    public Drawable f1005e;

    /* renamed from: f, reason: collision with root package name */
    public ColorStateList f1006f;

    /* renamed from: g, reason: collision with root package name */
    public PorterDuff.Mode f1007g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f1008h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f1009i;

    public h0(g0 g0Var) {
        super(g0Var);
        this.f1006f = null;
        this.f1007g = null;
        this.f1008h = false;
        this.f1009i = false;
        this.f1004d = g0Var;
    }

    @Override // androidx.appcompat.widget.c0
    public final void a(AttributeSet attributeSet, int i5) {
        super.a(attributeSet, R.attr.seekBarStyle);
        g0 g0Var = this.f1004d;
        Context context = g0Var.getContext();
        int[] iArr = h.a.f9451g;
        e4.m b02 = e4.m.b0(context, attributeSet, iArr, R.attr.seekBarStyle);
        TypedArray typedArray = (TypedArray) b02.f7964i;
        androidx.core.view.s0.o(g0Var, g0Var.getContext(), iArr, attributeSet, (TypedArray) b02.f7964i, R.attr.seekBarStyle, 0);
        Drawable V = b02.V(0);
        if (V != null) {
            g0Var.setThumb(V);
        }
        Drawable U = b02.U(1);
        Drawable drawable = this.f1005e;
        if (drawable != null) {
            drawable.setCallback(null);
        }
        this.f1005e = U;
        if (U != null) {
            U.setCallback(g0Var);
            U.setLayoutDirection(g0Var.getLayoutDirection());
            if (U.isStateful()) {
                U.setState(g0Var.getDrawableState());
            }
            c();
        }
        g0Var.invalidate();
        if (typedArray.hasValue(3)) {
            this.f1007g = n1.c(typedArray.getInt(3, -1), this.f1007g);
            this.f1009i = true;
        }
        if (typedArray.hasValue(2)) {
            this.f1006f = b02.T(2);
            this.f1008h = true;
        }
        b02.e0();
        c();
    }

    public final void c() {
        Drawable drawable = this.f1005e;
        if (drawable != null) {
            if (this.f1008h || this.f1009i) {
                Drawable mutate = drawable.mutate();
                this.f1005e = mutate;
                if (this.f1008h) {
                    mutate.setTintList(this.f1006f);
                }
                if (this.f1009i) {
                    this.f1005e.setTintMode(this.f1007g);
                }
                if (this.f1005e.isStateful()) {
                    this.f1005e.setState(this.f1004d.getDrawableState());
                }
            }
        }
    }

    public final void d(Canvas canvas) {
        if (this.f1005e != null) {
            int max = this.f1004d.getMax();
            if (max > 1) {
                int intrinsicWidth = this.f1005e.getIntrinsicWidth();
                int intrinsicHeight = this.f1005e.getIntrinsicHeight();
                int i5 = intrinsicWidth >= 0 ? intrinsicWidth / 2 : 1;
                int i6 = intrinsicHeight >= 0 ? intrinsicHeight / 2 : 1;
                this.f1005e.setBounds(-i5, -i6, i5, i6);
                float width = ((r0.getWidth() - r0.getPaddingLeft()) - r0.getPaddingRight()) / max;
                int save = canvas.save();
                canvas.translate(r0.getPaddingLeft(), r0.getHeight() / 2);
                for (int i10 = 0; i10 <= max; i10++) {
                    this.f1005e.draw(canvas);
                    canvas.translate(width, 0.0f);
                }
                canvas.restoreToCount(save);
            }
        }
    }
}
