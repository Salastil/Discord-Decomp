package ch;

import android.animation.TimeInterpolator;
import android.content.res.ColorStateList;
import android.content.res.Configuration;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Typeface;
import android.os.Build;
import android.text.Layout;
import android.text.StaticLayout;
import android.text.TextPaint;
import android.text.TextUtils;
import android.view.Gravity;
import android.view.ViewGroup;

/* loaded from: classes3.dex */
public final class c {
    public Typeface A;
    public Typeface B;
    public Typeface C;
    public Typeface D;
    public ih.b E;
    public ih.b F;
    public CharSequence H;
    public CharSequence I;
    public boolean J;
    public float L;
    public float M;
    public float N;
    public float O;
    public float P;
    public int Q;
    public int R;
    public int[] S;
    public boolean T;
    public final TextPaint U;
    public final TextPaint V;
    public TimeInterpolator W;
    public TimeInterpolator X;
    public float Y;
    public float Z;
    public final ViewGroup a;
    public float a0;

    /* renamed from: b, reason: collision with root package name */
    public float f3498b;

    /* renamed from: b0, reason: collision with root package name */
    public ColorStateList f3499b0;

    /* renamed from: c, reason: collision with root package name */
    public boolean f3500c;

    /* renamed from: c0, reason: collision with root package name */
    public float f3501c0;

    /* renamed from: d, reason: collision with root package name */
    public float f3502d;

    /* renamed from: d0, reason: collision with root package name */
    public float f3503d0;

    /* renamed from: e, reason: collision with root package name */
    public float f3504e;

    /* renamed from: e0, reason: collision with root package name */
    public float f3505e0;

    /* renamed from: f, reason: collision with root package name */
    public int f3506f;

    /* renamed from: f0, reason: collision with root package name */
    public ColorStateList f3507f0;

    /* renamed from: g, reason: collision with root package name */
    public final Rect f3508g;

    /* renamed from: g0, reason: collision with root package name */
    public float f3509g0;

    /* renamed from: h, reason: collision with root package name */
    public final Rect f3510h;
    public float h0;

    /* renamed from: i, reason: collision with root package name */
    public Rect f3511i;

    /* renamed from: i0, reason: collision with root package name */
    public float f3512i0;
    public final RectF j;

    /* renamed from: j0, reason: collision with root package name */
    public StaticLayout f3513j0;

    /* renamed from: k0, reason: collision with root package name */
    public float f3514k0;

    /* renamed from: l0, reason: collision with root package name */
    public float f3516l0;

    /* renamed from: m0, reason: collision with root package name */
    public float f3518m0;

    /* renamed from: n0, reason: collision with root package name */
    public CharSequence f3520n0;

    /* renamed from: o, reason: collision with root package name */
    public ColorStateList f3521o;

    /* renamed from: p, reason: collision with root package name */
    public ColorStateList f3523p;

    /* renamed from: q, reason: collision with root package name */
    public int f3525q;

    /* renamed from: r, reason: collision with root package name */
    public float f3527r;

    /* renamed from: s, reason: collision with root package name */
    public float f3529s;

    /* renamed from: t, reason: collision with root package name */
    public float f3531t;

    /* renamed from: u, reason: collision with root package name */
    public float f3533u;

    /* renamed from: v, reason: collision with root package name */
    public float f3535v;

    /* renamed from: v0, reason: collision with root package name */
    public boolean f3536v0;

    /* renamed from: w, reason: collision with root package name */
    public float f3537w;

    /* renamed from: x, reason: collision with root package name */
    public Typeface f3538x;

    /* renamed from: y, reason: collision with root package name */
    public Typeface f3539y;

    /* renamed from: z, reason: collision with root package name */
    public Typeface f3540z;
    public int k = 16;

    /* renamed from: l, reason: collision with root package name */
    public int f3515l = 16;

    /* renamed from: m, reason: collision with root package name */
    public float f3517m = 15.0f;

