package sd;

import a5.a0;
import android.net.Uri;
import android.util.SparseArray;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.metadata.Metadata;
import fi.e0;
import hc.f0;
import hc.g1;
import hc.p1;
import ic.c0;
import ie.k0;
import ie.u0;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.IdentityHashMap;
import java.util.List;
import java.util.Map;
import ke.d0;
import nd.a1;
import nd.q0;
import nd.s0;
import nd.z0;

/* loaded from: classes3.dex */
public final class n implements nd.q, td.q {
    public final a1.d E;
    public final ie.q F;
    public final IdentityHashMap G;
    public final r3.g H;
    public final j8.b I;
    public final boolean J;
    public final int K;
    public final c0 L;
    public final rj.b M = new rj.b(this);
    public nd.p N;
    public int O;
    public a1 P;
    public t[] Q;
    public t[] R;
    public int S;
    public u4.c T;

    /* renamed from: d, reason: collision with root package name */
    public final l f17895d;

    /* renamed from: e, reason: collision with root package name */
    public final td.c f17896e;

    /* renamed from: i, reason: collision with root package name */
    public final k f17897i;

    /* renamed from: v, reason: collision with root package name */
    public final u0 f17898v;

    /* renamed from: w, reason: collision with root package name */
    public final nc.r f17899w;

    /* renamed from: x, reason: collision with root package name */
    public final nc.n f17900x;

    /* renamed from: y, reason: collision with root package name */
    public final p9.d f17901y;

    public n(l lVar, td.c cVar, c cVar2, u0 u0Var, nc.r rVar, nc.n nVar, p9.d dVar, a1.d dVar2, ie.q qVar, j8.b bVar, boolean z5, int i5, c0 c0Var) {
        this.f17895d = lVar;
        this.f17896e = cVar;
        this.f17897i = cVar2;
        this.f17898v = u0Var;
        this.f17899w = rVar;
        this.f17900x = nVar;
        this.f17901y = dVar;
        this.E = dVar2;
        this.F = qVar;
        this.I = bVar;
        this.J = z5;
        this.K = i5;
        this.L = c0Var;
        bVar.getClass();
        this.T = new u4.c(new s0[0]);
        this.G = new IdentityHashMap();
        this.H = new r3.g(2);
        this.Q = new t[0];
        this.R = new t[0];
    }

    public static Format f(Format format, Format format2, boolean z5) {
        String q5;
        Metadata metadata;
        int i5;
        String str;
        int i6;
        int i10;
        String str2;
        if (format2 != null) {
            q5 = format2.F;
            metadata = format2.G;
            i6 = format2.V;
            i5 = format2.f5230v;
            i10 = format2.f5231w;
            str = format2.f5229i;
            str2 = format2.f5227e;
        } else {
            q5 = d0.q(1, format.F);
            metadata = format.G;
            if (z5) {
                i6 = format.V;
                i5 = format.f5230v;
                i10 = format.f5231w;
                str = format.f5229i;
                str2 = format.f5227e;
            } else {
                i5 = 0;
                str = null;
                i6 = -1;
                i10 = 0;
                str2 = null;
            }
        }
        String d6 = ke.o.d(q5);
        int i11 = z5 ? format.f5232x : -1;
        int i12 = z5 ? format.f5233y : -1;
        f0 f0Var = new f0();
        f0Var.a = format.f5225d;
        f0Var.f9670b = str2;
        f0Var.j = format.H;
        f0Var.k = d6;
        f0Var.f9676h = q5;
        f0Var.f9677i = metadata;
        f0Var.f9674f = i11;
        f0Var.f9675g = i12;
        f0Var.f9690x = i6;
        f0Var.f9672d = i5;
        f0Var.f9673e = i10;
        f0Var.f9671c = str;
        return new Format(f0Var);
    }

    @Override // nd.s0
    public final void A(long j) {
        this.T.A(j);
    }

