package bg;

import java.io.Serializable;
import java.util.Comparator;

/* loaded from: classes3.dex */
public final class j extends a0 implements Serializable {

    /* renamed from: d, reason: collision with root package name */
    public final Comparator f2954d;

    public j(Comparator comparator) {
        comparator.getClass();
        this.f2954d = comparator;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        return this.f2954d.compare(obj, obj2);
    }

    @Override // java.util.Comparator
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof j) {
            return this.f2954d.equals(((j) obj).f2954d);
        }
        return false;
    }

    public final int hashCode() {
        return this.f2954d.hashCode();
    }

    public final String toString() {
        return this.f2954d.toString();
    }
}
