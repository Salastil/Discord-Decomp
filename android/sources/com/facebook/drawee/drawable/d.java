package com.facebook.drawee.drawable;

import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Matrix;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import android.os.SystemClock;
import java.util.Arrays;
import zo.c0;

/* loaded from: classes3.dex */
public final class d extends Drawable implements Drawable.Callback, TransformCallback, p {
    public final Drawable[] F;
    public final int G;
    public int H;
    public int I;
    public long J;
    public final int[] K;
    public final int[] L;
    public int M;
    public final boolean[] N;
    public int O;
    public boolean P;
    public final boolean Q;

    /* renamed from: d, reason: collision with root package name */
    public TransformCallback f4431d;

    /* renamed from: i, reason: collision with root package name */
    public final Drawable[] f4433i;

    /* renamed from: v, reason: collision with root package name */
    public final c[] f4434v;

    /* renamed from: e, reason: collision with root package name */
    public final DrawableProperties f4432e = new DrawableProperties();

    /* renamed from: w, reason: collision with root package name */
    public final Rect f4435w = new Rect();

    /* renamed from: x, reason: collision with root package name */
    public boolean f4436x = false;

    /* renamed from: y, reason: collision with root package name */
    public boolean f4437y = false;
    public boolean E = false;

    public d(Drawable[] drawableArr) {
        Drawable[] drawableArr2;
        this.f4433i = drawableArr;
        int i5 = 0;
        while (true) {
            drawableArr2 = this.f4433i;
            if (i5 >= drawableArr2.length) {
                break;
            }
            c0.N(drawableArr2[i5], this, this);
            i5++;
        }
        this.f4434v = new c[drawableArr2.length];
        this.Q = true;
        if (!(drawableArr.length >= 1)) {
            throw new IllegalStateException("At least one layer required!");
        }
        this.F = drawableArr;
        int[] iArr = new int[drawableArr.length];
        this.K = iArr;
        int[] iArr2 = new int[drawableArr.length];
        this.L = iArr2;
        this.M = 255;
        boolean[] zArr = new boolean[drawableArr.length];
        this.N = zArr;
        this.O = 0;
        this.G = 2;
        this.H = 2;
        Arrays.fill(iArr, 0);
        iArr[0] = 255;
        Arrays.fill(iArr2, 0);
        iArr2[0] = 255;
        Arrays.fill(zArr, false);
        zArr[0] = true;
    }

    public final void a() {
        this.O--;
        invalidateSelf();
    }

    public final void b() {
        this.H = 2;
        for (int i5 = 0; i5 < this.F.length; i5++) {
            this.L[i5] = this.N[i5] ? 255 : 0;
        }
        invalidateSelf();
    }

    public final Drawable c(int i5) {
        o8.h.a(Boolean.valueOf(i5 >= 0));
        Drawable[] drawableArr = this.f4433i;
        o8.h.a(Boolean.valueOf(i5 < drawableArr.length));
        return drawableArr[i5];
    }

    public final Drawable d(Drawable drawable, int i5) {
        DrawableProperties drawableProperties;
        if (!(i5 >= 0)) {
            throw new IllegalArgumentException();
        }
        Drawable[] drawableArr = this.f4433i;
        if (!(i5 < drawableArr.length)) {
            throw new IllegalArgumentException();
        }
        Drawable drawable2 = drawableArr[i5];
        if (drawable != drawable2) {
            if (drawable != null && this.E) {
                drawable.mutate();
            }
            c0.N(drawableArr[i5], null, null);
            c0.N(drawable, null, null);
            if (drawable != null && (drawableProperties = this.f4432e) != null) {
                drawableProperties.a(drawable);
            }
            c0.o(drawable, this);
            c0.N(drawable, this, this);
            this.f4437y = false;
            drawableArr[i5] = drawable;
            invalidateSelf();
        }
        return drawable2;
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        boolean e9;
        int i5;
        int i6 = this.H;
        Drawable[] drawableArr = this.F;
        int[] iArr = this.L;
        if (i6 == 0) {
            System.arraycopy(iArr, 0, this.K, 0, drawableArr.length);
            this.J = SystemClock.uptimeMillis();
            e9 = e(this.I == 0 ? 1.0f : 0.0f);
            if (!this.P && (i5 = this.G) >= 0) {
                boolean[] zArr = this.N;
                if (i5 < zArr.length && zArr[i5]) {
                    this.P = true;
                }
            }
            this.H = e9 ? 2 : 1;
        } else if (i6 != 1) {
            e9 = true;
        } else {
            o8.h.e(this.I > 0);
            e9 = e((SystemClock.uptimeMillis() - this.J) / this.I);
            this.H = e9 ? 2 : 1;
        }
        for (int i10 = 0; i10 < drawableArr.length; i10++) {
            Drawable drawable = drawableArr[i10];
            int ceil = (int) Math.ceil((iArr[i10] * this.M) / 255.0d);
            if (drawable != null && ceil > 0) {
                this.O++;
                if (this.Q) {
                    drawable.mutate();
                }
                drawable.setAlpha(ceil);
                this.O--;
                drawable.draw(canvas);
            }
        }
        if (!e9) {
            invalidateSelf();
        } else if (this.P) {
            this.P = false;
        }
    }

