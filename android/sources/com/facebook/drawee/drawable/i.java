package com.facebook.drawee.drawable;

import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import java.util.Arrays;
import zo.c0;

/* loaded from: classes3.dex */
public final class i extends Drawable implements g {
    public final int H;

    /* renamed from: d, reason: collision with root package name */
    public final float[] f4443d = new float[8];

    /* renamed from: e, reason: collision with root package name */
    public final float[] f4444e = new float[8];

    /* renamed from: i, reason: collision with root package name */
    public final Paint f4445i = new Paint(1);

    /* renamed from: v, reason: collision with root package name */
    public boolean f4446v = false;

    /* renamed from: w, reason: collision with root package name */
    public float f4447w = 0.0f;

    /* renamed from: x, reason: collision with root package name */
    public float f4448x = 0.0f;

    /* renamed from: y, reason: collision with root package name */
    public int f4449y = 0;
    public boolean E = false;
    public final Path F = new Path();
    public final Path G = new Path();
    public final RectF I = new RectF();
    public int J = 255;

    public i(int i5) {
        this.H = 0;
        if (this.H != i5) {
            this.H = i5;
            invalidateSelf();
        }
    }

    @Override // com.facebook.drawee.drawable.g
    public final void a(boolean z5) {
        this.f4446v = z5;
        h();
        invalidateSelf();
    }

    @Override // com.facebook.drawee.drawable.g
    public final void b() {
        Arrays.fill(this.f4443d, 0.0f);
        h();
        invalidateSelf();
    }

    @Override // com.facebook.drawee.drawable.g
    public final void c(boolean z5) {
        if (this.E != z5) {
            this.E = z5;
            invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        int D = c0.D(this.H, this.J);
        Paint paint = this.f4445i;
        paint.setColor(D);
        paint.setStyle(Paint.Style.FILL);
        paint.setFilterBitmap(this.E);
        canvas.drawPath(this.F, paint);
        if (this.f4447w != 0.0f) {
            paint.setColor(c0.D(this.f4449y, this.J));
            paint.setStyle(Paint.Style.STROKE);
            paint.setStrokeWidth(this.f4447w);
            canvas.drawPath(this.G, paint);
        }
    }

    @Override // com.facebook.drawee.drawable.g
    public final void e(float f2) {
        if (this.f4448x != f2) {
            this.f4448x = f2;
            h();
            invalidateSelf();
        }
    }

    @Override // com.facebook.drawee.drawable.g
    public final void g(float[] fArr) {
        float[] fArr2 = this.f4443d;
        if (fArr == null) {
            Arrays.fill(fArr2, 0.0f);
        } else {
            o8.h.b("radii should have exactly 8 values", fArr.length == 8);
            System.arraycopy(fArr, 0, fArr2, 0, 8);
        }
        h();
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final int getAlpha() {
        return this.J;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        int D = c0.D(this.H, this.J) >>> 24;
        if (D != 0) {
            return D != 255 ? -3 : -1;
        }
        return -2;
    }

    public final void h() {
        float[] fArr;
        Path path = this.F;
        path.reset();
        Path path2 = this.G;
        path2.reset();
        Rect bounds = getBounds();
        RectF rectF = this.I;
        rectF.set(bounds);
        float f2 = this.f4447w / 2.0f;
        rectF.inset(f2, f2);
        boolean z5 = this.f4446v;
        float[] fArr2 = this.f4443d;
        if (z5) {
            path2.addCircle(rectF.centerX(), rectF.centerY(), Math.min(rectF.width(), rectF.height()) / 2.0f, Path.Direction.CW);
        } else {
            int i5 = 0;
            while (true) {
                fArr = this.f4444e;
                if (i5 >= fArr.length) {
                    break;
                }
                fArr[i5] = (fArr2[i5] + this.f4448x) - (this.f4447w / 2.0f);
                i5++;
            }
            path2.addRoundRect(rectF, fArr, Path.Direction.CW);
        }
        float f10 = (-this.f4447w) / 2.0f;
        rectF.inset(f10, f10);
        float f11 = this.f4448x + 0.0f;
        rectF.inset(f11, f11);
        if (this.f4446v) {
            path.addCircle(rectF.centerX(), rectF.centerY(), Math.min(rectF.width(), rectF.height()) / 2.0f, Path.Direction.CW);
        } else {
            path.addRoundRect(rectF, fArr2, Path.Direction.CW);
        }
        float f12 = -f11;
        rectF.inset(f12, f12);
    }

    @Override // android.graphics.drawable.Drawable
    public final void onBoundsChange(Rect rect) {
        super.onBoundsChange(rect);
        h();
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        if (i5 != this.J) {
            this.J = i5;
            invalidateSelf();
        }
    }

    @Override // com.facebook.drawee.drawable.g
    public final void setBorder(int i5, float f2) {
        if (this.f4449y != i5) {
            this.f4449y = i5;
            invalidateSelf();
        }
        if (this.f4447w != f2) {
            this.f4447w = f2;
            h();
            invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
    }

    @Override // com.facebook.drawee.drawable.g
    public final void d() {
    }

    @Override // com.facebook.drawee.drawable.g
    public final void f() {
    }
}
