package nd;

import hc.p1;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class d implements q, p {

    /* renamed from: d, reason: collision with root package name */
    public final Object f15078d;

    /* renamed from: e, reason: collision with root package name */
    public p f15079e;

    /* renamed from: i, reason: collision with root package name */
    public c[] f15080i = new c[0];

    /* renamed from: v, reason: collision with root package name */
    public long f15081v = 0;

    /* renamed from: w, reason: collision with root package name */
    public long f15082w;

    public d(q qVar, long j) {
        this.f15078d = qVar;
        this.f15082w = j;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, nd.s0] */
    @Override // nd.s0
    public final void A(long j) {
        this.f15078d.A(j);
    }

    /* JADX WARN: Type inference failed for: r10v2, types: [java.lang.Object, nd.q] */
    @Override // nd.q
    public final long a(long j, p1 p1Var) {
        if (j == 0) {
            return 0L;
        }
        long j5 = ke.d0.j(p1Var.a, 0L, j);
        long j7 = p1Var.f9841b;
        long j10 = this.f15082w;
        long j11 = ke.d0.j(j7, 0L, j10 == Long.MIN_VALUE ? LongCompanionObject.MAX_VALUE : j10 - j);
        if (j5 != p1Var.a || j11 != p1Var.f9841b) {
            p1Var = new p1(j5, j11);
        }
        return this.f15078d.a(j, p1Var);
    }

    public final boolean b() {
        return this.f15081v != -9223372036854775807L;
    }

    @Override // nd.r0
    public final void c(s0 s0Var) {
        p pVar = this.f15079e;
        pVar.getClass();
        pVar.c(this);
    }

    @Override // nd.p
    public final void d(q qVar) {
        p pVar = this.f15079e;
        pVar.getClass();
        pVar.d(this);
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x0044, code lost:
    
        if (r10 > r13) goto L18;
     */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0050  */
    /* JADX WARN: Type inference failed for: r1v2, types: [java.lang.Object, nd.q] */
    @Override // nd.q
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long e(ge.p[] pVarArr, boolean[] zArr, q0[] q0VarArr, boolean[] zArr2, long j) {
        boolean z5;
        this.f15080i = new c[q0VarArr.length];
        q0[] q0VarArr2 = new q0[q0VarArr.length];
        int i5 = 0;
        while (true) {
            q0 q0Var = null;
            if (i5 >= q0VarArr.length) {
                break;
            }
            c[] cVarArr = this.f15080i;
            c cVar = (c) q0VarArr[i5];
            cVarArr[i5] = cVar;
            if (cVar != null) {
                q0Var = cVar.f15075d;
            }
            q0VarArr2[i5] = q0Var;
            i5++;
        }
        long e9 = this.f15078d.e(pVarArr, zArr, q0VarArr2, zArr2, j);
        this.f15081v = -9223372036854775807L;
        if (e9 != j) {
            if (e9 >= 0) {
                long j5 = this.f15082w;
                if (j5 != Long.MIN_VALUE) {
                }
            }
            z5 = false;
            ke.b.k(z5);
            for (int i6 = 0; i6 < q0VarArr.length; i6++) {
                q0 q0Var2 = q0VarArr2[i6];
                if (q0Var2 == null) {
                    this.f15080i[i6] = null;
                } else {
                    c[] cVarArr2 = this.f15080i;
                    c cVar2 = cVarArr2[i6];
                    if (cVar2 == null || cVar2.f15075d != q0Var2) {
                        cVarArr2[i6] = new c(this, q0Var2);
                    }
                }
                q0VarArr[i6] = this.f15080i[i6];
            }
            return e9;
        }
        z5 = true;
        ke.b.k(z5);
        while (i6 < q0VarArr.length) {
        }
        return e9;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, nd.s0] */
    @Override // nd.s0
    public final long h() {
        long h6 = this.f15078d.h();
        if (h6 != Long.MIN_VALUE) {
            long j = this.f15082w;
            if (j == Long.MIN_VALUE || h6 < j) {
                return h6;
            }
        }
        return Long.MIN_VALUE;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, nd.q] */
    @Override // nd.q
    public final void j() {
        this.f15078d.j();
    }

    /* JADX WARN: Code restructure failed: missing block: B:17:0x0031, code lost:
    
        if (r0 > r6) goto L17;
     */
    /* JADX WARN: Type inference failed for: r0v2, types: [java.lang.Object, nd.q] */
    @Override // nd.q
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long m(long j) {
        this.f15081v = -9223372036854775807L;
        boolean z5 = false;
        for (c cVar : this.f15080i) {
            if (cVar != null) {
                cVar.f15076e = false;
            }
        }
        long m5 = this.f15078d.m(j);
        if (m5 != j) {
            if (m5 >= 0) {
                long j5 = this.f15082w;
                if (j5 != Long.MIN_VALUE) {
                }
            }
            ke.b.k(z5);
            return m5;
        }
        z5 = true;
        ke.b.k(z5);
        return m5;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, nd.q] */
    @Override // nd.q
    public final void n(long j) {
        this.f15078d.n(j);
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, nd.s0] */
    @Override // nd.s0
    public final boolean o(long j) {
        return this.f15078d.o(j);
    }

    /* JADX WARN: Type inference failed for: r1v1, types: [java.lang.Object, nd.q] */
    @Override // nd.q
    public final void p(p pVar, long j) {
        this.f15079e = pVar;
        this.f15078d.p(this, j);
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, nd.s0] */
    @Override // nd.s0
    public final boolean q() {
        return this.f15078d.q();
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, nd.q] */
    @Override // nd.q
    public final long s() {
        if (b()) {
            long j = this.f15081v;
            this.f15081v = -9223372036854775807L;
            long s2 = s();
            return s2 != -9223372036854775807L ? s2 : j;
        }
        long s5 = this.f15078d.s();
        if (s5 == -9223372036854775807L) {
            return -9223372036854775807L;
        }
        ke.b.k(s5 >= 0);
        long j5 = this.f15082w;
        ke.b.k(j5 == Long.MIN_VALUE || s5 <= j5);
        return s5;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, nd.q] */
    @Override // nd.q
    public final a1 u() {
        return this.f15078d.u();
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, nd.s0] */
    @Override // nd.s0
    public final long w() {
        long w5 = this.f15078d.w();
        if (w5 != Long.MIN_VALUE) {
            long j = this.f15082w;
            if (j == Long.MIN_VALUE || w5 < j) {
                return w5;
            }
        }
        return Long.MIN_VALUE;
    }
}
