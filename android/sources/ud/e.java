package ud;

import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import bd.f;
import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.upstream.DataSource;
import hc.e0;
import hc.g1;
import hc.p0;
import ic.c0;
import ie.a0;
import ie.f0;
import ie.h0;
import ie.j0;
import ie.k0;
import ie.l0;
import ie.m;
import ie.m0;
import ie.n0;
import ie.s0;
import ie.u0;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.regex.Matcher;
import ke.d0;
import kotlin.jvm.internal.LongCompanionObject;
import nc.n;
import nc.r;
import nd.q;
import nd.s;
import oh.w;
import pd.h;

/* loaded from: classes3.dex */
public final class e extends nd.a implements f0 {
    public final boolean E;
    public final Uri F;
    public final MediaItem G;
    public final DataSource.Factory H;
    public final a I;
    public final j8.b J;
    public final r K;
    public final p9.d L;
    public final long M;
    public final a1.d N;
    public final m0 O;
    public final ArrayList P;
    public DataSource Q;
    public k0 R;
    public l0 S;
    public u0 T;
    public long U;
    public vd.c V;
    public Handler W;

    static {
        e0.a("goog.exo.smoothstreaming");
    }

    public e(MediaItem mediaItem, DataSource.Factory factory, m0 m0Var, a aVar, j8.b bVar, r rVar, p9.d dVar, long j) {
        this.G = mediaItem;
        p0 p0Var = mediaItem.f5235e;
        p0Var.getClass();
        Uri uri = p0Var.f9833d;
        this.V = null;
        if (uri.equals(Uri.EMPTY)) {
            uri = null;
        } else {
            int i5 = d0.a;
            String path = uri.getPath();
            if (path != null) {
                Matcher matcher = d0.j.matcher(path);
                if (matcher.matches() && matcher.group(1) == null) {
                    uri = Uri.withAppendedPath(uri, "Manifest");
                }
            }
        }
        this.F = uri;
        this.H = factory;
        this.O = m0Var;
        this.I = aVar;
        this.J = bVar;
        this.K = rVar;
        this.L = dVar;
        this.M = j;
        this.N = a(null);
        this.E = false;
        this.P = new ArrayList();
    }

    @Override // nd.a
    public final q b(s sVar, ie.q qVar, long j) {
        a1.d a = a(sVar);
        n nVar = new n(this.f15057v.f15047c, 0, sVar);
        d dVar = new d(this.V, this.I, this.T, this.J, this.K, nVar, this.L, a, this.S, qVar);
        this.P.add(dVar);
        return dVar;
    }

    @Override // nd.a
    public final MediaItem h() {
        return this.G;
    }

    @Override // nd.a
    public final void j() {
        this.S.b();
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x0056  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0059  */
    @Override // ie.f0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final f l(h0 h0Var, long j, long j5, IOException iOException, int i5) {
        long j7;
        n0 n0Var = (n0) h0Var;
        long j10 = n0Var.f10697d;
        s0 s0Var = n0Var.f10700v;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        int i6 = n0Var.f10699i;
        this.L.getClass();
        if (!(iOException instanceof g1) && !(iOException instanceof FileNotFoundException) && !(iOException instanceof a0) && !(iOException instanceof j0)) {
            int i10 = m.f10690e;
            for (Throwable th2 = iOException; th2 != null; th2 = th2.getCause()) {
                if (!(th2 instanceof m) || ((m) th2).f10691d != 2008) {
                }
            }
            j7 = Math.min((i5 - 1) * 1000, 5000);
            f fVar = j7 != -9223372036854775807L ? k0.f10683x : new f(0, j7, false);
            this.N.p(loadEventInfo, i6, iOException, !fVar.a());
            return fVar;
        }
        j7 = -9223372036854775807L;
        if (j7 != -9223372036854775807L) {
        }
        this.N.p(loadEventInfo, i6, iOException, !fVar.a());
        return fVar;
    }

    @Override // nd.a
    public final void m(u0 u0Var) {
        this.T = u0Var;
        Looper myLooper = Looper.myLooper();
        c0 c0Var = this.f15060y;
        ke.b.l(c0Var);
        r rVar = this.K;
        rVar.c(myLooper, c0Var);
        rVar.a();
        if (this.E) {
            this.S = new l8.a(9);
            t();
            return;
        }
        this.Q = this.H.createDataSource();
        k0 k0Var = new k0("SsMediaSource");
        this.R = k0Var;
        this.S = k0Var;
        this.W = d0.m(null);
        u();
    }

    @Override // nd.a
    public final void o(q qVar) {
        d dVar = (d) qVar;
        for (h hVar : dVar.J) {
            hVar.y(null);
        }
        dVar.H = null;
        this.P.remove(qVar);
    }

