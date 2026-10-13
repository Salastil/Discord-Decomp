package nd;

import android.net.Uri;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.upstream.DataSource;
import hc.g1;
import hc.p1;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class x0 implements q, ie.f0 {
    public final long E;
    public final Format G;
    public final boolean H;
    public boolean I;
    public byte[] J;
    public int K;

    /* renamed from: d, reason: collision with root package name */
    public final ie.p f15195d;

    /* renamed from: e, reason: collision with root package name */
    public final DataSource.Factory f15196e;

    /* renamed from: i, reason: collision with root package name */
    public final ie.u0 f15197i;

    /* renamed from: v, reason: collision with root package name */
    public final p9.d f15198v;

    /* renamed from: w, reason: collision with root package name */
    public final a1.d f15199w;

    /* renamed from: x, reason: collision with root package name */
    public final a1 f15200x;

    /* renamed from: y, reason: collision with root package name */
    public final ArrayList f15201y = new ArrayList();
    public final ie.k0 F = new ie.k0("SingleSampleMediaPeriod");

    public x0(ie.p pVar, DataSource.Factory factory, ie.u0 u0Var, Format format, long j, p9.d dVar, a1.d dVar2, boolean z5) {
        this.f15195d = pVar;
        this.f15196e = factory;
        this.f15197i = u0Var;
        this.G = format;
        this.E = j;
        this.f15198v = dVar;
        this.f15199w = dVar2;
        this.H = z5;
        this.f15200x = new a1(new z0("", format));
    }

    @Override // nd.q
    public final long e(ge.p[] pVarArr, boolean[] zArr, q0[] q0VarArr, boolean[] zArr2, long j) {
        for (int i5 = 0; i5 < pVarArr.length; i5++) {
            q0 q0Var = q0VarArr[i5];
            ArrayList arrayList = this.f15201y;
            if (q0Var != null && (pVarArr[i5] == null || !zArr[i5])) {
                arrayList.remove(q0Var);
                q0VarArr[i5] = null;
            }
            if (q0VarArr[i5] == null && pVarArr[i5] != null) {
                v0 v0Var = new v0(this);
                arrayList.add(v0Var);
                q0VarArr[i5] = v0Var;
                zArr2[i5] = true;
            }
        }
        return j;
    }

    @Override // nd.s0
    public final long h() {
        return (this.I || this.F.d()) ? Long.MIN_VALUE : 0L;
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x0078  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x007e  */
    @Override // ie.f0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final bd.f l(ie.h0 h0Var, long j, long j5, IOException iOException, int i5) {
        long j7;
        bd.f fVar;
        ie.s0 s0Var = ((w0) h0Var).f15193e;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        int i6 = ke.d0.a;
        p9.d dVar = this.f15198v;
        dVar.getClass();
        if (!(iOException instanceof g1) && !(iOException instanceof FileNotFoundException) && !(iOException instanceof ie.a0) && !(iOException instanceof ie.j0)) {
            int i10 = ie.m.f10690e;
            for (Throwable th2 = iOException; th2 != null; th2 = th2.getCause()) {
                if (!(th2 instanceof ie.m) || ((ie.m) th2).f10691d != 2008) {
                }
            }
            j7 = Math.min((i5 - 1) * 1000, 5000);
            boolean z5 = j7 != -9223372036854775807L || i5 >= dVar.k(1);
            if (this.H || !z5) {
                fVar = j7 == -9223372036854775807L ? new bd.f(0, j7, false) : ie.k0.f10683x;
            } else {
                ke.b.O("SingleSampleMediaPeriod", "Loading failed, treating as end-of-stream.", iOException);
                this.I = true;
                fVar = ie.k0.f10682w;
            }
            this.f15199w.o(loadEventInfo, 1, -1, this.G, 0, null, 0L, this.E, iOException, !fVar.a());
            return fVar;
        }
        j7 = -9223372036854775807L;
        if (j7 != -9223372036854775807L) {
        }
        if (this.H) {
        }
        if (j7 == -9223372036854775807L) {
        }
        this.f15199w.o(loadEventInfo, 1, -1, this.G, 0, null, 0L, this.E, iOException, !fVar.a());
        return fVar;
    }

    @Override // nd.q
    public final long m(long j) {
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.f15201y;
            if (i5 >= arrayList.size()) {
                return j;
            }
            v0 v0Var = (v0) arrayList.get(i5);
            if (v0Var.f15188d == 2) {
                v0Var.f15188d = 1;
            }
            i5++;
        }
    }

    @Override // nd.s0
    public final boolean o(long j) {
        if (this.I) {
            return false;
        }
        ie.k0 k0Var = this.F;
        if (k0Var.d() || k0Var.c()) {
            return false;
        }
        DataSource createDataSource = this.f15196e.createDataSource();
        ie.u0 u0Var = this.f15197i;
        if (u0Var != null) {
            createDataSource.n(u0Var);
        }
        ie.p pVar = this.f15195d;
        k0Var.f(new w0(createDataSource, pVar), this, this.f15198v.k(1));
        this.f15199w.r(new LoadEventInfo(pVar), 1, -1, this.G, 0, null, 0L, this.E);
        return true;
    }

    @Override // nd.q
    public final void p(p pVar, long j) {
        pVar.d(this);
    }

    @Override // nd.s0
    public final boolean q() {
        return this.F.d();
    }

    @Override // nd.q
    public final long s() {
        return -9223372036854775807L;
    }

    @Override // nd.q
    public final a1 u() {
        return this.f15200x;
    }

    @Override // ie.f0
    public final void v(ie.h0 h0Var, long j, long j5) {
        w0 w0Var = (w0) h0Var;
        this.K = (int) w0Var.f15193e.f10755e;
        byte[] bArr = w0Var.f15194i;
        bArr.getClass();
        this.J = bArr;
        this.I = true;
        ie.s0 s0Var = w0Var.f15193e;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(this.K, s0Var.f10757v);
        this.f15198v.getClass();
        this.f15199w.m(loadEventInfo, 1, -1, this.G, 0, null, 0L, this.E);
    }

    @Override // nd.s0
    public final long w() {
        return this.I ? Long.MIN_VALUE : 0L;
    }

    @Override // ie.f0
    public final void z(ie.h0 h0Var, long j, long j5, boolean z5) {
        ie.s0 s0Var = ((w0) h0Var).f15193e;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        this.f15198v.getClass();
        this.f15199w.j(loadEventInfo, 1, -1, null, 0, null, 0L, this.E);
    }

    @Override // nd.q
    public final void j() {
    }

    @Override // nd.s0
    public final void A(long j) {
    }

    @Override // nd.q
    public final void n(long j) {
    }

    @Override // nd.q
    public final long a(long j, p1 p1Var) {
        return j;
    }
}
