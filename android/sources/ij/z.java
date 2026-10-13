package ij;

import java.util.List;

/* loaded from: classes3.dex */
public final class z extends a0 {
    @Override // ij.a0
    public final void a(long j, Object obj) {
        c cVar = (c) ((s) c1.f10846c.i(j, obj));
        if (cVar.f10843d) {
            cVar.f10843d = false;
        }
    }

    @Override // ij.a0
    public final void b(long j, Object obj, Object obj2) {
        b1 b1Var = c1.f10846c;
        s sVar = (s) b1Var.i(j, obj);
        s sVar2 = (s) b1Var.i(j, obj2);
        int size = sVar.size();
        int size2 = sVar2.size();
        if (size > 0 && size2 > 0) {
            if (!((c) sVar).f10843d) {
                sVar = sVar.g(size2 + size);
            }
            sVar.addAll(sVar2);
        }
        if (size > 0) {
            sVar2 = sVar;
        }
        c1.o(j, obj, sVar2);
    }

    @Override // ij.a0
    public final List c(long j, Object obj) {
        s sVar = (s) c1.f10846c.i(j, obj);
        if (((c) sVar).f10843d) {
            return sVar;
        }
        int size = sVar.size();
        s g6 = sVar.g(size == 0 ? 10 : size * 2);
        c1.o(j, obj, g6);
        return g6;
    }
}
