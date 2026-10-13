package pd;

import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.upstream.DataSource;
import ie.p;
import ie.s0;
import zo.c0;

/* loaded from: classes3.dex */
public final class k extends e {
    public final d G;
    public e4.c H;
    public long I;
    public volatile boolean J;

    public k(DataSource dataSource, p pVar, Format format, int i5, Object obj, d dVar) {
        super(dataSource, pVar, 2, format, i5, obj, -9223372036854775807L, -9223372036854775807L);
        this.G = dVar;
    }

    @Override // ie.h0
    public final void n() {
        if (this.I == 0) {
            this.G.a(this.H, -9223372036854775807L, -9223372036854775807L);
        }
        try {
            p c6 = this.f16361e.c(this.I);
            s0 s0Var = this.F;
            qc.g gVar = new qc.g(s0Var, c6.f10715f, s0Var.o(c6));
            while (!this.J) {
                try {
                    int e9 = this.G.f16353d.e(gVar, d.G);
                    boolean z5 = false;
                    ke.b.k(e9 != 1);
                    if (e9 == 0) {
                        z5 = true;
                    }
                    if (!z5) {
                        break;
                    }
                } finally {
                    this.I = gVar.f16773v - this.f16361e.f10715f;
                }
            }
        } finally {
            c0.i(this.F);
        }
    }

    @Override // ie.h0
    public final void z() {
        this.J = true;
    }
}
