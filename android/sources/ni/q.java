package ni;

/* loaded from: classes3.dex */
public final class q {
    public final Class a;

    /* renamed from: b, reason: collision with root package name */
    public final Class f15507b;

    public q(Class cls, Class cls2) {
        this.a = cls;
        this.f15507b = cls2;
    }

    public static q a(Class cls) {
        return new q(p.class, cls);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || q.class != obj.getClass()) {
            return false;
        }
        q qVar = (q) obj;
        if (this.f15507b.equals(qVar.f15507b)) {
            return this.a.equals(qVar.a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode() + (this.f15507b.hashCode() * 31);
    }

    public final String toString() {
        Class cls = this.f15507b;
        Class cls2 = this.a;
        if (cls2 == p.class) {
            return cls.getName();
        }
        return "@" + cls2.getName() + " " + cls.getName();
    }
}
