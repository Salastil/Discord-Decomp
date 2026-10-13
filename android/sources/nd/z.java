package nd;

import hc.p1;

/* loaded from: classes3.dex */
public final class z implements q, p {

    /* renamed from: d, reason: collision with root package name */
    public final q f15203d;

    /* renamed from: e, reason: collision with root package name */
    public final long f15204e;

    /* renamed from: i, reason: collision with root package name */
    public p f15205i;

    public z(q qVar, long j) {
        this.f15203d = qVar;
        this.f15204e = j;
    }

    @Override // nd.s0
    public final void A(long j) {
        this.f15203d.A(j - this.f15204e);
    }

    @Override // nd.q
    public final long a(long j, p1 p1Var) {
        long j5 = this.f15204e;
        return this.f15203d.a(j - j5, p1Var) + j5;
    }

    @Override // nd.r0
    public final void c(s0 s0Var) {
        p pVar = this.f15205i;
        pVar.getClass();
        pVar.c(this);
    }

    @Override // nd.p
    public final void d(q qVar) {
        p pVar = this.f15205i;
        pVar.getClass();
        pVar.d(this);
    }

    @Override // nd.q
    public final long e(ge.p[] pVarArr, boolean[] zArr, q0[] q0VarArr, boolean[] zArr2, long j) {
        q0[] q0VarArr2 = new q0[q0VarArr.length];
        int i5 = 0;
        while (true) {
            q0 q0Var = null;
            if (i5 >= q0VarArr.length) {
                break;
            }
            a0 a0Var = (a0) q0VarArr[i5];
            if (a0Var != null) {
                q0Var = a0Var.f15061d;
            }
            q0VarArr2[i5] = q0Var;
            i5++;
        }
        q qVar = this.f15203d;
        long j5 = this.f15204e;
        long e9 = qVar.e(pVarArr, zArr, q0VarArr2, zArr2, j - j5);
        for (int i6 = 0; i6 < q0VarArr.length; i6++) {
            q0 q0Var2 = q0VarArr2[i6];
            if (q0Var2 == null) {
                q0VarArr[i6] = null;
            } else {
                q0 q0Var3 = q0VarArr[i6];
                if (q0Var3 == null || ((a0) q0Var3).f15061d != q0Var2) {
                    q0VarArr[i6] = new a0(q0Var2, j5);
                }
            }
        }
        return e9 + j5;
    }

    @Override // nd.s0
    public final long h() {
        long h6 = this.f15203d.h();
        if (h6 == Long.MIN_VALUE) {
            return Long.MIN_VALUE;
        }
        return h6 + this.f15204e;
    }

    @Override // nd.q
    public final void j() {
        this.f15203d.j();
    }

    @Override // nd.q
    public final long m(long j) {
        long j5 = this.f15204e;
        return this.f15203d.m(j - j5) + j5;
    }

    @Override // nd.q
    public final void n(long j) {
        this.f15203d.n(j - this.f15204e);
    }

    @Override // nd.s0
    public final boolean o(long j) {
        return this.f15203d.o(j - this.f15204e);
    }

    @Override // nd.q
    public final void p(p pVar, long j) {
        this.f15205i = pVar;
        this.f15203d.p(this, j - this.f15204e);
    }

    @Override // nd.s0
    public final boolean q() {
        return this.f15203d.q();
    }

    @Override // nd.q
    public final long s() {
        long s2 = this.f15203d.s();
        if (s2 == -9223372036854775807L) {
            return -9223372036854775807L;
        }
        return s2 + this.f15204e;
    }

    @Override // nd.q
    public final a1 u() {
        return this.f15203d.u();
    }

    @Override // nd.s0
    public final long w() {
        long w5 = this.f15203d.w();
        if (w5 == Long.MIN_VALUE) {
            return Long.MIN_VALUE;
        }
        return w5 + this.f15204e;
    }
}