    /* renamed from: n, reason: collision with root package name */
    public float f3519n = 15.0f;
    public TextUtils.TruncateAt G = TextUtils.TruncateAt.END;
    public boolean K = true;

    /* renamed from: o0, reason: collision with root package name */
    public int f3522o0 = 1;

    /* renamed from: p0, reason: collision with root package name */
    public int f3524p0 = 1;

    /* renamed from: q0, reason: collision with root package name */
    public float f3526q0 = 0.0f;

    /* renamed from: r0, reason: collision with root package name */
    public float f3528r0 = 1.0f;

    /* renamed from: s0, reason: collision with root package name */
    public int f3530s0 = 1;

    /* renamed from: t0, reason: collision with root package name */
    public int f3532t0 = -1;

    /* renamed from: u0, reason: collision with root package name */
    public int f3534u0 = -1;

    public c(ViewGroup viewGroup) {
        this.a = viewGroup;
        TextPaint textPaint = new TextPaint(129);
        this.U = textPaint;
        this.V = new TextPaint(textPaint);
        this.f3510h = new Rect();
        this.f3508g = new Rect();
        this.j = new RectF();
        float f2 = this.f3502d;
        this.f3504e = k0.d.c(1.0f, f2, 0.5f, f2);
        k(viewGroup.getContext().getResources().getConfiguration());
    }

    public static int a(int i5, int i6, float f2) {
        float f10 = 1.0f - f2;
        return Color.argb(Math.round((Color.alpha(i6) * f2) + (Color.alpha(i5) * f10)), Math.round((Color.red(i6) * f2) + (Color.red(i5) * f10)), Math.round((Color.green(i6) * f2) + (Color.green(i5) * f10)), Math.round((Color.blue(i6) * f2) + (Color.blue(i5) * f10)));
    }

    public static float j(float f2, float f10, float f11, TimeInterpolator timeInterpolator) {
        if (timeInterpolator != null) {
            f11 = timeInterpolator.getInterpolation(f11);
        }
        return mg.a.a(f2, f10, f11);
    }

    public static boolean m(Rect rect, int i5, int i6, int i10, int i11) {
        return rect.left == i5 && rect.top == i6 && rect.right == i10 && rect.bottom == i11;
    }

    public final void A(float f2) {
        float c6 = jb.a.c(f2, 0.0f, 1.0f);
        if (c6 != this.f3498b) {
            this.f3498b = c6;
            b();
        }
    }

    public final void B(CharSequence charSequence) {
        if (charSequence == null || !TextUtils.equals(this.H, charSequence)) {
            this.H = charSequence;
            this.I = null;
            l(false);
        }
    }

    public final boolean C() {
        return this.f3524p0 == 1;
    }

