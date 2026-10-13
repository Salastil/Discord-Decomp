package androidx.swiperefreshlayout.widget;

import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.Resources;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.Animatable;
import android.graphics.drawable.Drawable;
import android.view.animation.LinearInterpolator;

/* loaded from: classes.dex */
public final class CircularProgressDrawable extends Drawable implements Animatable {

    /* renamed from: d, reason: collision with root package name */
    public final c f2500d;

    /* renamed from: e, reason: collision with root package name */
    public float f2501e;

    /* renamed from: i, reason: collision with root package name */
    public final Resources f2502i;

    /* renamed from: v, reason: collision with root package name */
    public final ValueAnimator f2503v;

    /* renamed from: w, reason: collision with root package name */
    public float f2504w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f2505x;

    /* renamed from: y, reason: collision with root package name */
    public static final LinearInterpolator f2499y = new LinearInterpolator();
    public static final q2.a E = new q2.a(1);
    public static final int[] F = {-16777216};

    public CircularProgressDrawable(Context context) {
        context.getClass();
        this.f2502i = context.getResources();
        c cVar = new c();
        this.f2500d = cVar;
        cVar.f2515i = F;
        cVar.a(0);
        cVar.f2514h = 2.5f;
        cVar.f2508b.setStrokeWidth(2.5f);
        invalidateSelf();
        ValueAnimator ofFloat = ValueAnimator.ofFloat(0.0f, 1.0f);
        ofFloat.addUpdateListener(new a(this, cVar));
        ofFloat.setRepeatCount(-1);
        ofFloat.setRepeatMode(1);
        ofFloat.setInterpolator(f2499y);
        ofFloat.addListener(new b(this, cVar));
        this.f2503v = ofFloat;
    }

    public static void d(float f2, c cVar) {
        if (f2 <= 0.75f) {
            cVar.f2525u = cVar.f2515i[cVar.j];
            return;
        }
        float f10 = (f2 - 0.75f) / 0.25f;
        int[] iArr = cVar.f2515i;
        int i5 = cVar.j;
        int i6 = iArr[i5];
        int i10 = iArr[(i5 + 1) % iArr.length];
        cVar.f2525u = ((((i6 >> 24) & 255) + ((int) ((((i10 >> 24) & 255) - r1) * f10))) << 24) | ((((i6 >> 16) & 255) + ((int) ((((i10 >> 16) & 255) - r3) * f10))) << 16) | ((((i6 >> 8) & 255) + ((int) ((((i10 >> 8) & 255) - r4) * f10))) << 8) | ((i6 & 255) + ((int) (f10 * ((i10 & 255) - r2))));
    }

    public final void a(float f2, c cVar, boolean z5) {
        float interpolation;
        float f10;
        if (this.f2505x) {
            d(f2, cVar);
            float floor = (float) (Math.floor(cVar.f2517m / 0.8f) + 1.0d);
            float f11 = cVar.k;
            float f12 = cVar.f2516l;
            cVar.f2511e = (((f12 - 0.01f) - f11) * f2) + f11;
            cVar.f2512f = f12;
            float f13 = cVar.f2517m;
            cVar.f2513g = k0.d.c(floor, f13, f2, f13);
            return;
        }
        if (f2 != 1.0f || z5) {
            float f14 = cVar.f2517m;
            q2.a aVar = E;
            if (f2 < 0.5f) {
                interpolation = cVar.k;
                f10 = (aVar.getInterpolation(f2 / 0.5f) * 0.79f) + 0.01f + interpolation;
            } else {
                float f15 = cVar.k + 0.79f;
                interpolation = f15 - (((1.0f - aVar.getInterpolation((f2 - 0.5f) / 0.5f)) * 0.79f) + 0.01f);
                f10 = f15;
            }
            float f16 = (0.20999998f * f2) + f14;
            float f17 = (f2 + this.f2504w) * 216.0f;
            cVar.f2511e = interpolation;
            cVar.f2512f = f10;
            cVar.f2513g = f16;
            this.f2501e = f17;
        }
    }

    public final void b(float f2, float f10, float f11, float f12) {
        float f13 = this.f2502i.getDisplayMetrics().density;
        float f14 = f10 * f13;
        c cVar = this.f2500d;
        cVar.f2514h = f14;
        cVar.f2508b.setStrokeWidth(f14);
        cVar.f2521q = f2 * f13;
        cVar.a(0);
        cVar.f2522r = (int) (f11 * f13);
        cVar.f2523s = (int) (f12 * f13);
    }

