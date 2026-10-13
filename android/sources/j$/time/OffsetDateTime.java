package j$.time;

import j$.time.temporal.TemporalAccessor;
import j$.time.temporal.m;
import j$.time.temporal.n;
import java.io.Serializable;
import java.util.Objects;

/* loaded from: classes2.dex */
public final class OffsetDateTime implements TemporalAccessor, Comparable<OffsetDateTime>, Serializable {

    /* renamed from: c, reason: collision with root package name */
    public static final /* synthetic */ int f12281c = 0;
    public final LocalDateTime a;

    /* renamed from: b, reason: collision with root package name */
    public final ZoneOffset f12282b;

    @Override // java.lang.Comparable
    public final int compareTo(OffsetDateTime offsetDateTime) {
        int compare;
        OffsetDateTime offsetDateTime2 = offsetDateTime;
        if (this.f12282b.equals(offsetDateTime2.f12282b)) {
            compare = toLocalDateTime().compareTo(offsetDateTime2.toLocalDateTime());
        } else {
            compare = Long.compare(this.a.d(this.f12282b), offsetDateTime2.a.d(offsetDateTime2.f12282b));
            if (compare == 0) {
                compare = this.a.f12280b.f12329d - offsetDateTime2.a.f12280b.f12329d;
            }
        }
        return compare == 0 ? toLocalDateTime().compareTo(offsetDateTime2.toLocalDateTime()) : compare;
    }

    static {
        LocalDateTime localDateTime = LocalDateTime.f12278c;
        ZoneOffset zoneOffset = ZoneOffset.f12286f;
        localDateTime.getClass();
        new OffsetDateTime(localDateTime, zoneOffset);
        LocalDateTime localDateTime2 = LocalDateTime.f12279d;
        ZoneOffset zoneOffset2 = ZoneOffset.f12285e;
        localDateTime2.getClass();
        new OffsetDateTime(localDateTime2, zoneOffset2);
    }

    public OffsetDateTime(LocalDateTime localDateTime, ZoneOffset zoneOffset) {
        this.a = localDateTime;
        Objects.requireNonNull(zoneOffset, "offset");
        this.f12282b = zoneOffset;
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final boolean e(j$.time.temporal.j jVar) {
        if (jVar instanceof j$.time.temporal.a) {
            return true;
        }
        return jVar != null && jVar.a(this);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final n b(j$.time.temporal.j jVar) {
        if (jVar instanceof j$.time.temporal.a) {
            if (jVar != j$.time.temporal.a.INSTANT_SECONDS && jVar != j$.time.temporal.a.OFFSET_SECONDS) {
                return this.a.b(jVar);
            }
            return ((j$.time.temporal.a) jVar).f12332b;
        }
        return jVar.b(this);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final int a(j$.time.temporal.j jVar) {
        if (jVar != null) {
            int i5 = j.a[((j$.time.temporal.a) jVar).ordinal()];
            if (i5 == 1) {
                throw new m("Invalid field 'InstantSeconds' for get() method, use getLong() instead");
            }
            if (i5 == 2) {
                return this.f12282b.a;
            }
            return this.a.a(jVar);
        }
        return super.a(jVar);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final long f(j$.time.temporal.j jVar) {
        if (jVar instanceof j$.time.temporal.a) {
            int i5 = j.a[((j$.time.temporal.a) jVar).ordinal()];
            if (i5 == 1) {
                return this.a.d(this.f12282b);
            }
            if (i5 == 2) {
                return this.f12282b.a;
            }
            return this.a.f(jVar);
        }
        return jVar.e(this);
    }

    public LocalDateTime toLocalDateTime() {
        return this.a;
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final Object c(j$.time.format.a aVar) {
        if (aVar == j$.time.temporal.k.f12340d || aVar == j$.time.temporal.k.f12341e) {
            return this.f12282b;
        }
        if (aVar == j$.time.temporal.k.a) {
            return null;
        }
        if (aVar == j$.time.temporal.k.f12342f) {
            return this.a.a;
        }
        if (aVar == j$.time.temporal.k.f12343g) {
            return this.a.f12280b;
        }
        if (aVar == j$.time.temporal.k.f12338b) {
            return j$.time.chrono.e.a;
        }
        if (aVar == j$.time.temporal.k.f12339c) {
            return j$.time.temporal.b.NANOS;
        }
        return aVar.a(this);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof OffsetDateTime) {
            OffsetDateTime offsetDateTime = (OffsetDateTime) obj;
            if (this.a.equals(offsetDateTime.a) && this.f12282b.equals(offsetDateTime.f12282b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode() ^ this.f12282b.a;
    }

    public final String toString() {
        return this.a.toString() + this.f12282b.f12287b;
    }
}
