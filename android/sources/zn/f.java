package zn;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Point;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.util.Log;
import android.view.GestureDetector;
import android.view.ScaleGestureDetector;
import android.view.WindowManager;
import android.view.animation.AccelerateInterpolator;
import android.widget.ImageView;
import android.widget.TextView;
import androidx.appcompat.widget.z;
import com.yalantis.ucrop.UCropActivity;
import com.yalantis.ucrop.view.GestureCropImageView;
import com.yalantis.ucrop.view.UCropView;
import java.util.Locale;
import jm.x;
import qa.t;
import r3.g;

/* loaded from: classes3.dex */
public abstract class f extends z {
    public float[] E;
    public float[] F;
    public boolean G;
    public boolean H;
    public int I;
    public String J;
    public String K;
    public wn.c L;

    /* renamed from: d, reason: collision with root package name */
    public final float[] f21316d;

    /* renamed from: e, reason: collision with root package name */
    public final float[] f21317e;

    /* renamed from: i, reason: collision with root package name */
    public final float[] f21318i;

    /* renamed from: v, reason: collision with root package name */
    public final Matrix f21319v;

    /* renamed from: w, reason: collision with root package name */
    public int f21320w;

    /* renamed from: x, reason: collision with root package name */
    public int f21321x;

    /* renamed from: y, reason: collision with root package name */
    public e f21322y;

    public f(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        this.f21316d = new float[8];
        this.f21317e = new float[2];
        this.f21318i = new float[9];
        this.f21319v = new Matrix();
        this.G = false;
        this.H = false;
        this.I = 0;
        GestureCropImageView gestureCropImageView = (GestureCropImageView) this;
        gestureCropImageView.setScaleType(ImageView.ScaleType.MATRIX);
        gestureCropImageView.f6844d0 = new GestureDetector(gestureCropImageView.getContext(), new x(2, gestureCropImageView), null, true);
        gestureCropImageView.f6842b0 = new ScaleGestureDetector(gestureCropImageView.getContext(), new d(gestureCropImageView));
        g gVar = new g(10, gestureCropImageView);
        yn.c cVar = new yn.c();
        cVar.f20990i = gVar;
        cVar.f20986e = -1;
        cVar.f20987f = -1;
        gestureCropImageView.f6843c0 = cVar;
    }

    public final float a(Matrix matrix) {
        float[] fArr = this.f21318i;
        matrix.getValues(fArr);
        double pow = Math.pow(fArr[0], 2.0d);
        matrix.getValues(fArr);
        return (float) Math.sqrt(Math.pow(fArr[3], 2.0d) + pow);
    }

    public final void d(float f2, float f10) {
        if (f2 == 0.0f && f10 == 0.0f) {
            return;
        }
        Matrix matrix = this.f21319v;
        matrix.postTranslate(f2, f10);
        setImageMatrix(matrix);
    }

    public float getCurrentAngle() {
        Matrix matrix = this.f21319v;
        float[] fArr = this.f21318i;
        matrix.getValues(fArr);
        double d6 = fArr[1];
        matrix.getValues(fArr);
        return (float) (-(Math.atan2(d6, fArr[0]) * 57.29577951308232d));
    }

    public float getCurrentScale() {
        return a(this.f21319v);
    }

    public wn.c getExifInfo() {
        return this.L;
    }

    public String getImageInputPath() {
        return this.J;
    }

    public String getImageOutputPath() {
        return this.K;
    }

    public int getMaxBitmapSize() {
        int i5;
        if (this.I <= 0) {
            WindowManager windowManager = (WindowManager) getContext().getSystemService("window");
            Point point = new Point();
            if (windowManager != null) {
                windowManager.getDefaultDisplay().getSize(point);
            }
            int i6 = point.x;
            int sqrt = (int) Math.sqrt(Math.pow(point.y, 2.0d) + Math.pow(i6, 2.0d));
            Canvas canvas = new Canvas();
            int min = Math.min(canvas.getMaximumBitmapWidth(), canvas.getMaximumBitmapHeight());
            if (min > 0) {
                sqrt = Math.min(sqrt, min);
            }
            try {
                i5 = ki.b.z();
            } catch (Exception e9) {
                Log.d("EglUtils", "getMaxTextureSize: ", e9);
                i5 = 0;
            }
            if (i5 > 0) {
                sqrt = Math.min(sqrt, i5);
            }
            k0.d.q(sqrt, "maxBitmapSize: ", "BitmapLoadUtils");
            this.I = sqrt;
        }
        return this.I;
    }

    public Bitmap getViewBitmap() {
        if (getDrawable() == null || !(getDrawable() instanceof yn.a)) {
            return null;
        }
        return ((yn.a) getDrawable()).f20977b;
    }

