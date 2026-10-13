package fi;

import java.io.Serializable;
import java.util.Comparator;

/* loaded from: classes3.dex */
public final class u extends q0 implements Serializable {

    /* renamed from: d, reason: collision with root package name */
    public final Comparator f8721d;

    public u(Comparator comparator) {
        this.f8721d = comparator;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        return this.f8721d.compare(obj, obj2);
    }

    @Override // java.util.Comparator
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof u) {
            return this.f8721d.equals(((u) obj).f8721d);
        }
        return false;
    }

    public final int hashCode() {
        return this.f8721d.hashCode();
    }

    public final String toString() {
        return this.f8721d.toString();
    }
}
