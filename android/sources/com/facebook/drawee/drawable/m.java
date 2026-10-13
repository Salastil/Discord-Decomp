package com.facebook.drawee.drawable;

import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m extends e {

    /* renamed from: d, reason: collision with root package name */
    public ScalingUtils$ScaleType f4464d;

    /* renamed from: e, reason: collision with root package name */
    public int f4465e;

    /* renamed from: i, reason: collision with root package name */
    public int f4466i;

    /* renamed from: v, reason: collision with root package name */
    public Matrix f4467v;

    /* renamed from: w, reason: collision with root package name */
    public final Matrix f4468w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public m(Drawable drawable, ScalingUtils$ScaleType scaleType) {
        super(drawable);
        Intrinsics.checkNotNullParameter(scaleType, "scaleType");
        this.f4468w = new Matrix();
        this.f4464d = scaleType;
    }

    @Override // com.facebook.drawee.drawable.e, android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        Drawable current = getCurrent();
        if (current != null && (this.f4465e != current.getIntrinsicWidth() || this.f4466i != current.getIntrinsicHeight())) {
            h();
        }
        if (this.f4467v == null) {
            super.draw(canvas);
            return;
        }
        int save = canvas.save();
        canvas.clipRect(getBounds());
        canvas.concat(this.f4467v);
        super.draw(canvas);
        canvas.restoreToCount(save);
    }

    @Override // com.facebook.drawee.drawable.e, com.facebook.drawee.drawable.TransformCallback
    public final void getTransform(Matrix transform) {
        Intrinsics.checkNotNullParameter(transform, "transform");
        getParentTransform(transform);
        Drawable current = getCurrent();
        if (current != null && (this.f4465e != current.getIntrinsicWidth() || this.f4466i != current.getIntrinsicHeight())) {
            h();
        }
        Matrix matrix = this.f4467v;
        if (matrix != null) {
            transform.preConcat(matrix);
        }
    }

    public final void h() {
        Drawable current = getCurrent();
        if (current == null) {
            this.f4466i = 0;
            this.f4465e = 0;
            this.f4467v = null;
            return;
        }
        Rect bounds = getBounds();
        Intrinsics.checkNotNullExpressionValue(bounds, "getBounds(...)");
        int width = bounds.width();
        int height = bounds.height();
        int intrinsicWidth = current.getIntrinsicWidth();
        this.f4465e = intrinsicWidth;
        int intrinsicHeight = current.getIntrinsicHeight();
        this.f4466i = intrinsicHeight;
        if (intrinsicWidth <= 0 || intrinsicHeight <= 0) {
            current.setBounds(bounds);
            this.f4467v = null;
            return;
        }
        if (intrinsicWidth == width && intrinsicHeight == height) {
            current.setBounds(bounds);
            this.f4467v = null;
        } else {
            if (this.f4464d == o.f4476i) {
                current.setBounds(bounds);
                this.f4467v = null;
                return;
            }
            current.setBounds(0, 0, intrinsicWidth, intrinsicHeight);
            Matrix matrix = this.f4468w;
            matrix.reset();
            this.f4464d.getTransform(matrix, bounds, intrinsicWidth, intrinsicHeight, 0.5f, 0.5f);
            this.f4467v = matrix;
        }
    }

    @Override // com.facebook.drawee.drawable.e, android.graphics.drawable.Drawable
    public final void onBoundsChange(Rect bounds) {
        Intrinsics.checkNotNullParameter(bounds, "bounds");
        h();
    }

    @Override // com.facebook.drawee.drawable.e
    public final Drawable setCurrent(Drawable drawable) {
        Drawable current = super.setCurrent(drawable);
        h();
        return current;
    }
}