    @Override // nd.q
    public final long a(long j, p1 p1Var) {
        t[] tVarArr = this.R;
        int length = tVarArr.length;
        int i5 = 0;
        while (true) {
            if (i5 >= length) {
                break;
            }
            t tVar = tVarArr[i5];
            if (tVar.X == 2) {
                j jVar = tVar.f17936v;
                td.c cVar = jVar.f17877g;
                int d6 = jVar.f17885q.d();
                Uri[] uriArr = jVar.f17875e;
                td.i a = (d6 >= uriArr.length || d6 == -1) ? null : cVar.a(true, uriArr[jVar.f17885q.k()]);
                if (a != null) {
                    e0 e0Var = a.f18307r;
                    if (!e0Var.isEmpty() && a.f18329c) {
                        long j5 = a.f18299h - cVar.K;
                        long j7 = j - j5;
                        int c6 = d0.c(Long.valueOf(j7), true, e0Var);
                        long j10 = ((td.f) e0Var.get(c6)).f18288w;
                        return p1Var.a(j7, j10, c6 != e0Var.size() - 1 ? ((td.f) e0Var.get(c6 + 1)).f18288w : j10) + j5;
                    }
                }
            } else {
                i5++;
            }
        }
        return j;
    }

    @Override // td.q
    public final void b() {
        for (t tVar : this.Q) {
            k0 k0Var = tVar.G;
            ArrayList arrayList = tVar.K;
            if (!arrayList.isEmpty()) {
                m mVar = (m) fi.p.i(arrayList);
                int b10 = tVar.f17936v.b(mVar);
                if (b10 == 1) {
                    mVar.h0 = true;
                } else if (b10 == 2 && !tVar.f17931q0 && k0Var.d()) {
                    k0Var.a();
                }
            }
        }
        this.N.c(this);
    }

    /* JADX WARN: Code restructure failed: missing block: B:40:0x0090, code lost:
    
        if ((((td.b) r9.f17877g.f18278v.get(r18)) != null ? !td.b.a(r4, r13) : false) != false) goto L25;
     */
    /* JADX WARN: Removed duplicated region for block: B:18:0x004a  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0096  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0074  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x0056 A[SYNTHETIC] */
    @Override // td.q
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean c(Uri uri, a0 a0Var, boolean z5) {
        long j;
        int i5;
        int s2;
        boolean z6;
        boolean z7;
        boolean z8 = true;
        for (t tVar : this.Q) {
            j jVar = tVar.f17936v;
            Uri[] uriArr = jVar.f17875e;
            if (d0.k(uriArr, uri)) {
                if (!z5) {
                    p9.d dVar = tVar.F;
                    ch.u h6 = ys.l.h(jVar.f17885q);
                    dVar.getClass();
                    bd.f i6 = p9.d.i(h6, a0Var);
                    if (i6 != null && i6.a == 2) {
                        j = i6.f2806b;
                        i5 = 0;
                        while (true) {
                            if (i5 < uriArr.length) {
                                i5 = -1;
                                break;
                            }
                            if (uriArr[i5].equals(uri)) {
                                break;
                            }
                            i5++;
                        }
                        if (i5 != -1 && (s2 = jVar.f17885q.s(i5)) != -1) {
                            jVar.f17887s |= uri.equals(jVar.f17883o);
                            if (j != -9223372036854775807L) {
                                if (jVar.f17885q.n(s2, j)) {
                                }
                                z6 = false;
                                z7 = (z6 || j == -9223372036854775807L) ? false : true;
                            }
                        }
                        z6 = true;
                        if (z6) {
                        }
                    }
                }
                j = -9223372036854775807L;
                i5 = 0;
                while (true) {
                    if (i5 < uriArr.length) {
                    }
                    i5++;
                }
                if (i5 != -1) {
                    jVar.f17887s |= uri.equals(jVar.f17883o);
                    if (j != -9223372036854775807L) {
                    }
                }
                z6 = true;
                if (z6) {
                }
            } else {
                z7 = true;
            }
            z8 &= z7;
        }
        this.N.c(this);
        return z8;
    }

