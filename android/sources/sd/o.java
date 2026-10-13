package sd;

import android.net.Uri;
import android.os.Looper;
import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.source.LoadEventInfo;
import hc.e0;
import hc.o0;
import hc.p0;
import ic.c0;
import ie.k0;
import ie.n0;
import ie.u0;
import java.io.IOException;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import ke.d0;

/* loaded from: classes3.dex */
public final class o extends nd.a {
    public final l E;
    public final p0 F;
    public final c G;
    public final j8.b H;
    public final nc.r I;
    public final p9.d J;
    public final boolean K;
    public final int L;
    public final td.c M;
    public final long N;
    public final MediaItem O;
    public o0 P;
    public u0 Q;

    static {
        e0.a("goog.exo.hls");
    }

    public o(MediaItem mediaItem, c cVar, l lVar, j8.b bVar, nc.r rVar, p9.d dVar, td.c cVar2, long j, boolean z5, int i5) {
        p0 p0Var = mediaItem.f5235e;
        p0Var.getClass();
        this.F = p0Var;
        this.O = mediaItem;
        this.P = mediaItem.f5237v;
        this.G = cVar;
        this.E = lVar;
        this.H = bVar;
        this.I = rVar;
        this.J = dVar;
        this.M = cVar2;
        this.N = j;
        this.K = z5;
        this.L = i5;
    }

    public static td.d t(long j, List list) {
        td.d dVar = null;
        for (int i5 = 0; i5 < list.size(); i5++) {
            td.d dVar2 = (td.d) list.get(i5);
            long j5 = dVar2.f18288w;
            if (j5 > j || !dVar2.I) {
                if (j5 > j) {
                    break;
                }
            } else {
                dVar = dVar2;
            }
        }
        return dVar;
    }

    @Override // nd.a
    public final nd.q b(nd.s sVar, ie.q qVar, long j) {
        a1.d a = a(sVar);
        nc.n nVar = new nc.n(this.f15057v.f15047c, 0, sVar);
        u0 u0Var = this.Q;
        c0 c0Var = this.f15060y;
        ke.b.l(c0Var);
        return new n(this.E, this.M, this.G, u0Var, this.I, nVar, this.J, a, qVar, this.H, this.K, this.L, c0Var);
    }

    @Override // nd.a
    public final MediaItem h() {
        return this.O;
    }

    @Override // nd.a
    public final void j() {
        td.c cVar = this.M;
        k0 k0Var = cVar.f18281y;
        if (k0Var != null) {
            k0Var.b();
        }
        Uri uri = cVar.H;
        if (uri != null) {
            td.b bVar = (td.b) cVar.f18278v.get(uri);
            bVar.f18269e.b();
            IOException iOException = bVar.G;
            if (iOException != null) {
                throw iOException;
            }
        }
    }

    @Override // nd.a
    public final void m(u0 u0Var) {
        this.Q = u0Var;
        Looper myLooper = Looper.myLooper();
        myLooper.getClass();
        c0 c0Var = this.f15060y;
        ke.b.l(c0Var);
        nc.r rVar = this.I;
        rVar.c(myLooper, c0Var);
        rVar.a();
        a1.d a = a(null);
        Uri uri = this.F.f9833d;
        td.c cVar = this.M;
        cVar.getClass();
        cVar.E = d0.m(null);
        cVar.f18280x = a;
        cVar.F = this;
        n0 n0Var = new n0(cVar.f18275d.a.createDataSource(), uri, 4, cVar.f18276e.r());
        ke.b.k(cVar.f18281y == null);
        k0 k0Var = new k0("DefaultHlsPlaylistTracker:MultivariantPlaylist");
        cVar.f18281y = k0Var;
        p9.d dVar = cVar.f18277i;
        int i5 = n0Var.f10699i;
        k0Var.f(n0Var, cVar, dVar.k(i5));
        a.r(new LoadEventInfo(n0Var.f10698e), i5, -1, null, 0, null, -9223372036854775807L, -9223372036854775807L);
    }

    @Override // nd.a
    public final void o(nd.q qVar) {
        n nVar = (n) qVar;
        nVar.f17896e.f18279w.remove(nVar);
        for (t tVar : nVar.Q) {
            if (tVar.a0) {
                for (s sVar : tVar.S) {
                    sVar.h();
                    nc.k kVar = sVar.f15150h;
                    if (kVar != null) {
                        kVar.d(sVar.f15147e);
                        sVar.f15150h = null;
                        sVar.f15149g = null;
                    }
                }
            }
            tVar.G.e(tVar);
            tVar.O.removeCallbacksAndMessages(null);
            tVar.f17919e0 = true;
            tVar.P.clear();
        }
        nVar.N = null;
    }