    public final void c(int i5) {
        if (i5 == 0) {
            b(11.0f, 3.0f, 12.0f, 6.0f);
        } else {
            b(7.5f, 2.5f, 10.0f, 5.0f);
        }
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        Rect bounds = getBounds();
        canvas.save();
        canvas.rotate(this.f2501e, bounds.exactCenterX(), bounds.exactCenterY());
        c cVar = this.f2500d;
        Paint paint = cVar.f2508b;
        RectF rectF = cVar.a;
        float f2 = cVar.f2521q;
        float f10 = (cVar.f2514h / 2.0f) + f2;
        if (f2 <= 0.0f) {
            f10 = (Math.min(bounds.width(), bounds.height()) / 2.0f) - Math.max((cVar.f2522r * cVar.f2520p) / 2.0f, cVar.f2514h / 2.0f);
        }
        rectF.set(bounds.centerX() - f10, bounds.centerY() - f10, bounds.centerX() + f10, bounds.centerY() + f10);
        float f11 = cVar.f2511e;
        float f12 = cVar.f2513g;
        float f13 = (f11 + f12) * 360.0f;
        float f14 = ((cVar.f2512f + f12) * 360.0f) - f13;
        paint.setColor(cVar.f2525u);
        paint.setAlpha(cVar.f2524t);
        float f15 = cVar.f2514h / 2.0f;
        rectF.inset(f15, f15);
        canvas.drawCircle(rectF.centerX(), rectF.centerY(), rectF.width() / 2.0f, cVar.f2510d);
        float f16 = -f15;
        rectF.inset(f16, f16);
        canvas.drawArc(rectF, f13, f14, false, paint);
        Paint paint2 = cVar.f2509c;
        if (cVar.f2518n) {
            Path path = cVar.f2519o;
            if (path == null) {
                Path path2 = new Path();
                cVar.f2519o = path2;
                path2.setFillType(Path.FillType.EVEN_ODD);
            } else {
                path.reset();
            }
            float min = Math.min(rectF.width(), rectF.height()) / 2.0f;
            float f17 = (cVar.f2522r * cVar.f2520p) / 2.0f;
            cVar.f2519o.moveTo(0.0f, 0.0f);
            cVar.f2519o.lineTo(cVar.f2522r * cVar.f2520p, 0.0f);
            Path path3 = cVar.f2519o;
            float f18 = cVar.f2522r;
            float f19 = cVar.f2520p;
            path3.lineTo((f18 * f19) / 2.0f, cVar.f2523s * f19);
            cVar.f2519o.offset((rectF.centerX() + min) - f17, (cVar.f2514h / 2.0f) + rectF.centerY());
            cVar.f2519o.close();
            paint2.setColor(cVar.f2525u);
            paint2.setAlpha(cVar.f2524t);
            canvas.save();
            canvas.rotate(f13 + f14, rectF.centerX(), rectF.centerY());
            canvas.drawPath(cVar.f2519o, paint2);
            canvas.restore();
        }
        canvas.restore();
    }

    @Override // android.graphics.drawable.Drawable
    public final int getAlpha() {
        return this.f2500d.f2524t;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        return -3;
    }

    @Override // android.graphics.drawable.Animatable
    public final boolean isRunning() {
        return this.f2503v.isRunning();
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        this.f2500d.f2524t = i5;
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
        this.f2500d.f2508b.setColorFilter(colorFilter);
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Animatable
    public final void start() {
        this.f2503v.cancel();
        c cVar = this.f2500d;
        float f2 = cVar.f2511e;
        cVar.k = f2;
        float f10 = cVar.f2512f;
        cVar.f2516l = f10;
        cVar.f2517m = cVar.f2513g;
        if (f10 != f2) {
            this.f2505x = true;
            this.f2503v.setDuration(666L);
            this.f2503v.start();
            return;
        }
        cVar.a(0);
        cVar.k = 0.0f;
        cVar.f2516l = 0.0f;
        cVar.f2517m = 0.0f;
        cVar.f2511e = 0.0f;
        cVar.f2512f = 0.0f;
        cVar.f2513g = 0.0f;
        this.f2503v.setDuration(1332L);
        this.f2503v.start();
    }

    @Override // android.graphics.drawable.Animatable
    public final void stop() {
        this.f2503v.cancel();
        this.f2501e = 0.0f;
        c cVar = this.f2500d;
        if (cVar.f2518n) {
            cVar.f2518n = false;
        }
        cVar.a(0);
        cVar.k = 0.0f;
        cVar.f2516l = 0.0f;
        cVar.f2517m = 0.0f;
        cVar.f2511e = 0.0f;
        cVar.f2512f = 0.0f;
        cVar.f2513g = 0.0f;
        invalidateSelf();
    }
}
