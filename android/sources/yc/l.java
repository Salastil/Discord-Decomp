package yc;

import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.metadata.Metadata;
import hc.f0;
import hc.g1;
import java.nio.charset.Charset;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.List;
import ke.d0;
import ke.w;
import kotlin.jvm.internal.LongCompanionObject;
import qc.s;
import qc.t;
import qc.v;

/* loaded from: classes3.dex */
public final class l implements qc.j, s {

    /* renamed from: i, reason: collision with root package name */
    public int f20820i;
    public long j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public w f20821l;

    /* renamed from: n, reason: collision with root package name */
    public int f20823n;

    /* renamed from: o, reason: collision with root package name */
    public int f20824o;

    /* renamed from: p, reason: collision with root package name */
    public int f20825p;

    /* renamed from: s, reason: collision with root package name */
    public long[][] f20828s;

    /* renamed from: t, reason: collision with root package name */
    public int f20829t;

    /* renamed from: u, reason: collision with root package name */
    public long f20830u;

    /* renamed from: v, reason: collision with root package name */
    public int f20831v;

    /* renamed from: h, reason: collision with root package name */
    public int f20819h = 0;

    /* renamed from: f, reason: collision with root package name */
    public final n f20817f = new n();

    /* renamed from: g, reason: collision with root package name */
    public final ArrayList f20818g = new ArrayList();

    /* renamed from: d, reason: collision with root package name */
    public final w f20815d = new w(16);

    /* renamed from: e, reason: collision with root package name */
    public final ArrayDeque f20816e = new ArrayDeque();
    public final w a = new w(ke.b.f13278d);

    /* renamed from: b, reason: collision with root package name */
    public final w f20813b = new w(4);

    /* renamed from: c, reason: collision with root package name */
    public final w f20814c = new w();

    /* renamed from: m, reason: collision with root package name */
    public int f20822m = -1;

    /* renamed from: q, reason: collision with root package name */
    public qc.l f20826q = qc.l.f16780u;

    /* renamed from: r, reason: collision with root package name */
    public k[] f20827r = new k[0];

    public l(int i5) {
    }

    @Override // qc.j
    public final void a(qc.l lVar) {
        this.f20826q = lVar;
    }

