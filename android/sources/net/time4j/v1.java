package net.time4j;

/* loaded from: classes3.dex */
public final class v1 extends a {

    /* renamed from: d, reason: collision with root package name */
    public static final u1 f15380d = new u1();

    /* renamed from: e, reason: collision with root package name */
    public static final v1 f15381e = new v1("YEAR_OF_WEEKDATE");
    private static final long serialVersionUID = -6907291758376370420L;

    public static int m(int i5) {
        n1 d6 = n1.d(tn.g.k(i5, 1, 1));
        t1 t1Var = t1.G;
        int b10 = d6.b(t1Var);
        return b10 <= 8 - t1Var.f15326e ? 2 - b10 : 9 - b10;
    }

    private Object readResolve() {
        return f15381e;
    }

    @Override // ks.d
    public final Object a() {
        return w0.f15387y;
    }

    @Override // ks.d
    public final Class getType() {
        return Integer.class;
    }

    @Override // ks.d
    public final boolean i() {
        return true;
    }

    @Override // ks.a
    public final boolean l() {
        return true;
    }

    @Override // ks.d
    public final Object v() {
        return w0.f15386x;
    }

    @Override // ks.d
    public final boolean w() {
        return false;
    }
}