    public final t d(String str, int i5, Uri[] uriArr, Format[] formatArr, Format format, List list, Map map, long j) {
        return new t(str, i5, this.M, new j(this.f17895d, this.f17896e, uriArr, formatArr, this.f17897i, this.f17898v, this.H, list, this.L), map, this.F, j, format, this.f17899w, this.f17900x, this.f17901y, this.E, this.K);
    }

    /* JADX WARN: Code restructure failed: missing block: B:184:0x0113, code lost:
    
        if (r42 != r3.f17927m0) goto L60;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:108:0x0279  */
    /* JADX WARN: Removed duplicated region for block: B:118:0x028e  */
    /* JADX WARN: Removed duplicated region for block: B:134:0x02c4  */
    /* JADX WARN: Removed duplicated region for block: B:152:0x02ef A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:154:0x01d1  */
    /* JADX WARN: Removed duplicated region for block: B:168:0x0259  */
    /* JADX WARN: Removed duplicated region for block: B:178:0x026c  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x0126  */
    /* JADX WARN: Removed duplicated region for block: B:96:0x018f  */
    /* JADX WARN: Type inference failed for: r27v0 */
    /* JADX WARN: Type inference failed for: r28v2 */
    /* JADX WARN: Type inference failed for: r6v41 */
    /* JADX WARN: Type inference failed for: r7v11 */
    /* JADX WARN: Type inference failed for: r7v21, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r8v10 */
    /* JADX WARN: Type inference failed for: r8v11 */
    /* JADX WARN: Type inference failed for: r8v12 */
    /* JADX WARN: Type inference failed for: r8v13 */
    @Override // nd.q
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long e(ge.p[] pVarArr, boolean[] zArr, q0[] q0VarArr, boolean[] zArr2, long j) {
        IdentityHashMap identityHashMap;
        q0[] q0VarArr2;
        j jVar;
        j jVar2;
        boolean z5;
        int i5;
        int[] iArr;
        t[] tVarArr;
        int i6;
        int i10;
        q0[] q0VarArr3;
        int i11;
        j jVar3;
        int[] iArr2;
        t tVar;
        boolean z6;
        boolean z7;
        int i12;
        int i13;
        int i14;
        boolean z8;
        ?? r82;
        int i15;
        ge.p[] pVarArr2;
        int i16;
        k0 k0Var;
        int[] iArr3 = new int[pVarArr.length];
        int[] iArr4 = new int[pVarArr.length];
        int i17 = 0;
        while (true) {
            int length = pVarArr.length;
            identityHashMap = this.G;
            if (i17 >= length) {
                break;
            }
            q0 q0Var = q0VarArr[i17];
            iArr3[i17] = q0Var == null ? -1 : ((Integer) identityHashMap.get(q0Var)).intValue();
            iArr4[i17] = -1;
            ge.p pVar = pVarArr[i17];
            if (pVar != null) {
                z0 b10 = pVar.b();
                int i18 = 0;
                while (true) {
                    t[] tVarArr2 = this.Q;
                    if (i18 < tVarArr2.length) {
                        t tVar2 = tVarArr2[i18];
                        tVar2.f();
                        if (tVar2.f17920f0.b(b10) != -1) {
                            iArr4[i17] = i18;
                            break;
                        }
                        i18++;
                    }
                }
            }
            i17++;
        }
        identityHashMap.clear();
        int length2 = pVarArr.length;
        q0[] q0VarArr4 = new q0[length2];
        int length3 = pVarArr.length;
        q0[] q0VarArr5 = new q0[length3];
        int length4 = pVarArr.length;
        ge.p[] pVarArr3 = new ge.p[length4];
        t[] tVarArr3 = new t[this.Q.length];
        int i19 = length3;
        int i20 = 0;
        int i21 = 0;
        boolean z10 = false;
        while (i20 < this.Q.length) {
            int i22 = length2;
            int i23 = 0;
            while (true) {
                q0VarArr2 = q0VarArr4;
                if (i23 >= pVarArr.length) {
                    break;
                }
                q0VarArr5[i23] = iArr3[i23] == i20 ? q0VarArr[i23] : null;
                pVarArr3[i23] = iArr4[i23] == i20 ? pVarArr[i23] : null;
                i23++;
                q0VarArr4 = q0VarArr2;
            }
            t tVar3 = this.Q[i20];
            k0 k0Var2 = tVar3.G;
            int i24 = i20;
            j jVar4 = tVar3.f17936v;
            ArrayList arrayList = tVar3.K;
            tVar3.f();
            int i25 = tVar3.f17914b0;
            ?? r27 = q0VarArr5;
            int i26 = 0;
            while (i26 < length4) {
                p pVar2 = (p) r27[i26];
                if (pVar2 == null || (pVarArr3[i26] != null && zArr[i26])) {
                    i16 = i26;
                    k0Var = k0Var2;
                } else {
                    i16 = i26;
                    tVar3.f17914b0--;
                    k0Var = k0Var2;
                    if (pVar2.f17904i != -1) {
                        t tVar4 = pVar2.f17903e;
                        int i27 = pVar2.f17902d;
                        tVar4.f();
                        tVar4.h0.getClass();
                        int i28 = tVar4.h0[i27];
                        ke.b.k(tVar4.f17925k0[i28]);
                        tVar4.f17925k0[i28] = false;
                        pVar2.f17904i = -1;
                    }
                    r27[i16] = 0;
                }
                i26 = i16 + 1;
                k0Var2 = k0Var;
            }
            k0 k0Var3 = k0Var2;
            boolean z11 = true;
            if (!z10) {
                if (!tVar3.f17930p0) {
                    jVar = jVar4;
                } else if (i25 != 0) {
                    jVar = jVar4;
                }
                jVar2 = jVar;
                z5 = false;
                ge.p pVar3 = jVar2.f17885q;
                boolean z12 = z5;
                ge.p pVar4 = pVar3;
                i5 = 0;
                while (i5 < length4) {
                    int i29 = i5;
                    ge.p pVar5 = pVarArr3[i29];
                    if (pVar5 == null) {
                        i15 = length4;
                        pVarArr2 = pVarArr3;
                    } else {
                        i15 = length4;
                        pVarArr2 = pVarArr3;
                        int b11 = tVar3.f17920f0.b(pVar5.b());
                        if (b11 == tVar3.f17923i0) {
                            jVar2.f17885q = pVar5;
                            pVar4 = pVar5;
                        }
                        if (r27[i29] == 0) {
                            tVar3.f17914b0++;
                            p pVar6 = new p(tVar3, b11);
                            r27[i29] = pVar6;
                            zArr2[i29] = z11;
                            if (tVar3.h0 != null) {
                                pVar6.a();
                                if (!z12) {
                                    s sVar = tVar3.S[tVar3.h0[b11]];
                                    z12 = (sVar.y(j, z11) || sVar.n() == 0) ? false : true;
                                }
                            }
                        }
                    }
                    i5 = i29 + 1;
                    length4 = i15;
                    pVarArr3 = pVarArr2;
                    z11 = true;
                }
                int i30 = length4;
                ge.p[] pVarArr4 = pVarArr3;
                if (tVar3.f17914b0 != 0) {
                    jVar2.f17882n = null;
                    tVar3.f17917d0 = null;
                    tVar3.f17929o0 = true;
                    arrayList.clear();
                    if (k0Var3.d()) {
                        if (tVar3.Z) {
                            for (s sVar2 : tVar3.S) {
                                sVar2.h();
                            }
                        }
                        k0Var3.a();
                    } else {
                        tVar3.G();
                    }
                    int[] iArr5 = iArr4;
                    tVar = tVar3;
                    i12 = i19;
                    iArr2 = iArr5;
                    iArr = iArr3;
                    tVarArr = tVarArr3;
                    i10 = i22;
                    q0VarArr3 = q0VarArr2;
                    i11 = i24;
                    jVar3 = jVar2;
                } else {
                    boolean z13 = true;
                    if (arrayList.isEmpty() || d0.a(pVar4, pVar3)) {
                        iArr = iArr3;
                        tVarArr = tVarArr3;
                        i6 = i19;
                        i10 = i22;
                        q0VarArr3 = q0VarArr2;
                        i11 = i24;
                        jVar3 = jVar2;
                        iArr2 = iArr4;
                        tVar = tVar3;
                    } else {
                        if (tVar3.f17930p0) {
                            iArr = iArr3;
                            tVarArr = tVarArr3;
                            i6 = i19;
                            i10 = i22;
                            q0VarArr3 = q0VarArr2;
                            i11 = i24;
                            jVar3 = jVar2;
                            iArr2 = iArr4;
                            tVar = tVar3;
                        } else {
                            long j5 = j < 0 ? -j : 0L;
                            m x5 = tVar3.x();
                            ge.p pVar7 = pVar4;
                            iArr = iArr3;
                            tVarArr = tVarArr3;
                            i6 = i19;
                            i10 = i22;
                            q0VarArr3 = q0VarArr2;
                            i11 = i24;
                            jVar3 = jVar2;
                            iArr2 = iArr4;
                            tVar = tVar3;
                            pVar7.c(j, j5, -9223372036854775807L, tVar3.L, jVar2.a(x5, j));
                            if (pVar7.k() != jVar3.f17878h.a(x5.f16363v)) {
                                z13 = true;
                            } else {
                                z13 = true;
                            }
                        }
                        tVar.f17929o0 = z13;
                        z6 = z13;
                        z7 = z6;
                        if (z7) {
                            i12 = i6;
                        } else {
                            tVar.H(j, z6);
                            int i31 = 0;
                            i12 = i6;
                            while (i31 < i12) {
                                if (r27[i31] != 0) {
                                    zArr2[i31] = z13;
                                }
                                i31++;
                                z13 = true;
                            }
                        }
                        z12 = z7;
                    }
                    z6 = z10;
                    z7 = z12;
                    if (z7) {
                    }
                    z12 = z7;
                }
                ArrayList arrayList2 = tVar.P;
                arrayList2.clear();
                for (i13 = 0; i13 < i12; i13++) {
                    ?? r83 = r27[i13];
                    if (r83 != 0) {
                        arrayList2.add((p) r83);
                    }
                }
                tVar.f17930p0 = true;
                i14 = 0;
                z8 = false;
                while (i14 < pVarArr.length) {
                    ?? r7 = r27[i14];
                    int i32 = i11;
                    if (iArr2[i14] == i32) {
                        r7.getClass();
                        r82 = q0VarArr3;
                        r82[i14] = r7;
                        identityHashMap.put(r7, Integer.valueOf(i32));
                        z8 = true;
                    } else {
                        r82 = q0VarArr3;
                        if (iArr[i14] == i32) {
                            ke.b.k(r7 == 0);
                        }
                    }
                    i14++;
                    q0VarArr3 = r82;
                    i11 = i32;
                }
                q0[] q0VarArr6 = q0VarArr3;
                int i33 = i11;
                int i34 = i21;
                if (!z8) {
                    tVarArr[i34] = tVar;
                    i21 = i34 + 1;
                    if (i34 == 0) {
                        jVar3.f17880l = true;
                        if (!z12) {
                            t[] tVarArr4 = this.R;
                            if (tVarArr4.length != 0 && tVar == tVarArr4[0]) {
                            }
                        }
                        ((SparseArray) this.H.f17126e).clear();
                        z10 = true;
                    } else {
                        jVar3.f17880l = i33 < this.S;
                    }
                }
                i20 = i33 + 1;
                q0VarArr4 = q0VarArr6;
                iArr4 = iArr2;
                tVarArr3 = tVarArr;
                q0VarArr5 = r27;
                iArr3 = iArr;
                length4 = i30;
                pVarArr3 = pVarArr4;
                i19 = i12;
                length2 = i10;
            }
            jVar = jVar4;
            jVar2 = jVar;
            z5 = true;
            ge.p pVar32 = jVar2.f17885q;
            boolean z122 = z5;
            ge.p pVar42 = pVar32;
            i5 = 0;
            while (i5 < length4) {
            }
            int i302 = length4;
            ge.p[] pVarArr42 = pVarArr3;
            if (tVar3.f17914b0 != 0) {
            }
            ArrayList arrayList22 = tVar.P;
            arrayList22.clear();
            while (i13 < i12) {
            }
            tVar.f17930p0 = true;
            i14 = 0;
            z8 = false;
            while (i14 < pVarArr.length) {
            }
            q0[] q0VarArr62 = q0VarArr3;
            int i332 = i11;
            int i342 = i21;
            if (!z8) {
            }
            i20 = i332 + 1;
            q0VarArr4 = q0VarArr62;
            iArr4 = iArr2;
            tVarArr3 = tVarArr;
            q0VarArr5 = r27;
            iArr3 = iArr;
            length4 = i302;
            pVarArr3 = pVarArr42;
            i19 = i12;
            length2 = i10;
        }
        System.arraycopy(q0VarArr4, 0, q0VarArr, 0, length2);
        t[] tVarArr5 = (t[]) d0.K(i21, tVarArr3);
        this.R = tVarArr5;
        this.I.getClass();
        this.T = new u4.c(tVarArr5);
        return j;
    }

