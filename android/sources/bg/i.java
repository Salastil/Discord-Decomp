package bg;

import java.io.Serializable;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class i implements Serializable {

    /* renamed from: d, reason: collision with root package name */
    public final l1 f2951d;

    public i(l1 l1Var) {
        this.f2951d = l1Var;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof i) {
            return b.h(this.f2951d, ((i) obj).f2951d);
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f2951d});
    }

    public final String toString() {
        return s4.h.f("Suppliers.ofInstance(", this.f2951d.toString(), ")");
    }
}
