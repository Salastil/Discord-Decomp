package bg;

import java.io.Serializable;

/* loaded from: classes3.dex */
public final class e0 extends a0 implements Serializable {

    /* renamed from: d, reason: collision with root package name */
    public final a0 f2945d;

    public e0(a0 a0Var) {
        this.f2945d = a0Var;
    }

    @Override // bg.a0
    public final a0 b() {
        return this.f2945d;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        return this.f2945d.compare(obj2, obj);
    }

    @Override // java.util.Comparator
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof e0) {
            return this.f2945d.equals(((e0) obj).f2945d);
        }
        return false;
    }

    public final int hashCode() {
        return -this.f2945d.hashCode();
    }

    public final String toString() {
        return this.f2945d.toString().concat(".reverse()");
    }
}
