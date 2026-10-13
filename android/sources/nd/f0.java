package nd;

import java.io.IOException;

/* loaded from: classes3.dex */
public final class f0 implements q0 {

    /* renamed from: d, reason: collision with root package name */
    public final int f15095d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h0 f15096e;

    public f0(h0 h0Var, int i5) {
        this.f15096e = h0Var;
        this.f15095d = i5;
    }

    @Override // nd.q0
    public final void b() {
        int i5 = this.f15095d;
        h0 h0Var = this.f15096e;
        h0Var.P[i5].t();
        ie.k0 k0Var = h0Var.H;
        int k = h0Var.f15110v.k(h0Var.Y);
        IOException iOException = k0Var.f10686i;
        if (iOException != null) {
            throw iOException;
        }
        ie.g0 g0Var = k0Var.f10685e;
        if (g0Var != null) {
            if (k == Integer.MIN_VALUE) {
                k = g0Var.f10667d;
            }
            IOException iOException2 = g0Var.f10671w;
            if (iOException2 != null && g0Var.f10672x > k) {
                throw iOException2;
            }
        }
    }

    @Override // nd.q0
    public final int c(long j) {
        h0 h0Var = this.f15096e;
        if (h0Var.E()) {
            return 0;
        }
        int i5 = this.f15095d;
        h0Var.x(i5);
        p0 p0Var = h0Var.P[i5];
        int p3 = p0Var.p(j, h0Var.h0);
        p0Var.z(p3);
        if (p3 == 0) {
            h0Var.B(i5);
        }
        return p3;
    }

    @Override // nd.q0
    public final int f(e4.l lVar, mc.f fVar, int i5) {
        h0 h0Var = this.f15096e;
        if (h0Var.E()) {
            return -3;
        }
        int i6 = this.f15095d;
        h0Var.x(i6);
        int w5 = h0Var.P[i6].w(lVar, fVar, i5, h0Var.h0);
        if (w5 == -3) {
            h0Var.B(i6);
        }
        return w5;
    }

    @Override // nd.q0
    public final boolean isReady() {
        h0 h0Var = this.f15096e;
        return !h0Var.E() && h0Var.P[this.f15095d].r(h0Var.h0);
    }
}
