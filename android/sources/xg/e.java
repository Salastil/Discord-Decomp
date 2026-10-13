package xg;

import android.R;
import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Outline;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PointF;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.RippleDrawable;
import android.graphics.drawable.ShapeDrawable;
import android.graphics.drawable.shapes.OvalShape;
import android.text.SpannableStringBuilder;
import android.text.TextPaint;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.TypedValue;
import ch.l;
import ch.m;
import com.google.android.material.chip.Chip;
import hc.f1;
import java.lang.ref.WeakReference;
import java.util.Arrays;
import lh.g;
import lh.i;

/* loaded from: classes3.dex */
public final class e extends i implements Drawable.Callback, l {

    /* renamed from: m1, reason: collision with root package name */
    public static final int[] f20424m1 = {R.attr.state_enabled};

    /* renamed from: n1, reason: collision with root package name */
    public static final ShapeDrawable f20425n1 = new ShapeDrawable(new OvalShape());
    public ColorStateList A0;
    public mg.c B0;
    public mg.c C0;
    public float D0;
    public float E0;
    public float F0;
    public float G0;
    public float H0;
    public float I0;
    public float J0;
    public float K0;
    public final Context L0;
    public final Paint M0;
    public final Paint.FontMetrics N0;
    public final RectF O0;
    public final PointF P0;
    public final Path Q0;
    public final m R0;
    public int S0;
    public int T0;
    public int U0;
    public int V0;
    public int W0;
    public int X0;
    public boolean Y0;
    public int Z0;

    /* renamed from: a1, reason: collision with root package name */
    public int f20426a1;

    /* renamed from: b1, reason: collision with root package name */
    public ColorFilter f20427b1;

    /* renamed from: c1, reason: collision with root package name */
    public PorterDuffColorFilter f20428c1;

    /* renamed from: d1, reason: collision with root package name */
    public ColorStateList f20429d1;

    /* renamed from: e0, reason: collision with root package name */
    public ColorStateList f20430e0;
    public PorterDuff.Mode e1;

    /* renamed from: f0, reason: collision with root package name */
    public ColorStateList f20431f0;

    /* renamed from: f1, reason: collision with root package name */
    public int[] f20432f1;

    /* renamed from: g0, reason: collision with root package name */
    public float f20433g0;

    /* renamed from: g1, reason: collision with root package name */
    public ColorStateList f20434g1;
    public float h0;

    /* renamed from: h1, reason: collision with root package name */
    public WeakReference f20435h1;

    /* renamed from: i0, reason: collision with root package name */
    public ColorStateList f20436i0;

    /* renamed from: i1, reason: collision with root package name */
    public TextUtils.TruncateAt f20437i1;

    /* renamed from: j0, reason: collision with root package name */
    public float f20438j0;

    /* renamed from: j1, reason: collision with root package name */
    public boolean f20439j1;

    /* renamed from: k0, reason: collision with root package name */
    public ColorStateList f20440k0;

    /* renamed from: k1, reason: collision with root package name */
    public int f20441k1;

    /* renamed from: l0, reason: collision with root package name */
    public CharSequence f20442l0;

    /* renamed from: l1, reason: collision with root package name */
    public boolean f20443l1;

    /* renamed from: m0, reason: collision with root package name */
    public boolean f20444m0;

    /* renamed from: n0, reason: collision with root package name */
    public Drawable f20445n0;

    /* renamed from: o0, reason: collision with root package name */
    public ColorStateList f20446o0;

    /* renamed from: p0, reason: collision with root package name */
    public float f20447p0;

    /* renamed from: q0, reason: collision with root package name */
    public boolean f20448q0;

    /* renamed from: r0, reason: collision with root package name */
    public boolean f20449r0;

    /* renamed from: s0, reason: collision with root package name */
    public Drawable f20450s0;

    /* renamed from: t0, reason: collision with root package name */
    public RippleDrawable f20451t0;

    /* renamed from: u0, reason: collision with root package name */
    public ColorStateList f20452u0;

    /* renamed from: v0, reason: collision with root package name */
    public float f20453v0;

    /* renamed from: w0, reason: collision with root package name */
    public SpannableStringBuilder f20454w0;

    /* renamed from: x0, reason: collision with root package name */
    public boolean f20455x0;

