package og;

import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.text.TextPaint;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.FrameLayout;
import ch.l;
import ch.m;
import ch.q;
import com.discord.R;
import ih.e;
import java.lang.ref.WeakReference;
import java.text.NumberFormat;
import lh.i;

/* loaded from: classes3.dex */
public final class a extends Drawable implements l {
    public final int E;
    public float F;
    public float G;
    public float H;
    public WeakReference I;
    public WeakReference J;

    /* renamed from: d, reason: collision with root package name */
    public final WeakReference f15861d;

    /* renamed from: e, reason: collision with root package name */
    public final i f15862e;

    /* renamed from: i, reason: collision with root package name */
    public final m f15863i;

    /* renamed from: v, reason: collision with root package name */
    public final Rect f15864v;

    /* renamed from: w, reason: collision with root package name */
    public final c f15865w;

    /* renamed from: x, reason: collision with root package name */
    public float f15866x;

    /* renamed from: y, reason: collision with root package name */
    public float f15867y;

    public a(Context context, b bVar) {
        e eVar;
        WeakReference weakReference = new WeakReference(context);
        this.f15861d = weakReference;
        q.c(context, q.f3561b, "Theme.MaterialComponents");
        this.f15864v = new Rect();
        m mVar = new m(this);
        this.f15863i = mVar;
        Paint.Align align = Paint.Align.CENTER;
        TextPaint textPaint = mVar.a;
        textPaint.setTextAlign(align);
        c cVar = new c(context, bVar);
        this.f15865w = cVar;
        boolean f2 = f();
        b bVar2 = cVar.f15876b;
        i iVar = new i(lh.m.a(context, f2 ? bVar2.f15875y.intValue() : bVar2.f15873w.intValue(), f() ? bVar2.E.intValue() : bVar2.f15874x.intValue()).a());
        this.f15862e = iVar;
        i();
        Context context2 = (Context) weakReference.get();
        if (context2 != null && mVar.f3559g != (eVar = new e(context2, bVar2.f15872v.intValue()))) {
            mVar.b(eVar, context2);
            j();
            l();
            invalidateSelf();
        }
        int i5 = bVar2.I;
        if (i5 != -2) {
            this.E = ((int) Math.pow(10.0d, i5 - 1.0d)) - 1;
        } else {
            this.E = bVar2.J;
        }
        mVar.f3557e = true;
        l();
        invalidateSelf();
        h();
        textPaint.setAlpha(getAlpha());
        invalidateSelf();
        ColorStateList valueOf = ColorStateList.valueOf(bVar2.f15870e.intValue());
        if (iVar.f14001e.f13985d != valueOf) {
            iVar.q(valueOf);
            invalidateSelf();
        }
        j();
        WeakReference weakReference2 = this.I;
        if (weakReference2 != null && weakReference2.get() != null) {
            View view = (View) this.I.get();
            WeakReference weakReference3 = this.J;
            k(view, weakReference3 != null ? (FrameLayout) weakReference3.get() : null);
        }
        l();
        setVisible(bVar2.Q.booleanValue(), false);
    }

