package sd;

import a5.a0;
import android.net.Uri;
import android.os.Handler;
import android.util.Pair;
import android.util.SparseArray;
import android.util.SparseIntArray;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.metadata.Metadata;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.source.MediaLoadData;
import com.google.android.exoplayer2.upstream.DataSource;
import fi.e0;
import fi.r0;
import fi.w0;
import fi.y;
import ic.c0;
import ie.f0;
import ie.h0;
import ie.i0;
import ie.k0;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.atomic.AtomicInteger;
import ke.b0;
import ke.d0;
import nd.a1;
import nd.o0;
import nd.s0;
import nd.z0;

/* loaded from: classes3.dex */
public final class t implements f0, i0, s0, qc.l, o0 {

    /* renamed from: v0, reason: collision with root package name */
    public static final Set f17913v0 = Collections.unmodifiableSet(new HashSet(Arrays.asList(1, 2, 5)));
    public final nc.n E;
    public final p9.d F;
    public final k0 G = new k0("Loader:HlsSampleStreamWrapper");
    public final a1.d H;
    public final int I;
    public final hc.b J;
    public final ArrayList K;
    public final List L;
    public final q M;
    public final q N;
    public final Handler O;
    public final ArrayList P;
    public final Map Q;
    public pd.e R;
    public s[] S;
    public int[] T;
    public final HashSet U;
    public final SparseIntArray V;
    public r W;
    public int X;
    public int Y;
    public boolean Z;
    public boolean a0;

    /* renamed from: b0, reason: collision with root package name */
    public int f17914b0;

    /* renamed from: c0, reason: collision with root package name */
    public Format f17915c0;

    /* renamed from: d, reason: collision with root package name */
    public final String f17916d;

    /* renamed from: d0, reason: collision with root package name */
    public Format f17917d0;

    /* renamed from: e, reason: collision with root package name */
    public final int f17918e;

    /* renamed from: e0, reason: collision with root package name */
    public boolean f17919e0;

    /* renamed from: f0, reason: collision with root package name */
    public a1 f17920f0;

    /* renamed from: g0, reason: collision with root package name */
    public Set f17921g0;
    public int[] h0;

    /* renamed from: i, reason: collision with root package name */
    public final rj.b f17922i;

    /* renamed from: i0, reason: collision with root package name */
    public int f17923i0;

    /* renamed from: j0, reason: collision with root package name */
    public boolean f17924j0;

    /* renamed from: k0, reason: collision with root package name */
    public boolean[] f17925k0;

    /* renamed from: l0, reason: collision with root package name */
    public boolean[] f17926l0;

    /* renamed from: m0, reason: collision with root package name */
    public long f17927m0;

    /* renamed from: n0, reason: collision with root package name */
    public long f17928n0;

    /* renamed from: o0, reason: collision with root package name */
    public boolean f17929o0;

    /* renamed from: p0, reason: collision with root package name */
    public boolean f17930p0;

    /* renamed from: q0, reason: collision with root package name */
    public boolean f17931q0;

    /* renamed from: r0, reason: collision with root package name */
    public boolean f17932r0;

    /* renamed from: s0, reason: collision with root package name */
    public long f17933s0;

    /* renamed from: t0, reason: collision with root package name */
    public nc.i f17934t0;

    /* renamed from: u0, reason: collision with root package name */
    public m f17935u0;

    /* renamed from: v, reason: collision with root package name */
    public final j f17936v;

    /* renamed from: w, reason: collision with root package name */
    public final ie.q f17937w;

    /* renamed from: x, reason: collision with root package name */
    public final Format f17938x;

    /* renamed from: y, reason: collision with root package name */
    public final nc.r f17939y;

    /* JADX WARN: Type inference failed for: r1v12, types: [sd.q] */
    /* JADX WARN: Type inference failed for: r1v13, types: [sd.q] */
    public t(String str, int i5, rj.b bVar, j jVar, Map map, ie.q qVar, long j, Format format, nc.r rVar, nc.n nVar, p9.d dVar, a1.d dVar2, int i6) {
        this.f17916d = str;
        this.f17918e = i5;
        this.f17922i = bVar;
        this.f17936v = jVar;
        this.Q = map;
        this.f17937w = qVar;
        this.f17938x = format;
        this.f17939y = rVar;
        this.E = nVar;
        this.F = dVar;
        this.H = dVar2;
        this.I = i6;
        hc.b bVar2 = new hc.b();
        bVar2.a = null;
        final int i10 = 0;
        bVar2.f9624b = false;
        bVar2.f9625c = null;
        this.J = bVar2;
        this.T = new int[0];
        Set set = f17913v0;
        this.U = new HashSet(set.size());
        this.V = new SparseIntArray(set.size());
        this.S = new s[0];
        this.f17926l0 = new boolean[0];
        this.f17925k0 = new boolean[0];
        ArrayList arrayList = new ArrayList();
        this.K = arrayList;
        this.L = Collections.unmodifiableList(arrayList);
        this.P = new ArrayList();
        this.M = new Runnable(this) { // from class: sd.q

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ t f17906e;

            {
                this.f17906e = this;
            }

            @Override // java.lang.Runnable
            public final void run() {
                switch (i10) {
                    case 0:
                        this.f17906e.D();
                        break;
                    default:
                        t tVar = this.f17906e;
                        tVar.Z = true;
                        tVar.D();
                        break;
                }
            }
        };
        final int i11 = 1;
        this.N = new Runnable(this) { // from class: sd.q

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ t f17906e;

            {
                this.f17906e = this;
            }

            @Override // java.lang.Runnable
            public final void run() {
                switch (i11) {
                    case 0:
                        this.f17906e.D();
                        break;
                    default:
                        t tVar = this.f17906e;
                        tVar.Z = true;
                        tVar.D();
                        break;
                }
            }
        };
        this.O = d0.m(null);
        this.f17927m0 = j;
        this.f17928n0 = j;
    }

