package pd;

import a5.a0;
import a5.h0;
import android.net.Uri;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.source.MediaLoadData;
import ie.f0;
import ie.i0;
import ie.k0;
import ie.q;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import ke.d0;
import nc.r;
import nd.l0;
import nd.p0;
import nd.q0;
import nd.r0;
import nd.s0;
import qd.p;

/* loaded from: classes3.dex */
public final class h implements q0, s0, f0, i0 {
    public final p9.d E;
    public final k0 F;
    public final h0 G;
    public final ArrayList H;
    public final List I;
    public final p0 J;
    public final p0[] K;
    public final e4.c L;
    public e M;
    public Format N;
    public g O;
    public long P;
    public long Q;
    public int R;
    public a S;
    public boolean T;

    /* renamed from: d, reason: collision with root package name */
    public final int f16372d;

    /* renamed from: e, reason: collision with root package name */
    public final int[] f16373e;

    /* renamed from: i, reason: collision with root package name */
    public final Format[] f16374i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean[] f16375v;

    /* renamed from: w, reason: collision with root package name */
    public final i f16376w;

    /* renamed from: x, reason: collision with root package name */
    public final Object f16377x;

    /* renamed from: y, reason: collision with root package name */
    public final a1.d f16378y;

    public h(int i5, int[] iArr, Format[] formatArr, i iVar, r0 r0Var, q qVar, long j, r rVar, nc.n nVar, p9.d dVar, a1.d dVar2) {
        this.f16372d = i5;
        int i6 = 0;
        iArr = iArr == null ? new int[0] : iArr;
        this.f16373e = iArr;
        this.f16374i = formatArr == null ? new Format[0] : formatArr;
        this.f16376w = iVar;
        this.f16377x = r0Var;
        this.f16378y = dVar2;
        this.E = dVar;
        this.F = new k0("ChunkSampleStream");
        this.G = new h0((char) 0, 9);
        ArrayList arrayList = new ArrayList();
        this.H = arrayList;
        this.I = Collections.unmodifiableList(arrayList);
        int length = iArr.length;
        this.K = new p0[length];
        this.f16375v = new boolean[length];
        int i10 = length + 1;
        int[] iArr2 = new int[i10];
        p0[] p0VarArr = new p0[i10];
        rVar.getClass();
        p0 p0Var = new p0(qVar, rVar, nVar);
        this.J = p0Var;
        iArr2[0] = i5;
        p0VarArr[0] = p0Var;
        while (i6 < length) {
            p0 p0Var2 = new p0(qVar, null, null);
            this.K[i6] = p0Var2;
            int i11 = i6 + 1;
            p0VarArr[i11] = p0Var2;
            iArr2[i11] = this.f16373e[i6];
            i6 = i11;
        }
        this.L = new e4.c(18, iArr2, p0VarArr);
        this.P = j;
        this.Q = j;
    }

    @Override // nd.s0
    public final void A(long j) {
        k0 k0Var = this.F;
        if (k0Var.c() || r()) {
            return;
        }
        boolean d6 = k0Var.d();
        List list = this.I;
        i iVar = this.f16376w;
        ArrayList arrayList = this.H;
        if (d6) {
            e eVar = this.M;
            eVar.getClass();
            boolean z5 = eVar instanceof a;
            if (!(z5 && k(arrayList.size() - 1)) && iVar.c(j, eVar, list)) {
                k0Var.a();
                if (z5) {
                    this.S = (a) eVar;
                    return;
                }
                return;
            }
            return;
        }
        int f2 = iVar.f(j, list);
        if (f2 < arrayList.size()) {
            ke.b.k(!k0Var.d());
            int size = arrayList.size();
            while (true) {
                if (f2 >= size) {
                    f2 = -1;
                    break;
                } else if (!k(f2)) {
                    break;
                } else {
                    f2++;
                }
            }
            if (f2 == -1) {
                return;
            }
            long j5 = i().E;
            a g6 = g(f2);
            if (arrayList.isEmpty()) {
                this.P = this.Q;
            }
            this.T = false;
            this.f16378y.z(new MediaLoadData(1, this.f16372d, null, 3, null, d0.U(g6.f16366y), d0.U(j5)));
        }
    }

