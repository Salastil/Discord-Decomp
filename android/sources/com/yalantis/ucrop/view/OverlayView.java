package com.yalantis.ucrop.view;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.RectF;
import android.graphics.Region;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import androidx.annotation.NonNull;
import com.discord.R;
import rd.u;
import vn.b;

/* loaded from: classes3.dex */
public class OverlayView extends View {
    public float E;
    public float[] F;
    public boolean G;
    public boolean H;
    public boolean I;
    public int J;
    public final Path K;
    public final Paint L;
    public final Paint M;
    public final Paint N;
    public final Paint O;
    public int P;
    public float Q;
    public float R;
    public int S;
    public final int T;
    public final int U;
    public final int V;
    public b W;
    public boolean a0;

    /* renamed from: d, reason: collision with root package name */
    public final RectF f6850d;

    /* renamed from: e, reason: collision with root package name */
    public final RectF f6851e;

    /* renamed from: i, reason: collision with root package name */
    public int f6852i;

    /* renamed from: v, reason: collision with root package name */
    public int f6853v;

    /* renamed from: w, reason: collision with root package name */
    public float[] f6854w;

    /* renamed from: x, reason: collision with root package name */
    public int f6855x;

    /* renamed from: y, reason: collision with root package name */
    public int f6856y;

    public OverlayView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        this.f6850d = new RectF();
        this.f6851e = new RectF();
        this.F = null;
        this.K = new Path();
        this.L = new Paint(1);
        this.M = new Paint(1);
        this.N = new Paint(1);
        this.O = new Paint(1);
        this.P = 0;
        this.Q = -1.0f;
        this.R = -1.0f;
        this.S = -1;
        this.T = getResources().getDimensionPixelSize(R.dimen.ucrop_default_crop_rect_corner_touch_threshold);
        this.U = getResources().getDimensionPixelSize(R.dimen.ucrop_default_crop_rect_min_size);
        this.V = getResources().getDimensionPixelSize(R.dimen.ucrop_default_crop_rect_corner_touch_area_line_length);
    }

    public final void a() {
        RectF rectF = this.f6850d;
        float f2 = rectF.left;
        float f10 = rectF.top;
        float f11 = rectF.right;
        float f12 = rectF.bottom;
        this.f6854w = new float[]{f2, f10, f11, f10, f11, f12, f2, f12};
        rectF.centerX();
        rectF.centerY();
        this.F = null;
        Path path = this.K;
        path.reset();
        path.addCircle(rectF.centerX(), rectF.centerY(), Math.min(rectF.width(), rectF.height()) / 2.0f, Path.Direction.CW);
    }

    @NonNull
    public RectF getCropViewRect() {
        return this.f6850d;
    }

    public int getFreestyleCropMode() {
        return this.P;
    }

    public b getOverlayViewChangeListener() {
        return this.W;
    }

    @Override // android.view.View
    public final void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        canvas.save();
        boolean z5 = this.I;
        RectF rectF = this.f6850d;
        if (z5) {
            canvas.clipPath(this.K, Region.Op.DIFFERENCE);
        } else {
            canvas.clipRect(rectF, Region.Op.DIFFERENCE);
        }
        canvas.drawColor(this.J);
        canvas.restore();
        if (this.I) {
            canvas.drawCircle(rectF.centerX(), rectF.centerY(), Math.min(rectF.width(), rectF.height()) / 2.0f, this.L);
        }
        if (this.H) {
            if (this.F == null && !rectF.isEmpty()) {
                this.F = new float[(this.f6856y * 4) + (this.f6855x * 4)];
                int i5 = 0;
                for (int i6 = 0; i6 < this.f6855x; i6++) {
                    float[] fArr = this.F;
                    fArr[i5] = rectF.left;
                    float f2 = i6 + 1.0f;
                    fArr[i5 + 1] = ((f2 / (this.f6855x + 1)) * rectF.height()) + rectF.top;
                    float[] fArr2 = this.F;
                    int i10 = i5 + 3;
                    fArr2[i5 + 2] = rectF.right;
                    i5 += 4;
                    fArr2[i10] = ((f2 / (this.f6855x + 1)) * rectF.height()) + rectF.top;
                }
                for (int i11 = 0; i11 < this.f6856y; i11++) {
                    float f10 = i11 + 1.0f;
                    this.F[i5] = ((f10 / (this.f6856y + 1)) * rectF.width()) + rectF.left;
                    float[] fArr3 = this.F;
                    fArr3[i5 + 1] = rectF.top;
                    int i12 = i5 + 3;
                    fArr3[i5 + 2] = ((f10 / (this.f6856y + 1)) * rectF.width()) + rectF.left;
                    i5 += 4;
                    this.F[i12] = rectF.bottom;
                }
            }
            float[] fArr4 = this.F;
            if (fArr4 != null) {
                canvas.drawLines(fArr4, this.M);
            }
        }
        if (this.G) {
            canvas.drawRect(rectF, this.N);
        }
        if (this.P != 0) {
            canvas.save();
            RectF rectF2 = this.f6851e;
            rectF2.set(rectF);
            int i13 = this.V;
            float f11 = i13;
            float f12 = -i13;
            rectF2.inset(f11, f12);
            Region.Op op2 = Region.Op.DIFFERENCE;
            canvas.clipRect(rectF2, op2);
            rectF2.set(rectF);
            rectF2.inset(f12, f11);
            canvas.clipRect(rectF2, op2);
            canvas.drawRect(rectF, this.O);
            canvas.restore();
        }
    }

    @Override // android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        if (z5) {
            int paddingLeft = getPaddingLeft();
            int paddingTop = getPaddingTop();
            int width = getWidth() - getPaddingRight();
            int height = getHeight() - getPaddingBottom();
            this.f6852i = width - paddingLeft;
            this.f6853v = height - paddingTop;
            if (this.a0) {
                this.a0 = false;
                setTargetAspectRatio(this.E);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:92:0x0193  */
    /* JADX WARN: Removed duplicated region for block: B:97:? A[RETURN, SYNTHETIC] */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        int i5;
        RectF rectF = this.f6850d;
        if (rectF.isEmpty() || this.P == 0) {
            return false;
        }
        float x5 = motionEvent.getX();
        float y5 = motionEvent.getY();
        if ((motionEvent.getAction() & 255) == 0) {
            double d6 = this.T;
            int i6 = -1;
            for (int i10 = 0; i10 < 8; i10 += 2) {
                double sqrt = Math.sqrt(Math.pow(y5 - this.f6854w[i10 + 1], 2.0d) + Math.pow(x5 - this.f6854w[i10], 2.0d));
                if (sqrt < d6) {
                    i6 = i10 / 2;
                    d6 = sqrt;
                }
            }
            int i11 = (this.P == 1 && i6 < 0 && rectF.contains(x5, y5)) ? 4 : i6;
            this.S = i11;
            boolean z5 = i11 != -1;
            if (!z5) {
                this.Q = -1.0f;
                this.R = -1.0f;
                return z5;
            }
            if (this.Q < 0.0f) {
                this.Q = x5;
                this.R = y5;
            }
            return z5;
        }
        if ((motionEvent.getAction() & 255) == 2) {
            if (motionEvent.getPointerCount() != 1) {
                i5 = 1;
                if ((motionEvent.getAction() & 255) == i5) {
                    return false;
                }
                this.Q = -1.0f;
                this.R = -1.0f;
                this.S = -1;
                b bVar = this.W;
                if (bVar == null) {
                    return false;
                }
                ((UCropView) ((u) bVar).f17275e).f6857d.setCropRect(rectF);
                return false;
            }
            if (this.S != -1) {
                float min = Math.min(Math.max(x5, getPaddingLeft()), getWidth() - getPaddingRight());
                float min2 = Math.min(Math.max(y5, getPaddingTop()), getHeight() - getPaddingBottom());
                RectF rectF2 = this.f6851e;
                rectF2.set(rectF);
                int i12 = this.S;
                if (i12 == 0) {
                    rectF2.set(min, min2, rectF.right, rectF.bottom);
                } else if (i12 == 1) {
                    rectF2.set(rectF.left, min2, min, rectF.bottom);
                } else if (i12 == 2) {
                    rectF2.set(rectF.left, rectF.top, min, min2);
                } else if (i12 == 3) {
                    rectF2.set(min, rectF.top, rectF.right, min2);
                } else if (i12 == 4) {
                    rectF2.offset(min - this.Q, min2 - this.R);
                    if (rectF2.left > getLeft() && rectF2.top > getTop() && rectF2.right < getRight() && rectF2.bottom < getBottom()) {
                        rectF.set(rectF2);
                        a();
                        postInvalidate();
                    }
                    this.Q = min;
                    this.R = min2;
                    return true;
                }
                float height = rectF2.height();
                float f2 = this.U;
                boolean z6 = height >= f2;
                boolean z7 = rectF2.width() >= f2;
                rectF.set(z7 ? rectF2.left : rectF.left, z6 ? rectF2.top : rectF.top, z7 ? rectF2.right : rectF.right, z6 ? rectF2.bottom : rectF.bottom);
                if (z6 || z7) {
                    a();
                    postInvalidate();
                }
                this.Q = min;
                this.R = min2;
                return true;
            }
        }
        i5 = 1;
        if ((motionEvent.getAction() & 255) == i5) {
        }
    }

    public void setCircleDimmedLayer(boolean z5) {
        this.I = z5;
    }

    public void setCropFrameColor(int i5) {
        this.N.setColor(i5);
    }

    public void setCropFrameStrokeWidth(int i5) {
        this.N.setStrokeWidth(i5);
    }

    public void setCropGridColor(int i5) {
        this.M.setColor(i5);
    }

    public void setCropGridColumnCount(int i5) {
        this.f6856y = i5;
        this.F = null;
    }

    public void setCropGridCornerColor(int i5) {
        this.O.setColor(i5);
    }

    public void setCropGridRowCount(int i5) {
        this.f6855x = i5;
        this.F = null;
    }

    public void setCropGridStrokeWidth(int i5) {
        this.M.setStrokeWidth(i5);
    }

    public void setDimmedColor(int i5) {
        this.J = i5;
    }

    @Deprecated
    public void setFreestyleCropEnabled(boolean z5) {
        this.P = z5 ? 1 : 0;
    }

    public void setFreestyleCropMode(int i5) {
        this.P = i5;
        postInvalidate();
    }

    public void setOverlayViewChangeListener(b bVar) {
        this.W = bVar;
    }

    public void setShowCropFrame(boolean z5) {
        this.G = z5;
    }

    public void setShowCropGrid(boolean z5) {
        this.H = z5;
    }

    public void setTargetAspectRatio(float f2) {
        this.E = f2;
        int i5 = this.f6852i;
        if (i5 <= 0) {
            this.a0 = true;
            return;
        }
        int i6 = (int) (i5 / f2);
        int i10 = this.f6853v;
        RectF rectF = this.f6850d;
        if (i6 > i10) {
            int i11 = (i5 - ((int) (i10 * f2))) / 2;
            rectF.set(getPaddingLeft() + i11, getPaddingTop(), getPaddingLeft() + r7 + i11, getPaddingTop() + this.f6853v);
        } else {
            int i12 = (i10 - i6) / 2;
            rectF.set(getPaddingLeft(), getPaddingTop() + i12, getPaddingLeft() + this.f6852i, getPaddingTop() + i6 + i12);
        }
        b bVar = this.W;
        if (bVar != null) {
            ((UCropView) ((u) bVar).f17275e).f6857d.setCropRect(rectF);
        }
        a();
        postInvalidate();
    }
}
