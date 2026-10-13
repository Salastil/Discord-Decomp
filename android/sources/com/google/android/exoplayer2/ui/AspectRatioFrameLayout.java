package com.google.android.exoplayer2.ui;

import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import android.view.View;
import android.widget.FrameLayout;
import he.a;
import he.b;
import he.k;

@Deprecated
/* loaded from: classes3.dex */
public final class AspectRatioFrameLayout extends FrameLayout {

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ int f5488v = 0;

    /* renamed from: d, reason: collision with root package name */
    public final b f5489d;

    /* renamed from: e, reason: collision with root package name */
    public float f5490e;

    /* renamed from: i, reason: collision with root package name */
    public int f5491i;

    public AspectRatioFrameLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f5491i = 0;
        if (attributeSet != null) {
            TypedArray obtainStyledAttributes = context.getTheme().obtainStyledAttributes(attributeSet, k.a, 0, 0);
            try {
                this.f5491i = obtainStyledAttributes.getInt(0, 0);
            } finally {
                obtainStyledAttributes.recycle();
            }
        }
        this.f5489d = new b(this, 0);
    }

    public int getResizeMode() {
        return this.f5491i;
    }

    @Override // android.widget.FrameLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        float f2;
        float f10;
        super.onMeasure(i5, i6);
        if (this.f5490e <= 0.0f) {
            return;
        }
        int measuredWidth = getMeasuredWidth();
        int measuredHeight = getMeasuredHeight();
        float f11 = measuredWidth;
        float f12 = measuredHeight;
        float f13 = (this.f5490e / (f11 / f12)) - 1.0f;
        float abs = Math.abs(f13);
        b bVar = this.f5489d;
        if (abs <= 0.01f) {
            if (bVar.f9960e) {
                return;
            }
            bVar.f9960e = true;
            ((AspectRatioFrameLayout) bVar.f9961i).post(bVar);
            return;
        }
        int i10 = this.f5491i;
        if (i10 != 0) {
            if (i10 != 1) {
                if (i10 == 2) {
                    f2 = this.f5490e;
                } else if (i10 == 4) {
                    if (f13 > 0.0f) {
                        f2 = this.f5490e;
                    } else {
                        f10 = this.f5490e;
                    }
                }
                measuredWidth = (int) (f12 * f2);
            } else {
                f10 = this.f5490e;
            }
            measuredHeight = (int) (f11 / f10);
        } else if (f13 > 0.0f) {
            f10 = this.f5490e;
            measuredHeight = (int) (f11 / f10);
        } else {
            f2 = this.f5490e;
            measuredWidth = (int) (f12 * f2);
        }
        if (!bVar.f9960e) {
            bVar.f9960e = true;
            ((AspectRatioFrameLayout) bVar.f9961i).post(bVar);
        }
        super.onMeasure(View.MeasureSpec.makeMeasureSpec(measuredWidth, 1073741824), View.MeasureSpec.makeMeasureSpec(measuredHeight, 1073741824));
    }

    public void setAspectRatio(float f2) {
        if (this.f5490e != f2) {
            this.f5490e = f2;
            requestLayout();
        }
    }

    public void setResizeMode(int i5) {
        if (this.f5491i != i5) {
            this.f5491i = i5;
            requestLayout();
        }
    }

    public void setAspectRatioListener(a aVar) {
    }
}
