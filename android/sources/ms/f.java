package ms;

import java.util.Locale;

/* loaded from: classes3.dex */
public final class f {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Locale f14593b;

    public f(String str, Locale locale) {
        this.a = str;
        this.f14593b = locale;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof f) {
            f fVar = (f) obj;
            if (this.a.equals(fVar.a) && this.f14593b.equals(fVar.f14593b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (this.a.hashCode() << 3) ^ this.f14593b.hashCode();
    }

    public final String toString() {
        return this.a + "/" + this.f14593b;
    }
}
