package j$.time;

import j$.time.format.DateTimeFormatter;
import j$.time.temporal.TemporalAccessor;
import j$.time.temporal.m;
import java.io.Serializable;
import java.util.Arrays;
import java.util.Objects;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentMap;

/* loaded from: classes2.dex */
public final class Instant implements TemporalAccessor, Comparable<Instant>, Serializable {

    /* renamed from: c, reason: collision with root package name */
    public static final Instant f12276c = new Instant(0, 0);
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final int f12277b;

    public static Instant now() {
        ConcurrentMap concurrentMap = ZoneOffset.f12283c;
        return ofEpochMilli(System.currentTimeMillis());
    }

    @Override // java.lang.Comparable
    public final int compareTo(Instant instant) {
        Instant instant2 = instant;
        int compare = Long.compare(this.a, instant2.a);
        return compare != 0 ? compare : this.f12277b - instant2.f12277b;
    }

    static {
        h(-31557014167219200L, 0L);
        h(31556889864403199L, 999999999L);
    }

    public static Instant h(long j, long j5) {
        return g(Math.addExact(j, Math.floorDiv(j5, 1000000000L)), (int) Math.floorMod(j5, 1000000000L));
    }

    public static Instant ofEpochMilli(long j) {
        return g(Math.floorDiv(j, 1000L), ((int) Math.floorMod(j, 1000L)) * 1000000);
    }

    public static Instant g(long j, int i5) {
        if ((i5 | j) == 0) {
            return f12276c;
        }
        if (j < -31557014167219200L || j > 31556889864403199L) {
            throw new a("Instant exceeds minimum or maximum instant");
        }
        return new Instant(j, i5);
    }

    public Instant(long j, int i5) {
        this.a = j;
        this.f12277b = i5;
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final boolean e(j$.time.temporal.j jVar) {
        return jVar instanceof j$.time.temporal.a ? jVar == j$.time.temporal.a.INSTANT_SECONDS || jVar == j$.time.temporal.a.NANO_OF_SECOND || jVar == j$.time.temporal.a.MICRO_OF_SECOND || jVar == j$.time.temporal.a.MILLI_OF_SECOND : jVar != null && jVar.a(this);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final int a(j$.time.temporal.j jVar) {
        if (jVar != null) {
            int i5 = c.a[((j$.time.temporal.a) jVar).ordinal()];
            if (i5 == 1) {
                return this.f12277b;
            }
            if (i5 == 2) {
                return this.f12277b / 1000;
            }
            if (i5 == 3) {
                return this.f12277b / 1000000;
            }
            if (i5 == 4) {
                j$.time.temporal.a aVar = j$.time.temporal.a.INSTANT_SECONDS;
                aVar.f12332b.a(this.a, aVar);
            }
            throw new m("Unsupported field: " + jVar);
        }
        return super.b(jVar).a(f((j$.time.temporal.a) jVar), jVar);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final long f(j$.time.temporal.j jVar) {
        int i5;
        if (jVar instanceof j$.time.temporal.a) {
            int i6 = c.a[((j$.time.temporal.a) jVar).ordinal()];
            if (i6 == 1) {
                i5 = this.f12277b;
            } else if (i6 == 2) {
                i5 = this.f12277b / 1000;
            } else {
                if (i6 != 3) {
                    if (i6 == 4) {
                        return this.a;
                    }
                    throw new m("Unsupported field: " + jVar);
                }
                i5 = this.f12277b / 1000000;
            }
            return i5;
        }
        return jVar.e(this);
    }

    public long getEpochSecond() {
        return this.a;
    }

    public int getNano() {
        return this.f12277b;
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final Object c(j$.time.format.a aVar) {
        if (aVar == j$.time.temporal.k.f12339c) {
            return j$.time.temporal.b.NANOS;
        }
        if (aVar == j$.time.temporal.k.f12338b || aVar == j$.time.temporal.k.a || aVar == j$.time.temporal.k.f12341e || aVar == j$.time.temporal.k.f12340d || aVar == j$.time.temporal.k.f12342f || aVar == j$.time.temporal.k.f12343g) {
            return null;
        }
        return aVar.a(this);
    }

    public OffsetDateTime atOffset(ZoneOffset zoneOffset) {
        ZoneOffset zoneOffset2;
        int i5 = OffsetDateTime.f12281c;
        Objects.requireNonNull(zoneOffset, "zone");
        j$.time.zone.c cVar = new j$.time.zone.c(zoneOffset);
        if (cVar.f12350c.length == 0) {
            zoneOffset2 = cVar.f12349b[0];
        } else {
            long epochSecond = getEpochSecond();
            if (cVar.f12352e.length > 0) {
                if (epochSecond > cVar.f12350c[r8.length - 1]) {
                    ZoneOffset[] zoneOffsetArr = cVar.f12351d;
                    int i6 = e.n(Math.floorDiv(epochSecond + zoneOffsetArr[zoneOffsetArr.length - 1].a, 86400L)).a;
                    Integer valueOf = Integer.valueOf(i6);
                    j$.time.zone.a[] aVarArr = (j$.time.zone.a[]) ((ConcurrentHashMap) cVar.f12353f).get(valueOf);
                    Object obj = null;
                    if (aVarArr == null) {
                        j$.time.zone.b[] bVarArr = cVar.f12352e;
                        j$.time.zone.a[] aVarArr2 = new j$.time.zone.a[bVarArr.length];
                        if (bVarArr.length > 0) {
                            j$.time.zone.b bVar = bVarArr[0];
                            throw null;
                        }
                        if (i6 < 2100) {
                            ((ConcurrentHashMap) cVar.f12353f).putIfAbsent(valueOf, aVarArr2);
                        }
                        aVarArr = aVarArr2;
                    }
                    if (aVarArr.length <= 0) {
                        throw null;
                    }
                    j$.time.zone.a aVar = aVarArr[0];
                    obj.getClass();
                    throw null;
                }
            }
            int binarySearch = Arrays.binarySearch(cVar.f12350c, epochSecond);
            if (binarySearch < 0) {
                binarySearch = (-binarySearch) - 2;
            }
            zoneOffset2 = cVar.f12351d[binarySearch + 1];
        }
        return new OffsetDateTime(LocalDateTime.h(getEpochSecond(), getNano(), zoneOffset2), zoneOffset2);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof Instant) {
            Instant instant = (Instant) obj;
            if (this.a == instant.a && this.f12277b == instant.f12277b) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        long j = this.a;
        return (this.f12277b * 51) + ((int) (j ^ (j >>> 32)));
    }

    public final String toString() {
        return DateTimeFormatter.ISO_INSTANT.format(this);
    }
}
