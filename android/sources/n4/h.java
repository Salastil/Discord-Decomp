package n4;

import af.h0;
import android.graphics.BlurMaskFilter;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.LinearGradient;
import android.graphics.Matrix;
import android.graphics.Path;
import android.graphics.PointF;
import android.graphics.RadialGradient;
import android.graphics.RectF;
import android.graphics.Shader;
import java.util.ArrayList;
import java.util.List;
import l4.v;
import l4.z;

/* loaded from: classes.dex */
public final class h implements e, o4.a, k {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f14878b;

    /* renamed from: c, reason: collision with root package name */
    public final t4.b f14879c;

    /* renamed from: d, reason: collision with root package name */
    public final s.k f14880d = new s.k();

    /* renamed from: e, reason: collision with root package name */
    public final s.k f14881e = new s.k();

    /* renamed from: f, reason: collision with root package name */
    public final Path f14882f;

    /* renamed from: g, reason: collision with root package name */
    public final m4.a f14883g;

    /* renamed from: h, reason: collision with root package name */
    public final RectF f14884h;

    /* renamed from: i, reason: collision with root package name */
    public final ArrayList f14885i;
    public final int j;
    public final o4.j k;

    /* renamed from: l, reason: collision with root package name */
    public final o4.f f14886l;

    /* renamed from: m, reason: collision with root package name */
    public final o4.j f14887m;

    /* renamed from: n, reason: collision with root package name */
    public final o4.j f14888n;

    /* renamed from: o, reason: collision with root package name */
    public o4.r f14889o;

    /* renamed from: p, reason: collision with root package name */
    public o4.r f14890p;

    /* renamed from: q, reason: collision with root package name */
    public final v f14891q;

    /* renamed from: r, reason: collision with root package name */
    public final int f14892r;

    /* renamed from: s, reason: collision with root package name */
    public o4.e f14893s;

    /* renamed from: t, reason: collision with root package name */
    public float f14894t;

    /* renamed from: u, reason: collision with root package name */
    public final o4.h f14895u;

    public h(v vVar, l4.i iVar, t4.b bVar, s4.d dVar) {
        Path path = new Path();
        this.f14882f = path;
        this.f14883g = new m4.a(1, 0);
        this.f14884h = new RectF();
        this.f14885i = new ArrayList();
        this.f14894t = 0.0f;
        this.f14879c = bVar;
        this.a = dVar.f17759g;
        this.f14878b = dVar.f17760h;
        this.f14891q = vVar;
        this.j = dVar.a;
        path.setFillType(dVar.f17754b);
        this.f14892r = (int) (iVar.b() / 32.0f);
        o4.e l02 = dVar.f17755c.l0();
        this.k = (o4.j) l02;
        l02.a(this);
        bVar.f(l02);
        o4.e l03 = dVar.f17756d.l0();
        this.f14886l = (o4.f) l03;
        l03.a(this);
        bVar.f(l03);
        o4.e l04 = dVar.f17757e.l0();
        this.f14887m = (o4.j) l04;
        l04.a(this);
        bVar.f(l04);
        o4.e l05 = dVar.f17758f.l0();
        this.f14888n = (o4.j) l05;
        l05.a(this);
        bVar.f(l05);
        if (bVar.l() != null) {
            o4.i l06 = ((r4.b) bVar.l().f17126e).l0();
            this.f14893s = l06;
            l06.a(this);
            bVar.f(this.f14893s);
        }
        if (bVar.m() != null) {
            this.f14895u = new o4.h(this, bVar, bVar.m());
        }
    }

    @Override // o4.a
    public final void a() {
        this.f14891q.invalidateSelf();
    }

    @Override // n4.c
    public final void b(List list, List list2) {
        for (int i5 = 0; i5 < list2.size(); i5++) {
            c cVar = (c) list2.get(i5);
            if (cVar instanceof m) {
                this.f14885i.add((m) cVar);
            }
        }
    }

    @Override // q4.f
    public final void c(e4.e eVar, Object obj) {
        PointF pointF = z.a;
        if (obj == 4) {
            this.f14886l.j(eVar);
            return;
        }
        ColorFilter colorFilter = z.F;
        t4.b bVar = this.f14879c;
        if (obj == colorFilter) {
            o4.r rVar = this.f14889o;
            if (rVar != null) {
                bVar.p(rVar);
            }
            o4.r rVar2 = new o4.r(eVar, null);
            this.f14889o = rVar2;
            rVar2.a(this);
            bVar.f(this.f14889o);
            return;
        }
        if (obj == z.G) {
            o4.r rVar3 = this.f14890p;
            if (rVar3 != null) {
                bVar.p(rVar3);
            }
            this.f14880d.a();
            this.f14881e.a();
            o4.r rVar4 = new o4.r(eVar, null);
            this.f14890p = rVar4;
            rVar4.a(this);
            bVar.f(this.f14890p);
            return;
        }
        if (obj == z.f13815e) {
            o4.e eVar2 = this.f14893s;
            if (eVar2 != null) {
                eVar2.j(eVar);
                return;
            }
            o4.r rVar5 = new o4.r(eVar, null);
            this.f14893s = rVar5;
            rVar5.a(this);
            bVar.f(this.f14893s);
            return;
        }
        o4.h hVar = this.f14895u;
        if (obj == 5 && hVar != null) {
            hVar.f15755c.j(eVar);
            return;
        }
        if (obj == z.B && hVar != null) {
            hVar.c(eVar);
            return;
        }
        if (obj == z.C && hVar != null) {
            hVar.f15757e.j(eVar);
            return;
        }
        if (obj == z.D && hVar != null) {
            hVar.f15758f.j(eVar);
        } else {
            if (obj != z.E || hVar == null) {
                return;
            }
            hVar.f15759g.j(eVar);
        }
    }

