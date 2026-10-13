package n4;

import android.graphics.BlurMaskFilter;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.DashPathEffect;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PathMeasure;
import android.graphics.PointF;
import android.graphics.RectF;
import java.util.ArrayList;
import java.util.List;
import l4.v;
import l4.z;

/* loaded from: classes.dex */
public abstract class b implements o4.a, k, e {

    /* renamed from: e, reason: collision with root package name */
    public final v f14842e;

    /* renamed from: f, reason: collision with root package name */
    public final t4.b f14843f;

    /* renamed from: h, reason: collision with root package name */
    public final float[] f14845h;

    /* renamed from: i, reason: collision with root package name */
    public final m4.a f14846i;
    public final o4.i j;
    public final o4.f k;

    /* renamed from: l, reason: collision with root package name */
    public final ArrayList f14847l;

    /* renamed from: m, reason: collision with root package name */
    public final o4.i f14848m;

    /* renamed from: n, reason: collision with root package name */
    public o4.r f14849n;

    /* renamed from: o, reason: collision with root package name */
    public o4.e f14850o;

    /* renamed from: p, reason: collision with root package name */
    public float f14851p;

    /* renamed from: q, reason: collision with root package name */
    public final o4.h f14852q;
    public final PathMeasure a = new PathMeasure();

    /* renamed from: b, reason: collision with root package name */
    public final Path f14839b = new Path();

    /* renamed from: c, reason: collision with root package name */
    public final Path f14840c = new Path();

    /* renamed from: d, reason: collision with root package name */
    public final RectF f14841d = new RectF();

    /* renamed from: g, reason: collision with root package name */
    public final ArrayList f14844g = new ArrayList();

