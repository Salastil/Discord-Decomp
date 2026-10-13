package qd;

import android.util.Pair;
import android.util.SparseArray;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.upstream.DataSource;
import hc.f0;
import hc.p1;
import ic.c0;
import ie.l0;
import ie.u0;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.IdentityHashMap;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import ke.d0;
import nc.r;
import nd.a1;
import nd.p0;
import nd.q0;
import nd.r0;
import nd.s0;
import nd.z0;

/* loaded from: classes3.dex */
public final class c implements nd.q, r0, pd.g {
    public static final Pattern U = Pattern.compile("CC([1-4])=(.+)");
    public static final Pattern V = Pattern.compile("([1-4])=lang:(\\w+)(,.+)?");
    public final l0 E;
    public final ie.q F;
    public final a1 G;
    public final b[] H;
    public final j8.b I;
    public final q J;
    public final a1.d L;
    public final nc.n M;
    public nd.p N;
    public u4.c Q;
    public rd.c R;
    public int S;
    public List T;

    /* renamed from: d, reason: collision with root package name */
    public final int f16815d;

    /* renamed from: e, reason: collision with root package name */
    public final a f16816e;

    /* renamed from: i, reason: collision with root package name */
    public final u0 f16817i;

    /* renamed from: v, reason: collision with root package name */
    public final r f16818v;

    /* renamed from: w, reason: collision with root package name */
    public final p9.d f16819w;

    /* renamed from: x, reason: collision with root package name */
    public final e4.i f16820x;

    /* renamed from: y, reason: collision with root package name */
    public final long f16821y;
    public pd.h[] O = new pd.h[0];
    public n[] P = new n[0];
    public final IdentityHashMap K = new IdentityHashMap();

