package t4;

import af.h0;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.RectF;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import l4.v;
import l4.z;
import o4.r;
import s.k;

/* loaded from: classes.dex */
public final class c extends b {
    public o4.e D;
    public final ArrayList E;
    public final RectF F;
    public final RectF G;
    public final Paint H;
    public float I;
    public boolean J;

    public c(v vVar, e eVar, List list, l4.i iVar) {
        super(vVar, eVar);
        b bVar;
        b cVar;
        String str;
        this.E = new ArrayList();
        this.F = new RectF();
        this.G = new RectF();
        this.H = new Paint();
        this.J = true;
        r4.b bVar2 = eVar.f18209s;
        if (bVar2 != null) {
            o4.i l02 = bVar2.l0();
            this.D = l02;
            f(l02);
            this.D.a(this);
        } else {
            this.D = null;
        }
        k kVar = new k(iVar.j.size());
        int size = list.size() - 1;
        b bVar3 = null;
        while (true) {
            if (size < 0) {
                for (int i5 = 0; i5 < kVar.f(); i5++) {
                    b bVar4 = (b) kVar.b(kVar.d(i5));
                    if (bVar4 != null && (bVar = (b) kVar.b(bVar4.f18183p.f18198f)) != null) {
                        bVar4.f18187t = bVar;
                    }
                }
                return;
            }
            e eVar2 = (e) list.get(size);
            int b10 = f0.e.b(eVar2.f18197e);
            if (b10 == 0) {
                cVar = new c(vVar, eVar2, (List) iVar.f13743c.get(eVar2.f18199g), iVar);
            } else if (b10 == 1) {
                cVar = new d(vVar, eVar2, 1);
            } else if (b10 == 2) {
                cVar = new d(vVar, eVar2, 0);
            } else if (b10 == 3) {
                cVar = new f(vVar, eVar2);
            } else if (b10 == 4) {
                cVar = new g(vVar, eVar2, this, iVar);
            } else if (b10 != 5) {
                switch (eVar2.f18197e) {
                    case 1:
                        str = "PRE_COMP";
                        break;
                    case 2:
                        str = "SOLID";
                        break;
                    case 3:
                        str = "IMAGE";
                        break;
                    case 4:
                        str = "NULL";
                        break;
                    case 5:
                        str = "SHAPE";
                        break;
                    case 6:
                        str = "TEXT";
                        break;
                    case 7:
                        str = "UNKNOWN";
                        break;
                    default:
                        str = "null";
                        break;
                }
                x4.c.b("Unknown layer type ".concat(str));
                cVar = null;
            } else {
                cVar = new i(vVar, eVar2);
            }
            if (cVar != null) {
                kVar.e(cVar.f18183p.f18196d, cVar);
                if (bVar3 != null) {
                    bVar3.f18186s = cVar;
                    bVar3 = null;
                } else {
                    this.E.add(0, cVar);
                    int b11 = f0.e.b(eVar2.f18211u);
                    if (b11 == 1 || b11 == 2) {
                        bVar3 = cVar;
                    }
                }
            }
            size--;
        }
    }

    @Override // t4.b, q4.f
    public final void c(e4.e eVar, Object obj) {
        super.c(eVar, obj);
        if (obj == z.f13834z) {
            r rVar = new r(eVar, null);
            this.D = rVar;
            rVar.a(this);
            f(this.D);
        }
    }

    @Override // t4.b, n4.e
    public final void e(RectF rectF, Matrix matrix, boolean z5) {
        super.e(rectF, matrix, z5);
        ArrayList arrayList = this.E;
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            RectF rectF2 = this.F;
            rectF2.set(0.0f, 0.0f, 0.0f, 0.0f);
            ((b) arrayList.get(size)).e(rectF2, this.f18181n, true);
            rectF.union(rectF2);
        }
    }

    @Override // t4.b
    public final void k(Canvas canvas, Matrix matrix, int i5) {
        e eVar = this.f18183p;
        float f2 = eVar.f18205o;
        float f10 = eVar.f18206p;
        RectF rectF = this.G;
        rectF.set(0.0f, 0.0f, f2, f10);
        matrix.mapRect(rectF);
        boolean z5 = this.f18182o.R;
        ArrayList arrayList = this.E;
        boolean z6 = z5 && arrayList.size() > 1 && i5 != 255;
        if (z6) {
            Paint paint = this.H;
            paint.setAlpha(i5);
            h0 h0Var = x4.h.a;
            canvas.saveLayer(rectF, paint);
        } else {
            canvas.save();
        }
        if (z6) {
            i5 = 255;
        }
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            if (((this.J || !"__container".equals(eVar.f18195c)) && !rectF.isEmpty()) ? canvas.clipRect(rectF) : true) {
                ((b) arrayList.get(size)).g(canvas, matrix, i5);
            }
        }
        canvas.restore();
    }

    @Override // t4.b
    public final void q(q4.e eVar, int i5, ArrayList arrayList, q4.e eVar2) {
        int i6 = 0;
        while (true) {
            ArrayList arrayList2 = this.E;
            if (i6 >= arrayList2.size()) {
                return;
            }
            ((b) arrayList2.get(i6)).d(eVar, i5, arrayList, eVar2);
            i6++;
        }
    }

    @Override // t4.b
    public final void r(boolean z5) {
        super.r(z5);
        Iterator it = this.E.iterator();
        while (it.hasNext()) {
            ((b) it.next()).r(z5);
        }
    }

    @Override // t4.b
    public final void s(float f2) {
        this.I = f2;
        super.s(f2);
        o4.e eVar = this.D;
        e eVar2 = this.f18183p;
        if (eVar != null) {
            l4.i iVar = this.f18182o.f13787d;
            f2 = ((((Float) eVar.e()).floatValue() * eVar2.f18194b.f13752n) - eVar2.f18194b.f13750l) / ((iVar.f13751m - iVar.f13750l) + 0.01f);
        }
        if (this.D == null) {
            float f10 = eVar2.f18204n;
            l4.i iVar2 = eVar2.f18194b;
            f2 -= f10 / (iVar2.f13751m - iVar2.f13750l);
        }
        if (eVar2.f18203m != 0.0f && !"__container".equals(eVar2.f18195c)) {
            f2 /= eVar2.f18203m;
        }
        ArrayList arrayList = this.E;
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            ((b) arrayList.get(size)).s(f2);
        }
    }
}
