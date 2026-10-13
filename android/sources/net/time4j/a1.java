package net.time4j;

/* loaded from: classes3.dex */
public final class a1 implements ks.u {
    public final m a;

    /* renamed from: b, reason: collision with root package name */
    public final t f15218b;

    public a1(m mVar) {
        this.a = mVar;
        this.f15218b = null;
    }

    @Override // ks.u
    public final Object a(ks.e eVar, long j) {
        v vVar;
        w0 w0Var;
        z0 z0Var;
        c1 c1Var = (c1) eVar;
        m mVar = this.a;
        if (mVar != null) {
            w0Var = (w0) c1Var.f15234d.l(j, mVar);
            z0Var = c1Var.f15235e;
        } else {
            z0 z0Var2 = c1Var.f15235e;
            if (j != 0) {
                z0Var2.getClass();
            } else if (z0Var2.f15411d < 24) {
                vVar = new v(0L, z0Var2);
                w0 w0Var2 = (w0) c1Var.f15234d.l(vVar.a(), m.E);
                z0 b10 = vVar.b();
                w0Var = w0Var2;
                z0Var = b10;
            }
            vVar = (v) p0.b(v.class, this.f15218b, z0Var2, j);
            w0 w0Var22 = (w0) c1Var.f15234d.l(vVar.a(), m.E);
            z0 b102 = vVar.b();
            w0Var = w0Var22;
            z0Var = b102;
        }
        return new c1(w0Var, z0Var);
    }

    public a1(t tVar) {
        this.a = null;
        this.f15218b = tVar;
    }
}