    public final void B(long j) {
        a aVar;
        boolean y5;
        this.Q = j;
        if (r()) {
            this.P = j;
            return;
        }
        int i5 = 0;
        for (int i6 = 0; i6 < this.H.size(); i6++) {
            aVar = (a) this.H.get(i6);
            long j5 = aVar.f16366y;
            if (j5 == j && aVar.H == -9223372036854775807L) {
                break;
            } else {
                if (j5 > j) {
                    break;
                }
            }
        }
        aVar = null;
        if (aVar != null) {
            p0 p0Var = this.J;
            int c6 = aVar.c(0);
            synchronized (p0Var) {
                synchronized (p0Var) {
                    p0Var.f15159s = 0;
                    l0 l0Var = p0Var.a;
                    l0Var.f15134e = l0Var.f15133d;
                }
            }
            int i10 = p0Var.f15157q;
            if (c6 >= i10 && c6 <= p0Var.f15156p + i10) {
                p0Var.f15160t = Long.MIN_VALUE;
                p0Var.f15159s = c6 - i10;
                y5 = true;
            }
            y5 = false;
        } else {
            y5 = this.J.y(j, j < h());
        }
        if (y5) {
            this.R = x(this.J.n(), 0);
            p0[] p0VarArr = this.K;
            int length = p0VarArr.length;
            while (i5 < length) {
                p0VarArr[i5].y(j, true);
                i5++;
            }
            return;
        }
        this.P = j;
        this.T = false;
        this.H.clear();
        this.R = 0;
        if (this.F.d()) {
            this.J.h();
            p0[] p0VarArr2 = this.K;
            int length2 = p0VarArr2.length;
            while (i5 < length2) {
                p0VarArr2[i5].h();
                i5++;
            }
            this.F.a();
            return;
        }
        this.F.f10686i = null;
        this.J.x(false);
        for (p0 p0Var2 : this.K) {
            p0Var2.x(false);
        }
    }

    @Override // nd.q0
    public final void b() {
        k0 k0Var = this.F;
        k0Var.b();
        this.J.t();
        if (k0Var.d()) {
            return;
        }
        this.f16376w.b();
    }

    @Override // nd.q0
    public final int c(long j) {
        if (r()) {
            return 0;
        }
        boolean z5 = this.T;
        p0 p0Var = this.J;
        int p3 = p0Var.p(j, z5);
        a aVar = this.S;
        if (aVar != null) {
            p3 = Math.min(p3, aVar.c(0) - p0Var.n());
        }
        p0Var.z(p3);
        t();
        return p3;
    }

    @Override // ie.i0
    public final void d() {
        p0 p0Var = this.J;
        p0Var.x(true);
        nc.k kVar = p0Var.f15150h;
        if (kVar != null) {
            kVar.d(p0Var.f15147e);
            p0Var.f15150h = null;
            p0Var.f15149g = null;
        }
        for (p0 p0Var2 : this.K) {
            p0Var2.x(true);
            nc.k kVar2 = p0Var2.f15150h;
            if (kVar2 != null) {
                kVar2.d(p0Var2.f15147e);
                p0Var2.f15150h = null;
                p0Var2.f15149g = null;
            }
        }
        this.f16376w.release();
        g gVar = this.O;
        if (gVar != null) {
            qd.c cVar = (qd.c) gVar;
            synchronized (cVar) {
                p pVar = (p) cVar.K.remove(this);
                if (pVar != null) {
                    p0 p0Var3 = pVar.a;
                    p0Var3.x(true);
                    nc.k kVar3 = p0Var3.f15150h;
                    if (kVar3 != null) {
                        kVar3.d(p0Var3.f15147e);
                        p0Var3.f15150h = null;
                        p0Var3.f15149g = null;
                    }
                }
            }
        }
    }

    @Override // nd.q0
    public final int f(e4.l lVar, mc.f fVar, int i5) {
        if (r()) {
            return -3;
        }
        a aVar = this.S;
        p0 p0Var = this.J;
        if (aVar != null && aVar.c(0) <= p0Var.n()) {
            return -3;
        }
        t();
        return p0Var.w(lVar, fVar, i5, this.T);
    }

    public final a g(int i5) {
        ArrayList arrayList = this.H;
        a aVar = (a) arrayList.get(i5);
        d0.N(arrayList, i5, arrayList.size());
        this.R = Math.max(this.R, arrayList.size());
        int i6 = 0;
        this.J.j(aVar.c(0));
        while (true) {
            p0[] p0VarArr = this.K;
            if (i6 >= p0VarArr.length) {
                return aVar;
            }
            p0 p0Var = p0VarArr[i6];
            i6++;
            p0Var.j(aVar.c(i6));
        }
    }

    @Override // nd.s0
    public final long h() {
        if (r()) {
            return this.P;
        }
        if (this.T) {
            return Long.MIN_VALUE;
        }
        return i().E;
    }

    public final a i() {
        return (a) k0.d.f(1, this.H);
    }

    @Override // nd.q0
    public final boolean isReady() {
        return !r() && this.J.r(this.T);
    }

