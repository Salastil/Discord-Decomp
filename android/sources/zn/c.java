package zn;

import android.content.Context;
import android.graphics.Matrix;
import android.graphics.RectF;
import android.util.AttributeSet;
import com.yalantis.ucrop.view.UCropView;
import java.util.Arrays;
import ks.n;
import qa.t;

/* loaded from: classes3.dex */
public abstract class c extends f {
    public final RectF M;
    public final Matrix N;
    public float O;
    public float P;
    public vn.a Q;
    public a R;
    public b S;
    public float T;
    public float U;
    public int V;
    public int W;
    public long a0;

    public c(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.M = new RectF();
        this.N = new Matrix();
        this.P = 10.0f;
        this.S = null;
        this.V = 0;
        this.W = 0;
        this.a0 = 500L;
    }

    public final void e(float f2, float f10) {
        RectF rectF = this.M;
        float min = Math.min(Math.min(rectF.width() / f2, rectF.width() / f10), Math.min(rectF.height() / f10, rectF.height() / f2));
        this.U = min;
        this.T = min * this.P;
    }

    public final void f() {
        removeCallbacks(this.R);
        removeCallbacks(this.S);
    }

    public final boolean g(float[] fArr) {
        Matrix matrix = this.N;
        matrix.reset();
        matrix.setRotate(-getCurrentAngle());
        float[] copyOf = Arrays.copyOf(fArr, fArr.length);
        matrix.mapPoints(copyOf);
        RectF rectF = this.M;
        float f2 = rectF.left;
        float f10 = rectF.top;
        float f11 = rectF.right;
        float f12 = rectF.bottom;
        float[] fArr2 = {f2, f10, f11, f10, f11, f12, f2, f12};
        matrix.mapPoints(fArr2);
        return n.z(copyOf).contains(n.z(fArr2));
    }

    public vn.a getCropBoundsChangeListener() {
        return this.Q;
    }

    public float getMaxScale() {
        return this.T;
    }

    public float getMinScale() {
        return this.U;
    }

    public float getTargetAspectRatio() {
        return this.O;
    }

    public final void h(float f2, float f10, float f11) {
        Matrix matrix = this.f21319v;
        if (f2 > 1.0f && getCurrentScale() * f2 <= getMaxScale()) {
            if (f2 != 0.0f) {
                matrix.postScale(f2, f2, f10, f11);
                setImageMatrix(matrix);
                e eVar = this.f21322y;
                if (eVar != null) {
                    ((un.c) eVar).d(a(matrix));
                    return;
                }
                return;
            }
            return;
        }
        if (f2 >= 1.0f || getCurrentScale() * f2 < getMinScale() || f2 == 0.0f) {
            return;
        }
        matrix.postScale(f2, f2, f10, f11);
        setImageMatrix(matrix);
        e eVar2 = this.f21322y;
        if (eVar2 != null) {
            ((un.c) eVar2).d(a(matrix));
        }
    }

    public final void i(float f2, float f10, float f11) {
        if (f2 <= getMaxScale()) {
            h(f2 / getCurrentScale(), f10, f11);
        }
    }

    public void setCropBoundsChangeListener(vn.a aVar) {
        this.Q = aVar;
    }

    public void setCropRect(RectF rectF) {
        this.O = rectF.width() / rectF.height();
        this.M.set(rectF.left - getPaddingLeft(), rectF.top - getPaddingTop(), rectF.right - getPaddingRight(), rectF.bottom - getPaddingBottom());
        if (getDrawable() != null) {
            e(r5.getIntrinsicWidth(), r5.getIntrinsicHeight());
        }
        setImageToWrapCropBounds(true);
    }

