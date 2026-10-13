package nd;

import android.util.SparseArray;
import com.google.android.exoplayer2.Format;
import java.io.EOFException;
import java.util.ArrayList;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public class p0 implements qc.v {
    public Format A;
    public Format B;
    public long C;
    public boolean D;
    public boolean E;
    public long F;
    public boolean G;
    public final l0 a;

    /* renamed from: d, reason: collision with root package name */
    public final nc.r f15146d;

    /* renamed from: e, reason: collision with root package name */
    public final nc.n f15147e;

    /* renamed from: f, reason: collision with root package name */
    public Object f15148f;

    /* renamed from: g, reason: collision with root package name */
    public Format f15149g;

    /* renamed from: h, reason: collision with root package name */
    public nc.k f15150h;

    /* renamed from: p, reason: collision with root package name */
    public int f15156p;

    /* renamed from: q, reason: collision with root package name */
    public int f15157q;

    /* renamed from: r, reason: collision with root package name */
    public int f15158r;

    /* renamed from: s, reason: collision with root package name */
    public int f15159s;

    /* renamed from: w, reason: collision with root package name */
    public boolean f15163w;

    /* renamed from: z, reason: collision with root package name */
    public boolean f15166z;

    /* renamed from: b, reason: collision with root package name */
    public final m0 f15144b = new m0();

    /* renamed from: i, reason: collision with root package name */
    public int f15151i = 1000;
    public long[] j = new long[1000];
    public long[] k = new long[1000];

    /* renamed from: n, reason: collision with root package name */
    public long[] f15154n = new long[1000];

    /* renamed from: m, reason: collision with root package name */
    public int[] f15153m = new int[1000];

    /* renamed from: l, reason: collision with root package name */
    public int[] f15152l = new int[1000];

    /* renamed from: o, reason: collision with root package name */
    public qc.u[] f15155o = new qc.u[1000];

    /* renamed from: c, reason: collision with root package name */
    public final a1.d f15145c = new a1.d(new n1.k(7));

    /* renamed from: t, reason: collision with root package name */
    public long f15160t = Long.MIN_VALUE;

    /* renamed from: u, reason: collision with root package name */
    public long f15161u = Long.MIN_VALUE;

    /* renamed from: v, reason: collision with root package name */
    public long f15162v = Long.MIN_VALUE;

    /* renamed from: y, reason: collision with root package name */
    public boolean f15165y = true;

    /* renamed from: x, reason: collision with root package name */
    public boolean f15164x = true;

    public p0(ie.q qVar, nc.r rVar, nc.n nVar) {
        this.f15146d = rVar;
        this.f15147e = nVar;
        this.a = new l0(qVar);
    }

    /* JADX WARN: Code restructure failed: missing block: B:89:0x013d, code lost:
    
        if (((nd.n0) r0.valueAt(r0.size() - 1)).a.equals(r16.B) == false) goto L89;
     */
    /* JADX WARN: Removed duplicated region for block: B:24:0x005a  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x00c0 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    @Override // qc.v
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void b(long j, int i5, int i6, int i10, qc.u uVar) {
        int i11;
        boolean z5;
        if (this.f15166z) {
            Format format = this.A;
            ke.b.l(format);
            e(format);
        }
        int i12 = i5 & 1;
        boolean z6 = i12 != 0;
        if (this.f15164x) {
            if (!z6) {
                return;
            } else {
                this.f15164x = false;
            }
        }
        long j5 = j + this.F;
        if (this.D) {
            if (j5 < this.f15160t) {
                return;
            }
            if (i12 == 0) {
                if (!this.E) {
                    ke.b.N("SampleQueue", "Overriding unexpected non-sync sample for format: " + this.B);
                    this.E = true;
                }
                i11 = i5 | 1;
                if (this.G) {
                    if (!z6) {
                        return;
                    }
                    synchronized (this) {
                        if (this.f15156p == 0) {
                            z5 = j5 > this.f15161u;
                        } else {
                            synchronized (this) {
                                long max = Math.max(this.f15161u, m(this.f15159s));
                                if (max >= j5) {
                                    z5 = false;
                                } else {
                                    int i13 = this.f15156p;
                                    int o6 = o(i13 - 1);
                                    while (i13 > this.f15159s && this.f15154n[o6] >= j5) {
                                        i13--;
                                        o6--;
                                        if (o6 == -1) {
                                            o6 = this.f15151i - 1;
                                        }
                                    }
                                    i(this.f15157q + i13);
                                    z5 = true;
                                }
                            }
                        }
                    }
                    if (!z5) {
                        return;
                    } else {
                        this.G = false;
                    }
                }
                long j7 = (this.a.f15136g - i6) - i10;
                synchronized (this) {
                    try {
                        int i14 = this.f15156p;
                        if (i14 > 0) {
                            int o7 = o(i14 - 1);
                            ke.b.g(this.k[o7] + ((long) this.f15152l[o7]) <= j7);
                        }
                        this.f15163w = (536870912 & i11) != 0;
                        this.f15162v = Math.max(this.f15162v, j5);
                        int o10 = o(this.f15156p);
                        this.f15154n[o10] = j5;
                        this.k[o10] = j7;
                        this.f15152l[o10] = i6;
                        this.f15153m[o10] = i11;
                        this.f15155o[o10] = uVar;
                        this.j[o10] = this.C;
                        if (!(((SparseArray) this.f15145c.f15i).size() == 0)) {
                            SparseArray sparseArray = (SparseArray) this.f15145c.f15i;
                        }
                        nc.r rVar = this.f15146d;
                        nc.q e9 = rVar != null ? rVar.e(this.f15147e, this.B) : nc.q.f15048p;
                        a1.d dVar = this.f15145c;
                        int i15 = this.f15157q + this.f15156p;
                        Format format2 = this.B;
                        format2.getClass();
                        n0 n0Var = new n0(format2, e9);
                        SparseArray sparseArray2 = (SparseArray) dVar.f15i;
                        if (dVar.f14e == -1) {
                            ke.b.k(sparseArray2.size() == 0);
                            dVar.f14e = 0;
                        }
                        if (sparseArray2.size() > 0) {
                            int keyAt = sparseArray2.keyAt(sparseArray2.size() - 1);
                            ke.b.g(i15 >= keyAt);
                            if (keyAt == i15) {
                                ((n1.k) dVar.f16v).b(sparseArray2.valueAt(sparseArray2.size() - 1));
                            }
                        }
                        sparseArray2.append(i15, n0Var);
                        int i16 = this.f15156p + 1;
                        this.f15156p = i16;
                        int i17 = this.f15151i;
                        if (i16 == i17) {
                            int i18 = i17 + 1000;
                            long[] jArr = new long[i18];
                            long[] jArr2 = new long[i18];
                            long[] jArr3 = new long[i18];
                            int[] iArr = new int[i18];
                            int[] iArr2 = new int[i18];
                            qc.u[] uVarArr = new qc.u[i18];
                            int i19 = this.f15158r;
                            int i20 = i17 - i19;
                            System.arraycopy(this.k, i19, jArr2, 0, i20);
                            System.arraycopy(this.f15154n, this.f15158r, jArr3, 0, i20);
                            System.arraycopy(this.f15153m, this.f15158r, iArr, 0, i20);
                            System.arraycopy(this.f15152l, this.f15158r, iArr2, 0, i20);
                            System.arraycopy(this.f15155o, this.f15158r, uVarArr, 0, i20);
                            System.arraycopy(this.j, this.f15158r, jArr, 0, i20);
                            int i21 = this.f15158r;
                            System.arraycopy(this.k, 0, jArr2, i20, i21);
                            System.arraycopy(this.f15154n, 0, jArr3, i20, i21);
                            System.arraycopy(this.f15153m, 0, iArr, i20, i21);
                            System.arraycopy(this.f15152l, 0, iArr2, i20, i21);
                            System.arraycopy(this.f15155o, 0, uVarArr, i20, i21);
                            System.arraycopy(this.j, 0, jArr, i20, i21);
                            this.k = jArr2;
                            this.f15154n = jArr3;
                            this.f15153m = iArr;
                            this.f15152l = iArr2;
                            this.f15155o = uVarArr;
                            this.j = jArr;
                            this.f15158r = 0;
                            this.f15151i = i18;
                        }
                    } finally {
                    }
                }
                return;
            }
        }
        i11 = i5;
        if (this.G) {
        }
        long j72 = (this.a.f15136g - i6) - i10;
        synchronized (this) {
        }
    }

    @Override // qc.v
    public final int c(ie.k kVar, int i5, boolean z5) {
        l0 l0Var = this.a;
        int c6 = l0Var.c(i5);
        k0 k0Var = l0Var.f15135f;
        ie.a aVar = (ie.a) k0Var.f15122i;
        int read = kVar.read(aVar.a, ((int) (l0Var.f15136g - k0Var.f15120d)) + aVar.f10652b, c6);
        if (read == -1) {
            if (z5) {
                return -1;
            }
            throw new EOFException();
        }
        long j = l0Var.f15136g + read;
        l0Var.f15136g = j;
        k0 k0Var2 = l0Var.f15135f;
        if (j == k0Var2.f15121e) {
            l0Var.f15135f = (k0) k0Var2.f15123v;
        }
        return read;
    }

    @Override // qc.v
    public final void d(int i5, ke.w wVar) {
        while (true) {
            l0 l0Var = this.a;
            if (i5 <= 0) {
                l0Var.getClass();
                return;
            }
            int c6 = l0Var.c(i5);
            k0 k0Var = l0Var.f15135f;
            ie.a aVar = (ie.a) k0Var.f15122i;
            wVar.e(aVar.a, ((int) (l0Var.f15136g - k0Var.f15120d)) + aVar.f10652b, c6);
            i5 -= c6;
            long j = l0Var.f15136g + c6;
            l0Var.f15136g = j;
            k0 k0Var2 = l0Var.f15135f;
            if (j == k0Var2.f15121e) {
                l0Var.f15135f = (k0) k0Var2.f15123v;
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:72:0x010e, code lost:
    
        if (r6 == 16) goto L21;
     */
    /* JADX WARN: Removed duplicated region for block: B:29:0x006a  */
    /* JADX WARN: Type inference failed for: r6v31, types: [java.lang.Object, nd.o0] */
    @Override // qc.v
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void e(Format format) {
        String str;
        boolean z5;
        Format l6 = l(format);
        boolean z6 = false;
        this.f15166z = false;
        this.A = format;
        synchronized (this) {
            try {
                this.f15165y = false;
                if (!ke.d0.a(l6, this.B)) {
                    if (!(((SparseArray) this.f15145c.f15i).size() == 0)) {
                        SparseArray sparseArray = (SparseArray) this.f15145c.f15i;
                        if (((n0) sparseArray.valueAt(sparseArray.size() - 1)).a.equals(l6)) {
                            SparseArray sparseArray2 = (SparseArray) this.f15145c.f15i;
                            this.B = ((n0) sparseArray2.valueAt(sparseArray2.size() - 1)).a;
                            Format format2 = this.B;
                            str = format2.I;
                            String str2 = format2.F;
                            ArrayList arrayList = ke.o.a;
                            if (str != null) {
                                switch (str) {
                                    case "audio/eac3-joc":
                                    case "audio/mpeg-L1":
                                    case "audio/mpeg-L2":
                                    case "audio/ac3":
                                    case "audio/raw":
                                    case "audio/eac3":
                                    case "audio/flac":
                                    case "audio/mpeg":
                                    case "audio/g711-alaw":
                                    case "audio/g711-mlaw":
                                        z5 = true;
                                        break;
                                    case "audio/mp4a-latm":
                                        if (str2 != null) {
                                            c5.e f2 = ke.o.f(str2);
                                            if (f2 == null) {
                                                break;
                                            } else {
                                                int b10 = f2.b();
                                                if (b10 != 0) {
                                                    break;
                                                }
                                            }
                                        }
                                        break;
                                }
                                this.D = z5;
                                this.E = false;
                                z6 = true;
                            }
                            z5 = false;
                            this.D = z5;
                            this.E = false;
                            z6 = true;
                        }
                    }
                    this.B = l6;
                    Format format22 = this.B;
                    str = format22.I;
                    String str22 = format22.F;
                    ArrayList arrayList2 = ke.o.a;
                    if (str != null) {
                    }
                    z5 = false;
                    this.D = z5;
                    this.E = false;
                    z6 = true;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        ?? r62 = this.f15148f;
        if (r62 == 0 || !z6) {
            return;
        }
        r62.b();
    }

    public final long f(int i5) {
        this.f15161u = Math.max(this.f15161u, m(i5));
        this.f15156p -= i5;
        int i6 = this.f15157q + i5;
        this.f15157q = i6;
        int i10 = this.f15158r + i5;
        this.f15158r = i10;
        int i11 = this.f15151i;
        if (i10 >= i11) {
            this.f15158r = i10 - i11;
        }
        int i12 = this.f15159s - i5;
        this.f15159s = i12;
        int i13 = 0;
        if (i12 < 0) {
            this.f15159s = 0;
        }
        a1.d dVar = this.f15145c;
        SparseArray sparseArray = (SparseArray) dVar.f15i;
        while (i13 < sparseArray.size() - 1) {
            int i14 = i13 + 1;
            if (i6 < sparseArray.keyAt(i14)) {
                break;
            }
            ((n1.k) dVar.f16v).b(sparseArray.valueAt(i13));
            sparseArray.removeAt(i13);
            int i15 = dVar.f14e;
            if (i15 > 0) {
                dVar.f14e = i15 - 1;
            }
            i13 = i14;
        }
        if (this.f15156p != 0) {
            return this.k[this.f15158r];
        }
        int i16 = this.f15158r;
        if (i16 == 0) {
            i16 = this.f15151i;
        }
        return this.k[i16 - 1] + this.f15152l[r7];
    }

    public final void g(long j, boolean z5) {
        Throwable th2;
        l0 l0Var = this.a;
        synchronized (this) {
            try {
                try {
                    int i5 = this.f15156p;
                    long j5 = -1;
                    if (i5 != 0) {
                        long[] jArr = this.f15154n;
                        int i6 = this.f15158r;
                        if (j >= jArr[i6]) {
                            if (z5) {
                                try {
                                    int i10 = this.f15159s;
                                    if (i10 != i5) {
                                        i5 = i10 + 1;
                                    }
                                } catch (Throwable th3) {
                                    th2 = th3;
                                    throw th2;
                                }
                            }
                            int k = k(i6, j, i5, false);
                            if (k != -1) {
                                j5 = f(k);
                            }
                            l0Var.b(j5);
                        }
                    }
                    l0Var.b(j5);
                } catch (Throwable th4) {
                    th = th4;
                    th2 = th;
                    throw th2;
                }
            } catch (Throwable th5) {
                th = th5;
                th2 = th;
                throw th2;
            }
        }
    }

    public final void h() {
        long f2;
        l0 l0Var = this.a;
        synchronized (this) {
            int i5 = this.f15156p;
            f2 = i5 == 0 ? -1L : f(i5);
        }
        l0Var.b(f2);
    }

    public final long i(int i5) {
        int i6 = this.f15157q;
        int i10 = this.f15156p;
        int i11 = (i6 + i10) - i5;
        boolean z5 = false;
        ke.b.g(i11 >= 0 && i11 <= i10 - this.f15159s);
        int i12 = this.f15156p - i11;
        this.f15156p = i12;
        this.f15162v = Math.max(this.f15161u, m(i12));
        if (i11 == 0 && this.f15163w) {
            z5 = true;
        }
        this.f15163w = z5;
        a1.d dVar = this.f15145c;
        SparseArray sparseArray = (SparseArray) dVar.f15i;
        for (int size = sparseArray.size() - 1; size >= 0 && i5 < sparseArray.keyAt(size); size--) {
            ((n1.k) dVar.f16v).b(sparseArray.valueAt(size));
            sparseArray.removeAt(size);
        }
        dVar.f14e = sparseArray.size() > 0 ? Math.min(dVar.f14e, sparseArray.size() - 1) : -1;
        int i13 = this.f15156p;
        if (i13 == 0) {
            return 0L;
        }
        return this.k[o(i13 - 1)] + this.f15152l[r9];
    }

    public final void j(int i5) {
        long i6 = i(i5);
        l0 l0Var = this.a;
        int i10 = l0Var.f15131b;
        ke.b.g(i6 <= l0Var.f15136g);
        l0Var.f15136g = i6;
        if (i6 != 0) {
            k0 k0Var = l0Var.f15133d;
            if (i6 != k0Var.f15120d) {
                while (l0Var.f15136g > k0Var.f15121e) {
                    k0Var = (k0) k0Var.f15123v;
                }
                k0 k0Var2 = (k0) k0Var.f15123v;
                k0Var2.getClass();
                l0Var.a(k0Var2);
                k0 k0Var3 = new k0(k0Var.f15121e, i10);
                k0Var.f15123v = k0Var3;
                if (l0Var.f15136g == k0Var.f15121e) {
                    k0Var = k0Var3;
                }
                l0Var.f15135f = k0Var;
                if (l0Var.f15134e == k0Var2) {
                    l0Var.f15134e = k0Var3;
                    return;
                }
                return;
            }
        }
        l0Var.a(l0Var.f15133d);
        k0 k0Var4 = new k0(l0Var.f15136g, i10);
        l0Var.f15133d = k0Var4;
        l0Var.f15134e = k0Var4;
        l0Var.f15135f = k0Var4;
    }

    public final int k(int i5, long j, int i6, boolean z5) {
        int i10 = -1;
        for (int i11 = 0; i11 < i6; i11++) {
            long j5 = this.f15154n[i5];
            if (j5 > j) {
                break;
            }
            if (!z5 || (this.f15153m[i5] & 1) != 0) {
                if (j5 == j) {
                    return i11;
                }
                i10 = i11;
            }
            i5++;
            if (i5 == this.f15151i) {
                i5 = 0;
            }
        }
        return i10;
    }

    public Format l(Format format) {
        if (this.F == 0 || format.M == LongCompanionObject.MAX_VALUE) {
            return format;
        }
        hc.f0 a = format.a();
        a.f9681o = format.M + this.F;
        return new Format(a);
    }

    public final long m(int i5) {
        long j = Long.MIN_VALUE;
        if (i5 == 0) {
            return Long.MIN_VALUE;
        }
        int o6 = o(i5 - 1);
        for (int i6 = 0; i6 < i5; i6++) {
            j = Math.max(j, this.f15154n[o6]);
            if ((this.f15153m[o6] & 1) != 0) {
                return j;
            }
            o6--;
            if (o6 == -1) {
                o6 = this.f15151i - 1;
            }
        }
        return j;
    }

    public final int n() {
        return this.f15157q + this.f15159s;
    }

    public final int o(int i5) {
        int i6 = this.f15158r + i5;
        int i10 = this.f15151i;
        return i6 < i10 ? i6 : i6 - i10;
    }

    public final synchronized int p(long j, boolean z5) {
        try {
            try {
                int o6 = o(this.f15159s);
                int i5 = this.f15159s;
                int i6 = this.f15156p;
                if (!(i5 != i6) || j < this.f15154n[o6]) {
                    return 0;
                }
                if (j > this.f15162v && z5) {
                    return i6 - i5;
                }
                int k = k(o6, j, i6 - i5, true);
                if (k == -1) {
                    return 0;
                }
                return k;
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        } catch (Throwable th3) {
            th = th3;
            throw th;
        }
    }

    public final synchronized Format q() {
        return this.f15165y ? null : this.B;
    }

    public final synchronized boolean r(boolean z5) {
        Format format;
        boolean z6 = false;
        if (this.f15159s != this.f15156p) {
            if (((n0) this.f15145c.g(n())).a != this.f15149g) {
                return true;
            }
            return s(o(this.f15159s));
        }
        if (z5 || this.f15163w || ((format = this.B) != null && format != this.f15149g)) {
            z6 = true;
        }
        return z6;
    }

    public final boolean s(int i5) {
        nc.k kVar = this.f15150h;
        if (kVar == null || kVar.getState() == 4) {
            return true;
        }
        return (this.f15153m[i5] & 1073741824) == 0 && this.f15150h.b();
    }

    public final void t() {
        nc.k kVar = this.f15150h;
        if (kVar == null || kVar.getState() != 1) {
            return;
        }
        nc.j error = this.f15150h.getError();
        error.getClass();
        throw error;
    }

    public final void u(Format format, e4.l lVar) {
        Format format2;
        Format format3 = this.f15149g;
        boolean z5 = format3 == null;
        nc.i iVar = z5 ? null : format3.L;
        this.f15149g = format;
        nc.i iVar2 = format.L;
        nc.r rVar = this.f15146d;
        if (rVar != null) {
            int b10 = rVar.b(format);
            hc.f0 a = format.a();
            a.F = b10;
            format2 = new Format(a);
        } else {
            format2 = format;
        }
        lVar.f7960i = format2;
        lVar.f7959e = this.f15150h;
        if (rVar == null) {
            return;
        }
        if (z5 || !ke.d0.a(iVar, iVar2)) {
            nc.k kVar = this.f15150h;
            nc.n nVar = this.f15147e;
            nc.k d6 = rVar.d(nVar, format);
            this.f15150h = d6;
            lVar.f7959e = d6;
            if (kVar != null) {
                kVar.d(nVar);
            }
        }
    }

    public final synchronized long v() {
        try {
        } catch (Throwable th2) {
            throw th2;
        }
        return this.f15159s != this.f15156p ? this.j[o(this.f15159s)] : this.C;
    }

    public final int w(e4.l lVar, mc.f fVar, int i5, boolean z5) {
        int i6;
        boolean z6 = (i5 & 2) != 0;
        m0 m0Var = this.f15144b;
        synchronized (this) {
            try {
                fVar.f14437w = false;
                i6 = -3;
                if (this.f15159s != this.f15156p) {
                    Format format = ((n0) this.f15145c.g(n())).a;
                    if (!z6 && format == this.f15149g) {
                        int o6 = o(this.f15159s);
                        if (s(o6)) {
                            fVar.f14426e = this.f15153m[o6];
                            if (this.f15159s == this.f15156p - 1 && (z5 || this.f15163w)) {
                                fVar.a(536870912);
                            }
                            long j = this.f15154n[o6];
                            fVar.f14438x = j;
                            if (j < this.f15160t) {
                                fVar.a(Integer.MIN_VALUE);
                            }
                            m0Var.a = this.f15152l[o6];
                            m0Var.f15140b = this.k[o6];
                            m0Var.f15141c = this.f15155o[o6];
                            i6 = -4;
                        } else {
                            fVar.f14437w = true;
                        }
                    }
                    u(format, lVar);
                    i6 = -5;
                } else {
                    if (!z5 && !this.f15163w) {
                        Format format2 = this.B;
                        if (format2 == null || (!z6 && format2 == this.f15149g)) {
                        }
                        u(format2, lVar);
                        i6 = -5;
                    }
                    fVar.f14426e = 4;
                    i6 = -4;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (i6 == -4 && !fVar.c(4)) {
            boolean z7 = (i5 & 1) != 0;
            if ((i5 & 4) == 0) {
                if (z7) {
                    l0 l0Var = this.a;
                    l0.f(l0Var.f15134e, fVar, this.f15144b, l0Var.f15132c);
                } else {
                    l0 l0Var2 = this.a;
                    l0Var2.f15134e = l0.f(l0Var2.f15134e, fVar, this.f15144b, l0Var2.f15132c);
                }
            }
            if (!z7) {
                this.f15159s++;
            }
        }
        return i6;
    }

    public final void x(boolean z5) {
        l0 l0Var = this.a;
        l0Var.a(l0Var.f15133d);
        k0 k0Var = l0Var.f15133d;
        int i5 = l0Var.f15131b;
        ke.b.k(((ie.a) k0Var.f15122i) == null);
        k0Var.f15120d = 0L;
        k0Var.f15121e = i5;
        k0 k0Var2 = l0Var.f15133d;
        l0Var.f15134e = k0Var2;
        l0Var.f15135f = k0Var2;
        l0Var.f15136g = 0L;
        l0Var.a.b();
        this.f15156p = 0;
        this.f15157q = 0;
        this.f15158r = 0;
        this.f15159s = 0;
        this.f15164x = true;
        this.f15160t = Long.MIN_VALUE;
        this.f15161u = Long.MIN_VALUE;
        this.f15162v = Long.MIN_VALUE;
        this.f15163w = false;
        a1.d dVar = this.f15145c;
        SparseArray sparseArray = (SparseArray) dVar.f15i;
        for (int i6 = 0; i6 < sparseArray.size(); i6++) {
            ((n1.k) dVar.f16v).b(sparseArray.valueAt(i6));
        }
        dVar.f14e = -1;
        sparseArray.clear();
        if (z5) {
            this.A = null;
            this.B = null;
            this.f15165y = true;
        }
    }

    public final synchronized boolean y(long j, boolean z5) {
        try {
            try {
                synchronized (this) {
                    try {
                        this.f15159s = 0;
                        l0 l0Var = this.a;
                        l0Var.f15134e = l0Var.f15133d;
                        int o6 = o(0);
                        int i5 = this.f15159s;
                        int i6 = this.f15156p;
                        if ((i5 != i6) && j >= this.f15154n[o6]) {
                            if (j <= this.f15162v || z5) {
                                int k = k(o6, j, i6 - i5, true);
                                if (k == -1) {
                                    return false;
                                }
                                this.f15160t = j;
                                this.f15159s += k;
                                return true;
                            }
                        }
                        return false;
                    } finally {
                        th = th;
                        while (true) {
                            Throwable th2 = th;
                            try {
                            } catch (Throwable th3) {
                                th = th3;
                            }
                        }
                    }
                }
            } catch (Throwable th4) {
                th = th4;
                throw th;
            }
        } catch (Throwable th5) {
            th = th5;
            throw th;
        }
    }

    public final synchronized void z(int i5) {
        boolean z5;
        if (i5 >= 0) {
            try {
                if (this.f15159s + i5 <= this.f15156p) {
                    z5 = true;
                    ke.b.g(z5);
                    this.f15159s += i5;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        z5 = false;
        ke.b.g(z5);
        this.f15159s += i5;
    }
}
