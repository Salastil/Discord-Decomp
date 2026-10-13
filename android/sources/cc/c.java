package cc;

import java.util.Set;

/* loaded from: classes3.dex */
public final class c {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final long f3368b;

    /* renamed from: c, reason: collision with root package name */
    public final Set f3369c;

    public c(long j, long j5, Set set) {
        this.a = j;
        this.f3368b = j5;
        this.f3369c = set;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof c) {
            c cVar = (c) obj;
            if (this.a == cVar.a && this.f3368b == cVar.f3368b && this.f3369c.equals(cVar.f3369c)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        long j = this.a;
        int i5 = (((int) (j ^ (j >>> 32))) ^ 1000003) * 1000003;
        long j5 = this.f3368b;
        return ((i5 ^ ((int) ((j5 >>> 32) ^ j5))) * 1000003) ^ this.f3369c.hashCode();
    }

    public final String toString() {
        return "ConfigValue{delta=" + this.a + ", maxAllowedDelay=" + this.f3368b + ", flags=" + this.f3369c + "}";
    }
}
