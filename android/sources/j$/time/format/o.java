package j$.time.format;

import j$.time.temporal.TemporalAccessor;

/* loaded from: classes2.dex */
public final class o implements TemporalAccessor {
    public final /* synthetic */ j$.time.chrono.b a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ TemporalAccessor f12319b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ j$.time.chrono.d f12320c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ j$.time.k f12321d;

    public o(j$.time.e eVar, TemporalAccessor temporalAccessor, j$.time.chrono.d dVar, j$.time.k kVar) {
        this.a = eVar;
        this.f12319b = temporalAccessor;
        this.f12320c = dVar;
        this.f12321d = kVar;
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final boolean e(j$.time.temporal.j jVar) {
        j$.time.chrono.b bVar = this.a;
        if (bVar != null && jVar.isDateBased()) {
            return ((j$.time.e) bVar).e(jVar);
        }
        return this.f12319b.e(jVar);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final j$.time.temporal.n b(j$.time.temporal.j jVar) {
        j$.time.chrono.b bVar = this.a;
        if (bVar != null && jVar.isDateBased()) {
            return ((j$.time.e) bVar).b(jVar);
        }
        return this.f12319b.b(jVar);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final long f(j$.time.temporal.j jVar) {
        j$.time.chrono.b bVar = this.a;
        if (bVar != null && jVar.isDateBased()) {
            return ((j$.time.e) bVar).f(jVar);
        }
        return this.f12319b.f(jVar);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final Object c(a aVar) {
        if (aVar == j$.time.temporal.k.f12338b) {
            return this.f12320c;
        }
        if (aVar == j$.time.temporal.k.a) {
            return this.f12321d;
        }
        if (aVar == j$.time.temporal.k.f12339c) {
            return this.f12319b.c(aVar);
        }
        return aVar.a(this);
    }
}
