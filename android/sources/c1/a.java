package c1;

import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapShader;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Matrix;
import android.graphics.Outline;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Shader;
import android.graphics.drawable.Drawable;
import android.view.Gravity;

/* loaded from: classes.dex */
public final class a extends Drawable {
    public final Bitmap a;

    /* renamed from: b, reason: collision with root package name */
    public final int f3272b;

    /* renamed from: e, reason: collision with root package name */
    public final BitmapShader f3275e;

    /* renamed from: g, reason: collision with root package name */
    public float f3277g;
    public final int k;

    /* renamed from: l, reason: collision with root package name */
    public final int f3280l;

    /* renamed from: c, reason: collision with root package name */
    public final int f3273c = 119;

    /* renamed from: d, reason: collision with root package name */
    public final Paint f3274d = new Paint(3);

    /* renamed from: f, reason: collision with root package name */
    public final Matrix f3276f = new Matrix();

    /* renamed from: h, reason: collision with root package name */
    public final Rect f3278h = new Rect();

    /* renamed from: i, reason: collision with root package name */
    public final RectF f3279i = new RectF();
    public boolean j = true;

    public a(Resources resources, Bitmap bitmap) {
        this.f3272b = 160;
        if (resources != null) {
            this.f3272b = resources.getDisplayMetrics().densityDpi;
        }
        this.a = bitmap;
        if (bitmap == null) {
            this.f3280l = -1;
            this.k = -1;
            this.f3275e = null;
        } else {
            int i5 = this.f3272b;
            this.k = bitmap.getScaledWidth(i5);
            this.f3280l = bitmap.getScaledHeight(i5);
            Shader.TileMode tileMode = Shader.TileMode.CLAMP;
            this.f3275e = new BitmapShader(bitmap, tileMode, tileMode);
        }
    }

    public final void a() {
        if (this.j) {
            Gravity.apply(this.f3273c, this.k, this.f3280l, getBounds(), this.f3278h, 0);
            Rect rect = this.f3278h;
            RectF rectF = this.f3279i;
            rectF.set(rect);
            BitmapShader bitmapShader = this.f3275e;
            if (bitmapShader != null) {
                float f2 = rectF.left;
                float f10 = rectF.top;
                Matrix matrix = this.f3276f;
                matrix.setTranslate(f2, f10);
                float width = rectF.width();
                Bitmap bitmap = this.a;
                matrix.preScale(width / bitmap.getWidth(), rectF.height() / bitmap.getHeight());
                bitmapShader.setLocalMatrix(matrix);
                this.f3274d.setShader(bitmapShader);
            }
            this.j = false;
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        Bitmap bitmap = this.a;
        if (bitmap == null) {
            return;
        }
        a();
        Paint paint = this.f3274d;
        if (paint.getShader() == null) {
            canvas.drawBitmap(bitmap, (Rect) null, this.f3278h, paint);
            return;
        }
        RectF rectF = this.f3279i;
        float f2 = this.f3277g;
        canvas.drawRoundRect(rectF, f2, f2, paint);
    }

    @Override // android.graphics.drawable.Drawable
    public final int getAlpha() {
        return this.f3274d.getAlpha();
    }

    @Override // android.graphics.drawable.Drawable
    public final ColorFilter getColorFilter() {
        return this.f3274d.getColorFilter();
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicHeight() {
        return this.f3280l;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicWidth() {
        return this.k;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        Bitmap bitmap;
        return (this.f3273c != 119 || (bitmap = this.a) == null || bitmap.hasAlpha() || this.f3274d.getAlpha() < 255 || this.f3277g > 0.05f) ? -3 : -1;
    }

    @Override // android.graphics.drawable.Drawable
    public final void getOutline(Outline outline) {
        a();
        outline.setRoundRect(this.f3278h, this.f3277g);
    }

    @Override // android.graphics.drawable.Drawable
    public final void onBoundsChange(Rect rect) {
        super.onBoundsChange(rect);
        this.j = true;
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        Paint paint = this.f3274d;
        if (i5 != paint.getAlpha()) {
            paint.setAlpha(i5);
            invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
        this.f3274d.setColorFilter(colorFilter);
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final void setDither(boolean z5) {
        this.f3274d.setDither(z5);
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final void setFilterBitmap(boolean z5) {
        this.f3274d.setFilterBitmap(z5);
        invalidateSelf();
    }
}
