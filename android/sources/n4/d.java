package n4;

import af.h0;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Path;
import android.graphics.RectF;
import java.util.ArrayList;
import java.util.List;
import l4.v;

/* loaded from: classes.dex */
public final class d implements e, m, o4.a, q4.f {
    public final m4.a a;

    /* renamed from: b, reason: collision with root package name */
    public final RectF f14853b;

    /* renamed from: c, reason: collision with root package name */
    public final Matrix f14854c;

    /* renamed from: d, reason: collision with root package name */
    public final Path f14855d;

    /* renamed from: e, reason: collision with root package name */
    public final RectF f14856e;

    /* renamed from: f, reason: collision with root package name */
    public final String f14857f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f14858g;

    /* renamed from: h, reason: collision with root package name */
    public final ArrayList f14859h;

    /* renamed from: i, reason: collision with root package name */
    public final v f14860i;
    public ArrayList j;
    public final o4.q k;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public d(v vVar, t4.b bVar, s4.n nVar, l4.i iVar) {
        this(vVar, bVar, r3, r4, r5, r11);
        r4.d dVar;
        String str = nVar.a;
        boolean z5 = nVar.f17796c;
        List list = nVar.f17795b;
        ArrayList arrayList = new ArrayList(list.size());
        int i5 = 0;
        for (int i6 = 0; i6 < list.size(); i6++) {
            c a = ((s4.b) list.get(i6)).a(vVar, iVar, bVar);
            if (a != null) {
                arrayList.add(a);
            }
        }
        while (true) {
            if (i5 >= list.size()) {
                dVar = null;
                break;
            }
            s4.b bVar2 = (s4.b) list.get(i5);
            if (bVar2 instanceof r4.d) {
                dVar = (r4.d) bVar2;
                break;
            }
            i5++;
        }
    }

    @Override // o4.a
    public final void a() {
        this.f14860i.invalidateSelf();
    }

    @Override // n4.c
    public final void b(List list, List list2) {
        int size = list.size();
        ArrayList arrayList = this.f14859h;
        ArrayList arrayList2 = new ArrayList(arrayList.size() + size);
        arrayList2.addAll(list);
        for (int size2 = arrayList.size() - 1; size2 >= 0; size2--) {
            c cVar = (c) arrayList.get(size2);
            cVar.b(arrayList2, arrayList.subList(0, size2));
            arrayList2.add(cVar);
        }
    }

    @Override // q4.f
    public final void c(e4.e eVar, Object obj) {
        o4.q qVar = this.k;
        if (qVar != null) {
            qVar.c(eVar, obj);
        }
    }

    @Override // q4.f
    public final void d(q4.e eVar, int i5, ArrayList arrayList, q4.e eVar2) {
        String str = this.f14857f;
        if (!eVar.c(i5, str) && !"__container".equals(str)) {
            return;
        }
        if (!"__container".equals(str)) {
            q4.e eVar3 = new q4.e(eVar2);
            eVar3.a.add(str);
            if (eVar.a(i5, str)) {
                q4.e eVar4 = new q4.e(eVar3);
                eVar4.f16681b = this;
                arrayList.add(eVar4);
            }
            eVar2 = eVar3;
        }
        if (!eVar.d(i5, str)) {
            return;
        }
        int b10 = eVar.b(i5, str) + i5;
        int i6 = 0;
        while (true) {
            ArrayList arrayList2 = this.f14859h;
            if (i6 >= arrayList2.size()) {
                return;
            }
            c cVar = (c) arrayList2.get(i6);
            if (cVar instanceof q4.f) {
                ((q4.f) cVar).d(eVar, b10, arrayList, eVar2);
            }
            i6++;
        }
    }

