package e4;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class d {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Long f7941b;

    public d(String key, Long l6) {
        Intrinsics.checkNotNullParameter(key, "key");
        this.a = key;
        this.f7941b = l6;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof d)) {
            return false;
        }
        d dVar = (d) obj;
        return Intrinsics.areEqual(this.a, dVar.a) && Intrinsics.areEqual(this.f7941b, dVar.f7941b);
    }

    public final int hashCode() {
        int hashCode = this.a.hashCode() * 31;
        Long l6 = this.f7941b;
        return hashCode + (l6 == null ? 0 : l6.hashCode());
    }

    public final String toString() {
        return "Preference(key=" + this.a + ", value=" + this.f7941b + ')';
    }
}