    public final void b() {
        float f2;
        float f10 = this.f3498b;
        boolean z5 = this.f3500c;
        Rect rect = this.f3510h;
        Rect rect2 = this.f3508g;
        RectF rectF = this.j;
        if (z5) {
            if (f10 < this.f3504e) {
                rect = rect2;
            }
            rectF.set(rect);
        } else {
            rectF.left = j(rect2.left, rect.left, f10, this.W);
            rectF.top = j(this.f3527r, this.f3529s, f10, this.W);
            rectF.right = j(rect2.right, rect.right, f10, this.W);
            rectF.bottom = j(rect2.bottom, rect.bottom, f10, this.W);
        }
        boolean z6 = this.f3500c;
        ViewGroup viewGroup = this.a;
        if (!z6) {
            this.f3535v = j(this.f3531t, this.f3533u, f10, this.W);
            this.f3537w = j(this.f3527r, this.f3529s, f10, this.W);
            d(f10, false);
            viewGroup.postInvalidateOnAnimation();
            f2 = f10;
        } else if (f10 < this.f3504e) {
            this.f3535v = this.f3531t;
            this.f3537w = this.f3527r;
            d(0.0f, false);
            viewGroup.postInvalidateOnAnimation();
            f2 = 0.0f;
        } else {
            this.f3535v = this.f3533u;
            this.f3537w = this.f3529s - Math.max(0, this.f3506f);
            d(1.0f, false);
            viewGroup.postInvalidateOnAnimation();
            f2 = 1.0f;
        }
        q2.a aVar = mg.a.f14493b;
        this.f3516l0 = 1.0f - j(0.0f, 1.0f, 1.0f - f10, aVar);
        viewGroup.postInvalidateOnAnimation();
        this.f3518m0 = j(1.0f, 0.0f, f10, aVar);
        viewGroup.postInvalidateOnAnimation();
        ColorStateList colorStateList = this.f3523p;
        ColorStateList colorStateList2 = this.f3521o;
        TextPaint textPaint = this.U;
        if (colorStateList != colorStateList2) {
            textPaint.setColor(a(h(colorStateList2), h(this.f3523p), f2));
        } else {
            textPaint.setColor(h(colorStateList));
        }
        float f11 = this.f3509g0;
        float f12 = this.h0;
        if (f11 != f12) {
            textPaint.setLetterSpacing(j(f12, f11, f10, aVar));
        } else {
            textPaint.setLetterSpacing(f11);
        }
        this.N = mg.a.a(this.f3501c0, this.Y, f10);
        this.O = mg.a.a(this.f3503d0, this.Z, f10);
        this.P = mg.a.a(this.f3505e0, this.a0, f10);
        int a = a(h(this.f3507f0), h(this.f3499b0), f10);
        this.Q = a;
        textPaint.setShadowLayer(this.N, this.O, this.P, a);
        if (this.f3500c) {
            int alpha = textPaint.getAlpha();
            float f13 = this.f3504e;
            textPaint.setAlpha((int) ((f10 <= f13 ? mg.a.b(1.0f, 0.0f, this.f3502d, f13, f10) : mg.a.b(0.0f, 1.0f, f13, 1.0f, f10)) * alpha));
            if (Build.VERSION.SDK_INT >= 31) {
                textPaint.setShadowLayer(this.N, this.O, this.P, com.facebook.imagepipeline.nativecode.c.k(this.Q, textPaint.getAlpha()));
            }
        }
        viewGroup.postInvalidateOnAnimation();
    }

    public final boolean c(CharSequence charSequence) {
        boolean z5 = this.a.getLayoutDirection() == 1;
        if (this.K) {
            return (z5 ? j1.d.f12383d : j1.d.f12382c).o(charSequence.length(), charSequence);
        }
        return z5;
    }

    public final void d(float f2, boolean z5) {
        float f10;
        Typeface typeface;
        float f11;
        if (this.H == null) {
            return;
        }
        float width = this.f3510h.width();
        float width2 = this.f3508g.width();
        if (Math.abs(f2 - 1.0f) < 1.0E-5f) {
            f10 = C() ? this.f3519n : this.f3517m;
            f11 = C() ? this.f3509g0 : this.h0;
            this.L = C() ? 1.0f : j(this.f3517m, this.f3519n, f2, this.X) / this.f3517m;
            if (!C()) {
                width = width2;
            }
            typeface = this.f3538x;
            width2 = width;
        } else {
            f10 = this.f3517m;
            float f12 = this.h0;
            typeface = this.A;
            if (Math.abs(f2 - 0.0f) < 1.0E-5f) {
                this.L = 1.0f;
            } else {
                this.L = j(this.f3517m, this.f3519n, f2, this.X) / this.f3517m;
            }
            float f13 = this.f3519n / this.f3517m;
            float f14 = width2 * f13;
            if (!z5 && !this.f3500c && f14 > width && C()) {
                width2 = Math.min(width / f13, width2);
            }
            f11 = f12;
        }
        int i5 = f2 < 0.5f ? this.f3522o0 : this.f3524p0;
        TextPaint textPaint = this.U;
        if (width2 > 0.0f) {
            boolean z6 = this.M != f10;
            boolean z7 = this.f3512i0 != f11;
            boolean z8 = this.D != typeface;
            StaticLayout staticLayout = this.f3513j0;
            boolean z10 = z6 || z7 || (staticLayout != null && (width2 > ((float) staticLayout.getWidth()) ? 1 : (width2 == ((float) staticLayout.getWidth()) ? 0 : -1)) != 0) || z8 || (this.R != i5) || this.T;
            this.M = f10;
            this.f3512i0 = f11;
            this.D = typeface;
            this.T = false;
            this.R = i5;
            textPaint.setLinearText(this.L != 1.0f);
            r7 = z10;
        }
        if (this.I == null || r7) {
            textPaint.setTextSize(this.M);
            textPaint.setTypeface(this.D);
            textPaint.setLetterSpacing(this.f3512i0);
            boolean c6 = c(this.H);
            this.J = c6;
            StaticLayout e9 = e(((this.f3522o0 > 1 || this.f3524p0 > 1) && (!c6 || this.f3500c)) ? i5 : 1, textPaint, this.H, width2 * (C() ? 1.0f : this.L), this.J);
            this.f3513j0 = e9;
            this.I = e9.getText();
        }
    }

