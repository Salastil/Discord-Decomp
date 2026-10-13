package androidx.datastore.preferences.protobuf;

/* loaded from: classes.dex */
public abstract class r implements Cloneable {

    /* renamed from: d, reason: collision with root package name */
    public final t f1809d;

    /* renamed from: e, reason: collision with root package name */
    public t f1810e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f1811i = false;

    public r(t tVar) {
        this.f1809d = tVar;
        this.f1810e = (t) tVar.d(4);
    }

    public static void d(t tVar, t tVar2) {
        t0 t0Var = t0.f1812c;
        t0Var.getClass();
        t0Var.a(tVar.getClass()).f(tVar, tVar2);
    }

    public final t a() {
        t b10 = b();
        if (b10.g()) {
            return b10;
        }
        throw new ai.k();
    }

    public final t b() {
        if (this.f1811i) {
            return this.f1810e;
        }
        t tVar = this.f1810e;
        tVar.getClass();
        t0 t0Var = t0.f1812c;
        t0Var.getClass();
        t0Var.a(tVar.getClass()).a(tVar);
        this.f1811i = true;
        return this.f1810e;
    }

    public final void c() {
        if (this.f1811i) {
            t tVar = (t) this.f1810e.d(4);
            d(tVar, this.f1810e);
            this.f1810e = tVar;
            this.f1811i = false;
        }
    }

    public final Object clone() {
        r rVar = (r) this.f1809d.d(5);
        t b10 = b();
        rVar.c();
        d(rVar.f1810e, b10);
        return rVar;
    }
}
