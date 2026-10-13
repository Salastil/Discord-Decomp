package j$.time;

import j$.time.format.DateTimeFormatter;
import j$.time.temporal.TemporalAccessor;
import j$.time.temporal.n;
import java.io.Serializable;
import java.util.Objects;

/* loaded from: classes2.dex */
public final class LocalDateTime implements TemporalAccessor, j$.time.chrono.c, Serializable {

    /* renamed from: c, reason: collision with root package name */
    public static final LocalDateTime f12278c;

    /* renamed from: d, reason: collision with root package name */
    public static final LocalDateTime f12279d;
    public final e a;

    /* renamed from: b, reason: collision with root package name */
    public final g f12280b;

    static {
        e eVar = e.f12291d;
        g gVar = g.f12324e;
        Objects.requireNonNull(eVar, "date");
        Objects.requireNonNull(gVar, "time");
        f12278c = new LocalDateTime(eVar, gVar);
        e eVar2 = e.f12292e;
        g gVar2 = g.f12325f;
        Objects.requireNonNull(eVar2, "date");
        Objects.requireNonNull(gVar2, "time");
        f12279d = new LocalDateTime(eVar2, gVar2);
    }

    public static LocalDateTime h(long j, int i5, ZoneOffset zoneOffset) {
        Objects.requireNonNull(zoneOffset, "offset");
        long j5 = i5;
        j$.time.temporal.a.NANO_OF_SECOND.f(j5);
        return new LocalDateTime(e.n(Math.floorDiv(j + zoneOffset.a, 86400L)), g.i((((int) Math.floorMod(r5, 86400L)) * 1000000000) + j5));
    }

    public LocalDateTime(e eVar, g gVar) {
        this.a = eVar;
        this.f12280b = gVar;
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final boolean e(j$.time.temporal.j jVar) {
        if (!(jVar instanceof j$.time.temporal.a)) {
            return jVar != null && jVar.a(this);
        }
        j$.time.temporal.a aVar = (j$.time.temporal.a) jVar;
        return aVar.isDateBased() || aVar.g();
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final n b(j$.time.temporal.j jVar) {
        if (jVar instanceof j$.time.temporal.a) {
            return ((j$.time.temporal.a) jVar).g() ? this.f12280b.b(jVar) : this.a.b(jVar);
        }
        return jVar.b(this);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final int a(j$.time.temporal.j jVar) {
        if (jVar instanceof j$.time.temporal.a) {
            return ((j$.time.temporal.a) jVar).g() ? this.f12280b.a(jVar) : this.a.a(jVar);
        }
        return super.a(jVar);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final long f(j$.time.temporal.j jVar) {
        if (jVar instanceof j$.time.temporal.a) {
            return ((j$.time.temporal.a) jVar).g() ? this.f12280b.f(jVar) : this.a.f(jVar);
        }
        return jVar.e(this);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final Object c(j$.time.format.a aVar) {
        if (aVar != j$.time.temporal.k.f12342f) {
            if (aVar == j$.time.temporal.k.a || aVar == j$.time.temporal.k.f12341e || aVar == j$.time.temporal.k.f12340d) {
                return null;
            }
            if (aVar != j$.time.temporal.k.f12343g) {
                if (aVar == j$.time.temporal.k.f12338b) {
                    this.a.getClass();
                    return j$.time.chrono.e.a;
                }
                if (aVar == j$.time.temporal.k.f12339c) {
                    return j$.time.temporal.b.NANOS;
                }
                return aVar.a(this);
            }
            return this.f12280b;
        }
        return this.a;
    }

    public String format(DateTimeFormatter dateTimeFormatter) {
        Objects.requireNonNull(dateTimeFormatter, "formatter");
        return dateTimeFormatter.format(this);
    }

    @Override // java.lang.Comparable
    /* renamed from: g, reason: merged with bridge method [inline-methods] */
    public final int compareTo(j$.time.chrono.c cVar) {
        int compare;
        if (cVar instanceof LocalDateTime) {
            LocalDateTime localDateTime = (LocalDateTime) cVar;
            int g6 = this.a.g(localDateTime.a);
            return g6 == 0 ? this.f12280b.compareTo(localDateTime.f12280b) : g6;
        }
        e eVar = this.a;
        LocalDateTime localDateTime2 = (LocalDateTime) cVar;
        e eVar2 = localDateTime2.a;
        if (eVar2 != null) {
            eVar.getClass();
            compare = eVar.g(eVar2);
        } else {
            compare = Long.compare(eVar.o(), eVar2.o());
            if (compare == 0) {
                j$.time.chrono.e eVar3 = j$.time.chrono.e.a;
                compare = 0;
            }
        }
        if (compare != 0 || (compare = this.f12280b.compareTo(localDateTime2.f12280b)) != 0) {
            return compare;
        }
        this.a.getClass();
        j$.time.chrono.e eVar4 = j$.time.chrono.e.a;
        cVar.getClass();
        ((LocalDateTime) cVar).a.getClass();
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof LocalDateTime) {
            LocalDateTime localDateTime = (LocalDateTime) obj;
            if (this.a.equals(localDateTime.a) && this.f12280b.equals(localDateTime.f12280b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode() ^ this.f12280b.hashCode();
    }

    public final String toString() {
        return this.a.toString() + 'T' + this.f12280b.toString();
    }
}
