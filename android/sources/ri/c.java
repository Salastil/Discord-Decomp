package ri;

import java.util.Collections;
import java.util.Map;

/* loaded from: classes3.dex */
public final class c {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Map f17388b;

    public c(String str, Map map) {
        this.a = str;
        this.f17388b = map;
    }

    public static c a(String str) {
        return new c(str, Collections.EMPTY_MAP);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof c)) {
            return false;
        }
        c cVar = (c) obj;
        return this.a.equals(cVar.a) && this.f17388b.equals(cVar.f17388b);
    }

    public final int hashCode() {
        return this.f17388b.hashCode() + (this.a.hashCode() * 31);
    }

    public final String toString() {
        return "FieldDescriptor{name=" + this.a + ", properties=" + this.f17388b.values() + "}";
    }
}
