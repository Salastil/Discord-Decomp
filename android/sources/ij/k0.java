package ij;

/* loaded from: classes3.dex */
public final class k0 implements q0 {
    public final b a;

    /* renamed from: b, reason: collision with root package name */
    public final u0 f10895b;

    /* renamed from: c, reason: collision with root package name */
    public final m f10896c;

    public k0(u0 u0Var, m mVar, b bVar) {
        this.f10895b = u0Var;
        mVar.getClass();
        this.f10896c = mVar;
        this.a = bVar;
    }

    @Override // ij.q0
    public final void a(Object obj) {
        this.f10895b.getClass();
        t0 t0Var = ((r) obj).f10920c;
        if (t0Var.f10927d) {
            t0Var.f10927d = false;
        }
        this.f10896c.getClass();
        a3.e.w(obj);
        throw null;
    }

    @Override // ij.q0
    public final boolean b(Object obj) {
        this.f10896c.getClass();
        a3.e.w(obj);
        throw null;
    }

    @Override // ij.q0
    public final r c() {
        b bVar = this.a;
        return bVar instanceof r ? ((r) bVar).f() : ((p) ((r) bVar).a(5)).a();
    }

    @Override // ij.q0
    public final void d(Object obj, Object obj2) {
        r0.a(this.f10895b, obj, obj2);
    }

    @Override // ij.q0
    public final boolean e(r rVar, r rVar2) {
        this.f10895b.getClass();
        return rVar.f10920c.equals(rVar2.f10920c);
    }

    @Override // ij.q0
    public final void f(Object obj, androidx.datastore.preferences.protobuf.h hVar, l lVar) {
        this.f10895b.getClass();
        u0.a(obj);
        this.f10896c.getClass();
        obj.getClass();
        throw new ClassCastException();
    }

    @Override // ij.q0
    public final int g(r rVar) {
        this.f10895b.getClass();
        return rVar.f10920c.hashCode();
    }
}
