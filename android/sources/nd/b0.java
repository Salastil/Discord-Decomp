package nd;

import hc.p1;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.IdentityHashMap;

/* loaded from: classes3.dex */
public final class b0 implements q, p {
    public q[] E;
    public u4.c F;

    /* renamed from: d, reason: collision with root package name */
    public final q[] f15068d;

    /* renamed from: e, reason: collision with root package name */
    public final IdentityHashMap f15069e;

    /* renamed from: i, reason: collision with root package name */
    public final j8.b f15070i;

    /* renamed from: v, reason: collision with root package name */
    public final ArrayList f15071v = new ArrayList();

    /* renamed from: w, reason: collision with root package name */
    public final HashMap f15072w = new HashMap();

    /* renamed from: x, reason: collision with root package name */
    public p f15073x;

    /* renamed from: y, reason: collision with root package name */
    public a1 f15074y;

    public b0(j8.b bVar, long[] jArr, q... qVarArr) {
        this.f15070i = bVar;
        this.f15068d = qVarArr;
        bVar.getClass();
        this.F = new u4.c(new s0[0]);
        this.f15069e = new IdentityHashMap();
        this.E = new q[0];
        for (int i5 = 0; i5 < qVarArr.length; i5++) {
            long j = jArr[i5];
            if (j != 0) {
                this.f15068d[i5] = new z(qVarArr[i5], j);
            }
        }
    }

    @Override // nd.s0
    public final void A(long j) {
        this.F.A(j);
    }

    @Override // nd.q
    public final long a(long j, p1 p1Var) {
        q[] qVarArr = this.E;
        return (qVarArr.length > 0 ? qVarArr[0] : this.f15068d[0]).a(j, p1Var);
    }

    @Override // nd.r0
    public final void c(s0 s0Var) {
        p pVar = this.f15073x;
        pVar.getClass();
        pVar.c(this);
    }

    @Override // nd.p
    public final void d(q qVar) {
        ArrayList arrayList = this.f15071v;
        arrayList.remove(qVar);
        if (arrayList.isEmpty()) {
            q[] qVarArr = this.f15068d;
            int i5 = 0;
            for (q qVar2 : qVarArr) {
                i5 += qVar2.u().f15065d;
            }
            z0[] z0VarArr = new z0[i5];
            int i6 = 0;
            for (int i10 = 0; i10 < qVarArr.length; i10++) {
                a1 u5 = qVarArr[i10].u();
                int i11 = u5.f15065d;
                int i12 = 0;
                while (i12 < i11) {
                    z0 a = u5.a(i12);
                    z0 z0Var = new z0(i10 + ":" + a.f15209e, a.f15211v);
                    this.f15072w.put(z0Var, a);
                    z0VarArr[i6] = z0Var;
                    i12++;
                    i6++;
                }
            }
            this.f15074y = new a1(z0VarArr);
            p pVar = this.f15073x;
            pVar.getClass();
            pVar.d(this);
        }
    }

