package nd;

import hc.p1;

/* loaded from: classes3.dex */
public final class l implements q, p {

    /* renamed from: d, reason: collision with root package name */
    public final s f15124d;

    /* renamed from: e, reason: collision with root package name */
    public final long f15125e;

    /* renamed from: i, reason: collision with root package name */
    public final ie.q f15126i;

    /* renamed from: v, reason: collision with root package name */
    public a f15127v;

    /* renamed from: w, reason: collision with root package name */
    public q f15128w;

    /* renamed from: x, reason: collision with root package name */
    public p f15129x;

    /* renamed from: y, reason: collision with root package name */
    public long f15130y = -9223372036854775807L;

    public l(s sVar, ie.q qVar, long j) {
        this.f15124d = sVar;
        this.f15126i = qVar;
        this.f15125e = j;
    }

    @Override // nd.s0
    public final void A(long j) {
        q qVar = this.f15128w;
        int i5 = ke.d0.a;
        qVar.A(j);
    }

    @Override // nd.q
    public final long a(long j, p1 p1Var) {
        q qVar = this.f15128w;
        int i5 = ke.d0.a;
        return qVar.a(j, p1Var);
    }

    @Override // nd.r0
    public final void c(s0 s0Var) {
        p pVar = this.f15129x;
        int i5 = ke.d0.a;
        pVar.c(this);
    }

    @Override // nd.p
    public final void d(q qVar) {
        p pVar = this.f15129x;
        int i5 = ke.d0.a;
        pVar.d(this);
    }

    @Override // nd.q
    public final long e(ge.p[] pVarArr, boolean[] zArr, q0[] q0VarArr, boolean[] zArr2, long j) {
        long j5;
        long j7 = this.f15130y;
        if (j7 == -9223372036854775807L || j != this.f15125e) {
            j5 = j;
        } else {
            this.f15130y = -9223372036854775807L;
            j5 = j7;
        }
        q qVar = this.f15128w;
        int i5 = ke.d0.a;
        return qVar.e(pVarArr, zArr, q0VarArr, zArr2, j5);
    }

    @Override // nd.s0
    public final long h() {
        q qVar = this.f15128w;
        int i5 = ke.d0.a;
        return qVar.h();
    }

    @Override // nd.q
    public final void j() {
        q qVar = this.f15128w;
        if (qVar != null) {
            qVar.j();
            return;
        }
        a aVar = this.f15127v;
        if (aVar != null) {
            aVar.j();
        }
    }

    @Override // nd.q
    public final long m(long j) {
        q qVar = this.f15128w;
        int i5 = ke.d0.a;
        return qVar.m(j);
    }

    @Override // nd.q
    public final void n(long j) {
        q qVar = this.f15128w;
        int i5 = ke.d0.a;
        qVar.n(j);
    }

    @Override // nd.s0
    public final boolean o(long j) {
        q qVar = this.f15128w;
        return qVar != null && qVar.o(j);
    }

    @Override // nd.q
    public final void p(p pVar, long j) {
        this.f15129x = pVar;
        q qVar = this.f15128w;
        if (qVar != null) {
            long j5 = this.f15130y;
            if (j5 == -9223372036854775807L) {
                j5 = this.f15125e;
            }
            qVar.p(this, j5);
        }
    }

    @Override // nd.s0
    public final boolean q() {
        q qVar = this.f15128w;
        return qVar != null && qVar.q();
    }

    @Override // nd.q
    public final long s() {
        q qVar = this.f15128w;
        int i5 = ke.d0.a;
        return qVar.s();
    }

    @Override // nd.q
    public final a1 u() {
        q qVar = this.f15128w;
        int i5 = ke.d0.a;
        return qVar.u();
    }

    @Override // nd.s0
    public final long w() {
        q qVar = this.f15128w;
        int i5 = ke.d0.a;
        return qVar.w();
    }
}
