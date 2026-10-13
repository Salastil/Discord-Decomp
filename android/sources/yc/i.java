package yc;

import android.util.Pair;
import android.util.SparseArray;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import hc.f0;
import hc.g1;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.UUID;
import ke.b0;
import ke.d0;
import ke.w;
import kotlin.jvm.internal.LongCompanionObject;
import qc.s;
import qc.v;

/* loaded from: classes3.dex */
public final class i implements qc.j {
    public static final byte[] I = {-94, 57, 79, 82, 90, -101, 79, 20, -94, 68, 108, 66, 124, 100, -115, -12};
    public static final Format J;
    public int A;
    public int B;
    public int C;
    public boolean D;
    public boolean H;
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final o f20785b;

    /* renamed from: c, reason: collision with root package name */
    public final List f20786c;

    /* renamed from: h, reason: collision with root package name */
    public final byte[] f20791h;

    /* renamed from: i, reason: collision with root package name */
    public final w f20792i;
    public final b0 j;

    /* renamed from: o, reason: collision with root package name */
    public final v f20796o;

    /* renamed from: p, reason: collision with root package name */
    public int f20797p;

    /* renamed from: q, reason: collision with root package name */
    public int f20798q;

    /* renamed from: r, reason: collision with root package name */
    public long f20799r;

    /* renamed from: s, reason: collision with root package name */
    public int f20800s;

    /* renamed from: t, reason: collision with root package name */
    public w f20801t;

    /* renamed from: u, reason: collision with root package name */
    public long f20802u;

    /* renamed from: v, reason: collision with root package name */
    public int f20803v;

    /* renamed from: z, reason: collision with root package name */
    public h f20807z;
    public final e4.r k = new e4.r(9);

    /* renamed from: l, reason: collision with root package name */
    public final w f20793l = new w(16);

    /* renamed from: e, reason: collision with root package name */
    public final w f20788e = new w(ke.b.f13278d);

    /* renamed from: f, reason: collision with root package name */
    public final w f20789f = new w(5);

    /* renamed from: g, reason: collision with root package name */
    public final w f20790g = new w();

    /* renamed from: m, reason: collision with root package name */
    public final ArrayDeque f20794m = new ArrayDeque();

    /* renamed from: n, reason: collision with root package name */
    public final ArrayDeque f20795n = new ArrayDeque();

    /* renamed from: d, reason: collision with root package name */
    public final SparseArray f20787d = new SparseArray();

    /* renamed from: x, reason: collision with root package name */
    public long f20805x = -9223372036854775807L;

    /* renamed from: w, reason: collision with root package name */
    public long f20804w = -9223372036854775807L;

    /* renamed from: y, reason: collision with root package name */
    public long f20806y = -9223372036854775807L;
    public qc.l E = qc.l.f16780u;
    public v[] F = new v[0];
    public v[] G = new v[0];

    static {
        f0 f0Var = new f0();
        f0Var.k = "application/x-emsg";
        J = new Format(f0Var);
    }

    public i(int i5, b0 b0Var, o oVar, List list, qd.p pVar) {
        this.a = i5;
        this.j = b0Var;
        this.f20785b = oVar;
        this.f20786c = Collections.unmodifiableList(list);
        this.f20796o = pVar;
        byte[] bArr = new byte[16];
        this.f20791h = bArr;
        this.f20792i = new w(bArr);
    }

    public static nc.i b(List list) {
        int size = list.size();
        ArrayList arrayList = null;
        for (int i5 = 0; i5 < size; i5++) {
            b bVar = (b) list.get(i5);
            if (bVar.f14426e == 1886614376) {
                if (arrayList == null) {
                    arrayList = new ArrayList();
                }
                byte[] bArr = bVar.f20762i.a;
                a1.d e9 = j.e(bArr);
                UUID uuid = e9 == null ? null : (UUID) e9.f15i;
                if (uuid == null) {
                    ke.b.N("FragmentedMp4Extractor", "Skipped pssh atom (failed to extract uuid)");
                } else {
                    arrayList.add(new nc.h(uuid, null, "video/mp4", bArr));
                }
            }
        }
        if (arrayList == null) {
            return null;
        }
        return new nc.i(null, false, (nc.h[]) arrayList.toArray(new nc.h[0]));
    }

    public static void c(w wVar, int i5, q qVar) {
        wVar.F(i5 + 8);
        int g6 = wVar.g();
        if ((g6 & 1) != 0) {
            throw g1.c("Overriding TrackEncryptionBox parameters is unsupported.");
        }
        boolean z5 = (g6 & 2) != 0;
        int x5 = wVar.x();
        if (x5 == 0) {
            Arrays.fill(qVar.f20857l, 0, qVar.f20852e, false);
            return;
        }
        int i6 = qVar.f20852e;
        w wVar2 = qVar.f20859n;
        if (x5 != i6) {
            StringBuilder r5 = a3.e.r(x5, "Senc sample count ", " is different from fragment sample count");
            r5.append(qVar.f20852e);
            throw g1.a(r5.toString(), null);
        }
        Arrays.fill(qVar.f20857l, 0, x5, z5);
        wVar2.C(wVar.a());
        qVar.k = true;
        qVar.f20860o = true;
        wVar.e(wVar2.a, 0, wVar2.f13364c);
        wVar2.F(0);
        qVar.f20860o = false;
    }