    public final StaticLayout e(int i5, TextPaint textPaint, CharSequence charSequence, float f2, boolean z5) {
        Layout.Alignment alignment;
        if (i5 == 1) {
            alignment = Layout.Alignment.ALIGN_NORMAL;
        } else {
            int absoluteGravity = Gravity.getAbsoluteGravity(this.k, this.J ? 1 : 0) & 7;
            alignment = absoluteGravity != 1 ? absoluteGravity != 5 ? this.J ? Layout.Alignment.ALIGN_OPPOSITE : Layout.Alignment.ALIGN_NORMAL : this.J ? Layout.Alignment.ALIGN_NORMAL : Layout.Alignment.ALIGN_OPPOSITE : Layout.Alignment.ALIGN_CENTER;
        }
        i iVar = new i(charSequence, textPaint, (int) f2);
        iVar.f3550l = this.G;
        iVar.k = z5;
        iVar.f3545e = alignment;
        iVar.j = false;
        iVar.f3546f = i5;
        float f10 = this.f3526q0;
        float f11 = this.f3528r0;
        iVar.f3547g = f10;
        iVar.f3548h = f11;
        iVar.f3549i = this.f3530s0;
        iVar.f3551m = null;
        StaticLayout a = iVar.a();
        a.getClass();
        return a;
    }

    public final void f(Canvas canvas) {
        int save = canvas.save();
        if (this.I != null) {
            RectF rectF = this.j;
            if (rectF.width() <= 0.0f || rectF.height() <= 0.0f) {
                return;
            }
            float f2 = this.M;
            TextPaint textPaint = this.U;
            textPaint.setTextSize(f2);
            float f10 = this.f3535v;
            float f11 = this.f3537w;
            float f12 = this.L;
            if (f12 != 1.0f && !this.f3500c) {
                canvas.scale(f12, f12, f10, f11);
            }
            if ((this.f3522o0 > 1 || this.f3524p0 > 1) && ((!this.J || this.f3500c) && C() && (!this.f3500c || this.f3498b > this.f3504e))) {
                float lineStart = this.f3535v - this.f3513j0.getLineStart(0);
                int alpha = textPaint.getAlpha();
                canvas.translate(lineStart, f11);
                if (!this.f3500c) {
                    textPaint.setAlpha((int) (this.f3518m0 * alpha));
                    if (Build.VERSION.SDK_INT >= 31) {
                        textPaint.setShadowLayer(this.N, this.O, this.P, com.facebook.imagepipeline.nativecode.c.k(this.Q, textPaint.getAlpha()));
                    }
                    this.f3513j0.draw(canvas);
                }
                if (!this.f3500c) {
                    textPaint.setAlpha((int) (this.f3516l0 * alpha));
                }
                int i5 = Build.VERSION.SDK_INT;
                if (i5 >= 31) {
                    textPaint.setShadowLayer(this.N, this.O, this.P, com.facebook.imagepipeline.nativecode.c.k(this.Q, textPaint.getAlpha()));
                }
                int lineBaseline = this.f3513j0.getLineBaseline(0);
                CharSequence charSequence = this.f3520n0;
                float f13 = lineBaseline;
                canvas.drawText(charSequence, 0, charSequence.length(), 0.0f, f13, textPaint);
                if (i5 >= 31) {
                    textPaint.setShadowLayer(this.N, this.O, this.P, this.Q);
                }
                if (!this.f3500c) {
                    String trim = this.f3520n0.toString().trim();
                    if (trim.endsWith("…")) {
                        trim = trim.substring(0, trim.length() - 1);
                    }
                    String str = trim;
                    textPaint.setAlpha(alpha);
                    canvas.drawText(str, 0, Math.min(this.f3513j0.getLineEnd(0), str.length()), 0.0f, f13, (Paint) textPaint);
                }
                canvas = canvas;
            } else {
                canvas.translate(f10, f11);
                this.f3513j0.draw(canvas);
            }
            canvas.restoreToCount(save);
        }
    }

