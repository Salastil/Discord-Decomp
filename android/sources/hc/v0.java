package hc;

import android.os.Looper;
import android.util.Pair;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.Tracks;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import com.google.android.exoplayer2.trackselection.MappingTrackSelector$MappedTrackInfo;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.HashSet;
import java.util.IdentityHashMap;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

/* loaded from: classes3.dex */
public final class v0 {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f9917b;

    /* renamed from: c, reason: collision with root package name */
    public final nd.q0[] f9918c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f9919d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f9920e;

    /* renamed from: f, reason: collision with root package name */
    public w0 f9921f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f9922g;

    /* renamed from: h, reason: collision with root package name */
    public final boolean[] f9923h;

    /* renamed from: i, reason: collision with root package name */
    public final e[] f9924i;
    public final ge.r j;
    public final f1 k;

    /* renamed from: l, reason: collision with root package name */
    public v0 f9925l;

    /* renamed from: m, reason: collision with root package name */
    public nd.a1 f9926m;

    /* renamed from: n, reason: collision with root package name */
    public ge.u f9927n;

    /* renamed from: o, reason: collision with root package name */
    public long f9928o;

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r4v8, types: [nd.d] */
    public v0(e[] eVarArr, long j, ge.r rVar, ie.q qVar, f1 f1Var, w0 w0Var, ge.u uVar) {
        this.f9924i = eVarArr;
        this.f9928o = j;
        this.j = rVar;
        this.k = f1Var;
        nd.s sVar = w0Var.a;
        this.f9917b = sVar.a;
        this.f9921f = w0Var;
        this.f9926m = nd.a1.f15063v;
        this.f9927n = uVar;
        this.f9918c = new nd.q0[eVarArr.length];
        this.f9923h = new boolean[eVarArr.length];
        long j5 = w0Var.f9930b;
        long j7 = w0Var.f9932d;
        f1Var.getClass();
        Object obj = sVar.a;
        int i5 = com.google.android.exoplayer2.a.f5301v;
        Pair pair = (Pair) obj;
        Object obj2 = pair.first;
        nd.s b10 = sVar.b(pair.second);
        e1 e1Var = (e1) ((HashMap) f1Var.f9696e).get(obj2);
        e1Var.getClass();
        ((HashSet) f1Var.f9699h).add(e1Var);
        d1 d1Var = (d1) ((HashMap) f1Var.f9697f).get(e1Var);
        if (d1Var != null) {
            d1Var.a.e(d1Var.f9656b);
        }
        e1Var.f9667c.add(b10);
        nd.l b11 = e1Var.a.b(b10, qVar, j5);
        ((IdentityHashMap) f1Var.f9695d).put(b11, e1Var);
        f1Var.d();
        this.a = j7 != -9223372036854775807L ? new nd.d(b11, j7) : b11;
    }

    /* JADX WARN: Type inference failed for: r9v0, types: [java.lang.Object, nd.q] */
    public final long a(ge.u uVar, long j, boolean z5, boolean[] zArr) {
        e[] eVarArr;
        nd.q0[] q0VarArr;
        int i5 = 0;
        while (true) {
            boolean z6 = true;
            if (i5 >= uVar.a) {
                break;
            }
            if (z5 || !uVar.a(this.f9927n, i5)) {
                z6 = false;
            }
            this.f9923h[i5] = z6;
            i5++;
        }
        int i6 = 0;
        while (true) {
            eVarArr = this.f9924i;
            int length = eVarArr.length;
            q0VarArr = this.f9918c;
            if (i6 >= length) {
                break;
            }
            if (eVarArr[i6].f9659e == -2) {
                q0VarArr[i6] = null;
            }
            i6++;
        }
        b();
        this.f9927n = uVar;
        c();
        long e9 = this.a.e(uVar.f9231c, this.f9923h, this.f9918c, zArr, j);
        for (int i10 = 0; i10 < eVarArr.length; i10++) {
            if (eVarArr[i10].f9659e == -2 && this.f9927n.b(i10)) {
                q0VarArr[i10] = new nd.i();
            }
        }
        this.f9920e = false;
        for (int i11 = 0; i11 < q0VarArr.length; i11++) {
            if (q0VarArr[i11] != null) {
                ke.b.k(uVar.b(i11));
                if (eVarArr[i11].f9659e != -2) {
                    this.f9920e = true;
                }
            } else {
                ke.b.k(uVar.f9231c[i11] == null);
            }
        }
        return e9;
    }