    public static int B(int i5) {
        if (i5 == 1) {
            return 2;
        }
        if (i5 != 2) {
            return i5 != 3 ? 0 : 1;
        }
        return 3;
    }

    public static qc.i g(int i5, int i6) {
        ke.b.N("HlsSampleStreamWrapper", "Unmapped track with id " + i5 + " of type " + i6);
        return new qc.i();
    }

    public static Format k(Format format, Format format2, boolean z5) {
        String b10;
        if (format == null) {
            return format2;
        }
        String str = format.F;
        String str2 = format2.I;
        int h6 = ke.o.h(str2);
        if (d0.p(h6, str) == 1) {
            b10 = d0.q(h6, str);
            str2 = ke.o.d(b10);
        } else {
            b10 = ke.o.b(str, str2);
        }
        hc.f0 a = format2.a();
        a.a = format.f5225d;
        a.f9670b = format.f5227e;
        a.f9671c = format.f5229i;
        a.f9672d = format.f5230v;
        a.f9673e = format.f5231w;
        a.f9674f = z5 ? format.f5232x : -1;
        a.f9675g = z5 ? format.f5233y : -1;
        a.f9676h = b10;
        if (h6 == 2) {
            a.f9682p = format.N;
            a.f9683q = format.O;
            a.f9684r = format.P;
        }
        if (str2 != null) {
            a.k = str2;
        }
        int i5 = format.V;
        if (i5 != -1 && h6 == 1) {
            a.f9690x = i5;
        }
        Metadata metadata = format.G;
        if (metadata != null) {
            Metadata metadata2 = format2.G;
            if (metadata2 != null) {
                metadata = metadata2.a(metadata.f5427d);
            }
            a.f9677i = metadata;
        }
        return new Format(a);
    }

    @Override // nd.s0
    public final void A(long j) {
        k0 k0Var = this.G;
        if (k0Var.c() || C()) {
            return;
        }
        boolean d6 = k0Var.d();
        j jVar = this.f17936v;
        List list = this.L;
        if (d6) {
            this.R.getClass();
            if (jVar.f17882n != null ? false : jVar.f17885q.e(j, this.R, list)) {
                k0Var.a();
                return;
            }
            return;
        }
        int size = list.size();
        while (size > 0 && jVar.b((m) list.get(size - 1)) == 2) {
            size--;
        }
        if (size < list.size()) {
            t(size);
        }
        int size2 = (jVar.f17882n != null || jVar.f17885q.length() < 2) ? list.size() : jVar.f17885q.i(j, list);
        if (size2 < this.K.size()) {
            t(size2);
        }
    }