    public final boolean k(int i5) {
        int n6;
        a aVar = (a) this.H.get(i5);
        if (this.J.n() > aVar.c(0)) {
            return true;
        }
        int i6 = 0;
        do {
            p0[] p0VarArr = this.K;
            if (i6 >= p0VarArr.length) {
                return false;
            }
            n6 = p0VarArr[i6].n();
            i6++;
        } while (n6 <= aVar.c(i6));
        return true;
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0077  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x00b7  */
    /* JADX WARN: Type inference failed for: r1v3, types: [java.lang.Object, nd.r0] */
    @Override // ie.f0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final bd.f l(ie.h0 h0Var, long j, long j5, IOException iOException, int i5) {
        bd.f fVar;
        boolean a;
        e eVar = (e) h0Var;
        long j7 = eVar.F.f10755e;
        boolean z5 = eVar instanceof a;
        ArrayList arrayList = this.H;
        int size = arrayList.size() - 1;
        boolean z6 = (j7 != 0 && z5 && k(size)) ? false : true;
        ie.s0 s0Var = eVar.F;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(j7, s0Var.f10757v);
        d0.U(eVar.f16366y);
        d0.U(eVar.E);
        a0 a0Var = new a0(i5, 7, iOException);
        i iVar = this.f16376w;
        p9.d dVar = this.E;
        if (iVar.e(eVar, z6, a0Var, dVar)) {
            if (z6) {
                if (z5) {
                    ke.b.k(g(size) == eVar);
                    if (arrayList.isEmpty()) {
                        this.P = this.Q;
                    }
                }
                fVar = k0.f10682w;
                if (fVar == null) {
                    dVar.getClass();
                    long m5 = p9.d.m(a0Var);
                    fVar = m5 != -9223372036854775807L ? new bd.f(0, m5, false) : k0.f10683x;
                }
                a = fVar.a();
                this.f16378y.o(loadEventInfo, eVar.f16362i, this.f16372d, eVar.f16363v, eVar.f16364w, eVar.f16365x, eVar.f16366y, eVar.E, iOException, !a);
                if (!a) {
                    this.M = null;
                    dVar.getClass();
                    this.f16377x.c(this);
                }
                return fVar;
            }
            ke.b.N("ChunkSampleStream", "Ignoring attempt to cancel non-cancelable load.");
        }
        fVar = null;
        if (fVar == null) {
        }
        a = fVar.a();
        this.f16378y.o(loadEventInfo, eVar.f16362i, this.f16372d, eVar.f16363v, eVar.f16364w, eVar.f16365x, eVar.f16366y, eVar.E, iOException, !a);
        if (!a) {
        }
        return fVar;
    }

    public final void n(long j) {
        long j5;
        if (r()) {
            return;
        }
        p0 p0Var = this.J;
        int i5 = p0Var.f15157q;
        p0Var.g(j, true);
        p0 p0Var2 = this.J;
        int i6 = p0Var2.f15157q;
        if (i6 > i5) {
            synchronized (p0Var2) {
                j5 = p0Var2.f15156p == 0 ? Long.MIN_VALUE : p0Var2.f15154n[p0Var2.f15158r];
            }
            int i10 = 0;
            while (true) {
                p0[] p0VarArr = this.K;
                if (i10 >= p0VarArr.length) {
                    break;
                }
                p0VarArr[i10].g(j5, this.f16375v[i10]);
                i10++;
            }
        }
        int min = Math.min(x(i6, 0), this.R);
        if (min > 0) {
            d0.N(this.H, 0, min);
            this.R -= min;
        }
    }

    @Override // nd.s0
    public final boolean o(long j) {
        long j5;
        List list;
        if (!this.T) {
            k0 k0Var = this.F;
            if (!k0Var.d() && !k0Var.c()) {
                boolean r5 = r();
                if (r5) {
                    list = Collections.EMPTY_LIST;
                    j5 = this.P;
                } else {
                    j5 = i().E;
                    list = this.I;
                }
                this.f16376w.d(j, j5, list, this.G);
                h0 h0Var = this.G;
                boolean z5 = h0Var.f175e;
                e eVar = (e) h0Var.f176i;
                h0Var.f176i = null;
                h0Var.f175e = false;
                if (z5) {
                    this.P = -9223372036854775807L;
                    this.T = true;
                    return true;
                }
                if (eVar != null) {
                    this.M = eVar;
                    boolean z6 = eVar instanceof a;
                    e4.c cVar = this.L;
                    if (z6) {
                        a aVar = (a) eVar;
                        if (r5) {
                            long j7 = aVar.f16366y;
                            long j10 = this.P;
                            if (j7 != j10) {
                                this.J.f15160t = j10;
                                for (p0 p0Var : this.K) {
                                    p0Var.f15160t = this.P;
                                }
                            }
                            this.P = -9223372036854775807L;
                        }
                        aVar.J = cVar;
                        p0[] p0VarArr = (p0[]) cVar.f7940i;
                        int[] iArr = new int[p0VarArr.length];
                        for (int i5 = 0; i5 < p0VarArr.length; i5++) {
                            p0 p0Var2 = p0VarArr[i5];
                            iArr[i5] = p0Var2.f15157q + p0Var2.f15156p;
                        }
                        aVar.K = iArr;
                        this.H.add(aVar);
                    } else if (eVar instanceof k) {
                        ((k) eVar).H = cVar;
                    }
                    k0Var.f(eVar, this, this.E.k(eVar.f16362i));
                    this.f16378y.r(new LoadEventInfo(eVar.f16361e), eVar.f16362i, this.f16372d, eVar.f16363v, eVar.f16364w, eVar.f16365x, eVar.f16366y, eVar.E);
                    return true;
                }
            }
        }
        return false;
    }

