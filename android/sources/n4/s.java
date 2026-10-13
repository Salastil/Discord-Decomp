package n4;

import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.PointF;
import l4.v;
import l4.z;

/* loaded from: classes.dex */
public final class s extends b {

    /* renamed from: r, reason: collision with root package name */
    public final t4.b f14948r;

    /* renamed from: s, reason: collision with root package name */
    public final String f14949s;

    /* renamed from: t, reason: collision with root package name */
    public final boolean f14950t;

    /* renamed from: u, reason: collision with root package name */
    public final o4.f f14951u;

    /* renamed from: v, reason: collision with root package name */
    public o4.r f14952v;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public s(v vVar, t4.b bVar, s4.p pVar) {
        super(vVar, bVar, r5, r0 != 0 ? r0 != 1 ? r0 != 2 ? null : Paint.Join.BEVEL : Paint.Join.ROUND : Paint.Join.MITER, pVar.f17807i, pVar.f17803e, pVar.f17804f, pVar.f17801c, pVar.f17800b);
        int b10 = f0.e.b(pVar.f17805g);
        Paint.Cap cap = b10 != 0 ? b10 != 1 ? Paint.Cap.SQUARE : Paint.Cap.ROUND : Paint.Cap.BUTT;
        int b11 = f0.e.b(pVar.f17806h);
        this.f14948r = bVar;
        this.f14949s = pVar.a;
        this.f14950t = pVar.j;
        o4.e l02 = pVar.f17802d.l0();
        this.f14951u = (o4.f) l02;
        l02.a(this);
        bVar.f(l02);
    }

    @Override // n4.b, q4.f
    public final void c(e4.e eVar, Object obj) {
        super.c(eVar, obj);
        PointF pointF = z.a;
        o4.f fVar = this.f14951u;
        if (obj == 2) {
            fVar.j(eVar);
            return;
        }
        if (obj == z.F) {
            o4.r rVar = this.f14952v;
            t4.b bVar = this.f14948r;
            if (rVar != null) {
                bVar.p(rVar);
            }
            o4.r rVar2 = new o4.r(eVar, null);
            this.f14952v = rVar2;
            rVar2.a(this);
            bVar.f(fVar);
        }
    }

    @Override // n4.b, n4.e
    public final void g(Canvas canvas, Matrix matrix, int i5) {
        if (this.f14950t) {
            return;
        }
        o4.f fVar = this.f14951u;
        int k = fVar.k(fVar.f15746c.h(), fVar.c());
        m4.a aVar = this.f14846i;
        aVar.setColor(k);
        o4.r rVar = this.f14952v;
        if (rVar != null) {
            aVar.setColorFilter((ColorFilter) rVar.e());
        }
        super.g(canvas, matrix, i5);
    }

    @Override // n4.c
    public final String getName() {
        return this.f14949s;
    }
}
