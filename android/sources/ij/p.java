package ij;

/* loaded from: classes3.dex */
public abstract class p implements Cloneable {

    /* renamed from: d, reason: collision with root package name */
    public final r f10913d;

    /* renamed from: e, reason: collision with root package name */
    public r f10914e;

    public p(r rVar) {
        this.f10913d = rVar;
        if (rVar.e()) {
            throw new IllegalArgumentException("Default instance must be immutable.");
        }
        this.f10914e = rVar.f();
    }

    public final r a() {
        if (!this.f10914e.e()) {
            return this.f10914e;
        }
        r rVar = this.f10914e;
        rVar.getClass();
        n0 n0Var = n0.f10907c;
        n0Var.getClass();
        n0Var.a(rVar.getClass()).a(rVar);
        rVar.f10919b &= Integer.MAX_VALUE;
        return this.f10914e;
    }

    public final Object clone() {
        p pVar = (p) this.f10913d.a(5);
        pVar.f10914e = a();
        return pVar;
    }
}