    @Override // qc.j
    public final void a(qc.l lVar) {
        int i5;
        this.E = lVar;
        this.f20797p = 0;
        this.f20800s = 0;
        v[] vVarArr = new v[2];
        this.F = vVarArr;
        v vVar = this.f20796o;
        if (vVar != null) {
            vVarArr[0] = vVar;
            i5 = 1;
        } else {
            i5 = 0;
        }
        int i6 = 100;
        if ((this.a & 4) != 0) {
            vVarArr[i5] = lVar.y(100, 5);
            i6 = 101;
            i5++;
        }
        v[] vVarArr2 = (v[]) d0.K(i5, this.F);
        this.F = vVarArr2;
        for (v vVar2 : vVarArr2) {
            vVar2.e(J);
        }
        List list = this.f20786c;
        this.G = new v[list.size()];
        int i10 = 0;
        while (i10 < this.G.length) {
            v y5 = this.E.y(i6, 3);
            y5.e((Format) list.get(i10));
            this.G[i10] = y5;
            i10++;
            i6++;
        }
        o oVar = this.f20785b;
        if (oVar != null) {
            this.f20787d.put(0, new h(lVar.y(0, oVar.f20837b), new r(this.f20785b, new long[0], new int[0], 0, new long[0], new int[0], 0L), new f(0, 0, 0, 0)));
            this.E.r();
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:411:0x0779, code lost:
    
        r52.f20797p = 0;
        r52.f20800s = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:412:0x077e, code lost:
    
        return;
     */
    /* JADX WARN: Removed duplicated region for block: B:258:0x068b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void d(long j) {
        f fVar;
        f fVar2;
        ArrayList arrayList;
        int i5;
        ArrayList arrayList2;
        ArrayList arrayList3;
        int i6;
        a aVar;
        int i10;
        int i11;
        int size;
        int i12;
        byte[] bArr;
        int i13;
        boolean z5;
        int i14;
        ArrayList arrayList4;
        int i15;
        a aVar2;
        int i16;
        int i17;
        int i18;
        int i19;
        f fVar3;
        int i20;
        while (true) {
            ArrayDeque arrayDeque = this.f20794m;
            if (arrayDeque.isEmpty() || ((a) arrayDeque.peek()).f20759i != j) {
                break;
            }
            a aVar3 = (a) arrayDeque.pop();
            int i21 = aVar3.f14426e;
            ArrayList arrayList5 = aVar3.f20761w;
            ArrayList arrayList6 = aVar3.f20760v;
            int i22 = this.a;
            int i23 = 12;
            o oVar = this.f20785b;
            SparseArray sparseArray = this.f20787d;
            if (i21 == 1836019574) {
                if (!(oVar == null)) {
                    throw new IllegalStateException("Unexpected moov box.");
                }
                nc.i b10 = b(arrayList6);
                a f2 = aVar3.f(1836475768);
                f2.getClass();
                ArrayList arrayList7 = f2.f20760v;
                SparseArray sparseArray2 = new SparseArray();
                int size2 = arrayList7.size();
                int i24 = 0;
                long j5 = -9223372036854775807L;
                while (i24 < size2) {
                    b bVar = (b) arrayList7.get(i24);
                    int i25 = bVar.f14426e;
                    w wVar = bVar.f20762i;
                    if (i25 == 1953654136) {
                        wVar.F(i23);
                        arrayList = arrayList7;
                        Pair create = Pair.create(Integer.valueOf(wVar.g()), new f(wVar.g() - 1, wVar.g(), wVar.g(), wVar.g()));
                        sparseArray2.put(((Integer) create.first).intValue(), (f) create.second);
                    } else {
                        arrayList = arrayList7;
                        if (i25 == 1835362404) {
                            wVar.F(8);
                            j5 = mc.a.e(wVar.g()) == 0 ? wVar.v() : wVar.y();
                        }
                    }
                    i24++;
                    arrayList7 = arrayList;
                    i23 = 12;
                }
                int i26 = 1;
                ArrayList f10 = e.f(aVar3, new qc.p(), j5, b10, (i22 & 16) != 0, false, new ni.a(14, this));
                int size3 = f10.size();
                if (sparseArray.size() == 0) {
                    int i27 = 0;
                    while (i27 < size3) {
                        r rVar = (r) f10.get(i27);
                        o oVar2 = rVar.a;
                        qc.l lVar = this.E;
                        int i28 = oVar2.f20837b;
                        int i29 = oVar2.a;
                        v y5 = lVar.y(i27, i28);
                        if (sparseArray2.size() == i26) {
                            fVar = (f) sparseArray2.valueAt(0);
                        } else {
                            fVar = (f) sparseArray2.get(i29);
                            fVar.getClass();
                        }
                        sparseArray.put(i29, new h(y5, rVar, fVar));
                        this.f20805x = Math.max(this.f20805x, oVar2.f20840e);
                        i27++;
                        i26 = 1;
                    }
                    this.E.r();
                } else {
                    ke.b.k(sparseArray.size() == size3);
                    for (int i30 = 0; i30 < size3; i30++) {
                        r rVar2 = (r) f10.get(i30);
                        o oVar3 = rVar2.a;
                        h hVar = (h) sparseArray.get(oVar3.a);
                        int i31 = oVar3.a;
                        if (sparseArray2.size() == 1) {
                            fVar2 = (f) sparseArray2.valueAt(0);
                        } else {
                            fVar2 = (f) sparseArray2.get(i31);
                            fVar2.getClass();
                        }
                        hVar.f20778d = rVar2;
                        hVar.f20779e = fVar2;
                        hVar.a.e(rVar2.a.f20841f);
                        hVar.d();
                    }
                }
            } else {
                int i32 = i22;
                if (i21 == 1836019558) {
                    boolean z6 = oVar != null;
                    int size4 = arrayList5.size();
                    int i33 = 0;
                    while (i33 < size4) {
                        a aVar4 = (a) arrayList5.get(i33);
                        if (aVar4.f14426e == 1953653094) {
                            b g6 = aVar4.g(1952868452);
                            ArrayList arrayList8 = aVar4.f20760v;
                            g6.getClass();
                            w wVar2 = g6.f20762i;
                            wVar2.F(8);
                            int g10 = wVar2.g();
                            h hVar2 = (h) (z6 ? sparseArray.valueAt(0) : sparseArray.get(wVar2.g()));
                            if (hVar2 == null) {
                                i5 = size4;
                                aVar = aVar4;
                                hVar2 = null;
                            } else {
                                q qVar = hVar2.f20776b;
                                aVar = aVar4;
                                if ((g10 & 1) != 0) {
                                    long y6 = wVar2.y();
                                    qVar.f20849b = y6;
                                    qVar.f20850c = y6;
                                }
                                f fVar4 = hVar2.f20779e;
                                int g11 = (g10 & 2) != 0 ? wVar2.g() - 1 : fVar4.a;
                                int g12 = (g10 & 8) != 0 ? wVar2.g() : fVar4.f20771b;
                                if ((g10 & 16) != 0) {
                                    i5 = size4;
                                    i10 = wVar2.g();
                                } else {
                                    i5 = size4;
                                    i10 = fVar4.f20772c;
                                }
                                qVar.a = new f(g11, g12, i10, (g10 & 32) != 0 ? wVar2.g() : fVar4.f20773d);
                            }
                            if (hVar2 == null) {
                                arrayList2 = arrayList5;
                                arrayList3 = arrayList6;
                                i6 = i32;
                            } else {
                                q qVar2 = hVar2.f20776b;
                                long j7 = qVar2.f20861p;
                                boolean z7 = qVar2.f20862q;
                                hVar2.d();
                                hVar2.f20784l = true;
                                a aVar5 = aVar;
                                b g13 = aVar5.g(1952867444);
                                if (g13 == null || (i32 & 2) != 0) {
                                    qVar2.f20861p = j7;
                                    qVar2.f20862q = z7;
                                } else {
                                    w wVar3 = g13.f20762i;
                                    wVar3.F(8);
                                    qVar2.f20861p = mc.a.e(wVar3.g()) == 1 ? wVar3.y() : wVar3.v();
                                    qVar2.f20862q = true;
                                }
                                int size5 = arrayList8.size();
                                int i34 = 0;
                                int i35 = 0;
                                int i36 = 0;
                                while (true) {
                                    i11 = 1953658222;
                                    if (i34 >= size5) {
                                        break;
                                    }
                                    int i37 = i34;
                                    b bVar2 = (b) arrayList8.get(i34);
                                    ArrayList arrayList9 = arrayList5;
                                    if (bVar2.f14426e == 1953658222) {
                                        w wVar4 = bVar2.f20762i;
                                        wVar4.F(12);
                                        int x5 = wVar4.x();
                                        if (x5 > 0) {
                                            i36 += x5;
                                            i35++;
                                        }
                                    }
                                    i34 = i37 + 1;
                                    arrayList5 = arrayList9;
                                }
                                arrayList2 = arrayList5;
                                hVar2.f20782h = 0;
                                hVar2.f20781g = 0;
                                hVar2.f20780f = 0;
                                qVar2.f20851d = i35;
                                qVar2.f20852e = i36;
                                if (qVar2.f20854g.length < i35) {
                                    qVar2.f20853f = new long[i35];
                                    qVar2.f20854g = new int[i35];
                                }
                                if (qVar2.f20855h.length < i36) {
                                    int i38 = (i36 * 125) / 100;
                                    qVar2.f20855h = new int[i38];
                                    qVar2.f20856i = new long[i38];
                                    qVar2.j = new boolean[i38];
                                    qVar2.f20857l = new boolean[i38];
                                }
                                int i39 = 0;
                                int i40 = 0;
                                int i41 = 0;
                                while (true) {
                                    long j10 = 0;
                                    if (i39 < size5) {
                                        b bVar3 = (b) arrayList8.get(i39);
                                        int i42 = size5;
                                        if (bVar3.f14426e == i11) {
                                            int i43 = i40 + 1;
                                            w wVar5 = bVar3.f20762i;
                                            wVar5.F(8);
                                            int g14 = wVar5.g();
                                            o oVar4 = hVar2.f20778d.a;
                                            i14 = i39;
                                            f fVar5 = qVar2.a;
                                            int i44 = d0.a;
                                            int i45 = i40;
                                            qVar2.f20854g[i45] = wVar5.x();
                                            long[] jArr = qVar2.f20853f;
                                            int i46 = i41;
                                            long j11 = qVar2.f20849b;
                                            jArr[i45] = j11;
                                            if ((g14 & 1) != 0) {
                                                jArr[i45] = j11 + wVar5.g();
                                            }
                                            boolean z8 = (g14 & 4) != 0;
                                            int i47 = fVar5.f20773d;
                                            if (z8) {
                                                i47 = wVar5.g();
                                            }
                                            boolean z10 = z8;
                                            boolean z11 = (g14 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0;
                                            boolean z12 = (g14 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0;
                                            boolean z13 = (g14 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0;
                                            boolean z14 = (g14 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0;
                                            boolean z15 = z13;
                                            long[] jArr2 = oVar4.f20843h;
                                            int i48 = i47;
                                            long[] jArr3 = oVar4.f20844i;
                                            if (jArr2 != null && jArr2.length == 1 && jArr3 != null) {
                                                long j12 = jArr2[0];
                                                if (j12 == 0 || d0.P(j12 + jArr3[0], 1000000L, oVar4.f20839d) >= oVar4.f20840e) {
                                                    j10 = jArr3[0];
                                                }
                                            }
                                            int[] iArr = qVar2.f20855h;
                                            long[] jArr4 = qVar2.f20856i;
                                            boolean[] zArr = qVar2.j;
                                            boolean z16 = oVar4.f20837b == 2 && (i32 & 1) != 0;
                                            i41 = i46 + qVar2.f20854g[i45];
                                            arrayList4 = arrayList6;
                                            i15 = i32;
                                            long j13 = oVar4.f20838c;
                                            long j14 = qVar2.f20861p;
                                            int i49 = i46;
                                            while (i49 < i41) {
                                                if (z11) {
                                                    i16 = i49;
                                                    i17 = wVar5.g();
                                                } else {
                                                    i16 = i49;
                                                    i17 = fVar5.f20771b;
                                                }
                                                boolean z17 = z16;
                                                if (i17 < 0) {
                                                    throw g1.a("Unexpected negative value: " + i17, null);
                                                }
                                                if (z12) {
                                                    i18 = i41;
                                                    i19 = wVar5.g();
                                                } else {
                                                    i18 = i41;
                                                    i19 = fVar5.f20772c;
                                                }
                                                if (i19 < 0) {
                                                    throw g1.a("Unexpected negative value: " + i19, null);
                                                }
                                                int g15 = z15 ? wVar5.g() : (i16 == 0 && z10) ? i48 : fVar5.f20773d;
                                                if (z14) {
                                                    fVar3 = fVar5;
                                                    i20 = wVar5.g();
                                                } else {
                                                    fVar3 = fVar5;
                                                    i20 = 0;
                                                }
                                                int i50 = g15;
                                                long P = d0.P((i20 + j14) - j10, 1000000L, j13);
                                                jArr4[i16] = P;
                                                if (!qVar2.f20862q) {
                                                    jArr4[i16] = P + hVar2.f20778d.f20869h;
                                                }
                                                iArr[i16] = i19;
                                                zArr[i16] = ((i50 >> 16) & 1) == 0 && (!z17 || i16 == 0);
                                                j14 += i17;
                                                i49 = i16 + 1;
                                                i41 = i18;
                                                z16 = z17;
                                                fVar5 = fVar3;
                                            }
                                            aVar2 = aVar5;
                                            qVar2.f20861p = j14;
                                            i40 = i43;
                                        } else {
                                            i14 = i39;
                                            arrayList4 = arrayList6;
                                            i15 = i32;
                                            aVar2 = aVar5;
                                        }
                                        aVar5 = aVar2;
                                        arrayList6 = arrayList4;
                                        i32 = i15;
                                        i11 = 1953658222;
                                        i39 = i14 + 1;
                                        size5 = i42;
                                    } else {
                                        arrayList3 = arrayList6;
                                        i6 = i32;
                                        a aVar6 = aVar5;
                                        o oVar5 = hVar2.f20778d.a;
                                        f fVar6 = qVar2.a;
                                        fVar6.getClass();
                                        int i51 = fVar6.a;
                                        p[] pVarArr = oVar5.k;
                                        p pVar = pVarArr == null ? null : pVarArr[i51];
                                        b g16 = aVar6.g(1935763834);
                                        if (g16 != null) {
                                            pVar.getClass();
                                            w wVar6 = g16.f20762i;
                                            int i52 = pVar.f20847d;
                                            wVar6.F(8);
                                            if ((wVar6.g() & 1) == 1) {
                                                wVar6.G(8);
                                            }
                                            int u5 = wVar6.u();
                                            int x10 = wVar6.x();
                                            if (x10 > qVar2.f20852e) {
                                                StringBuilder r5 = a3.e.r(x10, "Saiz sample count ", " is greater than fragment sample count");
                                                r5.append(qVar2.f20852e);
                                                throw g1.a(r5.toString(), null);
                                            }
                                            if (u5 == 0) {
                                                boolean[] zArr2 = qVar2.f20857l;
                                                i13 = 0;
                                                for (int i53 = 0; i53 < x10; i53++) {
                                                    int u6 = wVar6.u();
                                                    i13 += u6;
                                                    zArr2[i53] = u6 > i52;
                                                }
                                                z5 = false;
                                            } else {
                                                i13 = u5 * x10;
                                                z5 = false;
                                                Arrays.fill(qVar2.f20857l, 0, x10, u5 > i52);
                                            }
                                            Arrays.fill(qVar2.f20857l, x10, qVar2.f20852e, z5);
                                            if (i13 > 0) {
                                                qVar2.f20859n.C(i13);
                                                qVar2.k = true;
                                                qVar2.f20860o = true;
                                            }
                                        }
                                        b g17 = aVar6.g(1935763823);
                                        if (g17 != null) {
                                            w wVar7 = g17.f20762i;
                                            wVar7.F(8);
                                            int g18 = wVar7.g();
                                            if ((g18 & 1) == 1) {
                                                wVar7.G(8);
                                            }
                                            int x11 = wVar7.x();
                                            if (x11 != 1) {
                                                throw g1.a("Unexpected saio entry count: " + x11, null);
                                            }
                                            qVar2.f20850c += mc.a.e(g18) == 0 ? wVar7.v() : wVar7.y();
                                        }
                                        b g19 = aVar6.g(1936027235);
                                        if (g19 != null) {
                                            c(g19.f20762i, 0, qVar2);
                                        }
                                        String str = pVar != null ? pVar.f20845b : null;
                                        w wVar8 = null;
                                        w wVar9 = null;
                                        for (int i54 = 0; i54 < arrayList8.size(); i54++) {
                                            b bVar4 = (b) arrayList8.get(i54);
                                            w wVar10 = bVar4.f20762i;
                                            int i55 = bVar4.f14426e;
                                            if (i55 == 1935828848) {
                                                wVar10.F(12);
                                                if (wVar10.g() == 1936025959) {
                                                    wVar8 = wVar10;
                                                }
                                            } else if (i55 == 1936158820) {
                                                wVar10.F(12);
                                                if (wVar10.g() == 1936025959) {
                                                    wVar9 = wVar10;
                                                }
                                            }
                                        }
                                        if (wVar8 != null && wVar9 != null) {
                                            wVar8.F(8);
                                            int e9 = mc.a.e(wVar8.g());
                                            wVar8.G(4);
                                            if (e9 == 1) {
                                                wVar8.G(4);
                                            }
                                            if (wVar8.g() != 1) {
                                                throw g1.c("Entry count in sbgp != 1 (unsupported).");
                                            }
                                            wVar9.F(8);
                                            int e10 = mc.a.e(wVar9.g());
                                            wVar9.G(4);
                                            if (e10 == 1) {
                                                if (wVar9.v() == 0) {
                                                    throw g1.c("Variable length description in sgpd found (unsupported)");
                                                }
                                            } else if (e10 >= 2) {
                                                wVar9.G(4);
                                            }
                                            if (wVar9.v() != 1) {
                                                throw g1.c("Entry count in sgpd != 1 (unsupported).");
                                            }
                                            wVar9.G(1);
                                            int u10 = wVar9.u();
                                            int i56 = (u10 & 240) >> 4;
                                            int i57 = u10 & 15;
                                            boolean z18 = wVar9.u() == 1;
                                            if (z18) {
                                                int u11 = wVar9.u();
                                                byte[] bArr2 = new byte[16];
                                                wVar9.e(bArr2, 0, 16);
                                                if (u11 == 0) {
                                                    int u12 = wVar9.u();
                                                    byte[] bArr3 = new byte[u12];
                                                    wVar9.e(bArr3, 0, u12);
                                                    bArr = bArr3;
                                                } else {
                                                    bArr = null;
                                                }
                                                qVar2.k = true;
                                                qVar2.f20858m = new p(z18, str, u11, bArr2, i56, i57, bArr);
                                                size = arrayList8.size();
                                                for (i12 = 0; i12 < size; i12++) {
                                                    b bVar5 = (b) arrayList8.get(i12);
                                                    if (bVar5.f14426e == 1970628964) {
                                                        w wVar11 = bVar5.f20762i;
                                                        wVar11.F(8);
                                                        byte[] bArr4 = this.f20791h;
                                                        wVar11.e(bArr4, 0, 16);
                                                        if (Arrays.equals(bArr4, I)) {
                                                            c(wVar11, 16, qVar2);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        size = arrayList8.size();
                                        while (i12 < size) {
                                        }
                                    }
                                }
                            }
                        } else {
                            i5 = size4;
                            arrayList2 = arrayList5;
                            arrayList3 = arrayList6;
                            i6 = i32;
                        }
                        i33++;
                        arrayList5 = arrayList2;
                        size4 = i5;
                        arrayList6 = arrayList3;
                        i32 = i6;
                    }
                    nc.i b11 = b(arrayList6);
                    if (b11 != null) {
                        int size6 = sparseArray.size();
                        for (int i58 = 0; i58 < size6; i58++) {
                            h hVar3 = (h) sparseArray.valueAt(i58);
                            o oVar6 = hVar3.f20778d.a;
                            f fVar7 = hVar3.f20776b.a;
                            int i59 = d0.a;
                            int i60 = fVar7.a;
                            p[] pVarArr2 = oVar6.k;
                            p pVar2 = pVarArr2 == null ? null : pVarArr2[i60];
                            nc.i x12 = b11.x(pVar2 != null ? pVar2.f20845b : null);
                            f0 a = hVar3.f20778d.a.f20841f.a();
                            a.f9680n = x12;
                            hVar3.a.e(new Format(a));
                        }
                    }
                    if (this.f20804w != -9223372036854775807L) {
                        int size7 = sparseArray.size();
                        for (int i61 = 0; i61 < size7; i61++) {
                            h hVar4 = (h) sparseArray.valueAt(i61);
                            long j15 = this.f20804w;
                            int i62 = hVar4.f20780f;
                            while (true) {
                                q qVar3 = hVar4.f20776b;
                                if (i62 < qVar3.f20852e && qVar3.f20856i[i62] <= j15) {
                                    if (qVar3.j[i62]) {
                                        hVar4.f20783i = i62;
                                    }
                                    i62++;
                                }
                            }
                        }
                        this.f20804w = -9223372036854775807L;
                    }
                } else if (!arrayDeque.isEmpty()) {
                    ((a) arrayDeque.peek()).f20761w.add(aVar3);
                }
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:100:0x0129, code lost:
    
        if (r2.f20778d.a.f20842g != 1) goto L72;
     */
    /* JADX WARN: Code restructure failed: missing block: B:101:0x012b, code lost:
    
        r33.A = r4 - 8;
        ((qc.g) r34).u(r19);
     */
    /* JADX WARN: Code restructure failed: missing block: B:103:0x0145, code lost:
    
        if ("audio/ac4".equals(r2.f20778d.a.f20841f.I) == false) goto L75;
     */
    /* JADX WARN: Code restructure failed: missing block: B:104:0x0147, code lost:
    
        r33.B = r2.c(r33.A, 7);
        r4 = r33.A;
        r7 = r33.f20792i;
        jc.a.d(r4, r7);
        r2.a.d(7, r7);
        r33.B += 7;
     */
    /* JADX WARN: Code restructure failed: missing block: B:105:0x016a, code lost:
    
        r33.A += r33.B;
        r33.f20797p = 4;
        r33.C = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:106:0x0162, code lost:
    
        r33.B = r2.c(r33.A, 0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:107:0x00df, code lost:
    
        r4 = r3.f20855h[r2.f20780f];
     */
    /* JADX WARN: Code restructure failed: missing block: B:108:0x0176, code lost:
    
        r4 = r2.f20778d;
        r6 = r4.a;
        r7 = r2.a;
     */
    /* JADX WARN: Code restructure failed: missing block: B:109:0x017e, code lost:
    
        if (r2.f20784l != false) goto L80;
     */
    /* JADX WARN: Code restructure failed: missing block: B:110:0x0180, code lost:
    
        r13 = r4.f20867f[r2.f20780f];
     */
    /* JADX WARN: Code restructure failed: missing block: B:111:0x018d, code lost:
    
        if (r15 == null) goto L83;
     */
    /* JADX WARN: Code restructure failed: missing block: B:112:0x018f, code lost:
    
        r13 = r15.a(r13);
     */
    /* JADX WARN: Code restructure failed: missing block: B:113:0x0193, code lost:
    
        r4 = r6.j;
        r6 = r6.f20841f;
     */
    /* JADX WARN: Code restructure failed: missing block: B:114:0x0197, code lost:
    
        if (r4 == 0) goto L117;
     */
    /* JADX WARN: Code restructure failed: missing block: B:115:0x0199, code lost:
    
        r9 = r33.f20789f;
        r11 = r9.a;
        r11[0] = 0;
        r11[1] = 0;
        r11[r35] = 0;
        r8 = r4 + 1;
        r4 = 4 - r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:117:0x01af, code lost:
    
        if (r33.B >= r33.A) goto L431;
     */
    /* JADX WARN: Code restructure failed: missing block: B:118:0x01b1, code lost:
    
        r5 = r33.C;
     */
    /* JADX WARN: Code restructure failed: missing block: B:119:0x01b5, code lost:
    
        if (r5 != 0) goto L111;
     */
    /* JADX WARN: Code restructure failed: missing block: B:120:0x01b7, code lost:
    
        r30 = r12;
        ((qc.g) r34).a(r11, r4, r8, false);
        r9.F(0);
        r5 = r9.g();
     */
    /* JADX WARN: Code restructure failed: missing block: B:121:0x01c8, code lost:
    
        if (r5 < 1) goto L430;
     */
    /* JADX WARN: Code restructure failed: missing block: B:122:0x01ca, code lost:
    
        r33.C = r5 - 1;
        r5 = r33.f20788e;
        r5.F(0);
        r7.d(4, r5);
        r7.d(1, r9);
     */
    /* JADX WARN: Code restructure failed: missing block: B:123:0x01df, code lost:
    
        if (r33.G.length <= 0) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:124:0x01e1, code lost:
    
        r5 = r6.I;
        r19 = r11[4];
     */
    /* JADX WARN: Code restructure failed: missing block: B:125:0x01eb, code lost:
    
        if ("video/avc".equals(r5) == false) goto L99;
     */
    /* JADX WARN: Code restructure failed: missing block: B:126:0x01ed, code lost:
    
        r35 = r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:127:0x01f2, code lost:
    
        if ((r19 & 31) == 6) goto L104;
     */
    /* JADX WARN: Code restructure failed: missing block: B:128:0x0208, code lost:
    
        r5 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:129:0x020e, code lost:
    
        r33.D = r5;
        r33.B += 5;
        r33.A += r35;
        r4 = r35;
     */
    /* JADX WARN: Code restructure failed: missing block: B:131:0x021e, code lost:
    
        r12 = r30;
     */
    /* JADX WARN: Code restructure failed: missing block: B:133:0x01fc, code lost:
    
        if ("video/hevc".equals(r5) == false) goto L106;
     */
    /* JADX WARN: Code restructure failed: missing block: B:135:0x0206, code lost:
    
        if (((r19 & 126) >> 1) != 39) goto L106;
     */
    /* JADX WARN: Code restructure failed: missing block: B:136:0x020d, code lost:
    
        r5 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:137:0x01f5, code lost:
    
        r35 = r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:138:0x020a, code lost:
    
        r35 = r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:141:0x0229, code lost:
    
        throw hc.g1.a("Invalid NAL length", null);
     */
    /* JADX WARN: Code restructure failed: missing block: B:142:0x022a, code lost:
    
        r35 = r4;
        r30 = r12;
     */
    /* JADX WARN: Code restructure failed: missing block: B:143:0x0231, code lost:
    
        if (r33.D == false) goto L114;
     */
    /* JADX WARN: Code restructure failed: missing block: B:144:0x0233, code lost:
    
        r12 = r33.f20790g;
        r12.C(r5);
        r19 = r8;
        r22 = r9;
        ((qc.g) r34).a(r12.a, 0, r33.C, false);
        r7.d(r33.C, r12);
        r4 = r33.C;
        r5 = ke.b.M(r12.a, r12.f13364c);
        r12.F("video/hevc".equals(r6.I) ? 1 : 0);
        r12.E(r5);
        tn.g.d(r13, r12, r33.G);
     */
    /* JADX WARN: Code restructure failed: missing block: B:145:0x0271, code lost:
    
        r33.B += r4;
        r33.C -= r4;
        r4 = r35;
        r8 = r19;
        r9 = r22;
     */
    /* JADX WARN: Code restructure failed: missing block: B:147:0x0268, code lost:
    
        r19 = r8;
        r22 = r9;
        r4 = r7.c(r34, r5, false);
     */
    /* JADX WARN: Code restructure failed: missing block: B:149:0x0282, code lost:
    
        r30 = r12;
     */
    /* JADX WARN: Code restructure failed: missing block: B:151:0x029b, code lost:
    
        if (r2.f20784l != false) goto L124;
     */
    /* JADX WARN: Code restructure failed: missing block: B:152:0x029d, code lost:
    
        r11 = r2.f20778d.f20868g[r2.f20780f];
     */
    /* JADX WARN: Code restructure failed: missing block: B:154:0x02b5, code lost:
    
        if (r2.a() == null) goto L131;
     */
    /* JADX WARN: Code restructure failed: missing block: B:155:0x02b7, code lost:
    
        r11 = r11 | 1073741824;
     */
    /* JADX WARN: Code restructure failed: missing block: B:156:0x02ba, code lost:
    
        r25 = r11;
        r1 = r2.a();
     */
    /* JADX WARN: Code restructure failed: missing block: B:157:0x02c0, code lost:
    
        if (r1 == null) goto L134;
     */
    /* JADX WARN: Code restructure failed: missing block: B:158:0x02c2, code lost:
    
        r28 = r1.f20846c;
     */
    /* JADX WARN: Code restructure failed: missing block: B:159:0x02c9, code lost:
    
        r23 = r13;
        r7.b(r23, r25, r33.A, 0, r28);
     */
    /* JADX WARN: Code restructure failed: missing block: B:161:0x02da, code lost:
    
        if (r30.isEmpty() != false) goto L434;
     */
    /* JADX WARN: Code restructure failed: missing block: B:162:0x02dc, code lost:
    
        r1 = (yc.g) r30.removeFirst();
        r33.f20803v -= r1.f20775c;
        r3 = r1.a;
     */
    /* JADX WARN: Code restructure failed: missing block: B:163:0x02ed, code lost:
    
        if (r1.f20774b == false) goto L141;
     */
    /* JADX WARN: Code restructure failed: missing block: B:164:0x02ef, code lost:
    
        r3 = r3 + r23;
     */
    /* JADX WARN: Code restructure failed: missing block: B:165:0x02f1, code lost:
    
        if (r15 == null) goto L143;
     */
    /* JADX WARN: Code restructure failed: missing block: B:166:0x02f3, code lost:
    
        r3 = r15.a(r3);
     */
    /* JADX WARN: Code restructure failed: missing block: B:167:0x02f7, code lost:
    
        r6 = r3;
        r3 = r33.F;
        r4 = r3.length;
        r12 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:169:0x02fc, code lost:
    
        if (r12 >= r4) goto L437;
     */
    /* JADX WARN: Code restructure failed: missing block: B:170:0x02fe, code lost:
    
        r3[r12].b(r6, 1, r1.f20775c, r33.f20803v, null);
        r12 = r12 + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:175:0x0310, code lost:
    
        if (r2.b() != false) goto L149;
     */
    /* JADX WARN: Code restructure failed: missing block: B:176:0x0312, code lost:
    
        r33.f20807z = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:177:0x0315, code lost:
    
        r33.f20797p = 3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:178:0x031a, code lost:
    
        return 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:179:0x02c7, code lost:
    
        r28 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:181:0x02ac, code lost:
    
        if (r3.j[r2.f20780f] == false) goto L127;
     */
    /* JADX WARN: Code restructure failed: missing block: B:182:0x02ae, code lost:
    
        r11 = 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:183:0x02b0, code lost:
    
        r11 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:184:0x0285, code lost:
    
        r30 = r12;
     */
    /* JADX WARN: Code restructure failed: missing block: B:185:0x0287, code lost:
    
        r4 = r33.B;
        r5 = r33.A;
     */
    /* JADX WARN: Code restructure failed: missing block: B:186:0x028b, code lost:
    
        if (r4 >= r5) goto L438;
     */
    /* JADX WARN: Code restructure failed: missing block: B:187:0x028d, code lost:
    
        r33.B += r7.c(r34, r5 - r4, false);
     */
    /* JADX WARN: Code restructure failed: missing block: B:189:0x0187, code lost:
    
        r13 = r3.f20856i[r2.f20780f];
     */
    /* JADX WARN: Code restructure failed: missing block: B:77:0x00ca, code lost:
    
        r3 = r2.f20776b;
     */
    /* JADX WARN: Code restructure failed: missing block: B:78:0x00d0, code lost:
    
        if (r33.f20797p != 3) goto L77;
     */
    /* JADX WARN: Code restructure failed: missing block: B:80:0x00d4, code lost:
    
        if (r2.f20784l != false) goto L50;
     */
    /* JADX WARN: Code restructure failed: missing block: B:81:0x00d6, code lost:
    
        r4 = r2.f20778d.f20865d[r2.f20780f];
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x00e5, code lost:
    
        r33.A = r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:83:0x00eb, code lost:
    
        if (r2.f20780f >= r2.f20783i) goto L69;
     */
    /* JADX WARN: Code restructure failed: missing block: B:84:0x00ed, code lost:
    
        ((qc.g) r34).u(r4);
        r1 = r2.a();
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x00f6, code lost:
    
        if (r1 != null) goto L56;
     */
    /* JADX WARN: Code restructure failed: missing block: B:86:0x00f9, code lost:
    
        r4 = r3.f20859n;
        r1 = r1.f20847d;
     */
    /* JADX WARN: Code restructure failed: missing block: B:87:0x00fd, code lost:
    
        if (r1 == 0) goto L59;
     */
    /* JADX WARN: Code restructure failed: missing block: B:88:0x00ff, code lost:
    
        r4.G(r1);
     */
    /* JADX WARN: Code restructure failed: missing block: B:89:0x0102, code lost:
    
        r1 = r2.f20780f;
     */
    /* JADX WARN: Code restructure failed: missing block: B:90:0x0106, code lost:
    
        if (r3.k == false) goto L64;
     */
    /* JADX WARN: Code restructure failed: missing block: B:92:0x010c, code lost:
    
        if (r3.f20857l[r1] == false) goto L64;
     */
    /* JADX WARN: Code restructure failed: missing block: B:93:0x010e, code lost:
    
        r4.G(r4.z() * 6);
     */
    /* JADX WARN: Code restructure failed: missing block: B:95:0x011a, code lost:
    
        if (r2.b() != false) goto L67;
     */
    /* JADX WARN: Code restructure failed: missing block: B:96:0x011c, code lost:
    
        r33.f20807z = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:97:0x011e, code lost:
    
        r33.f20797p = 3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:98:0x0121, code lost:
    
        return 0;
     */
    /* JADX WARN: Multi-variable type inference failed */
    @Override // qc.j
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int e(qc.k kVar, qc.m mVar) {
        String p3;
        String p5;
        long j;
        long j5;
        long P;
        long v5;
        long y5;
        long y6;
        char c6;
        int i5;
        loop0: while (true) {
            while (true) {
                int i6 = this.f20797p;
                ArrayDeque arrayDeque = this.f20794m;
                SparseArray sparseArray = this.f20787d;
                char c8 = 2;
                if (i6 != 0) {
                    ArrayDeque arrayDeque2 = this.f20795n;
                    b0 b0Var = this.j;
                    if (i6 != 1) {
                        long j7 = LongCompanionObject.MAX_VALUE;
                        if (i6 != 2) {
                            h hVar = this.f20807z;
                            if (hVar != null) {
                                c6 = 2;
                                i5 = 8;
                                break loop0;
                            }
                            int size = sparseArray.size();
                            long j10 = Long.MAX_VALUE;
                            h hVar2 = null;
                            int i10 = 0;
                            while (i10 < size) {
                                char c10 = c8;
                                h hVar3 = (h) sparseArray.valueAt(i10);
                                boolean z5 = hVar3.f20784l;
                                q qVar = hVar3.f20776b;
                                if ((z5 || hVar3.f20780f != hVar3.f20778d.f20863b) && (!z5 || hVar3.f20782h != qVar.f20851d)) {
                                    long j11 = !z5 ? hVar3.f20778d.f20864c[hVar3.f20780f] : qVar.f20853f[hVar3.f20782h];
                                    if (j11 < j10) {
                                        hVar2 = hVar3;
                                        j10 = j11;
                                    }
                                }
                                i10++;
                                c8 = c10;
                            }
                            c6 = c8;
                            i5 = 8;
                            if (hVar2 == null) {
                                int i11 = (int) (this.f20802u - ((qc.g) kVar).f16773v);
                                if (i11 < 0) {
                                    throw g1.a("Offset to end of mdat was negative.", null);
                                }
                                ((qc.g) kVar).u(i11);
                                this.f20797p = 0;
                                this.f20800s = 0;
                            } else {
                                int i12 = (int) ((!hVar2.f20784l ? hVar2.f20778d.f20864c[hVar2.f20780f] : hVar2.f20776b.f20853f[hVar2.f20782h]) - ((qc.g) kVar).f16773v);
                                if (i12 < 0) {
                                    ke.b.N("FragmentedMp4Extractor", "Ignoring negative offset to sample data.");
                                    i12 = 0;
                                }
                                ((qc.g) kVar).u(i12);
                                this.f20807z = hVar2;
                                hVar = hVar2;
                            }
                        } else {
                            int size2 = sparseArray.size();
                            h hVar4 = null;
                            for (int i13 = 0; i13 < size2; i13++) {
                                q qVar2 = ((h) sparseArray.valueAt(i13)).f20776b;
                                if (qVar2.f20860o) {
                                    long j12 = qVar2.f20850c;
                                    if (j12 < j7) {
                                        hVar4 = (h) sparseArray.valueAt(i13);
                                        j7 = j12;
                                    }
                                }
                            }
                            if (hVar4 == null) {
                                this.f20797p = 3;
                            } else {
                                int i14 = (int) (j7 - ((qc.g) kVar).f16773v);
                                if (i14 < 0) {
                                    throw g1.a("Offset to encryption data was negative.", null);
                                }
                                qc.g gVar = (qc.g) kVar;
                                gVar.u(i14);
                                q qVar3 = hVar4.f20776b;
                                w wVar = qVar3.f20859n;
                                gVar.a(wVar.a, 0, wVar.f13364c, false);
                                wVar.F(0);
                                qVar3.f20860o = false;
                            }
                        }
                    } else {
                        int i15 = ((int) this.f20799r) - this.f20800s;
                        w wVar2 = this.f20801t;
                        if (wVar2 != null) {
                            ((qc.g) kVar).a(wVar2.a, 8, i15, false);
                            int i16 = this.f20798q;
                            b bVar = new b(i16, wVar2);
                            long j13 = ((qc.g) kVar).f16773v;
                            if (!arrayDeque.isEmpty()) {
                                ((a) arrayDeque.peek()).f20760v.add(bVar);
                            } else if (i16 == 1936286840) {
                                wVar2.F(8);
                                int e9 = mc.a.e(wVar2.g());
                                wVar2.G(4);
                                long v6 = wVar2.v();
                                if (e9 == 0) {
                                    y5 = wVar2.v();
                                    y6 = wVar2.v();
                                } else {
                                    y5 = wVar2.y();
                                    y6 = wVar2.y();
                                }
                                long j14 = y6 + j13;
                                long j15 = y5;
                                long P2 = d0.P(j15, 1000000L, v6);
                                wVar2.G(2);
                                int z6 = wVar2.z();
                                int[] iArr = new int[z6];
                                long[] jArr = new long[z6];
                                long[] jArr2 = new long[z6];
                                long[] jArr3 = new long[z6];
                                long j16 = P2;
                                long j17 = j15;
                                int i17 = 0;
                                while (i17 < z6) {
                                    int g6 = wVar2.g();
                                    if ((g6 & Integer.MIN_VALUE) != 0) {
                                        throw g1.a("Unhandled indirect reference", null);
                                    }
                                    long v7 = wVar2.v();
                                    iArr[i17] = g6 & Integer.MAX_VALUE;
                                    jArr[i17] = j14;
                                    jArr3[i17] = j16;
                                    long j18 = j17 + v7;
                                    long[] jArr4 = jArr2;
                                    long[] jArr5 = jArr3;
                                    int i18 = i17;
                                    j16 = d0.P(j18, 1000000L, v6);
                                    jArr4[i18] = j16 - jArr5[i18];
                                    wVar2.G(4);
                                    j14 += iArr[i18];
                                    jArr2 = jArr4;
                                    jArr3 = jArr5;
                                    i17 = i18 + 1;
                                    P2 = P2;
                                    j17 = j18;
                                }
                                Pair create = Pair.create(Long.valueOf(P2), new qc.f(iArr, jArr, jArr2, jArr3));
                                this.f20806y = ((Long) create.first).longValue();
                                this.E.c((s) create.second);
                                this.H = true;
                            } else if (i16 == 1701671783 && this.F.length != 0) {
                                wVar2.F(8);
                                int e10 = mc.a.e(wVar2.g());
                                if (e10 == 0) {
                                    p3 = wVar2.p();
                                    p3.getClass();
                                    p5 = wVar2.p();
                                    p5.getClass();
                                    long v9 = wVar2.v();
                                    long P3 = d0.P(wVar2.v(), 1000000L, v9);
                                    long j19 = this.f20806y;
                                    long j20 = j19 != -9223372036854775807L ? j19 + P3 : -9223372036854775807L;
                                    j = P3;
                                    j5 = j20;
                                    P = d0.P(wVar2.v(), 1000L, v9);
                                    v5 = wVar2.v();
                                } else if (e10 != 1) {
                                    com.discord.chat.bridge.botuikit.a.q(e10, "Skipping unsupported emsg version: ", "FragmentedMp4Extractor");
                                } else {
                                    long v10 = wVar2.v();
                                    j5 = d0.P(wVar2.y(), 1000000L, v10);
                                    long P4 = d0.P(wVar2.v(), 1000L, v10);
                                    long v11 = wVar2.v();
                                    p3 = wVar2.p();
                                    p3.getClass();
                                    p5 = wVar2.p();
                                    p5.getClass();
                                    P = P4;
                                    v5 = v11;
                                    j = -9223372036854775807L;
                                }
                                String str = p3;
                                String str2 = p5;
                                byte[] bArr = new byte[wVar2.a()];
                                wVar2.e(bArr, 0, wVar2.a());
                                w wVar3 = new w(this.k.i(new fd.a(str, str2, P, v5, bArr)));
                                int a = wVar3.a();
                                for (v vVar : this.F) {
                                    wVar3.F(0);
                                    vVar.d(a, wVar3);
                                }
                                if (j5 == -9223372036854775807L) {
                                    arrayDeque2.addLast(new g(a, j, true));
                                    this.f20803v += a;
                                } else if (!arrayDeque2.isEmpty()) {
                                    arrayDeque2.addLast(new g(a, j5, false));
                                    this.f20803v += a;
                                } else if (b0Var == null || b0Var.d()) {
                                    if (b0Var != null) {
                                        j5 = b0Var.a(j5);
                                    }
                                    long j21 = j5;
                                    for (v vVar2 : this.F) {
                                        vVar2.b(j21, 1, a, 0, null);
                                    }
                                } else {
                                    arrayDeque2.addLast(new g(a, j5, false));
                                    this.f20803v += a;
                                }
                            }
                        } else {
                            ((qc.g) kVar).u(i15);
                        }
                        d(((qc.g) kVar).f16773v);
                    }
                } else {
                    int i19 = this.f20800s;
                    w wVar4 = this.f20793l;
                    if (i19 == 0) {
                        if (!((qc.g) kVar).a(wVar4.a, 0, 8, true)) {
                            return -1;
                        }
                        this.f20800s = 8;
                        wVar4.F(0);
                        this.f20799r = wVar4.v();
                        this.f20798q = wVar4.g();
                    }
                    long j22 = this.f20799r;
                    if (j22 == 1) {
                        ((qc.g) kVar).a(wVar4.a, 8, 8, false);
                        this.f20800s += 8;
                        this.f20799r = wVar4.y();
                    } else if (j22 == 0) {
                        long j23 = ((qc.g) kVar).f16772i;
                        if (j23 == -1 && !arrayDeque.isEmpty()) {
                            j23 = ((a) arrayDeque.peek()).f20759i;
                        }
                        if (j23 != -1) {
                            this.f20799r = (j23 - ((qc.g) kVar).f16773v) + this.f20800s;
                        }
                    }
                    long j24 = this.f20799r;
                    int i20 = this.f20800s;
                    if (j24 < i20) {
                        throw g1.c("Atom size less than header length (unsupported).");
                    }
                    long j25 = ((qc.g) kVar).f16773v - i20;
                    int i21 = this.f20798q;
                    if ((i21 == 1836019558 || i21 == 1835295092) && !this.H) {
                        this.E.c(new qc.n(this.f20805x, j25));
                        this.H = true;
                    }
                    if (this.f20798q == 1836019558) {
                        int size3 = sparseArray.size();
                        for (int i22 = 0; i22 < size3; i22++) {
                            q qVar4 = ((h) sparseArray.valueAt(i22)).f20776b;
                            qVar4.getClass();
                            qVar4.f20850c = j25;
                            qVar4.f20849b = j25;
                        }
                    }
                    int i23 = this.f20798q;
                    if (i23 == 1835295092) {
                        this.f20807z = null;
                        this.f20802u = j25 + this.f20799r;
                        this.f20797p = 2;
                    } else if (i23 == 1836019574 || i23 == 1953653099 || i23 == 1835297121 || i23 == 1835626086 || i23 == 1937007212 || i23 == 1836019558 || i23 == 1953653094 || i23 == 1836475768 || i23 == 1701082227) {
                        long j26 = (((qc.g) kVar).f16773v + this.f20799r) - 8;
                        arrayDeque.push(new a(i23, j26));
                        if (this.f20799r == this.f20800s) {
                            d(j26);
                        } else {
                            this.f20797p = 0;
                            this.f20800s = 0;
                        }
                    } else if (i23 == 1751411826 || i23 == 1835296868 || i23 == 1836476516 || i23 == 1936286840 || i23 == 1937011556 || i23 == 1937011827 || i23 == 1668576371 || i23 == 1937011555 || i23 == 1937011578 || i23 == 1937013298 || i23 == 1937007471 || i23 == 1668232756 || i23 == 1937011571 || i23 == 1952867444 || i23 == 1952868452 || i23 == 1953196132 || i23 == 1953654136 || i23 == 1953658222 || i23 == 1886614376 || i23 == 1935763834 || i23 == 1935763823 || i23 == 1936027235 || i23 == 1970628964 || i23 == 1935828848 || i23 == 1936158820 || i23 == 1701606260 || i23 == 1835362404 || i23 == 1701671783) {
                        if (this.f20800s != 8) {
                            throw g1.c("Leaf atom defines extended atom size (unsupported).");
                        }
                        if (this.f20799r > 2147483647L) {
                            throw g1.c("Leaf atom with length > 2147483647 (unsupported).");
                        }
                        w wVar5 = new w((int) this.f20799r);
                        System.arraycopy(wVar4.a, 0, wVar5.a, 0, 8);
                        this.f20801t = wVar5;
                        this.f20797p = 1;
                    } else {
                        if (this.f20799r > 2147483647L) {
                            throw g1.c("Skipping atom with length > 2147483647 (unsupported).");
                        }
                        this.f20801t = null;
                        this.f20797p = 1;
                    }
                }
            }
        }
    }

    @Override // qc.j
    public final boolean f(qc.k kVar) {
        return j.j(kVar, true, false);
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        SparseArray sparseArray = this.f20787d;
        int size = sparseArray.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((h) sparseArray.valueAt(i5)).d();
        }
        this.f20795n.clear();
        this.f20803v = 0;
        this.f20804w = j5;
        this.f20794m.clear();
        this.f20797p = 0;
        this.f20800s = 0;
    }

    @Override // qc.j
    public final void release() {
    }
}
