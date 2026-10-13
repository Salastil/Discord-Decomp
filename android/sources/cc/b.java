package cc;

import java.util.HashMap;

/* loaded from: classes3.dex */
public final class b {
    public final fc.a a;

    /* renamed from: b, reason: collision with root package name */
    public final HashMap f3367b;

    public b(fc.a aVar, HashMap hashMap) {
        this.a = aVar;
        this.f3367b = hashMap;
    }

    public final long a(tb.d dVar, long j, int i5) {
        long e9 = j - this.a.e();
        c cVar = (c) this.f3367b.get(dVar);
        long j5 = cVar.a;
        return Math.min(Math.max((long) (Math.pow(3.0d, i5 - 1) * j5 * Math.max(1.0d, Math.log(10000.0d) / Math.log((j5 > 1 ? j5 : 2L) * r12))), e9), cVar.f3368b);
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return this.a.equals(bVar.a) && this.f3367b.equals(bVar.f3367b);
    }

    public final int hashCode() {
        return ((this.a.hashCode() ^ 1000003) * 1000003) ^ this.f3367b.hashCode();
    }

    public final String toString() {
        return "SchedulerConfig{clock=" + this.a + ", values=" + this.f3367b + "}";
    }
}
