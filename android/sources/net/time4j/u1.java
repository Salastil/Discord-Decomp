package net.time4j;

/* loaded from: classes3.dex */
public final class u1 implements ks.u {
    @Override // ks.u
    public final Object a(ks.e eVar, long j) {
        if (j == 0) {
            return eVar;
        }
        int A = w3.q.A(w3.q.z(((Integer) eVar.d(v1.f15381e)).intValue(), j));
        u uVar = w0.J;
        w0 w0Var = (w0) eVar.d(uVar);
        w0Var.getClass();
        t1 t1Var = t1.G;
        int intValue = ((Integer) w0Var.d(t1Var.f15329w)).intValue();
        n1 w5 = w0Var.w();
        if (intValue == 53) {
            intValue = ((Integer) w0.A(A, 26, w5, true).g(t1Var.f15329w)).intValue();
        }
        return eVar.h(uVar, w0.A(A, intValue, w5, true));
    }
}
