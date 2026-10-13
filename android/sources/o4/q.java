package o4;

import android.graphics.Matrix;
import android.graphics.PointF;
import java.util.Collections;
import l4.z;
import qa.t;

/* loaded from: classes.dex */
public final class q {
    public final Matrix a = new Matrix();

    /* renamed from: b, reason: collision with root package name */
    public final Matrix f15779b;

    /* renamed from: c, reason: collision with root package name */
    public final Matrix f15780c;

    /* renamed from: d, reason: collision with root package name */
    public final Matrix f15781d;

    /* renamed from: e, reason: collision with root package name */
    public final float[] f15782e;

    /* renamed from: f, reason: collision with root package name */
    public e f15783f;

    /* renamed from: g, reason: collision with root package name */
    public e f15784g;

    /* renamed from: h, reason: collision with root package name */
    public e f15785h;

    /* renamed from: i, reason: collision with root package name */
    public e f15786i;
    public e j;
    public i k;

    /* renamed from: l, reason: collision with root package name */
    public i f15787l;

    /* renamed from: m, reason: collision with root package name */
    public e f15788m;

    /* renamed from: n, reason: collision with root package name */
    public e f15789n;

    /* renamed from: o, reason: collision with root package name */
    public final boolean f15790o;

    public q(r4.d dVar) {
        t tVar = dVar.a;
        this.f15783f = tVar == null ? null : tVar.l0();
        r4.e eVar = dVar.f17130b;
        this.f15784g = eVar == null ? null : eVar.l0();
        r4.a aVar = dVar.f17131c;
        this.f15785h = aVar == null ? null : aVar.l0();
        r4.b bVar = dVar.f17132d;
        this.f15786i = bVar == null ? null : bVar.l0();
        r4.b bVar2 = dVar.f17134f;
        i l02 = bVar2 == null ? null : bVar2.l0();
        this.k = l02;
        this.f15790o = dVar.j;
        if (l02 != null) {
            this.f15779b = new Matrix();
            this.f15780c = new Matrix();
            this.f15781d = new Matrix();
            this.f15782e = new float[9];
        } else {
            this.f15779b = null;
            this.f15780c = null;
            this.f15781d = null;
            this.f15782e = null;
        }
        r4.b bVar3 = dVar.f17135g;
        this.f15787l = bVar3 == null ? null : bVar3.l0();
        r4.a aVar2 = dVar.f17133e;
        if (aVar2 != null) {
            this.j = aVar2.l0();
        }
        r4.b bVar4 = dVar.f17136h;
        if (bVar4 != null) {
            this.f15788m = bVar4.l0();
        } else {
            this.f15788m = null;
        }
        r4.b bVar5 = dVar.f17137i;
        if (bVar5 != null) {
            this.f15789n = bVar5.l0();
        } else {
            this.f15789n = null;
        }
    }

    public final void a(t4.b bVar) {
        bVar.f(this.j);
        bVar.f(this.f15788m);
        bVar.f(this.f15789n);
        bVar.f(this.f15783f);
        bVar.f(this.f15784g);
        bVar.f(this.f15785h);
        bVar.f(this.f15786i);
        bVar.f(this.k);
        bVar.f(this.f15787l);
    }

    public final void b(a aVar) {
        e eVar = this.j;
        if (eVar != null) {
            eVar.a(aVar);
        }
        e eVar2 = this.f15788m;
        if (eVar2 != null) {
            eVar2.a(aVar);
        }
        e eVar3 = this.f15789n;
        if (eVar3 != null) {
            eVar3.a(aVar);
        }
        e eVar4 = this.f15783f;
        if (eVar4 != null) {
            eVar4.a(aVar);
        }
        e eVar5 = this.f15784g;
        if (eVar5 != null) {
            eVar5.a(aVar);
        }
        e eVar6 = this.f15785h;
        if (eVar6 != null) {
            eVar6.a(aVar);
        }
        e eVar7 = this.f15786i;
        if (eVar7 != null) {
            eVar7.a(aVar);
        }
        i iVar = this.k;
        if (iVar != null) {
            iVar.a(aVar);
        }
        i iVar2 = this.f15787l;
        if (iVar2 != null) {
            iVar2.a(aVar);
        }
    }

    public final boolean c(e4.e eVar, Object obj) {
        Float valueOf = Float.valueOf(100.0f);
        Float valueOf2 = Float.valueOf(0.0f);
        if (obj == z.a) {
            e eVar2 = this.f15783f;
            if (eVar2 == null) {
                this.f15783f = new r(eVar, new PointF());
                return true;
            }
            eVar2.j(eVar);
            return true;
        }
        if (obj == z.f13812b) {
            e eVar3 = this.f15784g;
            if (eVar3 == null) {
                this.f15784g = new r(eVar, new PointF());
                return true;
            }
            eVar3.j(eVar);
            return true;
        }
        if (obj == z.f13813c) {
            e eVar4 = this.f15784g;
            if (eVar4 instanceof o) {
                ((o) eVar4).f15774m = eVar;
                return true;
            }
        }
        if (obj == z.f13814d) {
            e eVar5 = this.f15784g;
            if (eVar5 instanceof o) {
                ((o) eVar5).f15775n = eVar;
                return true;
            }
        }
        if (obj == z.j) {
            e eVar6 = this.f15785h;
            if (eVar6 == null) {
                this.f15785h = new r(eVar, new y4.b());
                return true;
            }
            eVar6.j(eVar);
            return true;
        }
        if (obj == z.k) {
            e eVar7 = this.f15786i;
            if (eVar7 == null) {
                this.f15786i = new r(eVar, valueOf2);
                return true;
            }
            eVar7.j(eVar);
            return true;
        }
        if (obj == 3) {
            e eVar8 = this.j;
            if (eVar8 == null) {
                this.j = new r(eVar, 100);
                return true;
            }
            eVar8.j(eVar);
            return true;
        }
        if (obj == z.f13832x) {
            e eVar9 = this.f15788m;
            if (eVar9 == null) {
                this.f15788m = new r(eVar, valueOf);
                return true;
            }
            eVar9.j(eVar);
            return true;
        }
        if (obj == z.f13833y) {
            e eVar10 = this.f15789n;
            if (eVar10 == null) {
                this.f15789n = new r(eVar, valueOf);
                return true;
            }
            eVar10.j(eVar);
            return true;
        }
        if (obj == z.f13820l) {
            if (this.k == null) {
                this.k = new i(Collections.singletonList(new y4.a(valueOf2)));
            }
            this.k.j(eVar);
            return true;
        }
        if (obj != z.f13821m) {
            return false;
        }
        if (this.f15787l == null) {
            this.f15787l = new i(Collections.singletonList(new y4.a(valueOf2)));
        }
        this.f15787l.j(eVar);
        return true;
    }

