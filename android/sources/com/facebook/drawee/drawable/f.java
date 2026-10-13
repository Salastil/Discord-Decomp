package com.facebook.drawee.drawable;

import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f extends e {

    /* renamed from: d, reason: collision with root package name */
    public final Matrix f4438d;

    /* renamed from: e, reason: collision with root package name */
    public final int f4439e;

    /* renamed from: i, reason: collision with root package name */
    public final int f4440i;

    /* renamed from: v, reason: collision with root package name */
    public final Matrix f4441v;

    /* renamed from: w, reason: collision with root package name */
    public final RectF f4442w;

    public f(BitmapDrawable bitmapDrawable, int i5, int i6) {
        super(bitmapDrawable);
        this.f4438d = new Matrix();
        this.f4439e = i5 - (i5 % 90);
        this.f4440i = (i6 < 0 || i6 > 8) ? 0 : i6;
        this.f4441v = new Matrix();
        this.f4442w = new RectF();
    }

    @Override // com.facebook.drawee.drawable.e, android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        int i5;
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        if (this.f4439e <= 0 && ((i5 = this.f4440i) == 0 || i5 == 1)) {
            super.draw(canvas);
            return;
        }
        int save = canvas.save();
        canvas.concat(this.f4438d);
        super.draw(canvas);
        canvas.restoreToCount(save);
    }

    @Override // com.facebook.drawee.drawable.e, android.graphics.drawable.Drawable
    public final int getIntrinsicHeight() {
        int i5 = this.f4440i;
        return (i5 == 5 || i5 == 7 || this.f4439e % 180 != 0) ? super.getIntrinsicWidth() : super.getIntrinsicHeight();
    }

    @Override // com.facebook.drawee.drawable.e, android.graphics.drawable.Drawable
    public final int getIntrinsicWidth() {
        int i5 = this.f4440i;
        return (i5 == 5 || i5 == 7 || this.f4439e % 180 != 0) ? super.getIntrinsicHeight() : super.getIntrinsicWidth();
    }

    @Override // com.facebook.drawee.drawable.e, com.facebook.drawee.drawable.TransformCallback
    public final void getTransform(Matrix transform) {
        Intrinsics.checkNotNullParameter(transform, "transform");
        getParentTransform(transform);
        Matrix matrix = this.f4438d;
        if (matrix.isIdentity()) {
            return;
        }
        transform.preConcat(matrix);
    }

    @Override // com.facebook.drawee.drawable.e, android.graphics.drawable.Drawable
    public final void onBoundsChange(Rect bounds) {
        Intrinsics.checkNotNullParameter(bounds, "bounds");
        Drawable current = getCurrent();
        if (current == null) {
            return;
        }
        int i5 = this.f4440i;
        int i6 = this.f4439e;
        if (i6 <= 0 && (i5 == 0 || i5 == 1)) {
            current.setBounds(bounds);
            return;
        }
        Matrix matrix = this.f4438d;
        if (i5 == 2) {
            matrix.setScale(-1.0f, 1.0f);
        } else if (i5 == 7) {
            matrix.setRotate(270.0f, bounds.centerX(), bounds.centerY());
            matrix.postScale(-1.0f, 1.0f);
        } else if (i5 == 4) {
            matrix.setScale(1.0f, -1.0f);
        } else if (i5 != 5) {
            matrix.setRotate(i6, bounds.centerX(), bounds.centerY());
        } else {
            matrix.setRotate(270.0f, bounds.centerX(), bounds.centerY());
            matrix.postScale(1.0f, -1.0f);
        }
        Matrix matrix2 = this.f4441v;
        matrix2.reset();
        matrix.invert(matrix2);
        RectF rectF = this.f4442w;
        rectF.set(bounds);
        matrix2.mapRect(rectF);
        current.setBounds((int) rectF.left, (int) rectF.top, (int) rectF.right, (int) rectF.bottom);
    }
}
