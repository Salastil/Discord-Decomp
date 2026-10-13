package j$.time.zone;

import j$.time.ZoneOffset;
import java.io.Serializable;
import java.util.Arrays;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentMap;

/* loaded from: classes2.dex */
public final class c implements Serializable {

    /* renamed from: g, reason: collision with root package name */
    public static final long[] f12347g = new long[0];

    /* renamed from: h, reason: collision with root package name */
    public static final b[] f12348h = new b[0];
    public final long[] a;

    /* renamed from: b, reason: collision with root package name */
    public final ZoneOffset[] f12349b;

    /* renamed from: c, reason: collision with root package name */
    public final long[] f12350c;

    /* renamed from: d, reason: collision with root package name */
    public final ZoneOffset[] f12351d;

    /* renamed from: e, reason: collision with root package name */
    public final b[] f12352e;

    /* renamed from: f, reason: collision with root package name */
    public final transient ConcurrentMap f12353f = new ConcurrentHashMap();

    public c(ZoneOffset zoneOffset) {
        ZoneOffset[] zoneOffsetArr = {zoneOffset};
        this.f12349b = zoneOffsetArr;
        long[] jArr = f12347g;
        this.a = jArr;
        this.f12350c = jArr;
        this.f12351d = zoneOffsetArr;
        this.f12352e = f12348h;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof c) {
            c cVar = (c) obj;
            if (Arrays.equals(this.a, cVar.a) && Arrays.equals(this.f12349b, cVar.f12349b) && Arrays.equals(this.f12350c, cVar.f12350c) && Arrays.equals(this.f12351d, cVar.f12351d) && Arrays.equals(this.f12352e, cVar.f12352e)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (((Arrays.hashCode(this.a) ^ Arrays.hashCode(this.f12349b)) ^ Arrays.hashCode(this.f12350c)) ^ Arrays.hashCode(this.f12351d)) ^ Arrays.hashCode(this.f12352e);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("ZoneRules[currentStandardOffset=");
        sb2.append(this.f12349b[r1.length - 1]);
        sb2.append("]");
        return sb2.toString();
    }
}