    @Override // q4.f
    public final void d(q4.e eVar, int i5, ArrayList arrayList, q4.e eVar2) {
        x4.g.f(eVar, i5, arrayList, eVar2, this);
    }

    @Override // n4.e
    public final void e(RectF rectF, Matrix matrix, boolean z5) {
        Path path = this.f14882f;
        path.reset();
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.f14885i;
            if (i5 >= arrayList.size()) {
                path.computeBounds(rectF, false);
                rectF.set(rectF.left - 1.0f, rectF.top - 1.0f, rectF.right + 1.0f, rectF.bottom + 1.0f);
                return;
            } else {
                path.addPath(((m) arrayList.get(i5)).h(), matrix);
                i5++;
            }
        }
    }

    public final int[] f(int[] iArr) {
        o4.r rVar = this.f14890p;
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

    /* JADX WARN: Removed duplicated region for block: B:18:0x00d8  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x00e5  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x0136  */
    @Override // n4.e
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void g(Canvas canvas, Matrix matrix, int i5) {
        Shader shader;
        Shader radialGradient;
        o4.r rVar;
        o4.e eVar;
        o4.h hVar;
        if (this.f14878b) {
            return;
        }
        Path path = this.f14882f;
        path.reset();
        int i6 = 0;
        while (true) {
            ArrayList arrayList = this.f14885i;
            if (i6 >= arrayList.size()) {
                break;
            }
            path.addPath(((m) arrayList.get(i6)).h(), matrix);
            i6++;
        }
        path.computeBounds(this.f14884h, false);
        int i10 = this.j;
        o4.j jVar = this.k;
        o4.j jVar2 = this.f14888n;
        o4.j jVar3 = this.f14887m;
        if (i10 != 1) {
            long i11 = i();
            s.k kVar = this.f14881e;
            shader = (RadialGradient) kVar.b(i11);
            if (shader == null) {
                PointF pointF = (PointF) jVar3.e();
                PointF pointF2 = (PointF) jVar2.e();
                s4.c cVar = (s4.c) jVar.e();
                int[] f2 = f(cVar.f17753b);
                float[] fArr = cVar.a;
                float f10 = pointF.x;
                float f11 = pointF.y;
                float hypot = (float) Math.hypot(pointF2.x - f10, pointF2.y - f11);
                if (hypot <= 0.0f) {
                    hypot = 0.001f;
                }
                radialGradient = new RadialGradient(f10, f11, hypot, f2, fArr, Shader.TileMode.CLAMP);
                kVar.e(i11, radialGradient);
                shader = radialGradient;
            }
            shader.setLocalMatrix(matrix);
            m4.a aVar = this.f14883g;
            aVar.setShader(shader);
            rVar = this.f14889o;
            if (rVar != null) {
            }
            eVar = this.f14893s;
            if (eVar != null) {
            }
            float f12 = i5 / 255.0f;
            int intValue = (int) (((((Integer) this.f14886l.e()).intValue() * f12) / 100.0f) * 255.0f);
            PointF pointF3 = x4.g.a;
            aVar.setAlpha(Math.max(0, Math.min(255, intValue)));
            hVar = this.f14895u;
            if (hVar != null) {
            }
            canvas.drawPath(path, aVar);
        }
        long i12 = i();
        s.k kVar2 = this.f14880d;
        shader = (LinearGradient) kVar2.b(i12);
        if (shader == null) {
            PointF pointF4 = (PointF) jVar3.e();
            PointF pointF5 = (PointF) jVar2.e();
            s4.c cVar2 = (s4.c) jVar.e();
            radialGradient = new LinearGradient(pointF4.x, pointF4.y, pointF5.x, pointF5.y, f(cVar2.f17753b), cVar2.a, Shader.TileMode.CLAMP);
            kVar2.e(i12, radialGradient);
            shader = radialGradient;
        }
        shader.setLocalMatrix(matrix);
        m4.a aVar2 = this.f14883g;
        aVar2.setShader(shader);
        rVar = this.f14889o;
        if (rVar != null) {
            aVar2.setColorFilter((ColorFilter) rVar.e());
        }
        eVar = this.f14893s;
        if (eVar != null) {
            float floatValue = ((Float) eVar.e()).floatValue();
            if (floatValue == 0.0f) {
                aVar2.setMaskFilter(null);
            } else if (floatValue != this.f14894t) {
                aVar2.setMaskFilter(new BlurMaskFilter(floatValue, BlurMaskFilter.Blur.NORMAL));
            }
            this.f14894t = floatValue;
        }
        float f122 = i5 / 255.0f;
        int intValue2 = (int) (((((Integer) this.f14886l.e()).intValue() * f122) / 100.0f) * 255.0f);
        PointF pointF32 = x4.g.a;
        aVar2.setAlpha(Math.max(0, Math.min(255, intValue2)));
        hVar = this.f14895u;
        if (hVar != null) {
            h0 h0Var = x4.h.a;
            hVar.b(aVar2, matrix, (int) (((f122 * intValue2) / 255.0f) * 255.0f));
        }
        canvas.drawPath(path, aVar2);
    }

    @Override // n4.c
    public final String getName() {
        return this.a;
    }

    public final int i() {
        float f2 = this.f14887m.f15747d;
        float f10 = this.f14892r;
        int round = Math.round(f2 * f10);
        int round2 = Math.round(this.f14888n.f15747d * f10);
        int round3 = Math.round(this.k.f15747d * f10);
        int i5 = round != 0 ? 527 * round : 17;
        if (round2 != 0) {
            i5 = i5 * 31 * round2;
        }
        return round3 != 0 ? i5 * 31 * round3 : i5;
    }
}
