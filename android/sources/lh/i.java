package lh;

import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Matrix;
import android.graphics.Outline;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.graphics.PorterDuffXfermode;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Region;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Looper;
import android.util.AttributeSet;
import android.util.Log;
import android.util.StateSet;
import androidx.dynamicanimation.animation.SpringAnimation;
import hc.f1;
import java.util.BitSet;
import java.util.Objects;

/* loaded from: classes3.dex */
public class i extends Drawable implements w {

    /* renamed from: c0, reason: collision with root package name */
    public static final Paint f13997c0;

    /* renamed from: d0, reason: collision with root package name */
    public static final h[] f13998d0;
    public final Matrix E;
    public final Path F;
    public final Path G;
    public final RectF H;
    public final RectF I;
    public final Region J;
    public final Region K;
    public final Paint L;
    public final Paint M;
    public final kh.a N;
    public final u4.b O;
    public final f1 P;
    public PorterDuffColorFilter Q;
    public PorterDuffColorFilter R;
    public int S;
    public final RectF T;
    public boolean U;
    public boolean V;
    public m W;
    public j2.i X;
    public final SpringAnimation[] Y;
    public float[] Z;
    public float[] a0;

    /* renamed from: b0, reason: collision with root package name */
    public ni.a f13999b0;

    /* renamed from: d, reason: collision with root package name */
    public final ha.l f14000d;

    /* renamed from: e, reason: collision with root package name */
    public g f14001e;

    /* renamed from: i, reason: collision with root package name */
    public final u[] f14002i;

    /* renamed from: v, reason: collision with root package name */
    public final u[] f14003v;

    /* renamed from: w, reason: collision with root package name */
    public final BitSet f14004w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f14005x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f14006y;