    @Override // nd.q
    public final long e(ge.p[] pVarArr, boolean[] zArr, q0[] q0VarArr, boolean[] zArr2, long j) {
        IdentityHashMap identityHashMap;
        int[] iArr;
        int[] iArr2 = new int[pVarArr.length];
        int[] iArr3 = new int[pVarArr.length];
        int i5 = 0;
        int i6 = 0;
        while (true) {
            int length = pVarArr.length;
            identityHashMap = this.f15069e;
            if (i6 >= length) {
                break;
            }
            q0 q0Var = q0VarArr[i6];
            Integer num = q0Var == null ? null : (Integer) identityHashMap.get(q0Var);
            iArr2[i6] = num == null ? -1 : num.intValue();
            ge.p pVar = pVarArr[i6];
            if (pVar != null) {
                String str = pVar.b().f15209e;
                iArr3[i6] = Integer.parseInt(str.substring(0, str.indexOf(":")));
            } else {
                iArr3[i6] = -1;
            }
            i6++;
        }
        identityHashMap.clear();
        int length2 = pVarArr.length;
        q0[] q0VarArr2 = new q0[length2];
        q0[] q0VarArr3 = new q0[pVarArr.length];
        ge.p[] pVarArr2 = new ge.p[pVarArr.length];
        q[] qVarArr = this.f15068d;
        ArrayList arrayList = new ArrayList(qVarArr.length);
        long j5 = j;
        int i10 = 0;
        while (i10 < qVarArr.length) {
            int i11 = i5;
            while (i11 < pVarArr.length) {
                q0VarArr3[i11] = iArr2[i11] == i10 ? q0VarArr[i11] : null;
                if (iArr3[i11] == i10) {
                    ge.p pVar2 = pVarArr[i11];
                    pVar2.getClass();
                    iArr = iArr2;
                    z0 z0Var = (z0) this.f15072w.get(pVar2.b());
                    z0Var.getClass();
                    pVarArr2[i11] = new y(pVar2, z0Var);
                } else {
                    iArr = iArr2;
                    pVarArr2[i11] = null;
                }
                i11++;
                iArr2 = iArr;
            }
            int[] iArr4 = iArr2;
            q[] qVarArr2 = qVarArr;
            int i12 = i10;
            long e9 = qVarArr2[i10].e(pVarArr2, zArr, q0VarArr3, zArr2, j5);
            if (i12 == 0) {
                j5 = e9;
            } else if (e9 != j5) {
                throw new IllegalStateException("Children enabled at different positions.");
            }
            boolean z5 = false;
            for (int i13 = 0; i13 < pVarArr.length; i13++) {
                if (iArr3[i13] == i12) {
                    q0 q0Var2 = q0VarArr3[i13];
                    q0Var2.getClass();
                    q0VarArr2[i13] = q0VarArr3[i13];
                    identityHashMap.put(q0Var2, Integer.valueOf(i12));
                    z5 = true;
                } else if (iArr4[i13] == i12) {
                    ke.b.k(q0VarArr3[i13] == null);
                }
            }
            if (z5) {
                arrayList.add(qVarArr2[i12]);
            }
            i10 = i12 + 1;
            qVarArr = qVarArr2;
            iArr2 = iArr4;
            i5 = 0;
        }
        int i14 = i5;
        System.arraycopy(q0VarArr2, i14, q0VarArr, i14, length2);
        q[] qVarArr3 = (q[]) arrayList.toArray(new q[i14]);
        this.E = qVarArr3;
        this.f15070i.getClass();
        this.F = new u4.c(qVarArr3);
        return j5;
    }

    @Override // nd.s0
    public final long h() {
        return this.F.h();
    }

    @Override // nd.q
    public final void j() {
        for (q qVar : this.f15068d) {
            qVar.j();
        }
    }

    @Override // nd.q
    public final long m(long j) {
        long m5 = this.E[0].m(j);
        int i5 = 1;
        while (true) {
            q[] qVarArr = this.E;
            if (i5 >= qVarArr.length) {
                return m5;
            }
            if (qVarArr[i5].m(m5) != m5) {
                throw new IllegalStateException("Unexpected child seekToUs result.");
            }
            i5++;
        }
    }

    @Override // nd.q
    public final void n(long j) {
        for (q qVar : this.E) {
            qVar.n(j);
        }
    }

    @Override // nd.s0
    public final boolean o(long j) {
        ArrayList arrayList = this.f15071v;
        if (arrayList.isEmpty()) {
            return this.F.o(j);
        }
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((q) arrayList.get(i5)).o(j);
        }
        return false;
    }

    @Override // nd.q
    public final void p(p pVar, long j) {
        this.f15073x = pVar;
        ArrayList arrayList = this.f15071v;
        q[] qVarArr = this.f15068d;
        Collections.addAll(arrayList, qVarArr);
        for (q qVar : qVarArr) {
            qVar.p(this, j);
        }
    }

    @Override // nd.s0
    public final boolean q() {
        return this.F.q();
    }

    @Override // nd.q
    public final long s() {
        long j = -9223372036854775807L;
        for (q qVar : this.E) {
            long s2 = qVar.s();
            if (s2 != -9223372036854775807L) {
                if (j == -9223372036854775807L) {
                    for (q qVar2 : this.E) {
                        if (qVar2 == qVar) {
                            break;
                        }
                        if (qVar2.m(s2) != s2) {
                            throw new IllegalStateException("Unexpected child seekToUs result.");
                        }
                    }
                    j = s2;
                } else if (s2 != j) {
                    throw new IllegalStateException("Conflicting discontinuities.");
                }
            } else if (j != -9223372036854775807L && qVar.m(j) != j) {
                throw new IllegalStateException("Unexpected child seekToUs result.");
            }
        }
        return j;
    }

    @Override // nd.q
    public final a1 u() {
        a1 a1Var = this.f15074y;
        a1Var.getClass();
        return a1Var;
    }

    @Override // nd.s0
    public final long w() {
        return this.F.w();
    }
}
