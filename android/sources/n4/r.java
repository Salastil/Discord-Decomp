package n4;

import android.graphics.Path;
import io.sentry.w1;
import java.util.ArrayList;
import java.util.List;
import l4.v;
import l4.z;

/* loaded from: classes.dex */
public final class r implements m, o4.a, k {

    /* renamed from: b, reason: collision with root package name */
    public final String f14942b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f14943c;

    /* renamed from: d, reason: collision with root package name */
    public final v f14944d;

    /* renamed from: e, reason: collision with root package name */
    public final o4.n f14945e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f14946f;
    public final Path a = new Path();

    /* renamed from: g, reason: collision with root package name */
    public final w1 f14947g = new w1(1);

    public r(v vVar, t4.b bVar, s4.o oVar) {
        this.f14942b = oVar.a;
        this.f14943c = oVar.f17799d;
        this.f14944d = vVar;
        o4.n nVar = new o4.n((List) oVar.f17798c.f3143e);
        this.f14945e = nVar;
        bVar.f(nVar);
        nVar.a(this);
    }

    @Override // o4.a
    public final void a() {
        this.f14946f = false;
        this.f14944d.invalidateSelf();
    }

    @Override // n4.c
    public final void b(List list, List list2) {
        ArrayList arrayList = null;
        int i5 = 0;
        while (true) {
            ArrayList arrayList2 = (ArrayList) list;
            if (i5 >= arrayList2.size()) {
                this.f14945e.f15771m = arrayList;
                return;
            }
            c cVar = (c) arrayList2.get(i5);
            if (cVar instanceof t) {
                t tVar = (t) cVar;
                if (tVar.f14954c == 1) {
                    this.f14947g.a.add(tVar);
                    tVar.c(this);
                    i5++;
                }
            }
            if (cVar instanceof q) {
                if (arrayList == null) {
                    arrayList = new ArrayList();
                }
                arrayList.add((q) cVar);
            }
            i5++;
        }
    }

    @Override // q4.f
    public final void c(e4.e eVar, Object obj) {
        if (obj == z.K) {
            this.f14945e.j(eVar);
        }
    }

    @Override // q4.f
    public final void d(q4.e eVar, int i5, ArrayList arrayList, q4.e eVar2) {
        x4.g.f(eVar, i5, arrayList, eVar2, this);
    }

    @Override // n4.c
    public final String getName() {
        return this.f14942b;
    }

    @Override // n4.m
    public final Path h() {
        boolean z5 = this.f14946f;
        o4.n nVar = this.f14945e;
        Path path = this.a;
        if (z5 && nVar.f15748e == null) {
            return path;
        }
        path.reset();
        if (this.f14943c) {
            this.f14946f = true;
            return path;
        }
        Path path2 = (Path) nVar.e();
        if (path2 == null) {
            return path;
        }
        path.set(path2);
        path.setFillType(Path.FillType.EVEN_ODD);
        this.f14947g.a(path);
        this.f14946f = true;
        return path;
    }
}
