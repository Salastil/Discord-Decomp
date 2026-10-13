package androidx.cardview.widget;

import android.content.res.ColorStateList;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Outline;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;

/* loaded from: classes.dex */
public final class c extends Drawable {
    public float a;

    /* renamed from: b, reason: collision with root package name */
    public final Paint f1192b;

    /* renamed from: c, reason: collision with root package name */
    public final RectF f1193c;

    /* renamed from: d, reason: collision with root package name */
    public final Rect f1194d;

    /* renamed from: e, reason: collision with root package name */
    public float f1195e;

    /* renamed from: h, reason: collision with root package name */
    public ColorStateList f1198h;

    /* renamed from: i, reason: collision with root package name */
    public PorterDuffColorFilter f1199i;
    public ColorStateList j;

    /* renamed from: f, reason: collision with root package name */
    public boolean f1196f = false;

    /* renamed from: g, reason: collision with root package name */
    public boolean f1197g = true;
    public PorterDuff.Mode k = PorterDuff.Mode.SRC_IN;

    public c(ColorStateList colorStateList, float f2) {
        this.a = f2;
        Paint paint = new Paint(5);
        this.f1192b = paint;
        colorStateList = colorStateList == null ? ColorStateList.valueOf(0) : colorStateList;
        this.f1198h = colorStateList;
        paint.setColor(colorStateList.getColorForState(getState(), this.f1198h.getDefaultColor()));
        this.f1193c = new RectF();
        this.f1194d = new Rect();
    }

    public final PorterDuffColorFilter a(ColorStateList colorStateList, PorterDuff.Mode mode) {
        if (colorStateList == null || mode == null) {
            return null;
        }
        return new PorterDuffColorFilter(colorStateList.getColorForState(getState(), 0), mode);
    }

    public final void b(Rect rect) {
        if (rect == null) {
            rect = getBounds();
        }
        float f2 = rect.left;
        float f10 = rect.top;
        float f11 = rect.right;
        float f12 = rect.bottom;
        RectF rectF = this.f1193c;
        rectF.set(f2, f10, f11, f12);
        Rect rect2 = this.f1194d;
        rect2.set(rect);
        if (this.f1196f) {
            rect2.inset((int) Math.ceil(d.a(this.f1195e, this.a, this.f1197g)), (int) Math.ceil(d.b(this.f1195e, this.a, this.f1197g)));
            rectF.set(rect2);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        boolean z5;
        PorterDuffColorFilter porterDuffColorFilter = this.f1199i;
        Paint paint = this.f1192b;
        if (porterDuffColorFilter == null || paint.getColorFilter() != null) {
            z5 = false;
        } else {
            paint.setColorFilter(this.f1199i);
            z5 = true;
        }
        RectF rectF = this.f1193c;
        float f2 = this.a;
        canvas.drawRoundRect(rectF, f2, f2, paint);
        if (z5) {
            paint.setColorFilter(null);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        return -3;
    }

    @Override // android.graphics.drawable.Drawable
    public final void getOutline(Outline outline) {
        outline.setRoundRect(this.f1194d, this.a);
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean isStateful() {
        ColorStateList colorStateList = this.j;
        if (colorStateList != null && colorStateList.isStateful()) {
            return true;
        }
        ColorStateList colorStateList2 = this.f1198h;
        return (colorStateList2 != null && colorStateList2.isStateful()) || super.isStateful();
    }

    @Override // android.graphics.drawable.Drawable
    public final void onBoundsChange(Rect rect) {
        super.onBoundsChange(rect);
        b(rect);
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean onStateChange(int[] iArr) {
        PorterDuff.Mode mode;
        ColorStateList colorStateList = this.f1198h;
        int colorForState = colorStateList.getColorForState(iArr, colorStateList.getDefaultColor());
        Paint paint = this.f1192b;
        boolean z5 = colorForState != paint.getColor();
        if (z5) {
            paint.setColor(colorForState);
        }
        ColorStateList colorStateList2 = this.j;
        if (colorStateList2 == null || (mode = this.k) == null) {
            return z5;
        }
        this.f1199i = a(colorStateList2, mode);
        return true;
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        this.f1192b.setAlpha(i5);
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
        this.f1192b.setColorFilter(colorFilter);
    }

    @Override // android.graphics.drawable.Drawable
    public final void setTintList(ColorStateList colorStateList) {
        this.j = colorStateList;
        this.f1199i = a(colorStateList, this.k);
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final void setTintMode(PorterDuff.Mode mode) {
        this.k = mode;
        this.f1199i = a(this.j, mode);
        invalidateSelf();
    }
}