    public final boolean C() {
        return this.f17928n0 != -9223372036854775807L;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void D() {
        int i5;
        if (!this.f17919e0 && this.h0 == null && this.Z) {
            int i6 = 0;
            for (s sVar : this.S) {
                if (sVar.q() == null) {
                    return;
                }
            }
            a1 a1Var = this.f17920f0;
            if (a1Var != null) {
                int i10 = a1Var.f15065d;
                int[] iArr = new int[i10];
                this.h0 = iArr;
                Arrays.fill(iArr, -1);
                for (int i11 = 0; i11 < i10; i11++) {
                    int i12 = 0;
                    while (true) {
                        s[] sVarArr = this.S;
                        if (i12 < sVarArr.length) {
                            Format q5 = sVarArr[i12].q();
                            ke.b.l(q5);
                            Format format = this.f17920f0.a(i11).f15211v[0];
                            String str = q5.I;
                            String str2 = format.I;
                            int h6 = ke.o.h(str);
                            if (h6 == 3) {
                                if (d0.a(str, str2)) {
                                    if ((!"application/cea-608".equals(str) && !"application/cea-708".equals(str)) || q5.a0 == format.a0) {
                                        break;
                                    }
                                } else {
                                    continue;
                                }
                                i12++;
                            } else if (h6 == ke.o.h(str2)) {
                                break;
                            } else {
                                i12++;
                            }
                        }
                    }
                    this.h0[i11] = i12;
                }
                Iterator it = this.P.iterator();
                while (it.hasNext()) {
                    ((p) it.next()).a();
                }
                return;
            }
            int length = this.S.length;
            int i13 = 0;
            int i14 = -1;
            int i15 = -2;
            while (true) {
                int i16 = 1;
                if (i13 >= length) {
                    break;
                }
                Format q6 = this.S[i13].q();
                ke.b.l(q6);
                String str3 = q6.I;
                if (ke.o.l(str3)) {
                    i16 = 2;
                } else if (!ke.o.j(str3)) {
                    i16 = ke.o.k(str3) ? 3 : -2;
                }
                if (B(i16) > B(i15)) {
                    i14 = i13;
                    i15 = i16;
                } else if (i16 == i15 && i14 != -1) {
                    i14 = -1;
                }
                i13++;
            }
            z0 z0Var = this.f17936v.f17878h;
            int i17 = z0Var.f15208d;
            this.f17923i0 = -1;
            this.h0 = new int[length];
            for (int i18 = 0; i18 < length; i18++) {
                this.h0[i18] = i18;
            }
            z0[] z0VarArr = new z0[length];
            int i19 = 0;
            while (i19 < length) {
                Format q7 = this.S[i19].q();
                ke.b.l(q7);
                String str4 = this.f17916d;
                Format format2 = this.f17938x;
                if (i19 == i14) {
                    Format[] formatArr = new Format[i17];
                    for (int i20 = i6; i20 < i17; i20++) {
                        Format format3 = z0Var.f15211v[i20];
                        if (i15 == 1 && format2 != null) {
                            format3 = format3.c(format2);
                        }
                        formatArr[i20] = i17 == 1 ? q7.c(format3) : k(format3, q7, true);
                    }
                    z0VarArr[i19] = new z0(str4, formatArr);
                    this.f17923i0 = i19;
                    i5 = 0;
                } else {
                    if (i15 != 2 || !ke.o.j(q7.I)) {
                        format2 = null;
                    }
                    StringBuilder p3 = k0.d.p(str4, ":muxed:");
                    p3.append(i19 < i14 ? i19 : i19 - 1);
                    i5 = 0;
                    z0VarArr[i19] = new z0(p3.toString(), k(format2, q7, false));
                }
                i19++;
                i6 = i5;
            }
            int i21 = i6;
            this.f17920f0 = i(z0VarArr);
            ke.b.k(this.f17921g0 == null ? 1 : i21);
            this.f17921g0 = Collections.EMPTY_SET;
            this.a0 = true;
            this.f17922i.j();
        }
    }

    public final void E() {
        this.G.b();
        j jVar = this.f17936v;
        nd.b bVar = jVar.f17882n;
        if (bVar != null) {
            throw bVar;
        }
        Uri uri = jVar.f17883o;
        if (uri == null || !jVar.f17887s) {
            return;
        }
        td.b bVar2 = (td.b) jVar.f17877g.f18278v.get(uri);
        bVar2.f18269e.b();
        IOException iOException = bVar2.G;
        if (iOException != null) {
            throw iOException;
        }
    }

    public final void F(z0[] z0VarArr, int... iArr) {
        this.f17920f0 = i(z0VarArr);
        this.f17921g0 = new HashSet();
        for (int i5 : iArr) {
            this.f17921g0.add(this.f17920f0.a(i5));
        }
        this.f17923i0 = 0;
        this.O.post(new oh.w(2, this.f17922i));
        this.a0 = true;
    }

    public final void G() {
        for (s sVar : this.S) {
            sVar.x(this.f17929o0);
        }
        this.f17929o0 = false;
    }

    public final boolean H(long j, boolean z5) {
        int i5;
        this.f17927m0 = j;
        if (C()) {
            this.f17928n0 = j;
            return true;
        }
        if (this.Z && !z5) {
            int length = this.S.length;
            for (0; i5 < length; i5 + 1) {
                i5 = (this.S[i5].y(j, false) || (!this.f17926l0[i5] && this.f17924j0)) ? i5 + 1 : 0;
            }
            return false;
        }
        this.f17928n0 = j;
        this.f17931q0 = false;
        this.K.clear();
        k0 k0Var = this.G;
        if (!k0Var.d()) {
            k0Var.f10686i = null;
            G();
            return true;
        }
        if (this.Z) {
            for (s sVar : this.S) {
                sVar.h();
            }
        }
        k0Var.a();
        return true;
    }

    @Override // nd.o0
    public final void b() {
        this.O.post(this.M);
    }

    @Override // ie.i0
    public final void d() {
        for (s sVar : this.S) {
            sVar.x(true);
            nc.k kVar = sVar.f15150h;
            if (kVar != null) {
                kVar.d(sVar.f15147e);
                sVar.f15150h = null;
                sVar.f15149g = null;
            }
        }
    }

    public final void f() {
        ke.b.k(this.a0);
        this.f17920f0.getClass();
        this.f17921g0.getClass();
    }

    @Override // nd.s0
    public final long h() {
        if (C()) {
            return this.f17928n0;
        }
        if (this.f17931q0) {
            return Long.MIN_VALUE;
        }
        return x().E;
    }

    public final a1 i(z0[] z0VarArr) {
        for (int i5 = 0; i5 < z0VarArr.length; i5++) {
            z0 z0Var = z0VarArr[i5];
            Format[] formatArr = new Format[z0Var.f15208d];
            for (int i6 = 0; i6 < z0Var.f15208d; i6++) {
                Format format = z0Var.f15211v[i6];
                int b10 = this.f17939y.b(format);
                hc.f0 a = format.a();
                a.F = b10;
                formatArr[i6] = new Format(a);
            }
            z0VarArr[i5] = new z0(z0Var.f15209e, formatArr);
        }
        return new a1(z0VarArr);
    }

    @Override // ie.f0
    public final bd.f l(h0 h0Var, long j, long j5, IOException iOException, int i5) {
        boolean z5;
        bd.f fVar;
        int i6;
        pd.e eVar = (pd.e) h0Var;
        boolean z6 = eVar instanceof m;
        if (z6 && !((m) eVar).h0 && (iOException instanceof ie.d0) && ((i6 = ((ie.d0) iOException).f10662v) == 410 || i6 == 404)) {
            return k0.f10681v;
        }
        long j7 = eVar.F.f10755e;
        ie.s0 s0Var = eVar.F;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(j7, s0Var.f10757v);
        d0.U(eVar.f16366y);
        d0.U(eVar.E);
        a0 a0Var = new a0(i5, 7, iOException);
        j jVar = this.f17936v;
        ch.u h6 = ys.l.h(jVar.f17885q);
        this.F.getClass();
        bd.f i10 = p9.d.i(h6, a0Var);
        if (i10 == null || i10.a != 2) {
            z5 = false;
        } else {
            long j10 = i10.f2806b;
            ge.p pVar = jVar.f17885q;
            z5 = pVar.n(pVar.s(jVar.f17878h.a(eVar.f16363v)), j10);
        }
        if (z5) {
            if (z6 && j7 == 0) {
                ArrayList arrayList = this.K;
                ke.b.k(((m) arrayList.remove(arrayList.size() - 1)) == eVar);
                if (arrayList.isEmpty()) {
                    this.f17928n0 = this.f17927m0;
                } else {
                    ((m) fi.p.i(arrayList)).f17894g0 = true;
                }
            }
            fVar = k0.f10682w;
        } else {
            long m5 = p9.d.m(a0Var);
            fVar = m5 != -9223372036854775807L ? new bd.f(0, m5, false) : k0.f10683x;
        }
        bd.f fVar2 = fVar;
        boolean a = fVar2.a();
        this.H.o(loadEventInfo, eVar.f16362i, this.f17918e, eVar.f16363v, eVar.f16364w, eVar.f16365x, eVar.f16366y, eVar.E, iOException, !a);
        if (!a) {
            this.R = null;
        }
        if (z5) {
            if (!this.a0) {
                o(this.f17927m0);
                return fVar2;
            }
            this.f17922i.c(this);
        }
        return fVar2;
    }

    /* JADX WARN: Removed duplicated region for block: B:100:0x0237  */
    /* JADX WARN: Removed duplicated region for block: B:111:0x0280  */
    /* JADX WARN: Removed duplicated region for block: B:117:0x0298  */
    /* JADX WARN: Removed duplicated region for block: B:130:0x030c  */
    /* JADX WARN: Removed duplicated region for block: B:132:0x0329  */
    /* JADX WARN: Removed duplicated region for block: B:135:0x034a  */
    /* JADX WARN: Removed duplicated region for block: B:139:0x036e  */
    /* JADX WARN: Removed duplicated region for block: B:141:0x0375  */
    /* JADX WARN: Removed duplicated region for block: B:143:0x0382  */
    /* JADX WARN: Removed duplicated region for block: B:146:0x0393  */
    /* JADX WARN: Removed duplicated region for block: B:157:0x03fa  */
    /* JADX WARN: Removed duplicated region for block: B:183:0x0470  */
    /* JADX WARN: Removed duplicated region for block: B:188:0x0444  */
    /* JADX WARN: Removed duplicated region for block: B:192:0x03e3  */
    /* JADX WARN: Removed duplicated region for block: B:193:0x038d  */
    /* JADX WARN: Removed duplicated region for block: B:194:0x037f  */
    /* JADX WARN: Removed duplicated region for block: B:195:0x0371  */
    /* JADX WARN: Removed duplicated region for block: B:196:0x0351  */
    /* JADX WARN: Removed duplicated region for block: B:197:0x032b  */
    /* JADX WARN: Removed duplicated region for block: B:198:0x0317  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x04a4  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x04b1  */
    @Override // nd.s0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean o(long j) {
        long max;
        List list;
        long j5;
        hc.b bVar;
        int i5;
        hc.b bVar2;
        m mVar;
        long j7;
        j jVar;
        int i6;
        int i10;
        Uri uri;
        i iVar;
        f d6;
        boolean z5;
        List list2;
        boolean z6;
        rd.u uVar;
        byte[] bArr;
        k0 k0Var;
        boolean z7;
        byte[] bArr2;
        DataSource dataSource;
        td.f fVar;
        c0 c0Var;
        r3.g gVar;
        Uri uri2;
        ie.p pVar;
        DataSource dataSource2;
        boolean z8;
        Uri uri3;
        id.i iVar2;
        ke.w wVar;
        b bVar3;
        b0 b0Var;
        byte[] bArr3;
        DataSource dataSource3;
        String str;
        boolean z10;
        if (!this.f17931q0) {
            k0 k0Var2 = this.G;
            if (!k0Var2.d() && !k0Var2.c()) {
                if (C()) {
                    list = Collections.EMPTY_LIST;
                    max = this.f17928n0;
                    for (s sVar : this.S) {
                        sVar.f15160t = this.f17928n0;
                    }
                } else {
                    m x5 = x();
                    max = x5.f17892e0 ? x5.E : Math.max(this.f17927m0, x5.f16366y);
                    list = this.L;
                }
                List list3 = list;
                hc.b bVar4 = this.J;
                bVar4.a = null;
                bVar4.f9624b = false;
                bVar4.f9625c = null;
                boolean z11 = this.a0 || !list3.isEmpty();
                j jVar2 = this.f17936v;
                rd.u uVar2 = jVar2.j;
                Uri[] uriArr = jVar2.f17875e;
                td.c cVar = jVar2.f17877g;
                m mVar2 = list3.isEmpty() ? null : (m) fi.p.i(list3);
                int a = mVar2 == null ? -1 : jVar2.f17878h.a(mVar2.f16363v);
                long j10 = max - j;
                long j11 = jVar2.f17886r;
                long j12 = j11 != -9223372036854775807L ? j11 - j : -9223372036854775807L;
                if (mVar2 == null) {
                    j5 = max;
                    bVar = bVar4;
                    i5 = a;
                } else if (jVar2.f17884p) {
                    j5 = max;
                    i5 = a;
                    bVar = bVar4;
                } else {
                    i5 = a;
                    bVar = bVar4;
                    long j13 = mVar2.E - mVar2.f16366y;
                    j5 = max;
                    j10 = Math.max(0L, j10 - j13);
                    if (j12 != -9223372036854775807L) {
                        j12 = Math.max(0L, j12 - j13);
                    }
                }
                long j14 = j5;
                m mVar3 = mVar2;
                int i11 = i5;
                jVar2.f17885q.c(j, j10, j12, list3, jVar2.a(mVar2, j14));
                int k = jVar2.f17885q.k();
                boolean z12 = i11 != k;
                Uri uri4 = uriArr[k];
                if (cVar.c(uri4)) {
                    bVar2 = bVar;
                    td.i a10 = cVar.a(true, uri4);
                    a10.getClass();
                    long j15 = a10.f18299h;
                    jVar2.f17884p = a10.f18329c;
                    if (a10.f18304o) {
                        mVar = mVar3;
                        j7 = -9223372036854775807L;
                    } else {
                        mVar = mVar3;
                        j7 = (a10.f18310u + j15) - cVar.K;
                    }
                    jVar2.f17886r = j7;
                    boolean z13 = z12;
                    long j16 = j15 - cVar.K;
                    m mVar4 = mVar;
                    Pair c6 = jVar2.c(mVar4, z13, a10, j16, j14);
                    long longValue = ((Long) c6.first).longValue();
                    int intValue = ((Integer) c6.second).intValue();
                    if (longValue >= a10.k || mVar4 == null || !z13) {
                        jVar = jVar2;
                        i6 = k;
                        i10 = intValue;
                        uri = uri4;
                    } else {
                        uri = uriArr[i11];
                        a10 = cVar.a(true, uri);
                        a10.getClass();
                        j16 = a10.f18299h - cVar.K;
                        jVar = jVar2;
                        Pair c8 = jVar.c(mVar4, false, a10, j16, j14);
                        longValue = ((Long) c8.first).longValue();
                        i10 = ((Integer) c8.second).intValue();
                        i6 = i11;
                    }
                    long j17 = j16;
                    long j18 = longValue;
                    String str2 = a10.a;
                    boolean z14 = a10.f18329c;
                    long j19 = a10.k;
                    e0 e0Var = a10.f18307r;
                    if (j18 < j19) {
                        jVar.f17882n = new nd.b();
                    } else {
                        e0 e0Var2 = a10.f18308s;
                        boolean z15 = z14;
                        int i12 = (int) (j18 - j19);
                        if (i12 == e0Var.size()) {
                            if (i10 == -1) {
                                i10 = 0;
                            }
                            if (i10 < e0Var2.size()) {
                                iVar = new i((td.g) e0Var2.get(i10), j18, i10);
                                if (iVar == null) {
                                    if (!a10.f18304o) {
                                        bVar2.f9625c = uri;
                                        jVar.f17887s &= uri.equals(jVar.f17883o);
                                        jVar.f17883o = uri;
                                    } else if (z11 || e0Var.isEmpty()) {
                                        bVar2.f9624b = true;
                                    } else {
                                        iVar = new i((td.g) fi.p.i(e0Var), (j19 + e0Var.size()) - 1, -1);
                                    }
                                }
                                boolean z16 = iVar.f17871d;
                                td.g gVar2 = iVar.a;
                                jVar.f17887s = false;
                                jVar.f17883o = null;
                                td.f fVar2 = gVar2.f18285e;
                                long j20 = gVar2.f18288w;
                                Uri K = (fVar2 != null || (str = fVar2.f18290y) == null) ? null : ke.b.K(str2, str);
                                d6 = jVar.d(K, i6, true);
                                bVar2.a = d6;
                                if (d6 == null) {
                                    String str3 = gVar2.f18290y;
                                    Uri K2 = str3 == null ? null : ke.b.K(str2, str3);
                                    f d7 = jVar.d(K2, i6, false);
                                    bVar2.a = d7;
                                    if (d7 == null) {
                                        if (mVar4 == null) {
                                            AtomicInteger atomicInteger = m.f17888i0;
                                        } else if (!uri.equals(mVar4.J) || !mVar4.f17892e0) {
                                            long j21 = j17 + j20;
                                            if (gVar2 instanceof td.d) {
                                                z15 = ((td.d) gVar2).I || (iVar.f17870c == 0 && z15);
                                            }
                                            if (!z15 || j21 < mVar4.E) {
                                                z5 = true;
                                                if (z5 || !z16) {
                                                    l lVar = jVar.a;
                                                    DataSource dataSource4 = jVar.f17872b;
                                                    Format format = jVar.f17876f[i6];
                                                    List list4 = jVar.f17879i;
                                                    int m5 = jVar.f17885q.m();
                                                    Object p3 = jVar.f17885q.p();
                                                    boolean z17 = jVar.f17880l;
                                                    r3.g gVar3 = jVar.f17874d;
                                                    if (K2 != null) {
                                                        uVar2.getClass();
                                                        list2 = list4;
                                                        z6 = z17;
                                                        uVar = uVar2;
                                                        bArr = null;
                                                    } else {
                                                        list2 = list4;
                                                        z6 = z17;
                                                        uVar = uVar2;
                                                        bArr = (byte[]) ((e) uVar.f17275e).get(K2);
                                                    }
                                                    byte[] bArr4 = K != null ? null : (byte[]) ((e) uVar.f17275e).get(K);
                                                    c0 c0Var2 = jVar.k;
                                                    AtomicInteger atomicInteger2 = m.f17888i0;
                                                    Map map = Collections.EMPTY_MAP;
                                                    Uri K3 = ke.b.K(str2, gVar2.f18284d);
                                                    k0Var = k0Var2;
                                                    long j22 = gVar2.F;
                                                    long j23 = gVar2.G;
                                                    int i13 = !z16 ? 8 : 0;
                                                    ke.b.m(K3, "The uri must be set.");
                                                    w0 w0Var = w0.f8728y;
                                                    ie.p pVar2 = new ie.p(K3, 0L, 1, null, w0Var, j22, j23, null, i13);
                                                    z7 = bArr == null;
                                                    if (z7) {
                                                        bArr2 = null;
                                                    } else {
                                                        String str4 = gVar2.E;
                                                        str4.getClass();
                                                        bArr2 = m.d(str4);
                                                    }
                                                    if (bArr == null) {
                                                        bArr2.getClass();
                                                        dataSource = new a(dataSource4, bArr, bArr2);
                                                    } else {
                                                        dataSource = dataSource4;
                                                    }
                                                    fVar = gVar2.f18285e;
                                                    if (fVar == null) {
                                                        boolean z18 = bArr4 != null;
                                                        if (z18) {
                                                            String str5 = fVar.E;
                                                            str5.getClass();
                                                            bArr3 = m.d(str5);
                                                        } else {
                                                            bArr3 = null;
                                                        }
                                                        c0Var = c0Var2;
                                                        Uri K4 = ke.b.K(str2, fVar.f18284d);
                                                        gVar = gVar3;
                                                        uri2 = uri;
                                                        long j24 = fVar.F;
                                                        long j25 = fVar.G;
                                                        ke.b.m(K4, "The uri must be set.");
                                                        ie.p pVar3 = new ie.p(K4, 0L, 1, null, w0Var, j24, j25, null, 0);
                                                        if (bArr4 != null) {
                                                            bArr3.getClass();
                                                            dataSource3 = new a(dataSource4, bArr4, bArr3);
                                                        } else {
                                                            dataSource3 = dataSource4;
                                                        }
                                                        dataSource2 = dataSource3;
                                                        z8 = z18;
                                                        pVar = pVar3;
                                                    } else {
                                                        c0Var = c0Var2;
                                                        gVar = gVar3;
                                                        uri2 = uri;
                                                        pVar = null;
                                                        dataSource2 = null;
                                                        z8 = false;
                                                    }
                                                    long j26 = j17 + j20;
                                                    long j27 = j26 + gVar2.f18286i;
                                                    int i14 = a10.j + gVar2.f18287v;
                                                    if (mVar4 == null) {
                                                        ie.p pVar4 = mVar4.N;
                                                        boolean z19 = pVar == pVar4 || (pVar != null && pVar4 != null && pVar.a.equals(pVar4.a) && pVar.f10715f == pVar4.f10715f);
                                                        uri3 = uri2;
                                                        boolean z20 = uri3.equals(mVar4.J) && mVar4.f17892e0;
                                                        iVar2 = mVar4.V;
                                                        ke.w wVar2 = mVar4.W;
                                                        bVar3 = (z19 && z20 && !mVar4.f17894g0 && mVar4.I == i14) ? mVar4.Z : null;
                                                        wVar = wVar2;
                                                    } else {
                                                        uri3 = uri2;
                                                        iVar2 = new id.i(null);
                                                        wVar = new ke.w(10);
                                                        bVar3 = null;
                                                    }
                                                    id.i iVar3 = iVar2;
                                                    long j28 = iVar.f17869b;
                                                    int i15 = iVar.f17870c;
                                                    boolean z21 = !z16;
                                                    boolean z22 = gVar2.H;
                                                    SparseArray sparseArray = (SparseArray) gVar.f17126e;
                                                    b0Var = (b0) sparseArray.get(i14);
                                                    if (b0Var == null) {
                                                        b0Var = new b0(9223372036854775806L);
                                                        sparseArray.put(i14, b0Var);
                                                    }
                                                    bVar2.a = new m(lVar, dataSource, pVar2, format, z7, dataSource2, pVar, z8, uri3, list2, m5, p3, j26, j27, j28, i15, z21, i14, z22, z6, b0Var, gVar2.f18289x, bVar3, iVar3, wVar, z5, c0Var);
                                                    z10 = bVar2.f9624b;
                                                    pd.e eVar = (pd.e) bVar2.a;
                                                    Uri uri5 = (Uri) bVar2.f9625c;
                                                    if (z10) {
                                                        this.f17928n0 = -9223372036854775807L;
                                                        this.f17931q0 = true;
                                                        return true;
                                                    }
                                                    if (eVar == null) {
                                                        if (uri5 == null) {
                                                            return false;
                                                        }
                                                        td.b bVar5 = (td.b) ((n) this.f17922i.f17393d).f17896e.f18278v.get(uri5);
                                                        bVar5.c(bVar5.f18268d);
                                                        return false;
                                                    }
                                                    if (eVar instanceof m) {
                                                        m mVar5 = (m) eVar;
                                                        this.f17935u0 = mVar5;
                                                        this.f17915c0 = mVar5.f16363v;
                                                        this.f17928n0 = -9223372036854775807L;
                                                        this.K.add(mVar5);
                                                        fi.c0 c0Var3 = e0.f8656e;
                                                        fi.p.c(4, "initialCapacity");
                                                        Object[] objArr = new Object[4];
                                                        s[] sVarArr = this.S;
                                                        int length = sVarArr.length;
                                                        int i16 = 0;
                                                        boolean z23 = false;
                                                        int i17 = 0;
                                                        while (i17 < length) {
                                                            s sVar2 = sVarArr[i17];
                                                            Integer valueOf = Integer.valueOf(sVar2.f15157q + sVar2.f15156p);
                                                            int i18 = i16 + 1;
                                                            if (objArr.length < i18) {
                                                                objArr = Arrays.copyOf(objArr, y.d(objArr.length, i18));
                                                            } else if (z23) {
                                                                objArr = (Object[]) objArr.clone();
                                                            } else {
                                                                objArr[i16] = valueOf;
                                                                i17++;
                                                                i16++;
                                                            }
                                                            z23 = false;
                                                            objArr[i16] = valueOf;
                                                            i17++;
                                                            i16++;
                                                        }
                                                        r0 j29 = e0.j(i16, objArr);
                                                        mVar5.a0 = this;
                                                        mVar5.f17893f0 = j29;
                                                        for (s sVar3 : this.S) {
                                                            sVar3.getClass();
                                                            sVar3.C = mVar5.H;
                                                            if (mVar5.K) {
                                                                sVar3.G = true;
                                                            }
                                                        }
                                                    }
                                                    this.R = eVar;
                                                    k0Var.f(eVar, this, this.F.k(eVar.f16362i));
                                                    this.H.r(new LoadEventInfo(eVar.f16361e), eVar.f16362i, this.f17918e, eVar.f16363v, eVar.f16364w, eVar.f16365x, eVar.f16366y, eVar.E);
                                                    return true;
                                                }
                                            }
                                        }
                                        z5 = false;
                                        if (z5) {
                                        }
                                        l lVar2 = jVar.a;
                                        DataSource dataSource42 = jVar.f17872b;
                                        Format format2 = jVar.f17876f[i6];
                                        List list42 = jVar.f17879i;
                                        int m52 = jVar.f17885q.m();
                                        Object p32 = jVar.f17885q.p();
                                        boolean z172 = jVar.f17880l;
                                        r3.g gVar32 = jVar.f17874d;
                                        if (K2 != null) {
                                        }
                                        if (K != null) {
                                        }
                                        c0 c0Var22 = jVar.k;
                                        AtomicInteger atomicInteger22 = m.f17888i0;
                                        Map map2 = Collections.EMPTY_MAP;
                                        Uri K32 = ke.b.K(str2, gVar2.f18284d);
                                        k0Var = k0Var2;
                                        long j222 = gVar2.F;
                                        long j232 = gVar2.G;
                                        if (!z16) {
                                        }
                                        ke.b.m(K32, "The uri must be set.");
                                        w0 w0Var2 = w0.f8728y;
                                        ie.p pVar22 = new ie.p(K32, 0L, 1, null, w0Var2, j222, j232, null, i13);
                                        if (bArr == null) {
                                        }
                                        if (z7) {
                                        }
                                        if (bArr == null) {
                                        }
                                        fVar = gVar2.f18285e;
                                        if (fVar == null) {
                                        }
                                        long j262 = j17 + j20;
                                        long j272 = j262 + gVar2.f18286i;
                                        int i142 = a10.j + gVar2.f18287v;
                                        if (mVar4 == null) {
                                        }
                                        id.i iVar32 = iVar2;
                                        long j282 = iVar.f17869b;
                                        int i152 = iVar.f17870c;
                                        boolean z212 = !z16;
                                        boolean z222 = gVar2.H;
                                        SparseArray sparseArray2 = (SparseArray) gVar.f17126e;
                                        b0Var = (b0) sparseArray2.get(i142);
                                        if (b0Var == null) {
                                        }
                                        bVar2.a = new m(lVar2, dataSource, pVar22, format2, z7, dataSource2, pVar, z8, uri3, list2, m52, p32, j262, j272, j282, i152, z212, i142, z222, z6, b0Var, gVar2.f18289x, bVar3, iVar32, wVar, z5, c0Var);
                                        z10 = bVar2.f9624b;
                                        pd.e eVar2 = (pd.e) bVar2.a;
                                        Uri uri52 = (Uri) bVar2.f9625c;
                                        if (z10) {
                                        }
                                    }
                                }
                            }
                            iVar = null;
                            if (iVar == null) {
                            }
                            boolean z162 = iVar.f17871d;
                            td.g gVar22 = iVar.a;
                            jVar.f17887s = false;
                            jVar.f17883o = null;
                            td.f fVar22 = gVar22.f18285e;
                            long j202 = gVar22.f18288w;
                            if (fVar22 != null) {
                            }
                            d6 = jVar.d(K, i6, true);
                            bVar2.a = d6;
                            if (d6 == null) {
                            }
                        } else {
                            td.f fVar3 = (td.f) e0Var.get(i12);
                            if (i10 == -1) {
                                iVar = new i(fVar3, j18, -1);
                            } else if (i10 < fVar3.J.size()) {
                                iVar = new i((td.g) fVar3.J.get(i10), j18, i10);
                            } else {
                                int i19 = i12 + 1;
                                if (i19 < e0Var.size()) {
                                    iVar = new i((td.g) e0Var.get(i19), j18 + 1, -1);
                                } else {
                                    if (!e0Var2.isEmpty()) {
                                        iVar = new i((td.g) e0Var2.get(0), j18 + 1, 0);
                                    }
                                    iVar = null;
                                }
                            }
                            if (iVar == null) {
                            }
                            boolean z1622 = iVar.f17871d;
                            td.g gVar222 = iVar.a;
                            jVar.f17887s = false;
                            jVar.f17883o = null;
                            td.f fVar222 = gVar222.f18285e;
                            long j2022 = gVar222.f18288w;
                            if (fVar222 != null) {
                            }
                            d6 = jVar.d(K, i6, true);
                            bVar2.a = d6;
                            if (d6 == null) {
                            }
                        }
                    }
                } else {
                    bVar2 = bVar;
                    bVar2.f9625c = uri4;
                    jVar2.f17887s &= uri4.equals(jVar2.f17883o);
                    jVar2.f17883o = uri4;
                }
                k0Var = k0Var2;
                z10 = bVar2.f9624b;
                pd.e eVar22 = (pd.e) bVar2.a;
                Uri uri522 = (Uri) bVar2.f9625c;
                if (z10) {
                }
            }
        }
        return false;
    }

