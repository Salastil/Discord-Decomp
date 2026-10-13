package gm;

import android.graphics.Canvas;
import android.graphics.LinearGradient;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.RectF;
import android.graphics.Shader;
import android.view.View;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ThemedReactContext;

/* loaded from: classes3.dex */
public final class a extends View {
    public boolean E;
    public float[] F;
    public float G;
    public int[] H;
    public float[] I;

    /* renamed from: d, reason: collision with root package name */
    public final Paint f9367d;

    /* renamed from: e, reason: collision with root package name */
    public Path f9368e;

    /* renamed from: i, reason: collision with root package name */
    public RectF f9369i;

    /* renamed from: v, reason: collision with root package name */
    public float[] f9370v;

    /* renamed from: w, reason: collision with root package name */
    public float[] f9371w;

    /* renamed from: x, reason: collision with root package name */
    public float[] f9372x;

    /* renamed from: y, reason: collision with root package name */
    public int[] f9373y;

    public a(ThemedReactContext themedReactContext) {
        super(themedReactContext);
        this.f9367d = new Paint(1);
        this.f9371w = new float[]{0.0f, 0.0f};
        this.f9372x = new float[]{0.0f, 1.0f};
        this.E = false;
        this.F = new float[]{0.5f, 0.5f};
        this.G = 45.0f;
        this.H = new int[]{0, 0};
        this.I = new float[]{0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    }

    public final void a() {
        float[] fArr;
        float[] fArr2;
        float[] fArr3;
        int[] iArr = this.f9373y;
        if (iArr != null) {
            float[] fArr4 = this.f9370v;
            if (fArr4 == null || iArr.length == fArr4.length) {
                if (!this.E || this.F == null) {
                    float[] fArr5 = this.f9371w;
                    float f2 = fArr5[0];
                    int[] iArr2 = this.H;
                    float f10 = iArr2[0];
                    float f11 = fArr5[1];
                    float f12 = iArr2[1];
                    fArr = new float[]{f2 * f10, f11 * f12};
                    float[] fArr6 = this.f9372x;
                    fArr2 = new float[]{fArr6[0] * f10, fArr6[1] * f12};
                } else {
                    float f13 = 90.0f - this.G;
                    int[] iArr3 = this.H;
                    float f14 = f13 % 360.0f;
                    if (f14 < 0.0f) {
                        f14 += 360.0f;
                    }
                    if (f14 % 90.0f == 0.0f) {
                        float f15 = iArr3[0] / 2.0f;
                        float f16 = iArr3[1] / 2.0f;
                        fArr3 = f14 == 0.0f ? new float[]{-f15, 0.0f} : f14 == 90.0f ? new float[]{0.0f, -f16} : f14 == 180.0f ? new float[]{f15, 0.0f} : new float[]{0.0f, f16};
                    } else {
                        float tan = (float) Math.tan((f14 * 3.141592653589793d) / 180.0d);
                        float f17 = (-1.0f) / tan;
                        float f18 = iArr3[0] / 2.0f;
                        float f19 = iArr3[1] / 2.0f;
                        float[] fArr7 = f14 < 90.0f ? new float[]{-f18, -f19} : f14 < 180.0f ? new float[]{f18, -f19} : f14 < 270.0f ? new float[]{f18, f19} : new float[]{-f18, f19};
                        float f20 = (fArr7[1] - (fArr7[0] * f17)) / (tan - f17);
                        fArr3 = new float[]{f20, tan * f20};
                    }
                    float[] fArr8 = this.F;
                    float f21 = fArr8[0];
                    int[] iArr4 = this.H;
                    float[] fArr9 = {f21 * iArr4[0], fArr8[1] * iArr4[1]};
                    fArr = new float[]{fArr9[0] + fArr3[0], fArr9[1] - fArr3[1]};
                    fArr2 = new float[]{fArr9[0] - fArr3[0], fArr9[1] + fArr3[1]};
                }
                this.f9367d.setShader(new LinearGradient(fArr[0], fArr[1], fArr2[0], fArr2[1], this.f9373y, this.f9370v, Shader.TileMode.CLAMP));
                invalidate();
            }
        }
    }

    public final void b() {
        if (this.f9368e == null) {
            this.f9368e = new Path();
            this.f9369i = new RectF();
        }
        this.f9368e.reset();
        RectF rectF = this.f9369i;
        int[] iArr = this.H;
        rectF.set(0.0f, 0.0f, iArr[0], iArr[1]);
        this.f9368e.addRoundRect(this.f9369i, this.I, Path.Direction.CW);
    }

    @Override // android.view.View
    public final void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        Path path = this.f9368e;
        Paint paint = this.f9367d;
        if (path == null) {
            canvas.drawPaint(paint);
        } else {
            canvas.drawPath(path, paint);
        }
    }

    @Override // android.view.View
    public final void onSizeChanged(int i5, int i6, int i10, int i11) {
        this.H = new int[]{i5, i6};
        b();
        a();
    }

    public void setAngle(float f2) {
        this.G = f2;
        a();
    }

    public void setAngleCenter(ReadableMap readableMap) {
        this.F = new float[]{(float) readableMap.getDouble("x"), (float) readableMap.getDouble("y")};
        a();
    }

    public void setBorderRadii(ReadableArray readableArray) {
        int size = readableArray.size();
        float[] fArr = new float[size];
        for (int i5 = 0; i5 < size; i5++) {
            fArr[i5] = PixelUtil.toPixelFromDIP((float) readableArray.getDouble(i5));
        }
        this.I = fArr;
        b();
        a();
    }

    public void setColors(ReadableArray readableArray) {
        int size = readableArray.size();
        int[] iArr = new int[size];
        for (int i5 = 0; i5 < size; i5++) {
            iArr[i5] = readableArray.getType(i5) == ReadableType.Map ? ColorPropConverter.getColor(readableArray.getMap(i5), getContext()).intValue() : readableArray.getInt(i5);
        }
        this.f9373y = iArr;
        a();
    }

    public void setEndPoint(ReadableMap readableMap) {
        this.f9372x = new float[]{(float) readableMap.getDouble("x"), (float) readableMap.getDouble("y")};
        a();
    }

    public void setLocations(ReadableArray readableArray) {
        int size = readableArray.size();
        float[] fArr = new float[size];
        for (int i5 = 0; i5 < size; i5++) {
            fArr[i5] = (float) readableArray.getDouble(i5);
        }
        this.f9370v = fArr;
        a();
    }

    public void setStartPoint(ReadableMap readableMap) {
        this.f9371w = new float[]{(float) readableMap.getDouble("x"), (float) readableMap.getDouble("y")};
        a();
    }

    public void setUseAngle(boolean z5) {
        this.E = z5;
        a();
    }
}
