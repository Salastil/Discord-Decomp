package pd;

import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.upstream.DataSource;
import ie.p;
import ie.s0;
import nd.p0;
import zo.c0;

/* loaded from: classes3.dex */
public final class j extends a {
    public final int L;
    public final long M;
    public final d N;
    public long O;
    public volatile boolean P;
    public boolean Q;

    public j(DataSource dataSource, p pVar, Format format, int i5, Object obj, long j, long j5, long j7, long j10, long j11, int i6, long j12, d dVar) {
        super(dataSource, pVar, format, i5, obj, j, j5, j7, j10, j11);
        this.L = i6;
        this.M = j12;
        this.N = dVar;
    }

    @Override // pd.l
    public final long a() {
        return this.G + this.L;
    }

    @Override // pd.l
    public final boolean b() {
        return this.Q;
    }

    @Override // ie.h0
    public final void n() {
        int e9;
        if (this.O == 0) {
            e4.c cVar = this.J;
            ke.b.l(cVar);
            long j = this.M;
            for (p0 p0Var : (p0[]) cVar.f7940i) {
                if (p0Var.F != j) {
                    p0Var.F = j;
                    p0Var.f15166z = true;
                }
            }
            d dVar = this.N;
            long j5 = this.H;
            long j7 = j5 == -9223372036854775807L ? -9223372036854775807L : j5 - this.M;
            long j10 = this.I;
            dVar.a(cVar, j7, j10 != -9223372036854775807L ? j10 - this.M : -9223372036854775807L);
        }
        try {
            p c6 = this.f16361e.c(this.O);
            s0 s0Var = this.F;
            qc.g gVar = new qc.g(s0Var, c6.f10715f, s0Var.o(c6));
            do {
                try {
                    if (this.P) {
                        break;
                    }
                    e9 = this.N.f16353d.e(gVar, d.G);
                    ke.b.k(e9 != 1);
                } finally {
                    this.O = gVar.f16773v - this.f16361e.f10715f;
                }
            } while (e9 == 0);
            c0.i(this.F);
            this.Q = !this.P;
        } catch (Throwable th2) {
            c0.i(this.F);
            throw th2;
        }
    }

    @Override // ie.h0
    public final void z() {
        this.P = true;
    }
}
