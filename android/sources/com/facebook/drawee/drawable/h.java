package com.facebook.drawee.drawable;

import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapShader;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.RectF;
import android.graphics.Shader;
import android.graphics.drawable.BitmapDrawable;
import java.lang.ref.WeakReference;
import zo.c0;

/* loaded from: classes3.dex */
public final class h extends k {
    public static final /* synthetic */ int a0 = 0;
    public final Paint V;
    public final Paint W;
    public final Bitmap X;
    public WeakReference Y;
    public RectF Z;

    public h(Resources resources, Bitmap bitmap, Paint paint) {
        super(new BitmapDrawable(resources, bitmap));
        Paint paint2 = new Paint();
        this.V = paint2;
        Paint paint3 = new Paint(1);
        this.W = paint3;
        this.Z = null;
        this.X = bitmap;
        if (paint != null) {
            paint2.set(paint);
        }
        paint2.setFlags(1);
        paint3.setStyle(Paint.Style.STROKE);
    }

    @Override // com.facebook.drawee.drawable.k, android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        Shader shader;
        ta.a.D();
        if (!((this.f4458e || this.f4459i || this.f4460v > 0.0f) && this.X != null)) {
            super.draw(canvas);
            ta.a.D();
            return;
        }
        i();
        h();
        WeakReference weakReference = this.Y;
        Paint paint = this.V;
        Bitmap bitmap = this.X;
        if (weakReference == null || weakReference.get() != bitmap) {
            this.Y = new WeakReference(bitmap);
            if (bitmap != null) {
                Shader.TileMode tileMode = Shader.TileMode.CLAMP;
                paint.setShader(new BitmapShader(bitmap, tileMode, tileMode));
                this.f4462x = true;
            }
        }
        if (this.f4462x && (shader = paint.getShader()) != null) {
            shader.setLocalMatrix(this.Q);
            this.f4462x = false;
        }
        paint.setFilterBitmap(this.S);
        int save = canvas.save();
        canvas.concat(this.P);
        RectF rectF = this.Z;
        Path path = this.f4461w;
        if (rectF != null) {
            int save2 = canvas.save();
            canvas.clipRect(this.Z);
            canvas.drawPath(path, paint);
            canvas.restoreToCount(save2);
        } else {
            canvas.drawPath(path, paint);
        }
        float f2 = this.f4460v;
        if (f2 > 0.0f) {
            Paint paint2 = this.W;
            paint2.setStrokeWidth(f2);
            paint2.setColor(c0.D(this.f4463y, paint.getAlpha()));
            canvas.drawPath(this.E, paint2);
        }
        canvas.restoreToCount(save);
        ta.a.D();
    }

    @Override // com.facebook.drawee.drawable.k
    public final void i() {
        super.i();
        if (this.Z == null) {
            this.Z = new RectF();
        }
        this.Q.mapRect(this.Z, this.J);
    }

    @Override // com.facebook.drawee.drawable.k, android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        super.setAlpha(i5);
        Paint paint = this.V;
        if (i5 != paint.getAlpha()) {
            paint.setAlpha(i5);
            super.setAlpha(i5);
            invalidateSelf();
        }
    }

    @Override // com.facebook.drawee.drawable.k, android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
        super.setColorFilter(colorFilter);
        this.V.setColorFilter(colorFilter);
    }

    @Override // com.facebook.drawee.drawable.k, com.facebook.drawee.drawable.g
    public final void d() {
    }
}
