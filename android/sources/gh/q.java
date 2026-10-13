package gh;

import android.graphics.Matrix;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class q {
    public final float[] a = new float[2];

    /* renamed from: b, reason: collision with root package name */
    public final float[] f9318b = {1.0f, 0.0f};

    /* renamed from: c, reason: collision with root package name */
    public final Matrix f9319c = new Matrix();

    public final void a(float f2) {
        float[] fArr = this.f9318b;
        float atan2 = (float) (Math.atan2(fArr[1], fArr[0]) + 1.5707963267948966d);
        float[] fArr2 = this.a;
        double d6 = f2;
        double d7 = atan2;
        fArr2[0] = (float) ((Math.cos(d7) * d6) + fArr2[0]);
        fArr2[1] = (float) ((Math.sin(d7) * d6) + fArr2[1]);
    }

    public final void b() {
        Arrays.fill(this.a, 0.0f);
        float[] fArr = this.f9318b;
        Arrays.fill(fArr, 0.0f);
        fArr[0] = 1.0f;
        this.f9319c.reset();
    }

    public final void c(float f2) {
        Matrix matrix = this.f9319c;
        matrix.reset();
        matrix.setRotate(f2);
        matrix.mapPoints(this.a);
        matrix.mapPoints(this.f9318b);
    }
}
