package j$.time;

import j$.time.temporal.TemporalAccessor;
import j$.time.temporal.m;
import java.io.Serializable;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentMap;

/* loaded from: classes2.dex */
public final class ZoneOffset extends k implements TemporalAccessor, Comparable<ZoneOffset>, Serializable {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final transient String f12287b;

    /* renamed from: c, reason: collision with root package name */
    public static final ConcurrentMap f12283c = new ConcurrentHashMap(16, 0.75f, 4);

    /* renamed from: d, reason: collision with root package name */
    public static final ConcurrentMap f12284d = new ConcurrentHashMap(16, 0.75f, 4);
    public static final ZoneOffset UTC = g(0);

    /* renamed from: e, reason: collision with root package name */
    public static final ZoneOffset f12285e = g(-64800);

    /* renamed from: f, reason: collision with root package name */
    public static final ZoneOffset f12286f = g(64800);

    @Override // java.lang.Comparable
    public final int compareTo(ZoneOffset zoneOffset) {
        return zoneOffset.a - this.a;
    }

    public static ZoneOffset g(int i5) {
        if (i5 < -64800 || i5 > 64800) {
            throw new a("Zone offset not in valid range: -18:00 to +18:00");
        }
        if (i5 % 900 == 0) {
            Integer valueOf = Integer.valueOf(i5);
            ConcurrentMap concurrentMap = f12283c;
            ZoneOffset zoneOffset = (ZoneOffset) concurrentMap.get(valueOf);
            if (zoneOffset != null) {
                return zoneOffset;
            }
            concurrentMap.putIfAbsent(valueOf, new ZoneOffset(i5));
            ZoneOffset zoneOffset2 = (ZoneOffset) concurrentMap.get(valueOf);
            f12284d.putIfAbsent(zoneOffset2.f12287b, zoneOffset2);
            return zoneOffset2;
        }
        return new ZoneOffset(i5);
    }

    public ZoneOffset(int i5) {
        String sb2;
        if (ZoneOffset.class == ZoneOffset.class || ZoneOffset.class == l.class) {
            this.a = i5;
            if (i5 == 0) {
                sb2 = "Z";
            } else {
                int abs = Math.abs(i5);
                StringBuilder sb3 = new StringBuilder();
                int i6 = abs / 3600;
                int i10 = (abs / 60) % 60;
                sb3.append(i5 < 0 ? "-" : "+");
                sb3.append(i6 < 10 ? "0" : "");
                sb3.append(i6);
                sb3.append(i10 < 10 ? ":0" : ":");
                sb3.append(i10);
                int i11 = abs % 60;
                if (i11 != 0) {
                    sb3.append(i11 < 10 ? ":0" : ":");
                    sb3.append(i11);
                }
                sb2 = sb3.toString();
            }
            this.f12287b = sb2;
            return;
        }
        throw new AssertionError("Invalid subclass");
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final boolean e(j$.time.temporal.j jVar) {
        return jVar instanceof j$.time.temporal.a ? jVar == j$.time.temporal.a.OFFSET_SECONDS : jVar != null && jVar.a(this);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final int a(j$.time.temporal.j jVar) {
        if (jVar == j$.time.temporal.a.OFFSET_SECONDS) {
            return this.a;
        }
        if (jVar != null) {
            throw new m("Unsupported field: " + jVar);
        }
        return super.b(jVar).a(f(jVar), jVar);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final long f(j$.time.temporal.j jVar) {
        if (jVar == j$.time.temporal.a.OFFSET_SECONDS) {
            return this.a;
        }
        if (jVar instanceof j$.time.temporal.a) {
            throw new m("Unsupported field: " + jVar);
        }
        return jVar.e(this);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final Object c(j$.time.format.a aVar) {
        return (aVar == j$.time.temporal.k.f12340d || aVar == j$.time.temporal.k.f12341e) ? this : super.c(aVar);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof ZoneOffset) && this.a == ((ZoneOffset) obj).a;
    }

    public final int hashCode() {
        return this.a;
    }

    public final String toString() {
        return this.f12287b;
    }
}
