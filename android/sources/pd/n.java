package pd;

import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.upstream.DataSource;
import ie.p;
import ie.s0;
import nd.p0;
import qc.v;
import zo.c0;

/* loaded from: classes3.dex */
public final class n extends a {
    public final int L;
    public final Format M;
    public long N;
    public boolean O;

    public n(DataSource dataSource, p pVar, Format format, int i5, Object obj, long j, long j5, long j7, int i6, Format format2) {
        super(dataSource, pVar, format, i5, obj, j, j5, -9223372036854775807L, -9223372036854775807L, j7);
        this.L = i6;
        this.M = format2;
    }

    @Override // pd.l
    public final boolean b() {
        return this.O;
    }

    @Override // ie.h0
    public final void n() {
        s0 s0Var = this.F;
        e4.c cVar = this.J;
        ke.b.l(cVar);
        for (p0 p0Var : (p0[]) cVar.f7940i) {
            if (p0Var.F != 0) {
                p0Var.F = 0L;
                p0Var.f15166z = true;
            }
        }
        v c12 = cVar.c1(this.L);
        c12.e(this.M);
        try {
            long o6 = s0Var.o(this.f16361e.c(this.N));
            if (o6 != -1) {
                o6 += this.N;
            }
            qc.g gVar = new qc.g(this.F, this.N, o6);
            for (int i5 = 0; i5 != -1; i5 = c12.c(gVar, Integer.MAX_VALUE, true)) {
                this.N += i5;
            }
            c12.b(this.f16366y, 1, (int) this.N, 0, null);
            c0.i(s0Var);
            this.O = true;
        } catch (Throwable th2) {
            c0.i(s0Var);
            throw th2;
        }
    }

    @Override // ie.h0
    public final void z() {
    }
}