    public final float g() {
        int i5 = this.f3532t0;
        if (i5 != -1) {
            return i5;
        }
        float f2 = this.f3519n;
        TextPaint textPaint = this.V;
        textPaint.setTextSize(f2);
        textPaint.setTypeface(this.f3538x);
        textPaint.setLetterSpacing(this.f3509g0);
        return -textPaint.ascent();
    }

    public final int h(ColorStateList colorStateList) {
        if (colorStateList == null) {
            return 0;
        }
        int[] iArr = this.S;
        return iArr != null ? colorStateList.getColorForState(iArr, 0) : colorStateList.getDefaultColor();
    }

    public final float i() {
        float f2 = this.f3517m;
        TextPaint textPaint = this.V;
        textPaint.setTextSize(f2);
        textPaint.setTypeface(this.A);
        textPaint.setLetterSpacing(this.h0);
        return textPaint.descent() + (-textPaint.ascent());
    }

    public final void k(Configuration configuration) {
        if (Build.VERSION.SDK_INT >= 31) {
            Typeface typeface = this.f3540z;
            if (typeface != null) {
                this.f3539y = ih.f.a(configuration, typeface);
            }
            Typeface typeface2 = this.C;
            if (typeface2 != null) {
                this.B = ih.f.a(configuration, typeface2);
            }
            Typeface typeface3 = this.f3539y;
            if (typeface3 == null) {
                typeface3 = this.f3540z;
            }
            this.f3538x = typeface3;
            Typeface typeface4 = this.B;
            if (typeface4 == null) {
                typeface4 = this.C;
            }
            this.A = typeface4;
            l(true);
        }
    }

