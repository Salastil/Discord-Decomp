package bd;

import ke.d0;
import qc.r;
import qc.s;
import qc.t;

/* loaded from: classes3.dex */
public final class g implements s {
    public final e a;

    /* renamed from: b, reason: collision with root package name */
    public final int f2807b;

    /* renamed from: c, reason: collision with root package name */
    public final long f2808c;

    /* renamed from: d, reason: collision with root package name */
    public final long f2809d;

    /* renamed from: e, reason: collision with root package name */
    public final long f2810e;

    public g(e eVar, int i5, long j, long j5) {
        this.a = eVar;
        this.f2807b = i5;
        this.f2808c = j;
        long j7 = (j5 - j) / eVar.f2803i;
        this.f2809d = j7;
        this.f2810e = d0.P(j7 * i5, 1000000L, eVar.f2802e);
    }

    @Override // qc.s
    public final boolean d() {
        return true;
    }

    @Override // qc.s
    public final r h(long j) {
        e eVar = this.a;
        int i5 = this.f2807b;
        long j5 = this.f2809d - 1;
        long j7 = d0.j((eVar.f2802e * j) / (i5 * 1000000), 0L, j5);
        int i6 = eVar.f2803i;
        long j10 = this.f2808c;
        long P = d0.P(j7 * i5, 1000000L, eVar.f2802e);
        t tVar = new t(P, (i6 * j7) + j10);
        if (P >= j || j7 == j5) {
            return new r(tVar, tVar);
        }
        long j11 = j7 + 1;
        return new r(tVar, new t(d0.P(j11 * i5, 1000000L, eVar.f2802e), (i6 * j11) + j10));
    }

    @Override // qc.s
    public final long i() {
        return this.f2810e;
    }
}
