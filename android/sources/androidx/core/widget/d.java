package androidx.core.widget;

import android.content.res.Resources;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.animation.AccelerateInterpolator;
import android.view.animation.AnimationUtils;
import androidx.appcompat.widget.t1;
import androidx.core.view.s0;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class d implements View.OnTouchListener {
    public static final int O = ViewConfiguration.getTapTimeout();
    public final int E;
    public final float[] F;
    public final float[] G;
    public final float[] H;
    public boolean I;
    public boolean J;
    public boolean K;
    public boolean L;
    public boolean M;
    public final t1 N;

    /* renamed from: d, reason: collision with root package name */
    public final a f1675d;

    /* renamed from: e, reason: collision with root package name */
    public final AccelerateInterpolator f1676e;

    /* renamed from: i, reason: collision with root package name */
    public final t1 f1677i;

    /* renamed from: v, reason: collision with root package name */
    public a3.h f1678v;

    /* renamed from: w, reason: collision with root package name */
    public final float[] f1679w;

    /* renamed from: x, reason: collision with root package name */
    public final float[] f1680x;

    /* renamed from: y, reason: collision with root package name */
    public final int f1681y;

    public d(t1 t1Var) {
        a aVar = new a();
        aVar.f1670e = Long.MIN_VALUE;
        aVar.f1672g = -1L;
        aVar.f1671f = 0L;
        this.f1675d = aVar;
        this.f1676e = new AccelerateInterpolator();
        float[] fArr = {0.0f, 0.0f};
        this.f1679w = fArr;
        float[] fArr2 = {Float.MAX_VALUE, Float.MAX_VALUE};
        this.f1680x = fArr2;
        float[] fArr3 = {0.0f, 0.0f};
        this.F = fArr3;
        float[] fArr4 = {0.0f, 0.0f};
        this.G = fArr4;
        float[] fArr5 = {Float.MAX_VALUE, Float.MAX_VALUE};
        this.H = fArr5;
        this.f1677i = t1Var;
        float f2 = Resources.getSystem().getDisplayMetrics().density;
        float f10 = ((int) ((1575.0f * f2) + 0.5f)) / 1000.0f;
        fArr5[0] = f10;
        fArr5[1] = f10;
        float f11 = ((int) ((f2 * 315.0f) + 0.5f)) / 1000.0f;
        fArr4[0] = f11;
        fArr4[1] = f11;
        this.f1681y = 1;
        fArr2[0] = Float.MAX_VALUE;
        fArr2[1] = Float.MAX_VALUE;
        fArr[0] = 0.2f;
        fArr[1] = 0.2f;
        fArr3[0] = 0.001f;
        fArr3[1] = 0.001f;
        this.E = O;
        aVar.a = 500;
        aVar.f1667b = 500;
        this.N = t1Var;
    }

    public static float b(float f2, float f10, float f11) {
        return f2 > f11 ? f11 : f2 < f10 ? f10 : f2;
    }

    /* JADX WARN: Removed duplicated region for block: B:7:0x003b A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:9:0x003c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final float a(float f2, float f10, float f11, int i5) {
        float f12;
        float interpolation;
        float b10 = b(this.f1679w[i5] * f10, 0.0f, this.f1680x[i5]);
        float c6 = c(f10 - f2, b10) - c(f2, b10);
        AccelerateInterpolator accelerateInterpolator = this.f1676e;
        if (c6 < 0.0f) {
            interpolation = -accelerateInterpolator.getInterpolation(-c6);
        } else {
            if (c6 <= 0.0f) {
                f12 = 0.0f;
                if (f12 != 0.0f) {
                    return 0.0f;
                }
                float f13 = this.F[i5];
                float f14 = this.G[i5];
                float f15 = this.H[i5];
                float f16 = f13 * f11;
                return f12 > 0.0f ? b(f12 * f16, f14, f15) : -b((-f12) * f16, f14, f15);
            }
            interpolation = accelerateInterpolator.getInterpolation(c6);
        }
        f12 = b(interpolation, -1.0f, 1.0f);
        if (f12 != 0.0f) {
        }
    }

    public final float c(float f2, float f10) {
        if (f10 != 0.0f) {
            int i5 = this.f1681y;
            if (i5 == 0 || i5 == 1) {
                if (f2 < f10) {
                    if (f2 >= 0.0f) {
                        return 1.0f - (f2 / f10);
                    }
                    if (this.L && i5 == 1) {
                        return 1.0f;
                    }
                }
            } else if (i5 == 2 && f2 < 0.0f) {
                return f2 / (-f10);
            }
        }
        return 0.0f;
    }

    public final void d() {
        int i5 = 0;
        if (this.J) {
            this.L = false;
            return;
        }
        long currentAnimationTimeMillis = AnimationUtils.currentAnimationTimeMillis();
        a aVar = this.f1675d;
        int i6 = (int) (currentAnimationTimeMillis - aVar.f1670e);
        int i10 = aVar.f1667b;
        if (i6 > i10) {
            i5 = i10;
        } else if (i6 >= 0) {
            i5 = i6;
        }
        aVar.f1674i = i5;
        aVar.f1673h = aVar.a(currentAnimationTimeMillis);
        aVar.f1672g = currentAnimationTimeMillis;
    }

    public final boolean e() {
        t1 t1Var;
        int count;
        a aVar = this.f1675d;
        float f2 = aVar.f1669d;
        int abs = (int) (f2 / Math.abs(f2));
        Math.abs(aVar.f1668c);
        if (abs != 0 && (count = (t1Var = this.N).getCount()) != 0) {
            int childCount = t1Var.getChildCount();
            int firstVisiblePosition = t1Var.getFirstVisiblePosition();
            int i5 = firstVisiblePosition + childCount;
            if (abs <= 0 ? !(abs >= 0 || (firstVisiblePosition <= 0 && t1Var.getChildAt(0).getTop() >= 0)) : !(i5 >= count && t1Var.getChildAt(childCount - 1).getBottom() <= t1Var.getHeight())) {
                return true;
            }
        }
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:9:0x0014, code lost:
    
        if (r0 != 3) goto L30;
     */
    @Override // android.view.View.OnTouchListener
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean onTouch(View view, MotionEvent motionEvent) {
        int i5;
        if (this.M) {
            int actionMasked = motionEvent.getActionMasked();
            if (actionMasked != 0) {
                if (actionMasked != 1) {
                    if (actionMasked != 2) {
                    }
                }
                d();
                return false;
            }
            this.K = true;
            this.I = false;
            float x5 = motionEvent.getX();
            float width = view.getWidth();
            t1 t1Var = this.f1677i;
            float a = a(x5, width, t1Var.getWidth(), 0);
            float a10 = a(motionEvent.getY(), view.getHeight(), t1Var.getHeight(), 1);
            a aVar = this.f1675d;
            aVar.f1668c = a;
            aVar.f1669d = a10;
            if (!this.L && e()) {
                if (this.f1678v == null) {
                    this.f1678v = new a3.h(8, this);
                }
                this.L = true;
                this.J = true;
                if (this.I || (i5 = this.E) <= 0) {
                    this.f1678v.run();
                } else {
                    a3.h hVar = this.f1678v;
                    long j = i5;
                    WeakHashMap weakHashMap = s0.a;
                    t1Var.postOnAnimationDelayed(hVar, j);
                }
                this.I = true;
            }
        }
        return false;
    }
}