    public c(int i5, rd.c cVar, e4.i iVar, int i6, j jVar, u0 u0Var, r rVar, nc.n nVar, p9.d dVar, a1.d dVar2, long j, l0 l0Var, ie.q qVar, j8.b bVar, f fVar, c0 c0Var) {
        int i10;
        int i11;
        int[][] iArr;
        boolean[] zArr;
        Format[] formatArr;
        rd.f b10;
        Integer num;
        this.f16815d = i5;
        this.R = cVar;
        this.f16820x = iVar;
        this.S = i6;
        this.f16816e = jVar;
        this.f16817i = u0Var;
        this.f16818v = rVar;
        this.M = nVar;
        this.f16819w = dVar;
        this.L = dVar2;
        this.f16821y = j;
        this.E = l0Var;
        this.F = qVar;
        this.I = bVar;
        this.J = new q(cVar, fVar, qVar);
        int i12 = 0;
        pd.h[] hVarArr = this.O;
        bVar.getClass();
        this.Q = new u4.c(hVarArr);
        rd.h b11 = cVar.b(i6);
        List list = b11.f17243d;
        this.T = list;
        List list2 = b11.f17242c;
        int size = list2.size();
        HashMap hashMap = new HashMap(fi.p.a(size));
        ArrayList arrayList = new ArrayList(size);
        SparseArray sparseArray = new SparseArray(size);
        for (int i13 = 0; i13 < size; i13++) {
            hashMap.put(Long.valueOf(((rd.a) list2.get(i13)).a), Integer.valueOf(i13));
            ArrayList arrayList2 = new ArrayList();
            arrayList2.add(Integer.valueOf(i13));
            arrayList.add(arrayList2);
            sparseArray.put(i13, arrayList2);
        }
        for (int i14 = 0; i14 < size; i14++) {
            rd.a aVar = (rd.a) list2.get(i14);
            List list3 = aVar.f17209e;
            List list4 = aVar.f17210f;
            rd.f b12 = b("http://dashif.org/guidelines/trickmode", list3);
            b12 = b12 == null ? b("http://dashif.org/guidelines/trickmode", list4) : b12;
            int intValue = (b12 == null || (num = (Integer) hashMap.get(Long.valueOf(Long.parseLong(b12.f17236b)))) == null) ? i14 : num.intValue();
            if (intValue == i14 && (b10 = b("urn:mpeg:dash:adaptation-set-switching:2016", list4)) != null) {
                String str = b10.f17236b;
                int i15 = d0.a;
                for (String str2 : str.split(",", -1)) {
                    Integer num2 = (Integer) hashMap.get(Long.valueOf(Long.parseLong(str2)));
                    if (num2 != null) {
                        intValue = Math.min(intValue, num2.intValue());
                    }
                }
            }
            if (intValue != i14) {
                List list5 = (List) sparseArray.get(i14);
                List list6 = (List) sparseArray.get(intValue);
                list6.addAll(list5);
                sparseArray.put(i14, list6);
                arrayList.remove(list5);
            }
        }
        int size2 = arrayList.size();
        int[][] iArr2 = new int[size2][];
        for (int i16 = 0; i16 < size2; i16++) {
            int[] S = ki.b.S((Collection) arrayList.get(i16));
            iArr2[i16] = S;
            Arrays.sort(S);
        }
        boolean[] zArr2 = new boolean[size2];
        Format[][] formatArr2 = new Format[size2][];
        int i17 = 0;
        int i18 = 0;
        while (i17 < size2) {
            int[] iArr3 = iArr2[i17];
            int length = iArr3.length;
            int i19 = i12;
            while (true) {
                if (i19 >= length) {
                    break;
                }
                List list7 = ((rd.a) list2.get(iArr3[i19])).f17207c;
                for (int i20 = i12; i20 < list7.size(); i20++) {
                    if (!((rd.m) list7.get(i20)).f17254v.isEmpty()) {
                        zArr2[i17] = true;
                        i18++;
                        break;
                    }
                }
                i19++;
                i12 = 0;
            }
            int[] iArr4 = iArr2[i17];
            int length2 = iArr4.length;
            int i21 = 0;
            while (true) {
                if (i21 >= length2) {
                    iArr = iArr2;
                    zArr = zArr2;
                    formatArr = new Format[0];
                    break;
                }
                int i22 = iArr4[i21];
                rd.a aVar2 = (rd.a) list2.get(i22);
                List list8 = ((rd.a) list2.get(i22)).f17208d;
                int[] iArr5 = iArr4;
                int i23 = 0;
                while (i23 < list8.size()) {
                    rd.f fVar2 = (rd.f) list8.get(i23);
                    iArr = iArr2;
                    zArr = zArr2;
                    if ("urn:scte:dash:cc:cea-608:2015".equals(fVar2.a)) {
                        f0 f0Var = new f0();
                        f0Var.k = "application/cea-608";
                        f0Var.a = a3.e.m(new StringBuilder(), aVar2.a, ":cea608");
                        formatArr = g(fVar2, U, new Format(f0Var));
                        break;
                    }
                    if ("urn:scte:dash:cc:cea-708:2015".equals(fVar2.a)) {
                        f0 f0Var2 = new f0();
                        f0Var2.k = "application/cea-708";
                        f0Var2.a = a3.e.m(new StringBuilder(), aVar2.a, ":cea708");
                        formatArr = g(fVar2, V, new Format(f0Var2));
                        break;
                    }
                    i23++;
                    iArr2 = iArr;
                    zArr2 = zArr;
                }
                i21++;
                iArr4 = iArr5;
            }
            formatArr2[i17] = formatArr;
            if (formatArr.length != 0) {
                i18++;
            }
            i17++;
            iArr2 = iArr;
            zArr2 = zArr;
            i12 = 0;
        }
        int[][] iArr6 = iArr2;
        boolean[] zArr3 = zArr2;
        int size3 = list.size() + i18 + size2;
        z0[] z0VarArr = new z0[size3];
        b[] bVarArr = new b[size3];
        int i24 = 0;
        int i25 = 0;
        while (i24 < size2) {
            int[] iArr7 = iArr6[i24];
            ArrayList arrayList3 = new ArrayList();
            for (int i26 : iArr7) {
                arrayList3.addAll(((rd.a) list2.get(i26)).f17207c);
            }
            int size4 = arrayList3.size();
            Format[] formatArr3 = new Format[size4];
            int i27 = 0;
            while (i27 < size4) {
                int i28 = size2;
                Format format = ((rd.m) arrayList3.get(i27)).f17251d;
                Format[][] formatArr4 = formatArr2;
                int b13 = rVar.b(format);
                f0 a = format.a();
                a.F = b13;
                formatArr3[i27] = new Format(a);
                i27++;
                size2 = i28;
                formatArr2 = formatArr4;
            }
            int i29 = size2;
            Format[][] formatArr5 = formatArr2;
            rd.a aVar3 = (rd.a) list2.get(iArr7[0]);
            long j5 = aVar3.a;
            String l6 = j5 != -1 ? Long.toString(j5) : k0.d.i(i24, "unset:");
            int i30 = i25 + 1;
            if (zArr3[i24]) {
                i10 = i25 + 2;
            } else {
                i10 = i30;
                i30 = -1;
            }
            if (formatArr5[i24].length != 0) {
                i11 = i10 + 1;
            } else {
                i11 = i10;
                i10 = -1;
            }
            List list9 = list2;
            z0VarArr[i25] = new z0(l6, formatArr3);
            int i31 = i25;
            bVarArr[i31] = new b(aVar3.f17206b, 0, iArr7, i31, i30, i10, -1);
            int i32 = -1;
            if (i30 != -1) {
                String k = k0.d.k(l6, ":emsg");
                f0 f0Var3 = new f0();
                f0Var3.a = k;
                f0Var3.k = "application/x-emsg";
                z0VarArr[i30] = new z0(k, new Format(f0Var3));
                bVarArr[i30] = new b(5, 1, iArr7, i31, -1, -1, -1);
                i32 = -1;
            }
            if (i10 != i32) {
                z0VarArr[i10] = new z0(k0.d.k(l6, ":cc"), formatArr5[i24]);
                bVarArr[i10] = new b(3, 1, iArr7, i31, -1, -1, -1);
            }
            i24++;
            size2 = i29;
            i25 = i11;
            formatArr2 = formatArr5;
            list2 = list9;
        }
        int i33 = 0;
        while (i33 < list.size()) {
            rd.g gVar = (rd.g) list.get(i33);
            f0 f0Var4 = new f0();
            f0Var4.a = gVar.a();
            f0Var4.k = "application/x-emsg";
            z0VarArr[i25] = new z0(gVar.a() + ":" + i33, new Format(f0Var4));
            bVarArr[i25] = new b(5, 2, new int[0], -1, -1, -1, i33);
            i33++;
            i25++;
        }
        Pair create = Pair.create(new a1(z0VarArr), bVarArr);
        this.G = (a1) create.first;
        this.H = (b[]) create.second;
    }