    @Override // nd.a
    public final void q() {
        td.c cVar = this.M;
        cVar.H = null;
        cVar.I = null;
        cVar.G = null;
        cVar.K = -9223372036854775807L;
        cVar.f18281y.e(null);
        cVar.f18281y = null;
        HashMap hashMap = cVar.f18278v;
        Iterator it = hashMap.values().iterator();
        while (it.hasNext()) {
            ((td.b) it.next()).f18269e.e(null);
        }
        cVar.E.removeCallbacksAndMessages(null);
        cVar.E = null;
        hashMap.clear();
        this.I.release();
    }

    public final void u(td.i iVar) {
        long j;
        nd.u0 u0Var;
        boolean z5;
        long j5;
        long j7;
        long j10;
        long j11;
        boolean z6 = iVar.f18305p;
        boolean z7 = iVar.f18298g;
        fi.e0 e0Var = iVar.f18307r;
        long j12 = iVar.f18310u;
        long j13 = iVar.f18296e;
        int i5 = iVar.f18295d;
        long j14 = iVar.f18299h;
        long U = z6 ? d0.U(j14) : -9223372036854775807L;
        long j15 = (i5 == 2 || i5 == 1) ? U : -9223372036854775807L;
        td.c cVar = this.M;
        cVar.G.getClass();
        d dVar = new d();
        long j16 = 0;
        if (cVar.J) {
            td.h hVar = iVar.f18311v;
            long j17 = j14 - cVar.K;
            boolean z8 = iVar.f18304o;
            long j18 = z8 ? j17 + j12 : -9223372036854775807L;
            if (iVar.f18305p) {
                z5 = z7;
                j5 = d0.I(d0.v(this.N)) - (j14 + j12);
            } else {
                z5 = z7;
                j5 = 0;
            }
            long j19 = this.P.f9825d;
            if (j19 != -9223372036854775807L) {
                j10 = d0.I(j19);
            } else {
                if (j13 != -9223372036854775807L) {
                    j7 = j12 - j13;
                } else {
                    j7 = hVar.f18293d;
                    if (j7 == -9223372036854775807L || iVar.f18303n == -9223372036854775807L) {
                        j7 = hVar.f18292c;
                        if (j7 == -9223372036854775807L) {
                            j7 = 3 * iVar.f18302m;
                        }
                    }
                }
                j10 = j7 + j5;
            }
            long j20 = j12 + j5;
            long j21 = d0.j(j10, j5, j20);
            o0 o0Var = this.O.f5237v;
            boolean z10 = o0Var.f9828v == -3.4028235E38f && o0Var.f9829w == -3.4028235E38f && hVar.f18292c == -9223372036854775807L && hVar.f18293d == -9223372036854775807L;
            long U2 = d0.U(j21);
            this.P = new o0(U2, -9223372036854775807L, -9223372036854775807L, z10 ? 1.0f : this.P.f9828v, z10 ? 1.0f : this.P.f9829w);
            if (j13 == -9223372036854775807L) {
                j13 = j20 - d0.I(U2);
            }
            if (z5) {
                j16 = j13;
            } else {
                td.d t5 = t(j13, iVar.f18308s);
                if (t5 != null) {
                    j11 = t5.f18288w;
                } else if (!e0Var.isEmpty()) {
                    td.f fVar = (td.f) e0Var.get(d0.c(Long.valueOf(j13), true, e0Var));
                    td.d t10 = t(j13, fVar.J);
                    j11 = t10 != null ? t10.f18288w : fVar.f18288w;
                }
                j16 = j11;
            }
            u0Var = new nd.u0(j15, U, j18, iVar.f18310u, j17, j16, true, !z8, i5 == 2 && iVar.f18297f, dVar, this.O, this.P);
        } else {
            if (j13 == -9223372036854775807L || e0Var.isEmpty()) {
                j = 0;
            } else {
                if (!z7 && j13 != j12) {
                    j13 = ((td.f) e0Var.get(d0.c(Long.valueOf(j13), true, e0Var))).f18288w;
                }
                j = j13;
            }
            long j22 = iVar.f18310u;
            u0Var = new nd.u0(j15, U, j22, j22, 0L, j, true, false, true, dVar, this.O, null);
        }
        n(u0Var);
    }
}
