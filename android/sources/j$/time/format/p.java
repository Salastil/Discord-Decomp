package j$.time.format;

import j$.time.temporal.TemporalAccessor;
import java.util.Objects;

/* loaded from: classes2.dex */
public final class p {
    public final TemporalAccessor a;

    /* renamed from: b, reason: collision with root package name */
    public final DateTimeFormatter f12322b;

    /* renamed from: c, reason: collision with root package name */
    public int f12323c;

    public p(TemporalAccessor temporalAccessor, DateTimeFormatter dateTimeFormatter) {
        j$.time.chrono.d dVar = dateTimeFormatter.f12298d;
        if (dVar != null) {
            j$.time.chrono.d dVar2 = (j$.time.chrono.d) temporalAccessor.c(j$.time.temporal.k.f12338b);
            j$.time.k kVar = (j$.time.k) temporalAccessor.c(j$.time.temporal.k.a);
            j$.time.e eVar = null;
            dVar = Objects.equals(dVar, dVar2) ? null : dVar;
            if (dVar != null) {
                j$.time.chrono.d dVar3 = dVar != null ? dVar : dVar2;
                if (dVar != null) {
                    if (temporalAccessor.e(j$.time.temporal.a.EPOCH_DAY)) {
                        ((j$.time.chrono.e) dVar3).getClass();
                        eVar = j$.time.e.h(temporalAccessor);
                    } else if (dVar != j$.time.chrono.e.a || dVar2 != null) {
                        for (j$.time.temporal.a aVar : j$.time.temporal.a.values()) {
                            if (aVar.isDateBased() && temporalAccessor.e(aVar)) {
                                throw new j$.time.a("Unable to apply override chronology '" + dVar + "' because the temporal object being formatted contains date fields but does not represent a whole date: " + temporalAccessor);
                            }
                        }
                    }
                }
                temporalAccessor = new o(eVar, temporalAccessor, dVar3, kVar);
            }
        }
        this.a = temporalAccessor;
        this.f12322b = dateTimeFormatter;
    }

    public final Long a(j$.time.temporal.j jVar) {
        try {
            return Long.valueOf(this.a.f(jVar));
        } catch (j$.time.a e9) {
            if (this.f12323c > 0) {
                return null;
            }
            throw e9;
        }
    }

    public final String toString() {
        return this.a.toString();
    }
}
