package gh;

import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PathMeasure;
import android.graphics.RectF;
import android.util.Pair;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class e extends r {

    /* renamed from: f, reason: collision with root package name */
    public float f9254f;

    /* renamed from: g, reason: collision with root package name */
    public float f9255g;

    /* renamed from: h, reason: collision with root package name */
    public float f9256h;

    /* renamed from: i, reason: collision with root package name */
    public float f9257i;
    public float j;
    public float k;

    /* renamed from: l, reason: collision with root package name */
    public int f9258l;

    /* renamed from: m, reason: collision with root package name */
    public float f9259m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f9260n;

    /* renamed from: o, reason: collision with root package name */
    public float f9261o;

    /* renamed from: p, reason: collision with root package name */
    public final RectF f9262p;

    /* renamed from: q, reason: collision with root package name */
    public final Pair f9263q;

    public e(k kVar) {
        super(kVar);
        this.f9262p = new RectF();
        this.f9263q = new Pair(new q(), new q());
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // gh.r
    public final void a() {
        int i5;
        Path path = this.f9320b;
        path.rewind();
        path.moveTo(1.0f, 0.0f);
        int i6 = 0;
        int i10 = 0;
        while (true) {
            i5 = 2;
            if (i10 >= 2) {
                break;
            }
            path.cubicTo(1.0f, 0.5522848f, 0.5522848f, 1.0f, 0.0f, 1.0f);
            path.cubicTo(-0.5522848f, 1.0f, -1.0f, 0.5522848f, -1.0f, 0.0f);
            path.cubicTo(-1.0f, -0.5522848f, -0.5522848f, -1.0f, 0.0f, -1.0f);
            path.cubicTo(0.5522848f, -1.0f, 1.0f, -0.5522848f, 1.0f, 0.0f);
            i10++;
        }
        Matrix matrix = this.f9323e;
        matrix.reset();
        float f2 = this.f9257i;
        matrix.setScale(f2, f2);
        path.transform(matrix);
        boolean a = this.a.a(this.f9260n);
        PathMeasure pathMeasure = this.f9322d;
        if (a) {
            pathMeasure.setPath(path, false);
            float f10 = this.k;
            path.rewind();
            float length = pathMeasure.getLength();
            float f11 = 2.0f;
            int max = Math.max(3, (int) ((length / (this.f9260n ? r2.j : r2.k)) / 2.0f)) * 2;
            this.j = length / max;
            ArrayList arrayList = new ArrayList();
            for (int i11 = 0; i11 < max; i11++) {
                q qVar = new q();
                float f12 = i11;
                pathMeasure.getPosTan(this.j * f12, qVar.a, qVar.f9318b);
                q qVar2 = new q();
                float f13 = this.j;
                pathMeasure.getPosTan((f13 / 2.0f) + (f12 * f13), qVar2.a, qVar2.f9318b);
                arrayList.add(qVar);
                qVar2.a(f10 * 2.0f);
                arrayList.add(qVar2);
            }
            arrayList.add((q) arrayList.get(0));
            q qVar3 = (q) arrayList.get(0);
            float[] fArr = qVar3.a;
            char c6 = 1;
            path.moveTo(fArr[0], fArr[1]);
            int i12 = 1;
            while (i12 < arrayList.size()) {
                q qVar4 = (q) arrayList.get(i12);
                float f14 = (this.j / f11) * 0.48f;
                float[] fArr2 = qVar3.a;
                float[] fArr3 = new float[i5];
                System.arraycopy(fArr2, i6, fArr3, i6, i5);
                System.arraycopy(qVar3.f9318b, i6, new float[i5], i6, i5);
                new Matrix();
                float[] fArr4 = qVar4.a;
                float[] fArr5 = new float[i5];
                System.arraycopy(fArr4, i6, fArr5, i6, i5);
                System.arraycopy(qVar4.f9318b, i6, new float[i5], i6, i5);
                new Matrix();
                char c8 = c6;
                float atan2 = (float) Math.atan2(r6[c6], r6[i6]);
                double d6 = fArr3[i6];
                double d7 = f14;
                int i13 = i6;
                double d8 = atan2;
                fArr3[i13] = (float) ((Math.cos(d8) * d7) + d6);
                fArr3[c8] = (float) ((Math.sin(d8) * d7) + fArr3[c8]);
                double d10 = -f14;
                double atan22 = (float) Math.atan2(r11[c8], r11[i13]);
                fArr5[i13] = (float) ((Math.cos(atan22) * d10) + fArr5[i13]);
                float sin = (float) ((Math.sin(atan22) * d10) + fArr5[c8]);
                fArr5[c8] = sin;
                float f15 = fArr3[i13];
                float f16 = fArr3[c8];
                float f17 = fArr5[i13];
                float[] fArr6 = qVar4.a;
                path.cubicTo(f15, f16, f17, sin, fArr6[i13], fArr6[c8]);
                i12++;
                qVar3 = qVar4;
                c6 = c8;
                i6 = i13;
                pathMeasure = pathMeasure;
                i5 = 2;
                f11 = 2.0f;
            }
        }
        pathMeasure.setPath(path, i6);
    }

    public final void c(Canvas canvas, Paint paint, float f2, float f10, int i5, int i6, int i10, float f11, float f12, boolean z5) {
        float f13;
        float f14;
        Canvas canvas2;
        float f15 = f10 >= f2 ? f10 - f2 : (f10 + 1.0f) - f2;
        float f16 = f2 % 1.0f;
        if (f16 < 0.0f) {
            f16 += 1.0f;
        }
        if (this.f9261o < 1.0f) {
            float f17 = f16 + f15;
            if (f17 > 1.0f) {
                c(canvas, paint, f16, 1.0f, i5, i6, 0, f11, f12, z5);
                c(canvas, paint, 1.0f, f17, i5, 0, i10, f11, f12, z5);
                return;
            }
        }
        float degrees = (float) Math.toDegrees(this.f9255g / this.f9257i);
        float f18 = f15 - 0.99f;
        if (f18 >= 0.0f) {
            float f19 = ((f18 * degrees) / 180.0f) / 0.01f;
            f15 += f19;
            if (!z5) {
                f16 -= f19 / 2.0f;
            }
        }
        float q5 = tn.g.q(1.0f - this.f9261o, 1.0f, f16);
        float q6 = tn.g.q(0.0f, this.f9261o, f15);
        float degrees2 = (float) Math.toDegrees(i6 / this.f9257i);
        float degrees3 = ((q6 * 360.0f) - degrees2) - ((float) Math.toDegrees(i10 / this.f9257i));
        float f20 = (q5 * 360.0f) + degrees2;
        if (degrees3 <= 0.0f) {
            return;
        }
        k kVar = this.a;
        boolean z6 = kVar.a(this.f9260n) && z5 && f11 > 0.0f;
        paint.setAntiAlias(true);
        paint.setColor(i5);
        paint.setStrokeWidth(this.f9254f);
        float f21 = this.f9255g * 2.0f;
        float f22 = degrees * 2.0f;
        PathMeasure pathMeasure = this.f9322d;
        if (degrees3 < f22) {
            float f23 = degrees3 / f22;
            float f24 = (degrees * f23) + f20;
            q qVar = new q();
            if (z6) {
                float length = (pathMeasure.getLength() * (f24 / 360.0f)) / 2.0f;
                float f25 = this.f9256h * f11;
                float f26 = this.f9257i;
                if (f26 != this.f9259m || f25 != this.k) {
                    this.k = f25;
                    this.f9259m = f26;
                    a();
                }
                pathMeasure.getPosTan(length, qVar.a, qVar.f9318b);
            } else {
                qVar.c(f24 + 90.0f);
                qVar.a(-this.f9257i);
            }
            paint.setStyle(Paint.Style.FILL);
            d(canvas, paint, qVar, f21, this.f9254f, f23);
            return;
        }
        paint.setStyle(Paint.Style.STROKE);
        paint.setStrokeCap((kVar.f9290d && kVar.f9289c == 0.5f) ? Paint.Cap.ROUND : Paint.Cap.BUTT);
        float f27 = f20 + degrees;
        float f28 = degrees3 - f22;
        Pair pair = this.f9263q;
        ((q) pair.first).b();
        ((q) pair.second).b();
        if (z6) {
            float f29 = f27 / 360.0f;
            float f30 = f28 / 360.0f;
            float f31 = this.f9256h * f11;
            int i11 = this.f9260n ? kVar.j : kVar.k;
            float f32 = this.f9257i;
            if (f32 != this.f9259m || f31 != this.k || i11 != this.f9258l) {
                this.k = f31;
                this.f9258l = i11;
                this.f9259m = f32;
                a();
            }
            Path path = this.f9321c;
            path.rewind();
            float c6 = jb.a.c(f30, 0.0f, 1.0f);
            if (kVar.a(this.f9260n)) {
                f13 = 1.0f;
                float f33 = f12 / ((float) ((this.f9257i * 6.283185307179586d) / this.j));
                f29 += f33;
                f14 = 0.0f - (f33 * 360.0f);
            } else {
                f13 = 1.0f;
                f14 = 0.0f;
            }
            float f34 = f29 % f13;
            float length2 = (pathMeasure.getLength() * f34) / 2.0f;
            float length3 = (pathMeasure.getLength() * (f34 + c6)) / 2.0f;
            pathMeasure.getSegment(length2, length3, path, true);
            q qVar2 = (q) pair.first;
            qVar2.b();
            pathMeasure.getPosTan(length2, qVar2.a, qVar2.f9318b);
            q qVar3 = (q) pair.second;
            qVar3.b();
            pathMeasure.getPosTan(length3, qVar3.a, qVar3.f9318b);
            Matrix matrix = this.f9323e;
            matrix.reset();
            matrix.setRotate(f14);
            qVar2.c(f14);
            qVar3.c(f14);
            path.transform(matrix);
            canvas2 = canvas;
            canvas2.drawPath(path, paint);
        } else {
            ((q) pair.first).c(f27 + 90.0f);
            ((q) pair.first).a(-this.f9257i);
            ((q) pair.second).c(f27 + f28 + 90.0f);
            ((q) pair.second).a(-this.f9257i);
            float f35 = this.f9257i;
            float f36 = -f35;
            RectF rectF = this.f9262p;
            rectF.set(f36, f36, f35, f35);
            canvas.drawArc(rectF, f27, f28, false, paint);
            canvas2 = canvas;
        }
        if (!(kVar.f9290d && kVar.f9289c == 0.5f) && this.f9255g > 0.0f) {
            paint.setStyle(Paint.Style.FILL);
            d(canvas2, paint, (q) pair.first, f21, this.f9254f, 1.0f);
            d(canvas, paint, (q) pair.second, f21, this.f9254f, 1.0f);
        }
    }

    public final void d(Canvas canvas, Paint paint, q qVar, float f2, float f10, float f11) {
        float min = Math.min(f10, this.f9254f);
        float f12 = f2 / 2.0f;
        float min2 = Math.min(f12, (this.f9255g * min) / this.f9254f);
        RectF rectF = new RectF((-f2) / 2.0f, (-min) / 2.0f, f12, min / 2.0f);
        canvas.save();
        float[] fArr = qVar.a;
        canvas.translate(fArr[0], fArr[1]);
        float[] fArr2 = qVar.f9318b;
        canvas.rotate((float) Math.toDegrees(Math.atan2(fArr2[1], fArr2[0])));
        canvas.scale(f11, f11);
        canvas.drawRoundRect(rectF, min2, min2, paint);
        canvas.restore();
    }

    public final void e(Canvas canvas, Paint paint, p pVar, int i5) {
        int k = com.facebook.imagepipeline.nativecode.c.k(pVar.f9313c, i5);
        canvas.save();
        canvas.rotate(pVar.f9316f);
        this.f9260n = pVar.f9317g;
        c(canvas, paint, pVar.a, pVar.f9312b, k, 0, 0, pVar.f9314d, pVar.f9315e, true);
        canvas.restore();
    }

    public final void f(Canvas canvas, Paint paint, float f2, float f10, int i5, int i6, int i10) {
        int k = com.facebook.imagepipeline.nativecode.c.k(i5, i6);
        this.f9260n = false;
        c(canvas, paint, f2, f10, k, i10, i10, 0.0f, 0.0f, false);
    }

    public final int g() {
        k kVar = this.a;
        return (kVar.f9301q * 2) + kVar.f9300p;
    }
}
