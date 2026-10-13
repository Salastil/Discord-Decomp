package ud;

import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.upstream.DataSource;
import hc.f0;
import hc.p1;
import ie.l0;
import ie.u0;
import java.util.ArrayList;
import nc.n;
import nc.r;
import nd.a1;
import nd.p;
import nd.q;
import nd.q0;
import nd.r0;
import nd.s0;
import nd.z0;
import pd.h;

/* loaded from: classes3.dex */
public final class d implements q, r0 {
    public final ie.q E;
    public final a1 F;
    public final j8.b G;
    public p H;
    public vd.c I;
    public h[] J;
    public u4.c K;

    /* renamed from: d, reason: collision with root package name */
    public final c f18861d;

    /* renamed from: e, reason: collision with root package name */
    public final u0 f18862e;

    /* renamed from: i, reason: collision with root package name */
    public final l0 f18863i;

    /* renamed from: v, reason: collision with root package name */
    public final r f18864v;

    /* renamed from: w, reason: collision with root package name */
    public final n f18865w;

    /* renamed from: x, reason: collision with root package name */
    public final p9.d f18866x;

    /* renamed from: y, reason: collision with root package name */
    public final a1.d f18867y;

    public d(vd.c cVar, a aVar, u0 u0Var, j8.b bVar, r rVar, n nVar, p9.d dVar, a1.d dVar2, l0 l0Var, ie.q qVar) {
        this.I = cVar;
        this.f18861d = aVar;
        this.f18862e = u0Var;
        this.f18863i = l0Var;
        this.f18864v = rVar;
        this.f18865w = nVar;
        this.f18866x = dVar;
        this.f18867y = dVar2;
        this.E = qVar;
        this.G = bVar;
        z0[] z0VarArr = new z0[cVar.f19354f.length];
        int i5 = 0;
        while (true) {
            vd.b[] bVarArr = cVar.f19354f;
            if (i5 >= bVarArr.length) {
                this.F = new a1(z0VarArr);
                h[] hVarArr = new h[0];
                this.J = hVarArr;
                bVar.getClass();
                this.K = new u4.c(hVarArr);
                return;
            }
            Format[] formatArr = bVarArr[i5].j;
            Format[] formatArr2 = new Format[formatArr.length];
            for (int i6 = 0; i6 < formatArr.length; i6++) {
                Format format = formatArr[i6];
                int b10 = rVar.b(format);
                f0 a = format.a();
                a.F = b10;
                formatArr2[i6] = new Format(a);
            }
            z0VarArr[i5] = new z0(Integer.toString(i5), formatArr2);
            i5++;
        }
    }

    @Override // nd.s0
    public final void A(long j) {
        this.K.A(j);
    }

    @Override // nd.q
    public final long a(long j, p1 p1Var) {
        for (h hVar : this.J) {
            if (hVar.f16372d == 2) {
                return hVar.f16376w.a(j, p1Var);
            }
        }
        return j;
    }

    @Override // nd.r0
    public final void c(s0 s0Var) {
        this.H.c(this);
    }

    @Override // nd.q
    public final long e(ge.p[] pVarArr, boolean[] zArr, q0[] q0VarArr, boolean[] zArr2, long j) {
        ge.p pVar;
        ArrayList arrayList = new ArrayList();
        for (int i5 = 0; i5 < pVarArr.length; i5++) {
            q0 q0Var = q0VarArr[i5];
            if (q0Var != null) {
                h hVar = (h) q0Var;
                ge.p pVar2 = pVarArr[i5];
                if (pVar2 == null || !zArr[i5]) {
                    hVar.y(null);
                    q0VarArr[i5] = null;
                } else {
                    ((b) hVar.f16376w).f18857e = pVar2;
                    arrayList.add(hVar);
                }
            }
            if (q0VarArr[i5] == null && (pVar = pVarArr[i5]) != null) {
                int b10 = this.F.b(pVar.b());
                vd.c cVar = this.I;
                DataSource createDataSource = ((a) this.f18861d).a.createDataSource();
                u0 u0Var = this.f18862e;
                if (u0Var != null) {
                    createDataSource.n(u0Var);
                }
                h hVar2 = new h(this.I.f19354f[b10].a, null, null, new b(this.f18863i, cVar, b10, pVar, createDataSource), this, this.E, j, this.f18864v, this.f18865w, this.f18866x, this.f18867y);
                arrayList.add(hVar2);
                q0VarArr[i5] = hVar2;
                zArr2[i5] = true;
            }
        }
        h[] hVarArr = new h[arrayList.size()];
        this.J = hVarArr;
        arrayList.toArray(hVarArr);
        h[] hVarArr2 = this.J;
        this.G.getClass();
        this.K = new u4.c(hVarArr2);
        return j;
    }

    @Override // nd.s0
    public final long h() {
        return this.K.h();
    }

    @Override // nd.q
    public final void j() {
        this.f18863i.b();
    }

    @Override // nd.q
    public final long m(long j) {
        for (h hVar : this.J) {
            hVar.B(j);
        }
        return j;
    }

    @Override // nd.q
    public final void n(long j) {
        for (h hVar : this.J) {
            hVar.n(j);
        }
    }

    @Override // nd.s0
    public final boolean o(long j) {
        return this.K.o(j);
    }

    @Override // nd.q
    public final void p(p pVar, long j) {
        this.H = pVar;
        pVar.d(this);
    }

    @Override // nd.s0
    public final boolean q() {
        return this.K.q();
    }

    @Override // nd.q
    public final long s() {
        return -9223372036854775807L;
    }

    @Override // nd.q
    public final a1 u() {
        return this.F;
    }

    @Override // nd.s0
    public final long w() {
        return this.K.w();
    }
}