    public final void l(boolean z5) {
        float measureText;
        ViewGroup viewGroup = this.a;
        if ((viewGroup.getHeight() <= 0 || viewGroup.getWidth() <= 0) && !z5) {
            return;
        }
        d(1.0f, z5);
        CharSequence charSequence = this.I;
        TextPaint textPaint = this.U;
        if (charSequence != null && this.f3513j0 != null) {
            this.f3520n0 = C() ? TextUtils.ellipsize(this.I, textPaint, this.f3513j0.getWidth(), this.G) : this.I;
        }
        CharSequence charSequence2 = this.f3520n0;
        if (charSequence2 != null) {
            this.f3514k0 = textPaint.measureText(charSequence2, 0, charSequence2.length());
        } else {
            this.f3514k0 = 0.0f;
        }
        int absoluteGravity = Gravity.getAbsoluteGravity(this.f3515l, this.J ? 1 : 0);
        Rect rect = this.f3511i;
        Rect rect2 = this.f3510h;
        if (rect == null) {
            rect = rect2;
        }
        int i5 = absoluteGravity & 112;
        if (i5 == 48) {
            this.f3529s = rect.top;
        } else if (i5 != 80) {
            this.f3529s = rect.centerY() - ((textPaint.descent() - textPaint.ascent()) / 2.0f);
        } else {
            this.f3529s = textPaint.ascent() + rect.bottom;
        }
        int i6 = absoluteGravity & 8388615;
        if (i6 == 1) {
            this.f3533u = rect.centerX() - (this.f3514k0 / 2.0f);
        } else if (i6 != 5) {
            this.f3533u = rect.left;
        } else {
            this.f3533u = rect.right - this.f3514k0;
        }
        if (this.f3514k0 <= rect2.width()) {
            float f2 = this.f3533u;
            float max = Math.max(0.0f, rect2.left - f2) + f2;
            this.f3533u = max;
            this.f3533u = Math.min(0.0f, rect2.right - (this.f3514k0 + max)) + max;
        }
        float f10 = this.f3519n;
        TextPaint textPaint2 = this.V;
        textPaint2.setTextSize(f10);
        textPaint2.setTypeface(this.f3538x);
        textPaint2.setLetterSpacing(this.f3509g0);
        if (textPaint2.descent() + (-textPaint2.ascent()) <= rect2.height()) {
            float f11 = this.f3529s;
            float max2 = Math.max(0.0f, rect2.top - f11) + f11;
            this.f3529s = max2;
            this.f3529s = Math.min(0.0f, rect2.bottom - (g() + max2)) + max2;
        }
        d(0.0f, z5);
        float height = this.f3513j0 != null ? r15.getHeight() : 0.0f;
        StaticLayout staticLayout = this.f3513j0;
        if (staticLayout == null || this.f3522o0 <= 1) {
            CharSequence charSequence3 = this.I;
            measureText = charSequence3 != null ? textPaint.measureText(charSequence3, 0, charSequence3.length()) : 0.0f;
        } else {
            measureText = staticLayout.getWidth();
        }
        StaticLayout staticLayout2 = this.f3513j0;
        this.f3525q = staticLayout2 != null ? staticLayout2.getLineCount() : 0;
        int absoluteGravity2 = Gravity.getAbsoluteGravity(this.k, this.J ? 1 : 0);
        int i10 = absoluteGravity2 & 112;
        Rect rect3 = this.f3508g;
        if (i10 == 48) {
            this.f3527r = rect3.top;
        } else if (i10 != 80) {
            this.f3527r = rect3.centerY() - (height / 2.0f);
        } else {
            this.f3527r = (rect3.bottom - height) + (this.f3536v0 ? textPaint.descent() : 0.0f);
        }
        int i11 = absoluteGravity2 & 8388615;
        if (i11 == 1) {
            this.f3531t = rect3.centerX() - (measureText / 2.0f);
        } else if (i11 != 5) {
            this.f3531t = rect3.left;
        } else {
            this.f3531t = rect3.right - measureText;
        }
        d(this.f3498b, false);
        viewGroup.postInvalidateOnAnimation();
        b();
    }

    public final void n(ColorStateList colorStateList) {
        if (this.f3523p == colorStateList && this.f3521o == colorStateList) {
            return;
        }
        this.f3523p = colorStateList;
        this.f3521o = colorStateList;
        l(false);
    }

    public final void o(int i5, int i6, int i10, int i11) {
        Rect rect = this.f3510h;
        if (m(rect, i5, i6, i10, i11)) {
            return;
        }
        rect.set(i5, i6, i10, i11);
        this.T = true;
    }

    public final void p(int i5, int i6, int i10, int i11) {
        if (this.f3511i == null) {
            this.f3511i = new Rect(i5, i6, i10, i11);
            this.T = true;
        }
        if (m(this.f3511i, i5, i6, i10, i11)) {
            return;
        }
        this.f3511i.set(i5, i6, i10, i11);
        this.T = true;
    }

