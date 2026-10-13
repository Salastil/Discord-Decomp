package l4;

import android.animation.Animator;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Matrix;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.Animatable;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.provider.Settings;
import android.view.Choreographer;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.Semaphore;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* loaded from: classes.dex */
public final class v extends Drawable implements Drawable.Callback, Animatable {

    /* renamed from: p0, reason: collision with root package name */
    public static final boolean f13782p0;

    /* renamed from: q0, reason: collision with root package name */
    public static final List f13783q0;

    /* renamed from: r0, reason: collision with root package name */
    public static final ThreadPoolExecutor f13784r0;
    public String E;
    public androidx.appcompat.widget.w F;
    public Map G;
    public String H;
    public b I;
    public h0 J;
    public final ir.c K;
    public boolean L;
    public boolean M;
    public t4.c N;
    public int O;
    public boolean P;
    public boolean Q;
    public boolean R;
    public boolean S;
    public f0 T;
    public boolean U;
    public final Matrix V;
    public Bitmap W;
    public Canvas X;
    public Rect Y;
    public RectF Z;
    public m4.a a0;

    /* renamed from: b0, reason: collision with root package name */
    public Rect f13785b0;

    /* renamed from: c0, reason: collision with root package name */
    public Rect f13786c0;

    /* renamed from: d, reason: collision with root package name */
    public i f13787d;

    /* renamed from: d0, reason: collision with root package name */
    public RectF f13788d0;

    /* renamed from: e, reason: collision with root package name */
    public final x4.e f13789e;

    /* renamed from: e0, reason: collision with root package name */
    public RectF f13790e0;

    /* renamed from: f0, reason: collision with root package name */
    public Matrix f13791f0;

    /* renamed from: g0, reason: collision with root package name */
    public Matrix f13792g0;
    public boolean h0;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f13793i;

    /* renamed from: i0, reason: collision with root package name */
    public a f13794i0;

    /* renamed from: j0, reason: collision with root package name */
    public final Semaphore f13795j0;

    /* renamed from: k0, reason: collision with root package name */
    public Handler f13796k0;

    /* renamed from: l0, reason: collision with root package name */
    public s f13797l0;

    /* renamed from: m0, reason: collision with root package name */
    public final s f13798m0;

    /* renamed from: n0, reason: collision with root package name */
    public float f13799n0;

    /* renamed from: o0, reason: collision with root package name */
    public int f13800o0;

    /* renamed from: v, reason: collision with root package name */
    public boolean f13801v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f13802w;

    /* renamed from: x, reason: collision with root package name */
    public final ArrayList f13803x;

    /* renamed from: y, reason: collision with root package name */
    public p4.a f13804y;

    static {
        f13782p0 = Build.VERSION.SDK_INT <= 25;
        f13783q0 = Arrays.asList("reduced motion", "reduced_motion", "reduced-motion", "reducedmotion");
        f13784r0 = new ThreadPoolExecutor(0, 2, 35L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(), new x4.d());
    }

    public v() {
        x4.e eVar = new x4.e();
        eVar.f20280v = 1.0f;
        eVar.f20281w = false;
        eVar.f20282x = 0L;
        eVar.f20283y = 0.0f;
        eVar.E = 0.0f;
        eVar.F = 0;
        eVar.G = -2.1474836E9f;
        eVar.H = 2.1474836E9f;
        eVar.J = false;
        eVar.K = false;
        this.f13789e = eVar;
        this.f13793i = true;
        this.f13801v = false;
        this.f13802w = false;
        this.f13800o0 = 1;
        this.f13803x = new ArrayList();
        this.K = new ir.c(1);
        this.L = false;
        this.M = true;
        this.O = 255;
        this.S = false;
        this.T = f0.f13728d;
        this.U = false;
        this.V = new Matrix();
        this.h0 = false;
        am.c cVar = new am.c(5, this);
        this.f13795j0 = new Semaphore(1);
        this.f13798m0 = new s(this, 1);
        this.f13799n0 = -3.4028235E38f;
        eVar.addUpdateListener(cVar);
    }

    public static void f(Rect rect, RectF rectF) {
        rect.set((int) Math.floor(rectF.left), (int) Math.floor(rectF.top), (int) Math.ceil(rectF.right), (int) Math.ceil(rectF.bottom));
    }