    public final void d() {
        for (int i5 = 0; i5 < 9; i5++) {
            this.f15782e[i5] = 0.0f;
        }
    }

    public final Matrix e() {
        PointF pointF;
        y4.b bVar;
        PointF pointF2;
        Matrix matrix = this.a;
        matrix.reset();
        e eVar = this.f15784g;
        if (eVar != null && (pointF2 = (PointF) eVar.e()) != null) {
            float f2 = pointF2.x;
            if (f2 != 0.0f || pointF2.y != 0.0f) {
                matrix.preTranslate(f2, pointF2.y);
            }
        }
        if (!this.f15790o) {
            e eVar2 = this.f15786i;
            if (eVar2 != null) {
                float floatValue = eVar2 instanceof r ? ((Float) eVar2.e()).floatValue() : ((i) eVar2).k();
                if (floatValue != 0.0f) {
                    matrix.preRotate(floatValue);
                }
            }
        } else if (eVar != null) {
            float f10 = eVar.f15747d;
            PointF pointF3 = (PointF) eVar.e();
            float f11 = pointF3.x;
            float f12 = pointF3.y;
            eVar.i(1.0E-4f + f10);
            PointF pointF4 = (PointF) eVar.e();
            eVar.i(f10);
            matrix.preRotate((float) Math.toDegrees(Math.atan2(pointF4.y - f12, pointF4.x - f11)));
        }
        if (this.k != null) {
            float cos = this.f15787l == null ? 0.0f : (float) Math.cos(Math.toRadians((-r4.k()) + 90.0f));
            float sin = this.f15787l == null ? 1.0f : (float) Math.sin(Math.toRadians((-r6.k()) + 90.0f));
            float tan = (float) Math.tan(Math.toRadians(r1.k()));
            d();
            float[] fArr = this.f15782e;
            fArr[0] = cos;
            fArr[1] = sin;
            float f13 = -sin;
            fArr[3] = f13;
            fArr[4] = cos;
            fArr[8] = 1.0f;
            Matrix matrix2 = this.f15779b;
            matrix2.setValues(fArr);
            d();
            fArr[0] = 1.0f;
            fArr[3] = tan;
            fArr[4] = 1.0f;
            fArr[8] = 1.0f;
            Matrix matrix3 = this.f15780c;
            matrix3.setValues(fArr);
            d();
            fArr[0] = cos;
            fArr[1] = f13;
            fArr[3] = sin;
            fArr[4] = cos;
            fArr[8] = 1.0f;
            Matrix matrix4 = this.f15781d;
            matrix4.setValues(fArr);
            matrix3.preConcat(matrix2);
            matrix4.preConcat(matrix3);
            matrix.preConcat(matrix4);
        }
        e eVar3 = this.f15785h;
        if (eVar3 != null && (bVar = (y4.b) eVar3.e()) != null) {
            float f14 = bVar.a;
            if (f14 != 1.0f || bVar.f20664b != 1.0f) {
                matrix.preScale(f14, bVar.f20664b);
            }
        }
        e eVar4 = this.f15783f;
        if (eVar4 != null && (pointF = (PointF) eVar4.e()) != null) {
            float f15 = pointF.x;
            if (f15 != 0.0f || pointF.y != 0.0f) {
                matrix.preTranslate(-f15, -pointF.y);
            }
        }
        return matrix;
    }

    public final Matrix f(float f2) {
        e eVar = this.f15784g;
        PointF pointF = eVar == null ? null : (PointF) eVar.e();
        e eVar2 = this.f15785h;
        y4.b bVar = eVar2 == null ? null : (y4.b) eVar2.e();
        Matrix matrix = this.a;
        matrix.reset();
        if (pointF != null) {
            matrix.preTranslate(pointF.x * f2, pointF.y * f2);
        }
        if (bVar != null) {
            double d6 = f2;
            matrix.preScale((float) Math.pow(bVar.a, d6), (float) Math.pow(bVar.f20664b, d6));
        }
        e eVar3 = this.f15786i;
        if (eVar3 != null) {
            float floatValue = ((Float) eVar3.e()).floatValue();
            e eVar4 = this.f15783f;
            PointF pointF2 = eVar4 != null ? (PointF) eVar4.e() : null;
            matrix.preRotate(floatValue * f2, pointF2 == null ? 0.0f : pointF2.x, pointF2 != null ? pointF2.y : 0.0f);
        }
        return matrix;
    }
}