    public final boolean e(float f2) {
        boolean z5 = true;
        for (int i5 = 0; i5 < this.F.length; i5++) {
            boolean z6 = this.N[i5];
            int i6 = (int) (((z6 ? 1 : -1) * 255 * f2) + this.K[i5]);
            int[] iArr = this.L;
            iArr[i5] = i6;
            if (i6 < 0) {
                iArr[i5] = 0;
            }
            if (iArr[i5] > 255) {
                iArr[i5] = 255;
            }
            if (z6 && iArr[i5] < 255) {
                z5 = false;
            }
            if (!z6 && iArr[i5] > 0) {
                z5 = false;
            }
        }
        return z5;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getAlpha() {
        return this.M;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicHeight() {
        int i5 = 0;
        int i6 = -1;
        while (true) {
            Drawable[] drawableArr = this.f4433i;
            if (i5 >= drawableArr.length) {
                break;
            }
            Drawable drawable = drawableArr[i5];
            if (drawable != null) {
                i6 = Math.max(i6, drawable.getIntrinsicHeight());
            }
            i5++;
        }
        if (i6 > 0) {
            return i6;
        }
        return -1;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicWidth() {
        int i5 = 0;
        int i6 = -1;
        while (true) {
            Drawable[] drawableArr = this.f4433i;
            if (i5 >= drawableArr.length) {
                break;
            }
            Drawable drawable = drawableArr[i5];
            if (drawable != null) {
                i6 = Math.max(i6, drawable.getIntrinsicWidth());
            }
            i5++;
        }
        if (i6 > 0) {
            return i6;
        }
        return -1;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        Drawable[] drawableArr = this.f4433i;
        if (drawableArr.length == 0) {
            return -2;
        }
        int i5 = -1;
        for (int i6 = 1; i6 < drawableArr.length; i6++) {
            Drawable drawable = drawableArr[i6];
            if (drawable != null) {
                i5 = Drawable.resolveOpacity(i5, drawable.getOpacity());
            }
        }
        return i5;
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean getPadding(Rect rect) {
        int i5 = 0;
        rect.left = 0;
        rect.top = 0;
        rect.right = 0;
        rect.bottom = 0;
        while (true) {
            Drawable[] drawableArr = this.f4433i;
            if (i5 >= drawableArr.length) {
                return true;
            }
            Drawable drawable = drawableArr[i5];
            if (drawable != null) {
                Rect rect2 = this.f4435w;
                drawable.getPadding(rect2);
                rect.left = Math.max(rect.left, rect2.left);
                rect.top = Math.max(rect.top, rect2.top);
                rect.right = Math.max(rect.right, rect2.right);
                rect.bottom = Math.max(rect.bottom, rect2.bottom);
            }
            i5++;
        }
    }

    @Override // com.facebook.drawee.drawable.TransformCallback
    public final void getRootBounds(RectF rectF) {
        TransformCallback transformCallback = this.f4431d;
        if (transformCallback != null) {
            transformCallback.getRootBounds(rectF);
        } else {
            rectF.set(getBounds());
        }
    }

    @Override // com.facebook.drawee.drawable.TransformCallback
    public final void getTransform(Matrix matrix) {
        TransformCallback transformCallback = this.f4431d;
        if (transformCallback != null) {
            transformCallback.getTransform(matrix);
        } else {
            matrix.reset();
        }
    }

    @Override // android.graphics.drawable.Drawable.Callback
    public final void invalidateDrawable(Drawable drawable) {
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final void invalidateSelf() {
        if (this.O == 0) {
            super.invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean isStateful() {
        if (!this.f4437y) {
            this.f4436x = false;
            int i5 = 0;
            while (true) {
                Drawable[] drawableArr = this.f4433i;
                boolean z5 = true;
                if (i5 >= drawableArr.length) {
                    break;
                }
                Drawable drawable = drawableArr[i5];
                boolean z6 = this.f4436x;
                if (drawable == null || !drawable.isStateful()) {
                    z5 = false;
                }
                this.f4436x = z6 | z5;
                i5++;
            }
            this.f4437y = true;
        }
        return this.f4436x;
    }

    @Override // android.graphics.drawable.Drawable
    public final Drawable mutate() {
        int i5 = 0;
        while (true) {
            Drawable[] drawableArr = this.f4433i;
            if (i5 >= drawableArr.length) {
                this.E = true;
                return this;
            }
            Drawable drawable = drawableArr[i5];
            if (drawable != null) {
                drawable.mutate();
            }
            i5++;
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void onBoundsChange(Rect rect) {
        int i5 = 0;
        while (true) {
            Drawable[] drawableArr = this.f4433i;
            if (i5 >= drawableArr.length) {
                return;
            }
            Drawable drawable = drawableArr[i5];
            if (drawable != null) {
                drawable.setBounds(rect);
            }
            i5++;
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean onLevelChange(int i5) {
        int i6 = 0;
        boolean z5 = false;
        while (true) {
            Drawable[] drawableArr = this.f4433i;
            if (i6 >= drawableArr.length) {
                return z5;
            }
            Drawable drawable = drawableArr[i6];
            if (drawable != null && drawable.setLevel(i5)) {
                z5 = true;
            }
            i6++;
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean onStateChange(int[] iArr) {
        int i5 = 0;
        boolean z5 = false;
        while (true) {
            Drawable[] drawableArr = this.f4433i;
            if (i5 >= drawableArr.length) {
                return z5;
            }
            Drawable drawable = drawableArr[i5];
            if (drawable != null && drawable.setState(iArr)) {
                z5 = true;
            }
            i5++;
        }
    }

    @Override // android.graphics.drawable.Drawable.Callback
    public final void scheduleDrawable(Drawable drawable, Runnable runnable, long j) {
        scheduleSelf(runnable, j);
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        if (this.M != i5) {
            this.M = i5;
            invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
        DrawableProperties drawableProperties = this.f4432e;
        drawableProperties.f4422c = colorFilter;
        int i5 = 0;
        drawableProperties.f4421b = colorFilter != null;
        while (true) {
            Drawable[] drawableArr = this.f4433i;
            if (i5 >= drawableArr.length) {
                return;
            }
            Drawable drawable = drawableArr[i5];
            if (drawable != null) {
                drawable.setColorFilter(colorFilter);
            }
            i5++;
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setDither(boolean z5) {
        this.f4432e.f4423d = z5 ? 1 : 0;
        int i5 = 0;
        while (true) {
            Drawable[] drawableArr = this.f4433i;
            if (i5 >= drawableArr.length) {
                return;
            }
            Drawable drawable = drawableArr[i5];
            if (drawable != null) {
                drawable.setDither(z5);
            }
            i5++;
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setFilterBitmap(boolean z5) {
        this.f4432e.f4424e = z5 ? 1 : 0;
        int i5 = 0;
        while (true) {
            Drawable[] drawableArr = this.f4433i;
            if (i5 >= drawableArr.length) {
                return;
            }
            Drawable drawable = drawableArr[i5];
            if (drawable != null) {
                drawable.setFilterBitmap(z5);
            }
            i5++;
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setHotspot(float f2, float f10) {
        int i5 = 0;
        while (true) {
            Drawable[] drawableArr = this.f4433i;
            if (i5 >= drawableArr.length) {
                return;
            }
            Drawable drawable = drawableArr[i5];
            if (drawable != null) {
                drawable.setHotspot(f2, f10);
            }
            i5++;
        }
    }

    @Override // com.facebook.drawee.drawable.p
    public final void setTransformCallback(TransformCallback transformCallback) {
        this.f4431d = transformCallback;
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean setVisible(boolean z5, boolean z6) {
        boolean visible = super.setVisible(z5, z6);
        int i5 = 0;
        while (true) {
            Drawable[] drawableArr = this.f4433i;
            if (i5 >= drawableArr.length) {
                return visible;
            }
            Drawable drawable = drawableArr[i5];
            if (drawable != null) {
                drawable.setVisible(z5, z6);
            }
            i5++;
        }
    }

    @Override // android.graphics.drawable.Drawable.Callback
    public final void unscheduleDrawable(Drawable drawable, Runnable runnable) {
        unscheduleSelf(runnable);
    }
}
