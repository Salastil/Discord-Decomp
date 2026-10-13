package yn;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;

/* loaded from: classes3.dex */
public final class a extends Drawable {

    /* renamed from: b, reason: collision with root package name */
    public final Bitmap f20977b;

    /* renamed from: d, reason: collision with root package name */
    public final int f20979d;

    /* renamed from: e, reason: collision with root package name */
    public final int f20980e;
    public final Paint a = new Paint(2);

    /* renamed from: c, reason: collision with root package name */
    public int f20978c = 255;

    public a(Bitmap bitmap) {
        this.f20977b = bitmap;
        if (bitmap != null) {
            this.f20979d = bitmap.getWidth();
            this.f20980e = this.f20977b.getHeight();
        } else {
            this.f20980e = 0;
            this.f20979d = 0;
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        Bitmap bitmap = this.f20977b;
        if (bitmap == null || bitmap.isRecycled()) {
            return;
        }
        canvas.drawBitmap(this.f20977b, (Rect) null, getBounds(), this.a);
    }

    @Override // android.graphics.drawable.Drawable
    public final int getAlpha() {
        return this.f20978c;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicHeight() {
        return this.f20980e;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicWidth() {
        return this.f20979d;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getMinimumHeight() {
        return this.f20980e;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getMinimumWidth() {
        return this.f20979d;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        return -3;
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        this.f20978c = i5;
        this.a.setAlpha(i5);
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
        this.a.setColorFilter(colorFilter);
    }

    @Override // android.graphics.drawable.Drawable
    public final void setFilterBitmap(boolean z5) {
        this.a.setFilterBitmap(z5);
    }
}
