package g0;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class d implements m {

    /* renamed from: d, reason: collision with root package name */
    public final m f9070d;

    /* renamed from: e, reason: collision with root package name */
    public final h f9071e;

    /* renamed from: i, reason: collision with root package name */
    public final i f9072i;

    public d(m measurable, h minMax, i widthHeight) {
        Intrinsics.checkNotNullParameter(measurable, "measurable");
        Intrinsics.checkNotNullParameter(minMax, "minMax");
        Intrinsics.checkNotNullParameter(widthHeight, "widthHeight");
        this.f9070d = measurable;
        this.f9071e = minMax;
        this.f9072i = widthHeight;
    }

    @Override // g0.m
    public final int a(int i5) {
        return this.f9070d.a(i5);
    }

    @Override // g0.m
    public final int e(int i5) {
        return this.f9070d.e(i5);
    }

    @Override // g0.m
    public final int f(int i5) {
        return this.f9070d.f(i5);
    }

    @Override // g0.m
    public final t g(long j) {
        i iVar = this.f9072i;
        i iVar2 = i.f9076d;
        h hVar = h.f9074e;
        h hVar2 = this.f9071e;
        m mVar = this.f9070d;
        if (iVar == iVar2) {
            return new e(hVar2 == hVar ? mVar.f(m0.a.a(j)) : mVar.e(m0.a.a(j)), m0.a.a(j));
        }
        return new e(m0.a.b(j), hVar2 == hVar ? mVar.a(m0.a.b(j)) : mVar.k(m0.a.b(j)));
    }

    @Override // g0.m
    public final int k(int i5) {
        return this.f9070d.k(i5);
    }
}
