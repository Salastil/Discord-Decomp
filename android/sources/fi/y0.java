package fi;

import java.io.Serializable;

/* loaded from: classes3.dex */
public final class y0 extends q0 implements Serializable {

    /* renamed from: d, reason: collision with root package name */
    public final q0 f8743d;

    public y0(q0 q0Var) {
        this.f8743d = q0Var;
    }

    @Override // fi.q0
    public final q0 b() {
        return this.f8743d;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        return this.f8743d.compare(obj2, obj);
    }

    @Override // java.util.Comparator
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof y0) {
            return this.f8743d.equals(((y0) obj).f8743d);
        }
        return false;
    }

    public final int hashCode() {
        return -this.f8743d.hashCode();
    }

    public final String toString() {
        String valueOf = String.valueOf(this.f8743d);
        StringBuilder sb2 = new StringBuilder(valueOf.length() + 10);
        sb2.append(valueOf);
        sb2.append(".reverse()");
        return sb2.toString();
    }
}
