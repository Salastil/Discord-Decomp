package ge;

import fi.e0;
import java.util.Collections;
import java.util.List;
import ke.d0;
import nd.z0;

/* loaded from: classes3.dex */
public final class s implements hc.g {

    /* renamed from: i, reason: collision with root package name */
    public static final String f9203i;

    /* renamed from: v, reason: collision with root package name */
    public static final String f9204v;

    /* renamed from: d, reason: collision with root package name */
    public final z0 f9205d;

    /* renamed from: e, reason: collision with root package name */
    public final e0 f9206e;

    static {
        int i5 = d0.a;
        f9203i = Integer.toString(0, 36);
        f9204v = Integer.toString(1, 36);
    }

    public s(z0 z0Var, List list) {
        if (!list.isEmpty() && (((Integer) Collections.min(list)).intValue() < 0 || ((Integer) Collections.max(list)).intValue() >= z0Var.f15208d)) {
            throw new IndexOutOfBoundsException();
        }
        this.f9205d = z0Var;
        this.f9206e = e0.k(list);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && s.class == obj.getClass()) {
            s sVar = (s) obj;
            if (this.f9205d.equals(sVar.f9205d) && this.f9206e.equals(sVar.f9206e)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (this.f9206e.hashCode() * 31) + this.f9205d.hashCode();
    }
}