    @Override // nd.s0
    public final boolean q() {
        return this.F.d();
    }

    public final boolean r() {
        return this.P != -9223372036854775807L;
    }

    public final void t() {
        int x5 = x(this.J.n(), this.R - 1);
        while (true) {
            int i5 = this.R;
            if (i5 > x5) {
                return;
            }
            this.R = i5 + 1;
            a aVar = (a) this.H.get(i5);
            Format format = aVar.f16363v;
            if (!format.equals(this.N)) {
                this.f16378y.e(this.f16372d, format, aVar.f16364w, aVar.f16365x, aVar.f16366y);
            }
            this.N = format;
        }
    }

    /* JADX WARN: Type inference failed for: r13v2, types: [java.lang.Object, nd.r0] */
    @Override // ie.f0
    public final void v(ie.h0 h0Var, long j, long j5) {
        e eVar = (e) h0Var;
        this.M = null;
        this.f16376w.g(eVar);
        long j7 = eVar.f16360d;
        ie.s0 s0Var = eVar.F;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        this.E.getClass();
        this.f16378y.m(loadEventInfo, eVar.f16362i, this.f16372d, eVar.f16363v, eVar.f16364w, eVar.f16365x, eVar.f16366y, eVar.E);
        this.f16377x.c(this);
    }

    @Override // nd.s0
    public final long w() {
        long j;
        ArrayList arrayList = this.H;
        if (this.T) {
            return Long.MIN_VALUE;
        }
        if (r()) {
            return this.P;
        }
        long j5 = this.Q;
        a i5 = i();
        if (!i5.b()) {
            i5 = arrayList.size() > 1 ? (a) k0.d.f(2, arrayList) : null;
        }
        if (i5 != null) {
            j5 = Math.max(j5, i5.E);
        }
        p0 p0Var = this.J;
        synchronized (p0Var) {
            j = p0Var.f15162v;
        }
        return Math.max(j5, j);
    }

    public final int x(int i5, int i6) {
        ArrayList arrayList;
        do {
            i6++;
            arrayList = this.H;
            if (i6 >= arrayList.size()) {
                return arrayList.size() - 1;
            }
        } while (((a) arrayList.get(i6)).c(0) <= i5);
        return i6 - 1;
    }

    public final void y(qd.c cVar) {
        this.O = cVar;
        p0 p0Var = this.J;
        p0Var.h();
        nc.k kVar = p0Var.f15150h;
        if (kVar != null) {
            kVar.d(p0Var.f15147e);
            p0Var.f15150h = null;
            p0Var.f15149g = null;
        }
        for (p0 p0Var2 : this.K) {
            p0Var2.h();
            nc.k kVar2 = p0Var2.f15150h;
            if (kVar2 != null) {
                kVar2.d(p0Var2.f15147e);
                p0Var2.f15150h = null;
                p0Var2.f15149g = null;
            }
        }
        this.F.e(this);
    }

    /* JADX WARN: Type inference failed for: r13v5, types: [java.lang.Object, nd.r0] */
    @Override // ie.f0
    public final void z(ie.h0 h0Var, long j, long j5, boolean z5) {
        e eVar = (e) h0Var;
        this.M = null;
        this.S = null;
        long j7 = eVar.f16360d;
        ie.s0 s0Var = eVar.F;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        this.E.getClass();
        this.f16378y.j(loadEventInfo, eVar.f16362i, this.f16372d, eVar.f16363v, eVar.f16364w, eVar.f16365x, eVar.f16366y, eVar.E);
        if (z5) {
            return;
        }
        if (r()) {
            this.J.x(false);
            for (p0 p0Var : this.K) {
                p0Var.x(false);
            }
        } else if (eVar instanceof a) {
            ArrayList arrayList = this.H;
            g(arrayList.size() - 1);
            if (arrayList.isEmpty()) {
                this.P = this.Q;
            }
        }
        this.f16377x.c(this);
    }
}