    @Override // ch.l
    public final void a() {
        invalidateSelf();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v1 */
    /* JADX WARN: Type inference failed for: r0v10 */
    /* JADX WARN: Type inference failed for: r0v11 */
    /* JADX WARN: Type inference failed for: r0v2, types: [android.view.ViewParent] */
    /* JADX WARN: Type inference failed for: r0v8, types: [android.view.ViewParent] */
    public final void b(View view, View view2) {
        float f2;
        float f10;
        View view3;
        boolean z5;
        FrameLayout d6 = d();
        if (d6 == null) {
            float y5 = view.getY();
            f10 = view.getX();
            view3 = view.getParent();
            f2 = y5;
        } else {
            f2 = 0.0f;
            f10 = 0.0f;
            view3 = d6;
        }
        while (true) {
            z5 = view3 instanceof View;
            if (!z5 || view3 == view2) {
                break;
            }
            ViewParent parent = view3.getParent();
            if (!(parent instanceof ViewGroup) || ((ViewGroup) parent).getClipChildren()) {
                break;
            }
            View view4 = view3;
            f2 += view4.getY();
            f10 += view4.getX();
            view3 = view3.getParent();
        }
        if (z5) {
            float f11 = (this.f15867y - this.H) + f2;
            float f12 = (this.f15866x - this.G) + f10;
            View view5 = view3;
            float height = ((this.f15867y + this.H) - view5.getHeight()) + f2;
            float width = ((this.f15866x + this.G) - view5.getWidth()) + f10;
            if (f11 < 0.0f) {
                this.f15867y = Math.abs(f11) + this.f15867y;
            }
            if (f12 < 0.0f) {
                this.f15866x = Math.abs(f12) + this.f15866x;
            }
            if (height > 0.0f) {
                this.f15867y -= Math.abs(height);
            }
            if (width > 0.0f) {
                this.f15866x -= Math.abs(width);
            }
        }
    }

    public final String c() {
        c cVar = this.f15865w;
        boolean a = cVar.a();
        b bVar = cVar.f15876b;
        WeakReference weakReference = this.f15861d;
        if (!a) {
            if (!g()) {
                return null;
            }
            if (this.E == -2 || e() <= this.E) {
                return NumberFormat.getInstance(bVar.K).format(e());
            }
            Context context = (Context) weakReference.get();
            return context == null ? "" : String.format(bVar.K, context.getString(R.string.mtrl_exceed_max_badge_number_suffix), Integer.valueOf(this.E), "+");
        }
        b bVar2 = cVar.f15876b;
        String str = bVar2.G;
        int i5 = bVar2.I;
        if (i5 == -2 || str == null || str.length() <= i5) {
            return str;
        }
        Context context2 = (Context) weakReference.get();
        if (context2 == null) {
            return "";
        }
        return String.format(context2.getString(R.string.m3_exceed_max_badge_text_suffix), str.substring(0, i5 - 1), "…");
    }

    public final FrameLayout d() {
        WeakReference weakReference = this.J;
        if (weakReference != null) {
            return (FrameLayout) weakReference.get();
        }
        return null;
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        String c6;
        if (getBounds().isEmpty() || getAlpha() == 0 || !isVisible()) {
            return;
        }
        this.f15862e.draw(canvas);
        if (!f() || (c6 = c()) == null) {
            return;
        }
        Rect rect = new Rect();
        m mVar = this.f15863i;
        mVar.a.getTextBounds(c6, 0, c6.length(), rect);
        float exactCenterY = this.f15867y - rect.exactCenterY();
        canvas.drawText(c6, this.f15866x, rect.bottom <= 0 ? (int) exactCenterY : Math.round(exactCenterY), mVar.a);
    }

    public final int e() {
        int i5 = this.f15865w.f15876b.H;
        if (i5 != -1) {
            return i5;
        }
        return 0;
    }

    public final boolean f() {
        return this.f15865w.a() || g();
    }

    public final boolean g() {
        c cVar = this.f15865w;
        return (cVar.a() || cVar.f15876b.H == -1) ? false : true;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getAlpha() {
        return this.f15865w.f15876b.F;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicHeight() {
        return this.f15864v.height();
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicWidth() {
        return this.f15864v.width();
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        return -3;
    }

    public final void h() {
        this.f15863i.f3557e = true;
        i();
        l();
        invalidateSelf();
    }

    public final void i() {
        Context context = (Context) this.f15861d.get();
        if (context == null) {
            return;
        }
        boolean f2 = f();
        c cVar = this.f15865w;
        this.f15862e.setShapeAppearanceModel(lh.m.a(context, f2 ? cVar.f15876b.f15875y.intValue() : cVar.f15876b.f15873w.intValue(), f() ? cVar.f15876b.E.intValue() : cVar.f15876b.f15874x.intValue()).a());
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean isStateful() {
        return false;
    }

    public final void j() {
        this.f15863i.a.setColor(this.f15865w.f15876b.f15871i.intValue());
        invalidateSelf();
    }

    public final void k(View view, FrameLayout frameLayout) {
        this.I = new WeakReference(view);
        this.J = new WeakReference(frameLayout);
        ViewGroup viewGroup = (ViewGroup) view.getParent();
        viewGroup.setClipChildren(false);
        viewGroup.setClipToPadding(false);
        l();
        invalidateSelf();
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x011e  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x014f  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x015f  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0202  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x0242  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x025a  */
    /* JADX WARN: Removed duplicated region for block: B:78:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:79:0x0222  */
    /* JADX WARN: Removed duplicated region for block: B:87:0x01c1  */
    /* JADX WARN: Removed duplicated region for block: B:93:0x01e1  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x0156  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void l() {
        float f2;
        int intValue;
        int intValue2;
        int intValue3;
        float f10;
        float f11;
        float f12;
        float f13;
        float f14;
        float f15;
        float f16;
        float f17;
        float f18;
        WeakReference weakReference = this.f15861d;
        Context context = (Context) weakReference.get();
        WeakReference weakReference2 = this.I;
        View view = weakReference2 != null ? (View) weakReference2.get() : null;
        if (context == null || view == null) {
            return;
        }
        Rect rect = new Rect();
        Rect rect2 = this.f15864v;
        rect.set(rect2);
        Rect rect3 = new Rect();
        view.getDrawingRect(rect3);
        WeakReference weakReference3 = this.J;
        ViewGroup viewGroup = weakReference3 != null ? (ViewGroup) weakReference3.get() : null;
        if (viewGroup != null) {
            viewGroup.offsetDescendantRectToMyCoords(view, rect3);
        }
        boolean f19 = f();
        c cVar = this.f15865w;
        float f20 = f19 ? cVar.f15878d : cVar.f15877c;
        this.F = f20;
        if (f20 != -1.0f) {
            this.G = f20;
            this.H = f20;
        } else {
            this.G = Math.round((f() ? cVar.f15881g : cVar.f15879e) / 2.0f);
            this.H = Math.round((f() ? cVar.f15882h : cVar.f15880f) / 2.0f);
        }
        if (f()) {
            String c6 = c();
            float f21 = this.G;
            m mVar = this.f15863i;
            if (mVar.f3557e) {
                mVar.a(c6);
                f17 = mVar.f3555c;
            } else {
                f17 = mVar.f3555c;
            }
            this.G = Math.max(f21, (f17 / 2.0f) + cVar.f15876b.R.intValue());
            float f22 = this.H;
            if (mVar.f3557e) {
                mVar.a(c6);
                f18 = mVar.f3556d;
            } else {
                f18 = mVar.f3556d;
            }
            float max = Math.max(f22, (f18 / 2.0f) + cVar.f15876b.S.intValue());
            this.H = max;
            this.G = Math.max(this.G, max);
        }
        b bVar = cVar.f15876b;
        b bVar2 = cVar.f15876b;
        int i5 = cVar.k;
        int intValue4 = bVar.U.intValue();
        if (f()) {
            intValue4 = bVar.W.intValue();
            Context context2 = (Context) weakReference.get();
            if (context2 != null) {
                f2 = -1.0f;
                intValue4 = mg.a.c(intValue4, intValue4 - bVar.Z.intValue(), mg.a.b(0.0f, 1.0f, 0.3f, 1.0f, context2.getResources().getConfiguration().fontScale - 1.0f));
                if (i5 == 0) {
                    intValue4 -= Math.round(this.H);
                }
                intValue = bVar.Y.intValue() + intValue4;
                intValue2 = bVar2.P.intValue();
                if (intValue2 != 8388691 || intValue2 == 8388693) {
                    this.f15867y = rect3.bottom - intValue;
                } else {
                    this.f15867y = rect3.top + intValue;
                }
                int intValue5 = !f() ? bVar.V.intValue() : bVar2.T.intValue();
                if (i5 == 1) {
                    intValue5 += f() ? cVar.j : cVar.f15883i;
                }
                int intValue6 = bVar.X.intValue() + intValue5;
                intValue3 = bVar2.P.intValue();
                if (intValue3 != 8388659 || intValue3 == 8388691) {
                    if (cVar.f15884l != 0) {
                        if (view.getLayoutDirection() == 0) {
                            f10 = rect3.left + this.G;
                            f11 = (this.H * 2.0f) - intValue6;
                            f12 = f10 - f11;
                            this.f15866x = f12;
                        } else {
                            f12 = (rect3.right - this.G) + ((this.H * 2.0f) - intValue6);
                            this.f15866x = f12;
                        }
                    } else if (view.getLayoutDirection() == 0) {
                        f12 = (rect3.left - this.G) + intValue6;
                        this.f15866x = f12;
                    } else {
                        f10 = rect3.right + this.G;
                        f11 = intValue6;
                        f12 = f10 - f11;
                        this.f15866x = f12;
                    }
                } else if (cVar.f15884l == 0) {
                    if (view.getLayoutDirection() == 0) {
                        f14 = rect3.right + this.G;
                        f15 = intValue6;
                        f16 = f14 - f15;
                        this.f15866x = f16;
                    } else {
                        f16 = (rect3.left - this.G) + intValue6;
                        this.f15866x = f16;
                    }
                } else if (view.getLayoutDirection() == 0) {
                    f16 = (rect3.right - this.G) + ((this.H * 2.0f) - intValue6);
                    this.f15866x = f16;
                } else {
                    f14 = rect3.left + this.G;
                    f15 = (this.H * 2.0f) - intValue6;
                    f16 = f14 - f15;
                    this.f15866x = f16;
                }
                if (bVar.a0.booleanValue()) {
                    b(view, null);
                } else {
                    ViewParent d6 = d();
                    if (d6 == null) {
                        d6 = view.getParent();
                    }
                    if ((d6 instanceof View) && (d6.getParent() instanceof View)) {
                        b(view, (View) d6.getParent());
                    }
                }
                float f23 = this.f15866x;
                float f24 = this.f15867y;
                float f25 = this.G;
                float f26 = this.H;
                rect2.set((int) (f23 - f25), (int) (f24 - f26), (int) (f23 + f25), (int) (f24 + f26));
                f13 = this.F;
                i iVar = this.f15862e;
                if (f13 != f2) {
                    lh.l g6 = iVar.f14001e.a.g();
                    g6.b(f13);
                    iVar.setShapeAppearanceModel(g6.a());
                }
                if (rect.equals(rect2)) {
                    iVar.setBounds(rect2);
                    return;
                }
                return;
            }
        }
        f2 = -1.0f;
        if (i5 == 0) {
        }
        intValue = bVar.Y.intValue() + intValue4;
        intValue2 = bVar2.P.intValue();
        if (intValue2 != 8388691) {
        }
        this.f15867y = rect3.bottom - intValue;
        if (!f()) {
        }
        if (i5 == 1) {
        }
        int intValue62 = bVar.X.intValue() + intValue5;
        intValue3 = bVar2.P.intValue();
        if (intValue3 != 8388659) {
        }
        if (cVar.f15884l != 0) {
        }
        if (bVar.a0.booleanValue()) {
        }
        float f232 = this.f15866x;
        float f242 = this.f15867y;
        float f252 = this.G;
        float f262 = this.H;
        rect2.set((int) (f232 - f252), (int) (f242 - f262), (int) (f232 + f252), (int) (f242 + f262));
        f13 = this.F;
        i iVar2 = this.f15862e;
        if (f13 != f2) {
        }
        if (rect.equals(rect2)) {
        }
    }

    @Override // android.graphics.drawable.Drawable, ch.l
    public final boolean onStateChange(int[] iArr) {
        return super.onStateChange(iArr);
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        c cVar = this.f15865w;
        cVar.a.F = i5;
        cVar.f15876b.F = i5;
        this.f15863i.a.setAlpha(getAlpha());
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
    }
}
