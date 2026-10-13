package nd;

import android.net.Uri;
import android.os.Handler;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.metadata.Metadata;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.upstream.DataSource;
import hc.g1;
import hc.p1;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class h0 implements q, qc.l, ie.f0, ie.i0, o0 {

    /* renamed from: j0, reason: collision with root package name */
    public static final Map f15098j0;

    /* renamed from: k0, reason: collision with root package name */
    public static final Format f15099k0;
    public final ie.q E;
    public final String F;
    public final long G;
    public final k2.r I;
    public p N;
    public hd.b O;
    public boolean R;
    public boolean S;
    public boolean T;
    public com.google.firebase.messaging.r U;
    public qc.s V;
    public boolean X;
    public boolean Z;
    public boolean a0;

    /* renamed from: b0, reason: collision with root package name */
    public int f15100b0;

    /* renamed from: c0, reason: collision with root package name */
    public boolean f15101c0;

    /* renamed from: d, reason: collision with root package name */
    public final Uri f15102d;

    /* renamed from: d0, reason: collision with root package name */
    public long f15103d0;

    /* renamed from: e, reason: collision with root package name */
    public final DataSource f15104e;

    /* renamed from: f0, reason: collision with root package name */
    public boolean f15106f0;

    /* renamed from: g0, reason: collision with root package name */
    public int f15107g0;
    public boolean h0;

    /* renamed from: i, reason: collision with root package name */
    public final nc.r f15108i;

    /* renamed from: i0, reason: collision with root package name */
    public boolean f15109i0;

    /* renamed from: v, reason: collision with root package name */
    public final p9.d f15110v;

    /* renamed from: w, reason: collision with root package name */
    public final a1.d f15111w;

    /* renamed from: x, reason: collision with root package name */
    public final nc.n f15112x;

    /* renamed from: y, reason: collision with root package name */
    public final j0 f15113y;
    public final ie.k0 H = new ie.k0("ProgressiveMediaPeriod");
    public final a5.h0 J = new a5.h0(0);
    public final d0 K = new d0(this, 0);
    public final d0 L = new d0(this, 1);
    public final Handler M = ke.d0.m(null);
    public g0[] Q = new g0[0];
    public p0[] P = new p0[0];

    /* renamed from: e0, reason: collision with root package name */
    public long f15105e0 = -9223372036854775807L;
    public long W = -9223372036854775807L;
    public int Y = 1;

    static {
        HashMap hashMap = new HashMap();
        hashMap.put("Icy-MetaData", "1");
        f15098j0 = Collections.unmodifiableMap(hashMap);
        hc.f0 f0Var = new hc.f0();
        f0Var.a = "icy";
        f0Var.k = "application/x-icy";
        f15099k0 = new Format(f0Var);
    }

    public h0(Uri uri, DataSource dataSource, k2.r rVar, nc.r rVar2, nc.n nVar, p9.d dVar, a1.d dVar2, j0 j0Var, ie.q qVar, String str, int i5) {
        this.f15102d = uri;
        this.f15104e = dataSource;
        this.f15108i = rVar2;
        this.f15112x = nVar;
        this.f15110v = dVar;
        this.f15111w = dVar2;
        this.f15113y = j0Var;
        this.E = qVar;
        this.F = str;
        this.G = i5;
        this.I = rVar;
    }

    public final void B(int i5) {
        f();
        boolean[] zArr = (boolean[]) this.U.f6260i;
        if (this.f15106f0 && zArr[i5] && !this.P[i5].r(false)) {
            this.f15105e0 = 0L;
            this.f15106f0 = false;
            this.a0 = true;
            this.f15103d0 = 0L;
            this.f15107g0 = 0;
            for (p0 p0Var : this.P) {
                p0Var.x(false);
            }
            p pVar = this.N;
            pVar.getClass();
            pVar.c(this);
        }
    }

    public final p0 C(g0 g0Var) {
        int length = this.P.length;
        for (int i5 = 0; i5 < length; i5++) {
            if (g0Var.equals(this.Q[i5])) {
                return this.P[i5];
            }
        }
        nc.r rVar = this.f15108i;
        rVar.getClass();
        p0 p0Var = new p0(this.E, rVar, this.f15112x);
        p0Var.f15148f = this;
        int i6 = length + 1;
        g0[] g0VarArr = (g0[]) Arrays.copyOf(this.Q, i6);
        g0VarArr[length] = g0Var;
        this.Q = g0VarArr;
        p0[] p0VarArr = (p0[]) Arrays.copyOf(this.P, i6);
        p0VarArr[length] = p0Var;
        this.P = p0VarArr;
        return p0Var;
    }

    public final void D() {
        e0 e0Var = new e0(this, this.f15102d, this.f15104e, this.I, this, this.J);
        if (this.S) {
            ke.b.k(k());
            long j = this.W;
            if (j != -9223372036854775807L && this.f15105e0 > j) {
                this.h0 = true;
                this.f15105e0 = -9223372036854775807L;
                return;
            }
            qc.s sVar = this.V;
            sVar.getClass();
            long j5 = sVar.h(this.f15105e0).a.f16799b;
            long j7 = this.f15105e0;
            e0Var.f15091x.a = j5;
            e0Var.F = j7;
            e0Var.E = true;
            e0Var.I = false;
            for (p0 p0Var : this.P) {
                p0Var.f15160t = this.f15105e0;
            }
            this.f15105e0 = -9223372036854775807L;
        }
        this.f15107g0 = g();
        this.H.f(e0Var, this, this.f15110v.k(this.Y));
        this.f15111w.r(new LoadEventInfo(e0Var.G), 1, -1, null, 0, null, e0Var.F, this.W);
    }

    public final boolean E() {
        return this.a0 || k();
    }

    @Override // nd.q
    public final long a(long j, p1 p1Var) {
        f();
        if (!this.V.d()) {
            return 0L;
        }
        qc.r h6 = this.V.h(j);
        return p1Var.a(j, h6.a.a, h6.f16797b.a);
    }

    @Override // nd.o0
    public final void b() {
        this.M.post(this.K);
    }

    @Override // qc.l
    public final void c(qc.s sVar) {
        this.M.post(new jc.b0(7, this, sVar));
    }

    @Override // ie.i0
    public final void d() {
        for (p0 p0Var : this.P) {
            p0Var.x(true);
            nc.k kVar = p0Var.f15150h;
            if (kVar != null) {
                kVar.d(p0Var.f15147e);
                p0Var.f15150h = null;
                p0Var.f15149g = null;
            }
        }
        k2.r rVar = this.I;
        qc.j jVar = (qc.j) rVar.f13143i;
        if (jVar != null) {
            jVar.release();
            rVar.f13143i = null;
        }
        rVar.f13144v = null;
    }

    @Override // nd.q
    public final long e(ge.p[] pVarArr, boolean[] zArr, q0[] q0VarArr, boolean[] zArr2, long j) {
        ge.p pVar;
        f();
        com.google.firebase.messaging.r rVar = this.U;
        a1 a1Var = (a1) rVar.f6259e;
        boolean[] zArr3 = (boolean[]) rVar.f6261v;
        int i5 = this.f15100b0;
        int i6 = 0;
        for (int i10 = 0; i10 < pVarArr.length; i10++) {
            q0 q0Var = q0VarArr[i10];
            if (q0Var != null && (pVarArr[i10] == null || !zArr[i10])) {
                int i11 = ((f0) q0Var).f15095d;
                ke.b.k(zArr3[i11]);
                this.f15100b0--;
                zArr3[i11] = false;
                q0VarArr[i10] = null;
            }
        }
        boolean z5 = !this.Z ? j == 0 : i5 != 0;
        for (int i12 = 0; i12 < pVarArr.length; i12++) {
            if (q0VarArr[i12] == null && (pVar = pVarArr[i12]) != null) {
                ke.b.k(pVar.length() == 1);
                ke.b.k(pVar.h(0) == 0);
                int b10 = a1Var.b(pVar.b());
                ke.b.k(!zArr3[b10]);
                this.f15100b0++;
                zArr3[b10] = true;
                q0VarArr[i12] = new f0(this, b10);
                zArr2[i12] = true;
                if (!z5) {
                    p0 p0Var = this.P[b10];
                    z5 = (p0Var.y(j, true) || p0Var.n() == 0) ? false : true;
                }
            }
        }
        if (this.f15100b0 == 0) {
            this.f15106f0 = false;
            this.a0 = false;
            ie.k0 k0Var = this.H;
            if (k0Var.d()) {
                p0[] p0VarArr = this.P;
                int length = p0VarArr.length;
                while (i6 < length) {
                    p0VarArr[i6].h();
                    i6++;
                }
                k0Var.a();
            } else {
                for (p0 p0Var2 : this.P) {
                    p0Var2.x(false);
                }
            }
        } else if (z5) {
            j = m(j);
            while (i6 < q0VarArr.length) {
                if (q0VarArr[i6] != null) {
                    zArr2[i6] = true;
                }
                i6++;
            }
        }
        this.Z = true;
        return j;
    }

    public final void f() {
        ke.b.k(this.S);
        this.U.getClass();
        this.V.getClass();
    }

    public final int g() {
        int i5 = 0;
        for (p0 p0Var : this.P) {
            i5 += p0Var.f15157q + p0Var.f15156p;
        }
        return i5;
    }

    @Override // nd.s0
    public final long h() {
        return w();
    }

    public final long i(boolean z5) {
        long j;
        long j5 = Long.MIN_VALUE;
        for (int i5 = 0; i5 < this.P.length; i5++) {
            if (!z5) {
                com.google.firebase.messaging.r rVar = this.U;
                rVar.getClass();
                if (!((boolean[]) rVar.f6261v)[i5]) {
                    continue;
                }
            }
            p0 p0Var = this.P[i5];
            synchronized (p0Var) {
                j = p0Var.f15162v;
            }
            j5 = Math.max(j5, j);
        }
        return j5;
    }

    @Override // nd.q
    public final void j() {
        int k = this.f15110v.k(this.Y);
        ie.k0 k0Var = this.H;
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
        if (this.h0 && !this.S) {
            throw g1.a("Loading finished before preparation is complete.", null);
        }
    }

    public final boolean k() {
        return this.f15105e0 != -9223372036854775807L;
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x0057  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x005b  */
    @Override // ie.f0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final bd.f l(ie.h0 h0Var, long j, long j5, IOException iOException, int i5) {
        long j7;
        bd.f fVar;
        qc.s sVar;
        e0 e0Var = (e0) h0Var;
        ie.s0 s0Var = e0Var.f15087e;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        int i6 = ke.d0.a;
        this.f15110v.getClass();
        if (!(iOException instanceof g1) && !(iOException instanceof FileNotFoundException) && !(iOException instanceof ie.a0) && !(iOException instanceof ie.j0)) {
            int i10 = ie.m.f10690e;
            for (Throwable th2 = iOException; th2 != null; th2 = th2.getCause()) {
                if (!(th2 instanceof ie.m) || ((ie.m) th2).f10691d != 2008) {
                }
            }
            j7 = Math.min((i5 - 1) * 1000, 5000);
            if (j7 != -9223372036854775807L) {
                fVar = ie.k0.f10683x;
            } else {
                int g6 = g();
                int i11 = g6 > this.f15107g0 ? 1 : 0;
                if (this.f15101c0 || !((sVar = this.V) == null || sVar.i() == -9223372036854775807L)) {
                    this.f15107g0 = g6;
                } else if (!this.S || E()) {
                    this.a0 = this.S;
                    this.f15103d0 = 0L;
                    this.f15107g0 = 0;
                    for (p0 p0Var : this.P) {
                        p0Var.x(false);
                    }
                    e0Var.f15091x.a = 0L;
                    e0Var.F = 0L;
                    e0Var.E = true;
                    e0Var.I = false;
                } else {
                    this.f15106f0 = true;
                    fVar = ie.k0.f10682w;
                }
                fVar = new bd.f(i11, j7, false);
            }
            bd.f fVar2 = fVar;
            this.f15111w.o(loadEventInfo, 1, -1, null, 0, null, e0Var.F, this.W, iOException, !fVar2.a());
            return fVar2;
        }
        j7 = -9223372036854775807L;
        if (j7 != -9223372036854775807L) {
        }
        bd.f fVar22 = fVar;
        this.f15111w.o(loadEventInfo, 1, -1, null, 0, null, e0Var.F, this.W, iOException, !fVar22.a());
        return fVar22;
    }

    @Override // nd.q
    public final long m(long j) {
        int i5;
        f();
        boolean[] zArr = (boolean[]) this.U.f6260i;
        if (!this.V.d()) {
            j = 0;
        }
        this.a0 = false;
        this.f15103d0 = j;
        if (k()) {
            this.f15105e0 = j;
            return j;
        }
        if (this.Y != 7) {
            int length = this.P.length;
            for (0; i5 < length; i5 + 1) {
                i5 = (this.P[i5].y(j, false) || (!zArr[i5] && this.T)) ? i5 + 1 : 0;
            }
            return j;
        }
        this.f15106f0 = false;
        this.f15105e0 = j;
        this.h0 = false;
        ie.k0 k0Var = this.H;
        if (k0Var.d()) {
            for (p0 p0Var : this.P) {
                p0Var.h();
            }
            k0Var.a();
            return j;
        }
        k0Var.f10686i = null;
        for (p0 p0Var2 : this.P) {
            p0Var2.x(false);
        }
        return j;
    }

    @Override // nd.q
    public final void n(long j) {
        f();
        if (k()) {
            return;
        }
        boolean[] zArr = (boolean[]) this.U.f6261v;
        int length = this.P.length;
        for (int i5 = 0; i5 < length; i5++) {
            this.P[i5].g(j, zArr[i5]);
        }
    }

    @Override // nd.s0
    public final boolean o(long j) {
        if (this.h0) {
            return false;
        }
        ie.k0 k0Var = this.H;
        if (k0Var.c() || this.f15106f0) {
            return false;
        }
        if (this.S && this.f15100b0 == 0) {
            return false;
        }
        boolean q5 = this.J.q();
        if (k0Var.d()) {
            return q5;
        }
        D();
        return true;
    }

    @Override // nd.q
    public final void p(p pVar, long j) {
        this.N = pVar;
        this.J.q();
        D();
    }

    @Override // nd.s0
    public final boolean q() {
        boolean z5;
        if (!this.H.d()) {
            return false;
        }
        a5.h0 h0Var = this.J;
        synchronized (h0Var) {
            z5 = h0Var.f175e;
        }
        return z5;
    }

    @Override // qc.l
    public final void r() {
        this.R = true;
        this.M.post(this.K);
    }

    @Override // nd.q
    public final long s() {
        if (!this.a0) {
            return -9223372036854775807L;
        }
        if (!this.h0 && g() <= this.f15107g0) {
            return -9223372036854775807L;
        }
        this.a0 = false;
        return this.f15103d0;
    }

    public final void t() {
        if (this.f15109i0 || this.S || !this.R || this.V == null) {
            return;
        }
        for (p0 p0Var : this.P) {
            if (p0Var.q() == null) {
                return;
            }
        }
        this.J.l();
        int length = this.P.length;
        z0[] z0VarArr = new z0[length];
        boolean[] zArr = new boolean[length];
        for (int i5 = 0; i5 < length; i5++) {
            Format q5 = this.P[i5].q();
            q5.getClass();
            String str = q5.I;
            boolean j = ke.o.j(str);
            boolean z5 = j || ke.o.l(str);
            zArr[i5] = z5;
            this.T = z5 | this.T;
            hd.b bVar = this.O;
            if (bVar != null) {
                int i6 = bVar.f9950d;
                if (j || this.Q[i5].f15097b) {
                    Metadata metadata = q5.G;
                    Metadata metadata2 = metadata == null ? new Metadata(bVar) : metadata.a(bVar);
                    hc.f0 a = q5.a();
                    a.f9677i = metadata2;
                    q5 = new Format(a);
                }
                if (j && q5.f5232x == -1 && q5.f5233y == -1 && i6 != -1) {
                    hc.f0 a10 = q5.a();
                    a10.f9674f = i6;
                    q5 = new Format(a10);
                }
            }
            int b10 = this.f15108i.b(q5);
            hc.f0 a11 = q5.a();
            a11.F = b10;
            z0VarArr[i5] = new z0(Integer.toString(i5), new Format(a11));
        }
        this.U = new com.google.firebase.messaging.r(new a1(z0VarArr), zArr);
        this.S = true;
        p pVar = this.N;
        pVar.getClass();
        pVar.d(this);
    }

    @Override // nd.q
    public final a1 u() {
        f();
        return (a1) this.U.f6259e;
    }

    @Override // ie.f0
    public final void v(ie.h0 h0Var, long j, long j5) {
        qc.s sVar;
        e0 e0Var = (e0) h0Var;
        if (this.W == -9223372036854775807L && (sVar = this.V) != null) {
            boolean d6 = sVar.d();
            long i5 = i(true);
            long j7 = i5 == Long.MIN_VALUE ? 0L : i5 + 10000;
            this.W = j7;
            this.f15113y.u(j7, d6, this.X);
        }
        ie.s0 s0Var = e0Var.f15087e;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        this.f15110v.getClass();
        this.f15111w.m(loadEventInfo, 1, -1, null, 0, null, e0Var.F, this.W);
        this.h0 = true;
        p pVar = this.N;
        pVar.getClass();
        pVar.c(this);
    }

    @Override // nd.s0
    public final long w() {
        long j;
        boolean z5;
        long j5;
        f();
        if (this.h0 || this.f15100b0 == 0) {
            return Long.MIN_VALUE;
        }
        if (k()) {
            return this.f15105e0;
        }
        if (this.T) {
            int length = this.P.length;
            j = Long.MAX_VALUE;
            for (int i5 = 0; i5 < length; i5++) {
                com.google.firebase.messaging.r rVar = this.U;
                if (((boolean[]) rVar.f6260i)[i5] && ((boolean[]) rVar.f6261v)[i5]) {
                    p0 p0Var = this.P[i5];
                    synchronized (p0Var) {
                        z5 = p0Var.f15163w;
                    }
                    if (z5) {
                        continue;
                    } else {
                        p0 p0Var2 = this.P[i5];
                        synchronized (p0Var2) {
                            j5 = p0Var2.f15162v;
                        }
                        j = Math.min(j, j5);
                    }
                }
            }
        } else {
            j = Long.MAX_VALUE;
        }
        if (j == LongCompanionObject.MAX_VALUE) {
            j = i(false);
        }
        return j == Long.MIN_VALUE ? this.f15103d0 : j;
    }

    public final void x(int i5) {
        f();
        com.google.firebase.messaging.r rVar = this.U;
        boolean[] zArr = (boolean[]) rVar.f6262w;
        if (zArr[i5]) {
            return;
        }
        Format format = ((a1) rVar.f6259e).a(i5).f15211v[0];
        this.f15111w.e(ke.o.h(format.I), format, 0, null, this.f15103d0);
        zArr[i5] = true;
    }

    @Override // qc.l
    public final qc.v y(int i5, int i6) {
        return C(new g0(i5, false));
    }

    @Override // ie.f0
    public final void z(ie.h0 h0Var, long j, long j5, boolean z5) {
        e0 e0Var = (e0) h0Var;
        ie.s0 s0Var = e0Var.f15087e;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        this.f15110v.getClass();
        this.f15111w.j(loadEventInfo, 1, -1, null, 0, null, e0Var.F, this.W);
        if (z5) {
            return;
        }
        for (p0 p0Var : this.P) {
            p0Var.x(false);
        }
        if (this.f15100b0 > 0) {
            p pVar = this.N;
            pVar.getClass();
            pVar.c(this);
        }
    }

    @Override // nd.s0
    public final void A(long j) {
    }
}
