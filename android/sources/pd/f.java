package pd;

import nd.p0;
import nd.q0;

/* loaded from: classes3.dex */
public final class f implements q0 {

    /* renamed from: d, reason: collision with root package name */
    public final h f16367d;

    /* renamed from: e, reason: collision with root package name */
    public final p0 f16368e;

    /* renamed from: i, reason: collision with root package name */
    public final int f16369i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f16370v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ h f16371w;

    public f(h hVar, h hVar2, p0 p0Var, int i5) {
        this.f16371w = hVar;
        this.f16367d = hVar2;
        this.f16368e = p0Var;
        this.f16369i = i5;
    }

    public final void a() {
        if (this.f16370v) {
            return;
        }
        h hVar = this.f16371w;
        a1.d dVar = hVar.f16378y;
        int[] iArr = hVar.f16373e;
        int i5 = this.f16369i;
        dVar.e(iArr[i5], hVar.f16374i[i5], 0, null, hVar.Q);
        this.f16370v = true;
    }

    @Override // nd.q0
    public final int c(long j) {
        h hVar = this.f16371w;
        if (hVar.r()) {
            return 0;
        }
        boolean z5 = hVar.T;
        p0 p0Var = this.f16368e;
        int p3 = p0Var.p(j, z5);
        a aVar = hVar.S;
        if (aVar != null) {
            p3 = Math.min(p3, aVar.c(this.f16369i + 1) - p0Var.n());
        }
        p0Var.z(p3);
        if (p3 > 0) {
            a();
        }
        return p3;
    }

    @Override // nd.q0
    public final int f(e4.l lVar, mc.f fVar, int i5) {
        h hVar = this.f16371w;
        if (hVar.r()) {
            return -3;
        }
        a aVar = hVar.S;
        p0 p0Var = this.f16368e;
        if (aVar != null && aVar.c(this.f16369i + 1) <= p0Var.n()) {
            return -3;
        }
        a();
        return p0Var.w(lVar, fVar, i5, hVar.T);
    }

    @Override // nd.q0
    public final boolean isReady() {
        h hVar = this.f16371w;
        return !hVar.r() && this.f16368e.r(hVar.T);
    }

    @Override // nd.q0
    public final void b() {
    }
}