    public static rd.f b(String str, List list) {
        for (int i5 = 0; i5 < list.size(); i5++) {
            rd.f fVar = (rd.f) list.get(i5);
            if (str.equals(fVar.a)) {
                return fVar;
            }
        }
        return null;
    }

    public static Format[] g(rd.f fVar, Pattern pattern, Format format) {
        String str = fVar.f17236b;
        if (str == null) {
            return new Format[]{format};
        }
        int i5 = d0.a;
        String[] split = str.split(";", -1);
        Format[] formatArr = new Format[split.length];
        for (int i6 = 0; i6 < split.length; i6++) {
            Matcher matcher = pattern.matcher(split[i6]);
            if (!matcher.matches()) {
                return new Format[]{format};
            }
            int parseInt = Integer.parseInt(matcher.group(1));
            f0 a = format.a();
            a.a = format.f5225d + ":" + parseInt;
            a.C = parseInt;
            a.f9671c = matcher.group(2);
            formatArr[i6] = new Format(a);
        }
        return formatArr;
    }

    @Override // nd.s0
    public final void A(long j) {
        this.Q.A(j);
    }

    @Override // nd.q
    public final long a(long j, p1 p1Var) {
        for (pd.h hVar : this.O) {
            if (hVar.f16372d == 2) {
                return hVar.f16376w.a(j, p1Var);
            }
        }
        return j;
    }

