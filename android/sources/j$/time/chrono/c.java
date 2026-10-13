package j$.time.chrono;

import j$.time.LocalDateTime;
import j$.time.ZoneOffset;
import j$.time.temporal.TemporalAccessor;
import java.util.Objects;

/* loaded from: classes2.dex */
public interface c extends TemporalAccessor, Comparable {
    default long d(ZoneOffset zoneOffset) {
        Objects.requireNonNull(zoneOffset, "offset");
        return ((((LocalDateTime) this).a.o() * 86400) + r0.f12280b.k()) - zoneOffset.a;
    }
}