    @Override // n4.e
    public final void e(RectF rectF, Matrix matrix, boolean z5) {
        Matrix matrix2 = this.f14854c;
        matrix2.set(matrix);
        o4.q qVar = this.k;
        if (qVar != null) {
            matrix2.preConcat(qVar.e());
        }
        RectF rectF2 = this.f14856e;
        rectF2.set(0.0f, 0.0f, 0.0f, 0.0f);
        ArrayList arrayList = this.f14859h;
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            c cVar = (c) arrayList.get(size);
            if (cVar instanceof e) {
                ((e) cVar).e(rectF2, matrix2, z5);
                rectF.union(rectF2);
            }
        }
    }

    public final List f() {
        if (this.j == null) {
            this.j = new ArrayList();
            int i5 = 0;
            while (true) {
                ArrayList arrayList = this.f14859h;
                if (i5 >= arrayList.size()) {
                    break;
                }
                c cVar = (c) arrayList.get(i5);
                if (cVar instanceof m) {
                    this.j.add((m) cVar);
                }
                i5++;
            }
        }
        return this.j;
    }

    @Override // n4.e
    public final void g(Canvas canvas, Matrix matrix, int i5) {
        if (this.f14858g) {
            return;
        }
        Matrix matrix2 = this.f14854c;
        matrix2.set(matrix);
        o4.q qVar = this.k;
        if (qVar != null) {
            matrix2.preConcat(qVar.e());
            i5 = (int) (((((qVar.j == null ? 100 : ((Integer) r9.e()).intValue()) / 100.0f) * i5) / 255.0f) * 255.0f);
        }
        boolean z5 = this.f14860i.R;
        boolean z6 = false;
        ArrayList arrayList = this.f14859h;
        if (z5) {
            int i6 = 0;
            int i10 = 0;
            while (true) {
                if (i6 >= arrayList.size()) {
                    break;
                }
                if (!(arrayList.get(i6) instanceof e) || (i10 = i10 + 1) < 2) {
                    i6++;
                } else if (i5 != 255) {
                    z6 = true;
                }
            }
        }
        if (z6) {
            RectF rectF = this.f14853b;
            rectF.set(0.0f, 0.0f, 0.0f, 0.0f);
            e(rectF, matrix2, true);
            m4.a aVar = this.a;
            aVar.setAlpha(i5);
            h0 h0Var = x4.h.a;
            canvas.saveLayer(rectF, aVar);
        }
        if (z6) {
            i5 = 255;
        }
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            Object obj = arrayList.get(size);
            if (obj instanceof e) {
                ((e) obj).g(canvas, matrix2, i5);
            }
        }
        if (z6) {
            canvas.restore();
        }
    }

    @Override // n4.c
    public final String getName() {
        throw null;
    }

    @Override // n4.m
    public final Path h() {
        Matrix matrix = this.f14854c;
        matrix.reset();
        o4.q qVar = this.k;
        if (qVar != null) {
            matrix.set(qVar.e());
        }
        Path path = this.f14855d;
        path.reset();
        if (!this.f14858g) {
            ArrayList arrayList = this.f14859h;
            for (int size = arrayList.size() - 1; size >= 0; size--) {
                c cVar = (c) arrayList.get(size);
                if (cVar instanceof m) {
                    path.addPath(((m) cVar).h(), matrix);
                }
            }
        }
        return path;
    }

    public d(v vVar, t4.b bVar, String str, boolean z5, ArrayList arrayList, r4.d dVar) {
        this.a = new m4.a();
        this.f14853b = new RectF();
        this.f14854c = new Matrix();
        this.f14855d = new Path();
        this.f14856e = new RectF();
        this.f14857f = str;
        this.f14860i = vVar;
        this.f14858g = z5;
        this.f14859h = arrayList;
        if (dVar != null) {
            o4.q qVar = new o4.q(dVar);
            this.k = qVar;
            qVar.a(bVar);
            qVar.b(this);
        }
        ArrayList arrayList2 = new ArrayList();
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            c cVar = (c) arrayList.get(size);
            if (cVar instanceof j) {
                arrayList2.add((j) cVar);
            }
        }
        for (int size2 = arrayList2.size() - 1; size2 >= 0; size2--) {
            ((j) arrayList2.get(size2)).f(arrayList.listIterator(arrayList.size()));
        }
    }
}