    /* renamed from: y0, reason: collision with root package name */
    public boolean f20456y0;

    /* renamed from: z0, reason: collision with root package name */
    public Drawable f20457z0;

    public e(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, com.discord.R.attr.chipStyle, com.discord.R.style.Widget_MaterialComponents_Chip_Action);
        this.h0 = -1.0f;
        this.M0 = new Paint(1);
        this.N0 = new Paint.FontMetrics();
        this.O0 = new RectF();
        this.P0 = new PointF();
        this.Q0 = new Path();
        this.f20426a1 = 255;
        this.e1 = PorterDuff.Mode.SRC_IN;
        this.f20435h1 = new WeakReference(null);
        m(context);
        this.L0 = context;
        m mVar = new m(this);
        this.R0 = mVar;
        this.f20442l0 = "";
        mVar.a.density = context.getResources().getDisplayMetrics().density;
        int[] iArr = f20424m1;
        setState(iArr);
        W(iArr);
        this.f20439j1 = true;
        f20425n1.setTint(-1);
    }

    public static boolean D(ColorStateList colorStateList) {
        return colorStateList != null && colorStateList.isStateful();
    }

    public static boolean E(Drawable drawable) {
        return drawable != null && drawable.isStateful();
    }

    public static void f0(Drawable drawable) {
        if (drawable != null) {
            drawable.setCallback(null);
        }
    }

    public final float A() {
        if (!d0() && !c0()) {
            return 0.0f;
        }
        float f2 = this.E0;
        Drawable drawable = this.Y0 ? this.f20457z0 : this.f20445n0;
        float f10 = this.f20447p0;
        if (f10 <= 0.0f && drawable != null) {
            f10 = drawable.getIntrinsicWidth();
        }
        return f10 + f2 + this.F0;
    }

    public final float B() {
        if (e0()) {
            return this.I0 + this.f20453v0 + this.J0;
        }
        return 0.0f;
    }

    public final float C() {
        return this.f20443l1 ? k() : this.h0;
    }

    public final void F() {
        d dVar = (d) this.f20435h1.get();
        if (dVar != null) {
            Chip chip = (Chip) dVar;
            chip.c(chip.M);
            chip.requestLayout();
            chip.invalidateOutline();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:100:0x016a  */
    /* JADX WARN: Removed duplicated region for block: B:102:0x0173  */
    /* JADX WARN: Removed duplicated region for block: B:104:0x0178  */
    /* JADX WARN: Removed duplicated region for block: B:108:0x0126  */
    /* JADX WARN: Removed duplicated region for block: B:109:0x0104  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x00a5  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x00bd  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x00c7  */
    /* JADX WARN: Removed duplicated region for block: B:81:0x00fd  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x0109  */
    /* JADX WARN: Removed duplicated region for block: B:91:0x012f  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x013e  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x014d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean G(int[] iArr, int[] iArr2) {
        int i5;
        int colorForState;
        int[] state;
        boolean z5;
        boolean z6;
        int colorForState2;
        ColorStateList colorStateList;
        boolean onStateChange = super.onStateChange(iArr);
        ColorStateList colorStateList2 = this.f20430e0;
        int d6 = d(colorStateList2 != null ? colorStateList2.getColorForState(iArr, this.S0) : 0);
        boolean z7 = true;
        if (this.S0 != d6) {
            this.S0 = d6;
            onStateChange = true;
        }
        ColorStateList colorStateList3 = this.f20431f0;
        int d7 = d(colorStateList3 != null ? colorStateList3.getColorForState(iArr, this.T0) : 0);
        if (this.T0 != d7) {
            this.T0 = d7;
            onStateChange = true;
        }
        int c6 = b1.c.c(d7, d6);
        if ((this.U0 != c6) | (this.f14001e.f13985d == null)) {
            this.U0 = c6;
            q(ColorStateList.valueOf(c6));
            onStateChange = true;
        }
        ColorStateList colorStateList4 = this.f20436i0;
        int colorForState3 = colorStateList4 != null ? colorStateList4.getColorForState(iArr, this.V0) : 0;
        if (this.V0 != colorForState3) {
            this.V0 = colorForState3;
            onStateChange = true;
        }
        if (this.f20434g1 != null) {
            int[] iArr3 = jh.a.a;
            boolean z8 = false;
            boolean z10 = false;
            for (int i6 : iArr) {
                if (i6 == 16842910) {
                    z8 = true;
                } else if (i6 == 16842908 || i6 == 16842919 || i6 == 16843623) {
                    z10 = true;
                }
            }
            if (z8 && z10) {
                i5 = this.f20434g1.getColorForState(iArr, this.W0);
                if (this.W0 != i5) {
                    this.W0 = i5;
                }
                ih.e eVar = this.R0.f3559g;
                colorForState = (eVar != null || (colorStateList = eVar.k) == null) ? 0 : colorStateList.getColorForState(iArr, this.X0);
                if (this.X0 != colorForState) {
                    this.X0 = colorForState;
                    onStateChange = true;
                }
                state = getState();
                if (state != null) {
                    int length = state.length;
                    int i10 = 0;
                    while (true) {
                        if (i10 >= length) {
                            break;
                        }
                        if (state[i10] != 16842912) {
                            i10++;
                        } else if (this.f20455x0) {
                            z5 = true;
                        }
                    }
                }
                z5 = false;
                if (this.Y0 != z5 || this.f20457z0 == null) {
                    z6 = false;
                } else {
                    float A = A();
                    this.Y0 = z5;
                    if (A != A()) {
                        onStateChange = true;
                        z6 = true;
                    } else {
                        z6 = false;
                        onStateChange = true;
                    }
                }
                ColorStateList colorStateList5 = this.f20429d1;
                colorForState2 = colorStateList5 == null ? colorStateList5.getColorForState(iArr, this.Z0) : 0;
                if (this.Z0 == colorForState2) {
                    this.Z0 = colorForState2;
                    ColorStateList colorStateList6 = this.f20429d1;
                    PorterDuff.Mode mode = this.e1;
                    this.f20428c1 = (colorStateList6 == null || mode == null) ? null : new PorterDuffColorFilter(colorStateList6.getColorForState(getState(), 0), mode);
                } else {
                    z7 = onStateChange;
                }
                if (E(this.f20445n0)) {
                    z7 |= this.f20445n0.setState(iArr);
                }
                if (E(this.f20457z0)) {
                    z7 |= this.f20457z0.setState(iArr);
                }
                if (E(this.f20450s0)) {
                    int[] iArr4 = new int[iArr.length + iArr2.length];
                    System.arraycopy(iArr, 0, iArr4, 0, iArr.length);
                    System.arraycopy(iArr2, 0, iArr4, iArr.length, iArr2.length);
                    z7 |= this.f20450s0.setState(iArr4);
                }
                if (E(this.f20451t0)) {
                    z7 |= this.f20451t0.setState(iArr2);
                }
                if (z7) {
                    invalidateSelf();
                }
                if (z6) {
                    F();
                }
                return z7;
            }
        }
        i5 = 0;
        if (this.W0 != i5) {
        }
        ih.e eVar2 = this.R0.f3559g;
        if (eVar2 != null) {
        }
        if (this.X0 != colorForState) {
        }
        state = getState();
        if (state != null) {
        }
        z5 = false;
        if (this.Y0 != z5) {
        }
        z6 = false;
        ColorStateList colorStateList52 = this.f20429d1;
        if (colorStateList52 == null) {
        }
        if (this.Z0 == colorForState2) {
        }
        if (E(this.f20445n0)) {
        }
        if (E(this.f20457z0)) {
        }
        if (E(this.f20450s0)) {
        }
        if (E(this.f20451t0)) {
        }
        if (z7) {
        }
        if (z6) {
        }
        return z7;
    }

    public final void H(boolean z5) {
        if (this.f20455x0 != z5) {
            this.f20455x0 = z5;
            float A = A();
            if (!z5 && this.Y0) {
                this.Y0 = false;
            }
            float A2 = A();
            invalidateSelf();
            if (A != A2) {
                F();
            }
        }
    }

    public final void I(Drawable drawable) {
        if (this.f20457z0 != drawable) {
            float A = A();
            this.f20457z0 = drawable;
            float A2 = A();
            f0(this.f20457z0);
            y(this.f20457z0);
            invalidateSelf();
            if (A != A2) {
                F();
            }
        }
    }

    public final void J(ColorStateList colorStateList) {
        Drawable drawable;
        if (this.A0 != colorStateList) {
            this.A0 = colorStateList;
            if (this.f20456y0 && (drawable = this.f20457z0) != null && this.f20455x0) {
                drawable.setTintList(colorStateList);
            }
            onStateChange(getState());
        }
    }

    public final void K(boolean z5) {
        if (this.f20456y0 != z5) {
            boolean c02 = c0();
            this.f20456y0 = z5;
            boolean c03 = c0();
            if (c02 != c03) {
                if (c03) {
                    y(this.f20457z0);
                } else {
                    f0(this.f20457z0);
                }
                invalidateSelf();
                F();
            }
        }
    }

    public final void L(float f2) {
        if (this.h0 != f2) {
            this.h0 = f2;
            lh.l g6 = this.f14001e.a.g();
            g6.b(f2);
            setShapeAppearanceModel(g6.a());
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void M(Drawable drawable) {
        Drawable drawable2;
        Drawable drawable3 = this.f20445n0;
        if (drawable3 != 0) {
            boolean z5 = drawable3 instanceof c1.b;
            drawable2 = drawable3;
            if (z5) {
                drawable2 = null;
            }
        } else {
            drawable2 = null;
        }
        if (drawable2 != drawable) {
            float A = A();
            this.f20445n0 = drawable != null ? drawable.mutate() : null;
            float A2 = A();
            f0(drawable2);
            if (d0()) {
                y(this.f20445n0);
            }
            invalidateSelf();
            if (A != A2) {
                F();
            }
        }
    }

    public final void N(float f2) {
        if (this.f20447p0 != f2) {
            float A = A();
            this.f20447p0 = f2;
            float A2 = A();
            invalidateSelf();
            if (A != A2) {
                F();
            }
        }
    }

    public final void O(ColorStateList colorStateList) {
        this.f20448q0 = true;
        if (this.f20446o0 != colorStateList) {
            this.f20446o0 = colorStateList;
            if (d0()) {
                this.f20445n0.setTintList(colorStateList);
            }
            onStateChange(getState());
        }
    }

    public final void P(boolean z5) {
        if (this.f20444m0 != z5) {
            boolean d02 = d0();
            this.f20444m0 = z5;
            boolean d03 = d0();
            if (d02 != d03) {
                if (d03) {
                    y(this.f20445n0);
                } else {
                    f0(this.f20445n0);
                }
                invalidateSelf();
                F();
            }
        }
    }

    public final void Q(ColorStateList colorStateList) {
        if (this.f20436i0 != colorStateList) {
            this.f20436i0 = colorStateList;
            if (this.f20443l1) {
                g gVar = this.f14001e;
                if (gVar.f13986e != colorStateList) {
                    gVar.f13986e = colorStateList;
                    onStateChange(getState());
                }
            }
            onStateChange(getState());
        }
    }

    public final void R(float f2) {
        if (this.f20438j0 != f2) {
            this.f20438j0 = f2;
            this.M0.setStrokeWidth(f2);
            if (this.f20443l1) {
                this.f14001e.k = f2;
                invalidateSelf();
            }
            invalidateSelf();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void S(Drawable drawable) {
        Drawable drawable2;
        Drawable drawable3 = this.f20450s0;
        if (drawable3 != 0) {
            boolean z5 = drawable3 instanceof c1.b;
            drawable2 = drawable3;
            if (z5) {
                drawable2 = null;
            }
        } else {
            drawable2 = null;
        }
        if (drawable2 != drawable) {
            float B = B();
            this.f20450s0 = drawable != null ? drawable.mutate() : null;
            this.f20451t0 = new RippleDrawable(jh.a.b(this.f20440k0), this.f20450s0, f20425n1);
            float B2 = B();
            f0(drawable2);
            if (e0()) {
                y(this.f20450s0);
            }
            invalidateSelf();
            if (B != B2) {
                F();
            }
        }
    }

    public final void T(float f2) {
        if (this.J0 != f2) {
            this.J0 = f2;
            invalidateSelf();
            if (e0()) {
                F();
            }
        }
    }

    public final void U(float f2) {
        if (this.f20453v0 != f2) {
            this.f20453v0 = f2;
            invalidateSelf();
            if (e0()) {
                F();
            }
        }
    }

    public final void V(float f2) {
        if (this.I0 != f2) {
            this.I0 = f2;
            invalidateSelf();
            if (e0()) {
                F();
            }
        }
    }

    public final boolean W(int[] iArr) {
        if (Arrays.equals(this.f20432f1, iArr)) {
            return false;
        }
        this.f20432f1 = iArr;
        if (e0()) {
            return G(getState(), iArr);
        }
        return false;
    }

    public final void X(ColorStateList colorStateList) {
        if (this.f20452u0 != colorStateList) {
            this.f20452u0 = colorStateList;
            if (e0()) {
                this.f20450s0.setTintList(colorStateList);
            }
            onStateChange(getState());
        }
    }

    public final void Y(boolean z5) {
        if (this.f20449r0 != z5) {
            boolean e02 = e0();
            this.f20449r0 = z5;
            boolean e03 = e0();
            if (e02 != e03) {
                if (e03) {
                    y(this.f20450s0);
                } else {
                    f0(this.f20450s0);
                }
                invalidateSelf();
                F();
            }
        }
    }

    public final void Z(float f2) {
        if (this.F0 != f2) {
            float A = A();
            this.F0 = f2;
            float A2 = A();
            invalidateSelf();
            if (A != A2) {
                F();
            }
        }
    }

    @Override // ch.l
    public final void a() {
        F();
        invalidateSelf();
    }

    public final void a0(float f2) {
        if (this.E0 != f2) {
            float A = A();
            this.E0 = f2;
            float A2 = A();
            invalidateSelf();
            if (A != A2) {
                F();
            }
        }
    }

    public final void b0(ColorStateList colorStateList) {
        if (this.f20440k0 != colorStateList) {
            this.f20440k0 = colorStateList;
            this.f20434g1 = null;
            onStateChange(getState());
        }
    }

    public final boolean c0() {
        return this.f20456y0 && this.f20457z0 != null && this.Y0;
    }

    public final boolean d0() {
        return this.f20444m0 && this.f20445n0 != null;
    }

    @Override // lh.i, android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        int i5;
        Canvas canvas2;
        int i6;
        float f2;
        float f10;
        int i10;
        Rect bounds = getBounds();
        if (bounds.isEmpty() || (i5 = this.f20426a1) == 0) {
            return;
        }
        if (i5 < 255) {
            canvas2 = canvas;
            i6 = canvas2.saveLayerAlpha(bounds.left, bounds.top, bounds.right, bounds.bottom, i5);
        } else {
            canvas2 = canvas;
            i6 = 0;
        }
        boolean z5 = this.f20443l1;
        Paint paint = this.M0;
        RectF rectF = this.O0;
        if (!z5) {
            paint.setColor(this.S0);
            paint.setStyle(Paint.Style.FILL);
            rectF.set(bounds);
            canvas2.drawRoundRect(rectF, C(), C(), paint);
        }
        if (!this.f20443l1) {
            paint.setColor(this.T0);
            paint.setStyle(Paint.Style.FILL);
            ColorFilter colorFilter = this.f20427b1;
            if (colorFilter == null) {
                colorFilter = this.f20428c1;
            }
            paint.setColorFilter(colorFilter);
            rectF.set(bounds);
            canvas2.drawRoundRect(rectF, C(), C(), paint);
        }
        if (this.f20443l1) {
            super.draw(canvas);
        }
        if (this.f20438j0 > 0.0f && !this.f20443l1) {
            paint.setColor(this.V0);
            paint.setStyle(Paint.Style.STROKE);
            if (!this.f20443l1) {
                ColorFilter colorFilter2 = this.f20427b1;
                if (colorFilter2 == null) {
                    colorFilter2 = this.f20428c1;
                }
                paint.setColorFilter(colorFilter2);
            }
            float f11 = bounds.left;
            float f12 = this.f20438j0 / 2.0f;
            rectF.set(f11 + f12, bounds.top + f12, bounds.right - f12, bounds.bottom - f12);
            float f13 = this.h0 - (this.f20438j0 / 2.0f);
            canvas2.drawRoundRect(rectF, f13, f13, paint);
        }
        paint.setColor(this.W0);
        paint.setStyle(Paint.Style.FILL);
        rectF.set(bounds);
        if (this.f20443l1) {
            RectF rectF2 = new RectF(bounds);
            g gVar = this.f14001e;
            lh.m mVar = gVar.a;
            float[] fArr = this.Z;
            float f14 = gVar.j;
            u4.b bVar = this.O;
            f1 f1Var = this.P;
            f2 = 2.0f;
            Path path = this.Q0;
            f1Var.b(mVar, fArr, f14, rectF2, bVar, path);
            f(canvas2, paint, path, this.f14001e.a, this.Z, h());
        } else {
            canvas2.drawRoundRect(rectF, C(), C(), paint);
            f2 = 2.0f;
        }
        if (d0()) {
            z(bounds, rectF);
            float f15 = rectF.left;
            float f16 = rectF.top;
            canvas2.translate(f15, f16);
            this.f20445n0.setBounds(0, 0, (int) rectF.width(), (int) rectF.height());
            this.f20445n0.draw(canvas2);
            canvas2.translate(-f15, -f16);
        }
        if (c0()) {
            z(bounds, rectF);
            float f17 = rectF.left;
            float f18 = rectF.top;
            canvas2.translate(f17, f18);
            this.f20457z0.setBounds(0, 0, (int) rectF.width(), (int) rectF.height());
            this.f20457z0.draw(canvas2);
            canvas2.translate(-f17, -f18);
        }
        if (this.f20439j1 && this.f20442l0 != null) {
            PointF pointF = this.P0;
            pointF.set(0.0f, 0.0f);
            Paint.Align align = Paint.Align.LEFT;
            CharSequence charSequence = this.f20442l0;
            m mVar2 = this.R0;
            if (charSequence != null) {
                float A = A() + this.D0 + this.G0;
                if (getLayoutDirection() == 0) {
                    pointF.x = bounds.left + A;
                } else {
                    pointF.x = bounds.right - A;
                    align = Paint.Align.RIGHT;
                }
                float centerY = bounds.centerY();
                TextPaint textPaint = mVar2.a;
                Paint.FontMetrics fontMetrics = this.N0;
                textPaint.getFontMetrics(fontMetrics);
                pointF.y = centerY - ((fontMetrics.descent + fontMetrics.ascent) / f2);
            }
            rectF.setEmpty();
            if (this.f20442l0 != null) {
                float A2 = A() + this.D0 + this.G0;
                float B = B() + this.K0 + this.H0;
                if (getLayoutDirection() == 0) {
                    rectF.left = bounds.left + A2;
                    rectF.right = bounds.right - B;
                } else {
                    rectF.left = bounds.left + B;
                    rectF.right = bounds.right - A2;
                }
                rectF.top = bounds.top;
                rectF.bottom = bounds.bottom;
            }
            ih.e eVar = mVar2.f3559g;
            TextPaint textPaint2 = mVar2.a;
            if (eVar != null) {
                textPaint2.drawableState = getState();
                mVar2.f3559g.d(this.L0, textPaint2, mVar2.f3554b);
            }
            textPaint2.setTextAlign(align);
            String charSequence2 = this.f20442l0.toString();
            if (mVar2.f3557e) {
                mVar2.a(charSequence2);
                f10 = mVar2.f3555c;
            } else {
                f10 = mVar2.f3555c;
            }
            boolean z6 = Math.round(f10) > Math.round(rectF.width());
            if (z6) {
                int save = canvas2.save();
                canvas2.clipRect(rectF);
                i10 = save;
            } else {
                i10 = 0;
            }
            CharSequence charSequence3 = this.f20442l0;
            if (z6 && this.f20437i1 != null) {
                charSequence3 = TextUtils.ellipsize(charSequence3, textPaint2, rectF.width(), this.f20437i1);
            }
            canvas.drawText(charSequence3, 0, charSequence3.length(), pointF.x, pointF.y, textPaint2);
            canvas2 = canvas;
            if (z6) {
                canvas2.restoreToCount(i10);
            }
        }
        if (e0()) {
            rectF.setEmpty();
            if (e0()) {
                float f19 = this.K0 + this.J0;
                if (getLayoutDirection() == 0) {
                    float f20 = bounds.right - f19;
                    rectF.right = f20;
                    rectF.left = f20 - this.f20453v0;
                } else {
                    float f21 = bounds.left + f19;
                    rectF.left = f21;
                    rectF.right = f21 + this.f20453v0;
                }
                float exactCenterY = bounds.exactCenterY();
                float f22 = this.f20453v0;
                float f23 = exactCenterY - (f22 / f2);
                rectF.top = f23;
                rectF.bottom = f23 + f22;
            }
            float f24 = rectF.left;
            float f25 = rectF.top;
            canvas2.translate(f24, f25);
            this.f20450s0.setBounds(0, 0, (int) rectF.width(), (int) rectF.height());
            this.f20451t0.setBounds(this.f20450s0.getBounds());
            this.f20451t0.jumpToCurrentState();
            this.f20451t0.draw(canvas2);
            canvas2.translate(-f24, -f25);
        }
        if (this.f20426a1 < 255) {
            canvas2.restoreToCount(i6);
        }
    }

    public final boolean e0() {
        return this.f20449r0 && this.f20450s0 != null;
    }

    @Override // lh.i, android.graphics.drawable.Drawable
    public final int getAlpha() {
        return this.f20426a1;
    }

    @Override // android.graphics.drawable.Drawable
    public final ColorFilter getColorFilter() {
        return this.f20427b1;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicHeight() {
        return (int) this.f20433g0;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicWidth() {
        float f2;
        float A = A() + this.D0 + this.G0;
        String charSequence = this.f20442l0.toString();
        m mVar = this.R0;
        if (mVar.f3557e) {
            mVar.a(charSequence);
            f2 = mVar.f3555c;
        } else {
            f2 = mVar.f3555c;
        }
        return Math.min(Math.round(B() + f2 + A + this.H0 + this.K0), this.f20441k1);
    }

    @Override // lh.i, android.graphics.drawable.Drawable
    public final int getOpacity() {
        return -3;
    }

    @Override // lh.i, android.graphics.drawable.Drawable
    public final void getOutline(Outline outline) {
        Outline outline2;
        if (this.f20443l1) {
            super.getOutline(outline);
            return;
        }
        Rect bounds = getBounds();
        if (bounds.isEmpty()) {
            outline2 = outline;
            outline2.setRoundRect(0, 0, getIntrinsicWidth(), (int) this.f20433g0, this.h0);
        } else {
            outline.setRoundRect(bounds, this.h0);
            outline2 = outline;
        }
        outline2.setAlpha(this.f20426a1 / 255.0f);
    }

    @Override // android.graphics.drawable.Drawable.Callback
    public final void invalidateDrawable(Drawable drawable) {
        Drawable.Callback callback = getCallback();
        if (callback != null) {
            callback.invalidateDrawable(this);
        }
    }

    @Override // lh.i, android.graphics.drawable.Drawable
    public final boolean isStateful() {
        ColorStateList colorStateList;
        if (D(this.f20430e0) || D(this.f20431f0) || D(this.f20436i0)) {
            return true;
        }
        ih.e eVar = this.R0.f3559g;
        if (eVar == null || (colorStateList = eVar.k) == null || !colorStateList.isStateful()) {
            return (this.f20456y0 && this.f20457z0 != null && this.f20455x0) || E(this.f20445n0) || E(this.f20457z0) || D(this.f20429d1);
        }
        return true;
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean onLayoutDirectionChanged(int i5) {
        boolean onLayoutDirectionChanged = super.onLayoutDirectionChanged(i5);
        if (d0()) {
            onLayoutDirectionChanged |= this.f20445n0.setLayoutDirection(i5);
        }
        if (c0()) {
            onLayoutDirectionChanged |= this.f20457z0.setLayoutDirection(i5);
        }
        if (e0()) {
            onLayoutDirectionChanged |= this.f20450s0.setLayoutDirection(i5);
        }
        if (!onLayoutDirectionChanged) {
            return true;
        }
        invalidateSelf();
        return true;
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean onLevelChange(int i5) {
        boolean onLevelChange = super.onLevelChange(i5);
        if (d0()) {
            onLevelChange |= this.f20445n0.setLevel(i5);
        }
        if (c0()) {
            onLevelChange |= this.f20457z0.setLevel(i5);
        }
        if (e0()) {
            onLevelChange |= this.f20450s0.setLevel(i5);
        }
        if (onLevelChange) {
            invalidateSelf();
        }
        return onLevelChange;
    }

    @Override // lh.i, android.graphics.drawable.Drawable
    public final boolean onStateChange(int[] iArr) {
        if (this.f20443l1) {
            super.onStateChange(iArr);
        }
        return G(iArr, this.f20432f1);
    }

    @Override // android.graphics.drawable.Drawable.Callback
    public final void scheduleDrawable(Drawable drawable, Runnable runnable, long j) {
        Drawable.Callback callback = getCallback();
        if (callback != null) {
            callback.scheduleDrawable(this, runnable, j);
        }
    }

    @Override // lh.i, android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        if (this.f20426a1 != i5) {
            this.f20426a1 = i5;
            invalidateSelf();
        }
    }

    @Override // lh.i, android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
        if (this.f20427b1 != colorFilter) {
            this.f20427b1 = colorFilter;
            invalidateSelf();
        }
    }

    @Override // lh.i, android.graphics.drawable.Drawable
    public final void setTintList(ColorStateList colorStateList) {
        if (this.f20429d1 != colorStateList) {
            this.f20429d1 = colorStateList;
            onStateChange(getState());
        }
    }

    @Override // lh.i, android.graphics.drawable.Drawable
    public final void setTintMode(PorterDuff.Mode mode) {
        if (this.e1 != mode) {
            this.e1 = mode;
            ColorStateList colorStateList = this.f20429d1;
            this.f20428c1 = (colorStateList == null || mode == null) ? null : new PorterDuffColorFilter(colorStateList.getColorForState(getState(), 0), mode);
            invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean setVisible(boolean z5, boolean z6) {
        boolean visible = super.setVisible(z5, z6);
        if (d0()) {
            visible |= this.f20445n0.setVisible(z5, z6);
        }
        if (c0()) {
            visible |= this.f20457z0.setVisible(z5, z6);
        }
        if (e0()) {
            visible |= this.f20450s0.setVisible(z5, z6);
        }
        if (visible) {
            invalidateSelf();
        }
        return visible;
    }

    @Override // android.graphics.drawable.Drawable.Callback
    public final void unscheduleDrawable(Drawable drawable, Runnable runnable) {
        Drawable.Callback callback = getCallback();
        if (callback != null) {
            callback.unscheduleDrawable(this, runnable);
        }
    }

    public final void y(Drawable drawable) {
        if (drawable == null) {
            return;
        }
        drawable.setCallback(this);
        drawable.setLayoutDirection(getLayoutDirection());
        drawable.setLevel(getLevel());
        drawable.setVisible(isVisible(), false);
        if (drawable == this.f20450s0) {
            if (drawable.isStateful()) {
                drawable.setState(this.f20432f1);
            }
            drawable.setTintList(this.f20452u0);
            return;
        }
        Drawable drawable2 = this.f20445n0;
        if (drawable == drawable2 && this.f20448q0) {
            drawable2.setTintList(this.f20446o0);
        }
        if (drawable.isStateful()) {
            drawable.setState(getState());
        }
    }

    public final void z(Rect rect, RectF rectF) {
        rectF.setEmpty();
        if (d0() || c0()) {
            float f2 = this.D0 + this.E0;
            Drawable drawable = this.Y0 ? this.f20457z0 : this.f20445n0;
            float f10 = this.f20447p0;
            if (f10 <= 0.0f && drawable != null) {
                f10 = drawable.getIntrinsicWidth();
            }
            if (getLayoutDirection() == 0) {
                float f11 = rect.left + f2;
                rectF.left = f11;
                rectF.right = f11 + f10;
            } else {
                float f12 = rect.right - f2;
                rectF.right = f12;
                rectF.left = f12 - f10;
            }
            Drawable drawable2 = this.Y0 ? this.f20457z0 : this.f20445n0;
            float f13 = this.f20447p0;
            if (f13 <= 0.0f && drawable2 != null) {
                f13 = (float) Math.ceil(TypedValue.applyDimension(1, 24, this.L0.getResources().getDisplayMetrics()));
                if (drawable2.getIntrinsicHeight() <= f13) {
                    f13 = drawable2.getIntrinsicHeight();
                }
            }
            float exactCenterY = rect.exactCenterY() - (f13 / 2.0f);
            rectF.top = exactCenterY;
            rectF.bottom = exactCenterY + f13;
        }
    }
}
