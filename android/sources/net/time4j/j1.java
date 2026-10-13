package net.time4j;

/* loaded from: classes3.dex */
public final class j1 extends ks.a {

    /* renamed from: d, reason: collision with root package name */
    public static final j1 f15264d = new j1("WALL_TIME");
    private static final long serialVersionUID = -3712256393866098916L;

    private Object readResolve() {
        return f15264d;
    }

    @Override // ks.d
    public final Object a() {
        return z0.y(23, 59, 59, 999999999, true);
    }

    @Override // ks.d
    public final Class getType() {
        return z0.class;
    }

    @Override // ks.d
    public final boolean i() {
        return false;
    }

    @Override // ks.a
    public final boolean l() {
        return true;
    }

    @Override // ks.d
    public final Object v() {
        return z0.J;
    }

    @Override // ks.d
    public final boolean w() {
        return true;
    }
}