    @Override // qc.s
    public final boolean d() {
        return true;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // qc.j
    public final int e(qc.k kVar, qc.m mVar) {
        int i5;
        w wVar;
        char c6;
        char c8;
        boolean z5;
        a aVar;
        while (true) {
            int i6 = this.f20819h;
            ArrayDeque arrayDeque = this.f20816e;
            w wVar2 = this.f20814c;
            int i10 = 4;
            if (i6 != 0) {
                int i11 = 2;
                if (i6 != 1) {
                    if (i6 == 2) {
                        long position = kVar.getPosition();
                        if (this.f20822m == -1) {
                            int i12 = 0;
                            int i13 = -1;
                            int i14 = -1;
                            boolean z6 = true;
                            boolean z7 = true;
                            long j = LongCompanionObject.MAX_VALUE;
                            long j5 = LongCompanionObject.MAX_VALUE;
                            long j7 = LongCompanionObject.MAX_VALUE;
                            while (true) {
                                k[] kVarArr = this.f20827r;
                                if (i12 >= kVarArr.length) {
                                    break;
                                }
                                k kVar2 = kVarArr[i12];
                                int i15 = kVar2.f20812e;
                                r rVar = kVar2.f20809b;
                                if (i15 != rVar.f20863b) {
                                    long j10 = rVar.f20864c[i15];
                                    long[][] jArr = this.f20828s;
                                    int i16 = d0.a;
                                    long j11 = jArr[i12][i15];
                                    long j12 = j10 - position;
                                    boolean z8 = j12 < 0 || j12 >= 262144;
                                    if ((!z8 && z7) || (z8 == z7 && j12 < j7)) {
                                        z7 = z8;
                                        i14 = i12;
                                        j7 = j12;
                                        j5 = j11;
                                    }
                                    if (j11 < j) {
                                        z6 = z8;
                                        i13 = i12;
                                        j = j11;
                                    }
                                }
                                i12++;
                            }
                            if (j == LongCompanionObject.MAX_VALUE || !z6 || j5 < j + 10485760) {
                                i13 = i14;
                            }
                            this.f20822m = i13;
                            if (i13 == -1) {
                                return -1;
                            }
                        }
                        k kVar3 = this.f20827r[this.f20822m];
                        v vVar = kVar3.f20810c;
                        o oVar = kVar3.a;
                        r rVar2 = kVar3.f20809b;
                        int i17 = kVar3.f20812e;
                        long j13 = rVar2.f20864c[i17];
                        int i18 = rVar2.f20865d[i17];
                        qc.w wVar3 = kVar3.f20811d;
                        int i19 = 0;
                        long j14 = (j13 - position) + this.f20823n;
                        if (j14 < 0 || j14 >= 262144) {
                            mVar.a = j13;
                            return 1;
                        }
                        if (oVar.f20842g == 1) {
                            j14 += 8;
                            i18 -= 8;
                        }
                        kVar.u((int) j14);
                        int i20 = oVar.j;
                        if (i20 == 0) {
                            if ("audio/ac4".equals(oVar.f20841f.I)) {
                                if (this.f20824o == 0) {
                                    jc.a.d(i18, wVar2);
                                    vVar.d(7, wVar2);
                                    this.f20824o += 7;
                                }
                                i18 += 7;
                            } else if (wVar3 != null) {
                                wVar3.c(kVar);
                            }
                            while (true) {
                                int i21 = this.f20824o;
                                if (i21 >= i18) {
                                    break;
                                }
                                int c10 = vVar.c(kVar, i18 - i21, false);
                                this.f20823n += c10;
                                this.f20824o += c10;
                                this.f20825p -= c10;
                            }
                        } else {
                            w wVar4 = this.f20813b;
                            byte[] bArr = wVar4.a;
                            bArr[0] = 0;
                            bArr[1] = 0;
                            bArr[2] = 0;
                            int i22 = 4 - i20;
                            while (this.f20824o < i18) {
                                int i23 = this.f20825p;
                                if (i23 == 0) {
                                    kVar.readFully(bArr, i22, i20);
                                    this.f20823n += i20;
                                    int i24 = i19;
                                    wVar4.F(i24);
                                    int g6 = wVar4.g();
                                    if (g6 < 0) {
                                        throw g1.a("Invalid NAL length", null);
                                    }
                                    this.f20825p = g6;
                                    w wVar5 = this.a;
                                    wVar5.F(i24);
                                    vVar.d(4, wVar5);
                                    this.f20824o += 4;
                                    i18 += i22;
                                    i19 = i24;
                                } else {
                                    int c11 = vVar.c(kVar, i23, i19);
                                    this.f20823n += c11;
                                    this.f20824o += c11;
                                    this.f20825p -= c11;
                                    i19 = 0;
                                }
                            }
                        }
                        int i25 = i18;
                        long j15 = rVar2.f20867f[i17];
                        int i26 = rVar2.f20868g[i17];
                        if (wVar3 != null) {
                            wVar3.b(vVar, j15, i26, i25, 0, null);
                            if (i17 + 1 == rVar2.f20863b) {
                                wVar3.a(vVar, null);
                            }
                        } else {
                            vVar.b(j15, i26, i25, 0, null);
                        }
                        kVar3.f20812e++;
                        this.f20822m = -1;
                        this.f20823n = 0;
                        this.f20824o = 0;
                        this.f20825p = 0;
                        return 0;
                    }
                    if (i6 != 3) {
                        throw new IllegalStateException();
                    }
                    n nVar = this.f20817f;
                    ArrayList arrayList = nVar.a;
                    int i27 = nVar.f20835b;
                    if (i27 != 0) {
                        if (i27 != 1) {
                            short s2 = 2816;
                            short s5 = 2192;
                            if (i27 == 2) {
                                long length = kVar.getLength();
                                int i28 = nVar.f20836c - 20;
                                w wVar6 = new w(i28);
                                kVar.readFully(wVar6.a, 0, i28);
                                int i29 = 0;
                                while (i29 < i28 / 12) {
                                    wVar6.G(i11);
                                    short k = wVar6.k();
                                    if (k != s5 && k != s2) {
                                        if (k != 2817 && k != 2819) {
                                            if (k != 2820) {
                                                wVar6.G(8);
                                                wVar = wVar6;
                                                i29++;
                                                wVar6 = wVar;
                                                s5 = 2192;
                                                i11 = 2;
                                                s2 = 2816;
                                            }
                                        }
                                    }
                                    wVar = wVar6;
                                    arrayList.add(new m((length - nVar.f20836c) - wVar.i(), wVar.i()));
                                    i29++;
                                    wVar6 = wVar;
                                    s5 = 2192;
                                    i11 = 2;
                                    s2 = 2816;
                                }
                                if (arrayList.isEmpty()) {
                                    mVar.a = 0L;
                                } else {
                                    nVar.f20835b = 3;
                                    mVar.a = ((m) arrayList.get(0)).a;
                                }
                            } else {
                                if (i27 != 3) {
                                    throw new IllegalStateException();
                                }
                                long position2 = kVar.getPosition();
                                int length2 = (int) ((kVar.getLength() - kVar.getPosition()) - nVar.f20836c);
                                w wVar7 = new w(length2);
                                kVar.readFully(wVar7.a, 0, length2);
                                int i30 = 0;
                                while (i30 < arrayList.size()) {
                                    m mVar2 = (m) arrayList.get(i30);
                                    wVar7.F((int) (mVar2.a - position2));
                                    wVar7.G(i10);
                                    int i31 = wVar7.i();
                                    Charset charset = ei.d.f8100c;
                                    String s7 = wVar7.s(i31, charset);
                                    switch (s7.hashCode()) {
                                        case -1711564334:
                                            if (s7.equals("SlowMotion_Data")) {
                                                c6 = 0;
                                                break;
                                            }
                                            break;
                                        case -1332107749:
                                            if (s7.equals("Super_SlowMotion_Edit_Data")) {
                                                c6 = 1;
                                                break;
                                            }
                                            break;
                                        case -1251387154:
                                            if (s7.equals("Super_SlowMotion_Data")) {
                                                c6 = 2;
                                                break;
                                            }
                                            break;
                                        case -830665521:
                                            if (s7.equals("Super_SlowMotion_Deflickering_On")) {
                                                c6 = 3;
                                                break;
                                            }
                                            break;
                                        case 1760745220:
                                            if (s7.equals("Super_SlowMotion_BGM")) {
                                                c6 = 4;
                                                break;
                                            }
                                            break;
                                    }
                                    c6 = 65535;
                                    switch (c6) {
                                        case 0:
                                            c8 = 2192;
                                            break;
                                        case 1:
                                            c8 = 2819;
                                            break;
                                        case 2:
                                            c8 = 2816;
                                            break;
                                        case 3:
                                            c8 = 2820;
                                            break;
                                        case 4:
                                            c8 = 2817;
                                            break;
                                        default:
                                            throw g1.a("Invalid SEF name", null);
                                    }
                                    int i32 = mVar2.f20832b - (i31 + 8);
                                    if (c8 == 2192) {
                                        ArrayList arrayList2 = new ArrayList();
                                        List x5 = n.f20834e.x(wVar7.s(i32, charset));
                                        for (int i33 = 0; i33 < x5.size(); i33++) {
                                            List x10 = n.f20833d.x((CharSequence) x5.get(i33));
                                            if (x10.size() != 3) {
                                                throw g1.a(null, null);
                                            }
                                            try {
                                                arrayList2.add(new jd.c(1 << (Integer.parseInt((String) x10.get(2)) - 1), Long.parseLong((String) x10.get(0)), Long.parseLong((String) x10.get(1))));
                                            } catch (NumberFormatException e9) {
                                                throw g1.a(null, e9);
                                            }
                                        }
                                        this.f20818g.add(new jd.d(arrayList2));
                                    } else if (c8 != 2816 && c8 != 2817 && c8 != 2819 && c8 != 2820) {
                                        throw new IllegalStateException();
                                    }
                                    i30++;
                                    i10 = 4;
                                }
                                mVar.a = 0L;
                            }
                        } else {
                            w wVar8 = new w(8);
                            kVar.readFully(wVar8.a, 0, 8);
                            nVar.f20836c = wVar8.i() + 8;
                            if (wVar8.g() != 1397048916) {
                                mVar.a = 0L;
                            } else {
                                mVar.a = kVar.getPosition() - (nVar.f20836c - 12);
                                nVar.f20835b = 2;
                            }
                        }
                        i5 = 1;
                    } else {
                        long length3 = kVar.getLength();
                        mVar.a = (length3 == -1 || length3 < 8) ? 0L : length3 - 8;
                        i5 = 1;
                        nVar.f20835b = 1;
                    }
                    if (mVar.a != 0) {
                        return i5;
                    }
                    this.f20819h = 0;
                    this.k = 0;
                    return i5;
                }
                long j16 = this.j - this.k;
                long position3 = kVar.getPosition() + j16;
                w wVar9 = this.f20821l;
                if (wVar9 != null) {
                    kVar.readFully(wVar9.a, this.k, (int) j16);
                    if (this.f20820i == 1718909296) {
                        wVar9.F(8);
                        int g10 = wVar9.g();
                        int i34 = g10 != 1751476579 ? g10 != 1903435808 ? 0 : 1 : 2;
                        if (i34 == 0) {
                            wVar9.G(4);
                            while (true) {
                                if (wVar9.a() <= 0) {
                                    i34 = 0;
                                    break;
                                }
                                int g11 = wVar9.g();
                                i34 = g11 != 1751476579 ? g11 != 1903435808 ? 0 : 1 : 2;
                                if (i34 != 0) {
                                    break;
                                }
                            }
                        }
                        this.f20831v = i34;
                    } else if (!arrayDeque.isEmpty()) {
                        ((a) arrayDeque.peek()).f20760v.add(new b(this.f20820i, wVar9));
                    }
                } else if (j16 < 262144) {
                    kVar.u((int) j16);
                } else {
                    mVar.a = kVar.getPosition() + j16;
                    z5 = true;
                    j(position3);
                    if (z5 && this.f20819h != 2) {
                        return 1;
                    }
                }
                z5 = false;
                j(position3);
                if (z5) {
                    return 1;
                }
                continue;
            } else {
                int i35 = this.k;
                w wVar10 = this.f20815d;
                if (i35 == 0) {
                    if (!kVar.a(wVar10.a, 0, 8, true)) {
                        return -1;
                    }
                    this.k = 8;
                    wVar10.F(0);
                    this.j = wVar10.v();
                    this.f20820i = wVar10.g();
                }
                long j17 = this.j;
                if (j17 == 1) {
                    kVar.readFully(wVar10.a, 8, 8);
                    this.k += 8;
                    this.j = wVar10.y();
                } else if (j17 == 0) {
                    long length4 = kVar.getLength();
                    if (length4 == -1 && (aVar = (a) arrayDeque.peek()) != null) {
                        length4 = aVar.f20759i;
                    }
                    if (length4 != -1) {
                        this.j = (length4 - kVar.getPosition()) + this.k;
                    }
                }
                long j18 = this.j;
                int i36 = this.k;
                if (j18 < i36) {
                    throw g1.c("Atom size less than header length (unsupported).");
                }
                int i37 = this.f20820i;
                if (i37 == 1836019574 || i37 == 1953653099 || i37 == 1835297121 || i37 == 1835626086 || i37 == 1937007212 || i37 == 1701082227 || i37 == 1835365473) {
                    long position4 = kVar.getPosition();
                    long j19 = this.j;
                    long j20 = this.k;
                    long j21 = (position4 + j19) - j20;
                    if (j19 != j20 && this.f20820i == 1835365473) {
                        wVar2.C(8);
                        kVar.C(wVar2.a, 0, 8);
                        byte[] bArr2 = e.a;
                        int i38 = wVar2.f13363b;
                        wVar2.G(4);
                        if (wVar2.g() != 1751411826) {
                            i38 += 4;
                        }
                        wVar2.F(i38);
                        kVar.u(wVar2.f13363b);
                        kVar.t();
                    }
                    arrayDeque.push(new a(this.f20820i, j21));
                    if (this.j == this.k) {
                        j(j21);
                    } else {
                        this.f20819h = 0;
                        this.k = 0;
                    }
                } else if (i37 == 1835296868 || i37 == 1836476516 || i37 == 1751411826 || i37 == 1937011556 || i37 == 1937011827 || i37 == 1937011571 || i37 == 1668576371 || i37 == 1701606260 || i37 == 1937011555 || i37 == 1937011578 || i37 == 1937013298 || i37 == 1937007471 || i37 == 1668232756 || i37 == 1953196132 || i37 == 1718909296 || i37 == 1969517665 || i37 == 1801812339 || i37 == 1768715124) {
                    ke.b.k(i36 == 8);
                    ke.b.k(this.j <= 2147483647L);
                    w wVar11 = new w((int) this.j);
                    System.arraycopy(wVar10.a, 0, wVar11.a, 0, 8);
                    this.f20821l = wVar11;
                    this.f20819h = 1;
                } else {
                    long position5 = kVar.getPosition();
                    long j22 = this.k;
                    long j23 = position5 - j22;
                    if (this.f20820i == 1836086884) {
                        new jd.b(0L, j23, -9223372036854775807L, j23 + j22, this.j - j22);
                    }
                    this.f20821l = null;
                    this.f20819h = 1;
                }
            }
        }
    }

    @Override // qc.j
    public final boolean f(qc.k kVar) {
        return j.j(kVar, false, false);
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        this.f20816e.clear();
        this.k = 0;
        this.f20822m = -1;
        this.f20823n = 0;
        this.f20824o = 0;
        this.f20825p = 0;
        if (j == 0) {
            if (this.f20819h != 3) {
                this.f20819h = 0;
                this.k = 0;
                return;
            } else {
                n nVar = this.f20817f;
                nVar.a.clear();
                nVar.f20835b = 0;
                this.f20818g.clear();
                return;
            }
        }
        for (k kVar : this.f20827r) {
            r rVar = kVar.f20809b;
            int e9 = d0.e(rVar.f20867f, j5, false);
            while (true) {
                if (e9 < 0) {
                    e9 = -1;
                    break;
                } else if ((rVar.f20868g[e9] & 1) != 0) {
                    break;
                } else {
                    e9--;
                }
            }
            if (e9 == -1) {
                e9 = rVar.a(j5);
            }
            kVar.f20812e = e9;
            qc.w wVar = kVar.f20811d;
            if (wVar != null) {
                wVar.f16803b = false;
                wVar.f16804c = 0;
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:31:0x0070  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x00e4 A[EDGE_INSN: B:70:0x00e4->B:71:0x00e4 BREAK  A[LOOP:1: B:29:0x006b->B:58:0x00e0], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:73:0x00f2  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x00f8  */
    @Override // qc.s
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final qc.r h(long j) {
        long j5;
        long j7;
        long j10;
        int i5;
        k[] kVarArr;
        int i6;
        int i10;
        long j11;
        int a;
        k[] kVarArr2 = this.f20827r;
        int length = kVarArr2.length;
        t tVar = t.f16798c;
        if (length == 0) {
            return new qc.r(tVar, tVar);
        }
        int i11 = this.f20829t;
        boolean z5 = false;
        int i12 = -1;
        long j12 = -1;
        if (i11 != -1) {
            r rVar = kVarArr2[i11].f20809b;
            long[] jArr = rVar.f20867f;
            int e9 = d0.e(jArr, j, false);
            while (true) {
                if (e9 < 0) {
                    e9 = -1;
                    break;
                }
                if ((rVar.f20868g[e9] & 1) != 0) {
                    break;
                }
                e9--;
            }
            if (e9 == -1) {
                e9 = rVar.a(j);
            }
            long[] jArr2 = rVar.f20864c;
            if (e9 == -1) {
                return new qc.r(tVar, tVar);
            }
            j7 = jArr[e9];
            j5 = jArr2[e9];
            if (j7 < j && e9 < rVar.f20863b - 1 && (a = rVar.a(j)) != -1 && a != e9) {
                j10 = jArr[a];
                j12 = jArr2[a];
                i5 = 0;
                long j13 = j5;
                while (true) {
                    kVarArr = this.f20827r;
                    if (i5 < kVarArr.length) {
                        break;
                    }
                    if (i5 != this.f20829t) {
                        r rVar2 = kVarArr[i5].f20809b;
                        long[] jArr3 = rVar2.f20864c;
                        int[] iArr = rVar2.f20868g;
                        long[] jArr4 = rVar2.f20867f;
                        int e10 = d0.e(jArr4, j7, z5);
                        while (true) {
                            if (e10 < 0) {
                                i10 = i12;
                                break;
                            }
                            if ((iArr[e10] & 1) != 0) {
                                i10 = e10;
                                break;
                            }
                            e10--;
                        }
                        if (i10 == i12) {
                            i10 = rVar2.a(j7);
                        }
                        if (i10 == i12) {
                            j11 = j12;
                        } else {
                            j11 = j12;
                            j13 = Math.min(jArr3[i10], j13);
                        }
                        if (j10 != -9223372036854775807L) {
                            z5 = false;
                            int e11 = d0.e(jArr4, j10, false);
                            while (true) {
                                if (e11 < 0) {
                                    e11 = -1;
                                    break;
                                }
                                if ((iArr[e11] & 1) != 0) {
                                    break;
                                }
                                e11--;
                            }
                            i6 = -1;
                            if (e11 == -1) {
                                e11 = rVar2.a(j10);
                            }
                            j12 = e11 == -1 ? j11 : Math.min(jArr3[e11], j11);
                        } else {
                            j12 = j11;
                            z5 = false;
                            i6 = -1;
                        }
                    } else {
                        i6 = i12;
                    }
                    i5++;
                    i12 = i6;
                }
                t tVar2 = new t(j7, j13);
                return j10 != -9223372036854775807L ? new qc.r(tVar2, tVar2) : new qc.r(tVar2, new t(j10, j12));
            }
        } else {
            j5 = LongCompanionObject.MAX_VALUE;
            j7 = j;
        }
        j10 = -9223372036854775807L;
        i5 = 0;
        long j132 = j5;
        while (true) {
            kVarArr = this.f20827r;
            if (i5 < kVarArr.length) {
            }
            i5++;
            i12 = i6;
        }
        t tVar22 = new t(j7, j132);
        if (j10 != -9223372036854775807L) {
        }
    }

    @Override // qc.s
    public final long i() {
        return this.f20830u;
    }

    /* JADX WARN: Code restructure failed: missing block: B:100:0x01bf, code lost:
    
        if (r9 != 757935405) goto L124;
     */
    /* JADX WARN: Code restructure failed: missing block: B:101:0x01c1, code lost:
    
        r12 = null;
        r14 = null;
        r0 = -1;
        r9 = -1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:102:0x01c5, code lost:
    
        r15 = r7.f13363b;
     */
    /* JADX WARN: Code restructure failed: missing block: B:103:0x01c7, code lost:
    
        if (r15 >= r8) goto L367;
     */
    /* JADX WARN: Code restructure failed: missing block: B:104:0x01c9, code lost:
    
        r19 = r7.g();
        r13 = r7.g();
        r30 = r4;
        r7.G(4);
     */
    /* JADX WARN: Code restructure failed: missing block: B:105:0x01da, code lost:
    
        if (r13 != 1835360622) goto L106;
     */
    /* JADX WARN: Code restructure failed: missing block: B:106:0x01dc, code lost:
    
        r12 = r7.q(r19 - 12);
     */
    /* JADX WARN: Code restructure failed: missing block: B:108:0x01fc, code lost:
    
        r4 = r30;
     */
    /* JADX WARN: Code restructure failed: missing block: B:110:0x01e6, code lost:
    
        if (r13 != 1851878757) goto L109;
     */
    /* JADX WARN: Code restructure failed: missing block: B:111:0x01e8, code lost:
    
        r14 = r7.q(r19 - 12);
     */
    /* JADX WARN: Code restructure failed: missing block: B:114:0x01f2, code lost:
    
        if (r13 != 1684108385) goto L112;
     */
    /* JADX WARN: Code restructure failed: missing block: B:115:0x01f4, code lost:
    
        r0 = r15;
        r9 = r19;
     */
    /* JADX WARN: Code restructure failed: missing block: B:116:0x01f7, code lost:
    
        r7.G(r19 - 12);
     */
    /* JADX WARN: Code restructure failed: missing block: B:119:0x0200, code lost:
    
        r30 = r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:120:0x0202, code lost:
    
        if (r12 == null) goto L122;
     */
    /* JADX WARN: Code restructure failed: missing block: B:121:0x0204, code lost:
    
        if (r14 == null) goto L122;
     */
    /* JADX WARN: Code restructure failed: missing block: B:123:0x0207, code lost:
    
        if (r0 != (-1)) goto L120;
     */
    /* JADX WARN: Code restructure failed: missing block: B:125:0x020a, code lost:
    
        r7.F(r0);
        r7.G(16);
     */
    /* JADX WARN: Code restructure failed: missing block: B:126:0x021d, code lost:
    
        r12 = new id.k(r12, r14, r7.q(r9 - 16));
     */
    /* JADX WARN: Code restructure failed: missing block: B:127:0x0220, code lost:
    
        r7.F(r8);
     */
    /* JADX WARN: Code restructure failed: missing block: B:128:0x021f, code lost:
    
        r12 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:129:0x0225, code lost:
    
        r30 = r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:130:0x02a2, code lost:
    
        ke.b.q("MetadataUtil", "Skipped unknown metadata entry: " + mc.a.b(r9));
     */
    /* JADX WARN: Code restructure failed: missing block: B:131:0x02b5, code lost:
    
        r7.F(r8);
        r12 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:133:0x00c9, code lost:
    
        r9 = yc.j.i(r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:134:0x00cd, code lost:
    
        if (r9 <= 0) goto L43;
     */
    /* JADX WARN: Code restructure failed: missing block: B:135:0x00cf, code lost:
    
        r12 = yc.j.a;
     */
    /* JADX WARN: Code restructure failed: missing block: B:136:0x00d3, code lost:
    
        if (r9 > 192) goto L43;
     */
    /* JADX WARN: Code restructure failed: missing block: B:137:0x00d5, code lost:
    
        r9 = r12[r9 - 1];
     */
    /* JADX WARN: Code restructure failed: missing block: B:138:0x00db, code lost:
    
        if (r9 == null) goto L46;
     */
    /* JADX WARN: Code restructure failed: missing block: B:139:0x00dd, code lost:
    
        r12 = new id.n("TCON", null, fi.e0.s(r9));
     */
    /* JADX WARN: Code restructure failed: missing block: B:140:0x00e8, code lost:
    
        ke.b.N("MetadataUtil", "Failed to parse standard genre code");
     */
    /* JADX WARN: Code restructure failed: missing block: B:141:0x00ee, code lost:
    
        r12 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:142:0x00da, code lost:
    
        r9 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:144:0x0103, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:146:0x02db, code lost:
    
        r7.F(r8);
     */
    /* JADX WARN: Code restructure failed: missing block: B:147:0x02de, code lost:
    
        throw r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:149:0x00c0, code lost:
    
        r30 = r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:150:0x0229, code lost:
    
        r4 = 16777215 & r9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:151:0x0230, code lost:
    
        if (r4 != 6516084) goto L128;
     */
    /* JADX WARN: Code restructure failed: missing block: B:152:0x0232, code lost:
    
        r12 = yc.j.b(r9, r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:154:0x023a, code lost:
    
        if (r4 == 7233901) goto L162;
     */
    /* JADX WARN: Code restructure failed: missing block: B:156:0x023f, code lost:
    
        if (r4 != 7631467) goto L133;
     */
    /* JADX WARN: Code restructure failed: missing block: B:159:0x0246, code lost:
    
        if (r4 == 6516589) goto L161;
     */
    /* JADX WARN: Code restructure failed: missing block: B:161:0x024b, code lost:
    
        if (r4 != 7828084) goto L138;
     */
    /* JADX WARN: Code restructure failed: missing block: B:164:0x0252, code lost:
    
        if (r4 != 6578553) goto L141;
     */
    /* JADX WARN: Code restructure failed: missing block: B:165:0x0254, code lost:
    
        r12 = yc.j.g(r9, "TDRC", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:167:0x025e, code lost:
    
        if (r4 != 4280916) goto L144;
     */
    /* JADX WARN: Code restructure failed: missing block: B:168:0x0260, code lost:
    
        r12 = yc.j.g(r9, "TPE1", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:170:0x026a, code lost:
    
        if (r4 != 7630703) goto L147;
     */
    /* JADX WARN: Code restructure failed: missing block: B:171:0x026c, code lost:
    
        r12 = yc.j.g(r9, "TSSE", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:173:0x0276, code lost:
    
        if (r4 != 6384738) goto L150;
     */
    /* JADX WARN: Code restructure failed: missing block: B:174:0x0278, code lost:
    
        r12 = yc.j.g(r9, "TALB", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:176:0x0282, code lost:
    
        if (r4 != 7108978) goto L153;
     */
    /* JADX WARN: Code restructure failed: missing block: B:177:0x0284, code lost:
    
        r12 = yc.j.g(r9, "USLT", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:179:0x028e, code lost:
    
        if (r4 != 6776174) goto L156;
     */
    /* JADX WARN: Code restructure failed: missing block: B:180:0x0290, code lost:
    
        r12 = yc.j.g(r9, "TCON", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:182:0x0298, code lost:
    
        if (r4 != 6779504) goto L159;
     */
    /* JADX WARN: Code restructure failed: missing block: B:183:0x029a, code lost:
    
        r12 = yc.j.g(r9, "TIT1", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:184:0x02ba, code lost:
    
        r12 = yc.j.g(r9, "TCOM", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:185:0x02c2, code lost:
    
        r12 = yc.j.g(r9, "TIT2", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:187:0x02df, code lost:
    
        r29 = r0;
        r26 = r9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:188:0x02e7, code lost:
    
        if (r3.isEmpty() == false) goto L172;
     */
    /* JADX WARN: Code restructure failed: missing block: B:189:0x02e9, code lost:
    
        r19 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:192:0x02ed, code lost:
    
        r19 = new com.google.android.exoplayer2.metadata.Metadata(r3);
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x0090, code lost:
    
        r7.F(r4);
        r4 = r4 + r15;
        r7.G(r9);
        r3 = new java.util.ArrayList();
     */
    /* JADX WARN: Code restructure failed: missing block: B:38:0x009c, code lost:
    
        r8 = r7.f13363b;
     */
    /* JADX WARN: Code restructure failed: missing block: B:39:0x009e, code lost:
    
        if (r8 >= r4) goto L364;
     */
    /* JADX WARN: Code restructure failed: missing block: B:40:0x00a0, code lost:
    
        r8 = r7.g() + r8;
        r26 = r9;
        r9 = r7.g();
        r12 = (r9 >> 24) & 255;
        r29 = r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:41:0x00ba, code lost:
    
        if (r12 == 169) goto L35;
     */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x00be, code lost:
    
        if (r12 != 253) goto L36;
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x00c7, code lost:
    
        if (r9 != 1735291493) goto L50;
     */
    /* JADX WARN: Code restructure failed: missing block: B:47:0x00fa, code lost:
    
        if (r9 != 1684632427) goto L55;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x00fc, code lost:
    
        r12 = yc.j.d(r9, "TPOS", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:49:0x00ef, code lost:
    
        r7.F(r8);
     */
    /* JADX WARN: Code restructure failed: missing block: B:50:0x00f2, code lost:
    
        r30 = r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:51:0x02ca, code lost:
    
        if (r12 == null) goto L366;
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x02cc, code lost:
    
        r3.add(r12);
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x02cf, code lost:
    
        r9 = r26;
        r0 = r29;
        r4 = r30;
     */
    /* JADX WARN: Code restructure failed: missing block: B:57:0x0109, code lost:
    
        if (r9 != 1953655662) goto L58;
     */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x010b, code lost:
    
        r12 = yc.j.d(r9, "TRCK", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x0115, code lost:
    
        if (r9 != 1953329263) goto L62;
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x0117, code lost:
    
        r0 = yc.j.h(r9, "TBPM", r7, true, false);
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x011f, code lost:
    
        r7.F(r8);
        r12 = r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:64:0x0127, code lost:
    
        if (r9 != 1668311404) goto L65;
     */
    /* JADX WARN: Code restructure failed: missing block: B:65:0x0129, code lost:
    
        r0 = yc.j.h(r9, "TCMP", r7, true, true);
     */
    /* JADX WARN: Code restructure failed: missing block: B:67:0x0134, code lost:
    
        if (r9 != 1668249202) goto L68;
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x0136, code lost:
    
        r12 = yc.j.c(r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:70:0x013e, code lost:
    
        if (r9 != 1631670868) goto L71;
     */
    /* JADX WARN: Code restructure failed: missing block: B:71:0x0140, code lost:
    
        r12 = yc.j.g(r9, "TPE2", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:73:0x014a, code lost:
    
        if (r9 != 1936682605) goto L74;
     */
    /* JADX WARN: Code restructure failed: missing block: B:74:0x014c, code lost:
    
        r12 = yc.j.g(r9, "TSOT", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x0156, code lost:
    
        if (r9 != 1936679276) goto L77;
     */
    /* JADX WARN: Code restructure failed: missing block: B:77:0x0158, code lost:
    
        r12 = yc.j.g(r9, "TSO2", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:79:0x0162, code lost:
    
        if (r9 != 1936679282) goto L80;
     */
    /* JADX WARN: Code restructure failed: missing block: B:80:0x0164, code lost:
    
        r12 = yc.j.g(r9, "TSOA", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x016e, code lost:
    
        if (r9 != 1936679265) goto L83;
     */
    /* JADX WARN: Code restructure failed: missing block: B:83:0x0170, code lost:
    
        r12 = yc.j.g(r9, "TSOP", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x017b, code lost:
    
        if (r9 != 1936679791) goto L86;
     */
    /* JADX WARN: Code restructure failed: missing block: B:86:0x017d, code lost:
    
        r12 = yc.j.g(r9, "TSOC", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:88:0x0188, code lost:
    
        if (r9 != 1920233063) goto L89;
     */
    /* JADX WARN: Code restructure failed: missing block: B:89:0x018a, code lost:
    
        r12 = yc.j.h(r9, "ITUNESADVISORY", r7, false, false);
     */
    /* JADX WARN: Code restructure failed: missing block: B:91:0x0196, code lost:
    
        if (r9 != 1885823344) goto L92;
     */
    /* JADX WARN: Code restructure failed: missing block: B:92:0x0198, code lost:
    
        r0 = yc.j.h(r9, "ITUNESGAPLESS", r7, false, true);
     */
    /* JADX WARN: Code restructure failed: missing block: B:94:0x01a5, code lost:
    
        if (r9 != 1936683886) goto L95;
     */
    /* JADX WARN: Code restructure failed: missing block: B:95:0x01a7, code lost:
    
        r12 = yc.j.g(r9, "TVSHOWSORT", r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:97:0x01b2, code lost:
    
        if (r9 != 1953919848) goto L98;
     */
    /* JADX WARN: Code restructure failed: missing block: B:98:0x01b4, code lost:
    
        r12 = yc.j.g(r9, "TVSHOW", r7);
     */
    /* JADX WARN: Removed duplicated region for block: B:278:0x051f  */
    /* JADX WARN: Removed duplicated region for block: B:352:0x064a A[EDGE_INSN: B:352:0x064a->B:353:0x064a BREAK  A[LOOP:9: B:276:0x051b->B:282:0x063f], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:356:0x066b A[LOOP:12: B:354:0x0668->B:356:0x066b, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:361:0x0688  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void j(long j) {
        ArrayDeque arrayDeque;
        int i5;
        Metadata metadata;
        Metadata metadata2;
        Metadata metadata3;
        qc.p pVar;
        Metadata metadata4;
        ArrayList f2;
        int size;
        int i6;
        int i10;
        long j5;
        k[] kVarArr;
        int i11;
        int i12;
        ArrayList arrayList;
        int i13;
        int i14;
        Metadata metadata5;
        int i15;
        Metadata metadata6;
        int i16;
        int i17;
        qc.p pVar2;
        int i18;
        String[] strArr;
        jd.a aVar;
        ArrayDeque arrayDeque2;
        int i19;
        while (true) {
            ArrayDeque arrayDeque3 = this.f20816e;
            if (arrayDeque3.isEmpty() || ((a) arrayDeque3.peek()).f20759i != j) {
                break;
            }
            a aVar2 = (a) arrayDeque3.pop();
            if (aVar2.f14426e == 1836019574) {
                ArrayList arrayList2 = new ArrayList();
                boolean z5 = this.f20831v == 1;
                qc.p pVar3 = new qc.p();
                b g6 = aVar2.g(1969517665);
                int i20 = 1751411826;
                int i21 = 4;
                int i22 = 1768715124;
                int i23 = 1835365473;
                int i24 = 8;
                if (g6 != null) {
                    byte[] bArr = e.a;
                    w wVar = g6.f20762i;
                    wVar.F(8);
                    Metadata metadata7 = null;
                    Metadata metadata8 = null;
                    Metadata metadata9 = null;
                    while (wVar.a() >= i24) {
                        int i25 = wVar.f13363b;
                        int g10 = wVar.g();
                        int g11 = wVar.g();
                        if (g11 == i23) {
                            wVar.F(i25);
                            int i26 = i25 + g10;
                            wVar.G(i24);
                            int i27 = wVar.f13363b;
                            wVar.G(i21);
                            if (wVar.g() != i20) {
                                i27 += 4;
                            }
                            wVar.F(i27);
                            while (true) {
                                int i28 = wVar.f13363b;
                                if (i28 >= i26) {
                                    arrayDeque2 = arrayDeque3;
                                    i19 = i24;
                                    break;
                                } else {
                                    int g12 = wVar.g();
                                    if (wVar.g() == i22) {
                                        break;
                                    }
                                    wVar.F(i28 + g12);
                                    i22 = 1768715124;
                                }
                            }
                        } else {
                            arrayDeque2 = arrayDeque3;
                            i19 = i24;
                            if (g11 == 1936553057) {
                                wVar.F(i25);
                                int i29 = i25 + g10;
                                wVar.G(12);
                                while (true) {
                                    int i30 = wVar.f13363b;
                                    if (i30 >= i29) {
                                        break;
                                    }
                                    int g13 = wVar.g();
                                    if (wVar.g() != 1935766900) {
                                        wVar.F(i30 + g13);
                                    } else if (g13 >= 14) {
                                        wVar.G(5);
                                        int u5 = wVar.u();
                                        if (u5 == 12 || u5 == 13) {
                                            float f10 = u5 == 12 ? 240.0f : 120.0f;
                                            wVar.G(1);
                                            metadata7 = new Metadata(new jd.e(f10, wVar.u()));
                                        }
                                    }
                                }
                                metadata7 = null;
                            } else if (g11 == -1451722374) {
                                short r5 = wVar.r();
                                wVar.G(2);
                                String s2 = wVar.s(r5, ei.d.f8100c);
                                int max = Math.max(s2.lastIndexOf(43), s2.lastIndexOf(45));
                                try {
                                    metadata9 = new Metadata(new kc.b(Float.parseFloat(s2.substring(0, max)), Float.parseFloat(s2.substring(max, s2.length() - 1))));
                                } catch (IndexOutOfBoundsException | NumberFormatException unused) {
                                    metadata9 = null;
                                }
                            }
                        }
                        wVar.F(i25 + g10);
                        i24 = i19;
                        arrayDeque3 = arrayDeque2;
                        i23 = 1835365473;
                        i20 = 1751411826;
                        i22 = 1768715124;
                        i21 = 4;
                    }
                    arrayDeque = arrayDeque3;
                    i5 = i24;
                    Metadata metadata10 = metadata8;
                    if (metadata10 != null) {
                        pVar3.b(metadata10);
                    }
                    metadata3 = metadata10;
                    metadata = metadata7;
                    metadata2 = metadata9;
                    i23 = 1835365473;
                } else {
                    arrayDeque = arrayDeque3;
                    i5 = 8;
                    metadata = null;
                    metadata2 = null;
                    metadata3 = null;
                }
                a f11 = aVar2.f(i23);
                if (f11 != null) {
                    byte[] bArr2 = e.a;
                    b g14 = f11.g(1751411826);
                    b g15 = f11.g(1801812339);
                    b g16 = f11.g(1768715124);
                    if (g14 != null && g15 != null && g16 != null) {
                        w wVar2 = g14.f20762i;
                        wVar2.F(16);
                        if (wVar2.g() == 1835299937) {
                            w wVar3 = g15.f20762i;
                            wVar3.F(12);
                            int g17 = wVar3.g();
                            String[] strArr2 = new String[g17];
                            for (int i31 = 0; i31 < g17; i31++) {
                                int g18 = wVar3.g();
                                wVar3.G(4);
                                strArr2[i31] = wVar3.s(g18 - 8, ei.d.f8100c);
                            }
                            w wVar4 = g16.f20762i;
                            int i32 = i5;
                            wVar4.F(i32);
                            ArrayList arrayList3 = new ArrayList();
                            while (wVar4.a() > i32) {
                                int i33 = wVar4.f13363b;
                                int g19 = wVar4.g();
                                int g20 = wVar4.g() - 1;
                                if (g20 < 0 || g20 >= g17) {
                                    pVar2 = pVar3;
                                    i18 = g17;
                                    strArr = strArr2;
                                    com.discord.chat.bridge.botuikit.a.q(g20, "Skipped metadata with unknown key index: ", "AtomParsers");
                                } else {
                                    String str = strArr2[g20];
                                    int i34 = i33 + g19;
                                    while (true) {
                                        int i35 = wVar4.f13363b;
                                        if (i35 >= i34) {
                                            pVar2 = pVar3;
                                            i18 = g17;
                                            strArr = strArr2;
                                            aVar = null;
                                            break;
                                        }
                                        int g21 = wVar4.g();
                                        pVar2 = pVar3;
                                        if (wVar4.g() == 1684108385) {
                                            int g22 = wVar4.g();
                                            int g23 = wVar4.g();
                                            int i36 = g21 - 16;
                                            i18 = g17;
                                            byte[] bArr3 = new byte[i36];
                                            strArr = strArr2;
                                            wVar4.e(bArr3, 0, i36);
                                            aVar = new jd.a(str, bArr3, g23, g22);
                                            break;
                                        }
                                        wVar4.F(i35 + g21);
                                        pVar3 = pVar2;
                                    }
                                    if (aVar != null) {
                                        arrayList3.add(aVar);
                                    }
                                }
                                wVar4.F(i33 + g19);
                                pVar3 = pVar2;
                                g17 = i18;
                                strArr2 = strArr;
                                i32 = 8;
                            }
                            pVar = pVar3;
                            if (!arrayList3.isEmpty()) {
                                metadata4 = new Metadata(arrayList3);
                                b g24 = aVar2.g(1836476516);
                                g24.getClass();
                                Metadata metadata11 = (Metadata) e.c(g24.f20762i).f2402i;
                                qc.p pVar4 = pVar;
                                f2 = e.f(aVar2, pVar4, -9223372036854775807L, null, false, z5, new u3.e());
                                size = f2.size();
                                i6 = -1;
                                i10 = 0;
                                long j7 = -9223372036854775807L;
                                while (true) {
                                    j5 = 0;
                                    if (i10 >= size) {
                                        break;
                                    }
                                    r rVar = (r) f2.get(i10);
                                    int i37 = rVar.f20863b;
                                    int i38 = rVar.f20866e;
                                    if (i37 == 0) {
                                        metadata5 = metadata;
                                        arrayList = f2;
                                        i13 = size;
                                        i15 = i6;
                                    } else {
                                        o oVar = rVar.a;
                                        int i39 = i6;
                                        long j10 = oVar.f20840e;
                                        arrayList = f2;
                                        Format format = oVar.f20841f;
                                        i13 = size;
                                        int i40 = oVar.f20837b;
                                        if (j10 == -9223372036854775807L) {
                                            j10 = rVar.f20869h;
                                        }
                                        long max2 = Math.max(j7, j10);
                                        k kVar = new k(oVar, rVar, this.f20826q.y(i10, i40));
                                        int i41 = "audio/true-hd".equals(format.I) ? i38 * 16 : i38 + 30;
                                        f0 a = format.a();
                                        a.f9678l = i41;
                                        if (i40 != 2 || j10 <= 0) {
                                            i14 = 1;
                                        } else {
                                            int i42 = rVar.f20863b;
                                            i14 = 1;
                                            if (i42 > 1) {
                                                a.f9684r = i42 / (j10 / 1000000.0f);
                                            }
                                        }
                                        if (i40 == i14 && (i16 = pVar4.a) != -1 && (i17 = pVar4.f16793b) != -1) {
                                            a.A = i16;
                                            a.B = i17;
                                        }
                                        ArrayList arrayList4 = this.f20818g;
                                        Metadata[] metadataArr = {metadata, arrayList4.isEmpty() ? null : new Metadata(arrayList4), metadata2, metadata11};
                                        Metadata metadata12 = new Metadata(new dd.b[0]);
                                        if (i40 == 1 && metadata3 != null) {
                                            metadata12 = metadata3;
                                        }
                                        if (metadata4 != null) {
                                            int i43 = 0;
                                            while (true) {
                                                dd.b[] bVarArr = metadata4.f5427d;
                                                if (i43 >= bVarArr.length) {
                                                    break;
                                                }
                                                dd.b bVar = bVarArr[i43];
                                                if (bVar instanceof jd.a) {
                                                    jd.a aVar3 = (jd.a) bVar;
                                                    metadata6 = metadata;
                                                    if (!aVar3.f12701d.equals("com.android.capture.fps")) {
                                                        metadata12 = metadata12.a(aVar3);
                                                    } else if (i40 == 2) {
                                                        metadata12 = metadata12.a(aVar3);
                                                    }
                                                } else {
                                                    metadata6 = metadata;
                                                }
                                                i43++;
                                                metadata = metadata6;
                                            }
                                        }
                                        metadata5 = metadata;
                                        for (int i44 = 0; i44 < 4; i44++) {
                                            Metadata metadata13 = metadataArr[i44];
                                            metadata12.getClass();
                                            if (metadata13 != null) {
                                                metadata12 = metadata12.a(metadata13.f5427d);
                                            }
                                        }
                                        if (metadata12.f5427d.length > 0) {
                                            a.f9677i = metadata12;
                                        }
                                        kVar.f20810c.e(new Format(a));
                                        if (i40 == 2) {
                                            i15 = i39;
                                            if (i15 == -1) {
                                                i15 = arrayList2.size();
                                            }
                                        } else {
                                            i15 = i39;
                                        }
                                        arrayList2.add(kVar);
                                        j7 = max2;
                                    }
                                    i10++;
                                    i6 = i15;
                                    metadata = metadata5;
                                    f2 = arrayList;
                                    size = i13;
                                }
                                this.f20829t = i6;
                                this.f20830u = j7;
                                kVarArr = (k[]) arrayList2.toArray(new k[0]);
                                this.f20827r = kVarArr;
                                long[][] jArr = new long[kVarArr.length][];
                                int[] iArr = new int[kVarArr.length];
                                long[] jArr2 = new long[kVarArr.length];
                                boolean[] zArr = new boolean[kVarArr.length];
                                for (i11 = 0; i11 < kVarArr.length; i11++) {
                                    jArr[i11] = new long[kVarArr[i11].f20809b.f20863b];
                                    jArr2[i11] = kVarArr[i11].f20809b.f20867f[0];
                                }
                                i12 = 0;
                                while (i12 < kVarArr.length) {
                                    long j11 = Long.MAX_VALUE;
                                    int i45 = -1;
                                    for (int i46 = 0; i46 < kVarArr.length; i46++) {
                                        if (!zArr[i46]) {
                                            long j12 = jArr2[i46];
                                            if (j12 <= j11) {
                                                i45 = i46;
                                                j11 = j12;
                                            }
                                        }
                                    }
                                    int i47 = iArr[i45];
                                    long[] jArr3 = jArr[i45];
                                    jArr3[i47] = j5;
                                    r rVar2 = kVarArr[i45].f20809b;
                                    j5 += rVar2.f20865d[i47];
                                    int i48 = i47 + 1;
                                    iArr[i45] = i48;
                                    if (i48 < jArr3.length) {
                                        jArr2[i45] = rVar2.f20867f[i48];
                                    } else {
                                        zArr[i45] = true;
                                        i12++;
                                    }
                                }
                                this.f20828s = jArr;
                                this.f20826q.r();
                                this.f20826q.c(this);
                                arrayDeque.clear();
                                this.f20819h = 2;
                            }
                            metadata4 = null;
                            b g242 = aVar2.g(1836476516);
                            g242.getClass();
                            Metadata metadata112 = (Metadata) e.c(g242.f20762i).f2402i;
                            qc.p pVar42 = pVar;
                            f2 = e.f(aVar2, pVar42, -9223372036854775807L, null, false, z5, new u3.e());
                            size = f2.size();
                            i6 = -1;
                            i10 = 0;
                            long j72 = -9223372036854775807L;
                            while (true) {
                                j5 = 0;
                                if (i10 >= size) {
                                }
                                i10++;
                                i6 = i15;
                                metadata = metadata5;
                                f2 = arrayList;
                                size = i13;
                            }
                            this.f20829t = i6;
                            this.f20830u = j72;
                            kVarArr = (k[]) arrayList2.toArray(new k[0]);
                            this.f20827r = kVarArr;
                            long[][] jArr4 = new long[kVarArr.length][];
                            int[] iArr2 = new int[kVarArr.length];
                            long[] jArr22 = new long[kVarArr.length];
                            boolean[] zArr2 = new boolean[kVarArr.length];
                            while (i11 < kVarArr.length) {
                            }
                            i12 = 0;
                            while (i12 < kVarArr.length) {
                            }
                            this.f20828s = jArr4;
                            this.f20826q.r();
                            this.f20826q.c(this);
                            arrayDeque.clear();
                            this.f20819h = 2;
                        }
                    }
                }
                pVar = pVar3;
                metadata4 = null;
                b g2422 = aVar2.g(1836476516);
                g2422.getClass();
                Metadata metadata1122 = (Metadata) e.c(g2422.f20762i).f2402i;
                qc.p pVar422 = pVar;
                f2 = e.f(aVar2, pVar422, -9223372036854775807L, null, false, z5, new u3.e());
                size = f2.size();
                i6 = -1;
                i10 = 0;
                long j722 = -9223372036854775807L;
                while (true) {
                    j5 = 0;
                    if (i10 >= size) {
                    }
                    i10++;
                    i6 = i15;
                    metadata = metadata5;
                    f2 = arrayList;
                    size = i13;
                }
                this.f20829t = i6;
                this.f20830u = j722;
                kVarArr = (k[]) arrayList2.toArray(new k[0]);
                this.f20827r = kVarArr;
                long[][] jArr42 = new long[kVarArr.length][];
                int[] iArr22 = new int[kVarArr.length];
                long[] jArr222 = new long[kVarArr.length];
                boolean[] zArr22 = new boolean[kVarArr.length];
                while (i11 < kVarArr.length) {
                }
                i12 = 0;
                while (i12 < kVarArr.length) {
                }
                this.f20828s = jArr42;
                this.f20826q.r();
                this.f20826q.c(this);
                arrayDeque.clear();
                this.f20819h = 2;
            } else if (!arrayDeque3.isEmpty()) {
                ((a) arrayDeque3.peek()).f20761w.add(aVar2);
            }
        }
        if (this.f20819h != 2) {
            this.f20819h = 0;
            this.k = 0;
        }
    }

    @Override // qc.j
    public final void release() {
    }
}
