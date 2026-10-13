package j$.time.format;

import j$.time.ZoneOffset;
import j$.time.temporal.TemporalAccessor;

/* loaded from: classes2.dex */
public final /* synthetic */ class a {
    public final /* synthetic */ int a;

    public /* synthetic */ a(int i5) {
        this.a = i5;
    }

    public final Object a(TemporalAccessor temporalAccessor) {
        switch (this.a) {
            case 0:
                j$.time.k kVar = (j$.time.k) temporalAccessor.c(j$.time.temporal.k.a);
                if (kVar == null || (kVar instanceof ZoneOffset)) {
                    return null;
                }
                return kVar;
            case 1:
                return (j$.time.k) temporalAccessor.c(j$.time.temporal.k.a);
            case 2:
                return (j$.time.chrono.d) temporalAccessor.c(j$.time.temporal.k.f12338b);
            case 3:
                return (j$.time.temporal.l) temporalAccessor.c(j$.time.temporal.k.f12339c);
            case 4:
                j$.time.temporal.a aVar = j$.time.temporal.a.OFFSET_SECONDS;
                if (temporalAccessor.e(aVar)) {
                    return ZoneOffset.g(temporalAccessor.a(aVar));
                }
                return null;
            case 5:
                j$.time.k kVar2 = (j$.time.k) temporalAccessor.c(j$.time.temporal.k.a);
                return kVar2 != null ? kVar2 : (j$.time.k) temporalAccessor.c(j$.time.temporal.k.f12340d);
            case 6:
                j$.time.temporal.a aVar2 = j$.time.temporal.a.EPOCH_DAY;
                if (temporalAccessor.e(aVar2)) {
                    return j$.time.e.n(temporalAccessor.f(aVar2));
                }
                return null;
            default:
                j$.time.temporal.a aVar3 = j$.time.temporal.a.NANO_OF_DAY;
                if (temporalAccessor.e(aVar3)) {
                    return j$.time.g.i(temporalAccessor.f(aVar3));
                }
                return null;
        }
    }
}