    public void setImageToWrapCropBounds(boolean z5) {
        boolean z6;
        float f2;
        float max;
        if (this.H) {
            float[] fArr = this.f21316d;
            if (g(fArr)) {
                return;
            }
            float[] fArr2 = this.f21317e;
            float f10 = fArr2[0];
            float f11 = fArr2[1];
            float currentScale = getCurrentScale();
            RectF rectF = this.M;
            float centerX = rectF.centerX() - f10;
            float centerY = rectF.centerY() - f11;
            Matrix matrix = this.N;
            matrix.reset();
            matrix.setTranslate(centerX, centerY);
            float[] copyOf = Arrays.copyOf(fArr, fArr.length);
            matrix.mapPoints(copyOf);
            boolean g6 = g(copyOf);
            if (g6) {
                matrix.reset();
                matrix.setRotate(-getCurrentAngle());
                float[] copyOf2 = Arrays.copyOf(fArr, fArr.length);
                float f12 = rectF.left;
                float f13 = rectF.top;
                float f14 = rectF.right;
                float f15 = rectF.bottom;
                float[] fArr3 = {f12, f13, f14, f13, f14, f15, f12, f15};
                matrix.mapPoints(copyOf2);
                matrix.mapPoints(fArr3);
                RectF z7 = n.z(copyOf2);
                RectF z8 = n.z(fArr3);
                float f16 = z7.left - z8.left;
                float f17 = z7.top - z8.top;
                float f18 = z7.right - z8.right;
                float f19 = z7.bottom - z8.bottom;
                max = 0.0f;
                if (f16 <= 0.0f) {
                    f16 = 0.0f;
                }
                if (f17 <= 0.0f) {
                    f17 = 0.0f;
                }
                if (f18 >= 0.0f) {
                    f18 = 0.0f;
                }
                if (f19 >= 0.0f) {
                    f19 = 0.0f;
                }
                float[] fArr4 = {f16, f17, f18, f19};
                matrix.reset();
                matrix.setRotate(getCurrentAngle());
                matrix.mapPoints(fArr4);
                centerX = -(fArr4[0] + fArr4[2]);
                centerY = -(fArr4[1] + fArr4[3]);
                f2 = f11;
                z6 = g6;
            } else {
                RectF rectF2 = new RectF(rectF);
                matrix.reset();
                matrix.setRotate(getCurrentAngle());
                matrix.mapRect(rectF2);
                z6 = g6;
                f2 = f11;
                float[] fArr5 = {(float) Math.sqrt(Math.pow(fArr[1] - fArr[3], 2.0d) + Math.pow(fArr[0] - fArr[2], 2.0d)), (float) Math.sqrt(Math.pow(fArr[3] - fArr[5], 2.0d) + Math.pow(fArr[2] - fArr[4], 2.0d))};
                max = (Math.max(rectF2.width() / fArr5[0], rectF2.height() / fArr5[1]) * currentScale) - currentScale;
            }
            float f20 = centerY;
            float f21 = max;
            if (z5) {
                a aVar = new a(this, this.a0, f10, f2, centerX, f20, currentScale, f21, z6);
                this.R = aVar;
                post(aVar);
                return;
            }
            d(centerX, f20);
            if (z6) {
                return;
            }
            i(currentScale + f21, rectF.centerX(), rectF.centerY());
        }
    }

    public void setImageToWrapCropBoundsAnimDuration(long j) {
        if (j <= 0) {
            throw new IllegalArgumentException("Animation duration cannot be negative value.");
        }
        this.a0 = j;
    }

    public void setMaxResultImageSizeX(int i5) {
        this.V = i5;
    }

    public void setMaxResultImageSizeY(int i5) {
        this.W = i5;
    }

    public void setMaxScaleMultiplier(float f2) {
        this.P = f2;
    }

    public void setTargetAspectRatio(float f2) {
        if (getDrawable() == null) {
            this.O = f2;
            return;
        }
        if (f2 == 0.0f) {
            this.O = r0.getIntrinsicWidth() / r0.getIntrinsicHeight();
        } else {
            this.O = f2;
        }
        vn.a aVar = this.Q;
        if (aVar != null) {
            ((UCropView) ((t) aVar).f16718e).f6858e.setTargetAspectRatio(this.O);
        }
    }
}
