package a4;

import cq.r0;
import cq.s0;
import cq.y0;
import e4.o;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;
import v3.p;

/* loaded from: classes.dex */
public final class i implements wd.e {

    /* renamed from: d, reason: collision with root package name */
    public final List f112d;

    public i(y0 typeTable) {
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        List list = typeTable.f7304i;
        if ((typeTable.f7303e & 1) == 1) {
            int i5 = typeTable.f7305v;
            Intrinsics.checkNotNullExpressionValue(list, "getTypeList(...)");
            ArrayList arrayList = new ArrayList(d0.l(list, 10));
            int i6 = 0;
            for (Object obj : list) {
                int i10 = i6 + 1;
                if (i6 < 0) {
                    c0.k();
                    throw null;
                }
                s0 s0Var = (s0) obj;
                if (i6 >= i5) {
                    s0Var.getClass();
                    r0 q5 = s0.q(s0Var);
                    q5.f7228v |= 2;
                    q5.f7230x = true;
                    s0Var = q5.g();
                    if (!s0Var.b()) {
                        throw new ai.k();
                    }
                }
                arrayList.add(s0Var);
                i6 = i10;
            }
            list = arrayList;
        }
        Intrinsics.checkNotNullExpressionValue(list, "run(...)");
        this.f112d = list;
    }

    @Override // wd.e
    public int A() {
        return 1;
    }

    public boolean a(o workSpec) {
        Intrinsics.checkNotNullParameter(workSpec, "workSpec");
        ArrayList arrayList = new ArrayList();
        for (Object obj : this.f112d) {
            b4.e eVar = (b4.e) obj;
            eVar.getClass();
            Intrinsics.checkNotNullParameter(workSpec, "workSpec");
            if (eVar.b(workSpec) && eVar.c(eVar.a.a())) {
                arrayList.add(obj);
            }
        }
        if (!arrayList.isEmpty()) {
            p.d().a(l.a, "Work " + workSpec.a + " constrained by " + CollectionsKt.O(arrayList, null, null, null, f.f106d, 31));
        }
        return arrayList.isEmpty();
    }

    public s0 b(int i5) {
        return (s0) this.f112d.get(i5);
    }

    @Override // wd.e
    public int d(long j) {
        return j < 0 ? 0 : -1;
    }

    @Override // wd.e
    public long i(int i5) {
        ke.b.g(i5 == 0);
        return 0L;
    }

    @Override // wd.e
    public List q(long j) {
        return j >= 0 ? this.f112d : Collections.EMPTY_LIST;
    }

    public i(List list) {
        this.f112d = list;
    }

    public i(c4.l trackers) {
        Intrinsics.checkNotNullParameter(trackers, "trackers");
        b4.a aVar = new b4.a(trackers.a);
        b4.a aVar2 = new b4.a(trackers.f3311b, (byte) 0);
        b4.a aVar3 = new b4.a(trackers.f3313d, (char) 0);
        c4.i iVar = trackers.f3312c;
        List controllers = c0.g(aVar, aVar2, aVar3, new b4.a(iVar, 2), new b4.a(iVar, 3), new b4.g(iVar), new b4.f(iVar));
        Intrinsics.checkNotNullParameter(controllers, "controllers");
        this.f112d = controllers;
    }
}