    public final void b() {
        if (this.f9925l != null) {
            return;
        }
        int i5 = 0;
        while (true) {
            ge.u uVar = this.f9927n;
            if (i5 >= uVar.a) {
                return;
            }
            boolean b10 = uVar.b(i5);
            ge.p pVar = this.f9927n.f9231c[i5];
            if (b10 && pVar != null) {
                pVar.disable();
            }
            i5++;
        }
    }

    public final void c() {
        if (this.f9925l != null) {
            return;
        }
        int i5 = 0;
        while (true) {
            ge.u uVar = this.f9927n;
            if (i5 >= uVar.a) {
                return;
            }
            boolean b10 = uVar.b(i5);
            ge.p pVar = this.f9927n.f9231c[i5];
            if (b10 && pVar != null) {
                pVar.enable();
            }
            i5++;
        }
    }

    /* JADX WARN: Type inference failed for: r0v5, types: [java.lang.Object, nd.s0] */
    public final long d() {
        if (!this.f9919d) {
            return this.f9921f.f9930b;
        }
        long w5 = this.f9920e ? this.a.w() : Long.MIN_VALUE;
        return w5 == Long.MIN_VALUE ? this.f9921f.f9933e : w5;
    }

    public final long e() {
        return this.f9921f.f9930b + this.f9928o;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, nd.q] */
    /* JADX WARN: Type inference failed for: r0v3, types: [java.lang.Object, nd.q] */
    public final void f() {
        b();
        ?? r02 = this.a;
        try {
            boolean z5 = r02 instanceof nd.d;
            f1 f1Var = this.k;
            if (z5) {
                f1Var.h(((nd.d) r02).f15078d);
            } else {
                f1Var.h(r02);
            }
        } catch (RuntimeException e9) {
            ke.b.s("MediaPeriodHolder", "Period release failed.", e9);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final ge.u g(float f2, Timeline timeline) {
        com.google.android.exoplayer2.trackselection.a aVar;
        int i5;
        boolean z5;
        String str;
        long j;
        boolean z6;
        fi.r0 r0Var;
        int i6;
        boolean z7;
        int i10;
        ge.p bVar;
        Object[] objArr;
        long j5;
        ie.g gVar;
        int[] iArr;
        int i11;
        MappingTrackSelector$MappedTrackInfo mappingTrackSelector$MappedTrackInfo;
        Object obj;
        ge.o oVar;
        int i12;
        int i13;
        nd.z0 z0Var;
        nd.a1 a1Var;
        ge.j jVar;
        int[] iArr2;
        ge.r rVar = this.j;
        e[] eVarArr = this.f9924i;
        nd.a1 a1Var2 = this.f9926m;
        rVar.getClass();
        int i14 = 1;
        int[] iArr3 = new int[eVarArr.length + 1];
        int length = eVarArr.length + 1;
        nd.z0[][] z0VarArr = new nd.z0[length][];
        int[][][] iArr4 = new int[eVarArr.length + 1][][];
        for (int i15 = 0; i15 < length; i15++) {
            int i16 = a1Var2.f15065d;
            z0VarArr[i15] = new nd.z0[i16];
            iArr4[i15] = new int[i16][];
        }
        int length2 = eVarArr.length;
        int[] iArr5 = new int[length2];
        for (int i17 = 0; i17 < length2; i17++) {
            iArr5[i17] = eVarArr[i17].z();
        }
        int i18 = 0;
        while (i18 < a1Var2.f15065d) {
            nd.z0 a = a1Var2.a(i18);
            int i19 = a.f15210i == 5 ? i14 : 0;
            int length3 = eVarArr.length;
            int i20 = i14;
            int i21 = 0;
            int i22 = 0;
            while (i21 < eVarArr.length) {
                e eVar = eVarArr[i21];
                ge.r rVar2 = rVar;
                int i23 = i14;
                int i24 = 0;
                for (int i25 = 0; i25 < a.f15208d; i25++) {
                    i24 = Math.max(i24, eVar.y(a.f15211v[i25]) & 7);
                }
                int i26 = iArr3[i21] == 0 ? i23 : 0;
                if (i24 > i22 || (i24 == i22 && i19 != 0 && i20 == 0 && i26 != 0)) {
                    i22 = i24;
                    i20 = i26;
                    length3 = i21;
                }
                i21++;
                i14 = i23;
                rVar = rVar2;
            }
            ge.r rVar3 = rVar;
            int i27 = i14;
            if (length3 == eVarArr.length) {
                iArr2 = new int[a.f15208d];
            } else {
                e eVar2 = eVarArr[length3];
                int[] iArr6 = new int[a.f15208d];
                for (int i28 = 0; i28 < a.f15208d; i28++) {
                    iArr6[i28] = eVar2.y(a.f15211v[i28]);
                }
                iArr2 = iArr6;
            }
            int i29 = iArr3[length3];
            z0VarArr[length3][i29] = a;
            iArr4[length3][i29] = iArr2;
            iArr3[length3] = i29 + 1;
            i18++;
            i14 = i27;
            rVar = rVar3;
        }
        ge.r rVar4 = rVar;
        int i30 = i14;
        int i31 = 0;
        nd.a1[] a1VarArr = new nd.a1[eVarArr.length];
        String[] strArr = new String[eVarArr.length];
        int[] iArr7 = new int[eVarArr.length];
        for (int i32 = 0; i32 < eVarArr.length; i32++) {
            int i33 = iArr3[i32];
            a1VarArr[i32] = new nd.a1((nd.z0[]) ke.d0.K(i33, z0VarArr[i32]));
            iArr4[i32] = (int[][]) ke.d0.K(i33, iArr4[i32]);
            strArr[i32] = eVarArr[i32].h();
            iArr7[i32] = eVarArr[i32].f9659e;
        }
        MappingTrackSelector$MappedTrackInfo mappingTrackSelector$MappedTrackInfo2 = new MappingTrackSelector$MappedTrackInfo(iArr7, a1VarArr, iArr5, iArr4, new nd.a1((nd.z0[]) ke.d0.K(iArr3[eVarArr.length], z0VarArr[eVarArr.length])));
        DefaultTrackSelector defaultTrackSelector = (DefaultTrackSelector) rVar4;
        synchronized (defaultTrackSelector.f5457d) {
            try {
                aVar = defaultTrackSelector.f5461h;
                i5 = 32;
                if (aVar.f5482g0 && ke.d0.a >= 32 && (jVar = defaultTrackSelector.f5462i) != null) {
                    Looper myLooper = Looper.myLooper();
                    ke.b.l(myLooper);
                    jVar.b(defaultTrackSelector, myLooper);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        int i34 = mappingTrackSelector$MappedTrackInfo2.a;
        ge.o[] oVarArr = new ge.o[i34];
        int i35 = 2;
        Pair g6 = DefaultTrackSelector.g(2, mappingTrackSelector$MappedTrackInfo2, iArr4, new cc.i(11, aVar, iArr5), new com.facebook.react.uimanager.a(8));
        if (g6 != null) {
            oVarArr[((Integer) g6.second).intValue()] = (ge.o) g6.first;
        }
        int i36 = 0;
        while (true) {
            if (i36 >= mappingTrackSelector$MappedTrackInfo2.a) {
                z5 = 0;
                break;
            }
            if (2 == iArr7[i36] && a1VarArr[i36].f15065d > 0) {
                z5 = i30;
                break;
            }
            i36++;
        }
        Pair g10 = DefaultTrackSelector.g(i30, mappingTrackSelector$MappedTrackInfo2, iArr4, new com.google.firebase.messaging.g(defaultTrackSelector, aVar, z5), new com.facebook.react.uimanager.a(9));
        if (g10 != null) {
            oVarArr[((Integer) g10.second).intValue()] = (ge.o) g10.first;
        }
        if (g10 == null) {
            str = null;
        } else {
            ge.o oVar2 = (ge.o) g10.first;
            str = oVar2.a.f15211v[oVar2.f9200b[0]].f5229i;
        }
        int i37 = 3;
        Pair g11 = DefaultTrackSelector.g(3, mappingTrackSelector$MappedTrackInfo2, iArr4, new cc.i(12, aVar, str), new com.facebook.react.uimanager.a(10));
        if (g11 != null) {
            oVarArr[((Integer) g11.second).intValue()] = (ge.o) g11.first;
        }
        int i38 = 0;
        while (i38 < i34) {
            int i39 = iArr7[i38];
            if (i39 == i35 || i39 == 1 || i39 == i37) {
                i12 = i5;
                i13 = i38;
            } else {
                nd.a1 a1Var3 = a1VarArr[i38];
                int[][] iArr8 = iArr4[i38];
                int i40 = i31;
                int i41 = i40;
                i12 = i5;
                nd.z0 z0Var2 = null;
                ge.f fVar = null;
                while (i40 < a1Var3.f15065d) {
                    nd.z0 a10 = a1Var3.a(i40);
                    int[] iArr9 = iArr8[i40];
                    ge.f fVar2 = fVar;
                    int i42 = i41;
                    nd.z0 z0Var3 = z0Var2;
                    int i43 = i31;
                    while (i43 < a10.f15208d) {
                        int i44 = i38;
                        if (DefaultTrackSelector.d(iArr9[i43], aVar.h0)) {
                            z0Var = a10;
                            ge.f fVar3 = new ge.f(a10.f15211v[i43], iArr9[i43]);
                            if (fVar2 != null) {
                                a1Var = a1Var3;
                                if (fi.x.a.c(fVar3.f9180e, fVar2.f9180e).c(fVar3.f9179d, fVar2.f9179d).e() <= 0) {
                                }
                            } else {
                                a1Var = a1Var3;
                            }
                            fVar2 = fVar3;
                            i42 = i43;
                            z0Var3 = z0Var;
                        } else {
                            z0Var = a10;
                            a1Var = a1Var3;
                        }
                        i43++;
                        i38 = i44;
                        a10 = z0Var;
                        a1Var3 = a1Var;
                    }
                    i40++;
                    z0Var2 = z0Var3;
                    i41 = i42;
                    fVar = fVar2;
                }
                i13 = i38;
                oVarArr[i13] = z0Var2 == null ? null : new ge.o(i31, z0Var2, new int[]{i41});
            }
            i38 = i13 + 1;
            i5 = i12;
            i31 = 0;
            i35 = 2;
            i37 = 3;
        }
        int i45 = i5;
        Object obj2 = null;
        int i46 = mappingTrackSelector$MappedTrackInfo2.a;
        nd.a1[] a1VarArr2 = mappingTrackSelector$MappedTrackInfo2.f5464c;
        HashMap hashMap = new HashMap();
        for (int i47 = 0; i47 < i46; i47++) {
            DefaultTrackSelector.a(a1VarArr2[i47], aVar, hashMap);
        }
        DefaultTrackSelector.a(mappingTrackSelector$MappedTrackInfo2.f5467f, aVar, hashMap);
        for (int i48 = 0; i48 < i46; i48++) {
            ge.s sVar = (ge.s) hashMap.get(Integer.valueOf(mappingTrackSelector$MappedTrackInfo2.f5463b[i48]));
            if (sVar != null) {
                nd.z0 z0Var4 = sVar.f9205d;
                fi.e0 e0Var = sVar.f9206e;
                oVarArr[i48] = (e0Var.isEmpty() || a1VarArr2[i48].b(z0Var4) == -1) ? null : new ge.o(0, z0Var4, ki.b.S(e0Var));
            }
        }
        int i49 = mappingTrackSelector$MappedTrackInfo2.a;
        for (int i50 = 0; i50 < i49; i50++) {
            nd.a1 a1Var4 = mappingTrackSelector$MappedTrackInfo2.f5464c[i50];
            Map map = (Map) aVar.f5486l0.get(i50);
            if (map != null && map.containsKey(a1Var4)) {
                Map map2 = (Map) aVar.f5486l0.get(i50);
                ge.h hVar = map2 != null ? (ge.h) map2.get(a1Var4) : null;
                if (hVar != null) {
                    int[] iArr10 = hVar.f9185e;
                    if (iArr10.length != 0) {
                        oVar = new ge.o(hVar.f9186i, a1Var4.a(hVar.f9184d), iArr10);
                        oVarArr[i50] = oVar;
                    }
                }
                oVar = null;
                oVarArr[i50] = oVar;
            }
        }
        for (int i51 = 0; i51 < i34; i51++) {
            int i52 = mappingTrackSelector$MappedTrackInfo2.f5463b[i51];
            if (aVar.f5487m0.get(i51) || aVar.W.contains(Integer.valueOf(i52))) {
                oVarArr[i51] = null;
            }
        }
        qa.s sVar2 = defaultTrackSelector.f5459f;
        ie.g gVar2 = defaultTrackSelector.f9201b;
        ke.b.l(gVar2);
        sVar2.getClass();
        ArrayList arrayList = new ArrayList();
        int i53 = 0;
        while (i53 < oVarArr.length) {
            ge.o oVar3 = oVarArr[i53];
            if (oVar3 == null || oVar3.f9200b.length <= 1) {
                obj = obj2;
                arrayList.add(obj);
            } else {
                fi.c0 c0Var = fi.e0.f8656e;
                fi.b0 b0Var = new fi.b0();
                b0Var.a(new ge.a(0L, 0L));
                arrayList.add(b0Var);
                obj = obj2;
            }
            i53++;
            obj2 = obj;
        }
        int length4 = oVarArr.length;
        long[][] jArr = new long[length4][];
        int i54 = 0;
        while (true) {
            j = -1;
            if (i54 >= oVarArr.length) {
                break;
            }
            ge.o oVar4 = oVarArr[i54];
            if (oVar4 == null) {
                jArr[i54] = new long[0];
                mappingTrackSelector$MappedTrackInfo = mappingTrackSelector$MappedTrackInfo2;
            } else {
                int[] iArr11 = oVar4.f9200b;
                jArr[i54] = new long[iArr11.length];
                int i55 = 0;
                while (i55 < iArr11.length) {
                    MappingTrackSelector$MappedTrackInfo mappingTrackSelector$MappedTrackInfo3 = mappingTrackSelector$MappedTrackInfo2;
                    long j7 = oVar4.a.f15211v[iArr11[i55]].E;
                    long[] jArr2 = jArr[i54];
                    if (j7 == -1) {
                        j7 = 0;
                    }
                    jArr2[i55] = j7;
                    i55++;
                    mappingTrackSelector$MappedTrackInfo2 = mappingTrackSelector$MappedTrackInfo3;
                }
                mappingTrackSelector$MappedTrackInfo = mappingTrackSelector$MappedTrackInfo2;
                Arrays.sort(jArr[i54]);
            }
            i54++;
            mappingTrackSelector$MappedTrackInfo2 = mappingTrackSelector$MappedTrackInfo;
        }
        MappingTrackSelector$MappedTrackInfo mappingTrackSelector$MappedTrackInfo4 = mappingTrackSelector$MappedTrackInfo2;
        int[] iArr12 = new int[length4];
        long[] jArr3 = new long[length4];
        for (int i56 = 0; i56 < length4; i56++) {
            long[] jArr4 = jArr[i56];
            jArr3[i56] = jArr4.length == 0 ? 0L : jArr4[0];
        }
        ge.b.t(arrayList, jArr3);
        fi.p.c(2, "expectedValuesPerKey");
        TreeMap treeMap = new TreeMap(fi.p0.f8693e);
        fi.m0 m0Var = new fi.m0();
        fi.n0 n0Var = new fi.n0();
        if (!treeMap.isEmpty()) {
            throw new IllegalArgumentException();
        }
        n0Var.f8687v = treeMap;
        n0Var.f8689x = m0Var;
        int i57 = 0;
        while (i57 < length4) {
            long[] jArr5 = jArr[i57];
            if (jArr5.length <= 1) {
                gVar = gVar2;
                i11 = length4;
                j5 = j;
                iArr = iArr12;
            } else {
                int length5 = jArr5.length;
                double[] dArr = new double[length5];
                j5 = j;
                int i58 = 0;
                while (true) {
                    long[] jArr6 = jArr[i57];
                    gVar = gVar2;
                    double d6 = 0.0d;
                    if (i58 >= jArr6.length) {
                        break;
                    }
                    int i59 = length4;
                    int[] iArr13 = iArr12;
                    long j10 = jArr6[i58];
                    if (j10 != j5) {
                        d6 = Math.log(j10);
                    }
                    dArr[i58] = d6;
                    i58++;
                    length4 = i59;
                    iArr12 = iArr13;
                    gVar2 = gVar;
                }
                int i60 = length4;
                iArr = iArr12;
                int i61 = length5 - 1;
                double d7 = dArr[i61] - dArr[0];
                int i62 = 0;
                while (i62 < i61) {
                    double d8 = dArr[i62];
                    i62++;
                    Double valueOf = Double.valueOf(d7 == 0.0d ? 1.0d : (((d8 + dArr[i62]) * 0.5d) - dArr[0]) / d7);
                    int i63 = i60;
                    Integer valueOf2 = Integer.valueOf(i57);
                    double d10 = d7;
                    Map map3 = n0Var.f8687v;
                    Collection collection = (Collection) map3.get(valueOf);
                    if (collection == null) {
                        List list = (List) n0Var.f8689x.get();
                        if (!list.add(valueOf2)) {
                            throw new AssertionError("New Collection violated the Collection spec");
                        }
                        n0Var.f8688w++;
                        map3.put(valueOf, list);
                    } else if (collection.add(valueOf2)) {
                        n0Var.f8688w++;
                    }
                    i60 = i63;
                    d7 = d10;
                }
                i11 = i60;
            }
            i57++;
            iArr12 = iArr;
            j = j5;
            length4 = i11;
            gVar2 = gVar;
        }
        ie.g gVar3 = gVar2;
        int[] iArr14 = iArr12;
        fi.n nVar = n0Var.f8691e;
        if (nVar == null) {
            nVar = new fi.n(0, n0Var);
            n0Var.f8691e = nVar;
        }
        fi.e0 k = fi.e0.k(nVar);
        for (int i64 = 0; i64 < k.size(); i64++) {
            int intValue = ((Integer) k.get(i64)).intValue();
            int i65 = iArr14[intValue] + 1;
            iArr14[intValue] = i65;
            jArr3[intValue] = jArr[intValue][i65];
            ge.b.t(arrayList, jArr3);
        }
        for (int i66 = 0; i66 < oVarArr.length; i66++) {
            if (arrayList.get(i66) != null) {
                jArr3[i66] = jArr3[i66] * 2;
            }
        }
        ge.b.t(arrayList, jArr3);
        int i67 = 4;
        fi.p.c(4, "initialCapacity");
        Object[] objArr2 = new Object[4];
        int i68 = 0;
        int i69 = 0;
        boolean z8 = false;
        while (i68 < arrayList.size()) {
            fi.b0 b0Var2 = (fi.b0) arrayList.get(i68);
            fi.r0 f10 = b0Var2 == null ? fi.r0.f8704w : b0Var2.f();
            f10.getClass();
            int i70 = i69 + 1;
            if (objArr2.length < i70) {
                objArr = Arrays.copyOf(objArr2, fi.y.d(objArr2.length, i70));
            } else if (z8) {
                objArr = (Object[]) objArr2.clone();
            } else {
                objArr2[i69] = f10;
                i68++;
                i69++;
            }
            objArr2 = objArr;
            z8 = false;
            objArr2[i69] = f10;
            i68++;
            i69++;
        }
        fi.r0 j11 = fi.e0.j(i69, objArr2);
        ge.p[] pVarArr = new ge.p[oVarArr.length];
        for (int i71 = 0; i71 < oVarArr.length; i71++) {
            ge.o oVar5 = oVarArr[i71];
            if (oVar5 != null) {
                int[] iArr15 = oVar5.f9200b;
                if (iArr15.length != 0) {
                    if (iArr15.length == 1) {
                        bVar = new ge.q(oVar5.a, new int[]{iArr15[0]});
                    } else {
                        long j12 = 25000;
                        bVar = new ge.b(oVar5.a, iArr15, gVar3, 10000, j12, j12, (fi.e0) j11.get(i71));
                    }
                    pVarArr[i71] = bVar;
                }
            }
        }
        o1[] o1VarArr = new o1[i34];
        int i72 = 0;
        while (i72 < i34) {
            MappingTrackSelector$MappedTrackInfo mappingTrackSelector$MappedTrackInfo5 = mappingTrackSelector$MappedTrackInfo4;
            o1VarArr[i72] = (aVar.f5487m0.get(i72) || aVar.W.contains(Integer.valueOf(mappingTrackSelector$MappedTrackInfo5.f5463b[i72])) || (mappingTrackSelector$MappedTrackInfo5.f5463b[i72] != -2 && pVarArr[i72] == null)) ? null : o1.f9830b;
            i72++;
            mappingTrackSelector$MappedTrackInfo4 = mappingTrackSelector$MappedTrackInfo5;
        }
        MappingTrackSelector$MappedTrackInfo mappingTrackSelector$MappedTrackInfo6 = mappingTrackSelector$MappedTrackInfo4;
        if (aVar.f5483i0) {
            int i73 = -1;
            int i74 = -1;
            int i75 = 0;
            while (i75 < mappingTrackSelector$MappedTrackInfo6.a) {
                int i76 = mappingTrackSelector$MappedTrackInfo6.f5463b[i75];
                ge.p pVar = pVarArr[i75];
                if ((i76 == 1 || i76 == 2) && pVar != null) {
                    int[][] iArr16 = iArr4[i75];
                    int b10 = mappingTrackSelector$MappedTrackInfo6.f5464c[i75].b(pVar.b());
                    int i77 = 0;
                    while (i77 < pVar.length()) {
                        i10 = i45;
                        if ((iArr16[b10][pVar.h(i77)] & 32) == i10) {
                            i77++;
                            i45 = i10;
                        }
                    }
                    i10 = i45;
                    if (i76 == 1) {
                        i6 = -1;
                        if (i74 != -1) {
                            z7 = false;
                            break;
                        }
                        i74 = i75;
                        i75++;
                        i45 = i10;
                    } else {
                        i6 = -1;
                        if (i73 != -1) {
                            z7 = false;
                            break;
                        }
                        i73 = i75;
                        i75++;
                        i45 = i10;
                    }
                } else {
                    i10 = i45;
                }
                i75++;
                i45 = i10;
            }
            i6 = -1;
            z7 = true;
            if (((i74 == i6 || i73 == i6) ? false : true) & z7) {
                o1 o1Var = new o1(true);
                o1VarArr[i74] = o1Var;
                o1VarArr[i73] = o1Var;
            }
        }
        Pair create = Pair.create(o1VarArr, pVarArr);
        ge.p[] pVarArr2 = (ge.p[]) create.second;
        List[] listArr = new List[pVarArr2.length];
        for (int i78 = 0; i78 < pVarArr2.length; i78++) {
            ge.p pVar2 = pVarArr2[i78];
            if (pVar2 != null) {
                r0Var = fi.e0.s(pVar2);
            } else {
                fi.c0 c0Var2 = fi.e0.f8656e;
                r0Var = fi.r0.f8704w;
            }
            listArr[i78] = r0Var;
        }
        fi.b0 b0Var3 = new fi.b0();
        int i79 = 0;
        while (true) {
            int i80 = mappingTrackSelector$MappedTrackInfo6.a;
            nd.a1[] a1VarArr3 = mappingTrackSelector$MappedTrackInfo6.f5464c;
            if (i79 >= i80) {
                break;
            }
            nd.a1 a1Var5 = a1VarArr3[i79];
            List list2 = listArr[i79];
            int i81 = 0;
            while (i81 < a1Var5.f15065d) {
                nd.z0 a11 = a1Var5.a(i81);
                int i82 = a1VarArr3[i79].a(i81).f15208d;
                int[] iArr17 = new int[i82];
                int i83 = 0;
                for (int i84 = 0; i84 < i82; i84++) {
                    if ((mappingTrackSelector$MappedTrackInfo6.f5466e[i79][i81][i84] & 7) == i67) {
                        iArr17[i83] = i84;
                        i83++;
                    }
                }
                int[] copyOf = Arrays.copyOf(iArr17, i83);
                List[] listArr2 = listArr;
                int i85 = 16;
                String str2 = null;
                int i86 = 0;
                boolean z10 = false;
                int i87 = 0;
                while (i86 < copyOf.length) {
                    String str3 = a1VarArr3[i79].a(i81).f15211v[copyOf[i86]].I;
                    int i88 = i87 + 1;
                    if (i87 == 0) {
                        str2 = str3;
                    } else {
                        z10 = (!ke.d0.a(str2, str3)) | z10;
                    }
                    i85 = Math.min(i85, mappingTrackSelector$MappedTrackInfo6.f5466e[i79][i81][i86] & 24);
                    i86++;
                    i87 = i88;
                }
                if (z10) {
                    i85 = Math.min(i85, mappingTrackSelector$MappedTrackInfo6.f5465d[i79]);
                }
                boolean z11 = i85 != 0;
                int i89 = a11.f15208d;
                int[] iArr18 = new int[i89];
                boolean[] zArr = new boolean[i89];
                for (int i90 = 0; i90 < a11.f15208d; i90++) {
                    iArr18[i90] = mappingTrackSelector$MappedTrackInfo6.f5466e[i79][i81][i90] & 7;
                    int i91 = 0;
                    while (true) {
                        if (i91 >= list2.size()) {
                            z6 = false;
                            break;
                        }
                        ge.p pVar3 = (ge.p) list2.get(i91);
                        if (pVar3.b().equals(a11) && pVar3.s(i90) != -1) {
                            z6 = true;
                            break;
                        }
                        i91++;
                    }
                    zArr[i90] = z6;
                }
                b0Var3.a(new t1(a11, z11, iArr18, zArr));
                i81++;
                listArr = listArr2;
                i67 = 4;
            }
            i79++;
            i67 = 4;
        }
        nd.a1 a1Var6 = mappingTrackSelector$MappedTrackInfo6.f5467f;
        for (int i92 = 0; i92 < a1Var6.f15065d; i92++) {
            nd.z0 a12 = a1Var6.a(i92);
            int[] iArr19 = new int[a12.f15208d];
            Arrays.fill(iArr19, 0);
            b0Var3.a(new t1(a12, false, iArr19, new boolean[a12.f15208d]));
        }
        ge.u uVar = new ge.u((o1[]) create.first, (ge.p[]) create.second, new Tracks(b0Var3.f()), mappingTrackSelector$MappedTrackInfo6);
        for (ge.p pVar4 : uVar.f9231c) {
            if (pVar4 != null) {
                pVar4.o(f2);
            }
        }
        return uVar;
    }

    public final void h() {
        Object obj = this.a;
        if (obj instanceof nd.d) {
            long j = this.f9921f.f9932d;
            if (j == -9223372036854775807L) {
                j = Long.MIN_VALUE;
            }
            ((nd.d) obj).f15082w = j;
        }
    }
}
