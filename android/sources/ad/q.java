package ad;

import android.util.SparseArray;
import com.google.android.exoplayer2.Format;
import java.util.ArrayList;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class q implements i {
    public final e4.e a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f442b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f443c;

    /* renamed from: g, reason: collision with root package name */
    public long f447g;

    /* renamed from: i, reason: collision with root package name */
    public String f449i;
    public qc.v j;
    public p k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f450l;

    /* renamed from: n, reason: collision with root package name */
    public boolean f452n;

    /* renamed from: h, reason: collision with root package name */
    public final boolean[] f448h = new boolean[3];

    /* renamed from: d, reason: collision with root package name */
    public final v f444d = new v(7);

    /* renamed from: e, reason: collision with root package name */
    public final v f445e = new v(8);

    /* renamed from: f, reason: collision with root package name */
    public final v f446f = new v(6);

    /* renamed from: m, reason: collision with root package name */
    public long f451m = -9223372036854775807L;

    /* renamed from: o, reason: collision with root package name */
    public final ke.w f453o = new ke.w();

    public q(e4.e eVar, boolean z5, boolean z6) {
        this.a = eVar;
        this.f442b = z5;
        this.f443c = z6;
    }

    @Override // ad.i
    public final void a() {
        this.f447g = 0L;
        this.f452n = false;
        this.f451m = -9223372036854775807L;
        ke.b.o(this.f448h);
        this.f444d.c();
        this.f445e.c();
        this.f446f.c();
        p pVar = this.k;
        if (pVar != null) {
            pVar.k = false;
            pVar.f438o = false;
            o oVar = pVar.f437n;
            oVar.f414b = false;
            oVar.a = false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:46:0x0102  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0107  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x0118  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x0137  */
    /* JADX WARN: Removed duplicated region for block: B:86:0x0113  */
    /* JADX WARN: Removed duplicated region for block: B:87:0x0104  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void b(byte[] bArr, int i5, int i6) {
        boolean z5;
        boolean z6;
        boolean z7;
        boolean z8;
        int i10;
        int i11;
        int i12;
        int i13;
        int i14;
        int i15;
        if (!this.f450l || this.k.f428c) {
            this.f444d.a(bArr, i5, i6);
            this.f445e.a(bArr, i5, i6);
        }
        this.f446f.a(bArr, i5, i6);
        p pVar = this.k;
        SparseArray sparseArray = pVar.f430e;
        ke.v vVar = pVar.f431f;
        if (pVar.k) {
            int i16 = i6 - i5;
            byte[] bArr2 = pVar.f432g;
            int length = bArr2.length;
            int i17 = pVar.f433h + i16;
            if (length < i17) {
                pVar.f432g = Arrays.copyOf(bArr2, i17 * 2);
            }
            System.arraycopy(bArr, i5, pVar.f432g, pVar.f433h, i16);
            int i18 = pVar.f433h + i16;
            pVar.f433h = i18;
            vVar.f13356b = pVar.f432g;
            vVar.f13358d = 0;
            vVar.f13357c = i18;
            vVar.f13359e = 0;
            vVar.a();
            if (vVar.d(8)) {
                vVar.r();
                int i19 = vVar.i(2);
                vVar.s(5);
                if (vVar.e()) {
                    vVar.l();
                    if (vVar.e()) {
                        int l6 = vVar.l();
                        if (!pVar.f428c) {
                            pVar.k = false;
                            o oVar = pVar.f437n;
                            oVar.f417e = l6;
                            oVar.f414b = true;
                            return;
                        }
                        if (vVar.e()) {
                            int l7 = vVar.l();
                            if (sparseArray.indexOfKey(l7) < 0) {
                                pVar.k = false;
                                return;
                            }
                            ke.q qVar = (ke.q) sparseArray.get(l7);
                            SparseArray sparseArray2 = pVar.f429d;
                            int i20 = qVar.a;
                            boolean z10 = qVar.f13335b;
                            ke.r rVar = (ke.r) sparseArray2.get(i20);
                            boolean z11 = rVar.f13342h;
                            int i21 = rVar.f13344l;
                            int i22 = rVar.j;
                            if (z11) {
                                if (!vVar.d(2)) {
                                    return;
                                } else {
                                    vVar.s(2);
                                }
                            }
                            if (vVar.d(i22)) {
                                int i23 = vVar.i(i22);
                                if (rVar.f13343i) {
                                    z5 = false;
                                    z6 = false;
                                } else {
                                    if (!vVar.d(1)) {
                                        return;
                                    }
                                    z5 = vVar.h();
                                    if (z5) {
                                        if (vVar.d(1)) {
                                            z6 = vVar.h();
                                            z7 = true;
                                            z8 = pVar.f434i != 5;
                                            if (z8) {
                                                i10 = 0;
                                            } else if (!vVar.e()) {
                                                return;
                                            } else {
                                                i10 = vVar.l();
                                            }
                                            i11 = rVar.k;
                                            if (i11 != 0) {
                                                if (!vVar.d(i21)) {
                                                    return;
                                                }
                                                i14 = vVar.i(i21);
                                                if (!z10 || z5) {
                                                    i12 = 0;
                                                } else if (!vVar.e()) {
                                                    return;
                                                } else {
                                                    i12 = vVar.m();
                                                }
                                                i13 = 0;
                                            } else {
                                                if (i11 == 1 && !rVar.f13345m) {
                                                    if (vVar.e()) {
                                                        int m5 = vVar.m();
                                                        if (!z10 || z5) {
                                                            i15 = m5;
                                                            i12 = 0;
                                                            i13 = 0;
                                                        } else {
                                                            if (!vVar.e()) {
                                                                return;
                                                            }
                                                            i13 = vVar.m();
                                                            i15 = m5;
                                                            i12 = 0;
                                                        }
                                                        i14 = 0;
                                                        o oVar2 = pVar.f437n;
                                                        oVar2.f415c = rVar;
                                                        oVar2.f416d = i19;
                                                        oVar2.f417e = l6;
                                                        oVar2.f418f = i23;
                                                        oVar2.f419g = l7;
                                                        oVar2.f420h = z5;
                                                        oVar2.f421i = z7;
                                                        oVar2.j = z6;
                                                        oVar2.k = z8;
                                                        oVar2.f422l = i10;
                                                        oVar2.f423m = i14;
                                                        oVar2.f424n = i12;
                                                        oVar2.f425o = i15;
                                                        oVar2.f426p = i13;
                                                        oVar2.a = true;
                                                        oVar2.f414b = true;
                                                        pVar.k = false;
                                                    }
                                                    return;
                                                }
                                                i12 = 0;
                                                i13 = 0;
                                                i14 = 0;
                                            }
                                            i15 = 0;
                                            o oVar22 = pVar.f437n;
                                            oVar22.f415c = rVar;
                                            oVar22.f416d = i19;
                                            oVar22.f417e = l6;
                                            oVar22.f418f = i23;
                                            oVar22.f419g = l7;
                                            oVar22.f420h = z5;
                                            oVar22.f421i = z7;
                                            oVar22.j = z6;
                                            oVar22.k = z8;
                                            oVar22.f422l = i10;
                                            oVar22.f423m = i14;
                                            oVar22.f424n = i12;
                                            oVar22.f425o = i15;
                                            oVar22.f426p = i13;
                                            oVar22.a = true;
                                            oVar22.f414b = true;
                                            pVar.k = false;
                                        }
                                        return;
                                    }
                                    z6 = false;
                                }
                                z7 = z6;
                                if (pVar.f434i != 5) {
                                }
                                if (z8) {
                                }
                                i11 = rVar.k;
                                if (i11 != 0) {
                                }
                                i15 = 0;
                                o oVar222 = pVar.f437n;
                                oVar222.f415c = rVar;
                                oVar222.f416d = i19;
                                oVar222.f417e = l6;
                                oVar222.f418f = i23;
                                oVar222.f419g = l7;
                                oVar222.f420h = z5;
                                oVar222.f421i = z7;
                                oVar222.j = z6;
                                oVar222.k = z8;
                                oVar222.f422l = i10;
                                oVar222.f423m = i14;
                                oVar222.f424n = i12;
                                oVar222.f425o = i15;
                                oVar222.f426p = i13;
                                oVar222.a = true;
                                oVar222.f414b = true;
                                pVar.k = false;
                            }
                        }
                    }
                }
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:37:0x01e1, code lost:
    
        if (r5.j == r7.j) goto L58;
     */
    /* JADX WARN: Code restructure failed: missing block: B:41:0x01eb, code lost:
    
        if (r11 != 0) goto L62;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x01fd, code lost:
    
        if (r5.f424n == r7.f424n) goto L69;
     */
    /* JADX WARN: Code restructure failed: missing block: B:55:0x020e, code lost:
    
        if (r5.f426p == r7.f426p) goto L76;
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x021c, code lost:
    
        if (r5.f422l == r7.f422l) goto L89;
     */
    /* JADX WARN: Removed duplicated region for block: B:104:0x0237  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x017c  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x01a4  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x025f  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0277 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:79:0x0285  */
    /* JADX WARN: Removed duplicated region for block: B:82:0x028e  */
    /* JADX WARN: Removed duplicated region for block: B:86:0x02ac A[ADDED_TO_REGION] */
    @Override // ad.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(ke.w wVar) {
        int i5;
        int i6;
        byte[] bArr;
        int i10;
        long j;
        v vVar;
        p pVar;
        boolean z5;
        long j5;
        boolean z6;
        p pVar2;
        int i11;
        ke.b.l(this.j);
        int i12 = ke.d0.a;
        int i13 = wVar.f13363b;
        int i14 = wVar.f13364c;
        byte[] bArr2 = wVar.a;
        this.f447g += wVar.a();
        this.j.d(wVar.a(), wVar);
        while (true) {
            int u5 = ke.b.u(bArr2, i13, i14, this.f448h);
            if (u5 == i14) {
                b(bArr2, i13, i14);
                return;
            }
            int i15 = u5 + 3;
            int i16 = bArr2[i15] & 31;
            int i17 = u5 - i13;
            if (i17 > 0) {
                b(bArr2, i13, u5);
            }
            int i18 = i14 - u5;
            long j7 = this.f447g - i18;
            int i19 = i17 < 0 ? -i17 : 0;
            long j10 = this.f451m;
            boolean z7 = this.f450l;
            v vVar2 = this.f444d;
            v vVar3 = this.f445e;
            if (!z7 || this.k.f428c) {
                vVar2.b(i19);
                vVar3.b(i19);
                if (this.f450l) {
                    i5 = i18;
                    i6 = i14;
                    bArr = bArr2;
                    i10 = i15;
                    j = j7;
                    if (vVar2.f503c) {
                        ke.r F = ke.b.F(vVar2.f504d, 3, vVar2.f505e);
                        this.k.f429d.append(F.f13338d, F);
                        vVar2.c();
                    } else if (vVar3.f503c) {
                        ke.v vVar4 = new ke.v(vVar3.f504d, 4, vVar3.f505e);
                        int l6 = vVar4.l();
                        int l7 = vVar4.l();
                        vVar4.r();
                        this.k.f430e.append(l6, new ke.q(l6, l7, vVar4.h()));
                        vVar3.c();
                    }
                } else if (vVar2.f503c && vVar3.f503c) {
                    ArrayList arrayList = new ArrayList();
                    arrayList.add(Arrays.copyOf(vVar2.f504d, vVar2.f505e));
                    arrayList.add(Arrays.copyOf(vVar3.f504d, vVar3.f505e));
                    i5 = i18;
                    ke.r F2 = ke.b.F(vVar2.f504d, 3, vVar2.f505e);
                    i6 = i14;
                    bArr = bArr2;
                    ke.v vVar5 = new ke.v(vVar3.f504d, 4, vVar3.f505e);
                    int l10 = vVar5.l();
                    int l11 = vVar5.l();
                    vVar5.r();
                    ke.q qVar = new ke.q(l10, l11, vVar5.h());
                    i10 = i15;
                    String format = String.format("avc1.%02X%02X%02X", Integer.valueOf(F2.a), Integer.valueOf(F2.f13336b), Integer.valueOf(F2.f13337c));
                    qc.v vVar6 = this.j;
                    hc.f0 f0Var = new hc.f0();
                    j = j7;
                    f0Var.a = this.f449i;
                    f0Var.k = "video/avc";
                    f0Var.f9676h = format;
                    f0Var.f9682p = F2.f13339e;
                    f0Var.f9683q = F2.f13340f;
                    f0Var.f9686t = F2.f13341g;
                    f0Var.f9679m = arrayList;
                    vVar6.e(new Format(f0Var));
                    this.f450l = true;
                    this.k.f429d.append(F2.f13338d, F2);
                    this.k.f430e.append(l10, qVar);
                    vVar2.c();
                    vVar3.c();
                }
                vVar = this.f446f;
                if (vVar.b(i19)) {
                    int M = ke.b.M(vVar.f504d, vVar.f505e);
                    byte[] bArr3 = vVar.f504d;
                    ke.w wVar2 = this.f453o;
                    wVar2.D(bArr3, M);
                    wVar2.F(4);
                    tn.g.d(j10, wVar2, (qc.v[]) this.a.f7944i);
                }
                pVar = this.k;
                z5 = this.f450l;
                boolean z8 = this.f452n;
                if (pVar.f434i != 9) {
                    if (pVar.f428c) {
                        o oVar = pVar.f437n;
                        o oVar2 = pVar.f436m;
                        if (oVar.a) {
                            if (oVar2.a) {
                                ke.r rVar = oVar.f415c;
                                ke.b.l(rVar);
                                ke.r rVar2 = oVar2.f415c;
                                ke.b.l(rVar2);
                                int i20 = rVar2.k;
                                if (oVar.f418f == oVar2.f418f) {
                                    if (oVar.f419g == oVar2.f419g) {
                                        if (oVar.f420h == oVar2.f420h) {
                                            if (oVar.f421i) {
                                                if (oVar2.f421i) {
                                                }
                                            }
                                            int i21 = oVar.f416d;
                                            int i22 = oVar2.f416d;
                                            if (i21 != i22) {
                                                if (i21 != 0) {
                                                }
                                            }
                                            int i23 = rVar.k;
                                            if (i23 == 0) {
                                                if (i20 == 0) {
                                                    if (oVar.f423m == oVar2.f423m) {
                                                    }
                                                }
                                            }
                                            if (i23 == 1) {
                                                if (i20 == 1) {
                                                    if (oVar.f425o == oVar2.f425o) {
                                                    }
                                                }
                                            }
                                            boolean z10 = oVar.k;
                                            if (z10 == oVar2.k) {
                                                if (z10) {
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if (pVar.f427b) {
                        o oVar3 = pVar.f437n;
                        z8 = oVar3.f414b && ((i11 = oVar3.f417e) == 7 || i11 == 2);
                    }
                    boolean z11 = pVar.f441r;
                    int i24 = pVar.f434i;
                    z6 = z11 | (i24 != 5 || (z8 && i24 == 1));
                    pVar.f441r = z6;
                    if (z6) {
                        this.f452n = false;
                    }
                    long j11 = this.f451m;
                    if (this.f450l || this.k.f428c) {
                        vVar2.d(i16);
                        vVar3.d(i16);
                    }
                    vVar.d(i16);
                    pVar2 = this.k;
                    pVar2.f434i = i16;
                    pVar2.f435l = j11;
                    pVar2.j = j;
                    if ((pVar2.f427b && i16 == 1) || (pVar2.f428c && (i16 == 5 || i16 == 1 || i16 == 2))) {
                        o oVar4 = pVar2.f436m;
                        pVar2.f436m = pVar2.f437n;
                        pVar2.f437n = oVar4;
                        oVar4.f414b = false;
                        oVar4.a = false;
                        pVar2.f433h = 0;
                        pVar2.k = true;
                    }
                    i14 = i6;
                    bArr2 = bArr;
                    i13 = i10;
                }
                if (z5 && pVar.f438o) {
                    long j12 = pVar.j;
                    int i25 = i5 + ((int) (j - j12));
                    j5 = pVar.f440q;
                    if (j5 != -9223372036854775807L) {
                        pVar.a.b(j5, pVar.f441r ? 1 : 0, (int) (j12 - pVar.f439p), i25, null);
                    }
                }
                pVar.f439p = pVar.j;
                pVar.f440q = pVar.f435l;
                pVar.f441r = false;
                pVar.f438o = true;
                if (pVar.f427b) {
                }
                boolean z112 = pVar.f441r;
                int i242 = pVar.f434i;
                z6 = z112 | (i242 != 5 || (z8 && i242 == 1));
                pVar.f441r = z6;
                if (z6) {
                }
                long j112 = this.f451m;
                if (this.f450l) {
                }
                vVar2.d(i16);
                vVar3.d(i16);
                vVar.d(i16);
                pVar2 = this.k;
                pVar2.f434i = i16;
                pVar2.f435l = j112;
                pVar2.j = j;
                if (pVar2.f427b) {
                    o oVar42 = pVar2.f436m;
                    pVar2.f436m = pVar2.f437n;
                    pVar2.f437n = oVar42;
                    oVar42.f414b = false;
                    oVar42.a = false;
                    pVar2.f433h = 0;
                    pVar2.k = true;
                    i14 = i6;
                    bArr2 = bArr;
                    i13 = i10;
                }
                o oVar422 = pVar2.f436m;
                pVar2.f436m = pVar2.f437n;
                pVar2.f437n = oVar422;
                oVar422.f414b = false;
                oVar422.a = false;
                pVar2.f433h = 0;
                pVar2.k = true;
                i14 = i6;
                bArr2 = bArr;
                i13 = i10;
            }
            i5 = i18;
            i6 = i14;
            bArr = bArr2;
            i10 = i15;
            j = j7;
            vVar = this.f446f;
            if (vVar.b(i19)) {
            }
            pVar = this.k;
            z5 = this.f450l;
            boolean z82 = this.f452n;
            if (pVar.f434i != 9) {
            }
            if (z5) {
                long j122 = pVar.j;
                int i252 = i5 + ((int) (j - j122));
                j5 = pVar.f440q;
                if (j5 != -9223372036854775807L) {
                }
            }
            pVar.f439p = pVar.j;
            pVar.f440q = pVar.f435l;
            pVar.f441r = false;
            pVar.f438o = true;
            if (pVar.f427b) {
            }
            boolean z1122 = pVar.f441r;
            int i2422 = pVar.f434i;
            z6 = z1122 | (i2422 != 5 || (z82 && i2422 == 1));
            pVar.f441r = z6;
            if (z6) {
            }
            long j1122 = this.f451m;
            if (this.f450l) {
            }
            vVar2.d(i16);
            vVar3.d(i16);
            vVar.d(i16);
            pVar2 = this.k;
            pVar2.f434i = i16;
            pVar2.f435l = j1122;
            pVar2.j = j;
            if (pVar2.f427b) {
            }
            o oVar4222 = pVar2.f436m;
            pVar2.f436m = pVar2.f437n;
            pVar2.f437n = oVar4222;
            oVar4222.f414b = false;
            oVar4222.a = false;
            pVar2.f433h = 0;
            pVar2.k = true;
            i14 = i6;
            bArr2 = bArr;
            i13 = i10;
        }
    }

    @Override // ad.i
    public final void d(qc.l lVar, g0 g0Var) {
        g0Var.a();
        g0Var.b();
        this.f449i = g0Var.f368e;
        g0Var.b();
        qc.v y5 = lVar.y(g0Var.f367d, 2);
        this.j = y5;
        this.k = new p(y5, this.f442b, this.f443c);
        this.a.g(lVar, g0Var);
    }

    @Override // ad.i
    public final void f(int i5, long j) {
        if (j != -9223372036854775807L) {
            this.f451m = j;
        }
        this.f452n = ((i5 & 2) != 0) | this.f452n;
    }

    @Override // ad.i
    public final void e() {
    }
}
