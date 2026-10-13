package ei;

import java.io.Serializable;
import java.util.List;

/* loaded from: classes3.dex */
public final class h implements g, Serializable {

    /* renamed from: d, reason: collision with root package name */
    public final List f8104d;

    public h(List list) {
        this.f8104d = list;
    }

    @Override // ei.g
    public final boolean apply(Object obj) {
        int i5 = 0;
        while (true) {
            List list = this.f8104d;
            if (i5 >= list.size()) {
                return true;
            }
            if (!((g) list.get(i5)).apply(obj)) {
                return false;
            }
            i5++;
        }
    }

    public final boolean equals(Object obj) {
        if (obj instanceof h) {
            return this.f8104d.equals(((h) obj).f8104d);
        }
        return false;
    }

    public final int hashCode() {
        return this.f8104d.hashCode() + 306654252;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Predicates.and(");
        boolean z5 = true;
        for (Object obj : this.f8104d) {
            if (!z5) {
                sb2.append(',');
            }
            sb2.append(obj);
            z5 = false;
        }
        sb2.append(')');
        return sb2.toString();
    }
}
