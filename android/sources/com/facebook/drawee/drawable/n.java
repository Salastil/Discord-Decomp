package com.facebook.drawee.drawable;

import android.graphics.Matrix;
import android.graphics.Rect;

/* loaded from: classes3.dex */
public abstract class n implements ScalingUtils$ScaleType {
    @Override // com.facebook.drawee.drawable.ScalingUtils$ScaleType
    public Matrix getTransform(Matrix matrix, Rect rect, int i5, int i6, float f2, float f10) {
        getTransformImpl(matrix, rect, i5, i6, f2, f10, rect.width() / i5, rect.height() / i6);
        return matrix;
    }

    public abstract void getTransformImpl(Matrix matrix, Rect rect, int i5, int i6, float f2, float f10, float f11, float f12);
}
