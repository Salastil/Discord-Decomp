package n4;

import android.graphics.Canvas;
import android.graphics.LinearGradient;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.PointF;
import android.graphics.RadialGradient;
import android.graphics.RectF;
import android.graphics.Shader;
import l4.v;
import l4.z;

/* loaded from: classes.dex */
public final class i extends b {
    public final o4.j A;
    public o4.r B;

    /* renamed from: r, reason: collision with root package name */
    public final String f14896r;

    /* renamed from: s, reason: collision with root package name */
    public final boolean f14897s;

    /* renamed from: t, reason: collision with root package name */
    public final s.k f14898t;

    /* renamed from: u, reason: collision with root package name */
    public final s.k f14899u;

    /* renamed from: v, reason: collision with root package name */
    public final RectF f14900v;

    /* renamed from: w, reason: collision with root package name */
    public final int f14901w;

    /* renamed from: x, reason: collision with root package name */
    public final int f14902x;

    /* renamed from: y, reason: collision with root package name */
    public final o4.j f14903y;

    /* renamed from: z, reason: collision with root package name */
    public final o4.j f14904z;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public i(v vVar, t4.b bVar, s4.e eVar) {
        super(vVar, bVar, r5, r0 != 0 ? r0 != 1 ? r0 != 2 ? null : Paint.Join.BEVEL : Paint.Join.ROUND : Paint.Join.MITER, eVar.j, eVar.f17763d, eVar.f17766g, eVar.k, eVar.f17769l);
        int b10 = f0.e.b(eVar.f17767h);
        Paint.Cap cap = b10 != 0 ? b10 != 1 ? Paint.Cap.SQUARE : Paint.Cap.ROUND : Paint.Cap.BUTT;
        int b11 = f0.e.b(eVar.f17768i);
        this.f14898t = new s.k();
        this.f14899u = new s.k();
        this.f14900v = new RectF();
        this.f14896r = eVar.a;
        this.f14901w = eVar.f17761b;
        this.f14897s = eVar.f17770m;
        this.f14902x = (int) (vVar.f13787d.b() / 32.0f);
        o4.e l02 = eVar.f17762c.l0();
        this.f14903y = (o4.j) l02;
        l02.a(this);
        bVar.f(l02);
        o4.e l03 = eVar.f17764e.l0();
        this.f14904z = (o4.j) l03;
        l03.a(this);
        bVar.f(l03);
        o4.e l04 = eVar.f17765f.l0();
        this.A = (o4.j) l04;
        l04.a(this);
        bVar.f(l04);
    }

    @Override // n4.b, q4.f
    public final void c(e4.e eVar, Object obj) {
        super.c(eVar, obj);
        if (obj == z.G) {
            o4.r rVar = this.B;
            t4.b bVar = this.f14843f;
            if (rVar != null) {
                bVar.p(rVar);
            }
            o4.r rVar2 = new o4.r(eVar, null);
            this.B = rVar2;
            rVar2.a(this);
            bVar.f(this.B);
        }
    }

    public final int[] f(int[] iArr) {
        o4.r rVar = this.B;
        if (rVar != null) {
            Integer[] numArr = (Integer[]) rVar.e();
            int i5 = 0;
            if (iArr.length == numArr.length) {
                while (i5 < iArr.length) {
                    iArr[i5] = numArr[i5].intValue();
                    i5++;
                }
            } else {
                iArr = new int[numArr.length];
                while (i5 < numArr.length) {
                    iArr[i5] = numArr[i5].intValue();
                    i5++;
                }
            }
        }
        return iArr;
    }

    @Override // n4.b, n4.e
    public final void g(Canvas canvas, Matrix matrix, int i5) {
        Shader shader;
        Shader radialGradient;
        if (this.f14897s) {
            return;
        }
        e(this.f14900v, matrix, false);
        int i6 = this.f14901w;
        o4.j jVar = this.f14903y;
        o4.j jVar2 = this.A;
        o4.j jVar3 = this.f14904z;
        if (i6 == 1) {
            long i10 = i();
            s.k kVar = this.f14898t;
            shader = (LinearGradient) kVar.b(i10);
            if (shader == null) {
                PointF pointF = (PointF) jVar3.e();
                PointF pointF2 = (PointF) jVar2.e();
                s4.c cVar = (s4.c) jVar.e();
                radialGradient = new LinearGradient(pointF.x, pointF.y, pointF2.x, pointF2.y, f(cVar.f17753b), cVar.a, Shader.TileMode.CLAMP);
                kVar.e(i10, radialGradient);
                shader = radialGradient;
            }
            this.f14846i.setShader(shader);
            super.g(canvas, matrix, i5);
        }
        long i11 = i();
        s.k kVar2 = this.f14899u;
        shader = (RadialGradient) kVar2.b(i11);
        if (shader == null) {
            PointF pointF3 = (PointF) jVar3.e();
            PointF pointF4 = (PointF) jVar2.e();
            s4.c cVar2 = (s4.c) jVar.e();
            int[] f2 = f(cVar2.f17753b);
            float[] fArr = cVar2.a;
            radialGradient = new RadialGradient(pointF3.x, pointF3.y, (float) Math.hypot(pointF4.x - r10, pointF4.y - r11), f2, fArr, Shader.TileMode.CLAMP);
            kVar2.e(i11, radialGradient);
            shader = radialGradient;
        }
        this.f14846i.setShader(shader);
        super.g(canvas, matrix, i5);
    }

    @Override // n4.c
    public final String getName() {
        return this.f14896r;
    }

    public final int i() {
        float f2 = this.f14904z.f15747d;
        float f10 = this.f14902x;
        int round = Math.round(f2 * f10);
        int round2 = Math.round(this.A.f15747d * f10);
        int round3 = Math.round(this.f14903y.f15747d * f10);
        int i5 = round != 0 ? 527 * round : 17;
        if (round2 != 0) {
            i5 = i5 * 31 * round2;
        }
        return round3 != 0 ? i5 * 31 * round3 : i5;
    }
}
