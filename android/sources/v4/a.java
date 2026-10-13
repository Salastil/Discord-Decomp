package v4;

import java.util.ArrayList;

/* loaded from: classes.dex */
public abstract class a {
    public static final e4.e a = e4.e.x("k", "x", "y");

    public static qa.t a(w4.b bVar, l4.i iVar) {
        ArrayList arrayList = new ArrayList();
        if (bVar.A() == 1) {
            bVar.c();
            while (bVar.o()) {
                w4.b bVar2 = bVar;
                l4.i iVar2 = iVar;
                arrayList.add(new o4.l(iVar2, o.b(bVar2, iVar2, x4.h.c(), f.f19239w, bVar.A() == 3, false)));
                bVar = bVar2;
                iVar = iVar2;
            }
            bVar.g();
            p.b(arrayList);
        } else {
            arrayList.add(new y4.a(n.b(bVar, x4.h.c())));
        }
        return new qa.t(3, arrayList);
    }

    public static r4.e b(w4.b bVar, l4.i iVar) {
        bVar.f();
        qa.t tVar = null;
        r4.b bVar2 = null;
        boolean z5 = false;
        r4.b bVar3 = null;
        while (bVar.A() != 4) {
            int P = bVar.P(a);
            if (P == 0) {
                tVar = a(bVar, iVar);
            } else if (P != 1) {
                if (P != 2) {
                    bVar.Q();
                    bVar.R();
                } else if (bVar.A() == 6) {
                    bVar.R();
                    z5 = true;
                } else {
                    bVar2 = m3.n.z0(bVar, iVar, true);
                }
            } else if (bVar.A() == 6) {
                bVar.R();
                z5 = true;
            } else {
                bVar3 = m3.n.z0(bVar, iVar, true);
            }
        }
        bVar.i();
        if (z5) {
            iVar.a("Lottie doesn't support expressions.");
        }
        return tVar != null ? tVar : new r4.c(bVar3, bVar2);
    }
}