    @Override // nd.a
    public final void q() {
        this.V = this.E ? this.V : null;
        this.Q = null;
        this.U = 0L;
        k0 k0Var = this.R;
        if (k0Var != null) {
            k0Var.e(null);
            this.R = null;
        }
        Handler handler = this.W;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
            this.W = null;
        }
        this.K.release();
    }

    public final void t() {
        nd.u0 u0Var;
        boolean z5;
        vd.b[] bVarArr;
        boolean z6 = false;
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.P;
            if (i5 >= arrayList.size()) {
                break;
            }
            d dVar = (d) arrayList.get(i5);
            vd.c cVar = this.V;
            dVar.I = cVar;
            for (h hVar : dVar.J) {
                b bVar = (b) hVar.f16376w;
                vd.b[] bVarArr2 = bVar.f18858f.f19354f;
                int i6 = bVar.f18854b;
                vd.b bVar2 = bVarArr2[i6];
                int i10 = bVar2.k;
                long[] jArr = bVar2.f19348o;
                vd.b bVar3 = cVar.f19354f[i6];
                if (i10 == 0 || bVar3.k == 0) {
                    bVar.f18859g += i10;
                } else {
                    int i11 = i10 - 1;
                    long b10 = bVar2.b(i11) + jArr[i11];
                    long j = bVar3.f19348o[0];
                    if (b10 <= j) {
                        bVar.f18859g += i10;
                    } else {
                        bVar.f18859g = d0.e(jArr, j, true) + bVar.f18859g;
                    }
                }
                bVar.f18858f = cVar;
            }
            dVar.H.c(dVar);
            i5++;
        }
        vd.b[] bVarArr3 = this.V.f19354f;
        int length = bVarArr3.length;
        long j5 = Long.MIN_VALUE;
        int i12 = 0;
        long j7 = Long.MAX_VALUE;
        while (i12 < length) {
            vd.b bVar4 = bVarArr3[i12];
            int i13 = bVar4.k;
            long[] jArr2 = bVar4.f19348o;
            if (i13 > 0) {
                z5 = z6;
                bVarArr = bVarArr3;
                j7 = Math.min(j7, jArr2[z5 ? 1 : 0]);
                int i14 = bVar4.k - 1;
                j5 = Math.max(j5, bVar4.b(i14) + jArr2[i14]);
            } else {
                z5 = z6;
                bVarArr = bVarArr3;
            }
            i12++;
            z6 = z5;
            bVarArr3 = bVarArr;
        }
        if (j7 == LongCompanionObject.MAX_VALUE) {
            long j10 = this.V.f19352d ? -9223372036854775807L : 0L;
            vd.c cVar2 = this.V;
            boolean z7 = cVar2.f19352d;
            u0Var = new nd.u0(j10, 0L, 0L, 0L, true, z7, z7, cVar2, this.G);
        } else {
            vd.c cVar3 = this.V;
            if (cVar3.f19352d) {
                long j11 = cVar3.f19356h;
                if (j11 != -9223372036854775807L && j11 > 0) {
                    j7 = Math.max(j7, j5 - j11);
                }
                long j12 = j7;
                long j13 = j5 - j12;
                long I = j13 - d0.I(this.M);
                if (I < 5000000) {
                    I = Math.min(5000000L, j13 / 2);
                }
                u0Var = new nd.u0(-9223372036854775807L, j13, j12, I, true, true, true, this.V, this.G);
            } else {
                long j14 = cVar3.f19355g;
                if (j14 == -9223372036854775807L) {
                    j14 = j5 - j7;
                }
                long j15 = j14;
                long j16 = j7;
                u0Var = new nd.u0(-9223372036854775807L, -9223372036854775807L, j16 + j15, j15, j16, 0L, true, false, false, this.V, this.G, null);
            }
        }
        n(u0Var);
    }

    public final void u() {
        if (this.R.c()) {
            return;
        }
        n0 n0Var = new n0(this.Q, this.F, 4, this.O);
        k0 k0Var = this.R;
        p9.d dVar = this.L;
        int i5 = n0Var.f10699i;
        k0Var.f(n0Var, this, dVar.k(i5));
        this.N.r(new LoadEventInfo(n0Var.f10698e), i5, -1, null, 0, null, -9223372036854775807L, -9223372036854775807L);
    }

    @Override // ie.f0
    public final void v(h0 h0Var, long j, long j5) {
        n0 n0Var = (n0) h0Var;
        long j7 = n0Var.f10697d;
        s0 s0Var = n0Var.f10700v;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        this.L.getClass();
        this.N.l(loadEventInfo, n0Var.f10699i);
        this.V = (vd.c) n0Var.f10702x;
        this.U = j - j5;
        t();
        if (this.V.f19352d) {
            this.W.postDelayed(new w(5, this), Math.max(0L, (this.U + 5000) - SystemClock.elapsedRealtime()));
        }
    }

    @Override // ie.f0
    public final void z(h0 h0Var, long j, long j5, boolean z5) {
        n0 n0Var = (n0) h0Var;
        long j7 = n0Var.f10697d;
        s0 s0Var = n0Var.f10700v;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        this.L.getClass();
        this.N.j(loadEventInfo, n0Var.f10699i, -1, null, 0, null, -9223372036854775807L, -9223372036854775807L);
    }
}
