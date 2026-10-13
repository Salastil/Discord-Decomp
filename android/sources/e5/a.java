package e5;

import android.view.View;
import android.widget.FrameLayout;

/* loaded from: classes.dex */
public final class a extends FrameLayout {

    /* renamed from: d, reason: collision with root package name */
    public float f8002d;

    /* renamed from: e, reason: collision with root package name */
    public int f8003e;

    public float getAspectRatio() {
        return this.f8002d;
    }

    public int getResizeMode() {
        return this.f8003e;
    }

    @Override // android.widget.FrameLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        float f2;
        float f10;
        super.onMeasure(i5, i6);
        if (this.f8002d == 0.0f) {
            return;
        }
        int measuredWidth = getMeasuredWidth();
        int measuredHeight = getMeasuredHeight();
        float f11 = measuredWidth;
        float f12 = measuredHeight;
        float f13 = (this.f8002d / (f11 / f12)) - 1.0f;
        if (Math.abs(f13) <= 0.01f) {
            return;
        }
        int i10 = this.f8003e;
        if (i10 != 1) {
            if (i10 != 2) {
                if (i10 != 3) {
                    if (i10 == 4) {
                        int i11 = (int) (this.f8002d * f12);
                        if (i11 < measuredWidth) {
                            float f14 = i11;
                            float f15 = f11 / f14;
                            measuredWidth = (int) (f14 * f15);
                            measuredHeight = (int) (f12 * f15);
                        } else {
                            measuredWidth = i11;
                        }
                    } else if (f13 > 0.0f) {
                        f2 = this.f8002d;
                    } else {
                        f10 = this.f8002d;
                    }
                }
                super.onMeasure(View.MeasureSpec.makeMeasureSpec(measuredWidth, 1073741824), View.MeasureSpec.makeMeasureSpec(measuredHeight, 1073741824));
            }
            f10 = this.f8002d;
            measuredWidth = (int) (f12 * f10);
            super.onMeasure(View.MeasureSpec.makeMeasureSpec(measuredWidth, 1073741824), View.MeasureSpec.makeMeasureSpec(measuredHeight, 1073741824));
        }
        f2 = this.f8002d;
        measuredHeight = (int) (f11 / f2);
        super.onMeasure(View.MeasureSpec.makeMeasureSpec(measuredWidth, 1073741824), View.MeasureSpec.makeMeasureSpec(measuredHeight, 1073741824));
    }

    public void setAspectRatio(float f2) {
        if (this.f8002d != f2) {
            this.f8002d = f2;
            requestLayout();
        }
    }

    public void setResizeMode(int i5) {
        if (this.f8003e != i5) {
            this.f8003e = i5;
            requestLayout();
        }
    }
}
