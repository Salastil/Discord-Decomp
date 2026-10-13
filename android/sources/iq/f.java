package iq;

/* loaded from: classes3.dex */
public final class f {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final int f12207b;

    public f(int i5, Object obj) {
        this.a = obj;
        this.f12207b = i5;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof f)) {
            return false;
        }
        f fVar = (f) obj;
        return this.a == fVar.a && this.f12207b == fVar.f12207b;
    }

    public final int hashCode() {
        return (System.identityHashCode(this.a) * 65535) + this.f12207b;
    }
}
