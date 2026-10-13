package gp;

import fp.p;
import ip.a0;
import ip.p0;
import ip.s0;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.RandomAccess;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.c0;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import yq.h0;
import yq.k0;

/* loaded from: classes3.dex */
public final class b extends yq.b {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ c f9422c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(c cVar) {
        super(cVar.f9423w);
        this.f9422c = cVar;
    }

    @Override // yq.b, yq.p0
    public final ip.i a() {
        return this.f9422c;
    }

    @Override // yq.p0
    public final boolean c() {
        return true;
    }

    @Override // yq.i
    public final Collection e() {
        List<hq.b> g6;
        Iterable iterable;
        c cVar = this.f9422c;
        int i5 = cVar.E;
        k kVar = cVar.f9425y;
        g gVar = g.f9428c;
        if (Intrinsics.areEqual(kVar, gVar)) {
            g6 = b0.c(c.I);
        } else if (Intrinsics.areEqual(kVar, h.f9429c)) {
            g6 = c0.g(c.J, new hq.b(p.f8915l, gVar.a(i5)));
        } else {
            j jVar = j.f9431c;
            if (Intrinsics.areEqual(kVar, jVar)) {
                g6 = b0.c(c.I);
            } else {
                if (!Intrinsics.areEqual(kVar, i.f9430c)) {
                    int i6 = jr.a.a;
                    Intrinsics.checkNotNullParameter("should not be called", "message");
                    throw new IllegalStateException("should not be called");
                }
                g6 = c0.g(c.J, new hq.b(p.f8911f, jVar.a(i5)));
            }
        }
        a0 h6 = ((lp.c0) cVar.f9424x).h();
        ArrayList arrayList = new ArrayList(d0.l(g6, 10));
        for (hq.b bVar : g6) {
            ip.f j = nf.e.j(h6, bVar);
            if (j == null) {
                throw new IllegalStateException(("Built-in class " + bVar + " not found").toString());
            }
            List list = cVar.H;
            int size = j.n().getParameters().size();
            Intrinsics.checkNotNullParameter(list, "<this>");
            if (size < 0) {
                throw new IllegalArgumentException(s4.h.e(size, "Requested element count ", " is less than zero.").toString());
            }
            if (size == 0) {
                iterable = m0.f13512d;
            } else {
                int size2 = list.size();
                if (size >= size2) {
                    iterable = CollectionsKt.i0(list);
                } else if (size == 1) {
                    iterable = b0.c(CollectionsKt.Q(list));
                } else {
                    ArrayList arrayList2 = new ArrayList(size);
                    if (list instanceof RandomAccess) {
                        for (int i10 = size2 - size; i10 < size2; i10++) {
                            arrayList2.add(list.get(i10));
                        }
                    } else {
                        ListIterator listIterator = list.listIterator(size2 - size);
                        while (listIterator.hasNext()) {
                            arrayList2.add(listIterator.next());
                        }
                    }
                    iterable = arrayList2;
                }
            }
            ArrayList arrayList3 = new ArrayList(d0.l(iterable, 10));
            Iterator it = iterable.iterator();
            while (it.hasNext()) {
                arrayList3.add(new h0(((s0) it.next()).k()));
            }
            k0.f21045e.getClass();
            arrayList.add(yq.c.s(k0.f21046i, j, arrayList3));
        }
        return CollectionsKt.i0(arrayList);
    }

    @Override // yq.p0
    public final List getParameters() {
        return this.f9422c.H;
    }

    @Override // yq.i
    public final p0 i() {
        return p0.f12154i;
    }

    @Override // yq.b
    /* renamed from: o */
    public final ip.f a() {
        return this.f9422c;
    }

    public final String toString() {
        return this.f9422c.toString();
    }
}