    public final void a(final q4.e eVar, final Object obj, final e4.e eVar2) {
        t4.c cVar = this.N;
        if (cVar == null) {
            this.f13803x.add(new u() { // from class: l4.q
                @Override // l4.u
                public final void run() {
                    v.this.a(eVar, obj, eVar2);
                }
            });
            return;
        }
        boolean z5 = true;
        if (eVar == q4.e.f16680c) {
            cVar.c(eVar2, obj);
        } else {
            q4.f fVar = eVar.f16681b;
            if (fVar != null) {
                fVar.c(eVar2, obj);
            } else {
                ArrayList arrayList = new ArrayList();
                this.N.d(eVar, 0, arrayList, new q4.e(new String[0]));
                for (int i5 = 0; i5 < arrayList.size(); i5++) {
                    ((q4.e) arrayList.get(i5)).f16681b.c(eVar2, obj);
                }
                z5 = true ^ arrayList.isEmpty();
            }
        }
        if (z5) {
            invalidateSelf();
            if (obj == z.f13834z) {
                v(this.f13789e.d());
            }
        }
    }

    public final boolean b(Context context) {
        if (this.f13801v) {
            return true;
        }
        if (!this.f13793i) {
            return false;
        }
        if (context == null) {
            return true;
        }
        af.h0 h0Var = x4.h.a;
        return Settings.Global.getFloat(context.getContentResolver(), "animator_duration_scale", 1.0f) != 0.0f;
    }

    public final void c() {
        i iVar = this.f13787d;
        if (iVar == null) {
            return;
        }
        e4.e eVar = v4.q.a;
        Rect rect = iVar.k;
        List list = Collections.EMPTY_LIST;
        t4.c cVar = new t4.c(this, new t4.e(list, iVar, "__container", -1L, 1, -1L, null, list, new r4.d(), 0, 0, 0, 0.0f, 0.0f, rect.width(), rect.height(), null, null, list, 1, null, false, null, null, 1), iVar.j, iVar);
        this.N = cVar;
        if (this.Q) {
            cVar.r(true);
        }
        this.N.J = this.M;
    }

    public final void d() {
        x4.e eVar = this.f13789e;
        if (eVar.J) {
            eVar.cancel();
            if (!isVisible()) {
                this.f13800o0 = 1;
            }
        }
        this.f13787d = null;
        this.N = null;
        this.f13804y = null;
        this.f13799n0 = -3.4028235E38f;
        eVar.I = null;
        eVar.G = -2.1474836E9f;
        eVar.H = 2.1474836E9f;
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        i iVar;
        t4.c cVar = this.N;
        if (cVar == null) {
            return;
        }
        a aVar = this.f13794i0;
        if (aVar == null) {
            aVar = a.f13702d;
        }
        boolean z5 = aVar == a.f13703e;
        s sVar = this.f13798m0;
        ThreadPoolExecutor threadPoolExecutor = f13784r0;
        Semaphore semaphore = this.f13795j0;
        x4.e eVar = this.f13789e;
        if (z5) {
            try {
                semaphore.acquire();
            } catch (InterruptedException unused) {
                if (!z5) {
                    return;
                }
                semaphore.release();
                if (cVar.I == eVar.d()) {
                    return;
                }
            } catch (Throwable th2) {
                if (z5) {
                    semaphore.release();
                    if (cVar.I != eVar.d()) {
                        threadPoolExecutor.execute(sVar);
                    }
                }
                throw th2;
            }
        }
        if (z5 && (iVar = this.f13787d) != null) {
            float f2 = this.f13799n0;
            float d6 = eVar.d();
            this.f13799n0 = d6;
            if (Math.abs(d6 - f2) * iVar.b() >= 50.0f) {
                v(eVar.d());
            }
        }
        if (this.f13802w) {
            try {
                if (this.U) {
                    m(canvas, cVar);
                } else {
                    g(canvas);
                }
            } catch (Throwable unused2) {
                x4.c.a.getClass();
            }
        } else if (this.U) {
            m(canvas, cVar);
        } else {
            g(canvas);
        }
        this.h0 = false;
        if (z5) {
            semaphore.release();
            if (cVar.I == eVar.d()) {
                return;
            }
            threadPoolExecutor.execute(sVar);
        }
    }

    public final void e() {
        i iVar = this.f13787d;
        if (iVar == null) {
            return;
        }
        f0 f0Var = this.T;
        int i5 = Build.VERSION.SDK_INT;
        boolean z5 = iVar.f13753o;
        int i6 = iVar.f13754p;
        int ordinal = f0Var.ordinal();
        boolean z6 = false;
        if (ordinal != 1 && (ordinal == 2 || ((z5 && i5 < 28) || i6 > 4 || i5 <= 25))) {
            z6 = true;
        }
        this.U = z6;
    }

