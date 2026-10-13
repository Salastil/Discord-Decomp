package y8;

import com.facebook.common.internal.Supplier;
import java.util.ArrayList;
import k2.r;
import o8.h;

/* loaded from: classes3.dex */
public final class f implements Supplier {
    public final ArrayList a;

    public f(ArrayList arrayList) {
        h.b("List of suppliers is empty!", !arrayList.isEmpty());
        this.a = arrayList;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof f) {
            return h.f(this.a, ((f) obj).a);
        }
        return false;
    }

    @Override // com.facebook.common.internal.Supplier
    public final Object get() {
        return new e(this);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        r j = h.j(this);
        j.h(this.a, "list");
        return j.toString();
    }
}
