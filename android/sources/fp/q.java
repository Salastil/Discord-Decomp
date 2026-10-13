package fp;

import ip.v;
import ip.z;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import lp.b0;
import lp.p0;
import yq.c1;

/* loaded from: classes3.dex */
public abstract class q {
    public static final b0 a;

    static {
        ar.l lVar = ar.l.a;
        hp.m mVar = new hp.m(ar.l.f2692b, p.f8911f, 1);
        ip.g gVar = ip.g.f12138d;
        hq.e f2 = p.f8912g.a.f();
        xq.b bVar = xq.l.f20551e;
        b0 b0Var = new b0(mVar, f2, bVar);
        b0Var.E = z.f12183w;
        ip.p pVar = ip.q.f12159e;
        if (pVar == null) {
            b0.C(9);
            throw null;
        }
        b0Var.F = pVar;
        List c6 = kotlin.collections.b0.c(p0.F0(b0Var, c1.f21014v, hq.e.e("T"), 0, bVar));
        if (c6 == null) {
            b0.C(14);
            throw null;
        }
        if (b0Var.H != null) {
            throw new IllegalStateException("Type parameters are already set for " + b0Var.getName());
        }
        ArrayList arrayList = new ArrayList(c6);
        b0Var.H = arrayList;
        b0Var.G = new yq.l(b0Var, arrayList, b0Var.I, b0Var.J);
        Set set = Collections.EMPTY_SET;
        if (set == null) {
            b0.C(13);
            throw null;
        }
        Iterator it = set.iterator();
        while (it.hasNext()) {
            ((lp.h) ((v) it.next())).E = b0Var.k();
        }
        a = b0Var;
    }
}
