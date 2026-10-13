package nd;

import android.net.Uri;
import android.os.Looper;
import com.discord.key_commands.KeyCommandDescriptor;
import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.upstream.DataSource;

/* loaded from: classes3.dex */
public final class j0 extends a {
    public final MediaItem E;
    public final hc.p0 F;
    public final DataSource.Factory G;
    public final hc.m H;
    public final nc.r I;
    public final p9.d J;
    public final int K;
    public boolean L;
    public long M;
    public boolean N;
    public boolean O;
    public ie.u0 P;

    public j0(MediaItem mediaItem, DataSource.Factory factory, hc.m mVar, nc.r rVar, p9.d dVar) {
        hc.p0 p0Var = mediaItem.f5235e;
        p0Var.getClass();
        this.F = p0Var;
        this.E = mediaItem;
        this.G = factory;
        this.H = mVar;
        this.I = rVar;
        this.J = dVar;
        this.K = KeyCommandDescriptor.ModifierFlags.COMMAND;
        this.L = true;
        this.M = -9223372036854775807L;
    }

    @Override // nd.a
    public final q b(s sVar, ie.q qVar, long j) {
        DataSource createDataSource = this.G.createDataSource();
        ie.u0 u0Var = this.P;
        if (u0Var != null) {
            createDataSource.n(u0Var);
        }
        hc.p0 p0Var = this.F;
        Uri uri = p0Var.f9833d;
        ke.b.l(this.f15060y);
        return new h0(uri, createDataSource, new k2.r((qc.h) this.H.f9784e), this.I, new nc.n(this.f15057v.f15047c, 0, sVar), this.J, a(sVar), this, qVar, p0Var.f9838x, this.K);
    }

    @Override // nd.a
    public final MediaItem h() {
        return this.E;
    }

    @Override // nd.a
    public final void m(ie.u0 u0Var) {
        this.P = u0Var;
        Looper myLooper = Looper.myLooper();
        myLooper.getClass();
        ic.c0 c0Var = this.f15060y;
        ke.b.l(c0Var);
        nc.r rVar = this.I;
        rVar.c(myLooper, c0Var);
        rVar.a();
        t();
    }

    @Override // nd.a
    public final void o(q qVar) {
        h0 h0Var = (h0) qVar;
        if (h0Var.S) {
            for (p0 p0Var : h0Var.P) {
                p0Var.h();
                nc.k kVar = p0Var.f15150h;
                if (kVar != null) {
                    kVar.d(p0Var.f15147e);
                    p0Var.f15150h = null;
                    p0Var.f15149g = null;
                }
            }
        }
        h0Var.H.e(h0Var);
        h0Var.M.removeCallbacksAndMessages(null);
        h0Var.N = null;
        h0Var.f15109i0 = true;
    }

    @Override // nd.a
    public final void q() {
        this.I.release();
    }

    public final void t() {
        Timeline u0Var = new u0(this.M, this.N, this.O, this.E);
        if (this.L) {
            u0Var = new i0(u0Var);
        }
        n(u0Var);
    }

    public final void u(long j, boolean z5, boolean z6) {
        if (j == -9223372036854775807L) {
            j = this.M;
        }
        if (!this.L && this.M == j && this.N == z5 && this.O == z6) {
            return;
        }
        this.M = j;
        this.N = z5;
        this.O = z6;
        this.L = false;
        t();
    }

    @Override // nd.a
    public final void j() {
    }
}
