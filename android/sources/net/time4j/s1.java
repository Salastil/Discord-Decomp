package net.time4j;

/* loaded from: classes3.dex */
public final class s1 extends a {
    private static final long serialVersionUID = 1945670789283677398L;
    final /* synthetic */ t1 this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public s1(t1 t1Var) {
        super("LOCAL_DAY_OF_WEEK");
        this.this$0 = t1Var;
    }

    private Object readResolve() {
        return this.this$0.F;
    }

    @Override // ks.d
    public final Object a() {
        return this.this$0.f15325d.c();
    }

    @Override // ks.a, java.util.Comparator
    /* renamed from: e */
    public final int compare(ks.e eVar, ks.e eVar2) {
        int b10 = ((n1) eVar.d(this)).b(this.this$0);
        int b11 = ((n1) eVar2.d(this)).b(this.this$0);
        if (b10 < b11) {
            return -1;
        }
        return b10 == b11 ? 0 : 1;
    }

    @Override // ks.a
    public final ks.j f(ks.r rVar) {
        if (rVar.e(w0.J)) {
            return new r1(0, this);
        }
        return null;
    }

    @Override // ks.a
    public final boolean g(ks.a aVar) {
        return this.this$0.equals(((s1) aVar).this$0);
    }

    @Override // ks.d
    public final Class getType() {
        return n1.class;
    }

    @Override // ks.d
    public final boolean i() {
        return true;
    }

    @Override // ks.a
    public final ks.d j() {
        return w0.Q;
    }

    @Override // ks.d
    public final Object v() {
        return this.this$0.f15325d;
    }

    @Override // ks.d
    public final boolean w() {
        return false;
    }
}
