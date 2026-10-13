package com.facebook.drawee.drawable;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class j extends e implements g {
    public int E;
    public int F;
    public float G;
    public boolean H;
    public final Path I;
    public final Path J;
    public final RectF K;

    /* renamed from: d, reason: collision with root package name */
    public final int f4450d;

    /* renamed from: e, reason: collision with root package name */
    public final RectF f4451e;

    /* renamed from: i, reason: collision with root package name */
    public final float[] f4452i;

    /* renamed from: v, reason: collision with root package name */
    public final float[] f4453v;

    /* renamed from: w, reason: collision with root package name */
    public final Paint f4454w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f4455x;

    /* renamed from: y, reason: collision with root package name */
    public float f4456y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(Drawable drawable) {
        super(drawable);
        drawable.getClass();
        this.f4450d = 1;
        this.f4451e = new RectF();
        this.f4452i = new float[8];
        this.f4453v = new float[8];
        this.f4454w = new Paint(1);
        this.f4455x = false;
        this.f4456y = 0.0f;
        this.E = 0;
        this.F = 0;
        this.G = 0.0f;
        this.H = false;
        this.I = new Path();
        this.J = new Path();
        this.K = new RectF();
    }

    @Override // com.facebook.drawee.drawable.g
    public final void a(boolean z5) {
        this.f4455x = z5;
        h();
        invalidateSelf();
    }

    @Override // com.facebook.drawee.drawable.g
    public final void b() {
        Arrays.fill(this.f4452i, 0.0f);
        h();
        invalidateSelf();
    }

    @Override // com.facebook.drawee.drawable.g
    public final void c(boolean z5) {
        if (this.H != z5) {
            this.H = z5;
            invalidateSelf();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:8:0x00a4  */
    @Override // com.facebook.drawee.drawable.e, android.graphics.drawable.Drawable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void draw(Canvas canvas) {
        Canvas canvas2;
        Rect bounds = getBounds();
        RectF rectF = this.f4451e;
        rectF.set(bounds);
        int b10 = f0.e.b(this.f4450d);
        Path path = this.I;
        Paint paint = this.f4454w;
        if (b10 == 0) {
            super.draw(canvas);
            paint.setStyle(Paint.Style.FILL);
            paint.setColor(this.F);
            paint.setStrokeWidth(0.0f);
            paint.setFilterBitmap(this.H);
            path.setFillType(Path.FillType.EVEN_ODD);
            canvas.drawPath(path, paint);
            if (this.f4455x) {
                float width = ((rectF.width() - rectF.height()) + this.f4456y) / 2.0f;
                float height = ((rectF.height() - rectF.width()) + this.f4456y) / 2.0f;
                if (width > 0.0f) {
                    float f2 = rectF.left;
                    canvas2 = canvas;
                    canvas2.drawRect(f2, rectF.top, f2 + width, rectF.bottom, paint);
                    float f10 = rectF.right;
                    canvas2.drawRect(f10 - width, rectF.top, f10, rectF.bottom, paint);
                } else {
                    canvas2 = canvas;
                }
                if (height > 0.0f) {
                    float f11 = rectF.left;
                    float f12 = rectF.top;
                    canvas2.drawRect(f11, f12, rectF.right, f12 + height, paint);
                    float f13 = rectF.left;
                    float f14 = rectF.bottom;
                    canvas2.drawRect(f13, f14 - height, rectF.right, f14, paint);
                }
                if (this.E == 0) {
                    paint.setStyle(Paint.Style.STROKE);
                    paint.setColor(this.E);
                    paint.setStrokeWidth(this.f4456y);
                    path.setFillType(Path.FillType.EVEN_ODD);
                    canvas2.drawPath(this.J, paint);
                    return;
                }
                return;
            }
        } else if (b10 == 1) {
            int save = canvas.save();
            canvas.clipPath(path);
            super.draw(canvas);
            canvas.restoreToCount(save);
        }
        canvas2 = canvas;
        if (this.E == 0) {
        }
    }

    @Override // com.facebook.drawee.drawable.g
    public final void e(float f2) {
        this.G = f2;
        h();
        invalidateSelf();
    }

    @Override // com.facebook.drawee.drawable.g
    public final void f() {
        h();
        invalidateSelf();
    }

    @Override // com.facebook.drawee.drawable.g
    public final void g(float[] fArr) {
        float[] fArr2 = this.f4452i;
        if (fArr == null) {
            Arrays.fill(fArr2, 0.0f);
        } else {
            o8.h.b("radii should have exactly 8 values", fArr.length == 8);
            System.arraycopy(fArr, 0, fArr2, 0, 8);
        }
        h();
        invalidateSelf();
    }

    public final void h() {
        float[] fArr;
        Path path = this.I;
        path.reset();
        Path path2 = this.J;
        path2.reset();
        Rect bounds = getBounds();
        RectF rectF = this.K;
        rectF.set(bounds);
        float f2 = this.G;
        rectF.inset(f2, f2);
        if (this.f4450d == 1) {
            path.addRect(rectF, Path.Direction.CW);
        }
        boolean z5 = this.f4455x;
        float[] fArr2 = this.f4452i;
        if (z5) {
            path.addCircle(rectF.centerX(), rectF.centerY(), Math.min(rectF.width(), rectF.height()) / 2.0f, Path.Direction.CW);
        } else {
            path.addRoundRect(rectF, fArr2, Path.Direction.CW);
        }
        float f10 = -this.G;
        rectF.inset(f10, f10);
        float f11 = this.f4456y / 2.0f;
        rectF.inset(f11, f11);
        if (this.f4455x) {
            path2.addCircle(rectF.centerX(), rectF.centerY(), Math.min(rectF.width(), rectF.height()) / 2.0f, Path.Direction.CW);
        } else {
            int i5 = 0;
            while (true) {
                fArr = this.f4453v;
                if (i5 >= fArr.length) {
                    break;
                }
                fArr[i5] = (fArr2[i5] + this.G) - (this.f4456y / 2.0f);
                i5++;
            }
            path2.addRoundRect(rectF, fArr, Path.Direction.CW);
        }
        float f12 = (-this.f4456y) / 2.0f;
        rectF.inset(f12, f12);
    }

    @Override // com.facebook.drawee.drawable.e, android.graphics.drawable.Drawable
    public final void onBoundsChange(Rect rect) {
        super.onBoundsChange(rect);
        h();
    }

    @Override // com.facebook.drawee.drawable.g
    public final void setBorder(int i5, float f2) {
        this.E = i5;
        this.f4456y = f2;
        h();
        invalidateSelf();
    }

    @Override // com.facebook.drawee.drawable.g
    public final void d() {
    }
}
