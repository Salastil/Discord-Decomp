package com.google.android.material.internal;

import android.content.Context;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.widget.FrameLayout;
import androidx.annotation.NonNull;

/* loaded from: classes3.dex */
public class ClippableRoundedCornerLayout extends FrameLayout {

    /* renamed from: d, reason: collision with root package name */
    public final float[] f6078d;

    public ClippableRoundedCornerLayout(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f6078d = new float[]{0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void dispatchDraw(Canvas canvas) {
        super.dispatchDraw(canvas);
    }

    @NonNull
    public float[] getCornerRadii() {
        return this.f6078d;
    }
}
