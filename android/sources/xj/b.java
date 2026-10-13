package xj;

import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class b {
    public final ArrayList a;

    /* renamed from: b, reason: collision with root package name */
    public final int f20492b;

    public b(int i5, ArrayList arrayList) {
        this.a = new ArrayList(arrayList);
        this.f20492b = i5;
    }

    public final boolean equals(Object obj) {
        return (obj instanceof b) && this.a.equals(((b) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode() ^ Boolean.FALSE.hashCode();
    }

    public final String toString() {
        return "{ " + this.a + " }";
    }
}