    @Override // nd.s0
    public final boolean q() {
        return this.G.d();
    }

    @Override // qc.l
    public final void r() {
        this.f17932r0 = true;
        this.O.post(this.N);
    }

    public final void t(int i5) {
        ArrayList arrayList;
        ke.b.k(!this.G.d());
        int i6 = i5;
        loop0: while (true) {
            arrayList = this.K;
            if (i6 >= arrayList.size()) {
                i6 = -1;
                break;
            }
            int i10 = i6;
            while (true) {
                if (i10 >= arrayList.size()) {
                    m mVar = (m) arrayList.get(i6);
                    for (int i11 = 0; i11 < this.S.length; i11++) {
                        if (this.S[i11].n() > mVar.e(i11)) {
                            break;
                        }
                    }
                    break loop0;
                }
                if (((m) arrayList.get(i10)).K) {
                    break;
                } else {
                    i10++;
                }
            }
            i6++;
        }
        if (i6 == -1) {
            return;
        }
        long j = x().E;
        m mVar2 = (m) arrayList.get(i6);
        d0.N(arrayList, i6, arrayList.size());
        for (int i12 = 0; i12 < this.S.length; i12++) {
            this.S[i12].j(mVar2.e(i12));
        }
        if (arrayList.isEmpty()) {
            this.f17928n0 = this.f17927m0;
        } else {
            ((m) fi.p.i(arrayList)).f17894g0 = true;
        }
        this.f17931q0 = false;
        this.H.z(new MediaLoadData(1, this.X, null, 3, null, d0.U(mVar2.f16366y), d0.U(j)));
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // ie.f0
    public final void v(h0 h0Var, long j, long j5) {
        pd.e eVar = (pd.e) h0Var;
        this.R = null;
        if (eVar instanceof f) {
            f fVar = (f) eVar;
            byte[] bArr = fVar.G;
            j jVar = this.f17936v;
            jVar.f17881m = bArr;
            rd.u uVar = jVar.j;
            Uri uri = fVar.f16361e.a;
            byte[] bArr2 = fVar.I;
            bArr2.getClass();
            e eVar2 = (e) uVar.f17275e;
            uri.getClass();
        }
        long j7 = eVar.f16360d;
        ie.s0 s0Var = eVar.F;
        Uri uri2 = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        this.F.getClass();
        this.H.m(loadEventInfo, eVar.f16362i, this.f17918e, eVar.f16363v, eVar.f16364w, eVar.f16365x, eVar.f16366y, eVar.E);
        if (this.a0) {
            this.f17922i.c(this);
        } else {
            o(this.f17927m0);
        }
    }

    @Override // nd.s0
    public final long w() {
        long j;
        ArrayList arrayList = this.K;
        if (this.f17931q0) {
            return Long.MIN_VALUE;
        }
        if (C()) {
            return this.f17928n0;
        }
        long j5 = this.f17927m0;
        m x5 = x();
        if (!x5.f17892e0) {
            x5 = arrayList.size() > 1 ? (m) k0.d.f(2, arrayList) : null;
        }
        if (x5 != null) {
            j5 = Math.max(j5, x5.E);
        }
        if (this.Z) {
            for (s sVar : this.S) {
                synchronized (sVar) {
                    j = sVar.f15162v;
                }
                j5 = Math.max(j5, j);
            }
        }
        return j5;
    }

    public final m x() {
        return (m) k0.d.f(1, this.K);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v15, types: [sd.s[]] */
    /* JADX WARN: Type inference failed for: r1v1, types: [sd.s[]] */
    /* JADX WARN: Type inference failed for: r1v3, types: [java.lang.Object[]] */
    /* JADX WARN: Type inference failed for: r5v0 */
    /* JADX WARN: Type inference failed for: r5v1 */
    /* JADX WARN: Type inference failed for: r5v2 */
    /* JADX WARN: Type inference failed for: r5v3, types: [qc.v] */
    /* JADX WARN: Type inference failed for: r5v4, types: [nd.p0, sd.s] */
    /* JADX WARN: Type inference failed for: r5v6, types: [qc.i] */
    /* JADX WARN: Type inference failed for: r5v7 */
    /* JADX WARN: Type inference failed for: r5v8 */
    @Override // qc.l
    public final qc.v y(int i5, int i6) {
        Integer valueOf = Integer.valueOf(i6);
        Set set = f17913v0;
        boolean contains = set.contains(valueOf);
        HashSet hashSet = this.U;
        SparseIntArray sparseIntArray = this.V;
        ?? r5 = 0;
        r5 = 0;
        if (contains) {
            ke.b.g(set.contains(Integer.valueOf(i6)));
            int i10 = sparseIntArray.get(i6, -1);
            if (i10 != -1) {
                if (hashSet.add(Integer.valueOf(i6))) {
                    this.T[i10] = i5;
                }
                r5 = this.T[i10] == i5 ? this.S[i10] : g(i5, i6);
            }
        } else {
            int i11 = 0;
            while (true) {
                ?? r12 = this.S;
                if (i11 >= r12.length) {
                    break;
                }
                if (this.T[i11] == i5) {
                    r5 = r12[i11];
                    break;
                }
                i11++;
            }
        }
        if (r5 == 0) {
            if (this.f17932r0) {
                return g(i5, i6);
            }
            int length = this.S.length;
            boolean z5 = i6 == 1 || i6 == 2;
            r5 = new s(this.f17937w, this.f17939y, this.E, this.Q);
            r5.f15160t = this.f17927m0;
            if (z5) {
                r5.I = this.f17934t0;
                r5.f15166z = true;
            }
            long j = this.f17933s0;
            if (r5.F != j) {
                r5.F = j;
                r5.f15166z = true;
            }
            if (this.f17935u0 != null) {
                r5.C = r6.H;
            }
            r5.f15148f = this;
            int i12 = length + 1;
            int[] copyOf = Arrays.copyOf(this.T, i12);
            this.T = copyOf;
            copyOf[length] = i5;
            s[] sVarArr = this.S;
            int i13 = d0.a;
            ?? copyOf2 = Arrays.copyOf(sVarArr, sVarArr.length + 1);
            copyOf2[sVarArr.length] = r5;
            this.S = (s[]) copyOf2;
            boolean[] copyOf3 = Arrays.copyOf(this.f17926l0, i12);
            this.f17926l0 = copyOf3;
            copyOf3[length] = z5;
            this.f17924j0 |= z5;
            hashSet.add(Integer.valueOf(i6));
            sparseIntArray.append(i6, length);
            if (B(i6) > B(this.X)) {
                this.Y = length;
                this.X = i6;
            }
            this.f17925k0 = Arrays.copyOf(this.f17925k0, i12);
        }
        if (i6 != 5) {
            return r5;
        }
        if (this.W == null) {
            this.W = new r(r5, this.I);
        }
        return this.W;
    }

    @Override // ie.f0
    public final void z(h0 h0Var, long j, long j5, boolean z5) {
        pd.e eVar = (pd.e) h0Var;
        this.R = null;
        long j7 = eVar.f16360d;
        ie.s0 s0Var = eVar.F;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        this.F.getClass();
        this.H.j(loadEventInfo, eVar.f16362i, this.f17918e, eVar.f16363v, eVar.f16364w, eVar.f16365x, eVar.f16366y, eVar.E);
        if (z5) {
            return;
        }
        if (C() || this.f17914b0 == 0) {
            G();
        }
        if (this.f17914b0 > 0) {
            this.f17922i.c(this);
        }
    }

    @Override // qc.l
    public final void c(qc.s sVar) {
    }
}
