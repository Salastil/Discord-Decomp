package ij;

/* loaded from: classes3.dex */
public final class b0 implements h0 {
    public h0[] a;

    @Override // ij.h0
    public final p0 a(Class cls) {
        for (h0 h0Var : this.a) {
            if (h0Var.b(cls)) {
                return h0Var.a(cls);
            }
        }
        throw new UnsupportedOperationException("No factory is available for message type: ".concat(cls.getName()));
    }

    @Override // ij.h0
    public final boolean b(Class cls) {
        for (h0 h0Var : this.a) {
            if (h0Var.b(cls)) {
                return true;
            }
        }
        return false;
    }
}
