package yq;

/* loaded from: classes3.dex */
public abstract class s0 {
    public abstract c1 a();

    public abstract y b();

    public abstract boolean c();

    public abstract s0 d(zq.f fVar);

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof s0)) {
            return false;
        }
        s0 s0Var = (s0) obj;
        return c() == s0Var.c() && a() == s0Var.a() && b().equals(s0Var.b());
    }

    public final int hashCode() {
        int hashCode = a().hashCode();
        if (z0.l(b())) {
            return (hashCode * 31) + 19;
        }
        return (hashCode * 31) + (c() ? 17 : b().hashCode());
    }

    public final String toString() {
        if (c()) {
            return "*";
        }
        if (a() == c1.f21013i) {
            return b().toString();
        }
        return a() + " " + b();
    }
}
