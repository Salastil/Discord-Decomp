package j$.time.format;

import j$.time.LocalDateTime;
import j$.time.ZoneOffset;
import j$.time.temporal.TemporalAccessor;

/* loaded from: classes2.dex */
public final class h implements f {
    public final /* synthetic */ int a;

    public /* synthetic */ h(int i5) {
        this.a = i5;
    }

    @Override // j$.time.format.f
    public final boolean a(p pVar, StringBuilder sb2) {
        switch (this.a) {
            case 0:
                Long a = pVar.a(j$.time.temporal.a.INSTANT_SECONDS);
                TemporalAccessor temporalAccessor = pVar.a;
                j$.time.temporal.a aVar = j$.time.temporal.a.NANO_OF_SECOND;
                Long valueOf = temporalAccessor.e(aVar) ? Long.valueOf(temporalAccessor.f(aVar)) : null;
                int i5 = 0;
                if (a == null) {
                    return false;
                }
                long longValue = a.longValue();
                int a10 = aVar.f12332b.a(valueOf != null ? valueOf.longValue() : 0L, aVar);
                if (longValue >= -62167219200L) {
                    long j = longValue - 253402300800L;
                    long floorDiv = Math.floorDiv(j, 315569520000L) + 1;
                    LocalDateTime h6 = LocalDateTime.h(Math.floorMod(j, 315569520000L) - 62167219200L, 0, ZoneOffset.UTC);
                    if (floorDiv > 0) {
                        sb2.append('+');
                        sb2.append(floorDiv);
                    }
                    sb2.append(h6);
                    if (h6.f12280b.f12328c == 0) {
                        sb2.append(":00");
                    }
                } else {
                    long j5 = longValue + 62167219200L;
                    long j7 = j5 / 315569520000L;
                    long j10 = j5 % 315569520000L;
                    LocalDateTime h7 = LocalDateTime.h(j10 - 62167219200L, 0, ZoneOffset.UTC);
                    int length = sb2.length();
                    sb2.append(h7);
                    if (h7.f12280b.f12328c == 0) {
                        sb2.append(":00");
                    }
                    if (j7 < 0) {
                        if (h7.a.a == -10000) {
                            sb2.replace(length, length + 2, Long.toString(j7 - 1));
                        } else if (j10 == 0) {
                            sb2.insert(length, j7);
                        } else {
                            sb2.insert(length + 1, Math.abs(j7));
                        }
                    }
                }
                if (a10 > 0) {
                    sb2.append('.');
                    int i6 = 100000000;
                    while (true) {
                        if (a10 > 0 || i5 % 3 != 0 || i5 < -2) {
                            int i10 = a10 / i6;
                            sb2.append((char) (i10 + 48));
                            a10 -= i10 * i6;
                            i6 /= 10;
                            i5++;
                        }
                    }
                }
                sb2.append('Z');
                return true;
            default:
                a aVar2 = n.f12314f;
                TemporalAccessor temporalAccessor2 = pVar.a;
                Object c6 = temporalAccessor2.c(aVar2);
                if (c6 == null && pVar.f12323c == 0) {
                    throw new j$.time.a("Unable to extract value: " + temporalAccessor2.getClass());
                }
                j$.time.k kVar = (j$.time.k) c6;
                if (kVar == null) {
                    return false;
                }
                sb2.append(((ZoneOffset) kVar).f12287b);
                return true;
        }
    }

    public final String toString() {
        switch (this.a) {
            case 0:
                return "Instant()";
            default:
                return "ZoneRegionId()";
        }
    }
}