    @Override // nd.r0
    public final void c(s0 s0Var) {
        this.N.c(this);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r6v11 */
    /* JADX WARN: Type inference failed for: r6v4 */
    /* JADX WARN: Type inference failed for: r6v5, types: [int] */
    @Override // nd.q
    public final long e(ge.p[] pVarArr, boolean[] zArr, q0[] q0VarArr, boolean[] zArr2, long j) {
        int i5;
        boolean z5;
        int[] iArr;
        int i6;
        int[] iArr2;
        boolean z6;
        ?? r62;
        z0 z0Var;
        z0 z0Var2;
        int i10;
        int i11;
        p pVar;
        boolean z7;
        int[] iArr3 = new int[pVarArr.length];
        int i12 = 0;
        while (true) {
            i5 = -1;
            if (i12 >= pVarArr.length) {
                break;
            }
            ge.p pVar2 = pVarArr[i12];
            if (pVar2 != null) {
                iArr3[i12] = this.G.b(pVar2.b());
            } else {
                iArr3[i12] = -1;
            }
            i12++;
        }
        for (int i13 = 0; i13 < pVarArr.length; i13++) {
            if (pVarArr[i13] == null || !zArr[i13]) {
                q0 q0Var = q0VarArr[i13];
                if (q0Var instanceof pd.h) {
                    ((pd.h) q0Var).y(this);
                } else if (q0Var instanceof pd.f) {
                    pd.f fVar = (pd.f) q0Var;
                    pd.h hVar = fVar.f16371w;
                    boolean[] zArr3 = hVar.f16375v;
                    int i14 = fVar.f16369i;
                    ke.b.k(zArr3[i14]);
                    hVar.f16375v[i14] = false;
                }
                q0VarArr[i13] = null;
            }
        }
        int i15 = 0;
        while (true) {
            if (i15 >= pVarArr.length) {
                break;
            }
            q0 q0Var2 = q0VarArr[i15];
            if ((q0Var2 instanceof nd.i) || (q0Var2 instanceof pd.f)) {
                int f2 = f(i15, iArr3);
                if (f2 == -1) {
                    z7 = q0VarArr[i15] instanceof nd.i;
                } else {
                    q0 q0Var3 = q0VarArr[i15];
                    z7 = (q0Var3 instanceof pd.f) && ((pd.f) q0Var3).f16367d == q0VarArr[f2];
                }
                if (!z7) {
                    q0 q0Var4 = q0VarArr[i15];
                    if (q0Var4 instanceof pd.f) {
                        pd.f fVar2 = (pd.f) q0Var4;
                        pd.h hVar2 = fVar2.f16371w;
                        boolean[] zArr4 = hVar2.f16375v;
                        int i16 = fVar2.f16369i;
                        ke.b.k(zArr4[i16]);
                        hVar2.f16375v[i16] = false;
                    }
                    q0VarArr[i15] = null;
                }
            }
            i15++;
        }
        int i17 = 0;
        while (i17 < pVarArr.length) {
            ge.p pVar3 = pVarArr[i17];
            if (pVar3 == null) {
                i6 = i17;
                iArr2 = iArr3;
                z6 = z5;
            } else {
                q0 q0Var5 = q0VarArr[i17];
                if (q0Var5 == null) {
                    zArr2[i17] = z5;
                    b bVar = this.H[iArr3[i17]];
                    int i18 = bVar.f16810c;
                    if (i18 == 0) {
                        int i19 = bVar.f16813f;
                        boolean z8 = i19 != i5 ? z5 : false;
                        if (z8) {
                            z0Var = this.G.a(i19);
                            r62 = z5;
                        } else {
                            r62 = 0;
                            z0Var = null;
                        }
                        int i20 = bVar.f16814g;
                        boolean z10 = i20 != i5 ? z5 : false;
                        if (z10) {
                            z0Var2 = this.G.a(i20);
                            i10 = r62 + z0Var2.f15208d;
                        } else {
                            z0Var2 = null;
                            i10 = r62;
                        }
                        boolean z11 = z5;
                        Format[] formatArr = new Format[i10];
                        int[] iArr4 = new int[i10];
                        if (z8) {
                            formatArr[0] = z0Var.f15211v[0];
                            iArr4[0] = 5;
                            i11 = z11 ? 1 : 0;
                        } else {
                            i11 = 0;
                        }
                        ArrayList arrayList = new ArrayList();
                        if (z10) {
                            for (int i21 = 0; i21 < z0Var2.f15208d; i21++) {
                                Format format = z0Var2.f15211v[i21];
                                formatArr[i11] = format;
                                iArr4[i11] = 3;
                                arrayList.add(format);
                                i11 += z11 ? 1 : 0;
                            }
                        }
                        if (this.R.f17216d && z8) {
                            q qVar = this.J;
                            pVar = new p(qVar, qVar.f16873d);
                        } else {
                            pVar = null;
                        }
                        a aVar = this.f16816e;
                        l0 l0Var = this.E;
                        rd.c cVar = this.R;
                        e4.i iVar = this.f16820x;
                        int i22 = this.S;
                        int[] iArr5 = bVar.a;
                        int i23 = bVar.f16809b;
                        long j5 = this.f16821y;
                        i6 = i17;
                        u0 u0Var = this.f16817i;
                        DataSource createDataSource = ((j) aVar).a.createDataSource();
                        if (u0Var != null) {
                            createDataSource.n(u0Var);
                        }
                        p pVar4 = pVar;
                        iArr2 = iArr3;
                        z6 = true;
                        pd.h hVar3 = new pd.h(bVar.f16809b, iArr4, formatArr, new m(l0Var, cVar, iVar, i22, iArr5, pVar3, i23, createDataSource, j5, z8, arrayList, pVar), this, this.F, j, this.f16818v, this.M, this.f16819w, this.L);
                        synchronized (this) {
                            this.K.put(hVar3, pVar4);
                        }
                        q0VarArr[i6] = hVar3;
                    } else {
                        i6 = i17;
                        iArr2 = iArr3;
                        z6 = z5;
                        if (i18 == 2) {
                            q0VarArr[i6] = new n((rd.g) this.T.get(bVar.f16811d), pVar3.b().f15211v[0], this.R.f17216d);
                        }
                    }
                } else {
                    i6 = i17;
                    iArr2 = iArr3;
                    z6 = z5;
                    if (q0Var5 instanceof pd.h) {
                        ((m) ((pd.h) q0Var5).f16376w).f16858i = pVar3;
                    }
                }
            }
            i17 = i6 + 1;
            z5 = z6;
            iArr3 = iArr2;
            i5 = -1;
        }
        int[] iArr6 = iArr3;
        boolean z12 = z5;
        int i24 = 0;
        while (i24 < pVarArr.length) {
            if (q0VarArr[i24] == null && pVarArr[i24] != null) {
                b bVar2 = this.H[iArr6[i24]];
                if (bVar2.f16810c == z12) {
                    iArr = iArr6;
                    int f10 = f(i24, iArr);
                    if (f10 != -1) {
                        pd.h hVar4 = (pd.h) q0VarArr[f10];
                        int i25 = bVar2.f16809b;
                        boolean[] zArr5 = hVar4.f16375v;
                        p0[] p0VarArr = hVar4.K;
                        for (int i26 = 0; i26 < p0VarArr.length; i26++) {
                            if (hVar4.f16373e[i26] == i25) {
                                ke.b.k(zArr5[i26] ^ z12);
                                zArr5[i26] = z12;
                                p0VarArr[i26].y(j, z12);
                                q0VarArr[i24] = new pd.f(hVar4, hVar4, p0VarArr[i26], i26);
                            }
                        }
                        throw new IllegalStateException();
                    }
                    q0VarArr[i24] = new nd.i();
                    i24++;
                    iArr6 = iArr;
                }
            }
            iArr = iArr6;
            i24++;
            iArr6 = iArr;
        }
        ArrayList arrayList2 = new ArrayList();
        ArrayList arrayList3 = new ArrayList();
        for (q0 q0Var6 : q0VarArr) {
            if (q0Var6 instanceof pd.h) {
                arrayList2.add((pd.h) q0Var6);
            } else if (q0Var6 instanceof n) {
                arrayList3.add((n) q0Var6);
            }
        }
        pd.h[] hVarArr = new pd.h[arrayList2.size()];
        this.O = hVarArr;
        arrayList2.toArray(hVarArr);
        n[] nVarArr = new n[arrayList3.size()];
        this.P = nVarArr;
        arrayList3.toArray(nVarArr);
        j8.b bVar3 = this.I;
        pd.h[] hVarArr2 = this.O;
        bVar3.getClass();
        this.Q = new u4.c(hVarArr2);
        return j;
    }

    public final int f(int i5, int[] iArr) {
        int i6 = iArr[i5];
        if (i6 != -1) {
            b[] bVarArr = this.H;
            int i10 = bVarArr[i6].f16812e;
            for (int i11 = 0; i11 < iArr.length; i11++) {
                int i12 = iArr[i11];
                if (i12 == i10 && bVarArr[i12].f16810c == 0) {
                    return i11;
                }
            }
        }
        return -1;
    }

    @Override // nd.s0
    public final long h() {
        return this.Q.h();
    }

    @Override // nd.q
    public final void j() {
        this.E.b();
    }

    @Override // nd.q
    public final long m(long j) {
        for (pd.h hVar : this.O) {
            hVar.B(j);
        }
        for (n nVar : this.P) {
            int b10 = d0.b(nVar.f16863i, j, true);
            nVar.f16867y = b10;
            nVar.E = (nVar.f16864v && b10 == nVar.f16863i.length) ? j : -9223372036854775807L;
        }
        return j;
    }

    @Override // nd.q
    public final void n(long j) {
        for (pd.h hVar : this.O) {
            hVar.n(j);
        }
    }

    @Override // nd.s0
    public final boolean o(long j) {
        return this.Q.o(j);
    }

    @Override // nd.q
    public final void p(nd.p pVar, long j) {
        this.N = pVar;
        pVar.d(this);
    }

    @Override // nd.s0
    public final boolean q() {
        return this.Q.q();
    }

    @Override // nd.q
    public final long s() {
        return -9223372036854775807L;
    }

    @Override // nd.q
    public final a1 u() {
        return this.G;
    }

    @Override // nd.s0
    public final long w() {
        return this.Q.w();
    }
}