    static {
        Paint paint = new Paint(1);
        f13997c0 = paint;
        paint.setColor(-1);
        paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.DST_OUT));
        f13998d0 = new h[4];
        int i5 = 0;
        while (true) {
            h[] hVarArr = f13998d0;
            if (i5 >= hVarArr.length) {
                return;
            }
            hVarArr[i5] = new h(i5);
            i5++;
        }
    }

    public i() {
        this(new m());
    }

    public static float c(RectF rectF, m mVar, float[] fArr) {
        if (fArr == null) {
            if (mVar.f(rectF)) {
                return mVar.f14019e.a(rectF);
            }
            return -1.0f;
        }
        if (fArr.length > 1) {
            float f2 = fArr[0];
            for (int i5 = 1; i5 < fArr.length; i5++) {
                if (fArr[i5] != f2) {
                    return -1.0f;
                }
            }
        }
        if (mVar.e()) {
            return fArr[0];
        }
        return -1.0f;
    }

    public final void b(Path path, RectF rectF) {
        g gVar = this.f14001e;
        this.P.b(gVar.a, this.Z, gVar.j, rectF, this.O, path);
        if (this.f14001e.f13990i != 1.0f) {
            Matrix matrix = this.E;
            matrix.reset();
            float f2 = this.f14001e.f13990i;
            matrix.setScale(f2, f2, rectF.width() / 2.0f, rectF.height() / 2.0f);
            path.transform(matrix);
        }
        path.computeBounds(this.T, true);
    }

    public final int d(int i5) {
        g gVar = this.f14001e;
        float f2 = gVar.f13993n + 0.0f + gVar.f13992m;
        bh.a aVar = gVar.f13984c;
        return aVar != null ? aVar.a(f2, i5) : i5;
    }

    @Override // android.graphics.drawable.Drawable
    public void draw(Canvas canvas) {
        Paint paint;
        PorterDuffColorFilter porterDuffColorFilter = this.Q;
        Paint paint2 = this.L;
        paint2.setColorFilter(porterDuffColorFilter);
        int alpha = paint2.getAlpha();
        int i5 = this.f14001e.f13991l;
        paint2.setAlpha(((i5 + (i5 >>> 7)) * alpha) >>> 8);
        PorterDuffColorFilter porterDuffColorFilter2 = this.R;
        Paint paint3 = this.M;
        paint3.setColorFilter(porterDuffColorFilter2);
        paint3.setStrokeWidth(this.f14001e.k);
        int alpha2 = paint3.getAlpha();
        int i6 = this.f14001e.f13991l;
        paint3.setAlpha(((i6 + (i6 >>> 7)) * alpha2) >>> 8);
        Paint.Style style = this.f14001e.f13996q;
        if (style == Paint.Style.FILL_AND_STROKE || style == Paint.Style.FILL) {
            boolean z5 = this.f14005x;
            paint = paint2;
            Path path = this.F;
            if (z5) {
                b(path, h());
                this.f14005x = false;
            }
            g gVar = this.f14001e;
            gVar.getClass();
            if (gVar.f13994o > 0 && !n() && !path.isConvex() && Build.VERSION.SDK_INT < 29) {
                canvas.save();
                double d6 = 0;
                canvas.translate((int) (Math.sin(Math.toRadians(d6)) * this.f14001e.f13995p), (int) (Math.cos(Math.toRadians(d6)) * this.f14001e.f13995p));
                if (this.U) {
                    RectF rectF = this.T;
                    int width = (int) (rectF.width() - getBounds().width());
                    int height = (int) (rectF.height() - getBounds().height());
                    if (width < 0 || height < 0) {
                        throw new IllegalStateException("Invalid shadow bounds. Check that the treatments result in a valid path.");
                    }
                    Bitmap createBitmap = Bitmap.createBitmap((this.f14001e.f13994o * 2) + ((int) rectF.width()) + width, (this.f14001e.f13994o * 2) + ((int) rectF.height()) + height, Bitmap.Config.ARGB_8888);
                    Canvas canvas2 = new Canvas(createBitmap);
                    float f2 = (getBounds().left - this.f14001e.f13994o) - width;
                    float f10 = (getBounds().top - this.f14001e.f13994o) - height;
                    canvas2.translate(-f2, -f10);
                    e(canvas2);
                    canvas.drawBitmap(createBitmap, f2, f10, (Paint) null);
                    createBitmap.recycle();
                    canvas.restore();
                } else {
                    e(canvas);
                    canvas.restore();
                }
            }
            f(canvas, paint, path, this.f14001e.a, this.Z, h());
        } else {
            paint = paint2;
        }
        if (l()) {
            if (this.f14006y) {
                m mVar = this.f14001e.a;
                l g6 = mVar.g();
                d dVar = mVar.f14019e;
                ha.l lVar = this.f14000d;
                g6.f14010e = lVar.M(dVar);
                g6.f14011f = lVar.M(mVar.f14020f);
                g6.f14013h = lVar.M(mVar.f14022h);
                g6.f14012g = lVar.M(mVar.f14021g);
                this.W = g6.a();
                float[] fArr = this.Z;
                if (fArr != null) {
                    if (this.a0 == null) {
                        this.a0 = new float[fArr.length];
                    }
                    float j = j();
                    int i10 = 0;
                    while (true) {
                        float[] fArr2 = this.Z;
                        if (i10 >= fArr2.length) {
                            break;
                        }
                        this.a0[i10] = Math.max(0.0f, fArr2[i10] - j);
                        i10++;
                    }
                } else {
                    this.a0 = null;
                }
                m mVar2 = this.W;
                float[] fArr3 = this.a0;
                float f11 = this.f14001e.j;
                RectF h6 = h();
                RectF rectF2 = this.I;
                rectF2.set(h6);
                float j5 = j();
                rectF2.inset(j5, j5);
                this.P.b(mVar2, fArr3, f11, rectF2, null, this.G);
                this.f14006y = false;
            }
            g(canvas);
        }
        paint.setAlpha(alpha);
        paint3.setAlpha(alpha2);
    }

    public final void e(Canvas canvas) {
        if (this.f14004w.cardinality() > 0) {
            Log.w("i", "Compatibility shadow requested but can't be drawn for all operations in this shape.");
        }
        int i5 = this.f14001e.f13995p;
        Path path = this.F;
        kh.a aVar = this.N;
        if (i5 != 0) {
            canvas.drawPath(path, aVar.a);
        }
        for (int i6 = 0; i6 < 4; i6++) {
            u uVar = this.f14002i[i6];
            int i10 = this.f14001e.f13994o;
            Matrix matrix = u.f14040b;
            uVar.a(matrix, aVar, i10, canvas);
            this.f14003v[i6].a(matrix, aVar, this.f14001e.f13994o, canvas);
        }
        if (this.U) {
            double d6 = 0;
            int sin = (int) (Math.sin(Math.toRadians(d6)) * this.f14001e.f13995p);
            int cos = (int) (Math.cos(Math.toRadians(d6)) * this.f14001e.f13995p);
            canvas.translate(-sin, -cos);
            canvas.drawPath(path, f13997c0);
            canvas.translate(sin, cos);
        }
    }

    public final void f(Canvas canvas, Paint paint, Path path, m mVar, float[] fArr, RectF rectF) {
        float c6 = c(rectF, mVar, fArr);
        if (c6 < 0.0f) {
            canvas.drawPath(path, paint);
        } else {
            float f2 = c6 * this.f14001e.j;
            canvas.drawRoundRect(rectF, f2, f2, paint);
        }
    }

    public void g(Canvas canvas) {
        m mVar = this.W;
        float[] fArr = this.a0;
        RectF h6 = h();
        RectF rectF = this.I;
        rectF.set(h6);
        float j = j();
        rectF.inset(j, j);
        f(canvas, this.M, this.G, mVar, fArr, rectF);
    }

    @Override // android.graphics.drawable.Drawable
    public int getAlpha() {
        return this.f14001e.f13991l;
    }

    @Override // android.graphics.drawable.Drawable
    public final Drawable.ConstantState getConstantState() {
        return this.f14001e;
    }

    @Override // android.graphics.drawable.Drawable
    public int getOpacity() {
        return -3;
    }

    @Override // android.graphics.drawable.Drawable
    public void getOutline(Outline outline) {
        this.f14001e.getClass();
        RectF h6 = h();
        if (h6.isEmpty()) {
            return;
        }
        float c6 = c(h6, this.f14001e.a, this.Z);
        if (c6 >= 0.0f) {
            outline.setRoundRect(getBounds(), c6 * this.f14001e.j);
            return;
        }
        boolean z5 = this.f14005x;
        Path path = this.F;
        if (z5) {
            b(path, h6);
            this.f14005x = false;
        }
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 30) {
            ah.c.a(outline, path);
            return;
        }
        if (i5 >= 29) {
            try {
                ah.b.a(outline, path);
            } catch (IllegalArgumentException unused) {
            }
        } else if (path.isConvex()) {
            ah.b.a(outline, path);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean getPadding(Rect rect) {
        Rect rect2 = this.f14001e.f13989h;
        if (rect2 == null) {
            return super.getPadding(rect);
        }
        rect.set(rect2);
        return true;
    }

    @Override // android.graphics.drawable.Drawable
    public final Region getTransparentRegion() {
        Rect bounds = getBounds();
        Region region = this.J;
        region.set(bounds);
        RectF h6 = h();
        Path path = this.F;
        b(path, h6);
        Region region2 = this.K;
        region2.setPath(path, region);
        region.op(region2, Region.Op.DIFFERENCE);
        return region;
    }

    public final RectF h() {
        Rect bounds = getBounds();
        RectF rectF = this.H;
        rectF.set(bounds);
        return rectF;
    }

    public final float i() {
        float[] fArr = this.Z;
        if (fArr != null) {
            return (((fArr[3] + fArr[2]) - fArr[1]) - fArr[0]) / 2.0f;
        }
        RectF h6 = h();
        m mVar = this.f14001e.a;
        f1 f1Var = this.P;
        f1Var.getClass();
        float a = mVar.f14019e.a(h6);
        m mVar2 = this.f14001e.a;
        f1Var.getClass();
        float a10 = mVar2.f14022h.a(h6) + a;
        m mVar3 = this.f14001e.a;
        f1Var.getClass();
        float a11 = a10 - mVar3.f14021g.a(h6);
        m mVar4 = this.f14001e.a;
        f1Var.getClass();
        return (a11 - mVar4.f14020f.a(h6)) / 2.0f;
    }

    @Override // android.graphics.drawable.Drawable
    public final void invalidateSelf() {
        this.f14005x = true;
        this.f14006y = true;
        super.invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public boolean isStateful() {
        if (super.isStateful()) {
            return true;
        }
        ColorStateList colorStateList = this.f14001e.f13987f;
        if (colorStateList != null && colorStateList.isStateful()) {
            return true;
        }
        this.f14001e.getClass();
        ColorStateList colorStateList2 = this.f14001e.f13986e;
        if (colorStateList2 != null && colorStateList2.isStateful()) {
            return true;
        }
        ColorStateList colorStateList3 = this.f14001e.f13985d;
        if (colorStateList3 != null && colorStateList3.isStateful()) {
            return true;
        }
        z zVar = this.f14001e.f13983b;
        return zVar != null && zVar.d();
    }

    public final float j() {
        if (l()) {
            return this.M.getStrokeWidth() / 2.0f;
        }
        return 0.0f;
    }

    public final float k() {
        float[] fArr = this.Z;
        return fArr != null ? fArr[3] : this.f14001e.a.f14019e.a(h());
    }

    public final boolean l() {
        Paint.Style style = this.f14001e.f13996q;
        return (style == Paint.Style.FILL_AND_STROKE || style == Paint.Style.STROKE) && this.M.getStrokeWidth() > 0.0f;
    }

    public final void m(Context context) {
        this.f14001e.f13984c = new bh.a(context);
        x();
    }

    @Override // android.graphics.drawable.Drawable
    public Drawable mutate() {
        this.f14001e = new g(this.f14001e);
        return this;
    }

    public final boolean n() {
        if (!this.f14001e.a.f(h())) {
            float[] fArr = this.Z;
            if (fArr != null) {
                if (fArr.length > 1) {
                    float f2 = fArr[0];
                    for (int i5 = 1; i5 < fArr.length; i5++) {
                        if (fArr[i5] != f2) {
                            break;
                        }
                    }
                }
                if (this.f14001e.a.e()) {
                }
            }
            return false;
        }
        return true;
    }

    public final void o(j2.i iVar) {
        if (this.X == iVar) {
            return;
        }
        this.X = iVar;
        int i5 = 0;
        while (true) {
            SpringAnimation[] springAnimationArr = this.Y;
            if (i5 >= springAnimationArr.length) {
                v(getState(), true);
                invalidateSelf();
                return;
            }
            if (springAnimationArr[i5] == null) {
                springAnimationArr[i5] = new SpringAnimation(this, f13998d0[i5]);
            }
            SpringAnimation springAnimation = springAnimationArr[i5];
            j2.i iVar2 = new j2.i();
            iVar2.a((float) iVar.f12396b);
            double d6 = iVar.a;
            iVar2.b((float) (d6 * d6));
            springAnimation.f1884m = iVar2;
            i5++;
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void onBoundsChange(Rect rect) {
        this.f14005x = true;
        this.f14006y = true;
        super.onBoundsChange(rect);
        if (this.f14001e.f13983b != null && !rect.isEmpty()) {
            v(getState(), this.V);
        }
        this.V = rect.isEmpty();
    }

    @Override // android.graphics.drawable.Drawable
    public boolean onStateChange(int[] iArr) {
        if (this.f14001e.f13983b != null) {
            v(iArr, false);
        }
        boolean z5 = u(iArr) || w();
        if (z5) {
            invalidateSelf();
        }
        return z5;
    }

    public final void p(float f2) {
        g gVar = this.f14001e;
        if (gVar.f13993n != f2) {
            gVar.f13993n = f2;
            x();
        }
    }

    public final void q(ColorStateList colorStateList) {
        g gVar = this.f14001e;
        if (gVar.f13985d != colorStateList) {
            gVar.f13985d = colorStateList;
            onStateChange(getState());
        }
    }

    public final void r(float f2) {
        g gVar = this.f14001e;
        if (gVar.j != f2) {
            gVar.j = f2;
            this.f14005x = true;
            this.f14006y = true;
            invalidateSelf();
        }
    }

    public final void s() {
        this.N.a(-12303292);
        this.f14001e.getClass();
        super.invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public void setAlpha(int i5) {
        g gVar = this.f14001e;
        if (gVar.f13991l != i5) {
            gVar.f13991l = i5;
            super.invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public void setColorFilter(ColorFilter colorFilter) {
        this.f14001e.getClass();
        super.invalidateSelf();
    }

    @Override // lh.w
    public final void setShapeAppearanceModel(m mVar) {
        g gVar = this.f14001e;
        gVar.a = mVar;
        gVar.f13983b = null;
        this.Z = null;
        this.a0 = null;
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final void setTint(int i5) {
        setTintList(ColorStateList.valueOf(i5));
    }

    @Override // android.graphics.drawable.Drawable
    public void setTintList(ColorStateList colorStateList) {
        this.f14001e.f13987f = colorStateList;
        w();
        super.invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public void setTintMode(PorterDuff.Mode mode) {
        g gVar = this.f14001e;
        if (gVar.f13988g != mode) {
            gVar.f13988g = mode;
            w();
            super.invalidateSelf();
        }
    }

    public final void t(z zVar) {
        g gVar = this.f14001e;
        if (gVar.f13983b != zVar) {
            gVar.f13983b = zVar;
            v(getState(), true);
            invalidateSelf();
        }
    }

    public final boolean u(int[] iArr) {
        boolean z5;
        Paint paint;
        int color;
        int colorForState;
        Paint paint2;
        int color2;
        int colorForState2;
        if (this.f14001e.f13985d == null || color2 == (colorForState2 = this.f14001e.f13985d.getColorForState(iArr, (color2 = (paint2 = this.L).getColor())))) {
            z5 = false;
        } else {
            paint2.setColor(colorForState2);
            z5 = true;
        }
        if (this.f14001e.f13986e == null || color == (colorForState = this.f14001e.f13986e.getColorForState(iArr, (color = (paint = this.M).getColor())))) {
            return z5;
        }
        paint.setColor(colorForState);
        return true;
    }

    public final void v(int[] iArr, boolean z5) {
        m a;
        int i5;
        RectF h6 = h();
        if (this.f14001e.f13983b == null || h6.isEmpty()) {
            return;
        }
        boolean z6 = z5 | (this.X == null);
        if (this.Z == null) {
            this.Z = new float[4];
        }
        z zVar = this.f14001e.f13983b;
        m[] mVarArr = zVar.f14060d;
        int i6 = zVar.a;
        int[][] iArr2 = zVar.f14059c;
        x xVar = zVar.f14064h;
        x xVar2 = zVar.f14063g;
        x xVar3 = zVar.f14062f;
        x xVar4 = zVar.f14061e;
        int i10 = 0;
        while (true) {
            if (i10 >= i6) {
                i10 = -1;
                break;
            } else if (StateSet.stateSetMatches(iArr2[i10], iArr)) {
                break;
            } else {
                i10++;
            }
        }
        if (i10 < 0) {
            int[] iArr3 = StateSet.WILD_CARD;
            int i11 = 0;
            while (true) {
                if (i11 >= i6) {
                    i5 = -1;
                    break;
                } else {
                    if (StateSet.stateSetMatches(iArr2[i11], iArr3)) {
                        i5 = i11;
                        break;
                    }
                    i11++;
                }
            }
            i10 = i5;
        }
        if (xVar4 == null && xVar3 == null && xVar2 == null && xVar == null) {
            a = mVarArr[i10];
        } else {
            l g6 = mVarArr[i10].g();
            if (xVar4 != null) {
                g6.f14010e = xVar4.c(iArr);
            }
            if (xVar3 != null) {
                g6.f14011f = xVar3.c(iArr);
            }
            if (xVar2 != null) {
                g6.f14013h = xVar2.c(iArr);
            }
            if (xVar != null) {
                g6.f14012g = xVar.c(iArr);
            }
            a = g6.a();
        }
        int i12 = 0;
        while (i12 < 4) {
            this.P.getClass();
            float a10 = (i12 != 1 ? i12 != 2 ? i12 != 3 ? a.f14020f : a.f14019e : a.f14022h : a.f14021g).a(h6);
            if (z6) {
                this.Z[i12] = a10;
            }
            SpringAnimation[] springAnimationArr = this.Y;
            SpringAnimation springAnimation = springAnimationArr[i12];
            if (springAnimation != null) {
                springAnimation.a(a10);
                if (z6) {
                    springAnimationArr[i12].f();
                }
            }
            i12++;
        }
        if (z6) {
            invalidateSelf();
        }
    }

    public final boolean w() {
        PorterDuffColorFilter porterDuffColorFilter;
        PorterDuffColorFilter porterDuffColorFilter2 = this.Q;
        PorterDuffColorFilter porterDuffColorFilter3 = this.R;
        g gVar = this.f14001e;
        ColorStateList colorStateList = gVar.f13987f;
        PorterDuff.Mode mode = gVar.f13988g;
        if (colorStateList == null || mode == null) {
            int color = this.L.getColor();
            int d6 = d(color);
            this.S = d6;
            porterDuffColorFilter = d6 != color ? new PorterDuffColorFilter(d6, PorterDuff.Mode.SRC_IN) : null;
        } else {
            int d7 = d(colorStateList.getColorForState(getState(), 0));
            this.S = d7;
            porterDuffColorFilter = new PorterDuffColorFilter(d7, mode);
        }
        this.Q = porterDuffColorFilter;
        this.f14001e.getClass();
        this.R = null;
        this.f14001e.getClass();
        return (Objects.equals(porterDuffColorFilter2, this.Q) && Objects.equals(porterDuffColorFilter3, this.R)) ? false : true;
    }

    public final void x() {
        g gVar = this.f14001e;
        float f2 = gVar.f13993n + 0.0f;
        gVar.f13994o = (int) Math.ceil(0.75f * f2);
        this.f14001e.f13995p = (int) Math.ceil(f2 * 0.25f);
        w();
        super.invalidateSelf();
    }

    public i(Context context, AttributeSet attributeSet, int i5, int i6) {
        this(m.c(context, attributeSet, i5, i6).a());
    }

    public i(m mVar) {
        this(new g(mVar));
    }

    public i(g gVar) {
        f1 f1Var;
        this.f14000d = new ha.l(this);
        this.f14002i = new u[4];
        this.f14003v = new u[4];
        this.f14004w = new BitSet(8);
        this.E = new Matrix();
        this.F = new Path();
        this.G = new Path();
        this.H = new RectF();
        this.I = new RectF();
        this.J = new Region();
        this.K = new Region();
        Paint paint = new Paint(1);
        this.L = paint;
        Paint paint2 = new Paint(1);
        this.M = paint2;
        this.N = new kh.a();
        if (Looper.getMainLooper().getThread() == Thread.currentThread()) {
            f1Var = n.a;
        } else {
            f1Var = new f1();
        }
        this.P = f1Var;
        this.T = new RectF();
        this.U = true;
        this.V = true;
        this.Y = new SpringAnimation[4];
        this.f14001e = gVar;
        paint2.setStyle(Paint.Style.STROKE);
        paint.setStyle(Paint.Style.FILL);
        w();
        u(getState());
        this.O = new u4.b(24, this);
    }
}
