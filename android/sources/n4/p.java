package n4;

import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Path;
import android.graphics.RectF;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.ListIterator;
import l4.v;
import l4.z;

/* loaded from: classes.dex */
public final class p implements e, m, j, o4.a, k {
    public final Matrix a = new Matrix();

    /* renamed from: b, reason: collision with root package name */
    public final Path f14932b = new Path();

    /* renamed from: c, reason: collision with root package name */
    public final v f14933c;

    /* renamed from: d, reason: collision with root package name */
    public final t4.b f14934d;

    /* renamed from: e, reason: collision with root package name */
    public final String f14935e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f14936f;

    /* renamed from: g, reason: collision with root package name */
    public final o4.i f14937g;

    /* renamed from: h, reason: collision with root package name */
    public final o4.i f14938h;

    /* renamed from: i, reason: collision with root package name */
    public final o4.q f14939i;
    public d j;

    public p(v vVar, t4.b bVar, s4.j jVar) {
        this.f14933c = vVar;
        this.f14934d = bVar;
        this.f14935e = jVar.f17783b;
        this.f14936f = jVar.f17785d;
        o4.i l02 = jVar.f17784c.l0();
        this.f14937g = l02;
        bVar.f(l02);
        l02.a(this);
        o4.i l03 = ((r4.b) jVar.f17786e).l0();
        this.f14938h = l03;
        bVar.f(l03);
        l03.a(this);
        r4.d dVar = (r4.d) jVar.f17787f;
        dVar.getClass();
        o4.q qVar = new o4.q(dVar);
        this.f14939i = qVar;
        qVar.a(bVar);
        qVar.b(this);
    }

    @Override // o4.a
    public final void a() {
        this.f14933c.invalidateSelf();
    }

    @Override // n4.c
    public final void b(List list, List list2) {
        this.j.b(list, list2);
    }

    @Override // q4.f
    public final void c(e4.e eVar, Object obj) {
        if (this.f14939i.c(eVar, obj)) {
            return;
        }
        if (obj == z.f13824p) {
            this.f14937g.j(eVar);
        } else if (obj == z.f13825q) {
            this.f14938h.j(eVar);
        }
    }

    @Override // q4.f
    public final void d(q4.e eVar, int i5, ArrayList arrayList, q4.e eVar2) {
        x4.g.f(eVar, i5, arrayList, eVar2, this);
        for (int i6 = 0; i6 < this.j.f14859h.size(); i6++) {
            c cVar = (c) this.j.f14859h.get(i6);
            if (cVar instanceof k) {
                x4.g.f(eVar, i5, arrayList, eVar2, (k) cVar);
            }
        }
    }

    @Override // n4.e
    public final void e(RectF rectF, Matrix matrix, boolean z5) {
        this.j.e(rectF, matrix, z5);
    }

    @Override // n4.j
    public final void f(ListIterator listIterator) {
        if (this.j != null) {
            return;
        }
        while (listIterator.hasPrevious() && listIterator.previous() != this) {
        }
        ArrayList arrayList = new ArrayList();
        while (listIterator.hasPrevious()) {
            arrayList.add((c) listIterator.previous());
            listIterator.remove();
        }
        Collections.reverse(arrayList);
        this.j = new d(this.f14933c, this.f14934d, "Repeater", this.f14936f, arrayList, null);
    }

    @Override // n4.e
    public final void g(Canvas canvas, Matrix matrix, int i5) {
        float floatValue = ((Float) this.f14937g.e()).floatValue();
        float floatValue2 = ((Float) this.f14938h.e()).floatValue();
        o4.q qVar = this.f14939i;
        float floatValue3 = ((Float) qVar.f15788m.e()).floatValue() / 100.0f;
        float floatValue4 = ((Float) qVar.f15789n.e()).floatValue() / 100.0f;
        for (int i6 = ((int) floatValue) - 1; i6 >= 0; i6--) {
            Matrix matrix2 = this.a;
            matrix2.set(matrix);
            float f2 = i6;
            matrix2.preConcat(qVar.f(f2 + floatValue2));
            this.j.g(canvas, matrix2, (int) (x4.g.e(floatValue3, floatValue4, f2 / floatValue) * i5));
        }
    }

    @Override // n4.c
    public final String getName() {
        return this.f14935e;
    }

    @Override // n4.m
    public final Path h() {
        Path h6 = this.j.h();
        Path path = this.f14932b;
        path.reset();
        float floatValue = ((Float) this.f14937g.e()).floatValue();
        float floatValue2 = ((Float) this.f14938h.e()).floatValue();
        for (int i5 = ((int) floatValue) - 1; i5 >= 0; i5--) {
            Matrix f2 = this.f14939i.f(i5 + floatValue2);
            Matrix matrix = this.a;
            matrix.set(f2);
            path.addPath(h6, matrix);
        }
        return path;
    }
}