    @Override // nd.s0
    public final long h() {
        return this.T.h();
    }

    @Override // nd.q
    public final void j() {
        for (t tVar : this.Q) {
            tVar.E();
            if (tVar.f17931q0 && !tVar.a0) {
                throw g1.a("Loading finished before preparation is complete.", null);
            }
        }
    }

    @Override // nd.q
    public final long m(long j) {
        t[] tVarArr = this.R;
        if (tVarArr.length > 0) {
            boolean H = tVarArr[0].H(j, false);
            int i5 = 1;
            while (true) {
                t[] tVarArr2 = this.R;
                if (i5 >= tVarArr2.length) {
                    break;
                }
                tVarArr2[i5].H(j, H);
                i5++;
            }
            if (H) {
                ((SparseArray) this.H.f17126e).clear();
            }
        }
        return j;
    }

    @Override // nd.q
    public final void n(long j) {
        for (t tVar : this.R) {
            if (tVar.Z && !tVar.C()) {
                int length = tVar.S.length;
                for (int i5 = 0; i5 < length; i5++) {
                    tVar.S[i5].g(j, tVar.f17925k0[i5]);
                }
            }
        }
    }

    @Override // nd.s0
    public final boolean o(long j) {
        if (this.P != null) {
            return this.T.o(j);
        }
        for (t tVar : this.Q) {
            if (!tVar.a0) {
                tVar.o(tVar.f17927m0);
            }
        }
        return false;
    }

