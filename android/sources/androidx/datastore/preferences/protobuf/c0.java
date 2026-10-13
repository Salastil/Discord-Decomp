package androidx.datastore.preferences.protobuf;

import java.util.List;

/* loaded from: classes.dex */
public final class c0 extends d0 {
    @Override // androidx.datastore.preferences.protobuf.d0
    public final void a(long j, Object obj) {
        ((b) ((u) n1.f1792d.i(j, obj))).f1718d = false;
    }

    @Override // androidx.datastore.preferences.protobuf.d0
    public final void b(long j, Object obj, Object obj2) {
        m1 m1Var = n1.f1792d;
        u uVar = (u) m1Var.i(j, obj);
        u uVar2 = (u) m1Var.i(j, obj2);
        int size = uVar.size();
        int size2 = uVar2.size();
        if (size > 0 && size2 > 0) {
            if (!((b) uVar).f1718d) {
                uVar = uVar.g(size2 + size);
            }
            uVar.addAll(uVar2);
        }
        if (size > 0) {
            uVar2 = uVar;
        }
        n1.o(j, obj, uVar2);
    }

    @Override // androidx.datastore.preferences.protobuf.d0
    public final List c(long j, Object obj) {
        u uVar = (u) n1.f1792d.i(j, obj);
        if (((b) uVar).f1718d) {
            return uVar;
        }
        int size = uVar.size();
        u g6 = uVar.g(size == 0 ? 10 : size * 2);
        n1.o(j, obj, g6);
        return g6;
    }
}