    public final void q(int i5) {
        ViewGroup viewGroup = this.a;
        ih.e eVar = new ih.e(viewGroup.getContext(), i5);
        ColorStateList colorStateList = eVar.k;
        if (colorStateList != null) {
            this.f3523p = colorStateList;
        }
        float f2 = eVar.f10810l;
        if (f2 != 0.0f) {
            this.f3519n = f2;
        }
        ColorStateList colorStateList2 = eVar.a;
        if (colorStateList2 != null) {
            this.f3499b0 = colorStateList2;
        }
        this.Z = eVar.f10806f;
        this.a0 = eVar.f10807g;
        this.Y = eVar.f10808h;
        this.f3509g0 = eVar.j;
        ih.b bVar = this.F;
        if (bVar != null) {
            bVar.f10795d = true;
        }
        gj.c cVar = new gj.c(7, this);
        eVar.a();
        this.F = new ih.b(cVar, eVar.f10814p);
        eVar.b(viewGroup.getContext(), this.F);
        l(false);
    }

    public final void r(ColorStateList colorStateList) {
        if (this.f3523p != colorStateList) {
            this.f3523p = colorStateList;
            l(false);
        }
    }

    public final void s(int i5) {
        if (this.f3515l != i5) {
            this.f3515l = i5;
            l(false);
        }
    }

    public final boolean t(Typeface typeface) {
        ih.b bVar = this.F;
        if (bVar != null) {
            bVar.f10795d = true;
        }
        if (this.f3540z == typeface) {
            return false;
        }
        this.f3540z = typeface;
        Typeface a = ih.f.a(this.a.getContext().getResources().getConfiguration(), typeface);
        this.f3539y = a;
        if (a == null) {
            a = this.f3540z;
        }
        this.f3538x = a;
        return true;
    }

    public final void u(int i5, int i6, int i10, int i11, boolean z5) {
        Rect rect = this.f3508g;
        if (m(rect, i5, i6, i10, i11) && z5 == this.f3536v0) {
            return;
        }
        rect.set(i5, i6, i10, i11);
        this.T = true;
        this.f3536v0 = z5;
    }

    public final void v(int i5) {
        if (i5 != this.f3522o0) {
            this.f3522o0 = i5;
            l(false);
        }
    }

    public final void w(int i5) {
        ViewGroup viewGroup = this.a;
        ih.e eVar = new ih.e(viewGroup.getContext(), i5);
        ColorStateList colorStateList = eVar.k;
        if (colorStateList != null) {
            this.f3521o = colorStateList;
        }
        float f2 = eVar.f10810l;
        if (f2 != 0.0f) {
            this.f3517m = f2;
        }
        ColorStateList colorStateList2 = eVar.a;
        if (colorStateList2 != null) {
            this.f3507f0 = colorStateList2;
        }
        this.f3503d0 = eVar.f10806f;
        this.f3505e0 = eVar.f10807g;
        this.f3501c0 = eVar.f10808h;
        this.h0 = eVar.j;
        ih.b bVar = this.E;
        if (bVar != null) {
            bVar.f10795d = true;
        }
        ha.l lVar = new ha.l(this);
        eVar.a();
        this.E = new ih.b(lVar, eVar.f10814p);
        eVar.b(viewGroup.getContext(), this.E);
        l(false);
    }

    public final void x(int i5) {
        if (this.k != i5) {
            this.k = i5;
            l(false);
        }
    }

    public final void y(float f2) {
        if (this.f3517m != f2) {
            this.f3517m = f2;
            l(false);
        }
    }

    public final boolean z(Typeface typeface) {
        ih.b bVar = this.E;
        if (bVar != null) {
            bVar.f10795d = true;
        }
        if (this.C == typeface) {
            return false;
        }
        this.C = typeface;
        Typeface a = ih.f.a(this.a.getContext().getResources().getConfiguration(), typeface);
        this.B = a;
        if (a == null) {
            a = this.C;
        }
        this.A = a;
        return true;
    }
}
