package ks;

/* loaded from: classes3.dex */
public final class q extends a implements j {
    private static final long serialVersionUID = 4777240530511579802L;
    private final s max;
    private final s min;
    private final Class<s> type;

    public q(Class cls, s sVar, s sVar2) {
        super(cls.getName().concat("-AXIS"));
        this.type = cls;
        this.min = sVar;
        this.max = sVar2;
    }

    @Override // ks.d
    public final Object a() {
        return this.max;
    }

    @Override // ks.j
    public final Object b(e eVar, Object obj, boolean z5) {
        s sVar = (s) obj;
        if (sVar != null) {
            return sVar;
        }
        throw new IllegalArgumentException("Missing value.");
    }

    @Override // ks.j
    public final Object c(e eVar) {
        return (s) eVar;
    }

    @Override // ks.j
    public final Object d(e eVar) {
        return this.max;
    }

    @Override // ks.a
    public final j f(r rVar) {
        if (rVar.f13682d.equals(this.type)) {
            return this;
        }
        return null;
    }

    @Override // ks.d
    public final Class getType() {
        return this.type;
    }

    @Override // ks.d
    public final boolean i() {
        return false;
    }

    @Override // ks.a
    public final String k(r rVar) {
        return null;
    }

    @Override // ks.a
    public final boolean l() {
        return true;
    }

    @Override // ks.d
    public final Object v() {
        return this.min;
    }

    @Override // ks.d
    public final boolean w() {
        return false;
    }
}
