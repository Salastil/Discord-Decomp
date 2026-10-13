package net.time4j;

/* loaded from: classes3.dex */
public final class l implements ks.u {
    public final m a;

    /* renamed from: b, reason: collision with root package name */
    public final int f15268b;

    public l(m mVar, int i5) {
        this.a = mVar;
        this.f15268b = i5;
    }

    @Override // ks.u
    public final Object a(ks.e eVar, long j) {
        u uVar = w0.J;
        return eVar.h(uVar, w0.r(this.a, (w0) eVar.d(uVar), j, this.f15268b));
    }
}