    @Override // nd.q
    public final void p(nd.p pVar, long j) {
        boolean z5;
        List list;
        List list2;
        int i5;
        boolean z6;
        boolean z7;
        int i6;
        boolean z8;
        Uri[] uriArr;
        this.N = pVar;
        td.c cVar = this.f17896e;
        cVar.getClass();
        cVar.f18279w.add(this);
        td.l lVar = cVar.G;
        lVar.getClass();
        List list3 = lVar.f18323g;
        List list4 = lVar.f18321e;
        Map map = Collections.EMPTY_MAP;
        boolean isEmpty = list4.isEmpty();
        List list5 = lVar.f18324h;
        int i10 = 0;
        this.O = 0;
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        boolean z10 = this.J;
        if (isEmpty) {
            z5 = z10;
            list = list3;
            list2 = list5;
        } else {
            Format format = lVar.j;
            int size = list4.size();
            int[] iArr = new int[size];
            int i11 = 0;
            int i12 = 0;
            while (true) {
                list2 = list5;
                if (i11 >= list4.size()) {
                    break;
                }
                Format format2 = ((td.k) list4.get(i11)).f18314b;
                int i13 = format2.O;
                String str = format2.F;
                if (i13 > 0 || d0.q(2, str) != null) {
                    iArr[i11] = 2;
                    i12++;
                } else if (d0.q(1, str) != null) {
                    iArr[i11] = 1;
                    i10++;
                } else {
                    iArr[i11] = -1;
                }
                i11++;
                list5 = list2;
            }
            if (i12 > 0) {
                z8 = false;
                z7 = z10;
                i6 = i12;
                z6 = true;
            } else if (i10 < size) {
                z6 = false;
                z7 = z10;
                i6 = size - i10;
                z8 = true;
            } else {
                z6 = false;
                z7 = z10;
                i6 = size;
                z8 = false;
            }
            Uri[] uriArr2 = new Uri[i6];
            boolean z11 = z6;
            Format[] formatArr = new Format[i6];
            int[] iArr2 = new int[i6];
            int i14 = 0;
            int i15 = 0;
            while (i14 < list4.size()) {
                if (z11) {
                    uriArr = uriArr2;
                    if (iArr[i14] != 2) {
                        i14++;
                        uriArr2 = uriArr;
                    }
                } else {
                    uriArr = uriArr2;
                }
                if (!z8 || iArr[i14] != 1) {
                    td.k kVar = (td.k) list4.get(i14);
                    uriArr[i15] = kVar.a;
                    formatArr[i15] = kVar.f18314b;
                    iArr2[i15] = i14;
                    i15++;
                }
                i14++;
                uriArr2 = uriArr;
            }
            Uri[] uriArr3 = uriArr2;
            String str2 = formatArr[0].F;
            int p3 = d0.p(2, str2);
            int p5 = d0.p(1, str2);
            boolean z12 = (p5 == 1 || (p5 == 0 && list3.isEmpty())) && p3 <= 1 && p5 + p3 > 0;
            z5 = z7;
            list = list3;
            t d6 = d("main", (z11 || p5 <= 0) ? 0 : 1, uriArr3, formatArr, lVar.j, lVar.k, map, j);
            arrayList.add(d6);
            arrayList2.add(iArr2);
            if (z5 && z12) {
                ArrayList arrayList3 = new ArrayList();
                if (p3 > 0) {
                    Format[] formatArr2 = new Format[i6];
                    int i16 = 0;
                    while (i16 < i6) {
                        Format format3 = formatArr[i16];
                        String q5 = d0.q(2, format3.F);
                        String d7 = ke.o.d(q5);
                        f0 f0Var = new f0();
                        f0Var.a = format3.f5225d;
                        f0Var.f9670b = format3.f5227e;
                        f0Var.j = format3.H;
                        f0Var.k = d7;
                        f0Var.f9676h = q5;
                        f0Var.f9677i = format3.G;
                        f0Var.f9674f = format3.f5232x;
                        f0Var.f9675g = format3.f5233y;
                        f0Var.f9682p = format3.N;
                        f0Var.f9683q = format3.O;
                        f0Var.f9684r = format3.P;
                        f0Var.f9672d = format3.f5230v;
                        f0Var.f9673e = format3.f5231w;
                        formatArr2[i16] = new Format(f0Var);
                        i16++;
                        formatArr = formatArr;
                    }
                    Format[] formatArr3 = formatArr;
                    arrayList3.add(new z0("main", formatArr2));
                    if (p5 > 0 && (format != null || list.isEmpty())) {
                        arrayList3.add(new z0("main:audio", f(formatArr3[0], format, false)));
                    }
                    List list6 = lVar.k;
                    if (list6 != null) {
                        for (int i17 = 0; i17 < list6.size(); i17++) {
                            arrayList3.add(new z0(k0.d.i(i17, "main:cc:"), (Format) list6.get(i17)));
                        }
                    }
                } else {
                    Format[] formatArr4 = new Format[i6];
                    for (int i18 = 0; i18 < i6; i18++) {
                        formatArr4[i18] = f(formatArr[i18], format, true);
                    }
                    arrayList3.add(new z0("main", formatArr4));
                }
                f0 f0Var2 = new f0();
                f0Var2.a = "ID3";
                f0Var2.k = "application/id3";
                z0 z0Var = new z0("main:id3", new Format(f0Var2));
                arrayList3.add(z0Var);
                d6.F((z0[]) arrayList3.toArray(new z0[0]), arrayList3.indexOf(z0Var));
            }
        }
        ArrayList arrayList4 = new ArrayList(list.size());
        ArrayList arrayList5 = new ArrayList(list.size());
        ArrayList arrayList6 = new ArrayList(list.size());
        HashSet hashSet = new HashSet();
        int i19 = 0;
        while (i19 < list.size()) {
            List list7 = list;
            String str3 = ((td.j) list7.get(i19)).f18313c;
            if (hashSet.add(str3)) {
                arrayList4.clear();
                arrayList5.clear();
                arrayList6.clear();
                boolean z13 = true;
                for (int i20 = 0; i20 < list7.size(); i20++) {
                    String str4 = ((td.j) list7.get(i20)).f18313c;
                    int i21 = d0.a;
                    if (str3.equals(str4)) {
                        td.j jVar = (td.j) list7.get(i20);
                        arrayList6.add(Integer.valueOf(i20));
                        Uri uri = jVar.a;
                        Format format4 = jVar.f18312b;
                        arrayList4.add(uri);
                        arrayList5.add(format4);
                        z13 &= d0.p(1, format4.F) == 1;
                    }
                }
                String concat = "audio:".concat(str3);
                int i22 = d0.a;
                list = list7;
                i5 = i19;
                t d8 = d(concat, 1, (Uri[]) arrayList4.toArray(new Uri[0]), (Format[]) arrayList5.toArray(new Format[0]), null, Collections.EMPTY_LIST, map, j);
                arrayList2.add(ki.b.S(arrayList6));
                arrayList.add(d8);
                if (z5 && z13) {
                    d8.F(new z0[]{new z0(concat, (Format[]) arrayList5.toArray(new Format[0]))}, new int[0]);
                }
            } else {
                i5 = i19;
                list = list7;
            }
            i19 = i5 + 1;
        }
        this.S = arrayList.size();
        for (int i23 = 0; i23 < list2.size(); i23++) {
            td.j jVar2 = (td.j) list2.get(i23);
            StringBuilder r5 = a3.e.r(i23, "subtitle:", ":");
            String str5 = jVar2.f18313c;
            Format format5 = jVar2.f18312b;
            r5.append(str5);
            String sb2 = r5.toString();
            t d10 = d(sb2, 3, new Uri[]{jVar2.a}, new Format[]{format5}, null, Collections.EMPTY_LIST, map, j);
            arrayList2.add(new int[]{i23});
            arrayList.add(d10);
            d10.F(new z0[]{new z0(sb2, format5)}, new int[0]);
        }
        this.Q = (t[]) arrayList.toArray(new t[0]);
        this.O = this.Q.length;
        for (int i24 = 0; i24 < this.S; i24++) {
            this.Q[i24].f17936v.f17880l = true;
        }
        for (t tVar : this.Q) {
            if (!tVar.a0) {
                tVar.o(tVar.f17927m0);
            }
        }
        this.R = this.Q;
    }

    @Override // nd.s0
    public final boolean q() {
        return this.T.q();
    }

    @Override // nd.q
    public final long s() {
        return -9223372036854775807L;
    }

    @Override // nd.q
    public final a1 u() {
        a1 a1Var = this.P;
        a1Var.getClass();
        return a1Var;
    }

    @Override // nd.s0
    public final long w() {
        return this.T.w();
    }
}
