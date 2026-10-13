package j$.time.format;

import j$.time.temporal.TemporalAccessor;
import java.io.IOException;
import java.util.HashMap;
import java.util.Locale;
import java.util.Objects;

/* loaded from: classes2.dex */
public final class DateTimeFormatter {
    public static final DateTimeFormatter ISO_INSTANT;
    public static final DateTimeFormatter ISO_LOCAL_DATE;
    public final e a;

    /* renamed from: b, reason: collision with root package name */
    public final Locale f12296b;

    /* renamed from: c, reason: collision with root package name */
    public final s f12297c;

    /* renamed from: d, reason: collision with root package name */
    public final j$.time.chrono.d f12298d;

    static {
        n nVar = new n();
        j$.time.temporal.a aVar = j$.time.temporal.a.YEAR;
        u uVar = u.EXCEEDS_PAD;
        nVar.h(aVar, 4, 10, uVar);
        nVar.c('-');
        j$.time.temporal.a aVar2 = j$.time.temporal.a.MONTH_OF_YEAR;
        nVar.g(aVar2, 2);
        nVar.c('-');
        j$.time.temporal.a aVar3 = j$.time.temporal.a.DAY_OF_MONTH;
        nVar.g(aVar3, 2);
        t tVar = t.STRICT;
        j$.time.chrono.e eVar = j$.time.chrono.e.a;
        DateTimeFormatter k = nVar.k(tVar, eVar);
        ISO_LOCAL_DATE = k;
        n nVar2 = new n();
        k kVar = k.INSENSITIVE;
        nVar2.b(kVar);
        nVar2.a(k);
        j jVar = j.f12309d;
        nVar2.b(jVar);
        nVar2.k(tVar, eVar);
        n nVar3 = new n();
        nVar3.b(kVar);
        nVar3.a(k);
        nVar3.j();
        nVar3.b(jVar);
        nVar3.k(tVar, eVar);
        n nVar4 = new n();
        j$.time.temporal.a aVar4 = j$.time.temporal.a.HOUR_OF_DAY;
        nVar4.g(aVar4, 2);
        nVar4.c(':');
        j$.time.temporal.a aVar5 = j$.time.temporal.a.MINUTE_OF_HOUR;
        nVar4.g(aVar5, 2);
        nVar4.j();
        nVar4.c(':');
        j$.time.temporal.a aVar6 = j$.time.temporal.a.SECOND_OF_MINUTE;
        nVar4.g(aVar6, 2);
        nVar4.j();
        nVar4.b(new g(j$.time.temporal.a.NANO_OF_SECOND));
        DateTimeFormatter k5 = nVar4.k(tVar, null);
        n nVar5 = new n();
        nVar5.b(kVar);
        nVar5.a(k5);
        nVar5.b(jVar);
        nVar5.k(tVar, null);
        n nVar6 = new n();
        nVar6.b(kVar);
        nVar6.a(k5);
        nVar6.j();
        nVar6.b(jVar);
        nVar6.k(tVar, null);
        n nVar7 = new n();
        nVar7.b(kVar);
        nVar7.a(k);
        nVar7.c('T');
        nVar7.a(k5);
        DateTimeFormatter k7 = nVar7.k(tVar, eVar);
        n nVar8 = new n();
        nVar8.b(kVar);
        nVar8.a(k7);
        nVar8.b(jVar);
        DateTimeFormatter k10 = nVar8.k(tVar, eVar);
        n nVar9 = new n();
        nVar9.a(k10);
        nVar9.j();
        nVar9.c('[');
        k kVar2 = k.SENSITIVE;
        nVar9.b(kVar2);
        nVar9.b(new h(1));
        nVar9.c(']');
        nVar9.k(tVar, eVar);
        n nVar10 = new n();
        nVar10.a(k7);
        nVar10.j();
        nVar10.b(jVar);
        nVar10.j();
        nVar10.c('[');
        nVar10.b(kVar2);
        nVar10.b(new h(1));
        nVar10.c(']');
        nVar10.k(tVar, eVar);
        n nVar11 = new n();
        nVar11.b(kVar);
        nVar11.h(aVar, 4, 10, uVar);
        nVar11.c('-');
        nVar11.g(j$.time.temporal.a.DAY_OF_YEAR, 3);
        nVar11.j();
        nVar11.b(jVar);
        nVar11.k(tVar, eVar);
        n nVar12 = new n();
        nVar12.b(kVar);
        nVar12.h(j$.time.temporal.i.f12337c, 4, 10, uVar);
        nVar12.d("-W");
        nVar12.g(j$.time.temporal.i.f12336b, 2);
        nVar12.c('-');
        j$.time.temporal.a aVar7 = j$.time.temporal.a.DAY_OF_WEEK;
        nVar12.g(aVar7, 1);
        nVar12.j();
        nVar12.b(jVar);
        nVar12.k(tVar, eVar);
        n nVar13 = new n();
        nVar13.b(kVar);
        nVar13.b(new h(0));
        ISO_INSTANT = nVar13.k(tVar, null);
        n nVar14 = new n();
        nVar14.b(kVar);
        nVar14.g(aVar, 4);
        nVar14.g(aVar2, 2);
        nVar14.g(aVar3, 2);
        nVar14.j();
        nVar14.b(new j("+HHMMss", "Z"));
        nVar14.k(tVar, eVar);
        HashMap hashMap = new HashMap();
        hashMap.put(1L, "Mon");
        hashMap.put(2L, "Tue");
        hashMap.put(3L, "Wed");
        hashMap.put(4L, "Thu");
        hashMap.put(5L, "Fri");
        hashMap.put(6L, "Sat");
        hashMap.put(7L, "Sun");
        HashMap hashMap2 = new HashMap();
        hashMap2.put(1L, "Jan");
        hashMap2.put(2L, "Feb");
        hashMap2.put(3L, "Mar");
        hashMap2.put(4L, "Apr");
        hashMap2.put(5L, "May");
        hashMap2.put(6L, "Jun");
        hashMap2.put(7L, "Jul");
        hashMap2.put(8L, "Aug");
        hashMap2.put(9L, "Sep");
        hashMap2.put(10L, "Oct");
        hashMap2.put(11L, "Nov");
        hashMap2.put(12L, "Dec");
        n nVar15 = new n();
        nVar15.b(kVar);
        nVar15.b(k.LENIENT);
        nVar15.j();
        nVar15.e(aVar7, hashMap);
        nVar15.d(", ");
        nVar15.i();
        nVar15.h(aVar3, 1, 2, u.NOT_NEGATIVE);
        nVar15.c(' ');
        nVar15.e(aVar2, hashMap2);
        nVar15.c(' ');
        nVar15.g(aVar, 4);
        nVar15.c(' ');
        nVar15.g(aVar4, 2);
        nVar15.c(':');
        nVar15.g(aVar5, 2);
        nVar15.j();
        nVar15.c(':');
        nVar15.g(aVar6, 2);
        nVar15.i();
        nVar15.c(' ');
        nVar15.b(new j("+HHMM", "GMT"));
        nVar15.k(t.SMART, eVar);
    }

    public DateTimeFormatter(e eVar, Locale locale, t tVar, j$.time.chrono.d dVar) {
        s sVar = s.a;
        this.a = eVar;
        this.f12296b = locale;
        this.f12297c = sVar;
        Objects.requireNonNull(tVar, "resolverStyle");
        this.f12298d = dVar;
    }

    public String format(TemporalAccessor temporalAccessor) {
        StringBuilder sb2 = new StringBuilder(32);
        e eVar = this.a;
        Objects.requireNonNull(temporalAccessor, "temporal");
        try {
            eVar.a(new p(temporalAccessor, this), sb2);
            return sb2.toString();
        } catch (IOException e9) {
            throw new j$.time.a(e9.getMessage(), e9);
        }
    }

    public final String toString() {
        String eVar = this.a.toString();
        return eVar.startsWith("[") ? eVar : eVar.substring(1, eVar.length() - 1);
    }
}