    public b(v vVar, t4.b bVar, Paint.Cap cap, Paint.Join join, float f2, r4.a aVar, r4.b bVar2, ArrayList arrayList, r4.b bVar3) {
        m4.a aVar2 = new m4.a(1, 0);
        this.f14846i = aVar2;
        this.f14851p = 0.0f;
        this.f14842e = vVar;
        this.f14843f = bVar;
        aVar2.setStyle(Paint.Style.STROKE);
        aVar2.setStrokeCap(cap);
        aVar2.setStrokeJoin(join);
        aVar2.setStrokeMiter(f2);
        this.k = (o4.f) aVar.l0();
        this.j = bVar2.l0();
        if (bVar3 == null) {
            this.f14848m = null;
        } else {
            this.f14848m = bVar3.l0();
        }
        this.f14847l = new ArrayList(arrayList.size());
        this.f14845h = new float[arrayList.size()];
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            this.f14847l.add(((r4.b) arrayList.get(i5)).l0());
        }
        bVar.f(this.k);
        bVar.f(this.j);
        for (int i6 = 0; i6 < this.f14847l.size(); i6++) {
            bVar.f((o4.e) this.f14847l.get(i6));
        }
        o4.i iVar = this.f14848m;
        if (iVar != null) {
            bVar.f(iVar);
        }
        this.k.a(this);
        this.j.a(this);
        for (int i10 = 0; i10 < arrayList.size(); i10++) {
            ((o4.e) this.f14847l.get(i10)).a(this);
        }
        o4.i iVar2 = this.f14848m;
        if (iVar2 != null) {
            iVar2.a(this);
        }
        if (bVar.l() != null) {
            o4.i l02 = ((r4.b) bVar.l().f17126e).l0();
            this.f14850o = l02;
            l02.a(this);
            bVar.f(this.f14850o);
        }
        if (bVar.m() != null) {
            this.f14852q = new o4.h(this, bVar, bVar.m());
        }
    }

    @Override // o4.a
    public final void a() {
        this.f14842e.invalidateSelf();
    }

    @Override // n4.c
    public final void b(List list, List list2) {
        ArrayList arrayList;
        ArrayList arrayList2 = (ArrayList) list;
        a aVar = null;
        t tVar = null;
        for (int size = arrayList2.size() - 1; size >= 0; size--) {
            c cVar = (c) arrayList2.get(size);
            if (cVar instanceof t) {
                t tVar2 = (t) cVar;
                if (tVar2.f14954c == 2) {
                    tVar = tVar2;
                }
            }
        }
        if (tVar != null) {
            tVar.c(this);
        }
        int size2 = list2.size();
        while (true) {
            size2--;
            arrayList = this.f14844g;
            if (size2 < 0) {
                break;
            }
            c cVar2 = (c) list2.get(size2);
            if (cVar2 instanceof t) {
                t tVar3 = (t) cVar2;
                if (tVar3.f14954c == 2) {
                    if (aVar != null) {
                        arrayList.add(aVar);
                    }
                    a aVar2 = new a(tVar3);
                    tVar3.c(this);
                    aVar = aVar2;
                }
            }
            if (cVar2 instanceof m) {
                if (aVar == null) {
                    aVar = new a(tVar);
                }
                aVar.a.add((m) cVar2);
            }
        }
        if (aVar != null) {
            arrayList.add(aVar);
        }
    }

    @Override // q4.f
    public void c(e4.e eVar, Object obj) {
        PointF pointF = z.a;
        if (obj == 4) {
            this.k.j(eVar);
            return;
        }
        if (obj == z.f13822n) {
            this.j.j(eVar);
            return;
        }
        ColorFilter colorFilter = z.F;
        t4.b bVar = this.f14843f;
        if (obj == colorFilter) {
            o4.r rVar = this.f14849n;
            if (rVar != null) {
                bVar.p(rVar);
            }
            o4.r rVar2 = new o4.r(eVar, null);
            this.f14849n = rVar2;
            rVar2.a(this);
            bVar.f(this.f14849n);
            return;
        }
        if (obj == z.f13815e) {
            o4.e eVar2 = this.f14850o;
            if (eVar2 != null) {
                eVar2.j(eVar);
                return;
            }
            o4.r rVar3 = new o4.r(eVar, null);
            this.f14850o = rVar3;
            rVar3.a(this);
            bVar.f(this.f14850o);
            return;
        }
        o4.h hVar = this.f14852q;
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
        Path path = this.f14839b;
        path.reset();
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.f14844g;
            if (i5 >= arrayList.size()) {
                RectF rectF2 = this.f14841d;
                path.computeBounds(rectF2, false);
                float k = this.j.k() / 2.0f;
                rectF2.set(rectF2.left - k, rectF2.top - k, rectF2.right + k, rectF2.bottom + k);
                rectF.set(rectF2);
                rectF.set(rectF.left - 1.0f, rectF.top - 1.0f, rectF.right + 1.0f, rectF.bottom + 1.0f);
                return;
            }
            a aVar = (a) arrayList.get(i5);
            for (int i6 = 0; i6 < aVar.a.size(); i6++) {
                path.addPath(((m) aVar.a.get(i6)).h(), matrix);
            }
            i5++;
        }
    }

    @Override // n4.e
    public void g(Canvas canvas, Matrix matrix, int i5) {
        BlurMaskFilter blurMaskFilter;
        float[] fArr;
        b bVar = this;
        float[] fArr2 = (float[]) x4.h.f20286d.get();
        boolean z5 = false;
        fArr2[0] = 0.0f;
        fArr2[1] = 0.0f;
        fArr2[2] = 37394.73f;
        fArr2[3] = 39575.234f;
        matrix.mapPoints(fArr2);
        if (fArr2[0] == fArr2[2] || fArr2[1] == fArr2[3]) {
            return;
        }
        float f2 = i5 / 255.0f;
        o4.f fVar = bVar.k;
        float f10 = 100.0f;
        int k = (int) (((fVar.k(fVar.f15746c.h(), fVar.c()) * f2) / 100.0f) * 255.0f);
        PointF pointF = x4.g.a;
        int max = Math.max(0, Math.min(255, k));
        m4.a aVar = bVar.f14846i;
        aVar.setAlpha(max);
        aVar.setStrokeWidth(bVar.j.k());
        if (aVar.getStrokeWidth() <= 0.0f) {
            return;
        }
        ArrayList arrayList = bVar.f14847l;
        if (!arrayList.isEmpty()) {
            int i6 = 0;
            while (true) {
                int size = arrayList.size();
                fArr = bVar.f14845h;
                if (i6 >= size) {
                    break;
                }
                float floatValue = ((Float) ((o4.e) arrayList.get(i6)).e()).floatValue();
                fArr[i6] = floatValue;
                if (i6 % 2 == 0) {
                    if (floatValue < 1.0f) {
                        fArr[i6] = 1.0f;
                    }
                } else if (floatValue < 0.1f) {
                    fArr[i6] = 0.1f;
                }
                i6++;
            }
            o4.i iVar = bVar.f14848m;
            aVar.setPathEffect(new DashPathEffect(fArr, iVar == null ? 0.0f : ((Float) iVar.e()).floatValue()));
        }
        o4.r rVar = bVar.f14849n;
        if (rVar != null) {
            aVar.setColorFilter((ColorFilter) rVar.e());
        }
        o4.e eVar = bVar.f14850o;
        if (eVar != null) {
            float floatValue2 = ((Float) eVar.e()).floatValue();
            if (floatValue2 == 0.0f) {
                aVar.setMaskFilter(null);
            } else if (floatValue2 != bVar.f14851p) {
                t4.b bVar2 = bVar.f14843f;
                if (bVar2.A == floatValue2) {
                    blurMaskFilter = bVar2.B;
                } else {
                    BlurMaskFilter blurMaskFilter2 = new BlurMaskFilter(floatValue2 / 2.0f, BlurMaskFilter.Blur.NORMAL);
                    bVar2.B = blurMaskFilter2;
                    bVar2.A = floatValue2;
                    blurMaskFilter = blurMaskFilter2;
                }
                aVar.setMaskFilter(blurMaskFilter);
                bVar.f14851p = floatValue2;
            }
            bVar.f14851p = floatValue2;
        }
        o4.h hVar = bVar.f14852q;
        if (hVar != null) {
            hVar.b(aVar, matrix, (int) (((f2 * k) / 255.0f) * 255.0f));
        }
        canvas.save();
        canvas.concat(matrix);
        int i10 = 0;
        while (true) {
            ArrayList arrayList2 = bVar.f14844g;
            if (i10 >= arrayList2.size()) {
                canvas.restore();
                return;
            }
            a aVar2 = (a) arrayList2.get(i10);
            t tVar = aVar2.f14838b;
            ArrayList arrayList3 = aVar2.a;
            Path path = bVar.f14839b;
            if (tVar != null) {
                path.reset();
                for (int size2 = arrayList3.size() - 1; size2 >= 0; size2--) {
                    path.addPath(((m) arrayList3.get(size2)).h());
                }
                float floatValue3 = ((Float) tVar.f14955d.e()).floatValue() / f10;
                float floatValue4 = ((Float) tVar.f14956e.e()).floatValue() / f10;
                float floatValue5 = ((Float) tVar.f14957f.e()).floatValue() / 360.0f;
                if (floatValue3 >= 0.01f || floatValue4 <= 0.99f) {
                    PathMeasure pathMeasure = bVar.a;
                    pathMeasure.setPath(path, z5);
                    float length = pathMeasure.getLength();
                    while (pathMeasure.nextContour()) {
                        length += pathMeasure.getLength();
                    }
                    float f11 = floatValue5 * length;
                    float f12 = (floatValue3 * length) + f11;
                    float min = Math.min((floatValue4 * length) + f11, (f12 + length) - 1.0f);
                    int size3 = arrayList3.size() - 1;
                    float f13 = 0.0f;
                    while (size3 >= 0) {
                        Path h6 = ((m) arrayList3.get(size3)).h();
                        Path path2 = bVar.f14840c;
                        path2.set(h6);
                        pathMeasure.setPath(path2, z5);
                        float length2 = pathMeasure.getLength();
                        if (min > length) {
                            float f14 = min - length;
                            if (f14 < f13 + length2 && f13 < f14) {
                                x4.h.a(path2, f12 > length ? (f12 - length) / length2 : 0.0f, Math.min(f14 / length2, 1.0f), 0.0f);
                                canvas.drawPath(path2, aVar);
                                f13 += length2;
                                size3--;
                                bVar = this;
                                z5 = false;
                            }
                        }
                        float f15 = f13 + length2;
                        if (f15 >= f12 && f13 <= min) {
                            if (f15 > min || f12 >= f13) {
                                x4.h.a(path2, f12 < f13 ? 0.0f : (f12 - f13) / length2, min > f15 ? 1.0f : (min - f13) / length2, 0.0f);
                                canvas.drawPath(path2, aVar);
                            } else {
                                canvas.drawPath(path2, aVar);
                            }
                        }
                        f13 += length2;
                        size3--;
                        bVar = this;
                        z5 = false;
                    }
                } else {
                    canvas.drawPath(path, aVar);
                }
            } else {
                path.reset();
                for (int size4 = arrayList3.size() - 1; size4 >= 0; size4--) {
                    path.addPath(((m) arrayList3.get(size4)).h());
                }
                canvas.drawPath(path, aVar);
            }
            i10++;
            bVar = this;
            z5 = false;
            f10 = 100.0f;
        }
    }
}