    public final void g(Canvas canvas) {
        t4.c cVar = this.N;
        i iVar = this.f13787d;
        if (cVar == null || iVar == null) {
            return;
        }
        Matrix matrix = this.V;
        matrix.reset();
        if (!getBounds().isEmpty()) {
            matrix.preScale(r3.width() / iVar.k.width(), r3.height() / iVar.k.height());
            matrix.preTranslate(r3.left, r3.top);
        }
        cVar.g(canvas, matrix, this.O);
    }

    @Override // android.graphics.drawable.Drawable
    public final int getAlpha() {
        return this.O;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicHeight() {
        i iVar = this.f13787d;
        if (iVar == null) {
            return -1;
        }
        return iVar.k.height();
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicWidth() {
        i iVar = this.f13787d;
        if (iVar == null) {
            return -1;
        }
        return iVar.k.width();
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        return -3;
    }

    public final Context h() {
        Drawable.Callback callback = getCallback();
        if (callback != null && (callback instanceof View)) {
            return ((View) callback).getContext();
        }
        return null;
    }

    public final androidx.appcompat.widget.w i() {
        if (getCallback() == null) {
            return null;
        }
        if (this.F == null) {
            Drawable.Callback callback = getCallback();
            b bVar = this.I;
            androidx.appcompat.widget.w wVar = new androidx.appcompat.widget.w();
            wVar.f1141d = new e4.r(18, false);
            wVar.f1142e = new HashMap();
            wVar.f1143i = new HashMap();
            wVar.f1146x = ".ttf";
            wVar.f1145w = bVar;
            if (callback instanceof View) {
                wVar.f1144v = ((View) callback).getContext().getAssets();
            } else {
                x4.c.b("LottieDrawable must be inside of a view for images to work.");
                wVar.f1144v = null;
            }
            this.F = wVar;
            String str = this.H;
            if (str != null) {
                wVar.f1146x = str;
            }
        }
        return this.F;
    }

    @Override // android.graphics.drawable.Drawable.Callback
    public final void invalidateDrawable(Drawable drawable) {
        Drawable.Callback callback = getCallback();
        if (callback == null) {
            return;
        }
        callback.invalidateDrawable(this);
    }

    @Override // android.graphics.drawable.Drawable
    public final void invalidateSelf() {
        Drawable.Callback callback;
        if (this.h0) {
            return;
        }
        this.h0 = true;
        if ((!f13782p0 || Looper.getMainLooper() == Looper.myLooper()) && (callback = getCallback()) != null) {
            callback.invalidateDrawable(this);
        }
    }

    @Override // android.graphics.drawable.Animatable
    public final boolean isRunning() {
        return j();
    }

    public final boolean j() {
        x4.e eVar = this.f13789e;
        if (eVar == null) {
            return false;
        }
        return eVar.J;
    }

    public final void k() {
        this.f13803x.clear();
        x4.e eVar = this.f13789e;
        eVar.h(true);
        Iterator it = eVar.f20276i.iterator();
        while (it.hasNext()) {
            ((Animator.AnimatorPauseListener) it.next()).onAnimationPause(eVar);
        }
        if (isVisible()) {
            return;
        }
        this.f13800o0 = 1;
    }

    public final void l() {
        if (this.N == null) {
            this.f13803x.add(new t(this, 1));
            return;
        }
        e();
        boolean b10 = b(h());
        x4.e eVar = this.f13789e;
        if (b10 || eVar.getRepeatCount() == 0) {
            if (isVisible()) {
                eVar.J = true;
                eVar.b(eVar.g());
                eVar.j((int) (eVar.g() ? eVar.e() : eVar.f()));
                eVar.f20282x = 0L;
                eVar.F = 0;
                if (eVar.J) {
                    eVar.h(false);
                    Choreographer.getInstance().postFrameCallback(eVar);
                }
                this.f13800o0 = 1;
            } else {
                this.f13800o0 = 2;
            }
        }
        if (b(h())) {
            return;
        }
        Iterator it = f13783q0.iterator();
        q4.h hVar = null;
        while (it.hasNext()) {
            hVar = this.f13787d.d((String) it.next());
            if (hVar != null) {
                break;
            }
        }
        if (hVar != null) {
            o((int) hVar.f16683b);
        } else {
            o((int) (eVar.f20280v < 0.0f ? eVar.f() : eVar.e()));
        }
        eVar.h(true);
        eVar.a(eVar.g());
        if (isVisible()) {
            return;
        }
        this.f13800o0 = 1;
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x00ea  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void m(Canvas canvas, t4.c cVar) {
        boolean z5;
        int ceil;
        if (this.f13787d == null || cVar == null) {
            return;
        }
        if (this.X == null) {
            this.X = new Canvas();
            this.f13790e0 = new RectF();
            this.f13791f0 = new Matrix();
            this.f13792g0 = new Matrix();
            this.Y = new Rect();
            this.Z = new RectF();
            this.a0 = new m4.a();
            this.f13785b0 = new Rect();
            this.f13786c0 = new Rect();
            this.f13788d0 = new RectF();
        }
        canvas.getMatrix(this.f13791f0);
        canvas.getClipBounds(this.Y);
        Rect rect = this.Y;
        this.Z.set(rect.left, rect.top, rect.right, rect.bottom);
        this.f13791f0.mapRect(this.Z);
        f(this.Y, this.Z);
        if (this.M) {
            this.f13790e0.set(0.0f, 0.0f, getIntrinsicWidth(), getIntrinsicHeight());
        } else {
            cVar.e(this.f13790e0, null, false);
        }
        this.f13791f0.mapRect(this.f13790e0);
        Rect bounds = getBounds();
        float width = bounds.width() / getIntrinsicWidth();
        float height = bounds.height() / getIntrinsicHeight();
        RectF rectF = this.f13790e0;
        rectF.set(rectF.left * width, rectF.top * height, rectF.right * width, rectF.bottom * height);
        Drawable.Callback callback = getCallback();
        if (callback instanceof View) {
            ViewParent parent = ((View) callback).getParent();
            if (parent instanceof ViewGroup) {
                z5 = !((ViewGroup) parent).getClipChildren();
                if (!z5) {
                    RectF rectF2 = this.f13790e0;
                    Rect rect2 = this.Y;
                    rectF2.intersect(rect2.left, rect2.top, rect2.right, rect2.bottom);
                }
                ceil = (int) Math.ceil(this.f13790e0.width());
                int ceil2 = (int) Math.ceil(this.f13790e0.height());
                if (ceil > 0 || ceil2 <= 0) {
                }
                Bitmap bitmap = this.W;
                if (bitmap == null || bitmap.getWidth() < ceil || this.W.getHeight() < ceil2) {
                    Bitmap createBitmap = Bitmap.createBitmap(ceil, ceil2, Bitmap.Config.ARGB_8888);
                    this.W = createBitmap;
                    this.X.setBitmap(createBitmap);
                    this.h0 = true;
                } else if (this.W.getWidth() > ceil || this.W.getHeight() > ceil2) {
                    Bitmap createBitmap2 = Bitmap.createBitmap(this.W, 0, 0, ceil, ceil2);
                    this.W = createBitmap2;
                    this.X.setBitmap(createBitmap2);
                    this.h0 = true;
                }
                if (this.h0) {
                    Matrix matrix = this.f13791f0;
                    Matrix matrix2 = this.V;
                    matrix2.set(matrix);
                    matrix2.preScale(width, height);
                    RectF rectF3 = this.f13790e0;
                    matrix2.postTranslate(-rectF3.left, -rectF3.top);
                    this.W.eraseColor(0);
                    cVar.g(this.X, matrix2, this.O);
                    this.f13791f0.invert(this.f13792g0);
                    this.f13792g0.mapRect(this.f13788d0, this.f13790e0);
                    f(this.f13786c0, this.f13788d0);
                }
                this.f13785b0.set(0, 0, ceil, ceil2);
                canvas.drawBitmap(this.W, this.f13785b0, this.f13786c0, this.a0);
                return;
            }
        }
        z5 = false;
        if (!z5) {
        }
        ceil = (int) Math.ceil(this.f13790e0.width());
        int ceil22 = (int) Math.ceil(this.f13790e0.height());
        if (ceil > 0) {
        }
    }

    public final void n() {
        if (this.N == null) {
            this.f13803x.add(new t(this, 0));
            return;
        }
        e();
        boolean b10 = b(h());
        x4.e eVar = this.f13789e;
        if (b10 || eVar.getRepeatCount() == 0) {
            if (isVisible()) {
                eVar.J = true;
                eVar.h(false);
                Choreographer.getInstance().postFrameCallback(eVar);
                eVar.f20282x = 0L;
                if (eVar.g() && eVar.E == eVar.f()) {
                    eVar.j(eVar.e());
                } else if (!eVar.g() && eVar.E == eVar.e()) {
                    eVar.j(eVar.f());
                }
                Iterator it = eVar.f20276i.iterator();
                while (it.hasNext()) {
                    ((Animator.AnimatorPauseListener) it.next()).onAnimationResume(eVar);
                }
                this.f13800o0 = 1;
            } else {
                this.f13800o0 = 3;
            }
        }
        if (b(h())) {
            return;
        }
        o((int) (eVar.f20280v < 0.0f ? eVar.f() : eVar.e()));
        eVar.h(true);
        eVar.a(eVar.g());
        if (isVisible()) {
            return;
        }
        this.f13800o0 = 1;
    }

    public final void o(int i5) {
        if (this.f13787d != null) {
            this.f13789e.j(i5);
        } else {
            this.f13803x.add(new p(this, i5, 2));
        }
    }

    public final void p(int i5) {
        if (this.f13787d == null) {
            this.f13803x.add(new p(this, i5, 0));
        } else {
            x4.e eVar = this.f13789e;
            eVar.k(eVar.G, i5 + 0.99f);
        }
    }

    public final void q(String str) {
        i iVar = this.f13787d;
        if (iVar == null) {
            this.f13803x.add(new n(this, str, 1));
        } else {
            q4.h d6 = iVar.d(str);
            if (d6 == null) {
                throw new IllegalArgumentException(s4.h.f("Cannot find marker with name ", str, "."));
            }
            p((int) (d6.f16683b + d6.f16684c));
        }
    }

    public final void r(final int i5, final int i6) {
        if (this.f13787d == null) {
            this.f13803x.add(new u() { // from class: l4.o
                @Override // l4.u
                public final void run() {
                    v.this.r(i5, i6);
                }
            });
        } else {
            this.f13789e.k(i5, i6 + 0.99f);
        }
    }

    public final void s(String str) {
        i iVar = this.f13787d;
        if (iVar == null) {
            this.f13803x.add(new n(this, str, 0));
            return;
        }
        q4.h d6 = iVar.d(str);
        if (d6 == null) {
            throw new IllegalArgumentException(s4.h.f("Cannot find marker with name ", str, "."));
        }
        int i5 = (int) d6.f16683b;
        r(i5, ((int) d6.f16684c) + i5);
    }

    @Override // android.graphics.drawable.Drawable.Callback
    public final void scheduleDrawable(Drawable drawable, Runnable runnable, long j) {
        Drawable.Callback callback = getCallback();
        if (callback == null) {
            return;
        }
        callback.scheduleDrawable(this, runnable, j);
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        this.O = i5;
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
        x4.c.b("Use addColorFilter instead.");
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean setVisible(boolean z5, boolean z6) {
        boolean isVisible = isVisible();
        boolean visible = super.setVisible(z5, z6);
        if (z5) {
            int i5 = this.f13800o0;
            if (i5 == 2) {
                l();
                return visible;
            }
            if (i5 == 3) {
                n();
                return visible;
            }
        } else {
            if (this.f13789e.J) {
                k();
                this.f13800o0 = 3;
                return visible;
            }
            if (isVisible) {
                this.f13800o0 = 1;
            }
        }
        return visible;
    }

    @Override // android.graphics.drawable.Animatable
    public final void start() {
        Drawable.Callback callback = getCallback();
        if ((callback instanceof View) && ((View) callback).isInEditMode()) {
            return;
        }
        l();
    }

    @Override // android.graphics.drawable.Animatable
    public final void stop() {
        this.f13803x.clear();
        x4.e eVar = this.f13789e;
        eVar.h(true);
        eVar.a(eVar.g());
        if (isVisible()) {
            return;
        }
        this.f13800o0 = 1;
    }

    public final void t(int i5) {
        if (this.f13787d == null) {
            this.f13803x.add(new p(this, i5, 1));
        } else {
            this.f13789e.k(i5, (int) r0.H);
        }
    }

    public final void u(String str) {
        i iVar = this.f13787d;
        if (iVar == null) {
            this.f13803x.add(new n(this, str, 2));
        } else {
            q4.h d6 = iVar.d(str);
            if (d6 == null) {
                throw new IllegalArgumentException(s4.h.f("Cannot find marker with name ", str, "."));
            }
            t((int) d6.f16683b);
        }
    }

    @Override // android.graphics.drawable.Drawable.Callback
    public final void unscheduleDrawable(Drawable drawable, Runnable runnable) {
        Drawable.Callback callback = getCallback();
        if (callback == null) {
            return;
        }
        callback.unscheduleDrawable(this, runnable);
    }

    public final void v(float f2) {
        i iVar = this.f13787d;
        if (iVar == null) {
            this.f13803x.add(new r(this, f2, 2));
        } else {
            this.f13789e.j(x4.g.e(iVar.f13750l, iVar.f13751m, f2));
        }
    }
}
