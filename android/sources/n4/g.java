package n4;

import af.h0;
import android.graphics.BlurMaskFilter;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Matrix;
import android.graphics.Path;
import android.graphics.PointF;
import android.graphics.RectF;
import java.util.ArrayList;
import java.util.List;
import l4.v;
import l4.z;

/* loaded from: classes.dex */
public final class g implements e, o4.a, k {
    public final Path a;

    /* renamed from: b, reason: collision with root package name */
    public final m4.a f14868b;

    /* renamed from: c, reason: collision with root package name */
    public final t4.b f14869c;

    /* renamed from: d, reason: collision with root package name */
    public final String f14870d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f14871e;

    /* renamed from: f, reason: collision with root package name */
    public final ArrayList f14872f;

    /* renamed from: g, reason: collision with root package name */
    public final o4.f f14873g;

    /* renamed from: h, reason: collision with root package name */
    public final o4.f f14874h;

    /* renamed from: i, reason: collision with root package name */
    public o4.r f14875i;
    public final v j;
    public o4.e k;

    /* renamed from: l, reason: collision with root package name */
    public float f14876l;

    /* renamed from: m, reason: collision with root package name */
    public final o4.h f14877m;

    public g(v vVar, t4.b bVar, s4.m mVar) {
        Path path = new Path();
        this.a = path;
        this.f14868b = new m4.a(1, 0);
        this.f14872f = new ArrayList();
        this.f14869c = bVar;
        String str = mVar.f17791c;
        r4.a aVar = mVar.f17793e;
        r4.a aVar2 = mVar.f17792d;
        this.f14870d = str;
        this.f14871e = mVar.f17794f;
        this.j = vVar;
        if (bVar.l() != null) {
            o4.i l02 = ((r4.b) bVar.l().f17126e).l0();
            this.k = l02;
            l02.a(this);
            bVar.f(this.k);
        }
        if (bVar.m() != null) {
            this.f14877m = new o4.h(this, bVar, bVar.m());
        }
        if (aVar2 == null) {
            this.f14873g = null;
            this.f14874h = null;
            return;
        }
        path.setFillType(mVar.f17790b);
        o4.e l03 = aVar2.l0();
        this.f14873g = (o4.f) l03;
        l03.a(this);
        bVar.f(l03);
        o4.e l04 = aVar.l0();
        this.f14874h = (o4.f) l04;
        l04.a(this);
        bVar.f(l04);
    }

    @Override // o4.a
    public final void a() {
        this.j.invalidateSelf();
    }

    @Override // n4.c
    public final void b(List list, List list2) {
        for (int i5 = 0; i5 < list2.size(); i5++) {
            c cVar = (c) list2.get(i5);
            if (cVar instanceof m) {
                this.f14872f.add((m) cVar);
            }
        }
    }

    @Override // q4.f
    public final void c(e4.e eVar, Object obj) {
        PointF pointF = z.a;
        if (obj == 1) {
            this.f14873g.j(eVar);
            return;
        }
        if (obj == 4) {
            this.f14874h.j(eVar);
            return;
        }
        ColorFilter colorFilter = z.F;
        t4.b bVar = this.f14869c;
        if (obj == colorFilter) {
            o4.r rVar = this.f14875i;
            if (rVar != null) {
                bVar.p(rVar);
            }
            o4.r rVar2 = new o4.r(eVar, null);
            this.f14875i = rVar2;
            rVar2.a(this);
            bVar.f(this.f14875i);
            return;
        }
        if (obj == z.f13815e) {
            o4.e eVar2 = this.k;
            if (eVar2 != null) {
                eVar2.j(eVar);
                return;
            }
            o4.r rVar3 = new o4.r(eVar, null);
            this.k = rVar3;
            rVar3.a(this);
            bVar.f(this.k);
            return;
        }
        o4.h hVar = this.f14877m;
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
        Path path = this.a;
        path.reset();
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.f14872f;
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

    @Override // n4.e
    public final void g(Canvas canvas, Matrix matrix, int i5) {
        BlurMaskFilter blurMaskFilter;
        if (this.f14871e) {
            return;
        }
        o4.f fVar = this.f14873g;
        int k = fVar.k(fVar.f15746c.h(), fVar.c());
        float f2 = i5 / 255.0f;
        int intValue = (int) (((((Integer) this.f14874h.e()).intValue() * f2) / 100.0f) * 255.0f);
        PointF pointF = x4.g.a;
        int i6 = 0;
        int max = (k & 16777215) | (Math.max(0, Math.min(255, intValue)) << 24);
        m4.a aVar = this.f14868b;
        aVar.setColor(max);
        o4.r rVar = this.f14875i;
        if (rVar != null) {
            aVar.setColorFilter((ColorFilter) rVar.e());
        }
        o4.e eVar = this.k;
        if (eVar != null) {
            float floatValue = ((Float) eVar.e()).floatValue();
            if (floatValue == 0.0f) {
                aVar.setMaskFilter(null);
            } else if (floatValue != this.f14876l) {
                t4.b bVar = this.f14869c;
                if (bVar.A == floatValue) {
                    blurMaskFilter = bVar.B;
                } else {
                    BlurMaskFilter blurMaskFilter2 = new BlurMaskFilter(floatValue / 2.0f, BlurMaskFilter.Blur.NORMAL);
                    bVar.B = blurMaskFilter2;
                    bVar.A = floatValue;
                    blurMaskFilter = blurMaskFilter2;
                }
                aVar.setMaskFilter(blurMaskFilter);
            }
            this.f14876l = floatValue;
        }
        o4.h hVar = this.f14877m;
        if (hVar != null) {
            h0 h0Var = x4.h.a;
            hVar.b(aVar, matrix, (int) (((f2 * intValue) / 255.0f) * 255.0f));
        }
        Path path = this.a;
        path.reset();
        while (true) {
            ArrayList arrayList = this.f14872f;
            if (i6 >= arrayList.size()) {
                canvas.drawPath(path, aVar);
                return;
            } else {
                path.addPath(((m) arrayList.get(i6)).h(), matrix);
                i6++;
            }
        }
    }

    @Override // n4.c
    public final String getName() {
        return this.f14870d;
    }
}
