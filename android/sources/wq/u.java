package wq;

import cp.d0;
import cq.s0;
import cq.w0;
import cq.x0;
import ip.p0;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.b0;
import kotlin.jvm.internal.Intrinsics;
import uq.c0;
import yq.c1;
import yq.y;

/* loaded from: classes3.dex */
public final class u extends lp.c {
    public final cc.k I;
    public final x0 J;
    public final a K;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public u(cc.k c6, x0 proto, int i5) {
        super(r2, r3, jp.g.a, r5, r6, proto.f7292x, i5, p0.f12154i);
        c1 c1Var;
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(proto, "proto");
        uq.j jVar = (uq.j) c6.f3398e;
        xq.l lVar = jVar.a;
        ip.l lVar2 = (ip.l) c6.f3400v;
        hq.e u5 = nt.a.u((eq.g) c6.f3399i, proto.f7291w);
        w0 variance = proto.f7293y;
        Intrinsics.checkNotNullExpressionValue(variance, "getVariance(...)");
        Intrinsics.checkNotNullParameter(variance, "variance");
        int ordinal = variance.ordinal();
        if (ordinal == 0) {
            c1Var = c1.f21014v;
        } else if (ordinal == 1) {
            c1Var = c1.f21015w;
        } else {
            if (ordinal != 2) {
                throw new fo.n();
            }
            c1Var = c1.f21013i;
        }
        c1 c1Var2 = c1Var;
        this.I = c6;
        this.J = proto;
        this.K = new a(jVar.a, new d0(26, this));
    }

    @Override // lp.g
    public final void C0(y type) {
        Intrinsics.checkNotNullParameter(type, "type");
        throw new IllegalStateException("There should be no cycles for deserialized type parameters, but found for: " + this);
    }

    @Override // lp.g
    public final List D0() {
        cc.k kVar = this.I;
        a4.i typeTable = (a4.i) kVar.f3401w;
        x0 x0Var = this.J;
        Intrinsics.checkNotNullParameter(x0Var, "<this>");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        List list = x0Var.E;
        if (list.isEmpty()) {
            list = null;
        }
        if (list == null) {
            List<Integer> list2 = x0Var.F;
            Intrinsics.checkNotNullExpressionValue(list2, "getUpperBoundIdList(...)");
            ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(list2, 10));
            for (Integer num : list2) {
                Intrinsics.checkNotNull(num);
                arrayList.add(typeTable.b(num.intValue()));
            }
            list = arrayList;
        }
        if (list.isEmpty()) {
            return b0.c(oq.e.e(this).n());
        }
        c0 c0Var = (c0) kVar.F;
        ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(list, 10));
        Iterator it = list.iterator();
        while (it.hasNext()) {
            arrayList2.add(c0Var.g((s0) it.next()));
        }
        return arrayList2;
    }

    @Override // bq.b, jp.a
    public final jp.h getAnnotations() {
        return this.K;
    }
}