    @Override // android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        if (z5 || (this.G && !this.H)) {
            int paddingLeft = getPaddingLeft();
            int paddingTop = getPaddingTop();
            int width = getWidth() - getPaddingRight();
            int height = getHeight() - getPaddingBottom();
            this.f21320w = width - paddingLeft;
            this.f21321x = height - paddingTop;
            c cVar = (c) this;
            Drawable drawable = cVar.getDrawable();
            if (drawable != null) {
                float intrinsicWidth = drawable.getIntrinsicWidth();
                float intrinsicHeight = drawable.getIntrinsicHeight();
                Log.d("TransformImageView", String.format("Image size: [%d:%d]", Integer.valueOf((int) intrinsicWidth), Integer.valueOf((int) intrinsicHeight)));
                RectF rectF = new RectF(0.0f, 0.0f, intrinsicWidth, intrinsicHeight);
                float f2 = rectF.left;
                float f10 = rectF.top;
                float f11 = rectF.right;
                float f12 = rectF.bottom;
                cVar.E = new float[]{f2, f10, f11, f10, f11, f12, f2, f12};
                cVar.F = new float[]{rectF.centerX(), rectF.centerY()};
                cVar.H = true;
                e eVar = cVar.f21322y;
                if (eVar != null) {
                    UCropActivity uCropActivity = (UCropActivity) ((un.c) eVar).f18965b;
                    uCropActivity.I.animate().alpha(1.0f).setDuration(300L).setInterpolator(new AccelerateInterpolator());
                    uCropActivity.U.setClickable(false);
                    uCropActivity.H = false;
                    uCropActivity.supportInvalidateOptionsMenu();
                }
            }
            Drawable drawable2 = cVar.getDrawable();
            if (drawable2 == null) {
                return;
            }
            float intrinsicWidth2 = drawable2.getIntrinsicWidth();
            float intrinsicHeight2 = drawable2.getIntrinsicHeight();
            if (cVar.O == 0.0f) {
                cVar.O = intrinsicWidth2 / intrinsicHeight2;
            }
            int i12 = cVar.f21320w;
            float f13 = i12;
            float f14 = cVar.O;
            int i13 = (int) (f13 / f14);
            int i14 = cVar.f21321x;
            RectF rectF2 = cVar.M;
            if (i13 > i14) {
                float f15 = i14;
                rectF2.set((i12 - ((int) (f14 * f15))) / 2, 0.0f, r3 + r1, f15);
            } else {
                rectF2.set(0.0f, (i14 - i13) / 2, f13, i13 + r5);
            }
            cVar.e(intrinsicWidth2, intrinsicHeight2);
            float width2 = rectF2.width();
            float height2 = rectF2.height();
            float max = Math.max(rectF2.width() / intrinsicWidth2, rectF2.height() / intrinsicHeight2);
            float f16 = ((width2 - (intrinsicWidth2 * max)) / 2.0f) + rectF2.left;
            float f17 = ((height2 - (intrinsicHeight2 * max)) / 2.0f) + rectF2.top;
            Matrix matrix = cVar.f21319v;
            matrix.reset();
            matrix.postScale(max, max);
            matrix.postTranslate(f16, f17);
            cVar.setImageMatrix(matrix);
            vn.a aVar = cVar.Q;
            if (aVar != null) {
                ((UCropView) ((t) aVar).f16718e).f6858e.setTargetAspectRatio(cVar.O);
            }
            e eVar2 = cVar.f21322y;
            if (eVar2 != null) {
                ((un.c) eVar2).d(cVar.getCurrentScale());
                e eVar3 = cVar.f21322y;
                float currentAngle = cVar.getCurrentAngle();
                TextView textView = ((UCropActivity) ((un.c) eVar3).f18965b).S;
                if (textView != null) {
                    textView.setText(String.format(Locale.getDefault(), "%.1f°", Float.valueOf(currentAngle)));
                }
            }
        }
    }

    @Override // androidx.appcompat.widget.z, android.widget.ImageView
    public void setImageBitmap(Bitmap bitmap) {
        setImageDrawable(new yn.a(bitmap));
    }

    @Override // android.widget.ImageView
    public void setImageMatrix(Matrix matrix) {
        super.setImageMatrix(matrix);
        Matrix matrix2 = this.f21319v;
        matrix2.set(matrix);
        matrix2.mapPoints(this.f21316d, this.E);
        matrix2.mapPoints(this.f21317e, this.F);
    }

    public void setMaxBitmapSize(int i5) {
        this.I = i5;
    }

    @Override // android.widget.ImageView
    public void setScaleType(ImageView.ScaleType scaleType) {
        if (scaleType == ImageView.ScaleType.MATRIX) {
            super.setScaleType(scaleType);
        } else {
            Log.w("TransformImageView", "Invalid ScaleType. Only ScaleType.MATRIX can be used");
        }
    }

    public void setTransformImageListener(e eVar) {
        this.f21322y = eVar;
    }
}
