package ad;

import android.util.SparseArray;
import android.util.SparseBooleanArray;
import android.util.SparseIntArray;
import hc.g1;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class e0 implements qc.j {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final List f340b;

    /* renamed from: c, reason: collision with root package name */
    public final ke.w f341c;

    /* renamed from: d, reason: collision with root package name */
    public final SparseIntArray f342d;

    /* renamed from: e, reason: collision with root package name */
    public final f f343e;

    /* renamed from: f, reason: collision with root package name */
    public final SparseArray f344f;

    /* renamed from: g, reason: collision with root package name */
    public final SparseBooleanArray f345g;

    /* renamed from: h, reason: collision with root package name */
    public final SparseBooleanArray f346h;

    /* renamed from: i, reason: collision with root package name */
    public final y f347i;
    public x j;
    public qc.l k;

    /* renamed from: l, reason: collision with root package name */
    public int f348l;

    /* renamed from: m, reason: collision with root package name */
    public boolean f349m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f350n;

    /* renamed from: o, reason: collision with root package name */
    public boolean f351o;

    /* renamed from: p, reason: collision with root package name */
    public h0 f352p;

    /* renamed from: q, reason: collision with root package name */
    public int f353q;

    /* renamed from: r, reason: collision with root package name */
    public int f354r;

    public e0(int i5, ke.b0 b0Var, f fVar) {
        this.f343e = fVar;
        this.a = i5;
        if (i5 == 1 || i5 == 2) {
            this.f340b = Collections.singletonList(b0Var);
        } else {
            ArrayList arrayList = new ArrayList();
            this.f340b = arrayList;
            arrayList.add(b0Var);
        }
        this.f341c = new ke.w(new byte[9400], 0);
        SparseBooleanArray sparseBooleanArray = new SparseBooleanArray();
        this.f345g = sparseBooleanArray;
        this.f346h = new SparseBooleanArray();
        SparseArray sparseArray = new SparseArray();
        this.f344f = sparseArray;
        this.f342d = new SparseIntArray();
        this.f347i = new y(1);
        this.k = qc.l.f16780u;
        this.f354r = -1;
        sparseBooleanArray.clear();
        sparseArray.clear();
        SparseArray sparseArray2 = new SparseArray();
        int size = sparseArray2.size();
        for (int i6 = 0; i6 < size; i6++) {
            sparseArray.put(sparseArray2.keyAt(i6), (h0) sparseArray2.valueAt(i6));
        }
        sparseArray.put(0, new c0(new e4.l(this)));
        this.f352p = null;
    }

    @Override // qc.j
    public final void a(qc.l lVar) {
        this.k = lVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v16 */
    /* JADX WARN: Type inference failed for: r3v3 */
    /* JADX WARN: Type inference failed for: r3v4, types: [boolean, int] */
    @Override // qc.j
    public final int e(qc.k kVar, qc.m mVar) {
        qc.k kVar2;
        int i5;
        int i6;
        ?? r32;
        int i10;
        boolean z5;
        long j;
        long j5 = ((qc.g) kVar).f16772i;
        boolean z6 = this.f349m;
        int i11 = this.a;
        if (z6) {
            long j7 = -9223372036854775807L;
            y yVar = this.f347i;
            if (j5 != -1 && i11 != 2 && !yVar.f517d) {
                int i12 = this.f354r;
                ke.b0 b0Var = yVar.f515b;
                ke.w wVar = yVar.f516c;
                if (i12 <= 0) {
                    yVar.a(kVar);
                    return 0;
                }
                if (!yVar.f519f) {
                    qc.g gVar = (qc.g) kVar;
                    long j10 = gVar.f16772i;
                    int min = (int) Math.min(112800, j10);
                    long j11 = j10 - min;
                    if (gVar.f16773v != j11) {
                        mVar.a = j11;
                        return 1;
                    }
                    wVar.C(min);
                    gVar.f16775x = 0;
                    gVar.j(wVar.a, 0, min, false);
                    int i13 = wVar.f13363b;
                    int i14 = wVar.f13364c;
                    int i15 = i14 - 188;
                    while (true) {
                        if (i15 < i13) {
                            break;
                        }
                        byte[] bArr = wVar.a;
                        int i16 = -4;
                        int i17 = 0;
                        while (true) {
                            if (i16 > 4) {
                                break;
                            }
                            int i18 = (i16 * 188) + i15;
                            if (i18 < i13 || i18 >= i14 || bArr[i18] != 71) {
                                i17 = 0;
                            } else {
                                i17++;
                                if (i17 == 5) {
                                    long D = jb.a.D(wVar, i15, i12);
                                    if (D != -9223372036854775807L) {
                                        j7 = D;
                                        break;
                                    }
                                }
                            }
                            i16++;
                        }
                        i15--;
                    }
                    yVar.f521h = j7;
                    yVar.f519f = true;
                    return 0;
                }
                if (yVar.f521h == -9223372036854775807L) {
                    yVar.a(kVar);
                    return 0;
                }
                if (yVar.f518e) {
                    long j12 = yVar.f520g;
                    if (j12 == -9223372036854775807L) {
                        yVar.a(kVar);
                        return 0;
                    }
                    long b10 = b0Var.b(yVar.f521h) - b0Var.b(j12);
                    yVar.f522i = b10;
                    if (b10 < 0) {
                        ke.b.N("TsDurationReader", "Invalid duration: " + yVar.f522i + ". Using TIME_UNSET instead.");
                        yVar.f522i = -9223372036854775807L;
                    }
                    yVar.a(kVar);
                    return 0;
                }
                qc.g gVar2 = (qc.g) kVar;
                int min2 = (int) Math.min(112800, gVar2.f16772i);
                long j13 = 0;
                if (gVar2.f16773v != j13) {
                    mVar.a = j13;
                    return 1;
                }
                wVar.C(min2);
                gVar2.f16775x = 0;
                gVar2.j(wVar.a, 0, min2, false);
                int i19 = wVar.f13363b;
                int i20 = wVar.f13364c;
                while (true) {
                    if (i19 >= i20) {
                        break;
                    }
                    if (wVar.a[i19] == 71) {
                        long D2 = jb.a.D(wVar, i19, i12);
                        if (D2 != -9223372036854775807L) {
                            j7 = D2;
                            break;
                        }
                    }
                    i19++;
                }
                yVar.f520g = j7;
                yVar.f518e = true;
                return 0;
            }
            if (this.f350n) {
                i5 = i11;
                z5 = false;
                j5 = j5;
                j = 0;
                i6 = 1;
            } else {
                this.f350n = true;
                long j14 = yVar.f522i;
                if (j14 != -9223372036854775807L) {
                    j5 = j5;
                    j = 0;
                    i5 = i11;
                    i6 = 1;
                    z5 = false;
                    x xVar = new x(new ha.k(16), new a1.d(this.f354r, yVar.f515b), j14, 1 + j14, 0L, j5, 188L, 940);
                    this.j = xVar;
                    this.k.c((qc.a) xVar.f7692c);
                } else {
                    i5 = i11;
                    j5 = j5;
                    j = 0;
                    i6 = 1;
                    z5 = false;
                    this.k.c(new qc.n(j14));
                }
            }
            if (this.f351o) {
                this.f351o = z5;
                g(j, j);
                if (((qc.g) kVar).f16773v != j) {
                    mVar.a = j;
                    return i6;
                }
            }
            x xVar2 = this.j;
            if (xVar2 != null && ((qc.b) xVar2.f7694e) != null) {
                return xVar2.v(kVar, mVar);
            }
            kVar2 = kVar;
            r32 = z5;
        } else {
            kVar2 = kVar;
            i5 = i11;
            i6 = 1;
            r32 = 0;
        }
        ke.w wVar2 = this.f341c;
        byte[] bArr2 = wVar2.a;
        if (9400 - wVar2.f13363b < 188) {
            int a = wVar2.a();
            if (a > 0) {
                System.arraycopy(bArr2, wVar2.f13363b, bArr2, r32, a);
            }
            wVar2.D(bArr2, a);
        }
        while (wVar2.a() < 188) {
            int i21 = wVar2.f13364c;
            int read = ((qc.g) kVar2).read(bArr2, i21, 9400 - i21);
            if (read == -1) {
                return -1;
            }
            wVar2.E(i21 + read);
        }
        int i22 = wVar2.f13363b;
        int i23 = wVar2.f13364c;
        byte[] bArr3 = wVar2.a;
        int i24 = i22;
        while (i24 < i23 && bArr3[i24] != 71) {
            i24++;
        }
        wVar2.F(i24);
        int i25 = i24 + 188;
        if (i25 > i23) {
            int i26 = (i24 - i22) + this.f353q;
            this.f353q = i26;
            i10 = i5;
            if (i10 == 2 && i26 > 376) {
                throw g1.a("Cannot find sync byte. Most likely not a Transport Stream.", null);
            }
        } else {
            i10 = i5;
            this.f353q = r32;
        }
        int i27 = wVar2.f13364c;
        if (i25 > i27) {
            return r32;
        }
        int g6 = wVar2.g();
        if ((8388608 & g6) != 0) {
            wVar2.F(i25);
            return r32;
        }
        int i28 = (4194304 & g6) != 0 ? i6 : r32;
        int i29 = (2096896 & g6) >> 8;
        int i30 = (g6 & 32) != 0 ? i6 : r32;
        h0 h0Var = (g6 & 16) != 0 ? (h0) this.f344f.get(i29) : null;
        if (h0Var == null) {
            wVar2.F(i25);
            return r32;
        }
        if (i10 != 2) {
            int i31 = g6 & 15;
            SparseIntArray sparseIntArray = this.f342d;
            int i32 = sparseIntArray.get(i29, i31 - 1);
            sparseIntArray.put(i29, i31);
            if (i32 == i31) {
                wVar2.F(i25);
                return r32;
            }
            if (i31 != ((i32 + 1) & 15)) {
                h0Var.a();
            }
        }
        if (i30 != 0) {
            int u5 = wVar2.u();
            i28 |= (wVar2.u() & 64) != 0 ? 2 : r32;
            wVar2.G(u5 - 1);
        }
        boolean z7 = this.f349m;
        if (i10 == 2 || z7 || !this.f346h.get(i29, r32)) {
            wVar2.E(i25);
            h0Var.c(i28, wVar2);
            wVar2.E(i27);
        }
        if (i10 != 2 && !z7 && this.f349m && j5 != -1) {
            this.f351o = i6;
        }
        wVar2.F(i25);
        return r32;
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x001e, code lost:
    
        r2 = r2 + 1;
     */
    @Override // qc.j
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean f(qc.k kVar) {
        byte[] bArr = this.f341c.a;
        qc.g gVar = (qc.g) kVar;
        gVar.j(bArr, 0, 940, false);
        int i5 = 0;
        while (i5 < 188) {
            for (int i6 = 0; i6 < 5; i6++) {
                if (bArr[(i6 * 188) + i5] != 71) {
                    break;
                }
            }
            gVar.u(i5);
            return true;
        }
        return false;
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        x xVar;
        long j7;
        SparseArray sparseArray = this.f344f;
        List list = this.f340b;
        ke.b.k(this.a != 2);
        int size = list.size();
        for (int i5 = 0; i5 < size; i5++) {
            ke.b0 b0Var = (ke.b0) list.get(i5);
            synchronized (b0Var) {
                j7 = b0Var.f13284b;
            }
            boolean z5 = j7 == -9223372036854775807L;
            if (!z5) {
                long c6 = b0Var.c();
                z5 = (c6 == -9223372036854775807L || c6 == 0 || c6 == j5) ? false : true;
            }
            if (z5) {
                b0Var.e(j5);
            }
        }
        if (j5 != 0 && (xVar = this.j) != null) {
            xVar.C(j5);
        }
        this.f341c.C(0);
        this.f342d.clear();
        for (int i6 = 0; i6 < sparseArray.size(); i6++) {
            ((h0) sparseArray.valueAt(i6)).a();
        }
        this.f353q = 0;
    }

    @Override // qc.j
    public final void release() {
    }
}
